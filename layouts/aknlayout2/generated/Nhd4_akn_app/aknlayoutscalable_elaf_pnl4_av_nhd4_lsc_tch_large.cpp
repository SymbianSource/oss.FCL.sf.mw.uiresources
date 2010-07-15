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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00049eaf };

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
0x9202,	// (0x000530b1) Screen

0x9216,	// (0x000530c5) application_window_ParamLimits

0x9216,	// (0x000530c5) application_window

0x9230,	// (0x000530df) screen_g1

0x9262,	// (0x00053111) area_bottom_pane_ParamLimits

0x9262,	// (0x00053111) area_bottom_pane

0xedcf,	// (0x00058c7e) area_top_pane_ParamLimits

0xedcf,	// (0x00058c7e) area_top_pane

0xee63,	// (0x00058d12) main_pane_ParamLimits

0xee63,	// (0x00058d12) main_pane

0x9320,	// (0x000531cf) misc_graphics

0xb289,	// (0x00055138) battery_pane_ParamLimits

0xb289,	// (0x00055138) battery_pane

0x3017,	// (0x0004cec6) bg_status_flat_pane_g8

0x301f,	// (0x0004cece) bg_status_flat_pane_g9

0x2411,	// (0x0004c2c0) context_pane_ParamLimits

0x2411,	// (0x0004c2c0) context_pane

0xc053,	// (0x00055f02) navi_pane_ParamLimits

0xc053,	// (0x00055f02) navi_pane

0xc0d1,	// (0x00055f80) signal_pane_ParamLimits

0xc0d1,	// (0x00055f80) signal_pane

0x0008,

0xf863,	// (0x00059712) bg_status_flat_pane_g

0xc161,	// (0x00056010) status_pane_g1_ParamLimits

0xc161,	// (0x00056010) status_pane_g1

0xc177,	// (0x00056026) status_pane_g2_ParamLimits

0xc177,	// (0x00056026) status_pane_g2

0x2638,	// (0x0004c4e7) status_pane_g3_ParamLimits

0x2638,	// (0x0004c4e7) status_pane_g3

0x0004,

0xf796,	// (0x00059645) status_pane_g_ParamLimits

0xf796,	// (0x00059645) status_pane_g

0xc183,	// (0x00056032) title_pane_ParamLimits

0xc183,	// (0x00056032) title_pane

0xc1e6,	// (0x00056095) uni_indicator_pane_ParamLimits

0xc1e6,	// (0x00056095) uni_indicator_pane

0x2279,	// (0x0004c128) bg_list_pane_ParamLimits

0x2279,	// (0x0004c128) bg_list_pane

0xaa51,	// (0x00054900) find_pane

0x2834,	// (0x0004c6e3) listscroll_app_pane_ParamLimits

0x2834,	// (0x0004c6e3) listscroll_app_pane

0x22a5,	// (0x0004c154) listscroll_form_pane

0xaa59,	// (0x00054908) listscroll_gen_pane_ParamLimits

0xaa59,	// (0x00054908) listscroll_gen_pane

0x06bf,	// (0x0004a56e) listscroll_set_pane

0x3b7b,	// (0x0004da2a) main_idle_act_pane

0xe3f3,	// (0x000582a2) main_idle_trad_pane

0xe3f3,	// (0x000582a2) main_list_empty_pane

0x2299,	// (0x0004c148) main_midp_pane

0x22bf,	// (0x0004c16e) main_pane_g1_ParamLimits

0x22bf,	// (0x0004c16e) main_pane_g1

0xaa6d,	// (0x0005491c) popup_ai_message_window_ParamLimits

0xaa6d,	// (0x0005491c) popup_ai_message_window

0xab1e,	// (0x000549cd) popup_fep_china_uni_window_ParamLimits

0xab1e,	// (0x000549cd) popup_fep_china_uni_window

0xab78,	// (0x00054a27) popup_fep_japan_candidate_window_ParamLimits

0xab78,	// (0x00054a27) popup_fep_japan_candidate_window

0xab96,	// (0x00054a45) popup_fep_japan_predictive_window_ParamLimits

0xab96,	// (0x00054a45) popup_fep_japan_predictive_window

0xaba8,	// (0x00054a57) popup_find_window

0xabc5,	// (0x00054a74) popup_grid_graphic_window_ParamLimits

0xabc5,	// (0x00054a74) popup_grid_graphic_window

0xac63,	// (0x00054b12) popup_large_graphic_colour_window

0xac89,	// (0x00054b38) popup_menu_window_ParamLimits

0xac89,	// (0x00054b38) popup_menu_window

0xae5b,	// (0x00054d0a) popup_note_image_window

0xae21,	// (0x00054cd0) popup_note_wait_window_ParamLimits

0xae21,	// (0x00054cd0) popup_note_wait_window

0xae73,	// (0x00054d22) popup_note_window_ParamLimits

0xae73,	// (0x00054d22) popup_note_window

0xaf22,	// (0x00054dd1) popup_query_code_window_ParamLimits

0xaf22,	// (0x00054dd1) popup_query_code_window

0xaf5c,	// (0x00054e0b) popup_query_data_code_window_ParamLimits

0xaf5c,	// (0x00054e0b) popup_query_data_code_window

0xaf79,	// (0x00054e28) popup_query_data_window_ParamLimits

0xaf79,	// (0x00054e28) popup_query_data_window

0xaffb,	// (0x00054eaa) popup_query_sat_info_window_ParamLimits

0xaffb,	// (0x00054eaa) popup_query_sat_info_window

0xb092,	// (0x00054f41) popup_snote_single_graphic_window_ParamLimits

0xb092,	// (0x00054f41) popup_snote_single_graphic_window

0xb092,	// (0x00054f41) popup_snote_single_text_window_ParamLimits

0xb092,	// (0x00054f41) popup_snote_single_text_window

0x0b1d,	// (0x0004a9cc) popup_sub_window_general

0xb1ef,	// (0x0005509e) popup_window_general_ParamLimits

0xb1ef,	// (0x0005509e) popup_window_general

0x22cd,	// (0x0004c17c) power_save_pane

0xa8af,	// (0x0005475e) control_pane_g1_ParamLimits

0xa8af,	// (0x0005475e) control_pane_g1

0xa8d8,	// (0x00054787) control_pane_g2_ParamLimits

0xa8d8,	// (0x00054787) control_pane_g2

0x0575,	// (0x0004a424) control_pane_g3_ParamLimits

0x0575,	// (0x0004a424) control_pane_g3

0x0007,

0xf77e,	// (0x0005962d) control_pane_g_ParamLimits

0xf77e,	// (0x0005962d) control_pane_g

0xa940,	// (0x000547ef) control_pane_t1_ParamLimits

0xa940,	// (0x000547ef) control_pane_t1

0xa9a6,	// (0x00054855) control_pane_t2_ParamLimits

0xa9a6,	// (0x00054855) control_pane_t2

0x0002,

0xf78f,	// (0x0005963e) control_pane_t_ParamLimits

0xf78f,	// (0x0005963e) control_pane_t

0xa808,	// (0x000546b7) navi_navi_volume_pane_cp1

0xa810,	// (0x000546bf) status_small_icon_pane

0xe4f5,	// (0x000583a4) status_small_pane_g1_ParamLimits

0xe4f5,	// (0x000583a4) status_small_pane_g1

0xa818,	// (0x000546c7) status_small_pane_g2_ParamLimits

0xa818,	// (0x000546c7) status_small_pane_g2

0xa824,	// (0x000546d3) status_small_pane_g3_ParamLimits

0xa824,	// (0x000546d3) status_small_pane_g3

0xa830,	// (0x000546df) status_small_pane_g4_ParamLimits

0xa830,	// (0x000546df) status_small_pane_g4

0xa83c,	// (0x000546eb) status_small_pane_g5_ParamLimits

0xa83c,	// (0x000546eb) status_small_pane_g5

0xa84a,	// (0x000546f9) status_small_pane_g6_ParamLimits

0xa84a,	// (0x000546f9) status_small_pane_g6

0x0007,

0xf76d,	// (0x0005961c) status_small_pane_g_ParamLimits

0xf76d,	// (0x0005961c) status_small_pane_g

0xa879,	// (0x00054728) status_small_pane_t1

0xa89b,	// (0x0005474a) status_small_wait_pane_ParamLimits

0xa89b,	// (0x0005474a) status_small_wait_pane

0xa55e,	// (0x0005440d) aid_levels_signal_ParamLimits

0xa55e,	// (0x0005440d) aid_levels_signal

0xa576,	// (0x00054425) signal_pane_g1_ParamLimits

0xa576,	// (0x00054425) signal_pane_g1

0xa591,	// (0x00054440) signal_pane_g2_ParamLimits

0xa591,	// (0x00054440) signal_pane_g2

0x0003,

0xf6fe,	// (0x000595ad) signal_pane_g_ParamLimits

0xf6fe,	// (0x000595ad) signal_pane_g

0xbe26,	// (0x00055cd5) context_pane_g1

0x946a,	// (0x00053319) title_pane_g1

0x94ad,	// (0x0005335c) title_pane_t1

0x9539,	// (0x000533e8) title_pane_t2

0x955f,	// (0x0005340e) title_pane_t3

0x0002,

0xf557,	// (0x00059406) title_pane_t

0xc20e,	// (0x000560bd) aid_levels_battery_ParamLimits

0xc20e,	// (0x000560bd) aid_levels_battery

0xc22a,	// (0x000560d9) battery_pane_g1_ParamLimits

0xc22a,	// (0x000560d9) battery_pane_g1

0xc247,	// (0x000560f6) battery_pane_g2_ParamLimits

0xc247,	// (0x000560f6) battery_pane_g2

0x0001,

0xf7a1,	// (0x00059650) battery_pane_g_ParamLimits

0xf7a1,	// (0x00059650) battery_pane_g

0xc80d,	// (0x000566bc) uni_indicator_pane_g1

0xc823,	// (0x000566d2) uni_indicator_pane_g2

0xc839,	// (0x000566e8) uni_indicator_pane_g3

0x0005,

0xf90b,	// (0x000597ba) uni_indicator_pane_g

0xe293,	// (0x00058142) navi_icon_pane_ParamLimits

0xe293,	// (0x00058142) navi_icon_pane

0xe1e8,	// (0x00058097) navi_midp_pane

0xe2af,	// (0x0005815e) navi_navi_pane

0xe2b9,	// (0x00058168) navi_text_pane_ParamLimits

0xe2b9,	// (0x00058168) navi_text_pane

0x9230,	// (0x000530df) status_small_wait_pane_g1

0x9adf,	// (0x0005398e) status_small_wait_pane_g2

0x0001,

0xf906,	// (0x000597b5) status_small_wait_pane_g

0xc766,	// (0x00056615) navi_navi_icon_text_pane

0x366a,	// (0x0004d519) navi_navi_pane_g1_ParamLimits

0x366a,	// (0x0004d519) navi_navi_pane_g1

0x367c,	// (0x0004d52b) navi_navi_pane_g2_ParamLimits

0x367c,	// (0x0004d52b) navi_navi_pane_g2

0x0001,

0xf8d4,	// (0x00059783) navi_navi_pane_g_ParamLimits

0xf8d4,	// (0x00059783) navi_navi_pane_g

0x368e,	// (0x0004d53d) navi_navi_tabs_pane

0x3697,	// (0x0004d546) navi_navi_text_pane

0xc766,	// (0x00056615) navi_navi_volume_pane

0x363e,	// (0x0004d4ed) navi_text_pane_t1

0x3632,	// (0x0004d4e1) navi_icon_pane_g1

0x3585,	// (0x0004d434) navi_navi_text_pane_t1

0xb46d,	// (0x0005531c) navi_navi_volume_pane_g1

0x0f0b,	// (0x0004adba) volume_small_pane

0x34eb,	// (0x0004d39a) navi_navi_icon_text_pane_g1

0xc6be,	// (0x0005656d) navi_navi_icon_text_pane_t1

0xe2af,	// (0x0005815e) navi_tabs_2_long_pane

0xe2af,	// (0x0005815e) navi_tabs_2_pane

0xe2af,	// (0x0005815e) navi_tabs_3_long_pane

0xe2af,	// (0x0005815e) navi_tabs_3_pane

0xe2af,	// (0x0005815e) navi_tabs_4_pane

0x0ee3,	// (0x0004ad92) tabs_2_active_pane_ParamLimits

0x0ee3,	// (0x0004ad92) tabs_2_active_pane

0x0ef3,	// (0x0004ada2) tabs_2_passive_pane_ParamLimits

0x0ef3,	// (0x0004ada2) tabs_2_passive_pane

0x0eb1,	// (0x0004ad60) tabs_3_active_pane_ParamLimits

0x0eb1,	// (0x0004ad60) tabs_3_active_pane

0x0ec1,	// (0x0004ad70) tabs_3_passive_pane_ParamLimits

0x0ec1,	// (0x0004ad70) tabs_3_passive_pane

0x0ed2,	// (0x0004ad81) tabs_3_passive_pane_cp_ParamLimits

0x0ed2,	// (0x0004ad81) tabs_3_passive_pane_cp

0x0e6d,	// (0x0004ad1c) tabs_4_active_pane_ParamLimits

0x0e6d,	// (0x0004ad1c) tabs_4_active_pane

0x0e7e,	// (0x0004ad2d) tabs_4_passive_pane_ParamLimits

0x0e7e,	// (0x0004ad2d) tabs_4_passive_pane

0x0e8f,	// (0x0004ad3e) tabs_4_passive_pane_cp_ParamLimits

0x0e8f,	// (0x0004ad3e) tabs_4_passive_pane_cp

0x0ea0,	// (0x0004ad4f) tabs_4_passive_pane_cp2_ParamLimits

0x0ea0,	// (0x0004ad4f) tabs_4_passive_pane_cp2

0x0e49,	// (0x0004acf8) tabs_2_long_active_pane_ParamLimits

0x0e49,	// (0x0004acf8) tabs_2_long_active_pane

0x0e5b,	// (0x0004ad0a) tabs_2_long_passive_pane_ParamLimits

0x0e5b,	// (0x0004ad0a) tabs_2_long_passive_pane

0x0e04,	// (0x0004acb3) tabs_3_long_active_pane_ParamLimits

0x0e04,	// (0x0004acb3) tabs_3_long_active_pane

0x0e1d,	// (0x0004accc) tabs_3_long_passive_pane_ParamLimits

0x0e1d,	// (0x0004accc) tabs_3_long_passive_pane

0x0e30,	// (0x0004acdf) tabs_3_long_passive_pane_cp_ParamLimits

0x0e30,	// (0x0004acdf) tabs_3_long_passive_pane_cp

0x0daa,	// (0x0004ac59) volume_small_pane_g1

0x0db3,	// (0x0004ac62) volume_small_pane_g2

0x0dbc,	// (0x0004ac6b) volume_small_pane_g3

0x0dc5,	// (0x0004ac74) volume_small_pane_g4

0x0dce,	// (0x0004ac7d) volume_small_pane_g5

0x0dd7,	// (0x0004ac86) volume_small_pane_g6

0x0de0,	// (0x0004ac8f) volume_small_pane_g7

0x0de9,	// (0x0004ac98) volume_small_pane_g8

0x0df2,	// (0x0004aca1) volume_small_pane_g9

0x0dfb,	// (0x0004acaa) volume_small_pane_g10

0x0009,

0xf8a0,	// (0x0005974f) volume_small_pane_g

0x9571,	// (0x00053420) bg_active_tab_pane_cp2_ParamLimits

0x9571,	// (0x00053420) bg_active_tab_pane_cp2

0x957f,	// (0x0005342e) tabs_3_active_pane_g1

0x9587,	// (0x00053436) tabs_3_active_pane_t1

0x9571,	// (0x00053420) bg_passive_tab_pane_cp2_ParamLimits

0x9571,	// (0x00053420) bg_passive_tab_pane_cp2

0x957f,	// (0x0005342e) tabs_3_passive_pane_g1

0x9587,	// (0x00053436) tabs_3_passive_pane_t1

0x9571,	// (0x00053420) bg_active_tab_pane_cp3_ParamLimits

0x9571,	// (0x00053420) bg_active_tab_pane_cp3

0x9599,	// (0x00053448) tabs_4_active_pane_g1

0x95a1,	// (0x00053450) tabs_4_active_pane_t1

0x9571,	// (0x00053420) bg_passive_tab_pane_cp3_ParamLimits

0x9571,	// (0x00053420) bg_passive_tab_pane_cp3

0x9599,	// (0x00053448) tabs_4_1_passive_pane_g1

0x95a1,	// (0x00053450) tabs_4_1_passive_pane_t1

0x2299,	// (0x0004c148) list_highlight_pane_cp2

0xc93f,	// (0x000567ee) list_set_pane_ParamLimits

0xc93f,	// (0x000567ee) list_set_pane

0xc9d9,	// (0x00056888) main_pane_set_t1_ParamLimits

0xc9d9,	// (0x00056888) main_pane_set_t1

0xc9f9,	// (0x000568a8) main_pane_set_t2_ParamLimits

0xc9f9,	// (0x000568a8) main_pane_set_t2

0xca0d,	// (0x000568bc) main_pane_set_t3_ParamLimits

0xca0d,	// (0x000568bc) main_pane_set_t3

0xca1f,	// (0x000568ce) main_pane_set_t4_ParamLimits

0xca1f,	// (0x000568ce) main_pane_set_t4

0x0003,

0xf970,	// (0x0005981f) main_pane_set_t_ParamLimits

0xf970,	// (0x0005981f) main_pane_set_t

0xca31,	// (0x000568e0) setting_code_pane

0xca3b,	// (0x000568ea) setting_slider_graphic_pane

0xca3b,	// (0x000568ea) setting_slider_pane

0xca3b,	// (0x000568ea) setting_text_pane

0xca3b,	// (0x000568ea) setting_volume_pane

0x95b3,	// (0x00053462) volume_set_pane

0x95bb,	// (0x0005346a) bg_set_opt_pane_cp

0x95c9,	// (0x00053478) setting_slider_pane_t1

0x95e2,	// (0x00053491) setting_slider_pane_t2

0x95fc,	// (0x000534ab) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005940d) setting_slider_pane_t

0x9614,	// (0x000534c3) slider_set_pane

0x9320,	// (0x000531cf) bg_set_opt_pane_cp2

0x962a,	// (0x000534d9) setting_slider_graphic_pane_g1

0x9633,	// (0x000534e2) setting_slider_graphic_pane_t1

0x9643,	// (0x000534f2) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00059414) setting_slider_graphic_pane_t

0x9653,	// (0x00053502) slider_set_pane_cp

0x9320,	// (0x000531cf) input_focus_pane_cp1

0x3b62,	// (0x0004da11) list_set_text_pane

0x9230,	// (0x000530df) setting_text_pane_g1

0x9320,	// (0x000531cf) input_focus_pane_cp2

0x9230,	// (0x000530df) setting_code_pane_g1

0x965b,	// (0x0005350a) setting_code_pane_t1

0xe102,	// (0x00057fb1) set_text_pane_t1_ParamLimits

0xe102,	// (0x00057fb1) set_text_pane_t1

0x9f5d,	// (0x00053e0c) set_opt_bg_pane_g1

0x9f65,	// (0x00053e14) set_opt_bg_pane_g2

0xc8f4,	// (0x000567a3) set_opt_bg_pane_g3

0x9f75,	// (0x00053e24) set_opt_bg_pane_g4

0x9f7d,	// (0x00053e2c) set_opt_bg_pane_g5

0x9f85,	// (0x00053e34) set_opt_bg_pane_g6

0xc8fe,	// (0x000567ad) set_opt_bg_pane_g7

0xc906,	// (0x000567b5) set_opt_bg_pane_g8

0xc910,	// (0x000567bf) set_opt_bg_pane_g9

0x0008,

0xf95d,	// (0x0005980c) set_opt_bg_pane_g

0xc8e7,	// (0x00056796) slider_set_pane_g1

0x0f78,	// (0x0004ae27) slider_set_pane_g2

0x0006,

0xf94e,	// (0x000597fd) slider_set_pane_g

0xb475,	// (0x00055324) volume_set_pane_g1

0xb47d,	// (0x0005532c) volume_set_pane_g2

0xb485,	// (0x00055334) volume_set_pane_g3

0xb48d,	// (0x0005533c) volume_set_pane_g4

0xb495,	// (0x00055344) volume_set_pane_g5

0xb49d,	// (0x0005534c) volume_set_pane_g6

0xb4a5,	// (0x00055354) volume_set_pane_g7

0xb4ad,	// (0x0005535c) volume_set_pane_g8

0xb4b5,	// (0x00055364) volume_set_pane_g9

0xb4bd,	// (0x0005536c) volume_set_pane_g10

0x0009,

0xf926,	// (0x000597d5) volume_set_pane_g

0x9669,	// (0x00053518) indicator_pane_ParamLimits

0x9669,	// (0x00053518) indicator_pane

0x9691,	// (0x00053540) main_idle_pane_g2_ParamLimits

0x9691,	// (0x00053540) main_idle_pane_g2

0x96c9,	// (0x00053578) main_pane_idle_g1_ParamLimits

0x96c9,	// (0x00053578) main_pane_idle_g1

0x96f0,	// (0x0005359f) popup_clock_digital_analogue_window_ParamLimits

0x96f0,	// (0x0005359f) popup_clock_digital_analogue_window

0x9707,	// (0x000535b6) soft_indicator_pane_ParamLimits

0x9707,	// (0x000535b6) soft_indicator_pane

0x972b,	// (0x000535da) wallpaper_pane_ParamLimits

0x972b,	// (0x000535da) wallpaper_pane

0x9230,	// (0x000530df) wallpaper_pane_g1

0x9745,	// (0x000535f4) indicator_pane_g1_ParamLimits

0x9745,	// (0x000535f4) indicator_pane_g1

0x3f2b,	// (0x0004ddda) navi_navi_icon_text_pane_srt_g1

0x976a,	// (0x00053619) soft_indicator_pane_t1

0x9784,	// (0x00053633) aid_ps_area_pane

0x9795,	// (0x00053644) aid_ps_clock_pane

0x97a3,	// (0x00053652) aid_ps_indicator_pane

0x97af,	// (0x0005365e) indicator_ps_pane_ParamLimits

0x97af,	// (0x0005365e) indicator_ps_pane

0x97be,	// (0x0005366d) power_save_pane_g1_ParamLimits

0x97be,	// (0x0005366d) power_save_pane_g1

0x97ca,	// (0x00053679) power_save_pane_g2_ParamLimits

0x97ca,	// (0x00053679) power_save_pane_g2

0xedaf,	// (0x00058c5e) aid_navinavi_width_pane

0x9784,	// (0x00053633) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00059419) power_save_pane_g_ParamLimits

0xf56a,	// (0x00059419) power_save_pane_g

0x97d8,	// (0x00053687) power_save_pane_t1_ParamLimits

0x97d8,	// (0x00053687) power_save_pane_t1

0x9795,	// (0x00053644) aid_ps_clock_pane_ParamLimits

0x97a3,	// (0x00053652) aid_ps_indicator_pane_ParamLimits

0x97ea,	// (0x00053699) power_save_pane_t4_ParamLimits

0x97ea,	// (0x00053699) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005941e) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005941e) power_save_pane_t

0x9814,	// (0x000536c3) power_save_t3_ParamLimits

0x9814,	// (0x000536c3) power_save_t3

0x97ff,	// (0x000536ae) power_save_t2_ParamLimits

0x97ff,	// (0x000536ae) power_save_t2

0x9829,	// (0x000536d8) indicator_ps_pane_g1

0x9832,	// (0x000536e1) ai_gene_pane_ParamLimits

0x9832,	// (0x000536e1) ai_gene_pane

0x9849,	// (0x000536f8) ai_links_pane_ParamLimits

0x9849,	// (0x000536f8) ai_links_pane

0x9861,	// (0x00053710) indicator_pane_cp1_ParamLimits

0x9861,	// (0x00053710) indicator_pane_cp1

0x9870,	// (0x0005371f) main_pane_idle_g1_cp_ParamLimits

0x9870,	// (0x0005371f) main_pane_idle_g1_cp

0x9888,	// (0x00053737) popup_ai_links_title_window

0x9891,	// (0x00053740) soft_indicator_pane_cp1_ParamLimits

0x9891,	// (0x00053740) soft_indicator_pane_cp1

0x3929,	// (0x0004d7d8) ai_links_pane_g1

0x3932,	// (0x0004d7e1) grid_ai_links_pane

0xc804,	// (0x000566b3) ai_gene_pane_1

0x3917,	// (0x0004d7c6) ai_gene_pane_2

0x3920,	// (0x0004d7cf) list_highlight_pane_cp4

0xc7e0,	// (0x0005668f) cell_ai_link_pane_ParamLimits

0xc7e0,	// (0x0005668f) cell_ai_link_pane

0x38e8,	// (0x0004d797) cell_ai_link_pane_g1

0x9adf,	// (0x0005398e) cell_ai_link_pane_g2

0x0001,

0xf901,	// (0x000597b0) cell_ai_link_pane_g

0x9320,	// (0x000531cf) grid_highlight_cp2

0x9320,	// (0x000531cf) bg_popup_sub_pane_cp1

0x98b3,	// (0x00053762) popup_ai_links_title_window_t1

0x3838,	// (0x0004d6e7) ai_gene_pane_1_g1_ParamLimits

0x3838,	// (0x0004d6e7) ai_gene_pane_1_g1

0x3844,	// (0x0004d6f3) ai_gene_pane_1_g2_ParamLimits

0x3844,	// (0x0004d6f3) ai_gene_pane_1_g2

0x0001,

0xf8f7,	// (0x000597a6) ai_gene_pane_1_g_ParamLimits

0xf8f7,	// (0x000597a6) ai_gene_pane_1_g

0x3851,	// (0x0004d700) ai_gene_pane_1_t1_ParamLimits

0x3851,	// (0x0004d700) ai_gene_pane_1_t1

0x3885,	// (0x0004d734) grid_ai_soft_ind_pane

0x3823,	// (0x0004d6d2) ai_gene_pane_2_t1_ParamLimits

0x3823,	// (0x0004d6d2) ai_gene_pane_2_t1

0x98c2,	// (0x00053771) main_pane_empty_t1_ParamLimits

0x98c2,	// (0x00053771) main_pane_empty_t1

0x98da,	// (0x00053789) main_pane_empty_t2_ParamLimits

0x98da,	// (0x00053789) main_pane_empty_t2

0x98ef,	// (0x0005379e) main_pane_empty_t3_ParamLimits

0x98ef,	// (0x0005379e) main_pane_empty_t3

0x9901,	// (0x000537b0) main_pane_empty_t4_ParamLimits

0x9901,	// (0x000537b0) main_pane_empty_t4

0x9913,	// (0x000537c2) main_pane_empty_t5_ParamLimits

0x9913,	// (0x000537c2) main_pane_empty_t5

0x0004,

0xf574,	// (0x00059423) main_pane_empty_t_ParamLimits

0xf574,	// (0x00059423) main_pane_empty_t

0x9fae,	// (0x00053e5d) bg_popup_window_pane_ParamLimits

0x9fae,	// (0x00053e5d) bg_popup_window_pane

0xc75a,	// (0x00056609) find_popup_pane_cp2_ParamLimits

0xc75a,	// (0x00056609) find_popup_pane_cp2

0x359f,	// (0x0004d44e) heading_pane_ParamLimits

0x359f,	// (0x0004d44e) heading_pane

0x9320,	// (0x000531cf) bg_popup_sub_pane

0xc6db,	// (0x0005658a) bg_popup_window_pane_g1_ParamLimits

0xc6db,	// (0x0005658a) bg_popup_window_pane_g1

0xc6ea,	// (0x00056599) bg_popup_window_pane_g2_ParamLimits

0xc6ea,	// (0x00056599) bg_popup_window_pane_g2

0xc6f6,	// (0x000565a5) bg_popup_window_pane_g3_ParamLimits

0xc6f6,	// (0x000565a5) bg_popup_window_pane_g3

0xc702,	// (0x000565b1) bg_popup_window_pane_g4_ParamLimits

0xc702,	// (0x000565b1) bg_popup_window_pane_g4

0xc711,	// (0x000565c0) bg_popup_window_pane_g5_ParamLimits

0xc711,	// (0x000565c0) bg_popup_window_pane_g5

0xc721,	// (0x000565d0) bg_popup_window_pane_g6_ParamLimits

0xc721,	// (0x000565d0) bg_popup_window_pane_g6

0xc72d,	// (0x000565dc) bg_popup_window_pane_g7_ParamLimits

0xc72d,	// (0x000565dc) bg_popup_window_pane_g7

0xc73c,	// (0x000565eb) bg_popup_window_pane_g8_ParamLimits

0xc73c,	// (0x000565eb) bg_popup_window_pane_g8

0xc74b,	// (0x000565fa) bg_popup_window_pane_g9_ParamLimits

0xc74b,	// (0x000565fa) bg_popup_window_pane_g9

0x3579,	// (0x0004d428) bg_popup_window_pane_g10_ParamLimits

0x3579,	// (0x0004d428) bg_popup_window_pane_g10

0x0009,

0xf8bf,	// (0x0005976e) bg_popup_window_pane_g_ParamLimits

0xf8bf,	// (0x0005976e) bg_popup_window_pane_g

0x34a2,	// (0x0004d351) bg_popup_heading_pane_ParamLimits

0x34a2,	// (0x0004d351) bg_popup_heading_pane

0x109c,	// (0x0004af4b) tabs_4_passive_pane_cp_srt_ParamLimits

0x109c,	// (0x0004af4b) tabs_4_passive_pane_cp_srt

0x10ae,	// (0x0004af5d) tabs_4_passive_pane_srt_ParamLimits

0x34b6,	// (0x0004d365) heading_pane_g2

0x10ae,	// (0x0004af5d) tabs_4_passive_pane_srt

0x2834,	// (0x0004c6e3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2834,	// (0x0004c6e3) bg_passive_tab_pane_cp3_srt

0x34be,	// (0x0004d36d) heading_pane_t1_ParamLimits

0x34be,	// (0x0004d36d) heading_pane_t1

0x34d5,	// (0x0004d384) heading_pane_t2_ParamLimits

0x34d5,	// (0x0004d384) heading_pane_t2

0x0001,

0xf8ba,	// (0x00059769) heading_pane_t_ParamLimits

0xf8ba,	// (0x00059769) heading_pane_t

0x2fdf,	// (0x0004ce8e) bg_popup_heading_pane_g1

0x308e,	// (0x0004cf3d) bg_popup_heading_pane_g2

0x3098,	// (0x0004cf47) bg_popup_heading_pane_g3

0x30a2,	// (0x0004cf51) bg_popup_heading_pane_g4

0x30ac,	// (0x0004cf5b) bg_popup_heading_pane_g5

0x30b6,	// (0x0004cf65) bg_popup_heading_pane_g6

0x30be,	// (0x0004cf6d) bg_popup_heading_pane_g7

0x30c6,	// (0x0004cf75) bg_popup_heading_pane_g8

0x30d0,	// (0x0004cf7f) bg_popup_heading_pane_g9

0x0008,

0xf876,	// (0x00059725) bg_popup_heading_pane_g

0x27c0,	// (0x0004c66f) bg_popup_sub_pane_g1

0x27c8,	// (0x0004c677) bg_popup_sub_pane_g2

0x27d0,	// (0x0004c67f) bg_popup_sub_pane_g3

0x27d8,	// (0x0004c687) bg_popup_sub_pane_g4

0x27e0,	// (0x0004c68f) bg_popup_sub_pane_g5

0x27e8,	// (0x0004c697) bg_popup_sub_pane_g6

0x27f0,	// (0x0004c69f) bg_popup_sub_pane_g7

0x27f8,	// (0x0004c6a7) bg_popup_sub_pane_g8

0x2800,	// (0x0004c6af) bg_popup_sub_pane_g9

0x0008,

0xf850,	// (0x000596ff) bg_popup_sub_pane_g

0x9571,	// (0x00053420) bg_popup_window_pane_cp5_ParamLimits

0x9571,	// (0x00053420) bg_popup_window_pane_cp5

0x9933,	// (0x000537e2) popup_note_window_g1_ParamLimits

0x9933,	// (0x000537e2) popup_note_window_g1

0x993f,	// (0x000537ee) popup_note_window_t1_ParamLimits

0x993f,	// (0x000537ee) popup_note_window_t1

0x9955,	// (0x00053804) popup_note_window_t2_ParamLimits

0x9955,	// (0x00053804) popup_note_window_t2

0x996b,	// (0x0005381a) popup_note_window_t3_ParamLimits

0x996b,	// (0x0005381a) popup_note_window_t3

0x9981,	// (0x00053830) popup_note_window_t4_ParamLimits

0x9981,	// (0x00053830) popup_note_window_t4

0x99a9,	// (0x00053858) popup_note_window_t5_ParamLimits

0x99a9,	// (0x00053858) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005942e) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005942e) popup_note_window_t

0x99f3,	// (0x000538a2) bg_popup_window_pane_cp6_ParamLimits

0x99f3,	// (0x000538a2) bg_popup_window_pane_cp6

0x2f5b,	// (0x0004ce0a) popup_note_image_window_g1_ParamLimits

0x2f5b,	// (0x0004ce0a) popup_note_image_window_g1

0xc580,	// (0x0005642f) popup_note_image_window_g2_ParamLimits

0xc580,	// (0x0005642f) popup_note_image_window_g2

0x0001,

0xf844,	// (0x000596f3) popup_note_image_window_g_ParamLimits

0xf844,	// (0x000596f3) popup_note_image_window_g

0x2f80,	// (0x0004ce2f) popup_note_image_window_t1_ParamLimits

0x2f80,	// (0x0004ce2f) popup_note_image_window_t1

0x2f99,	// (0x0004ce48) popup_note_image_window_t2_ParamLimits

0x2f99,	// (0x0004ce48) popup_note_image_window_t2

0x2fb2,	// (0x0004ce61) popup_note_image_window_t3_ParamLimits

0x2fb2,	// (0x0004ce61) popup_note_image_window_t3

0x0002,

0xf849,	// (0x000596f8) popup_note_image_window_t_ParamLimits

0xf849,	// (0x000596f8) popup_note_image_window_t

0x2e24,	// (0x0004ccd3) bg_popup_window_pane_cp7_ParamLimits

0x2e24,	// (0x0004ccd3) bg_popup_window_pane_cp7

0x2e54,	// (0x0004cd03) popup_note_wait_window_g1_ParamLimits

0x2e54,	// (0x0004cd03) popup_note_wait_window_g1

0x2e60,	// (0x0004cd0f) popup_note_wait_window_g2_ParamLimits

0x2e60,	// (0x0004cd0f) popup_note_wait_window_g2

0x0002,

0xf832,	// (0x000596e1) popup_note_wait_window_g_ParamLimits

0xf832,	// (0x000596e1) popup_note_wait_window_g

0x2e78,	// (0x0004cd27) popup_note_wait_window_t1_ParamLimits

0x2e78,	// (0x0004cd27) popup_note_wait_window_t1

0xc521,	// (0x000563d0) popup_note_wait_window_t2_ParamLimits

0xc521,	// (0x000563d0) popup_note_wait_window_t2

0xc53e,	// (0x000563ed) popup_note_wait_window_t3_ParamLimits

0xc53e,	// (0x000563ed) popup_note_wait_window_t3

0xc551,	// (0x00056400) popup_note_wait_window_t4_ParamLimits

0xc551,	// (0x00056400) popup_note_wait_window_t4

0x0004,

0xf839,	// (0x000596e8) popup_note_wait_window_t_ParamLimits

0xf839,	// (0x000596e8) popup_note_wait_window_t

0x2ef4,	// (0x0004cda3) wait_bar_pane_ParamLimits

0x2ef4,	// (0x0004cda3) wait_bar_pane

0x9320,	// (0x000531cf) wait_anim_pane

0x9320,	// (0x000531cf) wait_border_pane

0x9230,	// (0x000530df) wait_anim_pane_g1

0x9230,	// (0x000530df) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x000595a8) wait_anim_pane_g

0x2dd0,	// (0x0004cc7f) wait_border_pane_g1

0x2ddb,	// (0x0004cc8a) wait_border_pane_g2

0x2de4,	// (0x0004cc93) wait_border_pane_g3

0x0002,

0xf82b,	// (0x000596da) wait_border_pane_g

0x2c3b,	// (0x0004caea) bg_popup_window_pane_cp16_ParamLimits

0x2c3b,	// (0x0004caea) bg_popup_window_pane_cp16

0xc4d1,	// (0x00056380) indicator_popup_pane_cp4_ParamLimits

0xc4d1,	// (0x00056380) indicator_popup_pane_cp4

0x2d4f,	// (0x0004cbfe) popup_query_data_window_t1_ParamLimits

0x2d4f,	// (0x0004cbfe) popup_query_data_window_t1

0x2d61,	// (0x0004cc10) popup_query_data_window_t2_ParamLimits

0x2d61,	// (0x0004cc10) popup_query_data_window_t2

0x2d7a,	// (0x0004cc29) popup_query_data_window_t3_ParamLimits

0x2d7a,	// (0x0004cc29) popup_query_data_window_t3

0x0002,

0xf824,	// (0x000596d3) popup_query_data_window_t_ParamLimits

0xf824,	// (0x000596d3) popup_query_data_window_t

0xc4e5,	// (0x00056394) query_popup_data_pane_ParamLimits

0xc4e5,	// (0x00056394) query_popup_data_pane

0xc4f9,	// (0x000563a8) query_popup_data_pane_cp1_ParamLimits

0xc4f9,	// (0x000563a8) query_popup_data_pane_cp1

0x2c3b,	// (0x0004caea) bg_popup_window_pane_cp10_ParamLimits

0x2c3b,	// (0x0004caea) bg_popup_window_pane_cp10

0xc44c,	// (0x000562fb) indicator_popup_pane_ParamLimits

0xc44c,	// (0x000562fb) indicator_popup_pane

0xc46e,	// (0x0005631d) popup_query_code_window_t1_ParamLimits

0xc46e,	// (0x0005631d) popup_query_code_window_t1

0xc488,	// (0x00056337) popup_query_code_window_t2_ParamLimits

0xc488,	// (0x00056337) popup_query_code_window_t2

0x2cf2,	// (0x0004cba1) popup_query_code_window_t3_ParamLimits

0x2cf2,	// (0x0004cba1) popup_query_code_window_t3

0x0002,

0xf81d,	// (0x000596cc) popup_query_code_window_t_ParamLimits

0xf81d,	// (0x000596cc) popup_query_code_window_t

0x2d21,	// (0x0004cbd0) query_popup_pane_ParamLimits

0x2d21,	// (0x0004cbd0) query_popup_pane

0x99f3,	// (0x000538a2) bg_popup_window_pane_cp15_ParamLimits

0x99f3,	// (0x000538a2) bg_popup_window_pane_cp15

0x9a11,	// (0x000538c0) indicator_popup_pane_cp1_ParamLimits

0x9a11,	// (0x000538c0) indicator_popup_pane_cp1

0x9a24,	// (0x000538d3) indicator_popup_pane_cp2_ParamLimits

0x9a24,	// (0x000538d3) indicator_popup_pane_cp2

0x9a37,	// (0x000538e6) popup_query_data_code_window_g1_ParamLimits

0x9a37,	// (0x000538e6) popup_query_data_code_window_g1

0x9a4a,	// (0x000538f9) popup_query_data_code_window_t1_ParamLimits

0x9a4a,	// (0x000538f9) popup_query_data_code_window_t1

0x9a5c,	// (0x0005390b) popup_query_data_code_window_t2_ParamLimits

0x9a5c,	// (0x0005390b) popup_query_data_code_window_t2

0x9a6e,	// (0x0005391d) popup_query_data_code_window_t3_ParamLimits

0x9a6e,	// (0x0005391d) popup_query_data_code_window_t3

0x9a84,	// (0x00053933) popup_query_data_code_window_t4_ParamLimits

0x9a84,	// (0x00053933) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00059439) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00059439) popup_query_data_code_window_t

0xe251,	// (0x00058100) list_single_midp_graphic_pane_g3

0x9a9c,	// (0x0005394b) query_popup_data_pane_cp2_ParamLimits

0x9aaf,	// (0x0005395e) query_popup_pane_cp2_ParamLimits

0x9aaf,	// (0x0005395e) query_popup_pane_cp2

0x9320,	// (0x000531cf) bg_popup_window_pane_cp11

0x2c27,	// (0x0004cad6) heading_pane_cp5

0x9b98,	// (0x00053a47) listscroll_popup_info_pane

0x9320,	// (0x000531cf) input_focus_pane_cp3

0x9ac2,	// (0x00053971) query_popup_pane_t1

0x9ad0,	// (0x0005397f) list_popup_info_pane_ParamLimits

0x9ad0,	// (0x0005397f) list_popup_info_pane

0x9adf,	// (0x0005398e) listscroll_popup_info_pane_g1

0x9ae7,	// (0x00053996) scroll_pane_cp7

0x9af1,	// (0x000539a0) popup_info_list_pane_t1_ParamLimits

0x9af1,	// (0x000539a0) popup_info_list_pane_t1

0x9b0b,	// (0x000539ba) popup_info_list_pane_t2_ParamLimits

0x9b0b,	// (0x000539ba) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00059442) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00059442) popup_info_list_pane_t

0x9320,	// (0x000531cf) bg_popup_window_pane_cp12

0xcbf8,	// (0x00056aa7) find_popup_pane

0x95bb,	// (0x0005346a) bg_popup_window_pane_cp3

0x9b25,	// (0x000539d4) heading_pane_cp3

0x9b31,	// (0x000539e0) listscroll_popup_graphic_pane

0x9320,	// (0x000531cf) bg_popup_window_pane_cp4

0x9b90,	// (0x00053a3f) heading_pane_cp4

0x9b98,	// (0x00053a47) listscroll_popup_colour_pane

0x9ba0,	// (0x00053a4f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9ba0,	// (0x00053a4f) cell_large_graphic_colour_none_popup_pane

0x9bb4,	// (0x00053a63) grid_large_graphic_colour_popup_pane_ParamLimits

0x9bb4,	// (0x00053a63) grid_large_graphic_colour_popup_pane

0x9bd8,	// (0x00053a87) listscroll_popup_colour_pane_g1_ParamLimits

0x9bd8,	// (0x00053a87) listscroll_popup_colour_pane_g1

0x9bef,	// (0x00053a9e) listscroll_popup_colour_pane_g2_ParamLimits

0x9bef,	// (0x00053a9e) listscroll_popup_colour_pane_g2

0x9c06,	// (0x00053ab5) listscroll_popup_colour_pane_g3_ParamLimits

0x9c06,	// (0x00053ab5) listscroll_popup_colour_pane_g3

0x9c16,	// (0x00053ac5) listscroll_popup_colour_pane_g4_ParamLimits

0x9c16,	// (0x00053ac5) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00059447) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00059447) listscroll_popup_colour_pane_g

0x9c26,	// (0x00053ad5) scroll_pane_cp6_ParamLimits

0x9c26,	// (0x00053ad5) scroll_pane_cp6

0x9c38,	// (0x00053ae7) cell_large_graphic_colour_popup_pane_ParamLimits

0x9c38,	// (0x00053ae7) cell_large_graphic_colour_popup_pane

0x9c57,	// (0x00053b06) cell_large_graphic_colour_none_popup_pane_t1

0x9320,	// (0x000531cf) grid_highlight_pane_cp5

0x9c66,	// (0x00053b15) cell_large_graphic_colour_popup_pane_g1

0x9c6e,	// (0x00053b1d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00059450) cell_large_graphic_colour_popup_pane_g

0x9c76,	// (0x00053b25) cell_large_graphic_colour_popup_pane_g2_copy1

0x9c7f,	// (0x00053b2e) grid_highlight_pane_cp4

0x9c87,	// (0x00053b36) bg_popup_window_pane_cp8_ParamLimits

0x9c87,	// (0x00053b36) bg_popup_window_pane_cp8

0x9ca2,	// (0x00053b51) popup_snote_single_text_window_g1_ParamLimits

0x9ca2,	// (0x00053b51) popup_snote_single_text_window_g1

0x9cb4,	// (0x00053b63) popup_snote_single_text_window_t1_ParamLimits

0x9cb4,	// (0x00053b63) popup_snote_single_text_window_t1

0x9cc7,	// (0x00053b76) popup_snote_single_text_window_t2_ParamLimits

0x9cc7,	// (0x00053b76) popup_snote_single_text_window_t2

0x9cda,	// (0x00053b89) popup_snote_single_text_window_t3_ParamLimits

0x9cda,	// (0x00053b89) popup_snote_single_text_window_t3

0x9d13,	// (0x00053bc2) popup_snote_single_text_window_t4_ParamLimits

0x9d13,	// (0x00053bc2) popup_snote_single_text_window_t4

0x9d47,	// (0x00053bf6) popup_snote_single_text_window_t5_ParamLimits

0x9d47,	// (0x00053bf6) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00059455) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00059455) popup_snote_single_text_window_t

0x9d76,	// (0x00053c25) bg_popup_window_pane_cp9_ParamLimits

0x9d76,	// (0x00053c25) bg_popup_window_pane_cp9

0x9ca2,	// (0x00053b51) popup_snote_single_graphic_window_g1_ParamLimits

0x9ca2,	// (0x00053b51) popup_snote_single_graphic_window_g1

0x9d84,	// (0x00053c33) popup_snote_single_graphic_window_g2_ParamLimits

0x9d84,	// (0x00053c33) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00059460) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00059460) popup_snote_single_graphic_window_g

0x9d90,	// (0x00053c3f) popup_snote_single_graphic_window_t1_ParamLimits

0x9d90,	// (0x00053c3f) popup_snote_single_graphic_window_t1

0x9da3,	// (0x00053c52) popup_snote_single_graphic_window_t2_ParamLimits

0x9da3,	// (0x00053c52) popup_snote_single_graphic_window_t2

0x9cda,	// (0x00053b89) popup_snote_single_graphic_window_t3_ParamLimits

0x9cda,	// (0x00053b89) popup_snote_single_graphic_window_t3

0x9d13,	// (0x00053bc2) popup_snote_single_graphic_window_t4_ParamLimits

0x9d13,	// (0x00053bc2) popup_snote_single_graphic_window_t4

0x9db6,	// (0x00053c65) popup_snote_single_graphic_window_t5_ParamLimits

0x9db6,	// (0x00053c65) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00059465) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00059465) popup_snote_single_graphic_window_t

0x3e87,	// (0x0004dd36) grid_graphic_popup_pane_ParamLimits

0x3e87,	// (0x0004dd36) grid_graphic_popup_pane

0x3eb1,	// (0x0004dd60) listscroll_popup_graphic_pane_g1_ParamLimits

0x3eb1,	// (0x0004dd60) listscroll_popup_graphic_pane_g1

0xcb96,	// (0x00056a45) listscroll_popup_graphic_pane_g2_ParamLimits

0xcb96,	// (0x00056a45) listscroll_popup_graphic_pane_g2

0x0001,

0xf99a,	// (0x00059849) listscroll_popup_graphic_pane_g_ParamLimits

0xf99a,	// (0x00059849) listscroll_popup_graphic_pane_g

0x3ed9,	// (0x0004dd88) scroll_pane_cp5

0xcb3b,	// (0x000569ea) cell_graphic_popup_pane_ParamLimits

0xcb3b,	// (0x000569ea) cell_graphic_popup_pane

0x3e07,	// (0x0004dcb6) cell_graphic_popup_pane_g1

0x3e0f,	// (0x0004dcbe) cell_graphic_popup_pane_g2

0x9c76,	// (0x00053b25) cell_graphic_popup_pane_g3

0x0002,

0xf993,	// (0x00059842) cell_graphic_popup_pane_g

0x3e18,	// (0x0004dcc7) cell_graphic_popup_pane_t2

0x9c7f,	// (0x00053b2e) grid_highlight_pane_cp3

0x9df7,	// (0x00053ca6) list_gen_pane_ParamLimits

0x9df7,	// (0x00053ca6) list_gen_pane

0x9e29,	// (0x00053cd8) scroll_pane

0xcaa5,	// (0x00056954) bg_list_pane_g1_ParamLimits

0xcaa5,	// (0x00056954) bg_list_pane_g1

0xcac0,	// (0x0005696f) bg_list_pane_g2_ParamLimits

0xcac0,	// (0x0005696f) bg_list_pane_g2

0xcad3,	// (0x00056982) bg_list_pane_g3_ParamLimits

0xcad3,	// (0x00056982) bg_list_pane_g3

0xcae5,	// (0x00056994) bg_list_pane_g4_ParamLimits

0xcae5,	// (0x00056994) bg_list_pane_g4

0xcaf7,	// (0x000569a6) bg_list_pane_g5_ParamLimits

0xcaf7,	// (0x000569a6) bg_list_pane_g5

0x0004,

0xf988,	// (0x00059837) bg_list_pane_g_ParamLimits

0xf988,	// (0x00059837) bg_list_pane_g

0xb531,	// (0x000553e0) list_double2_graphic_large_graphic_pane_ParamLimits

0xb531,	// (0x000553e0) list_double2_graphic_large_graphic_pane

0xb531,	// (0x000553e0) list_double2_graphic_pane_ParamLimits

0xb531,	// (0x000553e0) list_double2_graphic_pane

0xb531,	// (0x000553e0) list_double2_large_graphic_pane_ParamLimits

0xb531,	// (0x000553e0) list_double2_large_graphic_pane

0xb531,	// (0x000553e0) list_double2_pane_ParamLimits

0xb531,	// (0x000553e0) list_double2_pane

0xb531,	// (0x000553e0) list_double_graphic_heading_pane_ParamLimits

0xb531,	// (0x000553e0) list_double_graphic_heading_pane

0xb531,	// (0x000553e0) list_double_graphic_pane_ParamLimits

0xb531,	// (0x000553e0) list_double_graphic_pane

0xb531,	// (0x000553e0) list_double_heading_pane_ParamLimits

0xb531,	// (0x000553e0) list_double_heading_pane

0xb531,	// (0x000553e0) list_double_large_graphic_pane_ParamLimits

0xb531,	// (0x000553e0) list_double_large_graphic_pane

0xb531,	// (0x000553e0) list_double_number_pane_ParamLimits

0xb531,	// (0x000553e0) list_double_number_pane

0xb531,	// (0x000553e0) list_double_pane_ParamLimits

0xb531,	// (0x000553e0) list_double_pane

0xb531,	// (0x000553e0) list_double_time_pane_ParamLimits

0xb531,	// (0x000553e0) list_double_time_pane

0xb531,	// (0x000553e0) list_setting_number_pane_ParamLimits

0xb531,	// (0x000553e0) list_setting_number_pane

0xb531,	// (0x000553e0) list_setting_pane_ParamLimits

0xb531,	// (0x000553e0) list_setting_pane

0xca6e,	// (0x0005691d) list_single_2graphic_pane_ParamLimits

0xca6e,	// (0x0005691d) list_single_2graphic_pane

0xca6e,	// (0x0005691d) list_single_graphic_heading_pane_ParamLimits

0xca6e,	// (0x0005691d) list_single_graphic_heading_pane

0xca6e,	// (0x0005691d) list_single_graphic_pane_ParamLimits

0xca6e,	// (0x0005691d) list_single_graphic_pane

0xca6e,	// (0x0005691d) list_single_heading_pane_ParamLimits

0xca6e,	// (0x0005691d) list_single_heading_pane

0xca6e,	// (0x0005691d) list_single_large_graphic_pane_ParamLimits

0xca6e,	// (0x0005691d) list_single_large_graphic_pane

0xca6e,	// (0x0005691d) list_single_number_heading_pane_ParamLimits

0xca6e,	// (0x0005691d) list_single_number_heading_pane

0xca6e,	// (0x0005691d) list_single_number_pane_ParamLimits

0xca6e,	// (0x0005691d) list_single_number_pane

0xca6e,	// (0x0005691d) list_single_pane_ParamLimits

0xca6e,	// (0x0005691d) list_single_pane

0x9320,	// (0x000531cf) list_highlight_pane_cp1

0xf2f2,	// (0x000591a1) list_single_pane_g1_ParamLimits

0xf2f2,	// (0x000591a1) list_single_pane_g1

0xf2fe,	// (0x000591ad) list_single_pane_g2_ParamLimits

0xf2fe,	// (0x000591ad) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00059481) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00059481) list_single_pane_g

0x905f,	// (0x00052f0e) list_single_pane_t1_ParamLimits

0x905f,	// (0x00052f0e) list_single_pane_t1

0xf2f2,	// (0x000591a1) list_single_number_pane_g1_ParamLimits

0xf2f2,	// (0x000591a1) list_single_number_pane_g1

0xf2fe,	// (0x000591ad) list_single_number_pane_g2_ParamLimits

0xf2fe,	// (0x000591ad) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00059481) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00059481) list_single_number_pane_g

0xe127,	// (0x00057fd6) list_single_number_pane_t1_ParamLimits

0xe127,	// (0x00057fd6) list_single_number_pane_t1

0x901f,	// (0x00052ece) list_single_number_pane_t2_ParamLimits

0x901f,	// (0x00052ece) list_single_number_pane_t2

0x0001,

0xf949,	// (0x000597f8) list_single_number_pane_t_ParamLimits

0xf949,	// (0x000597f8) list_single_number_pane_t

0xe11b,	// (0x00057fca) list_single_graphic_pane_g1_ParamLimits

0xe11b,	// (0x00057fca) list_single_graphic_pane_g1

0xf2f2,	// (0x000591a1) list_single_graphic_pane_g2_ParamLimits

0xf2f2,	// (0x000591a1) list_single_graphic_pane_g2

0xf2fe,	// (0x000591ad) list_single_graphic_pane_g3_ParamLimits

0xf2fe,	// (0x000591ad) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00059470) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00059470) list_single_graphic_pane_g

0xe127,	// (0x00057fd6) list_single_graphic_pane_t1_ParamLimits

0xe127,	// (0x00057fd6) list_single_graphic_pane_t1

0x8a2d,	// (0x000528dc) list_single_heading_pane_g1_ParamLimits

0x8a2d,	// (0x000528dc) list_single_heading_pane_g1

0xf2fe,	// (0x000591ad) list_single_heading_pane_g2_ParamLimits

0xf2fe,	// (0x000591ad) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00059477) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00059477) list_single_heading_pane_g

0x8a40,	// (0x000528ef) list_single_heading_pane_t1_ParamLimits

0x8a40,	// (0x000528ef) list_single_heading_pane_t1

0x9e5d,	// (0x00053d0c) list_single_heading_pane_t2_ParamLimits

0x9e5d,	// (0x00053d0c) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005947c) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005947c) list_single_heading_pane_t

0xf2f2,	// (0x000591a1) list_single_number_heading_pane_g1_ParamLimits

0xf2f2,	// (0x000591a1) list_single_number_heading_pane_g1

0xf2fe,	// (0x000591ad) list_single_number_heading_pane_g2_ParamLimits

0xf2fe,	// (0x000591ad) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00059481) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00059481) list_single_number_heading_pane_g

0x8a56,	// (0x00052905) list_single_number_heading_pane_t1_ParamLimits

0x8a56,	// (0x00052905) list_single_number_heading_pane_t1

0x8a6c,	// (0x0005291b) list_single_number_heading_pane_t2_ParamLimits

0x8a6c,	// (0x0005291b) list_single_number_heading_pane_t2

0x8a7e,	// (0x0005292d) list_single_number_heading_pane_t3_ParamLimits

0x8a7e,	// (0x0005292d) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00059486) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00059486) list_single_number_heading_pane_t

0x8a90,	// (0x0005293f) list_single_graphic_heading_pane_g1_ParamLimits

0x8a90,	// (0x0005293f) list_single_graphic_heading_pane_g1

0x9e6f,	// (0x00053d1e) list_single_graphic_heading_pane_g4_ParamLimits

0x9e6f,	// (0x00053d1e) list_single_graphic_heading_pane_g4

0xf2fe,	// (0x000591ad) list_single_graphic_heading_pane_g5_ParamLimits

0xf2fe,	// (0x000591ad) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005948d) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005948d) list_single_graphic_heading_pane_g

0x8a56,	// (0x00052905) list_single_graphic_heading_pane_t1_ParamLimits

0x8a56,	// (0x00052905) list_single_graphic_heading_pane_t1

0x8aa6,	// (0x00052955) list_single_graphic_heading_pane_t2_ParamLimits

0x8aa6,	// (0x00052955) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00059494) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00059494) list_single_graphic_heading_pane_t

0x1192,	// (0x0004b041) list_single_large_graphic_pane_g1_ParamLimits

0x1192,	// (0x0004b041) list_single_large_graphic_pane_g1

0xf2f2,	// (0x000591a1) list_single_large_graphic_pane_g2_ParamLimits

0xf2f2,	// (0x000591a1) list_single_large_graphic_pane_g2

0xf2fe,	// (0x000591ad) list_single_large_graphic_pane_g3_ParamLimits

0xf2fe,	// (0x000591ad) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00059499) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00059499) list_single_large_graphic_pane_g

0x2ddb,	// (0x0004cc8a) wait_border_pane_g2_copy1

0x9e80,	// (0x00053d2f) list_single_large_graphic_pane_g4_cp2

0xe127,	// (0x00057fd6) list_single_large_graphic_pane_t1_ParamLimits

0xe127,	// (0x00057fd6) list_single_large_graphic_pane_t1

0x4cf8,	// (0x0004eba7) list_double_pane_g1_ParamLimits

0x4cf8,	// (0x0004eba7) list_double_pane_g1

0xf30a,	// (0x000591b9) list_double_pane_g2_ParamLimits

0xf30a,	// (0x000591b9) list_double_pane_g2

0x0001,

0xf5f1,	// (0x000594a0) list_double_pane_g_ParamLimits

0xf5f1,	// (0x000594a0) list_double_pane_g

0x8abe,	// (0x0005296d) list_double_pane_t1_ParamLimits

0x8abe,	// (0x0005296d) list_double_pane_t1

0x8ad4,	// (0x00052983) list_double_pane_t2_ParamLimits

0x8ad4,	// (0x00052983) list_double_pane_t2

0x0001,

0xf5f6,	// (0x000594a5) list_double_pane_t_ParamLimits

0xf5f6,	// (0x000594a5) list_double_pane_t

0x8ae6,	// (0x00052995) list_double2_pane_g1_ParamLimits

0x8ae6,	// (0x00052995) list_double2_pane_g1

0x8af7,	// (0x000529a6) list_double2_pane_g2_ParamLimits

0x8af7,	// (0x000529a6) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x000594aa) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x000594aa) list_double2_pane_g

0x8b03,	// (0x000529b2) list_double2_pane_t1_ParamLimits

0x8b03,	// (0x000529b2) list_double2_pane_t1

0x8b19,	// (0x000529c8) list_double2_pane_t2_ParamLimits

0x8b19,	// (0x000529c8) list_double2_pane_t2

0x0001,

0xf600,	// (0x000594af) list_double2_pane_t_ParamLimits

0xf600,	// (0x000594af) list_double2_pane_t

0x4cf8,	// (0x0004eba7) list_double_number_pane_g1_ParamLimits

0x4cf8,	// (0x0004eba7) list_double_number_pane_g1

0xf30a,	// (0x000591b9) list_double_number_pane_g2_ParamLimits

0xf30a,	// (0x000591b9) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x000594a0) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x000594a0) list_double_number_pane_g

0x8b2b,	// (0x000529da) list_double_number_pane_t1_ParamLimits

0x8b2b,	// (0x000529da) list_double_number_pane_t1

0x8b3d,	// (0x000529ec) list_double_number_pane_t2_ParamLimits

0x8b3d,	// (0x000529ec) list_double_number_pane_t2

0x8b53,	// (0x00052a02) list_double_number_pane_t3_ParamLimits

0x8b53,	// (0x00052a02) list_double_number_pane_t3

0x0002,

0xf605,	// (0x000594b4) list_double_number_pane_t_ParamLimits

0xf605,	// (0x000594b4) list_double_number_pane_t

0x8b65,	// (0x00052a14) list_double_graphic_pane_g1_ParamLimits

0x8b65,	// (0x00052a14) list_double_graphic_pane_g1

0x8b71,	// (0x00052a20) list_double_graphic_pane_g2_ParamLimits

0x8b71,	// (0x00052a20) list_double_graphic_pane_g2

0x8b80,	// (0x00052a2f) list_double_graphic_pane_g3_ParamLimits

0x8b80,	// (0x00052a2f) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x000594bb) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x000594bb) list_double_graphic_pane_g

0x8abe,	// (0x0005296d) list_double_graphic_pane_t1_ParamLimits

0x8abe,	// (0x0005296d) list_double_graphic_pane_t1

0x8ad4,	// (0x00052983) list_double_graphic_pane_t2_ParamLimits

0x8ad4,	// (0x00052983) list_double_graphic_pane_t2

0x0001,

0xf5f6,	// (0x000594a5) list_double_graphic_pane_t_ParamLimits

0xf5f6,	// (0x000594a5) list_double_graphic_pane_t

0x8b98,	// (0x00052a47) list_double2_graphic_pane_g1_ParamLimits

0x8b98,	// (0x00052a47) list_double2_graphic_pane_g1

0x9e88,	// (0x00053d37) list_double2_graphic_pane_g2_ParamLimits

0x9e88,	// (0x00053d37) list_double2_graphic_pane_g2

0x9e94,	// (0x00053d43) list_double2_graphic_pane_g3_ParamLimits

0x9e94,	// (0x00053d43) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x000594c4) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x000594c4) list_double2_graphic_pane_g

0x8ba4,	// (0x00052a53) list_double2_graphic_pane_t1_ParamLimits

0x8ba4,	// (0x00052a53) list_double2_graphic_pane_t1

0x8bba,	// (0x00052a69) list_double2_graphic_pane_t2_ParamLimits

0x8bba,	// (0x00052a69) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000594cb) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000594cb) list_double2_graphic_pane_t

0x8bcc,	// (0x00052a7b) list_double_large_graphic_pane_g1_ParamLimits

0x8bcc,	// (0x00052a7b) list_double_large_graphic_pane_g1

0x8beb,	// (0x00052a9a) list_double_large_graphic_pane_g2_ParamLimits

0x8beb,	// (0x00052a9a) list_double_large_graphic_pane_g2

0xf30a,	// (0x000591b9) list_double_large_graphic_pane_g3_ParamLimits

0xf30a,	// (0x000591b9) list_double_large_graphic_pane_g3

0x8c01,	// (0x00052ab0) list_double_large_graphic_pane_g4_ParamLimits

0x8c01,	// (0x00052ab0) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x000594d0) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x000594d0) list_double_large_graphic_pane_g

0x8c14,	// (0x00052ac3) list_double_large_graphic_pane_t1_ParamLimits

0x8c14,	// (0x00052ac3) list_double_large_graphic_pane_t1

0x8c2d,	// (0x00052adc) list_double_large_graphic_pane_t2_ParamLimits

0x8c2d,	// (0x00052adc) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x000594db) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x000594db) list_double_large_graphic_pane_t

0x9ea0,	// (0x00053d4f) list_double2_large_graphic_pane_g1_ParamLimits

0x9ea0,	// (0x00053d4f) list_double2_large_graphic_pane_g1

0x8c3f,	// (0x00052aee) list_double2_large_graphic_pane_g2_ParamLimits

0x8c3f,	// (0x00052aee) list_double2_large_graphic_pane_g2

0x9e94,	// (0x00053d43) list_double2_large_graphic_pane_g3_ParamLimits

0x9e94,	// (0x00053d43) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x000594e0) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x000594e0) list_double2_large_graphic_pane_g

0x8ba4,	// (0x00052a53) list_double2_large_graphic_pane_t1_ParamLimits

0x8ba4,	// (0x00052a53) list_double2_large_graphic_pane_t1

0x8bba,	// (0x00052a69) list_double2_large_graphic_pane_t2_ParamLimits

0x8bba,	// (0x00052a69) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x000594cb) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x000594cb) list_double2_large_graphic_pane_t

0x8c50,	// (0x00052aff) list_double_heading_pane_g1_ParamLimits

0x8c50,	// (0x00052aff) list_double_heading_pane_g1

0x9eac,	// (0x00053d5b) list_double_heading_pane_g2_ParamLimits

0x9eac,	// (0x00053d5b) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x000594e7) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x000594e7) list_double_heading_pane_g

0x8c61,	// (0x00052b10) list_double_heading_pane_t1_ParamLimits

0x8c61,	// (0x00052b10) list_double_heading_pane_t1

0x8bba,	// (0x00052a69) list_double_heading_pane_t2_ParamLimits

0x8bba,	// (0x00052a69) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x000594ec) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x000594ec) list_double_heading_pane_t

0x8c77,	// (0x00052b26) list_double_graphic_heading_pane_g1_ParamLimits

0x8c77,	// (0x00052b26) list_double_graphic_heading_pane_g1

0x8c50,	// (0x00052aff) list_double_graphic_heading_pane_g2_ParamLimits

0x8c50,	// (0x00052aff) list_double_graphic_heading_pane_g2

0x9eac,	// (0x00053d5b) list_double_graphic_heading_pane_g3_ParamLimits

0x9eac,	// (0x00053d5b) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x000594f1) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x000594f1) list_double_graphic_heading_pane_g

0x8c61,	// (0x00052b10) list_double_graphic_heading_pane_t1_ParamLimits

0x8c61,	// (0x00052b10) list_double_graphic_heading_pane_t1

0x8bba,	// (0x00052a69) list_double_graphic_heading_pane_t2_ParamLimits

0x8bba,	// (0x00052a69) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x000594ec) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x000594ec) list_double_graphic_heading_pane_t

0x8c83,	// (0x00052b32) list_double_time_pane_g1_ParamLimits

0x8c83,	// (0x00052b32) list_double_time_pane_g1

0xe13d,	// (0x00057fec) list_double_time_pane_g2_ParamLimits

0xe13d,	// (0x00057fec) list_double_time_pane_g2

0x0001,

0xf649,	// (0x000594f8) list_double_time_pane_g_ParamLimits

0xf649,	// (0x000594f8) list_double_time_pane_g

0x8c94,	// (0x00052b43) list_double_time_pane_t1_ParamLimits

0x8c94,	// (0x00052b43) list_double_time_pane_t1

0x8caa,	// (0x00052b59) list_double_time_pane_t2_ParamLimits

0x8caa,	// (0x00052b59) list_double_time_pane_t2

0x8cbc,	// (0x00052b6b) list_double_time_pane_t3_ParamLimits

0x8cbc,	// (0x00052b6b) list_double_time_pane_t3

0x8cce,	// (0x00052b7d) list_double_time_pane_t4_ParamLimits

0x8cce,	// (0x00052b7d) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x000594fd) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x000594fd) list_double_time_pane_t

0x8ce0,	// (0x00052b8f) list_setting_pane_g1_ParamLimits

0x8ce0,	// (0x00052b8f) list_setting_pane_g1

0x8cec,	// (0x00052b9b) list_setting_pane_g2_ParamLimits

0x8cec,	// (0x00052b9b) list_setting_pane_g2

0x0001,

0xf657,	// (0x00059506) list_setting_pane_g_ParamLimits

0xf657,	// (0x00059506) list_setting_pane_g

0x8cf8,	// (0x00052ba7) list_setting_pane_t1_ParamLimits

0x8cf8,	// (0x00052ba7) list_setting_pane_t1

0x8d12,	// (0x00052bc1) list_setting_pane_t2_ParamLimits

0x8d12,	// (0x00052bc1) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0005950b) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0005950b) list_setting_pane_t

0x8d51,	// (0x00052c00) set_value_pane_cp_ParamLimits

0x8d51,	// (0x00052c00) set_value_pane_cp

0x8d5d,	// (0x00052c0c) list_setting_number_pane_g1_ParamLimits

0x8d5d,	// (0x00052c0c) list_setting_number_pane_g1

0x8d69,	// (0x00052c18) list_setting_number_pane_g2_ParamLimits

0x8d69,	// (0x00052c18) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x00059512) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x00059512) list_setting_number_pane_g

0x8d75,	// (0x00052c24) list_setting_number_pane_t1_ParamLimits

0x8d75,	// (0x00052c24) list_setting_number_pane_t1

0x8d8e,	// (0x00052c3d) list_setting_number_pane_t2_ParamLimits

0x8d8e,	// (0x00052c3d) list_setting_number_pane_t2

0x8da8,	// (0x00052c57) list_setting_number_pane_t3_ParamLimits

0x8da8,	// (0x00052c57) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x00059517) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x00059517) list_setting_number_pane_t

0x8d51,	// (0x00052c00) set_value_pane_ParamLimits

0x8d51,	// (0x00052c00) set_value_pane

0x9eb8,	// (0x00053d67) bg_set_opt_pane_ParamLimits

0x9eb8,	// (0x00053d67) bg_set_opt_pane

0xe149,	// (0x00057ff8) set_value_pane_t1

0x9ed9,	// (0x00053d88) slider_set_pane_cp3

0x9ee2,	// (0x00053d91) volume_small_pane_cp

0x9eeb,	// (0x00053d9a) list_form_gen_pane

0x9ef4,	// (0x00053da3) scroll_pane_cp8

0x8deb,	// (0x00052c9a) form_field_data_pane_ParamLimits

0x8deb,	// (0x00052c9a) form_field_data_pane

0x8e02,	// (0x00052cb1) form_field_data_wide_pane_ParamLimits

0x8e02,	// (0x00052cb1) form_field_data_wide_pane

0x8e22,	// (0x00052cd1) form_field_popup_pane_ParamLimits

0x8e22,	// (0x00052cd1) form_field_popup_pane

0x8e3a,	// (0x00052ce9) form_field_popup_wide_pane_ParamLimits

0x8e3a,	// (0x00052ce9) form_field_popup_wide_pane

0xe167,	// (0x00058016) form_field_slider_pane_ParamLimits

0xe167,	// (0x00058016) form_field_slider_pane

0x8e51,	// (0x00052d00) form_field_slider_wide_pane_ParamLimits

0x8e51,	// (0x00052d00) form_field_slider_wide_pane

0x9f05,	// (0x00053db4) data_form_pane

0x8e6e,	// (0x00052d1d) form_field_data_pane_t1

0x9f11,	// (0x00053dc0) input_focus_pane

0xe17a,	// (0x00058029) data_form_wide_pane

0xe197,	// (0x00058046) form_field_data_wide_pane_t1

0x9c94,	// (0x00053b43) input_focus_pane_cp6

0x8e88,	// (0x00052d37) form_field_popup_pane_t1

0x9f11,	// (0x00053dc0) input_focus_pane_cp7

0x9f33,	// (0x00053de2) list_form_pane

0xe1c1,	// (0x00058070) form_field_popup_wide_pane_t1

0x9f11,	// (0x00053dc0) input_focus_pane_cp8

0x9f3f,	// (0x00053dee) list_form_wide_pane

0x8eaa,	// (0x00052d59) form_field_slider_pane_t1_ParamLimits

0x8eaa,	// (0x00052d59) form_field_slider_pane_t1

0x8ec2,	// (0x00052d71) form_field_slider_pane_t2_ParamLimits

0x8ec2,	// (0x00052d71) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x00059527) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x00059527) form_field_slider_pane_t

0x9571,	// (0x00053420) input_focus_pane_cp9_ParamLimits

0x9571,	// (0x00053420) input_focus_pane_cp9

0x8ed7,	// (0x00052d86) slider_cont_pane_ParamLimits

0x8ed7,	// (0x00052d86) slider_cont_pane

0x9f4b,	// (0x00053dfa) form_field_slider_wide_pane_t1_ParamLimits

0x9f4b,	// (0x00053dfa) form_field_slider_wide_pane_t1

0xe1d6,	// (0x00058085) form_field_slider_wide_pane_t2_ParamLimits

0xe1d6,	// (0x00058085) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x0005952c) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x0005952c) form_field_slider_wide_pane_t

0x9571,	// (0x00053420) input_focus_pane_cp10_ParamLimits

0x9571,	// (0x00053420) input_focus_pane_cp10

0x8eeb,	// (0x00052d9a) slider_cont_pane_cp1_ParamLimits

0x8eeb,	// (0x00052d9a) slider_cont_pane_cp1

0x8eff,	// (0x00052dae) slider_form_pane_cp

0x9f5d,	// (0x00053e0c) input_focus_pane_g1

0x9f65,	// (0x00053e14) input_focus_pane_g2

0x9f6d,	// (0x00053e1c) input_focus_pane_g3

0x9f75,	// (0x00053e24) input_focus_pane_g4

0x9f7d,	// (0x00053e2c) input_focus_pane_g5

0x9f85,	// (0x00053e34) input_focus_pane_g6

0x9f8d,	// (0x00053e3c) input_focus_pane_g7

0x9f95,	// (0x00053e44) input_focus_pane_g8

0x9f9d,	// (0x00053e4c) input_focus_pane_g9

0x9230,	// (0x000530df) input_focus_pane_g10

0x0009,

0xf682,	// (0x00059531) input_focus_pane_g

0x2de4,	// (0x0004cc93) wait_border_pane_g3_copy1

0x8f07,	// (0x00052db6) data_form_pane_t1

0x9230,	// (0x000530df) wait_anim_pane_g1_copy1

0x9031,	// (0x00052ee0) data_form_wide_pane_t1

0x8f21,	// (0x00052dd0) list_form_graphic_pane_cp_ParamLimits

0x8f21,	// (0x00052dd0) list_form_graphic_pane_cp

0x3cd3,	// (0x0004db82) slider_form_pane_g1

0x3cdc,	// (0x0004db8b) slider_form_pane_g2

0x0006,

0xf979,	// (0x00059828) slider_form_pane_g

0x8f21,	// (0x00052dd0) list_form_graphic_pane_ParamLimits

0x8f21,	// (0x00052dd0) list_form_graphic_pane

0x8f33,	// (0x00052de2) list_form_graphic_pane_g1

0x8f3b,	// (0x00052dea) list_form_graphic_pane_t1_ParamLimits

0x8f3b,	// (0x00052dea) list_form_graphic_pane_t1

0x95bb,	// (0x0005346a) list_highlight_pane_cp5_ParamLimits

0x95bb,	// (0x0005346a) list_highlight_pane_cp5

0x8f50,	// (0x00052dff) find_pane_g1

0x9fa5,	// (0x00053e54) input_find_pane

0x8f59,	// (0x00052e08) input_find_pane_g1_ParamLimits

0x8f59,	// (0x00052e08) input_find_pane_g1

0x8f65,	// (0x00052e14) input_find_pane_t1_ParamLimits

0x8f65,	// (0x00052e14) input_find_pane_t1

0x8f7a,	// (0x00052e29) input_find_pane_t2_ParamLimits

0x8f7a,	// (0x00052e29) input_find_pane_t2

0x0001,

0xf697,	// (0x00059546) input_find_pane_t_ParamLimits

0xf697,	// (0x00059546) input_find_pane_t

0x9fae,	// (0x00053e5d) input_focus_pane_cp5_ParamLimits

0x9fae,	// (0x00053e5d) input_focus_pane_cp5

0x9fc8,	// (0x00053e77) bg_popup_window_pane_cp2_ParamLimits

0x9fc8,	// (0x00053e77) bg_popup_window_pane_cp2

0x9fd5,	// (0x00053e84) listscroll_menu_pane_ParamLimits

0x9fd5,	// (0x00053e84) listscroll_menu_pane

0x9fe1,	// (0x00053e90) popup_submenu_window_ParamLimits

0x9fe1,	// (0x00053e90) popup_submenu_window

0xa009,	// (0x00053eb8) find_popup_pane_g1

0xa011,	// (0x00053ec0) input_popup_find_pane_cp

0x9fae,	// (0x00053e5d) input_focus_pane_cp4_ParamLimits

0x9fae,	// (0x00053e5d) input_focus_pane_cp4

0xa029,	// (0x00053ed8) input_popup_find_pane_t1_ParamLimits

0xa029,	// (0x00053ed8) input_popup_find_pane_t1

0x9320,	// (0x000531cf) bg_popup_sub_pane_cp

0xa057,	// (0x00053f06) listscroll_popup_sub_pane

0xa05f,	// (0x00053f0e) list_submenu_pane_ParamLimits

0xa05f,	// (0x00053f0e) list_submenu_pane

0xa070,	// (0x00053f1f) scroll_pane_cp4

0xa078,	// (0x00053f27) list_single_popup_submenu_pane_ParamLimits

0xa078,	// (0x00053f27) list_single_popup_submenu_pane

0xa08c,	// (0x00053f3b) list_single_popup_submenu_pane_g1

0xa094,	// (0x00053f43) list_single_popup_submenu_pane_t1_ParamLimits

0xa094,	// (0x00053f43) list_single_popup_submenu_pane_t1

0x9571,	// (0x00053420) bg_active_tab_pane_cp1_ParamLimits

0x9571,	// (0x00053420) bg_active_tab_pane_cp1

0xa0a9,	// (0x00053f58) tabs_2_active_pane_g1

0xa0b1,	// (0x00053f60) tabs_2_active_pane_t1

0x9571,	// (0x00053420) bg_passive_tab_pane_cp1_ParamLimits

0x9571,	// (0x00053420) bg_passive_tab_pane_cp1

0xa0a9,	// (0x00053f58) tabs_2_passive_pane_g1

0xa0b1,	// (0x00053f60) tabs_2_passive_pane_t1

0x95bb,	// (0x0005346a) bg_active_tab_pane_cp4

0xa0c3,	// (0x00053f72) tabs_2_long_active_pane_t1

0x2299,	// (0x0004c148) bg_passive_tab_pane_cp4

0x0cb7,	// (0x0004ab66) list_single_midp_graphic_pane_g4_ParamLimits

0x95bb,	// (0x0005346a) bg_active_tab_pane_cp5

0xa0d6,	// (0x00053f85) tabs_3_long_active_pane_t1

0x2299,	// (0x0004c148) bg_passive_tab_pane_cp5

0x0cb7,	// (0x0004ab66) list_single_midp_graphic_pane_g4

0x95bb,	// (0x0005346a) bg_popup_window_pane_cp13_ParamLimits

0x95bb,	// (0x0005346a) bg_popup_window_pane_cp13

0xa0f1,	// (0x00053fa0) listscroll_popup_fast_pane_ParamLimits

0xa0f1,	// (0x00053fa0) listscroll_popup_fast_pane

0xa0fd,	// (0x00053fac) grid_popup_fast_pane_ParamLimits

0xa0fd,	// (0x00053fac) grid_popup_fast_pane

0xa10f,	// (0x00053fbe) scroll_pane_cp9_ParamLimits

0xa10f,	// (0x00053fbe) scroll_pane_cp9

0x55c3,	// (0x0004f472) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x55c3,	// (0x0004f472) list_single_graphic_hl_pane_t1_cp2

0xa133,	// (0x00053fe2) input_focus_pane_cp20_ParamLimits

0xa133,	// (0x00053fe2) input_focus_pane_cp20

0xa141,	// (0x00053ff0) query_popup_data_pane_t1_ParamLimits

0xa141,	// (0x00053ff0) query_popup_data_pane_t1

0xa154,	// (0x00054003) query_popup_data_pane_t2_ParamLimits

0xa154,	// (0x00054003) query_popup_data_pane_t2

0xa19a,	// (0x00054049) query_popup_data_pane_t3_ParamLimits

0xa19a,	// (0x00054049) query_popup_data_pane_t3

0xa1db,	// (0x0005408a) query_popup_data_pane_t4_ParamLimits

0xa1db,	// (0x0005408a) query_popup_data_pane_t4

0xa217,	// (0x000540c6) query_popup_data_pane_t5_ParamLimits

0xa217,	// (0x000540c6) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x0005954b) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x0005954b) query_popup_data_pane_t

0x9f5d,	// (0x00053e0c) bg_set_opt_pane_g1

0x9f65,	// (0x00053e14) bg_set_opt_pane_g2

0x9f6d,	// (0x00053e1c) bg_set_opt_pane_g3

0x9f75,	// (0x00053e24) bg_set_opt_pane_g4

0x9f7d,	// (0x00053e2c) bg_set_opt_pane_g5

0x9f85,	// (0x00053e34) bg_set_opt_pane_g6

0x9f8d,	// (0x00053e3c) bg_set_opt_pane_g7

0x9f95,	// (0x00053e44) bg_set_opt_pane_g8

0x9f9d,	// (0x00053e4c) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x00059556) bg_set_opt_pane_g

0x0105,	// (0x00049fb4) control_top_pane_stacon_ParamLimits

0x0105,	// (0x00049fb4) control_top_pane_stacon

0x0158,	// (0x0004a007) signal_pane_stacon_ParamLimits

0x0158,	// (0x0004a007) signal_pane_stacon

0xbf6b,	// (0x00055e1a) stacon_top_pane_g1_ParamLimits

0xbf6b,	// (0x00055e1a) stacon_top_pane_g1

0x017d,	// (0x0004a02c) title_pane_stacon_ParamLimits

0x017d,	// (0x0004a02c) title_pane_stacon

0x01a7,	// (0x0004a056) uni_indicator_pane_stacon_ParamLimits

0x01a7,	// (0x0004a056) uni_indicator_pane_stacon

0x01bc,	// (0x0004a06b) battery_pane_stacon_ParamLimits

0x01bc,	// (0x0004a06b) battery_pane_stacon

0x0200,	// (0x0004a0af) control_bottom_pane_stacon_ParamLimits

0x0200,	// (0x0004a0af) control_bottom_pane_stacon

0x0223,	// (0x0004a0d2) navi_pane_stacon_ParamLimits

0x0223,	// (0x0004a0d2) navi_pane_stacon

0xbf8d,	// (0x00055e3c) stacon_bottom_pane_g1_ParamLimits

0xbf8d,	// (0x00055e3c) stacon_bottom_pane_g1

0xf32b,	// (0x000591da) aid_levels_signal_lsc_ParamLimits

0xf32b,	// (0x000591da) aid_levels_signal_lsc

0xf341,	// (0x000591f0) signal_pane_stacon_g1_ParamLimits

0xf341,	// (0x000591f0) signal_pane_stacon_g1

0xf355,	// (0x00059204) signal_pane_stacon_g2_ParamLimits

0xf355,	// (0x00059204) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x00059569) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x00059569) signal_pane_stacon_g

0xf38a,	// (0x00059239) title_pane_stacon_t1_ParamLimits

0xf38a,	// (0x00059239) title_pane_stacon_t1

0xa25b,	// (0x0005410a) uni_indicator_pane_stacon_g1

0xa265,	// (0x00054114) uni_indicator_pane_stacon_g2

0xa26f,	// (0x0005411e) uni_indicator_pane_stacon_g3

0xa279,	// (0x00054128) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x00059575) uni_indicator_pane_stacon_g

0xf3af,	// (0x0005925e) control_top_pane_stacon_g1

0xf3b7,	// (0x00059266) control_top_pane_stacon_t1_ParamLimits

0xf3b7,	// (0x00059266) control_top_pane_stacon_t1

0xf3ee,	// (0x0005929d) aid_levels_battery_lsc_ParamLimits

0xf3ee,	// (0x0005929d) aid_levels_battery_lsc

0xf405,	// (0x000592b4) battery_pane_stacon_g1_ParamLimits

0xf405,	// (0x000592b4) battery_pane_stacon_g1

0xf418,	// (0x000592c7) battery_pane_stacon_g2_ParamLimits

0xf418,	// (0x000592c7) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0005957e) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0005957e) battery_pane_stacon_g

0xf456,	// (0x00059305) navi_icon_pane_stacon

0xf46a,	// (0x00059319) navi_navi_pane_stacon

0xf456,	// (0x00059305) navi_text_pane_stacon

0xf3af,	// (0x0005925e) control_bottom_pane_stacon_g1

0xf47e,	// (0x0005932d) control_bottom_pane_stacon_t1_ParamLimits

0xf47e,	// (0x0005932d) control_bottom_pane_stacon_t1

0xa29d,	// (0x0005414c) grid_app_pane_ParamLimits

0xa29d,	// (0x0005414c) grid_app_pane

0xa2d5,	// (0x00054184) scroll_pane_cp15_ParamLimits

0xa2d5,	// (0x00054184) scroll_pane_cp15

0xa2ea,	// (0x00054199) cell_app_pane_ParamLimits

0xa2ea,	// (0x00054199) cell_app_pane

0xa32f,	// (0x000541de) cell_app_pane_g1_ParamLimits

0xa32f,	// (0x000541de) cell_app_pane_g1

0xa353,	// (0x00054202) cell_app_pane_g2_ParamLimits

0xa353,	// (0x00054202) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x00059583) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x00059583) cell_app_pane_g

0xa35f,	// (0x0005420e) cell_app_pane_t1_ParamLimits

0xa35f,	// (0x0005420e) cell_app_pane_t1

0xa376,	// (0x00054225) grid_highlight_pane_ParamLimits

0xa376,	// (0x00054225) grid_highlight_pane

0x9f5d,	// (0x00053e0c) cell_highlight_pane_g1

0x9f65,	// (0x00053e14) cell_highlight_pane_g2

0x9f6d,	// (0x00053e1c) cell_highlight_pane_g3

0x9f75,	// (0x00053e24) cell_highlight_pane_g4

0x9f7d,	// (0x00053e2c) cell_highlight_pane_g5

0x9f85,	// (0x00053e34) cell_highlight_pane_g6

0x9f8d,	// (0x00053e3c) cell_highlight_pane_g7

0x9f95,	// (0x00053e44) cell_highlight_pane_g8

0x9f9d,	// (0x00053e4c) cell_highlight_pane_g9

0x9230,	// (0x000530df) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x00059531) cell_highlight_pane_g

0xa390,	// (0x0005423f) bg_scroll_pane

0xa3af,	// (0x0005425e) scroll_handle_pane

0xa3eb,	// (0x0005429a) scroll_bg_pane_g1

0xa400,	// (0x000542af) scroll_bg_pane_g2

0xa418,	// (0x000542c7) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x00059588) scroll_bg_pane_g

0xa42d,	// (0x000542dc) scroll_handle_focus_pane_ParamLimits

0xa42d,	// (0x000542dc) scroll_handle_focus_pane

0xa3eb,	// (0x0005429a) scroll_handle_pane_g1

0xa43a,	// (0x000542e9) scroll_handle_pane_g2

0xa418,	// (0x000542c7) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x0005958f) scroll_handle_pane_g

0x9fae,	// (0x00053e5d) bg_popup_sub_pane_cp21_ParamLimits

0x9fae,	// (0x00053e5d) bg_popup_sub_pane_cp21

0xa44e,	// (0x000542fd) popup_fep_japan_predictive_window_t1_ParamLimits

0xa44e,	// (0x000542fd) popup_fep_japan_predictive_window_t1

0xa465,	// (0x00054314) popup_fep_japan_predictive_window_t2_ParamLimits

0xa465,	// (0x00054314) popup_fep_japan_predictive_window_t2

0xa498,	// (0x00054347) popup_fep_japan_predictive_window_t3_ParamLimits

0xa498,	// (0x00054347) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x00059596) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x00059596) popup_fep_japan_predictive_window_t

0x9320,	// (0x000531cf) bg_popup_sub_pane_cp23

0xa4cf,	// (0x0005437e) listscroll_japin_cand_pane

0xa4d7,	// (0x00054386) popup_fep_japan_candidate_window_t1

0xa4e5,	// (0x00054394) candidate_pane_ParamLimits

0xa4e5,	// (0x00054394) candidate_pane

0xa4f7,	// (0x000543a6) scroll_pane_cp30

0xa4ff,	// (0x000543ae) list_single_popup_jap_candidate_pane_ParamLimits

0xa4ff,	// (0x000543ae) list_single_popup_jap_candidate_pane

0x9320,	// (0x000531cf) list_highlight_pane_cp30

0xa514,	// (0x000543c3) list_single_popup_jap_candidate_pane_t1

0xa523,	// (0x000543d2) level_1_signal

0xa530,	// (0x000543df) level_2_signal

0xbd7d,	// (0x00055c2c) level_3_signal

0xbd8a,	// (0x00055c39) level_4_signal

0xbd97,	// (0x00055c46) level_5_signal

0xbda4,	// (0x00055c53) level_6_signal

0xbdb1,	// (0x00055c60) level_7_signal

0xa523,	// (0x000543d2) level_1_battery

0xa530,	// (0x000543df) level_2_battery

0xbd7d,	// (0x00055c2c) level_3_battery

0xbd8a,	// (0x00055c39) level_4_battery

0xbd97,	// (0x00055c46) level_5_battery

0xbda4,	// (0x00055c53) level_6_battery

0xbdb1,	// (0x00055c60) level_7_battery

0xbdd6,	// (0x00055c85) list_menu_pane_ParamLimits

0xbdd6,	// (0x00055c85) list_menu_pane

0xbdec,	// (0x00055c9b) scroll_pane_cp25_ParamLimits

0xbdec,	// (0x00055c9b) scroll_pane_cp25

0xa53d,	// (0x000543ec) list_double2_graphic_pane_cp2_ParamLimits

0xa53d,	// (0x000543ec) list_double2_graphic_pane_cp2

0xa53d,	// (0x000543ec) list_double2_large_graphic_pane_cp2_ParamLimits

0xa53d,	// (0x000543ec) list_double2_large_graphic_pane_cp2

0xa53d,	// (0x000543ec) list_double2_pane_cp2_ParamLimits

0xa53d,	// (0x000543ec) list_double2_pane_cp2

0xa53d,	// (0x000543ec) list_double_graphic_pane_cp2_ParamLimits

0xa53d,	// (0x000543ec) list_double_graphic_pane_cp2

0xa53d,	// (0x000543ec) list_double_large_graphic_pane_cp2_ParamLimits

0xa53d,	// (0x000543ec) list_double_large_graphic_pane_cp2

0xa53d,	// (0x000543ec) list_double_number_pane_cp2_ParamLimits

0xa53d,	// (0x000543ec) list_double_number_pane_cp2

0xa53d,	// (0x000543ec) list_double_pane_cp2_ParamLimits

0xa53d,	// (0x000543ec) list_double_pane_cp2

0xa54c,	// (0x000543fb) list_single_2graphic_pane_cp2_ParamLimits

0xa54c,	// (0x000543fb) list_single_2graphic_pane_cp2

0xa54c,	// (0x000543fb) list_single_graphic_heading_pane_cp2_ParamLimits

0xa54c,	// (0x000543fb) list_single_graphic_heading_pane_cp2

0xa54c,	// (0x000543fb) list_single_graphic_pane_cp2_ParamLimits

0xa54c,	// (0x000543fb) list_single_graphic_pane_cp2

0xa54c,	// (0x000543fb) list_single_heading_pane_cp2_ParamLimits

0xa54c,	// (0x000543fb) list_single_heading_pane_cp2

0xbe15,	// (0x00055cc4) list_single_large_graphic_pane_cp2_ParamLimits

0xbe15,	// (0x00055cc4) list_single_large_graphic_pane_cp2

0xa54c,	// (0x000543fb) list_single_number_heading_pane_cp2_ParamLimits

0xa54c,	// (0x000543fb) list_single_number_heading_pane_cp2

0xa54c,	// (0x000543fb) list_single_number_pane_cp2_ParamLimits

0xa54c,	// (0x000543fb) list_single_number_pane_cp2

0xa54c,	// (0x000543fb) list_single_pane_cp2_ParamLimits

0xa54c,	// (0x000543fb) list_single_pane_cp2

0xbe2f,	// (0x00055cde) bg_popup_sub_pane_cp22

0x003c,	// (0x00049eeb) popup_side_volume_key_window_g1

0x0060,	// (0x00049f0f) popup_side_volume_key_window_t1

0xa614,	// (0x000544c3) volume_small_pane_cp1

0x9571,	// (0x00053420) bg_popup_sub_pane_cp24_ParamLimits

0x9571,	// (0x00053420) bg_popup_sub_pane_cp24

0xbe45,	// (0x00055cf4) fep_china_uni_candidate_pane_ParamLimits

0xbe45,	// (0x00055cf4) fep_china_uni_candidate_pane

0xbe59,	// (0x00055d08) fep_china_uni_entry_pane

0xbe69,	// (0x00055d18) popup_fep_china_uni_window_g1

0xa61c,	// (0x000544cb) fep_china_uni_entry_pane_g1

0xa624,	// (0x000544d3) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x000595c7) fep_china_uni_entry_pane_g

0xbe85,	// (0x00055d34) fep_entry_item_pane

0xbe8f,	// (0x00055d3e) fep_candidate_item_pane

0xa62c,	// (0x000544db) fep_china_uni_candidate_pane_g1

0xbe97,	// (0x00055d46) fep_china_uni_candidate_pane_g2

0xbe9f,	// (0x00055d4e) fep_china_uni_candidate_pane_g3

0xa634,	// (0x000544e3) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x000595cc) fep_china_uni_candidate_pane_g

0x9230,	// (0x000530df) fep_entry_item_pane_g1

0xbea7,	// (0x00055d56) fep_entry_item_pane_t1_ParamLimits

0xbea7,	// (0x00055d56) fep_entry_item_pane_t1

0xbebd,	// (0x00055d6c) fep_candidate_item_pane_t1_ParamLimits

0xbebd,	// (0x00055d6c) fep_candidate_item_pane_t1

0xbed2,	// (0x00055d81) fep_candidate_item_pane_t2_ParamLimits

0xbed2,	// (0x00055d81) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x000595d5) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x000595d5) fep_candidate_item_pane_t

0x95bb,	// (0x0005346a) list_highlight_pane_cp31_ParamLimits

0x95bb,	// (0x0005346a) list_highlight_pane_cp31

0xbee4,	// (0x00055d93) level_1_signal_lsc

0xbeed,	// (0x00055d9c) level_2_signal_lsc

0xbef6,	// (0x00055da5) level_3_signal_lsc

0xbeff,	// (0x00055dae) level_4_signal_lsc

0xbf08,	// (0x00055db7) level_5_signal_lsc

0xbf11,	// (0x00055dc0) level_6_signal_lsc

0xbf1a,	// (0x00055dc9) level_7_signal_lsc

0xbf1a,	// (0x00055dc9) level_1_battery_lsc

0xbf23,	// (0x00055dd2) level_2_battery_lsc

0xbf2c,	// (0x00055ddb) level_3_battery_lsc

0xbf35,	// (0x00055de4) level_4_battery_lsc

0xbf3e,	// (0x00055ded) level_5_battery_lsc

0xbf47,	// (0x00055df6) level_6_battery_lsc

0xbee4,	// (0x00055d93) level_7_battery_lsc

0xbf50,	// (0x00055dff) scroll_handle_focus_pane_g1

0xbf59,	// (0x00055e08) scroll_handle_focus_pane_g2

0xbf62,	// (0x00055e11) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x000595da) scroll_handle_focus_pane_g

0x8f8f,	// (0x00052e3e) list_single_2graphic_pane_g1_ParamLimits

0x8f8f,	// (0x00052e3e) list_single_2graphic_pane_g1

0x9e6f,	// (0x00053d1e) list_single_2graphic_pane_g2_ParamLimits

0x9e6f,	// (0x00053d1e) list_single_2graphic_pane_g2

0xf2fe,	// (0x000591ad) list_single_2graphic_pane_g3_ParamLimits

0xf2fe,	// (0x000591ad) list_single_2graphic_pane_g3

0x8f9b,	// (0x00052e4a) list_single_2graphic_pane_g4_ParamLimits

0x8f9b,	// (0x00052e4a) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x000595e1) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x000595e1) list_single_2graphic_pane_g

0x8fa7,	// (0x00052e56) list_single_2graphic_pane_t1_ParamLimits

0x8fa7,	// (0x00052e56) list_single_2graphic_pane_t1

0xa63c,	// (0x000544eb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa63c,	// (0x000544eb) list_double2_graphic_large_graphic_pane_g1

0x8c3f,	// (0x00052aee) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8c3f,	// (0x00052aee) list_double2_graphic_large_graphic_pane_g2

0x9e94,	// (0x00053d43) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9e94,	// (0x00053d43) list_double2_graphic_large_graphic_pane_g3

0x8fd5,	// (0x00052e84) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8fd5,	// (0x00052e84) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x000595ea) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x000595ea) list_double2_graphic_large_graphic_pane_g

0x8fe1,	// (0x00052e90) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8fe1,	// (0x00052e90) list_double2_graphic_large_graphic_pane_t1

0x8ff7,	// (0x00052ea6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8ff7,	// (0x00052ea6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x000595f3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x000595f3) list_double2_graphic_large_graphic_pane_t

0xa6c1,	// (0x00054570) popup_fast_swap_window_ParamLimits

0xa6c1,	// (0x00054570) popup_fast_swap_window

0xa6dd,	// (0x0005458c) popup_side_volume_key_window

0xe1e8,	// (0x00058097) stacon_top_pane

0xe1f2,	// (0x000580a1) status_pane_ParamLimits

0xe1f2,	// (0x000580a1) status_pane

0xa6f7,	// (0x000545a6) status_small_pane

0x9320,	// (0x000531cf) control_pane

0x9320,	// (0x000531cf) stacon_bottom_pane

0x9ef4,	// (0x00053da3) scroll_pane_cp121

0x9eeb,	// (0x00053d9a) set_content_pane

0xa64e,	// (0x000544fd) bg_active_tab_pane_g1_cp1

0xa657,	// (0x00054506) bg_active_tab_pane_g2_cp1

0xa660,	// (0x0005450f) bg_active_tab_pane_g3_cp1

0xa64e,	// (0x000544fd) bg_passive_tab_pane_g1_cp1

0xa657,	// (0x00054506) bg_passive_tab_pane_g2_cp1

0xa660,	// (0x0005450f) bg_passive_tab_pane_g3_cp1

0xa669,	// (0x00054518) bg_active_tab_pane_g1_cp2

0xa657,	// (0x00054506) bg_active_tab_pane_g2_cp2

0xa672,	// (0x00054521) bg_active_tab_pane_g3_cp2

0xa669,	// (0x00054518) bg_passive_tab_pane_g1_cp2

0xa657,	// (0x00054506) bg_passive_tab_pane_g2_cp2

0xa672,	// (0x00054521) bg_passive_tab_pane_g3_cp2

0xa67b,	// (0x0005452a) bg_active_tab_pane_g1_cp3

0xa657,	// (0x00054506) bg_active_tab_pane_g2_cp3

0xa684,	// (0x00054533) bg_active_tab_pane_g3_cp3

0xa67b,	// (0x0005452a) bg_passive_tab_pane_g1_cp3

0xa657,	// (0x00054506) bg_passive_tab_pane_g2_cp3

0xa684,	// (0x00054533) bg_passive_tab_pane_g3_cp3

0xa68d,	// (0x0005453c) bg_active_tab_pane_g1_cp4

0xa657,	// (0x00054506) bg_active_tab_pane_g2_cp4

0xa698,	// (0x00054547) bg_active_tab_pane_g3_cp4

0xa68d,	// (0x0005453c) bg_passive_tab_pane_g1_cp4

0xa657,	// (0x00054506) bg_passive_tab_pane_g2_cp4

0xa698,	// (0x00054547) bg_passive_tab_pane_g3_cp4

0xa6a3,	// (0x00054552) bg_active_tab_pane_g1_cp5

0xa657,	// (0x00054506) bg_active_tab_pane_g2_cp5

0xa6ac,	// (0x0005455b) bg_active_tab_pane_g3_cp5

0xa6a3,	// (0x00054552) bg_passive_tab_pane_g1_cp5

0xa657,	// (0x00054506) bg_passive_tab_pane_g2_cp5

0xa6ac,	// (0x0005455b) bg_passive_tab_pane_g3_cp5

0x4299,	// (0x0004e148) list_set_graphic_pane_ParamLimits

0x4299,	// (0x0004e148) list_set_graphic_pane

0x9320,	// (0x000531cf) bg_set_opt_pane_cp4

0xbfa9,	// (0x00055e58) list_set_graphic_pane_g1_ParamLimits

0xbfa9,	// (0x00055e58) list_set_graphic_pane_g1

0xbfb5,	// (0x00055e64) list_set_graphic_pane_g2_ParamLimits

0xbfb5,	// (0x00055e64) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x000595f8) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x000595f8) list_set_graphic_pane_g

0x0009,

0xface,	// (0x0005997d) volume_small_pane_cp_g

0xa6b5,	// (0x00054564) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa6b5,	// (0x00054564) list_double2_large_graphic_pane_g1_cp2

0xbfd7,	// (0x00055e86) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbfd7,	// (0x00055e86) list_double2_large_graphic_pane_g2_cp2

0xbfe8,	// (0x00055e97) list_double2_large_graphic_pane_g3_cp2

0xbff0,	// (0x00055e9f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbff0,	// (0x00055e9f) list_double2_large_graphic_pane_t1_cp2

0xc006,	// (0x00055eb5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc006,	// (0x00055eb5) list_double2_large_graphic_pane_t2_cp2

0xc7cf,	// (0x0005667e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc7cf,	// (0x0005667e) list_double_large_graphic_pane_g1_cp2

0x38a6,	// (0x0004d755) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x38a6,	// (0x0004d755) list_double_large_graphic_pane_g2_cp2

0xe302,	// (0x000581b1) list_double_large_graphic_pane_g3_cp2

0x38b7,	// (0x0004d766) list_double_large_graphic_pane_g4_cp

0x38bf,	// (0x0004d76e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x38bf,	// (0x0004d76e) list_double_large_graphic_pane_t1_cp2

0x38d6,	// (0x0004d785) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x38d6,	// (0x0004d785) list_double_large_graphic_pane_t2_cp2

0xe200,	// (0x000580af) list_double2_graphic_pane_g1_cp2_ParamLimits

0xe200,	// (0x000580af) list_double2_graphic_pane_g1_cp2

0xe20e,	// (0x000580bd) list_double2_graphic_pane_g2_cp2_ParamLimits

0xe20e,	// (0x000580bd) list_double2_graphic_pane_g2_cp2

0xe21f,	// (0x000580ce) list_double2_graphic_pane_g3_cp2

0xe229,	// (0x000580d8) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe229,	// (0x000580d8) list_double2_graphic_pane_t1_cp2

0xe23f,	// (0x000580ee) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe23f,	// (0x000580ee) list_double2_graphic_pane_t2_cp2

0xc018,	// (0x00055ec7) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc018,	// (0x00055ec7) list_single_number_heading_pane_g1_cp2

0xe251,	// (0x00058100) list_single_number_heading_pane_g2_cp2

0xe259,	// (0x00058108) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe259,	// (0x00058108) list_single_number_heading_pane_t1_cp2

0xe26f,	// (0x0005811e) list_single_number_heading_pane_t2_cp2_ParamLimits

0xe26f,	// (0x0005811e) list_single_number_heading_pane_t2_cp2

0xe281,	// (0x00058130) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe281,	// (0x00058130) list_single_number_heading_pane_t3_cp2

0xc018,	// (0x00055ec7) list_single_heading_pane_g1_cp2_ParamLimits

0xc018,	// (0x00055ec7) list_single_heading_pane_g1_cp2

0xe251,	// (0x00058100) list_single_heading_pane_g2_cp2

0xe259,	// (0x00058108) list_single_heading_pane_t1_cp2_ParamLimits

0xe259,	// (0x00058108) list_single_heading_pane_t1_cp2

0x369f,	// (0x0004d54e) list_single_heading_pane_t2_cp2_ParamLimits

0x369f,	// (0x0004d54e) list_single_heading_pane_t2_cp2

0x35e7,	// (0x0004d496) list_double_graphic_pane_g1_cp2_ParamLimits

0x35e7,	// (0x0004d496) list_double_graphic_pane_g1_cp2

0x35f3,	// (0x0004d4a2) list_double_graphic_pane_g2_cp2_ParamLimits

0x35f3,	// (0x0004d4a2) list_double_graphic_pane_g2_cp2

0x3602,	// (0x0004d4b1) list_double_graphic_pane_g3_cp2

0x360a,	// (0x0004d4b9) list_double_graphic_pane_t1_cp2_ParamLimits

0x360a,	// (0x0004d4b9) list_double_graphic_pane_t1_cp2

0x3620,	// (0x0004d4cf) list_double_graphic_pane_t2_cp2_ParamLimits

0x3620,	// (0x0004d4cf) list_double_graphic_pane_t2_cp2

0xe2f6,	// (0x000581a5) list_double_number_pane_g1_cp2_ParamLimits

0xe2f6,	// (0x000581a5) list_double_number_pane_g1_cp2

0xe302,	// (0x000581b1) list_double_number_pane_g2_cp2

0x35ab,	// (0x0004d45a) list_double_number_pane_t1_cp2_ParamLimits

0x35ab,	// (0x0004d45a) list_double_number_pane_t1_cp2

0x35bf,	// (0x0004d46e) list_double_number_pane_t2_cp2_ParamLimits

0x35bf,	// (0x0004d46e) list_double_number_pane_t2_cp2

0x35d5,	// (0x0004d484) list_double_number_pane_t3_cp2_ParamLimits

0x35d5,	// (0x0004d484) list_double_number_pane_t3_cp2

0x3494,	// (0x0004d343) list_single_graphic_pane_g1_cp2_ParamLimits

0x3494,	// (0x0004d343) list_single_graphic_pane_g1_cp2

0xe352,	// (0x00058201) list_single_graphic_pane_g2_cp2_ParamLimits

0xe352,	// (0x00058201) list_single_graphic_pane_g2_cp2

0xe35e,	// (0x0005820d) list_single_graphic_pane_g3_cp2

0x346a,	// (0x0004d319) list_single_graphic_pane_t1_cp2_ParamLimits

0x346a,	// (0x0004d319) list_single_graphic_pane_t1_cp2

0xe352,	// (0x00058201) list_single_number_pane_g1_cp2_ParamLimits

0xe352,	// (0x00058201) list_single_number_pane_g1_cp2

0xe35e,	// (0x0005820d) list_single_number_pane_g2_cp2

0x346a,	// (0x0004d319) list_single_number_pane_t1_cp2_ParamLimits

0x346a,	// (0x0004d319) list_single_number_pane_t1_cp2

0x3480,	// (0x0004d32f) list_single_number_pane_t2_cp2_ParamLimits

0x3480,	// (0x0004d32f) list_single_number_pane_t2_cp2

0xbfd7,	// (0x00055e86) list_double2_pane_g1_cp2_ParamLimits

0xbfd7,	// (0x00055e86) list_double2_pane_g1_cp2

0xbfe8,	// (0x00055e97) list_double2_pane_g2_cp2

0xe2ce,	// (0x0005817d) list_double2_pane_t1_cp2_ParamLimits

0xe2ce,	// (0x0005817d) list_double2_pane_t1_cp2

0xe2e4,	// (0x00058193) list_double2_pane_t2_cp2_ParamLimits

0xe2e4,	// (0x00058193) list_double2_pane_t2_cp2

0xe2f6,	// (0x000581a5) list_double_pane_g1_cp2_ParamLimits

0xe2f6,	// (0x000581a5) list_double_pane_g1_cp2

0xe302,	// (0x000581b1) list_double_pane_g2_cp2

0xe30a,	// (0x000581b9) list_double_pane_t1_cp2_ParamLimits

0xe30a,	// (0x000581b9) list_double_pane_t1_cp2

0xe320,	// (0x000581cf) list_double_pane_t2_cp2_ParamLimits

0xe320,	// (0x000581cf) list_double_pane_t2_cp2

0xa702,	// (0x000545b1) list_single_pane_cp2_g3

0xe352,	// (0x00058201) list_single_pane_g1_cp2_ParamLimits

0xe352,	// (0x00058201) list_single_pane_g1_cp2

0xe35e,	// (0x0005820d) list_single_pane_g2_cp2

0xe366,	// (0x00058215) list_single_pane_t1_cp2_ParamLimits

0xe366,	// (0x00058215) list_single_pane_t1_cp2

0xa70a,	// (0x000545b9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa70a,	// (0x000545b9) list_single_large_graphic_pane_g1_cp2

0xe37e,	// (0x0005822d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xe37e,	// (0x0005822d) list_single_large_graphic_pane_g2_cp2

0xe38a,	// (0x00058239) list_single_large_graphic_pane_g3_cp2

0xa716,	// (0x000545c5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa716,	// (0x000545c5) list_single_large_graphic_pane_g4_cp1

0xe392,	// (0x00058241) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe392,	// (0x00058241) list_single_large_graphic_pane_t1_cp2

0x3436,	// (0x0004d2e5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3436,	// (0x0004d2e5) list_single_graphic_heading_pane_g1_cp2

0x3403,	// (0x0004d2b2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3403,	// (0x0004d2b2) list_single_graphic_heading_pane_g4_cp2

0xe35e,	// (0x0005820d) list_single_graphic_heading_pane_g5_cp2

0x3442,	// (0x0004d2f1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3442,	// (0x0004d2f1) list_single_graphic_heading_pane_t1_cp2

0x3458,	// (0x0004d307) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3458,	// (0x0004d307) list_single_graphic_heading_pane_t2_cp2

0x33f7,	// (0x0004d2a6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x33f7,	// (0x0004d2a6) list_single_2graphic_pane_g1_cp2

0x3403,	// (0x0004d2b2) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3403,	// (0x0004d2b2) list_single_2graphic_pane_g2_cp2

0xe35e,	// (0x0005820d) list_single_2graphic_pane_g3_cp2

0x3414,	// (0x0004d2c3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3414,	// (0x0004d2c3) list_single_2graphic_pane_g4_cp2

0x3420,	// (0x0004d2cf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3420,	// (0x0004d2cf) list_single_2graphic_pane_t1_cp2

0x9230,	// (0x000530df) list_highlight_pane_g10_cp1

0x2fdf,	// (0x0004ce8e) list_highlight_pane_g1_cp1

0x2fe7,	// (0x0004ce96) list_highlight_pane_g2_cp1

0x2fef,	// (0x0004ce9e) list_highlight_pane_g3_cp1

0x2ff7,	// (0x0004cea6) list_highlight_pane_g4_cp1

0x2fff,	// (0x0004ceae) list_highlight_pane_g5_cp1

0x3007,	// (0x0004ceb6) list_highlight_pane_g6_cp1

0x300f,	// (0x0004cebe) list_highlight_pane_g7_cp1

0x3017,	// (0x0004cec6) list_highlight_pane_g8_cp1

0x301f,	// (0x0004cece) list_highlight_pane_g9_cp1

0xc564,	// (0x00056413) form_field_slider_pane_t3

0xc572,	// (0x00056421) form_field_slider_pane_t4

0x2f23,	// (0x0004cdd2) slider_form_pane_ParamLimits

0x2f23,	// (0x0004cdd2) slider_form_pane

0x9320,	// (0x000531cf) control_abbreviations

0x9320,	// (0x000531cf) control_conventions

0x9320,	// (0x000531cf) control_definitions

0x9320,	// (0x000531cf) format_table_attribute

0xc7a6,	// (0x00056655) bg_popup_preview_window_pane_g9

0x9320,	// (0x000531cf) format_table_data2

0x9320,	// (0x000531cf) format_table_data3

0x9320,	// (0x000531cf) format_table_data_example

0x0008,

0x9320,	// (0x000531cf) intro_purpose

0xf8d9,	// (0x00059788) bg_popup_preview_window_pane_g

0x9320,	// (0x000531cf) texts_category

0x9320,	// (0x000531cf) texts_graphics

0xe3a8,	// (0x00058257) text_digital

0xe3b7,	// (0x00058266) text_primary

0xe3c6,	// (0x00058275) text_primary_small

0xe3d5,	// (0x00058284) text_secondary

0xe3e4,	// (0x00058293) text_title

0xcb0b,	// (0x000569ba) bg_passive_tab_pane_g1_cp3_srt

0xa657,	// (0x00054506) bg_passive_tab_pane_g2_cp3_srt

0xcb14,	// (0x000569c3) bg_passive_tab_pane_g3_cp3_srt

0x9571,	// (0x00053420) bg_active_tab_pane_cp3_srt_ParamLimits

0x9571,	// (0x00053420) bg_active_tab_pane_cp3_srt

0xcb1d,	// (0x000569cc) tabs_4_active_pane_srt_g1

0xcb25,	// (0x000569d4) tabs_4_active_pane_srt_t1_ParamLimits

0xcb25,	// (0x000569d4) tabs_4_active_pane_srt_t1

0xcb0b,	// (0x000569ba) bg_active_tab_pane_g1_cp3_copy1

0xa657,	// (0x00054506) bg_active_tab_pane_g2_cp3_copy1

0xcb14,	// (0x000569c3) bg_active_tab_pane_g3_cp3_copy1

0x95bb,	// (0x0005346a) tabs_2_long_active_pane_srt_ParamLimits

0x95bb,	// (0x0005346a) tabs_2_long_active_pane_srt

0x95bb,	// (0x0005346a) tabs_2_long_passive_pane_srt_ParamLimits

0x95bb,	// (0x0005346a) tabs_2_long_passive_pane_srt

0x2299,	// (0x0004c148) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2299,	// (0x0004c148) bg_passive_tab_pane_cp4_srt

0xc8be,	// (0x0005676d) bg_passive_tab_pane_g1_cp4_srt

0xa657,	// (0x00054506) bg_passive_tab_pane_g2_cp4_srt

0xc8c7,	// (0x00056776) bg_passive_tab_pane_g3_cp4_srt

0x95bb,	// (0x0005346a) bg_active_tab_pane_cp4_srt_ParamLimits

0x95bb,	// (0x0005346a) bg_active_tab_pane_cp4_srt

0xc8d0,	// (0x0005677f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc8d0,	// (0x0005677f) tabs_2_long_active_pane_srt_t1

0xc8be,	// (0x0005676d) bg_active_tab_pane_g1_cp4_srt

0xa657,	// (0x00054506) bg_active_tab_pane_g2_cp4_srt

0xc8c7,	// (0x00056776) bg_active_tab_pane_g3_cp4_srt

0x9571,	// (0x00053420) tabs_3_long_active_pane_srt_ParamLimits

0x9571,	// (0x00053420) tabs_3_long_active_pane_srt

0x9571,	// (0x00053420) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x9571,	// (0x00053420) tabs_3_long_passive_pane_cp_srt

0x9571,	// (0x00053420) tabs_3_long_passive_pane_srt_ParamLimits

0x9571,	// (0x00053420) tabs_3_long_passive_pane_srt

0x2299,	// (0x0004c148) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2299,	// (0x0004c148) bg_passive_tab_pane_cp5_srt

0xa6a3,	// (0x00054552) bg_passive_tab_pane_g1_cp5_srt

0xa657,	// (0x00054506) bg_passive_tab_pane_g2_cp5_srt

0xa6ac,	// (0x0005455b) bg_passive_tab_pane_g3_cp5_srt

0x95bb,	// (0x0005346a) bg_active_tab_pane_cp5_srt_ParamLimits

0x95bb,	// (0x0005346a) bg_active_tab_pane_cp5_srt

0xc8a8,	// (0x00056757) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc8a8,	// (0x00056757) tabs_3_long_active_pane_srt_t1

0xa6a3,	// (0x00054552) bg_active_tab_pane_g1_cp5_srt

0xa657,	// (0x00054506) bg_active_tab_pane_g2_cp5_srt

0xa6ac,	// (0x0005455b) bg_active_tab_pane_g3_cp5_srt

0x3aea,	// (0x0004d999) navi_text_pane_srt_t1

0x3ae2,	// (0x0004d991) navi_icon_pane_srt_g1

0xe4cf,	// (0x0005837e) midp_editing_number_pane_srt

0xe3f3,	// (0x000582a2) midp_ticker_pane_srt

0xe4d7,	// (0x00058386) midp_ticker_pane_srt_g1

0xe4df,	// (0x0005838e) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x00059617) midp_ticker_pane_srt_g

0xe4e7,	// (0x00058396) midp_ticker_pane_srt_t1

0x3ad3,	// (0x0004d982) midp_editing_number_pane_t1_copy1

0xa730,	// (0x000545df) listscroll_midp_pane

0xa730,	// (0x000545df) midp_form_pane

0xa79b,	// (0x0005464a) midp_info_popup_window_ParamLimits

0xa79b,	// (0x0005464a) midp_info_popup_window

0x9fae,	// (0x00053e5d) bg_popup_sub_pane_cp50_ParamLimits

0x9fae,	// (0x00053e5d) bg_popup_sub_pane_cp50

0x2c1b,	// (0x0004caca) listscroll_midp_info_pane_ParamLimits

0x2c1b,	// (0x0004caca) listscroll_midp_info_pane

0x2bfb,	// (0x0004caaa) listscroll_form_midp_pane_ParamLimits

0x2bfb,	// (0x0004caaa) listscroll_form_midp_pane

0x2c07,	// (0x0004cab6) scroll_bar_cp050

0x2bfb,	// (0x0004caaa) list_midp_pane

0xccc7,	// (0x00056b76) signal_pane_g2_cp

0x2b15,	// (0x0004c9c4) listscroll_midp_info_pane_t1_ParamLimits

0x2b15,	// (0x0004c9c4) listscroll_midp_info_pane_t1

0xc39e,	// (0x0005624d) listscroll_midp_info_pane_t2_ParamLimits

0xc39e,	// (0x0005624d) listscroll_midp_info_pane_t2

0xc3dc,	// (0x0005628b) listscroll_midp_info_pane_t3_ParamLimits

0xc3dc,	// (0x0005628b) listscroll_midp_info_pane_t3

0xc416,	// (0x000562c5) listscroll_midp_info_pane_t4_ParamLimits

0xc416,	// (0x000562c5) listscroll_midp_info_pane_t4

0x0003,

0xf814,	// (0x000596c3) listscroll_midp_info_pane_t_ParamLimits

0xf814,	// (0x000596c3) listscroll_midp_info_pane_t

0xa070,	// (0x00053f1f) scroll_pane_cp21

0x2ab5,	// (0x0004c964) form_midp_field_choice_group_pane

0xc361,	// (0x00056210) form_midp_field_text_pane

0x2afb,	// (0x0004c9aa) form_midp_field_time_pane

0x2b03,	// (0x0004c9b2) form_midp_gauge_slider_pane

0x2b0c,	// (0x0004c9bb) form_midp_gauge_wait_pane

0x9320,	// (0x000531cf) form_midp_image_pane

0x9009,	// (0x00052eb8) list_single_midp_pane_ParamLimits

0x9009,	// (0x00052eb8) list_single_midp_pane

0xc33f,	// (0x000561ee) form_midp_field_text_pane_t1

0x2834,	// (0x0004c6e3) input_focus_pane_cp050

0x2aa4,	// (0x0004c953) list_midp_form_text_pane

0x2a39,	// (0x0004c8e8) form_midp_field_choice_group_pane_t1

0x2a47,	// (0x0004c8f6) input_focus_pane_cp051

0x2a5b,	// (0x0004c90a) list_midp_choice_pane

0x9320,	// (0x000531cf) status_idle_pane

0x2a1d,	// (0x0004c8cc) form_midp_field_time_pane_t1

0x9230,	// (0x000530df) wait_anim_pane_g2_copy1

0x2a2b,	// (0x0004c8da) form_midp_field_time_pane_t2

0x0001,

0xe453,	// (0x00058302) aid_navinavi_width_2_pane

0xf80f,	// (0x000596be) form_midp_field_time_pane_t

0x9320,	// (0x000531cf) input_focus_pane_cp052

0x9320,	// (0x000531cf) bg_input_focus_pane_cp040

0x29dd,	// (0x0004c88c) form_midp_gauge_slider_pane_t1

0x29eb,	// (0x0004c89a) form_midp_gauge_slider_pane_t2

0xc323,	// (0x000561d2) form_midp_gauge_slider_pane_t3

0xc331,	// (0x000561e0) form_midp_gauge_slider_pane_t4

0x0003,

0xf806,	// (0x000596b5) form_midp_gauge_slider_pane_t

0x2a15,	// (0x0004c8c4) form_midp_slider_pane

0x95bb,	// (0x0005346a) bg_input_focus_pane_cp041_ParamLimits

0x95bb,	// (0x0005346a) bg_input_focus_pane_cp041

0x29aa,	// (0x0004c859) form_midp_gauge_wait_pane_t1_ParamLimits

0x29aa,	// (0x0004c859) form_midp_gauge_wait_pane_t1

0x29bc,	// (0x0004c86b) form_midp_gauge_wait_pane_t2_ParamLimits

0x29bc,	// (0x0004c86b) form_midp_gauge_wait_pane_t2

0x0001,

0xf801,	// (0x000596b0) form_midp_gauge_wait_pane_t_ParamLimits

0xf801,	// (0x000596b0) form_midp_gauge_wait_pane_t

0x29ce,	// (0x0004c87d) form_midp_wait_pane_ParamLimits

0x29ce,	// (0x0004c87d) form_midp_wait_pane

0xc2ed,	// (0x0005619c) form_midp_image_pane_g1

0xc2f6,	// (0x000561a5) form_midp_image_pane_t1

0xc305,	// (0x000561b4) form_midp_image_pane_t2

0xc314,	// (0x000561c3) form_midp_image_pane_t3

0x0002,

0xf7fa,	// (0x000596a9) form_midp_image_pane_t

0x296b,	// (0x0004c81a) list_single_midp_pane_g1

0xe635,	// (0x000584e4) list_single_midp_pane_t1

0xc2d8,	// (0x00056187) list_midp_form_item_pane_ParamLimits

0xc2d8,	// (0x00056187) list_midp_form_item_pane

0xe3fb,	// (0x000582aa) list_midp_form_item_pane_t1

0xe40a,	// (0x000582b9) midp_ticker_pane_g1

0xe416,	// (0x000582c5) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x000595fd) midp_ticker_pane_g

0xe422,	// (0x000582d1) midp_ticker_pane_t1

0x3d20,	// (0x0004dbcf) midp_editing_number_pane_t1

0x3cfe,	// (0x0004dbad) midp_editing_number_pane

0x3d0d,	// (0x0004dbbc) midp_ticker_pane

0x3ac3,	// (0x0004d972) ai_message_heading_pane

0x9320,	// (0x000531cf) bg_popup_window_pane_cp14

0x3acb,	// (0x0004d97a) listscroll_ai_message_pane

0x3a4d,	// (0x0004d8fc) ai_message_heading_pane_g1_ParamLimits

0x3a4d,	// (0x0004d8fc) ai_message_heading_pane_g1

0xc870,	// (0x0005671f) ai_message_heading_pane_g2_ParamLimits

0xc870,	// (0x0005671f) ai_message_heading_pane_g2

0x3a65,	// (0x0004d914) ai_message_heading_pane_g3_ParamLimits

0x3a65,	// (0x0004d914) ai_message_heading_pane_g3

0x3a71,	// (0x0004d920) ai_message_heading_pane_g4_ParamLimits

0x3a71,	// (0x0004d920) ai_message_heading_pane_g4

0x0003,

0xf93b,	// (0x000597ea) ai_message_heading_pane_g_ParamLimits

0xf93b,	// (0x000597ea) ai_message_heading_pane_g

0xc87c,	// (0x0005672b) ai_message_heading_pane_t1_ParamLimits

0xc87c,	// (0x0005672b) ai_message_heading_pane_t1

0xc896,	// (0x00056745) ai_message_heading_pane_t2_ParamLimits

0xc896,	// (0x00056745) ai_message_heading_pane_t2

0x0001,

0xf944,	// (0x000597f3) ai_message_heading_pane_t_ParamLimits

0xf944,	// (0x000597f3) ai_message_heading_pane_t

0x3aa9,	// (0x0004d958) bg_popup_heading_pane_cp1_ParamLimits

0x3aa9,	// (0x0004d958) bg_popup_heading_pane_cp1

0x3a3b,	// (0x0004d8ea) list_ai_message_pane_ParamLimits

0x3a3b,	// (0x0004d8ea) list_ai_message_pane

0xa070,	// (0x00053f1f) scroll_pane_cp10

0x39d7,	// (0x0004d886) list_ai_message_pane_g1

0x39df,	// (0x0004d88e) list_ai_message_pane_g2

0x0001,

0xf918,	// (0x000597c7) list_ai_message_pane_g

0x39e7,	// (0x0004d896) list_ai_message_pane_t1_ParamLimits

0x39e7,	// (0x0004d896) list_ai_message_pane_t1

0x39fc,	// (0x0004d8ab) list_ai_message_pane_t2_ParamLimits

0x39fc,	// (0x0004d8ab) list_ai_message_pane_t2

0x3a11,	// (0x0004d8c0) list_ai_message_pane_t3_ParamLimits

0x3a11,	// (0x0004d8c0) list_ai_message_pane_t3

0x3a26,	// (0x0004d8d5) list_ai_message_pane_t4_ParamLimits

0x3a26,	// (0x0004d8d5) list_ai_message_pane_t4

0x0003,

0xf91d,	// (0x000597cc) list_ai_message_pane_t_ParamLimits

0xf91d,	// (0x000597cc) list_ai_message_pane_t

0xc84c,	// (0x000566fb) cell_ai_soft_ind_pane_ParamLimits

0xc84c,	// (0x000566fb) cell_ai_soft_ind_pane

0xe434,	// (0x000582e3) cell_ai_soft_ind_pane_g1_ParamLimits

0xe434,	// (0x000582e3) cell_ai_soft_ind_pane_g1

0x9320,	// (0x000531cf) grid_highlight_cp1

0xe441,	// (0x000582f0) text_secondary_cp56_ParamLimits

0xe441,	// (0x000582f0) text_secondary_cp56

0x3997,	// (0x0004d846) example_general_pane_ParamLimits

0x3997,	// (0x0004d846) example_general_pane

0x39a3,	// (0x0004d852) example_parent_pane_g1_ParamLimits

0x39a3,	// (0x0004d852) example_parent_pane_g1

0x39af,	// (0x0004d85e) example_parent_pane_t1_ParamLimits

0x39af,	// (0x0004d85e) example_parent_pane_t1

0xaea5,	// (0x00054d54) popup_preview_text_window_ParamLimits

0xaea5,	// (0x00054d54) popup_preview_text_window

0xe34a,	// (0x000581f9) list_single_pane_cp2_g4

0x99f3,	// (0x000538a2) bg_popup_preview_window_pane_ParamLimits

0x99f3,	// (0x000538a2) bg_popup_preview_window_pane

0xc7ae,	// (0x0005665d) popup_preview_text_window_t1_ParamLimits

0xc7ae,	// (0x0005665d) popup_preview_text_window_t1

0x370f,	// (0x0004d5be) popup_preview_text_window_t2_ParamLimits

0x370f,	// (0x0004d5be) popup_preview_text_window_t2

0x3758,	// (0x0004d607) popup_preview_text_window_t3_ParamLimits

0x3758,	// (0x0004d607) popup_preview_text_window_t3

0x379d,	// (0x0004d64c) popup_preview_text_window_t4_ParamLimits

0x379d,	// (0x0004d64c) popup_preview_text_window_t4

0x0004,

0xf8ec,	// (0x0005979b) popup_preview_text_window_t_ParamLimits

0xf8ec,	// (0x0005979b) popup_preview_text_window_t

0x381b,	// (0x0004d6ca) scroll_pane_cp11

0x27c0,	// (0x0004c66f) bg_popup_preview_window_pane_g1

0xc76e,	// (0x0005661d) bg_popup_preview_window_pane_g2

0xc776,	// (0x00056625) bg_popup_preview_window_pane_g3

0xc77e,	// (0x0005662d) bg_popup_preview_window_pane_g4

0xc786,	// (0x00056635) bg_popup_preview_window_pane_g5

0xc78e,	// (0x0005663d) bg_popup_preview_window_pane_g6

0xc796,	// (0x00056645) bg_popup_preview_window_pane_g7

0xc79e,	// (0x0005664d) bg_popup_preview_window_pane_g8

0xedbb,	// (0x00058c6a) aid_popup_width_pane

0xae21,	// (0x00054cd0) popup_midp_note_alarm_window_ParamLimits

0xae21,	// (0x00054cd0) popup_midp_note_alarm_window

0x9f05,	// (0x00053db4) data_form_pane_ParamLimits

0x8e64,	// (0x00052d13) form_field_data_pane_g1

0x8e6e,	// (0x00052d1d) form_field_data_pane_t1_ParamLimits

0x9f11,	// (0x00053dc0) input_focus_pane_ParamLimits

0xe17a,	// (0x00058029) data_form_wide_pane_ParamLimits

0xe18b,	// (0x0005803a) form_field_data_wide_pane_g1

0xe197,	// (0x00058046) form_field_data_wide_pane_t1_ParamLimits

0x9c94,	// (0x00053b43) input_focus_pane_cp6_ParamLimits

0xa01b,	// (0x00053eca) input_popup_find_pane_g1_ParamLimits

0xa01b,	// (0x00053eca) input_popup_find_pane_g1

0xf429,	// (0x000592d8) aid_navi_side_left_pane

0xf43e,	// (0x000592ed) aid_navi_side_right_pane

0x30da,	// (0x0004cf89) bg_popup_window_pane_cp30_ParamLimits

0x30da,	// (0x0004cf89) bg_popup_window_pane_cp30

0x3154,	// (0x0004d003) popup_midp_note_alarm_window_g1_ParamLimits

0x3154,	// (0x0004d003) popup_midp_note_alarm_window_g1

0x3184,	// (0x0004d033) popup_midp_note_alarm_window_t1_ParamLimits

0x3184,	// (0x0004d033) popup_midp_note_alarm_window_t1

0xc5b7,	// (0x00056466) popup_midp_note_alarm_window_t2_ParamLimits

0xc5b7,	// (0x00056466) popup_midp_note_alarm_window_t2

0xc665,	// (0x00056514) popup_midp_note_alarm_window_t3_ParamLimits

0xc665,	// (0x00056514) popup_midp_note_alarm_window_t3

0xc68d,	// (0x0005653c) popup_midp_note_alarm_window_t4_ParamLimits

0xc68d,	// (0x0005653c) popup_midp_note_alarm_window_t4

0x331b,	// (0x0004d1ca) popup_midp_note_alarm_window_t5_ParamLimits

0x331b,	// (0x0004d1ca) popup_midp_note_alarm_window_t5

0x000a,

0xf889,	// (0x00059738) popup_midp_note_alarm_window_t_ParamLimits

0xf889,	// (0x00059738) popup_midp_note_alarm_window_t

0x33c7,	// (0x0004d276) wait_bar_pane_cp1_ParamLimits

0x33c7,	// (0x0004d276) wait_bar_pane_cp1

0x9320,	// (0x000531cf) wait_anim_pane_copy1

0x9320,	// (0x000531cf) wait_border_pane_copy1

0x2dd0,	// (0x0004cc7f) wait_border_pane_g1_copy1

0xe1b1,	// (0x00058060) form_field_popup_pane_g1

0x8e88,	// (0x00052d37) form_field_popup_pane_t1_ParamLimits

0x9f11,	// (0x00053dc0) input_focus_pane_cp7_ParamLimits

0x9f33,	// (0x00053de2) list_form_pane_ParamLimits

0xe1b9,	// (0x00058068) form_field_popup_wide_pane_g1

0xe1c1,	// (0x00058070) form_field_popup_wide_pane_t1_ParamLimits

0x9f11,	// (0x00053dc0) input_focus_pane_cp8_ParamLimits

0x9f3f,	// (0x00053dee) list_form_wide_pane_ParamLimits

0xcb7e,	// (0x00056a2d) aid_size_cell_graphic_pane

0x8f07,	// (0x00052db6) data_form_pane_t1_ParamLimits

0x9031,	// (0x00052ee0) data_form_wide_pane_t1_ParamLimits

0xb2e8,	// (0x00055197) bg_status_flat_pane

0x94ad,	// (0x0005335c) title_pane_t1_ParamLimits

0x9539,	// (0x000533e8) title_pane_t2_ParamLimits

0x955f,	// (0x0005340e) title_pane_t3_ParamLimits

0xf557,	// (0x00059406) title_pane_t_ParamLimits

0xa523,	// (0x000543d2) level_1_signal_ParamLimits

0xa530,	// (0x000543df) level_2_signal_ParamLimits

0xbd7d,	// (0x00055c2c) level_3_signal_ParamLimits

0xbd8a,	// (0x00055c39) level_4_signal_ParamLimits

0xbd97,	// (0x00055c46) level_5_signal_ParamLimits

0xbda4,	// (0x00055c53) level_6_signal_ParamLimits

0xbdb1,	// (0x00055c60) level_7_signal_ParamLimits

0xa523,	// (0x000543d2) level_1_battery_ParamLimits

0xa530,	// (0x000543df) level_2_battery_ParamLimits

0xbd7d,	// (0x00055c2c) level_3_battery_ParamLimits

0xbd8a,	// (0x00055c39) level_4_battery_ParamLimits

0xbd97,	// (0x00055c46) level_5_battery_ParamLimits

0xbda4,	// (0x00055c53) level_6_battery_ParamLimits

0xbdb1,	// (0x00055c60) level_7_battery_ParamLimits

0x2fdf,	// (0x0004ce8e) bg_status_flat_pane_g1

0x2fe7,	// (0x0004ce96) bg_status_flat_pane_g2

0x2fef,	// (0x0004ce9e) bg_status_flat_pane_g3

0x2ff7,	// (0x0004cea6) bg_status_flat_pane_g4

0x2fff,	// (0x0004ceae) bg_status_flat_pane_g5

0x3007,	// (0x0004ceb6) bg_status_flat_pane_g6

0x300f,	// (0x0004cebe) bg_status_flat_pane_g7

0x9587,	// (0x00053436) tabs_3_active_pane_t1_ParamLimits

0x9587,	// (0x00053436) tabs_3_passive_pane_t1_ParamLimits

0x95a1,	// (0x00053450) tabs_4_active_pane_t1_ParamLimits

0x95a1,	// (0x00053450) tabs_4_1_passive_pane_t1_ParamLimits

0xa0b1,	// (0x00053f60) tabs_2_active_pane_t1_ParamLimits

0xa0b1,	// (0x00053f60) tabs_2_passive_pane_t1_ParamLimits

0x95bb,	// (0x0005346a) bg_active_tab_pane_cp4_ParamLimits

0xa0c3,	// (0x00053f72) tabs_2_long_active_pane_t1_ParamLimits

0x2299,	// (0x0004c148) bg_passive_tab_pane_cp4_ParamLimits

0x0cdf,	// (0x0004ab8e) list_single_midp_graphic_pane_t1_ParamLimits

0x95bb,	// (0x0005346a) bg_active_tab_pane_cp5_ParamLimits

0xa0d6,	// (0x00053f85) tabs_3_long_active_pane_t1_ParamLimits

0x2299,	// (0x0004c148) bg_passive_tab_pane_cp5_ParamLimits

0x0cdf,	// (0x0004ab8e) list_single_midp_graphic_pane_t1

0xb2e8,	// (0x00055197) bg_status_flat_pane_ParamLimits

0x2453,	// (0x0004c302) indicator_pane_cp2_ParamLimits

0x2453,	// (0x0004c302) indicator_pane_cp2

0xc0c5,	// (0x00055f74) navi_pane_srt_ParamLimits

0xc0c5,	// (0x00055f74) navi_pane_srt

0x25a2,	// (0x0004c451) popup_clock_digital_analogue_window_cp1

0x975b,	// (0x0005360a) indicator_pane_t1

0xe3f3,	// (0x000582a2) copy_highlight_pane

0xe3f3,	// (0x000582a2) cursor_graphics_pane

0xe3f3,	// (0x000582a2) graphic_within_text_pane

0xe3f3,	// (0x000582a2) link_highlight_pane

0x37de,	// (0x0004d68d) popup_preview_text_window_t5_ParamLimits

0x37de,	// (0x0004d68d) popup_preview_text_window_t5

0xe45b,	// (0x0005830a) cursor_digital_pane

0xe45b,	// (0x0005830a) cursor_primary_pane

0xe46c,	// (0x0005831b) cursor_primary_small_pane

0xe474,	// (0x00058323) cursor_secondary_pane

0xe47c,	// (0x0005832b) cursor_title_pane

0xe45b,	// (0x0005830a) link_highlight_digital_pane

0xe463,	// (0x00058312) link_highlight_primary_pane

0xe46c,	// (0x0005831b) link_highlight_primary_small_pane

0xe474,	// (0x00058323) link_highlight_secondary_pane

0xe47c,	// (0x0005832b) link_highlight_title_pane

0xe45b,	// (0x0005830a) copy_highlight_digital_pane

0xe45b,	// (0x0005830a) copy_highlight_primary_pane

0xe46c,	// (0x0005831b) copy_highlight_primary_small_pane

0xe474,	// (0x00058323) copy_highlight_secondary_pane

0xe47c,	// (0x0005832b) copy_highlight_title_pane

0xe474,	// (0x00058323) graphic_text_digital_pane

0x307d,	// (0x0004cf2c) graphic_text_primary_pane

0x3086,	// (0x0004cf35) graphic_text_primary_small_pane

0xe46c,	// (0x0005831b) graphic_text_secondary_pane

0xe45b,	// (0x0005830a) graphic_text_title_pane

0xa7ec,	// (0x0005469b) cursor_primary_pane_g1

0x306f,	// (0x0004cf1e) cursor_text_primary_t1

0xc5ad,	// (0x0005645c) cursor_primary_small_pane_g1

0x3061,	// (0x0004cf10) cursor_text_primary_small_t1

0xc5a3,	// (0x00056452) cursor_primary_small_pane_g1_copy1

0x3049,	// (0x0004cef8) cursor_text_primary_small_t1_copy1

0x3027,	// (0x0004ced6) cursor_text_title_t1

0xc599,	// (0x00056448) cursor_title_pane_g1

0xa7ec,	// (0x0005469b) cursor_digital_pane_g1

0xe484,	// (0x00058333) cursor_text_digital_t1

0xe492,	// (0x00058341) link_highlight_primary_pane_g1

0x2fd0,	// (0x0004ce7f) link_highlight_primary_pane_t1

0xe492,	// (0x00058341) link_highlight_primary_small_pane_g1

0xe49a,	// (0x00058349) link_highlight_primary_small_pane_t1

0xe492,	// (0x00058341) link_highlight_secondary_pane_g1

0xe4a9,	// (0x00058358) link_highlight_secondary_pane_t1

0x2f35,	// (0x0004cde4) link_highlight_title_pane_g1

0x2f4c,	// (0x0004cdfb) link_highlight_title_pane_t1

0x2f35,	// (0x0004cde4) link_highlight_digital_pane_g1

0x2f3d,	// (0x0004cdec) link_highlight_digital_pane_t1

0x2def,	// (0x0004cc9e) copy_highlight_primary_pane_g1

0x2e15,	// (0x0004ccc4) copy_highlight_primary_pane_t1

0x2def,	// (0x0004cc9e) copy_highlight_primary_small_pane_g1

0x2e06,	// (0x0004ccb5) copy_highlight_primary_small_pane_t1

0xe4b8,	// (0x00058367) copy_highlight_secondary_pane_g1

0xe4c0,	// (0x0005836f) copy_highlight_secondary_pane_t1

0x2def,	// (0x0004cc9e) copy_highlight_title_pane_g1

0x2df7,	// (0x0004cca6) copy_highlight_title_pane_t1

0x2def,	// (0x0004cc9e) copy_highlight_digital_pane_g1

0x403d,	// (0x0004deec) copy_highlight_digital_pane_t1

0x3f91,	// (0x0004de40) graphic_text_primary_pane_g1

0x4021,	// (0x0004ded0) graphic_text_primary_pane_t1

0x402f,	// (0x0004dede) graphic_text_primary_pane_t2

0x0001,

0xf9b8,	// (0x00059867) graphic_text_primary_pane_t

0x3ffd,	// (0x0004deac) graphic_text_primary_small_pane_g1

0x4005,	// (0x0004deb4) graphic_text_primary_small_pane_t1

0x4013,	// (0x0004dec2) graphic_text_primary_small_pane_t2

0x0001,

0xf9b3,	// (0x00059862) graphic_text_primary_small_pane_t

0x3fd9,	// (0x0004de88) graphic_text_secondary_pane_g1

0x3fe1,	// (0x0004de90) graphic_text_secondary_pane_t1

0x3fef,	// (0x0004de9e) graphic_text_secondary_pane_t2

0x0001,

0xf9ae,	// (0x0005985d) graphic_text_secondary_pane_t

0x3fb5,	// (0x0004de64) graphic_text_title_pane_g1

0x3fbd,	// (0x0004de6c) graphic_text_title_pane_t1

0x3fcb,	// (0x0004de7a) graphic_text_title_pane_t2

0x0001,

0xf9a9,	// (0x00059858) graphic_text_title_pane_t

0x3f91,	// (0x0004de40) graphic_text_digital_pane_g1

0x3f99,	// (0x0004de48) graphic_text_digital_pane_t1

0x3fa7,	// (0x0004de56) graphic_text_digital_pane_t2

0x0001,

0xf9a4,	// (0x00059853) graphic_text_digital_pane_t

0x95bb,	// (0x0005346a) navi_icon_pane_srt_ParamLimits

0x95bb,	// (0x0005346a) navi_icon_pane_srt

0x9320,	// (0x000531cf) navi_midp_pane_srt

0x9320,	// (0x000531cf) navi_navi_pane_srt

0x95bb,	// (0x0005346a) navi_text_pane_srt_ParamLimits

0x95bb,	// (0x0005346a) navi_text_pane_srt

0x3f5c,	// (0x0004de0b) navi_navi_icon_text_pane_srt

0x3f64,	// (0x0004de13) navi_navi_pane_srt_g1_ParamLimits

0x3f64,	// (0x0004de13) navi_navi_pane_srt_g1

0x3f76,	// (0x0004de25) navi_navi_pane_srt_g2_ParamLimits

0x3f76,	// (0x0004de25) navi_navi_pane_srt_g2

0x0001,

0xf99f,	// (0x0005984e) navi_navi_pane_srt_g_ParamLimits

0xf99f,	// (0x0005984e) navi_navi_pane_srt_g

0x3f88,	// (0x0004de37) navi_navi_tabs_pane_srt

0x3f5c,	// (0x0004de0b) navi_navi_text_pane_srt

0x3f5c,	// (0x0004de0b) navi_navi_volume_pane_srt

0x3f4d,	// (0x0004ddfc) navi_navi_text_pane_srt_t1

0x1113,	// (0x0004afc2) navi_navi_volume_pane_srt_g1

0x111b,	// (0x0004afca) volume_small_pane_srt_ParamLimits

0x111b,	// (0x0004afca) volume_small_pane_srt

0x03c5,	// (0x0004a274) volume_small_pane_srt_g1_ParamLimits

0x03c5,	// (0x0004a274) volume_small_pane_srt_g1

0x03d5,	// (0x0004a284) volume_small_pane_srt_g2_ParamLimits

0x03d5,	// (0x0004a284) volume_small_pane_srt_g2

0x03e6,	// (0x0004a295) volume_small_pane_srt_g3_ParamLimits

0x03e6,	// (0x0004a295) volume_small_pane_srt_g3

0x03f7,	// (0x0004a2a6) volume_small_pane_srt_g4_ParamLimits

0x03f7,	// (0x0004a2a6) volume_small_pane_srt_g4

0x0408,	// (0x0004a2b7) volume_small_pane_srt_g5_ParamLimits

0x0408,	// (0x0004a2b7) volume_small_pane_srt_g5

0x0419,	// (0x0004a2c8) volume_small_pane_srt_g6_ParamLimits

0x0419,	// (0x0004a2c8) volume_small_pane_srt_g6

0x042a,	// (0x0004a2d9) volume_small_pane_srt_g7_ParamLimits

0x042a,	// (0x0004a2d9) volume_small_pane_srt_g7

0x043b,	// (0x0004a2ea) volume_small_pane_srt_g8_ParamLimits

0x043b,	// (0x0004a2ea) volume_small_pane_srt_g8

0x044c,	// (0x0004a2fb) volume_small_pane_srt_g9_ParamLimits

0x044c,	// (0x0004a2fb) volume_small_pane_srt_g9

0x045d,	// (0x0004a30c) volume_small_pane_srt_g10_ParamLimits

0x045d,	// (0x0004a30c) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x00059602) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x00059602) volume_small_pane_srt_g

0x9a9c,	// (0x0005394b) query_popup_data_pane_cp2

0x3f33,	// (0x0004dde2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3f33,	// (0x0004dde2) navi_navi_icon_text_pane_srt_t1

0x307d,	// (0x0004cf2c) navi_tabs_2_long_pane_srt

0x307d,	// (0x0004cf2c) navi_tabs_2_pane_srt

0x307d,	// (0x0004cf2c) navi_tabs_3_long_pane_srt

0x307d,	// (0x0004cf2c) navi_tabs_3_pane_srt

0x307d,	// (0x0004cf2c) navi_tabs_4_pane_srt

0xb589,	// (0x00055438) tabs_2_active_pane_srt_ParamLimits

0xb589,	// (0x00055438) tabs_2_active_pane_srt

0xb599,	// (0x00055448) tabs_2_passive_pane_srt_ParamLimits

0xb599,	// (0x00055448) tabs_2_passive_pane_srt

0x2834,	// (0x0004c6e3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2834,	// (0x0004c6e3) bg_passive_tab_pane_cp1_srt

0xcbc8,	// (0x00056a77) bg_passive_tab_pane_g1_cp1_srt

0xa657,	// (0x00054506) bg_passive_tab_pane_g2_cp1_srt

0xcbd1,	// (0x00056a80) bg_passive_tab_pane_g3_cp1_srt

0x9571,	// (0x00053420) bg_active_tab_pane_cp1_srt_ParamLimits

0x9571,	// (0x00053420) bg_active_tab_pane_cp1_srt

0xcbda,	// (0x00056a89) tabs_2_active_pane_srt_g1

0xcbe2,	// (0x00056a91) tabs_2_active_pane_srt_t1_ParamLimits

0xcbe2,	// (0x00056a91) tabs_2_active_pane_srt_t1

0xcbc8,	// (0x00056a77) bg_active_tab_pane_g1_cp1_srt

0xa657,	// (0x00054506) bg_active_tab_pane_g2_cp1_srt

0xcbd1,	// (0x00056a80) bg_active_tab_pane_g3_cp1_srt

0xb556,	// (0x00055405) tabs_3_active_pane_srt_ParamLimits

0xb556,	// (0x00055405) tabs_3_active_pane_srt

0xb567,	// (0x00055416) tabs_3_passive_pane_cp_srt_ParamLimits

0xb567,	// (0x00055416) tabs_3_passive_pane_cp_srt

0xb578,	// (0x00055427) tabs_3_passive_pane_srt_ParamLimits

0xb578,	// (0x00055427) tabs_3_passive_pane_srt

0x2834,	// (0x0004c6e3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2834,	// (0x0004c6e3) bg_passive_tab_pane_cp2_srt

0xa7f6,	// (0x000546a5) bg_passive_tab_pane_g1_cp2_srt

0xa657,	// (0x00054506) bg_passive_tab_pane_g2_cp2_srt

0xa7ff,	// (0x000546ae) bg_passive_tab_pane_g3_cp2_srt

0x9571,	// (0x00053420) bg_active_tab_pane_cp2_srt_ParamLimits

0x9571,	// (0x00053420) bg_active_tab_pane_cp2_srt

0xcbaa,	// (0x00056a59) tabs_3_active_pane_srt_g1

0xcbb2,	// (0x00056a61) tabs_3_active_pane_srt_t1_ParamLimits

0xcbb2,	// (0x00056a61) tabs_3_active_pane_srt_t1

0xa7f6,	// (0x000546a5) bg_active_tab_pane_g1_cp2_srt

0xa657,	// (0x00054506) bg_active_tab_pane_g2_cp2_srt

0xa7ff,	// (0x000546ae) bg_active_tab_pane_g3_cp2_srt

0x1078,	// (0x0004af27) tabs_4_active_pane_srt_ParamLimits

0x1078,	// (0x0004af27) tabs_4_active_pane_srt

0x108a,	// (0x0004af39) tabs_4_passive_pane_cp2_srt_ParamLimits

0x108a,	// (0x0004af39) tabs_4_passive_pane_cp2_srt

0x0693,	// (0x0004a542) aid_size_cell_toolbar

0x3b7b,	// (0x0004da2a) main_idle_act_pane_ParamLimits

0xac63,	// (0x00054b12) popup_large_graphic_colour_window_ParamLimits

0xb157,	// (0x00055006) popup_toolbar_window_ParamLimits

0xb157,	// (0x00055006) popup_toolbar_window

0x3d2f,	// (0x0004dbde) list_single_graphic_2heading_pane_ParamLimits

0x3d2f,	// (0x0004dbde) list_single_graphic_2heading_pane

0xa283,	// (0x00054132) aid_size_cell_apps_grid_lsc_pane

0xa295,	// (0x00054144) aid_size_cell_apps_grid_prt_pane

0x2299,	// (0x0004c148) bg_wml_button_pane_cp1_ParamLimits

0x2299,	// (0x0004c148) bg_wml_button_pane_cp1

0xc33f,	// (0x000561ee) form_midp_field_text_pane_t1_ParamLimits

0x2834,	// (0x0004c6e3) input_focus_pane_cp050_ParamLimits

0x2aa4,	// (0x0004c953) list_midp_form_text_pane_ParamLimits

0x2a47,	// (0x0004c8f6) input_focus_pane_cp051_ParamLimits

0x2a5b,	// (0x0004c90a) list_midp_choice_pane_ParamLimits

0xc2a4,	// (0x00056153) list_single_2graphic_pane_cp3_ParamLimits

0xc2a4,	// (0x00056153) list_single_2graphic_pane_cp3

0xc2b8,	// (0x00056167) list_single_midp_graphic_pane_ParamLimits

0xc2b8,	// (0x00056167) list_single_midp_graphic_pane

0xe539,	// (0x000583e8) list_single_graphic_2heading_pane_g1_ParamLimits

0xe539,	// (0x000583e8) list_single_graphic_2heading_pane_g1

0xe545,	// (0x000583f4) list_single_graphic_2heading_pane_g4_ParamLimits

0xe545,	// (0x000583f4) list_single_graphic_2heading_pane_g4

0xe551,	// (0x00058400) list_single_graphic_2heading_pane_g5_ParamLimits

0xe551,	// (0x00058400) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x00059655) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x00059655) list_single_graphic_2heading_pane_g

0xe55d,	// (0x0005840c) list_single_graphic_2heading_pane_t1_ParamLimits

0xe55d,	// (0x0005840c) list_single_graphic_2heading_pane_t1

0xe571,	// (0x00058420) list_single_graphic_2heading_pane_t2_ParamLimits

0xe571,	// (0x00058420) list_single_graphic_2heading_pane_t2

0xe58b,	// (0x0005843a) list_single_graphic_2heading_pane_t3_ParamLimits

0xe58b,	// (0x0005843a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x0005965c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x0005965c) list_single_graphic_2heading_pane_t

0x26fe,	// (0x0004c5ad) bg_popup_sub_pane_cp2

0x2728,	// (0x0004c5d7) grid_toobar_pane

0x0c62,	// (0x0004ab11) cell_toolbar_pane_ParamLimits

0x0c62,	// (0x0004ab11) cell_toolbar_pane

0x2764,	// (0x0004c613) cell_toolbar_pane_g1_ParamLimits

0x2764,	// (0x0004c613) cell_toolbar_pane_g1

0xc264,	// (0x00056113) cell_toolbar_pane_g2_ParamLimits

0xc264,	// (0x00056113) cell_toolbar_pane_g2

0x0001,

0xf7b4,	// (0x00059663) cell_toolbar_pane_g_ParamLimits

0xf7b4,	// (0x00059663) cell_toolbar_pane_g

0x279a,	// (0x0004c649) grid_highlight_pane_cp2_ParamLimits

0x279a,	// (0x0004c649) grid_highlight_pane_cp2

0x27b4,	// (0x0004c663) toolbar_button_pane

0x27c0,	// (0x0004c66f) toolbar_button_pane_g1

0x27c8,	// (0x0004c677) toolbar_button_pane_g2

0x27d0,	// (0x0004c67f) toolbar_button_pane_g3

0x27d8,	// (0x0004c687) toolbar_button_pane_g4

0x27e0,	// (0x0004c68f) toolbar_button_pane_g5

0x27e8,	// (0x0004c697) toolbar_button_pane_g6

0x27f0,	// (0x0004c69f) toolbar_button_pane_g7

0x27f8,	// (0x0004c6a7) toolbar_button_pane_g8

0x2800,	// (0x0004c6af) toolbar_button_pane_g9

0x0009,

0xf7b9,	// (0x00059668) toolbar_button_pane_g

0x0c9a,	// (0x0004ab49) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0c9a,	// (0x0004ab49) list_single_2graphic_pane_g1_cp3

0xb3c5,	// (0x00055274) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb3c5,	// (0x00055274) list_single_2graphic_pane_g2_cp3

0xe251,	// (0x00058100) list_single_2graphic_pane_g3_cp3

0x0cb7,	// (0x0004ab66) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0cb7,	// (0x0004ab66) list_single_2graphic_pane_g4_cp3

0xb3d6,	// (0x00055285) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb3d6,	// (0x00055285) list_single_2graphic_pane_t1_cp3

0xc018,	// (0x00055ec7) list_single_midp_graphic_pane_g2_ParamLimits

0xc018,	// (0x00055ec7) list_single_midp_graphic_pane_g2

0xe529,	// (0x000583d8) aid_zoom_text_primary

0x069b,	// (0x0004a54a) aid_zoom_text_secondary

0xa856,	// (0x00054705) status_small_pane_g7_ParamLimits

0xa856,	// (0x00054705) status_small_pane_g7

0xa879,	// (0x00054728) status_small_pane_t1_ParamLimits

0x947d,	// (0x0005332c) title_pane_g2

0x0003,

0xf54e,	// (0x000593fd) title_pane_g

0x9b40,	// (0x000539ef) aid_size_cell_colour_1_pane_ParamLimits

0x9b40,	// (0x000539ef) aid_size_cell_colour_1_pane

0x9b54,	// (0x00053a03) aid_size_cell_colour_2_pane_ParamLimits

0x9b54,	// (0x00053a03) aid_size_cell_colour_2_pane

0x9b68,	// (0x00053a17) aid_size_cell_colour_3_pane_ParamLimits

0x9b68,	// (0x00053a17) aid_size_cell_colour_3_pane

0x9b7c,	// (0x00053a2b) aid_size_cell_colour_4_pane_ParamLimits

0x9b7c,	// (0x00053a2b) aid_size_cell_colour_4_pane

0xf366,	// (0x00059215) title_pane_stacon_g1_ParamLimits

0xf366,	// (0x00059215) title_pane_stacon_g1

0x2e6c,	// (0x0004cd1b) popup_note_wait_window_g3_ParamLimits

0x2e6c,	// (0x0004cd1b) popup_note_wait_window_g3

0x2ee2,	// (0x0004cd91) popup_note_wait_window_t5_ParamLimits

0x2ee2,	// (0x0004cd91) popup_note_wait_window_t5

0x9320,	// (0x000531cf) main_feb_china_hwr_fs_writing_pane

0xaae5,	// (0x00054994) popup_feb_china_hwr_fs_window_ParamLimits

0xaae5,	// (0x00054994) popup_feb_china_hwr_fs_window

0xb3f2,	// (0x000552a1) aid_size_cell_hwr_fs_ParamLimits

0xb3f2,	// (0x000552a1) aid_size_cell_hwr_fs

0x2834,	// (0x0004c6e3) bg_popup_sub_pane_cp3_ParamLimits

0x2834,	// (0x0004c6e3) bg_popup_sub_pane_cp3

0xb407,	// (0x000552b6) grid_hwr_fs_pane_ParamLimits

0xb407,	// (0x000552b6) grid_hwr_fs_pane

0x0d3a,	// (0x0004abe9) linegrid_hwr_fs_pane_ParamLimits

0x0d3a,	// (0x0004abe9) linegrid_hwr_fs_pane

0xb41f,	// (0x000552ce) cell_hwr_fs_pane_ParamLimits

0xb41f,	// (0x000552ce) cell_hwr_fs_pane

0x2840,	// (0x0004c6ef) linegrid_hwr_fs_pane_g1_ParamLimits

0x2840,	// (0x0004c6ef) linegrid_hwr_fs_pane_g1

0xc278,	// (0x00056127) linegrid_hwr_fs_pane_g2_ParamLimits

0xc278,	// (0x00056127) linegrid_hwr_fs_pane_g2

0x285e,	// (0x0004c70d) linegrid_hwr_fs_pane_g3_ParamLimits

0x285e,	// (0x0004c70d) linegrid_hwr_fs_pane_g3

0xb445,	// (0x000552f4) linegrid_hwr_fs_pane_g4_ParamLimits

0xb445,	// (0x000552f4) linegrid_hwr_fs_pane_g4

0x0d86,	// (0x0004ac35) linegrid_hwr_fs_pane_g5_ParamLimits

0x0d86,	// (0x0004ac35) linegrid_hwr_fs_pane_g5

0x0004,

0xf7df,	// (0x0005968e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7df,	// (0x0005968e) linegrid_hwr_fs_pane_g

0x286a,	// (0x0004c719) cell_hwr_fs_pane_g1_ParamLimits

0x286a,	// (0x0004c719) cell_hwr_fs_pane_g1

0x2638,	// (0x0004c4e7) cell_hwr_fs_pane_g2_ParamLimits

0x2638,	// (0x0004c4e7) cell_hwr_fs_pane_g2

0xc28a,	// (0x00056139) cell_hwr_fs_pane_g3_ParamLimits

0xc28a,	// (0x00056139) cell_hwr_fs_pane_g3

0xc297,	// (0x00056146) cell_hwr_fs_pane_g4_ParamLimits

0xc297,	// (0x00056146) cell_hwr_fs_pane_g4

0x0003,

0xf7ea,	// (0x00059699) cell_hwr_fs_pane_g_ParamLimits

0xf7ea,	// (0x00059699) cell_hwr_fs_pane_g

0xb45f,	// (0x0005530e) cell_hwr_fs_pane_t1

0x9320,	// (0x000531cf) grid_highlight_pane_cp6

0x9320,	// (0x000531cf) main_idle_act2_pane

0xa057,	// (0x00053f06) aid_inside_area_popup_secondary

0xc6cc,	// (0x0005657b) aid_inside_area_window_primary_ParamLimits

0xc6cc,	// (0x0005657b) aid_inside_area_window_primary

0xcc00,	// (0x00056aaf) ai2_news_ticker_pane

0x4054,	// (0x0004df03) aid_size_cell_ai1_link_ParamLimits

0x4054,	// (0x0004df03) aid_size_cell_ai1_link

0xcc08,	// (0x00056ab7) popup_ai2_data_window_ParamLimits

0xcc08,	// (0x00056ab7) popup_ai2_data_window

0x4084,	// (0x0004df33) popup_ai2_link_window_ParamLimits

0x4084,	// (0x0004df33) popup_ai2_link_window

0x2834,	// (0x0004c6e3) bg_popup_sub_pane_cp4_ParamLimits

0x2834,	// (0x0004c6e3) bg_popup_sub_pane_cp4

0x4098,	// (0x0004df47) grid_ai2_link_pane_ParamLimits

0x4098,	// (0x0004df47) grid_ai2_link_pane

0x40af,	// (0x0004df5e) popup_ai2_link_window_g1_ParamLimits

0x40af,	// (0x0004df5e) popup_ai2_link_window_g1

0x40bb,	// (0x0004df6a) popup_ai2_link_window_g2_ParamLimits

0x40bb,	// (0x0004df6a) popup_ai2_link_window_g2

0x0001,

0xf9bd,	// (0x0005986c) popup_ai2_link_window_g_ParamLimits

0xf9bd,	// (0x0005986c) popup_ai2_link_window_g

0x40ca,	// (0x0004df79) ai2_mp_button_pane

0x40d2,	// (0x0004df81) ai2_mp_volume_pane

0x2a47,	// (0x0004c8f6) bg_popup_sub_pane_cp5_ParamLimits

0x2a47,	// (0x0004c8f6) bg_popup_sub_pane_cp5

0x40da,	// (0x0004df89) heading_ai2_gene_pane_ParamLimits

0x40da,	// (0x0004df89) heading_ai2_gene_pane

0x40e6,	// (0x0004df95) list_ai2_gene_pane_ParamLimits

0x40e6,	// (0x0004df95) list_ai2_gene_pane

0x412e,	// (0x0004dfdd) cell_ai2_link_pane_ParamLimits

0x412e,	// (0x0004dfdd) cell_ai2_link_pane

0x4144,	// (0x0004dff3) cell_ai2_link_pane_g1

0x9320,	// (0x000531cf) grid_highlight_pane_cp7

0x1130,	// (0x0004afdf) ai2_mp_volume_pane_g1

0x4214,	// (0x0004e0c3) ai2_mp_volume_pane_g2

0x4189,	// (0x0004e038) list_ai2_gene_pane_t1

0x421c,	// (0x0004e0cb) ai2_mp_volume_pane_g3

0x0002,

0xf9d6,	// (0x00059885) ai2_mp_volume_pane_g

0xb5a9,	// (0x00055458) volume_small_pane_cp3

0x4224,	// (0x0004e0d3) aid_size_cell_ai2_button

0x422c,	// (0x0004e0db) grid_ai2_button_pane

0x4235,	// (0x0004e0e4) cell_ai2_button_pane_ParamLimits

0x4235,	// (0x0004e0e4) cell_ai2_button_pane

0x9230,	// (0x000530df) cell_ai2_button_pane_g1

0x9320,	// (0x000531cf) grid_highlight_pane_cp8

0x41d4,	// (0x0004e083) ai2_gene_pane_t1_ParamLimits

0x41d4,	// (0x0004e083) ai2_gene_pane_t1

0xaa47,	// (0x000548f6) aid_height_parent_landscape

0xc91a,	// (0x000567c9) aid_height_set_list

0x3b7b,	// (0x0004da2a) aid_size_parent

0xcb7e,	// (0x00056a2d) aid_size_cell_graphic_pane_ParamLimits

0x40f6,	// (0x0004dfa5) popup_ai2_data_window_g1_ParamLimits

0x40f6,	// (0x0004dfa5) popup_ai2_data_window_g1

0x4102,	// (0x0004dfb1) ai2_news_ticker_pane_g1

0x410a,	// (0x0004dfb9) ai2_news_ticker_pane_g2

0x0001,

0xf9c2,	// (0x00059871) ai2_news_ticker_pane_g

0x4112,	// (0x0004dfc1) ai2_news_ticker_pane_t1

0x4120,	// (0x0004dfcf) ai2_news_ticker_pane_t2

0x0001,

0xf9c7,	// (0x00059876) ai2_news_ticker_pane_t

0x414d,	// (0x0004dffc) heading_ai2_gene_pane_g1

0x4155,	// (0x0004e004) heading_ai2_gene_pane_t1_ParamLimits

0x4155,	// (0x0004e004) heading_ai2_gene_pane_t1

0x416a,	// (0x0004e019) list_highlight_pane_cp6

0x4172,	// (0x0004e021) ai2_gene_pane_ParamLimits

0x4172,	// (0x0004e021) ai2_gene_pane

0x4197,	// (0x0004e046) list_ai2_gene_pane_t2

0x0001,

0xf9cc,	// (0x0005987b) list_ai2_gene_pane_t

0x41a5,	// (0x0004e054) list_highlight_pane_cp8_ParamLimits

0x41a5,	// (0x0004e054) list_highlight_pane_cp8

0x41b6,	// (0x0004e065) ai2_gene_pane_g1_ParamLimits

0x41b6,	// (0x0004e065) ai2_gene_pane_g1

0x41c8,	// (0x0004e077) ai2_gene_pane_g2_ParamLimits

0x41c8,	// (0x0004e077) ai2_gene_pane_g2

0x0001,

0xf9d1,	// (0x00059880) ai2_gene_pane_g_ParamLimits

0xf9d1,	// (0x00059880) ai2_gene_pane_g

0x9e4c,	// (0x00053cfb) scroll_pane_cp12

0xaa04,	// (0x000548b3) control_pane_t3_ParamLimits

0xaa04,	// (0x000548b3) control_pane_t3

0xa86a,	// (0x00054719) status_small_pane_g8_ParamLimits

0xa86a,	// (0x00054719) status_small_pane_g8

0xaba8,	// (0x00054a57) popup_find_window_ParamLimits

0xae5b,	// (0x00054d0a) popup_note_image_window_ParamLimits

0xe11b,	// (0x00057fca) list_double2_graphic_pane_vc_g1_ParamLimits

0xe11b,	// (0x00057fca) list_double2_graphic_pane_vc_g1

0xf2f2,	// (0x000591a1) list_double2_graphic_pane_vc_g2_ParamLimits

0xf2f2,	// (0x000591a1) list_double2_graphic_pane_vc_g2

0xf2fe,	// (0x000591ad) list_double2_graphic_pane_vc_g3_ParamLimits

0xf2fe,	// (0x000591ad) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00059470) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00059470) list_double2_graphic_pane_vc_g

0xe127,	// (0x00057fd6) list_double2_graphic_pane_vc_t1_ParamLimits

0xe127,	// (0x00057fd6) list_double2_graphic_pane_vc_t1

0xf2f2,	// (0x000591a1) list_single_heading_pane_vc_g1_ParamLimits

0xf2f2,	// (0x000591a1) list_single_heading_pane_vc_g1

0xf2fe,	// (0x000591ad) list_single_heading_pane_vc_g2_ParamLimits

0xf2fe,	// (0x000591ad) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059481) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059481) list_single_heading_pane_vc_g

0xe5a3,	// (0x00058452) list_single_heading_pane_vc_t1_ParamLimits

0xe5a3,	// (0x00058452) list_single_heading_pane_vc_t1

0xe5b9,	// (0x00058468) list_single_heading_pane_vc_t2_ParamLimits

0xe5b9,	// (0x00058468) list_single_heading_pane_vc_t2

0x0001,

0xf7ce,	// (0x0005967d) list_single_heading_pane_vc_t_ParamLimits

0xf7ce,	// (0x0005967d) list_single_heading_pane_vc_t

0x0cf5,	// (0x0004aba4) list_setting_number_pane_vc_g1_ParamLimits

0x0cf5,	// (0x0004aba4) list_setting_number_pane_vc_g1

0x0d01,	// (0x0004abb0) list_setting_number_pane_vc_g2_ParamLimits

0x0d01,	// (0x0004abb0) list_setting_number_pane_vc_g2

0x0001,

0xf7d3,	// (0x00059682) list_setting_number_pane_vc_g_ParamLimits

0xf7d3,	// (0x00059682) list_setting_number_pane_vc_g

0xe5cb,	// (0x0005847a) list_setting_number_pane_vc_t1_ParamLimits

0xe5cb,	// (0x0005847a) list_setting_number_pane_vc_t1

0xe5df,	// (0x0005848e) list_setting_number_pane_vc_t2_ParamLimits

0xe5df,	// (0x0005848e) list_setting_number_pane_vc_t2

0xe5fb,	// (0x000584aa) list_setting_number_pane_vc_t3_ParamLimits

0xe5fb,	// (0x000584aa) list_setting_number_pane_vc_t3

0x0002,

0xf7d8,	// (0x00059687) list_setting_number_pane_vc_t_ParamLimits

0xf7d8,	// (0x00059687) list_setting_number_pane_vc_t

0xe625,	// (0x000584d4) set_value_pane_vc_ParamLimits

0xe625,	// (0x000584d4) set_value_pane_vc

0x3d2f,	// (0x0004dbde) list_double2_graphic_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_double2_graphic_pane_vc

0x3d2f,	// (0x0004dbde) list_double2_large_graphic_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_double2_large_graphic_pane_vc

0x3d2f,	// (0x0004dbde) list_double2_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_double2_pane_vc

0x3d2f,	// (0x0004dbde) list_double_graphic_heading_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_double_graphic_heading_pane_vc

0x3d2f,	// (0x0004dbde) list_double_graphic_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_double_graphic_pane_vc

0x3d2f,	// (0x0004dbde) list_double_heading_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_double_heading_pane_vc

0x3d41,	// (0x0004dbf0) list_double_large_graphic_pane_vc_ParamLimits

0x3d41,	// (0x0004dbf0) list_double_large_graphic_pane_vc

0x3d2f,	// (0x0004dbde) list_double_number_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_double_number_pane_vc

0x3d2f,	// (0x0004dbde) list_double_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_double_pane_vc

0x3d2f,	// (0x0004dbde) list_double_time_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_double_time_pane_vc

0x3d2f,	// (0x0004dbde) list_setting_number_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_setting_number_pane_vc

0x3d2f,	// (0x0004dbde) list_setting_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_setting_pane_vc

0x3d2f,	// (0x0004dbde) list_single_graphic_heading_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_single_graphic_heading_pane_vc

0x3d2f,	// (0x0004dbde) list_single_heading_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_single_heading_pane_vc

0x3d2f,	// (0x0004dbde) list_single_number_heading_pane_vc_ParamLimits

0x3d2f,	// (0x0004dbde) list_single_number_heading_pane_vc

0xe644,	// (0x000584f3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe644,	// (0x000584f3) list_double_graphic_heading_pane_vc_g1

0xf2f2,	// (0x000591a1) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf2f2,	// (0x000591a1) list_double_graphic_heading_pane_vc_g2

0xf2fe,	// (0x000591ad) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xf2fe,	// (0x000591ad) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9dd,	// (0x0005988c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9dd,	// (0x0005988c) list_double_graphic_heading_pane_vc_g

0xe650,	// (0x000584ff) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe650,	// (0x000584ff) list_double_graphic_heading_pane_vc_t1

0xe664,	// (0x00058513) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe664,	// (0x00058513) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e4,	// (0x00059893) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e4,	// (0x00059893) list_double_graphic_heading_pane_vc_t

0x0cf5,	// (0x0004aba4) list_setting_pane_vc_g1_ParamLimits

0x0cf5,	// (0x0004aba4) list_setting_pane_vc_g1

0x0d01,	// (0x0004abb0) list_setting_pane_vc_g2_ParamLimits

0x0d01,	// (0x0004abb0) list_setting_pane_vc_g2

0x0001,

0xf7d3,	// (0x00059682) list_setting_pane_vc_g_ParamLimits

0xf7d3,	// (0x00059682) list_setting_pane_vc_g

0xe67c,	// (0x0005852b) list_setting_pane_vc_t1_ParamLimits

0xe67c,	// (0x0005852b) list_setting_pane_vc_t1

0xe698,	// (0x00058547) list_setting_pane_vc_t2_ParamLimits

0xe698,	// (0x00058547) list_setting_pane_vc_t2

0x0001,

0xfa27,	// (0x000598d6) list_setting_pane_vc_t_ParamLimits

0xfa27,	// (0x000598d6) list_setting_pane_vc_t

0xe625,	// (0x000584d4) set_value_pane_cp_vc_ParamLimits

0xe625,	// (0x000584d4) set_value_pane_cp_vc

0xf2f2,	// (0x000591a1) list_single_number_heading_pane_vc_g1_ParamLimits

0xf2f2,	// (0x000591a1) list_single_number_heading_pane_vc_g1

0xf2fe,	// (0x000591ad) list_single_number_heading_pane_vc_g2_ParamLimits

0xf2fe,	// (0x000591ad) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059481) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059481) list_single_number_heading_pane_vc_g

0xe6b2,	// (0x00058561) list_single_number_heading_pane_vc_t1_ParamLimits

0xe6b2,	// (0x00058561) list_single_number_heading_pane_vc_t1

0xe6c8,	// (0x00058577) list_single_number_heading_pane_vc_t2_ParamLimits

0xe6c8,	// (0x00058577) list_single_number_heading_pane_vc_t2

0xe6da,	// (0x00058589) list_single_number_heading_pane_vc_t3_ParamLimits

0xe6da,	// (0x00058589) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2c,	// (0x000598db) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x000598db) list_single_number_heading_pane_vc_t

0xef3e,	// (0x00058ded) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xef3e,	// (0x00058ded) list_single_graphic_heading_pane_vc_g1

0xf2f2,	// (0x000591a1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xf2f2,	// (0x000591a1) list_single_graphic_heading_pane_vc_g4

0xf2fe,	// (0x000591ad) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xf2fe,	// (0x000591ad) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa33,	// (0x000598e2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa33,	// (0x000598e2) list_single_graphic_heading_pane_vc_g

0xe5a3,	// (0x00058452) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe5a3,	// (0x00058452) list_single_graphic_heading_pane_vc_t1

0xef4a,	// (0x00058df9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xef4a,	// (0x00058df9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3a,	// (0x000598e9) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3a,	// (0x000598e9) list_single_graphic_heading_pane_vc_t

0xf2f2,	// (0x000591a1) list_double2_pane_vc_g1_ParamLimits

0xf2f2,	// (0x000591a1) list_double2_pane_vc_g1

0xf2fe,	// (0x000591ad) list_double2_pane_vc_g2_ParamLimits

0xf2fe,	// (0x000591ad) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059481) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059481) list_double2_pane_vc_g

0xef5c,	// (0x00058e0b) list_double2_pane_vc_t1_ParamLimits

0xef5c,	// (0x00058e0b) list_double2_pane_vc_t1

0x1192,	// (0x0004b041) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1192,	// (0x0004b041) list_double2_large_graphic_pane_vc_g1

0xf2f2,	// (0x000591a1) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf2f2,	// (0x000591a1) list_double2_large_graphic_pane_vc_g2

0xf2fe,	// (0x000591ad) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf2fe,	// (0x000591ad) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00059499) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00059499) list_double2_large_graphic_pane_vc_g

0xe127,	// (0x00057fd6) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe127,	// (0x00057fd6) list_double2_large_graphic_pane_vc_t1

0x119e,	// (0x0004b04d) list_double_time_pane_vc_g1_ParamLimits

0x119e,	// (0x0004b04d) list_double_time_pane_vc_g1

0x11aa,	// (0x0004b059) list_double_time_pane_vc_g2_ParamLimits

0x11aa,	// (0x0004b059) list_double_time_pane_vc_g2

0x0001,

0xfa3f,	// (0x000598ee) list_double_time_pane_vc_g_ParamLimits

0xfa3f,	// (0x000598ee) list_double_time_pane_vc_g

0xef74,	// (0x00058e23) list_double_time_pane_vc_t1_ParamLimits

0xef74,	// (0x00058e23) list_double_time_pane_vc_t1

0xef98,	// (0x00058e47) list_double_time_pane_vc_t2_ParamLimits

0xef98,	// (0x00058e47) list_double_time_pane_vc_t2

0xefe7,	// (0x00058e96) list_double_time_pane_vc_t3_ParamLimits

0xefe7,	// (0x00058e96) list_double_time_pane_vc_t3

0xeff9,	// (0x00058ea8) list_double_time_pane_vc_t4_ParamLimits

0xeff9,	// (0x00058ea8) list_double_time_pane_vc_t4

0x0003,

0xfa44,	// (0x000598f3) list_double_time_pane_vc_t_ParamLimits

0xfa44,	// (0x000598f3) list_double_time_pane_vc_t

0xf2f2,	// (0x000591a1) list_double_pane_vc_g1_ParamLimits

0xf2f2,	// (0x000591a1) list_double_pane_vc_g1

0xf2fe,	// (0x000591ad) list_double_pane_vc_g2_ParamLimits

0xf2fe,	// (0x000591ad) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059481) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059481) list_double_pane_vc_g

0xf00d,	// (0x00058ebc) list_double_pane_vc_t1_ParamLimits

0xf00d,	// (0x00058ebc) list_double_pane_vc_t1

0xf021,	// (0x00058ed0) list_double_pane_vc_t2_ParamLimits

0xf021,	// (0x00058ed0) list_double_pane_vc_t2

0x0001,

0xfa4d,	// (0x000598fc) list_double_pane_vc_t_ParamLimits

0xfa4d,	// (0x000598fc) list_double_pane_vc_t

0xf2f2,	// (0x000591a1) list_double_number_pane_vc_g1_ParamLimits

0xf2f2,	// (0x000591a1) list_double_number_pane_vc_g1

0xf2fe,	// (0x000591ad) list_double_number_pane_vc_g2_ParamLimits

0xf2fe,	// (0x000591ad) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059481) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059481) list_double_number_pane_vc_g

0xf039,	// (0x00058ee8) list_double_number_pane_vc_t1_ParamLimits

0xf039,	// (0x00058ee8) list_double_number_pane_vc_t1

0xf00d,	// (0x00058ebc) list_double_number_pane_vc_t2_ParamLimits

0xf00d,	// (0x00058ebc) list_double_number_pane_vc_t2

0xf04b,	// (0x00058efa) list_double_number_pane_vc_t3_ParamLimits

0xf04b,	// (0x00058efa) list_double_number_pane_vc_t3

0x0002,

0xfa52,	// (0x00059901) list_double_number_pane_vc_t_ParamLimits

0xfa52,	// (0x00059901) list_double_number_pane_vc_t

0x11b6,	// (0x0004b065) list_double_large_graphic_pane_vc_g1_ParamLimits

0x11b6,	// (0x0004b065) list_double_large_graphic_pane_vc_g1

0x11d8,	// (0x0004b087) list_double_large_graphic_pane_vc_g2_ParamLimits

0x11d8,	// (0x0004b087) list_double_large_graphic_pane_vc_g2

0x11ec,	// (0x0004b09b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x11ec,	// (0x0004b09b) list_double_large_graphic_pane_vc_g3

0xf063,	// (0x00058f12) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf063,	// (0x00058f12) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa59,	// (0x00059908) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa59,	// (0x00059908) list_double_large_graphic_pane_vc_g

0xf06f,	// (0x00058f1e) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf06f,	// (0x00058f1e) list_double_large_graphic_pane_vc_t1

0xf08b,	// (0x00058f3a) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf08b,	// (0x00058f3a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa62,	// (0x00059911) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa62,	// (0x00059911) list_double_large_graphic_pane_vc_t

0xf2f2,	// (0x000591a1) list_double_heading_pane_vc_g1_ParamLimits

0xf2f2,	// (0x000591a1) list_double_heading_pane_vc_g1

0xf2fe,	// (0x000591ad) list_double_heading_pane_vc_g2_ParamLimits

0xf2fe,	// (0x000591ad) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00059481) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00059481) list_double_heading_pane_vc_g

0xf0ad,	// (0x00058f5c) list_double_heading_pane_vc_t1_ParamLimits

0xf0ad,	// (0x00058f5c) list_double_heading_pane_vc_t1

0xf0c1,	// (0x00058f70) list_double_heading_pane_vc_t2_ParamLimits

0xf0c1,	// (0x00058f70) list_double_heading_pane_vc_t2

0x0001,

0xfa67,	// (0x00059916) list_double_heading_pane_vc_t_ParamLimits

0xfa67,	// (0x00059916) list_double_heading_pane_vc_t

0xf0d9,	// (0x00058f88) list_double_graphic_pane_vc_g1_ParamLimits

0xf0d9,	// (0x00058f88) list_double_graphic_pane_vc_g1

0x11fb,	// (0x0004b0aa) list_double_graphic_pane_vc_g2_ParamLimits

0x11fb,	// (0x0004b0aa) list_double_graphic_pane_vc_g2

0xf2f2,	// (0x000591a1) list_double_graphic_pane_vc_g3_ParamLimits

0xf2f2,	// (0x000591a1) list_double_graphic_pane_vc_g3

0x0003,

0xfa6c,	// (0x0005991b) list_double_graphic_pane_vc_g_ParamLimits

0xfa6c,	// (0x0005991b) list_double_graphic_pane_vc_g

0xf0ec,	// (0x00058f9b) list_double_graphic_pane_vc_t1_ParamLimits

0xf0ec,	// (0x00058f9b) list_double_graphic_pane_vc_t1

0xf10b,	// (0x00058fba) list_double_graphic_pane_vc_t2_ParamLimits

0xf10b,	// (0x00058fba) list_double_graphic_pane_vc_t2

0x0001,

0xfa75,	// (0x00059924) list_double_graphic_pane_vc_t_ParamLimits

0xfa75,	// (0x00059924) list_double_graphic_pane_vc_t

0xedc7,	// (0x00058c76) aid_size_cell_fastswap

0x923a,	// (0x000530e9) aid_size_cell_touch_ParamLimits

0x923a,	// (0x000530e9) aid_size_cell_touch

0xef1e,	// (0x00058dcd) popup_fast_swap_wide_window_ParamLimits

0xef1e,	// (0x00058dcd) popup_fast_swap_wide_window

0x9414,	// (0x000532c3) touch_pane_ParamLimits

0x9414,	// (0x000532c3) touch_pane

0x9efd,	// (0x00053dac) button_value_adjust_pane_cp2

0xe157,	// (0x00058006) button_value_adjust_pane_cp4

0xe15f,	// (0x0005800e) form_field_data_pane_cp2

0x8e18,	// (0x00052cc7) form_field_data_wide_pane_cp2

0xa390,	// (0x0005423f) bg_scroll_pane_ParamLimits

0xa3af,	// (0x0005425e) scroll_handle_pane_ParamLimits

0xf4bf,	// (0x0005936e) scroll_sc2_down_pane_ParamLimits

0xf4bf,	// (0x0005936e) scroll_sc2_down_pane

0xa3d5,	// (0x00054284) scroll_sc2_up_pane_ParamLimits

0xa3d5,	// (0x00054284) scroll_sc2_up_pane

0xcd4f,	// (0x00056bfe) grid_wheel_folder_pane_g1_ParamLimits

0xcd4f,	// (0x00056bfe) grid_wheel_folder_pane_g1

0x01de,	// (0x0004a08d) clock_nsta_pane_cp2_ParamLimits

0x01de,	// (0x0004a08d) clock_nsta_pane_cp2

0xa730,	// (0x000545df) listscroll_midp_pane_ParamLimits

0xa73c,	// (0x000545eb) midp_canvas_pane

0x2271,	// (0x0004c120) nsta_clock_indic_pane

0x22a5,	// (0x0004c154) listscroll_form_pane_vc

0x22ad,	// (0x0004c15c) listscroll_set_pane_vc_ParamLimits

0x22ad,	// (0x0004c15c) listscroll_set_pane_vc

0xb310,	// (0x000551bf) clock_nsta_pane

0xb33a,	// (0x000551e9) indicator_nsta_pane

0x26fe,	// (0x0004c5ad) bg_popup_sub_pane_cp2_ParamLimits

0x2712,	// (0x0004c5c1) find_pane_cp2_ParamLimits

0x2712,	// (0x0004c5c1) find_pane_cp2

0x2728,	// (0x0004c5d7) grid_toobar_pane_ParamLimits

0x2808,	// (0x0004c6b7) list_form_gen_pane_vc_ParamLimits

0x2808,	// (0x0004c6b7) list_form_gen_pane_vc

0x281e,	// (0x0004c6cd) scroll_pane_cp8_vc_ParamLimits

0x281e,	// (0x0004c6cd) scroll_pane_cp8_vc

0x289a,	// (0x0004c749) data_form_wide_pane_vc_ParamLimits

0x289a,	// (0x0004c749) data_form_wide_pane_vc

0x28a6,	// (0x0004c755) form_field_data_wide_pane_vc_g1

0x28ae,	// (0x0004c75d) form_field_data_wide_pane_vc_t1_ParamLimits

0x28ae,	// (0x0004c75d) form_field_data_wide_pane_vc_t1

0x9f11,	// (0x00053dc0) input_focus_pane_cp6_vc_ParamLimits

0x9f11,	// (0x00053dc0) input_focus_pane_cp6_vc

0x2bfb,	// (0x0004caaa) list_midp_pane_ParamLimits

0x3ed9,	// (0x0004dd88) scroll_pane_cp16_ParamLimits

0x3ed9,	// (0x0004dd88) scroll_pane_cp16

0x2c49,	// (0x0004caf8) button_value_adjust_pane_ParamLimits

0x2c49,	// (0x0004caf8) button_value_adjust_pane

0xc92b,	// (0x000567da) button_value_adjust_pane_cp6_ParamLimits

0xc92b,	// (0x000567da) button_value_adjust_pane_cp6

0xca45,	// (0x000568f4) settings_code_pane_cp_ParamLimits

0xca45,	// (0x000568f4) settings_code_pane_cp

0x9230,	// (0x000530df) cell_touch_pane_g1

0x9230,	// (0x000530df) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x000595a8) cell_touch_pane_g

0xcc1e,	// (0x00056acd) cell_touch_pane_cp_ParamLimits

0xcc1e,	// (0x00056acd) cell_touch_pane_cp

0xcc3a,	// (0x00056ae9) cell_touch_pane_ParamLimits

0xcc3a,	// (0x00056ae9) cell_touch_pane

0x9230,	// (0x000530df) scroll_sc2_down_pane_g1

0x9230,	// (0x000530df) scroll_sc2_up_pane_g1

0x9320,	// (0x000531cf) bg_set_opt_pane_cp4_vc

0x4269,	// (0x0004e118) list_set_graphic_pane_vc_g1_ParamLimits

0x4269,	// (0x0004e118) list_set_graphic_pane_vc_g1

0x4275,	// (0x0004e124) list_set_graphic_pane_vc_g2_ParamLimits

0x4275,	// (0x0004e124) list_set_graphic_pane_vc_g2

0x0001,

0xf9e9,	// (0x00059898) list_set_graphic_pane_vc_g_ParamLimits

0xf9e9,	// (0x00059898) list_set_graphic_pane_vc_g

0x4281,	// (0x0004e130) text_primary_small_cp13_vc_ParamLimits

0x4281,	// (0x0004e130) text_primary_small_cp13_vc

0x4299,	// (0x0004e148) list_set_graphic_pane_vc_ParamLimits

0x4299,	// (0x0004e148) list_set_graphic_pane_vc

0x9320,	// (0x000531cf) input_focus_pane_cp2_vc

0x9230,	// (0x000530df) setting_code_pane_vc_g1

0x965b,	// (0x0005350a) setting_code_pane_vc_t1

0x42ac,	// (0x0004e15b) set_text_pane_vc_t1_ParamLimits

0x42ac,	// (0x0004e15b) set_text_pane_vc_t1

0x9320,	// (0x000531cf) input_focus_pane_cp1_vc

0x42c8,	// (0x0004e177) list_set_text_pane_vc

0x9230,	// (0x000530df) setting_text_pane_vc_g1

0x9320,	// (0x000531cf) bg_set_opt_pane_cp2_vc

0x962a,	// (0x000534d9) setting_slider_graphic_pane_vc_g1

0x42d2,	// (0x0004e181) setting_slider_graphic_pane_vc_t1

0x42e2,	// (0x0004e191) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ee,	// (0x0005989d) setting_slider_graphic_pane_vc_t

0x42f2,	// (0x0004e1a1) slider_set_pane_cp_vc

0x42fa,	// (0x0004e1a9) slider_set_pane_vc_g1

0x4303,	// (0x0004e1b2) slider_set_pane_vc_g2

0x0006,

0xf9f3,	// (0x000598a2) slider_set_pane_vc_g

0x9f5d,	// (0x00053e0c) set_opt_bg_pane_g1_copy1

0x9f65,	// (0x00053e14) set_opt_bg_pane_g2_copy1

0x432f,	// (0x0004e1de) set_opt_bg_pane_g3_copy1

0x9f75,	// (0x00053e24) set_opt_bg_pane_g4_copy1

0x9f7d,	// (0x00053e2c) set_opt_bg_pane_g5_copy1

0x9f85,	// (0x00053e34) set_opt_bg_pane_g6_copy1

0x4337,	// (0x0004e1e6) set_opt_bg_pane_g7_copy1

0x433f,	// (0x0004e1ee) set_opt_bg_pane_g8_copy1

0x4347,	// (0x0004e1f6) set_opt_bg_pane_g9_copy1

0x9320,	// (0x000531cf) bg_set_opt_pane_cp_vc

0x434f,	// (0x0004e1fe) setting_slider_pane_vc_t1

0x435e,	// (0x0004e20d) setting_slider_pane_vc_t2

0x436e,	// (0x0004e21d) setting_slider_pane_vc_t3

0x0002,

0xfa02,	// (0x000598b1) setting_slider_pane_vc_t

0x437e,	// (0x0004e22d) slider_set_pane_vc

0x0daa,	// (0x0004ac59) volume_set_pane_vc_g1

0x1141,	// (0x0004aff0) volume_set_pane_vc_g2

0x114a,	// (0x0004aff9) volume_set_pane_vc_g3

0x1153,	// (0x0004b002) volume_set_pane_vc_g4

0x115c,	// (0x0004b00b) volume_set_pane_vc_g5

0x1165,	// (0x0004b014) volume_set_pane_vc_g6

0x116e,	// (0x0004b01d) volume_set_pane_vc_g7

0x1177,	// (0x0004b026) volume_set_pane_vc_g8

0x1180,	// (0x0004b02f) volume_set_pane_vc_g9

0x1189,	// (0x0004b038) volume_set_pane_vc_g10

0x0009,

0xfa09,	// (0x000598b8) volume_set_pane_vc_g

0x4386,	// (0x0004e235) volume_set_pane_vc

0x438e,	// (0x0004e23d) button_value_adjust_pane_cp1_vc

0x4398,	// (0x0004e247) list_highlight_pane_cp2_vc

0x43a1,	// (0x0004e250) list_set_pane_vc_ParamLimits

0x43a1,	// (0x0004e250) list_set_pane_vc

0x43ff,	// (0x0004e2ae) main_pane_set_vc_t1_ParamLimits

0x43ff,	// (0x0004e2ae) main_pane_set_vc_t1

0x4414,	// (0x0004e2c3) main_pane_set_vc_t2_ParamLimits

0x4414,	// (0x0004e2c3) main_pane_set_vc_t2

0x4426,	// (0x0004e2d5) main_pane_set_vc_t3_ParamLimits

0x4426,	// (0x0004e2d5) main_pane_set_vc_t3

0x4438,	// (0x0004e2e7) main_pane_set_vc_t4_ParamLimits

0x4438,	// (0x0004e2e7) main_pane_set_vc_t4

0x0003,

0xfa1e,	// (0x000598cd) main_pane_set_vc_t_ParamLimits

0xfa1e,	// (0x000598cd) main_pane_set_vc_t

0x444a,	// (0x0004e2f9) setting_code_pane_vc_ParamLimits

0x444a,	// (0x0004e2f9) setting_code_pane_vc

0x4459,	// (0x0004e308) setting_slider_graphic_pane_vc

0x4459,	// (0x0004e308) setting_slider_pane_vc

0x4459,	// (0x0004e308) setting_text_pane_vc

0x4459,	// (0x0004e308) setting_volume_pane_vc

0x4461,	// (0x0004e310) scroll_pane_cp121_vc

0x9eeb,	// (0x00053d9a) set_content_pane_vc

0x4469,	// (0x0004e318) button_value_adjust_pane_g1

0x4472,	// (0x0004e321) button_value_adjust_pane_g2

0x0001,

0xfa7a,	// (0x00059929) button_value_adjust_pane_g

0x447b,	// (0x0004e32a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x447b,	// (0x0004e32a) form_field_slider_wide_pane_vc_t1

0x448f,	// (0x0004e33e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x448f,	// (0x0004e33e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7f,	// (0x0005992e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0005992e) form_field_slider_wide_pane_vc_t

0x9571,	// (0x00053420) input_focus_pane_cp10_vc_ParamLimits

0x9571,	// (0x00053420) input_focus_pane_cp10_vc

0x44bd,	// (0x0004e36c) slider_cont_pane_cp1_vc_ParamLimits

0x44bd,	// (0x0004e36c) slider_cont_pane_cp1_vc

0x44cf,	// (0x0004e37e) slider_form_pane_g1_cp2

0x4303,	// (0x0004e1b2) slider_form_pane_g2_cp2

0x44fc,	// (0x0004e3ab) form_field_slider_pane_vc_t3

0x450a,	// (0x0004e3b9) form_field_slider_pane_vc_t4

0x4518,	// (0x0004e3c7) slider_form_pane_vc_ParamLimits

0x4518,	// (0x0004e3c7) slider_form_pane_vc

0x4525,	// (0x0004e3d4) form_field_slider_pane_vc_t1_ParamLimits

0x4525,	// (0x0004e3d4) form_field_slider_pane_vc_t1

0x448f,	// (0x0004e33e) form_field_slider_pane_vc_t2_ParamLimits

0x448f,	// (0x0004e33e) form_field_slider_pane_vc_t2

0x0001,

0xfa91,	// (0x00059940) form_field_slider_pane_vc_t_ParamLimits

0xfa91,	// (0x00059940) form_field_slider_pane_vc_t

0x9571,	// (0x00053420) input_focus_pane_cp9_vc_ParamLimits

0x9571,	// (0x00053420) input_focus_pane_cp9_vc

0x4541,	// (0x0004e3f0) slider_cont_pane_vc_ParamLimits

0x4541,	// (0x0004e3f0) slider_cont_pane_vc

0x4555,	// (0x0004e404) list_form_graphic_pane_cp_vc_ParamLimits

0x4555,	// (0x0004e404) list_form_graphic_pane_cp_vc

0x28a6,	// (0x0004c755) form_field_popup_wide_pane_vc_g1

0x456a,	// (0x0004e419) form_field_popup_wide_pane_vc_t1_ParamLimits

0x456a,	// (0x0004e419) form_field_popup_wide_pane_vc_t1

0x9f11,	// (0x00053dc0) input_focus_pane_cp8_vc_ParamLimits

0x9f11,	// (0x00053dc0) input_focus_pane_cp8_vc

0x45af,	// (0x0004e45e) list_form_wide_pane_vc_ParamLimits

0x45af,	// (0x0004e45e) list_form_wide_pane_vc

0x45bb,	// (0x0004e46a) list_form_graphic_pane_vc_g1

0x45c3,	// (0x0004e472) list_form_graphic_pane_vc_t1_ParamLimits

0x45c3,	// (0x0004e472) list_form_graphic_pane_vc_t1

0x95bb,	// (0x0005346a) list_highlight_pane_cp5_vc_ParamLimits

0x95bb,	// (0x0005346a) list_highlight_pane_cp5_vc

0x45df,	// (0x0004e48e) list_form_graphic_pane_vc_ParamLimits

0x45df,	// (0x0004e48e) list_form_graphic_pane_vc

0x28a6,	// (0x0004c755) form_field_popup_pane_vc_g1

0x45f5,	// (0x0004e4a4) form_field_popup_pane_vc_t1_ParamLimits

0x45f5,	// (0x0004e4a4) form_field_popup_pane_vc_t1

0x9f11,	// (0x00053dc0) input_focus_pane_cp7_vc_ParamLimits

0x9f11,	// (0x00053dc0) input_focus_pane_cp7_vc

0x460c,	// (0x0004e4bb) list_form_pane_vc_ParamLimits

0x460c,	// (0x0004e4bb) list_form_pane_vc

0x4618,	// (0x0004e4c7) data_form_pane_vc_t1_ParamLimits

0x4618,	// (0x0004e4c7) data_form_pane_vc_t1

0x9f5d,	// (0x00053e0c) input_focus_pane_vc_g1

0x9f65,	// (0x00053e14) input_focus_pane_vc_g2

0x9f6d,	// (0x00053e1c) input_focus_pane_vc_g3

0x9f75,	// (0x00053e24) input_focus_pane_vc_g4

0x9f7d,	// (0x00053e2c) input_focus_pane_vc_g5

0x9f85,	// (0x00053e34) input_focus_pane_vc_g6

0x9f8d,	// (0x00053e3c) input_focus_pane_vc_g7

0x9f95,	// (0x00053e44) input_focus_pane_vc_g8

0x9f9d,	// (0x00053e4c) input_focus_pane_vc_g9

0x9230,	// (0x000530df) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x00059531) input_focus_pane_vc_g

0x289a,	// (0x0004c749) data_form_pane_vc_ParamLimits

0x289a,	// (0x0004c749) data_form_pane_vc

0x28a6,	// (0x0004c755) form_field_data_pane_vc_g1

0x4633,	// (0x0004e4e2) form_field_data_pane_vc_t1_ParamLimits

0x4633,	// (0x0004e4e2) form_field_data_pane_vc_t1

0x9f11,	// (0x00053dc0) input_focus_pane_vc_ParamLimits

0x9f11,	// (0x00053dc0) input_focus_pane_vc

0x464d,	// (0x0004e4fc) button_value_adjust_pane_cp3_vc

0x4655,	// (0x0004e504) button_value_adjust_pane_cp5_vc

0x465d,	// (0x0004e50c) form_field_data_pane_vc_ParamLimits

0x465d,	// (0x0004e50c) form_field_data_pane_vc

0x4674,	// (0x0004e523) form_field_data_pane_vc_cp2

0x467c,	// (0x0004e52b) form_field_data_wide_pane_vc_ParamLimits

0x467c,	// (0x0004e52b) form_field_data_wide_pane_vc

0x4692,	// (0x0004e541) form_field_data_wide_pane_vc_cp2

0x469a,	// (0x0004e549) form_field_popup_pane_vc_ParamLimits

0x469a,	// (0x0004e549) form_field_popup_pane_vc

0x46b1,	// (0x0004e560) form_field_popup_wide_pane_vc_ParamLimits

0x46b1,	// (0x0004e560) form_field_popup_wide_pane_vc

0x46c7,	// (0x0004e576) form_field_slider_pane_vc_ParamLimits

0x46c7,	// (0x0004e576) form_field_slider_pane_vc

0x46da,	// (0x0004e589) form_field_slider_wide_pane_vc_ParamLimits

0x46da,	// (0x0004e589) form_field_slider_wide_pane_vc

0xcc57,	// (0x00056b06) grid_touch_1_pane_ParamLimits

0xcc57,	// (0x00056b06) grid_touch_1_pane

0xcc6b,	// (0x00056b1a) grid_touch_2_pane_ParamLimits

0xcc6b,	// (0x00056b1a) grid_touch_2_pane

0x47a8,	// (0x0004e657) touch_pane_g1_ParamLimits

0x47a8,	// (0x0004e657) touch_pane_g1

0x4711,	// (0x0004e5c0) cell_app_pane_cp_wide_ParamLimits

0x4711,	// (0x0004e5c0) cell_app_pane_cp_wide

0x4722,	// (0x0004e5d1) grid_popup_fast_wide_pane_ParamLimits

0x4722,	// (0x0004e5d1) grid_popup_fast_wide_pane

0x4736,	// (0x0004e5e5) scroll_pane_cp19_ParamLimits

0x4736,	// (0x0004e5e5) scroll_pane_cp19

0x9320,	// (0x000531cf) bg_popup_window_pane_cp20

0x474a,	// (0x0004e5f9) listscroll_popup_fast_wide_pane

0xcc95,	// (0x00056b44) grid_indicator_nsta_pane

0x4752,	// (0x0004e601) clock_nsta_pane_g1

0x475b,	// (0x0004e60a) clock_nsta_pane_t1

0xcca3,	// (0x00056b52) cell_indicator_nsta_pane_ParamLimits

0xcca3,	// (0x00056b52) cell_indicator_nsta_pane

0x47a8,	// (0x0004e657) cell_indicator_nsta_pane_g1

0xccba,	// (0x00056b69) cell_indicator_nsta_pane_g2

0x0001,

0xfaa2,	// (0x00059951) cell_indicator_nsta_pane_g

0x47c3,	// (0x0004e672) clock_nsta_pane_cp

0x47cc,	// (0x0004e67b) indicator_nsta_pane_cp

0x47d4,	// (0x0004e683) nsta_clock_indic_pane_g1

0x973d,	// (0x000535ec) grid_indicator_pane

0xa4c7,	// (0x00054376) scroll_pane_cp29

0x012d,	// (0x00049fdc) indicator_nsta_pane_cp2_ParamLimits

0x012d,	// (0x00049fdc) indicator_nsta_pane_cp2

0x95bb,	// (0x0005346a) main_apps_wheel_pane

0xc361,	// (0x00056210) form_midp_field_text_pane_ParamLimits

0x2c07,	// (0x0004cab6) scroll_bar_cp050_ParamLimits

0x4824,	// (0x0004e6d3) cell_indicator_pane_ParamLimits

0x4824,	// (0x0004e6d3) cell_indicator_pane

0x483d,	// (0x0004e6ec) cell_indicator_pane_g1

0xccd9,	// (0x00056b88) grid_wheel_folder_pane_ParamLimits

0xccd9,	// (0x00056b88) grid_wheel_folder_pane

0xcce7,	// (0x00056b96) list_wheel_apps_pane_ParamLimits

0xcce7,	// (0x00056b96) list_wheel_apps_pane

0xccf5,	// (0x00056ba4) main_apps_wheel_pane_g1_ParamLimits

0xccf5,	// (0x00056ba4) main_apps_wheel_pane_g1

0xcd01,	// (0x00056bb0) main_apps_wheel_pane_g2_ParamLimits

0xcd01,	// (0x00056bb0) main_apps_wheel_pane_g2

0x0001,

0xfabe,	// (0x0005996d) main_apps_wheel_pane_g_ParamLimits

0xfabe,	// (0x0005996d) main_apps_wheel_pane_g

0xcd0f,	// (0x00056bbe) main_apps_wheel_pane_t1_ParamLimits

0xcd0f,	// (0x00056bbe) main_apps_wheel_pane_t1

0xcd23,	// (0x00056bd2) list_wheel_apps_pane_g1

0xcd2b,	// (0x00056bda) list_wheel_apps_pane_g2

0xcd33,	// (0x00056be2) list_wheel_apps_pane_g3

0xcd3b,	// (0x00056bea) list_wheel_apps_pane_g4

0xcd45,	// (0x00056bf4) list_wheel_apps_pane_g5

0x0004,

0xfac3,	// (0x00059972) list_wheel_apps_pane_g

0xe2a1,	// (0x00058150) navi_icon_text_pane

0xb204,	// (0x000550b3) aid_fill_nsta

0x4904,	// (0x0004e7b3) navi_icon_text_pane_g1

0x4910,	// (0x0004e7bf) navi_icon_text_pane_t1

0xbfc1,	// (0x00055e70) list_set_graphic_pane_t1_ParamLimits

0xbfc1,	// (0x00055e70) list_set_graphic_pane_t1

0x334a,	// (0x0004d1f9) popup_midp_note_alarm_window_t6_ParamLimits

0x334a,	// (0x0004d1f9) popup_midp_note_alarm_window_t6

0x335c,	// (0x0004d20b) popup_midp_note_alarm_window_t7_ParamLimits

0x335c,	// (0x0004d20b) popup_midp_note_alarm_window_t7

0x336e,	// (0x0004d21d) popup_midp_note_alarm_window_t8_ParamLimits

0x336e,	// (0x0004d21d) popup_midp_note_alarm_window_t8

0x3380,	// (0x0004d22f) popup_midp_note_alarm_window_t9_ParamLimits

0x3380,	// (0x0004d22f) popup_midp_note_alarm_window_t9

0x3392,	// (0x0004d241) popup_midp_note_alarm_window_t10_ParamLimits

0x3392,	// (0x0004d241) popup_midp_note_alarm_window_t10

0x33a4,	// (0x0004d253) popup_midp_note_alarm_window_t11_ParamLimits

0x33a4,	// (0x0004d253) popup_midp_note_alarm_window_t11

0xc6ad,	// (0x0005655c) scroll_pane_cp17_ParamLimits

0xc6ad,	// (0x0005655c) scroll_pane_cp17

0x0daa,	// (0x0004ac59) volume_small_pane_cp_g1

0x1218,	// (0x0004b0c7) volume_small_pane_cp_g2

0x1221,	// (0x0004b0d0) volume_small_pane_cp_g3

0x122a,	// (0x0004b0d9) volume_small_pane_cp_g4

0x1233,	// (0x0004b0e2) volume_small_pane_cp_g5

0x115c,	// (0x0004b00b) volume_small_pane_cp_g6

0x123c,	// (0x0004b0eb) volume_small_pane_cp_g7

0x1245,	// (0x0004b0f4) volume_small_pane_cp_g8

0x124e,	// (0x0004b0fd) volume_small_pane_cp_g9

0x1257,	// (0x0004b106) volume_small_pane_cp_g10

0xe40a,	// (0x000582b9) midp_ticker_pane_g1_ParamLimits

0xe416,	// (0x000582c5) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x000595fd) midp_ticker_pane_g_ParamLimits

0xe422,	// (0x000582d1) midp_ticker_pane_t1_ParamLimits

0xb228,	// (0x000550d7) aid_fill_nsta_2

0x2bf3,	// (0x0004caa2) list_form2_midp_pane

0x3cfe,	// (0x0004dbad) midp_editing_number_pane_ParamLimits

0x3d0d,	// (0x0004dbbc) midp_ticker_pane_ParamLimits

0x4922,	// (0x0004e7d1) form2_midp_field_pane

0x4946,	// (0x0004e7f5) scroll_pane_cp51

0x4966,	// (0x0004e815) form2_midp_button_pane_ParamLimits

0x4966,	// (0x0004e815) form2_midp_button_pane

0x4978,	// (0x0004e827) form2_midp_content_pane_ParamLimits

0x4978,	// (0x0004e827) form2_midp_content_pane

0x4992,	// (0x0004e841) form2_midp_field_choice_group_pane

0x499a,	// (0x0004e849) form2_midp_field_pane_g1

0x49a2,	// (0x0004e851) form2_midp_field_pane_g2

0x49aa,	// (0x0004e859) form2_midp_field_pane_g3

0x49b2,	// (0x0004e861) form2_midp_field_pane_g4

0x0003,

0xfae8,	// (0x00059997) form2_midp_field_pane_g

0x49ba,	// (0x0004e869) form2_midp_gauge_slider_pane

0x49c2,	// (0x0004e871) form2_midp_gauge_wait_pane

0x49ca,	// (0x0004e879) form2_midp_image_pane_ParamLimits

0x49ca,	// (0x0004e879) form2_midp_image_pane

0xcd78,	// (0x00056c27) form2_midp_label_pane_ParamLimits

0xcd78,	// (0x00056c27) form2_midp_label_pane

0xcd91,	// (0x00056c40) form2_midp_label_pane_cp_ParamLimits

0xcd91,	// (0x00056c40) form2_midp_label_pane_cp

0x4a1f,	// (0x0004e8ce) form2_midp_string_pane_ParamLimits

0x4a1f,	// (0x0004e8ce) form2_midp_string_pane

0x9075,	// (0x00052f24) form2_midp_text_pane_ParamLimits

0x9075,	// (0x00052f24) form2_midp_text_pane

0x4a31,	// (0x0004e8e0) form2_midp_time_pane

0x4a41,	// (0x0004e8f0) input_focus_pane_cp51_ParamLimits

0x4a41,	// (0x0004e8f0) input_focus_pane_cp51

0xcdb0,	// (0x00056c5f) form2_midp_label_pane_t1_ParamLimits

0xcdb0,	// (0x00056c5f) form2_midp_label_pane_t1

0x908e,	// (0x00052f3d) form2_mdip_text_pane_t1_ParamLimits

0x908e,	// (0x00052f3d) form2_mdip_text_pane_t1

0xf135,	// (0x00058fe4) form2_midp_time_pane_t1

0x4aa2,	// (0x0004e951) form2_midp_gauge_slider_pane_t1

0xcdf0,	// (0x00056c9f) form2_midp_gauge_slider_pane_t2

0xce02,	// (0x00056cb1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf1,	// (0x000599a0) form2_midp_gauge_slider_pane_t

0x4ad8,	// (0x0004e987) form2_midp_slider_pane

0x4ae4,	// (0x0004e993) form2_midp_gauge_wait_pane_t1

0x4af2,	// (0x0004e9a1) form2_midp_wait_pane_ParamLimits

0x4af2,	// (0x0004e9a1) form2_midp_wait_pane

0xce14,	// (0x00056cc3) list_single_2graphic_pane_cp4_ParamLimits

0xce14,	// (0x00056cc3) list_single_2graphic_pane_cp4

0xc2b8,	// (0x00056167) list_single_midp_graphic_pane_cp_ParamLimits

0xc2b8,	// (0x00056167) list_single_midp_graphic_pane_cp

0x9320,	// (0x000531cf) list_highlight_pane_cp20

0x4b45,	// (0x0004e9f4) list_single_2graphic_pane_g1_cp4

0x414d,	// (0x0004dffc) list_single_2graphic_pane_g2_cp4

0x4b4d,	// (0x0004e9fc) list_single_2graphic_pane_t1_cp4

0x95bb,	// (0x0005346a) list_highlight_pane_cp21

0x4b5c,	// (0x0004ea0b) list_single_midp_graphic_pane_g4_cp

0x4b6b,	// (0x0004ea1a) list_single_midp_graphic_pane_t1_cp

0xce29,	// (0x00056cd8) form2_mdip_string_pane_t1_ParamLimits

0xce29,	// (0x00056cd8) form2_mdip_string_pane_t1

0x9320,	// (0x000531cf) bg_wml_button_pane_cp2

0x9230,	// (0x000530df) form2_midp_image_pane_g1

0xf316,	// (0x000591c5) list_double_large_graphic_pane_g5_ParamLimits

0xf316,	// (0x000591c5) list_double_large_graphic_pane_g5

0xa730,	// (0x000545df) midp_form_pane_ParamLimits

0x95bb,	// (0x0005346a) main_apps_wheel_pane_ParamLimits

0xaee2,	// (0x00054d91) popup_preview_window_ParamLimits

0xaee2,	// (0x00054d91) popup_preview_window

0xb1af,	// (0x0005505e) popup_touch_info_window_ParamLimits

0xb1af,	// (0x0005505e) popup_touch_info_window

0xb1cd,	// (0x0005507c) popup_touch_menu_window_ParamLimits

0xb1cd,	// (0x0005507c) popup_touch_menu_window

0x9226,	// (0x000530d5) bg_popup_sub_pane_cp6

0x4c87,	// (0x0004eb36) list_touch_menu_pane

0xce9f,	// (0x00056d4e) list_single_touch_menu_pane_ParamLimits

0xce9f,	// (0x00056d4e) list_single_touch_menu_pane

0xceb3,	// (0x00056d62) list_single_touch_menu_pane_t1

0x95bb,	// (0x0005346a) bg_popup_sub_pane_cp7_ParamLimits

0x95bb,	// (0x0005346a) bg_popup_sub_pane_cp7

0x4cb3,	// (0x0004eb62) heading_sub_pane

0x4cbb,	// (0x0004eb6a) list_touch_info_pane_ParamLimits

0x4cbb,	// (0x0004eb6a) list_touch_info_pane

0x4cca,	// (0x0004eb79) list_single_touch_info_pane_ParamLimits

0x4cca,	// (0x0004eb79) list_single_touch_info_pane

0x4cdc,	// (0x0004eb8b) list_single_touch_info_pane_t1

0x4cea,	// (0x0004eb99) list_single_touch_info_pane_t2

0x0001,

0xfaff,	// (0x000599ae) list_single_touch_info_pane_t

0xe3f3,	// (0x000582a2) bg_popup_heading_pane_cp

0x4d04,	// (0x0004ebb3) heading_sub_pane_t1

0x2834,	// (0x0004c6e3) bg_popup_preview_window_pane_cp_ParamLimits

0x2834,	// (0x0004c6e3) bg_popup_preview_window_pane_cp

0x4cb3,	// (0x0004eb62) heading_preview_pane

0x4cbb,	// (0x0004eb6a) list_preview_pane_ParamLimits

0x4cbb,	// (0x0004eb6a) list_preview_pane

0x4d12,	// (0x0004ebc1) popup_preview_window_g1

0x4cca,	// (0x0004eb79) list_single_preview_pane_ParamLimits

0x4cca,	// (0x0004eb79) list_single_preview_pane

0x4d1a,	// (0x0004ebc9) list_single_preview_pane_g1

0x4d22,	// (0x0004ebd1) list_single_preview_pane_t1

0x4cdc,	// (0x0004eb8b) list_single_preview_pane_t2

0x0001,

0xfb04,	// (0x000599b3) list_single_preview_pane_t

0x4d30,	// (0x0004ebdf) bg_popup_heading_pane_cp2_ParamLimits

0x4d30,	// (0x0004ebdf) bg_popup_heading_pane_cp2

0x4d46,	// (0x0004ebf5) heading_preview_pane_g1

0x4d4e,	// (0x0004ebfd) heading_preview_pane_t1_ParamLimits

0x4d4e,	// (0x0004ebfd) heading_preview_pane_t1

0x976a,	// (0x00053619) soft_indicator_pane_t1_ParamLimits

0x9e29,	// (0x00053cd8) scroll_pane_ParamLimits

0xa3c3,	// (0x00054272) scroll_sc2_left_pane

0xa3cc,	// (0x0005427b) scroll_sc2_right_pane

0xa3eb,	// (0x0005429a) scroll_bg_pane_g1_ParamLimits

0xa400,	// (0x000542af) scroll_bg_pane_g2_ParamLimits

0xa418,	// (0x000542c7) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x00059588) scroll_bg_pane_g_ParamLimits

0xa3eb,	// (0x0005429a) scroll_handle_pane_g1_ParamLimits

0xa43a,	// (0x000542e9) scroll_handle_pane_g2_ParamLimits

0xa418,	// (0x000542c7) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x0005958f) scroll_handle_pane_g_ParamLimits

0xaa89,	// (0x00054938) popup_choice_list_window_ParamLimits

0xaa89,	// (0x00054938) popup_choice_list_window

0x270a,	// (0x0004c5b9) choice_list_pane

0x278c,	// (0x0004c63b) cell_toolbar_pane_t1

0x27b4,	// (0x0004c663) toolbar_button_pane_ParamLimits

0x3870,	// (0x0004d71f) ai_gene_pane_1_t2_ParamLimits

0x3870,	// (0x0004d71f) ai_gene_pane_1_t2

0x0001,

0xf8fc,	// (0x000597ab) ai_gene_pane_1_t_ParamLimits

0xf8fc,	// (0x000597ab) ai_gene_pane_1_t

0x4d6b,	// (0x0004ec1a) scroll_sc2_left_pane_g1

0x4d6b,	// (0x0004ec1a) scroll_sc2_right_pane_g1

0x2299,	// (0x0004c148) bg_popup_sub_pane_cp10

0x4d75,	// (0x0004ec24) list_choice_list_pane

0xcec1,	// (0x00056d70) list_single_choice_list_pane_ParamLimits

0xcec1,	// (0x00056d70) list_single_choice_list_pane

0xced5,	// (0x00056d84) list_single_choice_list_pane_g1

0xa094,	// (0x00053f43) list_single_choice_list_pane_t1_ParamLimits

0xa094,	// (0x00053f43) list_single_choice_list_pane_t1

0x4da9,	// (0x0004ec58) choice_list_pane_g1

0xcedd,	// (0x00056d8c) choice_list_pane_t1

0x9226,	// (0x000530d5) input_focus_pane_cp11

0xa24e,	// (0x000540fd) title_pane_stacon_g2_ParamLimits

0xa24e,	// (0x000540fd) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x0005956e) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0005956e) title_pane_stacon_g

0xe3f3,	// (0x000582a2) cursor_press_pane

0xab30,	// (0x000549df) popup_fep_hwr_window_ParamLimits

0xab30,	// (0x000549df) popup_fep_hwr_window

0x07f5,	// (0x0004a6a4) popup_fep_vkb_window_ParamLimits

0x07f5,	// (0x0004a6a4) popup_fep_vkb_window

0xceeb,	// (0x00056d9a) cursor_press_pane_g1

0x0002,

0xfb2d,	// (0x000599dc) fep_vkb_side_pane_g_ParamLimits

0x1299,	// (0x0004b148) fep_hwr_candidate_pane_ParamLimits

0x1299,	// (0x0004b148) fep_hwr_candidate_pane

0x12c3,	// (0x0004b172) fep_hwr_side_pane_ParamLimits

0x12c3,	// (0x0004b172) fep_hwr_side_pane

0x12e3,	// (0x0004b192) fep_hwr_top_pane_ParamLimits

0x12e3,	// (0x0004b192) fep_hwr_top_pane

0x12fb,	// (0x0004b1aa) fep_hwr_write_pane_ParamLimits

0x12fb,	// (0x0004b1aa) fep_hwr_write_pane

0xfb2d,	// (0x000599dc) fep_vkb_side_pane_g

0x4dc7,	// (0x0004ec76) fep_hwr_top_pane_g1

0x4dd9,	// (0x0004ec88) fep_hwr_top_pane_g2

0x1327,	// (0x0004b1d6) fep_hwr_top_pane_g3

0x0002,

0xfb09,	// (0x000599b8) fep_hwr_top_pane_g

0x133c,	// (0x0004b1eb) fep_hwr_top_text_pane

0xbdce,	// (0x00055c7d) fep_hwr_top_text_pane_g1

0x4e0f,	// (0x0004ecbe) fep_hwr_top_text_pane_t1

0x1432,	// (0x0004b2e1) fep_hwr_candidate_pane_g1

0x5054,	// (0x0004ef03) fep_vkb_keypad_pane_g3_ParamLimits

0x5054,	// (0x0004ef03) fep_vkb_keypad_pane_g3

0x507c,	// (0x0004ef2b) fep_vkb_keypad_pane_g4_ParamLimits

0x507c,	// (0x0004ef2b) fep_vkb_keypad_pane_g4

0x50eb,	// (0x0004ef9a) fep_vkb_bottom_pane_g2_ParamLimits

0x50eb,	// (0x0004ef9a) fep_vkb_bottom_pane_g2

0x0001,

0xfb34,	// (0x000599e3) fep_vkb_bottom_pane_g_ParamLimits

0xfb34,	// (0x000599e3) fep_vkb_bottom_pane_g

0x4d6b,	// (0x0004ec1a) cell_vkb_side_pane_g2

0x0001,

0xfb3e,	// (0x000599ed) cell_vkb_side_pane_g

0x5176,	// (0x0004f025) cell_vkb_side_pane_t1

0x5184,	// (0x0004f033) cell_vkb_side_pane_t1_copy1

0x4d6b,	// (0x0004ec1a) bg_fep_vkb_candidate_pane_g2

0x52b0,	// (0x0004f15f) cell_vkb_candidate_pane_ParamLimits

0x4e1d,	// (0x0004eccc) aid_size_cell_vkb_ParamLimits

0x4e1d,	// (0x0004eccc) aid_size_cell_vkb

0x52b0,	// (0x0004f15f) cell_vkb_candidate_pane

0x144c,	// (0x0004b2fb) bg_popup_fep_shadow_pane_g1

0xcf2d,	// (0x00056ddc) fep_vkb_bottom_pane_ParamLimits

0xcf2d,	// (0x00056ddc) fep_vkb_bottom_pane

0x4ee1,	// (0x0004ed90) fep_vkb_candidate_pane_ParamLimits

0x4ee1,	// (0x0004ed90) fep_vkb_candidate_pane

0xcf52,	// (0x00056e01) fep_vkb_keypad_pane_ParamLimits

0xcf52,	// (0x00056e01) fep_vkb_keypad_pane

0xcf87,	// (0x00056e36) fep_vkb_side_pane_ParamLimits

0xcf87,	// (0x00056e36) fep_vkb_side_pane

0xcfc3,	// (0x00056e72) fep_vkb_top_pane_ParamLimits

0xcfc3,	// (0x00056e72) fep_vkb_top_pane

0x4fad,	// (0x0004ee5c) fep_vkb_top_pane_g1_ParamLimits

0x4fad,	// (0x0004ee5c) fep_vkb_top_pane_g1

0x4fbc,	// (0x0004ee6b) fep_vkb_top_pane_g2_ParamLimits

0x4fbc,	// (0x0004ee6b) fep_vkb_top_pane_g2

0x4fcb,	// (0x0004ee7a) fep_vkb_top_pane_g3_ParamLimits

0x4fcb,	// (0x0004ee7a) fep_vkb_top_pane_g3

0x0003,

0xfb24,	// (0x000599d3) fep_vkb_top_pane_g_ParamLimits

0xfb24,	// (0x000599d3) fep_vkb_top_pane_g

0x4fe9,	// (0x0004ee98) fep_vkb_top_text_pane_ParamLimits

0x4fe9,	// (0x0004ee98) fep_vkb_top_text_pane

0xcff8,	// (0x00056ea7) fep_vkb_side_pane_g1_ParamLimits

0xcff8,	// (0x00056ea7) fep_vkb_side_pane_g1

0x5043,	// (0x0004eef2) grid_vkb_side_pane_ParamLimits

0x5043,	// (0x0004eef2) grid_vkb_side_pane

0x1454,	// (0x0004b303) bg_popup_fep_shadow_pane_g2

0x145d,	// (0x0004b30c) bg_popup_fep_shadow_pane_g3

0x1465,	// (0x0004b314) bg_popup_fep_shadow_pane_g4

0x146e,	// (0x0004b31d) bg_popup_fep_shadow_pane_g5

0x1478,	// (0x0004b327) bg_popup_fep_shadow_pane_g6

0x1480,	// (0x0004b32f) bg_popup_fep_shadow_pane_g7

0x9f7d,	// (0x00053e2c) bg_popup_fep_shadow_pane_g8

0x509a,	// (0x0004ef49) grid_vkb_keypad_number_pane_ParamLimits

0x509a,	// (0x0004ef49) grid_vkb_keypad_number_pane

0x50aa,	// (0x0004ef59) grid_vkb_keypad_pane_ParamLimits

0x50aa,	// (0x0004ef59) grid_vkb_keypad_pane

0x50d0,	// (0x0004ef7f) fep_vkb_bottom_pane_g1_ParamLimits

0x50d0,	// (0x0004ef7f) fep_vkb_bottom_pane_g1

0x50f9,	// (0x0004efa8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x50f9,	// (0x0004efa8) grid_vkb_keypad_bottom_left_pane

0x510e,	// (0x0004efbd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x510e,	// (0x0004efbd) grid_vkb_keypad_bottom_right_pane

0x5123,	// (0x0004efd2) fep_vkb_top_text_pane_g1

0xd03f,	// (0x00056eee) fep_vkb_top_text_pane_t1

0xd051,	// (0x00056f00) cell_vkb_side_pane_ParamLimits

0xd051,	// (0x00056f00) cell_vkb_side_pane

0x4d6b,	// (0x0004ec1a) cell_vkb_side_pane_g1

0x5192,	// (0x0004f041) cell_vkb_keypad_pane_ParamLimits

0x5192,	// (0x0004f041) cell_vkb_keypad_pane

0x5207,	// (0x0004f0b6) cell_vkb_keypad_pane_g1

0x0008,

0xfb51,	// (0x00059a00) bg_popup_fep_shadow_pane_g

0x4d6b,	// (0x0004ec1a) cell_hwr_side_pane_g1

0x4d6b,	// (0x0004ec1a) cell_hwr_side_pane_g2

0x5211,	// (0x0004f0c0) cell_vkb_keypad_pane_t1

0xd067,	// (0x00056f16) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd067,	// (0x00056f16) cell_vkb_keypad_bottom_left_pane

0xd07c,	// (0x00056f2b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd07c,	// (0x00056f2b) cell_vkb_keypad_bottom_right_pane

0x4d6b,	// (0x0004ec1a) cell_vkb_keypad_bottom_left_pane_g1

0x4d6b,	// (0x0004ec1a) cell_vkb_keypad_bottom_right_pane_g1

0x5275,	// (0x0004f124) cell_vkb_keypad_number_pane_ParamLimits

0x5275,	// (0x0004f124) cell_vkb_keypad_number_pane

0x5294,	// (0x0004f143) cell_vkb_keypad_number_pane_g1

0x529e,	// (0x0004f14d) cell_vkb_keypad_number_pane_g2

0x52a7,	// (0x0004f156) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb43,	// (0x000599f2) cell_vkb_keypad_number_pane_g

0x5211,	// (0x0004f0c0) cell_vkb_keypad_number_pane_t1

0x52cb,	// (0x0004f17a) fep_vkb_candidate_pane_g1

0x0001,

0xfb3e,	// (0x000599ed) cell_hwr_side_pane_g

0x52e4,	// (0x0004f193) cell_hwr_side_pane_t1

0x1492,	// (0x0004b341) cell_hwr_side_pane_t1_copy1

0x4fdb,	// (0x0004ee8a) cell_hwr_candidate_pane_g1

0x14a0,	// (0x0004b34f) cell_hwr_candidate_pane_t1

0x4d6b,	// (0x0004ec1a) cell_vkb_candidate_pane_g2

0x536a,	// (0x0004f219) cell_vkb_candidate_pane_t1

0x1260,	// (0x0004b10f) bg_popup_fep_shadow_pane_ParamLimits

0x1260,	// (0x0004b10f) bg_popup_fep_shadow_pane

0xcef3,	// (0x00056da2) bg_fep_hwr_top_pane_g4

0x4deb,	// (0x0004ec9a) bg_hwr_side_pane_g1_ParamLimits

0x4deb,	// (0x0004ec9a) bg_hwr_side_pane_g1

0xb5ca,	// (0x00055479) cell_hwr_side_pane_ParamLimits

0xb5ca,	// (0x00055479) cell_hwr_side_pane

0x13b3,	// (0x0004b262) fep_hwr_write_pane_g1_ParamLimits

0x13b3,	// (0x0004b262) fep_hwr_write_pane_g1

0x13c0,	// (0x0004b26f) fep_hwr_write_pane_g2_ParamLimits

0x13c0,	// (0x0004b26f) fep_hwr_write_pane_g2

0x13cd,	// (0x0004b27c) fep_hwr_write_pane_g3_ParamLimits

0x13cd,	// (0x0004b27c) fep_hwr_write_pane_g3

0xb5ea,	// (0x00055499) fep_hwr_write_pane_g4_ParamLimits

0xb5ea,	// (0x00055499) fep_hwr_write_pane_g4

0x0005,

0xfb10,	// (0x000599bf) fep_hwr_write_pane_g_ParamLimits

0xfb10,	// (0x000599bf) fep_hwr_write_pane_g

0xcef3,	// (0x00056da2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xcef3,	// (0x00056da2) bg_fep_hwr_candidate_pane_g2

0x13f0,	// (0x0004b29f) cell_hwr_candidate_pane_ParamLimits

0x13f0,	// (0x0004b29f) cell_hwr_candidate_pane

0x1432,	// (0x0004b2e1) fep_hwr_candidate_pane_g1_ParamLimits

0x4e4b,	// (0x0004ecfa) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4e4b,	// (0x0004ecfa) bg_popup_fep_shadow_pane_cp2

0x4fdb,	// (0x0004ee8a) fep_vkb_top_pane_g4_ParamLimits

0x4fdb,	// (0x0004ee8a) fep_vkb_top_pane_g4

0x5021,	// (0x0004eed0) fep_vkb_side_pane_g2_ParamLimits

0x5021,	// (0x0004eed0) fep_vkb_side_pane_g2

0x8d26,	// (0x00052bd5) list_setting_pane_t4_ParamLimits

0x8d26,	// (0x00052bd5) list_setting_pane_t4

0x8dc0,	// (0x00052c6f) list_setting_number_pane_t5_ParamLimits

0x8dc0,	// (0x00052c6f) list_setting_number_pane_t5

0xbe05,	// (0x00055cb4) list_double_heading_pane_cp2_ParamLimits

0xbe05,	// (0x00055cb4) list_double_heading_pane_cp2

0x4cf8,	// (0x0004eba7) list_double_heading_pane_g1_cp2_ParamLimits

0x4cf8,	// (0x0004eba7) list_double_heading_pane_g1_cp2

0x5378,	// (0x0004f227) list_double_heading_pane_g2_cp2_ParamLimits

0x5378,	// (0x0004f227) list_double_heading_pane_g2_cp2

0x538c,	// (0x0004f23b) list_double_heading_pane_t1_cp2_ParamLimits

0x538c,	// (0x0004f23b) list_double_heading_pane_t1_cp2

0x53a2,	// (0x0004f251) list_double_heading_pane_t2_cp2_ParamLimits

0x53a2,	// (0x0004f251) list_double_heading_pane_t2_cp2

0x920e,	// (0x000530bd) aid_value_unit2

0xef34,	// (0x00058de3) popup_preview_fixed_window

0x9925,	// (0x000537d4) bg_popup_preview_window_pane_cp02

0x53b4,	// (0x0004f263) list_preview_fixed_pane

0x53fa,	// (0x0004f2a9) list_empty_pane_fp_ParamLimits

0x53fa,	// (0x0004f2a9) list_empty_pane_fp

0x53fa,	// (0x0004f2a9) list_single_cale_day_pane_fp_ParamLimits

0x53fa,	// (0x0004f2a9) list_single_cale_day_pane_fp

0x53fa,	// (0x0004f2a9) list_single_graphic_heading_pane_fp_ParamLimits

0x53fa,	// (0x0004f2a9) list_single_graphic_heading_pane_fp

0x53fa,	// (0x0004f2a9) list_single_graphic_pane_fp_ParamLimits

0x53fa,	// (0x0004f2a9) list_single_graphic_pane_fp

0x53fa,	// (0x0004f2a9) list_single_heading_pane_fp_ParamLimits

0x53fa,	// (0x0004f2a9) list_single_heading_pane_fp

0x53fa,	// (0x0004f2a9) list_single_pane_fp_ParamLimits

0x53fa,	// (0x0004f2a9) list_single_pane_fp

0x5410,	// (0x0004f2bf) list_single_pane_fp_g1_ParamLimits

0x5410,	// (0x0004f2bf) list_single_pane_fp_g1

0x541c,	// (0x0004f2cb) list_single_pane_fp_g2_ParamLimits

0x541c,	// (0x0004f2cb) list_single_pane_fp_g2

0x5428,	// (0x0004f2d7) list_single_pane_fp_g3_ParamLimits

0x5428,	// (0x0004f2d7) list_single_pane_fp_g3

0x543c,	// (0x0004f2eb) list_single_pane_fp_g4_ParamLimits

0x543c,	// (0x0004f2eb) list_single_pane_fp_g4

0x0003,

0xfb72,	// (0x00059a21) list_single_pane_fp_g_ParamLimits

0xfb72,	// (0x00059a21) list_single_pane_fp_g

0xf148,	// (0x00058ff7) list_single_pane_fp_t1_ParamLimits

0xf148,	// (0x00058ff7) list_single_pane_fp_t1

0xf15f,	// (0x0005900e) list_single_graphic_pane_fp_g1_ParamLimits

0xf15f,	// (0x0005900e) list_single_graphic_pane_fp_g1

0x5410,	// (0x0004f2bf) list_single_graphic_pane_fp_g2_ParamLimits

0x5410,	// (0x0004f2bf) list_single_graphic_pane_fp_g2

0x541c,	// (0x0004f2cb) list_single_graphic_pane_fp_g3_ParamLimits

0x541c,	// (0x0004f2cb) list_single_graphic_pane_fp_g3

0x5428,	// (0x0004f2d7) list_single_graphic_pane_fp_g4_ParamLimits

0x5428,	// (0x0004f2d7) list_single_graphic_pane_fp_g4

0x543c,	// (0x0004f2eb) list_single_graphic_pane_fp_g5_ParamLimits

0x543c,	// (0x0004f2eb) list_single_graphic_pane_fp_g5

0x0004,

0xfb7b,	// (0x00059a2a) list_single_graphic_pane_fp_g_ParamLimits

0xfb7b,	// (0x00059a2a) list_single_graphic_pane_fp_g

0xf16b,	// (0x0005901a) list_single_graphic_pane_fp_t1_ParamLimits

0xf16b,	// (0x0005901a) list_single_graphic_pane_fp_t1

0xf15f,	// (0x0005900e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf15f,	// (0x0005900e) list_single_graphic_heading_pane_fp_g1

0x5410,	// (0x0004f2bf) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5410,	// (0x0004f2bf) list_single_graphic_heading_pane_fp_g2

0x541c,	// (0x0004f2cb) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x541c,	// (0x0004f2cb) list_single_graphic_heading_pane_fp_g3

0x5428,	// (0x0004f2d7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5428,	// (0x0004f2d7) list_single_graphic_heading_pane_fp_g4

0x543c,	// (0x0004f2eb) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x543c,	// (0x0004f2eb) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00059a2a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00059a2a) list_single_graphic_heading_pane_fp_g

0xf181,	// (0x00059030) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf181,	// (0x00059030) list_single_graphic_heading_pane_fp_t1

0xf197,	// (0x00059046) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf197,	// (0x00059046) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb86,	// (0x00059a35) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb86,	// (0x00059a35) list_single_graphic_heading_pane_fp_t

0xf1a9,	// (0x00059058) list_single_cale_day_pane_fp_g1_ParamLimits

0xf1a9,	// (0x00059058) list_single_cale_day_pane_fp_g1

0x5448,	// (0x0004f2f7) list_single_cale_day_pane_fp_g2_ParamLimits

0x5448,	// (0x0004f2f7) list_single_cale_day_pane_fp_g2

0x14be,	// (0x0004b36d) list_single_cale_day_pane_fp_g3_ParamLimits

0x14be,	// (0x0004b36d) list_single_cale_day_pane_fp_g3

0x14e6,	// (0x0004b395) list_single_cale_day_pane_fp_g4_ParamLimits

0x14e6,	// (0x0004b395) list_single_cale_day_pane_fp_g4

0x150a,	// (0x0004b3b9) list_single_cale_day_pane_fp_g5_ParamLimits

0x150a,	// (0x0004b3b9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8b,	// (0x00059a3a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8b,	// (0x00059a3a) list_single_cale_day_pane_fp_g

0xf1e1,	// (0x00059090) list_single_cale_day_pane_fp_t1_ParamLimits

0xf1e1,	// (0x00059090) list_single_cale_day_pane_fp_t1

0xf207,	// (0x000590b6) list_single_cale_day_pane_fp_t2_ParamLimits

0xf207,	// (0x000590b6) list_single_cale_day_pane_fp_t2

0xf220,	// (0x000590cf) list_single_cale_day_pane_fp_t3_ParamLimits

0xf220,	// (0x000590cf) list_single_cale_day_pane_fp_t3

0x0002,

0xfb96,	// (0x00059a45) list_single_cale_day_pane_fp_t_ParamLimits

0xfb96,	// (0x00059a45) list_single_cale_day_pane_fp_t

0x5410,	// (0x0004f2bf) list_empty_pane_fp_g1_ParamLimits

0x5410,	// (0x0004f2bf) list_empty_pane_fp_g1

0xf239,	// (0x000590e8) list_empty_pane_fp_t1

0xf247,	// (0x000590f6) list_empty_pane_fp_t2

0x0001,

0xfb9d,	// (0x00059a4c) list_empty_pane_fp_t

0x5410,	// (0x0004f2bf) list_single_heading_pane_fp_g1_ParamLimits

0x5410,	// (0x0004f2bf) list_single_heading_pane_fp_g1

0x541c,	// (0x0004f2cb) list_single_heading_pane_fp_g2_ParamLimits

0x541c,	// (0x0004f2cb) list_single_heading_pane_fp_g2

0x5428,	// (0x0004f2d7) list_single_heading_pane_fp_g3_ParamLimits

0x5428,	// (0x0004f2d7) list_single_heading_pane_fp_g3

0x0002,

0xfba2,	// (0x00059a51) list_single_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x00059a51) list_single_heading_pane_fp_g

0xf255,	// (0x00059104) list_single_heading_pane_fp_t1_ParamLimits

0xf255,	// (0x00059104) list_single_heading_pane_fp_t1

0xf267,	// (0x00059116) list_single_heading_pane_fp_t2_ParamLimits

0xf267,	// (0x00059116) list_single_heading_pane_fp_t2

0x0001,

0xfba9,	// (0x00059a58) list_single_heading_pane_fp_t_ParamLimits

0xfba9,	// (0x00059a58) list_single_heading_pane_fp_t

0xa0e8,	// (0x00053f97) aid_size_cell_fast

0x98a5,	// (0x00053754) soft_indicator_pane_cp1_t1

0xa122,	// (0x00053fd1) cell_app_pane_cp2_ParamLimits

0xa122,	// (0x00053fd1) cell_app_pane_cp2

0x1282,	// (0x0004b131) fep_hwr_candidate_drop_down_list_pane

0xcf01,	// (0x00056db0) fep_hwr_candidate_pane_g3_ParamLimits

0xcf01,	// (0x00056db0) fep_hwr_candidate_pane_g3

0xcf0e,	// (0x00056dbd) fep_hwr_candidate_pane_g4_ParamLimits

0xcf0e,	// (0x00056dbd) fep_hwr_candidate_pane_g4

0x0002,

0xfb1d,	// (0x000599cc) fep_hwr_candidate_pane_g_ParamLimits

0xfb1d,	// (0x000599cc) fep_hwr_candidate_pane_g

0x4ed0,	// (0x0004ed7f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4ed0,	// (0x0004ed7f) fep_vkb_candidate_drop_down_list_pane

0x52d3,	// (0x0004f182) fep_vkb_candidate_pane_g3

0x52db,	// (0x0004f18a) fep_vkb_candidate_pane_g4

0x0002,

0xfb4a,	// (0x000599f9) fep_vkb_candidate_pane_g

0x4fdb,	// (0x0004ee8a) cell_hwr_candidate_pane_g1_ParamLimits

0x52f2,	// (0x0004f1a1) cell_hwr_candidate_pane_g3_ParamLimits

0x52f2,	// (0x0004f1a1) cell_hwr_candidate_pane_g3

0x5313,	// (0x0004f1c2) cell_hwr_candidate_pane_g4_ParamLimits

0x5313,	// (0x0004f1c2) cell_hwr_candidate_pane_g4

0x0002,

0xfb64,	// (0x00059a13) cell_hwr_candidate_pane_g_ParamLimits

0xfb64,	// (0x00059a13) cell_hwr_candidate_pane_g

0x5334,	// (0x0004f1e3) cell_vkb_candidate_pane_g3_ParamLimits

0x5334,	// (0x0004f1e3) cell_vkb_candidate_pane_g3

0x534f,	// (0x0004f1fe) cell_vkb_candidate_pane_g4_ParamLimits

0x534f,	// (0x0004f1fe) cell_vkb_candidate_pane_g4

0xd097,	// (0x00056f46) cell_app_pane_cp2_g1_ParamLimits

0xd097,	// (0x00056f46) cell_app_pane_cp2_g1

0x5472,	// (0x0004f321) cell_app_pane_cp2_g2_ParamLimits

0x5472,	// (0x0004f321) cell_app_pane_cp2_g2

0x0001,

0xfbae,	// (0x00059a5d) cell_app_pane_cp2_g_ParamLimits

0xfbae,	// (0x00059a5d) cell_app_pane_cp2_g

0x547e,	// (0x0004f32d) cell_app_pane_cp2_t1_ParamLimits

0x547e,	// (0x0004f32d) cell_app_pane_cp2_t1

0x9f11,	// (0x00053dc0) grid_highlight_pane_cp1_ParamLimits

0x9f11,	// (0x00053dc0) grid_highlight_pane_cp1

0x152e,	// (0x0004b3dd) cell_hwr_candidate_pane_cp1_ParamLimits

0x152e,	// (0x0004b3dd) cell_hwr_candidate_pane_cp1

0x4fdb,	// (0x0004ee8a) fep_hwr_candidate_drop_down_list_pane_g1

0x5490,	// (0x0004f33f) fep_hwr_candidate_drop_down_list_pane_g2

0x549d,	// (0x0004f34c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x00059a62) fep_hwr_candidate_drop_down_list_pane_g

0x154d,	// (0x0004b3fc) fep_hwr_candidate_drop_down_list_scroll_pane

0x1556,	// (0x0004b405) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1556,	// (0x0004b405) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1563,	// (0x0004b412) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1563,	// (0x0004b412) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1570,	// (0x0004b41f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1570,	// (0x0004b41f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5334,	// (0x0004f1e3) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5334,	// (0x0004f1e3) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x534f,	// (0x0004f1fe) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x534f,	// (0x0004f1fe) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x157d,	// (0x0004b42c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x157d,	// (0x0004b42c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1598,	// (0x0004b447) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1598,	// (0x0004b447) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x15b3,	// (0x0004b462) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x15b3,	// (0x0004b462) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x00059a69) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x00059a69) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x54aa,	// (0x0004f359) cell_vkb_candidate_pane_cp1_ParamLimits

0x54aa,	// (0x0004f359) cell_vkb_candidate_pane_cp1

0x4fdb,	// (0x0004ee8a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4fdb,	// (0x0004ee8a) fep_vkb_candidate_drop_down_list_pane_g1

0x5490,	// (0x0004f33f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5490,	// (0x0004f33f) fep_vkb_candidate_drop_down_list_pane_g2

0x549d,	// (0x0004f34c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x549d,	// (0x0004f34c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x00059a62) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb3,	// (0x00059a62) fep_vkb_candidate_drop_down_list_pane_g

0x54ca,	// (0x0004f379) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x54ca,	// (0x0004f379) fep_vkb_candidate_drop_down_list_scroll_pane

0x54d7,	// (0x0004f386) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x54d7,	// (0x0004f386) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x54e4,	// (0x0004f393) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x54e4,	// (0x0004f393) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x54f0,	// (0x0004f39f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x54f0,	// (0x0004f39f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x52f2,	// (0x0004f1a1) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x52f2,	// (0x0004f1a1) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5313,	// (0x0004f1c2) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5313,	// (0x0004f1c2) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x54fc,	// (0x0004f3ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x54fc,	// (0x0004f3ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x551d,	// (0x0004f3cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x551d,	// (0x0004f3cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x553e,	// (0x0004f3ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x553e,	// (0x0004f3ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcb,	// (0x00059a7a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcb,	// (0x00059a7a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x946a,	// (0x00053319) title_pane_g1_ParamLimits

0x947d,	// (0x0005332c) title_pane_g2_ParamLimits

0xf54e,	// (0x000593fd) title_pane_g_ParamLimits

0xbdbe,	// (0x00055c6d) aid_call2_pane

0xbdc6,	// (0x00055c75) aid_call_pane

0xbdce,	// (0x00055c7d) popup_clock_analogue_window_g1

0xbdce,	// (0x00055c7d) popup_clock_analogue_window_g2

0xf4d4,	// (0x00059383) popup_clock_analogue_window_g3

0xf4dd,	// (0x0005938c) popup_clock_analogue_window_g4

0x9230,	// (0x000530df) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x0005959d) popup_clock_analogue_window_g

0xf4e5,	// (0x00059394) popup_clock_analogue_window_t1

0xf4f3,	// (0x000593a2) clock_digital_number_pane_ParamLimits

0xf4f3,	// (0x000593a2) clock_digital_number_pane

0xf4ff,	// (0x000593ae) clock_digital_number_pane_cp02_ParamLimits

0xf4ff,	// (0x000593ae) clock_digital_number_pane_cp02

0xf50b,	// (0x000593ba) clock_digital_number_pane_cp03_ParamLimits

0xf50b,	// (0x000593ba) clock_digital_number_pane_cp03

0xf517,	// (0x000593c6) clock_digital_number_pane_cp04_ParamLimits

0xf517,	// (0x000593c6) clock_digital_number_pane_cp04

0xf523,	// (0x000593d2) clock_digital_separator_pane_ParamLimits

0xf523,	// (0x000593d2) clock_digital_separator_pane

0xf52f,	// (0x000593de) popup_clock_digital_window_t1_ParamLimits

0xf52f,	// (0x000593de) popup_clock_digital_window_t1

0x9230,	// (0x000530df) clock_digital_number_pane_g1

0x9230,	// (0x000530df) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x000595a8) clock_digital_number_pane_g

0x9230,	// (0x000530df) clock_digital_separator_pane_g1

0x9230,	// (0x000530df) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x000595a8) clock_digital_separator_pane_g

0xb204,	// (0x000550b3) aid_fill_nsta_ParamLimits

0xb33a,	// (0x000551e9) indicator_nsta_pane_ParamLimits

0x259a,	// (0x0004c449) popup_clock_analogue_window

0x259a,	// (0x0004c449) popup_clock_digital_window

0xcc95,	// (0x00056b44) grid_indicator_nsta_pane_ParamLimits

0x4769,	// (0x0004e618) clock_nsta_pane_t2

0x0001,

0xfa9d,	// (0x0005994c) clock_nsta_pane_t

0xf4b5,	// (0x00059364) aid_size_max_handle

0xa387,	// (0x00054236) aid_size_min_handle

0xe3f3,	// (0x000582a2) editor_scroll_pane

0x5559,	// (0x0004f408) ex_editor_pane

0xa070,	// (0x00053f1f) scroll_pane_cp13

0x9e55,	// (0x00053d04) scroll_pane_cp14

0xbdfd,	// (0x00055cac) scroll_pane_cp36

0xa54c,	// (0x000543fb) list_single_graphic_hl_pane_cp2_ParamLimits

0xa54c,	// (0x000543fb) list_single_graphic_hl_pane_cp2

0xca81,	// (0x00056930) list_single_graphic_hl_pane_ParamLimits

0xca81,	// (0x00056930) list_single_graphic_hl_pane

0x90a8,	// (0x00052f57) aid_size_min_hl_cp1

0x5561,	// (0x0004f410) list_highlight_pane_cp34_ParamLimits

0x5561,	// (0x0004f410) list_highlight_pane_cp34

0x5572,	// (0x0004f421) list_single_graphic_hl_pane_g1_ParamLimits

0x5572,	// (0x0004f421) list_single_graphic_hl_pane_g1

0x90b1,	// (0x00052f60) list_single_graphic_hl_pane_g2_ParamLimits

0x90b1,	// (0x00052f60) list_single_graphic_hl_pane_g2

0x90b1,	// (0x00052f60) list_single_graphic_hl_pane_g3_ParamLimits

0x90b1,	// (0x00052f60) list_single_graphic_hl_pane_g3

0xe352,	// (0x00058201) list_single_graphic_hl_pane_g4_ParamLimits

0xe352,	// (0x00058201) list_single_graphic_hl_pane_g4

0x55af,	// (0x0004f45e) list_single_graphic_hl_pane_g5_ParamLimits

0x55af,	// (0x0004f45e) list_single_graphic_hl_pane_g5

0x0004,

0xfbdc,	// (0x00059a8b) list_single_graphic_hl_pane_g_ParamLimits

0xfbdc,	// (0x00059a8b) list_single_graphic_hl_pane_g

0x90bd,	// (0x00052f6c) list_single_graphic_hl_pane_t1_ParamLimits

0x90bd,	// (0x00052f6c) list_single_graphic_hl_pane_t1

0x557f,	// (0x0004f42e) aid_size_min_hl_cp2

0x5588,	// (0x0004f437) list_highlight_pane_cp34_cp2_ParamLimits

0x5588,	// (0x0004f437) list_highlight_pane_cp34_cp2

0x5572,	// (0x0004f421) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5572,	// (0x0004f421) list_single_graphic_hl_pane_g1_cp2

0x5595,	// (0x0004f444) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5595,	// (0x0004f444) list_single_graphic_hl_pane_g2_cp2

0xd0b5,	// (0x00056f64) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd0b5,	// (0x00056f64) list_single_graphic_hl_pane_g3_cp2

0xe352,	// (0x00058201) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe352,	// (0x00058201) list_single_graphic_hl_pane_g4_cp2

0x55af,	// (0x0004f45e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x55af,	// (0x0004f45e) list_single_graphic_hl_pane_g5_cp2

0xa901,	// (0x000547b0) control_pane_g4_ParamLimits

0xa901,	// (0x000547b0) control_pane_g4

0x2299,	// (0x0004c148) bg_popup_sub_pane_cp10_ParamLimits

0x4d75,	// (0x0004ec24) list_choice_list_pane_ParamLimits

0x4d84,	// (0x0004ec33) scroll_pane_cp23

0x9925,	// (0x000537d4) bg_popup_preview_window_pane_cp02_ParamLimits

0x53b4,	// (0x0004f263) list_preview_fixed_pane_ParamLimits

0x53ca,	// (0x0004f279) list_preview_fixed_pane_cp_ParamLimits

0x53ca,	// (0x0004f279) list_preview_fixed_pane_cp

0x53d6,	// (0x0004f285) popup_preview_fixed_window_g1_ParamLimits

0x53d6,	// (0x0004f285) popup_preview_fixed_window_g1

0x53e2,	// (0x0004f291) popup_preview_fixed_window_g2_ParamLimits

0x53e2,	// (0x0004f291) popup_preview_fixed_window_g2

0x0002,

0xfb6b,	// (0x00059a1a) popup_preview_fixed_window_g_ParamLimits

0xfb6b,	// (0x00059a1a) popup_preview_fixed_window_g

0xf429,	// (0x000592d8) aid_navi_side_left_pane_ParamLimits

0xf43e,	// (0x000592ed) aid_navi_side_right_pane_ParamLimits

0xf456,	// (0x00059305) navi_icon_pane_stacon_ParamLimits

0xf46a,	// (0x00059319) navi_navi_pane_stacon_ParamLimits

0xf456,	// (0x00059305) navi_text_pane_stacon_ParamLimits

0x9226,	// (0x000530d5) main_text_info_pane

0x55d9,	// (0x0004f488) listscroll_text_info_pane

0x55e1,	// (0x0004f490) list_text_info_pane_ParamLimits

0x55e1,	// (0x0004f490) list_text_info_pane

0x55f0,	// (0x0004f49f) scroll_pane_cp24_ParamLimits

0x55f0,	// (0x0004f49f) scroll_pane_cp24

0xd0c3,	// (0x00056f72) list_text_info_pane_t1_ParamLimits

0xd0c3,	// (0x00056f72) list_text_info_pane_t1

0xaaa5,	// (0x00054954) popup_fast_swap2_window_ParamLimits

0xaaa5,	// (0x00054954) popup_fast_swap2_window

0x5642,	// (0x0004f4f1) aid_size_cell_fast2

0x9226,	// (0x000530d5) bg_popup_window_pane_cp17

0x2c27,	// (0x0004cad6) heading_pane_cp2

0x9b98,	// (0x00053a47) listscroll_fast2_pane

0x564c,	// (0x0004f4fb) grid_fast2_pane

0x5656,	// (0x0004f505) listscroll_fast2_pane_g1

0x565e,	// (0x0004f50d) listscroll_fast2_pane_g2

0x0001,

0xfbe7,	// (0x00059a96) listscroll_fast2_pane_g

0xa070,	// (0x00053f1f) scroll_pane_cp26

0x5668,	// (0x0004f517) cell_fast2_pane_ParamLimits

0x5668,	// (0x0004f517) cell_fast2_pane

0x567d,	// (0x0004f52c) cell_fast2_pane_g1

0x5686,	// (0x0004f535) cell_fast2_pane_g2

0x568f,	// (0x0004f53e) cell_fast2_pane_g3

0x0002,

0xfbec,	// (0x00059a9b) cell_fast2_pane_g

0x9c7f,	// (0x00053b2e) grid_highlight_pane_cp9

0x9c94,	// (0x00053b43) main_eswt_pane_ParamLimits

0x9c94,	// (0x00053b43) main_eswt_pane

0x5605,	// (0x0004f4b4) list_single_text_info_pane

0x5697,	// (0x0004f546) eswt_ctrl_button_pane

0x5697,	// (0x0004f546) eswt_ctrl_canvas_pane

0xd0df,	// (0x00056f8e) eswt_ctrl_combo_pane

0x5697,	// (0x0004f546) eswt_ctrl_default_pane

0x5697,	// (0x0004f546) eswt_ctrl_label_pane

0x56a7,	// (0x0004f556) eswt_ctrl_wait_pane

0xd0e7,	// (0x00056f96) eswt_shell_pane

0x9226,	// (0x000530d5) listscroll_eswt_app_pane

0x56cf,	// (0x0004f57e) popup_eswt_tasktip_window_ParamLimits

0x56cf,	// (0x0004f57e) popup_eswt_tasktip_window

0x2834,	// (0x0004c6e3) bg_popup_window_pane_cp18

0x56e0,	// (0x0004f58f) eswt_control_pane_g1_ParamLimits

0x56e0,	// (0x0004f58f) eswt_control_pane_g1

0x56ed,	// (0x0004f59c) eswt_control_pane_g2_ParamLimits

0x56ed,	// (0x0004f59c) eswt_control_pane_g2

0x56fa,	// (0x0004f5a9) eswt_control_pane_g3_ParamLimits

0x56fa,	// (0x0004f5a9) eswt_control_pane_g3

0x5707,	// (0x0004f5b6) eswt_control_pane_g4_ParamLimits

0x5707,	// (0x0004f5b6) eswt_control_pane_g4

0x0003,

0xfbf3,	// (0x00059aa2) eswt_control_pane_g_ParamLimits

0xfbf3,	// (0x00059aa2) eswt_control_pane_g

0x9f11,	// (0x00053dc0) bg_button_pane_ParamLimits

0x9f11,	// (0x00053dc0) bg_button_pane

0x9c94,	// (0x00053b43) common_borders_pane_copy2_ParamLimits

0x9c94,	// (0x00053b43) common_borders_pane_copy2

0x5714,	// (0x0004f5c3) control_button_pane_g1_ParamLimits

0x5714,	// (0x0004f5c3) control_button_pane_g1

0x5720,	// (0x0004f5cf) control_button_pane_g2_ParamLimits

0x5720,	// (0x0004f5cf) control_button_pane_g2

0x572c,	// (0x0004f5db) control_button_pane_g3_ParamLimits

0x572c,	// (0x0004f5db) control_button_pane_g3

0x0002,

0xfbfc,	// (0x00059aab) control_button_pane_g_ParamLimits

0xfbfc,	// (0x00059aab) control_button_pane_g

0x5740,	// (0x0004f5ef) control_button_pane_t1

0x574e,	// (0x0004f5fd) control_button_pane_t2

0x0001,

0xfc03,	// (0x00059ab2) control_button_pane_t

0x27c0,	// (0x0004c66f) bg_button_pane_g1

0x27c8,	// (0x0004c677) bg_button_pane_g2

0x27d0,	// (0x0004c67f) bg_button_pane_g3

0x27d8,	// (0x0004c687) bg_button_pane_g4

0x27e0,	// (0x0004c68f) bg_button_pane_g5

0x27e8,	// (0x0004c697) bg_button_pane_g6

0x27f0,	// (0x0004c69f) bg_button_pane_g7

0x27f8,	// (0x0004c6a7) bg_button_pane_g8

0x2800,	// (0x0004c6af) bg_button_pane_g9

0x0008,

0xf850,	// (0x000596ff) bg_button_pane_g

0x4d30,	// (0x0004ebdf) common_borders_pane_ParamLimits

0x4d30,	// (0x0004ebdf) common_borders_pane

0x56e0,	// (0x0004f58f) eswt_control_pane_g1_copy1_ParamLimits

0x56e0,	// (0x0004f58f) eswt_control_pane_g1_copy1

0x56ed,	// (0x0004f59c) eswt_control_pane_g2_copy1_ParamLimits

0x56ed,	// (0x0004f59c) eswt_control_pane_g2_copy1

0x56fa,	// (0x0004f5a9) eswt_control_pane_g3_copy1_ParamLimits

0x56fa,	// (0x0004f5a9) eswt_control_pane_g3_copy1

0x5707,	// (0x0004f5b6) eswt_control_pane_g4_copy1_ParamLimits

0x5707,	// (0x0004f5b6) eswt_control_pane_g4_copy1

0x4d6b,	// (0x0004ec1a) bg_eswt_ctrl_canvas_pane_g1

0x4d30,	// (0x0004ebdf) common_borders_pane_cp2_ParamLimits

0x4d30,	// (0x0004ebdf) common_borders_pane_cp2

0x4d30,	// (0x0004ebdf) common_borders_pane_cp3_ParamLimits

0x4d30,	// (0x0004ebdf) common_borders_pane_cp3

0x575c,	// (0x0004f60b) separator_horizontal_pane

0x5764,	// (0x0004f613) separator_vertical_pane

0x56e0,	// (0x0004f58f) eswt_control_pane_g1_copy2_ParamLimits

0x56e0,	// (0x0004f58f) eswt_control_pane_g1_copy2

0x56ed,	// (0x0004f59c) eswt_control_pane_g2_copy2_ParamLimits

0x56ed,	// (0x0004f59c) eswt_control_pane_g2_copy2

0x56fa,	// (0x0004f5a9) eswt_control_pane_g3_copy2_ParamLimits

0x56fa,	// (0x0004f5a9) eswt_control_pane_g3_copy2

0x5707,	// (0x0004f5b6) eswt_control_pane_g4_copy2_ParamLimits

0x5707,	// (0x0004f5b6) eswt_control_pane_g4_copy2

0x9226,	// (0x000530d5) common_borders_pane_cp4

0x576d,	// (0x0004f61c) separator_horizontal_pane_g1

0x5776,	// (0x0004f625) separator_horizontal_pane_g2

0x577f,	// (0x0004f62e) separator_horizontal_pane_g3

0x0002,

0xfc08,	// (0x00059ab7) separator_horizontal_pane_g

0x56e0,	// (0x0004f58f) eswt_control_pane_g1_copy3_ParamLimits

0x56e0,	// (0x0004f58f) eswt_control_pane_g1_copy3

0x56ed,	// (0x0004f59c) eswt_control_pane_g2_copy3_ParamLimits

0x56ed,	// (0x0004f59c) eswt_control_pane_g2_copy3

0x56fa,	// (0x0004f5a9) eswt_control_pane_g3_copy3_ParamLimits

0x56fa,	// (0x0004f5a9) eswt_control_pane_g3_copy3

0x5707,	// (0x0004f5b6) eswt_control_pane_g4_copy3_ParamLimits

0x5707,	// (0x0004f5b6) eswt_control_pane_g4_copy3

0x9226,	// (0x000530d5) common_borders_pane_cp5

0x5788,	// (0x0004f637) separator_vertical_pane_g1

0x5791,	// (0x0004f640) separator_vertical_pane_g2

0x579a,	// (0x0004f649) separator_vertical_pane_g3

0x0002,

0xfc0f,	// (0x00059abe) separator_vertical_pane_g

0x56e0,	// (0x0004f58f) eswt_control_pane_g1_copy4_ParamLimits

0x56e0,	// (0x0004f58f) eswt_control_pane_g1_copy4

0x56ed,	// (0x0004f59c) eswt_control_pane_g2_copy4_ParamLimits

0x56ed,	// (0x0004f59c) eswt_control_pane_g2_copy4

0x56fa,	// (0x0004f5a9) eswt_control_pane_g3_copy4_ParamLimits

0x56fa,	// (0x0004f5a9) eswt_control_pane_g3_copy4

0x5707,	// (0x0004f5b6) eswt_control_pane_g4_copy4_ParamLimits

0x5707,	// (0x0004f5b6) eswt_control_pane_g4_copy4

0xd107,	// (0x00056fb6) eswt_ctrl_combo_button_pane

0xd10f,	// (0x00056fbe) eswt_ctrl_input_pane

0xd117,	// (0x00056fc6) popup_choice_list_window_cp70

0xd11f,	// (0x00056fce) eswt_ctrl_input_pane_t1

0x9226,	// (0x000530d5) input_focus_pane_cp70

0x4d30,	// (0x0004ebdf) bg_button_pane_cp70_ParamLimits

0x4d30,	// (0x0004ebdf) bg_button_pane_cp70

0xd12d,	// (0x00056fdc) eswt_ctrl_combo_button_pane_g1

0x57d1,	// (0x0004f680) wait_bar_pane_cp70

0x2834,	// (0x0004c6e3) bg_popup_window_pane_cp70_ParamLimits

0x2834,	// (0x0004c6e3) bg_popup_window_pane_cp70

0x57d9,	// (0x0004f688) popup_eswt_tasktip_window_t1

0x57ef,	// (0x0004f69e) wait_bar_pane_cp71_ParamLimits

0x57ef,	// (0x0004f69e) wait_bar_pane_cp71

0x57fb,	// (0x0004f6aa) grid_eswt_app_pane

0xa3cc,	// (0x0005427b) scroll_pane_cp70

0xd135,	// (0x00056fe4) cell_eswt_app_pane_ParamLimits

0xd135,	// (0x00056fe4) cell_eswt_app_pane

0xd15f,	// (0x0005700e) cell_eswt_app_pane_g1_ParamLimits

0xd15f,	// (0x0005700e) cell_eswt_app_pane_g1

0xd18e,	// (0x0005703d) cell_eswt_app_pane_g2_ParamLimits

0xd18e,	// (0x0005703d) cell_eswt_app_pane_g2

0x0001,

0xfc16,	// (0x00059ac5) cell_eswt_app_pane_g_ParamLimits

0xfc16,	// (0x00059ac5) cell_eswt_app_pane_g

0xd1b2,	// (0x00057061) cell_eswt_app_pane_t1_ParamLimits

0xd1b2,	// (0x00057061) cell_eswt_app_pane_t1

0x58b9,	// (0x0004f768) grid_highlight_pane_cp70_ParamLimits

0x58b9,	// (0x0004f768) grid_highlight_pane_cp70

0xe2f6,	// (0x000581a5) set_content_pane_g1

0xa893,	// (0x00054742) status_small_volume_pane

0xb5ff,	// (0x000554ae) status_small_volume_pane_g1

0xb607,	// (0x000554b6) volume_small2_pane

0xb610,	// (0x000554bf) volume_small2_pane_g1

0xb619,	// (0x000554c8) volume_small2_pane_g2

0xb622,	// (0x000554d1) volume_small2_pane_g3

0xb62b,	// (0x000554da) volume_small2_pane_g4

0xb634,	// (0x000554e3) volume_small2_pane_g5

0xb63d,	// (0x000554ec) volume_small2_pane_g6

0xb646,	// (0x000554f5) volume_small2_pane_g7

0xb64f,	// (0x000554fe) volume_small2_pane_g8

0xb658,	// (0x00055507) volume_small2_pane_g9

0xb661,	// (0x00055510) volume_small2_pane_g10

0x0009,

0xfc1b,	// (0x00059aca) volume_small2_pane_g

0x5123,	// (0x0004efd2) fep_vkb_top_text_pane_g1_ParamLimits

0xd03f,	// (0x00056eee) fep_vkb_top_text_pane_t1_ParamLimits

0x53ee,	// (0x0004f29d) popup_preview_fixed_window_g3_ParamLimits

0x53ee,	// (0x0004f29d) popup_preview_fixed_window_g3

0xb142,	// (0x00054ff1) popup_toolbar_trans_pane

0xc91a,	// (0x000567c9) aid_height_set_list_ParamLimits

0x3b7b,	// (0x0004da2a) aid_size_parent_ParamLimits

0x2299,	// (0x0004c148) list_highlight_pane_cp2_ParamLimits

0xe2f6,	// (0x000581a5) set_content_pane_g1_ParamLimits

0xca93,	// (0x00056942) list_single_image_pane_ParamLimits

0xca93,	// (0x00056942) list_single_image_pane

0xd1e4,	// (0x00057093) aid_size_cell_image_ParamLimits

0xd1e4,	// (0x00057093) aid_size_cell_image

0xd1f1,	// (0x000570a0) grid_single_image_pane_ParamLimits

0xd1f1,	// (0x000570a0) grid_single_image_pane

0x541c,	// (0x0004f2cb) list_single_image_pane_g1_ParamLimits

0x541c,	// (0x0004f2cb) list_single_image_pane_g1

0x5428,	// (0x0004f2d7) list_single_image_pane_g2_ParamLimits

0x5428,	// (0x0004f2d7) list_single_image_pane_g2

0x0001,

0xfc30,	// (0x00059adf) list_single_image_pane_g_ParamLimits

0xfc30,	// (0x00059adf) list_single_image_pane_g

0x58e0,	// (0x0004f78f) list_single_image_pane_t1_ParamLimits

0x58e0,	// (0x0004f78f) list_single_image_pane_t1

0xd1fd,	// (0x000570ac) cell_image_list_pane_ParamLimits

0xd1fd,	// (0x000570ac) cell_image_list_pane

0xd211,	// (0x000570c0) cell_image_list_pane_g1

0xd21a,	// (0x000570c9) cell_image_list_pane_g2

0x0001,

0xfc35,	// (0x00059ae4) cell_image_list_pane_g

0xd223,	// (0x000570d2) aid_size_cell_tb_trans_pane

0x9f11,	// (0x00053dc0) bg_tb_trans_pane

0xd235,	// (0x000570e4) grid_tb_trans_pane

0x27c0,	// (0x0004c66f) bg_tb_trans_pane_g1

0x27c8,	// (0x0004c677) bg_tb_trans_pane_g2

0x27d0,	// (0x0004c67f) bg_tb_trans_pane_g3

0x27d8,	// (0x0004c687) bg_tb_trans_pane_g4

0x27e0,	// (0x0004c68f) bg_tb_trans_pane_g5

0x27f8,	// (0x0004c6a7) bg_tb_trans_pane_g6

0x2800,	// (0x0004c6af) bg_tb_trans_pane_g7

0x27e8,	// (0x0004c697) bg_tb_trans_pane_g8

0x27f0,	// (0x0004c69f) bg_tb_trans_pane_g9

0x0008,

0xfc3a,	// (0x00059ae9) bg_tb_trans_pane_g

0xd249,	// (0x000570f8) cell_toolbar_trans_pane_ParamLimits

0xd249,	// (0x000570f8) cell_toolbar_trans_pane

0x4d6b,	// (0x0004ec1a) cell_toolbar_trans_pane_g1

0xcd5c,	// (0x00056c0b) list_form2_midp_pane_t1

0xcd6a,	// (0x00056c19) list_form2_midp_pane_t2

0x0001,

0xfae3,	// (0x00059992) list_form2_midp_pane_t

0x4946,	// (0x0004e7f5) scroll_pane_cp51_ParamLimits

0x4b02,	// (0x0004e9b1) form2_midp_wait_pane_g1

0x4b0b,	// (0x0004e9ba) form2_midp_wait_pane_g2

0x4b14,	// (0x0004e9c3) form2_midp_wait_pane_g3

0x0002,

0xfaf8,	// (0x000599a7) form2_midp_wait_pane_g

0x95bb,	// (0x0005346a) list_highlight_pane_cp21_ParamLimits

0x4b5c,	// (0x0004ea0b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4b6b,	// (0x0004ea1a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3d2f,	// (0x0004dbde) list_single_2graphic_im_pane_ParamLimits

0x3d2f,	// (0x0004dbde) list_single_2graphic_im_pane

0xd26f,	// (0x0005711e) list_single_2graphic_im_pane_g1_ParamLimits

0xd26f,	// (0x0005711e) list_single_2graphic_im_pane_g1

0xd280,	// (0x0005712f) list_single_2graphic_im_pane_g2_ParamLimits

0xd280,	// (0x0005712f) list_single_2graphic_im_pane_g2

0xd28c,	// (0x0005713b) list_single_2graphic_im_pane_g3_ParamLimits

0xd28c,	// (0x0005713b) list_single_2graphic_im_pane_g3

0x0003,

0xfc4d,	// (0x00059afc) list_single_2graphic_im_pane_g_ParamLimits

0xfc4d,	// (0x00059afc) list_single_2graphic_im_pane_g

0xd2a0,	// (0x0005714f) list_single_2graphic_im_pane_t1_ParamLimits

0xd2a0,	// (0x0005714f) list_single_2graphic_im_pane_t1

0x53fa,	// (0x0004f2a9) list_single_graphic_2heading_pane_fp_ParamLimits

0x53fa,	// (0x0004f2a9) list_single_graphic_2heading_pane_fp

0xf15f,	// (0x0005900e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf15f,	// (0x0005900e) list_single_graphic_2heading_pane_fp_g1

0x5410,	// (0x0004f2bf) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5410,	// (0x0004f2bf) list_single_graphic_2heading_pane_fp_g2

0x541c,	// (0x0004f2cb) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x541c,	// (0x0004f2cb) list_single_graphic_2heading_pane_fp_g3

0x5428,	// (0x0004f2d7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5428,	// (0x0004f2d7) list_single_graphic_2heading_pane_fp_g4

0x543c,	// (0x0004f2eb) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x543c,	// (0x0004f2eb) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00059a2a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00059a2a) list_single_graphic_2heading_pane_fp_g

0xf27d,	// (0x0005912c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf27d,	// (0x0005912c) list_single_graphic_2heading_pane_fp_t1

0xf197,	// (0x00059046) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf197,	// (0x00059046) list_single_graphic_2heading_pane_fp_t2

0xf293,	// (0x00059142) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf293,	// (0x00059142) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc56,	// (0x00059b05) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc56,	// (0x00059b05) list_single_graphic_2heading_pane_fp_t

0x4df7,	// (0x0004eca6) fep_hwr_write_pane_g5_ParamLimits

0x4df7,	// (0x0004eca6) fep_hwr_write_pane_g5

0x4e03,	// (0x0004ecb2) fep_hwr_write_pane_g6_ParamLimits

0x4e03,	// (0x0004ecb2) fep_hwr_write_pane_g6

0xd0e7,	// (0x00056f96) eswt_shell_pane_ParamLimits

0x2834,	// (0x0004c6e3) bg_popup_window_pane_cp18_ParamLimits

0x3ac3,	// (0x0004d972) heading_pane_cp70

0x57d9,	// (0x0004f688) popup_eswt_tasktip_window_t1_ParamLimits

0xb25f,	// (0x0005510e) aid_touch_tab_arrow_left

0xb275,	// (0x00055124) aid_touch_tab_arrow_right

0x9495,	// (0x00053344) title_pane_g3_ParamLimits

0x9495,	// (0x00053344) title_pane_g3

0x9ed0,	// (0x00053d7f) set_value_pane_g1

0xb142,	// (0x00054ff1) popup_toolbar_trans_pane_ParamLimits

0xd223,	// (0x000570d2) aid_size_cell_tb_trans_pane_ParamLimits

0x9f11,	// (0x00053dc0) bg_tb_trans_pane_ParamLimits

0xd235,	// (0x000570e4) grid_tb_trans_pane_ParamLimits

0x9925,	// (0x000537d4) cont_note_pane_ParamLimits

0x9925,	// (0x000537d4) cont_note_pane

0x9c94,	// (0x00053b43) cont_snote2_single_text_pane_ParamLimits

0x9c94,	// (0x00053b43) cont_snote2_single_text_pane

0x9c94,	// (0x00053b43) cont_snote2_single_graphic_pane_ParamLimits

0x9c94,	// (0x00053b43) cont_snote2_single_graphic_pane

0x2e46,	// (0x0004ccf5) cont_note_wait_pane_ParamLimits

0x2e46,	// (0x0004ccf5) cont_note_wait_pane

0x2e46,	// (0x0004ccf5) cont_note_image_pane_ParamLimits

0x2e46,	// (0x0004ccf5) cont_note_image_pane

0x59d6,	// (0x0004f885) popup_note2_window_g1_ParamLimits

0x59d6,	// (0x0004f885) popup_note2_window_g1

0xd2de,	// (0x0005718d) popup_note2_window_t1_ParamLimits

0xd2de,	// (0x0005718d) popup_note2_window_t1

0xd323,	// (0x000571d2) popup_note2_window_t2_ParamLimits

0xd323,	// (0x000571d2) popup_note2_window_t2

0xd368,	// (0x00057217) popup_note2_window_t3_ParamLimits

0xd368,	// (0x00057217) popup_note2_window_t3

0x5ad6,	// (0x0004f985) popup_note2_window_t4_ParamLimits

0x5ad6,	// (0x0004f985) popup_note2_window_t4

0x99a9,	// (0x00053858) popup_note2_window_t5_ParamLimits

0x99a9,	// (0x00053858) popup_note2_window_t5

0x0004,

0xfc62,	// (0x00059b11) popup_note2_window_t_ParamLimits

0xfc62,	// (0x00059b11) popup_note2_window_t

0x5b05,	// (0x0004f9b4) popup_note2_image_window_g1_ParamLimits

0x5b05,	// (0x0004f9b4) popup_note2_image_window_g1

0xd3ad,	// (0x0005725c) popup_note2_image_window_g2_ParamLimits

0xd3ad,	// (0x0005725c) popup_note2_image_window_g2

0x0001,

0xfc6d,	// (0x00059b1c) popup_note2_image_window_g_ParamLimits

0xfc6d,	// (0x00059b1c) popup_note2_image_window_g

0x5b23,	// (0x0004f9d2) popup_note2_image_window_t1_ParamLimits

0x5b23,	// (0x0004f9d2) popup_note2_image_window_t1

0x5b3b,	// (0x0004f9ea) popup_note2_image_window_t2_ParamLimits

0x5b3b,	// (0x0004f9ea) popup_note2_image_window_t2

0x5b53,	// (0x0004fa02) popup_note2_image_window_t3_ParamLimits

0x5b53,	// (0x0004fa02) popup_note2_image_window_t3

0x0002,

0xfc72,	// (0x00059b21) popup_note2_image_window_t_ParamLimits

0xfc72,	// (0x00059b21) popup_note2_image_window_t

0x2e54,	// (0x0004cd03) popup_note2_wait_window_g1_ParamLimits

0x2e54,	// (0x0004cd03) popup_note2_wait_window_g1

0x2e60,	// (0x0004cd0f) popup_note2_wait_window_g2_ParamLimits

0x2e60,	// (0x0004cd0f) popup_note2_wait_window_g2

0x2e6c,	// (0x0004cd1b) popup_note2_wait_window_g3_ParamLimits

0x2e6c,	// (0x0004cd1b) popup_note2_wait_window_g3

0x0002,

0xf832,	// (0x000596e1) popup_note2_wait_window_g_ParamLimits

0xf832,	// (0x000596e1) popup_note2_wait_window_g

0x5b6f,	// (0x0004fa1e) popup_note2_wait_window_t1_ParamLimits

0x5b6f,	// (0x0004fa1e) popup_note2_wait_window_t1

0x5b8d,	// (0x0004fa3c) popup_note2_wait_window_t2_ParamLimits

0x5b8d,	// (0x0004fa3c) popup_note2_wait_window_t2

0x5bab,	// (0x0004fa5a) popup_note2_wait_window_t3_ParamLimits

0x5bab,	// (0x0004fa5a) popup_note2_wait_window_t3

0x5bbd,	// (0x0004fa6c) popup_note2_wait_window_t4_ParamLimits

0x5bbd,	// (0x0004fa6c) popup_note2_wait_window_t4

0x0003,

0xfc79,	// (0x00059b28) popup_note2_wait_window_t_ParamLimits

0xfc79,	// (0x00059b28) popup_note2_wait_window_t

0x5bcf,	// (0x0004fa7e) wait_bar2_pane_ParamLimits

0x5bcf,	// (0x0004fa7e) wait_bar2_pane

0x5be7,	// (0x0004fa96) popup_snote2_single_text_window_g1_ParamLimits

0x5be7,	// (0x0004fa96) popup_snote2_single_text_window_g1

0x5c0f,	// (0x0004fabe) popup_snote2_single_text_window_t1_ParamLimits

0x5c0f,	// (0x0004fabe) popup_snote2_single_text_window_t1

0x5c5b,	// (0x0004fb0a) popup_snote2_single_text_window_t2_ParamLimits

0x5c5b,	// (0x0004fb0a) popup_snote2_single_text_window_t2

0x5ca7,	// (0x0004fb56) popup_snote2_single_text_window_t3_ParamLimits

0x5ca7,	// (0x0004fb56) popup_snote2_single_text_window_t3

0x5ce8,	// (0x0004fb97) popup_snote2_single_text_window_t4_ParamLimits

0x5ce8,	// (0x0004fb97) popup_snote2_single_text_window_t4

0x5d1e,	// (0x0004fbcd) popup_snote2_single_text_window_t5_ParamLimits

0x5d1e,	// (0x0004fbcd) popup_snote2_single_text_window_t5

0x0004,

0xfc82,	// (0x00059b31) popup_snote2_single_text_window_t_ParamLimits

0xfc82,	// (0x00059b31) popup_snote2_single_text_window_t

0xd3bf,	// (0x0005726e) popup_snote2_single_graphic_window_g1_ParamLimits

0xd3bf,	// (0x0005726e) popup_snote2_single_graphic_window_g1

0x5d71,	// (0x0004fc20) popup_snote2_single_graphic_window_g2_ParamLimits

0x5d71,	// (0x0004fc20) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8d,	// (0x00059b3c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8d,	// (0x00059b3c) popup_snote2_single_graphic_window_g

0x5d99,	// (0x0004fc48) popup_snote2_single_graphic_window_t1_ParamLimits

0x5d99,	// (0x0004fc48) popup_snote2_single_graphic_window_t1

0x5de5,	// (0x0004fc94) popup_snote2_single_graphic_window_t2_ParamLimits

0x5de5,	// (0x0004fc94) popup_snote2_single_graphic_window_t2

0x5ca7,	// (0x0004fb56) popup_snote2_single_graphic_window_t3_ParamLimits

0x5ca7,	// (0x0004fb56) popup_snote2_single_graphic_window_t3

0x5ce8,	// (0x0004fb97) popup_snote2_single_graphic_window_t4_ParamLimits

0x5ce8,	// (0x0004fb97) popup_snote2_single_graphic_window_t4

0x5d1e,	// (0x0004fbcd) popup_snote2_single_graphic_window_t5_ParamLimits

0x5d1e,	// (0x0004fbcd) popup_snote2_single_graphic_window_t5

0x0004,

0xfc92,	// (0x00059b41) popup_snote2_single_graphic_window_t_ParamLimits

0xfc92,	// (0x00059b41) popup_snote2_single_graphic_window_t

0x4803,	// (0x0004e6b2) clock_nsta_pane_cp2_t1

0x4803,	// (0x0004e6b2) clock_nsta_pane_cp2_t2

0x0001,

0xfab9,	// (0x00059968) clock_nsta_pane_cp2_t

0xe18b,	// (0x0005803a) form_field_data_wide_pane_g1_ParamLimits

0x9e88,	// (0x00053d37) form_field_data_wide_pane_g2_ParamLimits

0x9e88,	// (0x00053d37) form_field_data_wide_pane_g2

0x9f1f,	// (0x00053dce) form_field_data_wide_pane_g3_ParamLimits

0x9f1f,	// (0x00053dce) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x00059520) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x00059520) form_field_data_wide_pane_g

0xcc7f,	// (0x00056b2e) grid_touch_3_pane_ParamLimits

0xcc7f,	// (0x00056b2e) grid_touch_3_pane

0xd3e7,	// (0x00057296) cell_touch_3_pane_ParamLimits

0xd3e7,	// (0x00057296) cell_touch_3_pane

0x4d6b,	// (0x0004ec1a) cell_touch_3_pane_g1

0x4d6b,	// (0x0004ec1a) cell_touch_3_pane_g2

0x0001,

0xfb3e,	// (0x000599ed) cell_touch_3_pane_g

0x9a01,	// (0x000538b0) cont_query_data_pane

0x9a09,	// (0x000538b8) cont_query_data_pane_cp1

0x5e5f,	// (0x0004fd0e) button_value_adjust_pane_cp7

0x5e67,	// (0x0004fd16) query_popup_pane_cp3

0xbe2f,	// (0x00055cde) bg_popup_sub_pane_cp22_ParamLimits

0xa5d9,	// (0x00054488) navi_navi_volume_pane_cp2

0xa5e8,	// (0x00054497) popup_side_volume_key_window_g2

0xa5f7,	// (0x000544a6) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x000595b6) popup_side_volume_key_window_g

0xa606,	// (0x000544b5) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x000595bd) popup_side_volume_key_window_t

0xa6dd,	// (0x0005458c) popup_side_volume_key_window_ParamLimits

0x8b8c,	// (0x00052a3b) list_double_graphic_pane_g4_ParamLimits

0x8b8c,	// (0x00052a3b) list_double_graphic_pane_g4

0xb543,	// (0x000553f2) list_single_2heading_msg_pane_ParamLimits

0xb543,	// (0x000553f2) list_single_2heading_msg_pane

0xb66a,	// (0x00055519) list_single_2heading_msg_pane_g1_ParamLimits

0xb66a,	// (0x00055519) list_single_2heading_msg_pane_g1

0xb676,	// (0x00055525) list_single_2heading_msg_pane_g2_ParamLimits

0xb676,	// (0x00055525) list_single_2heading_msg_pane_g2

0xb689,	// (0x00055538) list_single_2heading_msg_pane_g3_ParamLimits

0xb689,	// (0x00055538) list_single_2heading_msg_pane_g3

0xb695,	// (0x00055544) list_single_2heading_msg_pane_g4_ParamLimits

0xb695,	// (0x00055544) list_single_2heading_msg_pane_g4

0x0003,

0xfc9d,	// (0x00059b4c) list_single_2heading_msg_pane_g_ParamLimits

0xfc9d,	// (0x00059b4c) list_single_2heading_msg_pane_g

0x90d3,	// (0x00052f82) list_single_2heading_msg_pane_t1_ParamLimits

0x90d3,	// (0x00052f82) list_single_2heading_msg_pane_t1

0x90fb,	// (0x00052faa) list_single_2heading_msg_pane_t2_ParamLimits

0x90fb,	// (0x00052faa) list_single_2heading_msg_pane_t2

0x9166,	// (0x00053015) list_single_2heading_msg_pane_t3_ParamLimits

0x9166,	// (0x00053015) list_single_2heading_msg_pane_t3

0xf2b3,	// (0x00059162) list_single_2heading_msg_pane_t4_ParamLimits

0xf2b3,	// (0x00059162) list_single_2heading_msg_pane_t4

0x0003,

0xfca6,	// (0x00059b55) list_single_2heading_msg_pane_t_ParamLimits

0xfca6,	// (0x00059b55) list_single_2heading_msg_pane_t

0x94a1,	// (0x00053350) title_pane_g4_ParamLimits

0x94a1,	// (0x00053350) title_pane_g4

0xf37a,	// (0x00059229) title_pane_stacon_g3_ParamLimits

0xf37a,	// (0x00059229) title_pane_stacon_g3

0x5999,	// (0x0004f848) list_single_2graphic_im_pane_g4_ParamLimits

0x5999,	// (0x0004f848) list_single_2graphic_im_pane_g4

0xc7c7,	// (0x00056676) popup_side_volume_key_window_cp

0x4060,	// (0x0004df0f) main_idle_act2_pane_t1

0x0c92,	// (0x0004ab41) toolbar_button_pane_g10

0x9e1f,	// (0x00053cce) popup_toolbar_window_cp1

0x47f4,	// (0x0004e6a3) clock_nsta_pane_cp_t1

0x47f4,	// (0x0004e6a3) clock_nsta_pane_cp_t2

0x0001,

0xfab4,	// (0x00059963) clock_nsta_pane_cp_t

0xa5d9,	// (0x00054488) navi_navi_volume_pane_cp2_ParamLimits

0x003c,	// (0x00049eeb) popup_side_volume_key_window_g1_ParamLimits

0xa5e8,	// (0x00054497) popup_side_volume_key_window_g2_ParamLimits

0xa5f7,	// (0x000544a6) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x000595b6) popup_side_volume_key_window_g_ParamLimits

0x126e,	// (0x0004b11d) fep_hwr_aid_pane

0xcef3,	// (0x00056da2) bg_fep_hwr_top_pane_g4_ParamLimits

0x4dc7,	// (0x0004ec76) fep_hwr_top_pane_g1_ParamLimits

0x4dd9,	// (0x0004ec88) fep_hwr_top_pane_g2_ParamLimits

0x1327,	// (0x0004b1d6) fep_hwr_top_pane_g3_ParamLimits

0xfb09,	// (0x000599b8) fep_hwr_top_pane_g_ParamLimits

0x133c,	// (0x0004b1eb) fep_hwr_top_text_pane_ParamLimits

0x3650,	// (0x0004d4ff) aid_touch_tab_arrow_arrow_2

0x3659,	// (0x0004d508) aid_touch_tab_arrow_left_2

0x1282,	// (0x0004b131) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x12b9,	// (0x0004b168) fep_hwr_prediction_pane

0x4f32,	// (0x0004ede1) fep_vkb_prediction_pane

0xd01f,	// (0x00056ece) fep_vkb_side_pane_g3_ParamLimits

0xd01f,	// (0x00056ece) fep_vkb_side_pane_g3

0x4fdb,	// (0x0004ee8a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5490,	// (0x0004f33f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x549d,	// (0x0004f34c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb3,	// (0x00059a62) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5e8c,	// (0x0004fd3b) fep_hwr_prediction_pane_g1

0x1669,	// (0x0004b518) fep_hwr_prediction_pane_g2

0x1671,	// (0x0004b520) fep_hwr_prediction_pane_g3

0x1679,	// (0x0004b528) fep_hwr_prediction_pane_g4

0x0003,

0xfcaf,	// (0x00059b5e) fep_hwr_prediction_pane_g

0x5e8c,	// (0x0004fd3b) fep_vkb_prediction_pane_g1

0x5e96,	// (0x0004fd45) fep_vkb_prediction_pane_g2

0x5e9e,	// (0x0004fd4d) fep_vkb_prediction_pane_g3

0x5ea6,	// (0x0004fd55) fep_vkb_prediction_pane_g4

0x0003,

0xfcb8,	// (0x00059b67) fep_vkb_prediction_pane_g

0xb4d9,	// (0x00055388) slider_set_pane_g3

0xb4ed,	// (0x0005539c) slider_set_pane_g4

0xb505,	// (0x000553b4) slider_set_pane_g5

0xb4d9,	// (0x00055388) slider_set_pane_g6

0xb51b,	// (0x000553ca) slider_set_pane_g7

0x3cdc,	// (0x0004db8b) slider_form_pane_g3

0x3ce5,	// (0x0004db94) slider_form_pane_g4

0x3ced,	// (0x0004db9c) slider_form_pane_g5

0x3cdc,	// (0x0004db8b) slider_form_pane_g6

0xca65,	// (0x00056914) slider_form_pane_g7

0x430b,	// (0x0004e1ba) slider_set_pane_vc_g3

0x4314,	// (0x0004e1c3) slider_set_pane_vc_g4

0x431d,	// (0x0004e1cc) slider_set_pane_vc_g5

0x430b,	// (0x0004e1ba) slider_set_pane_vc_g6

0x4326,	// (0x0004e1d5) slider_set_pane_vc_g7

0x44d8,	// (0x0004e387) slider_form_pane_vc_g1

0x44e1,	// (0x0004e390) slider_form_pane_vc_g2

0x44ea,	// (0x0004e399) slider_form_pane_vc_g3

0x44d8,	// (0x0004e387) slider_form_pane_vc_g4

0x44f3,	// (0x0004e3a2) slider_form_pane_vc_g5

0x0004,

0xfa86,	// (0x00059935) slider_form_pane_vc_g

0x9226,	// (0x000530d5) main_idle_act3_pane

0x5eae,	// (0x0004fd5d) ai3_links_pane

0xd430,	// (0x000572df) popup_ai3_data_window_ParamLimits

0xd430,	// (0x000572df) popup_ai3_data_window

0x9226,	// (0x000530d5) grid_ai3_links_pane

0xd448,	// (0x000572f7) cell_ai3_links_pane_ParamLimits

0xd448,	// (0x000572f7) cell_ai3_links_pane

0x5ee7,	// (0x0004fd96) bg_popup_sub_pane_cp11

0x5ef4,	// (0x0004fda3) cell_ai3_links_pane_g1

0x9226,	// (0x000530d5) bg_popup_sub_pane_cp12

0x5f19,	// (0x0004fdc8) heading_ai3_data_pane

0x5f21,	// (0x0004fdd0) list_ai3_gene_pane

0x5f2d,	// (0x0004fddc) popup_ai3_data_window_g1

0x5f35,	// (0x0004fde4) heading_ai3_data_pane_g1

0x5f3d,	// (0x0004fdec) heading_ai3_data_pane_t1

0xd462,	// (0x00057311) list_double_ai3_gene_pane_ParamLimits

0xd462,	// (0x00057311) list_double_ai3_gene_pane

0x5f58,	// (0x0004fe07) list_single_ai3_gene_pane_ParamLimits

0x5f58,	// (0x0004fe07) list_single_ai3_gene_pane

0x4d30,	// (0x0004ebdf) list_highlight_pane_cp7_ParamLimits

0x4d30,	// (0x0004ebdf) list_highlight_pane_cp7

0x5f65,	// (0x0004fe14) list_single_a13_gene_pane_t1_ParamLimits

0x5f65,	// (0x0004fe14) list_single_a13_gene_pane_t1

0x5f7c,	// (0x0004fe2b) list_single_ai3_gene_pane_g1

0x5f85,	// (0x0004fe34) list_single_ai3_gene_pane_g2

0x0001,

0xfcc1,	// (0x00059b70) list_single_ai3_gene_pane_g

0x5f8d,	// (0x0004fe3c) list_double_ai3_gene_pane_g1_ParamLimits

0x5f8d,	// (0x0004fe3c) list_double_ai3_gene_pane_g1

0xd46f,	// (0x0005731e) list_double_ai3_gene_pane_t1_ParamLimits

0xd46f,	// (0x0005731e) list_double_ai3_gene_pane_t1

0x5fb5,	// (0x0004fe64) list_double_ai3_gene_pane_t2_ParamLimits

0x5fb5,	// (0x0004fe64) list_double_ai3_gene_pane_t2

0x5fca,	// (0x0004fe79) list_double_ai3_gene_pane_t3_ParamLimits

0x5fca,	// (0x0004fe79) list_double_ai3_gene_pane_t3

0x0002,

0xfcc6,	// (0x00059b75) list_double_ai3_gene_pane_t_ParamLimits

0xfcc6,	// (0x00059b75) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf2a9,	// (0x00059158) aid_size_min_col_2

0xd41a,	// (0x000572c9) aid_size_min_msg_ParamLimits

0xd41a,	// (0x000572c9) aid_size_min_msg

0xd033,	// (0x00056ee2) fep_vkb_top_text_pane_g2_ParamLimits

0xd033,	// (0x00056ee2) fep_vkb_top_text_pane_g2

0x0001,

0xfb39,	// (0x000599e8) fep_vkb_top_text_pane_g_ParamLimits

0xfb39,	// (0x000599e8) fep_vkb_top_text_pane_g

0x9226,	// (0x000530d5) main_hc_apps_shell_pane

0x5fe7,	// (0x0004fe96) grid_hc_apps_pane_ParamLimits

0x5fe7,	// (0x0004fe96) grid_hc_apps_pane

0x5ff6,	// (0x0004fea5) list_hc_apps_pane

0x5ffe,	// (0x0004fead) scroll_pane_cp37_ParamLimits

0x5ffe,	// (0x0004fead) scroll_pane_cp37

0xd48b,	// (0x0005733a) cell_hc_apps_pane_ParamLimits

0xd48b,	// (0x0005733a) cell_hc_apps_pane

0xd549,	// (0x000573f8) cell_hc_apps_pane_g1_ParamLimits

0xd549,	// (0x000573f8) cell_hc_apps_pane_g1

0x60e9,	// (0x0004ff98) cell_hc_apps_pane_g2_ParamLimits

0x60e9,	// (0x0004ff98) cell_hc_apps_pane_g2

0x6105,	// (0x0004ffb4) cell_hc_apps_pane_g3_ParamLimits

0x6105,	// (0x0004ffb4) cell_hc_apps_pane_g3

0x0002,

0xfccd,	// (0x00059b7c) cell_hc_apps_pane_g_ParamLimits

0xfccd,	// (0x00059b7c) cell_hc_apps_pane_g

0xd576,	// (0x00057425) cell_hc_apps_pane_t1_ParamLimits

0xd576,	// (0x00057425) cell_hc_apps_pane_t1

0x9925,	// (0x000537d4) grid_highlight_pane_cp10_ParamLimits

0x9925,	// (0x000537d4) grid_highlight_pane_cp10

0xd5b4,	// (0x00057463) list_single_hc_apps_pane_ParamLimits

0xd5b4,	// (0x00057463) list_single_hc_apps_pane

0xd5e4,	// (0x00057493) list_single_hc_apps_pane_g1

0xb6ad,	// (0x0005555c) list_single_hc_apps_pane_g2

0x0001,

0xfcd4,	// (0x00059b83) list_single_hc_apps_pane_g

0xb6c6,	// (0x00055575) list_single_hc_apps_pane_g2_copy1

0x91d4,	// (0x00053083) list_single_hc_apps_pane_t1

0x95bb,	// (0x0005346a) bg_set_opt_pane_cp_ParamLimits

0x95c9,	// (0x00053478) setting_slider_pane_t1_ParamLimits

0x95e2,	// (0x00053491) setting_slider_pane_t2_ParamLimits

0x95fc,	// (0x000534ab) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005940d) setting_slider_pane_t_ParamLimits

0x9614,	// (0x000534c3) slider_set_pane_ParamLimits

0x0597,	// (0x0004a446) control_pane_g5_ParamLimits

0x0597,	// (0x0004a446) control_pane_g5

0xc8e7,	// (0x00056796) slider_set_pane_g1_ParamLimits

0x0f78,	// (0x0004ae27) slider_set_pane_g2_ParamLimits

0xb4d9,	// (0x00055388) slider_set_pane_g3_ParamLimits

0xb4ed,	// (0x0005539c) slider_set_pane_g4_ParamLimits

0xb505,	// (0x000553b4) slider_set_pane_g5_ParamLimits

0xb4d9,	// (0x00055388) slider_set_pane_g6_ParamLimits

0xb51b,	// (0x000553ca) slider_set_pane_g7_ParamLimits

0xf94e,	// (0x000597fd) slider_set_pane_g_ParamLimits

0xe2a1,	// (0x00058150) navi_icon_text_pane_ParamLimits

0xb228,	// (0x000550d7) aid_fill_nsta_2_ParamLimits

0xb25f,	// (0x0005510e) aid_touch_tab_arrow_left_ParamLimits

0xb275,	// (0x00055124) aid_touch_tab_arrow_right_ParamLimits

0xb310,	// (0x000551bf) clock_nsta_pane_ParamLimits

0x3632,	// (0x0004d4e1) navi_icon_pane_g1_ParamLimits

0x363e,	// (0x0004d4ed) navi_text_pane_t1_ParamLimits

0x4904,	// (0x0004e7b3) navi_icon_text_pane_g1_ParamLimits

0x4910,	// (0x0004e7bf) navi_icon_text_pane_t1_ParamLimits

0xd5e4,	// (0x00057493) list_single_hc_apps_pane_g1_ParamLimits

0xb6ad,	// (0x0005555c) list_single_hc_apps_pane_g2_ParamLimits

0xfcd4,	// (0x00059b83) list_single_hc_apps_pane_g_ParamLimits

0xb6c6,	// (0x00055575) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x91d4,	// (0x00053083) list_single_hc_apps_pane_t1_ParamLimits

0x939a,	// (0x00053249) popup_toolbar2_fixed_window_ParamLimits

0x939a,	// (0x00053249) popup_toolbar2_fixed_window

0xb138,	// (0x00054fe7) popup_toolbar2_float_window

0x9226,	// (0x000530d5) bg_popup_sub_pane_cp27

0x61e3,	// (0x00050092) grid_toolbar2_float_pane

0x9226,	// (0x000530d5) bg_popup_sub_pane_cp26

0x61e3,	// (0x00050092) grid_toolbar2_fixed_pane

0xd5fd,	// (0x000574ac) cell_toolbar2_fixed_pane_ParamLimits

0xd5fd,	// (0x000574ac) cell_toolbar2_fixed_pane

0xd617,	// (0x000574c6) cell_toolbar2_fixed_pane_g1

0x2740,	// (0x0004c5ef) toolbar2_fixed_button_pane

0x27c0,	// (0x0004c66f) toolbar2_fixed_button_pane_g1

0x27c8,	// (0x0004c677) toolbar2_fixed_button_pane_g2

0x27d0,	// (0x0004c67f) toolbar2_fixed_button_pane_g3

0x27d8,	// (0x0004c687) toolbar2_fixed_button_pane_g4

0x27e0,	// (0x0004c68f) toolbar2_fixed_button_pane_g5

0x27e8,	// (0x0004c697) toolbar2_fixed_button_pane_g6

0x27f0,	// (0x0004c69f) toolbar2_fixed_button_pane_g7

0x27f8,	// (0x0004c6a7) toolbar2_fixed_button_pane_g8

0x2800,	// (0x0004c6af) toolbar2_fixed_button_pane_g9

0x0008,

0xf850,	// (0x000596ff) toolbar2_fixed_button_pane_g

0x6204,	// (0x000500b3) cell_toolbar2_float_pane_ParamLimits

0x6204,	// (0x000500b3) cell_toolbar2_float_pane

0x6215,	// (0x000500c4) cell_toolbar2_float_pane_g1

0x2740,	// (0x0004c5ef) toolbar2_fixed_button_pane_cp

0xcf1b,	// (0x00056dca) fep_vkb_accented_list_pane_ParamLimits

0xcf1b,	// (0x00056dca) fep_vkb_accented_list_pane

0x148a,	// (0x0004b339) bg_popup_fep_shadow_pane_g9

0xe3f3,	// (0x000582a2) bg_popup_fep_shadow_pane_cp3

0xa057,	// (0x00053f06) list_accented_list_pane

0x621e,	// (0x000500cd) list_single_accented_list_pane_ParamLimits

0x621e,	// (0x000500cd) list_single_accented_list_pane

0xe3f3,	// (0x000582a2) list_highlight_pane_cp10

0x622f,	// (0x000500de) list_single_accented_list_pane_t1

0xb062,	// (0x00054f11) popup_slider_window_ParamLimits

0xb062,	// (0x00054f11) popup_slider_window

0x5e6f,	// (0x0004fd1e) aid_indentation_list_msg

0xd708,	// (0x000575b7) bg_popup_window_pane_cp19

0x6355,	// (0x00050204) popup_slider_window_g1

0x6371,	// (0x00050220) popup_slider_window_g2

0x638d,	// (0x0005023c) popup_slider_window_g3

0x0005,

0xfcd9,	// (0x00059b88) popup_slider_window_g

0x63f3,	// (0x000502a2) popup_slider_window_t1

0x6467,	// (0x00050316) small_volume_slider_vertical_pane

0x4d6b,	// (0x0004ec1a) small_volume_slider_vertical_pane_g1

0x4d6b,	// (0x0004ec1a) small_volume_slider_vertical_pane_g2

0x6483,	// (0x00050332) small_volume_slider_vertical_pane_g3

0x0002,

0xfceb,	// (0x00059b9a) small_volume_slider_vertical_pane_g

0x92de,	// (0x0005318d) area_side_right_pane_ParamLimits

0x92de,	// (0x0005318d) area_side_right_pane

0xb6e2,	// (0x00055591) aid_size_side_button_ParamLimits

0xb6e2,	// (0x00055591) aid_size_side_button

0xb6fb,	// (0x000555aa) grid_sctrl_middle_pane_ParamLimits

0xb6fb,	// (0x000555aa) grid_sctrl_middle_pane

0x16e9,	// (0x0004b598) sctrl_sk_bottom_pane

0x16fa,	// (0x0004b5a9) sctrl_sk_top_pane

0x170c,	// (0x0004b5bb) aid_touch_sctrl_top

0x9925,	// (0x000537d4) bg_sctrl_sk_pane_ParamLimits

0x9925,	// (0x000537d4) bg_sctrl_sk_pane

0x1719,	// (0x0004b5c8) sctrl_sk_top_pane_g1

0x1726,	// (0x0004b5d5) sctrl_sk_top_pane_t1

0x170c,	// (0x0004b5bb) aid_touch_sctrl_bottom

0x9925,	// (0x000537d4) bg_sctrl_sk_pane_cp_ParamLimits

0x9925,	// (0x000537d4) bg_sctrl_sk_pane_cp

0x1741,	// (0x0004b5f0) sctrl_sk_bottom_pane_g1

0x1726,	// (0x0004b5d5) sctrl_sk_bottom_pane_t1

0xb715,	// (0x000555c4) cell_sctrl_middle_pane_ParamLimits

0xb715,	// (0x000555c4) cell_sctrl_middle_pane

0xb726,	// (0x000555d5) aid_touch_sctrl_middle_ParamLimits

0xb726,	// (0x000555d5) aid_touch_sctrl_middle

0xb733,	// (0x000555e2) bg_sctrl_middle_pane_ParamLimits

0xb733,	// (0x000555e2) bg_sctrl_middle_pane

0x650b,	// (0x000503ba) cell_sctrl_middle_pane_g1_ParamLimits

0x650b,	// (0x000503ba) cell_sctrl_middle_pane_g1

0xb741,	// (0x000555f0) cell_sctrl_middle_pane_g2_ParamLimits

0xb741,	// (0x000555f0) cell_sctrl_middle_pane_g2

0x0001,

0xfcf7,	// (0x00059ba6) cell_sctrl_middle_pane_g_ParamLimits

0xfcf7,	// (0x00059ba6) cell_sctrl_middle_pane_g

0x27c0,	// (0x0004c66f) bg_sctrl_middle_pane_g1

0x27c8,	// (0x0004c677) bg_sctrl_middle_pane_g2

0x27d0,	// (0x0004c67f) bg_sctrl_middle_pane_g3

0x27d8,	// (0x0004c687) bg_sctrl_middle_pane_g4

0x27e0,	// (0x0004c68f) bg_sctrl_middle_pane_g5

0x27e8,	// (0x0004c697) bg_sctrl_middle_pane_g6

0x27f0,	// (0x0004c69f) bg_sctrl_middle_pane_g7

0x27f8,	// (0x0004c6a7) bg_sctrl_middle_pane_g8

0x0007,

0xfcfc,	// (0x00059bab) bg_sctrl_middle_pane_g

0x2800,	// (0x0004c6af) bg_sctrl_middle_pane_g8_copy1

0x27c0,	// (0x0004c66f) bg_sctrl_sk_pane_g1

0x27c8,	// (0x0004c677) bg_sctrl_sk_pane_g2

0x27d0,	// (0x0004c67f) bg_sctrl_sk_pane_g3

0x0008,

0xf850,	// (0x000596ff) bg_sctrl_sk_pane_g

0x9de5,	// (0x00053c94) aid_size_touch_scroll_bar

0x27d8,	// (0x0004c687) bg_sctrl_sk_pane_g4

0x27e0,	// (0x0004c68f) bg_sctrl_sk_pane_g5

0x27e8,	// (0x0004c697) bg_sctrl_sk_pane_g6

0x27f0,	// (0x0004c69f) bg_sctrl_sk_pane_g7

0x27f8,	// (0x0004c6a7) bg_sctrl_sk_pane_g8

0x2800,	// (0x0004c6af) bg_sctrl_sk_pane_g9

0x074f,	// (0x0004a5fe) popup_fep_china_hwr2_fs_candidate_window

0xab02,	// (0x000549b1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xab02,	// (0x000549b1) popup_fep_china_hwr2_fs_control_window

0x4fdb,	// (0x0004ee8a) sctrl_sk_top_pane_g2

0x0001,

0xfcf2,	// (0x00059ba1) sctrl_sk_top_pane_g

0xd7c0,	// (0x0005766f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7c0,	// (0x0005766f) aid_fep_china_hwr2_fs_cell

0xd7d4,	// (0x00057683) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7d4,	// (0x00057683) bg_popup_fep_shadow_pane_cp4

0xd7eb,	// (0x0005769a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7eb,	// (0x0005769a) bg_popup_fep_shadow_pane_cp5

0xd7fd,	// (0x000576ac) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7fd,	// (0x000576ac) popup_fep_china_hwr2_fs_control_bar_grid

0xd811,	// (0x000576c0) popup_fep_china_hwr2_fs_control_funtion_grid

0x64df,	// (0x0005038e) aid_fep_china_hwr2_fs_candi_cell

0x9226,	// (0x000530d5) bg_popup_fep_shadow_pane_cp6

0x64e9,	// (0x00050398) popup_fep_china_hwr2_fs_candidate_grid

0xd819,	// (0x000576c8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd819,	// (0x000576c8) cell_fep_china_hwr2_fs_funtion_grid

0x4d6b,	// (0x0004ec1a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x650b,	// (0x000503ba) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x650b,	// (0x000503ba) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6519,	// (0x000503c8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6519,	// (0x000503c8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0d,	// (0x00059bbc) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0d,	// (0x00059bbc) cell_fep_china_hwr2_fs_funtion_grid_g

0xd831,	// (0x000576e0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd831,	// (0x000576e0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd846,	// (0x000576f5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd846,	// (0x000576f5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd12,	// (0x00059bc1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd12,	// (0x00059bc1) cell_fep_china_hwr2_fs_funtion_grid_t

0x6560,	// (0x0005040f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6568,	// (0x00050417) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6570,	// (0x0005041f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd17,	// (0x00059bc6) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6578,	// (0x00050427) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6578,	// (0x00050427) cell_fep_china_hwr2_fs_candidate_grid

0x6591,	// (0x00050440) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6599,	// (0x00050448) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4d6b,	// (0x0004ec1a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4d6b,	// (0x0004ec1a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3e,	// (0x000599ed) cell_fep_china_hwr2_fs_candidate_grid_g

0x65a1,	// (0x00050450) cell_fep_china_hwr2_fs_candidate_grid_t1

0x23b9,	// (0x0004c268) clock_nsta_pane_cp_24_ParamLimits

0x23b9,	// (0x0004c268) clock_nsta_pane_cp_24

0x2437,	// (0x0004c2e6) indicator_nsta_pane_cp_24_ParamLimits

0x2437,	// (0x0004c2e6) indicator_nsta_pane_cp_24

0x34ae,	// (0x0004d35d) heading_pane_g1

0x0001,

0xf8b5,	// (0x00059764) heading_pane_g

0x3ea9,	// (0x0004dd58) grid_sct_catagory_button_pane

0x3ed9,	// (0x0004dd88) scroll_pane_cp5_ParamLimits

0x4952,	// (0x0004e801) button_value_adjust_pane_cp5_ParamLimits

0x4952,	// (0x0004e801) button_value_adjust_pane_cp5

0x4a31,	// (0x0004e8e0) form2_midp_time_pane_ParamLimits

0x65af,	// (0x0005045e) cell_sct_catagory_button_pane_ParamLimits

0x65af,	// (0x0005045e) cell_sct_catagory_button_pane

0x4d30,	// (0x0004ebdf) bg_button_pane_cp01_ParamLimits

0x4d30,	// (0x0004ebdf) bg_button_pane_cp01

0x4d6b,	// (0x0004ec1a) cell_sct_catagory_button_pane_g1

0xb0db,	// (0x00054f8a) popup_tb_extension_window

0xd862,	// (0x00057711) aid_size_cell_ext_ParamLimits

0xd862,	// (0x00057711) aid_size_cell_ext

0x9c94,	// (0x00053b43) bg_tb_trans_pane_cp1_ParamLimits

0x9c94,	// (0x00053b43) bg_tb_trans_pane_cp1

0xd888,	// (0x00057737) grid_tb_ext_pane_ParamLimits

0xd888,	// (0x00057737) grid_tb_ext_pane

0xd8c7,	// (0x00057776) cell_tb_ext_pane_ParamLimits

0xd8c7,	// (0x00057776) cell_tb_ext_pane

0xd8ef,	// (0x0005779e) cell_tb_ext_pane_g1_ParamLimits

0xd8ef,	// (0x0005779e) cell_tb_ext_pane_g1

0x6645,	// (0x000504f4) cell_tb_ext_pane_t1

0x9925,	// (0x000537d4) list_highlight_pane_cp11_ParamLimits

0x9925,	// (0x000537d4) list_highlight_pane_cp11

0x93af,	// (0x0005325e) popup_uni_indicator_window_ParamLimits

0x93af,	// (0x0005325e) popup_uni_indicator_window

0x9f11,	// (0x00053dc0) bg_popup_sub_pane_cp14

0xd90c,	// (0x000577bb) list_uniindi_pane

0xd918,	// (0x000577c7) uniindi_top_pane

0x9925,	// (0x000537d4) bg_uniindi_top_pane

0xd937,	// (0x000577e6) uniindi_top_pane_g1

0xd94d,	// (0x000577fc) uniindi_top_pane_g2

0x0003,

0xfd1e,	// (0x00059bcd) uniindi_top_pane_g

0xd96a,	// (0x00057819) uniindi_top_pane_t1

0x66f6,	// (0x000505a5) list_single_uniindi_pane_ParamLimits

0x66f6,	// (0x000505a5) list_single_uniindi_pane

0x4d6b,	// (0x0004ec1a) bg_uniindi_top_pane_g1

0x6708,	// (0x000505b7) list_single_uniindi_pane_g1

0x671b,	// (0x000505ca) list_single_uniindi_pane_t1

0x9226,	// (0x000530d5) control_bg_pane

0x6740,	// (0x000505ef) bg_sctrl_sk_pane_cp1

0x6749,	// (0x000505f8) bg_sctrl_sk_pane_cp2

0x6752,	// (0x00050601) control_bg_pane_g1

0x675b,	// (0x0005060a) control_bg_pane_g2

0x0001,

0xfd27,	// (0x00059bd6) control_bg_pane_g

0x47a8,	// (0x0004e657) cell_indicator_nsta_pane_g1_ParamLimits

0xccba,	// (0x00056b69) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa2,	// (0x00059951) cell_indicator_nsta_pane_g_ParamLimits

0xf135,	// (0x00058fe4) form2_midp_time_pane_t1_ParamLimits

0x1260,	// (0x0004b10f) main_idle_act4_pane_ParamLimits

0x1260,	// (0x0004b10f) main_idle_act4_pane

0xb0db,	// (0x00054f8a) popup_tb_extension_window_ParamLimits

0xd8ad,	// (0x0005775c) tb_ext_find_pane_ParamLimits

0xd8ad,	// (0x0005775c) tb_ext_find_pane

0x6764,	// (0x00050613) ai_gene_pane_1_cp1

0xe474,	// (0x00058323) ai_gene_pane_2_cp1

0xd994,	// (0x00057843) list_single_idle_plugin_calendar_pane

0x6775,	// (0x00050624) list_single_idle_plugin_notification_pane

0x677e,	// (0x0005062d) list_single_idle_plugin_player_pane

0xd99d,	// (0x0005784c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd99d,	// (0x0005784c) list_single_idle_plugin_shortcut_pane

0xd9c5,	// (0x00057874) main_idle_act4_pane_t1

0xd9dc,	// (0x0005788b) main_idle_act4_pane_t2

0x0001,

0xfd2c,	// (0x00059bdb) main_idle_act4_pane_t

0xd9f3,	// (0x000578a2) middle_sk_idle_act4_pane_ParamLimits

0xd9f3,	// (0x000578a2) middle_sk_idle_act4_pane

0xda0f,	// (0x000578be) popup_clock_digital_analogue_window_cp2

0xda3b,	// (0x000578ea) shortcut_wheel_idle_act4_pane_ParamLimits

0xda3b,	// (0x000578ea) shortcut_wheel_idle_act4_pane

0x4d6b,	// (0x0004ec1a) shortcut_wheel_idle_act4_pane_g1

0x4d6b,	// (0x0004ec1a) shortcut_wheel_idle_act4_pane_g2

0x4d6b,	// (0x0004ec1a) shortcut_wheel_idle_act4_pane_g3

0x4d6b,	// (0x0004ec1a) shortcut_wheel_idle_act4_pane_g4

0x4d6b,	// (0x0004ec1a) shortcut_wheel_idle_act4_pane_g5

0x6811,	// (0x000506c0) shortcut_wheel_idle_act4_pane_g6

0x6819,	// (0x000506c8) shortcut_wheel_idle_act4_pane_g7

0x6821,	// (0x000506d0) shortcut_wheel_idle_act4_pane_g8

0x6829,	// (0x000506d8) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd31,	// (0x00059be0) shortcut_wheel_idle_act4_pane_g

0xcef3,	// (0x00056da2) middle_sk_idle_act4_pane_g1_ParamLimits

0xcef3,	// (0x00056da2) middle_sk_idle_act4_pane_g1

0xdab8,	// (0x00057967) middle_sk_idle_act4_pane_g2_ParamLimits

0xdab8,	// (0x00057967) middle_sk_idle_act4_pane_g2

0x0001,

0xfd54,	// (0x00059c03) middle_sk_idle_act4_pane_g_ParamLimits

0xfd54,	// (0x00059c03) middle_sk_idle_act4_pane_g

0xdad0,	// (0x0005797f) middle_sk_idle_act4_pane_t1_ParamLimits

0xdad0,	// (0x0005797f) middle_sk_idle_act4_pane_t1

0xdaff,	// (0x000579ae) grid_ai_shortcut_pane_ParamLimits

0xdaff,	// (0x000579ae) grid_ai_shortcut_pane

0xdb1c,	// (0x000579cb) list_highlight_pane_cp16_ParamLimits

0xdb1c,	// (0x000579cb) list_highlight_pane_cp16

0xdb29,	// (0x000579d8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb29,	// (0x000579d8) list_single_idle_plugin_shortcut_pane_g1

0xdb35,	// (0x000579e4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb35,	// (0x000579e4) list_single_idle_plugin_shortcut_pane_g2

0xdb51,	// (0x00057a00) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdb51,	// (0x00057a00) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd59,	// (0x00059c08) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd59,	// (0x00059c08) list_single_idle_plugin_shortcut_pane_g

0xdb66,	// (0x00057a15) cell_ai_shortcut_pane_ParamLimits

0xdb66,	// (0x00057a15) cell_ai_shortcut_pane

0xdb7c,	// (0x00057a2b) cell_ai_shortcut_pane_g1_ParamLimits

0xdb7c,	// (0x00057a2b) cell_ai_shortcut_pane_g1

0x6764,	// (0x00050613) ai_gene_pane_1_cp2

0x6959,	// (0x00050808) ai_gene_pane_2_cp2

0x6961,	// (0x00050810) list_highlight_pane_cp15

0xdb9e,	// (0x00057a4d) list_single_idle_plugin_calendar_pane_g1

0x6961,	// (0x00050810) list_highlight_pane_cp17

0x6972,	// (0x00050821) list_single_idle_plugin_calendar_pane_g1_copy1

0x697a,	// (0x00050829) list_single_idle_plugin_player_pane_g1

0x4102,	// (0x0004dfb1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd60,	// (0x00059c0f) list_single_idle_plugin_player_pane_g

0x6982,	// (0x00050831) list_single_idle_plugin_player_pane_t1

0x6990,	// (0x0005083f) list_single_idle_plugin_player_pane_t2

0x699e,	// (0x0005084d) list_single_idle_plugin_player_pane_t3

0x69ac,	// (0x0005085b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd65,	// (0x00059c14) list_single_idle_plugin_player_pane_t

0x69ba,	// (0x00050869) wait_bar_pane_cp15

0x69c2,	// (0x00050871) grid_ai_notification_pane

0x4102,	// (0x0004dfb1) list_single_idle_plugin_notification_pane_g1

0xdba6,	// (0x00057a55) cell_ai_notification_pane_ParamLimits

0xdba6,	// (0x00057a55) cell_ai_notification_pane

0x69d8,	// (0x00050887) cell_ai_notification_pane_g1

0x69e0,	// (0x0005088f) cell_ai_notification_pane_t1

0xdbb3,	// (0x00057a62) tb_ext_find_button_pane

0xdbbb,	// (0x00057a6a) tb_ext_find_pane_g1

0xdbc3,	// (0x00057a72) tb_ext_find_pane_t1

0xbdce,	// (0x00055c7d) tb_ext_find_button_pane_g1

0xdbd1,	// (0x00057a80) tb_ext_find_button_pane_g2

0x0001,

0xfd6e,	// (0x00059c1d) tb_ext_find_button_pane_g

0xd9c5,	// (0x00057874) main_idle_act4_pane_t1_ParamLimits

0xd9dc,	// (0x0005788b) main_idle_act4_pane_t2_ParamLimits

0xfd2c,	// (0x00059bdb) main_idle_act4_pane_t_ParamLimits

0xda0f,	// (0x000578be) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda27,	// (0x000578d6) sat_plugin_idle_act4_pane_ParamLimits

0xda27,	// (0x000578d6) sat_plugin_idle_act4_pane

0xdbda,	// (0x00057a89) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdbda,	// (0x00057a89) sat_plugin_idle_act4_pane_t1

0xdbf2,	// (0x00057aa1) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdbf2,	// (0x00057aa1) sat_plugin_idle_act4_pane_t2

0xdc0a,	// (0x00057ab9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdc0a,	// (0x00057ab9) sat_plugin_idle_act4_pane_t3

0xdc22,	// (0x00057ad1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdc22,	// (0x00057ad1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd73,	// (0x00059c22) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd73,	// (0x00059c22) sat_plugin_idle_act4_pane_t

0x932a,	// (0x000531d9) popup_battery_window_ParamLimits

0x932a,	// (0x000531d9) popup_battery_window

0x9925,	// (0x000537d4) bg_popup_sub_pane_cp25_ParamLimits

0x9925,	// (0x000537d4) bg_popup_sub_pane_cp25

0x6a61,	// (0x00050910) popup_battery_window_g1_ParamLimits

0x6a61,	// (0x00050910) popup_battery_window_g1

0x6a6d,	// (0x0005091c) popup_battery_window_t1_ParamLimits

0x6a6d,	// (0x0005091c) popup_battery_window_t1

0x6a7f,	// (0x0005092e) popup_battery_window_t2_ParamLimits

0x6a7f,	// (0x0005092e) popup_battery_window_t2

0x0001,

0xfd7c,	// (0x00059c2b) popup_battery_window_t_ParamLimits

0xfd7c,	// (0x00059c2b) popup_battery_window_t

0xa73c,	// (0x000545eb) midp_canvas_pane_ParamLimits

0xa7ae,	// (0x0005465d) midp_keypad_pane_ParamLimits

0xa7ae,	// (0x0005465d) midp_keypad_pane

0x2299,	// (0x0004c148) main_midp_pane_ParamLimits

0xccc7,	// (0x00056b76) signal_pane_g2_cp_ParamLimits

0xdc3a,	// (0x00057ae9) aid_size_cell_midp_keypad_ParamLimits

0xdc3a,	// (0x00057ae9) aid_size_cell_midp_keypad

0xdc58,	// (0x00057b07) midp_keyp_game_grid_pane_ParamLimits

0xdc58,	// (0x00057b07) midp_keyp_game_grid_pane

0xdc7f,	// (0x00057b2e) midp_keyp_rocker_pane_ParamLimits

0xdc7f,	// (0x00057b2e) midp_keyp_rocker_pane

0xdcd0,	// (0x00057b7f) midp_keyp_sk_left_pane_ParamLimits

0xdcd0,	// (0x00057b7f) midp_keyp_sk_left_pane

0xdd24,	// (0x00057bd3) midp_keyp_sk_right_pane_ParamLimits

0xdd24,	// (0x00057bd3) midp_keyp_sk_right_pane

0x9226,	// (0x000530d5) bg_button_pane_cp03

0xdd78,	// (0x00057c27) midp_keyp_sk_left_pane_g1

0x9226,	// (0x000530d5) bg_button_pane_cp04

0xdd78,	// (0x00057c27) midp_keyp_sk_right_pane_g1

0x4d6b,	// (0x0004ec1a) midp_keyp_rocker_pane_g1

0xdd81,	// (0x00057c30) keyp_game_cell_pane_ParamLimits

0xdd81,	// (0x00057c30) keyp_game_cell_pane

0x9226,	// (0x000530d5) bg_button_pane_cp02

0xdda5,	// (0x00057c54) keyp_game_cell_pane_g1

0x934a,	// (0x000531f9) popup_fep_vkb2_window_ParamLimits

0x934a,	// (0x000531f9) popup_fep_vkb2_window

0xb74d,	// (0x000555fc) aid_size_cell_vkb2_ParamLimits

0xb74d,	// (0x000555fc) aid_size_cell_vkb2

0xb78b,	// (0x0005563a) popup_fep_vkb2_window_g1_ParamLimits

0xb78b,	// (0x0005563a) popup_fep_vkb2_window_g1

0xb7db,	// (0x0005568a) vkb2_area_bottom_pane_ParamLimits

0xb7db,	// (0x0005568a) vkb2_area_bottom_pane

0xb82f,	// (0x000556de) vkb2_area_keypad_pane_ParamLimits

0xb82f,	// (0x000556de) vkb2_area_keypad_pane

0xb877,	// (0x00055726) vkb2_area_top_pane_ParamLimits

0xb877,	// (0x00055726) vkb2_area_top_pane

0xb8fd,	// (0x000557ac) vkb2_top_entry_pane_ParamLimits

0xb8fd,	// (0x000557ac) vkb2_top_entry_pane

0xb92a,	// (0x000557d9) vkb2_top_grid_left_pane_ParamLimits

0xb92a,	// (0x000557d9) vkb2_top_grid_left_pane

0xb94a,	// (0x000557f9) vkb2_top_grid_right_pane_ParamLimits

0xb94a,	// (0x000557f9) vkb2_top_grid_right_pane

0x199f,	// (0x0004b84e) vkb2_cell_keypad_pane_ParamLimits

0x199f,	// (0x0004b84e) vkb2_cell_keypad_pane

0xb990,	// (0x0005583f) vkb2_area_bottom_grid_pane_ParamLimits

0xb990,	// (0x0005583f) vkb2_area_bottom_grid_pane

0xb9ba,	// (0x00055869) vkb2_area_bottom_pane_g1_ParamLimits

0xb9ba,	// (0x00055869) vkb2_area_bottom_pane_g1

0xb9e0,	// (0x0005588f) vkb2_area_bottom_pane_g2_ParamLimits

0xb9e0,	// (0x0005588f) vkb2_area_bottom_pane_g2

0xba11,	// (0x000558c0) vkb2_area_bottom_pane_g3_ParamLimits

0xba11,	// (0x000558c0) vkb2_area_bottom_pane_g3

0x0002,

0xfd81,	// (0x00059c30) vkb2_area_bottom_pane_g_ParamLimits

0xfd81,	// (0x00059c30) vkb2_area_bottom_pane_g

0x1b49,	// (0x0004b9f8) vkb2_top_cell_left_pane_ParamLimits

0x1b49,	// (0x0004b9f8) vkb2_top_cell_left_pane

0xddae,	// (0x00057c5d) vkb2_top_entry_pane_g1_ParamLimits

0xddae,	// (0x00057c5d) vkb2_top_entry_pane_g1

0xddbc,	// (0x00057c6b) vkb2_top_entry_pane_t1_ParamLimits

0xddbc,	// (0x00057c6b) vkb2_top_entry_pane_t1

0x6c30,	// (0x00050adf) vkb2_top_entry_pane_t2_ParamLimits

0x6c30,	// (0x00050adf) vkb2_top_entry_pane_t2

0x6c62,	// (0x00050b11) vkb2_top_entry_pane_t3_ParamLimits

0x6c62,	// (0x00050b11) vkb2_top_entry_pane_t3

0x0002,

0xfd88,	// (0x00059c37) vkb2_top_entry_pane_t_ParamLimits

0xfd88,	// (0x00059c37) vkb2_top_entry_pane_t

0xba7b,	// (0x0005592a) vkb2_top_grid_right_pane_g1_ParamLimits

0xba7b,	// (0x0005592a) vkb2_top_grid_right_pane_g1

0x1bac,	// (0x0004ba5b) vkb2_top_grid_right_pane_g2_ParamLimits

0x1bac,	// (0x0004ba5b) vkb2_top_grid_right_pane_g2

0x1bc4,	// (0x0004ba73) vkb2_top_grid_right_pane_g3_ParamLimits

0x1bc4,	// (0x0004ba73) vkb2_top_grid_right_pane_g3

0xba91,	// (0x00055940) vkb2_top_grid_right_pane_g4_ParamLimits

0xba91,	// (0x00055940) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8f,	// (0x00059c3e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8f,	// (0x00059c3e) vkb2_top_grid_right_pane_g

0x1bf2,	// (0x0004baa1) vkb2_top_cell_left_pane_g1

0x1c09,	// (0x0004bab8) vkb2_cell_keypad_pane_g1_ParamLimits

0x1c09,	// (0x0004bab8) vkb2_cell_keypad_pane_g1

0x6c86,	// (0x00050b35) vkb2_cell_keypad_pane_t1_ParamLimits

0x6c86,	// (0x00050b35) vkb2_cell_keypad_pane_t1

0x1c17,	// (0x0004bac6) vkb2_cell_bottom_grid_pane_ParamLimits

0x1c17,	// (0x0004bac6) vkb2_cell_bottom_grid_pane

0x1c50,	// (0x0004baff) vkb2_cell_bottom_grid_pane_g1

0xda5c,	// (0x0005790b) aid_call2_pane_cp02

0xda64,	// (0x00057913) aid_call_pane_cp02

0xda6c,	// (0x0005791b) clock_digital_number_pane_cp10

0xda74,	// (0x00057923) clock_digital_number_pane_cp11

0xda7c,	// (0x0005792b) clock_digital_number_pane_cp12

0xda84,	// (0x00057933) clock_digital_number_pane_cp13

0xda8c,	// (0x0005793b) clock_digital_separator_pane_cp10

0xbdce,	// (0x00055c7d) popup_clock_digital_analogue_window_cp2_g1

0xbdce,	// (0x00055c7d) popup_clock_digital_analogue_window_cp2_g2

0xda94,	// (0x00057943) popup_clock_digital_analogue_window_cp2_g3

0xbdce,	// (0x00055c7d) popup_clock_digital_analogue_window_cp2_g4

0xda94,	// (0x00057943) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd44,	// (0x00059bf3) popup_clock_digital_analogue_window_cp2_g

0xda9c,	// (0x0005794b) popup_clock_digital_analogue_window_cp2_t1

0xdaaa,	// (0x00057959) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4f,	// (0x00059bfe) popup_clock_digital_analogue_window_cp2_t

0x4d6b,	// (0x0004ec1a) clock_digital_number_pane_cp10_g1

0x4d6b,	// (0x0004ec1a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3e,	// (0x000599ed) clock_digital_number_pane_cp10_g

0x4d6b,	// (0x0004ec1a) clock_digital_separator_pane_cp10_g1

0x4d6b,	// (0x0004ec1a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3e,	// (0x000599ed) clock_digital_separator_pane_cp10_g

0xd959,	// (0x00057808) uniindi_top_pane_g3

0x66bf,	// (0x0005056e) uniindi_top_pane_g4

0x1a2a,	// (0x0004b8d9) vkb2_row_keypad_pane_ParamLimits

0x1a2a,	// (0x0004b8d9) vkb2_row_keypad_pane

0x1c6c,	// (0x0004bb1b) vkb2_cell_t_keypad_pane_ParamLimits

0x1c6c,	// (0x0004bb1b) vkb2_cell_t_keypad_pane

0x1c7c,	// (0x0004bb2b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1c7c,	// (0x0004bb2b) vkb2_cell_t_keypad_pane_cp08

0x1c8f,	// (0x0004bb3e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1c8f,	// (0x0004bb3e) vkb2_cell_t_keypad_pane_cp09

0x1ca3,	// (0x0004bb52) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1ca3,	// (0x0004bb52) vkb2_cell_t_keypad_pane_cp01

0x1cb4,	// (0x0004bb63) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1cb4,	// (0x0004bb63) vkb2_cell_t_keypad_pane_cp02

0x1cc5,	// (0x0004bb74) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1cc5,	// (0x0004bb74) vkb2_cell_t_keypad_pane_cp03

0x1cd6,	// (0x0004bb85) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1cd6,	// (0x0004bb85) vkb2_cell_t_keypad_pane_cp04

0x1ce7,	// (0x0004bb96) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1ce7,	// (0x0004bb96) vkb2_cell_t_keypad_pane_cp05

0x1cf8,	// (0x0004bba7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1cf8,	// (0x0004bba7) vkb2_cell_t_keypad_pane_cp06

0x1d09,	// (0x0004bbb8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1d09,	// (0x0004bbb8) vkb2_cell_t_keypad_pane_cp07

0x1d1a,	// (0x0004bbc9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1d1a,	// (0x0004bbc9) vkb2_cell_t_keypad_pane_cp10

0x4fdb,	// (0x0004ee8a) vkb2_cell_t_keypad_pane_g1

0x6c9d,	// (0x00050b4c) vkb2_cell_t_keypad_pane_t1

0x9226,	// (0x000530d5) popup_grid_graphic2_window

0xddf5,	// (0x00057ca4) aid_size_cell_graphic2_ParamLimits

0xddf5,	// (0x00057ca4) aid_size_cell_graphic2

0xde33,	// (0x00057ce2) bg_popup_window_pane_cp21_ParamLimits

0xde33,	// (0x00057ce2) bg_popup_window_pane_cp21

0xde41,	// (0x00057cf0) graphic2_pages_pane_ParamLimits

0xde41,	// (0x00057cf0) graphic2_pages_pane

0xde97,	// (0x00057d46) grid_graphic2_control_pane_ParamLimits

0xde97,	// (0x00057d46) grid_graphic2_control_pane

0xdedf,	// (0x00057d8e) grid_graphic2_pane_ParamLimits

0xdedf,	// (0x00057d8e) grid_graphic2_pane

0xdf66,	// (0x00057e15) cell_graphic2_pane

0x9226,	// (0x000530d5) main_comp_mode_pane

0x5f21,	// (0x0004fdd0) list_ai3_gene_pane_ParamLimits

0xd708,	// (0x000575b7) bg_popup_window_pane_cp19_ParamLimits

0x62f9,	// (0x000501a8) bg_touch_area_indi_pane_ParamLimits

0x62f9,	// (0x000501a8) bg_touch_area_indi_pane

0x630f,	// (0x000501be) bg_touch_area_indi_pane_cp01_ParamLimits

0x630f,	// (0x000501be) bg_touch_area_indi_pane_cp01

0x6325,	// (0x000501d4) bg_touch_area_indi_pane_cp02_ParamLimits

0x6325,	// (0x000501d4) bg_touch_area_indi_pane_cp02

0x633b,	// (0x000501ea) bg_touch_area_indi_pane_cp03_ParamLimits

0x633b,	// (0x000501ea) bg_touch_area_indi_pane_cp03

0x6355,	// (0x00050204) popup_slider_window_g1_ParamLimits

0x6371,	// (0x00050220) popup_slider_window_g2_ParamLimits

0x638d,	// (0x0005023c) popup_slider_window_g3_ParamLimits

0xfcd9,	// (0x00059b88) popup_slider_window_g_ParamLimits

0x63f3,	// (0x000502a2) popup_slider_window_t1_ParamLimits

0x6467,	// (0x00050316) small_volume_slider_vertical_pane_ParamLimits

0xdf66,	// (0x00057e15) cell_graphic2_pane_ParamLimits

0xdfc1,	// (0x00057e70) bg_button_pane_cp10_ParamLimits

0xdfc1,	// (0x00057e70) bg_button_pane_cp10

0xdfd4,	// (0x00057e83) bg_button_pane_cp11_ParamLimits

0xdfd4,	// (0x00057e83) bg_button_pane_cp11

0xdfe7,	// (0x00057e96) graphic2_pages_pane_g1_ParamLimits

0xdfe7,	// (0x00057e96) graphic2_pages_pane_g1

0xe002,	// (0x00057eb1) graphic2_pages_pane_g2_ParamLimits

0xe002,	// (0x00057eb1) graphic2_pages_pane_g2

0x0001,

0xfd9d,	// (0x00059c4c) graphic2_pages_pane_g_ParamLimits

0xfd9d,	// (0x00059c4c) graphic2_pages_pane_g

0xe01a,	// (0x00057ec9) graphic2_pages_pane_t1_ParamLimits

0xe01a,	// (0x00057ec9) graphic2_pages_pane_t1

0xe032,	// (0x00057ee1) cell_graphic2_control_pane_ParamLimits

0xe032,	// (0x00057ee1) cell_graphic2_control_pane

0xe064,	// (0x00057f13) cell_graphic2_pane_g1_ParamLimits

0xe064,	// (0x00057f13) cell_graphic2_pane_g1

0xcf01,	// (0x00056db0) cell_graphic2_pane_g2_ParamLimits

0xcf01,	// (0x00056db0) cell_graphic2_pane_g2

0xe071,	// (0x00057f20) cell_graphic2_pane_g3_ParamLimits

0xe071,	// (0x00057f20) cell_graphic2_pane_g3

0xcf0e,	// (0x00056dbd) cell_graphic2_pane_g4_ParamLimits

0xcf0e,	// (0x00056dbd) cell_graphic2_pane_g4

0xe07e,	// (0x00057f2d) cell_graphic2_pane_g5_ParamLimits

0xe07e,	// (0x00057f2d) cell_graphic2_pane_g5

0x0004,

0xfda2,	// (0x00059c51) cell_graphic2_pane_g_ParamLimits

0xfda2,	// (0x00059c51) cell_graphic2_pane_g

0xe09e,	// (0x00057f4d) cell_graphic2_pane_t1_ParamLimits

0xe09e,	// (0x00057f4d) cell_graphic2_pane_t1

0x34a2,	// (0x0004d351) grid_highlight_pane_cp11_ParamLimits

0x34a2,	// (0x0004d351) grid_highlight_pane_cp11

0x9925,	// (0x000537d4) bg_button_pane_cp05

0xe0ea,	// (0x00057f99) cell_graphic2_control_pane_g1

0x4d6b,	// (0x0004ec1a) bg_touch_area_indi_pane_g1

0x6f79,	// (0x00050e28) aid_cmod_rocker_key_size

0x6f83,	// (0x00050e32) aid_cmode_itu_key_size

0x6f8d,	// (0x00050e3c) main_cmode_video_pane

0x6f97,	// (0x00050e46) main_comp_mode_itu_pane

0x6fa3,	// (0x00050e52) main_comp_mode_rocker_pane

0x6faf,	// (0x00050e5e) cell_cmode_rocker_pane_ParamLimits

0x6faf,	// (0x00050e5e) cell_cmode_rocker_pane

0x6fc1,	// (0x00050e70) cell_cmode_itu_pane_ParamLimits

0x6fc1,	// (0x00050e70) cell_cmode_itu_pane

0x9f11,	// (0x00053dc0) bg_button_pane_cp06_ParamLimits

0x9f11,	// (0x00053dc0) bg_button_pane_cp06

0x4fdb,	// (0x0004ee8a) cell_cmode_rocker_pane_g1_ParamLimits

0x4fdb,	// (0x0004ee8a) cell_cmode_rocker_pane_g1

0x650b,	// (0x000503ba) cell_cmode_rocker_pane_g2_ParamLimits

0x650b,	// (0x000503ba) cell_cmode_rocker_pane_g2

0x0001,

0xfdb2,	// (0x00059c61) cell_cmode_rocker_pane_g_ParamLimits

0xfdb2,	// (0x00059c61) cell_cmode_rocker_pane_g

0x9226,	// (0x000530d5) bg_button_pane_cp07

0x6fd6,	// (0x00050e85) cell_cmode_itu_pane_g1

0x6fdf,	// (0x00050e8e) cell_cmode_itu_pane_t1

0x6fed,	// (0x00050e9c) cell_cmode_itu_pane_t2

0x0001,

0xfdb7,	// (0x00059c66) cell_cmode_itu_pane_t

0x6730,	// (0x000505df) aid_touch_ctrl_left

0x6738,	// (0x000505e7) aid_touch_ctrl_right

0x9226,	// (0x000530d5) compa_mode_pane

0xe6fa,	// (0x000585a9) aid_cmod_rocker_key_size_cp

0xe704,	// (0x000585b3) aid_cmode_itu_key_size_cp

0x700f,	// (0x00050ebe) compa_mode_pane_g1

0x7017,	// (0x00050ec6) compa_mode_pane_g2

0x701f,	// (0x00050ece) compa_mode_pane_g3

0x0002,

0xfdbc,	// (0x00059c6b) compa_mode_pane_g

0xe70e,	// (0x000585bd) main_comp_mode_itu_pane_cp

0xe716,	// (0x000585c5) main_comp_mode_rocker_pane_cp

0xe71e,	// (0x000585cd) cell_cmode_itu_pane_cp_ParamLimits

0xe71e,	// (0x000585cd) cell_cmode_itu_pane_cp

0xe733,	// (0x000585e2) cell_cmode_rocker_pane_cp_ParamLimits

0xe733,	// (0x000585e2) cell_cmode_rocker_pane_cp

0x9f11,	// (0x00053dc0) bg_button_pane_cp06_cp_ParamLimits

0x9f11,	// (0x00053dc0) bg_button_pane_cp06_cp

0x4fdb,	// (0x0004ee8a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4fdb,	// (0x0004ee8a) cell_cmode_rocker_pane_g1_cp

0x4d6b,	// (0x0004ec1a) cell_cmode_rocker_pane_g2_cp

0x9226,	// (0x000530d5) bg_button_pane_cp07_cp

0xe745,	// (0x000585f4) cell_cmode_itu_pane_g1_cp

0xe74e,	// (0x000585fd) cell_cmode_itu_pane_t1_cp

0xe74e,	// (0x000585fd) cell_cmode_itu_pane_t2_cp

0xca5b,	// (0x0005690a) settings_code_pane_cp2

0x95bb,	// (0x0005346a) bg_popup_window_pane_cp3_ParamLimits

0x9b25,	// (0x000539d4) heading_pane_cp3_ParamLimits

0x9b31,	// (0x000539e0) listscroll_popup_graphic_pane_ParamLimits

0x126e,	// (0x0004b11d) fep_hwr_aid_pane_ParamLimits

0x170c,	// (0x0004b5bb) aid_touch_sctrl_top_ParamLimits

0x1719,	// (0x0004b5c8) sctrl_sk_top_pane_g1_ParamLimits

0x4fdb,	// (0x0004ee8a) sctrl_sk_top_pane_g2_ParamLimits

0xfcf2,	// (0x00059ba1) sctrl_sk_top_pane_g_ParamLimits

0x1726,	// (0x0004b5d5) sctrl_sk_top_pane_t1_ParamLimits

0x170c,	// (0x0004b5bb) aid_touch_sctrl_bottom_ParamLimits

0x1726,	// (0x0004b5d5) sctrl_sk_bottom_pane_t1_ParamLimits

0xd925,	// (0x000577d4) aid_area_touch_clock

0xb8bf,	// (0x0005576e) aid_vkb2_area_top_pane_cell_ParamLimits

0xb8bf,	// (0x0005576e) aid_vkb2_area_top_pane_cell

0xb96a,	// (0x00055819) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb96a,	// (0x00055819) aid_vkb2_area_bottom_pane_cell

0x6be8,	// (0x00050a97) popup_char_count_window

0x7075,	// (0x00050f24) popup_char_count_window_g1

0x707e,	// (0x00050f2d) popup_char_count_window_g2

0x7087,	// (0x00050f36) popup_char_count_window_g3

0x0002,

0xfdc3,	// (0x00059c72) popup_char_count_window_g

0x7090,	// (0x00050f3f) popup_char_count_window_t1

0x17c7,	// (0x0004b676) popup_fep_char_preview_window_ParamLimits

0x17c7,	// (0x0004b676) popup_fep_char_preview_window

0xb8df,	// (0x0005578e) vkb2_top_candi_pane_ParamLimits

0xb8df,	// (0x0005578e) vkb2_top_candi_pane

0xe75c,	// (0x0005860b) cell_vkb2_top_candi_pane_ParamLimits

0xe75c,	// (0x0005860b) cell_vkb2_top_candi_pane

0x2e46,	// (0x0004ccf5) bg_popup_fep_char_preview_window_ParamLimits

0x2e46,	// (0x0004ccf5) bg_popup_fep_char_preview_window

0x1d2f,	// (0x0004bbde) popup_fep_char_preview_window_t1_ParamLimits

0x1d2f,	// (0x0004bbde) popup_fep_char_preview_window_t1

0x70eb,	// (0x00050f9a) bg_popup_fep_char_preview_window_g1

0x70f3,	// (0x00050fa2) bg_popup_fep_char_preview_window_g2

0x70fb,	// (0x00050faa) bg_popup_fep_char_preview_window_g3

0x7103,	// (0x00050fb2) bg_popup_fep_char_preview_window_g4

0x710b,	// (0x00050fba) bg_popup_fep_char_preview_window_g5

0x1d69,	// (0x0004bc18) bg_popup_fep_char_preview_window_g6

0x7113,	// (0x00050fc2) bg_popup_fep_char_preview_window_g7

0x711b,	// (0x00050fca) bg_popup_fep_char_preview_window_g8

0x7123,	// (0x00050fd2) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdca,	// (0x00059c79) bg_popup_fep_char_preview_window_g

0x4fdb,	// (0x0004ee8a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4fdb,	// (0x0004ee8a) cell_vkb2_top_candi_pane_g1

0x52f2,	// (0x0004f1a1) cell_vkb2_top_candi_pane_g2_ParamLimits

0x52f2,	// (0x0004f1a1) cell_vkb2_top_candi_pane_g2

0x5313,	// (0x0004f1c2) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5313,	// (0x0004f1c2) cell_vkb2_top_candi_pane_g3

0x1d71,	// (0x0004bc20) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1d71,	// (0x0004bc20) cell_vkb2_top_candi_pane_g4

0x712b,	// (0x00050fda) cell_vkb2_top_candi_pane_g5_ParamLimits

0x712b,	// (0x00050fda) cell_vkb2_top_candi_pane_g5

0x650b,	// (0x000503ba) cell_vkb2_top_candi_pane_g6_ParamLimits

0x650b,	// (0x000503ba) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddd,	// (0x00059c8c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddd,	// (0x00059c8c) cell_vkb2_top_candi_pane_g

0x1d92,	// (0x0004bc41) cell_vkb2_top_candi_pane_t1

0xb4c5,	// (0x00055374) aid_size_touch_slider_mark_ParamLimits

0xb4c5,	// (0x00055374) aid_size_touch_slider_mark

0xde7d,	// (0x00057d2c) grid_graphic2_catg_pane_ParamLimits

0xde7d,	// (0x00057d2c) grid_graphic2_catg_pane

0xdf39,	// (0x00057de8) popup_grid_graphic2_window_t1_ParamLimits

0xdf39,	// (0x00057de8) popup_grid_graphic2_window_t1

0xdf4f,	// (0x00057dfe) popup_grid_graphic2_window_t2_ParamLimits

0xdf4f,	// (0x00057dfe) popup_grid_graphic2_window_t2

0x0001,

0xfd98,	// (0x00059c47) popup_grid_graphic2_window_t_ParamLimits

0xfd98,	// (0x00059c47) popup_grid_graphic2_window_t

0x9925,	// (0x000537d4) bg_button_pane_cp05_ParamLimits

0xe0ea,	// (0x00057f99) cell_graphic2_control_pane_g1_ParamLimits

0xe7c2,	// (0x00058671) cell_graphic2_catg_pane_ParamLimits

0xe7c2,	// (0x00058671) cell_graphic2_catg_pane

0x9226,	// (0x000530d5) bg_button_pane_cp12

0xe7d4,	// (0x00058683) cell_graphic2_catg_pane_g1

0x6645,	// (0x000504f4) cell_tb_ext_pane_t1_ParamLimits

0x1b69,	// (0x0004ba18) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1b69,	// (0x0004ba18) vkb2_top_cell_right_narrow_pane

0x1b81,	// (0x0004ba30) vkb2_top_cell_right_wide_pane_ParamLimits

0x1b81,	// (0x0004ba30) vkb2_top_cell_right_wide_pane

0x1260,	// (0x0004b10f) bg_vkb2_func_pane_ParamLimits

0x1260,	// (0x0004b10f) bg_vkb2_func_pane

0x1bf2,	// (0x0004baa1) vkb2_top_cell_left_pane_g1_ParamLimits

0x1260,	// (0x0004b10f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1260,	// (0x0004b10f) bg_vkb2_fuc_pane_cp03

0x1c50,	// (0x0004baff) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x27c8,	// (0x0004c677) bg_vkb2_func_pane_g1

0x27d0,	// (0x0004c67f) bg_vkb2_func_pane_g2

0x27e0,	// (0x0004c68f) bg_vkb2_func_pane_g3

0x27d8,	// (0x0004c687) bg_vkb2_func_pane_g4

0x27e8,	// (0x0004c697) bg_vkb2_func_pane_g5

0x27f0,	// (0x0004c69f) bg_vkb2_func_pane_g6

0x27f8,	// (0x0004c6a7) bg_vkb2_func_pane_g7

0x2800,	// (0x0004c6af) bg_vkb2_func_pane_g8

0x27c0,	// (0x0004c66f) bg_vkb2_func_pane_g9

0x0008,

0xfdea,	// (0x00059c99) bg_vkb2_func_pane_g

0x1260,	// (0x0004b10f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1260,	// (0x0004b10f) bg_vkb2_fuc_pane_cp01

0x1bf2,	// (0x0004baa1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1bf2,	// (0x0004baa1) vkb2_top_cell_right_wide_pane_g1

0x1260,	// (0x0004b10f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1260,	// (0x0004b10f) bg_vkb2_fuc_pane_cp02

0x1c50,	// (0x0004baff) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1c50,	// (0x0004baff) vkb2_top_cell_right_narrow_pane_g1

0xd64a,	// (0x000574f9) aid_touch_area_decrease_ParamLimits

0xd64a,	// (0x000574f9) aid_touch_area_decrease

0xd684,	// (0x00057533) aid_touch_area_increase_ParamLimits

0xd684,	// (0x00057533) aid_touch_area_increase

0xd6ac,	// (0x0005755b) aid_touch_area_mute_ParamLimits

0xd6ac,	// (0x0005755b) aid_touch_area_mute

0xd6d4,	// (0x00057583) aid_touch_area_slider_ParamLimits

0xd6d4,	// (0x00057583) aid_touch_area_slider

0xd714,	// (0x000575c3) popup_slider_window_g4_ParamLimits

0xd714,	// (0x000575c3) popup_slider_window_g4

0xd73c,	// (0x000575eb) popup_slider_window_g5_ParamLimits

0xd73c,	// (0x000575eb) popup_slider_window_g5

0xd770,	// (0x0005761f) popup_slider_window_g6_ParamLimits

0xd770,	// (0x0005761f) popup_slider_window_g6

0x6421,	// (0x000502d0) popup_slider_window_t2_ParamLimits

0x6421,	// (0x000502d0) popup_slider_window_t2

0x0001,

0xfce6,	// (0x00059b95) popup_slider_window_t_ParamLimits

0xfce6,	// (0x00059b95) popup_slider_window_t

0xd78c,	// (0x0005763b) slider_pane_ParamLimits

0xd78c,	// (0x0005763b) slider_pane

0x7167,	// (0x00051016) slider_pane_g1_ParamLimits

0x7167,	// (0x00051016) slider_pane_g1

0x717b,	// (0x0005102a) slider_pane_g2_ParamLimits

0x717b,	// (0x0005102a) slider_pane_g2

0x7191,	// (0x00051040) slider_pane_g3_ParamLimits

0x7191,	// (0x00051040) slider_pane_g3

0x0003,

0xfdfd,	// (0x00059cac) slider_pane_g_ParamLimits

0xfdfd,	// (0x00059cac) slider_pane_g

0xb123,	// (0x00054fd2) popup_tb_float_extension_window_ParamLimits

0xb123,	// (0x00054fd2) popup_tb_float_extension_window

0x71bd,	// (0x0005106c) aid_size_cell_tb_float_ext

0x9226,	// (0x000530d5) bg_popup_sub_window_cp28

0xe7dd,	// (0x0005868c) grid_tb_float_ext_pane

0xe7e7,	// (0x00058696) cell_tb_float_ext_pane_ParamLimits

0xe7e7,	// (0x00058696) cell_tb_float_ext_pane

0xe801,	// (0x000586b0) cell_tb_float_ext_pane_g1

0xe80a,	// (0x000586b9) grid_highlight_pane_cp12

0xb5dd,	// (0x0005548c) cell_last_hwr_side_pane_ParamLimits

0xb5dd,	// (0x0005548c) cell_last_hwr_side_pane

0x4d6b,	// (0x0004ec1a) cell_last_hwr_side_pane_g1

0x71ff,	// (0x000510ae) cell_last_hwr_side_pane_g2

0x0001,

0xfe06,	// (0x00059cb5) cell_last_hwr_side_pane_g

0xba46,	// (0x000558f5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xba46,	// (0x000558f5) vkb2_area_bottom_space_btn_pane

0x4fdb,	// (0x0004ee8a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6c9d,	// (0x00050b4c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1d92,	// (0x0004bc41) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1db1,	// (0x0004bc60) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1db1,	// (0x0004bc60) vkb2_area_bottom_space_btn_pane_g1

0x1deb,	// (0x0004bc9a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1deb,	// (0x0004bc9a) vkb2_area_bottom_space_btn_pane_g2

0x1e21,	// (0x0004bcd0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1e21,	// (0x0004bcd0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0b,	// (0x00059cba) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0b,	// (0x00059cba) vkb2_area_bottom_space_btn_pane_g

0x1315,	// (0x0004b1c4) cel_fep_hwr_func_pane_ParamLimits

0x1315,	// (0x0004b1c4) cel_fep_hwr_func_pane

0xb5b2,	// (0x00055461) cell_hwr_side_button_pane_ParamLimits

0xb5b2,	// (0x00055461) cell_hwr_side_button_pane

0xd925,	// (0x000577d4) aid_area_touch_clock_ParamLimits

0x9925,	// (0x000537d4) bg_uniindi_top_pane_ParamLimits

0xd937,	// (0x000577e6) uniindi_top_pane_g1_ParamLimits

0xd94d,	// (0x000577fc) uniindi_top_pane_g2_ParamLimits

0xd959,	// (0x00057808) uniindi_top_pane_g3_ParamLimits

0x66bf,	// (0x0005056e) uniindi_top_pane_g4_ParamLimits

0xfd1e,	// (0x00059bcd) uniindi_top_pane_g_ParamLimits

0xd96a,	// (0x00057819) uniindi_top_pane_t1_ParamLimits

0x9925,	// (0x000537d4) bg_vkb2_func_pane_cp01_ParamLimits

0x9925,	// (0x000537d4) bg_vkb2_func_pane_cp01

0x7208,	// (0x000510b7) cel_fep_hwr_func_pane_g1_ParamLimits

0x7208,	// (0x000510b7) cel_fep_hwr_func_pane_g1

0x9925,	// (0x000537d4) bg_vkb2_func_pane_cp02_ParamLimits

0x9925,	// (0x000537d4) bg_vkb2_func_pane_cp02

0x7208,	// (0x000510b7) cell_hwr_side_button_pane_g1_ParamLimits

0x7208,	// (0x000510b7) cell_hwr_side_button_pane_g1

0x2644,	// (0x0004c4f3) status_pane_g4_ParamLimits

0x2644,	// (0x0004c4f3) status_pane_g4

0x265e,	// (0x0004c50d) status_pane_t1

0x4a9a,	// (0x0004e949) form2_midp_gauge_slider_cont_pane

0x4aa2,	// (0x0004e951) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcdf0,	// (0x00056c9f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xce02,	// (0x00056cb1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf1,	// (0x000599a0) form2_midp_gauge_slider_pane_t_ParamLimits

0x4ad8,	// (0x0004e987) form2_midp_slider_pane_ParamLimits

0x1787,	// (0x0004b636) aid_size_cell_func_vkb2_ParamLimits

0x1787,	// (0x0004b636) aid_size_cell_func_vkb2

0x71a9,	// (0x00051058) slider_pane_g4_ParamLimits

0x71a9,	// (0x00051058) slider_pane_g4

0xbaa7,	// (0x00055956) form2_midp_gauge_slider_pane_t2_cp01

0xbab5,	// (0x00055964) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbab5,	// (0x00055964) form2_midp_gauge_slider_pane_t3_cp01

0x1e96,	// (0x0004bd45) form2_midp_slider_pane_cp01

0x9226,	// (0x000530d5) navi_smil_pane

0x7241,	// (0x000510f0) navi_smil_pane_g1

0x7249,	// (0x000510f8) navi_smil_pane_t1

0x7216,	// (0x000510c5) form2_midp_slider_pane_g1

0x721f,	// (0x000510ce) form2_midp_slider_pane_g2

0x7227,	// (0x000510d6) form2_midp_slider_pane_g3

0x7216,	// (0x000510c5) form2_midp_slider_pane_g4

0xe813,	// (0x000586c2) form2_midp_slider_pane_g5

0x0004,

0xfe14,	// (0x00059cc3) form2_midp_slider_pane_g

0x1e5b,	// (0x0004bd0a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1e5b,	// (0x0004bd0a) vkb2_area_bottom_space_btn_pane_g4

0xb35b,	// (0x0005520a) lc0_navi_pane_ParamLimits

0xb35b,	// (0x0005520a) lc0_navi_pane

0xc024,	// (0x00055ed3) lc0_stat_indi_pane_ParamLimits

0xc024,	// (0x00055ed3) lc0_stat_indi_pane

0xc039,	// (0x00055ee8) ls0_title_pane_ParamLimits

0xc039,	// (0x00055ee8) ls0_title_pane

0x9f11,	// (0x00053dc0) bg_popup_sub_pane_cp14_ParamLimits

0xd90c,	// (0x000577bb) list_uniindi_pane_ParamLimits

0xd918,	// (0x000577c7) uniindi_top_pane_ParamLimits

0x6708,	// (0x000505b7) list_single_uniindi_pane_g1_ParamLimits

0x671b,	// (0x000505ca) list_single_uniindi_pane_t1_ParamLimits

0xbad2,	// (0x00055981) lc0_stat_clock_pane_ParamLimits

0xbad2,	// (0x00055981) lc0_stat_clock_pane

0xe81e,	// (0x000586cd) lc0_stat_indi_pane_g1_ParamLimits

0xe81e,	// (0x000586cd) lc0_stat_indi_pane_g1

0xe82b,	// (0x000586da) lc0_stat_indi_pane_g2_ParamLimits

0xe82b,	// (0x000586da) lc0_stat_indi_pane_g2

0x0001,

0xfe1f,	// (0x00059cce) lc0_stat_indi_pane_g_ParamLimits

0xfe1f,	// (0x00059cce) lc0_stat_indi_pane_g

0xbae2,	// (0x00055991) lc0_uni_indicator_pane_ParamLimits

0xbae2,	// (0x00055991) lc0_uni_indicator_pane

0xe838,	// (0x000586e7) ls0_title_pane_g1_ParamLimits

0xe838,	// (0x000586e7) ls0_title_pane_g1

0xe84c,	// (0x000586fb) ls0_title_pane_t1_ParamLimits

0xe84c,	// (0x000586fb) ls0_title_pane_t1

0xbaf2,	// (0x000559a1) lc0_uni_indicator_pane_g1_ParamLimits

0xbaf2,	// (0x000559a1) lc0_uni_indicator_pane_g1

0x72bb,	// (0x0005116a) lc0_stat_clock_pane_t1

0x9226,	// (0x000530d5) main_ai5_pane

0x72c9,	// (0x00051178) ai5_sk_pane_ParamLimits

0x72c9,	// (0x00051178) ai5_sk_pane

0xe87a,	// (0x00058729) cell_ai5_widget_pane_ParamLimits

0xe87a,	// (0x00058729) cell_ai5_widget_pane

0x7391,	// (0x00051240) aid_size_cell_widget_grid

0x739f,	// (0x0005124e) bg_ai5_widget_pane_ParamLimits

0x739f,	// (0x0005124e) bg_ai5_widget_pane

0x7417,	// (0x000512c6) cell_ai5_widget_pane_g2

0x742b,	// (0x000512da) cell_ai5_widget_pane_g3

0x7445,	// (0x000512f4) cell_ai5_widget_pane_g4

0x7455,	// (0x00051304) cell_ai5_widget_pane_g5

0x7465,	// (0x00051314) cell_ai5_widget_pane_g6

0x7471,	// (0x00051320) cell_ai5_widget_pane_g7

0x74b9,	// (0x00051368) cell_ai5_widget_pane_t1_ParamLimits

0x74b9,	// (0x00051368) cell_ai5_widget_pane_t1

0x74d6,	// (0x00051385) cell_ai5_widget_pane_t2_ParamLimits

0x74d6,	// (0x00051385) cell_ai5_widget_pane_t2

0x74ee,	// (0x0005139d) cell_ai5_widget_pane_t3_ParamLimits

0x74ee,	// (0x0005139d) cell_ai5_widget_pane_t3

0x7506,	// (0x000513b5) cell_ai5_widget_pane_t4_ParamLimits

0x7506,	// (0x000513b5) cell_ai5_widget_pane_t4

0x752c,	// (0x000513db) cell_ai5_widget_pane_t5_ParamLimits

0x752c,	// (0x000513db) cell_ai5_widget_pane_t5

0x754c,	// (0x000513fb) cell_ai5_widget_pane_t6_ParamLimits

0x754c,	// (0x000513fb) cell_ai5_widget_pane_t6

0x755e,	// (0x0005140d) cell_ai5_widget_pane_t7_ParamLimits

0x755e,	// (0x0005140d) cell_ai5_widget_pane_t7

0x7577,	// (0x00051426) cell_ai5_widget_pane_t8_ParamLimits

0x7577,	// (0x00051426) cell_ai5_widget_pane_t8

0x0009,

0xfe39,	// (0x00059ce8) cell_ai5_widget_pane_t_ParamLimits

0xfe39,	// (0x00059ce8) cell_ai5_widget_pane_t

0x75d6,	// (0x00051485) grid_ai5_widget_pane

0x9f11,	// (0x00053dc0) highlight_cell_ai5_widget_pane_ParamLimits

0x9f11,	// (0x00053dc0) highlight_cell_ai5_widget_pane

0xe8e0,	// (0x0005878f) ai5_sk_left_pane

0xe8ea,	// (0x00058799) ai5_sk_middle_pane

0xe8f4,	// (0x000587a3) ai5_sk_right_pane

0x7602,	// (0x000514b1) bg_ai5_widget_pane_g1_ParamLimits

0x7602,	// (0x000514b1) bg_ai5_widget_pane_g1

0x760e,	// (0x000514bd) bg_ai5_widget_pane_g2_ParamLimits

0x760e,	// (0x000514bd) bg_ai5_widget_pane_g2

0x761a,	// (0x000514c9) bg_ai5_widget_pane_g3_ParamLimits

0x761a,	// (0x000514c9) bg_ai5_widget_pane_g3

0x7626,	// (0x000514d5) bg_ai5_widget_pane_g4_ParamLimits

0x7626,	// (0x000514d5) bg_ai5_widget_pane_g4

0x7632,	// (0x000514e1) bg_ai5_widget_pane_g5_ParamLimits

0x7632,	// (0x000514e1) bg_ai5_widget_pane_g5

0x763e,	// (0x000514ed) bg_ai5_widget_pane_g6_ParamLimits

0x763e,	// (0x000514ed) bg_ai5_widget_pane_g6

0x764a,	// (0x000514f9) bg_ai5_widget_pane_g7_ParamLimits

0x764a,	// (0x000514f9) bg_ai5_widget_pane_g7

0x7656,	// (0x00051505) bg_ai5_widget_pane_g8_ParamLimits

0x7656,	// (0x00051505) bg_ai5_widget_pane_g8

0x7662,	// (0x00051511) bg_ai5_widget_pane_g9_ParamLimits

0x7662,	// (0x00051511) bg_ai5_widget_pane_g9

0x0008,

0xfe4e,	// (0x00059cfd) bg_ai5_widget_pane_g_ParamLimits

0xfe4e,	// (0x00059cfd) bg_ai5_widget_pane_g

0x7694,	// (0x00051543) cell_shortcut_ai5_widget_pane_ParamLimits

0x7694,	// (0x00051543) cell_shortcut_ai5_widget_pane

0xe3f3,	// (0x000582a2) bg_cell_shortcut_ai5_widget_pane

0x76a5,	// (0x00051554) cell_grid_ai5_widget_pane_g1

0xe3f3,	// (0x000582a2) highlight_cell_shortcut_ai5_widget_pane

0x27d0,	// (0x0004c67f) ai5_sk_left_pane_g1

0x76ae,	// (0x0005155d) ai5_sk_left_pane_g2

0x76b6,	// (0x00051565) ai5_sk_left_pane_g3

0x76be,	// (0x0005156d) ai5_sk_left_pane_g4

0x0003,

0xfe61,	// (0x00059d10) ai5_sk_left_pane_g

0x76c6,	// (0x00051575) ai5_sk_left_pane_t1

0x27c8,	// (0x0004c677) ai5_sk_right_pane_g1

0x76d4,	// (0x00051583) ai5_sk_right_pane_g2

0x76dc,	// (0x0005158b) ai5_sk_right_pane_g3

0x76e4,	// (0x00051593) ai5_sk_right_pane_g4

0x0003,

0xfe6a,	// (0x00059d19) ai5_sk_right_pane_g

0x76ec,	// (0x0005159b) ai5_sk_right_pane_t1

0x27c8,	// (0x0004c677) ai5_sk_middle_pane_g1

0x27d0,	// (0x0004c67f) ai5_sk_middle_pane_g2

0x27e8,	// (0x0004c697) ai5_sk_middle_pane_g3

0x76dc,	// (0x0005158b) ai5_sk_middle_pane_g4

0x76b6,	// (0x00051565) ai5_sk_middle_pane_g5

0x76fa,	// (0x000515a9) ai5_sk_middle_pane_g6

0xe8fe,	// (0x000587ad) ai5_sk_middle_pane_g7

0x0006,

0xfe73,	// (0x00059d22) ai5_sk_middle_pane_g

0xb247,	// (0x000550f6) aid_touch_area_size_lc0_ParamLimits

0xb247,	// (0x000550f6) aid_touch_area_size_lc0

0x14a0,	// (0x0004b34f) cell_hwr_candidate_pane_t1_ParamLimits

0x2315,	// (0x0004c1c4) aid_touch_navi_pane

0xc132,	// (0x00055fe1) status_dt_navi_pane_ParamLimits

0xc132,	// (0x00055fe1) status_dt_navi_pane

0xc14a,	// (0x00055ff9) status_dt_sta_pane_ParamLimits

0xc14a,	// (0x00055ff9) status_dt_sta_pane

0xe906,	// (0x000587b5) dt_sta_controll_pane

0xe913,	// (0x000587c2) dt_sta_indi_pane

0xe920,	// (0x000587cf) dt_sta_title_pane

0x9925,	// (0x000537d4) bg_dt_sta_indi_pane_ParamLimits

0x9925,	// (0x000537d4) bg_dt_sta_indi_pane

0xe932,	// (0x000587e1) dt_sta_battery_pane

0xe93a,	// (0x000587e9) dt_sta_indi_pane_g1

0x774c,	// (0x000515fb) dt_sta_indi_pane_g2

0x7755,	// (0x00051604) dt_sta_indi_pane_g3

0x0002,

0xfe82,	// (0x00059d31) dt_sta_indi_pane_g

0x775e,	// (0x0005160d) dt_sta_signal_pane

0x9f11,	// (0x00053dc0) bg_dt_sta_title_pane_ParamLimits

0x9f11,	// (0x00053dc0) bg_dt_sta_title_pane

0x3602,	// (0x0004d4b1) dt_sta_title_pane_g1

0xe943,	// (0x000587f2) dt_sta_title_pane_t1_ParamLimits

0xe943,	// (0x000587f2) dt_sta_title_pane_t1

0x9226,	// (0x000530d5) bg_dt_sta_control_pane

0xe958,	// (0x00058807) dt_sta_controll_pane_g1

0xe961,	// (0x00058810) bg_dt_sta_title_pane_g1

0xe96a,	// (0x00058819) bg_dt_sta_title_pane_g2

0xe973,	// (0x00058822) bg_dt_sta_title_pane_g3

0x0002,

0xfe89,	// (0x00059d38) bg_dt_sta_title_pane_g

0x4d6b,	// (0x0004ec1a) bg_dt_sta_indi_pane_g1

0x77a0,	// (0x0005164f) dt_sta_signal_pane_g1

0x77a8,	// (0x00051657) dt_sta_signal_pane_g2

0x0001,

0xfe90,	// (0x00059d3f) dt_sta_signal_pane_g

0x77b0,	// (0x0005165f) dt_sta_battery_pane_g1

0x77b9,	// (0x00051668) dt_sta_battery_pane_t1

0x4d6b,	// (0x0004ec1a) bg_dt_sta_control_pane_g1

0xbe51,	// (0x00055d00) fep_china_uni_eep_pane

0xbe59,	// (0x00055d08) fep_china_uni_entry_pane_ParamLimits

0xbe69,	// (0x00055d18) popup_fep_china_uni_window_g1_ParamLimits

0xbe79,	// (0x00055d28) popup_fep_china_uni_window_g2_ParamLimits

0xbe79,	// (0x00055d28) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x000595c2) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x000595c2) popup_fep_china_uni_window_g

0x77c8,	// (0x00051677) fep_china_uni_eep_pane_g1

0x77d0,	// (0x0005167f) fep_china_uni_eep_pane_t1

0x7238,	// (0x000510e7) aid_touch_area_size_smil_player

0x246b,	// (0x0004c31a) lc0_clock_pane

0x2652,	// (0x0004c501) status_pane_g5_ParamLimits

0x2652,	// (0x0004c501) status_pane_g5

0xac59,	// (0x00054b08) popup_keymap_window

0x2610,	// (0x0004c4bf) status_icon_pane

0x742b,	// (0x000512da) cell_ai5_widget_pane_g3_ParamLimits

0x7445,	// (0x000512f4) cell_ai5_widget_pane_g4_ParamLimits

0x7455,	// (0x00051304) cell_ai5_widget_pane_g5_ParamLimits

0x747d,	// (0x0005132c) cell_ai5_widget_pane_g8_ParamLimits

0x747d,	// (0x0005132c) cell_ai5_widget_pane_g8

0x7491,	// (0x00051340) cell_ai5_widget_pane_g9_ParamLimits

0x7491,	// (0x00051340) cell_ai5_widget_pane_g9

0x74a5,	// (0x00051354) cell_ai5_widget_pane_g10_ParamLimits

0x74a5,	// (0x00051354) cell_ai5_widget_pane_g10

0x77df,	// (0x0005168e) status_icon_pane_g1

0x9226,	// (0x000530d5) bg_popup_sub_pane_cp13

0x77e7,	// (0x00051696) popup_keymap_window_t1

0xa919,	// (0x000547c8) control_pane_g6_ParamLimits

0xa919,	// (0x000547c8) control_pane_g6

0xa926,	// (0x000547d5) control_pane_g7_ParamLimits

0xa926,	// (0x000547d5) control_pane_g7

0xa933,	// (0x000547e2) control_pane_g8_ParamLimits

0xa933,	// (0x000547e2) control_pane_g8

0xe906,	// (0x000587b5) dt_sta_controll_pane_ParamLimits

0xe913,	// (0x000587c2) dt_sta_indi_pane_ParamLimits

0xe920,	// (0x000587cf) dt_sta_title_pane_ParamLimits

0x9dee,	// (0x00053c9d) aid_size_touch_scroll_bar_cale

0x933e,	// (0x000531ed) popup_discreet_window_ParamLimits

0x933e,	// (0x000531ed) popup_discreet_window

0x9390,	// (0x0005323f) popup_sk_window

0x2e46,	// (0x0004ccf5) bg_popup_sub_pane_cp28_ParamLimits

0x2e46,	// (0x0004ccf5) bg_popup_sub_pane_cp28

0x77f5,	// (0x000516a4) popup_discreet_window_g1_ParamLimits

0x77f5,	// (0x000516a4) popup_discreet_window_g1

0xe97c,	// (0x0005882b) popup_discreet_window_t1_ParamLimits

0xe97c,	// (0x0005882b) popup_discreet_window_t1

0x7833,	// (0x000516e2) popup_discreet_window_t2_ParamLimits

0x7833,	// (0x000516e2) popup_discreet_window_t2

0x0002,

0xfe95,	// (0x00059d44) popup_discreet_window_t_ParamLimits

0xfe95,	// (0x00059d44) popup_discreet_window_t

0x1ecd,	// (0x0004bd7c) popup_sk_window_g1

0x1ed7,	// (0x0004bd86) popup_sk_window_g2

0x0001,

0xfe9c,	// (0x00059d4b) popup_sk_window_g

0xbb1d,	// (0x000559cc) popup_sk_window_t1

0xbb2b,	// (0x000559da) popup_sk_window_t1_copy1

0x7417,	// (0x000512c6) cell_ai5_widget_pane_g2_ParamLimits

0x7589,	// (0x00051438) cell_ai5_widget_pane_t9_ParamLimits

0x7589,	// (0x00051438) cell_ai5_widget_pane_t9

0x9226,	// (0x000530d5) main_fep_fshwr2_pane

0xbb39,	// (0x000559e8) aid_fshwr2_btn_pane

0xbb4d,	// (0x000559fc) aid_fshwr2_syb_pane

0xbb61,	// (0x00055a10) aid_fshwr2_txt_pane

0xbb71,	// (0x00055a20) fshwr2_func_candi_pane

0xbb91,	// (0x00055a40) fshwr2_hwr_syb_pane

0xbbb3,	// (0x00055a62) fshwr2_icf_pane

0x9226,	// (0x000530d5) fshwr2_icf_bg_pane

0x1f89,	// (0x0004be38) fshwr2_icf_pane_t1_ParamLimits

0x1f89,	// (0x0004be38) fshwr2_icf_pane_t1

0xbdce,	// (0x00055c7d) fshwr2_func_candi_pane_g1

0xe99a,	// (0x00058849) fshwr2_func_candi_row_pane_ParamLimits

0xe99a,	// (0x00058849) fshwr2_func_candi_row_pane

0xbbe3,	// (0x00055a92) cell_fshwr2_syb_pane_ParamLimits

0xbbe3,	// (0x00055a92) cell_fshwr2_syb_pane

0x7208,	// (0x000510b7) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7208,	// (0x000510b7) fshwr2_hwr_syb_pane_g1

0x9226,	// (0x000530d5) bg_popup_call_pane_cp01

0xbc09,	// (0x00055ab8) fshwr2_func_candi_cell_pane_ParamLimits

0xbc09,	// (0x00055ab8) fshwr2_func_candi_cell_pane

0x2c2f,	// (0x0004cade) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2c2f,	// (0x0004cade) fshwr2_func_candi_cell_bg_pane

0xbc54,	// (0x00055b03) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbc54,	// (0x00055b03) fshwr2_func_candi_cell_pane_g1

0xbc8b,	// (0x00055b3a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbc8b,	// (0x00055b3a) fshwr2_func_candi_cell_pane_t1

0x9226,	// (0x000530d5) bg_button_pane_cp08

0x78ac,	// (0x0005175b) cell_fshwr2_syb_bg_pane

0xbca6,	// (0x00055b55) cell_fshwr2_syb_bg_pane_g1

0xbcb9,	// (0x00055b68) cell_fshwr2_syb_bg_pane_t1

0x9f11,	// (0x00053dc0) main_tmo_pane

0xc80d,	// (0x000566bc) uni_indicator_pane_g1_ParamLimits

0xc823,	// (0x000566d2) uni_indicator_pane_g2_ParamLimits

0xc839,	// (0x000566e8) uni_indicator_pane_g3_ParamLimits

0x396f,	// (0x0004d81e) uni_indicator_pane_g4_ParamLimits

0x396f,	// (0x0004d81e) uni_indicator_pane_g4

0x3983,	// (0x0004d832) uni_indicator_pane_g5_ParamLimits

0x3983,	// (0x0004d832) uni_indicator_pane_g5

0x3983,	// (0x0004d832) uni_indicator_pane_g6_ParamLimits

0x3983,	// (0x0004d832) uni_indicator_pane_g6

0xf90b,	// (0x000597ba) uni_indicator_pane_g_ParamLimits

0xd62c,	// (0x000574db) popup_tmo_note_window_ParamLimits

0xd62c,	// (0x000574db) popup_tmo_note_window

0x9f11,	// (0x00053dc0) fshwr2_bg_pane

0xbc7c,	// (0x00055b2b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbc7c,	// (0x00055b2b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea1,	// (0x00059d50) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea1,	// (0x00059d50) fshwr2_func_candi_cell_pane_g

0x4d6b,	// (0x0004ec1a) bg_popup_window_pane_cp01

0x2075,	// (0x0004bf24) bg_popup_window_pane_g1_cp01

0x78b8,	// (0x00051767) bg_popup_window_pane_cp22_ParamLimits

0x78b8,	// (0x00051767) bg_popup_window_pane_cp22

0xe9bd,	// (0x0005886c) listscroll_tmo_link_pane_ParamLimits

0xe9bd,	// (0x0005886c) listscroll_tmo_link_pane

0x7906,	// (0x000517b5) popup_tmo_note_window_g1_ParamLimits

0x7906,	// (0x000517b5) popup_tmo_note_window_g1

0xe9fd,	// (0x000588ac) tmo_note_info_pane_ParamLimits

0xe9fd,	// (0x000588ac) tmo_note_info_pane

0xea17,	// (0x000588c6) list_tmo_note_info_pane_g1_ParamLimits

0xea17,	// (0x000588c6) list_tmo_note_info_pane_g1

0x7944,	// (0x000517f3) list_tmo_note_info_pane_g2_ParamLimits

0x7944,	// (0x000517f3) list_tmo_note_info_pane_g2

0x0001,

0xfea6,	// (0x00059d55) list_tmo_note_info_pane_g_ParamLimits

0xfea6,	// (0x00059d55) list_tmo_note_info_pane_g

0x7960,	// (0x0005180f) list_tmo_note_info_text_pane_ParamLimits

0x7960,	// (0x0005180f) list_tmo_note_info_text_pane

0x79e1,	// (0x00051890) list_tmo_link_pane

0x79ee,	// (0x0005189d) scroll_pane_cp20

0x79fb,	// (0x000518aa) list_single_tmo_link_pane_ParamLimits

0x79fb,	// (0x000518aa) list_single_tmo_link_pane

0x7a0b,	// (0x000518ba) list_single_tmo_link_pane_t1

0x7a19,	// (0x000518c8) list_tmo_note_info_text_pane_t1_ParamLimits

0x7a19,	// (0x000518c8) list_tmo_note_info_text_pane_t1

0x9fbc,	// (0x00053e6b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9fbc,	// (0x00053e6b) aid_size_touch_scroll_bar_cp01

0x8ea2,	// (0x00052d51) aid_size_touch_slider_marker

0x9380,	// (0x0005322f) popup_settings_window_ParamLimits

0x9380,	// (0x0005322f) popup_settings_window

0xe531,	// (0x000583e0) popup_candi_list_indi_window

0x2315,	// (0x0004c1c4) aid_touch_navi_pane_ParamLimits

0x16e0,	// (0x0004b58f) rs_clock_indi_pane

0x16e9,	// (0x0004b598) sctrl_sk_bottom_pane_ParamLimits

0x16fa,	// (0x0004b5a9) sctrl_sk_top_pane_ParamLimits

0xb783,	// (0x00055632) popup_fep_tooltip_window

0x7391,	// (0x00051240) aid_size_cell_widget_grid_ParamLimits

0x7402,	// (0x000512b1) cell_ai5_widget_pane_g1_ParamLimits

0x7402,	// (0x000512b1) cell_ai5_widget_pane_g1

0x7465,	// (0x00051314) cell_ai5_widget_pane_g6_ParamLimits

0x7471,	// (0x00051320) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe24,	// (0x00059cd3) cell_ai5_widget_pane_g_ParamLimits

0xfe24,	// (0x00059cd3) cell_ai5_widget_pane_g

0x75b8,	// (0x00051467) cell_ai5_widget_pane_t10_ParamLimits

0x75b8,	// (0x00051467) cell_ai5_widget_pane_t10

0x75d6,	// (0x00051485) grid_ai5_widget_pane_ParamLimits

0x766e,	// (0x0005151d) cell_contacts_ai5_widget_pane_ParamLimits

0x766e,	// (0x0005151d) cell_contacts_ai5_widget_pane

0x7848,	// (0x000516f7) popup_discreet_window_t3_ParamLimits

0x7848,	// (0x000516f7) popup_discreet_window_t3

0xbbcf,	// (0x00055a7e) popup_fshwr2_char_preview_window_ParamLimits

0xbbcf,	// (0x00055a7e) popup_fshwr2_char_preview_window

0xea2e,	// (0x000588dd) tmo_note_info_pane_t1

0xea43,	// (0x000588f2) tmo_note_info_pane_t2

0xea5a,	// (0x00058909) tmo_note_info_pane_t3

0x79bd,	// (0x0005186c) tmo_note_info_pane_t4

0x79cf,	// (0x0005187e) tmo_note_info_pane_t5

0x0004,

0xfeab,	// (0x00059d5a) tmo_note_info_pane_t

0x79e1,	// (0x00051890) list_tmo_link_pane_ParamLimits

0x79ee,	// (0x0005189d) scroll_pane_cp20_ParamLimits

0x9226,	// (0x000530d5) bg_popup_fep_char_preview_window_cp01

0xea6f,	// (0x0005891e) popup_fshwr2_char_preview_window_t1

0x7a40,	// (0x000518ef) popup_candi_list_indi_window_g1

0x7a49,	// (0x000518f8) bg_cell_contacts_ai5_widget_pane

0x7a55,	// (0x00051904) cell_contacts_ai5_widget_pane_g1

0x5472,	// (0x0004f321) cell_contacts_ai5_widget_pane_g2

0x7a6a,	// (0x00051919) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb6,	// (0x00059d65) cell_contacts_ai5_widget_pane_g

0x7a76,	// (0x00051925) cell_contacts_ai5_widget_pane_t1

0x9f11,	// (0x00053dc0) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7aed,	// (0x0005199c) settings_container_pane

0xe3f3,	// (0x000582a2) listscroll_set_pane_copy1

0x4461,	// (0x0004e310) scroll_pane_cp121_copy1

0x2bf3,	// (0x0004caa2) set_content_pane_copy1

0xeae2,	// (0x00058991) aid_height_set_list_copy1_ParamLimits

0xeae2,	// (0x00058991) aid_height_set_list_copy1

0x3b7b,	// (0x0004da2a) aid_size_parent_copy1_ParamLimits

0x3b7b,	// (0x0004da2a) aid_size_parent_copy1

0xeaee,	// (0x0005899d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeaee,	// (0x0005899d) button_value_adjust_pane_cp6_copy1

0x2299,	// (0x0004c148) list_highlight_pane_cp2_copy1_ParamLimits

0x2299,	// (0x0004c148) list_highlight_pane_cp2_copy1

0xeb02,	// (0x000589b1) list_set_pane_copy1_ParamLimits

0xeb02,	// (0x000589b1) list_set_pane_copy1

0xea7d,	// (0x0005892c) main_pane_set_t1_copy1_ParamLimits

0xea7d,	// (0x0005892c) main_pane_set_t1_copy1

0xeab7,	// (0x00058966) main_pane_set_t2_copy1_ParamLimits

0xeab7,	// (0x00058966) main_pane_set_t2_copy1

0xebaf,	// (0x00058a5e) main_pane_set_t3_copy1

0xebbd,	// (0x00058a6c) main_pane_set_t4_copy1

0xead6,	// (0x00058985) set_content_pane_g1_copy1_ParamLimits

0xead6,	// (0x00058985) set_content_pane_g1_copy1

0xebcb,	// (0x00058a7a) setting_code_pane_copy1

0x7bea,	// (0x00051a99) setting_slider_graphic_pane_copy1

0x7bea,	// (0x00051a99) setting_slider_pane_copy1

0x7bea,	// (0x00051a99) setting_text_pane_copy1

0x7bea,	// (0x00051a99) setting_volume_pane_copy1

0xebcb,	// (0x00058a7a) settings_code_pane_cp2_copy1

0xebd3,	// (0x00058a82) settings_code_pane_cp_copy1_ParamLimits

0xebd3,	// (0x00058a82) settings_code_pane_cp_copy1

0xbccf,	// (0x00055b7e) volume_set_pane_copy1

0xebe7,	// (0x00058a96) volume_set_pane_g10_copy1

0xebef,	// (0x00058a9e) volume_set_pane_g1_copy1

0xebf7,	// (0x00058aa6) volume_set_pane_g2_copy1

0xebff,	// (0x00058aae) volume_set_pane_g3_copy1

0xec07,	// (0x00058ab6) volume_set_pane_g4_copy1

0xec0f,	// (0x00058abe) volume_set_pane_g5_copy1

0xec17,	// (0x00058ac6) volume_set_pane_g6_copy1

0xec1f,	// (0x00058ace) volume_set_pane_g7_copy1

0xec27,	// (0x00058ad6) volume_set_pane_g8_copy1

0xec2f,	// (0x00058ade) volume_set_pane_g9_copy1

0x95bb,	// (0x0005346a) bg_set_opt_pane_cp_copy1_ParamLimits

0x95bb,	// (0x0005346a) bg_set_opt_pane_cp_copy1

0xbcd7,	// (0x00055b86) setting_slider_pane_t1_copy1_ParamLimits

0xbcd7,	// (0x00055b86) setting_slider_pane_t1_copy1

0xbcf5,	// (0x00055ba4) setting_slider_pane_t2_copy1_ParamLimits

0xbcf5,	// (0x00055ba4) setting_slider_pane_t2_copy1

0xbd0f,	// (0x00055bbe) setting_slider_pane_t3_copy1_ParamLimits

0xbd0f,	// (0x00055bbe) setting_slider_pane_t3_copy1

0xbd27,	// (0x00055bd6) slider_set_pane_copy1_ParamLimits

0xbd27,	// (0x00055bd6) slider_set_pane_copy1

0x9f5d,	// (0x00053e0c) set_opt_bg_pane_g1_copy2

0x9f65,	// (0x00053e14) set_opt_bg_pane_g2_copy2

0x7c56,	// (0x00051b05) set_opt_bg_pane_g3_copy2

0x9f75,	// (0x00053e24) set_opt_bg_pane_g4_copy2

0x9f7d,	// (0x00053e2c) set_opt_bg_pane_g5_copy2

0x9f85,	// (0x00053e34) set_opt_bg_pane_g6_copy2

0xec37,	// (0x00058ae6) set_opt_bg_pane_g7_copy2

0x7c68,	// (0x00051b17) set_opt_bg_pane_g8_copy2

0x7c72,	// (0x00051b21) set_opt_bg_pane_g9_copy2

0xbd3d,	// (0x00055bec) aid_size_touch_slider_mark_copy1_ParamLimits

0xbd3d,	// (0x00055bec) aid_size_touch_slider_mark_copy1

0xec3f,	// (0x00058aee) slider_set_pane_g1_copy1

0x2100,	// (0x0004bfaf) slider_set_pane_g2_copy1

0xb4d9,	// (0x00055388) slider_set_pane_g3_copy1_ParamLimits

0xb4d9,	// (0x00055388) slider_set_pane_g3_copy1

0xb4ed,	// (0x0005539c) slider_set_pane_g4_copy1_ParamLimits

0xb4ed,	// (0x0005539c) slider_set_pane_g4_copy1

0xb505,	// (0x000553b4) slider_set_pane_g5_copy1_ParamLimits

0xb505,	// (0x000553b4) slider_set_pane_g5_copy1

0xb4d9,	// (0x00055388) slider_set_pane_g6_copy1_ParamLimits

0xb4d9,	// (0x00055388) slider_set_pane_g6_copy1

0xbd51,	// (0x00055c00) slider_set_pane_g7_copy1_ParamLimits

0xbd51,	// (0x00055c00) slider_set_pane_g7_copy1

0x9320,	// (0x000531cf) bg_set_opt_pane_cp2_copy1

0xec48,	// (0x00058af7) setting_slider_graphic_pane_g1_copy1

0xec51,	// (0x00058b00) setting_slider_graphic_pane_t1_copy1

0xec61,	// (0x00058b10) setting_slider_graphic_pane_t2_copy1

0xec71,	// (0x00058b20) slider_set_pane_cp_copy1

0x7cbe,	// (0x00051b6d) input_focus_pane_cp1_copy1

0x7cc7,	// (0x00051b76) list_set_text_pane_copy1

0x7ccf,	// (0x00051b7e) setting_text_pane_g1_copy1

0xf2d8,	// (0x00059187) set_text_pane_t1_copy1

0x7cbe,	// (0x00051b6d) input_focus_pane_cp2_copy1

0x7ccf,	// (0x00051b7e) setting_code_pane_g1_copy1

0x7cd8,	// (0x00051b87) setting_code_pane_t1_copy1

0x7ce6,	// (0x00051b95) list_set_graphic_pane_copy1

0x9320,	// (0x000531cf) bg_set_opt_pane_cp4_copy1

0xbfa9,	// (0x00055e58) list_set_graphic_pane_g1_copy1_ParamLimits

0xbfa9,	// (0x00055e58) list_set_graphic_pane_g1_copy1

0x7cfa,	// (0x00051ba9) list_set_graphic_pane_g2_copy1

0xbfc1,	// (0x00055e70) list_set_graphic_pane_t1_copy1_ParamLimits

0xbfc1,	// (0x00055e70) list_set_graphic_pane_t1_copy1

0x4d6b,	// (0x0004ec1a) rs_clock_indi_pane_g1

0x7d02,	// (0x00051bb1) rs_clock_indi_pane_t1

0x7d10,	// (0x00051bbf) rs_indi_pane

0x7d18,	// (0x00051bc7) rs_indi_pane_g1

0x7d21,	// (0x00051bd0) rs_indi_pane_g2

0x7a40,	// (0x000518ef) rs_indi_pane_g3

0x0002,

0xfebd,	// (0x00059d6c) rs_indi_pane_g

0xe3f3,	// (0x000582a2) bg_popup_preview_window_pane_cp03

0x7d2a,	// (0x00051bd9) popup_fep_tooltip_window_t1

0xd2d1,	// (0x00057180) popup_note2_window_g2_ParamLimits

0xd2d1,	// (0x00057180) popup_note2_window_g2

0x0001,

0xfc5d,	// (0x00059b0c) popup_note2_window_g_ParamLimits

0xfc5d,	// (0x00059b0c) popup_note2_window_g

0x5ee7,	// (0x0004fd96) bg_popup_sub_pane_cp11_ParamLimits

0x5ef4,	// (0x0004fda3) cell_ai3_links_pane_g1_ParamLimits

0x5f0b,	// (0x0004fdba) cell_ai3_links_pane_t1

0xf2d8,	// (0x00059187) set_text_pane_t1_copy1_ParamLimits

0xe332,	// (0x000581e1) cell_graphic_popup_pane_cp2_ParamLimits

0xe332,	// (0x000581e1) cell_graphic_popup_pane_cp2

0xec81,	// (0x00058b30) cell_graphic_popup_pane_g1_cp2

0x9c6e,	// (0x00053b1d) cell_graphic_popup_pane_g2_cp2

0x7d40,	// (0x00051bef) cell_graphic_popup_pane_g3_cp2

0xec89,	// (0x00058b38) cell_graphic_popup_pane_t2_cp2

0x9c7f,	// (0x00053b2e) grid_highlight_pane_cp3_cp2

0xa283,	// (0x00054132) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x9f11,	// (0x00053dc0) main_tmo_pane_ParamLimits

0xd620,	// (0x000574cf) popup_tmo_big_image_note_window

0x73f1,	// (0x000512a0) cell_ai5_widget_list_pane

0x73f9,	// (0x000512a8) cell_ai5_widget_lrg_icon_pane

0xea2e,	// (0x000588dd) tmo_note_info_pane_t1_ParamLimits

0xea43,	// (0x000588f2) tmo_note_info_pane_t2_ParamLimits

0xea5a,	// (0x00058909) tmo_note_info_pane_t3_ParamLimits

0x79bd,	// (0x0005186c) tmo_note_info_pane_t4_ParamLimits

0x79cf,	// (0x0005187e) tmo_note_info_pane_t5_ParamLimits

0xfeab,	// (0x00059d5a) tmo_note_info_pane_t_ParamLimits

0x7aed,	// (0x0005199c) settings_container_pane_ParamLimits

0xec79,	// (0x00058b28) indicator_popup_pane_cp5

0xec79,	// (0x00058b28) indicator_popup_pane_cp6

0x7ce6,	// (0x00051b95) list_set_graphic_pane_copy1_ParamLimits

0x9226,	// (0x000530d5) bg_popup_window_pane_cp23

0x7d56,	// (0x00051c05) popup_tmo_big_image_note_window_g1

0x7d5f,	// (0x00051c0e) popup_tmo_big_image_note_window_t1

0x7d6f,	// (0x00051c1e) popup_tmo_big_image_note_window_t2

0x7d7f,	// (0x00051c2e) popup_tmo_big_image_note_window_t3

0x0002,

0xfec4,	// (0x00059d73) popup_tmo_big_image_note_window_t

0x4d6b,	// (0x0004ec1a) cell_ai5_widget_lrg_icon_pane_g1

0x7d8f,	// (0x00051c3e) cell_ai5_widget_lrg_icon_pane_t1

0x7d9d,	// (0x00051c4c) cell_ai5_widget_list_row_pane_ParamLimits

0x7d9d,	// (0x00051c4c) cell_ai5_widget_list_row_pane

0x7db4,	// (0x00051c63) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7db4,	// (0x00051c63) cell_ai5_widget_list_row_pane_g1

0xec97,	// (0x00058b46) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xec97,	// (0x00058b46) cell_ai5_widget_list_row_pane_t1

0x7dec,	// (0x00051c9b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7dec,	// (0x00051c9b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecb,	// (0x00059d7a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecb,	// (0x00059d7a) cell_ai5_widget_list_row_pane_t

0x9226,	// (0x000530d5) main_fep_vtchi_ss_pane

0x7e34,	// (0x00051ce3) popup_fep_char_pre_window

0x7e3c,	// (0x00051ceb) popup_fep_ituss_window

0xecea,	// (0x00058b99) popup_fep_vkbss_window

0xecf7,	// (0x00058ba6) grid_vkbss_keypad_pane_ParamLimits

0xecf7,	// (0x00058ba6) grid_vkbss_keypad_pane

0x7ea2,	// (0x00051d51) ituss_keypad_pane

0x212a,	// (0x0004bfd9) aid_vkbss_key_offset_ParamLimits

0x212a,	// (0x0004bfd9) aid_vkbss_key_offset

0xbd67,	// (0x00055c16) cell_vkbss_key_pane_ParamLimits

0xbd67,	// (0x00055c16) cell_vkbss_key_pane

0x262c,	// (0x0004c4db) bg_cell_vkbss_key_g1_ParamLimits

0x262c,	// (0x0004c4db) bg_cell_vkbss_key_g1

0xed07,	// (0x00058bb6) cell_vkbss_key_3p_pane_ParamLimits

0xed07,	// (0x00058bb6) cell_vkbss_key_3p_pane

0xed21,	// (0x00058bd0) cell_vkbss_key_g1_ParamLimits

0xed21,	// (0x00058bd0) cell_vkbss_key_g1

0xed3b,	// (0x00058bea) cell_vkbss_key_t1_ParamLimits

0xed3b,	// (0x00058bea) cell_vkbss_key_t1

0x214c,	// (0x0004bffb) cell_ituss_key_pane_ParamLimits

0x214c,	// (0x0004bffb) cell_ituss_key_pane

0x7f04,	// (0x00051db3) bg_cell_ituss_key_g1_ParamLimits

0x7f04,	// (0x00051db3) bg_cell_ituss_key_g1

0x7f10,	// (0x00051dbf) cell_ituss_key_pane_g1_ParamLimits

0x7f10,	// (0x00051dbf) cell_ituss_key_pane_g1

0x215d,	// (0x0004c00c) cell_ituss_key_pane_g2_ParamLimits

0x215d,	// (0x0004c00c) cell_ituss_key_pane_g2

0x0002,

0xfed2,	// (0x00059d81) cell_ituss_key_pane_g_ParamLimits

0xfed2,	// (0x00059d81) cell_ituss_key_pane_g

0x2189,	// (0x0004c038) cell_ituss_key_t1_ParamLimits

0x2189,	// (0x0004c038) cell_ituss_key_t1

0x21c3,	// (0x0004c072) cell_ituss_key_t2_ParamLimits

0x21c3,	// (0x0004c072) cell_ituss_key_t2

0x21f4,	// (0x0004c0a3) cell_ituss_key_t3_ParamLimits

0x21f4,	// (0x0004c0a3) cell_ituss_key_t3

0x21c3,	// (0x0004c072) cell_ituss_key_t4_ParamLimits

0x21c3,	// (0x0004c072) cell_ituss_key_t4

0x0004,

0xfed9,	// (0x00059d88) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x00059d88) cell_ituss_key_t

0x7f36,	// (0x00051de5) cell_vkbss_key_3p_pane_g1

0x7f3e,	// (0x00051ded) cell_vkbss_key_3p_pane_g2

0x7f46,	// (0x00051df5) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee4,	// (0x00059d93) cell_vkbss_key_3p_pane_g

0xe3f3,	// (0x000582a2) bg_popup_fep_char_preview_window_cp02

0x7f4e,	// (0x00051dfd) popup_fep_char_pre_window_t1

0xe8d6,	// (0x00058785) main_ai5_sk_pane

0x7a49,	// (0x000518f8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7a55,	// (0x00051904) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5472,	// (0x0004f321) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7a6a,	// (0x00051919) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb6,	// (0x00059d65) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7a76,	// (0x00051925) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x9f11,	// (0x00053dc0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xed66,	// (0x00058c15) main_ai5_sk_pane_g1

0xc466,	// (0x00056315) popup_query_code_window_g1

0xecdb,	// (0x00058b8a) popup_fep_vkb_icf_pane

0x7e7c,	// (0x00051d2b) popup_fep_vtchi_icf_pane

0x7f65,	// (0x00051e14) bg_icf_pane

0x7f71,	// (0x00051e20) list_vkb_icf_pane

0x7f80,	// (0x00051e2f) bg_icf_pane_cp01

0x7f93,	// (0x00051e42) vtchi_icf_list_pane

0xed6f,	// (0x00058c1e) list_vkb_icf_pane_t1_ParamLimits

0xed6f,	// (0x00058c1e) list_vkb_icf_pane_t1

0x7fc4,	// (0x00051e73) vtchi_icf_list_pane_t1_ParamLimits

0x7fc4,	// (0x00051e73) vtchi_icf_list_pane_t1

0x7e3c,	// (0x00051ceb) popup_fep_ituss_window_ParamLimits

0x7e7c,	// (0x00051d2b) popup_fep_vtchi_icf_pane_ParamLimits

0x7ea2,	// (0x00051d51) ituss_keypad_pane_ParamLimits

0x211e,	// (0x0004bfcd) ituss_sks_pane

0x7f65,	// (0x00051e14) bg_icf_pane_ParamLimits

0xecc8,	// (0x00058b77) icf_edit_indi_pane_ParamLimits

0xecc8,	// (0x00058b77) icf_edit_indi_pane

0x7f71,	// (0x00051e20) list_vkb_icf_pane_ParamLimits

0x7f80,	// (0x00051e2f) bg_icf_pane_cp01_ParamLimits

0x7e27,	// (0x00051cd6) icf_edit_indi_pane_cp01_ParamLimits

0x7e27,	// (0x00051cd6) icf_edit_indi_pane_cp01

0x7f9b,	// (0x00051e4a) vtchi_query_pane

0x7208,	// (0x000510b7) icf_edit_indi_pane_g1_ParamLimits

0x7208,	// (0x000510b7) icf_edit_indi_pane_g1

0xed86,	// (0x00058c35) icf_edit_indi_pane_g2_ParamLimits

0xed86,	// (0x00058c35) icf_edit_indi_pane_g2

0x0001,

0xfefc,	// (0x00059dab) icf_edit_indi_pane_g_ParamLimits

0xfefc,	// (0x00059dab) icf_edit_indi_pane_g

0xed98,	// (0x00058c47) icf_edit_indi_pane_t1

0x7fe2,	// (0x00051e91) bg_input_focus_pane_cp042

0x9de5,	// (0x00053c94) vtchi_button_pane

0x7feb,	// (0x00051e9a) vtchi_query_pane_t1

0x7ff9,	// (0x00051ea8) vtchi_query_pane_t2

0x8007,	// (0x00051eb6) vtchi_query_pane_t3

0x0002,

0xfeeb,	// (0x00059d9a) vtchi_query_pane_t

0x9226,	// (0x000530d5) bg_button_pane_cp13

0x8015,	// (0x00051ec4) vtchi_button_pane_g1

0x2237,	// (0x0004c0e6) ituss_sks_pane_g1

0x2242,	// (0x0004c0f1) ituss_sks_pane_g2

0x0001,

0xfef2,	// (0x00059da1) ituss_sks_pane_g

0x801d,	// (0x00051ecc) ituss_sks_pane_t1

0x802b,	// (0x00051eda) ituss_sks_pane_t2

0x0001,

0xfef7,	// (0x00059da6) ituss_sks_pane_t

0x47dc,	// (0x0004e68b) indicator_nsta_pane_cp_g1

0x47e4,	// (0x0004e693) indicator_nsta_pane_cp_g2

0x47ec,	// (0x0004e69b) indicator_nsta_pane_cp_g3

0x47dc,	// (0x0004e68b) indicator_nsta_pane_cp_g4

0x47e4,	// (0x0004e693) indicator_nsta_pane_cp_g5

0x47ec,	// (0x0004e69b) indicator_nsta_pane_cp_g6

0x0005,

0xfaa7,	// (0x00059956) indicator_nsta_pane_cp_g

0xe0c9,	// (0x00057f78) cell_graphic2_pane_t2_ParamLimits

0xe0c9,	// (0x00057f78) cell_graphic2_pane_t2

0x0001,

0xfdad,	// (0x00059c5c) cell_graphic2_pane_t_ParamLimits

0xfdad,	// (0x00059c5c) cell_graphic2_pane_t

0xe6ec,	// (0x0005859b) cell_graphic2_control_pane_t1

0xa5ad,	// (0x0005445c) signal_pane_g3_ParamLimits

0xa5ad,	// (0x0005445c) signal_pane_g3

0xa5c1,	// (0x00054470) signal_pane_g4_ParamLimits

0xa5c1,	// (0x00054470) signal_pane_g4

0x7dfe,	// (0x00051cad) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7dfe,	// (0x00051cad) cell_ai5_widget_list_row_pane_t3

0x7f24,	// (0x00051dd3) cell_ituss_key_pane_t1_ParamLimits

0x7f24,	// (0x00051dd3) cell_ituss_key_pane_t1

0x28c2,	// (0x0004c771) form_field_data_wide_pane_vc_t2_ParamLimits

0x28c2,	// (0x0004c771) form_field_data_wide_pane_vc_t2

0x28d6,	// (0x0004c785) form_field_data_wide_pane_vc_t3_ParamLimits

0x28d6,	// (0x0004c785) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f3,	// (0x000596a2) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f3,	// (0x000596a2) form_field_data_wide_pane_vc_t

0x44a3,	// (0x0004e352) form_field_slider_wide_pane_vc_t3_ParamLimits

0x44a3,	// (0x0004e352) form_field_slider_wide_pane_vc_t3

0x4581,	// (0x0004e430) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4581,	// (0x0004e430) form_field_popup_wide_pane_vc_t2

0x4598,	// (0x0004e447) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4598,	// (0x0004e447) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa96,	// (0x00059945) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x00059945) form_field_popup_wide_pane_vc_t

0xbb39,	// (0x000559e8) aid_fshwr2_btn_pane_ParamLimits

0xbb4d,	// (0x000559fc) aid_fshwr2_syb_pane_ParamLimits

0xbb61,	// (0x00055a10) aid_fshwr2_txt_pane_ParamLimits

0x9f11,	// (0x00053dc0) fshwr2_bg_pane_ParamLimits

0xbb71,	// (0x00055a20) fshwr2_func_candi_pane_ParamLimits

0xbb91,	// (0x00055a40) fshwr2_hwr_syb_pane_ParamLimits

0xbbb3,	// (0x00055a62) fshwr2_icf_pane_ParamLimits

0x120c,	// (0x0004b0bb) list_double_graphic_pane_vc_g4_ParamLimits

0x120c,	// (0x0004b0bb) list_double_graphic_pane_vc_g4

0x217d,	// (0x0004c02c) cell_ituss_key_pane_g3_ParamLimits

0x217d,	// (0x0004c02c) cell_ituss_key_pane_g3

0x2225,	// (0x0004c0d4) cell_ituss_key_t5_ParamLimits

0x2225,	// (0x0004c0d4) cell_ituss_key_t5

0xecea,	// (0x00058b99) popup_fep_vkbss_window_ParamLimits

0x7388,	// (0x00051237) aid_cell_ai5_quarter

0xed98,	// (0x00058c47) icf_edit_indi_pane_t1_ParamLimits

0x99cd,	// (0x0005387c) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x99cd,	// (0x0005387c) aid_tch_indicator_popup_pane_cp2

0x99e0,	// (0x0005388f) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x99e0,	// (0x0005388f) aid_tch_query_popup_data_pane_cp2

0x2c2f,	// (0x0004cade) aid_tch_query_popup_pane_ParamLimits

0x2c2f,	// (0x0004cade) aid_tch_query_popup_pane

0x2c2f,	// (0x0004cade) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2c2f,	// (0x0004cade) aid_tch_query_popup_data_pane_cp1

0x78ac,	// (0x0005175b) cell_fshwr2_syb_bg_pane_ParamLimits

0xbca6,	// (0x00055b55) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbcb9,	// (0x00055b68) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xecdb,	// (0x00058b8a) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large

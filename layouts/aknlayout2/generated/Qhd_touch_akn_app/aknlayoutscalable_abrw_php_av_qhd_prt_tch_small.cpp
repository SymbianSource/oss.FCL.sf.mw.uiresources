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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002c2cc };

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
0x78cc,	// (0x00033b98) Screen

0x78d8,	// (0x00033ba4) application_window_ParamLimits

0x78d8,	// (0x00033ba4) application_window

0x2963,	// (0x0002ec2f) screen_g1

0x44f2,	// (0x000307be) area_bottom_pane_ParamLimits

0x44f2,	// (0x000307be) area_bottom_pane

0x45b2,	// (0x0003087e) area_top_pane_ParamLimits

0x45b2,	// (0x0003087e) area_top_pane

0x4650,	// (0x0003091c) main_pane_ParamLimits

0x4650,	// (0x0003091c) main_pane

0x78e8,	// (0x00033bb4) misc_graphics

0x9555,	// (0x00035821) battery_pane_ParamLimits

0x9555,	// (0x00035821) battery_pane

0xa237,	// (0x00036503) bg_status_flat_pane_g8

0xa23f,	// (0x0003650b) bg_status_flat_pane_g9

0x961d,	// (0x000358e9) context_pane_ParamLimits

0x961d,	// (0x000358e9) context_pane

0x9733,	// (0x000359ff) navi_pane_ParamLimits

0x9733,	// (0x000359ff) navi_pane

0x97b7,	// (0x00035a83) signal_pane_ParamLimits

0x97b7,	// (0x00035a83) signal_pane

0x0008,

0xf854,	// (0x0003bb20) bg_status_flat_pane_g

0x9824,	// (0x00035af0) status_pane_g1_ParamLimits

0x9824,	// (0x00035af0) status_pane_g1

0x9838,	// (0x00035b04) status_pane_g2_ParamLimits

0x9838,	// (0x00035b04) status_pane_g2

0x9844,	// (0x00035b10) status_pane_g3_ParamLimits

0x9844,	// (0x00035b10) status_pane_g3

0x0004,

0xf77b,	// (0x0003ba47) status_pane_g_ParamLimits

0xf77b,	// (0x0003ba47) status_pane_g

0x9878,	// (0x00035b44) title_pane_ParamLimits

0x9878,	// (0x00035b44) title_pane

0x98b5,	// (0x00035b81) uni_indicator_pane_ParamLimits

0x98b5,	// (0x00035b81) uni_indicator_pane

0x9485,	// (0x00035751) bg_list_pane_ParamLimits

0x9485,	// (0x00035751) bg_list_pane

0x5658,	// (0x00031924) find_pane

0x94a5,	// (0x00035771) listscroll_app_pane_ParamLimits

0x94a5,	// (0x00035771) listscroll_app_pane

0x94b1,	// (0x0003577d) listscroll_form_pane

0x4428,	// (0x000306f4) listscroll_gen_pane_ParamLimits

0x4428,	// (0x000306f4) listscroll_gen_pane

0x5660,	// (0x0003192c) listscroll_set_pane

0x8449,	// (0x00034715) main_idle_act_pane

0x9181,	// (0x0003544d) main_idle_trad_pane

0x9181,	// (0x0003544d) main_list_empty_pane

0x94a5,	// (0x00035771) main_midp_pane

0x94cb,	// (0x00035797) main_pane_g1_ParamLimits

0x94cb,	// (0x00035797) main_pane_g1

0x5676,	// (0x00031942) popup_ai_message_window_ParamLimits

0x5676,	// (0x00031942) popup_ai_message_window

0x5724,	// (0x000319f0) popup_fep_china_uni_window_ParamLimits

0x5724,	// (0x000319f0) popup_fep_china_uni_window

0x5780,	// (0x00031a4c) popup_fep_japan_candidate_window_ParamLimits

0x5780,	// (0x00031a4c) popup_fep_japan_candidate_window

0x57a0,	// (0x00031a6c) popup_fep_japan_predictive_window_ParamLimits

0x57a0,	// (0x00031a6c) popup_fep_japan_predictive_window

0x57d0,	// (0x00031a9c) popup_find_window

0x57dd,	// (0x00031aa9) popup_grid_graphic_window_ParamLimits

0x57dd,	// (0x00031aa9) popup_grid_graphic_window

0x5809,	// (0x00031ad5) popup_large_graphic_colour_window

0x582f,	// (0x00031afb) popup_menu_window_ParamLimits

0x582f,	// (0x00031afb) popup_menu_window

0x59e7,	// (0x00031cb3) popup_note_image_window

0x59d3,	// (0x00031c9f) popup_note_wait_window_ParamLimits

0x59d3,	// (0x00031c9f) popup_note_wait_window

0x59d3,	// (0x00031c9f) popup_note_window_ParamLimits

0x59d3,	// (0x00031c9f) popup_note_window

0x5a3d,	// (0x00031d09) popup_query_code_window_ParamLimits

0x5a3d,	// (0x00031d09) popup_query_code_window

0x5a51,	// (0x00031d1d) popup_query_data_code_window_ParamLimits

0x5a51,	// (0x00031d1d) popup_query_data_code_window

0x5a6e,	// (0x00031d3a) popup_query_data_window_ParamLimits

0x5a6e,	// (0x00031d3a) popup_query_data_window

0x5a8a,	// (0x00031d56) popup_query_sat_info_window_ParamLimits

0x5a8a,	// (0x00031d56) popup_query_sat_info_window

0x5ac3,	// (0x00031d8f) popup_snote_single_graphic_window_ParamLimits

0x5ac3,	// (0x00031d8f) popup_snote_single_graphic_window

0x5ac3,	// (0x00031d8f) popup_snote_single_text_window_ParamLimits

0x5ac3,	// (0x00031d8f) popup_snote_single_text_window

0x5ad8,	// (0x00031da4) popup_sub_window_general

0x5c08,	// (0x00031ed4) popup_window_general_ParamLimits

0x5c08,	// (0x00031ed4) popup_window_general

0x94d9,	// (0x000357a5) power_save_pane

0x54e6,	// (0x000317b2) control_pane_g1_ParamLimits

0x54e6,	// (0x000317b2) control_pane_g1

0x550d,	// (0x000317d9) control_pane_g2_ParamLimits

0x550d,	// (0x000317d9) control_pane_g2

0x9448,	// (0x00035714) control_pane_g3_ParamLimits

0x9448,	// (0x00035714) control_pane_g3

0x0007,

0xf763,	// (0x0003ba2f) control_pane_g_ParamLimits

0xf763,	// (0x0003ba2f) control_pane_g

0x5557,	// (0x00031823) control_pane_t1_ParamLimits

0x5557,	// (0x00031823) control_pane_t1

0x55ad,	// (0x00031879) control_pane_t2_ParamLimits

0x55ad,	// (0x00031879) control_pane_t2

0x0002,

0xf774,	// (0x0003ba40) control_pane_t_ParamLimits

0xf774,	// (0x0003ba40) control_pane_t

0x936d,	// (0x00035639) navi_navi_volume_pane_cp1

0x9375,	// (0x00035641) status_small_icon_pane

0x937d,	// (0x00035649) status_small_pane_g1_ParamLimits

0x937d,	// (0x00035649) status_small_pane_g1

0x93b1,	// (0x0003567d) status_small_pane_g2_ParamLimits

0x93b1,	// (0x0003567d) status_small_pane_g2

0x93bd,	// (0x00035689) status_small_pane_g3_ParamLimits

0x93bd,	// (0x00035689) status_small_pane_g3

0x93c9,	// (0x00035695) status_small_pane_g4_ParamLimits

0x93c9,	// (0x00035695) status_small_pane_g4

0x93d5,	// (0x000356a1) status_small_pane_g5_ParamLimits

0x93d5,	// (0x000356a1) status_small_pane_g5

0x93e3,	// (0x000356af) status_small_pane_g6_ParamLimits

0x93e3,	// (0x000356af) status_small_pane_g6

0x0007,

0xf752,	// (0x0003ba1e) status_small_pane_g_ParamLimits

0xf752,	// (0x0003ba1e) status_small_pane_g

0x9412,	// (0x000356de) status_small_pane_t1

0x9434,	// (0x00035700) status_small_wait_pane_ParamLimits

0x9434,	// (0x00035700) status_small_wait_pane

0x8bf2,	// (0x00034ebe) aid_levels_signal_ParamLimits

0x8bf2,	// (0x00034ebe) aid_levels_signal

0x8c04,	// (0x00034ed0) signal_pane_g1_ParamLimits

0x8c04,	// (0x00034ed0) signal_pane_g1

0x8c19,	// (0x00034ee5) signal_pane_g2_ParamLimits

0x8c19,	// (0x00034ee5) signal_pane_g2

0x0003,

0xf6e3,	// (0x0003b9af) signal_pane_g_ParamLimits

0xf6e3,	// (0x0003b9af) signal_pane_g

0x8c54,	// (0x00034f20) context_pane_g1

0x78f2,	// (0x00033bbe) title_pane_g1

0x7928,	// (0x00033bf4) title_pane_t1

0x7990,	// (0x00033c5c) title_pane_t2

0x79b6,	// (0x00033c82) title_pane_t3

0x0002,

0xf532,	// (0x0003b7fe) title_pane_t

0x98cd,	// (0x00035b99) aid_levels_battery_ParamLimits

0x98cd,	// (0x00035b99) aid_levels_battery

0x98e1,	// (0x00035bad) battery_pane_g1_ParamLimits

0x98e1,	// (0x00035bad) battery_pane_g1

0x98f7,	// (0x00035bc3) battery_pane_g2_ParamLimits

0x98f7,	// (0x00035bc3) battery_pane_g2

0x0001,

0xf786,	// (0x0003ba52) battery_pane_g_ParamLimits

0xf786,	// (0x0003ba52) battery_pane_g

0xab6d,	// (0x00036e39) uni_indicator_pane_g1

0xab83,	// (0x00036e4f) uni_indicator_pane_g2

0xab99,	// (0x00036e65) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0003bbc8) uni_indicator_pane_g

0x8fea,	// (0x000352b6) navi_icon_pane_ParamLimits

0x8fea,	// (0x000352b6) navi_icon_pane

0x8f33,	// (0x000351ff) navi_midp_pane

0x9006,	// (0x000352d2) navi_navi_pane

0x9010,	// (0x000352dc) navi_text_pane_ParamLimits

0x9010,	// (0x000352dc) navi_text_pane

0x2963,	// (0x0002ec2f) status_small_wait_pane_g1

0x7e0b,	// (0x000340d7) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0003bbc3) status_small_wait_pane_g

0xa892,	// (0x00036b5e) navi_navi_icon_text_pane

0xa89a,	// (0x00036b66) navi_navi_pane_g1_ParamLimits

0xa89a,	// (0x00036b66) navi_navi_pane_g1

0xa8ac,	// (0x00036b78) navi_navi_pane_g2_ParamLimits

0xa8ac,	// (0x00036b78) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0003bb91) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0003bb91) navi_navi_pane_g

0xa8be,	// (0x00036b8a) navi_navi_tabs_pane

0xa8c7,	// (0x00036b93) navi_navi_text_pane

0xa892,	// (0x00036b5e) navi_navi_volume_pane

0xa86e,	// (0x00036b3a) navi_text_pane_t1

0xa862,	// (0x00036b2e) navi_icon_pane_g1

0xa7b5,	// (0x00036a81) navi_navi_text_pane_t1

0x5fe5,	// (0x000322b1) navi_navi_volume_pane_g1

0x5fed,	// (0x000322b9) volume_small_pane

0xa71b,	// (0x000369e7) navi_navi_icon_text_pane_g1

0xa723,	// (0x000369ef) navi_navi_icon_text_pane_t1

0x9006,	// (0x000352d2) navi_tabs_2_long_pane

0x9006,	// (0x000352d2) navi_tabs_2_pane

0x9006,	// (0x000352d2) navi_tabs_3_long_pane

0x9006,	// (0x000352d2) navi_tabs_3_pane

0x9006,	// (0x000352d2) navi_tabs_4_pane

0x5fc5,	// (0x00032291) tabs_2_active_pane_ParamLimits

0x5fc5,	// (0x00032291) tabs_2_active_pane

0x5fd5,	// (0x000322a1) tabs_2_passive_pane_ParamLimits

0x5fd5,	// (0x000322a1) tabs_2_passive_pane

0x5f93,	// (0x0003225f) tabs_3_active_pane_ParamLimits

0x5f93,	// (0x0003225f) tabs_3_active_pane

0x5fa3,	// (0x0003226f) tabs_3_passive_pane_ParamLimits

0x5fa3,	// (0x0003226f) tabs_3_passive_pane

0x5fb4,	// (0x00032280) tabs_3_passive_pane_cp_ParamLimits

0x5fb4,	// (0x00032280) tabs_3_passive_pane_cp

0x5f4f,	// (0x0003221b) tabs_4_active_pane_ParamLimits

0x5f4f,	// (0x0003221b) tabs_4_active_pane

0x5f60,	// (0x0003222c) tabs_4_passive_pane_ParamLimits

0x5f60,	// (0x0003222c) tabs_4_passive_pane

0x5f71,	// (0x0003223d) tabs_4_passive_pane_cp_ParamLimits

0x5f71,	// (0x0003223d) tabs_4_passive_pane_cp

0x5f82,	// (0x0003224e) tabs_4_passive_pane_cp2_ParamLimits

0x5f82,	// (0x0003224e) tabs_4_passive_pane_cp2

0x5f2b,	// (0x000321f7) tabs_2_long_active_pane_ParamLimits

0x5f2b,	// (0x000321f7) tabs_2_long_active_pane

0x5f3d,	// (0x00032209) tabs_2_long_passive_pane_ParamLimits

0x5f3d,	// (0x00032209) tabs_2_long_passive_pane

0x5eec,	// (0x000321b8) tabs_3_long_active_pane_ParamLimits

0x5eec,	// (0x000321b8) tabs_3_long_active_pane

0x5eff,	// (0x000321cb) tabs_3_long_passive_pane_ParamLimits

0x5eff,	// (0x000321cb) tabs_3_long_passive_pane

0x5f18,	// (0x000321e4) tabs_3_long_passive_pane_cp_ParamLimits

0x5f18,	// (0x000321e4) tabs_3_long_passive_pane_cp

0x5e92,	// (0x0003215e) volume_small_pane_g1

0x5e9b,	// (0x00032167) volume_small_pane_g2

0x5ea4,	// (0x00032170) volume_small_pane_g3

0x5ead,	// (0x00032179) volume_small_pane_g4

0x5eb6,	// (0x00032182) volume_small_pane_g5

0x5ebf,	// (0x0003218b) volume_small_pane_g6

0x5ec8,	// (0x00032194) volume_small_pane_g7

0x5ed1,	// (0x0003219d) volume_small_pane_g8

0x5eda,	// (0x000321a6) volume_small_pane_g9

0x5ee3,	// (0x000321af) volume_small_pane_g10

0x0009,

0xf891,	// (0x0003bb5d) volume_small_pane_g

0x79c8,	// (0x00033c94) bg_active_tab_pane_cp2_ParamLimits

0x79c8,	// (0x00033c94) bg_active_tab_pane_cp2

0x79d6,	// (0x00033ca2) tabs_3_active_pane_g1

0x79de,	// (0x00033caa) tabs_3_active_pane_t1

0x79c8,	// (0x00033c94) bg_passive_tab_pane_cp2_ParamLimits

0x79c8,	// (0x00033c94) bg_passive_tab_pane_cp2

0x79d6,	// (0x00033ca2) tabs_3_passive_pane_g1

0x79de,	// (0x00033caa) tabs_3_passive_pane_t1

0x79c8,	// (0x00033c94) bg_active_tab_pane_cp3_ParamLimits

0x79c8,	// (0x00033c94) bg_active_tab_pane_cp3

0x79f0,	// (0x00033cbc) tabs_4_active_pane_g1

0x79f8,	// (0x00033cc4) tabs_4_active_pane_t1

0x79c8,	// (0x00033c94) bg_passive_tab_pane_cp3_ParamLimits

0x79c8,	// (0x00033c94) bg_passive_tab_pane_cp3

0x79f0,	// (0x00033cbc) tabs_4_1_passive_pane_g1

0x79f8,	// (0x00033cc4) tabs_4_1_passive_pane_t1

0x94a5,	// (0x00035771) list_highlight_pane_cp2

0xade0,	// (0x000370ac) list_set_pane_ParamLimits

0xade0,	// (0x000370ac) list_set_pane

0xae86,	// (0x00037152) main_pane_set_t1_ParamLimits

0xae86,	// (0x00037152) main_pane_set_t1

0xaea6,	// (0x00037172) main_pane_set_t2_ParamLimits

0xaea6,	// (0x00037172) main_pane_set_t2

0xaeba,	// (0x00037186) main_pane_set_t3_ParamLimits

0xaeba,	// (0x00037186) main_pane_set_t3

0xaecc,	// (0x00037198) main_pane_set_t4_ParamLimits

0xaecc,	// (0x00037198) main_pane_set_t4

0x0003,

0xf961,	// (0x0003bc2d) main_pane_set_t_ParamLimits

0xf961,	// (0x0003bc2d) main_pane_set_t

0xaede,	// (0x000371aa) setting_code_pane

0xaeea,	// (0x000371b6) setting_slider_graphic_pane

0xaeea,	// (0x000371b6) setting_slider_pane

0xaeea,	// (0x000371b6) setting_text_pane

0xaeea,	// (0x000371b6) setting_volume_pane

0x489f,	// (0x00030b6b) volume_set_pane

0x79c8,	// (0x00033c94) bg_set_opt_pane_cp

0x48a7,	// (0x00030b73) setting_slider_pane_t1

0x48c0,	// (0x00030b8c) setting_slider_pane_t2

0x48da,	// (0x00030ba6) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0003b805) setting_slider_pane_t

0x48f2,	// (0x00030bbe) slider_set_pane

0x78e8,	// (0x00033bb4) bg_set_opt_pane_cp2

0x7a0a,	// (0x00033cd6) setting_slider_graphic_pane_g1

0x4908,	// (0x00030bd4) setting_slider_graphic_pane_t1

0x4918,	// (0x00030be4) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0003b80c) setting_slider_graphic_pane_t

0x4928,	// (0x00030bf4) slider_set_pane_cp

0x78e8,	// (0x00033bb4) input_focus_pane_cp1

0xad9f,	// (0x0003706b) list_set_text_pane

0x2963,	// (0x0002ec2f) setting_text_pane_g1

0x78e8,	// (0x00033bb4) input_focus_pane_cp2

0x2963,	// (0x0002ec2f) setting_code_pane_g1

0x7a13,	// (0x00033cdf) setting_code_pane_t1

0x3956,	// (0x0002fc22) set_text_pane_t1_ParamLimits

0x3956,	// (0x0002fc22) set_text_pane_t1

0x82ad,	// (0x00034579) set_opt_bg_pane_g1

0x82b5,	// (0x00034581) set_opt_bg_pane_g2

0xad79,	// (0x00037045) set_opt_bg_pane_g3

0x82c5,	// (0x00034591) set_opt_bg_pane_g4

0x82cd,	// (0x00034599) set_opt_bg_pane_g5

0x82d5,	// (0x000345a1) set_opt_bg_pane_g6

0xad83,	// (0x0003704f) set_opt_bg_pane_g7

0xad8b,	// (0x00037057) set_opt_bg_pane_g8

0xad95,	// (0x00037061) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0003bc1a) set_opt_bg_pane_g

0xad6c,	// (0x00037038) slider_set_pane_g1

0x6082,	// (0x0003234e) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0003bc0b) slider_set_pane_g

0x5ff6,	// (0x000322c2) volume_set_pane_g1

0x5ffe,	// (0x000322ca) volume_set_pane_g2

0x6006,	// (0x000322d2) volume_set_pane_g3

0x600e,	// (0x000322da) volume_set_pane_g4

0x6016,	// (0x000322e2) volume_set_pane_g5

0x601e,	// (0x000322ea) volume_set_pane_g6

0x6026,	// (0x000322f2) volume_set_pane_g7

0x602e,	// (0x000322fa) volume_set_pane_g8

0x6036,	// (0x00032302) volume_set_pane_g9

0x603e,	// (0x0003230a) volume_set_pane_g10

0x0009,

0xf917,	// (0x0003bbe3) volume_set_pane_g

0x7a21,	// (0x00033ced) indicator_pane_ParamLimits

0x7a21,	// (0x00033ced) indicator_pane

0x7a2d,	// (0x00033cf9) main_idle_pane_g2_ParamLimits

0x7a2d,	// (0x00033cf9) main_idle_pane_g2

0x7a55,	// (0x00033d21) main_pane_idle_g1_ParamLimits

0x7a55,	// (0x00033d21) main_pane_idle_g1

0x7a62,	// (0x00033d2e) popup_clock_digital_analogue_window_ParamLimits

0x7a62,	// (0x00033d2e) popup_clock_digital_analogue_window

0x7a79,	// (0x00033d45) soft_indicator_pane_ParamLimits

0x7a79,	// (0x00033d45) soft_indicator_pane

0x7a85,	// (0x00033d51) wallpaper_pane_ParamLimits

0x7a85,	// (0x00033d51) wallpaper_pane

0x2963,	// (0x0002ec2f) wallpaper_pane_g1

0x7a99,	// (0x00033d65) indicator_pane_g1_ParamLimits

0x7a99,	// (0x00033d65) indicator_pane_g1

0xb1ba,	// (0x00037486) navi_navi_icon_text_pane_srt_g1

0x7ab4,	// (0x00033d80) soft_indicator_pane_t1

0x7ace,	// (0x00033d9a) aid_ps_area_pane

0x7adf,	// (0x00033dab) aid_ps_clock_pane

0x7aed,	// (0x00033db9) aid_ps_indicator_pane

0x7af9,	// (0x00033dc5) indicator_ps_pane_ParamLimits

0x7af9,	// (0x00033dc5) indicator_ps_pane

0x7b08,	// (0x00033dd4) power_save_pane_g1_ParamLimits

0x7b08,	// (0x00033dd4) power_save_pane_g1

0x7b14,	// (0x00033de0) power_save_pane_g2_ParamLimits

0x7b14,	// (0x00033de0) power_save_pane_g2

0x44a6,	// (0x00030772) aid_navinavi_width_pane

0x7ace,	// (0x00033d9a) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0003b811) power_save_pane_g_ParamLimits

0xf545,	// (0x0003b811) power_save_pane_g

0x7b22,	// (0x00033dee) power_save_pane_t1_ParamLimits

0x7b22,	// (0x00033dee) power_save_pane_t1

0x7adf,	// (0x00033dab) aid_ps_clock_pane_ParamLimits

0x7aed,	// (0x00033db9) aid_ps_indicator_pane_ParamLimits

0x7b34,	// (0x00033e00) power_save_pane_t4_ParamLimits

0x7b34,	// (0x00033e00) power_save_pane_t4

0x0001,

0xf54a,	// (0x0003b816) power_save_pane_t_ParamLimits

0xf54a,	// (0x0003b816) power_save_pane_t

0x7b5e,	// (0x00033e2a) power_save_t3_ParamLimits

0x7b5e,	// (0x00033e2a) power_save_t3

0x7b49,	// (0x00033e15) power_save_t2_ParamLimits

0x7b49,	// (0x00033e15) power_save_t2

0x7b73,	// (0x00033e3f) indicator_ps_pane_g1

0x7b7c,	// (0x00033e48) ai_gene_pane_ParamLimits

0x7b7c,	// (0x00033e48) ai_gene_pane

0x7b88,	// (0x00033e54) ai_links_pane_ParamLimits

0x7b88,	// (0x00033e54) ai_links_pane

0x7b94,	// (0x00033e60) indicator_pane_cp1_ParamLimits

0x7b94,	// (0x00033e60) indicator_pane_cp1

0x7ba0,	// (0x00033e6c) main_pane_idle_g1_cp_ParamLimits

0x7ba0,	// (0x00033e6c) main_pane_idle_g1_cp

0x7bac,	// (0x00033e78) popup_ai_links_title_window

0x7bb5,	// (0x00033e81) soft_indicator_pane_cp1_ParamLimits

0x7bb5,	// (0x00033e81) soft_indicator_pane_cp1

0xab5b,	// (0x00036e27) ai_links_pane_g1

0xab64,	// (0x00036e30) grid_ai_links_pane

0xab3e,	// (0x00036e0a) ai_gene_pane_1

0xab49,	// (0x00036e15) ai_gene_pane_2

0xab52,	// (0x00036e1e) list_highlight_pane_cp4

0xab22,	// (0x00036dee) cell_ai_link_pane_ParamLimits

0xab22,	// (0x00036dee) cell_ai_link_pane

0xab1a,	// (0x00036de6) cell_ai_link_pane_g1

0x7e0b,	// (0x000340d7) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0003bbbe) cell_ai_link_pane_g

0x78e8,	// (0x00033bb4) grid_highlight_cp2

0x78e8,	// (0x00033bb4) bg_popup_sub_pane_cp1

0x7bcf,	// (0x00033e9b) popup_ai_links_title_window_t1

0xaa68,	// (0x00036d34) ai_gene_pane_1_g1_ParamLimits

0xaa68,	// (0x00036d34) ai_gene_pane_1_g1

0xaa74,	// (0x00036d40) ai_gene_pane_1_g2_ParamLimits

0xaa74,	// (0x00036d40) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0003bbb4) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0003bbb4) ai_gene_pane_1_g

0xaa81,	// (0x00036d4d) ai_gene_pane_1_t1_ParamLimits

0xaa81,	// (0x00036d4d) ai_gene_pane_1_t1

0xaab5,	// (0x00036d81) grid_ai_soft_ind_pane

0xaa53,	// (0x00036d1f) ai_gene_pane_2_t1_ParamLimits

0xaa53,	// (0x00036d1f) ai_gene_pane_2_t1

0x7bde,	// (0x00033eaa) main_pane_empty_t1_ParamLimits

0x7bde,	// (0x00033eaa) main_pane_empty_t1

0x7bf6,	// (0x00033ec2) main_pane_empty_t2_ParamLimits

0x7bf6,	// (0x00033ec2) main_pane_empty_t2

0x7c0b,	// (0x00033ed7) main_pane_empty_t3_ParamLimits

0x7c0b,	// (0x00033ed7) main_pane_empty_t3

0x7c1d,	// (0x00033ee9) main_pane_empty_t4_ParamLimits

0x7c1d,	// (0x00033ee9) main_pane_empty_t4

0x7c2f,	// (0x00033efb) main_pane_empty_t5_ParamLimits

0x7c2f,	// (0x00033efb) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0003b81b) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0003b81b) main_pane_empty_t

0x8374,	// (0x00034640) bg_popup_window_pane_ParamLimits

0x8374,	// (0x00034640) bg_popup_window_pane

0xa7c3,	// (0x00036a8f) find_popup_pane_cp2_ParamLimits

0xa7c3,	// (0x00036a8f) find_popup_pane_cp2

0xa7cf,	// (0x00036a9b) heading_pane_ParamLimits

0xa7cf,	// (0x00036a9b) heading_pane

0x78e8,	// (0x00033bb4) bg_popup_sub_pane

0xa73d,	// (0x00036a09) bg_popup_window_pane_g1_ParamLimits

0xa73d,	// (0x00036a09) bg_popup_window_pane_g1

0xa749,	// (0x00036a15) bg_popup_window_pane_g2_ParamLimits

0xa749,	// (0x00036a15) bg_popup_window_pane_g2

0xa755,	// (0x00036a21) bg_popup_window_pane_g3_ParamLimits

0xa755,	// (0x00036a21) bg_popup_window_pane_g3

0xa761,	// (0x00036a2d) bg_popup_window_pane_g4_ParamLimits

0xa761,	// (0x00036a2d) bg_popup_window_pane_g4

0xa76d,	// (0x00036a39) bg_popup_window_pane_g5_ParamLimits

0xa76d,	// (0x00036a39) bg_popup_window_pane_g5

0xa779,	// (0x00036a45) bg_popup_window_pane_g6_ParamLimits

0xa779,	// (0x00036a45) bg_popup_window_pane_g6

0xa785,	// (0x00036a51) bg_popup_window_pane_g7_ParamLimits

0xa785,	// (0x00036a51) bg_popup_window_pane_g7

0xa791,	// (0x00036a5d) bg_popup_window_pane_g8_ParamLimits

0xa791,	// (0x00036a5d) bg_popup_window_pane_g8

0xa79d,	// (0x00036a69) bg_popup_window_pane_g9_ParamLimits

0xa79d,	// (0x00036a69) bg_popup_window_pane_g9

0xa7a9,	// (0x00036a75) bg_popup_window_pane_g10_ParamLimits

0xa7a9,	// (0x00036a75) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0003bb7c) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0003bb7c) bg_popup_window_pane_g

0xa6d2,	// (0x0003699e) bg_popup_heading_pane_ParamLimits

0xa6d2,	// (0x0003699e) bg_popup_heading_pane

0x61f8,	// (0x000324c4) tabs_4_passive_pane_cp_srt_ParamLimits

0x61f8,	// (0x000324c4) tabs_4_passive_pane_cp_srt

0x620a,	// (0x000324d6) tabs_4_passive_pane_srt_ParamLimits

0xa6e6,	// (0x000369b2) heading_pane_g2

0x620a,	// (0x000324d6) tabs_4_passive_pane_srt

0x94a5,	// (0x00035771) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94a5,	// (0x00035771) bg_passive_tab_pane_cp3_srt

0xa6ee,	// (0x000369ba) heading_pane_t1_ParamLimits

0xa6ee,	// (0x000369ba) heading_pane_t1

0xa705,	// (0x000369d1) heading_pane_t2_ParamLimits

0xa705,	// (0x000369d1) heading_pane_t2

0x0001,

0xf8ab,	// (0x0003bb77) heading_pane_t_ParamLimits

0xf8ab,	// (0x0003bb77) heading_pane_t

0xa1ff,	// (0x000364cb) bg_popup_heading_pane_g1

0xa2ae,	// (0x0003657a) bg_popup_heading_pane_g2

0xa2b8,	// (0x00036584) bg_popup_heading_pane_g3

0xa2c2,	// (0x0003658e) bg_popup_heading_pane_g4

0xa2cc,	// (0x00036598) bg_popup_heading_pane_g5

0xa2d6,	// (0x000365a2) bg_popup_heading_pane_g6

0xa2de,	// (0x000365aa) bg_popup_heading_pane_g7

0xa2e6,	// (0x000365b2) bg_popup_heading_pane_g8

0xa2f0,	// (0x000365bc) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0003bb33) bg_popup_heading_pane_g

0x99cf,	// (0x00035c9b) bg_popup_sub_pane_g1

0x99df,	// (0x00035cab) bg_popup_sub_pane_g2

0x99d7,	// (0x00035ca3) bg_popup_sub_pane_g3

0x99ef,	// (0x00035cbb) bg_popup_sub_pane_g4

0x99e7,	// (0x00035cb3) bg_popup_sub_pane_g5

0x99f7,	// (0x00035cc3) bg_popup_sub_pane_g6

0x99ff,	// (0x00035ccb) bg_popup_sub_pane_g7

0x9a0f,	// (0x00035cdb) bg_popup_sub_pane_g8

0x9a07,	// (0x00035cd3) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0003bb0d) bg_popup_sub_pane_g

0x7c43,	// (0x00033f0f) bg_popup_window_pane_cp5_ParamLimits

0x7c43,	// (0x00033f0f) bg_popup_window_pane_cp5

0x7c5f,	// (0x00033f2b) popup_note_window_g1_ParamLimits

0x7c5f,	// (0x00033f2b) popup_note_window_g1

0x7c6b,	// (0x00033f37) popup_note_window_t1_ParamLimits

0x7c6b,	// (0x00033f37) popup_note_window_t1

0x7c81,	// (0x00033f4d) popup_note_window_t2_ParamLimits

0x7c81,	// (0x00033f4d) popup_note_window_t2

0x7c97,	// (0x00033f63) popup_note_window_t3_ParamLimits

0x7c97,	// (0x00033f63) popup_note_window_t3

0x7cad,	// (0x00033f79) popup_note_window_t4_ParamLimits

0x7cad,	// (0x00033f79) popup_note_window_t4

0x7cd5,	// (0x00033fa1) popup_note_window_t5_ParamLimits

0x7cd5,	// (0x00033fa1) popup_note_window_t5

0x0004,

0xf55a,	// (0x0003b826) popup_note_window_t_ParamLimits

0xf55a,	// (0x0003b826) popup_note_window_t

0x7d1f,	// (0x00033feb) bg_popup_window_pane_cp6_ParamLimits

0x7d1f,	// (0x00033feb) bg_popup_window_pane_cp6

0xa17b,	// (0x00036447) popup_note_image_window_g1_ParamLimits

0xa17b,	// (0x00036447) popup_note_image_window_g1

0xa187,	// (0x00036453) popup_note_image_window_g2_ParamLimits

0xa187,	// (0x00036453) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0003bb01) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0003bb01) popup_note_image_window_g

0xa1a0,	// (0x0003646c) popup_note_image_window_t1_ParamLimits

0xa1a0,	// (0x0003646c) popup_note_image_window_t1

0xa1b9,	// (0x00036485) popup_note_image_window_t2_ParamLimits

0xa1b9,	// (0x00036485) popup_note_image_window_t2

0xa1d2,	// (0x0003649e) popup_note_image_window_t3_ParamLimits

0xa1d2,	// (0x0003649e) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0003bb06) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0003bb06) popup_note_image_window_t

0xa03c,	// (0x00036308) bg_popup_window_pane_cp7_ParamLimits

0xa03c,	// (0x00036308) bg_popup_window_pane_cp7

0xa06c,	// (0x00036338) popup_note_wait_window_g1_ParamLimits

0xa06c,	// (0x00036338) popup_note_wait_window_g1

0xa078,	// (0x00036344) popup_note_wait_window_g2_ParamLimits

0xa078,	// (0x00036344) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0003baef) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0003baef) popup_note_wait_window_g

0xa090,	// (0x0003635c) popup_note_wait_window_t1_ParamLimits

0xa090,	// (0x0003635c) popup_note_wait_window_t1

0xa0b7,	// (0x00036383) popup_note_wait_window_t2_ParamLimits

0xa0b7,	// (0x00036383) popup_note_wait_window_t2

0xa0d4,	// (0x000363a0) popup_note_wait_window_t3_ParamLimits

0xa0d4,	// (0x000363a0) popup_note_wait_window_t3

0xa0e7,	// (0x000363b3) popup_note_wait_window_t4_ParamLimits

0xa0e7,	// (0x000363b3) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0003baf6) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0003baf6) popup_note_wait_window_t

0xa10c,	// (0x000363d8) wait_bar_pane_ParamLimits

0xa10c,	// (0x000363d8) wait_bar_pane

0x78e8,	// (0x00033bb4) wait_anim_pane

0x78e8,	// (0x00033bb4) wait_border_pane

0x2963,	// (0x0002ec2f) wait_anim_pane_g1

0x2963,	// (0x0002ec2f) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0003b9aa) wait_anim_pane_g

0x9fe0,	// (0x000362ac) wait_border_pane_g1

0x9feb,	// (0x000362b7) wait_border_pane_g2

0x9ff4,	// (0x000362c0) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0003bae8) wait_border_pane_g

0x9e4b,	// (0x00036117) bg_popup_window_pane_cp16_ParamLimits

0x9e4b,	// (0x00036117) bg_popup_window_pane_cp16

0x9f4b,	// (0x00036217) indicator_popup_pane_cp4_ParamLimits

0x9f4b,	// (0x00036217) indicator_popup_pane_cp4

0x9f5f,	// (0x0003622b) popup_query_data_window_t1_ParamLimits

0x9f5f,	// (0x0003622b) popup_query_data_window_t1

0x9f71,	// (0x0003623d) popup_query_data_window_t2_ParamLimits

0x9f71,	// (0x0003623d) popup_query_data_window_t2

0x9f8a,	// (0x00036256) popup_query_data_window_t3_ParamLimits

0x9f8a,	// (0x00036256) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0003bae1) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0003bae1) popup_query_data_window_t

0x9fa4,	// (0x00036270) query_popup_data_pane_ParamLimits

0x9fa4,	// (0x00036270) query_popup_data_pane

0x9fb8,	// (0x00036284) query_popup_data_pane_cp1_ParamLimits

0x9fb8,	// (0x00036284) query_popup_data_pane_cp1

0x9e4b,	// (0x00036117) bg_popup_window_pane_cp10_ParamLimits

0x9e4b,	// (0x00036117) bg_popup_window_pane_cp10

0x9e7d,	// (0x00036149) indicator_popup_pane_ParamLimits

0x9e7d,	// (0x00036149) indicator_popup_pane

0x9e9f,	// (0x0003616b) popup_query_code_window_t1_ParamLimits

0x9e9f,	// (0x0003616b) popup_query_code_window_t1

0x9eb9,	// (0x00036185) popup_query_code_window_t2_ParamLimits

0x9eb9,	// (0x00036185) popup_query_code_window_t2

0x9f02,	// (0x000361ce) popup_query_code_window_t3_ParamLimits

0x9f02,	// (0x000361ce) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0003bada) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0003bada) popup_query_code_window_t

0x9f31,	// (0x000361fd) query_popup_pane_ParamLimits

0x9f31,	// (0x000361fd) query_popup_pane

0x7d1f,	// (0x00033feb) bg_popup_window_pane_cp15_ParamLimits

0x7d1f,	// (0x00033feb) bg_popup_window_pane_cp15

0x7d3d,	// (0x00034009) indicator_popup_pane_cp1_ParamLimits

0x7d3d,	// (0x00034009) indicator_popup_pane_cp1

0x7d50,	// (0x0003401c) indicator_popup_pane_cp2_ParamLimits

0x7d50,	// (0x0003401c) indicator_popup_pane_cp2

0x7d63,	// (0x0003402f) popup_query_data_code_window_g1_ParamLimits

0x7d63,	// (0x0003402f) popup_query_data_code_window_g1

0x7d76,	// (0x00034042) popup_query_data_code_window_t1_ParamLimits

0x7d76,	// (0x00034042) popup_query_data_code_window_t1

0x7d88,	// (0x00034054) popup_query_data_code_window_t2_ParamLimits

0x7d88,	// (0x00034054) popup_query_data_code_window_t2

0x7d9a,	// (0x00034066) popup_query_data_code_window_t3_ParamLimits

0x7d9a,	// (0x00034066) popup_query_data_code_window_t3

0x7db0,	// (0x0003407c) popup_query_data_code_window_t4_ParamLimits

0x7db0,	// (0x0003407c) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0003b831) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0003b831) popup_query_data_code_window_t

0x5cac,	// (0x00031f78) list_single_midp_graphic_pane_g3

0x7dc8,	// (0x00034094) query_popup_data_pane_cp2_ParamLimits

0x7ddb,	// (0x000340a7) query_popup_pane_cp2_ParamLimits

0x7ddb,	// (0x000340a7) query_popup_pane_cp2

0x78e8,	// (0x00033bb4) bg_popup_window_pane_cp11

0x9e2f,	// (0x000360fb) heading_pane_cp5

0x9e37,	// (0x00036103) listscroll_popup_info_pane

0x78e8,	// (0x00033bb4) input_focus_pane_cp3

0x7dee,	// (0x000340ba) query_popup_pane_t1

0x7dfc,	// (0x000340c8) list_popup_info_pane_ParamLimits

0x7dfc,	// (0x000340c8) list_popup_info_pane

0x7e0b,	// (0x000340d7) listscroll_popup_info_pane_g1

0x7e13,	// (0x000340df) scroll_pane_cp7

0x7e1d,	// (0x000340e9) popup_info_list_pane_t1_ParamLimits

0x7e1d,	// (0x000340e9) popup_info_list_pane_t1

0x7e37,	// (0x00034103) popup_info_list_pane_t2_ParamLimits

0x7e37,	// (0x00034103) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0003b83a) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0003b83a) popup_info_list_pane_t

0x78e8,	// (0x00033bb4) bg_popup_window_pane_cp12

0xb1d4,	// (0x000374a0) find_popup_pane

0x79c8,	// (0x00033c94) bg_popup_window_pane_cp3

0x7e51,	// (0x0003411d) heading_pane_cp3

0x7e60,	// (0x0003412c) listscroll_popup_graphic_pane

0x78e8,	// (0x00033bb4) bg_popup_window_pane_cp4

0x7ec0,	// (0x0003418c) heading_pane_cp4

0x7eca,	// (0x00034196) listscroll_popup_colour_pane

0x7ed2,	// (0x0003419e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7ed2,	// (0x0003419e) cell_large_graphic_colour_none_popup_pane

0x7ee6,	// (0x000341b2) grid_large_graphic_colour_popup_pane_ParamLimits

0x7ee6,	// (0x000341b2) grid_large_graphic_colour_popup_pane

0x7f0a,	// (0x000341d6) listscroll_popup_colour_pane_g1_ParamLimits

0x7f0a,	// (0x000341d6) listscroll_popup_colour_pane_g1

0x7f21,	// (0x000341ed) listscroll_popup_colour_pane_g2_ParamLimits

0x7f21,	// (0x000341ed) listscroll_popup_colour_pane_g2

0x7f38,	// (0x00034204) listscroll_popup_colour_pane_g3_ParamLimits

0x7f38,	// (0x00034204) listscroll_popup_colour_pane_g3

0x7f48,	// (0x00034214) listscroll_popup_colour_pane_g4_ParamLimits

0x7f48,	// (0x00034214) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0003b83f) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0003b83f) listscroll_popup_colour_pane_g

0x7f58,	// (0x00034224) scroll_pane_cp6_ParamLimits

0x7f58,	// (0x00034224) scroll_pane_cp6

0x7f6a,	// (0x00034236) cell_large_graphic_colour_popup_pane_ParamLimits

0x7f6a,	// (0x00034236) cell_large_graphic_colour_popup_pane

0x7f89,	// (0x00034255) cell_large_graphic_colour_none_popup_pane_t1

0x78e8,	// (0x00033bb4) grid_highlight_pane_cp5

0x7f98,	// (0x00034264) cell_large_graphic_colour_popup_pane_g1

0x7fa0,	// (0x0003426c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0003b848) cell_large_graphic_colour_popup_pane_g

0x7fa8,	// (0x00034274) cell_large_graphic_colour_popup_pane_g2_copy1

0x7fb1,	// (0x0003427d) grid_highlight_pane_cp4

0x7fb9,	// (0x00034285) bg_popup_window_pane_cp8_ParamLimits

0x7fb9,	// (0x00034285) bg_popup_window_pane_cp8

0x7fd4,	// (0x000342a0) popup_snote_single_text_window_g1_ParamLimits

0x7fd4,	// (0x000342a0) popup_snote_single_text_window_g1

0x7fe6,	// (0x000342b2) popup_snote_single_text_window_t1_ParamLimits

0x7fe6,	// (0x000342b2) popup_snote_single_text_window_t1

0x7ff9,	// (0x000342c5) popup_snote_single_text_window_t2_ParamLimits

0x7ff9,	// (0x000342c5) popup_snote_single_text_window_t2

0x800c,	// (0x000342d8) popup_snote_single_text_window_t3_ParamLimits

0x800c,	// (0x000342d8) popup_snote_single_text_window_t3

0x8045,	// (0x00034311) popup_snote_single_text_window_t4_ParamLimits

0x8045,	// (0x00034311) popup_snote_single_text_window_t4

0x8079,	// (0x00034345) popup_snote_single_text_window_t5_ParamLimits

0x8079,	// (0x00034345) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0003b84d) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0003b84d) popup_snote_single_text_window_t

0x80a8,	// (0x00034374) bg_popup_window_pane_cp9_ParamLimits

0x80a8,	// (0x00034374) bg_popup_window_pane_cp9

0x7fd4,	// (0x000342a0) popup_snote_single_graphic_window_g1_ParamLimits

0x7fd4,	// (0x000342a0) popup_snote_single_graphic_window_g1

0x80b6,	// (0x00034382) popup_snote_single_graphic_window_g2_ParamLimits

0x80b6,	// (0x00034382) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0003b858) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0003b858) popup_snote_single_graphic_window_g

0x80c2,	// (0x0003438e) popup_snote_single_graphic_window_t1_ParamLimits

0x80c2,	// (0x0003438e) popup_snote_single_graphic_window_t1

0x80d5,	// (0x000343a1) popup_snote_single_graphic_window_t2_ParamLimits

0x80d5,	// (0x000343a1) popup_snote_single_graphic_window_t2

0x80e8,	// (0x000343b4) popup_snote_single_graphic_window_t3_ParamLimits

0x80e8,	// (0x000343b4) popup_snote_single_graphic_window_t3

0x8121,	// (0x000343ed) popup_snote_single_graphic_window_t4_ParamLimits

0x8121,	// (0x000343ed) popup_snote_single_graphic_window_t4

0x8155,	// (0x00034421) popup_snote_single_graphic_window_t5_ParamLimits

0x8155,	// (0x00034421) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0003b85d) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0003b85d) popup_snote_single_graphic_window_t

0xb116,	// (0x000373e2) grid_graphic_popup_pane_ParamLimits

0xb116,	// (0x000373e2) grid_graphic_popup_pane

0xb140,	// (0x0003740c) listscroll_popup_graphic_pane_g1_ParamLimits

0xb140,	// (0x0003740c) listscroll_popup_graphic_pane_g1

0xb154,	// (0x00037420) listscroll_popup_graphic_pane_g2_ParamLimits

0xb154,	// (0x00037420) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0003bc57) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0003bc57) listscroll_popup_graphic_pane_g

0xb168,	// (0x00037434) scroll_pane_cp5

0xb0a7,	// (0x00037373) cell_graphic_popup_pane_ParamLimits

0xb0a7,	// (0x00037373) cell_graphic_popup_pane

0xb088,	// (0x00037354) cell_graphic_popup_pane_g1

0xb090,	// (0x0003735c) cell_graphic_popup_pane_g2

0x7fa8,	// (0x00034274) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0003bc50) cell_graphic_popup_pane_g

0xb099,	// (0x00037365) cell_graphic_popup_pane_t2

0x7fb1,	// (0x0003427d) grid_highlight_pane_cp3

0x8196,	// (0x00034462) list_gen_pane_ParamLimits

0x8196,	// (0x00034462) list_gen_pane

0x81c8,	// (0x00034494) scroll_pane

0xafe0,	// (0x000372ac) bg_list_pane_g1_ParamLimits

0xafe0,	// (0x000372ac) bg_list_pane_g1

0xaffd,	// (0x000372c9) bg_list_pane_g2_ParamLimits

0xaffd,	// (0x000372c9) bg_list_pane_g2

0xb012,	// (0x000372de) bg_list_pane_g3_ParamLimits

0xb012,	// (0x000372de) bg_list_pane_g3

0xb026,	// (0x000372f2) bg_list_pane_g4_ParamLimits

0xb026,	// (0x000372f2) bg_list_pane_g4

0xb03a,	// (0x00037306) bg_list_pane_g5_ParamLimits

0xb03a,	// (0x00037306) bg_list_pane_g5

0x0004,

0xf979,	// (0x0003bc45) bg_list_pane_g_ParamLimits

0xf979,	// (0x0003bc45) bg_list_pane_g

0x612a,	// (0x000323f6) list_double2_graphic_large_graphic_pane_ParamLimits

0x612a,	// (0x000323f6) list_double2_graphic_large_graphic_pane

0x612a,	// (0x000323f6) list_double2_graphic_pane_ParamLimits

0x612a,	// (0x000323f6) list_double2_graphic_pane

0x612a,	// (0x000323f6) list_double2_large_graphic_pane_ParamLimits

0x612a,	// (0x000323f6) list_double2_large_graphic_pane

0x612a,	// (0x000323f6) list_double2_pane_ParamLimits

0x612a,	// (0x000323f6) list_double2_pane

0x612a,	// (0x000323f6) list_double_graphic_heading_pane_ParamLimits

0x612a,	// (0x000323f6) list_double_graphic_heading_pane

0x612a,	// (0x000323f6) list_double_graphic_pane_ParamLimits

0x612a,	// (0x000323f6) list_double_graphic_pane

0x612a,	// (0x000323f6) list_double_heading_pane_ParamLimits

0x612a,	// (0x000323f6) list_double_heading_pane

0x612a,	// (0x000323f6) list_double_large_graphic_pane_ParamLimits

0x612a,	// (0x000323f6) list_double_large_graphic_pane

0x612a,	// (0x000323f6) list_double_number_pane_ParamLimits

0x612a,	// (0x000323f6) list_double_number_pane

0x612a,	// (0x000323f6) list_double_pane_ParamLimits

0x612a,	// (0x000323f6) list_double_pane

0x612a,	// (0x000323f6) list_double_time_pane_ParamLimits

0x612a,	// (0x000323f6) list_double_time_pane

0x612a,	// (0x000323f6) list_setting_number_pane_ParamLimits

0x612a,	// (0x000323f6) list_setting_number_pane

0x612a,	// (0x000323f6) list_setting_pane_ParamLimits

0x612a,	// (0x000323f6) list_setting_pane

0x6178,	// (0x00032444) list_single_2graphic_pane_ParamLimits

0x6178,	// (0x00032444) list_single_2graphic_pane

0x6178,	// (0x00032444) list_single_graphic_heading_pane_ParamLimits

0x6178,	// (0x00032444) list_single_graphic_heading_pane

0x6178,	// (0x00032444) list_single_graphic_pane_ParamLimits

0x6178,	// (0x00032444) list_single_graphic_pane

0x6178,	// (0x00032444) list_single_heading_pane_ParamLimits

0x6178,	// (0x00032444) list_single_heading_pane

0xafbe,	// (0x0003728a) list_single_large_graphic_pane_ParamLimits

0xafbe,	// (0x0003728a) list_single_large_graphic_pane

0x6178,	// (0x00032444) list_single_number_heading_pane_ParamLimits

0x6178,	// (0x00032444) list_single_number_heading_pane

0x6178,	// (0x00032444) list_single_number_pane_ParamLimits

0x6178,	// (0x00032444) list_single_number_pane

0x6178,	// (0x00032444) list_single_pane_ParamLimits

0x6178,	// (0x00032444) list_single_pane

0x78e8,	// (0x00033bb4) list_highlight_pane_cp1

0x39b6,	// (0x0002fc82) list_single_pane_g1_ParamLimits

0x39b6,	// (0x0002fc82) list_single_pane_g1

0x4930,	// (0x00030bfc) list_single_pane_g2_ParamLimits

0x4930,	// (0x00030bfc) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0003b86f) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0003b86f) list_single_pane_g

0x6114,	// (0x000323e0) list_single_pane_t1_ParamLimits

0x6114,	// (0x000323e0) list_single_pane_t1

0x39b6,	// (0x0002fc82) list_single_number_pane_g1_ParamLimits

0x39b6,	// (0x0002fc82) list_single_number_pane_g1

0x4930,	// (0x00030bfc) list_single_number_pane_g2_ParamLimits

0x4930,	// (0x00030bfc) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0003b86f) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0003b86f) list_single_number_pane_g

0x6046,	// (0x00032312) list_single_number_pane_t1_ParamLimits

0x6046,	// (0x00032312) list_single_number_pane_t1

0x605c,	// (0x00032328) list_single_number_pane_t2_ParamLimits

0x605c,	// (0x00032328) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0003bc06) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0003bc06) list_single_number_pane_t

0x39aa,	// (0x0002fc76) list_single_graphic_pane_g1_ParamLimits

0x39aa,	// (0x0002fc76) list_single_graphic_pane_g1

0x39b6,	// (0x0002fc82) list_single_graphic_pane_g2_ParamLimits

0x39b6,	// (0x0002fc82) list_single_graphic_pane_g2

0x4930,	// (0x00030bfc) list_single_graphic_pane_g3_ParamLimits

0x4930,	// (0x00030bfc) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0003b868) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0003b868) list_single_graphic_pane_g

0x493c,	// (0x00030c08) list_single_graphic_pane_t1_ParamLimits

0x493c,	// (0x00030c08) list_single_graphic_pane_t1

0x39b6,	// (0x0002fc82) list_single_heading_pane_g1_ParamLimits

0x39b6,	// (0x0002fc82) list_single_heading_pane_g1

0x4930,	// (0x00030bfc) list_single_heading_pane_g2_ParamLimits

0x4930,	// (0x00030bfc) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003b86f) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003b86f) list_single_heading_pane_g

0x4952,	// (0x00030c1e) list_single_heading_pane_t1_ParamLimits

0x4952,	// (0x00030c1e) list_single_heading_pane_t1

0x4968,	// (0x00030c34) list_single_heading_pane_t2_ParamLimits

0x4968,	// (0x00030c34) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0003b874) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0003b874) list_single_heading_pane_t

0x39b6,	// (0x0002fc82) list_single_number_heading_pane_g1_ParamLimits

0x39b6,	// (0x0002fc82) list_single_number_heading_pane_g1

0x4930,	// (0x00030bfc) list_single_number_heading_pane_g2_ParamLimits

0x4930,	// (0x00030bfc) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003b86f) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003b86f) list_single_number_heading_pane_g

0x4952,	// (0x00030c1e) list_single_number_heading_pane_t1_ParamLimits

0x4952,	// (0x00030c1e) list_single_number_heading_pane_t1

0x497a,	// (0x00030c46) list_single_number_heading_pane_t2_ParamLimits

0x497a,	// (0x00030c46) list_single_number_heading_pane_t2

0x498c,	// (0x00030c58) list_single_number_heading_pane_t3_ParamLimits

0x498c,	// (0x00030c58) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0003b879) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0003b879) list_single_number_heading_pane_t

0x499e,	// (0x00030c6a) list_single_graphic_heading_pane_g1_ParamLimits

0x499e,	// (0x00030c6a) list_single_graphic_heading_pane_g1

0x49aa,	// (0x00030c76) list_single_graphic_heading_pane_g4_ParamLimits

0x49aa,	// (0x00030c76) list_single_graphic_heading_pane_g4

0x4930,	// (0x00030bfc) list_single_graphic_heading_pane_g5_ParamLimits

0x4930,	// (0x00030bfc) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0003b880) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0003b880) list_single_graphic_heading_pane_g

0x4952,	// (0x00030c1e) list_single_graphic_heading_pane_t1_ParamLimits

0x4952,	// (0x00030c1e) list_single_graphic_heading_pane_t1

0x49bb,	// (0x00030c87) list_single_graphic_heading_pane_t2_ParamLimits

0x49bb,	// (0x00030c87) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0003b887) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0003b887) list_single_graphic_heading_pane_t

0x49cd,	// (0x00030c99) list_single_large_graphic_pane_g1_ParamLimits

0x49cd,	// (0x00030c99) list_single_large_graphic_pane_g1

0x3971,	// (0x0002fc3d) list_single_large_graphic_pane_g2_ParamLimits

0x3971,	// (0x0002fc3d) list_single_large_graphic_pane_g2

0x397d,	// (0x0002fc49) list_single_large_graphic_pane_g3_ParamLimits

0x397d,	// (0x0002fc49) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0003b88c) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0003b88c) list_single_large_graphic_pane_g

0x9feb,	// (0x000362b7) wait_border_pane_g2_copy1

0x49d9,	// (0x00030ca5) list_single_large_graphic_pane_g4_cp2

0x49e1,	// (0x00030cad) list_single_large_graphic_pane_t1_ParamLimits

0x49e1,	// (0x00030cad) list_single_large_graphic_pane_t1

0x49f7,	// (0x00030cc3) list_double_pane_g1_ParamLimits

0x49f7,	// (0x00030cc3) list_double_pane_g1

0x399e,	// (0x0002fc6a) list_double_pane_g2_ParamLimits

0x399e,	// (0x0002fc6a) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0003b893) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0003b893) list_double_pane_g

0x4a03,	// (0x00030ccf) list_double_pane_t1_ParamLimits

0x4a03,	// (0x00030ccf) list_double_pane_t1

0x4a19,	// (0x00030ce5) list_double_pane_t2_ParamLimits

0x4a19,	// (0x00030ce5) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0003b898) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0003b898) list_double_pane_t

0x4a2b,	// (0x00030cf7) list_double2_pane_g1_ParamLimits

0x4a2b,	// (0x00030cf7) list_double2_pane_g1

0x4a3c,	// (0x00030d08) list_double2_pane_g2_ParamLimits

0x4a3c,	// (0x00030d08) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0003b89d) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0003b89d) list_double2_pane_g

0x4a48,	// (0x00030d14) list_double2_pane_t1_ParamLimits

0x4a48,	// (0x00030d14) list_double2_pane_t1

0x4a5e,	// (0x00030d2a) list_double2_pane_t2_ParamLimits

0x4a5e,	// (0x00030d2a) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0003b8a2) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0003b8a2) list_double2_pane_t

0x49f7,	// (0x00030cc3) list_double_number_pane_g1_ParamLimits

0x49f7,	// (0x00030cc3) list_double_number_pane_g1

0x399e,	// (0x0002fc6a) list_double_number_pane_g2_ParamLimits

0x399e,	// (0x0002fc6a) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0003b893) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0003b893) list_double_number_pane_g

0x4a70,	// (0x00030d3c) list_double_number_pane_t1_ParamLimits

0x4a70,	// (0x00030d3c) list_double_number_pane_t1

0x4a82,	// (0x00030d4e) list_double_number_pane_t2_ParamLimits

0x4a82,	// (0x00030d4e) list_double_number_pane_t2

0x4a98,	// (0x00030d64) list_double_number_pane_t3_ParamLimits

0x4a98,	// (0x00030d64) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0003b8a7) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0003b8a7) list_double_number_pane_t

0x4aaa,	// (0x00030d76) list_double_graphic_pane_g1_ParamLimits

0x4aaa,	// (0x00030d76) list_double_graphic_pane_g1

0x4ab6,	// (0x00030d82) list_double_graphic_pane_g2_ParamLimits

0x4ab6,	// (0x00030d82) list_double_graphic_pane_g2

0x4ac5,	// (0x00030d91) list_double_graphic_pane_g3_ParamLimits

0x4ac5,	// (0x00030d91) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0003b8ae) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0003b8ae) list_double_graphic_pane_g

0x4add,	// (0x00030da9) list_double_graphic_pane_t1_ParamLimits

0x4add,	// (0x00030da9) list_double_graphic_pane_t1

0x4af3,	// (0x00030dbf) list_double_graphic_pane_t2_ParamLimits

0x4af3,	// (0x00030dbf) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0003b8b7) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0003b8b7) list_double_graphic_pane_t

0x4b05,	// (0x00030dd1) list_double2_graphic_pane_g1_ParamLimits

0x4b05,	// (0x00030dd1) list_double2_graphic_pane_g1

0x4b11,	// (0x00030ddd) list_double2_graphic_pane_g2_ParamLimits

0x4b11,	// (0x00030ddd) list_double2_graphic_pane_g2

0x4a3c,	// (0x00030d08) list_double2_graphic_pane_g3_ParamLimits

0x4a3c,	// (0x00030d08) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0003b8bc) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0003b8bc) list_double2_graphic_pane_g

0x4b1d,	// (0x00030de9) list_double2_graphic_pane_t1_ParamLimits

0x4b1d,	// (0x00030de9) list_double2_graphic_pane_t1

0x4b33,	// (0x00030dff) list_double2_graphic_pane_t2_ParamLimits

0x4b33,	// (0x00030dff) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0003b8c3) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0003b8c3) list_double2_graphic_pane_t

0x4b45,	// (0x00030e11) list_double_large_graphic_pane_g1_ParamLimits

0x4b45,	// (0x00030e11) list_double_large_graphic_pane_g1

0x4b64,	// (0x00030e30) list_double_large_graphic_pane_g2_ParamLimits

0x4b64,	// (0x00030e30) list_double_large_graphic_pane_g2

0x399e,	// (0x0002fc6a) list_double_large_graphic_pane_g3_ParamLimits

0x399e,	// (0x0002fc6a) list_double_large_graphic_pane_g3

0x4b75,	// (0x00030e41) list_double_large_graphic_pane_g4_ParamLimits

0x4b75,	// (0x00030e41) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0003b8c8) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0003b8c8) list_double_large_graphic_pane_g

0x4b87,	// (0x00030e53) list_double_large_graphic_pane_t1_ParamLimits

0x4b87,	// (0x00030e53) list_double_large_graphic_pane_t1

0x4ba0,	// (0x00030e6c) list_double_large_graphic_pane_t2_ParamLimits

0x4ba0,	// (0x00030e6c) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0003b8d3) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0003b8d3) list_double_large_graphic_pane_t

0x4bb2,	// (0x00030e7e) list_double2_large_graphic_pane_g1_ParamLimits

0x4bb2,	// (0x00030e7e) list_double2_large_graphic_pane_g1

0x4a2b,	// (0x00030cf7) list_double2_large_graphic_pane_g2_ParamLimits

0x4a2b,	// (0x00030cf7) list_double2_large_graphic_pane_g2

0x4a3c,	// (0x00030d08) list_double2_large_graphic_pane_g3_ParamLimits

0x4a3c,	// (0x00030d08) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0003b8d8) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0003b8d8) list_double2_large_graphic_pane_g

0x4bbe,	// (0x00030e8a) list_double2_large_graphic_pane_t1_ParamLimits

0x4bbe,	// (0x00030e8a) list_double2_large_graphic_pane_t1

0x4bd4,	// (0x00030ea0) list_double2_large_graphic_pane_t2_ParamLimits

0x4bd4,	// (0x00030ea0) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0003b8df) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0003b8df) list_double2_large_graphic_pane_t

0x4be6,	// (0x00030eb2) list_double_heading_pane_g1_ParamLimits

0x4be6,	// (0x00030eb2) list_double_heading_pane_g1

0x4bf7,	// (0x00030ec3) list_double_heading_pane_g2_ParamLimits

0x4bf7,	// (0x00030ec3) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0003b8e4) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0003b8e4) list_double_heading_pane_g

0x4c03,	// (0x00030ecf) list_double_heading_pane_t1_ParamLimits

0x4c03,	// (0x00030ecf) list_double_heading_pane_t1

0x4a5e,	// (0x00030d2a) list_double_heading_pane_t2_ParamLimits

0x4a5e,	// (0x00030d2a) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0003b8e9) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0003b8e9) list_double_heading_pane_t

0x4c19,	// (0x00030ee5) list_double_graphic_heading_pane_g1_ParamLimits

0x4c19,	// (0x00030ee5) list_double_graphic_heading_pane_g1

0x4be6,	// (0x00030eb2) list_double_graphic_heading_pane_g2_ParamLimits

0x4be6,	// (0x00030eb2) list_double_graphic_heading_pane_g2

0x4bf7,	// (0x00030ec3) list_double_graphic_heading_pane_g3_ParamLimits

0x4bf7,	// (0x00030ec3) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0003b8ee) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003b8ee) list_double_graphic_heading_pane_g

0x4c25,	// (0x00030ef1) list_double_graphic_heading_pane_t1_ParamLimits

0x4c25,	// (0x00030ef1) list_double_graphic_heading_pane_t1

0x4b33,	// (0x00030dff) list_double_graphic_heading_pane_t2_ParamLimits

0x4b33,	// (0x00030dff) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003b8f5) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003b8f5) list_double_graphic_heading_pane_t

0x4b64,	// (0x00030e30) list_double_time_pane_g1_ParamLimits

0x4b64,	// (0x00030e30) list_double_time_pane_g1

0x399e,	// (0x0002fc6a) list_double_time_pane_g2_ParamLimits

0x399e,	// (0x0002fc6a) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0003b8fa) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0003b8fa) list_double_time_pane_g

0x4c3b,	// (0x00030f07) list_double_time_pane_t1_ParamLimits

0x4c3b,	// (0x00030f07) list_double_time_pane_t1

0x4c51,	// (0x00030f1d) list_double_time_pane_t2_ParamLimits

0x4c51,	// (0x00030f1d) list_double_time_pane_t2

0x4c63,	// (0x00030f2f) list_double_time_pane_t3_ParamLimits

0x4c63,	// (0x00030f2f) list_double_time_pane_t3

0x4c75,	// (0x00030f41) list_double_time_pane_t4_ParamLimits

0x4c75,	// (0x00030f41) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0003b8ff) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0003b8ff) list_double_time_pane_t

0x4b11,	// (0x00030ddd) list_setting_pane_g1_ParamLimits

0x4b11,	// (0x00030ddd) list_setting_pane_g1

0x4a3c,	// (0x00030d08) list_setting_pane_g2_ParamLimits

0x4a3c,	// (0x00030d08) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0003b908) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0003b908) list_setting_pane_g

0x4c87,	// (0x00030f53) list_setting_pane_t1_ParamLimits

0x4c87,	// (0x00030f53) list_setting_pane_t1

0x4ca1,	// (0x00030f6d) list_setting_pane_t2_ParamLimits

0x4ca1,	// (0x00030f6d) list_setting_pane_t2

0x0002,

0xf641,	// (0x0003b90d) list_setting_pane_t_ParamLimits

0xf641,	// (0x0003b90d) list_setting_pane_t

0x4ce0,	// (0x00030fac) set_value_pane_cp_ParamLimits

0x4ce0,	// (0x00030fac) set_value_pane_cp

0x4cec,	// (0x00030fb8) list_setting_number_pane_g1_ParamLimits

0x4cec,	// (0x00030fb8) list_setting_number_pane_g1

0x4cf8,	// (0x00030fc4) list_setting_number_pane_g2_ParamLimits

0x4cf8,	// (0x00030fc4) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0003b914) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0003b914) list_setting_number_pane_g

0x4d04,	// (0x00030fd0) list_setting_number_pane_t1_ParamLimits

0x4d04,	// (0x00030fd0) list_setting_number_pane_t1

0x4d1d,	// (0x00030fe9) list_setting_number_pane_t2_ParamLimits

0x4d1d,	// (0x00030fe9) list_setting_number_pane_t2

0x4d37,	// (0x00031003) list_setting_number_pane_t3_ParamLimits

0x4d37,	// (0x00031003) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0003b919) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0003b919) list_setting_number_pane_t

0x4ce0,	// (0x00030fac) set_value_pane_ParamLimits

0x4ce0,	// (0x00030fac) set_value_pane

0x81fc,	// (0x000344c8) bg_set_opt_pane_ParamLimits

0x81fc,	// (0x000344c8) bg_set_opt_pane

0x3a36,	// (0x0002fd02) set_value_pane_t1

0x821d,	// (0x000344e9) slider_set_pane_cp3

0x8226,	// (0x000344f2) volume_small_pane_cp

0x822f,	// (0x000344fb) list_form_gen_pane

0x8238,	// (0x00034504) scroll_pane_cp8

0x4d7a,	// (0x00031046) form_field_data_pane_ParamLimits

0x4d7a,	// (0x00031046) form_field_data_pane

0x4d9a,	// (0x00031066) form_field_data_wide_pane_ParamLimits

0x4d9a,	// (0x00031066) form_field_data_wide_pane

0x4dbb,	// (0x00031087) form_field_popup_pane_ParamLimits

0x4dbb,	// (0x00031087) form_field_popup_pane

0x4ddb,	// (0x000310a7) form_field_popup_wide_pane_ParamLimits

0x4ddb,	// (0x000310a7) form_field_popup_wide_pane

0x4df8,	// (0x000310c4) form_field_slider_pane_ParamLimits

0x4df8,	// (0x000310c4) form_field_slider_pane

0x4e0b,	// (0x000310d7) form_field_slider_wide_pane_ParamLimits

0x4e0b,	// (0x000310d7) form_field_slider_wide_pane

0x8249,	// (0x00034515) data_form_pane

0x4e28,	// (0x000310f4) form_field_data_pane_t1

0x8255,	// (0x00034521) input_focus_pane

0x4e40,	// (0x0003110c) data_form_wide_pane

0x4e5d,	// (0x00031129) form_field_data_wide_pane_t1

0x7fc6,	// (0x00034292) input_focus_pane_cp6

0x4e7f,	// (0x0003114b) form_field_popup_pane_t1

0x8255,	// (0x00034521) input_focus_pane_cp7

0x8283,	// (0x0003454f) list_form_pane

0x4e9f,	// (0x0003116b) form_field_popup_wide_pane_t1

0x8255,	// (0x00034521) input_focus_pane_cp8

0x828f,	// (0x0003455b) list_form_wide_pane

0x4ebc,	// (0x00031188) form_field_slider_pane_t1_ParamLimits

0x4ebc,	// (0x00031188) form_field_slider_pane_t1

0x4ed2,	// (0x0003119e) form_field_slider_pane_t2_ParamLimits

0x4ed2,	// (0x0003119e) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0003b929) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0003b929) form_field_slider_pane_t

0x7c43,	// (0x00033f0f) input_focus_pane_cp9_ParamLimits

0x7c43,	// (0x00033f0f) input_focus_pane_cp9

0x4ee7,	// (0x000311b3) slider_cont_pane_ParamLimits

0x4ee7,	// (0x000311b3) slider_cont_pane

0x829b,	// (0x00034567) form_field_slider_wide_pane_t1_ParamLimits

0x829b,	// (0x00034567) form_field_slider_wide_pane_t1

0x4efb,	// (0x000311c7) form_field_slider_wide_pane_t2_ParamLimits

0x4efb,	// (0x000311c7) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0003b92e) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0003b92e) form_field_slider_wide_pane_t

0x7c43,	// (0x00033f0f) input_focus_pane_cp10_ParamLimits

0x7c43,	// (0x00033f0f) input_focus_pane_cp10

0x4f0d,	// (0x000311d9) slider_cont_pane_cp1_ParamLimits

0x4f0d,	// (0x000311d9) slider_cont_pane_cp1

0x4f21,	// (0x000311ed) slider_form_pane_cp

0x82ad,	// (0x00034579) input_focus_pane_g1

0x82b5,	// (0x00034581) input_focus_pane_g2

0x82bd,	// (0x00034589) input_focus_pane_g3

0x82c5,	// (0x00034591) input_focus_pane_g4

0x82cd,	// (0x00034599) input_focus_pane_g5

0x82d5,	// (0x000345a1) input_focus_pane_g6

0x82dd,	// (0x000345a9) input_focus_pane_g7

0x82e5,	// (0x000345b1) input_focus_pane_g8

0x82ed,	// (0x000345b9) input_focus_pane_g9

0x2963,	// (0x0002ec2f) input_focus_pane_g10

0x0009,

0xf667,	// (0x0003b933) input_focus_pane_g

0x9ff4,	// (0x000362c0) wait_border_pane_g3_copy1

0x4f29,	// (0x000311f5) data_form_pane_t1

0x2963,	// (0x0002ec2f) wait_anim_pane_g1_copy1

0x60e6,	// (0x000323b2) data_form_wide_pane_t1

0x4f44,	// (0x00031210) list_form_graphic_pane_cp_ParamLimits

0x4f44,	// (0x00031210) list_form_graphic_pane_cp

0xaf14,	// (0x000371e0) slider_form_pane_g1

0xaf1d,	// (0x000371e9) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0003bc36) slider_form_pane_g

0x4f5d,	// (0x00031229) list_form_graphic_pane_ParamLimits

0x4f5d,	// (0x00031229) list_form_graphic_pane

0x4f79,	// (0x00031245) list_form_graphic_pane_g1

0x4f81,	// (0x0003124d) list_form_graphic_pane_t1_ParamLimits

0x4f81,	// (0x0003124d) list_form_graphic_pane_t1

0x79c8,	// (0x00033c94) list_highlight_pane_cp5_ParamLimits

0x79c8,	// (0x00033c94) list_highlight_pane_cp5

0x4f96,	// (0x00031262) find_pane_g1

0x82f5,	// (0x000345c1) input_find_pane

0x4f9f,	// (0x0003126b) input_find_pane_g1_ParamLimits

0x4f9f,	// (0x0003126b) input_find_pane_g1

0x4fab,	// (0x00031277) input_find_pane_t1_ParamLimits

0x4fab,	// (0x00031277) input_find_pane_t1

0x4fc0,	// (0x0003128c) input_find_pane_t2_ParamLimits

0x4fc0,	// (0x0003128c) input_find_pane_t2

0x0001,

0xf67c,	// (0x0003b948) input_find_pane_t_ParamLimits

0xf67c,	// (0x0003b948) input_find_pane_t

0x82fe,	// (0x000345ca) input_focus_pane_cp5_ParamLimits

0x82fe,	// (0x000345ca) input_focus_pane_cp5

0x831d,	// (0x000345e9) bg_popup_window_pane_cp2_ParamLimits

0x831d,	// (0x000345e9) bg_popup_window_pane_cp2

0x832a,	// (0x000345f6) listscroll_menu_pane_ParamLimits

0x832a,	// (0x000345f6) listscroll_menu_pane

0x8336,	// (0x00034602) popup_submenu_window_ParamLimits

0x8336,	// (0x00034602) popup_submenu_window

0x8362,	// (0x0003462e) find_popup_pane_g1

0x836a,	// (0x00034636) input_popup_find_pane_cp

0x8374,	// (0x00034640) input_focus_pane_cp4_ParamLimits

0x8374,	// (0x00034640) input_focus_pane_cp4

0x838e,	// (0x0003465a) input_popup_find_pane_t1_ParamLimits

0x838e,	// (0x0003465a) input_popup_find_pane_t1

0x78e8,	// (0x00033bb4) bg_popup_sub_pane_cp

0x83bc,	// (0x00034688) listscroll_popup_sub_pane

0x83c4,	// (0x00034690) list_submenu_pane_ParamLimits

0x83c4,	// (0x00034690) list_submenu_pane

0x83d5,	// (0x000346a1) scroll_pane_cp4

0x83dd,	// (0x000346a9) list_single_popup_submenu_pane_ParamLimits

0x83dd,	// (0x000346a9) list_single_popup_submenu_pane

0x83f1,	// (0x000346bd) list_single_popup_submenu_pane_g1

0x83f9,	// (0x000346c5) list_single_popup_submenu_pane_t1_ParamLimits

0x83f9,	// (0x000346c5) list_single_popup_submenu_pane_t1

0x79c8,	// (0x00033c94) bg_active_tab_pane_cp1_ParamLimits

0x79c8,	// (0x00033c94) bg_active_tab_pane_cp1

0x840e,	// (0x000346da) tabs_2_active_pane_g1

0x8416,	// (0x000346e2) tabs_2_active_pane_t1

0x79c8,	// (0x00033c94) bg_passive_tab_pane_cp1_ParamLimits

0x79c8,	// (0x00033c94) bg_passive_tab_pane_cp1

0x840e,	// (0x000346da) tabs_2_passive_pane_g1

0x8416,	// (0x000346e2) tabs_2_passive_pane_t1

0x8428,	// (0x000346f4) bg_active_tab_pane_cp4

0x8436,	// (0x00034702) tabs_2_long_active_pane_t1

0x8449,	// (0x00034715) bg_passive_tab_pane_cp4

0x5cb4,	// (0x00031f80) list_single_midp_graphic_pane_g4_ParamLimits

0x8428,	// (0x000346f4) bg_active_tab_pane_cp5

0x8455,	// (0x00034721) tabs_3_long_active_pane_t1

0x8449,	// (0x00034715) bg_passive_tab_pane_cp5

0x5cb4,	// (0x00031f80) list_single_midp_graphic_pane_g4

0x79c8,	// (0x00033c94) bg_popup_window_pane_cp13_ParamLimits

0x79c8,	// (0x00033c94) bg_popup_window_pane_cp13

0x8470,	// (0x0003473c) listscroll_popup_fast_pane_ParamLimits

0x8470,	// (0x0003473c) listscroll_popup_fast_pane

0x847f,	// (0x0003474b) grid_popup_fast_pane_ParamLimits

0x847f,	// (0x0003474b) grid_popup_fast_pane

0x8491,	// (0x0003475d) scroll_pane_cp9_ParamLimits

0x8491,	// (0x0003475d) scroll_pane_cp9

0xc85f,	// (0x00038b2b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc85f,	// (0x00038b2b) list_single_graphic_hl_pane_t1_cp2

0x84b5,	// (0x00034781) input_focus_pane_cp20_ParamLimits

0x84b5,	// (0x00034781) input_focus_pane_cp20

0x84c3,	// (0x0003478f) query_popup_data_pane_t1_ParamLimits

0x84c3,	// (0x0003478f) query_popup_data_pane_t1

0x84d6,	// (0x000347a2) query_popup_data_pane_t2_ParamLimits

0x84d6,	// (0x000347a2) query_popup_data_pane_t2

0x851c,	// (0x000347e8) query_popup_data_pane_t3_ParamLimits

0x851c,	// (0x000347e8) query_popup_data_pane_t3

0x855d,	// (0x00034829) query_popup_data_pane_t4_ParamLimits

0x855d,	// (0x00034829) query_popup_data_pane_t4

0x8599,	// (0x00034865) query_popup_data_pane_t5_ParamLimits

0x8599,	// (0x00034865) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0003b94d) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0003b94d) query_popup_data_pane_t

0x82ad,	// (0x00034579) bg_set_opt_pane_g1

0x82b5,	// (0x00034581) bg_set_opt_pane_g2

0x82bd,	// (0x00034589) bg_set_opt_pane_g3

0x82c5,	// (0x00034591) bg_set_opt_pane_g4

0x82cd,	// (0x00034599) bg_set_opt_pane_g5

0x82d5,	// (0x000345a1) bg_set_opt_pane_g6

0x82dd,	// (0x000345a9) bg_set_opt_pane_g7

0x82e5,	// (0x000345b1) bg_set_opt_pane_g8

0x82ed,	// (0x000345b9) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0003b958) bg_set_opt_pane_g

0x52fc,	// (0x000315c8) control_top_pane_stacon_ParamLimits

0x52fc,	// (0x000315c8) control_top_pane_stacon

0x534f,	// (0x0003161b) signal_pane_stacon_ParamLimits

0x534f,	// (0x0003161b) signal_pane_stacon

0x8e0e,	// (0x000350da) stacon_top_pane_g1_ParamLimits

0x8e0e,	// (0x000350da) stacon_top_pane_g1

0x5374,	// (0x00031640) title_pane_stacon_ParamLimits

0x5374,	// (0x00031640) title_pane_stacon

0x539e,	// (0x0003166a) uni_indicator_pane_stacon_ParamLimits

0x539e,	// (0x0003166a) uni_indicator_pane_stacon

0x53b3,	// (0x0003167f) battery_pane_stacon_ParamLimits

0x53b3,	// (0x0003167f) battery_pane_stacon

0x53f7,	// (0x000316c3) control_bottom_pane_stacon_ParamLimits

0x53f7,	// (0x000316c3) control_bottom_pane_stacon

0x541a,	// (0x000316e6) navi_pane_stacon_ParamLimits

0x541a,	// (0x000316e6) navi_pane_stacon

0x8e30,	// (0x000350fc) stacon_bottom_pane_g1_ParamLimits

0x8e30,	// (0x000350fc) stacon_bottom_pane_g1

0x4fd5,	// (0x000312a1) aid_levels_signal_lsc_ParamLimits

0x4fd5,	// (0x000312a1) aid_levels_signal_lsc

0x4feb,	// (0x000312b7) signal_pane_stacon_g1_ParamLimits

0x4feb,	// (0x000312b7) signal_pane_stacon_g1

0x4fff,	// (0x000312cb) signal_pane_stacon_g2_ParamLimits

0x4fff,	// (0x000312cb) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0003b96b) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0003b96b) signal_pane_stacon_g

0x5034,	// (0x00031300) title_pane_stacon_t1_ParamLimits

0x5034,	// (0x00031300) title_pane_stacon_t1

0x8847,	// (0x00034b13) uni_indicator_pane_stacon_g1

0x8851,	// (0x00034b1d) uni_indicator_pane_stacon_g2

0x885b,	// (0x00034b27) uni_indicator_pane_stacon_g3

0x8865,	// (0x00034b31) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0003b977) uni_indicator_pane_stacon_g

0x5059,	// (0x00031325) control_top_pane_stacon_g1

0x5061,	// (0x0003132d) control_top_pane_stacon_t1_ParamLimits

0x5061,	// (0x0003132d) control_top_pane_stacon_t1

0x5098,	// (0x00031364) aid_levels_battery_lsc_ParamLimits

0x5098,	// (0x00031364) aid_levels_battery_lsc

0x50af,	// (0x0003137b) battery_pane_stacon_g1_ParamLimits

0x50af,	// (0x0003137b) battery_pane_stacon_g1

0x50c2,	// (0x0003138e) battery_pane_stacon_g2_ParamLimits

0x50c2,	// (0x0003138e) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0003b980) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0003b980) battery_pane_stacon_g

0x5100,	// (0x000313cc) navi_icon_pane_stacon

0x5114,	// (0x000313e0) navi_navi_pane_stacon

0x5100,	// (0x000313cc) navi_text_pane_stacon

0x5059,	// (0x00031325) control_bottom_pane_stacon_g1

0x5128,	// (0x000313f4) control_bottom_pane_stacon_t1_ParamLimits

0x5128,	// (0x000313f4) control_bottom_pane_stacon_t1

0x8889,	// (0x00034b55) grid_app_pane_ParamLimits

0x8889,	// (0x00034b55) grid_app_pane

0x88ab,	// (0x00034b77) scroll_pane_cp15_ParamLimits

0x88ab,	// (0x00034b77) scroll_pane_cp15

0x88be,	// (0x00034b8a) cell_app_pane_ParamLimits

0x88be,	// (0x00034b8a) cell_app_pane

0x88e6,	// (0x00034bb2) cell_app_pane_g1_ParamLimits

0x88e6,	// (0x00034bb2) cell_app_pane_g1

0x890a,	// (0x00034bd6) cell_app_pane_g2_ParamLimits

0x890a,	// (0x00034bd6) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0003b985) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0003b985) cell_app_pane_g

0x8916,	// (0x00034be2) cell_app_pane_t1_ParamLimits

0x8916,	// (0x00034be2) cell_app_pane_t1

0x892d,	// (0x00034bf9) grid_highlight_pane_ParamLimits

0x892d,	// (0x00034bf9) grid_highlight_pane

0x82ad,	// (0x00034579) cell_highlight_pane_g1

0x82b5,	// (0x00034581) cell_highlight_pane_g2

0x82bd,	// (0x00034589) cell_highlight_pane_g3

0x82c5,	// (0x00034591) cell_highlight_pane_g4

0x82cd,	// (0x00034599) cell_highlight_pane_g5

0x82d5,	// (0x000345a1) cell_highlight_pane_g6

0x82dd,	// (0x000345a9) cell_highlight_pane_g7

0x82e5,	// (0x000345b1) cell_highlight_pane_g8

0x82ed,	// (0x000345b9) cell_highlight_pane_g9

0x2963,	// (0x0002ec2f) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0003b933) cell_highlight_pane_g

0x893e,	// (0x00034c0a) bg_scroll_pane

0x5172,	// (0x0003143e) scroll_handle_pane

0x8985,	// (0x00034c51) scroll_bg_pane_g1

0x899a,	// (0x00034c66) scroll_bg_pane_g2

0x89b2,	// (0x00034c7e) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0003b98a) scroll_bg_pane_g

0x89c7,	// (0x00034c93) scroll_handle_focus_pane_ParamLimits

0x89c7,	// (0x00034c93) scroll_handle_focus_pane

0x8985,	// (0x00034c51) scroll_handle_pane_g1

0x89d4,	// (0x00034ca0) scroll_handle_pane_g2

0x89b2,	// (0x00034c7e) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0003b991) scroll_handle_pane_g

0x8374,	// (0x00034640) bg_popup_sub_pane_cp21_ParamLimits

0x8374,	// (0x00034640) bg_popup_sub_pane_cp21

0x89e8,	// (0x00034cb4) popup_fep_japan_predictive_window_t1_ParamLimits

0x89e8,	// (0x00034cb4) popup_fep_japan_predictive_window_t1

0x8a02,	// (0x00034cce) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a02,	// (0x00034cce) popup_fep_japan_predictive_window_t2

0x8a35,	// (0x00034d01) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a35,	// (0x00034d01) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0003b998) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0003b998) popup_fep_japan_predictive_window_t

0x78e8,	// (0x00033bb4) bg_popup_sub_pane_cp23

0x8a6c,	// (0x00034d38) listscroll_japin_cand_pane

0x8a74,	// (0x00034d40) popup_fep_japan_candidate_window_t1

0x8a82,	// (0x00034d4e) candidate_pane_ParamLimits

0x8a82,	// (0x00034d4e) candidate_pane

0x8a94,	// (0x00034d60) scroll_pane_cp30

0x8a9c,	// (0x00034d68) list_single_popup_jap_candidate_pane_ParamLimits

0x8a9c,	// (0x00034d68) list_single_popup_jap_candidate_pane

0x78e8,	// (0x00033bb4) list_highlight_pane_cp30

0x8ab1,	// (0x00034d7d) list_single_popup_jap_candidate_pane_t1

0x8ac0,	// (0x00034d8c) level_1_signal

0x8ad2,	// (0x00034d9e) level_2_signal

0x8ae5,	// (0x00034db1) level_3_signal

0x8af8,	// (0x00034dc4) level_4_signal

0x8b0b,	// (0x00034dd7) level_5_signal

0x8b1e,	// (0x00034dea) level_6_signal

0x8b31,	// (0x00034dfd) level_7_signal

0x8ac0,	// (0x00034d8c) level_1_battery

0x8ad2,	// (0x00034d9e) level_2_battery

0x8ae5,	// (0x00034db1) level_3_battery

0x8af8,	// (0x00034dc4) level_4_battery

0x8b0b,	// (0x00034dd7) level_5_battery

0x8b1e,	// (0x00034dea) level_6_battery

0x8b31,	// (0x00034dfd) level_7_battery

0x8b5c,	// (0x00034e28) list_menu_pane_ParamLimits

0x8b5c,	// (0x00034e28) list_menu_pane

0x8b72,	// (0x00034e3e) scroll_pane_cp25_ParamLimits

0x8b72,	// (0x00034e3e) scroll_pane_cp25

0x8b8b,	// (0x00034e57) list_double2_graphic_pane_cp2_ParamLimits

0x8b8b,	// (0x00034e57) list_double2_graphic_pane_cp2

0x8b8b,	// (0x00034e57) list_double2_large_graphic_pane_cp2_ParamLimits

0x8b8b,	// (0x00034e57) list_double2_large_graphic_pane_cp2

0x8b8b,	// (0x00034e57) list_double2_pane_cp2_ParamLimits

0x8b8b,	// (0x00034e57) list_double2_pane_cp2

0x8b8b,	// (0x00034e57) list_double_graphic_pane_cp2_ParamLimits

0x8b8b,	// (0x00034e57) list_double_graphic_pane_cp2

0x8b8b,	// (0x00034e57) list_double_large_graphic_pane_cp2_ParamLimits

0x8b8b,	// (0x00034e57) list_double_large_graphic_pane_cp2

0x8b8b,	// (0x00034e57) list_double_number_pane_cp2_ParamLimits

0x8b8b,	// (0x00034e57) list_double_number_pane_cp2

0x8b8b,	// (0x00034e57) list_double_pane_cp2_ParamLimits

0x8b8b,	// (0x00034e57) list_double_pane_cp2

0x8baf,	// (0x00034e7b) list_single_2graphic_pane_cp2_ParamLimits

0x8baf,	// (0x00034e7b) list_single_2graphic_pane_cp2

0x8baf,	// (0x00034e7b) list_single_graphic_heading_pane_cp2_ParamLimits

0x8baf,	// (0x00034e7b) list_single_graphic_heading_pane_cp2

0x8baf,	// (0x00034e7b) list_single_graphic_pane_cp2_ParamLimits

0x8baf,	// (0x00034e7b) list_single_graphic_pane_cp2

0x8baf,	// (0x00034e7b) list_single_heading_pane_cp2_ParamLimits

0x8baf,	// (0x00034e7b) list_single_heading_pane_cp2

0x8bc8,	// (0x00034e94) list_single_large_graphic_pane_cp2_ParamLimits

0x8bc8,	// (0x00034e94) list_single_large_graphic_pane_cp2

0x8baf,	// (0x00034e7b) list_single_number_heading_pane_cp2_ParamLimits

0x8baf,	// (0x00034e7b) list_single_number_heading_pane_cp2

0x8baf,	// (0x00034e7b) list_single_number_pane_cp2_ParamLimits

0x8baf,	// (0x00034e7b) list_single_number_pane_cp2

0x8bd9,	// (0x00034ea5) list_single_pane_cp2_ParamLimits

0x8bd9,	// (0x00034ea5) list_single_pane_cp2

0x8c5d,	// (0x00034f29) bg_popup_sub_pane_cp22

0x5224,	// (0x000314f0) popup_side_volume_key_window_g1

0x524e,	// (0x0003151a) popup_side_volume_key_window_t1

0x526a,	// (0x00031536) volume_small_pane_cp1

0x7c43,	// (0x00033f0f) bg_popup_sub_pane_cp24_ParamLimits

0x7c43,	// (0x00033f0f) bg_popup_sub_pane_cp24

0x8c73,	// (0x00034f3f) fep_china_uni_candidate_pane_ParamLimits

0x8c73,	// (0x00034f3f) fep_china_uni_candidate_pane

0x8c87,	// (0x00034f53) fep_china_uni_entry_pane

0x8c97,	// (0x00034f63) popup_fep_china_uni_window_g1

0x8cb3,	// (0x00034f7f) fep_china_uni_entry_pane_g1

0x8cbb,	// (0x00034f87) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0003b9c9) fep_china_uni_entry_pane_g

0x8cc3,	// (0x00034f8f) fep_entry_item_pane

0x8ccd,	// (0x00034f99) fep_candidate_item_pane

0x8cd5,	// (0x00034fa1) fep_china_uni_candidate_pane_g1

0x8cdd,	// (0x00034fa9) fep_china_uni_candidate_pane_g2

0x8ce5,	// (0x00034fb1) fep_china_uni_candidate_pane_g3

0x8ced,	// (0x00034fb9) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0003b9ce) fep_china_uni_candidate_pane_g

0x2963,	// (0x0002ec2f) fep_entry_item_pane_g1

0x8cf5,	// (0x00034fc1) fep_entry_item_pane_t1_ParamLimits

0x8cf5,	// (0x00034fc1) fep_entry_item_pane_t1

0x8d0b,	// (0x00034fd7) fep_candidate_item_pane_t1_ParamLimits

0x8d0b,	// (0x00034fd7) fep_candidate_item_pane_t1

0x8d20,	// (0x00034fec) fep_candidate_item_pane_t2_ParamLimits

0x8d20,	// (0x00034fec) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0003b9d7) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0003b9d7) fep_candidate_item_pane_t

0x79c8,	// (0x00033c94) list_highlight_pane_cp31_ParamLimits

0x79c8,	// (0x00033c94) list_highlight_pane_cp31

0x8d32,	// (0x00034ffe) level_1_signal_lsc

0x8d3b,	// (0x00035007) level_2_signal_lsc

0x8d44,	// (0x00035010) level_3_signal_lsc

0x8d4d,	// (0x00035019) level_4_signal_lsc

0x8d56,	// (0x00035022) level_5_signal_lsc

0x8d5f,	// (0x0003502b) level_6_signal_lsc

0x8d68,	// (0x00035034) level_7_signal_lsc

0x8d68,	// (0x00035034) level_1_battery_lsc

0x8d71,	// (0x0003503d) level_2_battery_lsc

0x8d7a,	// (0x00035046) level_3_battery_lsc

0x8d83,	// (0x0003504f) level_4_battery_lsc

0x8d8c,	// (0x00035058) level_5_battery_lsc

0x8d95,	// (0x00035061) level_6_battery_lsc

0x8d32,	// (0x00034ffe) level_7_battery_lsc

0x8d9e,	// (0x0003506a) scroll_handle_focus_pane_g1

0x8da7,	// (0x00035073) scroll_handle_focus_pane_g2

0x8db0,	// (0x0003507c) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0003b9dc) scroll_handle_focus_pane_g

0x5272,	// (0x0003153e) list_single_2graphic_pane_g1_ParamLimits

0x5272,	// (0x0003153e) list_single_2graphic_pane_g1

0x49aa,	// (0x00030c76) list_single_2graphic_pane_g2_ParamLimits

0x49aa,	// (0x00030c76) list_single_2graphic_pane_g2

0x4930,	// (0x00030bfc) list_single_2graphic_pane_g3_ParamLimits

0x4930,	// (0x00030bfc) list_single_2graphic_pane_g3

0x527e,	// (0x0003154a) list_single_2graphic_pane_g4_ParamLimits

0x527e,	// (0x0003154a) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0003b9e3) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0003b9e3) list_single_2graphic_pane_g

0x528a,	// (0x00031556) list_single_2graphic_pane_t1_ParamLimits

0x528a,	// (0x00031556) list_single_2graphic_pane_t1

0x52b8,	// (0x00031584) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x52b8,	// (0x00031584) list_double2_graphic_large_graphic_pane_g1

0x4a2b,	// (0x00030cf7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4a2b,	// (0x00030cf7) list_double2_graphic_large_graphic_pane_g2

0x4a3c,	// (0x00030d08) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4a3c,	// (0x00030d08) list_double2_graphic_large_graphic_pane_g3

0x52c8,	// (0x00031594) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x52c8,	// (0x00031594) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0003b9ec) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0003b9ec) list_double2_graphic_large_graphic_pane_g

0x52d4,	// (0x000315a0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x52d4,	// (0x000315a0) list_double2_graphic_large_graphic_pane_t1

0x52ea,	// (0x000315b6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x52ea,	// (0x000315b6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0003b9f5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0003b9f5) list_double2_graphic_large_graphic_pane_t

0x8efb,	// (0x000351c7) popup_fast_swap_window_ParamLimits

0x8efb,	// (0x000351c7) popup_fast_swap_window

0x8f17,	// (0x000351e3) popup_side_volume_key_window

0x8f33,	// (0x000351ff) stacon_top_pane

0x8f3d,	// (0x00035209) status_pane_ParamLimits

0x8f3d,	// (0x00035209) status_pane

0x2959,	// (0x0002ec25) status_small_pane

0x78e8,	// (0x00033bb4) control_pane

0x78e8,	// (0x00033bb4) stacon_bottom_pane

0x8238,	// (0x00034504) scroll_pane_cp121

0x822f,	// (0x000344fb) set_content_pane

0x8db9,	// (0x00035085) bg_active_tab_pane_g1_cp1

0x8dc2,	// (0x0003508e) bg_active_tab_pane_g2_cp1

0x8dcb,	// (0x00035097) bg_active_tab_pane_g3_cp1

0x8db9,	// (0x00035085) bg_passive_tab_pane_g1_cp1

0x8dc2,	// (0x0003508e) bg_passive_tab_pane_g2_cp1

0x8dcb,	// (0x00035097) bg_passive_tab_pane_g3_cp1

0x8dd4,	// (0x000350a0) bg_active_tab_pane_g1_cp2

0x8dc2,	// (0x0003508e) bg_active_tab_pane_g2_cp2

0x8ddd,	// (0x000350a9) bg_active_tab_pane_g3_cp2

0x8dd4,	// (0x000350a0) bg_passive_tab_pane_g1_cp2

0x8dc2,	// (0x0003508e) bg_passive_tab_pane_g2_cp2

0x8ddd,	// (0x000350a9) bg_passive_tab_pane_g3_cp2

0x8de6,	// (0x000350b2) bg_active_tab_pane_g1_cp3

0x8dc2,	// (0x0003508e) bg_active_tab_pane_g2_cp3

0x8def,	// (0x000350bb) bg_active_tab_pane_g3_cp3

0x8de6,	// (0x000350b2) bg_passive_tab_pane_g1_cp3

0x8dc2,	// (0x0003508e) bg_passive_tab_pane_g2_cp3

0x8def,	// (0x000350bb) bg_passive_tab_pane_g3_cp3

0x8df8,	// (0x000350c4) bg_active_tab_pane_g1_cp4

0x8dc2,	// (0x0003508e) bg_active_tab_pane_g2_cp4

0x8e03,	// (0x000350cf) bg_active_tab_pane_g3_cp4

0x8df8,	// (0x000350c4) bg_passive_tab_pane_g1_cp4

0x8dc2,	// (0x0003508e) bg_passive_tab_pane_g2_cp4

0x8e03,	// (0x000350cf) bg_passive_tab_pane_g3_cp4

0x8e4c,	// (0x00035118) bg_active_tab_pane_g1_cp5

0x8dc2,	// (0x0003508e) bg_active_tab_pane_g2_cp5

0x8e55,	// (0x00035121) bg_active_tab_pane_g3_cp5

0x8e4c,	// (0x00035118) bg_passive_tab_pane_g1_cp5

0x8dc2,	// (0x0003508e) bg_passive_tab_pane_g2_cp5

0x8e55,	// (0x00035121) bg_passive_tab_pane_g3_cp5

0x8e5e,	// (0x0003512a) list_set_graphic_pane_ParamLimits

0x8e5e,	// (0x0003512a) list_set_graphic_pane

0x78e8,	// (0x00033bb4) bg_set_opt_pane_cp4

0x8e7e,	// (0x0003514a) list_set_graphic_pane_g1_ParamLimits

0x8e7e,	// (0x0003514a) list_set_graphic_pane_g1

0x8e8a,	// (0x00035156) list_set_graphic_pane_g2_ParamLimits

0x8e8a,	// (0x00035156) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0003b9fa) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0003b9fa) list_set_graphic_pane_g

0x0009,

0xfab1,	// (0x0003bd7d) volume_small_pane_cp_g

0x8eae,	// (0x0003517a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8eae,	// (0x0003517a) list_double2_large_graphic_pane_g1_cp2

0x8eba,	// (0x00035186) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8eba,	// (0x00035186) list_double2_large_graphic_pane_g2_cp2

0x8ecb,	// (0x00035197) list_double2_large_graphic_pane_g3_cp2

0x8ed3,	// (0x0003519f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8ed3,	// (0x0003519f) list_double2_large_graphic_pane_t1_cp2

0x8ee9,	// (0x000351b5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8ee9,	// (0x000351b5) list_double2_large_graphic_pane_t2_cp2

0xaac7,	// (0x00036d93) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaac7,	// (0x00036d93) list_double_large_graphic_pane_g1_cp2

0xaad8,	// (0x00036da4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaad8,	// (0x00036da4) list_double_large_graphic_pane_g2_cp2

0x9059,	// (0x00035325) list_double_large_graphic_pane_g3_cp2

0xaae9,	// (0x00036db5) list_double_large_graphic_pane_g4_cp

0xaaf1,	// (0x00036dbd) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaaf1,	// (0x00036dbd) list_double_large_graphic_pane_t1_cp2

0xab08,	// (0x00036dd4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab08,	// (0x00036dd4) list_double_large_graphic_pane_t2_cp2

0x8f4b,	// (0x00035217) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f4b,	// (0x00035217) list_double2_graphic_pane_g1_cp2

0x8f59,	// (0x00035225) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f59,	// (0x00035225) list_double2_graphic_pane_g2_cp2

0x8f6a,	// (0x00035236) list_double2_graphic_pane_g3_cp2

0x8f74,	// (0x00035240) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f74,	// (0x00035240) list_double2_graphic_pane_t1_cp2

0x8f8a,	// (0x00035256) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f8a,	// (0x00035256) list_double2_graphic_pane_t2_cp2

0x8f9c,	// (0x00035268) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8f9c,	// (0x00035268) list_single_number_heading_pane_g1_cp2

0x8fa8,	// (0x00035274) list_single_number_heading_pane_g2_cp2

0x8fb0,	// (0x0003527c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fb0,	// (0x0003527c) list_single_number_heading_pane_t1_cp2

0x8fc6,	// (0x00035292) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8fc6,	// (0x00035292) list_single_number_heading_pane_t2_cp2

0x8fd8,	// (0x000352a4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8fd8,	// (0x000352a4) list_single_number_heading_pane_t3_cp2

0x8f9c,	// (0x00035268) list_single_heading_pane_g1_cp2_ParamLimits

0x8f9c,	// (0x00035268) list_single_heading_pane_g1_cp2

0x8fa8,	// (0x00035274) list_single_heading_pane_g2_cp2

0x8fb0,	// (0x0003527c) list_single_heading_pane_t1_cp2_ParamLimits

0x8fb0,	// (0x0003527c) list_single_heading_pane_t1_cp2

0xa8cf,	// (0x00036b9b) list_single_heading_pane_t2_cp2_ParamLimits

0xa8cf,	// (0x00036b9b) list_single_heading_pane_t2_cp2

0xa817,	// (0x00036ae3) list_double_graphic_pane_g1_cp2_ParamLimits

0xa817,	// (0x00036ae3) list_double_graphic_pane_g1_cp2

0xa823,	// (0x00036aef) list_double_graphic_pane_g2_cp2_ParamLimits

0xa823,	// (0x00036aef) list_double_graphic_pane_g2_cp2

0xa832,	// (0x00036afe) list_double_graphic_pane_g3_cp2

0xa83a,	// (0x00036b06) list_double_graphic_pane_t1_cp2_ParamLimits

0xa83a,	// (0x00036b06) list_double_graphic_pane_t1_cp2

0xa850,	// (0x00036b1c) list_double_graphic_pane_t2_cp2_ParamLimits

0xa850,	// (0x00036b1c) list_double_graphic_pane_t2_cp2

0x904d,	// (0x00035319) list_double_number_pane_g1_cp2_ParamLimits

0x904d,	// (0x00035319) list_double_number_pane_g1_cp2

0x9059,	// (0x00035325) list_double_number_pane_g2_cp2

0xa7db,	// (0x00036aa7) list_double_number_pane_t1_cp2_ParamLimits

0xa7db,	// (0x00036aa7) list_double_number_pane_t1_cp2

0xa7ef,	// (0x00036abb) list_double_number_pane_t2_cp2_ParamLimits

0xa7ef,	// (0x00036abb) list_double_number_pane_t2_cp2

0xa805,	// (0x00036ad1) list_double_number_pane_t3_cp2_ParamLimits

0xa805,	// (0x00036ad1) list_double_number_pane_t3_cp2

0xa6c4,	// (0x00036990) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6c4,	// (0x00036990) list_single_graphic_pane_g1_cp2

0x90ba,	// (0x00035386) list_single_graphic_pane_g2_cp2_ParamLimits

0x90ba,	// (0x00035386) list_single_graphic_pane_g2_cp2

0x90c6,	// (0x00035392) list_single_graphic_pane_g3_cp2

0xa69a,	// (0x00036966) list_single_graphic_pane_t1_cp2_ParamLimits

0xa69a,	// (0x00036966) list_single_graphic_pane_t1_cp2

0x90ba,	// (0x00035386) list_single_number_pane_g1_cp2_ParamLimits

0x90ba,	// (0x00035386) list_single_number_pane_g1_cp2

0x90c6,	// (0x00035392) list_single_number_pane_g2_cp2

0xa69a,	// (0x00036966) list_single_number_pane_t1_cp2_ParamLimits

0xa69a,	// (0x00036966) list_single_number_pane_t1_cp2

0xa6b0,	// (0x0003697c) list_single_number_pane_t2_cp2_ParamLimits

0xa6b0,	// (0x0003697c) list_single_number_pane_t2_cp2

0x8eba,	// (0x00035186) list_double2_pane_g1_cp2_ParamLimits

0x8eba,	// (0x00035186) list_double2_pane_g1_cp2

0x8ecb,	// (0x00035197) list_double2_pane_g2_cp2

0x9025,	// (0x000352f1) list_double2_pane_t1_cp2_ParamLimits

0x9025,	// (0x000352f1) list_double2_pane_t1_cp2

0x903b,	// (0x00035307) list_double2_pane_t2_cp2_ParamLimits

0x903b,	// (0x00035307) list_double2_pane_t2_cp2

0x904d,	// (0x00035319) list_double_pane_g1_cp2_ParamLimits

0x904d,	// (0x00035319) list_double_pane_g1_cp2

0x9059,	// (0x00035325) list_double_pane_g2_cp2

0x9061,	// (0x0003532d) list_double_pane_t1_cp2_ParamLimits

0x9061,	// (0x0003532d) list_double_pane_t1_cp2

0x9077,	// (0x00035343) list_double_pane_t2_cp2_ParamLimits

0x9077,	// (0x00035343) list_double_pane_t2_cp2

0x90aa,	// (0x00035376) list_single_pane_cp2_g3

0x90ba,	// (0x00035386) list_single_pane_g1_cp2_ParamLimits

0x90ba,	// (0x00035386) list_single_pane_g1_cp2

0x90c6,	// (0x00035392) list_single_pane_g2_cp2

0x90ce,	// (0x0003539a) list_single_pane_t1_cp2_ParamLimits

0x90ce,	// (0x0003539a) list_single_pane_t1_cp2

0x90e6,	// (0x000353b2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90e6,	// (0x000353b2) list_single_large_graphic_pane_g1_cp2

0x90f2,	// (0x000353be) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x90f2,	// (0x000353be) list_single_large_graphic_pane_g2_cp2

0x90fe,	// (0x000353ca) list_single_large_graphic_pane_g3_cp2

0x9106,	// (0x000353d2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9106,	// (0x000353d2) list_single_large_graphic_pane_g4_cp1

0x9120,	// (0x000353ec) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9120,	// (0x000353ec) list_single_large_graphic_pane_t1_cp2

0xa666,	// (0x00036932) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa666,	// (0x00036932) list_single_graphic_heading_pane_g1_cp2

0xa633,	// (0x000368ff) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa633,	// (0x000368ff) list_single_graphic_heading_pane_g4_cp2

0x90c6,	// (0x00035392) list_single_graphic_heading_pane_g5_cp2

0xa672,	// (0x0003693e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa672,	// (0x0003693e) list_single_graphic_heading_pane_t1_cp2

0xa688,	// (0x00036954) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa688,	// (0x00036954) list_single_graphic_heading_pane_t2_cp2

0xa627,	// (0x000368f3) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa627,	// (0x000368f3) list_single_2graphic_pane_g1_cp2

0xa633,	// (0x000368ff) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa633,	// (0x000368ff) list_single_2graphic_pane_g2_cp2

0x90c6,	// (0x00035392) list_single_2graphic_pane_g3_cp2

0xa644,	// (0x00036910) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa644,	// (0x00036910) list_single_2graphic_pane_g4_cp2

0xa650,	// (0x0003691c) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa650,	// (0x0003691c) list_single_2graphic_pane_t1_cp2

0x2963,	// (0x0002ec2f) list_highlight_pane_g10_cp1

0xa1ff,	// (0x000364cb) list_highlight_pane_g1_cp1

0xa207,	// (0x000364d3) list_highlight_pane_g2_cp1

0xa20f,	// (0x000364db) list_highlight_pane_g3_cp1

0xa217,	// (0x000364e3) list_highlight_pane_g4_cp1

0xa21f,	// (0x000364eb) list_highlight_pane_g5_cp1

0xa227,	// (0x000364f3) list_highlight_pane_g6_cp1

0xa22f,	// (0x000364fb) list_highlight_pane_g7_cp1

0xa237,	// (0x00036503) list_highlight_pane_g8_cp1

0xa23f,	// (0x0003650b) list_highlight_pane_g9_cp1

0xa11f,	// (0x000363eb) form_field_slider_pane_t3

0xa12d,	// (0x000363f9) form_field_slider_pane_t4

0xa13b,	// (0x00036407) slider_form_pane_ParamLimits

0xa13b,	// (0x00036407) slider_form_pane

0x78e8,	// (0x00033bb4) control_abbreviations

0x78e8,	// (0x00033bb4) control_conventions

0x78e8,	// (0x00033bb4) control_definitions

0x78e8,	// (0x00033bb4) format_table_attribute

0xa919,	// (0x00036be5) bg_popup_preview_window_pane_g9

0x78e8,	// (0x00033bb4) format_table_data2

0x78e8,	// (0x00033bb4) format_table_data3

0x78e8,	// (0x00033bb4) format_table_data_example

0x0008,

0x78e8,	// (0x00033bb4) intro_purpose

0xf8ca,	// (0x0003bb96) bg_popup_preview_window_pane_g

0x78e8,	// (0x00033bb4) texts_category

0x78e8,	// (0x00033bb4) texts_graphics

0x9136,	// (0x00035402) text_digital

0x9145,	// (0x00035411) text_primary

0x9154,	// (0x00035420) text_primary_small

0x9163,	// (0x0003542f) text_secondary

0x9172,	// (0x0003543e) text_title

0xb05c,	// (0x00037328) bg_passive_tab_pane_g1_cp3_srt

0x8dc2,	// (0x0003508e) bg_passive_tab_pane_g2_cp3_srt

0xb065,	// (0x00037331) bg_passive_tab_pane_g3_cp3_srt

0x79c8,	// (0x00033c94) bg_active_tab_pane_cp3_srt_ParamLimits

0x79c8,	// (0x00033c94) bg_active_tab_pane_cp3_srt

0xb06e,	// (0x0003733a) tabs_4_active_pane_srt_g1

0xb076,	// (0x00037342) tabs_4_active_pane_srt_t1_ParamLimits

0xb076,	// (0x00037342) tabs_4_active_pane_srt_t1

0xb05c,	// (0x00037328) bg_active_tab_pane_g1_cp3_copy1

0x8dc2,	// (0x0003508e) bg_active_tab_pane_g2_cp3_copy1

0xb065,	// (0x00037331) bg_active_tab_pane_g3_cp3_copy1

0x79c8,	// (0x00033c94) tabs_2_long_active_pane_srt_ParamLimits

0x79c8,	// (0x00033c94) tabs_2_long_active_pane_srt

0x79c8,	// (0x00033c94) tabs_2_long_passive_pane_srt_ParamLimits

0x79c8,	// (0x00033c94) tabs_2_long_passive_pane_srt

0x8449,	// (0x00034715) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8449,	// (0x00034715) bg_passive_tab_pane_cp4_srt

0xad47,	// (0x00037013) bg_passive_tab_pane_g1_cp4_srt

0x8dc2,	// (0x0003508e) bg_passive_tab_pane_g2_cp4_srt

0xad50,	// (0x0003701c) bg_passive_tab_pane_g3_cp4_srt

0x8428,	// (0x000346f4) bg_active_tab_pane_cp4_srt_ParamLimits

0x8428,	// (0x000346f4) bg_active_tab_pane_cp4_srt

0xad59,	// (0x00037025) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad59,	// (0x00037025) tabs_2_long_active_pane_srt_t1

0xad47,	// (0x00037013) bg_active_tab_pane_g1_cp4_srt

0x8dc2,	// (0x0003508e) bg_active_tab_pane_g2_cp4_srt

0xad50,	// (0x0003701c) bg_active_tab_pane_g3_cp4_srt

0x7c43,	// (0x00033f0f) tabs_3_long_active_pane_srt_ParamLimits

0x7c43,	// (0x00033f0f) tabs_3_long_active_pane_srt

0x7c43,	// (0x00033f0f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7c43,	// (0x00033f0f) tabs_3_long_passive_pane_cp_srt

0x7c43,	// (0x00033f0f) tabs_3_long_passive_pane_srt_ParamLimits

0x7c43,	// (0x00033f0f) tabs_3_long_passive_pane_srt

0x8449,	// (0x00034715) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8449,	// (0x00034715) bg_passive_tab_pane_cp5_srt

0x8e4c,	// (0x00035118) bg_passive_tab_pane_g1_cp5_srt

0x8dc2,	// (0x0003508e) bg_passive_tab_pane_g2_cp5_srt

0x8e55,	// (0x00035121) bg_passive_tab_pane_g3_cp5_srt

0x8428,	// (0x000346f4) bg_active_tab_pane_cp5_srt_ParamLimits

0x8428,	// (0x000346f4) bg_active_tab_pane_cp5_srt

0xad35,	// (0x00037001) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad35,	// (0x00037001) tabs_3_long_active_pane_srt_t1

0x8e4c,	// (0x00035118) bg_active_tab_pane_g1_cp5_srt

0x8dc2,	// (0x0003508e) bg_active_tab_pane_g2_cp5_srt

0x8e55,	// (0x00035121) bg_active_tab_pane_g3_cp5_srt

0xad27,	// (0x00036ff3) navi_text_pane_srt_t1

0xad1f,	// (0x00036feb) navi_icon_pane_srt_g1

0x9347,	// (0x00035613) midp_editing_number_pane_srt

0x9181,	// (0x0003544d) midp_ticker_pane_srt

0x934f,	// (0x0003561b) midp_ticker_pane_srt_g1

0x9357,	// (0x00035623) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0003ba19) midp_ticker_pane_srt_g

0x935f,	// (0x0003562b) midp_ticker_pane_srt_t1

0xad10,	// (0x00036fdc) midp_editing_number_pane_t1_copy1

0x9189,	// (0x00035455) listscroll_midp_pane

0x9189,	// (0x00035455) midp_form_pane

0x91f9,	// (0x000354c5) midp_info_popup_window_ParamLimits

0x91f9,	// (0x000354c5) midp_info_popup_window

0x8374,	// (0x00034640) bg_popup_sub_pane_cp50_ParamLimits

0x8374,	// (0x00034640) bg_popup_sub_pane_cp50

0x9e23,	// (0x000360ef) listscroll_midp_info_pane_ParamLimits

0x9e23,	// (0x000360ef) listscroll_midp_info_pane

0x9e03,	// (0x000360cf) listscroll_form_midp_pane_ParamLimits

0x9e03,	// (0x000360cf) listscroll_form_midp_pane

0x9e0f,	// (0x000360db) scroll_bar_cp050

0x9de3,	// (0x000360af) list_midp_pane

0xbae3,	// (0x00037daf) signal_pane_g2_cp

0x9d1d,	// (0x00035fe9) listscroll_midp_info_pane_t1_ParamLimits

0x9d1d,	// (0x00035fe9) listscroll_midp_info_pane_t1

0x9d35,	// (0x00036001) listscroll_midp_info_pane_t2_ParamLimits

0x9d35,	// (0x00036001) listscroll_midp_info_pane_t2

0x9d73,	// (0x0003603f) listscroll_midp_info_pane_t3_ParamLimits

0x9d73,	// (0x0003603f) listscroll_midp_info_pane_t3

0x9dad,	// (0x00036079) listscroll_midp_info_pane_t4_ParamLimits

0x9dad,	// (0x00036079) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0003bad1) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0003bad1) listscroll_midp_info_pane_t

0x83d5,	// (0x000346a1) scroll_pane_cp21

0x9cbb,	// (0x00035f87) form_midp_field_choice_group_pane

0x9cc4,	// (0x00035f90) form_midp_field_text_pane

0x9d03,	// (0x00035fcf) form_midp_field_time_pane

0x9d0b,	// (0x00035fd7) form_midp_gauge_slider_pane

0x9d14,	// (0x00035fe0) form_midp_gauge_wait_pane

0x78e8,	// (0x00033bb4) form_midp_image_pane

0x5e60,	// (0x0003212c) list_single_midp_pane_ParamLimits

0x5e60,	// (0x0003212c) list_single_midp_pane

0x9c73,	// (0x00035f3f) form_midp_field_text_pane_t1

0x9a43,	// (0x00035d0f) input_focus_pane_cp050

0x9caa,	// (0x00035f76) list_midp_form_text_pane

0x9c42,	// (0x00035f0e) form_midp_field_choice_group_pane_t1

0x9c50,	// (0x00035f1c) input_focus_pane_cp051

0x9c64,	// (0x00035f30) list_midp_choice_pane

0x78e8,	// (0x00033bb4) status_idle_pane

0x9c26,	// (0x00035ef2) form_midp_field_time_pane_t1

0x2963,	// (0x0002ec2f) wait_anim_pane_g2_copy1

0x9c34,	// (0x00035f00) form_midp_field_time_pane_t2

0x0001,

0x92a7,	// (0x00035573) aid_navinavi_width_2_pane

0xf800,	// (0x0003bacc) form_midp_field_time_pane_t

0x78e8,	// (0x00033bb4) input_focus_pane_cp052

0x78e8,	// (0x00033bb4) bg_input_focus_pane_cp040

0x9be6,	// (0x00035eb2) form_midp_gauge_slider_pane_t1

0x9bf4,	// (0x00035ec0) form_midp_gauge_slider_pane_t2

0x9c02,	// (0x00035ece) form_midp_gauge_slider_pane_t3

0x9c10,	// (0x00035edc) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0003bac3) form_midp_gauge_slider_pane_t

0x9c1e,	// (0x00035eea) form_midp_slider_pane

0x79c8,	// (0x00033c94) bg_input_focus_pane_cp041_ParamLimits

0x79c8,	// (0x00033c94) bg_input_focus_pane_cp041

0x9bb3,	// (0x00035e7f) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bb3,	// (0x00035e7f) form_midp_gauge_wait_pane_t1

0x9bc5,	// (0x00035e91) form_midp_gauge_wait_pane_t2_ParamLimits

0x9bc5,	// (0x00035e91) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0003babe) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0003babe) form_midp_gauge_wait_pane_t

0x9bd7,	// (0x00035ea3) form_midp_wait_pane_ParamLimits

0x9bd7,	// (0x00035ea3) form_midp_wait_pane

0x9b7d,	// (0x00035e49) form_midp_image_pane_g1

0x9b86,	// (0x00035e52) form_midp_image_pane_t1

0x9b95,	// (0x00035e61) form_midp_image_pane_t2

0x9ba4,	// (0x00035e70) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0003bab7) form_midp_image_pane_t

0x9b74,	// (0x00035e40) list_single_midp_pane_g1

0x5e51,	// (0x0003211d) list_single_midp_pane_t1

0x9b4c,	// (0x00035e18) list_midp_form_item_pane_ParamLimits

0x9b4c,	// (0x00035e18) list_midp_form_item_pane

0x924f,	// (0x0003551b) list_midp_form_item_pane_t1

0x925e,	// (0x0003552a) midp_ticker_pane_g1

0x926a,	// (0x00035536) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0003b9ff) midp_ticker_pane_g

0x9276,	// (0x00035542) midp_ticker_pane_t1

0xaf61,	// (0x0003722d) midp_editing_number_pane_t1

0xaf3f,	// (0x0003720b) midp_editing_number_pane

0xaf4e,	// (0x0003721a) midp_ticker_pane

0xad00,	// (0x00036fcc) ai_message_heading_pane

0x78e8,	// (0x00033bb4) bg_popup_window_pane_cp14

0xad08,	// (0x00036fd4) listscroll_ai_message_pane

0xac8a,	// (0x00036f56) ai_message_heading_pane_g1_ParamLimits

0xac8a,	// (0x00036f56) ai_message_heading_pane_g1

0xac96,	// (0x00036f62) ai_message_heading_pane_g2_ParamLimits

0xac96,	// (0x00036f62) ai_message_heading_pane_g2

0xaca2,	// (0x00036f6e) ai_message_heading_pane_g3_ParamLimits

0xaca2,	// (0x00036f6e) ai_message_heading_pane_g3

0xacae,	// (0x00036f7a) ai_message_heading_pane_g4_ParamLimits

0xacae,	// (0x00036f7a) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0003bbf8) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0003bbf8) ai_message_heading_pane_g

0xacba,	// (0x00036f86) ai_message_heading_pane_t1_ParamLimits

0xacba,	// (0x00036f86) ai_message_heading_pane_t1

0xacd4,	// (0x00036fa0) ai_message_heading_pane_t2_ParamLimits

0xacd4,	// (0x00036fa0) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0003bc01) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0003bc01) ai_message_heading_pane_t

0xace6,	// (0x00036fb2) bg_popup_heading_pane_cp1_ParamLimits

0xace6,	// (0x00036fb2) bg_popup_heading_pane_cp1

0xac78,	// (0x00036f44) list_ai_message_pane_ParamLimits

0xac78,	// (0x00036f44) list_ai_message_pane

0x83d5,	// (0x000346a1) scroll_pane_cp10

0xac14,	// (0x00036ee0) list_ai_message_pane_g1

0xac1c,	// (0x00036ee8) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0003bbd5) list_ai_message_pane_g

0xac24,	// (0x00036ef0) list_ai_message_pane_t1_ParamLimits

0xac24,	// (0x00036ef0) list_ai_message_pane_t1

0xac39,	// (0x00036f05) list_ai_message_pane_t2_ParamLimits

0xac39,	// (0x00036f05) list_ai_message_pane_t2

0xac4e,	// (0x00036f1a) list_ai_message_pane_t3_ParamLimits

0xac4e,	// (0x00036f1a) list_ai_message_pane_t3

0xac63,	// (0x00036f2f) list_ai_message_pane_t4_ParamLimits

0xac63,	// (0x00036f2f) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0003bbda) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0003bbda) list_ai_message_pane_t

0xabff,	// (0x00036ecb) cell_ai_soft_ind_pane_ParamLimits

0xabff,	// (0x00036ecb) cell_ai_soft_ind_pane

0x9288,	// (0x00035554) cell_ai_soft_ind_pane_g1_ParamLimits

0x9288,	// (0x00035554) cell_ai_soft_ind_pane_g1

0x78e8,	// (0x00033bb4) grid_highlight_cp1

0x9295,	// (0x00035561) text_secondary_cp56_ParamLimits

0x9295,	// (0x00035561) text_secondary_cp56

0xabd4,	// (0x00036ea0) example_general_pane_ParamLimits

0xabd4,	// (0x00036ea0) example_general_pane

0xabe0,	// (0x00036eac) example_parent_pane_g1_ParamLimits

0xabe0,	// (0x00036eac) example_parent_pane_g1

0xabec,	// (0x00036eb8) example_parent_pane_t1_ParamLimits

0xabec,	// (0x00036eb8) example_parent_pane_t1

0x59f5,	// (0x00031cc1) popup_preview_text_window_ParamLimits

0x59f5,	// (0x00031cc1) popup_preview_text_window

0x90b2,	// (0x0003537e) list_single_pane_cp2_g4

0x7d1f,	// (0x00033feb) bg_popup_preview_window_pane_ParamLimits

0x7d1f,	// (0x00033feb) bg_popup_preview_window_pane

0xa921,	// (0x00036bed) popup_preview_text_window_t1_ParamLimits

0xa921,	// (0x00036bed) popup_preview_text_window_t1

0xa93f,	// (0x00036c0b) popup_preview_text_window_t2_ParamLimits

0xa93f,	// (0x00036c0b) popup_preview_text_window_t2

0xa988,	// (0x00036c54) popup_preview_text_window_t3_ParamLimits

0xa988,	// (0x00036c54) popup_preview_text_window_t3

0xa9cd,	// (0x00036c99) popup_preview_text_window_t4_ParamLimits

0xa9cd,	// (0x00036c99) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0003bba9) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0003bba9) popup_preview_text_window_t

0xaa4b,	// (0x00036d17) scroll_pane_cp11

0x99cf,	// (0x00035c9b) bg_popup_preview_window_pane_g1

0xa8e1,	// (0x00036bad) bg_popup_preview_window_pane_g2

0xa8e9,	// (0x00036bb5) bg_popup_preview_window_pane_g3

0xa8f1,	// (0x00036bbd) bg_popup_preview_window_pane_g4

0xa8f9,	// (0x00036bc5) bg_popup_preview_window_pane_g5

0xa901,	// (0x00036bcd) bg_popup_preview_window_pane_g6

0xa909,	// (0x00036bd5) bg_popup_preview_window_pane_g7

0xa911,	// (0x00036bdd) bg_popup_preview_window_pane_g8

0x44b2,	// (0x0003077e) aid_popup_width_pane

0x59d3,	// (0x00031c9f) popup_midp_note_alarm_window_ParamLimits

0x59d3,	// (0x00031c9f) popup_midp_note_alarm_window

0x8249,	// (0x00034515) data_form_pane_ParamLimits

0x4e1e,	// (0x000310ea) form_field_data_pane_g1

0x4e28,	// (0x000310f4) form_field_data_pane_t1_ParamLimits

0x8255,	// (0x00034521) input_focus_pane_ParamLimits

0x4e40,	// (0x0003110c) data_form_wide_pane_ParamLimits

0x4e51,	// (0x0003111d) form_field_data_wide_pane_g1

0x4e5d,	// (0x00031129) form_field_data_wide_pane_t1_ParamLimits

0x7fc6,	// (0x00034292) input_focus_pane_cp6_ParamLimits

0x8382,	// (0x0003464e) input_popup_find_pane_g1_ParamLimits

0x8382,	// (0x0003464e) input_popup_find_pane_g1

0x50d3,	// (0x0003139f) aid_navi_side_left_pane

0x50e8,	// (0x000313b4) aid_navi_side_right_pane

0xa2fa,	// (0x000365c6) bg_popup_window_pane_cp30_ParamLimits

0xa2fa,	// (0x000365c6) bg_popup_window_pane_cp30

0xa374,	// (0x00036640) popup_midp_note_alarm_window_g1_ParamLimits

0xa374,	// (0x00036640) popup_midp_note_alarm_window_g1

0xa3a4,	// (0x00036670) popup_midp_note_alarm_window_t1_ParamLimits

0xa3a4,	// (0x00036670) popup_midp_note_alarm_window_t1

0xa445,	// (0x00036711) popup_midp_note_alarm_window_t2_ParamLimits

0xa445,	// (0x00036711) popup_midp_note_alarm_window_t2

0xa4f3,	// (0x000367bf) popup_midp_note_alarm_window_t3_ParamLimits

0xa4f3,	// (0x000367bf) popup_midp_note_alarm_window_t3

0xa525,	// (0x000367f1) popup_midp_note_alarm_window_t4_ParamLimits

0xa525,	// (0x000367f1) popup_midp_note_alarm_window_t4

0xa54b,	// (0x00036817) popup_midp_note_alarm_window_t5_ParamLimits

0xa54b,	// (0x00036817) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0003bb46) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0003bb46) popup_midp_note_alarm_window_t

0xa5f7,	// (0x000368c3) wait_bar_pane_cp1_ParamLimits

0xa5f7,	// (0x000368c3) wait_bar_pane_cp1

0x78e8,	// (0x00033bb4) wait_anim_pane_copy1

0x78e8,	// (0x00033bb4) wait_border_pane_copy1

0x9fe0,	// (0x000362ac) wait_border_pane_g1_copy1

0x4e77,	// (0x00031143) form_field_popup_pane_g1

0x4e7f,	// (0x0003114b) form_field_popup_pane_t1_ParamLimits

0x8255,	// (0x00034521) input_focus_pane_cp7_ParamLimits

0x8283,	// (0x0003454f) list_form_pane_ParamLimits

0x4e97,	// (0x00031163) form_field_popup_wide_pane_g1

0x4e9f,	// (0x0003116b) form_field_popup_wide_pane_t1_ParamLimits

0x8255,	// (0x00034521) input_focus_pane_cp8_ParamLimits

0x828f,	// (0x0003455b) list_form_wide_pane_ParamLimits

0xb0fe,	// (0x000373ca) aid_size_cell_graphic_pane

0x4f29,	// (0x000311f5) data_form_pane_t1_ParamLimits

0x60e6,	// (0x000323b2) data_form_wide_pane_t1_ParamLimits

0x9596,	// (0x00035862) bg_status_flat_pane

0x7928,	// (0x00033bf4) title_pane_t1_ParamLimits

0x7990,	// (0x00033c5c) title_pane_t2_ParamLimits

0x79b6,	// (0x00033c82) title_pane_t3_ParamLimits

0xf532,	// (0x0003b7fe) title_pane_t_ParamLimits

0x8ac0,	// (0x00034d8c) level_1_signal_ParamLimits

0x8ad2,	// (0x00034d9e) level_2_signal_ParamLimits

0x8ae5,	// (0x00034db1) level_3_signal_ParamLimits

0x8af8,	// (0x00034dc4) level_4_signal_ParamLimits

0x8b0b,	// (0x00034dd7) level_5_signal_ParamLimits

0x8b1e,	// (0x00034dea) level_6_signal_ParamLimits

0x8b31,	// (0x00034dfd) level_7_signal_ParamLimits

0x8ac0,	// (0x00034d8c) level_1_battery_ParamLimits

0x8ad2,	// (0x00034d9e) level_2_battery_ParamLimits

0x8ae5,	// (0x00034db1) level_3_battery_ParamLimits

0x8af8,	// (0x00034dc4) level_4_battery_ParamLimits

0x8b0b,	// (0x00034dd7) level_5_battery_ParamLimits

0x8b1e,	// (0x00034dea) level_6_battery_ParamLimits

0x8b31,	// (0x00034dfd) level_7_battery_ParamLimits

0xa1ff,	// (0x000364cb) bg_status_flat_pane_g1

0xa207,	// (0x000364d3) bg_status_flat_pane_g2

0xa20f,	// (0x000364db) bg_status_flat_pane_g3

0xa217,	// (0x000364e3) bg_status_flat_pane_g4

0xa21f,	// (0x000364eb) bg_status_flat_pane_g5

0xa227,	// (0x000364f3) bg_status_flat_pane_g6

0xa22f,	// (0x000364fb) bg_status_flat_pane_g7

0x79de,	// (0x00033caa) tabs_3_active_pane_t1_ParamLimits

0x79de,	// (0x00033caa) tabs_3_passive_pane_t1_ParamLimits

0x79f8,	// (0x00033cc4) tabs_4_active_pane_t1_ParamLimits

0x79f8,	// (0x00033cc4) tabs_4_1_passive_pane_t1_ParamLimits

0x8416,	// (0x000346e2) tabs_2_active_pane_t1_ParamLimits

0x8416,	// (0x000346e2) tabs_2_passive_pane_t1_ParamLimits

0x8428,	// (0x000346f4) bg_active_tab_pane_cp4_ParamLimits

0x8436,	// (0x00034702) tabs_2_long_active_pane_t1_ParamLimits

0x8449,	// (0x00034715) bg_passive_tab_pane_cp4_ParamLimits

0x5d28,	// (0x00031ff4) list_single_midp_graphic_pane_t1_ParamLimits

0x8428,	// (0x000346f4) bg_active_tab_pane_cp5_ParamLimits

0x8455,	// (0x00034721) tabs_3_long_active_pane_t1_ParamLimits

0x8449,	// (0x00034715) bg_passive_tab_pane_cp5_ParamLimits

0x5d28,	// (0x00031ff4) list_single_midp_graphic_pane_t1

0x9596,	// (0x00035862) bg_status_flat_pane_ParamLimits

0x965f,	// (0x0003592b) indicator_pane_cp2_ParamLimits

0x965f,	// (0x0003592b) indicator_pane_cp2

0x978a,	// (0x00035a56) navi_pane_srt_ParamLimits

0x978a,	// (0x00035a56) navi_pane_srt

0x97ae,	// (0x00035a7a) popup_clock_digital_analogue_window_cp1

0x7aa5,	// (0x00033d71) indicator_pane_t1

0x9181,	// (0x0003544d) copy_highlight_pane

0x9181,	// (0x0003544d) cursor_graphics_pane

0x9181,	// (0x0003544d) graphic_within_text_pane

0x9181,	// (0x0003544d) link_highlight_pane

0xaa0e,	// (0x00036cda) popup_preview_text_window_t5_ParamLimits

0xaa0e,	// (0x00036cda) popup_preview_text_window_t5

0x92af,	// (0x0003557b) cursor_digital_pane

0x92af,	// (0x0003557b) cursor_primary_pane

0x92c0,	// (0x0003558c) cursor_primary_small_pane

0x92c8,	// (0x00035594) cursor_secondary_pane

0x92d0,	// (0x0003559c) cursor_title_pane

0x92af,	// (0x0003557b) link_highlight_digital_pane

0x92b7,	// (0x00035583) link_highlight_primary_pane

0x92c0,	// (0x0003558c) link_highlight_primary_small_pane

0x92c8,	// (0x00035594) link_highlight_secondary_pane

0x92d0,	// (0x0003559c) link_highlight_title_pane

0x92af,	// (0x0003557b) copy_highlight_digital_pane

0x92af,	// (0x0003557b) copy_highlight_primary_pane

0x92c0,	// (0x0003558c) copy_highlight_primary_small_pane

0x92c8,	// (0x00035594) copy_highlight_secondary_pane

0x92d0,	// (0x0003559c) copy_highlight_title_pane

0x92c8,	// (0x00035594) graphic_text_digital_pane

0xa29d,	// (0x00036569) graphic_text_primary_pane

0xa2a6,	// (0x00036572) graphic_text_primary_small_pane

0x92c0,	// (0x0003558c) graphic_text_secondary_pane

0x92af,	// (0x0003557b) graphic_text_title_pane

0x92d8,	// (0x000355a4) cursor_primary_pane_g1

0xa28f,	// (0x0003655b) cursor_text_primary_t1

0xa277,	// (0x00036543) cursor_primary_small_pane_g1

0xa281,	// (0x0003654d) cursor_text_primary_small_t1

0xa25f,	// (0x0003652b) cursor_primary_small_pane_g1_copy1

0xa269,	// (0x00036535) cursor_text_primary_small_t1_copy1

0xa247,	// (0x00036513) cursor_text_title_t1

0xa255,	// (0x00036521) cursor_title_pane_g1

0x92d8,	// (0x000355a4) cursor_digital_pane_g1

0x92e2,	// (0x000355ae) cursor_text_digital_t1

0x9307,	// (0x000355d3) link_highlight_primary_pane_g1

0xa1f0,	// (0x000364bc) link_highlight_primary_pane_t1

0x92f0,	// (0x000355bc) link_highlight_primary_small_pane_g1

0x92f8,	// (0x000355c4) link_highlight_primary_small_pane_t1

0x9307,	// (0x000355d3) link_highlight_secondary_pane_g1

0x930f,	// (0x000355db) link_highlight_secondary_pane_t1

0xa164,	// (0x00036430) link_highlight_title_pane_g1

0xa16c,	// (0x00036438) link_highlight_title_pane_t1

0xa14d,	// (0x00036419) link_highlight_digital_pane_g1

0xa155,	// (0x00036421) link_highlight_digital_pane_t1

0xa025,	// (0x000362f1) copy_highlight_primary_pane_g1

0xa02d,	// (0x000362f9) copy_highlight_primary_pane_t1

0x9fff,	// (0x000362cb) copy_highlight_primary_small_pane_g1

0xa016,	// (0x000362e2) copy_highlight_primary_small_pane_t1

0x931e,	// (0x000355ea) copy_highlight_secondary_pane_g1

0x9326,	// (0x000355f2) copy_highlight_secondary_pane_t1

0x9fff,	// (0x000362cb) copy_highlight_title_pane_g1

0xa007,	// (0x000362d3) copy_highlight_title_pane_t1

0xa025,	// (0x000362f1) copy_highlight_digital_pane_g1

0xb2cc,	// (0x00037598) copy_highlight_digital_pane_t1

0xb220,	// (0x000374ec) graphic_text_primary_pane_g1

0xb2b0,	// (0x0003757c) graphic_text_primary_pane_t1

0xb2be,	// (0x0003758a) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0003bc75) graphic_text_primary_pane_t

0xb28c,	// (0x00037558) graphic_text_primary_small_pane_g1

0xb294,	// (0x00037560) graphic_text_primary_small_pane_t1

0xb2a2,	// (0x0003756e) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0003bc70) graphic_text_primary_small_pane_t

0xb268,	// (0x00037534) graphic_text_secondary_pane_g1

0xb270,	// (0x0003753c) graphic_text_secondary_pane_t1

0xb27e,	// (0x0003754a) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0003bc6b) graphic_text_secondary_pane_t

0xb244,	// (0x00037510) graphic_text_title_pane_g1

0xb24c,	// (0x00037518) graphic_text_title_pane_t1

0xb25a,	// (0x00037526) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0003bc66) graphic_text_title_pane_t

0xb220,	// (0x000374ec) graphic_text_digital_pane_g1

0xb228,	// (0x000374f4) graphic_text_digital_pane_t1

0xb236,	// (0x00037502) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0003bc61) graphic_text_digital_pane_t

0x79c8,	// (0x00033c94) navi_icon_pane_srt_ParamLimits

0x79c8,	// (0x00033c94) navi_icon_pane_srt

0x78e8,	// (0x00033bb4) navi_midp_pane_srt

0x78e8,	// (0x00033bb4) navi_navi_pane_srt

0x79c8,	// (0x00033c94) navi_text_pane_srt_ParamLimits

0x79c8,	// (0x00033c94) navi_text_pane_srt

0xb1eb,	// (0x000374b7) navi_navi_icon_text_pane_srt

0xb1f3,	// (0x000374bf) navi_navi_pane_srt_g1_ParamLimits

0xb1f3,	// (0x000374bf) navi_navi_pane_srt_g1

0xb205,	// (0x000374d1) navi_navi_pane_srt_g2_ParamLimits

0xb205,	// (0x000374d1) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0003bc5c) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0003bc5c) navi_navi_pane_srt_g

0xb217,	// (0x000374e3) navi_navi_tabs_pane_srt

0xb1eb,	// (0x000374b7) navi_navi_text_pane_srt

0xb1eb,	// (0x000374b7) navi_navi_volume_pane_srt

0xb1dc,	// (0x000374a8) navi_navi_text_pane_srt_t1

0x626f,	// (0x0003253b) navi_navi_volume_pane_srt_g1

0x6277,	// (0x00032543) volume_small_pane_srt_ParamLimits

0x6277,	// (0x00032543) volume_small_pane_srt

0x543d,	// (0x00031709) volume_small_pane_srt_g1_ParamLimits

0x543d,	// (0x00031709) volume_small_pane_srt_g1

0x544d,	// (0x00031719) volume_small_pane_srt_g2_ParamLimits

0x544d,	// (0x00031719) volume_small_pane_srt_g2

0x545e,	// (0x0003172a) volume_small_pane_srt_g3_ParamLimits

0x545e,	// (0x0003172a) volume_small_pane_srt_g3

0x546f,	// (0x0003173b) volume_small_pane_srt_g4_ParamLimits

0x546f,	// (0x0003173b) volume_small_pane_srt_g4

0x5480,	// (0x0003174c) volume_small_pane_srt_g5_ParamLimits

0x5480,	// (0x0003174c) volume_small_pane_srt_g5

0x5491,	// (0x0003175d) volume_small_pane_srt_g6_ParamLimits

0x5491,	// (0x0003175d) volume_small_pane_srt_g6

0x54a2,	// (0x0003176e) volume_small_pane_srt_g7_ParamLimits

0x54a2,	// (0x0003176e) volume_small_pane_srt_g7

0x54b3,	// (0x0003177f) volume_small_pane_srt_g8_ParamLimits

0x54b3,	// (0x0003177f) volume_small_pane_srt_g8

0x54c4,	// (0x00031790) volume_small_pane_srt_g9_ParamLimits

0x54c4,	// (0x00031790) volume_small_pane_srt_g9

0x54d5,	// (0x000317a1) volume_small_pane_srt_g10_ParamLimits

0x54d5,	// (0x000317a1) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0003ba04) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0003ba04) volume_small_pane_srt_g

0x7dc8,	// (0x00034094) query_popup_data_pane_cp2

0xb1c2,	// (0x0003748e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1c2,	// (0x0003748e) navi_navi_icon_text_pane_srt_t1

0xa29d,	// (0x00036569) navi_tabs_2_long_pane_srt

0xa29d,	// (0x00036569) navi_tabs_2_pane_srt

0xa29d,	// (0x00036569) navi_tabs_3_long_pane_srt

0xa29d,	// (0x00036569) navi_tabs_3_pane_srt

0xa29d,	// (0x00036569) navi_tabs_4_pane_srt

0x624f,	// (0x0003251b) tabs_2_active_pane_srt_ParamLimits

0x624f,	// (0x0003251b) tabs_2_active_pane_srt

0x625f,	// (0x0003252b) tabs_2_passive_pane_srt_ParamLimits

0x625f,	// (0x0003252b) tabs_2_passive_pane_srt

0x94a5,	// (0x00035771) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94a5,	// (0x00035771) bg_passive_tab_pane_cp1_srt

0xb18e,	// (0x0003745a) bg_passive_tab_pane_g1_cp1_srt

0x8dc2,	// (0x0003508e) bg_passive_tab_pane_g2_cp1_srt

0xb197,	// (0x00037463) bg_passive_tab_pane_g3_cp1_srt

0x79c8,	// (0x00033c94) bg_active_tab_pane_cp1_srt_ParamLimits

0x79c8,	// (0x00033c94) bg_active_tab_pane_cp1_srt

0xb1a0,	// (0x0003746c) tabs_2_active_pane_srt_g1

0xb1a8,	// (0x00037474) tabs_2_active_pane_srt_t1_ParamLimits

0xb1a8,	// (0x00037474) tabs_2_active_pane_srt_t1

0xb18e,	// (0x0003745a) bg_active_tab_pane_g1_cp1_srt

0x8dc2,	// (0x0003508e) bg_active_tab_pane_g2_cp1_srt

0xb197,	// (0x00037463) bg_active_tab_pane_g3_cp1_srt

0x621c,	// (0x000324e8) tabs_3_active_pane_srt_ParamLimits

0x621c,	// (0x000324e8) tabs_3_active_pane_srt

0x622d,	// (0x000324f9) tabs_3_passive_pane_cp_srt_ParamLimits

0x622d,	// (0x000324f9) tabs_3_passive_pane_cp_srt

0x623e,	// (0x0003250a) tabs_3_passive_pane_srt_ParamLimits

0x623e,	// (0x0003250a) tabs_3_passive_pane_srt

0x94a5,	// (0x00035771) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94a5,	// (0x00035771) bg_passive_tab_pane_cp2_srt

0x9335,	// (0x00035601) bg_passive_tab_pane_g1_cp2_srt

0x8dc2,	// (0x0003508e) bg_passive_tab_pane_g2_cp2_srt

0x933e,	// (0x0003560a) bg_passive_tab_pane_g3_cp2_srt

0x79c8,	// (0x00033c94) bg_active_tab_pane_cp2_srt_ParamLimits

0x79c8,	// (0x00033c94) bg_active_tab_pane_cp2_srt

0xb174,	// (0x00037440) tabs_3_active_pane_srt_g1

0xb17c,	// (0x00037448) tabs_3_active_pane_srt_t1_ParamLimits

0xb17c,	// (0x00037448) tabs_3_active_pane_srt_t1

0x9335,	// (0x00035601) bg_active_tab_pane_g1_cp2_srt

0x8dc2,	// (0x0003508e) bg_active_tab_pane_g2_cp2_srt

0x933e,	// (0x0003560a) bg_active_tab_pane_g3_cp2_srt

0x61d4,	// (0x000324a0) tabs_4_active_pane_srt_ParamLimits

0x61d4,	// (0x000324a0) tabs_4_active_pane_srt

0x61e6,	// (0x000324b2) tabs_4_passive_pane_cp2_srt_ParamLimits

0x61e6,	// (0x000324b2) tabs_4_passive_pane_cp2_srt

0x5648,	// (0x00031914) aid_size_cell_toolbar

0x8449,	// (0x00034715) main_idle_act_pane_ParamLimits

0x5809,	// (0x00031ad5) popup_large_graphic_colour_window_ParamLimits

0x5b70,	// (0x00031e3c) popup_toolbar_window_ParamLimits

0x5b70,	// (0x00031e3c) popup_toolbar_window

0x6146,	// (0x00032412) list_single_graphic_2heading_pane_ParamLimits

0x6146,	// (0x00032412) list_single_graphic_2heading_pane

0x886f,	// (0x00034b3b) aid_size_cell_apps_grid_lsc_pane

0x8881,	// (0x00034b4d) aid_size_cell_apps_grid_prt_pane

0x94a5,	// (0x00035771) bg_wml_button_pane_cp1_ParamLimits

0x94a5,	// (0x00035771) bg_wml_button_pane_cp1

0x9c73,	// (0x00035f3f) form_midp_field_text_pane_t1_ParamLimits

0x9a43,	// (0x00035d0f) input_focus_pane_cp050_ParamLimits

0x9caa,	// (0x00035f76) list_midp_form_text_pane_ParamLimits

0x9c50,	// (0x00035f1c) input_focus_pane_cp051_ParamLimits

0x9c64,	// (0x00035f30) list_midp_choice_pane_ParamLimits

0x9afc,	// (0x00035dc8) list_single_2graphic_pane_cp3_ParamLimits

0x9afc,	// (0x00035dc8) list_single_2graphic_pane_cp3

0x9b1d,	// (0x00035de9) list_single_midp_graphic_pane_ParamLimits

0x9b1d,	// (0x00035de9) list_single_midp_graphic_pane

0x443c,	// (0x00030708) list_single_graphic_2heading_pane_g1_ParamLimits

0x443c,	// (0x00030708) list_single_graphic_2heading_pane_g1

0x4448,	// (0x00030714) list_single_graphic_2heading_pane_g4_ParamLimits

0x4448,	// (0x00030714) list_single_graphic_2heading_pane_g4

0x4454,	// (0x00030720) list_single_graphic_2heading_pane_g5_ParamLimits

0x4454,	// (0x00030720) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0003ba57) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0003ba57) list_single_graphic_2heading_pane_g

0x4460,	// (0x0003072c) list_single_graphic_2heading_pane_t1_ParamLimits

0x4460,	// (0x0003072c) list_single_graphic_2heading_pane_t1

0x4474,	// (0x00030740) list_single_graphic_2heading_pane_t2_ParamLimits

0x4474,	// (0x00030740) list_single_graphic_2heading_pane_t2

0x448e,	// (0x0003075a) list_single_graphic_2heading_pane_t3_ParamLimits

0x448e,	// (0x0003075a) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0003ba5e) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0003ba5e) list_single_graphic_2heading_pane_t

0x990d,	// (0x00035bd9) bg_popup_sub_pane_cp2

0x9937,	// (0x00035c03) grid_toobar_pane

0x5c1d,	// (0x00031ee9) cell_toolbar_pane_ParamLimits

0x5c1d,	// (0x00031ee9) cell_toolbar_pane

0x9973,	// (0x00035c3f) cell_toolbar_pane_g1_ParamLimits

0x9973,	// (0x00035c3f) cell_toolbar_pane_g1

0x9987,	// (0x00035c53) cell_toolbar_pane_g2_ParamLimits

0x9987,	// (0x00035c53) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0003ba6c) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0003ba6c) cell_toolbar_pane_g

0x99a9,	// (0x00035c75) grid_highlight_pane_cp2_ParamLimits

0x99a9,	// (0x00035c75) grid_highlight_pane_cp2

0x99c3,	// (0x00035c8f) toolbar_button_pane

0x99cf,	// (0x00035c9b) toolbar_button_pane_g1

0x99d7,	// (0x00035ca3) toolbar_button_pane_g2

0x99df,	// (0x00035cab) toolbar_button_pane_g3

0x99e7,	// (0x00035cb3) toolbar_button_pane_g4

0x99ef,	// (0x00035cbb) toolbar_button_pane_g5

0x99f7,	// (0x00035cc3) toolbar_button_pane_g6

0x99ff,	// (0x00035ccb) toolbar_button_pane_g7

0x9a07,	// (0x00035cd3) toolbar_button_pane_g8

0x9a0f,	// (0x00035cdb) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0003ba71) toolbar_button_pane_g

0x5c8f,	// (0x00031f5b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5c8f,	// (0x00031f5b) list_single_2graphic_pane_g1_cp3

0x5c9b,	// (0x00031f67) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5c9b,	// (0x00031f67) list_single_2graphic_pane_g2_cp3

0x5cac,	// (0x00031f78) list_single_2graphic_pane_g3_cp3

0x5cb4,	// (0x00031f80) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5cb4,	// (0x00031f80) list_single_2graphic_pane_g4_cp3

0x5cc0,	// (0x00031f8c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5cc0,	// (0x00031f8c) list_single_2graphic_pane_t1_cp3

0x5d1c,	// (0x00031fe8) list_single_midp_graphic_pane_g2_ParamLimits

0x5d1c,	// (0x00031fe8) list_single_midp_graphic_pane_g2

0x5650,	// (0x0003191c) aid_zoom_text_primary

0x4420,	// (0x000306ec) aid_zoom_text_secondary

0x93ef,	// (0x000356bb) status_small_pane_g7_ParamLimits

0x93ef,	// (0x000356bb) status_small_pane_g7

0x9412,	// (0x000356de) status_small_pane_t1_ParamLimits

0x78ff,	// (0x00033bcb) title_pane_g2

0x0003,

0xf529,	// (0x0003b7f5) title_pane_g

0x7e70,	// (0x0003413c) aid_size_cell_colour_1_pane_ParamLimits

0x7e70,	// (0x0003413c) aid_size_cell_colour_1_pane

0x7e84,	// (0x00034150) aid_size_cell_colour_2_pane_ParamLimits

0x7e84,	// (0x00034150) aid_size_cell_colour_2_pane

0x7e98,	// (0x00034164) aid_size_cell_colour_3_pane_ParamLimits

0x7e98,	// (0x00034164) aid_size_cell_colour_3_pane

0x7eac,	// (0x00034178) aid_size_cell_colour_4_pane_ParamLimits

0x7eac,	// (0x00034178) aid_size_cell_colour_4_pane

0x5010,	// (0x000312dc) title_pane_stacon_g1_ParamLimits

0x5010,	// (0x000312dc) title_pane_stacon_g1

0xa084,	// (0x00036350) popup_note_wait_window_g3_ParamLimits

0xa084,	// (0x00036350) popup_note_wait_window_g3

0xa0fa,	// (0x000363c6) popup_note_wait_window_t5_ParamLimits

0xa0fa,	// (0x000363c6) popup_note_wait_window_t5

0x78e8,	// (0x00033bb4) main_feb_china_hwr_fs_writing_pane

0x56ea,	// (0x000319b6) popup_feb_china_hwr_fs_window_ParamLimits

0x56ea,	// (0x000319b6) popup_feb_china_hwr_fs_window

0x5db4,	// (0x00032080) aid_size_cell_hwr_fs_ParamLimits

0x5db4,	// (0x00032080) aid_size_cell_hwr_fs

0x9a43,	// (0x00035d0f) bg_popup_sub_pane_cp3_ParamLimits

0x9a43,	// (0x00035d0f) bg_popup_sub_pane_cp3

0x5dc9,	// (0x00032095) grid_hwr_fs_pane_ParamLimits

0x5dc9,	// (0x00032095) grid_hwr_fs_pane

0x5de1,	// (0x000320ad) linegrid_hwr_fs_pane_ParamLimits

0x5de1,	// (0x000320ad) linegrid_hwr_fs_pane

0x5df1,	// (0x000320bd) cell_hwr_fs_pane_ParamLimits

0x5df1,	// (0x000320bd) cell_hwr_fs_pane

0x9a4f,	// (0x00035d1b) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a4f,	// (0x00035d1b) linegrid_hwr_fs_pane_g1

0x9a5b,	// (0x00035d27) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a5b,	// (0x00035d27) linegrid_hwr_fs_pane_g2

0x9a6d,	// (0x00035d39) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a6d,	// (0x00035d39) linegrid_hwr_fs_pane_g3

0x5e13,	// (0x000320df) linegrid_hwr_fs_pane_g4_ParamLimits

0x5e13,	// (0x000320df) linegrid_hwr_fs_pane_g4

0x5e2d,	// (0x000320f9) linegrid_hwr_fs_pane_g5_ParamLimits

0x5e2d,	// (0x000320f9) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0003ba9c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0003ba9c) linegrid_hwr_fs_pane_g

0x9a79,	// (0x00035d45) cell_hwr_fs_pane_g1_ParamLimits

0x9a79,	// (0x00035d45) cell_hwr_fs_pane_g1

0x9844,	// (0x00035b10) cell_hwr_fs_pane_g2_ParamLimits

0x9844,	// (0x00035b10) cell_hwr_fs_pane_g2

0x9a8f,	// (0x00035d5b) cell_hwr_fs_pane_g3_ParamLimits

0x9a8f,	// (0x00035d5b) cell_hwr_fs_pane_g3

0x9a9c,	// (0x00035d68) cell_hwr_fs_pane_g4_ParamLimits

0x9a9c,	// (0x00035d68) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0003baa7) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0003baa7) cell_hwr_fs_pane_g

0x5e43,	// (0x0003210f) cell_hwr_fs_pane_t1

0x78e8,	// (0x00033bb4) grid_highlight_pane_cp6

0x78e8,	// (0x00033bb4) main_idle_act2_pane

0x83bc,	// (0x00034688) aid_inside_area_popup_secondary

0xa731,	// (0x000369fd) aid_inside_area_window_primary_ParamLimits

0xa731,	// (0x000369fd) aid_inside_area_window_primary

0xb2db,	// (0x000375a7) ai2_news_ticker_pane

0xb2e3,	// (0x000375af) aid_size_cell_ai1_link_ParamLimits

0xb2e3,	// (0x000375af) aid_size_cell_ai1_link

0xb2fd,	// (0x000375c9) popup_ai2_data_window_ParamLimits

0xb2fd,	// (0x000375c9) popup_ai2_data_window

0xb313,	// (0x000375df) popup_ai2_link_window_ParamLimits

0xb313,	// (0x000375df) popup_ai2_link_window

0x9a43,	// (0x00035d0f) bg_popup_sub_pane_cp4_ParamLimits

0x9a43,	// (0x00035d0f) bg_popup_sub_pane_cp4

0xb327,	// (0x000375f3) grid_ai2_link_pane_ParamLimits

0xb327,	// (0x000375f3) grid_ai2_link_pane

0xb33e,	// (0x0003760a) popup_ai2_link_window_g1_ParamLimits

0xb33e,	// (0x0003760a) popup_ai2_link_window_g1

0xb34a,	// (0x00037616) popup_ai2_link_window_g2_ParamLimits

0xb34a,	// (0x00037616) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0003bc7a) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0003bc7a) popup_ai2_link_window_g

0xb359,	// (0x00037625) ai2_mp_button_pane

0xb361,	// (0x0003762d) ai2_mp_volume_pane

0x9c50,	// (0x00035f1c) bg_popup_sub_pane_cp5_ParamLimits

0x9c50,	// (0x00035f1c) bg_popup_sub_pane_cp5

0xb369,	// (0x00037635) heading_ai2_gene_pane_ParamLimits

0xb369,	// (0x00037635) heading_ai2_gene_pane

0xb375,	// (0x00037641) list_ai2_gene_pane_ParamLimits

0xb375,	// (0x00037641) list_ai2_gene_pane

0xb3bd,	// (0x00037689) cell_ai2_link_pane_ParamLimits

0xb3bd,	// (0x00037689) cell_ai2_link_pane

0xb3d3,	// (0x0003769f) cell_ai2_link_pane_g1

0x78e8,	// (0x00033bb4) grid_highlight_pane_cp7

0x628c,	// (0x00032558) ai2_mp_volume_pane_g1

0xb4a3,	// (0x0003776f) ai2_mp_volume_pane_g2

0xb418,	// (0x000376e4) list_ai2_gene_pane_t1

0xb4ab,	// (0x00037777) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0003bc93) ai2_mp_volume_pane_g

0x6294,	// (0x00032560) volume_small_pane_cp3

0xb4b3,	// (0x0003777f) aid_size_cell_ai2_button

0xb4bb,	// (0x00037787) grid_ai2_button_pane

0xb4c4,	// (0x00037790) cell_ai2_button_pane_ParamLimits

0xb4c4,	// (0x00037790) cell_ai2_button_pane

0x2963,	// (0x0002ec2f) cell_ai2_button_pane_g1

0x78e8,	// (0x00033bb4) grid_highlight_pane_cp8

0xb463,	// (0x0003772f) ai2_gene_pane_t1_ParamLimits

0xb463,	// (0x0003772f) ai2_gene_pane_t1

0x563e,	// (0x0003190a) aid_height_parent_landscape

0xada7,	// (0x00037073) aid_height_set_list

0xadb8,	// (0x00037084) aid_size_parent

0xb0fe,	// (0x000373ca) aid_size_cell_graphic_pane_ParamLimits

0xb385,	// (0x00037651) popup_ai2_data_window_g1_ParamLimits

0xb385,	// (0x00037651) popup_ai2_data_window_g1

0xb391,	// (0x0003765d) ai2_news_ticker_pane_g1

0xb399,	// (0x00037665) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0003bc7f) ai2_news_ticker_pane_g

0xb3a1,	// (0x0003766d) ai2_news_ticker_pane_t1

0xb3af,	// (0x0003767b) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0003bc84) ai2_news_ticker_pane_t

0xb3dc,	// (0x000376a8) heading_ai2_gene_pane_g1

0xb3e4,	// (0x000376b0) heading_ai2_gene_pane_t1_ParamLimits

0xb3e4,	// (0x000376b0) heading_ai2_gene_pane_t1

0xb3f9,	// (0x000376c5) list_highlight_pane_cp6

0xb401,	// (0x000376cd) ai2_gene_pane_ParamLimits

0xb401,	// (0x000376cd) ai2_gene_pane

0xb426,	// (0x000376f2) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0003bc89) list_ai2_gene_pane_t

0xb434,	// (0x00037700) list_highlight_pane_cp8_ParamLimits

0xb434,	// (0x00037700) list_highlight_pane_cp8

0xb445,	// (0x00037711) ai2_gene_pane_g1_ParamLimits

0xb445,	// (0x00037711) ai2_gene_pane_g1

0xb457,	// (0x00037723) ai2_gene_pane_g2_ParamLimits

0xb457,	// (0x00037723) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0003bc8e) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0003bc8e) ai2_gene_pane_g

0x81eb,	// (0x000344b7) scroll_pane_cp12

0x55fb,	// (0x000318c7) control_pane_t3_ParamLimits

0x55fb,	// (0x000318c7) control_pane_t3

0x9403,	// (0x000356cf) status_small_pane_g8_ParamLimits

0x9403,	// (0x000356cf) status_small_pane_g8

0x57d0,	// (0x00031a9c) popup_find_window_ParamLimits

0x59e7,	// (0x00031cb3) popup_note_image_window_ParamLimits

0x5c4d,	// (0x00031f19) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c4d,	// (0x00031f19) list_double2_graphic_pane_vc_g1

0x5c59,	// (0x00031f25) list_double2_graphic_pane_vc_g2_ParamLimits

0x5c59,	// (0x00031f25) list_double2_graphic_pane_vc_g2

0x5c65,	// (0x00031f31) list_double2_graphic_pane_vc_g3_ParamLimits

0x5c65,	// (0x00031f31) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0003ba65) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0003ba65) list_double2_graphic_pane_vc_g

0x5c71,	// (0x00031f3d) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c71,	// (0x00031f3d) list_double2_graphic_pane_vc_t1

0x5cdc,	// (0x00031fa8) list_single_heading_pane_vc_g1_ParamLimits

0x5cdc,	// (0x00031fa8) list_single_heading_pane_vc_g1

0x5ce8,	// (0x00031fb4) list_single_heading_pane_vc_g2_ParamLimits

0x5ce8,	// (0x00031fb4) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003ba86) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003ba86) list_single_heading_pane_vc_g

0x5cf4,	// (0x00031fc0) list_single_heading_pane_vc_t1_ParamLimits

0x5cf4,	// (0x00031fc0) list_single_heading_pane_vc_t1

0x5d0a,	// (0x00031fd6) list_single_heading_pane_vc_t2_ParamLimits

0x5d0a,	// (0x00031fd6) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0003ba8b) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0003ba8b) list_single_heading_pane_vc_t

0x5d3e,	// (0x0003200a) list_setting_number_pane_vc_g1_ParamLimits

0x5d3e,	// (0x0003200a) list_setting_number_pane_vc_g1

0x5d4a,	// (0x00032016) list_setting_number_pane_vc_g2_ParamLimits

0x5d4a,	// (0x00032016) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003ba90) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003ba90) list_setting_number_pane_vc_g

0x5d56,	// (0x00032022) list_setting_number_pane_vc_t1_ParamLimits

0x5d56,	// (0x00032022) list_setting_number_pane_vc_t1

0x5d6a,	// (0x00032036) list_setting_number_pane_vc_t2_ParamLimits

0x5d6a,	// (0x00032036) list_setting_number_pane_vc_t2

0x5d86,	// (0x00032052) list_setting_number_pane_vc_t3_ParamLimits

0x5d86,	// (0x00032052) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0003ba95) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0003ba95) list_setting_number_pane_vc_t

0x5da4,	// (0x00032070) set_value_pane_vc_ParamLimits

0x5da4,	// (0x00032070) set_value_pane_vc

0x6146,	// (0x00032412) list_double2_graphic_pane_vc_ParamLimits

0x6146,	// (0x00032412) list_double2_graphic_pane_vc

0xaf70,	// (0x0003723c) list_double2_large_graphic_pane_vc_ParamLimits

0xaf70,	// (0x0003723c) list_double2_large_graphic_pane_vc

0x6146,	// (0x00032412) list_double2_pane_vc_ParamLimits

0x6146,	// (0x00032412) list_double2_pane_vc

0x6146,	// (0x00032412) list_double_graphic_heading_pane_vc_ParamLimits

0x6146,	// (0x00032412) list_double_graphic_heading_pane_vc

0x6146,	// (0x00032412) list_double_graphic_pane_vc_ParamLimits

0x6146,	// (0x00032412) list_double_graphic_pane_vc

0x6146,	// (0x00032412) list_double_heading_pane_vc_ParamLimits

0x6146,	// (0x00032412) list_double_heading_pane_vc

0xaf82,	// (0x0003724e) list_double_large_graphic_pane_vc_ParamLimits

0xaf82,	// (0x0003724e) list_double_large_graphic_pane_vc

0x6146,	// (0x00032412) list_double_number_pane_vc_ParamLimits

0x6146,	// (0x00032412) list_double_number_pane_vc

0x6146,	// (0x00032412) list_double_pane_vc_ParamLimits

0x6146,	// (0x00032412) list_double_pane_vc

0x6146,	// (0x00032412) list_double_time_pane_vc_ParamLimits

0x6146,	// (0x00032412) list_double_time_pane_vc

0x6146,	// (0x00032412) list_setting_number_pane_vc_ParamLimits

0x6146,	// (0x00032412) list_setting_number_pane_vc

0x6146,	// (0x00032412) list_setting_pane_vc_ParamLimits

0x6146,	// (0x00032412) list_setting_pane_vc

0x6146,	// (0x00032412) list_single_graphic_heading_pane_vc_ParamLimits

0x6146,	// (0x00032412) list_single_graphic_heading_pane_vc

0x6146,	// (0x00032412) list_single_heading_pane_vc_ParamLimits

0x6146,	// (0x00032412) list_single_heading_pane_vc

0x6159,	// (0x00032425) list_single_number_heading_pane_vc_ParamLimits

0x6159,	// (0x00032425) list_single_number_heading_pane_vc

0x629d,	// (0x00032569) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x629d,	// (0x00032569) list_double_graphic_heading_pane_vc_g1

0x5cdc,	// (0x00031fa8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5cdc,	// (0x00031fa8) list_double_graphic_heading_pane_vc_g2

0x5ce8,	// (0x00031fb4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5ce8,	// (0x00031fb4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0003bc9a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0003bc9a) list_double_graphic_heading_pane_vc_g

0x62a9,	// (0x00032575) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x62a9,	// (0x00032575) list_double_graphic_heading_pane_vc_t1

0x62c5,	// (0x00032591) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x62c5,	// (0x00032591) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0003bca1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0003bca1) list_double_graphic_heading_pane_vc_t

0x5d3e,	// (0x0003200a) list_setting_pane_vc_g1_ParamLimits

0x5d3e,	// (0x0003200a) list_setting_pane_vc_g1

0x5d4a,	// (0x00032016) list_setting_pane_vc_g2_ParamLimits

0x5d4a,	// (0x00032016) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003ba90) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003ba90) list_setting_pane_vc_g

0x62e3,	// (0x000325af) list_setting_pane_vc_t1_ParamLimits

0x62e3,	// (0x000325af) list_setting_pane_vc_t1

0x62ff,	// (0x000325cb) list_setting_pane_vc_t2_ParamLimits

0x62ff,	// (0x000325cb) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0003bccf) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0003bccf) list_setting_pane_vc_t

0x5da4,	// (0x00032070) set_value_pane_cp_vc_ParamLimits

0x5da4,	// (0x00032070) set_value_pane_cp_vc

0x5cdc,	// (0x00031fa8) list_single_number_heading_pane_vc_g1_ParamLimits

0x5cdc,	// (0x00031fa8) list_single_number_heading_pane_vc_g1

0x5ce8,	// (0x00031fb4) list_single_number_heading_pane_vc_g2_ParamLimits

0x5ce8,	// (0x00031fb4) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003ba86) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003ba86) list_single_number_heading_pane_vc_g

0x631b,	// (0x000325e7) list_single_number_heading_pane_vc_t1_ParamLimits

0x631b,	// (0x000325e7) list_single_number_heading_pane_vc_t1

0x6331,	// (0x000325fd) list_single_number_heading_pane_vc_t2_ParamLimits

0x6331,	// (0x000325fd) list_single_number_heading_pane_vc_t2

0x6347,	// (0x00032613) list_single_number_heading_pane_vc_t3_ParamLimits

0x6347,	// (0x00032613) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0003bcd4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0003bcd4) list_single_number_heading_pane_vc_t

0x5c4d,	// (0x00031f19) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5c4d,	// (0x00031f19) list_single_graphic_heading_pane_vc_g1

0x5cdc,	// (0x00031fa8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5cdc,	// (0x00031fa8) list_single_graphic_heading_pane_vc_g4

0x5ce8,	// (0x00031fb4) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5ce8,	// (0x00031fb4) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0f,	// (0x0003bcdb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0f,	// (0x0003bcdb) list_single_graphic_heading_pane_vc_g

0x631b,	// (0x000325e7) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x631b,	// (0x000325e7) list_single_graphic_heading_pane_vc_t1

0x6359,	// (0x00032625) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6359,	// (0x00032625) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa16,	// (0x0003bce2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x0003bce2) list_single_graphic_heading_pane_vc_t

0x5cdc,	// (0x00031fa8) list_double2_pane_vc_g1_ParamLimits

0x5cdc,	// (0x00031fa8) list_double2_pane_vc_g1

0x5ce8,	// (0x00031fb4) list_double2_pane_vc_g2_ParamLimits

0x5ce8,	// (0x00031fb4) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003ba86) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003ba86) list_double2_pane_vc_g

0x636b,	// (0x00032637) list_double2_pane_vc_t1_ParamLimits

0x636b,	// (0x00032637) list_double2_pane_vc_t1

0x6381,	// (0x0003264d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6381,	// (0x0003264d) list_double2_large_graphic_pane_vc_g1

0x3971,	// (0x0002fc3d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3971,	// (0x0002fc3d) list_double2_large_graphic_pane_vc_g2

0x397d,	// (0x0002fc49) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x397d,	// (0x0002fc49) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1b,	// (0x0003bce7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1b,	// (0x0003bce7) list_double2_large_graphic_pane_vc_g

0x638d,	// (0x00032659) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x638d,	// (0x00032659) list_double2_large_graphic_pane_vc_t1

0x63a3,	// (0x0003266f) list_double_time_pane_vc_g1_ParamLimits

0x63a3,	// (0x0003266f) list_double_time_pane_vc_g1

0x63af,	// (0x0003267b) list_double_time_pane_vc_g2_ParamLimits

0x63af,	// (0x0003267b) list_double_time_pane_vc_g2

0x0001,

0xfa22,	// (0x0003bcee) list_double_time_pane_vc_g_ParamLimits

0xfa22,	// (0x0003bcee) list_double_time_pane_vc_g

0x63bb,	// (0x00032687) list_double_time_pane_vc_t1_ParamLimits

0x63bb,	// (0x00032687) list_double_time_pane_vc_t1

0x63df,	// (0x000326ab) list_double_time_pane_vc_t2_ParamLimits

0x63df,	// (0x000326ab) list_double_time_pane_vc_t2

0x6429,	// (0x000326f5) list_double_time_pane_vc_t3_ParamLimits

0x6429,	// (0x000326f5) list_double_time_pane_vc_t3

0x643b,	// (0x00032707) list_double_time_pane_vc_t4_ParamLimits

0x643b,	// (0x00032707) list_double_time_pane_vc_t4

0x0003,

0xfa27,	// (0x0003bcf3) list_double_time_pane_vc_t_ParamLimits

0xfa27,	// (0x0003bcf3) list_double_time_pane_vc_t

0x5cdc,	// (0x00031fa8) list_double_pane_vc_g1_ParamLimits

0x5cdc,	// (0x00031fa8) list_double_pane_vc_g1

0x5ce8,	// (0x00031fb4) list_double_pane_vc_g2_ParamLimits

0x5ce8,	// (0x00031fb4) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003ba86) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003ba86) list_double_pane_vc_g

0x644f,	// (0x0003271b) list_double_pane_vc_t1_ParamLimits

0x644f,	// (0x0003271b) list_double_pane_vc_t1

0x6463,	// (0x0003272f) list_double_pane_vc_t2_ParamLimits

0x6463,	// (0x0003272f) list_double_pane_vc_t2

0x0001,

0xfa30,	// (0x0003bcfc) list_double_pane_vc_t_ParamLimits

0xfa30,	// (0x0003bcfc) list_double_pane_vc_t

0x5cdc,	// (0x00031fa8) list_double_number_pane_vc_g1_ParamLimits

0x5cdc,	// (0x00031fa8) list_double_number_pane_vc_g1

0x5ce8,	// (0x00031fb4) list_double_number_pane_vc_g2_ParamLimits

0x5ce8,	// (0x00031fb4) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003ba86) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003ba86) list_double_number_pane_vc_g

0x647b,	// (0x00032747) list_double_number_pane_vc_t1_ParamLimits

0x647b,	// (0x00032747) list_double_number_pane_vc_t1

0x648d,	// (0x00032759) list_double_number_pane_vc_t2_ParamLimits

0x648d,	// (0x00032759) list_double_number_pane_vc_t2

0x64a1,	// (0x0003276d) list_double_number_pane_vc_t3_ParamLimits

0x64a1,	// (0x0003276d) list_double_number_pane_vc_t3

0x0002,

0xfa35,	// (0x0003bd01) list_double_number_pane_vc_t_ParamLimits

0xfa35,	// (0x0003bd01) list_double_number_pane_vc_t

0x64b9,	// (0x00032785) list_double_large_graphic_pane_vc_g1_ParamLimits

0x64b9,	// (0x00032785) list_double_large_graphic_pane_vc_g1

0x64d5,	// (0x000327a1) list_double_large_graphic_pane_vc_g2_ParamLimits

0x64d5,	// (0x000327a1) list_double_large_graphic_pane_vc_g2

0x64e9,	// (0x000327b5) list_double_large_graphic_pane_vc_g3_ParamLimits

0x64e9,	// (0x000327b5) list_double_large_graphic_pane_vc_g3

0x64f8,	// (0x000327c4) list_double_large_graphic_pane_vc_g4_ParamLimits

0x64f8,	// (0x000327c4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3c,	// (0x0003bd08) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3c,	// (0x0003bd08) list_double_large_graphic_pane_vc_g

0x6507,	// (0x000327d3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6507,	// (0x000327d3) list_double_large_graphic_pane_vc_t1

0x6523,	// (0x000327ef) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6523,	// (0x000327ef) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa45,	// (0x0003bd11) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa45,	// (0x0003bd11) list_double_large_graphic_pane_vc_t

0x5cdc,	// (0x00031fa8) list_double_heading_pane_vc_g1_ParamLimits

0x5cdc,	// (0x00031fa8) list_double_heading_pane_vc_g1

0x5ce8,	// (0x00031fb4) list_double_heading_pane_vc_g2_ParamLimits

0x5ce8,	// (0x00031fb4) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003ba86) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003ba86) list_double_heading_pane_vc_g

0x6545,	// (0x00032811) list_double_heading_pane_vc_t1_ParamLimits

0x6545,	// (0x00032811) list_double_heading_pane_vc_t1

0x6559,	// (0x00032825) list_double_heading_pane_vc_t2_ParamLimits

0x6559,	// (0x00032825) list_double_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x0003bd16) list_double_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x0003bd16) list_double_heading_pane_vc_t

0x6571,	// (0x0003283d) list_double_graphic_pane_vc_g1_ParamLimits

0x6571,	// (0x0003283d) list_double_graphic_pane_vc_g1

0x6584,	// (0x00032850) list_double_graphic_pane_vc_g2_ParamLimits

0x6584,	// (0x00032850) list_double_graphic_pane_vc_g2

0x5cdc,	// (0x00031fa8) list_double_graphic_pane_vc_g3_ParamLimits

0x5cdc,	// (0x00031fa8) list_double_graphic_pane_vc_g3

0x0003,

0xfa4f,	// (0x0003bd1b) list_double_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x0003bd1b) list_double_graphic_pane_vc_g

0x65a1,	// (0x0003286d) list_double_graphic_pane_vc_t1_ParamLimits

0x65a1,	// (0x0003286d) list_double_graphic_pane_vc_t1

0x65cb,	// (0x00032897) list_double_graphic_pane_vc_t2_ParamLimits

0x65cb,	// (0x00032897) list_double_graphic_pane_vc_t2

0x0001,

0xfa58,	// (0x0003bd24) list_double_graphic_pane_vc_t_ParamLimits

0xfa58,	// (0x0003bd24) list_double_graphic_pane_vc_t

0x44be,	// (0x0003078a) aid_size_cell_fastswap

0x44c6,	// (0x00030792) aid_size_cell_touch_ParamLimits

0x44c6,	// (0x00030792) aid_size_cell_touch

0x472b,	// (0x000309f7) popup_fast_swap_wide_window_ParamLimits

0x472b,	// (0x000309f7) popup_fast_swap_wide_window

0x483f,	// (0x00030b0b) touch_pane_ParamLimits

0x483f,	// (0x00030b0b) touch_pane

0x8241,	// (0x0003450d) button_value_adjust_pane_cp2

0x3a44,	// (0x0002fd10) button_value_adjust_pane_cp4

0x4d92,	// (0x0003105e) form_field_data_pane_cp2

0x4db1,	// (0x0003107d) form_field_data_wide_pane_cp2

0x893e,	// (0x00034c0a) bg_scroll_pane_ParamLimits

0x5172,	// (0x0003143e) scroll_handle_pane_ParamLimits

0x5186,	// (0x00031452) scroll_sc2_down_pane_ParamLimits

0x5186,	// (0x00031452) scroll_sc2_down_pane

0x896f,	// (0x00034c3b) scroll_sc2_up_pane_ParamLimits

0x896f,	// (0x00034c3b) scroll_sc2_up_pane

0xbbb8,	// (0x00037e84) grid_wheel_folder_pane_g1_ParamLimits

0xbbb8,	// (0x00037e84) grid_wheel_folder_pane_g1

0x53d5,	// (0x000316a1) clock_nsta_pane_cp2_ParamLimits

0x53d5,	// (0x000316a1) clock_nsta_pane_cp2

0x9189,	// (0x00035455) listscroll_midp_pane_ParamLimits

0x9195,	// (0x00035461) midp_canvas_pane

0x947d,	// (0x00035749) nsta_clock_indic_pane

0x94b1,	// (0x0003577d) listscroll_form_pane_vc

0x94b9,	// (0x00035785) listscroll_set_pane_vc_ParamLimits

0x94b9,	// (0x00035785) listscroll_set_pane_vc

0x95b2,	// (0x0003587e) clock_nsta_pane

0x962d,	// (0x000358f9) indicator_nsta_pane

0x990d,	// (0x00035bd9) bg_popup_sub_pane_cp2_ParamLimits

0x9921,	// (0x00035bed) find_pane_cp2_ParamLimits

0x9921,	// (0x00035bed) find_pane_cp2

0x9937,	// (0x00035c03) grid_toobar_pane_ParamLimits

0x9a17,	// (0x00035ce3) list_form_gen_pane_vc_ParamLimits

0x9a17,	// (0x00035ce3) list_form_gen_pane_vc

0x9a2d,	// (0x00035cf9) scroll_pane_cp8_vc_ParamLimits

0x9a2d,	// (0x00035cf9) scroll_pane_cp8_vc

0x9aa9,	// (0x00035d75) data_form_wide_pane_vc_ParamLimits

0x9aa9,	// (0x00035d75) data_form_wide_pane_vc

0x9ab5,	// (0x00035d81) form_field_data_wide_pane_vc_g1

0x9abd,	// (0x00035d89) form_field_data_wide_pane_vc_t1_ParamLimits

0x9abd,	// (0x00035d89) form_field_data_wide_pane_vc_t1

0x8255,	// (0x00034521) input_focus_pane_cp6_vc_ParamLimits

0x8255,	// (0x00034521) input_focus_pane_cp6_vc

0x9de3,	// (0x000360af) list_midp_pane_ParamLimits

0x9def,	// (0x000360bb) scroll_pane_cp16_ParamLimits

0x9def,	// (0x000360bb) scroll_pane_cp16

0x9e59,	// (0x00036125) button_value_adjust_pane_ParamLimits

0x9e59,	// (0x00036125) button_value_adjust_pane

0xadca,	// (0x00037096) button_value_adjust_pane_cp6_ParamLimits

0xadca,	// (0x00037096) button_value_adjust_pane_cp6

0xaef4,	// (0x000371c0) settings_code_pane_cp_ParamLimits

0xaef4,	// (0x000371c0) settings_code_pane_cp

0x2963,	// (0x0002ec2f) cell_touch_pane_g1

0x2963,	// (0x0002ec2f) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0003b9aa) cell_touch_pane_g

0xb4d6,	// (0x000377a2) cell_touch_pane_cp_ParamLimits

0xb4d6,	// (0x000377a2) cell_touch_pane_cp

0xb4e6,	// (0x000377b2) cell_touch_pane_ParamLimits

0xb4e6,	// (0x000377b2) cell_touch_pane

0x2963,	// (0x0002ec2f) scroll_sc2_down_pane_g1

0x2963,	// (0x0002ec2f) scroll_sc2_up_pane_g1

0x78e8,	// (0x00033bb4) bg_set_opt_pane_cp4_vc

0xb4f8,	// (0x000377c4) list_set_graphic_pane_vc_g1_ParamLimits

0xb4f8,	// (0x000377c4) list_set_graphic_pane_vc_g1

0xb504,	// (0x000377d0) list_set_graphic_pane_vc_g2_ParamLimits

0xb504,	// (0x000377d0) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0003bca6) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0003bca6) list_set_graphic_pane_vc_g

0xb510,	// (0x000377dc) text_primary_small_cp13_vc_ParamLimits

0xb510,	// (0x000377dc) text_primary_small_cp13_vc

0xb528,	// (0x000377f4) list_set_graphic_pane_vc_ParamLimits

0xb528,	// (0x000377f4) list_set_graphic_pane_vc

0x78e8,	// (0x00033bb4) input_focus_pane_cp2_vc

0x2963,	// (0x0002ec2f) setting_code_pane_vc_g1

0x7a13,	// (0x00033cdf) setting_code_pane_vc_t1

0xb53b,	// (0x00037807) set_text_pane_vc_t1_ParamLimits

0xb53b,	// (0x00037807) set_text_pane_vc_t1

0x78e8,	// (0x00033bb4) input_focus_pane_cp1_vc

0xb557,	// (0x00037823) list_set_text_pane_vc

0x2963,	// (0x0002ec2f) setting_text_pane_vc_g1

0x78e8,	// (0x00033bb4) bg_set_opt_pane_cp2_vc

0x7a0a,	// (0x00033cd6) setting_slider_graphic_pane_vc_g1

0xb561,	// (0x0003782d) setting_slider_graphic_pane_vc_t1

0xb571,	// (0x0003783d) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0003bcab) setting_slider_graphic_pane_vc_t

0xb581,	// (0x0003784d) slider_set_pane_cp_vc

0xb589,	// (0x00037855) slider_set_pane_vc_g1

0xb592,	// (0x0003785e) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0003bcb0) slider_set_pane_vc_g

0x82ad,	// (0x00034579) set_opt_bg_pane_g1_copy1

0x82b5,	// (0x00034581) set_opt_bg_pane_g2_copy1

0xb5be,	// (0x0003788a) set_opt_bg_pane_g3_copy1

0x82c5,	// (0x00034591) set_opt_bg_pane_g4_copy1

0x82cd,	// (0x00034599) set_opt_bg_pane_g5_copy1

0x82d5,	// (0x000345a1) set_opt_bg_pane_g6_copy1

0xb5c8,	// (0x00037894) set_opt_bg_pane_g7_copy1

0xb5d2,	// (0x0003789e) set_opt_bg_pane_g8_copy1

0xb5dc,	// (0x000378a8) set_opt_bg_pane_g9_copy1

0x78e8,	// (0x00033bb4) bg_set_opt_pane_cp_vc

0xb5e6,	// (0x000378b2) setting_slider_pane_vc_t1

0xb5f5,	// (0x000378c1) setting_slider_pane_vc_t2

0xb605,	// (0x000378d1) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0003bcbf) setting_slider_pane_vc_t

0xb615,	// (0x000378e1) slider_set_pane_vc

0x5e92,	// (0x0003215e) volume_set_pane_vc_g1

0x5e9b,	// (0x00032167) volume_set_pane_vc_g2

0x5ea4,	// (0x00032170) volume_set_pane_vc_g3

0x5ead,	// (0x00032179) volume_set_pane_vc_g4

0x5eb6,	// (0x00032182) volume_set_pane_vc_g5

0x5ebf,	// (0x0003218b) volume_set_pane_vc_g6

0x5ec8,	// (0x00032194) volume_set_pane_vc_g7

0x5ed1,	// (0x0003219d) volume_set_pane_vc_g8

0x5eda,	// (0x000321a6) volume_set_pane_vc_g9

0x5ee3,	// (0x000321af) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0003bb5d) volume_set_pane_vc_g

0xb61d,	// (0x000378e9) volume_set_pane_vc

0xb625,	// (0x000378f1) button_value_adjust_pane_cp1_vc

0xb62f,	// (0x000378fb) list_highlight_pane_cp2_vc

0xb638,	// (0x00037904) list_set_pane_vc_ParamLimits

0xb638,	// (0x00037904) list_set_pane_vc

0xb6a2,	// (0x0003796e) main_pane_set_vc_t1_ParamLimits

0xb6a2,	// (0x0003796e) main_pane_set_vc_t1

0xb6b7,	// (0x00037983) main_pane_set_vc_t2_ParamLimits

0xb6b7,	// (0x00037983) main_pane_set_vc_t2

0xb6c9,	// (0x00037995) main_pane_set_vc_t3_ParamLimits

0xb6c9,	// (0x00037995) main_pane_set_vc_t3

0xb6dd,	// (0x000379a9) main_pane_set_vc_t4_ParamLimits

0xb6dd,	// (0x000379a9) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0003bcc6) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0003bcc6) main_pane_set_vc_t

0xb6f1,	// (0x000379bd) setting_code_pane_vc_ParamLimits

0xb6f1,	// (0x000379bd) setting_code_pane_vc

0xb702,	// (0x000379ce) setting_slider_graphic_pane_vc

0xb702,	// (0x000379ce) setting_slider_pane_vc

0xb702,	// (0x000379ce) setting_text_pane_vc

0xb702,	// (0x000379ce) setting_volume_pane_vc

0xb70c,	// (0x000379d8) scroll_pane_cp121_vc

0x822f,	// (0x000344fb) set_content_pane_vc

0xb714,	// (0x000379e0) button_value_adjust_pane_g1

0xb71d,	// (0x000379e9) button_value_adjust_pane_g2

0x0001,

0xfa5d,	// (0x0003bd29) button_value_adjust_pane_g

0xb726,	// (0x000379f2) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb726,	// (0x000379f2) form_field_slider_wide_pane_vc_t1

0xb73a,	// (0x00037a06) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb73a,	// (0x00037a06) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa62,	// (0x0003bd2e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa62,	// (0x0003bd2e) form_field_slider_wide_pane_vc_t

0x7c43,	// (0x00033f0f) input_focus_pane_cp10_vc_ParamLimits

0x7c43,	// (0x00033f0f) input_focus_pane_cp10_vc

0xb768,	// (0x00037a34) slider_cont_pane_cp1_vc_ParamLimits

0xb768,	// (0x00037a34) slider_cont_pane_cp1_vc

0xb77a,	// (0x00037a46) slider_form_pane_g1_cp2

0xb592,	// (0x0003785e) slider_form_pane_g2_cp2

0xb7a7,	// (0x00037a73) form_field_slider_pane_vc_t3

0xb7b5,	// (0x00037a81) form_field_slider_pane_vc_t4

0xb7c3,	// (0x00037a8f) slider_form_pane_vc_ParamLimits

0xb7c3,	// (0x00037a8f) slider_form_pane_vc

0xb7d0,	// (0x00037a9c) form_field_slider_pane_vc_t1_ParamLimits

0xb7d0,	// (0x00037a9c) form_field_slider_pane_vc_t1

0xb73a,	// (0x00037a06) form_field_slider_pane_vc_t2_ParamLimits

0xb73a,	// (0x00037a06) form_field_slider_pane_vc_t2

0x0001,

0xfa74,	// (0x0003bd40) form_field_slider_pane_vc_t_ParamLimits

0xfa74,	// (0x0003bd40) form_field_slider_pane_vc_t

0x7c43,	// (0x00033f0f) input_focus_pane_cp9_vc_ParamLimits

0x7c43,	// (0x00033f0f) input_focus_pane_cp9_vc

0xb7ec,	// (0x00037ab8) slider_cont_pane_vc_ParamLimits

0xb7ec,	// (0x00037ab8) slider_cont_pane_vc

0xb800,	// (0x00037acc) list_form_graphic_pane_cp_vc_ParamLimits

0xb800,	// (0x00037acc) list_form_graphic_pane_cp_vc

0x9ab5,	// (0x00035d81) form_field_popup_wide_pane_vc_g1

0xb815,	// (0x00037ae1) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb815,	// (0x00037ae1) form_field_popup_wide_pane_vc_t1

0x8255,	// (0x00034521) input_focus_pane_cp8_vc_ParamLimits

0x8255,	// (0x00034521) input_focus_pane_cp8_vc

0xb85a,	// (0x00037b26) list_form_wide_pane_vc_ParamLimits

0xb85a,	// (0x00037b26) list_form_wide_pane_vc

0xb866,	// (0x00037b32) list_form_graphic_pane_vc_g1

0xb86e,	// (0x00037b3a) list_form_graphic_pane_vc_t1_ParamLimits

0xb86e,	// (0x00037b3a) list_form_graphic_pane_vc_t1

0x79c8,	// (0x00033c94) list_highlight_pane_cp5_vc_ParamLimits

0x79c8,	// (0x00033c94) list_highlight_pane_cp5_vc

0xb88a,	// (0x00037b56) list_form_graphic_pane_vc_ParamLimits

0xb88a,	// (0x00037b56) list_form_graphic_pane_vc

0x9ab5,	// (0x00035d81) form_field_popup_pane_vc_g1

0xb8a0,	// (0x00037b6c) form_field_popup_pane_vc_t1_ParamLimits

0xb8a0,	// (0x00037b6c) form_field_popup_pane_vc_t1

0x8255,	// (0x00034521) input_focus_pane_cp7_vc_ParamLimits

0x8255,	// (0x00034521) input_focus_pane_cp7_vc

0xb8b7,	// (0x00037b83) list_form_pane_vc_ParamLimits

0xb8b7,	// (0x00037b83) list_form_pane_vc

0xb8c3,	// (0x00037b8f) data_form_pane_vc_t1_ParamLimits

0xb8c3,	// (0x00037b8f) data_form_pane_vc_t1

0x82ad,	// (0x00034579) input_focus_pane_vc_g1

0x82b5,	// (0x00034581) input_focus_pane_vc_g2

0x82bd,	// (0x00034589) input_focus_pane_vc_g3

0x82c5,	// (0x00034591) input_focus_pane_vc_g4

0x82cd,	// (0x00034599) input_focus_pane_vc_g5

0x82d5,	// (0x000345a1) input_focus_pane_vc_g6

0x82dd,	// (0x000345a9) input_focus_pane_vc_g7

0x82e5,	// (0x000345b1) input_focus_pane_vc_g8

0x82ed,	// (0x000345b9) input_focus_pane_vc_g9

0x2963,	// (0x0002ec2f) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0003b933) input_focus_pane_vc_g

0x9aa9,	// (0x00035d75) data_form_pane_vc_ParamLimits

0x9aa9,	// (0x00035d75) data_form_pane_vc

0x9ab5,	// (0x00035d81) form_field_data_pane_vc_g1

0xb8de,	// (0x00037baa) form_field_data_pane_vc_t1_ParamLimits

0xb8de,	// (0x00037baa) form_field_data_pane_vc_t1

0x8255,	// (0x00034521) input_focus_pane_vc_ParamLimits

0x8255,	// (0x00034521) input_focus_pane_vc

0xb8f8,	// (0x00037bc4) button_value_adjust_pane_cp3_vc

0xb900,	// (0x00037bcc) button_value_adjust_pane_cp5_vc

0xb908,	// (0x00037bd4) form_field_data_pane_vc_ParamLimits

0xb908,	// (0x00037bd4) form_field_data_pane_vc

0xb91f,	// (0x00037beb) form_field_data_pane_vc_cp2

0xb927,	// (0x00037bf3) form_field_data_wide_pane_vc_ParamLimits

0xb927,	// (0x00037bf3) form_field_data_wide_pane_vc

0xb93d,	// (0x00037c09) form_field_data_wide_pane_vc_cp2

0xb945,	// (0x00037c11) form_field_popup_pane_vc_ParamLimits

0xb945,	// (0x00037c11) form_field_popup_pane_vc

0xb95c,	// (0x00037c28) form_field_popup_wide_pane_vc_ParamLimits

0xb95c,	// (0x00037c28) form_field_popup_wide_pane_vc

0xb972,	// (0x00037c3e) form_field_slider_pane_vc_ParamLimits

0xb972,	// (0x00037c3e) form_field_slider_pane_vc

0xb985,	// (0x00037c51) form_field_slider_wide_pane_vc_ParamLimits

0xb985,	// (0x00037c51) form_field_slider_wide_pane_vc

0xb998,	// (0x00037c64) grid_touch_1_pane_ParamLimits

0xb998,	// (0x00037c64) grid_touch_1_pane

0xb9a4,	// (0x00037c70) grid_touch_2_pane_ParamLimits

0xb9a4,	// (0x00037c70) grid_touch_2_pane

0x9448,	// (0x00035714) touch_pane_g1_ParamLimits

0x9448,	// (0x00035714) touch_pane_g1

0xb9bc,	// (0x00037c88) cell_app_pane_cp_wide_ParamLimits

0xb9bc,	// (0x00037c88) cell_app_pane_cp_wide

0xb9cd,	// (0x00037c99) grid_popup_fast_wide_pane_ParamLimits

0xb9cd,	// (0x00037c99) grid_popup_fast_wide_pane

0xb9e1,	// (0x00037cad) scroll_pane_cp19_ParamLimits

0xb9e1,	// (0x00037cad) scroll_pane_cp19

0x78e8,	// (0x00033bb4) bg_popup_window_pane_cp20

0xb9f5,	// (0x00037cc1) listscroll_popup_fast_wide_pane

0xb9fd,	// (0x00037cc9) grid_indicator_nsta_pane

0xba0f,	// (0x00037cdb) clock_nsta_pane_g1

0xba18,	// (0x00037ce4) clock_nsta_pane_t1

0xba34,	// (0x00037d00) cell_indicator_nsta_pane_ParamLimits

0xba34,	// (0x00037d00) cell_indicator_nsta_pane

0xba69,	// (0x00037d35) cell_indicator_nsta_pane_g1

0xba77,	// (0x00037d43) cell_indicator_nsta_pane_g2

0x0001,

0xfa85,	// (0x0003bd51) cell_indicator_nsta_pane_g

0xba89,	// (0x00037d55) clock_nsta_pane_cp

0xba92,	// (0x00037d5e) indicator_nsta_pane_cp

0xba9c,	// (0x00037d68) nsta_clock_indic_pane_g1

0x7a91,	// (0x00033d5d) grid_indicator_pane

0x8a64,	// (0x00034d30) scroll_pane_cp29

0x5324,	// (0x000315f0) indicator_nsta_pane_cp2_ParamLimits

0x5324,	// (0x000315f0) indicator_nsta_pane_cp2

0x79c8,	// (0x00033c94) main_apps_wheel_pane

0x9cc4,	// (0x00035f90) form_midp_field_text_pane_ParamLimits

0x9e0f,	// (0x000360db) scroll_bar_cp050_ParamLimits

0xbaf5,	// (0x00037dc1) cell_indicator_pane_ParamLimits

0xbaf5,	// (0x00037dc1) cell_indicator_pane

0xbb0c,	// (0x00037dd8) cell_indicator_pane_g1

0xbb16,	// (0x00037de2) grid_wheel_folder_pane_ParamLimits

0xbb16,	// (0x00037de2) grid_wheel_folder_pane

0xbb2c,	// (0x00037df8) list_wheel_apps_pane_ParamLimits

0xbb2c,	// (0x00037df8) list_wheel_apps_pane

0xbb3d,	// (0x00037e09) main_apps_wheel_pane_g1_ParamLimits

0xbb3d,	// (0x00037e09) main_apps_wheel_pane_g1

0xbb51,	// (0x00037e1d) main_apps_wheel_pane_g2_ParamLimits

0xbb51,	// (0x00037e1d) main_apps_wheel_pane_g2

0x0001,

0xfaa1,	// (0x0003bd6d) main_apps_wheel_pane_g_ParamLimits

0xfaa1,	// (0x0003bd6d) main_apps_wheel_pane_g

0xbb69,	// (0x00037e35) main_apps_wheel_pane_t1_ParamLimits

0xbb69,	// (0x00037e35) main_apps_wheel_pane_t1

0xbb8c,	// (0x00037e58) list_wheel_apps_pane_g1

0xbb94,	// (0x00037e60) list_wheel_apps_pane_g2

0xbb9c,	// (0x00037e68) list_wheel_apps_pane_g3

0xbba4,	// (0x00037e70) list_wheel_apps_pane_g4

0xbbae,	// (0x00037e7a) list_wheel_apps_pane_g5

0x0004,

0xfaa6,	// (0x0003bd72) list_wheel_apps_pane_g

0x8ff8,	// (0x000352c4) navi_icon_text_pane

0x94e1,	// (0x000357ad) aid_fill_nsta

0xbbd1,	// (0x00037e9d) navi_icon_text_pane_g1

0xbbdd,	// (0x00037ea9) navi_icon_text_pane_t1

0x8e96,	// (0x00035162) list_set_graphic_pane_t1_ParamLimits

0x8e96,	// (0x00035162) list_set_graphic_pane_t1

0xa57a,	// (0x00036846) popup_midp_note_alarm_window_t6_ParamLimits

0xa57a,	// (0x00036846) popup_midp_note_alarm_window_t6

0xa58c,	// (0x00036858) popup_midp_note_alarm_window_t7_ParamLimits

0xa58c,	// (0x00036858) popup_midp_note_alarm_window_t7

0xa59e,	// (0x0003686a) popup_midp_note_alarm_window_t8_ParamLimits

0xa59e,	// (0x0003686a) popup_midp_note_alarm_window_t8

0xa5b0,	// (0x0003687c) popup_midp_note_alarm_window_t9_ParamLimits

0xa5b0,	// (0x0003687c) popup_midp_note_alarm_window_t9

0xa5c2,	// (0x0003688e) popup_midp_note_alarm_window_t10_ParamLimits

0xa5c2,	// (0x0003688e) popup_midp_note_alarm_window_t10

0xa5d4,	// (0x000368a0) popup_midp_note_alarm_window_t11_ParamLimits

0xa5d4,	// (0x000368a0) popup_midp_note_alarm_window_t11

0xa5e6,	// (0x000368b2) scroll_pane_cp17_ParamLimits

0xa5e6,	// (0x000368b2) scroll_pane_cp17

0x5e92,	// (0x0003215e) volume_small_pane_cp_g1

0x65f5,	// (0x000328c1) volume_small_pane_cp_g2

0x65fe,	// (0x000328ca) volume_small_pane_cp_g3

0x6607,	// (0x000328d3) volume_small_pane_cp_g4

0x6610,	// (0x000328dc) volume_small_pane_cp_g5

0x6619,	// (0x000328e5) volume_small_pane_cp_g6

0x6622,	// (0x000328ee) volume_small_pane_cp_g7

0x662b,	// (0x000328f7) volume_small_pane_cp_g8

0x6634,	// (0x00032900) volume_small_pane_cp_g9

0x663d,	// (0x00032909) volume_small_pane_cp_g10

0x925e,	// (0x0003552a) midp_ticker_pane_g1_ParamLimits

0x926a,	// (0x00035536) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0003b9ff) midp_ticker_pane_g_ParamLimits

0x9276,	// (0x00035542) midp_ticker_pane_t1_ParamLimits

0x94f7,	// (0x000357c3) aid_fill_nsta_2

0x9dfb,	// (0x000360c7) list_form2_midp_pane

0xaf3f,	// (0x0003720b) midp_editing_number_pane_ParamLimits

0xaf4e,	// (0x0003721a) midp_ticker_pane_ParamLimits

0xbbef,	// (0x00037ebb) form2_midp_field_pane

0xbc13,	// (0x00037edf) scroll_pane_cp51

0xbc33,	// (0x00037eff) form2_midp_button_pane_ParamLimits

0xbc33,	// (0x00037eff) form2_midp_button_pane

0xbc45,	// (0x00037f11) form2_midp_content_pane_ParamLimits

0xbc45,	// (0x00037f11) form2_midp_content_pane

0xbc5f,	// (0x00037f2b) form2_midp_field_choice_group_pane

0xbc67,	// (0x00037f33) form2_midp_field_pane_g1

0xbc6f,	// (0x00037f3b) form2_midp_field_pane_g2

0xbc77,	// (0x00037f43) form2_midp_field_pane_g3

0xbc7f,	// (0x00037f4b) form2_midp_field_pane_g4

0x0003,

0xfacb,	// (0x0003bd97) form2_midp_field_pane_g

0xbc87,	// (0x00037f53) form2_midp_gauge_slider_pane

0xbc8f,	// (0x00037f5b) form2_midp_gauge_wait_pane

0xbc97,	// (0x00037f63) form2_midp_image_pane_ParamLimits

0xbc97,	// (0x00037f63) form2_midp_image_pane

0xbcb2,	// (0x00037f7e) form2_midp_label_pane_ParamLimits

0xbcb2,	// (0x00037f7e) form2_midp_label_pane

0xbccb,	// (0x00037f97) form2_midp_label_pane_cp_ParamLimits

0xbccb,	// (0x00037f97) form2_midp_label_pane_cp

0xbcec,	// (0x00037fb8) form2_midp_string_pane_ParamLimits

0xbcec,	// (0x00037fb8) form2_midp_string_pane

0x6646,	// (0x00032912) form2_midp_text_pane_ParamLimits

0x6646,	// (0x00032912) form2_midp_text_pane

0xbcfe,	// (0x00037fca) form2_midp_time_pane

0xbd0e,	// (0x00037fda) input_focus_pane_cp51_ParamLimits

0xbd0e,	// (0x00037fda) input_focus_pane_cp51

0xbd26,	// (0x00037ff2) form2_midp_label_pane_t1_ParamLimits

0xbd26,	// (0x00037ff2) form2_midp_label_pane_t1

0x6661,	// (0x0003292d) form2_mdip_text_pane_t1_ParamLimits

0x6661,	// (0x0003292d) form2_mdip_text_pane_t1

0x667f,	// (0x0003294b) form2_midp_time_pane_t1

0xbd6f,	// (0x0003803b) form2_midp_gauge_slider_pane_t1

0xbd81,	// (0x0003804d) form2_midp_gauge_slider_pane_t2

0xbd93,	// (0x0003805f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad4,	// (0x0003bda0) form2_midp_gauge_slider_pane_t

0xbda5,	// (0x00038071) form2_midp_slider_pane

0xbdb1,	// (0x0003807d) form2_midp_gauge_wait_pane_t1

0xbdbf,	// (0x0003808b) form2_midp_wait_pane_ParamLimits

0xbdbf,	// (0x0003808b) form2_midp_wait_pane

0xbdea,	// (0x000380b6) list_single_2graphic_pane_cp4_ParamLimits

0xbdea,	// (0x000380b6) list_single_2graphic_pane_cp4

0x9b1d,	// (0x00035de9) list_single_midp_graphic_pane_cp_ParamLimits

0x9b1d,	// (0x00035de9) list_single_midp_graphic_pane_cp

0x78e8,	// (0x00033bb4) list_highlight_pane_cp20

0xbe0e,	// (0x000380da) list_single_2graphic_pane_g1_cp4

0xbe16,	// (0x000380e2) list_single_2graphic_pane_g2_cp4

0xbe1e,	// (0x000380ea) list_single_2graphic_pane_t1_cp4

0x79c8,	// (0x00033c94) list_highlight_pane_cp21

0xbe2d,	// (0x000380f9) list_single_midp_graphic_pane_g4_cp

0xbe3c,	// (0x00038108) list_single_midp_graphic_pane_t1_cp

0xbe51,	// (0x0003811d) form2_mdip_string_pane_t1_ParamLimits

0xbe51,	// (0x0003811d) form2_mdip_string_pane_t1

0x78e8,	// (0x00033bb4) bg_wml_button_pane_cp2

0x2963,	// (0x0002ec2f) form2_midp_image_pane_g1

0x3989,	// (0x0002fc55) list_double_large_graphic_pane_g5_ParamLimits

0x3989,	// (0x0002fc55) list_double_large_graphic_pane_g5

0x9189,	// (0x00035455) midp_form_pane_ParamLimits

0x79c8,	// (0x00033c94) main_apps_wheel_pane_ParamLimits

0x5a0d,	// (0x00031cd9) popup_preview_window_ParamLimits

0x5a0d,	// (0x00031cd9) popup_preview_window

0x5bc8,	// (0x00031e94) popup_touch_info_window_ParamLimits

0x5bc8,	// (0x00031e94) popup_touch_info_window

0x5be6,	// (0x00031eb2) popup_touch_menu_window_ParamLimits

0x5be6,	// (0x00031eb2) popup_touch_menu_window

0x2959,	// (0x0002ec25) bg_popup_sub_pane_cp6

0xbf4a,	// (0x00038216) list_touch_menu_pane

0xbf52,	// (0x0003821e) list_single_touch_menu_pane_ParamLimits

0xbf52,	// (0x0003821e) list_single_touch_menu_pane

0xbf68,	// (0x00038234) list_single_touch_menu_pane_t1

0x79c8,	// (0x00033c94) bg_popup_sub_pane_cp7_ParamLimits

0x79c8,	// (0x00033c94) bg_popup_sub_pane_cp7

0xbf76,	// (0x00038242) heading_sub_pane

0xbf7e,	// (0x0003824a) list_touch_info_pane_ParamLimits

0xbf7e,	// (0x0003824a) list_touch_info_pane

0xbf8d,	// (0x00038259) list_single_touch_info_pane_ParamLimits

0xbf8d,	// (0x00038259) list_single_touch_info_pane

0xbf9f,	// (0x0003826b) list_single_touch_info_pane_t1

0xbfad,	// (0x00038279) list_single_touch_info_pane_t2

0x0001,

0xfae2,	// (0x0003bdae) list_single_touch_info_pane_t

0x9181,	// (0x0003544d) bg_popup_heading_pane_cp

0xbfbb,	// (0x00038287) heading_sub_pane_t1

0x9a43,	// (0x00035d0f) bg_popup_preview_window_pane_cp_ParamLimits

0x9a43,	// (0x00035d0f) bg_popup_preview_window_pane_cp

0xbf76,	// (0x00038242) heading_preview_pane

0xbf7e,	// (0x0003824a) list_preview_pane_ParamLimits

0xbf7e,	// (0x0003824a) list_preview_pane

0xbfc9,	// (0x00038295) popup_preview_window_g1

0xbf8d,	// (0x00038259) list_single_preview_pane_ParamLimits

0xbf8d,	// (0x00038259) list_single_preview_pane

0xbfd1,	// (0x0003829d) list_single_preview_pane_g1

0xbfd9,	// (0x000382a5) list_single_preview_pane_t1

0xbf9f,	// (0x0003826b) list_single_preview_pane_t2

0x0001,

0xfae7,	// (0x0003bdb3) list_single_preview_pane_t

0xbfe7,	// (0x000382b3) bg_popup_heading_pane_cp2_ParamLimits

0xbfe7,	// (0x000382b3) bg_popup_heading_pane_cp2

0xbffd,	// (0x000382c9) heading_preview_pane_g1

0xc005,	// (0x000382d1) heading_preview_pane_t1_ParamLimits

0xc005,	// (0x000382d1) heading_preview_pane_t1

0x7ab4,	// (0x00033d80) soft_indicator_pane_t1_ParamLimits

0x81c8,	// (0x00034494) scroll_pane_ParamLimits

0x895d,	// (0x00034c29) scroll_sc2_left_pane

0x8966,	// (0x00034c32) scroll_sc2_right_pane

0x8985,	// (0x00034c51) scroll_bg_pane_g1_ParamLimits

0x899a,	// (0x00034c66) scroll_bg_pane_g2_ParamLimits

0x89b2,	// (0x00034c7e) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0003b98a) scroll_bg_pane_g_ParamLimits

0x8985,	// (0x00034c51) scroll_handle_pane_g1_ParamLimits

0x89d4,	// (0x00034ca0) scroll_handle_pane_g2_ParamLimits

0x89b2,	// (0x00034c7e) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0003b991) scroll_handle_pane_g_ParamLimits

0x568c,	// (0x00031958) popup_choice_list_window_ParamLimits

0x568c,	// (0x00031958) popup_choice_list_window

0x9919,	// (0x00035be5) choice_list_pane

0x999b,	// (0x00035c67) cell_toolbar_pane_t1

0x99c3,	// (0x00035c8f) toolbar_button_pane_ParamLimits

0xaaa0,	// (0x00036d6c) ai_gene_pane_1_t2_ParamLimits

0xaaa0,	// (0x00036d6c) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0003bbb9) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0003bbb9) ai_gene_pane_1_t

0xc022,	// (0x000382ee) scroll_sc2_left_pane_g1

0xc022,	// (0x000382ee) scroll_sc2_right_pane_g1

0x94a5,	// (0x00035771) bg_popup_sub_pane_cp10

0xc02c,	// (0x000382f8) list_choice_list_pane

0xc045,	// (0x00038311) list_single_choice_list_pane_ParamLimits

0xc045,	// (0x00038311) list_single_choice_list_pane

0xc058,	// (0x00038324) list_single_choice_list_pane_g1

0x83f9,	// (0x000346c5) list_single_choice_list_pane_t1_ParamLimits

0x83f9,	// (0x000346c5) list_single_choice_list_pane_t1

0xc060,	// (0x0003832c) choice_list_pane_g1

0xc068,	// (0x00038334) choice_list_pane_t1

0x2959,	// (0x0002ec25) input_focus_pane_cp11

0x883a,	// (0x00034b06) title_pane_stacon_g2_ParamLimits

0x883a,	// (0x00034b06) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0003b970) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0003b970) title_pane_stacon_g

0x9181,	// (0x0003544d) cursor_press_pane

0x5738,	// (0x00031a04) popup_fep_hwr_window_ParamLimits

0x5738,	// (0x00031a04) popup_fep_hwr_window

0x57b2,	// (0x00031a7e) popup_fep_vkb_window_ParamLimits

0x57b2,	// (0x00031a7e) popup_fep_vkb_window

0xc076,	// (0x00038342) cursor_press_pane_g1

0x0002,

0xfb10,	// (0x0003bddc) fep_vkb_side_pane_g_ParamLimits

0x66cb,	// (0x00032997) fep_hwr_candidate_pane_ParamLimits

0x66cb,	// (0x00032997) fep_hwr_candidate_pane

0x66f5,	// (0x000329c1) fep_hwr_side_pane_ParamLimits

0x66f5,	// (0x000329c1) fep_hwr_side_pane

0x6715,	// (0x000329e1) fep_hwr_top_pane_ParamLimits

0x6715,	// (0x000329e1) fep_hwr_top_pane

0x672d,	// (0x000329f9) fep_hwr_write_pane_ParamLimits

0x672d,	// (0x000329f9) fep_hwr_write_pane

0xfb10,	// (0x0003bddc) fep_vkb_side_pane_g

0xc07e,	// (0x0003834a) fep_hwr_top_pane_g1

0xc090,	// (0x0003835c) fep_hwr_top_pane_g2

0x6767,	// (0x00032a33) fep_hwr_top_pane_g3

0x0002,

0xfaec,	// (0x0003bdb8) fep_hwr_top_pane_g

0x677c,	// (0x00032a48) fep_hwr_top_text_pane

0x8b54,	// (0x00034e20) fep_hwr_top_text_pane_g1

0xc0c6,	// (0x00038392) fep_hwr_top_text_pane_t1

0x6872,	// (0x00032b3e) fep_hwr_candidate_pane_g1

0xc319,	// (0x000385e5) fep_vkb_keypad_pane_g3_ParamLimits

0xc319,	// (0x000385e5) fep_vkb_keypad_pane_g3

0xc341,	// (0x0003860d) fep_vkb_keypad_pane_g4_ParamLimits

0xc341,	// (0x0003860d) fep_vkb_keypad_pane_g4

0xc3b0,	// (0x0003867c) fep_vkb_bottom_pane_g2_ParamLimits

0xc3b0,	// (0x0003867c) fep_vkb_bottom_pane_g2

0x0001,

0xfb17,	// (0x0003bde3) fep_vkb_bottom_pane_g_ParamLimits

0xfb17,	// (0x0003bde3) fep_vkb_bottom_pane_g

0xc022,	// (0x000382ee) cell_vkb_side_pane_g2

0x0001,

0xfb21,	// (0x0003bded) cell_vkb_side_pane_g

0xc43b,	// (0x00038707) cell_vkb_side_pane_t1

0xc449,	// (0x00038715) cell_vkb_side_pane_t1_copy1

0xc022,	// (0x000382ee) bg_fep_vkb_candidate_pane_g2

0xc575,	// (0x00038841) cell_vkb_candidate_pane_ParamLimits

0xc0d4,	// (0x000383a0) aid_size_cell_vkb_ParamLimits

0xc0d4,	// (0x000383a0) aid_size_cell_vkb

0xc575,	// (0x00038841) cell_vkb_candidate_pane

0x6899,	// (0x00032b65) bg_popup_fep_shadow_pane_g1

0xc162,	// (0x0003842e) fep_vkb_bottom_pane_ParamLimits

0xc162,	// (0x0003842e) fep_vkb_bottom_pane

0xc198,	// (0x00038464) fep_vkb_candidate_pane_ParamLimits

0xc198,	// (0x00038464) fep_vkb_candidate_pane

0xc1b4,	// (0x00038480) fep_vkb_keypad_pane_ParamLimits

0xc1b4,	// (0x00038480) fep_vkb_keypad_pane

0xc1fa,	// (0x000384c6) fep_vkb_side_pane_ParamLimits

0xc1fa,	// (0x000384c6) fep_vkb_side_pane

0xc236,	// (0x00038502) fep_vkb_top_pane_ParamLimits

0xc236,	// (0x00038502) fep_vkb_top_pane

0xc272,	// (0x0003853e) fep_vkb_top_pane_g1_ParamLimits

0xc272,	// (0x0003853e) fep_vkb_top_pane_g1

0xc281,	// (0x0003854d) fep_vkb_top_pane_g2_ParamLimits

0xc281,	// (0x0003854d) fep_vkb_top_pane_g2

0xc290,	// (0x0003855c) fep_vkb_top_pane_g3_ParamLimits

0xc290,	// (0x0003855c) fep_vkb_top_pane_g3

0x0003,

0xfb07,	// (0x0003bdd3) fep_vkb_top_pane_g_ParamLimits

0xfb07,	// (0x0003bdd3) fep_vkb_top_pane_g

0xc2ae,	// (0x0003857a) fep_vkb_top_text_pane_ParamLimits

0xc2ae,	// (0x0003857a) fep_vkb_top_text_pane

0xc2bf,	// (0x0003858b) fep_vkb_side_pane_g1_ParamLimits

0xc2bf,	// (0x0003858b) fep_vkb_side_pane_g1

0xc308,	// (0x000385d4) grid_vkb_side_pane_ParamLimits

0xc308,	// (0x000385d4) grid_vkb_side_pane

0x68a1,	// (0x00032b6d) bg_popup_fep_shadow_pane_g2

0x68aa,	// (0x00032b76) bg_popup_fep_shadow_pane_g3

0x68b2,	// (0x00032b7e) bg_popup_fep_shadow_pane_g4

0x68bb,	// (0x00032b87) bg_popup_fep_shadow_pane_g5

0x68c5,	// (0x00032b91) bg_popup_fep_shadow_pane_g6

0x68cd,	// (0x00032b99) bg_popup_fep_shadow_pane_g7

0x82c5,	// (0x00034591) bg_popup_fep_shadow_pane_g8

0xc35f,	// (0x0003862b) grid_vkb_keypad_number_pane_ParamLimits

0xc35f,	// (0x0003862b) grid_vkb_keypad_number_pane

0xc36f,	// (0x0003863b) grid_vkb_keypad_pane_ParamLimits

0xc36f,	// (0x0003863b) grid_vkb_keypad_pane

0xc395,	// (0x00038661) fep_vkb_bottom_pane_g1_ParamLimits

0xc395,	// (0x00038661) fep_vkb_bottom_pane_g1

0xc3be,	// (0x0003868a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3be,	// (0x0003868a) grid_vkb_keypad_bottom_left_pane

0xc3d3,	// (0x0003869f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3d3,	// (0x0003869f) grid_vkb_keypad_bottom_right_pane

0xc3e8,	// (0x000386b4) fep_vkb_top_text_pane_g1

0xc403,	// (0x000386cf) fep_vkb_top_text_pane_t1

0xc418,	// (0x000386e4) cell_vkb_side_pane_ParamLimits

0xc418,	// (0x000386e4) cell_vkb_side_pane

0xc022,	// (0x000382ee) cell_vkb_side_pane_g1

0xc457,	// (0x00038723) cell_vkb_keypad_pane_ParamLimits

0xc457,	// (0x00038723) cell_vkb_keypad_pane

0xc4cc,	// (0x00038798) cell_vkb_keypad_pane_g1

0x0008,

0xfb34,	// (0x0003be00) bg_popup_fep_shadow_pane_g

0x68df,	// (0x00032bab) cell_hwr_side_pane_g1

0x68df,	// (0x00032bab) cell_hwr_side_pane_g2

0xc4d6,	// (0x000387a2) cell_vkb_keypad_pane_t1

0xc4e4,	// (0x000387b0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4e4,	// (0x000387b0) cell_vkb_keypad_bottom_left_pane

0xc501,	// (0x000387cd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc501,	// (0x000387cd) cell_vkb_keypad_bottom_right_pane

0xc022,	// (0x000382ee) cell_vkb_keypad_bottom_left_pane_g1

0xc022,	// (0x000382ee) cell_vkb_keypad_bottom_right_pane_g1

0xc53a,	// (0x00038806) cell_vkb_keypad_number_pane_ParamLimits

0xc53a,	// (0x00038806) cell_vkb_keypad_number_pane

0xc559,	// (0x00038825) cell_vkb_keypad_number_pane_g1

0xc563,	// (0x0003882f) cell_vkb_keypad_number_pane_g2

0xc56c,	// (0x00038838) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb26,	// (0x0003bdf2) cell_vkb_keypad_number_pane_g

0xc4d6,	// (0x000387a2) cell_vkb_keypad_number_pane_t1

0xc590,	// (0x0003885c) fep_vkb_candidate_pane_g1

0x0001,

0xfb47,	// (0x0003be13) cell_hwr_side_pane_g

0xc5a9,	// (0x00038875) cell_hwr_side_pane_t1

0x68e9,	// (0x00032bb5) cell_hwr_side_pane_t1_copy1

0x68f7,	// (0x00032bc3) cell_hwr_candidate_pane_g1

0x6926,	// (0x00032bf2) cell_hwr_candidate_pane_t1

0xc022,	// (0x000382ee) cell_vkb_candidate_pane_g2

0xc62f,	// (0x000388fb) cell_vkb_candidate_pane_t1

0x6692,	// (0x0003295e) bg_popup_fep_shadow_pane_ParamLimits

0x6692,	// (0x0003295e) bg_popup_fep_shadow_pane

0x6747,	// (0x00032a13) bg_fep_hwr_top_pane_g4

0xc0a2,	// (0x0003836e) bg_hwr_side_pane_g1_ParamLimits

0xc0a2,	// (0x0003836e) bg_hwr_side_pane_g1

0x67b8,	// (0x00032a84) cell_hwr_side_pane_ParamLimits

0x67b8,	// (0x00032a84) cell_hwr_side_pane

0x67f3,	// (0x00032abf) fep_hwr_write_pane_g1_ParamLimits

0x67f3,	// (0x00032abf) fep_hwr_write_pane_g1

0x6800,	// (0x00032acc) fep_hwr_write_pane_g2_ParamLimits

0x6800,	// (0x00032acc) fep_hwr_write_pane_g2

0x680d,	// (0x00032ad9) fep_hwr_write_pane_g3_ParamLimits

0x680d,	// (0x00032ad9) fep_hwr_write_pane_g3

0x681b,	// (0x00032ae7) fep_hwr_write_pane_g4_ParamLimits

0x681b,	// (0x00032ae7) fep_hwr_write_pane_g4

0x0005,

0xfaf3,	// (0x0003bdbf) fep_hwr_write_pane_g_ParamLimits

0xfaf3,	// (0x0003bdbf) fep_hwr_write_pane_g

0x6747,	// (0x00032a13) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6747,	// (0x00032a13) bg_fep_hwr_candidate_pane_g2

0x6830,	// (0x00032afc) cell_hwr_candidate_pane_ParamLimits

0x6830,	// (0x00032afc) cell_hwr_candidate_pane

0x6872,	// (0x00032b3e) fep_hwr_candidate_pane_g1_ParamLimits

0xc102,	// (0x000383ce) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc102,	// (0x000383ce) bg_popup_fep_shadow_pane_cp2

0xc2a0,	// (0x0003856c) fep_vkb_top_pane_g4_ParamLimits

0xc2a0,	// (0x0003856c) fep_vkb_top_pane_g4

0xc2e6,	// (0x000385b2) fep_vkb_side_pane_g2_ParamLimits

0xc2e6,	// (0x000385b2) fep_vkb_side_pane_g2

0x4cb5,	// (0x00030f81) list_setting_pane_t4_ParamLimits

0x4cb5,	// (0x00030f81) list_setting_pane_t4

0x4d4f,	// (0x0003101b) list_setting_number_pane_t5_ParamLimits

0x4d4f,	// (0x0003101b) list_setting_number_pane_t5

0x8b9b,	// (0x00034e67) list_double_heading_pane_cp2_ParamLimits

0x8b9b,	// (0x00034e67) list_double_heading_pane_cp2

0x8263,	// (0x0003452f) list_double_heading_pane_g1_cp2_ParamLimits

0x8263,	// (0x0003452f) list_double_heading_pane_g1_cp2

0x826f,	// (0x0003453b) list_double_heading_pane_g2_cp2_ParamLimits

0x826f,	// (0x0003453b) list_double_heading_pane_g2_cp2

0xc63d,	// (0x00038909) list_double_heading_pane_t1_cp2_ParamLimits

0xc63d,	// (0x00038909) list_double_heading_pane_t1_cp2

0xc653,	// (0x0003891f) list_double_heading_pane_t2_cp2_ParamLimits

0xc653,	// (0x0003891f) list_double_heading_pane_t2_cp2

0x2951,	// (0x0002ec1d) aid_value_unit2

0x4785,	// (0x00030a51) popup_preview_fixed_window

0x7c51,	// (0x00033f1d) bg_popup_preview_window_pane_cp02

0xc665,	// (0x00038931) list_preview_fixed_pane

0xc6ab,	// (0x00038977) list_empty_pane_fp_ParamLimits

0xc6ab,	// (0x00038977) list_empty_pane_fp

0xc6ab,	// (0x00038977) list_single_cale_day_pane_fp_ParamLimits

0xc6ab,	// (0x00038977) list_single_cale_day_pane_fp

0xc6ab,	// (0x00038977) list_single_graphic_heading_pane_fp_ParamLimits

0xc6ab,	// (0x00038977) list_single_graphic_heading_pane_fp

0xc6ab,	// (0x00038977) list_single_graphic_pane_fp_ParamLimits

0xc6ab,	// (0x00038977) list_single_graphic_pane_fp

0xc6ab,	// (0x00038977) list_single_heading_pane_fp_ParamLimits

0xc6ab,	// (0x00038977) list_single_heading_pane_fp

0xc6ab,	// (0x00038977) list_single_pane_fp_ParamLimits

0xc6ab,	// (0x00038977) list_single_pane_fp

0xc6c0,	// (0x0003898c) list_single_pane_fp_g1_ParamLimits

0xc6c0,	// (0x0003898c) list_single_pane_fp_g1

0x6944,	// (0x00032c10) list_single_pane_fp_g2_ParamLimits

0x6944,	// (0x00032c10) list_single_pane_fp_g2

0x6950,	// (0x00032c1c) list_single_pane_fp_g3_ParamLimits

0x6950,	// (0x00032c1c) list_single_pane_fp_g3

0xc6cc,	// (0x00038998) list_single_pane_fp_g4_ParamLimits

0xc6cc,	// (0x00038998) list_single_pane_fp_g4

0x0003,

0xfb5a,	// (0x0003be26) list_single_pane_fp_g_ParamLimits

0xfb5a,	// (0x0003be26) list_single_pane_fp_g

0x6964,	// (0x00032c30) list_single_pane_fp_t1_ParamLimits

0x6964,	// (0x00032c30) list_single_pane_fp_t1

0x697b,	// (0x00032c47) list_single_graphic_pane_fp_g1_ParamLimits

0x697b,	// (0x00032c47) list_single_graphic_pane_fp_g1

0xc6c0,	// (0x0003898c) list_single_graphic_pane_fp_g2_ParamLimits

0xc6c0,	// (0x0003898c) list_single_graphic_pane_fp_g2

0x6944,	// (0x00032c10) list_single_graphic_pane_fp_g3_ParamLimits

0x6944,	// (0x00032c10) list_single_graphic_pane_fp_g3

0x6950,	// (0x00032c1c) list_single_graphic_pane_fp_g4_ParamLimits

0x6950,	// (0x00032c1c) list_single_graphic_pane_fp_g4

0xc6cc,	// (0x00038998) list_single_graphic_pane_fp_g5_ParamLimits

0xc6cc,	// (0x00038998) list_single_graphic_pane_fp_g5

0x0004,

0xfb63,	// (0x0003be2f) list_single_graphic_pane_fp_g_ParamLimits

0xfb63,	// (0x0003be2f) list_single_graphic_pane_fp_g

0x6987,	// (0x00032c53) list_single_graphic_pane_fp_t1_ParamLimits

0x6987,	// (0x00032c53) list_single_graphic_pane_fp_t1

0x697b,	// (0x00032c47) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x697b,	// (0x00032c47) list_single_graphic_heading_pane_fp_g1

0xc6c0,	// (0x0003898c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6c0,	// (0x0003898c) list_single_graphic_heading_pane_fp_g2

0x6944,	// (0x00032c10) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6944,	// (0x00032c10) list_single_graphic_heading_pane_fp_g3

0x6950,	// (0x00032c1c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6950,	// (0x00032c1c) list_single_graphic_heading_pane_fp_g4

0xc6cc,	// (0x00038998) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6cc,	// (0x00038998) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb63,	// (0x0003be2f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb63,	// (0x0003be2f) list_single_graphic_heading_pane_fp_g

0x699d,	// (0x00032c69) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x699d,	// (0x00032c69) list_single_graphic_heading_pane_fp_t1

0x69b3,	// (0x00032c7f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x69b3,	// (0x00032c7f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6e,	// (0x0003be3a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6e,	// (0x0003be3a) list_single_graphic_heading_pane_fp_t

0x69c5,	// (0x00032c91) list_single_cale_day_pane_fp_g1_ParamLimits

0x69c5,	// (0x00032c91) list_single_cale_day_pane_fp_g1

0xc6d8,	// (0x000389a4) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6d8,	// (0x000389a4) list_single_cale_day_pane_fp_g2

0x69fd,	// (0x00032cc9) list_single_cale_day_pane_fp_g3_ParamLimits

0x69fd,	// (0x00032cc9) list_single_cale_day_pane_fp_g3

0x6a25,	// (0x00032cf1) list_single_cale_day_pane_fp_g4_ParamLimits

0x6a25,	// (0x00032cf1) list_single_cale_day_pane_fp_g4

0x6a49,	// (0x00032d15) list_single_cale_day_pane_fp_g5_ParamLimits

0x6a49,	// (0x00032d15) list_single_cale_day_pane_fp_g5

0x0004,

0xfb73,	// (0x0003be3f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb73,	// (0x0003be3f) list_single_cale_day_pane_fp_g

0x85d0,	// (0x0003489c) list_single_cale_day_pane_fp_t1_ParamLimits

0x85d0,	// (0x0003489c) list_single_cale_day_pane_fp_t1

0x85f6,	// (0x000348c2) list_single_cale_day_pane_fp_t2_ParamLimits

0x85f6,	// (0x000348c2) list_single_cale_day_pane_fp_t2

0x860f,	// (0x000348db) list_single_cale_day_pane_fp_t3_ParamLimits

0x860f,	// (0x000348db) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7e,	// (0x0003be4a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7e,	// (0x0003be4a) list_single_cale_day_pane_fp_t

0xc6c0,	// (0x0003898c) list_empty_pane_fp_g1_ParamLimits

0xc6c0,	// (0x0003898c) list_empty_pane_fp_g1

0x8628,	// (0x000348f4) list_empty_pane_fp_t1

0x8636,	// (0x00034902) list_empty_pane_fp_t2

0x0001,

0xfb85,	// (0x0003be51) list_empty_pane_fp_t

0xc6c0,	// (0x0003898c) list_single_heading_pane_fp_g1_ParamLimits

0xc6c0,	// (0x0003898c) list_single_heading_pane_fp_g1

0x6944,	// (0x00032c10) list_single_heading_pane_fp_g2_ParamLimits

0x6944,	// (0x00032c10) list_single_heading_pane_fp_g2

0x6950,	// (0x00032c1c) list_single_heading_pane_fp_g3_ParamLimits

0x6950,	// (0x00032c1c) list_single_heading_pane_fp_g3

0x0002,

0xfb8a,	// (0x0003be56) list_single_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003be56) list_single_heading_pane_fp_g

0x8644,	// (0x00034910) list_single_heading_pane_fp_t1_ParamLimits

0x8644,	// (0x00034910) list_single_heading_pane_fp_t1

0x8656,	// (0x00034922) list_single_heading_pane_fp_t2_ParamLimits

0x8656,	// (0x00034922) list_single_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x0003be5d) list_single_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x0003be5d) list_single_heading_pane_fp_t

0x8467,	// (0x00034733) aid_size_cell_fast

0x7bc1,	// (0x00033e8d) soft_indicator_pane_cp1_t1

0x84a4,	// (0x00034770) cell_app_pane_cp2_ParamLimits

0x84a4,	// (0x00034770) cell_app_pane_cp2

0x66b4,	// (0x00032980) fep_hwr_candidate_drop_down_list_pane

0x688c,	// (0x00032b58) fep_hwr_candidate_pane_g3_ParamLimits

0x688c,	// (0x00032b58) fep_hwr_candidate_pane_g3

0x34dd,	// (0x0002f7a9) fep_hwr_candidate_pane_g4_ParamLimits

0x34dd,	// (0x0002f7a9) fep_hwr_candidate_pane_g4

0x0002,

0xfb00,	// (0x0003bdcc) fep_hwr_candidate_pane_g_ParamLimits

0xfb00,	// (0x0003bdcc) fep_hwr_candidate_pane_g

0xc187,	// (0x00038453) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc187,	// (0x00038453) fep_vkb_candidate_drop_down_list_pane

0xc598,	// (0x00038864) fep_vkb_candidate_pane_g3

0xc5a0,	// (0x0003886c) fep_vkb_candidate_pane_g4

0x0002,

0xfb2d,	// (0x0003bdf9) fep_vkb_candidate_pane_g

0x68f7,	// (0x00032bc3) cell_hwr_candidate_pane_g1_ParamLimits

0x6905,	// (0x00032bd1) cell_hwr_candidate_pane_g3_ParamLimits

0x6905,	// (0x00032bd1) cell_hwr_candidate_pane_g3

0xd583,	// (0x0003984f) cell_hwr_candidate_pane_g4_ParamLimits

0xd583,	// (0x0003984f) cell_hwr_candidate_pane_g4

0x0002,

0xfb4c,	// (0x0003be18) cell_hwr_candidate_pane_g_ParamLimits

0xfb4c,	// (0x0003be18) cell_hwr_candidate_pane_g

0xc5b7,	// (0x00038883) cell_vkb_candidate_pane_g3_ParamLimits

0xc5b7,	// (0x00038883) cell_vkb_candidate_pane_g3

0xc614,	// (0x000388e0) cell_vkb_candidate_pane_g4_ParamLimits

0xc614,	// (0x000388e0) cell_vkb_candidate_pane_g4

0xc6e4,	// (0x000389b0) cell_app_pane_cp2_g1_ParamLimits

0xc6e4,	// (0x000389b0) cell_app_pane_cp2_g1

0xc702,	// (0x000389ce) cell_app_pane_cp2_g2_ParamLimits

0xc702,	// (0x000389ce) cell_app_pane_cp2_g2

0x0001,

0xfb96,	// (0x0003be62) cell_app_pane_cp2_g_ParamLimits

0xfb96,	// (0x0003be62) cell_app_pane_cp2_g

0xc70e,	// (0x000389da) cell_app_pane_cp2_t1_ParamLimits

0xc70e,	// (0x000389da) cell_app_pane_cp2_t1

0x8255,	// (0x00034521) grid_highlight_pane_cp1_ParamLimits

0x8255,	// (0x00034521) grid_highlight_pane_cp1

0x6a6d,	// (0x00032d39) cell_hwr_candidate_pane_cp1_ParamLimits

0x6a6d,	// (0x00032d39) cell_hwr_candidate_pane_cp1

0x68f7,	// (0x00032bc3) fep_hwr_candidate_drop_down_list_pane_g1

0x6a8c,	// (0x00032d58) fep_hwr_candidate_drop_down_list_pane_g2

0x6a99,	// (0x00032d65) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9b,	// (0x0003be67) fep_hwr_candidate_drop_down_list_pane_g

0x6aa6,	// (0x00032d72) fep_hwr_candidate_drop_down_list_scroll_pane

0x6aaf,	// (0x00032d7b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6aaf,	// (0x00032d7b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6abc,	// (0x00032d88) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6abc,	// (0x00032d88) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6ac9,	// (0x00032d95) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6ac9,	// (0x00032d95) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6ad6,	// (0x00032da2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ad6,	// (0x00032da2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6af1,	// (0x00032dbd) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6af1,	// (0x00032dbd) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6b0c,	// (0x00032dd8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6b0c,	// (0x00032dd8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6b27,	// (0x00032df3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6b27,	// (0x00032df3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6b42,	// (0x00032e0e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6b42,	// (0x00032e0e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba2,	// (0x0003be6e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba2,	// (0x0003be6e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc720,	// (0x000389ec) cell_vkb_candidate_pane_cp1_ParamLimits

0xc720,	// (0x000389ec) cell_vkb_candidate_pane_cp1

0xc2a0,	// (0x0003856c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2a0,	// (0x0003856c) fep_vkb_candidate_drop_down_list_pane_g1

0xc740,	// (0x00038a0c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc740,	// (0x00038a0c) fep_vkb_candidate_drop_down_list_pane_g2

0xc74d,	// (0x00038a19) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc74d,	// (0x00038a19) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x0003be7f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb3,	// (0x0003be7f) fep_vkb_candidate_drop_down_list_pane_g

0xc75a,	// (0x00038a26) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc75a,	// (0x00038a26) fep_vkb_candidate_drop_down_list_scroll_pane

0xc767,	// (0x00038a33) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc767,	// (0x00038a33) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc774,	// (0x00038a40) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc774,	// (0x00038a40) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc780,	// (0x00038a4c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc780,	// (0x00038a4c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5d2,	// (0x0003889e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5d2,	// (0x0003889e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5f3,	// (0x000388bf) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5f3,	// (0x000388bf) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc78c,	// (0x00038a58) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc78c,	// (0x00038a58) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7ad,	// (0x00038a79) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7ad,	// (0x00038a79) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7ce,	// (0x00038a9a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7ce,	// (0x00038a9a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x0003be86) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x0003be86) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x78f2,	// (0x00033bbe) title_pane_g1_ParamLimits

0x78ff,	// (0x00033bcb) title_pane_g2_ParamLimits

0xf529,	// (0x0003b7f5) title_pane_g_ParamLimits

0x8b44,	// (0x00034e10) aid_call2_pane

0x8b4c,	// (0x00034e18) aid_call_pane

0x8b54,	// (0x00034e20) popup_clock_analogue_window_g1

0x8b54,	// (0x00034e20) popup_clock_analogue_window_g2

0x519b,	// (0x00031467) popup_clock_analogue_window_g3

0x51a4,	// (0x00031470) popup_clock_analogue_window_g4

0x2963,	// (0x0002ec2f) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0003b99f) popup_clock_analogue_window_g

0x51ac,	// (0x00031478) popup_clock_analogue_window_t1

0x51ba,	// (0x00031486) clock_digital_number_pane_ParamLimits

0x51ba,	// (0x00031486) clock_digital_number_pane

0x51c6,	// (0x00031492) clock_digital_number_pane_cp02_ParamLimits

0x51c6,	// (0x00031492) clock_digital_number_pane_cp02

0x51d2,	// (0x0003149e) clock_digital_number_pane_cp03_ParamLimits

0x51d2,	// (0x0003149e) clock_digital_number_pane_cp03

0x51de,	// (0x000314aa) clock_digital_number_pane_cp04_ParamLimits

0x51de,	// (0x000314aa) clock_digital_number_pane_cp04

0x51ea,	// (0x000314b6) clock_digital_separator_pane_ParamLimits

0x51ea,	// (0x000314b6) clock_digital_separator_pane

0x51f6,	// (0x000314c2) popup_clock_digital_window_t1_ParamLimits

0x51f6,	// (0x000314c2) popup_clock_digital_window_t1

0x2963,	// (0x0002ec2f) clock_digital_number_pane_g1

0x2963,	// (0x0002ec2f) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0003b9aa) clock_digital_number_pane_g

0x2963,	// (0x0002ec2f) clock_digital_separator_pane_g1

0x2963,	// (0x0002ec2f) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0003b9aa) clock_digital_separator_pane_g

0x94e1,	// (0x000357ad) aid_fill_nsta_ParamLimits

0x962d,	// (0x000358f9) indicator_nsta_pane_ParamLimits

0x97a6,	// (0x00035a72) popup_clock_analogue_window

0x97a6,	// (0x00035a72) popup_clock_digital_window

0xb9fd,	// (0x00037cc9) grid_indicator_nsta_pane_ParamLimits

0xba26,	// (0x00037cf2) clock_nsta_pane_t2

0x0001,

0xfa80,	// (0x0003bd4c) clock_nsta_pane_t

0x515f,	// (0x0003142b) aid_size_max_handle

0x5169,	// (0x00031435) aid_size_min_handle

0x9181,	// (0x0003544d) editor_scroll_pane

0xc7e9,	// (0x00038ab5) ex_editor_pane

0x83d5,	// (0x000346a1) scroll_pane_cp13

0x81f4,	// (0x000344c0) scroll_pane_cp14

0x8b83,	// (0x00034e4f) scroll_pane_cp36

0x8baf,	// (0x00034e7b) list_single_graphic_hl_pane_cp2_ParamLimits

0x8baf,	// (0x00034e7b) list_single_graphic_hl_pane_cp2

0xafa0,	// (0x0003726c) list_single_graphic_hl_pane_ParamLimits

0xafa0,	// (0x0003726c) list_single_graphic_hl_pane

0x866c,	// (0x00034938) aid_size_min_hl_cp1

0xc7f1,	// (0x00038abd) list_highlight_pane_cp34_ParamLimits

0xc7f1,	// (0x00038abd) list_highlight_pane_cp34

0xc802,	// (0x00038ace) list_single_graphic_hl_pane_g1_ParamLimits

0xc802,	// (0x00038ace) list_single_graphic_hl_pane_g1

0x8675,	// (0x00034941) list_single_graphic_hl_pane_g2_ParamLimits

0x8675,	// (0x00034941) list_single_graphic_hl_pane_g2

0x8675,	// (0x00034941) list_single_graphic_hl_pane_g3_ParamLimits

0x8675,	// (0x00034941) list_single_graphic_hl_pane_g3

0x8681,	// (0x0003494d) list_single_graphic_hl_pane_g4_ParamLimits

0x8681,	// (0x0003494d) list_single_graphic_hl_pane_g4

0x868d,	// (0x00034959) list_single_graphic_hl_pane_g5_ParamLimits

0x868d,	// (0x00034959) list_single_graphic_hl_pane_g5

0x0004,

0xfbcb,	// (0x0003be97) list_single_graphic_hl_pane_g_ParamLimits

0xfbcb,	// (0x0003be97) list_single_graphic_hl_pane_g

0x86a1,	// (0x0003496d) list_single_graphic_hl_pane_t1_ParamLimits

0x86a1,	// (0x0003496d) list_single_graphic_hl_pane_t1

0xc80f,	// (0x00038adb) aid_size_min_hl_cp2

0xc818,	// (0x00038ae4) list_highlight_pane_cp34_cp2_ParamLimits

0xc818,	// (0x00038ae4) list_highlight_pane_cp34_cp2

0xc802,	// (0x00038ace) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc802,	// (0x00038ace) list_single_graphic_hl_pane_g1_cp2

0xc825,	// (0x00038af1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc825,	// (0x00038af1) list_single_graphic_hl_pane_g2_cp2

0xc831,	// (0x00038afd) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc831,	// (0x00038afd) list_single_graphic_hl_pane_g3_cp2

0xc83f,	// (0x00038b0b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc83f,	// (0x00038b0b) list_single_graphic_hl_pane_g4_cp2

0xc84b,	// (0x00038b17) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc84b,	// (0x00038b17) list_single_graphic_hl_pane_g5_cp2

0x5534,	// (0x00031800) control_pane_g4_ParamLimits

0x5534,	// (0x00031800) control_pane_g4

0x94a5,	// (0x00035771) bg_popup_sub_pane_cp10_ParamLimits

0xc02c,	// (0x000382f8) list_choice_list_pane_ParamLimits

0xc03b,	// (0x00038307) scroll_pane_cp23

0x7c51,	// (0x00033f1d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc665,	// (0x00038931) list_preview_fixed_pane_ParamLimits

0xc67b,	// (0x00038947) list_preview_fixed_pane_cp_ParamLimits

0xc67b,	// (0x00038947) list_preview_fixed_pane_cp

0xc687,	// (0x00038953) popup_preview_fixed_window_g1_ParamLimits

0xc687,	// (0x00038953) popup_preview_fixed_window_g1

0xc693,	// (0x0003895f) popup_preview_fixed_window_g2_ParamLimits

0xc693,	// (0x0003895f) popup_preview_fixed_window_g2

0x0002,

0xfb53,	// (0x0003be1f) popup_preview_fixed_window_g_ParamLimits

0xfb53,	// (0x0003be1f) popup_preview_fixed_window_g

0x50d3,	// (0x0003139f) aid_navi_side_left_pane_ParamLimits

0x50e8,	// (0x000313b4) aid_navi_side_right_pane_ParamLimits

0x5100,	// (0x000313cc) navi_icon_pane_stacon_ParamLimits

0x5114,	// (0x000313e0) navi_navi_pane_stacon_ParamLimits

0x5100,	// (0x000313cc) navi_text_pane_stacon_ParamLimits

0x4646,	// (0x00030912) main_text_info_pane

0xc875,	// (0x00038b41) listscroll_text_info_pane

0xc87d,	// (0x00038b49) list_text_info_pane_ParamLimits

0xc87d,	// (0x00038b49) list_text_info_pane

0xc88c,	// (0x00038b58) scroll_pane_cp24_ParamLimits

0xc88c,	// (0x00038b58) scroll_pane_cp24

0xc8aa,	// (0x00038b76) list_text_info_pane_t1_ParamLimits

0xc8aa,	// (0x00038b76) list_text_info_pane_t1

0x56aa,	// (0x00031976) popup_fast_swap2_window_ParamLimits

0x56aa,	// (0x00031976) popup_fast_swap2_window

0xc8db,	// (0x00038ba7) aid_size_cell_fast2

0x2959,	// (0x0002ec25) bg_popup_window_pane_cp17

0xc8e5,	// (0x00038bb1) heading_pane_cp2

0xc8ed,	// (0x00038bb9) listscroll_fast2_pane

0xc8f5,	// (0x00038bc1) grid_fast2_pane

0xc8ff,	// (0x00038bcb) listscroll_fast2_pane_g1

0xc907,	// (0x00038bd3) listscroll_fast2_pane_g2

0x0001,

0xfbd6,	// (0x0003bea2) listscroll_fast2_pane_g

0x83d5,	// (0x000346a1) scroll_pane_cp26

0xc911,	// (0x00038bdd) cell_fast2_pane_ParamLimits

0xc911,	// (0x00038bdd) cell_fast2_pane

0xc926,	// (0x00038bf2) cell_fast2_pane_g1

0xc92f,	// (0x00038bfb) cell_fast2_pane_g2

0xc938,	// (0x00038c04) cell_fast2_pane_g3

0x0002,

0xfbdb,	// (0x0003bea7) cell_fast2_pane_g

0x7fb1,	// (0x0003427d) grid_highlight_pane_cp9

0x5668,	// (0x00031934) main_eswt_pane_ParamLimits

0x5668,	// (0x00031934) main_eswt_pane

0xc8a1,	// (0x00038b6d) list_single_text_info_pane

0xc940,	// (0x00038c0c) eswt_ctrl_button_pane

0xc940,	// (0x00038c0c) eswt_ctrl_canvas_pane

0xc948,	// (0x00038c14) eswt_ctrl_combo_pane

0xc940,	// (0x00038c0c) eswt_ctrl_default_pane

0xc940,	// (0x00038c0c) eswt_ctrl_label_pane

0xc950,	// (0x00038c1c) eswt_ctrl_wait_pane

0xc958,	// (0x00038c24) eswt_shell_pane

0x2959,	// (0x0002ec25) listscroll_eswt_app_pane

0xc978,	// (0x00038c44) popup_eswt_tasktip_window_ParamLimits

0xc978,	// (0x00038c44) popup_eswt_tasktip_window

0x9a43,	// (0x00035d0f) bg_popup_window_pane_cp18

0xc991,	// (0x00038c5d) eswt_control_pane_g1_ParamLimits

0xc991,	// (0x00038c5d) eswt_control_pane_g1

0xc99e,	// (0x00038c6a) eswt_control_pane_g2_ParamLimits

0xc99e,	// (0x00038c6a) eswt_control_pane_g2

0xc9ab,	// (0x00038c77) eswt_control_pane_g3_ParamLimits

0xc9ab,	// (0x00038c77) eswt_control_pane_g3

0xc9b8,	// (0x00038c84) eswt_control_pane_g4_ParamLimits

0xc9b8,	// (0x00038c84) eswt_control_pane_g4

0x0003,

0xfbe2,	// (0x0003beae) eswt_control_pane_g_ParamLimits

0xfbe2,	// (0x0003beae) eswt_control_pane_g

0x8255,	// (0x00034521) bg_button_pane_ParamLimits

0x8255,	// (0x00034521) bg_button_pane

0x7fc6,	// (0x00034292) common_borders_pane_copy2_ParamLimits

0x7fc6,	// (0x00034292) common_borders_pane_copy2

0xc9c5,	// (0x00038c91) control_button_pane_g1_ParamLimits

0xc9c5,	// (0x00038c91) control_button_pane_g1

0xc9d1,	// (0x00038c9d) control_button_pane_g2_ParamLimits

0xc9d1,	// (0x00038c9d) control_button_pane_g2

0xc9dd,	// (0x00038ca9) control_button_pane_g3_ParamLimits

0xc9dd,	// (0x00038ca9) control_button_pane_g3

0x0002,

0xfbeb,	// (0x0003beb7) control_button_pane_g_ParamLimits

0xfbeb,	// (0x0003beb7) control_button_pane_g

0xc9f1,	// (0x00038cbd) control_button_pane_t1

0xc9ff,	// (0x00038ccb) control_button_pane_t2

0x0001,

0xfbf2,	// (0x0003bebe) control_button_pane_t

0x99cf,	// (0x00035c9b) bg_button_pane_g1

0x99df,	// (0x00035cab) bg_button_pane_g2

0x99d7,	// (0x00035ca3) bg_button_pane_g3

0x99ef,	// (0x00035cbb) bg_button_pane_g4

0x99e7,	// (0x00035cb3) bg_button_pane_g5

0x99f7,	// (0x00035cc3) bg_button_pane_g6

0x99ff,	// (0x00035ccb) bg_button_pane_g7

0x9a0f,	// (0x00035cdb) bg_button_pane_g8

0x9a07,	// (0x00035cd3) bg_button_pane_g9

0x0008,

0xf841,	// (0x0003bb0d) bg_button_pane_g

0xbfe7,	// (0x000382b3) common_borders_pane_ParamLimits

0xbfe7,	// (0x000382b3) common_borders_pane

0xc991,	// (0x00038c5d) eswt_control_pane_g1_copy1_ParamLimits

0xc991,	// (0x00038c5d) eswt_control_pane_g1_copy1

0xc99e,	// (0x00038c6a) eswt_control_pane_g2_copy1_ParamLimits

0xc99e,	// (0x00038c6a) eswt_control_pane_g2_copy1

0xc9ab,	// (0x00038c77) eswt_control_pane_g3_copy1_ParamLimits

0xc9ab,	// (0x00038c77) eswt_control_pane_g3_copy1

0xc9b8,	// (0x00038c84) eswt_control_pane_g4_copy1_ParamLimits

0xc9b8,	// (0x00038c84) eswt_control_pane_g4_copy1

0xc022,	// (0x000382ee) bg_eswt_ctrl_canvas_pane_g1

0xbfe7,	// (0x000382b3) common_borders_pane_cp2_ParamLimits

0xbfe7,	// (0x000382b3) common_borders_pane_cp2

0xbfe7,	// (0x000382b3) common_borders_pane_cp3_ParamLimits

0xbfe7,	// (0x000382b3) common_borders_pane_cp3

0xca0d,	// (0x00038cd9) separator_horizontal_pane

0xca15,	// (0x00038ce1) separator_vertical_pane

0xc991,	// (0x00038c5d) eswt_control_pane_g1_copy2_ParamLimits

0xc991,	// (0x00038c5d) eswt_control_pane_g1_copy2

0xc99e,	// (0x00038c6a) eswt_control_pane_g2_copy2_ParamLimits

0xc99e,	// (0x00038c6a) eswt_control_pane_g2_copy2

0xc9ab,	// (0x00038c77) eswt_control_pane_g3_copy2_ParamLimits

0xc9ab,	// (0x00038c77) eswt_control_pane_g3_copy2

0xc9b8,	// (0x00038c84) eswt_control_pane_g4_copy2_ParamLimits

0xc9b8,	// (0x00038c84) eswt_control_pane_g4_copy2

0x2959,	// (0x0002ec25) common_borders_pane_cp4

0xca1e,	// (0x00038cea) separator_horizontal_pane_g1

0xca27,	// (0x00038cf3) separator_horizontal_pane_g2

0xca30,	// (0x00038cfc) separator_horizontal_pane_g3

0x0002,

0xfbf7,	// (0x0003bec3) separator_horizontal_pane_g

0xc991,	// (0x00038c5d) eswt_control_pane_g1_copy3_ParamLimits

0xc991,	// (0x00038c5d) eswt_control_pane_g1_copy3

0xc99e,	// (0x00038c6a) eswt_control_pane_g2_copy3_ParamLimits

0xc99e,	// (0x00038c6a) eswt_control_pane_g2_copy3

0xc9ab,	// (0x00038c77) eswt_control_pane_g3_copy3_ParamLimits

0xc9ab,	// (0x00038c77) eswt_control_pane_g3_copy3

0xc9b8,	// (0x00038c84) eswt_control_pane_g4_copy3_ParamLimits

0xc9b8,	// (0x00038c84) eswt_control_pane_g4_copy3

0x2959,	// (0x0002ec25) common_borders_pane_cp5

0xca39,	// (0x00038d05) separator_vertical_pane_g1

0xca42,	// (0x00038d0e) separator_vertical_pane_g2

0xca4b,	// (0x00038d17) separator_vertical_pane_g3

0x0002,

0xfbfe,	// (0x0003beca) separator_vertical_pane_g

0xc991,	// (0x00038c5d) eswt_control_pane_g1_copy4_ParamLimits

0xc991,	// (0x00038c5d) eswt_control_pane_g1_copy4

0xc99e,	// (0x00038c6a) eswt_control_pane_g2_copy4_ParamLimits

0xc99e,	// (0x00038c6a) eswt_control_pane_g2_copy4

0xc9ab,	// (0x00038c77) eswt_control_pane_g3_copy4_ParamLimits

0xc9ab,	// (0x00038c77) eswt_control_pane_g3_copy4

0xc9b8,	// (0x00038c84) eswt_control_pane_g4_copy4_ParamLimits

0xc9b8,	// (0x00038c84) eswt_control_pane_g4_copy4

0xca54,	// (0x00038d20) eswt_ctrl_combo_button_pane

0xca5c,	// (0x00038d28) eswt_ctrl_input_pane

0xca64,	// (0x00038d30) popup_choice_list_window_cp70

0xca6c,	// (0x00038d38) eswt_ctrl_input_pane_t1

0x2959,	// (0x0002ec25) input_focus_pane_cp70

0xbfe7,	// (0x000382b3) bg_button_pane_cp70_ParamLimits

0xbfe7,	// (0x000382b3) bg_button_pane_cp70

0xca7a,	// (0x00038d46) eswt_ctrl_combo_button_pane_g1

0xca82,	// (0x00038d4e) wait_bar_pane_cp70

0x9a43,	// (0x00035d0f) bg_popup_window_pane_cp70_ParamLimits

0x9a43,	// (0x00035d0f) bg_popup_window_pane_cp70

0xca8a,	// (0x00038d56) popup_eswt_tasktip_window_t1

0xcaa0,	// (0x00038d6c) wait_bar_pane_cp71_ParamLimits

0xcaa0,	// (0x00038d6c) wait_bar_pane_cp71

0xcaac,	// (0x00038d78) grid_eswt_app_pane

0x895d,	// (0x00034c29) scroll_pane_cp70

0xcab5,	// (0x00038d81) cell_eswt_app_pane_ParamLimits

0xcab5,	// (0x00038d81) cell_eswt_app_pane

0xcae5,	// (0x00038db1) cell_eswt_app_pane_g1_ParamLimits

0xcae5,	// (0x00038db1) cell_eswt_app_pane_g1

0xcb14,	// (0x00038de0) cell_eswt_app_pane_g2_ParamLimits

0xcb14,	// (0x00038de0) cell_eswt_app_pane_g2

0x0001,

0xfc05,	// (0x0003bed1) cell_eswt_app_pane_g_ParamLimits

0xfc05,	// (0x0003bed1) cell_eswt_app_pane_g

0xcb3d,	// (0x00038e09) cell_eswt_app_pane_t1_ParamLimits

0xcb3d,	// (0x00038e09) cell_eswt_app_pane_t1

0xcb6f,	// (0x00038e3b) grid_highlight_pane_cp70_ParamLimits

0xcb6f,	// (0x00038e3b) grid_highlight_pane_cp70

0x904d,	// (0x00035319) set_content_pane_g1

0x942c,	// (0x000356f8) status_small_volume_pane

0x6b5d,	// (0x00032e29) status_small_volume_pane_g1

0x6b65,	// (0x00032e31) volume_small2_pane

0x6b6e,	// (0x00032e3a) volume_small2_pane_g1

0x6b77,	// (0x00032e43) volume_small2_pane_g2

0x6b80,	// (0x00032e4c) volume_small2_pane_g3

0x6b89,	// (0x00032e55) volume_small2_pane_g4

0x6b92,	// (0x00032e5e) volume_small2_pane_g5

0x6b9b,	// (0x00032e67) volume_small2_pane_g6

0x6ba4,	// (0x00032e70) volume_small2_pane_g7

0x6bad,	// (0x00032e79) volume_small2_pane_g8

0x6bb6,	// (0x00032e82) volume_small2_pane_g9

0x6bbf,	// (0x00032e8b) volume_small2_pane_g10

0x0009,

0xfc0a,	// (0x0003bed6) volume_small2_pane_g

0xc3e8,	// (0x000386b4) fep_vkb_top_text_pane_g1_ParamLimits

0xc403,	// (0x000386cf) fep_vkb_top_text_pane_t1_ParamLimits

0xc69f,	// (0x0003896b) popup_preview_fixed_window_g3_ParamLimits

0xc69f,	// (0x0003896b) popup_preview_fixed_window_g3

0x5b5b,	// (0x00031e27) popup_toolbar_trans_pane

0xada7,	// (0x00037073) aid_height_set_list_ParamLimits

0xadb8,	// (0x00037084) aid_size_parent_ParamLimits

0x94a5,	// (0x00035771) list_highlight_pane_cp2_ParamLimits

0x904d,	// (0x00035319) set_content_pane_g1_ParamLimits

0x61b8,	// (0x00032484) list_single_image_pane_ParamLimits

0x61b8,	// (0x00032484) list_single_image_pane

0xcb7b,	// (0x00038e47) aid_size_cell_image_ParamLimits

0xcb7b,	// (0x00038e47) aid_size_cell_image

0xcb88,	// (0x00038e54) grid_single_image_pane_ParamLimits

0xcb88,	// (0x00038e54) grid_single_image_pane

0xb696,	// (0x00037962) list_single_image_pane_g1_ParamLimits

0xb696,	// (0x00037962) list_single_image_pane_g1

0xcb94,	// (0x00038e60) list_single_image_pane_g2_ParamLimits

0xcb94,	// (0x00038e60) list_single_image_pane_g2

0x0001,

0xfc1f,	// (0x0003beeb) list_single_image_pane_g_ParamLimits

0xfc1f,	// (0x0003beeb) list_single_image_pane_g

0xcba8,	// (0x00038e74) list_single_image_pane_t1_ParamLimits

0xcba8,	// (0x00038e74) list_single_image_pane_t1

0xcbbe,	// (0x00038e8a) cell_image_list_pane_ParamLimits

0xcbbe,	// (0x00038e8a) cell_image_list_pane

0xcbd2,	// (0x00038e9e) cell_image_list_pane_g1

0xcbdb,	// (0x00038ea7) cell_image_list_pane_g2

0x0001,

0xfc24,	// (0x0003bef0) cell_image_list_pane_g

0xcbe4,	// (0x00038eb0) aid_size_cell_tb_trans_pane

0x8255,	// (0x00034521) bg_tb_trans_pane

0xcbf6,	// (0x00038ec2) grid_tb_trans_pane

0x99cf,	// (0x00035c9b) bg_tb_trans_pane_g1

0x99df,	// (0x00035cab) bg_tb_trans_pane_g2

0x99d7,	// (0x00035ca3) bg_tb_trans_pane_g3

0x99ef,	// (0x00035cbb) bg_tb_trans_pane_g4

0x99e7,	// (0x00035cb3) bg_tb_trans_pane_g5

0x9a0f,	// (0x00035cdb) bg_tb_trans_pane_g6

0x9a07,	// (0x00035cd3) bg_tb_trans_pane_g7

0x99f7,	// (0x00035cc3) bg_tb_trans_pane_g8

0x99ff,	// (0x00035ccb) bg_tb_trans_pane_g9

0x0008,

0xfc29,	// (0x0003bef5) bg_tb_trans_pane_g

0xcc0a,	// (0x00038ed6) cell_toolbar_trans_pane_ParamLimits

0xcc0a,	// (0x00038ed6) cell_toolbar_trans_pane

0xc022,	// (0x000382ee) cell_toolbar_trans_pane_g1

0xbbf7,	// (0x00037ec3) list_form2_midp_pane_t1

0xbc05,	// (0x00037ed1) list_form2_midp_pane_t2

0x0001,

0xfac6,	// (0x0003bd92) list_form2_midp_pane_t

0xbc13,	// (0x00037edf) scroll_pane_cp51_ParamLimits

0xbdcf,	// (0x0003809b) form2_midp_wait_pane_g1

0xbdd8,	// (0x000380a4) form2_midp_wait_pane_g2

0xbde1,	// (0x000380ad) form2_midp_wait_pane_g3

0x0002,

0xfadb,	// (0x0003bda7) form2_midp_wait_pane_g

0x79c8,	// (0x00033c94) list_highlight_pane_cp21_ParamLimits

0xbe2d,	// (0x000380f9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe3c,	// (0x00038108) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6159,	// (0x00032425) list_single_2graphic_im_pane_ParamLimits

0x6159,	// (0x00032425) list_single_2graphic_im_pane

0xcc30,	// (0x00038efc) list_single_2graphic_im_pane_g1_ParamLimits

0xcc30,	// (0x00038efc) list_single_2graphic_im_pane_g1

0xcc41,	// (0x00038f0d) list_single_2graphic_im_pane_g2_ParamLimits

0xcc41,	// (0x00038f0d) list_single_2graphic_im_pane_g2

0xcc4d,	// (0x00038f19) list_single_2graphic_im_pane_g3_ParamLimits

0xcc4d,	// (0x00038f19) list_single_2graphic_im_pane_g3

0x0003,

0xfc3c,	// (0x0003bf08) list_single_2graphic_im_pane_g_ParamLimits

0xfc3c,	// (0x0003bf08) list_single_2graphic_im_pane_g

0xcc6d,	// (0x00038f39) list_single_2graphic_im_pane_t1_ParamLimits

0xcc6d,	// (0x00038f39) list_single_2graphic_im_pane_t1

0xc6ab,	// (0x00038977) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6ab,	// (0x00038977) list_single_graphic_2heading_pane_fp

0x697b,	// (0x00032c47) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x697b,	// (0x00032c47) list_single_graphic_2heading_pane_fp_g1

0xc6c0,	// (0x0003898c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6c0,	// (0x0003898c) list_single_graphic_2heading_pane_fp_g2

0x6944,	// (0x00032c10) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6944,	// (0x00032c10) list_single_graphic_2heading_pane_fp_g3

0x6950,	// (0x00032c1c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6950,	// (0x00032c1c) list_single_graphic_2heading_pane_fp_g4

0xc6cc,	// (0x00038998) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6cc,	// (0x00038998) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb63,	// (0x0003be2f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb63,	// (0x0003be2f) list_single_graphic_2heading_pane_fp_g

0x86b7,	// (0x00034983) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x86b7,	// (0x00034983) list_single_graphic_2heading_pane_fp_t1

0x69b3,	// (0x00032c7f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x69b3,	// (0x00032c7f) list_single_graphic_2heading_pane_fp_t2

0x86cd,	// (0x00034999) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x86cd,	// (0x00034999) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc45,	// (0x0003bf11) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc45,	// (0x0003bf11) list_single_graphic_2heading_pane_fp_t

0xc0ae,	// (0x0003837a) fep_hwr_write_pane_g5_ParamLimits

0xc0ae,	// (0x0003837a) fep_hwr_write_pane_g5

0xc0ba,	// (0x00038386) fep_hwr_write_pane_g6_ParamLimits

0xc0ba,	// (0x00038386) fep_hwr_write_pane_g6

0xc958,	// (0x00038c24) eswt_shell_pane_ParamLimits

0x9a43,	// (0x00035d0f) bg_popup_window_pane_cp18_ParamLimits

0xc989,	// (0x00038c55) heading_pane_cp70

0xca8a,	// (0x00038d56) popup_eswt_tasktip_window_t1_ParamLimits

0x9536,	// (0x00035802) aid_touch_tab_arrow_left

0x9545,	// (0x00035811) aid_touch_tab_arrow_right

0x7910,	// (0x00033bdc) title_pane_g3_ParamLimits

0x7910,	// (0x00033bdc) title_pane_g3

0x8214,	// (0x000344e0) set_value_pane_g1

0x5b5b,	// (0x00031e27) popup_toolbar_trans_pane_ParamLimits

0xcbe4,	// (0x00038eb0) aid_size_cell_tb_trans_pane_ParamLimits

0x8255,	// (0x00034521) bg_tb_trans_pane_ParamLimits

0xcbf6,	// (0x00038ec2) grid_tb_trans_pane_ParamLimits

0x7c51,	// (0x00033f1d) cont_note_pane_ParamLimits

0x7c51,	// (0x00033f1d) cont_note_pane

0x7fc6,	// (0x00034292) cont_snote2_single_text_pane_ParamLimits

0x7fc6,	// (0x00034292) cont_snote2_single_text_pane

0x7fc6,	// (0x00034292) cont_snote2_single_graphic_pane_ParamLimits

0x7fc6,	// (0x00034292) cont_snote2_single_graphic_pane

0xa05e,	// (0x0003632a) cont_note_wait_pane_ParamLimits

0xa05e,	// (0x0003632a) cont_note_wait_pane

0xa05e,	// (0x0003632a) cont_note_image_pane_ParamLimits

0xa05e,	// (0x0003632a) cont_note_image_pane

0xcc9e,	// (0x00038f6a) popup_note2_window_g1_ParamLimits

0xcc9e,	// (0x00038f6a) popup_note2_window_g1

0xcccf,	// (0x00038f9b) popup_note2_window_t1_ParamLimits

0xcccf,	// (0x00038f9b) popup_note2_window_t1

0xcd14,	// (0x00038fe0) popup_note2_window_t2_ParamLimits

0xcd14,	// (0x00038fe0) popup_note2_window_t2

0xcd59,	// (0x00039025) popup_note2_window_t3_ParamLimits

0xcd59,	// (0x00039025) popup_note2_window_t3

0xcd9e,	// (0x0003906a) popup_note2_window_t4_ParamLimits

0xcd9e,	// (0x0003906a) popup_note2_window_t4

0x7cd5,	// (0x00033fa1) popup_note2_window_t5_ParamLimits

0x7cd5,	// (0x00033fa1) popup_note2_window_t5

0x0004,

0xfc51,	// (0x0003bf1d) popup_note2_window_t_ParamLimits

0xfc51,	// (0x0003bf1d) popup_note2_window_t

0xcdcd,	// (0x00039099) popup_note2_image_window_g1_ParamLimits

0xcdcd,	// (0x00039099) popup_note2_image_window_g1

0xcdd9,	// (0x000390a5) popup_note2_image_window_g2_ParamLimits

0xcdd9,	// (0x000390a5) popup_note2_image_window_g2

0x0001,

0xfc5c,	// (0x0003bf28) popup_note2_image_window_g_ParamLimits

0xfc5c,	// (0x0003bf28) popup_note2_image_window_g

0xcdeb,	// (0x000390b7) popup_note2_image_window_t1_ParamLimits

0xcdeb,	// (0x000390b7) popup_note2_image_window_t1

0xce03,	// (0x000390cf) popup_note2_image_window_t2_ParamLimits

0xce03,	// (0x000390cf) popup_note2_image_window_t2

0xce1b,	// (0x000390e7) popup_note2_image_window_t3_ParamLimits

0xce1b,	// (0x000390e7) popup_note2_image_window_t3

0x0002,

0xfc61,	// (0x0003bf2d) popup_note2_image_window_t_ParamLimits

0xfc61,	// (0x0003bf2d) popup_note2_image_window_t

0xa06c,	// (0x00036338) popup_note2_wait_window_g1_ParamLimits

0xa06c,	// (0x00036338) popup_note2_wait_window_g1

0xce37,	// (0x00039103) popup_note2_wait_window_g2_ParamLimits

0xce37,	// (0x00039103) popup_note2_wait_window_g2

0xa084,	// (0x00036350) popup_note2_wait_window_g3_ParamLimits

0xa084,	// (0x00036350) popup_note2_wait_window_g3

0x0002,

0xfc68,	// (0x0003bf34) popup_note2_wait_window_g_ParamLimits

0xfc68,	// (0x0003bf34) popup_note2_wait_window_g

0xce43,	// (0x0003910f) popup_note2_wait_window_t1_ParamLimits

0xce43,	// (0x0003910f) popup_note2_wait_window_t1

0xce61,	// (0x0003912d) popup_note2_wait_window_t2_ParamLimits

0xce61,	// (0x0003912d) popup_note2_wait_window_t2

0xce7f,	// (0x0003914b) popup_note2_wait_window_t3_ParamLimits

0xce7f,	// (0x0003914b) popup_note2_wait_window_t3

0xce91,	// (0x0003915d) popup_note2_wait_window_t4_ParamLimits

0xce91,	// (0x0003915d) popup_note2_wait_window_t4

0x0003,

0xfc6f,	// (0x0003bf3b) popup_note2_wait_window_t_ParamLimits

0xfc6f,	// (0x0003bf3b) popup_note2_wait_window_t

0xcea3,	// (0x0003916f) wait_bar2_pane_ParamLimits

0xcea3,	// (0x0003916f) wait_bar2_pane

0xcebb,	// (0x00039187) popup_snote2_single_text_window_g1_ParamLimits

0xcebb,	// (0x00039187) popup_snote2_single_text_window_g1

0xcee3,	// (0x000391af) popup_snote2_single_text_window_t1_ParamLimits

0xcee3,	// (0x000391af) popup_snote2_single_text_window_t1

0xcf2f,	// (0x000391fb) popup_snote2_single_text_window_t2_ParamLimits

0xcf2f,	// (0x000391fb) popup_snote2_single_text_window_t2

0xcf7b,	// (0x00039247) popup_snote2_single_text_window_t3_ParamLimits

0xcf7b,	// (0x00039247) popup_snote2_single_text_window_t3

0xcfbc,	// (0x00039288) popup_snote2_single_text_window_t4_ParamLimits

0xcfbc,	// (0x00039288) popup_snote2_single_text_window_t4

0xcff2,	// (0x000392be) popup_snote2_single_text_window_t5_ParamLimits

0xcff2,	// (0x000392be) popup_snote2_single_text_window_t5

0x0004,

0xfc78,	// (0x0003bf44) popup_snote2_single_text_window_t_ParamLimits

0xfc78,	// (0x0003bf44) popup_snote2_single_text_window_t

0xd01d,	// (0x000392e9) popup_snote2_single_graphic_window_g1_ParamLimits

0xd01d,	// (0x000392e9) popup_snote2_single_graphic_window_g1

0xd045,	// (0x00039311) popup_snote2_single_graphic_window_g2_ParamLimits

0xd045,	// (0x00039311) popup_snote2_single_graphic_window_g2

0x0001,

0xfc83,	// (0x0003bf4f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc83,	// (0x0003bf4f) popup_snote2_single_graphic_window_g

0xd06d,	// (0x00039339) popup_snote2_single_graphic_window_t1_ParamLimits

0xd06d,	// (0x00039339) popup_snote2_single_graphic_window_t1

0xd0b9,	// (0x00039385) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0b9,	// (0x00039385) popup_snote2_single_graphic_window_t2

0xcf7b,	// (0x00039247) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf7b,	// (0x00039247) popup_snote2_single_graphic_window_t3

0xcfbc,	// (0x00039288) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfbc,	// (0x00039288) popup_snote2_single_graphic_window_t4

0xcff2,	// (0x000392be) popup_snote2_single_graphic_window_t5_ParamLimits

0xcff2,	// (0x000392be) popup_snote2_single_graphic_window_t5

0x0004,

0xfc88,	// (0x0003bf54) popup_snote2_single_graphic_window_t_ParamLimits

0xfc88,	// (0x0003bf54) popup_snote2_single_graphic_window_t

0xbad4,	// (0x00037da0) clock_nsta_pane_cp2_t1

0xbad4,	// (0x00037da0) clock_nsta_pane_cp2_t2

0x0001,

0xfa9c,	// (0x0003bd68) clock_nsta_pane_cp2_t

0x4e51,	// (0x0003111d) form_field_data_wide_pane_g1_ParamLimits

0x8263,	// (0x0003452f) form_field_data_wide_pane_g2_ParamLimits

0x8263,	// (0x0003452f) form_field_data_wide_pane_g2

0x826f,	// (0x0003453b) form_field_data_wide_pane_g3_ParamLimits

0x826f,	// (0x0003453b) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0003b922) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0003b922) form_field_data_wide_pane_g

0xb9b0,	// (0x00037c7c) grid_touch_3_pane_ParamLimits

0xb9b0,	// (0x00037c7c) grid_touch_3_pane

0xd105,	// (0x000393d1) cell_touch_3_pane_ParamLimits

0xd105,	// (0x000393d1) cell_touch_3_pane

0xc022,	// (0x000382ee) cell_touch_3_pane_g1

0xc022,	// (0x000382ee) cell_touch_3_pane_g2

0x0001,

0xfb21,	// (0x0003bded) cell_touch_3_pane_g

0x7d2d,	// (0x00033ff9) cont_query_data_pane

0x7d35,	// (0x00034001) cont_query_data_pane_cp1

0xd133,	// (0x000393ff) button_value_adjust_pane_cp7

0xd13b,	// (0x00039407) query_popup_pane_cp3

0x8c5d,	// (0x00034f29) bg_popup_sub_pane_cp22_ParamLimits

0x5215,	// (0x000314e1) navi_navi_volume_pane_cp2

0x5230,	// (0x000314fc) popup_side_volume_key_window_g2

0x523f,	// (0x0003150b) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0003b9b8) popup_side_volume_key_window_g

0x525c,	// (0x00031528) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0003b9bf) popup_side_volume_key_window_t

0x8f17,	// (0x000351e3) popup_side_volume_key_window_ParamLimits

0x4ad1,	// (0x00030d9d) list_double_graphic_pane_g4_ParamLimits

0x4ad1,	// (0x00030d9d) list_double_graphic_pane_g4

0x6198,	// (0x00032464) list_single_2heading_msg_pane_ParamLimits

0x6198,	// (0x00032464) list_single_2heading_msg_pane

0x86ed,	// (0x000349b9) list_single_2heading_msg_pane_g1_ParamLimits

0x86ed,	// (0x000349b9) list_single_2heading_msg_pane_g1

0x39b6,	// (0x0002fc82) list_single_2heading_msg_pane_g2_ParamLimits

0x39b6,	// (0x0002fc82) list_single_2heading_msg_pane_g2

0x86f9,	// (0x000349c5) list_single_2heading_msg_pane_g3_ParamLimits

0x86f9,	// (0x000349c5) list_single_2heading_msg_pane_g3

0x8705,	// (0x000349d1) list_single_2heading_msg_pane_g4_ParamLimits

0x8705,	// (0x000349d1) list_single_2heading_msg_pane_g4

0x0003,

0xfc93,	// (0x0003bf5f) list_single_2heading_msg_pane_g_ParamLimits

0xfc93,	// (0x0003bf5f) list_single_2heading_msg_pane_g

0x871d,	// (0x000349e9) list_single_2heading_msg_pane_t1_ParamLimits

0x871d,	// (0x000349e9) list_single_2heading_msg_pane_t1

0x8745,	// (0x00034a11) list_single_2heading_msg_pane_t2_ParamLimits

0x8745,	// (0x00034a11) list_single_2heading_msg_pane_t2

0x8779,	// (0x00034a45) list_single_2heading_msg_pane_t3_ParamLimits

0x8779,	// (0x00034a45) list_single_2heading_msg_pane_t3

0x87b2,	// (0x00034a7e) list_single_2heading_msg_pane_t4_ParamLimits

0x87b2,	// (0x00034a7e) list_single_2heading_msg_pane_t4

0x0003,

0xfc9c,	// (0x0003bf68) list_single_2heading_msg_pane_t_ParamLimits

0xfc9c,	// (0x0003bf68) list_single_2heading_msg_pane_t

0x791c,	// (0x00033be8) title_pane_g4_ParamLimits

0x791c,	// (0x00033be8) title_pane_g4

0x5024,	// (0x000312f0) title_pane_stacon_g3_ParamLimits

0x5024,	// (0x000312f0) title_pane_stacon_g3

0xcc61,	// (0x00038f2d) list_single_2graphic_im_pane_g4_ParamLimits

0xcc61,	// (0x00038f2d) list_single_2graphic_im_pane_g4

0xaabd,	// (0x00036d89) popup_side_volume_key_window_cp

0xb2ef,	// (0x000375bb) main_idle_act2_pane_t1

0x5c87,	// (0x00031f53) toolbar_button_pane_g10

0x81be,	// (0x0003448a) popup_toolbar_window_cp1

0xbac5,	// (0x00037d91) clock_nsta_pane_cp_t1

0xbac5,	// (0x00037d91) clock_nsta_pane_cp_t2

0x0001,

0xfa97,	// (0x0003bd63) clock_nsta_pane_cp_t

0x5215,	// (0x000314e1) navi_navi_volume_pane_cp2_ParamLimits

0x5224,	// (0x000314f0) popup_side_volume_key_window_g1_ParamLimits

0x5230,	// (0x000314fc) popup_side_volume_key_window_g2_ParamLimits

0x523f,	// (0x0003150b) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0003b9b8) popup_side_volume_key_window_g_ParamLimits

0x66a0,	// (0x0003296c) fep_hwr_aid_pane

0x6747,	// (0x00032a13) bg_fep_hwr_top_pane_g4_ParamLimits

0xc07e,	// (0x0003834a) fep_hwr_top_pane_g1_ParamLimits

0xc090,	// (0x0003835c) fep_hwr_top_pane_g2_ParamLimits

0x6767,	// (0x00032a33) fep_hwr_top_pane_g3_ParamLimits

0xfaec,	// (0x0003bdb8) fep_hwr_top_pane_g_ParamLimits

0x677c,	// (0x00032a48) fep_hwr_top_text_pane_ParamLimits

0xa880,	// (0x00036b4c) aid_touch_tab_arrow_arrow_2

0xa889,	// (0x00036b55) aid_touch_tab_arrow_left_2

0x66b4,	// (0x00032980) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x66eb,	// (0x000329b7) fep_hwr_prediction_pane

0xc1f0,	// (0x000384bc) fep_vkb_prediction_pane

0xc2f4,	// (0x000385c0) fep_vkb_side_pane_g3_ParamLimits

0xc2f4,	// (0x000385c0) fep_vkb_side_pane_g3

0x68f7,	// (0x00032bc3) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6a8c,	// (0x00032d58) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6a99,	// (0x00032d65) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9b,	// (0x0003be67) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6bc8,	// (0x00032e94) fep_hwr_prediction_pane_g1

0x6bd2,	// (0x00032e9e) fep_hwr_prediction_pane_g2

0x6bda,	// (0x00032ea6) fep_hwr_prediction_pane_g3

0x6be2,	// (0x00032eae) fep_hwr_prediction_pane_g4

0x0003,

0xfca5,	// (0x0003bf71) fep_hwr_prediction_pane_g

0xd160,	// (0x0003942c) fep_vkb_prediction_pane_g1

0xd16a,	// (0x00039436) fep_vkb_prediction_pane_g2

0xd172,	// (0x0003943e) fep_vkb_prediction_pane_g3

0xd17a,	// (0x00039446) fep_vkb_prediction_pane_g4

0x0003,

0xfcae,	// (0x0003bf7a) fep_vkb_prediction_pane_g

0x608e,	// (0x0003235a) slider_set_pane_g3

0x60a2,	// (0x0003236e) slider_set_pane_g4

0x60ba,	// (0x00032386) slider_set_pane_g5

0x608e,	// (0x0003235a) slider_set_pane_g6

0x60d0,	// (0x0003239c) slider_set_pane_g7

0xaf1d,	// (0x000371e9) slider_form_pane_g3

0xaf26,	// (0x000371f2) slider_form_pane_g4

0xaf2e,	// (0x000371fa) slider_form_pane_g5

0xaf1d,	// (0x000371e9) slider_form_pane_g6

0xaf36,	// (0x00037202) slider_form_pane_g7

0xb59a,	// (0x00037866) slider_set_pane_vc_g3

0xb5a3,	// (0x0003786f) slider_set_pane_vc_g4

0xb5ac,	// (0x00037878) slider_set_pane_vc_g5

0xb59a,	// (0x00037866) slider_set_pane_vc_g6

0xb5b5,	// (0x00037881) slider_set_pane_vc_g7

0xb783,	// (0x00037a4f) slider_form_pane_vc_g1

0xb78c,	// (0x00037a58) slider_form_pane_vc_g2

0xb795,	// (0x00037a61) slider_form_pane_vc_g3

0xb783,	// (0x00037a4f) slider_form_pane_vc_g4

0xb79e,	// (0x00037a6a) slider_form_pane_vc_g5

0x0004,

0xfa69,	// (0x0003bd35) slider_form_pane_vc_g

0x4646,	// (0x00030912) main_idle_act3_pane

0xd182,	// (0x0003944e) ai3_links_pane

0xd18b,	// (0x00039457) popup_ai3_data_window_ParamLimits

0xd18b,	// (0x00039457) popup_ai3_data_window

0x2959,	// (0x0002ec25) grid_ai3_links_pane

0xd1a5,	// (0x00039471) cell_ai3_links_pane_ParamLimits

0xd1a5,	// (0x00039471) cell_ai3_links_pane

0xd1bd,	// (0x00039489) bg_popup_sub_pane_cp11

0xd1ca,	// (0x00039496) cell_ai3_links_pane_g1

0x2959,	// (0x0002ec25) bg_popup_sub_pane_cp12

0xd1ef,	// (0x000394bb) heading_ai3_data_pane

0xd1f7,	// (0x000394c3) list_ai3_gene_pane

0xd203,	// (0x000394cf) popup_ai3_data_window_g1

0xd20b,	// (0x000394d7) heading_ai3_data_pane_g1

0xd213,	// (0x000394df) heading_ai3_data_pane_t1

0xd221,	// (0x000394ed) list_double_ai3_gene_pane_ParamLimits

0xd221,	// (0x000394ed) list_double_ai3_gene_pane

0xd22e,	// (0x000394fa) list_single_ai3_gene_pane_ParamLimits

0xd22e,	// (0x000394fa) list_single_ai3_gene_pane

0xbfe7,	// (0x000382b3) list_highlight_pane_cp7_ParamLimits

0xbfe7,	// (0x000382b3) list_highlight_pane_cp7

0xd23b,	// (0x00039507) list_single_a13_gene_pane_t1_ParamLimits

0xd23b,	// (0x00039507) list_single_a13_gene_pane_t1

0xd252,	// (0x0003951e) list_single_ai3_gene_pane_g1

0xd25b,	// (0x00039527) list_single_ai3_gene_pane_g2

0x0001,

0xfcb7,	// (0x0003bf83) list_single_ai3_gene_pane_g

0xd263,	// (0x0003952f) list_double_ai3_gene_pane_g1_ParamLimits

0xd263,	// (0x0003952f) list_double_ai3_gene_pane_g1

0xd26f,	// (0x0003953b) list_double_ai3_gene_pane_t1_ParamLimits

0xd26f,	// (0x0003953b) list_double_ai3_gene_pane_t1

0xd28b,	// (0x00039557) list_double_ai3_gene_pane_t2_ParamLimits

0xd28b,	// (0x00039557) list_double_ai3_gene_pane_t2

0xd2a1,	// (0x0003956d) list_double_ai3_gene_pane_t3_ParamLimits

0xd2a1,	// (0x0003956d) list_double_ai3_gene_pane_t3

0x0002,

0xfcbc,	// (0x0003bf88) list_double_ai3_gene_pane_t_ParamLimits

0xfcbc,	// (0x0003bf88) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x86e3,	// (0x000349af) aid_size_min_col_2

0xd14c,	// (0x00039418) aid_size_min_msg_ParamLimits

0xd14c,	// (0x00039418) aid_size_min_msg

0xc3f4,	// (0x000386c0) fep_vkb_top_text_pane_g2_ParamLimits

0xc3f4,	// (0x000386c0) fep_vkb_top_text_pane_g2

0x0001,

0xfb1c,	// (0x0003bde8) fep_vkb_top_text_pane_g_ParamLimits

0xfb1c,	// (0x0003bde8) fep_vkb_top_text_pane_g

0x4646,	// (0x00030912) main_hc_apps_shell_pane

0xd2be,	// (0x0003958a) grid_hc_apps_pane_ParamLimits

0xd2be,	// (0x0003958a) grid_hc_apps_pane

0xd2d0,	// (0x0003959c) list_hc_apps_pane

0xd2d8,	// (0x000395a4) scroll_pane_cp37_ParamLimits

0xd2d8,	// (0x000395a4) scroll_pane_cp37

0xd2e4,	// (0x000395b0) cell_hc_apps_pane_ParamLimits

0xd2e4,	// (0x000395b0) cell_hc_apps_pane

0xd392,	// (0x0003965e) cell_hc_apps_pane_g1_ParamLimits

0xd392,	// (0x0003965e) cell_hc_apps_pane_g1

0xd3c2,	// (0x0003968e) cell_hc_apps_pane_g2_ParamLimits

0xd3c2,	// (0x0003968e) cell_hc_apps_pane_g2

0xd3de,	// (0x000396aa) cell_hc_apps_pane_g3_ParamLimits

0xd3de,	// (0x000396aa) cell_hc_apps_pane_g3

0x0002,

0xfcc3,	// (0x0003bf8f) cell_hc_apps_pane_g_ParamLimits

0xfcc3,	// (0x0003bf8f) cell_hc_apps_pane_g

0xd400,	// (0x000396cc) cell_hc_apps_pane_t1_ParamLimits

0xd400,	// (0x000396cc) cell_hc_apps_pane_t1

0x7c51,	// (0x00033f1d) grid_highlight_pane_cp10_ParamLimits

0x7c51,	// (0x00033f1d) grid_highlight_pane_cp10

0xd440,	// (0x0003970c) list_single_hc_apps_pane_ParamLimits

0xd440,	// (0x0003970c) list_single_hc_apps_pane

0xd49c,	// (0x00039768) list_single_hc_apps_pane_g1

0x87d7,	// (0x00034aa3) list_single_hc_apps_pane_g2

0x0001,

0xfcca,	// (0x0003bf96) list_single_hc_apps_pane_g

0x87f0,	// (0x00034abc) list_single_hc_apps_pane_g2_copy1

0x880c,	// (0x00034ad8) list_single_hc_apps_pane_t1

0x79c8,	// (0x00033c94) bg_set_opt_pane_cp_ParamLimits

0x48a7,	// (0x00030b73) setting_slider_pane_t1_ParamLimits

0x48c0,	// (0x00030b8c) setting_slider_pane_t2_ParamLimits

0x48da,	// (0x00030ba6) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0003b805) setting_slider_pane_t_ParamLimits

0x48f2,	// (0x00030bbe) slider_set_pane_ParamLimits

0x5548,	// (0x00031814) control_pane_g5_ParamLimits

0x5548,	// (0x00031814) control_pane_g5

0xad6c,	// (0x00037038) slider_set_pane_g1_ParamLimits

0x6082,	// (0x0003234e) slider_set_pane_g2_ParamLimits

0x608e,	// (0x0003235a) slider_set_pane_g3_ParamLimits

0x60a2,	// (0x0003236e) slider_set_pane_g4_ParamLimits

0x60ba,	// (0x00032386) slider_set_pane_g5_ParamLimits

0x608e,	// (0x0003235a) slider_set_pane_g6_ParamLimits

0x60d0,	// (0x0003239c) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0003bc0b) slider_set_pane_g_ParamLimits

0x8ff8,	// (0x000352c4) navi_icon_text_pane_ParamLimits

0x94f7,	// (0x000357c3) aid_fill_nsta_2_ParamLimits

0x9536,	// (0x00035802) aid_touch_tab_arrow_left_ParamLimits

0x9545,	// (0x00035811) aid_touch_tab_arrow_right_ParamLimits

0x95b2,	// (0x0003587e) clock_nsta_pane_ParamLimits

0xa862,	// (0x00036b2e) navi_icon_pane_g1_ParamLimits

0xa86e,	// (0x00036b3a) navi_text_pane_t1_ParamLimits

0xbbd1,	// (0x00037e9d) navi_icon_text_pane_g1_ParamLimits

0xbbdd,	// (0x00037ea9) navi_icon_text_pane_t1_ParamLimits

0xd49c,	// (0x00039768) list_single_hc_apps_pane_g1_ParamLimits

0x87d7,	// (0x00034aa3) list_single_hc_apps_pane_g2_ParamLimits

0xfcca,	// (0x0003bf96) list_single_hc_apps_pane_g_ParamLimits

0x87f0,	// (0x00034abc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x880c,	// (0x00034ad8) list_single_hc_apps_pane_t1_ParamLimits

0x47b1,	// (0x00030a7d) popup_toolbar2_fixed_window_ParamLimits

0x47b1,	// (0x00030a7d) popup_toolbar2_fixed_window

0x5b51,	// (0x00031e1d) popup_toolbar2_float_window

0x2959,	// (0x0002ec25) bg_popup_sub_pane_cp27

0xd4b5,	// (0x00039781) grid_toolbar2_float_pane

0x2959,	// (0x0002ec25) bg_popup_sub_pane_cp26

0xd4b5,	// (0x00039781) grid_toolbar2_fixed_pane

0xd4bd,	// (0x00039789) cell_toolbar2_fixed_pane_ParamLimits

0xd4bd,	// (0x00039789) cell_toolbar2_fixed_pane

0xd4cd,	// (0x00039799) cell_toolbar2_fixed_pane_g1

0xd4d6,	// (0x000397a2) toolbar2_fixed_button_pane

0x99cf,	// (0x00035c9b) toolbar2_fixed_button_pane_g1

0x99df,	// (0x00035cab) toolbar2_fixed_button_pane_g2

0x99d7,	// (0x00035ca3) toolbar2_fixed_button_pane_g3

0x99ef,	// (0x00035cbb) toolbar2_fixed_button_pane_g4

0x99e7,	// (0x00035cb3) toolbar2_fixed_button_pane_g5

0x99f7,	// (0x00035cc3) toolbar2_fixed_button_pane_g6

0x99ff,	// (0x00035ccb) toolbar2_fixed_button_pane_g7

0x9a0f,	// (0x00035cdb) toolbar2_fixed_button_pane_g8

0x9a07,	// (0x00035cd3) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0003bb0d) toolbar2_fixed_button_pane_g

0xd4de,	// (0x000397aa) cell_toolbar2_float_pane_ParamLimits

0xd4de,	// (0x000397aa) cell_toolbar2_float_pane

0xd4ef,	// (0x000397bb) cell_toolbar2_float_pane_g1

0xd4d6,	// (0x000397a2) toolbar2_fixed_button_pane_cp

0xc150,	// (0x0003841c) fep_vkb_accented_list_pane_ParamLimits

0xc150,	// (0x0003841c) fep_vkb_accented_list_pane

0x68d7,	// (0x00032ba3) bg_popup_fep_shadow_pane_g9

0x9181,	// (0x0003544d) bg_popup_fep_shadow_pane_cp3

0x83bc,	// (0x00034688) list_accented_list_pane

0xd4f8,	// (0x000397c4) list_single_accented_list_pane_ParamLimits

0xd4f8,	// (0x000397c4) list_single_accented_list_pane

0x9181,	// (0x0003544d) list_highlight_pane_cp10

0xd509,	// (0x000397d5) list_single_accented_list_pane_t1

0x5aa1,	// (0x00031d6d) popup_slider_window_ParamLimits

0x5aa1,	// (0x00031d6d) popup_slider_window

0xd143,	// (0x0003940f) aid_indentation_list_msg

0xd5ee,	// (0x000398ba) bg_popup_window_pane_cp19

0xd656,	// (0x00039922) popup_slider_window_g1

0xd672,	// (0x0003993e) popup_slider_window_g2

0xd68e,	// (0x0003995a) popup_slider_window_g3

0x0005,

0xfccf,	// (0x0003bf9b) popup_slider_window_g

0xd6f4,	// (0x000399c0) popup_slider_window_t1

0xd768,	// (0x00039a34) small_volume_slider_vertical_pane

0xc022,	// (0x000382ee) small_volume_slider_vertical_pane_g1

0xc022,	// (0x000382ee) small_volume_slider_vertical_pane_g2

0xd784,	// (0x00039a50) small_volume_slider_vertical_pane_g3

0x0002,

0xfce1,	// (0x0003bfad) small_volume_slider_vertical_pane_g

0x4569,	// (0x00030835) area_side_right_pane_ParamLimits

0x4569,	// (0x00030835) area_side_right_pane

0x6bea,	// (0x00032eb6) aid_size_side_button_ParamLimits

0x6bea,	// (0x00032eb6) aid_size_side_button

0x6bfe,	// (0x00032eca) grid_sctrl_middle_pane_ParamLimits

0x6bfe,	// (0x00032eca) grid_sctrl_middle_pane

0x6c1d,	// (0x00032ee9) sctrl_sk_bottom_pane

0x6c2e,	// (0x00032efa) sctrl_sk_top_pane

0x6c40,	// (0x00032f0c) aid_touch_sctrl_top

0x6c4d,	// (0x00032f19) bg_sctrl_sk_pane_ParamLimits

0x6c4d,	// (0x00032f19) bg_sctrl_sk_pane

0x6c5b,	// (0x00032f27) sctrl_sk_top_pane_g1

0x6c68,	// (0x00032f34) sctrl_sk_top_pane_t1

0x6c40,	// (0x00032f0c) aid_touch_sctrl_bottom

0x6c4d,	// (0x00032f19) bg_sctrl_sk_pane_cp_ParamLimits

0x6c4d,	// (0x00032f19) bg_sctrl_sk_pane_cp

0x6c83,	// (0x00032f4f) sctrl_sk_bottom_pane_g1

0x6c68,	// (0x00032f34) sctrl_sk_bottom_pane_t1

0x6c8c,	// (0x00032f58) cell_sctrl_middle_pane_ParamLimits

0x6c8c,	// (0x00032f58) cell_sctrl_middle_pane

0x6ca7,	// (0x00032f73) aid_touch_sctrl_middle_ParamLimits

0x6ca7,	// (0x00032f73) aid_touch_sctrl_middle

0x6cb9,	// (0x00032f85) bg_sctrl_middle_pane_ParamLimits

0x6cb9,	// (0x00032f85) bg_sctrl_middle_pane

0x68f7,	// (0x00032bc3) cell_sctrl_middle_pane_g1_ParamLimits

0x68f7,	// (0x00032bc3) cell_sctrl_middle_pane_g1

0x6cc7,	// (0x00032f93) cell_sctrl_middle_pane_g2_ParamLimits

0x6cc7,	// (0x00032f93) cell_sctrl_middle_pane_g2

0x0001,

0xfced,	// (0x0003bfb9) cell_sctrl_middle_pane_g_ParamLimits

0xfced,	// (0x0003bfb9) cell_sctrl_middle_pane_g

0x99cf,	// (0x00035c9b) bg_sctrl_middle_pane_g1

0x99d7,	// (0x00035ca3) bg_sctrl_middle_pane_g2

0x99df,	// (0x00035cab) bg_sctrl_middle_pane_g3

0x99e7,	// (0x00035cb3) bg_sctrl_middle_pane_g4

0x99ef,	// (0x00035cbb) bg_sctrl_middle_pane_g5

0x99f7,	// (0x00035cc3) bg_sctrl_middle_pane_g6

0x99ff,	// (0x00035ccb) bg_sctrl_middle_pane_g7

0x9a07,	// (0x00035cd3) bg_sctrl_middle_pane_g8

0x0007,

0xfcf2,	// (0x0003bfbe) bg_sctrl_middle_pane_g

0x9a0f,	// (0x00035cdb) bg_sctrl_middle_pane_g8_copy1

0x99cf,	// (0x00035c9b) bg_sctrl_sk_pane_g1

0x99df,	// (0x00035cab) bg_sctrl_sk_pane_g2

0x99d7,	// (0x00035ca3) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0003bb0d) bg_sctrl_sk_pane_g

0x8184,	// (0x00034450) aid_size_touch_scroll_bar

0x99ef,	// (0x00035cbb) bg_sctrl_sk_pane_g4

0x99e7,	// (0x00035cb3) bg_sctrl_sk_pane_g5

0x99f7,	// (0x00035cc3) bg_sctrl_sk_pane_g6

0x99ff,	// (0x00035ccb) bg_sctrl_sk_pane_g7

0x9a0f,	// (0x00035cdb) bg_sctrl_sk_pane_g8

0x9a07,	// (0x00035cd3) bg_sctrl_sk_pane_g9

0x5708,	// (0x000319d4) popup_fep_china_hwr2_fs_candidate_window

0x5712,	// (0x000319de) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5712,	// (0x000319de) popup_fep_china_hwr2_fs_control_window

0x68f7,	// (0x00032bc3) sctrl_sk_top_pane_g2

0x0001,

0xfce8,	// (0x0003bfb4) sctrl_sk_top_pane_g

0xd78d,	// (0x00039a59) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd78d,	// (0x00039a59) aid_fep_china_hwr2_fs_cell

0xd79f,	// (0x00039a6b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd79f,	// (0x00039a6b) bg_popup_fep_shadow_pane_cp4

0xd7b6,	// (0x00039a82) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7b6,	// (0x00039a82) bg_popup_fep_shadow_pane_cp5

0xd7c8,	// (0x00039a94) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7c8,	// (0x00039a94) popup_fep_china_hwr2_fs_control_bar_grid

0xd7d8,	// (0x00039aa4) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7e0,	// (0x00039aac) aid_fep_china_hwr2_fs_candi_cell

0x2959,	// (0x0002ec25) bg_popup_fep_shadow_pane_cp6

0xd7ea,	// (0x00039ab6) popup_fep_china_hwr2_fs_candidate_grid

0xd7f4,	// (0x00039ac0) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7f4,	// (0x00039ac0) cell_fep_china_hwr2_fs_funtion_grid

0xc022,	// (0x000382ee) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd80c,	// (0x00039ad8) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd80c,	// (0x00039ad8) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd81a,	// (0x00039ae6) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd81a,	// (0x00039ae6) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd03,	// (0x0003bfcf) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd03,	// (0x0003bfcf) cell_fep_china_hwr2_fs_funtion_grid_g

0xd830,	// (0x00039afc) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd830,	// (0x00039afc) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd845,	// (0x00039b11) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd845,	// (0x00039b11) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd08,	// (0x0003bfd4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd08,	// (0x0003bfd4) cell_fep_china_hwr2_fs_funtion_grid_t

0xd861,	// (0x00039b2d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd869,	// (0x00039b35) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd871,	// (0x00039b3d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0d,	// (0x0003bfd9) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd879,	// (0x00039b45) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd879,	// (0x00039b45) cell_fep_china_hwr2_fs_candidate_grid

0xd892,	// (0x00039b5e) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd89a,	// (0x00039b66) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc022,	// (0x000382ee) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc022,	// (0x000382ee) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb21,	// (0x0003bded) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8a2,	// (0x00039b6e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95c5,	// (0x00035891) clock_nsta_pane_cp_24_ParamLimits

0x95c5,	// (0x00035891) clock_nsta_pane_cp_24

0x9643,	// (0x0003590f) indicator_nsta_pane_cp_24_ParamLimits

0x9643,	// (0x0003590f) indicator_nsta_pane_cp_24

0xa6de,	// (0x000369aa) heading_pane_g1

0x0001,

0xf8a6,	// (0x0003bb72) heading_pane_g

0xb138,	// (0x00037404) grid_sct_catagory_button_pane

0xb168,	// (0x00037434) scroll_pane_cp5_ParamLimits

0xbc1f,	// (0x00037eeb) button_value_adjust_pane_cp5_ParamLimits

0xbc1f,	// (0x00037eeb) button_value_adjust_pane_cp5

0xbcfe,	// (0x00037fca) form2_midp_time_pane_ParamLimits

0xd8b0,	// (0x00039b7c) cell_sct_catagory_button_pane_ParamLimits

0xd8b0,	// (0x00039b7c) cell_sct_catagory_button_pane

0xbfe7,	// (0x000382b3) bg_button_pane_cp01_ParamLimits

0xbfe7,	// (0x000382b3) bg_button_pane_cp01

0xc022,	// (0x000382ee) cell_sct_catagory_button_pane_g1

0x5ae0,	// (0x00031dac) popup_tb_extension_window

0xd8c2,	// (0x00039b8e) aid_size_cell_ext_ParamLimits

0xd8c2,	// (0x00039b8e) aid_size_cell_ext

0x7c51,	// (0x00033f1d) bg_tb_trans_pane_cp1_ParamLimits

0x7c51,	// (0x00033f1d) bg_tb_trans_pane_cp1

0xd8e2,	// (0x00039bae) grid_tb_ext_pane_ParamLimits

0xd8e2,	// (0x00039bae) grid_tb_ext_pane

0xd910,	// (0x00039bdc) cell_tb_ext_pane_ParamLimits

0xd910,	// (0x00039bdc) cell_tb_ext_pane

0xd927,	// (0x00039bf3) cell_tb_ext_pane_g1_ParamLimits

0xd927,	// (0x00039bf3) cell_tb_ext_pane_g1

0xd944,	// (0x00039c10) cell_tb_ext_pane_t1

0x7c51,	// (0x00033f1d) list_highlight_pane_cp11_ParamLimits

0x7c51,	// (0x00033f1d) list_highlight_pane_cp11

0x47d0,	// (0x00030a9c) popup_uni_indicator_window_ParamLimits

0x47d0,	// (0x00030a9c) popup_uni_indicator_window

0x8255,	// (0x00034521) bg_popup_sub_pane_cp14

0xd95f,	// (0x00039c2b) list_uniindi_pane

0xd96b,	// (0x00039c37) uniindi_top_pane

0x7c51,	// (0x00033f1d) bg_uniindi_top_pane

0xd98a,	// (0x00039c56) uniindi_top_pane_g1

0xd9a0,	// (0x00039c6c) uniindi_top_pane_g2

0x0003,

0xfd14,	// (0x0003bfe0) uniindi_top_pane_g

0xd9ca,	// (0x00039c96) uniindi_top_pane_t1

0xd9f4,	// (0x00039cc0) list_single_uniindi_pane_ParamLimits

0xd9f4,	// (0x00039cc0) list_single_uniindi_pane

0xc022,	// (0x000382ee) bg_uniindi_top_pane_g1

0xda07,	// (0x00039cd3) list_single_uniindi_pane_g1

0xda1a,	// (0x00039ce6) list_single_uniindi_pane_t1

0x4646,	// (0x00030912) control_bg_pane

0xda3f,	// (0x00039d0b) bg_sctrl_sk_pane_cp1

0xda48,	// (0x00039d14) bg_sctrl_sk_pane_cp2

0xda51,	// (0x00039d1d) control_bg_pane_g1

0xda5a,	// (0x00039d26) control_bg_pane_g2

0x0001,

0xfd1d,	// (0x0003bfe9) control_bg_pane_g

0xba69,	// (0x00037d35) cell_indicator_nsta_pane_g1_ParamLimits

0xba77,	// (0x00037d43) cell_indicator_nsta_pane_g2_ParamLimits

0xfa85,	// (0x0003bd51) cell_indicator_nsta_pane_g_ParamLimits

0x667f,	// (0x0003294b) form2_midp_time_pane_t1_ParamLimits

0x5668,	// (0x00031934) main_idle_act4_pane_ParamLimits

0x5668,	// (0x00031934) main_idle_act4_pane

0x5ae0,	// (0x00031dac) popup_tb_extension_window_ParamLimits

0xd900,	// (0x00039bcc) tb_ext_find_pane_ParamLimits

0xd900,	// (0x00039bcc) tb_ext_find_pane

0xda63,	// (0x00039d2f) ai_gene_pane_1_cp1

0x92c8,	// (0x00035594) ai_gene_pane_2_cp1

0xda6b,	// (0x00039d37) list_single_idle_plugin_calendar_pane

0xda74,	// (0x00039d40) list_single_idle_plugin_notification_pane

0xda7d,	// (0x00039d49) list_single_idle_plugin_player_pane

0xda86,	// (0x00039d52) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda86,	// (0x00039d52) list_single_idle_plugin_shortcut_pane

0xdaa8,	// (0x00039d74) main_idle_act4_pane_t1

0xdaba,	// (0x00039d86) main_idle_act4_pane_t2

0x0001,

0xfd22,	// (0x0003bfee) main_idle_act4_pane_t

0xdacc,	// (0x00039d98) middle_sk_idle_act4_pane_ParamLimits

0xdacc,	// (0x00039d98) middle_sk_idle_act4_pane

0xdae2,	// (0x00039dae) popup_clock_digital_analogue_window_cp2

0xdafc,	// (0x00039dc8) shortcut_wheel_idle_act4_pane_ParamLimits

0xdafc,	// (0x00039dc8) shortcut_wheel_idle_act4_pane

0xc022,	// (0x000382ee) shortcut_wheel_idle_act4_pane_g1

0xc022,	// (0x000382ee) shortcut_wheel_idle_act4_pane_g2

0xc022,	// (0x000382ee) shortcut_wheel_idle_act4_pane_g3

0xc022,	// (0x000382ee) shortcut_wheel_idle_act4_pane_g4

0xc022,	// (0x000382ee) shortcut_wheel_idle_act4_pane_g5

0xdb10,	// (0x00039ddc) shortcut_wheel_idle_act4_pane_g6

0xdb18,	// (0x00039de4) shortcut_wheel_idle_act4_pane_g7

0xdb20,	// (0x00039dec) shortcut_wheel_idle_act4_pane_g8

0xdb28,	// (0x00039df4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd27,	// (0x0003bff3) shortcut_wheel_idle_act4_pane_g

0xc2a0,	// (0x0003856c) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2a0,	// (0x0003856c) middle_sk_idle_act4_pane_g1

0xdb8c,	// (0x00039e58) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb8c,	// (0x00039e58) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4a,	// (0x0003c016) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4a,	// (0x0003c016) middle_sk_idle_act4_pane_g

0xdb98,	// (0x00039e64) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb98,	// (0x00039e64) middle_sk_idle_act4_pane_t1

0xdbb5,	// (0x00039e81) grid_ai_shortcut_pane_ParamLimits

0xdbb5,	// (0x00039e81) grid_ai_shortcut_pane

0xdbce,	// (0x00039e9a) list_highlight_pane_cp16_ParamLimits

0xdbce,	// (0x00039e9a) list_highlight_pane_cp16

0xdbdb,	// (0x00039ea7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbdb,	// (0x00039ea7) list_single_idle_plugin_shortcut_pane_g1

0xdbe7,	// (0x00039eb3) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbe7,	// (0x00039eb3) list_single_idle_plugin_shortcut_pane_g2

0xdbff,	// (0x00039ecb) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbff,	// (0x00039ecb) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4f,	// (0x0003c01b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4f,	// (0x0003c01b) list_single_idle_plugin_shortcut_pane_g

0xdc12,	// (0x00039ede) cell_ai_shortcut_pane_ParamLimits

0xdc12,	// (0x00039ede) cell_ai_shortcut_pane

0xdc36,	// (0x00039f02) cell_ai_shortcut_pane_g1_ParamLimits

0xdc36,	// (0x00039f02) cell_ai_shortcut_pane_g1

0xda63,	// (0x00039d2f) ai_gene_pane_1_cp2

0xdc58,	// (0x00039f24) ai_gene_pane_2_cp2

0xdc60,	// (0x00039f2c) list_highlight_pane_cp15

0xdc69,	// (0x00039f35) list_single_idle_plugin_calendar_pane_g1

0xdc60,	// (0x00039f2c) list_highlight_pane_cp17

0xdc71,	// (0x00039f3d) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc79,	// (0x00039f45) list_single_idle_plugin_player_pane_g1

0xb391,	// (0x0003765d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd56,	// (0x0003c022) list_single_idle_plugin_player_pane_g

0xdc81,	// (0x00039f4d) list_single_idle_plugin_player_pane_t1

0xdc8f,	// (0x00039f5b) list_single_idle_plugin_player_pane_t2

0xdc9d,	// (0x00039f69) list_single_idle_plugin_player_pane_t3

0xdcab,	// (0x00039f77) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5b,	// (0x0003c027) list_single_idle_plugin_player_pane_t

0xdcb9,	// (0x00039f85) wait_bar_pane_cp15

0xdcc1,	// (0x00039f8d) grid_ai_notification_pane

0xb391,	// (0x0003765d) list_single_idle_plugin_notification_pane_g1

0xdcca,	// (0x00039f96) cell_ai_notification_pane_ParamLimits

0xdcca,	// (0x00039f96) cell_ai_notification_pane

0xdcd7,	// (0x00039fa3) cell_ai_notification_pane_g1

0xdcdf,	// (0x00039fab) cell_ai_notification_pane_t1

0xdced,	// (0x00039fb9) tb_ext_find_button_pane

0xdcf5,	// (0x00039fc1) tb_ext_find_pane_g1

0xdcfd,	// (0x00039fc9) tb_ext_find_pane_t1

0x8b54,	// (0x00034e20) tb_ext_find_button_pane_g1

0xdd0b,	// (0x00039fd7) tb_ext_find_button_pane_g2

0x0001,

0xfd64,	// (0x0003c030) tb_ext_find_button_pane_g

0xdaa8,	// (0x00039d74) main_idle_act4_pane_t1_ParamLimits

0xdaba,	// (0x00039d86) main_idle_act4_pane_t2_ParamLimits

0xfd22,	// (0x0003bfee) main_idle_act4_pane_t_ParamLimits

0xdae2,	// (0x00039dae) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaf0,	// (0x00039dbc) sat_plugin_idle_act4_pane_ParamLimits

0xdaf0,	// (0x00039dbc) sat_plugin_idle_act4_pane

0xdd14,	// (0x00039fe0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd14,	// (0x00039fe0) sat_plugin_idle_act4_pane_t1

0xdd27,	// (0x00039ff3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd27,	// (0x00039ff3) sat_plugin_idle_act4_pane_t2

0xdd3a,	// (0x0003a006) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd3a,	// (0x0003a006) sat_plugin_idle_act4_pane_t3

0xdd4d,	// (0x0003a019) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd4d,	// (0x0003a019) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd69,	// (0x0003c035) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd69,	// (0x0003c035) sat_plugin_idle_act4_pane_t

0x470b,	// (0x000309d7) popup_battery_window_ParamLimits

0x470b,	// (0x000309d7) popup_battery_window

0x7c51,	// (0x00033f1d) bg_popup_sub_pane_cp25_ParamLimits

0x7c51,	// (0x00033f1d) bg_popup_sub_pane_cp25

0xdd60,	// (0x0003a02c) popup_battery_window_g1_ParamLimits

0xdd60,	// (0x0003a02c) popup_battery_window_g1

0xdd6c,	// (0x0003a038) popup_battery_window_t1_ParamLimits

0xdd6c,	// (0x0003a038) popup_battery_window_t1

0xdd7e,	// (0x0003a04a) popup_battery_window_t2_ParamLimits

0xdd7e,	// (0x0003a04a) popup_battery_window_t2

0x0001,

0xfd72,	// (0x0003c03e) popup_battery_window_t_ParamLimits

0xfd72,	// (0x0003c03e) popup_battery_window_t

0x9195,	// (0x00035461) midp_canvas_pane_ParamLimits

0x920c,	// (0x000354d8) midp_keypad_pane_ParamLimits

0x920c,	// (0x000354d8) midp_keypad_pane

0x94a5,	// (0x00035771) main_midp_pane_ParamLimits

0xbae3,	// (0x00037daf) signal_pane_g2_cp_ParamLimits

0xdd9b,	// (0x0003a067) aid_size_cell_midp_keypad_ParamLimits

0xdd9b,	// (0x0003a067) aid_size_cell_midp_keypad

0xddb5,	// (0x0003a081) midp_keyp_game_grid_pane_ParamLimits

0xddb5,	// (0x0003a081) midp_keyp_game_grid_pane

0xddd5,	// (0x0003a0a1) midp_keyp_rocker_pane_ParamLimits

0xddd5,	// (0x0003a0a1) midp_keyp_rocker_pane

0xde0e,	// (0x0003a0da) midp_keyp_sk_left_pane_ParamLimits

0xde0e,	// (0x0003a0da) midp_keyp_sk_left_pane

0xde68,	// (0x0003a134) midp_keyp_sk_right_pane_ParamLimits

0xde68,	// (0x0003a134) midp_keyp_sk_right_pane

0x2959,	// (0x0002ec25) bg_button_pane_cp03

0xdec2,	// (0x0003a18e) midp_keyp_sk_left_pane_g1

0x2959,	// (0x0002ec25) bg_button_pane_cp04

0xdec2,	// (0x0003a18e) midp_keyp_sk_right_pane_g1

0xc022,	// (0x000382ee) midp_keyp_rocker_pane_g1

0xdecb,	// (0x0003a197) keyp_game_cell_pane_ParamLimits

0xdecb,	// (0x0003a197) keyp_game_cell_pane

0x2959,	// (0x0002ec25) bg_button_pane_cp02

0xdede,	// (0x0003a1aa) keyp_game_cell_pane_g1

0x474f,	// (0x00030a1b) popup_fep_vkb2_window_ParamLimits

0x474f,	// (0x00030a1b) popup_fep_vkb2_window

0x6ce5,	// (0x00032fb1) aid_size_cell_vkb2_ParamLimits

0x6ce5,	// (0x00032fb1) aid_size_cell_vkb2

0x6d31,	// (0x00032ffd) popup_fep_vkb2_window_g1_ParamLimits

0x6d31,	// (0x00032ffd) popup_fep_vkb2_window_g1

0x6d79,	// (0x00033045) vkb2_area_bottom_pane_ParamLimits

0x6d79,	// (0x00033045) vkb2_area_bottom_pane

0x6dc5,	// (0x00033091) vkb2_area_keypad_pane_ParamLimits

0x6dc5,	// (0x00033091) vkb2_area_keypad_pane

0x6e07,	// (0x000330d3) vkb2_area_top_pane_ParamLimits

0x6e07,	// (0x000330d3) vkb2_area_top_pane

0x6e86,	// (0x00033152) vkb2_top_entry_pane_ParamLimits

0x6e86,	// (0x00033152) vkb2_top_entry_pane

0x6eb0,	// (0x0003317c) vkb2_top_grid_left_pane_ParamLimits

0x6eb0,	// (0x0003317c) vkb2_top_grid_left_pane

0x6ecf,	// (0x0003319b) vkb2_top_grid_right_pane_ParamLimits

0x6ecf,	// (0x0003319b) vkb2_top_grid_right_pane

0x6eee,	// (0x000331ba) vkb2_cell_keypad_pane_ParamLimits

0x6eee,	// (0x000331ba) vkb2_cell_keypad_pane

0x6fbf,	// (0x0003328b) vkb2_area_bottom_grid_pane_ParamLimits

0x6fbf,	// (0x0003328b) vkb2_area_bottom_grid_pane

0x6fe5,	// (0x000332b1) vkb2_area_bottom_pane_g1_ParamLimits

0x6fe5,	// (0x000332b1) vkb2_area_bottom_pane_g1

0x7009,	// (0x000332d5) vkb2_area_bottom_pane_g2_ParamLimits

0x7009,	// (0x000332d5) vkb2_area_bottom_pane_g2

0x7037,	// (0x00033303) vkb2_area_bottom_pane_g3_ParamLimits

0x7037,	// (0x00033303) vkb2_area_bottom_pane_g3

0x0002,

0xfd77,	// (0x0003c043) vkb2_area_bottom_pane_g_ParamLimits

0xfd77,	// (0x0003c043) vkb2_area_bottom_pane_g

0x7098,	// (0x00033364) vkb2_top_cell_left_pane_ParamLimits

0x7098,	// (0x00033364) vkb2_top_cell_left_pane

0xdeef,	// (0x0003a1bb) vkb2_top_entry_pane_g1_ParamLimits

0xdeef,	// (0x0003a1bb) vkb2_top_entry_pane_g1

0xdefd,	// (0x0003a1c9) vkb2_top_entry_pane_t1_ParamLimits

0xdefd,	// (0x0003a1c9) vkb2_top_entry_pane_t1

0xdf2f,	// (0x0003a1fb) vkb2_top_entry_pane_t2_ParamLimits

0xdf2f,	// (0x0003a1fb) vkb2_top_entry_pane_t2

0xdf61,	// (0x0003a22d) vkb2_top_entry_pane_t3_ParamLimits

0xdf61,	// (0x0003a22d) vkb2_top_entry_pane_t3

0x0002,

0xfd7e,	// (0x0003c04a) vkb2_top_entry_pane_t_ParamLimits

0xfd7e,	// (0x0003c04a) vkb2_top_entry_pane_t

0x70e5,	// (0x000333b1) vkb2_top_grid_right_pane_g1_ParamLimits

0x70e5,	// (0x000333b1) vkb2_top_grid_right_pane_g1

0x70fb,	// (0x000333c7) vkb2_top_grid_right_pane_g2_ParamLimits

0x70fb,	// (0x000333c7) vkb2_top_grid_right_pane_g2

0x7113,	// (0x000333df) vkb2_top_grid_right_pane_g3_ParamLimits

0x7113,	// (0x000333df) vkb2_top_grid_right_pane_g3

0x712b,	// (0x000333f7) vkb2_top_grid_right_pane_g4_ParamLimits

0x712b,	// (0x000333f7) vkb2_top_grid_right_pane_g4

0x0003,

0xfd85,	// (0x0003c051) vkb2_top_grid_right_pane_g_ParamLimits

0xfd85,	// (0x0003c051) vkb2_top_grid_right_pane_g

0x7141,	// (0x0003340d) vkb2_top_cell_left_pane_g1

0x7158,	// (0x00033424) vkb2_cell_keypad_pane_g1_ParamLimits

0x7158,	// (0x00033424) vkb2_cell_keypad_pane_g1

0xdf85,	// (0x0003a251) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf85,	// (0x0003a251) vkb2_cell_keypad_pane_t1

0x7166,	// (0x00033432) vkb2_cell_bottom_grid_pane_ParamLimits

0x7166,	// (0x00033432) vkb2_cell_bottom_grid_pane

0x719f,	// (0x0003346b) vkb2_cell_bottom_grid_pane_g1

0xdb30,	// (0x00039dfc) aid_call2_pane_cp02

0xdb38,	// (0x00039e04) aid_call_pane_cp02

0xdb40,	// (0x00039e0c) clock_digital_number_pane_cp10

0xdb48,	// (0x00039e14) clock_digital_number_pane_cp11

0xdb50,	// (0x00039e1c) clock_digital_number_pane_cp12

0xdb58,	// (0x00039e24) clock_digital_number_pane_cp13

0xdb60,	// (0x00039e2c) clock_digital_separator_pane_cp10

0x8b54,	// (0x00034e20) popup_clock_digital_analogue_window_cp2_g1

0x8b54,	// (0x00034e20) popup_clock_digital_analogue_window_cp2_g2

0xdb68,	// (0x00039e34) popup_clock_digital_analogue_window_cp2_g3

0x8b54,	// (0x00034e20) popup_clock_digital_analogue_window_cp2_g4

0xdb68,	// (0x00039e34) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3a,	// (0x0003c006) popup_clock_digital_analogue_window_cp2_g

0xdb70,	// (0x00039e3c) popup_clock_digital_analogue_window_cp2_t1

0xdb7e,	// (0x00039e4a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd45,	// (0x0003c011) popup_clock_digital_analogue_window_cp2_t

0xc022,	// (0x000382ee) clock_digital_number_pane_cp10_g1

0xc022,	// (0x000382ee) clock_digital_number_pane_cp10_g2

0x0001,

0xfb21,	// (0x0003bded) clock_digital_number_pane_cp10_g

0xc022,	// (0x000382ee) clock_digital_separator_pane_cp10_g1

0xc022,	// (0x000382ee) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb21,	// (0x0003bded) clock_digital_separator_pane_cp10_g

0xd9ac,	// (0x00039c78) uniindi_top_pane_g3

0xd9bd,	// (0x00039c89) uniindi_top_pane_g4

0x6f79,	// (0x00033245) vkb2_row_keypad_pane_ParamLimits

0x6f79,	// (0x00033245) vkb2_row_keypad_pane

0x71bf,	// (0x0003348b) vkb2_cell_t_keypad_pane_ParamLimits

0x71bf,	// (0x0003348b) vkb2_cell_t_keypad_pane

0x71cf,	// (0x0003349b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x71cf,	// (0x0003349b) vkb2_cell_t_keypad_pane_cp08

0x71e2,	// (0x000334ae) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x71e2,	// (0x000334ae) vkb2_cell_t_keypad_pane_cp09

0x71f6,	// (0x000334c2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x71f6,	// (0x000334c2) vkb2_cell_t_keypad_pane_cp01

0x7207,	// (0x000334d3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7207,	// (0x000334d3) vkb2_cell_t_keypad_pane_cp02

0x7218,	// (0x000334e4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7218,	// (0x000334e4) vkb2_cell_t_keypad_pane_cp03

0x7229,	// (0x000334f5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7229,	// (0x000334f5) vkb2_cell_t_keypad_pane_cp04

0x723a,	// (0x00033506) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x723a,	// (0x00033506) vkb2_cell_t_keypad_pane_cp05

0x724b,	// (0x00033517) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x724b,	// (0x00033517) vkb2_cell_t_keypad_pane_cp06

0x725c,	// (0x00033528) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x725c,	// (0x00033528) vkb2_cell_t_keypad_pane_cp07

0x726d,	// (0x00033539) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x726d,	// (0x00033539) vkb2_cell_t_keypad_pane_cp10

0x68f7,	// (0x00032bc3) vkb2_cell_t_keypad_pane_g1

0xdf9c,	// (0x0003a268) vkb2_cell_t_keypad_pane_t1

0x4646,	// (0x00030912) popup_grid_graphic2_window

0xdfae,	// (0x0003a27a) aid_size_cell_graphic2_ParamLimits

0xdfae,	// (0x0003a27a) aid_size_cell_graphic2

0xdfe6,	// (0x0003a2b2) bg_popup_window_pane_cp21_ParamLimits

0xdfe6,	// (0x0003a2b2) bg_popup_window_pane_cp21

0xdff4,	// (0x0003a2c0) graphic2_pages_pane_ParamLimits

0xdff4,	// (0x0003a2c0) graphic2_pages_pane

0xe03a,	// (0x0003a306) grid_graphic2_control_pane_ParamLimits

0xe03a,	// (0x0003a306) grid_graphic2_control_pane

0xe078,	// (0x0003a344) grid_graphic2_pane_ParamLimits

0xe078,	// (0x0003a344) grid_graphic2_pane

0xe0ec,	// (0x0003a3b8) cell_graphic2_pane

0x4646,	// (0x00030912) main_comp_mode_pane

0xd1f7,	// (0x000394c3) list_ai3_gene_pane_ParamLimits

0xd5ee,	// (0x000398ba) bg_popup_window_pane_cp19_ParamLimits

0xd5fa,	// (0x000398c6) bg_touch_area_indi_pane_ParamLimits

0xd5fa,	// (0x000398c6) bg_touch_area_indi_pane

0xd610,	// (0x000398dc) bg_touch_area_indi_pane_cp01_ParamLimits

0xd610,	// (0x000398dc) bg_touch_area_indi_pane_cp01

0xd626,	// (0x000398f2) bg_touch_area_indi_pane_cp02_ParamLimits

0xd626,	// (0x000398f2) bg_touch_area_indi_pane_cp02

0xd63c,	// (0x00039908) bg_touch_area_indi_pane_cp03_ParamLimits

0xd63c,	// (0x00039908) bg_touch_area_indi_pane_cp03

0xd656,	// (0x00039922) popup_slider_window_g1_ParamLimits

0xd672,	// (0x0003993e) popup_slider_window_g2_ParamLimits

0xd68e,	// (0x0003995a) popup_slider_window_g3_ParamLimits

0xfccf,	// (0x0003bf9b) popup_slider_window_g_ParamLimits

0xd6f4,	// (0x000399c0) popup_slider_window_t1_ParamLimits

0xd768,	// (0x00039a34) small_volume_slider_vertical_pane_ParamLimits

0xe0ec,	// (0x0003a3b8) cell_graphic2_pane_ParamLimits

0xe13b,	// (0x0003a407) bg_button_pane_cp10_ParamLimits

0xe13b,	// (0x0003a407) bg_button_pane_cp10

0xe14e,	// (0x0003a41a) bg_button_pane_cp11_ParamLimits

0xe14e,	// (0x0003a41a) bg_button_pane_cp11

0xe161,	// (0x0003a42d) graphic2_pages_pane_g1_ParamLimits

0xe161,	// (0x0003a42d) graphic2_pages_pane_g1

0xe17c,	// (0x0003a448) graphic2_pages_pane_g2_ParamLimits

0xe17c,	// (0x0003a448) graphic2_pages_pane_g2

0x0001,

0xfd93,	// (0x0003c05f) graphic2_pages_pane_g_ParamLimits

0xfd93,	// (0x0003c05f) graphic2_pages_pane_g

0xe194,	// (0x0003a460) graphic2_pages_pane_t1_ParamLimits

0xe194,	// (0x0003a460) graphic2_pages_pane_t1

0xe1ac,	// (0x0003a478) cell_graphic2_control_pane_ParamLimits

0xe1ac,	// (0x0003a478) cell_graphic2_control_pane

0xe1ca,	// (0x0003a496) cell_graphic2_pane_g1_ParamLimits

0xe1ca,	// (0x0003a496) cell_graphic2_pane_g1

0xe1d7,	// (0x0003a4a3) cell_graphic2_pane_g2_ParamLimits

0xe1d7,	// (0x0003a4a3) cell_graphic2_pane_g2

0xe1e4,	// (0x0003a4b0) cell_graphic2_pane_g3_ParamLimits

0xe1e4,	// (0x0003a4b0) cell_graphic2_pane_g3

0xe1f1,	// (0x0003a4bd) cell_graphic2_pane_g4_ParamLimits

0xe1f1,	// (0x0003a4bd) cell_graphic2_pane_g4

0xe1fe,	// (0x0003a4ca) cell_graphic2_pane_g5_ParamLimits

0xe1fe,	// (0x0003a4ca) cell_graphic2_pane_g5

0x0004,

0xfd98,	// (0x0003c064) cell_graphic2_pane_g_ParamLimits

0xfd98,	// (0x0003c064) cell_graphic2_pane_g

0xe217,	// (0x0003a4e3) cell_graphic2_pane_t1_ParamLimits

0xe217,	// (0x0003a4e3) cell_graphic2_pane_t1

0x9a43,	// (0x00035d0f) grid_highlight_pane_cp11_ParamLimits

0x9a43,	// (0x00035d0f) grid_highlight_pane_cp11

0x7c51,	// (0x00033f1d) bg_button_pane_cp05

0xe24d,	// (0x0003a519) cell_graphic2_control_pane_g1

0xc022,	// (0x000382ee) bg_touch_area_indi_pane_g1

0xe275,	// (0x0003a541) aid_cmod_rocker_key_size

0xe27f,	// (0x0003a54b) aid_cmode_itu_key_size

0xe289,	// (0x0003a555) main_cmode_video_pane

0xe293,	// (0x0003a55f) main_comp_mode_itu_pane

0xe29f,	// (0x0003a56b) main_comp_mode_rocker_pane

0xe2ab,	// (0x0003a577) cell_cmode_rocker_pane_ParamLimits

0xe2ab,	// (0x0003a577) cell_cmode_rocker_pane

0xe2bd,	// (0x0003a589) cell_cmode_itu_pane_ParamLimits

0xe2bd,	// (0x0003a589) cell_cmode_itu_pane

0x8255,	// (0x00034521) bg_button_pane_cp06_ParamLimits

0x8255,	// (0x00034521) bg_button_pane_cp06

0xc2a0,	// (0x0003856c) cell_cmode_rocker_pane_g1_ParamLimits

0xc2a0,	// (0x0003856c) cell_cmode_rocker_pane_g1

0xd80c,	// (0x00039ad8) cell_cmode_rocker_pane_g2_ParamLimits

0xd80c,	// (0x00039ad8) cell_cmode_rocker_pane_g2

0x0001,

0xfda8,	// (0x0003c074) cell_cmode_rocker_pane_g_ParamLimits

0xfda8,	// (0x0003c074) cell_cmode_rocker_pane_g

0x2959,	// (0x0002ec25) bg_button_pane_cp07

0xe2d2,	// (0x0003a59e) cell_cmode_itu_pane_g1

0xe2db,	// (0x0003a5a7) cell_cmode_itu_pane_t1

0xe2e9,	// (0x0003a5b5) cell_cmode_itu_pane_t2

0x0001,

0xfdad,	// (0x0003c079) cell_cmode_itu_pane_t

0xda2f,	// (0x00039cfb) aid_touch_ctrl_left

0xda37,	// (0x00039d03) aid_touch_ctrl_right

0x2959,	// (0x0002ec25) compa_mode_pane

0xe2f7,	// (0x0003a5c3) aid_cmod_rocker_key_size_cp

0xe301,	// (0x0003a5cd) aid_cmode_itu_key_size_cp

0xe30b,	// (0x0003a5d7) compa_mode_pane_g1

0xe313,	// (0x0003a5df) compa_mode_pane_g2

0xe31b,	// (0x0003a5e7) compa_mode_pane_g3

0x0002,

0xfdb2,	// (0x0003c07e) compa_mode_pane_g

0xe323,	// (0x0003a5ef) main_comp_mode_itu_pane_cp

0xe32b,	// (0x0003a5f7) main_comp_mode_rocker_pane_cp

0xe333,	// (0x0003a5ff) cell_cmode_itu_pane_cp_ParamLimits

0xe333,	// (0x0003a5ff) cell_cmode_itu_pane_cp

0xe348,	// (0x0003a614) cell_cmode_rocker_pane_cp_ParamLimits

0xe348,	// (0x0003a614) cell_cmode_rocker_pane_cp

0x8255,	// (0x00034521) bg_button_pane_cp06_cp_ParamLimits

0x8255,	// (0x00034521) bg_button_pane_cp06_cp

0xc2a0,	// (0x0003856c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2a0,	// (0x0003856c) cell_cmode_rocker_pane_g1_cp

0xc022,	// (0x000382ee) cell_cmode_rocker_pane_g2_cp

0x2959,	// (0x0002ec25) bg_button_pane_cp07_cp

0xaf1d,	// (0x000371e9) cell_cmode_itu_pane_g1_cp

0xe35a,	// (0x0003a626) cell_cmode_itu_pane_t1_cp

0xe35a,	// (0x0003a626) cell_cmode_itu_pane_t2_cp

0xaf0a,	// (0x000371d6) settings_code_pane_cp2

0x79c8,	// (0x00033c94) bg_popup_window_pane_cp3_ParamLimits

0x7e51,	// (0x0003411d) heading_pane_cp3_ParamLimits

0x7e60,	// (0x0003412c) listscroll_popup_graphic_pane_ParamLimits

0x66a0,	// (0x0003296c) fep_hwr_aid_pane_ParamLimits

0x6c40,	// (0x00032f0c) aid_touch_sctrl_top_ParamLimits

0x6c5b,	// (0x00032f27) sctrl_sk_top_pane_g1_ParamLimits

0x68f7,	// (0x00032bc3) sctrl_sk_top_pane_g2_ParamLimits

0xfce8,	// (0x0003bfb4) sctrl_sk_top_pane_g_ParamLimits

0x6c68,	// (0x00032f34) sctrl_sk_top_pane_t1_ParamLimits

0x6c40,	// (0x00032f0c) aid_touch_sctrl_bottom_ParamLimits

0x6c68,	// (0x00032f34) sctrl_sk_bottom_pane_t1_ParamLimits

0xd978,	// (0x00039c44) aid_area_touch_clock

0x6e4d,	// (0x00033119) aid_vkb2_area_top_pane_cell_ParamLimits

0x6e4d,	// (0x00033119) aid_vkb2_area_top_pane_cell

0x6f9b,	// (0x00033267) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6f9b,	// (0x00033267) aid_vkb2_area_bottom_pane_cell

0xdee7,	// (0x0003a1b3) popup_char_count_window

0xe368,	// (0x0003a634) popup_char_count_window_g1

0xe371,	// (0x0003a63d) popup_char_count_window_g2

0xe37a,	// (0x0003a646) popup_char_count_window_g3

0x0002,

0xfdb9,	// (0x0003c085) popup_char_count_window_g

0xe383,	// (0x0003a64f) popup_char_count_window_t1

0x6d0f,	// (0x00032fdb) popup_fep_char_preview_window_ParamLimits

0x6d0f,	// (0x00032fdb) popup_fep_char_preview_window

0x6e6b,	// (0x00033137) vkb2_top_candi_pane_ParamLimits

0x6e6b,	// (0x00033137) vkb2_top_candi_pane

0xe391,	// (0x0003a65d) cell_vkb2_top_candi_pane_ParamLimits

0xe391,	// (0x0003a65d) cell_vkb2_top_candi_pane

0x7282,	// (0x0003354e) bg_popup_fep_char_preview_window_ParamLimits

0x7282,	// (0x0003354e) bg_popup_fep_char_preview_window

0x7290,	// (0x0003355c) popup_fep_char_preview_window_t1_ParamLimits

0x7290,	// (0x0003355c) popup_fep_char_preview_window_t1

0xe3db,	// (0x0003a6a7) bg_popup_fep_char_preview_window_g1

0xe3e3,	// (0x0003a6af) bg_popup_fep_char_preview_window_g2

0xe3eb,	// (0x0003a6b7) bg_popup_fep_char_preview_window_g3

0xe3f3,	// (0x0003a6bf) bg_popup_fep_char_preview_window_g4

0xe3fb,	// (0x0003a6c7) bg_popup_fep_char_preview_window_g5

0xe403,	// (0x0003a6cf) bg_popup_fep_char_preview_window_g6

0xe40b,	// (0x0003a6d7) bg_popup_fep_char_preview_window_g7

0xe413,	// (0x0003a6df) bg_popup_fep_char_preview_window_g8

0xe41b,	// (0x0003a6e7) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc0,	// (0x0003c08c) bg_popup_fep_char_preview_window_g

0x68f7,	// (0x00032bc3) cell_vkb2_top_candi_pane_g1_ParamLimits

0x68f7,	// (0x00032bc3) cell_vkb2_top_candi_pane_g1

0x6905,	// (0x00032bd1) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6905,	// (0x00032bd1) cell_vkb2_top_candi_pane_g2

0xd583,	// (0x0003984f) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd583,	// (0x0003984f) cell_vkb2_top_candi_pane_g3

0x72d2,	// (0x0003359e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x72d2,	// (0x0003359e) cell_vkb2_top_candi_pane_g4

0xc5f3,	// (0x000388bf) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc5f3,	// (0x000388bf) cell_vkb2_top_candi_pane_g5

0x72f3,	// (0x000335bf) cell_vkb2_top_candi_pane_g6_ParamLimits

0x72f3,	// (0x000335bf) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd5,	// (0x0003c0a1) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd5,	// (0x0003c0a1) cell_vkb2_top_candi_pane_g

0x7301,	// (0x000335cd) cell_vkb2_top_candi_pane_t1

0x606e,	// (0x0003233a) aid_size_touch_slider_mark_ParamLimits

0x606e,	// (0x0003233a) aid_size_touch_slider_mark

0xe02a,	// (0x0003a2f6) grid_graphic2_catg_pane_ParamLimits

0xe02a,	// (0x0003a2f6) grid_graphic2_catg_pane

0xe0c8,	// (0x0003a394) popup_grid_graphic2_window_t1_ParamLimits

0xe0c8,	// (0x0003a394) popup_grid_graphic2_window_t1

0xe0da,	// (0x0003a3a6) popup_grid_graphic2_window_t2_ParamLimits

0xe0da,	// (0x0003a3a6) popup_grid_graphic2_window_t2

0x0001,

0xfd8e,	// (0x0003c05a) popup_grid_graphic2_window_t_ParamLimits

0xfd8e,	// (0x0003c05a) popup_grid_graphic2_window_t

0x7c51,	// (0x00033f1d) bg_button_pane_cp05_ParamLimits

0xe24d,	// (0x0003a519) cell_graphic2_control_pane_g1_ParamLimits

0xe423,	// (0x0003a6ef) cell_graphic2_catg_pane_ParamLimits

0xe423,	// (0x0003a6ef) cell_graphic2_catg_pane

0x2959,	// (0x0002ec25) bg_button_pane_cp12

0xe435,	// (0x0003a701) cell_graphic2_catg_pane_g1

0xd944,	// (0x00039c10) cell_tb_ext_pane_t1_ParamLimits

0x70b8,	// (0x00033384) vkb2_top_cell_right_narrow_pane_ParamLimits

0x70b8,	// (0x00033384) vkb2_top_cell_right_narrow_pane

0x70d0,	// (0x0003339c) vkb2_top_cell_right_wide_pane_ParamLimits

0x70d0,	// (0x0003339c) vkb2_top_cell_right_wide_pane

0x6692,	// (0x0003295e) bg_vkb2_func_pane_ParamLimits

0x6692,	// (0x0003295e) bg_vkb2_func_pane

0x7141,	// (0x0003340d) vkb2_top_cell_left_pane_g1_ParamLimits

0x6692,	// (0x0003295e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6692,	// (0x0003295e) bg_vkb2_fuc_pane_cp03

0x719f,	// (0x0003346b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99d7,	// (0x00035ca3) bg_vkb2_func_pane_g1

0x99df,	// (0x00035cab) bg_vkb2_func_pane_g2

0x99ef,	// (0x00035cbb) bg_vkb2_func_pane_g3

0x99e7,	// (0x00035cb3) bg_vkb2_func_pane_g4

0x99f7,	// (0x00035cc3) bg_vkb2_func_pane_g5

0x99ff,	// (0x00035ccb) bg_vkb2_func_pane_g6

0x9a07,	// (0x00035cd3) bg_vkb2_func_pane_g7

0x9a0f,	// (0x00035cdb) bg_vkb2_func_pane_g8

0x99cf,	// (0x00035c9b) bg_vkb2_func_pane_g9

0x0008,

0xfde2,	// (0x0003c0ae) bg_vkb2_func_pane_g

0x6692,	// (0x0003295e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6692,	// (0x0003295e) bg_vkb2_fuc_pane_cp01

0x7141,	// (0x0003340d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7141,	// (0x0003340d) vkb2_top_cell_right_wide_pane_g1

0x6692,	// (0x0003295e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6692,	// (0x0003295e) bg_vkb2_fuc_pane_cp02

0x7320,	// (0x000335ec) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7320,	// (0x000335ec) vkb2_top_cell_right_narrow_pane_g1

0xd547,	// (0x00039813) aid_touch_area_decrease_ParamLimits

0xd547,	// (0x00039813) aid_touch_area_decrease

0xd56b,	// (0x00039837) aid_touch_area_increase_ParamLimits

0xd56b,	// (0x00039837) aid_touch_area_increase

0xd5a4,	// (0x00039870) aid_touch_area_mute_ParamLimits

0xd5a4,	// (0x00039870) aid_touch_area_mute

0xd5c0,	// (0x0003988c) aid_touch_area_slider_ParamLimits

0xd5c0,	// (0x0003988c) aid_touch_area_slider

0xd6aa,	// (0x00039976) popup_slider_window_g4_ParamLimits

0xd6aa,	// (0x00039976) popup_slider_window_g4

0xd6c2,	// (0x0003998e) popup_slider_window_g5_ParamLimits

0xd6c2,	// (0x0003998e) popup_slider_window_g5

0xd6e4,	// (0x000399b0) popup_slider_window_g6_ParamLimits

0xd6e4,	// (0x000399b0) popup_slider_window_g6

0xd722,	// (0x000399ee) popup_slider_window_t2_ParamLimits

0xd722,	// (0x000399ee) popup_slider_window_t2

0x0001,

0xfcdc,	// (0x0003bfa8) popup_slider_window_t_ParamLimits

0xfcdc,	// (0x0003bfa8) popup_slider_window_t

0xd73a,	// (0x00039a06) slider_pane_ParamLimits

0xd73a,	// (0x00039a06) slider_pane

0xe43e,	// (0x0003a70a) slider_pane_g1_ParamLimits

0xe43e,	// (0x0003a70a) slider_pane_g1

0xe452,	// (0x0003a71e) slider_pane_g2_ParamLimits

0xe452,	// (0x0003a71e) slider_pane_g2

0xe468,	// (0x0003a734) slider_pane_g3_ParamLimits

0xe468,	// (0x0003a734) slider_pane_g3

0x0003,

0xfdf5,	// (0x0003c0c1) slider_pane_g_ParamLimits

0xfdf5,	// (0x0003c0c1) slider_pane_g

0x5b3c,	// (0x00031e08) popup_tb_float_extension_window_ParamLimits

0x5b3c,	// (0x00031e08) popup_tb_float_extension_window

0xe494,	// (0x0003a760) aid_size_cell_tb_float_ext

0x2959,	// (0x0002ec25) bg_popup_sub_window_cp28

0xe4a0,	// (0x0003a76c) grid_tb_float_ext_pane

0xe4aa,	// (0x0003a776) cell_tb_float_ext_pane_ParamLimits

0xe4aa,	// (0x0003a776) cell_tb_float_ext_pane

0xe4c4,	// (0x0003a790) cell_tb_float_ext_pane_g1

0xe4cd,	// (0x0003a799) grid_highlight_pane_cp12

0x67e1,	// (0x00032aad) cell_last_hwr_side_pane_ParamLimits

0x67e1,	// (0x00032aad) cell_last_hwr_side_pane

0xc022,	// (0x000382ee) cell_last_hwr_side_pane_g1

0xe4d6,	// (0x0003a7a2) cell_last_hwr_side_pane_g2

0x0001,

0xfdfe,	// (0x0003c0ca) cell_last_hwr_side_pane_g

0x7067,	// (0x00033333) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7067,	// (0x00033333) vkb2_area_bottom_space_btn_pane

0x68f7,	// (0x00032bc3) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf9c,	// (0x0003a268) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7301,	// (0x000335cd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7340,	// (0x0003360c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7340,	// (0x0003360c) vkb2_area_bottom_space_btn_pane_g1

0x737a,	// (0x00033646) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x737a,	// (0x00033646) vkb2_area_bottom_space_btn_pane_g2

0x73b0,	// (0x0003367c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x73b0,	// (0x0003367c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe03,	// (0x0003c0cf) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe03,	// (0x0003c0cf) vkb2_area_bottom_space_btn_pane_g

0x6755,	// (0x00032a21) cel_fep_hwr_func_pane_ParamLimits

0x6755,	// (0x00032a21) cel_fep_hwr_func_pane

0x6791,	// (0x00032a5d) cell_hwr_side_button_pane_ParamLimits

0x6791,	// (0x00032a5d) cell_hwr_side_button_pane

0xd978,	// (0x00039c44) aid_area_touch_clock_ParamLimits

0x7c51,	// (0x00033f1d) bg_uniindi_top_pane_ParamLimits

0xd98a,	// (0x00039c56) uniindi_top_pane_g1_ParamLimits

0xd9a0,	// (0x00039c6c) uniindi_top_pane_g2_ParamLimits

0xd9ac,	// (0x00039c78) uniindi_top_pane_g3_ParamLimits

0xd9bd,	// (0x00039c89) uniindi_top_pane_g4_ParamLimits

0xfd14,	// (0x0003bfe0) uniindi_top_pane_g_ParamLimits

0xd9ca,	// (0x00039c96) uniindi_top_pane_t1_ParamLimits

0x7c51,	// (0x00033f1d) bg_vkb2_func_pane_cp01_ParamLimits

0x7c51,	// (0x00033f1d) bg_vkb2_func_pane_cp01

0xe4df,	// (0x0003a7ab) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4df,	// (0x0003a7ab) cel_fep_hwr_func_pane_g1

0x7c51,	// (0x00033f1d) bg_vkb2_func_pane_cp02_ParamLimits

0x7c51,	// (0x00033f1d) bg_vkb2_func_pane_cp02

0xe4df,	// (0x0003a7ab) cell_hwr_side_button_pane_g1_ParamLimits

0xe4df,	// (0x0003a7ab) cell_hwr_side_button_pane_g1

0x9850,	// (0x00035b1c) status_pane_g4_ParamLimits

0x9850,	// (0x00035b1c) status_pane_g4

0x986a,	// (0x00035b36) status_pane_t1

0xbd67,	// (0x00038033) form2_midp_gauge_slider_cont_pane

0xbd6f,	// (0x0003803b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd81,	// (0x0003804d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd93,	// (0x0003805f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad4,	// (0x0003bda0) form2_midp_gauge_slider_pane_t_ParamLimits

0xbda5,	// (0x00038071) form2_midp_slider_pane_ParamLimits

0x6cd7,	// (0x00032fa3) aid_size_cell_func_vkb2_ParamLimits

0x6cd7,	// (0x00032fa3) aid_size_cell_func_vkb2

0xe480,	// (0x0003a74c) slider_pane_g4_ParamLimits

0xe480,	// (0x0003a74c) slider_pane_g4

0x73fa,	// (0x000336c6) form2_midp_gauge_slider_pane_t2_cp01

0x7408,	// (0x000336d4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7408,	// (0x000336d4) form2_midp_gauge_slider_pane_t3_cp01

0x7425,	// (0x000336f1) form2_midp_slider_pane_cp01

0x2959,	// (0x0002ec25) navi_smil_pane

0xe518,	// (0x0003a7e4) navi_smil_pane_g1

0xe520,	// (0x0003a7ec) navi_smil_pane_t1

0xe4ed,	// (0x0003a7b9) form2_midp_slider_pane_g1

0xe4f6,	// (0x0003a7c2) form2_midp_slider_pane_g2

0xe4fe,	// (0x0003a7ca) form2_midp_slider_pane_g3

0xe4ed,	// (0x0003a7b9) form2_midp_slider_pane_g4

0xe506,	// (0x0003a7d2) form2_midp_slider_pane_g5

0x0004,

0xfe0c,	// (0x0003c0d8) form2_midp_slider_pane_g

0x73ea,	// (0x000336b6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x73ea,	// (0x000336b6) vkb2_area_bottom_space_btn_pane_g4

0x967f,	// (0x0003594b) lc0_navi_pane_ParamLimits

0x967f,	// (0x0003594b) lc0_navi_pane

0x96f5,	// (0x000359c1) lc0_stat_indi_pane_ParamLimits

0x96f5,	// (0x000359c1) lc0_stat_indi_pane

0x970c,	// (0x000359d8) ls0_title_pane_ParamLimits

0x970c,	// (0x000359d8) ls0_title_pane

0x8255,	// (0x00034521) bg_popup_sub_pane_cp14_ParamLimits

0xd95f,	// (0x00039c2b) list_uniindi_pane_ParamLimits

0xd96b,	// (0x00039c37) uniindi_top_pane_ParamLimits

0xda07,	// (0x00039cd3) list_single_uniindi_pane_g1_ParamLimits

0xda1a,	// (0x00039ce6) list_single_uniindi_pane_t1_ParamLimits

0x742e,	// (0x000336fa) lc0_stat_clock_pane_ParamLimits

0x742e,	// (0x000336fa) lc0_stat_clock_pane

0xe52e,	// (0x0003a7fa) lc0_stat_indi_pane_g1_ParamLimits

0xe52e,	// (0x0003a7fa) lc0_stat_indi_pane_g1

0xe53b,	// (0x0003a807) lc0_stat_indi_pane_g2_ParamLimits

0xe53b,	// (0x0003a807) lc0_stat_indi_pane_g2

0x0001,

0xfe17,	// (0x0003c0e3) lc0_stat_indi_pane_g_ParamLimits

0xfe17,	// (0x0003c0e3) lc0_stat_indi_pane_g

0x743b,	// (0x00033707) lc0_uni_indicator_pane_ParamLimits

0x743b,	// (0x00033707) lc0_uni_indicator_pane

0xe548,	// (0x0003a814) ls0_title_pane_g1_ParamLimits

0xe548,	// (0x0003a814) ls0_title_pane_g1

0xe55c,	// (0x0003a828) ls0_title_pane_t1_ParamLimits

0xe55c,	// (0x0003a828) ls0_title_pane_t1

0x7448,	// (0x00033714) lc0_uni_indicator_pane_g1_ParamLimits

0x7448,	// (0x00033714) lc0_uni_indicator_pane_g1

0xe592,	// (0x0003a85e) lc0_stat_clock_pane_t1

0x4646,	// (0x00030912) main_ai5_pane

0xe5a0,	// (0x0003a86c) ai5_sk_pane_ParamLimits

0xe5a0,	// (0x0003a86c) ai5_sk_pane

0xe5ad,	// (0x0003a879) cell_ai5_widget_pane_ParamLimits

0xe5ad,	// (0x0003a879) cell_ai5_widget_pane

0xe676,	// (0x0003a942) aid_size_cell_widget_grid

0xe684,	// (0x0003a950) bg_ai5_widget_pane_ParamLimits

0xe684,	// (0x0003a950) bg_ai5_widget_pane

0xe700,	// (0x0003a9cc) cell_ai5_widget_pane_g2

0xe714,	// (0x0003a9e0) cell_ai5_widget_pane_g3

0xe72e,	// (0x0003a9fa) cell_ai5_widget_pane_g4

0xe73e,	// (0x0003aa0a) cell_ai5_widget_pane_g5

0xe74e,	// (0x0003aa1a) cell_ai5_widget_pane_g6

0xe75a,	// (0x0003aa26) cell_ai5_widget_pane_g7

0xe7c6,	// (0x0003aa92) cell_ai5_widget_pane_t1_ParamLimits

0xe7c6,	// (0x0003aa92) cell_ai5_widget_pane_t1

0xe7e3,	// (0x0003aaaf) cell_ai5_widget_pane_t2_ParamLimits

0xe7e3,	// (0x0003aaaf) cell_ai5_widget_pane_t2

0xe7fb,	// (0x0003aac7) cell_ai5_widget_pane_t3_ParamLimits

0xe7fb,	// (0x0003aac7) cell_ai5_widget_pane_t3

0xe813,	// (0x0003aadf) cell_ai5_widget_pane_t4_ParamLimits

0xe813,	// (0x0003aadf) cell_ai5_widget_pane_t4

0xe839,	// (0x0003ab05) cell_ai5_widget_pane_t5_ParamLimits

0xe839,	// (0x0003ab05) cell_ai5_widget_pane_t5

0xe858,	// (0x0003ab24) cell_ai5_widget_pane_t6_ParamLimits

0xe858,	// (0x0003ab24) cell_ai5_widget_pane_t6

0xe86a,	// (0x0003ab36) cell_ai5_widget_pane_t7_ParamLimits

0xe86a,	// (0x0003ab36) cell_ai5_widget_pane_t7

0xe889,	// (0x0003ab55) cell_ai5_widget_pane_t8_ParamLimits

0xe889,	// (0x0003ab55) cell_ai5_widget_pane_t8

0x000b,

0xfe37,	// (0x0003c103) cell_ai5_widget_pane_t_ParamLimits

0xfe37,	// (0x0003c103) cell_ai5_widget_pane_t

0xe90d,	// (0x0003abd9) grid_ai5_widget_pane

0x8255,	// (0x00034521) highlight_cell_ai5_widget_pane_ParamLimits

0x8255,	// (0x00034521) highlight_cell_ai5_widget_pane

0xe91b,	// (0x0003abe7) ai5_sk_left_pane

0xe925,	// (0x0003abf1) ai5_sk_middle_pane

0xe92f,	// (0x0003abfb) ai5_sk_right_pane

0xe939,	// (0x0003ac05) bg_ai5_widget_pane_g1_ParamLimits

0xe939,	// (0x0003ac05) bg_ai5_widget_pane_g1

0xe945,	// (0x0003ac11) bg_ai5_widget_pane_g2_ParamLimits

0xe945,	// (0x0003ac11) bg_ai5_widget_pane_g2

0xe951,	// (0x0003ac1d) bg_ai5_widget_pane_g3_ParamLimits

0xe951,	// (0x0003ac1d) bg_ai5_widget_pane_g3

0xe95d,	// (0x0003ac29) bg_ai5_widget_pane_g4_ParamLimits

0xe95d,	// (0x0003ac29) bg_ai5_widget_pane_g4

0xe969,	// (0x0003ac35) bg_ai5_widget_pane_g5_ParamLimits

0xe969,	// (0x0003ac35) bg_ai5_widget_pane_g5

0xe975,	// (0x0003ac41) bg_ai5_widget_pane_g6_ParamLimits

0xe975,	// (0x0003ac41) bg_ai5_widget_pane_g6

0xe981,	// (0x0003ac4d) bg_ai5_widget_pane_g7_ParamLimits

0xe981,	// (0x0003ac4d) bg_ai5_widget_pane_g7

0xe98d,	// (0x0003ac59) bg_ai5_widget_pane_g8_ParamLimits

0xe98d,	// (0x0003ac59) bg_ai5_widget_pane_g8

0xe999,	// (0x0003ac65) bg_ai5_widget_pane_g9_ParamLimits

0xe999,	// (0x0003ac65) bg_ai5_widget_pane_g9

0x0008,

0xfe50,	// (0x0003c11c) bg_ai5_widget_pane_g_ParamLimits

0xfe50,	// (0x0003c11c) bg_ai5_widget_pane_g

0xe9cb,	// (0x0003ac97) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9cb,	// (0x0003ac97) cell_shortcut_ai5_widget_pane

0x9181,	// (0x0003544d) bg_cell_shortcut_ai5_widget_pane

0xe9dc,	// (0x0003aca8) cell_grid_ai5_widget_pane_g1

0x9181,	// (0x0003544d) highlight_cell_shortcut_ai5_widget_pane

0x99d7,	// (0x00035ca3) ai5_sk_left_pane_g1

0xe9e5,	// (0x0003acb1) ai5_sk_left_pane_g2

0xe9ed,	// (0x0003acb9) ai5_sk_left_pane_g3

0xe9f5,	// (0x0003acc1) ai5_sk_left_pane_g4

0x0003,

0xfe63,	// (0x0003c12f) ai5_sk_left_pane_g

0xe9fd,	// (0x0003acc9) ai5_sk_left_pane_t1

0x99df,	// (0x00035cab) ai5_sk_right_pane_g1

0xea0b,	// (0x0003acd7) ai5_sk_right_pane_g2

0xea13,	// (0x0003acdf) ai5_sk_right_pane_g3

0xea1b,	// (0x0003ace7) ai5_sk_right_pane_g4

0x0003,

0xfe6c,	// (0x0003c138) ai5_sk_right_pane_g

0xea23,	// (0x0003acef) ai5_sk_right_pane_t1

0x99df,	// (0x00035cab) ai5_sk_middle_pane_g1

0x99d7,	// (0x00035ca3) ai5_sk_middle_pane_g2

0x99f7,	// (0x00035cc3) ai5_sk_middle_pane_g3

0xea13,	// (0x0003acdf) ai5_sk_middle_pane_g4

0xe9ed,	// (0x0003acb9) ai5_sk_middle_pane_g5

0xea31,	// (0x0003acfd) ai5_sk_middle_pane_g6

0xea39,	// (0x0003ad05) ai5_sk_middle_pane_g7

0x0006,

0xfe75,	// (0x0003c141) ai5_sk_middle_pane_g

0x9505,	// (0x000357d1) aid_touch_area_size_lc0_ParamLimits

0x9505,	// (0x000357d1) aid_touch_area_size_lc0

0x6926,	// (0x00032bf2) cell_hwr_candidate_pane_t1_ParamLimits

0x9521,	// (0x000357ed) aid_touch_navi_pane

0x97fa,	// (0x00035ac6) status_dt_navi_pane_ParamLimits

0x97fa,	// (0x00035ac6) status_dt_navi_pane

0x9807,	// (0x00035ad3) status_dt_sta_pane_ParamLimits

0x9807,	// (0x00035ad3) status_dt_sta_pane

0xea41,	// (0x0003ad0d) dt_sta_controll_pane

0xea4e,	// (0x0003ad1a) dt_sta_indi_pane

0xea5f,	// (0x0003ad2b) dt_sta_title_pane

0x7c51,	// (0x00033f1d) bg_dt_sta_indi_pane_ParamLimits

0x7c51,	// (0x00033f1d) bg_dt_sta_indi_pane

0xea72,	// (0x0003ad3e) dt_sta_battery_pane

0xea7a,	// (0x0003ad46) dt_sta_indi_pane_g1

0xea83,	// (0x0003ad4f) dt_sta_indi_pane_g2

0xea8c,	// (0x0003ad58) dt_sta_indi_pane_g3

0x0002,

0xfe84,	// (0x0003c150) dt_sta_indi_pane_g

0xea95,	// (0x0003ad61) dt_sta_signal_pane

0x8255,	// (0x00034521) bg_dt_sta_title_pane_ParamLimits

0x8255,	// (0x00034521) bg_dt_sta_title_pane

0xea9e,	// (0x0003ad6a) dt_sta_title_pane_g1

0xeaa6,	// (0x0003ad72) dt_sta_title_pane_t1_ParamLimits

0xeaa6,	// (0x0003ad72) dt_sta_title_pane_t1

0x2959,	// (0x0002ec25) bg_dt_sta_control_pane

0xeabb,	// (0x0003ad87) dt_sta_controll_pane_g1

0xeac4,	// (0x0003ad90) bg_dt_sta_title_pane_g1

0xeacd,	// (0x0003ad99) bg_dt_sta_title_pane_g2

0xead6,	// (0x0003ada2) bg_dt_sta_title_pane_g3

0x0002,

0xfe8b,	// (0x0003c157) bg_dt_sta_title_pane_g

0xc022,	// (0x000382ee) bg_dt_sta_indi_pane_g1

0xeadf,	// (0x0003adab) dt_sta_signal_pane_g1

0xeae7,	// (0x0003adb3) dt_sta_signal_pane_g2

0x0001,

0xfe92,	// (0x0003c15e) dt_sta_signal_pane_g

0xeaef,	// (0x0003adbb) dt_sta_battery_pane_g1

0xeaf8,	// (0x0003adc4) dt_sta_battery_pane_t1

0xc022,	// (0x000382ee) bg_dt_sta_control_pane_g1

0x8c7f,	// (0x00034f4b) fep_china_uni_eep_pane

0x8c87,	// (0x00034f53) fep_china_uni_entry_pane_ParamLimits

0x8c97,	// (0x00034f63) popup_fep_china_uni_window_g1_ParamLimits

0x8ca7,	// (0x00034f73) popup_fep_china_uni_window_g2_ParamLimits

0x8ca7,	// (0x00034f73) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0003b9c4) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0003b9c4) popup_fep_china_uni_window_g

0xeb07,	// (0x0003add3) fep_china_uni_eep_pane_g1

0xeb0f,	// (0x0003addb) fep_china_uni_eep_pane_t1

0xe50f,	// (0x0003a7db) aid_touch_area_size_smil_player

0x9677,	// (0x00035943) lc0_clock_pane

0x985e,	// (0x00035b2a) status_pane_g5_ParamLimits

0x985e,	// (0x00035b2a) status_pane_g5

0x5801,	// (0x00031acd) popup_keymap_window

0x981c,	// (0x00035ae8) status_icon_pane

0xe714,	// (0x0003a9e0) cell_ai5_widget_pane_g3_ParamLimits

0xe72e,	// (0x0003a9fa) cell_ai5_widget_pane_g4_ParamLimits

0xe73e,	// (0x0003aa0a) cell_ai5_widget_pane_g5_ParamLimits

0xe766,	// (0x0003aa32) cell_ai5_widget_pane_g8_ParamLimits

0xe766,	// (0x0003aa32) cell_ai5_widget_pane_g8

0xe77a,	// (0x0003aa46) cell_ai5_widget_pane_g9_ParamLimits

0xe77a,	// (0x0003aa46) cell_ai5_widget_pane_g9

0xe78e,	// (0x0003aa5a) cell_ai5_widget_pane_g10_ParamLimits

0xe78e,	// (0x0003aa5a) cell_ai5_widget_pane_g10

0xeb1e,	// (0x0003adea) status_icon_pane_g1

0x2959,	// (0x0002ec25) bg_popup_sub_pane_cp13

0xeb26,	// (0x0003adf2) popup_keymap_window_t1

0x9456,	// (0x00035722) control_pane_g6_ParamLimits

0x9456,	// (0x00035722) control_pane_g6

0x9463,	// (0x0003572f) control_pane_g7_ParamLimits

0x9463,	// (0x0003572f) control_pane_g7

0x9470,	// (0x0003573c) control_pane_g8_ParamLimits

0x9470,	// (0x0003573c) control_pane_g8

0xea41,	// (0x0003ad0d) dt_sta_controll_pane_ParamLimits

0xea4e,	// (0x0003ad1a) dt_sta_indi_pane_ParamLimits

0xea5f,	// (0x0003ad2b) dt_sta_title_pane_ParamLimits

0x818d,	// (0x00034459) aid_size_touch_scroll_bar_cale

0x471f,	// (0x000309eb) popup_discreet_window_ParamLimits

0x471f,	// (0x000309eb) popup_discreet_window

0x47a7,	// (0x00030a73) popup_sk_window

0xa05e,	// (0x0003632a) bg_popup_sub_pane_cp28_ParamLimits

0xa05e,	// (0x0003632a) bg_popup_sub_pane_cp28

0xeb34,	// (0x0003ae00) popup_discreet_window_g1_ParamLimits

0xeb34,	// (0x0003ae00) popup_discreet_window_g1

0xeb54,	// (0x0003ae20) popup_discreet_window_t1_ParamLimits

0xeb54,	// (0x0003ae20) popup_discreet_window_t1

0xeb72,	// (0x0003ae3e) popup_discreet_window_t2_ParamLimits

0xeb72,	// (0x0003ae3e) popup_discreet_window_t2

0x0002,

0xfe97,	// (0x0003c163) popup_discreet_window_t_ParamLimits

0xfe97,	// (0x0003c163) popup_discreet_window_t

0x745c,	// (0x00033728) popup_sk_window_g1

0x7466,	// (0x00033732) popup_sk_window_g2

0x0001,

0xfe9e,	// (0x0003c16a) popup_sk_window_g

0x746e,	// (0x0003373a) popup_sk_window_t1

0x747c,	// (0x00033748) popup_sk_window_t1_copy1

0xe700,	// (0x0003a9cc) cell_ai5_widget_pane_g2_ParamLimits

0xe89b,	// (0x0003ab67) cell_ai5_widget_pane_t9_ParamLimits

0xe89b,	// (0x0003ab67) cell_ai5_widget_pane_t9

0x2959,	// (0x0002ec25) main_fep_fshwr2_pane

0x748a,	// (0x00033756) aid_fshwr2_btn_pane

0x749a,	// (0x00033766) aid_fshwr2_syb_pane

0x74ae,	// (0x0003377a) aid_fshwr2_txt_pane

0x74be,	// (0x0003378a) fshwr2_func_candi_pane

0x74e2,	// (0x000337ae) fshwr2_hwr_syb_pane

0x74fc,	// (0x000337c8) fshwr2_icf_pane

0x4646,	// (0x00030912) fshwr2_icf_bg_pane

0x752a,	// (0x000337f6) fshwr2_icf_pane_t1_ParamLimits

0x752a,	// (0x000337f6) fshwr2_icf_pane_t1

0x8b54,	// (0x00034e20) fshwr2_func_candi_pane_g1

0xebc4,	// (0x0003ae90) fshwr2_func_candi_row_pane_ParamLimits

0xebc4,	// (0x0003ae90) fshwr2_func_candi_row_pane

0x7542,	// (0x0003380e) cell_fshwr2_syb_pane_ParamLimits

0x7542,	// (0x0003380e) cell_fshwr2_syb_pane

0x7565,	// (0x00033831) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7565,	// (0x00033831) fshwr2_hwr_syb_pane_g1

0x4646,	// (0x00030912) bg_popup_call_pane_cp01

0x7573,	// (0x0003383f) fshwr2_func_candi_cell_pane_ParamLimits

0x7573,	// (0x0003383f) fshwr2_func_candi_cell_pane

0xa6d2,	// (0x0003699e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6d2,	// (0x0003699e) fshwr2_func_candi_cell_bg_pane

0x75be,	// (0x0003388a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x75be,	// (0x0003388a) fshwr2_func_candi_cell_pane_g1

0x75e9,	// (0x000338b5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x75e9,	// (0x000338b5) fshwr2_func_candi_cell_pane_t1

0x4646,	// (0x00030912) bg_button_pane_cp08

0x94a5,	// (0x00035771) cell_fshwr2_syb_bg_pane

0x75fc,	// (0x000338c8) cell_fshwr2_syb_bg_pane_g1

0x7610,	// (0x000338dc) cell_fshwr2_syb_bg_pane_t1

0x8255,	// (0x00034521) main_tmo_pane

0xab6d,	// (0x00036e39) uni_indicator_pane_g1_ParamLimits

0xab83,	// (0x00036e4f) uni_indicator_pane_g2_ParamLimits

0xab99,	// (0x00036e65) uni_indicator_pane_g3_ParamLimits

0xabac,	// (0x00036e78) uni_indicator_pane_g4_ParamLimits

0xabac,	// (0x00036e78) uni_indicator_pane_g4

0xabc0,	// (0x00036e8c) uni_indicator_pane_g5_ParamLimits

0xabc0,	// (0x00036e8c) uni_indicator_pane_g5

0xabc0,	// (0x00036e8c) uni_indicator_pane_g6_ParamLimits

0xabc0,	// (0x00036e8c) uni_indicator_pane_g6

0xf8fc,	// (0x0003bbc8) uni_indicator_pane_g_ParamLimits

0xd523,	// (0x000397ef) popup_tmo_note_window_ParamLimits

0xd523,	// (0x000397ef) popup_tmo_note_window

0x6cb9,	// (0x00032f85) fshwr2_bg_pane

0x75da,	// (0x000338a6) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x75da,	// (0x000338a6) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea3,	// (0x0003c16f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea3,	// (0x0003c16f) fshwr2_func_candi_cell_pane_g

0x68df,	// (0x00032bab) bg_popup_window_pane_cp01

0x7626,	// (0x000338f2) bg_popup_window_pane_g1_cp01

0xebeb,	// (0x0003aeb7) bg_popup_window_pane_cp22_ParamLimits

0xebeb,	// (0x0003aeb7) bg_popup_window_pane_cp22

0xebf9,	// (0x0003aec5) listscroll_tmo_link_pane_ParamLimits

0xebf9,	// (0x0003aec5) listscroll_tmo_link_pane

0xec39,	// (0x0003af05) popup_tmo_note_window_g1_ParamLimits

0xec39,	// (0x0003af05) popup_tmo_note_window_g1

0xec46,	// (0x0003af12) tmo_note_info_pane_ParamLimits

0xec46,	// (0x0003af12) tmo_note_info_pane

0xec60,	// (0x0003af2c) list_tmo_note_info_pane_g1_ParamLimits

0xec60,	// (0x0003af2c) list_tmo_note_info_pane_g1

0xec77,	// (0x0003af43) list_tmo_note_info_pane_g2_ParamLimits

0xec77,	// (0x0003af43) list_tmo_note_info_pane_g2

0x0001,

0xfea8,	// (0x0003c174) list_tmo_note_info_pane_g_ParamLimits

0xfea8,	// (0x0003c174) list_tmo_note_info_pane_g

0xec93,	// (0x0003af5f) list_tmo_note_info_text_pane_ParamLimits

0xec93,	// (0x0003af5f) list_tmo_note_info_text_pane

0xed14,	// (0x0003afe0) list_tmo_link_pane

0xed21,	// (0x0003afed) scroll_pane_cp20

0xed2e,	// (0x0003affa) list_single_tmo_link_pane_ParamLimits

0xed2e,	// (0x0003affa) list_single_tmo_link_pane

0xed3e,	// (0x0003b00a) list_single_tmo_link_pane_t1

0xed4c,	// (0x0003b018) list_tmo_note_info_text_pane_t1_ParamLimits

0xed4c,	// (0x0003b018) list_tmo_note_info_text_pane_t1

0x8311,	// (0x000345dd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8311,	// (0x000345dd) aid_size_touch_scroll_bar_cp01

0x4eb4,	// (0x00031180) aid_size_touch_slider_marker

0x478f,	// (0x00030a5b) popup_settings_window_ParamLimits

0x478f,	// (0x00030a5b) popup_settings_window

0x5684,	// (0x00031950) popup_candi_list_indi_window

0x9521,	// (0x000357ed) aid_touch_navi_pane_ParamLimits

0x6c14,	// (0x00032ee0) rs_clock_indi_pane

0x6c1d,	// (0x00032ee9) sctrl_sk_bottom_pane_ParamLimits

0x6c2e,	// (0x00032efa) sctrl_sk_top_pane_ParamLimits

0x6d29,	// (0x00032ff5) popup_fep_tooltip_window

0xe676,	// (0x0003a942) aid_size_cell_widget_grid_ParamLimits

0xe6eb,	// (0x0003a9b7) cell_ai5_widget_pane_g1_ParamLimits

0xe6eb,	// (0x0003a9b7) cell_ai5_widget_pane_g1

0xe74e,	// (0x0003aa1a) cell_ai5_widget_pane_g6_ParamLimits

0xe75a,	// (0x0003aa26) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1c,	// (0x0003c0e8) cell_ai5_widget_pane_g_ParamLimits

0xfe1c,	// (0x0003c0e8) cell_ai5_widget_pane_g

0xe8ca,	// (0x0003ab96) cell_ai5_widget_pane_t10_ParamLimits

0xe8ca,	// (0x0003ab96) cell_ai5_widget_pane_t10

0xe90d,	// (0x0003abd9) grid_ai5_widget_pane_ParamLimits

0xe9a5,	// (0x0003ac71) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a5,	// (0x0003ac71) cell_contacts_ai5_widget_pane

0xeb87,	// (0x0003ae53) popup_discreet_window_t3_ParamLimits

0xeb87,	// (0x0003ae53) popup_discreet_window_t3

0x7514,	// (0x000337e0) popup_fshwr2_char_preview_window_ParamLimits

0x7514,	// (0x000337e0) popup_fshwr2_char_preview_window

0xecb1,	// (0x0003af7d) tmo_note_info_pane_t1

0xecc6,	// (0x0003af92) tmo_note_info_pane_t2

0xecdb,	// (0x0003afa7) tmo_note_info_pane_t3

0xecf0,	// (0x0003afbc) tmo_note_info_pane_t4

0xed02,	// (0x0003afce) tmo_note_info_pane_t5

0x0004,

0xfead,	// (0x0003c179) tmo_note_info_pane_t

0xed14,	// (0x0003afe0) list_tmo_link_pane_ParamLimits

0xed21,	// (0x0003afed) scroll_pane_cp20_ParamLimits

0x4646,	// (0x00030912) bg_popup_fep_char_preview_window_cp01

0xed65,	// (0x0003b031) popup_fshwr2_char_preview_window_t1

0xed73,	// (0x0003b03f) popup_candi_list_indi_window_g1

0xed7c,	// (0x0003b048) bg_cell_contacts_ai5_widget_pane

0xed88,	// (0x0003b054) cell_contacts_ai5_widget_pane_g1

0xc702,	// (0x000389ce) cell_contacts_ai5_widget_pane_g2

0xed9d,	// (0x0003b069) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb8,	// (0x0003c184) cell_contacts_ai5_widget_pane_g

0xeda9,	// (0x0003b075) cell_contacts_ai5_widget_pane_t1

0x8255,	// (0x00034521) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee20,	// (0x0003b0ec) settings_container_pane

0x9181,	// (0x0003544d) listscroll_set_pane_copy1

0xb70c,	// (0x000379d8) scroll_pane_cp121_copy1

0x9dfb,	// (0x000360c7) set_content_pane_copy1

0xee2c,	// (0x0003b0f8) aid_height_set_list_copy1_ParamLimits

0xee2c,	// (0x0003b0f8) aid_height_set_list_copy1

0xadb8,	// (0x00037084) aid_size_parent_copy1_ParamLimits

0xadb8,	// (0x00037084) aid_size_parent_copy1

0xee38,	// (0x0003b104) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee38,	// (0x0003b104) button_value_adjust_pane_cp6_copy1

0x94a5,	// (0x00035771) list_highlight_pane_cp2_copy1_ParamLimits

0x94a5,	// (0x00035771) list_highlight_pane_cp2_copy1

0xee4c,	// (0x0003b118) list_set_pane_copy1_ParamLimits

0xee4c,	// (0x0003b118) list_set_pane_copy1

0xedbb,	// (0x0003b087) main_pane_set_t1_copy1_ParamLimits

0xedbb,	// (0x0003b087) main_pane_set_t1_copy1

0xedf5,	// (0x0003b0c1) main_pane_set_t2_copy1_ParamLimits

0xedf5,	// (0x0003b0c1) main_pane_set_t2_copy1

0xeef9,	// (0x0003b1c5) main_pane_set_t3_copy1

0xef07,	// (0x0003b1d3) main_pane_set_t4_copy1

0xee14,	// (0x0003b0e0) set_content_pane_g1_copy1_ParamLimits

0xee14,	// (0x0003b0e0) set_content_pane_g1_copy1

0xef15,	// (0x0003b1e1) setting_code_pane_copy1

0xef1d,	// (0x0003b1e9) setting_slider_graphic_pane_copy1

0xef1d,	// (0x0003b1e9) setting_slider_pane_copy1

0xef25,	// (0x0003b1f1) setting_text_pane_copy1

0xef25,	// (0x0003b1f1) setting_volume_pane_copy1

0xef15,	// (0x0003b1e1) settings_code_pane_cp2_copy1

0xef2d,	// (0x0003b1f9) settings_code_pane_cp_copy1_ParamLimits

0xef2d,	// (0x0003b1f9) settings_code_pane_cp_copy1

0x762f,	// (0x000338fb) volume_set_pane_copy1

0xef41,	// (0x0003b20d) volume_set_pane_g10_copy1

0xef49,	// (0x0003b215) volume_set_pane_g1_copy1

0xef51,	// (0x0003b21d) volume_set_pane_g2_copy1

0xef59,	// (0x0003b225) volume_set_pane_g3_copy1

0xef61,	// (0x0003b22d) volume_set_pane_g4_copy1

0xef69,	// (0x0003b235) volume_set_pane_g5_copy1

0xef71,	// (0x0003b23d) volume_set_pane_g6_copy1

0xef79,	// (0x0003b245) volume_set_pane_g7_copy1

0xef81,	// (0x0003b24d) volume_set_pane_g8_copy1

0xef89,	// (0x0003b255) volume_set_pane_g9_copy1

0x79c8,	// (0x00033c94) bg_set_opt_pane_cp_copy1_ParamLimits

0x79c8,	// (0x00033c94) bg_set_opt_pane_cp_copy1

0x7637,	// (0x00033903) setting_slider_pane_t1_copy1_ParamLimits

0x7637,	// (0x00033903) setting_slider_pane_t1_copy1

0x7656,	// (0x00033922) setting_slider_pane_t2_copy1_ParamLimits

0x7656,	// (0x00033922) setting_slider_pane_t2_copy1

0x7670,	// (0x0003393c) setting_slider_pane_t3_copy1_ParamLimits

0x7670,	// (0x0003393c) setting_slider_pane_t3_copy1

0x7688,	// (0x00033954) slider_set_pane_copy1_ParamLimits

0x7688,	// (0x00033954) slider_set_pane_copy1

0x82ad,	// (0x00034579) set_opt_bg_pane_g1_copy2

0x82b5,	// (0x00034581) set_opt_bg_pane_g2_copy2

0xef91,	// (0x0003b25d) set_opt_bg_pane_g3_copy2

0x82c5,	// (0x00034591) set_opt_bg_pane_g4_copy2

0x82cd,	// (0x00034599) set_opt_bg_pane_g5_copy2

0x82d5,	// (0x000345a1) set_opt_bg_pane_g6_copy2

0xef9b,	// (0x0003b267) set_opt_bg_pane_g7_copy2

0xefa3,	// (0x0003b26f) set_opt_bg_pane_g8_copy2

0xefad,	// (0x0003b279) set_opt_bg_pane_g9_copy2

0x769e,	// (0x0003396a) aid_size_touch_slider_mark_copy1_ParamLimits

0x769e,	// (0x0003396a) aid_size_touch_slider_mark_copy1

0xefb7,	// (0x0003b283) slider_set_pane_g1_copy1

0x76b2,	// (0x0003397e) slider_set_pane_g2_copy1

0x608e,	// (0x0003235a) slider_set_pane_g3_copy1_ParamLimits

0x608e,	// (0x0003235a) slider_set_pane_g3_copy1

0x60a2,	// (0x0003236e) slider_set_pane_g4_copy1_ParamLimits

0x60a2,	// (0x0003236e) slider_set_pane_g4_copy1

0x60ba,	// (0x00032386) slider_set_pane_g5_copy1_ParamLimits

0x60ba,	// (0x00032386) slider_set_pane_g5_copy1

0x608e,	// (0x0003235a) slider_set_pane_g6_copy1_ParamLimits

0x608e,	// (0x0003235a) slider_set_pane_g6_copy1

0x76ba,	// (0x00033986) slider_set_pane_g7_copy1_ParamLimits

0x76ba,	// (0x00033986) slider_set_pane_g7_copy1

0x78e8,	// (0x00033bb4) bg_set_opt_pane_cp2_copy1

0xefc0,	// (0x0003b28c) setting_slider_graphic_pane_g1_copy1

0xefc9,	// (0x0003b295) setting_slider_graphic_pane_t1_copy1

0xefd9,	// (0x0003b2a5) setting_slider_graphic_pane_t2_copy1

0xefe9,	// (0x0003b2b5) slider_set_pane_cp_copy1

0xeff9,	// (0x0003b2c5) input_focus_pane_cp1_copy1

0xf002,	// (0x0003b2ce) list_set_text_pane_copy1

0xf00a,	// (0x0003b2d6) setting_text_pane_g1_copy1

0x3956,	// (0x0002fc22) set_text_pane_t1_copy1

0xeff9,	// (0x0003b2c5) input_focus_pane_cp2_copy1

0xf00a,	// (0x0003b2d6) setting_code_pane_g1_copy1

0xf013,	// (0x0003b2df) setting_code_pane_t1_copy1

0xb528,	// (0x000377f4) list_set_graphic_pane_copy1

0x78e8,	// (0x00033bb4) bg_set_opt_pane_cp4_copy1

0x8e7e,	// (0x0003514a) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e7e,	// (0x0003514a) list_set_graphic_pane_g1_copy1

0xf021,	// (0x0003b2ed) list_set_graphic_pane_g2_copy1

0x8e96,	// (0x00035162) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e96,	// (0x00035162) list_set_graphic_pane_t1_copy1

0xc022,	// (0x000382ee) rs_clock_indi_pane_g1

0xf029,	// (0x0003b2f5) rs_clock_indi_pane_t1

0xf037,	// (0x0003b303) rs_indi_pane

0xf03f,	// (0x0003b30b) rs_indi_pane_g1

0xf048,	// (0x0003b314) rs_indi_pane_g2

0xf051,	// (0x0003b31d) rs_indi_pane_g3

0x0002,

0xfebf,	// (0x0003c18b) rs_indi_pane_g

0x9181,	// (0x0003544d) bg_popup_preview_window_pane_cp03

0xf05a,	// (0x0003b326) popup_fep_tooltip_window_t1

0xccc2,	// (0x00038f8e) popup_note2_window_g2_ParamLimits

0xccc2,	// (0x00038f8e) popup_note2_window_g2

0x0001,

0xfc4c,	// (0x0003bf18) popup_note2_window_g_ParamLimits

0xfc4c,	// (0x0003bf18) popup_note2_window_g

0xd1bd,	// (0x00039489) bg_popup_sub_pane_cp11_ParamLimits

0xd1ca,	// (0x00039496) cell_ai3_links_pane_g1_ParamLimits

0xd1e1,	// (0x000394ad) cell_ai3_links_pane_t1

0x3956,	// (0x0002fc22) set_text_pane_t1_copy1_ParamLimits

0x9089,	// (0x00035355) cell_graphic_popup_pane_cp2_ParamLimits

0x9089,	// (0x00035355) cell_graphic_popup_pane_cp2

0xf068,	// (0x0003b334) cell_graphic_popup_pane_g1_cp2

0x7fa0,	// (0x0003426c) cell_graphic_popup_pane_g2_cp2

0xf070,	// (0x0003b33c) cell_graphic_popup_pane_g3_cp2

0xf078,	// (0x0003b344) cell_graphic_popup_pane_t2_cp2

0x7fb1,	// (0x0003427d) grid_highlight_pane_cp3_cp2

0x886f,	// (0x00034b3b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8255,	// (0x00034521) main_tmo_pane_ParamLimits

0xd517,	// (0x000397e3) popup_tmo_big_image_note_window

0xe6da,	// (0x0003a9a6) cell_ai5_widget_list_pane

0xe6e2,	// (0x0003a9ae) cell_ai5_widget_lrg_icon_pane

0xecb1,	// (0x0003af7d) tmo_note_info_pane_t1_ParamLimits

0xecc6,	// (0x0003af92) tmo_note_info_pane_t2_ParamLimits

0xecdb,	// (0x0003afa7) tmo_note_info_pane_t3_ParamLimits

0xecf0,	// (0x0003afbc) tmo_note_info_pane_t4_ParamLimits

0xed02,	// (0x0003afce) tmo_note_info_pane_t5_ParamLimits

0xfead,	// (0x0003c179) tmo_note_info_pane_t_ParamLimits

0xee20,	// (0x0003b0ec) settings_container_pane_ParamLimits

0xeff1,	// (0x0003b2bd) indicator_popup_pane_cp5

0xeff1,	// (0x0003b2bd) indicator_popup_pane_cp6

0xb528,	// (0x000377f4) list_set_graphic_pane_copy1_ParamLimits

0x2959,	// (0x0002ec25) bg_popup_window_pane_cp23

0xf086,	// (0x0003b352) popup_tmo_big_image_note_window_g1

0xf090,	// (0x0003b35c) popup_tmo_big_image_note_window_t1

0xf0a0,	// (0x0003b36c) popup_tmo_big_image_note_window_t2

0xf0b0,	// (0x0003b37c) popup_tmo_big_image_note_window_t3

0x0002,

0xfec6,	// (0x0003c192) popup_tmo_big_image_note_window_t

0xc022,	// (0x000382ee) cell_ai5_widget_lrg_icon_pane_g1

0xf0c0,	// (0x0003b38c) cell_ai5_widget_lrg_icon_pane_t1

0xf0ce,	// (0x0003b39a) cell_ai5_widget_list_row_pane_ParamLimits

0xf0ce,	// (0x0003b39a) cell_ai5_widget_list_row_pane

0xf0e5,	// (0x0003b3b1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e5,	// (0x0003b3b1) cell_ai5_widget_list_row_pane_g1

0xf0f2,	// (0x0003b3be) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0f2,	// (0x0003b3be) cell_ai5_widget_list_row_pane_t1

0xf123,	// (0x0003b3ef) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf123,	// (0x0003b3ef) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecd,	// (0x0003c199) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecd,	// (0x0003c199) cell_ai5_widget_list_row_pane_t

0x4646,	// (0x00030912) main_fep_vtchi_ss_pane

0xf173,	// (0x0003b43f) popup_fep_char_pre_window

0xf17b,	// (0x0003b447) popup_fep_ituss_window

0xf1a7,	// (0x0003b473) popup_fep_vkbss_window

0x94a5,	// (0x00035771) grid_vkbss_keypad_pane_ParamLimits

0x94a5,	// (0x00035771) grid_vkbss_keypad_pane

0xf1e7,	// (0x0003b4b3) ituss_keypad_pane

0x76da,	// (0x000339a6) aid_vkbss_key_offset_ParamLimits

0x76da,	// (0x000339a6) aid_vkbss_key_offset

0x76e6,	// (0x000339b2) cell_vkbss_key_pane_ParamLimits

0x76e6,	// (0x000339b2) cell_vkbss_key_pane

0xf1f3,	// (0x0003b4bf) bg_cell_vkbss_key_g1_ParamLimits

0xf1f3,	// (0x0003b4bf) bg_cell_vkbss_key_g1

0xf1ff,	// (0x0003b4cb) cell_vkbss_key_3p_pane_ParamLimits

0xf1ff,	// (0x0003b4cb) cell_vkbss_key_3p_pane

0xf235,	// (0x0003b501) cell_vkbss_key_g1_ParamLimits

0xf235,	// (0x0003b501) cell_vkbss_key_g1

0xf26b,	// (0x0003b537) cell_vkbss_key_t1_ParamLimits

0xf26b,	// (0x0003b537) cell_vkbss_key_t1

0x7744,	// (0x00033a10) cell_ituss_key_pane_ParamLimits

0x7744,	// (0x00033a10) cell_ituss_key_pane

0xf2c7,	// (0x0003b593) bg_cell_ituss_key_g1_ParamLimits

0xf2c7,	// (0x0003b593) bg_cell_ituss_key_g1

0xf2d3,	// (0x0003b59f) cell_ituss_key_pane_g1_ParamLimits

0xf2d3,	// (0x0003b59f) cell_ituss_key_pane_g1

0x7755,	// (0x00033a21) cell_ituss_key_pane_g2_ParamLimits

0x7755,	// (0x00033a21) cell_ituss_key_pane_g2

0x0005,

0xfed4,	// (0x0003c1a0) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x0003c1a0) cell_ituss_key_pane_g

0x77d9,	// (0x00033aa5) cell_ituss_key_t1_ParamLimits

0x77d9,	// (0x00033aa5) cell_ituss_key_t1

0x7813,	// (0x00033adf) cell_ituss_key_t2_ParamLimits

0x7813,	// (0x00033adf) cell_ituss_key_t2

0x7845,	// (0x00033b11) cell_ituss_key_t3_ParamLimits

0x7845,	// (0x00033b11) cell_ituss_key_t3

0x7876,	// (0x00033b42) cell_ituss_key_t4_ParamLimits

0x7876,	// (0x00033b42) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x0003c1ad) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0003c1ad) cell_ituss_key_t

0xf2f9,	// (0x0003b5c5) cell_vkbss_key_3p_pane_g1

0xf301,	// (0x0003b5cd) cell_vkbss_key_3p_pane_g2

0xf309,	// (0x0003b5d5) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0003c1b8) cell_vkbss_key_3p_pane_g

0x9181,	// (0x0003544d) bg_popup_fep_char_preview_window_cp02

0xf311,	// (0x0003b5dd) popup_fep_char_pre_window_t1

0xe663,	// (0x0003a92f) main_ai5_sk_pane

0xed7c,	// (0x0003b048) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed88,	// (0x0003b054) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc702,	// (0x000389ce) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed9d,	// (0x0003b069) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb8,	// (0x0003c184) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda9,	// (0x0003b075) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8255,	// (0x00034521) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31f,	// (0x0003b5eb) main_ai5_sk_pane_g1

0x9e97,	// (0x00036163) popup_query_code_window_g1

0xf191,	// (0x0003b45d) popup_fep_vkb_icf_pane

0xf1be,	// (0x0003b48a) popup_fep_vtchi_icf_pane

0xf328,	// (0x0003b5f4) bg_icf_pane

0xf328,	// (0x0003b5f4) list_vkb_icf_pane

0xf334,	// (0x0003b600) bg_icf_pane_cp01

0xf347,	// (0x0003b613) vtchi_icf_list_pane

0xf3a7,	// (0x0003b673) list_vkb_icf_pane_t1_ParamLimits

0xf3a7,	// (0x0003b673) list_vkb_icf_pane_t1

0xf3c5,	// (0x0003b691) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0003b691) vtchi_icf_list_pane_t1

0xf17b,	// (0x0003b447) popup_fep_ituss_window_ParamLimits

0xf1be,	// (0x0003b48a) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e7,	// (0x0003b4b3) ituss_keypad_pane_ParamLimits

0x76d0,	// (0x0003399c) ituss_sks_pane

0xf328,	// (0x0003b5f4) bg_icf_pane_ParamLimits

0xf14b,	// (0x0003b417) icf_edit_indi_pane_ParamLimits

0xf14b,	// (0x0003b417) icf_edit_indi_pane

0xf328,	// (0x0003b5f4) list_vkb_icf_pane_ParamLimits

0xf334,	// (0x0003b600) bg_icf_pane_cp01_ParamLimits

0xf166,	// (0x0003b432) icf_edit_indi_pane_cp01_ParamLimits

0xf166,	// (0x0003b432) icf_edit_indi_pane_cp01

0xf347,	// (0x0003b613) vtchi_query_pane

0xe4df,	// (0x0003a7ab) icf_edit_indi_pane_g1_ParamLimits

0xe4df,	// (0x0003a7ab) icf_edit_indi_pane_g1

0xf43a,	// (0x0003b706) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0003b706) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x0003c1e3) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x0003c1e3) icf_edit_indi_pane_g

0xf44e,	// (0x0003b71a) icf_edit_indi_pane_t1

0xf3e3,	// (0x0003b6af) bg_input_focus_pane_cp042

0x8184,	// (0x00034450) vtchi_button_pane

0xf3ec,	// (0x0003b6b8) vtchi_query_pane_t1

0xf3fa,	// (0x0003b6c6) vtchi_query_pane_t2

0xf408,	// (0x0003b6d4) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x0003c1d2) vtchi_query_pane_t

0x4646,	// (0x00030912) bg_button_pane_cp13

0xf416,	// (0x0003b6e2) vtchi_button_pane_g1

0x78b9,	// (0x00033b85) ituss_sks_pane_g1

0x78c4,	// (0x00033b90) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x0003c1d9) ituss_sks_pane_g

0xf41e,	// (0x0003b6ea) ituss_sks_pane_t1

0xf42c,	// (0x0003b6f8) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x0003c1de) ituss_sks_pane_t

0xbaa4,	// (0x00037d70) indicator_nsta_pane_cp_g1

0xbaad,	// (0x00037d79) indicator_nsta_pane_cp_g2

0xbab5,	// (0x00037d81) indicator_nsta_pane_cp_g3

0xbabd,	// (0x00037d89) indicator_nsta_pane_cp_g4

0xbaad,	// (0x00037d79) indicator_nsta_pane_cp_g5

0xbab5,	// (0x00037d81) indicator_nsta_pane_cp_g6

0x0005,

0xfa8a,	// (0x0003bd56) indicator_nsta_pane_cp_g

0xe23b,	// (0x0003a507) cell_graphic2_pane_t2_ParamLimits

0xe23b,	// (0x0003a507) cell_graphic2_pane_t2

0x0001,

0xfda3,	// (0x0003c06f) cell_graphic2_pane_t_ParamLimits

0xfda3,	// (0x0003c06f) cell_graphic2_pane_t

0xe267,	// (0x0003a533) cell_graphic2_control_pane_t1

0x8c2e,	// (0x00034efa) signal_pane_g3_ParamLimits

0x8c2e,	// (0x00034efa) signal_pane_g3

0x8c40,	// (0x00034f0c) signal_pane_g4_ParamLimits

0x8c40,	// (0x00034f0c) signal_pane_g4

0xf135,	// (0x0003b401) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf135,	// (0x0003b401) cell_ai5_widget_list_row_pane_t3

0xf2e7,	// (0x0003b5b3) cell_ituss_key_pane_t1_ParamLimits

0xf2e7,	// (0x0003b5b3) cell_ituss_key_pane_t1

0x9ad4,	// (0x00035da0) form_field_data_wide_pane_vc_t2_ParamLimits

0x9ad4,	// (0x00035da0) form_field_data_wide_pane_vc_t2

0x9ae8,	// (0x00035db4) form_field_data_wide_pane_vc_t3_ParamLimits

0x9ae8,	// (0x00035db4) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0003bab0) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003bab0) form_field_data_wide_pane_vc_t

0xb74e,	// (0x00037a1a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb74e,	// (0x00037a1a) form_field_slider_wide_pane_vc_t3

0xb82c,	// (0x00037af8) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb82c,	// (0x00037af8) form_field_popup_wide_pane_vc_t2

0xb843,	// (0x00037b0f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb843,	// (0x00037b0f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa79,	// (0x0003bd45) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa79,	// (0x0003bd45) form_field_popup_wide_pane_vc_t

0x748a,	// (0x00033756) aid_fshwr2_btn_pane_ParamLimits

0x749a,	// (0x00033766) aid_fshwr2_syb_pane_ParamLimits

0x74ae,	// (0x0003377a) aid_fshwr2_txt_pane_ParamLimits

0x6cb9,	// (0x00032f85) fshwr2_bg_pane_ParamLimits

0x74be,	// (0x0003378a) fshwr2_func_candi_pane_ParamLimits

0x74e2,	// (0x000337ae) fshwr2_hwr_syb_pane_ParamLimits

0x74fc,	// (0x000337c8) fshwr2_icf_pane_ParamLimits

0x6595,	// (0x00032861) list_double_graphic_pane_vc_g4_ParamLimits

0x6595,	// (0x00032861) list_double_graphic_pane_vc_g4

0x7775,	// (0x00033a41) cell_ituss_key_pane_g3_ParamLimits

0x7775,	// (0x00033a41) cell_ituss_key_pane_g3

0x78a7,	// (0x00033b73) cell_ituss_key_t5_ParamLimits

0x78a7,	// (0x00033b73) cell_ituss_key_t5

0xf1a7,	// (0x0003b473) popup_fep_vkbss_window_ParamLimits

0xe66d,	// (0x0003a939) aid_cell_ai5_quarter

0xf44e,	// (0x0003b71a) icf_edit_indi_pane_t1_ParamLimits

0x7cf9,	// (0x00033fc5) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7cf9,	// (0x00033fc5) aid_tch_indicator_popup_pane_cp2

0x7d0c,	// (0x00033fd8) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7d0c,	// (0x00033fd8) aid_tch_query_popup_data_pane_cp2

0x9e3f,	// (0x0003610b) aid_tch_query_popup_pane_ParamLimits

0x9e3f,	// (0x0003610b) aid_tch_query_popup_pane

0x9e3f,	// (0x0003610b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e3f,	// (0x0003610b) aid_tch_query_popup_data_pane_cp1

0x94a5,	// (0x00035771) cell_fshwr2_syb_bg_pane_ParamLimits

0x75fc,	// (0x000338c8) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7610,	// (0x000338dc) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf191,	// (0x0003b45d) popup_fep_vkb_icf_pane_ParamLimits

0x72ca,	// (0x00033596) bg_popup_fep_char_preview_window_g10

0xe7a2,	// (0x0003aa6e) cell_ai5_widget_pane_g11_ParamLimits

0xe7a2,	// (0x0003aa6e) cell_ai5_widget_pane_g11

0xe7ae,	// (0x0003aa7a) cell_ai5_widget_pane_g12_ParamLimits

0xe7ae,	// (0x0003aa7a) cell_ai5_widget_pane_g12

0xe7ba,	// (0x0003aa86) cell_ai5_widget_pane_g13_ParamLimits

0xe7ba,	// (0x0003aa86) cell_ai5_widget_pane_g13

0xe8e9,	// (0x0003abb5) cell_ai5_widget_pane_t11_ParamLimits

0xe8e9,	// (0x0003abb5) cell_ai5_widget_pane_t11

0xe8fb,	// (0x0003abc7) cell_ai5_widget_pane_t12_ParamLimits

0xe8fb,	// (0x0003abc7) cell_ai5_widget_pane_t12

0x7781,	// (0x00033a4d) cell_ituss_key_pane_g4_ParamLimits

0x7781,	// (0x00033a4d) cell_ituss_key_pane_g4

0x779d,	// (0x00033a69) cell_ituss_key_pane_g5_ParamLimits

0x779d,	// (0x00033a69) cell_ituss_key_pane_g5

0x77b9,	// (0x00033a85) cell_ituss_key_pane_g6_ParamLimits

0x77b9,	// (0x00033a85) cell_ituss_key_pane_g6

0x99cf,	// (0x00035c9b) bg_icf_pane_g1

0xf34f,	// (0x0003b61b) bg_icf_pane_g2

0xf35b,	// (0x0003b627) bg_icf_pane_g3

0xf365,	// (0x0003b631) bg_icf_pane_g4

0xf371,	// (0x0003b63d) bg_icf_pane_g5

0xf37b,	// (0x0003b647) bg_icf_pane_g6

0xf387,	// (0x0003b653) bg_icf_pane_g7

0xf391,	// (0x0003b65d) bg_icf_pane_g8

0xf39d,	// (0x0003b669) bg_icf_pane_g9

0x0008,

0xfef3,	// (0x0003c1bf) bg_icf_pane_g

0xf1d4,	// (0x0003b4a0) popup_hyb_candi_window_ParamLimits

0xf1d4,	// (0x0003b4a0) popup_hyb_candi_window

0x9a43,	// (0x00035d0f) bg_popup_sub_pane_cp01_ParamLimits

0x9a43,	// (0x00035d0f) bg_popup_sub_pane_cp01

0xf467,	// (0x0003b733) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0003b733) entry_hyb_candi_pane

0xf476,	// (0x0003b742) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0003b742) grid_hyb_candi_pane

0xf48b,	// (0x0003b757) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0003b757) grid_hyb_phrase_pane

0xf49a,	// (0x0003b766) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0003b766) cell_hyb_candi_pane

0xf4bd,	// (0x0003b789) cell_hyb_candi_scroll_pane

0x8b54,	// (0x00034e20) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0003b792) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0003b7a0) cell_hyb_phrase_pane

0x8b54,	// (0x00034e20) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0003b7a9) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0003b7b7) entry_hyb_candi_pane_t1

0x9181,	// (0x0003544d) input_focus_pane_cp06

0xf4f9,	// (0x0003b7c5) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0003b7cd) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0003b7d5) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0003b7dd) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0003b7e5) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0003b7ed) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

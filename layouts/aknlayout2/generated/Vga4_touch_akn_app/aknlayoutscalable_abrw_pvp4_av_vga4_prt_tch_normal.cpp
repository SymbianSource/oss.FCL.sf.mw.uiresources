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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000b96c };

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
0x6671,	// (0x00011fdd) Screen

0x667d,	// (0x00011fe9) application_window_ParamLimits

0x667d,	// (0x00011fe9) application_window

0x3e39,	// (0x0000f7a5) screen_g1

0x4a76,	// (0x000103e2) area_bottom_pane_ParamLimits

0x4a76,	// (0x000103e2) area_bottom_pane

0x4b36,	// (0x000104a2) area_top_pane_ParamLimits

0x4b36,	// (0x000104a2) area_top_pane

0x4bd4,	// (0x00010540) main_pane_ParamLimits

0x4bd4,	// (0x00010540) main_pane

0x3fb2,	// (0x0000f91e) misc_graphics

0x8e1e,	// (0x0001478a) battery_pane_ParamLimits

0x8e1e,	// (0x0001478a) battery_pane

0x9bb8,	// (0x00015524) bg_status_flat_pane_g8

0x9bc0,	// (0x0001552c) bg_status_flat_pane_g9

0x8ee6,	// (0x00014852) context_pane_ParamLimits

0x8ee6,	// (0x00014852) context_pane

0x900a,	// (0x00014976) navi_pane_ParamLimits

0x900a,	// (0x00014976) navi_pane

0x9099,	// (0x00014a05) signal_pane_ParamLimits

0x9099,	// (0x00014a05) signal_pane

0x0008,

0xf885,	// (0x0001b1f1) bg_status_flat_pane_g

0x9106,	// (0x00014a72) status_pane_g1_ParamLimits

0x9106,	// (0x00014a72) status_pane_g1

0x911a,	// (0x00014a86) status_pane_g2_ParamLimits

0x911a,	// (0x00014a86) status_pane_g2

0x9126,	// (0x00014a92) status_pane_g3_ParamLimits

0x9126,	// (0x00014a92) status_pane_g3

0x0004,

0xf7b3,	// (0x0001b11f) status_pane_g_ParamLimits

0xf7b3,	// (0x0001b11f) status_pane_g

0x915a,	// (0x00014ac6) title_pane_ParamLimits

0x915a,	// (0x00014ac6) title_pane

0x9197,	// (0x00014b03) uni_indicator_pane_ParamLimits

0x9197,	// (0x00014b03) uni_indicator_pane

0x870b,	// (0x00014077) bg_list_pane_ParamLimits

0x870b,	// (0x00014077) bg_list_pane

0x872b,	// (0x00014097) find_pane

0x8733,	// (0x0001409f) listscroll_app_pane_ParamLimits

0x8733,	// (0x0001409f) listscroll_app_pane

0x873f,	// (0x000140ab) listscroll_form_pane

0x8747,	// (0x000140b3) listscroll_gen_pane_ParamLimits

0x8747,	// (0x000140b3) listscroll_gen_pane

0x873f,	// (0x000140ab) listscroll_set_pane

0x78ec,	// (0x00013258) main_idle_act_pane

0x83df,	// (0x00013d4b) main_idle_trad_pane

0x83df,	// (0x00013d4b) main_list_empty_pane

0x876d,	// (0x000140d9) main_midp_pane

0x8779,	// (0x000140e5) main_pane_g1_ParamLimits

0x8779,	// (0x000140e5) main_pane_g1

0x8787,	// (0x000140f3) popup_ai_message_window_ParamLimits

0x8787,	// (0x000140f3) popup_ai_message_window

0x883f,	// (0x000141ab) popup_fep_china_uni_window_ParamLimits

0x883f,	// (0x000141ab) popup_fep_china_uni_window

0x889f,	// (0x0001420b) popup_fep_japan_candidate_window_ParamLimits

0x889f,	// (0x0001420b) popup_fep_japan_candidate_window

0x88c9,	// (0x00014235) popup_fep_japan_predictive_window_ParamLimits

0x88c9,	// (0x00014235) popup_fep_japan_predictive_window

0x88ff,	// (0x0001426b) popup_find_window

0x890c,	// (0x00014278) popup_grid_graphic_window_ParamLimits

0x890c,	// (0x00014278) popup_grid_graphic_window

0x893a,	// (0x000142a6) popup_large_graphic_colour_window

0x8960,	// (0x000142cc) popup_menu_window_ParamLimits

0x8960,	// (0x000142cc) popup_menu_window

0x8b2a,	// (0x00014496) popup_note_image_window

0x8b14,	// (0x00014480) popup_note_wait_window_ParamLimits

0x8b14,	// (0x00014480) popup_note_wait_window

0x8b14,	// (0x00014480) popup_note_window_ParamLimits

0x8b14,	// (0x00014480) popup_note_window

0x8b90,	// (0x000144fc) popup_query_code_window_ParamLimits

0x8b90,	// (0x000144fc) popup_query_code_window

0x8ba6,	// (0x00014512) popup_query_data_code_window_ParamLimits

0x8ba6,	// (0x00014512) popup_query_data_code_window

0x8bc9,	// (0x00014535) popup_query_data_window_ParamLimits

0x8bc9,	// (0x00014535) popup_query_data_window

0x8beb,	// (0x00014557) popup_query_sat_info_window_ParamLimits

0x8beb,	// (0x00014557) popup_query_sat_info_window

0x8c2a,	// (0x00014596) popup_snote_single_graphic_window_ParamLimits

0x8c2a,	// (0x00014596) popup_snote_single_graphic_window

0x8c2a,	// (0x00014596) popup_snote_single_text_window_ParamLimits

0x8c2a,	// (0x00014596) popup_snote_single_text_window

0x8c41,	// (0x000145ad) popup_sub_window_general

0x8d87,	// (0x000146f3) popup_window_general_ParamLimits

0x8d87,	// (0x000146f3) popup_window_general

0x8da0,	// (0x0001470c) power_save_pane

0x534b,	// (0x00010cb7) control_pane_g1_ParamLimits

0x534b,	// (0x00010cb7) control_pane_g1

0x5374,	// (0x00010ce0) control_pane_g2_ParamLimits

0x5374,	// (0x00010ce0) control_pane_g2

0x86ac,	// (0x00014018) control_pane_g3_ParamLimits

0x86ac,	// (0x00014018) control_pane_g3

0x0007,

0xf79b,	// (0x0001b107) control_pane_g_ParamLimits

0xf79b,	// (0x0001b107) control_pane_g

0x53bc,	// (0x00010d28) control_pane_t1_ParamLimits

0x53bc,	// (0x00010d28) control_pane_t1

0x540e,	// (0x00010d7a) control_pane_t2_ParamLimits

0x540e,	// (0x00010d7a) control_pane_t2

0x0002,

0xf7ac,	// (0x0001b118) control_pane_t_ParamLimits

0xf7ac,	// (0x0001b118) control_pane_t

0x85cd,	// (0x00013f39) navi_navi_volume_pane_cp1

0x85d6,	// (0x00013f42) status_small_icon_pane

0x85de,	// (0x00013f4a) status_small_pane_g1_ParamLimits

0x85de,	// (0x00013f4a) status_small_pane_g1

0x8612,	// (0x00013f7e) status_small_pane_g2_ParamLimits

0x8612,	// (0x00013f7e) status_small_pane_g2

0x861e,	// (0x00013f8a) status_small_pane_g3_ParamLimits

0x861e,	// (0x00013f8a) status_small_pane_g3

0x862a,	// (0x00013f96) status_small_pane_g4_ParamLimits

0x862a,	// (0x00013f96) status_small_pane_g4

0x8636,	// (0x00013fa2) status_small_pane_g5_ParamLimits

0x8636,	// (0x00013fa2) status_small_pane_g5

0x8645,	// (0x00013fb1) status_small_pane_g6_ParamLimits

0x8645,	// (0x00013fb1) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001b0f6) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001b0f6) status_small_pane_g

0x8675,	// (0x00013fe1) status_small_pane_t1

0x8698,	// (0x00014004) status_small_wait_pane_ParamLimits

0x8698,	// (0x00014004) status_small_wait_pane

0x7dea,	// (0x00013756) aid_levels_signal_ParamLimits

0x7dea,	// (0x00013756) aid_levels_signal

0x7dfc,	// (0x00013768) signal_pane_g1_ParamLimits

0x7dfc,	// (0x00013768) signal_pane_g1

0x7e11,	// (0x0001377d) signal_pane_g2_ParamLimits

0x7e11,	// (0x0001377d) signal_pane_g2

0x0001,

0xf71f,	// (0x0001b08b) signal_pane_g_ParamLimits

0xf71f,	// (0x0001b08b) signal_pane_g

0x7e26,	// (0x00013792) context_pane_g1

0x668d,	// (0x00011ff9) title_pane_g1

0x66b7,	// (0x00012023) title_pane_t1

0x671f,	// (0x0001208b) title_pane_t2

0x6745,	// (0x000120b1) title_pane_t3

0x0002,

0xf573,	// (0x0001aedf) title_pane_t

0x91af,	// (0x00014b1b) aid_levels_battery_ParamLimits

0x91af,	// (0x00014b1b) aid_levels_battery

0x91c3,	// (0x00014b2f) battery_pane_g1_ParamLimits

0x91c3,	// (0x00014b2f) battery_pane_g1

0x91d9,	// (0x00014b45) battery_pane_g2_ParamLimits

0x91d9,	// (0x00014b45) battery_pane_g2

0x0001,

0xf7be,	// (0x0001b12a) battery_pane_g_ParamLimits

0xf7be,	// (0x0001b12a) battery_pane_g

0xa508,	// (0x00015e74) uni_indicator_pane_g1

0xa51d,	// (0x00015e89) uni_indicator_pane_g2

0xa533,	// (0x00015e9f) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x0001b299) uni_indicator_pane_g

0x824d,	// (0x00013bb9) navi_icon_pane_ParamLimits

0x824d,	// (0x00013bb9) navi_icon_pane

0x8194,	// (0x00013b00) navi_midp_pane

0x8269,	// (0x00013bd5) navi_navi_pane

0x8273,	// (0x00013bdf) navi_text_pane_ParamLimits

0x8273,	// (0x00013bdf) navi_text_pane

0x3e39,	// (0x0000f7a5) status_small_wait_pane_g1

0x6ba3,	// (0x0001250f) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x0001b294) status_small_wait_pane_g

0xa21b,	// (0x00015b87) navi_navi_icon_text_pane

0xa223,	// (0x00015b8f) navi_navi_pane_g1_ParamLimits

0xa223,	// (0x00015b8f) navi_navi_pane_g1

0xa235,	// (0x00015ba1) navi_navi_pane_g2_ParamLimits

0xa235,	// (0x00015ba1) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x0001b262) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x0001b262) navi_navi_pane_g

0xa247,	// (0x00015bb3) navi_navi_tabs_pane

0xa250,	// (0x00015bbc) navi_navi_text_pane

0xa21b,	// (0x00015b87) navi_navi_volume_pane

0xa1f4,	// (0x00015b60) navi_text_pane_t1

0xa1e5,	// (0x00015b51) navi_icon_pane_g1

0xa138,	// (0x00015aa4) navi_navi_text_pane_t1

0x57b1,	// (0x0001111d) navi_navi_volume_pane_g1

0x57b9,	// (0x00011125) volume_small_pane

0xa09e,	// (0x00015a0a) navi_navi_icon_text_pane_g1

0xa0a6,	// (0x00015a12) navi_navi_icon_text_pane_t1

0x8269,	// (0x00013bd5) navi_tabs_2_long_pane

0x8269,	// (0x00013bd5) navi_tabs_2_pane

0x8269,	// (0x00013bd5) navi_tabs_3_long_pane

0x8269,	// (0x00013bd5) navi_tabs_3_pane

0x8269,	// (0x00013bd5) navi_tabs_4_pane

0x5791,	// (0x000110fd) tabs_2_active_pane_ParamLimits

0x5791,	// (0x000110fd) tabs_2_active_pane

0x57a1,	// (0x0001110d) tabs_2_passive_pane_ParamLimits

0x57a1,	// (0x0001110d) tabs_2_passive_pane

0x575f,	// (0x000110cb) tabs_3_active_pane_ParamLimits

0x575f,	// (0x000110cb) tabs_3_active_pane

0x576f,	// (0x000110db) tabs_3_passive_pane_ParamLimits

0x576f,	// (0x000110db) tabs_3_passive_pane

0x5780,	// (0x000110ec) tabs_3_passive_pane_cp_ParamLimits

0x5780,	// (0x000110ec) tabs_3_passive_pane_cp

0x5713,	// (0x0001107f) tabs_4_active_pane_ParamLimits

0x5713,	// (0x0001107f) tabs_4_active_pane

0x5726,	// (0x00011092) tabs_4_passive_pane_ParamLimits

0x5726,	// (0x00011092) tabs_4_passive_pane

0x5737,	// (0x000110a3) tabs_4_passive_pane_cp_ParamLimits

0x5737,	// (0x000110a3) tabs_4_passive_pane_cp

0x5748,	// (0x000110b4) tabs_4_passive_pane_cp2_ParamLimits

0x5748,	// (0x000110b4) tabs_4_passive_pane_cp2

0x56ef,	// (0x0001105b) tabs_2_long_active_pane_ParamLimits

0x56ef,	// (0x0001105b) tabs_2_long_active_pane

0x5701,	// (0x0001106d) tabs_2_long_passive_pane_ParamLimits

0x5701,	// (0x0001106d) tabs_2_long_passive_pane

0x56b0,	// (0x0001101c) tabs_3_long_active_pane_ParamLimits

0x56b0,	// (0x0001101c) tabs_3_long_active_pane

0x56c3,	// (0x0001102f) tabs_3_long_passive_pane_ParamLimits

0x56c3,	// (0x0001102f) tabs_3_long_passive_pane

0x56dc,	// (0x00011048) tabs_3_long_passive_pane_cp_ParamLimits

0x56dc,	// (0x00011048) tabs_3_long_passive_pane_cp

0x5656,	// (0x00010fc2) volume_small_pane_g1

0x565f,	// (0x00010fcb) volume_small_pane_g2

0x5668,	// (0x00010fd4) volume_small_pane_g3

0x5671,	// (0x00010fdd) volume_small_pane_g4

0x567a,	// (0x00010fe6) volume_small_pane_g5

0x5683,	// (0x00010fef) volume_small_pane_g6

0x568c,	// (0x00010ff8) volume_small_pane_g7

0x5695,	// (0x00011001) volume_small_pane_g8

0x569e,	// (0x0001100a) volume_small_pane_g9

0x56a7,	// (0x00011013) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x0001b22e) volume_small_pane_g

0x6757,	// (0x000120c3) bg_active_tab_pane_cp2_ParamLimits

0x6757,	// (0x000120c3) bg_active_tab_pane_cp2

0x6765,	// (0x000120d1) tabs_3_active_pane_g1

0x676d,	// (0x000120d9) tabs_3_active_pane_t1

0x6757,	// (0x000120c3) bg_passive_tab_pane_cp2_ParamLimits

0x6757,	// (0x000120c3) bg_passive_tab_pane_cp2

0x6765,	// (0x000120d1) tabs_3_passive_pane_g1

0x676d,	// (0x000120d9) tabs_3_passive_pane_t1

0x6757,	// (0x000120c3) bg_active_tab_pane_cp3_ParamLimits

0x6757,	// (0x000120c3) bg_active_tab_pane_cp3

0x677f,	// (0x000120eb) tabs_4_active_pane_g1

0x6787,	// (0x000120f3) tabs_4_active_pane_t1

0x6757,	// (0x000120c3) bg_passive_tab_pane_cp3_ParamLimits

0x6757,	// (0x000120c3) bg_passive_tab_pane_cp3

0x677f,	// (0x000120eb) tabs_4_1_passive_pane_g1

0x6787,	// (0x000120f3) tabs_4_1_passive_pane_t1

0x876d,	// (0x000140d9) list_highlight_pane_cp2

0xa7bf,	// (0x0001612b) list_set_pane_ParamLimits

0xa7bf,	// (0x0001612b) list_set_pane

0xa887,	// (0x000161f3) main_pane_set_t1_ParamLimits

0xa887,	// (0x000161f3) main_pane_set_t1

0xa8a7,	// (0x00016213) main_pane_set_t2_ParamLimits

0xa8a7,	// (0x00016213) main_pane_set_t2

0xa8bb,	// (0x00016227) main_pane_set_t3_ParamLimits

0xa8bb,	// (0x00016227) main_pane_set_t3

0xa8cf,	// (0x0001623b) main_pane_set_t4_ParamLimits

0xa8cf,	// (0x0001623b) main_pane_set_t4

0x0003,

0xf992,	// (0x0001b2fe) main_pane_set_t_ParamLimits

0xf992,	// (0x0001b2fe) main_pane_set_t

0xa8ef,	// (0x0001625b) setting_code_pane

0xa8f9,	// (0x00016265) setting_slider_graphic_pane

0xa8f9,	// (0x00016265) setting_slider_pane

0xa8f9,	// (0x00016265) setting_text_pane

0xa8f9,	// (0x00016265) setting_volume_pane

0x4e2b,	// (0x00010797) volume_set_pane

0x6757,	// (0x000120c3) bg_set_opt_pane_cp

0x4e35,	// (0x000107a1) setting_slider_pane_t1

0x4e4b,	// (0x000107b7) setting_slider_pane_t2

0x4e65,	// (0x000107d1) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0001aee6) setting_slider_pane_t

0x4e7d,	// (0x000107e9) slider_set_pane

0x3fb2,	// (0x0000f91e) bg_set_opt_pane_cp2

0x6799,	// (0x00012105) setting_slider_graphic_pane_g1

0x4e93,	// (0x000107ff) setting_slider_graphic_pane_t1

0x4ea3,	// (0x0001080f) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0001aeed) setting_slider_graphic_pane_t

0x4eb3,	// (0x0001081f) slider_set_pane_cp

0x3fb2,	// (0x0000f91e) input_focus_pane_cp1

0xa780,	// (0x000160ec) list_set_text_pane

0x3e39,	// (0x0000f7a5) setting_text_pane_g1

0x3fb2,	// (0x0000f91e) input_focus_pane_cp2

0x3e39,	// (0x0000f7a5) setting_code_pane_g1

0x67a2,	// (0x0001210e) setting_code_pane_t1

0x67b0,	// (0x0001211c) set_text_pane_t1_ParamLimits

0x67b0,	// (0x0001211c) set_text_pane_t1

0x76cf,	// (0x0001303b) set_opt_bg_pane_g1

0x76d7,	// (0x00013043) set_opt_bg_pane_g2

0xa758,	// (0x000160c4) set_opt_bg_pane_g3

0x76e7,	// (0x00013053) set_opt_bg_pane_g4

0x76ef,	// (0x0001305b) set_opt_bg_pane_g5

0x76f7,	// (0x00013063) set_opt_bg_pane_g6

0xa762,	// (0x000160ce) set_opt_bg_pane_g7

0xa76c,	// (0x000160d8) set_opt_bg_pane_g8

0xa776,	// (0x000160e2) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x0001b2eb) set_opt_bg_pane_g

0xa74b,	// (0x000160b7) slider_set_pane_g1

0x583a,	// (0x000111a6) slider_set_pane_g2

0x0006,

0xf970,	// (0x0001b2dc) slider_set_pane_g

0x57c2,	// (0x0001112e) volume_set_pane_g1

0x57cc,	// (0x00011138) volume_set_pane_g2

0x57d6,	// (0x00011142) volume_set_pane_g3

0x57e0,	// (0x0001114c) volume_set_pane_g4

0x57ea,	// (0x00011156) volume_set_pane_g5

0x57f4,	// (0x00011160) volume_set_pane_g6

0x57fe,	// (0x0001116a) volume_set_pane_g7

0x5808,	// (0x00011174) volume_set_pane_g8

0x5812,	// (0x0001117e) volume_set_pane_g9

0x581c,	// (0x00011188) volume_set_pane_g10

0x0009,

0xf948,	// (0x0001b2b4) volume_set_pane_g

0x67ca,	// (0x00012136) indicator_pane_ParamLimits

0x67ca,	// (0x00012136) indicator_pane

0x67d6,	// (0x00012142) main_idle_pane_g2_ParamLimits

0x67d6,	// (0x00012142) main_idle_pane_g2

0x67fe,	// (0x0001216a) main_pane_idle_g1_ParamLimits

0x67fe,	// (0x0001216a) main_pane_idle_g1

0x680c,	// (0x00012178) popup_clock_digital_analogue_window_ParamLimits

0x680c,	// (0x00012178) popup_clock_digital_analogue_window

0x6823,	// (0x0001218f) soft_indicator_pane_ParamLimits

0x6823,	// (0x0001218f) soft_indicator_pane

0x6831,	// (0x0001219d) wallpaper_pane_ParamLimits

0x6831,	// (0x0001219d) wallpaper_pane

0x3e39,	// (0x0000f7a5) wallpaper_pane_g1

0x6845,	// (0x000121b1) indicator_pane_g1_ParamLimits

0x6845,	// (0x000121b1) indicator_pane_g1

0xac1e,	// (0x0001658a) navi_navi_icon_text_pane_srt_g1

0x6860,	// (0x000121cc) soft_indicator_pane_t1

0x687a,	// (0x000121e6) aid_ps_area_pane

0x688b,	// (0x000121f7) aid_ps_clock_pane

0x6899,	// (0x00012205) aid_ps_indicator_pane

0x68a5,	// (0x00012211) indicator_ps_pane_ParamLimits

0x68a5,	// (0x00012211) indicator_ps_pane

0x68b4,	// (0x00012220) power_save_pane_g1_ParamLimits

0x68b4,	// (0x00012220) power_save_pane_g1

0x68c0,	// (0x0001222c) power_save_pane_g2_ParamLimits

0x68c0,	// (0x0001222c) power_save_pane_g2

0x4a2a,	// (0x00010396) aid_navinavi_width_pane

0x687a,	// (0x000121e6) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0001aef2) power_save_pane_g_ParamLimits

0xf586,	// (0x0001aef2) power_save_pane_g

0x68ce,	// (0x0001223a) power_save_pane_t1_ParamLimits

0x68ce,	// (0x0001223a) power_save_pane_t1

0x688b,	// (0x000121f7) aid_ps_clock_pane_ParamLimits

0x6899,	// (0x00012205) aid_ps_indicator_pane_ParamLimits

0x68e0,	// (0x0001224c) power_save_pane_t4_ParamLimits

0x68e0,	// (0x0001224c) power_save_pane_t4

0x0001,

0xf58b,	// (0x0001aef7) power_save_pane_t_ParamLimits

0xf58b,	// (0x0001aef7) power_save_pane_t

0x690a,	// (0x00012276) power_save_t3_ParamLimits

0x690a,	// (0x00012276) power_save_t3

0x68f5,	// (0x00012261) power_save_t2_ParamLimits

0x68f5,	// (0x00012261) power_save_t2

0x691f,	// (0x0001228b) indicator_ps_pane_g1

0x6928,	// (0x00012294) ai_gene_pane_ParamLimits

0x6928,	// (0x00012294) ai_gene_pane

0x6934,	// (0x000122a0) ai_links_pane_ParamLimits

0x6934,	// (0x000122a0) ai_links_pane

0x6940,	// (0x000122ac) indicator_pane_cp1_ParamLimits

0x6940,	// (0x000122ac) indicator_pane_cp1

0x694c,	// (0x000122b8) main_pane_idle_g1_cp_ParamLimits

0x694c,	// (0x000122b8) main_pane_idle_g1_cp

0x6958,	// (0x000122c4) popup_ai_links_title_window

0x6961,	// (0x000122cd) soft_indicator_pane_cp1_ParamLimits

0x6961,	// (0x000122cd) soft_indicator_pane_cp1

0xa4f6,	// (0x00015e62) ai_links_pane_g1

0xa4ff,	// (0x00015e6b) grid_ai_links_pane

0xa4db,	// (0x00015e47) ai_gene_pane_1

0xa4e4,	// (0x00015e50) ai_gene_pane_2

0xa4ed,	// (0x00015e59) list_highlight_pane_cp4

0xa4bb,	// (0x00015e27) cell_ai_link_pane_ParamLimits

0xa4bb,	// (0x00015e27) cell_ai_link_pane

0xa4b3,	// (0x00015e1f) cell_ai_link_pane_g1

0x6ba3,	// (0x0001250f) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x0001b28f) cell_ai_link_pane_g

0x3fb2,	// (0x0000f91e) grid_highlight_cp2

0x3fb2,	// (0x0000f91e) bg_popup_sub_pane_cp1

0x697b,	// (0x000122e7) popup_ai_links_title_window_t1

0xa3ff,	// (0x00015d6b) ai_gene_pane_1_g1_ParamLimits

0xa3ff,	// (0x00015d6b) ai_gene_pane_1_g1

0xa40b,	// (0x00015d77) ai_gene_pane_1_g2_ParamLimits

0xa40b,	// (0x00015d77) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x0001b285) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x0001b285) ai_gene_pane_1_g

0xa418,	// (0x00015d84) ai_gene_pane_1_t1_ParamLimits

0xa418,	// (0x00015d84) ai_gene_pane_1_t1

0xa44c,	// (0x00015db8) grid_ai_soft_ind_pane

0xa3ea,	// (0x00015d56) ai_gene_pane_2_t1_ParamLimits

0xa3ea,	// (0x00015d56) ai_gene_pane_2_t1

0x698a,	// (0x000122f6) main_pane_empty_t1_ParamLimits

0x698a,	// (0x000122f6) main_pane_empty_t1

0x69a2,	// (0x0001230e) main_pane_empty_t2_ParamLimits

0x69a2,	// (0x0001230e) main_pane_empty_t2

0x69b7,	// (0x00012323) main_pane_empty_t3_ParamLimits

0x69b7,	// (0x00012323) main_pane_empty_t3

0x69c9,	// (0x00012335) main_pane_empty_t4_ParamLimits

0x69c9,	// (0x00012335) main_pane_empty_t4

0x69db,	// (0x00012347) main_pane_empty_t5_ParamLimits

0x69db,	// (0x00012347) main_pane_empty_t5

0x0004,

0xf590,	// (0x0001aefc) main_pane_empty_t_ParamLimits

0xf590,	// (0x0001aefc) main_pane_empty_t

0x77ad,	// (0x00013119) bg_popup_window_pane_ParamLimits

0x77ad,	// (0x00013119) bg_popup_window_pane

0xa146,	// (0x00015ab2) find_popup_pane_cp2_ParamLimits

0xa146,	// (0x00015ab2) find_popup_pane_cp2

0xa152,	// (0x00015abe) heading_pane_ParamLimits

0xa152,	// (0x00015abe) heading_pane

0x3fb2,	// (0x0000f91e) bg_popup_sub_pane

0xa0c0,	// (0x00015a2c) bg_popup_window_pane_g1_ParamLimits

0xa0c0,	// (0x00015a2c) bg_popup_window_pane_g1

0xa0cc,	// (0x00015a38) bg_popup_window_pane_g2_ParamLimits

0xa0cc,	// (0x00015a38) bg_popup_window_pane_g2

0xa0d8,	// (0x00015a44) bg_popup_window_pane_g3_ParamLimits

0xa0d8,	// (0x00015a44) bg_popup_window_pane_g3

0xa0e4,	// (0x00015a50) bg_popup_window_pane_g4_ParamLimits

0xa0e4,	// (0x00015a50) bg_popup_window_pane_g4

0xa0f0,	// (0x00015a5c) bg_popup_window_pane_g5_ParamLimits

0xa0f0,	// (0x00015a5c) bg_popup_window_pane_g5

0xa0fc,	// (0x00015a68) bg_popup_window_pane_g6_ParamLimits

0xa0fc,	// (0x00015a68) bg_popup_window_pane_g6

0xa108,	// (0x00015a74) bg_popup_window_pane_g7_ParamLimits

0xa108,	// (0x00015a74) bg_popup_window_pane_g7

0xa114,	// (0x00015a80) bg_popup_window_pane_g8_ParamLimits

0xa114,	// (0x00015a80) bg_popup_window_pane_g8

0xa120,	// (0x00015a8c) bg_popup_window_pane_g9_ParamLimits

0xa120,	// (0x00015a8c) bg_popup_window_pane_g9

0xa12c,	// (0x00015a98) bg_popup_window_pane_g10_ParamLimits

0xa12c,	// (0x00015a98) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x0001b24d) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x0001b24d) bg_popup_window_pane_g

0xa055,	// (0x000159c1) bg_popup_heading_pane_ParamLimits

0xa055,	// (0x000159c1) bg_popup_heading_pane

0x58c2,	// (0x0001122e) tabs_4_passive_pane_cp_srt_ParamLimits

0x58c2,	// (0x0001122e) tabs_4_passive_pane_cp_srt

0x58d4,	// (0x00011240) tabs_4_passive_pane_srt_ParamLimits

0xa069,	// (0x000159d5) heading_pane_g2

0x58d4,	// (0x00011240) tabs_4_passive_pane_srt

0x876d,	// (0x000140d9) bg_passive_tab_pane_cp3_srt_ParamLimits

0x876d,	// (0x000140d9) bg_passive_tab_pane_cp3_srt

0xa071,	// (0x000159dd) heading_pane_t1_ParamLimits

0xa071,	// (0x000159dd) heading_pane_t1

0xa088,	// (0x000159f4) heading_pane_t2_ParamLimits

0xa088,	// (0x000159f4) heading_pane_t2

0x0001,

0xf8dc,	// (0x0001b248) heading_pane_t_ParamLimits

0xf8dc,	// (0x0001b248) heading_pane_t

0x9b80,	// (0x000154ec) bg_popup_heading_pane_g1

0x9c2f,	// (0x0001559b) bg_popup_heading_pane_g2

0x9c39,	// (0x000155a5) bg_popup_heading_pane_g3

0x9c43,	// (0x000155af) bg_popup_heading_pane_g4

0x9c4d,	// (0x000155b9) bg_popup_heading_pane_g5

0x9c57,	// (0x000155c3) bg_popup_heading_pane_g6

0x9c5f,	// (0x000155cb) bg_popup_heading_pane_g7

0x9c67,	// (0x000155d3) bg_popup_heading_pane_g8

0x9c71,	// (0x000155dd) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0001b204) bg_popup_heading_pane_g

0x92df,	// (0x00014c4b) bg_popup_sub_pane_g1

0x92ef,	// (0x00014c5b) bg_popup_sub_pane_g2

0x92e7,	// (0x00014c53) bg_popup_sub_pane_g3

0x92ff,	// (0x00014c6b) bg_popup_sub_pane_g4

0x92f7,	// (0x00014c63) bg_popup_sub_pane_g5

0x9307,	// (0x00014c73) bg_popup_sub_pane_g6

0x930f,	// (0x00014c7b) bg_popup_sub_pane_g7

0x931f,	// (0x00014c8b) bg_popup_sub_pane_g8

0x9317,	// (0x00014c83) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x0001b1de) bg_popup_sub_pane_g

0x69ed,	// (0x00012359) bg_popup_window_pane_cp5_ParamLimits

0x69ed,	// (0x00012359) bg_popup_window_pane_cp5

0x6a09,	// (0x00012375) popup_note_window_g1_ParamLimits

0x6a09,	// (0x00012375) popup_note_window_g1

0x6a15,	// (0x00012381) popup_note_window_t1_ParamLimits

0x6a15,	// (0x00012381) popup_note_window_t1

0x6a2b,	// (0x00012397) popup_note_window_t2_ParamLimits

0x6a2b,	// (0x00012397) popup_note_window_t2

0x6a41,	// (0x000123ad) popup_note_window_t3_ParamLimits

0x6a41,	// (0x000123ad) popup_note_window_t3

0x6a57,	// (0x000123c3) popup_note_window_t4_ParamLimits

0x6a57,	// (0x000123c3) popup_note_window_t4

0x6a7f,	// (0x000123eb) popup_note_window_t5_ParamLimits

0x6a7f,	// (0x000123eb) popup_note_window_t5

0x0004,

0xf59b,	// (0x0001af07) popup_note_window_t_ParamLimits

0xf59b,	// (0x0001af07) popup_note_window_t

0x6aa3,	// (0x0001240f) bg_popup_window_pane_cp6_ParamLimits

0x6aa3,	// (0x0001240f) bg_popup_window_pane_cp6

0x9afc,	// (0x00015468) popup_note_image_window_g1_ParamLimits

0x9afc,	// (0x00015468) popup_note_image_window_g1

0x9b08,	// (0x00015474) popup_note_image_window_g2_ParamLimits

0x9b08,	// (0x00015474) popup_note_image_window_g2

0x0001,

0xf866,	// (0x0001b1d2) popup_note_image_window_g_ParamLimits

0xf866,	// (0x0001b1d2) popup_note_image_window_g

0x9b21,	// (0x0001548d) popup_note_image_window_t1_ParamLimits

0x9b21,	// (0x0001548d) popup_note_image_window_t1

0x9b3a,	// (0x000154a6) popup_note_image_window_t2_ParamLimits

0x9b3a,	// (0x000154a6) popup_note_image_window_t2

0x9b53,	// (0x000154bf) popup_note_image_window_t3_ParamLimits

0x9b53,	// (0x000154bf) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x0001b1d7) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x0001b1d7) popup_note_image_window_t

0x99bc,	// (0x00015328) bg_popup_window_pane_cp7_ParamLimits

0x99bc,	// (0x00015328) bg_popup_window_pane_cp7

0x99ec,	// (0x00015358) popup_note_wait_window_g1_ParamLimits

0x99ec,	// (0x00015358) popup_note_wait_window_g1

0x99f8,	// (0x00015364) popup_note_wait_window_g2_ParamLimits

0x99f8,	// (0x00015364) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x0001b1c0) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x0001b1c0) popup_note_wait_window_g

0x9a10,	// (0x0001537c) popup_note_wait_window_t1_ParamLimits

0x9a10,	// (0x0001537c) popup_note_wait_window_t1

0x9a37,	// (0x000153a3) popup_note_wait_window_t2_ParamLimits

0x9a37,	// (0x000153a3) popup_note_wait_window_t2

0x9a55,	// (0x000153c1) popup_note_wait_window_t3_ParamLimits

0x9a55,	// (0x000153c1) popup_note_wait_window_t3

0x9a68,	// (0x000153d4) popup_note_wait_window_t4_ParamLimits

0x9a68,	// (0x000153d4) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x0001b1c7) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x0001b1c7) popup_note_wait_window_t

0x9a8d,	// (0x000153f9) wait_bar_pane_ParamLimits

0x9a8d,	// (0x000153f9) wait_bar_pane

0x3fb2,	// (0x0000f91e) wait_anim_pane

0x3fb2,	// (0x0000f91e) wait_border_pane

0x3e39,	// (0x0000f7a5) wait_anim_pane_g1

0x3e39,	// (0x0000f7a5) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0001b086) wait_anim_pane_g

0x9960,	// (0x000152cc) wait_border_pane_g1

0x996b,	// (0x000152d7) wait_border_pane_g2

0x9974,	// (0x000152e0) wait_border_pane_g3

0x0002,

0xf84d,	// (0x0001b1b9) wait_border_pane_g

0x97ca,	// (0x00015136) bg_popup_window_pane_cp16_ParamLimits

0x97ca,	// (0x00015136) bg_popup_window_pane_cp16

0x98ca,	// (0x00015236) indicator_popup_pane_cp4_ParamLimits

0x98ca,	// (0x00015236) indicator_popup_pane_cp4

0x98de,	// (0x0001524a) popup_query_data_window_t1_ParamLimits

0x98de,	// (0x0001524a) popup_query_data_window_t1

0x98f0,	// (0x0001525c) popup_query_data_window_t2_ParamLimits

0x98f0,	// (0x0001525c) popup_query_data_window_t2

0x9909,	// (0x00015275) popup_query_data_window_t3_ParamLimits

0x9909,	// (0x00015275) popup_query_data_window_t3

0x0002,

0xf846,	// (0x0001b1b2) popup_query_data_window_t_ParamLimits

0xf846,	// (0x0001b1b2) popup_query_data_window_t

0x9923,	// (0x0001528f) query_popup_data_pane_ParamLimits

0x9923,	// (0x0001528f) query_popup_data_pane

0x9937,	// (0x000152a3) query_popup_data_pane_cp1_ParamLimits

0x9937,	// (0x000152a3) query_popup_data_pane_cp1

0x97ca,	// (0x00015136) bg_popup_window_pane_cp10_ParamLimits

0x97ca,	// (0x00015136) bg_popup_window_pane_cp10

0x97fc,	// (0x00015168) indicator_popup_pane_ParamLimits

0x97fc,	// (0x00015168) indicator_popup_pane

0x981e,	// (0x0001518a) popup_query_code_window_t1_ParamLimits

0x981e,	// (0x0001518a) popup_query_code_window_t1

0x9838,	// (0x000151a4) popup_query_code_window_t2_ParamLimits

0x9838,	// (0x000151a4) popup_query_code_window_t2

0x9881,	// (0x000151ed) popup_query_code_window_t3_ParamLimits

0x9881,	// (0x000151ed) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x0001b1ab) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x0001b1ab) popup_query_code_window_t

0x98b0,	// (0x0001521c) query_popup_pane_ParamLimits

0x98b0,	// (0x0001521c) query_popup_pane

0x6aa3,	// (0x0001240f) bg_popup_window_pane_cp15_ParamLimits

0x6aa3,	// (0x0001240f) bg_popup_window_pane_cp15

0x6ac3,	// (0x0001242f) indicator_popup_pane_cp1_ParamLimits

0x6ac3,	// (0x0001242f) indicator_popup_pane_cp1

0x6ad6,	// (0x00012442) indicator_popup_pane_cp2_ParamLimits

0x6ad6,	// (0x00012442) indicator_popup_pane_cp2

0x6af1,	// (0x0001245d) popup_query_data_code_window_g1_ParamLimits

0x6af1,	// (0x0001245d) popup_query_data_code_window_g1

0x6b04,	// (0x00012470) popup_query_data_code_window_t1_ParamLimits

0x6b04,	// (0x00012470) popup_query_data_code_window_t1

0x6b16,	// (0x00012482) popup_query_data_code_window_t2_ParamLimits

0x6b16,	// (0x00012482) popup_query_data_code_window_t2

0x6b28,	// (0x00012494) popup_query_data_code_window_t3_ParamLimits

0x6b28,	// (0x00012494) popup_query_data_code_window_t3

0x6b3e,	// (0x000124aa) popup_query_data_code_window_t4_ParamLimits

0x6b3e,	// (0x000124aa) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0001af12) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0001af12) popup_query_data_code_window_t

0x5562,	// (0x00010ece) list_single_midp_graphic_pane_g3

0x6b58,	// (0x000124c4) query_popup_data_pane_cp2_ParamLimits

0x6b6b,	// (0x000124d7) query_popup_pane_cp2_ParamLimits

0x6b6b,	// (0x000124d7) query_popup_pane_cp2

0x3fb2,	// (0x0000f91e) bg_popup_window_pane_cp11

0x97c2,	// (0x0001512e) heading_pane_cp5

0x6c5b,	// (0x000125c7) listscroll_popup_info_pane

0x3fb2,	// (0x0000f91e) input_focus_pane_cp3

0x6b86,	// (0x000124f2) query_popup_pane_t1

0x6b94,	// (0x00012500) list_popup_info_pane_ParamLimits

0x6b94,	// (0x00012500) list_popup_info_pane

0x6ba3,	// (0x0001250f) listscroll_popup_info_pane_g1

0x6bab,	// (0x00012517) scroll_pane_cp7

0x6bb5,	// (0x00012521) popup_info_list_pane_t1_ParamLimits

0x6bb5,	// (0x00012521) popup_info_list_pane_t1

0x6bcf,	// (0x0001253b) popup_info_list_pane_t2_ParamLimits

0x6bcf,	// (0x0001253b) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0001af1b) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0001af1b) popup_info_list_pane_t

0x3fb2,	// (0x0000f91e) bg_popup_window_pane_cp12

0xac38,	// (0x000165a4) find_popup_pane

0x6757,	// (0x000120c3) bg_popup_window_pane_cp3

0x6be9,	// (0x00012555) heading_pane_cp3

0x6bf5,	// (0x00012561) listscroll_popup_graphic_pane

0x3fb2,	// (0x0000f91e) bg_popup_window_pane_cp4

0x6c51,	// (0x000125bd) heading_pane_cp4

0x6c5b,	// (0x000125c7) listscroll_popup_colour_pane

0x6c63,	// (0x000125cf) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6c63,	// (0x000125cf) cell_large_graphic_colour_none_popup_pane

0x6c77,	// (0x000125e3) grid_large_graphic_colour_popup_pane_ParamLimits

0x6c77,	// (0x000125e3) grid_large_graphic_colour_popup_pane

0x6ca3,	// (0x0001260f) listscroll_popup_colour_pane_g1_ParamLimits

0x6ca3,	// (0x0001260f) listscroll_popup_colour_pane_g1

0x6cba,	// (0x00012626) listscroll_popup_colour_pane_g2_ParamLimits

0x6cba,	// (0x00012626) listscroll_popup_colour_pane_g2

0x6cd1,	// (0x0001263d) listscroll_popup_colour_pane_g3_ParamLimits

0x6cd1,	// (0x0001263d) listscroll_popup_colour_pane_g3

0x6ce1,	// (0x0001264d) listscroll_popup_colour_pane_g4_ParamLimits

0x6ce1,	// (0x0001264d) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0001af20) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0001af20) listscroll_popup_colour_pane_g

0x6cf5,	// (0x00012661) scroll_pane_cp6_ParamLimits

0x6cf5,	// (0x00012661) scroll_pane_cp6

0x6d07,	// (0x00012673) cell_large_graphic_colour_popup_pane_ParamLimits

0x6d07,	// (0x00012673) cell_large_graphic_colour_popup_pane

0x6d2c,	// (0x00012698) cell_large_graphic_colour_none_popup_pane_t1

0x3fb2,	// (0x0000f91e) grid_highlight_pane_cp5

0x6d3b,	// (0x000126a7) cell_large_graphic_colour_popup_pane_g1

0x6d43,	// (0x000126af) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0001af29) cell_large_graphic_colour_popup_pane_g

0x6d4b,	// (0x000126b7) cell_large_graphic_colour_popup_pane_g2_copy1

0x6d54,	// (0x000126c0) grid_highlight_pane_cp4

0x6d5c,	// (0x000126c8) bg_popup_window_pane_cp8_ParamLimits

0x6d5c,	// (0x000126c8) bg_popup_window_pane_cp8

0x6d77,	// (0x000126e3) popup_snote_single_text_window_g1_ParamLimits

0x6d77,	// (0x000126e3) popup_snote_single_text_window_g1

0x6d89,	// (0x000126f5) popup_snote_single_text_window_t1_ParamLimits

0x6d89,	// (0x000126f5) popup_snote_single_text_window_t1

0x6d9c,	// (0x00012708) popup_snote_single_text_window_t2_ParamLimits

0x6d9c,	// (0x00012708) popup_snote_single_text_window_t2

0x6daf,	// (0x0001271b) popup_snote_single_text_window_t3_ParamLimits

0x6daf,	// (0x0001271b) popup_snote_single_text_window_t3

0x6de8,	// (0x00012754) popup_snote_single_text_window_t4_ParamLimits

0x6de8,	// (0x00012754) popup_snote_single_text_window_t4

0x6e1c,	// (0x00012788) popup_snote_single_text_window_t5_ParamLimits

0x6e1c,	// (0x00012788) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0001af2e) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0001af2e) popup_snote_single_text_window_t

0x6e4b,	// (0x000127b7) bg_popup_window_pane_cp9_ParamLimits

0x6e4b,	// (0x000127b7) bg_popup_window_pane_cp9

0x6d77,	// (0x000126e3) popup_snote_single_graphic_window_g1_ParamLimits

0x6d77,	// (0x000126e3) popup_snote_single_graphic_window_g1

0x6e59,	// (0x000127c5) popup_snote_single_graphic_window_g2_ParamLimits

0x6e59,	// (0x000127c5) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0001af39) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0001af39) popup_snote_single_graphic_window_g

0x6e65,	// (0x000127d1) popup_snote_single_graphic_window_t1_ParamLimits

0x6e65,	// (0x000127d1) popup_snote_single_graphic_window_t1

0x6e78,	// (0x000127e4) popup_snote_single_graphic_window_t2_ParamLimits

0x6e78,	// (0x000127e4) popup_snote_single_graphic_window_t2

0x6e8b,	// (0x000127f7) popup_snote_single_graphic_window_t3_ParamLimits

0x6e8b,	// (0x000127f7) popup_snote_single_graphic_window_t3

0x6ec4,	// (0x00012830) popup_snote_single_graphic_window_t4_ParamLimits

0x6ec4,	// (0x00012830) popup_snote_single_graphic_window_t4

0x6ef8,	// (0x00012864) popup_snote_single_graphic_window_t5_ParamLimits

0x6ef8,	// (0x00012864) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0001af3e) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0001af3e) popup_snote_single_graphic_window_t

0xab76,	// (0x000164e2) grid_graphic_popup_pane_ParamLimits

0xab76,	// (0x000164e2) grid_graphic_popup_pane

0xaba4,	// (0x00016510) listscroll_popup_graphic_pane_g1_ParamLimits

0xaba4,	// (0x00016510) listscroll_popup_graphic_pane_g1

0xabb8,	// (0x00016524) listscroll_popup_graphic_pane_g2_ParamLimits

0xabb8,	// (0x00016524) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x0001b328) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x0001b328) listscroll_popup_graphic_pane_g

0xabcc,	// (0x00016538) scroll_pane_cp5

0xab1e,	// (0x0001648a) cell_graphic_popup_pane_ParamLimits

0xab1e,	// (0x0001648a) cell_graphic_popup_pane

0xaaff,	// (0x0001646b) cell_graphic_popup_pane_g1

0xab07,	// (0x00016473) cell_graphic_popup_pane_g2

0x6d4b,	// (0x000126b7) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x0001b321) cell_graphic_popup_pane_g

0xab10,	// (0x0001647c) cell_graphic_popup_pane_t2

0x6d54,	// (0x000126c0) grid_highlight_pane_cp3

0x6f39,	// (0x000128a5) list_gen_pane_ParamLimits

0x6f39,	// (0x000128a5) list_gen_pane

0x6f6b,	// (0x000128d7) scroll_pane

0xaa61,	// (0x000163cd) bg_list_pane_g1_ParamLimits

0xaa61,	// (0x000163cd) bg_list_pane_g1

0xaa7c,	// (0x000163e8) bg_list_pane_g2_ParamLimits

0xaa7c,	// (0x000163e8) bg_list_pane_g2

0xaa8f,	// (0x000163fb) bg_list_pane_g3_ParamLimits

0xaa8f,	// (0x000163fb) bg_list_pane_g3

0xaaa1,	// (0x0001640d) bg_list_pane_g4_ParamLimits

0xaaa1,	// (0x0001640d) bg_list_pane_g4

0xaab3,	// (0x0001641f) bg_list_pane_g5_ParamLimits

0xaab3,	// (0x0001641f) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x0001b316) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x0001b316) bg_list_pane_g

0xa9b2,	// (0x0001631e) list_double2_graphic_large_graphic_pane_ParamLimits

0xa9b2,	// (0x0001631e) list_double2_graphic_large_graphic_pane

0xa9b2,	// (0x0001631e) list_double2_graphic_pane_ParamLimits

0xa9b2,	// (0x0001631e) list_double2_graphic_pane

0xa9b2,	// (0x0001631e) list_double2_large_graphic_pane_ParamLimits

0xa9b2,	// (0x0001631e) list_double2_large_graphic_pane

0xa9b2,	// (0x0001631e) list_double2_pane_ParamLimits

0xa9b2,	// (0x0001631e) list_double2_pane

0xa9b2,	// (0x0001631e) list_double_graphic_heading_pane_ParamLimits

0xa9b2,	// (0x0001631e) list_double_graphic_heading_pane

0xa9b2,	// (0x0001631e) list_double_graphic_pane_ParamLimits

0xa9b2,	// (0x0001631e) list_double_graphic_pane

0xa9b2,	// (0x0001631e) list_double_heading_pane_ParamLimits

0xa9b2,	// (0x0001631e) list_double_heading_pane

0xa9b2,	// (0x0001631e) list_double_large_graphic_pane_ParamLimits

0xa9b2,	// (0x0001631e) list_double_large_graphic_pane

0xa9b2,	// (0x0001631e) list_double_number_pane_ParamLimits

0xa9b2,	// (0x0001631e) list_double_number_pane

0xa9b2,	// (0x0001631e) list_double_pane_ParamLimits

0xa9b2,	// (0x0001631e) list_double_pane

0xa9b2,	// (0x0001631e) list_double_time_pane_ParamLimits

0xa9b2,	// (0x0001631e) list_double_time_pane

0xa9b2,	// (0x0001631e) list_setting_number_pane_ParamLimits

0xa9b2,	// (0x0001631e) list_setting_number_pane

0xa9b2,	// (0x0001631e) list_setting_pane_ParamLimits

0xa9b2,	// (0x0001631e) list_setting_pane

0xa9f1,	// (0x0001635d) list_single_2graphic_pane_ParamLimits

0xa9f1,	// (0x0001635d) list_single_2graphic_pane

0xa9f1,	// (0x0001635d) list_single_graphic_heading_pane_ParamLimits

0xa9f1,	// (0x0001635d) list_single_graphic_heading_pane

0xa9f1,	// (0x0001635d) list_single_graphic_pane_ParamLimits

0xa9f1,	// (0x0001635d) list_single_graphic_pane

0xa9f1,	// (0x0001635d) list_single_heading_pane_ParamLimits

0xa9f1,	// (0x0001635d) list_single_heading_pane

0xaa49,	// (0x000163b5) list_single_large_graphic_pane_ParamLimits

0xaa49,	// (0x000163b5) list_single_large_graphic_pane

0xa9f1,	// (0x0001635d) list_single_number_heading_pane_ParamLimits

0xa9f1,	// (0x0001635d) list_single_number_heading_pane

0xa9f1,	// (0x0001635d) list_single_number_pane_ParamLimits

0xa9f1,	// (0x0001635d) list_single_number_pane

0xa9f1,	// (0x0001635d) list_single_pane_ParamLimits

0xa9f1,	// (0x0001635d) list_single_pane

0x3fb2,	// (0x0000f91e) list_highlight_pane_cp1

0x6fab,	// (0x00012917) list_single_pane_g1_ParamLimits

0x6fab,	// (0x00012917) list_single_pane_g1

0x6fb7,	// (0x00012923) list_single_pane_g2_ParamLimits

0x6fb7,	// (0x00012923) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0001af50) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0001af50) list_single_pane_g

0xa96b,	// (0x000162d7) list_single_pane_t1_ParamLimits

0xa96b,	// (0x000162d7) list_single_pane_t1

0x6fab,	// (0x00012917) list_single_number_pane_g1_ParamLimits

0x6fab,	// (0x00012917) list_single_number_pane_g1

0x6fb7,	// (0x00012923) list_single_number_pane_g2_ParamLimits

0x6fb7,	// (0x00012923) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0001af50) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0001af50) list_single_number_pane_g

0xa6c7,	// (0x00016033) list_single_number_pane_t1_ParamLimits

0xa6c7,	// (0x00016033) list_single_number_pane_t1

0xa6dd,	// (0x00016049) list_single_number_pane_t2_ParamLimits

0xa6dd,	// (0x00016049) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x0001b2d7) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x0001b2d7) list_single_number_pane_t

0x6f9f,	// (0x0001290b) list_single_graphic_pane_g1_ParamLimits

0x6f9f,	// (0x0001290b) list_single_graphic_pane_g1

0x6fab,	// (0x00012917) list_single_graphic_pane_g2_ParamLimits

0x6fab,	// (0x00012917) list_single_graphic_pane_g2

0x6fb7,	// (0x00012923) list_single_graphic_pane_g3_ParamLimits

0x6fb7,	// (0x00012923) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0001af49) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0001af49) list_single_graphic_pane_g

0x6fc3,	// (0x0001292f) list_single_graphic_pane_t1_ParamLimits

0x6fc3,	// (0x0001292f) list_single_graphic_pane_t1

0x6fab,	// (0x00012917) list_single_heading_pane_g1_ParamLimits

0x6fab,	// (0x00012917) list_single_heading_pane_g1

0x6fb7,	// (0x00012923) list_single_heading_pane_g2_ParamLimits

0x6fb7,	// (0x00012923) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001af50) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001af50) list_single_heading_pane_g

0x6fd9,	// (0x00012945) list_single_heading_pane_t1_ParamLimits

0x6fd9,	// (0x00012945) list_single_heading_pane_t1

0x6fef,	// (0x0001295b) list_single_heading_pane_t2_ParamLimits

0x6fef,	// (0x0001295b) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0001af55) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0001af55) list_single_heading_pane_t

0x6fab,	// (0x00012917) list_single_number_heading_pane_g1_ParamLimits

0x6fab,	// (0x00012917) list_single_number_heading_pane_g1

0x6fb7,	// (0x00012923) list_single_number_heading_pane_g2_ParamLimits

0x6fb7,	// (0x00012923) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001af50) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001af50) list_single_number_heading_pane_g

0x6fd9,	// (0x00012945) list_single_number_heading_pane_t1_ParamLimits

0x6fd9,	// (0x00012945) list_single_number_heading_pane_t1

0x7001,	// (0x0001296d) list_single_number_heading_pane_t2_ParamLimits

0x7001,	// (0x0001296d) list_single_number_heading_pane_t2

0x7013,	// (0x0001297f) list_single_number_heading_pane_t3_ParamLimits

0x7013,	// (0x0001297f) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0001af5a) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0001af5a) list_single_number_heading_pane_t

0x7025,	// (0x00012991) list_single_graphic_heading_pane_g1_ParamLimits

0x7025,	// (0x00012991) list_single_graphic_heading_pane_g1

0x7031,	// (0x0001299d) list_single_graphic_heading_pane_g4_ParamLimits

0x7031,	// (0x0001299d) list_single_graphic_heading_pane_g4

0x6fb7,	// (0x00012923) list_single_graphic_heading_pane_g5_ParamLimits

0x6fb7,	// (0x00012923) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0001af61) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0001af61) list_single_graphic_heading_pane_g

0x6fd9,	// (0x00012945) list_single_graphic_heading_pane_t1_ParamLimits

0x6fd9,	// (0x00012945) list_single_graphic_heading_pane_t1

0x7042,	// (0x000129ae) list_single_graphic_heading_pane_t2_ParamLimits

0x7042,	// (0x000129ae) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0001af68) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0001af68) list_single_graphic_heading_pane_t

0x7054,	// (0x000129c0) list_single_large_graphic_pane_g1_ParamLimits

0x7054,	// (0x000129c0) list_single_large_graphic_pane_g1

0x7060,	// (0x000129cc) list_single_large_graphic_pane_g2_ParamLimits

0x7060,	// (0x000129cc) list_single_large_graphic_pane_g2

0x706c,	// (0x000129d8) list_single_large_graphic_pane_g3_ParamLimits

0x706c,	// (0x000129d8) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0001af6d) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0001af6d) list_single_large_graphic_pane_g

0x996b,	// (0x000152d7) wait_border_pane_g2_copy1

0x7078,	// (0x000129e4) list_single_large_graphic_pane_g4_cp2

0x7080,	// (0x000129ec) list_single_large_graphic_pane_t1_ParamLimits

0x7080,	// (0x000129ec) list_single_large_graphic_pane_t1

0x7096,	// (0x00012a02) list_double_pane_g1_ParamLimits

0x7096,	// (0x00012a02) list_double_pane_g1

0x70a2,	// (0x00012a0e) list_double_pane_g2_ParamLimits

0x70a2,	// (0x00012a0e) list_double_pane_g2

0x0001,

0xf608,	// (0x0001af74) list_double_pane_g_ParamLimits

0xf608,	// (0x0001af74) list_double_pane_g

0x70ae,	// (0x00012a1a) list_double_pane_t1_ParamLimits

0x70ae,	// (0x00012a1a) list_double_pane_t1

0x70c4,	// (0x00012a30) list_double_pane_t2_ParamLimits

0x70c4,	// (0x00012a30) list_double_pane_t2

0x0001,

0xf60d,	// (0x0001af79) list_double_pane_t_ParamLimits

0xf60d,	// (0x0001af79) list_double_pane_t

0x70d6,	// (0x00012a42) list_double2_pane_g1_ParamLimits

0x70d6,	// (0x00012a42) list_double2_pane_g1

0x70e7,	// (0x00012a53) list_double2_pane_g2_ParamLimits

0x70e7,	// (0x00012a53) list_double2_pane_g2

0x0001,

0xf612,	// (0x0001af7e) list_double2_pane_g_ParamLimits

0xf612,	// (0x0001af7e) list_double2_pane_g

0x70f3,	// (0x00012a5f) list_double2_pane_t1_ParamLimits

0x70f3,	// (0x00012a5f) list_double2_pane_t1

0x7109,	// (0x00012a75) list_double2_pane_t2_ParamLimits

0x7109,	// (0x00012a75) list_double2_pane_t2

0x0001,

0xf617,	// (0x0001af83) list_double2_pane_t_ParamLimits

0xf617,	// (0x0001af83) list_double2_pane_t

0x7096,	// (0x00012a02) list_double_number_pane_g1_ParamLimits

0x7096,	// (0x00012a02) list_double_number_pane_g1

0x70a2,	// (0x00012a0e) list_double_number_pane_g2_ParamLimits

0x70a2,	// (0x00012a0e) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0001af74) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0001af74) list_double_number_pane_g

0x711b,	// (0x00012a87) list_double_number_pane_t1_ParamLimits

0x711b,	// (0x00012a87) list_double_number_pane_t1

0x712d,	// (0x00012a99) list_double_number_pane_t2_ParamLimits

0x712d,	// (0x00012a99) list_double_number_pane_t2

0x7143,	// (0x00012aaf) list_double_number_pane_t3_ParamLimits

0x7143,	// (0x00012aaf) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0001af88) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0001af88) list_double_number_pane_t

0x7155,	// (0x00012ac1) list_double_graphic_pane_g1_ParamLimits

0x7155,	// (0x00012ac1) list_double_graphic_pane_g1

0x7161,	// (0x00012acd) list_double_graphic_pane_g2_ParamLimits

0x7161,	// (0x00012acd) list_double_graphic_pane_g2

0x7170,	// (0x00012adc) list_double_graphic_pane_g3_ParamLimits

0x7170,	// (0x00012adc) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0001af8f) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0001af8f) list_double_graphic_pane_g

0x7188,	// (0x00012af4) list_double_graphic_pane_t1_ParamLimits

0x7188,	// (0x00012af4) list_double_graphic_pane_t1

0x719e,	// (0x00012b0a) list_double_graphic_pane_t2_ParamLimits

0x719e,	// (0x00012b0a) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001af98) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001af98) list_double_graphic_pane_t

0x71b0,	// (0x00012b1c) list_double2_graphic_pane_g1_ParamLimits

0x71b0,	// (0x00012b1c) list_double2_graphic_pane_g1

0x71bc,	// (0x00012b28) list_double2_graphic_pane_g2_ParamLimits

0x71bc,	// (0x00012b28) list_double2_graphic_pane_g2

0x70e7,	// (0x00012a53) list_double2_graphic_pane_g3_ParamLimits

0x70e7,	// (0x00012a53) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0001af9d) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0001af9d) list_double2_graphic_pane_g

0x71c8,	// (0x00012b34) list_double2_graphic_pane_t1_ParamLimits

0x71c8,	// (0x00012b34) list_double2_graphic_pane_t1

0x71de,	// (0x00012b4a) list_double2_graphic_pane_t2_ParamLimits

0x71de,	// (0x00012b4a) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0001afa4) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0001afa4) list_double2_graphic_pane_t

0x71f0,	// (0x00012b5c) list_double_large_graphic_pane_g1_ParamLimits

0x71f0,	// (0x00012b5c) list_double_large_graphic_pane_g1

0x721b,	// (0x00012b87) list_double_large_graphic_pane_g2_ParamLimits

0x721b,	// (0x00012b87) list_double_large_graphic_pane_g2

0x70a2,	// (0x00012a0e) list_double_large_graphic_pane_g3_ParamLimits

0x70a2,	// (0x00012a0e) list_double_large_graphic_pane_g3

0x722c,	// (0x00012b98) list_double_large_graphic_pane_g4_ParamLimits

0x722c,	// (0x00012b98) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0001afa9) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0001afa9) list_double_large_graphic_pane_g

0x7254,	// (0x00012bc0) list_double_large_graphic_pane_t1_ParamLimits

0x7254,	// (0x00012bc0) list_double_large_graphic_pane_t1

0x726d,	// (0x00012bd9) list_double_large_graphic_pane_t2_ParamLimits

0x726d,	// (0x00012bd9) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0001afb4) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0001afb4) list_double_large_graphic_pane_t

0x727f,	// (0x00012beb) list_double2_large_graphic_pane_g1_ParamLimits

0x727f,	// (0x00012beb) list_double2_large_graphic_pane_g1

0x70d6,	// (0x00012a42) list_double2_large_graphic_pane_g2_ParamLimits

0x70d6,	// (0x00012a42) list_double2_large_graphic_pane_g2

0x70e7,	// (0x00012a53) list_double2_large_graphic_pane_g3_ParamLimits

0x70e7,	// (0x00012a53) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0001afb9) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0001afb9) list_double2_large_graphic_pane_g

0x728b,	// (0x00012bf7) list_double2_large_graphic_pane_t1_ParamLimits

0x728b,	// (0x00012bf7) list_double2_large_graphic_pane_t1

0x72a1,	// (0x00012c0d) list_double2_large_graphic_pane_t2_ParamLimits

0x72a1,	// (0x00012c0d) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0001afc0) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0001afc0) list_double2_large_graphic_pane_t

0x72b3,	// (0x00012c1f) list_double_heading_pane_g1_ParamLimits

0x72b3,	// (0x00012c1f) list_double_heading_pane_g1

0x72c4,	// (0x00012c30) list_double_heading_pane_g2_ParamLimits

0x72c4,	// (0x00012c30) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0001afc5) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0001afc5) list_double_heading_pane_g

0x72d0,	// (0x00012c3c) list_double_heading_pane_t1_ParamLimits

0x72d0,	// (0x00012c3c) list_double_heading_pane_t1

0x72e6,	// (0x00012c52) list_double_heading_pane_t2_ParamLimits

0x72e6,	// (0x00012c52) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0001afca) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0001afca) list_double_heading_pane_t

0x72f8,	// (0x00012c64) list_double_graphic_heading_pane_g1_ParamLimits

0x72f8,	// (0x00012c64) list_double_graphic_heading_pane_g1

0x72b3,	// (0x00012c1f) list_double_graphic_heading_pane_g2_ParamLimits

0x72b3,	// (0x00012c1f) list_double_graphic_heading_pane_g2

0x72c4,	// (0x00012c30) list_double_graphic_heading_pane_g3_ParamLimits

0x72c4,	// (0x00012c30) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0001afcf) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0001afcf) list_double_graphic_heading_pane_g

0x7304,	// (0x00012c70) list_double_graphic_heading_pane_t1_ParamLimits

0x7304,	// (0x00012c70) list_double_graphic_heading_pane_t1

0x731a,	// (0x00012c86) list_double_graphic_heading_pane_t2_ParamLimits

0x731a,	// (0x00012c86) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0001afd6) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0001afd6) list_double_graphic_heading_pane_t

0x721b,	// (0x00012b87) list_double_time_pane_g1_ParamLimits

0x721b,	// (0x00012b87) list_double_time_pane_g1

0x70a2,	// (0x00012a0e) list_double_time_pane_g2_ParamLimits

0x70a2,	// (0x00012a0e) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0001afdb) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0001afdb) list_double_time_pane_g

0x732c,	// (0x00012c98) list_double_time_pane_t1_ParamLimits

0x732c,	// (0x00012c98) list_double_time_pane_t1

0x7342,	// (0x00012cae) list_double_time_pane_t2_ParamLimits

0x7342,	// (0x00012cae) list_double_time_pane_t2

0x7354,	// (0x00012cc0) list_double_time_pane_t3_ParamLimits

0x7354,	// (0x00012cc0) list_double_time_pane_t3

0x7366,	// (0x00012cd2) list_double_time_pane_t4_ParamLimits

0x7366,	// (0x00012cd2) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0001afe0) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0001afe0) list_double_time_pane_t

0x71bc,	// (0x00012b28) list_setting_pane_g1_ParamLimits

0x71bc,	// (0x00012b28) list_setting_pane_g1

0x70e7,	// (0x00012a53) list_setting_pane_g2_ParamLimits

0x70e7,	// (0x00012a53) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0001afe9) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0001afe9) list_setting_pane_g

0x7378,	// (0x00012ce4) list_setting_pane_t1_ParamLimits

0x7378,	// (0x00012ce4) list_setting_pane_t1

0x738f,	// (0x00012cfb) list_setting_pane_t2_ParamLimits

0x738f,	// (0x00012cfb) list_setting_pane_t2

0x0002,

0xf682,	// (0x0001afee) list_setting_pane_t_ParamLimits

0xf682,	// (0x0001afee) list_setting_pane_t

0x73ce,	// (0x00012d3a) set_value_pane_cp_ParamLimits

0x73ce,	// (0x00012d3a) set_value_pane_cp

0x71bc,	// (0x00012b28) list_setting_number_pane_g1_ParamLimits

0x71bc,	// (0x00012b28) list_setting_number_pane_g1

0x70e7,	// (0x00012a53) list_setting_number_pane_g2_ParamLimits

0x70e7,	// (0x00012a53) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x0001afe9) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x0001afe9) list_setting_number_pane_g

0x73dc,	// (0x00012d48) list_setting_number_pane_t1_ParamLimits

0x73dc,	// (0x00012d48) list_setting_number_pane_t1

0x73f0,	// (0x00012d5c) list_setting_number_pane_t2_ParamLimits

0x73f0,	// (0x00012d5c) list_setting_number_pane_t2

0x7407,	// (0x00012d73) list_setting_number_pane_t3_ParamLimits

0x7407,	// (0x00012d73) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0001aff5) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0001aff5) list_setting_number_pane_t

0x73ce,	// (0x00012d3a) set_value_pane_ParamLimits

0x73ce,	// (0x00012d3a) set_value_pane

0x744a,	// (0x00012db6) bg_set_opt_pane_ParamLimits

0x744a,	// (0x00012db6) bg_set_opt_pane

0x746b,	// (0x00012dd7) set_value_pane_t1

0x7479,	// (0x00012de5) slider_set_pane_cp3

0x7482,	// (0x00012dee) volume_small_pane_cp

0x748b,	// (0x00012df7) list_form_gen_pane

0x7494,	// (0x00012e00) scroll_pane_cp8

0x74ad,	// (0x00012e19) form_field_data_pane_ParamLimits

0x74ad,	// (0x00012e19) form_field_data_pane

0x74d3,	// (0x00012e3f) form_field_data_wide_pane_ParamLimits

0x74d3,	// (0x00012e3f) form_field_data_wide_pane

0x74fa,	// (0x00012e66) form_field_popup_pane_ParamLimits

0x74fa,	// (0x00012e66) form_field_popup_pane

0x751c,	// (0x00012e88) form_field_popup_wide_pane_ParamLimits

0x751c,	// (0x00012e88) form_field_popup_wide_pane

0x753d,	// (0x00012ea9) form_field_slider_pane_ParamLimits

0x753d,	// (0x00012ea9) form_field_slider_pane

0x7550,	// (0x00012ebc) form_field_slider_wide_pane_ParamLimits

0x7550,	// (0x00012ebc) form_field_slider_wide_pane

0x7563,	// (0x00012ecf) data_form_pane

0x7579,	// (0x00012ee5) form_field_data_pane_t1

0x7593,	// (0x00012eff) input_focus_pane

0x75a1,	// (0x00012f0d) data_form_wide_pane

0x75d9,	// (0x00012f45) form_field_data_wide_pane_t1

0x6d69,	// (0x000126d5) input_focus_pane_cp6

0x75fb,	// (0x00012f67) form_field_popup_pane_t1

0x7593,	// (0x00012eff) input_focus_pane_cp7

0x7615,	// (0x00012f81) list_form_pane

0x7629,	// (0x00012f95) form_field_popup_wide_pane_t1

0x7593,	// (0x00012eff) input_focus_pane_cp8

0x763e,	// (0x00012faa) list_form_wide_pane

0x7655,	// (0x00012fc1) form_field_slider_pane_t1_ParamLimits

0x7655,	// (0x00012fc1) form_field_slider_pane_t1

0x7669,	// (0x00012fd5) form_field_slider_pane_t2_ParamLimits

0x7669,	// (0x00012fd5) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0001b005) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0001b005) form_field_slider_pane_t

0x69ed,	// (0x00012359) input_focus_pane_cp9_ParamLimits

0x69ed,	// (0x00012359) input_focus_pane_cp9

0x767b,	// (0x00012fe7) slider_cont_pane_ParamLimits

0x767b,	// (0x00012fe7) slider_cont_pane

0x768f,	// (0x00012ffb) form_field_slider_wide_pane_t1_ParamLimits

0x768f,	// (0x00012ffb) form_field_slider_wide_pane_t1

0x76a1,	// (0x0001300d) form_field_slider_wide_pane_t2_ParamLimits

0x76a1,	// (0x0001300d) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0001b00a) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0001b00a) form_field_slider_wide_pane_t

0x69ed,	// (0x00012359) input_focus_pane_cp10_ParamLimits

0x69ed,	// (0x00012359) input_focus_pane_cp10

0x76b3,	// (0x0001301f) slider_cont_pane_cp1_ParamLimits

0x76b3,	// (0x0001301f) slider_cont_pane_cp1

0x76c7,	// (0x00013033) slider_form_pane_cp

0x76cf,	// (0x0001303b) input_focus_pane_g1

0x76d7,	// (0x00013043) input_focus_pane_g2

0x76df,	// (0x0001304b) input_focus_pane_g3

0x76e7,	// (0x00013053) input_focus_pane_g4

0x76ef,	// (0x0001305b) input_focus_pane_g5

0x76f7,	// (0x00013063) input_focus_pane_g6

0x76ff,	// (0x0001306b) input_focus_pane_g7

0x7707,	// (0x00013073) input_focus_pane_g8

0x770f,	// (0x0001307b) input_focus_pane_g9

0x3e39,	// (0x0000f7a5) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0001b00f) input_focus_pane_g

0x9974,	// (0x000152e0) wait_border_pane_g3_copy1

0x7717,	// (0x00013083) data_form_pane_t1

0x3e39,	// (0x0000f7a5) wait_anim_pane_g1_copy1

0xa94c,	// (0x000162b8) data_form_wide_pane_t1

0x7736,	// (0x000130a2) list_form_graphic_pane_cp_ParamLimits

0x7736,	// (0x000130a2) list_form_graphic_pane_cp

0xa921,	// (0x0001628d) slider_form_pane_g1

0xa92a,	// (0x00016296) slider_form_pane_g2

0x0006,

0xf99b,	// (0x0001b307) slider_form_pane_g

0x7736,	// (0x000130a2) list_form_graphic_pane_ParamLimits

0x7736,	// (0x000130a2) list_form_graphic_pane

0x7748,	// (0x000130b4) list_form_graphic_pane_g1

0x7750,	// (0x000130bc) list_form_graphic_pane_t1_ParamLimits

0x7750,	// (0x000130bc) list_form_graphic_pane_t1

0x6757,	// (0x000120c3) list_highlight_pane_cp5_ParamLimits

0x6757,	// (0x000120c3) list_highlight_pane_cp5

0x7765,	// (0x000130d1) find_pane_g1

0x776e,	// (0x000130da) input_find_pane

0x7777,	// (0x000130e3) input_find_pane_g1_ParamLimits

0x7777,	// (0x000130e3) input_find_pane_g1

0x7783,	// (0x000130ef) input_find_pane_t1_ParamLimits

0x7783,	// (0x000130ef) input_find_pane_t1

0x7798,	// (0x00013104) input_find_pane_t2_ParamLimits

0x7798,	// (0x00013104) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0001b024) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0001b024) input_find_pane_t

0x77ad,	// (0x00013119) input_focus_pane_cp5_ParamLimits

0x77ad,	// (0x00013119) input_focus_pane_cp5

0x77c7,	// (0x00013133) bg_popup_window_pane_cp2_ParamLimits

0x77c7,	// (0x00013133) bg_popup_window_pane_cp2

0x77d4,	// (0x00013140) listscroll_menu_pane_ParamLimits

0x77d4,	// (0x00013140) listscroll_menu_pane

0x77e0,	// (0x0001314c) popup_submenu_window_ParamLimits

0x77e0,	// (0x0001314c) popup_submenu_window

0x7810,	// (0x0001317c) find_popup_pane_g1

0x7818,	// (0x00013184) input_popup_find_pane_cp

0x77ad,	// (0x00013119) input_focus_pane_cp4_ParamLimits

0x77ad,	// (0x00013119) input_focus_pane_cp4

0x7830,	// (0x0001319c) input_popup_find_pane_t1_ParamLimits

0x7830,	// (0x0001319c) input_popup_find_pane_t1

0x3fb2,	// (0x0000f91e) bg_popup_sub_pane_cp

0x785e,	// (0x000131ca) listscroll_popup_sub_pane

0x7866,	// (0x000131d2) list_submenu_pane_ParamLimits

0x7866,	// (0x000131d2) list_submenu_pane

0x7877,	// (0x000131e3) scroll_pane_cp4

0x787f,	// (0x000131eb) list_single_popup_submenu_pane_ParamLimits

0x787f,	// (0x000131eb) list_single_popup_submenu_pane

0x7894,	// (0x00013200) list_single_popup_submenu_pane_g1

0x789c,	// (0x00013208) list_single_popup_submenu_pane_t1_ParamLimits

0x789c,	// (0x00013208) list_single_popup_submenu_pane_t1

0x6757,	// (0x000120c3) bg_active_tab_pane_cp1_ParamLimits

0x6757,	// (0x000120c3) bg_active_tab_pane_cp1

0x78b1,	// (0x0001321d) tabs_2_active_pane_g1

0x78b9,	// (0x00013225) tabs_2_active_pane_t1

0x6757,	// (0x000120c3) bg_passive_tab_pane_cp1_ParamLimits

0x6757,	// (0x000120c3) bg_passive_tab_pane_cp1

0x78b1,	// (0x0001321d) tabs_2_passive_pane_g1

0x78b9,	// (0x00013225) tabs_2_passive_pane_t1

0x78cb,	// (0x00013237) bg_active_tab_pane_cp4

0x78d9,	// (0x00013245) tabs_2_long_active_pane_t1

0x78ec,	// (0x00013258) bg_passive_tab_pane_cp4

0x556a,	// (0x00010ed6) list_single_midp_graphic_pane_g4_ParamLimits

0x78cb,	// (0x00013237) bg_active_tab_pane_cp5

0x78f8,	// (0x00013264) tabs_3_long_active_pane_t1

0x78ec,	// (0x00013258) bg_passive_tab_pane_cp5

0x556a,	// (0x00010ed6) list_single_midp_graphic_pane_g4

0x6757,	// (0x000120c3) bg_popup_window_pane_cp13_ParamLimits

0x6757,	// (0x000120c3) bg_popup_window_pane_cp13

0x7913,	// (0x0001327f) listscroll_popup_fast_pane_ParamLimits

0x7913,	// (0x0001327f) listscroll_popup_fast_pane

0x7922,	// (0x0001328e) grid_popup_fast_pane_ParamLimits

0x7922,	// (0x0001328e) grid_popup_fast_pane

0x7934,	// (0x000132a0) scroll_pane_cp9_ParamLimits

0x7934,	// (0x000132a0) scroll_pane_cp9

0xc730,	// (0x0001809c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc730,	// (0x0001809c) list_single_graphic_hl_pane_t1_cp2

0x7958,	// (0x000132c4) input_focus_pane_cp20_ParamLimits

0x7958,	// (0x000132c4) input_focus_pane_cp20

0x7966,	// (0x000132d2) query_popup_data_pane_t1_ParamLimits

0x7966,	// (0x000132d2) query_popup_data_pane_t1

0x7979,	// (0x000132e5) query_popup_data_pane_t2_ParamLimits

0x7979,	// (0x000132e5) query_popup_data_pane_t2

0x79bf,	// (0x0001332b) query_popup_data_pane_t3_ParamLimits

0x79bf,	// (0x0001332b) query_popup_data_pane_t3

0x7a00,	// (0x0001336c) query_popup_data_pane_t4_ParamLimits

0x7a00,	// (0x0001336c) query_popup_data_pane_t4

0x7a3c,	// (0x000133a8) query_popup_data_pane_t5_ParamLimits

0x7a3c,	// (0x000133a8) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0001b029) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0001b029) query_popup_data_pane_t

0x76cf,	// (0x0001303b) bg_set_opt_pane_g1

0x76d7,	// (0x00013043) bg_set_opt_pane_g2

0x76df,	// (0x0001304b) bg_set_opt_pane_g3

0x76e7,	// (0x00013053) bg_set_opt_pane_g4

0x76ef,	// (0x0001305b) bg_set_opt_pane_g5

0x76f7,	// (0x00013063) bg_set_opt_pane_g6

0x76ff,	// (0x0001306b) bg_set_opt_pane_g7

0x7707,	// (0x00013073) bg_set_opt_pane_g8

0x770f,	// (0x0001307b) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0001b034) bg_set_opt_pane_g

0x515e,	// (0x00010aca) control_top_pane_stacon_ParamLimits

0x515e,	// (0x00010aca) control_top_pane_stacon

0x51b1,	// (0x00010b1d) signal_pane_stacon_ParamLimits

0x51b1,	// (0x00010b1d) signal_pane_stacon

0x8074,	// (0x000139e0) stacon_top_pane_g1_ParamLimits

0x8074,	// (0x000139e0) stacon_top_pane_g1

0x51d6,	// (0x00010b42) title_pane_stacon_ParamLimits

0x51d6,	// (0x00010b42) title_pane_stacon

0x5200,	// (0x00010b6c) uni_indicator_pane_stacon_ParamLimits

0x5200,	// (0x00010b6c) uni_indicator_pane_stacon

0x5218,	// (0x00010b84) battery_pane_stacon_ParamLimits

0x5218,	// (0x00010b84) battery_pane_stacon

0x525c,	// (0x00010bc8) control_bottom_pane_stacon_ParamLimits

0x525c,	// (0x00010bc8) control_bottom_pane_stacon

0x527f,	// (0x00010beb) navi_pane_stacon_ParamLimits

0x527f,	// (0x00010beb) navi_pane_stacon

0x8096,	// (0x00013a02) stacon_bottom_pane_g1_ParamLimits

0x8096,	// (0x00013a02) stacon_bottom_pane_g1

0x4ebb,	// (0x00010827) aid_levels_signal_lsc_ParamLimits

0x4ebb,	// (0x00010827) aid_levels_signal_lsc

0x4ed2,	// (0x0001083e) signal_pane_stacon_g1_ParamLimits

0x4ed2,	// (0x0001083e) signal_pane_stacon_g1

0x4ee6,	// (0x00010852) signal_pane_stacon_g2_ParamLimits

0x4ee6,	// (0x00010852) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0001b047) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0001b047) signal_pane_stacon_g

0x4f1b,	// (0x00010887) title_pane_stacon_t1_ParamLimits

0x4f1b,	// (0x00010887) title_pane_stacon_t1

0x7a80,	// (0x000133ec) uni_indicator_pane_stacon_g1

0x7a8a,	// (0x000133f6) uni_indicator_pane_stacon_g2

0x7a94,	// (0x00013400) uni_indicator_pane_stacon_g3

0x7a9e,	// (0x0001340a) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0001b053) uni_indicator_pane_stacon_g

0x4f40,	// (0x000108ac) control_top_pane_stacon_g1

0x4f48,	// (0x000108b4) control_top_pane_stacon_t1_ParamLimits

0x4f48,	// (0x000108b4) control_top_pane_stacon_t1

0x4f7f,	// (0x000108eb) aid_levels_battery_lsc_ParamLimits

0x4f7f,	// (0x000108eb) aid_levels_battery_lsc

0x4f97,	// (0x00010903) battery_pane_stacon_g1_ParamLimits

0x4f97,	// (0x00010903) battery_pane_stacon_g1

0x4faa,	// (0x00010916) battery_pane_stacon_g2_ParamLimits

0x4faa,	// (0x00010916) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0001b05c) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0001b05c) battery_pane_stacon_g

0x4fe8,	// (0x00010954) navi_icon_pane_stacon

0x4ffc,	// (0x00010968) navi_navi_pane_stacon

0x4fe8,	// (0x00010954) navi_text_pane_stacon

0x4f40,	// (0x000108ac) control_bottom_pane_stacon_g1

0x5012,	// (0x0001097e) control_bottom_pane_stacon_t1_ParamLimits

0x5012,	// (0x0001097e) control_bottom_pane_stacon_t1

0x7ac2,	// (0x0001342e) grid_app_pane_ParamLimits

0x7ac2,	// (0x0001342e) grid_app_pane

0x7ae6,	// (0x00013452) scroll_pane_cp15_ParamLimits

0x7ae6,	// (0x00013452) scroll_pane_cp15

0x7afb,	// (0x00013467) cell_app_pane_ParamLimits

0x7afb,	// (0x00013467) cell_app_pane

0x7b27,	// (0x00013493) cell_app_pane_g1_ParamLimits

0x7b27,	// (0x00013493) cell_app_pane_g1

0x7b4b,	// (0x000134b7) cell_app_pane_g2_ParamLimits

0x7b4b,	// (0x000134b7) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0001b061) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0001b061) cell_app_pane_g

0x7b57,	// (0x000134c3) cell_app_pane_t1_ParamLimits

0x7b57,	// (0x000134c3) cell_app_pane_t1

0x7b69,	// (0x000134d5) grid_highlight_pane_ParamLimits

0x7b69,	// (0x000134d5) grid_highlight_pane

0x76cf,	// (0x0001303b) cell_highlight_pane_g1

0x76d7,	// (0x00013043) cell_highlight_pane_g2

0x76df,	// (0x0001304b) cell_highlight_pane_g3

0x76e7,	// (0x00013053) cell_highlight_pane_g4

0x76ef,	// (0x0001305b) cell_highlight_pane_g5

0x76f7,	// (0x00013063) cell_highlight_pane_g6

0x76ff,	// (0x0001306b) cell_highlight_pane_g7

0x7707,	// (0x00013073) cell_highlight_pane_g8

0x770f,	// (0x0001307b) cell_highlight_pane_g9

0x3e39,	// (0x0000f7a5) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0001b00f) cell_highlight_pane_g

0x7b7a,	// (0x000134e6) bg_scroll_pane

0x505c,	// (0x000109c8) scroll_handle_pane

0x7bc1,	// (0x0001352d) scroll_bg_pane_g1

0x7bd6,	// (0x00013542) scroll_bg_pane_g2

0x7bee,	// (0x0001355a) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0001b066) scroll_bg_pane_g

0x7c03,	// (0x0001356f) scroll_handle_focus_pane_ParamLimits

0x7c03,	// (0x0001356f) scroll_handle_focus_pane

0x7bc1,	// (0x0001352d) scroll_handle_pane_g1

0x7c10,	// (0x0001357c) scroll_handle_pane_g2

0x7bee,	// (0x0001355a) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0001b06d) scroll_handle_pane_g

0x77ad,	// (0x00013119) bg_popup_sub_pane_cp21_ParamLimits

0x77ad,	// (0x00013119) bg_popup_sub_pane_cp21

0x7c24,	// (0x00013590) popup_fep_japan_predictive_window_t1_ParamLimits

0x7c24,	// (0x00013590) popup_fep_japan_predictive_window_t1

0x7c3b,	// (0x000135a7) popup_fep_japan_predictive_window_t2_ParamLimits

0x7c3b,	// (0x000135a7) popup_fep_japan_predictive_window_t2

0x7c6e,	// (0x000135da) popup_fep_japan_predictive_window_t3_ParamLimits

0x7c6e,	// (0x000135da) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0001b074) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0001b074) popup_fep_japan_predictive_window_t

0x3fb2,	// (0x0000f91e) bg_popup_sub_pane_cp23

0x7ca5,	// (0x00013611) listscroll_japin_cand_pane

0x7cad,	// (0x00013619) popup_fep_japan_candidate_window_t1

0x7cbb,	// (0x00013627) candidate_pane_ParamLimits

0x7cbb,	// (0x00013627) candidate_pane

0x7ccd,	// (0x00013639) scroll_pane_cp30

0x7cd7,	// (0x00013643) list_single_popup_jap_candidate_pane_ParamLimits

0x7cd7,	// (0x00013643) list_single_popup_jap_candidate_pane

0x3fb2,	// (0x0000f91e) list_highlight_pane_cp30

0x7ceb,	// (0x00013657) list_single_popup_jap_candidate_pane_t1

0x7cfa,	// (0x00013666) level_1_signal

0x7d07,	// (0x00013673) level_2_signal

0x7d14,	// (0x00013680) level_3_signal

0x7d21,	// (0x0001368d) level_4_signal

0x7d2e,	// (0x0001369a) level_5_signal

0x7d3b,	// (0x000136a7) level_6_signal

0x7d48,	// (0x000136b4) level_7_signal

0x7cfa,	// (0x00013666) level_1_battery

0x7d07,	// (0x00013673) level_2_battery

0x7d14,	// (0x00013680) level_3_battery

0x7d21,	// (0x0001368d) level_4_battery

0x7d2e,	// (0x0001369a) level_5_battery

0x7d3b,	// (0x000136a7) level_6_battery

0x7d48,	// (0x000136b4) level_7_battery

0x7d6d,	// (0x000136d9) list_menu_pane_ParamLimits

0x7d6d,	// (0x000136d9) list_menu_pane

0x7d7e,	// (0x000136ea) scroll_pane_cp25_ParamLimits

0x7d7e,	// (0x000136ea) scroll_pane_cp25

0x7d97,	// (0x00013703) list_double2_graphic_pane_cp2_ParamLimits

0x7d97,	// (0x00013703) list_double2_graphic_pane_cp2

0x7d97,	// (0x00013703) list_double2_large_graphic_pane_cp2_ParamLimits

0x7d97,	// (0x00013703) list_double2_large_graphic_pane_cp2

0x7d97,	// (0x00013703) list_double2_pane_cp2_ParamLimits

0x7d97,	// (0x00013703) list_double2_pane_cp2

0x7d97,	// (0x00013703) list_double_graphic_pane_cp2_ParamLimits

0x7d97,	// (0x00013703) list_double_graphic_pane_cp2

0x7d97,	// (0x00013703) list_double_large_graphic_pane_cp2_ParamLimits

0x7d97,	// (0x00013703) list_double_large_graphic_pane_cp2

0x7d97,	// (0x00013703) list_double_number_pane_cp2_ParamLimits

0x7d97,	// (0x00013703) list_double_number_pane_cp2

0x7d97,	// (0x00013703) list_double_pane_cp2_ParamLimits

0x7d97,	// (0x00013703) list_double_pane_cp2

0x7dbd,	// (0x00013729) list_single_2graphic_pane_cp2_ParamLimits

0x7dbd,	// (0x00013729) list_single_2graphic_pane_cp2

0x7dbd,	// (0x00013729) list_single_graphic_heading_pane_cp2_ParamLimits

0x7dbd,	// (0x00013729) list_single_graphic_heading_pane_cp2

0x7dbd,	// (0x00013729) list_single_graphic_pane_cp2_ParamLimits

0x7dbd,	// (0x00013729) list_single_graphic_pane_cp2

0x7dbd,	// (0x00013729) list_single_heading_pane_cp2_ParamLimits

0x7dbd,	// (0x00013729) list_single_heading_pane_cp2

0x7dda,	// (0x00013746) list_single_large_graphic_pane_cp2_ParamLimits

0x7dda,	// (0x00013746) list_single_large_graphic_pane_cp2

0x7dbd,	// (0x00013729) list_single_number_heading_pane_cp2_ParamLimits

0x7dbd,	// (0x00013729) list_single_number_heading_pane_cp2

0x7dbd,	// (0x00013729) list_single_number_pane_cp2_ParamLimits

0x7dbd,	// (0x00013729) list_single_number_pane_cp2

0x7dbd,	// (0x00013729) list_single_pane_cp2_ParamLimits

0x7dbd,	// (0x00013729) list_single_pane_cp2

0x7e2f,	// (0x0001379b) bg_popup_sub_pane_cp22

0x510e,	// (0x00010a7a) popup_side_volume_key_window_g1

0x5138,	// (0x00010aa4) popup_side_volume_key_window_t1

0x5156,	// (0x00010ac2) volume_small_pane_cp1

0x69ed,	// (0x00012359) bg_popup_sub_pane_cp24_ParamLimits

0x69ed,	// (0x00012359) bg_popup_sub_pane_cp24

0x7e45,	// (0x000137b1) fep_china_uni_candidate_pane_ParamLimits

0x7e45,	// (0x000137b1) fep_china_uni_candidate_pane

0x7e59,	// (0x000137c5) fep_china_uni_entry_pane

0x7e69,	// (0x000137d5) popup_fep_china_uni_window_g1

0x7e85,	// (0x000137f1) fep_china_uni_entry_pane_g1

0x7e8f,	// (0x000137fb) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001b0a1) fep_china_uni_entry_pane_g

0x7e99,	// (0x00013805) fep_entry_item_pane

0x7ea3,	// (0x0001380f) fep_candidate_item_pane

0x7eab,	// (0x00013817) fep_china_uni_candidate_pane_g1

0x7eb5,	// (0x00013821) fep_china_uni_candidate_pane_g2

0x7ebd,	// (0x00013829) fep_china_uni_candidate_pane_g3

0x7ec5,	// (0x00013831) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001b0a6) fep_china_uni_candidate_pane_g

0x3e39,	// (0x0000f7a5) fep_entry_item_pane_g1

0x7ecf,	// (0x0001383b) fep_entry_item_pane_t1_ParamLimits

0x7ecf,	// (0x0001383b) fep_entry_item_pane_t1

0x7ee5,	// (0x00013851) fep_candidate_item_pane_t1_ParamLimits

0x7ee5,	// (0x00013851) fep_candidate_item_pane_t1

0x7efa,	// (0x00013866) fep_candidate_item_pane_t2_ParamLimits

0x7efa,	// (0x00013866) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001b0af) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001b0af) fep_candidate_item_pane_t

0x6757,	// (0x000120c3) list_highlight_pane_cp31_ParamLimits

0x6757,	// (0x000120c3) list_highlight_pane_cp31

0x7f0c,	// (0x00013878) level_1_signal_lsc

0x7f15,	// (0x00013881) level_2_signal_lsc

0x7f1e,	// (0x0001388a) level_3_signal_lsc

0x7f27,	// (0x00013893) level_4_signal_lsc

0x7f30,	// (0x0001389c) level_5_signal_lsc

0x7f39,	// (0x000138a5) level_6_signal_lsc

0x7f42,	// (0x000138ae) level_7_signal_lsc

0x7f42,	// (0x000138ae) level_1_battery_lsc

0x7f4b,	// (0x000138b7) level_2_battery_lsc

0x7f54,	// (0x000138c0) level_3_battery_lsc

0x7f5d,	// (0x000138c9) level_4_battery_lsc

0x7f66,	// (0x000138d2) level_5_battery_lsc

0x7f6f,	// (0x000138db) level_6_battery_lsc

0x7f0c,	// (0x00013878) level_7_battery_lsc

0x7f78,	// (0x000138e4) scroll_handle_focus_pane_g1

0x7f81,	// (0x000138ed) scroll_handle_focus_pane_g2

0x7f8a,	// (0x000138f6) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001b0b4) scroll_handle_focus_pane_g

0x7f93,	// (0x000138ff) list_single_2graphic_pane_g1_ParamLimits

0x7f93,	// (0x000138ff) list_single_2graphic_pane_g1

0x7031,	// (0x0001299d) list_single_2graphic_pane_g2_ParamLimits

0x7031,	// (0x0001299d) list_single_2graphic_pane_g2

0x6fb7,	// (0x00012923) list_single_2graphic_pane_g3_ParamLimits

0x6fb7,	// (0x00012923) list_single_2graphic_pane_g3

0x7f9f,	// (0x0001390b) list_single_2graphic_pane_g4_ParamLimits

0x7f9f,	// (0x0001390b) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001b0bb) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001b0bb) list_single_2graphic_pane_g

0x7fab,	// (0x00013917) list_single_2graphic_pane_t1_ParamLimits

0x7fab,	// (0x00013917) list_single_2graphic_pane_t1

0x7fd9,	// (0x00013945) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7fd9,	// (0x00013945) list_double2_graphic_large_graphic_pane_g1

0x70d6,	// (0x00012a42) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x70d6,	// (0x00012a42) list_double2_graphic_large_graphic_pane_g2

0x70e7,	// (0x00012a53) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x70e7,	// (0x00012a53) list_double2_graphic_large_graphic_pane_g3

0x7feb,	// (0x00013957) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7feb,	// (0x00013957) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001b0c4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001b0c4) list_double2_graphic_large_graphic_pane_g

0x7ff7,	// (0x00013963) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7ff7,	// (0x00013963) list_double2_graphic_large_graphic_pane_t1

0x800d,	// (0x00013979) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x800d,	// (0x00013979) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001b0cd) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001b0cd) list_double2_graphic_large_graphic_pane_t

0x8158,	// (0x00013ac4) popup_fast_swap_window_ParamLimits

0x8158,	// (0x00013ac4) popup_fast_swap_window

0x8176,	// (0x00013ae2) popup_side_volume_key_window

0x8194,	// (0x00013b00) stacon_top_pane

0x819e,	// (0x00013b0a) status_pane_ParamLimits

0x819e,	// (0x00013b0a) status_pane

0x8194,	// (0x00013b00) status_small_pane

0x3fb2,	// (0x0000f91e) control_pane

0x3fb2,	// (0x0000f91e) stacon_bottom_pane

0x7494,	// (0x00012e00) scroll_pane_cp121

0x748b,	// (0x00012df7) set_content_pane

0x801f,	// (0x0001398b) bg_active_tab_pane_g1_cp1

0x8028,	// (0x00013994) bg_active_tab_pane_g2_cp1

0x8031,	// (0x0001399d) bg_active_tab_pane_g3_cp1

0x801f,	// (0x0001398b) bg_passive_tab_pane_g1_cp1

0x8028,	// (0x00013994) bg_passive_tab_pane_g2_cp1

0x8031,	// (0x0001399d) bg_passive_tab_pane_g3_cp1

0x803a,	// (0x000139a6) bg_active_tab_pane_g1_cp2

0x8028,	// (0x00013994) bg_active_tab_pane_g2_cp2

0x8043,	// (0x000139af) bg_active_tab_pane_g3_cp2

0x803a,	// (0x000139a6) bg_passive_tab_pane_g1_cp2

0x8028,	// (0x00013994) bg_passive_tab_pane_g2_cp2

0x8043,	// (0x000139af) bg_passive_tab_pane_g3_cp2

0x804c,	// (0x000139b8) bg_active_tab_pane_g1_cp3

0x8028,	// (0x00013994) bg_active_tab_pane_g2_cp3

0x8055,	// (0x000139c1) bg_active_tab_pane_g3_cp3

0x804c,	// (0x000139b8) bg_passive_tab_pane_g1_cp3

0x8028,	// (0x00013994) bg_passive_tab_pane_g2_cp3

0x8055,	// (0x000139c1) bg_passive_tab_pane_g3_cp3

0x805e,	// (0x000139ca) bg_active_tab_pane_g1_cp4

0x8028,	// (0x00013994) bg_active_tab_pane_g2_cp4

0x8069,	// (0x000139d5) bg_active_tab_pane_g3_cp4

0x805e,	// (0x000139ca) bg_passive_tab_pane_g1_cp4

0x8028,	// (0x00013994) bg_passive_tab_pane_g2_cp4

0x8069,	// (0x000139d5) bg_passive_tab_pane_g3_cp4

0x80b2,	// (0x00013a1e) bg_active_tab_pane_g1_cp5

0x8028,	// (0x00013994) bg_active_tab_pane_g2_cp5

0x80bb,	// (0x00013a27) bg_active_tab_pane_g3_cp5

0x80b2,	// (0x00013a1e) bg_passive_tab_pane_g1_cp5

0x8028,	// (0x00013994) bg_passive_tab_pane_g2_cp5

0x80bb,	// (0x00013a27) bg_passive_tab_pane_g3_cp5

0x80c4,	// (0x00013a30) list_set_graphic_pane_ParamLimits

0x80c4,	// (0x00013a30) list_set_graphic_pane

0x3fb2,	// (0x0000f91e) bg_set_opt_pane_cp4

0x80d9,	// (0x00013a45) list_set_graphic_pane_g1_ParamLimits

0x80d9,	// (0x00013a45) list_set_graphic_pane_g1

0x80e5,	// (0x00013a51) list_set_graphic_pane_g2_ParamLimits

0x80e5,	// (0x00013a51) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001b0d2) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001b0d2) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0001b441) volume_small_pane_cp_g

0x8109,	// (0x00013a75) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8109,	// (0x00013a75) list_double2_large_graphic_pane_g1_cp2

0x8117,	// (0x00013a83) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8117,	// (0x00013a83) list_double2_large_graphic_pane_g2_cp2

0x8128,	// (0x00013a94) list_double2_large_graphic_pane_g3_cp2

0x8130,	// (0x00013a9c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8130,	// (0x00013a9c) list_double2_large_graphic_pane_t1_cp2

0x8146,	// (0x00013ab2) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8146,	// (0x00013ab2) list_double2_large_graphic_pane_t2_cp2

0xa45e,	// (0x00015dca) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa45e,	// (0x00015dca) list_double_large_graphic_pane_g1_cp2

0xa471,	// (0x00015ddd) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa471,	// (0x00015ddd) list_double_large_graphic_pane_g2_cp2

0x82bc,	// (0x00013c28) list_double_large_graphic_pane_g3_cp2

0xa482,	// (0x00015dee) list_double_large_graphic_pane_g4_cp

0xa48a,	// (0x00015df6) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa48a,	// (0x00015df6) list_double_large_graphic_pane_t1_cp2

0xa4a1,	// (0x00015e0d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa4a1,	// (0x00015e0d) list_double_large_graphic_pane_t2_cp2

0x81ac,	// (0x00013b18) list_double2_graphic_pane_g1_cp2_ParamLimits

0x81ac,	// (0x00013b18) list_double2_graphic_pane_g1_cp2

0x81ba,	// (0x00013b26) list_double2_graphic_pane_g2_cp2_ParamLimits

0x81ba,	// (0x00013b26) list_double2_graphic_pane_g2_cp2

0x81cb,	// (0x00013b37) list_double2_graphic_pane_g3_cp2

0x81d5,	// (0x00013b41) list_double2_graphic_pane_t1_cp2_ParamLimits

0x81d5,	// (0x00013b41) list_double2_graphic_pane_t1_cp2

0x81eb,	// (0x00013b57) list_double2_graphic_pane_t2_cp2_ParamLimits

0x81eb,	// (0x00013b57) list_double2_graphic_pane_t2_cp2

0x81fd,	// (0x00013b69) list_single_number_heading_pane_g1_cp2_ParamLimits

0x81fd,	// (0x00013b69) list_single_number_heading_pane_g1_cp2

0x8209,	// (0x00013b75) list_single_number_heading_pane_g2_cp2

0x8211,	// (0x00013b7d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8211,	// (0x00013b7d) list_single_number_heading_pane_t1_cp2

0x8227,	// (0x00013b93) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8227,	// (0x00013b93) list_single_number_heading_pane_t2_cp2

0x823b,	// (0x00013ba7) list_single_number_heading_pane_t3_cp2_ParamLimits

0x823b,	// (0x00013ba7) list_single_number_heading_pane_t3_cp2

0x81fd,	// (0x00013b69) list_single_heading_pane_g1_cp2_ParamLimits

0x81fd,	// (0x00013b69) list_single_heading_pane_g1_cp2

0x8209,	// (0x00013b75) list_single_heading_pane_g2_cp2

0x8211,	// (0x00013b7d) list_single_heading_pane_t1_cp2_ParamLimits

0x8211,	// (0x00013b7d) list_single_heading_pane_t1_cp2

0xa258,	// (0x00015bc4) list_single_heading_pane_t2_cp2_ParamLimits

0xa258,	// (0x00015bc4) list_single_heading_pane_t2_cp2

0xa19a,	// (0x00015b06) list_double_graphic_pane_g1_cp2_ParamLimits

0xa19a,	// (0x00015b06) list_double_graphic_pane_g1_cp2

0xa1a6,	// (0x00015b12) list_double_graphic_pane_g2_cp2_ParamLimits

0xa1a6,	// (0x00015b12) list_double_graphic_pane_g2_cp2

0xa1b5,	// (0x00015b21) list_double_graphic_pane_g3_cp2

0xa1bd,	// (0x00015b29) list_double_graphic_pane_t1_cp2_ParamLimits

0xa1bd,	// (0x00015b29) list_double_graphic_pane_t1_cp2

0xa1d3,	// (0x00015b3f) list_double_graphic_pane_t2_cp2_ParamLimits

0xa1d3,	// (0x00015b3f) list_double_graphic_pane_t2_cp2

0x82b0,	// (0x00013c1c) list_double_number_pane_g1_cp2_ParamLimits

0x82b0,	// (0x00013c1c) list_double_number_pane_g1_cp2

0x82bc,	// (0x00013c28) list_double_number_pane_g2_cp2

0xa15e,	// (0x00015aca) list_double_number_pane_t1_cp2_ParamLimits

0xa15e,	// (0x00015aca) list_double_number_pane_t1_cp2

0xa172,	// (0x00015ade) list_double_number_pane_t2_cp2_ParamLimits

0xa172,	// (0x00015ade) list_double_number_pane_t2_cp2

0xa188,	// (0x00015af4) list_double_number_pane_t3_cp2_ParamLimits

0xa188,	// (0x00015af4) list_double_number_pane_t3_cp2

0xa047,	// (0x000159b3) list_single_graphic_pane_g1_cp2_ParamLimits

0xa047,	// (0x000159b3) list_single_graphic_pane_g1_cp2

0x8316,	// (0x00013c82) list_single_graphic_pane_g2_cp2_ParamLimits

0x8316,	// (0x00013c82) list_single_graphic_pane_g2_cp2

0x8322,	// (0x00013c8e) list_single_graphic_pane_g3_cp2

0xa01d,	// (0x00015989) list_single_graphic_pane_t1_cp2_ParamLimits

0xa01d,	// (0x00015989) list_single_graphic_pane_t1_cp2

0x8316,	// (0x00013c82) list_single_number_pane_g1_cp2_ParamLimits

0x8316,	// (0x00013c82) list_single_number_pane_g1_cp2

0x8322,	// (0x00013c8e) list_single_number_pane_g2_cp2

0xa01d,	// (0x00015989) list_single_number_pane_t1_cp2_ParamLimits

0xa01d,	// (0x00015989) list_single_number_pane_t1_cp2

0xa033,	// (0x0001599f) list_single_number_pane_t2_cp2_ParamLimits

0xa033,	// (0x0001599f) list_single_number_pane_t2_cp2

0x8117,	// (0x00013a83) list_double2_pane_g1_cp2_ParamLimits

0x8117,	// (0x00013a83) list_double2_pane_g1_cp2

0x8128,	// (0x00013a94) list_double2_pane_g2_cp2

0x8288,	// (0x00013bf4) list_double2_pane_t1_cp2_ParamLimits

0x8288,	// (0x00013bf4) list_double2_pane_t1_cp2

0x829e,	// (0x00013c0a) list_double2_pane_t2_cp2_ParamLimits

0x829e,	// (0x00013c0a) list_double2_pane_t2_cp2

0x82b0,	// (0x00013c1c) list_double_pane_g1_cp2_ParamLimits

0x82b0,	// (0x00013c1c) list_double_pane_g1_cp2

0x82bc,	// (0x00013c28) list_double_pane_g2_cp2

0x82c4,	// (0x00013c30) list_double_pane_t1_cp2_ParamLimits

0x82c4,	// (0x00013c30) list_double_pane_t1_cp2

0x82da,	// (0x00013c46) list_double_pane_t2_cp2_ParamLimits

0x82da,	// (0x00013c46) list_double_pane_t2_cp2

0x8306,	// (0x00013c72) list_single_pane_cp2_g3

0x8316,	// (0x00013c82) list_single_pane_g1_cp2_ParamLimits

0x8316,	// (0x00013c82) list_single_pane_g1_cp2

0x8322,	// (0x00013c8e) list_single_pane_g2_cp2

0x832a,	// (0x00013c96) list_single_pane_t1_cp2_ParamLimits

0x832a,	// (0x00013c96) list_single_pane_t1_cp2

0x8342,	// (0x00013cae) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8342,	// (0x00013cae) list_single_large_graphic_pane_g1_cp2

0x8350,	// (0x00013cbc) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8350,	// (0x00013cbc) list_single_large_graphic_pane_g2_cp2

0x835c,	// (0x00013cc8) list_single_large_graphic_pane_g3_cp2

0x8364,	// (0x00013cd0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8364,	// (0x00013cd0) list_single_large_graphic_pane_g4_cp1

0x837e,	// (0x00013cea) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x837e,	// (0x00013cea) list_single_large_graphic_pane_t1_cp2

0x9fe7,	// (0x00015953) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9fe7,	// (0x00015953) list_single_graphic_heading_pane_g1_cp2

0x9fb4,	// (0x00015920) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9fb4,	// (0x00015920) list_single_graphic_heading_pane_g4_cp2

0x8322,	// (0x00013c8e) list_single_graphic_heading_pane_g5_cp2

0x9ff3,	// (0x0001595f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9ff3,	// (0x0001595f) list_single_graphic_heading_pane_t1_cp2

0xa009,	// (0x00015975) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa009,	// (0x00015975) list_single_graphic_heading_pane_t2_cp2

0x9fa8,	// (0x00015914) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9fa8,	// (0x00015914) list_single_2graphic_pane_g1_cp2

0x9fb4,	// (0x00015920) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9fb4,	// (0x00015920) list_single_2graphic_pane_g2_cp2

0x8322,	// (0x00013c8e) list_single_2graphic_pane_g3_cp2

0x9fc5,	// (0x00015931) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9fc5,	// (0x00015931) list_single_2graphic_pane_g4_cp2

0x9fd1,	// (0x0001593d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9fd1,	// (0x0001593d) list_single_2graphic_pane_t1_cp2

0x3e39,	// (0x0000f7a5) list_highlight_pane_g10_cp1

0x9b80,	// (0x000154ec) list_highlight_pane_g1_cp1

0x9b88,	// (0x000154f4) list_highlight_pane_g2_cp1

0x9b90,	// (0x000154fc) list_highlight_pane_g3_cp1

0x9b98,	// (0x00015504) list_highlight_pane_g4_cp1

0x9ba0,	// (0x0001550c) list_highlight_pane_g5_cp1

0x9ba8,	// (0x00015514) list_highlight_pane_g6_cp1

0x9bb0,	// (0x0001551c) list_highlight_pane_g7_cp1

0x9bb8,	// (0x00015524) list_highlight_pane_g8_cp1

0x9bc0,	// (0x0001552c) list_highlight_pane_g9_cp1

0x9aa0,	// (0x0001540c) form_field_slider_pane_t3

0x9aae,	// (0x0001541a) form_field_slider_pane_t4

0x9abc,	// (0x00015428) slider_form_pane_ParamLimits

0x9abc,	// (0x00015428) slider_form_pane

0x3fb2,	// (0x0000f91e) control_abbreviations

0x3fb2,	// (0x0000f91e) control_conventions

0x3fb2,	// (0x0000f91e) control_definitions

0x3fb2,	// (0x0000f91e) format_table_attribute

0xa2ae,	// (0x00015c1a) bg_popup_preview_window_pane_g9

0x3fb2,	// (0x0000f91e) format_table_data2

0x3fb2,	// (0x0000f91e) format_table_data3

0x3fb2,	// (0x0000f91e) format_table_data_example

0x0008,

0x3fb2,	// (0x0000f91e) intro_purpose

0xf8fb,	// (0x0001b267) bg_popup_preview_window_pane_g

0x3fb2,	// (0x0000f91e) texts_category

0x3fb2,	// (0x0000f91e) texts_graphics

0x8394,	// (0x00013d00) text_digital

0x83a3,	// (0x00013d0f) text_primary

0x83b2,	// (0x00013d1e) text_primary_small

0x83c1,	// (0x00013d2d) text_secondary

0x83d0,	// (0x00013d3c) text_title

0xaad3,	// (0x0001643f) bg_passive_tab_pane_g1_cp3_srt

0x8028,	// (0x00013994) bg_passive_tab_pane_g2_cp3_srt

0xaadc,	// (0x00016448) bg_passive_tab_pane_g3_cp3_srt

0x6757,	// (0x000120c3) bg_active_tab_pane_cp3_srt_ParamLimits

0x6757,	// (0x000120c3) bg_active_tab_pane_cp3_srt

0xaae5,	// (0x00016451) tabs_4_active_pane_srt_g1

0xaaed,	// (0x00016459) tabs_4_active_pane_srt_t1_ParamLimits

0xaaed,	// (0x00016459) tabs_4_active_pane_srt_t1

0xaad3,	// (0x0001643f) bg_active_tab_pane_g1_cp3_copy1

0x8028,	// (0x00013994) bg_active_tab_pane_g2_cp3_copy1

0xaadc,	// (0x00016448) bg_active_tab_pane_g3_cp3_copy1

0x6757,	// (0x000120c3) tabs_2_long_active_pane_srt_ParamLimits

0x6757,	// (0x000120c3) tabs_2_long_active_pane_srt

0x6757,	// (0x000120c3) tabs_2_long_passive_pane_srt_ParamLimits

0x6757,	// (0x000120c3) tabs_2_long_passive_pane_srt

0x78ec,	// (0x00013258) bg_passive_tab_pane_cp4_srt_ParamLimits

0x78ec,	// (0x00013258) bg_passive_tab_pane_cp4_srt

0xa726,	// (0x00016092) bg_passive_tab_pane_g1_cp4_srt

0x8028,	// (0x00013994) bg_passive_tab_pane_g2_cp4_srt

0xa72f,	// (0x0001609b) bg_passive_tab_pane_g3_cp4_srt

0x78cb,	// (0x00013237) bg_active_tab_pane_cp4_srt_ParamLimits

0x78cb,	// (0x00013237) bg_active_tab_pane_cp4_srt

0xa738,	// (0x000160a4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa738,	// (0x000160a4) tabs_2_long_active_pane_srt_t1

0xa726,	// (0x00016092) bg_active_tab_pane_g1_cp4_srt

0x8028,	// (0x00013994) bg_active_tab_pane_g2_cp4_srt

0xa72f,	// (0x0001609b) bg_active_tab_pane_g3_cp4_srt

0x69ed,	// (0x00012359) tabs_3_long_active_pane_srt_ParamLimits

0x69ed,	// (0x00012359) tabs_3_long_active_pane_srt

0x69ed,	// (0x00012359) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x69ed,	// (0x00012359) tabs_3_long_passive_pane_cp_srt

0x69ed,	// (0x00012359) tabs_3_long_passive_pane_srt_ParamLimits

0x69ed,	// (0x00012359) tabs_3_long_passive_pane_srt

0x78ec,	// (0x00013258) bg_passive_tab_pane_cp5_srt_ParamLimits

0x78ec,	// (0x00013258) bg_passive_tab_pane_cp5_srt

0x80b2,	// (0x00013a1e) bg_passive_tab_pane_g1_cp5_srt

0x8028,	// (0x00013994) bg_passive_tab_pane_g2_cp5_srt

0x80bb,	// (0x00013a27) bg_passive_tab_pane_g3_cp5_srt

0x78cb,	// (0x00013237) bg_active_tab_pane_cp5_srt_ParamLimits

0x78cb,	// (0x00013237) bg_active_tab_pane_cp5_srt

0xa714,	// (0x00016080) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa714,	// (0x00016080) tabs_3_long_active_pane_srt_t1

0x80b2,	// (0x00013a1e) bg_active_tab_pane_g1_cp5_srt

0x8028,	// (0x00013994) bg_active_tab_pane_g2_cp5_srt

0x80bb,	// (0x00013a27) bg_active_tab_pane_g3_cp5_srt

0xa706,	// (0x00016072) navi_text_pane_srt_t1

0xa6fe,	// (0x0001606a) navi_icon_pane_srt_g1

0x85a7,	// (0x00013f13) midp_editing_number_pane_srt

0x83df,	// (0x00013d4b) midp_ticker_pane_srt

0x85af,	// (0x00013f1b) midp_ticker_pane_srt_g1

0x85b7,	// (0x00013f23) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001b0f1) midp_ticker_pane_srt_g

0x85bf,	// (0x00013f2b) midp_ticker_pane_srt_t1

0xa6ef,	// (0x0001605b) midp_editing_number_pane_t1_copy1

0x83e7,	// (0x00013d53) listscroll_midp_pane

0x83e7,	// (0x00013d53) midp_form_pane

0x8455,	// (0x00013dc1) midp_info_popup_window_ParamLimits

0x8455,	// (0x00013dc1) midp_info_popup_window

0x77ad,	// (0x00013119) bg_popup_sub_pane_cp50_ParamLimits

0x77ad,	// (0x00013119) bg_popup_sub_pane_cp50

0x97b6,	// (0x00015122) listscroll_midp_info_pane_ParamLimits

0x97b6,	// (0x00015122) listscroll_midp_info_pane

0x979e,	// (0x0001510a) listscroll_form_midp_pane_ParamLimits

0x979e,	// (0x0001510a) listscroll_form_midp_pane

0x97aa,	// (0x00015116) scroll_bar_cp050

0x977e,	// (0x000150ea) list_midp_pane

0xb719,	// (0x00017085) signal_pane_g2_cp

0x96b8,	// (0x00015024) listscroll_midp_info_pane_t1_ParamLimits

0x96b8,	// (0x00015024) listscroll_midp_info_pane_t1

0x96d0,	// (0x0001503c) listscroll_midp_info_pane_t2_ParamLimits

0x96d0,	// (0x0001503c) listscroll_midp_info_pane_t2

0x970e,	// (0x0001507a) listscroll_midp_info_pane_t3_ParamLimits

0x970e,	// (0x0001507a) listscroll_midp_info_pane_t3

0x9748,	// (0x000150b4) listscroll_midp_info_pane_t4_ParamLimits

0x9748,	// (0x000150b4) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x0001b1a2) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x0001b1a2) listscroll_midp_info_pane_t

0x7877,	// (0x000131e3) scroll_pane_cp21

0x9652,	// (0x00014fbe) form_midp_field_choice_group_pane

0x965b,	// (0x00014fc7) form_midp_field_text_pane

0x969e,	// (0x0001500a) form_midp_field_time_pane

0x96a6,	// (0x00015012) form_midp_gauge_slider_pane

0x96af,	// (0x0001501b) form_midp_gauge_wait_pane

0x3fb2,	// (0x0000f91e) form_midp_image_pane

0x9632,	// (0x00014f9e) list_single_midp_pane_ParamLimits

0x9632,	// (0x00014f9e) list_single_midp_pane

0x95f6,	// (0x00014f62) form_midp_field_text_pane_t1

0x93fb,	// (0x00014d67) input_focus_pane_cp050

0x9621,	// (0x00014f8d) list_midp_form_text_pane

0x95c5,	// (0x00014f31) form_midp_field_choice_group_pane_t1

0x95d3,	// (0x00014f3f) input_focus_pane_cp051

0x95e7,	// (0x00014f53) list_midp_choice_pane

0x3fb2,	// (0x0000f91e) status_idle_pane

0x95a9,	// (0x00014f15) form_midp_field_time_pane_t1

0x3e39,	// (0x0000f7a5) wait_anim_pane_g2_copy1

0x95b7,	// (0x00014f23) form_midp_field_time_pane_t2

0x0001,

0x8505,	// (0x00013e71) aid_navinavi_width_2_pane

0xf831,	// (0x0001b19d) form_midp_field_time_pane_t

0x3fb2,	// (0x0000f91e) input_focus_pane_cp052

0x3fb2,	// (0x0000f91e) bg_input_focus_pane_cp040

0x9569,	// (0x00014ed5) form_midp_gauge_slider_pane_t1

0x9577,	// (0x00014ee3) form_midp_gauge_slider_pane_t2

0x9585,	// (0x00014ef1) form_midp_gauge_slider_pane_t3

0x9593,	// (0x00014eff) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x0001b194) form_midp_gauge_slider_pane_t

0x95a1,	// (0x00014f0d) form_midp_slider_pane

0x6757,	// (0x000120c3) bg_input_focus_pane_cp041_ParamLimits

0x6757,	// (0x000120c3) bg_input_focus_pane_cp041

0x9536,	// (0x00014ea2) form_midp_gauge_wait_pane_t1_ParamLimits

0x9536,	// (0x00014ea2) form_midp_gauge_wait_pane_t1

0x9548,	// (0x00014eb4) form_midp_gauge_wait_pane_t2_ParamLimits

0x9548,	// (0x00014eb4) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x0001b18f) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x0001b18f) form_midp_gauge_wait_pane_t

0x955a,	// (0x00014ec6) form_midp_wait_pane_ParamLimits

0x955a,	// (0x00014ec6) form_midp_wait_pane

0x94fe,	// (0x00014e6a) form_midp_image_pane_g1

0x9507,	// (0x00014e73) form_midp_image_pane_t1

0x9516,	// (0x00014e82) form_midp_image_pane_t2

0x9525,	// (0x00014e91) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x0001b188) form_midp_image_pane_t

0x94e6,	// (0x00014e52) list_single_midp_pane_g1

0x94ef,	// (0x00014e5b) list_single_midp_pane_t1

0x94cc,	// (0x00014e38) list_midp_form_item_pane_ParamLimits

0x94cc,	// (0x00014e38) list_midp_form_item_pane

0x84ad,	// (0x00013e19) list_midp_form_item_pane_t1

0x84bc,	// (0x00013e28) midp_ticker_pane_g1

0x84c8,	// (0x00013e34) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001b0d7) midp_ticker_pane_g

0x84d4,	// (0x00013e40) midp_ticker_pane_t1

0xa9a3,	// (0x0001630f) midp_editing_number_pane_t1

0xa981,	// (0x000162ed) midp_editing_number_pane

0xa990,	// (0x000162fc) midp_ticker_pane

0xa6b7,	// (0x00016023) ai_message_heading_pane

0x3fb2,	// (0x0000f91e) bg_popup_window_pane_cp14

0xa6bf,	// (0x0001602b) listscroll_ai_message_pane

0xa63d,	// (0x00015fa9) ai_message_heading_pane_g1_ParamLimits

0xa63d,	// (0x00015fa9) ai_message_heading_pane_g1

0xa649,	// (0x00015fb5) ai_message_heading_pane_g2_ParamLimits

0xa649,	// (0x00015fb5) ai_message_heading_pane_g2

0xa657,	// (0x00015fc3) ai_message_heading_pane_g3_ParamLimits

0xa657,	// (0x00015fc3) ai_message_heading_pane_g3

0xa663,	// (0x00015fcf) ai_message_heading_pane_g4_ParamLimits

0xa663,	// (0x00015fcf) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x0001b2c9) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x0001b2c9) ai_message_heading_pane_g

0xa66f,	// (0x00015fdb) ai_message_heading_pane_t1_ParamLimits

0xa66f,	// (0x00015fdb) ai_message_heading_pane_t1

0xa689,	// (0x00015ff5) ai_message_heading_pane_t2_ParamLimits

0xa689,	// (0x00015ff5) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x0001b2d2) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x0001b2d2) ai_message_heading_pane_t

0xa69d,	// (0x00016009) bg_popup_heading_pane_cp1_ParamLimits

0xa69d,	// (0x00016009) bg_popup_heading_pane_cp1

0xa62b,	// (0x00015f97) list_ai_message_pane_ParamLimits

0xa62b,	// (0x00015f97) list_ai_message_pane

0x7877,	// (0x000131e3) scroll_pane_cp10

0xa5c7,	// (0x00015f33) list_ai_message_pane_g1

0xa5cf,	// (0x00015f3b) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x0001b2a6) list_ai_message_pane_g

0xa5d7,	// (0x00015f43) list_ai_message_pane_t1_ParamLimits

0xa5d7,	// (0x00015f43) list_ai_message_pane_t1

0xa5ec,	// (0x00015f58) list_ai_message_pane_t2_ParamLimits

0xa5ec,	// (0x00015f58) list_ai_message_pane_t2

0xa601,	// (0x00015f6d) list_ai_message_pane_t3_ParamLimits

0xa601,	// (0x00015f6d) list_ai_message_pane_t3

0xa616,	// (0x00015f82) list_ai_message_pane_t4_ParamLimits

0xa616,	// (0x00015f82) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x0001b2ab) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x0001b2ab) list_ai_message_pane_t

0xa5b0,	// (0x00015f1c) cell_ai_soft_ind_pane_ParamLimits

0xa5b0,	// (0x00015f1c) cell_ai_soft_ind_pane

0x84e6,	// (0x00013e52) cell_ai_soft_ind_pane_g1_ParamLimits

0x84e6,	// (0x00013e52) cell_ai_soft_ind_pane_g1

0x3fb2,	// (0x0000f91e) grid_highlight_cp1

0x84f3,	// (0x00013e5f) text_secondary_cp56_ParamLimits

0x84f3,	// (0x00013e5f) text_secondary_cp56

0xa585,	// (0x00015ef1) example_general_pane_ParamLimits

0xa585,	// (0x00015ef1) example_general_pane

0xa591,	// (0x00015efd) example_parent_pane_g1_ParamLimits

0xa591,	// (0x00015efd) example_parent_pane_g1

0xa59d,	// (0x00015f09) example_parent_pane_t1_ParamLimits

0xa59d,	// (0x00015f09) example_parent_pane_t1

0x8b38,	// (0x000144a4) popup_preview_text_window_ParamLimits

0x8b38,	// (0x000144a4) popup_preview_text_window

0x830e,	// (0x00013c7a) list_single_pane_cp2_g4

0x6aa3,	// (0x0001240f) bg_popup_preview_window_pane_ParamLimits

0x6aa3,	// (0x0001240f) bg_popup_preview_window_pane

0xa2b8,	// (0x00015c24) popup_preview_text_window_t1_ParamLimits

0xa2b8,	// (0x00015c24) popup_preview_text_window_t1

0xa2d6,	// (0x00015c42) popup_preview_text_window_t2_ParamLimits

0xa2d6,	// (0x00015c42) popup_preview_text_window_t2

0xa31f,	// (0x00015c8b) popup_preview_text_window_t3_ParamLimits

0xa31f,	// (0x00015c8b) popup_preview_text_window_t3

0xa364,	// (0x00015cd0) popup_preview_text_window_t4_ParamLimits

0xa364,	// (0x00015cd0) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x0001b27a) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x0001b27a) popup_preview_text_window_t

0xa3e2,	// (0x00015d4e) scroll_pane_cp11

0x92df,	// (0x00014c4b) bg_popup_preview_window_pane_g1

0xa26c,	// (0x00015bd8) bg_popup_preview_window_pane_g2

0xa276,	// (0x00015be2) bg_popup_preview_window_pane_g3

0xa280,	// (0x00015bec) bg_popup_preview_window_pane_g4

0xa28a,	// (0x00015bf6) bg_popup_preview_window_pane_g5

0xa294,	// (0x00015c00) bg_popup_preview_window_pane_g6

0xa29c,	// (0x00015c08) bg_popup_preview_window_pane_g7

0xa2a4,	// (0x00015c10) bg_popup_preview_window_pane_g8

0x4a36,	// (0x000103a2) aid_popup_width_pane

0x8b14,	// (0x00014480) popup_midp_note_alarm_window_ParamLimits

0x8b14,	// (0x00014480) popup_midp_note_alarm_window

0x7563,	// (0x00012ecf) data_form_pane_ParamLimits

0x756f,	// (0x00012edb) form_field_data_pane_g1

0x7579,	// (0x00012ee5) form_field_data_pane_t1_ParamLimits

0x7593,	// (0x00012eff) input_focus_pane_ParamLimits

0x75a1,	// (0x00012f0d) data_form_wide_pane_ParamLimits

0x75ad,	// (0x00012f19) form_field_data_wide_pane_g1

0x75d9,	// (0x00012f45) form_field_data_wide_pane_t1_ParamLimits

0x6d69,	// (0x000126d5) input_focus_pane_cp6_ParamLimits

0x7822,	// (0x0001318e) input_popup_find_pane_g1_ParamLimits

0x7822,	// (0x0001318e) input_popup_find_pane_g1

0x4fbb,	// (0x00010927) aid_navi_side_left_pane

0x4fd0,	// (0x0001093c) aid_navi_side_right_pane

0x9c7b,	// (0x000155e7) bg_popup_window_pane_cp30_ParamLimits

0x9c7b,	// (0x000155e7) bg_popup_window_pane_cp30

0x9cf5,	// (0x00015661) popup_midp_note_alarm_window_g1_ParamLimits

0x9cf5,	// (0x00015661) popup_midp_note_alarm_window_g1

0x9d25,	// (0x00015691) popup_midp_note_alarm_window_t1_ParamLimits

0x9d25,	// (0x00015691) popup_midp_note_alarm_window_t1

0x9dc6,	// (0x00015732) popup_midp_note_alarm_window_t2_ParamLimits

0x9dc6,	// (0x00015732) popup_midp_note_alarm_window_t2

0x9e74,	// (0x000157e0) popup_midp_note_alarm_window_t3_ParamLimits

0x9e74,	// (0x000157e0) popup_midp_note_alarm_window_t3

0x9ea6,	// (0x00015812) popup_midp_note_alarm_window_t4_ParamLimits

0x9ea6,	// (0x00015812) popup_midp_note_alarm_window_t4

0x9ecc,	// (0x00015838) popup_midp_note_alarm_window_t5_ParamLimits

0x9ecc,	// (0x00015838) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x0001b217) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x0001b217) popup_midp_note_alarm_window_t

0x9f78,	// (0x000158e4) wait_bar_pane_cp1_ParamLimits

0x9f78,	// (0x000158e4) wait_bar_pane_cp1

0x3fb2,	// (0x0000f91e) wait_anim_pane_copy1

0x3fb2,	// (0x0000f91e) wait_border_pane_copy1

0x9960,	// (0x000152cc) wait_border_pane_g1_copy1

0x75f3,	// (0x00012f5f) form_field_popup_pane_g1

0x75fb,	// (0x00012f67) form_field_popup_pane_t1_ParamLimits

0x7593,	// (0x00012eff) input_focus_pane_cp7_ParamLimits

0x7615,	// (0x00012f81) list_form_pane_ParamLimits

0x7621,	// (0x00012f8d) form_field_popup_wide_pane_g1

0x7629,	// (0x00012f95) form_field_popup_wide_pane_t1_ParamLimits

0x7593,	// (0x00012eff) input_focus_pane_cp8_ParamLimits

0x763e,	// (0x00012faa) list_form_wide_pane_ParamLimits

0xab60,	// (0x000164cc) aid_size_cell_graphic_pane

0x7717,	// (0x00013083) data_form_pane_t1_ParamLimits

0xa94c,	// (0x000162b8) data_form_wide_pane_t1_ParamLimits

0x8e5f,	// (0x000147cb) bg_status_flat_pane

0x66b7,	// (0x00012023) title_pane_t1_ParamLimits

0x671f,	// (0x0001208b) title_pane_t2_ParamLimits

0x6745,	// (0x000120b1) title_pane_t3_ParamLimits

0xf573,	// (0x0001aedf) title_pane_t_ParamLimits

0x7cfa,	// (0x00013666) level_1_signal_ParamLimits

0x7d07,	// (0x00013673) level_2_signal_ParamLimits

0x7d14,	// (0x00013680) level_3_signal_ParamLimits

0x7d21,	// (0x0001368d) level_4_signal_ParamLimits

0x7d2e,	// (0x0001369a) level_5_signal_ParamLimits

0x7d3b,	// (0x000136a7) level_6_signal_ParamLimits

0x7d48,	// (0x000136b4) level_7_signal_ParamLimits

0x7cfa,	// (0x00013666) level_1_battery_ParamLimits

0x7d07,	// (0x00013673) level_2_battery_ParamLimits

0x7d14,	// (0x00013680) level_3_battery_ParamLimits

0x7d21,	// (0x0001368d) level_4_battery_ParamLimits

0x7d2e,	// (0x0001369a) level_5_battery_ParamLimits

0x7d3b,	// (0x000136a7) level_6_battery_ParamLimits

0x7d48,	// (0x000136b4) level_7_battery_ParamLimits

0x9b80,	// (0x000154ec) bg_status_flat_pane_g1

0x9b88,	// (0x000154f4) bg_status_flat_pane_g2

0x9b90,	// (0x000154fc) bg_status_flat_pane_g3

0x9b98,	// (0x00015504) bg_status_flat_pane_g4

0x9ba0,	// (0x0001550c) bg_status_flat_pane_g5

0x9ba8,	// (0x00015514) bg_status_flat_pane_g6

0x9bb0,	// (0x0001551c) bg_status_flat_pane_g7

0x676d,	// (0x000120d9) tabs_3_active_pane_t1_ParamLimits

0x676d,	// (0x000120d9) tabs_3_passive_pane_t1_ParamLimits

0x6787,	// (0x000120f3) tabs_4_active_pane_t1_ParamLimits

0x6787,	// (0x000120f3) tabs_4_1_passive_pane_t1_ParamLimits

0x78b9,	// (0x00013225) tabs_2_active_pane_t1_ParamLimits

0x78b9,	// (0x00013225) tabs_2_passive_pane_t1_ParamLimits

0x78cb,	// (0x00013237) bg_active_tab_pane_cp4_ParamLimits

0x78d9,	// (0x00013245) tabs_2_long_active_pane_t1_ParamLimits

0x78ec,	// (0x00013258) bg_passive_tab_pane_cp4_ParamLimits

0x559d,	// (0x00010f09) list_single_midp_graphic_pane_t1_ParamLimits

0x78cb,	// (0x00013237) bg_active_tab_pane_cp5_ParamLimits

0x78f8,	// (0x00013264) tabs_3_long_active_pane_t1_ParamLimits

0x78ec,	// (0x00013258) bg_passive_tab_pane_cp5_ParamLimits

0x559d,	// (0x00010f09) list_single_midp_graphic_pane_t1

0x8e5f,	// (0x000147cb) bg_status_flat_pane_ParamLimits

0x8f2a,	// (0x00014896) indicator_pane_cp2_ParamLimits

0x8f2a,	// (0x00014896) indicator_pane_cp2

0x906c,	// (0x000149d8) navi_pane_srt_ParamLimits

0x906c,	// (0x000149d8) navi_pane_srt

0x9090,	// (0x000149fc) popup_clock_digital_analogue_window_cp1

0x6851,	// (0x000121bd) indicator_pane_t1

0x83df,	// (0x00013d4b) copy_highlight_pane

0x83df,	// (0x00013d4b) cursor_graphics_pane

0x83df,	// (0x00013d4b) graphic_within_text_pane

0x83df,	// (0x00013d4b) link_highlight_pane

0xa3a5,	// (0x00015d11) popup_preview_text_window_t5_ParamLimits

0xa3a5,	// (0x00015d11) popup_preview_text_window_t5

0x850f,	// (0x00013e7b) cursor_digital_pane

0x850f,	// (0x00013e7b) cursor_primary_pane

0x8520,	// (0x00013e8c) cursor_primary_small_pane

0x8528,	// (0x00013e94) cursor_secondary_pane

0x8530,	// (0x00013e9c) cursor_title_pane

0x850f,	// (0x00013e7b) link_highlight_digital_pane

0x8517,	// (0x00013e83) link_highlight_primary_pane

0x8520,	// (0x00013e8c) link_highlight_primary_small_pane

0x8528,	// (0x00013e94) link_highlight_secondary_pane

0x8530,	// (0x00013e9c) link_highlight_title_pane

0x850f,	// (0x00013e7b) copy_highlight_digital_pane

0x850f,	// (0x00013e7b) copy_highlight_primary_pane

0x8520,	// (0x00013e8c) copy_highlight_primary_small_pane

0x8528,	// (0x00013e94) copy_highlight_secondary_pane

0x8530,	// (0x00013e9c) copy_highlight_title_pane

0x8528,	// (0x00013e94) graphic_text_digital_pane

0x9c1e,	// (0x0001558a) graphic_text_primary_pane

0x9c27,	// (0x00015593) graphic_text_primary_small_pane

0x8520,	// (0x00013e8c) graphic_text_secondary_pane

0x850f,	// (0x00013e7b) graphic_text_title_pane

0x8538,	// (0x00013ea4) cursor_primary_pane_g1

0x9c10,	// (0x0001557c) cursor_text_primary_t1

0x9bf8,	// (0x00015564) cursor_primary_small_pane_g1

0x9c02,	// (0x0001556e) cursor_text_primary_small_t1

0x9be0,	// (0x0001554c) cursor_primary_small_pane_g1_copy1

0x9bea,	// (0x00015556) cursor_text_primary_small_t1_copy1

0x9bc8,	// (0x00015534) cursor_text_title_t1

0x9bd6,	// (0x00015542) cursor_title_pane_g1

0x8538,	// (0x00013ea4) cursor_digital_pane_g1

0x8542,	// (0x00013eae) cursor_text_digital_t1

0x8550,	// (0x00013ebc) link_highlight_primary_pane_g1

0x9b71,	// (0x000154dd) link_highlight_primary_pane_t1

0x8550,	// (0x00013ebc) link_highlight_primary_small_pane_g1

0x8558,	// (0x00013ec4) link_highlight_primary_small_pane_t1

0x8567,	// (0x00013ed3) link_highlight_secondary_pane_g1

0x856f,	// (0x00013edb) link_highlight_secondary_pane_t1

0x9ae5,	// (0x00015451) link_highlight_title_pane_g1

0x9aed,	// (0x00015459) link_highlight_title_pane_t1

0x9ace,	// (0x0001543a) link_highlight_digital_pane_g1

0x9ad6,	// (0x00015442) link_highlight_digital_pane_t1

0x9996,	// (0x00015302) copy_highlight_primary_pane_g1

0x99ad,	// (0x00015319) copy_highlight_primary_pane_t1

0x9996,	// (0x00015302) copy_highlight_primary_small_pane_g1

0x999e,	// (0x0001530a) copy_highlight_primary_small_pane_t1

0x857e,	// (0x00013eea) copy_highlight_secondary_pane_g1

0x8586,	// (0x00013ef2) copy_highlight_secondary_pane_t1

0x997f,	// (0x000152eb) copy_highlight_title_pane_g1

0x9987,	// (0x000152f3) copy_highlight_title_pane_t1

0x9996,	// (0x00015302) copy_highlight_digital_pane_g1

0xad30,	// (0x0001669c) copy_highlight_digital_pane_t1

0xac84,	// (0x000165f0) graphic_text_primary_pane_g1

0xad14,	// (0x00016680) graphic_text_primary_pane_t1

0xad22,	// (0x0001668e) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x0001b346) graphic_text_primary_pane_t

0xacf0,	// (0x0001665c) graphic_text_primary_small_pane_g1

0xacf8,	// (0x00016664) graphic_text_primary_small_pane_t1

0xad06,	// (0x00016672) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x0001b341) graphic_text_primary_small_pane_t

0xaccc,	// (0x00016638) graphic_text_secondary_pane_g1

0xacd4,	// (0x00016640) graphic_text_secondary_pane_t1

0xace2,	// (0x0001664e) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x0001b33c) graphic_text_secondary_pane_t

0xaca8,	// (0x00016614) graphic_text_title_pane_g1

0xacb0,	// (0x0001661c) graphic_text_title_pane_t1

0xacbe,	// (0x0001662a) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x0001b337) graphic_text_title_pane_t

0xac84,	// (0x000165f0) graphic_text_digital_pane_g1

0xac8c,	// (0x000165f8) graphic_text_digital_pane_t1

0xac9a,	// (0x00016606) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x0001b332) graphic_text_digital_pane_t

0x6757,	// (0x000120c3) navi_icon_pane_srt_ParamLimits

0x6757,	// (0x000120c3) navi_icon_pane_srt

0x3fb2,	// (0x0000f91e) navi_midp_pane_srt

0x3fb2,	// (0x0000f91e) navi_navi_pane_srt

0x6757,	// (0x000120c3) navi_text_pane_srt_ParamLimits

0x6757,	// (0x000120c3) navi_text_pane_srt

0xac4f,	// (0x000165bb) navi_navi_icon_text_pane_srt

0xac57,	// (0x000165c3) navi_navi_pane_srt_g1_ParamLimits

0xac57,	// (0x000165c3) navi_navi_pane_srt_g1

0xac69,	// (0x000165d5) navi_navi_pane_srt_g2_ParamLimits

0xac69,	// (0x000165d5) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x0001b32d) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x0001b32d) navi_navi_pane_srt_g

0xac7b,	// (0x000165e7) navi_navi_tabs_pane_srt

0xac4f,	// (0x000165bb) navi_navi_text_pane_srt

0xac4f,	// (0x000165bb) navi_navi_volume_pane_srt

0xac40,	// (0x000165ac) navi_navi_text_pane_srt_t1

0x5939,	// (0x000112a5) navi_navi_volume_pane_srt_g1

0x5941,	// (0x000112ad) volume_small_pane_srt_ParamLimits

0x5941,	// (0x000112ad) volume_small_pane_srt

0x52a2,	// (0x00010c0e) volume_small_pane_srt_g1_ParamLimits

0x52a2,	// (0x00010c0e) volume_small_pane_srt_g1

0x52b2,	// (0x00010c1e) volume_small_pane_srt_g2_ParamLimits

0x52b2,	// (0x00010c1e) volume_small_pane_srt_g2

0x52c3,	// (0x00010c2f) volume_small_pane_srt_g3_ParamLimits

0x52c3,	// (0x00010c2f) volume_small_pane_srt_g3

0x52d4,	// (0x00010c40) volume_small_pane_srt_g4_ParamLimits

0x52d4,	// (0x00010c40) volume_small_pane_srt_g4

0x52e5,	// (0x00010c51) volume_small_pane_srt_g5_ParamLimits

0x52e5,	// (0x00010c51) volume_small_pane_srt_g5

0x52f6,	// (0x00010c62) volume_small_pane_srt_g6_ParamLimits

0x52f6,	// (0x00010c62) volume_small_pane_srt_g6

0x5307,	// (0x00010c73) volume_small_pane_srt_g7_ParamLimits

0x5307,	// (0x00010c73) volume_small_pane_srt_g7

0x5318,	// (0x00010c84) volume_small_pane_srt_g8_ParamLimits

0x5318,	// (0x00010c84) volume_small_pane_srt_g8

0x5329,	// (0x00010c95) volume_small_pane_srt_g9_ParamLimits

0x5329,	// (0x00010c95) volume_small_pane_srt_g9

0x533a,	// (0x00010ca6) volume_small_pane_srt_g10_ParamLimits

0x533a,	// (0x00010ca6) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001b0dc) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001b0dc) volume_small_pane_srt_g

0x6b58,	// (0x000124c4) query_popup_data_pane_cp2

0xac26,	// (0x00016592) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xac26,	// (0x00016592) navi_navi_icon_text_pane_srt_t1

0x9c1e,	// (0x0001558a) navi_tabs_2_long_pane_srt

0x9c1e,	// (0x0001558a) navi_tabs_2_pane_srt

0x9c1e,	// (0x0001558a) navi_tabs_3_long_pane_srt

0x9c1e,	// (0x0001558a) navi_tabs_3_pane_srt

0x9c1e,	// (0x0001558a) navi_tabs_4_pane_srt

0x5919,	// (0x00011285) tabs_2_active_pane_srt_ParamLimits

0x5919,	// (0x00011285) tabs_2_active_pane_srt

0x5929,	// (0x00011295) tabs_2_passive_pane_srt_ParamLimits

0x5929,	// (0x00011295) tabs_2_passive_pane_srt

0x876d,	// (0x000140d9) bg_passive_tab_pane_cp1_srt_ParamLimits

0x876d,	// (0x000140d9) bg_passive_tab_pane_cp1_srt

0xabf2,	// (0x0001655e) bg_passive_tab_pane_g1_cp1_srt

0x8028,	// (0x00013994) bg_passive_tab_pane_g2_cp1_srt

0xabfb,	// (0x00016567) bg_passive_tab_pane_g3_cp1_srt

0x6757,	// (0x000120c3) bg_active_tab_pane_cp1_srt_ParamLimits

0x6757,	// (0x000120c3) bg_active_tab_pane_cp1_srt

0xac04,	// (0x00016570) tabs_2_active_pane_srt_g1

0xac0c,	// (0x00016578) tabs_2_active_pane_srt_t1_ParamLimits

0xac0c,	// (0x00016578) tabs_2_active_pane_srt_t1

0xabf2,	// (0x0001655e) bg_active_tab_pane_g1_cp1_srt

0x8028,	// (0x00013994) bg_active_tab_pane_g2_cp1_srt

0xabfb,	// (0x00016567) bg_active_tab_pane_g3_cp1_srt

0x58e6,	// (0x00011252) tabs_3_active_pane_srt_ParamLimits

0x58e6,	// (0x00011252) tabs_3_active_pane_srt

0x58f7,	// (0x00011263) tabs_3_passive_pane_cp_srt_ParamLimits

0x58f7,	// (0x00011263) tabs_3_passive_pane_cp_srt

0x5908,	// (0x00011274) tabs_3_passive_pane_srt_ParamLimits

0x5908,	// (0x00011274) tabs_3_passive_pane_srt

0x876d,	// (0x000140d9) bg_passive_tab_pane_cp2_srt_ParamLimits

0x876d,	// (0x000140d9) bg_passive_tab_pane_cp2_srt

0x8595,	// (0x00013f01) bg_passive_tab_pane_g1_cp2_srt

0x8028,	// (0x00013994) bg_passive_tab_pane_g2_cp2_srt

0x859e,	// (0x00013f0a) bg_passive_tab_pane_g3_cp2_srt

0x6757,	// (0x000120c3) bg_active_tab_pane_cp2_srt_ParamLimits

0x6757,	// (0x000120c3) bg_active_tab_pane_cp2_srt

0xabd8,	// (0x00016544) tabs_3_active_pane_srt_g1

0xabe0,	// (0x0001654c) tabs_3_active_pane_srt_t1_ParamLimits

0xabe0,	// (0x0001654c) tabs_3_active_pane_srt_t1

0x8595,	// (0x00013f01) bg_active_tab_pane_g1_cp2_srt

0x8028,	// (0x00013994) bg_active_tab_pane_g2_cp2_srt

0x859e,	// (0x00013f0a) bg_active_tab_pane_g3_cp2_srt

0x589e,	// (0x0001120a) tabs_4_active_pane_srt_ParamLimits

0x589e,	// (0x0001120a) tabs_4_active_pane_srt

0x58b0,	// (0x0001121c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x58b0,	// (0x0001121c) tabs_4_passive_pane_cp2_srt

0x86f3,	// (0x0001405f) aid_size_cell_toolbar

0x78ec,	// (0x00013258) main_idle_act_pane_ParamLimits

0x893a,	// (0x000142a6) popup_large_graphic_colour_window_ParamLimits

0x8ce1,	// (0x0001464d) popup_toolbar_window_ParamLimits

0x8ce1,	// (0x0001464d) popup_toolbar_window

0xa9c6,	// (0x00016332) list_single_graphic_2heading_pane_ParamLimits

0xa9c6,	// (0x00016332) list_single_graphic_2heading_pane

0x7aa8,	// (0x00013414) aid_size_cell_apps_grid_lsc_pane

0x7aba,	// (0x00013426) aid_size_cell_apps_grid_prt_pane

0x876d,	// (0x000140d9) bg_wml_button_pane_cp1_ParamLimits

0x876d,	// (0x000140d9) bg_wml_button_pane_cp1

0x95f6,	// (0x00014f62) form_midp_field_text_pane_t1_ParamLimits

0x93fb,	// (0x00014d67) input_focus_pane_cp050_ParamLimits

0x9621,	// (0x00014f8d) list_midp_form_text_pane_ParamLimits

0x95d3,	// (0x00014f3f) input_focus_pane_cp051_ParamLimits

0x95e7,	// (0x00014f53) list_midp_choice_pane_ParamLimits

0x948c,	// (0x00014df8) list_single_2graphic_pane_cp3_ParamLimits

0x948c,	// (0x00014df8) list_single_2graphic_pane_cp3

0x94a5,	// (0x00014e11) list_single_midp_graphic_pane_ParamLimits

0x94a5,	// (0x00014e11) list_single_midp_graphic_pane

0x54a1,	// (0x00010e0d) list_single_graphic_2heading_pane_g1_ParamLimits

0x54a1,	// (0x00010e0d) list_single_graphic_2heading_pane_g1

0x54ad,	// (0x00010e19) list_single_graphic_2heading_pane_g4_ParamLimits

0x54ad,	// (0x00010e19) list_single_graphic_2heading_pane_g4

0x54b9,	// (0x00010e25) list_single_graphic_2heading_pane_g5_ParamLimits

0x54b9,	// (0x00010e25) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001b12f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001b12f) list_single_graphic_2heading_pane_g

0x54c5,	// (0x00010e31) list_single_graphic_2heading_pane_t1_ParamLimits

0x54c5,	// (0x00010e31) list_single_graphic_2heading_pane_t1

0x54d9,	// (0x00010e45) list_single_graphic_2heading_pane_t2_ParamLimits

0x54d9,	// (0x00010e45) list_single_graphic_2heading_pane_t2

0x54f5,	// (0x00010e61) list_single_graphic_2heading_pane_t3_ParamLimits

0x54f5,	// (0x00010e61) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001b136) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001b136) list_single_graphic_2heading_pane_t

0x91ef,	// (0x00014b5b) bg_popup_sub_pane_cp2

0x9219,	// (0x00014b85) grid_toobar_pane

0x550d,	// (0x00010e79) cell_toolbar_pane_ParamLimits

0x550d,	// (0x00010e79) cell_toolbar_pane

0x9283,	// (0x00014bef) cell_toolbar_pane_g1_ParamLimits

0x9283,	// (0x00014bef) cell_toolbar_pane_g1

0x9297,	// (0x00014c03) cell_toolbar_pane_g2_ParamLimits

0x9297,	// (0x00014c03) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0001b144) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0001b144) cell_toolbar_pane_g

0x92b9,	// (0x00014c25) grid_highlight_pane_cp2_ParamLimits

0x92b9,	// (0x00014c25) grid_highlight_pane_cp2

0x92d3,	// (0x00014c3f) toolbar_button_pane

0x92df,	// (0x00014c4b) toolbar_button_pane_g1

0x92e7,	// (0x00014c53) toolbar_button_pane_g2

0x92ef,	// (0x00014c5b) toolbar_button_pane_g3

0x92f7,	// (0x00014c63) toolbar_button_pane_g4

0x92ff,	// (0x00014c6b) toolbar_button_pane_g5

0x9307,	// (0x00014c73) toolbar_button_pane_g6

0x930f,	// (0x00014c7b) toolbar_button_pane_g7

0x9317,	// (0x00014c83) toolbar_button_pane_g8

0x931f,	// (0x00014c8b) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0001b149) toolbar_button_pane_g

0x5545,	// (0x00010eb1) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5545,	// (0x00010eb1) list_single_2graphic_pane_g1_cp3

0x5551,	// (0x00010ebd) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5551,	// (0x00010ebd) list_single_2graphic_pane_g2_cp3

0x5562,	// (0x00010ece) list_single_2graphic_pane_g3_cp3

0x556a,	// (0x00010ed6) list_single_2graphic_pane_g4_cp3_ParamLimits

0x556a,	// (0x00010ed6) list_single_2graphic_pane_g4_cp3

0x5576,	// (0x00010ee2) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5576,	// (0x00010ee2) list_single_2graphic_pane_t1_cp3

0x5591,	// (0x00010efd) list_single_midp_graphic_pane_g2_ParamLimits

0x5591,	// (0x00010efd) list_single_midp_graphic_pane_g2

0x86fb,	// (0x00014067) aid_zoom_text_primary

0x8703,	// (0x0001406f) aid_zoom_text_secondary

0x8652,	// (0x00013fbe) status_small_pane_g7_ParamLimits

0x8652,	// (0x00013fbe) status_small_pane_g7

0x8675,	// (0x00013fe1) status_small_pane_t1_ParamLimits

0x669a,	// (0x00012006) title_pane_g2

0x0003,

0xf56a,	// (0x0001aed6) title_pane_g

0x6c01,	// (0x0001256d) aid_size_cell_colour_1_pane_ParamLimits

0x6c01,	// (0x0001256d) aid_size_cell_colour_1_pane

0x6c15,	// (0x00012581) aid_size_cell_colour_2_pane_ParamLimits

0x6c15,	// (0x00012581) aid_size_cell_colour_2_pane

0x6c29,	// (0x00012595) aid_size_cell_colour_3_pane_ParamLimits

0x6c29,	// (0x00012595) aid_size_cell_colour_3_pane

0x6c3d,	// (0x000125a9) aid_size_cell_colour_4_pane_ParamLimits

0x6c3d,	// (0x000125a9) aid_size_cell_colour_4_pane

0x4ef7,	// (0x00010863) title_pane_stacon_g1_ParamLimits

0x4ef7,	// (0x00010863) title_pane_stacon_g1

0x9a04,	// (0x00015370) popup_note_wait_window_g3_ParamLimits

0x9a04,	// (0x00015370) popup_note_wait_window_g3

0x9a7b,	// (0x000153e7) popup_note_wait_window_t5_ParamLimits

0x9a7b,	// (0x000153e7) popup_note_wait_window_t5

0x3fb2,	// (0x0000f91e) main_feb_china_hwr_fs_writing_pane

0x8801,	// (0x0001416d) popup_feb_china_hwr_fs_window_ParamLimits

0x8801,	// (0x0001416d) popup_feb_china_hwr_fs_window

0x55b3,	// (0x00010f1f) aid_size_cell_hwr_fs_ParamLimits

0x55b3,	// (0x00010f1f) aid_size_cell_hwr_fs

0x93fb,	// (0x00014d67) bg_popup_sub_pane_cp3_ParamLimits

0x93fb,	// (0x00014d67) bg_popup_sub_pane_cp3

0x55c8,	// (0x00010f34) grid_hwr_fs_pane_ParamLimits

0x55c8,	// (0x00010f34) grid_hwr_fs_pane

0x55e0,	// (0x00010f4c) linegrid_hwr_fs_pane_ParamLimits

0x55e0,	// (0x00010f4c) linegrid_hwr_fs_pane

0x55f0,	// (0x00010f5c) cell_hwr_fs_pane_ParamLimits

0x55f0,	// (0x00010f5c) cell_hwr_fs_pane

0x9407,	// (0x00014d73) linegrid_hwr_fs_pane_g1_ParamLimits

0x9407,	// (0x00014d73) linegrid_hwr_fs_pane_g1

0x9413,	// (0x00014d7f) linegrid_hwr_fs_pane_g2_ParamLimits

0x9413,	// (0x00014d7f) linegrid_hwr_fs_pane_g2

0x9425,	// (0x00014d91) linegrid_hwr_fs_pane_g3_ParamLimits

0x9425,	// (0x00014d91) linegrid_hwr_fs_pane_g3

0x5614,	// (0x00010f80) linegrid_hwr_fs_pane_g4_ParamLimits

0x5614,	// (0x00010f80) linegrid_hwr_fs_pane_g4

0x5632,	// (0x00010f9e) linegrid_hwr_fs_pane_g5_ParamLimits

0x5632,	// (0x00010f9e) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x0001b174) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x0001b174) linegrid_hwr_fs_pane_g

0x9431,	// (0x00014d9d) cell_hwr_fs_pane_g1_ParamLimits

0x9431,	// (0x00014d9d) cell_hwr_fs_pane_g1

0x9126,	// (0x00014a92) cell_hwr_fs_pane_g2_ParamLimits

0x9126,	// (0x00014a92) cell_hwr_fs_pane_g2

0x9447,	// (0x00014db3) cell_hwr_fs_pane_g3_ParamLimits

0x9447,	// (0x00014db3) cell_hwr_fs_pane_g3

0x9454,	// (0x00014dc0) cell_hwr_fs_pane_g4_ParamLimits

0x9454,	// (0x00014dc0) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x0001b17f) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x0001b17f) cell_hwr_fs_pane_g

0x5648,	// (0x00010fb4) cell_hwr_fs_pane_t1

0x3fb2,	// (0x0000f91e) grid_highlight_pane_cp6

0x3fb2,	// (0x0000f91e) main_idle_act2_pane

0x785e,	// (0x000131ca) aid_inside_area_popup_secondary

0xa0b4,	// (0x00015a20) aid_inside_area_window_primary_ParamLimits

0xa0b4,	// (0x00015a20) aid_inside_area_window_primary

0xad3f,	// (0x000166ab) ai2_news_ticker_pane

0xad47,	// (0x000166b3) aid_size_cell_ai1_link_ParamLimits

0xad47,	// (0x000166b3) aid_size_cell_ai1_link

0xad61,	// (0x000166cd) popup_ai2_data_window_ParamLimits

0xad61,	// (0x000166cd) popup_ai2_data_window

0xad7f,	// (0x000166eb) popup_ai2_link_window_ParamLimits

0xad7f,	// (0x000166eb) popup_ai2_link_window

0x93fb,	// (0x00014d67) bg_popup_sub_pane_cp4_ParamLimits

0x93fb,	// (0x00014d67) bg_popup_sub_pane_cp4

0xad95,	// (0x00016701) grid_ai2_link_pane_ParamLimits

0xad95,	// (0x00016701) grid_ai2_link_pane

0xadac,	// (0x00016718) popup_ai2_link_window_g1_ParamLimits

0xadac,	// (0x00016718) popup_ai2_link_window_g1

0xadb8,	// (0x00016724) popup_ai2_link_window_g2_ParamLimits

0xadb8,	// (0x00016724) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x0001b34b) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x0001b34b) popup_ai2_link_window_g

0xadc9,	// (0x00016735) ai2_mp_button_pane

0xadd1,	// (0x0001673d) ai2_mp_volume_pane

0x95d3,	// (0x00014f3f) bg_popup_sub_pane_cp5_ParamLimits

0x95d3,	// (0x00014f3f) bg_popup_sub_pane_cp5

0xadd9,	// (0x00016745) heading_ai2_gene_pane_ParamLimits

0xadd9,	// (0x00016745) heading_ai2_gene_pane

0xade5,	// (0x00016751) list_ai2_gene_pane_ParamLimits

0xade5,	// (0x00016751) list_ai2_gene_pane

0xae2d,	// (0x00016799) cell_ai2_link_pane_ParamLimits

0xae2d,	// (0x00016799) cell_ai2_link_pane

0xae43,	// (0x000167af) cell_ai2_link_pane_g1

0x3fb2,	// (0x0000f91e) grid_highlight_pane_cp7

0x5956,	// (0x000112c2) ai2_mp_volume_pane_g1

0xaf16,	// (0x00016882) ai2_mp_volume_pane_g2

0xae8b,	// (0x000167f7) list_ai2_gene_pane_t1

0xaf1e,	// (0x0001688a) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x0001b364) ai2_mp_volume_pane_g

0x595e,	// (0x000112ca) volume_small_pane_cp3

0xaf26,	// (0x00016892) aid_size_cell_ai2_button

0xaf2e,	// (0x0001689a) grid_ai2_button_pane

0xaf37,	// (0x000168a3) cell_ai2_button_pane_ParamLimits

0xaf37,	// (0x000168a3) cell_ai2_button_pane

0x3e39,	// (0x0000f7a5) cell_ai2_button_pane_g1

0x3fb2,	// (0x0000f91e) grid_highlight_pane_cp8

0xaed6,	// (0x00016842) ai2_gene_pane_t1_ParamLimits

0xaed6,	// (0x00016842) ai2_gene_pane_t1

0x86e9,	// (0x00014055) aid_height_parent_landscape

0xa788,	// (0x000160f4) aid_height_set_list

0xa799,	// (0x00016105) aid_size_parent

0xab60,	// (0x000164cc) aid_size_cell_graphic_pane_ParamLimits

0xadf5,	// (0x00016761) popup_ai2_data_window_g1_ParamLimits

0xadf5,	// (0x00016761) popup_ai2_data_window_g1

0xae01,	// (0x0001676d) ai2_news_ticker_pane_g1

0xae09,	// (0x00016775) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x0001b350) ai2_news_ticker_pane_g

0xae11,	// (0x0001677d) ai2_news_ticker_pane_t1

0xae1f,	// (0x0001678b) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x0001b355) ai2_news_ticker_pane_t

0xae4c,	// (0x000167b8) heading_ai2_gene_pane_g1

0xae54,	// (0x000167c0) heading_ai2_gene_pane_t1_ParamLimits

0xae54,	// (0x000167c0) heading_ai2_gene_pane_t1

0xae69,	// (0x000167d5) list_highlight_pane_cp6

0xae71,	// (0x000167dd) ai2_gene_pane_ParamLimits

0xae71,	// (0x000167dd) ai2_gene_pane

0xae99,	// (0x00016805) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x0001b35a) list_ai2_gene_pane_t

0xaea7,	// (0x00016813) list_highlight_pane_cp8_ParamLimits

0xaea7,	// (0x00016813) list_highlight_pane_cp8

0xaeb8,	// (0x00016824) ai2_gene_pane_g1_ParamLimits

0xaeb8,	// (0x00016824) ai2_gene_pane_g1

0xaeca,	// (0x00016836) ai2_gene_pane_g2_ParamLimits

0xaeca,	// (0x00016836) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x0001b35f) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x0001b35f) ai2_gene_pane_g

0x6f8e,	// (0x000128fa) scroll_pane_cp12

0x5460,	// (0x00010dcc) control_pane_t3_ParamLimits

0x5460,	// (0x00010dcc) control_pane_t3

0x8666,	// (0x00013fd2) status_small_pane_g8_ParamLimits

0x8666,	// (0x00013fd2) status_small_pane_g8

0x88ff,	// (0x0001426b) popup_find_window_ParamLimits

0x8b2a,	// (0x00014496) popup_note_image_window_ParamLimits

0x9255,	// (0x00014bc1) list_double2_graphic_pane_vc_g1_ParamLimits

0x9255,	// (0x00014bc1) list_double2_graphic_pane_vc_g1

0x8350,	// (0x00013cbc) list_double2_graphic_pane_vc_g2_ParamLimits

0x8350,	// (0x00013cbc) list_double2_graphic_pane_vc_g2

0x9261,	// (0x00014bcd) list_double2_graphic_pane_vc_g3_ParamLimits

0x9261,	// (0x00014bcd) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0001b13d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001b13d) list_double2_graphic_pane_vc_g

0x926d,	// (0x00014bd9) list_double2_graphic_pane_vc_t1_ParamLimits

0x926d,	// (0x00014bd9) list_double2_graphic_pane_vc_t1

0x8350,	// (0x00013cbc) list_single_heading_pane_vc_g1_ParamLimits

0x8350,	// (0x00013cbc) list_single_heading_pane_vc_g1

0x9261,	// (0x00014bcd) list_single_heading_pane_vc_g2_ParamLimits

0x9261,	// (0x00014bcd) list_single_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001b15e) list_single_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001b15e) list_single_heading_pane_vc_g

0x9327,	// (0x00014c93) list_single_heading_pane_vc_t1_ParamLimits

0x9327,	// (0x00014c93) list_single_heading_pane_vc_t1

0x933d,	// (0x00014ca9) list_single_heading_pane_vc_t2_ParamLimits

0x933d,	// (0x00014ca9) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x0001b163) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x0001b163) list_single_heading_pane_vc_t

0x9351,	// (0x00014cbd) list_setting_number_pane_vc_g1_ParamLimits

0x9351,	// (0x00014cbd) list_setting_number_pane_vc_g1

0x935d,	// (0x00014cc9) list_setting_number_pane_vc_g2_ParamLimits

0x935d,	// (0x00014cc9) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0001b168) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0001b168) list_setting_number_pane_vc_g

0x9369,	// (0x00014cd5) list_setting_number_pane_vc_t1_ParamLimits

0x9369,	// (0x00014cd5) list_setting_number_pane_vc_t1

0x937d,	// (0x00014ce9) list_setting_number_pane_vc_t2_ParamLimits

0x937d,	// (0x00014ce9) list_setting_number_pane_vc_t2

0x9399,	// (0x00014d05) list_setting_number_pane_vc_t3_ParamLimits

0x9399,	// (0x00014d05) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x0001b16d) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x0001b16d) list_setting_number_pane_vc_t

0x93c1,	// (0x00014d2d) set_value_pane_vc_ParamLimits

0x93c1,	// (0x00014d2d) set_value_pane_vc

0xa9c6,	// (0x00016332) list_double2_graphic_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_double2_graphic_pane_vc

0xa9c6,	// (0x00016332) list_double2_large_graphic_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_double2_large_graphic_pane_vc

0xa9c6,	// (0x00016332) list_double2_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_double2_pane_vc

0xa9c6,	// (0x00016332) list_double_graphic_heading_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_double_graphic_heading_pane_vc

0xa9c6,	// (0x00016332) list_double_graphic_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_double_graphic_pane_vc

0xa9c6,	// (0x00016332) list_double_heading_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_double_heading_pane_vc

0xa9c6,	// (0x00016332) list_double_large_graphic_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_double_large_graphic_pane_vc

0xa9c6,	// (0x00016332) list_double_number_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_double_number_pane_vc

0xa9c6,	// (0x00016332) list_double_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_double_pane_vc

0xa9c6,	// (0x00016332) list_double_time_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_double_time_pane_vc

0xa9c6,	// (0x00016332) list_setting_number_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_setting_number_pane_vc

0xa9c6,	// (0x00016332) list_setting_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_setting_pane_vc

0xa9c6,	// (0x00016332) list_single_graphic_heading_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_single_graphic_heading_pane_vc

0xa9c6,	// (0x00016332) list_single_heading_pane_vc_ParamLimits

0xa9c6,	// (0x00016332) list_single_heading_pane_vc

0xa9da,	// (0x00016346) list_single_number_heading_pane_vc_ParamLimits

0xa9da,	// (0x00016346) list_single_number_heading_pane_vc

0x9255,	// (0x00014bc1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9255,	// (0x00014bc1) list_double_graphic_heading_pane_vc_g1

0xaf6a,	// (0x000168d6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xaf6a,	// (0x000168d6) list_double_graphic_heading_pane_vc_g2

0xaf76,	// (0x000168e2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xaf76,	// (0x000168e2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ff,	// (0x0001b36b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ff,	// (0x0001b36b) list_double_graphic_heading_pane_vc_g

0xaf82,	// (0x000168ee) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xaf82,	// (0x000168ee) list_double_graphic_heading_pane_vc_t1

0x9327,	// (0x00014c93) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9327,	// (0x00014c93) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa06,	// (0x0001b372) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0001b372) list_double_graphic_heading_pane_vc_t

0x9351,	// (0x00014cbd) list_setting_pane_vc_g1_ParamLimits

0x9351,	// (0x00014cbd) list_setting_pane_vc_g1

0x935d,	// (0x00014cc9) list_setting_pane_vc_g2_ParamLimits

0x935d,	// (0x00014cc9) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x0001b168) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x0001b168) list_setting_pane_vc_g

0xb19f,	// (0x00016b0b) list_setting_pane_vc_t1_ParamLimits

0xb19f,	// (0x00016b0b) list_setting_pane_vc_t1

0xb1b3,	// (0x00016b1f) list_setting_pane_vc_t2_ParamLimits

0xb1b3,	// (0x00016b1f) list_setting_pane_vc_t2

0x0001,

0xfa34,	// (0x0001b3a0) list_setting_pane_vc_t_ParamLimits

0xfa34,	// (0x0001b3a0) list_setting_pane_vc_t

0x93c1,	// (0x00014d2d) set_value_pane_cp_vc_ParamLimits

0x93c1,	// (0x00014d2d) set_value_pane_cp_vc

0x8350,	// (0x00013cbc) list_single_number_heading_pane_vc_g1_ParamLimits

0x8350,	// (0x00013cbc) list_single_number_heading_pane_vc_g1

0x9261,	// (0x00014bcd) list_single_number_heading_pane_vc_g2_ParamLimits

0x9261,	// (0x00014bcd) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001b15e) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001b15e) list_single_number_heading_pane_vc_g

0x9327,	// (0x00014c93) list_single_number_heading_pane_vc_t1_ParamLimits

0x9327,	// (0x00014c93) list_single_number_heading_pane_vc_t1

0xb1d5,	// (0x00016b41) list_single_number_heading_pane_vc_t2_ParamLimits

0xb1d5,	// (0x00016b41) list_single_number_heading_pane_vc_t2

0xb1e9,	// (0x00016b55) list_single_number_heading_pane_vc_t3_ParamLimits

0xb1e9,	// (0x00016b55) list_single_number_heading_pane_vc_t3

0x0002,

0xfa39,	// (0x0001b3a5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x0001b3a5) list_single_number_heading_pane_vc_t

0x9255,	// (0x00014bc1) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9255,	// (0x00014bc1) list_single_graphic_heading_pane_vc_g1

0x8350,	// (0x00013cbc) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8350,	// (0x00013cbc) list_single_graphic_heading_pane_vc_g4

0x9261,	// (0x00014bcd) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9261,	// (0x00014bcd) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0001b13d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001b13d) list_single_graphic_heading_pane_vc_g

0x9327,	// (0x00014c93) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9327,	// (0x00014c93) list_single_graphic_heading_pane_vc_t1

0xb1fb,	// (0x00016b67) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb1fb,	// (0x00016b67) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa40,	// (0x0001b3ac) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa40,	// (0x0001b3ac) list_single_graphic_heading_pane_vc_t

0x8350,	// (0x00013cbc) list_double2_pane_vc_g1_ParamLimits

0x8350,	// (0x00013cbc) list_double2_pane_vc_g1

0x9261,	// (0x00014bcd) list_double2_pane_vc_g2_ParamLimits

0x9261,	// (0x00014bcd) list_double2_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001b15e) list_double2_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001b15e) list_double2_pane_vc_g

0xb20f,	// (0x00016b7b) list_double2_pane_vc_t1_ParamLimits

0xb20f,	// (0x00016b7b) list_double2_pane_vc_t1

0xb225,	// (0x00016b91) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb225,	// (0x00016b91) list_double2_large_graphic_pane_vc_g1

0x8350,	// (0x00013cbc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8350,	// (0x00013cbc) list_double2_large_graphic_pane_vc_g2

0x9261,	// (0x00014bcd) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9261,	// (0x00014bcd) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa45,	// (0x0001b3b1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa45,	// (0x0001b3b1) list_double2_large_graphic_pane_vc_g

0xb231,	// (0x00016b9d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb231,	// (0x00016b9d) list_double2_large_graphic_pane_vc_t1

0xb247,	// (0x00016bb3) list_double_time_pane_vc_g1_ParamLimits

0xb247,	// (0x00016bb3) list_double_time_pane_vc_g1

0xb253,	// (0x00016bbf) list_double_time_pane_vc_g2_ParamLimits

0xb253,	// (0x00016bbf) list_double_time_pane_vc_g2

0x0001,

0xfa4c,	// (0x0001b3b8) list_double_time_pane_vc_g_ParamLimits

0xfa4c,	// (0x0001b3b8) list_double_time_pane_vc_g

0xb25f,	// (0x00016bcb) list_double_time_pane_vc_t1_ParamLimits

0xb25f,	// (0x00016bcb) list_double_time_pane_vc_t1

0xb278,	// (0x00016be4) list_double_time_pane_vc_t2_ParamLimits

0xb278,	// (0x00016be4) list_double_time_pane_vc_t2

0xb298,	// (0x00016c04) list_double_time_pane_vc_t3_ParamLimits

0xb298,	// (0x00016c04) list_double_time_pane_vc_t3

0xb2b0,	// (0x00016c1c) list_double_time_pane_vc_t4_ParamLimits

0xb2b0,	// (0x00016c1c) list_double_time_pane_vc_t4

0x0003,

0xfa51,	// (0x0001b3bd) list_double_time_pane_vc_t_ParamLimits

0xfa51,	// (0x0001b3bd) list_double_time_pane_vc_t

0x8350,	// (0x00013cbc) list_double_pane_vc_g1_ParamLimits

0x8350,	// (0x00013cbc) list_double_pane_vc_g1

0x9261,	// (0x00014bcd) list_double_pane_vc_g2_ParamLimits

0x9261,	// (0x00014bcd) list_double_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001b15e) list_double_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001b15e) list_double_pane_vc_g

0xb2c4,	// (0x00016c30) list_double_pane_vc_t1_ParamLimits

0xb2c4,	// (0x00016c30) list_double_pane_vc_t1

0xb2d6,	// (0x00016c42) list_double_pane_vc_t2_ParamLimits

0xb2d6,	// (0x00016c42) list_double_pane_vc_t2

0x0001,

0xfa5a,	// (0x0001b3c6) list_double_pane_vc_t_ParamLimits

0xfa5a,	// (0x0001b3c6) list_double_pane_vc_t

0x8350,	// (0x00013cbc) list_double_number_pane_vc_g1_ParamLimits

0x8350,	// (0x00013cbc) list_double_number_pane_vc_g1

0x9261,	// (0x00014bcd) list_double_number_pane_vc_g2_ParamLimits

0x9261,	// (0x00014bcd) list_double_number_pane_vc_g2

0x0001,

0xf7f2,	// (0x0001b15e) list_double_number_pane_vc_g_ParamLimits

0xf7f2,	// (0x0001b15e) list_double_number_pane_vc_g

0xb2ee,	// (0x00016c5a) list_double_number_pane_vc_t1_ParamLimits

0xb2ee,	// (0x00016c5a) list_double_number_pane_vc_t1

0xb302,	// (0x00016c6e) list_double_number_pane_vc_t2_ParamLimits

0xb302,	// (0x00016c6e) list_double_number_pane_vc_t2

0xb2d6,	// (0x00016c42) list_double_number_pane_vc_t3_ParamLimits

0xb2d6,	// (0x00016c42) list_double_number_pane_vc_t3

0x0002,

0xfa5f,	// (0x0001b3cb) list_double_number_pane_vc_t_ParamLimits

0xfa5f,	// (0x0001b3cb) list_double_number_pane_vc_t

0xb314,	// (0x00016c80) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb314,	// (0x00016c80) list_double_large_graphic_pane_vc_g1

0xb320,	// (0x00016c8c) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb320,	// (0x00016c8c) list_double_large_graphic_pane_vc_g2

0x9261,	// (0x00014bcd) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9261,	// (0x00014bcd) list_double_large_graphic_pane_vc_g3

0xb32f,	// (0x00016c9b) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb32f,	// (0x00016c9b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa66,	// (0x0001b3d2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x0001b3d2) list_double_large_graphic_pane_vc_g

0xb33b,	// (0x00016ca7) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb33b,	// (0x00016ca7) list_double_large_graphic_pane_vc_t1

0xb34d,	// (0x00016cb9) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb34d,	// (0x00016cb9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x0001b3db) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x0001b3db) list_double_large_graphic_pane_vc_t

0xaf6a,	// (0x000168d6) list_double_heading_pane_vc_g1_ParamLimits

0xaf6a,	// (0x000168d6) list_double_heading_pane_vc_g1

0xaf76,	// (0x000168e2) list_double_heading_pane_vc_g2_ParamLimits

0xaf76,	// (0x000168e2) list_double_heading_pane_vc_g2

0x0001,

0xfa74,	// (0x0001b3e0) list_double_heading_pane_vc_g_ParamLimits

0xfa74,	// (0x0001b3e0) list_double_heading_pane_vc_g

0xb366,	// (0x00016cd2) list_double_heading_pane_vc_t1_ParamLimits

0xb366,	// (0x00016cd2) list_double_heading_pane_vc_t1

0x9327,	// (0x00014c93) list_double_heading_pane_vc_t2_ParamLimits

0x9327,	// (0x00014c93) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x0001b3e5) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0001b3e5) list_double_heading_pane_vc_t

0x9255,	// (0x00014bc1) list_double_graphic_pane_vc_g1_ParamLimits

0x9255,	// (0x00014bc1) list_double_graphic_pane_vc_g1

0xb37a,	// (0x00016ce6) list_double_graphic_pane_vc_g2_ParamLimits

0xb37a,	// (0x00016ce6) list_double_graphic_pane_vc_g2

0xb389,	// (0x00016cf5) list_double_graphic_pane_vc_g3_ParamLimits

0xb389,	// (0x00016cf5) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x0001b3ea) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0001b3ea) list_double_graphic_pane_vc_g

0xb395,	// (0x00016d01) list_double_graphic_pane_vc_t1_ParamLimits

0xb395,	// (0x00016d01) list_double_graphic_pane_vc_t1

0xb2d6,	// (0x00016c42) list_double_graphic_pane_vc_t2_ParamLimits

0xb2d6,	// (0x00016c42) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x0001b3f1) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x0001b3f1) list_double_graphic_pane_vc_t

0x4a42,	// (0x000103ae) aid_size_cell_fastswap

0x4a4a,	// (0x000103b6) aid_size_cell_touch_ParamLimits

0x4a4a,	// (0x000103b6) aid_size_cell_touch

0x4cb5,	// (0x00010621) popup_fast_swap_wide_window_ParamLimits

0x4cb5,	// (0x00010621) popup_fast_swap_wide_window

0x4dcb,	// (0x00010737) touch_pane_ParamLimits

0x4dcb,	// (0x00010737) touch_pane

0x749d,	// (0x00012e09) button_value_adjust_pane_cp2

0x74a5,	// (0x00012e11) button_value_adjust_pane_cp4

0x74cb,	// (0x00012e37) form_field_data_pane_cp2

0x74f0,	// (0x00012e5c) form_field_data_wide_pane_cp2

0x7b7a,	// (0x000134e6) bg_scroll_pane_ParamLimits

0x505c,	// (0x000109c8) scroll_handle_pane_ParamLimits

0x5070,	// (0x000109dc) scroll_sc2_down_pane_ParamLimits

0x5070,	// (0x000109dc) scroll_sc2_down_pane

0x7bab,	// (0x00013517) scroll_sc2_up_pane_ParamLimits

0x7bab,	// (0x00013517) scroll_sc2_up_pane

0xb801,	// (0x0001716d) grid_wheel_folder_pane_g1_ParamLimits

0xb801,	// (0x0001716d) grid_wheel_folder_pane_g1

0x523a,	// (0x00010ba6) clock_nsta_pane_cp2_ParamLimits

0x523a,	// (0x00010ba6) clock_nsta_pane_cp2

0x83e7,	// (0x00013d53) listscroll_midp_pane_ParamLimits

0x83f3,	// (0x00013d5f) midp_canvas_pane

0x86e1,	// (0x0001404d) nsta_clock_indic_pane

0x873f,	// (0x000140ab) listscroll_form_pane_vc

0x875b,	// (0x000140c7) listscroll_set_pane_vc_ParamLimits

0x875b,	// (0x000140c7) listscroll_set_pane_vc

0x8e7b,	// (0x000147e7) clock_nsta_pane

0x8ef8,	// (0x00014864) indicator_nsta_pane

0x91ef,	// (0x00014b5b) bg_popup_sub_pane_cp2_ParamLimits

0x9203,	// (0x00014b6f) find_pane_cp2_ParamLimits

0x9203,	// (0x00014b6f) find_pane_cp2

0x9219,	// (0x00014b85) grid_toobar_pane_ParamLimits

0x93cf,	// (0x00014d3b) list_form_gen_pane_vc_ParamLimits

0x93cf,	// (0x00014d3b) list_form_gen_pane_vc

0x93e5,	// (0x00014d51) scroll_pane_cp8_vc_ParamLimits

0x93e5,	// (0x00014d51) scroll_pane_cp8_vc

0x9461,	// (0x00014dcd) data_form_wide_pane_vc_ParamLimits

0x9461,	// (0x00014dcd) data_form_wide_pane_vc

0x946d,	// (0x00014dd9) form_field_data_wide_pane_vc_g1

0x9475,	// (0x00014de1) form_field_data_wide_pane_vc_t1_ParamLimits

0x9475,	// (0x00014de1) form_field_data_wide_pane_vc_t1

0x7593,	// (0x00012eff) input_focus_pane_cp6_vc_ParamLimits

0x7593,	// (0x00012eff) input_focus_pane_cp6_vc

0x977e,	// (0x000150ea) list_midp_pane_ParamLimits

0x978a,	// (0x000150f6) scroll_pane_cp16_ParamLimits

0x978a,	// (0x000150f6) scroll_pane_cp16

0x97d8,	// (0x00015144) button_value_adjust_pane_ParamLimits

0x97d8,	// (0x00015144) button_value_adjust_pane

0xa7ab,	// (0x00016117) button_value_adjust_pane_cp6_ParamLimits

0xa7ab,	// (0x00016117) button_value_adjust_pane_cp6

0xa905,	// (0x00016271) settings_code_pane_cp_ParamLimits

0xa905,	// (0x00016271) settings_code_pane_cp

0x3e39,	// (0x0000f7a5) cell_touch_pane_g1

0x3e39,	// (0x0000f7a5) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0001b086) cell_touch_pane_g

0xaf49,	// (0x000168b5) cell_touch_pane_cp_ParamLimits

0xaf49,	// (0x000168b5) cell_touch_pane_cp

0xaf59,	// (0x000168c5) cell_touch_pane_ParamLimits

0xaf59,	// (0x000168c5) cell_touch_pane

0x3e39,	// (0x0000f7a5) scroll_sc2_down_pane_g1

0x3e39,	// (0x0000f7a5) scroll_sc2_up_pane_g1

0x3fb2,	// (0x0000f91e) bg_set_opt_pane_cp4_vc

0xaf96,	// (0x00016902) list_set_graphic_pane_vc_g1_ParamLimits

0xaf96,	// (0x00016902) list_set_graphic_pane_vc_g1

0xafa2,	// (0x0001690e) list_set_graphic_pane_vc_g2_ParamLimits

0xafa2,	// (0x0001690e) list_set_graphic_pane_vc_g2

0x0001,

0xfa0b,	// (0x0001b377) list_set_graphic_pane_vc_g_ParamLimits

0xfa0b,	// (0x0001b377) list_set_graphic_pane_vc_g

0xafae,	// (0x0001691a) text_primary_small_cp13_vc_ParamLimits

0xafae,	// (0x0001691a) text_primary_small_cp13_vc

0xafc6,	// (0x00016932) list_set_graphic_pane_vc_ParamLimits

0xafc6,	// (0x00016932) list_set_graphic_pane_vc

0x3fb2,	// (0x0000f91e) input_focus_pane_cp2_vc

0x3e39,	// (0x0000f7a5) setting_code_pane_vc_g1

0xafda,	// (0x00016946) setting_code_pane_vc_t1

0xafe8,	// (0x00016954) set_text_pane_vc_t1_ParamLimits

0xafe8,	// (0x00016954) set_text_pane_vc_t1

0x3fb2,	// (0x0000f91e) input_focus_pane_cp1_vc

0xb006,	// (0x00016972) list_set_text_pane_vc

0x3e39,	// (0x0000f7a5) setting_text_pane_vc_g1

0x3fb2,	// (0x0000f91e) bg_set_opt_pane_cp2_vc

0xb010,	// (0x0001697c) setting_slider_graphic_pane_vc_g1

0xb018,	// (0x00016984) setting_slider_graphic_pane_vc_t1

0xb026,	// (0x00016992) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa10,	// (0x0001b37c) setting_slider_graphic_pane_vc_t

0xb034,	// (0x000169a0) slider_set_pane_cp_vc

0xb03c,	// (0x000169a8) slider_set_pane_vc_g1

0xb045,	// (0x000169b1) slider_set_pane_vc_g2

0x0006,

0xfa15,	// (0x0001b381) slider_set_pane_vc_g

0x76cf,	// (0x0001303b) set_opt_bg_pane_g1_copy1

0x76d7,	// (0x00013043) set_opt_bg_pane_g2_copy1

0xb071,	// (0x000169dd) set_opt_bg_pane_g3_copy1

0x76e7,	// (0x00013053) set_opt_bg_pane_g4_copy1

0x76ef,	// (0x0001305b) set_opt_bg_pane_g5_copy1

0x76f7,	// (0x00013063) set_opt_bg_pane_g6_copy1

0xb07b,	// (0x000169e7) set_opt_bg_pane_g7_copy1

0xb085,	// (0x000169f1) set_opt_bg_pane_g8_copy1

0xb08f,	// (0x000169fb) set_opt_bg_pane_g9_copy1

0x3fb2,	// (0x0000f91e) bg_set_opt_pane_cp_vc

0xb099,	// (0x00016a05) setting_slider_pane_vc_t1

0xb018,	// (0x00016984) setting_slider_pane_vc_t2

0xb026,	// (0x00016992) setting_slider_pane_vc_t3

0x0002,

0xfa24,	// (0x0001b390) setting_slider_pane_vc_t

0xb034,	// (0x000169a0) slider_set_pane_vc

0x5656,	// (0x00010fc2) volume_set_pane_vc_g1

0x565f,	// (0x00010fcb) volume_set_pane_vc_g2

0x5668,	// (0x00010fd4) volume_set_pane_vc_g3

0x5671,	// (0x00010fdd) volume_set_pane_vc_g4

0x567a,	// (0x00010fe6) volume_set_pane_vc_g5

0x5683,	// (0x00010fef) volume_set_pane_vc_g6

0x568c,	// (0x00010ff8) volume_set_pane_vc_g7

0x5695,	// (0x00011001) volume_set_pane_vc_g8

0x569e,	// (0x0001100a) volume_set_pane_vc_g9

0x56a7,	// (0x00011013) volume_set_pane_vc_g10

0x0009,

0xf8c2,	// (0x0001b22e) volume_set_pane_vc_g

0xb0a8,	// (0x00016a14) volume_set_pane_vc

0xb0b0,	// (0x00016a1c) button_value_adjust_pane_cp1_vc

0xb0ba,	// (0x00016a26) list_highlight_pane_cp2_vc

0xb0c3,	// (0x00016a2f) list_set_pane_vc_ParamLimits

0xb0c3,	// (0x00016a2f) list_set_pane_vc

0xb12d,	// (0x00016a99) main_pane_set_vc_t1_ParamLimits

0xb12d,	// (0x00016a99) main_pane_set_vc_t1

0xb142,	// (0x00016aae) main_pane_set_vc_t2_ParamLimits

0xb142,	// (0x00016aae) main_pane_set_vc_t2

0xb154,	// (0x00016ac0) main_pane_set_vc_t3_ParamLimits

0xb154,	// (0x00016ac0) main_pane_set_vc_t3

0xb168,	// (0x00016ad4) main_pane_set_vc_t4_ParamLimits

0xb168,	// (0x00016ad4) main_pane_set_vc_t4

0x0003,

0xfa2b,	// (0x0001b397) main_pane_set_vc_t_ParamLimits

0xfa2b,	// (0x0001b397) main_pane_set_vc_t

0xb17c,	// (0x00016ae8) setting_code_pane_vc_ParamLimits

0xb17c,	// (0x00016ae8) setting_code_pane_vc

0xb18d,	// (0x00016af9) setting_slider_graphic_pane_vc

0xb18d,	// (0x00016af9) setting_slider_pane_vc

0xb18d,	// (0x00016af9) setting_text_pane_vc

0xb18d,	// (0x00016af9) setting_volume_pane_vc

0xb197,	// (0x00016b03) scroll_pane_cp121_vc

0x748b,	// (0x00012df7) set_content_pane_vc

0xb3a7,	// (0x00016d13) button_value_adjust_pane_g1

0xb3b0,	// (0x00016d1c) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x0001b3f6) button_value_adjust_pane_g

0xb3b9,	// (0x00016d25) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb3b9,	// (0x00016d25) form_field_slider_wide_pane_vc_t1

0xb3cd,	// (0x00016d39) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb3cd,	// (0x00016d39) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x0001b3fb) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x0001b3fb) form_field_slider_wide_pane_vc_t

0x69ed,	// (0x00012359) input_focus_pane_cp10_vc_ParamLimits

0x69ed,	// (0x00012359) input_focus_pane_cp10_vc

0xb3df,	// (0x00016d4b) slider_cont_pane_cp1_vc_ParamLimits

0xb3df,	// (0x00016d4b) slider_cont_pane_cp1_vc

0xb03c,	// (0x000169a8) slider_form_pane_g1_cp2

0xb045,	// (0x000169b1) slider_form_pane_g2_cp2

0xb3f8,	// (0x00016d64) form_field_slider_pane_vc_t3

0xb406,	// (0x00016d72) form_field_slider_pane_vc_t4

0xb414,	// (0x00016d80) slider_form_pane_vc_ParamLimits

0xb414,	// (0x00016d80) slider_form_pane_vc

0xb421,	// (0x00016d8d) form_field_slider_pane_vc_t1_ParamLimits

0xb421,	// (0x00016d8d) form_field_slider_pane_vc_t1

0xb3cd,	// (0x00016d39) form_field_slider_pane_vc_t2_ParamLimits

0xb3cd,	// (0x00016d39) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0001b40b) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0001b40b) form_field_slider_pane_vc_t

0x69ed,	// (0x00012359) input_focus_pane_cp9_vc_ParamLimits

0x69ed,	// (0x00012359) input_focus_pane_cp9_vc

0xb43d,	// (0x00016da9) slider_cont_pane_vc_ParamLimits

0xb43d,	// (0x00016da9) slider_cont_pane_vc

0xb44f,	// (0x00016dbb) list_form_graphic_pane_cp_vc_ParamLimits

0xb44f,	// (0x00016dbb) list_form_graphic_pane_cp_vc

0x946d,	// (0x00014dd9) form_field_popup_wide_pane_vc_g1

0xb464,	// (0x00016dd0) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb464,	// (0x00016dd0) form_field_popup_wide_pane_vc_t1

0x7593,	// (0x00012eff) input_focus_pane_cp8_vc_ParamLimits

0x7593,	// (0x00012eff) input_focus_pane_cp8_vc

0xb47b,	// (0x00016de7) list_form_wide_pane_vc_ParamLimits

0xb47b,	// (0x00016de7) list_form_wide_pane_vc

0xb487,	// (0x00016df3) list_form_graphic_pane_vc_g1

0xb48f,	// (0x00016dfb) list_form_graphic_pane_vc_t1_ParamLimits

0xb48f,	// (0x00016dfb) list_form_graphic_pane_vc_t1

0x6757,	// (0x000120c3) list_highlight_pane_cp5_vc_ParamLimits

0x6757,	// (0x000120c3) list_highlight_pane_cp5_vc

0xb4ab,	// (0x00016e17) list_form_graphic_pane_vc_ParamLimits

0xb4ab,	// (0x00016e17) list_form_graphic_pane_vc

0x946d,	// (0x00014dd9) form_field_popup_pane_vc_g1

0xb4c1,	// (0x00016e2d) form_field_popup_pane_vc_t1_ParamLimits

0xb4c1,	// (0x00016e2d) form_field_popup_pane_vc_t1

0x7593,	// (0x00012eff) input_focus_pane_cp7_vc_ParamLimits

0x7593,	// (0x00012eff) input_focus_pane_cp7_vc

0xb4d8,	// (0x00016e44) list_form_pane_vc_ParamLimits

0xb4d8,	// (0x00016e44) list_form_pane_vc

0xb4e4,	// (0x00016e50) data_form_pane_vc_t1_ParamLimits

0xb4e4,	// (0x00016e50) data_form_pane_vc_t1

0x76cf,	// (0x0001303b) input_focus_pane_vc_g1

0x76d7,	// (0x00013043) input_focus_pane_vc_g2

0x76df,	// (0x0001304b) input_focus_pane_vc_g3

0x76e7,	// (0x00013053) input_focus_pane_vc_g4

0x76ef,	// (0x0001305b) input_focus_pane_vc_g5

0x76f7,	// (0x00013063) input_focus_pane_vc_g6

0x76ff,	// (0x0001306b) input_focus_pane_vc_g7

0x7707,	// (0x00013073) input_focus_pane_vc_g8

0x770f,	// (0x0001307b) input_focus_pane_vc_g9

0x3e39,	// (0x0000f7a5) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0001b00f) input_focus_pane_vc_g

0x9461,	// (0x00014dcd) data_form_pane_vc_ParamLimits

0x9461,	// (0x00014dcd) data_form_pane_vc

0x946d,	// (0x00014dd9) form_field_data_pane_vc_g1

0xb501,	// (0x00016e6d) form_field_data_pane_vc_t1_ParamLimits

0xb501,	// (0x00016e6d) form_field_data_pane_vc_t1

0x7593,	// (0x00012eff) input_focus_pane_vc_ParamLimits

0x7593,	// (0x00012eff) input_focus_pane_vc

0xb51b,	// (0x00016e87) button_value_adjust_pane_cp3_vc

0xb523,	// (0x00016e8f) button_value_adjust_pane_cp5_vc

0xb52b,	// (0x00016e97) form_field_data_pane_vc_ParamLimits

0xb52b,	// (0x00016e97) form_field_data_pane_vc

0xb546,	// (0x00016eb2) form_field_data_pane_vc_cp2

0xb54e,	// (0x00016eba) form_field_data_wide_pane_vc_ParamLimits

0xb54e,	// (0x00016eba) form_field_data_wide_pane_vc

0xb568,	// (0x00016ed4) form_field_data_wide_pane_vc_cp2

0xb570,	// (0x00016edc) form_field_popup_pane_vc_ParamLimits

0xb570,	// (0x00016edc) form_field_popup_pane_vc

0xb58b,	// (0x00016ef7) form_field_popup_wide_pane_vc_ParamLimits

0xb58b,	// (0x00016ef7) form_field_popup_wide_pane_vc

0xb5a5,	// (0x00016f11) form_field_slider_pane_vc_ParamLimits

0xb5a5,	// (0x00016f11) form_field_slider_pane_vc

0xb5b8,	// (0x00016f24) form_field_slider_wide_pane_vc_ParamLimits

0xb5b8,	// (0x00016f24) form_field_slider_wide_pane_vc

0xb5cb,	// (0x00016f37) grid_touch_1_pane_ParamLimits

0xb5cb,	// (0x00016f37) grid_touch_1_pane

0xb5d7,	// (0x00016f43) grid_touch_2_pane_ParamLimits

0xb5d7,	// (0x00016f43) grid_touch_2_pane

0x86ac,	// (0x00014018) touch_pane_g1_ParamLimits

0x86ac,	// (0x00014018) touch_pane_g1

0xb5f1,	// (0x00016f5d) cell_app_pane_cp_wide_ParamLimits

0xb5f1,	// (0x00016f5d) cell_app_pane_cp_wide

0xb602,	// (0x00016f6e) grid_popup_fast_wide_pane_ParamLimits

0xb602,	// (0x00016f6e) grid_popup_fast_wide_pane

0xb616,	// (0x00016f82) scroll_pane_cp19_ParamLimits

0xb616,	// (0x00016f82) scroll_pane_cp19

0x3fb2,	// (0x0000f91e) bg_popup_window_pane_cp20

0xb62a,	// (0x00016f96) listscroll_popup_fast_wide_pane

0x6757,	// (0x000120c3) grid_indicator_nsta_pane

0xb632,	// (0x00016f9e) clock_nsta_pane_g1

0xb63b,	// (0x00016fa7) clock_nsta_pane_t1

0xb657,	// (0x00016fc3) cell_indicator_nsta_pane_ParamLimits

0xb657,	// (0x00016fc3) cell_indicator_nsta_pane

0xb68f,	// (0x00016ffb) cell_indicator_nsta_pane_g1

0xb69d,	// (0x00017009) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0001b415) cell_indicator_nsta_pane_g

0xb6b2,	// (0x0001701e) clock_nsta_pane_cp

0xb6ba,	// (0x00017026) indicator_nsta_pane_cp

0xb6c2,	// (0x0001702e) nsta_clock_indic_pane_g1

0x683d,	// (0x000121a9) grid_indicator_pane

0x7c9d,	// (0x00013609) scroll_pane_cp29

0x5186,	// (0x00010af2) indicator_nsta_pane_cp2_ParamLimits

0x5186,	// (0x00010af2) indicator_nsta_pane_cp2

0x6757,	// (0x000120c3) main_apps_wheel_pane

0x965b,	// (0x00014fc7) form_midp_field_text_pane_ParamLimits

0x97aa,	// (0x00015116) scroll_bar_cp050_ParamLimits

0xb72b,	// (0x00017097) cell_indicator_pane_ParamLimits

0xb72b,	// (0x00017097) cell_indicator_pane

0xb743,	// (0x000170af) cell_indicator_pane_g1

0xb74d,	// (0x000170b9) grid_wheel_folder_pane_ParamLimits

0xb74d,	// (0x000170b9) grid_wheel_folder_pane

0xb761,	// (0x000170cd) list_wheel_apps_pane_ParamLimits

0xb761,	// (0x000170cd) list_wheel_apps_pane

0xb774,	// (0x000170e0) main_apps_wheel_pane_g1_ParamLimits

0xb774,	// (0x000170e0) main_apps_wheel_pane_g1

0xb790,	// (0x000170fc) main_apps_wheel_pane_g2_ParamLimits

0xb790,	// (0x000170fc) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0001b431) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0001b431) main_apps_wheel_pane_g

0xb7ac,	// (0x00017118) main_apps_wheel_pane_t1_ParamLimits

0xb7ac,	// (0x00017118) main_apps_wheel_pane_t1

0xb7d5,	// (0x00017141) list_wheel_apps_pane_g1

0xb7dd,	// (0x00017149) list_wheel_apps_pane_g2

0xb7e5,	// (0x00017151) list_wheel_apps_pane_g3

0xb7ed,	// (0x00017159) list_wheel_apps_pane_g4

0xb7f7,	// (0x00017163) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0001b436) list_wheel_apps_pane_g

0x825b,	// (0x00013bc7) navi_icon_text_pane

0x8da8,	// (0x00014714) aid_fill_nsta

0xb818,	// (0x00017184) navi_icon_text_pane_g1

0xb827,	// (0x00017193) navi_icon_text_pane_t1

0x80f1,	// (0x00013a5d) list_set_graphic_pane_t1_ParamLimits

0x80f1,	// (0x00013a5d) list_set_graphic_pane_t1

0x9efb,	// (0x00015867) popup_midp_note_alarm_window_t6_ParamLimits

0x9efb,	// (0x00015867) popup_midp_note_alarm_window_t6

0x9f0d,	// (0x00015879) popup_midp_note_alarm_window_t7_ParamLimits

0x9f0d,	// (0x00015879) popup_midp_note_alarm_window_t7

0x9f1f,	// (0x0001588b) popup_midp_note_alarm_window_t8_ParamLimits

0x9f1f,	// (0x0001588b) popup_midp_note_alarm_window_t8

0x9f31,	// (0x0001589d) popup_midp_note_alarm_window_t9_ParamLimits

0x9f31,	// (0x0001589d) popup_midp_note_alarm_window_t9

0x9f43,	// (0x000158af) popup_midp_note_alarm_window_t10_ParamLimits

0x9f43,	// (0x000158af) popup_midp_note_alarm_window_t10

0x9f55,	// (0x000158c1) popup_midp_note_alarm_window_t11_ParamLimits

0x9f55,	// (0x000158c1) popup_midp_note_alarm_window_t11

0x9f67,	// (0x000158d3) scroll_pane_cp17_ParamLimits

0x9f67,	// (0x000158d3) scroll_pane_cp17

0x5656,	// (0x00010fc2) volume_small_pane_cp_g1

0x5967,	// (0x000112d3) volume_small_pane_cp_g2

0x5970,	// (0x000112dc) volume_small_pane_cp_g3

0x5979,	// (0x000112e5) volume_small_pane_cp_g4

0x5982,	// (0x000112ee) volume_small_pane_cp_g5

0x598b,	// (0x000112f7) volume_small_pane_cp_g6

0x5994,	// (0x00011300) volume_small_pane_cp_g7

0x599d,	// (0x00011309) volume_small_pane_cp_g8

0x59a6,	// (0x00011312) volume_small_pane_cp_g9

0x59af,	// (0x0001131b) volume_small_pane_cp_g10

0x84bc,	// (0x00013e28) midp_ticker_pane_g1_ParamLimits

0x84c8,	// (0x00013e34) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001b0d7) midp_ticker_pane_g_ParamLimits

0x84d4,	// (0x00013e40) midp_ticker_pane_t1_ParamLimits

0x8dbe,	// (0x0001472a) aid_fill_nsta_2

0x9796,	// (0x00015102) list_form2_midp_pane

0xa981,	// (0x000162ed) midp_editing_number_pane_ParamLimits

0xa990,	// (0x000162fc) midp_ticker_pane_ParamLimits

0xb83c,	// (0x000171a8) form2_midp_field_pane

0xb860,	// (0x000171cc) scroll_pane_cp51

0xb880,	// (0x000171ec) form2_midp_button_pane_ParamLimits

0xb880,	// (0x000171ec) form2_midp_button_pane

0xb892,	// (0x000171fe) form2_midp_content_pane_ParamLimits

0xb892,	// (0x000171fe) form2_midp_content_pane

0xb8ac,	// (0x00017218) form2_midp_field_choice_group_pane

0xb8b4,	// (0x00017220) form2_midp_field_pane_g1

0xb8bc,	// (0x00017228) form2_midp_field_pane_g2

0xb8c4,	// (0x00017230) form2_midp_field_pane_g3

0xb8cc,	// (0x00017238) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0001b45b) form2_midp_field_pane_g

0xb8d4,	// (0x00017240) form2_midp_gauge_slider_pane

0xb8dc,	// (0x00017248) form2_midp_gauge_wait_pane

0xb8e4,	// (0x00017250) form2_midp_image_pane_ParamLimits

0xb8e4,	// (0x00017250) form2_midp_image_pane

0xb8ff,	// (0x0001726b) form2_midp_label_pane_ParamLimits

0xb8ff,	// (0x0001726b) form2_midp_label_pane

0xb91e,	// (0x0001728a) form2_midp_label_pane_cp_ParamLimits

0xb91e,	// (0x0001728a) form2_midp_label_pane_cp

0xb93f,	// (0x000172ab) form2_midp_string_pane_ParamLimits

0xb93f,	// (0x000172ab) form2_midp_string_pane

0xb951,	// (0x000172bd) form2_midp_text_pane_ParamLimits

0xb951,	// (0x000172bd) form2_midp_text_pane

0xb972,	// (0x000172de) form2_midp_time_pane

0xb982,	// (0x000172ee) input_focus_pane_cp51_ParamLimits

0xb982,	// (0x000172ee) input_focus_pane_cp51

0xb99a,	// (0x00017306) form2_midp_label_pane_t1_ParamLimits

0xb99a,	// (0x00017306) form2_midp_label_pane_t1

0xb9e0,	// (0x0001734c) form2_mdip_text_pane_t1_ParamLimits

0xb9e0,	// (0x0001734c) form2_mdip_text_pane_t1

0xba02,	// (0x0001736e) form2_midp_time_pane_t1

0xba1d,	// (0x00017389) form2_midp_gauge_slider_pane_t1

0xba2f,	// (0x0001739b) form2_midp_gauge_slider_pane_t2

0xba41,	// (0x000173ad) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0001b464) form2_midp_gauge_slider_pane_t

0xba53,	// (0x000173bf) form2_midp_slider_pane

0xba5f,	// (0x000173cb) form2_midp_gauge_wait_pane_t1

0xba6d,	// (0x000173d9) form2_midp_wait_pane_ParamLimits

0xba6d,	// (0x000173d9) form2_midp_wait_pane

0x948c,	// (0x00014df8) list_single_2graphic_pane_cp4_ParamLimits

0x948c,	// (0x00014df8) list_single_2graphic_pane_cp4

0xba98,	// (0x00017404) list_single_midp_graphic_pane_cp_ParamLimits

0xba98,	// (0x00017404) list_single_midp_graphic_pane_cp

0x3fb2,	// (0x0000f91e) list_highlight_pane_cp20

0xbabc,	// (0x00017428) list_single_2graphic_pane_g1_cp4

0xae4c,	// (0x000167b8) list_single_2graphic_pane_g2_cp4

0xbac4,	// (0x00017430) list_single_2graphic_pane_t1_cp4

0x6757,	// (0x000120c3) list_highlight_pane_cp21

0xbad3,	// (0x0001743f) list_single_midp_graphic_pane_g4_cp

0xbae2,	// (0x0001744e) list_single_midp_graphic_pane_t1_cp

0xbaf7,	// (0x00017463) form2_mdip_string_pane_t1_ParamLimits

0xbaf7,	// (0x00017463) form2_mdip_string_pane_t1

0x3fb2,	// (0x0000f91e) bg_wml_button_pane_cp2

0x3e39,	// (0x0000f7a5) form2_midp_image_pane_g1

0x723f,	// (0x00012bab) list_double_large_graphic_pane_g5_ParamLimits

0x723f,	// (0x00012bab) list_double_large_graphic_pane_g5

0x83e7,	// (0x00013d53) midp_form_pane_ParamLimits

0x6757,	// (0x000120c3) main_apps_wheel_pane_ParamLimits

0x8b52,	// (0x000144be) popup_preview_window_ParamLimits

0x8b52,	// (0x000144be) popup_preview_window

0x8d39,	// (0x000146a5) popup_touch_info_window_ParamLimits

0x8d39,	// (0x000146a5) popup_touch_info_window

0x8d5b,	// (0x000146c7) popup_touch_menu_window_ParamLimits

0x8d5b,	// (0x000146c7) popup_touch_menu_window

0x3e2f,	// (0x0000f79b) bg_popup_sub_pane_cp6

0xbb9c,	// (0x00017508) list_touch_menu_pane

0xbba4,	// (0x00017510) list_single_touch_menu_pane_ParamLimits

0xbba4,	// (0x00017510) list_single_touch_menu_pane

0xbbbf,	// (0x0001752b) list_single_touch_menu_pane_t1

0x6757,	// (0x000120c3) bg_popup_sub_pane_cp7_ParamLimits

0x6757,	// (0x000120c3) bg_popup_sub_pane_cp7

0xbbcd,	// (0x00017539) heading_sub_pane

0xbbd5,	// (0x00017541) list_touch_info_pane_ParamLimits

0xbbd5,	// (0x00017541) list_touch_info_pane

0xbbe4,	// (0x00017550) list_single_touch_info_pane_ParamLimits

0xbbe4,	// (0x00017550) list_single_touch_info_pane

0xbbf6,	// (0x00017562) list_single_touch_info_pane_t1

0xbc04,	// (0x00017570) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0001b472) list_single_touch_info_pane_t

0x83df,	// (0x00013d4b) bg_popup_heading_pane_cp

0xbc12,	// (0x0001757e) heading_sub_pane_t1

0x93fb,	// (0x00014d67) bg_popup_preview_window_pane_cp_ParamLimits

0x93fb,	// (0x00014d67) bg_popup_preview_window_pane_cp

0xbbcd,	// (0x00017539) heading_preview_pane

0xbbd5,	// (0x00017541) list_preview_pane_ParamLimits

0xbbd5,	// (0x00017541) list_preview_pane

0xbc20,	// (0x0001758c) popup_preview_window_g1

0xbbe4,	// (0x00017550) list_single_preview_pane_ParamLimits

0xbbe4,	// (0x00017550) list_single_preview_pane

0xbc28,	// (0x00017594) list_single_preview_pane_g1

0xbc30,	// (0x0001759c) list_single_preview_pane_t1

0xbbf6,	// (0x00017562) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0001b477) list_single_preview_pane_t

0xbc3e,	// (0x000175aa) bg_popup_heading_pane_cp2_ParamLimits

0xbc3e,	// (0x000175aa) bg_popup_heading_pane_cp2

0xbc54,	// (0x000175c0) heading_preview_pane_g1

0xbc5c,	// (0x000175c8) heading_preview_pane_t1_ParamLimits

0xbc5c,	// (0x000175c8) heading_preview_pane_t1

0x6860,	// (0x000121cc) soft_indicator_pane_t1_ParamLimits

0x6f6b,	// (0x000128d7) scroll_pane_ParamLimits

0x7b99,	// (0x00013505) scroll_sc2_left_pane

0x7ba2,	// (0x0001350e) scroll_sc2_right_pane

0x7bc1,	// (0x0001352d) scroll_bg_pane_g1_ParamLimits

0x7bd6,	// (0x00013542) scroll_bg_pane_g2_ParamLimits

0x7bee,	// (0x0001355a) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0001b066) scroll_bg_pane_g_ParamLimits

0x7bc1,	// (0x0001352d) scroll_handle_pane_g1_ParamLimits

0x7c10,	// (0x0001357c) scroll_handle_pane_g2_ParamLimits

0x7bee,	// (0x0001355a) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0001b06d) scroll_handle_pane_g_ParamLimits

0x879d,	// (0x00014109) popup_choice_list_window_ParamLimits

0x879d,	// (0x00014109) popup_choice_list_window

0x91fb,	// (0x00014b67) choice_list_pane

0x92ab,	// (0x00014c17) cell_toolbar_pane_t1

0x92d3,	// (0x00014c3f) toolbar_button_pane_ParamLimits

0xa437,	// (0x00015da3) ai_gene_pane_1_t2_ParamLimits

0xa437,	// (0x00015da3) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x0001b28a) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x0001b28a) ai_gene_pane_1_t

0xbc79,	// (0x000175e5) scroll_sc2_left_pane_g1

0xbc79,	// (0x000175e5) scroll_sc2_right_pane_g1

0x876d,	// (0x000140d9) bg_popup_sub_pane_cp10

0xbc83,	// (0x000175ef) list_choice_list_pane

0xbc9a,	// (0x00017606) list_single_choice_list_pane_ParamLimits

0xbc9a,	// (0x00017606) list_single_choice_list_pane

0xbcae,	// (0x0001761a) list_single_choice_list_pane_g1

0xbcb6,	// (0x00017622) list_single_choice_list_pane_t1_ParamLimits

0xbcb6,	// (0x00017622) list_single_choice_list_pane_t1

0xbccb,	// (0x00017637) choice_list_pane_g1

0xbcd3,	// (0x0001763f) choice_list_pane_t1

0x3e2f,	// (0x0000f79b) input_focus_pane_cp11

0x7a73,	// (0x000133df) title_pane_stacon_g2_ParamLimits

0x7a73,	// (0x000133df) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0001b04c) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0001b04c) title_pane_stacon_g

0x83df,	// (0x00013d4b) cursor_press_pane

0x8853,	// (0x000141bf) popup_fep_hwr_window_ParamLimits

0x8853,	// (0x000141bf) popup_fep_hwr_window

0x88dd,	// (0x00014249) popup_fep_vkb_window_ParamLimits

0x88dd,	// (0x00014249) popup_fep_vkb_window

0xbce1,	// (0x0001764d) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0001b4a0) fep_vkb_side_pane_g_ParamLimits

0x59f1,	// (0x0001135d) fep_hwr_candidate_pane_ParamLimits

0x59f1,	// (0x0001135d) fep_hwr_candidate_pane

0x5a1b,	// (0x00011387) fep_hwr_side_pane_ParamLimits

0x5a1b,	// (0x00011387) fep_hwr_side_pane

0x5a3d,	// (0x000113a9) fep_hwr_top_pane_ParamLimits

0x5a3d,	// (0x000113a9) fep_hwr_top_pane

0x5a55,	// (0x000113c1) fep_hwr_write_pane_ParamLimits

0x5a55,	// (0x000113c1) fep_hwr_write_pane

0xfb34,	// (0x0001b4a0) fep_vkb_side_pane_g

0xbce9,	// (0x00017655) fep_hwr_top_pane_g1

0xbcfb,	// (0x00017667) fep_hwr_top_pane_g2

0x5a8f,	// (0x000113fb) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0001b47c) fep_hwr_top_pane_g

0x5aa4,	// (0x00011410) fep_hwr_top_text_pane

0x7d65,	// (0x000136d1) fep_hwr_top_text_pane_g1

0xbd31,	// (0x0001769d) fep_hwr_top_text_pane_t1

0x5bae,	// (0x0001151a) fep_hwr_candidate_pane_g1

0xbfbe,	// (0x0001792a) fep_vkb_keypad_pane_g3_ParamLimits

0xbfbe,	// (0x0001792a) fep_vkb_keypad_pane_g3

0xbfea,	// (0x00017956) fep_vkb_keypad_pane_g4_ParamLimits

0xbfea,	// (0x00017956) fep_vkb_keypad_pane_g4

0xc061,	// (0x000179cd) fep_vkb_bottom_pane_g2_ParamLimits

0xc061,	// (0x000179cd) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0001b4a7) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0001b4a7) fep_vkb_bottom_pane_g

0xbc79,	// (0x000175e5) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0001b4b1) cell_vkb_side_pane_g

0xc0ec,	// (0x00017a58) cell_vkb_side_pane_t1

0xc0fa,	// (0x00017a66) cell_vkb_side_pane_t1_copy1

0xbc79,	// (0x000175e5) bg_fep_vkb_candidate_pane_g2

0xc23e,	// (0x00017baa) cell_vkb_candidate_pane_ParamLimits

0xbd81,	// (0x000176ed) aid_size_cell_vkb_ParamLimits

0xbd81,	// (0x000176ed) aid_size_cell_vkb

0xc23e,	// (0x00017baa) cell_vkb_candidate_pane

0x5bd5,	// (0x00011541) bg_popup_fep_shadow_pane_g1

0xbe13,	// (0x0001777f) fep_vkb_bottom_pane_ParamLimits

0xbe13,	// (0x0001777f) fep_vkb_bottom_pane

0xbe50,	// (0x000177bc) fep_vkb_candidate_pane_ParamLimits

0xbe50,	// (0x000177bc) fep_vkb_candidate_pane

0xbe6c,	// (0x000177d8) fep_vkb_keypad_pane_ParamLimits

0xbe6c,	// (0x000177d8) fep_vkb_keypad_pane

0xbe9f,	// (0x0001780b) fep_vkb_side_pane_ParamLimits

0xbe9f,	// (0x0001780b) fep_vkb_side_pane

0xbedb,	// (0x00017847) fep_vkb_top_pane_ParamLimits

0xbedb,	// (0x00017847) fep_vkb_top_pane

0xbf17,	// (0x00017883) fep_vkb_top_pane_g1_ParamLimits

0xbf17,	// (0x00017883) fep_vkb_top_pane_g1

0xbf26,	// (0x00017892) fep_vkb_top_pane_g2_ParamLimits

0xbf26,	// (0x00017892) fep_vkb_top_pane_g2

0xbf35,	// (0x000178a1) fep_vkb_top_pane_g3_ParamLimits

0xbf35,	// (0x000178a1) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0001b497) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0001b497) fep_vkb_top_pane_g

0xbf53,	// (0x000178bf) fep_vkb_top_text_pane_ParamLimits

0xbf53,	// (0x000178bf) fep_vkb_top_text_pane

0xbf64,	// (0x000178d0) fep_vkb_side_pane_g1_ParamLimits

0xbf64,	// (0x000178d0) fep_vkb_side_pane_g1

0xbfad,	// (0x00017919) grid_vkb_side_pane_ParamLimits

0xbfad,	// (0x00017919) grid_vkb_side_pane

0x5bdd,	// (0x00011549) bg_popup_fep_shadow_pane_g2

0x5be6,	// (0x00011552) bg_popup_fep_shadow_pane_g3

0x5bee,	// (0x0001155a) bg_popup_fep_shadow_pane_g4

0x5bf7,	// (0x00011563) bg_popup_fep_shadow_pane_g5

0x5c01,	// (0x0001156d) bg_popup_fep_shadow_pane_g6

0x5c09,	// (0x00011575) bg_popup_fep_shadow_pane_g7

0x76e7,	// (0x00013053) bg_popup_fep_shadow_pane_g8

0xc00c,	// (0x00017978) grid_vkb_keypad_number_pane_ParamLimits

0xc00c,	// (0x00017978) grid_vkb_keypad_number_pane

0xc020,	// (0x0001798c) grid_vkb_keypad_pane_ParamLimits

0xc020,	// (0x0001798c) grid_vkb_keypad_pane

0xc046,	// (0x000179b2) fep_vkb_bottom_pane_g1_ParamLimits

0xc046,	// (0x000179b2) fep_vkb_bottom_pane_g1

0xc06f,	// (0x000179db) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc06f,	// (0x000179db) grid_vkb_keypad_bottom_left_pane

0xc084,	// (0x000179f0) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc084,	// (0x000179f0) grid_vkb_keypad_bottom_right_pane

0xc099,	// (0x00017a05) fep_vkb_top_text_pane_g1

0xc0b4,	// (0x00017a20) fep_vkb_top_text_pane_t1

0xc0c9,	// (0x00017a35) cell_vkb_side_pane_ParamLimits

0xc0c9,	// (0x00017a35) cell_vkb_side_pane

0xbc79,	// (0x000175e5) cell_vkb_side_pane_g1

0xc108,	// (0x00017a74) cell_vkb_keypad_pane_ParamLimits

0xc108,	// (0x00017a74) cell_vkb_keypad_pane

0xc195,	// (0x00017b01) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0001b4c4) bg_popup_fep_shadow_pane_g

0x5c1b,	// (0x00011587) cell_hwr_side_pane_g1

0x5c1b,	// (0x00011587) cell_hwr_side_pane_g2

0xc19f,	// (0x00017b0b) cell_vkb_keypad_pane_t1

0xc1ad,	// (0x00017b19) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc1ad,	// (0x00017b19) cell_vkb_keypad_bottom_left_pane

0xc1ca,	// (0x00017b36) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1ca,	// (0x00017b36) cell_vkb_keypad_bottom_right_pane

0xbc79,	// (0x000175e5) cell_vkb_keypad_bottom_left_pane_g1

0xbc79,	// (0x000175e5) cell_vkb_keypad_bottom_right_pane_g1

0xc203,	// (0x00017b6f) cell_vkb_keypad_number_pane_ParamLimits

0xc203,	// (0x00017b6f) cell_vkb_keypad_number_pane

0xc222,	// (0x00017b8e) cell_vkb_keypad_number_pane_g1

0xc22c,	// (0x00017b98) cell_vkb_keypad_number_pane_g2

0xc235,	// (0x00017ba1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0001b4b6) cell_vkb_keypad_number_pane_g

0xc19f,	// (0x00017b0b) cell_vkb_keypad_number_pane_t1

0xc25f,	// (0x00017bcb) fep_vkb_candidate_pane_g1

0x0001,

0xfb6b,	// (0x0001b4d7) cell_hwr_side_pane_g

0xc278,	// (0x00017be4) cell_hwr_side_pane_t1

0x5c25,	// (0x00011591) cell_hwr_side_pane_t1_copy1

0x5c33,	// (0x0001159f) cell_hwr_candidate_pane_g1

0x5c62,	// (0x000115ce) cell_hwr_candidate_pane_t1

0xbc79,	// (0x000175e5) cell_vkb_candidate_pane_g2

0xc2bc,	// (0x00017c28) cell_vkb_candidate_pane_t1

0x59b8,	// (0x00011324) bg_popup_fep_shadow_pane_ParamLimits

0x59b8,	// (0x00011324) bg_popup_fep_shadow_pane

0x5a6f,	// (0x000113db) bg_fep_hwr_top_pane_g4

0xbd0d,	// (0x00017679) bg_hwr_side_pane_g1_ParamLimits

0xbd0d,	// (0x00017679) bg_hwr_side_pane_g1

0x5ae2,	// (0x0001144e) cell_hwr_side_pane_ParamLimits

0x5ae2,	// (0x0001144e) cell_hwr_side_pane

0x5b1f,	// (0x0001148b) fep_hwr_write_pane_g1_ParamLimits

0x5b1f,	// (0x0001148b) fep_hwr_write_pane_g1

0x5b2c,	// (0x00011498) fep_hwr_write_pane_g2_ParamLimits

0x5b2c,	// (0x00011498) fep_hwr_write_pane_g2

0x5b39,	// (0x000114a5) fep_hwr_write_pane_g3_ParamLimits

0x5b39,	// (0x000114a5) fep_hwr_write_pane_g3

0x5b47,	// (0x000114b3) fep_hwr_write_pane_g4_ParamLimits

0x5b47,	// (0x000114b3) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0001b483) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0001b483) fep_hwr_write_pane_g

0x5a6f,	// (0x000113db) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5a6f,	// (0x000113db) bg_fep_hwr_candidate_pane_g2

0x5b5c,	// (0x000114c8) cell_hwr_candidate_pane_ParamLimits

0x5b5c,	// (0x000114c8) cell_hwr_candidate_pane

0x5bae,	// (0x0001151a) fep_hwr_candidate_pane_g1_ParamLimits

0xbdaf,	// (0x0001771b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbdaf,	// (0x0001771b) bg_popup_fep_shadow_pane_cp2

0xbf45,	// (0x000178b1) fep_vkb_top_pane_g4_ParamLimits

0xbf45,	// (0x000178b1) fep_vkb_top_pane_g4

0xbf8b,	// (0x000178f7) fep_vkb_side_pane_g2_ParamLimits

0xbf8b,	// (0x000178f7) fep_vkb_side_pane_g2

0x73a3,	// (0x00012d0f) list_setting_pane_t4_ParamLimits

0x73a3,	// (0x00012d0f) list_setting_pane_t4

0x741f,	// (0x00012d8b) list_setting_number_pane_t5_ParamLimits

0x741f,	// (0x00012d8b) list_setting_number_pane_t5

0x7da7,	// (0x00013713) list_double_heading_pane_cp2_ParamLimits

0x7da7,	// (0x00013713) list_double_heading_pane_cp2

0x75b9,	// (0x00012f25) list_double_heading_pane_g1_cp2_ParamLimits

0x75b9,	// (0x00012f25) list_double_heading_pane_g1_cp2

0x75c5,	// (0x00012f31) list_double_heading_pane_g2_cp2_ParamLimits

0x75c5,	// (0x00012f31) list_double_heading_pane_g2_cp2

0xc2ca,	// (0x00017c36) list_double_heading_pane_t1_cp2_ParamLimits

0xc2ca,	// (0x00017c36) list_double_heading_pane_t1_cp2

0xc2e0,	// (0x00017c4c) list_double_heading_pane_t2_cp2_ParamLimits

0xc2e0,	// (0x00017c4c) list_double_heading_pane_t2_cp2

0x3e27,	// (0x0000f793) aid_value_unit2

0x4d13,	// (0x0001067f) popup_preview_fixed_window

0x69fb,	// (0x00012367) bg_popup_preview_window_pane_cp02

0xc2f2,	// (0x00017c5e) list_preview_fixed_pane

0xc338,	// (0x00017ca4) list_empty_pane_fp_ParamLimits

0xc338,	// (0x00017ca4) list_empty_pane_fp

0xc338,	// (0x00017ca4) list_single_cale_day_pane_fp_ParamLimits

0xc338,	// (0x00017ca4) list_single_cale_day_pane_fp

0xc338,	// (0x00017ca4) list_single_graphic_heading_pane_fp_ParamLimits

0xc338,	// (0x00017ca4) list_single_graphic_heading_pane_fp

0xc338,	// (0x00017ca4) list_single_graphic_pane_fp_ParamLimits

0xc338,	// (0x00017ca4) list_single_graphic_pane_fp

0xc338,	// (0x00017ca4) list_single_heading_pane_fp_ParamLimits

0xc338,	// (0x00017ca4) list_single_heading_pane_fp

0xc338,	// (0x00017ca4) list_single_pane_fp_ParamLimits

0xc338,	// (0x00017ca4) list_single_pane_fp

0xc351,	// (0x00017cbd) list_single_pane_fp_g1_ParamLimits

0xc351,	// (0x00017cbd) list_single_pane_fp_g1

0xc35d,	// (0x00017cc9) list_single_pane_fp_g2_ParamLimits

0xc35d,	// (0x00017cc9) list_single_pane_fp_g2

0xc369,	// (0x00017cd5) list_single_pane_fp_g3_ParamLimits

0xc369,	// (0x00017cd5) list_single_pane_fp_g3

0xc37d,	// (0x00017ce9) list_single_pane_fp_g4_ParamLimits

0xc37d,	// (0x00017ce9) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x0001b4ea) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x0001b4ea) list_single_pane_fp_g

0xc389,	// (0x00017cf5) list_single_pane_fp_t1_ParamLimits

0xc389,	// (0x00017cf5) list_single_pane_fp_t1

0xc3a0,	// (0x00017d0c) list_single_graphic_pane_fp_g1_ParamLimits

0xc3a0,	// (0x00017d0c) list_single_graphic_pane_fp_g1

0xc351,	// (0x00017cbd) list_single_graphic_pane_fp_g2_ParamLimits

0xc351,	// (0x00017cbd) list_single_graphic_pane_fp_g2

0xc35d,	// (0x00017cc9) list_single_graphic_pane_fp_g3_ParamLimits

0xc35d,	// (0x00017cc9) list_single_graphic_pane_fp_g3

0xc369,	// (0x00017cd5) list_single_graphic_pane_fp_g4_ParamLimits

0xc369,	// (0x00017cd5) list_single_graphic_pane_fp_g4

0xc37d,	// (0x00017ce9) list_single_graphic_pane_fp_g5_ParamLimits

0xc37d,	// (0x00017ce9) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x0001b4f3) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x0001b4f3) list_single_graphic_pane_fp_g

0xc3ac,	// (0x00017d18) list_single_graphic_pane_fp_t1_ParamLimits

0xc3ac,	// (0x00017d18) list_single_graphic_pane_fp_t1

0xc3a0,	// (0x00017d0c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc3a0,	// (0x00017d0c) list_single_graphic_heading_pane_fp_g1

0xc351,	// (0x00017cbd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc351,	// (0x00017cbd) list_single_graphic_heading_pane_fp_g2

0xc35d,	// (0x00017cc9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc35d,	// (0x00017cc9) list_single_graphic_heading_pane_fp_g3

0xc369,	// (0x00017cd5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc369,	// (0x00017cd5) list_single_graphic_heading_pane_fp_g4

0xc37d,	// (0x00017ce9) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc37d,	// (0x00017ce9) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0001b4f3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0001b4f3) list_single_graphic_heading_pane_fp_g

0xc3c2,	// (0x00017d2e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc3c2,	// (0x00017d2e) list_single_graphic_heading_pane_fp_t1

0xc3d8,	// (0x00017d44) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc3d8,	// (0x00017d44) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0001b4fe) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0001b4fe) list_single_graphic_heading_pane_fp_t

0xc3ea,	// (0x00017d56) list_single_cale_day_pane_fp_g1_ParamLimits

0xc3ea,	// (0x00017d56) list_single_cale_day_pane_fp_g1

0xc422,	// (0x00017d8e) list_single_cale_day_pane_fp_g2_ParamLimits

0xc422,	// (0x00017d8e) list_single_cale_day_pane_fp_g2

0xc42e,	// (0x00017d9a) list_single_cale_day_pane_fp_g3_ParamLimits

0xc42e,	// (0x00017d9a) list_single_cale_day_pane_fp_g3

0xc456,	// (0x00017dc2) list_single_cale_day_pane_fp_g4_ParamLimits

0xc456,	// (0x00017dc2) list_single_cale_day_pane_fp_g4

0xc47a,	// (0x00017de6) list_single_cale_day_pane_fp_g5_ParamLimits

0xc47a,	// (0x00017de6) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x0001b503) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x0001b503) list_single_cale_day_pane_fp_g

0xc49e,	// (0x00017e0a) list_single_cale_day_pane_fp_t1_ParamLimits

0xc49e,	// (0x00017e0a) list_single_cale_day_pane_fp_t1

0xc4c4,	// (0x00017e30) list_single_cale_day_pane_fp_t2_ParamLimits

0xc4c4,	// (0x00017e30) list_single_cale_day_pane_fp_t2

0xc4dd,	// (0x00017e49) list_single_cale_day_pane_fp_t3_ParamLimits

0xc4dd,	// (0x00017e49) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x0001b50e) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x0001b50e) list_single_cale_day_pane_fp_t

0xc351,	// (0x00017cbd) list_empty_pane_fp_g1_ParamLimits

0xc351,	// (0x00017cbd) list_empty_pane_fp_g1

0xc4f6,	// (0x00017e62) list_empty_pane_fp_t1

0xc504,	// (0x00017e70) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x0001b515) list_empty_pane_fp_t

0xc351,	// (0x00017cbd) list_single_heading_pane_fp_g1_ParamLimits

0xc351,	// (0x00017cbd) list_single_heading_pane_fp_g1

0xc35d,	// (0x00017cc9) list_single_heading_pane_fp_g2_ParamLimits

0xc35d,	// (0x00017cc9) list_single_heading_pane_fp_g2

0xc369,	// (0x00017cd5) list_single_heading_pane_fp_g3_ParamLimits

0xc369,	// (0x00017cd5) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x0001b51a) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x0001b51a) list_single_heading_pane_fp_g

0xc512,	// (0x00017e7e) list_single_heading_pane_fp_t1_ParamLimits

0xc512,	// (0x00017e7e) list_single_heading_pane_fp_t1

0xc524,	// (0x00017e90) list_single_heading_pane_fp_t2_ParamLimits

0xc524,	// (0x00017e90) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x0001b521) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x0001b521) list_single_heading_pane_fp_t

0x790a,	// (0x00013276) aid_size_cell_fast

0x696d,	// (0x000122d9) soft_indicator_pane_cp1_t1

0x7947,	// (0x000132b3) cell_app_pane_cp2_ParamLimits

0x7947,	// (0x000132b3) cell_app_pane_cp2

0x59da,	// (0x00011346) fep_hwr_candidate_drop_down_list_pane

0x5bc8,	// (0x00011534) fep_hwr_candidate_pane_g3_ParamLimits

0x5bc8,	// (0x00011534) fep_hwr_candidate_pane_g3

0x3528,	// (0x0000ee94) fep_hwr_candidate_pane_g4_ParamLimits

0x3528,	// (0x0000ee94) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0001b490) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0001b490) fep_hwr_candidate_pane_g

0xbe3f,	// (0x000177ab) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe3f,	// (0x000177ab) fep_vkb_candidate_drop_down_list_pane

0xc267,	// (0x00017bd3) fep_vkb_candidate_pane_g3

0xc26f,	// (0x00017bdb) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0001b4bd) fep_vkb_candidate_pane_g

0x5c33,	// (0x0001159f) cell_hwr_candidate_pane_g1_ParamLimits

0x5c41,	// (0x000115ad) cell_hwr_candidate_pane_g3_ParamLimits

0x5c41,	// (0x000115ad) cell_hwr_candidate_pane_g3

0xd4f6,	// (0x00018e62) cell_hwr_candidate_pane_g4_ParamLimits

0xd4f6,	// (0x00018e62) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x0001b4dc) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x0001b4dc) cell_hwr_candidate_pane_g

0xc286,	// (0x00017bf2) cell_vkb_candidate_pane_g3_ParamLimits

0xc286,	// (0x00017bf2) cell_vkb_candidate_pane_g3

0xc2a1,	// (0x00017c0d) cell_vkb_candidate_pane_g4_ParamLimits

0xc2a1,	// (0x00017c0d) cell_vkb_candidate_pane_g4

0xc53a,	// (0x00017ea6) cell_app_pane_cp2_g1_ParamLimits

0xc53a,	// (0x00017ea6) cell_app_pane_cp2_g1

0xc558,	// (0x00017ec4) cell_app_pane_cp2_g2_ParamLimits

0xc558,	// (0x00017ec4) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x0001b526) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x0001b526) cell_app_pane_cp2_g

0xc564,	// (0x00017ed0) cell_app_pane_cp2_t1_ParamLimits

0xc564,	// (0x00017ed0) cell_app_pane_cp2_t1

0x7593,	// (0x00012eff) grid_highlight_pane_cp1_ParamLimits

0x7593,	// (0x00012eff) grid_highlight_pane_cp1

0x5c80,	// (0x000115ec) cell_hwr_candidate_pane_cp1_ParamLimits

0x5c80,	// (0x000115ec) cell_hwr_candidate_pane_cp1

0x5c33,	// (0x0001159f) fep_hwr_candidate_drop_down_list_pane_g1

0x5ca4,	// (0x00011610) fep_hwr_candidate_drop_down_list_pane_g2

0x5cb1,	// (0x0001161d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x0001b52b) fep_hwr_candidate_drop_down_list_pane_g

0x5cbe,	// (0x0001162a) fep_hwr_candidate_drop_down_list_scroll_pane

0x5cc7,	// (0x00011633) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5cc7,	// (0x00011633) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5cd4,	// (0x00011640) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5cd4,	// (0x00011640) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5ce1,	// (0x0001164d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5ce1,	// (0x0001164d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5cee,	// (0x0001165a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5cee,	// (0x0001165a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5d09,	// (0x00011675) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5d09,	// (0x00011675) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5d24,	// (0x00011690) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5d24,	// (0x00011690) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5d3f,	// (0x000116ab) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5d3f,	// (0x000116ab) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5d5a,	// (0x000116c6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5d5a,	// (0x000116c6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x0001b532) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x0001b532) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc576,	// (0x00017ee2) cell_vkb_candidate_pane_cp1_ParamLimits

0xc576,	// (0x00017ee2) cell_vkb_candidate_pane_cp1

0xbf45,	// (0x000178b1) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf45,	// (0x000178b1) fep_vkb_candidate_drop_down_list_pane_g1

0xc59c,	// (0x00017f08) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc59c,	// (0x00017f08) fep_vkb_candidate_drop_down_list_pane_g2

0xc5a9,	// (0x00017f15) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc5a9,	// (0x00017f15) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0001b543) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x0001b543) fep_vkb_candidate_drop_down_list_pane_g

0xc5b6,	// (0x00017f22) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc5b6,	// (0x00017f22) fep_vkb_candidate_drop_down_list_scroll_pane

0xc5c3,	// (0x00017f2f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc5c3,	// (0x00017f2f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc5d0,	// (0x00017f3c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc5d0,	// (0x00017f3c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc5dc,	// (0x00017f48) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc5dc,	// (0x00017f48) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5e8,	// (0x00017f54) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5e8,	// (0x00017f54) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc609,	// (0x00017f75) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc609,	// (0x00017f75) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc62a,	// (0x00017f96) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc62a,	// (0x00017f96) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc64b,	// (0x00017fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc64b,	// (0x00017fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc66c,	// (0x00017fd8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc66c,	// (0x00017fd8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0001b54a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0001b54a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x668d,	// (0x00011ff9) title_pane_g1_ParamLimits

0x669a,	// (0x00012006) title_pane_g2_ParamLimits

0xf56a,	// (0x0001aed6) title_pane_g_ParamLimits

0x7d55,	// (0x000136c1) aid_call2_pane

0x7d5d,	// (0x000136c9) aid_call_pane

0x7d65,	// (0x000136d1) popup_clock_analogue_window_g1

0x7d65,	// (0x000136d1) popup_clock_analogue_window_g2

0x5085,	// (0x000109f1) popup_clock_analogue_window_g3

0x508e,	// (0x000109fa) popup_clock_analogue_window_g4

0x3e39,	// (0x0000f7a5) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0001b07b) popup_clock_analogue_window_g

0x5096,	// (0x00010a02) popup_clock_analogue_window_t1

0x50a4,	// (0x00010a10) clock_digital_number_pane_ParamLimits

0x50a4,	// (0x00010a10) clock_digital_number_pane

0x50b0,	// (0x00010a1c) clock_digital_number_pane_cp02_ParamLimits

0x50b0,	// (0x00010a1c) clock_digital_number_pane_cp02

0x50bc,	// (0x00010a28) clock_digital_number_pane_cp03_ParamLimits

0x50bc,	// (0x00010a28) clock_digital_number_pane_cp03

0x50c8,	// (0x00010a34) clock_digital_number_pane_cp04_ParamLimits

0x50c8,	// (0x00010a34) clock_digital_number_pane_cp04

0x50d4,	// (0x00010a40) clock_digital_separator_pane_ParamLimits

0x50d4,	// (0x00010a40) clock_digital_separator_pane

0x50e0,	// (0x00010a4c) popup_clock_digital_window_t1_ParamLimits

0x50e0,	// (0x00010a4c) popup_clock_digital_window_t1

0x3e39,	// (0x0000f7a5) clock_digital_number_pane_g1

0x3e39,	// (0x0000f7a5) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0001b086) clock_digital_number_pane_g

0x3e39,	// (0x0000f7a5) clock_digital_separator_pane_g1

0x3e39,	// (0x0000f7a5) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0001b086) clock_digital_separator_pane_g

0x8da8,	// (0x00014714) aid_fill_nsta_ParamLimits

0x8ef8,	// (0x00014864) indicator_nsta_pane_ParamLimits

0x9088,	// (0x000149f4) popup_clock_analogue_window

0x9088,	// (0x000149f4) popup_clock_digital_window

0x6757,	// (0x000120c3) grid_indicator_nsta_pane_ParamLimits

0xb649,	// (0x00016fb5) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0001b410) clock_nsta_pane_t

0x5049,	// (0x000109b5) aid_size_max_handle

0x5053,	// (0x000109bf) aid_size_min_handle

0x83df,	// (0x00013d4b) editor_scroll_pane

0xc687,	// (0x00017ff3) ex_editor_pane

0x7877,	// (0x000131e3) scroll_pane_cp13

0x6f97,	// (0x00012903) scroll_pane_cp14

0x7d8f,	// (0x000136fb) scroll_pane_cp36

0x7dbd,	// (0x00013729) list_single_graphic_hl_pane_cp2_ParamLimits

0x7dbd,	// (0x00013729) list_single_graphic_hl_pane_cp2

0xaa21,	// (0x0001638d) list_single_graphic_hl_pane_ParamLimits

0xaa21,	// (0x0001638d) list_single_graphic_hl_pane

0xc68f,	// (0x00017ffb) aid_size_min_hl_cp1

0xc698,	// (0x00018004) list_highlight_pane_cp34_ParamLimits

0xc698,	// (0x00018004) list_highlight_pane_cp34

0xc6a9,	// (0x00018015) list_single_graphic_hl_pane_g1_ParamLimits

0xc6a9,	// (0x00018015) list_single_graphic_hl_pane_g1

0xc6b6,	// (0x00018022) list_single_graphic_hl_pane_g2_ParamLimits

0xc6b6,	// (0x00018022) list_single_graphic_hl_pane_g2

0xc6b6,	// (0x00018022) list_single_graphic_hl_pane_g3_ParamLimits

0xc6b6,	// (0x00018022) list_single_graphic_hl_pane_g3

0xaf6a,	// (0x000168d6) list_single_graphic_hl_pane_g4_ParamLimits

0xaf6a,	// (0x000168d6) list_single_graphic_hl_pane_g4

0xc6c2,	// (0x0001802e) list_single_graphic_hl_pane_g5_ParamLimits

0xc6c2,	// (0x0001802e) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x0001b55b) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x0001b55b) list_single_graphic_hl_pane_g

0xc6d6,	// (0x00018042) list_single_graphic_hl_pane_t1_ParamLimits

0xc6d6,	// (0x00018042) list_single_graphic_hl_pane_t1

0xc6ec,	// (0x00018058) aid_size_min_hl_cp2

0xc6f5,	// (0x00018061) list_highlight_pane_cp34_cp2_ParamLimits

0xc6f5,	// (0x00018061) list_highlight_pane_cp34_cp2

0xc6a9,	// (0x00018015) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc6a9,	// (0x00018015) list_single_graphic_hl_pane_g1_cp2

0xc702,	// (0x0001806e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc702,	// (0x0001806e) list_single_graphic_hl_pane_g2_cp2

0xc70e,	// (0x0001807a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc70e,	// (0x0001807a) list_single_graphic_hl_pane_g3_cp2

0x6fab,	// (0x00012917) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6fab,	// (0x00012917) list_single_graphic_hl_pane_g4_cp2

0xc71c,	// (0x00018088) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc71c,	// (0x00018088) list_single_graphic_hl_pane_g5_cp2

0x5399,	// (0x00010d05) control_pane_g4_ParamLimits

0x5399,	// (0x00010d05) control_pane_g4

0x876d,	// (0x000140d9) bg_popup_sub_pane_cp10_ParamLimits

0xbc83,	// (0x000175ef) list_choice_list_pane_ParamLimits

0xbc92,	// (0x000175fe) scroll_pane_cp23

0x69fb,	// (0x00012367) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2f2,	// (0x00017c5e) list_preview_fixed_pane_ParamLimits

0xc308,	// (0x00017c74) list_preview_fixed_pane_cp_ParamLimits

0xc308,	// (0x00017c74) list_preview_fixed_pane_cp

0xc314,	// (0x00017c80) popup_preview_fixed_window_g1_ParamLimits

0xc314,	// (0x00017c80) popup_preview_fixed_window_g1

0xc320,	// (0x00017c8c) popup_preview_fixed_window_g2_ParamLimits

0xc320,	// (0x00017c8c) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x0001b4e3) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x0001b4e3) popup_preview_fixed_window_g

0x4fbb,	// (0x00010927) aid_navi_side_left_pane_ParamLimits

0x4fd0,	// (0x0001093c) aid_navi_side_right_pane_ParamLimits

0x4fe8,	// (0x00010954) navi_icon_pane_stacon_ParamLimits

0x4ffc,	// (0x00010968) navi_navi_pane_stacon_ParamLimits

0x4fe8,	// (0x00010954) navi_text_pane_stacon_ParamLimits

0x3e2f,	// (0x0000f79b) main_text_info_pane

0xc746,	// (0x000180b2) listscroll_text_info_pane

0xc74e,	// (0x000180ba) list_text_info_pane_ParamLimits

0xc74e,	// (0x000180ba) list_text_info_pane

0xc75d,	// (0x000180c9) scroll_pane_cp24_ParamLimits

0xc75d,	// (0x000180c9) scroll_pane_cp24

0xc77b,	// (0x000180e7) list_text_info_pane_t1_ParamLimits

0xc77b,	// (0x000180e7) list_text_info_pane_t1

0x87bb,	// (0x00014127) popup_fast_swap2_window_ParamLimits

0x87bb,	// (0x00014127) popup_fast_swap2_window

0xc7a0,	// (0x0001810c) aid_size_cell_fast2

0x3e2f,	// (0x0000f79b) bg_popup_window_pane_cp17

0x97c2,	// (0x0001512e) heading_pane_cp2

0x6c5b,	// (0x000125c7) listscroll_fast2_pane

0xc7aa,	// (0x00018116) grid_fast2_pane

0xc7b4,	// (0x00018120) listscroll_fast2_pane_g1

0xc7be,	// (0x0001812a) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x0001b566) listscroll_fast2_pane_g

0x7877,	// (0x000131e3) scroll_pane_cp26

0xc7c8,	// (0x00018134) cell_fast2_pane_ParamLimits

0xc7c8,	// (0x00018134) cell_fast2_pane

0xc7df,	// (0x0001814b) cell_fast2_pane_g1

0xc7e8,	// (0x00018154) cell_fast2_pane_g2

0xc7f1,	// (0x0001815d) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x0001b56b) cell_fast2_pane_g

0x6d54,	// (0x000126c0) grid_highlight_pane_cp9

0x6d69,	// (0x000126d5) main_eswt_pane_ParamLimits

0x6d69,	// (0x000126d5) main_eswt_pane

0xc772,	// (0x000180de) list_single_text_info_pane

0xc7f9,	// (0x00018165) eswt_ctrl_button_pane

0xc7f9,	// (0x00018165) eswt_ctrl_canvas_pane

0xc801,	// (0x0001816d) eswt_ctrl_combo_pane

0xc7f9,	// (0x00018165) eswt_ctrl_default_pane

0xc7f9,	// (0x00018165) eswt_ctrl_label_pane

0xc809,	// (0x00018175) eswt_ctrl_wait_pane

0xc811,	// (0x0001817d) eswt_shell_pane

0x3e2f,	// (0x0000f79b) listscroll_eswt_app_pane

0xc831,	// (0x0001819d) popup_eswt_tasktip_window_ParamLimits

0xc831,	// (0x0001819d) popup_eswt_tasktip_window

0x93fb,	// (0x00014d67) bg_popup_window_pane_cp18

0xc842,	// (0x000181ae) eswt_control_pane_g1_ParamLimits

0xc842,	// (0x000181ae) eswt_control_pane_g1

0xc84f,	// (0x000181bb) eswt_control_pane_g2_ParamLimits

0xc84f,	// (0x000181bb) eswt_control_pane_g2

0xc85c,	// (0x000181c8) eswt_control_pane_g3_ParamLimits

0xc85c,	// (0x000181c8) eswt_control_pane_g3

0xc869,	// (0x000181d5) eswt_control_pane_g4_ParamLimits

0xc869,	// (0x000181d5) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x0001b572) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x0001b572) eswt_control_pane_g

0x7593,	// (0x00012eff) bg_button_pane_ParamLimits

0x7593,	// (0x00012eff) bg_button_pane

0x6d69,	// (0x000126d5) common_borders_pane_copy2_ParamLimits

0x6d69,	// (0x000126d5) common_borders_pane_copy2

0xc876,	// (0x000181e2) control_button_pane_g1_ParamLimits

0xc876,	// (0x000181e2) control_button_pane_g1

0xc882,	// (0x000181ee) control_button_pane_g2_ParamLimits

0xc882,	// (0x000181ee) control_button_pane_g2

0xc88e,	// (0x000181fa) control_button_pane_g3_ParamLimits

0xc88e,	// (0x000181fa) control_button_pane_g3

0x0002,

0xfc0f,	// (0x0001b57b) control_button_pane_g_ParamLimits

0xfc0f,	// (0x0001b57b) control_button_pane_g

0xc8a2,	// (0x0001820e) control_button_pane_t1

0xc8b0,	// (0x0001821c) control_button_pane_t2

0x0001,

0xfc16,	// (0x0001b582) control_button_pane_t

0x92df,	// (0x00014c4b) bg_button_pane_g1

0x92ef,	// (0x00014c5b) bg_button_pane_g2

0x92e7,	// (0x00014c53) bg_button_pane_g3

0x92ff,	// (0x00014c6b) bg_button_pane_g4

0x92f7,	// (0x00014c63) bg_button_pane_g5

0x9307,	// (0x00014c73) bg_button_pane_g6

0x930f,	// (0x00014c7b) bg_button_pane_g7

0x931f,	// (0x00014c8b) bg_button_pane_g8

0x9317,	// (0x00014c83) bg_button_pane_g9

0x0008,

0xf872,	// (0x0001b1de) bg_button_pane_g

0xbc3e,	// (0x000175aa) common_borders_pane_ParamLimits

0xbc3e,	// (0x000175aa) common_borders_pane

0xc842,	// (0x000181ae) eswt_control_pane_g1_copy1_ParamLimits

0xc842,	// (0x000181ae) eswt_control_pane_g1_copy1

0xc84f,	// (0x000181bb) eswt_control_pane_g2_copy1_ParamLimits

0xc84f,	// (0x000181bb) eswt_control_pane_g2_copy1

0xc85c,	// (0x000181c8) eswt_control_pane_g3_copy1_ParamLimits

0xc85c,	// (0x000181c8) eswt_control_pane_g3_copy1

0xc869,	// (0x000181d5) eswt_control_pane_g4_copy1_ParamLimits

0xc869,	// (0x000181d5) eswt_control_pane_g4_copy1

0xbc79,	// (0x000175e5) bg_eswt_ctrl_canvas_pane_g1

0xbc3e,	// (0x000175aa) common_borders_pane_cp2_ParamLimits

0xbc3e,	// (0x000175aa) common_borders_pane_cp2

0xbc3e,	// (0x000175aa) common_borders_pane_cp3_ParamLimits

0xbc3e,	// (0x000175aa) common_borders_pane_cp3

0xc8be,	// (0x0001822a) separator_horizontal_pane

0xc8c6,	// (0x00018232) separator_vertical_pane

0xc842,	// (0x000181ae) eswt_control_pane_g1_copy2_ParamLimits

0xc842,	// (0x000181ae) eswt_control_pane_g1_copy2

0xc84f,	// (0x000181bb) eswt_control_pane_g2_copy2_ParamLimits

0xc84f,	// (0x000181bb) eswt_control_pane_g2_copy2

0xc85c,	// (0x000181c8) eswt_control_pane_g3_copy2_ParamLimits

0xc85c,	// (0x000181c8) eswt_control_pane_g3_copy2

0xc869,	// (0x000181d5) eswt_control_pane_g4_copy2_ParamLimits

0xc869,	// (0x000181d5) eswt_control_pane_g4_copy2

0x3e2f,	// (0x0000f79b) common_borders_pane_cp4

0xc8cf,	// (0x0001823b) separator_horizontal_pane_g1

0xc8d8,	// (0x00018244) separator_horizontal_pane_g2

0xc8e1,	// (0x0001824d) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x0001b587) separator_horizontal_pane_g

0xc842,	// (0x000181ae) eswt_control_pane_g1_copy3_ParamLimits

0xc842,	// (0x000181ae) eswt_control_pane_g1_copy3

0xc84f,	// (0x000181bb) eswt_control_pane_g2_copy3_ParamLimits

0xc84f,	// (0x000181bb) eswt_control_pane_g2_copy3

0xc85c,	// (0x000181c8) eswt_control_pane_g3_copy3_ParamLimits

0xc85c,	// (0x000181c8) eswt_control_pane_g3_copy3

0xc869,	// (0x000181d5) eswt_control_pane_g4_copy3_ParamLimits

0xc869,	// (0x000181d5) eswt_control_pane_g4_copy3

0x3e2f,	// (0x0000f79b) common_borders_pane_cp5

0xc8ea,	// (0x00018256) separator_vertical_pane_g1

0xc8f3,	// (0x0001825f) separator_vertical_pane_g2

0xc8fc,	// (0x00018268) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x0001b58e) separator_vertical_pane_g

0xc842,	// (0x000181ae) eswt_control_pane_g1_copy4_ParamLimits

0xc842,	// (0x000181ae) eswt_control_pane_g1_copy4

0xc84f,	// (0x000181bb) eswt_control_pane_g2_copy4_ParamLimits

0xc84f,	// (0x000181bb) eswt_control_pane_g2_copy4

0xc85c,	// (0x000181c8) eswt_control_pane_g3_copy4_ParamLimits

0xc85c,	// (0x000181c8) eswt_control_pane_g3_copy4

0xc869,	// (0x000181d5) eswt_control_pane_g4_copy4_ParamLimits

0xc869,	// (0x000181d5) eswt_control_pane_g4_copy4

0xc905,	// (0x00018271) eswt_ctrl_combo_button_pane

0xc90d,	// (0x00018279) eswt_ctrl_input_pane

0xc915,	// (0x00018281) popup_choice_list_window_cp70

0xc91d,	// (0x00018289) eswt_ctrl_input_pane_t1

0x3e2f,	// (0x0000f79b) input_focus_pane_cp70

0xbc3e,	// (0x000175aa) bg_button_pane_cp70_ParamLimits

0xbc3e,	// (0x000175aa) bg_button_pane_cp70

0xc92b,	// (0x00018297) eswt_ctrl_combo_button_pane_g1

0xc933,	// (0x0001829f) wait_bar_pane_cp70

0x93fb,	// (0x00014d67) bg_popup_window_pane_cp70_ParamLimits

0x93fb,	// (0x00014d67) bg_popup_window_pane_cp70

0xc93b,	// (0x000182a7) popup_eswt_tasktip_window_t1

0xc951,	// (0x000182bd) wait_bar_pane_cp71_ParamLimits

0xc951,	// (0x000182bd) wait_bar_pane_cp71

0xc95d,	// (0x000182c9) grid_eswt_app_pane

0x7b99,	// (0x00013505) scroll_pane_cp70

0xc966,	// (0x000182d2) cell_eswt_app_pane_ParamLimits

0xc966,	// (0x000182d2) cell_eswt_app_pane

0xc998,	// (0x00018304) cell_eswt_app_pane_g1_ParamLimits

0xc998,	// (0x00018304) cell_eswt_app_pane_g1

0xc9c7,	// (0x00018333) cell_eswt_app_pane_g2_ParamLimits

0xc9c7,	// (0x00018333) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x0001b595) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x0001b595) cell_eswt_app_pane_g

0xc9f0,	// (0x0001835c) cell_eswt_app_pane_t1_ParamLimits

0xc9f0,	// (0x0001835c) cell_eswt_app_pane_t1

0xca22,	// (0x0001838e) grid_highlight_pane_cp70_ParamLimits

0xca22,	// (0x0001838e) grid_highlight_pane_cp70

0xa8e3,	// (0x0001624f) set_content_pane_g1

0x868f,	// (0x00013ffb) status_small_volume_pane

0x5d75,	// (0x000116e1) status_small_volume_pane_g1

0x5d7d,	// (0x000116e9) volume_small2_pane

0x5d86,	// (0x000116f2) volume_small2_pane_g1

0x5d8f,	// (0x000116fb) volume_small2_pane_g2

0x5d98,	// (0x00011704) volume_small2_pane_g3

0x5da1,	// (0x0001170d) volume_small2_pane_g4

0x5daa,	// (0x00011716) volume_small2_pane_g5

0x5db3,	// (0x0001171f) volume_small2_pane_g6

0x5dbc,	// (0x00011728) volume_small2_pane_g7

0x5dc5,	// (0x00011731) volume_small2_pane_g8

0x5dce,	// (0x0001173a) volume_small2_pane_g9

0x5dd7,	// (0x00011743) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x0001b59a) volume_small2_pane_g

0xc099,	// (0x00017a05) fep_vkb_top_text_pane_g1_ParamLimits

0xc0b4,	// (0x00017a20) fep_vkb_top_text_pane_t1_ParamLimits

0xc32c,	// (0x00017c98) popup_preview_fixed_window_g3_ParamLimits

0xc32c,	// (0x00017c98) popup_preview_fixed_window_g3

0x8ccc,	// (0x00014638) popup_toolbar_trans_pane

0xa788,	// (0x000160f4) aid_height_set_list_ParamLimits

0xa799,	// (0x00016105) aid_size_parent_ParamLimits

0x876d,	// (0x000140d9) list_highlight_pane_cp2_ParamLimits

0xa8e3,	// (0x0001624f) set_content_pane_g1_ParamLimits

0xaa35,	// (0x000163a1) list_single_image_pane_ParamLimits

0xaa35,	// (0x000163a1) list_single_image_pane

0xca2e,	// (0x0001839a) aid_size_cell_image_ParamLimits

0xca2e,	// (0x0001839a) aid_size_cell_image

0xca3b,	// (0x000183a7) grid_single_image_pane_ParamLimits

0xca3b,	// (0x000183a7) grid_single_image_pane

0x75b9,	// (0x00012f25) list_single_image_pane_g1_ParamLimits

0x75b9,	// (0x00012f25) list_single_image_pane_g1

0x75c5,	// (0x00012f31) list_single_image_pane_g2_ParamLimits

0x75c5,	// (0x00012f31) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x0001b5af) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x0001b5af) list_single_image_pane_g

0xca49,	// (0x000183b5) list_single_image_pane_t1_ParamLimits

0xca49,	// (0x000183b5) list_single_image_pane_t1

0xca5f,	// (0x000183cb) cell_image_list_pane_ParamLimits

0xca5f,	// (0x000183cb) cell_image_list_pane

0xca75,	// (0x000183e1) cell_image_list_pane_g1

0xca7e,	// (0x000183ea) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x0001b5b4) cell_image_list_pane_g

0xca87,	// (0x000183f3) aid_size_cell_tb_trans_pane

0x7593,	// (0x00012eff) bg_tb_trans_pane

0xca99,	// (0x00018405) grid_tb_trans_pane

0x92df,	// (0x00014c4b) bg_tb_trans_pane_g1

0x92ef,	// (0x00014c5b) bg_tb_trans_pane_g2

0x92e7,	// (0x00014c53) bg_tb_trans_pane_g3

0x92ff,	// (0x00014c6b) bg_tb_trans_pane_g4

0x92f7,	// (0x00014c63) bg_tb_trans_pane_g5

0x931f,	// (0x00014c8b) bg_tb_trans_pane_g6

0x9317,	// (0x00014c83) bg_tb_trans_pane_g7

0x9307,	// (0x00014c73) bg_tb_trans_pane_g8

0x930f,	// (0x00014c7b) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x0001b5b9) bg_tb_trans_pane_g

0xcaad,	// (0x00018419) cell_toolbar_trans_pane_ParamLimits

0xcaad,	// (0x00018419) cell_toolbar_trans_pane

0xbc79,	// (0x000175e5) cell_toolbar_trans_pane_g1

0xb844,	// (0x000171b0) list_form2_midp_pane_t1

0xb852,	// (0x000171be) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0001b456) list_form2_midp_pane_t

0xb860,	// (0x000171cc) scroll_pane_cp51_ParamLimits

0xba7d,	// (0x000173e9) form2_midp_wait_pane_g1

0xba86,	// (0x000173f2) form2_midp_wait_pane_g2

0xba8f,	// (0x000173fb) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0001b46b) form2_midp_wait_pane_g

0x6757,	// (0x000120c3) list_highlight_pane_cp21_ParamLimits

0xbad3,	// (0x0001743f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbae2,	// (0x0001744e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa9da,	// (0x00016346) list_single_2graphic_im_pane_ParamLimits

0xa9da,	// (0x00016346) list_single_2graphic_im_pane

0xcad3,	// (0x0001843f) list_single_2graphic_im_pane_g1_ParamLimits

0xcad3,	// (0x0001843f) list_single_2graphic_im_pane_g1

0xcae4,	// (0x00018450) list_single_2graphic_im_pane_g2_ParamLimits

0xcae4,	// (0x00018450) list_single_2graphic_im_pane_g2

0xcaf0,	// (0x0001845c) list_single_2graphic_im_pane_g3_ParamLimits

0xcaf0,	// (0x0001845c) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x0001b5cc) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x0001b5cc) list_single_2graphic_im_pane_g

0xcb10,	// (0x0001847c) list_single_2graphic_im_pane_t1_ParamLimits

0xcb10,	// (0x0001847c) list_single_2graphic_im_pane_t1

0xc338,	// (0x00017ca4) list_single_graphic_2heading_pane_fp_ParamLimits

0xc338,	// (0x00017ca4) list_single_graphic_2heading_pane_fp

0xc3a0,	// (0x00017d0c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc3a0,	// (0x00017d0c) list_single_graphic_2heading_pane_fp_g1

0xc351,	// (0x00017cbd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc351,	// (0x00017cbd) list_single_graphic_2heading_pane_fp_g2

0xc35d,	// (0x00017cc9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc35d,	// (0x00017cc9) list_single_graphic_2heading_pane_fp_g3

0xc369,	// (0x00017cd5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc369,	// (0x00017cd5) list_single_graphic_2heading_pane_fp_g4

0xc37d,	// (0x00017ce9) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc37d,	// (0x00017ce9) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0001b4f3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0001b4f3) list_single_graphic_2heading_pane_fp_g

0xcb41,	// (0x000184ad) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcb41,	// (0x000184ad) list_single_graphic_2heading_pane_fp_t1

0xc3d8,	// (0x00017d44) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc3d8,	// (0x00017d44) list_single_graphic_2heading_pane_fp_t2

0xcb57,	// (0x000184c3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcb57,	// (0x000184c3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x0001b5d5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x0001b5d5) list_single_graphic_2heading_pane_fp_t

0xbd19,	// (0x00017685) fep_hwr_write_pane_g5_ParamLimits

0xbd19,	// (0x00017685) fep_hwr_write_pane_g5

0xbd25,	// (0x00017691) fep_hwr_write_pane_g6_ParamLimits

0xbd25,	// (0x00017691) fep_hwr_write_pane_g6

0xc811,	// (0x0001817d) eswt_shell_pane_ParamLimits

0x93fb,	// (0x00014d67) bg_popup_window_pane_cp18_ParamLimits

0xa6b7,	// (0x00016023) heading_pane_cp70

0xc93b,	// (0x000182a7) popup_eswt_tasktip_window_t1_ParamLimits

0x8dff,	// (0x0001476b) aid_touch_tab_arrow_left

0x8e0e,	// (0x0001477a) aid_touch_tab_arrow_right

0x66ab,	// (0x00012017) title_pane_g3_ParamLimits

0x66ab,	// (0x00012017) title_pane_g3

0x7462,	// (0x00012dce) set_value_pane_g1

0x8ccc,	// (0x00014638) popup_toolbar_trans_pane_ParamLimits

0xca87,	// (0x000183f3) aid_size_cell_tb_trans_pane_ParamLimits

0x7593,	// (0x00012eff) bg_tb_trans_pane_ParamLimits

0xca99,	// (0x00018405) grid_tb_trans_pane_ParamLimits

0x69fb,	// (0x00012367) cont_note_pane_ParamLimits

0x69fb,	// (0x00012367) cont_note_pane

0x6d69,	// (0x000126d5) cont_snote2_single_text_pane_ParamLimits

0x6d69,	// (0x000126d5) cont_snote2_single_text_pane

0x6d69,	// (0x000126d5) cont_snote2_single_graphic_pane_ParamLimits

0x6d69,	// (0x000126d5) cont_snote2_single_graphic_pane

0x99de,	// (0x0001534a) cont_note_wait_pane_ParamLimits

0x99de,	// (0x0001534a) cont_note_wait_pane

0x99de,	// (0x0001534a) cont_note_image_pane_ParamLimits

0x99de,	// (0x0001534a) cont_note_image_pane

0xcb6d,	// (0x000184d9) popup_note2_window_g1_ParamLimits

0xcb6d,	// (0x000184d9) popup_note2_window_g1

0xcb9e,	// (0x0001850a) popup_note2_window_t1_ParamLimits

0xcb9e,	// (0x0001850a) popup_note2_window_t1

0xcbe3,	// (0x0001854f) popup_note2_window_t2_ParamLimits

0xcbe3,	// (0x0001854f) popup_note2_window_t2

0xcc28,	// (0x00018594) popup_note2_window_t3_ParamLimits

0xcc28,	// (0x00018594) popup_note2_window_t3

0xcc6d,	// (0x000185d9) popup_note2_window_t4_ParamLimits

0xcc6d,	// (0x000185d9) popup_note2_window_t4

0x6a7f,	// (0x000123eb) popup_note2_window_t5_ParamLimits

0x6a7f,	// (0x000123eb) popup_note2_window_t5

0x0004,

0xfc75,	// (0x0001b5e1) popup_note2_window_t_ParamLimits

0xfc75,	// (0x0001b5e1) popup_note2_window_t

0xcc9c,	// (0x00018608) popup_note2_image_window_g1_ParamLimits

0xcc9c,	// (0x00018608) popup_note2_image_window_g1

0xcca8,	// (0x00018614) popup_note2_image_window_g2_ParamLimits

0xcca8,	// (0x00018614) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x0001b5ec) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x0001b5ec) popup_note2_image_window_g

0xccba,	// (0x00018626) popup_note2_image_window_t1_ParamLimits

0xccba,	// (0x00018626) popup_note2_image_window_t1

0xccd2,	// (0x0001863e) popup_note2_image_window_t2_ParamLimits

0xccd2,	// (0x0001863e) popup_note2_image_window_t2

0xccea,	// (0x00018656) popup_note2_image_window_t3_ParamLimits

0xccea,	// (0x00018656) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x0001b5f1) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x0001b5f1) popup_note2_image_window_t

0x99ec,	// (0x00015358) popup_note2_wait_window_g1_ParamLimits

0x99ec,	// (0x00015358) popup_note2_wait_window_g1

0xcd06,	// (0x00018672) popup_note2_wait_window_g2_ParamLimits

0xcd06,	// (0x00018672) popup_note2_wait_window_g2

0x9a04,	// (0x00015370) popup_note2_wait_window_g3_ParamLimits

0x9a04,	// (0x00015370) popup_note2_wait_window_g3

0x0002,

0xfc8c,	// (0x0001b5f8) popup_note2_wait_window_g_ParamLimits

0xfc8c,	// (0x0001b5f8) popup_note2_wait_window_g

0xcd12,	// (0x0001867e) popup_note2_wait_window_t1_ParamLimits

0xcd12,	// (0x0001867e) popup_note2_wait_window_t1

0xcd30,	// (0x0001869c) popup_note2_wait_window_t2_ParamLimits

0xcd30,	// (0x0001869c) popup_note2_wait_window_t2

0xcd4e,	// (0x000186ba) popup_note2_wait_window_t3_ParamLimits

0xcd4e,	// (0x000186ba) popup_note2_wait_window_t3

0xcd60,	// (0x000186cc) popup_note2_wait_window_t4_ParamLimits

0xcd60,	// (0x000186cc) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0001b5ff) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0001b5ff) popup_note2_wait_window_t

0xcd72,	// (0x000186de) wait_bar2_pane_ParamLimits

0xcd72,	// (0x000186de) wait_bar2_pane

0xcd8a,	// (0x000186f6) popup_snote2_single_text_window_g1_ParamLimits

0xcd8a,	// (0x000186f6) popup_snote2_single_text_window_g1

0xcdb2,	// (0x0001871e) popup_snote2_single_text_window_t1_ParamLimits

0xcdb2,	// (0x0001871e) popup_snote2_single_text_window_t1

0xcdfe,	// (0x0001876a) popup_snote2_single_text_window_t2_ParamLimits

0xcdfe,	// (0x0001876a) popup_snote2_single_text_window_t2

0xce4a,	// (0x000187b6) popup_snote2_single_text_window_t3_ParamLimits

0xce4a,	// (0x000187b6) popup_snote2_single_text_window_t3

0xce8b,	// (0x000187f7) popup_snote2_single_text_window_t4_ParamLimits

0xce8b,	// (0x000187f7) popup_snote2_single_text_window_t4

0xcec1,	// (0x0001882d) popup_snote2_single_text_window_t5_ParamLimits

0xcec1,	// (0x0001882d) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0001b608) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0001b608) popup_snote2_single_text_window_t

0xceec,	// (0x00018858) popup_snote2_single_graphic_window_g1_ParamLimits

0xceec,	// (0x00018858) popup_snote2_single_graphic_window_g1

0xcf14,	// (0x00018880) popup_snote2_single_graphic_window_g2_ParamLimits

0xcf14,	// (0x00018880) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0001b613) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0001b613) popup_snote2_single_graphic_window_g

0xcf3c,	// (0x000188a8) popup_snote2_single_graphic_window_t1_ParamLimits

0xcf3c,	// (0x000188a8) popup_snote2_single_graphic_window_t1

0xcf88,	// (0x000188f4) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf88,	// (0x000188f4) popup_snote2_single_graphic_window_t2

0xce4a,	// (0x000187b6) popup_snote2_single_graphic_window_t3_ParamLimits

0xce4a,	// (0x000187b6) popup_snote2_single_graphic_window_t3

0xce8b,	// (0x000187f7) popup_snote2_single_graphic_window_t4_ParamLimits

0xce8b,	// (0x000187f7) popup_snote2_single_graphic_window_t4

0xcec1,	// (0x0001882d) popup_snote2_single_graphic_window_t5_ParamLimits

0xcec1,	// (0x0001882d) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0001b618) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0001b618) popup_snote2_single_graphic_window_t

0xb70a,	// (0x00017076) clock_nsta_pane_cp2_t1

0xb70a,	// (0x00017076) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0001b42c) clock_nsta_pane_cp2_t

0x75ad,	// (0x00012f19) form_field_data_wide_pane_g1_ParamLimits

0x75b9,	// (0x00012f25) form_field_data_wide_pane_g2_ParamLimits

0x75b9,	// (0x00012f25) form_field_data_wide_pane_g2

0x75c5,	// (0x00012f31) form_field_data_wide_pane_g3_ParamLimits

0x75c5,	// (0x00012f31) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0001affe) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0001affe) form_field_data_wide_pane_g

0xb5e5,	// (0x00016f51) grid_touch_3_pane_ParamLimits

0xb5e5,	// (0x00016f51) grid_touch_3_pane

0xcfd4,	// (0x00018940) cell_touch_3_pane_ParamLimits

0xcfd4,	// (0x00018940) cell_touch_3_pane

0xbc79,	// (0x000175e5) cell_touch_3_pane_g1

0xbc79,	// (0x000175e5) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0001b4b1) cell_touch_3_pane_g

0x6ab1,	// (0x0001241d) cont_query_data_pane

0x6ab9,	// (0x00012425) cont_query_data_pane_cp1

0xd007,	// (0x00018973) button_value_adjust_pane_cp7

0xd00f,	// (0x0001897b) query_popup_pane_cp3

0x7e2f,	// (0x0001379b) bg_popup_sub_pane_cp22_ParamLimits

0x50ff,	// (0x00010a6b) navi_navi_volume_pane_cp2

0x511a,	// (0x00010a86) popup_side_volume_key_window_g2

0x5129,	// (0x00010a95) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001b090) popup_side_volume_key_window_g

0x5146,	// (0x00010ab2) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001b097) popup_side_volume_key_window_t

0x8176,	// (0x00013ae2) popup_side_volume_key_window_ParamLimits

0x717c,	// (0x00012ae8) list_double_graphic_pane_g4_ParamLimits

0x717c,	// (0x00012ae8) list_double_graphic_pane_g4

0xaa09,	// (0x00016375) list_single_2heading_msg_pane_ParamLimits

0xaa09,	// (0x00016375) list_single_2heading_msg_pane

0xd040,	// (0x000189ac) list_single_2heading_msg_pane_g1_ParamLimits

0xd040,	// (0x000189ac) list_single_2heading_msg_pane_g1

0x6fab,	// (0x00012917) list_single_2heading_msg_pane_g2_ParamLimits

0x6fab,	// (0x00012917) list_single_2heading_msg_pane_g2

0xd04c,	// (0x000189b8) list_single_2heading_msg_pane_g3_ParamLimits

0xd04c,	// (0x000189b8) list_single_2heading_msg_pane_g3

0xd058,	// (0x000189c4) list_single_2heading_msg_pane_g4_ParamLimits

0xd058,	// (0x000189c4) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0001b623) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0001b623) list_single_2heading_msg_pane_g

0xd070,	// (0x000189dc) list_single_2heading_msg_pane_t1_ParamLimits

0xd070,	// (0x000189dc) list_single_2heading_msg_pane_t1

0xd098,	// (0x00018a04) list_single_2heading_msg_pane_t2_ParamLimits

0xd098,	// (0x00018a04) list_single_2heading_msg_pane_t2

0xd0c7,	// (0x00018a33) list_single_2heading_msg_pane_t3_ParamLimits

0xd0c7,	// (0x00018a33) list_single_2heading_msg_pane_t3

0xd100,	// (0x00018a6c) list_single_2heading_msg_pane_t4_ParamLimits

0xd100,	// (0x00018a6c) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0001b62c) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0001b62c) list_single_2heading_msg_pane_t

0x407d,	// (0x0000f9e9) title_pane_g4_ParamLimits

0x407d,	// (0x0000f9e9) title_pane_g4

0x4f0b,	// (0x00010877) title_pane_stacon_g3_ParamLimits

0x4f0b,	// (0x00010877) title_pane_stacon_g3

0xcb04,	// (0x00018470) list_single_2graphic_im_pane_g4_ParamLimits

0xcb04,	// (0x00018470) list_single_2graphic_im_pane_g4

0xa454,	// (0x00015dc0) popup_side_volume_key_window_cp

0xad53,	// (0x000166bf) main_idle_act2_pane_t1

0x553d,	// (0x00010ea9) toolbar_button_pane_g10

0x6f61,	// (0x000128cd) popup_toolbar_window_cp1

0xb6fb,	// (0x00017067) clock_nsta_pane_cp_t1

0xb6fb,	// (0x00017067) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0001b427) clock_nsta_pane_cp_t

0x50ff,	// (0x00010a6b) navi_navi_volume_pane_cp2_ParamLimits

0x510e,	// (0x00010a7a) popup_side_volume_key_window_g1_ParamLimits

0x511a,	// (0x00010a86) popup_side_volume_key_window_g2_ParamLimits

0x5129,	// (0x00010a95) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001b090) popup_side_volume_key_window_g_ParamLimits

0x59c6,	// (0x00011332) fep_hwr_aid_pane

0x5a6f,	// (0x000113db) bg_fep_hwr_top_pane_g4_ParamLimits

0xbce9,	// (0x00017655) fep_hwr_top_pane_g1_ParamLimits

0xbcfb,	// (0x00017667) fep_hwr_top_pane_g2_ParamLimits

0x5a8f,	// (0x000113fb) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0001b47c) fep_hwr_top_pane_g_ParamLimits

0x5aa4,	// (0x00011410) fep_hwr_top_text_pane_ParamLimits

0xa209,	// (0x00015b75) aid_touch_tab_arrow_arrow_2

0xa212,	// (0x00015b7e) aid_touch_tab_arrow_left_2

0x59da,	// (0x00011346) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5a11,	// (0x0001137d) fep_hwr_prediction_pane

0xbe93,	// (0x000177ff) fep_vkb_prediction_pane

0xbf99,	// (0x00017905) fep_vkb_side_pane_g3_ParamLimits

0xbf99,	// (0x00017905) fep_vkb_side_pane_g3

0x5c33,	// (0x0001159f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5ca4,	// (0x00011610) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5cb1,	// (0x0001161d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x0001b52b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5de0,	// (0x0001174c) fep_hwr_prediction_pane_g1

0x5dea,	// (0x00011756) fep_hwr_prediction_pane_g2

0x5df2,	// (0x0001175e) fep_hwr_prediction_pane_g3

0x5dfa,	// (0x00011766) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0001b635) fep_hwr_prediction_pane_g

0xd125,	// (0x00018a91) fep_vkb_prediction_pane_g1

0xd12f,	// (0x00018a9b) fep_vkb_prediction_pane_g2

0xd137,	// (0x00018aa3) fep_vkb_prediction_pane_g3

0xd13f,	// (0x00018aab) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0001b63e) fep_vkb_prediction_pane_g

0x5846,	// (0x000111b2) slider_set_pane_g3

0x585a,	// (0x000111c6) slider_set_pane_g4

0x5872,	// (0x000111de) slider_set_pane_g5

0x5846,	// (0x000111b2) slider_set_pane_g6

0x5888,	// (0x000111f4) slider_set_pane_g7

0xa92a,	// (0x00016296) slider_form_pane_g3

0xa933,	// (0x0001629f) slider_form_pane_g4

0xa93b,	// (0x000162a7) slider_form_pane_g5

0xa92a,	// (0x00016296) slider_form_pane_g6

0xa943,	// (0x000162af) slider_form_pane_g7

0xb04d,	// (0x000169b9) slider_set_pane_vc_g3

0xb056,	// (0x000169c2) slider_set_pane_vc_g4

0xb05f,	// (0x000169cb) slider_set_pane_vc_g5

0xb04d,	// (0x000169b9) slider_set_pane_vc_g6

0xb068,	// (0x000169d4) slider_set_pane_vc_g7

0xb04d,	// (0x000169b9) slider_form_pane_vc_g1

0xb056,	// (0x000169c2) slider_form_pane_vc_g2

0xb05f,	// (0x000169cb) slider_form_pane_vc_g3

0xb04d,	// (0x000169b9) slider_form_pane_vc_g4

0xb3ef,	// (0x00016d5b) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0001b400) slider_form_pane_vc_g

0x3e2f,	// (0x0000f79b) main_idle_act3_pane

0xd147,	// (0x00018ab3) ai3_links_pane

0xd150,	// (0x00018abc) popup_ai3_data_window_ParamLimits

0xd150,	// (0x00018abc) popup_ai3_data_window

0x3e2f,	// (0x0000f79b) grid_ai3_links_pane

0xd16e,	// (0x00018ada) cell_ai3_links_pane_ParamLimits

0xd16e,	// (0x00018ada) cell_ai3_links_pane

0xd188,	// (0x00018af4) bg_popup_sub_pane_cp11

0xd195,	// (0x00018b01) cell_ai3_links_pane_g1

0x3e2f,	// (0x0000f79b) bg_popup_sub_pane_cp12

0xd1ba,	// (0x00018b26) heading_ai3_data_pane

0xd1c2,	// (0x00018b2e) list_ai3_gene_pane

0xd1ce,	// (0x00018b3a) popup_ai3_data_window_g1

0xd1d6,	// (0x00018b42) heading_ai3_data_pane_g1

0xd1de,	// (0x00018b4a) heading_ai3_data_pane_t1

0xd1ec,	// (0x00018b58) list_double_ai3_gene_pane_ParamLimits

0xd1ec,	// (0x00018b58) list_double_ai3_gene_pane

0xd1f9,	// (0x00018b65) list_single_ai3_gene_pane_ParamLimits

0xd1f9,	// (0x00018b65) list_single_ai3_gene_pane

0xbc3e,	// (0x000175aa) list_highlight_pane_cp7_ParamLimits

0xbc3e,	// (0x000175aa) list_highlight_pane_cp7

0xd206,	// (0x00018b72) list_single_a13_gene_pane_t1_ParamLimits

0xd206,	// (0x00018b72) list_single_a13_gene_pane_t1

0xd21d,	// (0x00018b89) list_single_ai3_gene_pane_g1

0xd226,	// (0x00018b92) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0001b647) list_single_ai3_gene_pane_g

0xd22e,	// (0x00018b9a) list_double_ai3_gene_pane_g1_ParamLimits

0xd22e,	// (0x00018b9a) list_double_ai3_gene_pane_g1

0xd23a,	// (0x00018ba6) list_double_ai3_gene_pane_t1_ParamLimits

0xd23a,	// (0x00018ba6) list_double_ai3_gene_pane_t1

0xd256,	// (0x00018bc2) list_double_ai3_gene_pane_t2_ParamLimits

0xd256,	// (0x00018bc2) list_double_ai3_gene_pane_t2

0xd26b,	// (0x00018bd7) list_double_ai3_gene_pane_t3_ParamLimits

0xd26b,	// (0x00018bd7) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0001b64c) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0001b64c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd020,	// (0x0001898c) aid_size_min_col_2

0xd02a,	// (0x00018996) aid_size_min_msg_ParamLimits

0xd02a,	// (0x00018996) aid_size_min_msg

0xc0a5,	// (0x00017a11) fep_vkb_top_text_pane_g2_ParamLimits

0xc0a5,	// (0x00017a11) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0001b4ac) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0001b4ac) fep_vkb_top_text_pane_g

0x3e2f,	// (0x0000f79b) main_hc_apps_shell_pane

0xd288,	// (0x00018bf4) grid_hc_apps_pane_ParamLimits

0xd288,	// (0x00018bf4) grid_hc_apps_pane

0xd297,	// (0x00018c03) list_hc_apps_pane

0xd29f,	// (0x00018c0b) scroll_pane_cp37_ParamLimits

0xd29f,	// (0x00018c0b) scroll_pane_cp37

0xd2ab,	// (0x00018c17) cell_hc_apps_pane_ParamLimits

0xd2ab,	// (0x00018c17) cell_hc_apps_pane

0xd363,	// (0x00018ccf) cell_hc_apps_pane_g1_ParamLimits

0xd363,	// (0x00018ccf) cell_hc_apps_pane_g1

0xd394,	// (0x00018d00) cell_hc_apps_pane_g2_ParamLimits

0xd394,	// (0x00018d00) cell_hc_apps_pane_g2

0xd3b0,	// (0x00018d1c) cell_hc_apps_pane_g3_ParamLimits

0xd3b0,	// (0x00018d1c) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0001b653) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0001b653) cell_hc_apps_pane_g

0xd3d2,	// (0x00018d3e) cell_hc_apps_pane_t1_ParamLimits

0xd3d2,	// (0x00018d3e) cell_hc_apps_pane_t1

0x69fb,	// (0x00012367) grid_highlight_pane_cp10_ParamLimits

0x69fb,	// (0x00012367) grid_highlight_pane_cp10

0xd412,	// (0x00018d7e) list_single_hc_apps_pane_ParamLimits

0xd412,	// (0x00018d7e) list_single_hc_apps_pane

0xd451,	// (0x00018dbd) list_single_hc_apps_pane_g1

0xd46a,	// (0x00018dd6) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0001b65a) list_single_hc_apps_pane_g

0xd483,	// (0x00018def) list_single_hc_apps_pane_g2_copy1

0xd49f,	// (0x00018e0b) list_single_hc_apps_pane_t1

0x6757,	// (0x000120c3) bg_set_opt_pane_cp_ParamLimits

0x4e35,	// (0x000107a1) setting_slider_pane_t1_ParamLimits

0x4e4b,	// (0x000107b7) setting_slider_pane_t2_ParamLimits

0x4e65,	// (0x000107d1) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0001aee6) setting_slider_pane_t_ParamLimits

0x4e7d,	// (0x000107e9) slider_set_pane_ParamLimits

0x53ad,	// (0x00010d19) control_pane_g5_ParamLimits

0x53ad,	// (0x00010d19) control_pane_g5

0xa74b,	// (0x000160b7) slider_set_pane_g1_ParamLimits

0x583a,	// (0x000111a6) slider_set_pane_g2_ParamLimits

0x5846,	// (0x000111b2) slider_set_pane_g3_ParamLimits

0x585a,	// (0x000111c6) slider_set_pane_g4_ParamLimits

0x5872,	// (0x000111de) slider_set_pane_g5_ParamLimits

0x5846,	// (0x000111b2) slider_set_pane_g6_ParamLimits

0x5888,	// (0x000111f4) slider_set_pane_g7_ParamLimits

0xf970,	// (0x0001b2dc) slider_set_pane_g_ParamLimits

0x825b,	// (0x00013bc7) navi_icon_text_pane_ParamLimits

0x8dbe,	// (0x0001472a) aid_fill_nsta_2_ParamLimits

0x8dff,	// (0x0001476b) aid_touch_tab_arrow_left_ParamLimits

0x8e0e,	// (0x0001477a) aid_touch_tab_arrow_right_ParamLimits

0x8e7b,	// (0x000147e7) clock_nsta_pane_ParamLimits

0xa1e5,	// (0x00015b51) navi_icon_pane_g1_ParamLimits

0xa1f4,	// (0x00015b60) navi_text_pane_t1_ParamLimits

0xb818,	// (0x00017184) navi_icon_text_pane_g1_ParamLimits

0xb827,	// (0x00017193) navi_icon_text_pane_t1_ParamLimits

0xd451,	// (0x00018dbd) list_single_hc_apps_pane_g1_ParamLimits

0xd46a,	// (0x00018dd6) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0001b65a) list_single_hc_apps_pane_g_ParamLimits

0xd483,	// (0x00018def) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd49f,	// (0x00018e0b) list_single_hc_apps_pane_t1_ParamLimits

0x4d3f,	// (0x000106ab) popup_toolbar2_fixed_window_ParamLimits

0x4d3f,	// (0x000106ab) popup_toolbar2_fixed_window

0x8cc2,	// (0x0001462e) popup_toolbar2_float_window

0x3e2f,	// (0x0000f79b) bg_popup_sub_pane_cp27

0xd4cd,	// (0x00018e39) grid_toolbar2_float_pane

0x3e2f,	// (0x0000f79b) bg_popup_sub_pane_cp26

0xd4cd,	// (0x00018e39) grid_toolbar2_fixed_pane

0xd4d5,	// (0x00018e41) cell_toolbar2_fixed_pane_ParamLimits

0xd4d5,	// (0x00018e41) cell_toolbar2_fixed_pane

0xd4e5,	// (0x00018e51) cell_toolbar2_fixed_pane_g1

0xd4ee,	// (0x00018e5a) toolbar2_fixed_button_pane

0x92df,	// (0x00014c4b) toolbar2_fixed_button_pane_g1

0x92ef,	// (0x00014c5b) toolbar2_fixed_button_pane_g2

0x92e7,	// (0x00014c53) toolbar2_fixed_button_pane_g3

0x92ff,	// (0x00014c6b) toolbar2_fixed_button_pane_g4

0x92f7,	// (0x00014c63) toolbar2_fixed_button_pane_g5

0x9307,	// (0x00014c73) toolbar2_fixed_button_pane_g6

0x930f,	// (0x00014c7b) toolbar2_fixed_button_pane_g7

0x931f,	// (0x00014c8b) toolbar2_fixed_button_pane_g8

0x9317,	// (0x00014c83) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x0001b1de) toolbar2_fixed_button_pane_g

0xd517,	// (0x00018e83) cell_toolbar2_float_pane_ParamLimits

0xd517,	// (0x00018e83) cell_toolbar2_float_pane

0xd528,	// (0x00018e94) cell_toolbar2_float_pane_g1

0xd4ee,	// (0x00018e5a) toolbar2_fixed_button_pane_cp

0xbe01,	// (0x0001776d) fep_vkb_accented_list_pane_ParamLimits

0xbe01,	// (0x0001776d) fep_vkb_accented_list_pane

0x5c13,	// (0x0001157f) bg_popup_fep_shadow_pane_g9

0x83df,	// (0x00013d4b) bg_popup_fep_shadow_pane_cp3

0x785e,	// (0x000131ca) list_accented_list_pane

0xd531,	// (0x00018e9d) list_single_accented_list_pane_ParamLimits

0xd531,	// (0x00018e9d) list_single_accented_list_pane

0x83df,	// (0x00013d4b) list_highlight_pane_cp10

0xd542,	// (0x00018eae) list_single_accented_list_pane_t1

0x8c08,	// (0x00014574) popup_slider_window_ParamLimits

0x8c08,	// (0x00014574) popup_slider_window

0xd017,	// (0x00018983) aid_indentation_list_msg

0xd60e,	// (0x00018f7a) bg_popup_window_pane_cp19

0xd67c,	// (0x00018fe8) popup_slider_window_g1

0xd698,	// (0x00019004) popup_slider_window_g2

0xd6b4,	// (0x00019020) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0001b65f) popup_slider_window_g

0xd710,	// (0x0001907c) popup_slider_window_t1

0xd784,	// (0x000190f0) small_volume_slider_vertical_pane

0xbc79,	// (0x000175e5) small_volume_slider_vertical_pane_g1

0xbc79,	// (0x000175e5) small_volume_slider_vertical_pane_g2

0xd7a0,	// (0x0001910c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0001b671) small_volume_slider_vertical_pane_g

0x4aed,	// (0x00010459) area_side_right_pane_ParamLimits

0x4aed,	// (0x00010459) area_side_right_pane

0x5e02,	// (0x0001176e) aid_size_side_button_ParamLimits

0x5e02,	// (0x0001176e) aid_size_side_button

0x5e16,	// (0x00011782) grid_sctrl_middle_pane_ParamLimits

0x5e16,	// (0x00011782) grid_sctrl_middle_pane

0x5e36,	// (0x000117a2) sctrl_sk_bottom_pane

0x5e47,	// (0x000117b3) sctrl_sk_top_pane

0x5e59,	// (0x000117c5) aid_touch_sctrl_top

0x5e66,	// (0x000117d2) bg_sctrl_sk_pane_ParamLimits

0x5e66,	// (0x000117d2) bg_sctrl_sk_pane

0x5e74,	// (0x000117e0) sctrl_sk_top_pane_g1

0x5e81,	// (0x000117ed) sctrl_sk_top_pane_t1

0x5e59,	// (0x000117c5) aid_touch_sctrl_bottom

0x5e66,	// (0x000117d2) bg_sctrl_sk_pane_cp_ParamLimits

0x5e66,	// (0x000117d2) bg_sctrl_sk_pane_cp

0x5e9c,	// (0x00011808) sctrl_sk_bottom_pane_g1

0x5e81,	// (0x000117ed) sctrl_sk_bottom_pane_t1

0x5ea5,	// (0x00011811) cell_sctrl_middle_pane_ParamLimits

0x5ea5,	// (0x00011811) cell_sctrl_middle_pane

0x5ec2,	// (0x0001182e) aid_touch_sctrl_middle_ParamLimits

0x5ec2,	// (0x0001182e) aid_touch_sctrl_middle

0x5ed4,	// (0x00011840) bg_sctrl_middle_pane_ParamLimits

0x5ed4,	// (0x00011840) bg_sctrl_middle_pane

0x5c33,	// (0x0001159f) cell_sctrl_middle_pane_g1_ParamLimits

0x5c33,	// (0x0001159f) cell_sctrl_middle_pane_g1

0x5ee2,	// (0x0001184e) cell_sctrl_middle_pane_g2_ParamLimits

0x5ee2,	// (0x0001184e) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0001b67d) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0001b67d) cell_sctrl_middle_pane_g

0x92df,	// (0x00014c4b) bg_sctrl_middle_pane_g1

0x92e7,	// (0x00014c53) bg_sctrl_middle_pane_g2

0x92ef,	// (0x00014c5b) bg_sctrl_middle_pane_g3

0x92f7,	// (0x00014c63) bg_sctrl_middle_pane_g4

0x92ff,	// (0x00014c6b) bg_sctrl_middle_pane_g5

0x9307,	// (0x00014c73) bg_sctrl_middle_pane_g6

0x930f,	// (0x00014c7b) bg_sctrl_middle_pane_g7

0x9317,	// (0x00014c83) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0001b682) bg_sctrl_middle_pane_g

0x931f,	// (0x00014c8b) bg_sctrl_middle_pane_g8_copy1

0x92df,	// (0x00014c4b) bg_sctrl_sk_pane_g1

0x92ef,	// (0x00014c5b) bg_sctrl_sk_pane_g2

0x92e7,	// (0x00014c53) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x0001b1de) bg_sctrl_sk_pane_g

0x6f27,	// (0x00012893) aid_size_touch_scroll_bar

0x92ff,	// (0x00014c6b) bg_sctrl_sk_pane_g4

0x92f7,	// (0x00014c63) bg_sctrl_sk_pane_g5

0x9307,	// (0x00014c73) bg_sctrl_sk_pane_g6

0x930f,	// (0x00014c7b) bg_sctrl_sk_pane_g7

0x931f,	// (0x00014c8b) bg_sctrl_sk_pane_g8

0x9317,	// (0x00014c83) bg_sctrl_sk_pane_g9

0x881f,	// (0x0001418b) popup_fep_china_hwr2_fs_candidate_window

0x8829,	// (0x00014195) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8829,	// (0x00014195) popup_fep_china_hwr2_fs_control_window

0x5c33,	// (0x0001159f) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0001b678) sctrl_sk_top_pane_g

0xd7a9,	// (0x00019115) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7a9,	// (0x00019115) aid_fep_china_hwr2_fs_cell

0xd7bc,	// (0x00019128) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7bc,	// (0x00019128) bg_popup_fep_shadow_pane_cp4

0xd7d5,	// (0x00019141) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7d5,	// (0x00019141) bg_popup_fep_shadow_pane_cp5

0xd7e7,	// (0x00019153) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7e7,	// (0x00019153) popup_fep_china_hwr2_fs_control_bar_grid

0xd7f7,	// (0x00019163) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7ff,	// (0x0001916b) aid_fep_china_hwr2_fs_candi_cell

0x3e2f,	// (0x0000f79b) bg_popup_fep_shadow_pane_cp6

0xd809,	// (0x00019175) popup_fep_china_hwr2_fs_candidate_grid

0xd813,	// (0x0001917f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd813,	// (0x0001917f) cell_fep_china_hwr2_fs_funtion_grid

0xbc79,	// (0x000175e5) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd82b,	// (0x00019197) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd82b,	// (0x00019197) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd839,	// (0x000191a5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd839,	// (0x000191a5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0001b693) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0001b693) cell_fep_china_hwr2_fs_funtion_grid_g

0xd84f,	// (0x000191bb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd84f,	// (0x000191bb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd864,	// (0x000191d0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd864,	// (0x000191d0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0001b698) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0001b698) cell_fep_china_hwr2_fs_funtion_grid_t

0xd880,	// (0x000191ec) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd888,	// (0x000191f4) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd890,	// (0x000191fc) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0001b69d) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd898,	// (0x00019204) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd898,	// (0x00019204) cell_fep_china_hwr2_fs_candidate_grid

0xd8b7,	// (0x00019223) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8bf,	// (0x0001922b) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbc79,	// (0x000175e5) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbc79,	// (0x000175e5) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0001b4b1) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8c7,	// (0x00019233) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8e8e,	// (0x000147fa) clock_nsta_pane_cp_24_ParamLimits

0x8e8e,	// (0x000147fa) clock_nsta_pane_cp_24

0x8f0e,	// (0x0001487a) indicator_nsta_pane_cp_24_ParamLimits

0x8f0e,	// (0x0001487a) indicator_nsta_pane_cp_24

0xa061,	// (0x000159cd) heading_pane_g1

0x0001,

0xf8d7,	// (0x0001b243) heading_pane_g

0xab9a,	// (0x00016506) grid_sct_catagory_button_pane

0xabcc,	// (0x00016538) scroll_pane_cp5_ParamLimits

0xb86c,	// (0x000171d8) button_value_adjust_pane_cp5_ParamLimits

0xb86c,	// (0x000171d8) button_value_adjust_pane_cp5

0xb972,	// (0x000172de) form2_midp_time_pane_ParamLimits

0xd8d5,	// (0x00019241) cell_sct_catagory_button_pane_ParamLimits

0xd8d5,	// (0x00019241) cell_sct_catagory_button_pane

0xbc3e,	// (0x000175aa) bg_button_pane_cp01_ParamLimits

0xbc3e,	// (0x000175aa) bg_button_pane_cp01

0xbc79,	// (0x000175e5) cell_sct_catagory_button_pane_g1

0x8c49,	// (0x000145b5) popup_tb_extension_window

0xd8e7,	// (0x00019253) aid_size_cell_ext_ParamLimits

0xd8e7,	// (0x00019253) aid_size_cell_ext

0x69fb,	// (0x00012367) bg_tb_trans_pane_cp1_ParamLimits

0x69fb,	// (0x00012367) bg_tb_trans_pane_cp1

0xd907,	// (0x00019273) grid_tb_ext_pane_ParamLimits

0xd907,	// (0x00019273) grid_tb_ext_pane

0xd937,	// (0x000192a3) cell_tb_ext_pane_ParamLimits

0xd937,	// (0x000192a3) cell_tb_ext_pane

0xd94e,	// (0x000192ba) cell_tb_ext_pane_g1_ParamLimits

0xd94e,	// (0x000192ba) cell_tb_ext_pane_g1

0xd96b,	// (0x000192d7) cell_tb_ext_pane_t1

0x69fb,	// (0x00012367) list_highlight_pane_cp11_ParamLimits

0x69fb,	// (0x00012367) list_highlight_pane_cp11

0x4d5e,	// (0x000106ca) popup_uni_indicator_window_ParamLimits

0x4d5e,	// (0x000106ca) popup_uni_indicator_window

0x7593,	// (0x00012eff) bg_popup_sub_pane_cp14

0xd986,	// (0x000192f2) list_uniindi_pane

0xd992,	// (0x000192fe) uniindi_top_pane

0x69fb,	// (0x00012367) bg_uniindi_top_pane

0xd9b3,	// (0x0001931f) uniindi_top_pane_g1

0xd9c9,	// (0x00019335) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0001b6a4) uniindi_top_pane_g

0xd9f3,	// (0x0001935f) uniindi_top_pane_t1

0xda1f,	// (0x0001938b) list_single_uniindi_pane_ParamLimits

0xda1f,	// (0x0001938b) list_single_uniindi_pane

0xbc79,	// (0x000175e5) bg_uniindi_top_pane_g1

0xda31,	// (0x0001939d) list_single_uniindi_pane_g1

0xda44,	// (0x000193b0) list_single_uniindi_pane_t1

0x4bca,	// (0x00010536) control_bg_pane

0xda69,	// (0x000193d5) bg_sctrl_sk_pane_cp1

0xda72,	// (0x000193de) bg_sctrl_sk_pane_cp2

0xda7b,	// (0x000193e7) control_bg_pane_g1

0xda84,	// (0x000193f0) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0001b6ad) control_bg_pane_g

0xb68f,	// (0x00016ffb) cell_indicator_nsta_pane_g1_ParamLimits

0xb69d,	// (0x00017009) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0001b415) cell_indicator_nsta_pane_g_ParamLimits

0xba02,	// (0x0001736e) form2_midp_time_pane_t1_ParamLimits

0x6d69,	// (0x000126d5) main_idle_act4_pane_ParamLimits

0x6d69,	// (0x000126d5) main_idle_act4_pane

0x8c49,	// (0x000145b5) popup_tb_extension_window_ParamLimits

0xd929,	// (0x00019295) tb_ext_find_pane_ParamLimits

0xd929,	// (0x00019295) tb_ext_find_pane

0xda8d,	// (0x000193f9) ai_gene_pane_1_cp1

0x8528,	// (0x00013e94) ai_gene_pane_2_cp1

0xda95,	// (0x00019401) list_single_idle_plugin_calendar_pane

0xda9e,	// (0x0001940a) list_single_idle_plugin_notification_pane

0xdaa7,	// (0x00019413) list_single_idle_plugin_player_pane

0xdab0,	// (0x0001941c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdab0,	// (0x0001941c) list_single_idle_plugin_shortcut_pane

0xdad2,	// (0x0001943e) main_idle_act4_pane_t1

0xdae4,	// (0x00019450) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0001b6b2) main_idle_act4_pane_t

0xdaf6,	// (0x00019462) middle_sk_idle_act4_pane_ParamLimits

0xdaf6,	// (0x00019462) middle_sk_idle_act4_pane

0xdb0c,	// (0x00019478) popup_clock_digital_analogue_window_cp2

0xdb26,	// (0x00019492) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb26,	// (0x00019492) shortcut_wheel_idle_act4_pane

0xbc79,	// (0x000175e5) shortcut_wheel_idle_act4_pane_g1

0xbc79,	// (0x000175e5) shortcut_wheel_idle_act4_pane_g2

0xbc79,	// (0x000175e5) shortcut_wheel_idle_act4_pane_g3

0xbc79,	// (0x000175e5) shortcut_wheel_idle_act4_pane_g4

0xbc79,	// (0x000175e5) shortcut_wheel_idle_act4_pane_g5

0xdb3a,	// (0x000194a6) shortcut_wheel_idle_act4_pane_g6

0xdb42,	// (0x000194ae) shortcut_wheel_idle_act4_pane_g7

0xdb4a,	// (0x000194b6) shortcut_wheel_idle_act4_pane_g8

0xdb52,	// (0x000194be) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0001b6b7) shortcut_wheel_idle_act4_pane_g

0xbf45,	// (0x000178b1) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf45,	// (0x000178b1) middle_sk_idle_act4_pane_g1

0xdbb6,	// (0x00019522) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbb6,	// (0x00019522) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0001b6da) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0001b6da) middle_sk_idle_act4_pane_g

0xdbc2,	// (0x0001952e) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbc2,	// (0x0001952e) middle_sk_idle_act4_pane_t1

0xdbdf,	// (0x0001954b) grid_ai_shortcut_pane_ParamLimits

0xdbdf,	// (0x0001954b) grid_ai_shortcut_pane

0xdbf8,	// (0x00019564) list_highlight_pane_cp16_ParamLimits

0xdbf8,	// (0x00019564) list_highlight_pane_cp16

0xdc05,	// (0x00019571) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc05,	// (0x00019571) list_single_idle_plugin_shortcut_pane_g1

0xdc11,	// (0x0001957d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc11,	// (0x0001957d) list_single_idle_plugin_shortcut_pane_g2

0xdc2b,	// (0x00019597) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc2b,	// (0x00019597) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0001b6df) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0001b6df) list_single_idle_plugin_shortcut_pane_g

0xdc3e,	// (0x000195aa) cell_ai_shortcut_pane_ParamLimits

0xdc3e,	// (0x000195aa) cell_ai_shortcut_pane

0xdc61,	// (0x000195cd) cell_ai_shortcut_pane_g1_ParamLimits

0xdc61,	// (0x000195cd) cell_ai_shortcut_pane_g1

0xda8d,	// (0x000193f9) ai_gene_pane_1_cp2

0xdc83,	// (0x000195ef) ai_gene_pane_2_cp2

0xdc8b,	// (0x000195f7) list_highlight_pane_cp15

0xdc94,	// (0x00019600) list_single_idle_plugin_calendar_pane_g1

0xdc8b,	// (0x000195f7) list_highlight_pane_cp17

0xdc9c,	// (0x00019608) list_single_idle_plugin_calendar_pane_g1_copy1

0xdca4,	// (0x00019610) list_single_idle_plugin_player_pane_g1

0xae01,	// (0x0001676d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0001b6e6) list_single_idle_plugin_player_pane_g

0xdcac,	// (0x00019618) list_single_idle_plugin_player_pane_t1

0xdcba,	// (0x00019626) list_single_idle_plugin_player_pane_t2

0xdcc8,	// (0x00019634) list_single_idle_plugin_player_pane_t3

0xdcd6,	// (0x00019642) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0001b6eb) list_single_idle_plugin_player_pane_t

0xdce4,	// (0x00019650) wait_bar_pane_cp15

0xdcec,	// (0x00019658) grid_ai_notification_pane

0xae01,	// (0x0001676d) list_single_idle_plugin_notification_pane_g1

0xdcf5,	// (0x00019661) cell_ai_notification_pane_ParamLimits

0xdcf5,	// (0x00019661) cell_ai_notification_pane

0xdd02,	// (0x0001966e) cell_ai_notification_pane_g1

0xdd0a,	// (0x00019676) cell_ai_notification_pane_t1

0xdd18,	// (0x00019684) tb_ext_find_button_pane

0xdd20,	// (0x0001968c) tb_ext_find_pane_g1

0xdd28,	// (0x00019694) tb_ext_find_pane_t1

0x7d65,	// (0x000136d1) tb_ext_find_button_pane_g1

0xdd36,	// (0x000196a2) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0001b6f4) tb_ext_find_button_pane_g

0xdad2,	// (0x0001943e) main_idle_act4_pane_t1_ParamLimits

0xdae4,	// (0x00019450) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0001b6b2) main_idle_act4_pane_t_ParamLimits

0xdb0c,	// (0x00019478) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb1a,	// (0x00019486) sat_plugin_idle_act4_pane_ParamLimits

0xdb1a,	// (0x00019486) sat_plugin_idle_act4_pane

0xdd3f,	// (0x000196ab) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd3f,	// (0x000196ab) sat_plugin_idle_act4_pane_t1

0xdd52,	// (0x000196be) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd52,	// (0x000196be) sat_plugin_idle_act4_pane_t2

0xdd65,	// (0x000196d1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd65,	// (0x000196d1) sat_plugin_idle_act4_pane_t3

0xdd78,	// (0x000196e4) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd78,	// (0x000196e4) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0001b6f9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0001b6f9) sat_plugin_idle_act4_pane_t

0x4c8f,	// (0x000105fb) popup_battery_window_ParamLimits

0x4c8f,	// (0x000105fb) popup_battery_window

0x69fb,	// (0x00012367) bg_popup_sub_pane_cp25_ParamLimits

0x69fb,	// (0x00012367) bg_popup_sub_pane_cp25

0xdd8b,	// (0x000196f7) popup_battery_window_g1_ParamLimits

0xdd8b,	// (0x000196f7) popup_battery_window_g1

0xdd97,	// (0x00019703) popup_battery_window_t1_ParamLimits

0xdd97,	// (0x00019703) popup_battery_window_t1

0xdda9,	// (0x00019715) popup_battery_window_t2_ParamLimits

0xdda9,	// (0x00019715) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0001b702) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0001b702) popup_battery_window_t

0x83f3,	// (0x00013d5f) midp_canvas_pane_ParamLimits

0x846a,	// (0x00013dd6) midp_keypad_pane_ParamLimits

0x846a,	// (0x00013dd6) midp_keypad_pane

0x876d,	// (0x000140d9) main_midp_pane_ParamLimits

0xb719,	// (0x00017085) signal_pane_g2_cp_ParamLimits

0xddc6,	// (0x00019732) aid_size_cell_midp_keypad_ParamLimits

0xddc6,	// (0x00019732) aid_size_cell_midp_keypad

0xdde0,	// (0x0001974c) midp_keyp_game_grid_pane_ParamLimits

0xdde0,	// (0x0001974c) midp_keyp_game_grid_pane

0xde00,	// (0x0001976c) midp_keyp_rocker_pane_ParamLimits

0xde00,	// (0x0001976c) midp_keyp_rocker_pane

0xde2f,	// (0x0001979b) midp_keyp_sk_left_pane_ParamLimits

0xde2f,	// (0x0001979b) midp_keyp_sk_left_pane

0xde89,	// (0x000197f5) midp_keyp_sk_right_pane_ParamLimits

0xde89,	// (0x000197f5) midp_keyp_sk_right_pane

0x3e2f,	// (0x0000f79b) bg_button_pane_cp03

0xdee3,	// (0x0001984f) midp_keyp_sk_left_pane_g1

0x3e2f,	// (0x0000f79b) bg_button_pane_cp04

0xdee3,	// (0x0001984f) midp_keyp_sk_right_pane_g1

0xbc79,	// (0x000175e5) midp_keyp_rocker_pane_g1

0xdeec,	// (0x00019858) keyp_game_cell_pane_ParamLimits

0xdeec,	// (0x00019858) keyp_game_cell_pane

0x3e2f,	// (0x0000f79b) bg_button_pane_cp02

0xdeff,	// (0x0001986b) keyp_game_cell_pane_g1

0x4cd9,	// (0x00010645) popup_fep_vkb2_window_ParamLimits

0x4cd9,	// (0x00010645) popup_fep_vkb2_window

0x5f04,	// (0x00011870) aid_size_cell_vkb2_ParamLimits

0x5f04,	// (0x00011870) aid_size_cell_vkb2

0x5f50,	// (0x000118bc) popup_fep_vkb2_window_g1_ParamLimits

0x5f50,	// (0x000118bc) popup_fep_vkb2_window_g1

0x5f98,	// (0x00011904) vkb2_area_bottom_pane_ParamLimits

0x5f98,	// (0x00011904) vkb2_area_bottom_pane

0x5fec,	// (0x00011958) vkb2_area_keypad_pane_ParamLimits

0x5fec,	// (0x00011958) vkb2_area_keypad_pane

0x6032,	// (0x0001199e) vkb2_area_top_pane_ParamLimits

0x6032,	// (0x0001199e) vkb2_area_top_pane

0x60ac,	// (0x00011a18) vkb2_top_entry_pane_ParamLimits

0x60ac,	// (0x00011a18) vkb2_top_entry_pane

0x60d6,	// (0x00011a42) vkb2_top_grid_left_pane_ParamLimits

0x60d6,	// (0x00011a42) vkb2_top_grid_left_pane

0x60f4,	// (0x00011a60) vkb2_top_grid_right_pane_ParamLimits

0x60f4,	// (0x00011a60) vkb2_top_grid_right_pane

0x6112,	// (0x00011a7e) vkb2_cell_keypad_pane_ParamLimits

0x6112,	// (0x00011a7e) vkb2_cell_keypad_pane

0x61c8,	// (0x00011b34) vkb2_area_bottom_grid_pane_ParamLimits

0x61c8,	// (0x00011b34) vkb2_area_bottom_grid_pane

0x61ee,	// (0x00011b5a) vkb2_area_bottom_pane_g1_ParamLimits

0x61ee,	// (0x00011b5a) vkb2_area_bottom_pane_g1

0x6212,	// (0x00011b7e) vkb2_area_bottom_pane_g2_ParamLimits

0x6212,	// (0x00011b7e) vkb2_area_bottom_pane_g2

0x6240,	// (0x00011bac) vkb2_area_bottom_pane_g3_ParamLimits

0x6240,	// (0x00011bac) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0001b707) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0001b707) vkb2_area_bottom_pane_g

0x62a1,	// (0x00011c0d) vkb2_top_cell_left_pane_ParamLimits

0x62a1,	// (0x00011c0d) vkb2_top_cell_left_pane

0xdf10,	// (0x0001987c) vkb2_top_entry_pane_g1_ParamLimits

0xdf10,	// (0x0001987c) vkb2_top_entry_pane_g1

0xdf1e,	// (0x0001988a) vkb2_top_entry_pane_t1_ParamLimits

0xdf1e,	// (0x0001988a) vkb2_top_entry_pane_t1

0xdf36,	// (0x000198a2) vkb2_top_entry_pane_t2_ParamLimits

0xdf36,	// (0x000198a2) vkb2_top_entry_pane_t2

0xdf4e,	// (0x000198ba) vkb2_top_entry_pane_t3_ParamLimits

0xdf4e,	// (0x000198ba) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0001b70e) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0001b70e) vkb2_top_entry_pane_t

0x62ee,	// (0x00011c5a) vkb2_top_grid_right_pane_g1_ParamLimits

0x62ee,	// (0x00011c5a) vkb2_top_grid_right_pane_g1

0x6304,	// (0x00011c70) vkb2_top_grid_right_pane_g2_ParamLimits

0x6304,	// (0x00011c70) vkb2_top_grid_right_pane_g2

0x631c,	// (0x00011c88) vkb2_top_grid_right_pane_g3_ParamLimits

0x631c,	// (0x00011c88) vkb2_top_grid_right_pane_g3

0x6334,	// (0x00011ca0) vkb2_top_grid_right_pane_g4_ParamLimits

0x6334,	// (0x00011ca0) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0001b715) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0001b715) vkb2_top_grid_right_pane_g

0x634a,	// (0x00011cb6) vkb2_top_cell_left_pane_g1

0x6361,	// (0x00011ccd) vkb2_cell_keypad_pane_g1_ParamLimits

0x6361,	// (0x00011ccd) vkb2_cell_keypad_pane_g1

0xdf64,	// (0x000198d0) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf64,	// (0x000198d0) vkb2_cell_keypad_pane_t1

0x6385,	// (0x00011cf1) vkb2_cell_bottom_grid_pane_ParamLimits

0x6385,	// (0x00011cf1) vkb2_cell_bottom_grid_pane

0x63be,	// (0x00011d2a) vkb2_cell_bottom_grid_pane_g1

0xdb5a,	// (0x000194c6) aid_call2_pane_cp02

0xdb62,	// (0x000194ce) aid_call_pane_cp02

0xdb6a,	// (0x000194d6) clock_digital_number_pane_cp10

0xdb72,	// (0x000194de) clock_digital_number_pane_cp11

0xdb7a,	// (0x000194e6) clock_digital_number_pane_cp12

0xdb82,	// (0x000194ee) clock_digital_number_pane_cp13

0xdb8a,	// (0x000194f6) clock_digital_separator_pane_cp10

0x7d65,	// (0x000136d1) popup_clock_digital_analogue_window_cp2_g1

0x7d65,	// (0x000136d1) popup_clock_digital_analogue_window_cp2_g2

0xdb92,	// (0x000194fe) popup_clock_digital_analogue_window_cp2_g3

0x7d65,	// (0x000136d1) popup_clock_digital_analogue_window_cp2_g4

0xdb92,	// (0x000194fe) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0001b6ca) popup_clock_digital_analogue_window_cp2_g

0xdb9a,	// (0x00019506) popup_clock_digital_analogue_window_cp2_t1

0xdba8,	// (0x00019514) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0001b6d5) popup_clock_digital_analogue_window_cp2_t

0xbc79,	// (0x000175e5) clock_digital_number_pane_cp10_g1

0xbc79,	// (0x000175e5) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0001b4b1) clock_digital_number_pane_cp10_g

0xbc79,	// (0x000175e5) clock_digital_separator_pane_cp10_g1

0xbc79,	// (0x000175e5) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0001b4b1) clock_digital_separator_pane_cp10_g

0xd9d5,	// (0x00019341) uniindi_top_pane_g3

0xd9e6,	// (0x00019352) uniindi_top_pane_g4

0x6182,	// (0x00011aee) vkb2_row_keypad_pane_ParamLimits

0x6182,	// (0x00011aee) vkb2_row_keypad_pane

0x63da,	// (0x00011d46) vkb2_cell_t_keypad_pane_ParamLimits

0x63da,	// (0x00011d46) vkb2_cell_t_keypad_pane

0x63ea,	// (0x00011d56) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x63ea,	// (0x00011d56) vkb2_cell_t_keypad_pane_cp08

0x63ff,	// (0x00011d6b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x63ff,	// (0x00011d6b) vkb2_cell_t_keypad_pane_cp09

0x6413,	// (0x00011d7f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6413,	// (0x00011d7f) vkb2_cell_t_keypad_pane_cp01

0x6424,	// (0x00011d90) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6424,	// (0x00011d90) vkb2_cell_t_keypad_pane_cp02

0x6435,	// (0x00011da1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6435,	// (0x00011da1) vkb2_cell_t_keypad_pane_cp03

0x6446,	// (0x00011db2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6446,	// (0x00011db2) vkb2_cell_t_keypad_pane_cp04

0x6457,	// (0x00011dc3) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6457,	// (0x00011dc3) vkb2_cell_t_keypad_pane_cp05

0x6468,	// (0x00011dd4) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6468,	// (0x00011dd4) vkb2_cell_t_keypad_pane_cp06

0x647b,	// (0x00011de7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x647b,	// (0x00011de7) vkb2_cell_t_keypad_pane_cp07

0x6490,	// (0x00011dfc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6490,	// (0x00011dfc) vkb2_cell_t_keypad_pane_cp10

0x5c33,	// (0x0001159f) vkb2_cell_t_keypad_pane_g1

0xdf7b,	// (0x000198e7) vkb2_cell_t_keypad_pane_t1

0x4bca,	// (0x00010536) popup_grid_graphic2_window

0xdf8d,	// (0x000198f9) aid_size_cell_graphic2_ParamLimits

0xdf8d,	// (0x000198f9) aid_size_cell_graphic2

0xdfc5,	// (0x00019931) bg_popup_window_pane_cp21_ParamLimits

0xdfc5,	// (0x00019931) bg_popup_window_pane_cp21

0xdfd3,	// (0x0001993f) graphic2_pages_pane_ParamLimits

0xdfd3,	// (0x0001993f) graphic2_pages_pane

0xe019,	// (0x00019985) grid_graphic2_control_pane_ParamLimits

0xe019,	// (0x00019985) grid_graphic2_control_pane

0xe057,	// (0x000199c3) grid_graphic2_pane_ParamLimits

0xe057,	// (0x000199c3) grid_graphic2_pane

0xe0cd,	// (0x00019a39) cell_graphic2_pane

0x3e2f,	// (0x0000f79b) main_comp_mode_pane

0xd1c2,	// (0x00018b2e) list_ai3_gene_pane_ParamLimits

0xd60e,	// (0x00018f7a) bg_popup_window_pane_cp19_ParamLimits

0xd61a,	// (0x00018f86) bg_touch_area_indi_pane_ParamLimits

0xd61a,	// (0x00018f86) bg_touch_area_indi_pane

0xd630,	// (0x00018f9c) bg_touch_area_indi_pane_cp01_ParamLimits

0xd630,	// (0x00018f9c) bg_touch_area_indi_pane_cp01

0xd648,	// (0x00018fb4) bg_touch_area_indi_pane_cp02_ParamLimits

0xd648,	// (0x00018fb4) bg_touch_area_indi_pane_cp02

0xd662,	// (0x00018fce) bg_touch_area_indi_pane_cp03_ParamLimits

0xd662,	// (0x00018fce) bg_touch_area_indi_pane_cp03

0xd67c,	// (0x00018fe8) popup_slider_window_g1_ParamLimits

0xd698,	// (0x00019004) popup_slider_window_g2_ParamLimits

0xd6b4,	// (0x00019020) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0001b65f) popup_slider_window_g_ParamLimits

0xd710,	// (0x0001907c) popup_slider_window_t1_ParamLimits

0xd784,	// (0x000190f0) small_volume_slider_vertical_pane_ParamLimits

0xe0cd,	// (0x00019a39) cell_graphic2_pane_ParamLimits

0xe11f,	// (0x00019a8b) bg_button_pane_cp10_ParamLimits

0xe11f,	// (0x00019a8b) bg_button_pane_cp10

0xe134,	// (0x00019aa0) bg_button_pane_cp11_ParamLimits

0xe134,	// (0x00019aa0) bg_button_pane_cp11

0xe149,	// (0x00019ab5) graphic2_pages_pane_g1_ParamLimits

0xe149,	// (0x00019ab5) graphic2_pages_pane_g1

0xe164,	// (0x00019ad0) graphic2_pages_pane_g2_ParamLimits

0xe164,	// (0x00019ad0) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0001b723) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0001b723) graphic2_pages_pane_g

0xe17c,	// (0x00019ae8) graphic2_pages_pane_t1_ParamLimits

0xe17c,	// (0x00019ae8) graphic2_pages_pane_t1

0xe192,	// (0x00019afe) cell_graphic2_control_pane_ParamLimits

0xe192,	// (0x00019afe) cell_graphic2_control_pane

0xe1ac,	// (0x00019b18) cell_graphic2_pane_g1_ParamLimits

0xe1ac,	// (0x00019b18) cell_graphic2_pane_g1

0xe1b9,	// (0x00019b25) cell_graphic2_pane_g2_ParamLimits

0xe1b9,	// (0x00019b25) cell_graphic2_pane_g2

0xe1c6,	// (0x00019b32) cell_graphic2_pane_g3_ParamLimits

0xe1c6,	// (0x00019b32) cell_graphic2_pane_g3

0xe1d3,	// (0x00019b3f) cell_graphic2_pane_g4_ParamLimits

0xe1d3,	// (0x00019b3f) cell_graphic2_pane_g4

0xe1e0,	// (0x00019b4c) cell_graphic2_pane_g5_ParamLimits

0xe1e0,	// (0x00019b4c) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0001b728) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0001b728) cell_graphic2_pane_g

0xe1fb,	// (0x00019b67) cell_graphic2_pane_t1_ParamLimits

0xe1fb,	// (0x00019b67) cell_graphic2_pane_t1

0x93fb,	// (0x00014d67) grid_highlight_pane_cp11_ParamLimits

0x93fb,	// (0x00014d67) grid_highlight_pane_cp11

0x69fb,	// (0x00012367) bg_button_pane_cp05

0xe224,	// (0x00019b90) cell_graphic2_control_pane_g1

0xbc79,	// (0x000175e5) bg_touch_area_indi_pane_g1

0xe24c,	// (0x00019bb8) aid_cmod_rocker_key_size

0xe256,	// (0x00019bc2) aid_cmode_itu_key_size

0xe260,	// (0x00019bcc) main_cmode_video_pane

0xe26a,	// (0x00019bd6) main_comp_mode_itu_pane

0xe276,	// (0x00019be2) main_comp_mode_rocker_pane

0xe282,	// (0x00019bee) cell_cmode_rocker_pane_ParamLimits

0xe282,	// (0x00019bee) cell_cmode_rocker_pane

0xe296,	// (0x00019c02) cell_cmode_itu_pane_ParamLimits

0xe296,	// (0x00019c02) cell_cmode_itu_pane

0x7593,	// (0x00012eff) bg_button_pane_cp06_ParamLimits

0x7593,	// (0x00012eff) bg_button_pane_cp06

0xbf45,	// (0x000178b1) cell_cmode_rocker_pane_g1_ParamLimits

0xbf45,	// (0x000178b1) cell_cmode_rocker_pane_g1

0xd82b,	// (0x00019197) cell_cmode_rocker_pane_g2_ParamLimits

0xd82b,	// (0x00019197) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0001b738) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0001b738) cell_cmode_rocker_pane_g

0x3e2f,	// (0x0000f79b) bg_button_pane_cp07

0xe2ad,	// (0x00019c19) cell_cmode_itu_pane_g1

0xe2b6,	// (0x00019c22) cell_cmode_itu_pane_t1

0xe2c4,	// (0x00019c30) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0001b73d) cell_cmode_itu_pane_t

0xda59,	// (0x000193c5) aid_touch_ctrl_left

0xda61,	// (0x000193cd) aid_touch_ctrl_right

0x3e2f,	// (0x0000f79b) compa_mode_pane

0xe2d2,	// (0x00019c3e) aid_cmod_rocker_key_size_cp

0xe2dc,	// (0x00019c48) aid_cmode_itu_key_size_cp

0xe2e6,	// (0x00019c52) compa_mode_pane_g1

0xe2ee,	// (0x00019c5a) compa_mode_pane_g2

0xe2f6,	// (0x00019c62) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0001b742) compa_mode_pane_g

0xe2fe,	// (0x00019c6a) main_comp_mode_itu_pane_cp

0xe306,	// (0x00019c72) main_comp_mode_rocker_pane_cp

0xe30e,	// (0x00019c7a) cell_cmode_itu_pane_cp_ParamLimits

0xe30e,	// (0x00019c7a) cell_cmode_itu_pane_cp

0xe323,	// (0x00019c8f) cell_cmode_rocker_pane_cp_ParamLimits

0xe323,	// (0x00019c8f) cell_cmode_rocker_pane_cp

0x7593,	// (0x00012eff) bg_button_pane_cp06_cp_ParamLimits

0x7593,	// (0x00012eff) bg_button_pane_cp06_cp

0xbf45,	// (0x000178b1) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf45,	// (0x000178b1) cell_cmode_rocker_pane_g1_cp

0xbc79,	// (0x000175e5) cell_cmode_rocker_pane_g2_cp

0x3e2f,	// (0x0000f79b) bg_button_pane_cp07_cp

0xe335,	// (0x00019ca1) cell_cmode_itu_pane_g1_cp

0xe33e,	// (0x00019caa) cell_cmode_itu_pane_t1_cp

0xe33e,	// (0x00019caa) cell_cmode_itu_pane_t2_cp

0xa919,	// (0x00016285) settings_code_pane_cp2

0x6757,	// (0x000120c3) bg_popup_window_pane_cp3_ParamLimits

0x6be9,	// (0x00012555) heading_pane_cp3_ParamLimits

0x6bf5,	// (0x00012561) listscroll_popup_graphic_pane_ParamLimits

0x59c6,	// (0x00011332) fep_hwr_aid_pane_ParamLimits

0x5e59,	// (0x000117c5) aid_touch_sctrl_top_ParamLimits

0x5e74,	// (0x000117e0) sctrl_sk_top_pane_g1_ParamLimits

0x5c33,	// (0x0001159f) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0001b678) sctrl_sk_top_pane_g_ParamLimits

0x5e81,	// (0x000117ed) sctrl_sk_top_pane_t1_ParamLimits

0x5e59,	// (0x000117c5) aid_touch_sctrl_bottom_ParamLimits

0x5e81,	// (0x000117ed) sctrl_sk_bottom_pane_t1_ParamLimits

0xd99f,	// (0x0001930b) aid_area_touch_clock

0x6074,	// (0x000119e0) aid_vkb2_area_top_pane_cell_ParamLimits

0x6074,	// (0x000119e0) aid_vkb2_area_top_pane_cell

0x61a4,	// (0x00011b10) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x61a4,	// (0x00011b10) aid_vkb2_area_bottom_pane_cell

0xdf08,	// (0x00019874) popup_char_count_window

0xe34c,	// (0x00019cb8) popup_char_count_window_g1

0xe355,	// (0x00019cc1) popup_char_count_window_g2

0xe35e,	// (0x00019cca) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0001b749) popup_char_count_window_g

0xe367,	// (0x00019cd3) popup_char_count_window_t1

0x5f2e,	// (0x0001189a) popup_fep_char_preview_window_ParamLimits

0x5f2e,	// (0x0001189a) popup_fep_char_preview_window

0x6092,	// (0x000119fe) vkb2_top_candi_pane_ParamLimits

0x6092,	// (0x000119fe) vkb2_top_candi_pane

0xe375,	// (0x00019ce1) cell_vkb2_top_candi_pane_ParamLimits

0xe375,	// (0x00019ce1) cell_vkb2_top_candi_pane

0x64a5,	// (0x00011e11) bg_popup_fep_char_preview_window_ParamLimits

0x64a5,	// (0x00011e11) bg_popup_fep_char_preview_window

0x64b3,	// (0x00011e1f) popup_fep_char_preview_window_t1_ParamLimits

0x64b3,	// (0x00011e1f) popup_fep_char_preview_window_t1

0xe3c6,	// (0x00019d32) bg_popup_fep_char_preview_window_g1

0xe3ce,	// (0x00019d3a) bg_popup_fep_char_preview_window_g2

0xe3d6,	// (0x00019d42) bg_popup_fep_char_preview_window_g3

0xe3de,	// (0x00019d4a) bg_popup_fep_char_preview_window_g4

0xe3e6,	// (0x00019d52) bg_popup_fep_char_preview_window_g5

0x64ed,	// (0x00011e59) bg_popup_fep_char_preview_window_g6

0xe3ee,	// (0x00019d5a) bg_popup_fep_char_preview_window_g7

0xe3f6,	// (0x00019d62) bg_popup_fep_char_preview_window_g8

0xe3fe,	// (0x00019d6a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0001b750) bg_popup_fep_char_preview_window_g

0x5c33,	// (0x0001159f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5c33,	// (0x0001159f) cell_vkb2_top_candi_pane_g1

0x5c41,	// (0x000115ad) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5c41,	// (0x000115ad) cell_vkb2_top_candi_pane_g2

0xd4f6,	// (0x00018e62) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd4f6,	// (0x00018e62) cell_vkb2_top_candi_pane_g3

0x64f5,	// (0x00011e61) cell_vkb2_top_candi_pane_g4_ParamLimits

0x64f5,	// (0x00011e61) cell_vkb2_top_candi_pane_g4

0xc609,	// (0x00017f75) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc609,	// (0x00017f75) cell_vkb2_top_candi_pane_g5

0x6516,	// (0x00011e82) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6516,	// (0x00011e82) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0001b763) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0001b763) cell_vkb2_top_candi_pane_g

0x6524,	// (0x00011e90) cell_vkb2_top_candi_pane_t1

0x5826,	// (0x00011192) aid_size_touch_slider_mark_ParamLimits

0x5826,	// (0x00011192) aid_size_touch_slider_mark

0xe009,	// (0x00019975) grid_graphic2_catg_pane_ParamLimits

0xe009,	// (0x00019975) grid_graphic2_catg_pane

0xe0a7,	// (0x00019a13) popup_grid_graphic2_window_t1_ParamLimits

0xe0a7,	// (0x00019a13) popup_grid_graphic2_window_t1

0xe0b9,	// (0x00019a25) popup_grid_graphic2_window_t2_ParamLimits

0xe0b9,	// (0x00019a25) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0001b71e) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0001b71e) popup_grid_graphic2_window_t

0x69fb,	// (0x00012367) bg_button_pane_cp05_ParamLimits

0xe224,	// (0x00019b90) cell_graphic2_control_pane_g1_ParamLimits

0xe406,	// (0x00019d72) cell_graphic2_catg_pane_ParamLimits

0xe406,	// (0x00019d72) cell_graphic2_catg_pane

0x3e2f,	// (0x0000f79b) bg_button_pane_cp12

0xe418,	// (0x00019d84) cell_graphic2_catg_pane_g1

0xd96b,	// (0x000192d7) cell_tb_ext_pane_t1_ParamLimits

0x62c1,	// (0x00011c2d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x62c1,	// (0x00011c2d) vkb2_top_cell_right_narrow_pane

0x62d9,	// (0x00011c45) vkb2_top_cell_right_wide_pane_ParamLimits

0x62d9,	// (0x00011c45) vkb2_top_cell_right_wide_pane

0x59b8,	// (0x00011324) bg_vkb2_func_pane_ParamLimits

0x59b8,	// (0x00011324) bg_vkb2_func_pane

0x634a,	// (0x00011cb6) vkb2_top_cell_left_pane_g1_ParamLimits

0x59b8,	// (0x00011324) bg_vkb2_fuc_pane_cp03_ParamLimits

0x59b8,	// (0x00011324) bg_vkb2_fuc_pane_cp03

0x63be,	// (0x00011d2a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x92e7,	// (0x00014c53) bg_vkb2_func_pane_g1

0x92ef,	// (0x00014c5b) bg_vkb2_func_pane_g2

0x92ff,	// (0x00014c6b) bg_vkb2_func_pane_g3

0x92f7,	// (0x00014c63) bg_vkb2_func_pane_g4

0x9307,	// (0x00014c73) bg_vkb2_func_pane_g5

0x930f,	// (0x00014c7b) bg_vkb2_func_pane_g6

0x9317,	// (0x00014c83) bg_vkb2_func_pane_g7

0x931f,	// (0x00014c8b) bg_vkb2_func_pane_g8

0x92df,	// (0x00014c4b) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0001b770) bg_vkb2_func_pane_g

0x59b8,	// (0x00011324) bg_vkb2_fuc_pane_cp01_ParamLimits

0x59b8,	// (0x00011324) bg_vkb2_fuc_pane_cp01

0x634a,	// (0x00011cb6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x634a,	// (0x00011cb6) vkb2_top_cell_right_wide_pane_g1

0x59b8,	// (0x00011324) bg_vkb2_fuc_pane_cp02_ParamLimits

0x59b8,	// (0x00011324) bg_vkb2_fuc_pane_cp02

0x63be,	// (0x00011d2a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x63be,	// (0x00011d2a) vkb2_top_cell_right_narrow_pane_g1

0xd58c,	// (0x00018ef8) aid_touch_area_decrease_ParamLimits

0xd58c,	// (0x00018ef8) aid_touch_area_decrease

0xd5b0,	// (0x00018f1c) aid_touch_area_increase_ParamLimits

0xd5b0,	// (0x00018f1c) aid_touch_area_increase

0xd5bc,	// (0x00018f28) aid_touch_area_mute_ParamLimits

0xd5bc,	// (0x00018f28) aid_touch_area_mute

0xd5e0,	// (0x00018f4c) aid_touch_area_slider_ParamLimits

0xd5e0,	// (0x00018f4c) aid_touch_area_slider

0xd6d0,	// (0x0001903c) popup_slider_window_g4_ParamLimits

0xd6d0,	// (0x0001903c) popup_slider_window_g4

0xd6dc,	// (0x00019048) popup_slider_window_g5_ParamLimits

0xd6dc,	// (0x00019048) popup_slider_window_g5

0xd6fe,	// (0x0001906a) popup_slider_window_g6_ParamLimits

0xd6fe,	// (0x0001906a) popup_slider_window_g6

0xd73e,	// (0x000190aa) popup_slider_window_t2_ParamLimits

0xd73e,	// (0x000190aa) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0001b66c) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0001b66c) popup_slider_window_t

0xd756,	// (0x000190c2) slider_pane_ParamLimits

0xd756,	// (0x000190c2) slider_pane

0xe421,	// (0x00019d8d) slider_pane_g1_ParamLimits

0xe421,	// (0x00019d8d) slider_pane_g1

0xe435,	// (0x00019da1) slider_pane_g2_ParamLimits

0xe435,	// (0x00019da1) slider_pane_g2

0xe44b,	// (0x00019db7) slider_pane_g3_ParamLimits

0xe44b,	// (0x00019db7) slider_pane_g3

0x0003,

0xfe17,	// (0x0001b783) slider_pane_g_ParamLimits

0xfe17,	// (0x0001b783) slider_pane_g

0x8cab,	// (0x00014617) popup_tb_float_extension_window_ParamLimits

0x8cab,	// (0x00014617) popup_tb_float_extension_window

0xe477,	// (0x00019de3) aid_size_cell_tb_float_ext

0x3e2f,	// (0x0000f79b) bg_popup_sub_window_cp28

0xe483,	// (0x00019def) grid_tb_float_ext_pane

0xe48f,	// (0x00019dfb) cell_tb_float_ext_pane_ParamLimits

0xe48f,	// (0x00019dfb) cell_tb_float_ext_pane

0xe4ab,	// (0x00019e17) cell_tb_float_ext_pane_g1

0xe4b4,	// (0x00019e20) grid_highlight_pane_cp12

0x5b0d,	// (0x00011479) cell_last_hwr_side_pane_ParamLimits

0x5b0d,	// (0x00011479) cell_last_hwr_side_pane

0xbc79,	// (0x000175e5) cell_last_hwr_side_pane_g1

0xe4bd,	// (0x00019e29) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0001b78c) cell_last_hwr_side_pane_g

0x6270,	// (0x00011bdc) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6270,	// (0x00011bdc) vkb2_area_bottom_space_btn_pane

0x5c33,	// (0x0001159f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf7b,	// (0x000198e7) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6524,	// (0x00011e90) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6542,	// (0x00011eae) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6542,	// (0x00011eae) vkb2_area_bottom_space_btn_pane_g1

0x657c,	// (0x00011ee8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x657c,	// (0x00011ee8) vkb2_area_bottom_space_btn_pane_g2

0x65b2,	// (0x00011f1e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x65b2,	// (0x00011f1e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0001b791) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0001b791) vkb2_area_bottom_space_btn_pane_g

0x5a7d,	// (0x000113e9) cel_fep_hwr_func_pane_ParamLimits

0x5a7d,	// (0x000113e9) cel_fep_hwr_func_pane

0x5ab9,	// (0x00011425) cell_hwr_side_button_pane_ParamLimits

0x5ab9,	// (0x00011425) cell_hwr_side_button_pane

0xd99f,	// (0x0001930b) aid_area_touch_clock_ParamLimits

0x69fb,	// (0x00012367) bg_uniindi_top_pane_ParamLimits

0xd9b3,	// (0x0001931f) uniindi_top_pane_g1_ParamLimits

0xd9c9,	// (0x00019335) uniindi_top_pane_g2_ParamLimits

0xd9d5,	// (0x00019341) uniindi_top_pane_g3_ParamLimits

0xd9e6,	// (0x00019352) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0001b6a4) uniindi_top_pane_g_ParamLimits

0xd9f3,	// (0x0001935f) uniindi_top_pane_t1_ParamLimits

0x69fb,	// (0x00012367) bg_vkb2_func_pane_cp01_ParamLimits

0x69fb,	// (0x00012367) bg_vkb2_func_pane_cp01

0xe4c6,	// (0x00019e32) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4c6,	// (0x00019e32) cel_fep_hwr_func_pane_g1

0x69fb,	// (0x00012367) bg_vkb2_func_pane_cp02_ParamLimits

0x69fb,	// (0x00012367) bg_vkb2_func_pane_cp02

0xe4c6,	// (0x00019e32) cell_hwr_side_button_pane_g1_ParamLimits

0xe4c6,	// (0x00019e32) cell_hwr_side_button_pane_g1

0x9132,	// (0x00014a9e) status_pane_g4_ParamLimits

0x9132,	// (0x00014a9e) status_pane_g4

0x914c,	// (0x00014ab8) status_pane_t1

0xba15,	// (0x00017381) form2_midp_gauge_slider_cont_pane

0xba1d,	// (0x00017389) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba2f,	// (0x0001739b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba41,	// (0x000173ad) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0001b464) form2_midp_gauge_slider_pane_t_ParamLimits

0xba53,	// (0x000173bf) form2_midp_slider_pane_ParamLimits

0x5ef6,	// (0x00011862) aid_size_cell_func_vkb2_ParamLimits

0x5ef6,	// (0x00011862) aid_size_cell_func_vkb2

0xe463,	// (0x00019dcf) slider_pane_g4_ParamLimits

0xe463,	// (0x00019dcf) slider_pane_g4

0x65fc,	// (0x00011f68) form2_midp_gauge_slider_pane_t2_cp01

0x660a,	// (0x00011f76) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x660a,	// (0x00011f76) form2_midp_gauge_slider_pane_t3_cp01

0x6627,	// (0x00011f93) form2_midp_slider_pane_cp01

0x3e2f,	// (0x0000f79b) navi_smil_pane

0xe4ff,	// (0x00019e6b) navi_smil_pane_g1

0xe507,	// (0x00019e73) navi_smil_pane_t1

0xe4d4,	// (0x00019e40) form2_midp_slider_pane_g1

0xe4dd,	// (0x00019e49) form2_midp_slider_pane_g2

0xe4e5,	// (0x00019e51) form2_midp_slider_pane_g3

0xe4d4,	// (0x00019e40) form2_midp_slider_pane_g4

0xe4ed,	// (0x00019e59) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0001b79a) form2_midp_slider_pane_g

0x65ec,	// (0x00011f58) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x65ec,	// (0x00011f58) vkb2_area_bottom_space_btn_pane_g4

0x8f4a,	// (0x000148b6) lc0_navi_pane_ParamLimits

0x8f4a,	// (0x000148b6) lc0_navi_pane

0x8fc6,	// (0x00014932) lc0_stat_indi_pane_ParamLimits

0x8fc6,	// (0x00014932) lc0_stat_indi_pane

0x8fdd,	// (0x00014949) ls0_title_pane_ParamLimits

0x8fdd,	// (0x00014949) ls0_title_pane

0x7593,	// (0x00012eff) bg_popup_sub_pane_cp14_ParamLimits

0xd986,	// (0x000192f2) list_uniindi_pane_ParamLimits

0xd992,	// (0x000192fe) uniindi_top_pane_ParamLimits

0xda31,	// (0x0001939d) list_single_uniindi_pane_g1_ParamLimits

0xda44,	// (0x000193b0) list_single_uniindi_pane_t1_ParamLimits

0x6630,	// (0x00011f9c) lc0_stat_clock_pane_ParamLimits

0x6630,	// (0x00011f9c) lc0_stat_clock_pane

0xe515,	// (0x00019e81) lc0_stat_indi_pane_g1_ParamLimits

0xe515,	// (0x00019e81) lc0_stat_indi_pane_g1

0xe522,	// (0x00019e8e) lc0_stat_indi_pane_g2_ParamLimits

0xe522,	// (0x00019e8e) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0001b7a5) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0001b7a5) lc0_stat_indi_pane_g

0x663d,	// (0x00011fa9) lc0_uni_indicator_pane_ParamLimits

0x663d,	// (0x00011fa9) lc0_uni_indicator_pane

0xe52f,	// (0x00019e9b) ls0_title_pane_g1_ParamLimits

0xe52f,	// (0x00019e9b) ls0_title_pane_g1

0xe543,	// (0x00019eaf) ls0_title_pane_t1_ParamLimits

0xe543,	// (0x00019eaf) ls0_title_pane_t1

0x664a,	// (0x00011fb6) lc0_uni_indicator_pane_g1_ParamLimits

0x664a,	// (0x00011fb6) lc0_uni_indicator_pane_g1

0xe579,	// (0x00019ee5) lc0_stat_clock_pane_t1

0x3e2f,	// (0x0000f79b) main_ai5_pane

0xe587,	// (0x00019ef3) ai5_sk_pane_ParamLimits

0xe587,	// (0x00019ef3) ai5_sk_pane

0xe594,	// (0x00019f00) cell_ai5_widget_pane_ParamLimits

0xe594,	// (0x00019f00) cell_ai5_widget_pane

0xe60a,	// (0x00019f76) aid_size_cell_widget_grid

0xe61e,	// (0x00019f8a) bg_ai5_widget_pane_ParamLimits

0xe61e,	// (0x00019f8a) bg_ai5_widget_pane

0xe646,	// (0x00019fb2) cell_ai5_widget_pane_g2

0xe656,	// (0x00019fc2) cell_ai5_widget_pane_g3

0xe675,	// (0x00019fe1) cell_ai5_widget_pane_g4

0xe681,	// (0x00019fed) cell_ai5_widget_pane_g5

0xe68d,	// (0x00019ff9) cell_ai5_widget_pane_g6

0xe69b,	// (0x0001a007) cell_ai5_widget_pane_g7

0xe6e3,	// (0x0001a04f) cell_ai5_widget_pane_t1_ParamLimits

0xe6e3,	// (0x0001a04f) cell_ai5_widget_pane_t1

0xe700,	// (0x0001a06c) cell_ai5_widget_pane_t2_ParamLimits

0xe700,	// (0x0001a06c) cell_ai5_widget_pane_t2

0xe718,	// (0x0001a084) cell_ai5_widget_pane_t3_ParamLimits

0xe718,	// (0x0001a084) cell_ai5_widget_pane_t3

0xe730,	// (0x0001a09c) cell_ai5_widget_pane_t4_ParamLimits

0xe730,	// (0x0001a09c) cell_ai5_widget_pane_t4

0xe74a,	// (0x0001a0b6) cell_ai5_widget_pane_t5_ParamLimits

0xe74a,	// (0x0001a0b6) cell_ai5_widget_pane_t5

0xe769,	// (0x0001a0d5) cell_ai5_widget_pane_t6_ParamLimits

0xe769,	// (0x0001a0d5) cell_ai5_widget_pane_t6

0xe77b,	// (0x0001a0e7) cell_ai5_widget_pane_t7_ParamLimits

0xe77b,	// (0x0001a0e7) cell_ai5_widget_pane_t7

0xe794,	// (0x0001a100) cell_ai5_widget_pane_t8_ParamLimits

0xe794,	// (0x0001a100) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0001b7bf) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0001b7bf) cell_ai5_widget_pane_t

0xe7e0,	// (0x0001a14c) grid_ai5_widget_pane

0x7593,	// (0x00012eff) highlight_cell_ai5_widget_pane_ParamLimits

0x7593,	// (0x00012eff) highlight_cell_ai5_widget_pane

0xe7f7,	// (0x0001a163) ai5_sk_left_pane

0xe801,	// (0x0001a16d) ai5_sk_middle_pane

0xe80b,	// (0x0001a177) ai5_sk_right_pane

0xe815,	// (0x0001a181) bg_ai5_widget_pane_g1_ParamLimits

0xe815,	// (0x0001a181) bg_ai5_widget_pane_g1

0xe821,	// (0x0001a18d) bg_ai5_widget_pane_g2_ParamLimits

0xe821,	// (0x0001a18d) bg_ai5_widget_pane_g2

0xe82d,	// (0x0001a199) bg_ai5_widget_pane_g3_ParamLimits

0xe82d,	// (0x0001a199) bg_ai5_widget_pane_g3

0xe839,	// (0x0001a1a5) bg_ai5_widget_pane_g4_ParamLimits

0xe839,	// (0x0001a1a5) bg_ai5_widget_pane_g4

0xe845,	// (0x0001a1b1) bg_ai5_widget_pane_g5_ParamLimits

0xe845,	// (0x0001a1b1) bg_ai5_widget_pane_g5

0xe851,	// (0x0001a1bd) bg_ai5_widget_pane_g6_ParamLimits

0xe851,	// (0x0001a1bd) bg_ai5_widget_pane_g6

0xe85d,	// (0x0001a1c9) bg_ai5_widget_pane_g7_ParamLimits

0xe85d,	// (0x0001a1c9) bg_ai5_widget_pane_g7

0xe869,	// (0x0001a1d5) bg_ai5_widget_pane_g8_ParamLimits

0xe869,	// (0x0001a1d5) bg_ai5_widget_pane_g8

0xe875,	// (0x0001a1e1) bg_ai5_widget_pane_g9_ParamLimits

0xe875,	// (0x0001a1e1) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0001b7d4) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0001b7d4) bg_ai5_widget_pane_g

0xe89c,	// (0x0001a208) cell_shortcut_ai5_widget_pane_ParamLimits

0xe89c,	// (0x0001a208) cell_shortcut_ai5_widget_pane

0x683d,	// (0x000121a9) bg_cell_shortcut_ai5_widget_pane

0xe8ae,	// (0x0001a21a) cell_grid_ai5_widget_pane_g1

0xe8b7,	// (0x0001a223) highlight_cell_shortcut_ai5_widget_pane

0x92e7,	// (0x00014c53) ai5_sk_left_pane_g1

0xe8bf,	// (0x0001a22b) ai5_sk_left_pane_g2

0xe8c7,	// (0x0001a233) ai5_sk_left_pane_g3

0xe8cf,	// (0x0001a23b) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0001b7e7) ai5_sk_left_pane_g

0xe8d7,	// (0x0001a243) ai5_sk_left_pane_t1

0x92ef,	// (0x00014c5b) ai5_sk_right_pane_g1

0xe8e5,	// (0x0001a251) ai5_sk_right_pane_g2

0xe8ed,	// (0x0001a259) ai5_sk_right_pane_g3

0xe8f5,	// (0x0001a261) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0001b7f0) ai5_sk_right_pane_g

0xe8fd,	// (0x0001a269) ai5_sk_right_pane_t1

0x92ef,	// (0x00014c5b) ai5_sk_middle_pane_g1

0x92e7,	// (0x00014c53) ai5_sk_middle_pane_g2

0x9307,	// (0x00014c73) ai5_sk_middle_pane_g3

0xe8ed,	// (0x0001a259) ai5_sk_middle_pane_g4

0xe8c7,	// (0x0001a233) ai5_sk_middle_pane_g5

0xe90b,	// (0x0001a277) ai5_sk_middle_pane_g6

0xe913,	// (0x0001a27f) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0001b7f9) ai5_sk_middle_pane_g

0x8dcc,	// (0x00014738) aid_touch_area_size_lc0_ParamLimits

0x8dcc,	// (0x00014738) aid_touch_area_size_lc0

0x5c62,	// (0x000115ce) cell_hwr_candidate_pane_t1_ParamLimits

0x8dea,	// (0x00014756) aid_touch_navi_pane

0x90dc,	// (0x00014a48) status_dt_navi_pane_ParamLimits

0x90dc,	// (0x00014a48) status_dt_navi_pane

0x90e9,	// (0x00014a55) status_dt_sta_pane_ParamLimits

0x90e9,	// (0x00014a55) status_dt_sta_pane

0xe91b,	// (0x0001a287) dt_sta_controll_pane

0xe928,	// (0x0001a294) dt_sta_indi_pane

0xe939,	// (0x0001a2a5) dt_sta_title_pane

0x69fb,	// (0x00012367) bg_dt_sta_indi_pane_ParamLimits

0x69fb,	// (0x00012367) bg_dt_sta_indi_pane

0xe94c,	// (0x0001a2b8) dt_sta_battery_pane

0xe954,	// (0x0001a2c0) dt_sta_indi_pane_g1

0xe95d,	// (0x0001a2c9) dt_sta_indi_pane_g2

0xe966,	// (0x0001a2d2) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0001b808) dt_sta_indi_pane_g

0xe96f,	// (0x0001a2db) dt_sta_signal_pane

0x7593,	// (0x00012eff) bg_dt_sta_title_pane_ParamLimits

0x7593,	// (0x00012eff) bg_dt_sta_title_pane

0xe978,	// (0x0001a2e4) dt_sta_title_pane_g1

0xe980,	// (0x0001a2ec) dt_sta_title_pane_t1_ParamLimits

0xe980,	// (0x0001a2ec) dt_sta_title_pane_t1

0x3e2f,	// (0x0000f79b) bg_dt_sta_control_pane

0xe995,	// (0x0001a301) dt_sta_controll_pane_g1

0xe99e,	// (0x0001a30a) bg_dt_sta_title_pane_g1

0xe9a7,	// (0x0001a313) bg_dt_sta_title_pane_g2

0xe9b0,	// (0x0001a31c) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0001b80f) bg_dt_sta_title_pane_g

0xbc79,	// (0x000175e5) bg_dt_sta_indi_pane_g1

0xe9b9,	// (0x0001a325) dt_sta_signal_pane_g1

0xe9c1,	// (0x0001a32d) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0001b816) dt_sta_signal_pane_g

0xe9c9,	// (0x0001a335) dt_sta_battery_pane_g1

0xe9d2,	// (0x0001a33e) dt_sta_battery_pane_t1

0xbc79,	// (0x000175e5) bg_dt_sta_control_pane_g1

0x7e51,	// (0x000137bd) fep_china_uni_eep_pane

0x7e59,	// (0x000137c5) fep_china_uni_entry_pane_ParamLimits

0x7e69,	// (0x000137d5) popup_fep_china_uni_window_g1_ParamLimits

0x7e79,	// (0x000137e5) popup_fep_china_uni_window_g2_ParamLimits

0x7e79,	// (0x000137e5) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001b09c) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001b09c) popup_fep_china_uni_window_g

0xe9e1,	// (0x0001a34d) fep_china_uni_eep_pane_g1

0xe9e9,	// (0x0001a355) fep_china_uni_eep_pane_t1

0xe4f6,	// (0x00019e62) aid_touch_area_size_smil_player

0x8f42,	// (0x000148ae) lc0_clock_pane

0x9140,	// (0x00014aac) status_pane_g5_ParamLimits

0x9140,	// (0x00014aac) status_pane_g5

0x8930,	// (0x0001429c) popup_keymap_window

0x90fe,	// (0x00014a6a) status_icon_pane

0xe656,	// (0x00019fc2) cell_ai5_widget_pane_g3_ParamLimits

0xe675,	// (0x00019fe1) cell_ai5_widget_pane_g4_ParamLimits

0xe681,	// (0x00019fed) cell_ai5_widget_pane_g5_ParamLimits

0xe6a7,	// (0x0001a013) cell_ai5_widget_pane_g8_ParamLimits

0xe6a7,	// (0x0001a013) cell_ai5_widget_pane_g8

0xe6bb,	// (0x0001a027) cell_ai5_widget_pane_g9_ParamLimits

0xe6bb,	// (0x0001a027) cell_ai5_widget_pane_g9

0xe6cf,	// (0x0001a03b) cell_ai5_widget_pane_g10_ParamLimits

0xe6cf,	// (0x0001a03b) cell_ai5_widget_pane_g10

0xe9f8,	// (0x0001a364) status_icon_pane_g1

0x3e2f,	// (0x0000f79b) bg_popup_sub_pane_cp13

0xea00,	// (0x0001a36c) popup_keymap_window_t1

0x86ba,	// (0x00014026) control_pane_g6_ParamLimits

0x86ba,	// (0x00014026) control_pane_g6

0x86c7,	// (0x00014033) control_pane_g7_ParamLimits

0x86c7,	// (0x00014033) control_pane_g7

0x86d4,	// (0x00014040) control_pane_g8_ParamLimits

0x86d4,	// (0x00014040) control_pane_g8

0xe91b,	// (0x0001a287) dt_sta_controll_pane_ParamLimits

0xe928,	// (0x0001a294) dt_sta_indi_pane_ParamLimits

0xe939,	// (0x0001a2a5) dt_sta_title_pane_ParamLimits

0x6f30,	// (0x0001289c) aid_size_touch_scroll_bar_cale

0x4ca7,	// (0x00010613) popup_discreet_window_ParamLimits

0x4ca7,	// (0x00010613) popup_discreet_window

0x4d35,	// (0x000106a1) popup_sk_window

0x99de,	// (0x0001534a) bg_popup_sub_pane_cp28_ParamLimits

0x99de,	// (0x0001534a) bg_popup_sub_pane_cp28

0xea0e,	// (0x0001a37a) popup_discreet_window_g1_ParamLimits

0xea0e,	// (0x0001a37a) popup_discreet_window_g1

0xea2e,	// (0x0001a39a) popup_discreet_window_t1_ParamLimits

0xea2e,	// (0x0001a39a) popup_discreet_window_t1

0xea4c,	// (0x0001a3b8) popup_discreet_window_t2_ParamLimits

0xea4c,	// (0x0001a3b8) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0001b81b) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0001b81b) popup_discreet_window_t

0x665d,	// (0x00011fc9) popup_sk_window_g1

0x6667,	// (0x00011fd3) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0001b822) popup_sk_window_g

0xea9e,	// (0x0001a40a) popup_sk_window_t1

0xeaac,	// (0x0001a418) popup_sk_window_t1_copy1

0xe646,	// (0x00019fb2) cell_ai5_widget_pane_g2_ParamLimits

0xe7a6,	// (0x0001a112) cell_ai5_widget_pane_t9_ParamLimits

0xe7a6,	// (0x0001a112) cell_ai5_widget_pane_t9

0x3e2f,	// (0x0000f79b) main_fep_fshwr2_pane

0xeaba,	// (0x0001a426) aid_fshwr2_btn_pane

0xeac2,	// (0x0001a42e) aid_fshwr2_syb_pane

0xeaca,	// (0x0001a436) aid_fshwr2_txt_pane

0xead2,	// (0x0001a43e) fshwr2_func_candi_pane

0xeadc,	// (0x0001a448) fshwr2_hwr_syb_pane

0xeae6,	// (0x0001a452) fshwr2_icf_pane

0x3e2f,	// (0x0000f79b) fshwr2_icf_bg_pane

0xeb08,	// (0x0001a474) fshwr2_icf_pane_t1_ParamLimits

0xeb08,	// (0x0001a474) fshwr2_icf_pane_t1

0xbc79,	// (0x000175e5) fshwr2_func_candi_pane_g1

0xeb1f,	// (0x0001a48b) fshwr2_func_candi_row_pane_ParamLimits

0xeb1f,	// (0x0001a48b) fshwr2_func_candi_row_pane

0xeb30,	// (0x0001a49c) cell_fshwr2_syb_pane_ParamLimits

0xeb30,	// (0x0001a49c) cell_fshwr2_syb_pane

0xbf45,	// (0x000178b1) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbf45,	// (0x000178b1) fshwr2_hwr_syb_pane_g1

0x3e2f,	// (0x0000f79b) bg_popup_call_pane_cp01

0xeb4a,	// (0x0001a4b6) fshwr2_func_candi_cell_pane_ParamLimits

0xeb4a,	// (0x0001a4b6) fshwr2_func_candi_cell_pane

0xeb7c,	// (0x0001a4e8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb7c,	// (0x0001a4e8) fshwr2_func_candi_cell_bg_pane

0xeb96,	// (0x0001a502) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xeb96,	// (0x0001a502) fshwr2_func_candi_cell_pane_g1

0xebb6,	// (0x0001a522) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebb6,	// (0x0001a522) fshwr2_func_candi_cell_pane_t1

0x3e2f,	// (0x0000f79b) bg_button_pane_cp08

0x83df,	// (0x00013d4b) cell_fshwr2_syb_bg_pane

0xebc9,	// (0x0001a535) cell_fshwr2_syb_bg_pane_g1

0xebd1,	// (0x0001a53d) cell_fshwr2_syb_bg_pane_t1

0x7593,	// (0x00012eff) main_tmo_pane

0xa508,	// (0x00015e74) uni_indicator_pane_g1_ParamLimits

0xa51d,	// (0x00015e89) uni_indicator_pane_g2_ParamLimits

0xa533,	// (0x00015e9f) uni_indicator_pane_g3_ParamLimits

0xa549,	// (0x00015eb5) uni_indicator_pane_g4_ParamLimits

0xa549,	// (0x00015eb5) uni_indicator_pane_g4

0xa55d,	// (0x00015ec9) uni_indicator_pane_g5_ParamLimits

0xa55d,	// (0x00015ec9) uni_indicator_pane_g5

0xa571,	// (0x00015edd) uni_indicator_pane_g6_ParamLimits

0xa571,	// (0x00015edd) uni_indicator_pane_g6

0xf92d,	// (0x0001b299) uni_indicator_pane_g_ParamLimits

0xd55c,	// (0x00018ec8) popup_tmo_note_window_ParamLimits

0xd55c,	// (0x00018ec8) popup_tmo_note_window

0x3e2f,	// (0x0000f79b) fshwr2_bg_pane

0xeba7,	// (0x0001a513) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xeba7,	// (0x0001a513) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0001b827) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0001b827) fshwr2_func_candi_cell_pane_g

0xbc79,	// (0x000175e5) bg_popup_window_pane_cp01

0xebe0,	// (0x0001a54c) bg_popup_window_pane_g1_cp01

0xebe9,	// (0x0001a555) bg_popup_window_pane_cp22_ParamLimits

0xebe9,	// (0x0001a555) bg_popup_window_pane_cp22

0xebf7,	// (0x0001a563) listscroll_tmo_link_pane_ParamLimits

0xebf7,	// (0x0001a563) listscroll_tmo_link_pane

0xec37,	// (0x0001a5a3) popup_tmo_note_window_g1_ParamLimits

0xec37,	// (0x0001a5a3) popup_tmo_note_window_g1

0xec44,	// (0x0001a5b0) tmo_note_info_pane_ParamLimits

0xec44,	// (0x0001a5b0) tmo_note_info_pane

0xec5e,	// (0x0001a5ca) list_tmo_note_info_pane_g1_ParamLimits

0xec5e,	// (0x0001a5ca) list_tmo_note_info_pane_g1

0xec75,	// (0x0001a5e1) list_tmo_note_info_pane_g2_ParamLimits

0xec75,	// (0x0001a5e1) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0001b82c) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0001b82c) list_tmo_note_info_pane_g

0xec91,	// (0x0001a5fd) list_tmo_note_info_text_pane_ParamLimits

0xec91,	// (0x0001a5fd) list_tmo_note_info_text_pane

0xed16,	// (0x0001a682) list_tmo_link_pane

0xed23,	// (0x0001a68f) scroll_pane_cp20

0xed30,	// (0x0001a69c) list_single_tmo_link_pane_ParamLimits

0xed30,	// (0x0001a69c) list_single_tmo_link_pane

0xed40,	// (0x0001a6ac) list_single_tmo_link_pane_t1

0xed4e,	// (0x0001a6ba) list_tmo_note_info_text_pane_t1_ParamLimits

0xed4e,	// (0x0001a6ba) list_tmo_note_info_text_pane_t1

0x77bb,	// (0x00013127) aid_size_touch_scroll_bar_cp01_ParamLimits

0x77bb,	// (0x00013127) aid_size_touch_scroll_bar_cp01

0x764d,	// (0x00012fb9) aid_size_touch_slider_marker

0x4d1d,	// (0x00010689) popup_settings_window_ParamLimits

0x4d1d,	// (0x00010689) popup_settings_window

0x8795,	// (0x00014101) popup_candi_list_indi_window

0x8dea,	// (0x00014756) aid_touch_navi_pane_ParamLimits

0x5e2d,	// (0x00011799) rs_clock_indi_pane

0x5e36,	// (0x000117a2) sctrl_sk_bottom_pane_ParamLimits

0x5e47,	// (0x000117b3) sctrl_sk_top_pane_ParamLimits

0x5f48,	// (0x000118b4) popup_fep_tooltip_window

0xe60a,	// (0x00019f76) aid_size_cell_widget_grid_ParamLimits

0xe63a,	// (0x00019fa6) cell_ai5_widget_pane_g1_ParamLimits

0xe63a,	// (0x00019fa6) cell_ai5_widget_pane_g1

0xe68d,	// (0x00019ff9) cell_ai5_widget_pane_g6_ParamLimits

0xe69b,	// (0x0001a007) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0001b7aa) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0001b7aa) cell_ai5_widget_pane_g

0xe7ca,	// (0x0001a136) cell_ai5_widget_pane_t10_ParamLimits

0xe7ca,	// (0x0001a136) cell_ai5_widget_pane_t10

0xe7e0,	// (0x0001a14c) grid_ai5_widget_pane_ParamLimits

0xe881,	// (0x0001a1ed) cell_contacts_ai5_widget_pane_ParamLimits

0xe881,	// (0x0001a1ed) cell_contacts_ai5_widget_pane

0xea61,	// (0x0001a3cd) popup_discreet_window_t3_ParamLimits

0xea61,	// (0x0001a3cd) popup_discreet_window_t3

0xeaf0,	// (0x0001a45c) popup_fshwr2_char_preview_window_ParamLimits

0xeaf0,	// (0x0001a45c) popup_fshwr2_char_preview_window

0xecaf,	// (0x0001a61b) tmo_note_info_pane_t1

0xecc4,	// (0x0001a630) tmo_note_info_pane_t2

0xecdd,	// (0x0001a649) tmo_note_info_pane_t3

0xecf2,	// (0x0001a65e) tmo_note_info_pane_t4

0xed04,	// (0x0001a670) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0001b831) tmo_note_info_pane_t

0xed16,	// (0x0001a682) list_tmo_link_pane_ParamLimits

0xed23,	// (0x0001a68f) scroll_pane_cp20_ParamLimits

0x3e2f,	// (0x0000f79b) bg_popup_fep_char_preview_window_cp01

0xed67,	// (0x0001a6d3) popup_fshwr2_char_preview_window_t1

0xed75,	// (0x0001a6e1) popup_candi_list_indi_window_g1

0xed7e,	// (0x0001a6ea) bg_cell_contacts_ai5_widget_pane

0xed8a,	// (0x0001a6f6) cell_contacts_ai5_widget_pane_g1

0xed9e,	// (0x0001a70a) cell_contacts_ai5_widget_pane_g2

0xedad,	// (0x0001a719) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0001b83c) cell_contacts_ai5_widget_pane_g

0xedc0,	// (0x0001a72c) cell_contacts_ai5_widget_pane_t1

0x7593,	// (0x00012eff) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee3a,	// (0x0001a7a6) settings_container_pane

0x83df,	// (0x00013d4b) listscroll_set_pane_copy1

0xb197,	// (0x00016b03) scroll_pane_cp121_copy1

0xee46,	// (0x0001a7b2) set_content_pane_copy1

0xee4e,	// (0x0001a7ba) aid_height_set_list_copy1_ParamLimits

0xee4e,	// (0x0001a7ba) aid_height_set_list_copy1

0xa799,	// (0x00016105) aid_size_parent_copy1_ParamLimits

0xa799,	// (0x00016105) aid_size_parent_copy1

0xee5a,	// (0x0001a7c6) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee5a,	// (0x0001a7c6) button_value_adjust_pane_cp6_copy1

0x876d,	// (0x000140d9) list_highlight_pane_cp2_copy1_ParamLimits

0x876d,	// (0x000140d9) list_highlight_pane_cp2_copy1

0xee6e,	// (0x0001a7da) list_set_pane_copy1_ParamLimits

0xee6e,	// (0x0001a7da) list_set_pane_copy1

0xedd5,	// (0x0001a741) main_pane_set_t1_copy1_ParamLimits

0xedd5,	// (0x0001a741) main_pane_set_t1_copy1

0xee0f,	// (0x0001a77b) main_pane_set_t2_copy1_ParamLimits

0xee0f,	// (0x0001a77b) main_pane_set_t2_copy1

0xef35,	// (0x0001a8a1) main_pane_set_t3_copy1

0xef43,	// (0x0001a8af) main_pane_set_t4_copy1

0xee2e,	// (0x0001a79a) set_content_pane_g1_copy1_ParamLimits

0xee2e,	// (0x0001a79a) set_content_pane_g1_copy1

0xef51,	// (0x0001a8bd) setting_code_pane_copy1

0xef5b,	// (0x0001a8c7) setting_slider_graphic_pane_copy1

0xef5b,	// (0x0001a8c7) setting_slider_pane_copy1

0xef5b,	// (0x0001a8c7) setting_text_pane_copy1

0xef65,	// (0x0001a8d1) setting_volume_pane_copy1

0xef6e,	// (0x0001a8da) settings_code_pane_cp2_copy1

0xef76,	// (0x0001a8e2) settings_code_pane_cp_copy1_ParamLimits

0xef76,	// (0x0001a8e2) settings_code_pane_cp_copy1

0xef8a,	// (0x0001a8f6) volume_set_pane_copy1

0xef96,	// (0x0001a902) volume_set_pane_g10_copy1

0xefa2,	// (0x0001a90e) volume_set_pane_g1_copy1

0xefac,	// (0x0001a918) volume_set_pane_g2_copy1

0xefb6,	// (0x0001a922) volume_set_pane_g3_copy1

0xefc0,	// (0x0001a92c) volume_set_pane_g4_copy1

0xefca,	// (0x0001a936) volume_set_pane_g5_copy1

0xefd4,	// (0x0001a940) volume_set_pane_g6_copy1

0xefde,	// (0x0001a94a) volume_set_pane_g7_copy1

0xefe8,	// (0x0001a954) volume_set_pane_g8_copy1

0xeff2,	// (0x0001a95e) volume_set_pane_g9_copy1

0x6757,	// (0x000120c3) bg_set_opt_pane_cp_copy1_ParamLimits

0x6757,	// (0x000120c3) bg_set_opt_pane_cp_copy1

0xeffc,	// (0x0001a968) setting_slider_pane_t1_copy1_ParamLimits

0xeffc,	// (0x0001a968) setting_slider_pane_t1_copy1

0xf01a,	// (0x0001a986) setting_slider_pane_t2_copy1_ParamLimits

0xf01a,	// (0x0001a986) setting_slider_pane_t2_copy1

0xf034,	// (0x0001a9a0) setting_slider_pane_t3_copy1_ParamLimits

0xf034,	// (0x0001a9a0) setting_slider_pane_t3_copy1

0xf04c,	// (0x0001a9b8) slider_set_pane_copy1_ParamLimits

0xf04c,	// (0x0001a9b8) slider_set_pane_copy1

0x76cf,	// (0x0001303b) set_opt_bg_pane_g1_copy2

0x76d7,	// (0x00013043) set_opt_bg_pane_g2_copy2

0xf062,	// (0x0001a9ce) set_opt_bg_pane_g3_copy2

0x76e7,	// (0x00013053) set_opt_bg_pane_g4_copy2

0x76ef,	// (0x0001305b) set_opt_bg_pane_g5_copy2

0x76f7,	// (0x00013063) set_opt_bg_pane_g6_copy2

0xf06c,	// (0x0001a9d8) set_opt_bg_pane_g7_copy2

0xf076,	// (0x0001a9e2) set_opt_bg_pane_g8_copy2

0xf080,	// (0x0001a9ec) set_opt_bg_pane_g9_copy2

0xf08a,	// (0x0001a9f6) aid_size_touch_slider_mark_copy1_ParamLimits

0xf08a,	// (0x0001a9f6) aid_size_touch_slider_mark_copy1

0xf09e,	// (0x0001aa0a) slider_set_pane_g1_copy1

0xf0a7,	// (0x0001aa13) slider_set_pane_g2_copy1

0xbd3f,	// (0x000176ab) slider_set_pane_g3_copy1_ParamLimits

0xbd3f,	// (0x000176ab) slider_set_pane_g3_copy1

0xbd53,	// (0x000176bf) slider_set_pane_g4_copy1_ParamLimits

0xbd53,	// (0x000176bf) slider_set_pane_g4_copy1

0xbd6b,	// (0x000176d7) slider_set_pane_g5_copy1_ParamLimits

0xbd6b,	// (0x000176d7) slider_set_pane_g5_copy1

0xbd3f,	// (0x000176ab) slider_set_pane_g6_copy1_ParamLimits

0xbd3f,	// (0x000176ab) slider_set_pane_g6_copy1

0xf0af,	// (0x0001aa1b) slider_set_pane_g7_copy1_ParamLimits

0xf0af,	// (0x0001aa1b) slider_set_pane_g7_copy1

0x3fb2,	// (0x0000f91e) bg_set_opt_pane_cp2_copy1

0xf0c5,	// (0x0001aa31) setting_slider_graphic_pane_g1_copy1

0xf0ce,	// (0x0001aa3a) setting_slider_graphic_pane_t1_copy1

0xf0de,	// (0x0001aa4a) setting_slider_graphic_pane_t2_copy1

0xf0ee,	// (0x0001aa5a) slider_set_pane_cp_copy1

0xf0fe,	// (0x0001aa6a) input_focus_pane_cp1_copy1

0xf107,	// (0x0001aa73) list_set_text_pane_copy1

0xf10f,	// (0x0001aa7b) setting_text_pane_g1_copy1

0xf118,	// (0x0001aa84) set_text_pane_t1_copy1

0xf0fe,	// (0x0001aa6a) input_focus_pane_cp2_copy1

0xf10f,	// (0x0001aa7b) setting_code_pane_g1_copy1

0xf131,	// (0x0001aa9d) setting_code_pane_t1_copy1

0xf13f,	// (0x0001aaab) list_set_graphic_pane_copy1

0x3fb2,	// (0x0000f91e) bg_set_opt_pane_cp4_copy1

0x80d9,	// (0x00013a45) list_set_graphic_pane_g1_copy1_ParamLimits

0x80d9,	// (0x00013a45) list_set_graphic_pane_g1_copy1

0xf151,	// (0x0001aabd) list_set_graphic_pane_g2_copy1

0x80f1,	// (0x00013a5d) list_set_graphic_pane_t1_copy1_ParamLimits

0x80f1,	// (0x00013a5d) list_set_graphic_pane_t1_copy1

0xbc79,	// (0x000175e5) rs_clock_indi_pane_g1

0xf159,	// (0x0001aac5) rs_clock_indi_pane_t1

0xf167,	// (0x0001aad3) rs_indi_pane

0xf16f,	// (0x0001aadb) rs_indi_pane_g1

0xf178,	// (0x0001aae4) rs_indi_pane_g2

0xf181,	// (0x0001aaed) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0001b843) rs_indi_pane_g

0x83df,	// (0x00013d4b) bg_popup_preview_window_pane_cp03

0xf18a,	// (0x0001aaf6) popup_fep_tooltip_window_t1

0xcb91,	// (0x000184fd) popup_note2_window_g2_ParamLimits

0xcb91,	// (0x000184fd) popup_note2_window_g2

0x0001,

0xfc70,	// (0x0001b5dc) popup_note2_window_g_ParamLimits

0xfc70,	// (0x0001b5dc) popup_note2_window_g

0xd188,	// (0x00018af4) bg_popup_sub_pane_cp11_ParamLimits

0xd195,	// (0x00018b01) cell_ai3_links_pane_g1_ParamLimits

0xd1ac,	// (0x00018b18) cell_ai3_links_pane_t1

0xf118,	// (0x0001aa84) set_text_pane_t1_copy1_ParamLimits

0x82ec,	// (0x00013c58) cell_graphic_popup_pane_cp2_ParamLimits

0x82ec,	// (0x00013c58) cell_graphic_popup_pane_cp2

0xf198,	// (0x0001ab04) cell_graphic_popup_pane_g1_cp2

0x6d43,	// (0x000126af) cell_graphic_popup_pane_g2_cp2

0xf1a0,	// (0x0001ab0c) cell_graphic_popup_pane_g3_cp2

0xf1a8,	// (0x0001ab14) cell_graphic_popup_pane_t2_cp2

0x6d54,	// (0x000126c0) grid_highlight_pane_cp3_cp2

0x7aa8,	// (0x00013414) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7593,	// (0x00012eff) main_tmo_pane_ParamLimits

0xd550,	// (0x00018ebc) popup_tmo_big_image_note_window

0xe62a,	// (0x00019f96) cell_ai5_widget_list_pane

0xe632,	// (0x00019f9e) cell_ai5_widget_lrg_icon_pane

0xecaf,	// (0x0001a61b) tmo_note_info_pane_t1_ParamLimits

0xecc4,	// (0x0001a630) tmo_note_info_pane_t2_ParamLimits

0xecdd,	// (0x0001a649) tmo_note_info_pane_t3_ParamLimits

0xecf2,	// (0x0001a65e) tmo_note_info_pane_t4_ParamLimits

0xed04,	// (0x0001a670) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0001b831) tmo_note_info_pane_t_ParamLimits

0xee3a,	// (0x0001a7a6) settings_container_pane_ParamLimits

0xf0f6,	// (0x0001aa62) indicator_popup_pane_cp5

0xf0f6,	// (0x0001aa62) indicator_popup_pane_cp6

0xf13f,	// (0x0001aaab) list_set_graphic_pane_copy1_ParamLimits

0x3e2f,	// (0x0000f79b) bg_popup_window_pane_cp23

0xf1b6,	// (0x0001ab22) popup_tmo_big_image_note_window_g1

0xf1c2,	// (0x0001ab2e) popup_tmo_big_image_note_window_t1

0xf1d2,	// (0x0001ab3e) popup_tmo_big_image_note_window_t2

0xf1e2,	// (0x0001ab4e) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0001b84a) popup_tmo_big_image_note_window_t

0xf1f2,	// (0x0001ab5e) cell_ai5_widget_lrg_icon_pane_g1

0xf1fa,	// (0x0001ab66) cell_ai5_widget_lrg_icon_pane_t1

0xf208,	// (0x0001ab74) cell_ai5_widget_list_row_pane_ParamLimits

0xf208,	// (0x0001ab74) cell_ai5_widget_list_row_pane

0xf221,	// (0x0001ab8d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf221,	// (0x0001ab8d) cell_ai5_widget_list_row_pane_g1

0xf22e,	// (0x0001ab9a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22e,	// (0x0001ab9a) cell_ai5_widget_list_row_pane_t1

0xf246,	// (0x0001abb2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf246,	// (0x0001abb2) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee5,	// (0x0001b851) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0001b851) cell_ai5_widget_list_row_pane_t

0x4bca,	// (0x00010536) main_fep_vtchi_ss_pane

0xf258,	// (0x0001abc4) popup_fep_char_pre_window

0xf260,	// (0x0001abcc) popup_fep_ituss_window

0xf281,	// (0x0001abed) popup_fep_vkbss_window

0xf2a2,	// (0x0001ac0e) grid_vkbss_keypad_pane_ParamLimits

0xf2a2,	// (0x0001ac0e) grid_vkbss_keypad_pane

0xf2b2,	// (0x0001ac1e) ituss_keypad_pane

0xf2ca,	// (0x0001ac36) aid_vkbss_key_offset_ParamLimits

0xf2ca,	// (0x0001ac36) aid_vkbss_key_offset

0xf2d6,	// (0x0001ac42) cell_vkbss_key_pane_ParamLimits

0xf2d6,	// (0x0001ac42) cell_vkbss_key_pane

0xf2ec,	// (0x0001ac58) bg_cell_vkbss_key_g1_ParamLimits

0xf2ec,	// (0x0001ac58) bg_cell_vkbss_key_g1

0xf2f8,	// (0x0001ac64) cell_vkbss_key_3p_pane_ParamLimits

0xf2f8,	// (0x0001ac64) cell_vkbss_key_3p_pane

0xf312,	// (0x0001ac7e) cell_vkbss_key_g1_ParamLimits

0xf312,	// (0x0001ac7e) cell_vkbss_key_g1

0xf32c,	// (0x0001ac98) cell_vkbss_key_t1_ParamLimits

0xf32c,	// (0x0001ac98) cell_vkbss_key_t1

0xf357,	// (0x0001acc3) cell_ituss_key_pane_ParamLimits

0xf357,	// (0x0001acc3) cell_ituss_key_pane

0xf367,	// (0x0001acd3) bg_cell_ituss_key_g1_ParamLimits

0xf367,	// (0x0001acd3) bg_cell_ituss_key_g1

0xf373,	// (0x0001acdf) cell_ituss_key_pane_g1_ParamLimits

0xf373,	// (0x0001acdf) cell_ituss_key_pane_g1

0xf37f,	// (0x0001aceb) cell_ituss_key_pane_g2_ParamLimits

0xf37f,	// (0x0001aceb) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0001b856) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0001b856) cell_ituss_key_pane_g

0xf398,	// (0x0001ad04) cell_ituss_key_t1_ParamLimits

0xf398,	// (0x0001ad04) cell_ituss_key_t1

0xf3c6,	// (0x0001ad32) cell_ituss_key_t2_ParamLimits

0xf3c6,	// (0x0001ad32) cell_ituss_key_t2

0xf3f7,	// (0x0001ad63) cell_ituss_key_t3_ParamLimits

0xf3f7,	// (0x0001ad63) cell_ituss_key_t3

0xf428,	// (0x0001ad94) cell_ituss_key_t4_ParamLimits

0xf428,	// (0x0001ad94) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0001b85b) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0001b85b) cell_ituss_key_t

0xf459,	// (0x0001adc5) cell_vkbss_key_3p_pane_g1

0xf461,	// (0x0001adcd) cell_vkbss_key_3p_pane_g2

0xf469,	// (0x0001add5) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001b864) cell_vkbss_key_3p_pane_g

0x3e2f,	// (0x0000f79b) bg_popup_fep_char_preview_window_cp02

0xf471,	// (0x0001addd) popup_fep_char_pre_window_t1

0xe600,	// (0x00019f6c) main_ai5_sk_pane

0xed7e,	// (0x0001a6ea) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed8a,	// (0x0001a6f6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed9e,	// (0x0001a70a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedad,	// (0x0001a719) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0001b83c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedc0,	// (0x0001a72c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7593,	// (0x00012eff) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf480,	// (0x0001adec) main_ai5_sk_pane_g1

0x9816,	// (0x00015182) popup_query_code_window_g1

0xf276,	// (0x0001abe2) popup_fep_vkb_icf_pane

0xf28c,	// (0x0001abf8) popup_fep_vtchi_icf_pane

0x7593,	// (0x00012eff) bg_icf_pane

0xf498,	// (0x0001ae04) list_vkb_icf_pane

0x7593,	// (0x00012eff) bg_icf_pane_cp01

0xf4b0,	// (0x0001ae1c) vtchi_icf_list_pane

0xf4c0,	// (0x0001ae2c) list_vkb_icf_pane_t1_ParamLimits

0xf4c0,	// (0x0001ae2c) list_vkb_icf_pane_t1

0xf4d7,	// (0x0001ae43) vtchi_icf_list_pane_t1_ParamLimits

0xf4d7,	// (0x0001ae43) vtchi_icf_list_pane_t1

0xf260,	// (0x0001abcc) popup_fep_ituss_window_ParamLimits

0xf28c,	// (0x0001abf8) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b2,	// (0x0001ac1e) ituss_keypad_pane_ParamLimits

0xf2c1,	// (0x0001ac2d) ituss_sks_pane

0x7593,	// (0x00012eff) bg_icf_pane_ParamLimits

0xf489,	// (0x0001adf5) icf_edit_indi_pane_ParamLimits

0xf489,	// (0x0001adf5) icf_edit_indi_pane

0xf498,	// (0x0001ae04) list_vkb_icf_pane_ParamLimits

0x7593,	// (0x00012eff) bg_icf_pane_cp01_ParamLimits

0xf4a4,	// (0x0001ae10) icf_edit_indi_pane_cp01_ParamLimits

0xf4a4,	// (0x0001ae10) icf_edit_indi_pane_cp01

0xf4b8,	// (0x0001ae24) vtchi_query_pane

0xbf45,	// (0x000178b1) icf_edit_indi_pane_g1_ParamLimits

0xbf45,	// (0x000178b1) icf_edit_indi_pane_g1

0xf4f0,	// (0x0001ae5c) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x0001ae5c) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0001b86b) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0001b86b) icf_edit_indi_pane_g

0xf4fc,	// (0x0001ae68) icf_edit_indi_pane_t1

0xf50a,	// (0x0001ae76) bg_input_focus_pane_cp042

0x6f27,	// (0x00012893) vtchi_button_pane

0xf513,	// (0x0001ae7f) vtchi_query_pane_t1

0xf521,	// (0x0001ae8d) vtchi_query_pane_t2

0xf52f,	// (0x0001ae9b) vtchi_query_pane_t3

0x0002,

0xff04,	// (0x0001b870) vtchi_query_pane_t

0x3e2f,	// (0x0000f79b) bg_button_pane_cp13

0xf53d,	// (0x0001aea9) vtchi_button_pane_g1

0xda7b,	// (0x000193e7) ituss_sks_pane_g1

0xf545,	// (0x0001aeb1) ituss_sks_pane_g2

0x0001,

0xff0b,	// (0x0001b877) ituss_sks_pane_g

0xf54e,	// (0x0001aeba) ituss_sks_pane_t1

0xf55c,	// (0x0001aec8) ituss_sks_pane_t2

0x0001,

0xff10,	// (0x0001b87c) ituss_sks_pane_t

0xb6ca,	// (0x00017036) indicator_nsta_pane_cp_g1

0xb6d3,	// (0x0001703f) indicator_nsta_pane_cp_g2

0xb6db,	// (0x00017047) indicator_nsta_pane_cp_g3

0xb6e3,	// (0x0001704f) indicator_nsta_pane_cp_g4

0xb6eb,	// (0x00017057) indicator_nsta_pane_cp_g5

0xb6f3,	// (0x0001705f) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0001b41a) indicator_nsta_pane_cp_g

0xe211,	// (0x00019b7d) cell_graphic2_pane_t2_ParamLimits

0xe211,	// (0x00019b7d) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0001b733) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0001b733) cell_graphic2_pane_t

0xe23e,	// (0x00019baa) cell_graphic2_control_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal

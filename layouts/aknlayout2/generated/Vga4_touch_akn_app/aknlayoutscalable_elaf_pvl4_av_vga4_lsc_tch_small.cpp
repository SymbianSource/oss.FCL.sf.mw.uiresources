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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000254cf };

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
0xa187,	// (0x0002f656) Screen

0xa19b,	// (0x0002f66a) application_window_ParamLimits

0xa19b,	// (0x0002f66a) application_window

0xa1b5,	// (0x0002f684) screen_g1

0xa1e7,	// (0x0002f6b6) area_bottom_pane_ParamLimits

0xa1e7,	// (0x0002f6b6) area_bottom_pane

0xf14f,	// (0x0003461e) area_top_pane_ParamLimits

0xf14f,	// (0x0003461e) area_top_pane

0xf1e3,	// (0x000346b2) main_pane_ParamLimits

0xf1e3,	// (0x000346b2) main_pane

0xa2a5,	// (0x0002f774) misc_graphics

0xb74e,	// (0x00030c1d) battery_pane_ParamLimits

0xb74e,	// (0x00030c1d) battery_pane

0x3626,	// (0x00028af5) bg_status_flat_pane_g8

0x362e,	// (0x00028afd) bg_status_flat_pane_g9

0x18eb,	// (0x00026dba) context_pane_ParamLimits

0x18eb,	// (0x00026dba) context_pane

0xb8c5,	// (0x00030d94) navi_pane_ParamLimits

0xb8c5,	// (0x00030d94) navi_pane

0xb94f,	// (0x00030e1e) signal_pane_ParamLimits

0xb94f,	// (0x00030e1e) signal_pane

0x0008,

0xf87a,	// (0x00034d49) bg_status_flat_pane_g

0xb9df,	// (0x00030eae) status_pane_g1_ParamLimits

0xb9df,	// (0x00030eae) status_pane_g1

0xb9f5,	// (0x00030ec4) status_pane_g2_ParamLimits

0xb9f5,	// (0x00030ec4) status_pane_g2

0x1b2c,	// (0x00026ffb) status_pane_g3_ParamLimits

0x1b2c,	// (0x00026ffb) status_pane_g3

0x0004,

0xf7a6,	// (0x00034c75) status_pane_g_ParamLimits

0xf7a6,	// (0x00034c75) status_pane_g

0xba01,	// (0x00030ed0) title_pane_ParamLimits

0xba01,	// (0x00030ed0) title_pane

0xba64,	// (0x00030f33) uni_indicator_pane_ParamLimits

0xba64,	// (0x00030f33) uni_indicator_pane

0x1114,	// (0x000265e3) bg_list_pane_ParamLimits

0x1114,	// (0x000265e3) bg_list_pane

0x9f04,	// (0x0002f3d3) find_pane

0xaf9e,	// (0x0003046d) listscroll_app_pane_ParamLimits

0xaf9e,	// (0x0003046d) listscroll_app_pane

0x1148,	// (0x00026617) listscroll_form_pane

0x9f0c,	// (0x0002f3db) listscroll_gen_pane_ParamLimits

0x9f0c,	// (0x0002f3db) listscroll_gen_pane

0x1148,	// (0x00026617) listscroll_set_pane

0x41df,	// (0x000296ae) main_idle_act_pane

0x0c09,	// (0x000260d8) main_idle_trad_pane

0x0c09,	// (0x000260d8) main_list_empty_pane

0x1176,	// (0x00026645) main_midp_pane

0x1182,	// (0x00026651) main_pane_g1_ParamLimits

0x1182,	// (0x00026651) main_pane_g1

0xafaa,	// (0x00030479) popup_ai_message_window_ParamLimits

0xafaa,	// (0x00030479) popup_ai_message_window

0xb04a,	// (0x00030519) popup_fep_china_uni_window_ParamLimits

0xb04a,	// (0x00030519) popup_fep_china_uni_window

0x12a4,	// (0x00026773) popup_fep_japan_candidate_window_ParamLimits

0x12a4,	// (0x00026773) popup_fep_japan_candidate_window

0x12ce,	// (0x0002679d) popup_fep_japan_predictive_window_ParamLimits

0x12ce,	// (0x0002679d) popup_fep_japan_predictive_window

0xb0aa,	// (0x00030579) popup_find_window

0xb0c7,	// (0x00030596) popup_grid_graphic_window_ParamLimits

0xb0c7,	// (0x00030596) popup_grid_graphic_window

0x133f,	// (0x0002680e) popup_large_graphic_colour_window

0xb16b,	// (0x0003063a) popup_menu_window_ParamLimits

0xb16b,	// (0x0003063a) popup_menu_window

0xb35b,	// (0x0003082a) popup_note_image_window

0xb31b,	// (0x000307ea) popup_note_wait_window_ParamLimits

0xb31b,	// (0x000307ea) popup_note_wait_window

0xb373,	// (0x00030842) popup_note_window_ParamLimits

0xb373,	// (0x00030842) popup_note_window

0xb421,	// (0x000308f0) popup_query_code_window_ParamLimits

0xb421,	// (0x000308f0) popup_query_code_window

0x15ab,	// (0x00026a7a) popup_query_data_code_window_ParamLimits

0x15ab,	// (0x00026a7a) popup_query_data_code_window

0xb461,	// (0x00030930) popup_query_data_window_ParamLimits

0xb461,	// (0x00030930) popup_query_data_window

0xb4f5,	// (0x000309c4) popup_query_sat_info_window_ParamLimits

0xb4f5,	// (0x000309c4) popup_query_sat_info_window

0xb5a0,	// (0x00030a6f) popup_snote_single_graphic_window_ParamLimits

0xb5a0,	// (0x00030a6f) popup_snote_single_graphic_window

0xb5a0,	// (0x00030a6f) popup_snote_single_text_window_ParamLimits

0xb5a0,	// (0x00030a6f) popup_snote_single_text_window

0x1646,	// (0x00026b15) popup_sub_window_general

0x178c,	// (0x00026c5b) popup_window_general_ParamLimits

0x178c,	// (0x00026c5b) popup_window_general

0x17a5,	// (0x00026c74) power_save_pane

0xae0c,	// (0x000302db) control_pane_g1_ParamLimits

0xae0c,	// (0x000302db) control_pane_g1

0xae35,	// (0x00030304) control_pane_g2_ParamLimits

0xae35,	// (0x00030304) control_pane_g2

0x0fc1,	// (0x00026490) control_pane_g3_ParamLimits

0x0fc1,	// (0x00026490) control_pane_g3

0x0007,

0xf78e,	// (0x00034c5d) control_pane_g_ParamLimits

0xf78e,	// (0x00034c5d) control_pane_g

0xae97,	// (0x00030366) control_pane_t1_ParamLimits

0xae97,	// (0x00030366) control_pane_t1

0xaef5,	// (0x000303c4) control_pane_t2_ParamLimits

0xaef5,	// (0x000303c4) control_pane_t2

0x0002,

0xf79f,	// (0x00034c6e) control_pane_t_ParamLimits

0xf79f,	// (0x00034c6e) control_pane_t

0x0e94,	// (0x00026363) navi_navi_volume_pane_cp1

0x0e9d,	// (0x0002636c) status_small_icon_pane

0x0ea5,	// (0x00026374) status_small_pane_g1_ParamLimits

0x0ea5,	// (0x00026374) status_small_pane_g1

0x0ed9,	// (0x000263a8) status_small_pane_g2_ParamLimits

0x0ed9,	// (0x000263a8) status_small_pane_g2

0x0ee5,	// (0x000263b4) status_small_pane_g3_ParamLimits

0x0ee5,	// (0x000263b4) status_small_pane_g3

0x0ef1,	// (0x000263c0) status_small_pane_g4_ParamLimits

0x0ef1,	// (0x000263c0) status_small_pane_g4

0x0efd,	// (0x000263cc) status_small_pane_g5_ParamLimits

0x0efd,	// (0x000263cc) status_small_pane_g5

0x0f0c,	// (0x000263db) status_small_pane_g6_ParamLimits

0x0f0c,	// (0x000263db) status_small_pane_g6

0x0007,

0xf77d,	// (0x00034c4c) status_small_pane_g_ParamLimits

0xf77d,	// (0x00034c4c) status_small_pane_g

0x0f3c,	// (0x0002640b) status_small_pane_t1

0x0f5f,	// (0x0002642e) status_small_wait_pane_ParamLimits

0x0f5f,	// (0x0002642e) status_small_wait_pane

0xabe2,	// (0x000300b1) aid_levels_signal_ParamLimits

0xabe2,	// (0x000300b1) aid_levels_signal

0xabfa,	// (0x000300c9) signal_pane_g1_ParamLimits

0xabfa,	// (0x000300c9) signal_pane_g1

0xac15,	// (0x000300e4) signal_pane_g2_ParamLimits

0xac15,	// (0x000300e4) signal_pane_g2

0x0003,

0xf70e,	// (0x00034bdd) signal_pane_g_ParamLimits

0xf70e,	// (0x00034bdd) signal_pane_g

0x0539,	// (0x00025a08) context_pane_g1

0xa36e,	// (0x0002f83d) title_pane_g1

0xa3b1,	// (0x0002f880) title_pane_t1

0xa43d,	// (0x0002f90c) title_pane_t2

0xa463,	// (0x0002f932) title_pane_t3

0x0002,

0xf55d,	// (0x00034a2c) title_pane_t

0xba8c,	// (0x00030f5b) aid_levels_battery_ParamLimits

0xba8c,	// (0x00030f5b) aid_levels_battery

0xbaa8,	// (0x00030f77) battery_pane_g1_ParamLimits

0xbaa8,	// (0x00030f77) battery_pane_g1

0xbac5,	// (0x00030f94) battery_pane_g2_ParamLimits

0xbac5,	// (0x00030f94) battery_pane_g2

0x0001,

0xf7b1,	// (0x00034c80) battery_pane_g_ParamLimits

0xf7b1,	// (0x00034c80) battery_pane_g

0xbf54,	// (0x00031423) uni_indicator_pane_g1

0xbf69,	// (0x00031438) uni_indicator_pane_g2

0xbf7e,	// (0x0003144d) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x00034df1) uni_indicator_pane_g

0x0a77,	// (0x00025f46) navi_icon_pane_ParamLimits

0x0a77,	// (0x00025f46) navi_icon_pane

0x09be,	// (0x00025e8d) navi_midp_pane

0x0a93,	// (0x00025f62) navi_navi_pane

0x0a9d,	// (0x00025f6c) navi_text_pane_ParamLimits

0x0a9d,	// (0x00025f6c) navi_text_pane

0xa1b5,	// (0x0002f684) status_small_wait_pane_g1

0xcf0a,	// (0x000323d9) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x00034dec) status_small_wait_pane_g

0xbebb,	// (0x0003138a) navi_navi_icon_text_pane

0xbec3,	// (0x00031392) navi_navi_pane_g1_ParamLimits

0xbec3,	// (0x00031392) navi_navi_pane_g1

0xbed5,	// (0x000313a4) navi_navi_pane_g2_ParamLimits

0xbed5,	// (0x000313a4) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x00034dba) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x00034dba) navi_navi_pane_g

0x3cb5,	// (0x00029184) navi_navi_tabs_pane

0xbee7,	// (0x000313b6) navi_navi_text_pane

0xbebb,	// (0x0003138a) navi_navi_volume_pane

0xbea9,	// (0x00031378) navi_text_pane_t1

0xbe9d,	// (0x0003136c) navi_icon_pane_g1

0x3ba6,	// (0x00029075) navi_navi_text_pane_t1

0xbe78,	// (0x00031347) navi_navi_volume_pane_g1

0xbe80,	// (0x0003134f) volume_small_pane

0xbdd4,	// (0x000312a3) navi_navi_icon_text_pane_g1

0xbddc,	// (0x000312ab) navi_navi_icon_text_pane_t1

0x0a93,	// (0x00025f62) navi_tabs_2_long_pane

0x0a93,	// (0x00025f62) navi_tabs_2_pane

0x0a93,	// (0x00025f62) navi_tabs_3_long_pane

0x0a93,	// (0x00025f62) navi_tabs_3_pane

0x0a93,	// (0x00025f62) navi_tabs_4_pane

0xbd92,	// (0x00031261) tabs_2_active_pane_ParamLimits

0xbd92,	// (0x00031261) tabs_2_active_pane

0xbda2,	// (0x00031271) tabs_2_passive_pane_ParamLimits

0xbda2,	// (0x00031271) tabs_2_passive_pane

0xbd60,	// (0x0003122f) tabs_3_active_pane_ParamLimits

0xbd60,	// (0x0003122f) tabs_3_active_pane

0xbd70,	// (0x0003123f) tabs_3_passive_pane_ParamLimits

0xbd70,	// (0x0003123f) tabs_3_passive_pane

0xbd81,	// (0x00031250) tabs_3_passive_pane_cp_ParamLimits

0xbd81,	// (0x00031250) tabs_3_passive_pane_cp

0xbd1c,	// (0x000311eb) tabs_4_active_pane_ParamLimits

0xbd1c,	// (0x000311eb) tabs_4_active_pane

0xbd2d,	// (0x000311fc) tabs_4_passive_pane_ParamLimits

0xbd2d,	// (0x000311fc) tabs_4_passive_pane

0xbd3e,	// (0x0003120d) tabs_4_passive_pane_cp_ParamLimits

0xbd3e,	// (0x0003120d) tabs_4_passive_pane_cp

0xbd4f,	// (0x0003121e) tabs_4_passive_pane_cp2_ParamLimits

0xbd4f,	// (0x0003121e) tabs_4_passive_pane_cp2

0xbcf8,	// (0x000311c7) tabs_2_long_active_pane_ParamLimits

0xbcf8,	// (0x000311c7) tabs_2_long_active_pane

0xbd0a,	// (0x000311d9) tabs_2_long_passive_pane_ParamLimits

0xbd0a,	// (0x000311d9) tabs_2_long_passive_pane

0xbcad,	// (0x0003117c) tabs_3_long_active_pane_ParamLimits

0xbcad,	// (0x0003117c) tabs_3_long_active_pane

0xbcc6,	// (0x00031195) tabs_3_long_passive_pane_ParamLimits

0xbcc6,	// (0x00031195) tabs_3_long_passive_pane

0xbcdf,	// (0x000311ae) tabs_3_long_passive_pane_cp_ParamLimits

0xbcdf,	// (0x000311ae) tabs_3_long_passive_pane_cp

0x1d1e,	// (0x000271ed) volume_small_pane_g1

0xbc5c,	// (0x0003112b) volume_small_pane_g2

0xbc65,	// (0x00031134) volume_small_pane_g3

0xbc6e,	// (0x0003113d) volume_small_pane_g4

0xbc77,	// (0x00031146) volume_small_pane_g5

0xbc80,	// (0x0003114f) volume_small_pane_g6

0xbc89,	// (0x00031158) volume_small_pane_g7

0xbc92,	// (0x00031161) volume_small_pane_g8

0xbc9b,	// (0x0003116a) volume_small_pane_g9

0xbca4,	// (0x00031173) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x00034d86) volume_small_pane_g

0xa475,	// (0x0002f944) bg_active_tab_pane_cp2_ParamLimits

0xa475,	// (0x0002f944) bg_active_tab_pane_cp2

0xa483,	// (0x0002f952) tabs_3_active_pane_g1

0xa48b,	// (0x0002f95a) tabs_3_active_pane_t1

0xa475,	// (0x0002f944) bg_passive_tab_pane_cp2_ParamLimits

0xa475,	// (0x0002f944) bg_passive_tab_pane_cp2

0xa483,	// (0x0002f952) tabs_3_passive_pane_g1

0xa48b,	// (0x0002f95a) tabs_3_passive_pane_t1

0xa475,	// (0x0002f944) bg_active_tab_pane_cp3_ParamLimits

0xa475,	// (0x0002f944) bg_active_tab_pane_cp3

0xa49d,	// (0x0002f96c) tabs_4_active_pane_g1

0xa4a5,	// (0x0002f974) tabs_4_active_pane_t1

0xa475,	// (0x0002f944) bg_passive_tab_pane_cp3_ParamLimits

0xa475,	// (0x0002f944) bg_passive_tab_pane_cp3

0xa49d,	// (0x0002f96c) tabs_4_1_passive_pane_g1

0xa4a5,	// (0x0002f974) tabs_4_1_passive_pane_t1

0x1176,	// (0x00026645) list_highlight_pane_cp2

0xc03c,	// (0x0003150b) list_set_pane_ParamLimits

0xc03c,	// (0x0003150b) list_set_pane

0xc104,	// (0x000315d3) main_pane_set_t1_ParamLimits

0xc104,	// (0x000315d3) main_pane_set_t1

0xc124,	// (0x000315f3) main_pane_set_t2_ParamLimits

0xc124,	// (0x000315f3) main_pane_set_t2

0xc138,	// (0x00031607) main_pane_set_t3_ParamLimits

0xc138,	// (0x00031607) main_pane_set_t3

0xc14c,	// (0x0003161b) main_pane_set_t4_ParamLimits

0xc14c,	// (0x0003161b) main_pane_set_t4

0x0003,

0xf987,	// (0x00034e56) main_pane_set_t_ParamLimits

0xf987,	// (0x00034e56) main_pane_set_t

0xc160,	// (0x0003162f) setting_code_pane

0x4333,	// (0x00029802) setting_slider_graphic_pane

0x4333,	// (0x00029802) setting_slider_pane

0x4333,	// (0x00029802) setting_text_pane

0x4333,	// (0x00029802) setting_volume_pane

0xf4c1,	// (0x00034990) volume_set_pane

0xa4b7,	// (0x0002f986) bg_set_opt_pane_cp

0xf4cb,	// (0x0003499a) setting_slider_pane_t1

0xf4e4,	// (0x000349b3) setting_slider_pane_t2

0xf4fe,	// (0x000349cd) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00034a33) setting_slider_pane_t

0xf516,	// (0x000349e5) slider_set_pane

0xa2a5,	// (0x0002f774) bg_set_opt_pane_cp2

0xa4c5,	// (0x0002f994) setting_slider_graphic_pane_g1

0xf52c,	// (0x000349fb) setting_slider_graphic_pane_t1

0xf53c,	// (0x00034a0b) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00034a3a) setting_slider_graphic_pane_t

0xf54c,	// (0x00034a1b) slider_set_pane_cp

0xa2a5,	// (0x0002f774) input_focus_pane_cp1

0x41c6,	// (0x00029695) list_set_text_pane

0xa1b5,	// (0x0002f684) setting_text_pane_g1

0xa2a5,	// (0x0002f774) input_focus_pane_cp2

0xa1b5,	// (0x0002f684) setting_code_pane_g1

0xa4ce,	// (0x0002f99d) setting_code_pane_t1

0xeb73,	// (0x00034042) set_text_pane_t1_ParamLimits

0xeb73,	// (0x00034042) set_text_pane_t1

0xd2ab,	// (0x0003277a) set_opt_bg_pane_g1

0xd2b3,	// (0x00032782) set_opt_bg_pane_g2

0x419e,	// (0x0002966d) set_opt_bg_pane_g3

0xd2c3,	// (0x00032792) set_opt_bg_pane_g4

0xd2cb,	// (0x0003279a) set_opt_bg_pane_g5

0xd2d3,	// (0x000327a2) set_opt_bg_pane_g6

0x41a8,	// (0x00029677) set_opt_bg_pane_g7

0x41b2,	// (0x00029681) set_opt_bg_pane_g8

0x41bc,	// (0x0002968b) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x00034e43) set_opt_bg_pane_g

0x4191,	// (0x00029660) slider_set_pane_g1

0x1f02,	// (0x000273d1) slider_set_pane_g2

0x0006,

0xf965,	// (0x00034e34) slider_set_pane_g

0x1e8a,	// (0x00027359) volume_set_pane_g1

0x1e94,	// (0x00027363) volume_set_pane_g2

0x1e9e,	// (0x0002736d) volume_set_pane_g3

0x1ea8,	// (0x00027377) volume_set_pane_g4

0x1eb2,	// (0x00027381) volume_set_pane_g5

0x1ebc,	// (0x0002738b) volume_set_pane_g6

0x1ec6,	// (0x00027395) volume_set_pane_g7

0x1ed0,	// (0x0002739f) volume_set_pane_g8

0x1eda,	// (0x000273a9) volume_set_pane_g9

0x1ee4,	// (0x000273b3) volume_set_pane_g10

0x0009,

0xf93d,	// (0x00034e0c) volume_set_pane_g

0xa4dc,	// (0x0002f9ab) indicator_pane_ParamLimits

0xa4dc,	// (0x0002f9ab) indicator_pane

0xa508,	// (0x0002f9d7) main_idle_pane_g2_ParamLimits

0xa508,	// (0x0002f9d7) main_idle_pane_g2

0xa540,	// (0x0002fa0f) main_pane_idle_g1_ParamLimits

0xa540,	// (0x0002fa0f) main_pane_idle_g1

0xa56e,	// (0x0002fa3d) popup_clock_digital_analogue_window_ParamLimits

0xa56e,	// (0x0002fa3d) popup_clock_digital_analogue_window

0xa585,	// (0x0002fa54) soft_indicator_pane_ParamLimits

0xa585,	// (0x0002fa54) soft_indicator_pane

0xa5a1,	// (0x0002fa70) wallpaper_pane_ParamLimits

0xa5a1,	// (0x0002fa70) wallpaper_pane

0xa1b5,	// (0x0002f684) wallpaper_pane_g1

0xa5bb,	// (0x0002fa8a) indicator_pane_g1_ParamLimits

0xa5bb,	// (0x0002fa8a) indicator_pane_g1

0x45e3,	// (0x00029ab2) navi_navi_icon_text_pane_srt_g1

0xa5e3,	// (0x0002fab2) soft_indicator_pane_t1

0xa5fd,	// (0x0002facc) aid_ps_area_pane

0xa60e,	// (0x0002fadd) aid_ps_clock_pane

0xa61c,	// (0x0002faeb) aid_ps_indicator_pane

0xa628,	// (0x0002faf7) indicator_ps_pane_ParamLimits

0xa628,	// (0x0002faf7) indicator_ps_pane

0xa637,	// (0x0002fb06) power_save_pane_g1_ParamLimits

0xa637,	// (0x0002fb06) power_save_pane_g1

0xa643,	// (0x0002fb12) power_save_pane_g2_ParamLimits

0xa643,	// (0x0002fb12) power_save_pane_g2

0xf12f,	// (0x000345fe) aid_navinavi_width_pane

0xa5fd,	// (0x0002facc) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00034a3f) power_save_pane_g_ParamLimits

0xf570,	// (0x00034a3f) power_save_pane_g

0xa651,	// (0x0002fb20) power_save_pane_t1_ParamLimits

0xa651,	// (0x0002fb20) power_save_pane_t1

0xa60e,	// (0x0002fadd) aid_ps_clock_pane_ParamLimits

0xa61c,	// (0x0002faeb) aid_ps_indicator_pane_ParamLimits

0xa663,	// (0x0002fb32) power_save_pane_t4_ParamLimits

0xa663,	// (0x0002fb32) power_save_pane_t4

0x0001,

0xf575,	// (0x00034a44) power_save_pane_t_ParamLimits

0xf575,	// (0x00034a44) power_save_pane_t

0xa68d,	// (0x0002fb5c) power_save_t3_ParamLimits

0xa68d,	// (0x0002fb5c) power_save_t3

0xa678,	// (0x0002fb47) power_save_t2_ParamLimits

0xa678,	// (0x0002fb47) power_save_t2

0xa6a2,	// (0x0002fb71) indicator_ps_pane_g1

0xa6ab,	// (0x0002fb7a) ai_gene_pane_ParamLimits

0xa6ab,	// (0x0002fb7a) ai_gene_pane

0xa6c2,	// (0x0002fb91) ai_links_pane_ParamLimits

0xa6c2,	// (0x0002fb91) ai_links_pane

0xa6da,	// (0x0002fba9) indicator_pane_cp1_ParamLimits

0xa6da,	// (0x0002fba9) indicator_pane_cp1

0xa6e9,	// (0x0002fbb8) main_pane_idle_g1_cp_ParamLimits

0xa6e9,	// (0x0002fbb8) main_pane_idle_g1_cp

0xa701,	// (0x0002fbd0) popup_ai_links_title_window

0xa70a,	// (0x0002fbd9) soft_indicator_pane_cp1_ParamLimits

0xa70a,	// (0x0002fbd9) soft_indicator_pane_cp1

0x3f64,	// (0x00029433) ai_links_pane_g1

0x3f6d,	// (0x0002943c) grid_ai_links_pane

0xbf4b,	// (0x0003141a) ai_gene_pane_1

0x3f52,	// (0x00029421) ai_gene_pane_2

0x3f5b,	// (0x0002942a) list_highlight_pane_cp4

0xbf27,	// (0x000313f6) cell_ai_link_pane_ParamLimits

0xbf27,	// (0x000313f6) cell_ai_link_pane

0x3f21,	// (0x000293f0) cell_ai_link_pane_g1

0xcf0a,	// (0x000323d9) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x00034de7) cell_ai_link_pane_g

0xa2a5,	// (0x0002f774) grid_highlight_cp2

0xa2a5,	// (0x0002f774) bg_popup_sub_pane_cp1

0xa72c,	// (0x0002fbfb) popup_ai_links_title_window_t1

0x3e6d,	// (0x0002933c) ai_gene_pane_1_g1_ParamLimits

0x3e6d,	// (0x0002933c) ai_gene_pane_1_g1

0x3e79,	// (0x00029348) ai_gene_pane_1_g2_ParamLimits

0x3e79,	// (0x00029348) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x00034ddd) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x00034ddd) ai_gene_pane_1_g

0x3e86,	// (0x00029355) ai_gene_pane_1_t1_ParamLimits

0x3e86,	// (0x00029355) ai_gene_pane_1_t1

0x3eba,	// (0x00029389) grid_ai_soft_ind_pane

0x3e58,	// (0x00029327) ai_gene_pane_2_t1_ParamLimits

0x3e58,	// (0x00029327) ai_gene_pane_2_t1

0xa73b,	// (0x0002fc0a) main_pane_empty_t1_ParamLimits

0xa73b,	// (0x0002fc0a) main_pane_empty_t1

0xa753,	// (0x0002fc22) main_pane_empty_t2_ParamLimits

0xa753,	// (0x0002fc22) main_pane_empty_t2

0xa768,	// (0x0002fc37) main_pane_empty_t3_ParamLimits

0xa768,	// (0x0002fc37) main_pane_empty_t3

0xa77a,	// (0x0002fc49) main_pane_empty_t4_ParamLimits

0xa77a,	// (0x0002fc49) main_pane_empty_t4

0xa78c,	// (0x0002fc5b) main_pane_empty_t5_ParamLimits

0xa78c,	// (0x0002fc5b) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00034a49) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00034a49) main_pane_empty_t

0xd2fc,	// (0x000327cb) bg_popup_window_pane_ParamLimits

0xd2fc,	// (0x000327cb) bg_popup_window_pane

0x3bb4,	// (0x00029083) find_popup_pane_cp2_ParamLimits

0x3bb4,	// (0x00029083) find_popup_pane_cp2

0x3bc0,	// (0x0002908f) heading_pane_ParamLimits

0x3bc0,	// (0x0002908f) heading_pane

0xa2a5,	// (0x0002f774) bg_popup_sub_pane

0xbdf9,	// (0x000312c8) bg_popup_window_pane_g1_ParamLimits

0xbdf9,	// (0x000312c8) bg_popup_window_pane_g1

0xbe08,	// (0x000312d7) bg_popup_window_pane_g2_ParamLimits

0xbe08,	// (0x000312d7) bg_popup_window_pane_g2

0xbe14,	// (0x000312e3) bg_popup_window_pane_g3_ParamLimits

0xbe14,	// (0x000312e3) bg_popup_window_pane_g3

0xbe20,	// (0x000312ef) bg_popup_window_pane_g4_ParamLimits

0xbe20,	// (0x000312ef) bg_popup_window_pane_g4

0xbe2f,	// (0x000312fe) bg_popup_window_pane_g5_ParamLimits

0xbe2f,	// (0x000312fe) bg_popup_window_pane_g5

0xbe3f,	// (0x0003130e) bg_popup_window_pane_g6_ParamLimits

0xbe3f,	// (0x0003130e) bg_popup_window_pane_g6

0xbe4b,	// (0x0003131a) bg_popup_window_pane_g7_ParamLimits

0xbe4b,	// (0x0003131a) bg_popup_window_pane_g7

0xbe5a,	// (0x00031329) bg_popup_window_pane_g8_ParamLimits

0xbe5a,	// (0x00031329) bg_popup_window_pane_g8

0xbe69,	// (0x00031338) bg_popup_window_pane_g9_ParamLimits

0xbe69,	// (0x00031338) bg_popup_window_pane_g9

0x3b9a,	// (0x00029069) bg_popup_window_pane_g10_ParamLimits

0x3b9a,	// (0x00029069) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x00034da5) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x00034da5) bg_popup_window_pane_g

0x3ac3,	// (0x00028f92) bg_popup_heading_pane_ParamLimits

0x3ac3,	// (0x00028f92) bg_popup_heading_pane

0x1f48,	// (0x00027417) tabs_4_passive_pane_cp_srt_ParamLimits

0x1f48,	// (0x00027417) tabs_4_passive_pane_cp_srt

0x1f5a,	// (0x00027429) tabs_4_passive_pane_srt_ParamLimits

0x3ad7,	// (0x00028fa6) heading_pane_g2

0x1f5a,	// (0x00027429) tabs_4_passive_pane_srt

0x2e70,	// (0x0002833f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2e70,	// (0x0002833f) bg_passive_tab_pane_cp3_srt

0x3adf,	// (0x00028fae) heading_pane_t1_ParamLimits

0x3adf,	// (0x00028fae) heading_pane_t1

0x3af6,	// (0x00028fc5) heading_pane_t2_ParamLimits

0x3af6,	// (0x00028fc5) heading_pane_t2

0x0001,

0xf8d1,	// (0x00034da0) heading_pane_t_ParamLimits

0xf8d1,	// (0x00034da0) heading_pane_t

0x35ee,	// (0x00028abd) bg_popup_heading_pane_g1

0x369d,	// (0x00028b6c) bg_popup_heading_pane_g2

0x36a7,	// (0x00028b76) bg_popup_heading_pane_g3

0x36b1,	// (0x00028b80) bg_popup_heading_pane_g4

0x36bb,	// (0x00028b8a) bg_popup_heading_pane_g5

0x36c5,	// (0x00028b94) bg_popup_heading_pane_g6

0x36cd,	// (0x00028b9c) bg_popup_heading_pane_g7

0x36d5,	// (0x00028ba4) bg_popup_heading_pane_g8

0x36df,	// (0x00028bae) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x00034d5c) bg_popup_heading_pane_g

0x2d74,	// (0x00028243) bg_popup_sub_pane_g1

0x2d7c,	// (0x0002824b) bg_popup_sub_pane_g2

0x2d84,	// (0x00028253) bg_popup_sub_pane_g3

0x2d8c,	// (0x0002825b) bg_popup_sub_pane_g4

0x2d94,	// (0x00028263) bg_popup_sub_pane_g5

0x2d9c,	// (0x0002826b) bg_popup_sub_pane_g6

0x2da4,	// (0x00028273) bg_popup_sub_pane_g7

0x2dac,	// (0x0002827b) bg_popup_sub_pane_g8

0x2db4,	// (0x00028283) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x00034d36) bg_popup_sub_pane_g

0xa475,	// (0x0002f944) bg_popup_window_pane_cp5_ParamLimits

0xa475,	// (0x0002f944) bg_popup_window_pane_cp5

0xa7ac,	// (0x0002fc7b) popup_note_window_g1_ParamLimits

0xa7ac,	// (0x0002fc7b) popup_note_window_g1

0xa7b8,	// (0x0002fc87) popup_note_window_t1_ParamLimits

0xa7b8,	// (0x0002fc87) popup_note_window_t1

0xa7ce,	// (0x0002fc9d) popup_note_window_t2_ParamLimits

0xa7ce,	// (0x0002fc9d) popup_note_window_t2

0xa7e4,	// (0x0002fcb3) popup_note_window_t3_ParamLimits

0xa7e4,	// (0x0002fcb3) popup_note_window_t3

0xa7fa,	// (0x0002fcc9) popup_note_window_t4_ParamLimits

0xa7fa,	// (0x0002fcc9) popup_note_window_t4

0xa822,	// (0x0002fcf1) popup_note_window_t5_ParamLimits

0xa822,	// (0x0002fcf1) popup_note_window_t5

0x0004,

0xf585,	// (0x00034a54) popup_note_window_t_ParamLimits

0xf585,	// (0x00034a54) popup_note_window_t

0xa846,	// (0x0002fd15) bg_popup_window_pane_cp6_ParamLimits

0xa846,	// (0x0002fd15) bg_popup_window_pane_cp6

0x356a,	// (0x00028a39) popup_note_image_window_g1_ParamLimits

0x356a,	// (0x00028a39) popup_note_image_window_g1

0x3576,	// (0x00028a45) popup_note_image_window_g2_ParamLimits

0x3576,	// (0x00028a45) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x00034d2a) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x00034d2a) popup_note_image_window_g

0x358f,	// (0x00028a5e) popup_note_image_window_t1_ParamLimits

0x358f,	// (0x00028a5e) popup_note_image_window_t1

0x35a8,	// (0x00028a77) popup_note_image_window_t2_ParamLimits

0x35a8,	// (0x00028a77) popup_note_image_window_t2

0x35c1,	// (0x00028a90) popup_note_image_window_t3_ParamLimits

0x35c1,	// (0x00028a90) popup_note_image_window_t3

0x0002,

0xf860,	// (0x00034d2f) popup_note_image_window_t_ParamLimits

0xf860,	// (0x00034d2f) popup_note_image_window_t

0x342a,	// (0x000288f9) bg_popup_window_pane_cp7_ParamLimits

0x342a,	// (0x000288f9) bg_popup_window_pane_cp7

0x345a,	// (0x00028929) popup_note_wait_window_g1_ParamLimits

0x345a,	// (0x00028929) popup_note_wait_window_g1

0x3466,	// (0x00028935) popup_note_wait_window_g2_ParamLimits

0x3466,	// (0x00028935) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x00034d18) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x00034d18) popup_note_wait_window_g

0x347e,	// (0x0002894d) popup_note_wait_window_t1_ParamLimits

0x347e,	// (0x0002894d) popup_note_wait_window_t1

0x34a5,	// (0x00028974) popup_note_wait_window_t2_ParamLimits

0x34a5,	// (0x00028974) popup_note_wait_window_t2

0x34c3,	// (0x00028992) popup_note_wait_window_t3_ParamLimits

0x34c3,	// (0x00028992) popup_note_wait_window_t3

0x34d6,	// (0x000289a5) popup_note_wait_window_t4_ParamLimits

0x34d6,	// (0x000289a5) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x00034d1f) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x00034d1f) popup_note_wait_window_t

0x34fb,	// (0x000289ca) wait_bar_pane_ParamLimits

0x34fb,	// (0x000289ca) wait_bar_pane

0xa2a5,	// (0x0002f774) wait_anim_pane

0xa2a5,	// (0x0002f774) wait_border_pane

0xa1b5,	// (0x0002f684) wait_anim_pane_g1

0xa1b5,	// (0x0002f684) wait_anim_pane_g2

0x0001,

0xf709,	// (0x00034bd8) wait_anim_pane_g

0x33ce,	// (0x0002889d) wait_border_pane_g1

0x33d9,	// (0x000288a8) wait_border_pane_g2

0x33e2,	// (0x000288b1) wait_border_pane_g3

0x0002,

0xf842,	// (0x00034d11) wait_border_pane_g

0x3238,	// (0x00028707) bg_popup_window_pane_cp16_ParamLimits

0x3238,	// (0x00028707) bg_popup_window_pane_cp16

0x3338,	// (0x00028807) indicator_popup_pane_cp4_ParamLimits

0x3338,	// (0x00028807) indicator_popup_pane_cp4

0x334c,	// (0x0002881b) popup_query_data_window_t1_ParamLimits

0x334c,	// (0x0002881b) popup_query_data_window_t1

0x335e,	// (0x0002882d) popup_query_data_window_t2_ParamLimits

0x335e,	// (0x0002882d) popup_query_data_window_t2

0x3377,	// (0x00028846) popup_query_data_window_t3_ParamLimits

0x3377,	// (0x00028846) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x00034d0a) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x00034d0a) popup_query_data_window_t

0x3391,	// (0x00028860) query_popup_data_pane_ParamLimits

0x3391,	// (0x00028860) query_popup_data_pane

0x33a5,	// (0x00028874) query_popup_data_pane_cp1_ParamLimits

0x33a5,	// (0x00028874) query_popup_data_pane_cp1

0x3238,	// (0x00028707) bg_popup_window_pane_cp10_ParamLimits

0x3238,	// (0x00028707) bg_popup_window_pane_cp10

0x326a,	// (0x00028739) indicator_popup_pane_ParamLimits

0x326a,	// (0x00028739) indicator_popup_pane

0x328c,	// (0x0002875b) popup_query_code_window_t1_ParamLimits

0x328c,	// (0x0002875b) popup_query_code_window_t1

0x32a6,	// (0x00028775) popup_query_code_window_t2_ParamLimits

0x32a6,	// (0x00028775) popup_query_code_window_t2

0x32ef,	// (0x000287be) popup_query_code_window_t3_ParamLimits

0x32ef,	// (0x000287be) popup_query_code_window_t3

0x0002,

0xf834,	// (0x00034d03) popup_query_code_window_t_ParamLimits

0xf834,	// (0x00034d03) popup_query_code_window_t

0x331e,	// (0x000287ed) query_popup_pane_ParamLimits

0x331e,	// (0x000287ed) query_popup_pane

0xa846,	// (0x0002fd15) bg_popup_window_pane_cp15_ParamLimits

0xa846,	// (0x0002fd15) bg_popup_window_pane_cp15

0xa866,	// (0x0002fd35) indicator_popup_pane_cp1_ParamLimits

0xa866,	// (0x0002fd35) indicator_popup_pane_cp1

0xa879,	// (0x0002fd48) indicator_popup_pane_cp2_ParamLimits

0xa879,	// (0x0002fd48) indicator_popup_pane_cp2

0xa894,	// (0x0002fd63) popup_query_data_code_window_g1_ParamLimits

0xa894,	// (0x0002fd63) popup_query_data_code_window_g1

0xa8a7,	// (0x0002fd76) popup_query_data_code_window_t1_ParamLimits

0xa8a7,	// (0x0002fd76) popup_query_data_code_window_t1

0xa8b9,	// (0x0002fd88) popup_query_data_code_window_t2_ParamLimits

0xa8b9,	// (0x0002fd88) popup_query_data_code_window_t2

0xa8cb,	// (0x0002fd9a) popup_query_data_code_window_t3_ParamLimits

0xa8cb,	// (0x0002fd9a) popup_query_data_code_window_t3

0xcea5,	// (0x00032374) popup_query_data_code_window_t4_ParamLimits

0xcea5,	// (0x00032374) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00034a5f) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00034a5f) popup_query_data_code_window_t

0x0a33,	// (0x00025f02) list_single_midp_graphic_pane_g3

0xcebf,	// (0x0003238e) query_popup_data_pane_cp2_ParamLimits

0xced2,	// (0x000323a1) query_popup_pane_cp2_ParamLimits

0xced2,	// (0x000323a1) query_popup_pane_cp2

0xa2a5,	// (0x0002f774) bg_popup_window_pane_cp11

0x3230,	// (0x000286ff) heading_pane_cp5

0xcf68,	// (0x00032437) listscroll_popup_info_pane

0xa2a5,	// (0x0002f774) input_focus_pane_cp3

0xceed,	// (0x000323bc) query_popup_pane_t1

0xcefb,	// (0x000323ca) list_popup_info_pane_ParamLimits

0xcefb,	// (0x000323ca) list_popup_info_pane

0xcf0a,	// (0x000323d9) listscroll_popup_info_pane_g1

0xcf12,	// (0x000323e1) scroll_pane_cp7

0xcf1c,	// (0x000323eb) popup_info_list_pane_t1_ParamLimits

0xcf1c,	// (0x000323eb) popup_info_list_pane_t1

0xcf36,	// (0x00032405) popup_info_list_pane_t2_ParamLimits

0xcf36,	// (0x00032405) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00034a68) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00034a68) popup_info_list_pane_t

0xa2a5,	// (0x0002f774) bg_popup_window_pane_cp12

0x45fd,	// (0x00029acc) find_popup_pane

0xa4b7,	// (0x0002f986) bg_popup_window_pane_cp3

0xcf50,	// (0x0003241f) heading_pane_cp3

0xcf5c,	// (0x0003242b) listscroll_popup_graphic_pane

0xa2a5,	// (0x0002f774) bg_popup_window_pane_cp4

0xa931,	// (0x0002fe00) heading_pane_cp4

0xcf68,	// (0x00032437) listscroll_popup_colour_pane

0xa93b,	// (0x0002fe0a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa93b,	// (0x0002fe0a) cell_large_graphic_colour_none_popup_pane

0xa94f,	// (0x0002fe1e) grid_large_graphic_colour_popup_pane_ParamLimits

0xa94f,	// (0x0002fe1e) grid_large_graphic_colour_popup_pane

0xa973,	// (0x0002fe42) listscroll_popup_colour_pane_g1_ParamLimits

0xa973,	// (0x0002fe42) listscroll_popup_colour_pane_g1

0xa98a,	// (0x0002fe59) listscroll_popup_colour_pane_g2_ParamLimits

0xa98a,	// (0x0002fe59) listscroll_popup_colour_pane_g2

0xa9a1,	// (0x0002fe70) listscroll_popup_colour_pane_g3_ParamLimits

0xa9a1,	// (0x0002fe70) listscroll_popup_colour_pane_g3

0xa9b1,	// (0x0002fe80) listscroll_popup_colour_pane_g4_ParamLimits

0xa9b1,	// (0x0002fe80) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00034a6d) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00034a6d) listscroll_popup_colour_pane_g

0xcf70,	// (0x0003243f) scroll_pane_cp6_ParamLimits

0xcf70,	// (0x0003243f) scroll_pane_cp6

0xa9c1,	// (0x0002fe90) cell_large_graphic_colour_popup_pane_ParamLimits

0xa9c1,	// (0x0002fe90) cell_large_graphic_colour_popup_pane

0xcf82,	// (0x00032451) cell_large_graphic_colour_none_popup_pane_t1

0xa2a5,	// (0x0002f774) grid_highlight_pane_cp5

0xcf91,	// (0x00032460) cell_large_graphic_colour_popup_pane_g1

0xcf99,	// (0x00032468) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00034a76) cell_large_graphic_colour_popup_pane_g

0xcfa1,	// (0x00032470) cell_large_graphic_colour_popup_pane_g2_copy1

0xcfaa,	// (0x00032479) grid_highlight_pane_cp4

0xcfb2,	// (0x00032481) bg_popup_window_pane_cp8_ParamLimits

0xcfb2,	// (0x00032481) bg_popup_window_pane_cp8

0xcfcd,	// (0x0003249c) popup_snote_single_text_window_g1_ParamLimits

0xcfcd,	// (0x0003249c) popup_snote_single_text_window_g1

0xcfdf,	// (0x000324ae) popup_snote_single_text_window_t1_ParamLimits

0xcfdf,	// (0x000324ae) popup_snote_single_text_window_t1

0xcff2,	// (0x000324c1) popup_snote_single_text_window_t2_ParamLimits

0xcff2,	// (0x000324c1) popup_snote_single_text_window_t2

0xd005,	// (0x000324d4) popup_snote_single_text_window_t3_ParamLimits

0xd005,	// (0x000324d4) popup_snote_single_text_window_t3

0xd03e,	// (0x0003250d) popup_snote_single_text_window_t4_ParamLimits

0xd03e,	// (0x0003250d) popup_snote_single_text_window_t4

0xd072,	// (0x00032541) popup_snote_single_text_window_t5_ParamLimits

0xd072,	// (0x00032541) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00034a7b) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00034a7b) popup_snote_single_text_window_t

0xd0a1,	// (0x00032570) bg_popup_window_pane_cp9_ParamLimits

0xd0a1,	// (0x00032570) bg_popup_window_pane_cp9

0xcfcd,	// (0x0003249c) popup_snote_single_graphic_window_g1_ParamLimits

0xcfcd,	// (0x0003249c) popup_snote_single_graphic_window_g1

0xd0af,	// (0x0003257e) popup_snote_single_graphic_window_g2_ParamLimits

0xd0af,	// (0x0003257e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00034a86) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00034a86) popup_snote_single_graphic_window_g

0xd0bb,	// (0x0003258a) popup_snote_single_graphic_window_t1_ParamLimits

0xd0bb,	// (0x0003258a) popup_snote_single_graphic_window_t1

0xd0ce,	// (0x0003259d) popup_snote_single_graphic_window_t2_ParamLimits

0xd0ce,	// (0x0003259d) popup_snote_single_graphic_window_t2

0xd0e1,	// (0x000325b0) popup_snote_single_graphic_window_t3_ParamLimits

0xd0e1,	// (0x000325b0) popup_snote_single_graphic_window_t3

0xd11a,	// (0x000325e9) popup_snote_single_graphic_window_t4_ParamLimits

0xd11a,	// (0x000325e9) popup_snote_single_graphic_window_t4

0xd14e,	// (0x0003261d) popup_snote_single_graphic_window_t5_ParamLimits

0xd14e,	// (0x0003261d) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00034a8b) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00034a8b) popup_snote_single_graphic_window_t

0x453b,	// (0x00029a0a) grid_graphic_popup_pane_ParamLimits

0x453b,	// (0x00029a0a) grid_graphic_popup_pane

0x4569,	// (0x00029a38) listscroll_popup_graphic_pane_g1_ParamLimits

0x4569,	// (0x00029a38) listscroll_popup_graphic_pane_g1

0xc275,	// (0x00031744) listscroll_popup_graphic_pane_g2_ParamLimits

0xc275,	// (0x00031744) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x00034e80) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x00034e80) listscroll_popup_graphic_pane_g

0x4591,	// (0x00029a60) scroll_pane_cp5

0xc234,	// (0x00031703) cell_graphic_popup_pane_ParamLimits

0xc234,	// (0x00031703) cell_graphic_popup_pane

0x44c4,	// (0x00029993) cell_graphic_popup_pane_g1

0x44cc,	// (0x0002999b) cell_graphic_popup_pane_g2

0xcfa1,	// (0x00032470) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x00034e79) cell_graphic_popup_pane_g

0x44d5,	// (0x000299a4) cell_graphic_popup_pane_t2

0xcfaa,	// (0x00032479) grid_highlight_pane_cp3

0xd18f,	// (0x0003265e) list_gen_pane_ParamLimits

0xd18f,	// (0x0003265e) list_gen_pane

0xd1b7,	// (0x00032686) scroll_pane

0xc1ef,	// (0x000316be) bg_list_pane_g1_ParamLimits

0xc1ef,	// (0x000316be) bg_list_pane_g1

0x4441,	// (0x00029910) bg_list_pane_g2_ParamLimits

0x4441,	// (0x00029910) bg_list_pane_g2

0x4454,	// (0x00029923) bg_list_pane_g3_ParamLimits

0x4454,	// (0x00029923) bg_list_pane_g3

0x4466,	// (0x00029935) bg_list_pane_g4_ParamLimits

0x4466,	// (0x00029935) bg_list_pane_g4

0xc20a,	// (0x000316d9) bg_list_pane_g5_ParamLimits

0xc20a,	// (0x000316d9) bg_list_pane_g5

0x0004,

0xf99f,	// (0x00034e6e) bg_list_pane_g_ParamLimits

0xf99f,	// (0x00034e6e) bg_list_pane_g

0xc19e,	// (0x0003166d) list_double2_graphic_large_graphic_pane_ParamLimits

0xc19e,	// (0x0003166d) list_double2_graphic_large_graphic_pane

0xc19e,	// (0x0003166d) list_double2_graphic_pane_ParamLimits

0xc19e,	// (0x0003166d) list_double2_graphic_pane

0xc19e,	// (0x0003166d) list_double2_large_graphic_pane_ParamLimits

0xc19e,	// (0x0003166d) list_double2_large_graphic_pane

0xc1b2,	// (0x00031681) list_double2_pane_ParamLimits

0xc1b2,	// (0x00031681) list_double2_pane

0xc19e,	// (0x0003166d) list_double_graphic_heading_pane_ParamLimits

0xc19e,	// (0x0003166d) list_double_graphic_heading_pane

0xc19e,	// (0x0003166d) list_double_graphic_pane_ParamLimits

0xc19e,	// (0x0003166d) list_double_graphic_pane

0xc19e,	// (0x0003166d) list_double_heading_pane_ParamLimits

0xc19e,	// (0x0003166d) list_double_heading_pane

0xc19e,	// (0x0003166d) list_double_large_graphic_pane_ParamLimits

0xc19e,	// (0x0003166d) list_double_large_graphic_pane

0xc19e,	// (0x0003166d) list_double_number_pane_ParamLimits

0xc19e,	// (0x0003166d) list_double_number_pane

0xc19e,	// (0x0003166d) list_double_pane_ParamLimits

0xc19e,	// (0x0003166d) list_double_pane

0xc19e,	// (0x0003166d) list_double_time_pane_ParamLimits

0xc19e,	// (0x0003166d) list_double_time_pane

0xc19e,	// (0x0003166d) list_setting_number_pane_ParamLimits

0xc19e,	// (0x0003166d) list_setting_number_pane

0xc19e,	// (0x0003166d) list_setting_pane_ParamLimits

0xc19e,	// (0x0003166d) list_setting_pane

0x9f7e,	// (0x0002f44d) list_single_2graphic_pane_ParamLimits

0x9f7e,	// (0x0002f44d) list_single_2graphic_pane

0x9f7e,	// (0x0002f44d) list_single_graphic_heading_pane_ParamLimits

0x9f7e,	// (0x0002f44d) list_single_graphic_heading_pane

0x9f7e,	// (0x0002f44d) list_single_graphic_pane_ParamLimits

0x9f7e,	// (0x0002f44d) list_single_graphic_pane

0x9f7e,	// (0x0002f44d) list_single_heading_pane_ParamLimits

0x9f7e,	// (0x0002f44d) list_single_heading_pane

0xc1b2,	// (0x00031681) list_single_large_graphic_pane_ParamLimits

0xc1b2,	// (0x00031681) list_single_large_graphic_pane

0x9f7e,	// (0x0002f44d) list_single_number_heading_pane_ParamLimits

0x9f7e,	// (0x0002f44d) list_single_number_heading_pane

0x9f7e,	// (0x0002f44d) list_single_number_pane_ParamLimits

0x9f7e,	// (0x0002f44d) list_single_number_pane

0x9f7e,	// (0x0002f44d) list_single_pane_ParamLimits

0x9f7e,	// (0x0002f44d) list_single_pane

0xa2a5,	// (0x0002f774) list_highlight_pane_cp1

0xeb8e,	// (0x0003405d) list_single_pane_g1_ParamLimits

0xeb8e,	// (0x0003405d) list_single_pane_g1

0xeb9a,	// (0x00034069) list_single_pane_g2_ParamLimits

0xeb9a,	// (0x00034069) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00034a9d) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00034a9d) list_single_pane_g

0xedc8,	// (0x00034297) list_single_pane_t1_ParamLimits

0xedc8,	// (0x00034297) list_single_pane_t1

0xeb8e,	// (0x0003405d) list_single_number_pane_g1_ParamLimits

0xeb8e,	// (0x0003405d) list_single_number_pane_g1

0xeb9a,	// (0x00034069) list_single_number_pane_g2_ParamLimits

0xeb9a,	// (0x00034069) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00034a9d) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00034a9d) list_single_number_pane_g

0xed79,	// (0x00034248) list_single_number_pane_t1_ParamLimits

0xed79,	// (0x00034248) list_single_number_pane_t1

0x9f40,	// (0x0002f40f) list_single_number_pane_t2_ParamLimits

0x9f40,	// (0x0002f40f) list_single_number_pane_t2

0x0001,

0xf960,	// (0x00034e2f) list_single_number_pane_t_ParamLimits

0xf960,	// (0x00034e2f) list_single_number_pane_t

0x98e8,	// (0x0002edb7) list_single_graphic_pane_g1_ParamLimits

0x98e8,	// (0x0002edb7) list_single_graphic_pane_g1

0xeb8e,	// (0x0003405d) list_single_graphic_pane_g2_ParamLimits

0xeb8e,	// (0x0003405d) list_single_graphic_pane_g2

0xeb9a,	// (0x00034069) list_single_graphic_pane_g3_ParamLimits

0xeb9a,	// (0x00034069) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00034a96) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00034a96) list_single_graphic_pane_g

0x98f4,	// (0x0002edc3) list_single_graphic_pane_t1_ParamLimits

0x98f4,	// (0x0002edc3) list_single_graphic_pane_t1

0xeb8e,	// (0x0003405d) list_single_heading_pane_g1_ParamLimits

0xeb8e,	// (0x0003405d) list_single_heading_pane_g1

0xeb9a,	// (0x00034069) list_single_heading_pane_g2_ParamLimits

0xeb9a,	// (0x00034069) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00034a9d) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00034a9d) list_single_heading_pane_g

0x990a,	// (0x0002edd9) list_single_heading_pane_t1_ParamLimits

0x990a,	// (0x0002edd9) list_single_heading_pane_t1

0x9920,	// (0x0002edef) list_single_heading_pane_t2_ParamLimits

0x9920,	// (0x0002edef) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00034aa2) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00034aa2) list_single_heading_pane_t

0xeb8e,	// (0x0003405d) list_single_number_heading_pane_g1_ParamLimits

0xeb8e,	// (0x0003405d) list_single_number_heading_pane_g1

0xeb9a,	// (0x00034069) list_single_number_heading_pane_g2_ParamLimits

0xeb9a,	// (0x00034069) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00034a9d) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00034a9d) list_single_number_heading_pane_g

0x990a,	// (0x0002edd9) list_single_number_heading_pane_t1_ParamLimits

0x990a,	// (0x0002edd9) list_single_number_heading_pane_t1

0x9932,	// (0x0002ee01) list_single_number_heading_pane_t2_ParamLimits

0x9932,	// (0x0002ee01) list_single_number_heading_pane_t2

0xeba6,	// (0x00034075) list_single_number_heading_pane_t3_ParamLimits

0xeba6,	// (0x00034075) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x00034aa7) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x00034aa7) list_single_number_heading_pane_t

0xebb8,	// (0x00034087) list_single_graphic_heading_pane_g1_ParamLimits

0xebb8,	// (0x00034087) list_single_graphic_heading_pane_g1

0x9944,	// (0x0002ee13) list_single_graphic_heading_pane_g4_ParamLimits

0x9944,	// (0x0002ee13) list_single_graphic_heading_pane_g4

0xeb9a,	// (0x00034069) list_single_graphic_heading_pane_g5_ParamLimits

0xeb9a,	// (0x00034069) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00034aae) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00034aae) list_single_graphic_heading_pane_g

0x990a,	// (0x0002edd9) list_single_graphic_heading_pane_t1_ParamLimits

0x990a,	// (0x0002edd9) list_single_graphic_heading_pane_t1

0x9955,	// (0x0002ee24) list_single_graphic_heading_pane_t2_ParamLimits

0x9955,	// (0x0002ee24) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00034ab5) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00034ab5) list_single_graphic_heading_pane_t

0xebc4,	// (0x00034093) list_single_large_graphic_pane_g1_ParamLimits

0xebc4,	// (0x00034093) list_single_large_graphic_pane_g1

0xebd0,	// (0x0003409f) list_single_large_graphic_pane_g2_ParamLimits

0xebd0,	// (0x0003409f) list_single_large_graphic_pane_g2

0xebdc,	// (0x000340ab) list_single_large_graphic_pane_g3_ParamLimits

0xebdc,	// (0x000340ab) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00034aba) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00034aba) list_single_large_graphic_pane_g

0x33d9,	// (0x000288a8) wait_border_pane_g2_copy1

0x9967,	// (0x0002ee36) list_single_large_graphic_pane_g4_cp2

0xebe8,	// (0x000340b7) list_single_large_graphic_pane_t1_ParamLimits

0xebe8,	// (0x000340b7) list_single_large_graphic_pane_t1

0x996f,	// (0x0002ee3e) list_double_pane_g1_ParamLimits

0x996f,	// (0x0002ee3e) list_double_pane_g1

0x997b,	// (0x0002ee4a) list_double_pane_g2_ParamLimits

0x997b,	// (0x0002ee4a) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00034ac1) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00034ac1) list_double_pane_g

0x9987,	// (0x0002ee56) list_double_pane_t1_ParamLimits

0x9987,	// (0x0002ee56) list_double_pane_t1

0x999d,	// (0x0002ee6c) list_double_pane_t2_ParamLimits

0x999d,	// (0x0002ee6c) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00034ac6) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00034ac6) list_double_pane_t

0x99af,	// (0x0002ee7e) list_double2_pane_g1_ParamLimits

0x99af,	// (0x0002ee7e) list_double2_pane_g1

0x99c0,	// (0x0002ee8f) list_double2_pane_g2_ParamLimits

0x99c0,	// (0x0002ee8f) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00034acb) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00034acb) list_double2_pane_g

0x99cc,	// (0x0002ee9b) list_double2_pane_t1_ParamLimits

0x99cc,	// (0x0002ee9b) list_double2_pane_t1

0x99e2,	// (0x0002eeb1) list_double2_pane_t2_ParamLimits

0x99e2,	// (0x0002eeb1) list_double2_pane_t2

0x0001,

0xf601,	// (0x00034ad0) list_double2_pane_t_ParamLimits

0xf601,	// (0x00034ad0) list_double2_pane_t

0x996f,	// (0x0002ee3e) list_double_number_pane_g1_ParamLimits

0x996f,	// (0x0002ee3e) list_double_number_pane_g1

0x997b,	// (0x0002ee4a) list_double_number_pane_g2_ParamLimits

0x997b,	// (0x0002ee4a) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00034ac1) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00034ac1) list_double_number_pane_g

0x99f4,	// (0x0002eec3) list_double_number_pane_t1_ParamLimits

0x99f4,	// (0x0002eec3) list_double_number_pane_t1

0x9a06,	// (0x0002eed5) list_double_number_pane_t2_ParamLimits

0x9a06,	// (0x0002eed5) list_double_number_pane_t2

0x9a1c,	// (0x0002eeeb) list_double_number_pane_t3_ParamLimits

0x9a1c,	// (0x0002eeeb) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00034ad5) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00034ad5) list_double_number_pane_t

0x9a2e,	// (0x0002eefd) list_double_graphic_pane_g1_ParamLimits

0x9a2e,	// (0x0002eefd) list_double_graphic_pane_g1

0x9a3a,	// (0x0002ef09) list_double_graphic_pane_g2_ParamLimits

0x9a3a,	// (0x0002ef09) list_double_graphic_pane_g2

0x9a49,	// (0x0002ef18) list_double_graphic_pane_g3_ParamLimits

0x9a49,	// (0x0002ef18) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00034adc) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00034adc) list_double_graphic_pane_g

0x9a61,	// (0x0002ef30) list_double_graphic_pane_t1_ParamLimits

0x9a61,	// (0x0002ef30) list_double_graphic_pane_t1

0x9a77,	// (0x0002ef46) list_double_graphic_pane_t2_ParamLimits

0x9a77,	// (0x0002ef46) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00034ae5) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00034ae5) list_double_graphic_pane_t

0x9a2e,	// (0x0002eefd) list_double2_graphic_pane_g1_ParamLimits

0x9a2e,	// (0x0002eefd) list_double2_graphic_pane_g1

0x9a89,	// (0x0002ef58) list_double2_graphic_pane_g2_ParamLimits

0x9a89,	// (0x0002ef58) list_double2_graphic_pane_g2

0x9a95,	// (0x0002ef64) list_double2_graphic_pane_g3_ParamLimits

0x9a95,	// (0x0002ef64) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00034aea) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00034aea) list_double2_graphic_pane_g

0x9a06,	// (0x0002eed5) list_double2_graphic_pane_t1_ParamLimits

0x9a06,	// (0x0002eed5) list_double2_graphic_pane_t1

0x9aa1,	// (0x0002ef70) list_double2_graphic_pane_t2_ParamLimits

0x9aa1,	// (0x0002ef70) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00034af1) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00034af1) list_double2_graphic_pane_t

0x9ab3,	// (0x0002ef82) list_double_large_graphic_pane_g1_ParamLimits

0x9ab3,	// (0x0002ef82) list_double_large_graphic_pane_g1

0x9ade,	// (0x0002efad) list_double_large_graphic_pane_g2_ParamLimits

0x9ade,	// (0x0002efad) list_double_large_graphic_pane_g2

0x997b,	// (0x0002ee4a) list_double_large_graphic_pane_g3_ParamLimits

0x997b,	// (0x0002ee4a) list_double_large_graphic_pane_g3

0x9aef,	// (0x0002efbe) list_double_large_graphic_pane_g4_ParamLimits

0x9aef,	// (0x0002efbe) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00034af6) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00034af6) list_double_large_graphic_pane_g

0x9b01,	// (0x0002efd0) list_double_large_graphic_pane_t1_ParamLimits

0x9b01,	// (0x0002efd0) list_double_large_graphic_pane_t1

0x9b1a,	// (0x0002efe9) list_double_large_graphic_pane_t2_ParamLimits

0x9b1a,	// (0x0002efe9) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00034b01) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00034b01) list_double_large_graphic_pane_t

0x9b2c,	// (0x0002effb) list_double2_large_graphic_pane_g1_ParamLimits

0x9b2c,	// (0x0002effb) list_double2_large_graphic_pane_g1

0x9ade,	// (0x0002efad) list_double2_large_graphic_pane_g2_ParamLimits

0x9ade,	// (0x0002efad) list_double2_large_graphic_pane_g2

0x997b,	// (0x0002ee4a) list_double2_large_graphic_pane_g3_ParamLimits

0x997b,	// (0x0002ee4a) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00034b06) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00034b06) list_double2_large_graphic_pane_g

0x9b38,	// (0x0002f007) list_double2_large_graphic_pane_t1_ParamLimits

0x9b38,	// (0x0002f007) list_double2_large_graphic_pane_t1

0x9b4e,	// (0x0002f01d) list_double2_large_graphic_pane_t2_ParamLimits

0x9b4e,	// (0x0002f01d) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00034b0d) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00034b0d) list_double2_large_graphic_pane_t

0x9b60,	// (0x0002f02f) list_double_heading_pane_g1_ParamLimits

0x9b60,	// (0x0002f02f) list_double_heading_pane_g1

0x9b71,	// (0x0002f040) list_double_heading_pane_g2_ParamLimits

0x9b71,	// (0x0002f040) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00034b12) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00034b12) list_double_heading_pane_g

0x9b7d,	// (0x0002f04c) list_double_heading_pane_t1_ParamLimits

0x9b7d,	// (0x0002f04c) list_double_heading_pane_t1

0x9b93,	// (0x0002f062) list_double_heading_pane_t2_ParamLimits

0x9b93,	// (0x0002f062) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00034b17) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00034b17) list_double_heading_pane_t

0x9ba5,	// (0x0002f074) list_double_graphic_heading_pane_g1_ParamLimits

0x9ba5,	// (0x0002f074) list_double_graphic_heading_pane_g1

0x9b60,	// (0x0002f02f) list_double_graphic_heading_pane_g2_ParamLimits

0x9b60,	// (0x0002f02f) list_double_graphic_heading_pane_g2

0x9b71,	// (0x0002f040) list_double_graphic_heading_pane_g3_ParamLimits

0x9b71,	// (0x0002f040) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00034b1c) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00034b1c) list_double_graphic_heading_pane_g

0x9bb1,	// (0x0002f080) list_double_graphic_heading_pane_t1_ParamLimits

0x9bb1,	// (0x0002f080) list_double_graphic_heading_pane_t1

0x9bc7,	// (0x0002f096) list_double_graphic_heading_pane_t2_ParamLimits

0x9bc7,	// (0x0002f096) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00034b23) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00034b23) list_double_graphic_heading_pane_t

0x9ade,	// (0x0002efad) list_double_time_pane_g1_ParamLimits

0x9ade,	// (0x0002efad) list_double_time_pane_g1

0x997b,	// (0x0002ee4a) list_double_time_pane_g2_ParamLimits

0x997b,	// (0x0002ee4a) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00034b28) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00034b28) list_double_time_pane_g

0x9b38,	// (0x0002f007) list_double_time_pane_t1_ParamLimits

0x9b38,	// (0x0002f007) list_double_time_pane_t1

0x9bd9,	// (0x0002f0a8) list_double_time_pane_t2_ParamLimits

0x9bd9,	// (0x0002f0a8) list_double_time_pane_t2

0x9beb,	// (0x0002f0ba) list_double_time_pane_t3_ParamLimits

0x9beb,	// (0x0002f0ba) list_double_time_pane_t3

0x9bfd,	// (0x0002f0cc) list_double_time_pane_t4_ParamLimits

0x9bfd,	// (0x0002f0cc) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00034b2d) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00034b2d) list_double_time_pane_t

0x9c0f,	// (0x0002f0de) list_setting_pane_g1_ParamLimits

0x9c0f,	// (0x0002f0de) list_setting_pane_g1

0x9c1b,	// (0x0002f0ea) list_setting_pane_g2_ParamLimits

0x9c1b,	// (0x0002f0ea) list_setting_pane_g2

0x0001,

0xf667,	// (0x00034b36) list_setting_pane_g_ParamLimits

0xf667,	// (0x00034b36) list_setting_pane_g

0x9c27,	// (0x0002f0f6) list_setting_pane_t1_ParamLimits

0x9c27,	// (0x0002f0f6) list_setting_pane_t1

0x9c41,	// (0x0002f110) list_setting_pane_t2_ParamLimits

0x9c41,	// (0x0002f110) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00034b3b) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00034b3b) list_setting_pane_t

0x9c80,	// (0x0002f14f) set_value_pane_cp_ParamLimits

0x9c80,	// (0x0002f14f) set_value_pane_cp

0x9c8e,	// (0x0002f15d) list_setting_number_pane_g1_ParamLimits

0x9c8e,	// (0x0002f15d) list_setting_number_pane_g1

0x9c9a,	// (0x0002f169) list_setting_number_pane_g2_ParamLimits

0x9c9a,	// (0x0002f169) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x00034b42) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x00034b42) list_setting_number_pane_g

0x9ca6,	// (0x0002f175) list_setting_number_pane_t1_ParamLimits

0x9ca6,	// (0x0002f175) list_setting_number_pane_t1

0x9cbf,	// (0x0002f18e) list_setting_number_pane_t2_ParamLimits

0x9cbf,	// (0x0002f18e) list_setting_number_pane_t2

0x9cd9,	// (0x0002f1a8) list_setting_number_pane_t3_ParamLimits

0x9cd9,	// (0x0002f1a8) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x00034b47) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x00034b47) list_setting_number_pane_t

0x9c80,	// (0x0002f14f) set_value_pane_ParamLimits

0x9c80,	// (0x0002f14f) set_value_pane

0xd1eb,	// (0x000326ba) bg_set_opt_pane_ParamLimits

0xd1eb,	// (0x000326ba) bg_set_opt_pane

0xec13,	// (0x000340e2) set_value_pane_t1

0xd20c,	// (0x000326db) slider_set_pane_cp3

0xd215,	// (0x000326e4) volume_small_pane_cp

0xd21e,	// (0x000326ed) list_form_gen_pane

0xd227,	// (0x000326f6) scroll_pane_cp8

0x9d1c,	// (0x0002f1eb) form_field_data_pane_ParamLimits

0x9d1c,	// (0x0002f1eb) form_field_data_pane

0x9d37,	// (0x0002f206) form_field_data_wide_pane_ParamLimits

0x9d37,	// (0x0002f206) form_field_data_wide_pane

0xec29,	// (0x000340f8) form_field_popup_pane_ParamLimits

0xec29,	// (0x000340f8) form_field_popup_pane

0x9d5b,	// (0x0002f22a) form_field_popup_wide_pane_ParamLimits

0x9d5b,	// (0x0002f22a) form_field_popup_wide_pane

0xec4b,	// (0x0003411a) form_field_slider_pane_ParamLimits

0xec4b,	// (0x0003411a) form_field_slider_pane

0xec5e,	// (0x0003412d) form_field_slider_wide_pane_ParamLimits

0xec5e,	// (0x0003412d) form_field_slider_wide_pane

0xd238,	// (0x00032707) data_form_pane

0x9d86,	// (0x0002f255) form_field_data_pane_t1

0xd244,	// (0x00032713) input_focus_pane

0xd252,	// (0x00032721) data_form_wide_pane

0xec7d,	// (0x0003414c) form_field_data_wide_pane_t1

0xcfbf,	// (0x0003248e) input_focus_pane_cp6

0x9da0,	// (0x0002f26f) form_field_popup_pane_t1

0xd244,	// (0x00032713) input_focus_pane_cp7

0xd27e,	// (0x0003274d) list_form_pane

0xeca7,	// (0x00034176) form_field_popup_wide_pane_t1

0xd244,	// (0x00032713) input_focus_pane_cp8

0xd28a,	// (0x00032759) list_form_wide_pane

0x9dc2,	// (0x0002f291) form_field_slider_pane_t1_ParamLimits

0x9dc2,	// (0x0002f291) form_field_slider_pane_t1

0x9dda,	// (0x0002f2a9) form_field_slider_pane_t2_ParamLimits

0x9dda,	// (0x0002f2a9) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x00034b57) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x00034b57) form_field_slider_pane_t

0xa475,	// (0x0002f944) input_focus_pane_cp9_ParamLimits

0xa475,	// (0x0002f944) input_focus_pane_cp9

0x9def,	// (0x0002f2be) slider_cont_pane_ParamLimits

0x9def,	// (0x0002f2be) slider_cont_pane

0xd299,	// (0x00032768) form_field_slider_wide_pane_t1_ParamLimits

0xd299,	// (0x00032768) form_field_slider_wide_pane_t1

0xecbc,	// (0x0003418b) form_field_slider_wide_pane_t2_ParamLimits

0xecbc,	// (0x0003418b) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x00034b5c) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x00034b5c) form_field_slider_wide_pane_t

0xa475,	// (0x0002f944) input_focus_pane_cp10_ParamLimits

0xa475,	// (0x0002f944) input_focus_pane_cp10

0x9e03,	// (0x0002f2d2) slider_cont_pane_cp1_ParamLimits

0x9e03,	// (0x0002f2d2) slider_cont_pane_cp1

0x9e17,	// (0x0002f2e6) slider_form_pane_cp

0xd2ab,	// (0x0003277a) input_focus_pane_g1

0xd2b3,	// (0x00032782) input_focus_pane_g2

0xd2bb,	// (0x0003278a) input_focus_pane_g3

0xd2c3,	// (0x00032792) input_focus_pane_g4

0xd2cb,	// (0x0003279a) input_focus_pane_g5

0xd2d3,	// (0x000327a2) input_focus_pane_g6

0xd2db,	// (0x000327aa) input_focus_pane_g7

0xd2e3,	// (0x000327b2) input_focus_pane_g8

0xd2eb,	// (0x000327ba) input_focus_pane_g9

0xa1b5,	// (0x0002f684) input_focus_pane_g10

0x0009,

0xf692,	// (0x00034b61) input_focus_pane_g

0x33e2,	// (0x000288b1) wait_border_pane_g3_copy1

0x9e1f,	// (0x0002f2ee) data_form_pane_t1

0xa1b5,	// (0x0002f684) wait_anim_pane_g1_copy1

0x9f52,	// (0x0002f421) data_form_wide_pane_t1

0xecce,	// (0x0003419d) list_form_graphic_pane_cp_ParamLimits

0xecce,	// (0x0003419d) list_form_graphic_pane_cp

0x435b,	// (0x0002982a) slider_form_pane_g1

0x4364,	// (0x00029833) slider_form_pane_g2

0x0006,

0xf990,	// (0x00034e5f) slider_form_pane_g

0xecce,	// (0x0003419d) list_form_graphic_pane_ParamLimits

0xecce,	// (0x0003419d) list_form_graphic_pane

0xece0,	// (0x000341af) list_form_graphic_pane_g1

0xece8,	// (0x000341b7) list_form_graphic_pane_t1_ParamLimits

0xece8,	// (0x000341b7) list_form_graphic_pane_t1

0xa4b7,	// (0x0002f986) list_highlight_pane_cp5_ParamLimits

0xa4b7,	// (0x0002f986) list_highlight_pane_cp5

0x9e39,	// (0x0002f308) find_pane_g1

0xd2f3,	// (0x000327c2) input_find_pane

0x9e42,	// (0x0002f311) input_find_pane_g1_ParamLimits

0x9e42,	// (0x0002f311) input_find_pane_g1

0x9e4e,	// (0x0002f31d) input_find_pane_t1_ParamLimits

0x9e4e,	// (0x0002f31d) input_find_pane_t1

0x9e63,	// (0x0002f332) input_find_pane_t2_ParamLimits

0x9e63,	// (0x0002f332) input_find_pane_t2

0x0001,

0xf6a7,	// (0x00034b76) input_find_pane_t_ParamLimits

0xf6a7,	// (0x00034b76) input_find_pane_t

0xd2fc,	// (0x000327cb) input_focus_pane_cp5_ParamLimits

0xd2fc,	// (0x000327cb) input_focus_pane_cp5

0xd30a,	// (0x000327d9) bg_popup_window_pane_cp2_ParamLimits

0xd30a,	// (0x000327d9) bg_popup_window_pane_cp2

0xd317,	// (0x000327e6) listscroll_menu_pane_ParamLimits

0xd317,	// (0x000327e6) listscroll_menu_pane

0xa9f8,	// (0x0002fec7) popup_submenu_window_ParamLimits

0xa9f8,	// (0x0002fec7) popup_submenu_window

0xd323,	// (0x000327f2) find_popup_pane_g1

0xd32b,	// (0x000327fa) input_popup_find_pane_cp

0xd2fc,	// (0x000327cb) input_focus_pane_cp4_ParamLimits

0xd2fc,	// (0x000327cb) input_focus_pane_cp4

0xd335,	// (0x00032804) input_popup_find_pane_t1_ParamLimits

0xd335,	// (0x00032804) input_popup_find_pane_t1

0xa2a5,	// (0x0002f774) bg_popup_sub_pane_cp

0xd363,	// (0x00032832) listscroll_popup_sub_pane

0xd36b,	// (0x0003283a) list_submenu_pane_ParamLimits

0xd36b,	// (0x0003283a) list_submenu_pane

0xd37c,	// (0x0003284b) scroll_pane_cp4

0xd384,	// (0x00032853) list_single_popup_submenu_pane_ParamLimits

0xd384,	// (0x00032853) list_single_popup_submenu_pane

0xd399,	// (0x00032868) list_single_popup_submenu_pane_g1

0xd3a1,	// (0x00032870) list_single_popup_submenu_pane_t1_ParamLimits

0xd3a1,	// (0x00032870) list_single_popup_submenu_pane_t1

0xa475,	// (0x0002f944) bg_active_tab_pane_cp1_ParamLimits

0xa475,	// (0x0002f944) bg_active_tab_pane_cp1

0xaa36,	// (0x0002ff05) tabs_2_active_pane_g1

0xaa3e,	// (0x0002ff0d) tabs_2_active_pane_t1

0xa475,	// (0x0002f944) bg_passive_tab_pane_cp1_ParamLimits

0xa475,	// (0x0002f944) bg_passive_tab_pane_cp1

0xaa36,	// (0x0002ff05) tabs_2_passive_pane_g1

0xaa3e,	// (0x0002ff0d) tabs_2_passive_pane_t1

0xa4b7,	// (0x0002f986) bg_active_tab_pane_cp4

0xaa50,	// (0x0002ff1f) tabs_2_long_active_pane_t1

0x1176,	// (0x00026645) bg_passive_tab_pane_cp4

0x8f27,	// (0x0002e3f6) list_single_midp_graphic_pane_g4_ParamLimits

0xa4b7,	// (0x0002f986) bg_active_tab_pane_cp5

0xaa63,	// (0x0002ff32) tabs_3_long_active_pane_t1

0x1176,	// (0x00026645) bg_passive_tab_pane_cp5

0x8f27,	// (0x0002e3f6) list_single_midp_graphic_pane_g4

0xa4b7,	// (0x0002f986) bg_popup_window_pane_cp13_ParamLimits

0xa4b7,	// (0x0002f986) bg_popup_window_pane_cp13

0xd3bf,	// (0x0003288e) listscroll_popup_fast_pane_ParamLimits

0xd3bf,	// (0x0003288e) listscroll_popup_fast_pane

0xd3ce,	// (0x0003289d) grid_popup_fast_pane_ParamLimits

0xd3ce,	// (0x0003289d) grid_popup_fast_pane

0xd3e0,	// (0x000328af) scroll_pane_cp9_ParamLimits

0xd3e0,	// (0x000328af) scroll_pane_cp9

0x5d28,	// (0x0002b1f7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5d28,	// (0x0002b1f7) list_single_graphic_hl_pane_t1_cp2

0xd404,	// (0x000328d3) input_focus_pane_cp20_ParamLimits

0xd404,	// (0x000328d3) input_focus_pane_cp20

0xd412,	// (0x000328e1) query_popup_data_pane_t1_ParamLimits

0xd412,	// (0x000328e1) query_popup_data_pane_t1

0xd425,	// (0x000328f4) query_popup_data_pane_t2_ParamLimits

0xd425,	// (0x000328f4) query_popup_data_pane_t2

0xd46b,	// (0x0003293a) query_popup_data_pane_t3_ParamLimits

0xd46b,	// (0x0003293a) query_popup_data_pane_t3

0xd4ac,	// (0x0003297b) query_popup_data_pane_t4_ParamLimits

0xd4ac,	// (0x0003297b) query_popup_data_pane_t4

0xd4e8,	// (0x000329b7) query_popup_data_pane_t5_ParamLimits

0xd4e8,	// (0x000329b7) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x00034b7b) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x00034b7b) query_popup_data_pane_t

0xd2ab,	// (0x0003277a) bg_set_opt_pane_g1

0xd2b3,	// (0x00032782) bg_set_opt_pane_g2

0xd2bb,	// (0x0003278a) bg_set_opt_pane_g3

0xd2c3,	// (0x00032792) bg_set_opt_pane_g4

0xd2cb,	// (0x0003279a) bg_set_opt_pane_g5

0xd2d3,	// (0x000327a2) bg_set_opt_pane_g6

0xd2db,	// (0x000327aa) bg_set_opt_pane_g7

0xd2e3,	// (0x000327b2) bg_set_opt_pane_g8

0xd2eb,	// (0x000327ba) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x00034b86) bg_set_opt_pane_g

0x075a,	// (0x00025c29) control_top_pane_stacon_ParamLimits

0x075a,	// (0x00025c29) control_top_pane_stacon

0x07ad,	// (0x00025c7c) signal_pane_stacon_ParamLimits

0x07ad,	// (0x00025c7c) signal_pane_stacon

0x07d2,	// (0x00025ca1) stacon_top_pane_g1_ParamLimits

0x07d2,	// (0x00025ca1) stacon_top_pane_g1

0x07f4,	// (0x00025cc3) title_pane_stacon_ParamLimits

0x07f4,	// (0x00025cc3) title_pane_stacon

0x081e,	// (0x00025ced) uni_indicator_pane_stacon_ParamLimits

0x081e,	// (0x00025ced) uni_indicator_pane_stacon

0x0836,	// (0x00025d05) battery_pane_stacon_ParamLimits

0x0836,	// (0x00025d05) battery_pane_stacon

0x087a,	// (0x00025d49) control_bottom_pane_stacon_ParamLimits

0x087a,	// (0x00025d49) control_bottom_pane_stacon

0x089d,	// (0x00025d6c) navi_pane_stacon_ParamLimits

0x089d,	// (0x00025d6c) navi_pane_stacon

0x08c0,	// (0x00025d8f) stacon_bottom_pane_g1_ParamLimits

0x08c0,	// (0x00025d8f) stacon_bottom_pane_g1

0x0115,	// (0x000255e4) aid_levels_signal_lsc_ParamLimits

0x0115,	// (0x000255e4) aid_levels_signal_lsc

0x012c,	// (0x000255fb) signal_pane_stacon_g1_ParamLimits

0x012c,	// (0x000255fb) signal_pane_stacon_g1

0x0140,	// (0x0002560f) signal_pane_stacon_g2_ParamLimits

0x0140,	// (0x0002560f) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00034b99) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00034b99) signal_pane_stacon_g

0x0175,	// (0x00025644) title_pane_stacon_t1_ParamLimits

0x0175,	// (0x00025644) title_pane_stacon_t1

0xd52c,	// (0x000329fb) uni_indicator_pane_stacon_g1

0xd536,	// (0x00032a05) uni_indicator_pane_stacon_g2

0xd540,	// (0x00032a0f) uni_indicator_pane_stacon_g3

0xd54a,	// (0x00032a19) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x00034ba5) uni_indicator_pane_stacon_g

0x019a,	// (0x00025669) control_top_pane_stacon_g1

0x01a2,	// (0x00025671) control_top_pane_stacon_t1_ParamLimits

0x01a2,	// (0x00025671) control_top_pane_stacon_t1

0x01d9,	// (0x000256a8) aid_levels_battery_lsc_ParamLimits

0x01d9,	// (0x000256a8) aid_levels_battery_lsc

0x01f1,	// (0x000256c0) battery_pane_stacon_g1_ParamLimits

0x01f1,	// (0x000256c0) battery_pane_stacon_g1

0x0204,	// (0x000256d3) battery_pane_stacon_g2_ParamLimits

0x0204,	// (0x000256d3) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x00034bae) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x00034bae) battery_pane_stacon_g

0x0242,	// (0x00025711) navi_icon_pane_stacon

0x0256,	// (0x00025725) navi_navi_pane_stacon

0x0242,	// (0x00025711) navi_text_pane_stacon

0x019a,	// (0x00025669) control_bottom_pane_stacon_g1

0x026c,	// (0x0002573b) control_bottom_pane_stacon_t1_ParamLimits

0x026c,	// (0x0002573b) control_bottom_pane_stacon_t1

0xaa75,	// (0x0002ff44) grid_app_pane_ParamLimits

0xaa75,	// (0x0002ff44) grid_app_pane

0xaaad,	// (0x0002ff7c) scroll_pane_cp15_ParamLimits

0xaaad,	// (0x0002ff7c) scroll_pane_cp15

0xaac6,	// (0x0002ff95) cell_app_pane_ParamLimits

0xaac6,	// (0x0002ff95) cell_app_pane

0xab07,	// (0x0002ffd6) cell_app_pane_g1_ParamLimits

0xab07,	// (0x0002ffd6) cell_app_pane_g1

0xd56e,	// (0x00032a3d) cell_app_pane_g2_ParamLimits

0xd56e,	// (0x00032a3d) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x00034bb3) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x00034bb3) cell_app_pane_g

0xd57a,	// (0x00032a49) cell_app_pane_t1_ParamLimits

0xd57a,	// (0x00032a49) cell_app_pane_t1

0xd58c,	// (0x00032a5b) grid_highlight_pane_ParamLimits

0xd58c,	// (0x00032a5b) grid_highlight_pane

0xd2ab,	// (0x0003277a) cell_highlight_pane_g1

0xd2b3,	// (0x00032782) cell_highlight_pane_g2

0xd2bb,	// (0x0003278a) cell_highlight_pane_g3

0xd2c3,	// (0x00032792) cell_highlight_pane_g4

0xd2cb,	// (0x0003279a) cell_highlight_pane_g5

0xd2d3,	// (0x000327a2) cell_highlight_pane_g6

0xd2db,	// (0x000327aa) cell_highlight_pane_g7

0xd2e3,	// (0x000327b2) cell_highlight_pane_g8

0xd2eb,	// (0x000327ba) cell_highlight_pane_g9

0xa1b5,	// (0x0002f684) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00034b61) cell_highlight_pane_g

0xd59d,	// (0x00032a6c) bg_scroll_pane

0x033f,	// (0x0002580e) scroll_handle_pane

0xd5e4,	// (0x00032ab3) scroll_bg_pane_g1

0xd5f9,	// (0x00032ac8) scroll_bg_pane_g2

0xd611,	// (0x00032ae0) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x00034bb8) scroll_bg_pane_g

0xd626,	// (0x00032af5) scroll_handle_focus_pane_ParamLimits

0xd626,	// (0x00032af5) scroll_handle_focus_pane

0xd5e4,	// (0x00032ab3) scroll_handle_pane_g1

0xd633,	// (0x00032b02) scroll_handle_pane_g2

0xd611,	// (0x00032ae0) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00034bbf) scroll_handle_pane_g

0xd2fc,	// (0x000327cb) bg_popup_sub_pane_cp21_ParamLimits

0xd2fc,	// (0x000327cb) bg_popup_sub_pane_cp21

0xd647,	// (0x00032b16) popup_fep_japan_predictive_window_t1_ParamLimits

0xd647,	// (0x00032b16) popup_fep_japan_predictive_window_t1

0xd65e,	// (0x00032b2d) popup_fep_japan_predictive_window_t2_ParamLimits

0xd65e,	// (0x00032b2d) popup_fep_japan_predictive_window_t2

0xd691,	// (0x00032b60) popup_fep_japan_predictive_window_t3_ParamLimits

0xd691,	// (0x00032b60) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x00034bc6) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x00034bc6) popup_fep_japan_predictive_window_t

0xa2a5,	// (0x0002f774) bg_popup_sub_pane_cp23

0xd6c8,	// (0x00032b97) listscroll_japin_cand_pane

0xd6d0,	// (0x00032b9f) popup_fep_japan_candidate_window_t1

0xd6de,	// (0x00032bad) candidate_pane_ParamLimits

0xd6de,	// (0x00032bad) candidate_pane

0xd6f0,	// (0x00032bbf) scroll_pane_cp30

0xd6fa,	// (0x00032bc9) list_single_popup_jap_candidate_pane_ParamLimits

0xd6fa,	// (0x00032bc9) list_single_popup_jap_candidate_pane

0xa2a5,	// (0x0002f774) list_highlight_pane_cp30

0xd70e,	// (0x00032bdd) list_single_popup_jap_candidate_pane_t1

0xab34,	// (0x00030003) level_1_signal

0xab46,	// (0x00030015) level_2_signal

0xab59,	// (0x00030028) level_3_signal

0xab6c,	// (0x0003003b) level_4_signal

0xab7f,	// (0x0003004e) level_5_signal

0xab92,	// (0x00030061) level_6_signal

0xaba5,	// (0x00030074) level_7_signal

0xab34,	// (0x00030003) level_1_battery

0xab46,	// (0x00030015) level_2_battery

0xab59,	// (0x00030028) level_3_battery

0xab6c,	// (0x0003003b) level_4_battery

0xab7f,	// (0x0003004e) level_5_battery

0xab92,	// (0x00030061) level_6_battery

0xaba5,	// (0x00030074) level_7_battery

0x03fa,	// (0x000258c9) list_menu_pane_ParamLimits

0x03fa,	// (0x000258c9) list_menu_pane

0x0410,	// (0x000258df) scroll_pane_cp25_ParamLimits

0x0410,	// (0x000258df) scroll_pane_cp25

0x0429,	// (0x000258f8) list_double2_graphic_pane_cp2_ParamLimits

0x0429,	// (0x000258f8) list_double2_graphic_pane_cp2

0x0429,	// (0x000258f8) list_double2_large_graphic_pane_cp2_ParamLimits

0x0429,	// (0x000258f8) list_double2_large_graphic_pane_cp2

0x0429,	// (0x000258f8) list_double2_pane_cp2_ParamLimits

0x0429,	// (0x000258f8) list_double2_pane_cp2

0x0429,	// (0x000258f8) list_double_graphic_pane_cp2_ParamLimits

0x0429,	// (0x000258f8) list_double_graphic_pane_cp2

0x0429,	// (0x000258f8) list_double_large_graphic_pane_cp2_ParamLimits

0x0429,	// (0x000258f8) list_double_large_graphic_pane_cp2

0x0429,	// (0x000258f8) list_double_number_pane_cp2_ParamLimits

0x0429,	// (0x000258f8) list_double_number_pane_cp2

0x0429,	// (0x000258f8) list_double_pane_cp2_ParamLimits

0x0429,	// (0x000258f8) list_double_pane_cp2

0xabcb,	// (0x0003009a) list_single_2graphic_pane_cp2_ParamLimits

0xabcb,	// (0x0003009a) list_single_2graphic_pane_cp2

0xabcb,	// (0x0003009a) list_single_graphic_heading_pane_cp2_ParamLimits

0xabcb,	// (0x0003009a) list_single_graphic_heading_pane_cp2

0xabcb,	// (0x0003009a) list_single_graphic_pane_cp2_ParamLimits

0xabcb,	// (0x0003009a) list_single_graphic_pane_cp2

0xabcb,	// (0x0003009a) list_single_heading_pane_cp2_ParamLimits

0xabcb,	// (0x0003009a) list_single_heading_pane_cp2

0x046c,	// (0x0002593b) list_single_large_graphic_pane_cp2_ParamLimits

0x046c,	// (0x0002593b) list_single_large_graphic_pane_cp2

0xabcb,	// (0x0003009a) list_single_number_heading_pane_cp2_ParamLimits

0xabcb,	// (0x0003009a) list_single_number_heading_pane_cp2

0xabcb,	// (0x0003009a) list_single_number_pane_cp2_ParamLimits

0xabcb,	// (0x0003009a) list_single_number_pane_cp2

0xabcb,	// (0x0003009a) list_single_pane_cp2_ParamLimits

0xabcb,	// (0x0003009a) list_single_pane_cp2

0x0542,	// (0x00025a11) bg_popup_sub_pane_cp22

0x0567,	// (0x00025a36) popup_side_volume_key_window_g1

0x0591,	// (0x00025a60) popup_side_volume_key_window_t1

0x05af,	// (0x00025a7e) volume_small_pane_cp1

0xa475,	// (0x0002f944) bg_popup_sub_pane_cp24_ParamLimits

0xa475,	// (0x0002f944) bg_popup_sub_pane_cp24

0x05b7,	// (0x00025a86) fep_china_uni_candidate_pane_ParamLimits

0x05b7,	// (0x00025a86) fep_china_uni_candidate_pane

0x05cb,	// (0x00025a9a) fep_china_uni_entry_pane

0x05db,	// (0x00025aaa) popup_fep_china_uni_window_g1

0x05f7,	// (0x00025ac6) fep_china_uni_entry_pane_g1

0x0601,	// (0x00025ad0) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x00034bf7) fep_china_uni_entry_pane_g

0x060b,	// (0x00025ada) fep_entry_item_pane

0x0615,	// (0x00025ae4) fep_candidate_item_pane

0x061d,	// (0x00025aec) fep_china_uni_candidate_pane_g1

0x0627,	// (0x00025af6) fep_china_uni_candidate_pane_g2

0x062f,	// (0x00025afe) fep_china_uni_candidate_pane_g3

0x0637,	// (0x00025b06) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x00034bfc) fep_china_uni_candidate_pane_g

0xa1b5,	// (0x0002f684) fep_entry_item_pane_g1

0x0641,	// (0x00025b10) fep_entry_item_pane_t1_ParamLimits

0x0641,	// (0x00025b10) fep_entry_item_pane_t1

0x0657,	// (0x00025b26) fep_candidate_item_pane_t1_ParamLimits

0x0657,	// (0x00025b26) fep_candidate_item_pane_t1

0x066c,	// (0x00025b3b) fep_candidate_item_pane_t2_ParamLimits

0x066c,	// (0x00025b3b) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x00034c05) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x00034c05) fep_candidate_item_pane_t

0xa4b7,	// (0x0002f986) list_highlight_pane_cp31_ParamLimits

0xa4b7,	// (0x0002f986) list_highlight_pane_cp31

0x067e,	// (0x00025b4d) level_1_signal_lsc

0x0687,	// (0x00025b56) level_2_signal_lsc

0x0690,	// (0x00025b5f) level_3_signal_lsc

0x0699,	// (0x00025b68) level_4_signal_lsc

0x06a2,	// (0x00025b71) level_5_signal_lsc

0x06ab,	// (0x00025b7a) level_6_signal_lsc

0x06b4,	// (0x00025b83) level_7_signal_lsc

0x06b4,	// (0x00025b83) level_1_battery_lsc

0x06bd,	// (0x00025b8c) level_2_battery_lsc

0x06c6,	// (0x00025b95) level_3_battery_lsc

0x06cf,	// (0x00025b9e) level_4_battery_lsc

0x06d8,	// (0x00025ba7) level_5_battery_lsc

0x06e1,	// (0x00025bb0) level_6_battery_lsc

0x067e,	// (0x00025b4d) level_7_battery_lsc

0x06ea,	// (0x00025bb9) scroll_handle_focus_pane_g1

0x06f3,	// (0x00025bc2) scroll_handle_focus_pane_g2

0x06fc,	// (0x00025bcb) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x00034c0a) scroll_handle_focus_pane_g

0x9e78,	// (0x0002f347) list_single_2graphic_pane_g1_ParamLimits

0x9e78,	// (0x0002f347) list_single_2graphic_pane_g1

0x9944,	// (0x0002ee13) list_single_2graphic_pane_g2_ParamLimits

0x9944,	// (0x0002ee13) list_single_2graphic_pane_g2

0xeb9a,	// (0x00034069) list_single_2graphic_pane_g3_ParamLimits

0xeb9a,	// (0x00034069) list_single_2graphic_pane_g3

0x9e84,	// (0x0002f353) list_single_2graphic_pane_g4_ParamLimits

0x9e84,	// (0x0002f353) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00034c11) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00034c11) list_single_2graphic_pane_g

0x9e90,	// (0x0002f35f) list_single_2graphic_pane_t1_ParamLimits

0x9e90,	// (0x0002f35f) list_single_2graphic_pane_t1

0x9ebe,	// (0x0002f38d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9ebe,	// (0x0002f38d) list_double2_graphic_large_graphic_pane_g1

0x9ade,	// (0x0002efad) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9ade,	// (0x0002efad) list_double2_graphic_large_graphic_pane_g2

0x997b,	// (0x0002ee4a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x997b,	// (0x0002ee4a) list_double2_graphic_large_graphic_pane_g3

0x9ed0,	// (0x0002f39f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9ed0,	// (0x0002f39f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x00034c1a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x00034c1a) list_double2_graphic_large_graphic_pane_g

0x9edc,	// (0x0002f3ab) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9edc,	// (0x0002f3ab) list_double2_graphic_large_graphic_pane_t1

0x9ef2,	// (0x0002f3c1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9ef2,	// (0x0002f3c1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x00034c23) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x00034c23) list_double2_graphic_large_graphic_pane_t

0x0982,	// (0x00025e51) popup_fast_swap_window_ParamLimits

0x0982,	// (0x00025e51) popup_fast_swap_window

0x09a0,	// (0x00025e6f) popup_side_volume_key_window

0x09be,	// (0x00025e8d) stacon_top_pane

0x09c8,	// (0x00025e97) status_pane_ParamLimits

0x09c8,	// (0x00025e97) status_pane

0x09be,	// (0x00025e8d) status_small_pane

0xa2a5,	// (0x0002f774) control_pane

0xa2a5,	// (0x0002f774) stacon_bottom_pane

0xd227,	// (0x000326f6) scroll_pane_cp121

0xd21e,	// (0x000326ed) set_content_pane

0xac5d,	// (0x0003012c) bg_active_tab_pane_g1_cp1

0x070e,	// (0x00025bdd) bg_active_tab_pane_g2_cp1

0xac66,	// (0x00030135) bg_active_tab_pane_g3_cp1

0xac5d,	// (0x0003012c) bg_passive_tab_pane_g1_cp1

0x070e,	// (0x00025bdd) bg_passive_tab_pane_g2_cp1

0xac66,	// (0x00030135) bg_passive_tab_pane_g3_cp1

0xac6f,	// (0x0003013e) bg_active_tab_pane_g1_cp2

0x070e,	// (0x00025bdd) bg_active_tab_pane_g2_cp2

0xac78,	// (0x00030147) bg_active_tab_pane_g3_cp2

0xac6f,	// (0x0003013e) bg_passive_tab_pane_g1_cp2

0x070e,	// (0x00025bdd) bg_passive_tab_pane_g2_cp2

0xac78,	// (0x00030147) bg_passive_tab_pane_g3_cp2

0xac81,	// (0x00030150) bg_active_tab_pane_g1_cp3

0x070e,	// (0x00025bdd) bg_active_tab_pane_g2_cp3

0xac8a,	// (0x00030159) bg_active_tab_pane_g3_cp3

0xac81,	// (0x00030150) bg_passive_tab_pane_g1_cp3

0x070e,	// (0x00025bdd) bg_passive_tab_pane_g2_cp3

0xac8a,	// (0x00030159) bg_passive_tab_pane_g3_cp3

0xac93,	// (0x00030162) bg_active_tab_pane_g1_cp4

0x070e,	// (0x00025bdd) bg_active_tab_pane_g2_cp4

0xac9c,	// (0x0003016b) bg_active_tab_pane_g3_cp4

0xac93,	// (0x00030162) bg_passive_tab_pane_g1_cp4

0x070e,	// (0x00025bdd) bg_passive_tab_pane_g2_cp4

0xac9c,	// (0x0003016b) bg_passive_tab_pane_g3_cp4

0x08dc,	// (0x00025dab) bg_active_tab_pane_g1_cp5

0x070e,	// (0x00025bdd) bg_active_tab_pane_g2_cp5

0x08e5,	// (0x00025db4) bg_active_tab_pane_g3_cp5

0x08dc,	// (0x00025dab) bg_passive_tab_pane_g1_cp5

0x070e,	// (0x00025bdd) bg_passive_tab_pane_g2_cp5

0x08e5,	// (0x00025db4) bg_passive_tab_pane_g3_cp5

0x495f,	// (0x00029e2e) list_set_graphic_pane_ParamLimits

0x495f,	// (0x00029e2e) list_set_graphic_pane

0xa2a5,	// (0x0002f774) bg_set_opt_pane_cp4

0xaca5,	// (0x00030174) list_set_graphic_pane_g1_ParamLimits

0xaca5,	// (0x00030174) list_set_graphic_pane_g1

0xacb1,	// (0x00030180) list_set_graphic_pane_g2_ParamLimits

0xacb1,	// (0x00030180) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x00034c28) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x00034c28) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x00034fab) volume_small_pane_cp_g

0xacd5,	// (0x000301a4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xacd5,	// (0x000301a4) list_double2_large_graphic_pane_g1_cp2

0xace3,	// (0x000301b2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xace3,	// (0x000301b2) list_double2_large_graphic_pane_g2_cp2

0x0952,	// (0x00025e21) list_double2_large_graphic_pane_g3_cp2

0x095a,	// (0x00025e29) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x095a,	// (0x00025e29) list_double2_large_graphic_pane_t1_cp2

0x0970,	// (0x00025e3f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0970,	// (0x00025e3f) list_double2_large_graphic_pane_t2_cp2

0xbf03,	// (0x000313d2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbf03,	// (0x000313d2) list_double_large_graphic_pane_g1_cp2

0xbf16,	// (0x000313e5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbf16,	// (0x000313e5) list_double_large_graphic_pane_g2_cp2

0x0ae6,	// (0x00025fb5) list_double_large_graphic_pane_g3_cp2

0x3ef0,	// (0x000293bf) list_double_large_graphic_pane_g4_cp

0x3ef8,	// (0x000293c7) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3ef8,	// (0x000293c7) list_double_large_graphic_pane_t1_cp2

0x3f0f,	// (0x000293de) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3f0f,	// (0x000293de) list_double_large_graphic_pane_t2_cp2

0xacf4,	// (0x000301c3) list_double2_graphic_pane_g1_cp2_ParamLimits

0xacf4,	// (0x000301c3) list_double2_graphic_pane_g1_cp2

0xad02,	// (0x000301d1) list_double2_graphic_pane_g2_cp2_ParamLimits

0xad02,	// (0x000301d1) list_double2_graphic_pane_g2_cp2

0xad13,	// (0x000301e2) list_double2_graphic_pane_g3_cp2

0x09ff,	// (0x00025ece) list_double2_graphic_pane_t1_cp2_ParamLimits

0x09ff,	// (0x00025ece) list_double2_graphic_pane_t1_cp2

0x0a15,	// (0x00025ee4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0a15,	// (0x00025ee4) list_double2_graphic_pane_t2_cp2

0x0a27,	// (0x00025ef6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0a27,	// (0x00025ef6) list_single_number_heading_pane_g1_cp2

0x0a33,	// (0x00025f02) list_single_number_heading_pane_g2_cp2

0x0a3b,	// (0x00025f0a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0a3b,	// (0x00025f0a) list_single_number_heading_pane_t1_cp2

0xad1d,	// (0x000301ec) list_single_number_heading_pane_t2_cp2_ParamLimits

0xad1d,	// (0x000301ec) list_single_number_heading_pane_t2_cp2

0x0a65,	// (0x00025f34) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0a65,	// (0x00025f34) list_single_number_heading_pane_t3_cp2

0x0a27,	// (0x00025ef6) list_single_heading_pane_g1_cp2_ParamLimits

0x0a27,	// (0x00025ef6) list_single_heading_pane_g1_cp2

0x0a33,	// (0x00025f02) list_single_heading_pane_g2_cp2

0x0a3b,	// (0x00025f0a) list_single_heading_pane_t1_cp2_ParamLimits

0x0a3b,	// (0x00025f0a) list_single_heading_pane_t1_cp2

0xbeef,	// (0x000313be) list_single_heading_pane_t2_cp2_ParamLimits

0xbeef,	// (0x000313be) list_single_heading_pane_t2_cp2

0x3c08,	// (0x000290d7) list_double_graphic_pane_g1_cp2_ParamLimits

0x3c08,	// (0x000290d7) list_double_graphic_pane_g1_cp2

0x3c14,	// (0x000290e3) list_double_graphic_pane_g2_cp2_ParamLimits

0x3c14,	// (0x000290e3) list_double_graphic_pane_g2_cp2

0x3c23,	// (0x000290f2) list_double_graphic_pane_g3_cp2

0x3c2b,	// (0x000290fa) list_double_graphic_pane_t1_cp2_ParamLimits

0x3c2b,	// (0x000290fa) list_double_graphic_pane_t1_cp2

0x3c41,	// (0x00029110) list_double_graphic_pane_t2_cp2_ParamLimits

0x3c41,	// (0x00029110) list_double_graphic_pane_t2_cp2

0x0ada,	// (0x00025fa9) list_double_number_pane_g1_cp2_ParamLimits

0x0ada,	// (0x00025fa9) list_double_number_pane_g1_cp2

0x0ae6,	// (0x00025fb5) list_double_number_pane_g2_cp2

0xbe89,	// (0x00031358) list_double_number_pane_t1_cp2_ParamLimits

0xbe89,	// (0x00031358) list_double_number_pane_t1_cp2

0x3be0,	// (0x000290af) list_double_number_pane_t2_cp2_ParamLimits

0x3be0,	// (0x000290af) list_double_number_pane_t2_cp2

0x3bf6,	// (0x000290c5) list_double_number_pane_t3_cp2_ParamLimits

0x3bf6,	// (0x000290c5) list_double_number_pane_t3_cp2

0xbdc6,	// (0x00031295) list_single_graphic_pane_g1_cp2_ParamLimits

0xbdc6,	// (0x00031295) list_single_graphic_pane_g1_cp2

0x0b40,	// (0x0002600f) list_single_graphic_pane_g2_cp2_ParamLimits

0x0b40,	// (0x0002600f) list_single_graphic_pane_g2_cp2

0x0b4c,	// (0x0002601b) list_single_graphic_pane_g3_cp2

0x3a8b,	// (0x00028f5a) list_single_graphic_pane_t1_cp2_ParamLimits

0x3a8b,	// (0x00028f5a) list_single_graphic_pane_t1_cp2

0x0b40,	// (0x0002600f) list_single_number_pane_g1_cp2_ParamLimits

0x0b40,	// (0x0002600f) list_single_number_pane_g1_cp2

0x0b4c,	// (0x0002601b) list_single_number_pane_g2_cp2

0x3a8b,	// (0x00028f5a) list_single_number_pane_t1_cp2_ParamLimits

0x3a8b,	// (0x00028f5a) list_single_number_pane_t1_cp2

0xbdb2,	// (0x00031281) list_single_number_pane_t2_cp2_ParamLimits

0xbdb2,	// (0x00031281) list_single_number_pane_t2_cp2

0xace3,	// (0x000301b2) list_double2_pane_g1_cp2_ParamLimits

0xace3,	// (0x000301b2) list_double2_pane_g1_cp2

0x0952,	// (0x00025e21) list_double2_pane_g2_cp2

0x0ab2,	// (0x00025f81) list_double2_pane_t1_cp2_ParamLimits

0x0ab2,	// (0x00025f81) list_double2_pane_t1_cp2

0x0ac8,	// (0x00025f97) list_double2_pane_t2_cp2_ParamLimits

0x0ac8,	// (0x00025f97) list_double2_pane_t2_cp2

0x0ada,	// (0x00025fa9) list_double_pane_g1_cp2_ParamLimits

0x0ada,	// (0x00025fa9) list_double_pane_g1_cp2

0x0ae6,	// (0x00025fb5) list_double_pane_g2_cp2

0x0aee,	// (0x00025fbd) list_double_pane_t1_cp2_ParamLimits

0x0aee,	// (0x00025fbd) list_double_pane_t1_cp2

0x0b04,	// (0x00025fd3) list_double_pane_t2_cp2_ParamLimits

0x0b04,	// (0x00025fd3) list_double_pane_t2_cp2

0x0b30,	// (0x00025fff) list_single_pane_cp2_g3

0x0b40,	// (0x0002600f) list_single_pane_g1_cp2_ParamLimits

0x0b40,	// (0x0002600f) list_single_pane_g1_cp2

0x0b4c,	// (0x0002601b) list_single_pane_g2_cp2

0x0b54,	// (0x00026023) list_single_pane_t1_cp2_ParamLimits

0x0b54,	// (0x00026023) list_single_pane_t1_cp2

0xad4b,	// (0x0003021a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xad4b,	// (0x0003021a) list_single_large_graphic_pane_g1_cp2

0x0b7a,	// (0x00026049) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0b7a,	// (0x00026049) list_single_large_graphic_pane_g2_cp2

0x0b86,	// (0x00026055) list_single_large_graphic_pane_g3_cp2

0x0b8e,	// (0x0002605d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x0b8e,	// (0x0002605d) list_single_large_graphic_pane_g4_cp1

0x0ba8,	// (0x00026077) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0ba8,	// (0x00026077) list_single_large_graphic_pane_t1_cp2

0x3a55,	// (0x00028f24) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3a55,	// (0x00028f24) list_single_graphic_heading_pane_g1_cp2

0xbc37,	// (0x00031106) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xbc37,	// (0x00031106) list_single_graphic_heading_pane_g4_cp2

0x0b4c,	// (0x0002601b) list_single_graphic_heading_pane_g5_cp2

0x3a61,	// (0x00028f30) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3a61,	// (0x00028f30) list_single_graphic_heading_pane_t1_cp2

0xbc48,	// (0x00031117) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xbc48,	// (0x00031117) list_single_graphic_heading_pane_t2_cp2

0x3a16,	// (0x00028ee5) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3a16,	// (0x00028ee5) list_single_2graphic_pane_g1_cp2

0xbc37,	// (0x00031106) list_single_2graphic_pane_g2_cp2_ParamLimits

0xbc37,	// (0x00031106) list_single_2graphic_pane_g2_cp2

0x0b4c,	// (0x0002601b) list_single_2graphic_pane_g3_cp2

0x3a33,	// (0x00028f02) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3a33,	// (0x00028f02) list_single_2graphic_pane_g4_cp2

0x3a3f,	// (0x00028f0e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3a3f,	// (0x00028f0e) list_single_2graphic_pane_t1_cp2

0xa1b5,	// (0x0002f684) list_highlight_pane_g10_cp1

0x35ee,	// (0x00028abd) list_highlight_pane_g1_cp1

0x35f6,	// (0x00028ac5) list_highlight_pane_g2_cp1

0x35fe,	// (0x00028acd) list_highlight_pane_g3_cp1

0x3606,	// (0x00028ad5) list_highlight_pane_g4_cp1

0x360e,	// (0x00028add) list_highlight_pane_g5_cp1

0x3616,	// (0x00028ae5) list_highlight_pane_g6_cp1

0x361e,	// (0x00028aed) list_highlight_pane_g7_cp1

0x3626,	// (0x00028af5) list_highlight_pane_g8_cp1

0x362e,	// (0x00028afd) list_highlight_pane_g9_cp1

0xbbfd,	// (0x000310cc) form_field_slider_pane_t3

0xbc0b,	// (0x000310da) form_field_slider_pane_t4

0x352a,	// (0x000289f9) slider_form_pane_ParamLimits

0x352a,	// (0x000289f9) slider_form_pane

0xa2a5,	// (0x0002f774) control_abbreviations

0xa2a5,	// (0x0002f774) control_conventions

0xa2a5,	// (0x0002f774) control_definitions

0xa2a5,	// (0x0002f774) format_table_attribute

0x3d1c,	// (0x000291eb) bg_popup_preview_window_pane_g9

0xa2a5,	// (0x0002f774) format_table_data2

0xa2a5,	// (0x0002f774) format_table_data3

0xa2a5,	// (0x0002f774) format_table_data_example

0x0008,

0xa2a5,	// (0x0002f774) intro_purpose

0xf8f0,	// (0x00034dbf) bg_popup_preview_window_pane_g

0xa2a5,	// (0x0002f774) texts_category

0xa2a5,	// (0x0002f774) texts_graphics

0x0bbe,	// (0x0002608d) text_digital

0x0bcd,	// (0x0002609c) text_primary

0x0bdc,	// (0x000260ab) text_primary_small

0x0beb,	// (0x000260ba) text_secondary

0x0bfa,	// (0x000260c9) text_title

0x4498,	// (0x00029967) bg_passive_tab_pane_g1_cp3_srt

0x070e,	// (0x00025bdd) bg_passive_tab_pane_g2_cp3_srt

0x44a1,	// (0x00029970) bg_passive_tab_pane_g3_cp3_srt

0xa475,	// (0x0002f944) bg_active_tab_pane_cp3_srt_ParamLimits

0xa475,	// (0x0002f944) bg_active_tab_pane_cp3_srt

0x44aa,	// (0x00029979) tabs_4_active_pane_srt_g1

0xc21e,	// (0x000316ed) tabs_4_active_pane_srt_t1_ParamLimits

0xc21e,	// (0x000316ed) tabs_4_active_pane_srt_t1

0x4498,	// (0x00029967) bg_active_tab_pane_g1_cp3_copy1

0x070e,	// (0x00025bdd) bg_active_tab_pane_g2_cp3_copy1

0x44a1,	// (0x00029970) bg_active_tab_pane_g3_cp3_copy1

0xa4b7,	// (0x0002f986) tabs_2_long_active_pane_srt_ParamLimits

0xa4b7,	// (0x0002f986) tabs_2_long_active_pane_srt

0xa4b7,	// (0x0002f986) tabs_2_long_passive_pane_srt_ParamLimits

0xa4b7,	// (0x0002f986) tabs_2_long_passive_pane_srt

0x1176,	// (0x00026645) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1176,	// (0x00026645) bg_passive_tab_pane_cp4_srt

0x416c,	// (0x0002963b) bg_passive_tab_pane_g1_cp4_srt

0x070e,	// (0x00025bdd) bg_passive_tab_pane_g2_cp4_srt

0x4175,	// (0x00029644) bg_passive_tab_pane_g3_cp4_srt

0xa4b7,	// (0x0002f986) bg_active_tab_pane_cp4_srt_ParamLimits

0xa4b7,	// (0x0002f986) bg_active_tab_pane_cp4_srt

0xc000,	// (0x000314cf) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc000,	// (0x000314cf) tabs_2_long_active_pane_srt_t1

0x416c,	// (0x0002963b) bg_active_tab_pane_g1_cp4_srt

0x070e,	// (0x00025bdd) bg_active_tab_pane_g2_cp4_srt

0x4175,	// (0x00029644) bg_active_tab_pane_g3_cp4_srt

0xa475,	// (0x0002f944) tabs_3_long_active_pane_srt_ParamLimits

0xa475,	// (0x0002f944) tabs_3_long_active_pane_srt

0xa475,	// (0x0002f944) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa475,	// (0x0002f944) tabs_3_long_passive_pane_cp_srt

0xa475,	// (0x0002f944) tabs_3_long_passive_pane_srt_ParamLimits

0xa475,	// (0x0002f944) tabs_3_long_passive_pane_srt

0x1176,	// (0x00026645) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1176,	// (0x00026645) bg_passive_tab_pane_cp5_srt

0x08dc,	// (0x00025dab) bg_passive_tab_pane_g1_cp5_srt

0x070e,	// (0x00025bdd) bg_passive_tab_pane_g2_cp5_srt

0x08e5,	// (0x00025db4) bg_passive_tab_pane_g3_cp5_srt

0xa4b7,	// (0x0002f986) bg_active_tab_pane_cp5_srt_ParamLimits

0xa4b7,	// (0x0002f986) bg_active_tab_pane_cp5_srt

0xbfea,	// (0x000314b9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbfea,	// (0x000314b9) tabs_3_long_active_pane_srt_t1

0x08dc,	// (0x00025dab) bg_active_tab_pane_g1_cp5_srt

0x070e,	// (0x00025bdd) bg_active_tab_pane_g2_cp5_srt

0x08e5,	// (0x00025db4) bg_active_tab_pane_g3_cp5_srt

0x414c,	// (0x0002961b) navi_text_pane_srt_t1

0x4144,	// (0x00029613) navi_icon_pane_srt_g1

0x0e6e,	// (0x0002633d) midp_editing_number_pane_srt

0x0c09,	// (0x000260d8) midp_ticker_pane_srt

0x0e76,	// (0x00026345) midp_ticker_pane_srt_g1

0x0e7e,	// (0x0002634d) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x00034c47) midp_ticker_pane_srt_g

0x0e86,	// (0x00026355) midp_ticker_pane_srt_t1

0x4135,	// (0x00029604) midp_editing_number_pane_t1_copy1

0x1176,	// (0x00026645) listscroll_midp_pane

0x1176,	// (0x00026645) midp_form_pane

0x0c73,	// (0x00026142) midp_info_popup_window_ParamLimits

0x0c73,	// (0x00026142) midp_info_popup_window

0xd2fc,	// (0x000327cb) bg_popup_sub_pane_cp50_ParamLimits

0xd2fc,	// (0x000327cb) bg_popup_sub_pane_cp50

0x3224,	// (0x000286f3) listscroll_midp_info_pane_ParamLimits

0x3224,	// (0x000286f3) listscroll_midp_info_pane

0x320c,	// (0x000286db) listscroll_form_midp_pane_ParamLimits

0x320c,	// (0x000286db) listscroll_form_midp_pane

0x3218,	// (0x000286e7) scroll_bar_cp050

0xbbf1,	// (0x000310c0) list_midp_pane

0x4f7d,	// (0x0002a44c) signal_pane_g2_cp

0x3126,	// (0x000285f5) listscroll_midp_info_pane_t1_ParamLimits

0x3126,	// (0x000285f5) listscroll_midp_info_pane_t1

0x313e,	// (0x0002860d) listscroll_midp_info_pane_t2_ParamLimits

0x313e,	// (0x0002860d) listscroll_midp_info_pane_t2

0x317c,	// (0x0002864b) listscroll_midp_info_pane_t3_ParamLimits

0x317c,	// (0x0002864b) listscroll_midp_info_pane_t3

0x31b6,	// (0x00028685) listscroll_midp_info_pane_t4_ParamLimits

0x31b6,	// (0x00028685) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x00034cfa) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x00034cfa) listscroll_midp_info_pane_t

0xd37c,	// (0x0003284b) scroll_pane_cp21

0x30c0,	// (0x0002858f) form_midp_field_choice_group_pane

0x30c9,	// (0x00028598) form_midp_field_text_pane

0x310c,	// (0x000285db) form_midp_field_time_pane

0x3114,	// (0x000285e3) form_midp_gauge_slider_pane

0x311d,	// (0x000285ec) form_midp_gauge_wait_pane

0xa2a5,	// (0x0002f774) form_midp_image_pane

0x9f20,	// (0x0002f3ef) list_single_midp_pane_ParamLimits

0x9f20,	// (0x0002f3ef) list_single_midp_pane

0xbbc9,	// (0x00031098) form_midp_field_text_pane_t1

0x2e70,	// (0x0002833f) input_focus_pane_cp050

0x30af,	// (0x0002857e) list_midp_form_text_pane

0x3053,	// (0x00028522) form_midp_field_choice_group_pane_t1

0x3061,	// (0x00028530) input_focus_pane_cp051

0x3075,	// (0x00028544) list_midp_choice_pane

0xa2a5,	// (0x0002f774) status_idle_pane

0x3037,	// (0x00028506) form_midp_field_time_pane_t1

0xa1b5,	// (0x0002f684) wait_anim_pane_g2_copy1

0x3045,	// (0x00028514) form_midp_field_time_pane_t2

0x0001,

0x0d23,	// (0x000261f2) aid_navinavi_width_2_pane

0xf826,	// (0x00034cf5) form_midp_field_time_pane_t

0xa2a5,	// (0x0002f774) input_focus_pane_cp052

0xa2a5,	// (0x0002f774) bg_input_focus_pane_cp040

0x2ff7,	// (0x000284c6) form_midp_gauge_slider_pane_t1

0x3005,	// (0x000284d4) form_midp_gauge_slider_pane_t2

0xbbad,	// (0x0003107c) form_midp_gauge_slider_pane_t3

0xbbbb,	// (0x0003108a) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x00034cec) form_midp_gauge_slider_pane_t

0x302f,	// (0x000284fe) form_midp_slider_pane

0xa4b7,	// (0x0002f986) bg_input_focus_pane_cp041_ParamLimits

0xa4b7,	// (0x0002f986) bg_input_focus_pane_cp041

0x2fc4,	// (0x00028493) form_midp_gauge_wait_pane_t1_ParamLimits

0x2fc4,	// (0x00028493) form_midp_gauge_wait_pane_t1

0x2fd6,	// (0x000284a5) form_midp_gauge_wait_pane_t2_ParamLimits

0x2fd6,	// (0x000284a5) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x00034ce7) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x00034ce7) form_midp_gauge_wait_pane_t

0x2fe8,	// (0x000284b7) form_midp_wait_pane_ParamLimits

0x2fe8,	// (0x000284b7) form_midp_wait_pane

0x2f8c,	// (0x0002845b) form_midp_image_pane_g1

0x2f95,	// (0x00028464) form_midp_image_pane_t1

0x2fa4,	// (0x00028473) form_midp_image_pane_t2

0x2fb3,	// (0x00028482) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x00034ce0) form_midp_image_pane_t

0x2f83,	// (0x00028452) list_single_midp_pane_g1

0xedb9,	// (0x00034288) list_single_midp_pane_t1

0xbb96,	// (0x00031065) list_midp_form_item_pane_ParamLimits

0xbb96,	// (0x00031065) list_midp_form_item_pane

0x0ccb,	// (0x0002619a) list_midp_form_item_pane_t1

0x0cda,	// (0x000261a9) midp_ticker_pane_g1

0x0ce6,	// (0x000261b5) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x00034c2d) midp_ticker_pane_g

0xadf0,	// (0x000302bf) midp_ticker_pane_t1

0xc18f,	// (0x0003165e) midp_editing_number_pane_t1

0x4386,	// (0x00029855) midp_editing_number_pane

0x4395,	// (0x00029864) midp_ticker_pane

0x4125,	// (0x000295f4) ai_message_heading_pane

0xa2a5,	// (0x0002f774) bg_popup_window_pane_cp14

0x412d,	// (0x000295fc) listscroll_ai_message_pane

0x40ab,	// (0x0002957a) ai_message_heading_pane_g1_ParamLimits

0x40ab,	// (0x0002957a) ai_message_heading_pane_g1

0x40b7,	// (0x00029586) ai_message_heading_pane_g2_ParamLimits

0x40b7,	// (0x00029586) ai_message_heading_pane_g2

0x40c5,	// (0x00029594) ai_message_heading_pane_g3_ParamLimits

0x40c5,	// (0x00029594) ai_message_heading_pane_g3

0x40d1,	// (0x000295a0) ai_message_heading_pane_g4_ParamLimits

0x40d1,	// (0x000295a0) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x00034e21) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x00034e21) ai_message_heading_pane_g

0x40dd,	// (0x000295ac) ai_message_heading_pane_t1_ParamLimits

0x40dd,	// (0x000295ac) ai_message_heading_pane_t1

0x40f7,	// (0x000295c6) ai_message_heading_pane_t2_ParamLimits

0x40f7,	// (0x000295c6) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x00034e2a) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x00034e2a) ai_message_heading_pane_t

0x410b,	// (0x000295da) bg_popup_heading_pane_cp1_ParamLimits

0x410b,	// (0x000295da) bg_popup_heading_pane_cp1

0x4099,	// (0x00029568) list_ai_message_pane_ParamLimits

0x4099,	// (0x00029568) list_ai_message_pane

0xd37c,	// (0x0003284b) scroll_pane_cp10

0x4035,	// (0x00029504) list_ai_message_pane_g1

0x403d,	// (0x0002950c) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x00034dfe) list_ai_message_pane_g

0x4045,	// (0x00029514) list_ai_message_pane_t1_ParamLimits

0x4045,	// (0x00029514) list_ai_message_pane_t1

0x405a,	// (0x00029529) list_ai_message_pane_t2_ParamLimits

0x405a,	// (0x00029529) list_ai_message_pane_t2

0x406f,	// (0x0002953e) list_ai_message_pane_t3_ParamLimits

0x406f,	// (0x0002953e) list_ai_message_pane_t3

0x4084,	// (0x00029553) list_ai_message_pane_t4_ParamLimits

0x4084,	// (0x00029553) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x00034e03) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x00034e03) list_ai_message_pane_t

0xbfd0,	// (0x0003149f) cell_ai_soft_ind_pane_ParamLimits

0xbfd0,	// (0x0003149f) cell_ai_soft_ind_pane

0x0d04,	// (0x000261d3) cell_ai_soft_ind_pane_g1_ParamLimits

0x0d04,	// (0x000261d3) cell_ai_soft_ind_pane_g1

0xa2a5,	// (0x0002f774) grid_highlight_cp1

0x0d11,	// (0x000261e0) text_secondary_cp56_ParamLimits

0x0d11,	// (0x000261e0) text_secondary_cp56

0x3ff3,	// (0x000294c2) example_general_pane_ParamLimits

0x3ff3,	// (0x000294c2) example_general_pane

0x3fff,	// (0x000294ce) example_parent_pane_g1_ParamLimits

0x3fff,	// (0x000294ce) example_parent_pane_g1

0x400b,	// (0x000294da) example_parent_pane_t1_ParamLimits

0x400b,	// (0x000294da) example_parent_pane_t1

0xb3ab,	// (0x0003087a) popup_preview_text_window_ParamLimits

0xb3ab,	// (0x0003087a) popup_preview_text_window

0x0b38,	// (0x00026007) list_single_pane_cp2_g4

0xa846,	// (0x0002fd15) bg_popup_preview_window_pane_ParamLimits

0xa846,	// (0x0002fd15) bg_popup_preview_window_pane

0x3d26,	// (0x000291f5) popup_preview_text_window_t1_ParamLimits

0x3d26,	// (0x000291f5) popup_preview_text_window_t1

0x3d44,	// (0x00029213) popup_preview_text_window_t2_ParamLimits

0x3d44,	// (0x00029213) popup_preview_text_window_t2

0x3d8d,	// (0x0002925c) popup_preview_text_window_t3_ParamLimits

0x3d8d,	// (0x0002925c) popup_preview_text_window_t3

0x3dd2,	// (0x000292a1) popup_preview_text_window_t4_ParamLimits

0x3dd2,	// (0x000292a1) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x00034dd2) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x00034dd2) popup_preview_text_window_t

0x3e50,	// (0x0002931f) scroll_pane_cp11

0x2d74,	// (0x00028243) bg_popup_preview_window_pane_g1

0x3cda,	// (0x000291a9) bg_popup_preview_window_pane_g2

0x3ce4,	// (0x000291b3) bg_popup_preview_window_pane_g3

0x3cee,	// (0x000291bd) bg_popup_preview_window_pane_g4

0x3cf8,	// (0x000291c7) bg_popup_preview_window_pane_g5

0x3d02,	// (0x000291d1) bg_popup_preview_window_pane_g6

0x3d0a,	// (0x000291d9) bg_popup_preview_window_pane_g7

0x3d12,	// (0x000291e1) bg_popup_preview_window_pane_g8

0xf13b,	// (0x0003460a) aid_popup_width_pane

0xb31b,	// (0x000307ea) popup_midp_note_alarm_window_ParamLimits

0xb31b,	// (0x000307ea) popup_midp_note_alarm_window

0xd238,	// (0x00032707) data_form_pane_ParamLimits

0x9d7c,	// (0x0002f24b) form_field_data_pane_g1

0x9d86,	// (0x0002f255) form_field_data_pane_t1_ParamLimits

0xd244,	// (0x00032713) input_focus_pane_ParamLimits

0xd252,	// (0x00032721) data_form_wide_pane_ParamLimits

0xec71,	// (0x00034140) form_field_data_wide_pane_g1

0xec7d,	// (0x0003414c) form_field_data_wide_pane_t1_ParamLimits

0xcfbf,	// (0x0003248e) input_focus_pane_cp6_ParamLimits

0xaa28,	// (0x0002fef7) input_popup_find_pane_g1_ParamLimits

0xaa28,	// (0x0002fef7) input_popup_find_pane_g1

0x0215,	// (0x000256e4) aid_navi_side_left_pane

0x022a,	// (0x000256f9) aid_navi_side_right_pane

0x36e9,	// (0x00028bb8) bg_popup_window_pane_cp30_ParamLimits

0x36e9,	// (0x00028bb8) bg_popup_window_pane_cp30

0x3763,	// (0x00028c32) popup_midp_note_alarm_window_g1_ParamLimits

0x3763,	// (0x00028c32) popup_midp_note_alarm_window_g1

0x3793,	// (0x00028c62) popup_midp_note_alarm_window_t1_ParamLimits

0x3793,	// (0x00028c62) popup_midp_note_alarm_window_t1

0x3834,	// (0x00028d03) popup_midp_note_alarm_window_t2_ParamLimits

0x3834,	// (0x00028d03) popup_midp_note_alarm_window_t2

0x38e2,	// (0x00028db1) popup_midp_note_alarm_window_t3_ParamLimits

0x38e2,	// (0x00028db1) popup_midp_note_alarm_window_t3

0x3914,	// (0x00028de3) popup_midp_note_alarm_window_t4_ParamLimits

0x3914,	// (0x00028de3) popup_midp_note_alarm_window_t4

0x393a,	// (0x00028e09) popup_midp_note_alarm_window_t5_ParamLimits

0x393a,	// (0x00028e09) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x00034d6f) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x00034d6f) popup_midp_note_alarm_window_t

0x39e6,	// (0x00028eb5) wait_bar_pane_cp1_ParamLimits

0x39e6,	// (0x00028eb5) wait_bar_pane_cp1

0xa2a5,	// (0x0002f774) wait_anim_pane_copy1

0xa2a5,	// (0x0002f774) wait_border_pane_copy1

0x33ce,	// (0x0002889d) wait_border_pane_g1_copy1

0xec97,	// (0x00034166) form_field_popup_pane_g1

0x9da0,	// (0x0002f26f) form_field_popup_pane_t1_ParamLimits

0xd244,	// (0x00032713) input_focus_pane_cp7_ParamLimits

0xd27e,	// (0x0003274d) list_form_pane_ParamLimits

0xec9f,	// (0x0003416e) form_field_popup_wide_pane_g1

0xeca7,	// (0x00034176) form_field_popup_wide_pane_t1_ParamLimits

0xd244,	// (0x00032713) input_focus_pane_cp8_ParamLimits

0xd28a,	// (0x00032759) list_form_wide_pane_ParamLimits

0x4525,	// (0x000299f4) aid_size_cell_graphic_pane

0x9e1f,	// (0x0002f2ee) data_form_pane_t1_ParamLimits

0x9f52,	// (0x0002f421) data_form_wide_pane_t1_ParamLimits

0xb7ad,	// (0x00030c7c) bg_status_flat_pane

0xa3b1,	// (0x0002f880) title_pane_t1_ParamLimits

0xa43d,	// (0x0002f90c) title_pane_t2_ParamLimits

0xa463,	// (0x0002f932) title_pane_t3_ParamLimits

0xf55d,	// (0x00034a2c) title_pane_t_ParamLimits

0xab34,	// (0x00030003) level_1_signal_ParamLimits

0xab46,	// (0x00030015) level_2_signal_ParamLimits

0xab59,	// (0x00030028) level_3_signal_ParamLimits

0xab6c,	// (0x0003003b) level_4_signal_ParamLimits

0xab7f,	// (0x0003004e) level_5_signal_ParamLimits

0xab92,	// (0x00030061) level_6_signal_ParamLimits

0xaba5,	// (0x00030074) level_7_signal_ParamLimits

0xab34,	// (0x00030003) level_1_battery_ParamLimits

0xab46,	// (0x00030015) level_2_battery_ParamLimits

0xab59,	// (0x00030028) level_3_battery_ParamLimits

0xab6c,	// (0x0003003b) level_4_battery_ParamLimits

0xab7f,	// (0x0003004e) level_5_battery_ParamLimits

0xab92,	// (0x00030061) level_6_battery_ParamLimits

0xaba5,	// (0x00030074) level_7_battery_ParamLimits

0x35ee,	// (0x00028abd) bg_status_flat_pane_g1

0x35f6,	// (0x00028ac5) bg_status_flat_pane_g2

0x35fe,	// (0x00028acd) bg_status_flat_pane_g3

0x3606,	// (0x00028ad5) bg_status_flat_pane_g4

0x360e,	// (0x00028add) bg_status_flat_pane_g5

0x3616,	// (0x00028ae5) bg_status_flat_pane_g6

0x361e,	// (0x00028aed) bg_status_flat_pane_g7

0xa48b,	// (0x0002f95a) tabs_3_active_pane_t1_ParamLimits

0xa48b,	// (0x0002f95a) tabs_3_passive_pane_t1_ParamLimits

0xa4a5,	// (0x0002f974) tabs_4_active_pane_t1_ParamLimits

0xa4a5,	// (0x0002f974) tabs_4_1_passive_pane_t1_ParamLimits

0xaa3e,	// (0x0002ff0d) tabs_2_active_pane_t1_ParamLimits

0xaa3e,	// (0x0002ff0d) tabs_2_passive_pane_t1_ParamLimits

0xa4b7,	// (0x0002f986) bg_active_tab_pane_cp4_ParamLimits

0xaa50,	// (0x0002ff1f) tabs_2_long_active_pane_t1_ParamLimits

0x1176,	// (0x00026645) bg_passive_tab_pane_cp4_ParamLimits

0x1c65,	// (0x00027134) list_single_midp_graphic_pane_t1_ParamLimits

0xa4b7,	// (0x0002f986) bg_active_tab_pane_cp5_ParamLimits

0xaa63,	// (0x0002ff32) tabs_3_long_active_pane_t1_ParamLimits

0x1176,	// (0x00026645) bg_passive_tab_pane_cp5_ParamLimits

0x1c65,	// (0x00027134) list_single_midp_graphic_pane_t1

0xb7ad,	// (0x00030c7c) bg_status_flat_pane_ParamLimits

0x192f,	// (0x00026dfe) indicator_pane_cp2_ParamLimits

0x192f,	// (0x00026dfe) indicator_pane_cp2

0xb943,	// (0x00030e12) navi_pane_srt_ParamLimits

0xb943,	// (0x00030e12) navi_pane_srt

0x1a96,	// (0x00026f65) popup_clock_digital_analogue_window_cp1

0xa5d4,	// (0x0002faa3) indicator_pane_t1

0x0c09,	// (0x000260d8) copy_highlight_pane

0x0c09,	// (0x000260d8) cursor_graphics_pane

0x0c09,	// (0x000260d8) graphic_within_text_pane

0x0c09,	// (0x000260d8) link_highlight_pane

0x3e13,	// (0x000292e2) popup_preview_text_window_t5_ParamLimits

0x3e13,	// (0x000292e2) popup_preview_text_window_t5

0x0d2d,	// (0x000261fc) cursor_digital_pane

0x0d2d,	// (0x000261fc) cursor_primary_pane

0x0d3e,	// (0x0002620d) cursor_primary_small_pane

0x0d46,	// (0x00026215) cursor_secondary_pane

0x0d4e,	// (0x0002621d) cursor_title_pane

0x0d2d,	// (0x000261fc) link_highlight_digital_pane

0x0d35,	// (0x00026204) link_highlight_primary_pane

0x0d3e,	// (0x0002620d) link_highlight_primary_small_pane

0x0d46,	// (0x00026215) link_highlight_secondary_pane

0x0d4e,	// (0x0002621d) link_highlight_title_pane

0x0d2d,	// (0x000261fc) copy_highlight_digital_pane

0x0d2d,	// (0x000261fc) copy_highlight_primary_pane

0x0d3e,	// (0x0002620d) copy_highlight_primary_small_pane

0x0d46,	// (0x00026215) copy_highlight_secondary_pane

0x0d4e,	// (0x0002621d) copy_highlight_title_pane

0x0d46,	// (0x00026215) graphic_text_digital_pane

0x368c,	// (0x00028b5b) graphic_text_primary_pane

0x3695,	// (0x00028b64) graphic_text_primary_small_pane

0x0d3e,	// (0x0002620d) graphic_text_secondary_pane

0x0d2d,	// (0x000261fc) graphic_text_title_pane

0xae02,	// (0x000302d1) cursor_primary_pane_g1

0x367e,	// (0x00028b4d) cursor_text_primary_t1

0xbc2d,	// (0x000310fc) cursor_primary_small_pane_g1

0x3670,	// (0x00028b3f) cursor_text_primary_small_t1

0xbc23,	// (0x000310f2) cursor_primary_small_pane_g1_copy1

0x3658,	// (0x00028b27) cursor_text_primary_small_t1_copy1

0x3636,	// (0x00028b05) cursor_text_title_t1

0xbc19,	// (0x000310e8) cursor_title_pane_g1

0xae02,	// (0x000302d1) cursor_digital_pane_g1

0x0d60,	// (0x0002622f) cursor_text_digital_t1

0x0d6e,	// (0x0002623d) link_highlight_primary_pane_g1

0x35df,	// (0x00028aae) link_highlight_primary_pane_t1

0x0d6e,	// (0x0002623d) link_highlight_primary_small_pane_g1

0x0d76,	// (0x00026245) link_highlight_primary_small_pane_t1

0x0d85,	// (0x00026254) link_highlight_secondary_pane_g1

0x0d8d,	// (0x0002625c) link_highlight_secondary_pane_t1

0x3553,	// (0x00028a22) link_highlight_title_pane_g1

0x355b,	// (0x00028a2a) link_highlight_title_pane_t1

0x353c,	// (0x00028a0b) link_highlight_digital_pane_g1

0x3544,	// (0x00028a13) link_highlight_digital_pane_t1

0x3404,	// (0x000288d3) copy_highlight_primary_pane_g1

0x341b,	// (0x000288ea) copy_highlight_primary_pane_t1

0x3404,	// (0x000288d3) copy_highlight_primary_small_pane_g1

0x340c,	// (0x000288db) copy_highlight_primary_small_pane_t1

0x0d9c,	// (0x0002626b) copy_highlight_secondary_pane_g1

0x0da4,	// (0x00026273) copy_highlight_secondary_pane_t1

0x33ed,	// (0x000288bc) copy_highlight_title_pane_g1

0x33f5,	// (0x000288c4) copy_highlight_title_pane_t1

0x3404,	// (0x000288d3) copy_highlight_digital_pane_g1

0x46f5,	// (0x00029bc4) copy_highlight_digital_pane_t1

0x4649,	// (0x00029b18) graphic_text_primary_pane_g1

0x46d9,	// (0x00029ba8) graphic_text_primary_pane_t1

0x46e7,	// (0x00029bb6) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x00034e9e) graphic_text_primary_pane_t

0x46b5,	// (0x00029b84) graphic_text_primary_small_pane_g1

0x46bd,	// (0x00029b8c) graphic_text_primary_small_pane_t1

0x46cb,	// (0x00029b9a) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x00034e99) graphic_text_primary_small_pane_t

0x4691,	// (0x00029b60) graphic_text_secondary_pane_g1

0x4699,	// (0x00029b68) graphic_text_secondary_pane_t1

0x46a7,	// (0x00029b76) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x00034e94) graphic_text_secondary_pane_t

0x466d,	// (0x00029b3c) graphic_text_title_pane_g1

0x4675,	// (0x00029b44) graphic_text_title_pane_t1

0x4683,	// (0x00029b52) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x00034e8f) graphic_text_title_pane_t

0x4649,	// (0x00029b18) graphic_text_digital_pane_g1

0x4651,	// (0x00029b20) graphic_text_digital_pane_t1

0x465f,	// (0x00029b2e) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x00034e8a) graphic_text_digital_pane_t

0xa4b7,	// (0x0002f986) navi_icon_pane_srt_ParamLimits

0xa4b7,	// (0x0002f986) navi_icon_pane_srt

0xa2a5,	// (0x0002f774) navi_midp_pane_srt

0xa2a5,	// (0x0002f774) navi_navi_pane_srt

0xa4b7,	// (0x0002f986) navi_text_pane_srt_ParamLimits

0xa4b7,	// (0x0002f986) navi_text_pane_srt

0x4614,	// (0x00029ae3) navi_navi_icon_text_pane_srt

0x461c,	// (0x00029aeb) navi_navi_pane_srt_g1_ParamLimits

0x461c,	// (0x00029aeb) navi_navi_pane_srt_g1

0x462e,	// (0x00029afd) navi_navi_pane_srt_g2_ParamLimits

0x462e,	// (0x00029afd) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x00034e85) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x00034e85) navi_navi_pane_srt_g

0x4640,	// (0x00029b0f) navi_navi_tabs_pane_srt

0x4614,	// (0x00029ae3) navi_navi_text_pane_srt

0x4614,	// (0x00029ae3) navi_navi_volume_pane_srt

0x4605,	// (0x00029ad4) navi_navi_text_pane_srt_t1

0x1fbf,	// (0x0002748e) navi_navi_volume_pane_srt_g1

0x1fc7,	// (0x00027496) volume_small_pane_srt_ParamLimits

0x1fc7,	// (0x00027496) volume_small_pane_srt

0x0db3,	// (0x00026282) volume_small_pane_srt_g1_ParamLimits

0x0db3,	// (0x00026282) volume_small_pane_srt_g1

0x0dc3,	// (0x00026292) volume_small_pane_srt_g2_ParamLimits

0x0dc3,	// (0x00026292) volume_small_pane_srt_g2

0x0dd4,	// (0x000262a3) volume_small_pane_srt_g3_ParamLimits

0x0dd4,	// (0x000262a3) volume_small_pane_srt_g3

0x0de5,	// (0x000262b4) volume_small_pane_srt_g4_ParamLimits

0x0de5,	// (0x000262b4) volume_small_pane_srt_g4

0x0df6,	// (0x000262c5) volume_small_pane_srt_g5_ParamLimits

0x0df6,	// (0x000262c5) volume_small_pane_srt_g5

0x0e07,	// (0x000262d6) volume_small_pane_srt_g6_ParamLimits

0x0e07,	// (0x000262d6) volume_small_pane_srt_g6

0x0e18,	// (0x000262e7) volume_small_pane_srt_g7_ParamLimits

0x0e18,	// (0x000262e7) volume_small_pane_srt_g7

0x0e29,	// (0x000262f8) volume_small_pane_srt_g8_ParamLimits

0x0e29,	// (0x000262f8) volume_small_pane_srt_g8

0x0e3a,	// (0x00026309) volume_small_pane_srt_g9_ParamLimits

0x0e3a,	// (0x00026309) volume_small_pane_srt_g9

0x0e4b,	// (0x0002631a) volume_small_pane_srt_g10_ParamLimits

0x0e4b,	// (0x0002631a) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00034c32) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00034c32) volume_small_pane_srt_g

0xcebf,	// (0x0003238e) query_popup_data_pane_cp2

0x45eb,	// (0x00029aba) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x45eb,	// (0x00029aba) navi_navi_icon_text_pane_srt_t1

0x368c,	// (0x00028b5b) navi_tabs_2_long_pane_srt

0x368c,	// (0x00028b5b) navi_tabs_2_pane_srt

0x368c,	// (0x00028b5b) navi_tabs_3_long_pane_srt

0x368c,	// (0x00028b5b) navi_tabs_3_pane_srt

0x368c,	// (0x00028b5b) navi_tabs_4_pane_srt

0x1f9f,	// (0x0002746e) tabs_2_active_pane_srt_ParamLimits

0x1f9f,	// (0x0002746e) tabs_2_active_pane_srt

0x1faf,	// (0x0002747e) tabs_2_passive_pane_srt_ParamLimits

0x1faf,	// (0x0002747e) tabs_2_passive_pane_srt

0x2e70,	// (0x0002833f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2e70,	// (0x0002833f) bg_passive_tab_pane_cp1_srt

0x45b7,	// (0x00029a86) bg_passive_tab_pane_g1_cp1_srt

0x070e,	// (0x00025bdd) bg_passive_tab_pane_g2_cp1_srt

0x45c0,	// (0x00029a8f) bg_passive_tab_pane_g3_cp1_srt

0xa475,	// (0x0002f944) bg_active_tab_pane_cp1_srt_ParamLimits

0xa475,	// (0x0002f944) bg_active_tab_pane_cp1_srt

0x45c9,	// (0x00029a98) tabs_2_active_pane_srt_g1

0xc29f,	// (0x0003176e) tabs_2_active_pane_srt_t1_ParamLimits

0xc29f,	// (0x0003176e) tabs_2_active_pane_srt_t1

0x45b7,	// (0x00029a86) bg_active_tab_pane_g1_cp1_srt

0x070e,	// (0x00025bdd) bg_active_tab_pane_g2_cp1_srt

0x45c0,	// (0x00029a8f) bg_active_tab_pane_g3_cp1_srt

0x1f6c,	// (0x0002743b) tabs_3_active_pane_srt_ParamLimits

0x1f6c,	// (0x0002743b) tabs_3_active_pane_srt

0x1f7d,	// (0x0002744c) tabs_3_passive_pane_cp_srt_ParamLimits

0x1f7d,	// (0x0002744c) tabs_3_passive_pane_cp_srt

0x1f8e,	// (0x0002745d) tabs_3_passive_pane_srt_ParamLimits

0x1f8e,	// (0x0002745d) tabs_3_passive_pane_srt

0x2e70,	// (0x0002833f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2e70,	// (0x0002833f) bg_passive_tab_pane_cp2_srt

0x0e5c,	// (0x0002632b) bg_passive_tab_pane_g1_cp2_srt

0x070e,	// (0x00025bdd) bg_passive_tab_pane_g2_cp2_srt

0x0e65,	// (0x00026334) bg_passive_tab_pane_g3_cp2_srt

0xa475,	// (0x0002f944) bg_active_tab_pane_cp2_srt_ParamLimits

0xa475,	// (0x0002f944) bg_active_tab_pane_cp2_srt

0x459d,	// (0x00029a6c) tabs_3_active_pane_srt_g1

0xc289,	// (0x00031758) tabs_3_active_pane_srt_t1_ParamLimits

0xc289,	// (0x00031758) tabs_3_active_pane_srt_t1

0x0e5c,	// (0x0002632b) bg_active_tab_pane_g1_cp2_srt

0x070e,	// (0x00025bdd) bg_active_tab_pane_g2_cp2_srt

0x0e65,	// (0x00026334) bg_active_tab_pane_g3_cp2_srt

0x1f24,	// (0x000273f3) tabs_4_active_pane_srt_ParamLimits

0x1f24,	// (0x000273f3) tabs_4_active_pane_srt

0x1f36,	// (0x00027405) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1f36,	// (0x00027405) tabs_4_passive_pane_cp2_srt

0x1104,	// (0x000265d3) aid_size_cell_toolbar

0x41df,	// (0x000296ae) main_idle_act_pane_ParamLimits

0x133f,	// (0x0002680e) popup_large_graphic_colour_window_ParamLimits

0xb671,	// (0x00030b40) popup_toolbar_window_ParamLimits

0xb671,	// (0x00030b40) popup_toolbar_window

0xedde,	// (0x000342ad) list_single_graphic_2heading_pane_ParamLimits

0xedde,	// (0x000342ad) list_single_graphic_2heading_pane

0xd554,	// (0x00032a23) aid_size_cell_apps_grid_lsc_pane

0xd566,	// (0x00032a35) aid_size_cell_apps_grid_prt_pane

0x1176,	// (0x00026645) bg_wml_button_pane_cp1_ParamLimits

0x1176,	// (0x00026645) bg_wml_button_pane_cp1

0xbbc9,	// (0x00031098) form_midp_field_text_pane_t1_ParamLimits

0x2e70,	// (0x0002833f) input_focus_pane_cp050_ParamLimits

0x30af,	// (0x0002857e) list_midp_form_text_pane_ParamLimits

0x3061,	// (0x00028530) input_focus_pane_cp051_ParamLimits

0x3075,	// (0x00028544) list_midp_choice_pane_ParamLimits

0xbb80,	// (0x0003104f) list_single_2graphic_pane_cp3_ParamLimits

0xbb80,	// (0x0003104f) list_single_2graphic_pane_cp3

0x52a6,	// (0x0002a775) list_single_midp_graphic_pane_ParamLimits

0x52a6,	// (0x0002a775) list_single_midp_graphic_pane

0xed0d,	// (0x000341dc) list_single_graphic_2heading_pane_g1_ParamLimits

0xed0d,	// (0x000341dc) list_single_graphic_2heading_pane_g1

0xeb8e,	// (0x0003405d) list_single_graphic_2heading_pane_g4_ParamLimits

0xeb8e,	// (0x0003405d) list_single_graphic_2heading_pane_g4

0xeb9a,	// (0x00034069) list_single_graphic_2heading_pane_g5_ParamLimits

0xeb9a,	// (0x00034069) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x00034c85) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x00034c85) list_single_graphic_2heading_pane_g

0xed19,	// (0x000341e8) list_single_graphic_2heading_pane_t1_ParamLimits

0xed19,	// (0x000341e8) list_single_graphic_2heading_pane_t1

0xed2d,	// (0x000341fc) list_single_graphic_2heading_pane_t2_ParamLimits

0xed2d,	// (0x000341fc) list_single_graphic_2heading_pane_t2

0xed49,	// (0x00034218) list_single_graphic_2heading_pane_t3_ParamLimits

0xed49,	// (0x00034218) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x00034c8c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x00034c8c) list_single_graphic_2heading_pane_t

0x2cb2,	// (0x00028181) bg_popup_sub_pane_cp2

0x2cdc,	// (0x000281ab) grid_toobar_pane

0x1bf5,	// (0x000270c4) cell_toolbar_pane_ParamLimits

0x1bf5,	// (0x000270c4) cell_toolbar_pane

0x2d18,	// (0x000281e7) cell_toolbar_pane_g1_ParamLimits

0x2d18,	// (0x000281e7) cell_toolbar_pane_g1

0x2d2c,	// (0x000281fb) cell_toolbar_pane_g2_ParamLimits

0x2d2c,	// (0x000281fb) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x00034c9a) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x00034c9a) cell_toolbar_pane_g

0x2d4e,	// (0x0002821d) grid_highlight_pane_cp2_ParamLimits

0x2d4e,	// (0x0002821d) grid_highlight_pane_cp2

0x2d68,	// (0x00028237) toolbar_button_pane

0x2d74,	// (0x00028243) toolbar_button_pane_g1

0x2d7c,	// (0x0002824b) toolbar_button_pane_g2

0x2d84,	// (0x00028253) toolbar_button_pane_g3

0x2d8c,	// (0x0002825b) toolbar_button_pane_g4

0x2d94,	// (0x00028263) toolbar_button_pane_g5

0x2d9c,	// (0x0002826b) toolbar_button_pane_g6

0x2da4,	// (0x00028273) toolbar_button_pane_g7

0x2dac,	// (0x0002827b) toolbar_button_pane_g8

0x2db4,	// (0x00028283) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x00034c9f) toolbar_button_pane_g

0x1c2d,	// (0x000270fc) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1c2d,	// (0x000270fc) list_single_2graphic_pane_g1_cp3

0xbae2,	// (0x00030fb1) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbae2,	// (0x00030fb1) list_single_2graphic_pane_g2_cp3

0x0a33,	// (0x00025f02) list_single_2graphic_pane_g3_cp3

0x8f27,	// (0x0002e3f6) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8f27,	// (0x0002e3f6) list_single_2graphic_pane_g4_cp3

0x1c4a,	// (0x00027119) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1c4a,	// (0x00027119) list_single_2graphic_pane_t1_cp3

0x0a27,	// (0x00025ef6) list_single_midp_graphic_pane_g2_ParamLimits

0x0a27,	// (0x00025ef6) list_single_midp_graphic_pane_g2

0x110c,	// (0x000265db) aid_zoom_text_primary

0xecfd,	// (0x000341cc) aid_zoom_text_secondary

0x0f19,	// (0x000263e8) status_small_pane_g7_ParamLimits

0x0f19,	// (0x000263e8) status_small_pane_g7

0x0f3c,	// (0x0002640b) status_small_pane_t1_ParamLimits

0xa381,	// (0x0002f850) title_pane_g2

0x0003,

0xf554,	// (0x00034a23) title_pane_g

0xa8e1,	// (0x0002fdb0) aid_size_cell_colour_1_pane_ParamLimits

0xa8e1,	// (0x0002fdb0) aid_size_cell_colour_1_pane

0xa8f5,	// (0x0002fdc4) aid_size_cell_colour_2_pane_ParamLimits

0xa8f5,	// (0x0002fdc4) aid_size_cell_colour_2_pane

0xa909,	// (0x0002fdd8) aid_size_cell_colour_3_pane_ParamLimits

0xa909,	// (0x0002fdd8) aid_size_cell_colour_3_pane

0xa91d,	// (0x0002fdec) aid_size_cell_colour_4_pane_ParamLimits

0xa91d,	// (0x0002fdec) aid_size_cell_colour_4_pane

0x0151,	// (0x00025620) title_pane_stacon_g1_ParamLimits

0x0151,	// (0x00025620) title_pane_stacon_g1

0x3472,	// (0x00028941) popup_note_wait_window_g3_ParamLimits

0x3472,	// (0x00028941) popup_note_wait_window_g3

0x34e9,	// (0x000289b8) popup_note_wait_window_t5_ParamLimits

0x34e9,	// (0x000289b8) popup_note_wait_window_t5

0xa2a5,	// (0x0002f774) main_feb_china_hwr_fs_writing_pane

0xb008,	// (0x000304d7) popup_feb_china_hwr_fs_window_ParamLimits

0xb008,	// (0x000304d7) popup_feb_china_hwr_fs_window

0xbaf3,	// (0x00030fc2) aid_size_cell_hwr_fs_ParamLimits

0xbaf3,	// (0x00030fc2) aid_size_cell_hwr_fs

0x2e70,	// (0x0002833f) bg_popup_sub_pane_cp3_ParamLimits

0x2e70,	// (0x0002833f) bg_popup_sub_pane_cp3

0xbb08,	// (0x00030fd7) grid_hwr_fs_pane_ParamLimits

0xbb08,	// (0x00030fd7) grid_hwr_fs_pane

0x1ca8,	// (0x00027177) linegrid_hwr_fs_pane_ParamLimits

0x1ca8,	// (0x00027177) linegrid_hwr_fs_pane

0xbb20,	// (0x00030fef) cell_hwr_fs_pane_ParamLimits

0xbb20,	// (0x00030fef) cell_hwr_fs_pane

0x2e7c,	// (0x0002834b) linegrid_hwr_fs_pane_g1_ParamLimits

0x2e7c,	// (0x0002834b) linegrid_hwr_fs_pane_g1

0xbb46,	// (0x00031015) linegrid_hwr_fs_pane_g2_ParamLimits

0xbb46,	// (0x00031015) linegrid_hwr_fs_pane_g2

0x2e9a,	// (0x00028369) linegrid_hwr_fs_pane_g3_ParamLimits

0x2e9a,	// (0x00028369) linegrid_hwr_fs_pane_g3

0x1cdc,	// (0x000271ab) linegrid_hwr_fs_pane_g4_ParamLimits

0x1cdc,	// (0x000271ab) linegrid_hwr_fs_pane_g4

0x1cfa,	// (0x000271c9) linegrid_hwr_fs_pane_g5_ParamLimits

0x1cfa,	// (0x000271c9) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x00034cc5) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x00034cc5) linegrid_hwr_fs_pane_g

0x2ea6,	// (0x00028375) cell_hwr_fs_pane_g1_ParamLimits

0x2ea6,	// (0x00028375) cell_hwr_fs_pane_g1

0x1b2c,	// (0x00026ffb) cell_hwr_fs_pane_g2_ParamLimits

0x1b2c,	// (0x00026ffb) cell_hwr_fs_pane_g2

0xbb58,	// (0x00031027) cell_hwr_fs_pane_g3_ParamLimits

0xbb58,	// (0x00031027) cell_hwr_fs_pane_g3

0xbb65,	// (0x00031034) cell_hwr_fs_pane_g4_ParamLimits

0xbb65,	// (0x00031034) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x00034cd0) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00034cd0) cell_hwr_fs_pane_g

0xbb72,	// (0x00031041) cell_hwr_fs_pane_t1

0xa2a5,	// (0x0002f774) grid_highlight_pane_cp6

0xa2a5,	// (0x0002f774) main_idle_act2_pane

0xd363,	// (0x00032832) aid_inside_area_popup_secondary

0xbdea,	// (0x000312b9) aid_inside_area_window_primary_ParamLimits

0xbdea,	// (0x000312b9) aid_inside_area_window_primary

0x4704,	// (0x00029bd3) ai2_news_ticker_pane

0x470c,	// (0x00029bdb) aid_size_cell_ai1_link_ParamLimits

0x470c,	// (0x00029bdb) aid_size_cell_ai1_link

0x4726,	// (0x00029bf5) popup_ai2_data_window_ParamLimits

0x4726,	// (0x00029bf5) popup_ai2_data_window

0x4744,	// (0x00029c13) popup_ai2_link_window_ParamLimits

0x4744,	// (0x00029c13) popup_ai2_link_window

0x2e70,	// (0x0002833f) bg_popup_sub_pane_cp4_ParamLimits

0x2e70,	// (0x0002833f) bg_popup_sub_pane_cp4

0x475a,	// (0x00029c29) grid_ai2_link_pane_ParamLimits

0x475a,	// (0x00029c29) grid_ai2_link_pane

0x4771,	// (0x00029c40) popup_ai2_link_window_g1_ParamLimits

0x4771,	// (0x00029c40) popup_ai2_link_window_g1

0x477d,	// (0x00029c4c) popup_ai2_link_window_g2_ParamLimits

0x477d,	// (0x00029c4c) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x00034ea3) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x00034ea3) popup_ai2_link_window_g

0x478e,	// (0x00029c5d) ai2_mp_button_pane

0x4796,	// (0x00029c65) ai2_mp_volume_pane

0x3061,	// (0x00028530) bg_popup_sub_pane_cp5_ParamLimits

0x3061,	// (0x00028530) bg_popup_sub_pane_cp5

0x479e,	// (0x00029c6d) heading_ai2_gene_pane_ParamLimits

0x479e,	// (0x00029c6d) heading_ai2_gene_pane

0x47aa,	// (0x00029c79) list_ai2_gene_pane_ParamLimits

0x47aa,	// (0x00029c79) list_ai2_gene_pane

0x47f2,	// (0x00029cc1) cell_ai2_link_pane_ParamLimits

0x47f2,	// (0x00029cc1) cell_ai2_link_pane

0x4808,	// (0x00029cd7) cell_ai2_link_pane_g1

0xa2a5,	// (0x0002f774) grid_highlight_pane_cp7

0x1fdc,	// (0x000274ab) ai2_mp_volume_pane_g1

0x48db,	// (0x00029daa) ai2_mp_volume_pane_g2

0x4850,	// (0x00029d1f) list_ai2_gene_pane_t1

0x48e3,	// (0x00029db2) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x00034ebc) ai2_mp_volume_pane_g

0x1fe4,	// (0x000274b3) volume_small_pane_cp3

0x48eb,	// (0x00029dba) aid_size_cell_ai2_button

0x48f3,	// (0x00029dc2) grid_ai2_button_pane

0x48fc,	// (0x00029dcb) cell_ai2_button_pane_ParamLimits

0x48fc,	// (0x00029dcb) cell_ai2_button_pane

0xa1b5,	// (0x0002f684) cell_ai2_button_pane_g1

0xa2a5,	// (0x0002f774) grid_highlight_pane_cp8

0x489b,	// (0x00029d6a) ai2_gene_pane_t1_ParamLimits

0x489b,	// (0x00029d6a) ai2_gene_pane_t1

0xaf94,	// (0x00030463) aid_height_parent_landscape

0xc017,	// (0x000314e6) aid_height_set_list

0x41df,	// (0x000296ae) aid_size_parent

0x4525,	// (0x000299f4) aid_size_cell_graphic_pane_ParamLimits

0x47ba,	// (0x00029c89) popup_ai2_data_window_g1_ParamLimits

0x47ba,	// (0x00029c89) popup_ai2_data_window_g1

0x47c6,	// (0x00029c95) ai2_news_ticker_pane_g1

0x47ce,	// (0x00029c9d) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x00034ea8) ai2_news_ticker_pane_g

0x47d6,	// (0x00029ca5) ai2_news_ticker_pane_t1

0x47e4,	// (0x00029cb3) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x00034ead) ai2_news_ticker_pane_t

0x4811,	// (0x00029ce0) heading_ai2_gene_pane_g1

0x4819,	// (0x00029ce8) heading_ai2_gene_pane_t1_ParamLimits

0x4819,	// (0x00029ce8) heading_ai2_gene_pane_t1

0x482e,	// (0x00029cfd) list_highlight_pane_cp6

0x4836,	// (0x00029d05) ai2_gene_pane_ParamLimits

0x4836,	// (0x00029d05) ai2_gene_pane

0x485e,	// (0x00029d2d) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x00034eb2) list_ai2_gene_pane_t

0x486c,	// (0x00029d3b) list_highlight_pane_cp8_ParamLimits

0x486c,	// (0x00029d3b) list_highlight_pane_cp8

0x487d,	// (0x00029d4c) ai2_gene_pane_g1_ParamLimits

0x487d,	// (0x00029d4c) ai2_gene_pane_g1

0x488f,	// (0x00029d5e) ai2_gene_pane_g2_ParamLimits

0x488f,	// (0x00029d5e) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x00034eb7) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x00034eb7) ai2_gene_pane_g

0xd1da,	// (0x000326a9) scroll_pane_cp12

0xaf53,	// (0x00030422) control_pane_t3_ParamLimits

0xaf53,	// (0x00030422) control_pane_t3

0x0f2d,	// (0x000263fc) status_small_pane_g8_ParamLimits

0x0f2d,	// (0x000263fc) status_small_pane_g8

0xb0aa,	// (0x00030579) popup_find_window_ParamLimits

0xb35b,	// (0x0003082a) popup_note_image_window_ParamLimits

0xebb8,	// (0x00034087) list_double2_graphic_pane_vc_g1_ParamLimits

0xebb8,	// (0x00034087) list_double2_graphic_pane_vc_g1

0xed61,	// (0x00034230) list_double2_graphic_pane_vc_g2_ParamLimits

0xed61,	// (0x00034230) list_double2_graphic_pane_vc_g2

0xed6d,	// (0x0003423c) list_double2_graphic_pane_vc_g3_ParamLimits

0xed6d,	// (0x0003423c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x00034c93) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x00034c93) list_double2_graphic_pane_vc_g

0xed79,	// (0x00034248) list_double2_graphic_pane_vc_t1_ParamLimits

0xed79,	// (0x00034248) list_double2_graphic_pane_vc_t1

0xeb8e,	// (0x0003405d) list_single_heading_pane_vc_g1_ParamLimits

0xeb8e,	// (0x0003405d) list_single_heading_pane_vc_g1

0xeb9a,	// (0x00034069) list_single_heading_pane_vc_g2_ParamLimits

0xeb9a,	// (0x00034069) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00034a9d) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00034a9d) list_single_heading_pane_vc_g

0xed8f,	// (0x0003425e) list_single_heading_pane_vc_t1_ParamLimits

0xed8f,	// (0x0003425e) list_single_heading_pane_vc_t1

0xeda7,	// (0x00034276) list_single_heading_pane_vc_t2_ParamLimits

0xeda7,	// (0x00034276) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x00034cb4) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x00034cb4) list_single_heading_pane_vc_t

0x2dbc,	// (0x0002828b) list_setting_number_pane_vc_g1_ParamLimits

0x2dbc,	// (0x0002828b) list_setting_number_pane_vc_g1

0x2dc8,	// (0x00028297) list_setting_number_pane_vc_g2_ParamLimits

0x2dc8,	// (0x00028297) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00034cb9) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00034cb9) list_setting_number_pane_vc_g

0x2dd4,	// (0x000282a3) list_setting_number_pane_vc_t1_ParamLimits

0x2dd4,	// (0x000282a3) list_setting_number_pane_vc_t1

0x2de8,	// (0x000282b7) list_setting_number_pane_vc_t2_ParamLimits

0x2de8,	// (0x000282b7) list_setting_number_pane_vc_t2

0x2e04,	// (0x000282d3) list_setting_number_pane_vc_t3_ParamLimits

0x2e04,	// (0x000282d3) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x00034cbe) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x00034cbe) list_setting_number_pane_vc_t

0x2e32,	// (0x00028301) set_value_pane_vc_ParamLimits

0x2e32,	// (0x00028301) set_value_pane_vc

0xedde,	// (0x000342ad) list_double2_graphic_pane_vc_ParamLimits

0xedde,	// (0x000342ad) list_double2_graphic_pane_vc

0x43b7,	// (0x00029886) list_double2_large_graphic_pane_vc_ParamLimits

0x43b7,	// (0x00029886) list_double2_large_graphic_pane_vc

0xedde,	// (0x000342ad) list_double2_pane_vc_ParamLimits

0xedde,	// (0x000342ad) list_double2_pane_vc

0xedde,	// (0x000342ad) list_double_graphic_heading_pane_vc_ParamLimits

0xedde,	// (0x000342ad) list_double_graphic_heading_pane_vc

0xedde,	// (0x000342ad) list_double_graphic_pane_vc_ParamLimits

0xedde,	// (0x000342ad) list_double_graphic_pane_vc

0xedde,	// (0x000342ad) list_double_heading_pane_vc_ParamLimits

0xedde,	// (0x000342ad) list_double_heading_pane_vc

0x43b7,	// (0x00029886) list_double_large_graphic_pane_vc_ParamLimits

0x43b7,	// (0x00029886) list_double_large_graphic_pane_vc

0xedde,	// (0x000342ad) list_double_number_pane_vc_ParamLimits

0xedde,	// (0x000342ad) list_double_number_pane_vc

0xedde,	// (0x000342ad) list_double_pane_vc_ParamLimits

0xedde,	// (0x000342ad) list_double_pane_vc

0xedde,	// (0x000342ad) list_double_time_pane_vc_ParamLimits

0xedde,	// (0x000342ad) list_double_time_pane_vc

0xedde,	// (0x000342ad) list_setting_number_pane_vc_ParamLimits

0xedde,	// (0x000342ad) list_setting_number_pane_vc

0xedde,	// (0x000342ad) list_setting_pane_vc_ParamLimits

0xedde,	// (0x000342ad) list_setting_pane_vc

0xedde,	// (0x000342ad) list_single_graphic_heading_pane_vc_ParamLimits

0xedde,	// (0x000342ad) list_single_graphic_heading_pane_vc

0xedde,	// (0x000342ad) list_single_heading_pane_vc_ParamLimits

0xedde,	// (0x000342ad) list_single_heading_pane_vc

0xedde,	// (0x000342ad) list_single_number_heading_pane_vc_ParamLimits

0xedde,	// (0x000342ad) list_single_number_heading_pane_vc

0xebb8,	// (0x00034087) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xebb8,	// (0x00034087) list_double_graphic_heading_pane_vc_g1

0xeb8e,	// (0x0003405d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xeb8e,	// (0x0003405d) list_double_graphic_heading_pane_vc_g2

0xeb9a,	// (0x00034069) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeb9a,	// (0x00034069) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x00034ec3) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x00034ec3) list_double_graphic_heading_pane_vc_g

0xedf3,	// (0x000342c2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xedf3,	// (0x000342c2) list_double_graphic_heading_pane_vc_t1

0xed8f,	// (0x0003425e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xed8f,	// (0x0003425e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x00034eca) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x00034eca) list_double_graphic_heading_pane_vc_t

0x2dbc,	// (0x0002828b) list_setting_pane_vc_g1_ParamLimits

0x2dbc,	// (0x0002828b) list_setting_pane_vc_g1

0x2dc8,	// (0x00028297) list_setting_pane_vc_g2_ParamLimits

0x2dc8,	// (0x00028297) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x00034cb9) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x00034cb9) list_setting_pane_vc_g

0x4b63,	// (0x0002a032) list_setting_pane_vc_t1_ParamLimits

0x4b63,	// (0x0002a032) list_setting_pane_vc_t1

0x4b7f,	// (0x0002a04e) list_setting_pane_vc_t2_ParamLimits

0x4b7f,	// (0x0002a04e) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x00034f0d) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x00034f0d) list_setting_pane_vc_t

0x2e32,	// (0x00028301) set_value_pane_cp_vc_ParamLimits

0x2e32,	// (0x00028301) set_value_pane_cp_vc

0xeb8e,	// (0x0003405d) list_single_number_heading_pane_vc_g1_ParamLimits

0xeb8e,	// (0x0003405d) list_single_number_heading_pane_vc_g1

0xeb9a,	// (0x00034069) list_single_number_heading_pane_vc_g2_ParamLimits

0xeb9a,	// (0x00034069) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00034a9d) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00034a9d) list_single_number_heading_pane_vc_g

0xed8f,	// (0x0003425e) list_single_number_heading_pane_vc_t1_ParamLimits

0xed8f,	// (0x0003425e) list_single_number_heading_pane_vc_t1

0xee05,	// (0x000342d4) list_single_number_heading_pane_vc_t2_ParamLimits

0xee05,	// (0x000342d4) list_single_number_heading_pane_vc_t2

0xeba6,	// (0x00034075) list_single_number_heading_pane_vc_t3_ParamLimits

0xeba6,	// (0x00034075) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x00034f12) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00034f12) list_single_number_heading_pane_vc_t

0xebb8,	// (0x00034087) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xebb8,	// (0x00034087) list_single_graphic_heading_pane_vc_g1

0xeb8e,	// (0x0003405d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xeb8e,	// (0x0003405d) list_single_graphic_heading_pane_vc_g4

0xeb9a,	// (0x00034069) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xeb9a,	// (0x00034069) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9f4,	// (0x00034ec3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x00034ec3) list_single_graphic_heading_pane_vc_g

0xed8f,	// (0x0003425e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xed8f,	// (0x0003425e) list_single_graphic_heading_pane_vc_t1

0xee17,	// (0x000342e6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xee17,	// (0x000342e6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x00034f19) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x00034f19) list_single_graphic_heading_pane_vc_t

0xeb8e,	// (0x0003405d) list_double2_pane_vc_g1_ParamLimits

0xeb8e,	// (0x0003405d) list_double2_pane_vc_g1

0xeb9a,	// (0x00034069) list_double2_pane_vc_g2_ParamLimits

0xeb9a,	// (0x00034069) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x00034a9d) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x00034a9d) list_double2_pane_vc_g

0xedc8,	// (0x00034297) list_double2_pane_vc_t1_ParamLimits

0xedc8,	// (0x00034297) list_double2_pane_vc_t1

0xebc4,	// (0x00034093) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xebc4,	// (0x00034093) list_double2_large_graphic_pane_vc_g1

0xebd0,	// (0x0003409f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xebd0,	// (0x0003409f) list_double2_large_graphic_pane_vc_g2

0xebdc,	// (0x000340ab) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xebdc,	// (0x000340ab) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x00034aba) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x00034aba) list_double2_large_graphic_pane_vc_g

0xebe8,	// (0x000340b7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xebe8,	// (0x000340b7) list_double2_large_graphic_pane_vc_t1

0xee29,	// (0x000342f8) list_double_time_pane_vc_g1_ParamLimits

0xee29,	// (0x000342f8) list_double_time_pane_vc_g1

0xee35,	// (0x00034304) list_double_time_pane_vc_g2_ParamLimits

0xee35,	// (0x00034304) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x00034f1e) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x00034f1e) list_double_time_pane_vc_g

0xee41,	// (0x00034310) list_double_time_pane_vc_t1_ParamLimits

0xee41,	// (0x00034310) list_double_time_pane_vc_t1

0xee6b,	// (0x0003433a) list_double_time_pane_vc_t2_ParamLimits

0xee6b,	// (0x0003433a) list_double_time_pane_vc_t2

0xeeb4,	// (0x00034383) list_double_time_pane_vc_t3_ParamLimits

0xeeb4,	// (0x00034383) list_double_time_pane_vc_t3

0xeec6,	// (0x00034395) list_double_time_pane_vc_t4_ParamLimits

0xeec6,	// (0x00034395) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x00034f23) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x00034f23) list_double_time_pane_vc_t

0xeb8e,	// (0x0003405d) list_double_pane_vc_g1_ParamLimits

0xeb8e,	// (0x0003405d) list_double_pane_vc_g1

0xeb9a,	// (0x00034069) list_double_pane_vc_g2_ParamLimits

0xeb9a,	// (0x00034069) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x00034a9d) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x00034a9d) list_double_pane_vc_g

0xeeeb,	// (0x000343ba) list_double_pane_vc_t1_ParamLimits

0xeeeb,	// (0x000343ba) list_double_pane_vc_t1

0xeeff,	// (0x000343ce) list_double_pane_vc_t2_ParamLimits

0xeeff,	// (0x000343ce) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x00034f2c) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x00034f2c) list_double_pane_vc_t

0xeb8e,	// (0x0003405d) list_double_number_pane_vc_g1_ParamLimits

0xeb8e,	// (0x0003405d) list_double_number_pane_vc_g1

0xeb9a,	// (0x00034069) list_double_number_pane_vc_g2_ParamLimits

0xeb9a,	// (0x00034069) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x00034a9d) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x00034a9d) list_double_number_pane_vc_g

0xef15,	// (0x000343e4) list_double_number_pane_vc_t1_ParamLimits

0xef15,	// (0x000343e4) list_double_number_pane_vc_t1

0xef29,	// (0x000343f8) list_double_number_pane_vc_t2_ParamLimits

0xef29,	// (0x000343f8) list_double_number_pane_vc_t2

0xeeff,	// (0x000343ce) list_double_number_pane_vc_t3_ParamLimits

0xeeff,	// (0x000343ce) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x00034f31) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x00034f31) list_double_number_pane_vc_t

0xef3d,	// (0x0003440c) list_double_large_graphic_pane_vc_g1_ParamLimits

0xef3d,	// (0x0003440c) list_double_large_graphic_pane_vc_g1

0xef4e,	// (0x0003441d) list_double_large_graphic_pane_vc_g2_ParamLimits

0xef4e,	// (0x0003441d) list_double_large_graphic_pane_vc_g2

0xebdc,	// (0x000340ab) list_double_large_graphic_pane_vc_g3_ParamLimits

0xebdc,	// (0x000340ab) list_double_large_graphic_pane_vc_g3

0xef5d,	// (0x0003442c) list_double_large_graphic_pane_vc_g4_ParamLimits

0xef5d,	// (0x0003442c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x00034f38) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x00034f38) list_double_large_graphic_pane_vc_g

0xef69,	// (0x00034438) list_double_large_graphic_pane_vc_t1_ParamLimits

0xef69,	// (0x00034438) list_double_large_graphic_pane_vc_t1

0xef82,	// (0x00034451) list_double_large_graphic_pane_vc_t2_ParamLimits

0xef82,	// (0x00034451) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x00034f41) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x00034f41) list_double_large_graphic_pane_vc_t

0xeb8e,	// (0x0003405d) list_double_heading_pane_vc_g1_ParamLimits

0xeb8e,	// (0x0003405d) list_double_heading_pane_vc_g1

0xeb9a,	// (0x00034069) list_double_heading_pane_vc_g2_ParamLimits

0xeb9a,	// (0x00034069) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00034a9d) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00034a9d) list_double_heading_pane_vc_g

0xef99,	// (0x00034468) list_double_heading_pane_vc_t1_ParamLimits

0xef99,	// (0x00034468) list_double_heading_pane_vc_t1

0xed8f,	// (0x0003425e) list_double_heading_pane_vc_t2_ParamLimits

0xed8f,	// (0x0003425e) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x00034f46) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x00034f46) list_double_heading_pane_vc_t

0xefab,	// (0x0003447a) list_double_graphic_pane_vc_g1_ParamLimits

0xefab,	// (0x0003447a) list_double_graphic_pane_vc_g1

0xefbb,	// (0x0003448a) list_double_graphic_pane_vc_g2_ParamLimits

0xefbb,	// (0x0003448a) list_double_graphic_pane_vc_g2

0xefca,	// (0x00034499) list_double_graphic_pane_vc_g3_ParamLimits

0xefca,	// (0x00034499) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x00034f4b) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x00034f4b) list_double_graphic_pane_vc_g

0xefd6,	// (0x000344a5) list_double_graphic_pane_vc_t1_ParamLimits

0xefd6,	// (0x000344a5) list_double_graphic_pane_vc_t1

0xeeff,	// (0x000343ce) list_double_graphic_pane_vc_t2_ParamLimits

0xeeff,	// (0x000343ce) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x00034f52) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x00034f52) list_double_graphic_pane_vc_t

0xf147,	// (0x00034616) aid_size_cell_fastswap

0xa1bf,	// (0x0002f68e) aid_size_cell_touch_ParamLimits

0xa1bf,	// (0x0002f68e) aid_size_cell_touch

0xf2c4,	// (0x00034793) popup_fast_swap_wide_window_ParamLimits

0xf2c4,	// (0x00034793) popup_fast_swap_wide_window

0xa318,	// (0x0002f7e7) touch_pane_ParamLimits

0xa318,	// (0x0002f7e7) touch_pane

0xd230,	// (0x000326ff) button_value_adjust_pane_cp2

0xd230,	// (0x000326ff) button_value_adjust_pane_cp4

0xec21,	// (0x000340f0) form_field_data_pane_cp2

0x9d51,	// (0x0002f220) form_field_data_wide_pane_cp2

0xd59d,	// (0x00032a6c) bg_scroll_pane_ParamLimits

0x033f,	// (0x0002580e) scroll_handle_pane_ParamLimits

0x0353,	// (0x00025822) scroll_sc2_down_pane_ParamLimits

0x0353,	// (0x00025822) scroll_sc2_down_pane

0xd5ce,	// (0x00032a9d) scroll_sc2_up_pane_ParamLimits

0xd5ce,	// (0x00032a9d) scroll_sc2_up_pane

0xc3e0,	// (0x000318af) grid_wheel_folder_pane_g1_ParamLimits

0xc3e0,	// (0x000318af) grid_wheel_folder_pane_g1

0x0858,	// (0x00025d27) clock_nsta_pane_cp2_ParamLimits

0x0858,	// (0x00025d27) clock_nsta_pane_cp2

0x1176,	// (0x00026645) listscroll_midp_pane_ParamLimits

0xad59,	// (0x00030228) midp_canvas_pane

0x10f2,	// (0x000265c1) nsta_clock_indic_pane

0x1148,	// (0x00026617) listscroll_form_pane_vc

0x1164,	// (0x00026633) listscroll_set_pane_vc_ParamLimits

0x1164,	// (0x00026633) listscroll_set_pane_vc

0xb7d5,	// (0x00030ca4) clock_nsta_pane

0xb7ff,	// (0x00030cce) indicator_nsta_pane

0x2cb2,	// (0x00028181) bg_popup_sub_pane_cp2_ParamLimits

0x2cc6,	// (0x00028195) find_pane_cp2_ParamLimits

0x2cc6,	// (0x00028195) find_pane_cp2

0x2cdc,	// (0x000281ab) grid_toobar_pane_ParamLimits

0x2e44,	// (0x00028313) list_form_gen_pane_vc_ParamLimits

0x2e44,	// (0x00028313) list_form_gen_pane_vc

0x2e5a,	// (0x00028329) scroll_pane_cp8_vc_ParamLimits

0x2e5a,	// (0x00028329) scroll_pane_cp8_vc

0x2ed6,	// (0x000283a5) data_form_wide_pane_vc_ParamLimits

0x2ed6,	// (0x000283a5) data_form_wide_pane_vc

0x2ee2,	// (0x000283b1) form_field_data_wide_pane_vc_g1

0x2eea,	// (0x000283b9) form_field_data_wide_pane_vc_t1_ParamLimits

0x2eea,	// (0x000283b9) form_field_data_wide_pane_vc_t1

0xd244,	// (0x00032713) input_focus_pane_cp6_vc_ParamLimits

0xd244,	// (0x00032713) input_focus_pane_cp6_vc

0xbbf1,	// (0x000310c0) list_midp_pane_ParamLimits

0x4591,	// (0x00029a60) scroll_pane_cp16_ParamLimits

0x4591,	// (0x00029a60) scroll_pane_cp16

0x3246,	// (0x00028715) button_value_adjust_pane_ParamLimits

0x3246,	// (0x00028715) button_value_adjust_pane

0xc028,	// (0x000314f7) button_value_adjust_pane_cp6_ParamLimits

0xc028,	// (0x000314f7) button_value_adjust_pane_cp6

0xc16a,	// (0x00031639) settings_code_pane_cp_ParamLimits

0xc16a,	// (0x00031639) settings_code_pane_cp

0xa1b5,	// (0x0002f684) cell_touch_pane_g1

0xa1b5,	// (0x0002f684) cell_touch_pane_g2

0x0001,

0xf709,	// (0x00034bd8) cell_touch_pane_g

0xc2b5,	// (0x00031784) cell_touch_pane_cp_ParamLimits

0xc2b5,	// (0x00031784) cell_touch_pane_cp

0xc2d1,	// (0x000317a0) cell_touch_pane_ParamLimits

0xc2d1,	// (0x000317a0) cell_touch_pane

0xa1b5,	// (0x0002f684) scroll_sc2_down_pane_g1

0xa1b5,	// (0x0002f684) scroll_sc2_up_pane_g1

0xa2a5,	// (0x0002f774) bg_set_opt_pane_cp4_vc

0x492f,	// (0x00029dfe) list_set_graphic_pane_vc_g1_ParamLimits

0x492f,	// (0x00029dfe) list_set_graphic_pane_vc_g1

0x493b,	// (0x00029e0a) list_set_graphic_pane_vc_g2_ParamLimits

0x493b,	// (0x00029e0a) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x00034ecf) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x00034ecf) list_set_graphic_pane_vc_g

0x4947,	// (0x00029e16) text_primary_small_cp13_vc_ParamLimits

0x4947,	// (0x00029e16) text_primary_small_cp13_vc

0x495f,	// (0x00029e2e) list_set_graphic_pane_vc_ParamLimits

0x495f,	// (0x00029e2e) list_set_graphic_pane_vc

0xa2a5,	// (0x0002f774) input_focus_pane_cp2_vc

0xa1b5,	// (0x0002f684) setting_code_pane_vc_g1

0xa4ce,	// (0x0002f99d) setting_code_pane_vc_t1

0x4974,	// (0x00029e43) set_text_pane_vc_t1_ParamLimits

0x4974,	// (0x00029e43) set_text_pane_vc_t1

0xa2a5,	// (0x0002f774) input_focus_pane_cp1_vc

0x4992,	// (0x00029e61) list_set_text_pane_vc

0xa1b5,	// (0x0002f684) setting_text_pane_vc_g1

0xa2a5,	// (0x0002f774) bg_set_opt_pane_cp2_vc

0xa4c5,	// (0x0002f994) setting_slider_graphic_pane_vc_g1

0x499c,	// (0x00029e6b) setting_slider_graphic_pane_vc_t1

0x49ae,	// (0x00029e7d) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x00034ed4) setting_slider_graphic_pane_vc_t

0x49c0,	// (0x00029e8f) slider_set_pane_cp_vc

0x49ca,	// (0x00029e99) slider_set_pane_vc_g1

0x49d3,	// (0x00029ea2) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x00034ed9) slider_set_pane_vc_g

0xd2ab,	// (0x0003277a) set_opt_bg_pane_g1_copy1

0xd2b3,	// (0x00032782) set_opt_bg_pane_g2_copy1

0x49ff,	// (0x00029ece) set_opt_bg_pane_g3_copy1

0xd2c3,	// (0x00032792) set_opt_bg_pane_g4_copy1

0xd2cb,	// (0x0003279a) set_opt_bg_pane_g5_copy1

0xd2d3,	// (0x000327a2) set_opt_bg_pane_g6_copy1

0x4a09,	// (0x00029ed8) set_opt_bg_pane_g7_copy1

0x4a13,	// (0x00029ee2) set_opt_bg_pane_g8_copy1

0x4a1d,	// (0x00029eec) set_opt_bg_pane_g9_copy1

0xa2a5,	// (0x0002f774) bg_set_opt_pane_cp_vc

0x4a27,	// (0x00029ef6) setting_slider_pane_vc_t1

0x4a36,	// (0x00029f05) setting_slider_pane_vc_t2

0x4a48,	// (0x00029f17) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x00034ee8) setting_slider_pane_vc_t

0x4a5a,	// (0x00029f29) slider_set_pane_vc

0x1d1e,	// (0x000271ed) volume_set_pane_vc_g1

0x1d27,	// (0x000271f6) volume_set_pane_vc_g2

0x1d30,	// (0x000271ff) volume_set_pane_vc_g3

0x1d39,	// (0x00027208) volume_set_pane_vc_g4

0x1d42,	// (0x00027211) volume_set_pane_vc_g5

0x1d4b,	// (0x0002721a) volume_set_pane_vc_g6

0x1d54,	// (0x00027223) volume_set_pane_vc_g7

0x1d5d,	// (0x0002722c) volume_set_pane_vc_g8

0x1d66,	// (0x00027235) volume_set_pane_vc_g9

0x1d6f,	// (0x0002723e) volume_set_pane_vc_g10

0x0009,

0xfa20,	// (0x00034eef) volume_set_pane_vc_g

0x4a64,	// (0x00029f33) volume_set_pane_vc

0x4a6e,	// (0x00029f3d) button_value_adjust_pane_cp1_vc

0x4a78,	// (0x00029f47) list_highlight_pane_cp2_vc

0x4a81,	// (0x00029f50) list_set_pane_vc_ParamLimits

0x4a81,	// (0x00029f50) list_set_pane_vc

0x4af1,	// (0x00029fc0) main_pane_set_vc_t1_ParamLimits

0x4af1,	// (0x00029fc0) main_pane_set_vc_t1

0x4b06,	// (0x00029fd5) main_pane_set_vc_t2_ParamLimits

0x4b06,	// (0x00029fd5) main_pane_set_vc_t2

0x4b18,	// (0x00029fe7) main_pane_set_vc_t3_ParamLimits

0x4b18,	// (0x00029fe7) main_pane_set_vc_t3

0x4b2c,	// (0x00029ffb) main_pane_set_vc_t4_ParamLimits

0x4b2c,	// (0x00029ffb) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x00034f04) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x00034f04) main_pane_set_vc_t

0x4b40,	// (0x0002a00f) setting_code_pane_vc_ParamLimits

0x4b40,	// (0x0002a00f) setting_code_pane_vc

0x4b51,	// (0x0002a020) setting_slider_graphic_pane_vc

0x4b51,	// (0x0002a020) setting_slider_pane_vc

0x4b51,	// (0x0002a020) setting_text_pane_vc

0x4b51,	// (0x0002a020) setting_volume_pane_vc

0x4b5b,	// (0x0002a02a) scroll_pane_cp121_vc

0xd21e,	// (0x000326ed) set_content_pane_vc

0x4b9b,	// (0x0002a06a) button_value_adjust_pane_g1

0x4ba4,	// (0x0002a073) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x00034f57) button_value_adjust_pane_g

0x4bad,	// (0x0002a07c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4bad,	// (0x0002a07c) form_field_slider_wide_pane_vc_t1

0x4bc1,	// (0x0002a090) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4bc1,	// (0x0002a090) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x00034f5c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x00034f5c) form_field_slider_wide_pane_vc_t

0xa475,	// (0x0002f944) input_focus_pane_cp10_vc_ParamLimits

0xa475,	// (0x0002f944) input_focus_pane_cp10_vc

0x4bef,	// (0x0002a0be) slider_cont_pane_cp1_vc_ParamLimits

0x4bef,	// (0x0002a0be) slider_cont_pane_cp1_vc

0x4bff,	// (0x0002a0ce) slider_form_pane_g1_cp2

0x49d3,	// (0x00029ea2) slider_form_pane_g2_cp2

0x4c2c,	// (0x0002a0fb) form_field_slider_pane_vc_t3

0x4c3a,	// (0x0002a109) form_field_slider_pane_vc_t4

0x4c48,	// (0x0002a117) slider_form_pane_vc_ParamLimits

0x4c48,	// (0x0002a117) slider_form_pane_vc

0x4c55,	// (0x0002a124) form_field_slider_pane_vc_t1_ParamLimits

0x4c55,	// (0x0002a124) form_field_slider_pane_vc_t1

0x4bc1,	// (0x0002a090) form_field_slider_pane_vc_t2_ParamLimits

0x4bc1,	// (0x0002a090) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x00034f6e) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x00034f6e) form_field_slider_pane_vc_t

0xa475,	// (0x0002f944) input_focus_pane_cp9_vc_ParamLimits

0xa475,	// (0x0002f944) input_focus_pane_cp9_vc

0x4c71,	// (0x0002a140) slider_cont_pane_vc_ParamLimits

0x4c71,	// (0x0002a140) slider_cont_pane_vc

0x4c83,	// (0x0002a152) list_form_graphic_pane_cp_vc_ParamLimits

0x4c83,	// (0x0002a152) list_form_graphic_pane_cp_vc

0x2ee2,	// (0x000283b1) form_field_popup_wide_pane_vc_g1

0x4c98,	// (0x0002a167) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4c98,	// (0x0002a167) form_field_popup_wide_pane_vc_t1

0xd244,	// (0x00032713) input_focus_pane_cp8_vc_ParamLimits

0xd244,	// (0x00032713) input_focus_pane_cp8_vc

0x4cdd,	// (0x0002a1ac) list_form_wide_pane_vc_ParamLimits

0x4cdd,	// (0x0002a1ac) list_form_wide_pane_vc

0x4ce9,	// (0x0002a1b8) list_form_graphic_pane_vc_g1

0x4cf1,	// (0x0002a1c0) list_form_graphic_pane_vc_t1_ParamLimits

0x4cf1,	// (0x0002a1c0) list_form_graphic_pane_vc_t1

0xa4b7,	// (0x0002f986) list_highlight_pane_cp5_vc_ParamLimits

0xa4b7,	// (0x0002f986) list_highlight_pane_cp5_vc

0x4d0d,	// (0x0002a1dc) list_form_graphic_pane_vc_ParamLimits

0x4d0d,	// (0x0002a1dc) list_form_graphic_pane_vc

0x2ee2,	// (0x000283b1) form_field_popup_pane_vc_g1

0x4d23,	// (0x0002a1f2) form_field_popup_pane_vc_t1_ParamLimits

0x4d23,	// (0x0002a1f2) form_field_popup_pane_vc_t1

0xd244,	// (0x00032713) input_focus_pane_cp7_vc_ParamLimits

0xd244,	// (0x00032713) input_focus_pane_cp7_vc

0x4d3a,	// (0x0002a209) list_form_pane_vc_ParamLimits

0x4d3a,	// (0x0002a209) list_form_pane_vc

0x4d46,	// (0x0002a215) data_form_pane_vc_t1_ParamLimits

0x4d46,	// (0x0002a215) data_form_pane_vc_t1

0xd2ab,	// (0x0003277a) input_focus_pane_vc_g1

0xd2b3,	// (0x00032782) input_focus_pane_vc_g2

0xd2bb,	// (0x0003278a) input_focus_pane_vc_g3

0xd2c3,	// (0x00032792) input_focus_pane_vc_g4

0xd2cb,	// (0x0003279a) input_focus_pane_vc_g5

0xd2d3,	// (0x000327a2) input_focus_pane_vc_g6

0xd2db,	// (0x000327aa) input_focus_pane_vc_g7

0xd2e3,	// (0x000327b2) input_focus_pane_vc_g8

0xd2eb,	// (0x000327ba) input_focus_pane_vc_g9

0xa1b5,	// (0x0002f684) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00034b61) input_focus_pane_vc_g

0x2ed6,	// (0x000283a5) data_form_pane_vc_ParamLimits

0x2ed6,	// (0x000283a5) data_form_pane_vc

0x2ee2,	// (0x000283b1) form_field_data_pane_vc_g1

0x4d63,	// (0x0002a232) form_field_data_pane_vc_t1_ParamLimits

0x4d63,	// (0x0002a232) form_field_data_pane_vc_t1

0xd244,	// (0x00032713) input_focus_pane_vc_ParamLimits

0xd244,	// (0x00032713) input_focus_pane_vc

0x4d7d,	// (0x0002a24c) button_value_adjust_pane_cp3_vc

0x4d85,	// (0x0002a254) button_value_adjust_pane_cp5_vc

0x4d8d,	// (0x0002a25c) form_field_data_pane_vc_ParamLimits

0x4d8d,	// (0x0002a25c) form_field_data_pane_vc

0x4da8,	// (0x0002a277) form_field_data_pane_vc_cp2

0x4db0,	// (0x0002a27f) form_field_data_wide_pane_vc_ParamLimits

0x4db0,	// (0x0002a27f) form_field_data_wide_pane_vc

0x4dca,	// (0x0002a299) form_field_data_wide_pane_vc_cp2

0x4dd2,	// (0x0002a2a1) form_field_popup_pane_vc_ParamLimits

0x4dd2,	// (0x0002a2a1) form_field_popup_pane_vc

0x4ded,	// (0x0002a2bc) form_field_popup_wide_pane_vc_ParamLimits

0x4ded,	// (0x0002a2bc) form_field_popup_wide_pane_vc

0x4e07,	// (0x0002a2d6) form_field_slider_pane_vc_ParamLimits

0x4e07,	// (0x0002a2d6) form_field_slider_pane_vc

0x4e1a,	// (0x0002a2e9) form_field_slider_wide_pane_vc_ParamLimits

0x4e1a,	// (0x0002a2e9) form_field_slider_wide_pane_vc

0xc2ef,	// (0x000317be) grid_touch_1_pane_ParamLimits

0xc2ef,	// (0x000317be) grid_touch_1_pane

0xc303,	// (0x000317d2) grid_touch_2_pane_ParamLimits

0xc303,	// (0x000317d2) grid_touch_2_pane

0x4ef1,	// (0x0002a3c0) touch_pane_g1_ParamLimits

0x4ef1,	// (0x0002a3c0) touch_pane_g1

0x4e53,	// (0x0002a322) cell_app_pane_cp_wide_ParamLimits

0x4e53,	// (0x0002a322) cell_app_pane_cp_wide

0x4e64,	// (0x0002a333) grid_popup_fast_wide_pane_ParamLimits

0x4e64,	// (0x0002a333) grid_popup_fast_wide_pane

0x4e78,	// (0x0002a347) scroll_pane_cp19_ParamLimits

0x4e78,	// (0x0002a347) scroll_pane_cp19

0xa2a5,	// (0x0002f774) bg_popup_window_pane_cp20

0x4e8c,	// (0x0002a35b) listscroll_popup_fast_wide_pane

0xd71d,	// (0x00032bec) grid_indicator_nsta_pane

0x4e94,	// (0x0002a363) clock_nsta_pane_g1

0x4e9d,	// (0x0002a36c) clock_nsta_pane_t1

0xc32f,	// (0x000317fe) cell_indicator_nsta_pane_ParamLimits

0xc32f,	// (0x000317fe) cell_indicator_nsta_pane

0x4ef1,	// (0x0002a3c0) cell_indicator_nsta_pane_g1

0xc34c,	// (0x0003181b) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x00034f7f) cell_indicator_nsta_pane_g

0x4f15,	// (0x0002a3e4) clock_nsta_pane_cp

0x4f1d,	// (0x0002a3ec) indicator_nsta_pane_cp

0x4f26,	// (0x0002a3f5) nsta_clock_indic_pane_g1

0xa5b3,	// (0x0002fa82) grid_indicator_pane

0xd6c0,	// (0x00032b8f) scroll_pane_cp29

0x0782,	// (0x00025c51) indicator_nsta_pane_cp2_ParamLimits

0x0782,	// (0x00025c51) indicator_nsta_pane_cp2

0xa4b7,	// (0x0002f986) main_apps_wheel_pane

0x30c9,	// (0x00028598) form_midp_field_text_pane_ParamLimits

0x3218,	// (0x000286e7) scroll_bar_cp050_ParamLimits

0x4f8f,	// (0x0002a45e) cell_indicator_pane_ParamLimits

0x4f8f,	// (0x0002a45e) cell_indicator_pane

0x4fa7,	// (0x0002a476) cell_indicator_pane_g1

0xc362,	// (0x00031831) grid_wheel_folder_pane_ParamLimits

0xc362,	// (0x00031831) grid_wheel_folder_pane

0xc370,	// (0x0003183f) list_wheel_apps_pane_ParamLimits

0xc370,	// (0x0003183f) list_wheel_apps_pane

0xc37e,	// (0x0003184d) main_apps_wheel_pane_g1_ParamLimits

0xc37e,	// (0x0003184d) main_apps_wheel_pane_g1

0xc38e,	// (0x0003185d) main_apps_wheel_pane_g2_ParamLimits

0xc38e,	// (0x0003185d) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x00034f9b) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x00034f9b) main_apps_wheel_pane_g

0xc39e,	// (0x0003186d) main_apps_wheel_pane_t1_ParamLimits

0xc39e,	// (0x0003186d) main_apps_wheel_pane_t1

0xc3b6,	// (0x00031885) list_wheel_apps_pane_g1

0xc3be,	// (0x0003188d) list_wheel_apps_pane_g2

0xc3c6,	// (0x00031895) list_wheel_apps_pane_g3

0xc3ce,	// (0x0003189d) list_wheel_apps_pane_g4

0xc3d6,	// (0x000318a5) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x00034fa0) list_wheel_apps_pane_g

0x0a85,	// (0x00025f54) navi_icon_text_pane

0xb6c9,	// (0x00030b98) aid_fill_nsta

0xc3f3,	// (0x000318c2) navi_icon_text_pane_g1

0xc3ff,	// (0x000318ce) navi_icon_text_pane_t1

0xacbd,	// (0x0003018c) list_set_graphic_pane_t1_ParamLimits

0xacbd,	// (0x0003018c) list_set_graphic_pane_t1

0x3969,	// (0x00028e38) popup_midp_note_alarm_window_t6_ParamLimits

0x3969,	// (0x00028e38) popup_midp_note_alarm_window_t6

0x397b,	// (0x00028e4a) popup_midp_note_alarm_window_t7_ParamLimits

0x397b,	// (0x00028e4a) popup_midp_note_alarm_window_t7

0x398d,	// (0x00028e5c) popup_midp_note_alarm_window_t8_ParamLimits

0x398d,	// (0x00028e5c) popup_midp_note_alarm_window_t8

0x399f,	// (0x00028e6e) popup_midp_note_alarm_window_t9_ParamLimits

0x399f,	// (0x00028e6e) popup_midp_note_alarm_window_t9

0x39b1,	// (0x00028e80) popup_midp_note_alarm_window_t10_ParamLimits

0x39b1,	// (0x00028e80) popup_midp_note_alarm_window_t10

0x39c3,	// (0x00028e92) popup_midp_note_alarm_window_t11_ParamLimits

0x39c3,	// (0x00028e92) popup_midp_note_alarm_window_t11

0x39d5,	// (0x00028ea4) scroll_pane_cp17_ParamLimits

0x39d5,	// (0x00028ea4) scroll_pane_cp17

0x1d1e,	// (0x000271ed) volume_small_pane_cp_g1

0x1fed,	// (0x000274bc) volume_small_pane_cp_g2

0x1ff6,	// (0x000274c5) volume_small_pane_cp_g3

0x1fff,	// (0x000274ce) volume_small_pane_cp_g4

0x2008,	// (0x000274d7) volume_small_pane_cp_g5

0x2011,	// (0x000274e0) volume_small_pane_cp_g6

0x201a,	// (0x000274e9) volume_small_pane_cp_g7

0x2023,	// (0x000274f2) volume_small_pane_cp_g8

0x202c,	// (0x000274fb) volume_small_pane_cp_g9

0x2035,	// (0x00027504) volume_small_pane_cp_g10

0x0cda,	// (0x000261a9) midp_ticker_pane_g1_ParamLimits

0x0ce6,	// (0x000261b5) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x00034c2d) midp_ticker_pane_g_ParamLimits

0xadf0,	// (0x000302bf) midp_ticker_pane_t1_ParamLimits

0xb6ed,	// (0x00030bbc) aid_fill_nsta_2

0x3204,	// (0x000286d3) list_form2_midp_pane

0x4386,	// (0x00029855) midp_editing_number_pane_ParamLimits

0x4395,	// (0x00029864) midp_ticker_pane_ParamLimits

0x50a0,	// (0x0002a56f) form2_midp_field_pane

0x50c4,	// (0x0002a593) scroll_pane_cp51

0x50e4,	// (0x0002a5b3) form2_midp_button_pane_ParamLimits

0x50e4,	// (0x0002a5b3) form2_midp_button_pane

0x50f6,	// (0x0002a5c5) form2_midp_content_pane_ParamLimits

0x50f6,	// (0x0002a5c5) form2_midp_content_pane

0x5110,	// (0x0002a5df) form2_midp_field_choice_group_pane

0x5118,	// (0x0002a5e7) form2_midp_field_pane_g1

0x5120,	// (0x0002a5ef) form2_midp_field_pane_g2

0x5128,	// (0x0002a5f7) form2_midp_field_pane_g3

0x5130,	// (0x0002a5ff) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x00034fc5) form2_midp_field_pane_g

0x5138,	// (0x0002a607) form2_midp_gauge_slider_pane

0x5140,	// (0x0002a60f) form2_midp_gauge_wait_pane

0x5148,	// (0x0002a617) form2_midp_image_pane_ParamLimits

0x5148,	// (0x0002a617) form2_midp_image_pane

0x5163,	// (0x0002a632) form2_midp_label_pane_ParamLimits

0x5163,	// (0x0002a632) form2_midp_label_pane

0xc42d,	// (0x000318fc) form2_midp_label_pane_cp_ParamLimits

0xc42d,	// (0x000318fc) form2_midp_label_pane_cp

0x51a3,	// (0x0002a672) form2_midp_string_pane_ParamLimits

0x51a3,	// (0x0002a672) form2_midp_string_pane

0xefea,	// (0x000344b9) form2_midp_text_pane_ParamLimits

0xefea,	// (0x000344b9) form2_midp_text_pane

0x51b5,	// (0x0002a684) form2_midp_time_pane

0x51c5,	// (0x0002a694) input_focus_pane_cp51_ParamLimits

0x51c5,	// (0x0002a694) input_focus_pane_cp51

0x51dd,	// (0x0002a6ac) form2_midp_label_pane_t1_ParamLimits

0x51dd,	// (0x0002a6ac) form2_midp_label_pane_t1

0xf00b,	// (0x000344da) form2_mdip_text_pane_t1_ParamLimits

0xf00b,	// (0x000344da) form2_mdip_text_pane_t1

0xf02f,	// (0x000344fe) form2_midp_time_pane_t1

0x522b,	// (0x0002a6fa) form2_midp_gauge_slider_pane_t1

0xc44e,	// (0x0003191d) form2_midp_gauge_slider_pane_t2

0xc460,	// (0x0003192f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x00034fce) form2_midp_gauge_slider_pane_t

0x5261,	// (0x0002a730) form2_midp_slider_pane

0x526d,	// (0x0002a73c) form2_midp_gauge_wait_pane_t1

0x527b,	// (0x0002a74a) form2_midp_wait_pane_ParamLimits

0x527b,	// (0x0002a74a) form2_midp_wait_pane

0x2f29,	// (0x000283f8) list_single_2graphic_pane_cp4_ParamLimits

0x2f29,	// (0x000283f8) list_single_2graphic_pane_cp4

0x52a6,	// (0x0002a775) list_single_midp_graphic_pane_cp_ParamLimits

0x52a6,	// (0x0002a775) list_single_midp_graphic_pane_cp

0xa2a5,	// (0x0002f774) list_highlight_pane_cp20

0x52ca,	// (0x0002a799) list_single_2graphic_pane_g1_cp4

0x4811,	// (0x00029ce0) list_single_2graphic_pane_g2_cp4

0x52d2,	// (0x0002a7a1) list_single_2graphic_pane_t1_cp4

0xa4b7,	// (0x0002f986) list_highlight_pane_cp21

0x52e1,	// (0x0002a7b0) list_single_midp_graphic_pane_g4_cp

0x52f0,	// (0x0002a7bf) list_single_midp_graphic_pane_t1_cp

0xc472,	// (0x00031941) form2_mdip_string_pane_t1_ParamLimits

0xc472,	// (0x00031941) form2_mdip_string_pane_t1

0xa2a5,	// (0x0002f774) bg_wml_button_pane_cp2

0xa1b5,	// (0x0002f684) form2_midp_image_pane_g1

0xebfe,	// (0x000340cd) list_double_large_graphic_pane_g5_ParamLimits

0xebfe,	// (0x000340cd) list_double_large_graphic_pane_g5

0x1176,	// (0x00026645) midp_form_pane_ParamLimits

0xa4b7,	// (0x0002f986) main_apps_wheel_pane_ParamLimits

0xb3e1,	// (0x000308b0) popup_preview_window_ParamLimits

0xb3e1,	// (0x000308b0) popup_preview_window

0x173e,	// (0x00026c0d) popup_touch_info_window_ParamLimits

0x173e,	// (0x00026c0d) popup_touch_info_window

0x1760,	// (0x00026c2f) popup_touch_menu_window_ParamLimits

0x1760,	// (0x00026c2f) popup_touch_menu_window

0xa1ab,	// (0x0002f67a) bg_popup_sub_pane_cp6

0x53aa,	// (0x0002a879) list_touch_menu_pane

0x53b2,	// (0x0002a881) list_single_touch_menu_pane_ParamLimits

0x53b2,	// (0x0002a881) list_single_touch_menu_pane

0x53ca,	// (0x0002a899) list_single_touch_menu_pane_t1

0xa4b7,	// (0x0002f986) bg_popup_sub_pane_cp7_ParamLimits

0xa4b7,	// (0x0002f986) bg_popup_sub_pane_cp7

0x53d8,	// (0x0002a8a7) heading_sub_pane

0x53e0,	// (0x0002a8af) list_touch_info_pane_ParamLimits

0x53e0,	// (0x0002a8af) list_touch_info_pane

0x53ef,	// (0x0002a8be) list_single_touch_info_pane_ParamLimits

0x53ef,	// (0x0002a8be) list_single_touch_info_pane

0x5401,	// (0x0002a8d0) list_single_touch_info_pane_t1

0x540f,	// (0x0002a8de) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x00034fdc) list_single_touch_info_pane_t

0x0c09,	// (0x000260d8) bg_popup_heading_pane_cp

0x541d,	// (0x0002a8ec) heading_sub_pane_t1

0x2e70,	// (0x0002833f) bg_popup_preview_window_pane_cp_ParamLimits

0x2e70,	// (0x0002833f) bg_popup_preview_window_pane_cp

0x53d8,	// (0x0002a8a7) heading_preview_pane

0x53e0,	// (0x0002a8af) list_preview_pane_ParamLimits

0x53e0,	// (0x0002a8af) list_preview_pane

0x542b,	// (0x0002a8fa) popup_preview_window_g1

0x53ef,	// (0x0002a8be) list_single_preview_pane_ParamLimits

0x53ef,	// (0x0002a8be) list_single_preview_pane

0x5433,	// (0x0002a902) list_single_preview_pane_g1

0x543b,	// (0x0002a90a) list_single_preview_pane_t1

0x5401,	// (0x0002a8d0) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x00034fe1) list_single_preview_pane_t

0x5449,	// (0x0002a918) bg_popup_heading_pane_cp2_ParamLimits

0x5449,	// (0x0002a918) bg_popup_heading_pane_cp2

0x545f,	// (0x0002a92e) heading_preview_pane_g1

0x5467,	// (0x0002a936) heading_preview_pane_t1_ParamLimits

0x5467,	// (0x0002a936) heading_preview_pane_t1

0xa5e3,	// (0x0002fab2) soft_indicator_pane_t1_ParamLimits

0xd1b7,	// (0x00032686) scroll_pane_ParamLimits

0xd5bc,	// (0x00032a8b) scroll_sc2_left_pane

0xd5c5,	// (0x00032a94) scroll_sc2_right_pane

0xd5e4,	// (0x00032ab3) scroll_bg_pane_g1_ParamLimits

0xd5f9,	// (0x00032ac8) scroll_bg_pane_g2_ParamLimits

0xd611,	// (0x00032ae0) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x00034bb8) scroll_bg_pane_g_ParamLimits

0xd5e4,	// (0x00032ab3) scroll_handle_pane_g1_ParamLimits

0xd633,	// (0x00032b02) scroll_handle_pane_g2_ParamLimits

0xd611,	// (0x00032ae0) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00034bbf) scroll_handle_pane_g_ParamLimits

0x119e,	// (0x0002666d) popup_choice_list_window_ParamLimits

0x119e,	// (0x0002666d) popup_choice_list_window

0x2cbe,	// (0x0002818d) choice_list_pane

0x2d40,	// (0x0002820f) cell_toolbar_pane_t1

0x2d68,	// (0x00028237) toolbar_button_pane_ParamLimits

0x3ea5,	// (0x00029374) ai_gene_pane_1_t2_ParamLimits

0x3ea5,	// (0x00029374) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x00034de2) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x00034de2) ai_gene_pane_1_t

0x5484,	// (0x0002a953) scroll_sc2_left_pane_g1

0x5484,	// (0x0002a953) scroll_sc2_right_pane_g1

0x1176,	// (0x00026645) bg_popup_sub_pane_cp10

0x548e,	// (0x0002a95d) list_choice_list_pane

0x54a7,	// (0x0002a976) list_single_choice_list_pane_ParamLimits

0x54a7,	// (0x0002a976) list_single_choice_list_pane

0x54bf,	// (0x0002a98e) list_single_choice_list_pane_g1

0xd3a1,	// (0x00032870) list_single_choice_list_pane_t1_ParamLimits

0xd3a1,	// (0x00032870) list_single_choice_list_pane_t1

0x54c7,	// (0x0002a996) choice_list_pane_g1

0x54cf,	// (0x0002a99e) choice_list_pane_t1

0xa1ab,	// (0x0002f67a) input_focus_pane_cp11

0xd51f,	// (0x000329ee) title_pane_stacon_g2_ParamLimits

0xd51f,	// (0x000329ee) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x00034b9e) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00034b9e) title_pane_stacon_g

0x0c09,	// (0x000260d8) cursor_press_pane

0xb05e,	// (0x0003052d) popup_fep_hwr_window_ParamLimits

0xb05e,	// (0x0003052d) popup_fep_hwr_window

0x12e2,	// (0x000267b1) popup_fep_vkb_window_ParamLimits

0x12e2,	// (0x000267b1) popup_fep_vkb_window

0x54dd,	// (0x0002a9ac) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0003500a) fep_vkb_side_pane_g_ParamLimits

0x2077,	// (0x00027546) fep_hwr_candidate_pane_ParamLimits

0x2077,	// (0x00027546) fep_hwr_candidate_pane

0x20a1,	// (0x00027570) fep_hwr_side_pane_ParamLimits

0x20a1,	// (0x00027570) fep_hwr_side_pane

0x20c3,	// (0x00027592) fep_hwr_top_pane_ParamLimits

0x20c3,	// (0x00027592) fep_hwr_top_pane

0x20db,	// (0x000275aa) fep_hwr_write_pane_ParamLimits

0x20db,	// (0x000275aa) fep_hwr_write_pane

0xfb3b,	// (0x0003500a) fep_vkb_side_pane_g

0x54e5,	// (0x0002a9b4) fep_hwr_top_pane_g1

0x54f7,	// (0x0002a9c6) fep_hwr_top_pane_g2

0x2107,	// (0x000275d6) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x00034fe6) fep_hwr_top_pane_g

0x211c,	// (0x000275eb) fep_hwr_top_text_pane

0x03d3,	// (0x000258a2) fep_hwr_top_text_pane_g1

0x552d,	// (0x0002a9fc) fep_hwr_top_text_pane_t1

0x2226,	// (0x000276f5) fep_hwr_candidate_pane_g1

0x5778,	// (0x0002ac47) fep_vkb_keypad_pane_g3_ParamLimits

0x5778,	// (0x0002ac47) fep_vkb_keypad_pane_g3

0x57a4,	// (0x0002ac73) fep_vkb_keypad_pane_g4_ParamLimits

0x57a4,	// (0x0002ac73) fep_vkb_keypad_pane_g4

0x581b,	// (0x0002acea) fep_vkb_bottom_pane_g2_ParamLimits

0x581b,	// (0x0002acea) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x00035011) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x00035011) fep_vkb_bottom_pane_g

0x5484,	// (0x0002a953) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0003501b) cell_vkb_side_pane_g

0x58a6,	// (0x0002ad75) cell_vkb_side_pane_t1

0x58b4,	// (0x0002ad83) cell_vkb_side_pane_t1_copy1

0x5484,	// (0x0002a953) bg_fep_vkb_candidate_pane_g2

0x59f8,	// (0x0002aec7) cell_vkb_candidate_pane_ParamLimits

0x553b,	// (0x0002aa0a) aid_size_cell_vkb_ParamLimits

0x553b,	// (0x0002aa0a) aid_size_cell_vkb

0x59f8,	// (0x0002aec7) cell_vkb_candidate_pane

0x2240,	// (0x0002770f) bg_popup_fep_shadow_pane_g1

0xc58f,	// (0x00031a5e) fep_vkb_bottom_pane_ParamLimits

0xc58f,	// (0x00031a5e) fep_vkb_bottom_pane

0x560a,	// (0x0002aad9) fep_vkb_candidate_pane_ParamLimits

0x560a,	// (0x0002aad9) fep_vkb_candidate_pane

0xc5bb,	// (0x00031a8a) fep_vkb_keypad_pane_ParamLimits

0xc5bb,	// (0x00031a8a) fep_vkb_keypad_pane

0xc5e2,	// (0x00031ab1) fep_vkb_side_pane_ParamLimits

0xc5e2,	// (0x00031ab1) fep_vkb_side_pane

0xc61e,	// (0x00031aed) fep_vkb_top_pane_ParamLimits

0xc61e,	// (0x00031aed) fep_vkb_top_pane

0x56d1,	// (0x0002aba0) fep_vkb_top_pane_g1_ParamLimits

0x56d1,	// (0x0002aba0) fep_vkb_top_pane_g1

0x56e0,	// (0x0002abaf) fep_vkb_top_pane_g2_ParamLimits

0x56e0,	// (0x0002abaf) fep_vkb_top_pane_g2

0x56ef,	// (0x0002abbe) fep_vkb_top_pane_g3_ParamLimits

0x56ef,	// (0x0002abbe) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x00035001) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x00035001) fep_vkb_top_pane_g

0x570d,	// (0x0002abdc) fep_vkb_top_text_pane_ParamLimits

0x570d,	// (0x0002abdc) fep_vkb_top_text_pane

0xc65a,	// (0x00031b29) fep_vkb_side_pane_g1_ParamLimits

0xc65a,	// (0x00031b29) fep_vkb_side_pane_g1

0x5767,	// (0x0002ac36) grid_vkb_side_pane_ParamLimits

0x5767,	// (0x0002ac36) grid_vkb_side_pane

0x2248,	// (0x00027717) bg_popup_fep_shadow_pane_g2

0x2251,	// (0x00027720) bg_popup_fep_shadow_pane_g3

0x2259,	// (0x00027728) bg_popup_fep_shadow_pane_g4

0x2262,	// (0x00027731) bg_popup_fep_shadow_pane_g5

0x226c,	// (0x0002773b) bg_popup_fep_shadow_pane_g6

0x2274,	// (0x00027743) bg_popup_fep_shadow_pane_g7

0xd2cb,	// (0x0003279a) bg_popup_fep_shadow_pane_g8

0x57c6,	// (0x0002ac95) grid_vkb_keypad_number_pane_ParamLimits

0x57c6,	// (0x0002ac95) grid_vkb_keypad_number_pane

0x57da,	// (0x0002aca9) grid_vkb_keypad_pane_ParamLimits

0x57da,	// (0x0002aca9) grid_vkb_keypad_pane

0x5800,	// (0x0002accf) fep_vkb_bottom_pane_g1_ParamLimits

0x5800,	// (0x0002accf) fep_vkb_bottom_pane_g1

0x5829,	// (0x0002acf8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5829,	// (0x0002acf8) grid_vkb_keypad_bottom_left_pane

0x583e,	// (0x0002ad0d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x583e,	// (0x0002ad0d) grid_vkb_keypad_bottom_right_pane

0x5853,	// (0x0002ad22) fep_vkb_top_text_pane_g1

0xc6a1,	// (0x00031b70) fep_vkb_top_text_pane_t1

0xc6b3,	// (0x00031b82) cell_vkb_side_pane_ParamLimits

0xc6b3,	// (0x00031b82) cell_vkb_side_pane

0x5484,	// (0x0002a953) cell_vkb_side_pane_g1

0x58c2,	// (0x0002ad91) cell_vkb_keypad_pane_ParamLimits

0x58c2,	// (0x0002ad91) cell_vkb_keypad_pane

0x594f,	// (0x0002ae1e) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0003502e) bg_popup_fep_shadow_pane_g

0x5484,	// (0x0002a953) cell_hwr_side_pane_g1

0x5484,	// (0x0002a953) cell_hwr_side_pane_g2

0x5959,	// (0x0002ae28) cell_vkb_keypad_pane_t1

0xc6c9,	// (0x00031b98) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc6c9,	// (0x00031b98) cell_vkb_keypad_bottom_left_pane

0xc6de,	// (0x00031bad) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc6de,	// (0x00031bad) cell_vkb_keypad_bottom_right_pane

0x5484,	// (0x0002a953) cell_vkb_keypad_bottom_left_pane_g1

0x5484,	// (0x0002a953) cell_vkb_keypad_bottom_right_pane_g1

0x59bd,	// (0x0002ae8c) cell_vkb_keypad_number_pane_ParamLimits

0x59bd,	// (0x0002ae8c) cell_vkb_keypad_number_pane

0x59dc,	// (0x0002aeab) cell_vkb_keypad_number_pane_g1

0x59e6,	// (0x0002aeb5) cell_vkb_keypad_number_pane_g2

0x59ef,	// (0x0002aebe) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x00035020) cell_vkb_keypad_number_pane_g

0x5959,	// (0x0002ae28) cell_vkb_keypad_number_pane_t1

0x5a19,	// (0x0002aee8) fep_vkb_candidate_pane_g1

0x0001,

0xfb4c,	// (0x0003501b) cell_hwr_side_pane_g

0x5a32,	// (0x0002af01) cell_hwr_side_pane_t1

0x2286,	// (0x00027755) cell_hwr_side_pane_t1_copy1

0x56ff,	// (0x0002abce) cell_hwr_candidate_pane_g1

0x2294,	// (0x00027763) cell_hwr_candidate_pane_t1

0x5484,	// (0x0002a953) cell_vkb_candidate_pane_g2

0x5a76,	// (0x0002af45) cell_vkb_candidate_pane_t1

0x203e,	// (0x0002750d) bg_popup_fep_shadow_pane_ParamLimits

0x203e,	// (0x0002750d) bg_popup_fep_shadow_pane

0xc508,	// (0x000319d7) bg_fep_hwr_top_pane_g4

0x5509,	// (0x0002a9d8) bg_hwr_side_pane_g1_ParamLimits

0x5509,	// (0x0002a9d8) bg_hwr_side_pane_g1

0xc52e,	// (0x000319fd) cell_hwr_side_pane_ParamLimits

0xc52e,	// (0x000319fd) cell_hwr_side_pane

0x2197,	// (0x00027666) fep_hwr_write_pane_g1_ParamLimits

0x2197,	// (0x00027666) fep_hwr_write_pane_g1

0x21a4,	// (0x00027673) fep_hwr_write_pane_g2_ParamLimits

0x21a4,	// (0x00027673) fep_hwr_write_pane_g2

0x21b1,	// (0x00027680) fep_hwr_write_pane_g3_ParamLimits

0x21b1,	// (0x00027680) fep_hwr_write_pane_g3

0xc54e,	// (0x00031a1d) fep_hwr_write_pane_g4_ParamLimits

0xc54e,	// (0x00031a1d) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x00034fed) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x00034fed) fep_hwr_write_pane_g

0xc508,	// (0x000319d7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xc508,	// (0x000319d7) bg_fep_hwr_candidate_pane_g2

0x21d4,	// (0x000276a3) cell_hwr_candidate_pane_ParamLimits

0x21d4,	// (0x000276a3) cell_hwr_candidate_pane

0x2226,	// (0x000276f5) fep_hwr_candidate_pane_g1_ParamLimits

0x5569,	// (0x0002aa38) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5569,	// (0x0002aa38) bg_popup_fep_shadow_pane_cp2

0x56ff,	// (0x0002abce) fep_vkb_top_pane_g4_ParamLimits

0x56ff,	// (0x0002abce) fep_vkb_top_pane_g4

0x5745,	// (0x0002ac14) fep_vkb_side_pane_g2_ParamLimits

0x5745,	// (0x0002ac14) fep_vkb_side_pane_g2

0x9c55,	// (0x0002f124) list_setting_pane_t4_ParamLimits

0x9c55,	// (0x0002f124) list_setting_pane_t4

0x9cf1,	// (0x0002f1c0) list_setting_number_pane_t5_ParamLimits

0x9cf1,	// (0x0002f1c0) list_setting_number_pane_t5

0xabb8,	// (0x00030087) list_double_heading_pane_cp2_ParamLimits

0xabb8,	// (0x00030087) list_double_heading_pane_cp2

0xd25e,	// (0x0003272d) list_double_heading_pane_g1_cp2_ParamLimits

0xd25e,	// (0x0003272d) list_double_heading_pane_g1_cp2

0xd26a,	// (0x00032739) list_double_heading_pane_g2_cp2_ParamLimits

0xd26a,	// (0x00032739) list_double_heading_pane_g2_cp2

0x5a84,	// (0x0002af53) list_double_heading_pane_t1_cp2_ParamLimits

0x5a84,	// (0x0002af53) list_double_heading_pane_t1_cp2

0x5a9a,	// (0x0002af69) list_double_heading_pane_t2_cp2_ParamLimits

0x5a9a,	// (0x0002af69) list_double_heading_pane_t2_cp2

0xa193,	// (0x0002f662) aid_value_unit2

0xf44a,	// (0x00034919) popup_preview_fixed_window

0xa79e,	// (0x0002fc6d) bg_popup_preview_window_pane_cp02

0x5aac,	// (0x0002af7b) list_preview_fixed_pane

0x5af2,	// (0x0002afc1) list_empty_pane_fp_ParamLimits

0x5af2,	// (0x0002afc1) list_empty_pane_fp

0x5af2,	// (0x0002afc1) list_single_cale_day_pane_fp_ParamLimits

0x5af2,	// (0x0002afc1) list_single_cale_day_pane_fp

0x5af2,	// (0x0002afc1) list_single_graphic_heading_pane_fp_ParamLimits

0x5af2,	// (0x0002afc1) list_single_graphic_heading_pane_fp

0x5af2,	// (0x0002afc1) list_single_graphic_pane_fp_ParamLimits

0x5af2,	// (0x0002afc1) list_single_graphic_pane_fp

0x5af2,	// (0x0002afc1) list_single_heading_pane_fp_ParamLimits

0x5af2,	// (0x0002afc1) list_single_heading_pane_fp

0x5af2,	// (0x0002afc1) list_single_pane_fp_ParamLimits

0x5af2,	// (0x0002afc1) list_single_pane_fp

0x5b0b,	// (0x0002afda) list_single_pane_fp_g1_ParamLimits

0x5b0b,	// (0x0002afda) list_single_pane_fp_g1

0xf042,	// (0x00034511) list_single_pane_fp_g2_ParamLimits

0xf042,	// (0x00034511) list_single_pane_fp_g2

0xf04e,	// (0x0003451d) list_single_pane_fp_g3_ParamLimits

0xf04e,	// (0x0003451d) list_single_pane_fp_g3

0x5b17,	// (0x0002afe6) list_single_pane_fp_g4_ParamLimits

0x5b17,	// (0x0002afe6) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x0003504f) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x0003504f) list_single_pane_fp_g

0xf062,	// (0x00034531) list_single_pane_fp_t1_ParamLimits

0xf062,	// (0x00034531) list_single_pane_fp_t1

0xf079,	// (0x00034548) list_single_graphic_pane_fp_g1_ParamLimits

0xf079,	// (0x00034548) list_single_graphic_pane_fp_g1

0x5b0b,	// (0x0002afda) list_single_graphic_pane_fp_g2_ParamLimits

0x5b0b,	// (0x0002afda) list_single_graphic_pane_fp_g2

0xf042,	// (0x00034511) list_single_graphic_pane_fp_g3_ParamLimits

0xf042,	// (0x00034511) list_single_graphic_pane_fp_g3

0xf04e,	// (0x0003451d) list_single_graphic_pane_fp_g4_ParamLimits

0xf04e,	// (0x0003451d) list_single_graphic_pane_fp_g4

0x5b17,	// (0x0002afe6) list_single_graphic_pane_fp_g5_ParamLimits

0x5b17,	// (0x0002afe6) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x00035058) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x00035058) list_single_graphic_pane_fp_g

0xf085,	// (0x00034554) list_single_graphic_pane_fp_t1_ParamLimits

0xf085,	// (0x00034554) list_single_graphic_pane_fp_t1

0xf079,	// (0x00034548) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf079,	// (0x00034548) list_single_graphic_heading_pane_fp_g1

0x5b0b,	// (0x0002afda) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5b0b,	// (0x0002afda) list_single_graphic_heading_pane_fp_g2

0xf042,	// (0x00034511) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf042,	// (0x00034511) list_single_graphic_heading_pane_fp_g3

0xf04e,	// (0x0003451d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf04e,	// (0x0003451d) list_single_graphic_heading_pane_fp_g4

0x5b17,	// (0x0002afe6) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5b17,	// (0x0002afe6) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x00035058) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x00035058) list_single_graphic_heading_pane_fp_g

0xf09b,	// (0x0003456a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf09b,	// (0x0003456a) list_single_graphic_heading_pane_fp_t1

0xf0b1,	// (0x00034580) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf0b1,	// (0x00034580) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x00035063) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x00035063) list_single_graphic_heading_pane_fp_t

0xf0c3,	// (0x00034592) list_single_cale_day_pane_fp_g1_ParamLimits

0xf0c3,	// (0x00034592) list_single_cale_day_pane_fp_g1

0x5b23,	// (0x0002aff2) list_single_cale_day_pane_fp_g2_ParamLimits

0x5b23,	// (0x0002aff2) list_single_cale_day_pane_fp_g2

0xf0fb,	// (0x000345ca) list_single_cale_day_pane_fp_g3_ParamLimits

0xf0fb,	// (0x000345ca) list_single_cale_day_pane_fp_g3

0xf2e8,	// (0x000347b7) list_single_cale_day_pane_fp_g4_ParamLimits

0xf2e8,	// (0x000347b7) list_single_cale_day_pane_fp_g4

0xf30c,	// (0x000347db) list_single_cale_day_pane_fp_g5_ParamLimits

0xf30c,	// (0x000347db) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x00035068) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x00035068) list_single_cale_day_pane_fp_g

0xf330,	// (0x000347ff) list_single_cale_day_pane_fp_t1_ParamLimits

0xf330,	// (0x000347ff) list_single_cale_day_pane_fp_t1

0xf356,	// (0x00034825) list_single_cale_day_pane_fp_t2_ParamLimits

0xf356,	// (0x00034825) list_single_cale_day_pane_fp_t2

0xf36f,	// (0x0003483e) list_single_cale_day_pane_fp_t3_ParamLimits

0xf36f,	// (0x0003483e) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x00035073) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x00035073) list_single_cale_day_pane_fp_t

0x5b0b,	// (0x0002afda) list_empty_pane_fp_g1_ParamLimits

0x5b0b,	// (0x0002afda) list_empty_pane_fp_g1

0xf388,	// (0x00034857) list_empty_pane_fp_t1

0xf396,	// (0x00034865) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x0003507a) list_empty_pane_fp_t

0x5b0b,	// (0x0002afda) list_single_heading_pane_fp_g1_ParamLimits

0x5b0b,	// (0x0002afda) list_single_heading_pane_fp_g1

0xf042,	// (0x00034511) list_single_heading_pane_fp_g2_ParamLimits

0xf042,	// (0x00034511) list_single_heading_pane_fp_g2

0xf04e,	// (0x0003451d) list_single_heading_pane_fp_g3_ParamLimits

0xf04e,	// (0x0003451d) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x0003507f) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0003507f) list_single_heading_pane_fp_g

0xf3a4,	// (0x00034873) list_single_heading_pane_fp_t1_ParamLimits

0xf3a4,	// (0x00034873) list_single_heading_pane_fp_t1

0xf3b6,	// (0x00034885) list_single_heading_pane_fp_t2_ParamLimits

0xf3b6,	// (0x00034885) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x00035086) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x00035086) list_single_heading_pane_fp_t

0xd3b6,	// (0x00032885) aid_size_cell_fast

0xa71e,	// (0x0002fbed) soft_indicator_pane_cp1_t1

0xd3f3,	// (0x000328c2) cell_app_pane_cp2_ParamLimits

0xd3f3,	// (0x000328c2) cell_app_pane_cp2

0x2060,	// (0x0002752f) fep_hwr_candidate_drop_down_list_pane

0xc563,	// (0x00031a32) fep_hwr_candidate_pane_g3_ParamLimits

0xc563,	// (0x00031a32) fep_hwr_candidate_pane_g3

0xc570,	// (0x00031a3f) fep_hwr_candidate_pane_g4_ParamLimits

0xc570,	// (0x00031a3f) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x00034ffa) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x00034ffa) fep_hwr_candidate_pane_g

0x55f9,	// (0x0002aac8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x55f9,	// (0x0002aac8) fep_vkb_candidate_drop_down_list_pane

0x5a21,	// (0x0002aef0) fep_vkb_candidate_pane_g3

0x5a29,	// (0x0002aef8) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x00035027) fep_vkb_candidate_pane_g

0x56ff,	// (0x0002abce) cell_hwr_candidate_pane_g1_ParamLimits

0x5b71,	// (0x0002b040) cell_hwr_candidate_pane_g3_ParamLimits

0x5b71,	// (0x0002b040) cell_hwr_candidate_pane_g3

0x5b92,	// (0x0002b061) cell_hwr_candidate_pane_g4_ParamLimits

0x5b92,	// (0x0002b061) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x00035041) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x00035041) cell_hwr_candidate_pane_g

0x5a40,	// (0x0002af0f) cell_vkb_candidate_pane_g3_ParamLimits

0x5a40,	// (0x0002af0f) cell_vkb_candidate_pane_g3

0x5a5b,	// (0x0002af2a) cell_vkb_candidate_pane_g4_ParamLimits

0x5a5b,	// (0x0002af2a) cell_vkb_candidate_pane_g4

0x5bb3,	// (0x0002b082) cell_app_pane_cp2_g1_ParamLimits

0x5bb3,	// (0x0002b082) cell_app_pane_cp2_g1

0x5bd1,	// (0x0002b0a0) cell_app_pane_cp2_g2_ParamLimits

0x5bd1,	// (0x0002b0a0) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x0003508b) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x0003508b) cell_app_pane_cp2_g

0x5bdd,	// (0x0002b0ac) cell_app_pane_cp2_t1_ParamLimits

0x5bdd,	// (0x0002b0ac) cell_app_pane_cp2_t1

0xd244,	// (0x00032713) grid_highlight_pane_cp1_ParamLimits

0xd244,	// (0x00032713) grid_highlight_pane_cp1

0x22b2,	// (0x00027781) cell_hwr_candidate_pane_cp1_ParamLimits

0x22b2,	// (0x00027781) cell_hwr_candidate_pane_cp1

0x56ff,	// (0x0002abce) fep_hwr_candidate_drop_down_list_pane_g1

0x5bef,	// (0x0002b0be) fep_hwr_candidate_drop_down_list_pane_g2

0x5bfc,	// (0x0002b0cb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x00035090) fep_hwr_candidate_drop_down_list_pane_g

0x22d6,	// (0x000277a5) fep_hwr_candidate_drop_down_list_scroll_pane

0x22df,	// (0x000277ae) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x22df,	// (0x000277ae) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x22ec,	// (0x000277bb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x22ec,	// (0x000277bb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x22f9,	// (0x000277c8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x22f9,	// (0x000277c8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5a40,	// (0x0002af0f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5a40,	// (0x0002af0f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5a5b,	// (0x0002af2a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5a5b,	// (0x0002af2a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2306,	// (0x000277d5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2306,	// (0x000277d5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2321,	// (0x000277f0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2321,	// (0x000277f0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x233c,	// (0x0002780b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x233c,	// (0x0002780b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x00035097) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x00035097) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5c09,	// (0x0002b0d8) cell_vkb_candidate_pane_cp1_ParamLimits

0x5c09,	// (0x0002b0d8) cell_vkb_candidate_pane_cp1

0x56ff,	// (0x0002abce) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x56ff,	// (0x0002abce) fep_vkb_candidate_drop_down_list_pane_g1

0x5bef,	// (0x0002b0be) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5bef,	// (0x0002b0be) fep_vkb_candidate_drop_down_list_pane_g2

0x5bfc,	// (0x0002b0cb) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5bfc,	// (0x0002b0cb) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x00035090) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc1,	// (0x00035090) fep_vkb_candidate_drop_down_list_pane_g

0x5c2f,	// (0x0002b0fe) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5c2f,	// (0x0002b0fe) fep_vkb_candidate_drop_down_list_scroll_pane

0x5c3c,	// (0x0002b10b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5c3c,	// (0x0002b10b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5c49,	// (0x0002b118) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5c49,	// (0x0002b118) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5c55,	// (0x0002b124) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5c55,	// (0x0002b124) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5b71,	// (0x0002b040) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5b71,	// (0x0002b040) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5b92,	// (0x0002b061) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5b92,	// (0x0002b061) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5c61,	// (0x0002b130) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5c61,	// (0x0002b130) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5c82,	// (0x0002b151) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5c82,	// (0x0002b151) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5ca3,	// (0x0002b172) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5ca3,	// (0x0002b172) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x000350a8) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x000350a8) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa36e,	// (0x0002f83d) title_pane_g1_ParamLimits

0xa381,	// (0x0002f850) title_pane_g2_ParamLimits

0xf554,	// (0x00034a23) title_pane_g_ParamLimits

0x03c3,	// (0x00025892) aid_call2_pane

0x03cb,	// (0x0002589a) aid_call_pane

0x03d3,	// (0x000258a2) popup_clock_analogue_window_g1

0x03d3,	// (0x000258a2) popup_clock_analogue_window_g2

0x03db,	// (0x000258aa) popup_clock_analogue_window_g3

0x03e4,	// (0x000258b3) popup_clock_analogue_window_g4

0xa1b5,	// (0x0002f684) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00034bcd) popup_clock_analogue_window_g

0x03ec,	// (0x000258bb) popup_clock_analogue_window_t1

0x047c,	// (0x0002594b) clock_digital_number_pane_ParamLimits

0x047c,	// (0x0002594b) clock_digital_number_pane

0x0488,	// (0x00025957) clock_digital_number_pane_cp02_ParamLimits

0x0488,	// (0x00025957) clock_digital_number_pane_cp02

0x0494,	// (0x00025963) clock_digital_number_pane_cp03_ParamLimits

0x0494,	// (0x00025963) clock_digital_number_pane_cp03

0x04a0,	// (0x0002596f) clock_digital_number_pane_cp04_ParamLimits

0x04a0,	// (0x0002596f) clock_digital_number_pane_cp04

0x04ac,	// (0x0002597b) clock_digital_separator_pane_ParamLimits

0x04ac,	// (0x0002597b) clock_digital_separator_pane

0x04b8,	// (0x00025987) popup_clock_digital_window_t1_ParamLimits

0x04b8,	// (0x00025987) popup_clock_digital_window_t1

0xa1b5,	// (0x0002f684) clock_digital_number_pane_g1

0xa1b5,	// (0x0002f684) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x00034bd8) clock_digital_number_pane_g

0xa1b5,	// (0x0002f684) clock_digital_separator_pane_g1

0xa1b5,	// (0x0002f684) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x00034bd8) clock_digital_separator_pane_g

0xb6c9,	// (0x00030b98) aid_fill_nsta_ParamLimits

0xb7ff,	// (0x00030cce) indicator_nsta_pane_ParamLimits

0x1a8e,	// (0x00026f5d) popup_clock_analogue_window

0x1a8e,	// (0x00026f5d) popup_clock_digital_window

0xd71d,	// (0x00032bec) grid_indicator_nsta_pane_ParamLimits

0x4eab,	// (0x0002a37a) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x00034f7a) clock_nsta_pane_t

0x032c,	// (0x000257fb) aid_size_max_handle

0xab2b,	// (0x0002fffa) aid_size_min_handle

0x0c09,	// (0x000260d8) editor_scroll_pane

0x5cbe,	// (0x0002b18d) ex_editor_pane

0xd37c,	// (0x0003284b) scroll_pane_cp13

0xd1e3,	// (0x000326b2) scroll_pane_cp14

0x0421,	// (0x000258f0) scroll_pane_cp36

0xabcb,	// (0x0003009a) list_single_graphic_hl_pane_cp2_ParamLimits

0xabcb,	// (0x0003009a) list_single_graphic_hl_pane_cp2

0xc1c7,	// (0x00031696) list_single_graphic_hl_pane_ParamLimits

0xc1c7,	// (0x00031696) list_single_graphic_hl_pane

0xf3cc,	// (0x0003489b) aid_size_min_hl_cp1

0x5cc6,	// (0x0002b195) list_highlight_pane_cp34_ParamLimits

0x5cc6,	// (0x0002b195) list_highlight_pane_cp34

0x5cd7,	// (0x0002b1a6) list_single_graphic_hl_pane_g1_ParamLimits

0x5cd7,	// (0x0002b1a6) list_single_graphic_hl_pane_g1

0x9faa,	// (0x0002f479) list_single_graphic_hl_pane_g2_ParamLimits

0x9faa,	// (0x0002f479) list_single_graphic_hl_pane_g2

0x9faa,	// (0x0002f479) list_single_graphic_hl_pane_g3_ParamLimits

0x9faa,	// (0x0002f479) list_single_graphic_hl_pane_g3

0xf123,	// (0x000345f2) list_single_graphic_hl_pane_g4_ParamLimits

0xf123,	// (0x000345f2) list_single_graphic_hl_pane_g4

0x9fb6,	// (0x0002f485) list_single_graphic_hl_pane_g5_ParamLimits

0x9fb6,	// (0x0002f485) list_single_graphic_hl_pane_g5

0x0004,

0xfbea,	// (0x000350b9) list_single_graphic_hl_pane_g_ParamLimits

0xfbea,	// (0x000350b9) list_single_graphic_hl_pane_g

0x9fca,	// (0x0002f499) list_single_graphic_hl_pane_t1_ParamLimits

0x9fca,	// (0x0002f499) list_single_graphic_hl_pane_t1

0x5ce4,	// (0x0002b1b3) aid_size_min_hl_cp2

0x5ced,	// (0x0002b1bc) list_highlight_pane_cp34_cp2_ParamLimits

0x5ced,	// (0x0002b1bc) list_highlight_pane_cp34_cp2

0x5cd7,	// (0x0002b1a6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5cd7,	// (0x0002b1a6) list_single_graphic_hl_pane_g1_cp2

0x5cfa,	// (0x0002b1c9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5cfa,	// (0x0002b1c9) list_single_graphic_hl_pane_g2_cp2

0xc6f9,	// (0x00031bc8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc6f9,	// (0x00031bc8) list_single_graphic_hl_pane_g3_cp2

0xd72b,	// (0x00032bfa) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd72b,	// (0x00032bfa) list_single_graphic_hl_pane_g4_cp2

0x5d14,	// (0x0002b1e3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5d14,	// (0x0002b1e3) list_single_graphic_hl_pane_g5_cp2

0xae5a,	// (0x00030329) control_pane_g4_ParamLimits

0xae5a,	// (0x00030329) control_pane_g4

0x1176,	// (0x00026645) bg_popup_sub_pane_cp10_ParamLimits

0x548e,	// (0x0002a95d) list_choice_list_pane_ParamLimits

0x549d,	// (0x0002a96c) scroll_pane_cp23

0xa79e,	// (0x0002fc6d) bg_popup_preview_window_pane_cp02_ParamLimits

0x5aac,	// (0x0002af7b) list_preview_fixed_pane_ParamLimits

0x5ac2,	// (0x0002af91) list_preview_fixed_pane_cp_ParamLimits

0x5ac2,	// (0x0002af91) list_preview_fixed_pane_cp

0x5ace,	// (0x0002af9d) popup_preview_fixed_window_g1_ParamLimits

0x5ace,	// (0x0002af9d) popup_preview_fixed_window_g1

0x5ada,	// (0x0002afa9) popup_preview_fixed_window_g2_ParamLimits

0x5ada,	// (0x0002afa9) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x00035048) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x00035048) popup_preview_fixed_window_g

0x0215,	// (0x000256e4) aid_navi_side_left_pane_ParamLimits

0x022a,	// (0x000256f9) aid_navi_side_right_pane_ParamLimits

0x0242,	// (0x00025711) navi_icon_pane_stacon_ParamLimits

0x0256,	// (0x00025725) navi_navi_pane_stacon_ParamLimits

0x0242,	// (0x00025711) navi_text_pane_stacon_ParamLimits

0xa1ab,	// (0x0002f67a) main_text_info_pane

0x5d3e,	// (0x0002b20d) listscroll_text_info_pane

0x5d46,	// (0x0002b215) list_text_info_pane_ParamLimits

0x5d46,	// (0x0002b215) list_text_info_pane

0x5d55,	// (0x0002b224) scroll_pane_cp24_ParamLimits

0x5d55,	// (0x0002b224) scroll_pane_cp24

0xc707,	// (0x00031bd6) list_text_info_pane_t1_ParamLimits

0xc707,	// (0x00031bd6) list_text_info_pane_t1

0xafc2,	// (0x00030491) popup_fast_swap2_window_ParamLimits

0xafc2,	// (0x00030491) popup_fast_swap2_window

0x5d98,	// (0x0002b267) aid_size_cell_fast2

0xa1ab,	// (0x0002f67a) bg_popup_window_pane_cp17

0x3230,	// (0x000286ff) heading_pane_cp2

0xcf68,	// (0x00032437) listscroll_fast2_pane

0x5da2,	// (0x0002b271) grid_fast2_pane

0x5dac,	// (0x0002b27b) listscroll_fast2_pane_g1

0x5db6,	// (0x0002b285) listscroll_fast2_pane_g2

0x0001,

0xfbf5,	// (0x000350c4) listscroll_fast2_pane_g

0xd37c,	// (0x0003284b) scroll_pane_cp26

0x5dc0,	// (0x0002b28f) cell_fast2_pane_ParamLimits

0x5dc0,	// (0x0002b28f) cell_fast2_pane

0x5dd7,	// (0x0002b2a6) cell_fast2_pane_g1

0x5de0,	// (0x0002b2af) cell_fast2_pane_g2

0x5de9,	// (0x0002b2b8) cell_fast2_pane_g3

0x0002,

0xfbfa,	// (0x000350c9) cell_fast2_pane_g

0xcfaa,	// (0x00032479) grid_highlight_pane_cp9

0xcfbf,	// (0x0003248e) main_eswt_pane_ParamLimits

0xcfbf,	// (0x0003248e) main_eswt_pane

0x5d6a,	// (0x0002b239) list_single_text_info_pane

0x5df1,	// (0x0002b2c0) eswt_ctrl_button_pane

0x5df1,	// (0x0002b2c0) eswt_ctrl_canvas_pane

0x5df9,	// (0x0002b2c8) eswt_ctrl_combo_pane

0x5df1,	// (0x0002b2c0) eswt_ctrl_default_pane

0x5df1,	// (0x0002b2c0) eswt_ctrl_label_pane

0x5e01,	// (0x0002b2d0) eswt_ctrl_wait_pane

0x5e09,	// (0x0002b2d8) eswt_shell_pane

0xa1ab,	// (0x0002f67a) listscroll_eswt_app_pane

0x5e29,	// (0x0002b2f8) popup_eswt_tasktip_window_ParamLimits

0x5e29,	// (0x0002b2f8) popup_eswt_tasktip_window

0x2e70,	// (0x0002833f) bg_popup_window_pane_cp18

0x5e3a,	// (0x0002b309) eswt_control_pane_g1_ParamLimits

0x5e3a,	// (0x0002b309) eswt_control_pane_g1

0x5e47,	// (0x0002b316) eswt_control_pane_g2_ParamLimits

0x5e47,	// (0x0002b316) eswt_control_pane_g2

0x5e54,	// (0x0002b323) eswt_control_pane_g3_ParamLimits

0x5e54,	// (0x0002b323) eswt_control_pane_g3

0x5e61,	// (0x0002b330) eswt_control_pane_g4_ParamLimits

0x5e61,	// (0x0002b330) eswt_control_pane_g4

0x0003,

0xfc01,	// (0x000350d0) eswt_control_pane_g_ParamLimits

0xfc01,	// (0x000350d0) eswt_control_pane_g

0xd244,	// (0x00032713) bg_button_pane_ParamLimits

0xd244,	// (0x00032713) bg_button_pane

0xcfbf,	// (0x0003248e) common_borders_pane_copy2_ParamLimits

0xcfbf,	// (0x0003248e) common_borders_pane_copy2

0x5e6e,	// (0x0002b33d) control_button_pane_g1_ParamLimits

0x5e6e,	// (0x0002b33d) control_button_pane_g1

0x5e7a,	// (0x0002b349) control_button_pane_g2_ParamLimits

0x5e7a,	// (0x0002b349) control_button_pane_g2

0x5e86,	// (0x0002b355) control_button_pane_g3_ParamLimits

0x5e86,	// (0x0002b355) control_button_pane_g3

0x0002,

0xfc0a,	// (0x000350d9) control_button_pane_g_ParamLimits

0xfc0a,	// (0x000350d9) control_button_pane_g

0x5e9a,	// (0x0002b369) control_button_pane_t1

0x5ea8,	// (0x0002b377) control_button_pane_t2

0x0001,

0xfc11,	// (0x000350e0) control_button_pane_t

0x2d74,	// (0x00028243) bg_button_pane_g1

0x2d7c,	// (0x0002824b) bg_button_pane_g2

0x2d84,	// (0x00028253) bg_button_pane_g3

0x2d8c,	// (0x0002825b) bg_button_pane_g4

0x2d94,	// (0x00028263) bg_button_pane_g5

0x2d9c,	// (0x0002826b) bg_button_pane_g6

0x2da4,	// (0x00028273) bg_button_pane_g7

0x2dac,	// (0x0002827b) bg_button_pane_g8

0x2db4,	// (0x00028283) bg_button_pane_g9

0x0008,

0xf867,	// (0x00034d36) bg_button_pane_g

0x5449,	// (0x0002a918) common_borders_pane_ParamLimits

0x5449,	// (0x0002a918) common_borders_pane

0x5e3a,	// (0x0002b309) eswt_control_pane_g1_copy1_ParamLimits

0x5e3a,	// (0x0002b309) eswt_control_pane_g1_copy1

0x5e47,	// (0x0002b316) eswt_control_pane_g2_copy1_ParamLimits

0x5e47,	// (0x0002b316) eswt_control_pane_g2_copy1

0x5e54,	// (0x0002b323) eswt_control_pane_g3_copy1_ParamLimits

0x5e54,	// (0x0002b323) eswt_control_pane_g3_copy1

0x5e61,	// (0x0002b330) eswt_control_pane_g4_copy1_ParamLimits

0x5e61,	// (0x0002b330) eswt_control_pane_g4_copy1

0x5484,	// (0x0002a953) bg_eswt_ctrl_canvas_pane_g1

0x5449,	// (0x0002a918) common_borders_pane_cp2_ParamLimits

0x5449,	// (0x0002a918) common_borders_pane_cp2

0x5449,	// (0x0002a918) common_borders_pane_cp3_ParamLimits

0x5449,	// (0x0002a918) common_borders_pane_cp3

0x5eb6,	// (0x0002b385) separator_horizontal_pane

0x5ebe,	// (0x0002b38d) separator_vertical_pane

0x5e3a,	// (0x0002b309) eswt_control_pane_g1_copy2_ParamLimits

0x5e3a,	// (0x0002b309) eswt_control_pane_g1_copy2

0x5e47,	// (0x0002b316) eswt_control_pane_g2_copy2_ParamLimits

0x5e47,	// (0x0002b316) eswt_control_pane_g2_copy2

0x5e54,	// (0x0002b323) eswt_control_pane_g3_copy2_ParamLimits

0x5e54,	// (0x0002b323) eswt_control_pane_g3_copy2

0x5e61,	// (0x0002b330) eswt_control_pane_g4_copy2_ParamLimits

0x5e61,	// (0x0002b330) eswt_control_pane_g4_copy2

0xa1ab,	// (0x0002f67a) common_borders_pane_cp4

0x5ec7,	// (0x0002b396) separator_horizontal_pane_g1

0x5ed0,	// (0x0002b39f) separator_horizontal_pane_g2

0x5ed9,	// (0x0002b3a8) separator_horizontal_pane_g3

0x0002,

0xfc16,	// (0x000350e5) separator_horizontal_pane_g

0x5e3a,	// (0x0002b309) eswt_control_pane_g1_copy3_ParamLimits

0x5e3a,	// (0x0002b309) eswt_control_pane_g1_copy3

0x5e47,	// (0x0002b316) eswt_control_pane_g2_copy3_ParamLimits

0x5e47,	// (0x0002b316) eswt_control_pane_g2_copy3

0x5e54,	// (0x0002b323) eswt_control_pane_g3_copy3_ParamLimits

0x5e54,	// (0x0002b323) eswt_control_pane_g3_copy3

0x5e61,	// (0x0002b330) eswt_control_pane_g4_copy3_ParamLimits

0x5e61,	// (0x0002b330) eswt_control_pane_g4_copy3

0xa1ab,	// (0x0002f67a) common_borders_pane_cp5

0x5ee2,	// (0x0002b3b1) separator_vertical_pane_g1

0x5eeb,	// (0x0002b3ba) separator_vertical_pane_g2

0x5ef4,	// (0x0002b3c3) separator_vertical_pane_g3

0x0002,

0xfc1d,	// (0x000350ec) separator_vertical_pane_g

0x5e3a,	// (0x0002b309) eswt_control_pane_g1_copy4_ParamLimits

0x5e3a,	// (0x0002b309) eswt_control_pane_g1_copy4

0x5e47,	// (0x0002b316) eswt_control_pane_g2_copy4_ParamLimits

0x5e47,	// (0x0002b316) eswt_control_pane_g2_copy4

0x5e54,	// (0x0002b323) eswt_control_pane_g3_copy4_ParamLimits

0x5e54,	// (0x0002b323) eswt_control_pane_g3_copy4

0x5e61,	// (0x0002b330) eswt_control_pane_g4_copy4_ParamLimits

0x5e61,	// (0x0002b330) eswt_control_pane_g4_copy4

0xc729,	// (0x00031bf8) eswt_ctrl_combo_button_pane

0xc731,	// (0x00031c00) eswt_ctrl_input_pane

0xc739,	// (0x00031c08) popup_choice_list_window_cp70

0xc741,	// (0x00031c10) eswt_ctrl_input_pane_t1

0xa1ab,	// (0x0002f67a) input_focus_pane_cp70

0x5449,	// (0x0002a918) bg_button_pane_cp70_ParamLimits

0x5449,	// (0x0002a918) bg_button_pane_cp70

0xc74f,	// (0x00031c1e) eswt_ctrl_combo_button_pane_g1

0x5f2b,	// (0x0002b3fa) wait_bar_pane_cp70

0x2e70,	// (0x0002833f) bg_popup_window_pane_cp70_ParamLimits

0x2e70,	// (0x0002833f) bg_popup_window_pane_cp70

0x5f33,	// (0x0002b402) popup_eswt_tasktip_window_t1

0x5f49,	// (0x0002b418) wait_bar_pane_cp71_ParamLimits

0x5f49,	// (0x0002b418) wait_bar_pane_cp71

0x5f55,	// (0x0002b424) grid_eswt_app_pane

0xd5c5,	// (0x00032a94) scroll_pane_cp70

0xc757,	// (0x00031c26) cell_eswt_app_pane_ParamLimits

0xc757,	// (0x00031c26) cell_eswt_app_pane

0xc789,	// (0x00031c58) cell_eswt_app_pane_g1_ParamLimits

0xc789,	// (0x00031c58) cell_eswt_app_pane_g1

0xc7b8,	// (0x00031c87) cell_eswt_app_pane_g2_ParamLimits

0xc7b8,	// (0x00031c87) cell_eswt_app_pane_g2

0x0001,

0xfc24,	// (0x000350f3) cell_eswt_app_pane_g_ParamLimits

0xfc24,	// (0x000350f3) cell_eswt_app_pane_g

0xc7e1,	// (0x00031cb0) cell_eswt_app_pane_t1_ParamLimits

0xc7e1,	// (0x00031cb0) cell_eswt_app_pane_t1

0x601a,	// (0x0002b4e9) grid_highlight_pane_cp70_ParamLimits

0x601a,	// (0x0002b4e9) grid_highlight_pane_cp70

0x0ada,	// (0x00025fa9) set_content_pane_g1

0x0f56,	// (0x00026425) status_small_volume_pane

0x2357,	// (0x00027826) status_small_volume_pane_g1

0x235f,	// (0x0002782e) volume_small2_pane

0x2368,	// (0x00027837) volume_small2_pane_g1

0x2371,	// (0x00027840) volume_small2_pane_g2

0x237a,	// (0x00027849) volume_small2_pane_g3

0x2383,	// (0x00027852) volume_small2_pane_g4

0x238c,	// (0x0002785b) volume_small2_pane_g5

0x2395,	// (0x00027864) volume_small2_pane_g6

0x239e,	// (0x0002786d) volume_small2_pane_g7

0x23a7,	// (0x00027876) volume_small2_pane_g8

0x23b0,	// (0x0002787f) volume_small2_pane_g9

0x23b9,	// (0x00027888) volume_small2_pane_g10

0x0009,

0xfc29,	// (0x000350f8) volume_small2_pane_g

0x5853,	// (0x0002ad22) fep_vkb_top_text_pane_g1_ParamLimits

0xc6a1,	// (0x00031b70) fep_vkb_top_text_pane_t1_ParamLimits

0x5ae6,	// (0x0002afb5) popup_preview_fixed_window_g3_ParamLimits

0x5ae6,	// (0x0002afb5) popup_preview_fixed_window_g3

0xb65c,	// (0x00030b2b) popup_toolbar_trans_pane

0xc017,	// (0x000314e6) aid_height_set_list_ParamLimits

0x41df,	// (0x000296ae) aid_size_parent_ParamLimits

0x1176,	// (0x00026645) list_highlight_pane_cp2_ParamLimits

0x0ada,	// (0x00025fa9) set_content_pane_g1_ParamLimits

0xc1db,	// (0x000316aa) list_single_image_pane_ParamLimits

0xc1db,	// (0x000316aa) list_single_image_pane

0xc813,	// (0x00031ce2) aid_size_cell_image_ParamLimits

0xc813,	// (0x00031ce2) aid_size_cell_image

0xc820,	// (0x00031cef) grid_single_image_pane_ParamLimits

0xc820,	// (0x00031cef) grid_single_image_pane

0xd25e,	// (0x0003272d) list_single_image_pane_g1_ParamLimits

0xd25e,	// (0x0003272d) list_single_image_pane_g1

0xd26a,	// (0x00032739) list_single_image_pane_g2_ParamLimits

0xd26a,	// (0x00032739) list_single_image_pane_g2

0x0001,

0xfc3e,	// (0x0003510d) list_single_image_pane_g_ParamLimits

0xfc3e,	// (0x0003510d) list_single_image_pane_g

0x6041,	// (0x0002b510) list_single_image_pane_t1_ParamLimits

0x6041,	// (0x0002b510) list_single_image_pane_t1

0xc82e,	// (0x00031cfd) cell_image_list_pane_ParamLimits

0xc82e,	// (0x00031cfd) cell_image_list_pane

0xc842,	// (0x00031d11) cell_image_list_pane_g1

0xc84b,	// (0x00031d1a) cell_image_list_pane_g2

0x0001,

0xfc43,	// (0x00035112) cell_image_list_pane_g

0x607f,	// (0x0002b54e) aid_size_cell_tb_trans_pane

0xd244,	// (0x00032713) bg_tb_trans_pane

0x6091,	// (0x0002b560) grid_tb_trans_pane

0x2d74,	// (0x00028243) bg_tb_trans_pane_g1

0x2d7c,	// (0x0002824b) bg_tb_trans_pane_g2

0x2d84,	// (0x00028253) bg_tb_trans_pane_g3

0x2d8c,	// (0x0002825b) bg_tb_trans_pane_g4

0x2d94,	// (0x00028263) bg_tb_trans_pane_g5

0x2dac,	// (0x0002827b) bg_tb_trans_pane_g6

0x2db4,	// (0x00028283) bg_tb_trans_pane_g7

0x2d9c,	// (0x0002826b) bg_tb_trans_pane_g8

0x2da4,	// (0x00028273) bg_tb_trans_pane_g9

0x0008,

0xfc48,	// (0x00035117) bg_tb_trans_pane_g

0x60a5,	// (0x0002b574) cell_toolbar_trans_pane_ParamLimits

0x60a5,	// (0x0002b574) cell_toolbar_trans_pane

0x5484,	// (0x0002a953) cell_toolbar_trans_pane_g1

0xc411,	// (0x000318e0) list_form2_midp_pane_t1

0xc41f,	// (0x000318ee) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x00034fc0) list_form2_midp_pane_t

0x50c4,	// (0x0002a593) scroll_pane_cp51_ParamLimits

0x528b,	// (0x0002a75a) form2_midp_wait_pane_g1

0x5294,	// (0x0002a763) form2_midp_wait_pane_g2

0x529d,	// (0x0002a76c) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x00034fd5) form2_midp_wait_pane_g

0xa4b7,	// (0x0002f986) list_highlight_pane_cp21_ParamLimits

0x52e1,	// (0x0002a7b0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x52f0,	// (0x0002a7bf) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xedde,	// (0x000342ad) list_single_2graphic_im_pane_ParamLimits

0xedde,	// (0x000342ad) list_single_2graphic_im_pane

0xc854,	// (0x00031d23) list_single_2graphic_im_pane_g1_ParamLimits

0xc854,	// (0x00031d23) list_single_2graphic_im_pane_g1

0xc865,	// (0x00031d34) list_single_2graphic_im_pane_g2_ParamLimits

0xc865,	// (0x00031d34) list_single_2graphic_im_pane_g2

0xc871,	// (0x00031d40) list_single_2graphic_im_pane_g3_ParamLimits

0xc871,	// (0x00031d40) list_single_2graphic_im_pane_g3

0x0003,

0xfc5b,	// (0x0003512a) list_single_2graphic_im_pane_g_ParamLimits

0xfc5b,	// (0x0003512a) list_single_2graphic_im_pane_g

0xc885,	// (0x00031d54) list_single_2graphic_im_pane_t1_ParamLimits

0xc885,	// (0x00031d54) list_single_2graphic_im_pane_t1

0x5af2,	// (0x0002afc1) list_single_graphic_2heading_pane_fp_ParamLimits

0x5af2,	// (0x0002afc1) list_single_graphic_2heading_pane_fp

0xf079,	// (0x00034548) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf079,	// (0x00034548) list_single_graphic_2heading_pane_fp_g1

0x5b0b,	// (0x0002afda) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5b0b,	// (0x0002afda) list_single_graphic_2heading_pane_fp_g2

0xf042,	// (0x00034511) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf042,	// (0x00034511) list_single_graphic_2heading_pane_fp_g3

0xf04e,	// (0x0003451d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf04e,	// (0x0003451d) list_single_graphic_2heading_pane_fp_g4

0x5b17,	// (0x0002afe6) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5b17,	// (0x0002afe6) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x00035058) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x00035058) list_single_graphic_2heading_pane_fp_g

0xf3d5,	// (0x000348a4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf3d5,	// (0x000348a4) list_single_graphic_2heading_pane_fp_t1

0xf0b1,	// (0x00034580) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf0b1,	// (0x00034580) list_single_graphic_2heading_pane_fp_t2

0xf3eb,	// (0x000348ba) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf3eb,	// (0x000348ba) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc64,	// (0x00035133) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc64,	// (0x00035133) list_single_graphic_2heading_pane_fp_t

0x5515,	// (0x0002a9e4) fep_hwr_write_pane_g5_ParamLimits

0x5515,	// (0x0002a9e4) fep_hwr_write_pane_g5

0x5521,	// (0x0002a9f0) fep_hwr_write_pane_g6_ParamLimits

0x5521,	// (0x0002a9f0) fep_hwr_write_pane_g6

0x5e09,	// (0x0002b2d8) eswt_shell_pane_ParamLimits

0x2e70,	// (0x0002833f) bg_popup_window_pane_cp18_ParamLimits

0x4125,	// (0x000295f4) heading_pane_cp70

0x5f33,	// (0x0002b402) popup_eswt_tasktip_window_t1_ParamLimits

0xb726,	// (0x00030bf5) aid_touch_tab_arrow_left

0xb73a,	// (0x00030c09) aid_touch_tab_arrow_right

0xa399,	// (0x0002f868) title_pane_g3_ParamLimits

0xa399,	// (0x0002f868) title_pane_g3

0xd203,	// (0x000326d2) set_value_pane_g1

0xb65c,	// (0x00030b2b) popup_toolbar_trans_pane_ParamLimits

0x607f,	// (0x0002b54e) aid_size_cell_tb_trans_pane_ParamLimits

0xd244,	// (0x00032713) bg_tb_trans_pane_ParamLimits

0x6091,	// (0x0002b560) grid_tb_trans_pane_ParamLimits

0xa79e,	// (0x0002fc6d) cont_note_pane_ParamLimits

0xa79e,	// (0x0002fc6d) cont_note_pane

0xcfbf,	// (0x0003248e) cont_snote2_single_text_pane_ParamLimits

0xcfbf,	// (0x0003248e) cont_snote2_single_text_pane

0xcfbf,	// (0x0003248e) cont_snote2_single_graphic_pane_ParamLimits

0xcfbf,	// (0x0003248e) cont_snote2_single_graphic_pane

0x344c,	// (0x0002891b) cont_note_wait_pane_ParamLimits

0x344c,	// (0x0002891b) cont_note_wait_pane

0x344c,	// (0x0002891b) cont_note_image_pane_ParamLimits

0x344c,	// (0x0002891b) cont_note_image_pane

0x6139,	// (0x0002b608) popup_note2_window_g1_ParamLimits

0x6139,	// (0x0002b608) popup_note2_window_g1

0x616a,	// (0x0002b639) popup_note2_window_t1_ParamLimits

0x616a,	// (0x0002b639) popup_note2_window_t1

0x61af,	// (0x0002b67e) popup_note2_window_t2_ParamLimits

0x61af,	// (0x0002b67e) popup_note2_window_t2

0x61f4,	// (0x0002b6c3) popup_note2_window_t3_ParamLimits

0x61f4,	// (0x0002b6c3) popup_note2_window_t3

0x6239,	// (0x0002b708) popup_note2_window_t4_ParamLimits

0x6239,	// (0x0002b708) popup_note2_window_t4

0xa822,	// (0x0002fcf1) popup_note2_window_t5_ParamLimits

0xa822,	// (0x0002fcf1) popup_note2_window_t5

0x0004,

0xfc70,	// (0x0003513f) popup_note2_window_t_ParamLimits

0xfc70,	// (0x0003513f) popup_note2_window_t

0x6268,	// (0x0002b737) popup_note2_image_window_g1_ParamLimits

0x6268,	// (0x0002b737) popup_note2_image_window_g1

0x6274,	// (0x0002b743) popup_note2_image_window_g2_ParamLimits

0x6274,	// (0x0002b743) popup_note2_image_window_g2

0x0001,

0xfc7b,	// (0x0003514a) popup_note2_image_window_g_ParamLimits

0xfc7b,	// (0x0003514a) popup_note2_image_window_g

0x6286,	// (0x0002b755) popup_note2_image_window_t1_ParamLimits

0x6286,	// (0x0002b755) popup_note2_image_window_t1

0x629e,	// (0x0002b76d) popup_note2_image_window_t2_ParamLimits

0x629e,	// (0x0002b76d) popup_note2_image_window_t2

0x62b6,	// (0x0002b785) popup_note2_image_window_t3_ParamLimits

0x62b6,	// (0x0002b785) popup_note2_image_window_t3

0x0002,

0xfc80,	// (0x0003514f) popup_note2_image_window_t_ParamLimits

0xfc80,	// (0x0003514f) popup_note2_image_window_t

0x345a,	// (0x00028929) popup_note2_wait_window_g1_ParamLimits

0x345a,	// (0x00028929) popup_note2_wait_window_g1

0x62d2,	// (0x0002b7a1) popup_note2_wait_window_g2_ParamLimits

0x62d2,	// (0x0002b7a1) popup_note2_wait_window_g2

0x3472,	// (0x00028941) popup_note2_wait_window_g3_ParamLimits

0x3472,	// (0x00028941) popup_note2_wait_window_g3

0x0002,

0xfc87,	// (0x00035156) popup_note2_wait_window_g_ParamLimits

0xfc87,	// (0x00035156) popup_note2_wait_window_g

0x62de,	// (0x0002b7ad) popup_note2_wait_window_t1_ParamLimits

0x62de,	// (0x0002b7ad) popup_note2_wait_window_t1

0x62fc,	// (0x0002b7cb) popup_note2_wait_window_t2_ParamLimits

0x62fc,	// (0x0002b7cb) popup_note2_wait_window_t2

0x631a,	// (0x0002b7e9) popup_note2_wait_window_t3_ParamLimits

0x631a,	// (0x0002b7e9) popup_note2_wait_window_t3

0x632c,	// (0x0002b7fb) popup_note2_wait_window_t4_ParamLimits

0x632c,	// (0x0002b7fb) popup_note2_wait_window_t4

0x0003,

0xfc8e,	// (0x0003515d) popup_note2_wait_window_t_ParamLimits

0xfc8e,	// (0x0003515d) popup_note2_wait_window_t

0x633e,	// (0x0002b80d) wait_bar2_pane_ParamLimits

0x633e,	// (0x0002b80d) wait_bar2_pane

0x6356,	// (0x0002b825) popup_snote2_single_text_window_g1_ParamLimits

0x6356,	// (0x0002b825) popup_snote2_single_text_window_g1

0x637e,	// (0x0002b84d) popup_snote2_single_text_window_t1_ParamLimits

0x637e,	// (0x0002b84d) popup_snote2_single_text_window_t1

0x63ca,	// (0x0002b899) popup_snote2_single_text_window_t2_ParamLimits

0x63ca,	// (0x0002b899) popup_snote2_single_text_window_t2

0x6416,	// (0x0002b8e5) popup_snote2_single_text_window_t3_ParamLimits

0x6416,	// (0x0002b8e5) popup_snote2_single_text_window_t3

0x6457,	// (0x0002b926) popup_snote2_single_text_window_t4_ParamLimits

0x6457,	// (0x0002b926) popup_snote2_single_text_window_t4

0x648d,	// (0x0002b95c) popup_snote2_single_text_window_t5_ParamLimits

0x648d,	// (0x0002b95c) popup_snote2_single_text_window_t5

0x0004,

0xfc97,	// (0x00035166) popup_snote2_single_text_window_t_ParamLimits

0xfc97,	// (0x00035166) popup_snote2_single_text_window_t

0x64b8,	// (0x0002b987) popup_snote2_single_graphic_window_g1_ParamLimits

0x64b8,	// (0x0002b987) popup_snote2_single_graphic_window_g1

0x64e0,	// (0x0002b9af) popup_snote2_single_graphic_window_g2_ParamLimits

0x64e0,	// (0x0002b9af) popup_snote2_single_graphic_window_g2

0x0001,

0xfca2,	// (0x00035171) popup_snote2_single_graphic_window_g_ParamLimits

0xfca2,	// (0x00035171) popup_snote2_single_graphic_window_g

0x6508,	// (0x0002b9d7) popup_snote2_single_graphic_window_t1_ParamLimits

0x6508,	// (0x0002b9d7) popup_snote2_single_graphic_window_t1

0x6554,	// (0x0002ba23) popup_snote2_single_graphic_window_t2_ParamLimits

0x6554,	// (0x0002ba23) popup_snote2_single_graphic_window_t2

0x6416,	// (0x0002b8e5) popup_snote2_single_graphic_window_t3_ParamLimits

0x6416,	// (0x0002b8e5) popup_snote2_single_graphic_window_t3

0x6457,	// (0x0002b926) popup_snote2_single_graphic_window_t4_ParamLimits

0x6457,	// (0x0002b926) popup_snote2_single_graphic_window_t4

0x648d,	// (0x0002b95c) popup_snote2_single_graphic_window_t5_ParamLimits

0x648d,	// (0x0002b95c) popup_snote2_single_graphic_window_t5

0x0004,

0xfca7,	// (0x00035176) popup_snote2_single_graphic_window_t_ParamLimits

0xfca7,	// (0x00035176) popup_snote2_single_graphic_window_t

0x4f6e,	// (0x0002a43d) clock_nsta_pane_cp2_t1

0x4f6e,	// (0x0002a43d) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x00034f96) clock_nsta_pane_cp2_t

0xec71,	// (0x00034140) form_field_data_wide_pane_g1_ParamLimits

0xd25e,	// (0x0003272d) form_field_data_wide_pane_g2_ParamLimits

0xd25e,	// (0x0003272d) form_field_data_wide_pane_g2

0xd26a,	// (0x00032739) form_field_data_wide_pane_g3_ParamLimits

0xd26a,	// (0x00032739) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x00034b50) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x00034b50) form_field_data_wide_pane_g

0xc319,	// (0x000317e8) grid_touch_3_pane_ParamLimits

0xc319,	// (0x000317e8) grid_touch_3_pane

0xc8b6,	// (0x00031d85) cell_touch_3_pane_ParamLimits

0xc8b6,	// (0x00031d85) cell_touch_3_pane

0x5484,	// (0x0002a953) cell_touch_3_pane_g1

0x5484,	// (0x0002a953) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0003501b) cell_touch_3_pane_g

0xa854,	// (0x0002fd23) cont_query_data_pane

0xa85c,	// (0x0002fd2b) cont_query_data_pane_cp1

0x65d3,	// (0x0002baa2) button_value_adjust_pane_cp7

0x65db,	// (0x0002baaa) query_popup_pane_cp3

0x0542,	// (0x00025a11) bg_popup_sub_pane_cp22_ParamLimits

0x0558,	// (0x00025a27) navi_navi_volume_pane_cp2

0x0573,	// (0x00025a42) popup_side_volume_key_window_g2

0x0582,	// (0x00025a51) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x00034be6) popup_side_volume_key_window_g

0x059f,	// (0x00025a6e) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x00034bed) popup_side_volume_key_window_t

0x09a0,	// (0x00025e6f) popup_side_volume_key_window_ParamLimits

0x9a55,	// (0x0002ef24) list_double_graphic_pane_g4_ParamLimits

0x9a55,	// (0x0002ef24) list_double_graphic_pane_g4

0x9f94,	// (0x0002f463) list_single_2heading_msg_pane_ParamLimits

0x9f94,	// (0x0002f463) list_single_2heading_msg_pane

0x9fe0,	// (0x0002f4af) list_single_2heading_msg_pane_g1_ParamLimits

0x9fe0,	// (0x0002f4af) list_single_2heading_msg_pane_g1

0x9fec,	// (0x0002f4bb) list_single_2heading_msg_pane_g2_ParamLimits

0x9fec,	// (0x0002f4bb) list_single_2heading_msg_pane_g2

0x9fff,	// (0x0002f4ce) list_single_2heading_msg_pane_g3_ParamLimits

0x9fff,	// (0x0002f4ce) list_single_2heading_msg_pane_g3

0xa00b,	// (0x0002f4da) list_single_2heading_msg_pane_g4_ParamLimits

0xa00b,	// (0x0002f4da) list_single_2heading_msg_pane_g4

0x0003,

0xfcb2,	// (0x00035181) list_single_2heading_msg_pane_g_ParamLimits

0xfcb2,	// (0x00035181) list_single_2heading_msg_pane_g

0xa023,	// (0x0002f4f2) list_single_2heading_msg_pane_t1_ParamLimits

0xa023,	// (0x0002f4f2) list_single_2heading_msg_pane_t1

0xa04b,	// (0x0002f51a) list_single_2heading_msg_pane_t2_ParamLimits

0xa04b,	// (0x0002f51a) list_single_2heading_msg_pane_t2

0xa0b6,	// (0x0002f585) list_single_2heading_msg_pane_t3_ParamLimits

0xa0b6,	// (0x0002f585) list_single_2heading_msg_pane_t3

0xf40b,	// (0x000348da) list_single_2heading_msg_pane_t4_ParamLimits

0xf40b,	// (0x000348da) list_single_2heading_msg_pane_t4

0x0003,

0xfcbb,	// (0x0003518a) list_single_2heading_msg_pane_t_ParamLimits

0xfcbb,	// (0x0003518a) list_single_2heading_msg_pane_t

0xa3a5,	// (0x0002f874) title_pane_g4_ParamLimits

0xa3a5,	// (0x0002f874) title_pane_g4

0x0165,	// (0x00025634) title_pane_stacon_g3_ParamLimits

0x0165,	// (0x00025634) title_pane_stacon_g3

0x60fc,	// (0x0002b5cb) list_single_2graphic_im_pane_g4_ParamLimits

0x60fc,	// (0x0002b5cb) list_single_2graphic_im_pane_g4

0x3ec2,	// (0x00029391) popup_side_volume_key_window_cp

0x4718,	// (0x00029be7) main_idle_act2_pane_t1

0x1c25,	// (0x000270f4) toolbar_button_pane_g10

0xa9e2,	// (0x0002feb1) popup_toolbar_window_cp1

0x4f5f,	// (0x0002a42e) clock_nsta_pane_cp_t1

0x4f5f,	// (0x0002a42e) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x00034f91) clock_nsta_pane_cp_t

0x0558,	// (0x00025a27) navi_navi_volume_pane_cp2_ParamLimits

0x0567,	// (0x00025a36) popup_side_volume_key_window_g1_ParamLimits

0x0573,	// (0x00025a42) popup_side_volume_key_window_g2_ParamLimits

0x0582,	// (0x00025a51) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x00034be6) popup_side_volume_key_window_g_ParamLimits

0x204c,	// (0x0002751b) fep_hwr_aid_pane

0xc508,	// (0x000319d7) bg_fep_hwr_top_pane_g4_ParamLimits

0x54e5,	// (0x0002a9b4) fep_hwr_top_pane_g1_ParamLimits

0x54f7,	// (0x0002a9c6) fep_hwr_top_pane_g2_ParamLimits

0x2107,	// (0x000275d6) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x00034fe6) fep_hwr_top_pane_g_ParamLimits

0x211c,	// (0x000275eb) fep_hwr_top_text_pane_ParamLimits

0x3c77,	// (0x00029146) aid_touch_tab_arrow_arrow_2

0x3c80,	// (0x0002914f) aid_touch_tab_arrow_left_2

0x2060,	// (0x0002752f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2097,	// (0x00027566) fep_hwr_prediction_pane

0x564d,	// (0x0002ab1c) fep_vkb_prediction_pane

0xc681,	// (0x00031b50) fep_vkb_side_pane_g3_ParamLimits

0xc681,	// (0x00031b50) fep_vkb_side_pane_g3

0x56ff,	// (0x0002abce) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5bef,	// (0x0002b0be) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5bfc,	// (0x0002b0cb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x00035090) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6602,	// (0x0002bad1) fep_hwr_prediction_pane_g1

0x23c2,	// (0x00027891) fep_hwr_prediction_pane_g2

0x23ca,	// (0x00027899) fep_hwr_prediction_pane_g3

0x23d2,	// (0x000278a1) fep_hwr_prediction_pane_g4

0x0003,

0xfcc4,	// (0x00035193) fep_hwr_prediction_pane_g

0x6602,	// (0x0002bad1) fep_vkb_prediction_pane_g1

0x660c,	// (0x0002badb) fep_vkb_prediction_pane_g2

0x6614,	// (0x0002bae3) fep_vkb_prediction_pane_g3

0x661c,	// (0x0002baeb) fep_vkb_prediction_pane_g4

0x0003,

0xfccd,	// (0x0003519c) fep_vkb_prediction_pane_g

0x5b2f,	// (0x0002affe) slider_set_pane_g3

0x5b43,	// (0x0002b012) slider_set_pane_g4

0x5b5b,	// (0x0002b02a) slider_set_pane_g5

0x5b2f,	// (0x0002affe) slider_set_pane_g6

0x1f0e,	// (0x000273dd) slider_set_pane_g7

0x4364,	// (0x00029833) slider_form_pane_g3

0x436d,	// (0x0002983c) slider_form_pane_g4

0x4375,	// (0x00029844) slider_form_pane_g5

0x4364,	// (0x00029833) slider_form_pane_g6

0xc186,	// (0x00031655) slider_form_pane_g7

0x49db,	// (0x00029eaa) slider_set_pane_vc_g3

0x49e4,	// (0x00029eb3) slider_set_pane_vc_g4

0x49ed,	// (0x00029ebc) slider_set_pane_vc_g5

0x49db,	// (0x00029eaa) slider_set_pane_vc_g6

0x49f6,	// (0x00029ec5) slider_set_pane_vc_g7

0x4c08,	// (0x0002a0d7) slider_form_pane_vc_g1

0x4c11,	// (0x0002a0e0) slider_form_pane_vc_g2

0x4c1a,	// (0x0002a0e9) slider_form_pane_vc_g3

0x4c08,	// (0x0002a0d7) slider_form_pane_vc_g4

0x4c23,	// (0x0002a0f2) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x00034f63) slider_form_pane_vc_g

0xa1ab,	// (0x0002f67a) main_idle_act3_pane

0x6624,	// (0x0002baf3) ai3_links_pane

0xc900,	// (0x00031dcf) popup_ai3_data_window_ParamLimits

0xc900,	// (0x00031dcf) popup_ai3_data_window

0xa1ab,	// (0x0002f67a) grid_ai3_links_pane

0xc91e,	// (0x00031ded) cell_ai3_links_pane_ParamLimits

0xc91e,	// (0x00031ded) cell_ai3_links_pane

0x6665,	// (0x0002bb34) bg_popup_sub_pane_cp11

0x6672,	// (0x0002bb41) cell_ai3_links_pane_g1

0xa1ab,	// (0x0002f67a) bg_popup_sub_pane_cp12

0x6697,	// (0x0002bb66) heading_ai3_data_pane

0x669f,	// (0x0002bb6e) list_ai3_gene_pane

0x66ab,	// (0x0002bb7a) popup_ai3_data_window_g1

0x66b3,	// (0x0002bb82) heading_ai3_data_pane_g1

0x66bb,	// (0x0002bb8a) heading_ai3_data_pane_t1

0x66c9,	// (0x0002bb98) list_double_ai3_gene_pane_ParamLimits

0x66c9,	// (0x0002bb98) list_double_ai3_gene_pane

0x66d6,	// (0x0002bba5) list_single_ai3_gene_pane_ParamLimits

0x66d6,	// (0x0002bba5) list_single_ai3_gene_pane

0x5449,	// (0x0002a918) list_highlight_pane_cp7_ParamLimits

0x5449,	// (0x0002a918) list_highlight_pane_cp7

0x66e3,	// (0x0002bbb2) list_single_a13_gene_pane_t1_ParamLimits

0x66e3,	// (0x0002bbb2) list_single_a13_gene_pane_t1

0x66fa,	// (0x0002bbc9) list_single_ai3_gene_pane_g1

0x6703,	// (0x0002bbd2) list_single_ai3_gene_pane_g2

0x0001,

0xfcd6,	// (0x000351a5) list_single_ai3_gene_pane_g

0x670b,	// (0x0002bbda) list_double_ai3_gene_pane_g1_ParamLimits

0x670b,	// (0x0002bbda) list_double_ai3_gene_pane_g1

0x6717,	// (0x0002bbe6) list_double_ai3_gene_pane_t1_ParamLimits

0x6717,	// (0x0002bbe6) list_double_ai3_gene_pane_t1

0x6733,	// (0x0002bc02) list_double_ai3_gene_pane_t2_ParamLimits

0x6733,	// (0x0002bc02) list_double_ai3_gene_pane_t2

0x6748,	// (0x0002bc17) list_double_ai3_gene_pane_t3_ParamLimits

0x6748,	// (0x0002bc17) list_double_ai3_gene_pane_t3

0x0002,

0xfcdb,	// (0x000351aa) list_double_ai3_gene_pane_t_ParamLimits

0xfcdb,	// (0x000351aa) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf401,	// (0x000348d0) aid_size_min_col_2

0xc8ea,	// (0x00031db9) aid_size_min_msg_ParamLimits

0xc8ea,	// (0x00031db9) aid_size_min_msg

0xc695,	// (0x00031b64) fep_vkb_top_text_pane_g2_ParamLimits

0xc695,	// (0x00031b64) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x00035016) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x00035016) fep_vkb_top_text_pane_g

0xa1ab,	// (0x0002f67a) main_hc_apps_shell_pane

0x6765,	// (0x0002bc34) grid_hc_apps_pane_ParamLimits

0x6765,	// (0x0002bc34) grid_hc_apps_pane

0x6774,	// (0x0002bc43) list_hc_apps_pane

0x677c,	// (0x0002bc4b) scroll_pane_cp37_ParamLimits

0x677c,	// (0x0002bc4b) scroll_pane_cp37

0xc938,	// (0x00031e07) cell_hc_apps_pane_ParamLimits

0xc938,	// (0x00031e07) cell_hc_apps_pane

0xd737,	// (0x00032c06) cell_hc_apps_pane_g1_ParamLimits

0xd737,	// (0x00032c06) cell_hc_apps_pane_g1

0x6871,	// (0x0002bd40) cell_hc_apps_pane_g2_ParamLimits

0x6871,	// (0x0002bd40) cell_hc_apps_pane_g2

0x688d,	// (0x0002bd5c) cell_hc_apps_pane_g3_ParamLimits

0x688d,	// (0x0002bd5c) cell_hc_apps_pane_g3

0x0002,

0xfce2,	// (0x000351b1) cell_hc_apps_pane_g_ParamLimits

0xfce2,	// (0x000351b1) cell_hc_apps_pane_g

0xd764,	// (0x00032c33) cell_hc_apps_pane_t1_ParamLimits

0xd764,	// (0x00032c33) cell_hc_apps_pane_t1

0xa79e,	// (0x0002fc6d) grid_highlight_pane_cp10_ParamLimits

0xa79e,	// (0x0002fc6d) grid_highlight_pane_cp10

0xd7a4,	// (0x00032c73) list_single_hc_apps_pane_ParamLimits

0xd7a4,	// (0x00032c73) list_single_hc_apps_pane

0xd7de,	// (0x00032cad) list_single_hc_apps_pane_g1

0xa124,	// (0x0002f5f3) list_single_hc_apps_pane_g2

0x0001,

0xfce9,	// (0x000351b8) list_single_hc_apps_pane_g

0xa13d,	// (0x0002f60c) list_single_hc_apps_pane_g2_copy1

0xa159,	// (0x0002f628) list_single_hc_apps_pane_t1

0xa4b7,	// (0x0002f986) bg_set_opt_pane_cp_ParamLimits

0xf4cb,	// (0x0003499a) setting_slider_pane_t1_ParamLimits

0xf4e4,	// (0x000349b3) setting_slider_pane_t2_ParamLimits

0xf4fe,	// (0x000349cd) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00034a33) setting_slider_pane_t_ParamLimits

0xf516,	// (0x000349e5) slider_set_pane_ParamLimits

0x0fe3,	// (0x000264b2) control_pane_g5_ParamLimits

0x0fe3,	// (0x000264b2) control_pane_g5

0x4191,	// (0x00029660) slider_set_pane_g1_ParamLimits

0x1f02,	// (0x000273d1) slider_set_pane_g2_ParamLimits

0x5b2f,	// (0x0002affe) slider_set_pane_g3_ParamLimits

0x5b43,	// (0x0002b012) slider_set_pane_g4_ParamLimits

0x5b5b,	// (0x0002b02a) slider_set_pane_g5_ParamLimits

0x5b2f,	// (0x0002affe) slider_set_pane_g6_ParamLimits

0x1f0e,	// (0x000273dd) slider_set_pane_g7_ParamLimits

0xf965,	// (0x00034e34) slider_set_pane_g_ParamLimits

0x0a85,	// (0x00025f54) navi_icon_text_pane_ParamLimits

0xb6ed,	// (0x00030bbc) aid_fill_nsta_2_ParamLimits

0xb726,	// (0x00030bf5) aid_touch_tab_arrow_left_ParamLimits

0xb73a,	// (0x00030c09) aid_touch_tab_arrow_right_ParamLimits

0xb7d5,	// (0x00030ca4) clock_nsta_pane_ParamLimits

0xbe9d,	// (0x0003136c) navi_icon_pane_g1_ParamLimits

0xbea9,	// (0x00031378) navi_text_pane_t1_ParamLimits

0xc3f3,	// (0x000318c2) navi_icon_text_pane_g1_ParamLimits

0xc3ff,	// (0x000318ce) navi_icon_text_pane_t1_ParamLimits

0xd7de,	// (0x00032cad) list_single_hc_apps_pane_g1_ParamLimits

0xa124,	// (0x0002f5f3) list_single_hc_apps_pane_g2_ParamLimits

0xfce9,	// (0x000351b8) list_single_hc_apps_pane_g_ParamLimits

0xa13d,	// (0x0002f60c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa159,	// (0x0002f628) list_single_hc_apps_pane_t1_ParamLimits

0xa303,	// (0x0002f7d2) popup_toolbar2_fixed_window_ParamLimits

0xa303,	// (0x0002f7d2) popup_toolbar2_fixed_window

0xb652,	// (0x00030b21) popup_toolbar2_float_window

0xa1ab,	// (0x0002f67a) bg_popup_sub_pane_cp27

0x6947,	// (0x0002be16) grid_toolbar2_float_pane

0xa1ab,	// (0x0002f67a) bg_popup_sub_pane_cp26

0x6947,	// (0x0002be16) grid_toolbar2_fixed_pane

0xd7f7,	// (0x00032cc6) cell_toolbar2_fixed_pane_ParamLimits

0xd7f7,	// (0x00032cc6) cell_toolbar2_fixed_pane

0xd814,	// (0x00032ce3) cell_toolbar2_fixed_pane_g1

0x6968,	// (0x0002be37) toolbar2_fixed_button_pane

0x2d74,	// (0x00028243) toolbar2_fixed_button_pane_g1

0x2d7c,	// (0x0002824b) toolbar2_fixed_button_pane_g2

0x2d84,	// (0x00028253) toolbar2_fixed_button_pane_g3

0x2d8c,	// (0x0002825b) toolbar2_fixed_button_pane_g4

0x2d94,	// (0x00028263) toolbar2_fixed_button_pane_g5

0x2d9c,	// (0x0002826b) toolbar2_fixed_button_pane_g6

0x2da4,	// (0x00028273) toolbar2_fixed_button_pane_g7

0x2dac,	// (0x0002827b) toolbar2_fixed_button_pane_g8

0x2db4,	// (0x00028283) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x00034d36) toolbar2_fixed_button_pane_g

0x6970,	// (0x0002be3f) cell_toolbar2_float_pane_ParamLimits

0x6970,	// (0x0002be3f) cell_toolbar2_float_pane

0x6981,	// (0x0002be50) cell_toolbar2_float_pane_g1

0x6968,	// (0x0002be37) toolbar2_fixed_button_pane_cp

0xc57d,	// (0x00031a4c) fep_vkb_accented_list_pane_ParamLimits

0xc57d,	// (0x00031a4c) fep_vkb_accented_list_pane

0x227e,	// (0x0002774d) bg_popup_fep_shadow_pane_g9

0x0c09,	// (0x000260d8) bg_popup_fep_shadow_pane_cp3

0xd363,	// (0x00032832) list_accented_list_pane

0x698a,	// (0x0002be59) list_single_accented_list_pane_ParamLimits

0x698a,	// (0x0002be59) list_single_accented_list_pane

0x0c09,	// (0x000260d8) list_highlight_pane_cp10

0x699b,	// (0x0002be6a) list_single_accented_list_pane_t1

0xb56e,	// (0x00030a3d) popup_slider_window_ParamLimits

0xb56e,	// (0x00030a3d) popup_slider_window

0x65e3,	// (0x0002bab2) aid_indentation_list_msg

0xd91f,	// (0x00032dee) bg_popup_window_pane_cp19

0x6ad5,	// (0x0002bfa4) popup_slider_window_g1

0x6af1,	// (0x0002bfc0) popup_slider_window_g2

0x6b0d,	// (0x0002bfdc) popup_slider_window_g3

0x0005,

0xfcee,	// (0x000351bd) popup_slider_window_g

0x6b69,	// (0x0002c038) popup_slider_window_t1

0x6bdd,	// (0x0002c0ac) small_volume_slider_vertical_pane

0x5484,	// (0x0002a953) small_volume_slider_vertical_pane_g1

0x5484,	// (0x0002a953) small_volume_slider_vertical_pane_g2

0x6bf9,	// (0x0002c0c8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd00,	// (0x000351cf) small_volume_slider_vertical_pane_g

0xa263,	// (0x0002f732) area_side_right_pane_ParamLimits

0xa263,	// (0x0002f732) area_side_right_pane

0xca02,	// (0x00031ed1) aid_size_side_button_ParamLimits

0xca02,	// (0x00031ed1) aid_size_side_button

0xca1b,	// (0x00031eea) grid_sctrl_middle_pane_ParamLimits

0xca1b,	// (0x00031eea) grid_sctrl_middle_pane

0x240e,	// (0x000278dd) sctrl_sk_bottom_pane

0x241f,	// (0x000278ee) sctrl_sk_top_pane

0x2431,	// (0x00027900) aid_touch_sctrl_top

0xa79e,	// (0x0002fc6d) bg_sctrl_sk_pane_ParamLimits

0xa79e,	// (0x0002fc6d) bg_sctrl_sk_pane

0x243e,	// (0x0002790d) sctrl_sk_top_pane_g1

0x244b,	// (0x0002791a) sctrl_sk_top_pane_t1

0x2431,	// (0x00027900) aid_touch_sctrl_bottom

0xa79e,	// (0x0002fc6d) bg_sctrl_sk_pane_cp_ParamLimits

0xa79e,	// (0x0002fc6d) bg_sctrl_sk_pane_cp

0x2466,	// (0x00027935) sctrl_sk_bottom_pane_g1

0x244b,	// (0x0002791a) sctrl_sk_bottom_pane_t1

0xca35,	// (0x00031f04) cell_sctrl_middle_pane_ParamLimits

0xca35,	// (0x00031f04) cell_sctrl_middle_pane

0xca48,	// (0x00031f17) aid_touch_sctrl_middle_ParamLimits

0xca48,	// (0x00031f17) aid_touch_sctrl_middle

0xca55,	// (0x00031f24) bg_sctrl_middle_pane_ParamLimits

0xca55,	// (0x00031f24) bg_sctrl_middle_pane

0x6c84,	// (0x0002c153) cell_sctrl_middle_pane_g1_ParamLimits

0x6c84,	// (0x0002c153) cell_sctrl_middle_pane_g1

0xca63,	// (0x00031f32) cell_sctrl_middle_pane_g2_ParamLimits

0xca63,	// (0x00031f32) cell_sctrl_middle_pane_g2

0x0001,

0xfd0c,	// (0x000351db) cell_sctrl_middle_pane_g_ParamLimits

0xfd0c,	// (0x000351db) cell_sctrl_middle_pane_g

0x2d74,	// (0x00028243) bg_sctrl_middle_pane_g1

0x2d7c,	// (0x0002824b) bg_sctrl_middle_pane_g2

0x2d84,	// (0x00028253) bg_sctrl_middle_pane_g3

0x2d8c,	// (0x0002825b) bg_sctrl_middle_pane_g4

0x2d94,	// (0x00028263) bg_sctrl_middle_pane_g5

0x2d9c,	// (0x0002826b) bg_sctrl_middle_pane_g6

0x2da4,	// (0x00028273) bg_sctrl_middle_pane_g7

0x2dac,	// (0x0002827b) bg_sctrl_middle_pane_g8

0x0007,

0xfd11,	// (0x000351e0) bg_sctrl_middle_pane_g

0x2db4,	// (0x00028283) bg_sctrl_middle_pane_g8_copy1

0x2d74,	// (0x00028243) bg_sctrl_sk_pane_g1

0x2d7c,	// (0x0002824b) bg_sctrl_sk_pane_g2

0x2d84,	// (0x00028253) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x00034d36) bg_sctrl_sk_pane_g

0xd17d,	// (0x0003264c) aid_size_touch_scroll_bar

0x2d8c,	// (0x0002825b) bg_sctrl_sk_pane_g4

0x2d94,	// (0x00028263) bg_sctrl_sk_pane_g5

0x2d9c,	// (0x0002826b) bg_sctrl_sk_pane_g6

0x2da4,	// (0x00028273) bg_sctrl_sk_pane_g7

0x2dac,	// (0x0002827b) bg_sctrl_sk_pane_g8

0x2db4,	// (0x00028283) bg_sctrl_sk_pane_g9

0x1224,	// (0x000266f3) popup_fep_china_hwr2_fs_candidate_window

0xb026,	// (0x000304f5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb026,	// (0x000304f5) popup_fep_china_hwr2_fs_control_window

0x56ff,	// (0x0002abce) sctrl_sk_top_pane_g2

0x0001,

0xfd07,	// (0x000351d6) sctrl_sk_top_pane_g

0xd9d7,	// (0x00032ea6) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9d7,	// (0x00032ea6) aid_fep_china_hwr2_fs_cell

0xd9ed,	// (0x00032ebc) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9ed,	// (0x00032ebc) bg_popup_fep_shadow_pane_cp4

0xda04,	// (0x00032ed3) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda04,	// (0x00032ed3) bg_popup_fep_shadow_pane_cp5

0xda16,	// (0x00032ee5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda16,	// (0x00032ee5) popup_fep_china_hwr2_fs_control_bar_grid

0xda2a,	// (0x00032ef9) popup_fep_china_hwr2_fs_control_funtion_grid

0x6c58,	// (0x0002c127) aid_fep_china_hwr2_fs_candi_cell

0xa1ab,	// (0x0002f67a) bg_popup_fep_shadow_pane_cp6

0x6c62,	// (0x0002c131) popup_fep_china_hwr2_fs_candidate_grid

0xda32,	// (0x00032f01) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda32,	// (0x00032f01) cell_fep_china_hwr2_fs_funtion_grid

0x5484,	// (0x0002a953) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6c84,	// (0x0002c153) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6c84,	// (0x0002c153) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6c92,	// (0x0002c161) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6c92,	// (0x0002c161) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd22,	// (0x000351f1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd22,	// (0x000351f1) cell_fep_china_hwr2_fs_funtion_grid_g

0xda4a,	// (0x00032f19) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda4a,	// (0x00032f19) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda5f,	// (0x00032f2e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda5f,	// (0x00032f2e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd27,	// (0x000351f6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd27,	// (0x000351f6) cell_fep_china_hwr2_fs_funtion_grid_t

0x6cd9,	// (0x0002c1a8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6ce1,	// (0x0002c1b0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6ce9,	// (0x0002c1b8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2c,	// (0x000351fb) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6cf1,	// (0x0002c1c0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6cf1,	// (0x0002c1c0) cell_fep_china_hwr2_fs_candidate_grid

0x6d10,	// (0x0002c1df) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6d18,	// (0x0002c1e7) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5484,	// (0x0002a953) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5484,	// (0x0002a953) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0003501b) cell_fep_china_hwr2_fs_candidate_grid_g

0x6d20,	// (0x0002c1ef) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1893,	// (0x00026d62) clock_nsta_pane_cp_24_ParamLimits

0x1893,	// (0x00026d62) clock_nsta_pane_cp_24

0x1913,	// (0x00026de2) indicator_nsta_pane_cp_24_ParamLimits

0x1913,	// (0x00026de2) indicator_nsta_pane_cp_24

0x3acf,	// (0x00028f9e) heading_pane_g1

0x0001,

0xf8cc,	// (0x00034d9b) heading_pane_g

0x455f,	// (0x00029a2e) grid_sct_catagory_button_pane

0x4591,	// (0x00029a60) scroll_pane_cp5_ParamLimits

0x50d0,	// (0x0002a59f) button_value_adjust_pane_cp5_ParamLimits

0x50d0,	// (0x0002a59f) button_value_adjust_pane_cp5

0x51b5,	// (0x0002a684) form2_midp_time_pane_ParamLimits

0x6d2e,	// (0x0002c1fd) cell_sct_catagory_button_pane_ParamLimits

0x6d2e,	// (0x0002c1fd) cell_sct_catagory_button_pane

0x5449,	// (0x0002a918) bg_button_pane_cp01_ParamLimits

0x5449,	// (0x0002a918) bg_button_pane_cp01

0x5484,	// (0x0002a953) cell_sct_catagory_button_pane_g1

0xb5ef,	// (0x00030abe) popup_tb_extension_window

0xda7b,	// (0x00032f4a) aid_size_cell_ext_ParamLimits

0xda7b,	// (0x00032f4a) aid_size_cell_ext

0xcfbf,	// (0x0003248e) bg_tb_trans_pane_cp1_ParamLimits

0xcfbf,	// (0x0003248e) bg_tb_trans_pane_cp1

0xdaa1,	// (0x00032f70) grid_tb_ext_pane_ParamLimits

0xdaa1,	// (0x00032f70) grid_tb_ext_pane

0xdae1,	// (0x00032fb0) cell_tb_ext_pane_ParamLimits

0xdae1,	// (0x00032fb0) cell_tb_ext_pane

0xdb09,	// (0x00032fd8) cell_tb_ext_pane_g1_ParamLimits

0xdb09,	// (0x00032fd8) cell_tb_ext_pane_g1

0x6dc4,	// (0x0002c293) cell_tb_ext_pane_t1

0xa79e,	// (0x0002fc6d) list_highlight_pane_cp11_ParamLimits

0xa79e,	// (0x0002fc6d) list_highlight_pane_cp11

0xf454,	// (0x00034923) popup_uni_indicator_window_ParamLimits

0xf454,	// (0x00034923) popup_uni_indicator_window

0xd244,	// (0x00032713) bg_popup_sub_pane_cp14

0x6ddf,	// (0x0002c2ae) list_uniindi_pane

0x6deb,	// (0x0002c2ba) uniindi_top_pane

0xa79e,	// (0x0002fc6d) bg_uniindi_top_pane

0x6e0c,	// (0x0002c2db) uniindi_top_pane_g1

0x6e22,	// (0x0002c2f1) uniindi_top_pane_g2

0x0003,

0xfd33,	// (0x00035202) uniindi_top_pane_g

0x6e4c,	// (0x0002c31b) uniindi_top_pane_t1

0x6e78,	// (0x0002c347) list_single_uniindi_pane_ParamLimits

0x6e78,	// (0x0002c347) list_single_uniindi_pane

0x5484,	// (0x0002a953) bg_uniindi_top_pane_g1

0x6e8a,	// (0x0002c359) list_single_uniindi_pane_g1

0x6e9d,	// (0x0002c36c) list_single_uniindi_pane_t1

0xa1ab,	// (0x0002f67a) control_bg_pane

0x6ec2,	// (0x0002c391) bg_sctrl_sk_pane_cp1

0x6ecb,	// (0x0002c39a) bg_sctrl_sk_pane_cp2

0x6ed4,	// (0x0002c3a3) control_bg_pane_g1

0x6edd,	// (0x0002c3ac) control_bg_pane_g2

0x0001,

0xfd3c,	// (0x0003520b) control_bg_pane_g

0x4ef1,	// (0x0002a3c0) cell_indicator_nsta_pane_g1_ParamLimits

0xc34c,	// (0x0003181b) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x00034f7f) cell_indicator_nsta_pane_g_ParamLimits

0xf02f,	// (0x000344fe) form2_midp_time_pane_t1_ParamLimits

0x203e,	// (0x0002750d) main_idle_act4_pane_ParamLimits

0x203e,	// (0x0002750d) main_idle_act4_pane

0xb5ef,	// (0x00030abe) popup_tb_extension_window_ParamLimits

0xdac9,	// (0x00032f98) tb_ext_find_pane_ParamLimits

0xdac9,	// (0x00032f98) tb_ext_find_pane

0x6ee6,	// (0x0002c3b5) ai_gene_pane_1_cp1

0x0d46,	// (0x00026215) ai_gene_pane_2_cp1

0x6eee,	// (0x0002c3bd) list_single_idle_plugin_calendar_pane

0x6ef7,	// (0x0002c3c6) list_single_idle_plugin_notification_pane

0x6f00,	// (0x0002c3cf) list_single_idle_plugin_player_pane

0xdb26,	// (0x00032ff5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb26,	// (0x00032ff5) list_single_idle_plugin_shortcut_pane

0xdb4e,	// (0x0003301d) main_idle_act4_pane_t1

0xdb66,	// (0x00033035) main_idle_act4_pane_t2

0x0001,

0xfd41,	// (0x00035210) main_idle_act4_pane_t

0xdb7e,	// (0x0003304d) middle_sk_idle_act4_pane_ParamLimits

0xdb7e,	// (0x0003304d) middle_sk_idle_act4_pane

0xdb9a,	// (0x00033069) popup_clock_digital_analogue_window_cp2

0xdbc1,	// (0x00033090) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbc1,	// (0x00033090) shortcut_wheel_idle_act4_pane

0x5484,	// (0x0002a953) shortcut_wheel_idle_act4_pane_g1

0x5484,	// (0x0002a953) shortcut_wheel_idle_act4_pane_g2

0x5484,	// (0x0002a953) shortcut_wheel_idle_act4_pane_g3

0x5484,	// (0x0002a953) shortcut_wheel_idle_act4_pane_g4

0x5484,	// (0x0002a953) shortcut_wheel_idle_act4_pane_g5

0x6f93,	// (0x0002c462) shortcut_wheel_idle_act4_pane_g6

0x6f9b,	// (0x0002c46a) shortcut_wheel_idle_act4_pane_g7

0x6fa3,	// (0x0002c472) shortcut_wheel_idle_act4_pane_g8

0x6fab,	// (0x0002c47a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd46,	// (0x00035215) shortcut_wheel_idle_act4_pane_g

0xc508,	// (0x000319d7) middle_sk_idle_act4_pane_g1_ParamLimits

0xc508,	// (0x000319d7) middle_sk_idle_act4_pane_g1

0xdc3e,	// (0x0003310d) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc3e,	// (0x0003310d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd69,	// (0x00035238) middle_sk_idle_act4_pane_g_ParamLimits

0xfd69,	// (0x00035238) middle_sk_idle_act4_pane_g

0xdc56,	// (0x00033125) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc56,	// (0x00033125) middle_sk_idle_act4_pane_t1

0xdc85,	// (0x00033154) grid_ai_shortcut_pane_ParamLimits

0xdc85,	// (0x00033154) grid_ai_shortcut_pane

0xdca2,	// (0x00033171) list_highlight_pane_cp16_ParamLimits

0xdca2,	// (0x00033171) list_highlight_pane_cp16

0xdcaf,	// (0x0003317e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdcaf,	// (0x0003317e) list_single_idle_plugin_shortcut_pane_g1

0xdcbb,	// (0x0003318a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdcbb,	// (0x0003318a) list_single_idle_plugin_shortcut_pane_g2

0xdcd9,	// (0x000331a8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcd9,	// (0x000331a8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6e,	// (0x0003523d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6e,	// (0x0003523d) list_single_idle_plugin_shortcut_pane_g

0xdcee,	// (0x000331bd) cell_ai_shortcut_pane_ParamLimits

0xdcee,	// (0x000331bd) cell_ai_shortcut_pane

0xdd04,	// (0x000331d3) cell_ai_shortcut_pane_g1_ParamLimits

0xdd04,	// (0x000331d3) cell_ai_shortcut_pane_g1

0x6ee6,	// (0x0002c3b5) ai_gene_pane_1_cp2

0x70dc,	// (0x0002c5ab) ai_gene_pane_2_cp2

0x70e4,	// (0x0002c5b3) list_highlight_pane_cp15

0x70ed,	// (0x0002c5bc) list_single_idle_plugin_calendar_pane_g1

0x70e4,	// (0x0002c5b3) list_highlight_pane_cp17

0x70f5,	// (0x0002c5c4) list_single_idle_plugin_calendar_pane_g1_copy1

0x70fd,	// (0x0002c5cc) list_single_idle_plugin_player_pane_g1

0x47c6,	// (0x00029c95) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd75,	// (0x00035244) list_single_idle_plugin_player_pane_g

0x7105,	// (0x0002c5d4) list_single_idle_plugin_player_pane_t1

0x7113,	// (0x0002c5e2) list_single_idle_plugin_player_pane_t2

0x7121,	// (0x0002c5f0) list_single_idle_plugin_player_pane_t3

0x712f,	// (0x0002c5fe) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7a,	// (0x00035249) list_single_idle_plugin_player_pane_t

0x713d,	// (0x0002c60c) wait_bar_pane_cp15

0x7145,	// (0x0002c614) grid_ai_notification_pane

0x47c6,	// (0x00029c95) list_single_idle_plugin_notification_pane_g1

0xdd26,	// (0x000331f5) cell_ai_notification_pane_ParamLimits

0xdd26,	// (0x000331f5) cell_ai_notification_pane

0x715b,	// (0x0002c62a) cell_ai_notification_pane_g1

0x7163,	// (0x0002c632) cell_ai_notification_pane_t1

0xdd33,	// (0x00033202) tb_ext_find_button_pane

0xdd3b,	// (0x0003320a) tb_ext_find_pane_g1

0xdd43,	// (0x00033212) tb_ext_find_pane_t1

0x03d3,	// (0x000258a2) tb_ext_find_button_pane_g1

0x718f,	// (0x0002c65e) tb_ext_find_button_pane_g2

0x0001,

0xfd83,	// (0x00035252) tb_ext_find_button_pane_g

0xdb4e,	// (0x0003301d) main_idle_act4_pane_t1_ParamLimits

0xdb66,	// (0x00033035) main_idle_act4_pane_t2_ParamLimits

0xfd41,	// (0x00035210) main_idle_act4_pane_t_ParamLimits

0xdb9a,	// (0x00033069) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdbb1,	// (0x00033080) sat_plugin_idle_act4_pane_ParamLimits

0xdbb1,	// (0x00033080) sat_plugin_idle_act4_pane

0xdd51,	// (0x00033220) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd51,	// (0x00033220) sat_plugin_idle_act4_pane_t1

0xdd69,	// (0x00033238) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd69,	// (0x00033238) sat_plugin_idle_act4_pane_t2

0xdd81,	// (0x00033250) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd81,	// (0x00033250) sat_plugin_idle_act4_pane_t3

0xdd99,	// (0x00033268) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd99,	// (0x00033268) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd88,	// (0x00035257) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd88,	// (0x00035257) sat_plugin_idle_act4_pane_t

0xf29e,	// (0x0003476d) popup_battery_window_ParamLimits

0xf29e,	// (0x0003476d) popup_battery_window

0xa79e,	// (0x0002fc6d) bg_popup_sub_pane_cp25_ParamLimits

0xa79e,	// (0x0002fc6d) bg_popup_sub_pane_cp25

0x71e4,	// (0x0002c6b3) popup_battery_window_g1_ParamLimits

0x71e4,	// (0x0002c6b3) popup_battery_window_g1

0x71f0,	// (0x0002c6bf) popup_battery_window_t1_ParamLimits

0x71f0,	// (0x0002c6bf) popup_battery_window_t1

0x7202,	// (0x0002c6d1) popup_battery_window_t2_ParamLimits

0x7202,	// (0x0002c6d1) popup_battery_window_t2

0x0001,

0xfd91,	// (0x00035260) popup_battery_window_t_ParamLimits

0xfd91,	// (0x00035260) popup_battery_window_t

0xad59,	// (0x00030228) midp_canvas_pane_ParamLimits

0xadb4,	// (0x00030283) midp_keypad_pane_ParamLimits

0xadb4,	// (0x00030283) midp_keypad_pane

0x1176,	// (0x00026645) main_midp_pane_ParamLimits

0x4f7d,	// (0x0002a44c) signal_pane_g2_cp_ParamLimits

0xddb1,	// (0x00033280) aid_size_cell_midp_keypad_ParamLimits

0xddb1,	// (0x00033280) aid_size_cell_midp_keypad

0xddcf,	// (0x0003329e) midp_keyp_game_grid_pane_ParamLimits

0xddcf,	// (0x0003329e) midp_keyp_game_grid_pane

0xddf6,	// (0x000332c5) midp_keyp_rocker_pane_ParamLimits

0xddf6,	// (0x000332c5) midp_keyp_rocker_pane

0xde35,	// (0x00033304) midp_keyp_sk_left_pane_ParamLimits

0xde35,	// (0x00033304) midp_keyp_sk_left_pane

0xde89,	// (0x00033358) midp_keyp_sk_right_pane_ParamLimits

0xde89,	// (0x00033358) midp_keyp_sk_right_pane

0xa1ab,	// (0x0002f67a) bg_button_pane_cp03

0xdedd,	// (0x000333ac) midp_keyp_sk_left_pane_g1

0xa1ab,	// (0x0002f67a) bg_button_pane_cp04

0xdedd,	// (0x000333ac) midp_keyp_sk_right_pane_g1

0x5484,	// (0x0002a953) midp_keyp_rocker_pane_g1

0xdee6,	// (0x000333b5) keyp_game_cell_pane_ParamLimits

0xdee6,	// (0x000333b5) keyp_game_cell_pane

0xa1ab,	// (0x0002f67a) bg_button_pane_cp02

0xdf0c,	// (0x000333db) keyp_game_cell_pane_g1

0xa2af,	// (0x0002f77e) popup_fep_vkb2_window_ParamLimits

0xa2af,	// (0x0002f77e) popup_fep_vkb2_window

0xca6f,	// (0x00031f3e) aid_size_cell_vkb2_ParamLimits

0xca6f,	// (0x00031f3e) aid_size_cell_vkb2

0xcaa5,	// (0x00031f74) popup_fep_vkb2_window_g1_ParamLimits

0xcaa5,	// (0x00031f74) popup_fep_vkb2_window_g1

0xcaf5,	// (0x00031fc4) vkb2_area_bottom_pane_ParamLimits

0xcaf5,	// (0x00031fc4) vkb2_area_bottom_pane

0xcb51,	// (0x00032020) vkb2_area_keypad_pane_ParamLimits

0xcb51,	// (0x00032020) vkb2_area_keypad_pane

0xcb9f,	// (0x0003206e) vkb2_area_top_pane_ParamLimits

0xcb9f,	// (0x0003206e) vkb2_area_top_pane

0xcc25,	// (0x000320f4) vkb2_top_entry_pane_ParamLimits

0xcc25,	// (0x000320f4) vkb2_top_entry_pane

0xcc52,	// (0x00032121) vkb2_top_grid_left_pane_ParamLimits

0xcc52,	// (0x00032121) vkb2_top_grid_left_pane

0xcc72,	// (0x00032141) vkb2_top_grid_right_pane_ParamLimits

0xcc72,	// (0x00032141) vkb2_top_grid_right_pane

0x26d2,	// (0x00027ba1) vkb2_cell_keypad_pane_ParamLimits

0x26d2,	// (0x00027ba1) vkb2_cell_keypad_pane

0xccb8,	// (0x00032187) vkb2_area_bottom_grid_pane_ParamLimits

0xccb8,	// (0x00032187) vkb2_area_bottom_grid_pane

0xcce2,	// (0x000321b1) vkb2_area_bottom_pane_g1_ParamLimits

0xcce2,	// (0x000321b1) vkb2_area_bottom_pane_g1

0xcd08,	// (0x000321d7) vkb2_area_bottom_pane_g2_ParamLimits

0xcd08,	// (0x000321d7) vkb2_area_bottom_pane_g2

0xcd39,	// (0x00032208) vkb2_area_bottom_pane_g3_ParamLimits

0xcd39,	// (0x00032208) vkb2_area_bottom_pane_g3

0x0002,

0xfd96,	// (0x00035265) vkb2_area_bottom_pane_g_ParamLimits

0xfd96,	// (0x00035265) vkb2_area_bottom_pane_g

0x287c,	// (0x00027d4b) vkb2_top_cell_left_pane_ParamLimits

0x287c,	// (0x00027d4b) vkb2_top_cell_left_pane

0xdf15,	// (0x000333e4) vkb2_top_entry_pane_g1_ParamLimits

0xdf15,	// (0x000333e4) vkb2_top_entry_pane_g1

0xdf23,	// (0x000333f2) vkb2_top_entry_pane_t1_ParamLimits

0xdf23,	// (0x000333f2) vkb2_top_entry_pane_t1

0x73a5,	// (0x0002c874) vkb2_top_entry_pane_t2_ParamLimits

0x73a5,	// (0x0002c874) vkb2_top_entry_pane_t2

0x73d7,	// (0x0002c8a6) vkb2_top_entry_pane_t3_ParamLimits

0x73d7,	// (0x0002c8a6) vkb2_top_entry_pane_t3

0x0002,

0xfd9d,	// (0x0003526c) vkb2_top_entry_pane_t_ParamLimits

0xfd9d,	// (0x0003526c) vkb2_top_entry_pane_t

0xcda3,	// (0x00032272) vkb2_top_grid_right_pane_g1_ParamLimits

0xcda3,	// (0x00032272) vkb2_top_grid_right_pane_g1

0x28df,	// (0x00027dae) vkb2_top_grid_right_pane_g2_ParamLimits

0x28df,	// (0x00027dae) vkb2_top_grid_right_pane_g2

0x28f7,	// (0x00027dc6) vkb2_top_grid_right_pane_g3_ParamLimits

0x28f7,	// (0x00027dc6) vkb2_top_grid_right_pane_g3

0xcdb9,	// (0x00032288) vkb2_top_grid_right_pane_g4_ParamLimits

0xcdb9,	// (0x00032288) vkb2_top_grid_right_pane_g4

0x0003,

0xfda4,	// (0x00035273) vkb2_top_grid_right_pane_g_ParamLimits

0xfda4,	// (0x00035273) vkb2_top_grid_right_pane_g

0x2925,	// (0x00027df4) vkb2_top_cell_left_pane_g1

0x293c,	// (0x00027e0b) vkb2_cell_keypad_pane_g1_ParamLimits

0x293c,	// (0x00027e0b) vkb2_cell_keypad_pane_g1

0x73fb,	// (0x0002c8ca) vkb2_cell_keypad_pane_t1_ParamLimits

0x73fb,	// (0x0002c8ca) vkb2_cell_keypad_pane_t1

0x294a,	// (0x00027e19) vkb2_cell_bottom_grid_pane_ParamLimits

0x294a,	// (0x00027e19) vkb2_cell_bottom_grid_pane

0x2983,	// (0x00027e52) vkb2_cell_bottom_grid_pane_g1

0xdbe2,	// (0x000330b1) aid_call2_pane_cp02

0xdbea,	// (0x000330b9) aid_call_pane_cp02

0xdbf2,	// (0x000330c1) clock_digital_number_pane_cp10

0xdbfa,	// (0x000330c9) clock_digital_number_pane_cp11

0xdc02,	// (0x000330d1) clock_digital_number_pane_cp12

0xdc0a,	// (0x000330d9) clock_digital_number_pane_cp13

0xdc12,	// (0x000330e1) clock_digital_separator_pane_cp10

0x03d3,	// (0x000258a2) popup_clock_digital_analogue_window_cp2_g1

0x03d3,	// (0x000258a2) popup_clock_digital_analogue_window_cp2_g2

0xdc1a,	// (0x000330e9) popup_clock_digital_analogue_window_cp2_g3

0x03d3,	// (0x000258a2) popup_clock_digital_analogue_window_cp2_g4

0xdc1a,	// (0x000330e9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd59,	// (0x00035228) popup_clock_digital_analogue_window_cp2_g

0xdc22,	// (0x000330f1) popup_clock_digital_analogue_window_cp2_t1

0xdc30,	// (0x000330ff) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd64,	// (0x00035233) popup_clock_digital_analogue_window_cp2_t

0x5484,	// (0x0002a953) clock_digital_number_pane_cp10_g1

0x5484,	// (0x0002a953) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0003501b) clock_digital_number_pane_cp10_g

0x5484,	// (0x0002a953) clock_digital_separator_pane_cp10_g1

0x5484,	// (0x0002a953) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0003501b) clock_digital_separator_pane_cp10_g

0x6e2e,	// (0x0002c2fd) uniindi_top_pane_g3

0x6e3f,	// (0x0002c30e) uniindi_top_pane_g4

0x275d,	// (0x00027c2c) vkb2_row_keypad_pane_ParamLimits

0x275d,	// (0x00027c2c) vkb2_row_keypad_pane

0x299f,	// (0x00027e6e) vkb2_cell_t_keypad_pane_ParamLimits

0x299f,	// (0x00027e6e) vkb2_cell_t_keypad_pane

0x29af,	// (0x00027e7e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x29af,	// (0x00027e7e) vkb2_cell_t_keypad_pane_cp08

0x29c4,	// (0x00027e93) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x29c4,	// (0x00027e93) vkb2_cell_t_keypad_pane_cp09

0x29d8,	// (0x00027ea7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x29d8,	// (0x00027ea7) vkb2_cell_t_keypad_pane_cp01

0x29e9,	// (0x00027eb8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x29e9,	// (0x00027eb8) vkb2_cell_t_keypad_pane_cp02

0x29fa,	// (0x00027ec9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x29fa,	// (0x00027ec9) vkb2_cell_t_keypad_pane_cp03

0x2a0b,	// (0x00027eda) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2a0b,	// (0x00027eda) vkb2_cell_t_keypad_pane_cp04

0x2a1c,	// (0x00027eeb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2a1c,	// (0x00027eeb) vkb2_cell_t_keypad_pane_cp05

0x2a2d,	// (0x00027efc) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2a2d,	// (0x00027efc) vkb2_cell_t_keypad_pane_cp06

0x2a40,	// (0x00027f0f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2a40,	// (0x00027f0f) vkb2_cell_t_keypad_pane_cp07

0x2a55,	// (0x00027f24) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2a55,	// (0x00027f24) vkb2_cell_t_keypad_pane_cp10

0x56ff,	// (0x0002abce) vkb2_cell_t_keypad_pane_g1

0x7412,	// (0x0002c8e1) vkb2_cell_t_keypad_pane_t1

0xa1ab,	// (0x0002f67a) popup_grid_graphic2_window

0xdf5c,	// (0x0003342b) aid_size_cell_graphic2_ParamLimits

0xdf5c,	// (0x0003342b) aid_size_cell_graphic2

0xdf9a,	// (0x00033469) bg_popup_window_pane_cp21_ParamLimits

0xdf9a,	// (0x00033469) bg_popup_window_pane_cp21

0xdfa8,	// (0x00033477) graphic2_pages_pane_ParamLimits

0xdfa8,	// (0x00033477) graphic2_pages_pane

0xe000,	// (0x000334cf) grid_graphic2_control_pane_ParamLimits

0xe000,	// (0x000334cf) grid_graphic2_control_pane

0xe048,	// (0x00033517) grid_graphic2_pane_ParamLimits

0xe048,	// (0x00033517) grid_graphic2_pane

0xe0d3,	// (0x000335a2) cell_graphic2_pane

0xa1ab,	// (0x0002f67a) main_comp_mode_pane

0x669f,	// (0x0002bb6e) list_ai3_gene_pane_ParamLimits

0xd91f,	// (0x00032dee) bg_popup_window_pane_cp19_ParamLimits

0x6a73,	// (0x0002bf42) bg_touch_area_indi_pane_ParamLimits

0x6a73,	// (0x0002bf42) bg_touch_area_indi_pane

0x6a89,	// (0x0002bf58) bg_touch_area_indi_pane_cp01_ParamLimits

0x6a89,	// (0x0002bf58) bg_touch_area_indi_pane_cp01

0x6aa1,	// (0x0002bf70) bg_touch_area_indi_pane_cp02_ParamLimits

0x6aa1,	// (0x0002bf70) bg_touch_area_indi_pane_cp02

0x6abb,	// (0x0002bf8a) bg_touch_area_indi_pane_cp03_ParamLimits

0x6abb,	// (0x0002bf8a) bg_touch_area_indi_pane_cp03

0x6ad5,	// (0x0002bfa4) popup_slider_window_g1_ParamLimits

0x6af1,	// (0x0002bfc0) popup_slider_window_g2_ParamLimits

0x6b0d,	// (0x0002bfdc) popup_slider_window_g3_ParamLimits

0xfcee,	// (0x000351bd) popup_slider_window_g_ParamLimits

0x6b69,	// (0x0002c038) popup_slider_window_t1_ParamLimits

0x6bdd,	// (0x0002c0ac) small_volume_slider_vertical_pane_ParamLimits

0xe0d3,	// (0x000335a2) cell_graphic2_pane_ParamLimits

0xe136,	// (0x00033605) bg_button_pane_cp10_ParamLimits

0xe136,	// (0x00033605) bg_button_pane_cp10

0xe149,	// (0x00033618) bg_button_pane_cp11_ParamLimits

0xe149,	// (0x00033618) bg_button_pane_cp11

0xe15c,	// (0x0003362b) graphic2_pages_pane_g1_ParamLimits

0xe15c,	// (0x0003362b) graphic2_pages_pane_g1

0xe177,	// (0x00033646) graphic2_pages_pane_g2_ParamLimits

0xe177,	// (0x00033646) graphic2_pages_pane_g2

0x0001,

0xfdb2,	// (0x00035281) graphic2_pages_pane_g_ParamLimits

0xfdb2,	// (0x00035281) graphic2_pages_pane_g

0xe18f,	// (0x0003365e) graphic2_pages_pane_t1_ParamLimits

0xe18f,	// (0x0003365e) graphic2_pages_pane_t1

0xe1a7,	// (0x00033676) cell_graphic2_control_pane_ParamLimits

0xe1a7,	// (0x00033676) cell_graphic2_control_pane

0xe1db,	// (0x000336aa) cell_graphic2_pane_g1_ParamLimits

0xe1db,	// (0x000336aa) cell_graphic2_pane_g1

0xc563,	// (0x00031a32) cell_graphic2_pane_g2_ParamLimits

0xc563,	// (0x00031a32) cell_graphic2_pane_g2

0xe1e8,	// (0x000336b7) cell_graphic2_pane_g3_ParamLimits

0xe1e8,	// (0x000336b7) cell_graphic2_pane_g3

0xc570,	// (0x00031a3f) cell_graphic2_pane_g4_ParamLimits

0xc570,	// (0x00031a3f) cell_graphic2_pane_g4

0xe1f5,	// (0x000336c4) cell_graphic2_pane_g5_ParamLimits

0xe1f5,	// (0x000336c4) cell_graphic2_pane_g5

0x0004,

0xfdb7,	// (0x00035286) cell_graphic2_pane_g_ParamLimits

0xfdb7,	// (0x00035286) cell_graphic2_pane_g

0xe215,	// (0x000336e4) cell_graphic2_pane_t1_ParamLimits

0xe215,	// (0x000336e4) cell_graphic2_pane_t1

0x3ac3,	// (0x00028f92) grid_highlight_pane_cp11_ParamLimits

0x3ac3,	// (0x00028f92) grid_highlight_pane_cp11

0xa79e,	// (0x0002fc6d) bg_button_pane_cp05

0xe24a,	// (0x00033719) cell_graphic2_control_pane_g1

0x5484,	// (0x0002a953) bg_touch_area_indi_pane_g1

0x76ec,	// (0x0002cbbb) aid_cmod_rocker_key_size

0x76f6,	// (0x0002cbc5) aid_cmode_itu_key_size

0x7700,	// (0x0002cbcf) main_cmode_video_pane

0x770a,	// (0x0002cbd9) main_comp_mode_itu_pane

0x7716,	// (0x0002cbe5) main_comp_mode_rocker_pane

0x7722,	// (0x0002cbf1) cell_cmode_rocker_pane_ParamLimits

0x7722,	// (0x0002cbf1) cell_cmode_rocker_pane

0x7736,	// (0x0002cc05) cell_cmode_itu_pane_ParamLimits

0x7736,	// (0x0002cc05) cell_cmode_itu_pane

0xd244,	// (0x00032713) bg_button_pane_cp06_ParamLimits

0xd244,	// (0x00032713) bg_button_pane_cp06

0x56ff,	// (0x0002abce) cell_cmode_rocker_pane_g1_ParamLimits

0x56ff,	// (0x0002abce) cell_cmode_rocker_pane_g1

0x6c84,	// (0x0002c153) cell_cmode_rocker_pane_g2_ParamLimits

0x6c84,	// (0x0002c153) cell_cmode_rocker_pane_g2

0x0001,

0xfdc7,	// (0x00035296) cell_cmode_rocker_pane_g_ParamLimits

0xfdc7,	// (0x00035296) cell_cmode_rocker_pane_g

0xa1ab,	// (0x0002f67a) bg_button_pane_cp07

0x774d,	// (0x0002cc1c) cell_cmode_itu_pane_g1

0x7756,	// (0x0002cc25) cell_cmode_itu_pane_t1

0x7764,	// (0x0002cc33) cell_cmode_itu_pane_t2

0x0001,

0xfdcc,	// (0x0003529b) cell_cmode_itu_pane_t

0x6eb2,	// (0x0002c381) aid_touch_ctrl_left

0x6eba,	// (0x0002c389) aid_touch_ctrl_right

0xa1ab,	// (0x0002f67a) compa_mode_pane

0xe270,	// (0x0003373f) aid_cmod_rocker_key_size_cp

0xe27a,	// (0x00033749) aid_cmode_itu_key_size_cp

0x7786,	// (0x0002cc55) compa_mode_pane_g1

0x778e,	// (0x0002cc5d) compa_mode_pane_g2

0x7796,	// (0x0002cc65) compa_mode_pane_g3

0x0002,

0xfdd1,	// (0x000352a0) compa_mode_pane_g

0xe284,	// (0x00033753) main_comp_mode_itu_pane_cp

0xe28c,	// (0x0003375b) main_comp_mode_rocker_pane_cp

0xe294,	// (0x00033763) cell_cmode_itu_pane_cp_ParamLimits

0xe294,	// (0x00033763) cell_cmode_itu_pane_cp

0xe2a9,	// (0x00033778) cell_cmode_rocker_pane_cp_ParamLimits

0xe2a9,	// (0x00033778) cell_cmode_rocker_pane_cp

0xd244,	// (0x00032713) bg_button_pane_cp06_cp_ParamLimits

0xd244,	// (0x00032713) bg_button_pane_cp06_cp

0x56ff,	// (0x0002abce) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x56ff,	// (0x0002abce) cell_cmode_rocker_pane_g1_cp

0x5484,	// (0x0002a953) cell_cmode_rocker_pane_g2_cp

0xa1ab,	// (0x0002f67a) bg_button_pane_cp07_cp

0xe2bb,	// (0x0003378a) cell_cmode_itu_pane_g1_cp

0xe2c4,	// (0x00033793) cell_cmode_itu_pane_t1_cp

0xe2c4,	// (0x00033793) cell_cmode_itu_pane_t2_cp

0xc17e,	// (0x0003164d) settings_code_pane_cp2

0xa4b7,	// (0x0002f986) bg_popup_window_pane_cp3_ParamLimits

0xcf50,	// (0x0003241f) heading_pane_cp3_ParamLimits

0xcf5c,	// (0x0003242b) listscroll_popup_graphic_pane_ParamLimits

0x204c,	// (0x0002751b) fep_hwr_aid_pane_ParamLimits

0x2431,	// (0x00027900) aid_touch_sctrl_top_ParamLimits

0x243e,	// (0x0002790d) sctrl_sk_top_pane_g1_ParamLimits

0x56ff,	// (0x0002abce) sctrl_sk_top_pane_g2_ParamLimits

0xfd07,	// (0x000351d6) sctrl_sk_top_pane_g_ParamLimits

0x244b,	// (0x0002791a) sctrl_sk_top_pane_t1_ParamLimits

0x2431,	// (0x00027900) aid_touch_sctrl_bottom_ParamLimits

0x244b,	// (0x0002791a) sctrl_sk_bottom_pane_t1_ParamLimits

0x6df8,	// (0x0002c2c7) aid_area_touch_clock

0xcbe7,	// (0x000320b6) aid_vkb2_area_top_pane_cell_ParamLimits

0xcbe7,	// (0x000320b6) aid_vkb2_area_top_pane_cell

0xcc92,	// (0x00032161) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcc92,	// (0x00032161) aid_vkb2_area_bottom_pane_cell

0x735d,	// (0x0002c82c) popup_char_count_window

0x77ec,	// (0x0002ccbb) popup_char_count_window_g1

0x77f5,	// (0x0002ccc4) popup_char_count_window_g2

0x77fe,	// (0x0002cccd) popup_char_count_window_g3

0x0002,

0xfdd8,	// (0x000352a7) popup_char_count_window_g

0x7807,	// (0x0002ccd6) popup_char_count_window_t1

0x24ee,	// (0x000279bd) popup_fep_char_preview_window_ParamLimits

0x24ee,	// (0x000279bd) popup_fep_char_preview_window

0xcc07,	// (0x000320d6) vkb2_top_candi_pane_ParamLimits

0xcc07,	// (0x000320d6) vkb2_top_candi_pane

0xe2d2,	// (0x000337a1) cell_vkb2_top_candi_pane_ParamLimits

0xe2d2,	// (0x000337a1) cell_vkb2_top_candi_pane

0x344c,	// (0x0002891b) bg_popup_fep_char_preview_window_ParamLimits

0x344c,	// (0x0002891b) bg_popup_fep_char_preview_window

0x2a6a,	// (0x00027f39) popup_fep_char_preview_window_t1_ParamLimits

0x2a6a,	// (0x00027f39) popup_fep_char_preview_window_t1

0x7866,	// (0x0002cd35) bg_popup_fep_char_preview_window_g1

0x786e,	// (0x0002cd3d) bg_popup_fep_char_preview_window_g2

0x7876,	// (0x0002cd45) bg_popup_fep_char_preview_window_g3

0x787e,	// (0x0002cd4d) bg_popup_fep_char_preview_window_g4

0x7886,	// (0x0002cd55) bg_popup_fep_char_preview_window_g5

0x2aa4,	// (0x00027f73) bg_popup_fep_char_preview_window_g6

0x788e,	// (0x0002cd5d) bg_popup_fep_char_preview_window_g7

0x7896,	// (0x0002cd65) bg_popup_fep_char_preview_window_g8

0x789e,	// (0x0002cd6d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddf,	// (0x000352ae) bg_popup_fep_char_preview_window_g

0x56ff,	// (0x0002abce) cell_vkb2_top_candi_pane_g1_ParamLimits

0x56ff,	// (0x0002abce) cell_vkb2_top_candi_pane_g1

0x5b71,	// (0x0002b040) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5b71,	// (0x0002b040) cell_vkb2_top_candi_pane_g2

0x5b92,	// (0x0002b061) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5b92,	// (0x0002b061) cell_vkb2_top_candi_pane_g3

0x2aac,	// (0x00027f7b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2aac,	// (0x00027f7b) cell_vkb2_top_candi_pane_g4

0x78a6,	// (0x0002cd75) cell_vkb2_top_candi_pane_g5_ParamLimits

0x78a6,	// (0x0002cd75) cell_vkb2_top_candi_pane_g5

0x6c84,	// (0x0002c153) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6c84,	// (0x0002c153) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf2,	// (0x000352c1) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf2,	// (0x000352c1) cell_vkb2_top_candi_pane_g

0x2acd,	// (0x00027f9c) cell_vkb2_top_candi_pane_t1

0x1eee,	// (0x000273bd) aid_size_touch_slider_mark_ParamLimits

0x1eee,	// (0x000273bd) aid_size_touch_slider_mark

0xdfe4,	// (0x000334b3) grid_graphic2_catg_pane_ParamLimits

0xdfe4,	// (0x000334b3) grid_graphic2_catg_pane

0xe0a2,	// (0x00033571) popup_grid_graphic2_window_t1_ParamLimits

0xe0a2,	// (0x00033571) popup_grid_graphic2_window_t1

0xe0b8,	// (0x00033587) popup_grid_graphic2_window_t2_ParamLimits

0xe0b8,	// (0x00033587) popup_grid_graphic2_window_t2

0x0001,

0xfdad,	// (0x0003527c) popup_grid_graphic2_window_t_ParamLimits

0xfdad,	// (0x0003527c) popup_grid_graphic2_window_t

0xa79e,	// (0x0002fc6d) bg_button_pane_cp05_ParamLimits

0xe24a,	// (0x00033719) cell_graphic2_control_pane_g1_ParamLimits

0xe33c,	// (0x0003380b) cell_graphic2_catg_pane_ParamLimits

0xe33c,	// (0x0003380b) cell_graphic2_catg_pane

0xa1ab,	// (0x0002f67a) bg_button_pane_cp12

0xe34e,	// (0x0003381d) cell_graphic2_catg_pane_g1

0x6dc4,	// (0x0002c293) cell_tb_ext_pane_t1_ParamLimits

0x289c,	// (0x00027d6b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x289c,	// (0x00027d6b) vkb2_top_cell_right_narrow_pane

0x28b4,	// (0x00027d83) vkb2_top_cell_right_wide_pane_ParamLimits

0x28b4,	// (0x00027d83) vkb2_top_cell_right_wide_pane

0x203e,	// (0x0002750d) bg_vkb2_func_pane_ParamLimits

0x203e,	// (0x0002750d) bg_vkb2_func_pane

0x2925,	// (0x00027df4) vkb2_top_cell_left_pane_g1_ParamLimits

0x203e,	// (0x0002750d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x203e,	// (0x0002750d) bg_vkb2_fuc_pane_cp03

0x2983,	// (0x00027e52) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2d7c,	// (0x0002824b) bg_vkb2_func_pane_g1

0x2d84,	// (0x00028253) bg_vkb2_func_pane_g2

0x2d94,	// (0x00028263) bg_vkb2_func_pane_g3

0x2d8c,	// (0x0002825b) bg_vkb2_func_pane_g4

0x2d9c,	// (0x0002826b) bg_vkb2_func_pane_g5

0x2da4,	// (0x00028273) bg_vkb2_func_pane_g6

0x2dac,	// (0x0002827b) bg_vkb2_func_pane_g7

0x2db4,	// (0x00028283) bg_vkb2_func_pane_g8

0x2d74,	// (0x00028243) bg_vkb2_func_pane_g9

0x0008,

0xfdff,	// (0x000352ce) bg_vkb2_func_pane_g

0x203e,	// (0x0002750d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x203e,	// (0x0002750d) bg_vkb2_fuc_pane_cp01

0x2925,	// (0x00027df4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2925,	// (0x00027df4) vkb2_top_cell_right_wide_pane_g1

0x203e,	// (0x0002750d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x203e,	// (0x0002750d) bg_vkb2_fuc_pane_cp02

0x2983,	// (0x00027e52) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2983,	// (0x00027e52) vkb2_top_cell_right_narrow_pane_g1

0xd859,	// (0x00032d28) aid_touch_area_decrease_ParamLimits

0xd859,	// (0x00032d28) aid_touch_area_decrease

0xd893,	// (0x00032d62) aid_touch_area_increase_ParamLimits

0xd893,	// (0x00032d62) aid_touch_area_increase

0xd8bb,	// (0x00032d8a) aid_touch_area_mute_ParamLimits

0xd8bb,	// (0x00032d8a) aid_touch_area_mute

0xd8eb,	// (0x00032dba) aid_touch_area_slider_ParamLimits

0xd8eb,	// (0x00032dba) aid_touch_area_slider

0xd92b,	// (0x00032dfa) popup_slider_window_g4_ParamLimits

0xd92b,	// (0x00032dfa) popup_slider_window_g4

0xd953,	// (0x00032e22) popup_slider_window_g5_ParamLimits

0xd953,	// (0x00032e22) popup_slider_window_g5

0xd987,	// (0x00032e56) popup_slider_window_g6_ParamLimits

0xd987,	// (0x00032e56) popup_slider_window_g6

0x6b97,	// (0x0002c066) popup_slider_window_t2_ParamLimits

0x6b97,	// (0x0002c066) popup_slider_window_t2

0x0001,

0xfcfb,	// (0x000351ca) popup_slider_window_t_ParamLimits

0xfcfb,	// (0x000351ca) popup_slider_window_t

0xd9a3,	// (0x00032e72) slider_pane_ParamLimits

0xd9a3,	// (0x00032e72) slider_pane

0x78e2,	// (0x0002cdb1) slider_pane_g1_ParamLimits

0x78e2,	// (0x0002cdb1) slider_pane_g1

0x78f6,	// (0x0002cdc5) slider_pane_g2_ParamLimits

0x78f6,	// (0x0002cdc5) slider_pane_g2

0x790c,	// (0x0002cddb) slider_pane_g3_ParamLimits

0x790c,	// (0x0002cddb) slider_pane_g3

0x0003,

0xfe12,	// (0x000352e1) slider_pane_g_ParamLimits

0xfe12,	// (0x000352e1) slider_pane_g

0xb63b,	// (0x00030b0a) popup_tb_float_extension_window_ParamLimits

0xb63b,	// (0x00030b0a) popup_tb_float_extension_window

0x7938,	// (0x0002ce07) aid_size_cell_tb_float_ext

0xa1ab,	// (0x0002f67a) bg_popup_sub_window_cp28

0x7944,	// (0x0002ce13) grid_tb_float_ext_pane

0x7950,	// (0x0002ce1f) cell_tb_float_ext_pane_ParamLimits

0x7950,	// (0x0002ce1f) cell_tb_float_ext_pane

0x796c,	// (0x0002ce3b) cell_tb_float_ext_pane_g1

0x7975,	// (0x0002ce44) grid_highlight_pane_cp12

0xc541,	// (0x00031a10) cell_last_hwr_side_pane_ParamLimits

0xc541,	// (0x00031a10) cell_last_hwr_side_pane

0x5484,	// (0x0002a953) cell_last_hwr_side_pane_g1

0x797e,	// (0x0002ce4d) cell_last_hwr_side_pane_g2

0x0001,

0xfe1b,	// (0x000352ea) cell_last_hwr_side_pane_g

0xcd6e,	// (0x0003223d) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd6e,	// (0x0003223d) vkb2_area_bottom_space_btn_pane

0x56ff,	// (0x0002abce) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7412,	// (0x0002c8e1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2acd,	// (0x00027f9c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2aeb,	// (0x00027fba) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2aeb,	// (0x00027fba) vkb2_area_bottom_space_btn_pane_g1

0x2b25,	// (0x00027ff4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2b25,	// (0x00027ff4) vkb2_area_bottom_space_btn_pane_g2

0x2b5b,	// (0x0002802a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2b5b,	// (0x0002802a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe20,	// (0x000352ef) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe20,	// (0x000352ef) vkb2_area_bottom_space_btn_pane_g

0x20f5,	// (0x000275c4) cel_fep_hwr_func_pane_ParamLimits

0x20f5,	// (0x000275c4) cel_fep_hwr_func_pane

0xc516,	// (0x000319e5) cell_hwr_side_button_pane_ParamLimits

0xc516,	// (0x000319e5) cell_hwr_side_button_pane

0x6df8,	// (0x0002c2c7) aid_area_touch_clock_ParamLimits

0xa79e,	// (0x0002fc6d) bg_uniindi_top_pane_ParamLimits

0x6e0c,	// (0x0002c2db) uniindi_top_pane_g1_ParamLimits

0x6e22,	// (0x0002c2f1) uniindi_top_pane_g2_ParamLimits

0x6e2e,	// (0x0002c2fd) uniindi_top_pane_g3_ParamLimits

0x6e3f,	// (0x0002c30e) uniindi_top_pane_g4_ParamLimits

0xfd33,	// (0x00035202) uniindi_top_pane_g_ParamLimits

0x6e4c,	// (0x0002c31b) uniindi_top_pane_t1_ParamLimits

0xa79e,	// (0x0002fc6d) bg_vkb2_func_pane_cp01_ParamLimits

0xa79e,	// (0x0002fc6d) bg_vkb2_func_pane_cp01

0x7987,	// (0x0002ce56) cel_fep_hwr_func_pane_g1_ParamLimits

0x7987,	// (0x0002ce56) cel_fep_hwr_func_pane_g1

0xa79e,	// (0x0002fc6d) bg_vkb2_func_pane_cp02_ParamLimits

0xa79e,	// (0x0002fc6d) bg_vkb2_func_pane_cp02

0x7987,	// (0x0002ce56) cell_hwr_side_button_pane_g1_ParamLimits

0x7987,	// (0x0002ce56) cell_hwr_side_button_pane_g1

0x1b38,	// (0x00027007) status_pane_g4_ParamLimits

0x1b38,	// (0x00027007) status_pane_g4

0x1b52,	// (0x00027021) status_pane_t1

0x5223,	// (0x0002a6f2) form2_midp_gauge_slider_cont_pane

0x522b,	// (0x0002a6fa) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc44e,	// (0x0003191d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc460,	// (0x0003192f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x00034fce) form2_midp_gauge_slider_pane_t_ParamLimits

0x5261,	// (0x0002a730) form2_midp_slider_pane_ParamLimits

0x24ae,	// (0x0002797d) aid_size_cell_func_vkb2_ParamLimits

0x24ae,	// (0x0002797d) aid_size_cell_func_vkb2

0x7924,	// (0x0002cdf3) slider_pane_g4_ParamLimits

0x7924,	// (0x0002cdf3) slider_pane_g4

0xcdcf,	// (0x0003229e) form2_midp_gauge_slider_pane_t2_cp01

0xcddd,	// (0x000322ac) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcddd,	// (0x000322ac) form2_midp_gauge_slider_pane_t3_cp01

0x2bd0,	// (0x0002809f) form2_midp_slider_pane_cp01

0xa1ab,	// (0x0002f67a) navi_smil_pane

0x79c0,	// (0x0002ce8f) navi_smil_pane_g1

0x79c8,	// (0x0002ce97) navi_smil_pane_t1

0x7995,	// (0x0002ce64) form2_midp_slider_pane_g1

0x799e,	// (0x0002ce6d) form2_midp_slider_pane_g2

0x79a6,	// (0x0002ce75) form2_midp_slider_pane_g3

0x7995,	// (0x0002ce64) form2_midp_slider_pane_g4

0xe357,	// (0x00033826) form2_midp_slider_pane_g5

0x0004,

0xfe29,	// (0x000352f8) form2_midp_slider_pane_g

0x2b95,	// (0x00028064) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2b95,	// (0x00028064) vkb2_area_bottom_space_btn_pane_g4

0xb820,	// (0x00030cef) lc0_navi_pane_ParamLimits

0xb820,	// (0x00030cef) lc0_navi_pane

0xb890,	// (0x00030d5f) lc0_stat_indi_pane_ParamLimits

0xb890,	// (0x00030d5f) lc0_stat_indi_pane

0xb8a5,	// (0x00030d74) ls0_title_pane_ParamLimits

0xb8a5,	// (0x00030d74) ls0_title_pane

0xd244,	// (0x00032713) bg_popup_sub_pane_cp14_ParamLimits

0x6ddf,	// (0x0002c2ae) list_uniindi_pane_ParamLimits

0x6deb,	// (0x0002c2ba) uniindi_top_pane_ParamLimits

0x6e8a,	// (0x0002c359) list_single_uniindi_pane_g1_ParamLimits

0x6e9d,	// (0x0002c36c) list_single_uniindi_pane_t1_ParamLimits

0xcdfa,	// (0x000322c9) lc0_stat_clock_pane_ParamLimits

0xcdfa,	// (0x000322c9) lc0_stat_clock_pane

0xe360,	// (0x0003382f) lc0_stat_indi_pane_g1_ParamLimits

0xe360,	// (0x0003382f) lc0_stat_indi_pane_g1

0xe36d,	// (0x0003383c) lc0_stat_indi_pane_g2_ParamLimits

0xe36d,	// (0x0003383c) lc0_stat_indi_pane_g2

0x0001,

0xfe34,	// (0x00035303) lc0_stat_indi_pane_g_ParamLimits

0xfe34,	// (0x00035303) lc0_stat_indi_pane_g

0xce07,	// (0x000322d6) lc0_uni_indicator_pane_ParamLimits

0xce07,	// (0x000322d6) lc0_uni_indicator_pane

0xe37a,	// (0x00033849) ls0_title_pane_g1_ParamLimits

0xe37a,	// (0x00033849) ls0_title_pane_g1

0xe38e,	// (0x0003385d) ls0_title_pane_t1_ParamLimits

0xe38e,	// (0x0003385d) ls0_title_pane_t1

0xce14,	// (0x000322e3) lc0_uni_indicator_pane_g1_ParamLimits

0xce14,	// (0x000322e3) lc0_uni_indicator_pane_g1

0x7a3a,	// (0x0002cf09) lc0_stat_clock_pane_t1

0xa1ab,	// (0x0002f67a) main_ai5_pane

0x7a48,	// (0x0002cf17) ai5_sk_pane_ParamLimits

0x7a48,	// (0x0002cf17) ai5_sk_pane

0xe3bc,	// (0x0003388b) cell_ai5_widget_pane_ParamLimits

0xe3bc,	// (0x0003388b) cell_ai5_widget_pane

0x7ff1,	// (0x0002d4c0) aid_size_cell_widget_grid

0x8007,	// (0x0002d4d6) bg_ai5_widget_pane_ParamLimits

0x8007,	// (0x0002d4d6) bg_ai5_widget_pane

0x8071,	// (0x0002d540) cell_ai5_widget_pane_g2

0x8081,	// (0x0002d550) cell_ai5_widget_pane_g3

0x80a0,	// (0x0002d56f) cell_ai5_widget_pane_g4

0x80ac,	// (0x0002d57b) cell_ai5_widget_pane_g5

0xe713,	// (0x00033be2) cell_ai5_widget_pane_g6

0xe71f,	// (0x00033bee) cell_ai5_widget_pane_g7

0x810c,	// (0x0002d5db) cell_ai5_widget_pane_t1_ParamLimits

0x810c,	// (0x0002d5db) cell_ai5_widget_pane_t1

0x8129,	// (0x0002d5f8) cell_ai5_widget_pane_t2_ParamLimits

0x8129,	// (0x0002d5f8) cell_ai5_widget_pane_t2

0x8141,	// (0x0002d610) cell_ai5_widget_pane_t3_ParamLimits

0x8141,	// (0x0002d610) cell_ai5_widget_pane_t3

0x8159,	// (0x0002d628) cell_ai5_widget_pane_t4_ParamLimits

0x8159,	// (0x0002d628) cell_ai5_widget_pane_t4

0x8173,	// (0x0002d642) cell_ai5_widget_pane_t5_ParamLimits

0x8173,	// (0x0002d642) cell_ai5_widget_pane_t5

0x8192,	// (0x0002d661) cell_ai5_widget_pane_t6_ParamLimits

0x8192,	// (0x0002d661) cell_ai5_widget_pane_t6

0x81a4,	// (0x0002d673) cell_ai5_widget_pane_t7_ParamLimits

0x81a4,	// (0x0002d673) cell_ai5_widget_pane_t7

0x81bd,	// (0x0002d68c) cell_ai5_widget_pane_t8_ParamLimits

0x81bd,	// (0x0002d68c) cell_ai5_widget_pane_t8

0x0009,

0xfe4e,	// (0x0003531d) cell_ai5_widget_pane_t_ParamLimits

0xfe4e,	// (0x0003531d) cell_ai5_widget_pane_t

0x8209,	// (0x0002d6d8) grid_ai5_widget_pane

0xd244,	// (0x00032713) highlight_cell_ai5_widget_pane_ParamLimits

0xd244,	// (0x00032713) highlight_cell_ai5_widget_pane

0xe72b,	// (0x00033bfa) ai5_sk_left_pane

0xe735,	// (0x00033c04) ai5_sk_middle_pane

0xe73f,	// (0x00033c0e) ai5_sk_right_pane

0x823f,	// (0x0002d70e) bg_ai5_widget_pane_g1_ParamLimits

0x823f,	// (0x0002d70e) bg_ai5_widget_pane_g1

0x824b,	// (0x0002d71a) bg_ai5_widget_pane_g2_ParamLimits

0x824b,	// (0x0002d71a) bg_ai5_widget_pane_g2

0x8257,	// (0x0002d726) bg_ai5_widget_pane_g3_ParamLimits

0x8257,	// (0x0002d726) bg_ai5_widget_pane_g3

0x8263,	// (0x0002d732) bg_ai5_widget_pane_g4_ParamLimits

0x8263,	// (0x0002d732) bg_ai5_widget_pane_g4

0x826f,	// (0x0002d73e) bg_ai5_widget_pane_g5_ParamLimits

0x826f,	// (0x0002d73e) bg_ai5_widget_pane_g5

0x827b,	// (0x0002d74a) bg_ai5_widget_pane_g6_ParamLimits

0x827b,	// (0x0002d74a) bg_ai5_widget_pane_g6

0x8287,	// (0x0002d756) bg_ai5_widget_pane_g7_ParamLimits

0x8287,	// (0x0002d756) bg_ai5_widget_pane_g7

0x8293,	// (0x0002d762) bg_ai5_widget_pane_g8_ParamLimits

0x8293,	// (0x0002d762) bg_ai5_widget_pane_g8

0x829f,	// (0x0002d76e) bg_ai5_widget_pane_g9_ParamLimits

0x829f,	// (0x0002d76e) bg_ai5_widget_pane_g9

0x0008,

0xfe63,	// (0x00035332) bg_ai5_widget_pane_g_ParamLimits

0xfe63,	// (0x00035332) bg_ai5_widget_pane_g

0x82c7,	// (0x0002d796) cell_shortcut_ai5_widget_pane_ParamLimits

0x82c7,	// (0x0002d796) cell_shortcut_ai5_widget_pane

0xa5b3,	// (0x0002fa82) bg_cell_shortcut_ai5_widget_pane

0x82da,	// (0x0002d7a9) cell_grid_ai5_widget_pane_g1

0x82e3,	// (0x0002d7b2) highlight_cell_shortcut_ai5_widget_pane

0x2d84,	// (0x00028253) ai5_sk_left_pane_g1

0x82eb,	// (0x0002d7ba) ai5_sk_left_pane_g2

0x82f3,	// (0x0002d7c2) ai5_sk_left_pane_g3

0x82fb,	// (0x0002d7ca) ai5_sk_left_pane_g4

0x0003,

0xfe76,	// (0x00035345) ai5_sk_left_pane_g

0x8303,	// (0x0002d7d2) ai5_sk_left_pane_t1

0x2d7c,	// (0x0002824b) ai5_sk_right_pane_g1

0x8311,	// (0x0002d7e0) ai5_sk_right_pane_g2

0x8319,	// (0x0002d7e8) ai5_sk_right_pane_g3

0x8321,	// (0x0002d7f0) ai5_sk_right_pane_g4

0x0003,

0xfe7f,	// (0x0003534e) ai5_sk_right_pane_g

0x8329,	// (0x0002d7f8) ai5_sk_right_pane_t1

0x2d7c,	// (0x0002824b) ai5_sk_middle_pane_g1

0x2d84,	// (0x00028253) ai5_sk_middle_pane_g2

0x2d9c,	// (0x0002826b) ai5_sk_middle_pane_g3

0x8319,	// (0x0002d7e8) ai5_sk_middle_pane_g4

0x82f3,	// (0x0002d7c2) ai5_sk_middle_pane_g5

0x8337,	// (0x0002d806) ai5_sk_middle_pane_g6

0xe765,	// (0x00033c34) ai5_sk_middle_pane_g7

0x0006,

0xfe88,	// (0x00035357) ai5_sk_middle_pane_g

0xb70c,	// (0x00030bdb) aid_touch_area_size_lc0_ParamLimits

0xb70c,	// (0x00030bdb) aid_touch_area_size_lc0

0x2294,	// (0x00027763) cell_hwr_candidate_pane_t1_ParamLimits

0x17ef,	// (0x00026cbe) aid_touch_navi_pane

0xb9b0,	// (0x00030e7f) status_dt_navi_pane_ParamLimits

0xb9b0,	// (0x00030e7f) status_dt_navi_pane

0xb9c8,	// (0x00030e97) status_dt_sta_pane_ParamLimits

0xb9c8,	// (0x00030e97) status_dt_sta_pane

0xe76d,	// (0x00033c3c) dt_sta_controll_pane

0xe77a,	// (0x00033c49) dt_sta_indi_pane

0xe787,	// (0x00033c56) dt_sta_title_pane

0xa79e,	// (0x0002fc6d) bg_dt_sta_indi_pane_ParamLimits

0xa79e,	// (0x0002fc6d) bg_dt_sta_indi_pane

0xe799,	// (0x00033c68) dt_sta_battery_pane

0xe7a1,	// (0x00033c70) dt_sta_indi_pane_g1

0xe7aa,	// (0x00033c79) dt_sta_indi_pane_g2

0xe7b3,	// (0x00033c82) dt_sta_indi_pane_g3

0x0002,

0xfe97,	// (0x00035366) dt_sta_indi_pane_g

0xe7bc,	// (0x00033c8b) dt_sta_signal_pane

0xd244,	// (0x00032713) bg_dt_sta_title_pane_ParamLimits

0xd244,	// (0x00032713) bg_dt_sta_title_pane

0xe7c5,	// (0x00033c94) dt_sta_title_pane_g1

0xe7cd,	// (0x00033c9c) dt_sta_title_pane_t1_ParamLimits

0xe7cd,	// (0x00033c9c) dt_sta_title_pane_t1

0xa1ab,	// (0x0002f67a) bg_dt_sta_control_pane

0xe7e2,	// (0x00033cb1) dt_sta_controll_pane_g1

0xe7eb,	// (0x00033cba) bg_dt_sta_title_pane_g1

0xe7f4,	// (0x00033cc3) bg_dt_sta_title_pane_g2

0xe7fd,	// (0x00033ccc) bg_dt_sta_title_pane_g3

0x0002,

0xfe9e,	// (0x0003536d) bg_dt_sta_title_pane_g

0x5484,	// (0x0002a953) bg_dt_sta_indi_pane_g1

0x83e5,	// (0x0002d8b4) dt_sta_signal_pane_g1

0x83ed,	// (0x0002d8bc) dt_sta_signal_pane_g2

0x0001,

0xfea5,	// (0x00035374) dt_sta_signal_pane_g

0x83f5,	// (0x0002d8c4) dt_sta_battery_pane_g1

0x83fe,	// (0x0002d8cd) dt_sta_battery_pane_t1

0x5484,	// (0x0002a953) bg_dt_sta_control_pane_g1

0x05c3,	// (0x00025a92) fep_china_uni_eep_pane

0x05cb,	// (0x00025a9a) fep_china_uni_entry_pane_ParamLimits

0x05db,	// (0x00025aaa) popup_fep_china_uni_window_g1_ParamLimits

0x05eb,	// (0x00025aba) popup_fep_china_uni_window_g2_ParamLimits

0x05eb,	// (0x00025aba) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00034bf2) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00034bf2) popup_fep_china_uni_window_g

0x840d,	// (0x0002d8dc) fep_china_uni_eep_pane_g1

0x8415,	// (0x0002d8e4) fep_china_uni_eep_pane_t1

0x79b7,	// (0x0002ce86) aid_touch_area_size_smil_player

0x1947,	// (0x00026e16) lc0_clock_pane

0x1b46,	// (0x00027015) status_pane_g5_ParamLimits

0x1b46,	// (0x00027015) status_pane_g5

0xb161,	// (0x00030630) popup_keymap_window

0x1b04,	// (0x00026fd3) status_icon_pane

0x8081,	// (0x0002d550) cell_ai5_widget_pane_g3_ParamLimits

0x80a0,	// (0x0002d56f) cell_ai5_widget_pane_g4_ParamLimits

0x80ac,	// (0x0002d57b) cell_ai5_widget_pane_g5_ParamLimits

0x80d0,	// (0x0002d59f) cell_ai5_widget_pane_g8_ParamLimits

0x80d0,	// (0x0002d59f) cell_ai5_widget_pane_g8

0x80e4,	// (0x0002d5b3) cell_ai5_widget_pane_g9_ParamLimits

0x80e4,	// (0x0002d5b3) cell_ai5_widget_pane_g9

0x80f8,	// (0x0002d5c7) cell_ai5_widget_pane_g10_ParamLimits

0x80f8,	// (0x0002d5c7) cell_ai5_widget_pane_g10

0x8424,	// (0x0002d8f3) status_icon_pane_g1

0xa1ab,	// (0x0002f67a) bg_popup_sub_pane_cp13

0x842c,	// (0x0002d8fb) popup_keymap_window_t1

0xae70,	// (0x0003033f) control_pane_g6_ParamLimits

0xae70,	// (0x0003033f) control_pane_g6

0xae7d,	// (0x0003034c) control_pane_g7_ParamLimits

0xae7d,	// (0x0003034c) control_pane_g7

0xae8a,	// (0x00030359) control_pane_g8_ParamLimits

0xae8a,	// (0x00030359) control_pane_g8

0xe76d,	// (0x00033c3c) dt_sta_controll_pane_ParamLimits

0xe77a,	// (0x00033c49) dt_sta_indi_pane_ParamLimits

0xe787,	// (0x00033c56) dt_sta_title_pane_ParamLimits

0xd186,	// (0x00032655) aid_size_touch_scroll_bar_cale

0xf2b6,	// (0x00034785) popup_discreet_window_ParamLimits

0xf2b6,	// (0x00034785) popup_discreet_window

0xa2f9,	// (0x0002f7c8) popup_sk_window

0x344c,	// (0x0002891b) bg_popup_sub_pane_cp28_ParamLimits

0x344c,	// (0x0002891b) bg_popup_sub_pane_cp28

0x843a,	// (0x0002d909) popup_discreet_window_g1_ParamLimits

0x843a,	// (0x0002d909) popup_discreet_window_g1

0x845a,	// (0x0002d929) popup_discreet_window_t1_ParamLimits

0x845a,	// (0x0002d929) popup_discreet_window_t1

0x8478,	// (0x0002d947) popup_discreet_window_t2_ParamLimits

0x8478,	// (0x0002d947) popup_discreet_window_t2

0x0002,

0xfeaa,	// (0x00035379) popup_discreet_window_t_ParamLimits

0xfeaa,	// (0x00035379) popup_discreet_window_t

0x2c06,	// (0x000280d5) popup_sk_window_g1

0x2c10,	// (0x000280df) popup_sk_window_g2

0x0001,

0xfeb1,	// (0x00035380) popup_sk_window_g

0x2c1a,	// (0x000280e9) popup_sk_window_t1

0x2c2a,	// (0x000280f9) popup_sk_window_t1_copy1

0x8071,	// (0x0002d540) cell_ai5_widget_pane_g2_ParamLimits

0x81cf,	// (0x0002d69e) cell_ai5_widget_pane_t9_ParamLimits

0x81cf,	// (0x0002d69e) cell_ai5_widget_pane_t9

0xa1ab,	// (0x0002f67a) main_fep_fshwr2_pane

0xce33,	// (0x00032302) aid_fshwr2_btn_pane

0xce42,	// (0x00032311) aid_fshwr2_syb_pane

0xce54,	// (0x00032323) aid_fshwr2_txt_pane

0xce63,	// (0x00032332) fshwr2_func_candi_pane

0xce74,	// (0x00032343) fshwr2_hwr_syb_pane

0xce8f,	// (0x0003235e) fshwr2_icf_pane

0xa1ab,	// (0x0002f67a) fshwr2_icf_bg_pane

0xe806,	// (0x00033cd5) fshwr2_icf_pane_t1_ParamLimits

0xe806,	// (0x00033cd5) fshwr2_icf_pane_t1

0x5484,	// (0x0002a953) fshwr2_func_candi_pane_g1

0x84e1,	// (0x0002d9b0) fshwr2_func_candi_row_pane_ParamLimits

0x84e1,	// (0x0002d9b0) fshwr2_func_candi_row_pane

0xe81e,	// (0x00033ced) cell_fshwr2_syb_pane_ParamLimits

0xe81e,	// (0x00033ced) cell_fshwr2_syb_pane

0x56ff,	// (0x0002abce) fshwr2_hwr_syb_pane_g1_ParamLimits

0x56ff,	// (0x0002abce) fshwr2_hwr_syb_pane_g1

0xa1ab,	// (0x0002f67a) bg_popup_call_pane_cp01

0x850c,	// (0x0002d9db) fshwr2_func_candi_cell_pane_ParamLimits

0x850c,	// (0x0002d9db) fshwr2_func_candi_cell_pane

0x853e,	// (0x0002da0d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x853e,	// (0x0002da0d) fshwr2_func_candi_cell_bg_pane

0x8558,	// (0x0002da27) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8558,	// (0x0002da27) fshwr2_func_candi_cell_pane_g1

0x8578,	// (0x0002da47) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8578,	// (0x0002da47) fshwr2_func_candi_cell_pane_t1

0xa1ab,	// (0x0002f67a) bg_button_pane_cp08

0x0c09,	// (0x000260d8) cell_fshwr2_syb_bg_pane

0xe837,	// (0x00033d06) cell_fshwr2_syb_bg_pane_g1

0xe83f,	// (0x00033d0e) cell_fshwr2_syb_bg_pane_t1

0xd244,	// (0x00032713) main_tmo_pane

0xbf54,	// (0x00031423) uni_indicator_pane_g1_ParamLimits

0xbf69,	// (0x00031438) uni_indicator_pane_g2_ParamLimits

0xbf7e,	// (0x0003144d) uni_indicator_pane_g3_ParamLimits

0xbf94,	// (0x00031463) uni_indicator_pane_g4_ParamLimits

0xbf94,	// (0x00031463) uni_indicator_pane_g4

0xbfa8,	// (0x00031477) uni_indicator_pane_g5_ParamLimits

0xbfa8,	// (0x00031477) uni_indicator_pane_g5

0xbfbc,	// (0x0003148b) uni_indicator_pane_g6_ParamLimits

0xbfbc,	// (0x0003148b) uni_indicator_pane_g6

0xf922,	// (0x00034df1) uni_indicator_pane_g_ParamLimits

0xd829,	// (0x00032cf8) popup_tmo_note_window_ParamLimits

0xd829,	// (0x00032cf8) popup_tmo_note_window

0xd244,	// (0x00032713) fshwr2_bg_pane

0x8569,	// (0x0002da38) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8569,	// (0x0002da38) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb6,	// (0x00035385) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb6,	// (0x00035385) fshwr2_func_candi_cell_pane_g

0x5484,	// (0x0002a953) bg_popup_window_pane_cp01

0x85a2,	// (0x0002da71) bg_popup_window_pane_g1_cp01

0x85ab,	// (0x0002da7a) bg_popup_window_pane_cp22_ParamLimits

0x85ab,	// (0x0002da7a) bg_popup_window_pane_cp22

0x85b9,	// (0x0002da88) listscroll_tmo_link_pane_ParamLimits

0x85b9,	// (0x0002da88) listscroll_tmo_link_pane

0x85f9,	// (0x0002dac8) popup_tmo_note_window_g1_ParamLimits

0x85f9,	// (0x0002dac8) popup_tmo_note_window_g1

0x8606,	// (0x0002dad5) tmo_note_info_pane_ParamLimits

0x8606,	// (0x0002dad5) tmo_note_info_pane

0xe84e,	// (0x00033d1d) list_tmo_note_info_pane_g1_ParamLimits

0xe84e,	// (0x00033d1d) list_tmo_note_info_pane_g1

0x8637,	// (0x0002db06) list_tmo_note_info_pane_g2_ParamLimits

0x8637,	// (0x0002db06) list_tmo_note_info_pane_g2

0x0001,

0xfebb,	// (0x0003538a) list_tmo_note_info_pane_g_ParamLimits

0xfebb,	// (0x0003538a) list_tmo_note_info_pane_g

0x8653,	// (0x0002db22) list_tmo_note_info_text_pane_ParamLimits

0x8653,	// (0x0002db22) list_tmo_note_info_text_pane

0x86d8,	// (0x0002dba7) list_tmo_link_pane

0x86e5,	// (0x0002dbb4) scroll_pane_cp20

0x86f2,	// (0x0002dbc1) list_single_tmo_link_pane_ParamLimits

0x86f2,	// (0x0002dbc1) list_single_tmo_link_pane

0x8702,	// (0x0002dbd1) list_single_tmo_link_pane_t1

0x8710,	// (0x0002dbdf) list_tmo_note_info_text_pane_t1_ParamLimits

0x8710,	// (0x0002dbdf) list_tmo_note_info_text_pane_t1

0xa9ec,	// (0x0002febb) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa9ec,	// (0x0002febb) aid_size_touch_scroll_bar_cp01

0x9dba,	// (0x0002f289) aid_size_touch_slider_marker

0xa2e9,	// (0x0002f7b8) popup_settings_window_ParamLimits

0xa2e9,	// (0x0002f7b8) popup_settings_window

0xed05,	// (0x000341d4) popup_candi_list_indi_window

0x17ef,	// (0x00026cbe) aid_touch_navi_pane_ParamLimits

0x2405,	// (0x000278d4) rs_clock_indi_pane

0x240e,	// (0x000278dd) sctrl_sk_bottom_pane_ParamLimits

0x241f,	// (0x000278ee) sctrl_sk_top_pane_ParamLimits

0x2508,	// (0x000279d7) popup_fep_tooltip_window

0x7ff1,	// (0x0002d4c0) aid_size_cell_widget_grid_ParamLimits

0x8065,	// (0x0002d534) cell_ai5_widget_pane_g1_ParamLimits

0x8065,	// (0x0002d534) cell_ai5_widget_pane_g1

0xe713,	// (0x00033be2) cell_ai5_widget_pane_g6_ParamLimits

0xe71f,	// (0x00033bee) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe39,	// (0x00035308) cell_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x00035308) cell_ai5_widget_pane_g

0x81f3,	// (0x0002d6c2) cell_ai5_widget_pane_t10_ParamLimits

0x81f3,	// (0x0002d6c2) cell_ai5_widget_pane_t10

0x8209,	// (0x0002d6d8) grid_ai5_widget_pane_ParamLimits

0xe749,	// (0x00033c18) cell_contacts_ai5_widget_pane_ParamLimits

0xe749,	// (0x00033c18) cell_contacts_ai5_widget_pane

0x848d,	// (0x0002d95c) popup_discreet_window_t3_ParamLimits

0x848d,	// (0x0002d95c) popup_discreet_window_t3

0x2c9a,	// (0x00028169) popup_fshwr2_char_preview_window_ParamLimits

0x2c9a,	// (0x00028169) popup_fshwr2_char_preview_window

0xe865,	// (0x00033d34) tmo_note_info_pane_t1

0xe87a,	// (0x00033d49) tmo_note_info_pane_t2

0xe893,	// (0x00033d62) tmo_note_info_pane_t3

0x86b4,	// (0x0002db83) tmo_note_info_pane_t4

0x86c6,	// (0x0002db95) tmo_note_info_pane_t5

0x0004,

0xfec0,	// (0x0003538f) tmo_note_info_pane_t

0x86d8,	// (0x0002dba7) list_tmo_link_pane_ParamLimits

0x86e5,	// (0x0002dbb4) scroll_pane_cp20_ParamLimits

0xa1ab,	// (0x0002f67a) bg_popup_fep_char_preview_window_cp01

0x8729,	// (0x0002dbf8) popup_fshwr2_char_preview_window_t1

0x8737,	// (0x0002dc06) popup_candi_list_indi_window_g1

0x8740,	// (0x0002dc0f) bg_cell_contacts_ai5_widget_pane

0x874c,	// (0x0002dc1b) cell_contacts_ai5_widget_pane_g1

0x875c,	// (0x0002dc2b) cell_contacts_ai5_widget_pane_g2

0x8768,	// (0x0002dc37) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecb,	// (0x0003539a) cell_contacts_ai5_widget_pane_g

0x8774,	// (0x0002dc43) cell_contacts_ai5_widget_pane_t1

0xd244,	// (0x00032713) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe90d,	// (0x00033ddc) settings_container_pane

0x0c09,	// (0x000260d8) listscroll_set_pane_copy1

0x4b5b,	// (0x0002a02a) scroll_pane_cp121_copy1

0x87fa,	// (0x0002dcc9) set_content_pane_copy1

0xe919,	// (0x00033de8) aid_height_set_list_copy1_ParamLimits

0xe919,	// (0x00033de8) aid_height_set_list_copy1

0x41df,	// (0x000296ae) aid_size_parent_copy1_ParamLimits

0x41df,	// (0x000296ae) aid_size_parent_copy1

0xe925,	// (0x00033df4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe925,	// (0x00033df4) button_value_adjust_pane_cp6_copy1

0x1176,	// (0x00026645) list_highlight_pane_cp2_copy1_ParamLimits

0x1176,	// (0x00026645) list_highlight_pane_cp2_copy1

0xe939,	// (0x00033e08) list_set_pane_copy1_ParamLimits

0xe939,	// (0x00033e08) list_set_pane_copy1

0xe8a8,	// (0x00033d77) main_pane_set_t1_copy1_ParamLimits

0xe8a8,	// (0x00033d77) main_pane_set_t1_copy1

0xe8e2,	// (0x00033db1) main_pane_set_t2_copy1_ParamLimits

0xe8e2,	// (0x00033db1) main_pane_set_t2_copy1

0xea00,	// (0x00033ecf) main_pane_set_t3_copy1

0xea0e,	// (0x00033edd) main_pane_set_t4_copy1

0xe901,	// (0x00033dd0) set_content_pane_g1_copy1_ParamLimits

0xe901,	// (0x00033dd0) set_content_pane_g1_copy1

0xea1c,	// (0x00033eeb) setting_code_pane_copy1

0x890d,	// (0x0002dddc) setting_slider_graphic_pane_copy1

0x890d,	// (0x0002dddc) setting_slider_pane_copy1

0x890d,	// (0x0002dddc) setting_text_pane_copy1

0x890d,	// (0x0002dddc) setting_volume_pane_copy1

0xea1c,	// (0x00033eeb) settings_code_pane_cp2_copy1

0xea24,	// (0x00033ef3) settings_code_pane_cp_copy1_ParamLimits

0xea24,	// (0x00033ef3) settings_code_pane_cp_copy1

0xea38,	// (0x00033f07) volume_set_pane_copy1

0xea44,	// (0x00033f13) volume_set_pane_g10_copy1

0xea50,	// (0x00033f1f) volume_set_pane_g1_copy1

0xea5a,	// (0x00033f29) volume_set_pane_g2_copy1

0xea64,	// (0x00033f33) volume_set_pane_g3_copy1

0xea6e,	// (0x00033f3d) volume_set_pane_g4_copy1

0xea78,	// (0x00033f47) volume_set_pane_g5_copy1

0xea82,	// (0x00033f51) volume_set_pane_g6_copy1

0xea8c,	// (0x00033f5b) volume_set_pane_g7_copy1

0xea96,	// (0x00033f65) volume_set_pane_g8_copy1

0xeaa0,	// (0x00033f6f) volume_set_pane_g9_copy1

0xa4b7,	// (0x0002f986) bg_set_opt_pane_cp_copy1_ParamLimits

0xa4b7,	// (0x0002f986) bg_set_opt_pane_cp_copy1

0x899b,	// (0x0002de6a) setting_slider_pane_t1_copy1_ParamLimits

0x899b,	// (0x0002de6a) setting_slider_pane_t1_copy1

0xeaaa,	// (0x00033f79) setting_slider_pane_t2_copy1_ParamLimits

0xeaaa,	// (0x00033f79) setting_slider_pane_t2_copy1

0xeac4,	// (0x00033f93) setting_slider_pane_t3_copy1_ParamLimits

0xeac4,	// (0x00033f93) setting_slider_pane_t3_copy1

0xeadc,	// (0x00033fab) slider_set_pane_copy1_ParamLimits

0xeadc,	// (0x00033fab) slider_set_pane_copy1

0xd2ab,	// (0x0003277a) set_opt_bg_pane_g1_copy2

0xd2b3,	// (0x00032782) set_opt_bg_pane_g2_copy2

0x8a01,	// (0x0002ded0) set_opt_bg_pane_g3_copy2

0xd2c3,	// (0x00032792) set_opt_bg_pane_g4_copy2

0xd2cb,	// (0x0003279a) set_opt_bg_pane_g5_copy2

0xd2d3,	// (0x000327a2) set_opt_bg_pane_g6_copy2

0xeaf2,	// (0x00033fc1) set_opt_bg_pane_g7_copy2

0x8a15,	// (0x0002dee4) set_opt_bg_pane_g8_copy2

0x8a1f,	// (0x0002deee) set_opt_bg_pane_g9_copy2

0x8a29,	// (0x0002def8) aid_size_touch_slider_mark_copy1_ParamLimits

0x8a29,	// (0x0002def8) aid_size_touch_slider_mark_copy1

0x8a3d,	// (0x0002df0c) slider_set_pane_g1_copy1

0x8a46,	// (0x0002df15) slider_set_pane_g2_copy1

0x5b2f,	// (0x0002affe) slider_set_pane_g3_copy1_ParamLimits

0x5b2f,	// (0x0002affe) slider_set_pane_g3_copy1

0x5b43,	// (0x0002b012) slider_set_pane_g4_copy1_ParamLimits

0x5b43,	// (0x0002b012) slider_set_pane_g4_copy1

0x5b5b,	// (0x0002b02a) slider_set_pane_g5_copy1_ParamLimits

0x5b5b,	// (0x0002b02a) slider_set_pane_g5_copy1

0x5b2f,	// (0x0002affe) slider_set_pane_g6_copy1_ParamLimits

0x5b2f,	// (0x0002affe) slider_set_pane_g6_copy1

0xeafc,	// (0x00033fcb) slider_set_pane_g7_copy1_ParamLimits

0xeafc,	// (0x00033fcb) slider_set_pane_g7_copy1

0xa2a5,	// (0x0002f774) bg_set_opt_pane_cp2_copy1

0x8a64,	// (0x0002df33) setting_slider_graphic_pane_g1_copy1

0xeb12,	// (0x00033fe1) setting_slider_graphic_pane_t1_copy1

0xeb22,	// (0x00033ff1) setting_slider_graphic_pane_t2_copy1

0xeb32,	// (0x00034001) slider_set_pane_cp_copy1

0x8a9d,	// (0x0002df6c) input_focus_pane_cp1_copy1

0x8aa6,	// (0x0002df75) list_set_text_pane_copy1

0x8aae,	// (0x0002df7d) setting_text_pane_g1_copy1

0xf430,	// (0x000348ff) set_text_pane_t1_copy1

0x8a9d,	// (0x0002df6c) input_focus_pane_cp2_copy1

0x8aae,	// (0x0002df7d) setting_code_pane_g1_copy1

0xeb3a,	// (0x00034009) setting_code_pane_t1_copy1

0xeb48,	// (0x00034017) list_set_graphic_pane_copy1

0xa2a5,	// (0x0002f774) bg_set_opt_pane_cp4_copy1

0xaca5,	// (0x00030174) list_set_graphic_pane_g1_copy1_ParamLimits

0xaca5,	// (0x00030174) list_set_graphic_pane_g1_copy1

0xeb5a,	// (0x00034029) list_set_graphic_pane_g2_copy1

0xacbd,	// (0x0003018c) list_set_graphic_pane_t1_copy1_ParamLimits

0xacbd,	// (0x0003018c) list_set_graphic_pane_t1_copy1

0x5484,	// (0x0002a953) rs_clock_indi_pane_g1

0x8adf,	// (0x0002dfae) rs_clock_indi_pane_t1

0x8aed,	// (0x0002dfbc) rs_indi_pane

0x8af5,	// (0x0002dfc4) rs_indi_pane_g1

0x8afe,	// (0x0002dfcd) rs_indi_pane_g2

0x8b07,	// (0x0002dfd6) rs_indi_pane_g3

0x0002,

0xfed2,	// (0x000353a1) rs_indi_pane_g

0x0c09,	// (0x000260d8) bg_popup_preview_window_pane_cp03

0x8b10,	// (0x0002dfdf) popup_fep_tooltip_window_t1

0x615d,	// (0x0002b62c) popup_note2_window_g2_ParamLimits

0x615d,	// (0x0002b62c) popup_note2_window_g2

0x0001,

0xfc6b,	// (0x0003513a) popup_note2_window_g_ParamLimits

0xfc6b,	// (0x0003513a) popup_note2_window_g

0x6665,	// (0x0002bb34) bg_popup_sub_pane_cp11_ParamLimits

0x6672,	// (0x0002bb41) cell_ai3_links_pane_g1_ParamLimits

0x6689,	// (0x0002bb58) cell_ai3_links_pane_t1

0xf430,	// (0x000348ff) set_text_pane_t1_copy1_ParamLimits

0xad31,	// (0x00030200) cell_graphic_popup_pane_cp2_ParamLimits

0xad31,	// (0x00030200) cell_graphic_popup_pane_cp2

0xeb62,	// (0x00034031) cell_graphic_popup_pane_g1_cp2

0xcf99,	// (0x00032468) cell_graphic_popup_pane_g2_cp2

0x8b26,	// (0x0002dff5) cell_graphic_popup_pane_g3_cp2

0x8b2e,	// (0x0002dffd) cell_graphic_popup_pane_t2_cp2

0xcfaa,	// (0x00032479) grid_highlight_pane_cp3_cp2

0xd554,	// (0x00032a23) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd244,	// (0x00032713) main_tmo_pane_ParamLimits

0xd81d,	// (0x00032cec) popup_tmo_big_image_note_window

0x8055,	// (0x0002d524) cell_ai5_widget_list_pane

0x805d,	// (0x0002d52c) cell_ai5_widget_lrg_icon_pane

0xe865,	// (0x00033d34) tmo_note_info_pane_t1_ParamLimits

0xe87a,	// (0x00033d49) tmo_note_info_pane_t2_ParamLimits

0xe893,	// (0x00033d62) tmo_note_info_pane_t3_ParamLimits

0x86b4,	// (0x0002db83) tmo_note_info_pane_t4_ParamLimits

0x86c6,	// (0x0002db95) tmo_note_info_pane_t5_ParamLimits

0xfec0,	// (0x0003538f) tmo_note_info_pane_t_ParamLimits

0xe90d,	// (0x00033ddc) settings_container_pane_ParamLimits

0x8a95,	// (0x0002df64) indicator_popup_pane_cp5

0x8a95,	// (0x0002df64) indicator_popup_pane_cp6

0xeb48,	// (0x00034017) list_set_graphic_pane_copy1_ParamLimits

0xa1ab,	// (0x0002f67a) bg_popup_window_pane_cp23

0x8b3c,	// (0x0002e00b) popup_tmo_big_image_note_window_g1

0x8b48,	// (0x0002e017) popup_tmo_big_image_note_window_t1

0x8b58,	// (0x0002e027) popup_tmo_big_image_note_window_t2

0x8b68,	// (0x0002e037) popup_tmo_big_image_note_window_t3

0x0002,

0xfed9,	// (0x000353a8) popup_tmo_big_image_note_window_t

0x8b78,	// (0x0002e047) cell_ai5_widget_lrg_icon_pane_g1

0x8b80,	// (0x0002e04f) cell_ai5_widget_lrg_icon_pane_t1

0x8b8e,	// (0x0002e05d) cell_ai5_widget_list_row_pane_ParamLimits

0x8b8e,	// (0x0002e05d) cell_ai5_widget_list_row_pane

0x8ba7,	// (0x0002e076) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8ba7,	// (0x0002e076) cell_ai5_widget_list_row_pane_g1

0x8bb4,	// (0x0002e083) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8bb4,	// (0x0002e083) cell_ai5_widget_list_row_pane_t1

0x8bcc,	// (0x0002e09b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8bcc,	// (0x0002e09b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee0,	// (0x000353af) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee0,	// (0x000353af) cell_ai5_widget_list_row_pane_t

0xa1ab,	// (0x0002f67a) main_fep_vtchi_ss_pane

0x8c03,	// (0x0002e0d2) popup_fep_char_pre_window

0x8c0b,	// (0x0002e0da) popup_fep_ituss_window

0x8c2c,	// (0x0002e0fb) popup_fep_vkbss_window

0x8c4d,	// (0x0002e11c) grid_vkbss_keypad_pane_ParamLimits

0x8c4d,	// (0x0002e11c) grid_vkbss_keypad_pane

0x8c5d,	// (0x0002e12c) ituss_keypad_pane

0x8c79,	// (0x0002e148) aid_vkbss_key_offset_ParamLimits

0x8c79,	// (0x0002e148) aid_vkbss_key_offset

0x8c85,	// (0x0002e154) cell_vkbss_key_pane_ParamLimits

0x8c85,	// (0x0002e154) cell_vkbss_key_pane

0x8c9b,	// (0x0002e16a) bg_cell_vkbss_key_g1_ParamLimits

0x8c9b,	// (0x0002e16a) bg_cell_vkbss_key_g1

0x8ca7,	// (0x0002e176) cell_vkbss_key_3p_pane_ParamLimits

0x8ca7,	// (0x0002e176) cell_vkbss_key_3p_pane

0x8cc1,	// (0x0002e190) cell_vkbss_key_g1_ParamLimits

0x8cc1,	// (0x0002e190) cell_vkbss_key_g1

0x8cdb,	// (0x0002e1aa) cell_vkbss_key_t1_ParamLimits

0x8cdb,	// (0x0002e1aa) cell_vkbss_key_t1

0x8d06,	// (0x0002e1d5) cell_ituss_key_pane_ParamLimits

0x8d06,	// (0x0002e1d5) cell_ituss_key_pane

0x8d17,	// (0x0002e1e6) bg_cell_ituss_key_g1_ParamLimits

0x8d17,	// (0x0002e1e6) bg_cell_ituss_key_g1

0x8d23,	// (0x0002e1f2) cell_ituss_key_pane_g1_ParamLimits

0x8d23,	// (0x0002e1f2) cell_ituss_key_pane_g1

0x8d37,	// (0x0002e206) cell_ituss_key_pane_g2_ParamLimits

0x8d37,	// (0x0002e206) cell_ituss_key_pane_g2

0x0001,

0xfee7,	// (0x000353b6) cell_ituss_key_pane_g_ParamLimits

0xfee7,	// (0x000353b6) cell_ituss_key_pane_g

0x8d62,	// (0x0002e231) cell_ituss_key_t1_ParamLimits

0x8d62,	// (0x0002e231) cell_ituss_key_t1

0x8d90,	// (0x0002e25f) cell_ituss_key_t2_ParamLimits

0x8d90,	// (0x0002e25f) cell_ituss_key_t2

0x8dc1,	// (0x0002e290) cell_ituss_key_t3_ParamLimits

0x8dc1,	// (0x0002e290) cell_ituss_key_t3

0x8df2,	// (0x0002e2c1) cell_ituss_key_t4_ParamLimits

0x8df2,	// (0x0002e2c1) cell_ituss_key_t4

0x0003,

0xfeec,	// (0x000353bb) cell_ituss_key_t_ParamLimits

0xfeec,	// (0x000353bb) cell_ituss_key_t

0x8e23,	// (0x0002e2f2) cell_vkbss_key_3p_pane_g1

0x8e2b,	// (0x0002e2fa) cell_vkbss_key_3p_pane_g2

0x8e33,	// (0x0002e302) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x000353c4) cell_vkbss_key_3p_pane_g

0xa1ab,	// (0x0002f67a) bg_popup_fep_char_preview_window_cp02

0x8e3b,	// (0x0002e30a) popup_fep_char_pre_window_t1

0xe709,	// (0x00033bd8) main_ai5_sk_pane

0x8740,	// (0x0002dc0f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x874c,	// (0x0002dc1b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x875c,	// (0x0002dc2b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8768,	// (0x0002dc37) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecb,	// (0x0003539a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8774,	// (0x0002dc43) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd244,	// (0x00032713) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeb6a,	// (0x00034039) main_ai5_sk_pane_g1

0x3284,	// (0x00028753) popup_query_code_window_g1

0x8c21,	// (0x0002e0f0) popup_fep_vkb_icf_pane

0x8c37,	// (0x0002e106) popup_fep_vtchi_icf_pane

0xd244,	// (0x00032713) bg_icf_pane

0x8e53,	// (0x0002e322) list_vkb_icf_pane

0xd244,	// (0x00032713) bg_icf_pane_cp01

0x8e5f,	// (0x0002e32e) vtchi_icf_list_pane

0x8e70,	// (0x0002e33f) list_vkb_icf_pane_t1_ParamLimits

0x8e70,	// (0x0002e33f) list_vkb_icf_pane_t1

0x8e87,	// (0x0002e356) vtchi_icf_list_pane_t1_ParamLimits

0x8e87,	// (0x0002e356) vtchi_icf_list_pane_t1

0x8c0b,	// (0x0002e0da) popup_fep_ituss_window_ParamLimits

0x8c37,	// (0x0002e106) popup_fep_vtchi_icf_pane_ParamLimits

0x8c5d,	// (0x0002e12c) ituss_keypad_pane_ParamLimits

0x8c6d,	// (0x0002e13c) ituss_sks_pane

0xd244,	// (0x00032713) bg_icf_pane_ParamLimits

0x8bf4,	// (0x0002e0c3) icf_edit_indi_pane_ParamLimits

0x8bf4,	// (0x0002e0c3) icf_edit_indi_pane

0x8e53,	// (0x0002e322) list_vkb_icf_pane_ParamLimits

0xd244,	// (0x00032713) bg_icf_pane_cp01_ParamLimits

0x8bf4,	// (0x0002e0c3) icf_edit_indi_pane_cp01_ParamLimits

0x8bf4,	// (0x0002e0c3) icf_edit_indi_pane_cp01

0x8e67,	// (0x0002e336) vtchi_query_pane

0x56ff,	// (0x0002abce) icf_edit_indi_pane_g1_ParamLimits

0x56ff,	// (0x0002abce) icf_edit_indi_pane_g1

0x8f0a,	// (0x0002e3d9) icf_edit_indi_pane_g2_ParamLimits

0x8f0a,	// (0x0002e3d9) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x000353dc) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x000353dc) icf_edit_indi_pane_g

0x8f19,	// (0x0002e3e8) icf_edit_indi_pane_t1

0x8ea0,	// (0x0002e36f) bg_input_focus_pane_cp042

0xd17d,	// (0x0003264c) vtchi_button_pane

0x8ea9,	// (0x0002e378) vtchi_query_pane_t1

0x8eb7,	// (0x0002e386) vtchi_query_pane_t2

0x8ec5,	// (0x0002e394) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x000353cb) vtchi_query_pane_t

0xa1ab,	// (0x0002f67a) bg_button_pane_cp13

0x8ed3,	// (0x0002e3a2) vtchi_button_pane_g1

0x8edb,	// (0x0002e3aa) ituss_sks_pane_g1

0x8ee6,	// (0x0002e3b5) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x000353d2) ituss_sks_pane_g

0x8eee,	// (0x0002e3bd) ituss_sks_pane_t1

0x8efc,	// (0x0002e3cb) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x000353d7) ituss_sks_pane_t

0x4f2e,	// (0x0002a3fd) indicator_nsta_pane_cp_g1

0x4f37,	// (0x0002a406) indicator_nsta_pane_cp_g2

0x4f3f,	// (0x0002a40e) indicator_nsta_pane_cp_g3

0x4f47,	// (0x0002a416) indicator_nsta_pane_cp_g4

0x4f4f,	// (0x0002a41e) indicator_nsta_pane_cp_g5

0x4f57,	// (0x0002a426) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x00034f84) indicator_nsta_pane_cp_g

0xe22c,	// (0x000336fb) cell_graphic2_pane_t2_ParamLimits

0xe22c,	// (0x000336fb) cell_graphic2_pane_t2

0x0001,

0xfdc2,	// (0x00035291) cell_graphic2_pane_t_ParamLimits

0xfdc2,	// (0x00035291) cell_graphic2_pane_t

0xe262,	// (0x00033731) cell_graphic2_control_pane_t1

0xac31,	// (0x00030100) signal_pane_g3_ParamLimits

0xac31,	// (0x00030100) signal_pane_g3

0xac45,	// (0x00030114) signal_pane_g4_ParamLimits

0xac45,	// (0x00030114) signal_pane_g4

0x8bde,	// (0x0002e0ad) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8bde,	// (0x0002e0ad) cell_ai5_widget_list_row_pane_t3

0x8d50,	// (0x0002e21f) cell_ituss_key_pane_t1_ParamLimits

0x8d50,	// (0x0002e21f) cell_ituss_key_pane_t1

0x2f01,	// (0x000283d0) form_field_data_wide_pane_vc_t2_ParamLimits

0x2f01,	// (0x000283d0) form_field_data_wide_pane_vc_t2

0x2f15,	// (0x000283e4) form_field_data_wide_pane_vc_t3_ParamLimits

0x2f15,	// (0x000283e4) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x00034cd9) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x00034cd9) form_field_data_wide_pane_vc_t

0x4bd3,	// (0x0002a0a2) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4bd3,	// (0x0002a0a2) form_field_slider_wide_pane_vc_t3

0x4caf,	// (0x0002a17e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4caf,	// (0x0002a17e) form_field_popup_wide_pane_vc_t2

0x4cc6,	// (0x0002a195) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4cc6,	// (0x0002a195) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x00034f73) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x00034f73) form_field_popup_wide_pane_vc_t

0xce33,	// (0x00032302) aid_fshwr2_btn_pane_ParamLimits

0xce42,	// (0x00032311) aid_fshwr2_syb_pane_ParamLimits

0xce54,	// (0x00032323) aid_fshwr2_txt_pane_ParamLimits

0xd244,	// (0x00032713) fshwr2_bg_pane_ParamLimits

0xce63,	// (0x00032332) fshwr2_func_candi_pane_ParamLimits

0xce74,	// (0x00032343) fshwr2_hwr_syb_pane_ParamLimits

0xce8f,	// (0x0003235e) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small

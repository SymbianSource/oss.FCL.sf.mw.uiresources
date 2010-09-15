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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00002b9d };

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
0x8d1d,	// (0x0000b8ba) Screen

0x8d29,	// (0x0000b8c6) application_window_ParamLimits

0x8d29,	// (0x0000b8c6) application_window

0xe0f3,	// (0x00010c90) screen_g1

0x8d61,	// (0x0000b8fe) area_bottom_pane_ParamLimits

0x8d61,	// (0x0000b8fe) area_bottom_pane

0x8e1f,	// (0x0000b9bc) area_top_pane_ParamLimits

0x8e1f,	// (0x0000b9bc) area_top_pane

0x8eb3,	// (0x0000ba50) main_pane_ParamLimits

0x8eb3,	// (0x0000ba50) main_pane

0xe11d,	// (0x00010cba) misc_graphics

0xac0f,	// (0x0000d7ac) battery_pane_ParamLimits

0xac0f,	// (0x0000d7ac) battery_pane

0x14dd,	// (0x0000407a) bg_status_flat_pane_g8

0x14e5,	// (0x00004082) bg_status_flat_pane_g9

0x0632,	// (0x000031cf) context_pane_ParamLimits

0x0632,	// (0x000031cf) context_pane

0xad7a,	// (0x0000d917) navi_pane_ParamLimits

0xad7a,	// (0x0000d917) navi_pane

0xadf8,	// (0x0000d995) signal_pane_ParamLimits

0xadf8,	// (0x0000d995) signal_pane

0x0008,

0xf834,	// (0x000123d1) bg_status_flat_pane_g

0xae88,	// (0x0000da25) status_pane_g1_ParamLimits

0xae88,	// (0x0000da25) status_pane_g1

0xae9e,	// (0x0000da3b) status_pane_g2_ParamLimits

0xae9e,	// (0x0000da3b) status_pane_g2

0x0859,	// (0x000033f6) status_pane_g3_ParamLimits

0x0859,	// (0x000033f6) status_pane_g3

0x0004,

0xf767,	// (0x00012304) status_pane_g_ParamLimits

0xf767,	// (0x00012304) status_pane_g

0xaeaa,	// (0x0000da47) title_pane_ParamLimits

0xaeaa,	// (0x0000da47) title_pane

0xaf0d,	// (0x0000daaa) uni_indicator_pane_ParamLimits

0xaf0d,	// (0x0000daaa) uni_indicator_pane

0xf4c7,	// (0x00012064) bg_list_pane_ParamLimits

0xf4c7,	// (0x00012064) bg_list_pane

0xa3fd,	// (0x0000cf9a) find_pane

0x0c29,	// (0x000037c6) listscroll_app_pane_ParamLimits

0x0c29,	// (0x000037c6) listscroll_app_pane

0xf4e7,	// (0x00012084) listscroll_form_pane

0xa405,	// (0x0000cfa2) listscroll_gen_pane_ParamLimits

0xa405,	// (0x0000cfa2) listscroll_gen_pane

0xf4ef,	// (0x0001208c) listscroll_set_pane

0x2285,	// (0x00004e22) main_idle_act_pane

0xf27f,	// (0x00011e1c) main_idle_trad_pane

0xf27f,	// (0x00011e1c) main_list_empty_pane

0xf42a,	// (0x00011fc7) main_midp_pane

0xf509,	// (0x000120a6) main_pane_g1_ParamLimits

0xf509,	// (0x000120a6) main_pane_g1

0xa419,	// (0x0000cfb6) popup_ai_message_window_ParamLimits

0xa419,	// (0x0000cfb6) popup_ai_message_window

0xa4ca,	// (0x0000d067) popup_fep_china_uni_window_ParamLimits

0xa4ca,	// (0x0000d067) popup_fep_china_uni_window

0xa524,	// (0x0000d0c1) popup_fep_japan_candidate_window_ParamLimits

0xa524,	// (0x0000d0c1) popup_fep_japan_candidate_window

0xa542,	// (0x0000d0df) popup_fep_japan_predictive_window_ParamLimits

0xa542,	// (0x0000d0df) popup_fep_japan_predictive_window

0xa554,	// (0x0000d0f1) popup_find_window

0xa571,	// (0x0000d10e) popup_grid_graphic_window_ParamLimits

0xa571,	// (0x0000d10e) popup_grid_graphic_window

0x00d6,	// (0x00002c73) popup_large_graphic_colour_window

0xa60f,	// (0x0000d1ac) popup_menu_window_ParamLimits

0xa60f,	// (0x0000d1ac) popup_menu_window

0xa7e1,	// (0x0000d37e) popup_note_image_window

0xa7a7,	// (0x0000d344) popup_note_wait_window_ParamLimits

0xa7a7,	// (0x0000d344) popup_note_wait_window

0xa7f9,	// (0x0000d396) popup_note_window_ParamLimits

0xa7f9,	// (0x0000d396) popup_note_window

0xa8a8,	// (0x0000d445) popup_query_code_window_ParamLimits

0xa8a8,	// (0x0000d445) popup_query_code_window

0xa8e2,	// (0x0000d47f) popup_query_data_code_window_ParamLimits

0xa8e2,	// (0x0000d47f) popup_query_data_code_window

0xa8ff,	// (0x0000d49c) popup_query_data_window_ParamLimits

0xa8ff,	// (0x0000d49c) popup_query_data_window

0xa981,	// (0x0000d51e) popup_query_sat_info_window_ParamLimits

0xa981,	// (0x0000d51e) popup_query_sat_info_window

0xaa18,	// (0x0000d5b5) popup_snote_single_graphic_window_ParamLimits

0xaa18,	// (0x0000d5b5) popup_snote_single_graphic_window

0xaa18,	// (0x0000d5b5) popup_snote_single_text_window_ParamLimits

0xaa18,	// (0x0000d5b5) popup_snote_single_text_window

0x03a9,	// (0x00002f46) popup_sub_window_general

0xab75,	// (0x0000d712) popup_window_general_ParamLimits

0xab75,	// (0x0000d712) popup_window_general

0x04ee,	// (0x0000308b) power_save_pane

0xa257,	// (0x0000cdf4) control_pane_g1_ParamLimits

0xa257,	// (0x0000cdf4) control_pane_g1

0xa280,	// (0x0000ce1d) control_pane_g2_ParamLimits

0xa280,	// (0x0000ce1d) control_pane_g2

0xf48a,	// (0x00012027) control_pane_g3_ParamLimits

0xf48a,	// (0x00012027) control_pane_g3

0x0007,

0xf74f,	// (0x000122ec) control_pane_g_ParamLimits

0xf74f,	// (0x000122ec) control_pane_g

0xa2e8,	// (0x0000ce85) control_pane_t1_ParamLimits

0xa2e8,	// (0x0000ce85) control_pane_t1

0xa350,	// (0x0000ceed) control_pane_t2_ParamLimits

0xa350,	// (0x0000ceed) control_pane_t2

0x0002,

0xf760,	// (0x000122fd) control_pane_t_ParamLimits

0xf760,	// (0x000122fd) control_pane_t

0xa1ce,	// (0x0000cd6b) navi_navi_volume_pane_cp1

0xa1d6,	// (0x0000cd73) status_small_icon_pane

0xf436,	// (0x00011fd3) status_small_pane_g1_ParamLimits

0xf436,	// (0x00011fd3) status_small_pane_g1

0xa1de,	// (0x0000cd7b) status_small_pane_g2_ParamLimits

0xa1de,	// (0x0000cd7b) status_small_pane_g2

0xf46a,	// (0x00012007) status_small_pane_g3_ParamLimits

0xf46a,	// (0x00012007) status_small_pane_g3

0xa1ea,	// (0x0000cd87) status_small_pane_g4_ParamLimits

0xa1ea,	// (0x0000cd87) status_small_pane_g4

0xa1f8,	// (0x0000cd95) status_small_pane_g5_ParamLimits

0xa1f8,	// (0x0000cd95) status_small_pane_g5

0xa206,	// (0x0000cda3) status_small_pane_g6_ParamLimits

0xa206,	// (0x0000cda3) status_small_pane_g6

0x0007,

0xf73e,	// (0x000122db) status_small_pane_g_ParamLimits

0xf73e,	// (0x000122db) status_small_pane_g

0xa221,	// (0x0000cdbe) status_small_pane_t1

0xa243,	// (0x0000cde0) status_small_wait_pane_ParamLimits

0xa243,	// (0x0000cde0) status_small_wait_pane

0x9eb5,	// (0x0000ca52) aid_levels_signal_ParamLimits

0x9eb5,	// (0x0000ca52) aid_levels_signal

0x9ecd,	// (0x0000ca6a) signal_pane_g1_ParamLimits

0x9ecd,	// (0x0000ca6a) signal_pane_g1

0x9ee8,	// (0x0000ca85) signal_pane_g2_ParamLimits

0x9ee8,	// (0x0000ca85) signal_pane_g2

0x0003,

0xf6cf,	// (0x0001226c) signal_pane_g_ParamLimits

0xf6cf,	// (0x0001226c) signal_pane_g

0xed0a,	// (0x000118a7) context_pane_g1

0x90ae,	// (0x0000bc4b) title_pane_g1

0x90e5,	// (0x0000bc82) title_pane_t1

0xe153,	// (0x00010cf0) title_pane_t2

0xe179,	// (0x00010d16) title_pane_t3

0x0002,

0xf532,	// (0x000120cf) title_pane_t

0xaf35,	// (0x0000dad2) aid_levels_battery_ParamLimits

0xaf35,	// (0x0000dad2) aid_levels_battery

0xaf51,	// (0x0000daee) battery_pane_g1_ParamLimits

0xaf51,	// (0x0000daee) battery_pane_g1

0xaf6e,	// (0x0000db0b) battery_pane_g2_ParamLimits

0xaf6e,	// (0x0000db0b) battery_pane_g2

0x0001,

0xf772,	// (0x0001230f) battery_pane_g_ParamLimits

0xf772,	// (0x0001230f) battery_pane_g

0xb5fb,	// (0x0000e198) uni_indicator_pane_g1

0xb611,	// (0x0000e1ae) uni_indicator_pane_g2

0xb627,	// (0x0000e1c4) uni_indicator_pane_g3

0x0005,

0xf8dc,	// (0x00012479) uni_indicator_pane_g

0xf116,	// (0x00011cb3) navi_icon_pane_ParamLimits

0xf116,	// (0x00011cb3) navi_icon_pane

0xf06b,	// (0x00011c08) navi_midp_pane

0xf132,	// (0x00011ccf) navi_navi_pane

0xf13c,	// (0x00011cd9) navi_text_pane_ParamLimits

0xf13c,	// (0x00011cd9) navi_text_pane

0xe0f3,	// (0x00010c90) status_small_wait_pane_g1

0xe3e4,	// (0x00010f81) status_small_wait_pane_g2

0x0001,

0xf8d7,	// (0x00012474) status_small_wait_pane_g

0xb554,	// (0x0000e0f1) navi_navi_icon_text_pane

0x1c9a,	// (0x00004837) navi_navi_pane_g1_ParamLimits

0x1c9a,	// (0x00004837) navi_navi_pane_g1

0x1cac,	// (0x00004849) navi_navi_pane_g2_ParamLimits

0x1cac,	// (0x00004849) navi_navi_pane_g2

0x0001,

0xf8a5,	// (0x00012442) navi_navi_pane_g_ParamLimits

0xf8a5,	// (0x00012442) navi_navi_pane_g

0x1cbe,	// (0x0000485b) navi_navi_tabs_pane

0x1cc7,	// (0x00004864) navi_navi_text_pane

0xb554,	// (0x0000e0f1) navi_navi_volume_pane

0x1c6e,	// (0x0000480b) navi_text_pane_t1

0x1c62,	// (0x000047ff) navi_icon_pane_g1

0x1bb5,	// (0x00004752) navi_navi_text_pane_t1

0xb540,	// (0x0000e0dd) navi_navi_volume_pane_g1

0x1bac,	// (0x00004749) volume_small_pane

0x1b0a,	// (0x000046a7) navi_navi_icon_text_pane_g1

0xb4a4,	// (0x0000e041) navi_navi_icon_text_pane_t1

0xf132,	// (0x00011ccf) navi_tabs_2_long_pane

0xf132,	// (0x00011ccf) navi_tabs_2_pane

0xf132,	// (0x00011ccf) navi_tabs_3_long_pane

0xf132,	// (0x00011ccf) navi_tabs_3_pane

0xf132,	// (0x00011ccf) navi_tabs_4_pane

0x1a69,	// (0x00004606) tabs_2_active_pane_ParamLimits

0x1a69,	// (0x00004606) tabs_2_active_pane

0x1a79,	// (0x00004616) tabs_2_passive_pane_ParamLimits

0x1a79,	// (0x00004616) tabs_2_passive_pane

0x1a37,	// (0x000045d4) tabs_3_active_pane_ParamLimits

0x1a37,	// (0x000045d4) tabs_3_active_pane

0x1a47,	// (0x000045e4) tabs_3_passive_pane_ParamLimits

0x1a47,	// (0x000045e4) tabs_3_passive_pane

0x1a58,	// (0x000045f5) tabs_3_passive_pane_cp_ParamLimits

0x1a58,	// (0x000045f5) tabs_3_passive_pane_cp

0x19f3,	// (0x00004590) tabs_4_active_pane_ParamLimits

0x19f3,	// (0x00004590) tabs_4_active_pane

0x1a04,	// (0x000045a1) tabs_4_passive_pane_ParamLimits

0x1a04,	// (0x000045a1) tabs_4_passive_pane

0x1a15,	// (0x000045b2) tabs_4_passive_pane_cp_ParamLimits

0x1a15,	// (0x000045b2) tabs_4_passive_pane_cp

0x1a26,	// (0x000045c3) tabs_4_passive_pane_cp2_ParamLimits

0x1a26,	// (0x000045c3) tabs_4_passive_pane_cp2

0x19cf,	// (0x0000456c) tabs_2_long_active_pane_ParamLimits

0x19cf,	// (0x0000456c) tabs_2_long_active_pane

0x19e1,	// (0x0000457e) tabs_2_long_passive_pane_ParamLimits

0x19e1,	// (0x0000457e) tabs_2_long_passive_pane

0x198a,	// (0x00004527) tabs_3_long_active_pane_ParamLimits

0x198a,	// (0x00004527) tabs_3_long_active_pane

0x19a3,	// (0x00004540) tabs_3_long_passive_pane_ParamLimits

0x19a3,	// (0x00004540) tabs_3_long_passive_pane

0x19b6,	// (0x00004553) tabs_3_long_passive_pane_cp_ParamLimits

0x19b6,	// (0x00004553) tabs_3_long_passive_pane_cp

0x1930,	// (0x000044cd) volume_small_pane_g1

0x1939,	// (0x000044d6) volume_small_pane_g2

0x1942,	// (0x000044df) volume_small_pane_g3

0x194b,	// (0x000044e8) volume_small_pane_g4

0x1954,	// (0x000044f1) volume_small_pane_g5

0x195d,	// (0x000044fa) volume_small_pane_g6

0x1966,	// (0x00004503) volume_small_pane_g7

0x196f,	// (0x0000450c) volume_small_pane_g8

0x1978,	// (0x00004515) volume_small_pane_g9

0x1981,	// (0x0000451e) volume_small_pane_g10

0x0009,

0xf871,	// (0x0001240e) volume_small_pane_g

0xe18b,	// (0x00010d28) bg_active_tab_pane_cp2_ParamLimits

0xe18b,	// (0x00010d28) bg_active_tab_pane_cp2

0x9171,	// (0x0000bd0e) tabs_3_active_pane_g1

0x9179,	// (0x0000bd16) tabs_3_active_pane_t1

0xe18b,	// (0x00010d28) bg_passive_tab_pane_cp2_ParamLimits

0xe18b,	// (0x00010d28) bg_passive_tab_pane_cp2

0x9171,	// (0x0000bd0e) tabs_3_passive_pane_g1

0x9179,	// (0x0000bd16) tabs_3_passive_pane_t1

0xe18b,	// (0x00010d28) bg_active_tab_pane_cp3_ParamLimits

0xe18b,	// (0x00010d28) bg_active_tab_pane_cp3

0x918b,	// (0x0000bd28) tabs_4_active_pane_g1

0x9193,	// (0x0000bd30) tabs_4_active_pane_t1

0xe18b,	// (0x00010d28) bg_passive_tab_pane_cp3_ParamLimits

0xe18b,	// (0x00010d28) bg_passive_tab_pane_cp3

0x918b,	// (0x0000bd28) tabs_4_1_passive_pane_g1

0x9193,	// (0x0000bd30) tabs_4_1_passive_pane_t1

0xf42a,	// (0x00011fc7) list_highlight_pane_cp2

0xb803,	// (0x0000e3a0) list_set_pane_ParamLimits

0xb803,	// (0x0000e3a0) list_set_pane

0xb89d,	// (0x0000e43a) main_pane_set_t1_ParamLimits

0xb89d,	// (0x0000e43a) main_pane_set_t1

0xb8bd,	// (0x0000e45a) main_pane_set_t2_ParamLimits

0xb8bd,	// (0x0000e45a) main_pane_set_t2

0xb8d1,	// (0x0000e46e) main_pane_set_t3_ParamLimits

0xb8d1,	// (0x0000e46e) main_pane_set_t3

0xb8e3,	// (0x0000e480) main_pane_set_t4_ParamLimits

0xb8e3,	// (0x0000e480) main_pane_set_t4

0x0003,

0xf941,	// (0x000124de) main_pane_set_t_ParamLimits

0xf941,	// (0x000124de) main_pane_set_t

0xb8f5,	// (0x0000e492) setting_code_pane

0xb8ff,	// (0x0000e49c) setting_slider_graphic_pane

0xb8ff,	// (0x0000e49c) setting_slider_pane

0xb8ff,	// (0x0000e49c) setting_text_pane

0xb8ff,	// (0x0000e49c) setting_volume_pane

0x91a5,	// (0x0000bd42) volume_set_pane

0xe199,	// (0x00010d36) bg_set_opt_pane_cp

0x91ad,	// (0x0000bd4a) setting_slider_pane_t1

0x91c6,	// (0x0000bd63) setting_slider_pane_t2

0x91e0,	// (0x0000bd7d) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000120d6) setting_slider_pane_t

0x91f8,	// (0x0000bd95) slider_set_pane

0xe11d,	// (0x00010cba) bg_set_opt_pane_cp2

0xe1a7,	// (0x00010d44) setting_slider_graphic_pane_g1

0x920e,	// (0x0000bdab) setting_slider_graphic_pane_t1

0x921e,	// (0x0000bdbb) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000120dd) setting_slider_graphic_pane_t

0x922e,	// (0x0000bdcb) slider_set_pane_cp

0xe11d,	// (0x00010cba) input_focus_pane_cp1

0x226c,	// (0x00004e09) list_set_text_pane

0xe0f3,	// (0x00010c90) setting_text_pane_g1

0xe11d,	// (0x00010cba) input_focus_pane_cp2

0xe0f3,	// (0x00010c90) setting_code_pane_g1

0xe1b0,	// (0x00010d4d) setting_code_pane_t1

0xe1be,	// (0x00010d5b) set_text_pane_t1_ParamLimits

0xe1be,	// (0x00010d5b) set_text_pane_t1

0xe681,	// (0x0001121e) set_opt_bg_pane_g1

0xe689,	// (0x00011226) set_opt_bg_pane_g2

0xb7b8,	// (0x0000e355) set_opt_bg_pane_g3

0xe699,	// (0x00011236) set_opt_bg_pane_g4

0xe6a1,	// (0x0001123e) set_opt_bg_pane_g5

0xe6a9,	// (0x00011246) set_opt_bg_pane_g6

0xb7c2,	// (0x0000e35f) set_opt_bg_pane_g7

0xb7ca,	// (0x0000e367) set_opt_bg_pane_g8

0xb7d4,	// (0x0000e371) set_opt_bg_pane_g9

0x0008,

0xf92e,	// (0x000124cb) set_opt_bg_pane_g

0xb753,	// (0x0000e2f0) slider_set_pane_g1

0x21e2,	// (0x00004d7f) slider_set_pane_g2

0x0006,

0xf91f,	// (0x000124bc) slider_set_pane_g

0xb666,	// (0x0000e203) volume_set_pane_g1

0xb66e,	// (0x0000e20b) volume_set_pane_g2

0xb676,	// (0x0000e213) volume_set_pane_g3

0xb67e,	// (0x0000e21b) volume_set_pane_g4

0xb686,	// (0x0000e223) volume_set_pane_g5

0xb68e,	// (0x0000e22b) volume_set_pane_g6

0xb696,	// (0x0000e233) volume_set_pane_g7

0xb69e,	// (0x0000e23b) volume_set_pane_g8

0xb6a6,	// (0x0000e243) volume_set_pane_g9

0xb6ae,	// (0x0000e24b) volume_set_pane_g10

0x0009,

0xf8f7,	// (0x00012494) volume_set_pane_g

0x9236,	// (0x0000bdd3) indicator_pane_ParamLimits

0x9236,	// (0x0000bdd3) indicator_pane

0x925e,	// (0x0000bdfb) main_idle_pane_g2_ParamLimits

0x925e,	// (0x0000bdfb) main_idle_pane_g2

0x9296,	// (0x0000be33) main_pane_idle_g1_ParamLimits

0x9296,	// (0x0000be33) main_pane_idle_g1

0xe1d8,	// (0x00010d75) popup_clock_digital_analogue_window_ParamLimits

0xe1d8,	// (0x00010d75) popup_clock_digital_analogue_window

0x92bd,	// (0x0000be5a) soft_indicator_pane_ParamLimits

0x92bd,	// (0x0000be5a) soft_indicator_pane

0x92e1,	// (0x0000be7e) wallpaper_pane_ParamLimits

0x92e1,	// (0x0000be7e) wallpaper_pane

0xe0f3,	// (0x00010c90) wallpaper_pane_g1

0x92f3,	// (0x0000be90) indicator_pane_g1_ParamLimits

0x92f3,	// (0x0000be90) indicator_pane_g1

0x27f8,	// (0x00005395) navi_navi_icon_text_pane_srt_g1

0xe206,	// (0x00010da3) soft_indicator_pane_t1

0xe220,	// (0x00010dbd) aid_ps_area_pane

0x9309,	// (0x0000bea6) aid_ps_clock_pane

0xe231,	// (0x00010dce) aid_ps_indicator_pane

0xe23d,	// (0x00010dda) indicator_ps_pane_ParamLimits

0xe23d,	// (0x00010dda) indicator_ps_pane

0xe24c,	// (0x00010de9) power_save_pane_g1_ParamLimits

0xe24c,	// (0x00010de9) power_save_pane_g1

0xe258,	// (0x00010df5) power_save_pane_g2_ParamLimits

0xe258,	// (0x00010df5) power_save_pane_g2

0xe0fd,	// (0x00010c9a) aid_navinavi_width_pane

0xe220,	// (0x00010dbd) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000120e2) power_save_pane_g_ParamLimits

0xf545,	// (0x000120e2) power_save_pane_g

0xe266,	// (0x00010e03) power_save_pane_t1_ParamLimits

0xe266,	// (0x00010e03) power_save_pane_t1

0x9309,	// (0x0000bea6) aid_ps_clock_pane_ParamLimits

0xe231,	// (0x00010dce) aid_ps_indicator_pane_ParamLimits

0xe278,	// (0x00010e15) power_save_pane_t4_ParamLimits

0xe278,	// (0x00010e15) power_save_pane_t4

0x0001,

0xf54a,	// (0x000120e7) power_save_pane_t_ParamLimits

0xf54a,	// (0x000120e7) power_save_pane_t

0xe2a2,	// (0x00010e3f) power_save_t3_ParamLimits

0xe2a2,	// (0x00010e3f) power_save_t3

0xe28d,	// (0x00010e2a) power_save_t2_ParamLimits

0xe28d,	// (0x00010e2a) power_save_t2

0xe2b7,	// (0x00010e54) indicator_ps_pane_g1

0x9317,	// (0x0000beb4) ai_gene_pane_ParamLimits

0x9317,	// (0x0000beb4) ai_gene_pane

0x932e,	// (0x0000becb) ai_links_pane_ParamLimits

0x932e,	// (0x0000becb) ai_links_pane

0x9346,	// (0x0000bee3) indicator_pane_cp1_ParamLimits

0x9346,	// (0x0000bee3) indicator_pane_cp1

0x9355,	// (0x0000bef2) main_pane_idle_g1_cp_ParamLimits

0x9355,	// (0x0000bef2) main_pane_idle_g1_cp

0x936d,	// (0x0000bf0a) popup_ai_links_title_window

0x9376,	// (0x0000bf13) soft_indicator_pane_cp1_ParamLimits

0x9376,	// (0x0000bf13) soft_indicator_pane_cp1

0x1f59,	// (0x00004af6) ai_links_pane_g1

0x1f62,	// (0x00004aff) grid_ai_links_pane

0xb5f2,	// (0x0000e18f) ai_gene_pane_1

0x1f47,	// (0x00004ae4) ai_gene_pane_2

0x1f50,	// (0x00004aed) list_highlight_pane_cp4

0xb5ce,	// (0x0000e16b) cell_ai_link_pane_ParamLimits

0xb5ce,	// (0x0000e16b) cell_ai_link_pane

0x1f18,	// (0x00004ab5) cell_ai_link_pane_g1

0xe3e4,	// (0x00010f81) cell_ai_link_pane_g2

0x0001,

0xf8d2,	// (0x0001246f) cell_ai_link_pane_g

0xe11d,	// (0x00010cba) grid_highlight_cp2

0xe11d,	// (0x00010cba) bg_popup_sub_pane_cp1

0xe2ce,	// (0x00010e6b) popup_ai_links_title_window_t1

0x1e68,	// (0x00004a05) ai_gene_pane_1_g1_ParamLimits

0x1e68,	// (0x00004a05) ai_gene_pane_1_g1

0x1e74,	// (0x00004a11) ai_gene_pane_1_g2_ParamLimits

0x1e74,	// (0x00004a11) ai_gene_pane_1_g2

0x0001,

0xf8c8,	// (0x00012465) ai_gene_pane_1_g_ParamLimits

0xf8c8,	// (0x00012465) ai_gene_pane_1_g

0x1e81,	// (0x00004a1e) ai_gene_pane_1_t1_ParamLimits

0x1e81,	// (0x00004a1e) ai_gene_pane_1_t1

0x1eb5,	// (0x00004a52) grid_ai_soft_ind_pane

0x1e53,	// (0x000049f0) ai_gene_pane_2_t1_ParamLimits

0x1e53,	// (0x000049f0) ai_gene_pane_2_t1

0x938a,	// (0x0000bf27) main_pane_empty_t1_ParamLimits

0x938a,	// (0x0000bf27) main_pane_empty_t1

0x93a2,	// (0x0000bf3f) main_pane_empty_t2_ParamLimits

0x93a2,	// (0x0000bf3f) main_pane_empty_t2

0x93b7,	// (0x0000bf54) main_pane_empty_t3_ParamLimits

0x93b7,	// (0x0000bf54) main_pane_empty_t3

0x93c9,	// (0x0000bf66) main_pane_empty_t4_ParamLimits

0x93c9,	// (0x0000bf66) main_pane_empty_t4

0x93db,	// (0x0000bf78) main_pane_empty_t5_ParamLimits

0x93db,	// (0x0000bf78) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000120ec) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000120ec) main_pane_empty_t

0xe706,	// (0x000112a3) bg_popup_window_pane_ParamLimits

0xe706,	// (0x000112a3) bg_popup_window_pane

0xb548,	// (0x0000e0e5) find_popup_pane_cp2_ParamLimits

0xb548,	// (0x0000e0e5) find_popup_pane_cp2

0x1bcf,	// (0x0000476c) heading_pane_ParamLimits

0x1bcf,	// (0x0000476c) heading_pane

0xe11d,	// (0x00010cba) bg_popup_sub_pane

0xb4c1,	// (0x0000e05e) bg_popup_window_pane_g1_ParamLimits

0xb4c1,	// (0x0000e05e) bg_popup_window_pane_g1

0xb4d0,	// (0x0000e06d) bg_popup_window_pane_g2_ParamLimits

0xb4d0,	// (0x0000e06d) bg_popup_window_pane_g2

0xb4dc,	// (0x0000e079) bg_popup_window_pane_g3_ParamLimits

0xb4dc,	// (0x0000e079) bg_popup_window_pane_g3

0xb4e8,	// (0x0000e085) bg_popup_window_pane_g4_ParamLimits

0xb4e8,	// (0x0000e085) bg_popup_window_pane_g4

0xb4f7,	// (0x0000e094) bg_popup_window_pane_g5_ParamLimits

0xb4f7,	// (0x0000e094) bg_popup_window_pane_g5

0xb507,	// (0x0000e0a4) bg_popup_window_pane_g6_ParamLimits

0xb507,	// (0x0000e0a4) bg_popup_window_pane_g6

0xb513,	// (0x0000e0b0) bg_popup_window_pane_g7_ParamLimits

0xb513,	// (0x0000e0b0) bg_popup_window_pane_g7

0xb522,	// (0x0000e0bf) bg_popup_window_pane_g8_ParamLimits

0xb522,	// (0x0000e0bf) bg_popup_window_pane_g8

0xb531,	// (0x0000e0ce) bg_popup_window_pane_g9_ParamLimits

0xb531,	// (0x0000e0ce) bg_popup_window_pane_g9

0x1b98,	// (0x00004735) bg_popup_window_pane_g10_ParamLimits

0x1b98,	// (0x00004735) bg_popup_window_pane_g10

0x0009,

0xf890,	// (0x0001242d) bg_popup_window_pane_g_ParamLimits

0xf890,	// (0x0001242d) bg_popup_window_pane_g

0x1ac1,	// (0x0000465e) bg_popup_heading_pane_ParamLimits

0x1ac1,	// (0x0000465e) bg_popup_heading_pane

0x273b,	// (0x000052d8) tabs_4_passive_pane_cp_srt_ParamLimits

0x273b,	// (0x000052d8) tabs_4_passive_pane_cp_srt

0x274d,	// (0x000052ea) tabs_4_passive_pane_srt_ParamLimits

0x1ad5,	// (0x00004672) heading_pane_g2

0x274d,	// (0x000052ea) tabs_4_passive_pane_srt

0x0c29,	// (0x000037c6) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0c29,	// (0x000037c6) bg_passive_tab_pane_cp3_srt

0x1add,	// (0x0000467a) heading_pane_t1_ParamLimits

0x1add,	// (0x0000467a) heading_pane_t1

0x1af4,	// (0x00004691) heading_pane_t2_ParamLimits

0x1af4,	// (0x00004691) heading_pane_t2

0x0001,

0xf88b,	// (0x00012428) heading_pane_t_ParamLimits

0xf88b,	// (0x00012428) heading_pane_t

0x14a5,	// (0x00004042) bg_popup_heading_pane_g1

0x1554,	// (0x000040f1) bg_popup_heading_pane_g2

0x155e,	// (0x000040fb) bg_popup_heading_pane_g3

0x1568,	// (0x00004105) bg_popup_heading_pane_g4

0x1572,	// (0x0000410f) bg_popup_heading_pane_g5

0x157c,	// (0x00004119) bg_popup_heading_pane_g6

0x1584,	// (0x00004121) bg_popup_heading_pane_g7

0x158c,	// (0x00004129) bg_popup_heading_pane_g8

0x1596,	// (0x00004133) bg_popup_heading_pane_g9

0x0008,

0xf847,	// (0x000123e4) bg_popup_heading_pane_g

0x0a91,	// (0x0000362e) bg_popup_sub_pane_g1

0x0a99,	// (0x00003636) bg_popup_sub_pane_g2

0x0aa1,	// (0x0000363e) bg_popup_sub_pane_g3

0x0aa9,	// (0x00003646) bg_popup_sub_pane_g4

0x0ab1,	// (0x0000364e) bg_popup_sub_pane_g5

0x0ab9,	// (0x00003656) bg_popup_sub_pane_g6

0x0ac1,	// (0x0000365e) bg_popup_sub_pane_g7

0x0ac9,	// (0x00003666) bg_popup_sub_pane_g8

0x0ad1,	// (0x0000366e) bg_popup_sub_pane_g9

0x0008,

0xf821,	// (0x000123be) bg_popup_sub_pane_g

0xe18b,	// (0x00010d28) bg_popup_window_pane_cp5_ParamLimits

0xe18b,	// (0x00010d28) bg_popup_window_pane_cp5

0xe2eb,	// (0x00010e88) popup_note_window_g1_ParamLimits

0xe2eb,	// (0x00010e88) popup_note_window_g1

0xe2f7,	// (0x00010e94) popup_note_window_t1_ParamLimits

0xe2f7,	// (0x00010e94) popup_note_window_t1

0xe30d,	// (0x00010eaa) popup_note_window_t2_ParamLimits

0xe30d,	// (0x00010eaa) popup_note_window_t2

0xe323,	// (0x00010ec0) popup_note_window_t3_ParamLimits

0xe323,	// (0x00010ec0) popup_note_window_t3

0xe339,	// (0x00010ed6) popup_note_window_t4_ParamLimits

0xe339,	// (0x00010ed6) popup_note_window_t4

0xe361,	// (0x00010efe) popup_note_window_t5_ParamLimits

0xe361,	// (0x00010efe) popup_note_window_t5

0x0004,

0xf55a,	// (0x000120f7) popup_note_window_t_ParamLimits

0xf55a,	// (0x000120f7) popup_note_window_t

0xe385,	// (0x00010f22) bg_popup_window_pane_cp6_ParamLimits

0xe385,	// (0x00010f22) bg_popup_window_pane_cp6

0x1421,	// (0x00003fbe) popup_note_image_window_g1_ParamLimits

0x1421,	// (0x00003fbe) popup_note_image_window_g1

0xb366,	// (0x0000df03) popup_note_image_window_g2_ParamLimits

0xb366,	// (0x0000df03) popup_note_image_window_g2

0x0001,

0xf815,	// (0x000123b2) popup_note_image_window_g_ParamLimits

0xf815,	// (0x000123b2) popup_note_image_window_g

0x1446,	// (0x00003fe3) popup_note_image_window_t1_ParamLimits

0x1446,	// (0x00003fe3) popup_note_image_window_t1

0x145f,	// (0x00003ffc) popup_note_image_window_t2_ParamLimits

0x145f,	// (0x00003ffc) popup_note_image_window_t2

0x1478,	// (0x00004015) popup_note_image_window_t3_ParamLimits

0x1478,	// (0x00004015) popup_note_image_window_t3

0x0002,

0xf81a,	// (0x000123b7) popup_note_image_window_t_ParamLimits

0xf81a,	// (0x000123b7) popup_note_image_window_t

0x12ea,	// (0x00003e87) bg_popup_window_pane_cp7_ParamLimits

0x12ea,	// (0x00003e87) bg_popup_window_pane_cp7

0x131a,	// (0x00003eb7) popup_note_wait_window_g1_ParamLimits

0x131a,	// (0x00003eb7) popup_note_wait_window_g1

0x1326,	// (0x00003ec3) popup_note_wait_window_g2_ParamLimits

0x1326,	// (0x00003ec3) popup_note_wait_window_g2

0x0002,

0xf803,	// (0x000123a0) popup_note_wait_window_g_ParamLimits

0xf803,	// (0x000123a0) popup_note_wait_window_g

0x133e,	// (0x00003edb) popup_note_wait_window_t1_ParamLimits

0x133e,	// (0x00003edb) popup_note_wait_window_t1

0xb307,	// (0x0000dea4) popup_note_wait_window_t2_ParamLimits

0xb307,	// (0x0000dea4) popup_note_wait_window_t2

0xb324,	// (0x0000dec1) popup_note_wait_window_t3_ParamLimits

0xb324,	// (0x0000dec1) popup_note_wait_window_t3

0xb337,	// (0x0000ded4) popup_note_wait_window_t4_ParamLimits

0xb337,	// (0x0000ded4) popup_note_wait_window_t4

0x0004,

0xf80a,	// (0x000123a7) popup_note_wait_window_t_ParamLimits

0xf80a,	// (0x000123a7) popup_note_wait_window_t

0x13ba,	// (0x00003f57) wait_bar_pane_ParamLimits

0x13ba,	// (0x00003f57) wait_bar_pane

0xe11d,	// (0x00010cba) wait_anim_pane

0xe11d,	// (0x00010cba) wait_border_pane

0xe0f3,	// (0x00010c90) wait_anim_pane_g1

0xe0f3,	// (0x00010c90) wait_anim_pane_g2

0x0001,

0xf6ca,	// (0x00012267) wait_anim_pane_g

0x1296,	// (0x00003e33) wait_border_pane_g1

0x12a1,	// (0x00003e3e) wait_border_pane_g2

0x12aa,	// (0x00003e47) wait_border_pane_g3

0x0002,

0xf7fc,	// (0x00012399) wait_border_pane_g

0x1101,	// (0x00003c9e) bg_popup_window_pane_cp16_ParamLimits

0x1101,	// (0x00003c9e) bg_popup_window_pane_cp16

0xb2b7,	// (0x0000de54) indicator_popup_pane_cp4_ParamLimits

0xb2b7,	// (0x0000de54) indicator_popup_pane_cp4

0x1215,	// (0x00003db2) popup_query_data_window_t1_ParamLimits

0x1215,	// (0x00003db2) popup_query_data_window_t1

0x1227,	// (0x00003dc4) popup_query_data_window_t2_ParamLimits

0x1227,	// (0x00003dc4) popup_query_data_window_t2

0x1240,	// (0x00003ddd) popup_query_data_window_t3_ParamLimits

0x1240,	// (0x00003ddd) popup_query_data_window_t3

0x0002,

0xf7f5,	// (0x00012392) popup_query_data_window_t_ParamLimits

0xf7f5,	// (0x00012392) popup_query_data_window_t

0xb2cb,	// (0x0000de68) query_popup_data_pane_ParamLimits

0xb2cb,	// (0x0000de68) query_popup_data_pane

0xb2df,	// (0x0000de7c) query_popup_data_pane_cp1_ParamLimits

0xb2df,	// (0x0000de7c) query_popup_data_pane_cp1

0x1101,	// (0x00003c9e) bg_popup_window_pane_cp10_ParamLimits

0x1101,	// (0x00003c9e) bg_popup_window_pane_cp10

0xb232,	// (0x0000ddcf) indicator_popup_pane_ParamLimits

0xb232,	// (0x0000ddcf) indicator_popup_pane

0xb254,	// (0x0000ddf1) popup_query_code_window_t1_ParamLimits

0xb254,	// (0x0000ddf1) popup_query_code_window_t1

0xb26e,	// (0x0000de0b) popup_query_code_window_t2_ParamLimits

0xb26e,	// (0x0000de0b) popup_query_code_window_t2

0x11b8,	// (0x00003d55) popup_query_code_window_t3_ParamLimits

0x11b8,	// (0x00003d55) popup_query_code_window_t3

0x0002,

0xf7ee,	// (0x0001238b) popup_query_code_window_t_ParamLimits

0xf7ee,	// (0x0001238b) popup_query_code_window_t

0x11e7,	// (0x00003d84) query_popup_pane_ParamLimits

0x11e7,	// (0x00003d84) query_popup_pane

0xe385,	// (0x00010f22) bg_popup_window_pane_cp15_ParamLimits

0xe385,	// (0x00010f22) bg_popup_window_pane_cp15

0x9413,	// (0x0000bfb0) indicator_popup_pane_cp1_ParamLimits

0x9413,	// (0x0000bfb0) indicator_popup_pane_cp1

0x9426,	// (0x0000bfc3) indicator_popup_pane_cp2_ParamLimits

0x9426,	// (0x0000bfc3) indicator_popup_pane_cp2

0x9439,	// (0x0000bfd6) popup_query_data_code_window_g1_ParamLimits

0x9439,	// (0x0000bfd6) popup_query_data_code_window_g1

0xe3a3,	// (0x00010f40) popup_query_data_code_window_t1_ParamLimits

0xe3a3,	// (0x00010f40) popup_query_data_code_window_t1

0xe3b5,	// (0x00010f52) popup_query_data_code_window_t2_ParamLimits

0xe3b5,	// (0x00010f52) popup_query_data_code_window_t2

0x944c,	// (0x0000bfe9) popup_query_data_code_window_t3_ParamLimits

0x944c,	// (0x0000bfe9) popup_query_data_code_window_t3

0x9462,	// (0x0000bfff) popup_query_data_code_window_t4_ParamLimits

0x9462,	// (0x0000bfff) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00012102) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00012102) popup_query_data_code_window_t

0xf0d4,	// (0x00011c71) list_single_midp_graphic_pane_g3

0x947a,	// (0x0000c017) query_popup_data_pane_cp2_ParamLimits

0x948d,	// (0x0000c02a) query_popup_pane_cp2_ParamLimits

0x948d,	// (0x0000c02a) query_popup_pane_cp2

0xe11d,	// (0x00010cba) bg_popup_window_pane_cp11

0x10e5,	// (0x00003c82) heading_pane_cp5

0x10ed,	// (0x00003c8a) listscroll_popup_info_pane

0xe11d,	// (0x00010cba) input_focus_pane_cp3

0xe3c7,	// (0x00010f64) query_popup_pane_t1

0xe3d5,	// (0x00010f72) list_popup_info_pane_ParamLimits

0xe3d5,	// (0x00010f72) list_popup_info_pane

0xe3e4,	// (0x00010f81) listscroll_popup_info_pane_g1

0xe3ec,	// (0x00010f89) scroll_pane_cp7

0x94a0,	// (0x0000c03d) popup_info_list_pane_t1_ParamLimits

0x94a0,	// (0x0000c03d) popup_info_list_pane_t1

0x94ba,	// (0x0000c057) popup_info_list_pane_t2_ParamLimits

0x94ba,	// (0x0000c057) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001210b) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001210b) popup_info_list_pane_t

0xe11d,	// (0x00010cba) bg_popup_window_pane_cp12

0xbb37,	// (0x0000e6d4) find_popup_pane

0xe199,	// (0x00010d36) bg_popup_window_pane_cp3

0xe3f6,	// (0x00010f93) heading_pane_cp3

0xe405,	// (0x00010fa2) listscroll_popup_graphic_pane

0xe11d,	// (0x00010cba) bg_popup_window_pane_cp4

0x9524,	// (0x0000c0c1) heading_pane_cp4

0xe415,	// (0x00010fb2) listscroll_popup_colour_pane

0x952e,	// (0x0000c0cb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x952e,	// (0x0000c0cb) cell_large_graphic_colour_none_popup_pane

0x9542,	// (0x0000c0df) grid_large_graphic_colour_popup_pane_ParamLimits

0x9542,	// (0x0000c0df) grid_large_graphic_colour_popup_pane

0x9566,	// (0x0000c103) listscroll_popup_colour_pane_g1_ParamLimits

0x9566,	// (0x0000c103) listscroll_popup_colour_pane_g1

0x957d,	// (0x0000c11a) listscroll_popup_colour_pane_g2_ParamLimits

0x957d,	// (0x0000c11a) listscroll_popup_colour_pane_g2

0x9591,	// (0x0000c12e) listscroll_popup_colour_pane_g3_ParamLimits

0x9591,	// (0x0000c12e) listscroll_popup_colour_pane_g3

0x95a1,	// (0x0000c13e) listscroll_popup_colour_pane_g4_ParamLimits

0x95a1,	// (0x0000c13e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00012110) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00012110) listscroll_popup_colour_pane_g

0xe41d,	// (0x00010fba) scroll_pane_cp6_ParamLimits

0xe41d,	// (0x00010fba) scroll_pane_cp6

0x95b1,	// (0x0000c14e) cell_large_graphic_colour_popup_pane_ParamLimits

0x95b1,	// (0x0000c14e) cell_large_graphic_colour_popup_pane

0x95d0,	// (0x0000c16d) cell_large_graphic_colour_none_popup_pane_t1

0xe11d,	// (0x00010cba) grid_highlight_pane_cp5

0xe42f,	// (0x00010fcc) cell_large_graphic_colour_popup_pane_g1

0xe437,	// (0x00010fd4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00012119) cell_large_graphic_colour_popup_pane_g

0xe43f,	// (0x00010fdc) cell_large_graphic_colour_popup_pane_g2_copy1

0xe448,	// (0x00010fe5) grid_highlight_pane_cp4

0xe450,	// (0x00010fed) bg_popup_window_pane_cp8_ParamLimits

0xe450,	// (0x00010fed) bg_popup_window_pane_cp8

0x95df,	// (0x0000c17c) popup_snote_single_text_window_g1_ParamLimits

0x95df,	// (0x0000c17c) popup_snote_single_text_window_g1

0x95f1,	// (0x0000c18e) popup_snote_single_text_window_t1_ParamLimits

0x95f1,	// (0x0000c18e) popup_snote_single_text_window_t1

0x9604,	// (0x0000c1a1) popup_snote_single_text_window_t2_ParamLimits

0x9604,	// (0x0000c1a1) popup_snote_single_text_window_t2

0x9617,	// (0x0000c1b4) popup_snote_single_text_window_t3_ParamLimits

0x9617,	// (0x0000c1b4) popup_snote_single_text_window_t3

0x9650,	// (0x0000c1ed) popup_snote_single_text_window_t4_ParamLimits

0x9650,	// (0x0000c1ed) popup_snote_single_text_window_t4

0x9684,	// (0x0000c221) popup_snote_single_text_window_t5_ParamLimits

0x9684,	// (0x0000c221) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001211e) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001211e) popup_snote_single_text_window_t

0xe46b,	// (0x00011008) bg_popup_window_pane_cp9_ParamLimits

0xe46b,	// (0x00011008) bg_popup_window_pane_cp9

0x95df,	// (0x0000c17c) popup_snote_single_graphic_window_g1_ParamLimits

0x95df,	// (0x0000c17c) popup_snote_single_graphic_window_g1

0xe479,	// (0x00011016) popup_snote_single_graphic_window_g2_ParamLimits

0xe479,	// (0x00011016) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00012129) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00012129) popup_snote_single_graphic_window_g

0xe485,	// (0x00011022) popup_snote_single_graphic_window_t1_ParamLimits

0xe485,	// (0x00011022) popup_snote_single_graphic_window_t1

0xe498,	// (0x00011035) popup_snote_single_graphic_window_t2_ParamLimits

0xe498,	// (0x00011035) popup_snote_single_graphic_window_t2

0x9617,	// (0x0000c1b4) popup_snote_single_graphic_window_t3_ParamLimits

0x9617,	// (0x0000c1b4) popup_snote_single_graphic_window_t3

0x9650,	// (0x0000c1ed) popup_snote_single_graphic_window_t4_ParamLimits

0x9650,	// (0x0000c1ed) popup_snote_single_graphic_window_t4

0x96b3,	// (0x0000c250) popup_snote_single_graphic_window_t5_ParamLimits

0x96b3,	// (0x0000c250) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001212e) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001212e) popup_snote_single_graphic_window_t

0x26b9,	// (0x00005256) grid_graphic_popup_pane_ParamLimits

0x26b9,	// (0x00005256) grid_graphic_popup_pane

0x26e3,	// (0x00005280) listscroll_popup_graphic_pane_g1_ParamLimits

0x26e3,	// (0x00005280) listscroll_popup_graphic_pane_g1

0xba82,	// (0x0000e61f) listscroll_popup_graphic_pane_g2_ParamLimits

0xba82,	// (0x0000e61f) listscroll_popup_graphic_pane_g2

0x0001,

0xf96b,	// (0x00012508) listscroll_popup_graphic_pane_g_ParamLimits

0xf96b,	// (0x00012508) listscroll_popup_graphic_pane_g

0x270b,	// (0x000052a8) scroll_pane_cp5

0xba41,	// (0x0000e5de) cell_graphic_popup_pane_ParamLimits

0xba41,	// (0x0000e5de) cell_graphic_popup_pane

0x2630,	// (0x000051cd) cell_graphic_popup_pane_g1

0x2638,	// (0x000051d5) cell_graphic_popup_pane_g2

0xe43f,	// (0x00010fdc) cell_graphic_popup_pane_g3

0x0002,

0xf964,	// (0x00012501) cell_graphic_popup_pane_g

0x2641,	// (0x000051de) cell_graphic_popup_pane_t2

0xe448,	// (0x00010fe5) grid_highlight_pane_cp3

0xe4bd,	// (0x0001105a) list_gen_pane_ParamLimits

0xe4bd,	// (0x0001105a) list_gen_pane

0xe4e5,	// (0x00011082) scroll_pane

0xb9ab,	// (0x0000e548) bg_list_pane_g1_ParamLimits

0xb9ab,	// (0x0000e548) bg_list_pane_g1

0xb9c6,	// (0x0000e563) bg_list_pane_g2_ParamLimits

0xb9c6,	// (0x0000e563) bg_list_pane_g2

0xb9d9,	// (0x0000e576) bg_list_pane_g3_ParamLimits

0xb9d9,	// (0x0000e576) bg_list_pane_g3

0xb9eb,	// (0x0000e588) bg_list_pane_g4_ParamLimits

0xb9eb,	// (0x0000e588) bg_list_pane_g4

0xb9fd,	// (0x0000e59a) bg_list_pane_g5_ParamLimits

0xb9fd,	// (0x0000e59a) bg_list_pane_g5

0x0004,

0xf959,	// (0x000124f6) bg_list_pane_g_ParamLimits

0xf959,	// (0x000124f6) bg_list_pane_g

0xb94e,	// (0x0000e4eb) list_double2_graphic_large_graphic_pane_ParamLimits

0xb94e,	// (0x0000e4eb) list_double2_graphic_large_graphic_pane

0xb94e,	// (0x0000e4eb) list_double2_graphic_pane_ParamLimits

0xb94e,	// (0x0000e4eb) list_double2_graphic_pane

0xb94e,	// (0x0000e4eb) list_double2_large_graphic_pane_ParamLimits

0xb94e,	// (0x0000e4eb) list_double2_large_graphic_pane

0xb961,	// (0x0000e4fe) list_double2_pane_ParamLimits

0xb961,	// (0x0000e4fe) list_double2_pane

0xb94e,	// (0x0000e4eb) list_double_graphic_heading_pane_ParamLimits

0xb94e,	// (0x0000e4eb) list_double_graphic_heading_pane

0xb94e,	// (0x0000e4eb) list_double_graphic_pane_ParamLimits

0xb94e,	// (0x0000e4eb) list_double_graphic_pane

0xb94e,	// (0x0000e4eb) list_double_heading_pane_ParamLimits

0xb94e,	// (0x0000e4eb) list_double_heading_pane

0xb94e,	// (0x0000e4eb) list_double_large_graphic_pane_ParamLimits

0xb94e,	// (0x0000e4eb) list_double_large_graphic_pane

0xb94e,	// (0x0000e4eb) list_double_number_pane_ParamLimits

0xb94e,	// (0x0000e4eb) list_double_number_pane

0xb94e,	// (0x0000e4eb) list_double_pane_ParamLimits

0xb94e,	// (0x0000e4eb) list_double_pane

0xb94e,	// (0x0000e4eb) list_double_time_pane_ParamLimits

0xb94e,	// (0x0000e4eb) list_double_time_pane

0xb94e,	// (0x0000e4eb) list_setting_number_pane_ParamLimits

0xb94e,	// (0x0000e4eb) list_setting_number_pane

0xb94e,	// (0x0000e4eb) list_setting_pane_ParamLimits

0xb94e,	// (0x0000e4eb) list_setting_pane

0x9c78,	// (0x0000c815) list_single_2graphic_pane_ParamLimits

0x9c78,	// (0x0000c815) list_single_2graphic_pane

0x9c78,	// (0x0000c815) list_single_graphic_heading_pane_ParamLimits

0x9c78,	// (0x0000c815) list_single_graphic_heading_pane

0x9c78,	// (0x0000c815) list_single_graphic_pane_ParamLimits

0x9c78,	// (0x0000c815) list_single_graphic_pane

0x9c78,	// (0x0000c815) list_single_heading_pane_ParamLimits

0x9c78,	// (0x0000c815) list_single_heading_pane

0xb94e,	// (0x0000e4eb) list_single_large_graphic_pane_ParamLimits

0xb94e,	// (0x0000e4eb) list_single_large_graphic_pane

0x9c78,	// (0x0000c815) list_single_number_heading_pane_ParamLimits

0x9c78,	// (0x0000c815) list_single_number_heading_pane

0x9c78,	// (0x0000c815) list_single_number_pane_ParamLimits

0x9c78,	// (0x0000c815) list_single_number_pane

0x9c78,	// (0x0000c815) list_single_pane_ParamLimits

0x9c78,	// (0x0000c815) list_single_pane

0xe11d,	// (0x00010cba) list_highlight_pane_cp1

0xf179,	// (0x00011d16) list_single_pane_g1_ParamLimits

0xf179,	// (0x00011d16) list_single_pane_g1

0x092b,	// (0x000034c8) list_single_pane_g2_ParamLimits

0x092b,	// (0x000034c8) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00012140) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00012140) list_single_pane_g

0x47e1,	// (0x0000737e) list_single_pane_t1_ParamLimits

0x47e1,	// (0x0000737e) list_single_pane_t1

0xf179,	// (0x00011d16) list_single_number_pane_g1_ParamLimits

0xf179,	// (0x00011d16) list_single_number_pane_g1

0x092b,	// (0x000034c8) list_single_number_pane_g2_ParamLimits

0x092b,	// (0x000034c8) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00012140) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00012140) list_single_number_pane_g

0x0a1f,	// (0x000035bc) list_single_number_pane_t1_ParamLimits

0x0a1f,	// (0x000035bc) list_single_number_pane_t1

0xb6ee,	// (0x0000e28b) list_single_number_pane_t2_ParamLimits

0xb6ee,	// (0x0000e28b) list_single_number_pane_t2

0x0001,

0xf91a,	// (0x000124b7) list_single_number_pane_t_ParamLimits

0xf91a,	// (0x000124b7) list_single_number_pane_t

0x0a13,	// (0x000035b0) list_single_graphic_pane_g1_ParamLimits

0x0a13,	// (0x000035b0) list_single_graphic_pane_g1

0xf179,	// (0x00011d16) list_single_graphic_pane_g2_ParamLimits

0xf179,	// (0x00011d16) list_single_graphic_pane_g2

0x092b,	// (0x000034c8) list_single_graphic_pane_g3_ParamLimits

0x092b,	// (0x000034c8) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00012139) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00012139) list_single_graphic_pane_g

0x0a1f,	// (0x000035bc) list_single_graphic_pane_t1_ParamLimits

0x0a1f,	// (0x000035bc) list_single_graphic_pane_t1

0xf179,	// (0x00011d16) list_single_heading_pane_g1_ParamLimits

0xf179,	// (0x00011d16) list_single_heading_pane_g1

0x092b,	// (0x000034c8) list_single_heading_pane_g2_ParamLimits

0x092b,	// (0x000034c8) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00012140) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00012140) list_single_heading_pane_g

0x2e28,	// (0x000059c5) list_single_heading_pane_t1_ParamLimits

0x2e28,	// (0x000059c5) list_single_heading_pane_t1

0x96ec,	// (0x0000c289) list_single_heading_pane_t2_ParamLimits

0x96ec,	// (0x0000c289) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00012145) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00012145) list_single_heading_pane_t

0xf179,	// (0x00011d16) list_single_number_heading_pane_g1_ParamLimits

0xf179,	// (0x00011d16) list_single_number_heading_pane_g1

0x092b,	// (0x000034c8) list_single_number_heading_pane_g2_ParamLimits

0x092b,	// (0x000034c8) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00012140) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00012140) list_single_number_heading_pane_g

0x2e28,	// (0x000059c5) list_single_number_heading_pane_t1_ParamLimits

0x2e28,	// (0x000059c5) list_single_number_heading_pane_t1

0x96fe,	// (0x0000c29b) list_single_number_heading_pane_t2_ParamLimits

0x96fe,	// (0x0000c29b) list_single_number_heading_pane_t2

0x9710,	// (0x0000c2ad) list_single_number_heading_pane_t3_ParamLimits

0x9710,	// (0x0000c2ad) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001214a) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001214a) list_single_number_heading_pane_t

0x9722,	// (0x0000c2bf) list_single_graphic_heading_pane_g1_ParamLimits

0x9722,	// (0x0000c2bf) list_single_graphic_heading_pane_g1

0x972e,	// (0x0000c2cb) list_single_graphic_heading_pane_g4_ParamLimits

0x972e,	// (0x0000c2cb) list_single_graphic_heading_pane_g4

0x092b,	// (0x000034c8) list_single_graphic_heading_pane_g5_ParamLimits

0x092b,	// (0x000034c8) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00012151) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00012151) list_single_graphic_heading_pane_g

0x2e28,	// (0x000059c5) list_single_graphic_heading_pane_t1_ParamLimits

0x2e28,	// (0x000059c5) list_single_graphic_heading_pane_t1

0x973f,	// (0x0000c2dc) list_single_graphic_heading_pane_t2_ParamLimits

0x973f,	// (0x0000c2dc) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00012158) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00012158) list_single_graphic_heading_pane_t

0x2e9c,	// (0x00005a39) list_single_large_graphic_pane_g1_ParamLimits

0x2e9c,	// (0x00005a39) list_single_large_graphic_pane_g1

0x2ea8,	// (0x00005a45) list_single_large_graphic_pane_g2_ParamLimits

0x2ea8,	// (0x00005a45) list_single_large_graphic_pane_g2

0x2eb4,	// (0x00005a51) list_single_large_graphic_pane_g3_ParamLimits

0x2eb4,	// (0x00005a51) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001215d) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001215d) list_single_large_graphic_pane_g

0x12a1,	// (0x00003e3e) wait_border_pane_g2_copy1

0x9751,	// (0x0000c2ee) list_single_large_graphic_pane_g4_cp2

0x2ec0,	// (0x00005a5d) list_single_large_graphic_pane_t1_ParamLimits

0x2ec0,	// (0x00005a5d) list_single_large_graphic_pane_t1

0xed9d,	// (0x0001193a) list_double_pane_g1_ParamLimits

0xed9d,	// (0x0001193a) list_double_pane_g1

0xe519,	// (0x000110b6) list_double_pane_g2_ParamLimits

0xe519,	// (0x000110b6) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00012164) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00012164) list_double_pane_g

0x9759,	// (0x0000c2f6) list_double_pane_t1_ParamLimits

0x9759,	// (0x0000c2f6) list_double_pane_t1

0x976f,	// (0x0000c30c) list_double_pane_t2_ParamLimits

0x976f,	// (0x0000c30c) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00012169) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00012169) list_double_pane_t

0x9781,	// (0x0000c31e) list_double2_pane_g1_ParamLimits

0x9781,	// (0x0000c31e) list_double2_pane_g1

0x9792,	// (0x0000c32f) list_double2_pane_g2_ParamLimits

0x9792,	// (0x0000c32f) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001216e) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001216e) list_double2_pane_g

0x979e,	// (0x0000c33b) list_double2_pane_t1_ParamLimits

0x979e,	// (0x0000c33b) list_double2_pane_t1

0x97b4,	// (0x0000c351) list_double2_pane_t2_ParamLimits

0x97b4,	// (0x0000c351) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00012173) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00012173) list_double2_pane_t

0xed9d,	// (0x0001193a) list_double_number_pane_g1_ParamLimits

0xed9d,	// (0x0001193a) list_double_number_pane_g1

0xe519,	// (0x000110b6) list_double_number_pane_g2_ParamLimits

0xe519,	// (0x000110b6) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00012164) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00012164) list_double_number_pane_g

0x97c6,	// (0x0000c363) list_double_number_pane_t1_ParamLimits

0x97c6,	// (0x0000c363) list_double_number_pane_t1

0x97d8,	// (0x0000c375) list_double_number_pane_t2_ParamLimits

0x97d8,	// (0x0000c375) list_double_number_pane_t2

0x97ee,	// (0x0000c38b) list_double_number_pane_t3_ParamLimits

0x97ee,	// (0x0000c38b) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00012178) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00012178) list_double_number_pane_t

0x9800,	// (0x0000c39d) list_double_graphic_pane_g1_ParamLimits

0x9800,	// (0x0000c39d) list_double_graphic_pane_g1

0x980c,	// (0x0000c3a9) list_double_graphic_pane_g2_ParamLimits

0x980c,	// (0x0000c3a9) list_double_graphic_pane_g2

0x981b,	// (0x0000c3b8) list_double_graphic_pane_g3_ParamLimits

0x981b,	// (0x0000c3b8) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001217f) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001217f) list_double_graphic_pane_g

0x9759,	// (0x0000c2f6) list_double_graphic_pane_t1_ParamLimits

0x9759,	// (0x0000c2f6) list_double_graphic_pane_t1

0x976f,	// (0x0000c30c) list_double_graphic_pane_t2_ParamLimits

0x976f,	// (0x0000c30c) list_double_graphic_pane_t2

0x0001,

0xf5cc,	// (0x00012169) list_double_graphic_pane_t_ParamLimits

0xf5cc,	// (0x00012169) list_double_graphic_pane_t

0x9833,	// (0x0000c3d0) list_double2_graphic_pane_g1_ParamLimits

0x9833,	// (0x0000c3d0) list_double2_graphic_pane_g1

0x983f,	// (0x0000c3dc) list_double2_graphic_pane_g2_ParamLimits

0x983f,	// (0x0000c3dc) list_double2_graphic_pane_g2

0x984b,	// (0x0000c3e8) list_double2_graphic_pane_g3_ParamLimits

0x984b,	// (0x0000c3e8) list_double2_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00012188) list_double2_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00012188) list_double2_graphic_pane_g

0x9857,	// (0x0000c3f4) list_double2_graphic_pane_t1_ParamLimits

0x9857,	// (0x0000c3f4) list_double2_graphic_pane_t1

0x986d,	// (0x0000c40a) list_double2_graphic_pane_t2_ParamLimits

0x986d,	// (0x0000c40a) list_double2_graphic_pane_t2

0x0001,

0xf5f2,	// (0x0001218f) list_double2_graphic_pane_t_ParamLimits

0xf5f2,	// (0x0001218f) list_double2_graphic_pane_t

0x987f,	// (0x0000c41c) list_double_large_graphic_pane_g1_ParamLimits

0x987f,	// (0x0000c41c) list_double_large_graphic_pane_g1

0x989e,	// (0x0000c43b) list_double_large_graphic_pane_g2_ParamLimits

0x989e,	// (0x0000c43b) list_double_large_graphic_pane_g2

0xe519,	// (0x000110b6) list_double_large_graphic_pane_g3_ParamLimits

0xe519,	// (0x000110b6) list_double_large_graphic_pane_g3

0x98af,	// (0x0000c44c) list_double_large_graphic_pane_g4_ParamLimits

0x98af,	// (0x0000c44c) list_double_large_graphic_pane_g4

0x0004,

0xf5f7,	// (0x00012194) list_double_large_graphic_pane_g_ParamLimits

0xf5f7,	// (0x00012194) list_double_large_graphic_pane_g

0x98c1,	// (0x0000c45e) list_double_large_graphic_pane_t1_ParamLimits

0x98c1,	// (0x0000c45e) list_double_large_graphic_pane_t1

0x98da,	// (0x0000c477) list_double_large_graphic_pane_t2_ParamLimits

0x98da,	// (0x0000c477) list_double_large_graphic_pane_t2

0x0001,

0xf602,	// (0x0001219f) list_double_large_graphic_pane_t_ParamLimits

0xf602,	// (0x0001219f) list_double_large_graphic_pane_t

0x98ec,	// (0x0000c489) list_double2_large_graphic_pane_g1_ParamLimits

0x98ec,	// (0x0000c489) list_double2_large_graphic_pane_g1

0x98f8,	// (0x0000c495) list_double2_large_graphic_pane_g2_ParamLimits

0x98f8,	// (0x0000c495) list_double2_large_graphic_pane_g2

0x984b,	// (0x0000c3e8) list_double2_large_graphic_pane_g3_ParamLimits

0x984b,	// (0x0000c3e8) list_double2_large_graphic_pane_g3

0x0002,

0xf607,	// (0x000121a4) list_double2_large_graphic_pane_g_ParamLimits

0xf607,	// (0x000121a4) list_double2_large_graphic_pane_g

0x9857,	// (0x0000c3f4) list_double2_large_graphic_pane_t1_ParamLimits

0x9857,	// (0x0000c3f4) list_double2_large_graphic_pane_t1

0x986d,	// (0x0000c40a) list_double2_large_graphic_pane_t2_ParamLimits

0x986d,	// (0x0000c40a) list_double2_large_graphic_pane_t2

0x0001,

0xf5f2,	// (0x0001218f) list_double2_large_graphic_pane_t_ParamLimits

0xf5f2,	// (0x0001218f) list_double2_large_graphic_pane_t

0x9909,	// (0x0000c4a6) list_double_heading_pane_g1_ParamLimits

0x9909,	// (0x0000c4a6) list_double_heading_pane_g1

0x991a,	// (0x0000c4b7) list_double_heading_pane_g2_ParamLimits

0x991a,	// (0x0000c4b7) list_double_heading_pane_g2

0x0001,

0xf60e,	// (0x000121ab) list_double_heading_pane_g_ParamLimits

0xf60e,	// (0x000121ab) list_double_heading_pane_g

0x9926,	// (0x0000c4c3) list_double_heading_pane_t1_ParamLimits

0x9926,	// (0x0000c4c3) list_double_heading_pane_t1

0x986d,	// (0x0000c40a) list_double_heading_pane_t2_ParamLimits

0x986d,	// (0x0000c40a) list_double_heading_pane_t2

0x0001,

0xf613,	// (0x000121b0) list_double_heading_pane_t_ParamLimits

0xf613,	// (0x000121b0) list_double_heading_pane_t

0x993c,	// (0x0000c4d9) list_double_graphic_heading_pane_g1_ParamLimits

0x993c,	// (0x0000c4d9) list_double_graphic_heading_pane_g1

0x9909,	// (0x0000c4a6) list_double_graphic_heading_pane_g2_ParamLimits

0x9909,	// (0x0000c4a6) list_double_graphic_heading_pane_g2

0x991a,	// (0x0000c4b7) list_double_graphic_heading_pane_g3_ParamLimits

0x991a,	// (0x0000c4b7) list_double_graphic_heading_pane_g3

0x0002,

0xf618,	// (0x000121b5) list_double_graphic_heading_pane_g_ParamLimits

0xf618,	// (0x000121b5) list_double_graphic_heading_pane_g

0x9926,	// (0x0000c4c3) list_double_graphic_heading_pane_t1_ParamLimits

0x9926,	// (0x0000c4c3) list_double_graphic_heading_pane_t1

0x986d,	// (0x0000c40a) list_double_graphic_heading_pane_t2_ParamLimits

0x986d,	// (0x0000c40a) list_double_graphic_heading_pane_t2

0x0001,

0xf613,	// (0x000121b0) list_double_graphic_heading_pane_t_ParamLimits

0xf613,	// (0x000121b0) list_double_graphic_heading_pane_t

0x989e,	// (0x0000c43b) list_double_time_pane_g1_ParamLimits

0x989e,	// (0x0000c43b) list_double_time_pane_g1

0xe519,	// (0x000110b6) list_double_time_pane_g2_ParamLimits

0xe519,	// (0x000110b6) list_double_time_pane_g2

0x0001,

0xf61f,	// (0x000121bc) list_double_time_pane_g_ParamLimits

0xf61f,	// (0x000121bc) list_double_time_pane_g

0x9948,	// (0x0000c4e5) list_double_time_pane_t1_ParamLimits

0x9948,	// (0x0000c4e5) list_double_time_pane_t1

0x995e,	// (0x0000c4fb) list_double_time_pane_t2_ParamLimits

0x995e,	// (0x0000c4fb) list_double_time_pane_t2

0x9970,	// (0x0000c50d) list_double_time_pane_t3_ParamLimits

0x9970,	// (0x0000c50d) list_double_time_pane_t3

0x9982,	// (0x0000c51f) list_double_time_pane_t4_ParamLimits

0x9982,	// (0x0000c51f) list_double_time_pane_t4

0x0003,

0xf624,	// (0x000121c1) list_double_time_pane_t_ParamLimits

0xf624,	// (0x000121c1) list_double_time_pane_t

0x983f,	// (0x0000c3dc) list_setting_pane_g1_ParamLimits

0x983f,	// (0x0000c3dc) list_setting_pane_g1

0x984b,	// (0x0000c3e8) list_setting_pane_g2_ParamLimits

0x984b,	// (0x0000c3e8) list_setting_pane_g2

0x0001,

0xf62d,	// (0x000121ca) list_setting_pane_g_ParamLimits

0xf62d,	// (0x000121ca) list_setting_pane_g

0x9994,	// (0x0000c531) list_setting_pane_t1_ParamLimits

0x9994,	// (0x0000c531) list_setting_pane_t1

0x99ab,	// (0x0000c548) list_setting_pane_t2_ParamLimits

0x99ab,	// (0x0000c548) list_setting_pane_t2

0x0002,

0xf632,	// (0x000121cf) list_setting_pane_t_ParamLimits

0xf632,	// (0x000121cf) list_setting_pane_t

0x99ea,	// (0x0000c587) set_value_pane_cp_ParamLimits

0x99ea,	// (0x0000c587) set_value_pane_cp

0x983f,	// (0x0000c3dc) list_setting_number_pane_g1_ParamLimits

0x983f,	// (0x0000c3dc) list_setting_number_pane_g1

0x984b,	// (0x0000c3e8) list_setting_number_pane_g2_ParamLimits

0x984b,	// (0x0000c3e8) list_setting_number_pane_g2

0x0001,

0xf62d,	// (0x000121ca) list_setting_number_pane_g_ParamLimits

0xf62d,	// (0x000121ca) list_setting_number_pane_g

0x99f6,	// (0x0000c593) list_setting_number_pane_t1_ParamLimits

0x99f6,	// (0x0000c593) list_setting_number_pane_t1

0x9a0a,	// (0x0000c5a7) list_setting_number_pane_t2_ParamLimits

0x9a0a,	// (0x0000c5a7) list_setting_number_pane_t2

0x9a21,	// (0x0000c5be) list_setting_number_pane_t3_ParamLimits

0x9a21,	// (0x0000c5be) list_setting_number_pane_t3

0x0003,

0xf639,	// (0x000121d6) list_setting_number_pane_t_ParamLimits

0xf639,	// (0x000121d6) list_setting_number_pane_t

0x99ea,	// (0x0000c587) set_value_pane_ParamLimits

0x99ea,	// (0x0000c587) set_value_pane

0xe53a,	// (0x000110d7) bg_set_opt_pane_ParamLimits

0xe53a,	// (0x000110d7) bg_set_opt_pane

0xe55b,	// (0x000110f8) set_value_pane_t1

0xe569,	// (0x00011106) slider_set_pane_cp3

0x9a64,	// (0x0000c601) volume_small_pane_cp

0xe572,	// (0x0001110f) list_form_gen_pane

0xe57b,	// (0x00011118) scroll_pane_cp8

0x9a6d,	// (0x0000c60a) form_field_data_pane_ParamLimits

0x9a6d,	// (0x0000c60a) form_field_data_pane

0x9a84,	// (0x0000c621) form_field_data_wide_pane_ParamLimits

0x9a84,	// (0x0000c621) form_field_data_wide_pane

0x9aa4,	// (0x0000c641) form_field_popup_pane_ParamLimits

0x9aa4,	// (0x0000c641) form_field_popup_pane

0x9ac4,	// (0x0000c661) form_field_popup_wide_pane_ParamLimits

0x9ac4,	// (0x0000c661) form_field_popup_wide_pane

0xe59c,	// (0x00011139) form_field_slider_pane_ParamLimits

0xe59c,	// (0x00011139) form_field_slider_pane

0x9adb,	// (0x0000c678) form_field_slider_wide_pane_ParamLimits

0x9adb,	// (0x0000c678) form_field_slider_wide_pane

0xe5af,	// (0x0001114c) data_form_pane

0x9af8,	// (0x0000c695) form_field_data_pane_t1

0xe5bb,	// (0x00011158) input_focus_pane

0xe5c9,	// (0x00011166) data_form_wide_pane

0xe606,	// (0x000111a3) form_field_data_wide_pane_t1

0xe45d,	// (0x00010ffa) input_focus_pane_cp6

0x9b12,	// (0x0000c6af) form_field_popup_pane_t1

0xe5bb,	// (0x00011158) input_focus_pane_cp7

0xe628,	// (0x000111c5) list_form_pane

0xe63c,	// (0x000111d9) form_field_popup_wide_pane_t1

0xe5bb,	// (0x00011158) input_focus_pane_cp8

0xe651,	// (0x000111ee) list_form_wide_pane

0x9b34,	// (0x0000c6d1) form_field_slider_pane_t1_ParamLimits

0x9b34,	// (0x0000c6d1) form_field_slider_pane_t1

0x9b4c,	// (0x0000c6e9) form_field_slider_pane_t2_ParamLimits

0x9b4c,	// (0x0000c6e9) form_field_slider_pane_t2

0x0001,

0xf649,	// (0x000121e6) form_field_slider_pane_t_ParamLimits

0xf649,	// (0x000121e6) form_field_slider_pane_t

0xe18b,	// (0x00010d28) input_focus_pane_cp9_ParamLimits

0xe18b,	// (0x00010d28) input_focus_pane_cp9

0x9b61,	// (0x0000c6fe) slider_cont_pane_ParamLimits

0x9b61,	// (0x0000c6fe) slider_cont_pane

0xe65d,	// (0x000111fa) form_field_slider_wide_pane_t1_ParamLimits

0xe65d,	// (0x000111fa) form_field_slider_wide_pane_t1

0xe66f,	// (0x0001120c) form_field_slider_wide_pane_t2_ParamLimits

0xe66f,	// (0x0001120c) form_field_slider_wide_pane_t2

0x0001,

0xf64e,	// (0x000121eb) form_field_slider_wide_pane_t_ParamLimits

0xf64e,	// (0x000121eb) form_field_slider_wide_pane_t

0xe18b,	// (0x00010d28) input_focus_pane_cp10_ParamLimits

0xe18b,	// (0x00010d28) input_focus_pane_cp10

0x9b75,	// (0x0000c712) slider_cont_pane_cp1_ParamLimits

0x9b75,	// (0x0000c712) slider_cont_pane_cp1

0x9b89,	// (0x0000c726) slider_form_pane_cp

0xe681,	// (0x0001121e) input_focus_pane_g1

0xe689,	// (0x00011226) input_focus_pane_g2

0xe691,	// (0x0001122e) input_focus_pane_g3

0xe699,	// (0x00011236) input_focus_pane_g4

0xe6a1,	// (0x0001123e) input_focus_pane_g5

0xe6a9,	// (0x00011246) input_focus_pane_g6

0xe6b1,	// (0x0001124e) input_focus_pane_g7

0xe6b9,	// (0x00011256) input_focus_pane_g8

0xe6c1,	// (0x0001125e) input_focus_pane_g9

0xe0f3,	// (0x00010c90) input_focus_pane_g10

0x0009,

0xf653,	// (0x000121f0) input_focus_pane_g

0x12aa,	// (0x00003e47) wait_border_pane_g3_copy1

0x9b91,	// (0x0000c72e) data_form_pane_t1

0xe0f3,	// (0x00010c90) wait_anim_pane_g1_copy1

0xb932,	// (0x0000e4cf) data_form_wide_pane_t1

0x9bab,	// (0x0000c748) list_form_graphic_pane_cp_ParamLimits

0x9bab,	// (0x0000c748) list_form_graphic_pane_cp

0x23dd,	// (0x00004f7a) slider_form_pane_g1

0x23e6,	// (0x00004f83) slider_form_pane_g2

0x0006,

0xf94a,	// (0x000124e7) slider_form_pane_g

0x9bbd,	// (0x0000c75a) list_form_graphic_pane_ParamLimits

0x9bbd,	// (0x0000c75a) list_form_graphic_pane

0x9bd0,	// (0x0000c76d) list_form_graphic_pane_g1

0x9bd8,	// (0x0000c775) list_form_graphic_pane_t1_ParamLimits

0x9bd8,	// (0x0000c775) list_form_graphic_pane_t1

0xe199,	// (0x00010d36) list_highlight_pane_cp5_ParamLimits

0xe199,	// (0x00010d36) list_highlight_pane_cp5

0x9bed,	// (0x0000c78a) find_pane_g1

0xe6c9,	// (0x00011266) input_find_pane

0x9bf6,	// (0x0000c793) input_find_pane_g1_ParamLimits

0x9bf6,	// (0x0000c793) input_find_pane_g1

0x9c02,	// (0x0000c79f) input_find_pane_t1_ParamLimits

0x9c02,	// (0x0000c79f) input_find_pane_t1

0x9c17,	// (0x0000c7b4) input_find_pane_t2_ParamLimits

0x9c17,	// (0x0000c7b4) input_find_pane_t2

0x0001,

0xf668,	// (0x00012205) input_find_pane_t_ParamLimits

0xf668,	// (0x00012205) input_find_pane_t

0xe6d2,	// (0x0001126f) input_focus_pane_cp5_ParamLimits

0xe6d2,	// (0x0001126f) input_focus_pane_cp5

0xe6e5,	// (0x00011282) bg_popup_window_pane_cp2_ParamLimits

0xe6e5,	// (0x00011282) bg_popup_window_pane_cp2

0xe6f2,	// (0x0001128f) listscroll_menu_pane_ParamLimits

0xe6f2,	// (0x0001128f) listscroll_menu_pane

0x9c38,	// (0x0000c7d5) popup_submenu_window_ParamLimits

0x9c38,	// (0x0000c7d5) popup_submenu_window

0xe6fe,	// (0x0001129b) find_popup_pane_g1

0x9c60,	// (0x0000c7fd) input_popup_find_pane_cp

0xe706,	// (0x000112a3) input_focus_pane_cp4_ParamLimits

0xe706,	// (0x000112a3) input_focus_pane_cp4

0xe714,	// (0x000112b1) input_popup_find_pane_t1_ParamLimits

0xe714,	// (0x000112b1) input_popup_find_pane_t1

0xe11d,	// (0x00010cba) bg_popup_sub_pane_cp

0xe742,	// (0x000112df) listscroll_popup_sub_pane

0xe74a,	// (0x000112e7) list_submenu_pane_ParamLimits

0xe74a,	// (0x000112e7) list_submenu_pane

0xe75b,	// (0x000112f8) scroll_pane_cp4

0x9c78,	// (0x0000c815) list_single_popup_submenu_pane_ParamLimits

0x9c78,	// (0x0000c815) list_single_popup_submenu_pane

0x9c8c,	// (0x0000c829) list_single_popup_submenu_pane_g1

0x9c94,	// (0x0000c831) list_single_popup_submenu_pane_t1_ParamLimits

0x9c94,	// (0x0000c831) list_single_popup_submenu_pane_t1

0xe18b,	// (0x00010d28) bg_active_tab_pane_cp1_ParamLimits

0xe18b,	// (0x00010d28) bg_active_tab_pane_cp1

0xe763,	// (0x00011300) tabs_2_active_pane_g1

0x9ca9,	// (0x0000c846) tabs_2_active_pane_t1

0xe18b,	// (0x00010d28) bg_passive_tab_pane_cp1_ParamLimits

0xe18b,	// (0x00010d28) bg_passive_tab_pane_cp1

0xe763,	// (0x00011300) tabs_2_passive_pane_g1

0x9ca9,	// (0x0000c846) tabs_2_passive_pane_t1

0xe199,	// (0x00010d36) bg_active_tab_pane_cp4

0x9cbb,	// (0x0000c858) tabs_2_long_active_pane_t1

0xf42a,	// (0x00011fc7) bg_passive_tab_pane_cp4

0x0afe,	// (0x0000369b) list_single_midp_graphic_pane_g4_ParamLimits

0xe199,	// (0x00010d36) bg_active_tab_pane_cp5

0x9cce,	// (0x0000c86b) tabs_3_long_active_pane_t1

0xf42a,	// (0x00011fc7) bg_passive_tab_pane_cp5

0x0afe,	// (0x0000369b) list_single_midp_graphic_pane_g4

0xe199,	// (0x00010d36) bg_popup_window_pane_cp13_ParamLimits

0xe199,	// (0x00010d36) bg_popup_window_pane_cp13

0xe76b,	// (0x00011308) listscroll_popup_fast_pane_ParamLimits

0xe76b,	// (0x00011308) listscroll_popup_fast_pane

0xe777,	// (0x00011314) grid_popup_fast_pane_ParamLimits

0xe777,	// (0x00011314) grid_popup_fast_pane

0xe789,	// (0x00011326) scroll_pane_cp9_ParamLimits

0xe789,	// (0x00011326) scroll_pane_cp9

0x47e1,	// (0x0000737e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x47e1,	// (0x0000737e) list_single_graphic_hl_pane_t1_cp2

0xe79c,	// (0x00011339) input_focus_pane_cp20_ParamLimits

0xe79c,	// (0x00011339) input_focus_pane_cp20

0xe7aa,	// (0x00011347) query_popup_data_pane_t1_ParamLimits

0xe7aa,	// (0x00011347) query_popup_data_pane_t1

0xe7bd,	// (0x0001135a) query_popup_data_pane_t2_ParamLimits

0xe7bd,	// (0x0001135a) query_popup_data_pane_t2

0xe803,	// (0x000113a0) query_popup_data_pane_t3_ParamLimits

0xe803,	// (0x000113a0) query_popup_data_pane_t3

0xe864,	// (0x00011401) query_popup_data_pane_t4_ParamLimits

0xe864,	// (0x00011401) query_popup_data_pane_t4

0xe8a0,	// (0x0001143d) query_popup_data_pane_t5_ParamLimits

0xe8a0,	// (0x0001143d) query_popup_data_pane_t5

0x0004,

0xf66d,	// (0x0001220a) query_popup_data_pane_t_ParamLimits

0xf66d,	// (0x0001220a) query_popup_data_pane_t

0xe681,	// (0x0001121e) bg_set_opt_pane_g1

0xe689,	// (0x00011226) bg_set_opt_pane_g2

0xe691,	// (0x0001122e) bg_set_opt_pane_g3

0xe699,	// (0x00011236) bg_set_opt_pane_g4

0xe6a1,	// (0x0001123e) bg_set_opt_pane_g5

0xe6a9,	// (0x00011246) bg_set_opt_pane_g6

0xe6b1,	// (0x0001124e) bg_set_opt_pane_g7

0xe6b9,	// (0x00011256) bg_set_opt_pane_g8

0xe6c1,	// (0x0001125e) bg_set_opt_pane_g9

0x0008,

0xf678,	// (0x00012215) bg_set_opt_pane_g

0xee7d,	// (0x00011a1a) control_top_pane_stacon_ParamLimits

0xee7d,	// (0x00011a1a) control_top_pane_stacon

0xeed0,	// (0x00011a6d) signal_pane_stacon_ParamLimits

0xeed0,	// (0x00011a6d) signal_pane_stacon

0xeef5,	// (0x00011a92) stacon_top_pane_g1_ParamLimits

0xeef5,	// (0x00011a92) stacon_top_pane_g1

0xef17,	// (0x00011ab4) title_pane_stacon_ParamLimits

0xef17,	// (0x00011ab4) title_pane_stacon

0xef41,	// (0x00011ade) uni_indicator_pane_stacon_ParamLimits

0xef41,	// (0x00011ade) uni_indicator_pane_stacon

0xef56,	// (0x00011af3) battery_pane_stacon_ParamLimits

0xef56,	// (0x00011af3) battery_pane_stacon

0xef9a,	// (0x00011b37) control_bottom_pane_stacon_ParamLimits

0xef9a,	// (0x00011b37) control_bottom_pane_stacon

0xefbd,	// (0x00011b5a) navi_pane_stacon_ParamLimits

0xefbd,	// (0x00011b5a) navi_pane_stacon

0xefe0,	// (0x00011b7d) stacon_bottom_pane_g1_ParamLimits

0xefe0,	// (0x00011b7d) stacon_bottom_pane_g1

0xe8d7,	// (0x00011474) aid_levels_signal_lsc_ParamLimits

0xe8d7,	// (0x00011474) aid_levels_signal_lsc

0xe8ed,	// (0x0001148a) signal_pane_stacon_g1_ParamLimits

0xe8ed,	// (0x0001148a) signal_pane_stacon_g1

0xe901,	// (0x0001149e) signal_pane_stacon_g2_ParamLimits

0xe901,	// (0x0001149e) signal_pane_stacon_g2

0x0001,

0xf68b,	// (0x00012228) signal_pane_stacon_g_ParamLimits

0xf68b,	// (0x00012228) signal_pane_stacon_g

0xe943,	// (0x000114e0) title_pane_stacon_t1_ParamLimits

0xe943,	// (0x000114e0) title_pane_stacon_t1

0xe968,	// (0x00011505) uni_indicator_pane_stacon_g1

0xe972,	// (0x0001150f) uni_indicator_pane_stacon_g2

0xe97c,	// (0x00011519) uni_indicator_pane_stacon_g3

0xe986,	// (0x00011523) uni_indicator_pane_stacon_g4

0x0003,

0xf697,	// (0x00012234) uni_indicator_pane_stacon_g

0xe990,	// (0x0001152d) control_top_pane_stacon_g1

0xe998,	// (0x00011535) control_top_pane_stacon_t1_ParamLimits

0xe998,	// (0x00011535) control_top_pane_stacon_t1

0xe9cf,	// (0x0001156c) aid_levels_battery_lsc_ParamLimits

0xe9cf,	// (0x0001156c) aid_levels_battery_lsc

0xe9e6,	// (0x00011583) battery_pane_stacon_g1_ParamLimits

0xe9e6,	// (0x00011583) battery_pane_stacon_g1

0xe9f9,	// (0x00011596) battery_pane_stacon_g2_ParamLimits

0xe9f9,	// (0x00011596) battery_pane_stacon_g2

0x0001,

0xf6a0,	// (0x0001223d) battery_pane_stacon_g_ParamLimits

0xf6a0,	// (0x0001223d) battery_pane_stacon_g

0xea37,	// (0x000115d4) navi_icon_pane_stacon

0xea4b,	// (0x000115e8) navi_navi_pane_stacon

0xea37,	// (0x000115d4) navi_text_pane_stacon

0xe990,	// (0x0001152d) control_bottom_pane_stacon_g1

0xea5f,	// (0x000115fc) control_bottom_pane_stacon_t1_ParamLimits

0xea5f,	// (0x000115fc) control_bottom_pane_stacon_t1

0x9cfa,	// (0x0000c897) grid_app_pane_ParamLimits

0x9cfa,	// (0x0000c897) grid_app_pane

0x9d32,	// (0x0000c8cf) scroll_pane_cp15_ParamLimits

0x9d32,	// (0x0000c8cf) scroll_pane_cp15

0x9d47,	// (0x0000c8e4) cell_app_pane_ParamLimits

0x9d47,	// (0x0000c8e4) cell_app_pane

0x9d8c,	// (0x0000c929) cell_app_pane_g1_ParamLimits

0x9d8c,	// (0x0000c929) cell_app_pane_g1

0xeab0,	// (0x0001164d) cell_app_pane_g2_ParamLimits

0xeab0,	// (0x0001164d) cell_app_pane_g2

0x0001,

0xf6a5,	// (0x00012242) cell_app_pane_g_ParamLimits

0xf6a5,	// (0x00012242) cell_app_pane_g

0x9db0,	// (0x0000c94d) cell_app_pane_t1_ParamLimits

0x9db0,	// (0x0000c94d) cell_app_pane_t1

0xeabc,	// (0x00011659) grid_highlight_pane_ParamLimits

0xeabc,	// (0x00011659) grid_highlight_pane

0xe681,	// (0x0001121e) cell_highlight_pane_g1

0xe689,	// (0x00011226) cell_highlight_pane_g2

0xe691,	// (0x0001122e) cell_highlight_pane_g3

0xe699,	// (0x00011236) cell_highlight_pane_g4

0xe6a1,	// (0x0001123e) cell_highlight_pane_g5

0xe6a9,	// (0x00011246) cell_highlight_pane_g6

0xe6b1,	// (0x0001124e) cell_highlight_pane_g7

0xe6b9,	// (0x00011256) cell_highlight_pane_g8

0xe6c1,	// (0x0001125e) cell_highlight_pane_g9

0xe0f3,	// (0x00010c90) cell_highlight_pane_g10

0x0009,

0xf653,	// (0x000121f0) cell_highlight_pane_g

0xead7,	// (0x00011674) bg_scroll_pane

0x9dd0,	// (0x0000c96d) scroll_handle_pane

0xeb33,	// (0x000116d0) scroll_bg_pane_g1

0xeb48,	// (0x000116e5) scroll_bg_pane_g2

0xeb60,	// (0x000116fd) scroll_bg_pane_g3

0x0002,

0xf6aa,	// (0x00012247) scroll_bg_pane_g

0x9de4,	// (0x0000c981) scroll_handle_focus_pane_ParamLimits

0x9de4,	// (0x0000c981) scroll_handle_focus_pane

0xeb33,	// (0x000116d0) scroll_handle_pane_g1

0xeb75,	// (0x00011712) scroll_handle_pane_g2

0xeb60,	// (0x000116fd) scroll_handle_pane_g3

0x0002,

0xf6b1,	// (0x0001224e) scroll_handle_pane_g

0xe706,	// (0x000112a3) bg_popup_sub_pane_cp21_ParamLimits

0xe706,	// (0x000112a3) bg_popup_sub_pane_cp21

0x9df1,	// (0x0000c98e) popup_fep_japan_predictive_window_t1_ParamLimits

0x9df1,	// (0x0000c98e) popup_fep_japan_predictive_window_t1

0x9e08,	// (0x0000c9a5) popup_fep_japan_predictive_window_t2_ParamLimits

0x9e08,	// (0x0000c9a5) popup_fep_japan_predictive_window_t2

0x9e3b,	// (0x0000c9d8) popup_fep_japan_predictive_window_t3_ParamLimits

0x9e3b,	// (0x0000c9d8) popup_fep_japan_predictive_window_t3

0x0002,

0xf6b8,	// (0x00012255) popup_fep_japan_predictive_window_t_ParamLimits

0xf6b8,	// (0x00012255) popup_fep_japan_predictive_window_t

0xe11d,	// (0x00010cba) bg_popup_sub_pane_cp23

0x9e72,	// (0x0000ca0f) listscroll_japin_cand_pane

0xeb89,	// (0x00011726) popup_fep_japan_candidate_window_t1

0xeb97,	// (0x00011734) candidate_pane_ParamLimits

0xeb97,	// (0x00011734) candidate_pane

0x9e7a,	// (0x0000ca17) scroll_pane_cp30

0xeba9,	// (0x00011746) list_single_popup_jap_candidate_pane_ParamLimits

0xeba9,	// (0x00011746) list_single_popup_jap_candidate_pane

0xe11d,	// (0x00010cba) list_highlight_pane_cp30

0xebbe,	// (0x0001175b) list_single_popup_jap_candidate_pane_t1

0xebcd,	// (0x0001176a) level_1_signal

0xebda,	// (0x00011777) level_2_signal

0xebe7,	// (0x00011784) level_3_signal

0xebf4,	// (0x00011791) level_4_signal

0xec01,	// (0x0001179e) level_5_signal

0xec0e,	// (0x000117ab) level_6_signal

0xec1b,	// (0x000117b8) level_7_signal

0xebcd,	// (0x0001176a) level_1_battery

0xebda,	// (0x00011777) level_2_battery

0xebe7,	// (0x00011784) level_3_battery

0xebf4,	// (0x00011791) level_4_battery

0xec01,	// (0x0001179e) level_5_battery

0xec0e,	// (0x000117ab) level_6_battery

0xec1b,	// (0x000117b8) level_7_battery

0xec5f,	// (0x000117fc) list_menu_pane_ParamLimits

0xec5f,	// (0x000117fc) list_menu_pane

0xec75,	// (0x00011812) scroll_pane_cp25_ParamLimits

0xec75,	// (0x00011812) scroll_pane_cp25

0x9e82,	// (0x0000ca1f) list_double2_graphic_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca1f) list_double2_graphic_pane_cp2

0x9e82,	// (0x0000ca1f) list_double2_large_graphic_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca1f) list_double2_large_graphic_pane_cp2

0x9e82,	// (0x0000ca1f) list_double2_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca1f) list_double2_pane_cp2

0x9e82,	// (0x0000ca1f) list_double_graphic_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca1f) list_double_graphic_pane_cp2

0x9e82,	// (0x0000ca1f) list_double_large_graphic_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca1f) list_double_large_graphic_pane_cp2

0x9e82,	// (0x0000ca1f) list_double_number_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca1f) list_double_number_pane_cp2

0x9e82,	// (0x0000ca1f) list_double_pane_cp2_ParamLimits

0x9e82,	// (0x0000ca1f) list_double_pane_cp2

0x9e91,	// (0x0000ca2e) list_single_2graphic_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca2e) list_single_2graphic_pane_cp2

0x9e91,	// (0x0000ca2e) list_single_graphic_heading_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca2e) list_single_graphic_heading_pane_cp2

0x9e91,	// (0x0000ca2e) list_single_graphic_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca2e) list_single_graphic_pane_cp2

0x9e91,	// (0x0000ca2e) list_single_heading_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca2e) list_single_heading_pane_cp2

0xec9e,	// (0x0001183b) list_single_large_graphic_pane_cp2_ParamLimits

0xec9e,	// (0x0001183b) list_single_large_graphic_pane_cp2

0x9e91,	// (0x0000ca2e) list_single_number_heading_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca2e) list_single_number_heading_pane_cp2

0x9e91,	// (0x0000ca2e) list_single_number_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca2e) list_single_number_pane_cp2

0x9ea3,	// (0x0000ca40) list_single_pane_cp2_ParamLimits

0x9ea3,	// (0x0000ca40) list_single_pane_cp2

0xed13,	// (0x000118b0) bg_popup_sub_pane_cp22

0xed29,	// (0x000118c6) popup_side_volume_key_window_g1

0xed35,	// (0x000118d2) popup_side_volume_key_window_t1

0x9f6b,	// (0x0000cb08) volume_small_pane_cp1

0xe18b,	// (0x00010d28) bg_popup_sub_pane_cp24_ParamLimits

0xe18b,	// (0x00010d28) bg_popup_sub_pane_cp24

0xed43,	// (0x000118e0) fep_china_uni_candidate_pane_ParamLimits

0xed43,	// (0x000118e0) fep_china_uni_candidate_pane

0xed57,	// (0x000118f4) fep_china_uni_entry_pane

0xed67,	// (0x00011904) popup_fep_china_uni_window_g1

0x9f73,	// (0x0000cb10) fep_china_uni_entry_pane_g1

0x9f7b,	// (0x0000cb18) fep_china_uni_entry_pane_g2

0x0001,

0xf6e9,	// (0x00012286) fep_china_uni_entry_pane_g

0xed83,	// (0x00011920) fep_entry_item_pane

0xed8d,	// (0x0001192a) fep_candidate_item_pane

0x9f83,	// (0x0000cb20) fep_china_uni_candidate_pane_g1

0xeda9,	// (0x00011946) fep_china_uni_candidate_pane_g2

0xedb1,	// (0x0001194e) fep_china_uni_candidate_pane_g3

0x9f8b,	// (0x0000cb28) fep_china_uni_candidate_pane_g4

0x0003,

0xf6ee,	// (0x0001228b) fep_china_uni_candidate_pane_g

0xe0f3,	// (0x00010c90) fep_entry_item_pane_g1

0xedb9,	// (0x00011956) fep_entry_item_pane_t1_ParamLimits

0xedb9,	// (0x00011956) fep_entry_item_pane_t1

0xedcf,	// (0x0001196c) fep_candidate_item_pane_t1_ParamLimits

0xedcf,	// (0x0001196c) fep_candidate_item_pane_t1

0xede4,	// (0x00011981) fep_candidate_item_pane_t2_ParamLimits

0xede4,	// (0x00011981) fep_candidate_item_pane_t2

0x0001,

0xf6f7,	// (0x00012294) fep_candidate_item_pane_t_ParamLimits

0xf6f7,	// (0x00012294) fep_candidate_item_pane_t

0xe199,	// (0x00010d36) list_highlight_pane_cp31_ParamLimits

0xe199,	// (0x00010d36) list_highlight_pane_cp31

0xedf6,	// (0x00011993) level_1_signal_lsc

0xedff,	// (0x0001199c) level_2_signal_lsc

0xee08,	// (0x000119a5) level_3_signal_lsc

0xee11,	// (0x000119ae) level_4_signal_lsc

0xee1a,	// (0x000119b7) level_5_signal_lsc

0xee23,	// (0x000119c0) level_6_signal_lsc

0xee2c,	// (0x000119c9) level_7_signal_lsc

0xee2c,	// (0x000119c9) level_1_battery_lsc

0xee35,	// (0x000119d2) level_2_battery_lsc

0xee3e,	// (0x000119db) level_3_battery_lsc

0xee47,	// (0x000119e4) level_4_battery_lsc

0xee50,	// (0x000119ed) level_5_battery_lsc

0xee59,	// (0x000119f6) level_6_battery_lsc

0xedf6,	// (0x00011993) level_7_battery_lsc

0xee62,	// (0x000119ff) scroll_handle_focus_pane_g1

0xee6b,	// (0x00011a08) scroll_handle_focus_pane_g2

0xee74,	// (0x00011a11) scroll_handle_focus_pane_g3

0x0002,

0xf6fc,	// (0x00012299) scroll_handle_focus_pane_g

0x9f93,	// (0x0000cb30) list_single_2graphic_pane_g1_ParamLimits

0x9f93,	// (0x0000cb30) list_single_2graphic_pane_g1

0x972e,	// (0x0000c2cb) list_single_2graphic_pane_g2_ParamLimits

0x972e,	// (0x0000c2cb) list_single_2graphic_pane_g2

0x092b,	// (0x000034c8) list_single_2graphic_pane_g3_ParamLimits

0x092b,	// (0x000034c8) list_single_2graphic_pane_g3

0x9f9f,	// (0x0000cb3c) list_single_2graphic_pane_g4_ParamLimits

0x9f9f,	// (0x0000cb3c) list_single_2graphic_pane_g4

0x0003,

0xf703,	// (0x000122a0) list_single_2graphic_pane_g_ParamLimits

0xf703,	// (0x000122a0) list_single_2graphic_pane_g

0x9fab,	// (0x0000cb48) list_single_2graphic_pane_t1_ParamLimits

0x9fab,	// (0x0000cb48) list_single_2graphic_pane_t1

0x9fd9,	// (0x0000cb76) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9fd9,	// (0x0000cb76) list_double2_graphic_large_graphic_pane_g1

0x98f8,	// (0x0000c495) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x98f8,	// (0x0000c495) list_double2_graphic_large_graphic_pane_g2

0x984b,	// (0x0000c3e8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x984b,	// (0x0000c3e8) list_double2_graphic_large_graphic_pane_g3

0x9feb,	// (0x0000cb88) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9feb,	// (0x0000cb88) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70c,	// (0x000122a9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70c,	// (0x000122a9) list_double2_graphic_large_graphic_pane_g

0x9ff7,	// (0x0000cb94) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9ff7,	// (0x0000cb94) list_double2_graphic_large_graphic_pane_t1

0xa00d,	// (0x0000cbaa) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa00d,	// (0x0000cbaa) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf715,	// (0x000122b2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf715,	// (0x000122b2) list_double2_graphic_large_graphic_pane_t

0xa092,	// (0x0000cc2f) popup_fast_swap_window_ParamLimits

0xa092,	// (0x0000cc2f) popup_fast_swap_window

0xa0ae,	// (0x0000cc4b) popup_side_volume_key_window

0xf06b,	// (0x00011c08) stacon_top_pane

0xf075,	// (0x00011c12) status_pane_ParamLimits

0xf075,	// (0x00011c12) status_pane

0xe0e9,	// (0x00010c86) status_small_pane

0xe11d,	// (0x00010cba) control_pane

0xe11d,	// (0x00010cba) stacon_bottom_pane

0xe57b,	// (0x00011118) scroll_pane_cp121

0xe572,	// (0x0001110f) set_content_pane

0xa01f,	// (0x0000cbbc) bg_active_tab_pane_g1_cp1

0xa028,	// (0x0000cbc5) bg_active_tab_pane_g2_cp1

0xa031,	// (0x0000cbce) bg_active_tab_pane_g3_cp1

0xa01f,	// (0x0000cbbc) bg_passive_tab_pane_g1_cp1

0xa028,	// (0x0000cbc5) bg_passive_tab_pane_g2_cp1

0xa031,	// (0x0000cbce) bg_passive_tab_pane_g3_cp1

0xa03a,	// (0x0000cbd7) bg_active_tab_pane_g1_cp2

0xa028,	// (0x0000cbc5) bg_active_tab_pane_g2_cp2

0xa043,	// (0x0000cbe0) bg_active_tab_pane_g3_cp2

0xa03a,	// (0x0000cbd7) bg_passive_tab_pane_g1_cp2

0xa028,	// (0x0000cbc5) bg_passive_tab_pane_g2_cp2

0xa043,	// (0x0000cbe0) bg_passive_tab_pane_g3_cp2

0xa04c,	// (0x0000cbe9) bg_active_tab_pane_g1_cp3

0xa028,	// (0x0000cbc5) bg_active_tab_pane_g2_cp3

0xa055,	// (0x0000cbf2) bg_active_tab_pane_g3_cp3

0xa04c,	// (0x0000cbe9) bg_passive_tab_pane_g1_cp3

0xa028,	// (0x0000cbc5) bg_passive_tab_pane_g2_cp3

0xa055,	// (0x0000cbf2) bg_passive_tab_pane_g3_cp3

0xa05e,	// (0x0000cbfb) bg_active_tab_pane_g1_cp4

0xa028,	// (0x0000cbc5) bg_active_tab_pane_g2_cp4

0xa069,	// (0x0000cc06) bg_active_tab_pane_g3_cp4

0xa05e,	// (0x0000cbfb) bg_passive_tab_pane_g1_cp4

0xa028,	// (0x0000cbc5) bg_passive_tab_pane_g2_cp4

0xa069,	// (0x0000cc06) bg_passive_tab_pane_g3_cp4

0xa074,	// (0x0000cc11) bg_active_tab_pane_g1_cp5

0xa028,	// (0x0000cbc5) bg_active_tab_pane_g2_cp5

0xa07d,	// (0x0000cc1a) bg_active_tab_pane_g3_cp5

0xa074,	// (0x0000cc11) bg_passive_tab_pane_g1_cp5

0xa028,	// (0x0000cbc5) bg_passive_tab_pane_g2_cp5

0xa07d,	// (0x0000cc1a) bg_passive_tab_pane_g3_cp5

0x2bcc,	// (0x00005769) list_set_graphic_pane_ParamLimits

0x2bcc,	// (0x00005769) list_set_graphic_pane

0xe11d,	// (0x00010cba) bg_set_opt_pane_cp4

0xeffc,	// (0x00011b99) list_set_graphic_pane_g1_ParamLimits

0xeffc,	// (0x00011b99) list_set_graphic_pane_g1

0xf008,	// (0x00011ba5) list_set_graphic_pane_g2_ParamLimits

0xf008,	// (0x00011ba5) list_set_graphic_pane_g2

0x0001,

0xf71a,	// (0x000122b7) list_set_graphic_pane_g_ParamLimits

0xf71a,	// (0x000122b7) list_set_graphic_pane_g

0x0009,

0xfa9f,	// (0x0001263c) volume_small_pane_cp_g

0xa086,	// (0x0000cc23) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa086,	// (0x0000cc23) list_double2_large_graphic_pane_g1_cp2

0xf02a,	// (0x00011bc7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf02a,	// (0x00011bc7) list_double2_large_graphic_pane_g2_cp2

0xf03b,	// (0x00011bd8) list_double2_large_graphic_pane_g3_cp2

0xf043,	// (0x00011be0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf043,	// (0x00011be0) list_double2_large_graphic_pane_t1_cp2

0xf059,	// (0x00011bf6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf059,	// (0x00011bf6) list_double2_large_graphic_pane_t2_cp2

0xb5bd,	// (0x0000e15a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb5bd,	// (0x0000e15a) list_double_large_graphic_pane_g1_cp2

0x1ed6,	// (0x00004a73) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x1ed6,	// (0x00004a73) list_double_large_graphic_pane_g2_cp2

0xf191,	// (0x00011d2e) list_double_large_graphic_pane_g3_cp2

0x1ee7,	// (0x00004a84) list_double_large_graphic_pane_g4_cp

0x1eef,	// (0x00004a8c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x1eef,	// (0x00004a8c) list_double_large_graphic_pane_t1_cp2

0x1f06,	// (0x00004aa3) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x1f06,	// (0x00004aa3) list_double_large_graphic_pane_t2_cp2

0xf083,	// (0x00011c20) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf083,	// (0x00011c20) list_double2_graphic_pane_g1_cp2

0xf091,	// (0x00011c2e) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf091,	// (0x00011c2e) list_double2_graphic_pane_g2_cp2

0xf0a2,	// (0x00011c3f) list_double2_graphic_pane_g3_cp2

0xf0ac,	// (0x00011c49) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf0ac,	// (0x00011c49) list_double2_graphic_pane_t1_cp2

0xf0c2,	// (0x00011c5f) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf0c2,	// (0x00011c5f) list_double2_graphic_pane_t2_cp2

0xed9d,	// (0x0001193a) list_single_number_heading_pane_g1_cp2_ParamLimits

0xed9d,	// (0x0001193a) list_single_number_heading_pane_g1_cp2

0xf0d4,	// (0x00011c71) list_single_number_heading_pane_g2_cp2

0xf0dc,	// (0x00011c79) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf0dc,	// (0x00011c79) list_single_number_heading_pane_t1_cp2

0xf0f2,	// (0x00011c8f) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf0f2,	// (0x00011c8f) list_single_number_heading_pane_t2_cp2

0xf104,	// (0x00011ca1) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf104,	// (0x00011ca1) list_single_number_heading_pane_t3_cp2

0xed9d,	// (0x0001193a) list_single_heading_pane_g1_cp2_ParamLimits

0xed9d,	// (0x0001193a) list_single_heading_pane_g1_cp2

0xf0d4,	// (0x00011c71) list_single_heading_pane_g2_cp2

0xf0dc,	// (0x00011c79) list_single_heading_pane_t1_cp2_ParamLimits

0xf0dc,	// (0x00011c79) list_single_heading_pane_t1_cp2

0x1ccf,	// (0x0000486c) list_single_heading_pane_t2_cp2_ParamLimits

0x1ccf,	// (0x0000486c) list_single_heading_pane_t2_cp2

0x1c17,	// (0x000047b4) list_double_graphic_pane_g1_cp2_ParamLimits

0x1c17,	// (0x000047b4) list_double_graphic_pane_g1_cp2

0x1c23,	// (0x000047c0) list_double_graphic_pane_g2_cp2_ParamLimits

0x1c23,	// (0x000047c0) list_double_graphic_pane_g2_cp2

0x1c32,	// (0x000047cf) list_double_graphic_pane_g3_cp2

0x1c3a,	// (0x000047d7) list_double_graphic_pane_t1_cp2_ParamLimits

0x1c3a,	// (0x000047d7) list_double_graphic_pane_t1_cp2

0x1c50,	// (0x000047ed) list_double_graphic_pane_t2_cp2_ParamLimits

0x1c50,	// (0x000047ed) list_double_graphic_pane_t2_cp2

0xf185,	// (0x00011d22) list_double_number_pane_g1_cp2_ParamLimits

0xf185,	// (0x00011d22) list_double_number_pane_g1_cp2

0xf191,	// (0x00011d2e) list_double_number_pane_g2_cp2

0x1bdb,	// (0x00004778) list_double_number_pane_t1_cp2_ParamLimits

0x1bdb,	// (0x00004778) list_double_number_pane_t1_cp2

0x1bef,	// (0x0000478c) list_double_number_pane_t2_cp2_ParamLimits

0x1bef,	// (0x0000478c) list_double_number_pane_t2_cp2

0x1c05,	// (0x000047a2) list_double_number_pane_t3_cp2_ParamLimits

0x1c05,	// (0x000047a2) list_double_number_pane_t3_cp2

0x1ab3,	// (0x00004650) list_single_graphic_pane_g1_cp2_ParamLimits

0x1ab3,	// (0x00004650) list_single_graphic_pane_g1_cp2

0xf179,	// (0x00011d16) list_single_graphic_pane_g2_cp2_ParamLimits

0xf179,	// (0x00011d16) list_single_graphic_pane_g2_cp2

0xf1ea,	// (0x00011d87) list_single_graphic_pane_g3_cp2

0x1a89,	// (0x00004626) list_single_graphic_pane_t1_cp2_ParamLimits

0x1a89,	// (0x00004626) list_single_graphic_pane_t1_cp2

0xf179,	// (0x00011d16) list_single_number_pane_g1_cp2_ParamLimits

0xf179,	// (0x00011d16) list_single_number_pane_g1_cp2

0xf1ea,	// (0x00011d87) list_single_number_pane_g2_cp2

0x1a89,	// (0x00004626) list_single_number_pane_t1_cp2_ParamLimits

0x1a89,	// (0x00004626) list_single_number_pane_t1_cp2

0x1a9f,	// (0x0000463c) list_single_number_pane_t2_cp2_ParamLimits

0x1a9f,	// (0x0000463c) list_single_number_pane_t2_cp2

0xf02a,	// (0x00011bc7) list_double2_pane_g1_cp2_ParamLimits

0xf02a,	// (0x00011bc7) list_double2_pane_g1_cp2

0xf03b,	// (0x00011bd8) list_double2_pane_g2_cp2

0xf151,	// (0x00011cee) list_double2_pane_t1_cp2_ParamLimits

0xf151,	// (0x00011cee) list_double2_pane_t1_cp2

0xf167,	// (0x00011d04) list_double2_pane_t2_cp2_ParamLimits

0xf167,	// (0x00011d04) list_double2_pane_t2_cp2

0xf185,	// (0x00011d22) list_double_pane_g1_cp2_ParamLimits

0xf185,	// (0x00011d22) list_double_pane_g1_cp2

0xf191,	// (0x00011d2e) list_double_pane_g2_cp2

0xf199,	// (0x00011d36) list_double_pane_t1_cp2_ParamLimits

0xf199,	// (0x00011d36) list_double_pane_t1_cp2

0xf1af,	// (0x00011d4c) list_double_pane_t2_cp2_ParamLimits

0xf1af,	// (0x00011d4c) list_double_pane_t2_cp2

0xa0c8,	// (0x0000cc65) list_single_pane_cp2_g3

0xf179,	// (0x00011d16) list_single_pane_g1_cp2_ParamLimits

0xf179,	// (0x00011d16) list_single_pane_g1_cp2

0xf1ea,	// (0x00011d87) list_single_pane_g2_cp2

0xf1f2,	// (0x00011d8f) list_single_pane_t1_cp2_ParamLimits

0xf1f2,	// (0x00011d8f) list_single_pane_t1_cp2

0xa0d0,	// (0x0000cc6d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa0d0,	// (0x0000cc6d) list_single_large_graphic_pane_g1_cp2

0xf20a,	// (0x00011da7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf20a,	// (0x00011da7) list_single_large_graphic_pane_g2_cp2

0xf216,	// (0x00011db3) list_single_large_graphic_pane_g3_cp2

0xa0dc,	// (0x0000cc79) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa0dc,	// (0x0000cc79) list_single_large_graphic_pane_g4_cp1

0xf21e,	// (0x00011dbb) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf21e,	// (0x00011dbb) list_single_large_graphic_pane_t1_cp2

0x18fc,	// (0x00004499) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x18fc,	// (0x00004499) list_single_graphic_heading_pane_g1_cp2

0x18c9,	// (0x00004466) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x18c9,	// (0x00004466) list_single_graphic_heading_pane_g4_cp2

0xf1ea,	// (0x00011d87) list_single_graphic_heading_pane_g5_cp2

0x1908,	// (0x000044a5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1908,	// (0x000044a5) list_single_graphic_heading_pane_t1_cp2

0x191e,	// (0x000044bb) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x191e,	// (0x000044bb) list_single_graphic_heading_pane_t2_cp2

0x18bd,	// (0x0000445a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x18bd,	// (0x0000445a) list_single_2graphic_pane_g1_cp2

0x18c9,	// (0x00004466) list_single_2graphic_pane_g2_cp2_ParamLimits

0x18c9,	// (0x00004466) list_single_2graphic_pane_g2_cp2

0xf1ea,	// (0x00011d87) list_single_2graphic_pane_g3_cp2

0x18da,	// (0x00004477) list_single_2graphic_pane_g4_cp2_ParamLimits

0x18da,	// (0x00004477) list_single_2graphic_pane_g4_cp2

0x18e6,	// (0x00004483) list_single_2graphic_pane_t1_cp2_ParamLimits

0x18e6,	// (0x00004483) list_single_2graphic_pane_t1_cp2

0xe0f3,	// (0x00010c90) list_highlight_pane_g10_cp1

0x14a5,	// (0x00004042) list_highlight_pane_g1_cp1

0x14ad,	// (0x0000404a) list_highlight_pane_g2_cp1

0x14b5,	// (0x00004052) list_highlight_pane_g3_cp1

0x14bd,	// (0x0000405a) list_highlight_pane_g4_cp1

0x14c5,	// (0x00004062) list_highlight_pane_g5_cp1

0x14cd,	// (0x0000406a) list_highlight_pane_g6_cp1

0x14d5,	// (0x00004072) list_highlight_pane_g7_cp1

0x14dd,	// (0x0000407a) list_highlight_pane_g8_cp1

0x14e5,	// (0x00004082) list_highlight_pane_g9_cp1

0xb34a,	// (0x0000dee7) form_field_slider_pane_t3

0xb358,	// (0x0000def5) form_field_slider_pane_t4

0x13e9,	// (0x00003f86) slider_form_pane_ParamLimits

0x13e9,	// (0x00003f86) slider_form_pane

0xe11d,	// (0x00010cba) control_abbreviations

0xe11d,	// (0x00010cba) control_conventions

0xe11d,	// (0x00010cba) control_definitions

0xe11d,	// (0x00010cba) format_table_attribute

0xb594,	// (0x0000e131) bg_popup_preview_window_pane_g9

0xe11d,	// (0x00010cba) format_table_data2

0xe11d,	// (0x00010cba) format_table_data3

0xe11d,	// (0x00010cba) format_table_data_example

0x0008,

0xe11d,	// (0x00010cba) intro_purpose

0xf8aa,	// (0x00012447) bg_popup_preview_window_pane_g

0xe11d,	// (0x00010cba) texts_category

0xe11d,	// (0x00010cba) texts_graphics

0xf234,	// (0x00011dd1) text_digital

0xf243,	// (0x00011de0) text_primary

0xf252,	// (0x00011def) text_primary_small

0xf261,	// (0x00011dfe) text_secondary

0xf270,	// (0x00011e0d) text_title

0xba11,	// (0x0000e5ae) bg_passive_tab_pane_g1_cp3_srt

0xa028,	// (0x0000cbc5) bg_passive_tab_pane_g2_cp3_srt

0xba1a,	// (0x0000e5b7) bg_passive_tab_pane_g3_cp3_srt

0xe18b,	// (0x00010d28) bg_active_tab_pane_cp3_srt_ParamLimits

0xe18b,	// (0x00010d28) bg_active_tab_pane_cp3_srt

0xba23,	// (0x0000e5c0) tabs_4_active_pane_srt_g1

0xba2b,	// (0x0000e5c8) tabs_4_active_pane_srt_t1_ParamLimits

0xba2b,	// (0x0000e5c8) tabs_4_active_pane_srt_t1

0xba11,	// (0x0000e5ae) bg_active_tab_pane_g1_cp3_copy1

0xa028,	// (0x0000cbc5) bg_active_tab_pane_g2_cp3_copy1

0xba1a,	// (0x0000e5b7) bg_active_tab_pane_g3_cp3_copy1

0xe199,	// (0x00010d36) tabs_2_long_active_pane_srt_ParamLimits

0xe199,	// (0x00010d36) tabs_2_long_active_pane_srt

0xe199,	// (0x00010d36) tabs_2_long_passive_pane_srt_ParamLimits

0xe199,	// (0x00010d36) tabs_2_long_passive_pane_srt

0xf42a,	// (0x00011fc7) bg_passive_tab_pane_cp4_srt_ParamLimits

0xf42a,	// (0x00011fc7) bg_passive_tab_pane_cp4_srt

0xb716,	// (0x0000e2b3) bg_passive_tab_pane_g1_cp4_srt

0xa028,	// (0x0000cbc5) bg_passive_tab_pane_g2_cp4_srt

0xb71f,	// (0x0000e2bc) bg_passive_tab_pane_g3_cp4_srt

0xe199,	// (0x00010d36) bg_active_tab_pane_cp4_srt_ParamLimits

0xe199,	// (0x00010d36) bg_active_tab_pane_cp4_srt

0xb728,	// (0x0000e2c5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb728,	// (0x0000e2c5) tabs_2_long_active_pane_srt_t1

0xb716,	// (0x0000e2b3) bg_active_tab_pane_g1_cp4_srt

0xa028,	// (0x0000cbc5) bg_active_tab_pane_g2_cp4_srt

0xb71f,	// (0x0000e2bc) bg_active_tab_pane_g3_cp4_srt

0xe18b,	// (0x00010d28) tabs_3_long_active_pane_srt_ParamLimits

0xe18b,	// (0x00010d28) tabs_3_long_active_pane_srt

0xe18b,	// (0x00010d28) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe18b,	// (0x00010d28) tabs_3_long_passive_pane_cp_srt

0xe18b,	// (0x00010d28) tabs_3_long_passive_pane_srt_ParamLimits

0xe18b,	// (0x00010d28) tabs_3_long_passive_pane_srt

0xf42a,	// (0x00011fc7) bg_passive_tab_pane_cp5_srt_ParamLimits

0xf42a,	// (0x00011fc7) bg_passive_tab_pane_cp5_srt

0xa074,	// (0x0000cc11) bg_passive_tab_pane_g1_cp5_srt

0xa028,	// (0x0000cbc5) bg_passive_tab_pane_g2_cp5_srt

0xa07d,	// (0x0000cc1a) bg_passive_tab_pane_g3_cp5_srt

0xe199,	// (0x00010d36) bg_active_tab_pane_cp5_srt_ParamLimits

0xe199,	// (0x00010d36) bg_active_tab_pane_cp5_srt

0xb700,	// (0x0000e29d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb700,	// (0x0000e29d) tabs_3_long_active_pane_srt_t1

0xa074,	// (0x0000cc11) bg_active_tab_pane_g1_cp5_srt

0xa028,	// (0x0000cbc5) bg_active_tab_pane_g2_cp5_srt

0xa07d,	// (0x0000cc1a) bg_active_tab_pane_g3_cp5_srt

0x217c,	// (0x00004d19) navi_text_pane_srt_t1

0x2174,	// (0x00004d11) navi_icon_pane_srt_g1

0xf404,	// (0x00011fa1) midp_editing_number_pane_srt

0xf27f,	// (0x00011e1c) midp_ticker_pane_srt

0xf40c,	// (0x00011fa9) midp_ticker_pane_srt_g1

0xf414,	// (0x00011fb1) midp_ticker_pane_srt_g2

0x0001,

0xf739,	// (0x000122d6) midp_ticker_pane_srt_g

0xf41c,	// (0x00011fb9) midp_ticker_pane_srt_t1

0x2165,	// (0x00004d02) midp_editing_number_pane_t1_copy1

0xa0f6,	// (0x0000cc93) listscroll_midp_pane

0xa0f6,	// (0x0000cc93) midp_form_pane

0xa161,	// (0x0000ccfe) midp_info_popup_window_ParamLimits

0xa161,	// (0x0000ccfe) midp_info_popup_window

0xe706,	// (0x000112a3) bg_popup_sub_pane_cp50_ParamLimits

0xe706,	// (0x000112a3) bg_popup_sub_pane_cp50

0x10d9,	// (0x00003c76) listscroll_midp_info_pane_ParamLimits

0x10d9,	// (0x00003c76) listscroll_midp_info_pane

0x10b9,	// (0x00003c56) listscroll_form_midp_pane_ParamLimits

0x10b9,	// (0x00003c56) listscroll_form_midp_pane

0x10c5,	// (0x00003c62) scroll_bar_cp050

0x10b9,	// (0x00003c56) list_midp_pane

0xbc11,	// (0x0000e7ae) signal_pane_g2_cp

0x0fd3,	// (0x00003b70) listscroll_midp_info_pane_t1_ParamLimits

0x0fd3,	// (0x00003b70) listscroll_midp_info_pane_t1

0xb184,	// (0x0000dd21) listscroll_midp_info_pane_t2_ParamLimits

0xb184,	// (0x0000dd21) listscroll_midp_info_pane_t2

0xb1c2,	// (0x0000dd5f) listscroll_midp_info_pane_t3_ParamLimits

0xb1c2,	// (0x0000dd5f) listscroll_midp_info_pane_t3

0xb1fc,	// (0x0000dd99) listscroll_midp_info_pane_t4_ParamLimits

0xb1fc,	// (0x0000dd99) listscroll_midp_info_pane_t4

0x0003,

0xf7e5,	// (0x00012382) listscroll_midp_info_pane_t_ParamLimits

0xf7e5,	// (0x00012382) listscroll_midp_info_pane_t

0xe75b,	// (0x000112f8) scroll_pane_cp21

0x0f73,	// (0x00003b10) form_midp_field_choice_group_pane

0xb147,	// (0x0000dce4) form_midp_field_text_pane

0x0fb9,	// (0x00003b56) form_midp_field_time_pane

0x0fc1,	// (0x00003b5e) form_midp_gauge_slider_pane

0x0fca,	// (0x00003b67) form_midp_gauge_wait_pane

0xe11d,	// (0x00010cba) form_midp_image_pane

0xb130,	// (0x0000dccd) list_single_midp_pane_ParamLimits

0xb130,	// (0x0000dccd) list_single_midp_pane

0xb10e,	// (0x0000dcab) form_midp_field_text_pane_t1

0x0c29,	// (0x000037c6) input_focus_pane_cp050

0x0f30,	// (0x00003acd) list_midp_form_text_pane

0x0ec5,	// (0x00003a62) form_midp_field_choice_group_pane_t1

0x0ed3,	// (0x00003a70) input_focus_pane_cp051

0x0ee7,	// (0x00003a84) list_midp_choice_pane

0xe11d,	// (0x00010cba) status_idle_pane

0x0ea9,	// (0x00003a46) form_midp_field_time_pane_t1

0xe0f3,	// (0x00010c90) wait_anim_pane_g2_copy1

0x0eb7,	// (0x00003a54) form_midp_field_time_pane_t2

0x0001,

0xf2df,	// (0x00011e7c) aid_navinavi_width_2_pane

0xf7e0,	// (0x0001237d) form_midp_field_time_pane_t

0xe11d,	// (0x00010cba) input_focus_pane_cp052

0xe11d,	// (0x00010cba) bg_input_focus_pane_cp040

0x0e69,	// (0x00003a06) form_midp_gauge_slider_pane_t1

0x0e77,	// (0x00003a14) form_midp_gauge_slider_pane_t2

0xb0f2,	// (0x0000dc8f) form_midp_gauge_slider_pane_t3

0xb100,	// (0x0000dc9d) form_midp_gauge_slider_pane_t4

0x0003,

0xf7d7,	// (0x00012374) form_midp_gauge_slider_pane_t

0x0ea1,	// (0x00003a3e) form_midp_slider_pane

0xe199,	// (0x00010d36) bg_input_focus_pane_cp041_ParamLimits

0xe199,	// (0x00010d36) bg_input_focus_pane_cp041

0x0e36,	// (0x000039d3) form_midp_gauge_wait_pane_t1_ParamLimits

0x0e36,	// (0x000039d3) form_midp_gauge_wait_pane_t1

0x0e48,	// (0x000039e5) form_midp_gauge_wait_pane_t2_ParamLimits

0x0e48,	// (0x000039e5) form_midp_gauge_wait_pane_t2

0x0001,

0xf7d2,	// (0x0001236f) form_midp_gauge_wait_pane_t_ParamLimits

0xf7d2,	// (0x0001236f) form_midp_gauge_wait_pane_t

0x0e5a,	// (0x000039f7) form_midp_wait_pane_ParamLimits

0x0e5a,	// (0x000039f7) form_midp_wait_pane

0xb0bc,	// (0x0000dc59) form_midp_image_pane_g1

0xb0c5,	// (0x0000dc62) form_midp_image_pane_t1

0xb0d4,	// (0x0000dc71) form_midp_image_pane_t2

0xb0e3,	// (0x0000dc80) form_midp_image_pane_t3

0x0002,

0xf7cb,	// (0x00012368) form_midp_image_pane_t

0x0de8,	// (0x00003985) list_single_midp_pane_g1

0x0df1,	// (0x0000398e) list_single_midp_pane_t1

0xb0a7,	// (0x0000dc44) list_midp_form_item_pane_ParamLimits

0xb0a7,	// (0x0000dc44) list_midp_form_item_pane

0xf287,	// (0x00011e24) list_midp_form_item_pane_t1

0xf296,	// (0x00011e33) midp_ticker_pane_g1

0xf2a2,	// (0x00011e3f) midp_ticker_pane_g2

0x0001,

0xf71f,	// (0x000122bc) midp_ticker_pane_g

0xf2ae,	// (0x00011e4b) midp_ticker_pane_t1

0x245d,	// (0x00004ffa) midp_editing_number_pane_t1

0x243b,	// (0x00004fd8) midp_editing_number_pane

0x244a,	// (0x00004fe7) midp_ticker_pane

0x2143,	// (0x00004ce0) ai_message_heading_pane

0xe11d,	// (0x00010cba) bg_popup_window_pane_cp14

0x214b,	// (0x00004ce8) listscroll_ai_message_pane

0x20cd,	// (0x00004c6a) ai_message_heading_pane_g1_ParamLimits

0x20cd,	// (0x00004c6a) ai_message_heading_pane_g1

0xb6b6,	// (0x0000e253) ai_message_heading_pane_g2_ParamLimits

0xb6b6,	// (0x0000e253) ai_message_heading_pane_g2

0x20e5,	// (0x00004c82) ai_message_heading_pane_g3_ParamLimits

0x20e5,	// (0x00004c82) ai_message_heading_pane_g3

0x20f1,	// (0x00004c8e) ai_message_heading_pane_g4_ParamLimits

0x20f1,	// (0x00004c8e) ai_message_heading_pane_g4

0x0003,

0xf90c,	// (0x000124a9) ai_message_heading_pane_g_ParamLimits

0xf90c,	// (0x000124a9) ai_message_heading_pane_g

0xb6c2,	// (0x0000e25f) ai_message_heading_pane_t1_ParamLimits

0xb6c2,	// (0x0000e25f) ai_message_heading_pane_t1

0xb6dc,	// (0x0000e279) ai_message_heading_pane_t2_ParamLimits

0xb6dc,	// (0x0000e279) ai_message_heading_pane_t2

0x0001,

0xf915,	// (0x000124b2) ai_message_heading_pane_t_ParamLimits

0xf915,	// (0x000124b2) ai_message_heading_pane_t

0x2129,	// (0x00004cc6) bg_popup_heading_pane_cp1_ParamLimits

0x2129,	// (0x00004cc6) bg_popup_heading_pane_cp1

0x20bb,	// (0x00004c58) list_ai_message_pane_ParamLimits

0x20bb,	// (0x00004c58) list_ai_message_pane

0xe75b,	// (0x000112f8) scroll_pane_cp10

0xb65e,	// (0x0000e1fb) list_ai_message_pane_g1

0x200f,	// (0x00004bac) list_ai_message_pane_g2

0x0001,

0xf8e9,	// (0x00012486) list_ai_message_pane_g

0x2017,	// (0x00004bb4) list_ai_message_pane_t1_ParamLimits

0x2017,	// (0x00004bb4) list_ai_message_pane_t1

0x202c,	// (0x00004bc9) list_ai_message_pane_t2_ParamLimits

0x202c,	// (0x00004bc9) list_ai_message_pane_t2

0x2041,	// (0x00004bde) list_ai_message_pane_t3_ParamLimits

0x2041,	// (0x00004bde) list_ai_message_pane_t3

0x2056,	// (0x00004bf3) list_ai_message_pane_t4_ParamLimits

0x2056,	// (0x00004bf3) list_ai_message_pane_t4

0x0003,

0xf8ee,	// (0x0001248b) list_ai_message_pane_t_ParamLimits

0xf8ee,	// (0x0001248b) list_ai_message_pane_t

0xb63a,	// (0x0000e1d7) cell_ai_soft_ind_pane_ParamLimits

0xb63a,	// (0x0000e1d7) cell_ai_soft_ind_pane

0xf2c0,	// (0x00011e5d) cell_ai_soft_ind_pane_g1_ParamLimits

0xf2c0,	// (0x00011e5d) cell_ai_soft_ind_pane_g1

0xe11d,	// (0x00010cba) grid_highlight_cp1

0xf2cd,	// (0x00011e6a) text_secondary_cp56_ParamLimits

0xf2cd,	// (0x00011e6a) text_secondary_cp56

0x1fc7,	// (0x00004b64) example_general_pane_ParamLimits

0x1fc7,	// (0x00004b64) example_general_pane

0x1fd3,	// (0x00004b70) example_parent_pane_g1_ParamLimits

0x1fd3,	// (0x00004b70) example_parent_pane_g1

0x1fdf,	// (0x00004b7c) example_parent_pane_t1_ParamLimits

0x1fdf,	// (0x00004b7c) example_parent_pane_t1

0xa82b,	// (0x0000d3c8) popup_preview_text_window_ParamLimits

0xa82b,	// (0x0000d3c8) popup_preview_text_window

0xf1e2,	// (0x00011d7f) list_single_pane_cp2_g4

0xe385,	// (0x00010f22) bg_popup_preview_window_pane_ParamLimits

0xe385,	// (0x00010f22) bg_popup_preview_window_pane

0xb59c,	// (0x0000e139) popup_preview_text_window_t1_ParamLimits

0xb59c,	// (0x0000e139) popup_preview_text_window_t1

0x1d3f,	// (0x000048dc) popup_preview_text_window_t2_ParamLimits

0x1d3f,	// (0x000048dc) popup_preview_text_window_t2

0x1d88,	// (0x00004925) popup_preview_text_window_t3_ParamLimits

0x1d88,	// (0x00004925) popup_preview_text_window_t3

0x1dcd,	// (0x0000496a) popup_preview_text_window_t4_ParamLimits

0x1dcd,	// (0x0000496a) popup_preview_text_window_t4

0x0004,

0xf8bd,	// (0x0001245a) popup_preview_text_window_t_ParamLimits

0xf8bd,	// (0x0001245a) popup_preview_text_window_t

0x1e4b,	// (0x000049e8) scroll_pane_cp11

0x0a91,	// (0x0000362e) bg_popup_preview_window_pane_g1

0xb55c,	// (0x0000e0f9) bg_popup_preview_window_pane_g2

0xb564,	// (0x0000e101) bg_popup_preview_window_pane_g3

0xb56c,	// (0x0000e109) bg_popup_preview_window_pane_g4

0xb574,	// (0x0000e111) bg_popup_preview_window_pane_g5

0xb57c,	// (0x0000e119) bg_popup_preview_window_pane_g6

0xb584,	// (0x0000e121) bg_popup_preview_window_pane_g7

0xb58c,	// (0x0000e129) bg_popup_preview_window_pane_g8

0xe109,	// (0x00010ca6) aid_popup_width_pane

0xa7a7,	// (0x0000d344) popup_midp_note_alarm_window_ParamLimits

0xa7a7,	// (0x0000d344) popup_midp_note_alarm_window

0xe5af,	// (0x0001114c) data_form_pane_ParamLimits

0x9aee,	// (0x0000c68b) form_field_data_pane_g1

0x9af8,	// (0x0000c695) form_field_data_pane_t1_ParamLimits

0xe5bb,	// (0x00011158) input_focus_pane_ParamLimits

0xe5c9,	// (0x00011166) data_form_wide_pane_ParamLimits

0xe5da,	// (0x00011177) form_field_data_wide_pane_g1

0xe606,	// (0x000111a3) form_field_data_wide_pane_t1_ParamLimits

0xe45d,	// (0x00010ffa) input_focus_pane_cp6_ParamLimits

0x9c6a,	// (0x0000c807) input_popup_find_pane_g1_ParamLimits

0x9c6a,	// (0x0000c807) input_popup_find_pane_g1

0xea0a,	// (0x000115a7) aid_navi_side_left_pane

0xea1f,	// (0x000115bc) aid_navi_side_right_pane

0x15a0,	// (0x0000413d) bg_popup_window_pane_cp30_ParamLimits

0x15a0,	// (0x0000413d) bg_popup_window_pane_cp30

0x161a,	// (0x000041b7) popup_midp_note_alarm_window_g1_ParamLimits

0x161a,	// (0x000041b7) popup_midp_note_alarm_window_g1

0x164a,	// (0x000041e7) popup_midp_note_alarm_window_t1_ParamLimits

0x164a,	// (0x000041e7) popup_midp_note_alarm_window_t1

0xb39d,	// (0x0000df3a) popup_midp_note_alarm_window_t2_ParamLimits

0xb39d,	// (0x0000df3a) popup_midp_note_alarm_window_t2

0xb44b,	// (0x0000dfe8) popup_midp_note_alarm_window_t3_ParamLimits

0xb44b,	// (0x0000dfe8) popup_midp_note_alarm_window_t3

0xb473,	// (0x0000e010) popup_midp_note_alarm_window_t4_ParamLimits

0xb473,	// (0x0000e010) popup_midp_note_alarm_window_t4

0x17e1,	// (0x0000437e) popup_midp_note_alarm_window_t5_ParamLimits

0x17e1,	// (0x0000437e) popup_midp_note_alarm_window_t5

0x000a,

0xf85a,	// (0x000123f7) popup_midp_note_alarm_window_t_ParamLimits

0xf85a,	// (0x000123f7) popup_midp_note_alarm_window_t

0x188d,	// (0x0000442a) wait_bar_pane_cp1_ParamLimits

0x188d,	// (0x0000442a) wait_bar_pane_cp1

0xe11d,	// (0x00010cba) wait_anim_pane_copy1

0xe11d,	// (0x00010cba) wait_border_pane_copy1

0x1296,	// (0x00003e33) wait_border_pane_g1_copy1

0xe620,	// (0x000111bd) form_field_popup_pane_g1

0x9b12,	// (0x0000c6af) form_field_popup_pane_t1_ParamLimits

0xe5bb,	// (0x00011158) input_focus_pane_cp7_ParamLimits

0xe628,	// (0x000111c5) list_form_pane_ParamLimits

0xe634,	// (0x000111d1) form_field_popup_wide_pane_g1

0xe63c,	// (0x000111d9) form_field_popup_wide_pane_t1_ParamLimits

0xe5bb,	// (0x00011158) input_focus_pane_cp8_ParamLimits

0xe651,	// (0x000111ee) list_form_wide_pane_ParamLimits

0x26a1,	// (0x0000523e) aid_size_cell_graphic_pane

0x9b91,	// (0x0000c72e) data_form_pane_t1_ParamLimits

0xb932,	// (0x0000e4cf) data_form_wide_pane_t1_ParamLimits

0xac6e,	// (0x0000d80b) bg_status_flat_pane

0x90e5,	// (0x0000bc82) title_pane_t1_ParamLimits

0xe153,	// (0x00010cf0) title_pane_t2_ParamLimits

0xe179,	// (0x00010d16) title_pane_t3_ParamLimits

0xf532,	// (0x000120cf) title_pane_t_ParamLimits

0xebcd,	// (0x0001176a) level_1_signal_ParamLimits

0xebda,	// (0x00011777) level_2_signal_ParamLimits

0xebe7,	// (0x00011784) level_3_signal_ParamLimits

0xebf4,	// (0x00011791) level_4_signal_ParamLimits

0xec01,	// (0x0001179e) level_5_signal_ParamLimits

0xec0e,	// (0x000117ab) level_6_signal_ParamLimits

0xec1b,	// (0x000117b8) level_7_signal_ParamLimits

0xebcd,	// (0x0001176a) level_1_battery_ParamLimits

0xebda,	// (0x00011777) level_2_battery_ParamLimits

0xebe7,	// (0x00011784) level_3_battery_ParamLimits

0xebf4,	// (0x00011791) level_4_battery_ParamLimits

0xec01,	// (0x0001179e) level_5_battery_ParamLimits

0xec0e,	// (0x000117ab) level_6_battery_ParamLimits

0xec1b,	// (0x000117b8) level_7_battery_ParamLimits

0x14a5,	// (0x00004042) bg_status_flat_pane_g1

0x14ad,	// (0x0000404a) bg_status_flat_pane_g2

0x14b5,	// (0x00004052) bg_status_flat_pane_g3

0x14bd,	// (0x0000405a) bg_status_flat_pane_g4

0x14c5,	// (0x00004062) bg_status_flat_pane_g5

0x14cd,	// (0x0000406a) bg_status_flat_pane_g6

0x14d5,	// (0x00004072) bg_status_flat_pane_g7

0x9179,	// (0x0000bd16) tabs_3_active_pane_t1_ParamLimits

0x9179,	// (0x0000bd16) tabs_3_passive_pane_t1_ParamLimits

0x9193,	// (0x0000bd30) tabs_4_active_pane_t1_ParamLimits

0x9193,	// (0x0000bd30) tabs_4_1_passive_pane_t1_ParamLimits

0x9ca9,	// (0x0000c846) tabs_2_active_pane_t1_ParamLimits

0x9ca9,	// (0x0000c846) tabs_2_passive_pane_t1_ParamLimits

0xe199,	// (0x00010d36) bg_active_tab_pane_cp4_ParamLimits

0x9cbb,	// (0x0000c858) tabs_2_long_active_pane_t1_ParamLimits

0xf42a,	// (0x00011fc7) bg_passive_tab_pane_cp4_ParamLimits

0x0b4e,	// (0x000036eb) list_single_midp_graphic_pane_t1_ParamLimits

0xe199,	// (0x00010d36) bg_active_tab_pane_cp5_ParamLimits

0x9cce,	// (0x0000c86b) tabs_3_long_active_pane_t1_ParamLimits

0xf42a,	// (0x00011fc7) bg_passive_tab_pane_cp5_ParamLimits

0x0b4e,	// (0x000036eb) list_single_midp_graphic_pane_t1

0xac6e,	// (0x0000d80b) bg_status_flat_pane_ParamLimits

0x0674,	// (0x00003211) indicator_pane_cp2_ParamLimits

0x0674,	// (0x00003211) indicator_pane_cp2

0xadec,	// (0x0000d989) navi_pane_srt_ParamLimits

0xadec,	// (0x0000d989) navi_pane_srt

0x07c3,	// (0x00003360) popup_clock_digital_analogue_window_cp1

0xe1f7,	// (0x00010d94) indicator_pane_t1

0xf27f,	// (0x00011e1c) copy_highlight_pane

0xf27f,	// (0x00011e1c) cursor_graphics_pane

0xf27f,	// (0x00011e1c) graphic_within_text_pane

0xf27f,	// (0x00011e1c) link_highlight_pane

0x1e0e,	// (0x000049ab) popup_preview_text_window_t5_ParamLimits

0x1e0e,	// (0x000049ab) popup_preview_text_window_t5

0xf2e7,	// (0x00011e84) cursor_digital_pane

0xf2e7,	// (0x00011e84) cursor_primary_pane

0xf2f8,	// (0x00011e95) cursor_primary_small_pane

0xf300,	// (0x00011e9d) cursor_secondary_pane

0xf308,	// (0x00011ea5) cursor_title_pane

0xf2e7,	// (0x00011e84) link_highlight_digital_pane

0xf2ef,	// (0x00011e8c) link_highlight_primary_pane

0xf2f8,	// (0x00011e95) link_highlight_primary_small_pane

0xf300,	// (0x00011e9d) link_highlight_secondary_pane

0xf308,	// (0x00011ea5) link_highlight_title_pane

0xf2e7,	// (0x00011e84) copy_highlight_digital_pane

0xf2e7,	// (0x00011e84) copy_highlight_primary_pane

0xf2f8,	// (0x00011e95) copy_highlight_primary_small_pane

0xf300,	// (0x00011e9d) copy_highlight_secondary_pane

0xf308,	// (0x00011ea5) copy_highlight_title_pane

0xf300,	// (0x00011e9d) graphic_text_digital_pane

0x1543,	// (0x000040e0) graphic_text_primary_pane

0x154c,	// (0x000040e9) graphic_text_primary_small_pane

0xf2f8,	// (0x00011e95) graphic_text_secondary_pane

0xf2e7,	// (0x00011e84) graphic_text_title_pane

0xa1b2,	// (0x0000cd4f) cursor_primary_pane_g1

0x1535,	// (0x000040d2) cursor_text_primary_t1

0xb393,	// (0x0000df30) cursor_primary_small_pane_g1

0x1527,	// (0x000040c4) cursor_text_primary_small_t1

0xb389,	// (0x0000df26) cursor_primary_small_pane_g1_copy1

0x150f,	// (0x000040ac) cursor_text_primary_small_t1_copy1

0x14ed,	// (0x0000408a) cursor_text_title_t1

0xb37f,	// (0x0000df1c) cursor_title_pane_g1

0xa1b2,	// (0x0000cd4f) cursor_digital_pane_g1

0xf310,	// (0x00011ead) cursor_text_digital_t1

0xf31e,	// (0x00011ebb) link_highlight_primary_pane_g1

0x1496,	// (0x00004033) link_highlight_primary_pane_t1

0xf31e,	// (0x00011ebb) link_highlight_primary_small_pane_g1

0xf326,	// (0x00011ec3) link_highlight_primary_small_pane_t1

0xf31e,	// (0x00011ebb) link_highlight_secondary_pane_g1

0xf335,	// (0x00011ed2) link_highlight_secondary_pane_t1

0x13fb,	// (0x00003f98) link_highlight_title_pane_g1

0x1412,	// (0x00003faf) link_highlight_title_pane_t1

0x13fb,	// (0x00003f98) link_highlight_digital_pane_g1

0x1403,	// (0x00003fa0) link_highlight_digital_pane_t1

0x12b5,	// (0x00003e52) copy_highlight_primary_pane_g1

0x12db,	// (0x00003e78) copy_highlight_primary_pane_t1

0x12b5,	// (0x00003e52) copy_highlight_primary_small_pane_g1

0x12cc,	// (0x00003e69) copy_highlight_primary_small_pane_t1

0xf344,	// (0x00011ee1) copy_highlight_secondary_pane_g1

0xf34c,	// (0x00011ee9) copy_highlight_secondary_pane_t1

0x12b5,	// (0x00003e52) copy_highlight_title_pane_g1

0x12bd,	// (0x00003e5a) copy_highlight_title_pane_t1

0x12b5,	// (0x00003e52) copy_highlight_digital_pane_g1

0x2927,	// (0x000054c4) copy_highlight_digital_pane_t1

0x287b,	// (0x00005418) graphic_text_primary_pane_g1

0x290b,	// (0x000054a8) graphic_text_primary_pane_t1

0x2919,	// (0x000054b6) graphic_text_primary_pane_t2

0x0001,

0xf989,	// (0x00012526) graphic_text_primary_pane_t

0x28e7,	// (0x00005484) graphic_text_primary_small_pane_g1

0x28ef,	// (0x0000548c) graphic_text_primary_small_pane_t1

0x28fd,	// (0x0000549a) graphic_text_primary_small_pane_t2

0x0001,

0xf984,	// (0x00012521) graphic_text_primary_small_pane_t

0x28c3,	// (0x00005460) graphic_text_secondary_pane_g1

0x28cb,	// (0x00005468) graphic_text_secondary_pane_t1

0x28d9,	// (0x00005476) graphic_text_secondary_pane_t2

0x0001,

0xf97f,	// (0x0001251c) graphic_text_secondary_pane_t

0x289f,	// (0x0000543c) graphic_text_title_pane_g1

0x28a7,	// (0x00005444) graphic_text_title_pane_t1

0x28b5,	// (0x00005452) graphic_text_title_pane_t2

0x0001,

0xf97a,	// (0x00012517) graphic_text_title_pane_t

0x287b,	// (0x00005418) graphic_text_digital_pane_g1

0x2883,	// (0x00005420) graphic_text_digital_pane_t1

0x2891,	// (0x0000542e) graphic_text_digital_pane_t2

0x0001,

0xf975,	// (0x00012512) graphic_text_digital_pane_t

0xe199,	// (0x00010d36) navi_icon_pane_srt_ParamLimits

0xe199,	// (0x00010d36) navi_icon_pane_srt

0xe11d,	// (0x00010cba) navi_midp_pane_srt

0xe11d,	// (0x00010cba) navi_navi_pane_srt

0xe199,	// (0x00010d36) navi_text_pane_srt_ParamLimits

0xe199,	// (0x00010d36) navi_text_pane_srt

0x2846,	// (0x000053e3) navi_navi_icon_text_pane_srt

0x284e,	// (0x000053eb) navi_navi_pane_srt_g1_ParamLimits

0x284e,	// (0x000053eb) navi_navi_pane_srt_g1

0x2860,	// (0x000053fd) navi_navi_pane_srt_g2_ParamLimits

0x2860,	// (0x000053fd) navi_navi_pane_srt_g2

0x0001,

0xf970,	// (0x0001250d) navi_navi_pane_srt_g_ParamLimits

0xf970,	// (0x0001250d) navi_navi_pane_srt_g

0x2872,	// (0x0000540f) navi_navi_tabs_pane_srt

0x2846,	// (0x000053e3) navi_navi_text_pane_srt

0x2846,	// (0x000053e3) navi_navi_volume_pane_srt

0x2837,	// (0x000053d4) navi_navi_text_pane_srt_t1

0x2812,	// (0x000053af) navi_navi_volume_pane_srt_g1

0x281a,	// (0x000053b7) volume_small_pane_srt_ParamLimits

0x281a,	// (0x000053b7) volume_small_pane_srt

0xf35b,	// (0x00011ef8) volume_small_pane_srt_g1_ParamLimits

0xf35b,	// (0x00011ef8) volume_small_pane_srt_g1

0xf36b,	// (0x00011f08) volume_small_pane_srt_g2_ParamLimits

0xf36b,	// (0x00011f08) volume_small_pane_srt_g2

0xf37c,	// (0x00011f19) volume_small_pane_srt_g3_ParamLimits

0xf37c,	// (0x00011f19) volume_small_pane_srt_g3

0xf38d,	// (0x00011f2a) volume_small_pane_srt_g4_ParamLimits

0xf38d,	// (0x00011f2a) volume_small_pane_srt_g4

0xf39e,	// (0x00011f3b) volume_small_pane_srt_g5_ParamLimits

0xf39e,	// (0x00011f3b) volume_small_pane_srt_g5

0xf3af,	// (0x00011f4c) volume_small_pane_srt_g6_ParamLimits

0xf3af,	// (0x00011f4c) volume_small_pane_srt_g6

0xf3c0,	// (0x00011f5d) volume_small_pane_srt_g7_ParamLimits

0xf3c0,	// (0x00011f5d) volume_small_pane_srt_g7

0xf3d1,	// (0x00011f6e) volume_small_pane_srt_g8_ParamLimits

0xf3d1,	// (0x00011f6e) volume_small_pane_srt_g8

0xf3e2,	// (0x00011f7f) volume_small_pane_srt_g9_ParamLimits

0xf3e2,	// (0x00011f7f) volume_small_pane_srt_g9

0xf3f3,	// (0x00011f90) volume_small_pane_srt_g10_ParamLimits

0xf3f3,	// (0x00011f90) volume_small_pane_srt_g10

0x0009,

0xf724,	// (0x000122c1) volume_small_pane_srt_g_ParamLimits

0xf724,	// (0x000122c1) volume_small_pane_srt_g

0x947a,	// (0x0000c017) query_popup_data_pane_cp2

0x2800,	// (0x0000539d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2800,	// (0x0000539d) navi_navi_icon_text_pane_srt_t1

0x1543,	// (0x000040e0) navi_tabs_2_long_pane_srt

0x1543,	// (0x000040e0) navi_tabs_2_pane_srt

0x1543,	// (0x000040e0) navi_tabs_3_long_pane_srt

0x1543,	// (0x000040e0) navi_tabs_3_pane_srt

0x1543,	// (0x000040e0) navi_tabs_4_pane_srt

0xbb17,	// (0x0000e6b4) tabs_2_active_pane_srt_ParamLimits

0xbb17,	// (0x0000e6b4) tabs_2_active_pane_srt

0xbb27,	// (0x0000e6c4) tabs_2_passive_pane_srt_ParamLimits

0xbb27,	// (0x0000e6c4) tabs_2_passive_pane_srt

0x0c29,	// (0x000037c6) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0c29,	// (0x000037c6) bg_passive_tab_pane_cp1_srt

0xbae7,	// (0x0000e684) bg_passive_tab_pane_g1_cp1_srt

0xa028,	// (0x0000cbc5) bg_passive_tab_pane_g2_cp1_srt

0xbaf0,	// (0x0000e68d) bg_passive_tab_pane_g3_cp1_srt

0xe18b,	// (0x00010d28) bg_active_tab_pane_cp1_srt_ParamLimits

0xe18b,	// (0x00010d28) bg_active_tab_pane_cp1_srt

0xbaf9,	// (0x0000e696) tabs_2_active_pane_srt_g1

0xbb01,	// (0x0000e69e) tabs_2_active_pane_srt_t1_ParamLimits

0xbb01,	// (0x0000e69e) tabs_2_active_pane_srt_t1

0xbae7,	// (0x0000e684) bg_active_tab_pane_g1_cp1_srt

0xa028,	// (0x0000cbc5) bg_active_tab_pane_g2_cp1_srt

0xbaf0,	// (0x0000e68d) bg_active_tab_pane_g3_cp1_srt

0xbab4,	// (0x0000e651) tabs_3_active_pane_srt_ParamLimits

0xbab4,	// (0x0000e651) tabs_3_active_pane_srt

0xbac5,	// (0x0000e662) tabs_3_passive_pane_cp_srt_ParamLimits

0xbac5,	// (0x0000e662) tabs_3_passive_pane_cp_srt

0xbad6,	// (0x0000e673) tabs_3_passive_pane_srt_ParamLimits

0xbad6,	// (0x0000e673) tabs_3_passive_pane_srt

0x0c29,	// (0x000037c6) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0c29,	// (0x000037c6) bg_passive_tab_pane_cp2_srt

0xa1bc,	// (0x0000cd59) bg_passive_tab_pane_g1_cp2_srt

0xa028,	// (0x0000cbc5) bg_passive_tab_pane_g2_cp2_srt

0xa1c5,	// (0x0000cd62) bg_passive_tab_pane_g3_cp2_srt

0xe18b,	// (0x00010d28) bg_active_tab_pane_cp2_srt_ParamLimits

0xe18b,	// (0x00010d28) bg_active_tab_pane_cp2_srt

0xba96,	// (0x0000e633) tabs_3_active_pane_srt_g1

0xba9e,	// (0x0000e63b) tabs_3_active_pane_srt_t1_ParamLimits

0xba9e,	// (0x0000e63b) tabs_3_active_pane_srt_t1

0xa1bc,	// (0x0000cd59) bg_active_tab_pane_g1_cp2_srt

0xa028,	// (0x0000cbc5) bg_active_tab_pane_g2_cp2_srt

0xa1c5,	// (0x0000cd62) bg_active_tab_pane_g3_cp2_srt

0x2717,	// (0x000052b4) tabs_4_active_pane_srt_ParamLimits

0x2717,	// (0x000052b4) tabs_4_active_pane_srt

0x2729,	// (0x000052c6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2729,	// (0x000052c6) tabs_4_passive_pane_cp2_srt

0xf4af,	// (0x0001204c) aid_size_cell_toolbar

0x2285,	// (0x00004e22) main_idle_act_pane_ParamLimits

0x00d6,	// (0x00002c73) popup_large_graphic_colour_window_ParamLimits

0xaadd,	// (0x0000d67a) popup_toolbar_window_ParamLimits

0xaadd,	// (0x0000d67a) popup_toolbar_window

0x2488,	// (0x00005025) list_single_graphic_2heading_pane_ParamLimits

0x2488,	// (0x00005025) list_single_graphic_2heading_pane

0xea96,	// (0x00011633) aid_size_cell_apps_grid_lsc_pane

0xeaa8,	// (0x00011645) aid_size_cell_apps_grid_prt_pane

0xf42a,	// (0x00011fc7) bg_wml_button_pane_cp1_ParamLimits

0xf42a,	// (0x00011fc7) bg_wml_button_pane_cp1

0xb10e,	// (0x0000dcab) form_midp_field_text_pane_t1_ParamLimits

0x0c29,	// (0x000037c6) input_focus_pane_cp050_ParamLimits

0x0f30,	// (0x00003acd) list_midp_form_text_pane_ParamLimits

0x0ed3,	// (0x00003a70) input_focus_pane_cp051_ParamLimits

0x0ee7,	// (0x00003a84) list_midp_choice_pane_ParamLimits

0xb073,	// (0x0000dc10) list_single_2graphic_pane_cp3_ParamLimits

0xb073,	// (0x0000dc10) list_single_2graphic_pane_cp3

0xb087,	// (0x0000dc24) list_single_midp_graphic_pane_ParamLimits

0xb087,	// (0x0000dc24) list_single_midp_graphic_pane

0x091f,	// (0x000034bc) list_single_graphic_2heading_pane_g1_ParamLimits

0x091f,	// (0x000034bc) list_single_graphic_2heading_pane_g1

0xf179,	// (0x00011d16) list_single_graphic_2heading_pane_g4_ParamLimits

0xf179,	// (0x00011d16) list_single_graphic_2heading_pane_g4

0x092b,	// (0x000034c8) list_single_graphic_2heading_pane_g5_ParamLimits

0x092b,	// (0x000034c8) list_single_graphic_2heading_pane_g5

0x0002,

0xf777,	// (0x00012314) list_single_graphic_2heading_pane_g_ParamLimits

0xf777,	// (0x00012314) list_single_graphic_2heading_pane_g

0x0937,	// (0x000034d4) list_single_graphic_2heading_pane_t1_ParamLimits

0x0937,	// (0x000034d4) list_single_graphic_2heading_pane_t1

0x094b,	// (0x000034e8) list_single_graphic_2heading_pane_t2_ParamLimits

0x094b,	// (0x000034e8) list_single_graphic_2heading_pane_t2

0x0965,	// (0x00003502) list_single_graphic_2heading_pane_t3_ParamLimits

0x0965,	// (0x00003502) list_single_graphic_2heading_pane_t3

0x0002,

0xf77e,	// (0x0001231b) list_single_graphic_2heading_pane_t_ParamLimits

0xf77e,	// (0x0001231b) list_single_graphic_2heading_pane_t

0x097d,	// (0x0000351a) bg_popup_sub_pane_cp2

0x09a7,	// (0x00003544) grid_toobar_pane

0x09e3,	// (0x00003580) cell_toolbar_pane_ParamLimits

0x09e3,	// (0x00003580) cell_toolbar_pane

0x0a35,	// (0x000035d2) cell_toolbar_pane_g1_ParamLimits

0x0a35,	// (0x000035d2) cell_toolbar_pane_g1

0xaf8b,	// (0x0000db28) cell_toolbar_pane_g2_ParamLimits

0xaf8b,	// (0x0000db28) cell_toolbar_pane_g2

0x0001,

0xf785,	// (0x00012322) cell_toolbar_pane_g_ParamLimits

0xf785,	// (0x00012322) cell_toolbar_pane_g

0x0a6b,	// (0x00003608) grid_highlight_pane_cp2_ParamLimits

0x0a6b,	// (0x00003608) grid_highlight_pane_cp2

0x0a85,	// (0x00003622) toolbar_button_pane

0x0a91,	// (0x0000362e) toolbar_button_pane_g1

0x0a99,	// (0x00003636) toolbar_button_pane_g2

0x0aa1,	// (0x0000363e) toolbar_button_pane_g3

0x0aa9,	// (0x00003646) toolbar_button_pane_g4

0x0ab1,	// (0x0000364e) toolbar_button_pane_g5

0x0ab9,	// (0x00003656) toolbar_button_pane_g6

0x0ac1,	// (0x0000365e) toolbar_button_pane_g7

0x0ac9,	// (0x00003666) toolbar_button_pane_g8

0x0ad1,	// (0x0000366e) toolbar_button_pane_g9

0x0009,

0xf78a,	// (0x00012327) toolbar_button_pane_g

0x0ae1,	// (0x0000367e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0ae1,	// (0x0000367e) list_single_2graphic_pane_g1_cp3

0xaf9f,	// (0x0000db3c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaf9f,	// (0x0000db3c) list_single_2graphic_pane_g2_cp3

0xf0d4,	// (0x00011c71) list_single_2graphic_pane_g3_cp3

0x0afe,	// (0x0000369b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0afe,	// (0x0000369b) list_single_2graphic_pane_g4_cp3

0xafb0,	// (0x0000db4d) list_single_2graphic_pane_t1_cp3_ParamLimits

0xafb0,	// (0x0000db4d) list_single_2graphic_pane_t1_cp3

0xed9d,	// (0x0001193a) list_single_midp_graphic_pane_g2_ParamLimits

0xed9d,	// (0x0001193a) list_single_midp_graphic_pane_g2

0xf4b7,	// (0x00012054) aid_zoom_text_primary

0xf4bf,	// (0x0001205c) aid_zoom_text_secondary

0xf476,	// (0x00012013) status_small_pane_g7_ParamLimits

0xf476,	// (0x00012013) status_small_pane_g7

0xa221,	// (0x0000cdbe) status_small_pane_t1_ParamLimits

0x90c1,	// (0x0000bc5e) title_pane_g2

0x0003,

0xf529,	// (0x000120c6) title_pane_g

0x94d4,	// (0x0000c071) aid_size_cell_colour_1_pane_ParamLimits

0x94d4,	// (0x0000c071) aid_size_cell_colour_1_pane

0x94e8,	// (0x0000c085) aid_size_cell_colour_2_pane_ParamLimits

0x94e8,	// (0x0000c085) aid_size_cell_colour_2_pane

0x94fc,	// (0x0000c099) aid_size_cell_colour_3_pane_ParamLimits

0x94fc,	// (0x0000c099) aid_size_cell_colour_3_pane

0x9510,	// (0x0000c0ad) aid_size_cell_colour_4_pane_ParamLimits

0x9510,	// (0x0000c0ad) aid_size_cell_colour_4_pane

0xe912,	// (0x000114af) title_pane_stacon_g1_ParamLimits

0xe912,	// (0x000114af) title_pane_stacon_g1

0x1332,	// (0x00003ecf) popup_note_wait_window_g3_ParamLimits

0x1332,	// (0x00003ecf) popup_note_wait_window_g3

0x13a8,	// (0x00003f45) popup_note_wait_window_t5_ParamLimits

0x13a8,	// (0x00003f45) popup_note_wait_window_t5

0xe11d,	// (0x00010cba) main_feb_china_hwr_fs_writing_pane

0xa491,	// (0x0000d02e) popup_feb_china_hwr_fs_window_ParamLimits

0xa491,	// (0x0000d02e) popup_feb_china_hwr_fs_window

0xafcc,	// (0x0000db69) aid_size_cell_hwr_fs_ParamLimits

0xafcc,	// (0x0000db69) aid_size_cell_hwr_fs

0x0c29,	// (0x000037c6) bg_popup_sub_pane_cp3_ParamLimits

0x0c29,	// (0x000037c6) bg_popup_sub_pane_cp3

0xafe1,	// (0x0000db7e) grid_hwr_fs_pane_ParamLimits

0xafe1,	// (0x0000db7e) grid_hwr_fs_pane

0x0c4d,	// (0x000037ea) linegrid_hwr_fs_pane_ParamLimits

0x0c4d,	// (0x000037ea) linegrid_hwr_fs_pane

0xaff9,	// (0x0000db96) cell_hwr_fs_pane_ParamLimits

0xaff9,	// (0x0000db96) cell_hwr_fs_pane

0x0c7f,	// (0x0000381c) linegrid_hwr_fs_pane_g1_ParamLimits

0x0c7f,	// (0x0000381c) linegrid_hwr_fs_pane_g1

0xb01f,	// (0x0000dbbc) linegrid_hwr_fs_pane_g2_ParamLimits

0xb01f,	// (0x0000dbbc) linegrid_hwr_fs_pane_g2

0x0c9d,	// (0x0000383a) linegrid_hwr_fs_pane_g3_ParamLimits

0x0c9d,	// (0x0000383a) linegrid_hwr_fs_pane_g3

0xb031,	// (0x0000dbce) linegrid_hwr_fs_pane_g4_ParamLimits

0xb031,	// (0x0000dbce) linegrid_hwr_fs_pane_g4

0x0cc3,	// (0x00003860) linegrid_hwr_fs_pane_g5_ParamLimits

0x0cc3,	// (0x00003860) linegrid_hwr_fs_pane_g5

0x0004,

0xf7b0,	// (0x0001234d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7b0,	// (0x0001234d) linegrid_hwr_fs_pane_g

0x0cd9,	// (0x00003876) cell_hwr_fs_pane_g1_ParamLimits

0x0cd9,	// (0x00003876) cell_hwr_fs_pane_g1

0x0859,	// (0x000033f6) cell_hwr_fs_pane_g2_ParamLimits

0x0859,	// (0x000033f6) cell_hwr_fs_pane_g2

0xb04b,	// (0x0000dbe8) cell_hwr_fs_pane_g3_ParamLimits

0xb04b,	// (0x0000dbe8) cell_hwr_fs_pane_g3

0xb058,	// (0x0000dbf5) cell_hwr_fs_pane_g4_ParamLimits

0xb058,	// (0x0000dbf5) cell_hwr_fs_pane_g4

0x0003,

0xf7bb,	// (0x00012358) cell_hwr_fs_pane_g_ParamLimits

0xf7bb,	// (0x00012358) cell_hwr_fs_pane_g

0xb065,	// (0x0000dc02) cell_hwr_fs_pane_t1

0xe11d,	// (0x00010cba) grid_highlight_pane_cp6

0xe11d,	// (0x00010cba) main_idle_act2_pane

0xe742,	// (0x000112df) aid_inside_area_popup_secondary

0xb4b2,	// (0x0000e04f) aid_inside_area_window_primary_ParamLimits

0xb4b2,	// (0x0000e04f) aid_inside_area_window_primary

0xbb3f,	// (0x0000e6dc) ai2_news_ticker_pane

0x293e,	// (0x000054db) aid_size_cell_ai1_link_ParamLimits

0x293e,	// (0x000054db) aid_size_cell_ai1_link

0xbb47,	// (0x0000e6e4) popup_ai2_data_window_ParamLimits

0xbb47,	// (0x0000e6e4) popup_ai2_data_window

0x296e,	// (0x0000550b) popup_ai2_link_window_ParamLimits

0x296e,	// (0x0000550b) popup_ai2_link_window

0x0c29,	// (0x000037c6) bg_popup_sub_pane_cp4_ParamLimits

0x0c29,	// (0x000037c6) bg_popup_sub_pane_cp4

0x2982,	// (0x0000551f) grid_ai2_link_pane_ParamLimits

0x2982,	// (0x0000551f) grid_ai2_link_pane

0x2999,	// (0x00005536) popup_ai2_link_window_g1_ParamLimits

0x2999,	// (0x00005536) popup_ai2_link_window_g1

0x29a5,	// (0x00005542) popup_ai2_link_window_g2_ParamLimits

0x29a5,	// (0x00005542) popup_ai2_link_window_g2

0x0001,

0xf98e,	// (0x0001252b) popup_ai2_link_window_g_ParamLimits

0xf98e,	// (0x0001252b) popup_ai2_link_window_g

0x29b4,	// (0x00005551) ai2_mp_button_pane

0x29bc,	// (0x00005559) ai2_mp_volume_pane

0x0ed3,	// (0x00003a70) bg_popup_sub_pane_cp5_ParamLimits

0x0ed3,	// (0x00003a70) bg_popup_sub_pane_cp5

0x29c4,	// (0x00005561) heading_ai2_gene_pane_ParamLimits

0x29c4,	// (0x00005561) heading_ai2_gene_pane

0x29d0,	// (0x0000556d) list_ai2_gene_pane_ParamLimits

0x29d0,	// (0x0000556d) list_ai2_gene_pane

0x2a18,	// (0x000055b5) cell_ai2_link_pane_ParamLimits

0x2a18,	// (0x000055b5) cell_ai2_link_pane

0x2a2e,	// (0x000055cb) cell_ai2_link_pane_g1

0xe11d,	// (0x00010cba) grid_highlight_pane_cp7

0x2afe,	// (0x0000569b) ai2_mp_volume_pane_g1

0x2b06,	// (0x000056a3) ai2_mp_volume_pane_g2

0x2a73,	// (0x00005610) list_ai2_gene_pane_t1

0x2b0e,	// (0x000056ab) ai2_mp_volume_pane_g3

0x0002,

0xf9a7,	// (0x00012544) ai2_mp_volume_pane_g

0xbb5d,	// (0x0000e6fa) volume_small_pane_cp3

0x2b1f,	// (0x000056bc) aid_size_cell_ai2_button

0x2b27,	// (0x000056c4) grid_ai2_button_pane

0x2b30,	// (0x000056cd) cell_ai2_button_pane_ParamLimits

0x2b30,	// (0x000056cd) cell_ai2_button_pane

0xe0f3,	// (0x00010c90) cell_ai2_button_pane_g1

0xe11d,	// (0x00010cba) grid_highlight_pane_cp8

0x2abe,	// (0x0000565b) ai2_gene_pane_t1_ParamLimits

0x2abe,	// (0x0000565b) ai2_gene_pane_t1

0xa3f3,	// (0x0000cf90) aid_height_parent_landscape

0xb7de,	// (0x0000e37b) aid_height_set_list

0x2285,	// (0x00004e22) aid_size_parent

0x26a1,	// (0x0000523e) aid_size_cell_graphic_pane_ParamLimits

0x29e0,	// (0x0000557d) popup_ai2_data_window_g1_ParamLimits

0x29e0,	// (0x0000557d) popup_ai2_data_window_g1

0x29ec,	// (0x00005589) ai2_news_ticker_pane_g1

0x29f4,	// (0x00005591) ai2_news_ticker_pane_g2

0x0001,

0xf993,	// (0x00012530) ai2_news_ticker_pane_g

0x29fc,	// (0x00005599) ai2_news_ticker_pane_t1

0x2a0a,	// (0x000055a7) ai2_news_ticker_pane_t2

0x0001,

0xf998,	// (0x00012535) ai2_news_ticker_pane_t

0x2a37,	// (0x000055d4) heading_ai2_gene_pane_g1

0x2a3f,	// (0x000055dc) heading_ai2_gene_pane_t1_ParamLimits

0x2a3f,	// (0x000055dc) heading_ai2_gene_pane_t1

0x2a54,	// (0x000055f1) list_highlight_pane_cp6

0x2a5c,	// (0x000055f9) ai2_gene_pane_ParamLimits

0x2a5c,	// (0x000055f9) ai2_gene_pane

0x2a81,	// (0x0000561e) list_ai2_gene_pane_t2

0x0001,

0xf99d,	// (0x0001253a) list_ai2_gene_pane_t

0x2a8f,	// (0x0000562c) list_highlight_pane_cp8_ParamLimits

0x2a8f,	// (0x0000562c) list_highlight_pane_cp8

0x2aa0,	// (0x0000563d) ai2_gene_pane_g1_ParamLimits

0x2aa0,	// (0x0000563d) ai2_gene_pane_g1

0x2ab2,	// (0x0000564f) ai2_gene_pane_g2_ParamLimits

0x2ab2,	// (0x0000564f) ai2_gene_pane_g2

0x0001,

0xf9a2,	// (0x0001253f) ai2_gene_pane_g_ParamLimits

0xf9a2,	// (0x0001253f) ai2_gene_pane_g

0xe508,	// (0x000110a5) scroll_pane_cp12

0xa3b0,	// (0x0000cf4d) control_pane_t3_ParamLimits

0xa3b0,	// (0x0000cf4d) control_pane_t3

0xa212,	// (0x0000cdaf) status_small_pane_g8_ParamLimits

0xa212,	// (0x0000cdaf) status_small_pane_g8

0xa554,	// (0x0000d0f1) popup_find_window_ParamLimits

0xa7e1,	// (0x0000d37e) popup_note_image_window_ParamLimits

0x0a13,	// (0x000035b0) list_double2_graphic_pane_vc_g1_ParamLimits

0x0a13,	// (0x000035b0) list_double2_graphic_pane_vc_g1

0xf179,	// (0x00011d16) list_double2_graphic_pane_vc_g2_ParamLimits

0xf179,	// (0x00011d16) list_double2_graphic_pane_vc_g2

0x092b,	// (0x000034c8) list_double2_graphic_pane_vc_g3_ParamLimits

0x092b,	// (0x000034c8) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x00012139) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x00012139) list_double2_graphic_pane_vc_g

0x0a1f,	// (0x000035bc) list_double2_graphic_pane_vc_t1_ParamLimits

0x0a1f,	// (0x000035bc) list_double2_graphic_pane_vc_t1

0xf179,	// (0x00011d16) list_single_heading_pane_vc_g1_ParamLimits

0xf179,	// (0x00011d16) list_single_heading_pane_vc_g1

0x092b,	// (0x000034c8) list_single_heading_pane_vc_g2_ParamLimits

0x092b,	// (0x000034c8) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00012140) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00012140) list_single_heading_pane_vc_g

0x0b26,	// (0x000036c3) list_single_heading_pane_vc_t1_ParamLimits

0x0b26,	// (0x000036c3) list_single_heading_pane_vc_t1

0x0b3c,	// (0x000036d9) list_single_heading_pane_vc_t2_ParamLimits

0x0b3c,	// (0x000036d9) list_single_heading_pane_vc_t2

0x0001,

0xf79f,	// (0x0001233c) list_single_heading_pane_vc_t_ParamLimits

0xf79f,	// (0x0001233c) list_single_heading_pane_vc_t

0x0b64,	// (0x00003701) list_setting_number_pane_vc_g1_ParamLimits

0x0b64,	// (0x00003701) list_setting_number_pane_vc_g1

0x0b70,	// (0x0000370d) list_setting_number_pane_vc_g2_ParamLimits

0x0b70,	// (0x0000370d) list_setting_number_pane_vc_g2

0x0001,

0xf7a4,	// (0x00012341) list_setting_number_pane_vc_g_ParamLimits

0xf7a4,	// (0x00012341) list_setting_number_pane_vc_g

0x0b7c,	// (0x00003719) list_setting_number_pane_vc_t1_ParamLimits

0x0b7c,	// (0x00003719) list_setting_number_pane_vc_t1

0x0b90,	// (0x0000372d) list_setting_number_pane_vc_t2_ParamLimits

0x0b90,	// (0x0000372d) list_setting_number_pane_vc_t2

0x0bac,	// (0x00003749) list_setting_number_pane_vc_t3_ParamLimits

0x0bac,	// (0x00003749) list_setting_number_pane_vc_t3

0x0002,

0xf7a9,	// (0x00012346) list_setting_number_pane_vc_t_ParamLimits

0xf7a9,	// (0x00012346) list_setting_number_pane_vc_t

0x0bd8,	// (0x00003775) set_value_pane_vc_ParamLimits

0x0bd8,	// (0x00003775) set_value_pane_vc

0x2488,	// (0x00005025) list_double2_graphic_pane_vc_ParamLimits

0x2488,	// (0x00005025) list_double2_graphic_pane_vc

0x249b,	// (0x00005038) list_double2_large_graphic_pane_vc_ParamLimits

0x249b,	// (0x00005038) list_double2_large_graphic_pane_vc

0x2488,	// (0x00005025) list_double2_pane_vc_ParamLimits

0x2488,	// (0x00005025) list_double2_pane_vc

0x2488,	// (0x00005025) list_double_graphic_heading_pane_vc_ParamLimits

0x2488,	// (0x00005025) list_double_graphic_heading_pane_vc

0x2488,	// (0x00005025) list_double_graphic_pane_vc_ParamLimits

0x2488,	// (0x00005025) list_double_graphic_pane_vc

0x2488,	// (0x00005025) list_double_heading_pane_vc_ParamLimits

0x2488,	// (0x00005025) list_double_heading_pane_vc

0x24ad,	// (0x0000504a) list_double_large_graphic_pane_vc_ParamLimits

0x24ad,	// (0x0000504a) list_double_large_graphic_pane_vc

0x2488,	// (0x00005025) list_double_number_pane_vc_ParamLimits

0x2488,	// (0x00005025) list_double_number_pane_vc

0x2488,	// (0x00005025) list_double_pane_vc_ParamLimits

0x2488,	// (0x00005025) list_double_pane_vc

0x2488,	// (0x00005025) list_double_time_pane_vc_ParamLimits

0x2488,	// (0x00005025) list_double_time_pane_vc

0x2488,	// (0x00005025) list_setting_number_pane_vc_ParamLimits

0x2488,	// (0x00005025) list_setting_number_pane_vc

0x2488,	// (0x00005025) list_setting_pane_vc_ParamLimits

0x2488,	// (0x00005025) list_setting_pane_vc

0x2488,	// (0x00005025) list_single_graphic_heading_pane_vc_ParamLimits

0x2488,	// (0x00005025) list_single_graphic_heading_pane_vc

0x2488,	// (0x00005025) list_single_heading_pane_vc_ParamLimits

0x2488,	// (0x00005025) list_single_heading_pane_vc

0x2488,	// (0x00005025) list_single_number_heading_pane_vc_ParamLimits

0x2488,	// (0x00005025) list_single_number_heading_pane_vc

0x2b64,	// (0x00005701) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2b64,	// (0x00005701) list_double_graphic_heading_pane_vc_g1

0xf179,	// (0x00011d16) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf179,	// (0x00011d16) list_double_graphic_heading_pane_vc_g2

0x092b,	// (0x000034c8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x092b,	// (0x000034c8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ae,	// (0x0001254b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ae,	// (0x0001254b) list_double_graphic_heading_pane_vc_g

0x2b70,	// (0x0000570d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2b70,	// (0x0000570d) list_double_graphic_heading_pane_vc_t1

0x2b84,	// (0x00005721) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2b84,	// (0x00005721) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9b5,	// (0x00012552) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9b5,	// (0x00012552) list_double_graphic_heading_pane_vc_t

0x0b64,	// (0x00003701) list_setting_pane_vc_g1_ParamLimits

0x0b64,	// (0x00003701) list_setting_pane_vc_g1

0x0b70,	// (0x0000370d) list_setting_pane_vc_g2_ParamLimits

0x0b70,	// (0x0000370d) list_setting_pane_vc_g2

0x0001,

0xf7a4,	// (0x00012341) list_setting_pane_vc_g_ParamLimits

0xf7a4,	// (0x00012341) list_setting_pane_vc_g

0x2df2,	// (0x0000598f) list_setting_pane_vc_t1_ParamLimits

0x2df2,	// (0x0000598f) list_setting_pane_vc_t1

0x2e0e,	// (0x000059ab) list_setting_pane_vc_t2_ParamLimits

0x2e0e,	// (0x000059ab) list_setting_pane_vc_t2

0x0001,

0xf9f8,	// (0x00012595) list_setting_pane_vc_t_ParamLimits

0xf9f8,	// (0x00012595) list_setting_pane_vc_t

0x0bd8,	// (0x00003775) set_value_pane_cp_vc_ParamLimits

0x0bd8,	// (0x00003775) set_value_pane_cp_vc

0xf179,	// (0x00011d16) list_single_number_heading_pane_vc_g1_ParamLimits

0xf179,	// (0x00011d16) list_single_number_heading_pane_vc_g1

0x092b,	// (0x000034c8) list_single_number_heading_pane_vc_g2_ParamLimits

0x092b,	// (0x000034c8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00012140) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00012140) list_single_number_heading_pane_vc_g

0x2e28,	// (0x000059c5) list_single_number_heading_pane_vc_t1_ParamLimits

0x2e28,	// (0x000059c5) list_single_number_heading_pane_vc_t1

0x2e3e,	// (0x000059db) list_single_number_heading_pane_vc_t2_ParamLimits

0x2e3e,	// (0x000059db) list_single_number_heading_pane_vc_t2

0x2e54,	// (0x000059f1) list_single_number_heading_pane_vc_t3_ParamLimits

0x2e54,	// (0x000059f1) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fd,	// (0x0001259a) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fd,	// (0x0001259a) list_single_number_heading_pane_vc_t

0x2e66,	// (0x00005a03) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2e66,	// (0x00005a03) list_single_graphic_heading_pane_vc_g1

0xf179,	// (0x00011d16) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xf179,	// (0x00011d16) list_single_graphic_heading_pane_vc_g4

0x092b,	// (0x000034c8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x092b,	// (0x000034c8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x000125a1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x000125a1) list_single_graphic_heading_pane_vc_g

0x2e28,	// (0x000059c5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x2e28,	// (0x000059c5) list_single_graphic_heading_pane_vc_t1

0x2e72,	// (0x00005a0f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2e72,	// (0x00005a0f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x000125a8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x000125a8) list_single_graphic_heading_pane_vc_t

0xf179,	// (0x00011d16) list_double2_pane_vc_g1_ParamLimits

0xf179,	// (0x00011d16) list_double2_pane_vc_g1

0x092b,	// (0x000034c8) list_double2_pane_vc_g2_ParamLimits

0x092b,	// (0x000034c8) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00012140) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00012140) list_double2_pane_vc_g

0x2e84,	// (0x00005a21) list_double2_pane_vc_t1_ParamLimits

0x2e84,	// (0x00005a21) list_double2_pane_vc_t1

0x2e9c,	// (0x00005a39) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2e9c,	// (0x00005a39) list_double2_large_graphic_pane_vc_g1

0x2ea8,	// (0x00005a45) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2ea8,	// (0x00005a45) list_double2_large_graphic_pane_vc_g2

0x2eb4,	// (0x00005a51) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2eb4,	// (0x00005a51) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0001215d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0001215d) list_double2_large_graphic_pane_vc_g

0x2ec0,	// (0x00005a5d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2ec0,	// (0x00005a5d) list_double2_large_graphic_pane_vc_t1

0x2ed6,	// (0x00005a73) list_double_time_pane_vc_g1_ParamLimits

0x2ed6,	// (0x00005a73) list_double_time_pane_vc_g1

0x2ee2,	// (0x00005a7f) list_double_time_pane_vc_g2_ParamLimits

0x2ee2,	// (0x00005a7f) list_double_time_pane_vc_g2

0x0001,

0xfa10,	// (0x000125ad) list_double_time_pane_vc_g_ParamLimits

0xfa10,	// (0x000125ad) list_double_time_pane_vc_g

0x2eee,	// (0x00005a8b) list_double_time_pane_vc_t1_ParamLimits

0x2eee,	// (0x00005a8b) list_double_time_pane_vc_t1

0x2f12,	// (0x00005aaf) list_double_time_pane_vc_t2_ParamLimits

0x2f12,	// (0x00005aaf) list_double_time_pane_vc_t2

0x2f41,	// (0x00005ade) list_double_time_pane_vc_t3_ParamLimits

0x2f41,	// (0x00005ade) list_double_time_pane_vc_t3

0x2f53,	// (0x00005af0) list_double_time_pane_vc_t4_ParamLimits

0x2f53,	// (0x00005af0) list_double_time_pane_vc_t4

0x0003,

0xfa15,	// (0x000125b2) list_double_time_pane_vc_t_ParamLimits

0xfa15,	// (0x000125b2) list_double_time_pane_vc_t

0xf179,	// (0x00011d16) list_double_pane_vc_g1_ParamLimits

0xf179,	// (0x00011d16) list_double_pane_vc_g1

0x092b,	// (0x000034c8) list_double_pane_vc_g2_ParamLimits

0x092b,	// (0x000034c8) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00012140) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00012140) list_double_pane_vc_g

0x2f67,	// (0x00005b04) list_double_pane_vc_t1_ParamLimits

0x2f67,	// (0x00005b04) list_double_pane_vc_t1

0x2f7b,	// (0x00005b18) list_double_pane_vc_t2_ParamLimits

0x2f7b,	// (0x00005b18) list_double_pane_vc_t2

0x0001,

0xfa1e,	// (0x000125bb) list_double_pane_vc_t_ParamLimits

0xfa1e,	// (0x000125bb) list_double_pane_vc_t

0xf179,	// (0x00011d16) list_double_number_pane_vc_g1_ParamLimits

0xf179,	// (0x00011d16) list_double_number_pane_vc_g1

0x092b,	// (0x000034c8) list_double_number_pane_vc_g2_ParamLimits

0x092b,	// (0x000034c8) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00012140) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00012140) list_double_number_pane_vc_g

0x2f93,	// (0x00005b30) list_double_number_pane_vc_t1_ParamLimits

0x2f93,	// (0x00005b30) list_double_number_pane_vc_t1

0x2f67,	// (0x00005b04) list_double_number_pane_vc_t2_ParamLimits

0x2f67,	// (0x00005b04) list_double_number_pane_vc_t2

0x2fa5,	// (0x00005b42) list_double_number_pane_vc_t3_ParamLimits

0x2fa5,	// (0x00005b42) list_double_number_pane_vc_t3

0x0002,

0xfa23,	// (0x000125c0) list_double_number_pane_vc_t_ParamLimits

0xfa23,	// (0x000125c0) list_double_number_pane_vc_t

0x2fbd,	// (0x00005b5a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2fbd,	// (0x00005b5a) list_double_large_graphic_pane_vc_g1

0x2fd9,	// (0x00005b76) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2fd9,	// (0x00005b76) list_double_large_graphic_pane_vc_g2

0x2fed,	// (0x00005b8a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2fed,	// (0x00005b8a) list_double_large_graphic_pane_vc_g3

0x2ffc,	// (0x00005b99) list_double_large_graphic_pane_vc_g4_ParamLimits

0x2ffc,	// (0x00005b99) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2a,	// (0x000125c7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2a,	// (0x000125c7) list_double_large_graphic_pane_vc_g

0x300b,	// (0x00005ba8) list_double_large_graphic_pane_vc_t1_ParamLimits

0x300b,	// (0x00005ba8) list_double_large_graphic_pane_vc_t1

0x3027,	// (0x00005bc4) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3027,	// (0x00005bc4) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x000125d0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa33,	// (0x000125d0) list_double_large_graphic_pane_vc_t

0xf179,	// (0x00011d16) list_double_heading_pane_vc_g1_ParamLimits

0xf179,	// (0x00011d16) list_double_heading_pane_vc_g1

0x092b,	// (0x000034c8) list_double_heading_pane_vc_g2_ParamLimits

0x092b,	// (0x000034c8) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00012140) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00012140) list_double_heading_pane_vc_g

0x3049,	// (0x00005be6) list_double_heading_pane_vc_t1_ParamLimits

0x3049,	// (0x00005be6) list_double_heading_pane_vc_t1

0x305d,	// (0x00005bfa) list_double_heading_pane_vc_t2_ParamLimits

0x305d,	// (0x00005bfa) list_double_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x000125d5) list_double_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x000125d5) list_double_heading_pane_vc_t

0x3075,	// (0x00005c12) list_double_graphic_pane_vc_g1_ParamLimits

0x3075,	// (0x00005c12) list_double_graphic_pane_vc_g1

0x3088,	// (0x00005c25) list_double_graphic_pane_vc_g2_ParamLimits

0x3088,	// (0x00005c25) list_double_graphic_pane_vc_g2

0xf179,	// (0x00011d16) list_double_graphic_pane_vc_g3_ParamLimits

0xf179,	// (0x00011d16) list_double_graphic_pane_vc_g3

0x0003,

0xfa3d,	// (0x000125da) list_double_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x000125da) list_double_graphic_pane_vc_g

0x30a5,	// (0x00005c42) list_double_graphic_pane_vc_t1_ParamLimits

0x30a5,	// (0x00005c42) list_double_graphic_pane_vc_t1

0x30c4,	// (0x00005c61) list_double_graphic_pane_vc_t2_ParamLimits

0x30c4,	// (0x00005c61) list_double_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x000125e3) list_double_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x000125e3) list_double_graphic_pane_vc_t

0xe115,	// (0x00010cb2) aid_size_cell_fastswap

0x8d39,	// (0x0000b8d6) aid_size_cell_touch_ParamLimits

0x8d39,	// (0x0000b8d6) aid_size_cell_touch

0xe127,	// (0x00010cc4) popup_fast_swap_wide_window_ParamLimits

0xe127,	// (0x00010cc4) popup_fast_swap_wide_window

0x9058,	// (0x0000bbf5) touch_pane_ParamLimits

0x9058,	// (0x0000bbf5) touch_pane

0xe584,	// (0x00011121) button_value_adjust_pane_cp2

0xe58c,	// (0x00011129) button_value_adjust_pane_cp4

0xe594,	// (0x00011131) form_field_data_pane_cp2

0x9a9a,	// (0x0000c637) form_field_data_wide_pane_cp2

0xead7,	// (0x00011674) bg_scroll_pane_ParamLimits

0x9dd0,	// (0x0000c96d) scroll_handle_pane_ParamLimits

0xeaf6,	// (0x00011693) scroll_sc2_down_pane_ParamLimits

0xeaf6,	// (0x00011693) scroll_sc2_down_pane

0xeb1d,	// (0x000116ba) scroll_sc2_up_pane_ParamLimits

0xeb1d,	// (0x000116ba) scroll_sc2_up_pane

0xbc99,	// (0x0000e836) grid_wheel_folder_pane_g1_ParamLimits

0xbc99,	// (0x0000e836) grid_wheel_folder_pane_g1

0xef78,	// (0x00011b15) clock_nsta_pane_cp2_ParamLimits

0xef78,	// (0x00011b15) clock_nsta_pane_cp2

0xa0f6,	// (0x0000cc93) listscroll_midp_pane_ParamLimits

0xa102,	// (0x0000cc9f) midp_canvas_pane

0xf4a7,	// (0x00012044) nsta_clock_indic_pane

0xf4e7,	// (0x00012084) listscroll_form_pane_vc

0xf4f7,	// (0x00012094) listscroll_set_pane_vc_ParamLimits

0xf4f7,	// (0x00012094) listscroll_set_pane_vc

0xac96,	// (0x0000d833) clock_nsta_pane

0xacc0,	// (0x0000d85d) indicator_nsta_pane

0x097d,	// (0x0000351a) bg_popup_sub_pane_cp2_ParamLimits

0x0991,	// (0x0000352e) find_pane_cp2_ParamLimits

0x0991,	// (0x0000352e) find_pane_cp2

0x09a7,	// (0x00003544) grid_toobar_pane_ParamLimits

0x0be8,	// (0x00003785) list_form_gen_pane_vc_ParamLimits

0x0be8,	// (0x00003785) list_form_gen_pane_vc

0x0bfe,	// (0x0000379b) scroll_pane_cp8_vc_ParamLimits

0x0bfe,	// (0x0000379b) scroll_pane_cp8_vc

0x0d17,	// (0x000038b4) data_form_wide_pane_vc_ParamLimits

0x0d17,	// (0x000038b4) data_form_wide_pane_vc

0x0d23,	// (0x000038c0) form_field_data_wide_pane_vc_g1

0x0d2b,	// (0x000038c8) form_field_data_wide_pane_vc_t1_ParamLimits

0x0d2b,	// (0x000038c8) form_field_data_wide_pane_vc_t1

0xe5bb,	// (0x00011158) input_focus_pane_cp6_vc_ParamLimits

0xe5bb,	// (0x00011158) input_focus_pane_cp6_vc

0x10b9,	// (0x00003c56) list_midp_pane_ParamLimits

0x270b,	// (0x000052a8) scroll_pane_cp16_ParamLimits

0x270b,	// (0x000052a8) scroll_pane_cp16

0x110f,	// (0x00003cac) button_value_adjust_pane_ParamLimits

0x110f,	// (0x00003cac) button_value_adjust_pane

0xb7ef,	// (0x0000e38c) button_value_adjust_pane_cp6_ParamLimits

0xb7ef,	// (0x0000e38c) button_value_adjust_pane_cp6

0xb909,	// (0x0000e4a6) settings_code_pane_cp_ParamLimits

0xb909,	// (0x0000e4a6) settings_code_pane_cp

0xe0f3,	// (0x00010c90) cell_touch_pane_g1

0xe0f3,	// (0x00010c90) cell_touch_pane_g2

0x0001,

0xf6ca,	// (0x00012267) cell_touch_pane_g

0xbb66,	// (0x0000e703) cell_touch_pane_cp_ParamLimits

0xbb66,	// (0x0000e703) cell_touch_pane_cp

0xbb82,	// (0x0000e71f) cell_touch_pane_ParamLimits

0xbb82,	// (0x0000e71f) cell_touch_pane

0xe0f3,	// (0x00010c90) scroll_sc2_down_pane_g1

0xe0f3,	// (0x00010c90) scroll_sc2_up_pane_g1

0xe11d,	// (0x00010cba) bg_set_opt_pane_cp4_vc

0x2b9c,	// (0x00005739) list_set_graphic_pane_vc_g1_ParamLimits

0x2b9c,	// (0x00005739) list_set_graphic_pane_vc_g1

0x2ba8,	// (0x00005745) list_set_graphic_pane_vc_g2_ParamLimits

0x2ba8,	// (0x00005745) list_set_graphic_pane_vc_g2

0x0001,

0xf9ba,	// (0x00012557) list_set_graphic_pane_vc_g_ParamLimits

0xf9ba,	// (0x00012557) list_set_graphic_pane_vc_g

0x2bb4,	// (0x00005751) text_primary_small_cp13_vc_ParamLimits

0x2bb4,	// (0x00005751) text_primary_small_cp13_vc

0x2bcc,	// (0x00005769) list_set_graphic_pane_vc_ParamLimits

0x2bcc,	// (0x00005769) list_set_graphic_pane_vc

0xe11d,	// (0x00010cba) input_focus_pane_cp2_vc

0xe0f3,	// (0x00010c90) setting_code_pane_vc_g1

0xe1b0,	// (0x00010d4d) setting_code_pane_vc_t1

0x2bdf,	// (0x0000577c) set_text_pane_vc_t1_ParamLimits

0x2bdf,	// (0x0000577c) set_text_pane_vc_t1

0xe11d,	// (0x00010cba) input_focus_pane_cp1_vc

0x2bfc,	// (0x00005799) list_set_text_pane_vc

0xe0f3,	// (0x00010c90) setting_text_pane_vc_g1

0xe11d,	// (0x00010cba) bg_set_opt_pane_cp2_vc

0xe1a7,	// (0x00010d44) setting_slider_graphic_pane_vc_g1

0x2c06,	// (0x000057a3) setting_slider_graphic_pane_vc_t1

0x2c16,	// (0x000057b3) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9bf,	// (0x0001255c) setting_slider_graphic_pane_vc_t

0x2c26,	// (0x000057c3) slider_set_pane_cp_vc

0x2c2e,	// (0x000057cb) slider_set_pane_vc_g1

0x2c37,	// (0x000057d4) slider_set_pane_vc_g2

0x0006,

0xf9c4,	// (0x00012561) slider_set_pane_vc_g

0xe681,	// (0x0001121e) set_opt_bg_pane_g1_copy1

0xe689,	// (0x00011226) set_opt_bg_pane_g2_copy1

0x2c63,	// (0x00005800) set_opt_bg_pane_g3_copy1

0xe699,	// (0x00011236) set_opt_bg_pane_g4_copy1

0xe6a1,	// (0x0001123e) set_opt_bg_pane_g5_copy1

0xe6a9,	// (0x00011246) set_opt_bg_pane_g6_copy1

0x2c6b,	// (0x00005808) set_opt_bg_pane_g7_copy1

0x2c75,	// (0x00005812) set_opt_bg_pane_g8_copy1

0x2c7d,	// (0x0000581a) set_opt_bg_pane_g9_copy1

0xe11d,	// (0x00010cba) bg_set_opt_pane_cp_vc

0x2c85,	// (0x00005822) setting_slider_pane_vc_t1

0x2c94,	// (0x00005831) setting_slider_pane_vc_t2

0x2ca4,	// (0x00005841) setting_slider_pane_vc_t3

0x0002,

0xf9d3,	// (0x00012570) setting_slider_pane_vc_t

0x2cb4,	// (0x00005851) slider_set_pane_vc

0x1930,	// (0x000044cd) volume_set_pane_vc_g1

0x2cbc,	// (0x00005859) volume_set_pane_vc_g2

0x2cc5,	// (0x00005862) volume_set_pane_vc_g3

0x2cce,	// (0x0000586b) volume_set_pane_vc_g4

0x2cd7,	// (0x00005874) volume_set_pane_vc_g5

0x2ce0,	// (0x0000587d) volume_set_pane_vc_g6

0x2ce9,	// (0x00005886) volume_set_pane_vc_g7

0x2cf2,	// (0x0000588f) volume_set_pane_vc_g8

0x2cfb,	// (0x00005898) volume_set_pane_vc_g9

0x2d04,	// (0x000058a1) volume_set_pane_vc_g10

0x0009,

0xf9da,	// (0x00012577) volume_set_pane_vc_g

0x2d0d,	// (0x000058aa) volume_set_pane_vc

0x2d17,	// (0x000058b4) button_value_adjust_pane_cp1_vc

0x2d21,	// (0x000058be) list_highlight_pane_cp2_vc

0x2d2a,	// (0x000058c7) list_set_pane_vc_ParamLimits

0x2d2a,	// (0x000058c7) list_set_pane_vc

0x2d88,	// (0x00005925) main_pane_set_vc_t1_ParamLimits

0x2d88,	// (0x00005925) main_pane_set_vc_t1

0x2d9d,	// (0x0000593a) main_pane_set_vc_t2_ParamLimits

0x2d9d,	// (0x0000593a) main_pane_set_vc_t2

0x2daf,	// (0x0000594c) main_pane_set_vc_t3_ParamLimits

0x2daf,	// (0x0000594c) main_pane_set_vc_t3

0x2dc1,	// (0x0000595e) main_pane_set_vc_t4_ParamLimits

0x2dc1,	// (0x0000595e) main_pane_set_vc_t4

0x0003,

0xf9ef,	// (0x0001258c) main_pane_set_vc_t_ParamLimits

0xf9ef,	// (0x0001258c) main_pane_set_vc_t

0x2dd3,	// (0x00005970) setting_code_pane_vc_ParamLimits

0x2dd3,	// (0x00005970) setting_code_pane_vc

0x2de2,	// (0x0000597f) setting_slider_graphic_pane_vc

0x2de2,	// (0x0000597f) setting_slider_pane_vc

0x2de2,	// (0x0000597f) setting_text_pane_vc

0x2de2,	// (0x0000597f) setting_volume_pane_vc

0x2dea,	// (0x00005987) scroll_pane_cp121_vc

0xe572,	// (0x0001110f) set_content_pane_vc

0x30ee,	// (0x00005c8b) button_value_adjust_pane_g1

0x30f7,	// (0x00005c94) button_value_adjust_pane_g2

0x0001,

0xfa4b,	// (0x000125e8) button_value_adjust_pane_g

0x3100,	// (0x00005c9d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3100,	// (0x00005c9d) form_field_slider_wide_pane_vc_t1

0x3114,	// (0x00005cb1) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3114,	// (0x00005cb1) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa50,	// (0x000125ed) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa50,	// (0x000125ed) form_field_slider_wide_pane_vc_t

0xe18b,	// (0x00010d28) input_focus_pane_cp10_vc_ParamLimits

0xe18b,	// (0x00010d28) input_focus_pane_cp10_vc

0x3142,	// (0x00005cdf) slider_cont_pane_cp1_vc_ParamLimits

0x3142,	// (0x00005cdf) slider_cont_pane_cp1_vc

0x3154,	// (0x00005cf1) slider_form_pane_g1_cp2

0x2c37,	// (0x000057d4) slider_form_pane_g2_cp2

0x3181,	// (0x00005d1e) form_field_slider_pane_vc_t3

0x318f,	// (0x00005d2c) form_field_slider_pane_vc_t4

0x319d,	// (0x00005d3a) slider_form_pane_vc_ParamLimits

0x319d,	// (0x00005d3a) slider_form_pane_vc

0x31aa,	// (0x00005d47) form_field_slider_pane_vc_t1_ParamLimits

0x31aa,	// (0x00005d47) form_field_slider_pane_vc_t1

0x3114,	// (0x00005cb1) form_field_slider_pane_vc_t2_ParamLimits

0x3114,	// (0x00005cb1) form_field_slider_pane_vc_t2

0x0001,

0xfa62,	// (0x000125ff) form_field_slider_pane_vc_t_ParamLimits

0xfa62,	// (0x000125ff) form_field_slider_pane_vc_t

0xe18b,	// (0x00010d28) input_focus_pane_cp9_vc_ParamLimits

0xe18b,	// (0x00010d28) input_focus_pane_cp9_vc

0x31c6,	// (0x00005d63) slider_cont_pane_vc_ParamLimits

0x31c6,	// (0x00005d63) slider_cont_pane_vc

0x31da,	// (0x00005d77) list_form_graphic_pane_cp_vc_ParamLimits

0x31da,	// (0x00005d77) list_form_graphic_pane_cp_vc

0x0d23,	// (0x000038c0) form_field_popup_wide_pane_vc_g1

0x31ef,	// (0x00005d8c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x31ef,	// (0x00005d8c) form_field_popup_wide_pane_vc_t1

0xe5bb,	// (0x00011158) input_focus_pane_cp8_vc_ParamLimits

0xe5bb,	// (0x00011158) input_focus_pane_cp8_vc

0x3234,	// (0x00005dd1) list_form_wide_pane_vc_ParamLimits

0x3234,	// (0x00005dd1) list_form_wide_pane_vc

0x3240,	// (0x00005ddd) list_form_graphic_pane_vc_g1

0x3248,	// (0x00005de5) list_form_graphic_pane_vc_t1_ParamLimits

0x3248,	// (0x00005de5) list_form_graphic_pane_vc_t1

0xe199,	// (0x00010d36) list_highlight_pane_cp5_vc_ParamLimits

0xe199,	// (0x00010d36) list_highlight_pane_cp5_vc

0x3264,	// (0x00005e01) list_form_graphic_pane_vc_ParamLimits

0x3264,	// (0x00005e01) list_form_graphic_pane_vc

0x0d23,	// (0x000038c0) form_field_popup_pane_vc_g1

0x327a,	// (0x00005e17) form_field_popup_pane_vc_t1_ParamLimits

0x327a,	// (0x00005e17) form_field_popup_pane_vc_t1

0xe5bb,	// (0x00011158) input_focus_pane_cp7_vc_ParamLimits

0xe5bb,	// (0x00011158) input_focus_pane_cp7_vc

0x3291,	// (0x00005e2e) list_form_pane_vc_ParamLimits

0x3291,	// (0x00005e2e) list_form_pane_vc

0x329d,	// (0x00005e3a) data_form_pane_vc_t1_ParamLimits

0x329d,	// (0x00005e3a) data_form_pane_vc_t1

0xe681,	// (0x0001121e) input_focus_pane_vc_g1

0xe689,	// (0x00011226) input_focus_pane_vc_g2

0xe691,	// (0x0001122e) input_focus_pane_vc_g3

0xe699,	// (0x00011236) input_focus_pane_vc_g4

0xe6a1,	// (0x0001123e) input_focus_pane_vc_g5

0xe6a9,	// (0x00011246) input_focus_pane_vc_g6

0xe6b1,	// (0x0001124e) input_focus_pane_vc_g7

0xe6b9,	// (0x00011256) input_focus_pane_vc_g8

0xe6c1,	// (0x0001125e) input_focus_pane_vc_g9

0xe0f3,	// (0x00010c90) input_focus_pane_vc_g10

0x0009,

0xf653,	// (0x000121f0) input_focus_pane_vc_g

0x0d17,	// (0x000038b4) data_form_pane_vc_ParamLimits

0x0d17,	// (0x000038b4) data_form_pane_vc

0x0d23,	// (0x000038c0) form_field_data_pane_vc_g1

0x32b8,	// (0x00005e55) form_field_data_pane_vc_t1_ParamLimits

0x32b8,	// (0x00005e55) form_field_data_pane_vc_t1

0xe5bb,	// (0x00011158) input_focus_pane_vc_ParamLimits

0xe5bb,	// (0x00011158) input_focus_pane_vc

0x32d2,	// (0x00005e6f) button_value_adjust_pane_cp3_vc

0x32da,	// (0x00005e77) button_value_adjust_pane_cp5_vc

0x32e2,	// (0x00005e7f) form_field_data_pane_vc_ParamLimits

0x32e2,	// (0x00005e7f) form_field_data_pane_vc

0x32f9,	// (0x00005e96) form_field_data_pane_vc_cp2

0x3301,	// (0x00005e9e) form_field_data_wide_pane_vc_ParamLimits

0x3301,	// (0x00005e9e) form_field_data_wide_pane_vc

0x3317,	// (0x00005eb4) form_field_data_wide_pane_vc_cp2

0x331f,	// (0x00005ebc) form_field_popup_pane_vc_ParamLimits

0x331f,	// (0x00005ebc) form_field_popup_pane_vc

0x3336,	// (0x00005ed3) form_field_popup_wide_pane_vc_ParamLimits

0x3336,	// (0x00005ed3) form_field_popup_wide_pane_vc

0x334c,	// (0x00005ee9) form_field_slider_pane_vc_ParamLimits

0x334c,	// (0x00005ee9) form_field_slider_pane_vc

0x335f,	// (0x00005efc) form_field_slider_wide_pane_vc_ParamLimits

0x335f,	// (0x00005efc) form_field_slider_wide_pane_vc

0xbb9f,	// (0x0000e73c) grid_touch_1_pane_ParamLimits

0xbb9f,	// (0x0000e73c) grid_touch_1_pane

0xbbb3,	// (0x0000e750) grid_touch_2_pane_ParamLimits

0xbbb3,	// (0x0000e750) grid_touch_2_pane

0x3443,	// (0x00005fe0) touch_pane_g1_ParamLimits

0x3443,	// (0x00005fe0) touch_pane_g1

0x3396,	// (0x00005f33) cell_app_pane_cp_wide_ParamLimits

0x3396,	// (0x00005f33) cell_app_pane_cp_wide

0x33a7,	// (0x00005f44) grid_popup_fast_wide_pane_ParamLimits

0x33a7,	// (0x00005f44) grid_popup_fast_wide_pane

0x33bb,	// (0x00005f58) scroll_pane_cp19_ParamLimits

0x33bb,	// (0x00005f58) scroll_pane_cp19

0xe11d,	// (0x00010cba) bg_popup_window_pane_cp20

0x33cf,	// (0x00005f6c) listscroll_popup_fast_wide_pane

0xbbdd,	// (0x0000e77a) grid_indicator_nsta_pane

0x33e9,	// (0x00005f86) clock_nsta_pane_g1

0x33f2,	// (0x00005f8f) clock_nsta_pane_t1

0xbbe9,	// (0x0000e786) cell_indicator_nsta_pane_ParamLimits

0xbbe9,	// (0x0000e786) cell_indicator_nsta_pane

0x3443,	// (0x00005fe0) cell_indicator_nsta_pane_g1

0xbc04,	// (0x0000e7a1) cell_indicator_nsta_pane_g2

0x0001,

0xfa73,	// (0x00012610) cell_indicator_nsta_pane_g

0x3463,	// (0x00006000) clock_nsta_pane_cp

0x346c,	// (0x00006009) indicator_nsta_pane_cp

0x3476,	// (0x00006013) nsta_clock_indic_pane_g1

0xe1ef,	// (0x00010d8c) grid_indicator_pane

0x9e6a,	// (0x0000ca07) scroll_pane_cp29

0xeea5,	// (0x00011a42) indicator_nsta_pane_cp2_ParamLimits

0xeea5,	// (0x00011a42) indicator_nsta_pane_cp2

0xe199,	// (0x00010d36) main_apps_wheel_pane

0xb147,	// (0x0000dce4) form_midp_field_text_pane_ParamLimits

0x10c5,	// (0x00003c62) scroll_bar_cp050_ParamLimits

0x34cf,	// (0x0000606c) cell_indicator_pane_ParamLimits

0x34cf,	// (0x0000606c) cell_indicator_pane

0x34e8,	// (0x00006085) cell_indicator_pane_g1

0xbc23,	// (0x0000e7c0) grid_wheel_folder_pane_ParamLimits

0xbc23,	// (0x0000e7c0) grid_wheel_folder_pane

0xbc31,	// (0x0000e7ce) list_wheel_apps_pane_ParamLimits

0xbc31,	// (0x0000e7ce) list_wheel_apps_pane

0xbc3f,	// (0x0000e7dc) main_apps_wheel_pane_g1_ParamLimits

0xbc3f,	// (0x0000e7dc) main_apps_wheel_pane_g1

0xbc4b,	// (0x0000e7e8) main_apps_wheel_pane_g2_ParamLimits

0xbc4b,	// (0x0000e7e8) main_apps_wheel_pane_g2

0x0001,

0xfa8f,	// (0x0001262c) main_apps_wheel_pane_g_ParamLimits

0xfa8f,	// (0x0001262c) main_apps_wheel_pane_g

0xbc59,	// (0x0000e7f6) main_apps_wheel_pane_t1_ParamLimits

0xbc59,	// (0x0000e7f6) main_apps_wheel_pane_t1

0xbc6d,	// (0x0000e80a) list_wheel_apps_pane_g1

0xbc75,	// (0x0000e812) list_wheel_apps_pane_g2

0xbc7d,	// (0x0000e81a) list_wheel_apps_pane_g3

0xbc85,	// (0x0000e822) list_wheel_apps_pane_g4

0xbc8f,	// (0x0000e82c) list_wheel_apps_pane_g5

0x0004,

0xfa94,	// (0x00012631) list_wheel_apps_pane_g

0xf124,	// (0x00011cc1) navi_icon_text_pane

0xab8a,	// (0x0000d727) aid_fill_nsta

0x35af,	// (0x0000614c) navi_icon_text_pane_g1

0x35bb,	// (0x00006158) navi_icon_text_pane_t1

0xf014,	// (0x00011bb1) list_set_graphic_pane_t1_ParamLimits

0xf014,	// (0x00011bb1) list_set_graphic_pane_t1

0x1810,	// (0x000043ad) popup_midp_note_alarm_window_t6_ParamLimits

0x1810,	// (0x000043ad) popup_midp_note_alarm_window_t6

0x1822,	// (0x000043bf) popup_midp_note_alarm_window_t7_ParamLimits

0x1822,	// (0x000043bf) popup_midp_note_alarm_window_t7

0x1834,	// (0x000043d1) popup_midp_note_alarm_window_t8_ParamLimits

0x1834,	// (0x000043d1) popup_midp_note_alarm_window_t8

0x1846,	// (0x000043e3) popup_midp_note_alarm_window_t9_ParamLimits

0x1846,	// (0x000043e3) popup_midp_note_alarm_window_t9

0x1858,	// (0x000043f5) popup_midp_note_alarm_window_t10_ParamLimits

0x1858,	// (0x000043f5) popup_midp_note_alarm_window_t10

0x186a,	// (0x00004407) popup_midp_note_alarm_window_t11_ParamLimits

0x186a,	// (0x00004407) popup_midp_note_alarm_window_t11

0xb493,	// (0x0000e030) scroll_pane_cp17_ParamLimits

0xb493,	// (0x0000e030) scroll_pane_cp17

0x1930,	// (0x000044cd) volume_small_pane_cp_g1

0x35cd,	// (0x0000616a) volume_small_pane_cp_g2

0x35d6,	// (0x00006173) volume_small_pane_cp_g3

0x35df,	// (0x0000617c) volume_small_pane_cp_g4

0x35e8,	// (0x00006185) volume_small_pane_cp_g5

0x2cd7,	// (0x00005874) volume_small_pane_cp_g6

0x35f1,	// (0x0000618e) volume_small_pane_cp_g7

0x35fa,	// (0x00006197) volume_small_pane_cp_g8

0x3603,	// (0x000061a0) volume_small_pane_cp_g9

0x360c,	// (0x000061a9) volume_small_pane_cp_g10

0xf296,	// (0x00011e33) midp_ticker_pane_g1_ParamLimits

0xf2a2,	// (0x00011e3f) midp_ticker_pane_g2_ParamLimits

0xf71f,	// (0x000122bc) midp_ticker_pane_g_ParamLimits

0xf2ae,	// (0x00011e4b) midp_ticker_pane_t1_ParamLimits

0xabae,	// (0x0000d74b) aid_fill_nsta_2

0x10b1,	// (0x00003c4e) list_form2_midp_pane

0x243b,	// (0x00004fd8) midp_editing_number_pane_ParamLimits

0x244a,	// (0x00004fe7) midp_ticker_pane_ParamLimits

0x3615,	// (0x000061b2) form2_midp_field_pane

0x3639,	// (0x000061d6) scroll_pane_cp51

0x3659,	// (0x000061f6) form2_midp_button_pane_ParamLimits

0x3659,	// (0x000061f6) form2_midp_button_pane

0x366b,	// (0x00006208) form2_midp_content_pane_ParamLimits

0x366b,	// (0x00006208) form2_midp_content_pane

0x3685,	// (0x00006222) form2_midp_field_choice_group_pane

0x368d,	// (0x0000622a) form2_midp_field_pane_g1

0x3695,	// (0x00006232) form2_midp_field_pane_g2

0x369d,	// (0x0000623a) form2_midp_field_pane_g3

0x36a5,	// (0x00006242) form2_midp_field_pane_g4

0x0003,

0xfab9,	// (0x00012656) form2_midp_field_pane_g

0x36ad,	// (0x0000624a) form2_midp_gauge_slider_pane

0x36b5,	// (0x00006252) form2_midp_gauge_wait_pane

0x36bd,	// (0x0000625a) form2_midp_image_pane_ParamLimits

0x36bd,	// (0x0000625a) form2_midp_image_pane

0xbcc2,	// (0x0000e85f) form2_midp_label_pane_ParamLimits

0xbcc2,	// (0x0000e85f) form2_midp_label_pane

0xbcdb,	// (0x0000e878) form2_midp_label_pane_cp_ParamLimits

0xbcdb,	// (0x0000e878) form2_midp_label_pane_cp

0x3712,	// (0x000062af) form2_midp_string_pane_ParamLimits

0x3712,	// (0x000062af) form2_midp_string_pane

0xbcfa,	// (0x0000e897) form2_midp_text_pane_ParamLimits

0xbcfa,	// (0x0000e897) form2_midp_text_pane

0x373f,	// (0x000062dc) form2_midp_time_pane

0x374f,	// (0x000062ec) input_focus_pane_cp51_ParamLimits

0x374f,	// (0x000062ec) input_focus_pane_cp51

0xbd13,	// (0x0000e8b0) form2_midp_label_pane_t1_ParamLimits

0xbd13,	// (0x0000e8b0) form2_midp_label_pane_t1

0xbd53,	// (0x0000e8f0) form2_mdip_text_pane_t1_ParamLimits

0xbd53,	// (0x0000e8f0) form2_mdip_text_pane_t1

0x37c7,	// (0x00006364) form2_midp_time_pane_t1

0x37e2,	// (0x0000637f) form2_midp_gauge_slider_pane_t1

0xbd6f,	// (0x0000e90c) form2_midp_gauge_slider_pane_t2

0xbd81,	// (0x0000e91e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac2,	// (0x0001265f) form2_midp_gauge_slider_pane_t

0x3818,	// (0x000063b5) form2_midp_slider_pane

0x3824,	// (0x000063c1) form2_midp_gauge_wait_pane_t1

0x3832,	// (0x000063cf) form2_midp_wait_pane_ParamLimits

0x3832,	// (0x000063cf) form2_midp_wait_pane

0xbd93,	// (0x0000e930) list_single_2graphic_pane_cp4_ParamLimits

0xbd93,	// (0x0000e930) list_single_2graphic_pane_cp4

0xb087,	// (0x0000dc24) list_single_midp_graphic_pane_cp_ParamLimits

0xb087,	// (0x0000dc24) list_single_midp_graphic_pane_cp

0xe11d,	// (0x00010cba) list_highlight_pane_cp20

0x3885,	// (0x00006422) list_single_2graphic_pane_g1_cp4

0x2a37,	// (0x000055d4) list_single_2graphic_pane_g2_cp4

0x388d,	// (0x0000642a) list_single_2graphic_pane_t1_cp4

0xe199,	// (0x00010d36) list_highlight_pane_cp21

0x389c,	// (0x00006439) list_single_midp_graphic_pane_g4_cp

0x38ab,	// (0x00006448) list_single_midp_graphic_pane_t1_cp

0xbda8,	// (0x0000e945) form2_mdip_string_pane_t1_ParamLimits

0xbda8,	// (0x0000e945) form2_mdip_string_pane_t1

0xe11d,	// (0x00010cba) bg_wml_button_pane_cp2

0xe0f3,	// (0x00010c90) form2_midp_image_pane_g1

0xe525,	// (0x000110c2) list_double_large_graphic_pane_g5_ParamLimits

0xe525,	// (0x000110c2) list_double_large_graphic_pane_g5

0xa0f6,	// (0x0000cc93) midp_form_pane_ParamLimits

0xe199,	// (0x00010d36) main_apps_wheel_pane_ParamLimits

0xa868,	// (0x0000d405) popup_preview_window_ParamLimits

0xa868,	// (0x0000d405) popup_preview_window

0xab35,	// (0x0000d6d2) popup_touch_info_window_ParamLimits

0xab35,	// (0x0000d6d2) popup_touch_info_window

0xab53,	// (0x0000d6f0) popup_touch_menu_window_ParamLimits

0xab53,	// (0x0000d6f0) popup_touch_menu_window

0xe0e9,	// (0x00010c86) bg_popup_sub_pane_cp6

0x39c7,	// (0x00006564) list_touch_menu_pane

0xbe1e,	// (0x0000e9bb) list_single_touch_menu_pane_ParamLimits

0xbe1e,	// (0x0000e9bb) list_single_touch_menu_pane

0xbe32,	// (0x0000e9cf) list_single_touch_menu_pane_t1

0xe199,	// (0x00010d36) bg_popup_sub_pane_cp7_ParamLimits

0xe199,	// (0x00010d36) bg_popup_sub_pane_cp7

0x39f3,	// (0x00006590) heading_sub_pane

0x39fb,	// (0x00006598) list_touch_info_pane_ParamLimits

0x39fb,	// (0x00006598) list_touch_info_pane

0x3a0a,	// (0x000065a7) list_single_touch_info_pane_ParamLimits

0x3a0a,	// (0x000065a7) list_single_touch_info_pane

0x3a1c,	// (0x000065b9) list_single_touch_info_pane_t1

0x3a2a,	// (0x000065c7) list_single_touch_info_pane_t2

0x0001,

0xfad0,	// (0x0001266d) list_single_touch_info_pane_t

0xf27f,	// (0x00011e1c) bg_popup_heading_pane_cp

0x3a38,	// (0x000065d5) heading_sub_pane_t1

0x0c29,	// (0x000037c6) bg_popup_preview_window_pane_cp_ParamLimits

0x0c29,	// (0x000037c6) bg_popup_preview_window_pane_cp

0x39f3,	// (0x00006590) heading_preview_pane

0x39fb,	// (0x00006598) list_preview_pane_ParamLimits

0x39fb,	// (0x00006598) list_preview_pane

0x3a46,	// (0x000065e3) popup_preview_window_g1

0x3a0a,	// (0x000065a7) list_single_preview_pane_ParamLimits

0x3a0a,	// (0x000065a7) list_single_preview_pane

0x3a4e,	// (0x000065eb) list_single_preview_pane_g1

0x3a56,	// (0x000065f3) list_single_preview_pane_t1

0x3a1c,	// (0x000065b9) list_single_preview_pane_t2

0x0001,

0xfad5,	// (0x00012672) list_single_preview_pane_t

0x3a64,	// (0x00006601) bg_popup_heading_pane_cp2_ParamLimits

0x3a64,	// (0x00006601) bg_popup_heading_pane_cp2

0x3a7a,	// (0x00006617) heading_preview_pane_g1

0x3a82,	// (0x0000661f) heading_preview_pane_t1_ParamLimits

0x3a82,	// (0x0000661f) heading_preview_pane_t1

0xe206,	// (0x00010da3) soft_indicator_pane_t1_ParamLimits

0xe4e5,	// (0x00011082) scroll_pane_ParamLimits

0xeb0b,	// (0x000116a8) scroll_sc2_left_pane

0xeb14,	// (0x000116b1) scroll_sc2_right_pane

0xeb33,	// (0x000116d0) scroll_bg_pane_g1_ParamLimits

0xeb48,	// (0x000116e5) scroll_bg_pane_g2_ParamLimits

0xeb60,	// (0x000116fd) scroll_bg_pane_g3_ParamLimits

0xf6aa,	// (0x00012247) scroll_bg_pane_g_ParamLimits

0xeb33,	// (0x000116d0) scroll_handle_pane_g1_ParamLimits

0xeb75,	// (0x00011712) scroll_handle_pane_g2_ParamLimits

0xeb60,	// (0x000116fd) scroll_handle_pane_g3_ParamLimits

0xf6b1,	// (0x0001224e) scroll_handle_pane_g_ParamLimits

0xa435,	// (0x0000cfd2) popup_choice_list_window_ParamLimits

0xa435,	// (0x0000cfd2) popup_choice_list_window

0x0989,	// (0x00003526) choice_list_pane

0x0a5d,	// (0x000035fa) cell_toolbar_pane_t1

0x0a85,	// (0x00003622) toolbar_button_pane_ParamLimits

0x1ea0,	// (0x00004a3d) ai_gene_pane_1_t2_ParamLimits

0x1ea0,	// (0x00004a3d) ai_gene_pane_1_t2

0x0001,

0xf8cd,	// (0x0001246a) ai_gene_pane_1_t_ParamLimits

0xf8cd,	// (0x0001246a) ai_gene_pane_1_t

0x3a9f,	// (0x0000663c) scroll_sc2_left_pane_g1

0x3a9f,	// (0x0000663c) scroll_sc2_right_pane_g1

0xf42a,	// (0x00011fc7) bg_popup_sub_pane_cp10

0x3aa9,	// (0x00006646) list_choice_list_pane

0xb973,	// (0x0000e510) list_single_choice_list_pane_ParamLimits

0xb973,	// (0x0000e510) list_single_choice_list_pane

0xe844,	// (0x000113e1) list_single_choice_list_pane_g1

0x9c94,	// (0x0000c831) list_single_choice_list_pane_t1_ParamLimits

0x9c94,	// (0x0000c831) list_single_choice_list_pane_t1

0x3add,	// (0x0000667a) choice_list_pane_g1

0xbe40,	// (0x0000e9dd) choice_list_pane_t1

0xe0e9,	// (0x00010c86) input_focus_pane_cp11

0xe926,	// (0x000114c3) title_pane_stacon_g2_ParamLimits

0xe926,	// (0x000114c3) title_pane_stacon_g2

0x0002,

0xf690,	// (0x0001222d) title_pane_stacon_g_ParamLimits

0xf690,	// (0x0001222d) title_pane_stacon_g

0xf27f,	// (0x00011e1c) cursor_press_pane

0xa4dc,	// (0x0000d079) popup_fep_hwr_window_ParamLimits

0xa4dc,	// (0x0000d079) popup_fep_hwr_window

0x0081,	// (0x00002c1e) popup_fep_vkb_window_ParamLimits

0x0081,	// (0x00002c1e) popup_fep_vkb_window

0xbe4e,	// (0x0000e9eb) cursor_press_pane_g1

0x0002,

0xfafe,	// (0x0001269b) fep_vkb_side_pane_g_ParamLimits

0x3b34,	// (0x000066d1) fep_hwr_candidate_pane_ParamLimits

0x3b34,	// (0x000066d1) fep_hwr_candidate_pane

0x3b5e,	// (0x000066fb) fep_hwr_side_pane_ParamLimits

0x3b5e,	// (0x000066fb) fep_hwr_side_pane

0x3b7e,	// (0x0000671b) fep_hwr_top_pane_ParamLimits

0x3b7e,	// (0x0000671b) fep_hwr_top_pane

0x3b96,	// (0x00006733) fep_hwr_write_pane_ParamLimits

0x3b96,	// (0x00006733) fep_hwr_write_pane

0xfafe,	// (0x0001269b) fep_vkb_side_pane_g

0x3bd0,	// (0x0000676d) fep_hwr_top_pane_g1

0x3be2,	// (0x0000677f) fep_hwr_top_pane_g2

0x3bf4,	// (0x00006791) fep_hwr_top_pane_g3

0x0002,

0xfada,	// (0x00012677) fep_hwr_top_pane_g

0x3c09,	// (0x000067a6) fep_hwr_top_text_pane

0xec38,	// (0x000117d5) fep_hwr_top_text_pane_g1

0x3ce1,	// (0x0000687e) fep_hwr_top_text_pane_t1

0x3d31,	// (0x000068ce) fep_hwr_candidate_pane_g1

0x3f9c,	// (0x00006b39) fep_vkb_keypad_pane_g3_ParamLimits

0x3f9c,	// (0x00006b39) fep_vkb_keypad_pane_g3

0x3fc4,	// (0x00006b61) fep_vkb_keypad_pane_g4_ParamLimits

0x3fc4,	// (0x00006b61) fep_vkb_keypad_pane_g4

0x4033,	// (0x00006bd0) fep_vkb_bottom_pane_g2_ParamLimits

0x4033,	// (0x00006bd0) fep_vkb_bottom_pane_g2

0x0001,

0xfb05,	// (0x000126a2) fep_vkb_bottom_pane_g_ParamLimits

0xfb05,	// (0x000126a2) fep_vkb_bottom_pane_g

0x3a9f,	// (0x0000663c) cell_vkb_side_pane_g2

0x0001,

0xfb0f,	// (0x000126ac) cell_vkb_side_pane_g

0x40be,	// (0x00006c5b) cell_vkb_side_pane_t1

0x40cc,	// (0x00006c69) cell_vkb_side_pane_t1_copy1

0x3a9f,	// (0x0000663c) bg_fep_vkb_candidate_pane_g2

0x41f8,	// (0x00006d95) cell_vkb_candidate_pane_ParamLimits

0x3d65,	// (0x00006902) aid_size_cell_vkb_ParamLimits

0x3d65,	// (0x00006902) aid_size_cell_vkb

0x41f8,	// (0x00006d95) cell_vkb_candidate_pane

0x422c,	// (0x00006dc9) bg_popup_fep_shadow_pane_g1

0xbeb5,	// (0x0000ea52) fep_vkb_bottom_pane_ParamLimits

0xbeb5,	// (0x0000ea52) fep_vkb_bottom_pane

0x3e29,	// (0x000069c6) fep_vkb_candidate_pane_ParamLimits

0x3e29,	// (0x000069c6) fep_vkb_candidate_pane

0xbeda,	// (0x0000ea77) fep_vkb_keypad_pane_ParamLimits

0xbeda,	// (0x0000ea77) fep_vkb_keypad_pane

0xbf0f,	// (0x0000eaac) fep_vkb_side_pane_ParamLimits

0xbf0f,	// (0x0000eaac) fep_vkb_side_pane

0xbf4b,	// (0x0000eae8) fep_vkb_top_pane_ParamLimits

0xbf4b,	// (0x0000eae8) fep_vkb_top_pane

0x3ef5,	// (0x00006a92) fep_vkb_top_pane_g1_ParamLimits

0x3ef5,	// (0x00006a92) fep_vkb_top_pane_g1

0x3f04,	// (0x00006aa1) fep_vkb_top_pane_g2_ParamLimits

0x3f04,	// (0x00006aa1) fep_vkb_top_pane_g2

0x3f13,	// (0x00006ab0) fep_vkb_top_pane_g3_ParamLimits

0x3f13,	// (0x00006ab0) fep_vkb_top_pane_g3

0x0003,

0xfaf5,	// (0x00012692) fep_vkb_top_pane_g_ParamLimits

0xfaf5,	// (0x00012692) fep_vkb_top_pane_g

0x3f31,	// (0x00006ace) fep_vkb_top_text_pane_ParamLimits

0x3f31,	// (0x00006ace) fep_vkb_top_text_pane

0xbf80,	// (0x0000eb1d) fep_vkb_side_pane_g1_ParamLimits

0xbf80,	// (0x0000eb1d) fep_vkb_side_pane_g1

0x3f8b,	// (0x00006b28) grid_vkb_side_pane_ParamLimits

0x3f8b,	// (0x00006b28) grid_vkb_side_pane

0x4234,	// (0x00006dd1) bg_popup_fep_shadow_pane_g2

0x423d,	// (0x00006dda) bg_popup_fep_shadow_pane_g3

0x4245,	// (0x00006de2) bg_popup_fep_shadow_pane_g4

0x424e,	// (0x00006deb) bg_popup_fep_shadow_pane_g5

0x4258,	// (0x00006df5) bg_popup_fep_shadow_pane_g6

0x4260,	// (0x00006dfd) bg_popup_fep_shadow_pane_g7

0xe6a1,	// (0x0001123e) bg_popup_fep_shadow_pane_g8

0x3fe2,	// (0x00006b7f) grid_vkb_keypad_number_pane_ParamLimits

0x3fe2,	// (0x00006b7f) grid_vkb_keypad_number_pane

0x3ff2,	// (0x00006b8f) grid_vkb_keypad_pane_ParamLimits

0x3ff2,	// (0x00006b8f) grid_vkb_keypad_pane

0x4018,	// (0x00006bb5) fep_vkb_bottom_pane_g1_ParamLimits

0x4018,	// (0x00006bb5) fep_vkb_bottom_pane_g1

0x4041,	// (0x00006bde) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4041,	// (0x00006bde) grid_vkb_keypad_bottom_left_pane

0x4056,	// (0x00006bf3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4056,	// (0x00006bf3) grid_vkb_keypad_bottom_right_pane

0x406b,	// (0x00006c08) fep_vkb_top_text_pane_g1

0xbfc7,	// (0x0000eb64) fep_vkb_top_text_pane_t1

0xbfd9,	// (0x0000eb76) cell_vkb_side_pane_ParamLimits

0xbfd9,	// (0x0000eb76) cell_vkb_side_pane

0x3a9f,	// (0x0000663c) cell_vkb_side_pane_g1

0x40da,	// (0x00006c77) cell_vkb_keypad_pane_ParamLimits

0x40da,	// (0x00006c77) cell_vkb_keypad_pane

0x414f,	// (0x00006cec) cell_vkb_keypad_pane_g1

0x0008,

0xfb22,	// (0x000126bf) bg_popup_fep_shadow_pane_g

0x3a9f,	// (0x0000663c) cell_hwr_side_pane_g1

0x3a9f,	// (0x0000663c) cell_hwr_side_pane_g2

0x4159,	// (0x00006cf6) cell_vkb_keypad_pane_t1

0xbfef,	// (0x0000eb8c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbfef,	// (0x0000eb8c) cell_vkb_keypad_bottom_left_pane

0xc004,	// (0x0000eba1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc004,	// (0x0000eba1) cell_vkb_keypad_bottom_right_pane

0x3a9f,	// (0x0000663c) cell_vkb_keypad_bottom_left_pane_g1

0x3a9f,	// (0x0000663c) cell_vkb_keypad_bottom_right_pane_g1

0x41bd,	// (0x00006d5a) cell_vkb_keypad_number_pane_ParamLimits

0x41bd,	// (0x00006d5a) cell_vkb_keypad_number_pane

0x41dc,	// (0x00006d79) cell_vkb_keypad_number_pane_g1

0x41e6,	// (0x00006d83) cell_vkb_keypad_number_pane_g2

0x41ef,	// (0x00006d8c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb14,	// (0x000126b1) cell_vkb_keypad_number_pane_g

0x4159,	// (0x00006cf6) cell_vkb_keypad_number_pane_t1

0x4213,	// (0x00006db0) fep_vkb_candidate_pane_g1

0x0001,

0xfb0f,	// (0x000126ac) cell_hwr_side_pane_g

0x4272,	// (0x00006e0f) cell_hwr_side_pane_t1

0x4280,	// (0x00006e1d) cell_hwr_side_pane_t1_copy1

0x3f23,	// (0x00006ac0) cell_hwr_candidate_pane_g1

0x42d0,	// (0x00006e6d) cell_hwr_candidate_pane_t1

0x3a9f,	// (0x0000663c) cell_vkb_candidate_pane_g2

0x4324,	// (0x00006ec1) cell_vkb_candidate_pane_t1

0x3afb,	// (0x00006698) bg_popup_fep_shadow_pane_ParamLimits

0x3afb,	// (0x00006698) bg_popup_fep_shadow_pane

0x3bb0,	// (0x0000674d) bg_fep_hwr_top_pane_g4

0x3c1e,	// (0x000067bb) bg_hwr_side_pane_g1_ParamLimits

0x3c1e,	// (0x000067bb) bg_hwr_side_pane_g1

0xbe6e,	// (0x0000ea0b) cell_hwr_side_pane_ParamLimits

0xbe6e,	// (0x0000ea0b) cell_hwr_side_pane

0x3c8c,	// (0x00006829) fep_hwr_write_pane_g1_ParamLimits

0x3c8c,	// (0x00006829) fep_hwr_write_pane_g1

0x3c99,	// (0x00006836) fep_hwr_write_pane_g2_ParamLimits

0x3c99,	// (0x00006836) fep_hwr_write_pane_g2

0x3ca6,	// (0x00006843) fep_hwr_write_pane_g3_ParamLimits

0x3ca6,	// (0x00006843) fep_hwr_write_pane_g3

0xbe8e,	// (0x0000ea2b) fep_hwr_write_pane_g4_ParamLimits

0xbe8e,	// (0x0000ea2b) fep_hwr_write_pane_g4

0x0005,

0xfae1,	// (0x0001267e) fep_hwr_write_pane_g_ParamLimits

0xfae1,	// (0x0001267e) fep_hwr_write_pane_g

0x3bb0,	// (0x0000674d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x3bb0,	// (0x0000674d) bg_fep_hwr_candidate_pane_g2

0x3cef,	// (0x0000688c) cell_hwr_candidate_pane_ParamLimits

0x3cef,	// (0x0000688c) cell_hwr_candidate_pane

0x3d31,	// (0x000068ce) fep_hwr_candidate_pane_g1_ParamLimits

0x3d93,	// (0x00006930) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3d93,	// (0x00006930) bg_popup_fep_shadow_pane_cp2

0x3f23,	// (0x00006ac0) fep_vkb_top_pane_g4_ParamLimits

0x3f23,	// (0x00006ac0) fep_vkb_top_pane_g4

0x3f69,	// (0x00006b06) fep_vkb_side_pane_g2_ParamLimits

0x3f69,	// (0x00006b06) fep_vkb_side_pane_g2

0x99bf,	// (0x0000c55c) list_setting_pane_t4_ParamLimits

0x99bf,	// (0x0000c55c) list_setting_pane_t4

0x9a39,	// (0x0000c5d6) list_setting_number_pane_t5_ParamLimits

0x9a39,	// (0x0000c5d6) list_setting_number_pane_t5

0xec8e,	// (0x0001182b) list_double_heading_pane_cp2_ParamLimits

0xec8e,	// (0x0001182b) list_double_heading_pane_cp2

0xe84c,	// (0x000113e9) list_double_heading_pane_g1_cp2_ParamLimits

0xe84c,	// (0x000113e9) list_double_heading_pane_g1_cp2

0x4332,	// (0x00006ecf) list_double_heading_pane_g2_cp2_ParamLimits

0x4332,	// (0x00006ecf) list_double_heading_pane_g2_cp2

0x4346,	// (0x00006ee3) list_double_heading_pane_t1_cp2_ParamLimits

0x4346,	// (0x00006ee3) list_double_heading_pane_t1_cp2

0x435c,	// (0x00006ef9) list_double_heading_pane_t2_cp2_ParamLimits

0x435c,	// (0x00006ef9) list_double_heading_pane_t2_cp2

0xe0e1,	// (0x00010c7e) aid_value_unit2

0xe13d,	// (0x00010cda) popup_preview_fixed_window

0xe2dd,	// (0x00010e7a) bg_popup_preview_window_pane_cp02

0x436e,	// (0x00006f0b) list_preview_fixed_pane

0x43b4,	// (0x00006f51) list_empty_pane_fp_ParamLimits

0x43b4,	// (0x00006f51) list_empty_pane_fp

0x43b4,	// (0x00006f51) list_single_cale_day_pane_fp_ParamLimits

0x43b4,	// (0x00006f51) list_single_cale_day_pane_fp

0x43b4,	// (0x00006f51) list_single_graphic_heading_pane_fp_ParamLimits

0x43b4,	// (0x00006f51) list_single_graphic_heading_pane_fp

0x43b4,	// (0x00006f51) list_single_graphic_pane_fp_ParamLimits

0x43b4,	// (0x00006f51) list_single_graphic_pane_fp

0x43b4,	// (0x00006f51) list_single_heading_pane_fp_ParamLimits

0x43b4,	// (0x00006f51) list_single_heading_pane_fp

0x43b4,	// (0x00006f51) list_single_pane_fp_ParamLimits

0x43b4,	// (0x00006f51) list_single_pane_fp

0x43ca,	// (0x00006f67) list_single_pane_fp_g1_ParamLimits

0x43ca,	// (0x00006f67) list_single_pane_fp_g1

0xe858,	// (0x000113f5) list_single_pane_fp_g2_ParamLimits

0xe858,	// (0x000113f5) list_single_pane_fp_g2

0x43d6,	// (0x00006f73) list_single_pane_fp_g3_ParamLimits

0x43d6,	// (0x00006f73) list_single_pane_fp_g3

0x43ea,	// (0x00006f87) list_single_pane_fp_g4_ParamLimits

0x43ea,	// (0x00006f87) list_single_pane_fp_g4

0x0003,

0xfb43,	// (0x000126e0) list_single_pane_fp_g_ParamLimits

0xfb43,	// (0x000126e0) list_single_pane_fp_g

0x43f6,	// (0x00006f93) list_single_pane_fp_t1_ParamLimits

0x43f6,	// (0x00006f93) list_single_pane_fp_t1

0x440d,	// (0x00006faa) list_single_graphic_pane_fp_g1_ParamLimits

0x440d,	// (0x00006faa) list_single_graphic_pane_fp_g1

0x43ca,	// (0x00006f67) list_single_graphic_pane_fp_g2_ParamLimits

0x43ca,	// (0x00006f67) list_single_graphic_pane_fp_g2

0xe858,	// (0x000113f5) list_single_graphic_pane_fp_g3_ParamLimits

0xe858,	// (0x000113f5) list_single_graphic_pane_fp_g3

0x43d6,	// (0x00006f73) list_single_graphic_pane_fp_g4_ParamLimits

0x43d6,	// (0x00006f73) list_single_graphic_pane_fp_g4

0x43ea,	// (0x00006f87) list_single_graphic_pane_fp_g5_ParamLimits

0x43ea,	// (0x00006f87) list_single_graphic_pane_fp_g5

0x0004,

0xfb4c,	// (0x000126e9) list_single_graphic_pane_fp_g_ParamLimits

0xfb4c,	// (0x000126e9) list_single_graphic_pane_fp_g

0x4419,	// (0x00006fb6) list_single_graphic_pane_fp_t1_ParamLimits

0x4419,	// (0x00006fb6) list_single_graphic_pane_fp_t1

0x440d,	// (0x00006faa) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x440d,	// (0x00006faa) list_single_graphic_heading_pane_fp_g1

0x43ca,	// (0x00006f67) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x43ca,	// (0x00006f67) list_single_graphic_heading_pane_fp_g2

0xe858,	// (0x000113f5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe858,	// (0x000113f5) list_single_graphic_heading_pane_fp_g3

0x43d6,	// (0x00006f73) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x43d6,	// (0x00006f73) list_single_graphic_heading_pane_fp_g4

0x43ea,	// (0x00006f87) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x43ea,	// (0x00006f87) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb4c,	// (0x000126e9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb4c,	// (0x000126e9) list_single_graphic_heading_pane_fp_g

0x442f,	// (0x00006fcc) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x442f,	// (0x00006fcc) list_single_graphic_heading_pane_fp_t1

0x4445,	// (0x00006fe2) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4445,	// (0x00006fe2) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb57,	// (0x000126f4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb57,	// (0x000126f4) list_single_graphic_heading_pane_fp_t

0x4457,	// (0x00006ff4) list_single_cale_day_pane_fp_g1_ParamLimits

0x4457,	// (0x00006ff4) list_single_cale_day_pane_fp_g1

0x448f,	// (0x0000702c) list_single_cale_day_pane_fp_g2_ParamLimits

0x448f,	// (0x0000702c) list_single_cale_day_pane_fp_g2

0x449b,	// (0x00007038) list_single_cale_day_pane_fp_g3_ParamLimits

0x449b,	// (0x00007038) list_single_cale_day_pane_fp_g3

0x44c3,	// (0x00007060) list_single_cale_day_pane_fp_g4_ParamLimits

0x44c3,	// (0x00007060) list_single_cale_day_pane_fp_g4

0x44e7,	// (0x00007084) list_single_cale_day_pane_fp_g5_ParamLimits

0x44e7,	// (0x00007084) list_single_cale_day_pane_fp_g5

0x0004,

0xfb5c,	// (0x000126f9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb5c,	// (0x000126f9) list_single_cale_day_pane_fp_g

0x450b,	// (0x000070a8) list_single_cale_day_pane_fp_t1_ParamLimits

0x450b,	// (0x000070a8) list_single_cale_day_pane_fp_t1

0x4531,	// (0x000070ce) list_single_cale_day_pane_fp_t2_ParamLimits

0x4531,	// (0x000070ce) list_single_cale_day_pane_fp_t2

0x454a,	// (0x000070e7) list_single_cale_day_pane_fp_t3_ParamLimits

0x454a,	// (0x000070e7) list_single_cale_day_pane_fp_t3

0x0002,

0xfb67,	// (0x00012704) list_single_cale_day_pane_fp_t_ParamLimits

0xfb67,	// (0x00012704) list_single_cale_day_pane_fp_t

0x43ca,	// (0x00006f67) list_empty_pane_fp_g1_ParamLimits

0x43ca,	// (0x00006f67) list_empty_pane_fp_g1

0x4563,	// (0x00007100) list_empty_pane_fp_t1

0x4571,	// (0x0000710e) list_empty_pane_fp_t2

0x0001,

0xfb6e,	// (0x0001270b) list_empty_pane_fp_t

0x43ca,	// (0x00006f67) list_single_heading_pane_fp_g1_ParamLimits

0x43ca,	// (0x00006f67) list_single_heading_pane_fp_g1

0xe858,	// (0x000113f5) list_single_heading_pane_fp_g2_ParamLimits

0xe858,	// (0x000113f5) list_single_heading_pane_fp_g2

0x43d6,	// (0x00006f73) list_single_heading_pane_fp_g3_ParamLimits

0x43d6,	// (0x00006f73) list_single_heading_pane_fp_g3

0x0002,

0xfb73,	// (0x00012710) list_single_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x00012710) list_single_heading_pane_fp_g

0x457f,	// (0x0000711c) list_single_heading_pane_fp_t1_ParamLimits

0x457f,	// (0x0000711c) list_single_heading_pane_fp_t1

0x4591,	// (0x0000712e) list_single_heading_pane_fp_t2_ParamLimits

0x4591,	// (0x0000712e) list_single_heading_pane_fp_t2

0x0001,

0xfb7a,	// (0x00012717) list_single_heading_pane_fp_t_ParamLimits

0xfb7a,	// (0x00012717) list_single_heading_pane_fp_t

0x9ce0,	// (0x0000c87d) aid_size_cell_fast

0xe2c0,	// (0x00010e5d) soft_indicator_pane_cp1_t1

0x9ce9,	// (0x0000c886) cell_app_pane_cp2_ParamLimits

0x9ce9,	// (0x0000c886) cell_app_pane_cp2

0x3b1d,	// (0x000066ba) fep_hwr_candidate_drop_down_list_pane

0x3d4b,	// (0x000068e8) fep_hwr_candidate_pane_g3_ParamLimits

0x3d4b,	// (0x000068e8) fep_hwr_candidate_pane_g3

0x3d58,	// (0x000068f5) fep_hwr_candidate_pane_g4_ParamLimits

0x3d58,	// (0x000068f5) fep_hwr_candidate_pane_g4

0x0002,

0xfaee,	// (0x0001268b) fep_hwr_candidate_pane_g_ParamLimits

0xfaee,	// (0x0001268b) fep_hwr_candidate_pane_g

0x3e18,	// (0x000069b5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3e18,	// (0x000069b5) fep_vkb_candidate_drop_down_list_pane

0x421b,	// (0x00006db8) fep_vkb_candidate_pane_g3

0x4223,	// (0x00006dc0) fep_vkb_candidate_pane_g4

0x0002,

0xfb1b,	// (0x000126b8) fep_vkb_candidate_pane_g

0x3f23,	// (0x00006ac0) cell_hwr_candidate_pane_g1_ParamLimits

0x428e,	// (0x00006e2b) cell_hwr_candidate_pane_g3_ParamLimits

0x428e,	// (0x00006e2b) cell_hwr_candidate_pane_g3

0x42af,	// (0x00006e4c) cell_hwr_candidate_pane_g4_ParamLimits

0x42af,	// (0x00006e4c) cell_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x000126d2) cell_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x000126d2) cell_hwr_candidate_pane_g

0x42ee,	// (0x00006e8b) cell_vkb_candidate_pane_g3_ParamLimits

0x42ee,	// (0x00006e8b) cell_vkb_candidate_pane_g3

0x4309,	// (0x00006ea6) cell_vkb_candidate_pane_g4_ParamLimits

0x4309,	// (0x00006ea6) cell_vkb_candidate_pane_g4

0xc01f,	// (0x0000ebbc) cell_app_pane_cp2_g1_ParamLimits

0xc01f,	// (0x0000ebbc) cell_app_pane_cp2_g1

0x45c5,	// (0x00007162) cell_app_pane_cp2_g2_ParamLimits

0x45c5,	// (0x00007162) cell_app_pane_cp2_g2

0x0001,

0xfb7f,	// (0x0001271c) cell_app_pane_cp2_g_ParamLimits

0xfb7f,	// (0x0001271c) cell_app_pane_cp2_g

0x45d1,	// (0x0000716e) cell_app_pane_cp2_t1_ParamLimits

0x45d1,	// (0x0000716e) cell_app_pane_cp2_t1

0xe5bb,	// (0x00011158) grid_highlight_pane_cp1_ParamLimits

0xe5bb,	// (0x00011158) grid_highlight_pane_cp1

0x45e3,	// (0x00007180) cell_hwr_candidate_pane_cp1_ParamLimits

0x45e3,	// (0x00007180) cell_hwr_candidate_pane_cp1

0x3f23,	// (0x00006ac0) fep_hwr_candidate_drop_down_list_pane_g1

0x4602,	// (0x0000719f) fep_hwr_candidate_drop_down_list_pane_g2

0x460f,	// (0x000071ac) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb84,	// (0x00012721) fep_hwr_candidate_drop_down_list_pane_g

0x461c,	// (0x000071b9) fep_hwr_candidate_drop_down_list_scroll_pane

0x4625,	// (0x000071c2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4625,	// (0x000071c2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x4632,	// (0x000071cf) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4632,	// (0x000071cf) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x463f,	// (0x000071dc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x463f,	// (0x000071dc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x42ee,	// (0x00006e8b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x42ee,	// (0x00006e8b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4309,	// (0x00006ea6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4309,	// (0x00006ea6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x464c,	// (0x000071e9) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x464c,	// (0x000071e9) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x4667,	// (0x00007204) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4667,	// (0x00007204) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x4682,	// (0x0000721f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4682,	// (0x0000721f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8b,	// (0x00012728) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8b,	// (0x00012728) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x469d,	// (0x0000723a) cell_vkb_candidate_pane_cp1_ParamLimits

0x469d,	// (0x0000723a) cell_vkb_candidate_pane_cp1

0x3f23,	// (0x00006ac0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3f23,	// (0x00006ac0) fep_vkb_candidate_drop_down_list_pane_g1

0x4602,	// (0x0000719f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4602,	// (0x0000719f) fep_vkb_candidate_drop_down_list_pane_g2

0x460f,	// (0x000071ac) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x460f,	// (0x000071ac) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb84,	// (0x00012721) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb84,	// (0x00012721) fep_vkb_candidate_drop_down_list_pane_g

0x46bd,	// (0x0000725a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x46bd,	// (0x0000725a) fep_vkb_candidate_drop_down_list_scroll_pane

0x46ca,	// (0x00007267) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x46ca,	// (0x00007267) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x46d7,	// (0x00007274) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x46d7,	// (0x00007274) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x46e3,	// (0x00007280) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x46e3,	// (0x00007280) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x428e,	// (0x00006e2b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x428e,	// (0x00006e2b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x42af,	// (0x00006e4c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x42af,	// (0x00006e4c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x46ef,	// (0x0000728c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x46ef,	// (0x0000728c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4710,	// (0x000072ad) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4710,	// (0x000072ad) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4731,	// (0x000072ce) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4731,	// (0x000072ce) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9c,	// (0x00012739) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9c,	// (0x00012739) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x90ae,	// (0x0000bc4b) title_pane_g1_ParamLimits

0x90c1,	// (0x0000bc5e) title_pane_g2_ParamLimits

0xf529,	// (0x000120c6) title_pane_g_ParamLimits

0xec28,	// (0x000117c5) aid_call2_pane

0xec30,	// (0x000117cd) aid_call_pane

0xec38,	// (0x000117d5) popup_clock_analogue_window_g1

0xec38,	// (0x000117d5) popup_clock_analogue_window_g2

0xec40,	// (0x000117dd) popup_clock_analogue_window_g3

0xec49,	// (0x000117e6) popup_clock_analogue_window_g4

0xe0f3,	// (0x00010c90) popup_clock_analogue_window_g5

0x0004,

0xf6bf,	// (0x0001225c) popup_clock_analogue_window_g

0xec51,	// (0x000117ee) popup_clock_analogue_window_t1

0xecaf,	// (0x0001184c) clock_digital_number_pane_ParamLimits

0xecaf,	// (0x0001184c) clock_digital_number_pane

0xecbb,	// (0x00011858) clock_digital_number_pane_cp02_ParamLimits

0xecbb,	// (0x00011858) clock_digital_number_pane_cp02

0xecc7,	// (0x00011864) clock_digital_number_pane_cp03_ParamLimits

0xecc7,	// (0x00011864) clock_digital_number_pane_cp03

0xecd3,	// (0x00011870) clock_digital_number_pane_cp04_ParamLimits

0xecd3,	// (0x00011870) clock_digital_number_pane_cp04

0xecdf,	// (0x0001187c) clock_digital_separator_pane_ParamLimits

0xecdf,	// (0x0001187c) clock_digital_separator_pane

0xeceb,	// (0x00011888) popup_clock_digital_window_t1_ParamLimits

0xeceb,	// (0x00011888) popup_clock_digital_window_t1

0xe0f3,	// (0x00010c90) clock_digital_number_pane_g1

0xe0f3,	// (0x00010c90) clock_digital_number_pane_g2

0x0001,

0xf6ca,	// (0x00012267) clock_digital_number_pane_g

0xe0f3,	// (0x00010c90) clock_digital_separator_pane_g1

0xe0f3,	// (0x00010c90) clock_digital_separator_pane_g2

0x0001,

0xf6ca,	// (0x00012267) clock_digital_separator_pane_g

0xab8a,	// (0x0000d727) aid_fill_nsta_ParamLimits

0xacc0,	// (0x0000d85d) indicator_nsta_pane_ParamLimits

0x07bb,	// (0x00003358) popup_clock_analogue_window

0x07bb,	// (0x00003358) popup_clock_digital_window

0xbbdd,	// (0x0000e77a) grid_indicator_nsta_pane_ParamLimits

0x3400,	// (0x00005f9d) clock_nsta_pane_t2

0x0001,

0xfa6e,	// (0x0001260b) clock_nsta_pane_t

0xeacd,	// (0x0001166a) aid_size_max_handle

0x9dc7,	// (0x0000c964) aid_size_min_handle

0xf27f,	// (0x00011e1c) editor_scroll_pane

0x474c,	// (0x000072e9) ex_editor_pane

0xe75b,	// (0x000112f8) scroll_pane_cp13

0xe511,	// (0x000110ae) scroll_pane_cp14

0xec86,	// (0x00011823) scroll_pane_cp36

0x9e91,	// (0x0000ca2e) list_single_graphic_hl_pane_cp2_ParamLimits

0x9e91,	// (0x0000ca2e) list_single_graphic_hl_pane_cp2

0xb987,	// (0x0000e524) list_single_graphic_hl_pane_ParamLimits

0xb987,	// (0x0000e524) list_single_graphic_hl_pane

0x700a,	// (0x00009ba7) aid_size_min_hl_cp1

0x475d,	// (0x000072fa) list_highlight_pane_cp34_ParamLimits

0x475d,	// (0x000072fa) list_highlight_pane_cp34

0x476e,	// (0x0000730b) list_single_graphic_hl_pane_g1_ParamLimits

0x476e,	// (0x0000730b) list_single_graphic_hl_pane_g1

0xc03d,	// (0x0000ebda) list_single_graphic_hl_pane_g2_ParamLimits

0xc03d,	// (0x0000ebda) list_single_graphic_hl_pane_g2

0xc03d,	// (0x0000ebda) list_single_graphic_hl_pane_g3_ParamLimits

0xc03d,	// (0x0000ebda) list_single_graphic_hl_pane_g3

0xf20a,	// (0x00011da7) list_single_graphic_hl_pane_g4_ParamLimits

0xf20a,	// (0x00011da7) list_single_graphic_hl_pane_g4

0xc049,	// (0x0000ebe6) list_single_graphic_hl_pane_g5_ParamLimits

0xc049,	// (0x0000ebe6) list_single_graphic_hl_pane_g5

0x0004,

0xfbad,	// (0x0001274a) list_single_graphic_hl_pane_g_ParamLimits

0xfbad,	// (0x0001274a) list_single_graphic_hl_pane_g

0xc05d,	// (0x0000ebfa) list_single_graphic_hl_pane_t1_ParamLimits

0xc05d,	// (0x0000ebfa) list_single_graphic_hl_pane_t1

0x47b1,	// (0x0000734e) aid_size_min_hl_cp2

0x47ba,	// (0x00007357) list_highlight_pane_cp34_cp2_ParamLimits

0x47ba,	// (0x00007357) list_highlight_pane_cp34_cp2

0x476e,	// (0x0000730b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x476e,	// (0x0000730b) list_single_graphic_hl_pane_g1_cp2

0x47c7,	// (0x00007364) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x47c7,	// (0x00007364) list_single_graphic_hl_pane_g2_cp2

0xc073,	// (0x0000ec10) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc073,	// (0x0000ec10) list_single_graphic_hl_pane_g3_cp2

0xf179,	// (0x00011d16) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xf179,	// (0x00011d16) list_single_graphic_hl_pane_g4_cp2

0x4787,	// (0x00007324) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4787,	// (0x00007324) list_single_graphic_hl_pane_g5_cp2

0xa2a9,	// (0x0000ce46) control_pane_g4_ParamLimits

0xa2a9,	// (0x0000ce46) control_pane_g4

0xf42a,	// (0x00011fc7) bg_popup_sub_pane_cp10_ParamLimits

0x3aa9,	// (0x00006646) list_choice_list_pane_ParamLimits

0x3ab8,	// (0x00006655) scroll_pane_cp23

0xe2dd,	// (0x00010e7a) bg_popup_preview_window_pane_cp02_ParamLimits

0x436e,	// (0x00006f0b) list_preview_fixed_pane_ParamLimits

0x4384,	// (0x00006f21) list_preview_fixed_pane_cp_ParamLimits

0x4384,	// (0x00006f21) list_preview_fixed_pane_cp

0x4390,	// (0x00006f2d) popup_preview_fixed_window_g1_ParamLimits

0x4390,	// (0x00006f2d) popup_preview_fixed_window_g1

0x439c,	// (0x00006f39) popup_preview_fixed_window_g2_ParamLimits

0x439c,	// (0x00006f39) popup_preview_fixed_window_g2

0x0002,

0xfb3c,	// (0x000126d9) popup_preview_fixed_window_g_ParamLimits

0xfb3c,	// (0x000126d9) popup_preview_fixed_window_g

0xea0a,	// (0x000115a7) aid_navi_side_left_pane_ParamLimits

0xea1f,	// (0x000115bc) aid_navi_side_right_pane_ParamLimits

0xea37,	// (0x000115d4) navi_icon_pane_stacon_ParamLimits

0xea4b,	// (0x000115e8) navi_navi_pane_stacon_ParamLimits

0xea37,	// (0x000115d4) navi_text_pane_stacon_ParamLimits

0xe0e9,	// (0x00010c86) main_text_info_pane

0x47f7,	// (0x00007394) listscroll_text_info_pane

0x47ff,	// (0x0000739c) list_text_info_pane_ParamLimits

0x47ff,	// (0x0000739c) list_text_info_pane

0x480e,	// (0x000073ab) scroll_pane_cp24_ParamLimits

0x480e,	// (0x000073ab) scroll_pane_cp24

0xc081,	// (0x0000ec1e) list_text_info_pane_t1_ParamLimits

0xc081,	// (0x0000ec1e) list_text_info_pane_t1

0xa451,	// (0x0000cfee) popup_fast_swap2_window_ParamLimits

0xa451,	// (0x0000cfee) popup_fast_swap2_window

0x4860,	// (0x000073fd) aid_size_cell_fast2

0xe0e9,	// (0x00010c86) bg_popup_window_pane_cp17

0x486a,	// (0x00007407) heading_pane_cp2

0x4872,	// (0x0000740f) listscroll_fast2_pane

0x487a,	// (0x00007417) grid_fast2_pane

0x4884,	// (0x00007421) listscroll_fast2_pane_g1

0x488c,	// (0x00007429) listscroll_fast2_pane_g2

0x0001,

0xfbb8,	// (0x00012755) listscroll_fast2_pane_g

0xe75b,	// (0x000112f8) scroll_pane_cp26

0x4896,	// (0x00007433) cell_fast2_pane_ParamLimits

0x4896,	// (0x00007433) cell_fast2_pane

0x48ab,	// (0x00007448) cell_fast2_pane_g1

0x48b4,	// (0x00007451) cell_fast2_pane_g2

0x48bd,	// (0x0000745a) cell_fast2_pane_g3

0x0002,

0xfbbd,	// (0x0001275a) cell_fast2_pane_g

0xe448,	// (0x00010fe5) grid_highlight_pane_cp9

0xe45d,	// (0x00010ffa) main_eswt_pane_ParamLimits

0xe45d,	// (0x00010ffa) main_eswt_pane

0x4823,	// (0x000073c0) list_single_text_info_pane

0x48c5,	// (0x00007462) eswt_ctrl_button_pane

0x48c5,	// (0x00007462) eswt_ctrl_canvas_pane

0xc09d,	// (0x0000ec3a) eswt_ctrl_combo_pane

0x48c5,	// (0x00007462) eswt_ctrl_default_pane

0x48c5,	// (0x00007462) eswt_ctrl_label_pane

0x48d5,	// (0x00007472) eswt_ctrl_wait_pane

0xc0a5,	// (0x0000ec42) eswt_shell_pane

0xe0e9,	// (0x00010c86) listscroll_eswt_app_pane

0x48fd,	// (0x0000749a) popup_eswt_tasktip_window_ParamLimits

0x48fd,	// (0x0000749a) popup_eswt_tasktip_window

0x0c29,	// (0x000037c6) bg_popup_window_pane_cp18

0x4916,	// (0x000074b3) eswt_control_pane_g1_ParamLimits

0x4916,	// (0x000074b3) eswt_control_pane_g1

0x4923,	// (0x000074c0) eswt_control_pane_g2_ParamLimits

0x4923,	// (0x000074c0) eswt_control_pane_g2

0x4930,	// (0x000074cd) eswt_control_pane_g3_ParamLimits

0x4930,	// (0x000074cd) eswt_control_pane_g3

0x493d,	// (0x000074da) eswt_control_pane_g4_ParamLimits

0x493d,	// (0x000074da) eswt_control_pane_g4

0x0003,

0xfbc4,	// (0x00012761) eswt_control_pane_g_ParamLimits

0xfbc4,	// (0x00012761) eswt_control_pane_g

0xe5bb,	// (0x00011158) bg_button_pane_ParamLimits

0xe5bb,	// (0x00011158) bg_button_pane

0xe45d,	// (0x00010ffa) common_borders_pane_copy2_ParamLimits

0xe45d,	// (0x00010ffa) common_borders_pane_copy2

0x494a,	// (0x000074e7) control_button_pane_g1_ParamLimits

0x494a,	// (0x000074e7) control_button_pane_g1

0x4956,	// (0x000074f3) control_button_pane_g2_ParamLimits

0x4956,	// (0x000074f3) control_button_pane_g2

0x4962,	// (0x000074ff) control_button_pane_g3_ParamLimits

0x4962,	// (0x000074ff) control_button_pane_g3

0x0002,

0xfbcd,	// (0x0001276a) control_button_pane_g_ParamLimits

0xfbcd,	// (0x0001276a) control_button_pane_g

0x4976,	// (0x00007513) control_button_pane_t1

0x4984,	// (0x00007521) control_button_pane_t2

0x0001,

0xfbd4,	// (0x00012771) control_button_pane_t

0x0a91,	// (0x0000362e) bg_button_pane_g1

0x0a99,	// (0x00003636) bg_button_pane_g2

0x0aa1,	// (0x0000363e) bg_button_pane_g3

0x0aa9,	// (0x00003646) bg_button_pane_g4

0x0ab1,	// (0x0000364e) bg_button_pane_g5

0x0ab9,	// (0x00003656) bg_button_pane_g6

0x0ac1,	// (0x0000365e) bg_button_pane_g7

0x0ac9,	// (0x00003666) bg_button_pane_g8

0x0ad1,	// (0x0000366e) bg_button_pane_g9

0x0008,

0xf821,	// (0x000123be) bg_button_pane_g

0x3a64,	// (0x00006601) common_borders_pane_ParamLimits

0x3a64,	// (0x00006601) common_borders_pane

0x4916,	// (0x000074b3) eswt_control_pane_g1_copy1_ParamLimits

0x4916,	// (0x000074b3) eswt_control_pane_g1_copy1

0x4923,	// (0x000074c0) eswt_control_pane_g2_copy1_ParamLimits

0x4923,	// (0x000074c0) eswt_control_pane_g2_copy1

0x4930,	// (0x000074cd) eswt_control_pane_g3_copy1_ParamLimits

0x4930,	// (0x000074cd) eswt_control_pane_g3_copy1

0x493d,	// (0x000074da) eswt_control_pane_g4_copy1_ParamLimits

0x493d,	// (0x000074da) eswt_control_pane_g4_copy1

0x3a9f,	// (0x0000663c) bg_eswt_ctrl_canvas_pane_g1

0x3a64,	// (0x00006601) common_borders_pane_cp2_ParamLimits

0x3a64,	// (0x00006601) common_borders_pane_cp2

0x3a64,	// (0x00006601) common_borders_pane_cp3_ParamLimits

0x3a64,	// (0x00006601) common_borders_pane_cp3

0x4992,	// (0x0000752f) separator_horizontal_pane

0x499a,	// (0x00007537) separator_vertical_pane

0x4916,	// (0x000074b3) eswt_control_pane_g1_copy2_ParamLimits

0x4916,	// (0x000074b3) eswt_control_pane_g1_copy2

0x4923,	// (0x000074c0) eswt_control_pane_g2_copy2_ParamLimits

0x4923,	// (0x000074c0) eswt_control_pane_g2_copy2

0x4930,	// (0x000074cd) eswt_control_pane_g3_copy2_ParamLimits

0x4930,	// (0x000074cd) eswt_control_pane_g3_copy2

0x493d,	// (0x000074da) eswt_control_pane_g4_copy2_ParamLimits

0x493d,	// (0x000074da) eswt_control_pane_g4_copy2

0xe0e9,	// (0x00010c86) common_borders_pane_cp4

0x49a3,	// (0x00007540) separator_horizontal_pane_g1

0x49ac,	// (0x00007549) separator_horizontal_pane_g2

0x49b5,	// (0x00007552) separator_horizontal_pane_g3

0x0002,

0xfbd9,	// (0x00012776) separator_horizontal_pane_g

0x4916,	// (0x000074b3) eswt_control_pane_g1_copy3_ParamLimits

0x4916,	// (0x000074b3) eswt_control_pane_g1_copy3

0x4923,	// (0x000074c0) eswt_control_pane_g2_copy3_ParamLimits

0x4923,	// (0x000074c0) eswt_control_pane_g2_copy3

0x4930,	// (0x000074cd) eswt_control_pane_g3_copy3_ParamLimits

0x4930,	// (0x000074cd) eswt_control_pane_g3_copy3

0x493d,	// (0x000074da) eswt_control_pane_g4_copy3_ParamLimits

0x493d,	// (0x000074da) eswt_control_pane_g4_copy3

0xe0e9,	// (0x00010c86) common_borders_pane_cp5

0x49be,	// (0x0000755b) separator_vertical_pane_g1

0x49c7,	// (0x00007564) separator_vertical_pane_g2

0x49d0,	// (0x0000756d) separator_vertical_pane_g3

0x0002,

0xfbe0,	// (0x0001277d) separator_vertical_pane_g

0x4916,	// (0x000074b3) eswt_control_pane_g1_copy4_ParamLimits

0x4916,	// (0x000074b3) eswt_control_pane_g1_copy4

0x4923,	// (0x000074c0) eswt_control_pane_g2_copy4_ParamLimits

0x4923,	// (0x000074c0) eswt_control_pane_g2_copy4

0x4930,	// (0x000074cd) eswt_control_pane_g3_copy4_ParamLimits

0x4930,	// (0x000074cd) eswt_control_pane_g3_copy4

0x493d,	// (0x000074da) eswt_control_pane_g4_copy4_ParamLimits

0x493d,	// (0x000074da) eswt_control_pane_g4_copy4

0xc0c5,	// (0x0000ec62) eswt_ctrl_combo_button_pane

0xc0cd,	// (0x0000ec6a) eswt_ctrl_input_pane

0xc0d5,	// (0x0000ec72) popup_choice_list_window_cp70

0xc0dd,	// (0x0000ec7a) eswt_ctrl_input_pane_t1

0xe0e9,	// (0x00010c86) input_focus_pane_cp70

0x3a64,	// (0x00006601) bg_button_pane_cp70_ParamLimits

0x3a64,	// (0x00006601) bg_button_pane_cp70

0xc0eb,	// (0x0000ec88) eswt_ctrl_combo_button_pane_g1

0x4a07,	// (0x000075a4) wait_bar_pane_cp70

0x0c29,	// (0x000037c6) bg_popup_window_pane_cp70_ParamLimits

0x0c29,	// (0x000037c6) bg_popup_window_pane_cp70

0x4a0f,	// (0x000075ac) popup_eswt_tasktip_window_t1

0x4a25,	// (0x000075c2) wait_bar_pane_cp71_ParamLimits

0x4a25,	// (0x000075c2) wait_bar_pane_cp71

0x4a31,	// (0x000075ce) grid_eswt_app_pane

0xeb14,	// (0x000116b1) scroll_pane_cp70

0xc0f3,	// (0x0000ec90) cell_eswt_app_pane_ParamLimits

0xc0f3,	// (0x0000ec90) cell_eswt_app_pane

0xc11d,	// (0x0000ecba) cell_eswt_app_pane_g1_ParamLimits

0xc11d,	// (0x0000ecba) cell_eswt_app_pane_g1

0xc14c,	// (0x0000ece9) cell_eswt_app_pane_g2_ParamLimits

0xc14c,	// (0x0000ece9) cell_eswt_app_pane_g2

0x0001,

0xfbe7,	// (0x00012784) cell_eswt_app_pane_g_ParamLimits

0xfbe7,	// (0x00012784) cell_eswt_app_pane_g

0xc170,	// (0x0000ed0d) cell_eswt_app_pane_t1_ParamLimits

0xc170,	// (0x0000ed0d) cell_eswt_app_pane_t1

0x4aef,	// (0x0000768c) grid_highlight_pane_cp70_ParamLimits

0x4aef,	// (0x0000768c) grid_highlight_pane_cp70

0xf185,	// (0x00011d22) set_content_pane_g1

0xa23b,	// (0x0000cdd8) status_small_volume_pane

0xc1a2,	// (0x0000ed3f) status_small_volume_pane_g1

0xc1aa,	// (0x0000ed47) volume_small2_pane

0xc1b3,	// (0x0000ed50) volume_small2_pane_g1

0xc1bc,	// (0x0000ed59) volume_small2_pane_g2

0xc1c5,	// (0x0000ed62) volume_small2_pane_g3

0xc1ce,	// (0x0000ed6b) volume_small2_pane_g4

0xc1d7,	// (0x0000ed74) volume_small2_pane_g5

0xc1e0,	// (0x0000ed7d) volume_small2_pane_g6

0xc1e9,	// (0x0000ed86) volume_small2_pane_g7

0xc1f2,	// (0x0000ed8f) volume_small2_pane_g8

0xc1fb,	// (0x0000ed98) volume_small2_pane_g9

0xc204,	// (0x0000eda1) volume_small2_pane_g10

0x0009,

0xfbec,	// (0x00012789) volume_small2_pane_g

0x406b,	// (0x00006c08) fep_vkb_top_text_pane_g1_ParamLimits

0xbfc7,	// (0x0000eb64) fep_vkb_top_text_pane_t1_ParamLimits

0x43a8,	// (0x00006f45) popup_preview_fixed_window_g3_ParamLimits

0x43a8,	// (0x00006f45) popup_preview_fixed_window_g3

0xaac8,	// (0x0000d665) popup_toolbar_trans_pane

0xb7de,	// (0x0000e37b) aid_height_set_list_ParamLimits

0x2285,	// (0x00004e22) aid_size_parent_ParamLimits

0xf42a,	// (0x00011fc7) list_highlight_pane_cp2_ParamLimits

0xf185,	// (0x00011d22) set_content_pane_g1_ParamLimits

0xb999,	// (0x0000e536) list_single_image_pane_ParamLimits

0xb999,	// (0x0000e536) list_single_image_pane

0xc20d,	// (0x0000edaa) aid_size_cell_image_ParamLimits

0xc20d,	// (0x0000edaa) aid_size_cell_image

0xc21a,	// (0x0000edb7) grid_single_image_pane_ParamLimits

0xc21a,	// (0x0000edb7) grid_single_image_pane

0xe858,	// (0x000113f5) list_single_image_pane_g1_ParamLimits

0xe858,	// (0x000113f5) list_single_image_pane_g1

0x43d6,	// (0x00006f73) list_single_image_pane_g2_ParamLimits

0x43d6,	// (0x00006f73) list_single_image_pane_g2

0x0001,

0xfc01,	// (0x0001279e) list_single_image_pane_g_ParamLimits

0xfc01,	// (0x0001279e) list_single_image_pane_g

0x4b7f,	// (0x0000771c) list_single_image_pane_t1_ParamLimits

0x4b7f,	// (0x0000771c) list_single_image_pane_t1

0xc226,	// (0x0000edc3) cell_image_list_pane_ParamLimits

0xc226,	// (0x0000edc3) cell_image_list_pane

0xc23a,	// (0x0000edd7) cell_image_list_pane_g1

0xc243,	// (0x0000ede0) cell_image_list_pane_g2

0x0001,

0xfc06,	// (0x000127a3) cell_image_list_pane_g

0xc24c,	// (0x0000ede9) aid_size_cell_tb_trans_pane

0xe5bb,	// (0x00011158) bg_tb_trans_pane

0xc25e,	// (0x0000edfb) grid_tb_trans_pane

0x0a91,	// (0x0000362e) bg_tb_trans_pane_g1

0x0a99,	// (0x00003636) bg_tb_trans_pane_g2

0x0aa1,	// (0x0000363e) bg_tb_trans_pane_g3

0x0aa9,	// (0x00003646) bg_tb_trans_pane_g4

0x0ab1,	// (0x0000364e) bg_tb_trans_pane_g5

0x0ac9,	// (0x00003666) bg_tb_trans_pane_g6

0x0ad1,	// (0x0000366e) bg_tb_trans_pane_g7

0x0ab9,	// (0x00003656) bg_tb_trans_pane_g8

0x0ac1,	// (0x0000365e) bg_tb_trans_pane_g9

0x0008,

0xfc0b,	// (0x000127a8) bg_tb_trans_pane_g

0xc272,	// (0x0000ee0f) cell_toolbar_trans_pane_ParamLimits

0xc272,	// (0x0000ee0f) cell_toolbar_trans_pane

0x3a9f,	// (0x0000663c) cell_toolbar_trans_pane_g1

0xbca6,	// (0x0000e843) list_form2_midp_pane_t1

0xbcb4,	// (0x0000e851) list_form2_midp_pane_t2

0x0001,

0xfab4,	// (0x00012651) list_form2_midp_pane_t

0x3639,	// (0x000061d6) scroll_pane_cp51_ParamLimits

0x3842,	// (0x000063df) form2_midp_wait_pane_g1

0x384b,	// (0x000063e8) form2_midp_wait_pane_g2

0x3854,	// (0x000063f1) form2_midp_wait_pane_g3

0x0002,

0xfac9,	// (0x00012666) form2_midp_wait_pane_g

0xe199,	// (0x00010d36) list_highlight_pane_cp21_ParamLimits

0x389c,	// (0x00006439) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x38ab,	// (0x00006448) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2488,	// (0x00005025) list_single_2graphic_im_pane_ParamLimits

0x2488,	// (0x00005025) list_single_2graphic_im_pane

0xc298,	// (0x0000ee35) list_single_2graphic_im_pane_g1_ParamLimits

0xc298,	// (0x0000ee35) list_single_2graphic_im_pane_g1

0xc2a9,	// (0x0000ee46) list_single_2graphic_im_pane_g2_ParamLimits

0xc2a9,	// (0x0000ee46) list_single_2graphic_im_pane_g2

0xc2b5,	// (0x0000ee52) list_single_2graphic_im_pane_g3_ParamLimits

0xc2b5,	// (0x0000ee52) list_single_2graphic_im_pane_g3

0x0003,

0xfc1e,	// (0x000127bb) list_single_2graphic_im_pane_g_ParamLimits

0xfc1e,	// (0x000127bb) list_single_2graphic_im_pane_g

0xc2c9,	// (0x0000ee66) list_single_2graphic_im_pane_t1_ParamLimits

0xc2c9,	// (0x0000ee66) list_single_2graphic_im_pane_t1

0x43b4,	// (0x00006f51) list_single_graphic_2heading_pane_fp_ParamLimits

0x43b4,	// (0x00006f51) list_single_graphic_2heading_pane_fp

0x440d,	// (0x00006faa) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x440d,	// (0x00006faa) list_single_graphic_2heading_pane_fp_g1

0x43ca,	// (0x00006f67) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x43ca,	// (0x00006f67) list_single_graphic_2heading_pane_fp_g2

0xe858,	// (0x000113f5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe858,	// (0x000113f5) list_single_graphic_2heading_pane_fp_g3

0x43d6,	// (0x00006f73) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x43d6,	// (0x00006f73) list_single_graphic_2heading_pane_fp_g4

0x43ea,	// (0x00006f87) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x43ea,	// (0x00006f87) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb4c,	// (0x000126e9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb4c,	// (0x000126e9) list_single_graphic_2heading_pane_fp_g

0x4c75,	// (0x00007812) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4c75,	// (0x00007812) list_single_graphic_2heading_pane_fp_t1

0x4445,	// (0x00006fe2) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4445,	// (0x00006fe2) list_single_graphic_2heading_pane_fp_t2

0x4c8b,	// (0x00007828) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4c8b,	// (0x00007828) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc27,	// (0x000127c4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc27,	// (0x000127c4) list_single_graphic_2heading_pane_fp_t

0x3cc9,	// (0x00006866) fep_hwr_write_pane_g5_ParamLimits

0x3cc9,	// (0x00006866) fep_hwr_write_pane_g5

0x3cd5,	// (0x00006872) fep_hwr_write_pane_g6_ParamLimits

0x3cd5,	// (0x00006872) fep_hwr_write_pane_g6

0xc0a5,	// (0x0000ec42) eswt_shell_pane_ParamLimits

0x0c29,	// (0x000037c6) bg_popup_window_pane_cp18_ParamLimits

0x490e,	// (0x000074ab) heading_pane_cp70

0x4a0f,	// (0x000075ac) popup_eswt_tasktip_window_t1_ParamLimits

0xabe5,	// (0x0000d782) aid_touch_tab_arrow_left

0xabfb,	// (0x0000d798) aid_touch_tab_arrow_right

0x90d9,	// (0x0000bc76) title_pane_g3_ParamLimits

0x90d9,	// (0x0000bc76) title_pane_g3

0xe552,	// (0x000110ef) set_value_pane_g1

0xaac8,	// (0x0000d665) popup_toolbar_trans_pane_ParamLimits

0xc24c,	// (0x0000ede9) aid_size_cell_tb_trans_pane_ParamLimits

0xe5bb,	// (0x00011158) bg_tb_trans_pane_ParamLimits

0xc25e,	// (0x0000edfb) grid_tb_trans_pane_ParamLimits

0xe2dd,	// (0x00010e7a) cont_note_pane_ParamLimits

0xe2dd,	// (0x00010e7a) cont_note_pane

0xe45d,	// (0x00010ffa) cont_snote2_single_text_pane_ParamLimits

0xe45d,	// (0x00010ffa) cont_snote2_single_text_pane

0xe45d,	// (0x00010ffa) cont_snote2_single_graphic_pane_ParamLimits

0xe45d,	// (0x00010ffa) cont_snote2_single_graphic_pane

0x130c,	// (0x00003ea9) cont_note_wait_pane_ParamLimits

0x130c,	// (0x00003ea9) cont_note_wait_pane

0x130c,	// (0x00003ea9) cont_note_image_pane_ParamLimits

0x130c,	// (0x00003ea9) cont_note_image_pane

0x4ca1,	// (0x0000783e) popup_note2_window_g1_ParamLimits

0x4ca1,	// (0x0000783e) popup_note2_window_g1

0xc307,	// (0x0000eea4) popup_note2_window_t1_ParamLimits

0xc307,	// (0x0000eea4) popup_note2_window_t1

0xc34c,	// (0x0000eee9) popup_note2_window_t2_ParamLimits

0xc34c,	// (0x0000eee9) popup_note2_window_t2

0xc391,	// (0x0000ef2e) popup_note2_window_t3_ParamLimits

0xc391,	// (0x0000ef2e) popup_note2_window_t3

0x4da1,	// (0x0000793e) popup_note2_window_t4_ParamLimits

0x4da1,	// (0x0000793e) popup_note2_window_t4

0xe361,	// (0x00010efe) popup_note2_window_t5_ParamLimits

0xe361,	// (0x00010efe) popup_note2_window_t5

0x0004,

0xfc33,	// (0x000127d0) popup_note2_window_t_ParamLimits

0xfc33,	// (0x000127d0) popup_note2_window_t

0x4dd0,	// (0x0000796d) popup_note2_image_window_g1_ParamLimits

0x4dd0,	// (0x0000796d) popup_note2_image_window_g1

0xc3d6,	// (0x0000ef73) popup_note2_image_window_g2_ParamLimits

0xc3d6,	// (0x0000ef73) popup_note2_image_window_g2

0x0001,

0xfc3e,	// (0x000127db) popup_note2_image_window_g_ParamLimits

0xfc3e,	// (0x000127db) popup_note2_image_window_g

0x4dee,	// (0x0000798b) popup_note2_image_window_t1_ParamLimits

0x4dee,	// (0x0000798b) popup_note2_image_window_t1

0x4e06,	// (0x000079a3) popup_note2_image_window_t2_ParamLimits

0x4e06,	// (0x000079a3) popup_note2_image_window_t2

0x4e1e,	// (0x000079bb) popup_note2_image_window_t3_ParamLimits

0x4e1e,	// (0x000079bb) popup_note2_image_window_t3

0x0002,

0xfc43,	// (0x000127e0) popup_note2_image_window_t_ParamLimits

0xfc43,	// (0x000127e0) popup_note2_image_window_t

0x131a,	// (0x00003eb7) popup_note2_wait_window_g1_ParamLimits

0x131a,	// (0x00003eb7) popup_note2_wait_window_g1

0x1326,	// (0x00003ec3) popup_note2_wait_window_g2_ParamLimits

0x1326,	// (0x00003ec3) popup_note2_wait_window_g2

0x1332,	// (0x00003ecf) popup_note2_wait_window_g3_ParamLimits

0x1332,	// (0x00003ecf) popup_note2_wait_window_g3

0x0002,

0xf803,	// (0x000123a0) popup_note2_wait_window_g_ParamLimits

0xf803,	// (0x000123a0) popup_note2_wait_window_g

0x4e3a,	// (0x000079d7) popup_note2_wait_window_t1_ParamLimits

0x4e3a,	// (0x000079d7) popup_note2_wait_window_t1

0x4e58,	// (0x000079f5) popup_note2_wait_window_t2_ParamLimits

0x4e58,	// (0x000079f5) popup_note2_wait_window_t2

0x4e76,	// (0x00007a13) popup_note2_wait_window_t3_ParamLimits

0x4e76,	// (0x00007a13) popup_note2_wait_window_t3

0x4e88,	// (0x00007a25) popup_note2_wait_window_t4_ParamLimits

0x4e88,	// (0x00007a25) popup_note2_wait_window_t4

0x0003,

0xfc4a,	// (0x000127e7) popup_note2_wait_window_t_ParamLimits

0xfc4a,	// (0x000127e7) popup_note2_wait_window_t

0x4e9a,	// (0x00007a37) wait_bar2_pane_ParamLimits

0x4e9a,	// (0x00007a37) wait_bar2_pane

0x4eb2,	// (0x00007a4f) popup_snote2_single_text_window_g1_ParamLimits

0x4eb2,	// (0x00007a4f) popup_snote2_single_text_window_g1

0x4eda,	// (0x00007a77) popup_snote2_single_text_window_t1_ParamLimits

0x4eda,	// (0x00007a77) popup_snote2_single_text_window_t1

0x4f26,	// (0x00007ac3) popup_snote2_single_text_window_t2_ParamLimits

0x4f26,	// (0x00007ac3) popup_snote2_single_text_window_t2

0x4f72,	// (0x00007b0f) popup_snote2_single_text_window_t3_ParamLimits

0x4f72,	// (0x00007b0f) popup_snote2_single_text_window_t3

0x4fb3,	// (0x00007b50) popup_snote2_single_text_window_t4_ParamLimits

0x4fb3,	// (0x00007b50) popup_snote2_single_text_window_t4

0x4fe9,	// (0x00007b86) popup_snote2_single_text_window_t5_ParamLimits

0x4fe9,	// (0x00007b86) popup_snote2_single_text_window_t5

0x0004,

0xfc53,	// (0x000127f0) popup_snote2_single_text_window_t_ParamLimits

0xfc53,	// (0x000127f0) popup_snote2_single_text_window_t

0xc3e8,	// (0x0000ef85) popup_snote2_single_graphic_window_g1_ParamLimits

0xc3e8,	// (0x0000ef85) popup_snote2_single_graphic_window_g1

0x503c,	// (0x00007bd9) popup_snote2_single_graphic_window_g2_ParamLimits

0x503c,	// (0x00007bd9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc5e,	// (0x000127fb) popup_snote2_single_graphic_window_g_ParamLimits

0xfc5e,	// (0x000127fb) popup_snote2_single_graphic_window_g

0x5064,	// (0x00007c01) popup_snote2_single_graphic_window_t1_ParamLimits

0x5064,	// (0x00007c01) popup_snote2_single_graphic_window_t1

0x50b0,	// (0x00007c4d) popup_snote2_single_graphic_window_t2_ParamLimits

0x50b0,	// (0x00007c4d) popup_snote2_single_graphic_window_t2

0x4f72,	// (0x00007b0f) popup_snote2_single_graphic_window_t3_ParamLimits

0x4f72,	// (0x00007b0f) popup_snote2_single_graphic_window_t3

0x4fb3,	// (0x00007b50) popup_snote2_single_graphic_window_t4_ParamLimits

0x4fb3,	// (0x00007b50) popup_snote2_single_graphic_window_t4

0x4fe9,	// (0x00007b86) popup_snote2_single_graphic_window_t5_ParamLimits

0x4fe9,	// (0x00007b86) popup_snote2_single_graphic_window_t5

0x0004,

0xfc63,	// (0x00012800) popup_snote2_single_graphic_window_t_ParamLimits

0xfc63,	// (0x00012800) popup_snote2_single_graphic_window_t

0x34ae,	// (0x0000604b) clock_nsta_pane_cp2_t1

0x34ae,	// (0x0000604b) clock_nsta_pane_cp2_t2

0x0001,

0xfa8a,	// (0x00012627) clock_nsta_pane_cp2_t

0xe5da,	// (0x00011177) form_field_data_wide_pane_g1_ParamLimits

0xe5e6,	// (0x00011183) form_field_data_wide_pane_g2_ParamLimits

0xe5e6,	// (0x00011183) form_field_data_wide_pane_g2

0xe5f2,	// (0x0001118f) form_field_data_wide_pane_g3_ParamLimits

0xe5f2,	// (0x0001118f) form_field_data_wide_pane_g3

0x0002,

0xf642,	// (0x000121df) form_field_data_wide_pane_g_ParamLimits

0xf642,	// (0x000121df) form_field_data_wide_pane_g

0xbbc7,	// (0x0000e764) grid_touch_3_pane_ParamLimits

0xbbc7,	// (0x0000e764) grid_touch_3_pane

0xc410,	// (0x0000efad) cell_touch_3_pane_ParamLimits

0xc410,	// (0x0000efad) cell_touch_3_pane

0x3a9f,	// (0x0000663c) cell_touch_3_pane_g1

0x3a9f,	// (0x0000663c) cell_touch_3_pane_g2

0x0001,

0xfb0f,	// (0x000126ac) cell_touch_3_pane_g

0xe393,	// (0x00010f30) cont_query_data_pane

0xe39b,	// (0x00010f38) cont_query_data_pane_cp1

0x512a,	// (0x00007cc7) button_value_adjust_pane_cp7

0x5132,	// (0x00007ccf) query_popup_pane_cp3

0xed13,	// (0x000118b0) bg_popup_sub_pane_cp22_ParamLimits

0x9f30,	// (0x0000cacd) navi_navi_volume_pane_cp2

0x9f3f,	// (0x0000cadc) popup_side_volume_key_window_g2

0x9f4e,	// (0x0000caeb) popup_side_volume_key_window_g3

0x0002,

0xf6d8,	// (0x00012275) popup_side_volume_key_window_g

0x9f5d,	// (0x0000cafa) popup_side_volume_key_window_t2

0x0001,

0xf6df,	// (0x0001227c) popup_side_volume_key_window_t

0xa0ae,	// (0x0000cc4b) popup_side_volume_key_window_ParamLimits

0x9827,	// (0x0000c3c4) list_double_graphic_pane_g4_ParamLimits

0x9827,	// (0x0000c3c4) list_double_graphic_pane_g4

0xb973,	// (0x0000e510) list_single_2heading_msg_pane_ParamLimits

0xb973,	// (0x0000e510) list_single_2heading_msg_pane

0xc459,	// (0x0000eff6) list_single_2heading_msg_pane_g1_ParamLimits

0xc459,	// (0x0000eff6) list_single_2heading_msg_pane_g1

0xc465,	// (0x0000f002) list_single_2heading_msg_pane_g2_ParamLimits

0xc465,	// (0x0000f002) list_single_2heading_msg_pane_g2

0xc478,	// (0x0000f015) list_single_2heading_msg_pane_g3_ParamLimits

0xc478,	// (0x0000f015) list_single_2heading_msg_pane_g3

0xc484,	// (0x0000f021) list_single_2heading_msg_pane_g4_ParamLimits

0xc484,	// (0x0000f021) list_single_2heading_msg_pane_g4

0x0003,

0xfc6e,	// (0x0001280b) list_single_2heading_msg_pane_g_ParamLimits

0xfc6e,	// (0x0001280b) list_single_2heading_msg_pane_g

0xc49c,	// (0x0000f039) list_single_2heading_msg_pane_t1_ParamLimits

0xc49c,	// (0x0000f039) list_single_2heading_msg_pane_t1

0xc4c4,	// (0x0000f061) list_single_2heading_msg_pane_t2_ParamLimits

0xc4c4,	// (0x0000f061) list_single_2heading_msg_pane_t2

0xc52f,	// (0x0000f0cc) list_single_2heading_msg_pane_t3_ParamLimits

0xc52f,	// (0x0000f0cc) list_single_2heading_msg_pane_t3

0x5221,	// (0x00007dbe) list_single_2heading_msg_pane_t4_ParamLimits

0x5221,	// (0x00007dbe) list_single_2heading_msg_pane_t4

0x0003,

0xfc77,	// (0x00012814) list_single_2heading_msg_pane_t_ParamLimits

0xfc77,	// (0x00012814) list_single_2heading_msg_pane_t

0xe147,	// (0x00010ce4) title_pane_g4_ParamLimits

0xe147,	// (0x00010ce4) title_pane_g4

0xe933,	// (0x000114d0) title_pane_stacon_g3_ParamLimits

0xe933,	// (0x000114d0) title_pane_stacon_g3

0x4c38,	// (0x000077d5) list_single_2graphic_im_pane_g4_ParamLimits

0x4c38,	// (0x000077d5) list_single_2graphic_im_pane_g4

0xb5b5,	// (0x0000e152) popup_side_volume_key_window_cp

0x294a,	// (0x000054e7) main_idle_act2_pane_t1

0x0ad9,	// (0x00003676) toolbar_button_pane_g10

0x96e2,	// (0x0000c27f) popup_toolbar_window_cp1

0x349f,	// (0x0000603c) clock_nsta_pane_cp_t1

0x349f,	// (0x0000603c) clock_nsta_pane_cp_t2

0x0001,

0xfa85,	// (0x00012622) clock_nsta_pane_cp_t

0x9f30,	// (0x0000cacd) navi_navi_volume_pane_cp2_ParamLimits

0xed29,	// (0x000118c6) popup_side_volume_key_window_g1_ParamLimits

0x9f3f,	// (0x0000cadc) popup_side_volume_key_window_g2_ParamLimits

0x9f4e,	// (0x0000caeb) popup_side_volume_key_window_g3_ParamLimits

0xf6d8,	// (0x00012275) popup_side_volume_key_window_g_ParamLimits

0x3b09,	// (0x000066a6) fep_hwr_aid_pane

0x3bb0,	// (0x0000674d) bg_fep_hwr_top_pane_g4_ParamLimits

0x3bd0,	// (0x0000676d) fep_hwr_top_pane_g1_ParamLimits

0x3be2,	// (0x0000677f) fep_hwr_top_pane_g2_ParamLimits

0x3bf4,	// (0x00006791) fep_hwr_top_pane_g3_ParamLimits

0xfada,	// (0x00012677) fep_hwr_top_pane_g_ParamLimits

0x3c09,	// (0x000067a6) fep_hwr_top_text_pane_ParamLimits

0x1c80,	// (0x0000481d) aid_touch_tab_arrow_arrow_2

0x1c89,	// (0x00004826) aid_touch_tab_arrow_left_2

0x3b1d,	// (0x000066ba) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x3b54,	// (0x000066f1) fep_hwr_prediction_pane

0x3e7a,	// (0x00006a17) fep_vkb_prediction_pane

0xbfa7,	// (0x0000eb44) fep_vkb_side_pane_g3_ParamLimits

0xbfa7,	// (0x0000eb44) fep_vkb_side_pane_g3

0x3f23,	// (0x00006ac0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4602,	// (0x0000719f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x460f,	// (0x000071ac) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb84,	// (0x00012721) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5246,	// (0x00007de3) fep_hwr_prediction_pane_g1

0x5250,	// (0x00007ded) fep_hwr_prediction_pane_g2

0x5258,	// (0x00007df5) fep_hwr_prediction_pane_g3

0x5260,	// (0x00007dfd) fep_hwr_prediction_pane_g4

0x0003,

0xfc80,	// (0x0001281d) fep_hwr_prediction_pane_g

0x5246,	// (0x00007de3) fep_vkb_prediction_pane_g1

0x5268,	// (0x00007e05) fep_vkb_prediction_pane_g2

0x5270,	// (0x00007e0d) fep_vkb_prediction_pane_g3

0x5278,	// (0x00007e15) fep_vkb_prediction_pane_g4

0x0003,

0xfc89,	// (0x00012826) fep_vkb_prediction_pane_g

0xb760,	// (0x0000e2fd) slider_set_pane_g3

0xb774,	// (0x0000e311) slider_set_pane_g4

0xb78c,	// (0x0000e329) slider_set_pane_g5

0xb760,	// (0x0000e2fd) slider_set_pane_g6

0xb7a2,	// (0x0000e33f) slider_set_pane_g7

0x23e6,	// (0x00004f83) slider_form_pane_g3

0x23ef,	// (0x00004f8c) slider_form_pane_g4

0x23f7,	// (0x00004f94) slider_form_pane_g5

0x23e6,	// (0x00004f83) slider_form_pane_g6

0xb929,	// (0x0000e4c6) slider_form_pane_g7

0x2c3f,	// (0x000057dc) slider_set_pane_vc_g3

0x2c48,	// (0x000057e5) slider_set_pane_vc_g4

0x2c51,	// (0x000057ee) slider_set_pane_vc_g5

0x2c3f,	// (0x000057dc) slider_set_pane_vc_g6

0x2c5a,	// (0x000057f7) slider_set_pane_vc_g7

0x315d,	// (0x00005cfa) slider_form_pane_vc_g1

0x3166,	// (0x00005d03) slider_form_pane_vc_g2

0x316f,	// (0x00005d0c) slider_form_pane_vc_g3

0x315d,	// (0x00005cfa) slider_form_pane_vc_g4

0x3178,	// (0x00005d15) slider_form_pane_vc_g5

0x0004,

0xfa57,	// (0x000125f4) slider_form_pane_vc_g

0xe0e9,	// (0x00010c86) main_idle_act3_pane

0x5280,	// (0x00007e1d) ai3_links_pane

0xc59d,	// (0x0000f13a) popup_ai3_data_window_ParamLimits

0xc59d,	// (0x0000f13a) popup_ai3_data_window

0xe0e9,	// (0x00010c86) grid_ai3_links_pane

0xc5b5,	// (0x0000f152) cell_ai3_links_pane_ParamLimits

0xc5b5,	// (0x0000f152) cell_ai3_links_pane

0x52b9,	// (0x00007e56) bg_popup_sub_pane_cp11

0x52c6,	// (0x00007e63) cell_ai3_links_pane_g1

0xe0e9,	// (0x00010c86) bg_popup_sub_pane_cp12

0x52eb,	// (0x00007e88) heading_ai3_data_pane

0x52f3,	// (0x00007e90) list_ai3_gene_pane

0x52ff,	// (0x00007e9c) popup_ai3_data_window_g1

0x5307,	// (0x00007ea4) heading_ai3_data_pane_g1

0x530f,	// (0x00007eac) heading_ai3_data_pane_t1

0xc5cf,	// (0x0000f16c) list_double_ai3_gene_pane_ParamLimits

0xc5cf,	// (0x0000f16c) list_double_ai3_gene_pane

0x532a,	// (0x00007ec7) list_single_ai3_gene_pane_ParamLimits

0x532a,	// (0x00007ec7) list_single_ai3_gene_pane

0x3a64,	// (0x00006601) list_highlight_pane_cp7_ParamLimits

0x3a64,	// (0x00006601) list_highlight_pane_cp7

0x5337,	// (0x00007ed4) list_single_a13_gene_pane_t1_ParamLimits

0x5337,	// (0x00007ed4) list_single_a13_gene_pane_t1

0x534e,	// (0x00007eeb) list_single_ai3_gene_pane_g1

0x5357,	// (0x00007ef4) list_single_ai3_gene_pane_g2

0x0001,

0xfc92,	// (0x0001282f) list_single_ai3_gene_pane_g

0x535f,	// (0x00007efc) list_double_ai3_gene_pane_g1_ParamLimits

0x535f,	// (0x00007efc) list_double_ai3_gene_pane_g1

0xc5dc,	// (0x0000f179) list_double_ai3_gene_pane_t1_ParamLimits

0xc5dc,	// (0x0000f179) list_double_ai3_gene_pane_t1

0x5387,	// (0x00007f24) list_double_ai3_gene_pane_t2_ParamLimits

0x5387,	// (0x00007f24) list_double_ai3_gene_pane_t2

0x539c,	// (0x00007f39) list_double_ai3_gene_pane_t3_ParamLimits

0x539c,	// (0x00007f39) list_double_ai3_gene_pane_t3

0x0002,

0xfc97,	// (0x00012834) list_double_ai3_gene_pane_t_ParamLimits

0xfc97,	// (0x00012834) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5143,	// (0x00007ce0) aid_size_min_col_2

0xc443,	// (0x0000efe0) aid_size_min_msg_ParamLimits

0xc443,	// (0x0000efe0) aid_size_min_msg

0xbfbb,	// (0x0000eb58) fep_vkb_top_text_pane_g2_ParamLimits

0xbfbb,	// (0x0000eb58) fep_vkb_top_text_pane_g2

0x0001,

0xfb0a,	// (0x000126a7) fep_vkb_top_text_pane_g_ParamLimits

0xfb0a,	// (0x000126a7) fep_vkb_top_text_pane_g

0xe0e9,	// (0x00010c86) main_hc_apps_shell_pane

0x53b9,	// (0x00007f56) grid_hc_apps_pane_ParamLimits

0x53b9,	// (0x00007f56) grid_hc_apps_pane

0x53cb,	// (0x00007f68) list_hc_apps_pane

0x53d3,	// (0x00007f70) scroll_pane_cp37_ParamLimits

0x53d3,	// (0x00007f70) scroll_pane_cp37

0xc5f8,	// (0x0000f195) cell_hc_apps_pane_ParamLimits

0xc5f8,	// (0x0000f195) cell_hc_apps_pane

0xc6b6,	// (0x0000f253) cell_hc_apps_pane_g1_ParamLimits

0xc6b6,	// (0x0000f253) cell_hc_apps_pane_g1

0x54bd,	// (0x0000805a) cell_hc_apps_pane_g2_ParamLimits

0x54bd,	// (0x0000805a) cell_hc_apps_pane_g2

0x54d9,	// (0x00008076) cell_hc_apps_pane_g3_ParamLimits

0x54d9,	// (0x00008076) cell_hc_apps_pane_g3

0x0002,

0xfc9e,	// (0x0001283b) cell_hc_apps_pane_g_ParamLimits

0xfc9e,	// (0x0001283b) cell_hc_apps_pane_g

0xc6e2,	// (0x0000f27f) cell_hc_apps_pane_t1_ParamLimits

0xc6e2,	// (0x0000f27f) cell_hc_apps_pane_t1

0xe2dd,	// (0x00010e7a) grid_highlight_pane_cp10_ParamLimits

0xe2dd,	// (0x00010e7a) grid_highlight_pane_cp10

0xc720,	// (0x0000f2bd) list_single_hc_apps_pane_ParamLimits

0xc720,	// (0x0000f2bd) list_single_hc_apps_pane

0xc750,	// (0x0000f2ed) list_single_hc_apps_pane_g1

0xc769,	// (0x0000f306) list_single_hc_apps_pane_g2

0x0001,

0xfca5,	// (0x00012842) list_single_hc_apps_pane_g

0xc782,	// (0x0000f31f) list_single_hc_apps_pane_g2_copy1

0xc79e,	// (0x0000f33b) list_single_hc_apps_pane_t1

0xe199,	// (0x00010d36) bg_set_opt_pane_cp_ParamLimits

0x91ad,	// (0x0000bd4a) setting_slider_pane_t1_ParamLimits

0x91c6,	// (0x0000bd63) setting_slider_pane_t2_ParamLimits

0x91e0,	// (0x0000bd7d) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000120d6) setting_slider_pane_t_ParamLimits

0x91f8,	// (0x0000bd95) slider_set_pane_ParamLimits

0xf498,	// (0x00012035) control_pane_g5_ParamLimits

0xf498,	// (0x00012035) control_pane_g5

0xb753,	// (0x0000e2f0) slider_set_pane_g1_ParamLimits

0x21e2,	// (0x00004d7f) slider_set_pane_g2_ParamLimits

0xb760,	// (0x0000e2fd) slider_set_pane_g3_ParamLimits

0xb774,	// (0x0000e311) slider_set_pane_g4_ParamLimits

0xb78c,	// (0x0000e329) slider_set_pane_g5_ParamLimits

0xb760,	// (0x0000e2fd) slider_set_pane_g6_ParamLimits

0xb7a2,	// (0x0000e33f) slider_set_pane_g7_ParamLimits

0xf91f,	// (0x000124bc) slider_set_pane_g_ParamLimits

0xf124,	// (0x00011cc1) navi_icon_text_pane_ParamLimits

0xabae,	// (0x0000d74b) aid_fill_nsta_2_ParamLimits

0xabe5,	// (0x0000d782) aid_touch_tab_arrow_left_ParamLimits

0xabfb,	// (0x0000d798) aid_touch_tab_arrow_right_ParamLimits

0xac96,	// (0x0000d833) clock_nsta_pane_ParamLimits

0x1c62,	// (0x000047ff) navi_icon_pane_g1_ParamLimits

0x1c6e,	// (0x0000480b) navi_text_pane_t1_ParamLimits

0x35af,	// (0x0000614c) navi_icon_text_pane_g1_ParamLimits

0x35bb,	// (0x00006158) navi_icon_text_pane_t1_ParamLimits

0xc750,	// (0x0000f2ed) list_single_hc_apps_pane_g1_ParamLimits

0xc769,	// (0x0000f306) list_single_hc_apps_pane_g2_ParamLimits

0xfca5,	// (0x00012842) list_single_hc_apps_pane_g_ParamLimits

0xc782,	// (0x0000f31f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc79e,	// (0x0000f33b) list_single_hc_apps_pane_t1_ParamLimits

0x8fde,	// (0x0000bb7b) popup_toolbar2_fixed_window_ParamLimits

0x8fde,	// (0x0000bb7b) popup_toolbar2_fixed_window

0xaabe,	// (0x0000d65b) popup_toolbar2_float_window

0xe0e9,	// (0x00010c86) bg_popup_sub_pane_cp27

0x561a,	// (0x000081b7) grid_toolbar2_float_pane

0xe0e9,	// (0x00010c86) bg_popup_sub_pane_cp26

0x561a,	// (0x000081b7) grid_toolbar2_fixed_pane

0xc7cc,	// (0x0000f369) cell_toolbar2_fixed_pane_ParamLimits

0xc7cc,	// (0x0000f369) cell_toolbar2_fixed_pane

0xc7e6,	// (0x0000f383) cell_toolbar2_fixed_pane_g1

0x09bf,	// (0x0000355c) toolbar2_fixed_button_pane

0x0a91,	// (0x0000362e) toolbar2_fixed_button_pane_g1

0x0a99,	// (0x00003636) toolbar2_fixed_button_pane_g2

0x0aa1,	// (0x0000363e) toolbar2_fixed_button_pane_g3

0x0aa9,	// (0x00003646) toolbar2_fixed_button_pane_g4

0x0ab1,	// (0x0000364e) toolbar2_fixed_button_pane_g5

0x0ab9,	// (0x00003656) toolbar2_fixed_button_pane_g6

0x0ac1,	// (0x0000365e) toolbar2_fixed_button_pane_g7

0x0ac9,	// (0x00003666) toolbar2_fixed_button_pane_g8

0x0ad1,	// (0x0000366e) toolbar2_fixed_button_pane_g9

0x0008,

0xf821,	// (0x000123be) toolbar2_fixed_button_pane_g

0x563b,	// (0x000081d8) cell_toolbar2_float_pane_ParamLimits

0x563b,	// (0x000081d8) cell_toolbar2_float_pane

0x564c,	// (0x000081e9) cell_toolbar2_float_pane_g1

0x09bf,	// (0x0000355c) toolbar2_fixed_button_pane_cp

0xbea3,	// (0x0000ea40) fep_vkb_accented_list_pane_ParamLimits

0xbea3,	// (0x0000ea40) fep_vkb_accented_list_pane

0x426a,	// (0x00006e07) bg_popup_fep_shadow_pane_g9

0xf27f,	// (0x00011e1c) bg_popup_fep_shadow_pane_cp3

0xe742,	// (0x000112df) list_accented_list_pane

0x5655,	// (0x000081f2) list_single_accented_list_pane_ParamLimits

0x5655,	// (0x000081f2) list_single_accented_list_pane

0xf27f,	// (0x00011e1c) list_highlight_pane_cp10

0x5666,	// (0x00008203) list_single_accented_list_pane_t1

0xa9e8,	// (0x0000d585) popup_slider_window_ParamLimits

0xa9e8,	// (0x0000d585) popup_slider_window

0x513a,	// (0x00007cd7) aid_indentation_list_msg

0xc8d7,	// (0x0000f474) bg_popup_window_pane_cp19

0x578c,	// (0x00008329) popup_slider_window_g1

0x57a8,	// (0x00008345) popup_slider_window_g2

0x57c4,	// (0x00008361) popup_slider_window_g3

0x0005,

0xfcaa,	// (0x00012847) popup_slider_window_g

0x582a,	// (0x000083c7) popup_slider_window_t1

0x589e,	// (0x0000843b) small_volume_slider_vertical_pane

0x3a9f,	// (0x0000663c) small_volume_slider_vertical_pane_g1

0x3a9f,	// (0x0000663c) small_volume_slider_vertical_pane_g2

0x58ba,	// (0x00008457) small_volume_slider_vertical_pane_g3

0x0002,

0xfcbc,	// (0x00012859) small_volume_slider_vertical_pane_g

0x8ddd,	// (0x0000b97a) area_side_right_pane_ParamLimits

0x8ddd,	// (0x0000b97a) area_side_right_pane

0xc96d,	// (0x0000f50a) aid_size_side_button_ParamLimits

0xc96d,	// (0x0000f50a) aid_size_side_button

0xc986,	// (0x0000f523) grid_sctrl_middle_pane_ParamLimits

0xc986,	// (0x0000f523) grid_sctrl_middle_pane

0x58f6,	// (0x00008493) sctrl_sk_bottom_pane

0x5907,	// (0x000084a4) sctrl_sk_top_pane

0x5919,	// (0x000084b6) aid_touch_sctrl_top

0xe2dd,	// (0x00010e7a) bg_sctrl_sk_pane_ParamLimits

0xe2dd,	// (0x00010e7a) bg_sctrl_sk_pane

0x5926,	// (0x000084c3) sctrl_sk_top_pane_g1

0x5933,	// (0x000084d0) sctrl_sk_top_pane_t1

0x5919,	// (0x000084b6) aid_touch_sctrl_bottom

0xe2dd,	// (0x00010e7a) bg_sctrl_sk_pane_cp_ParamLimits

0xe2dd,	// (0x00010e7a) bg_sctrl_sk_pane_cp

0x594e,	// (0x000084eb) sctrl_sk_bottom_pane_g1

0x5933,	// (0x000084d0) sctrl_sk_bottom_pane_t1

0xc9a0,	// (0x0000f53d) cell_sctrl_middle_pane_ParamLimits

0xc9a0,	// (0x0000f53d) cell_sctrl_middle_pane

0xc9b1,	// (0x0000f54e) aid_touch_sctrl_middle_ParamLimits

0xc9b1,	// (0x0000f54e) aid_touch_sctrl_middle

0xc9be,	// (0x0000f55b) bg_sctrl_middle_pane_ParamLimits

0xc9be,	// (0x0000f55b) bg_sctrl_middle_pane

0x5a13,	// (0x000085b0) cell_sctrl_middle_pane_g1_ParamLimits

0x5a13,	// (0x000085b0) cell_sctrl_middle_pane_g1

0xc9cc,	// (0x0000f569) cell_sctrl_middle_pane_g2_ParamLimits

0xc9cc,	// (0x0000f569) cell_sctrl_middle_pane_g2

0x0001,

0xfcc8,	// (0x00012865) cell_sctrl_middle_pane_g_ParamLimits

0xfcc8,	// (0x00012865) cell_sctrl_middle_pane_g

0x0a91,	// (0x0000362e) bg_sctrl_middle_pane_g1

0x0a99,	// (0x00003636) bg_sctrl_middle_pane_g2

0x0aa1,	// (0x0000363e) bg_sctrl_middle_pane_g3

0x0aa9,	// (0x00003646) bg_sctrl_middle_pane_g4

0x0ab1,	// (0x0000364e) bg_sctrl_middle_pane_g5

0x0ab9,	// (0x00003656) bg_sctrl_middle_pane_g6

0x0ac1,	// (0x0000365e) bg_sctrl_middle_pane_g7

0x0ac9,	// (0x00003666) bg_sctrl_middle_pane_g8

0x0007,

0xfccd,	// (0x0001286a) bg_sctrl_middle_pane_g

0x0ad1,	// (0x0000366e) bg_sctrl_middle_pane_g8_copy1

0x0a91,	// (0x0000362e) bg_sctrl_sk_pane_g1

0x0a99,	// (0x00003636) bg_sctrl_sk_pane_g2

0x0aa1,	// (0x0000363e) bg_sctrl_sk_pane_g3

0x0008,

0xf821,	// (0x000123be) bg_sctrl_sk_pane_g

0xe4ab,	// (0x00011048) aid_size_touch_scroll_bar

0x0aa9,	// (0x00003646) bg_sctrl_sk_pane_g4

0x0ab1,	// (0x0000364e) bg_sctrl_sk_pane_g5

0x0ab9,	// (0x00003656) bg_sctrl_sk_pane_g6

0x0ac1,	// (0x0000365e) bg_sctrl_sk_pane_g7

0x0ac9,	// (0x00003666) bg_sctrl_sk_pane_g8

0x0ad1,	// (0x0000366e) bg_sctrl_sk_pane_g9

0xf51f,	// (0x000120bc) popup_fep_china_hwr2_fs_candidate_window

0xa4ae,	// (0x0000d04b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa4ae,	// (0x0000d04b) popup_fep_china_hwr2_fs_control_window

0x3f23,	// (0x00006ac0) sctrl_sk_top_pane_g2

0x0001,

0xfcc3,	// (0x00012860) sctrl_sk_top_pane_g

0xc9d8,	// (0x0000f575) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc9d8,	// (0x0000f575) aid_fep_china_hwr2_fs_cell

0xc9ec,	// (0x0000f589) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc9ec,	// (0x0000f589) bg_popup_fep_shadow_pane_cp4

0xca03,	// (0x0000f5a0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xca03,	// (0x0000f5a0) bg_popup_fep_shadow_pane_cp5

0xca15,	// (0x0000f5b2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xca15,	// (0x0000f5b2) popup_fep_china_hwr2_fs_control_bar_grid

0xed95,	// (0x00011932) popup_fep_china_hwr2_fs_control_funtion_grid

0x59e7,	// (0x00008584) aid_fep_china_hwr2_fs_candi_cell

0xe0e9,	// (0x00010c86) bg_popup_fep_shadow_pane_cp6

0x59f1,	// (0x0000858e) popup_fep_china_hwr2_fs_candidate_grid

0xca29,	// (0x0000f5c6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xca29,	// (0x0000f5c6) cell_fep_china_hwr2_fs_funtion_grid

0x3a9f,	// (0x0000663c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5a13,	// (0x000085b0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5a13,	// (0x000085b0) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5a21,	// (0x000085be) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5a21,	// (0x000085be) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcde,	// (0x0001287b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcde,	// (0x0001287b) cell_fep_china_hwr2_fs_funtion_grid_g

0xca41,	// (0x0000f5de) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xca41,	// (0x0000f5de) cell_fep_china_hwr2_fs_funtion_grid_t1

0xca56,	// (0x0000f5f3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xca56,	// (0x0000f5f3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce3,	// (0x00012880) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce3,	// (0x00012880) cell_fep_china_hwr2_fs_funtion_grid_t

0x5a68,	// (0x00008605) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5a70,	// (0x0000860d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5a78,	// (0x00008615) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfce8,	// (0x00012885) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5a80,	// (0x0000861d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5a80,	// (0x0000861d) cell_fep_china_hwr2_fs_candidate_grid

0x5a99,	// (0x00008636) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5aa1,	// (0x0000863e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3a9f,	// (0x0000663c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3a9f,	// (0x0000663c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0f,	// (0x000126ac) cell_fep_china_hwr2_fs_candidate_grid_g

0x5aa9,	// (0x00008646) cell_fep_china_hwr2_fs_candidate_grid_t1

0x05da,	// (0x00003177) clock_nsta_pane_cp_24_ParamLimits

0x05da,	// (0x00003177) clock_nsta_pane_cp_24

0x0658,	// (0x000031f5) indicator_nsta_pane_cp_24_ParamLimits

0x0658,	// (0x000031f5) indicator_nsta_pane_cp_24

0x1acd,	// (0x0000466a) heading_pane_g1

0x0001,

0xf886,	// (0x00012423) heading_pane_g

0x26db,	// (0x00005278) grid_sct_catagory_button_pane

0x270b,	// (0x000052a8) scroll_pane_cp5_ParamLimits

0x3645,	// (0x000061e2) button_value_adjust_pane_cp5_ParamLimits

0x3645,	// (0x000061e2) button_value_adjust_pane_cp5

0x373f,	// (0x000062dc) form2_midp_time_pane_ParamLimits

0x5ab7,	// (0x00008654) cell_sct_catagory_button_pane_ParamLimits

0x5ab7,	// (0x00008654) cell_sct_catagory_button_pane

0x3a64,	// (0x00006601) bg_button_pane_cp01_ParamLimits

0x3a64,	// (0x00006601) bg_button_pane_cp01

0x3a9f,	// (0x0000663c) cell_sct_catagory_button_pane_g1

0xaa61,	// (0x0000d5fe) popup_tb_extension_window

0xca72,	// (0x0000f60f) aid_size_cell_ext_ParamLimits

0xca72,	// (0x0000f60f) aid_size_cell_ext

0xe45d,	// (0x00010ffa) bg_tb_trans_pane_cp1_ParamLimits

0xe45d,	// (0x00010ffa) bg_tb_trans_pane_cp1

0xca98,	// (0x0000f635) grid_tb_ext_pane_ParamLimits

0xca98,	// (0x0000f635) grid_tb_ext_pane

0xcad7,	// (0x0000f674) cell_tb_ext_pane_ParamLimits

0xcad7,	// (0x0000f674) cell_tb_ext_pane

0xcaff,	// (0x0000f69c) cell_tb_ext_pane_g1_ParamLimits

0xcaff,	// (0x0000f69c) cell_tb_ext_pane_g1

0x5b4d,	// (0x000086ea) cell_tb_ext_pane_t1

0xe2dd,	// (0x00010e7a) list_highlight_pane_cp11_ParamLimits

0xe2dd,	// (0x00010e7a) list_highlight_pane_cp11

0x8ff3,	// (0x0000bb90) popup_uni_indicator_window_ParamLimits

0x8ff3,	// (0x0000bb90) popup_uni_indicator_window

0xe5bb,	// (0x00011158) bg_popup_sub_pane_cp14

0xcb1c,	// (0x0000f6b9) list_uniindi_pane

0xcb28,	// (0x0000f6c5) uniindi_top_pane

0xe2dd,	// (0x00010e7a) bg_uniindi_top_pane

0xcb47,	// (0x0000f6e4) uniindi_top_pane_g1

0xcb5d,	// (0x0000f6fa) uniindi_top_pane_g2

0x0003,

0xfcef,	// (0x0001288c) uniindi_top_pane_g

0xcb7a,	// (0x0000f717) uniindi_top_pane_t1

0x5bfe,	// (0x0000879b) list_single_uniindi_pane_ParamLimits

0x5bfe,	// (0x0000879b) list_single_uniindi_pane

0x3a9f,	// (0x0000663c) bg_uniindi_top_pane_g1

0x5c11,	// (0x000087ae) list_single_uniindi_pane_g1

0x5c24,	// (0x000087c1) list_single_uniindi_pane_t1

0xe0e9,	// (0x00010c86) control_bg_pane

0x5c49,	// (0x000087e6) bg_sctrl_sk_pane_cp1

0x5c52,	// (0x000087ef) bg_sctrl_sk_pane_cp2

0x5c5b,	// (0x000087f8) control_bg_pane_g1

0x5c64,	// (0x00008801) control_bg_pane_g2

0x0001,

0xfcf8,	// (0x00012895) control_bg_pane_g

0x3443,	// (0x00005fe0) cell_indicator_nsta_pane_g1_ParamLimits

0xbc04,	// (0x0000e7a1) cell_indicator_nsta_pane_g2_ParamLimits

0xfa73,	// (0x00012610) cell_indicator_nsta_pane_g_ParamLimits

0x37c7,	// (0x00006364) form2_midp_time_pane_t1_ParamLimits

0x3afb,	// (0x00006698) main_idle_act4_pane_ParamLimits

0x3afb,	// (0x00006698) main_idle_act4_pane

0xaa61,	// (0x0000d5fe) popup_tb_extension_window_ParamLimits

0xcabd,	// (0x0000f65a) tb_ext_find_pane_ParamLimits

0xcabd,	// (0x0000f65a) tb_ext_find_pane

0x5c6d,	// (0x0000880a) ai_gene_pane_1_cp1

0xf300,	// (0x00011e9d) ai_gene_pane_2_cp1

0xcba4,	// (0x0000f741) list_single_idle_plugin_calendar_pane

0x5c7e,	// (0x0000881b) list_single_idle_plugin_notification_pane

0x5c87,	// (0x00008824) list_single_idle_plugin_player_pane

0xcbad,	// (0x0000f74a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcbad,	// (0x0000f74a) list_single_idle_plugin_shortcut_pane

0xcbd5,	// (0x0000f772) main_idle_act4_pane_t1

0xcbec,	// (0x0000f789) main_idle_act4_pane_t2

0x0001,

0xfcfd,	// (0x0001289a) main_idle_act4_pane_t

0xcc03,	// (0x0000f7a0) middle_sk_idle_act4_pane_ParamLimits

0xcc03,	// (0x0000f7a0) middle_sk_idle_act4_pane

0xcc1f,	// (0x0000f7bc) popup_clock_digital_analogue_window_cp2

0xcc4b,	// (0x0000f7e8) shortcut_wheel_idle_act4_pane_ParamLimits

0xcc4b,	// (0x0000f7e8) shortcut_wheel_idle_act4_pane

0x3a9f,	// (0x0000663c) shortcut_wheel_idle_act4_pane_g1

0x3a9f,	// (0x0000663c) shortcut_wheel_idle_act4_pane_g2

0x3a9f,	// (0x0000663c) shortcut_wheel_idle_act4_pane_g3

0x3a9f,	// (0x0000663c) shortcut_wheel_idle_act4_pane_g4

0x3a9f,	// (0x0000663c) shortcut_wheel_idle_act4_pane_g5

0x5d1a,	// (0x000088b7) shortcut_wheel_idle_act4_pane_g6

0x5d22,	// (0x000088bf) shortcut_wheel_idle_act4_pane_g7

0x5d2a,	// (0x000088c7) shortcut_wheel_idle_act4_pane_g8

0x5d32,	// (0x000088cf) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd02,	// (0x0001289f) shortcut_wheel_idle_act4_pane_g

0x3bb0,	// (0x0000674d) middle_sk_idle_act4_pane_g1_ParamLimits

0x3bb0,	// (0x0000674d) middle_sk_idle_act4_pane_g1

0xccc8,	// (0x0000f865) middle_sk_idle_act4_pane_g2_ParamLimits

0xccc8,	// (0x0000f865) middle_sk_idle_act4_pane_g2

0x0001,

0xfd25,	// (0x000128c2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd25,	// (0x000128c2) middle_sk_idle_act4_pane_g

0xcce0,	// (0x0000f87d) middle_sk_idle_act4_pane_t1_ParamLimits

0xcce0,	// (0x0000f87d) middle_sk_idle_act4_pane_t1

0xcd0f,	// (0x0000f8ac) grid_ai_shortcut_pane_ParamLimits

0xcd0f,	// (0x0000f8ac) grid_ai_shortcut_pane

0xcd2c,	// (0x0000f8c9) list_highlight_pane_cp16_ParamLimits

0xcd2c,	// (0x0000f8c9) list_highlight_pane_cp16

0xcd39,	// (0x0000f8d6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcd39,	// (0x0000f8d6) list_single_idle_plugin_shortcut_pane_g1

0xcd45,	// (0x0000f8e2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcd45,	// (0x0000f8e2) list_single_idle_plugin_shortcut_pane_g2

0xcd61,	// (0x0000f8fe) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcd61,	// (0x0000f8fe) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd2a,	// (0x000128c7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd2a,	// (0x000128c7) list_single_idle_plugin_shortcut_pane_g

0xcd76,	// (0x0000f913) cell_ai_shortcut_pane_ParamLimits

0xcd76,	// (0x0000f913) cell_ai_shortcut_pane

0xcd8c,	// (0x0000f929) cell_ai_shortcut_pane_g1_ParamLimits

0xcd8c,	// (0x0000f929) cell_ai_shortcut_pane_g1

0x5c6d,	// (0x0000880a) ai_gene_pane_1_cp2

0x5e62,	// (0x000089ff) ai_gene_pane_2_cp2

0x5e6a,	// (0x00008a07) list_highlight_pane_cp15

0xcdae,	// (0x0000f94b) list_single_idle_plugin_calendar_pane_g1

0x5e6a,	// (0x00008a07) list_highlight_pane_cp17

0x5e7b,	// (0x00008a18) list_single_idle_plugin_calendar_pane_g1_copy1

0x5e83,	// (0x00008a20) list_single_idle_plugin_player_pane_g1

0x29ec,	// (0x00005589) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd31,	// (0x000128ce) list_single_idle_plugin_player_pane_g

0x5e8b,	// (0x00008a28) list_single_idle_plugin_player_pane_t1

0x5e99,	// (0x00008a36) list_single_idle_plugin_player_pane_t2

0x5ea7,	// (0x00008a44) list_single_idle_plugin_player_pane_t3

0x5eb5,	// (0x00008a52) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd36,	// (0x000128d3) list_single_idle_plugin_player_pane_t

0x5ec3,	// (0x00008a60) wait_bar_pane_cp15

0x5ecb,	// (0x00008a68) grid_ai_notification_pane

0x29ec,	// (0x00005589) list_single_idle_plugin_notification_pane_g1

0xcdb6,	// (0x0000f953) cell_ai_notification_pane_ParamLimits

0xcdb6,	// (0x0000f953) cell_ai_notification_pane

0x5ee1,	// (0x00008a7e) cell_ai_notification_pane_g1

0x5ee9,	// (0x00008a86) cell_ai_notification_pane_t1

0xcdc3,	// (0x0000f960) tb_ext_find_button_pane

0xcdcb,	// (0x0000f968) tb_ext_find_pane_g1

0xcdd3,	// (0x0000f970) tb_ext_find_pane_t1

0xec38,	// (0x000117d5) tb_ext_find_button_pane_g1

0xcde1,	// (0x0000f97e) tb_ext_find_button_pane_g2

0x0001,

0xfd3f,	// (0x000128dc) tb_ext_find_button_pane_g

0xcbd5,	// (0x0000f772) main_idle_act4_pane_t1_ParamLimits

0xcbec,	// (0x0000f789) main_idle_act4_pane_t2_ParamLimits

0xfcfd,	// (0x0001289a) main_idle_act4_pane_t_ParamLimits

0xcc1f,	// (0x0000f7bc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcc37,	// (0x0000f7d4) sat_plugin_idle_act4_pane_ParamLimits

0xcc37,	// (0x0000f7d4) sat_plugin_idle_act4_pane

0xcdea,	// (0x0000f987) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcdea,	// (0x0000f987) sat_plugin_idle_act4_pane_t1

0xce02,	// (0x0000f99f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xce02,	// (0x0000f99f) sat_plugin_idle_act4_pane_t2

0xce1a,	// (0x0000f9b7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xce1a,	// (0x0000f9b7) sat_plugin_idle_act4_pane_t3

0xce32,	// (0x0000f9cf) sat_plugin_idle_act4_pane_t4_ParamLimits

0xce32,	// (0x0000f9cf) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd44,	// (0x000128e1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd44,	// (0x000128e1) sat_plugin_idle_act4_pane_t

0x8f6e,	// (0x0000bb0b) popup_battery_window_ParamLimits

0x8f6e,	// (0x0000bb0b) popup_battery_window

0xe2dd,	// (0x00010e7a) bg_popup_sub_pane_cp25_ParamLimits

0xe2dd,	// (0x00010e7a) bg_popup_sub_pane_cp25

0x5f6a,	// (0x00008b07) popup_battery_window_g1_ParamLimits

0x5f6a,	// (0x00008b07) popup_battery_window_g1

0x5f76,	// (0x00008b13) popup_battery_window_t1_ParamLimits

0x5f76,	// (0x00008b13) popup_battery_window_t1

0x5f88,	// (0x00008b25) popup_battery_window_t2_ParamLimits

0x5f88,	// (0x00008b25) popup_battery_window_t2

0x0001,

0xfd4d,	// (0x000128ea) popup_battery_window_t_ParamLimits

0xfd4d,	// (0x000128ea) popup_battery_window_t

0xa102,	// (0x0000cc9f) midp_canvas_pane_ParamLimits

0xa174,	// (0x0000cd11) midp_keypad_pane_ParamLimits

0xa174,	// (0x0000cd11) midp_keypad_pane

0xf42a,	// (0x00011fc7) main_midp_pane_ParamLimits

0xbc11,	// (0x0000e7ae) signal_pane_g2_cp_ParamLimits

0xce4a,	// (0x0000f9e7) aid_size_cell_midp_keypad_ParamLimits

0xce4a,	// (0x0000f9e7) aid_size_cell_midp_keypad

0xce68,	// (0x0000fa05) midp_keyp_game_grid_pane_ParamLimits

0xce68,	// (0x0000fa05) midp_keyp_game_grid_pane

0xce8f,	// (0x0000fa2c) midp_keyp_rocker_pane_ParamLimits

0xce8f,	// (0x0000fa2c) midp_keyp_rocker_pane

0xcee0,	// (0x0000fa7d) midp_keyp_sk_left_pane_ParamLimits

0xcee0,	// (0x0000fa7d) midp_keyp_sk_left_pane

0xcf34,	// (0x0000fad1) midp_keyp_sk_right_pane_ParamLimits

0xcf34,	// (0x0000fad1) midp_keyp_sk_right_pane

0xe0e9,	// (0x00010c86) bg_button_pane_cp03

0xcf88,	// (0x0000fb25) midp_keyp_sk_left_pane_g1

0xe0e9,	// (0x00010c86) bg_button_pane_cp04

0xcf88,	// (0x0000fb25) midp_keyp_sk_right_pane_g1

0x3a9f,	// (0x0000663c) midp_keyp_rocker_pane_g1

0xcf91,	// (0x0000fb2e) keyp_game_cell_pane_ParamLimits

0xcf91,	// (0x0000fb2e) keyp_game_cell_pane

0xe0e9,	// (0x00010c86) bg_button_pane_cp02

0xcfb5,	// (0x0000fb52) keyp_game_cell_pane_g1

0x8f8e,	// (0x0000bb2b) popup_fep_vkb2_window_ParamLimits

0x8f8e,	// (0x0000bb2b) popup_fep_vkb2_window

0xcfbe,	// (0x0000fb5b) aid_size_cell_vkb2_ParamLimits

0xcfbe,	// (0x0000fb5b) aid_size_cell_vkb2

0xcff2,	// (0x0000fb8f) popup_fep_vkb2_window_g1_ParamLimits

0xcff2,	// (0x0000fb8f) popup_fep_vkb2_window_g1

0xd042,	// (0x0000fbdf) vkb2_area_bottom_pane_ParamLimits

0xd042,	// (0x0000fbdf) vkb2_area_bottom_pane

0xd096,	// (0x0000fc33) vkb2_area_keypad_pane_ParamLimits

0xd096,	// (0x0000fc33) vkb2_area_keypad_pane

0xd0de,	// (0x0000fc7b) vkb2_area_top_pane_ParamLimits

0xd0de,	// (0x0000fc7b) vkb2_area_top_pane

0xd16a,	// (0x0000fd07) vkb2_top_entry_pane_ParamLimits

0xd16a,	// (0x0000fd07) vkb2_top_entry_pane

0xd197,	// (0x0000fd34) vkb2_top_grid_left_pane_ParamLimits

0xd197,	// (0x0000fd34) vkb2_top_grid_left_pane

0xd1b8,	// (0x0000fd55) vkb2_top_grid_right_pane_ParamLimits

0xd1b8,	// (0x0000fd55) vkb2_top_grid_right_pane

0x6308,	// (0x00008ea5) vkb2_cell_keypad_pane_ParamLimits

0x6308,	// (0x00008ea5) vkb2_cell_keypad_pane

0xd200,	// (0x0000fd9d) vkb2_area_bottom_grid_pane_ParamLimits

0xd200,	// (0x0000fd9d) vkb2_area_bottom_grid_pane

0xd22a,	// (0x0000fdc7) vkb2_area_bottom_pane_g1_ParamLimits

0xd22a,	// (0x0000fdc7) vkb2_area_bottom_pane_g1

0xd250,	// (0x0000fded) vkb2_area_bottom_pane_g2_ParamLimits

0xd250,	// (0x0000fded) vkb2_area_bottom_pane_g2

0xd281,	// (0x0000fe1e) vkb2_area_bottom_pane_g3_ParamLimits

0xd281,	// (0x0000fe1e) vkb2_area_bottom_pane_g3

0x0002,

0xfd52,	// (0x000128ef) vkb2_area_bottom_pane_g_ParamLimits

0xfd52,	// (0x000128ef) vkb2_area_bottom_pane_g

0x64b2,	// (0x0000904f) vkb2_top_cell_left_pane_ParamLimits

0x64b2,	// (0x0000904f) vkb2_top_cell_left_pane

0xd2eb,	// (0x0000fe88) vkb2_top_entry_pane_g1_ParamLimits

0xd2eb,	// (0x0000fe88) vkb2_top_entry_pane_g1

0xd2f9,	// (0x0000fe96) vkb2_top_entry_pane_t1_ParamLimits

0xd2f9,	// (0x0000fe96) vkb2_top_entry_pane_t1

0x651a,	// (0x000090b7) vkb2_top_entry_pane_t2_ParamLimits

0x651a,	// (0x000090b7) vkb2_top_entry_pane_t2

0x654c,	// (0x000090e9) vkb2_top_entry_pane_t3_ParamLimits

0x654c,	// (0x000090e9) vkb2_top_entry_pane_t3

0x0002,

0xfd59,	// (0x000128f6) vkb2_top_entry_pane_t_ParamLimits

0xfd59,	// (0x000128f6) vkb2_top_entry_pane_t

0xd332,	// (0x0000fecf) vkb2_top_grid_right_pane_g1_ParamLimits

0xd332,	// (0x0000fecf) vkb2_top_grid_right_pane_g1

0x65b3,	// (0x00009150) vkb2_top_grid_right_pane_g2_ParamLimits

0x65b3,	// (0x00009150) vkb2_top_grid_right_pane_g2

0x65cb,	// (0x00009168) vkb2_top_grid_right_pane_g3_ParamLimits

0x65cb,	// (0x00009168) vkb2_top_grid_right_pane_g3

0xd348,	// (0x0000fee5) vkb2_top_grid_right_pane_g4_ParamLimits

0xd348,	// (0x0000fee5) vkb2_top_grid_right_pane_g4

0x0003,

0xfd60,	// (0x000128fd) vkb2_top_grid_right_pane_g_ParamLimits

0xfd60,	// (0x000128fd) vkb2_top_grid_right_pane_g

0x65f9,	// (0x00009196) vkb2_top_cell_left_pane_g1

0x6610,	// (0x000091ad) vkb2_cell_keypad_pane_g1_ParamLimits

0x6610,	// (0x000091ad) vkb2_cell_keypad_pane_g1

0x661e,	// (0x000091bb) vkb2_cell_keypad_pane_t1_ParamLimits

0x661e,	// (0x000091bb) vkb2_cell_keypad_pane_t1

0x6635,	// (0x000091d2) vkb2_cell_bottom_grid_pane_ParamLimits

0x6635,	// (0x000091d2) vkb2_cell_bottom_grid_pane

0x666e,	// (0x0000920b) vkb2_cell_bottom_grid_pane_g1

0xcc6c,	// (0x0000f809) aid_call2_pane_cp02

0xcc74,	// (0x0000f811) aid_call_pane_cp02

0xcc7c,	// (0x0000f819) clock_digital_number_pane_cp10

0xcc84,	// (0x0000f821) clock_digital_number_pane_cp11

0xcc8c,	// (0x0000f829) clock_digital_number_pane_cp12

0xcc94,	// (0x0000f831) clock_digital_number_pane_cp13

0xcc9c,	// (0x0000f839) clock_digital_separator_pane_cp10

0xec38,	// (0x000117d5) popup_clock_digital_analogue_window_cp2_g1

0xec38,	// (0x000117d5) popup_clock_digital_analogue_window_cp2_g2

0xcca4,	// (0x0000f841) popup_clock_digital_analogue_window_cp2_g3

0xec38,	// (0x000117d5) popup_clock_digital_analogue_window_cp2_g4

0xcca4,	// (0x0000f841) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd15,	// (0x000128b2) popup_clock_digital_analogue_window_cp2_g

0xccac,	// (0x0000f849) popup_clock_digital_analogue_window_cp2_t1

0xccba,	// (0x0000f857) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd20,	// (0x000128bd) popup_clock_digital_analogue_window_cp2_t

0x3a9f,	// (0x0000663c) clock_digital_number_pane_cp10_g1

0x3a9f,	// (0x0000663c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0f,	// (0x000126ac) clock_digital_number_pane_cp10_g

0x3a9f,	// (0x0000663c) clock_digital_separator_pane_cp10_g1

0x3a9f,	// (0x0000663c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0f,	// (0x000126ac) clock_digital_separator_pane_cp10_g

0xcb69,	// (0x0000f706) uniindi_top_pane_g3

0x5bc7,	// (0x00008764) uniindi_top_pane_g4

0x6393,	// (0x00008f30) vkb2_row_keypad_pane_ParamLimits

0x6393,	// (0x00008f30) vkb2_row_keypad_pane

0x668e,	// (0x0000922b) vkb2_cell_t_keypad_pane_ParamLimits

0x668e,	// (0x0000922b) vkb2_cell_t_keypad_pane

0x669e,	// (0x0000923b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x669e,	// (0x0000923b) vkb2_cell_t_keypad_pane_cp08

0x66b1,	// (0x0000924e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x66b1,	// (0x0000924e) vkb2_cell_t_keypad_pane_cp09

0x66c5,	// (0x00009262) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x66c5,	// (0x00009262) vkb2_cell_t_keypad_pane_cp01

0x66d6,	// (0x00009273) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x66d6,	// (0x00009273) vkb2_cell_t_keypad_pane_cp02

0x66e7,	// (0x00009284) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x66e7,	// (0x00009284) vkb2_cell_t_keypad_pane_cp03

0x66f8,	// (0x00009295) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x66f8,	// (0x00009295) vkb2_cell_t_keypad_pane_cp04

0x6709,	// (0x000092a6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6709,	// (0x000092a6) vkb2_cell_t_keypad_pane_cp05

0x671a,	// (0x000092b7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x671a,	// (0x000092b7) vkb2_cell_t_keypad_pane_cp06

0x672b,	// (0x000092c8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x672b,	// (0x000092c8) vkb2_cell_t_keypad_pane_cp07

0x673c,	// (0x000092d9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x673c,	// (0x000092d9) vkb2_cell_t_keypad_pane_cp10

0x3f23,	// (0x00006ac0) vkb2_cell_t_keypad_pane_g1

0x6751,	// (0x000092ee) vkb2_cell_t_keypad_pane_t1

0xe0e9,	// (0x00010c86) popup_grid_graphic2_window

0xd35e,	// (0x0000fefb) aid_size_cell_graphic2_ParamLimits

0xd35e,	// (0x0000fefb) aid_size_cell_graphic2

0xd39c,	// (0x0000ff39) bg_popup_window_pane_cp21_ParamLimits

0xd39c,	// (0x0000ff39) bg_popup_window_pane_cp21

0xd3aa,	// (0x0000ff47) graphic2_pages_pane_ParamLimits

0xd3aa,	// (0x0000ff47) graphic2_pages_pane

0xd400,	// (0x0000ff9d) grid_graphic2_control_pane_ParamLimits

0xd400,	// (0x0000ff9d) grid_graphic2_control_pane

0xd448,	// (0x0000ffe5) grid_graphic2_pane_ParamLimits

0xd448,	// (0x0000ffe5) grid_graphic2_pane

0xd4cf,	// (0x0001006c) cell_graphic2_pane

0xe0e9,	// (0x00010c86) main_comp_mode_pane

0x52f3,	// (0x00007e90) list_ai3_gene_pane_ParamLimits

0xc8d7,	// (0x0000f474) bg_popup_window_pane_cp19_ParamLimits

0x5730,	// (0x000082cd) bg_touch_area_indi_pane_ParamLimits

0x5730,	// (0x000082cd) bg_touch_area_indi_pane

0x5746,	// (0x000082e3) bg_touch_area_indi_pane_cp01_ParamLimits

0x5746,	// (0x000082e3) bg_touch_area_indi_pane_cp01

0x575c,	// (0x000082f9) bg_touch_area_indi_pane_cp02_ParamLimits

0x575c,	// (0x000082f9) bg_touch_area_indi_pane_cp02

0x5772,	// (0x0000830f) bg_touch_area_indi_pane_cp03_ParamLimits

0x5772,	// (0x0000830f) bg_touch_area_indi_pane_cp03

0x578c,	// (0x00008329) popup_slider_window_g1_ParamLimits

0x57a8,	// (0x00008345) popup_slider_window_g2_ParamLimits

0x57c4,	// (0x00008361) popup_slider_window_g3_ParamLimits

0xfcaa,	// (0x00012847) popup_slider_window_g_ParamLimits

0x582a,	// (0x000083c7) popup_slider_window_t1_ParamLimits

0x589e,	// (0x0000843b) small_volume_slider_vertical_pane_ParamLimits

0xd4cf,	// (0x0001006c) cell_graphic2_pane_ParamLimits

0xd52a,	// (0x000100c7) bg_button_pane_cp10_ParamLimits

0xd52a,	// (0x000100c7) bg_button_pane_cp10

0xd53d,	// (0x000100da) bg_button_pane_cp11_ParamLimits

0xd53d,	// (0x000100da) bg_button_pane_cp11

0xd550,	// (0x000100ed) graphic2_pages_pane_g1_ParamLimits

0xd550,	// (0x000100ed) graphic2_pages_pane_g1

0xd56b,	// (0x00010108) graphic2_pages_pane_g2_ParamLimits

0xd56b,	// (0x00010108) graphic2_pages_pane_g2

0x0001,

0xfd6e,	// (0x0001290b) graphic2_pages_pane_g_ParamLimits

0xfd6e,	// (0x0001290b) graphic2_pages_pane_g

0xd583,	// (0x00010120) graphic2_pages_pane_t1_ParamLimits

0xd583,	// (0x00010120) graphic2_pages_pane_t1

0xd59b,	// (0x00010138) cell_graphic2_control_pane_ParamLimits

0xd59b,	// (0x00010138) cell_graphic2_control_pane

0xd5cd,	// (0x0001016a) cell_graphic2_pane_g1_ParamLimits

0xd5cd,	// (0x0001016a) cell_graphic2_pane_g1

0x3d4b,	// (0x000068e8) cell_graphic2_pane_g2_ParamLimits

0x3d4b,	// (0x000068e8) cell_graphic2_pane_g2

0xd5da,	// (0x00010177) cell_graphic2_pane_g3_ParamLimits

0xd5da,	// (0x00010177) cell_graphic2_pane_g3

0x3d58,	// (0x000068f5) cell_graphic2_pane_g4_ParamLimits

0x3d58,	// (0x000068f5) cell_graphic2_pane_g4

0xd5e7,	// (0x00010184) cell_graphic2_pane_g5_ParamLimits

0xd5e7,	// (0x00010184) cell_graphic2_pane_g5

0x0004,

0xfd73,	// (0x00012910) cell_graphic2_pane_g_ParamLimits

0xfd73,	// (0x00012910) cell_graphic2_pane_g

0xd604,	// (0x000101a1) cell_graphic2_pane_t1_ParamLimits

0xd604,	// (0x000101a1) cell_graphic2_pane_t1

0x1ac1,	// (0x0000465e) grid_highlight_pane_cp11_ParamLimits

0x1ac1,	// (0x0000465e) grid_highlight_pane_cp11

0xe2dd,	// (0x00010e7a) bg_button_pane_cp05

0xd64e,	// (0x000101eb) cell_graphic2_control_pane_g1

0x3a9f,	// (0x0000663c) bg_touch_area_indi_pane_g1

0x6a2a,	// (0x000095c7) aid_cmod_rocker_key_size

0x6a34,	// (0x000095d1) aid_cmode_itu_key_size

0x6a3e,	// (0x000095db) main_cmode_video_pane

0x6a48,	// (0x000095e5) main_comp_mode_itu_pane

0x6a54,	// (0x000095f1) main_comp_mode_rocker_pane

0x6a60,	// (0x000095fd) cell_cmode_rocker_pane_ParamLimits

0x6a60,	// (0x000095fd) cell_cmode_rocker_pane

0x6a72,	// (0x0000960f) cell_cmode_itu_pane_ParamLimits

0x6a72,	// (0x0000960f) cell_cmode_itu_pane

0xe5bb,	// (0x00011158) bg_button_pane_cp06_ParamLimits

0xe5bb,	// (0x00011158) bg_button_pane_cp06

0x3f23,	// (0x00006ac0) cell_cmode_rocker_pane_g1_ParamLimits

0x3f23,	// (0x00006ac0) cell_cmode_rocker_pane_g1

0x5a13,	// (0x000085b0) cell_cmode_rocker_pane_g2_ParamLimits

0x5a13,	// (0x000085b0) cell_cmode_rocker_pane_g2

0x0001,

0xfd83,	// (0x00012920) cell_cmode_rocker_pane_g_ParamLimits

0xfd83,	// (0x00012920) cell_cmode_rocker_pane_g

0xe0e9,	// (0x00010c86) bg_button_pane_cp07

0x6a87,	// (0x00009624) cell_cmode_itu_pane_g1

0x6a90,	// (0x0000962d) cell_cmode_itu_pane_t1

0x6a9e,	// (0x0000963b) cell_cmode_itu_pane_t2

0x0001,

0xfd88,	// (0x00012925) cell_cmode_itu_pane_t

0x5c39,	// (0x000087d6) aid_touch_ctrl_left

0x5c41,	// (0x000087de) aid_touch_ctrl_right

0xe0e9,	// (0x00010c86) compa_mode_pane

0xd674,	// (0x00010211) aid_cmod_rocker_key_size_cp

0xd67e,	// (0x0001021b) aid_cmode_itu_key_size_cp

0x6ac0,	// (0x0000965d) compa_mode_pane_g1

0x6ac8,	// (0x00009665) compa_mode_pane_g2

0x6ad0,	// (0x0000966d) compa_mode_pane_g3

0x0002,

0xfd8d,	// (0x0001292a) compa_mode_pane_g

0xd688,	// (0x00010225) main_comp_mode_itu_pane_cp

0xd690,	// (0x0001022d) main_comp_mode_rocker_pane_cp

0xd698,	// (0x00010235) cell_cmode_itu_pane_cp_ParamLimits

0xd698,	// (0x00010235) cell_cmode_itu_pane_cp

0xd6ad,	// (0x0001024a) cell_cmode_rocker_pane_cp_ParamLimits

0xd6ad,	// (0x0001024a) cell_cmode_rocker_pane_cp

0xe5bb,	// (0x00011158) bg_button_pane_cp06_cp_ParamLimits

0xe5bb,	// (0x00011158) bg_button_pane_cp06_cp

0x3f23,	// (0x00006ac0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3f23,	// (0x00006ac0) cell_cmode_rocker_pane_g1_cp

0x3a9f,	// (0x0000663c) cell_cmode_rocker_pane_g2_cp

0xe0e9,	// (0x00010c86) bg_button_pane_cp07_cp

0xd6bf,	// (0x0001025c) cell_cmode_itu_pane_g1_cp

0xd6c8,	// (0x00010265) cell_cmode_itu_pane_t1_cp

0xd6c8,	// (0x00010265) cell_cmode_itu_pane_t2_cp

0xb91f,	// (0x0000e4bc) settings_code_pane_cp2

0xe199,	// (0x00010d36) bg_popup_window_pane_cp3_ParamLimits

0xe3f6,	// (0x00010f93) heading_pane_cp3_ParamLimits

0xe405,	// (0x00010fa2) listscroll_popup_graphic_pane_ParamLimits

0x3b09,	// (0x000066a6) fep_hwr_aid_pane_ParamLimits

0x5919,	// (0x000084b6) aid_touch_sctrl_top_ParamLimits

0x5926,	// (0x000084c3) sctrl_sk_top_pane_g1_ParamLimits

0x3f23,	// (0x00006ac0) sctrl_sk_top_pane_g2_ParamLimits

0xfcc3,	// (0x00012860) sctrl_sk_top_pane_g_ParamLimits

0x5933,	// (0x000084d0) sctrl_sk_top_pane_t1_ParamLimits

0x5919,	// (0x000084b6) aid_touch_sctrl_bottom_ParamLimits

0x5933,	// (0x000084d0) sctrl_sk_bottom_pane_t1_ParamLimits

0xcb35,	// (0x0000f6d2) aid_area_touch_clock

0xd12a,	// (0x0000fcc7) aid_vkb2_area_top_pane_cell_ParamLimits

0xd12a,	// (0x0000fcc7) aid_vkb2_area_top_pane_cell

0xd1d9,	// (0x0000fd76) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd1d9,	// (0x0000fd76) aid_vkb2_area_bottom_pane_cell

0x64d2,	// (0x0000906f) popup_char_count_window

0x6b26,	// (0x000096c3) popup_char_count_window_g1

0x6b2f,	// (0x000096cc) popup_char_count_window_g2

0x6b38,	// (0x000096d5) popup_char_count_window_g3

0x0002,

0xfd94,	// (0x00012931) popup_char_count_window_g

0x6b41,	// (0x000096de) popup_char_count_window_t1

0x6129,	// (0x00008cc6) popup_fep_char_preview_window_ParamLimits

0x6129,	// (0x00008cc6) popup_fep_char_preview_window

0xd14a,	// (0x0000fce7) vkb2_top_candi_pane_ParamLimits

0xd14a,	// (0x0000fce7) vkb2_top_candi_pane

0xd6d6,	// (0x00010273) cell_vkb2_top_candi_pane_ParamLimits

0xd6d6,	// (0x00010273) cell_vkb2_top_candi_pane

0x130c,	// (0x00003ea9) bg_popup_fep_char_preview_window_ParamLimits

0x130c,	// (0x00003ea9) bg_popup_fep_char_preview_window

0x6b99,	// (0x00009736) popup_fep_char_preview_window_t1_ParamLimits

0x6b99,	// (0x00009736) popup_fep_char_preview_window_t1

0x6bd3,	// (0x00009770) bg_popup_fep_char_preview_window_g1

0x6bdb,	// (0x00009778) bg_popup_fep_char_preview_window_g2

0x6be3,	// (0x00009780) bg_popup_fep_char_preview_window_g3

0x6beb,	// (0x00009788) bg_popup_fep_char_preview_window_g4

0x6bf3,	// (0x00009790) bg_popup_fep_char_preview_window_g5

0x6bfb,	// (0x00009798) bg_popup_fep_char_preview_window_g6

0x6c03,	// (0x000097a0) bg_popup_fep_char_preview_window_g7

0x6c0b,	// (0x000097a8) bg_popup_fep_char_preview_window_g8

0x6c13,	// (0x000097b0) bg_popup_fep_char_preview_window_g9

0x0009,

0xfd9b,	// (0x00012938) bg_popup_fep_char_preview_window_g

0x3f23,	// (0x00006ac0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x3f23,	// (0x00006ac0) cell_vkb2_top_candi_pane_g1

0x428e,	// (0x00006e2b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x428e,	// (0x00006e2b) cell_vkb2_top_candi_pane_g2

0x42af,	// (0x00006e4c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x42af,	// (0x00006e4c) cell_vkb2_top_candi_pane_g3

0x6c23,	// (0x000097c0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6c23,	// (0x000097c0) cell_vkb2_top_candi_pane_g4

0x6c44,	// (0x000097e1) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6c44,	// (0x000097e1) cell_vkb2_top_candi_pane_g5

0x5a13,	// (0x000085b0) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5a13,	// (0x000085b0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb0,	// (0x0001294d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb0,	// (0x0001294d) cell_vkb2_top_candi_pane_g

0x6c65,	// (0x00009802) cell_vkb2_top_candi_pane_t1

0xb73f,	// (0x0000e2dc) aid_size_touch_slider_mark_ParamLimits

0xb73f,	// (0x0000e2dc) aid_size_touch_slider_mark

0xd3e6,	// (0x0000ff83) grid_graphic2_catg_pane_ParamLimits

0xd3e6,	// (0x0000ff83) grid_graphic2_catg_pane

0xd4a2,	// (0x0001003f) popup_grid_graphic2_window_t1_ParamLimits

0xd4a2,	// (0x0001003f) popup_grid_graphic2_window_t1

0xd4b8,	// (0x00010055) popup_grid_graphic2_window_t2_ParamLimits

0xd4b8,	// (0x00010055) popup_grid_graphic2_window_t2

0x0001,

0xfd69,	// (0x00012906) popup_grid_graphic2_window_t_ParamLimits

0xfd69,	// (0x00012906) popup_grid_graphic2_window_t

0xe2dd,	// (0x00010e7a) bg_button_pane_cp05_ParamLimits

0xd64e,	// (0x000101eb) cell_graphic2_control_pane_g1_ParamLimits

0xd73e,	// (0x000102db) cell_graphic2_catg_pane_ParamLimits

0xd73e,	// (0x000102db) cell_graphic2_catg_pane

0xe0e9,	// (0x00010c86) bg_button_pane_cp12

0xd750,	// (0x000102ed) cell_graphic2_catg_pane_g1

0x5b4d,	// (0x000086ea) cell_tb_ext_pane_t1_ParamLimits

0x6570,	// (0x0000910d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6570,	// (0x0000910d) vkb2_top_cell_right_narrow_pane

0x6588,	// (0x00009125) vkb2_top_cell_right_wide_pane_ParamLimits

0x6588,	// (0x00009125) vkb2_top_cell_right_wide_pane

0x3afb,	// (0x00006698) bg_vkb2_func_pane_ParamLimits

0x3afb,	// (0x00006698) bg_vkb2_func_pane

0x65f9,	// (0x00009196) vkb2_top_cell_left_pane_g1_ParamLimits

0x3afb,	// (0x00006698) bg_vkb2_fuc_pane_cp03_ParamLimits

0x3afb,	// (0x00006698) bg_vkb2_fuc_pane_cp03

0x666e,	// (0x0000920b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x0a99,	// (0x00003636) bg_vkb2_func_pane_g1

0x0aa1,	// (0x0000363e) bg_vkb2_func_pane_g2

0x0ab1,	// (0x0000364e) bg_vkb2_func_pane_g3

0x0aa9,	// (0x00003646) bg_vkb2_func_pane_g4

0x0ab9,	// (0x00003656) bg_vkb2_func_pane_g5

0x0ac1,	// (0x0000365e) bg_vkb2_func_pane_g6

0x0ac9,	// (0x00003666) bg_vkb2_func_pane_g7

0x0ad1,	// (0x0000366e) bg_vkb2_func_pane_g8

0x0a91,	// (0x0000362e) bg_vkb2_func_pane_g9

0x0008,

0xfdbd,	// (0x0001295a) bg_vkb2_func_pane_g

0x3afb,	// (0x00006698) bg_vkb2_fuc_pane_cp01_ParamLimits

0x3afb,	// (0x00006698) bg_vkb2_fuc_pane_cp01

0x65f9,	// (0x00009196) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x65f9,	// (0x00009196) vkb2_top_cell_right_wide_pane_g1

0x3afb,	// (0x00006698) bg_vkb2_fuc_pane_cp02_ParamLimits

0x3afb,	// (0x00006698) bg_vkb2_fuc_pane_cp02

0x6c9f,	// (0x0000983c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6c9f,	// (0x0000983c) vkb2_top_cell_right_narrow_pane_g1

0xc819,	// (0x0000f3b6) aid_touch_area_decrease_ParamLimits

0xc819,	// (0x0000f3b6) aid_touch_area_decrease

0xc853,	// (0x0000f3f0) aid_touch_area_increase_ParamLimits

0xc853,	// (0x0000f3f0) aid_touch_area_increase

0xc87b,	// (0x0000f418) aid_touch_area_mute_ParamLimits

0xc87b,	// (0x0000f418) aid_touch_area_mute

0xc8a3,	// (0x0000f440) aid_touch_area_slider_ParamLimits

0xc8a3,	// (0x0000f440) aid_touch_area_slider

0xc8e3,	// (0x0000f480) popup_slider_window_g4_ParamLimits

0xc8e3,	// (0x0000f480) popup_slider_window_g4

0xc8fd,	// (0x0000f49a) popup_slider_window_g5_ParamLimits

0xc8fd,	// (0x0000f49a) popup_slider_window_g5

0xc923,	// (0x0000f4c0) popup_slider_window_g6_ParamLimits

0xc923,	// (0x0000f4c0) popup_slider_window_g6

0x5858,	// (0x000083f5) popup_slider_window_t2_ParamLimits

0x5858,	// (0x000083f5) popup_slider_window_t2

0x0001,

0xfcb7,	// (0x00012854) popup_slider_window_t_ParamLimits

0xfcb7,	// (0x00012854) popup_slider_window_t

0xc939,	// (0x0000f4d6) slider_pane_ParamLimits

0xc939,	// (0x0000f4d6) slider_pane

0x6cbf,	// (0x0000985c) slider_pane_g1_ParamLimits

0x6cbf,	// (0x0000985c) slider_pane_g1

0x6cd3,	// (0x00009870) slider_pane_g2_ParamLimits

0x6cd3,	// (0x00009870) slider_pane_g2

0x6ce9,	// (0x00009886) slider_pane_g3_ParamLimits

0x6ce9,	// (0x00009886) slider_pane_g3

0x0003,

0xfdd0,	// (0x0001296d) slider_pane_g_ParamLimits

0xfdd0,	// (0x0001296d) slider_pane_g

0xaaa9,	// (0x0000d646) popup_tb_float_extension_window_ParamLimits

0xaaa9,	// (0x0000d646) popup_tb_float_extension_window

0x6d15,	// (0x000098b2) aid_size_cell_tb_float_ext

0xe0e9,	// (0x00010c86) bg_popup_sub_window_cp28

0xd759,	// (0x000102f6) grid_tb_float_ext_pane

0xd763,	// (0x00010300) cell_tb_float_ext_pane_ParamLimits

0xd763,	// (0x00010300) cell_tb_float_ext_pane

0xd77d,	// (0x0001031a) cell_tb_float_ext_pane_g1

0xd786,	// (0x00010323) grid_highlight_pane_cp12

0xbe81,	// (0x0000ea1e) cell_last_hwr_side_pane_ParamLimits

0xbe81,	// (0x0000ea1e) cell_last_hwr_side_pane

0x3a9f,	// (0x0000663c) cell_last_hwr_side_pane_g1

0x6d57,	// (0x000098f4) cell_last_hwr_side_pane_g2

0x0001,

0xfdd9,	// (0x00012976) cell_last_hwr_side_pane_g

0xd2b6,	// (0x0000fe53) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd2b6,	// (0x0000fe53) vkb2_area_bottom_space_btn_pane

0x3f23,	// (0x00006ac0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6751,	// (0x000092ee) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6c65,	// (0x00009802) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6d60,	// (0x000098fd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6d60,	// (0x000098fd) vkb2_area_bottom_space_btn_pane_g1

0x6d9a,	// (0x00009937) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6d9a,	// (0x00009937) vkb2_area_bottom_space_btn_pane_g2

0x6dd0,	// (0x0000996d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6dd0,	// (0x0000996d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdde,	// (0x0001297b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdde,	// (0x0001297b) vkb2_area_bottom_space_btn_pane_g

0x3bbe,	// (0x0000675b) cel_fep_hwr_func_pane_ParamLimits

0x3bbe,	// (0x0000675b) cel_fep_hwr_func_pane

0xbe56,	// (0x0000e9f3) cell_hwr_side_button_pane_ParamLimits

0xbe56,	// (0x0000e9f3) cell_hwr_side_button_pane

0xcb35,	// (0x0000f6d2) aid_area_touch_clock_ParamLimits

0xe2dd,	// (0x00010e7a) bg_uniindi_top_pane_ParamLimits

0xcb47,	// (0x0000f6e4) uniindi_top_pane_g1_ParamLimits

0xcb5d,	// (0x0000f6fa) uniindi_top_pane_g2_ParamLimits

0xcb69,	// (0x0000f706) uniindi_top_pane_g3_ParamLimits

0x5bc7,	// (0x00008764) uniindi_top_pane_g4_ParamLimits

0xfcef,	// (0x0001288c) uniindi_top_pane_g_ParamLimits

0xcb7a,	// (0x0000f717) uniindi_top_pane_t1_ParamLimits

0xe2dd,	// (0x00010e7a) bg_vkb2_func_pane_cp01_ParamLimits

0xe2dd,	// (0x00010e7a) bg_vkb2_func_pane_cp01

0x6e1a,	// (0x000099b7) cel_fep_hwr_func_pane_g1_ParamLimits

0x6e1a,	// (0x000099b7) cel_fep_hwr_func_pane_g1

0xe2dd,	// (0x00010e7a) bg_vkb2_func_pane_cp02_ParamLimits

0xe2dd,	// (0x00010e7a) bg_vkb2_func_pane_cp02

0x6e1a,	// (0x000099b7) cell_hwr_side_button_pane_g1_ParamLimits

0x6e1a,	// (0x000099b7) cell_hwr_side_button_pane_g1

0x0865,	// (0x00003402) status_pane_g4_ParamLimits

0x0865,	// (0x00003402) status_pane_g4

0x087f,	// (0x0000341c) status_pane_t1

0x37da,	// (0x00006377) form2_midp_gauge_slider_cont_pane

0x37e2,	// (0x0000637f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd6f,	// (0x0000e90c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd81,	// (0x0000e91e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac2,	// (0x0001265f) form2_midp_gauge_slider_pane_t_ParamLimits

0x3818,	// (0x000063b5) form2_midp_slider_pane_ParamLimits

0x60f1,	// (0x00008c8e) aid_size_cell_func_vkb2_ParamLimits

0x60f1,	// (0x00008c8e) aid_size_cell_func_vkb2

0x6d01,	// (0x0000989e) slider_pane_g4_ParamLimits

0x6d01,	// (0x0000989e) slider_pane_g4

0xd78f,	// (0x0001032c) form2_midp_gauge_slider_pane_t2_cp01

0xd79d,	// (0x0001033a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd79d,	// (0x0001033a) form2_midp_gauge_slider_pane_t3_cp01

0x6e53,	// (0x000099f0) form2_midp_slider_pane_cp01

0xe0e9,	// (0x00010c86) navi_smil_pane

0x6e87,	// (0x00009a24) navi_smil_pane_g1

0x6e8f,	// (0x00009a2c) navi_smil_pane_t1

0x6e5c,	// (0x000099f9) form2_midp_slider_pane_g1

0x6e65,	// (0x00009a02) form2_midp_slider_pane_g2

0x6e6d,	// (0x00009a0a) form2_midp_slider_pane_g3

0x6e5c,	// (0x000099f9) form2_midp_slider_pane_g4

0xd7ba,	// (0x00010357) form2_midp_slider_pane_g5

0x0004,

0xfde7,	// (0x00012984) form2_midp_slider_pane_g

0x6e0a,	// (0x000099a7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6e0a,	// (0x000099a7) vkb2_area_bottom_space_btn_pane_g4

0xace1,	// (0x0000d87e) lc0_navi_pane_ParamLimits

0xace1,	// (0x0000d87e) lc0_navi_pane

0xad4b,	// (0x0000d8e8) lc0_stat_indi_pane_ParamLimits

0xad4b,	// (0x0000d8e8) lc0_stat_indi_pane

0xad60,	// (0x0000d8fd) ls0_title_pane_ParamLimits

0xad60,	// (0x0000d8fd) ls0_title_pane

0xe5bb,	// (0x00011158) bg_popup_sub_pane_cp14_ParamLimits

0xcb1c,	// (0x0000f6b9) list_uniindi_pane_ParamLimits

0xcb28,	// (0x0000f6c5) uniindi_top_pane_ParamLimits

0x5c11,	// (0x000087ae) list_single_uniindi_pane_g1_ParamLimits

0x5c24,	// (0x000087c1) list_single_uniindi_pane_t1_ParamLimits

0xd7c5,	// (0x00010362) lc0_stat_clock_pane_ParamLimits

0xd7c5,	// (0x00010362) lc0_stat_clock_pane

0xd7d5,	// (0x00010372) lc0_stat_indi_pane_g1_ParamLimits

0xd7d5,	// (0x00010372) lc0_stat_indi_pane_g1

0xd7e2,	// (0x0001037f) lc0_stat_indi_pane_g2_ParamLimits

0xd7e2,	// (0x0001037f) lc0_stat_indi_pane_g2

0x0001,

0xfdf2,	// (0x0001298f) lc0_stat_indi_pane_g_ParamLimits

0xfdf2,	// (0x0001298f) lc0_stat_indi_pane_g

0xd7ef,	// (0x0001038c) lc0_uni_indicator_pane_ParamLimits

0xd7ef,	// (0x0001038c) lc0_uni_indicator_pane

0xd7ff,	// (0x0001039c) ls0_title_pane_g1_ParamLimits

0xd7ff,	// (0x0001039c) ls0_title_pane_g1

0xd813,	// (0x000103b0) ls0_title_pane_t1_ParamLimits

0xd813,	// (0x000103b0) ls0_title_pane_t1

0xd841,	// (0x000103de) lc0_uni_indicator_pane_g1_ParamLimits

0xd841,	// (0x000103de) lc0_uni_indicator_pane_g1

0x6f2f,	// (0x00009acc) lc0_stat_clock_pane_t1

0xe0e9,	// (0x00010c86) main_ai5_pane

0x6f3d,	// (0x00009ada) ai5_sk_pane_ParamLimits

0x6f3d,	// (0x00009ada) ai5_sk_pane

0xd86c,	// (0x00010409) cell_ai5_widget_pane_ParamLimits

0xd86c,	// (0x00010409) cell_ai5_widget_pane

0x7013,	// (0x00009bb0) aid_size_cell_widget_grid

0x7021,	// (0x00009bbe) bg_ai5_widget_pane_ParamLimits

0x7021,	// (0x00009bbe) bg_ai5_widget_pane

0x709d,	// (0x00009c3a) cell_ai5_widget_pane_g2

0x70b1,	// (0x00009c4e) cell_ai5_widget_pane_g3

0x70cb,	// (0x00009c68) cell_ai5_widget_pane_g4

0x70db,	// (0x00009c78) cell_ai5_widget_pane_g5

0x70eb,	// (0x00009c88) cell_ai5_widget_pane_g6

0x70f7,	// (0x00009c94) cell_ai5_widget_pane_g7

0x7163,	// (0x00009d00) cell_ai5_widget_pane_t1_ParamLimits

0x7163,	// (0x00009d00) cell_ai5_widget_pane_t1

0x7180,	// (0x00009d1d) cell_ai5_widget_pane_t2_ParamLimits

0x7180,	// (0x00009d1d) cell_ai5_widget_pane_t2

0x7198,	// (0x00009d35) cell_ai5_widget_pane_t3_ParamLimits

0x7198,	// (0x00009d35) cell_ai5_widget_pane_t3

0x71b0,	// (0x00009d4d) cell_ai5_widget_pane_t4_ParamLimits

0x71b0,	// (0x00009d4d) cell_ai5_widget_pane_t4

0xd8d8,	// (0x00010475) cell_ai5_widget_pane_t5_ParamLimits

0xd8d8,	// (0x00010475) cell_ai5_widget_pane_t5

0x71f5,	// (0x00009d92) cell_ai5_widget_pane_t6_ParamLimits

0x71f5,	// (0x00009d92) cell_ai5_widget_pane_t6

0x7207,	// (0x00009da4) cell_ai5_widget_pane_t7_ParamLimits

0x7207,	// (0x00009da4) cell_ai5_widget_pane_t7

0x7226,	// (0x00009dc3) cell_ai5_widget_pane_t8_ParamLimits

0x7226,	// (0x00009dc3) cell_ai5_widget_pane_t8

0x000b,

0xfe12,	// (0x000129af) cell_ai5_widget_pane_t_ParamLimits

0xfe12,	// (0x000129af) cell_ai5_widget_pane_t

0x72aa,	// (0x00009e47) grid_ai5_widget_pane

0xe5bb,	// (0x00011158) highlight_cell_ai5_widget_pane_ParamLimits

0xe5bb,	// (0x00011158) highlight_cell_ai5_widget_pane

0xd8f8,	// (0x00010495) ai5_sk_left_pane

0xd902,	// (0x0001049f) ai5_sk_middle_pane

0xd90c,	// (0x000104a9) ai5_sk_right_pane

0x72d6,	// (0x00009e73) bg_ai5_widget_pane_g1_ParamLimits

0x72d6,	// (0x00009e73) bg_ai5_widget_pane_g1

0x72e2,	// (0x00009e7f) bg_ai5_widget_pane_g2_ParamLimits

0x72e2,	// (0x00009e7f) bg_ai5_widget_pane_g2

0x72ee,	// (0x00009e8b) bg_ai5_widget_pane_g3_ParamLimits

0x72ee,	// (0x00009e8b) bg_ai5_widget_pane_g3

0x72fa,	// (0x00009e97) bg_ai5_widget_pane_g4_ParamLimits

0x72fa,	// (0x00009e97) bg_ai5_widget_pane_g4

0x7306,	// (0x00009ea3) bg_ai5_widget_pane_g5_ParamLimits

0x7306,	// (0x00009ea3) bg_ai5_widget_pane_g5

0x7312,	// (0x00009eaf) bg_ai5_widget_pane_g6_ParamLimits

0x7312,	// (0x00009eaf) bg_ai5_widget_pane_g6

0x731e,	// (0x00009ebb) bg_ai5_widget_pane_g7_ParamLimits

0x731e,	// (0x00009ebb) bg_ai5_widget_pane_g7

0x732a,	// (0x00009ec7) bg_ai5_widget_pane_g8_ParamLimits

0x732a,	// (0x00009ec7) bg_ai5_widget_pane_g8

0x7336,	// (0x00009ed3) bg_ai5_widget_pane_g9_ParamLimits

0x7336,	// (0x00009ed3) bg_ai5_widget_pane_g9

0x0008,

0xfe2b,	// (0x000129c8) bg_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x000129c8) bg_ai5_widget_pane_g

0x7368,	// (0x00009f05) cell_shortcut_ai5_widget_pane_ParamLimits

0x7368,	// (0x00009f05) cell_shortcut_ai5_widget_pane

0xf27f,	// (0x00011e1c) bg_cell_shortcut_ai5_widget_pane

0x7379,	// (0x00009f16) cell_grid_ai5_widget_pane_g1

0xf27f,	// (0x00011e1c) highlight_cell_shortcut_ai5_widget_pane

0x0aa1,	// (0x0000363e) ai5_sk_left_pane_g1

0x7382,	// (0x00009f1f) ai5_sk_left_pane_g2

0x738a,	// (0x00009f27) ai5_sk_left_pane_g3

0x7392,	// (0x00009f2f) ai5_sk_left_pane_g4

0x0003,

0xfe3e,	// (0x000129db) ai5_sk_left_pane_g

0x739a,	// (0x00009f37) ai5_sk_left_pane_t1

0x0a99,	// (0x00003636) ai5_sk_right_pane_g1

0x73a8,	// (0x00009f45) ai5_sk_right_pane_g2

0x73b0,	// (0x00009f4d) ai5_sk_right_pane_g3

0x73b8,	// (0x00009f55) ai5_sk_right_pane_g4

0x0003,

0xfe47,	// (0x000129e4) ai5_sk_right_pane_g

0x73c0,	// (0x00009f5d) ai5_sk_right_pane_t1

0x0a99,	// (0x00003636) ai5_sk_middle_pane_g1

0x0aa1,	// (0x0000363e) ai5_sk_middle_pane_g2

0x0ab9,	// (0x00003656) ai5_sk_middle_pane_g3

0x73b0,	// (0x00009f4d) ai5_sk_middle_pane_g4

0x738a,	// (0x00009f27) ai5_sk_middle_pane_g5

0x73ce,	// (0x00009f6b) ai5_sk_middle_pane_g6

0xd916,	// (0x000104b3) ai5_sk_middle_pane_g7

0x0006,

0xfe50,	// (0x000129ed) ai5_sk_middle_pane_g

0xabcd,	// (0x0000d76a) aid_touch_area_size_lc0_ParamLimits

0xabcd,	// (0x0000d76a) aid_touch_area_size_lc0

0x42d0,	// (0x00006e6d) cell_hwr_candidate_pane_t1_ParamLimits

0x0536,	// (0x000030d3) aid_touch_navi_pane

0xae59,	// (0x0000d9f6) status_dt_navi_pane_ParamLimits

0xae59,	// (0x0000d9f6) status_dt_navi_pane

0xae71,	// (0x0000da0e) status_dt_sta_pane_ParamLimits

0xae71,	// (0x0000da0e) status_dt_sta_pane

0xd91e,	// (0x000104bb) dt_sta_controll_pane

0xd92b,	// (0x000104c8) dt_sta_indi_pane

0xd938,	// (0x000104d5) dt_sta_title_pane

0xe2dd,	// (0x00010e7a) bg_dt_sta_indi_pane_ParamLimits

0xe2dd,	// (0x00010e7a) bg_dt_sta_indi_pane

0xd94a,	// (0x000104e7) dt_sta_battery_pane

0xd952,	// (0x000104ef) dt_sta_indi_pane_g1

0x7420,	// (0x00009fbd) dt_sta_indi_pane_g2

0x7429,	// (0x00009fc6) dt_sta_indi_pane_g3

0x0002,

0xfe5f,	// (0x000129fc) dt_sta_indi_pane_g

0x7432,	// (0x00009fcf) dt_sta_signal_pane

0xe5bb,	// (0x00011158) bg_dt_sta_title_pane_ParamLimits

0xe5bb,	// (0x00011158) bg_dt_sta_title_pane

0x1c32,	// (0x000047cf) dt_sta_title_pane_g1

0xd95b,	// (0x000104f8) dt_sta_title_pane_t1_ParamLimits

0xd95b,	// (0x000104f8) dt_sta_title_pane_t1

0xe0e9,	// (0x00010c86) bg_dt_sta_control_pane

0xd970,	// (0x0001050d) dt_sta_controll_pane_g1

0xd979,	// (0x00010516) bg_dt_sta_title_pane_g1

0xd982,	// (0x0001051f) bg_dt_sta_title_pane_g2

0xd98b,	// (0x00010528) bg_dt_sta_title_pane_g3

0x0002,

0xfe66,	// (0x00012a03) bg_dt_sta_title_pane_g

0x3a9f,	// (0x0000663c) bg_dt_sta_indi_pane_g1

0x7474,	// (0x0000a011) dt_sta_signal_pane_g1

0x747c,	// (0x0000a019) dt_sta_signal_pane_g2

0x0001,

0xfe6d,	// (0x00012a0a) dt_sta_signal_pane_g

0x7484,	// (0x0000a021) dt_sta_battery_pane_g1

0x748d,	// (0x0000a02a) dt_sta_battery_pane_t1

0x3a9f,	// (0x0000663c) bg_dt_sta_control_pane_g1

0xed4f,	// (0x000118ec) fep_china_uni_eep_pane

0xed57,	// (0x000118f4) fep_china_uni_entry_pane_ParamLimits

0xed67,	// (0x00011904) popup_fep_china_uni_window_g1_ParamLimits

0xed77,	// (0x00011914) popup_fep_china_uni_window_g2_ParamLimits

0xed77,	// (0x00011914) popup_fep_china_uni_window_g2

0x0001,

0xf6e4,	// (0x00012281) popup_fep_china_uni_window_g_ParamLimits

0xf6e4,	// (0x00012281) popup_fep_china_uni_window_g

0x749c,	// (0x0000a039) fep_china_uni_eep_pane_g1

0x74a4,	// (0x0000a041) fep_china_uni_eep_pane_t1

0x6e7e,	// (0x00009a1b) aid_touch_area_size_smil_player

0x068c,	// (0x00003229) lc0_clock_pane

0x0873,	// (0x00003410) status_pane_g5_ParamLimits

0x0873,	// (0x00003410) status_pane_g5

0xa605,	// (0x0000d1a2) popup_keymap_window

0x0831,	// (0x000033ce) status_icon_pane

0x70b1,	// (0x00009c4e) cell_ai5_widget_pane_g3_ParamLimits

0x70cb,	// (0x00009c68) cell_ai5_widget_pane_g4_ParamLimits

0x70db,	// (0x00009c78) cell_ai5_widget_pane_g5_ParamLimits

0x7103,	// (0x00009ca0) cell_ai5_widget_pane_g8_ParamLimits

0x7103,	// (0x00009ca0) cell_ai5_widget_pane_g8

0x7117,	// (0x00009cb4) cell_ai5_widget_pane_g9_ParamLimits

0x7117,	// (0x00009cb4) cell_ai5_widget_pane_g9

0x712b,	// (0x00009cc8) cell_ai5_widget_pane_g10_ParamLimits

0x712b,	// (0x00009cc8) cell_ai5_widget_pane_g10

0x74b3,	// (0x0000a050) status_icon_pane_g1

0xe0e9,	// (0x00010c86) bg_popup_sub_pane_cp13

0x74bb,	// (0x0000a058) popup_keymap_window_t1

0xa2c1,	// (0x0000ce5e) control_pane_g6_ParamLimits

0xa2c1,	// (0x0000ce5e) control_pane_g6

0xa2ce,	// (0x0000ce6b) control_pane_g7_ParamLimits

0xa2ce,	// (0x0000ce6b) control_pane_g7

0xa2db,	// (0x0000ce78) control_pane_g8_ParamLimits

0xa2db,	// (0x0000ce78) control_pane_g8

0xd91e,	// (0x000104bb) dt_sta_controll_pane_ParamLimits

0xd92b,	// (0x000104c8) dt_sta_indi_pane_ParamLimits

0xd938,	// (0x000104d5) dt_sta_title_pane_ParamLimits

0xe4b4,	// (0x00011051) aid_size_touch_scroll_bar_cale

0x8f82,	// (0x0000bb1f) popup_discreet_window_ParamLimits

0x8f82,	// (0x0000bb1f) popup_discreet_window

0x8fd4,	// (0x0000bb71) popup_sk_window

0x130c,	// (0x00003ea9) bg_popup_sub_pane_cp28_ParamLimits

0x130c,	// (0x00003ea9) bg_popup_sub_pane_cp28

0x74c9,	// (0x0000a066) popup_discreet_window_g1_ParamLimits

0x74c9,	// (0x0000a066) popup_discreet_window_g1

0xd994,	// (0x00010531) popup_discreet_window_t1_ParamLimits

0xd994,	// (0x00010531) popup_discreet_window_t1

0x7507,	// (0x0000a0a4) popup_discreet_window_t2_ParamLimits

0x7507,	// (0x0000a0a4) popup_discreet_window_t2

0x0002,

0xfe72,	// (0x00012a0f) popup_discreet_window_t_ParamLimits

0xfe72,	// (0x00012a0f) popup_discreet_window_t

0x7559,	// (0x0000a0f6) popup_sk_window_g1

0x7563,	// (0x0000a100) popup_sk_window_g2

0x0001,

0xfe79,	// (0x00012a16) popup_sk_window_g

0xd9b2,	// (0x0001054f) popup_sk_window_t1

0xd9c0,	// (0x0001055d) popup_sk_window_t1_copy1

0x709d,	// (0x00009c3a) cell_ai5_widget_pane_g2_ParamLimits

0x7238,	// (0x00009dd5) cell_ai5_widget_pane_t9_ParamLimits

0x7238,	// (0x00009dd5) cell_ai5_widget_pane_t9

0xe0e9,	// (0x00010c86) main_fep_fshwr2_pane

0xd9ce,	// (0x0001056b) aid_fshwr2_btn_pane

0xd9e2,	// (0x0001057f) aid_fshwr2_syb_pane

0xd9f6,	// (0x00010593) aid_fshwr2_txt_pane

0xda06,	// (0x000105a3) fshwr2_func_candi_pane

0xda26,	// (0x000105c3) fshwr2_hwr_syb_pane

0xda48,	// (0x000105e5) fshwr2_icf_pane

0xe0e9,	// (0x00010c86) fshwr2_icf_bg_pane

0x762b,	// (0x0000a1c8) fshwr2_icf_pane_t1_ParamLimits

0x762b,	// (0x0000a1c8) fshwr2_icf_pane_t1

0xec38,	// (0x000117d5) fshwr2_func_candi_pane_g1

0xda78,	// (0x00010615) fshwr2_func_candi_row_pane_ParamLimits

0xda78,	// (0x00010615) fshwr2_func_candi_row_pane

0xda9b,	// (0x00010638) cell_fshwr2_syb_pane_ParamLimits

0xda9b,	// (0x00010638) cell_fshwr2_syb_pane

0x6e1a,	// (0x000099b7) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6e1a,	// (0x000099b7) fshwr2_hwr_syb_pane_g1

0xe0e9,	// (0x00010c86) bg_popup_call_pane_cp01

0xdac1,	// (0x0001065e) fshwr2_func_candi_cell_pane_ParamLimits

0xdac1,	// (0x0001065e) fshwr2_func_candi_cell_pane

0x10f5,	// (0x00003c92) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x10f5,	// (0x00003c92) fshwr2_func_candi_cell_bg_pane

0xdb0c,	// (0x000106a9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xdb0c,	// (0x000106a9) fshwr2_func_candi_cell_pane_g1

0xdb43,	// (0x000106e0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xdb43,	// (0x000106e0) fshwr2_func_candi_cell_pane_t1

0xe0e9,	// (0x00010c86) bg_button_pane_cp08

0xf42a,	// (0x00011fc7) cell_fshwr2_syb_bg_pane

0xdb5e,	// (0x000106fb) cell_fshwr2_syb_bg_pane_g1

0xdb71,	// (0x0001070e) cell_fshwr2_syb_bg_pane_t1

0xe5bb,	// (0x00011158) main_tmo_pane

0xb5fb,	// (0x0000e198) uni_indicator_pane_g1_ParamLimits

0xb611,	// (0x0000e1ae) uni_indicator_pane_g2_ParamLimits

0xb627,	// (0x0000e1c4) uni_indicator_pane_g3_ParamLimits

0x1f9f,	// (0x00004b3c) uni_indicator_pane_g4_ParamLimits

0x1f9f,	// (0x00004b3c) uni_indicator_pane_g4

0x1fb3,	// (0x00004b50) uni_indicator_pane_g5_ParamLimits

0x1fb3,	// (0x00004b50) uni_indicator_pane_g5

0x1fb3,	// (0x00004b50) uni_indicator_pane_g6_ParamLimits

0x1fb3,	// (0x00004b50) uni_indicator_pane_g6

0xf8dc,	// (0x00012479) uni_indicator_pane_g_ParamLimits

0xc7fb,	// (0x0000f398) popup_tmo_note_window_ParamLimits

0xc7fb,	// (0x0000f398) popup_tmo_note_window

0xe5bb,	// (0x00011158) fshwr2_bg_pane

0xdb34,	// (0x000106d1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xdb34,	// (0x000106d1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe7e,	// (0x00012a1b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe7e,	// (0x00012a1b) fshwr2_func_candi_cell_pane_g

0x3a9f,	// (0x0000663c) bg_popup_window_pane_cp01

0x7736,	// (0x0000a2d3) bg_popup_window_pane_g1_cp01

0x773f,	// (0x0000a2dc) bg_popup_window_pane_cp22_ParamLimits

0x773f,	// (0x0000a2dc) bg_popup_window_pane_cp22

0xdb87,	// (0x00010724) listscroll_tmo_link_pane_ParamLimits

0xdb87,	// (0x00010724) listscroll_tmo_link_pane

0x778d,	// (0x0000a32a) popup_tmo_note_window_g1_ParamLimits

0x778d,	// (0x0000a32a) popup_tmo_note_window_g1

0xdbc7,	// (0x00010764) tmo_note_info_pane_ParamLimits

0xdbc7,	// (0x00010764) tmo_note_info_pane

0xdbe1,	// (0x0001077e) list_tmo_note_info_pane_g1_ParamLimits

0xdbe1,	// (0x0001077e) list_tmo_note_info_pane_g1

0x77cb,	// (0x0000a368) list_tmo_note_info_pane_g2_ParamLimits

0x77cb,	// (0x0000a368) list_tmo_note_info_pane_g2

0x0001,

0xfe83,	// (0x00012a20) list_tmo_note_info_pane_g_ParamLimits

0xfe83,	// (0x00012a20) list_tmo_note_info_pane_g

0x77e7,	// (0x0000a384) list_tmo_note_info_text_pane_ParamLimits

0x77e7,	// (0x0000a384) list_tmo_note_info_text_pane

0x7868,	// (0x0000a405) list_tmo_link_pane

0x7875,	// (0x0000a412) scroll_pane_cp20

0x7882,	// (0x0000a41f) list_single_tmo_link_pane_ParamLimits

0x7882,	// (0x0000a41f) list_single_tmo_link_pane

0x7892,	// (0x0000a42f) list_single_tmo_link_pane_t1

0x78a0,	// (0x0000a43d) list_tmo_note_info_text_pane_t1_ParamLimits

0x78a0,	// (0x0000a43d) list_tmo_note_info_text_pane_t1

0x9c2c,	// (0x0000c7c9) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9c2c,	// (0x0000c7c9) aid_size_touch_scroll_bar_cp01

0x9b2c,	// (0x0000c6c9) aid_size_touch_slider_marker

0x8fc4,	// (0x0000bb61) popup_settings_window_ParamLimits

0x8fc4,	// (0x0000bb61) popup_settings_window

0xf517,	// (0x000120b4) popup_candi_list_indi_window

0x0536,	// (0x000030d3) aid_touch_navi_pane_ParamLimits

0x58ed,	// (0x0000848a) rs_clock_indi_pane

0x58f6,	// (0x00008493) sctrl_sk_bottom_pane_ParamLimits

0x5907,	// (0x000084a4) sctrl_sk_top_pane_ParamLimits

0xcfea,	// (0x0000fb87) popup_fep_tooltip_window

0x7013,	// (0x00009bb0) aid_size_cell_widget_grid_ParamLimits

0x7088,	// (0x00009c25) cell_ai5_widget_pane_g1_ParamLimits

0x7088,	// (0x00009c25) cell_ai5_widget_pane_g1

0x70eb,	// (0x00009c88) cell_ai5_widget_pane_g6_ParamLimits

0x70f7,	// (0x00009c94) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdf7,	// (0x00012994) cell_ai5_widget_pane_g_ParamLimits

0xfdf7,	// (0x00012994) cell_ai5_widget_pane_g

0x7267,	// (0x00009e04) cell_ai5_widget_pane_t10_ParamLimits

0x7267,	// (0x00009e04) cell_ai5_widget_pane_t10

0x72aa,	// (0x00009e47) grid_ai5_widget_pane_ParamLimits

0x7342,	// (0x00009edf) cell_contacts_ai5_widget_pane_ParamLimits

0x7342,	// (0x00009edf) cell_contacts_ai5_widget_pane

0x751c,	// (0x0000a0b9) popup_discreet_window_t3_ParamLimits

0x751c,	// (0x0000a0b9) popup_discreet_window_t3

0xda64,	// (0x00010601) popup_fshwr2_char_preview_window_ParamLimits

0xda64,	// (0x00010601) popup_fshwr2_char_preview_window

0xdbf8,	// (0x00010795) tmo_note_info_pane_t1

0xdc0d,	// (0x000107aa) tmo_note_info_pane_t2

0xdc24,	// (0x000107c1) tmo_note_info_pane_t3

0x7844,	// (0x0000a3e1) tmo_note_info_pane_t4

0x7856,	// (0x0000a3f3) tmo_note_info_pane_t5

0x0004,

0xfe88,	// (0x00012a25) tmo_note_info_pane_t

0x7868,	// (0x0000a405) list_tmo_link_pane_ParamLimits

0x7875,	// (0x0000a412) scroll_pane_cp20_ParamLimits

0xe0e9,	// (0x00010c86) bg_popup_fep_char_preview_window_cp01

0xdc39,	// (0x000107d6) popup_fshwr2_char_preview_window_t1

0x78c7,	// (0x0000a464) popup_candi_list_indi_window_g1

0x78d0,	// (0x0000a46d) bg_cell_contacts_ai5_widget_pane

0x78dc,	// (0x0000a479) cell_contacts_ai5_widget_pane_g1

0x45c5,	// (0x00007162) cell_contacts_ai5_widget_pane_g2

0x78f1,	// (0x0000a48e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe93,	// (0x00012a30) cell_contacts_ai5_widget_pane_g

0x78fd,	// (0x0000a49a) cell_contacts_ai5_widget_pane_t1

0xe5bb,	// (0x00011158) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7974,	// (0x0000a511) settings_container_pane

0xf27f,	// (0x00011e1c) listscroll_set_pane_copy1

0x2dea,	// (0x00005987) scroll_pane_cp121_copy1

0x10b1,	// (0x00003c4e) set_content_pane_copy1

0xdc47,	// (0x000107e4) aid_height_set_list_copy1_ParamLimits

0xdc47,	// (0x000107e4) aid_height_set_list_copy1

0x2285,	// (0x00004e22) aid_size_parent_copy1_ParamLimits

0x2285,	// (0x00004e22) aid_size_parent_copy1

0xdc53,	// (0x000107f0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdc53,	// (0x000107f0) button_value_adjust_pane_cp6_copy1

0xf42a,	// (0x00011fc7) list_highlight_pane_cp2_copy1_ParamLimits

0xf42a,	// (0x00011fc7) list_highlight_pane_cp2_copy1

0xdc67,	// (0x00010804) list_set_pane_copy1_ParamLimits

0xdc67,	// (0x00010804) list_set_pane_copy1

0x790f,	// (0x0000a4ac) main_pane_set_t1_copy1_ParamLimits

0x790f,	// (0x0000a4ac) main_pane_set_t1_copy1

0x7949,	// (0x0000a4e6) main_pane_set_t2_copy1_ParamLimits

0x7949,	// (0x0000a4e6) main_pane_set_t2_copy1

0xdd14,	// (0x000108b1) main_pane_set_t3_copy1

0xdd22,	// (0x000108bf) main_pane_set_t4_copy1

0x7968,	// (0x0000a505) set_content_pane_g1_copy1_ParamLimits

0x7968,	// (0x0000a505) set_content_pane_g1_copy1

0xdd30,	// (0x000108cd) setting_code_pane_copy1

0x7a71,	// (0x0000a60e) setting_slider_graphic_pane_copy1

0x7a71,	// (0x0000a60e) setting_slider_pane_copy1

0x7a79,	// (0x0000a616) setting_text_pane_copy1

0x7a79,	// (0x0000a616) setting_volume_pane_copy1

0xdd30,	// (0x000108cd) settings_code_pane_cp2_copy1

0xdd38,	// (0x000108d5) settings_code_pane_cp_copy1_ParamLimits

0xdd38,	// (0x000108d5) settings_code_pane_cp_copy1

0xdd4c,	// (0x000108e9) volume_set_pane_copy1

0xdd54,	// (0x000108f1) volume_set_pane_g10_copy1

0xdd5c,	// (0x000108f9) volume_set_pane_g1_copy1

0xdd64,	// (0x00010901) volume_set_pane_g2_copy1

0xdd6c,	// (0x00010909) volume_set_pane_g3_copy1

0xdd74,	// (0x00010911) volume_set_pane_g4_copy1

0xdd7c,	// (0x00010919) volume_set_pane_g5_copy1

0xdd84,	// (0x00010921) volume_set_pane_g6_copy1

0xdd8c,	// (0x00010929) volume_set_pane_g7_copy1

0xdd94,	// (0x00010931) volume_set_pane_g8_copy1

0xdd9c,	// (0x00010939) volume_set_pane_g9_copy1

0xe199,	// (0x00010d36) bg_set_opt_pane_cp_copy1_ParamLimits

0xe199,	// (0x00010d36) bg_set_opt_pane_cp_copy1

0xdda4,	// (0x00010941) setting_slider_pane_t1_copy1_ParamLimits

0xdda4,	// (0x00010941) setting_slider_pane_t1_copy1

0xddc3,	// (0x00010960) setting_slider_pane_t2_copy1_ParamLimits

0xddc3,	// (0x00010960) setting_slider_pane_t2_copy1

0xdddd,	// (0x0001097a) setting_slider_pane_t3_copy1_ParamLimits

0xdddd,	// (0x0001097a) setting_slider_pane_t3_copy1

0xddf5,	// (0x00010992) slider_set_pane_copy1_ParamLimits

0xddf5,	// (0x00010992) slider_set_pane_copy1

0xe681,	// (0x0001121e) set_opt_bg_pane_g1_copy2

0xe689,	// (0x00011226) set_opt_bg_pane_g2_copy2

0x7b54,	// (0x0000a6f1) set_opt_bg_pane_g3_copy2

0xe699,	// (0x00011236) set_opt_bg_pane_g4_copy2

0xe6a1,	// (0x0001123e) set_opt_bg_pane_g5_copy2

0xe6a9,	// (0x00011246) set_opt_bg_pane_g6_copy2

0xde0b,	// (0x000109a8) set_opt_bg_pane_g7_copy2

0x7b66,	// (0x0000a703) set_opt_bg_pane_g8_copy2

0x7b70,	// (0x0000a70d) set_opt_bg_pane_g9_copy2

0xde13,	// (0x000109b0) aid_size_touch_slider_mark_copy1_ParamLimits

0xde13,	// (0x000109b0) aid_size_touch_slider_mark_copy1

0xde27,	// (0x000109c4) slider_set_pane_g1_copy1

0x7b97,	// (0x0000a734) slider_set_pane_g2_copy1

0xb760,	// (0x0000e2fd) slider_set_pane_g3_copy1_ParamLimits

0xb760,	// (0x0000e2fd) slider_set_pane_g3_copy1

0xb774,	// (0x0000e311) slider_set_pane_g4_copy1_ParamLimits

0xb774,	// (0x0000e311) slider_set_pane_g4_copy1

0xb78c,	// (0x0000e329) slider_set_pane_g5_copy1_ParamLimits

0xb78c,	// (0x0000e329) slider_set_pane_g5_copy1

0xb760,	// (0x0000e2fd) slider_set_pane_g6_copy1_ParamLimits

0xb760,	// (0x0000e2fd) slider_set_pane_g6_copy1

0xde30,	// (0x000109cd) slider_set_pane_g7_copy1_ParamLimits

0xde30,	// (0x000109cd) slider_set_pane_g7_copy1

0xe11d,	// (0x00010cba) bg_set_opt_pane_cp2_copy1

0xde46,	// (0x000109e3) setting_slider_graphic_pane_g1_copy1

0xde4f,	// (0x000109ec) setting_slider_graphic_pane_t1_copy1

0xde5f,	// (0x000109fc) setting_slider_graphic_pane_t2_copy1

0xde6f,	// (0x00010a0c) slider_set_pane_cp_copy1

0x7bee,	// (0x0000a78b) input_focus_pane_cp1_copy1

0x7bf7,	// (0x0000a794) list_set_text_pane_copy1

0x7bff,	// (0x0000a79c) setting_text_pane_g1_copy1

0x7c08,	// (0x0000a7a5) set_text_pane_t1_copy1

0x7bee,	// (0x0000a78b) input_focus_pane_cp2_copy1

0x7bff,	// (0x0000a79c) setting_code_pane_g1_copy1

0x7c23,	// (0x0000a7c0) setting_code_pane_t1_copy1

0x7c31,	// (0x0000a7ce) list_set_graphic_pane_copy1

0xe11d,	// (0x00010cba) bg_set_opt_pane_cp4_copy1

0xeffc,	// (0x00011b99) list_set_graphic_pane_g1_copy1_ParamLimits

0xeffc,	// (0x00011b99) list_set_graphic_pane_g1_copy1

0x7c45,	// (0x0000a7e2) list_set_graphic_pane_g2_copy1

0xf014,	// (0x00011bb1) list_set_graphic_pane_t1_copy1_ParamLimits

0xf014,	// (0x00011bb1) list_set_graphic_pane_t1_copy1

0x3a9f,	// (0x0000663c) rs_clock_indi_pane_g1

0x7c4d,	// (0x0000a7ea) rs_clock_indi_pane_t1

0x7c5b,	// (0x0000a7f8) rs_indi_pane

0x7c63,	// (0x0000a800) rs_indi_pane_g1

0x7c6c,	// (0x0000a809) rs_indi_pane_g2

0x78c7,	// (0x0000a464) rs_indi_pane_g3

0x0002,

0xfe9a,	// (0x00012a37) rs_indi_pane_g

0xf27f,	// (0x00011e1c) bg_popup_preview_window_pane_cp03

0x7c75,	// (0x0000a812) popup_fep_tooltip_window_t1

0xc2fa,	// (0x0000ee97) popup_note2_window_g2_ParamLimits

0xc2fa,	// (0x0000ee97) popup_note2_window_g2

0x0001,

0xfc2e,	// (0x000127cb) popup_note2_window_g_ParamLimits

0xfc2e,	// (0x000127cb) popup_note2_window_g

0x52b9,	// (0x00007e56) bg_popup_sub_pane_cp11_ParamLimits

0x52c6,	// (0x00007e63) cell_ai3_links_pane_g1_ParamLimits

0x52dd,	// (0x00007e7a) cell_ai3_links_pane_t1

0x7c08,	// (0x0000a7a5) set_text_pane_t1_copy1_ParamLimits

0xf1c1,	// (0x00011d5e) cell_graphic_popup_pane_cp2_ParamLimits

0xf1c1,	// (0x00011d5e) cell_graphic_popup_pane_cp2

0xde7f,	// (0x00010a1c) cell_graphic_popup_pane_g1_cp2

0xe437,	// (0x00010fd4) cell_graphic_popup_pane_g2_cp2

0x7c8b,	// (0x0000a828) cell_graphic_popup_pane_g3_cp2

0xde87,	// (0x00010a24) cell_graphic_popup_pane_t2_cp2

0xe448,	// (0x00010fe5) grid_highlight_pane_cp3_cp2

0xea96,	// (0x00011633) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe5bb,	// (0x00011158) main_tmo_pane_ParamLimits

0xc7ef,	// (0x0000f38c) popup_tmo_big_image_note_window

0x7077,	// (0x00009c14) cell_ai5_widget_list_pane

0x707f,	// (0x00009c1c) cell_ai5_widget_lrg_icon_pane

0xdbf8,	// (0x00010795) tmo_note_info_pane_t1_ParamLimits

0xdc0d,	// (0x000107aa) tmo_note_info_pane_t2_ParamLimits

0xdc24,	// (0x000107c1) tmo_note_info_pane_t3_ParamLimits

0x7844,	// (0x0000a3e1) tmo_note_info_pane_t4_ParamLimits

0x7856,	// (0x0000a3f3) tmo_note_info_pane_t5_ParamLimits

0xfe88,	// (0x00012a25) tmo_note_info_pane_t_ParamLimits

0x7974,	// (0x0000a511) settings_container_pane_ParamLimits

0xde77,	// (0x00010a14) indicator_popup_pane_cp5

0xde77,	// (0x00010a14) indicator_popup_pane_cp6

0x7c31,	// (0x0000a7ce) list_set_graphic_pane_copy1_ParamLimits

0xe0e9,	// (0x00010c86) bg_popup_window_pane_cp23

0x7ca1,	// (0x0000a83e) popup_tmo_big_image_note_window_g1

0x7caa,	// (0x0000a847) popup_tmo_big_image_note_window_t1

0x7cba,	// (0x0000a857) popup_tmo_big_image_note_window_t2

0x7cca,	// (0x0000a867) popup_tmo_big_image_note_window_t3

0x0002,

0xfea1,	// (0x00012a3e) popup_tmo_big_image_note_window_t

0x3a9f,	// (0x0000663c) cell_ai5_widget_lrg_icon_pane_g1

0x7cda,	// (0x0000a877) cell_ai5_widget_lrg_icon_pane_t1

0x7ce8,	// (0x0000a885) cell_ai5_widget_list_row_pane_ParamLimits

0x7ce8,	// (0x0000a885) cell_ai5_widget_list_row_pane

0x7cff,	// (0x0000a89c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7cff,	// (0x0000a89c) cell_ai5_widget_list_row_pane_g1

0xde95,	// (0x00010a32) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xde95,	// (0x00010a32) cell_ai5_widget_list_row_pane_t1

0x7d37,	// (0x0000a8d4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7d37,	// (0x0000a8d4) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfea8,	// (0x00012a45) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfea8,	// (0x00012a45) cell_ai5_widget_list_row_pane_t

0xe0e9,	// (0x00010c86) main_fep_vtchi_ss_pane

0x7d87,	// (0x0000a924) popup_fep_char_pre_window

0x7d8f,	// (0x0000a92c) popup_fep_ituss_window

0xdef0,	// (0x00010a8d) popup_fep_vkbss_window

0xf42a,	// (0x00011fc7) grid_vkbss_keypad_pane_ParamLimits

0xf42a,	// (0x00011fc7) grid_vkbss_keypad_pane

0x7dfb,	// (0x0000a998) ituss_keypad_pane

0x7e15,	// (0x0000a9b2) aid_vkbss_key_offset_ParamLimits

0x7e15,	// (0x0000a9b2) aid_vkbss_key_offset

0xdefd,	// (0x00010a9a) cell_vkbss_key_pane_ParamLimits

0xdefd,	// (0x00010a9a) cell_vkbss_key_pane

0x7e6c,	// (0x0000aa09) bg_cell_vkbss_key_g1_ParamLimits

0x7e6c,	// (0x0000aa09) bg_cell_vkbss_key_g1

0xdf67,	// (0x00010b04) cell_vkbss_key_3p_pane_ParamLimits

0xdf67,	// (0x00010b04) cell_vkbss_key_3p_pane

0xdf9d,	// (0x00010b3a) cell_vkbss_key_g1_ParamLimits

0xdf9d,	// (0x00010b3a) cell_vkbss_key_g1

0xdfd3,	// (0x00010b70) cell_vkbss_key_t1_ParamLimits

0xdfd3,	// (0x00010b70) cell_vkbss_key_t1

0x7f40,	// (0x0000aadd) cell_ituss_key_pane_ParamLimits

0x7f40,	// (0x0000aadd) cell_ituss_key_pane

0x7f51,	// (0x0000aaee) bg_cell_ituss_key_g1_ParamLimits

0x7f51,	// (0x0000aaee) bg_cell_ituss_key_g1

0x7f5d,	// (0x0000aafa) cell_ituss_key_pane_g1_ParamLimits

0x7f5d,	// (0x0000aafa) cell_ituss_key_pane_g1

0x7f71,	// (0x0000ab0e) cell_ituss_key_pane_g2_ParamLimits

0x7f71,	// (0x0000ab0e) cell_ituss_key_pane_g2

0x0005,

0xfeaf,	// (0x00012a4c) cell_ituss_key_pane_g_ParamLimits

0xfeaf,	// (0x00012a4c) cell_ituss_key_pane_g

0x8007,	// (0x0000aba4) cell_ituss_key_t1_ParamLimits

0x8007,	// (0x0000aba4) cell_ituss_key_t1

0x8041,	// (0x0000abde) cell_ituss_key_t2_ParamLimits

0x8041,	// (0x0000abde) cell_ituss_key_t2

0x8073,	// (0x0000ac10) cell_ituss_key_t3_ParamLimits

0x8073,	// (0x0000ac10) cell_ituss_key_t3

0x80a4,	// (0x0000ac41) cell_ituss_key_t4_ParamLimits

0x80a4,	// (0x0000ac41) cell_ituss_key_t4

0x0004,

0xfebc,	// (0x00012a59) cell_ituss_key_t_ParamLimits

0xfebc,	// (0x00012a59) cell_ituss_key_t

0xe02f,	// (0x00010bcc) cell_vkbss_key_3p_pane_g1

0xe037,	// (0x00010bd4) cell_vkbss_key_3p_pane_g2

0xe03f,	// (0x00010bdc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec7,	// (0x00012a64) cell_vkbss_key_3p_pane_g

0xf27f,	// (0x00011e1c) bg_popup_fep_char_preview_window_cp02

0x80ff,	// (0x0000ac9c) popup_fep_char_pre_window_t1

0xd8ce,	// (0x0001046b) main_ai5_sk_pane

0x78d0,	// (0x0000a46d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x78dc,	// (0x0000a479) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x45c5,	// (0x00007162) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x78f1,	// (0x0000a48e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe93,	// (0x00012a30) cell_contacts_ai5_widget_pane_g_ParamLimits

0x78fd,	// (0x0000a49a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe5bb,	// (0x00011158) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe047,	// (0x00010be4) main_ai5_sk_pane_g1

0xb24c,	// (0x0000dde9) popup_query_code_window_g1

0xdee1,	// (0x00010a7e) popup_fep_vkb_icf_pane

0x7dd2,	// (0x0000a96f) popup_fep_vtchi_icf_pane

0x8116,	// (0x0000acb3) bg_icf_pane

0x8116,	// (0x0000acb3) list_vkb_icf_pane

0x8122,	// (0x0000acbf) bg_icf_pane_cp01

0x8135,	// (0x0000acd2) vtchi_icf_list_pane

0xe09c,	// (0x00010c39) list_vkb_icf_pane_t1_ParamLimits

0xe09c,	// (0x00010c39) list_vkb_icf_pane_t1

0x81ba,	// (0x0000ad57) vtchi_icf_list_pane_t1_ParamLimits

0x81ba,	// (0x0000ad57) vtchi_icf_list_pane_t1

0x7d8f,	// (0x0000a92c) popup_fep_ituss_window_ParamLimits

0x7dd2,	// (0x0000a96f) popup_fep_vtchi_icf_pane_ParamLimits

0x7dfb,	// (0x0000a998) ituss_keypad_pane_ParamLimits

0x7e0b,	// (0x0000a9a8) ituss_sks_pane

0x8116,	// (0x0000acb3) bg_icf_pane_ParamLimits

0xdec6,	// (0x00010a63) icf_edit_indi_pane_ParamLimits

0xdec6,	// (0x00010a63) icf_edit_indi_pane

0x8116,	// (0x0000acb3) list_vkb_icf_pane_ParamLimits

0x8122,	// (0x0000acbf) bg_icf_pane_cp01_ParamLimits

0x7d7a,	// (0x0000a917) icf_edit_indi_pane_cp01_ParamLimits

0x7d7a,	// (0x0000a917) icf_edit_indi_pane_cp01

0x8135,	// (0x0000acd2) vtchi_query_pane

0x6e1a,	// (0x000099b7) icf_edit_indi_pane_g1_ParamLimits

0x6e1a,	// (0x000099b7) icf_edit_indi_pane_g1

0xe0b4,	// (0x00010c51) icf_edit_indi_pane_g2_ParamLimits

0xe0b4,	// (0x00010c51) icf_edit_indi_pane_g2

0x0001,

0xfef2,	// (0x00012a8f) icf_edit_indi_pane_g_ParamLimits

0xfef2,	// (0x00012a8f) icf_edit_indi_pane_g

0xe0c8,	// (0x00010c65) icf_edit_indi_pane_t1

0x81de,	// (0x0000ad7b) bg_input_focus_pane_cp042

0xe4ab,	// (0x00011048) vtchi_button_pane

0x81e7,	// (0x0000ad84) vtchi_query_pane_t1

0x81f5,	// (0x0000ad92) vtchi_query_pane_t2

0x8203,	// (0x0000ada0) vtchi_query_pane_t3

0x0002,

0xfee1,	// (0x00012a7e) vtchi_query_pane_t

0xe0e9,	// (0x00010c86) bg_button_pane_cp13

0x8211,	// (0x0000adae) vtchi_button_pane_g1

0x8219,	// (0x0000adb6) ituss_sks_pane_g1

0x8224,	// (0x0000adc1) ituss_sks_pane_g2

0x0001,

0xfee8,	// (0x00012a85) ituss_sks_pane_g

0x822c,	// (0x0000adc9) ituss_sks_pane_t1

0x823a,	// (0x0000add7) ituss_sks_pane_t2

0x0001,

0xfeed,	// (0x00012a8a) ituss_sks_pane_t

0x347e,	// (0x0000601b) indicator_nsta_pane_cp_g1

0x3487,	// (0x00006024) indicator_nsta_pane_cp_g2

0x348f,	// (0x0000602c) indicator_nsta_pane_cp_g3

0x3497,	// (0x00006034) indicator_nsta_pane_cp_g4

0x3487,	// (0x00006024) indicator_nsta_pane_cp_g5

0x348f,	// (0x0000602c) indicator_nsta_pane_cp_g6

0x0005,

0xfa78,	// (0x00012615) indicator_nsta_pane_cp_g

0xd62f,	// (0x000101cc) cell_graphic2_pane_t2_ParamLimits

0xd62f,	// (0x000101cc) cell_graphic2_pane_t2

0x0001,

0xfd7e,	// (0x0001291b) cell_graphic2_pane_t_ParamLimits

0xfd7e,	// (0x0001291b) cell_graphic2_pane_t

0xd666,	// (0x00010203) cell_graphic2_control_pane_t1

0x9f04,	// (0x0000caa1) signal_pane_g3_ParamLimits

0x9f04,	// (0x0000caa1) signal_pane_g3

0x9f18,	// (0x0000cab5) signal_pane_g4_ParamLimits

0x9f18,	// (0x0000cab5) signal_pane_g4

0x7d49,	// (0x0000a8e6) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7d49,	// (0x0000a8e6) cell_ai5_widget_list_row_pane_t3

0x7ff5,	// (0x0000ab92) cell_ituss_key_pane_t1_ParamLimits

0x7ff5,	// (0x0000ab92) cell_ituss_key_pane_t1

0x0d3f,	// (0x000038dc) form_field_data_wide_pane_vc_t2_ParamLimits

0x0d3f,	// (0x000038dc) form_field_data_wide_pane_vc_t2

0x0d53,	// (0x000038f0) form_field_data_wide_pane_vc_t3_ParamLimits

0x0d53,	// (0x000038f0) form_field_data_wide_pane_vc_t3

0x0002,

0xf7c4,	// (0x00012361) form_field_data_wide_pane_vc_t_ParamLimits

0xf7c4,	// (0x00012361) form_field_data_wide_pane_vc_t

0x3128,	// (0x00005cc5) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3128,	// (0x00005cc5) form_field_slider_wide_pane_vc_t3

0x3206,	// (0x00005da3) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3206,	// (0x00005da3) form_field_popup_wide_pane_vc_t2

0x321d,	// (0x00005dba) form_field_popup_wide_pane_vc_t3_ParamLimits

0x321d,	// (0x00005dba) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa67,	// (0x00012604) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa67,	// (0x00012604) form_field_popup_wide_pane_vc_t

0xd9ce,	// (0x0001056b) aid_fshwr2_btn_pane_ParamLimits

0xd9e2,	// (0x0001057f) aid_fshwr2_syb_pane_ParamLimits

0xd9f6,	// (0x00010593) aid_fshwr2_txt_pane_ParamLimits

0xe5bb,	// (0x00011158) fshwr2_bg_pane_ParamLimits

0xda06,	// (0x000105a3) fshwr2_func_candi_pane_ParamLimits

0xda26,	// (0x000105c3) fshwr2_hwr_syb_pane_ParamLimits

0xda48,	// (0x000105e5) fshwr2_icf_pane_ParamLimits

0x3099,	// (0x00005c36) list_double_graphic_pane_vc_g4_ParamLimits

0x3099,	// (0x00005c36) list_double_graphic_pane_vc_g4

0x7f91,	// (0x0000ab2e) cell_ituss_key_pane_g3_ParamLimits

0x7f91,	// (0x0000ab2e) cell_ituss_key_pane_g3

0x80d5,	// (0x0000ac72) cell_ituss_key_t5_ParamLimits

0x80d5,	// (0x0000ac72) cell_ituss_key_t5

0xdef0,	// (0x00010a8d) popup_fep_vkbss_window_ParamLimits

0x700a,	// (0x00009ba7) aid_cell_ai5_quarter

0xe0c8,	// (0x00010c65) icf_edit_indi_pane_t1_ParamLimits

0x93ed,	// (0x0000bf8a) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x93ed,	// (0x0000bf8a) aid_tch_indicator_popup_pane_cp2

0x9400,	// (0x0000bf9d) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9400,	// (0x0000bf9d) aid_tch_query_popup_data_pane_cp2

0x10f5,	// (0x00003c92) aid_tch_query_popup_pane_ParamLimits

0x10f5,	// (0x00003c92) aid_tch_query_popup_pane

0x10f5,	// (0x00003c92) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x10f5,	// (0x00003c92) aid_tch_query_popup_data_pane_cp1

0xf42a,	// (0x00011fc7) cell_fshwr2_syb_bg_pane_ParamLimits

0xdb5e,	// (0x000106fb) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xdb71,	// (0x0001070e) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xdee1,	// (0x00010a7e) popup_fep_vkb_icf_pane_ParamLimits

0xd736,	// (0x000102d3) bg_popup_fep_char_preview_window_g10

0x713f,	// (0x00009cdc) cell_ai5_widget_pane_g11_ParamLimits

0x713f,	// (0x00009cdc) cell_ai5_widget_pane_g11

0x714b,	// (0x00009ce8) cell_ai5_widget_pane_g12_ParamLimits

0x714b,	// (0x00009ce8) cell_ai5_widget_pane_g12

0x7157,	// (0x00009cf4) cell_ai5_widget_pane_g13_ParamLimits

0x7157,	// (0x00009cf4) cell_ai5_widget_pane_g13

0x7286,	// (0x00009e23) cell_ai5_widget_pane_t11_ParamLimits

0x7286,	// (0x00009e23) cell_ai5_widget_pane_t11

0x7298,	// (0x00009e35) cell_ai5_widget_pane_t12_ParamLimits

0x7298,	// (0x00009e35) cell_ai5_widget_pane_t12

0x7f9d,	// (0x0000ab3a) cell_ituss_key_pane_g4_ParamLimits

0x7f9d,	// (0x0000ab3a) cell_ituss_key_pane_g4

0x7fb9,	// (0x0000ab56) cell_ituss_key_pane_g5_ParamLimits

0x7fb9,	// (0x0000ab56) cell_ituss_key_pane_g5

0x7fd5,	// (0x0000ab72) cell_ituss_key_pane_g6_ParamLimits

0x7fd5,	// (0x0000ab72) cell_ituss_key_pane_g6

0x0a91,	// (0x0000362e) bg_icf_pane_g1

0xe050,	// (0x00010bed) bg_icf_pane_g2

0xe05a,	// (0x00010bf7) bg_icf_pane_g3

0xe062,	// (0x00010bff) bg_icf_pane_g4

0xe06c,	// (0x00010c09) bg_icf_pane_g5

0xe076,	// (0x00010c13) bg_icf_pane_g6

0xe080,	// (0x00010c1d) bg_icf_pane_g7

0xe088,	// (0x00010c25) bg_icf_pane_g8

0xe092,	// (0x00010c2f) bg_icf_pane_g9

0x0008,

0xfece,	// (0x00012a6b) bg_icf_pane_g

0x7de8,	// (0x0000a985) popup_hyb_candi_window_ParamLimits

0x7de8,	// (0x0000a985) popup_hyb_candi_window

0x0c29,	// (0x000037c6) bg_popup_sub_pane_cp01_ParamLimits

0x0c29,	// (0x000037c6) bg_popup_sub_pane_cp01

0x8275,	// (0x0000ae12) entry_hyb_candi_pane_ParamLimits

0x8275,	// (0x0000ae12) entry_hyb_candi_pane

0x8284,	// (0x0000ae21) grid_hyb_candi_pane_ParamLimits

0x8284,	// (0x0000ae21) grid_hyb_candi_pane

0x8299,	// (0x0000ae36) grid_hyb_phrase_pane_ParamLimits

0x8299,	// (0x0000ae36) grid_hyb_phrase_pane

0x82a8,	// (0x0000ae45) cell_hyb_candi_pane_ParamLimits

0x82a8,	// (0x0000ae45) cell_hyb_candi_pane

0x82cb,	// (0x0000ae68) cell_hyb_candi_scroll_pane

0xec38,	// (0x000117d5) cell_hyb_candi_pane_g1

0x82d4,	// (0x0000ae71) cell_hyb_candi_pane_t1

0x82e2,	// (0x0000ae7f) cell_hyb_phrase_pane

0xec38,	// (0x000117d5) cell_hyb_phrase_pane_g1

0x82eb,	// (0x0000ae88) cell_hyb_phrase_pane_t1

0x82f9,	// (0x0000ae96) entry_hyb_candi_pane_t1

0xf27f,	// (0x00011e1c) input_focus_pane_cp06

0x8307,	// (0x0000aea4) cell_hyb_candi_scroll_pane_g1

0x830f,	// (0x0000aeac) cell_hyb_candi_scroll_pane_g1_aid

0x8317,	// (0x0000aeb4) cell_hyb_candi_scroll_pane_g2

0x831f,	// (0x0000aebc) cell_hyb_candi_scroll_pane_g2_aid

0x8327,	// (0x0000aec4) cell_hyb_candi_scroll_pane_g3

0x832f,	// (0x0000aecc) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal

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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00047728 };

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
0xa146,	// (0x0005186e) Screen

0xa15a,	// (0x00051882) application_window_ParamLimits

0xa15a,	// (0x00051882) application_window

0xa174,	// (0x0005189c) screen_g1

0xa1a6,	// (0x000518ce) area_bottom_pane_ParamLimits

0xa1a6,	// (0x000518ce) area_bottom_pane

0xf2ce,	// (0x000569f6) area_top_pane_ParamLimits

0xf2ce,	// (0x000569f6) area_top_pane

0xf362,	// (0x00056a8a) main_pane_ParamLimits

0xf362,	// (0x00056a8a) main_pane

0xa264,	// (0x0005198c) misc_graphics

0xbd20,	// (0x00053448) battery_pane_ParamLimits

0xbd20,	// (0x00053448) battery_pane

0x3bad,	// (0x0004b2d5) bg_status_flat_pane_g8

0x3bb5,	// (0x0004b2dd) bg_status_flat_pane_g9

0x2fad,	// (0x0004a6d5) context_pane_ParamLimits

0x2fad,	// (0x0004a6d5) context_pane

0xc757,	// (0x00053e7f) navi_pane_ParamLimits

0xc757,	// (0x00053e7f) navi_pane

0xc7e1,	// (0x00053f09) signal_pane_ParamLimits

0xc7e1,	// (0x00053f09) signal_pane

0x0008,

0xf854,	// (0x00056f7c) bg_status_flat_pane_g

0xc871,	// (0x00053f99) status_pane_g1_ParamLimits

0xc871,	// (0x00053f99) status_pane_g1

0xc887,	// (0x00053faf) status_pane_g2_ParamLimits

0xc887,	// (0x00053faf) status_pane_g2

0x31e6,	// (0x0004a90e) status_pane_g3_ParamLimits

0x31e6,	// (0x0004a90e) status_pane_g3

0x0004,

0xf780,	// (0x00056ea8) status_pane_g_ParamLimits

0xf780,	// (0x00056ea8) status_pane_g

0xc893,	// (0x00053fbb) title_pane_ParamLimits

0xc893,	// (0x00053fbb) title_pane

0xc8fa,	// (0x00054022) uni_indicator_pane_ParamLimits

0xc8fa,	// (0x00054022) uni_indicator_pane

0x2e17,	// (0x0004a53f) bg_list_pane_ParamLimits

0x2e17,	// (0x0004a53f) bg_list_pane

0x9f0b,	// (0x00051633) find_pane

0x33e1,	// (0x0004ab09) listscroll_app_pane_ParamLimits

0x33e1,	// (0x0004ab09) listscroll_app_pane

0x2e43,	// (0x0004a56b) listscroll_form_pane

0x9f13,	// (0x0005163b) listscroll_gen_pane_ParamLimits

0x9f13,	// (0x0005163b) listscroll_gen_pane

0x090f,	// (0x00048037) listscroll_set_pane

0x474a,	// (0x0004be72) main_idle_act_pane

0x2b10,	// (0x0004a238) main_idle_trad_pane

0x2b10,	// (0x0004a238) main_list_empty_pane

0x2e37,	// (0x0004a55f) main_midp_pane

0x2e5d,	// (0x0004a585) main_pane_g1_ParamLimits

0x2e5d,	// (0x0004a585) main_pane_g1

0xb576,	// (0x00052c9e) popup_ai_message_window_ParamLimits

0xb576,	// (0x00052c9e) popup_ai_message_window

0xb616,	// (0x00052d3e) popup_fep_china_uni_window_ParamLimits

0xb616,	// (0x00052d3e) popup_fep_china_uni_window

0x0a2b,	// (0x00048153) popup_fep_japan_candidate_window_ParamLimits

0x0a2b,	// (0x00048153) popup_fep_japan_candidate_window

0x0a55,	// (0x0004817d) popup_fep_japan_predictive_window_ParamLimits

0x0a55,	// (0x0004817d) popup_fep_japan_predictive_window

0xb676,	// (0x00052d9e) popup_find_window

0xb693,	// (0x00052dbb) popup_grid_graphic_window_ParamLimits

0xb693,	// (0x00052dbb) popup_grid_graphic_window

0x0ac8,	// (0x000481f0) popup_large_graphic_colour_window

0xb73d,	// (0x00052e65) popup_menu_window_ParamLimits

0xb73d,	// (0x00052e65) popup_menu_window

0xb92d,	// (0x00053055) popup_note_image_window

0xb8ed,	// (0x00053015) popup_note_wait_window_ParamLimits

0xb8ed,	// (0x00053015) popup_note_wait_window

0xb945,	// (0x0005306d) popup_note_window_ParamLimits

0xb945,	// (0x0005306d) popup_note_window

0xb9f3,	// (0x0005311b) popup_query_code_window_ParamLimits

0xb9f3,	// (0x0005311b) popup_query_code_window

0x0d34,	// (0x0004845c) popup_query_data_code_window_ParamLimits

0x0d34,	// (0x0004845c) popup_query_data_code_window

0xba33,	// (0x0005315b) popup_query_data_window_ParamLimits

0xba33,	// (0x0005315b) popup_query_data_window

0xbac7,	// (0x000531ef) popup_query_sat_info_window_ParamLimits

0xbac7,	// (0x000531ef) popup_query_sat_info_window

0xbb70,	// (0x00053298) popup_snote_single_graphic_window_ParamLimits

0xbb70,	// (0x00053298) popup_snote_single_graphic_window

0xbb70,	// (0x00053298) popup_snote_single_text_window_ParamLimits

0xbb70,	// (0x00053298) popup_snote_single_text_window

0x0dcf,	// (0x000484f7) popup_sub_window_general

0x0f15,	// (0x0004863d) popup_window_general_ParamLimits

0x0f15,	// (0x0004863d) popup_window_general

0x2e6b,	// (0x0004a593) power_save_pane

0xb3d2,	// (0x00052afa) control_pane_g1_ParamLimits

0xb3d2,	// (0x00052afa) control_pane_g1

0xb3fb,	// (0x00052b23) control_pane_g2_ParamLimits

0xb3fb,	// (0x00052b23) control_pane_g2

0x2dda,	// (0x0004a502) control_pane_g3_ParamLimits

0x2dda,	// (0x0004a502) control_pane_g3

0x0007,

0xf768,	// (0x00056e90) control_pane_g_ParamLimits

0xf768,	// (0x00056e90) control_pane_g

0xb461,	// (0x00052b89) control_pane_t1_ParamLimits

0xb461,	// (0x00052b89) control_pane_t1

0xb4c9,	// (0x00052bf1) control_pane_t2_ParamLimits

0xb4c9,	// (0x00052bf1) control_pane_t2

0x0002,

0xf779,	// (0x00056ea1) control_pane_t_ParamLimits

0xf779,	// (0x00056ea1) control_pane_t

0xb32b,	// (0x00052a53) navi_navi_volume_pane_cp1

0xb333,	// (0x00052a5b) status_small_icon_pane

0x2d0f,	// (0x0004a437) status_small_pane_g1_ParamLimits

0x2d0f,	// (0x0004a437) status_small_pane_g1

0xb33b,	// (0x00052a63) status_small_pane_g2_ParamLimits

0xb33b,	// (0x00052a63) status_small_pane_g2

0xb347,	// (0x00052a6f) status_small_pane_g3_ParamLimits

0xb347,	// (0x00052a6f) status_small_pane_g3

0xb353,	// (0x00052a7b) status_small_pane_g4_ParamLimits

0xb353,	// (0x00052a7b) status_small_pane_g4

0xb35f,	// (0x00052a87) status_small_pane_g5_ParamLimits

0xb35f,	// (0x00052a87) status_small_pane_g5

0xb36d,	// (0x00052a95) status_small_pane_g6_ParamLimits

0xb36d,	// (0x00052a95) status_small_pane_g6

0x0007,

0xf757,	// (0x00056e7f) status_small_pane_g_ParamLimits

0xf757,	// (0x00056e7f) status_small_pane_g

0xb39c,	// (0x00052ac4) status_small_pane_t1

0xb3be,	// (0x00052ae6) status_small_wait_pane_ParamLimits

0xb3be,	// (0x00052ae6) status_small_wait_pane

0xb18b,	// (0x000528b3) aid_levels_signal_ParamLimits

0xb18b,	// (0x000528b3) aid_levels_signal

0xb1a3,	// (0x000528cb) signal_pane_g1_ParamLimits

0xb1a3,	// (0x000528cb) signal_pane_g1

0xb1be,	// (0x000528e6) signal_pane_g2_ParamLimits

0xb1be,	// (0x000528e6) signal_pane_g2

0x0003,

0xf6e8,	// (0x00056e10) signal_pane_g_ParamLimits

0xf6e8,	// (0x00056e10) signal_pane_g

0xe91f,	// (0x00056047) context_pane_g1

0xa39c,	// (0x00051ac4) title_pane_g1

0xa3eb,	// (0x00051b13) title_pane_t1

0xa477,	// (0x00051b9f) title_pane_t2

0xa49d,	// (0x00051bc5) title_pane_t3

0x0002,

0xf532,	// (0x00056c5a) title_pane_t

0xc922,	// (0x0005404a) aid_levels_battery_ParamLimits

0xc922,	// (0x0005404a) aid_levels_battery

0xc93e,	// (0x00054066) battery_pane_g1_ParamLimits

0xc93e,	// (0x00054066) battery_pane_g1

0xc95b,	// (0x00054083) battery_pane_g2_ParamLimits

0xc95b,	// (0x00054083) battery_pane_g2

0x0001,

0xf78b,	// (0x00056eb3) battery_pane_g_ParamLimits

0xf78b,	// (0x00056eb3) battery_pane_g

0xcb5c,	// (0x00054284) uni_indicator_pane_g1

0xcb72,	// (0x0005429a) uni_indicator_pane_g2

0xcb88,	// (0x000542b0) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x00057024) uni_indicator_pane_g

0x2973,	// (0x0004a09b) navi_icon_pane_ParamLimits

0x2973,	// (0x0004a09b) navi_icon_pane

0x28bb,	// (0x00049fe3) navi_midp_pane

0x298f,	// (0x0004a0b7) navi_navi_pane

0x2999,	// (0x0004a0c1) navi_text_pane_ParamLimits

0x2999,	// (0x0004a0c1) navi_text_pane

0xa174,	// (0x0005189c) status_small_wait_pane_g1

0xa9a2,	// (0x000520ca) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0005701f) status_small_wait_pane_g

0xcafb,	// (0x00054223) navi_navi_icon_text_pane

0xcb03,	// (0x0005422b) navi_navi_pane_g1_ParamLimits

0xcb03,	// (0x0005422b) navi_navi_pane_g1

0xcb15,	// (0x0005423d) navi_navi_pane_g2_ParamLimits

0xcb15,	// (0x0005423d) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x00056fed) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x00056fed) navi_navi_pane_g

0x4236,	// (0x0004b95e) navi_navi_tabs_pane

0xcb27,	// (0x0005424f) navi_navi_text_pane

0xcafb,	// (0x00054223) navi_navi_volume_pane

0xcae9,	// (0x00054211) navi_text_pane_t1

0xcadd,	// (0x00054205) navi_icon_pane_g1

0x412d,	// (0x0004b855) navi_navi_text_pane_t1

0xc02a,	// (0x00053752) navi_navi_volume_pane_g1

0xc032,	// (0x0005375a) volume_small_pane

0xca39,	// (0x00054161) navi_navi_icon_text_pane_g1

0xca41,	// (0x00054169) navi_navi_icon_text_pane_t1

0x298f,	// (0x0004a0b7) navi_tabs_2_long_pane

0x298f,	// (0x0004a0b7) navi_tabs_2_pane

0x298f,	// (0x0004a0b7) navi_tabs_3_long_pane

0x298f,	// (0x0004a0b7) navi_tabs_3_pane

0x298f,	// (0x0004a0b7) navi_tabs_4_pane

0xc00a,	// (0x00053732) tabs_2_active_pane_ParamLimits

0xc00a,	// (0x00053732) tabs_2_active_pane

0xc01a,	// (0x00053742) tabs_2_passive_pane_ParamLimits

0xc01a,	// (0x00053742) tabs_2_passive_pane

0xbfd8,	// (0x00053700) tabs_3_active_pane_ParamLimits

0xbfd8,	// (0x00053700) tabs_3_active_pane

0xbfe8,	// (0x00053710) tabs_3_passive_pane_ParamLimits

0xbfe8,	// (0x00053710) tabs_3_passive_pane

0xbff9,	// (0x00053721) tabs_3_passive_pane_cp_ParamLimits

0xbff9,	// (0x00053721) tabs_3_passive_pane_cp

0xbf94,	// (0x000536bc) tabs_4_active_pane_ParamLimits

0xbf94,	// (0x000536bc) tabs_4_active_pane

0xbfa5,	// (0x000536cd) tabs_4_passive_pane_ParamLimits

0xbfa5,	// (0x000536cd) tabs_4_passive_pane

0xbfb6,	// (0x000536de) tabs_4_passive_pane_cp_ParamLimits

0xbfb6,	// (0x000536de) tabs_4_passive_pane_cp

0xbfc7,	// (0x000536ef) tabs_4_passive_pane_cp2_ParamLimits

0xbfc7,	// (0x000536ef) tabs_4_passive_pane_cp2

0xbf70,	// (0x00053698) tabs_2_long_active_pane_ParamLimits

0xbf70,	// (0x00053698) tabs_2_long_active_pane

0xbf82,	// (0x000536aa) tabs_2_long_passive_pane_ParamLimits

0xbf82,	// (0x000536aa) tabs_2_long_passive_pane

0xbf25,	// (0x0005364d) tabs_3_long_active_pane_ParamLimits

0xbf25,	// (0x0005364d) tabs_3_long_active_pane

0xbf3e,	// (0x00053666) tabs_3_long_passive_pane_ParamLimits

0xbf3e,	// (0x00053666) tabs_3_long_passive_pane

0xbf57,	// (0x0005367f) tabs_3_long_passive_pane_cp_ParamLimits

0xbf57,	// (0x0005367f) tabs_3_long_passive_pane_cp

0x107b,	// (0x000487a3) volume_small_pane_g1

0xbed4,	// (0x000535fc) volume_small_pane_g2

0xbedd,	// (0x00053605) volume_small_pane_g3

0xbee6,	// (0x0005360e) volume_small_pane_g4

0xbeef,	// (0x00053617) volume_small_pane_g5

0xbef8,	// (0x00053620) volume_small_pane_g6

0xbf01,	// (0x00053629) volume_small_pane_g7

0xbf0a,	// (0x00053632) volume_small_pane_g8

0xbf13,	// (0x0005363b) volume_small_pane_g9

0xbf1c,	// (0x00053644) volume_small_pane_g10

0x0009,

0xf891,	// (0x00056fb9) volume_small_pane_g

0xa4af,	// (0x00051bd7) bg_active_tab_pane_cp2_ParamLimits

0xa4af,	// (0x00051bd7) bg_active_tab_pane_cp2

0xa4bd,	// (0x00051be5) tabs_3_active_pane_g1

0xa4c5,	// (0x00051bed) tabs_3_active_pane_t1

0xa4af,	// (0x00051bd7) bg_passive_tab_pane_cp2_ParamLimits

0xa4af,	// (0x00051bd7) bg_passive_tab_pane_cp2

0xa4bd,	// (0x00051be5) tabs_3_passive_pane_g1

0xa4c5,	// (0x00051bed) tabs_3_passive_pane_t1

0xa4af,	// (0x00051bd7) bg_active_tab_pane_cp3_ParamLimits

0xa4af,	// (0x00051bd7) bg_active_tab_pane_cp3

0xa4d7,	// (0x00051bff) tabs_4_active_pane_g1

0xa4df,	// (0x00051c07) tabs_4_active_pane_t1

0xa4af,	// (0x00051bd7) bg_passive_tab_pane_cp3_ParamLimits

0xa4af,	// (0x00051bd7) bg_passive_tab_pane_cp3

0xa4d7,	// (0x00051bff) tabs_4_1_passive_pane_g1

0xa4df,	// (0x00051c07) tabs_4_1_passive_pane_t1

0x2e37,	// (0x0004a55f) list_highlight_pane_cp2

0xcc1b,	// (0x00054343) list_set_pane_ParamLimits

0xcc1b,	// (0x00054343) list_set_pane

0xccdd,	// (0x00054405) main_pane_set_t1_ParamLimits

0xccdd,	// (0x00054405) main_pane_set_t1

0xccfd,	// (0x00054425) main_pane_set_t2_ParamLimits

0xccfd,	// (0x00054425) main_pane_set_t2

0xcd11,	// (0x00054439) main_pane_set_t3_ParamLimits

0xcd11,	// (0x00054439) main_pane_set_t3

0xcd25,	// (0x0005444d) main_pane_set_t4_ParamLimits

0xcd25,	// (0x0005444d) main_pane_set_t4

0x0003,

0xf961,	// (0x00057089) main_pane_set_t_ParamLimits

0xf961,	// (0x00057089) main_pane_set_t

0xcd39,	// (0x00054461) setting_code_pane

0x4898,	// (0x0004bfc0) setting_slider_graphic_pane

0x4898,	// (0x0004bfc0) setting_slider_pane

0x4898,	// (0x0004bfc0) setting_text_pane

0x4898,	// (0x0004bfc0) setting_volume_pane

0xf471,	// (0x00056b99) volume_set_pane

0xa4f1,	// (0x00051c19) bg_set_opt_pane_cp

0xf47b,	// (0x00056ba3) setting_slider_pane_t1

0xf494,	// (0x00056bbc) setting_slider_pane_t2

0xf4ae,	// (0x00056bd6) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00056c61) setting_slider_pane_t

0xf4c6,	// (0x00056bee) slider_set_pane

0xa264,	// (0x0005198c) bg_set_opt_pane_cp2

0xa4ff,	// (0x00051c27) setting_slider_graphic_pane_g1

0xf4dc,	// (0x00056c04) setting_slider_graphic_pane_t1

0xf511,	// (0x00056c39) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00056c68) setting_slider_graphic_pane_t

0xf521,	// (0x00056c49) slider_set_pane_cp

0xa264,	// (0x0005198c) input_focus_pane_cp1

0x4731,	// (0x0004be59) list_set_text_pane

0xa174,	// (0x0005189c) setting_text_pane_g1

0xa264,	// (0x0005198c) input_focus_pane_cp2

0xa174,	// (0x0005189c) setting_code_pane_g1

0xa508,	// (0x00051c30) setting_code_pane_t1

0xe46b,	// (0x00055b93) set_text_pane_t1_ParamLimits

0xe46b,	// (0x00055b93) set_text_pane_t1

0xae5a,	// (0x00052582) set_opt_bg_pane_g1

0xae62,	// (0x0005258a) set_opt_bg_pane_g2

0x4709,	// (0x0004be31) set_opt_bg_pane_g3

0xae72,	// (0x0005259a) set_opt_bg_pane_g4

0xae7a,	// (0x000525a2) set_opt_bg_pane_g5

0xae82,	// (0x000525aa) set_opt_bg_pane_g6

0x4713,	// (0x0004be3b) set_opt_bg_pane_g7

0x471d,	// (0x0004be45) set_opt_bg_pane_g8

0x4727,	// (0x0004be4f) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x00057076) set_opt_bg_pane_g

0x46fc,	// (0x0004be24) slider_set_pane_g1

0x125f,	// (0x00048987) slider_set_pane_g2

0x0006,

0xf93f,	// (0x00057067) slider_set_pane_g

0x11e7,	// (0x0004890f) volume_set_pane_g1

0x11f1,	// (0x00048919) volume_set_pane_g2

0x11fb,	// (0x00048923) volume_set_pane_g3

0x1205,	// (0x0004892d) volume_set_pane_g4

0x120f,	// (0x00048937) volume_set_pane_g5

0x1219,	// (0x00048941) volume_set_pane_g6

0x1223,	// (0x0004894b) volume_set_pane_g7

0x122d,	// (0x00048955) volume_set_pane_g8

0x1237,	// (0x0004895f) volume_set_pane_g9

0x1241,	// (0x00048969) volume_set_pane_g10

0x0009,

0xf917,	// (0x0005703f) volume_set_pane_g

0xa516,	// (0x00051c3e) indicator_pane_ParamLimits

0xa516,	// (0x00051c3e) indicator_pane

0xa542,	// (0x00051c6a) main_idle_pane_g2_ParamLimits

0xa542,	// (0x00051c6a) main_idle_pane_g2

0xa57a,	// (0x00051ca2) main_pane_idle_g1_ParamLimits

0xa57a,	// (0x00051ca2) main_pane_idle_g1

0xa5a4,	// (0x00051ccc) popup_clock_digital_analogue_window_ParamLimits

0xa5a4,	// (0x00051ccc) popup_clock_digital_analogue_window

0xa5bb,	// (0x00051ce3) soft_indicator_pane_ParamLimits

0xa5bb,	// (0x00051ce3) soft_indicator_pane

0xa5d7,	// (0x00051cff) wallpaper_pane_ParamLimits

0xa5d7,	// (0x00051cff) wallpaper_pane

0xa174,	// (0x0005189c) wallpaper_pane_g1

0xa5f1,	// (0x00051d19) indicator_pane_g1_ParamLimits

0xa5f1,	// (0x00051d19) indicator_pane_g1

0x4b25,	// (0x0004c24d) navi_navi_icon_text_pane_srt_g1

0xa619,	// (0x00051d41) soft_indicator_pane_t1

0xa633,	// (0x00051d5b) aid_ps_area_pane

0xa644,	// (0x00051d6c) aid_ps_clock_pane

0xa652,	// (0x00051d7a) aid_ps_indicator_pane

0xa65e,	// (0x00051d86) indicator_ps_pane_ParamLimits

0xa65e,	// (0x00051d86) indicator_ps_pane

0xa66d,	// (0x00051d95) power_save_pane_g1_ParamLimits

0xa66d,	// (0x00051d95) power_save_pane_g1

0xa679,	// (0x00051da1) power_save_pane_g2_ParamLimits

0xa679,	// (0x00051da1) power_save_pane_g2

0xf2ae,	// (0x000569d6) aid_navinavi_width_pane

0xa633,	// (0x00051d5b) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00056c6d) power_save_pane_g_ParamLimits

0xf545,	// (0x00056c6d) power_save_pane_g

0xa687,	// (0x00051daf) power_save_pane_t1_ParamLimits

0xa687,	// (0x00051daf) power_save_pane_t1

0xa644,	// (0x00051d6c) aid_ps_clock_pane_ParamLimits

0xa652,	// (0x00051d7a) aid_ps_indicator_pane_ParamLimits

0xa699,	// (0x00051dc1) power_save_pane_t4_ParamLimits

0xa699,	// (0x00051dc1) power_save_pane_t4

0x0001,

0xf54a,	// (0x00056c72) power_save_pane_t_ParamLimits

0xf54a,	// (0x00056c72) power_save_pane_t

0xa6c3,	// (0x00051deb) power_save_t3_ParamLimits

0xa6c3,	// (0x00051deb) power_save_t3

0xa6ae,	// (0x00051dd6) power_save_t2_ParamLimits

0xa6ae,	// (0x00051dd6) power_save_t2

0xa6d8,	// (0x00051e00) indicator_ps_pane_g1

0xa6e1,	// (0x00051e09) ai_gene_pane_ParamLimits

0xa6e1,	// (0x00051e09) ai_gene_pane

0xa6f8,	// (0x00051e20) ai_links_pane_ParamLimits

0xa6f8,	// (0x00051e20) ai_links_pane

0xa710,	// (0x00051e38) indicator_pane_cp1_ParamLimits

0xa710,	// (0x00051e38) indicator_pane_cp1

0xa71f,	// (0x00051e47) main_pane_idle_g1_cp_ParamLimits

0xa71f,	// (0x00051e47) main_pane_idle_g1_cp

0xa737,	// (0x00051e5f) popup_ai_links_title_window

0xa740,	// (0x00051e68) soft_indicator_pane_cp1_ParamLimits

0xa740,	// (0x00051e68) soft_indicator_pane_cp1

0x44e5,	// (0x0004bc0d) ai_links_pane_g1

0x44ee,	// (0x0004bc16) grid_ai_links_pane

0xcb53,	// (0x0005427b) ai_gene_pane_1

0x44d3,	// (0x0004bbfb) ai_gene_pane_2

0x44dc,	// (0x0004bc04) list_highlight_pane_cp4

0xcb2f,	// (0x00054257) cell_ai_link_pane_ParamLimits

0xcb2f,	// (0x00054257) cell_ai_link_pane

0x44a2,	// (0x0004bbca) cell_ai_link_pane_g1

0xa9a2,	// (0x000520ca) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0005701a) cell_ai_link_pane_g

0xa264,	// (0x0005198c) grid_highlight_cp2

0xa264,	// (0x0005198c) bg_popup_sub_pane_cp1

0xa762,	// (0x00051e8a) popup_ai_links_title_window_t1

0x43ee,	// (0x0004bb16) ai_gene_pane_1_g1_ParamLimits

0x43ee,	// (0x0004bb16) ai_gene_pane_1_g1

0x43fa,	// (0x0004bb22) ai_gene_pane_1_g2_ParamLimits

0x43fa,	// (0x0004bb22) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x00057010) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x00057010) ai_gene_pane_1_g

0x4407,	// (0x0004bb2f) ai_gene_pane_1_t1_ParamLimits

0x4407,	// (0x0004bb2f) ai_gene_pane_1_t1

0x443b,	// (0x0004bb63) grid_ai_soft_ind_pane

0x43d9,	// (0x0004bb01) ai_gene_pane_2_t1_ParamLimits

0x43d9,	// (0x0004bb01) ai_gene_pane_2_t1

0xa771,	// (0x00051e99) main_pane_empty_t1_ParamLimits

0xa771,	// (0x00051e99) main_pane_empty_t1

0xa789,	// (0x00051eb1) main_pane_empty_t2_ParamLimits

0xa789,	// (0x00051eb1) main_pane_empty_t2

0xa79e,	// (0x00051ec6) main_pane_empty_t3_ParamLimits

0xa79e,	// (0x00051ec6) main_pane_empty_t3

0xa7b0,	// (0x00051ed8) main_pane_empty_t4_ParamLimits

0xa7b0,	// (0x00051ed8) main_pane_empty_t4

0xa7c2,	// (0x00051eea) main_pane_empty_t5_ParamLimits

0xa7c2,	// (0x00051eea) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00056c77) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00056c77) main_pane_empty_t

0xaf25,	// (0x0005264d) bg_popup_window_pane_ParamLimits

0xaf25,	// (0x0005264d) bg_popup_window_pane

0x413b,	// (0x0004b863) find_popup_pane_cp2_ParamLimits

0x413b,	// (0x0004b863) find_popup_pane_cp2

0x4147,	// (0x0004b86f) heading_pane_ParamLimits

0x4147,	// (0x0004b86f) heading_pane

0xa264,	// (0x0005198c) bg_popup_sub_pane

0xca5e,	// (0x00054186) bg_popup_window_pane_g1_ParamLimits

0xca5e,	// (0x00054186) bg_popup_window_pane_g1

0xca6d,	// (0x00054195) bg_popup_window_pane_g2_ParamLimits

0xca6d,	// (0x00054195) bg_popup_window_pane_g2

0xca79,	// (0x000541a1) bg_popup_window_pane_g3_ParamLimits

0xca79,	// (0x000541a1) bg_popup_window_pane_g3

0xca85,	// (0x000541ad) bg_popup_window_pane_g4_ParamLimits

0xca85,	// (0x000541ad) bg_popup_window_pane_g4

0xca94,	// (0x000541bc) bg_popup_window_pane_g5_ParamLimits

0xca94,	// (0x000541bc) bg_popup_window_pane_g5

0xcaa4,	// (0x000541cc) bg_popup_window_pane_g6_ParamLimits

0xcaa4,	// (0x000541cc) bg_popup_window_pane_g6

0xcab0,	// (0x000541d8) bg_popup_window_pane_g7_ParamLimits

0xcab0,	// (0x000541d8) bg_popup_window_pane_g7

0xcabf,	// (0x000541e7) bg_popup_window_pane_g8_ParamLimits

0xcabf,	// (0x000541e7) bg_popup_window_pane_g8

0xcace,	// (0x000541f6) bg_popup_window_pane_g9_ParamLimits

0xcace,	// (0x000541f6) bg_popup_window_pane_g9

0x4121,	// (0x0004b849) bg_popup_window_pane_g10_ParamLimits

0x4121,	// (0x0004b849) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x00056fd8) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x00056fd8) bg_popup_window_pane_g

0x404a,	// (0x0004b772) bg_popup_heading_pane_ParamLimits

0x404a,	// (0x0004b772) bg_popup_heading_pane

0x1378,	// (0x00048aa0) tabs_4_passive_pane_cp_srt_ParamLimits

0x1378,	// (0x00048aa0) tabs_4_passive_pane_cp_srt

0x138a,	// (0x00048ab2) tabs_4_passive_pane_srt_ParamLimits

0x405e,	// (0x0004b786) heading_pane_g2

0x138a,	// (0x00048ab2) tabs_4_passive_pane_srt

0x33e1,	// (0x0004ab09) bg_passive_tab_pane_cp3_srt_ParamLimits

0x33e1,	// (0x0004ab09) bg_passive_tab_pane_cp3_srt

0x4066,	// (0x0004b78e) heading_pane_t1_ParamLimits

0x4066,	// (0x0004b78e) heading_pane_t1

0x407d,	// (0x0004b7a5) heading_pane_t2_ParamLimits

0x407d,	// (0x0004b7a5) heading_pane_t2

0x0001,

0xf8ab,	// (0x00056fd3) heading_pane_t_ParamLimits

0xf8ab,	// (0x00056fd3) heading_pane_t

0x3b75,	// (0x0004b29d) bg_popup_heading_pane_g1

0x3c24,	// (0x0004b34c) bg_popup_heading_pane_g2

0x3c2e,	// (0x0004b356) bg_popup_heading_pane_g3

0x3c38,	// (0x0004b360) bg_popup_heading_pane_g4

0x3c42,	// (0x0004b36a) bg_popup_heading_pane_g5

0x3c4c,	// (0x0004b374) bg_popup_heading_pane_g6

0x3c54,	// (0x0004b37c) bg_popup_heading_pane_g7

0x3c5c,	// (0x0004b384) bg_popup_heading_pane_g8

0x3c66,	// (0x0004b38e) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x00056f8f) bg_popup_heading_pane_g

0x336d,	// (0x0004aa95) bg_popup_sub_pane_g1

0x3375,	// (0x0004aa9d) bg_popup_sub_pane_g2

0x337d,	// (0x0004aaa5) bg_popup_sub_pane_g3

0x3385,	// (0x0004aaad) bg_popup_sub_pane_g4

0x338d,	// (0x0004aab5) bg_popup_sub_pane_g5

0x3395,	// (0x0004aabd) bg_popup_sub_pane_g6

0x339d,	// (0x0004aac5) bg_popup_sub_pane_g7

0x33a5,	// (0x0004aacd) bg_popup_sub_pane_g8

0x33ad,	// (0x0004aad5) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x00056f69) bg_popup_sub_pane_g

0xa4af,	// (0x00051bd7) bg_popup_window_pane_cp5_ParamLimits

0xa4af,	// (0x00051bd7) bg_popup_window_pane_cp5

0xa7e2,	// (0x00051f0a) popup_note_window_g1_ParamLimits

0xa7e2,	// (0x00051f0a) popup_note_window_g1

0xa7ee,	// (0x00051f16) popup_note_window_t1_ParamLimits

0xa7ee,	// (0x00051f16) popup_note_window_t1

0xa804,	// (0x00051f2c) popup_note_window_t2_ParamLimits

0xa804,	// (0x00051f2c) popup_note_window_t2

0xa81a,	// (0x00051f42) popup_note_window_t3_ParamLimits

0xa81a,	// (0x00051f42) popup_note_window_t3

0xa830,	// (0x00051f58) popup_note_window_t4_ParamLimits

0xa830,	// (0x00051f58) popup_note_window_t4

0xa858,	// (0x00051f80) popup_note_window_t5_ParamLimits

0xa858,	// (0x00051f80) popup_note_window_t5

0x0004,

0xf55a,	// (0x00056c82) popup_note_window_t_ParamLimits

0xf55a,	// (0x00056c82) popup_note_window_t

0xa8a2,	// (0x00051fca) bg_popup_window_pane_cp6_ParamLimits

0xa8a2,	// (0x00051fca) bg_popup_window_pane_cp6

0x3af1,	// (0x0004b219) popup_note_image_window_g1_ParamLimits

0x3af1,	// (0x0004b219) popup_note_image_window_g1

0x3afd,	// (0x0004b225) popup_note_image_window_g2_ParamLimits

0x3afd,	// (0x0004b225) popup_note_image_window_g2

0x0001,

0xf835,	// (0x00056f5d) popup_note_image_window_g_ParamLimits

0xf835,	// (0x00056f5d) popup_note_image_window_g

0x3b16,	// (0x0004b23e) popup_note_image_window_t1_ParamLimits

0x3b16,	// (0x0004b23e) popup_note_image_window_t1

0x3b2f,	// (0x0004b257) popup_note_image_window_t2_ParamLimits

0x3b2f,	// (0x0004b257) popup_note_image_window_t2

0x3b48,	// (0x0004b270) popup_note_image_window_t3_ParamLimits

0x3b48,	// (0x0004b270) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x00056f62) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x00056f62) popup_note_image_window_t

0x39b1,	// (0x0004b0d9) bg_popup_window_pane_cp7_ParamLimits

0x39b1,	// (0x0004b0d9) bg_popup_window_pane_cp7

0x39e1,	// (0x0004b109) popup_note_wait_window_g1_ParamLimits

0x39e1,	// (0x0004b109) popup_note_wait_window_g1

0x39ed,	// (0x0004b115) popup_note_wait_window_g2_ParamLimits

0x39ed,	// (0x0004b115) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x00056f4b) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x00056f4b) popup_note_wait_window_g

0x3a05,	// (0x0004b12d) popup_note_wait_window_t1_ParamLimits

0x3a05,	// (0x0004b12d) popup_note_wait_window_t1

0x3a2c,	// (0x0004b154) popup_note_wait_window_t2_ParamLimits

0x3a2c,	// (0x0004b154) popup_note_wait_window_t2

0x3a4a,	// (0x0004b172) popup_note_wait_window_t3_ParamLimits

0x3a4a,	// (0x0004b172) popup_note_wait_window_t3

0x3a5d,	// (0x0004b185) popup_note_wait_window_t4_ParamLimits

0x3a5d,	// (0x0004b185) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x00056f52) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x00056f52) popup_note_wait_window_t

0x3a82,	// (0x0004b1aa) wait_bar_pane_ParamLimits

0x3a82,	// (0x0004b1aa) wait_bar_pane

0xa264,	// (0x0005198c) wait_anim_pane

0xa264,	// (0x0005198c) wait_border_pane

0xa174,	// (0x0005189c) wait_anim_pane_g1

0xa174,	// (0x0005189c) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00056e0b) wait_anim_pane_g

0x3955,	// (0x0004b07d) wait_border_pane_g1

0x3960,	// (0x0004b088) wait_border_pane_g2

0x3969,	// (0x0004b091) wait_border_pane_g3

0x0002,

0xf81c,	// (0x00056f44) wait_border_pane_g

0x37bf,	// (0x0004aee7) bg_popup_window_pane_cp16_ParamLimits

0x37bf,	// (0x0004aee7) bg_popup_window_pane_cp16

0x38bf,	// (0x0004afe7) indicator_popup_pane_cp4_ParamLimits

0x38bf,	// (0x0004afe7) indicator_popup_pane_cp4

0x38d3,	// (0x0004affb) popup_query_data_window_t1_ParamLimits

0x38d3,	// (0x0004affb) popup_query_data_window_t1

0x38e5,	// (0x0004b00d) popup_query_data_window_t2_ParamLimits

0x38e5,	// (0x0004b00d) popup_query_data_window_t2

0x38fe,	// (0x0004b026) popup_query_data_window_t3_ParamLimits

0x38fe,	// (0x0004b026) popup_query_data_window_t3

0x0002,

0xf815,	// (0x00056f3d) popup_query_data_window_t_ParamLimits

0xf815,	// (0x00056f3d) popup_query_data_window_t

0x3918,	// (0x0004b040) query_popup_data_pane_ParamLimits

0x3918,	// (0x0004b040) query_popup_data_pane

0x392c,	// (0x0004b054) query_popup_data_pane_cp1_ParamLimits

0x392c,	// (0x0004b054) query_popup_data_pane_cp1

0x37bf,	// (0x0004aee7) bg_popup_window_pane_cp10_ParamLimits

0x37bf,	// (0x0004aee7) bg_popup_window_pane_cp10

0x37f1,	// (0x0004af19) indicator_popup_pane_ParamLimits

0x37f1,	// (0x0004af19) indicator_popup_pane

0x3813,	// (0x0004af3b) popup_query_code_window_t1_ParamLimits

0x3813,	// (0x0004af3b) popup_query_code_window_t1

0x382d,	// (0x0004af55) popup_query_code_window_t2_ParamLimits

0x382d,	// (0x0004af55) popup_query_code_window_t2

0x3876,	// (0x0004af9e) popup_query_code_window_t3_ParamLimits

0x3876,	// (0x0004af9e) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x00056f36) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x00056f36) popup_query_code_window_t

0x38a5,	// (0x0004afcd) query_popup_pane_ParamLimits

0x38a5,	// (0x0004afcd) query_popup_pane

0xa8a2,	// (0x00051fca) bg_popup_window_pane_cp15_ParamLimits

0xa8a2,	// (0x00051fca) bg_popup_window_pane_cp15

0xa8c2,	// (0x00051fea) indicator_popup_pane_cp1_ParamLimits

0xa8c2,	// (0x00051fea) indicator_popup_pane_cp1

0xa8d5,	// (0x00051ffd) indicator_popup_pane_cp2_ParamLimits

0xa8d5,	// (0x00051ffd) indicator_popup_pane_cp2

0xa8f0,	// (0x00052018) popup_query_data_code_window_g1_ParamLimits

0xa8f0,	// (0x00052018) popup_query_data_code_window_g1

0xa903,	// (0x0005202b) popup_query_data_code_window_t1_ParamLimits

0xa903,	// (0x0005202b) popup_query_data_code_window_t1

0xa915,	// (0x0005203d) popup_query_data_code_window_t2_ParamLimits

0xa915,	// (0x0005203d) popup_query_data_code_window_t2

0xa927,	// (0x0005204f) popup_query_data_code_window_t3_ParamLimits

0xa927,	// (0x0005204f) popup_query_data_code_window_t3

0xa93d,	// (0x00052065) popup_query_data_code_window_t4_ParamLimits

0xa93d,	// (0x00052065) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00056c8d) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00056c8d) popup_query_data_code_window_t

0x292f,	// (0x0004a057) list_single_midp_graphic_pane_g3

0xa957,	// (0x0005207f) query_popup_data_pane_cp2_ParamLimits

0xa96a,	// (0x00052092) query_popup_pane_cp2_ParamLimits

0xa96a,	// (0x00052092) query_popup_pane_cp2

0xa264,	// (0x0005198c) bg_popup_window_pane_cp11

0x37a3,	// (0x0004aecb) heading_pane_cp5

0x37ab,	// (0x0004aed3) listscroll_popup_info_pane

0xa264,	// (0x0005198c) input_focus_pane_cp3

0xa985,	// (0x000520ad) query_popup_pane_t1

0xa993,	// (0x000520bb) list_popup_info_pane_ParamLimits

0xa993,	// (0x000520bb) list_popup_info_pane

0xa9a2,	// (0x000520ca) listscroll_popup_info_pane_g1

0xa9aa,	// (0x000520d2) scroll_pane_cp7

0xa9b4,	// (0x000520dc) popup_info_list_pane_t1_ParamLimits

0xa9b4,	// (0x000520dc) popup_info_list_pane_t1

0xa9ce,	// (0x000520f6) popup_info_list_pane_t2_ParamLimits

0xa9ce,	// (0x000520f6) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00056c96) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00056c96) popup_info_list_pane_t

0xa264,	// (0x0005198c) bg_popup_window_pane_cp12

0x4b3f,	// (0x0004c267) find_popup_pane

0xa4f1,	// (0x00051c19) bg_popup_window_pane_cp3

0xa9e8,	// (0x00052110) heading_pane_cp3

0xa9f7,	// (0x0005211f) listscroll_popup_graphic_pane

0xa264,	// (0x0005198c) bg_popup_window_pane_cp4

0xaa57,	// (0x0005217f) heading_pane_cp4

0xaa61,	// (0x00052189) listscroll_popup_colour_pane

0xaa69,	// (0x00052191) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xaa69,	// (0x00052191) cell_large_graphic_colour_none_popup_pane

0xaa7d,	// (0x000521a5) grid_large_graphic_colour_popup_pane_ParamLimits

0xaa7d,	// (0x000521a5) grid_large_graphic_colour_popup_pane

0xaaa1,	// (0x000521c9) listscroll_popup_colour_pane_g1_ParamLimits

0xaaa1,	// (0x000521c9) listscroll_popup_colour_pane_g1

0xaab8,	// (0x000521e0) listscroll_popup_colour_pane_g2_ParamLimits

0xaab8,	// (0x000521e0) listscroll_popup_colour_pane_g2

0xaacf,	// (0x000521f7) listscroll_popup_colour_pane_g3_ParamLimits

0xaacf,	// (0x000521f7) listscroll_popup_colour_pane_g3

0xaadf,	// (0x00052207) listscroll_popup_colour_pane_g4_ParamLimits

0xaadf,	// (0x00052207) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00056c9b) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00056c9b) listscroll_popup_colour_pane_g

0xaaef,	// (0x00052217) scroll_pane_cp6_ParamLimits

0xaaef,	// (0x00052217) scroll_pane_cp6

0xab01,	// (0x00052229) cell_large_graphic_colour_popup_pane_ParamLimits

0xab01,	// (0x00052229) cell_large_graphic_colour_popup_pane

0xab22,	// (0x0005224a) cell_large_graphic_colour_none_popup_pane_t1

0xa264,	// (0x0005198c) grid_highlight_pane_cp5

0xab31,	// (0x00052259) cell_large_graphic_colour_popup_pane_g1

0xab39,	// (0x00052261) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00056ca4) cell_large_graphic_colour_popup_pane_g

0xab41,	// (0x00052269) cell_large_graphic_colour_popup_pane_g2_copy1

0xab4a,	// (0x00052272) grid_highlight_pane_cp4

0xab52,	// (0x0005227a) bg_popup_window_pane_cp8_ParamLimits

0xab52,	// (0x0005227a) bg_popup_window_pane_cp8

0xab6d,	// (0x00052295) popup_snote_single_text_window_g1_ParamLimits

0xab6d,	// (0x00052295) popup_snote_single_text_window_g1

0xab7f,	// (0x000522a7) popup_snote_single_text_window_t1_ParamLimits

0xab7f,	// (0x000522a7) popup_snote_single_text_window_t1

0xab92,	// (0x000522ba) popup_snote_single_text_window_t2_ParamLimits

0xab92,	// (0x000522ba) popup_snote_single_text_window_t2

0xaba5,	// (0x000522cd) popup_snote_single_text_window_t3_ParamLimits

0xaba5,	// (0x000522cd) popup_snote_single_text_window_t3

0xabde,	// (0x00052306) popup_snote_single_text_window_t4_ParamLimits

0xabde,	// (0x00052306) popup_snote_single_text_window_t4

0xac12,	// (0x0005233a) popup_snote_single_text_window_t5_ParamLimits

0xac12,	// (0x0005233a) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00056ca9) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00056ca9) popup_snote_single_text_window_t

0xac41,	// (0x00052369) bg_popup_window_pane_cp9_ParamLimits

0xac41,	// (0x00052369) bg_popup_window_pane_cp9

0xab6d,	// (0x00052295) popup_snote_single_graphic_window_g1_ParamLimits

0xab6d,	// (0x00052295) popup_snote_single_graphic_window_g1

0xac4f,	// (0x00052377) popup_snote_single_graphic_window_g2_ParamLimits

0xac4f,	// (0x00052377) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00056cb4) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00056cb4) popup_snote_single_graphic_window_g

0xac5b,	// (0x00052383) popup_snote_single_graphic_window_t1_ParamLimits

0xac5b,	// (0x00052383) popup_snote_single_graphic_window_t1

0xac6e,	// (0x00052396) popup_snote_single_graphic_window_t2_ParamLimits

0xac6e,	// (0x00052396) popup_snote_single_graphic_window_t2

0xac81,	// (0x000523a9) popup_snote_single_graphic_window_t3_ParamLimits

0xac81,	// (0x000523a9) popup_snote_single_graphic_window_t3

0xacba,	// (0x000523e2) popup_snote_single_graphic_window_t4_ParamLimits

0xacba,	// (0x000523e2) popup_snote_single_graphic_window_t4

0xacee,	// (0x00052416) popup_snote_single_graphic_window_t5_ParamLimits

0xacee,	// (0x00052416) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00056cb9) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00056cb9) popup_snote_single_graphic_window_t

0x4a7d,	// (0x0004c1a5) grid_graphic_popup_pane_ParamLimits

0x4a7d,	// (0x0004c1a5) grid_graphic_popup_pane

0x4aab,	// (0x0004c1d3) listscroll_popup_graphic_pane_g1_ParamLimits

0x4aab,	// (0x0004c1d3) listscroll_popup_graphic_pane_g1

0xce45,	// (0x0005456d) listscroll_popup_graphic_pane_g2_ParamLimits

0xce45,	// (0x0005456d) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x000570b3) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x000570b3) listscroll_popup_graphic_pane_g

0x4ad3,	// (0x0004c1fb) scroll_pane_cp5

0xcdfd,	// (0x00054525) cell_graphic_popup_pane_ParamLimits

0xcdfd,	// (0x00054525) cell_graphic_popup_pane

0x49f6,	// (0x0004c11e) cell_graphic_popup_pane_g1

0x49fe,	// (0x0004c126) cell_graphic_popup_pane_g2

0xab41,	// (0x00052269) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x000570ac) cell_graphic_popup_pane_g

0x4a07,	// (0x0004c12f) cell_graphic_popup_pane_t2

0xab4a,	// (0x00052272) grid_highlight_pane_cp3

0xad2f,	// (0x00052457) list_gen_pane_ParamLimits

0xad2f,	// (0x00052457) list_gen_pane

0xad61,	// (0x00052489) scroll_pane

0xcdb4,	// (0x000544dc) bg_list_pane_g1_ParamLimits

0xcdb4,	// (0x000544dc) bg_list_pane_g1

0x496b,	// (0x0004c093) bg_list_pane_g2_ParamLimits

0x496b,	// (0x0004c093) bg_list_pane_g2

0x4980,	// (0x0004c0a8) bg_list_pane_g3_ParamLimits

0x4980,	// (0x0004c0a8) bg_list_pane_g3

0x4994,	// (0x0004c0bc) bg_list_pane_g4_ParamLimits

0x4994,	// (0x0004c0bc) bg_list_pane_g4

0xcdd1,	// (0x000544f9) bg_list_pane_g5_ParamLimits

0xcdd1,	// (0x000544f9) bg_list_pane_g5

0x0004,

0xf979,	// (0x000570a1) bg_list_pane_g_ParamLimits

0xf979,	// (0x000570a1) bg_list_pane_g

0xc03b,	// (0x00053763) list_double2_graphic_large_graphic_pane_ParamLimits

0xc03b,	// (0x00053763) list_double2_graphic_large_graphic_pane

0xc03b,	// (0x00053763) list_double2_graphic_pane_ParamLimits

0xc03b,	// (0x00053763) list_double2_graphic_pane

0xc03b,	// (0x00053763) list_double2_large_graphic_pane_ParamLimits

0xc03b,	// (0x00053763) list_double2_large_graphic_pane

0xc03b,	// (0x00053763) list_double2_pane_ParamLimits

0xc03b,	// (0x00053763) list_double2_pane

0xc03b,	// (0x00053763) list_double_graphic_heading_pane_ParamLimits

0xc03b,	// (0x00053763) list_double_graphic_heading_pane

0xc03b,	// (0x00053763) list_double_graphic_pane_ParamLimits

0xc03b,	// (0x00053763) list_double_graphic_pane

0xc03b,	// (0x00053763) list_double_heading_pane_ParamLimits

0xc03b,	// (0x00053763) list_double_heading_pane

0xc03b,	// (0x00053763) list_double_large_graphic_pane_ParamLimits

0xc03b,	// (0x00053763) list_double_large_graphic_pane

0xc03b,	// (0x00053763) list_double_number_pane_ParamLimits

0xc03b,	// (0x00053763) list_double_number_pane

0xc03b,	// (0x00053763) list_double_pane_ParamLimits

0xc03b,	// (0x00053763) list_double_pane

0xc03b,	// (0x00053763) list_double_time_pane_ParamLimits

0xc03b,	// (0x00053763) list_double_time_pane

0xc03b,	// (0x00053763) list_setting_number_pane_ParamLimits

0xc03b,	// (0x00053763) list_setting_number_pane

0xc03b,	// (0x00053763) list_setting_pane_ParamLimits

0xc03b,	// (0x00053763) list_setting_pane

0xcd77,	// (0x0005449f) list_single_2graphic_pane_ParamLimits

0xcd77,	// (0x0005449f) list_single_2graphic_pane

0xcd77,	// (0x0005449f) list_single_graphic_heading_pane_ParamLimits

0xcd77,	// (0x0005449f) list_single_graphic_heading_pane

0xcd77,	// (0x0005449f) list_single_graphic_pane_ParamLimits

0xcd77,	// (0x0005449f) list_single_graphic_pane

0xcd77,	// (0x0005449f) list_single_heading_pane_ParamLimits

0xcd77,	// (0x0005449f) list_single_heading_pane

0xcd77,	// (0x0005449f) list_single_large_graphic_pane_ParamLimits

0xcd77,	// (0x0005449f) list_single_large_graphic_pane

0xcd77,	// (0x0005449f) list_single_number_heading_pane_ParamLimits

0xcd77,	// (0x0005449f) list_single_number_heading_pane

0xcd77,	// (0x0005449f) list_single_number_pane_ParamLimits

0xcd77,	// (0x0005449f) list_single_number_pane

0xcd77,	// (0x0005449f) list_single_pane_ParamLimits

0xcd77,	// (0x0005449f) list_single_pane

0xa264,	// (0x0005198c) list_highlight_pane_cp1

0x0f5e,	// (0x00048686) list_single_pane_g1_ParamLimits

0x0f5e,	// (0x00048686) list_single_pane_g1

0x0f6a,	// (0x00048692) list_single_pane_g2_ParamLimits

0x0f6a,	// (0x00048692) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00056cd5) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00056cd5) list_single_pane_g

0xee89,	// (0x000565b1) list_single_pane_t1_ParamLimits

0xee89,	// (0x000565b1) list_single_pane_t1

0x0f5e,	// (0x00048686) list_single_number_pane_g1_ParamLimits

0x0f5e,	// (0x00048686) list_single_number_pane_g1

0x0f6a,	// (0x00048692) list_single_number_pane_g2_ParamLimits

0x0f6a,	// (0x00048692) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00056cd5) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00056cd5) list_single_number_pane_g

0xeda4,	// (0x000564cc) list_single_number_pane_t1_ParamLimits

0xeda4,	// (0x000564cc) list_single_number_pane_t1

0xee77,	// (0x0005659f) list_single_number_pane_t2_ParamLimits

0xee77,	// (0x0005659f) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x00057062) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x00057062) list_single_number_pane_t

0x98b2,	// (0x00050fda) list_single_graphic_pane_g1_ParamLimits

0x98b2,	// (0x00050fda) list_single_graphic_pane_g1

0x0f5e,	// (0x00048686) list_single_graphic_pane_g2_ParamLimits

0x0f5e,	// (0x00048686) list_single_graphic_pane_g2

0x0f6a,	// (0x00048692) list_single_graphic_pane_g3_ParamLimits

0x0f6a,	// (0x00048692) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00056cc4) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00056cc4) list_single_graphic_pane_g

0x98be,	// (0x00050fe6) list_single_graphic_pane_t1_ParamLimits

0x98be,	// (0x00050fe6) list_single_graphic_pane_t1

0x98d4,	// (0x00050ffc) list_single_heading_pane_g1_ParamLimits

0x98d4,	// (0x00050ffc) list_single_heading_pane_g1

0x0f6a,	// (0x00048692) list_single_heading_pane_g2_ParamLimits

0x0f6a,	// (0x00048692) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00056ccb) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00056ccb) list_single_heading_pane_g

0x98e7,	// (0x0005100f) list_single_heading_pane_t1_ParamLimits

0x98e7,	// (0x0005100f) list_single_heading_pane_t1

0x98fd,	// (0x00051025) list_single_heading_pane_t2_ParamLimits

0x98fd,	// (0x00051025) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00056cd0) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00056cd0) list_single_heading_pane_t

0x0f5e,	// (0x00048686) list_single_number_heading_pane_g1_ParamLimits

0x0f5e,	// (0x00048686) list_single_number_heading_pane_g1

0x0f6a,	// (0x00048692) list_single_number_heading_pane_g2_ParamLimits

0x0f6a,	// (0x00048692) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00056cd5) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00056cd5) list_single_number_heading_pane_g

0x990f,	// (0x00051037) list_single_number_heading_pane_t1_ParamLimits

0x990f,	// (0x00051037) list_single_number_heading_pane_t1

0xecab,	// (0x000563d3) list_single_number_heading_pane_t2_ParamLimits

0xecab,	// (0x000563d3) list_single_number_heading_pane_t2

0xecbd,	// (0x000563e5) list_single_number_heading_pane_t3_ParamLimits

0xecbd,	// (0x000563e5) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00056cda) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00056cda) list_single_number_heading_pane_t

0x9925,	// (0x0005104d) list_single_graphic_heading_pane_g1_ParamLimits

0x9925,	// (0x0005104d) list_single_graphic_heading_pane_g1

0x993d,	// (0x00051065) list_single_graphic_heading_pane_g4_ParamLimits

0x993d,	// (0x00051065) list_single_graphic_heading_pane_g4

0x0f6a,	// (0x00048692) list_single_graphic_heading_pane_g5_ParamLimits

0x0f6a,	// (0x00048692) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00056ce1) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00056ce1) list_single_graphic_heading_pane_g

0x990f,	// (0x00051037) list_single_graphic_heading_pane_t1_ParamLimits

0x990f,	// (0x00051037) list_single_graphic_heading_pane_t1

0x994e,	// (0x00051076) list_single_graphic_heading_pane_t2_ParamLimits

0x994e,	// (0x00051076) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00056ce8) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00056ce8) list_single_graphic_heading_pane_t

0x141d,	// (0x00048b45) list_single_large_graphic_pane_g1_ParamLimits

0x141d,	// (0x00048b45) list_single_large_graphic_pane_g1

0x0f5e,	// (0x00048686) list_single_large_graphic_pane_g2_ParamLimits

0x0f5e,	// (0x00048686) list_single_large_graphic_pane_g2

0x0f6a,	// (0x00048692) list_single_large_graphic_pane_g3_ParamLimits

0x0f6a,	// (0x00048692) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00056ced) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00056ced) list_single_large_graphic_pane_g

0x3960,	// (0x0004b088) wait_border_pane_g2_copy1

0xad95,	// (0x000524bd) list_single_large_graphic_pane_g4_cp2

0xeccf,	// (0x000563f7) list_single_large_graphic_pane_t1_ParamLimits

0xeccf,	// (0x000563f7) list_single_large_graphic_pane_t1

0x9966,	// (0x0005108e) list_double_pane_g1_ParamLimits

0x9966,	// (0x0005108e) list_double_pane_g1

0x9972,	// (0x0005109a) list_double_pane_g2_ParamLimits

0x9972,	// (0x0005109a) list_double_pane_g2

0x0001,

0xf5cc,	// (0x00056cf4) list_double_pane_g_ParamLimits

0xf5cc,	// (0x00056cf4) list_double_pane_g

0x997e,	// (0x000510a6) list_double_pane_t1_ParamLimits

0x997e,	// (0x000510a6) list_double_pane_t1

0x9994,	// (0x000510bc) list_double_pane_t2_ParamLimits

0x9994,	// (0x000510bc) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00056cf9) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00056cf9) list_double_pane_t

0x99a6,	// (0x000510ce) list_double2_pane_g1_ParamLimits

0x99a6,	// (0x000510ce) list_double2_pane_g1

0x99b7,	// (0x000510df) list_double2_pane_g2_ParamLimits

0x99b7,	// (0x000510df) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00056cfe) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00056cfe) list_double2_pane_g

0x99c3,	// (0x000510eb) list_double2_pane_t1_ParamLimits

0x99c3,	// (0x000510eb) list_double2_pane_t1

0x99d9,	// (0x00051101) list_double2_pane_t2_ParamLimits

0x99d9,	// (0x00051101) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00056d03) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00056d03) list_double2_pane_t

0x9966,	// (0x0005108e) list_double_number_pane_g1_ParamLimits

0x9966,	// (0x0005108e) list_double_number_pane_g1

0x9972,	// (0x0005109a) list_double_number_pane_g2_ParamLimits

0x9972,	// (0x0005109a) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x00056cf4) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x00056cf4) list_double_number_pane_g

0x99eb,	// (0x00051113) list_double_number_pane_t1_ParamLimits

0x99eb,	// (0x00051113) list_double_number_pane_t1

0x99fd,	// (0x00051125) list_double_number_pane_t2_ParamLimits

0x99fd,	// (0x00051125) list_double_number_pane_t2

0x9a13,	// (0x0005113b) list_double_number_pane_t3_ParamLimits

0x9a13,	// (0x0005113b) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00056d08) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00056d08) list_double_number_pane_t

0x9a25,	// (0x0005114d) list_double_graphic_pane_g1_ParamLimits

0x9a25,	// (0x0005114d) list_double_graphic_pane_g1

0x9a31,	// (0x00051159) list_double_graphic_pane_g2_ParamLimits

0x9a31,	// (0x00051159) list_double_graphic_pane_g2

0x4e7d,	// (0x0004c5a5) list_double_graphic_pane_g3_ParamLimits

0x4e7d,	// (0x0004c5a5) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00056d0f) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00056d0f) list_double_graphic_pane_g

0x9a4c,	// (0x00051174) list_double_graphic_pane_t1_ParamLimits

0x9a4c,	// (0x00051174) list_double_graphic_pane_t1

0x9a62,	// (0x0005118a) list_double_graphic_pane_t2_ParamLimits

0x9a62,	// (0x0005118a) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00056d18) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00056d18) list_double_graphic_pane_t

0x9a74,	// (0x0005119c) list_double2_graphic_pane_g1_ParamLimits

0x9a74,	// (0x0005119c) list_double2_graphic_pane_g1

0x9a80,	// (0x000511a8) list_double2_graphic_pane_g2_ParamLimits

0x9a80,	// (0x000511a8) list_double2_graphic_pane_g2

0x9a8c,	// (0x000511b4) list_double2_graphic_pane_g3_ParamLimits

0x9a8c,	// (0x000511b4) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00056d1d) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00056d1d) list_double2_graphic_pane_g

0x9a98,	// (0x000511c0) list_double2_graphic_pane_t1_ParamLimits

0x9a98,	// (0x000511c0) list_double2_graphic_pane_t1

0x9aae,	// (0x000511d6) list_double2_graphic_pane_t2_ParamLimits

0x9aae,	// (0x000511d6) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00056d24) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00056d24) list_double2_graphic_pane_t

0x9ac0,	// (0x000511e8) list_double_large_graphic_pane_g1_ParamLimits

0x9ac0,	// (0x000511e8) list_double_large_graphic_pane_g1

0x9adf,	// (0x00051207) list_double_large_graphic_pane_g2_ParamLimits

0x9adf,	// (0x00051207) list_double_large_graphic_pane_g2

0x9972,	// (0x0005109a) list_double_large_graphic_pane_g3_ParamLimits

0x9972,	// (0x0005109a) list_double_large_graphic_pane_g3

0x9af5,	// (0x0005121d) list_double_large_graphic_pane_g4_ParamLimits

0x9af5,	// (0x0005121d) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00056d29) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00056d29) list_double_large_graphic_pane_g

0x9b08,	// (0x00051230) list_double_large_graphic_pane_t1_ParamLimits

0x9b08,	// (0x00051230) list_double_large_graphic_pane_t1

0x9b21,	// (0x00051249) list_double_large_graphic_pane_t2_ParamLimits

0x9b21,	// (0x00051249) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00056d34) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00056d34) list_double_large_graphic_pane_t

0xad9d,	// (0x000524c5) list_double2_large_graphic_pane_g1_ParamLimits

0xad9d,	// (0x000524c5) list_double2_large_graphic_pane_g1

0x9b33,	// (0x0005125b) list_double2_large_graphic_pane_g2_ParamLimits

0x9b33,	// (0x0005125b) list_double2_large_graphic_pane_g2

0x9a8c,	// (0x000511b4) list_double2_large_graphic_pane_g3_ParamLimits

0x9a8c,	// (0x000511b4) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00056d39) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00056d39) list_double2_large_graphic_pane_g

0x9b44,	// (0x0005126c) list_double2_large_graphic_pane_t1_ParamLimits

0x9b44,	// (0x0005126c) list_double2_large_graphic_pane_t1

0x9b5a,	// (0x00051282) list_double2_large_graphic_pane_t2_ParamLimits

0x9b5a,	// (0x00051282) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00056d40) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00056d40) list_double2_large_graphic_pane_t

0x9b6c,	// (0x00051294) list_double_heading_pane_g1_ParamLimits

0x9b6c,	// (0x00051294) list_double_heading_pane_g1

0xe484,	// (0x00055bac) list_double_heading_pane_g2_ParamLimits

0xe484,	// (0x00055bac) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x00056d45) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x00056d45) list_double_heading_pane_g

0x9b7d,	// (0x000512a5) list_double_heading_pane_t1_ParamLimits

0x9b7d,	// (0x000512a5) list_double_heading_pane_t1

0x99d9,	// (0x00051101) list_double_heading_pane_t2_ParamLimits

0x99d9,	// (0x00051101) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x00056d4a) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x00056d4a) list_double_heading_pane_t

0x9a25,	// (0x0005114d) list_double_graphic_heading_pane_g1_ParamLimits

0x9a25,	// (0x0005114d) list_double_graphic_heading_pane_g1

0x9b6c,	// (0x00051294) list_double_graphic_heading_pane_g2_ParamLimits

0x9b6c,	// (0x00051294) list_double_graphic_heading_pane_g2

0xe484,	// (0x00055bac) list_double_graphic_heading_pane_g3_ParamLimits

0xe484,	// (0x00055bac) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x00056d4f) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x00056d4f) list_double_graphic_heading_pane_g

0x9b93,	// (0x000512bb) list_double_graphic_heading_pane_t1_ParamLimits

0x9b93,	// (0x000512bb) list_double_graphic_heading_pane_t1

0x9aae,	// (0x000511d6) list_double_graphic_heading_pane_t2_ParamLimits

0x9aae,	// (0x000511d6) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x00056d56) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x00056d56) list_double_graphic_heading_pane_t

0x9ba9,	// (0x000512d1) list_double_time_pane_g1_ParamLimits

0x9ba9,	// (0x000512d1) list_double_time_pane_g1

0x9bba,	// (0x000512e2) list_double_time_pane_g2_ParamLimits

0x9bba,	// (0x000512e2) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00056d5b) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00056d5b) list_double_time_pane_g

0x9bc6,	// (0x000512ee) list_double_time_pane_t1_ParamLimits

0x9bc6,	// (0x000512ee) list_double_time_pane_t1

0x9bdc,	// (0x00051304) list_double_time_pane_t2_ParamLimits

0x9bdc,	// (0x00051304) list_double_time_pane_t2

0x9bee,	// (0x00051316) list_double_time_pane_t3_ParamLimits

0x9bee,	// (0x00051316) list_double_time_pane_t3

0x9c00,	// (0x00051328) list_double_time_pane_t4_ParamLimits

0x9c00,	// (0x00051328) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00056d60) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00056d60) list_double_time_pane_t

0x9c12,	// (0x0005133a) list_setting_pane_g1_ParamLimits

0x9c12,	// (0x0005133a) list_setting_pane_g1

0x9c1e,	// (0x00051346) list_setting_pane_g2_ParamLimits

0x9c1e,	// (0x00051346) list_setting_pane_g2

0x0001,

0xf641,	// (0x00056d69) list_setting_pane_g_ParamLimits

0xf641,	// (0x00056d69) list_setting_pane_g

0x9c2a,	// (0x00051352) list_setting_pane_t1_ParamLimits

0x9c2a,	// (0x00051352) list_setting_pane_t1

0x9c44,	// (0x0005136c) list_setting_pane_t2_ParamLimits

0x9c44,	// (0x0005136c) list_setting_pane_t2

0x0002,

0xf646,	// (0x00056d6e) list_setting_pane_t_ParamLimits

0xf646,	// (0x00056d6e) list_setting_pane_t

0x9c83,	// (0x000513ab) set_value_pane_cp_ParamLimits

0x9c83,	// (0x000513ab) set_value_pane_cp

0x9c91,	// (0x000513b9) list_setting_number_pane_g1_ParamLimits

0x9c91,	// (0x000513b9) list_setting_number_pane_g1

0x9c9d,	// (0x000513c5) list_setting_number_pane_g2_ParamLimits

0x9c9d,	// (0x000513c5) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x00056d75) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x00056d75) list_setting_number_pane_g

0x9ca9,	// (0x000513d1) list_setting_number_pane_t1_ParamLimits

0x9ca9,	// (0x000513d1) list_setting_number_pane_t1

0x9cc2,	// (0x000513ea) list_setting_number_pane_t2_ParamLimits

0x9cc2,	// (0x000513ea) list_setting_number_pane_t2

0x9cdc,	// (0x00051404) list_setting_number_pane_t3_ParamLimits

0x9cdc,	// (0x00051404) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00056d7a) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00056d7a) list_setting_number_pane_t

0x9c83,	// (0x000513ab) set_value_pane_ParamLimits

0x9c83,	// (0x000513ab) set_value_pane

0xada9,	// (0x000524d1) bg_set_opt_pane_ParamLimits

0xada9,	// (0x000524d1) bg_set_opt_pane

0xe490,	// (0x00055bb8) set_value_pane_t1

0xadca,	// (0x000524f2) slider_set_pane_cp3

0xadd3,	// (0x000524fb) volume_small_pane_cp

0xaddc,	// (0x00052504) list_form_gen_pane

0xade5,	// (0x0005250d) scroll_pane_cp8

0x9d1f,	// (0x00051447) form_field_data_pane_ParamLimits

0x9d1f,	// (0x00051447) form_field_data_pane

0x9d3c,	// (0x00051464) form_field_data_wide_pane_ParamLimits

0x9d3c,	// (0x00051464) form_field_data_wide_pane

0x9d60,	// (0x00051488) form_field_popup_pane_ParamLimits

0x9d60,	// (0x00051488) form_field_popup_pane

0xe4ae,	// (0x00055bd6) form_field_popup_wide_pane_ParamLimits

0xe4ae,	// (0x00055bd6) form_field_popup_wide_pane

0xe4cf,	// (0x00055bf7) form_field_slider_pane_ParamLimits

0xe4cf,	// (0x00055bf7) form_field_slider_pane

0xe4e2,	// (0x00055c0a) form_field_slider_wide_pane_ParamLimits

0xe4e2,	// (0x00055c0a) form_field_slider_wide_pane

0xadf6,	// (0x0005251e) data_form_pane

0x9d8c,	// (0x000514b4) form_field_data_pane_t1

0xae02,	// (0x0005252a) input_focus_pane

0xe4f5,	// (0x00055c1d) data_form_wide_pane

0xe512,	// (0x00055c3a) form_field_data_wide_pane_t1

0xab5f,	// (0x00052287) input_focus_pane_cp6

0x9da6,	// (0x000514ce) form_field_popup_pane_t1

0xae02,	// (0x0005252a) input_focus_pane_cp7

0xae30,	// (0x00052558) list_form_pane

0xe53c,	// (0x00055c64) form_field_popup_wide_pane_t1

0xae02,	// (0x0005252a) input_focus_pane_cp8

0xae3c,	// (0x00052564) list_form_wide_pane

0x9dc8,	// (0x000514f0) form_field_slider_pane_t1_ParamLimits

0x9dc8,	// (0x000514f0) form_field_slider_pane_t1

0x9de0,	// (0x00051508) form_field_slider_pane_t2_ParamLimits

0x9de0,	// (0x00051508) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00056d8a) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00056d8a) form_field_slider_pane_t

0xa4af,	// (0x00051bd7) input_focus_pane_cp9_ParamLimits

0xa4af,	// (0x00051bd7) input_focus_pane_cp9

0x9df5,	// (0x0005151d) slider_cont_pane_ParamLimits

0x9df5,	// (0x0005151d) slider_cont_pane

0xae48,	// (0x00052570) form_field_slider_wide_pane_t1_ParamLimits

0xae48,	// (0x00052570) form_field_slider_wide_pane_t1

0xe551,	// (0x00055c79) form_field_slider_wide_pane_t2_ParamLimits

0xe551,	// (0x00055c79) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00056d8f) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00056d8f) form_field_slider_wide_pane_t

0xa4af,	// (0x00051bd7) input_focus_pane_cp10_ParamLimits

0xa4af,	// (0x00051bd7) input_focus_pane_cp10

0x9e09,	// (0x00051531) slider_cont_pane_cp1_ParamLimits

0x9e09,	// (0x00051531) slider_cont_pane_cp1

0x9e1d,	// (0x00051545) slider_form_pane_cp

0xae5a,	// (0x00052582) input_focus_pane_g1

0xae62,	// (0x0005258a) input_focus_pane_g2

0xae6a,	// (0x00052592) input_focus_pane_g3

0xae72,	// (0x0005259a) input_focus_pane_g4

0xae7a,	// (0x000525a2) input_focus_pane_g5

0xae82,	// (0x000525aa) input_focus_pane_g6

0xae8a,	// (0x000525b2) input_focus_pane_g7

0xae92,	// (0x000525ba) input_focus_pane_g8

0xae9a,	// (0x000525c2) input_focus_pane_g9

0xa174,	// (0x0005189c) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00056d94) input_focus_pane_g

0x3969,	// (0x0004b091) wait_border_pane_g3_copy1

0x9e25,	// (0x0005154d) data_form_pane_t1

0xa174,	// (0x0005189c) wait_anim_pane_g1_copy1

0x9f43,	// (0x0005166b) data_form_wide_pane_t1

0xece5,	// (0x0005640d) list_form_graphic_pane_cp_ParamLimits

0xece5,	// (0x0005640d) list_form_graphic_pane_cp

0x48c0,	// (0x0004bfe8) slider_form_pane_g1

0x48c9,	// (0x0004bff1) slider_form_pane_g2

0x0006,

0xf96a,	// (0x00057092) slider_form_pane_g

0x9e41,	// (0x00051569) list_form_graphic_pane_ParamLimits

0x9e41,	// (0x00051569) list_form_graphic_pane

0xecf7,	// (0x0005641f) list_form_graphic_pane_g1

0xecff,	// (0x00056427) list_form_graphic_pane_t1_ParamLimits

0xecff,	// (0x00056427) list_form_graphic_pane_t1

0xa4f1,	// (0x00051c19) list_highlight_pane_cp5_ParamLimits

0xa4f1,	// (0x00051c19) list_highlight_pane_cp5

0x9e52,	// (0x0005157a) find_pane_g1

0xaea2,	// (0x000525ca) input_find_pane

0x9e5b,	// (0x00051583) input_find_pane_g1_ParamLimits

0x9e5b,	// (0x00051583) input_find_pane_g1

0x9e67,	// (0x0005158f) input_find_pane_t1_ParamLimits

0x9e67,	// (0x0005158f) input_find_pane_t1

0x9e7c,	// (0x000515a4) input_find_pane_t2_ParamLimits

0x9e7c,	// (0x000515a4) input_find_pane_t2

0x0001,

0xf681,	// (0x00056da9) input_find_pane_t_ParamLimits

0xf681,	// (0x00056da9) input_find_pane_t

0xaeab,	// (0x000525d3) input_focus_pane_cp5_ParamLimits

0xaeab,	// (0x000525d3) input_focus_pane_cp5

0xaeca,	// (0x000525f2) bg_popup_window_pane_cp2_ParamLimits

0xaeca,	// (0x000525f2) bg_popup_window_pane_cp2

0xaed7,	// (0x000525ff) listscroll_menu_pane_ParamLimits

0xaed7,	// (0x000525ff) listscroll_menu_pane

0xaee3,	// (0x0005260b) popup_submenu_window_ParamLimits

0xaee3,	// (0x0005260b) popup_submenu_window

0xaf13,	// (0x0005263b) find_popup_pane_g1

0xaf1b,	// (0x00052643) input_popup_find_pane_cp

0xaf25,	// (0x0005264d) input_focus_pane_cp4_ParamLimits

0xaf25,	// (0x0005264d) input_focus_pane_cp4

0xaf41,	// (0x00052669) input_popup_find_pane_t1_ParamLimits

0xaf41,	// (0x00052669) input_popup_find_pane_t1

0xa264,	// (0x0005198c) bg_popup_sub_pane_cp

0xaf6f,	// (0x00052697) listscroll_popup_sub_pane

0xaf77,	// (0x0005269f) list_submenu_pane_ParamLimits

0xaf77,	// (0x0005269f) list_submenu_pane

0xaf88,	// (0x000526b0) scroll_pane_cp4

0xaf90,	// (0x000526b8) list_single_popup_submenu_pane_ParamLimits

0xaf90,	// (0x000526b8) list_single_popup_submenu_pane

0xafa5,	// (0x000526cd) list_single_popup_submenu_pane_g1

0xafad,	// (0x000526d5) list_single_popup_submenu_pane_t1_ParamLimits

0xafad,	// (0x000526d5) list_single_popup_submenu_pane_t1

0xa4af,	// (0x00051bd7) bg_active_tab_pane_cp1_ParamLimits

0xa4af,	// (0x00051bd7) bg_active_tab_pane_cp1

0xafc2,	// (0x000526ea) tabs_2_active_pane_g1

0xafca,	// (0x000526f2) tabs_2_active_pane_t1

0xa4af,	// (0x00051bd7) bg_passive_tab_pane_cp1_ParamLimits

0xa4af,	// (0x00051bd7) bg_passive_tab_pane_cp1

0xafc2,	// (0x000526ea) tabs_2_passive_pane_g1

0xafca,	// (0x000526f2) tabs_2_passive_pane_t1

0xa4f1,	// (0x00051c19) bg_active_tab_pane_cp4

0xafdc,	// (0x00052704) tabs_2_long_active_pane_t1

0x2e37,	// (0x0004a55f) bg_passive_tab_pane_cp4

0x0f9b,	// (0x000486c3) list_single_midp_graphic_pane_g4_ParamLimits

0xa4f1,	// (0x00051c19) bg_active_tab_pane_cp5

0xafef,	// (0x00052717) tabs_3_long_active_pane_t1

0x2e37,	// (0x0004a55f) bg_passive_tab_pane_cp5

0x0f9b,	// (0x000486c3) list_single_midp_graphic_pane_g4

0xa4f1,	// (0x00051c19) bg_popup_window_pane_cp13_ParamLimits

0xa4f1,	// (0x00051c19) bg_popup_window_pane_cp13

0xe56c,	// (0x00055c94) listscroll_popup_fast_pane_ParamLimits

0xe56c,	// (0x00055c94) listscroll_popup_fast_pane

0xe57b,	// (0x00055ca3) grid_popup_fast_pane_ParamLimits

0xe57b,	// (0x00055ca3) grid_popup_fast_pane

0xe58d,	// (0x00055cb5) scroll_pane_cp9_ParamLimits

0xe58d,	// (0x00055cb5) scroll_pane_cp9

0x61f9,	// (0x0004d921) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x61f9,	// (0x0004d921) list_single_graphic_hl_pane_t1_cp2

0xe5b1,	// (0x00055cd9) input_focus_pane_cp20_ParamLimits

0xe5b1,	// (0x00055cd9) input_focus_pane_cp20

0xe5bf,	// (0x00055ce7) query_popup_data_pane_t1_ParamLimits

0xe5bf,	// (0x00055ce7) query_popup_data_pane_t1

0xe5d2,	// (0x00055cfa) query_popup_data_pane_t2_ParamLimits

0xe5d2,	// (0x00055cfa) query_popup_data_pane_t2

0xe618,	// (0x00055d40) query_popup_data_pane_t3_ParamLimits

0xe618,	// (0x00055d40) query_popup_data_pane_t3

0xe659,	// (0x00055d81) query_popup_data_pane_t4_ParamLimits

0xe659,	// (0x00055d81) query_popup_data_pane_t4

0xe695,	// (0x00055dbd) query_popup_data_pane_t5_ParamLimits

0xe695,	// (0x00055dbd) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00056dae) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00056dae) query_popup_data_pane_t

0xae5a,	// (0x00052582) bg_set_opt_pane_g1

0xae62,	// (0x0005258a) bg_set_opt_pane_g2

0xae6a,	// (0x00052592) bg_set_opt_pane_g3

0xae72,	// (0x0005259a) bg_set_opt_pane_g4

0xae7a,	// (0x000525a2) bg_set_opt_pane_g5

0xae82,	// (0x000525aa) bg_set_opt_pane_g6

0xae8a,	// (0x000525b2) bg_set_opt_pane_g7

0xae92,	// (0x000525ba) bg_set_opt_pane_g8

0xae9a,	// (0x000525c2) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00056db9) bg_set_opt_pane_g

0x058f,	// (0x00047cb7) control_top_pane_stacon_ParamLimits

0x058f,	// (0x00047cb7) control_top_pane_stacon

0x05e2,	// (0x00047d0a) signal_pane_stacon_ParamLimits

0x05e2,	// (0x00047d0a) signal_pane_stacon

0x279a,	// (0x00049ec2) stacon_top_pane_g1_ParamLimits

0x279a,	// (0x00049ec2) stacon_top_pane_g1

0x0607,	// (0x00047d2f) title_pane_stacon_ParamLimits

0x0607,	// (0x00047d2f) title_pane_stacon

0x0631,	// (0x00047d59) uni_indicator_pane_stacon_ParamLimits

0x0631,	// (0x00047d59) uni_indicator_pane_stacon

0x0646,	// (0x00047d6e) battery_pane_stacon_ParamLimits

0x0646,	// (0x00047d6e) battery_pane_stacon

0x068a,	// (0x00047db2) control_bottom_pane_stacon_ParamLimits

0x068a,	// (0x00047db2) control_bottom_pane_stacon

0x06ad,	// (0x00047dd5) navi_pane_stacon_ParamLimits

0x06ad,	// (0x00047dd5) navi_pane_stacon

0x27bc,	// (0x00049ee4) stacon_bottom_pane_g1_ParamLimits

0x27bc,	// (0x00049ee4) stacon_bottom_pane_g1

0x0121,	// (0x00047849) aid_levels_signal_lsc_ParamLimits

0x0121,	// (0x00047849) aid_levels_signal_lsc

0x0138,	// (0x00047860) signal_pane_stacon_g1_ParamLimits

0x0138,	// (0x00047860) signal_pane_stacon_g1

0x014c,	// (0x00047874) signal_pane_stacon_g2_ParamLimits

0x014c,	// (0x00047874) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00056dcc) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00056dcc) signal_pane_stacon_g

0x0181,	// (0x000478a9) title_pane_stacon_t1_ParamLimits

0x0181,	// (0x000478a9) title_pane_stacon_t1

0xe6d9,	// (0x00055e01) uni_indicator_pane_stacon_g1

0xe6e3,	// (0x00055e0b) uni_indicator_pane_stacon_g2

0xe6ed,	// (0x00055e15) uni_indicator_pane_stacon_g3

0xe6f7,	// (0x00055e1f) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00056dd8) uni_indicator_pane_stacon_g

0x01a6,	// (0x000478ce) control_top_pane_stacon_g1

0x01ae,	// (0x000478d6) control_top_pane_stacon_t1_ParamLimits

0x01ae,	// (0x000478d6) control_top_pane_stacon_t1

0x01e5,	// (0x0004790d) aid_levels_battery_lsc_ParamLimits

0x01e5,	// (0x0004790d) aid_levels_battery_lsc

0x01fd,	// (0x00047925) battery_pane_stacon_g1_ParamLimits

0x01fd,	// (0x00047925) battery_pane_stacon_g1

0x0210,	// (0x00047938) battery_pane_stacon_g2_ParamLimits

0x0210,	// (0x00047938) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x00056de1) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x00056de1) battery_pane_stacon_g

0x024e,	// (0x00047976) navi_icon_pane_stacon

0x0262,	// (0x0004798a) navi_navi_pane_stacon

0x024e,	// (0x00047976) navi_text_pane_stacon

0x01a6,	// (0x000478ce) control_bottom_pane_stacon_g1

0x0278,	// (0x000479a0) control_bottom_pane_stacon_t1_ParamLimits

0x0278,	// (0x000479a0) control_bottom_pane_stacon_t1

0xb001,	// (0x00052729) grid_app_pane_ParamLimits

0xb001,	// (0x00052729) grid_app_pane

0xb039,	// (0x00052761) scroll_pane_cp15_ParamLimits

0xb039,	// (0x00052761) scroll_pane_cp15

0xb04e,	// (0x00052776) cell_app_pane_ParamLimits

0xb04e,	// (0x00052776) cell_app_pane

0xb09b,	// (0x000527c3) cell_app_pane_g1_ParamLimits

0xb09b,	// (0x000527c3) cell_app_pane_g1

0xe71b,	// (0x00055e43) cell_app_pane_g2_ParamLimits

0xe71b,	// (0x00055e43) cell_app_pane_g2

0x0001,

0xf6be,	// (0x00056de6) cell_app_pane_g_ParamLimits

0xf6be,	// (0x00056de6) cell_app_pane_g

0xb0bf,	// (0x000527e7) cell_app_pane_t1_ParamLimits

0xb0bf,	// (0x000527e7) cell_app_pane_t1

0xe727,	// (0x00055e4f) grid_highlight_pane_ParamLimits

0xe727,	// (0x00055e4f) grid_highlight_pane

0xae5a,	// (0x00052582) cell_highlight_pane_g1

0xae62,	// (0x0005258a) cell_highlight_pane_g2

0xae6a,	// (0x00052592) cell_highlight_pane_g3

0xae72,	// (0x0005259a) cell_highlight_pane_g4

0xae7a,	// (0x000525a2) cell_highlight_pane_g5

0xae82,	// (0x000525aa) cell_highlight_pane_g6

0xae8a,	// (0x000525b2) cell_highlight_pane_g7

0xae92,	// (0x000525ba) cell_highlight_pane_g8

0xae9a,	// (0x000525c2) cell_highlight_pane_g9

0xa174,	// (0x0005189c) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00056d94) cell_highlight_pane_g

0xe738,	// (0x00055e60) bg_scroll_pane

0x035e,	// (0x00047a86) scroll_handle_pane

0xe77f,	// (0x00055ea7) scroll_bg_pane_g1

0xe794,	// (0x00055ebc) scroll_bg_pane_g2

0xe7ac,	// (0x00055ed4) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00056deb) scroll_bg_pane_g

0xe7c1,	// (0x00055ee9) scroll_handle_focus_pane_ParamLimits

0xe7c1,	// (0x00055ee9) scroll_handle_focus_pane

0xe77f,	// (0x00055ea7) scroll_handle_pane_g1

0xe7ce,	// (0x00055ef6) scroll_handle_pane_g2

0xe7ac,	// (0x00055ed4) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x00056df2) scroll_handle_pane_g

0xaf25,	// (0x0005264d) bg_popup_sub_pane_cp21_ParamLimits

0xaf25,	// (0x0005264d) bg_popup_sub_pane_cp21

0xe7e2,	// (0x00055f0a) popup_fep_japan_predictive_window_t1_ParamLimits

0xe7e2,	// (0x00055f0a) popup_fep_japan_predictive_window_t1

0xe7f9,	// (0x00055f21) popup_fep_japan_predictive_window_t2_ParamLimits

0xe7f9,	// (0x00055f21) popup_fep_japan_predictive_window_t2

0xe82c,	// (0x00055f54) popup_fep_japan_predictive_window_t3_ParamLimits

0xe82c,	// (0x00055f54) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00056df9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00056df9) popup_fep_japan_predictive_window_t

0xa264,	// (0x0005198c) bg_popup_sub_pane_cp23

0xe863,	// (0x00055f8b) listscroll_japin_cand_pane

0xe86b,	// (0x00055f93) popup_fep_japan_candidate_window_t1

0xe879,	// (0x00055fa1) candidate_pane_ParamLimits

0xe879,	// (0x00055fa1) candidate_pane

0xe88b,	// (0x00055fb3) scroll_pane_cp30

0xe895,	// (0x00055fbd) list_single_popup_jap_candidate_pane_ParamLimits

0xe895,	// (0x00055fbd) list_single_popup_jap_candidate_pane

0xa264,	// (0x0005198c) list_highlight_pane_cp30

0xe8a9,	// (0x00055fd1) list_single_popup_jap_candidate_pane_t1

0xb0df,	// (0x00052807) level_1_signal

0xb0f1,	// (0x00052819) level_2_signal

0xb104,	// (0x0005282c) level_3_signal

0xb117,	// (0x0005283f) level_4_signal

0xb12a,	// (0x00052852) level_5_signal

0xb13d,	// (0x00052865) level_6_signal

0xb150,	// (0x00052878) level_7_signal

0xb0df,	// (0x00052807) level_1_battery

0xb0f1,	// (0x00052819) level_2_battery

0xb104,	// (0x0005282c) level_3_battery

0xb117,	// (0x0005283f) level_4_battery

0xb12a,	// (0x00052852) level_5_battery

0xb13d,	// (0x00052865) level_6_battery

0xb150,	// (0x00052878) level_7_battery

0xe8d0,	// (0x00055ff8) list_menu_pane_ParamLimits

0xe8d0,	// (0x00055ff8) list_menu_pane

0xe8e6,	// (0x0005600e) scroll_pane_cp25_ParamLimits

0xe8e6,	// (0x0005600e) scroll_pane_cp25

0xe8ff,	// (0x00056027) list_double2_graphic_pane_cp2_ParamLimits

0xe8ff,	// (0x00056027) list_double2_graphic_pane_cp2

0xe8ff,	// (0x00056027) list_double2_large_graphic_pane_cp2_ParamLimits

0xe8ff,	// (0x00056027) list_double2_large_graphic_pane_cp2

0xe8ff,	// (0x00056027) list_double2_pane_cp2_ParamLimits

0xe8ff,	// (0x00056027) list_double2_pane_cp2

0xe8ff,	// (0x00056027) list_double_graphic_pane_cp2_ParamLimits

0xe8ff,	// (0x00056027) list_double_graphic_pane_cp2

0xe8ff,	// (0x00056027) list_double_large_graphic_pane_cp2_ParamLimits

0xe8ff,	// (0x00056027) list_double_large_graphic_pane_cp2

0xe8ff,	// (0x00056027) list_double_number_pane_cp2_ParamLimits

0xe8ff,	// (0x00056027) list_double_number_pane_cp2

0xe8ff,	// (0x00056027) list_double_pane_cp2_ParamLimits

0xe8ff,	// (0x00056027) list_double_pane_cp2

0xb163,	// (0x0005288b) list_single_2graphic_pane_cp2_ParamLimits

0xb163,	// (0x0005288b) list_single_2graphic_pane_cp2

0xb163,	// (0x0005288b) list_single_graphic_heading_pane_cp2_ParamLimits

0xb163,	// (0x0005288b) list_single_graphic_heading_pane_cp2

0xb163,	// (0x0005288b) list_single_graphic_pane_cp2_ParamLimits

0xb163,	// (0x0005288b) list_single_graphic_pane_cp2

0xb163,	// (0x0005288b) list_single_heading_pane_cp2_ParamLimits

0xb163,	// (0x0005288b) list_single_heading_pane_cp2

0xe90f,	// (0x00056037) list_single_large_graphic_pane_cp2_ParamLimits

0xe90f,	// (0x00056037) list_single_large_graphic_pane_cp2

0xb163,	// (0x0005288b) list_single_number_heading_pane_cp2_ParamLimits

0xb163,	// (0x0005288b) list_single_number_heading_pane_cp2

0xb163,	// (0x0005288b) list_single_number_pane_cp2_ParamLimits

0xb163,	// (0x0005288b) list_single_number_pane_cp2

0xb177,	// (0x0005289f) list_single_pane_cp2_ParamLimits

0xb177,	// (0x0005289f) list_single_pane_cp2

0xe928,	// (0x00056050) bg_popup_sub_pane_cp22

0x0510,	// (0x00047c38) popup_side_volume_key_window_g1

0x053a,	// (0x00047c62) popup_side_volume_key_window_t1

0x0558,	// (0x00047c80) volume_small_pane_cp1

0xa4af,	// (0x00051bd7) bg_popup_sub_pane_cp24_ParamLimits

0xa4af,	// (0x00051bd7) bg_popup_sub_pane_cp24

0x25f7,	// (0x00049d1f) fep_china_uni_candidate_pane_ParamLimits

0x25f7,	// (0x00049d1f) fep_china_uni_candidate_pane

0x260b,	// (0x00049d33) fep_china_uni_entry_pane

0x261b,	// (0x00049d43) popup_fep_china_uni_window_g1

0x2637,	// (0x00049d5f) fep_china_uni_entry_pane_g1

0x2641,	// (0x00049d69) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00056e2a) fep_china_uni_entry_pane_g

0x264b,	// (0x00049d73) fep_entry_item_pane

0x2655,	// (0x00049d7d) fep_candidate_item_pane

0x265d,	// (0x00049d85) fep_china_uni_candidate_pane_g1

0x2667,	// (0x00049d8f) fep_china_uni_candidate_pane_g2

0x266f,	// (0x00049d97) fep_china_uni_candidate_pane_g3

0x2677,	// (0x00049d9f) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00056e2f) fep_china_uni_candidate_pane_g

0xa174,	// (0x0005189c) fep_entry_item_pane_g1

0x2681,	// (0x00049da9) fep_entry_item_pane_t1_ParamLimits

0x2681,	// (0x00049da9) fep_entry_item_pane_t1

0x2697,	// (0x00049dbf) fep_candidate_item_pane_t1_ParamLimits

0x2697,	// (0x00049dbf) fep_candidate_item_pane_t1

0x26ac,	// (0x00049dd4) fep_candidate_item_pane_t2_ParamLimits

0x26ac,	// (0x00049dd4) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00056e38) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00056e38) fep_candidate_item_pane_t

0xa4f1,	// (0x00051c19) list_highlight_pane_cp31_ParamLimits

0xa4f1,	// (0x00051c19) list_highlight_pane_cp31

0x26be,	// (0x00049de6) level_1_signal_lsc

0x26c7,	// (0x00049def) level_2_signal_lsc

0x26d0,	// (0x00049df8) level_3_signal_lsc

0x26d9,	// (0x00049e01) level_4_signal_lsc

0x26e2,	// (0x00049e0a) level_5_signal_lsc

0x26eb,	// (0x00049e13) level_6_signal_lsc

0x26f4,	// (0x00049e1c) level_7_signal_lsc

0x26f4,	// (0x00049e1c) level_1_battery_lsc

0x26fd,	// (0x00049e25) level_2_battery_lsc

0x2706,	// (0x00049e2e) level_3_battery_lsc

0x270f,	// (0x00049e37) level_4_battery_lsc

0x2718,	// (0x00049e40) level_5_battery_lsc

0x2721,	// (0x00049e49) level_6_battery_lsc

0x26be,	// (0x00049de6) level_7_battery_lsc

0x272a,	// (0x00049e52) scroll_handle_focus_pane_g1

0x2733,	// (0x00049e5b) scroll_handle_focus_pane_g2

0x273c,	// (0x00049e64) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00056e3d) scroll_handle_focus_pane_g

0x9e91,	// (0x000515b9) list_single_2graphic_pane_g1_ParamLimits

0x9e91,	// (0x000515b9) list_single_2graphic_pane_g1

0x993d,	// (0x00051065) list_single_2graphic_pane_g2_ParamLimits

0x993d,	// (0x00051065) list_single_2graphic_pane_g2

0x0f6a,	// (0x00048692) list_single_2graphic_pane_g3_ParamLimits

0x0f6a,	// (0x00048692) list_single_2graphic_pane_g3

0x9e9d,	// (0x000515c5) list_single_2graphic_pane_g4_ParamLimits

0x9e9d,	// (0x000515c5) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x00056e44) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x00056e44) list_single_2graphic_pane_g

0x9ea9,	// (0x000515d1) list_single_2graphic_pane_t1_ParamLimits

0x9ea9,	// (0x000515d1) list_single_2graphic_pane_t1

0xb206,	// (0x0005292e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb206,	// (0x0005292e) list_double2_graphic_large_graphic_pane_g1

0x9b33,	// (0x0005125b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9b33,	// (0x0005125b) list_double2_graphic_large_graphic_pane_g2

0x9a8c,	// (0x000511b4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9a8c,	// (0x000511b4) list_double2_graphic_large_graphic_pane_g3

0x9ed7,	// (0x000515ff) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9ed7,	// (0x000515ff) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00056e4d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00056e4d) list_double2_graphic_large_graphic_pane_g

0x9ee3,	// (0x0005160b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9ee3,	// (0x0005160b) list_double2_graphic_large_graphic_pane_t1

0x9ef9,	// (0x00051621) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9ef9,	// (0x00051621) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x00056e56) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x00056e56) list_double2_graphic_large_graphic_pane_t

0x287f,	// (0x00049fa7) popup_fast_swap_window_ParamLimits

0x287f,	// (0x00049fa7) popup_fast_swap_window

0x289d,	// (0x00049fc5) popup_side_volume_key_window

0x28bb,	// (0x00049fe3) stacon_top_pane

0x28c5,	// (0x00049fed) status_pane_ParamLimits

0x28c5,	// (0x00049fed) status_pane

0xb260,	// (0x00052988) status_small_pane

0xa264,	// (0x0005198c) control_pane

0xa264,	// (0x0005198c) stacon_bottom_pane

0xade5,	// (0x0005250d) scroll_pane_cp121

0xaddc,	// (0x00052504) set_content_pane

0xb218,	// (0x00052940) bg_active_tab_pane_g1_cp1

0x274e,	// (0x00049e76) bg_active_tab_pane_g2_cp1

0xb221,	// (0x00052949) bg_active_tab_pane_g3_cp1

0xb218,	// (0x00052940) bg_passive_tab_pane_g1_cp1

0x274e,	// (0x00049e76) bg_passive_tab_pane_g2_cp1

0xb221,	// (0x00052949) bg_passive_tab_pane_g3_cp1

0xb22a,	// (0x00052952) bg_active_tab_pane_g1_cp2

0x274e,	// (0x00049e76) bg_active_tab_pane_g2_cp2

0xb233,	// (0x0005295b) bg_active_tab_pane_g3_cp2

0xb22a,	// (0x00052952) bg_passive_tab_pane_g1_cp2

0x274e,	// (0x00049e76) bg_passive_tab_pane_g2_cp2

0xb233,	// (0x0005295b) bg_passive_tab_pane_g3_cp2

0xb23c,	// (0x00052964) bg_active_tab_pane_g1_cp3

0x274e,	// (0x00049e76) bg_active_tab_pane_g2_cp3

0xb245,	// (0x0005296d) bg_active_tab_pane_g3_cp3

0xb23c,	// (0x00052964) bg_passive_tab_pane_g1_cp3

0x274e,	// (0x00049e76) bg_passive_tab_pane_g2_cp3

0xb245,	// (0x0005296d) bg_passive_tab_pane_g3_cp3

0xb24e,	// (0x00052976) bg_active_tab_pane_g1_cp4

0x274e,	// (0x00049e76) bg_active_tab_pane_g2_cp4

0xb257,	// (0x0005297f) bg_active_tab_pane_g3_cp4

0xb24e,	// (0x00052976) bg_passive_tab_pane_g1_cp4

0x274e,	// (0x00049e76) bg_passive_tab_pane_g2_cp4

0xb257,	// (0x0005297f) bg_passive_tab_pane_g3_cp4

0x27d8,	// (0x00049f00) bg_active_tab_pane_g1_cp5

0x274e,	// (0x00049e76) bg_active_tab_pane_g2_cp5

0x27e1,	// (0x00049f09) bg_active_tab_pane_g3_cp5

0x27d8,	// (0x00049f00) bg_passive_tab_pane_g1_cp5

0x274e,	// (0x00049e76) bg_passive_tab_pane_g2_cp5

0x27e1,	// (0x00049f09) bg_passive_tab_pane_g3_cp5

0x4ea1,	// (0x0004c5c9) list_set_graphic_pane_ParamLimits

0x4ea1,	// (0x0004c5c9) list_set_graphic_pane

0xa264,	// (0x0005198c) bg_set_opt_pane_cp4

0x2800,	// (0x00049f28) list_set_graphic_pane_g1_ParamLimits

0x2800,	// (0x00049f28) list_set_graphic_pane_g1

0x280c,	// (0x00049f34) list_set_graphic_pane_g2_ParamLimits

0x280c,	// (0x00049f34) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00056e5b) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00056e5b) list_set_graphic_pane_g

0x0009,

0xfab8,	// (0x000571e0) volume_small_pane_cp_g

0x2830,	// (0x00049f58) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2830,	// (0x00049f58) list_double2_large_graphic_pane_g1_cp2

0x283e,	// (0x00049f66) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x283e,	// (0x00049f66) list_double2_large_graphic_pane_g2_cp2

0x284f,	// (0x00049f77) list_double2_large_graphic_pane_g3_cp2

0x2857,	// (0x00049f7f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2857,	// (0x00049f7f) list_double2_large_graphic_pane_t1_cp2

0x286d,	// (0x00049f95) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x286d,	// (0x00049f95) list_double2_large_graphic_pane_t2_cp2

0x444d,	// (0x0004bb75) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x444d,	// (0x0004bb75) list_double_large_graphic_pane_g1_cp2

0x4460,	// (0x0004bb88) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4460,	// (0x0004bb88) list_double_large_graphic_pane_g2_cp2

0x29e2,	// (0x0004a10a) list_double_large_graphic_pane_g3_cp2

0x4471,	// (0x0004bb99) list_double_large_graphic_pane_g4_cp

0x4479,	// (0x0004bba1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4479,	// (0x0004bba1) list_double_large_graphic_pane_t1_cp2

0x4490,	// (0x0004bbb8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4490,	// (0x0004bbb8) list_double_large_graphic_pane_t2_cp2

0x28de,	// (0x0004a006) list_double2_graphic_pane_g1_cp2_ParamLimits

0x28de,	// (0x0004a006) list_double2_graphic_pane_g1_cp2

0x28ec,	// (0x0004a014) list_double2_graphic_pane_g2_cp2_ParamLimits

0x28ec,	// (0x0004a014) list_double2_graphic_pane_g2_cp2

0x28fd,	// (0x0004a025) list_double2_graphic_pane_g3_cp2

0x2907,	// (0x0004a02f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2907,	// (0x0004a02f) list_double2_graphic_pane_t1_cp2

0x291d,	// (0x0004a045) list_double2_graphic_pane_t2_cp2_ParamLimits

0x291d,	// (0x0004a045) list_double2_graphic_pane_t2_cp2

0x25eb,	// (0x00049d13) list_single_number_heading_pane_g1_cp2_ParamLimits

0x25eb,	// (0x00049d13) list_single_number_heading_pane_g1_cp2

0x292f,	// (0x0004a057) list_single_number_heading_pane_g2_cp2

0x2937,	// (0x0004a05f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2937,	// (0x0004a05f) list_single_number_heading_pane_t1_cp2

0x294d,	// (0x0004a075) list_single_number_heading_pane_t2_cp2_ParamLimits

0x294d,	// (0x0004a075) list_single_number_heading_pane_t2_cp2

0x2961,	// (0x0004a089) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2961,	// (0x0004a089) list_single_number_heading_pane_t3_cp2

0x25eb,	// (0x00049d13) list_single_heading_pane_g1_cp2_ParamLimits

0x25eb,	// (0x00049d13) list_single_heading_pane_g1_cp2

0x292f,	// (0x0004a057) list_single_heading_pane_g2_cp2

0x2937,	// (0x0004a05f) list_single_heading_pane_t1_cp2_ParamLimits

0x2937,	// (0x0004a05f) list_single_heading_pane_t1_cp2

0x4247,	// (0x0004b96f) list_single_heading_pane_t2_cp2_ParamLimits

0x4247,	// (0x0004b96f) list_single_heading_pane_t2_cp2

0x418f,	// (0x0004b8b7) list_double_graphic_pane_g1_cp2_ParamLimits

0x418f,	// (0x0004b8b7) list_double_graphic_pane_g1_cp2

0x419b,	// (0x0004b8c3) list_double_graphic_pane_g2_cp2_ParamLimits

0x419b,	// (0x0004b8c3) list_double_graphic_pane_g2_cp2

0x41aa,	// (0x0004b8d2) list_double_graphic_pane_g3_cp2

0x41b2,	// (0x0004b8da) list_double_graphic_pane_t1_cp2_ParamLimits

0x41b2,	// (0x0004b8da) list_double_graphic_pane_t1_cp2

0x41c8,	// (0x0004b8f0) list_double_graphic_pane_t2_cp2_ParamLimits

0x41c8,	// (0x0004b8f0) list_double_graphic_pane_t2_cp2

0x29d6,	// (0x0004a0fe) list_double_number_pane_g1_cp2_ParamLimits

0x29d6,	// (0x0004a0fe) list_double_number_pane_g1_cp2

0x29e2,	// (0x0004a10a) list_double_number_pane_g2_cp2

0x4153,	// (0x0004b87b) list_double_number_pane_t1_cp2_ParamLimits

0x4153,	// (0x0004b87b) list_double_number_pane_t1_cp2

0x4167,	// (0x0004b88f) list_double_number_pane_t2_cp2_ParamLimits

0x4167,	// (0x0004b88f) list_double_number_pane_t2_cp2

0x417d,	// (0x0004b8a5) list_double_number_pane_t3_cp2_ParamLimits

0x417d,	// (0x0004b8a5) list_double_number_pane_t3_cp2

0x403c,	// (0x0004b764) list_single_graphic_pane_g1_cp2_ParamLimits

0x403c,	// (0x0004b764) list_single_graphic_pane_g1_cp2

0x2a47,	// (0x0004a16f) list_single_graphic_pane_g2_cp2_ParamLimits

0x2a47,	// (0x0004a16f) list_single_graphic_pane_g2_cp2

0x2a53,	// (0x0004a17b) list_single_graphic_pane_g3_cp2

0x4012,	// (0x0004b73a) list_single_graphic_pane_t1_cp2_ParamLimits

0x4012,	// (0x0004b73a) list_single_graphic_pane_t1_cp2

0x2a47,	// (0x0004a16f) list_single_number_pane_g1_cp2_ParamLimits

0x2a47,	// (0x0004a16f) list_single_number_pane_g1_cp2

0x2a53,	// (0x0004a17b) list_single_number_pane_g2_cp2

0x4012,	// (0x0004b73a) list_single_number_pane_t1_cp2_ParamLimits

0x4012,	// (0x0004b73a) list_single_number_pane_t1_cp2

0x4028,	// (0x0004b750) list_single_number_pane_t2_cp2_ParamLimits

0x4028,	// (0x0004b750) list_single_number_pane_t2_cp2

0x283e,	// (0x00049f66) list_double2_pane_g1_cp2_ParamLimits

0x283e,	// (0x00049f66) list_double2_pane_g1_cp2

0x284f,	// (0x00049f77) list_double2_pane_g2_cp2

0x29ae,	// (0x0004a0d6) list_double2_pane_t1_cp2_ParamLimits

0x29ae,	// (0x0004a0d6) list_double2_pane_t1_cp2

0x29c4,	// (0x0004a0ec) list_double2_pane_t2_cp2_ParamLimits

0x29c4,	// (0x0004a0ec) list_double2_pane_t2_cp2

0x29d6,	// (0x0004a0fe) list_double_pane_g1_cp2_ParamLimits

0x29d6,	// (0x0004a0fe) list_double_pane_g1_cp2

0x29e2,	// (0x0004a10a) list_double_pane_g2_cp2

0x29ea,	// (0x0004a112) list_double_pane_t1_cp2_ParamLimits

0x29ea,	// (0x0004a112) list_double_pane_t1_cp2

0x2a00,	// (0x0004a128) list_double_pane_t2_cp2_ParamLimits

0x2a00,	// (0x0004a128) list_double_pane_t2_cp2

0x2a37,	// (0x0004a15f) list_single_pane_cp2_g3

0x2a47,	// (0x0004a16f) list_single_pane_g1_cp2_ParamLimits

0x2a47,	// (0x0004a16f) list_single_pane_g1_cp2

0x2a53,	// (0x0004a17b) list_single_pane_g2_cp2

0x2a5b,	// (0x0004a183) list_single_pane_t1_cp2_ParamLimits

0x2a5b,	// (0x0004a183) list_single_pane_t1_cp2

0x2a73,	// (0x0004a19b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2a73,	// (0x0004a19b) list_single_large_graphic_pane_g1_cp2

0x2a81,	// (0x0004a1a9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2a81,	// (0x0004a1a9) list_single_large_graphic_pane_g2_cp2

0x2a8d,	// (0x0004a1b5) list_single_large_graphic_pane_g3_cp2

0x2a95,	// (0x0004a1bd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2a95,	// (0x0004a1bd) list_single_large_graphic_pane_g4_cp1

0x2aaf,	// (0x0004a1d7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2aaf,	// (0x0004a1d7) list_single_large_graphic_pane_t1_cp2

0x3fdc,	// (0x0004b704) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3fdc,	// (0x0004b704) list_single_graphic_heading_pane_g1_cp2

0x3fa9,	// (0x0004b6d1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3fa9,	// (0x0004b6d1) list_single_graphic_heading_pane_g4_cp2

0x2a53,	// (0x0004a17b) list_single_graphic_heading_pane_g5_cp2

0x3fe8,	// (0x0004b710) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3fe8,	// (0x0004b710) list_single_graphic_heading_pane_t1_cp2

0x3ffe,	// (0x0004b726) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3ffe,	// (0x0004b726) list_single_graphic_heading_pane_t2_cp2

0x3f9d,	// (0x0004b6c5) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3f9d,	// (0x0004b6c5) list_single_2graphic_pane_g1_cp2

0x3fa9,	// (0x0004b6d1) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3fa9,	// (0x0004b6d1) list_single_2graphic_pane_g2_cp2

0x2a53,	// (0x0004a17b) list_single_2graphic_pane_g3_cp2

0x3fba,	// (0x0004b6e2) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3fba,	// (0x0004b6e2) list_single_2graphic_pane_g4_cp2

0x3fc6,	// (0x0004b6ee) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3fc6,	// (0x0004b6ee) list_single_2graphic_pane_t1_cp2

0xa174,	// (0x0005189c) list_highlight_pane_g10_cp1

0x3b75,	// (0x0004b29d) list_highlight_pane_g1_cp1

0x3b7d,	// (0x0004b2a5) list_highlight_pane_g2_cp1

0x3b85,	// (0x0004b2ad) list_highlight_pane_g3_cp1

0x3b8d,	// (0x0004b2b5) list_highlight_pane_g4_cp1

0x3b95,	// (0x0004b2bd) list_highlight_pane_g5_cp1

0x3b9d,	// (0x0004b2c5) list_highlight_pane_g6_cp1

0x3ba5,	// (0x0004b2cd) list_highlight_pane_g7_cp1

0x3bad,	// (0x0004b2d5) list_highlight_pane_g8_cp1

0x3bb5,	// (0x0004b2dd) list_highlight_pane_g9_cp1

0xc9ff,	// (0x00054127) form_field_slider_pane_t3

0xca0d,	// (0x00054135) form_field_slider_pane_t4

0x3ab1,	// (0x0004b1d9) slider_form_pane_ParamLimits

0x3ab1,	// (0x0004b1d9) slider_form_pane

0xa264,	// (0x0005198c) control_abbreviations

0xa264,	// (0x0005198c) control_conventions

0xa264,	// (0x0005198c) control_definitions

0xa264,	// (0x0005198c) format_table_attribute

0x429d,	// (0x0004b9c5) bg_popup_preview_window_pane_g9

0xa264,	// (0x0005198c) format_table_data2

0xa264,	// (0x0005198c) format_table_data3

0xa264,	// (0x0005198c) format_table_data_example

0x0008,

0xa264,	// (0x0005198c) intro_purpose

0xf8ca,	// (0x00056ff2) bg_popup_preview_window_pane_g

0xa264,	// (0x0005198c) texts_category

0xa264,	// (0x0005198c) texts_graphics

0x2ac5,	// (0x0004a1ed) text_digital

0x2ad4,	// (0x0004a1fc) text_primary

0x2ae3,	// (0x0004a20b) text_primary_small

0x2af2,	// (0x0004a21a) text_secondary

0x2b01,	// (0x0004a229) text_title

0x49ca,	// (0x0004c0f2) bg_passive_tab_pane_g1_cp3_srt

0x274e,	// (0x00049e76) bg_passive_tab_pane_g2_cp3_srt

0x49d3,	// (0x0004c0fb) bg_passive_tab_pane_g3_cp3_srt

0xa4af,	// (0x00051bd7) bg_active_tab_pane_cp3_srt_ParamLimits

0xa4af,	// (0x00051bd7) bg_active_tab_pane_cp3_srt

0x49dc,	// (0x0004c104) tabs_4_active_pane_srt_g1

0xcde7,	// (0x0005450f) tabs_4_active_pane_srt_t1_ParamLimits

0xcde7,	// (0x0005450f) tabs_4_active_pane_srt_t1

0x49ca,	// (0x0004c0f2) bg_active_tab_pane_g1_cp3_copy1

0x274e,	// (0x00049e76) bg_active_tab_pane_g2_cp3_copy1

0x49d3,	// (0x0004c0fb) bg_active_tab_pane_g3_cp3_copy1

0xa4f1,	// (0x00051c19) tabs_2_long_active_pane_srt_ParamLimits

0xa4f1,	// (0x00051c19) tabs_2_long_active_pane_srt

0xa4f1,	// (0x00051c19) tabs_2_long_passive_pane_srt_ParamLimits

0xa4f1,	// (0x00051c19) tabs_2_long_passive_pane_srt

0x2e37,	// (0x0004a55f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2e37,	// (0x0004a55f) bg_passive_tab_pane_cp4_srt

0x46d7,	// (0x0004bdff) bg_passive_tab_pane_g1_cp4_srt

0x274e,	// (0x00049e76) bg_passive_tab_pane_g2_cp4_srt

0x46e0,	// (0x0004be08) bg_passive_tab_pane_g3_cp4_srt

0xa4f1,	// (0x00051c19) bg_active_tab_pane_cp4_srt_ParamLimits

0xa4f1,	// (0x00051c19) bg_active_tab_pane_cp4_srt

0xcbdf,	// (0x00054307) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcbdf,	// (0x00054307) tabs_2_long_active_pane_srt_t1

0x46d7,	// (0x0004bdff) bg_active_tab_pane_g1_cp4_srt

0x274e,	// (0x00049e76) bg_active_tab_pane_g2_cp4_srt

0x46e0,	// (0x0004be08) bg_active_tab_pane_g3_cp4_srt

0xa4af,	// (0x00051bd7) tabs_3_long_active_pane_srt_ParamLimits

0xa4af,	// (0x00051bd7) tabs_3_long_active_pane_srt

0xa4af,	// (0x00051bd7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa4af,	// (0x00051bd7) tabs_3_long_passive_pane_cp_srt

0xa4af,	// (0x00051bd7) tabs_3_long_passive_pane_srt_ParamLimits

0xa4af,	// (0x00051bd7) tabs_3_long_passive_pane_srt

0x2e37,	// (0x0004a55f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2e37,	// (0x0004a55f) bg_passive_tab_pane_cp5_srt

0x27d8,	// (0x00049f00) bg_passive_tab_pane_g1_cp5_srt

0x274e,	// (0x00049e76) bg_passive_tab_pane_g2_cp5_srt

0x27e1,	// (0x00049f09) bg_passive_tab_pane_g3_cp5_srt

0xa4f1,	// (0x00051c19) bg_active_tab_pane_cp5_srt_ParamLimits

0xa4f1,	// (0x00051c19) bg_active_tab_pane_cp5_srt

0xcbc9,	// (0x000542f1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xcbc9,	// (0x000542f1) tabs_3_long_active_pane_srt_t1

0x27d8,	// (0x00049f00) bg_active_tab_pane_g1_cp5_srt

0x274e,	// (0x00049e76) bg_active_tab_pane_g2_cp5_srt

0x27e1,	// (0x00049f09) bg_active_tab_pane_g3_cp5_srt

0x46b7,	// (0x0004bddf) navi_text_pane_srt_t1

0x46af,	// (0x0004bdd7) navi_icon_pane_srt_g1

0x2cd9,	// (0x0004a401) midp_editing_number_pane_srt

0x2b10,	// (0x0004a238) midp_ticker_pane_srt

0x2ce1,	// (0x0004a409) midp_ticker_pane_srt_g1

0x2ce9,	// (0x0004a411) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00056e7a) midp_ticker_pane_srt_g

0x2cf1,	// (0x0004a419) midp_ticker_pane_srt_t1

0x46a0,	// (0x0004bdc8) midp_editing_number_pane_t1_copy1

0xb26b,	// (0x00052993) listscroll_midp_pane

0xb26b,	// (0x00052993) midp_form_pane

0x2b87,	// (0x0004a2af) midp_info_popup_window_ParamLimits

0x2b87,	// (0x0004a2af) midp_info_popup_window

0xaf25,	// (0x0005264d) bg_popup_sub_pane_cp50_ParamLimits

0xaf25,	// (0x0005264d) bg_popup_sub_pane_cp50

0x3797,	// (0x0004aebf) listscroll_midp_info_pane_ParamLimits

0x3797,	// (0x0004aebf) listscroll_midp_info_pane

0x3777,	// (0x0004ae9f) listscroll_form_midp_pane_ParamLimits

0x3777,	// (0x0004ae9f) listscroll_form_midp_pane

0x3783,	// (0x0004aeab) scroll_bar_cp050

0x3777,	// (0x0004ae9f) list_midp_pane

0x547e,	// (0x0004cba6) signal_pane_g2_cp

0x3691,	// (0x0004adb9) listscroll_midp_info_pane_t1_ParamLimits

0x3691,	// (0x0004adb9) listscroll_midp_info_pane_t1

0x36a9,	// (0x0004add1) listscroll_midp_info_pane_t2_ParamLimits

0x36a9,	// (0x0004add1) listscroll_midp_info_pane_t2

0x36e7,	// (0x0004ae0f) listscroll_midp_info_pane_t3_ParamLimits

0x36e7,	// (0x0004ae0f) listscroll_midp_info_pane_t3

0x3721,	// (0x0004ae49) listscroll_midp_info_pane_t4_ParamLimits

0x3721,	// (0x0004ae49) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x00056f2d) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x00056f2d) listscroll_midp_info_pane_t

0xaf88,	// (0x000526b0) scroll_pane_cp21

0x362b,	// (0x0004ad53) form_midp_field_choice_group_pane

0x3634,	// (0x0004ad5c) form_midp_field_text_pane

0x3677,	// (0x0004ad9f) form_midp_field_time_pane

0x367f,	// (0x0004ada7) form_midp_gauge_slider_pane

0x3688,	// (0x0004adb0) form_midp_gauge_wait_pane

0xa264,	// (0x0005198c) form_midp_image_pane

0x9f27,	// (0x0005164f) list_single_midp_pane_ParamLimits

0x9f27,	// (0x0005164f) list_single_midp_pane

0xc9d7,	// (0x000540ff) form_midp_field_text_pane_t1

0x33e1,	// (0x0004ab09) input_focus_pane_cp050

0x361a,	// (0x0004ad42) list_midp_form_text_pane

0x35be,	// (0x0004ace6) form_midp_field_choice_group_pane_t1

0x35cc,	// (0x0004acf4) input_focus_pane_cp051

0x35e0,	// (0x0004ad08) list_midp_choice_pane

0xa264,	// (0x0005198c) status_idle_pane

0x35a2,	// (0x0004acca) form_midp_field_time_pane_t1

0xa174,	// (0x0005189c) wait_anim_pane_g2_copy1

0x35b0,	// (0x0004acd8) form_midp_field_time_pane_t2

0x0001,

0x2c37,	// (0x0004a35f) aid_navinavi_width_2_pane

0xf800,	// (0x00056f28) form_midp_field_time_pane_t

0xa264,	// (0x0005198c) input_focus_pane_cp052

0xa264,	// (0x0005198c) bg_input_focus_pane_cp040

0x3562,	// (0x0004ac8a) form_midp_gauge_slider_pane_t1

0x3570,	// (0x0004ac98) form_midp_gauge_slider_pane_t2

0xc9bb,	// (0x000540e3) form_midp_gauge_slider_pane_t3

0xc9c9,	// (0x000540f1) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x00056f1f) form_midp_gauge_slider_pane_t

0x359a,	// (0x0004acc2) form_midp_slider_pane

0xa4f1,	// (0x00051c19) bg_input_focus_pane_cp041_ParamLimits

0xa4f1,	// (0x00051c19) bg_input_focus_pane_cp041

0x352f,	// (0x0004ac57) form_midp_gauge_wait_pane_t1_ParamLimits

0x352f,	// (0x0004ac57) form_midp_gauge_wait_pane_t1

0x3541,	// (0x0004ac69) form_midp_gauge_wait_pane_t2_ParamLimits

0x3541,	// (0x0004ac69) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x00056f1a) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x00056f1a) form_midp_gauge_wait_pane_t

0x3553,	// (0x0004ac7b) form_midp_wait_pane_ParamLimits

0x3553,	// (0x0004ac7b) form_midp_wait_pane

0x34f7,	// (0x0004ac1f) form_midp_image_pane_g1

0x3500,	// (0x0004ac28) form_midp_image_pane_t1

0x350f,	// (0x0004ac37) form_midp_image_pane_t2

0x351e,	// (0x0004ac46) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x00056f13) form_midp_image_pane_t

0x34ee,	// (0x0004ac16) list_single_midp_pane_g1

0xee68,	// (0x00056590) list_single_midp_pane_t1

0xc9a4,	// (0x000540cc) list_midp_form_item_pane_ParamLimits

0xc9a4,	// (0x000540cc) list_midp_form_item_pane

0x2bdf,	// (0x0004a307) list_midp_form_item_pane_t1

0x2bee,	// (0x0004a316) midp_ticker_pane_g1

0x2bfa,	// (0x0004a322) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00056e60) midp_ticker_pane_g

0xb30f,	// (0x00052a37) midp_ticker_pane_t1

0xcd68,	// (0x00054490) midp_editing_number_pane_t1

0x48eb,	// (0x0004c013) midp_editing_number_pane

0x48fa,	// (0x0004c022) midp_ticker_pane

0x4690,	// (0x0004bdb8) ai_message_heading_pane

0xa264,	// (0x0005198c) bg_popup_window_pane_cp14

0x4698,	// (0x0004bdc0) listscroll_ai_message_pane

0x4616,	// (0x0004bd3e) ai_message_heading_pane_g1_ParamLimits

0x4616,	// (0x0004bd3e) ai_message_heading_pane_g1

0x4622,	// (0x0004bd4a) ai_message_heading_pane_g2_ParamLimits

0x4622,	// (0x0004bd4a) ai_message_heading_pane_g2

0x4630,	// (0x0004bd58) ai_message_heading_pane_g3_ParamLimits

0x4630,	// (0x0004bd58) ai_message_heading_pane_g3

0x463c,	// (0x0004bd64) ai_message_heading_pane_g4_ParamLimits

0x463c,	// (0x0004bd64) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x00057054) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x00057054) ai_message_heading_pane_g

0x4648,	// (0x0004bd70) ai_message_heading_pane_t1_ParamLimits

0x4648,	// (0x0004bd70) ai_message_heading_pane_t1

0x4662,	// (0x0004bd8a) ai_message_heading_pane_t2_ParamLimits

0x4662,	// (0x0004bd8a) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0005705d) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0005705d) ai_message_heading_pane_t

0x4676,	// (0x0004bd9e) bg_popup_heading_pane_cp1_ParamLimits

0x4676,	// (0x0004bd9e) bg_popup_heading_pane_cp1

0x4604,	// (0x0004bd2c) list_ai_message_pane_ParamLimits

0x4604,	// (0x0004bd2c) list_ai_message_pane

0xaf88,	// (0x000526b0) scroll_pane_cp10

0x45a0,	// (0x0004bcc8) list_ai_message_pane_g1

0x45a8,	// (0x0004bcd0) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x00057031) list_ai_message_pane_g

0x45b0,	// (0x0004bcd8) list_ai_message_pane_t1_ParamLimits

0x45b0,	// (0x0004bcd8) list_ai_message_pane_t1

0x45c5,	// (0x0004bced) list_ai_message_pane_t2_ParamLimits

0x45c5,	// (0x0004bced) list_ai_message_pane_t2

0x45da,	// (0x0004bd02) list_ai_message_pane_t3_ParamLimits

0x45da,	// (0x0004bd02) list_ai_message_pane_t3

0x45ef,	// (0x0004bd17) list_ai_message_pane_t4_ParamLimits

0x45ef,	// (0x0004bd17) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x00057036) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x00057036) list_ai_message_pane_t

0xcbaf,	// (0x000542d7) cell_ai_soft_ind_pane_ParamLimits

0xcbaf,	// (0x000542d7) cell_ai_soft_ind_pane

0x2c18,	// (0x0004a340) cell_ai_soft_ind_pane_g1_ParamLimits

0x2c18,	// (0x0004a340) cell_ai_soft_ind_pane_g1

0xa264,	// (0x0005198c) grid_highlight_cp1

0x2c25,	// (0x0004a34d) text_secondary_cp56_ParamLimits

0x2c25,	// (0x0004a34d) text_secondary_cp56

0x455e,	// (0x0004bc86) example_general_pane_ParamLimits

0x455e,	// (0x0004bc86) example_general_pane

0x456a,	// (0x0004bc92) example_parent_pane_g1_ParamLimits

0x456a,	// (0x0004bc92) example_parent_pane_g1

0x4576,	// (0x0004bc9e) example_parent_pane_t1_ParamLimits

0x4576,	// (0x0004bc9e) example_parent_pane_t1

0xb97d,	// (0x000530a5) popup_preview_text_window_ParamLimits

0xb97d,	// (0x000530a5) popup_preview_text_window

0x2a3f,	// (0x0004a167) list_single_pane_cp2_g4

0xa8a2,	// (0x00051fca) bg_popup_preview_window_pane_ParamLimits

0xa8a2,	// (0x00051fca) bg_popup_preview_window_pane

0x42a7,	// (0x0004b9cf) popup_preview_text_window_t1_ParamLimits

0x42a7,	// (0x0004b9cf) popup_preview_text_window_t1

0x42c5,	// (0x0004b9ed) popup_preview_text_window_t2_ParamLimits

0x42c5,	// (0x0004b9ed) popup_preview_text_window_t2

0x430e,	// (0x0004ba36) popup_preview_text_window_t3_ParamLimits

0x430e,	// (0x0004ba36) popup_preview_text_window_t3

0x4353,	// (0x0004ba7b) popup_preview_text_window_t4_ParamLimits

0x4353,	// (0x0004ba7b) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x00057005) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x00057005) popup_preview_text_window_t

0x43d1,	// (0x0004baf9) scroll_pane_cp11

0x336d,	// (0x0004aa95) bg_popup_preview_window_pane_g1

0x425b,	// (0x0004b983) bg_popup_preview_window_pane_g2

0x4265,	// (0x0004b98d) bg_popup_preview_window_pane_g3

0x426f,	// (0x0004b997) bg_popup_preview_window_pane_g4

0x4279,	// (0x0004b9a1) bg_popup_preview_window_pane_g5

0x4283,	// (0x0004b9ab) bg_popup_preview_window_pane_g6

0x428b,	// (0x0004b9b3) bg_popup_preview_window_pane_g7

0x4293,	// (0x0004b9bb) bg_popup_preview_window_pane_g8

0xf2ba,	// (0x000569e2) aid_popup_width_pane

0xb8ed,	// (0x00053015) popup_midp_note_alarm_window_ParamLimits

0xb8ed,	// (0x00053015) popup_midp_note_alarm_window

0xadf6,	// (0x0005251e) data_form_pane_ParamLimits

0x9d82,	// (0x000514aa) form_field_data_pane_g1

0x9d8c,	// (0x000514b4) form_field_data_pane_t1_ParamLimits

0xae02,	// (0x0005252a) input_focus_pane_ParamLimits

0xe4f5,	// (0x00055c1d) data_form_wide_pane_ParamLimits

0xe506,	// (0x00055c2e) form_field_data_wide_pane_g1

0xe512,	// (0x00055c3a) form_field_data_wide_pane_t1_ParamLimits

0xab5f,	// (0x00052287) input_focus_pane_cp6_ParamLimits

0xaf33,	// (0x0005265b) input_popup_find_pane_g1_ParamLimits

0xaf33,	// (0x0005265b) input_popup_find_pane_g1

0x0221,	// (0x00047949) aid_navi_side_left_pane

0x0236,	// (0x0004795e) aid_navi_side_right_pane

0x3c70,	// (0x0004b398) bg_popup_window_pane_cp30_ParamLimits

0x3c70,	// (0x0004b398) bg_popup_window_pane_cp30

0x3cea,	// (0x0004b412) popup_midp_note_alarm_window_g1_ParamLimits

0x3cea,	// (0x0004b412) popup_midp_note_alarm_window_g1

0x3d1a,	// (0x0004b442) popup_midp_note_alarm_window_t1_ParamLimits

0x3d1a,	// (0x0004b442) popup_midp_note_alarm_window_t1

0x3dbb,	// (0x0004b4e3) popup_midp_note_alarm_window_t2_ParamLimits

0x3dbb,	// (0x0004b4e3) popup_midp_note_alarm_window_t2

0x3e69,	// (0x0004b591) popup_midp_note_alarm_window_t3_ParamLimits

0x3e69,	// (0x0004b591) popup_midp_note_alarm_window_t3

0x3e9b,	// (0x0004b5c3) popup_midp_note_alarm_window_t4_ParamLimits

0x3e9b,	// (0x0004b5c3) popup_midp_note_alarm_window_t4

0x3ec1,	// (0x0004b5e9) popup_midp_note_alarm_window_t5_ParamLimits

0x3ec1,	// (0x0004b5e9) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x00056fa2) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x00056fa2) popup_midp_note_alarm_window_t

0x3f6d,	// (0x0004b695) wait_bar_pane_cp1_ParamLimits

0x3f6d,	// (0x0004b695) wait_bar_pane_cp1

0xa264,	// (0x0005198c) wait_anim_pane_copy1

0xa264,	// (0x0005198c) wait_border_pane_copy1

0x3955,	// (0x0004b07d) wait_border_pane_g1_copy1

0xe52c,	// (0x00055c54) form_field_popup_pane_g1

0x9da6,	// (0x000514ce) form_field_popup_pane_t1_ParamLimits

0xae02,	// (0x0005252a) input_focus_pane_cp7_ParamLimits

0xae30,	// (0x00052558) list_form_pane_ParamLimits

0xe534,	// (0x00055c5c) form_field_popup_wide_pane_g1

0xe53c,	// (0x00055c64) form_field_popup_wide_pane_t1_ParamLimits

0xae02,	// (0x0005252a) input_focus_pane_cp8_ParamLimits

0xae3c,	// (0x00052564) list_form_wide_pane_ParamLimits

0x4a65,	// (0x0004c18d) aid_size_cell_graphic_pane

0x9e25,	// (0x0005154d) data_form_pane_t1_ParamLimits

0x9f43,	// (0x0005166b) data_form_wide_pane_t1_ParamLimits

0xbd7f,	// (0x000534a7) bg_status_flat_pane

0xa3eb,	// (0x00051b13) title_pane_t1_ParamLimits

0xa477,	// (0x00051b9f) title_pane_t2_ParamLimits

0xa49d,	// (0x00051bc5) title_pane_t3_ParamLimits

0xf532,	// (0x00056c5a) title_pane_t_ParamLimits

0xb0df,	// (0x00052807) level_1_signal_ParamLimits

0xb0f1,	// (0x00052819) level_2_signal_ParamLimits

0xb104,	// (0x0005282c) level_3_signal_ParamLimits

0xb117,	// (0x0005283f) level_4_signal_ParamLimits

0xb12a,	// (0x00052852) level_5_signal_ParamLimits

0xb13d,	// (0x00052865) level_6_signal_ParamLimits

0xb150,	// (0x00052878) level_7_signal_ParamLimits

0xb0df,	// (0x00052807) level_1_battery_ParamLimits

0xb0f1,	// (0x00052819) level_2_battery_ParamLimits

0xb104,	// (0x0005282c) level_3_battery_ParamLimits

0xb117,	// (0x0005283f) level_4_battery_ParamLimits

0xb12a,	// (0x00052852) level_5_battery_ParamLimits

0xb13d,	// (0x00052865) level_6_battery_ParamLimits

0xb150,	// (0x00052878) level_7_battery_ParamLimits

0x3b75,	// (0x0004b29d) bg_status_flat_pane_g1

0x3b7d,	// (0x0004b2a5) bg_status_flat_pane_g2

0x3b85,	// (0x0004b2ad) bg_status_flat_pane_g3

0x3b8d,	// (0x0004b2b5) bg_status_flat_pane_g4

0x3b95,	// (0x0004b2bd) bg_status_flat_pane_g5

0x3b9d,	// (0x0004b2c5) bg_status_flat_pane_g6

0x3ba5,	// (0x0004b2cd) bg_status_flat_pane_g7

0xa4c5,	// (0x00051bed) tabs_3_active_pane_t1_ParamLimits

0xa4c5,	// (0x00051bed) tabs_3_passive_pane_t1_ParamLimits

0xa4df,	// (0x00051c07) tabs_4_active_pane_t1_ParamLimits

0xa4df,	// (0x00051c07) tabs_4_1_passive_pane_t1_ParamLimits

0xafca,	// (0x000526f2) tabs_2_active_pane_t1_ParamLimits

0xafca,	// (0x000526f2) tabs_2_passive_pane_t1_ParamLimits

0xa4f1,	// (0x00051c19) bg_active_tab_pane_cp4_ParamLimits

0xafdc,	// (0x00052704) tabs_2_long_active_pane_t1_ParamLimits

0x2e37,	// (0x0004a55f) bg_passive_tab_pane_cp4_ParamLimits

0x0fc2,	// (0x000486ea) list_single_midp_graphic_pane_t1_ParamLimits

0xa4f1,	// (0x00051c19) bg_active_tab_pane_cp5_ParamLimits

0xafef,	// (0x00052717) tabs_3_long_active_pane_t1_ParamLimits

0x2e37,	// (0x0004a55f) bg_passive_tab_pane_cp5_ParamLimits

0x0fc2,	// (0x000486ea) list_single_midp_graphic_pane_t1

0xbd7f,	// (0x000534a7) bg_status_flat_pane_ParamLimits

0x2ff1,	// (0x0004a719) indicator_pane_cp2_ParamLimits

0x2ff1,	// (0x0004a719) indicator_pane_cp2

0xc7d5,	// (0x00053efd) navi_pane_srt_ParamLimits

0xc7d5,	// (0x00053efd) navi_pane_srt

0x3158,	// (0x0004a880) popup_clock_digital_analogue_window_cp1

0xa60a,	// (0x00051d32) indicator_pane_t1

0x2b10,	// (0x0004a238) copy_highlight_pane

0x2b10,	// (0x0004a238) cursor_graphics_pane

0x2b10,	// (0x0004a238) graphic_within_text_pane

0x2b10,	// (0x0004a238) link_highlight_pane

0x4394,	// (0x0004babc) popup_preview_text_window_t5_ParamLimits

0x4394,	// (0x0004babc) popup_preview_text_window_t5

0x2c41,	// (0x0004a369) cursor_digital_pane

0x2c41,	// (0x0004a369) cursor_primary_pane

0x2c52,	// (0x0004a37a) cursor_primary_small_pane

0x2c5a,	// (0x0004a382) cursor_secondary_pane

0x2c62,	// (0x0004a38a) cursor_title_pane

0x2c41,	// (0x0004a369) link_highlight_digital_pane

0x2c49,	// (0x0004a371) link_highlight_primary_pane

0x2c52,	// (0x0004a37a) link_highlight_primary_small_pane

0x2c5a,	// (0x0004a382) link_highlight_secondary_pane

0x2c62,	// (0x0004a38a) link_highlight_title_pane

0x2c41,	// (0x0004a369) copy_highlight_digital_pane

0x2c41,	// (0x0004a369) copy_highlight_primary_pane

0x2c52,	// (0x0004a37a) copy_highlight_primary_small_pane

0x2c5a,	// (0x0004a382) copy_highlight_secondary_pane

0x2c62,	// (0x0004a38a) copy_highlight_title_pane

0x2c5a,	// (0x0004a382) graphic_text_digital_pane

0x3c13,	// (0x0004b33b) graphic_text_primary_pane

0x3c1c,	// (0x0004b344) graphic_text_primary_small_pane

0x2c52,	// (0x0004a37a) graphic_text_secondary_pane

0x2c41,	// (0x0004a369) graphic_text_title_pane

0xb321,	// (0x00052a49) cursor_primary_pane_g1

0x3c05,	// (0x0004b32d) cursor_text_primary_t1

0xca2f,	// (0x00054157) cursor_primary_small_pane_g1

0x3bf7,	// (0x0004b31f) cursor_text_primary_small_t1

0xca25,	// (0x0005414d) cursor_primary_small_pane_g1_copy1

0x3bdf,	// (0x0004b307) cursor_text_primary_small_t1_copy1

0x3bbd,	// (0x0004b2e5) cursor_text_title_t1

0xca1b,	// (0x00054143) cursor_title_pane_g1

0xb321,	// (0x00052a49) cursor_digital_pane_g1

0x2c74,	// (0x0004a39c) cursor_text_digital_t1

0x2c82,	// (0x0004a3aa) link_highlight_primary_pane_g1

0x3b66,	// (0x0004b28e) link_highlight_primary_pane_t1

0x2c82,	// (0x0004a3aa) link_highlight_primary_small_pane_g1

0x2c8a,	// (0x0004a3b2) link_highlight_primary_small_pane_t1

0x2c99,	// (0x0004a3c1) link_highlight_secondary_pane_g1

0x2ca1,	// (0x0004a3c9) link_highlight_secondary_pane_t1

0x3ada,	// (0x0004b202) link_highlight_title_pane_g1

0x3ae2,	// (0x0004b20a) link_highlight_title_pane_t1

0x3ac3,	// (0x0004b1eb) link_highlight_digital_pane_g1

0x3acb,	// (0x0004b1f3) link_highlight_digital_pane_t1

0x398b,	// (0x0004b0b3) copy_highlight_primary_pane_g1

0x39a2,	// (0x0004b0ca) copy_highlight_primary_pane_t1

0x398b,	// (0x0004b0b3) copy_highlight_primary_small_pane_g1

0x3993,	// (0x0004b0bb) copy_highlight_primary_small_pane_t1

0x2cb0,	// (0x0004a3d8) copy_highlight_secondary_pane_g1

0x2cb8,	// (0x0004a3e0) copy_highlight_secondary_pane_t1

0x3974,	// (0x0004b09c) copy_highlight_title_pane_g1

0x397c,	// (0x0004b0a4) copy_highlight_title_pane_t1

0x398b,	// (0x0004b0b3) copy_highlight_digital_pane_g1

0x4c37,	// (0x0004c35f) copy_highlight_digital_pane_t1

0x4b8b,	// (0x0004c2b3) graphic_text_primary_pane_g1

0x4c1b,	// (0x0004c343) graphic_text_primary_pane_t1

0x4c29,	// (0x0004c351) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x000570d1) graphic_text_primary_pane_t

0x4bf7,	// (0x0004c31f) graphic_text_primary_small_pane_g1

0x4bff,	// (0x0004c327) graphic_text_primary_small_pane_t1

0x4c0d,	// (0x0004c335) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x000570cc) graphic_text_primary_small_pane_t

0x4bd3,	// (0x0004c2fb) graphic_text_secondary_pane_g1

0x4bdb,	// (0x0004c303) graphic_text_secondary_pane_t1

0x4be9,	// (0x0004c311) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x000570c7) graphic_text_secondary_pane_t

0x4baf,	// (0x0004c2d7) graphic_text_title_pane_g1

0x4bb7,	// (0x0004c2df) graphic_text_title_pane_t1

0x4bc5,	// (0x0004c2ed) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x000570c2) graphic_text_title_pane_t

0x4b8b,	// (0x0004c2b3) graphic_text_digital_pane_g1

0x4b93,	// (0x0004c2bb) graphic_text_digital_pane_t1

0x4ba1,	// (0x0004c2c9) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x000570bd) graphic_text_digital_pane_t

0xa4f1,	// (0x00051c19) navi_icon_pane_srt_ParamLimits

0xa4f1,	// (0x00051c19) navi_icon_pane_srt

0xa264,	// (0x0005198c) navi_midp_pane_srt

0xa264,	// (0x0005198c) navi_navi_pane_srt

0xa4f1,	// (0x00051c19) navi_text_pane_srt_ParamLimits

0xa4f1,	// (0x00051c19) navi_text_pane_srt

0x4b56,	// (0x0004c27e) navi_navi_icon_text_pane_srt

0x4b5e,	// (0x0004c286) navi_navi_pane_srt_g1_ParamLimits

0x4b5e,	// (0x0004c286) navi_navi_pane_srt_g1

0x4b70,	// (0x0004c298) navi_navi_pane_srt_g2_ParamLimits

0x4b70,	// (0x0004c298) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x000570b8) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x000570b8) navi_navi_pane_srt_g

0x4b82,	// (0x0004c2aa) navi_navi_tabs_pane_srt

0x4b56,	// (0x0004c27e) navi_navi_text_pane_srt

0x4b56,	// (0x0004c27e) navi_navi_volume_pane_srt

0x4b47,	// (0x0004c26f) navi_navi_text_pane_srt_t1

0x13ef,	// (0x00048b17) navi_navi_volume_pane_srt_g1

0x13f7,	// (0x00048b1f) volume_small_pane_srt_ParamLimits

0x13f7,	// (0x00048b1f) volume_small_pane_srt

0x06d0,	// (0x00047df8) volume_small_pane_srt_g1_ParamLimits

0x06d0,	// (0x00047df8) volume_small_pane_srt_g1

0x06e0,	// (0x00047e08) volume_small_pane_srt_g2_ParamLimits

0x06e0,	// (0x00047e08) volume_small_pane_srt_g2

0x06f1,	// (0x00047e19) volume_small_pane_srt_g3_ParamLimits

0x06f1,	// (0x00047e19) volume_small_pane_srt_g3

0x0702,	// (0x00047e2a) volume_small_pane_srt_g4_ParamLimits

0x0702,	// (0x00047e2a) volume_small_pane_srt_g4

0x0713,	// (0x00047e3b) volume_small_pane_srt_g5_ParamLimits

0x0713,	// (0x00047e3b) volume_small_pane_srt_g5

0x0724,	// (0x00047e4c) volume_small_pane_srt_g6_ParamLimits

0x0724,	// (0x00047e4c) volume_small_pane_srt_g6

0x0735,	// (0x00047e5d) volume_small_pane_srt_g7_ParamLimits

0x0735,	// (0x00047e5d) volume_small_pane_srt_g7

0x0746,	// (0x00047e6e) volume_small_pane_srt_g8_ParamLimits

0x0746,	// (0x00047e6e) volume_small_pane_srt_g8

0x0757,	// (0x00047e7f) volume_small_pane_srt_g9_ParamLimits

0x0757,	// (0x00047e7f) volume_small_pane_srt_g9

0x0768,	// (0x00047e90) volume_small_pane_srt_g10_ParamLimits

0x0768,	// (0x00047e90) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00056e65) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00056e65) volume_small_pane_srt_g

0xa957,	// (0x0005207f) query_popup_data_pane_cp2

0x4b2d,	// (0x0004c255) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4b2d,	// (0x0004c255) navi_navi_icon_text_pane_srt_t1

0x3c13,	// (0x0004b33b) navi_tabs_2_long_pane_srt

0x3c13,	// (0x0004b33b) navi_tabs_2_pane_srt

0x3c13,	// (0x0004b33b) navi_tabs_3_long_pane_srt

0x3c13,	// (0x0004b33b) navi_tabs_3_pane_srt

0x3c13,	// (0x0004b33b) navi_tabs_4_pane_srt

0x13cf,	// (0x00048af7) tabs_2_active_pane_srt_ParamLimits

0x13cf,	// (0x00048af7) tabs_2_active_pane_srt

0x13df,	// (0x00048b07) tabs_2_passive_pane_srt_ParamLimits

0x13df,	// (0x00048b07) tabs_2_passive_pane_srt

0x33e1,	// (0x0004ab09) bg_passive_tab_pane_cp1_srt_ParamLimits

0x33e1,	// (0x0004ab09) bg_passive_tab_pane_cp1_srt

0x4af9,	// (0x0004c221) bg_passive_tab_pane_g1_cp1_srt

0x274e,	// (0x00049e76) bg_passive_tab_pane_g2_cp1_srt

0x4b02,	// (0x0004c22a) bg_passive_tab_pane_g3_cp1_srt

0xa4af,	// (0x00051bd7) bg_active_tab_pane_cp1_srt_ParamLimits

0xa4af,	// (0x00051bd7) bg_active_tab_pane_cp1_srt

0x4b0b,	// (0x0004c233) tabs_2_active_pane_srt_g1

0xce6f,	// (0x00054597) tabs_2_active_pane_srt_t1_ParamLimits

0xce6f,	// (0x00054597) tabs_2_active_pane_srt_t1

0x4af9,	// (0x0004c221) bg_active_tab_pane_g1_cp1_srt

0x274e,	// (0x00049e76) bg_active_tab_pane_g2_cp1_srt

0x4b02,	// (0x0004c22a) bg_active_tab_pane_g3_cp1_srt

0x139c,	// (0x00048ac4) tabs_3_active_pane_srt_ParamLimits

0x139c,	// (0x00048ac4) tabs_3_active_pane_srt

0x13ad,	// (0x00048ad5) tabs_3_passive_pane_cp_srt_ParamLimits

0x13ad,	// (0x00048ad5) tabs_3_passive_pane_cp_srt

0x13be,	// (0x00048ae6) tabs_3_passive_pane_srt_ParamLimits

0x13be,	// (0x00048ae6) tabs_3_passive_pane_srt

0x33e1,	// (0x0004ab09) bg_passive_tab_pane_cp2_srt_ParamLimits

0x33e1,	// (0x0004ab09) bg_passive_tab_pane_cp2_srt

0x2cc7,	// (0x0004a3ef) bg_passive_tab_pane_g1_cp2_srt

0x274e,	// (0x00049e76) bg_passive_tab_pane_g2_cp2_srt

0x2cd0,	// (0x0004a3f8) bg_passive_tab_pane_g3_cp2_srt

0xa4af,	// (0x00051bd7) bg_active_tab_pane_cp2_srt_ParamLimits

0xa4af,	// (0x00051bd7) bg_active_tab_pane_cp2_srt

0x4adf,	// (0x0004c207) tabs_3_active_pane_srt_g1

0xce59,	// (0x00054581) tabs_3_active_pane_srt_t1_ParamLimits

0xce59,	// (0x00054581) tabs_3_active_pane_srt_t1

0x2cc7,	// (0x0004a3ef) bg_active_tab_pane_g1_cp2_srt

0x274e,	// (0x00049e76) bg_active_tab_pane_g2_cp2_srt

0x2cd0,	// (0x0004a3f8) bg_active_tab_pane_g3_cp2_srt

0x1354,	// (0x00048a7c) tabs_4_active_pane_srt_ParamLimits

0x1354,	// (0x00048a7c) tabs_4_active_pane_srt

0x1366,	// (0x00048a8e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1366,	// (0x00048a8e) tabs_4_passive_pane_cp2_srt

0x08eb,	// (0x00048013) aid_size_cell_toolbar

0x474a,	// (0x0004be72) main_idle_act_pane_ParamLimits

0x0ac8,	// (0x000481f0) popup_large_graphic_colour_window_ParamLimits

0xbc41,	// (0x00053369) popup_toolbar_window_ParamLimits

0xbc41,	// (0x00053369) popup_toolbar_window

0x12c3,	// (0x000489eb) list_single_graphic_2heading_pane_ParamLimits

0x12c3,	// (0x000489eb) list_single_graphic_2heading_pane

0xe701,	// (0x00055e29) aid_size_cell_apps_grid_lsc_pane

0xe713,	// (0x00055e3b) aid_size_cell_apps_grid_prt_pane

0x2e37,	// (0x0004a55f) bg_wml_button_pane_cp1_ParamLimits

0x2e37,	// (0x0004a55f) bg_wml_button_pane_cp1

0xc9d7,	// (0x000540ff) form_midp_field_text_pane_t1_ParamLimits

0x33e1,	// (0x0004ab09) input_focus_pane_cp050_ParamLimits

0x361a,	// (0x0004ad42) list_midp_form_text_pane_ParamLimits

0x35cc,	// (0x0004acf4) input_focus_pane_cp051_ParamLimits

0x35e0,	// (0x0004ad08) list_midp_choice_pane_ParamLimits

0x349a,	// (0x0004abc2) list_single_2graphic_pane_cp3_ParamLimits

0x349a,	// (0x0004abc2) list_single_2graphic_pane_cp3

0x34b0,	// (0x0004abd8) list_single_midp_graphic_pane_ParamLimits

0x34b0,	// (0x0004abd8) list_single_midp_graphic_pane

0xed2c,	// (0x00056454) list_single_graphic_2heading_pane_g1_ParamLimits

0xed2c,	// (0x00056454) list_single_graphic_2heading_pane_g1

0xed38,	// (0x00056460) list_single_graphic_2heading_pane_g4_ParamLimits

0xed38,	// (0x00056460) list_single_graphic_2heading_pane_g4

0xed44,	// (0x0005646c) list_single_graphic_2heading_pane_g5_ParamLimits

0xed44,	// (0x0005646c) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00056eb8) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00056eb8) list_single_graphic_2heading_pane_g

0xed50,	// (0x00056478) list_single_graphic_2heading_pane_t1_ParamLimits

0xed50,	// (0x00056478) list_single_graphic_2heading_pane_t1

0xed64,	// (0x0005648c) list_single_graphic_2heading_pane_t2_ParamLimits

0xed64,	// (0x0005648c) list_single_graphic_2heading_pane_t2

0xed80,	// (0x000564a8) list_single_graphic_2heading_pane_t3_ParamLimits

0xed80,	// (0x000564a8) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00056ebf) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00056ebf) list_single_graphic_2heading_pane_t

0x32ab,	// (0x0004a9d3) bg_popup_sub_pane_cp2

0x32d5,	// (0x0004a9fd) grid_toobar_pane

0x0f2e,	// (0x00048656) cell_toolbar_pane_ParamLimits

0x0f2e,	// (0x00048656) cell_toolbar_pane

0x3311,	// (0x0004aa39) cell_toolbar_pane_g1_ParamLimits

0x3311,	// (0x0004aa39) cell_toolbar_pane_g1

0x3325,	// (0x0004aa4d) cell_toolbar_pane_g2_ParamLimits

0x3325,	// (0x0004aa4d) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x00056ecd) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x00056ecd) cell_toolbar_pane_g

0x3347,	// (0x0004aa6f) grid_highlight_pane_cp2_ParamLimits

0x3347,	// (0x0004aa6f) grid_highlight_pane_cp2

0x3361,	// (0x0004aa89) toolbar_button_pane

0x336d,	// (0x0004aa95) toolbar_button_pane_g1

0x3375,	// (0x0004aa9d) toolbar_button_pane_g2

0x337d,	// (0x0004aaa5) toolbar_button_pane_g3

0x3385,	// (0x0004aaad) toolbar_button_pane_g4

0x338d,	// (0x0004aab5) toolbar_button_pane_g5

0x3395,	// (0x0004aabd) toolbar_button_pane_g6

0x339d,	// (0x0004aac5) toolbar_button_pane_g7

0x33a5,	// (0x0004aacd) toolbar_button_pane_g8

0x33ad,	// (0x0004aad5) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00056ed2) toolbar_button_pane_g

0x0f7e,	// (0x000486a6) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0f7e,	// (0x000486a6) list_single_2graphic_pane_g1_cp3

0xbe62,	// (0x0005358a) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbe62,	// (0x0005358a) list_single_2graphic_pane_g2_cp3

0x292f,	// (0x0004a057) list_single_2graphic_pane_g3_cp3

0x0f9b,	// (0x000486c3) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0f9b,	// (0x000486c3) list_single_2graphic_pane_g4_cp3

0x0fa7,	// (0x000486cf) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0fa7,	// (0x000486cf) list_single_2graphic_pane_t1_cp3

0x25eb,	// (0x00049d13) list_single_midp_graphic_pane_g2_ParamLimits

0x25eb,	// (0x00049d13) list_single_midp_graphic_pane_g2

0xed14,	// (0x0005643c) aid_zoom_text_primary

0xed1c,	// (0x00056444) aid_zoom_text_secondary

0xb379,	// (0x00052aa1) status_small_pane_g7_ParamLimits

0xb379,	// (0x00052aa1) status_small_pane_g7

0xb39c,	// (0x00052ac4) status_small_pane_t1_ParamLimits

0xa3af,	// (0x00051ad7) title_pane_g2

0x0003,

0xf529,	// (0x00056c51) title_pane_g

0xaa07,	// (0x0005212f) aid_size_cell_colour_1_pane_ParamLimits

0xaa07,	// (0x0005212f) aid_size_cell_colour_1_pane

0xaa1b,	// (0x00052143) aid_size_cell_colour_2_pane_ParamLimits

0xaa1b,	// (0x00052143) aid_size_cell_colour_2_pane

0xaa2f,	// (0x00052157) aid_size_cell_colour_3_pane_ParamLimits

0xaa2f,	// (0x00052157) aid_size_cell_colour_3_pane

0xaa43,	// (0x0005216b) aid_size_cell_colour_4_pane_ParamLimits

0xaa43,	// (0x0005216b) aid_size_cell_colour_4_pane

0x015d,	// (0x00047885) title_pane_stacon_g1_ParamLimits

0x015d,	// (0x00047885) title_pane_stacon_g1

0x39f9,	// (0x0004b121) popup_note_wait_window_g3_ParamLimits

0x39f9,	// (0x0004b121) popup_note_wait_window_g3

0x3a70,	// (0x0004b198) popup_note_wait_window_t5_ParamLimits

0x3a70,	// (0x0004b198) popup_note_wait_window_t5

0xa264,	// (0x0005198c) main_feb_china_hwr_fs_writing_pane

0xb5d4,	// (0x00052cfc) popup_feb_china_hwr_fs_window_ParamLimits

0xb5d4,	// (0x00052cfc) popup_feb_china_hwr_fs_window

0xbe73,	// (0x0005359b) aid_size_cell_hwr_fs_ParamLimits

0xbe73,	// (0x0005359b) aid_size_cell_hwr_fs

0x33e1,	// (0x0004ab09) bg_popup_sub_pane_cp3_ParamLimits

0x33e1,	// (0x0004ab09) bg_popup_sub_pane_cp3

0xbe88,	// (0x000535b0) grid_hwr_fs_pane_ParamLimits

0xbe88,	// (0x000535b0) grid_hwr_fs_pane

0x1005,	// (0x0004872d) linegrid_hwr_fs_pane_ParamLimits

0x1005,	// (0x0004872d) linegrid_hwr_fs_pane

0xbea0,	// (0x000535c8) cell_hwr_fs_pane_ParamLimits

0xbea0,	// (0x000535c8) cell_hwr_fs_pane

0x33ed,	// (0x0004ab15) linegrid_hwr_fs_pane_g1_ParamLimits

0x33ed,	// (0x0004ab15) linegrid_hwr_fs_pane_g1

0xc978,	// (0x000540a0) linegrid_hwr_fs_pane_g2_ParamLimits

0xc978,	// (0x000540a0) linegrid_hwr_fs_pane_g2

0x340b,	// (0x0004ab33) linegrid_hwr_fs_pane_g3_ParamLimits

0x340b,	// (0x0004ab33) linegrid_hwr_fs_pane_g3

0x1039,	// (0x00048761) linegrid_hwr_fs_pane_g4_ParamLimits

0x1039,	// (0x00048761) linegrid_hwr_fs_pane_g4

0x1057,	// (0x0004877f) linegrid_hwr_fs_pane_g5_ParamLimits

0x1057,	// (0x0004877f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x00056ef8) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x00056ef8) linegrid_hwr_fs_pane_g

0x3417,	// (0x0004ab3f) cell_hwr_fs_pane_g1_ParamLimits

0x3417,	// (0x0004ab3f) cell_hwr_fs_pane_g1

0x31e6,	// (0x0004a90e) cell_hwr_fs_pane_g2_ParamLimits

0x31e6,	// (0x0004a90e) cell_hwr_fs_pane_g2

0xc98a,	// (0x000540b2) cell_hwr_fs_pane_g3_ParamLimits

0xc98a,	// (0x000540b2) cell_hwr_fs_pane_g3

0xc997,	// (0x000540bf) cell_hwr_fs_pane_g4_ParamLimits

0xc997,	// (0x000540bf) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x00056f03) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x00056f03) cell_hwr_fs_pane_g

0xbec6,	// (0x000535ee) cell_hwr_fs_pane_t1

0xa264,	// (0x0005198c) grid_highlight_pane_cp6

0xa264,	// (0x0005198c) main_idle_act2_pane

0xaf6f,	// (0x00052697) aid_inside_area_popup_secondary

0xca4f,	// (0x00054177) aid_inside_area_window_primary_ParamLimits

0xca4f,	// (0x00054177) aid_inside_area_window_primary

0x4c46,	// (0x0004c36e) ai2_news_ticker_pane

0x4c4e,	// (0x0004c376) aid_size_cell_ai1_link_ParamLimits

0x4c4e,	// (0x0004c376) aid_size_cell_ai1_link

0x4c68,	// (0x0004c390) popup_ai2_data_window_ParamLimits

0x4c68,	// (0x0004c390) popup_ai2_data_window

0x4c86,	// (0x0004c3ae) popup_ai2_link_window_ParamLimits

0x4c86,	// (0x0004c3ae) popup_ai2_link_window

0x33e1,	// (0x0004ab09) bg_popup_sub_pane_cp4_ParamLimits

0x33e1,	// (0x0004ab09) bg_popup_sub_pane_cp4

0x4c9c,	// (0x0004c3c4) grid_ai2_link_pane_ParamLimits

0x4c9c,	// (0x0004c3c4) grid_ai2_link_pane

0x4cb3,	// (0x0004c3db) popup_ai2_link_window_g1_ParamLimits

0x4cb3,	// (0x0004c3db) popup_ai2_link_window_g1

0x4cbf,	// (0x0004c3e7) popup_ai2_link_window_g2_ParamLimits

0x4cbf,	// (0x0004c3e7) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x000570d6) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x000570d6) popup_ai2_link_window_g

0x4cd0,	// (0x0004c3f8) ai2_mp_button_pane

0x4cd8,	// (0x0004c400) ai2_mp_volume_pane

0x35cc,	// (0x0004acf4) bg_popup_sub_pane_cp5_ParamLimits

0x35cc,	// (0x0004acf4) bg_popup_sub_pane_cp5

0x4ce0,	// (0x0004c408) heading_ai2_gene_pane_ParamLimits

0x4ce0,	// (0x0004c408) heading_ai2_gene_pane

0x4cec,	// (0x0004c414) list_ai2_gene_pane_ParamLimits

0x4cec,	// (0x0004c414) list_ai2_gene_pane

0x4d34,	// (0x0004c45c) cell_ai2_link_pane_ParamLimits

0x4d34,	// (0x0004c45c) cell_ai2_link_pane

0x4d4a,	// (0x0004c472) cell_ai2_link_pane_g1

0xa264,	// (0x0005198c) grid_highlight_pane_cp7

0x140c,	// (0x00048b34) ai2_mp_volume_pane_g1

0x4e1d,	// (0x0004c545) ai2_mp_volume_pane_g2

0x4d92,	// (0x0004c4ba) list_ai2_gene_pane_t1

0x4e25,	// (0x0004c54d) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x000570ef) ai2_mp_volume_pane_g

0x1414,	// (0x00048b3c) volume_small_pane_cp3

0x4e2d,	// (0x0004c555) aid_size_cell_ai2_button

0x4e35,	// (0x0004c55d) grid_ai2_button_pane

0x4e3e,	// (0x0004c566) cell_ai2_button_pane_ParamLimits

0x4e3e,	// (0x0004c566) cell_ai2_button_pane

0xa174,	// (0x0005189c) cell_ai2_button_pane_g1

0xa264,	// (0x0005198c) grid_highlight_pane_cp8

0x4ddd,	// (0x0004c505) ai2_gene_pane_t1_ParamLimits

0x4ddd,	// (0x0004c505) ai2_gene_pane_t1

0xb56c,	// (0x00052c94) aid_height_parent_landscape

0xcbf6,	// (0x0005431e) aid_height_set_list

0x474a,	// (0x0004be72) aid_size_parent

0x4a65,	// (0x0004c18d) aid_size_cell_graphic_pane_ParamLimits

0x4cfc,	// (0x0004c424) popup_ai2_data_window_g1_ParamLimits

0x4cfc,	// (0x0004c424) popup_ai2_data_window_g1

0x4d08,	// (0x0004c430) ai2_news_ticker_pane_g1

0x4d10,	// (0x0004c438) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x000570db) ai2_news_ticker_pane_g

0x4d18,	// (0x0004c440) ai2_news_ticker_pane_t1

0x4d26,	// (0x0004c44e) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x000570e0) ai2_news_ticker_pane_t

0x4d53,	// (0x0004c47b) heading_ai2_gene_pane_g1

0x4d5b,	// (0x0004c483) heading_ai2_gene_pane_t1_ParamLimits

0x4d5b,	// (0x0004c483) heading_ai2_gene_pane_t1

0x4d70,	// (0x0004c498) list_highlight_pane_cp6

0x4d78,	// (0x0004c4a0) ai2_gene_pane_ParamLimits

0x4d78,	// (0x0004c4a0) ai2_gene_pane

0x4da0,	// (0x0004c4c8) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x000570e5) list_ai2_gene_pane_t

0x4dae,	// (0x0004c4d6) list_highlight_pane_cp8_ParamLimits

0x4dae,	// (0x0004c4d6) list_highlight_pane_cp8

0x4dbf,	// (0x0004c4e7) ai2_gene_pane_g1_ParamLimits

0x4dbf,	// (0x0004c4e7) ai2_gene_pane_g1

0x4dd1,	// (0x0004c4f9) ai2_gene_pane_g2_ParamLimits

0x4dd1,	// (0x0004c4f9) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x000570ea) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x000570ea) ai2_gene_pane_g

0xad84,	// (0x000524ac) scroll_pane_cp12

0xb529,	// (0x00052c51) control_pane_t3_ParamLimits

0xb529,	// (0x00052c51) control_pane_t3

0xb38d,	// (0x00052ab5) status_small_pane_g8_ParamLimits

0xb38d,	// (0x00052ab5) status_small_pane_g8

0xb676,	// (0x00052d9e) popup_find_window_ParamLimits

0xb92d,	// (0x00053055) popup_note_image_window_ParamLimits

0xed98,	// (0x000564c0) list_double2_graphic_pane_vc_g1_ParamLimits

0xed98,	// (0x000564c0) list_double2_graphic_pane_vc_g1

0x0f5e,	// (0x00048686) list_double2_graphic_pane_vc_g2_ParamLimits

0x0f5e,	// (0x00048686) list_double2_graphic_pane_vc_g2

0x0f6a,	// (0x00048692) list_double2_graphic_pane_vc_g3_ParamLimits

0x0f6a,	// (0x00048692) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x00056ec6) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x00056ec6) list_double2_graphic_pane_vc_g

0xeda4,	// (0x000564cc) list_double2_graphic_pane_vc_t1_ParamLimits

0xeda4,	// (0x000564cc) list_double2_graphic_pane_vc_t1

0x0f5e,	// (0x00048686) list_single_heading_pane_vc_g1_ParamLimits

0x0f5e,	// (0x00048686) list_single_heading_pane_vc_g1

0x0f6a,	// (0x00048692) list_single_heading_pane_vc_g2_ParamLimits

0x0f6a,	// (0x00048692) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00056cd5) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00056cd5) list_single_heading_pane_vc_g

0xedba,	// (0x000564e2) list_single_heading_pane_vc_t1_ParamLimits

0xedba,	// (0x000564e2) list_single_heading_pane_vc_t1

0xedd0,	// (0x000564f8) list_single_heading_pane_vc_t2_ParamLimits

0xedd0,	// (0x000564f8) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x00056ee7) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x00056ee7) list_single_heading_pane_vc_t

0xede2,	// (0x0005650a) list_setting_number_pane_vc_g1_ParamLimits

0xede2,	// (0x0005650a) list_setting_number_pane_vc_g1

0xedee,	// (0x00056516) list_setting_number_pane_vc_g2_ParamLimits

0xedee,	// (0x00056516) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x00056eec) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x00056eec) list_setting_number_pane_vc_g

0xedfa,	// (0x00056522) list_setting_number_pane_vc_t1_ParamLimits

0xedfa,	// (0x00056522) list_setting_number_pane_vc_t1

0xee0e,	// (0x00056536) list_setting_number_pane_vc_t2_ParamLimits

0xee0e,	// (0x00056536) list_setting_number_pane_vc_t2

0xee2a,	// (0x00056552) list_setting_number_pane_vc_t3_ParamLimits

0xee2a,	// (0x00056552) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x00056ef1) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x00056ef1) list_setting_number_pane_vc_t

0xee56,	// (0x0005657e) set_value_pane_vc_ParamLimits

0xee56,	// (0x0005657e) set_value_pane_vc

0x12c3,	// (0x000489eb) list_double2_graphic_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_double2_graphic_pane_vc

0x12c3,	// (0x000489eb) list_double2_large_graphic_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_double2_large_graphic_pane_vc

0x12c3,	// (0x000489eb) list_double2_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_double2_pane_vc

0x12c3,	// (0x000489eb) list_double_graphic_heading_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_double_graphic_heading_pane_vc

0x12c3,	// (0x000489eb) list_double_graphic_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_double_graphic_pane_vc

0x12c3,	// (0x000489eb) list_double_heading_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_double_heading_pane_vc

0x12d7,	// (0x000489ff) list_double_large_graphic_pane_vc_ParamLimits

0x12d7,	// (0x000489ff) list_double_large_graphic_pane_vc

0x12c3,	// (0x000489eb) list_double_number_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_double_number_pane_vc

0x12c3,	// (0x000489eb) list_double_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_double_pane_vc

0x12c3,	// (0x000489eb) list_double_time_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_double_time_pane_vc

0x12c3,	// (0x000489eb) list_setting_number_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_setting_number_pane_vc

0x12c3,	// (0x000489eb) list_setting_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_setting_pane_vc

0x12c3,	// (0x000489eb) list_single_graphic_heading_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_single_graphic_heading_pane_vc

0x12c3,	// (0x000489eb) list_single_heading_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_single_heading_pane_vc

0x12c3,	// (0x000489eb) list_single_number_heading_pane_vc_ParamLimits

0x12c3,	// (0x000489eb) list_single_number_heading_pane_vc

0xee9f,	// (0x000565c7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xee9f,	// (0x000565c7) list_double_graphic_heading_pane_vc_g1

0x0f5e,	// (0x00048686) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0f5e,	// (0x00048686) list_double_graphic_heading_pane_vc_g2

0x0f6a,	// (0x00048692) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0f6a,	// (0x00048692) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x000570f6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x000570f6) list_double_graphic_heading_pane_vc_g

0xeeab,	// (0x000565d3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeeab,	// (0x000565d3) list_double_graphic_heading_pane_vc_t1

0xeec1,	// (0x000565e9) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeec1,	// (0x000565e9) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x000570fd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x000570fd) list_double_graphic_heading_pane_vc_t

0xede2,	// (0x0005650a) list_setting_pane_vc_g1_ParamLimits

0xede2,	// (0x0005650a) list_setting_pane_vc_g1

0xedee,	// (0x00056516) list_setting_pane_vc_g2_ParamLimits

0xedee,	// (0x00056516) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x00056eec) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x00056eec) list_setting_pane_vc_g

0xeedf,	// (0x00056607) list_setting_pane_vc_t1_ParamLimits

0xeedf,	// (0x00056607) list_setting_pane_vc_t1

0xeefb,	// (0x00056623) list_setting_pane_vc_t2_ParamLimits

0xeefb,	// (0x00056623) list_setting_pane_vc_t2

0x0001,

0xfa18,	// (0x00057140) list_setting_pane_vc_t_ParamLimits

0xfa18,	// (0x00057140) list_setting_pane_vc_t

0xee56,	// (0x0005657e) set_value_pane_cp_vc_ParamLimits

0xee56,	// (0x0005657e) set_value_pane_cp_vc

0x0f5e,	// (0x00048686) list_single_number_heading_pane_vc_g1_ParamLimits

0x0f5e,	// (0x00048686) list_single_number_heading_pane_vc_g1

0x0f6a,	// (0x00048692) list_single_number_heading_pane_vc_g2_ParamLimits

0x0f6a,	// (0x00048692) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00056cd5) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00056cd5) list_single_number_heading_pane_vc_g

0xef17,	// (0x0005663f) list_single_number_heading_pane_vc_t1_ParamLimits

0xef17,	// (0x0005663f) list_single_number_heading_pane_vc_t1

0xecab,	// (0x000563d3) list_single_number_heading_pane_vc_t2_ParamLimits

0xecab,	// (0x000563d3) list_single_number_heading_pane_vc_t2

0xecbd,	// (0x000563e5) list_single_number_heading_pane_vc_t3_ParamLimits

0xecbd,	// (0x000563e5) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1d,	// (0x00057145) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1d,	// (0x00057145) list_single_number_heading_pane_vc_t

0xed98,	// (0x000564c0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xed98,	// (0x000564c0) list_single_graphic_heading_pane_vc_g1

0x0f5e,	// (0x00048686) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0f5e,	// (0x00048686) list_single_graphic_heading_pane_vc_g4

0x0f6a,	// (0x00048692) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0f6a,	// (0x00048692) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x00056ec6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00056ec6) list_single_graphic_heading_pane_vc_g

0xef2d,	// (0x00056655) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xef2d,	// (0x00056655) list_single_graphic_heading_pane_vc_t1

0xef43,	// (0x0005666b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xef43,	// (0x0005666b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa24,	// (0x0005714c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa24,	// (0x0005714c) list_single_graphic_heading_pane_vc_t

0x0f5e,	// (0x00048686) list_double2_pane_vc_g1_ParamLimits

0x0f5e,	// (0x00048686) list_double2_pane_vc_g1

0x0f6a,	// (0x00048692) list_double2_pane_vc_g2_ParamLimits

0x0f6a,	// (0x00048692) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x00056cd5) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x00056cd5) list_double2_pane_vc_g

0xee89,	// (0x000565b1) list_double2_pane_vc_t1_ParamLimits

0xee89,	// (0x000565b1) list_double2_pane_vc_t1

0x141d,	// (0x00048b45) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x141d,	// (0x00048b45) list_double2_large_graphic_pane_vc_g1

0x0f5e,	// (0x00048686) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0f5e,	// (0x00048686) list_double2_large_graphic_pane_vc_g2

0x0f6a,	// (0x00048692) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0f6a,	// (0x00048692) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x00056ced) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x00056ced) list_double2_large_graphic_pane_vc_g

0xeccf,	// (0x000563f7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xeccf,	// (0x000563f7) list_double2_large_graphic_pane_vc_t1

0xef55,	// (0x0005667d) list_double_time_pane_vc_g1_ParamLimits

0xef55,	// (0x0005667d) list_double_time_pane_vc_g1

0xef61,	// (0x00056689) list_double_time_pane_vc_g2_ParamLimits

0xef61,	// (0x00056689) list_double_time_pane_vc_g2

0x0001,

0xfa29,	// (0x00057151) list_double_time_pane_vc_g_ParamLimits

0xfa29,	// (0x00057151) list_double_time_pane_vc_g

0xef6d,	// (0x00056695) list_double_time_pane_vc_t1_ParamLimits

0xef6d,	// (0x00056695) list_double_time_pane_vc_t1

0xef97,	// (0x000566bf) list_double_time_pane_vc_t2_ParamLimits

0xef97,	// (0x000566bf) list_double_time_pane_vc_t2

0xefe0,	// (0x00056708) list_double_time_pane_vc_t3_ParamLimits

0xefe0,	// (0x00056708) list_double_time_pane_vc_t3

0xeff2,	// (0x0005671a) list_double_time_pane_vc_t4_ParamLimits

0xeff2,	// (0x0005671a) list_double_time_pane_vc_t4

0x0003,

0xfa2e,	// (0x00057156) list_double_time_pane_vc_t_ParamLimits

0xfa2e,	// (0x00057156) list_double_time_pane_vc_t

0x0f5e,	// (0x00048686) list_double_pane_vc_g1_ParamLimits

0x0f5e,	// (0x00048686) list_double_pane_vc_g1

0x0f6a,	// (0x00048692) list_double_pane_vc_g2_ParamLimits

0x0f6a,	// (0x00048692) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x00056cd5) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x00056cd5) list_double_pane_vc_g

0xf006,	// (0x0005672e) list_double_pane_vc_t1_ParamLimits

0xf006,	// (0x0005672e) list_double_pane_vc_t1

0xf01a,	// (0x00056742) list_double_pane_vc_t2_ParamLimits

0xf01a,	// (0x00056742) list_double_pane_vc_t2

0x0001,

0xfa37,	// (0x0005715f) list_double_pane_vc_t_ParamLimits

0xfa37,	// (0x0005715f) list_double_pane_vc_t

0x0f5e,	// (0x00048686) list_double_number_pane_vc_g1_ParamLimits

0x0f5e,	// (0x00048686) list_double_number_pane_vc_g1

0x0f6a,	// (0x00048692) list_double_number_pane_vc_g2_ParamLimits

0x0f6a,	// (0x00048692) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x00056cd5) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x00056cd5) list_double_number_pane_vc_g

0xee77,	// (0x0005659f) list_double_number_pane_vc_t1_ParamLimits

0xee77,	// (0x0005659f) list_double_number_pane_vc_t1

0xf030,	// (0x00056758) list_double_number_pane_vc_t2_ParamLimits

0xf030,	// (0x00056758) list_double_number_pane_vc_t2

0xf01a,	// (0x00056742) list_double_number_pane_vc_t3_ParamLimits

0xf01a,	// (0x00056742) list_double_number_pane_vc_t3

0x0002,

0xfa3c,	// (0x00057164) list_double_number_pane_vc_t_ParamLimits

0xfa3c,	// (0x00057164) list_double_number_pane_vc_t

0x1429,	// (0x00048b51) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1429,	// (0x00048b51) list_double_large_graphic_pane_vc_g1

0x144b,	// (0x00048b73) list_double_large_graphic_pane_vc_g2_ParamLimits

0x144b,	// (0x00048b73) list_double_large_graphic_pane_vc_g2

0x145f,	// (0x00048b87) list_double_large_graphic_pane_vc_g3_ParamLimits

0x145f,	// (0x00048b87) list_double_large_graphic_pane_vc_g3

0xf044,	// (0x0005676c) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf044,	// (0x0005676c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa43,	// (0x0005716b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x0005716b) list_double_large_graphic_pane_vc_g

0xf050,	// (0x00056778) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf050,	// (0x00056778) list_double_large_graphic_pane_vc_t1

0xf06c,	// (0x00056794) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf06c,	// (0x00056794) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x00057174) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x00057174) list_double_large_graphic_pane_vc_t

0x0f5e,	// (0x00048686) list_double_heading_pane_vc_g1_ParamLimits

0x0f5e,	// (0x00048686) list_double_heading_pane_vc_g1

0x0f6a,	// (0x00048692) list_double_heading_pane_vc_g2_ParamLimits

0x0f6a,	// (0x00048692) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00056cd5) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00056cd5) list_double_heading_pane_vc_g

0xf08c,	// (0x000567b4) list_double_heading_pane_vc_t1_ParamLimits

0xf08c,	// (0x000567b4) list_double_heading_pane_vc_t1

0xf09e,	// (0x000567c6) list_double_heading_pane_vc_t2_ParamLimits

0xf09e,	// (0x000567c6) list_double_heading_pane_vc_t2

0x0001,

0xfa51,	// (0x00057179) list_double_heading_pane_vc_t_ParamLimits

0xfa51,	// (0x00057179) list_double_heading_pane_vc_t

0xf0b6,	// (0x000567de) list_double_graphic_pane_vc_g1_ParamLimits

0xf0b6,	// (0x000567de) list_double_graphic_pane_vc_g1

0xf0c2,	// (0x000567ea) list_double_graphic_pane_vc_g2_ParamLimits

0xf0c2,	// (0x000567ea) list_double_graphic_pane_vc_g2

0x0f5e,	// (0x00048686) list_double_graphic_pane_vc_g3_ParamLimits

0x0f5e,	// (0x00048686) list_double_graphic_pane_vc_g3

0x0003,

0xfa56,	// (0x0005717e) list_double_graphic_pane_vc_g_ParamLimits

0xfa56,	// (0x0005717e) list_double_graphic_pane_vc_g

0xf0df,	// (0x00056807) list_double_graphic_pane_vc_t1_ParamLimits

0xf0df,	// (0x00056807) list_double_graphic_pane_vc_t1

0xf109,	// (0x00056831) list_double_graphic_pane_vc_t2_ParamLimits

0xf109,	// (0x00056831) list_double_graphic_pane_vc_t2

0x0001,

0xfa5f,	// (0x00057187) list_double_graphic_pane_vc_t_ParamLimits

0xfa5f,	// (0x00057187) list_double_graphic_pane_vc_t

0xf2c6,	// (0x000569ee) aid_size_cell_fastswap

0xa17e,	// (0x000518a6) aid_size_cell_touch_ParamLimits

0xa17e,	// (0x000518a6) aid_size_cell_touch

0xf443,	// (0x00056b6b) popup_fast_swap_wide_window_ParamLimits

0xf443,	// (0x00056b6b) popup_fast_swap_wide_window

0xa346,	// (0x00051a6e) touch_pane_ParamLimits

0xa346,	// (0x00051a6e) touch_pane

0xadee,	// (0x00052516) button_value_adjust_pane_cp2

0xe49e,	// (0x00055bc6) button_value_adjust_pane_cp4

0xe4a6,	// (0x00055bce) form_field_data_pane_cp2

0x9d56,	// (0x0005147e) form_field_data_wide_pane_cp2

0xe738,	// (0x00055e60) bg_scroll_pane_ParamLimits

0x035e,	// (0x00047a86) scroll_handle_pane_ParamLimits

0x0372,	// (0x00047a9a) scroll_sc2_down_pane_ParamLimits

0x0372,	// (0x00047a9a) scroll_sc2_down_pane

0xe769,	// (0x00055e91) scroll_sc2_up_pane_ParamLimits

0xe769,	// (0x00055e91) scroll_sc2_up_pane

0xcfb1,	// (0x000546d9) grid_wheel_folder_pane_g1_ParamLimits

0xcfb1,	// (0x000546d9) grid_wheel_folder_pane_g1

0x0668,	// (0x00047d90) clock_nsta_pane_cp2_ParamLimits

0x0668,	// (0x00047d90) clock_nsta_pane_cp2

0xb26b,	// (0x00052993) listscroll_midp_pane_ParamLimits

0xb277,	// (0x0005299f) midp_canvas_pane

0x2e0f,	// (0x0004a537) nsta_clock_indic_pane

0x2e43,	// (0x0004a56b) listscroll_form_pane_vc

0x2e4b,	// (0x0004a573) listscroll_set_pane_vc_ParamLimits

0x2e4b,	// (0x0004a573) listscroll_set_pane_vc

0xbda7,	// (0x000534cf) clock_nsta_pane

0xbdd1,	// (0x000534f9) indicator_nsta_pane

0x32ab,	// (0x0004a9d3) bg_popup_sub_pane_cp2_ParamLimits

0x32bf,	// (0x0004a9e7) find_pane_cp2_ParamLimits

0x32bf,	// (0x0004a9e7) find_pane_cp2

0x32d5,	// (0x0004a9fd) grid_toobar_pane_ParamLimits

0x33b5,	// (0x0004aadd) list_form_gen_pane_vc_ParamLimits

0x33b5,	// (0x0004aadd) list_form_gen_pane_vc

0x33cb,	// (0x0004aaf3) scroll_pane_cp8_vc_ParamLimits

0x33cb,	// (0x0004aaf3) scroll_pane_cp8_vc

0x3447,	// (0x0004ab6f) data_form_wide_pane_vc_ParamLimits

0x3447,	// (0x0004ab6f) data_form_wide_pane_vc

0x3453,	// (0x0004ab7b) form_field_data_wide_pane_vc_g1

0x345b,	// (0x0004ab83) form_field_data_wide_pane_vc_t1_ParamLimits

0x345b,	// (0x0004ab83) form_field_data_wide_pane_vc_t1

0xae02,	// (0x0005252a) input_focus_pane_cp6_vc_ParamLimits

0xae02,	// (0x0005252a) input_focus_pane_cp6_vc

0x3777,	// (0x0004ae9f) list_midp_pane_ParamLimits

0x4ad3,	// (0x0004c1fb) scroll_pane_cp16_ParamLimits

0x4ad3,	// (0x0004c1fb) scroll_pane_cp16

0x37cd,	// (0x0004aef5) button_value_adjust_pane_ParamLimits

0x37cd,	// (0x0004aef5) button_value_adjust_pane

0xcc07,	// (0x0005432f) button_value_adjust_pane_cp6_ParamLimits

0xcc07,	// (0x0005432f) button_value_adjust_pane_cp6

0xcd43,	// (0x0005446b) settings_code_pane_cp_ParamLimits

0xcd43,	// (0x0005446b) settings_code_pane_cp

0xa174,	// (0x0005189c) cell_touch_pane_g1

0xa174,	// (0x0005189c) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00056e0b) cell_touch_pane_g

0xce85,	// (0x000545ad) cell_touch_pane_cp_ParamLimits

0xce85,	// (0x000545ad) cell_touch_pane_cp

0xcea1,	// (0x000545c9) cell_touch_pane_ParamLimits

0xcea1,	// (0x000545c9) cell_touch_pane

0xa174,	// (0x0005189c) scroll_sc2_down_pane_g1

0xa174,	// (0x0005189c) scroll_sc2_up_pane_g1

0xa264,	// (0x0005198c) bg_set_opt_pane_cp4_vc

0x4e71,	// (0x0004c599) list_set_graphic_pane_vc_g1_ParamLimits

0x4e71,	// (0x0004c599) list_set_graphic_pane_vc_g1

0x4e7d,	// (0x0004c5a5) list_set_graphic_pane_vc_g2_ParamLimits

0x4e7d,	// (0x0004c5a5) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x00057102) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x00057102) list_set_graphic_pane_vc_g

0x4e89,	// (0x0004c5b1) text_primary_small_cp13_vc_ParamLimits

0x4e89,	// (0x0004c5b1) text_primary_small_cp13_vc

0x4ea1,	// (0x0004c5c9) list_set_graphic_pane_vc_ParamLimits

0x4ea1,	// (0x0004c5c9) list_set_graphic_pane_vc

0xa264,	// (0x0005198c) input_focus_pane_cp2_vc

0xa174,	// (0x0005189c) setting_code_pane_vc_g1

0xa508,	// (0x00051c30) setting_code_pane_vc_t1

0x4eb4,	// (0x0004c5dc) set_text_pane_vc_t1_ParamLimits

0x4eb4,	// (0x0004c5dc) set_text_pane_vc_t1

0xa264,	// (0x0005198c) input_focus_pane_cp1_vc

0x4ed5,	// (0x0004c5fd) list_set_text_pane_vc

0xa174,	// (0x0005189c) setting_text_pane_vc_g1

0xa264,	// (0x0005198c) bg_set_opt_pane_cp2_vc

0xa4ff,	// (0x00051c27) setting_slider_graphic_pane_vc_g1

0x4edf,	// (0x0004c607) setting_slider_graphic_pane_vc_t1

0x4ef1,	// (0x0004c619) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x00057107) setting_slider_graphic_pane_vc_t

0x4f03,	// (0x0004c62b) slider_set_pane_cp_vc

0x4f0d,	// (0x0004c635) slider_set_pane_vc_g1

0x4f16,	// (0x0004c63e) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0005710c) slider_set_pane_vc_g

0xae5a,	// (0x00052582) set_opt_bg_pane_g1_copy1

0xae62,	// (0x0005258a) set_opt_bg_pane_g2_copy1

0x4f42,	// (0x0004c66a) set_opt_bg_pane_g3_copy1

0xae72,	// (0x0005259a) set_opt_bg_pane_g4_copy1

0xae7a,	// (0x000525a2) set_opt_bg_pane_g5_copy1

0xae82,	// (0x000525aa) set_opt_bg_pane_g6_copy1

0x4f4c,	// (0x0004c674) set_opt_bg_pane_g7_copy1

0x4f56,	// (0x0004c67e) set_opt_bg_pane_g8_copy1

0x4f60,	// (0x0004c688) set_opt_bg_pane_g9_copy1

0xa264,	// (0x0005198c) bg_set_opt_pane_cp_vc

0x4f6a,	// (0x0004c692) setting_slider_pane_vc_t1

0x4f79,	// (0x0004c6a1) setting_slider_pane_vc_t2

0x4f8b,	// (0x0004c6b3) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0005711b) setting_slider_pane_vc_t

0x4f9d,	// (0x0004c6c5) slider_set_pane_vc

0x107b,	// (0x000487a3) volume_set_pane_vc_g1

0x1084,	// (0x000487ac) volume_set_pane_vc_g2

0x108d,	// (0x000487b5) volume_set_pane_vc_g3

0x1096,	// (0x000487be) volume_set_pane_vc_g4

0x109f,	// (0x000487c7) volume_set_pane_vc_g5

0x10a8,	// (0x000487d0) volume_set_pane_vc_g6

0x10b1,	// (0x000487d9) volume_set_pane_vc_g7

0x10ba,	// (0x000487e2) volume_set_pane_vc_g8

0x10c3,	// (0x000487eb) volume_set_pane_vc_g9

0x10cc,	// (0x000487f4) volume_set_pane_vc_g10

0x0009,

0xf9fa,	// (0x00057122) volume_set_pane_vc_g

0x4fa7,	// (0x0004c6cf) volume_set_pane_vc

0x4fb1,	// (0x0004c6d9) button_value_adjust_pane_cp1_vc

0x4fbb,	// (0x0004c6e3) list_highlight_pane_cp2_vc

0x4fc4,	// (0x0004c6ec) list_set_pane_vc_ParamLimits

0x4fc4,	// (0x0004c6ec) list_set_pane_vc

0x5032,	// (0x0004c75a) main_pane_set_vc_t1_ParamLimits

0x5032,	// (0x0004c75a) main_pane_set_vc_t1

0x5047,	// (0x0004c76f) main_pane_set_vc_t2_ParamLimits

0x5047,	// (0x0004c76f) main_pane_set_vc_t2

0x5059,	// (0x0004c781) main_pane_set_vc_t3_ParamLimits

0x5059,	// (0x0004c781) main_pane_set_vc_t3

0x506d,	// (0x0004c795) main_pane_set_vc_t4_ParamLimits

0x506d,	// (0x0004c795) main_pane_set_vc_t4

0x0003,

0xfa0f,	// (0x00057137) main_pane_set_vc_t_ParamLimits

0xfa0f,	// (0x00057137) main_pane_set_vc_t

0x5081,	// (0x0004c7a9) setting_code_pane_vc_ParamLimits

0x5081,	// (0x0004c7a9) setting_code_pane_vc

0x5092,	// (0x0004c7ba) setting_slider_graphic_pane_vc

0x5092,	// (0x0004c7ba) setting_slider_pane_vc

0x5092,	// (0x0004c7ba) setting_text_pane_vc

0x5092,	// (0x0004c7ba) setting_volume_pane_vc

0x509c,	// (0x0004c7c4) scroll_pane_cp121_vc

0xaddc,	// (0x00052504) set_content_pane_vc

0x50a4,	// (0x0004c7cc) button_value_adjust_pane_g1

0x50ad,	// (0x0004c7d5) button_value_adjust_pane_g2

0x0001,

0xfa64,	// (0x0005718c) button_value_adjust_pane_g

0x50b6,	// (0x0004c7de) form_field_slider_wide_pane_vc_t1_ParamLimits

0x50b6,	// (0x0004c7de) form_field_slider_wide_pane_vc_t1

0x50c8,	// (0x0004c7f0) form_field_slider_wide_pane_vc_t2_ParamLimits

0x50c8,	// (0x0004c7f0) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa69,	// (0x00057191) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa69,	// (0x00057191) form_field_slider_wide_pane_vc_t

0xa4af,	// (0x00051bd7) input_focus_pane_cp10_vc_ParamLimits

0xa4af,	// (0x00051bd7) input_focus_pane_cp10_vc

0x50f4,	// (0x0004c81c) slider_cont_pane_cp1_vc_ParamLimits

0x50f4,	// (0x0004c81c) slider_cont_pane_cp1_vc

0x5106,	// (0x0004c82e) slider_form_pane_g1_cp2

0x4f16,	// (0x0004c63e) slider_form_pane_g2_cp2

0x5133,	// (0x0004c85b) form_field_slider_pane_vc_t3

0x5141,	// (0x0004c869) form_field_slider_pane_vc_t4

0x514f,	// (0x0004c877) slider_form_pane_vc_ParamLimits

0x514f,	// (0x0004c877) slider_form_pane_vc

0x515c,	// (0x0004c884) form_field_slider_pane_vc_t1_ParamLimits

0x515c,	// (0x0004c884) form_field_slider_pane_vc_t1

0x50c8,	// (0x0004c7f0) form_field_slider_pane_vc_t2_ParamLimits

0x50c8,	// (0x0004c7f0) form_field_slider_pane_vc_t2

0x0001,

0xfa7b,	// (0x000571a3) form_field_slider_pane_vc_t_ParamLimits

0xfa7b,	// (0x000571a3) form_field_slider_pane_vc_t

0xa4af,	// (0x00051bd7) input_focus_pane_cp9_vc_ParamLimits

0xa4af,	// (0x00051bd7) input_focus_pane_cp9_vc

0x5172,	// (0x0004c89a) slider_cont_pane_vc_ParamLimits

0x5172,	// (0x0004c89a) slider_cont_pane_vc

0x5186,	// (0x0004c8ae) list_form_graphic_pane_cp_vc_ParamLimits

0x5186,	// (0x0004c8ae) list_form_graphic_pane_cp_vc

0x3453,	// (0x0004ab7b) form_field_popup_wide_pane_vc_g1

0x519b,	// (0x0004c8c3) form_field_popup_wide_pane_vc_t1_ParamLimits

0x519b,	// (0x0004c8c3) form_field_popup_wide_pane_vc_t1

0xae02,	// (0x0005252a) input_focus_pane_cp8_vc_ParamLimits

0xae02,	// (0x0005252a) input_focus_pane_cp8_vc

0x51e0,	// (0x0004c908) list_form_wide_pane_vc_ParamLimits

0x51e0,	// (0x0004c908) list_form_wide_pane_vc

0x51ec,	// (0x0004c914) list_form_graphic_pane_vc_g1

0x51f4,	// (0x0004c91c) list_form_graphic_pane_vc_t1_ParamLimits

0x51f4,	// (0x0004c91c) list_form_graphic_pane_vc_t1

0xa4f1,	// (0x00051c19) list_highlight_pane_cp5_vc_ParamLimits

0xa4f1,	// (0x00051c19) list_highlight_pane_cp5_vc

0x5210,	// (0x0004c938) list_form_graphic_pane_vc_ParamLimits

0x5210,	// (0x0004c938) list_form_graphic_pane_vc

0x3453,	// (0x0004ab7b) form_field_popup_pane_vc_g1

0x5226,	// (0x0004c94e) form_field_popup_pane_vc_t1_ParamLimits

0x5226,	// (0x0004c94e) form_field_popup_pane_vc_t1

0xae02,	// (0x0005252a) input_focus_pane_cp7_vc_ParamLimits

0xae02,	// (0x0005252a) input_focus_pane_cp7_vc

0x523d,	// (0x0004c965) list_form_pane_vc_ParamLimits

0x523d,	// (0x0004c965) list_form_pane_vc

0x5249,	// (0x0004c971) data_form_pane_vc_t1_ParamLimits

0x5249,	// (0x0004c971) data_form_pane_vc_t1

0xae5a,	// (0x00052582) input_focus_pane_vc_g1

0xae62,	// (0x0005258a) input_focus_pane_vc_g2

0xae6a,	// (0x00052592) input_focus_pane_vc_g3

0xae72,	// (0x0005259a) input_focus_pane_vc_g4

0xae7a,	// (0x000525a2) input_focus_pane_vc_g5

0xae82,	// (0x000525aa) input_focus_pane_vc_g6

0xae8a,	// (0x000525b2) input_focus_pane_vc_g7

0xae92,	// (0x000525ba) input_focus_pane_vc_g8

0xae9a,	// (0x000525c2) input_focus_pane_vc_g9

0xa174,	// (0x0005189c) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00056d94) input_focus_pane_vc_g

0x3447,	// (0x0004ab6f) data_form_pane_vc_ParamLimits

0x3447,	// (0x0004ab6f) data_form_pane_vc

0x3453,	// (0x0004ab7b) form_field_data_pane_vc_g1

0x5266,	// (0x0004c98e) form_field_data_pane_vc_t1_ParamLimits

0x5266,	// (0x0004c98e) form_field_data_pane_vc_t1

0xae02,	// (0x0005252a) input_focus_pane_vc_ParamLimits

0xae02,	// (0x0005252a) input_focus_pane_vc

0x5280,	// (0x0004c9a8) button_value_adjust_pane_cp3_vc

0x5288,	// (0x0004c9b0) button_value_adjust_pane_cp5_vc

0x5290,	// (0x0004c9b8) form_field_data_pane_vc_ParamLimits

0x5290,	// (0x0004c9b8) form_field_data_pane_vc

0x52ab,	// (0x0004c9d3) form_field_data_pane_vc_cp2

0x52b3,	// (0x0004c9db) form_field_data_wide_pane_vc_ParamLimits

0x52b3,	// (0x0004c9db) form_field_data_wide_pane_vc

0x52cd,	// (0x0004c9f5) form_field_data_wide_pane_vc_cp2

0x52d5,	// (0x0004c9fd) form_field_popup_pane_vc_ParamLimits

0x52d5,	// (0x0004c9fd) form_field_popup_pane_vc

0x52f0,	// (0x0004ca18) form_field_popup_wide_pane_vc_ParamLimits

0x52f0,	// (0x0004ca18) form_field_popup_wide_pane_vc

0x530a,	// (0x0004ca32) form_field_slider_pane_vc_ParamLimits

0x530a,	// (0x0004ca32) form_field_slider_pane_vc

0x531d,	// (0x0004ca45) form_field_slider_wide_pane_vc_ParamLimits

0x531d,	// (0x0004ca45) form_field_slider_wide_pane_vc

0xcebf,	// (0x000545e7) grid_touch_1_pane_ParamLimits

0xcebf,	// (0x000545e7) grid_touch_1_pane

0xced3,	// (0x000545fb) grid_touch_2_pane_ParamLimits

0xced3,	// (0x000545fb) grid_touch_2_pane

0x5403,	// (0x0004cb2b) touch_pane_g1_ParamLimits

0x5403,	// (0x0004cb2b) touch_pane_g1

0x5356,	// (0x0004ca7e) cell_app_pane_cp_wide_ParamLimits

0x5356,	// (0x0004ca7e) cell_app_pane_cp_wide

0x5367,	// (0x0004ca8f) grid_popup_fast_wide_pane_ParamLimits

0x5367,	// (0x0004ca8f) grid_popup_fast_wide_pane

0x537b,	// (0x0004caa3) scroll_pane_cp19_ParamLimits

0x537b,	// (0x0004caa3) scroll_pane_cp19

0xa264,	// (0x0005198c) bg_popup_window_pane_cp20

0x538f,	// (0x0004cab7) listscroll_popup_fast_wide_pane

0xceff,	// (0x00054627) grid_indicator_nsta_pane

0x53a9,	// (0x0004cad1) clock_nsta_pane_g1

0x53b2,	// (0x0004cada) clock_nsta_pane_t1

0xcf0b,	// (0x00054633) cell_indicator_nsta_pane_ParamLimits

0xcf0b,	// (0x00054633) cell_indicator_nsta_pane

0x5403,	// (0x0004cb2b) cell_indicator_nsta_pane_g1

0xcf26,	// (0x0005464e) cell_indicator_nsta_pane_g2

0x0001,

0xfa8c,	// (0x000571b4) cell_indicator_nsta_pane_g

0x5424,	// (0x0004cb4c) clock_nsta_pane_cp

0x542d,	// (0x0004cb55) indicator_nsta_pane_cp

0x5437,	// (0x0004cb5f) nsta_clock_indic_pane_g1

0xa5e9,	// (0x00051d11) grid_indicator_pane

0xe85b,	// (0x00055f83) scroll_pane_cp29

0x05b7,	// (0x00047cdf) indicator_nsta_pane_cp2_ParamLimits

0x05b7,	// (0x00047cdf) indicator_nsta_pane_cp2

0xa4f1,	// (0x00051c19) main_apps_wheel_pane

0x3634,	// (0x0004ad5c) form_midp_field_text_pane_ParamLimits

0x3783,	// (0x0004aeab) scroll_bar_cp050_ParamLimits

0x5490,	// (0x0004cbb8) cell_indicator_pane_ParamLimits

0x5490,	// (0x0004cbb8) cell_indicator_pane

0x54a8,	// (0x0004cbd0) cell_indicator_pane_g1

0xcf33,	// (0x0005465b) grid_wheel_folder_pane_ParamLimits

0xcf33,	// (0x0005465b) grid_wheel_folder_pane

0xcf41,	// (0x00054669) list_wheel_apps_pane_ParamLimits

0xcf41,	// (0x00054669) list_wheel_apps_pane

0xcf4f,	// (0x00054677) main_apps_wheel_pane_g1_ParamLimits

0xcf4f,	// (0x00054677) main_apps_wheel_pane_g1

0xcf5f,	// (0x00054687) main_apps_wheel_pane_g2_ParamLimits

0xcf5f,	// (0x00054687) main_apps_wheel_pane_g2

0x0001,

0xfaa8,	// (0x000571d0) main_apps_wheel_pane_g_ParamLimits

0xfaa8,	// (0x000571d0) main_apps_wheel_pane_g

0xcf6f,	// (0x00054697) main_apps_wheel_pane_t1_ParamLimits

0xcf6f,	// (0x00054697) main_apps_wheel_pane_t1

0xcf87,	// (0x000546af) list_wheel_apps_pane_g1

0xcf8f,	// (0x000546b7) list_wheel_apps_pane_g2

0xcf97,	// (0x000546bf) list_wheel_apps_pane_g3

0xcf9f,	// (0x000546c7) list_wheel_apps_pane_g4

0xcfa7,	// (0x000546cf) list_wheel_apps_pane_g5

0x0004,

0xfaad,	// (0x000571d5) list_wheel_apps_pane_g

0x2981,	// (0x0004a0a9) navi_icon_text_pane

0xbc99,	// (0x000533c1) aid_fill_nsta

0xcfc4,	// (0x000546ec) navi_icon_text_pane_g1

0xcfd0,	// (0x000546f8) navi_icon_text_pane_t1

0x2818,	// (0x00049f40) list_set_graphic_pane_t1_ParamLimits

0x2818,	// (0x00049f40) list_set_graphic_pane_t1

0x3ef0,	// (0x0004b618) popup_midp_note_alarm_window_t6_ParamLimits

0x3ef0,	// (0x0004b618) popup_midp_note_alarm_window_t6

0x3f02,	// (0x0004b62a) popup_midp_note_alarm_window_t7_ParamLimits

0x3f02,	// (0x0004b62a) popup_midp_note_alarm_window_t7

0x3f14,	// (0x0004b63c) popup_midp_note_alarm_window_t8_ParamLimits

0x3f14,	// (0x0004b63c) popup_midp_note_alarm_window_t8

0x3f26,	// (0x0004b64e) popup_midp_note_alarm_window_t9_ParamLimits

0x3f26,	// (0x0004b64e) popup_midp_note_alarm_window_t9

0x3f38,	// (0x0004b660) popup_midp_note_alarm_window_t10_ParamLimits

0x3f38,	// (0x0004b660) popup_midp_note_alarm_window_t10

0x3f4a,	// (0x0004b672) popup_midp_note_alarm_window_t11_ParamLimits

0x3f4a,	// (0x0004b672) popup_midp_note_alarm_window_t11

0x3f5c,	// (0x0004b684) scroll_pane_cp17_ParamLimits

0x3f5c,	// (0x0004b684) scroll_pane_cp17

0x107b,	// (0x000487a3) volume_small_pane_cp_g1

0x146e,	// (0x00048b96) volume_small_pane_cp_g2

0x1477,	// (0x00048b9f) volume_small_pane_cp_g3

0x1480,	// (0x00048ba8) volume_small_pane_cp_g4

0x1489,	// (0x00048bb1) volume_small_pane_cp_g5

0x1492,	// (0x00048bba) volume_small_pane_cp_g6

0x149b,	// (0x00048bc3) volume_small_pane_cp_g7

0x14a4,	// (0x00048bcc) volume_small_pane_cp_g8

0x14ad,	// (0x00048bd5) volume_small_pane_cp_g9

0x14b6,	// (0x00048bde) volume_small_pane_cp_g10

0x2bee,	// (0x0004a316) midp_ticker_pane_g1_ParamLimits

0x2bfa,	// (0x0004a322) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00056e60) midp_ticker_pane_g_ParamLimits

0xb30f,	// (0x00052a37) midp_ticker_pane_t1_ParamLimits

0xbcbd,	// (0x000533e5) aid_fill_nsta_2

0x376f,	// (0x0004ae97) list_form2_midp_pane

0x48eb,	// (0x0004c013) midp_editing_number_pane_ParamLimits

0x48fa,	// (0x0004c022) midp_ticker_pane_ParamLimits

0x559b,	// (0x0004ccc3) form2_midp_field_pane

0x55bf,	// (0x0004cce7) scroll_pane_cp51

0x55df,	// (0x0004cd07) form2_midp_button_pane_ParamLimits

0x55df,	// (0x0004cd07) form2_midp_button_pane

0x55f1,	// (0x0004cd19) form2_midp_content_pane_ParamLimits

0x55f1,	// (0x0004cd19) form2_midp_content_pane

0x560b,	// (0x0004cd33) form2_midp_field_choice_group_pane

0x5613,	// (0x0004cd3b) form2_midp_field_pane_g1

0x561b,	// (0x0004cd43) form2_midp_field_pane_g2

0x5623,	// (0x0004cd4b) form2_midp_field_pane_g3

0x562b,	// (0x0004cd53) form2_midp_field_pane_g4

0x0003,

0xfad2,	// (0x000571fa) form2_midp_field_pane_g

0x5633,	// (0x0004cd5b) form2_midp_gauge_slider_pane

0x563b,	// (0x0004cd63) form2_midp_gauge_wait_pane

0x5643,	// (0x0004cd6b) form2_midp_image_pane_ParamLimits

0x5643,	// (0x0004cd6b) form2_midp_image_pane

0x565e,	// (0x0004cd86) form2_midp_label_pane_ParamLimits

0x565e,	// (0x0004cd86) form2_midp_label_pane

0xcffe,	// (0x00054726) form2_midp_label_pane_cp_ParamLimits

0xcffe,	// (0x00054726) form2_midp_label_pane_cp

0x569e,	// (0x0004cdc6) form2_midp_string_pane_ParamLimits

0x569e,	// (0x0004cdc6) form2_midp_string_pane

0x9f73,	// (0x0005169b) form2_midp_text_pane_ParamLimits

0x9f73,	// (0x0005169b) form2_midp_text_pane

0x56b0,	// (0x0004cdd8) form2_midp_time_pane

0x56c0,	// (0x0004cde8) input_focus_pane_cp51_ParamLimits

0x56c0,	// (0x0004cde8) input_focus_pane_cp51

0x56d8,	// (0x0004ce00) form2_midp_label_pane_t1_ParamLimits

0x56d8,	// (0x0004ce00) form2_midp_label_pane_t1

0x9f96,	// (0x000516be) form2_mdip_text_pane_t1_ParamLimits

0x9f96,	// (0x000516be) form2_mdip_text_pane_t1

0xf127,	// (0x0005684f) form2_midp_time_pane_t1

0x5726,	// (0x0004ce4e) form2_midp_gauge_slider_pane_t1

0xd01f,	// (0x00054747) form2_midp_gauge_slider_pane_t2

0xd031,	// (0x00054759) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadb,	// (0x00057203) form2_midp_gauge_slider_pane_t

0x575c,	// (0x0004ce84) form2_midp_slider_pane

0x5768,	// (0x0004ce90) form2_midp_gauge_wait_pane_t1

0x5776,	// (0x0004ce9e) form2_midp_wait_pane_ParamLimits

0x5776,	// (0x0004ce9e) form2_midp_wait_pane

0x349a,	// (0x0004abc2) list_single_2graphic_pane_cp4_ParamLimits

0x349a,	// (0x0004abc2) list_single_2graphic_pane_cp4

0xd043,	// (0x0005476b) list_single_midp_graphic_pane_cp_ParamLimits

0xd043,	// (0x0005476b) list_single_midp_graphic_pane_cp

0xa264,	// (0x0005198c) list_highlight_pane_cp20

0x57ba,	// (0x0004cee2) list_single_2graphic_pane_g1_cp4

0x4d53,	// (0x0004c47b) list_single_2graphic_pane_g2_cp4

0x57c2,	// (0x0004ceea) list_single_2graphic_pane_t1_cp4

0xa4f1,	// (0x00051c19) list_highlight_pane_cp21

0x57d1,	// (0x0004cef9) list_single_midp_graphic_pane_g4_cp

0x57e0,	// (0x0004cf08) list_single_midp_graphic_pane_t1_cp

0xd064,	// (0x0005478c) form2_mdip_string_pane_t1_ParamLimits

0xd064,	// (0x0005478c) form2_mdip_string_pane_t1

0xa264,	// (0x0005198c) bg_wml_button_pane_cp2

0xa174,	// (0x0005189c) form2_midp_image_pane_g1

0x004c,	// (0x00047774) list_double_large_graphic_pane_g5_ParamLimits

0x004c,	// (0x00047774) list_double_large_graphic_pane_g5

0xb26b,	// (0x00052993) midp_form_pane_ParamLimits

0xa4f1,	// (0x00051c19) main_apps_wheel_pane_ParamLimits

0xb9b3,	// (0x000530db) popup_preview_window_ParamLimits

0xb9b3,	// (0x000530db) popup_preview_window

0x0ec7,	// (0x000485ef) popup_touch_info_window_ParamLimits

0x0ec7,	// (0x000485ef) popup_touch_info_window

0x0ee9,	// (0x00048611) popup_touch_menu_window_ParamLimits

0x0ee9,	// (0x00048611) popup_touch_menu_window

0xa16a,	// (0x00051892) bg_popup_sub_pane_cp6

0x5891,	// (0x0004cfb9) list_touch_menu_pane

0x5899,	// (0x0004cfc1) list_single_touch_menu_pane_ParamLimits

0x5899,	// (0x0004cfc1) list_single_touch_menu_pane

0x58b1,	// (0x0004cfd9) list_single_touch_menu_pane_t1

0xa4f1,	// (0x00051c19) bg_popup_sub_pane_cp7_ParamLimits

0xa4f1,	// (0x00051c19) bg_popup_sub_pane_cp7

0x58bf,	// (0x0004cfe7) heading_sub_pane

0x58c7,	// (0x0004cfef) list_touch_info_pane_ParamLimits

0x58c7,	// (0x0004cfef) list_touch_info_pane

0x58d6,	// (0x0004cffe) list_single_touch_info_pane_ParamLimits

0x58d6,	// (0x0004cffe) list_single_touch_info_pane

0x58e8,	// (0x0004d010) list_single_touch_info_pane_t1

0x58f6,	// (0x0004d01e) list_single_touch_info_pane_t2

0x0001,

0xfae9,	// (0x00057211) list_single_touch_info_pane_t

0x2b10,	// (0x0004a238) bg_popup_heading_pane_cp

0x5904,	// (0x0004d02c) heading_sub_pane_t1

0x33e1,	// (0x0004ab09) bg_popup_preview_window_pane_cp_ParamLimits

0x33e1,	// (0x0004ab09) bg_popup_preview_window_pane_cp

0x58bf,	// (0x0004cfe7) heading_preview_pane

0x58c7,	// (0x0004cfef) list_preview_pane_ParamLimits

0x58c7,	// (0x0004cfef) list_preview_pane

0x5912,	// (0x0004d03a) popup_preview_window_g1

0x58d6,	// (0x0004cffe) list_single_preview_pane_ParamLimits

0x58d6,	// (0x0004cffe) list_single_preview_pane

0x591a,	// (0x0004d042) list_single_preview_pane_g1

0x5922,	// (0x0004d04a) list_single_preview_pane_t1

0x58e8,	// (0x0004d010) list_single_preview_pane_t2

0x0001,

0xfaee,	// (0x00057216) list_single_preview_pane_t

0x5930,	// (0x0004d058) bg_popup_heading_pane_cp2_ParamLimits

0x5930,	// (0x0004d058) bg_popup_heading_pane_cp2

0x5946,	// (0x0004d06e) heading_preview_pane_g1

0x594e,	// (0x0004d076) heading_preview_pane_t1_ParamLimits

0x594e,	// (0x0004d076) heading_preview_pane_t1

0xa619,	// (0x00051d41) soft_indicator_pane_t1_ParamLimits

0xad61,	// (0x00052489) scroll_pane_ParamLimits

0xe757,	// (0x00055e7f) scroll_sc2_left_pane

0xe760,	// (0x00055e88) scroll_sc2_right_pane

0xe77f,	// (0x00055ea7) scroll_bg_pane_g1_ParamLimits

0xe794,	// (0x00055ebc) scroll_bg_pane_g2_ParamLimits

0xe7ac,	// (0x00055ed4) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00056deb) scroll_bg_pane_g_ParamLimits

0xe77f,	// (0x00055ea7) scroll_handle_pane_g1_ParamLimits

0xe7ce,	// (0x00055ef6) scroll_handle_pane_g2_ParamLimits

0xe7ac,	// (0x00055ed4) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x00056df2) scroll_handle_pane_g_ParamLimits

0x0925,	// (0x0004804d) popup_choice_list_window_ParamLimits

0x0925,	// (0x0004804d) popup_choice_list_window

0x32b7,	// (0x0004a9df) choice_list_pane

0x3339,	// (0x0004aa61) cell_toolbar_pane_t1

0x3361,	// (0x0004aa89) toolbar_button_pane_ParamLimits

0x4426,	// (0x0004bb4e) ai_gene_pane_1_t2_ParamLimits

0x4426,	// (0x0004bb4e) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x00057015) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x00057015) ai_gene_pane_1_t

0x596b,	// (0x0004d093) scroll_sc2_left_pane_g1

0x596b,	// (0x0004d093) scroll_sc2_right_pane_g1

0x2e37,	// (0x0004a55f) bg_popup_sub_pane_cp10

0x5975,	// (0x0004d09d) list_choice_list_pane

0x598e,	// (0x0004d0b6) list_single_choice_list_pane_ParamLimits

0x598e,	// (0x0004d0b6) list_single_choice_list_pane

0x59a6,	// (0x0004d0ce) list_single_choice_list_pane_g1

0xafad,	// (0x000526d5) list_single_choice_list_pane_t1_ParamLimits

0xafad,	// (0x000526d5) list_single_choice_list_pane_t1

0x59ae,	// (0x0004d0d6) choice_list_pane_g1

0x59b6,	// (0x0004d0de) choice_list_pane_t1

0xa16a,	// (0x00051892) input_focus_pane_cp11

0xe6cc,	// (0x00055df4) title_pane_stacon_g2_ParamLimits

0xe6cc,	// (0x00055df4) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x00056dd1) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x00056dd1) title_pane_stacon_g

0x2b10,	// (0x0004a238) cursor_press_pane

0xb62a,	// (0x00052d52) popup_fep_hwr_window_ParamLimits

0xb62a,	// (0x00052d52) popup_fep_hwr_window

0x0a69,	// (0x00048191) popup_fep_vkb_window_ParamLimits

0x0a69,	// (0x00048191) popup_fep_vkb_window

0x59c4,	// (0x0004d0ec) cursor_press_pane_g1

0x0002,

0xfb17,	// (0x0005723f) fep_vkb_side_pane_g_ParamLimits

0x14f8,	// (0x00048c20) fep_hwr_candidate_pane_ParamLimits

0x14f8,	// (0x00048c20) fep_hwr_candidate_pane

0x1522,	// (0x00048c4a) fep_hwr_side_pane_ParamLimits

0x1522,	// (0x00048c4a) fep_hwr_side_pane

0x1544,	// (0x00048c6c) fep_hwr_top_pane_ParamLimits

0x1544,	// (0x00048c6c) fep_hwr_top_pane

0x155c,	// (0x00048c84) fep_hwr_write_pane_ParamLimits

0x155c,	// (0x00048c84) fep_hwr_write_pane

0xfb17,	// (0x0005723f) fep_vkb_side_pane_g

0x59cc,	// (0x0004d0f4) fep_hwr_top_pane_g1

0x59de,	// (0x0004d106) fep_hwr_top_pane_g2

0x1588,	// (0x00048cb0) fep_hwr_top_pane_g3

0x0002,

0xfaf3,	// (0x0005721b) fep_hwr_top_pane_g

0x159d,	// (0x00048cc5) fep_hwr_top_text_pane

0xe8c8,	// (0x00055ff0) fep_hwr_top_text_pane_g1

0x5a14,	// (0x0004d13c) fep_hwr_top_text_pane_t1

0x16a7,	// (0x00048dcf) fep_hwr_candidate_pane_g1

0x5c5f,	// (0x0004d387) fep_vkb_keypad_pane_g3_ParamLimits

0x5c5f,	// (0x0004d387) fep_vkb_keypad_pane_g3

0x5c8b,	// (0x0004d3b3) fep_vkb_keypad_pane_g4_ParamLimits

0x5c8b,	// (0x0004d3b3) fep_vkb_keypad_pane_g4

0x5d02,	// (0x0004d42a) fep_vkb_bottom_pane_g2_ParamLimits

0x5d02,	// (0x0004d42a) fep_vkb_bottom_pane_g2

0x0001,

0xfb1e,	// (0x00057246) fep_vkb_bottom_pane_g_ParamLimits

0xfb1e,	// (0x00057246) fep_vkb_bottom_pane_g

0x596b,	// (0x0004d093) cell_vkb_side_pane_g2

0x0001,

0xfb28,	// (0x00057250) cell_vkb_side_pane_g

0x5d8d,	// (0x0004d4b5) cell_vkb_side_pane_t1

0x5d9b,	// (0x0004d4c3) cell_vkb_side_pane_t1_copy1

0x596b,	// (0x0004d093) bg_fep_vkb_candidate_pane_g2

0x5edf,	// (0x0004d607) cell_vkb_candidate_pane_ParamLimits

0x5a22,	// (0x0004d14a) aid_size_cell_vkb_ParamLimits

0x5a22,	// (0x0004d14a) aid_size_cell_vkb

0x5edf,	// (0x0004d607) cell_vkb_candidate_pane

0x16c1,	// (0x00048de9) bg_popup_fep_shadow_pane_g1

0xd128,	// (0x00054850) fep_vkb_bottom_pane_ParamLimits

0xd128,	// (0x00054850) fep_vkb_bottom_pane

0x5af1,	// (0x0004d219) fep_vkb_candidate_pane_ParamLimits

0x5af1,	// (0x0004d219) fep_vkb_candidate_pane

0xd154,	// (0x0005487c) fep_vkb_keypad_pane_ParamLimits

0xd154,	// (0x0005487c) fep_vkb_keypad_pane

0xd17b,	// (0x000548a3) fep_vkb_side_pane_ParamLimits

0xd17b,	// (0x000548a3) fep_vkb_side_pane

0xd1b7,	// (0x000548df) fep_vkb_top_pane_ParamLimits

0xd1b7,	// (0x000548df) fep_vkb_top_pane

0x5bb8,	// (0x0004d2e0) fep_vkb_top_pane_g1_ParamLimits

0x5bb8,	// (0x0004d2e0) fep_vkb_top_pane_g1

0x5bc7,	// (0x0004d2ef) fep_vkb_top_pane_g2_ParamLimits

0x5bc7,	// (0x0004d2ef) fep_vkb_top_pane_g2

0x5bd6,	// (0x0004d2fe) fep_vkb_top_pane_g3_ParamLimits

0x5bd6,	// (0x0004d2fe) fep_vkb_top_pane_g3

0x0003,

0xfb0e,	// (0x00057236) fep_vkb_top_pane_g_ParamLimits

0xfb0e,	// (0x00057236) fep_vkb_top_pane_g

0x5bf4,	// (0x0004d31c) fep_vkb_top_text_pane_ParamLimits

0x5bf4,	// (0x0004d31c) fep_vkb_top_text_pane

0xd1f3,	// (0x0005491b) fep_vkb_side_pane_g1_ParamLimits

0xd1f3,	// (0x0005491b) fep_vkb_side_pane_g1

0x5c4e,	// (0x0004d376) grid_vkb_side_pane_ParamLimits

0x5c4e,	// (0x0004d376) grid_vkb_side_pane

0x16c9,	// (0x00048df1) bg_popup_fep_shadow_pane_g2

0x16d2,	// (0x00048dfa) bg_popup_fep_shadow_pane_g3

0x16da,	// (0x00048e02) bg_popup_fep_shadow_pane_g4

0x16e3,	// (0x00048e0b) bg_popup_fep_shadow_pane_g5

0x16ed,	// (0x00048e15) bg_popup_fep_shadow_pane_g6

0x16f5,	// (0x00048e1d) bg_popup_fep_shadow_pane_g7

0xae7a,	// (0x000525a2) bg_popup_fep_shadow_pane_g8

0x5cad,	// (0x0004d3d5) grid_vkb_keypad_number_pane_ParamLimits

0x5cad,	// (0x0004d3d5) grid_vkb_keypad_number_pane

0x5cc1,	// (0x0004d3e9) grid_vkb_keypad_pane_ParamLimits

0x5cc1,	// (0x0004d3e9) grid_vkb_keypad_pane

0x5ce7,	// (0x0004d40f) fep_vkb_bottom_pane_g1_ParamLimits

0x5ce7,	// (0x0004d40f) fep_vkb_bottom_pane_g1

0x5d10,	// (0x0004d438) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5d10,	// (0x0004d438) grid_vkb_keypad_bottom_left_pane

0x5d25,	// (0x0004d44d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5d25,	// (0x0004d44d) grid_vkb_keypad_bottom_right_pane

0x5d3a,	// (0x0004d462) fep_vkb_top_text_pane_g1

0xd23a,	// (0x00054962) fep_vkb_top_text_pane_t1

0xd24c,	// (0x00054974) cell_vkb_side_pane_ParamLimits

0xd24c,	// (0x00054974) cell_vkb_side_pane

0x596b,	// (0x0004d093) cell_vkb_side_pane_g1

0x5da9,	// (0x0004d4d1) cell_vkb_keypad_pane_ParamLimits

0x5da9,	// (0x0004d4d1) cell_vkb_keypad_pane

0x5e36,	// (0x0004d55e) cell_vkb_keypad_pane_g1

0x0008,

0xfb3b,	// (0x00057263) bg_popup_fep_shadow_pane_g

0x596b,	// (0x0004d093) cell_hwr_side_pane_g1

0x596b,	// (0x0004d093) cell_hwr_side_pane_g2

0x5e40,	// (0x0004d568) cell_vkb_keypad_pane_t1

0xd262,	// (0x0005498a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd262,	// (0x0005498a) cell_vkb_keypad_bottom_left_pane

0xd277,	// (0x0005499f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd277,	// (0x0005499f) cell_vkb_keypad_bottom_right_pane

0x596b,	// (0x0004d093) cell_vkb_keypad_bottom_left_pane_g1

0x596b,	// (0x0004d093) cell_vkb_keypad_bottom_right_pane_g1

0x5ea4,	// (0x0004d5cc) cell_vkb_keypad_number_pane_ParamLimits

0x5ea4,	// (0x0004d5cc) cell_vkb_keypad_number_pane

0x5ec3,	// (0x0004d5eb) cell_vkb_keypad_number_pane_g1

0x5ecd,	// (0x0004d5f5) cell_vkb_keypad_number_pane_g2

0x5ed6,	// (0x0004d5fe) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2d,	// (0x00057255) cell_vkb_keypad_number_pane_g

0x5e40,	// (0x0004d568) cell_vkb_keypad_number_pane_t1

0x5f00,	// (0x0004d628) fep_vkb_candidate_pane_g1

0x0001,

0xfb28,	// (0x00057250) cell_hwr_side_pane_g

0x5f19,	// (0x0004d641) cell_hwr_side_pane_t1

0x1707,	// (0x00048e2f) cell_hwr_side_pane_t1_copy1

0x5be6,	// (0x0004d30e) cell_hwr_candidate_pane_g1

0x1715,	// (0x00048e3d) cell_hwr_candidate_pane_t1

0x596b,	// (0x0004d093) cell_vkb_candidate_pane_g2

0x5f9f,	// (0x0004d6c7) cell_vkb_candidate_pane_t1

0x14bf,	// (0x00048be7) bg_popup_fep_shadow_pane_ParamLimits

0x14bf,	// (0x00048be7) bg_popup_fep_shadow_pane

0xd0ee,	// (0x00054816) bg_fep_hwr_top_pane_g4

0x59f0,	// (0x0004d118) bg_hwr_side_pane_g1_ParamLimits

0x59f0,	// (0x0004d118) bg_hwr_side_pane_g1

0xc07c,	// (0x000537a4) cell_hwr_side_pane_ParamLimits

0xc07c,	// (0x000537a4) cell_hwr_side_pane

0x1618,	// (0x00048d40) fep_hwr_write_pane_g1_ParamLimits

0x1618,	// (0x00048d40) fep_hwr_write_pane_g1

0x1625,	// (0x00048d4d) fep_hwr_write_pane_g2_ParamLimits

0x1625,	// (0x00048d4d) fep_hwr_write_pane_g2

0x1632,	// (0x00048d5a) fep_hwr_write_pane_g3_ParamLimits

0x1632,	// (0x00048d5a) fep_hwr_write_pane_g3

0xc09c,	// (0x000537c4) fep_hwr_write_pane_g4_ParamLimits

0xc09c,	// (0x000537c4) fep_hwr_write_pane_g4

0x0005,

0xfafa,	// (0x00057222) fep_hwr_write_pane_g_ParamLimits

0xfafa,	// (0x00057222) fep_hwr_write_pane_g

0xd0ee,	// (0x00054816) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd0ee,	// (0x00054816) bg_fep_hwr_candidate_pane_g2

0x1655,	// (0x00048d7d) cell_hwr_candidate_pane_ParamLimits

0x1655,	// (0x00048d7d) cell_hwr_candidate_pane

0x16a7,	// (0x00048dcf) fep_hwr_candidate_pane_g1_ParamLimits

0x5a50,	// (0x0004d178) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5a50,	// (0x0004d178) bg_popup_fep_shadow_pane_cp2

0x5be6,	// (0x0004d30e) fep_vkb_top_pane_g4_ParamLimits

0x5be6,	// (0x0004d30e) fep_vkb_top_pane_g4

0x5c2c,	// (0x0004d354) fep_vkb_side_pane_g2_ParamLimits

0x5c2c,	// (0x0004d354) fep_vkb_side_pane_g2

0x9c58,	// (0x00051380) list_setting_pane_t4_ParamLimits

0x9c58,	// (0x00051380) list_setting_pane_t4

0x9cf4,	// (0x0005141c) list_setting_number_pane_t5_ParamLimits

0x9cf4,	// (0x0005141c) list_setting_number_pane_t5

0xe8ff,	// (0x00056027) list_double_heading_pane_cp2_ParamLimits

0xe8ff,	// (0x00056027) list_double_heading_pane_cp2

0x5fad,	// (0x0004d6d5) list_double_heading_pane_g1_cp2_ParamLimits

0x5fad,	// (0x0004d6d5) list_double_heading_pane_g1_cp2

0x5fb9,	// (0x0004d6e1) list_double_heading_pane_g2_cp2_ParamLimits

0x5fb9,	// (0x0004d6e1) list_double_heading_pane_g2_cp2

0x5fcd,	// (0x0004d6f5) list_double_heading_pane_t1_cp2_ParamLimits

0x5fcd,	// (0x0004d6f5) list_double_heading_pane_t1_cp2

0x5fe3,	// (0x0004d70b) list_double_heading_pane_t2_cp2_ParamLimits

0x5fe3,	// (0x0004d70b) list_double_heading_pane_t2_cp2

0xa152,	// (0x0005187a) aid_value_unit2

0xf467,	// (0x00056b8f) popup_preview_fixed_window

0xa7d4,	// (0x00051efc) bg_popup_preview_window_pane_cp02

0x5ff5,	// (0x0004d71d) list_preview_fixed_pane

0x603b,	// (0x0004d763) list_empty_pane_fp_ParamLimits

0x603b,	// (0x0004d763) list_empty_pane_fp

0x603b,	// (0x0004d763) list_single_cale_day_pane_fp_ParamLimits

0x603b,	// (0x0004d763) list_single_cale_day_pane_fp

0x603b,	// (0x0004d763) list_single_graphic_heading_pane_fp_ParamLimits

0x603b,	// (0x0004d763) list_single_graphic_heading_pane_fp

0x603b,	// (0x0004d763) list_single_graphic_pane_fp_ParamLimits

0x603b,	// (0x0004d763) list_single_graphic_pane_fp

0x603b,	// (0x0004d763) list_single_heading_pane_fp_ParamLimits

0x603b,	// (0x0004d763) list_single_heading_pane_fp

0x603b,	// (0x0004d763) list_single_pane_fp_ParamLimits

0x603b,	// (0x0004d763) list_single_pane_fp

0x6054,	// (0x0004d77c) list_single_pane_fp_g1_ParamLimits

0x6054,	// (0x0004d77c) list_single_pane_fp_g1

0x5fad,	// (0x0004d6d5) list_single_pane_fp_g2_ParamLimits

0x5fad,	// (0x0004d6d5) list_single_pane_fp_g2

0x5fb9,	// (0x0004d6e1) list_single_pane_fp_g3_ParamLimits

0x5fb9,	// (0x0004d6e1) list_single_pane_fp_g3

0x6060,	// (0x0004d788) list_single_pane_fp_g4_ParamLimits

0x6060,	// (0x0004d788) list_single_pane_fp_g4

0x0003,

0xfb5c,	// (0x00057284) list_single_pane_fp_g_ParamLimits

0xfb5c,	// (0x00057284) list_single_pane_fp_g

0xf13a,	// (0x00056862) list_single_pane_fp_t1_ParamLimits

0xf13a,	// (0x00056862) list_single_pane_fp_t1

0xf151,	// (0x00056879) list_single_graphic_pane_fp_g1_ParamLimits

0xf151,	// (0x00056879) list_single_graphic_pane_fp_g1

0x6054,	// (0x0004d77c) list_single_graphic_pane_fp_g2_ParamLimits

0x6054,	// (0x0004d77c) list_single_graphic_pane_fp_g2

0x5fad,	// (0x0004d6d5) list_single_graphic_pane_fp_g3_ParamLimits

0x5fad,	// (0x0004d6d5) list_single_graphic_pane_fp_g3

0x5fb9,	// (0x0004d6e1) list_single_graphic_pane_fp_g4_ParamLimits

0x5fb9,	// (0x0004d6e1) list_single_graphic_pane_fp_g4

0x6060,	// (0x0004d788) list_single_graphic_pane_fp_g5_ParamLimits

0x6060,	// (0x0004d788) list_single_graphic_pane_fp_g5

0x0004,

0xfb65,	// (0x0005728d) list_single_graphic_pane_fp_g_ParamLimits

0xfb65,	// (0x0005728d) list_single_graphic_pane_fp_g

0xf15d,	// (0x00056885) list_single_graphic_pane_fp_t1_ParamLimits

0xf15d,	// (0x00056885) list_single_graphic_pane_fp_t1

0xf151,	// (0x00056879) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf151,	// (0x00056879) list_single_graphic_heading_pane_fp_g1

0x6054,	// (0x0004d77c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6054,	// (0x0004d77c) list_single_graphic_heading_pane_fp_g2

0x5fad,	// (0x0004d6d5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5fad,	// (0x0004d6d5) list_single_graphic_heading_pane_fp_g3

0x5fb9,	// (0x0004d6e1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5fb9,	// (0x0004d6e1) list_single_graphic_heading_pane_fp_g4

0x6060,	// (0x0004d788) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6060,	// (0x0004d788) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb65,	// (0x0005728d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb65,	// (0x0005728d) list_single_graphic_heading_pane_fp_g

0xf173,	// (0x0005689b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf173,	// (0x0005689b) list_single_graphic_heading_pane_fp_t1

0xf189,	// (0x000568b1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf189,	// (0x000568b1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb70,	// (0x00057298) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb70,	// (0x00057298) list_single_graphic_heading_pane_fp_t

0xf19b,	// (0x000568c3) list_single_cale_day_pane_fp_g1_ParamLimits

0xf19b,	// (0x000568c3) list_single_cale_day_pane_fp_g1

0x606c,	// (0x0004d794) list_single_cale_day_pane_fp_g2_ParamLimits

0x606c,	// (0x0004d794) list_single_cale_day_pane_fp_g2

0x1733,	// (0x00048e5b) list_single_cale_day_pane_fp_g3_ParamLimits

0x1733,	// (0x00048e5b) list_single_cale_day_pane_fp_g3

0x175b,	// (0x00048e83) list_single_cale_day_pane_fp_g4_ParamLimits

0x175b,	// (0x00048e83) list_single_cale_day_pane_fp_g4

0x177f,	// (0x00048ea7) list_single_cale_day_pane_fp_g5_ParamLimits

0x177f,	// (0x00048ea7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb75,	// (0x0005729d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb75,	// (0x0005729d) list_single_cale_day_pane_fp_g

0xf1d3,	// (0x000568fb) list_single_cale_day_pane_fp_t1_ParamLimits

0xf1d3,	// (0x000568fb) list_single_cale_day_pane_fp_t1

0xf1f9,	// (0x00056921) list_single_cale_day_pane_fp_t2_ParamLimits

0xf1f9,	// (0x00056921) list_single_cale_day_pane_fp_t2

0xf212,	// (0x0005693a) list_single_cale_day_pane_fp_t3_ParamLimits

0xf212,	// (0x0005693a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb80,	// (0x000572a8) list_single_cale_day_pane_fp_t_ParamLimits

0xfb80,	// (0x000572a8) list_single_cale_day_pane_fp_t

0x6054,	// (0x0004d77c) list_empty_pane_fp_g1_ParamLimits

0x6054,	// (0x0004d77c) list_empty_pane_fp_g1

0xf22b,	// (0x00056953) list_empty_pane_fp_t1

0xf239,	// (0x00056961) list_empty_pane_fp_t2

0x0001,

0xfb87,	// (0x000572af) list_empty_pane_fp_t

0x6054,	// (0x0004d77c) list_single_heading_pane_fp_g1_ParamLimits

0x6054,	// (0x0004d77c) list_single_heading_pane_fp_g1

0x5fad,	// (0x0004d6d5) list_single_heading_pane_fp_g2_ParamLimits

0x5fad,	// (0x0004d6d5) list_single_heading_pane_fp_g2

0x5fb9,	// (0x0004d6e1) list_single_heading_pane_fp_g3_ParamLimits

0x5fb9,	// (0x0004d6e1) list_single_heading_pane_fp_g3

0x0002,

0xfb8c,	// (0x000572b4) list_single_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x000572b4) list_single_heading_pane_fp_g

0xf247,	// (0x0005696f) list_single_heading_pane_fp_t1_ParamLimits

0xf247,	// (0x0005696f) list_single_heading_pane_fp_t1

0xf259,	// (0x00056981) list_single_heading_pane_fp_t2_ParamLimits

0xf259,	// (0x00056981) list_single_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x000572bb) list_single_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x000572bb) list_single_heading_pane_fp_t

0xe563,	// (0x00055c8b) aid_size_cell_fast

0xa754,	// (0x00051e7c) soft_indicator_pane_cp1_t1

0xe5a0,	// (0x00055cc8) cell_app_pane_cp2_ParamLimits

0xe5a0,	// (0x00055cc8) cell_app_pane_cp2

0x14e1,	// (0x00048c09) fep_hwr_candidate_drop_down_list_pane

0xd0fc,	// (0x00054824) fep_hwr_candidate_pane_g3_ParamLimits

0xd0fc,	// (0x00054824) fep_hwr_candidate_pane_g3

0xd109,	// (0x00054831) fep_hwr_candidate_pane_g4_ParamLimits

0xd109,	// (0x00054831) fep_hwr_candidate_pane_g4

0x0002,

0xfb07,	// (0x0005722f) fep_hwr_candidate_pane_g_ParamLimits

0xfb07,	// (0x0005722f) fep_hwr_candidate_pane_g

0x5ae0,	// (0x0004d208) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5ae0,	// (0x0004d208) fep_vkb_candidate_drop_down_list_pane

0x5f08,	// (0x0004d630) fep_vkb_candidate_pane_g3

0x5f10,	// (0x0004d638) fep_vkb_candidate_pane_g4

0x0002,

0xfb34,	// (0x0005725c) fep_vkb_candidate_pane_g

0x5be6,	// (0x0004d30e) cell_hwr_candidate_pane_g1_ParamLimits

0x5f27,	// (0x0004d64f) cell_hwr_candidate_pane_g3_ParamLimits

0x5f27,	// (0x0004d64f) cell_hwr_candidate_pane_g3

0x5f48,	// (0x0004d670) cell_hwr_candidate_pane_g4_ParamLimits

0x5f48,	// (0x0004d670) cell_hwr_candidate_pane_g4

0x0002,

0xfb4e,	// (0x00057276) cell_hwr_candidate_pane_g_ParamLimits

0xfb4e,	// (0x00057276) cell_hwr_candidate_pane_g

0x5f69,	// (0x0004d691) cell_vkb_candidate_pane_g3_ParamLimits

0x5f69,	// (0x0004d691) cell_vkb_candidate_pane_g3

0x5f84,	// (0x0004d6ac) cell_vkb_candidate_pane_g4_ParamLimits

0x5f84,	// (0x0004d6ac) cell_vkb_candidate_pane_g4

0x6078,	// (0x0004d7a0) cell_app_pane_cp2_g1_ParamLimits

0x6078,	// (0x0004d7a0) cell_app_pane_cp2_g1

0x6096,	// (0x0004d7be) cell_app_pane_cp2_g2_ParamLimits

0x6096,	// (0x0004d7be) cell_app_pane_cp2_g2

0x0001,

0xfb98,	// (0x000572c0) cell_app_pane_cp2_g_ParamLimits

0xfb98,	// (0x000572c0) cell_app_pane_cp2_g

0x60a2,	// (0x0004d7ca) cell_app_pane_cp2_t1_ParamLimits

0x60a2,	// (0x0004d7ca) cell_app_pane_cp2_t1

0xae02,	// (0x0005252a) grid_highlight_pane_cp1_ParamLimits

0xae02,	// (0x0005252a) grid_highlight_pane_cp1

0x17a3,	// (0x00048ecb) cell_hwr_candidate_pane_cp1_ParamLimits

0x17a3,	// (0x00048ecb) cell_hwr_candidate_pane_cp1

0x5be6,	// (0x0004d30e) fep_hwr_candidate_drop_down_list_pane_g1

0x60b4,	// (0x0004d7dc) fep_hwr_candidate_drop_down_list_pane_g2

0x60c1,	// (0x0004d7e9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x000572c5) fep_hwr_candidate_drop_down_list_pane_g

0x17c7,	// (0x00048eef) fep_hwr_candidate_drop_down_list_scroll_pane

0x17d0,	// (0x00048ef8) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x17d0,	// (0x00048ef8) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x17dd,	// (0x00048f05) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x17dd,	// (0x00048f05) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x17ea,	// (0x00048f12) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x17ea,	// (0x00048f12) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5f69,	// (0x0004d691) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5f69,	// (0x0004d691) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5f84,	// (0x0004d6ac) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5f84,	// (0x0004d6ac) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x17f7,	// (0x00048f1f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x17f7,	// (0x00048f1f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1812,	// (0x00048f3a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1812,	// (0x00048f3a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x182d,	// (0x00048f55) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x182d,	// (0x00048f55) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba4,	// (0x000572cc) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba4,	// (0x000572cc) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x60ce,	// (0x0004d7f6) cell_vkb_candidate_pane_cp1_ParamLimits

0x60ce,	// (0x0004d7f6) cell_vkb_candidate_pane_cp1

0x5be6,	// (0x0004d30e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5be6,	// (0x0004d30e) fep_vkb_candidate_drop_down_list_pane_g1

0x60b4,	// (0x0004d7dc) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x60b4,	// (0x0004d7dc) fep_vkb_candidate_drop_down_list_pane_g2

0x60c1,	// (0x0004d7e9) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x60c1,	// (0x0004d7e9) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x000572c5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9d,	// (0x000572c5) fep_vkb_candidate_drop_down_list_pane_g

0x60f4,	// (0x0004d81c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x60f4,	// (0x0004d81c) fep_vkb_candidate_drop_down_list_scroll_pane

0x6101,	// (0x0004d829) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6101,	// (0x0004d829) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x610e,	// (0x0004d836) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x610e,	// (0x0004d836) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x611a,	// (0x0004d842) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x611a,	// (0x0004d842) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5f27,	// (0x0004d64f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5f27,	// (0x0004d64f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5f48,	// (0x0004d670) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5f48,	// (0x0004d670) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6126,	// (0x0004d84e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6126,	// (0x0004d84e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6147,	// (0x0004d86f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6147,	// (0x0004d86f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6168,	// (0x0004d890) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6168,	// (0x0004d890) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb5,	// (0x000572dd) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb5,	// (0x000572dd) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa39c,	// (0x00051ac4) title_pane_g1_ParamLimits

0xa3af,	// (0x00051ad7) title_pane_g2_ParamLimits

0xf529,	// (0x00056c51) title_pane_g_ParamLimits

0xe8b8,	// (0x00055fe0) aid_call2_pane

0xe8c0,	// (0x00055fe8) aid_call_pane

0xe8c8,	// (0x00055ff0) popup_clock_analogue_window_g1

0xe8c8,	// (0x00055ff0) popup_clock_analogue_window_g2

0x03e2,	// (0x00047b0a) popup_clock_analogue_window_g3

0x03eb,	// (0x00047b13) popup_clock_analogue_window_g4

0xa174,	// (0x0005189c) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00056e00) popup_clock_analogue_window_g

0x03f3,	// (0x00047b1b) popup_clock_analogue_window_t1

0x0451,	// (0x00047b79) clock_digital_number_pane_ParamLimits

0x0451,	// (0x00047b79) clock_digital_number_pane

0x045d,	// (0x00047b85) clock_digital_number_pane_cp02_ParamLimits

0x045d,	// (0x00047b85) clock_digital_number_pane_cp02

0x0469,	// (0x00047b91) clock_digital_number_pane_cp03_ParamLimits

0x0469,	// (0x00047b91) clock_digital_number_pane_cp03

0x0475,	// (0x00047b9d) clock_digital_number_pane_cp04_ParamLimits

0x0475,	// (0x00047b9d) clock_digital_number_pane_cp04

0x0481,	// (0x00047ba9) clock_digital_separator_pane_ParamLimits

0x0481,	// (0x00047ba9) clock_digital_separator_pane

0x048d,	// (0x00047bb5) popup_clock_digital_window_t1_ParamLimits

0x048d,	// (0x00047bb5) popup_clock_digital_window_t1

0xa174,	// (0x0005189c) clock_digital_number_pane_g1

0xa174,	// (0x0005189c) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00056e0b) clock_digital_number_pane_g

0xa174,	// (0x0005189c) clock_digital_separator_pane_g1

0xa174,	// (0x0005189c) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00056e0b) clock_digital_separator_pane_g

0xbc99,	// (0x000533c1) aid_fill_nsta_ParamLimits

0xbdd1,	// (0x000534f9) indicator_nsta_pane_ParamLimits

0x3150,	// (0x0004a878) popup_clock_analogue_window

0x3150,	// (0x0004a878) popup_clock_digital_window

0xceff,	// (0x00054627) grid_indicator_nsta_pane_ParamLimits

0x53c0,	// (0x0004cae8) clock_nsta_pane_t2

0x0001,

0xfa87,	// (0x000571af) clock_nsta_pane_t

0x034b,	// (0x00047a73) aid_size_max_handle

0xb0d6,	// (0x000527fe) aid_size_min_handle

0x2b10,	// (0x0004a238) editor_scroll_pane

0x6183,	// (0x0004d8ab) ex_editor_pane

0xaf88,	// (0x000526b0) scroll_pane_cp13

0xad8d,	// (0x000524b5) scroll_pane_cp14

0xe8f7,	// (0x0005601f) scroll_pane_cp36

0xb163,	// (0x0005288b) list_single_graphic_hl_pane_cp2_ParamLimits

0xb163,	// (0x0005288b) list_single_graphic_hl_pane_cp2

0xcd8c,	// (0x000544b4) list_single_graphic_hl_pane_ParamLimits

0xcd8c,	// (0x000544b4) list_single_graphic_hl_pane

0xf26f,	// (0x00056997) aid_size_min_hl_cp1

0x618b,	// (0x0004d8b3) list_highlight_pane_cp34_ParamLimits

0x618b,	// (0x0004d8b3) list_highlight_pane_cp34

0x619c,	// (0x0004d8c4) list_single_graphic_hl_pane_g1_ParamLimits

0x619c,	// (0x0004d8c4) list_single_graphic_hl_pane_g1

0x9fb2,	// (0x000516da) list_single_graphic_hl_pane_g2_ParamLimits

0x9fb2,	// (0x000516da) list_single_graphic_hl_pane_g2

0x9fb2,	// (0x000516da) list_single_graphic_hl_pane_g3_ParamLimits

0x9fb2,	// (0x000516da) list_single_graphic_hl_pane_g3

0x18bf,	// (0x00048fe7) list_single_graphic_hl_pane_g4_ParamLimits

0x18bf,	// (0x00048fe7) list_single_graphic_hl_pane_g4

0xc0b1,	// (0x000537d9) list_single_graphic_hl_pane_g5_ParamLimits

0xc0b1,	// (0x000537d9) list_single_graphic_hl_pane_g5

0x0004,

0xfbc6,	// (0x000572ee) list_single_graphic_hl_pane_g_ParamLimits

0xfbc6,	// (0x000572ee) list_single_graphic_hl_pane_g

0x9fbe,	// (0x000516e6) list_single_graphic_hl_pane_t1_ParamLimits

0x9fbe,	// (0x000516e6) list_single_graphic_hl_pane_t1

0x61a9,	// (0x0004d8d1) aid_size_min_hl_cp2

0x61b2,	// (0x0004d8da) list_highlight_pane_cp34_cp2_ParamLimits

0x61b2,	// (0x0004d8da) list_highlight_pane_cp34_cp2

0x619c,	// (0x0004d8c4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x619c,	// (0x0004d8c4) list_single_graphic_hl_pane_g1_cp2

0x61bf,	// (0x0004d8e7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x61bf,	// (0x0004d8e7) list_single_graphic_hl_pane_g2_cp2

0x61cb,	// (0x0004d8f3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x61cb,	// (0x0004d8f3) list_single_graphic_hl_pane_g3_cp2

0x61d9,	// (0x0004d901) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x61d9,	// (0x0004d901) list_single_graphic_hl_pane_g4_cp2

0x61e5,	// (0x0004d90d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x61e5,	// (0x0004d90d) list_single_graphic_hl_pane_g5_cp2

0xb424,	// (0x00052b4c) control_pane_g4_ParamLimits

0xb424,	// (0x00052b4c) control_pane_g4

0x2e37,	// (0x0004a55f) bg_popup_sub_pane_cp10_ParamLimits

0x5975,	// (0x0004d09d) list_choice_list_pane_ParamLimits

0x5984,	// (0x0004d0ac) scroll_pane_cp23

0xa7d4,	// (0x00051efc) bg_popup_preview_window_pane_cp02_ParamLimits

0x5ff5,	// (0x0004d71d) list_preview_fixed_pane_ParamLimits

0x600b,	// (0x0004d733) list_preview_fixed_pane_cp_ParamLimits

0x600b,	// (0x0004d733) list_preview_fixed_pane_cp

0x6017,	// (0x0004d73f) popup_preview_fixed_window_g1_ParamLimits

0x6017,	// (0x0004d73f) popup_preview_fixed_window_g1

0x6023,	// (0x0004d74b) popup_preview_fixed_window_g2_ParamLimits

0x6023,	// (0x0004d74b) popup_preview_fixed_window_g2

0x0002,

0xfb55,	// (0x0005727d) popup_preview_fixed_window_g_ParamLimits

0xfb55,	// (0x0005727d) popup_preview_fixed_window_g

0x0221,	// (0x00047949) aid_navi_side_left_pane_ParamLimits

0x0236,	// (0x0004795e) aid_navi_side_right_pane_ParamLimits

0x024e,	// (0x00047976) navi_icon_pane_stacon_ParamLimits

0x0262,	// (0x0004798a) navi_navi_pane_stacon_ParamLimits

0x024e,	// (0x00047976) navi_text_pane_stacon_ParamLimits

0xa16a,	// (0x00051892) main_text_info_pane

0x620f,	// (0x0004d937) listscroll_text_info_pane

0x6217,	// (0x0004d93f) list_text_info_pane_ParamLimits

0x6217,	// (0x0004d93f) list_text_info_pane

0x6226,	// (0x0004d94e) scroll_pane_cp24_ParamLimits

0x6226,	// (0x0004d94e) scroll_pane_cp24

0xd292,	// (0x000549ba) list_text_info_pane_t1_ParamLimits

0xd292,	// (0x000549ba) list_text_info_pane_t1

0xb58e,	// (0x00052cb6) popup_fast_swap2_window_ParamLimits

0xb58e,	// (0x00052cb6) popup_fast_swap2_window

0x6269,	// (0x0004d991) aid_size_cell_fast2

0xa16a,	// (0x00051892) bg_popup_window_pane_cp17

0x37a3,	// (0x0004aecb) heading_pane_cp2

0x37ab,	// (0x0004aed3) listscroll_fast2_pane

0x6273,	// (0x0004d99b) grid_fast2_pane

0x627d,	// (0x0004d9a5) listscroll_fast2_pane_g1

0x6287,	// (0x0004d9af) listscroll_fast2_pane_g2

0x0001,

0xfbd1,	// (0x000572f9) listscroll_fast2_pane_g

0xaf88,	// (0x000526b0) scroll_pane_cp26

0x6291,	// (0x0004d9b9) cell_fast2_pane_ParamLimits

0x6291,	// (0x0004d9b9) cell_fast2_pane

0x62a8,	// (0x0004d9d0) cell_fast2_pane_g1

0x62b1,	// (0x0004d9d9) cell_fast2_pane_g2

0x62ba,	// (0x0004d9e2) cell_fast2_pane_g3

0x0002,

0xfbd6,	// (0x000572fe) cell_fast2_pane_g

0xab4a,	// (0x00052272) grid_highlight_pane_cp9

0xab5f,	// (0x00052287) main_eswt_pane_ParamLimits

0xab5f,	// (0x00052287) main_eswt_pane

0x623b,	// (0x0004d963) list_single_text_info_pane

0x62c2,	// (0x0004d9ea) eswt_ctrl_button_pane

0x62c2,	// (0x0004d9ea) eswt_ctrl_canvas_pane

0x62ca,	// (0x0004d9f2) eswt_ctrl_combo_pane

0x62c2,	// (0x0004d9ea) eswt_ctrl_default_pane

0x62c2,	// (0x0004d9ea) eswt_ctrl_label_pane

0x62d2,	// (0x0004d9fa) eswt_ctrl_wait_pane

0x62da,	// (0x0004da02) eswt_shell_pane

0xa16a,	// (0x00051892) listscroll_eswt_app_pane

0x62fa,	// (0x0004da22) popup_eswt_tasktip_window_ParamLimits

0x62fa,	// (0x0004da22) popup_eswt_tasktip_window

0x33e1,	// (0x0004ab09) bg_popup_window_pane_cp18

0x630b,	// (0x0004da33) eswt_control_pane_g1_ParamLimits

0x630b,	// (0x0004da33) eswt_control_pane_g1

0x6318,	// (0x0004da40) eswt_control_pane_g2_ParamLimits

0x6318,	// (0x0004da40) eswt_control_pane_g2

0x6325,	// (0x0004da4d) eswt_control_pane_g3_ParamLimits

0x6325,	// (0x0004da4d) eswt_control_pane_g3

0x6332,	// (0x0004da5a) eswt_control_pane_g4_ParamLimits

0x6332,	// (0x0004da5a) eswt_control_pane_g4

0x0003,

0xfbdd,	// (0x00057305) eswt_control_pane_g_ParamLimits

0xfbdd,	// (0x00057305) eswt_control_pane_g

0xae02,	// (0x0005252a) bg_button_pane_ParamLimits

0xae02,	// (0x0005252a) bg_button_pane

0xab5f,	// (0x00052287) common_borders_pane_copy2_ParamLimits

0xab5f,	// (0x00052287) common_borders_pane_copy2

0x633f,	// (0x0004da67) control_button_pane_g1_ParamLimits

0x633f,	// (0x0004da67) control_button_pane_g1

0x634b,	// (0x0004da73) control_button_pane_g2_ParamLimits

0x634b,	// (0x0004da73) control_button_pane_g2

0x6357,	// (0x0004da7f) control_button_pane_g3_ParamLimits

0x6357,	// (0x0004da7f) control_button_pane_g3

0x0002,

0xfbe6,	// (0x0005730e) control_button_pane_g_ParamLimits

0xfbe6,	// (0x0005730e) control_button_pane_g

0x636b,	// (0x0004da93) control_button_pane_t1

0x6379,	// (0x0004daa1) control_button_pane_t2

0x0001,

0xfbed,	// (0x00057315) control_button_pane_t

0x336d,	// (0x0004aa95) bg_button_pane_g1

0x3375,	// (0x0004aa9d) bg_button_pane_g2

0x337d,	// (0x0004aaa5) bg_button_pane_g3

0x3385,	// (0x0004aaad) bg_button_pane_g4

0x338d,	// (0x0004aab5) bg_button_pane_g5

0x3395,	// (0x0004aabd) bg_button_pane_g6

0x339d,	// (0x0004aac5) bg_button_pane_g7

0x33a5,	// (0x0004aacd) bg_button_pane_g8

0x33ad,	// (0x0004aad5) bg_button_pane_g9

0x0008,

0xf841,	// (0x00056f69) bg_button_pane_g

0x5930,	// (0x0004d058) common_borders_pane_ParamLimits

0x5930,	// (0x0004d058) common_borders_pane

0x630b,	// (0x0004da33) eswt_control_pane_g1_copy1_ParamLimits

0x630b,	// (0x0004da33) eswt_control_pane_g1_copy1

0x6318,	// (0x0004da40) eswt_control_pane_g2_copy1_ParamLimits

0x6318,	// (0x0004da40) eswt_control_pane_g2_copy1

0x6325,	// (0x0004da4d) eswt_control_pane_g3_copy1_ParamLimits

0x6325,	// (0x0004da4d) eswt_control_pane_g3_copy1

0x6332,	// (0x0004da5a) eswt_control_pane_g4_copy1_ParamLimits

0x6332,	// (0x0004da5a) eswt_control_pane_g4_copy1

0x596b,	// (0x0004d093) bg_eswt_ctrl_canvas_pane_g1

0x5930,	// (0x0004d058) common_borders_pane_cp2_ParamLimits

0x5930,	// (0x0004d058) common_borders_pane_cp2

0x5930,	// (0x0004d058) common_borders_pane_cp3_ParamLimits

0x5930,	// (0x0004d058) common_borders_pane_cp3

0x6387,	// (0x0004daaf) separator_horizontal_pane

0x638f,	// (0x0004dab7) separator_vertical_pane

0x630b,	// (0x0004da33) eswt_control_pane_g1_copy2_ParamLimits

0x630b,	// (0x0004da33) eswt_control_pane_g1_copy2

0x6318,	// (0x0004da40) eswt_control_pane_g2_copy2_ParamLimits

0x6318,	// (0x0004da40) eswt_control_pane_g2_copy2

0x6325,	// (0x0004da4d) eswt_control_pane_g3_copy2_ParamLimits

0x6325,	// (0x0004da4d) eswt_control_pane_g3_copy2

0x6332,	// (0x0004da5a) eswt_control_pane_g4_copy2_ParamLimits

0x6332,	// (0x0004da5a) eswt_control_pane_g4_copy2

0xa16a,	// (0x00051892) common_borders_pane_cp4

0x6398,	// (0x0004dac0) separator_horizontal_pane_g1

0x63a1,	// (0x0004dac9) separator_horizontal_pane_g2

0x63aa,	// (0x0004dad2) separator_horizontal_pane_g3

0x0002,

0xfbf2,	// (0x0005731a) separator_horizontal_pane_g

0x630b,	// (0x0004da33) eswt_control_pane_g1_copy3_ParamLimits

0x630b,	// (0x0004da33) eswt_control_pane_g1_copy3

0x6318,	// (0x0004da40) eswt_control_pane_g2_copy3_ParamLimits

0x6318,	// (0x0004da40) eswt_control_pane_g2_copy3

0x6325,	// (0x0004da4d) eswt_control_pane_g3_copy3_ParamLimits

0x6325,	// (0x0004da4d) eswt_control_pane_g3_copy3

0x6332,	// (0x0004da5a) eswt_control_pane_g4_copy3_ParamLimits

0x6332,	// (0x0004da5a) eswt_control_pane_g4_copy3

0xa16a,	// (0x00051892) common_borders_pane_cp5

0x63b3,	// (0x0004dadb) separator_vertical_pane_g1

0x63bc,	// (0x0004dae4) separator_vertical_pane_g2

0x63c5,	// (0x0004daed) separator_vertical_pane_g3

0x0002,

0xfbf9,	// (0x00057321) separator_vertical_pane_g

0x630b,	// (0x0004da33) eswt_control_pane_g1_copy4_ParamLimits

0x630b,	// (0x0004da33) eswt_control_pane_g1_copy4

0x6318,	// (0x0004da40) eswt_control_pane_g2_copy4_ParamLimits

0x6318,	// (0x0004da40) eswt_control_pane_g2_copy4

0x6325,	// (0x0004da4d) eswt_control_pane_g3_copy4_ParamLimits

0x6325,	// (0x0004da4d) eswt_control_pane_g3_copy4

0x6332,	// (0x0004da5a) eswt_control_pane_g4_copy4_ParamLimits

0x6332,	// (0x0004da5a) eswt_control_pane_g4_copy4

0xd2b4,	// (0x000549dc) eswt_ctrl_combo_button_pane

0xd2bc,	// (0x000549e4) eswt_ctrl_input_pane

0xd2c4,	// (0x000549ec) popup_choice_list_window_cp70

0xd2cc,	// (0x000549f4) eswt_ctrl_input_pane_t1

0xa16a,	// (0x00051892) input_focus_pane_cp70

0x5930,	// (0x0004d058) bg_button_pane_cp70_ParamLimits

0x5930,	// (0x0004d058) bg_button_pane_cp70

0xd2da,	// (0x00054a02) eswt_ctrl_combo_button_pane_g1

0x63fc,	// (0x0004db24) wait_bar_pane_cp70

0x33e1,	// (0x0004ab09) bg_popup_window_pane_cp70_ParamLimits

0x33e1,	// (0x0004ab09) bg_popup_window_pane_cp70

0x6404,	// (0x0004db2c) popup_eswt_tasktip_window_t1

0x641a,	// (0x0004db42) wait_bar_pane_cp71_ParamLimits

0x641a,	// (0x0004db42) wait_bar_pane_cp71

0x6426,	// (0x0004db4e) grid_eswt_app_pane

0xe760,	// (0x00055e88) scroll_pane_cp70

0xd2e2,	// (0x00054a0a) cell_eswt_app_pane_ParamLimits

0xd2e2,	// (0x00054a0a) cell_eswt_app_pane

0xd314,	// (0x00054a3c) cell_eswt_app_pane_g1_ParamLimits

0xd314,	// (0x00054a3c) cell_eswt_app_pane_g1

0xd343,	// (0x00054a6b) cell_eswt_app_pane_g2_ParamLimits

0xd343,	// (0x00054a6b) cell_eswt_app_pane_g2

0x0001,

0xfc00,	// (0x00057328) cell_eswt_app_pane_g_ParamLimits

0xfc00,	// (0x00057328) cell_eswt_app_pane_g

0xd36c,	// (0x00054a94) cell_eswt_app_pane_t1_ParamLimits

0xd36c,	// (0x00054a94) cell_eswt_app_pane_t1

0x64eb,	// (0x0004dc13) grid_highlight_pane_cp70_ParamLimits

0x64eb,	// (0x0004dc13) grid_highlight_pane_cp70

0x29d6,	// (0x0004a0fe) set_content_pane_g1

0xb3b6,	// (0x00052ade) status_small_volume_pane

0x1848,	// (0x00048f70) status_small_volume_pane_g1

0x1850,	// (0x00048f78) volume_small2_pane

0x1859,	// (0x00048f81) volume_small2_pane_g1

0x1862,	// (0x00048f8a) volume_small2_pane_g2

0x186b,	// (0x00048f93) volume_small2_pane_g3

0x1874,	// (0x00048f9c) volume_small2_pane_g4

0x187d,	// (0x00048fa5) volume_small2_pane_g5

0x1886,	// (0x00048fae) volume_small2_pane_g6

0x188f,	// (0x00048fb7) volume_small2_pane_g7

0x1898,	// (0x00048fc0) volume_small2_pane_g8

0x18a1,	// (0x00048fc9) volume_small2_pane_g9

0x18aa,	// (0x00048fd2) volume_small2_pane_g10

0x0009,

0xfc05,	// (0x0005732d) volume_small2_pane_g

0x5d3a,	// (0x0004d462) fep_vkb_top_text_pane_g1_ParamLimits

0xd23a,	// (0x00054962) fep_vkb_top_text_pane_t1_ParamLimits

0x602f,	// (0x0004d757) popup_preview_fixed_window_g3_ParamLimits

0x602f,	// (0x0004d757) popup_preview_fixed_window_g3

0xbc2c,	// (0x00053354) popup_toolbar_trans_pane

0xcbf6,	// (0x0005431e) aid_height_set_list_ParamLimits

0x474a,	// (0x0004be72) aid_size_parent_ParamLimits

0x2e37,	// (0x0004a55f) list_highlight_pane_cp2_ParamLimits

0x29d6,	// (0x0004a0fe) set_content_pane_g1_ParamLimits

0xcda0,	// (0x000544c8) list_single_image_pane_ParamLimits

0xcda0,	// (0x000544c8) list_single_image_pane

0xd39e,	// (0x00054ac6) aid_size_cell_image_ParamLimits

0xd39e,	// (0x00054ac6) aid_size_cell_image

0xd3ab,	// (0x00054ad3) grid_single_image_pane_ParamLimits

0xd3ab,	// (0x00054ad3) grid_single_image_pane

0xae10,	// (0x00052538) list_single_image_pane_g1_ParamLimits

0xae10,	// (0x00052538) list_single_image_pane_g1

0xae1c,	// (0x00052544) list_single_image_pane_g2_ParamLimits

0xae1c,	// (0x00052544) list_single_image_pane_g2

0x0001,

0xfc1a,	// (0x00057342) list_single_image_pane_g_ParamLimits

0xfc1a,	// (0x00057342) list_single_image_pane_g

0x6512,	// (0x0004dc3a) list_single_image_pane_t1_ParamLimits

0x6512,	// (0x0004dc3a) list_single_image_pane_t1

0xd3b9,	// (0x00054ae1) cell_image_list_pane_ParamLimits

0xd3b9,	// (0x00054ae1) cell_image_list_pane

0xd3cf,	// (0x00054af7) cell_image_list_pane_g1

0xd3d8,	// (0x00054b00) cell_image_list_pane_g2

0x0001,

0xfc1f,	// (0x00057347) cell_image_list_pane_g

0x6552,	// (0x0004dc7a) aid_size_cell_tb_trans_pane

0xae02,	// (0x0005252a) bg_tb_trans_pane

0x6564,	// (0x0004dc8c) grid_tb_trans_pane

0x336d,	// (0x0004aa95) bg_tb_trans_pane_g1

0x3375,	// (0x0004aa9d) bg_tb_trans_pane_g2

0x337d,	// (0x0004aaa5) bg_tb_trans_pane_g3

0x3385,	// (0x0004aaad) bg_tb_trans_pane_g4

0x338d,	// (0x0004aab5) bg_tb_trans_pane_g5

0x33a5,	// (0x0004aacd) bg_tb_trans_pane_g6

0x33ad,	// (0x0004aad5) bg_tb_trans_pane_g7

0x3395,	// (0x0004aabd) bg_tb_trans_pane_g8

0x339d,	// (0x0004aac5) bg_tb_trans_pane_g9

0x0008,

0xfc24,	// (0x0005734c) bg_tb_trans_pane_g

0x6578,	// (0x0004dca0) cell_toolbar_trans_pane_ParamLimits

0x6578,	// (0x0004dca0) cell_toolbar_trans_pane

0x596b,	// (0x0004d093) cell_toolbar_trans_pane_g1

0xcfe2,	// (0x0005470a) list_form2_midp_pane_t1

0xcff0,	// (0x00054718) list_form2_midp_pane_t2

0x0001,

0xfacd,	// (0x000571f5) list_form2_midp_pane_t

0x55bf,	// (0x0004cce7) scroll_pane_cp51_ParamLimits

0x5786,	// (0x0004ceae) form2_midp_wait_pane_g1

0x578f,	// (0x0004ceb7) form2_midp_wait_pane_g2

0x5798,	// (0x0004cec0) form2_midp_wait_pane_g3

0x0002,

0xfae2,	// (0x0005720a) form2_midp_wait_pane_g

0xa4f1,	// (0x00051c19) list_highlight_pane_cp21_ParamLimits

0x57d1,	// (0x0004cef9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x57e0,	// (0x0004cf08) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x12c3,	// (0x000489eb) list_single_2graphic_im_pane_ParamLimits

0x12c3,	// (0x000489eb) list_single_2graphic_im_pane

0xd3e1,	// (0x00054b09) list_single_2graphic_im_pane_g1_ParamLimits

0xd3e1,	// (0x00054b09) list_single_2graphic_im_pane_g1

0xd3f2,	// (0x00054b1a) list_single_2graphic_im_pane_g2_ParamLimits

0xd3f2,	// (0x00054b1a) list_single_2graphic_im_pane_g2

0xd3fe,	// (0x00054b26) list_single_2graphic_im_pane_g3_ParamLimits

0xd3fe,	// (0x00054b26) list_single_2graphic_im_pane_g3

0x0003,

0xfc37,	// (0x0005735f) list_single_2graphic_im_pane_g_ParamLimits

0xfc37,	// (0x0005735f) list_single_2graphic_im_pane_g

0xd412,	// (0x00054b3a) list_single_2graphic_im_pane_t1_ParamLimits

0xd412,	// (0x00054b3a) list_single_2graphic_im_pane_t1

0x603b,	// (0x0004d763) list_single_graphic_2heading_pane_fp_ParamLimits

0x603b,	// (0x0004d763) list_single_graphic_2heading_pane_fp

0xf151,	// (0x00056879) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf151,	// (0x00056879) list_single_graphic_2heading_pane_fp_g1

0x6054,	// (0x0004d77c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6054,	// (0x0004d77c) list_single_graphic_2heading_pane_fp_g2

0x5fad,	// (0x0004d6d5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5fad,	// (0x0004d6d5) list_single_graphic_2heading_pane_fp_g3

0x5fb9,	// (0x0004d6e1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5fb9,	// (0x0004d6e1) list_single_graphic_2heading_pane_fp_g4

0x6060,	// (0x0004d788) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6060,	// (0x0004d788) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb65,	// (0x0005728d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb65,	// (0x0005728d) list_single_graphic_2heading_pane_fp_g

0xf278,	// (0x000569a0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf278,	// (0x000569a0) list_single_graphic_2heading_pane_fp_t1

0xf189,	// (0x000568b1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf189,	// (0x000568b1) list_single_graphic_2heading_pane_fp_t2

0xf28e,	// (0x000569b6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf28e,	// (0x000569b6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc40,	// (0x00057368) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc40,	// (0x00057368) list_single_graphic_2heading_pane_fp_t

0x59fc,	// (0x0004d124) fep_hwr_write_pane_g5_ParamLimits

0x59fc,	// (0x0004d124) fep_hwr_write_pane_g5

0x5a08,	// (0x0004d130) fep_hwr_write_pane_g6_ParamLimits

0x5a08,	// (0x0004d130) fep_hwr_write_pane_g6

0x62da,	// (0x0004da02) eswt_shell_pane_ParamLimits

0x33e1,	// (0x0004ab09) bg_popup_window_pane_cp18_ParamLimits

0x4690,	// (0x0004bdb8) heading_pane_cp70

0x6404,	// (0x0004db2c) popup_eswt_tasktip_window_t1_ParamLimits

0xbcf6,	// (0x0005341e) aid_touch_tab_arrow_left

0xbd0c,	// (0x00053434) aid_touch_tab_arrow_right

0xa3d3,	// (0x00051afb) title_pane_g3_ParamLimits

0xa3d3,	// (0x00051afb) title_pane_g3

0xadc1,	// (0x000524e9) set_value_pane_g1

0xbc2c,	// (0x00053354) popup_toolbar_trans_pane_ParamLimits

0x6552,	// (0x0004dc7a) aid_size_cell_tb_trans_pane_ParamLimits

0xae02,	// (0x0005252a) bg_tb_trans_pane_ParamLimits

0x6564,	// (0x0004dc8c) grid_tb_trans_pane_ParamLimits

0xa7d4,	// (0x00051efc) cont_note_pane_ParamLimits

0xa7d4,	// (0x00051efc) cont_note_pane

0xab5f,	// (0x00052287) cont_snote2_single_text_pane_ParamLimits

0xab5f,	// (0x00052287) cont_snote2_single_text_pane

0xab5f,	// (0x00052287) cont_snote2_single_graphic_pane_ParamLimits

0xab5f,	// (0x00052287) cont_snote2_single_graphic_pane

0x39d3,	// (0x0004b0fb) cont_note_wait_pane_ParamLimits

0x39d3,	// (0x0004b0fb) cont_note_wait_pane

0x39d3,	// (0x0004b0fb) cont_note_image_pane_ParamLimits

0x39d3,	// (0x0004b0fb) cont_note_image_pane

0x660c,	// (0x0004dd34) popup_note2_window_g1_ParamLimits

0x660c,	// (0x0004dd34) popup_note2_window_g1

0x663d,	// (0x0004dd65) popup_note2_window_t1_ParamLimits

0x663d,	// (0x0004dd65) popup_note2_window_t1

0x6682,	// (0x0004ddaa) popup_note2_window_t2_ParamLimits

0x6682,	// (0x0004ddaa) popup_note2_window_t2

0x66c7,	// (0x0004ddef) popup_note2_window_t3_ParamLimits

0x66c7,	// (0x0004ddef) popup_note2_window_t3

0x670c,	// (0x0004de34) popup_note2_window_t4_ParamLimits

0x670c,	// (0x0004de34) popup_note2_window_t4

0xa858,	// (0x00051f80) popup_note2_window_t5_ParamLimits

0xa858,	// (0x00051f80) popup_note2_window_t5

0x0004,

0xfc4c,	// (0x00057374) popup_note2_window_t_ParamLimits

0xfc4c,	// (0x00057374) popup_note2_window_t

0x673b,	// (0x0004de63) popup_note2_image_window_g1_ParamLimits

0x673b,	// (0x0004de63) popup_note2_image_window_g1

0x6747,	// (0x0004de6f) popup_note2_image_window_g2_ParamLimits

0x6747,	// (0x0004de6f) popup_note2_image_window_g2

0x0001,

0xfc57,	// (0x0005737f) popup_note2_image_window_g_ParamLimits

0xfc57,	// (0x0005737f) popup_note2_image_window_g

0x6759,	// (0x0004de81) popup_note2_image_window_t1_ParamLimits

0x6759,	// (0x0004de81) popup_note2_image_window_t1

0x6771,	// (0x0004de99) popup_note2_image_window_t2_ParamLimits

0x6771,	// (0x0004de99) popup_note2_image_window_t2

0x6789,	// (0x0004deb1) popup_note2_image_window_t3_ParamLimits

0x6789,	// (0x0004deb1) popup_note2_image_window_t3

0x0002,

0xfc5c,	// (0x00057384) popup_note2_image_window_t_ParamLimits

0xfc5c,	// (0x00057384) popup_note2_image_window_t

0x39e1,	// (0x0004b109) popup_note2_wait_window_g1_ParamLimits

0x39e1,	// (0x0004b109) popup_note2_wait_window_g1

0x67a5,	// (0x0004decd) popup_note2_wait_window_g2_ParamLimits

0x67a5,	// (0x0004decd) popup_note2_wait_window_g2

0x39f9,	// (0x0004b121) popup_note2_wait_window_g3_ParamLimits

0x39f9,	// (0x0004b121) popup_note2_wait_window_g3

0x0002,

0xfc63,	// (0x0005738b) popup_note2_wait_window_g_ParamLimits

0xfc63,	// (0x0005738b) popup_note2_wait_window_g

0x67b1,	// (0x0004ded9) popup_note2_wait_window_t1_ParamLimits

0x67b1,	// (0x0004ded9) popup_note2_wait_window_t1

0x67cf,	// (0x0004def7) popup_note2_wait_window_t2_ParamLimits

0x67cf,	// (0x0004def7) popup_note2_wait_window_t2

0x67ed,	// (0x0004df15) popup_note2_wait_window_t3_ParamLimits

0x67ed,	// (0x0004df15) popup_note2_wait_window_t3

0x67ff,	// (0x0004df27) popup_note2_wait_window_t4_ParamLimits

0x67ff,	// (0x0004df27) popup_note2_wait_window_t4

0x0003,

0xfc6a,	// (0x00057392) popup_note2_wait_window_t_ParamLimits

0xfc6a,	// (0x00057392) popup_note2_wait_window_t

0x6811,	// (0x0004df39) wait_bar2_pane_ParamLimits

0x6811,	// (0x0004df39) wait_bar2_pane

0x6829,	// (0x0004df51) popup_snote2_single_text_window_g1_ParamLimits

0x6829,	// (0x0004df51) popup_snote2_single_text_window_g1

0x6851,	// (0x0004df79) popup_snote2_single_text_window_t1_ParamLimits

0x6851,	// (0x0004df79) popup_snote2_single_text_window_t1

0x689d,	// (0x0004dfc5) popup_snote2_single_text_window_t2_ParamLimits

0x689d,	// (0x0004dfc5) popup_snote2_single_text_window_t2

0x68e9,	// (0x0004e011) popup_snote2_single_text_window_t3_ParamLimits

0x68e9,	// (0x0004e011) popup_snote2_single_text_window_t3

0x692a,	// (0x0004e052) popup_snote2_single_text_window_t4_ParamLimits

0x692a,	// (0x0004e052) popup_snote2_single_text_window_t4

0x6960,	// (0x0004e088) popup_snote2_single_text_window_t5_ParamLimits

0x6960,	// (0x0004e088) popup_snote2_single_text_window_t5

0x0004,

0xfc73,	// (0x0005739b) popup_snote2_single_text_window_t_ParamLimits

0xfc73,	// (0x0005739b) popup_snote2_single_text_window_t

0x698b,	// (0x0004e0b3) popup_snote2_single_graphic_window_g1_ParamLimits

0x698b,	// (0x0004e0b3) popup_snote2_single_graphic_window_g1

0x69b3,	// (0x0004e0db) popup_snote2_single_graphic_window_g2_ParamLimits

0x69b3,	// (0x0004e0db) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7e,	// (0x000573a6) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7e,	// (0x000573a6) popup_snote2_single_graphic_window_g

0x69db,	// (0x0004e103) popup_snote2_single_graphic_window_t1_ParamLimits

0x69db,	// (0x0004e103) popup_snote2_single_graphic_window_t1

0x6a27,	// (0x0004e14f) popup_snote2_single_graphic_window_t2_ParamLimits

0x6a27,	// (0x0004e14f) popup_snote2_single_graphic_window_t2

0x68e9,	// (0x0004e011) popup_snote2_single_graphic_window_t3_ParamLimits

0x68e9,	// (0x0004e011) popup_snote2_single_graphic_window_t3

0x692a,	// (0x0004e052) popup_snote2_single_graphic_window_t4_ParamLimits

0x692a,	// (0x0004e052) popup_snote2_single_graphic_window_t4

0x6960,	// (0x0004e088) popup_snote2_single_graphic_window_t5_ParamLimits

0x6960,	// (0x0004e088) popup_snote2_single_graphic_window_t5

0x0004,

0xfc83,	// (0x000573ab) popup_snote2_single_graphic_window_t_ParamLimits

0xfc83,	// (0x000573ab) popup_snote2_single_graphic_window_t

0x546f,	// (0x0004cb97) clock_nsta_pane_cp2_t1

0x546f,	// (0x0004cb97) clock_nsta_pane_cp2_t2

0x0001,

0xfaa3,	// (0x000571cb) clock_nsta_pane_cp2_t

0xe506,	// (0x00055c2e) form_field_data_wide_pane_g1_ParamLimits

0xae10,	// (0x00052538) form_field_data_wide_pane_g2_ParamLimits

0xae10,	// (0x00052538) form_field_data_wide_pane_g2

0xae1c,	// (0x00052544) form_field_data_wide_pane_g3_ParamLimits

0xae1c,	// (0x00052544) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00056d83) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00056d83) form_field_data_wide_pane_g

0xcee9,	// (0x00054611) grid_touch_3_pane_ParamLimits

0xcee9,	// (0x00054611) grid_touch_3_pane

0xd443,	// (0x00054b6b) cell_touch_3_pane_ParamLimits

0xd443,	// (0x00054b6b) cell_touch_3_pane

0x596b,	// (0x0004d093) cell_touch_3_pane_g1

0x596b,	// (0x0004d093) cell_touch_3_pane_g2

0x0001,

0xfb28,	// (0x00057250) cell_touch_3_pane_g

0xa8b0,	// (0x00051fd8) cont_query_data_pane

0xa8b8,	// (0x00051fe0) cont_query_data_pane_cp1

0x6aa6,	// (0x0004e1ce) button_value_adjust_pane_cp7

0x6aae,	// (0x0004e1d6) query_popup_pane_cp3

0xe928,	// (0x00056050) bg_popup_sub_pane_cp22_ParamLimits

0x0501,	// (0x00047c29) navi_navi_volume_pane_cp2

0x051c,	// (0x00047c44) popup_side_volume_key_window_g2

0x052b,	// (0x00047c53) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00056e19) popup_side_volume_key_window_g

0x0548,	// (0x00047c70) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00056e20) popup_side_volume_key_window_t

0x289d,	// (0x00049fc5) popup_side_volume_key_window_ParamLimits

0x9a40,	// (0x00051168) list_double_graphic_pane_g4_ParamLimits

0x9a40,	// (0x00051168) list_double_graphic_pane_g4

0xc04f,	// (0x00053777) list_single_2heading_msg_pane_ParamLimits

0xc04f,	// (0x00053777) list_single_2heading_msg_pane

0x9fd4,	// (0x000516fc) list_single_2heading_msg_pane_g1_ParamLimits

0x9fd4,	// (0x000516fc) list_single_2heading_msg_pane_g1

0x9fe0,	// (0x00051708) list_single_2heading_msg_pane_g2_ParamLimits

0x9fe0,	// (0x00051708) list_single_2heading_msg_pane_g2

0x9ff3,	// (0x0005171b) list_single_2heading_msg_pane_g3_ParamLimits

0x9ff3,	// (0x0005171b) list_single_2heading_msg_pane_g3

0x9fff,	// (0x00051727) list_single_2heading_msg_pane_g4_ParamLimits

0x9fff,	// (0x00051727) list_single_2heading_msg_pane_g4

0x0003,

0xfc8e,	// (0x000573b6) list_single_2heading_msg_pane_g_ParamLimits

0xfc8e,	// (0x000573b6) list_single_2heading_msg_pane_g

0xa017,	// (0x0005173f) list_single_2heading_msg_pane_t1_ParamLimits

0xa017,	// (0x0005173f) list_single_2heading_msg_pane_t1

0xa03f,	// (0x00051767) list_single_2heading_msg_pane_t2_ParamLimits

0xa03f,	// (0x00051767) list_single_2heading_msg_pane_t2

0xa0aa,	// (0x000517d2) list_single_2heading_msg_pane_t3_ParamLimits

0xa0aa,	// (0x000517d2) list_single_2heading_msg_pane_t3

0xf4ec,	// (0x00056c14) list_single_2heading_msg_pane_t4_ParamLimits

0xf4ec,	// (0x00056c14) list_single_2heading_msg_pane_t4

0x0003,

0xfc97,	// (0x000573bf) list_single_2heading_msg_pane_t_ParamLimits

0xfc97,	// (0x000573bf) list_single_2heading_msg_pane_t

0xa3df,	// (0x00051b07) title_pane_g4_ParamLimits

0xa3df,	// (0x00051b07) title_pane_g4

0x0171,	// (0x00047899) title_pane_stacon_g3_ParamLimits

0x0171,	// (0x00047899) title_pane_stacon_g3

0x65cf,	// (0x0004dcf7) list_single_2graphic_im_pane_g4_ParamLimits

0x65cf,	// (0x0004dcf7) list_single_2graphic_im_pane_g4

0x4443,	// (0x0004bb6b) popup_side_volume_key_window_cp

0x4c5a,	// (0x0004c382) main_idle_act2_pane_t1

0x0f76,	// (0x0004869e) toolbar_button_pane_g10

0xad57,	// (0x0005247f) popup_toolbar_window_cp1

0x5460,	// (0x0004cb88) clock_nsta_pane_cp_t1

0x5460,	// (0x0004cb88) clock_nsta_pane_cp_t2

0x0001,

0xfa9e,	// (0x000571c6) clock_nsta_pane_cp_t

0x0501,	// (0x00047c29) navi_navi_volume_pane_cp2_ParamLimits

0x0510,	// (0x00047c38) popup_side_volume_key_window_g1_ParamLimits

0x051c,	// (0x00047c44) popup_side_volume_key_window_g2_ParamLimits

0x052b,	// (0x00047c53) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00056e19) popup_side_volume_key_window_g_ParamLimits

0x14cd,	// (0x00048bf5) fep_hwr_aid_pane

0xd0ee,	// (0x00054816) bg_fep_hwr_top_pane_g4_ParamLimits

0x59cc,	// (0x0004d0f4) fep_hwr_top_pane_g1_ParamLimits

0x59de,	// (0x0004d106) fep_hwr_top_pane_g2_ParamLimits

0x1588,	// (0x00048cb0) fep_hwr_top_pane_g3_ParamLimits

0xfaf3,	// (0x0005721b) fep_hwr_top_pane_g_ParamLimits

0x159d,	// (0x00048cc5) fep_hwr_top_text_pane_ParamLimits

0x41f8,	// (0x0004b920) aid_touch_tab_arrow_arrow_2

0x4201,	// (0x0004b929) aid_touch_tab_arrow_left_2

0x14e1,	// (0x00048c09) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1518,	// (0x00048c40) fep_hwr_prediction_pane

0x5b34,	// (0x0004d25c) fep_vkb_prediction_pane

0xd21a,	// (0x00054942) fep_vkb_side_pane_g3_ParamLimits

0xd21a,	// (0x00054942) fep_vkb_side_pane_g3

0x5be6,	// (0x0004d30e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x60b4,	// (0x0004d7dc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x60c1,	// (0x0004d7e9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9d,	// (0x000572c5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6ad5,	// (0x0004e1fd) fep_hwr_prediction_pane_g1

0x18ef,	// (0x00049017) fep_hwr_prediction_pane_g2

0x18f7,	// (0x0004901f) fep_hwr_prediction_pane_g3

0x18ff,	// (0x00049027) fep_hwr_prediction_pane_g4

0x0003,

0xfca0,	// (0x000573c8) fep_hwr_prediction_pane_g

0x6ad5,	// (0x0004e1fd) fep_vkb_prediction_pane_g1

0x6adf,	// (0x0004e207) fep_vkb_prediction_pane_g2

0x6ae7,	// (0x0004e20f) fep_vkb_prediction_pane_g3

0x6aef,	// (0x0004e217) fep_vkb_prediction_pane_g4

0x0003,

0xfca9,	// (0x000573d1) fep_vkb_prediction_pane_g

0x126b,	// (0x00048993) slider_set_pane_g3

0x127f,	// (0x000489a7) slider_set_pane_g4

0x1297,	// (0x000489bf) slider_set_pane_g5

0x126b,	// (0x00048993) slider_set_pane_g6

0x12ad,	// (0x000489d5) slider_set_pane_g7

0x48c9,	// (0x0004bff1) slider_form_pane_g3

0x48d2,	// (0x0004bffa) slider_form_pane_g4

0x48da,	// (0x0004c002) slider_form_pane_g5

0x48c9,	// (0x0004bff1) slider_form_pane_g6

0xcd5f,	// (0x00054487) slider_form_pane_g7

0x4f1e,	// (0x0004c646) slider_set_pane_vc_g3

0x4f27,	// (0x0004c64f) slider_set_pane_vc_g4

0x4f30,	// (0x0004c658) slider_set_pane_vc_g5

0x4f1e,	// (0x0004c646) slider_set_pane_vc_g6

0x4f39,	// (0x0004c661) slider_set_pane_vc_g7

0x510f,	// (0x0004c837) slider_form_pane_vc_g1

0x5118,	// (0x0004c840) slider_form_pane_vc_g2

0x5121,	// (0x0004c849) slider_form_pane_vc_g3

0x510f,	// (0x0004c837) slider_form_pane_vc_g4

0x512a,	// (0x0004c852) slider_form_pane_vc_g5

0x0004,

0xfa70,	// (0x00057198) slider_form_pane_vc_g

0xa16a,	// (0x00051892) main_idle_act3_pane

0x6af7,	// (0x0004e21f) ai3_links_pane

0xd48f,	// (0x00054bb7) popup_ai3_data_window_ParamLimits

0xd48f,	// (0x00054bb7) popup_ai3_data_window

0xa16a,	// (0x00051892) grid_ai3_links_pane

0xd4ad,	// (0x00054bd5) cell_ai3_links_pane_ParamLimits

0xd4ad,	// (0x00054bd5) cell_ai3_links_pane

0x6b38,	// (0x0004e260) bg_popup_sub_pane_cp11

0x6b45,	// (0x0004e26d) cell_ai3_links_pane_g1

0xa16a,	// (0x00051892) bg_popup_sub_pane_cp12

0x6b6a,	// (0x0004e292) heading_ai3_data_pane

0x6b72,	// (0x0004e29a) list_ai3_gene_pane

0x6b7e,	// (0x0004e2a6) popup_ai3_data_window_g1

0x6b86,	// (0x0004e2ae) heading_ai3_data_pane_g1

0x6b8e,	// (0x0004e2b6) heading_ai3_data_pane_t1

0x6b9c,	// (0x0004e2c4) list_double_ai3_gene_pane_ParamLimits

0x6b9c,	// (0x0004e2c4) list_double_ai3_gene_pane

0x6ba9,	// (0x0004e2d1) list_single_ai3_gene_pane_ParamLimits

0x6ba9,	// (0x0004e2d1) list_single_ai3_gene_pane

0x5930,	// (0x0004d058) list_highlight_pane_cp7_ParamLimits

0x5930,	// (0x0004d058) list_highlight_pane_cp7

0x6bb6,	// (0x0004e2de) list_single_a13_gene_pane_t1_ParamLimits

0x6bb6,	// (0x0004e2de) list_single_a13_gene_pane_t1

0x6bcd,	// (0x0004e2f5) list_single_ai3_gene_pane_g1

0x6bd6,	// (0x0004e2fe) list_single_ai3_gene_pane_g2

0x0001,

0xfcb2,	// (0x000573da) list_single_ai3_gene_pane_g

0x6bde,	// (0x0004e306) list_double_ai3_gene_pane_g1_ParamLimits

0x6bde,	// (0x0004e306) list_double_ai3_gene_pane_g1

0x6bea,	// (0x0004e312) list_double_ai3_gene_pane_t1_ParamLimits

0x6bea,	// (0x0004e312) list_double_ai3_gene_pane_t1

0x6c06,	// (0x0004e32e) list_double_ai3_gene_pane_t2_ParamLimits

0x6c06,	// (0x0004e32e) list_double_ai3_gene_pane_t2

0x6c1b,	// (0x0004e343) list_double_ai3_gene_pane_t3_ParamLimits

0x6c1b,	// (0x0004e343) list_double_ai3_gene_pane_t3

0x0002,

0xfcb7,	// (0x000573df) list_double_ai3_gene_pane_t_ParamLimits

0xfcb7,	// (0x000573df) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf2a4,	// (0x000569cc) aid_size_min_col_2

0xd479,	// (0x00054ba1) aid_size_min_msg_ParamLimits

0xd479,	// (0x00054ba1) aid_size_min_msg

0xd22e,	// (0x00054956) fep_vkb_top_text_pane_g2_ParamLimits

0xd22e,	// (0x00054956) fep_vkb_top_text_pane_g2

0x0001,

0xfb23,	// (0x0005724b) fep_vkb_top_text_pane_g_ParamLimits

0xfb23,	// (0x0005724b) fep_vkb_top_text_pane_g

0xa16a,	// (0x00051892) main_hc_apps_shell_pane

0x6c38,	// (0x0004e360) grid_hc_apps_pane_ParamLimits

0x6c38,	// (0x0004e360) grid_hc_apps_pane

0x6c4a,	// (0x0004e372) list_hc_apps_pane

0x6c52,	// (0x0004e37a) scroll_pane_cp37_ParamLimits

0x6c52,	// (0x0004e37a) scroll_pane_cp37

0xd4c7,	// (0x00054bef) cell_hc_apps_pane_ParamLimits

0xd4c7,	// (0x00054bef) cell_hc_apps_pane

0xd58f,	// (0x00054cb7) cell_hc_apps_pane_g1_ParamLimits

0xd58f,	// (0x00054cb7) cell_hc_apps_pane_g1

0x6d40,	// (0x0004e468) cell_hc_apps_pane_g2_ParamLimits

0x6d40,	// (0x0004e468) cell_hc_apps_pane_g2

0x6d5c,	// (0x0004e484) cell_hc_apps_pane_g3_ParamLimits

0x6d5c,	// (0x0004e484) cell_hc_apps_pane_g3

0x0002,

0xfcbe,	// (0x000573e6) cell_hc_apps_pane_g_ParamLimits

0xfcbe,	// (0x000573e6) cell_hc_apps_pane_g

0xd5bb,	// (0x00054ce3) cell_hc_apps_pane_t1_ParamLimits

0xd5bb,	// (0x00054ce3) cell_hc_apps_pane_t1

0xa7d4,	// (0x00051efc) grid_highlight_pane_cp10_ParamLimits

0xa7d4,	// (0x00051efc) grid_highlight_pane_cp10

0xd5fb,	// (0x00054d23) list_single_hc_apps_pane_ParamLimits

0xd5fb,	// (0x00054d23) list_single_hc_apps_pane

0xd635,	// (0x00054d5d) list_single_hc_apps_pane_g1

0xc0c5,	// (0x000537ed) list_single_hc_apps_pane_g2

0x0001,

0xfcc5,	// (0x000573ed) list_single_hc_apps_pane_g

0xc0de,	// (0x00053806) list_single_hc_apps_pane_g2_copy1

0xa118,	// (0x00051840) list_single_hc_apps_pane_t1

0xa4f1,	// (0x00051c19) bg_set_opt_pane_cp_ParamLimits

0xf47b,	// (0x00056ba3) setting_slider_pane_t1_ParamLimits

0xf494,	// (0x00056bbc) setting_slider_pane_t2_ParamLimits

0xf4ae,	// (0x00056bd6) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00056c61) setting_slider_pane_t_ParamLimits

0xf4c6,	// (0x00056bee) slider_set_pane_ParamLimits

0x07df,	// (0x00047f07) control_pane_g5_ParamLimits

0x07df,	// (0x00047f07) control_pane_g5

0x46fc,	// (0x0004be24) slider_set_pane_g1_ParamLimits

0x125f,	// (0x00048987) slider_set_pane_g2_ParamLimits

0x126b,	// (0x00048993) slider_set_pane_g3_ParamLimits

0x127f,	// (0x000489a7) slider_set_pane_g4_ParamLimits

0x1297,	// (0x000489bf) slider_set_pane_g5_ParamLimits

0x126b,	// (0x00048993) slider_set_pane_g6_ParamLimits

0x12ad,	// (0x000489d5) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x00057067) slider_set_pane_g_ParamLimits

0x2981,	// (0x0004a0a9) navi_icon_text_pane_ParamLimits

0xbcbd,	// (0x000533e5) aid_fill_nsta_2_ParamLimits

0xbcf6,	// (0x0005341e) aid_touch_tab_arrow_left_ParamLimits

0xbd0c,	// (0x00053434) aid_touch_tab_arrow_right_ParamLimits

0xbda7,	// (0x000534cf) clock_nsta_pane_ParamLimits

0xcadd,	// (0x00054205) navi_icon_pane_g1_ParamLimits

0xcae9,	// (0x00054211) navi_text_pane_t1_ParamLimits

0xcfc4,	// (0x000546ec) navi_icon_text_pane_g1_ParamLimits

0xcfd0,	// (0x000546f8) navi_icon_text_pane_t1_ParamLimits

0xd635,	// (0x00054d5d) list_single_hc_apps_pane_g1_ParamLimits

0xc0c5,	// (0x000537ed) list_single_hc_apps_pane_g2_ParamLimits

0xfcc5,	// (0x000573ed) list_single_hc_apps_pane_g_ParamLimits

0xc0de,	// (0x00053806) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa118,	// (0x00051840) list_single_hc_apps_pane_t1_ParamLimits

0xa2c2,	// (0x000519ea) popup_toolbar2_fixed_window_ParamLimits

0xa2c2,	// (0x000519ea) popup_toolbar2_fixed_window

0xbc22,	// (0x0005334a) popup_toolbar2_float_window

0xa16a,	// (0x00051892) bg_popup_sub_pane_cp27

0x6e16,	// (0x0004e53e) grid_toolbar2_float_pane

0xa16a,	// (0x00051892) bg_popup_sub_pane_cp26

0x6e16,	// (0x0004e53e) grid_toolbar2_fixed_pane

0xd64e,	// (0x00054d76) cell_toolbar2_fixed_pane_ParamLimits

0xd64e,	// (0x00054d76) cell_toolbar2_fixed_pane

0xd668,	// (0x00054d90) cell_toolbar2_fixed_pane_g1

0x6e37,	// (0x0004e55f) toolbar2_fixed_button_pane

0x336d,	// (0x0004aa95) toolbar2_fixed_button_pane_g1

0x3375,	// (0x0004aa9d) toolbar2_fixed_button_pane_g2

0x337d,	// (0x0004aaa5) toolbar2_fixed_button_pane_g3

0x3385,	// (0x0004aaad) toolbar2_fixed_button_pane_g4

0x338d,	// (0x0004aab5) toolbar2_fixed_button_pane_g5

0x3395,	// (0x0004aabd) toolbar2_fixed_button_pane_g6

0x339d,	// (0x0004aac5) toolbar2_fixed_button_pane_g7

0x33a5,	// (0x0004aacd) toolbar2_fixed_button_pane_g8

0x33ad,	// (0x0004aad5) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x00056f69) toolbar2_fixed_button_pane_g

0x6e3f,	// (0x0004e567) cell_toolbar2_float_pane_ParamLimits

0x6e3f,	// (0x0004e567) cell_toolbar2_float_pane

0x6e50,	// (0x0004e578) cell_toolbar2_float_pane_g1

0x6e37,	// (0x0004e55f) toolbar2_fixed_button_pane_cp

0xd116,	// (0x0005483e) fep_vkb_accented_list_pane_ParamLimits

0xd116,	// (0x0005483e) fep_vkb_accented_list_pane

0x16ff,	// (0x00048e27) bg_popup_fep_shadow_pane_g9

0x2b10,	// (0x0004a238) bg_popup_fep_shadow_pane_cp3

0xaf6f,	// (0x00052697) list_accented_list_pane

0x6e59,	// (0x0004e581) list_single_accented_list_pane_ParamLimits

0x6e59,	// (0x0004e581) list_single_accented_list_pane

0x2b10,	// (0x0004a238) list_highlight_pane_cp10

0x6e6a,	// (0x0004e592) list_single_accented_list_pane_t1

0xbb40,	// (0x00053268) popup_slider_window_ParamLimits

0xbb40,	// (0x00053268) popup_slider_window

0x6ab6,	// (0x0004e1de) aid_indentation_list_msg

0xd76b,	// (0x00054e93) bg_popup_window_pane_cp19

0x6fa6,	// (0x0004e6ce) popup_slider_window_g1

0x6fc2,	// (0x0004e6ea) popup_slider_window_g2

0x6fde,	// (0x0004e706) popup_slider_window_g3

0x0005,

0xfcca,	// (0x000573f2) popup_slider_window_g

0x7044,	// (0x0004e76c) popup_slider_window_t1

0x70b8,	// (0x0004e7e0) small_volume_slider_vertical_pane

0x596b,	// (0x0004d093) small_volume_slider_vertical_pane_g1

0x596b,	// (0x0004d093) small_volume_slider_vertical_pane_g2

0x70d4,	// (0x0004e7fc) small_volume_slider_vertical_pane_g3

0x0002,

0xfcdc,	// (0x00057404) small_volume_slider_vertical_pane_g

0xa222,	// (0x0005194a) area_side_right_pane_ParamLimits

0xa222,	// (0x0005194a) area_side_right_pane

0xc0fa,	// (0x00053822) aid_size_side_button_ParamLimits

0xc0fa,	// (0x00053822) aid_size_side_button

0xc113,	// (0x0005383b) grid_sctrl_middle_pane_ParamLimits

0xc113,	// (0x0005383b) grid_sctrl_middle_pane

0x196f,	// (0x00049097) sctrl_sk_bottom_pane

0x1980,	// (0x000490a8) sctrl_sk_top_pane

0x1992,	// (0x000490ba) aid_touch_sctrl_top

0xa7d4,	// (0x00051efc) bg_sctrl_sk_pane_ParamLimits

0xa7d4,	// (0x00051efc) bg_sctrl_sk_pane

0x199f,	// (0x000490c7) sctrl_sk_top_pane_g1

0x19ac,	// (0x000490d4) sctrl_sk_top_pane_t1

0x1992,	// (0x000490ba) aid_touch_sctrl_bottom

0xa7d4,	// (0x00051efc) bg_sctrl_sk_pane_cp_ParamLimits

0xa7d4,	// (0x00051efc) bg_sctrl_sk_pane_cp

0x19c7,	// (0x000490ef) sctrl_sk_bottom_pane_g1

0x19ac,	// (0x000490d4) sctrl_sk_bottom_pane_t1

0xc12d,	// (0x00053855) cell_sctrl_middle_pane_ParamLimits

0xc12d,	// (0x00053855) cell_sctrl_middle_pane

0xc140,	// (0x00053868) aid_touch_sctrl_middle_ParamLimits

0xc140,	// (0x00053868) aid_touch_sctrl_middle

0xc14d,	// (0x00053875) bg_sctrl_middle_pane_ParamLimits

0xc14d,	// (0x00053875) bg_sctrl_middle_pane

0x715f,	// (0x0004e887) cell_sctrl_middle_pane_g1_ParamLimits

0x715f,	// (0x0004e887) cell_sctrl_middle_pane_g1

0xc15b,	// (0x00053883) cell_sctrl_middle_pane_g2_ParamLimits

0xc15b,	// (0x00053883) cell_sctrl_middle_pane_g2

0x0001,

0xfce8,	// (0x00057410) cell_sctrl_middle_pane_g_ParamLimits

0xfce8,	// (0x00057410) cell_sctrl_middle_pane_g

0x336d,	// (0x0004aa95) bg_sctrl_middle_pane_g1

0x3375,	// (0x0004aa9d) bg_sctrl_middle_pane_g2

0x337d,	// (0x0004aaa5) bg_sctrl_middle_pane_g3

0x3385,	// (0x0004aaad) bg_sctrl_middle_pane_g4

0x338d,	// (0x0004aab5) bg_sctrl_middle_pane_g5

0x3395,	// (0x0004aabd) bg_sctrl_middle_pane_g6

0x339d,	// (0x0004aac5) bg_sctrl_middle_pane_g7

0x33a5,	// (0x0004aacd) bg_sctrl_middle_pane_g8

0x0007,

0xfced,	// (0x00057415) bg_sctrl_middle_pane_g

0x33ad,	// (0x0004aad5) bg_sctrl_middle_pane_g8_copy1

0x336d,	// (0x0004aa95) bg_sctrl_sk_pane_g1

0x3375,	// (0x0004aa9d) bg_sctrl_sk_pane_g2

0x337d,	// (0x0004aaa5) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x00056f69) bg_sctrl_sk_pane_g

0xad1d,	// (0x00052445) aid_size_touch_scroll_bar

0x3385,	// (0x0004aaad) bg_sctrl_sk_pane_g4

0x338d,	// (0x0004aab5) bg_sctrl_sk_pane_g5

0x3395,	// (0x0004aabd) bg_sctrl_sk_pane_g6

0x339d,	// (0x0004aac5) bg_sctrl_sk_pane_g7

0x33a5,	// (0x0004aacd) bg_sctrl_sk_pane_g8

0x33ad,	// (0x0004aad5) bg_sctrl_sk_pane_g9

0x09ab,	// (0x000480d3) popup_fep_china_hwr2_fs_candidate_window

0xb5f2,	// (0x00052d1a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb5f2,	// (0x00052d1a) popup_fep_china_hwr2_fs_control_window

0x5be6,	// (0x0004d30e) sctrl_sk_top_pane_g2

0x0001,

0xfce3,	// (0x0005740b) sctrl_sk_top_pane_g

0xd823,	// (0x00054f4b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd823,	// (0x00054f4b) aid_fep_china_hwr2_fs_cell

0xd839,	// (0x00054f61) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd839,	// (0x00054f61) bg_popup_fep_shadow_pane_cp4

0xd850,	// (0x00054f78) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd850,	// (0x00054f78) bg_popup_fep_shadow_pane_cp5

0xd862,	// (0x00054f8a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd862,	// (0x00054f8a) popup_fep_china_hwr2_fs_control_bar_grid

0xd876,	// (0x00054f9e) popup_fep_china_hwr2_fs_control_funtion_grid

0x7133,	// (0x0004e85b) aid_fep_china_hwr2_fs_candi_cell

0xa16a,	// (0x00051892) bg_popup_fep_shadow_pane_cp6

0x713d,	// (0x0004e865) popup_fep_china_hwr2_fs_candidate_grid

0xd87e,	// (0x00054fa6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd87e,	// (0x00054fa6) cell_fep_china_hwr2_fs_funtion_grid

0x596b,	// (0x0004d093) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x715f,	// (0x0004e887) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x715f,	// (0x0004e887) cell_fep_china_hwr2_fs_funtion_grid_g1

0x716d,	// (0x0004e895) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x716d,	// (0x0004e895) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfe,	// (0x00057426) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfe,	// (0x00057426) cell_fep_china_hwr2_fs_funtion_grid_g

0xd896,	// (0x00054fbe) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd896,	// (0x00054fbe) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8ab,	// (0x00054fd3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8ab,	// (0x00054fd3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd03,	// (0x0005742b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd03,	// (0x0005742b) cell_fep_china_hwr2_fs_funtion_grid_t

0x71b4,	// (0x0004e8dc) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x71bc,	// (0x0004e8e4) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x71c4,	// (0x0004e8ec) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd08,	// (0x00057430) popup_fep_china_hwr2_fs_control_bar_grid_g

0x71cc,	// (0x0004e8f4) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x71cc,	// (0x0004e8f4) cell_fep_china_hwr2_fs_candidate_grid

0x71eb,	// (0x0004e913) popup_fep_china_hwr2_fs_candidate_grid_g20

0x71f3,	// (0x0004e91b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x596b,	// (0x0004d093) cell_fep_china_hwr2_fs_candidate_grid_g1

0x596b,	// (0x0004d093) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb28,	// (0x00057250) cell_fep_china_hwr2_fs_candidate_grid_g

0x71fb,	// (0x0004e923) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2f55,	// (0x0004a67d) clock_nsta_pane_cp_24_ParamLimits

0x2f55,	// (0x0004a67d) clock_nsta_pane_cp_24

0x2fd5,	// (0x0004a6fd) indicator_nsta_pane_cp_24_ParamLimits

0x2fd5,	// (0x0004a6fd) indicator_nsta_pane_cp_24

0x4056,	// (0x0004b77e) heading_pane_g1

0x0001,

0xf8a6,	// (0x00056fce) heading_pane_g

0x4aa1,	// (0x0004c1c9) grid_sct_catagory_button_pane

0x4ad3,	// (0x0004c1fb) scroll_pane_cp5_ParamLimits

0x55cb,	// (0x0004ccf3) button_value_adjust_pane_cp5_ParamLimits

0x55cb,	// (0x0004ccf3) button_value_adjust_pane_cp5

0x56b0,	// (0x0004cdd8) form2_midp_time_pane_ParamLimits

0x7209,	// (0x0004e931) cell_sct_catagory_button_pane_ParamLimits

0x7209,	// (0x0004e931) cell_sct_catagory_button_pane

0x5930,	// (0x0004d058) bg_button_pane_cp01_ParamLimits

0x5930,	// (0x0004d058) bg_button_pane_cp01

0x596b,	// (0x0004d093) cell_sct_catagory_button_pane_g1

0xbbbf,	// (0x000532e7) popup_tb_extension_window

0xd8c7,	// (0x00054fef) aid_size_cell_ext_ParamLimits

0xd8c7,	// (0x00054fef) aid_size_cell_ext

0xab5f,	// (0x00052287) bg_tb_trans_pane_cp1_ParamLimits

0xab5f,	// (0x00052287) bg_tb_trans_pane_cp1

0xd8ed,	// (0x00055015) grid_tb_ext_pane_ParamLimits

0xd8ed,	// (0x00055015) grid_tb_ext_pane

0xd92a,	// (0x00055052) cell_tb_ext_pane_ParamLimits

0xd92a,	// (0x00055052) cell_tb_ext_pane

0xd952,	// (0x0005507a) cell_tb_ext_pane_g1_ParamLimits

0xd952,	// (0x0005507a) cell_tb_ext_pane_g1

0x729d,	// (0x0004e9c5) cell_tb_ext_pane_t1

0xa7d4,	// (0x00051efc) list_highlight_pane_cp11_ParamLimits

0xa7d4,	// (0x00051efc) list_highlight_pane_cp11

0xa2d7,	// (0x000519ff) popup_uni_indicator_window_ParamLimits

0xa2d7,	// (0x000519ff) popup_uni_indicator_window

0xae02,	// (0x0005252a) bg_popup_sub_pane_cp14

0x72b8,	// (0x0004e9e0) list_uniindi_pane

0x72c4,	// (0x0004e9ec) uniindi_top_pane

0xa7d4,	// (0x00051efc) bg_uniindi_top_pane

0x72e5,	// (0x0004ea0d) uniindi_top_pane_g1

0x72fb,	// (0x0004ea23) uniindi_top_pane_g2

0x0003,

0xfd0f,	// (0x00057437) uniindi_top_pane_g

0x7325,	// (0x0004ea4d) uniindi_top_pane_t1

0x7351,	// (0x0004ea79) list_single_uniindi_pane_ParamLimits

0x7351,	// (0x0004ea79) list_single_uniindi_pane

0x596b,	// (0x0004d093) bg_uniindi_top_pane_g1

0x7364,	// (0x0004ea8c) list_single_uniindi_pane_g1

0x7377,	// (0x0004ea9f) list_single_uniindi_pane_t1

0xa16a,	// (0x00051892) control_bg_pane

0x739c,	// (0x0004eac4) bg_sctrl_sk_pane_cp1

0x73a5,	// (0x0004eacd) bg_sctrl_sk_pane_cp2

0x73ae,	// (0x0004ead6) control_bg_pane_g1

0x73b7,	// (0x0004eadf) control_bg_pane_g2

0x0001,

0xfd18,	// (0x00057440) control_bg_pane_g

0x5403,	// (0x0004cb2b) cell_indicator_nsta_pane_g1_ParamLimits

0xcf26,	// (0x0005464e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8c,	// (0x000571b4) cell_indicator_nsta_pane_g_ParamLimits

0xf127,	// (0x0005684f) form2_midp_time_pane_t1_ParamLimits

0x14bf,	// (0x00048be7) main_idle_act4_pane_ParamLimits

0x14bf,	// (0x00048be7) main_idle_act4_pane

0xbbbf,	// (0x000532e7) popup_tb_extension_window_ParamLimits

0xd912,	// (0x0005503a) tb_ext_find_pane_ParamLimits

0xd912,	// (0x0005503a) tb_ext_find_pane

0x73c0,	// (0x0004eae8) ai_gene_pane_1_cp1

0x2c5a,	// (0x0004a382) ai_gene_pane_2_cp1

0x73c8,	// (0x0004eaf0) list_single_idle_plugin_calendar_pane

0x73d1,	// (0x0004eaf9) list_single_idle_plugin_notification_pane

0x73da,	// (0x0004eb02) list_single_idle_plugin_player_pane

0xd96f,	// (0x00055097) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd96f,	// (0x00055097) list_single_idle_plugin_shortcut_pane

0xd997,	// (0x000550bf) main_idle_act4_pane_t1

0xd9af,	// (0x000550d7) main_idle_act4_pane_t2

0x0001,

0xfd1d,	// (0x00057445) main_idle_act4_pane_t

0xd9c7,	// (0x000550ef) middle_sk_idle_act4_pane_ParamLimits

0xd9c7,	// (0x000550ef) middle_sk_idle_act4_pane

0xd9e3,	// (0x0005510b) popup_clock_digital_analogue_window_cp2

0xda0a,	// (0x00055132) shortcut_wheel_idle_act4_pane_ParamLimits

0xda0a,	// (0x00055132) shortcut_wheel_idle_act4_pane

0x596b,	// (0x0004d093) shortcut_wheel_idle_act4_pane_g1

0x596b,	// (0x0004d093) shortcut_wheel_idle_act4_pane_g2

0x596b,	// (0x0004d093) shortcut_wheel_idle_act4_pane_g3

0x596b,	// (0x0004d093) shortcut_wheel_idle_act4_pane_g4

0x596b,	// (0x0004d093) shortcut_wheel_idle_act4_pane_g5

0x746d,	// (0x0004eb95) shortcut_wheel_idle_act4_pane_g6

0x7475,	// (0x0004eb9d) shortcut_wheel_idle_act4_pane_g7

0x747d,	// (0x0004eba5) shortcut_wheel_idle_act4_pane_g8

0x7485,	// (0x0004ebad) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd22,	// (0x0005744a) shortcut_wheel_idle_act4_pane_g

0xd0ee,	// (0x00054816) middle_sk_idle_act4_pane_g1_ParamLimits

0xd0ee,	// (0x00054816) middle_sk_idle_act4_pane_g1

0xda87,	// (0x000551af) middle_sk_idle_act4_pane_g2_ParamLimits

0xda87,	// (0x000551af) middle_sk_idle_act4_pane_g2

0x0001,

0xfd45,	// (0x0005746d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd45,	// (0x0005746d) middle_sk_idle_act4_pane_g

0xda9f,	// (0x000551c7) middle_sk_idle_act4_pane_t1_ParamLimits

0xda9f,	// (0x000551c7) middle_sk_idle_act4_pane_t1

0xdace,	// (0x000551f6) grid_ai_shortcut_pane_ParamLimits

0xdace,	// (0x000551f6) grid_ai_shortcut_pane

0xdaeb,	// (0x00055213) list_highlight_pane_cp16_ParamLimits

0xdaeb,	// (0x00055213) list_highlight_pane_cp16

0xdaf8,	// (0x00055220) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdaf8,	// (0x00055220) list_single_idle_plugin_shortcut_pane_g1

0xdb04,	// (0x0005522c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb04,	// (0x0005522c) list_single_idle_plugin_shortcut_pane_g2

0xdb22,	// (0x0005524a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdb22,	// (0x0005524a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4a,	// (0x00057472) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4a,	// (0x00057472) list_single_idle_plugin_shortcut_pane_g

0xdb37,	// (0x0005525f) cell_ai_shortcut_pane_ParamLimits

0xdb37,	// (0x0005525f) cell_ai_shortcut_pane

0xdb4d,	// (0x00055275) cell_ai_shortcut_pane_g1_ParamLimits

0xdb4d,	// (0x00055275) cell_ai_shortcut_pane_g1

0x73c0,	// (0x0004eae8) ai_gene_pane_1_cp2

0x75b6,	// (0x0004ecde) ai_gene_pane_2_cp2

0x75be,	// (0x0004ece6) list_highlight_pane_cp15

0x75c7,	// (0x0004ecef) list_single_idle_plugin_calendar_pane_g1

0x75be,	// (0x0004ece6) list_highlight_pane_cp17

0x75cf,	// (0x0004ecf7) list_single_idle_plugin_calendar_pane_g1_copy1

0x75d7,	// (0x0004ecff) list_single_idle_plugin_player_pane_g1

0x4d08,	// (0x0004c430) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd51,	// (0x00057479) list_single_idle_plugin_player_pane_g

0x75df,	// (0x0004ed07) list_single_idle_plugin_player_pane_t1

0x75ed,	// (0x0004ed15) list_single_idle_plugin_player_pane_t2

0x75fb,	// (0x0004ed23) list_single_idle_plugin_player_pane_t3

0x7609,	// (0x0004ed31) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd56,	// (0x0005747e) list_single_idle_plugin_player_pane_t

0x7617,	// (0x0004ed3f) wait_bar_pane_cp15

0x761f,	// (0x0004ed47) grid_ai_notification_pane

0x4d08,	// (0x0004c430) list_single_idle_plugin_notification_pane_g1

0xdb6f,	// (0x00055297) cell_ai_notification_pane_ParamLimits

0xdb6f,	// (0x00055297) cell_ai_notification_pane

0x7635,	// (0x0004ed5d) cell_ai_notification_pane_g1

0x763d,	// (0x0004ed65) cell_ai_notification_pane_t1

0xdb7c,	// (0x000552a4) tb_ext_find_button_pane

0xdb84,	// (0x000552ac) tb_ext_find_pane_g1

0xdb8c,	// (0x000552b4) tb_ext_find_pane_t1

0xe8c8,	// (0x00055ff0) tb_ext_find_button_pane_g1

0x7669,	// (0x0004ed91) tb_ext_find_button_pane_g2

0x0001,

0xfd5f,	// (0x00057487) tb_ext_find_button_pane_g

0xd997,	// (0x000550bf) main_idle_act4_pane_t1_ParamLimits

0xd9af,	// (0x000550d7) main_idle_act4_pane_t2_ParamLimits

0xfd1d,	// (0x00057445) main_idle_act4_pane_t_ParamLimits

0xd9e3,	// (0x0005510b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd9fa,	// (0x00055122) sat_plugin_idle_act4_pane_ParamLimits

0xd9fa,	// (0x00055122) sat_plugin_idle_act4_pane

0xdb9a,	// (0x000552c2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdb9a,	// (0x000552c2) sat_plugin_idle_act4_pane_t1

0xdbb2,	// (0x000552da) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdbb2,	// (0x000552da) sat_plugin_idle_act4_pane_t2

0xdbca,	// (0x000552f2) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdbca,	// (0x000552f2) sat_plugin_idle_act4_pane_t3

0xdbe2,	// (0x0005530a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdbe2,	// (0x0005530a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd64,	// (0x0005748c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd64,	// (0x0005748c) sat_plugin_idle_act4_pane_t

0xf41d,	// (0x00056b45) popup_battery_window_ParamLimits

0xf41d,	// (0x00056b45) popup_battery_window

0xa7d4,	// (0x00051efc) bg_popup_sub_pane_cp25_ParamLimits

0xa7d4,	// (0x00051efc) bg_popup_sub_pane_cp25

0x76be,	// (0x0004ede6) popup_battery_window_g1_ParamLimits

0x76be,	// (0x0004ede6) popup_battery_window_g1

0x76ca,	// (0x0004edf2) popup_battery_window_t1_ParamLimits

0x76ca,	// (0x0004edf2) popup_battery_window_t1

0x76dc,	// (0x0004ee04) popup_battery_window_t2_ParamLimits

0x76dc,	// (0x0004ee04) popup_battery_window_t2

0x0001,

0xfd6d,	// (0x00057495) popup_battery_window_t_ParamLimits

0xfd6d,	// (0x00057495) popup_battery_window_t

0xb277,	// (0x0005299f) midp_canvas_pane_ParamLimits

0xb2d3,	// (0x000529fb) midp_keypad_pane_ParamLimits

0xb2d3,	// (0x000529fb) midp_keypad_pane

0x2e37,	// (0x0004a55f) main_midp_pane_ParamLimits

0x547e,	// (0x0004cba6) signal_pane_g2_cp_ParamLimits

0xdbfa,	// (0x00055322) aid_size_cell_midp_keypad_ParamLimits

0xdbfa,	// (0x00055322) aid_size_cell_midp_keypad

0xdc18,	// (0x00055340) midp_keyp_game_grid_pane_ParamLimits

0xdc18,	// (0x00055340) midp_keyp_game_grid_pane

0xdc3f,	// (0x00055367) midp_keyp_rocker_pane_ParamLimits

0xdc3f,	// (0x00055367) midp_keyp_rocker_pane

0xdc8e,	// (0x000553b6) midp_keyp_sk_left_pane_ParamLimits

0xdc8e,	// (0x000553b6) midp_keyp_sk_left_pane

0xdce4,	// (0x0005540c) midp_keyp_sk_right_pane_ParamLimits

0xdce4,	// (0x0005540c) midp_keyp_sk_right_pane

0xa16a,	// (0x00051892) bg_button_pane_cp03

0xdd3a,	// (0x00055462) midp_keyp_sk_left_pane_g1

0xa16a,	// (0x00051892) bg_button_pane_cp04

0xdd3a,	// (0x00055462) midp_keyp_sk_right_pane_g1

0x596b,	// (0x0004d093) midp_keyp_rocker_pane_g1

0xdd42,	// (0x0005546a) keyp_game_cell_pane_ParamLimits

0xdd42,	// (0x0005546a) keyp_game_cell_pane

0xa16a,	// (0x00051892) bg_button_pane_cp02

0xdd68,	// (0x00055490) keyp_game_cell_pane_g1

0xa26e,	// (0x00051996) popup_fep_vkb2_window_ParamLimits

0xa26e,	// (0x00051996) popup_fep_vkb2_window

0xc167,	// (0x0005388f) aid_size_cell_vkb2_ParamLimits

0xc167,	// (0x0005388f) aid_size_cell_vkb2

0xc193,	// (0x000538bb) popup_fep_vkb2_window_g1_ParamLimits

0xc193,	// (0x000538bb) popup_fep_vkb2_window_g1

0xc1e3,	// (0x0005390b) vkb2_area_bottom_pane_ParamLimits

0xc1e3,	// (0x0005390b) vkb2_area_bottom_pane

0xc23f,	// (0x00053967) vkb2_area_keypad_pane_ParamLimits

0xc23f,	// (0x00053967) vkb2_area_keypad_pane

0xc28d,	// (0x000539b5) vkb2_area_top_pane_ParamLimits

0xc28d,	// (0x000539b5) vkb2_area_top_pane

0xc31a,	// (0x00053a42) vkb2_top_entry_pane_ParamLimits

0xc31a,	// (0x00053a42) vkb2_top_entry_pane

0xc347,	// (0x00053a6f) vkb2_top_grid_left_pane_ParamLimits

0xc347,	// (0x00053a6f) vkb2_top_grid_left_pane

0xc368,	// (0x00053a90) vkb2_top_grid_right_pane_ParamLimits

0xc368,	// (0x00053a90) vkb2_top_grid_right_pane

0x1c33,	// (0x0004935b) vkb2_cell_keypad_pane_ParamLimits

0x1c33,	// (0x0004935b) vkb2_cell_keypad_pane

0xc3b0,	// (0x00053ad8) vkb2_area_bottom_grid_pane_ParamLimits

0xc3b0,	// (0x00053ad8) vkb2_area_bottom_grid_pane

0xc3da,	// (0x00053b02) vkb2_area_bottom_pane_g1_ParamLimits

0xc3da,	// (0x00053b02) vkb2_area_bottom_pane_g1

0xc400,	// (0x00053b28) vkb2_area_bottom_pane_g2_ParamLimits

0xc400,	// (0x00053b28) vkb2_area_bottom_pane_g2

0xc431,	// (0x00053b59) vkb2_area_bottom_pane_g3_ParamLimits

0xc431,	// (0x00053b59) vkb2_area_bottom_pane_g3

0x0002,

0xfd72,	// (0x0005749a) vkb2_area_bottom_pane_g_ParamLimits

0xfd72,	// (0x0005749a) vkb2_area_bottom_pane_g

0x1ddd,	// (0x00049505) vkb2_top_cell_left_pane_ParamLimits

0x1ddd,	// (0x00049505) vkb2_top_cell_left_pane

0xdd71,	// (0x00055499) vkb2_top_entry_pane_g1_ParamLimits

0xdd71,	// (0x00055499) vkb2_top_entry_pane_g1

0xdd7f,	// (0x000554a7) vkb2_top_entry_pane_t1_ParamLimits

0xdd7f,	// (0x000554a7) vkb2_top_entry_pane_t1

0x7886,	// (0x0004efae) vkb2_top_entry_pane_t2_ParamLimits

0x7886,	// (0x0004efae) vkb2_top_entry_pane_t2

0x78b8,	// (0x0004efe0) vkb2_top_entry_pane_t3_ParamLimits

0x78b8,	// (0x0004efe0) vkb2_top_entry_pane_t3

0x0002,

0xfd79,	// (0x000574a1) vkb2_top_entry_pane_t_ParamLimits

0xfd79,	// (0x000574a1) vkb2_top_entry_pane_t

0xc49b,	// (0x00053bc3) vkb2_top_grid_right_pane_g1_ParamLimits

0xc49b,	// (0x00053bc3) vkb2_top_grid_right_pane_g1

0x1e40,	// (0x00049568) vkb2_top_grid_right_pane_g2_ParamLimits

0x1e40,	// (0x00049568) vkb2_top_grid_right_pane_g2

0x1e58,	// (0x00049580) vkb2_top_grid_right_pane_g3_ParamLimits

0x1e58,	// (0x00049580) vkb2_top_grid_right_pane_g3

0xc4b1,	// (0x00053bd9) vkb2_top_grid_right_pane_g4_ParamLimits

0xc4b1,	// (0x00053bd9) vkb2_top_grid_right_pane_g4

0x0003,

0xfd80,	// (0x000574a8) vkb2_top_grid_right_pane_g_ParamLimits

0xfd80,	// (0x000574a8) vkb2_top_grid_right_pane_g

0x1e86,	// (0x000495ae) vkb2_top_cell_left_pane_g1

0x1e9d,	// (0x000495c5) vkb2_cell_keypad_pane_g1_ParamLimits

0x1e9d,	// (0x000495c5) vkb2_cell_keypad_pane_g1

0x78dc,	// (0x0004f004) vkb2_cell_keypad_pane_t1_ParamLimits

0x78dc,	// (0x0004f004) vkb2_cell_keypad_pane_t1

0x1eab,	// (0x000495d3) vkb2_cell_bottom_grid_pane_ParamLimits

0x1eab,	// (0x000495d3) vkb2_cell_bottom_grid_pane

0x1ee4,	// (0x0004960c) vkb2_cell_bottom_grid_pane_g1

0xda2b,	// (0x00055153) aid_call2_pane_cp02

0xda33,	// (0x0005515b) aid_call_pane_cp02

0xda3b,	// (0x00055163) clock_digital_number_pane_cp10

0xda43,	// (0x0005516b) clock_digital_number_pane_cp11

0xda4b,	// (0x00055173) clock_digital_number_pane_cp12

0xda53,	// (0x0005517b) clock_digital_number_pane_cp13

0xda5b,	// (0x00055183) clock_digital_separator_pane_cp10

0xe8c8,	// (0x00055ff0) popup_clock_digital_analogue_window_cp2_g1

0xe8c8,	// (0x00055ff0) popup_clock_digital_analogue_window_cp2_g2

0xda63,	// (0x0005518b) popup_clock_digital_analogue_window_cp2_g3

0xe8c8,	// (0x00055ff0) popup_clock_digital_analogue_window_cp2_g4

0xda63,	// (0x0005518b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd35,	// (0x0005745d) popup_clock_digital_analogue_window_cp2_g

0xda6b,	// (0x00055193) popup_clock_digital_analogue_window_cp2_t1

0xda79,	// (0x000551a1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd40,	// (0x00057468) popup_clock_digital_analogue_window_cp2_t

0x596b,	// (0x0004d093) clock_digital_number_pane_cp10_g1

0x596b,	// (0x0004d093) clock_digital_number_pane_cp10_g2

0x0001,

0xfb28,	// (0x00057250) clock_digital_number_pane_cp10_g

0x596b,	// (0x0004d093) clock_digital_separator_pane_cp10_g1

0x596b,	// (0x0004d093) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb28,	// (0x00057250) clock_digital_separator_pane_cp10_g

0x7307,	// (0x0004ea2f) uniindi_top_pane_g3

0x7318,	// (0x0004ea40) uniindi_top_pane_g4

0x1cbe,	// (0x000493e6) vkb2_row_keypad_pane_ParamLimits

0x1cbe,	// (0x000493e6) vkb2_row_keypad_pane

0x1f00,	// (0x00049628) vkb2_cell_t_keypad_pane_ParamLimits

0x1f00,	// (0x00049628) vkb2_cell_t_keypad_pane

0x1f10,	// (0x00049638) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1f10,	// (0x00049638) vkb2_cell_t_keypad_pane_cp08

0x1f25,	// (0x0004964d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1f25,	// (0x0004964d) vkb2_cell_t_keypad_pane_cp09

0x1f39,	// (0x00049661) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f39,	// (0x00049661) vkb2_cell_t_keypad_pane_cp01

0x1f4a,	// (0x00049672) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1f4a,	// (0x00049672) vkb2_cell_t_keypad_pane_cp02

0x1f5b,	// (0x00049683) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1f5b,	// (0x00049683) vkb2_cell_t_keypad_pane_cp03

0x1f6c,	// (0x00049694) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1f6c,	// (0x00049694) vkb2_cell_t_keypad_pane_cp04

0x1f7d,	// (0x000496a5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1f7d,	// (0x000496a5) vkb2_cell_t_keypad_pane_cp05

0x1f8e,	// (0x000496b6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1f8e,	// (0x000496b6) vkb2_cell_t_keypad_pane_cp06

0x1fa1,	// (0x000496c9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1fa1,	// (0x000496c9) vkb2_cell_t_keypad_pane_cp07

0x1fb6,	// (0x000496de) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1fb6,	// (0x000496de) vkb2_cell_t_keypad_pane_cp10

0x5be6,	// (0x0004d30e) vkb2_cell_t_keypad_pane_g1

0x78f3,	// (0x0004f01b) vkb2_cell_t_keypad_pane_t1

0xa16a,	// (0x00051892) popup_grid_graphic2_window

0xddb8,	// (0x000554e0) aid_size_cell_graphic2_ParamLimits

0xddb8,	// (0x000554e0) aid_size_cell_graphic2

0xddf6,	// (0x0005551e) bg_popup_window_pane_cp21_ParamLimits

0xddf6,	// (0x0005551e) bg_popup_window_pane_cp21

0xde04,	// (0x0005552c) graphic2_pages_pane_ParamLimits

0xde04,	// (0x0005552c) graphic2_pages_pane

0xde5c,	// (0x00055584) grid_graphic2_control_pane_ParamLimits

0xde5c,	// (0x00055584) grid_graphic2_control_pane

0xdea4,	// (0x000555cc) grid_graphic2_pane_ParamLimits

0xdea4,	// (0x000555cc) grid_graphic2_pane

0xdf2f,	// (0x00055657) cell_graphic2_pane

0xa16a,	// (0x00051892) main_comp_mode_pane

0x6b72,	// (0x0004e29a) list_ai3_gene_pane_ParamLimits

0xd76b,	// (0x00054e93) bg_popup_window_pane_cp19_ParamLimits

0x6f46,	// (0x0004e66e) bg_touch_area_indi_pane_ParamLimits

0x6f46,	// (0x0004e66e) bg_touch_area_indi_pane

0x6f5c,	// (0x0004e684) bg_touch_area_indi_pane_cp01_ParamLimits

0x6f5c,	// (0x0004e684) bg_touch_area_indi_pane_cp01

0x6f72,	// (0x0004e69a) bg_touch_area_indi_pane_cp02_ParamLimits

0x6f72,	// (0x0004e69a) bg_touch_area_indi_pane_cp02

0x6f8c,	// (0x0004e6b4) bg_touch_area_indi_pane_cp03_ParamLimits

0x6f8c,	// (0x0004e6b4) bg_touch_area_indi_pane_cp03

0x6fa6,	// (0x0004e6ce) popup_slider_window_g1_ParamLimits

0x6fc2,	// (0x0004e6ea) popup_slider_window_g2_ParamLimits

0x6fde,	// (0x0004e706) popup_slider_window_g3_ParamLimits

0xfcca,	// (0x000573f2) popup_slider_window_g_ParamLimits

0x7044,	// (0x0004e76c) popup_slider_window_t1_ParamLimits

0x70b8,	// (0x0004e7e0) small_volume_slider_vertical_pane_ParamLimits

0xdf2f,	// (0x00055657) cell_graphic2_pane_ParamLimits

0xdf91,	// (0x000556b9) bg_button_pane_cp10_ParamLimits

0xdf91,	// (0x000556b9) bg_button_pane_cp10

0xdfa4,	// (0x000556cc) bg_button_pane_cp11_ParamLimits

0xdfa4,	// (0x000556cc) bg_button_pane_cp11

0xdfb7,	// (0x000556df) graphic2_pages_pane_g1_ParamLimits

0xdfb7,	// (0x000556df) graphic2_pages_pane_g1

0xdfd2,	// (0x000556fa) graphic2_pages_pane_g2_ParamLimits

0xdfd2,	// (0x000556fa) graphic2_pages_pane_g2

0x0001,

0xfd8e,	// (0x000574b6) graphic2_pages_pane_g_ParamLimits

0xfd8e,	// (0x000574b6) graphic2_pages_pane_g

0xdfea,	// (0x00055712) graphic2_pages_pane_t1_ParamLimits

0xdfea,	// (0x00055712) graphic2_pages_pane_t1

0xe002,	// (0x0005572a) cell_graphic2_control_pane_ParamLimits

0xe002,	// (0x0005572a) cell_graphic2_control_pane

0xe030,	// (0x00055758) cell_graphic2_pane_g1_ParamLimits

0xe030,	// (0x00055758) cell_graphic2_pane_g1

0xd0fc,	// (0x00054824) cell_graphic2_pane_g2_ParamLimits

0xd0fc,	// (0x00054824) cell_graphic2_pane_g2

0xe03d,	// (0x00055765) cell_graphic2_pane_g3_ParamLimits

0xe03d,	// (0x00055765) cell_graphic2_pane_g3

0xd109,	// (0x00054831) cell_graphic2_pane_g4_ParamLimits

0xd109,	// (0x00054831) cell_graphic2_pane_g4

0xe04a,	// (0x00055772) cell_graphic2_pane_g5_ParamLimits

0xe04a,	// (0x00055772) cell_graphic2_pane_g5

0x0004,

0xfd93,	// (0x000574bb) cell_graphic2_pane_g_ParamLimits

0xfd93,	// (0x000574bb) cell_graphic2_pane_g

0xe066,	// (0x0005578e) cell_graphic2_pane_t1_ParamLimits

0xe066,	// (0x0005578e) cell_graphic2_pane_t1

0x404a,	// (0x0004b772) grid_highlight_pane_cp11_ParamLimits

0x404a,	// (0x0004b772) grid_highlight_pane_cp11

0xa7d4,	// (0x00051efc) bg_button_pane_cp05

0xe0af,	// (0x000557d7) cell_graphic2_control_pane_g1

0x596b,	// (0x0004d093) bg_touch_area_indi_pane_g1

0x7bd6,	// (0x0004f2fe) aid_cmod_rocker_key_size

0x7be0,	// (0x0004f308) aid_cmode_itu_key_size

0x7bea,	// (0x0004f312) main_cmode_video_pane

0x7bf4,	// (0x0004f31c) main_comp_mode_itu_pane

0x7c00,	// (0x0004f328) main_comp_mode_rocker_pane

0x7c0c,	// (0x0004f334) cell_cmode_rocker_pane_ParamLimits

0x7c0c,	// (0x0004f334) cell_cmode_rocker_pane

0x7c20,	// (0x0004f348) cell_cmode_itu_pane_ParamLimits

0x7c20,	// (0x0004f348) cell_cmode_itu_pane

0xae02,	// (0x0005252a) bg_button_pane_cp06_ParamLimits

0xae02,	// (0x0005252a) bg_button_pane_cp06

0x5be6,	// (0x0004d30e) cell_cmode_rocker_pane_g1_ParamLimits

0x5be6,	// (0x0004d30e) cell_cmode_rocker_pane_g1

0x715f,	// (0x0004e887) cell_cmode_rocker_pane_g2_ParamLimits

0x715f,	// (0x0004e887) cell_cmode_rocker_pane_g2

0x0001,

0xfda3,	// (0x000574cb) cell_cmode_rocker_pane_g_ParamLimits

0xfda3,	// (0x000574cb) cell_cmode_rocker_pane_g

0xa16a,	// (0x00051892) bg_button_pane_cp07

0x7c37,	// (0x0004f35f) cell_cmode_itu_pane_g1

0x7c40,	// (0x0004f368) cell_cmode_itu_pane_t1

0x7c4e,	// (0x0004f376) cell_cmode_itu_pane_t2

0x0001,

0xfda8,	// (0x000574d0) cell_cmode_itu_pane_t

0x738c,	// (0x0004eab4) aid_touch_ctrl_left

0x7394,	// (0x0004eabc) aid_touch_ctrl_right

0xa16a,	// (0x00051892) compa_mode_pane

0xe0d7,	// (0x000557ff) aid_cmod_rocker_key_size_cp

0xe0e1,	// (0x00055809) aid_cmode_itu_key_size_cp

0x7c70,	// (0x0004f398) compa_mode_pane_g1

0x7c78,	// (0x0004f3a0) compa_mode_pane_g2

0x7c80,	// (0x0004f3a8) compa_mode_pane_g3

0x0002,

0xfdad,	// (0x000574d5) compa_mode_pane_g

0xe0eb,	// (0x00055813) main_comp_mode_itu_pane_cp

0xe0f3,	// (0x0005581b) main_comp_mode_rocker_pane_cp

0xe0fb,	// (0x00055823) cell_cmode_itu_pane_cp_ParamLimits

0xe0fb,	// (0x00055823) cell_cmode_itu_pane_cp

0xe110,	// (0x00055838) cell_cmode_rocker_pane_cp_ParamLimits

0xe110,	// (0x00055838) cell_cmode_rocker_pane_cp

0xae02,	// (0x0005252a) bg_button_pane_cp06_cp_ParamLimits

0xae02,	// (0x0005252a) bg_button_pane_cp06_cp

0x5be6,	// (0x0004d30e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5be6,	// (0x0004d30e) cell_cmode_rocker_pane_g1_cp

0x596b,	// (0x0004d093) cell_cmode_rocker_pane_g2_cp

0xa16a,	// (0x00051892) bg_button_pane_cp07_cp

0xe122,	// (0x0005584a) cell_cmode_itu_pane_g1_cp

0xe12b,	// (0x00055853) cell_cmode_itu_pane_t1_cp

0xe12b,	// (0x00055853) cell_cmode_itu_pane_t2_cp

0xcd57,	// (0x0005447f) settings_code_pane_cp2

0xa4f1,	// (0x00051c19) bg_popup_window_pane_cp3_ParamLimits

0xa9e8,	// (0x00052110) heading_pane_cp3_ParamLimits

0xa9f7,	// (0x0005211f) listscroll_popup_graphic_pane_ParamLimits

0x14cd,	// (0x00048bf5) fep_hwr_aid_pane_ParamLimits

0x1992,	// (0x000490ba) aid_touch_sctrl_top_ParamLimits

0x199f,	// (0x000490c7) sctrl_sk_top_pane_g1_ParamLimits

0x5be6,	// (0x0004d30e) sctrl_sk_top_pane_g2_ParamLimits

0xfce3,	// (0x0005740b) sctrl_sk_top_pane_g_ParamLimits

0x19ac,	// (0x000490d4) sctrl_sk_top_pane_t1_ParamLimits

0x1992,	// (0x000490ba) aid_touch_sctrl_bottom_ParamLimits

0x19ac,	// (0x000490d4) sctrl_sk_bottom_pane_t1_ParamLimits

0x72d1,	// (0x0004e9f9) aid_area_touch_clock

0xc2d9,	// (0x00053a01) aid_vkb2_area_top_pane_cell_ParamLimits

0xc2d9,	// (0x00053a01) aid_vkb2_area_top_pane_cell

0xc389,	// (0x00053ab1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc389,	// (0x00053ab1) aid_vkb2_area_bottom_pane_cell

0x783e,	// (0x0004ef66) popup_char_count_window

0x7cd6,	// (0x0004f3fe) popup_char_count_window_g1

0x7cdf,	// (0x0004f407) popup_char_count_window_g2

0x7ce8,	// (0x0004f410) popup_char_count_window_g3

0x0002,

0xfdb4,	// (0x000574dc) popup_char_count_window_g

0x7cf1,	// (0x0004f419) popup_char_count_window_t1

0x1a47,	// (0x0004916f) popup_fep_char_preview_window_ParamLimits

0x1a47,	// (0x0004916f) popup_fep_char_preview_window

0xc2f9,	// (0x00053a21) vkb2_top_candi_pane_ParamLimits

0xc2f9,	// (0x00053a21) vkb2_top_candi_pane

0xe139,	// (0x00055861) cell_vkb2_top_candi_pane_ParamLimits

0xe139,	// (0x00055861) cell_vkb2_top_candi_pane

0x39d3,	// (0x0004b0fb) bg_popup_fep_char_preview_window_ParamLimits

0x39d3,	// (0x0004b0fb) bg_popup_fep_char_preview_window

0x1fcb,	// (0x000496f3) popup_fep_char_preview_window_t1_ParamLimits

0x1fcb,	// (0x000496f3) popup_fep_char_preview_window_t1

0x7d4d,	// (0x0004f475) bg_popup_fep_char_preview_window_g1

0x7d55,	// (0x0004f47d) bg_popup_fep_char_preview_window_g2

0x7d5d,	// (0x0004f485) bg_popup_fep_char_preview_window_g3

0x7d65,	// (0x0004f48d) bg_popup_fep_char_preview_window_g4

0x7d6d,	// (0x0004f495) bg_popup_fep_char_preview_window_g5

0x7d75,	// (0x0004f49d) bg_popup_fep_char_preview_window_g6

0x7d7d,	// (0x0004f4a5) bg_popup_fep_char_preview_window_g7

0x7d85,	// (0x0004f4ad) bg_popup_fep_char_preview_window_g8

0x7d8d,	// (0x0004f4b5) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbb,	// (0x000574e3) bg_popup_fep_char_preview_window_g

0x5be6,	// (0x0004d30e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5be6,	// (0x0004d30e) cell_vkb2_top_candi_pane_g1

0x5f27,	// (0x0004d64f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5f27,	// (0x0004d64f) cell_vkb2_top_candi_pane_g2

0x5f48,	// (0x0004d670) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5f48,	// (0x0004d670) cell_vkb2_top_candi_pane_g3

0x200d,	// (0x00049735) cell_vkb2_top_candi_pane_g4_ParamLimits

0x200d,	// (0x00049735) cell_vkb2_top_candi_pane_g4

0x7d95,	// (0x0004f4bd) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7d95,	// (0x0004f4bd) cell_vkb2_top_candi_pane_g5

0x715f,	// (0x0004e887) cell_vkb2_top_candi_pane_g6_ParamLimits

0x715f,	// (0x0004e887) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd0,	// (0x000574f8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd0,	// (0x000574f8) cell_vkb2_top_candi_pane_g

0x202e,	// (0x00049756) cell_vkb2_top_candi_pane_t1

0x124b,	// (0x00048973) aid_size_touch_slider_mark_ParamLimits

0x124b,	// (0x00048973) aid_size_touch_slider_mark

0xde40,	// (0x00055568) grid_graphic2_catg_pane_ParamLimits

0xde40,	// (0x00055568) grid_graphic2_catg_pane

0xdefe,	// (0x00055626) popup_grid_graphic2_window_t1_ParamLimits

0xdefe,	// (0x00055626) popup_grid_graphic2_window_t1

0xdf14,	// (0x0005563c) popup_grid_graphic2_window_t2_ParamLimits

0xdf14,	// (0x0005563c) popup_grid_graphic2_window_t2

0x0001,

0xfd89,	// (0x000574b1) popup_grid_graphic2_window_t_ParamLimits

0xfd89,	// (0x000574b1) popup_grid_graphic2_window_t

0xa7d4,	// (0x00051efc) bg_button_pane_cp05_ParamLimits

0xe0af,	// (0x000557d7) cell_graphic2_control_pane_g1_ParamLimits

0xe19d,	// (0x000558c5) cell_graphic2_catg_pane_ParamLimits

0xe19d,	// (0x000558c5) cell_graphic2_catg_pane

0xa16a,	// (0x00051892) bg_button_pane_cp12

0xe1af,	// (0x000558d7) cell_graphic2_catg_pane_g1

0x729d,	// (0x0004e9c5) cell_tb_ext_pane_t1_ParamLimits

0x1dfd,	// (0x00049525) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1dfd,	// (0x00049525) vkb2_top_cell_right_narrow_pane

0x1e15,	// (0x0004953d) vkb2_top_cell_right_wide_pane_ParamLimits

0x1e15,	// (0x0004953d) vkb2_top_cell_right_wide_pane

0x14bf,	// (0x00048be7) bg_vkb2_func_pane_ParamLimits

0x14bf,	// (0x00048be7) bg_vkb2_func_pane

0x1e86,	// (0x000495ae) vkb2_top_cell_left_pane_g1_ParamLimits

0x14bf,	// (0x00048be7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x14bf,	// (0x00048be7) bg_vkb2_fuc_pane_cp03

0x1ee4,	// (0x0004960c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3375,	// (0x0004aa9d) bg_vkb2_func_pane_g1

0x337d,	// (0x0004aaa5) bg_vkb2_func_pane_g2

0x338d,	// (0x0004aab5) bg_vkb2_func_pane_g3

0x3385,	// (0x0004aaad) bg_vkb2_func_pane_g4

0x3395,	// (0x0004aabd) bg_vkb2_func_pane_g5

0x339d,	// (0x0004aac5) bg_vkb2_func_pane_g6

0x33a5,	// (0x0004aacd) bg_vkb2_func_pane_g7

0x33ad,	// (0x0004aad5) bg_vkb2_func_pane_g8

0x336d,	// (0x0004aa95) bg_vkb2_func_pane_g9

0x0008,

0xfddd,	// (0x00057505) bg_vkb2_func_pane_g

0x14bf,	// (0x00048be7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x14bf,	// (0x00048be7) bg_vkb2_fuc_pane_cp01

0x1e86,	// (0x000495ae) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1e86,	// (0x000495ae) vkb2_top_cell_right_wide_pane_g1

0x14bf,	// (0x00048be7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x14bf,	// (0x00048be7) bg_vkb2_fuc_pane_cp02

0x204c,	// (0x00049774) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x204c,	// (0x00049774) vkb2_top_cell_right_narrow_pane_g1

0xd6ad,	// (0x00054dd5) aid_touch_area_decrease_ParamLimits

0xd6ad,	// (0x00054dd5) aid_touch_area_decrease

0xd6e7,	// (0x00054e0f) aid_touch_area_increase_ParamLimits

0xd6e7,	// (0x00054e0f) aid_touch_area_increase

0xd70f,	// (0x00054e37) aid_touch_area_mute_ParamLimits

0xd70f,	// (0x00054e37) aid_touch_area_mute

0xd737,	// (0x00054e5f) aid_touch_area_slider_ParamLimits

0xd737,	// (0x00054e5f) aid_touch_area_slider

0xd777,	// (0x00054e9f) popup_slider_window_g4_ParamLimits

0xd777,	// (0x00054e9f) popup_slider_window_g4

0xd79f,	// (0x00054ec7) popup_slider_window_g5_ParamLimits

0xd79f,	// (0x00054ec7) popup_slider_window_g5

0xd7d3,	// (0x00054efb) popup_slider_window_g6_ParamLimits

0xd7d3,	// (0x00054efb) popup_slider_window_g6

0x7072,	// (0x0004e79a) popup_slider_window_t2_ParamLimits

0x7072,	// (0x0004e79a) popup_slider_window_t2

0x0001,

0xfcd7,	// (0x000573ff) popup_slider_window_t_ParamLimits

0xfcd7,	// (0x000573ff) popup_slider_window_t

0xd7ef,	// (0x00054f17) slider_pane_ParamLimits

0xd7ef,	// (0x00054f17) slider_pane

0x7dd1,	// (0x0004f4f9) slider_pane_g1_ParamLimits

0x7dd1,	// (0x0004f4f9) slider_pane_g1

0x7de5,	// (0x0004f50d) slider_pane_g2_ParamLimits

0x7de5,	// (0x0004f50d) slider_pane_g2

0x7dfb,	// (0x0004f523) slider_pane_g3_ParamLimits

0x7dfb,	// (0x0004f523) slider_pane_g3

0x0003,

0xfdf0,	// (0x00057518) slider_pane_g_ParamLimits

0xfdf0,	// (0x00057518) slider_pane_g

0xbc0b,	// (0x00053333) popup_tb_float_extension_window_ParamLimits

0xbc0b,	// (0x00053333) popup_tb_float_extension_window

0x7e27,	// (0x0004f54f) aid_size_cell_tb_float_ext

0xa16a,	// (0x00051892) bg_popup_sub_window_cp28

0x7e33,	// (0x0004f55b) grid_tb_float_ext_pane

0x7e3f,	// (0x0004f567) cell_tb_float_ext_pane_ParamLimits

0x7e3f,	// (0x0004f567) cell_tb_float_ext_pane

0x7e5b,	// (0x0004f583) cell_tb_float_ext_pane_g1

0x7e64,	// (0x0004f58c) grid_highlight_pane_cp12

0xc08f,	// (0x000537b7) cell_last_hwr_side_pane_ParamLimits

0xc08f,	// (0x000537b7) cell_last_hwr_side_pane

0x596b,	// (0x0004d093) cell_last_hwr_side_pane_g1

0x7e6d,	// (0x0004f595) cell_last_hwr_side_pane_g2

0x0001,

0xfdf9,	// (0x00057521) cell_last_hwr_side_pane_g

0xc466,	// (0x00053b8e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc466,	// (0x00053b8e) vkb2_area_bottom_space_btn_pane

0x5be6,	// (0x0004d30e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x78f3,	// (0x0004f01b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x202e,	// (0x00049756) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2068,	// (0x00049790) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2068,	// (0x00049790) vkb2_area_bottom_space_btn_pane_g1

0x20a2,	// (0x000497ca) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x20a2,	// (0x000497ca) vkb2_area_bottom_space_btn_pane_g2

0x20d8,	// (0x00049800) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x20d8,	// (0x00049800) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfe,	// (0x00057526) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfe,	// (0x00057526) vkb2_area_bottom_space_btn_pane_g

0x1576,	// (0x00048c9e) cel_fep_hwr_func_pane_ParamLimits

0x1576,	// (0x00048c9e) cel_fep_hwr_func_pane

0xc064,	// (0x0005378c) cell_hwr_side_button_pane_ParamLimits

0xc064,	// (0x0005378c) cell_hwr_side_button_pane

0x72d1,	// (0x0004e9f9) aid_area_touch_clock_ParamLimits

0xa7d4,	// (0x00051efc) bg_uniindi_top_pane_ParamLimits

0x72e5,	// (0x0004ea0d) uniindi_top_pane_g1_ParamLimits

0x72fb,	// (0x0004ea23) uniindi_top_pane_g2_ParamLimits

0x7307,	// (0x0004ea2f) uniindi_top_pane_g3_ParamLimits

0x7318,	// (0x0004ea40) uniindi_top_pane_g4_ParamLimits

0xfd0f,	// (0x00057437) uniindi_top_pane_g_ParamLimits

0x7325,	// (0x0004ea4d) uniindi_top_pane_t1_ParamLimits

0xa7d4,	// (0x00051efc) bg_vkb2_func_pane_cp01_ParamLimits

0xa7d4,	// (0x00051efc) bg_vkb2_func_pane_cp01

0x7e76,	// (0x0004f59e) cel_fep_hwr_func_pane_g1_ParamLimits

0x7e76,	// (0x0004f59e) cel_fep_hwr_func_pane_g1

0xa7d4,	// (0x00051efc) bg_vkb2_func_pane_cp02_ParamLimits

0xa7d4,	// (0x00051efc) bg_vkb2_func_pane_cp02

0x7e76,	// (0x0004f59e) cell_hwr_side_button_pane_g1_ParamLimits

0x7e76,	// (0x0004f59e) cell_hwr_side_button_pane_g1

0x31f2,	// (0x0004a91a) status_pane_g4_ParamLimits

0x31f2,	// (0x0004a91a) status_pane_g4

0x320c,	// (0x0004a934) status_pane_t1

0x571e,	// (0x0004ce46) form2_midp_gauge_slider_cont_pane

0x5726,	// (0x0004ce4e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd01f,	// (0x00054747) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd031,	// (0x00054759) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadb,	// (0x00057203) form2_midp_gauge_slider_pane_t_ParamLimits

0x575c,	// (0x0004ce84) form2_midp_slider_pane_ParamLimits

0x1a0f,	// (0x00049137) aid_size_cell_func_vkb2_ParamLimits

0x1a0f,	// (0x00049137) aid_size_cell_func_vkb2

0x7e13,	// (0x0004f53b) slider_pane_g4_ParamLimits

0x7e13,	// (0x0004f53b) slider_pane_g4

0xc4cf,	// (0x00053bf7) form2_midp_gauge_slider_pane_t2_cp01

0xc4dd,	// (0x00053c05) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc4dd,	// (0x00053c05) form2_midp_gauge_slider_pane_t3_cp01

0x214d,	// (0x00049875) form2_midp_slider_pane_cp01

0xa16a,	// (0x00051892) navi_smil_pane

0x7eaf,	// (0x0004f5d7) navi_smil_pane_g1

0x7eb7,	// (0x0004f5df) navi_smil_pane_t1

0x7e84,	// (0x0004f5ac) form2_midp_slider_pane_g1

0x7e8d,	// (0x0004f5b5) form2_midp_slider_pane_g2

0x7e95,	// (0x0004f5bd) form2_midp_slider_pane_g3

0x7e84,	// (0x0004f5ac) form2_midp_slider_pane_g4

0xe1b8,	// (0x000558e0) form2_midp_slider_pane_g5

0x0004,

0xfe07,	// (0x0005752f) form2_midp_slider_pane_g

0x2112,	// (0x0004983a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2112,	// (0x0004983a) vkb2_area_bottom_space_btn_pane_g4

0xbdf2,	// (0x0005351a) lc0_navi_pane_ParamLimits

0xbdf2,	// (0x0005351a) lc0_navi_pane

0xc722,	// (0x00053e4a) lc0_stat_indi_pane_ParamLimits

0xc722,	// (0x00053e4a) lc0_stat_indi_pane

0xc737,	// (0x00053e5f) ls0_title_pane_ParamLimits

0xc737,	// (0x00053e5f) ls0_title_pane

0xae02,	// (0x0005252a) bg_popup_sub_pane_cp14_ParamLimits

0x72b8,	// (0x0004e9e0) list_uniindi_pane_ParamLimits

0x72c4,	// (0x0004e9ec) uniindi_top_pane_ParamLimits

0x7364,	// (0x0004ea8c) list_single_uniindi_pane_g1_ParamLimits

0x7377,	// (0x0004ea9f) list_single_uniindi_pane_t1_ParamLimits

0xc4fa,	// (0x00053c22) lc0_stat_clock_pane_ParamLimits

0xc4fa,	// (0x00053c22) lc0_stat_clock_pane

0xe1c1,	// (0x000558e9) lc0_stat_indi_pane_g1_ParamLimits

0xe1c1,	// (0x000558e9) lc0_stat_indi_pane_g1

0xe1ce,	// (0x000558f6) lc0_stat_indi_pane_g2_ParamLimits

0xe1ce,	// (0x000558f6) lc0_stat_indi_pane_g2

0x0001,

0xfe12,	// (0x0005753a) lc0_stat_indi_pane_g_ParamLimits

0xfe12,	// (0x0005753a) lc0_stat_indi_pane_g

0xc507,	// (0x00053c2f) lc0_uni_indicator_pane_ParamLimits

0xc507,	// (0x00053c2f) lc0_uni_indicator_pane

0xe1db,	// (0x00055903) ls0_title_pane_g1_ParamLimits

0xe1db,	// (0x00055903) ls0_title_pane_g1

0xe1ef,	// (0x00055917) ls0_title_pane_t1_ParamLimits

0xe1ef,	// (0x00055917) ls0_title_pane_t1

0xc514,	// (0x00053c3c) lc0_uni_indicator_pane_g1_ParamLimits

0xc514,	// (0x00053c3c) lc0_uni_indicator_pane_g1

0x7f29,	// (0x0004f651) lc0_stat_clock_pane_t1

0xa16a,	// (0x00051892) main_ai5_pane

0x7f37,	// (0x0004f65f) ai5_sk_pane_ParamLimits

0x7f37,	// (0x0004f65f) ai5_sk_pane

0xe21d,	// (0x00055945) cell_ai5_widget_pane_ParamLimits

0xe21d,	// (0x00055945) cell_ai5_widget_pane

0xe28c,	// (0x000559b4) aid_size_cell_widget_grid

0x7ff5,	// (0x0004f71d) bg_ai5_widget_pane_ParamLimits

0x7ff5,	// (0x0004f71d) bg_ai5_widget_pane

0xe2c0,	// (0x000559e8) cell_ai5_widget_pane_g2

0xe2d4,	// (0x000559fc) cell_ai5_widget_pane_g3

0xe2ee,	// (0x00055a16) cell_ai5_widget_pane_g4

0xe2fe,	// (0x00055a26) cell_ai5_widget_pane_g5

0xe30e,	// (0x00055a36) cell_ai5_widget_pane_g6

0xe31a,	// (0x00055a42) cell_ai5_widget_pane_g7

0xe33e,	// (0x00055a66) cell_ai5_widget_pane_t1_ParamLimits

0xe33e,	// (0x00055a66) cell_ai5_widget_pane_t1

0x8154,	// (0x0004f87c) cell_ai5_widget_pane_t2_ParamLimits

0x8154,	// (0x0004f87c) cell_ai5_widget_pane_t2

0x816c,	// (0x0004f894) cell_ai5_widget_pane_t3_ParamLimits

0x816c,	// (0x0004f894) cell_ai5_widget_pane_t3

0xe35b,	// (0x00055a83) cell_ai5_widget_pane_t4_ParamLimits

0xe35b,	// (0x00055a83) cell_ai5_widget_pane_t4

0xe381,	// (0x00055aa9) cell_ai5_widget_pane_t5_ParamLimits

0xe381,	// (0x00055aa9) cell_ai5_widget_pane_t5

0x81ca,	// (0x0004f8f2) cell_ai5_widget_pane_t6_ParamLimits

0x81ca,	// (0x0004f8f2) cell_ai5_widget_pane_t6

0x81dc,	// (0x0004f904) cell_ai5_widget_pane_t7_ParamLimits

0x81dc,	// (0x0004f904) cell_ai5_widget_pane_t7

0x81fb,	// (0x0004f923) cell_ai5_widget_pane_t8_ParamLimits

0x81fb,	// (0x0004f923) cell_ai5_widget_pane_t8

0x000b,

0xfe32,	// (0x0005755a) cell_ai5_widget_pane_t_ParamLimits

0xfe32,	// (0x0005755a) cell_ai5_widget_pane_t

0xe413,	// (0x00055b3b) grid_ai5_widget_pane

0xae02,	// (0x0005252a) highlight_cell_ai5_widget_pane_ParamLimits

0xae02,	// (0x0005252a) highlight_cell_ai5_widget_pane

0xe421,	// (0x00055b49) ai5_sk_left_pane

0xe42b,	// (0x00055b53) ai5_sk_middle_pane

0xe435,	// (0x00055b5d) ai5_sk_right_pane

0x82ab,	// (0x0004f9d3) bg_ai5_widget_pane_g1_ParamLimits

0x82ab,	// (0x0004f9d3) bg_ai5_widget_pane_g1

0x82b7,	// (0x0004f9df) bg_ai5_widget_pane_g2_ParamLimits

0x82b7,	// (0x0004f9df) bg_ai5_widget_pane_g2

0x82c3,	// (0x0004f9eb) bg_ai5_widget_pane_g3_ParamLimits

0x82c3,	// (0x0004f9eb) bg_ai5_widget_pane_g3

0x82cf,	// (0x0004f9f7) bg_ai5_widget_pane_g4_ParamLimits

0x82cf,	// (0x0004f9f7) bg_ai5_widget_pane_g4

0x82db,	// (0x0004fa03) bg_ai5_widget_pane_g5_ParamLimits

0x82db,	// (0x0004fa03) bg_ai5_widget_pane_g5

0x82e7,	// (0x0004fa0f) bg_ai5_widget_pane_g6_ParamLimits

0x82e7,	// (0x0004fa0f) bg_ai5_widget_pane_g6

0x82f3,	// (0x0004fa1b) bg_ai5_widget_pane_g7_ParamLimits

0x82f3,	// (0x0004fa1b) bg_ai5_widget_pane_g7

0x82ff,	// (0x0004fa27) bg_ai5_widget_pane_g8_ParamLimits

0x82ff,	// (0x0004fa27) bg_ai5_widget_pane_g8

0x830b,	// (0x0004fa33) bg_ai5_widget_pane_g9_ParamLimits

0x830b,	// (0x0004fa33) bg_ai5_widget_pane_g9

0x0008,

0xfe4b,	// (0x00057573) bg_ai5_widget_pane_g_ParamLimits

0xfe4b,	// (0x00057573) bg_ai5_widget_pane_g

0xe93e,	// (0x00056066) cell_shortcut_ai5_widget_pane_ParamLimits

0xe93e,	// (0x00056066) cell_shortcut_ai5_widget_pane

0x2b10,	// (0x0004a238) bg_cell_shortcut_ai5_widget_pane

0x8356,	// (0x0004fa7e) cell_grid_ai5_widget_pane_g1

0x2b10,	// (0x0004a238) highlight_cell_shortcut_ai5_widget_pane

0x337d,	// (0x0004aaa5) ai5_sk_left_pane_g1

0x835f,	// (0x0004fa87) ai5_sk_left_pane_g2

0x8367,	// (0x0004fa8f) ai5_sk_left_pane_g3

0x836f,	// (0x0004fa97) ai5_sk_left_pane_g4

0x0003,

0xfe5e,	// (0x00057586) ai5_sk_left_pane_g

0x8377,	// (0x0004fa9f) ai5_sk_left_pane_t1

0x3375,	// (0x0004aa9d) ai5_sk_right_pane_g1

0x8385,	// (0x0004faad) ai5_sk_right_pane_g2

0x838d,	// (0x0004fab5) ai5_sk_right_pane_g3

0x8395,	// (0x0004fabd) ai5_sk_right_pane_g4

0x0003,

0xfe67,	// (0x0005758f) ai5_sk_right_pane_g

0x839d,	// (0x0004fac5) ai5_sk_right_pane_t1

0x3375,	// (0x0004aa9d) ai5_sk_middle_pane_g1

0x337d,	// (0x0004aaa5) ai5_sk_middle_pane_g2

0x3395,	// (0x0004aabd) ai5_sk_middle_pane_g3

0x838d,	// (0x0004fab5) ai5_sk_middle_pane_g4

0x8367,	// (0x0004fa8f) ai5_sk_middle_pane_g5

0x83ab,	// (0x0004fad3) ai5_sk_middle_pane_g6

0xe951,	// (0x00056079) ai5_sk_middle_pane_g7

0x0006,

0xfe70,	// (0x00057598) ai5_sk_middle_pane_g

0xbcdc,	// (0x00053404) aid_touch_area_size_lc0_ParamLimits

0xbcdc,	// (0x00053404) aid_touch_area_size_lc0

0x1715,	// (0x00048e3d) cell_hwr_candidate_pane_t1_ParamLimits

0x2eb5,	// (0x0004a5dd) aid_touch_navi_pane

0xc842,	// (0x00053f6a) status_dt_navi_pane_ParamLimits

0xc842,	// (0x00053f6a) status_dt_navi_pane

0xc85a,	// (0x00053f82) status_dt_sta_pane_ParamLimits

0xc85a,	// (0x00053f82) status_dt_sta_pane

0xe959,	// (0x00056081) dt_sta_controll_pane

0xe966,	// (0x0005608e) dt_sta_indi_pane

0xe973,	// (0x0005609b) dt_sta_title_pane

0xa7d4,	// (0x00051efc) bg_dt_sta_indi_pane_ParamLimits

0xa7d4,	// (0x00051efc) bg_dt_sta_indi_pane

0xe985,	// (0x000560ad) dt_sta_battery_pane

0xe98d,	// (0x000560b5) dt_sta_indi_pane_g1

0xe996,	// (0x000560be) dt_sta_indi_pane_g2

0xe99f,	// (0x000560c7) dt_sta_indi_pane_g3

0x0002,

0xfe7f,	// (0x000575a7) dt_sta_indi_pane_g

0xe9a8,	// (0x000560d0) dt_sta_signal_pane

0xae02,	// (0x0005252a) bg_dt_sta_title_pane_ParamLimits

0xae02,	// (0x0005252a) bg_dt_sta_title_pane

0xe9b1,	// (0x000560d9) dt_sta_title_pane_g1

0xe9b9,	// (0x000560e1) dt_sta_title_pane_t1_ParamLimits

0xe9b9,	// (0x000560e1) dt_sta_title_pane_t1

0xa16a,	// (0x00051892) bg_dt_sta_control_pane

0xe9ce,	// (0x000560f6) dt_sta_controll_pane_g1

0xe9d7,	// (0x000560ff) bg_dt_sta_title_pane_g1

0xe9e0,	// (0x00056108) bg_dt_sta_title_pane_g2

0xe9e9,	// (0x00056111) bg_dt_sta_title_pane_g3

0x0002,

0xfe86,	// (0x000575ae) bg_dt_sta_title_pane_g

0x596b,	// (0x0004d093) bg_dt_sta_indi_pane_g1

0x8459,	// (0x0004fb81) dt_sta_signal_pane_g1

0x8461,	// (0x0004fb89) dt_sta_signal_pane_g2

0x0001,

0xfe8d,	// (0x000575b5) dt_sta_signal_pane_g

0x8469,	// (0x0004fb91) dt_sta_battery_pane_g1

0x8472,	// (0x0004fb9a) dt_sta_battery_pane_t1

0x596b,	// (0x0004d093) bg_dt_sta_control_pane_g1

0x2603,	// (0x00049d2b) fep_china_uni_eep_pane

0x260b,	// (0x00049d33) fep_china_uni_entry_pane_ParamLimits

0x261b,	// (0x00049d43) popup_fep_china_uni_window_g1_ParamLimits

0x262b,	// (0x00049d53) popup_fep_china_uni_window_g2_ParamLimits

0x262b,	// (0x00049d53) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00056e25) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00056e25) popup_fep_china_uni_window_g

0x8481,	// (0x0004fba9) fep_china_uni_eep_pane_g1

0x8489,	// (0x0004fbb1) fep_china_uni_eep_pane_t1

0x7ea6,	// (0x0004f5ce) aid_touch_area_size_smil_player

0x3009,	// (0x0004a731) lc0_clock_pane

0x3200,	// (0x0004a928) status_pane_g5_ParamLimits

0x3200,	// (0x0004a928) status_pane_g5

0xb733,	// (0x00052e5b) popup_keymap_window

0x31c6,	// (0x0004a8ee) status_icon_pane

0xe2d4,	// (0x000559fc) cell_ai5_widget_pane_g3_ParamLimits

0xe2ee,	// (0x00055a16) cell_ai5_widget_pane_g4_ParamLimits

0xe2fe,	// (0x00055a26) cell_ai5_widget_pane_g5_ParamLimits

0x80d7,	// (0x0004f7ff) cell_ai5_widget_pane_g8_ParamLimits

0x80d7,	// (0x0004f7ff) cell_ai5_widget_pane_g8

0x80eb,	// (0x0004f813) cell_ai5_widget_pane_g9_ParamLimits

0x80eb,	// (0x0004f813) cell_ai5_widget_pane_g9

0x80ff,	// (0x0004f827) cell_ai5_widget_pane_g10_ParamLimits

0x80ff,	// (0x0004f827) cell_ai5_widget_pane_g10

0x8498,	// (0x0004fbc0) status_icon_pane_g1

0xa16a,	// (0x00051892) bg_popup_sub_pane_cp13

0x84a0,	// (0x0004fbc8) popup_keymap_window_t1

0xb43a,	// (0x00052b62) control_pane_g6_ParamLimits

0xb43a,	// (0x00052b62) control_pane_g6

0xb447,	// (0x00052b6f) control_pane_g7_ParamLimits

0xb447,	// (0x00052b6f) control_pane_g7

0xb454,	// (0x00052b7c) control_pane_g8_ParamLimits

0xb454,	// (0x00052b7c) control_pane_g8

0xe959,	// (0x00056081) dt_sta_controll_pane_ParamLimits

0xe966,	// (0x0005608e) dt_sta_indi_pane_ParamLimits

0xe973,	// (0x0005609b) dt_sta_title_pane_ParamLimits

0xad26,	// (0x0005244e) aid_size_touch_scroll_bar_cale

0xf435,	// (0x00056b5d) popup_discreet_window_ParamLimits

0xf435,	// (0x00056b5d) popup_discreet_window

0xa2b8,	// (0x000519e0) popup_sk_window

0x39d3,	// (0x0004b0fb) bg_popup_sub_pane_cp28_ParamLimits

0x39d3,	// (0x0004b0fb) bg_popup_sub_pane_cp28

0x84ae,	// (0x0004fbd6) popup_discreet_window_g1_ParamLimits

0x84ae,	// (0x0004fbd6) popup_discreet_window_g1

0x84ce,	// (0x0004fbf6) popup_discreet_window_t1_ParamLimits

0x84ce,	// (0x0004fbf6) popup_discreet_window_t1

0x84ec,	// (0x0004fc14) popup_discreet_window_t2_ParamLimits

0x84ec,	// (0x0004fc14) popup_discreet_window_t2

0x0002,

0xfe92,	// (0x000575ba) popup_discreet_window_t_ParamLimits

0xfe92,	// (0x000575ba) popup_discreet_window_t

0x2183,	// (0x000498ab) popup_sk_window_g1

0x218d,	// (0x000498b5) popup_sk_window_g2

0x0001,

0xfe99,	// (0x000575c1) popup_sk_window_g

0x2195,	// (0x000498bd) popup_sk_window_t1

0x21a3,	// (0x000498cb) popup_sk_window_t1_copy1

0xe2c0,	// (0x000559e8) cell_ai5_widget_pane_g2_ParamLimits

0xe3a1,	// (0x00055ac9) cell_ai5_widget_pane_t9_ParamLimits

0xe3a1,	// (0x00055ac9) cell_ai5_widget_pane_t9

0xa16a,	// (0x00051892) main_fep_fshwr2_pane

0xc533,	// (0x00053c5b) aid_fshwr2_btn_pane

0xc547,	// (0x00053c6f) aid_fshwr2_syb_pane

0xc55b,	// (0x00053c83) aid_fshwr2_txt_pane

0xc56b,	// (0x00053c93) fshwr2_func_candi_pane

0xc58d,	// (0x00053cb5) fshwr2_hwr_syb_pane

0xc5b1,	// (0x00053cd9) fshwr2_icf_pane

0xa16a,	// (0x00051892) fshwr2_icf_bg_pane

0x224f,	// (0x00049977) fshwr2_icf_pane_t1_ParamLimits

0x224f,	// (0x00049977) fshwr2_icf_pane_t1

0xe8c8,	// (0x00055ff0) fshwr2_func_candi_pane_g1

0xe9f2,	// (0x0005611a) fshwr2_func_candi_row_pane_ParamLimits

0xe9f2,	// (0x0005611a) fshwr2_func_candi_row_pane

0xc5e1,	// (0x00053d09) cell_fshwr2_syb_pane_ParamLimits

0xc5e1,	// (0x00053d09) cell_fshwr2_syb_pane

0x7e76,	// (0x0004f59e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7e76,	// (0x0004f59e) fshwr2_hwr_syb_pane_g1

0xa16a,	// (0x00051892) bg_popup_call_pane_cp01

0xc609,	// (0x00053d31) fshwr2_func_candi_cell_pane_ParamLimits

0xc609,	// (0x00053d31) fshwr2_func_candi_cell_pane

0x37b3,	// (0x0004aedb) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x37b3,	// (0x0004aedb) fshwr2_func_candi_cell_bg_pane

0xc654,	// (0x00053d7c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc654,	// (0x00053d7c) fshwr2_func_candi_cell_pane_g1

0xc68b,	// (0x00053db3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc68b,	// (0x00053db3) fshwr2_func_candi_cell_pane_t1

0xa16a,	// (0x00051892) bg_button_pane_cp08

0x2e37,	// (0x0004a55f) cell_fshwr2_syb_bg_pane

0xc6a6,	// (0x00053dce) cell_fshwr2_syb_bg_pane_g1

0xc6ba,	// (0x00053de2) cell_fshwr2_syb_bg_pane_t1

0xae02,	// (0x0005252a) main_tmo_pane

0xcb5c,	// (0x00054284) uni_indicator_pane_g1_ParamLimits

0xcb72,	// (0x0005429a) uni_indicator_pane_g2_ParamLimits

0xcb88,	// (0x000542b0) uni_indicator_pane_g3_ParamLimits

0xcb9b,	// (0x000542c3) uni_indicator_pane_g4_ParamLimits

0xcb9b,	// (0x000542c3) uni_indicator_pane_g4

0x454a,	// (0x0004bc72) uni_indicator_pane_g5_ParamLimits

0x454a,	// (0x0004bc72) uni_indicator_pane_g5

0x454a,	// (0x0004bc72) uni_indicator_pane_g6_ParamLimits

0x454a,	// (0x0004bc72) uni_indicator_pane_g6

0xf8fc,	// (0x00057024) uni_indicator_pane_g_ParamLimits

0xd67d,	// (0x00054da5) popup_tmo_note_window_ParamLimits

0xd67d,	// (0x00054da5) popup_tmo_note_window

0xae02,	// (0x0005252a) fshwr2_bg_pane

0xc67c,	// (0x00053da4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc67c,	// (0x00053da4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9e,	// (0x000575c6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9e,	// (0x000575c6) fshwr2_func_candi_cell_pane_g

0x596b,	// (0x0004d093) bg_popup_window_pane_cp01

0x2341,	// (0x00049a69) bg_popup_window_pane_g1_cp01

0x8561,	// (0x0004fc89) bg_popup_window_pane_cp22_ParamLimits

0x8561,	// (0x0004fc89) bg_popup_window_pane_cp22

0x856f,	// (0x0004fc97) listscroll_tmo_link_pane_ParamLimits

0x856f,	// (0x0004fc97) listscroll_tmo_link_pane

0x85af,	// (0x0004fcd7) popup_tmo_note_window_g1_ParamLimits

0x85af,	// (0x0004fcd7) popup_tmo_note_window_g1

0x85bc,	// (0x0004fce4) tmo_note_info_pane_ParamLimits

0x85bc,	// (0x0004fce4) tmo_note_info_pane

0xea19,	// (0x00056141) list_tmo_note_info_pane_g1_ParamLimits

0xea19,	// (0x00056141) list_tmo_note_info_pane_g1

0x85ed,	// (0x0004fd15) list_tmo_note_info_pane_g2_ParamLimits

0x85ed,	// (0x0004fd15) list_tmo_note_info_pane_g2

0x0001,

0xfea3,	// (0x000575cb) list_tmo_note_info_pane_g_ParamLimits

0xfea3,	// (0x000575cb) list_tmo_note_info_pane_g

0x8609,	// (0x0004fd31) list_tmo_note_info_text_pane_ParamLimits

0x8609,	// (0x0004fd31) list_tmo_note_info_text_pane

0x868e,	// (0x0004fdb6) list_tmo_link_pane

0x869b,	// (0x0004fdc3) scroll_pane_cp20

0x86a8,	// (0x0004fdd0) list_single_tmo_link_pane_ParamLimits

0x86a8,	// (0x0004fdd0) list_single_tmo_link_pane

0x86b8,	// (0x0004fde0) list_single_tmo_link_pane_t1

0x86c6,	// (0x0004fdee) list_tmo_note_info_text_pane_t1_ParamLimits

0x86c6,	// (0x0004fdee) list_tmo_note_info_text_pane_t1

0xaebe,	// (0x000525e6) aid_size_touch_scroll_bar_cp01_ParamLimits

0xaebe,	// (0x000525e6) aid_size_touch_scroll_bar_cp01

0x9dc0,	// (0x000514e8) aid_size_touch_slider_marker

0xa2a8,	// (0x000519d0) popup_settings_window_ParamLimits

0xa2a8,	// (0x000519d0) popup_settings_window

0xed24,	// (0x0005644c) popup_candi_list_indi_window

0x2eb5,	// (0x0004a5dd) aid_touch_navi_pane_ParamLimits

0x1966,	// (0x0004908e) rs_clock_indi_pane

0x196f,	// (0x00049097) sctrl_sk_bottom_pane_ParamLimits

0x1980,	// (0x000490a8) sctrl_sk_top_pane_ParamLimits

0x1a61,	// (0x00049189) popup_fep_tooltip_window

0xe28c,	// (0x000559b4) aid_size_cell_widget_grid_ParamLimits

0xe2ab,	// (0x000559d3) cell_ai5_widget_pane_g1_ParamLimits

0xe2ab,	// (0x000559d3) cell_ai5_widget_pane_g1

0xe30e,	// (0x00055a36) cell_ai5_widget_pane_g6_ParamLimits

0xe31a,	// (0x00055a42) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe17,	// (0x0005753f) cell_ai5_widget_pane_g_ParamLimits

0xfe17,	// (0x0005753f) cell_ai5_widget_pane_g

0xe3d0,	// (0x00055af8) cell_ai5_widget_pane_t10_ParamLimits

0xe3d0,	// (0x00055af8) cell_ai5_widget_pane_t10

0xe413,	// (0x00055b3b) grid_ai5_widget_pane_ParamLimits

0xe43f,	// (0x00055b67) cell_contacts_ai5_widget_pane_ParamLimits

0xe43f,	// (0x00055b67) cell_contacts_ai5_widget_pane

0x8501,	// (0x0004fc29) popup_discreet_window_t3_ParamLimits

0x8501,	// (0x0004fc29) popup_discreet_window_t3

0xc5cd,	// (0x00053cf5) popup_fshwr2_char_preview_window_ParamLimits

0xc5cd,	// (0x00053cf5) popup_fshwr2_char_preview_window

0xea30,	// (0x00056158) tmo_note_info_pane_t1

0xea45,	// (0x0005616d) tmo_note_info_pane_t2

0xea5e,	// (0x00056186) tmo_note_info_pane_t3

0x866a,	// (0x0004fd92) tmo_note_info_pane_t4

0x867c,	// (0x0004fda4) tmo_note_info_pane_t5

0x0004,

0xfea8,	// (0x000575d0) tmo_note_info_pane_t

0x868e,	// (0x0004fdb6) list_tmo_link_pane_ParamLimits

0x869b,	// (0x0004fdc3) scroll_pane_cp20_ParamLimits

0xa16a,	// (0x00051892) bg_popup_fep_char_preview_window_cp01

0x86df,	// (0x0004fe07) popup_fshwr2_char_preview_window_t1

0x86ed,	// (0x0004fe15) popup_candi_list_indi_window_g1

0x86f6,	// (0x0004fe1e) bg_cell_contacts_ai5_widget_pane

0x8702,	// (0x0004fe2a) cell_contacts_ai5_widget_pane_g1

0x8717,	// (0x0004fe3f) cell_contacts_ai5_widget_pane_g2

0x8723,	// (0x0004fe4b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb3,	// (0x000575db) cell_contacts_ai5_widget_pane_g

0x872f,	// (0x0004fe57) cell_contacts_ai5_widget_pane_t1

0xae02,	// (0x0005252a) highlight_cell_shortcut_ai5_widget_pane_cp01

0x87a6,	// (0x0004fece) settings_container_pane

0x2b10,	// (0x0004a238) listscroll_set_pane_copy1

0x509c,	// (0x0004c7c4) scroll_pane_cp121_copy1

0x87b2,	// (0x0004feda) set_content_pane_copy1

0x87ba,	// (0x0004fee2) aid_height_set_list_copy1_ParamLimits

0x87ba,	// (0x0004fee2) aid_height_set_list_copy1

0x474a,	// (0x0004be72) aid_size_parent_copy1_ParamLimits

0x474a,	// (0x0004be72) aid_size_parent_copy1

0x87c6,	// (0x0004feee) button_value_adjust_pane_cp6_copy1_ParamLimits

0x87c6,	// (0x0004feee) button_value_adjust_pane_cp6_copy1

0x2e37,	// (0x0004a55f) list_highlight_pane_cp2_copy1_ParamLimits

0x2e37,	// (0x0004a55f) list_highlight_pane_cp2_copy1

0x87da,	// (0x0004ff02) list_set_pane_copy1_ParamLimits

0x87da,	// (0x0004ff02) list_set_pane_copy1

0x8741,	// (0x0004fe69) main_pane_set_t1_copy1_ParamLimits

0x8741,	// (0x0004fe69) main_pane_set_t1_copy1

0x877b,	// (0x0004fea3) main_pane_set_t2_copy1_ParamLimits

0x877b,	// (0x0004fea3) main_pane_set_t2_copy1

0x889b,	// (0x0004ffc3) main_pane_set_t3_copy1

0x88a9,	// (0x0004ffd1) main_pane_set_t4_copy1

0x879a,	// (0x0004fec2) set_content_pane_g1_copy1_ParamLimits

0x879a,	// (0x0004fec2) set_content_pane_g1_copy1

0x88b7,	// (0x0004ffdf) setting_code_pane_copy1

0x88bf,	// (0x0004ffe7) setting_slider_graphic_pane_copy1

0x88bf,	// (0x0004ffe7) setting_slider_pane_copy1

0x88c7,	// (0x0004ffef) setting_text_pane_copy1

0x88c7,	// (0x0004ffef) setting_volume_pane_copy1

0x88b7,	// (0x0004ffdf) settings_code_pane_cp2_copy1

0x88cf,	// (0x0004fff7) settings_code_pane_cp_copy1_ParamLimits

0x88cf,	// (0x0004fff7) settings_code_pane_cp_copy1

0x234a,	// (0x00049a72) volume_set_pane_copy1

0x88e3,	// (0x0005000b) volume_set_pane_g10_copy1

0x88ef,	// (0x00050017) volume_set_pane_g1_copy1

0x88f9,	// (0x00050021) volume_set_pane_g2_copy1

0x8903,	// (0x0005002b) volume_set_pane_g3_copy1

0x890d,	// (0x00050035) volume_set_pane_g4_copy1

0x8917,	// (0x0005003f) volume_set_pane_g5_copy1

0x8921,	// (0x00050049) volume_set_pane_g6_copy1

0x892b,	// (0x00050053) volume_set_pane_g7_copy1

0x8935,	// (0x0005005d) volume_set_pane_g8_copy1

0x893f,	// (0x00050067) volume_set_pane_g9_copy1

0xa4f1,	// (0x00051c19) bg_set_opt_pane_cp_copy1_ParamLimits

0xa4f1,	// (0x00051c19) bg_set_opt_pane_cp_copy1

0x2356,	// (0x00049a7e) setting_slider_pane_t1_copy1_ParamLimits

0x2356,	// (0x00049a7e) setting_slider_pane_t1_copy1

0x2375,	// (0x00049a9d) setting_slider_pane_t2_copy1_ParamLimits

0x2375,	// (0x00049a9d) setting_slider_pane_t2_copy1

0x238f,	// (0x00049ab7) setting_slider_pane_t3_copy1_ParamLimits

0x238f,	// (0x00049ab7) setting_slider_pane_t3_copy1

0x23a7,	// (0x00049acf) slider_set_pane_copy1_ParamLimits

0x23a7,	// (0x00049acf) slider_set_pane_copy1

0xae5a,	// (0x00052582) set_opt_bg_pane_g1_copy2

0xae62,	// (0x0005258a) set_opt_bg_pane_g2_copy2

0x894b,	// (0x00050073) set_opt_bg_pane_g3_copy2

0xae72,	// (0x0005259a) set_opt_bg_pane_g4_copy2

0xae7a,	// (0x000525a2) set_opt_bg_pane_g5_copy2

0xae82,	// (0x000525aa) set_opt_bg_pane_g6_copy2

0x8955,	// (0x0005007d) set_opt_bg_pane_g7_copy2

0x895f,	// (0x00050087) set_opt_bg_pane_g8_copy2

0x8969,	// (0x00050091) set_opt_bg_pane_g9_copy2

0x23bd,	// (0x00049ae5) aid_size_touch_slider_mark_copy1_ParamLimits

0x23bd,	// (0x00049ae5) aid_size_touch_slider_mark_copy1

0x8973,	// (0x0005009b) slider_set_pane_g1_copy1

0x23d1,	// (0x00049af9) slider_set_pane_g2_copy1

0x126b,	// (0x00048993) slider_set_pane_g3_copy1_ParamLimits

0x126b,	// (0x00048993) slider_set_pane_g3_copy1

0x127f,	// (0x000489a7) slider_set_pane_g4_copy1_ParamLimits

0x127f,	// (0x000489a7) slider_set_pane_g4_copy1

0x1297,	// (0x000489bf) slider_set_pane_g5_copy1_ParamLimits

0x1297,	// (0x000489bf) slider_set_pane_g5_copy1

0x126b,	// (0x00048993) slider_set_pane_g6_copy1_ParamLimits

0x126b,	// (0x00048993) slider_set_pane_g6_copy1

0x23d9,	// (0x00049b01) slider_set_pane_g7_copy1_ParamLimits

0x23d9,	// (0x00049b01) slider_set_pane_g7_copy1

0xa264,	// (0x0005198c) bg_set_opt_pane_cp2_copy1

0x897c,	// (0x000500a4) setting_slider_graphic_pane_g1_copy1

0x8985,	// (0x000500ad) setting_slider_graphic_pane_t1_copy1

0x8995,	// (0x000500bd) setting_slider_graphic_pane_t2_copy1

0x89a5,	// (0x000500cd) slider_set_pane_cp_copy1

0x89b5,	// (0x000500dd) input_focus_pane_cp1_copy1

0x89be,	// (0x000500e6) list_set_text_pane_copy1

0x89c6,	// (0x000500ee) setting_text_pane_g1_copy1

0xe46b,	// (0x00055b93) set_text_pane_t1_copy1

0x89b5,	// (0x000500dd) input_focus_pane_cp2_copy1

0x89c6,	// (0x000500ee) setting_code_pane_g1_copy1

0x89cf,	// (0x000500f7) setting_code_pane_t1_copy1

0x4ea1,	// (0x0004c5c9) list_set_graphic_pane_copy1

0xa264,	// (0x0005198c) bg_set_opt_pane_cp4_copy1

0x2800,	// (0x00049f28) list_set_graphic_pane_g1_copy1_ParamLimits

0x2800,	// (0x00049f28) list_set_graphic_pane_g1_copy1

0x89dd,	// (0x00050105) list_set_graphic_pane_g2_copy1

0x2818,	// (0x00049f40) list_set_graphic_pane_t1_copy1_ParamLimits

0x2818,	// (0x00049f40) list_set_graphic_pane_t1_copy1

0x596b,	// (0x0004d093) rs_clock_indi_pane_g1

0x89e5,	// (0x0005010d) rs_clock_indi_pane_t1

0x89f3,	// (0x0005011b) rs_indi_pane

0x89fb,	// (0x00050123) rs_indi_pane_g1

0x8a04,	// (0x0005012c) rs_indi_pane_g2

0x8a0d,	// (0x00050135) rs_indi_pane_g3

0x0002,

0xfeba,	// (0x000575e2) rs_indi_pane_g

0x2b10,	// (0x0004a238) bg_popup_preview_window_pane_cp03

0x8a16,	// (0x0005013e) popup_fep_tooltip_window_t1

0x6630,	// (0x0004dd58) popup_note2_window_g2_ParamLimits

0x6630,	// (0x0004dd58) popup_note2_window_g2

0x0001,

0xfc47,	// (0x0005736f) popup_note2_window_g_ParamLimits

0xfc47,	// (0x0005736f) popup_note2_window_g

0x6b38,	// (0x0004e260) bg_popup_sub_pane_cp11_ParamLimits

0x6b45,	// (0x0004e26d) cell_ai3_links_pane_g1_ParamLimits

0x6b5c,	// (0x0004e284) cell_ai3_links_pane_t1

0xe46b,	// (0x00055b93) set_text_pane_t1_copy1_ParamLimits

0x2a12,	// (0x0004a13a) cell_graphic_popup_pane_cp2_ParamLimits

0x2a12,	// (0x0004a13a) cell_graphic_popup_pane_cp2

0x8a24,	// (0x0005014c) cell_graphic_popup_pane_g1_cp2

0xab39,	// (0x00052261) cell_graphic_popup_pane_g2_cp2

0x8a2c,	// (0x00050154) cell_graphic_popup_pane_g3_cp2

0x8a34,	// (0x0005015c) cell_graphic_popup_pane_t2_cp2

0xab4a,	// (0x00052272) grid_highlight_pane_cp3_cp2

0xe701,	// (0x00055e29) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xae02,	// (0x0005252a) main_tmo_pane_ParamLimits

0xd671,	// (0x00054d99) popup_tmo_big_image_note_window

0xe29a,	// (0x000559c2) cell_ai5_widget_list_pane

0xe2a2,	// (0x000559ca) cell_ai5_widget_lrg_icon_pane

0xea30,	// (0x00056158) tmo_note_info_pane_t1_ParamLimits

0xea45,	// (0x0005616d) tmo_note_info_pane_t2_ParamLimits

0xea5e,	// (0x00056186) tmo_note_info_pane_t3_ParamLimits

0x866a,	// (0x0004fd92) tmo_note_info_pane_t4_ParamLimits

0x867c,	// (0x0004fda4) tmo_note_info_pane_t5_ParamLimits

0xfea8,	// (0x000575d0) tmo_note_info_pane_t_ParamLimits

0x87a6,	// (0x0004fece) settings_container_pane_ParamLimits

0x89ad,	// (0x000500d5) indicator_popup_pane_cp5

0x89ad,	// (0x000500d5) indicator_popup_pane_cp6

0x4ea1,	// (0x0004c5c9) list_set_graphic_pane_copy1_ParamLimits

0xa16a,	// (0x00051892) bg_popup_window_pane_cp23

0x8a42,	// (0x0005016a) popup_tmo_big_image_note_window_g1

0x8a4e,	// (0x00050176) popup_tmo_big_image_note_window_t1

0x8a5e,	// (0x00050186) popup_tmo_big_image_note_window_t2

0x8a6e,	// (0x00050196) popup_tmo_big_image_note_window_t3

0x0002,

0xfec1,	// (0x000575e9) popup_tmo_big_image_note_window_t

0x596b,	// (0x0004d093) cell_ai5_widget_lrg_icon_pane_g1

0xea73,	// (0x0005619b) cell_ai5_widget_lrg_icon_pane_t1

0xea81,	// (0x000561a9) cell_ai5_widget_list_row_pane_ParamLimits

0xea81,	// (0x000561a9) cell_ai5_widget_list_row_pane

0xea99,	// (0x000561c1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xea99,	// (0x000561c1) cell_ai5_widget_list_row_pane_g1

0xeaa6,	// (0x000561ce) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeaa6,	// (0x000561ce) cell_ai5_widget_list_row_pane_t1

0xead1,	// (0x000561f9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xead1,	// (0x000561f9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec8,	// (0x000575f0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec8,	// (0x000575f0) cell_ai5_widget_list_row_pane_t

0xa16a,	// (0x00051892) main_fep_vtchi_ss_pane

0x8b2c,	// (0x00050254) popup_fep_char_pre_window

0x8b34,	// (0x0005025c) popup_fep_ituss_window

0xeb23,	// (0x0005624b) popup_fep_vkbss_window

0x2e37,	// (0x0004a55f) grid_vkbss_keypad_pane_ParamLimits

0x2e37,	// (0x0004a55f) grid_vkbss_keypad_pane

0x8ba2,	// (0x000502ca) ituss_keypad_pane

0x23f9,	// (0x00049b21) aid_vkbss_key_offset_ParamLimits

0x23f9,	// (0x00049b21) aid_vkbss_key_offset

0xc6d0,	// (0x00053df8) cell_vkbss_key_pane_ParamLimits

0xc6d0,	// (0x00053df8) cell_vkbss_key_pane

0x8bae,	// (0x000502d6) bg_cell_vkbss_key_g1_ParamLimits

0x8bae,	// (0x000502d6) bg_cell_vkbss_key_g1

0xeb32,	// (0x0005625a) cell_vkbss_key_3p_pane_ParamLimits

0xeb32,	// (0x0005625a) cell_vkbss_key_3p_pane

0xeb68,	// (0x00056290) cell_vkbss_key_g1_ParamLimits

0xeb68,	// (0x00056290) cell_vkbss_key_g1

0xeb9e,	// (0x000562c6) cell_vkbss_key_t1_ParamLimits

0xeb9e,	// (0x000562c6) cell_vkbss_key_t1

0x2463,	// (0x00049b8b) cell_ituss_key_pane_ParamLimits

0x2463,	// (0x00049b8b) cell_ituss_key_pane

0x8c82,	// (0x000503aa) bg_cell_ituss_key_g1_ParamLimits

0x8c82,	// (0x000503aa) bg_cell_ituss_key_g1

0x8c8e,	// (0x000503b6) cell_ituss_key_pane_g1_ParamLimits

0x8c8e,	// (0x000503b6) cell_ituss_key_pane_g1

0x2474,	// (0x00049b9c) cell_ituss_key_pane_g2_ParamLimits

0x2474,	// (0x00049b9c) cell_ituss_key_pane_g2

0x0005,

0xfecf,	// (0x000575f7) cell_ituss_key_pane_g_ParamLimits

0xfecf,	// (0x000575f7) cell_ituss_key_pane_g

0x24f8,	// (0x00049c20) cell_ituss_key_t1_ParamLimits

0x24f8,	// (0x00049c20) cell_ituss_key_t1

0x2532,	// (0x00049c5a) cell_ituss_key_t2_ParamLimits

0x2532,	// (0x00049c5a) cell_ituss_key_t2

0x2564,	// (0x00049c8c) cell_ituss_key_t3_ParamLimits

0x2564,	// (0x00049c8c) cell_ituss_key_t3

0x2595,	// (0x00049cbd) cell_ituss_key_t4_ParamLimits

0x2595,	// (0x00049cbd) cell_ituss_key_t4

0x0004,

0xfedc,	// (0x00057604) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x00057604) cell_ituss_key_t

0xebfa,	// (0x00056322) cell_vkbss_key_3p_pane_g1

0xec02,	// (0x0005632a) cell_vkbss_key_3p_pane_g2

0xec0a,	// (0x00056332) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x0005760f) cell_vkbss_key_3p_pane_g

0x2b10,	// (0x0004a238) bg_popup_fep_char_preview_window_cp02

0x8ccc,	// (0x000503f4) popup_fep_char_pre_window_t1

0xe279,	// (0x000559a1) main_ai5_sk_pane

0x86f6,	// (0x0004fe1e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8702,	// (0x0004fe2a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8717,	// (0x0004fe3f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8723,	// (0x0004fe4b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb3,	// (0x000575db) cell_contacts_ai5_widget_pane_g_ParamLimits

0x872f,	// (0x0004fe57) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xae02,	// (0x0005252a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xec12,	// (0x0005633a) main_ai5_sk_pane_g1

0x380b,	// (0x0004af33) popup_query_code_window_g1

0xeb14,	// (0x0005623c) popup_fep_vkb_icf_pane

0x8b79,	// (0x000502a1) popup_fep_vtchi_icf_pane

0x8ce3,	// (0x0005040b) bg_icf_pane

0x8ce3,	// (0x0005040b) list_vkb_icf_pane

0x8cef,	// (0x00050417) bg_icf_pane_cp01

0x8d02,	// (0x0005042a) vtchi_icf_list_pane

0xec67,	// (0x0005638f) list_vkb_icf_pane_t1_ParamLimits

0xec67,	// (0x0005638f) list_vkb_icf_pane_t1

0x8d7e,	// (0x000504a6) vtchi_icf_list_pane_t1_ParamLimits

0x8d7e,	// (0x000504a6) vtchi_icf_list_pane_t1

0x8b34,	// (0x0005025c) popup_fep_ituss_window_ParamLimits

0x8b79,	// (0x000502a1) popup_fep_vtchi_icf_pane_ParamLimits

0x8ba2,	// (0x000502ca) ituss_keypad_pane_ParamLimits

0x23ef,	// (0x00049b17) ituss_sks_pane

0x8ce3,	// (0x0005040b) bg_icf_pane_ParamLimits

0xeaf9,	// (0x00056221) icf_edit_indi_pane_ParamLimits

0xeaf9,	// (0x00056221) icf_edit_indi_pane

0x8ce3,	// (0x0005040b) list_vkb_icf_pane_ParamLimits

0x8cef,	// (0x00050417) bg_icf_pane_cp01_ParamLimits

0x8b1f,	// (0x00050247) icf_edit_indi_pane_cp01_ParamLimits

0x8b1f,	// (0x00050247) icf_edit_indi_pane_cp01

0x8d02,	// (0x0005042a) vtchi_query_pane

0x7e76,	// (0x0004f59e) icf_edit_indi_pane_g1_ParamLimits

0x7e76,	// (0x0004f59e) icf_edit_indi_pane_g1

0xec7e,	// (0x000563a6) icf_edit_indi_pane_g2_ParamLimits

0xec7e,	// (0x000563a6) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x0005763a) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x0005763a) icf_edit_indi_pane_g

0xec92,	// (0x000563ba) icf_edit_indi_pane_t1

0x8d97,	// (0x000504bf) bg_input_focus_pane_cp042

0xad1d,	// (0x00052445) vtchi_button_pane

0x8da0,	// (0x000504c8) vtchi_query_pane_t1

0x8dae,	// (0x000504d6) vtchi_query_pane_t2

0x8dbc,	// (0x000504e4) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x00057629) vtchi_query_pane_t

0xa16a,	// (0x00051892) bg_button_pane_cp13

0x8dca,	// (0x000504f2) vtchi_button_pane_g1

0x25d8,	// (0x00049d00) ituss_sks_pane_g1

0x25e3,	// (0x00049d0b) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x00057630) ituss_sks_pane_g

0x8dd2,	// (0x000504fa) ituss_sks_pane_t1

0x8de0,	// (0x00050508) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x00057635) ituss_sks_pane_t

0x543f,	// (0x0004cb67) indicator_nsta_pane_cp_g1

0x5448,	// (0x0004cb70) indicator_nsta_pane_cp_g2

0x5450,	// (0x0004cb78) indicator_nsta_pane_cp_g3

0x5458,	// (0x0004cb80) indicator_nsta_pane_cp_g4

0x5448,	// (0x0004cb70) indicator_nsta_pane_cp_g5

0x5450,	// (0x0004cb78) indicator_nsta_pane_cp_g6

0x0005,

0xfa91,	// (0x000571b9) indicator_nsta_pane_cp_g

0xe091,	// (0x000557b9) cell_graphic2_pane_t2_ParamLimits

0xe091,	// (0x000557b9) cell_graphic2_pane_t2

0x0001,

0xfd9e,	// (0x000574c6) cell_graphic2_pane_t_ParamLimits

0xfd9e,	// (0x000574c6) cell_graphic2_pane_t

0xe0c9,	// (0x000557f1) cell_graphic2_control_pane_t1

0xb1da,	// (0x00052902) signal_pane_g3_ParamLimits

0xb1da,	// (0x00052902) signal_pane_g3

0xb1ee,	// (0x00052916) signal_pane_g4_ParamLimits

0xb1ee,	// (0x00052916) signal_pane_g4

0xeae3,	// (0x0005620b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xeae3,	// (0x0005620b) cell_ai5_widget_list_row_pane_t3

0x8ca2,	// (0x000503ca) cell_ituss_key_pane_t1_ParamLimits

0x8ca2,	// (0x000503ca) cell_ituss_key_pane_t1

0x3472,	// (0x0004ab9a) form_field_data_wide_pane_vc_t2_ParamLimits

0x3472,	// (0x0004ab9a) form_field_data_wide_pane_vc_t2

0x3486,	// (0x0004abae) form_field_data_wide_pane_vc_t3_ParamLimits

0x3486,	// (0x0004abae) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x00056f0c) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x00056f0c) form_field_data_wide_pane_vc_t

0x50dc,	// (0x0004c804) form_field_slider_wide_pane_vc_t3_ParamLimits

0x50dc,	// (0x0004c804) form_field_slider_wide_pane_vc_t3

0x51b2,	// (0x0004c8da) form_field_popup_wide_pane_vc_t2_ParamLimits

0x51b2,	// (0x0004c8da) form_field_popup_wide_pane_vc_t2

0x51c9,	// (0x0004c8f1) form_field_popup_wide_pane_vc_t3_ParamLimits

0x51c9,	// (0x0004c8f1) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa80,	// (0x000571a8) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x000571a8) form_field_popup_wide_pane_vc_t

0xc533,	// (0x00053c5b) aid_fshwr2_btn_pane_ParamLimits

0xc547,	// (0x00053c6f) aid_fshwr2_syb_pane_ParamLimits

0xc55b,	// (0x00053c83) aid_fshwr2_txt_pane_ParamLimits

0xae02,	// (0x0005252a) fshwr2_bg_pane_ParamLimits

0xc56b,	// (0x00053c93) fshwr2_func_candi_pane_ParamLimits

0xc58d,	// (0x00053cb5) fshwr2_hwr_syb_pane_ParamLimits

0xc5b1,	// (0x00053cd9) fshwr2_icf_pane_ParamLimits

0xf0d3,	// (0x000567fb) list_double_graphic_pane_vc_g4_ParamLimits

0xf0d3,	// (0x000567fb) list_double_graphic_pane_vc_g4

0x2494,	// (0x00049bbc) cell_ituss_key_pane_g3_ParamLimits

0x2494,	// (0x00049bbc) cell_ituss_key_pane_g3

0x25c6,	// (0x00049cee) cell_ituss_key_t5_ParamLimits

0x25c6,	// (0x00049cee) cell_ituss_key_t5

0xeb23,	// (0x0005624b) popup_fep_vkbss_window_ParamLimits

0xe283,	// (0x000559ab) aid_cell_ai5_quarter

0xec92,	// (0x000563ba) icf_edit_indi_pane_t1_ParamLimits

0xa87c,	// (0x00051fa4) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xa87c,	// (0x00051fa4) aid_tch_indicator_popup_pane_cp2

0xa88f,	// (0x00051fb7) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xa88f,	// (0x00051fb7) aid_tch_query_popup_data_pane_cp2

0x37b3,	// (0x0004aedb) aid_tch_query_popup_pane_ParamLimits

0x37b3,	// (0x0004aedb) aid_tch_query_popup_pane

0x37b3,	// (0x0004aedb) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x37b3,	// (0x0004aedb) aid_tch_query_popup_data_pane_cp1

0x2e37,	// (0x0004a55f) cell_fshwr2_syb_bg_pane_ParamLimits

0xc6a6,	// (0x00053dce) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc6ba,	// (0x00053de2) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeb14,	// (0x0005623c) popup_fep_vkb_icf_pane_ParamLimits

0xc4c7,	// (0x00053bef) bg_popup_fep_char_preview_window_g10

0xe326,	// (0x00055a4e) cell_ai5_widget_pane_g11_ParamLimits

0xe326,	// (0x00055a4e) cell_ai5_widget_pane_g11

0x811f,	// (0x0004f847) cell_ai5_widget_pane_g12_ParamLimits

0x811f,	// (0x0004f847) cell_ai5_widget_pane_g12

0xe332,	// (0x00055a5a) cell_ai5_widget_pane_g13_ParamLimits

0xe332,	// (0x00055a5a) cell_ai5_widget_pane_g13

0xe3ef,	// (0x00055b17) cell_ai5_widget_pane_t11_ParamLimits

0xe3ef,	// (0x00055b17) cell_ai5_widget_pane_t11

0xe401,	// (0x00055b29) cell_ai5_widget_pane_t12_ParamLimits

0xe401,	// (0x00055b29) cell_ai5_widget_pane_t12

0x24a0,	// (0x00049bc8) cell_ituss_key_pane_g4_ParamLimits

0x24a0,	// (0x00049bc8) cell_ituss_key_pane_g4

0x24bc,	// (0x00049be4) cell_ituss_key_pane_g5_ParamLimits

0x24bc,	// (0x00049be4) cell_ituss_key_pane_g5

0x24d8,	// (0x00049c00) cell_ituss_key_pane_g6_ParamLimits

0x24d8,	// (0x00049c00) cell_ituss_key_pane_g6

0x336d,	// (0x0004aa95) bg_icf_pane_g1

0xec1b,	// (0x00056343) bg_icf_pane_g2

0xec25,	// (0x0005634d) bg_icf_pane_g3

0xec2d,	// (0x00056355) bg_icf_pane_g4

0xec37,	// (0x0005635f) bg_icf_pane_g5

0xec41,	// (0x00056369) bg_icf_pane_g6

0xec4b,	// (0x00056373) bg_icf_pane_g7

0xec53,	// (0x0005637b) bg_icf_pane_g8

0xec5d,	// (0x00056385) bg_icf_pane_g9

0x0008,

0xfeee,	// (0x00057616) bg_icf_pane_g

0x8b8f,	// (0x000502b7) popup_hyb_candi_window_ParamLimits

0x8b8f,	// (0x000502b7) popup_hyb_candi_window

0x33e1,	// (0x0004ab09) bg_popup_sub_pane_cp01_ParamLimits

0x33e1,	// (0x0004ab09) bg_popup_sub_pane_cp01

0x8e1b,	// (0x00050543) entry_hyb_candi_pane_ParamLimits

0x8e1b,	// (0x00050543) entry_hyb_candi_pane

0x8e2a,	// (0x00050552) grid_hyb_candi_pane_ParamLimits

0x8e2a,	// (0x00050552) grid_hyb_candi_pane

0x8e3f,	// (0x00050567) grid_hyb_phrase_pane_ParamLimits

0x8e3f,	// (0x00050567) grid_hyb_phrase_pane

0x8e4e,	// (0x00050576) cell_hyb_candi_pane_ParamLimits

0x8e4e,	// (0x00050576) cell_hyb_candi_pane

0xad26,	// (0x0005244e) cell_hyb_candi_scroll_pane

0xe8c8,	// (0x00055ff0) cell_hyb_candi_pane_g1

0x8e6a,	// (0x00050592) cell_hyb_candi_pane_t1

0x8e78,	// (0x000505a0) cell_hyb_phrase_pane

0xe8c8,	// (0x00055ff0) cell_hyb_phrase_pane_g1

0x8e81,	// (0x000505a9) cell_hyb_phrase_pane_t1

0x8e8f,	// (0x000505b7) entry_hyb_candi_pane_t1

0x2b10,	// (0x0004a238) input_focus_pane_cp06

0x8e9d,	// (0x000505c5) cell_hyb_candi_scroll_pane_g1

0x8ea5,	// (0x000505cd) cell_hyb_candi_scroll_pane_g1_aid

0x8ead,	// (0x000505d5) cell_hyb_candi_scroll_pane_g2

0x8eb5,	// (0x000505dd) cell_hyb_candi_scroll_pane_g2_aid

0x8ebd,	// (0x000505e5) cell_hyb_candi_scroll_pane_g3

0x8ec5,	// (0x000505ed) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large

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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0003758c };

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
0xacca,	// (0x00042256) Screen

0xacd4,	// (0x00042260) application_window_ParamLimits

0xacd4,	// (0x00042260) application_window

0xc346,	// (0x000438d2) screen_g1

0xad0a,	// (0x00042296) area_bottom_pane_ParamLimits

0xad0a,	// (0x00042296) area_bottom_pane

0x5bef,	// (0x0003d17b) area_top_pane_ParamLimits

0x5bef,	// (0x0003d17b) area_top_pane

0x5c83,	// (0x0003d20f) main_pane_ParamLimits

0x5c83,	// (0x0003d20f) main_pane

0xc350,	// (0x000438dc) misc_graphics

0x153a,	// (0x00038ac6) battery_pane_ParamLimits

0x153a,	// (0x00038ac6) battery_pane

0xdea6,	// (0x00045432) bg_status_flat_pane_g8

0xdeae,	// (0x0004543a) bg_status_flat_pane_g9

0xd639,	// (0x00044bc5) context_pane_ParamLimits

0xd639,	// (0x00044bc5) context_pane

0x16a3,	// (0x00038c2f) navi_pane_ParamLimits

0x16a3,	// (0x00038c2f) navi_pane

0x1719,	// (0x00038ca5) signal_pane_ParamLimits

0x1719,	// (0x00038ca5) signal_pane

0x0008,

0xf879,	// (0x00046e05) bg_status_flat_pane_g

0x17a5,	// (0x00038d31) status_pane_g1_ParamLimits

0x17a5,	// (0x00038d31) status_pane_g1

0x17bb,	// (0x00038d47) status_pane_g2_ParamLimits

0x17bb,	// (0x00038d47) status_pane_g2

0xd69e,	// (0x00044c2a) status_pane_g3_ParamLimits

0xd69e,	// (0x00044c2a) status_pane_g3

0x0004,

0xf7a5,	// (0x00046d31) status_pane_g_ParamLimits

0xf7a5,	// (0x00046d31) status_pane_g

0x17c7,	// (0x00038d53) title_pane_ParamLimits

0x17c7,	// (0x00038d53) title_pane

0x1822,	// (0x00038dae) uni_indicator_pane_ParamLimits

0x1822,	// (0x00038dae) uni_indicator_pane

0xd57e,	// (0x00044b0a) bg_list_pane_ParamLimits

0xd57e,	// (0x00044b0a) bg_list_pane

0xb6f8,	// (0x00042c84) find_pane

0xb700,	// (0x00042c8c) listscroll_app_pane_ParamLimits

0xb700,	// (0x00042c8c) listscroll_app_pane

0xd59e,	// (0x00044b2a) listscroll_form_pane

0xb710,	// (0x00042c9c) listscroll_gen_pane_ParamLimits

0xb710,	// (0x00042c9c) listscroll_gen_pane

0x64e0,	// (0x0003da6c) listscroll_set_pane

0xe4b3,	// (0x00045a3f) main_idle_act_pane

0xd405,	// (0x00044991) main_idle_trad_pane

0xd405,	// (0x00044991) main_list_empty_pane

0xd3ea,	// (0x00044976) main_midp_pane

0xd5b8,	// (0x00044b44) main_pane_g1_ParamLimits

0xd5b8,	// (0x00044b44) main_pane_g1

0xb724,	// (0x00042cb0) popup_ai_message_window_ParamLimits

0xb724,	// (0x00042cb0) popup_ai_message_window

0xb7a9,	// (0x00042d35) popup_fep_china_uni_window_ParamLimits

0xb7a9,	// (0x00042d35) popup_fep_china_uni_window

0x65ca,	// (0x0003db56) popup_fep_japan_candidate_window_ParamLimits

0x65ca,	// (0x0003db56) popup_fep_japan_candidate_window

0x65e8,	// (0x0003db74) popup_fep_japan_predictive_window_ParamLimits

0x65e8,	// (0x0003db74) popup_fep_japan_predictive_window

0xb7e7,	// (0x00042d73) popup_find_window

0xb800,	// (0x00042d8c) popup_grid_graphic_window_ParamLimits

0xb800,	// (0x00042d8c) popup_grid_graphic_window

0x6647,	// (0x0003dbd3) popup_large_graphic_colour_window

0xb87c,	// (0x00042e08) popup_menu_window_ParamLimits

0xb87c,	// (0x00042e08) popup_menu_window

0xb9da,	// (0x00042f66) popup_note_image_window

0xb9a2,	// (0x00042f2e) popup_note_wait_window_ParamLimits

0xb9a2,	// (0x00042f2e) popup_note_wait_window

0xb9f0,	// (0x00042f7c) popup_note_window_ParamLimits

0xb9f0,	// (0x00042f7c) popup_note_window

0xba84,	// (0x00043010) popup_query_code_window_ParamLimits

0xba84,	// (0x00043010) popup_query_code_window

0x6819,	// (0x0003dda5) popup_query_data_code_window_ParamLimits

0x6819,	// (0x0003dda5) popup_query_data_code_window

0xbabc,	// (0x00043048) popup_query_data_window_ParamLimits

0xbabc,	// (0x00043048) popup_query_data_window

0xbb30,	// (0x000430bc) popup_query_sat_info_window_ParamLimits

0xbb30,	// (0x000430bc) popup_query_sat_info_window

0xbbbd,	// (0x00043149) popup_snote_single_graphic_window_ParamLimits

0xbbbd,	// (0x00043149) popup_snote_single_graphic_window

0xbbbd,	// (0x00043149) popup_snote_single_text_window_ParamLimits

0xbbbd,	// (0x00043149) popup_snote_single_text_window

0x6888,	// (0x0003de14) popup_sub_window_general

0x6996,	// (0x0003df22) popup_window_general_ParamLimits

0x6996,	// (0x0003df22) popup_window_general

0xd5c6,	// (0x00044b52) power_save_pane

0xb565,	// (0x00042af1) control_pane_g1_ParamLimits

0xb565,	// (0x00042af1) control_pane_g1

0xb58c,	// (0x00042b18) control_pane_g2_ParamLimits

0xb58c,	// (0x00042b18) control_pane_g2

0xd568,	// (0x00044af4) control_pane_g3_ParamLimits

0xd568,	// (0x00044af4) control_pane_g3

0x0007,

0xf78d,	// (0x00046d19) control_pane_g_ParamLimits

0xf78d,	// (0x00046d19) control_pane_g

0xb5ee,	// (0x00042b7a) control_pane_t1_ParamLimits

0xb5ee,	// (0x00042b7a) control_pane_t1

0xb651,	// (0x00042bdd) control_pane_t2_ParamLimits

0xb651,	// (0x00042bdd) control_pane_t2

0x0002,

0xf79e,	// (0x00046d2a) control_pane_t_ParamLimits

0xf79e,	// (0x00046d2a) control_pane_t

0xb4c0,	// (0x00042a4c) navi_navi_volume_pane_cp1

0xb4c8,	// (0x00042a54) status_small_icon_pane

0xd534,	// (0x00044ac0) status_small_pane_g1_ParamLimits

0xd534,	// (0x00044ac0) status_small_pane_g1

0xb4d0,	// (0x00042a5c) status_small_pane_g2_ParamLimits

0xb4d0,	// (0x00042a5c) status_small_pane_g2

0xb4dc,	// (0x00042a68) status_small_pane_g3_ParamLimits

0xb4dc,	// (0x00042a68) status_small_pane_g3

0xb4e8,	// (0x00042a74) status_small_pane_g4_ParamLimits

0xb4e8,	// (0x00042a74) status_small_pane_g4

0xb4f4,	// (0x00042a80) status_small_pane_g5_ParamLimits

0xb4f4,	// (0x00042a80) status_small_pane_g5

0xb500,	// (0x00042a8c) status_small_pane_g6_ParamLimits

0xb500,	// (0x00042a8c) status_small_pane_g6

0x0007,

0xf77c,	// (0x00046d08) status_small_pane_g_ParamLimits

0xf77c,	// (0x00046d08) status_small_pane_g

0xb52f,	// (0x00042abb) status_small_pane_t1

0xb551,	// (0x00042add) status_small_wait_pane_ParamLimits

0xb551,	// (0x00042add) status_small_wait_pane

0xb38d,	// (0x00042919) aid_levels_signal_ParamLimits

0xb38d,	// (0x00042919) aid_levels_signal

0xb3a5,	// (0x00042931) signal_pane_g1_ParamLimits

0xb3a5,	// (0x00042931) signal_pane_g1

0xb3c0,	// (0x0004294c) signal_pane_g2_ParamLimits

0xb3c0,	// (0x0004294c) signal_pane_g2

0x0003,

0xf70d,	// (0x00046c99) signal_pane_g_ParamLimits

0xf70d,	// (0x00046c99) signal_pane_g

0xceff,	// (0x0004448b) context_pane_g1

0xaeb4,	// (0x00042440) title_pane_g1

0xaeeb,	// (0x00042477) title_pane_t1

0xc366,	// (0x000438f2) title_pane_t2

0xc38c,	// (0x00043918) title_pane_t3

0x0002,

0xf557,	// (0x00046ae3) title_pane_t

0x1848,	// (0x00038dd4) aid_levels_battery_ParamLimits

0x1848,	// (0x00038dd4) aid_levels_battery

0x1864,	// (0x00038df0) battery_pane_g1_ParamLimits

0x1864,	// (0x00038df0) battery_pane_g1

0x1881,	// (0x00038e0d) battery_pane_g2_ParamLimits

0x1881,	// (0x00038e0d) battery_pane_g2

0x0001,

0xf7b0,	// (0x00046d3c) battery_pane_g_ParamLimits

0xf7b0,	// (0x00046d3c) battery_pane_g

0x1a9c,	// (0x00039028) uni_indicator_pane_g1

0x1ab2,	// (0x0003903e) uni_indicator_pane_g2

0x1ac8,	// (0x00039054) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x00046ead) uni_indicator_pane_g

0xd259,	// (0x000447e5) navi_icon_pane_ParamLimits

0xd259,	// (0x000447e5) navi_icon_pane

0xd1b4,	// (0x00044740) navi_midp_pane

0xd275,	// (0x00044801) navi_navi_pane

0xd27f,	// (0x0004480b) navi_text_pane_ParamLimits

0xd27f,	// (0x0004480b) navi_text_pane

0xc346,	// (0x000438d2) status_small_wait_pane_g1

0xc683,	// (0x00043c0f) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00046ea8) status_small_wait_pane_g

0xe447,	// (0x000459d3) navi_navi_icon_text_pane

0xe44f,	// (0x000459db) navi_navi_pane_g1_ParamLimits

0xe44f,	// (0x000459db) navi_navi_pane_g1

0xe461,	// (0x000459ed) navi_navi_pane_g2_ParamLimits

0xe461,	// (0x000459ed) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00046e76) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00046e76) navi_navi_pane_g

0xe473,	// (0x000459ff) navi_navi_tabs_pane

0xe47c,	// (0x00045a08) navi_navi_text_pane

0xe447,	// (0x000459d3) navi_navi_volume_pane

0xe423,	// (0x000459af) navi_text_pane_t1

0xe417,	// (0x000459a3) navi_icon_pane_g1

0xe36c,	// (0x000458f8) navi_navi_text_pane_t1

0x6c1e,	// (0x0003e1aa) navi_navi_volume_pane_g1

0x6c26,	// (0x0003e1b2) volume_small_pane

0xe34a,	// (0x000458d6) navi_navi_icon_text_pane_g1

0xe352,	// (0x000458de) navi_navi_icon_text_pane_t1

0xd275,	// (0x00044801) navi_tabs_2_long_pane

0xd275,	// (0x00044801) navi_tabs_2_pane

0xd275,	// (0x00044801) navi_tabs_3_long_pane

0xd275,	// (0x00044801) navi_tabs_3_pane

0xd275,	// (0x00044801) navi_tabs_4_pane

0x6bfe,	// (0x0003e18a) tabs_2_active_pane_ParamLimits

0x6bfe,	// (0x0003e18a) tabs_2_active_pane

0x6c0e,	// (0x0003e19a) tabs_2_passive_pane_ParamLimits

0x6c0e,	// (0x0003e19a) tabs_2_passive_pane

0x6bcc,	// (0x0003e158) tabs_3_active_pane_ParamLimits

0x6bcc,	// (0x0003e158) tabs_3_active_pane

0x6bdc,	// (0x0003e168) tabs_3_passive_pane_ParamLimits

0x6bdc,	// (0x0003e168) tabs_3_passive_pane

0x6bed,	// (0x0003e179) tabs_3_passive_pane_cp_ParamLimits

0x6bed,	// (0x0003e179) tabs_3_passive_pane_cp

0x6b88,	// (0x0003e114) tabs_4_active_pane_ParamLimits

0x6b88,	// (0x0003e114) tabs_4_active_pane

0x6b99,	// (0x0003e125) tabs_4_passive_pane_ParamLimits

0x6b99,	// (0x0003e125) tabs_4_passive_pane

0x6baa,	// (0x0003e136) tabs_4_passive_pane_cp_ParamLimits

0x6baa,	// (0x0003e136) tabs_4_passive_pane_cp

0x6bbb,	// (0x0003e147) tabs_4_passive_pane_cp2_ParamLimits

0x6bbb,	// (0x0003e147) tabs_4_passive_pane_cp2

0x6b68,	// (0x0003e0f4) tabs_2_long_active_pane_ParamLimits

0x6b68,	// (0x0003e0f4) tabs_2_long_active_pane

0x6b78,	// (0x0003e104) tabs_2_long_passive_pane_ParamLimits

0x6b78,	// (0x0003e104) tabs_2_long_passive_pane

0x6b35,	// (0x0003e0c1) tabs_3_long_active_pane_ParamLimits

0x6b35,	// (0x0003e0c1) tabs_3_long_active_pane

0x6b46,	// (0x0003e0d2) tabs_3_long_passive_pane_ParamLimits

0x6b46,	// (0x0003e0d2) tabs_3_long_passive_pane

0x6b57,	// (0x0003e0e3) tabs_3_long_passive_pane_cp_ParamLimits

0x6b57,	// (0x0003e0e3) tabs_3_long_passive_pane_cp

0x6adb,	// (0x0003e067) volume_small_pane_g1

0x6ae4,	// (0x0003e070) volume_small_pane_g2

0x6aed,	// (0x0003e079) volume_small_pane_g3

0x6af6,	// (0x0003e082) volume_small_pane_g4

0x6aff,	// (0x0003e08b) volume_small_pane_g5

0x6b08,	// (0x0003e094) volume_small_pane_g6

0x6b11,	// (0x0003e09d) volume_small_pane_g7

0x6b1a,	// (0x0003e0a6) volume_small_pane_g8

0x6b23,	// (0x0003e0af) volume_small_pane_g9

0x6b2c,	// (0x0003e0b8) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00046e42) volume_small_pane_g

0xc39e,	// (0x0004392a) bg_active_tab_pane_cp2_ParamLimits

0xc39e,	// (0x0004392a) bg_active_tab_pane_cp2

0xc3ac,	// (0x00043938) tabs_3_active_pane_g1

0xaf77,	// (0x00042503) tabs_3_active_pane_t1

0xc39e,	// (0x0004392a) bg_passive_tab_pane_cp2_ParamLimits

0xc39e,	// (0x0004392a) bg_passive_tab_pane_cp2

0xc3ac,	// (0x00043938) tabs_3_passive_pane_g1

0xaf77,	// (0x00042503) tabs_3_passive_pane_t1

0xc39e,	// (0x0004392a) bg_active_tab_pane_cp3_ParamLimits

0xc39e,	// (0x0004392a) bg_active_tab_pane_cp3

0xc3b4,	// (0x00043940) tabs_4_active_pane_g1

0xaf89,	// (0x00042515) tabs_4_active_pane_t1

0xc39e,	// (0x0004392a) bg_passive_tab_pane_cp3_ParamLimits

0xc39e,	// (0x0004392a) bg_passive_tab_pane_cp3

0xc3b4,	// (0x00043940) tabs_4_1_passive_pane_g1

0xaf89,	// (0x00042515) tabs_4_1_passive_pane_t1

0xd3ea,	// (0x00044976) list_highlight_pane_cp2

0x1bb6,	// (0x00039142) list_set_pane_ParamLimits

0x1bb6,	// (0x00039142) list_set_pane

0x1c44,	// (0x000391d0) main_pane_set_t1_ParamLimits

0x1c44,	// (0x000391d0) main_pane_set_t1

0x1c64,	// (0x000391f0) main_pane_set_t2_ParamLimits

0x1c64,	// (0x000391f0) main_pane_set_t2

0x1c78,	// (0x00039204) main_pane_set_t3_ParamLimits

0x1c78,	// (0x00039204) main_pane_set_t3

0x1c8a,	// (0x00039216) main_pane_set_t4_ParamLimits

0x1c8a,	// (0x00039216) main_pane_set_t4

0x0003,

0xf986,	// (0x00046f12) main_pane_set_t_ParamLimits

0xf986,	// (0x00046f12) main_pane_set_t

0x1c9c,	// (0x00039228) setting_code_pane

0x1ca4,	// (0x00039230) setting_slider_graphic_pane

0x1ca4,	// (0x00039230) setting_slider_pane

0x1ca4,	// (0x00039230) setting_text_pane

0x1ca4,	// (0x00039230) setting_volume_pane

0xaf9b,	// (0x00042527) volume_set_pane

0xc3bc,	// (0x00043948) bg_set_opt_pane_cp

0x5e8c,	// (0x0003d418) setting_slider_pane_t1

0xafa3,	// (0x0004252f) setting_slider_pane_t2

0xafbc,	// (0x00042548) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00046aea) setting_slider_pane_t

0x5ed5,	// (0x0003d461) slider_set_pane

0xc350,	// (0x000438dc) bg_set_opt_pane_cp2

0xc3ca,	// (0x00043956) setting_slider_graphic_pane_g1

0xafd3,	// (0x0004255f) setting_slider_graphic_pane_t1

0xafe2,	// (0x0004256e) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00046af1) setting_slider_graphic_pane_t

0x5f09,	// (0x0003d495) slider_set_pane_cp

0xc350,	// (0x000438dc) input_focus_pane_cp1

0xe8df,	// (0x00045e6b) list_set_text_pane

0xc346,	// (0x000438d2) setting_text_pane_g1

0xc350,	// (0x000438dc) input_focus_pane_cp2

0xc346,	// (0x000438d2) setting_code_pane_g1

0xc3d3,	// (0x0004395f) setting_code_pane_t1

0x8c83,	// (0x0004020f) set_text_pane_t1_ParamLimits

0x8c83,	// (0x0004020f) set_text_pane_t1

0xc9d7,	// (0x00043f63) set_opt_bg_pane_g1

0xc9df,	// (0x00043f6b) set_opt_bg_pane_g2

0x1b79,	// (0x00039105) set_opt_bg_pane_g3

0xc9ef,	// (0x00043f7b) set_opt_bg_pane_g4

0xc9f7,	// (0x00043f83) set_opt_bg_pane_g5

0xc9ff,	// (0x00043f8b) set_opt_bg_pane_g6

0xe8d7,	// (0x00045e63) set_opt_bg_pane_g7

0x1b81,	// (0x0003910d) set_opt_bg_pane_g8

0x1b89,	// (0x00039115) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00046eff) set_opt_bg_pane_g

0xe8ca,	// (0x00045e56) slider_set_pane_g1

0x6cb8,	// (0x0003e244) slider_set_pane_g2

0x0006,

0xf964,	// (0x00046ef0) slider_set_pane_g

0x6c2f,	// (0x0003e1bb) volume_set_pane_g1

0xbd24,	// (0x000432b0) volume_set_pane_g2

0xbd2c,	// (0x000432b8) volume_set_pane_g3

0xbd34,	// (0x000432c0) volume_set_pane_g4

0xbd3c,	// (0x000432c8) volume_set_pane_g5

0xbd44,	// (0x000432d0) volume_set_pane_g6

0xbd4c,	// (0x000432d8) volume_set_pane_g7

0xbd54,	// (0x000432e0) volume_set_pane_g8

0xbd5c,	// (0x000432e8) volume_set_pane_g9

0xbd64,	// (0x000432f0) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00046ec8) volume_set_pane_g

0xaff1,	// (0x0004257d) indicator_pane_ParamLimits

0xaff1,	// (0x0004257d) indicator_pane

0xb019,	// (0x000425a5) main_idle_pane_g2_ParamLimits

0xb019,	// (0x000425a5) main_idle_pane_g2

0xb047,	// (0x000425d3) main_pane_idle_g1_ParamLimits

0xb047,	// (0x000425d3) main_pane_idle_g1

0xc3e1,	// (0x0004396d) popup_clock_digital_analogue_window_ParamLimits

0xc3e1,	// (0x0004396d) popup_clock_digital_analogue_window

0xb06c,	// (0x000425f8) soft_indicator_pane_ParamLimits

0xb06c,	// (0x000425f8) soft_indicator_pane

0xb086,	// (0x00042612) wallpaper_pane_ParamLimits

0xb086,	// (0x00042612) wallpaper_pane

0xc346,	// (0x000438d2) wallpaper_pane_g1

0xb098,	// (0x00042624) indicator_pane_g1_ParamLimits

0xb098,	// (0x00042624) indicator_pane_g1

0xea2b,	// (0x00045fb7) navi_navi_icon_text_pane_srt_g1

0xc40f,	// (0x0004399b) soft_indicator_pane_t1

0xc429,	// (0x000439b5) aid_ps_area_pane

0xb0b1,	// (0x0004263d) aid_ps_clock_pane

0xc43a,	// (0x000439c6) aid_ps_indicator_pane

0xc446,	// (0x000439d2) indicator_ps_pane_ParamLimits

0xc446,	// (0x000439d2) indicator_ps_pane

0xc455,	// (0x000439e1) power_save_pane_g1_ParamLimits

0xc455,	// (0x000439e1) power_save_pane_g1

0xc461,	// (0x000439ed) power_save_pane_g2_ParamLimits

0xc461,	// (0x000439ed) power_save_pane_g2

0x5aeb,	// (0x0003d077) aid_navinavi_width_pane

0xc429,	// (0x000439b5) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00046af6) power_save_pane_g_ParamLimits

0xf56a,	// (0x00046af6) power_save_pane_g

0xc46f,	// (0x000439fb) power_save_pane_t1_ParamLimits

0xc46f,	// (0x000439fb) power_save_pane_t1

0xb0b1,	// (0x0004263d) aid_ps_clock_pane_ParamLimits

0xc43a,	// (0x000439c6) aid_ps_indicator_pane_ParamLimits

0xc481,	// (0x00043a0d) power_save_pane_t4_ParamLimits

0xc481,	// (0x00043a0d) power_save_pane_t4

0x0001,

0xf56f,	// (0x00046afb) power_save_pane_t_ParamLimits

0xf56f,	// (0x00046afb) power_save_pane_t

0xc4ab,	// (0x00043a37) power_save_t3_ParamLimits

0xc4ab,	// (0x00043a37) power_save_t3

0xc496,	// (0x00043a22) power_save_t2_ParamLimits

0xc496,	// (0x00043a22) power_save_t2

0xc4c0,	// (0x00043a4c) indicator_ps_pane_g1

0xb0bd,	// (0x00042649) ai_gene_pane_ParamLimits

0xb0bd,	// (0x00042649) ai_gene_pane

0xb0d4,	// (0x00042660) ai_links_pane_ParamLimits

0xb0d4,	// (0x00042660) ai_links_pane

0xb0ec,	// (0x00042678) indicator_pane_cp1_ParamLimits

0xb0ec,	// (0x00042678) indicator_pane_cp1

0xb0fb,	// (0x00042687) main_pane_idle_g1_cp_ParamLimits

0xb0fb,	// (0x00042687) main_pane_idle_g1_cp

0xc4c9,	// (0x00043a55) popup_ai_links_title_window

0xb113,	// (0x0004269f) soft_indicator_pane_cp1_ParamLimits

0xb113,	// (0x0004269f) soft_indicator_pane_cp1

0xe732,	// (0x00045cbe) ai_links_pane_g1

0xe73b,	// (0x00045cc7) grid_ai_links_pane

0x1a93,	// (0x0003901f) ai_gene_pane_1

0xe720,	// (0x00045cac) ai_gene_pane_2

0xe729,	// (0x00045cb5) list_highlight_pane_cp4

0x1a79,	// (0x00039005) cell_ai_link_pane_ParamLimits

0x1a79,	// (0x00039005) cell_ai_link_pane

0xe718,	// (0x00045ca4) cell_ai_link_pane_g1

0xc683,	// (0x00043c0f) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x00046ea3) cell_ai_link_pane_g

0xc350,	// (0x000438dc) grid_highlight_cp2

0xc350,	// (0x000438dc) bg_popup_sub_pane_cp1

0xc4e0,	// (0x00043a6c) popup_ai_links_title_window_t1

0xe66a,	// (0x00045bf6) ai_gene_pane_1_g1_ParamLimits

0xe66a,	// (0x00045bf6) ai_gene_pane_1_g1

0xe676,	// (0x00045c02) ai_gene_pane_1_g2_ParamLimits

0xe676,	// (0x00045c02) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00046e99) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00046e99) ai_gene_pane_1_g

0xe683,	// (0x00045c0f) ai_gene_pane_1_t1_ParamLimits

0xe683,	// (0x00045c0f) ai_gene_pane_1_t1

0xe6b7,	// (0x00045c43) grid_ai_soft_ind_pane

0xe655,	// (0x00045be1) ai_gene_pane_2_t1_ParamLimits

0xe655,	// (0x00045be1) ai_gene_pane_2_t1

0xb127,	// (0x000426b3) main_pane_empty_t1_ParamLimits

0xb127,	// (0x000426b3) main_pane_empty_t1

0xb13f,	// (0x000426cb) main_pane_empty_t2_ParamLimits

0xb13f,	// (0x000426cb) main_pane_empty_t2

0xb154,	// (0x000426e0) main_pane_empty_t3_ParamLimits

0xb154,	// (0x000426e0) main_pane_empty_t3

0xb166,	// (0x000426f2) main_pane_empty_t4_ParamLimits

0xb166,	// (0x000426f2) main_pane_empty_t4

0xb178,	// (0x00042704) main_pane_empty_t5_ParamLimits

0xb178,	// (0x00042704) main_pane_empty_t5

0x0004,

0xf574,	// (0x00046b00) main_pane_empty_t_ParamLimits

0xf574,	// (0x00046b00) main_pane_empty_t

0xca28,	// (0x00043fb4) bg_popup_window_pane_ParamLimits

0xca28,	// (0x00043fb4) bg_popup_window_pane

0xe37a,	// (0x00045906) find_popup_pane_cp2_ParamLimits

0xe37a,	// (0x00045906) find_popup_pane_cp2

0xe386,	// (0x00045912) heading_pane_ParamLimits

0xe386,	// (0x00045912) heading_pane

0xc350,	// (0x000438dc) bg_popup_sub_pane

0x19fa,	// (0x00038f86) bg_popup_window_pane_g1_ParamLimits

0x19fa,	// (0x00038f86) bg_popup_window_pane_g1

0x1a09,	// (0x00038f95) bg_popup_window_pane_g2_ParamLimits

0x1a09,	// (0x00038f95) bg_popup_window_pane_g2

0x1a15,	// (0x00038fa1) bg_popup_window_pane_g3_ParamLimits

0x1a15,	// (0x00038fa1) bg_popup_window_pane_g3

0x1a21,	// (0x00038fad) bg_popup_window_pane_g4_ParamLimits

0x1a21,	// (0x00038fad) bg_popup_window_pane_g4

0x1a30,	// (0x00038fbc) bg_popup_window_pane_g5_ParamLimits

0x1a30,	// (0x00038fbc) bg_popup_window_pane_g5

0x1a40,	// (0x00038fcc) bg_popup_window_pane_g6_ParamLimits

0x1a40,	// (0x00038fcc) bg_popup_window_pane_g6

0x1a4c,	// (0x00038fd8) bg_popup_window_pane_g7_ParamLimits

0x1a4c,	// (0x00038fd8) bg_popup_window_pane_g7

0x1a5b,	// (0x00038fe7) bg_popup_window_pane_g8_ParamLimits

0x1a5b,	// (0x00038fe7) bg_popup_window_pane_g8

0x1a6a,	// (0x00038ff6) bg_popup_window_pane_g9_ParamLimits

0x1a6a,	// (0x00038ff6) bg_popup_window_pane_g9

0xe360,	// (0x000458ec) bg_popup_window_pane_g10_ParamLimits

0xe360,	// (0x000458ec) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00046e61) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00046e61) bg_popup_window_pane_g

0xe301,	// (0x0004588d) bg_popup_heading_pane_ParamLimits

0xe301,	// (0x0004588d) bg_popup_heading_pane

0x6f73,	// (0x0003e4ff) tabs_4_passive_pane_cp_srt_ParamLimits

0x6f73,	// (0x0003e4ff) tabs_4_passive_pane_cp_srt

0x6f85,	// (0x0003e511) tabs_4_passive_pane_srt_ParamLimits

0xe315,	// (0x000458a1) heading_pane_g2

0x6f85,	// (0x0003e511) tabs_4_passive_pane_srt

0xd81c,	// (0x00044da8) bg_passive_tab_pane_cp3_srt_ParamLimits

0xd81c,	// (0x00044da8) bg_passive_tab_pane_cp3_srt

0xe31d,	// (0x000458a9) heading_pane_t1_ParamLimits

0xe31d,	// (0x000458a9) heading_pane_t1

0xe334,	// (0x000458c0) heading_pane_t2_ParamLimits

0xe334,	// (0x000458c0) heading_pane_t2

0x0001,

0xf8d0,	// (0x00046e5c) heading_pane_t_ParamLimits

0xf8d0,	// (0x00046e5c) heading_pane_t

0xde6e,	// (0x000453fa) bg_popup_heading_pane_g1

0xdeff,	// (0x0004548b) bg_popup_heading_pane_g2

0xdf07,	// (0x00045493) bg_popup_heading_pane_g3

0xdf0f,	// (0x0004549b) bg_popup_heading_pane_g4

0xdf17,	// (0x000454a3) bg_popup_heading_pane_g5

0xdf1f,	// (0x000454ab) bg_popup_heading_pane_g6

0xdf27,	// (0x000454b3) bg_popup_heading_pane_g7

0xdf2f,	// (0x000454bb) bg_popup_heading_pane_g8

0xdf37,	// (0x000454c3) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00046e18) bg_popup_heading_pane_g

0xd790,	// (0x00044d1c) bg_popup_sub_pane_g1

0xd7a0,	// (0x00044d2c) bg_popup_sub_pane_g2

0xd798,	// (0x00044d24) bg_popup_sub_pane_g3

0xd7b0,	// (0x00044d3c) bg_popup_sub_pane_g4

0xd7a8,	// (0x00044d34) bg_popup_sub_pane_g5

0xd7b8,	// (0x00044d44) bg_popup_sub_pane_g6

0xd7c0,	// (0x00044d4c) bg_popup_sub_pane_g7

0xd7d0,	// (0x00044d5c) bg_popup_sub_pane_g8

0xd7c8,	// (0x00044d54) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00046df2) bg_popup_sub_pane_g

0xc39e,	// (0x0004392a) bg_popup_window_pane_cp5_ParamLimits

0xc39e,	// (0x0004392a) bg_popup_window_pane_cp5

0xc4fd,	// (0x00043a89) popup_note_window_g1_ParamLimits

0xc4fd,	// (0x00043a89) popup_note_window_g1

0xc509,	// (0x00043a95) popup_note_window_t1_ParamLimits

0xc509,	// (0x00043a95) popup_note_window_t1

0xc51f,	// (0x00043aab) popup_note_window_t2_ParamLimits

0xc51f,	// (0x00043aab) popup_note_window_t2

0xc535,	// (0x00043ac1) popup_note_window_t3_ParamLimits

0xc535,	// (0x00043ac1) popup_note_window_t3

0xc54b,	// (0x00043ad7) popup_note_window_t4_ParamLimits

0xc54b,	// (0x00043ad7) popup_note_window_t4

0xc573,	// (0x00043aff) popup_note_window_t5_ParamLimits

0xc573,	// (0x00043aff) popup_note_window_t5

0x0004,

0xf57f,	// (0x00046b0b) popup_note_window_t_ParamLimits

0xf57f,	// (0x00046b0b) popup_note_window_t

0xc597,	// (0x00043b23) bg_popup_window_pane_cp6_ParamLimits

0xc597,	// (0x00043b23) bg_popup_window_pane_cp6

0xddea,	// (0x00045376) popup_note_image_window_g1_ParamLimits

0xddea,	// (0x00045376) popup_note_image_window_g1

0xddf6,	// (0x00045382) popup_note_image_window_g2_ParamLimits

0xddf6,	// (0x00045382) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00046de6) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00046de6) popup_note_image_window_g

0xde0f,	// (0x0004539b) popup_note_image_window_t1_ParamLimits

0xde0f,	// (0x0004539b) popup_note_image_window_t1

0xde28,	// (0x000453b4) popup_note_image_window_t2_ParamLimits

0xde28,	// (0x000453b4) popup_note_image_window_t2

0xde41,	// (0x000453cd) popup_note_image_window_t3_ParamLimits

0xde41,	// (0x000453cd) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00046deb) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00046deb) popup_note_image_window_t

0xdccf,	// (0x0004525b) bg_popup_window_pane_cp7_ParamLimits

0xdccf,	// (0x0004525b) bg_popup_window_pane_cp7

0xdcff,	// (0x0004528b) popup_note_wait_window_g1_ParamLimits

0xdcff,	// (0x0004528b) popup_note_wait_window_g1

0xdd0b,	// (0x00045297) popup_note_wait_window_g2_ParamLimits

0xdd0b,	// (0x00045297) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00046dd4) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00046dd4) popup_note_wait_window_g

0xdd23,	// (0x000452af) popup_note_wait_window_t1_ParamLimits

0xdd23,	// (0x000452af) popup_note_wait_window_t1

0xdd4a,	// (0x000452d6) popup_note_wait_window_t2_ParamLimits

0xdd4a,	// (0x000452d6) popup_note_wait_window_t2

0xdd67,	// (0x000452f3) popup_note_wait_window_t3_ParamLimits

0xdd67,	// (0x000452f3) popup_note_wait_window_t3

0xdd7a,	// (0x00045306) popup_note_wait_window_t4_ParamLimits

0xdd7a,	// (0x00045306) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00046ddb) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00046ddb) popup_note_wait_window_t

0xdd9f,	// (0x0004532b) wait_bar_pane_ParamLimits

0xdd9f,	// (0x0004532b) wait_bar_pane

0xc350,	// (0x000438dc) wait_anim_pane

0xc350,	// (0x000438dc) wait_border_pane

0xc346,	// (0x000438d2) wait_anim_pane_g1

0xc346,	// (0x000438d2) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00046c94) wait_anim_pane_g

0xdc7f,	// (0x0004520b) wait_border_pane_g1

0xdc88,	// (0x00045214) wait_border_pane_g2

0xdc91,	// (0x0004521d) wait_border_pane_g3

0x0002,

0xf841,	// (0x00046dcd) wait_border_pane_g

0xdaef,	// (0x0004507b) bg_popup_window_pane_cp16_ParamLimits

0xdaef,	// (0x0004507b) bg_popup_window_pane_cp16

0xdbef,	// (0x0004517b) indicator_popup_pane_cp4_ParamLimits

0xdbef,	// (0x0004517b) indicator_popup_pane_cp4

0xdc03,	// (0x0004518f) popup_query_data_window_t1_ParamLimits

0xdc03,	// (0x0004518f) popup_query_data_window_t1

0xdc15,	// (0x000451a1) popup_query_data_window_t2_ParamLimits

0xdc15,	// (0x000451a1) popup_query_data_window_t2

0xdc2e,	// (0x000451ba) popup_query_data_window_t3_ParamLimits

0xdc2e,	// (0x000451ba) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00046dc6) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00046dc6) popup_query_data_window_t

0xdc48,	// (0x000451d4) query_popup_data_pane_ParamLimits

0xdc48,	// (0x000451d4) query_popup_data_pane

0xdc5c,	// (0x000451e8) query_popup_data_pane_cp1_ParamLimits

0xdc5c,	// (0x000451e8) query_popup_data_pane_cp1

0xdaef,	// (0x0004507b) bg_popup_window_pane_cp10_ParamLimits

0xdaef,	// (0x0004507b) bg_popup_window_pane_cp10

0xdb21,	// (0x000450ad) indicator_popup_pane_ParamLimits

0xdb21,	// (0x000450ad) indicator_popup_pane

0xdb43,	// (0x000450cf) popup_query_code_window_t1_ParamLimits

0xdb43,	// (0x000450cf) popup_query_code_window_t1

0xdb5d,	// (0x000450e9) popup_query_code_window_t2_ParamLimits

0xdb5d,	// (0x000450e9) popup_query_code_window_t2

0xdba6,	// (0x00045132) popup_query_code_window_t3_ParamLimits

0xdba6,	// (0x00045132) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00046dbf) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00046dbf) popup_query_code_window_t

0xdbd5,	// (0x00045161) query_popup_pane_ParamLimits

0xdbd5,	// (0x00045161) query_popup_pane

0xc597,	// (0x00043b23) bg_popup_window_pane_cp15_ParamLimits

0xc597,	// (0x00043b23) bg_popup_window_pane_cp15

0xc5b5,	// (0x00043b41) indicator_popup_pane_cp1_ParamLimits

0xc5b5,	// (0x00043b41) indicator_popup_pane_cp1

0xc5c8,	// (0x00043b54) indicator_popup_pane_cp2_ParamLimits

0xc5c8,	// (0x00043b54) indicator_popup_pane_cp2

0xc5db,	// (0x00043b67) popup_query_data_code_window_g1_ParamLimits

0xc5db,	// (0x00043b67) popup_query_data_code_window_g1

0xc5ee,	// (0x00043b7a) popup_query_data_code_window_t1_ParamLimits

0xc5ee,	// (0x00043b7a) popup_query_data_code_window_t1

0xc600,	// (0x00043b8c) popup_query_data_code_window_t2_ParamLimits

0xc600,	// (0x00043b8c) popup_query_data_code_window_t2

0xc612,	// (0x00043b9e) popup_query_data_code_window_t3_ParamLimits

0xc612,	// (0x00043b9e) popup_query_data_code_window_t3

0xc628,	// (0x00043bb4) popup_query_data_code_window_t4_ParamLimits

0xc628,	// (0x00043bb4) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00046b16) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00046b16) popup_query_data_code_window_t

0x69f6,	// (0x0003df82) list_single_midp_graphic_pane_g3

0xc640,	// (0x00043bcc) query_popup_data_pane_cp2_ParamLimits

0xc653,	// (0x00043bdf) query_popup_pane_cp2_ParamLimits

0xc653,	// (0x00043bdf) query_popup_pane_cp2

0xc350,	// (0x000438dc) bg_popup_window_pane_cp11

0xdae7,	// (0x00045073) heading_pane_cp5

0xc6e2,	// (0x00043c6e) listscroll_popup_info_pane

0xc350,	// (0x000438dc) input_focus_pane_cp3

0xc666,	// (0x00043bf2) query_popup_pane_t1

0xc674,	// (0x00043c00) list_popup_info_pane_ParamLimits

0xc674,	// (0x00043c00) list_popup_info_pane

0xc683,	// (0x00043c0f) listscroll_popup_info_pane_g1

0xc68b,	// (0x00043c17) scroll_pane_cp7

0xc693,	// (0x00043c1f) popup_info_list_pane_t1_ParamLimits

0xc693,	// (0x00043c1f) popup_info_list_pane_t1

0xc6ad,	// (0x00043c39) popup_info_list_pane_t2_ParamLimits

0xc6ad,	// (0x00043c39) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00046b1f) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00046b1f) popup_info_list_pane_t

0xc350,	// (0x000438dc) bg_popup_window_pane_cp12

0xea45,	// (0x00045fd1) find_popup_pane

0xc3bc,	// (0x00043948) bg_popup_window_pane_cp3

0xc6c7,	// (0x00043c53) heading_pane_cp3

0xc6d3,	// (0x00043c5f) listscroll_popup_graphic_pane

0xc350,	// (0x000438dc) bg_popup_window_pane_cp4

0xb1da,	// (0x00042766) heading_pane_cp4

0xc6e2,	// (0x00043c6e) listscroll_popup_colour_pane

0xc6ea,	// (0x00043c76) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc6ea,	// (0x00043c76) cell_large_graphic_colour_none_popup_pane

0xb1e2,	// (0x0004276e) grid_large_graphic_colour_popup_pane_ParamLimits

0xb1e2,	// (0x0004276e) grid_large_graphic_colour_popup_pane

0xc6fa,	// (0x00043c86) listscroll_popup_colour_pane_g1_ParamLimits

0xc6fa,	// (0x00043c86) listscroll_popup_colour_pane_g1

0xc711,	// (0x00043c9d) listscroll_popup_colour_pane_g2_ParamLimits

0xc711,	// (0x00043c9d) listscroll_popup_colour_pane_g2

0xc728,	// (0x00043cb4) listscroll_popup_colour_pane_g3_ParamLimits

0xc728,	// (0x00043cb4) listscroll_popup_colour_pane_g3

0xb1fe,	// (0x0004278a) listscroll_popup_colour_pane_g4_ParamLimits

0xb1fe,	// (0x0004278a) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00046b24) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00046b24) listscroll_popup_colour_pane_g

0xc738,	// (0x00043cc4) scroll_pane_cp6_ParamLimits

0xc738,	// (0x00043cc4) scroll_pane_cp6

0xb20d,	// (0x00042799) cell_large_graphic_colour_popup_pane_ParamLimits

0xb20d,	// (0x00042799) cell_large_graphic_colour_popup_pane

0xc74a,	// (0x00043cd6) cell_large_graphic_colour_none_popup_pane_t1

0xc350,	// (0x000438dc) grid_highlight_pane_cp5

0xc759,	// (0x00043ce5) cell_large_graphic_colour_popup_pane_g1

0xc761,	// (0x00043ced) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00046b2d) cell_large_graphic_colour_popup_pane_g

0xc769,	// (0x00043cf5) cell_large_graphic_colour_popup_pane_g2_copy1

0xc772,	// (0x00043cfe) grid_highlight_pane_cp4

0xc77a,	// (0x00043d06) bg_popup_window_pane_cp8_ParamLimits

0xc77a,	// (0x00043d06) bg_popup_window_pane_cp8

0xc795,	// (0x00043d21) popup_snote_single_text_window_g1_ParamLimits

0xc795,	// (0x00043d21) popup_snote_single_text_window_g1

0xc7a7,	// (0x00043d33) popup_snote_single_text_window_t1_ParamLimits

0xc7a7,	// (0x00043d33) popup_snote_single_text_window_t1

0xc7ba,	// (0x00043d46) popup_snote_single_text_window_t2_ParamLimits

0xc7ba,	// (0x00043d46) popup_snote_single_text_window_t2

0xc7cd,	// (0x00043d59) popup_snote_single_text_window_t3_ParamLimits

0xc7cd,	// (0x00043d59) popup_snote_single_text_window_t3

0xc806,	// (0x00043d92) popup_snote_single_text_window_t4_ParamLimits

0xc806,	// (0x00043d92) popup_snote_single_text_window_t4

0xc83a,	// (0x00043dc6) popup_snote_single_text_window_t5_ParamLimits

0xc83a,	// (0x00043dc6) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00046b32) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00046b32) popup_snote_single_text_window_t

0xc869,	// (0x00043df5) bg_popup_window_pane_cp9_ParamLimits

0xc869,	// (0x00043df5) bg_popup_window_pane_cp9

0xc795,	// (0x00043d21) popup_snote_single_graphic_window_g1_ParamLimits

0xc795,	// (0x00043d21) popup_snote_single_graphic_window_g1

0xc877,	// (0x00043e03) popup_snote_single_graphic_window_g2_ParamLimits

0xc877,	// (0x00043e03) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00046b3d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00046b3d) popup_snote_single_graphic_window_g

0xc883,	// (0x00043e0f) popup_snote_single_graphic_window_t1_ParamLimits

0xc883,	// (0x00043e0f) popup_snote_single_graphic_window_t1

0xc896,	// (0x00043e22) popup_snote_single_graphic_window_t2_ParamLimits

0xc896,	// (0x00043e22) popup_snote_single_graphic_window_t2

0xc7cd,	// (0x00043d59) popup_snote_single_graphic_window_t3_ParamLimits

0xc7cd,	// (0x00043d59) popup_snote_single_graphic_window_t3

0xc806,	// (0x00043d92) popup_snote_single_graphic_window_t4_ParamLimits

0xc806,	// (0x00043d92) popup_snote_single_graphic_window_t4

0xc83a,	// (0x00043dc6) popup_snote_single_graphic_window_t5_ParamLimits

0xc83a,	// (0x00043dc6) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00046b42) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00046b42) popup_snote_single_graphic_window_t

0xe9d1,	// (0x00045f5d) grid_graphic_popup_pane_ParamLimits

0xe9d1,	// (0x00045f5d) grid_graphic_popup_pane

0xe9f5,	// (0x00045f81) listscroll_popup_graphic_pane_g1_ParamLimits

0xe9f5,	// (0x00045f81) listscroll_popup_graphic_pane_g1

0x1d96,	// (0x00039322) listscroll_popup_graphic_pane_g2_ParamLimits

0x1d96,	// (0x00039322) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00046f3c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00046f3c) listscroll_popup_graphic_pane_g

0xe4c5,	// (0x00045a51) scroll_pane_cp5

0x1d59,	// (0x000392e5) cell_graphic_popup_pane_ParamLimits

0x1d59,	// (0x000392e5) cell_graphic_popup_pane

0xe99c,	// (0x00045f28) cell_graphic_popup_pane_g1

0xe9a4,	// (0x00045f30) cell_graphic_popup_pane_g2

0xc769,	// (0x00043cf5) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x00046f35) cell_graphic_popup_pane_g

0xe9ad,	// (0x00045f39) cell_graphic_popup_pane_t2

0xc772,	// (0x00043cfe) grid_highlight_pane_cp3

0xc8bb,	// (0x00043e47) list_gen_pane_ParamLimits

0xc8bb,	// (0x00043e47) list_gen_pane

0xc8e3,	// (0x00043e6f) scroll_pane

0x1d16,	// (0x000392a2) bg_list_pane_g1_ParamLimits

0x1d16,	// (0x000392a2) bg_list_pane_g1

0xe94b,	// (0x00045ed7) bg_list_pane_g2_ParamLimits

0xe94b,	// (0x00045ed7) bg_list_pane_g2

0xe95e,	// (0x00045eea) bg_list_pane_g3_ParamLimits

0xe95e,	// (0x00045eea) bg_list_pane_g3

0xe970,	// (0x00045efc) bg_list_pane_g4_ParamLimits

0xe970,	// (0x00045efc) bg_list_pane_g4

0x1d31,	// (0x000392bd) bg_list_pane_g5_ParamLimits

0x1d31,	// (0x000392bd) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00046f2a) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00046f2a) bg_list_pane_g

0x1cd1,	// (0x0003925d) list_double2_graphic_large_graphic_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_double2_graphic_large_graphic_pane

0x1cd1,	// (0x0003925d) list_double2_graphic_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_double2_graphic_pane

0x1cd1,	// (0x0003925d) list_double2_large_graphic_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_double2_large_graphic_pane

0x1cd1,	// (0x0003925d) list_double2_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_double2_pane

0x1cd1,	// (0x0003925d) list_double_graphic_heading_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_double_graphic_heading_pane

0x1cd1,	// (0x0003925d) list_double_graphic_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_double_graphic_pane

0x1cd1,	// (0x0003925d) list_double_heading_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_double_heading_pane

0x1cd1,	// (0x0003925d) list_double_large_graphic_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_double_large_graphic_pane

0x1cd1,	// (0x0003925d) list_double_number_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_double_number_pane

0x1cd1,	// (0x0003925d) list_double_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_double_pane

0x1cd1,	// (0x0003925d) list_double_time_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_double_time_pane

0x1cd1,	// (0x0003925d) list_setting_number_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_setting_number_pane

0x1cd1,	// (0x0003925d) list_setting_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_setting_pane

0x1ce2,	// (0x0003926e) list_single_2graphic_pane_ParamLimits

0x1ce2,	// (0x0003926e) list_single_2graphic_pane

0x1ce2,	// (0x0003926e) list_single_graphic_heading_pane_ParamLimits

0x1ce2,	// (0x0003926e) list_single_graphic_heading_pane

0x1ce2,	// (0x0003926e) list_single_graphic_pane_ParamLimits

0x1ce2,	// (0x0003926e) list_single_graphic_pane

0x1ce2,	// (0x0003926e) list_single_heading_pane_ParamLimits

0x1ce2,	// (0x0003926e) list_single_heading_pane

0x1cd1,	// (0x0003925d) list_single_large_graphic_pane_ParamLimits

0x1cd1,	// (0x0003925d) list_single_large_graphic_pane

0x1ce2,	// (0x0003926e) list_single_number_heading_pane_ParamLimits

0x1ce2,	// (0x0003926e) list_single_number_heading_pane

0x1ce2,	// (0x0003926e) list_single_number_pane_ParamLimits

0x1ce2,	// (0x0003926e) list_single_number_pane

0x1ce2,	// (0x0003926e) list_single_pane_ParamLimits

0x1ce2,	// (0x0003926e) list_single_pane

0xc350,	// (0x000438dc) list_highlight_pane_cp1

0xc917,	// (0x00043ea3) list_single_pane_g1_ParamLimits

0xc917,	// (0x00043ea3) list_single_pane_g1

0xa1d6,	// (0x00041762) list_single_pane_g2_ParamLimits

0xa1d6,	// (0x00041762) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00046b5e) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00046b5e) list_single_pane_g

0x95ee,	// (0x00040b7a) list_single_pane_t1_ParamLimits

0x95ee,	// (0x00040b7a) list_single_pane_t1

0xc917,	// (0x00043ea3) list_single_number_pane_g1_ParamLimits

0xc917,	// (0x00043ea3) list_single_number_pane_g1

0xa1d6,	// (0x00041762) list_single_number_pane_g2_ParamLimits

0xa1d6,	// (0x00041762) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00046b5e) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00046b5e) list_single_number_pane_g

0x93c7,	// (0x00040953) list_single_number_pane_t1_ParamLimits

0x93c7,	// (0x00040953) list_single_number_pane_t1

0x093c,	// (0x00037ec8) list_single_number_pane_t2_ParamLimits

0x093c,	// (0x00037ec8) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00046eeb) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00046eeb) list_single_number_pane_t

0x036f,	// (0x000378fb) list_single_graphic_pane_g1_ParamLimits

0x036f,	// (0x000378fb) list_single_graphic_pane_g1

0xc917,	// (0x00043ea3) list_single_graphic_pane_g2_ParamLimits

0xc917,	// (0x00043ea3) list_single_graphic_pane_g2

0xa1d6,	// (0x00041762) list_single_graphic_pane_g3_ParamLimits

0xa1d6,	// (0x00041762) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00046b4d) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00046b4d) list_single_graphic_pane_g

0x037b,	// (0x00037907) list_single_graphic_pane_t1_ParamLimits

0x037b,	// (0x00037907) list_single_graphic_pane_t1

0x0391,	// (0x0003791d) list_single_heading_pane_g1_ParamLimits

0x0391,	// (0x0003791d) list_single_heading_pane_g1

0xa1d6,	// (0x00041762) list_single_heading_pane_g2_ParamLimits

0xa1d6,	// (0x00041762) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00046b54) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00046b54) list_single_heading_pane_g

0x03a4,	// (0x00037930) list_single_heading_pane_t1_ParamLimits

0x03a4,	// (0x00037930) list_single_heading_pane_t1

0x0d2f,	// (0x000382bb) list_single_heading_pane_t2_ParamLimits

0x0d2f,	// (0x000382bb) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00046b59) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00046b59) list_single_heading_pane_t

0xc917,	// (0x00043ea3) list_single_number_heading_pane_g1_ParamLimits

0xc917,	// (0x00043ea3) list_single_number_heading_pane_g1

0xa1d6,	// (0x00041762) list_single_number_heading_pane_g2_ParamLimits

0xa1d6,	// (0x00041762) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00046b5e) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00046b5e) list_single_number_heading_pane_g

0x03ba,	// (0x00037946) list_single_number_heading_pane_t1_ParamLimits

0x03ba,	// (0x00037946) list_single_number_heading_pane_t1

0x95b8,	// (0x00040b44) list_single_number_heading_pane_t2_ParamLimits

0x95b8,	// (0x00040b44) list_single_number_heading_pane_t2

0x95ca,	// (0x00040b56) list_single_number_heading_pane_t3_ParamLimits

0x95ca,	// (0x00040b56) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00046b63) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00046b63) list_single_number_heading_pane_t

0x03d0,	// (0x0003795c) list_single_graphic_heading_pane_g1_ParamLimits

0x03d0,	// (0x0003795c) list_single_graphic_heading_pane_g1

0x0d41,	// (0x000382cd) list_single_graphic_heading_pane_g4_ParamLimits

0x0d41,	// (0x000382cd) list_single_graphic_heading_pane_g4

0xa1d6,	// (0x00041762) list_single_graphic_heading_pane_g5_ParamLimits

0xa1d6,	// (0x00041762) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00046b6a) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00046b6a) list_single_graphic_heading_pane_g

0x03ba,	// (0x00037946) list_single_graphic_heading_pane_t1_ParamLimits

0x03ba,	// (0x00037946) list_single_graphic_heading_pane_t1

0x03e6,	// (0x00037972) list_single_graphic_heading_pane_t2_ParamLimits

0x03e6,	// (0x00037972) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00046b71) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00046b71) list_single_graphic_heading_pane_t

0x9604,	// (0x00040b90) list_single_large_graphic_pane_g1_ParamLimits

0x9604,	// (0x00040b90) list_single_large_graphic_pane_g1

0x9610,	// (0x00040b9c) list_single_large_graphic_pane_g2_ParamLimits

0x9610,	// (0x00040b9c) list_single_large_graphic_pane_g2

0x961c,	// (0x00040ba8) list_single_large_graphic_pane_g3_ParamLimits

0x961c,	// (0x00040ba8) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00046b76) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00046b76) list_single_large_graphic_pane_g

0xdc88,	// (0x00045214) wait_border_pane_g2_copy1

0x03fe,	// (0x0003798a) list_single_large_graphic_pane_g4_cp2

0x9628,	// (0x00040bb4) list_single_large_graphic_pane_t1_ParamLimits

0x9628,	// (0x00040bb4) list_single_large_graphic_pane_t1

0xc923,	// (0x00043eaf) list_double_pane_g1_ParamLimits

0xc923,	// (0x00043eaf) list_double_pane_g1

0xa1ca,	// (0x00041756) list_double_pane_g2_ParamLimits

0xa1ca,	// (0x00041756) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00046b7d) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00046b7d) list_double_pane_g

0x0406,	// (0x00037992) list_double_pane_t1_ParamLimits

0x0406,	// (0x00037992) list_double_pane_t1

0x041c,	// (0x000379a8) list_double_pane_t2_ParamLimits

0x041c,	// (0x000379a8) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00046b82) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00046b82) list_double_pane_t

0x042e,	// (0x000379ba) list_double2_pane_g1_ParamLimits

0x042e,	// (0x000379ba) list_double2_pane_g1

0x043f,	// (0x000379cb) list_double2_pane_g2_ParamLimits

0x043f,	// (0x000379cb) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00046b87) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00046b87) list_double2_pane_g

0x044b,	// (0x000379d7) list_double2_pane_t1_ParamLimits

0x044b,	// (0x000379d7) list_double2_pane_t1

0x0461,	// (0x000379ed) list_double2_pane_t2_ParamLimits

0x0461,	// (0x000379ed) list_double2_pane_t2

0x0001,

0xf600,	// (0x00046b8c) list_double2_pane_t_ParamLimits

0xf600,	// (0x00046b8c) list_double2_pane_t

0xc923,	// (0x00043eaf) list_double_number_pane_g1_ParamLimits

0xc923,	// (0x00043eaf) list_double_number_pane_g1

0xa1ca,	// (0x00041756) list_double_number_pane_g2_ParamLimits

0xa1ca,	// (0x00041756) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00046b7d) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00046b7d) list_double_number_pane_g

0x0473,	// (0x000379ff) list_double_number_pane_t1_ParamLimits

0x0473,	// (0x000379ff) list_double_number_pane_t1

0x0485,	// (0x00037a11) list_double_number_pane_t2_ParamLimits

0x0485,	// (0x00037a11) list_double_number_pane_t2

0x049b,	// (0x00037a27) list_double_number_pane_t3_ParamLimits

0x049b,	// (0x00037a27) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00046b91) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00046b91) list_double_number_pane_t

0x04ad,	// (0x00037a39) list_double_graphic_pane_g1_ParamLimits

0x04ad,	// (0x00037a39) list_double_graphic_pane_g1

0x0d52,	// (0x000382de) list_double_graphic_pane_g2_ParamLimits

0x0d52,	// (0x000382de) list_double_graphic_pane_g2

0x0d61,	// (0x000382ed) list_double_graphic_pane_g3_ParamLimits

0x0d61,	// (0x000382ed) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00046b98) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00046b98) list_double_graphic_pane_g

0x04c5,	// (0x00037a51) list_double_graphic_pane_t1_ParamLimits

0x04c5,	// (0x00037a51) list_double_graphic_pane_t1

0x04db,	// (0x00037a67) list_double_graphic_pane_t2_ParamLimits

0x04db,	// (0x00037a67) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00046ba1) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00046ba1) list_double_graphic_pane_t

0x04ed,	// (0x00037a79) list_double2_graphic_pane_g1_ParamLimits

0x04ed,	// (0x00037a79) list_double2_graphic_pane_g1

0xc92f,	// (0x00043ebb) list_double2_graphic_pane_g2_ParamLimits

0xc92f,	// (0x00043ebb) list_double2_graphic_pane_g2

0x0d6d,	// (0x000382f9) list_double2_graphic_pane_g3_ParamLimits

0x0d6d,	// (0x000382f9) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00046ba6) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00046ba6) list_double2_graphic_pane_g

0x04f9,	// (0x00037a85) list_double2_graphic_pane_t1_ParamLimits

0x04f9,	// (0x00037a85) list_double2_graphic_pane_t1

0x050f,	// (0x00037a9b) list_double2_graphic_pane_t2_ParamLimits

0x050f,	// (0x00037a9b) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00046bad) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00046bad) list_double2_graphic_pane_t

0x0521,	// (0x00037aad) list_double_large_graphic_pane_g1_ParamLimits

0x0521,	// (0x00037aad) list_double_large_graphic_pane_g1

0x0540,	// (0x00037acc) list_double_large_graphic_pane_g2_ParamLimits

0x0540,	// (0x00037acc) list_double_large_graphic_pane_g2

0xa1ca,	// (0x00041756) list_double_large_graphic_pane_g3_ParamLimits

0xa1ca,	// (0x00041756) list_double_large_graphic_pane_g3

0x0556,	// (0x00037ae2) list_double_large_graphic_pane_g4_ParamLimits

0x0556,	// (0x00037ae2) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00046bb2) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00046bb2) list_double_large_graphic_pane_g

0x0567,	// (0x00037af3) list_double_large_graphic_pane_t1_ParamLimits

0x0567,	// (0x00037af3) list_double_large_graphic_pane_t1

0x0580,	// (0x00037b0c) list_double_large_graphic_pane_t2_ParamLimits

0x0580,	// (0x00037b0c) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00046bbd) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00046bbd) list_double_large_graphic_pane_t

0x0592,	// (0x00037b1e) list_double2_large_graphic_pane_g1_ParamLimits

0x0592,	// (0x00037b1e) list_double2_large_graphic_pane_g1

0x0d79,	// (0x00038305) list_double2_large_graphic_pane_g2_ParamLimits

0x0d79,	// (0x00038305) list_double2_large_graphic_pane_g2

0x0d6d,	// (0x000382f9) list_double2_large_graphic_pane_g3_ParamLimits

0x0d6d,	// (0x000382f9) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00046bc2) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00046bc2) list_double2_large_graphic_pane_g

0x059e,	// (0x00037b2a) list_double2_large_graphic_pane_t1_ParamLimits

0x059e,	// (0x00037b2a) list_double2_large_graphic_pane_t1

0x05b4,	// (0x00037b40) list_double2_large_graphic_pane_t2_ParamLimits

0x05b4,	// (0x00037b40) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00046bc9) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00046bc9) list_double2_large_graphic_pane_t

0x05c6,	// (0x00037b52) list_double_heading_pane_g1_ParamLimits

0x05c6,	// (0x00037b52) list_double_heading_pane_g1

0x05d7,	// (0x00037b63) list_double_heading_pane_g2_ParamLimits

0x05d7,	// (0x00037b63) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00046bce) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00046bce) list_double_heading_pane_g

0x05e3,	// (0x00037b6f) list_double_heading_pane_t1_ParamLimits

0x05e3,	// (0x00037b6f) list_double_heading_pane_t1

0x0461,	// (0x000379ed) list_double_heading_pane_t2_ParamLimits

0x0461,	// (0x000379ed) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00046bd3) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00046bd3) list_double_heading_pane_t

0x05f9,	// (0x00037b85) list_double_graphic_heading_pane_g1_ParamLimits

0x05f9,	// (0x00037b85) list_double_graphic_heading_pane_g1

0x05c6,	// (0x00037b52) list_double_graphic_heading_pane_g2_ParamLimits

0x05c6,	// (0x00037b52) list_double_graphic_heading_pane_g2

0x05d7,	// (0x00037b63) list_double_graphic_heading_pane_g3_ParamLimits

0x05d7,	// (0x00037b63) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00046bd8) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00046bd8) list_double_graphic_heading_pane_g

0x0605,	// (0x00037b91) list_double_graphic_heading_pane_t1_ParamLimits

0x0605,	// (0x00037b91) list_double_graphic_heading_pane_t1

0x050f,	// (0x00037a9b) list_double_graphic_heading_pane_t2_ParamLimits

0x050f,	// (0x00037a9b) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00046bdf) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00046bdf) list_double_graphic_heading_pane_t

0x061b,	// (0x00037ba7) list_double_time_pane_g1_ParamLimits

0x061b,	// (0x00037ba7) list_double_time_pane_g1

0x062c,	// (0x00037bb8) list_double_time_pane_g2_ParamLimits

0x062c,	// (0x00037bb8) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00046be4) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00046be4) list_double_time_pane_g

0x0638,	// (0x00037bc4) list_double_time_pane_t1_ParamLimits

0x0638,	// (0x00037bc4) list_double_time_pane_t1

0x064e,	// (0x00037bda) list_double_time_pane_t2_ParamLimits

0x064e,	// (0x00037bda) list_double_time_pane_t2

0x0660,	// (0x00037bec) list_double_time_pane_t3_ParamLimits

0x0660,	// (0x00037bec) list_double_time_pane_t3

0x0672,	// (0x00037bfe) list_double_time_pane_t4_ParamLimits

0x0672,	// (0x00037bfe) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00046be9) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00046be9) list_double_time_pane_t

0x0684,	// (0x00037c10) list_setting_pane_g1_ParamLimits

0x0684,	// (0x00037c10) list_setting_pane_g1

0x0690,	// (0x00037c1c) list_setting_pane_g2_ParamLimits

0x0690,	// (0x00037c1c) list_setting_pane_g2

0x0001,

0xf666,	// (0x00046bf2) list_setting_pane_g_ParamLimits

0xf666,	// (0x00046bf2) list_setting_pane_g

0x069c,	// (0x00037c28) list_setting_pane_t1_ParamLimits

0x069c,	// (0x00037c28) list_setting_pane_t1

0x06b6,	// (0x00037c42) list_setting_pane_t2_ParamLimits

0x06b6,	// (0x00037c42) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00046bf7) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00046bf7) list_setting_pane_t

0x06f3,	// (0x00037c7f) set_value_pane_cp_ParamLimits

0x06f3,	// (0x00037c7f) set_value_pane_cp

0x06ff,	// (0x00037c8b) list_setting_number_pane_g1_ParamLimits

0x06ff,	// (0x00037c8b) list_setting_number_pane_g1

0x070b,	// (0x00037c97) list_setting_number_pane_g2_ParamLimits

0x070b,	// (0x00037c97) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00046bfe) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00046bfe) list_setting_number_pane_g

0x0717,	// (0x00037ca3) list_setting_number_pane_t1_ParamLimits

0x0717,	// (0x00037ca3) list_setting_number_pane_t1

0x0730,	// (0x00037cbc) list_setting_number_pane_t2_ParamLimits

0x0730,	// (0x00037cbc) list_setting_number_pane_t2

0x074a,	// (0x00037cd6) list_setting_number_pane_t3_ParamLimits

0x074a,	// (0x00037cd6) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00046c03) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00046c03) list_setting_number_pane_t

0x06f3,	// (0x00037c7f) set_value_pane_ParamLimits

0x06f3,	// (0x00037c7f) set_value_pane

0xc93b,	// (0x00043ec7) bg_set_opt_pane_ParamLimits

0xc93b,	// (0x00043ec7) bg_set_opt_pane

0x90e3,	// (0x0004066f) set_value_pane_t1

0xc95c,	// (0x00043ee8) slider_set_pane_cp3

0xb236,	// (0x000427c2) volume_small_pane_cp

0xc965,	// (0x00043ef1) list_form_gen_pane

0xc96e,	// (0x00043efa) scroll_pane_cp8

0x078d,	// (0x00037d19) form_field_data_pane_ParamLimits

0x078d,	// (0x00037d19) form_field_data_pane

0x07a4,	// (0x00037d30) form_field_data_wide_pane_ParamLimits

0x07a4,	// (0x00037d30) form_field_data_wide_pane

0x9138,	// (0x000406c4) form_field_popup_pane_ParamLimits

0x9138,	// (0x000406c4) form_field_popup_pane

0x9150,	// (0x000406dc) form_field_popup_wide_pane_ParamLimits

0x9150,	// (0x000406dc) form_field_popup_wide_pane

0x9167,	// (0x000406f3) form_field_slider_pane_ParamLimits

0x9167,	// (0x000406f3) form_field_slider_pane

0x917a,	// (0x00040706) form_field_slider_wide_pane_ParamLimits

0x917a,	// (0x00040706) form_field_slider_wide_pane

0xc97f,	// (0x00043f0b) data_form_pane

0x07cc,	// (0x00037d58) form_field_data_pane_t1

0xc98b,	// (0x00043f17) input_focus_pane

0x91ad,	// (0x00040739) data_form_wide_pane

0x91ca,	// (0x00040756) form_field_data_wide_pane_t1

0xc787,	// (0x00043d13) input_focus_pane_cp6

0x07e4,	// (0x00037d70) form_field_popup_pane_t1

0xc98b,	// (0x00043f17) input_focus_pane_cp7

0xc9ad,	// (0x00043f39) list_form_pane

0x920c,	// (0x00040798) form_field_popup_wide_pane_t1

0xc98b,	// (0x00043f17) input_focus_pane_cp8

0xc9b9,	// (0x00043f45) list_form_wide_pane

0x0804,	// (0x00037d90) form_field_slider_pane_t1_ParamLimits

0x0804,	// (0x00037d90) form_field_slider_pane_t1

0x081a,	// (0x00037da6) form_field_slider_pane_t2_ParamLimits

0x081a,	// (0x00037da6) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00046c13) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00046c13) form_field_slider_pane_t

0xc39e,	// (0x0004392a) input_focus_pane_cp9_ParamLimits

0xc39e,	// (0x0004392a) input_focus_pane_cp9

0x082f,	// (0x00037dbb) slider_cont_pane_ParamLimits

0x082f,	// (0x00037dbb) slider_cont_pane

0xc9c5,	// (0x00043f51) form_field_slider_wide_pane_t1_ParamLimits

0xc9c5,	// (0x00043f51) form_field_slider_wide_pane_t1

0x9268,	// (0x000407f4) form_field_slider_wide_pane_t2_ParamLimits

0x9268,	// (0x000407f4) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00046c18) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00046c18) form_field_slider_wide_pane_t

0xc39e,	// (0x0004392a) input_focus_pane_cp10_ParamLimits

0xc39e,	// (0x0004392a) input_focus_pane_cp10

0x0843,	// (0x00037dcf) slider_cont_pane_cp1_ParamLimits

0x0843,	// (0x00037dcf) slider_cont_pane_cp1

0x0857,	// (0x00037de3) slider_form_pane_cp

0xc9d7,	// (0x00043f63) input_focus_pane_g1

0xc9df,	// (0x00043f6b) input_focus_pane_g2

0xc9e7,	// (0x00043f73) input_focus_pane_g3

0xc9ef,	// (0x00043f7b) input_focus_pane_g4

0xc9f7,	// (0x00043f83) input_focus_pane_g5

0xc9ff,	// (0x00043f8b) input_focus_pane_g6

0xca07,	// (0x00043f93) input_focus_pane_g7

0xca0f,	// (0x00043f9b) input_focus_pane_g8

0xca17,	// (0x00043fa3) input_focus_pane_g9

0xc346,	// (0x000438d2) input_focus_pane_g10

0x0009,

0xf691,	// (0x00046c1d) input_focus_pane_g

0xdc91,	// (0x0004521d) wait_border_pane_g3_copy1

0x085f,	// (0x00037deb) data_form_pane_t1

0xc346,	// (0x000438d2) wait_anim_pane_g1_copy1

0x094e,	// (0x00037eda) data_form_wide_pane_t1

0x92af,	// (0x0004083b) list_form_graphic_pane_cp_ParamLimits

0x92af,	// (0x0004083b) list_form_graphic_pane_cp

0xe8e7,	// (0x00045e73) slider_form_pane_g1

0xe8f0,	// (0x00045e7c) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00046f1b) slider_form_pane_g

0x92af,	// (0x0004083b) list_form_graphic_pane_ParamLimits

0x92af,	// (0x0004083b) list_form_graphic_pane

0x92c0,	// (0x0004084c) list_form_graphic_pane_g1

0x92c8,	// (0x00040854) list_form_graphic_pane_t1_ParamLimits

0x92c8,	// (0x00040854) list_form_graphic_pane_t1

0xc3bc,	// (0x00043948) list_highlight_pane_cp5_ParamLimits

0xc3bc,	// (0x00043948) list_highlight_pane_cp5

0x0877,	// (0x00037e03) find_pane_g1

0xca1f,	// (0x00043fab) input_find_pane

0x0880,	// (0x00037e0c) input_find_pane_g1_ParamLimits

0x0880,	// (0x00037e0c) input_find_pane_g1

0x088c,	// (0x00037e18) input_find_pane_t1_ParamLimits

0x088c,	// (0x00037e18) input_find_pane_t1

0x08a1,	// (0x00037e2d) input_find_pane_t2_ParamLimits

0x08a1,	// (0x00037e2d) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00046c32) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00046c32) input_find_pane_t

0xca28,	// (0x00043fb4) input_focus_pane_cp5_ParamLimits

0xca28,	// (0x00043fb4) input_focus_pane_cp5

0xca36,	// (0x00043fc2) bg_popup_window_pane_cp2_ParamLimits

0xca36,	// (0x00043fc2) bg_popup_window_pane_cp2

0xca43,	// (0x00043fcf) listscroll_menu_pane_ParamLimits

0xca43,	// (0x00043fcf) listscroll_menu_pane

0xb24b,	// (0x000427d7) popup_submenu_window_ParamLimits

0xb24b,	// (0x000427d7) popup_submenu_window

0xca4f,	// (0x00043fdb) find_popup_pane_g1

0xca57,	// (0x00043fe3) input_popup_find_pane_cp

0xca28,	// (0x00043fb4) input_focus_pane_cp4_ParamLimits

0xca28,	// (0x00043fb4) input_focus_pane_cp4

0xca61,	// (0x00043fed) input_popup_find_pane_t1_ParamLimits

0xca61,	// (0x00043fed) input_popup_find_pane_t1

0xc350,	// (0x000438dc) bg_popup_sub_pane_cp

0xca8f,	// (0x0004401b) listscroll_popup_sub_pane

0xca97,	// (0x00044023) list_submenu_pane_ParamLimits

0xca97,	// (0x00044023) list_submenu_pane

0xcaa8,	// (0x00044034) scroll_pane_cp4

0xcab0,	// (0x0004403c) list_single_popup_submenu_pane_ParamLimits

0xcab0,	// (0x0004403c) list_single_popup_submenu_pane

0xcac3,	// (0x0004404f) list_single_popup_submenu_pane_g1

0xcacb,	// (0x00044057) list_single_popup_submenu_pane_t1_ParamLimits

0xcacb,	// (0x00044057) list_single_popup_submenu_pane_t1

0xc39e,	// (0x0004392a) bg_active_tab_pane_cp1_ParamLimits

0xc39e,	// (0x0004392a) bg_active_tab_pane_cp1

0xcae0,	// (0x0004406c) tabs_2_active_pane_g1

0xb27b,	// (0x00042807) tabs_2_active_pane_t1

0xc39e,	// (0x0004392a) bg_passive_tab_pane_cp1_ParamLimits

0xc39e,	// (0x0004392a) bg_passive_tab_pane_cp1

0xcae0,	// (0x0004406c) tabs_2_passive_pane_g1

0xb27b,	// (0x00042807) tabs_2_passive_pane_t1

0xc3bc,	// (0x00043948) bg_active_tab_pane_cp4

0xb28d,	// (0x00042819) tabs_2_long_active_pane_t1

0xd3ea,	// (0x00044976) bg_passive_tab_pane_cp4

0x69fe,	// (0x0003df8a) list_single_midp_graphic_pane_g4_ParamLimits

0xc3bc,	// (0x00043948) bg_active_tab_pane_cp5

0xb2a0,	// (0x0004282c) tabs_3_long_active_pane_t1

0xd3ea,	// (0x00044976) bg_passive_tab_pane_cp5

0x69fe,	// (0x0003df8a) list_single_midp_graphic_pane_g4

0xc3bc,	// (0x00043948) bg_popup_window_pane_cp13_ParamLimits

0xc3bc,	// (0x00043948) bg_popup_window_pane_cp13

0xcaf1,	// (0x0004407d) listscroll_popup_fast_pane_ParamLimits

0xcaf1,	// (0x0004407d) listscroll_popup_fast_pane

0xcb00,	// (0x0004408c) grid_popup_fast_pane_ParamLimits

0xcb00,	// (0x0004408c) grid_popup_fast_pane

0xcb12,	// (0x0004409e) scroll_pane_cp9_ParamLimits

0xcb12,	// (0x0004409e) scroll_pane_cp9

0x3d07,	// (0x0003b293) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x3d07,	// (0x0003b293) list_single_graphic_hl_pane_t1_cp2

0xcb36,	// (0x000440c2) input_focus_pane_cp20_ParamLimits

0xcb36,	// (0x000440c2) input_focus_pane_cp20

0xcb44,	// (0x000440d0) query_popup_data_pane_t1_ParamLimits

0xcb44,	// (0x000440d0) query_popup_data_pane_t1

0xcb57,	// (0x000440e3) query_popup_data_pane_t2_ParamLimits

0xcb57,	// (0x000440e3) query_popup_data_pane_t2

0xcb9d,	// (0x00044129) query_popup_data_pane_t3_ParamLimits

0xcb9d,	// (0x00044129) query_popup_data_pane_t3

0xcbde,	// (0x0004416a) query_popup_data_pane_t4_ParamLimits

0xcbde,	// (0x0004416a) query_popup_data_pane_t4

0xcc1a,	// (0x000441a6) query_popup_data_pane_t5_ParamLimits

0xcc1a,	// (0x000441a6) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00046c37) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00046c37) query_popup_data_pane_t

0xc9d7,	// (0x00043f63) bg_set_opt_pane_g1

0xc9df,	// (0x00043f6b) bg_set_opt_pane_g2

0xc9e7,	// (0x00043f73) bg_set_opt_pane_g3

0xc9ef,	// (0x00043f7b) bg_set_opt_pane_g4

0xc9f7,	// (0x00043f83) bg_set_opt_pane_g5

0xc9ff,	// (0x00043f8b) bg_set_opt_pane_g6

0xca07,	// (0x00043f93) bg_set_opt_pane_g7

0xca0f,	// (0x00043f9b) bg_set_opt_pane_g8

0xca17,	// (0x00043fa3) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00046c42) bg_set_opt_pane_g

0x619f,	// (0x0003d72b) control_top_pane_stacon_ParamLimits

0x619f,	// (0x0003d72b) control_top_pane_stacon

0x61f2,	// (0x0003d77e) signal_pane_stacon_ParamLimits

0x61f2,	// (0x0003d77e) signal_pane_stacon

0xd0b5,	// (0x00044641) stacon_top_pane_g1_ParamLimits

0xd0b5,	// (0x00044641) stacon_top_pane_g1

0x6217,	// (0x0003d7a3) title_pane_stacon_ParamLimits

0x6217,	// (0x0003d7a3) title_pane_stacon

0x6239,	// (0x0003d7c5) uni_indicator_pane_stacon_ParamLimits

0x6239,	// (0x0003d7c5) uni_indicator_pane_stacon

0x624e,	// (0x0003d7da) battery_pane_stacon_ParamLimits

0x624e,	// (0x0003d7da) battery_pane_stacon

0x628e,	// (0x0003d81a) control_bottom_pane_stacon_ParamLimits

0x628e,	// (0x0003d81a) control_bottom_pane_stacon

0x62ad,	// (0x0003d839) navi_pane_stacon_ParamLimits

0x62ad,	// (0x0003d839) navi_pane_stacon

0xd0d7,	// (0x00044663) stacon_bottom_pane_g1_ParamLimits

0xd0d7,	// (0x00044663) stacon_bottom_pane_g1

0x5f11,	// (0x0003d49d) aid_levels_signal_lsc_ParamLimits

0x5f11,	// (0x0003d49d) aid_levels_signal_lsc

0x5f28,	// (0x0003d4b4) signal_pane_stacon_g1_ParamLimits

0x5f28,	// (0x0003d4b4) signal_pane_stacon_g1

0x5f3c,	// (0x0003d4c8) signal_pane_stacon_g2_ParamLimits

0x5f3c,	// (0x0003d4c8) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00046c55) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00046c55) signal_pane_stacon_g

0x5f71,	// (0x0003d4fd) title_pane_stacon_t1_ParamLimits

0x5f71,	// (0x0003d4fd) title_pane_stacon_t1

0xcc5e,	// (0x000441ea) uni_indicator_pane_stacon_g1

0xcc68,	// (0x000441f4) uni_indicator_pane_stacon_g2

0xcc72,	// (0x000441fe) uni_indicator_pane_stacon_g3

0xcc7c,	// (0x00044208) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00046c61) uni_indicator_pane_stacon_g

0x5f96,	// (0x0003d522) control_top_pane_stacon_g1

0x5f9e,	// (0x0003d52a) control_top_pane_stacon_t1_ParamLimits

0x5f9e,	// (0x0003d52a) control_top_pane_stacon_t1

0x5fd5,	// (0x0003d561) aid_levels_battery_lsc_ParamLimits

0x5fd5,	// (0x0003d561) aid_levels_battery_lsc

0x5fed,	// (0x0003d579) battery_pane_stacon_g1_ParamLimits

0x5fed,	// (0x0003d579) battery_pane_stacon_g1

0x6000,	// (0x0003d58c) battery_pane_stacon_g2_ParamLimits

0x6000,	// (0x0003d58c) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00046c6a) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00046c6a) battery_pane_stacon_g

0x6036,	// (0x0003d5c2) navi_icon_pane_stacon

0x604a,	// (0x0003d5d6) navi_navi_pane_stacon

0x6036,	// (0x0003d5c2) navi_text_pane_stacon

0x5f96,	// (0x0003d522) control_bottom_pane_stacon_g1

0x605e,	// (0x0003d5ea) control_bottom_pane_stacon_t1_ParamLimits

0x605e,	// (0x0003d5ea) control_bottom_pane_stacon_t1

0xb2b2,	// (0x0004283e) grid_app_pane_ParamLimits

0xb2b2,	// (0x0004283e) grid_app_pane

0xb2e0,	// (0x0004286c) scroll_pane_cp15_ParamLimits

0xb2e0,	// (0x0004286c) scroll_pane_cp15

0xb2f3,	// (0x0004287f) cell_app_pane_ParamLimits

0xb2f3,	// (0x0004287f) cell_app_pane

0xb32e,	// (0x000428ba) cell_app_pane_g1_ParamLimits

0xb32e,	// (0x000428ba) cell_app_pane_g1

0xcca0,	// (0x0004422c) cell_app_pane_g2_ParamLimits

0xcca0,	// (0x0004422c) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00046c6f) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00046c6f) cell_app_pane_g

0xb352,	// (0x000428de) cell_app_pane_t1_ParamLimits

0xb352,	// (0x000428de) cell_app_pane_t1

0xccac,	// (0x00044238) grid_highlight_pane_ParamLimits

0xccac,	// (0x00044238) grid_highlight_pane

0xc9d7,	// (0x00043f63) cell_highlight_pane_g1

0xc9df,	// (0x00043f6b) cell_highlight_pane_g2

0xc9e7,	// (0x00043f73) cell_highlight_pane_g3

0xc9ef,	// (0x00043f7b) cell_highlight_pane_g4

0xc9f7,	// (0x00043f83) cell_highlight_pane_g5

0xc9ff,	// (0x00043f8b) cell_highlight_pane_g6

0xca07,	// (0x00043f93) cell_highlight_pane_g7

0xca0f,	// (0x00043f9b) cell_highlight_pane_g8

0xca17,	// (0x00043fa3) cell_highlight_pane_g9

0xc346,	// (0x000438d2) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00046c1d) cell_highlight_pane_g

0xccbd,	// (0x00044249) bg_scroll_pane

0x60a8,	// (0x0003d634) scroll_handle_pane

0xcd04,	// (0x00044290) scroll_bg_pane_g1

0xcd19,	// (0x000442a5) scroll_bg_pane_g2

0xcd31,	// (0x000442bd) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00046c74) scroll_bg_pane_g

0xcd46,	// (0x000442d2) scroll_handle_focus_pane_ParamLimits

0xcd46,	// (0x000442d2) scroll_handle_focus_pane

0xcd04,	// (0x00044290) scroll_handle_pane_g1

0xcd53,	// (0x000442df) scroll_handle_pane_g2

0xcd31,	// (0x000442bd) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00046c7b) scroll_handle_pane_g

0xca28,	// (0x00043fb4) bg_popup_sub_pane_cp21_ParamLimits

0xca28,	// (0x00043fb4) bg_popup_sub_pane_cp21

0xcd67,	// (0x000442f3) popup_fep_japan_predictive_window_t1_ParamLimits

0xcd67,	// (0x000442f3) popup_fep_japan_predictive_window_t1

0xcd7e,	// (0x0004430a) popup_fep_japan_predictive_window_t2_ParamLimits

0xcd7e,	// (0x0004430a) popup_fep_japan_predictive_window_t2

0xcdb1,	// (0x0004433d) popup_fep_japan_predictive_window_t3_ParamLimits

0xcdb1,	// (0x0004433d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00046c82) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00046c82) popup_fep_japan_predictive_window_t

0xc350,	// (0x000438dc) bg_popup_sub_pane_cp23

0xcde8,	// (0x00044374) listscroll_japin_cand_pane

0xcdf0,	// (0x0004437c) popup_fep_japan_candidate_window_t1

0xcdfe,	// (0x0004438a) candidate_pane_ParamLimits

0xcdfe,	// (0x0004438a) candidate_pane

0xce10,	// (0x0004439c) scroll_pane_cp30

0xce18,	// (0x000443a4) list_single_popup_jap_candidate_pane_ParamLimits

0xce18,	// (0x000443a4) list_single_popup_jap_candidate_pane

0xc350,	// (0x000438dc) list_highlight_pane_cp30

0xce2d,	// (0x000443b9) list_single_popup_jap_candidate_pane_t1

0xce3c,	// (0x000443c8) level_1_signal

0xce49,	// (0x000443d5) level_2_signal

0xce56,	// (0x000443e2) level_3_signal

0xce63,	// (0x000443ef) level_4_signal

0xce70,	// (0x000443fc) level_5_signal

0xce7d,	// (0x00044409) level_6_signal

0xce8a,	// (0x00044416) level_7_signal

0xce3c,	// (0x000443c8) level_1_battery

0xce49,	// (0x000443d5) level_2_battery

0xce56,	// (0x000443e2) level_3_battery

0xce63,	// (0x000443ef) level_4_battery

0xce70,	// (0x000443fc) level_5_battery

0xce7d,	// (0x00044409) level_6_battery

0xce8a,	// (0x00044416) level_7_battery

0xceaf,	// (0x0004443b) list_menu_pane_ParamLimits

0xceaf,	// (0x0004443b) list_menu_pane

0xcec5,	// (0x00044451) scroll_pane_cp25_ParamLimits

0xcec5,	// (0x00044451) scroll_pane_cp25

0xcede,	// (0x0004446a) list_double2_graphic_pane_cp2_ParamLimits

0xcede,	// (0x0004446a) list_double2_graphic_pane_cp2

0xcede,	// (0x0004446a) list_double2_large_graphic_pane_cp2_ParamLimits

0xcede,	// (0x0004446a) list_double2_large_graphic_pane_cp2

0xcede,	// (0x0004446a) list_double2_pane_cp2_ParamLimits

0xcede,	// (0x0004446a) list_double2_pane_cp2

0xcede,	// (0x0004446a) list_double_graphic_pane_cp2_ParamLimits

0xcede,	// (0x0004446a) list_double_graphic_pane_cp2

0xcede,	// (0x0004446a) list_double_large_graphic_pane_cp2_ParamLimits

0xcede,	// (0x0004446a) list_double_large_graphic_pane_cp2

0xcede,	// (0x0004446a) list_double_number_pane_cp2_ParamLimits

0xcede,	// (0x0004446a) list_double_number_pane_cp2

0xcede,	// (0x0004446a) list_double_pane_cp2_ParamLimits

0xcede,	// (0x0004446a) list_double_pane_cp2

0xb37c,	// (0x00042908) list_single_2graphic_pane_cp2_ParamLimits

0xb37c,	// (0x00042908) list_single_2graphic_pane_cp2

0xb37c,	// (0x00042908) list_single_graphic_heading_pane_cp2_ParamLimits

0xb37c,	// (0x00042908) list_single_graphic_heading_pane_cp2

0xb37c,	// (0x00042908) list_single_graphic_pane_cp2_ParamLimits

0xb37c,	// (0x00042908) list_single_graphic_pane_cp2

0xb37c,	// (0x00042908) list_single_heading_pane_cp2_ParamLimits

0xb37c,	// (0x00042908) list_single_heading_pane_cp2

0xceee,	// (0x0004447a) list_single_large_graphic_pane_cp2_ParamLimits

0xceee,	// (0x0004447a) list_single_large_graphic_pane_cp2

0xb37c,	// (0x00042908) list_single_number_heading_pane_cp2_ParamLimits

0xb37c,	// (0x00042908) list_single_number_heading_pane_cp2

0xb37c,	// (0x00042908) list_single_number_pane_cp2_ParamLimits

0xb37c,	// (0x00042908) list_single_number_pane_cp2

0xb37c,	// (0x00042908) list_single_pane_cp2_ParamLimits

0xb37c,	// (0x00042908) list_single_pane_cp2

0xcf08,	// (0x00044494) bg_popup_sub_pane_cp22

0x6157,	// (0x0003d6e3) popup_side_volume_key_window_g1

0x617b,	// (0x0003d707) popup_side_volume_key_window_t1

0x6197,	// (0x0003d723) volume_small_pane_cp1

0xc39e,	// (0x0004392a) bg_popup_sub_pane_cp24_ParamLimits

0xc39e,	// (0x0004392a) bg_popup_sub_pane_cp24

0xcf1e,	// (0x000444aa) fep_china_uni_candidate_pane_ParamLimits

0xcf1e,	// (0x000444aa) fep_china_uni_candidate_pane

0xcf32,	// (0x000444be) fep_china_uni_entry_pane

0xcf42,	// (0x000444ce) popup_fep_china_uni_window_g1

0xcf5e,	// (0x000444ea) fep_china_uni_entry_pane_g1

0xcf66,	// (0x000444f2) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00046cb3) fep_china_uni_entry_pane_g

0xcf6e,	// (0x000444fa) fep_entry_item_pane

0xcf78,	// (0x00044504) fep_candidate_item_pane

0xcf80,	// (0x0004450c) fep_china_uni_candidate_pane_g1

0xcf88,	// (0x00044514) fep_china_uni_candidate_pane_g2

0xcf90,	// (0x0004451c) fep_china_uni_candidate_pane_g3

0xcf98,	// (0x00044524) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00046cb8) fep_china_uni_candidate_pane_g

0xc346,	// (0x000438d2) fep_entry_item_pane_g1

0xcfa0,	// (0x0004452c) fep_entry_item_pane_t1_ParamLimits

0xcfa0,	// (0x0004452c) fep_entry_item_pane_t1

0xcfb6,	// (0x00044542) fep_candidate_item_pane_t1_ParamLimits

0xcfb6,	// (0x00044542) fep_candidate_item_pane_t1

0xcfcb,	// (0x00044557) fep_candidate_item_pane_t2_ParamLimits

0xcfcb,	// (0x00044557) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00046cc1) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00046cc1) fep_candidate_item_pane_t

0xc3bc,	// (0x00043948) list_highlight_pane_cp31_ParamLimits

0xc3bc,	// (0x00043948) list_highlight_pane_cp31

0xcfdd,	// (0x00044569) level_1_signal_lsc

0xcfe6,	// (0x00044572) level_2_signal_lsc

0xcfef,	// (0x0004457b) level_3_signal_lsc

0xcff8,	// (0x00044584) level_4_signal_lsc

0xd001,	// (0x0004458d) level_5_signal_lsc

0xd00a,	// (0x00044596) level_6_signal_lsc

0xd013,	// (0x0004459f) level_7_signal_lsc

0xd013,	// (0x0004459f) level_1_battery_lsc

0xd01c,	// (0x000445a8) level_2_battery_lsc

0xd025,	// (0x000445b1) level_3_battery_lsc

0xd02e,	// (0x000445ba) level_4_battery_lsc

0xd037,	// (0x000445c3) level_5_battery_lsc

0xd040,	// (0x000445cc) level_6_battery_lsc

0xcfdd,	// (0x00044569) level_7_battery_lsc

0xd049,	// (0x000445d5) scroll_handle_focus_pane_g1

0xd052,	// (0x000445de) scroll_handle_focus_pane_g2

0xd05b,	// (0x000445e7) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00046cc6) scroll_handle_focus_pane_g

0x08b6,	// (0x00037e42) list_single_2graphic_pane_g1_ParamLimits

0x08b6,	// (0x00037e42) list_single_2graphic_pane_g1

0x0d41,	// (0x000382cd) list_single_2graphic_pane_g2_ParamLimits

0x0d41,	// (0x000382cd) list_single_2graphic_pane_g2

0xa1d6,	// (0x00041762) list_single_2graphic_pane_g3_ParamLimits

0xa1d6,	// (0x00041762) list_single_2graphic_pane_g3

0x08c2,	// (0x00037e4e) list_single_2graphic_pane_g4_ParamLimits

0x08c2,	// (0x00037e4e) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00046ccd) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00046ccd) list_single_2graphic_pane_g

0x08d3,	// (0x00037e5f) list_single_2graphic_pane_t1_ParamLimits

0x08d3,	// (0x00037e5f) list_single_2graphic_pane_t1

0x0d93,	// (0x0003831f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x0d93,	// (0x0003831f) list_double2_graphic_large_graphic_pane_g1

0x0d79,	// (0x00038305) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x0d79,	// (0x00038305) list_double2_graphic_large_graphic_pane_g2

0x0d6d,	// (0x000382f9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x0d6d,	// (0x000382f9) list_double2_graphic_large_graphic_pane_g3

0xb408,	// (0x00042994) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb408,	// (0x00042994) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00046cd6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00046cd6) list_double2_graphic_large_graphic_pane_g

0x0901,	// (0x00037e8d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0901,	// (0x00037e8d) list_double2_graphic_large_graphic_pane_t1

0x0917,	// (0x00037ea3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x0917,	// (0x00037ea3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00046cdf) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00046cdf) list_double2_graphic_large_graphic_pane_t

0xd17e,	// (0x0004470a) popup_fast_swap_window_ParamLimits

0xd17e,	// (0x0004470a) popup_fast_swap_window

0xd19a,	// (0x00044726) popup_side_volume_key_window

0xd1b4,	// (0x00044740) stacon_top_pane

0xd1be,	// (0x0004474a) status_pane_ParamLimits

0xd1be,	// (0x0004474a) status_pane

0xb414,	// (0x000429a0) status_small_pane

0xc350,	// (0x000438dc) control_pane

0xc350,	// (0x000438dc) stacon_bottom_pane

0xc96e,	// (0x00043efa) scroll_pane_cp121

0xc965,	// (0x00043ef1) set_content_pane

0xd064,	// (0x000445f0) bg_active_tab_pane_g1_cp1

0xd06d,	// (0x000445f9) bg_active_tab_pane_g2_cp1

0xd076,	// (0x00044602) bg_active_tab_pane_g3_cp1

0xd064,	// (0x000445f0) bg_passive_tab_pane_g1_cp1

0xd06d,	// (0x000445f9) bg_passive_tab_pane_g2_cp1

0xd076,	// (0x00044602) bg_passive_tab_pane_g3_cp1

0xd07f,	// (0x0004460b) bg_active_tab_pane_g1_cp2

0xd06d,	// (0x000445f9) bg_active_tab_pane_g2_cp2

0xd088,	// (0x00044614) bg_active_tab_pane_g3_cp2

0xd07f,	// (0x0004460b) bg_passive_tab_pane_g1_cp2

0xd06d,	// (0x000445f9) bg_passive_tab_pane_g2_cp2

0xd088,	// (0x00044614) bg_passive_tab_pane_g3_cp2

0xd091,	// (0x0004461d) bg_active_tab_pane_g1_cp3

0xd06d,	// (0x000445f9) bg_active_tab_pane_g2_cp3

0xd09a,	// (0x00044626) bg_active_tab_pane_g3_cp3

0xd091,	// (0x0004461d) bg_passive_tab_pane_g1_cp3

0xd06d,	// (0x000445f9) bg_passive_tab_pane_g2_cp3

0xd09a,	// (0x00044626) bg_passive_tab_pane_g3_cp3

0xd0a3,	// (0x0004462f) bg_active_tab_pane_g1_cp4

0xd06d,	// (0x000445f9) bg_active_tab_pane_g2_cp4

0xd0ac,	// (0x00044638) bg_active_tab_pane_g3_cp4

0xd0a3,	// (0x0004462f) bg_passive_tab_pane_g1_cp4

0xd06d,	// (0x000445f9) bg_passive_tab_pane_g2_cp4

0xd0ac,	// (0x00044638) bg_passive_tab_pane_g3_cp4

0xd0f3,	// (0x0004467f) bg_active_tab_pane_g1_cp5

0xd06d,	// (0x000445f9) bg_active_tab_pane_g2_cp5

0xd0fc,	// (0x00044688) bg_active_tab_pane_g3_cp5

0xd0f3,	// (0x0004467f) bg_passive_tab_pane_g1_cp5

0xd06d,	// (0x000445f9) bg_passive_tab_pane_g2_cp5

0xd0fc,	// (0x00044688) bg_passive_tab_pane_g3_cp5

0xe4a2,	// (0x00045a2e) list_set_graphic_pane_ParamLimits

0xe4a2,	// (0x00045a2e) list_set_graphic_pane

0xc350,	// (0x000438dc) bg_set_opt_pane_cp4

0xd105,	// (0x00044691) list_set_graphic_pane_g1_ParamLimits

0xd105,	// (0x00044691) list_set_graphic_pane_g1

0xd111,	// (0x0004469d) list_set_graphic_pane_g2_ParamLimits

0xd111,	// (0x0004469d) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00046ce4) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00046ce4) list_set_graphic_pane_g

0x0009,

0xfad6,	// (0x00047062) volume_small_pane_cp_g

0xd133,	// (0x000446bf) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd133,	// (0x000446bf) list_double2_large_graphic_pane_g1_cp2

0xd13f,	// (0x000446cb) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd13f,	// (0x000446cb) list_double2_large_graphic_pane_g2_cp2

0xd14e,	// (0x000446da) list_double2_large_graphic_pane_g3_cp2

0xd156,	// (0x000446e2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xd156,	// (0x000446e2) list_double2_large_graphic_pane_t1_cp2

0xd16c,	// (0x000446f8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xd16c,	// (0x000446f8) list_double2_large_graphic_pane_t2_cp2

0xe6c7,	// (0x00045c53) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe6c7,	// (0x00045c53) list_double_large_graphic_pane_g1_cp2

0xe6d8,	// (0x00045c64) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe6d8,	// (0x00045c64) list_double_large_graphic_pane_g2_cp2

0xd2c8,	// (0x00044854) list_double_large_graphic_pane_g3_cp2

0xe6e7,	// (0x00045c73) list_double_large_graphic_pane_g4_cp

0xe6ef,	// (0x00045c7b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe6ef,	// (0x00045c7b) list_double_large_graphic_pane_t1_cp2

0xe706,	// (0x00045c92) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe706,	// (0x00045c92) list_double_large_graphic_pane_t2_cp2

0xd1cc,	// (0x00044758) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd1cc,	// (0x00044758) list_double2_graphic_pane_g1_cp2

0xd1d8,	// (0x00044764) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd1d8,	// (0x00044764) list_double2_graphic_pane_g2_cp2

0xd1e7,	// (0x00044773) list_double2_graphic_pane_g3_cp2

0xd1ef,	// (0x0004477b) list_double2_graphic_pane_t1_cp2_ParamLimits

0xd1ef,	// (0x0004477b) list_double2_graphic_pane_t1_cp2

0xd205,	// (0x00044791) list_double2_graphic_pane_t2_cp2_ParamLimits

0xd205,	// (0x00044791) list_double2_graphic_pane_t2_cp2

0xc92f,	// (0x00043ebb) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc92f,	// (0x00043ebb) list_single_number_heading_pane_g1_cp2

0xd217,	// (0x000447a3) list_single_number_heading_pane_g2_cp2

0xd21f,	// (0x000447ab) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd21f,	// (0x000447ab) list_single_number_heading_pane_t1_cp2

0xd235,	// (0x000447c1) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd235,	// (0x000447c1) list_single_number_heading_pane_t2_cp2

0xd247,	// (0x000447d3) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd247,	// (0x000447d3) list_single_number_heading_pane_t3_cp2

0xc92f,	// (0x00043ebb) list_single_heading_pane_g1_cp2_ParamLimits

0xc92f,	// (0x00043ebb) list_single_heading_pane_g1_cp2

0xd217,	// (0x000447a3) list_single_heading_pane_g2_cp2

0xd21f,	// (0x000447ab) list_single_heading_pane_t1_cp2_ParamLimits

0xd21f,	// (0x000447ab) list_single_heading_pane_t1_cp2

0xe4d1,	// (0x00045a5d) list_single_heading_pane_t2_cp2_ParamLimits

0xe4d1,	// (0x00045a5d) list_single_heading_pane_t2_cp2

0xe3cc,	// (0x00045958) list_double_graphic_pane_g1_cp2_ParamLimits

0xe3cc,	// (0x00045958) list_double_graphic_pane_g1_cp2

0xe3d8,	// (0x00045964) list_double_graphic_pane_g2_cp2_ParamLimits

0xe3d8,	// (0x00045964) list_double_graphic_pane_g2_cp2

0xe3e7,	// (0x00045973) list_double_graphic_pane_g3_cp2

0xe3ef,	// (0x0004597b) list_double_graphic_pane_t1_cp2_ParamLimits

0xe3ef,	// (0x0004597b) list_double_graphic_pane_t1_cp2

0xe405,	// (0x00045991) list_double_graphic_pane_t2_cp2_ParamLimits

0xe405,	// (0x00045991) list_double_graphic_pane_t2_cp2

0xd2bc,	// (0x00044848) list_double_number_pane_g1_cp2_ParamLimits

0xd2bc,	// (0x00044848) list_double_number_pane_g1_cp2

0xd2c8,	// (0x00044854) list_double_number_pane_g2_cp2

0xe392,	// (0x0004591e) list_double_number_pane_t1_cp2_ParamLimits

0xe392,	// (0x0004591e) list_double_number_pane_t1_cp2

0xe3a4,	// (0x00045930) list_double_number_pane_t2_cp2_ParamLimits

0xe3a4,	// (0x00045930) list_double_number_pane_t2_cp2

0xe3ba,	// (0x00045946) list_double_number_pane_t3_cp2_ParamLimits

0xe3ba,	// (0x00045946) list_double_number_pane_t3_cp2

0xe2f5,	// (0x00045881) list_single_graphic_pane_g1_cp2_ParamLimits

0xe2f5,	// (0x00045881) list_single_graphic_pane_g1_cp2

0xc917,	// (0x00043ea3) list_single_graphic_pane_g2_cp2_ParamLimits

0xc917,	// (0x00043ea3) list_single_graphic_pane_g2_cp2

0xd31e,	// (0x000448aa) list_single_graphic_pane_g3_cp2

0xe2cd,	// (0x00045859) list_single_graphic_pane_t1_cp2_ParamLimits

0xe2cd,	// (0x00045859) list_single_graphic_pane_t1_cp2

0xc917,	// (0x00043ea3) list_single_number_pane_g1_cp2_ParamLimits

0xc917,	// (0x00043ea3) list_single_number_pane_g1_cp2

0xd31e,	// (0x000448aa) list_single_number_pane_g2_cp2

0xe2cd,	// (0x00045859) list_single_number_pane_t1_cp2_ParamLimits

0xe2cd,	// (0x00045859) list_single_number_pane_t1_cp2

0xe2e3,	// (0x0004586f) list_single_number_pane_t2_cp2_ParamLimits

0xe2e3,	// (0x0004586f) list_single_number_pane_t2_cp2

0xd13f,	// (0x000446cb) list_double2_pane_g1_cp2_ParamLimits

0xd13f,	// (0x000446cb) list_double2_pane_g1_cp2

0xd14e,	// (0x000446da) list_double2_pane_g2_cp2

0xd294,	// (0x00044820) list_double2_pane_t1_cp2_ParamLimits

0xd294,	// (0x00044820) list_double2_pane_t1_cp2

0xd2aa,	// (0x00044836) list_double2_pane_t2_cp2_ParamLimits

0xd2aa,	// (0x00044836) list_double2_pane_t2_cp2

0xd2bc,	// (0x00044848) list_double_pane_g1_cp2_ParamLimits

0xd2bc,	// (0x00044848) list_double_pane_g1_cp2

0xd2c8,	// (0x00044854) list_double_pane_g2_cp2

0xd2d0,	// (0x0004485c) list_double_pane_t1_cp2_ParamLimits

0xd2d0,	// (0x0004485c) list_double_pane_t1_cp2

0xd2e6,	// (0x00044872) list_double_pane_t2_cp2_ParamLimits

0xd2e6,	// (0x00044872) list_double_pane_t2_cp2

0xd30e,	// (0x0004489a) list_single_pane_cp2_g3

0xc917,	// (0x00043ea3) list_single_pane_g1_cp2_ParamLimits

0xc917,	// (0x00043ea3) list_single_pane_g1_cp2

0xd31e,	// (0x000448aa) list_single_pane_g2_cp2

0xd326,	// (0x000448b2) list_single_pane_t1_cp2_ParamLimits

0xd326,	// (0x000448b2) list_single_pane_t1_cp2

0xd33e,	// (0x000448ca) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd33e,	// (0x000448ca) list_single_large_graphic_pane_g1_cp2

0xd34a,	// (0x000448d6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xd34a,	// (0x000448d6) list_single_large_graphic_pane_g2_cp2

0xd356,	// (0x000448e2) list_single_large_graphic_pane_g3_cp2

0xd35e,	// (0x000448ea) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xd35e,	// (0x000448ea) list_single_large_graphic_pane_g4_cp1

0xd378,	// (0x00044904) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xd378,	// (0x00044904) list_single_large_graphic_pane_t1_cp2

0xe299,	// (0x00045825) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xe299,	// (0x00045825) list_single_graphic_heading_pane_g1_cp2

0xe268,	// (0x000457f4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xe268,	// (0x000457f4) list_single_graphic_heading_pane_g4_cp2

0xd31e,	// (0x000448aa) list_single_graphic_heading_pane_g5_cp2

0xe2a5,	// (0x00045831) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xe2a5,	// (0x00045831) list_single_graphic_heading_pane_t1_cp2

0xe2bb,	// (0x00045847) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xe2bb,	// (0x00045847) list_single_graphic_heading_pane_t2_cp2

0xe25c,	// (0x000457e8) list_single_2graphic_pane_g1_cp2_ParamLimits

0xe25c,	// (0x000457e8) list_single_2graphic_pane_g1_cp2

0xe268,	// (0x000457f4) list_single_2graphic_pane_g2_cp2_ParamLimits

0xe268,	// (0x000457f4) list_single_2graphic_pane_g2_cp2

0xd31e,	// (0x000448aa) list_single_2graphic_pane_g3_cp2

0xe277,	// (0x00045803) list_single_2graphic_pane_g4_cp2_ParamLimits

0xe277,	// (0x00045803) list_single_2graphic_pane_g4_cp2

0xe283,	// (0x0004580f) list_single_2graphic_pane_t1_cp2_ParamLimits

0xe283,	// (0x0004580f) list_single_2graphic_pane_t1_cp2

0xc346,	// (0x000438d2) list_highlight_pane_g10_cp1

0xde6e,	// (0x000453fa) list_highlight_pane_g1_cp1

0xde76,	// (0x00045402) list_highlight_pane_g2_cp1

0xde7e,	// (0x0004540a) list_highlight_pane_g3_cp1

0xde86,	// (0x00045412) list_highlight_pane_g4_cp1

0xde8e,	// (0x0004541a) list_highlight_pane_g5_cp1

0xde96,	// (0x00045422) list_highlight_pane_g6_cp1

0xde9e,	// (0x0004542a) list_highlight_pane_g7_cp1

0xdea6,	// (0x00045432) list_highlight_pane_g8_cp1

0xdeae,	// (0x0004543a) list_highlight_pane_g9_cp1

0x19b1,	// (0x00038f3d) form_field_slider_pane_t3

0x19bf,	// (0x00038f4b) form_field_slider_pane_t4

0xddb2,	// (0x0004533e) slider_form_pane_ParamLimits

0xddb2,	// (0x0004533e) slider_form_pane

0xc350,	// (0x000438dc) control_abbreviations

0xc350,	// (0x000438dc) control_conventions

0xc350,	// (0x000438dc) control_definitions

0xc350,	// (0x000438dc) format_table_attribute

0xe51b,	// (0x00045aa7) bg_popup_preview_window_pane_g9

0xc350,	// (0x000438dc) format_table_data2

0xc350,	// (0x000438dc) format_table_data3

0xc350,	// (0x000438dc) format_table_data_example

0x0008,

0xc350,	// (0x000438dc) intro_purpose

0xf8ef,	// (0x00046e7b) bg_popup_preview_window_pane_g

0xc350,	// (0x000438dc) texts_category

0xc350,	// (0x000438dc) texts_graphics

0xd38e,	// (0x0004491a) text_digital

0xd39d,	// (0x00044929) text_primary

0xd3ac,	// (0x00044938) text_primary_small

0xd3bb,	// (0x00044947) text_secondary

0xd3f6,	// (0x00044982) text_title

0xe982,	// (0x00045f0e) bg_passive_tab_pane_g1_cp3_srt

0xd06d,	// (0x000445f9) bg_passive_tab_pane_g2_cp3_srt

0xe98b,	// (0x00045f17) bg_passive_tab_pane_g3_cp3_srt

0xc39e,	// (0x0004392a) bg_active_tab_pane_cp3_srt_ParamLimits

0xc39e,	// (0x0004392a) bg_active_tab_pane_cp3_srt

0xe994,	// (0x00045f20) tabs_4_active_pane_srt_g1

0x1d43,	// (0x000392cf) tabs_4_active_pane_srt_t1_ParamLimits

0x1d43,	// (0x000392cf) tabs_4_active_pane_srt_t1

0xe982,	// (0x00045f0e) bg_active_tab_pane_g1_cp3_copy1

0xd06d,	// (0x000445f9) bg_active_tab_pane_g2_cp3_copy1

0xe98b,	// (0x00045f17) bg_active_tab_pane_g3_cp3_copy1

0xc3bc,	// (0x00043948) tabs_2_long_active_pane_srt_ParamLimits

0xc3bc,	// (0x00043948) tabs_2_long_active_pane_srt

0xc3bc,	// (0x00043948) tabs_2_long_passive_pane_srt_ParamLimits

0xc3bc,	// (0x00043948) tabs_2_long_passive_pane_srt

0xd3ea,	// (0x00044976) bg_passive_tab_pane_cp4_srt_ParamLimits

0xd3ea,	// (0x00044976) bg_passive_tab_pane_cp4_srt

0xe8b8,	// (0x00045e44) bg_passive_tab_pane_g1_cp4_srt

0xd06d,	// (0x000445f9) bg_passive_tab_pane_g2_cp4_srt

0xe8c1,	// (0x00045e4d) bg_passive_tab_pane_g3_cp4_srt

0xc3bc,	// (0x00043948) bg_active_tab_pane_cp4_srt_ParamLimits

0xc3bc,	// (0x00043948) bg_active_tab_pane_cp4_srt

0x1b4c,	// (0x000390d8) tabs_2_long_active_pane_srt_t1_ParamLimits

0x1b4c,	// (0x000390d8) tabs_2_long_active_pane_srt_t1

0xe8b8,	// (0x00045e44) bg_active_tab_pane_g1_cp4_srt

0xd06d,	// (0x000445f9) bg_active_tab_pane_g2_cp4_srt

0xe8c1,	// (0x00045e4d) bg_active_tab_pane_g3_cp4_srt

0xc39e,	// (0x0004392a) tabs_3_long_active_pane_srt_ParamLimits

0xc39e,	// (0x0004392a) tabs_3_long_active_pane_srt

0xc39e,	// (0x0004392a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc39e,	// (0x0004392a) tabs_3_long_passive_pane_cp_srt

0xc39e,	// (0x0004392a) tabs_3_long_passive_pane_srt_ParamLimits

0xc39e,	// (0x0004392a) tabs_3_long_passive_pane_srt

0xd3ea,	// (0x00044976) bg_passive_tab_pane_cp5_srt_ParamLimits

0xd3ea,	// (0x00044976) bg_passive_tab_pane_cp5_srt

0xd0f3,	// (0x0004467f) bg_passive_tab_pane_g1_cp5_srt

0xd06d,	// (0x000445f9) bg_passive_tab_pane_g2_cp5_srt

0xd0fc,	// (0x00044688) bg_passive_tab_pane_g3_cp5_srt

0xc3bc,	// (0x00043948) bg_active_tab_pane_cp5_srt_ParamLimits

0xc3bc,	// (0x00043948) bg_active_tab_pane_cp5_srt

0x1b36,	// (0x000390c2) tabs_3_long_active_pane_srt_t1_ParamLimits

0x1b36,	// (0x000390c2) tabs_3_long_active_pane_srt_t1

0xd0f3,	// (0x0004467f) bg_active_tab_pane_g1_cp5_srt

0xd06d,	// (0x000445f9) bg_active_tab_pane_g2_cp5_srt

0xd0fc,	// (0x00044688) bg_active_tab_pane_g3_cp5_srt

0xe8aa,	// (0x00045e36) navi_text_pane_srt_t1

0xe8a2,	// (0x00045e2e) navi_icon_pane_srt_g1

0xd50e,	// (0x00044a9a) midp_editing_number_pane_srt

0xd405,	// (0x00044991) midp_ticker_pane_srt

0xd516,	// (0x00044aa2) midp_ticker_pane_srt_g1

0xd51e,	// (0x00044aaa) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00046d03) midp_ticker_pane_srt_g

0xd526,	// (0x00044ab2) midp_ticker_pane_srt_t1

0xe893,	// (0x00045e1f) midp_editing_number_pane_t1_copy1

0xb41d,	// (0x000429a9) listscroll_midp_pane

0xb41d,	// (0x000429a9) midp_form_pane

0xd40d,	// (0x00044999) midp_info_popup_window_ParamLimits

0xd40d,	// (0x00044999) midp_info_popup_window

0xca28,	// (0x00043fb4) bg_popup_sub_pane_cp50_ParamLimits

0xca28,	// (0x00043fb4) bg_popup_sub_pane_cp50

0xdadb,	// (0x00045067) listscroll_midp_info_pane_ParamLimits

0xdadb,	// (0x00045067) listscroll_midp_info_pane

0xdab3,	// (0x0004503f) listscroll_form_midp_pane_ParamLimits

0xdab3,	// (0x0004503f) listscroll_form_midp_pane

0xdac7,	// (0x00045053) scroll_bar_cp050

0xdab3,	// (0x0004503f) list_midp_pane

0xf1ff,	// (0x0004678b) signal_pane_g2_cp

0xd9ed,	// (0x00044f79) listscroll_midp_info_pane_t1_ParamLimits

0xd9ed,	// (0x00044f79) listscroll_midp_info_pane_t1

0xda05,	// (0x00044f91) listscroll_midp_info_pane_t2_ParamLimits

0xda05,	// (0x00044f91) listscroll_midp_info_pane_t2

0xda43,	// (0x00044fcf) listscroll_midp_info_pane_t3_ParamLimits

0xda43,	// (0x00044fcf) listscroll_midp_info_pane_t3

0xda7d,	// (0x00045009) listscroll_midp_info_pane_t4_ParamLimits

0xda7d,	// (0x00045009) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00046db6) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00046db6) listscroll_midp_info_pane_t

0xcaa8,	// (0x00044034) scroll_pane_cp21

0xd991,	// (0x00044f1d) form_midp_field_choice_group_pane

0xd99a,	// (0x00044f26) form_midp_field_text_pane

0xd9d3,	// (0x00044f5f) form_midp_field_time_pane

0xd9db,	// (0x00044f67) form_midp_gauge_slider_pane

0xd9e4,	// (0x00044f70) form_midp_gauge_wait_pane

0xc350,	// (0x000438dc) form_midp_image_pane

0x0929,	// (0x00037eb5) list_single_midp_pane_ParamLimits

0x0929,	// (0x00037eb5) list_single_midp_pane

0x1992,	// (0x00038f1e) form_midp_field_text_pane_t1

0xd81c,	// (0x00044da8) input_focus_pane_cp050

0xd980,	// (0x00044f0c) list_midp_form_text_pane

0xd94f,	// (0x00044edb) form_midp_field_choice_group_pane_t1

0xd95d,	// (0x00044ee9) input_focus_pane_cp051

0xd971,	// (0x00044efd) list_midp_choice_pane

0xc350,	// (0x000438dc) status_idle_pane

0xd933,	// (0x00044ebf) form_midp_field_time_pane_t1

0xc346,	// (0x000438d2) wait_anim_pane_g2_copy1

0xd941,	// (0x00044ecd) form_midp_field_time_pane_t2

0x0001,

0xd478,	// (0x00044a04) aid_navinavi_width_2_pane

0xf825,	// (0x00046db1) form_midp_field_time_pane_t

0xc350,	// (0x000438dc) input_focus_pane_cp052

0xc350,	// (0x000438dc) bg_input_focus_pane_cp040

0xd90f,	// (0x00044e9b) form_midp_gauge_slider_pane_t1

0xd91d,	// (0x00044ea9) form_midp_gauge_slider_pane_t2

0x1976,	// (0x00038f02) form_midp_gauge_slider_pane_t3

0x1984,	// (0x00038f10) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00046da8) form_midp_gauge_slider_pane_t

0xd92b,	// (0x00044eb7) form_midp_slider_pane

0xc3bc,	// (0x00043948) bg_input_focus_pane_cp041_ParamLimits

0xc3bc,	// (0x00043948) bg_input_focus_pane_cp041

0xd8df,	// (0x00044e6b) form_midp_gauge_wait_pane_t1_ParamLimits

0xd8df,	// (0x00044e6b) form_midp_gauge_wait_pane_t1

0xd8f1,	// (0x00044e7d) form_midp_gauge_wait_pane_t2_ParamLimits

0xd8f1,	// (0x00044e7d) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00046da3) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00046da3) form_midp_gauge_wait_pane_t

0xd903,	// (0x00044e8f) form_midp_wait_pane_ParamLimits

0xd903,	// (0x00044e8f) form_midp_wait_pane

0xd8a9,	// (0x00044e35) form_midp_image_pane_g1

0xd8b2,	// (0x00044e3e) form_midp_image_pane_t1

0xd8c1,	// (0x00044e4d) form_midp_image_pane_t2

0xd8d0,	// (0x00044e5c) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00046d9c) form_midp_image_pane_t

0xd8a0,	// (0x00044e2c) list_single_midp_pane_g1

0x9467,	// (0x000409f3) list_single_midp_pane_t1

0x1964,	// (0x00038ef0) list_midp_form_item_pane_ParamLimits

0x1964,	// (0x00038ef0) list_midp_form_item_pane

0xd420,	// (0x000449ac) list_midp_form_item_pane_t1

0xd42f,	// (0x000449bb) midp_ticker_pane_g1

0xd43b,	// (0x000449c7) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00046ce9) midp_ticker_pane_g

0xd447,	// (0x000449d3) midp_ticker_pane_t1

0xe92b,	// (0x00045eb7) midp_editing_number_pane_t1

0xe909,	// (0x00045e95) midp_editing_number_pane

0xe918,	// (0x00045ea4) midp_ticker_pane

0xe883,	// (0x00045e0f) ai_message_heading_pane

0xc350,	// (0x000438dc) bg_popup_window_pane_cp14

0xe88b,	// (0x00045e17) listscroll_ai_message_pane

0xe80d,	// (0x00045d99) ai_message_heading_pane_g1_ParamLimits

0xe80d,	// (0x00045d99) ai_message_heading_pane_g1

0xe819,	// (0x00045da5) ai_message_heading_pane_g2_ParamLimits

0xe819,	// (0x00045da5) ai_message_heading_pane_g2

0xe825,	// (0x00045db1) ai_message_heading_pane_g3_ParamLimits

0xe825,	// (0x00045db1) ai_message_heading_pane_g3

0xe831,	// (0x00045dbd) ai_message_heading_pane_g4_ParamLimits

0xe831,	// (0x00045dbd) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x00046edd) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x00046edd) ai_message_heading_pane_g

0xe83d,	// (0x00045dc9) ai_message_heading_pane_t1_ParamLimits

0xe83d,	// (0x00045dc9) ai_message_heading_pane_t1

0xe857,	// (0x00045de3) ai_message_heading_pane_t2_ParamLimits

0xe857,	// (0x00045de3) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00046ee6) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00046ee6) ai_message_heading_pane_t

0xe869,	// (0x00045df5) bg_popup_heading_pane_cp1_ParamLimits

0xe869,	// (0x00045df5) bg_popup_heading_pane_cp1

0xe7fb,	// (0x00045d87) list_ai_message_pane_ParamLimits

0xe7fb,	// (0x00045d87) list_ai_message_pane

0xcaa8,	// (0x00044034) scroll_pane_cp10

0xe797,	// (0x00045d23) list_ai_message_pane_g1

0xe79f,	// (0x00045d2b) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00046eba) list_ai_message_pane_g

0xe7a7,	// (0x00045d33) list_ai_message_pane_t1_ParamLimits

0xe7a7,	// (0x00045d33) list_ai_message_pane_t1

0xe7bc,	// (0x00045d48) list_ai_message_pane_t2_ParamLimits

0xe7bc,	// (0x00045d48) list_ai_message_pane_t2

0xe7d1,	// (0x00045d5d) list_ai_message_pane_t3_ParamLimits

0xe7d1,	// (0x00045d5d) list_ai_message_pane_t3

0xe7e6,	// (0x00045d72) list_ai_message_pane_t4_ParamLimits

0xe7e6,	// (0x00045d72) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x00046ebf) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x00046ebf) list_ai_message_pane_t

0x1adb,	// (0x00039067) cell_ai_soft_ind_pane_ParamLimits

0x1adb,	// (0x00039067) cell_ai_soft_ind_pane

0xd459,	// (0x000449e5) cell_ai_soft_ind_pane_g1_ParamLimits

0xd459,	// (0x000449e5) cell_ai_soft_ind_pane_g1

0xc350,	// (0x000438dc) grid_highlight_cp1

0xd466,	// (0x000449f2) text_secondary_cp56_ParamLimits

0xd466,	// (0x000449f2) text_secondary_cp56

0xe76c,	// (0x00045cf8) example_general_pane_ParamLimits

0xe76c,	// (0x00045cf8) example_general_pane

0xe778,	// (0x00045d04) example_parent_pane_g1_ParamLimits

0xe778,	// (0x00045d04) example_parent_pane_g1

0xe784,	// (0x00045d10) example_parent_pane_t1_ParamLimits

0xe784,	// (0x00045d10) example_parent_pane_t1

0xba20,	// (0x00042fac) popup_preview_text_window_ParamLimits

0xba20,	// (0x00042fac) popup_preview_text_window

0xd316,	// (0x000448a2) list_single_pane_cp2_g4

0xc597,	// (0x00043b23) bg_popup_preview_window_pane_ParamLimits

0xc597,	// (0x00043b23) bg_popup_preview_window_pane

0xe523,	// (0x00045aaf) popup_preview_text_window_t1_ParamLimits

0xe523,	// (0x00045aaf) popup_preview_text_window_t1

0xe541,	// (0x00045acd) popup_preview_text_window_t2_ParamLimits

0xe541,	// (0x00045acd) popup_preview_text_window_t2

0xe58a,	// (0x00045b16) popup_preview_text_window_t3_ParamLimits

0xe58a,	// (0x00045b16) popup_preview_text_window_t3

0xe5cf,	// (0x00045b5b) popup_preview_text_window_t4_ParamLimits

0xe5cf,	// (0x00045b5b) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00046e8e) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00046e8e) popup_preview_text_window_t

0xe64d,	// (0x00045bd9) scroll_pane_cp11

0xd790,	// (0x00044d1c) bg_popup_preview_window_pane_g1

0xe4e3,	// (0x00045a6f) bg_popup_preview_window_pane_g2

0xe4eb,	// (0x00045a77) bg_popup_preview_window_pane_g3

0xe4f3,	// (0x00045a7f) bg_popup_preview_window_pane_g4

0xe4fb,	// (0x00045a87) bg_popup_preview_window_pane_g5

0xe503,	// (0x00045a8f) bg_popup_preview_window_pane_g6

0xe50b,	// (0x00045a97) bg_popup_preview_window_pane_g7

0xe513,	// (0x00045a9f) bg_popup_preview_window_pane_g8

0x5af3,	// (0x0003d07f) aid_popup_width_pane

0xb9a2,	// (0x00042f2e) popup_midp_note_alarm_window_ParamLimits

0xb9a2,	// (0x00042f2e) popup_midp_note_alarm_window

0xc97f,	// (0x00043f0b) data_form_pane_ParamLimits

0x07c2,	// (0x00037d4e) form_field_data_pane_g1

0x07cc,	// (0x00037d58) form_field_data_pane_t1_ParamLimits

0xc98b,	// (0x00043f17) input_focus_pane_ParamLimits

0x91ad,	// (0x00040739) data_form_wide_pane_ParamLimits

0x91be,	// (0x0004074a) form_field_data_wide_pane_g1

0x91ca,	// (0x00040756) form_field_data_wide_pane_t1_ParamLimits

0xc787,	// (0x00043d13) input_focus_pane_cp6_ParamLimits

0xb26f,	// (0x000427fb) input_popup_find_pane_g1_ParamLimits

0xb26f,	// (0x000427fb) input_popup_find_pane_g1

0x6011,	// (0x0003d59d) aid_navi_side_left_pane

0x6022,	// (0x0003d5ae) aid_navi_side_right_pane

0xdf3f,	// (0x000454cb) bg_popup_window_pane_cp30_ParamLimits

0xdf3f,	// (0x000454cb) bg_popup_window_pane_cp30

0xdfb9,	// (0x00045545) popup_midp_note_alarm_window_g1_ParamLimits

0xdfb9,	// (0x00045545) popup_midp_note_alarm_window_g1

0xdfe9,	// (0x00045575) popup_midp_note_alarm_window_t1_ParamLimits

0xdfe9,	// (0x00045575) popup_midp_note_alarm_window_t1

0xe08a,	// (0x00045616) popup_midp_note_alarm_window_t2_ParamLimits

0xe08a,	// (0x00045616) popup_midp_note_alarm_window_t2

0xe138,	// (0x000456c4) popup_midp_note_alarm_window_t3_ParamLimits

0xe138,	// (0x000456c4) popup_midp_note_alarm_window_t3

0xe160,	// (0x000456ec) popup_midp_note_alarm_window_t4_ParamLimits

0xe160,	// (0x000456ec) popup_midp_note_alarm_window_t4

0xe180,	// (0x0004570c) popup_midp_note_alarm_window_t5_ParamLimits

0xe180,	// (0x0004570c) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00046e2b) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00046e2b) popup_midp_note_alarm_window_t

0xe22c,	// (0x000457b8) wait_bar_pane_cp1_ParamLimits

0xe22c,	// (0x000457b8) wait_bar_pane_cp1

0xc350,	// (0x000438dc) wait_anim_pane_copy1

0xc350,	// (0x000438dc) wait_border_pane_copy1

0xdc7f,	// (0x0004520b) wait_border_pane_g1_copy1

0x91e4,	// (0x00040770) form_field_popup_pane_g1

0x07e4,	// (0x00037d70) form_field_popup_pane_t1_ParamLimits

0xc98b,	// (0x00043f17) input_focus_pane_cp7_ParamLimits

0xc9ad,	// (0x00043f39) list_form_pane_ParamLimits

0x9204,	// (0x00040790) form_field_popup_wide_pane_g1

0x920c,	// (0x00040798) form_field_popup_wide_pane_t1_ParamLimits

0xc98b,	// (0x00043f17) input_focus_pane_cp8_ParamLimits

0xc9b9,	// (0x00043f45) list_form_wide_pane_ParamLimits

0xe9bb,	// (0x00045f47) aid_size_cell_graphic_pane

0x085f,	// (0x00037deb) data_form_pane_t1_ParamLimits

0x094e,	// (0x00037eda) data_form_wide_pane_t1_ParamLimits

0x1597,	// (0x00038b23) bg_status_flat_pane

0xaeeb,	// (0x00042477) title_pane_t1_ParamLimits

0xc366,	// (0x000438f2) title_pane_t2_ParamLimits

0xc38c,	// (0x00043918) title_pane_t3_ParamLimits

0xf557,	// (0x00046ae3) title_pane_t_ParamLimits

0xce3c,	// (0x000443c8) level_1_signal_ParamLimits

0xce49,	// (0x000443d5) level_2_signal_ParamLimits

0xce56,	// (0x000443e2) level_3_signal_ParamLimits

0xce63,	// (0x000443ef) level_4_signal_ParamLimits

0xce70,	// (0x000443fc) level_5_signal_ParamLimits

0xce7d,	// (0x00044409) level_6_signal_ParamLimits

0xce8a,	// (0x00044416) level_7_signal_ParamLimits

0xce3c,	// (0x000443c8) level_1_battery_ParamLimits

0xce49,	// (0x000443d5) level_2_battery_ParamLimits

0xce56,	// (0x000443e2) level_3_battery_ParamLimits

0xce63,	// (0x000443ef) level_4_battery_ParamLimits

0xce70,	// (0x000443fc) level_5_battery_ParamLimits

0xce7d,	// (0x00044409) level_6_battery_ParamLimits

0xce8a,	// (0x00044416) level_7_battery_ParamLimits

0xde6e,	// (0x000453fa) bg_status_flat_pane_g1

0xde76,	// (0x00045402) bg_status_flat_pane_g2

0xde7e,	// (0x0004540a) bg_status_flat_pane_g3

0xde86,	// (0x00045412) bg_status_flat_pane_g4

0xde8e,	// (0x0004541a) bg_status_flat_pane_g5

0xde96,	// (0x00045422) bg_status_flat_pane_g6

0xde9e,	// (0x0004542a) bg_status_flat_pane_g7

0xaf77,	// (0x00042503) tabs_3_active_pane_t1_ParamLimits

0xaf77,	// (0x00042503) tabs_3_passive_pane_t1_ParamLimits

0xaf89,	// (0x00042515) tabs_4_active_pane_t1_ParamLimits

0xaf89,	// (0x00042515) tabs_4_1_passive_pane_t1_ParamLimits

0xb27b,	// (0x00042807) tabs_2_active_pane_t1_ParamLimits

0xb27b,	// (0x00042807) tabs_2_passive_pane_t1_ParamLimits

0xc3bc,	// (0x00043948) bg_active_tab_pane_cp4_ParamLimits

0xb28d,	// (0x00042819) tabs_2_long_active_pane_t1_ParamLimits

0xd3ea,	// (0x00044976) bg_passive_tab_pane_cp4_ParamLimits

0x6a30,	// (0x0003dfbc) list_single_midp_graphic_pane_t1_ParamLimits

0xc3bc,	// (0x00043948) bg_active_tab_pane_cp5_ParamLimits

0xb2a0,	// (0x0004282c) tabs_3_long_active_pane_t1_ParamLimits

0xd3ea,	// (0x00044976) bg_passive_tab_pane_cp5_ParamLimits

0x6a30,	// (0x0003dfbc) list_single_midp_graphic_pane_t1

0x1597,	// (0x00038b23) bg_status_flat_pane_ParamLimits

0xd665,	// (0x00044bf1) indicator_pane_cp2_ParamLimits

0xd665,	// (0x00044bf1) indicator_pane_cp2

0x170d,	// (0x00038c99) navi_pane_srt_ParamLimits

0x170d,	// (0x00038c99) navi_pane_srt

0xd68d,	// (0x00044c19) popup_clock_digital_analogue_window_cp1

0xc400,	// (0x0004398c) indicator_pane_t1

0xd405,	// (0x00044991) copy_highlight_pane

0xd405,	// (0x00044991) cursor_graphics_pane

0xd405,	// (0x00044991) graphic_within_text_pane

0xd405,	// (0x00044991) link_highlight_pane

0xe610,	// (0x00045b9c) popup_preview_text_window_t5_ParamLimits

0xe610,	// (0x00045b9c) popup_preview_text_window_t5

0xd480,	// (0x00044a0c) cursor_digital_pane

0xd480,	// (0x00044a0c) cursor_primary_pane

0xd491,	// (0x00044a1d) cursor_primary_small_pane

0xd499,	// (0x00044a25) cursor_secondary_pane

0xd4a1,	// (0x00044a2d) cursor_title_pane

0xd480,	// (0x00044a0c) link_highlight_digital_pane

0xd488,	// (0x00044a14) link_highlight_primary_pane

0xd491,	// (0x00044a1d) link_highlight_primary_small_pane

0xd499,	// (0x00044a25) link_highlight_secondary_pane

0xd4a1,	// (0x00044a2d) link_highlight_title_pane

0xd480,	// (0x00044a0c) copy_highlight_digital_pane

0xd480,	// (0x00044a0c) copy_highlight_primary_pane

0xd491,	// (0x00044a1d) copy_highlight_primary_small_pane

0xd499,	// (0x00044a25) copy_highlight_secondary_pane

0xd4a1,	// (0x00044a2d) copy_highlight_title_pane

0xd499,	// (0x00044a25) graphic_text_digital_pane

0xdeee,	// (0x0004547a) graphic_text_primary_pane

0xdef7,	// (0x00045483) graphic_text_primary_small_pane

0xd491,	// (0x00044a1d) graphic_text_secondary_pane

0xd480,	// (0x00044a0c) graphic_text_title_pane

0xb4b6,	// (0x00042a42) cursor_primary_pane_g1

0xdee0,	// (0x0004546c) cursor_text_primary_t1

0x19e1,	// (0x00038f6d) cursor_primary_small_pane_g1

0xded2,	// (0x0004545e) cursor_text_primary_small_t1

0x19d7,	// (0x00038f63) cursor_primary_small_pane_g1_copy1

0xdec4,	// (0x00045450) cursor_text_primary_small_t1_copy1

0xdeb6,	// (0x00045442) cursor_text_title_t1

0x19cd,	// (0x00038f59) cursor_title_pane_g1

0xb4b6,	// (0x00042a42) cursor_digital_pane_g1

0xd4a9,	// (0x00044a35) cursor_text_digital_t1

0xd4b7,	// (0x00044a43) link_highlight_primary_pane_g1

0xde5f,	// (0x000453eb) link_highlight_primary_pane_t1

0xd4b7,	// (0x00044a43) link_highlight_primary_small_pane_g1

0xd4bf,	// (0x00044a4b) link_highlight_primary_small_pane_t1

0xd4ce,	// (0x00044a5a) link_highlight_secondary_pane_g1

0xd4d6,	// (0x00044a62) link_highlight_secondary_pane_t1

0xddc4,	// (0x00045350) link_highlight_title_pane_g1

0xdddb,	// (0x00045367) link_highlight_title_pane_t1

0xddc4,	// (0x00045350) link_highlight_digital_pane_g1

0xddcc,	// (0x00045358) link_highlight_digital_pane_t1

0xdc9a,	// (0x00045226) copy_highlight_primary_pane_g1

0xdcc0,	// (0x0004524c) copy_highlight_primary_pane_t1

0xdc9a,	// (0x00045226) copy_highlight_primary_small_pane_g1

0xdcb1,	// (0x0004523d) copy_highlight_primary_small_pane_t1

0xd4e5,	// (0x00044a71) copy_highlight_secondary_pane_g1

0xd4ed,	// (0x00044a79) copy_highlight_secondary_pane_t1

0xdc9a,	// (0x00045226) copy_highlight_title_pane_g1

0xdca2,	// (0x0004522e) copy_highlight_title_pane_t1

0xdc9a,	// (0x00045226) copy_highlight_digital_pane_g1

0xeb3d,	// (0x000460c9) copy_highlight_digital_pane_t1

0xea91,	// (0x0004601d) graphic_text_primary_pane_g1

0xeb21,	// (0x000460ad) graphic_text_primary_pane_t1

0xeb2f,	// (0x000460bb) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x00046f5a) graphic_text_primary_pane_t

0xeafd,	// (0x00046089) graphic_text_primary_small_pane_g1

0xeb05,	// (0x00046091) graphic_text_primary_small_pane_t1

0xeb13,	// (0x0004609f) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x00046f55) graphic_text_primary_small_pane_t

0xead9,	// (0x00046065) graphic_text_secondary_pane_g1

0xeae1,	// (0x0004606d) graphic_text_secondary_pane_t1

0xeaef,	// (0x0004607b) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x00046f50) graphic_text_secondary_pane_t

0xeab5,	// (0x00046041) graphic_text_title_pane_g1

0xeabd,	// (0x00046049) graphic_text_title_pane_t1

0xeacb,	// (0x00046057) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x00046f4b) graphic_text_title_pane_t

0xea91,	// (0x0004601d) graphic_text_digital_pane_g1

0xea99,	// (0x00046025) graphic_text_digital_pane_t1

0xeaa7,	// (0x00046033) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x00046f46) graphic_text_digital_pane_t

0xc3bc,	// (0x00043948) navi_icon_pane_srt_ParamLimits

0xc3bc,	// (0x00043948) navi_icon_pane_srt

0xc350,	// (0x000438dc) navi_midp_pane_srt

0xc350,	// (0x000438dc) navi_navi_pane_srt

0xc3bc,	// (0x00043948) navi_text_pane_srt_ParamLimits

0xc3bc,	// (0x00043948) navi_text_pane_srt

0xea5c,	// (0x00045fe8) navi_navi_icon_text_pane_srt

0xea64,	// (0x00045ff0) navi_navi_pane_srt_g1_ParamLimits

0xea64,	// (0x00045ff0) navi_navi_pane_srt_g1

0xea76,	// (0x00046002) navi_navi_pane_srt_g2_ParamLimits

0xea76,	// (0x00046002) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x00046f41) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x00046f41) navi_navi_pane_srt_g

0xea88,	// (0x00046014) navi_navi_tabs_pane_srt

0xea5c,	// (0x00045fe8) navi_navi_text_pane_srt

0xea5c,	// (0x00045fe8) navi_navi_volume_pane_srt

0xea4d,	// (0x00045fd9) navi_navi_text_pane_srt_t1

0x700e,	// (0x0003e59a) navi_navi_volume_pane_srt_g1

0x7016,	// (0x0003e5a2) volume_small_pane_srt_ParamLimits

0x7016,	// (0x0003e5a2) volume_small_pane_srt

0x62cc,	// (0x0003d858) volume_small_pane_srt_g1_ParamLimits

0x62cc,	// (0x0003d858) volume_small_pane_srt_g1

0x62dc,	// (0x0003d868) volume_small_pane_srt_g2_ParamLimits

0x62dc,	// (0x0003d868) volume_small_pane_srt_g2

0x62ed,	// (0x0003d879) volume_small_pane_srt_g3_ParamLimits

0x62ed,	// (0x0003d879) volume_small_pane_srt_g3

0x62fe,	// (0x0003d88a) volume_small_pane_srt_g4_ParamLimits

0x62fe,	// (0x0003d88a) volume_small_pane_srt_g4

0x630f,	// (0x0003d89b) volume_small_pane_srt_g5_ParamLimits

0x630f,	// (0x0003d89b) volume_small_pane_srt_g5

0x6320,	// (0x0003d8ac) volume_small_pane_srt_g6_ParamLimits

0x6320,	// (0x0003d8ac) volume_small_pane_srt_g6

0x6331,	// (0x0003d8bd) volume_small_pane_srt_g7_ParamLimits

0x6331,	// (0x0003d8bd) volume_small_pane_srt_g7

0x6342,	// (0x0003d8ce) volume_small_pane_srt_g8_ParamLimits

0x6342,	// (0x0003d8ce) volume_small_pane_srt_g8

0x6353,	// (0x0003d8df) volume_small_pane_srt_g9_ParamLimits

0x6353,	// (0x0003d8df) volume_small_pane_srt_g9

0x6364,	// (0x0003d8f0) volume_small_pane_srt_g10_ParamLimits

0x6364,	// (0x0003d8f0) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00046cee) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00046cee) volume_small_pane_srt_g

0xc640,	// (0x00043bcc) query_popup_data_pane_cp2

0xea33,	// (0x00045fbf) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xea33,	// (0x00045fbf) navi_navi_icon_text_pane_srt_t1

0xdeee,	// (0x0004547a) navi_tabs_2_long_pane_srt

0xdeee,	// (0x0004547a) navi_tabs_2_pane_srt

0xdeee,	// (0x0004547a) navi_tabs_3_long_pane_srt

0xdeee,	// (0x0004547a) navi_tabs_3_pane_srt

0xdeee,	// (0x0004547a) navi_tabs_4_pane_srt

0x6fee,	// (0x0003e57a) tabs_2_active_pane_srt_ParamLimits

0x6fee,	// (0x0003e57a) tabs_2_active_pane_srt

0x6ffe,	// (0x0003e58a) tabs_2_passive_pane_srt_ParamLimits

0x6ffe,	// (0x0003e58a) tabs_2_passive_pane_srt

0xd81c,	// (0x00044da8) bg_passive_tab_pane_cp1_srt_ParamLimits

0xd81c,	// (0x00044da8) bg_passive_tab_pane_cp1_srt

0xea11,	// (0x00045f9d) bg_passive_tab_pane_g1_cp1_srt

0xd06d,	// (0x000445f9) bg_passive_tab_pane_g2_cp1_srt

0xea1a,	// (0x00045fa6) bg_passive_tab_pane_g3_cp1_srt

0xc39e,	// (0x0004392a) bg_active_tab_pane_cp1_srt_ParamLimits

0xc39e,	// (0x0004392a) bg_active_tab_pane_cp1_srt

0xea23,	// (0x00045faf) tabs_2_active_pane_srt_g1

0x1dc0,	// (0x0003934c) tabs_2_active_pane_srt_t1_ParamLimits

0x1dc0,	// (0x0003934c) tabs_2_active_pane_srt_t1

0xea11,	// (0x00045f9d) bg_active_tab_pane_g1_cp1_srt

0xd06d,	// (0x000445f9) bg_active_tab_pane_g2_cp1_srt

0xea1a,	// (0x00045fa6) bg_active_tab_pane_g3_cp1_srt

0x6fa9,	// (0x0003e535) tabs_3_active_pane_srt_ParamLimits

0x6fa9,	// (0x0003e535) tabs_3_active_pane_srt

0x6fba,	// (0x0003e546) tabs_3_passive_pane_cp_srt_ParamLimits

0x6fba,	// (0x0003e546) tabs_3_passive_pane_cp_srt

0x6fcb,	// (0x0003e557) tabs_3_passive_pane_srt_ParamLimits

0x6fcb,	// (0x0003e557) tabs_3_passive_pane_srt

0xd81c,	// (0x00044da8) bg_passive_tab_pane_cp2_srt_ParamLimits

0xd81c,	// (0x00044da8) bg_passive_tab_pane_cp2_srt

0xd4fc,	// (0x00044a88) bg_passive_tab_pane_g1_cp2_srt

0xd06d,	// (0x000445f9) bg_passive_tab_pane_g2_cp2_srt

0xd505,	// (0x00044a91) bg_passive_tab_pane_g3_cp2_srt

0xc39e,	// (0x0004392a) bg_active_tab_pane_cp2_srt_ParamLimits

0xc39e,	// (0x0004392a) bg_active_tab_pane_cp2_srt

0xea09,	// (0x00045f95) tabs_3_active_pane_srt_g1

0x1daa,	// (0x00039336) tabs_3_active_pane_srt_t1_ParamLimits

0x1daa,	// (0x00039336) tabs_3_active_pane_srt_t1

0xd4fc,	// (0x00044a88) bg_active_tab_pane_g1_cp2_srt

0xd06d,	// (0x000445f9) bg_active_tab_pane_g2_cp2_srt

0xd505,	// (0x00044a91) bg_active_tab_pane_g3_cp2_srt

0x6f4f,	// (0x0003e4db) tabs_4_active_pane_srt_ParamLimits

0x6f4f,	// (0x0003e4db) tabs_4_active_pane_srt

0x6f61,	// (0x0003e4ed) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6f61,	// (0x0003e4ed) tabs_4_passive_pane_cp2_srt

0x64d0,	// (0x0003da5c) aid_size_cell_toolbar

0xe4b3,	// (0x00045a3f) main_idle_act_pane_ParamLimits

0x6647,	// (0x0003dbd3) popup_large_graphic_colour_window_ParamLimits

0xbc6c,	// (0x000431f8) popup_toolbar_window_ParamLimits

0xbc6c,	// (0x000431f8) popup_toolbar_window

0xe93a,	// (0x00045ec6) list_single_graphic_2heading_pane_ParamLimits

0xe93a,	// (0x00045ec6) list_single_graphic_2heading_pane

0xcc86,	// (0x00044212) aid_size_cell_apps_grid_lsc_pane

0xcc98,	// (0x00044224) aid_size_cell_apps_grid_prt_pane

0xd3ea,	// (0x00044976) bg_wml_button_pane_cp1_ParamLimits

0xd3ea,	// (0x00044976) bg_wml_button_pane_cp1

0x1992,	// (0x00038f1e) form_midp_field_text_pane_t1_ParamLimits

0xd81c,	// (0x00044da8) input_focus_pane_cp050_ParamLimits

0xd980,	// (0x00044f0c) list_midp_form_text_pane_ParamLimits

0xd95d,	// (0x00044ee9) input_focus_pane_cp051_ParamLimits

0xd971,	// (0x00044efd) list_midp_choice_pane_ParamLimits

0x1936,	// (0x00038ec2) list_single_2graphic_pane_cp3_ParamLimits

0x1936,	// (0x00038ec2) list_single_2graphic_pane_cp3

0x1947,	// (0x00038ed3) list_single_midp_graphic_pane_ParamLimits

0x1947,	// (0x00038ed3) list_single_midp_graphic_pane

0x5a81,	// (0x0003d00d) list_single_graphic_2heading_pane_g1_ParamLimits

0x5a81,	// (0x0003d00d) list_single_graphic_2heading_pane_g1

0x5a8d,	// (0x0003d019) list_single_graphic_2heading_pane_g4_ParamLimits

0x5a8d,	// (0x0003d019) list_single_graphic_2heading_pane_g4

0x5a99,	// (0x0003d025) list_single_graphic_2heading_pane_g5_ParamLimits

0x5a99,	// (0x0003d025) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00046d41) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00046d41) list_single_graphic_2heading_pane_g

0x5aa5,	// (0x0003d031) list_single_graphic_2heading_pane_t1_ParamLimits

0x5aa5,	// (0x0003d031) list_single_graphic_2heading_pane_t1

0x5ab9,	// (0x0003d045) list_single_graphic_2heading_pane_t2_ParamLimits

0x5ab9,	// (0x0003d045) list_single_graphic_2heading_pane_t2

0x5ad3,	// (0x0003d05f) list_single_graphic_2heading_pane_t3_ParamLimits

0x5ad3,	// (0x0003d05f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00046d48) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00046d48) list_single_graphic_2heading_pane_t

0xd6d0,	// (0x00044c5c) bg_popup_sub_pane_cp2

0xd6fa,	// (0x00044c86) grid_toobar_pane

0x69a9,	// (0x0003df35) cell_toolbar_pane_ParamLimits

0x69a9,	// (0x0003df35) cell_toolbar_pane

0xd734,	// (0x00044cc0) cell_toolbar_pane_g1_ParamLimits

0xd734,	// (0x00044cc0) cell_toolbar_pane_g1

0xd748,	// (0x00044cd4) cell_toolbar_pane_g2_ParamLimits

0xd748,	// (0x00044cd4) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00046d56) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00046d56) cell_toolbar_pane_g

0xd76a,	// (0x00044cf6) grid_highlight_pane_cp2_ParamLimits

0xd76a,	// (0x00044cf6) grid_highlight_pane_cp2

0xd784,	// (0x00044d10) toolbar_button_pane

0xd790,	// (0x00044d1c) toolbar_button_pane_g1

0xd798,	// (0x00044d24) toolbar_button_pane_g2

0xd7a0,	// (0x00044d2c) toolbar_button_pane_g3

0xd7a8,	// (0x00044d34) toolbar_button_pane_g4

0xd7b0,	// (0x00044d3c) toolbar_button_pane_g5

0xd7b8,	// (0x00044d44) toolbar_button_pane_g6

0xd7c0,	// (0x00044d4c) toolbar_button_pane_g7

0xd7c8,	// (0x00044d54) toolbar_button_pane_g8

0xd7d0,	// (0x00044d5c) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00046d5b) toolbar_button_pane_g

0x69db,	// (0x0003df67) list_single_2graphic_pane_g1_cp3_ParamLimits

0x69db,	// (0x0003df67) list_single_2graphic_pane_g1_cp3

0xbcb8,	// (0x00043244) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbcb8,	// (0x00043244) list_single_2graphic_pane_g2_cp3

0x69f6,	// (0x0003df82) list_single_2graphic_pane_g3_cp3

0x69fe,	// (0x0003df8a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x69fe,	// (0x0003df8a) list_single_2graphic_pane_g4_cp3

0x6a0a,	// (0x0003df96) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6a0a,	// (0x0003df96) list_single_2graphic_pane_t1_cp3

0x6a24,	// (0x0003dfb0) list_single_midp_graphic_pane_g2_ParamLimits

0x6a24,	// (0x0003dfb0) list_single_midp_graphic_pane_g2

0x5a65,	// (0x0003cff1) aid_zoom_text_primary

0x64d8,	// (0x0003da64) aid_zoom_text_secondary

0xb50c,	// (0x00042a98) status_small_pane_g7_ParamLimits

0xb50c,	// (0x00042a98) status_small_pane_g7

0xb52f,	// (0x00042abb) status_small_pane_t1_ParamLimits

0xaec7,	// (0x00042453) title_pane_g2

0x0003,

0xf54e,	// (0x00046ada) title_pane_g

0xb18a,	// (0x00042716) aid_size_cell_colour_1_pane_ParamLimits

0xb18a,	// (0x00042716) aid_size_cell_colour_1_pane

0xb19e,	// (0x0004272a) aid_size_cell_colour_2_pane_ParamLimits

0xb19e,	// (0x0004272a) aid_size_cell_colour_2_pane

0xb1b2,	// (0x0004273e) aid_size_cell_colour_3_pane_ParamLimits

0xb1b2,	// (0x0004273e) aid_size_cell_colour_3_pane

0xb1c6,	// (0x00042752) aid_size_cell_colour_4_pane_ParamLimits

0xb1c6,	// (0x00042752) aid_size_cell_colour_4_pane

0x5f4d,	// (0x0003d4d9) title_pane_stacon_g1_ParamLimits

0x5f4d,	// (0x0003d4d9) title_pane_stacon_g1

0xdd17,	// (0x000452a3) popup_note_wait_window_g3_ParamLimits

0xdd17,	// (0x000452a3) popup_note_wait_window_g3

0xdd8d,	// (0x00045319) popup_note_wait_window_t5_ParamLimits

0xdd8d,	// (0x00045319) popup_note_wait_window_t5

0xc350,	// (0x000438dc) main_feb_china_hwr_fs_writing_pane

0xb772,	// (0x00042cfe) popup_feb_china_hwr_fs_window_ParamLimits

0xb772,	// (0x00042cfe) popup_feb_china_hwr_fs_window

0xbcc9,	// (0x00043255) aid_size_cell_hwr_fs_ParamLimits

0xbcc9,	// (0x00043255) aid_size_cell_hwr_fs

0xd81c,	// (0x00044da8) bg_popup_sub_pane_cp3_ParamLimits

0xd81c,	// (0x00044da8) bg_popup_sub_pane_cp3

0xbcde,	// (0x0004326a) grid_hwr_fs_pane_ParamLimits

0xbcde,	// (0x0004326a) grid_hwr_fs_pane

0x6a6f,	// (0x0003dffb) linegrid_hwr_fs_pane_ParamLimits

0x6a6f,	// (0x0003dffb) linegrid_hwr_fs_pane

0xbcf6,	// (0x00043282) cell_hwr_fs_pane_ParamLimits

0xbcf6,	// (0x00043282) cell_hwr_fs_pane

0xd828,	// (0x00044db4) linegrid_hwr_fs_pane_g1_ParamLimits

0xd828,	// (0x00044db4) linegrid_hwr_fs_pane_g1

0x18fc,	// (0x00038e88) linegrid_hwr_fs_pane_g2_ParamLimits

0x18fc,	// (0x00038e88) linegrid_hwr_fs_pane_g2

0xd834,	// (0x00044dc0) linegrid_hwr_fs_pane_g3_ParamLimits

0xd834,	// (0x00044dc0) linegrid_hwr_fs_pane_g3

0x6a9d,	// (0x0003e029) linegrid_hwr_fs_pane_g4_ParamLimits

0x6a9d,	// (0x0003e029) linegrid_hwr_fs_pane_g4

0x6ab7,	// (0x0003e043) linegrid_hwr_fs_pane_g5_ParamLimits

0x6ab7,	// (0x0003e043) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00046d81) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00046d81) linegrid_hwr_fs_pane_g

0xd840,	// (0x00044dcc) cell_hwr_fs_pane_g1_ParamLimits

0xd840,	// (0x00044dcc) cell_hwr_fs_pane_g1

0xd69e,	// (0x00044c2a) cell_hwr_fs_pane_g2_ParamLimits

0xd69e,	// (0x00044c2a) cell_hwr_fs_pane_g2

0x190e,	// (0x00038e9a) cell_hwr_fs_pane_g3_ParamLimits

0x190e,	// (0x00038e9a) cell_hwr_fs_pane_g3

0x191b,	// (0x00038ea7) cell_hwr_fs_pane_g4_ParamLimits

0x191b,	// (0x00038ea7) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00046d8c) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00046d8c) cell_hwr_fs_pane_g

0xbd16,	// (0x000432a2) cell_hwr_fs_pane_t1

0xc350,	// (0x000438dc) grid_highlight_pane_cp6

0xc350,	// (0x000438dc) main_idle_act2_pane

0xca8f,	// (0x0004401b) aid_inside_area_popup_secondary

0x19eb,	// (0x00038f77) aid_inside_area_window_primary_ParamLimits

0x19eb,	// (0x00038f77) aid_inside_area_window_primary

0xeb4c,	// (0x000460d8) ai2_news_ticker_pane

0xeb54,	// (0x000460e0) aid_size_cell_ai1_link_ParamLimits

0xeb54,	// (0x000460e0) aid_size_cell_ai1_link

0x1dd6,	// (0x00039362) popup_ai2_data_window_ParamLimits

0x1dd6,	// (0x00039362) popup_ai2_data_window

0xeb6e,	// (0x000460fa) popup_ai2_link_window_ParamLimits

0xeb6e,	// (0x000460fa) popup_ai2_link_window

0xd81c,	// (0x00044da8) bg_popup_sub_pane_cp4_ParamLimits

0xd81c,	// (0x00044da8) bg_popup_sub_pane_cp4

0xeb82,	// (0x0004610e) grid_ai2_link_pane_ParamLimits

0xeb82,	// (0x0004610e) grid_ai2_link_pane

0xeb99,	// (0x00046125) popup_ai2_link_window_g1_ParamLimits

0xeb99,	// (0x00046125) popup_ai2_link_window_g1

0xeba5,	// (0x00046131) popup_ai2_link_window_g2_ParamLimits

0xeba5,	// (0x00046131) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x00046f5f) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x00046f5f) popup_ai2_link_window_g

0xebb4,	// (0x00046140) ai2_mp_button_pane

0xebbc,	// (0x00046148) ai2_mp_volume_pane

0xd95d,	// (0x00044ee9) bg_popup_sub_pane_cp5_ParamLimits

0xd95d,	// (0x00044ee9) bg_popup_sub_pane_cp5

0xebc4,	// (0x00046150) heading_ai2_gene_pane_ParamLimits

0xebc4,	// (0x00046150) heading_ai2_gene_pane

0xebd0,	// (0x0004615c) list_ai2_gene_pane_ParamLimits

0xebd0,	// (0x0004615c) list_ai2_gene_pane

0xec18,	// (0x000461a4) cell_ai2_link_pane_ParamLimits

0xec18,	// (0x000461a4) cell_ai2_link_pane

0xec2e,	// (0x000461ba) cell_ai2_link_pane_g1

0xc350,	// (0x000438dc) grid_highlight_pane_cp7

0x7071,	// (0x0003e5fd) ai2_mp_volume_pane_g1

0xeccb,	// (0x00046257) ai2_mp_volume_pane_g2

0x1df7,	// (0x00039383) list_ai2_gene_pane_t1

0xecd3,	// (0x0004625f) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x00046f78) ai2_mp_volume_pane_g

0x7079,	// (0x0003e605) volume_small_pane_cp3

0xecdb,	// (0x00046267) aid_size_cell_ai2_button

0xece3,	// (0x0004626f) grid_ai2_button_pane

0xecec,	// (0x00046278) cell_ai2_button_pane_ParamLimits

0xecec,	// (0x00046278) cell_ai2_button_pane

0xc346,	// (0x000438d2) cell_ai2_button_pane_g1

0xc350,	// (0x000438dc) grid_highlight_pane_cp8

0xec8b,	// (0x00046217) ai2_gene_pane_t1_ParamLimits

0xec8b,	// (0x00046217) ai2_gene_pane_t1

0xb6f0,	// (0x00042c7c) aid_height_parent_landscape

0x1b91,	// (0x0003911d) aid_height_set_list

0xe4b3,	// (0x00045a3f) aid_size_parent

0xe9bb,	// (0x00045f47) aid_size_cell_graphic_pane_ParamLimits

0xebe0,	// (0x0004616c) popup_ai2_data_window_g1_ParamLimits

0xebe0,	// (0x0004616c) popup_ai2_data_window_g1

0xebec,	// (0x00046178) ai2_news_ticker_pane_g1

0xebf4,	// (0x00046180) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x00046f64) ai2_news_ticker_pane_g

0xebfc,	// (0x00046188) ai2_news_ticker_pane_t1

0xec0a,	// (0x00046196) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x00046f69) ai2_news_ticker_pane_t

0xec37,	// (0x000461c3) heading_ai2_gene_pane_g1

0xec3f,	// (0x000461cb) heading_ai2_gene_pane_t1_ParamLimits

0xec3f,	// (0x000461cb) heading_ai2_gene_pane_t1

0xec54,	// (0x000461e0) list_highlight_pane_cp6

0x1de2,	// (0x0003936e) ai2_gene_pane_ParamLimits

0x1de2,	// (0x0003936e) ai2_gene_pane

0x1e05,	// (0x00039391) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x00046f6e) list_ai2_gene_pane_t

0xec5c,	// (0x000461e8) list_highlight_pane_cp8_ParamLimits

0xec5c,	// (0x000461e8) list_highlight_pane_cp8

0xec6d,	// (0x000461f9) ai2_gene_pane_g1_ParamLimits

0xec6d,	// (0x000461f9) ai2_gene_pane_g1

0xec7f,	// (0x0004620b) ai2_gene_pane_g2_ParamLimits

0xec7f,	// (0x0004620b) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x00046f73) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x00046f73) ai2_gene_pane_g

0xc906,	// (0x00043e92) scroll_pane_cp12

0xb6ad,	// (0x00042c39) control_pane_t3_ParamLimits

0xb6ad,	// (0x00042c39) control_pane_t3

0xb520,	// (0x00042aac) status_small_pane_g8_ParamLimits

0xb520,	// (0x00042aac) status_small_pane_g8

0xb7e7,	// (0x00042d73) popup_find_window_ParamLimits

0xb9da,	// (0x00042f66) popup_note_image_window_ParamLimits

0x93bb,	// (0x00040947) list_double2_graphic_pane_vc_g1_ParamLimits

0x93bb,	// (0x00040947) list_double2_graphic_pane_vc_g1

0xc917,	// (0x00043ea3) list_double2_graphic_pane_vc_g2_ParamLimits

0xc917,	// (0x00043ea3) list_double2_graphic_pane_vc_g2

0xa1d6,	// (0x00041762) list_double2_graphic_pane_vc_g3_ParamLimits

0xa1d6,	// (0x00041762) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00046d4f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00046d4f) list_double2_graphic_pane_vc_g

0x93c7,	// (0x00040953) list_double2_graphic_pane_vc_t1_ParamLimits

0x93c7,	// (0x00040953) list_double2_graphic_pane_vc_t1

0xc917,	// (0x00043ea3) list_single_heading_pane_vc_g1_ParamLimits

0xc917,	// (0x00043ea3) list_single_heading_pane_vc_g1

0xa1d6,	// (0x00041762) list_single_heading_pane_vc_g2_ParamLimits

0xa1d6,	// (0x00041762) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00046b5e) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00046b5e) list_single_heading_pane_vc_g

0x93dd,	// (0x00040969) list_single_heading_pane_vc_t1_ParamLimits

0x93dd,	// (0x00040969) list_single_heading_pane_vc_t1

0x93f3,	// (0x0004097f) list_single_heading_pane_vc_t2_ParamLimits

0x93f3,	// (0x0004097f) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00046d70) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00046d70) list_single_heading_pane_vc_t

0xd7d8,	// (0x00044d64) list_setting_number_pane_vc_g1_ParamLimits

0xd7d8,	// (0x00044d64) list_setting_number_pane_vc_g1

0xd7e4,	// (0x00044d70) list_setting_number_pane_vc_g2_ParamLimits

0xd7e4,	// (0x00044d70) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x00046d75) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x00046d75) list_setting_number_pane_vc_g

0x9405,	// (0x00040991) list_setting_number_pane_vc_t1_ParamLimits

0x9405,	// (0x00040991) list_setting_number_pane_vc_t1

0x9419,	// (0x000409a5) list_setting_number_pane_vc_t2_ParamLimits

0x9419,	// (0x000409a5) list_setting_number_pane_vc_t2

0x9431,	// (0x000409bd) list_setting_number_pane_vc_t3_ParamLimits

0x9431,	// (0x000409bd) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00046d7a) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00046d7a) list_setting_number_pane_vc_t

0x9457,	// (0x000409e3) set_value_pane_vc_ParamLimits

0x9457,	// (0x000409e3) set_value_pane_vc

0xe93a,	// (0x00045ec6) list_double2_graphic_pane_vc_ParamLimits

0xe93a,	// (0x00045ec6) list_double2_graphic_pane_vc

0x9503,	// (0x00040a8f) list_double2_large_graphic_pane_vc_ParamLimits

0x9503,	// (0x00040a8f) list_double2_large_graphic_pane_vc

0xe93a,	// (0x00045ec6) list_double2_pane_vc_ParamLimits

0xe93a,	// (0x00045ec6) list_double2_pane_vc

0xe93a,	// (0x00045ec6) list_double_graphic_heading_pane_vc_ParamLimits

0xe93a,	// (0x00045ec6) list_double_graphic_heading_pane_vc

0xe93a,	// (0x00045ec6) list_double_graphic_pane_vc_ParamLimits

0xe93a,	// (0x00045ec6) list_double_graphic_pane_vc

0xe93a,	// (0x00045ec6) list_double_heading_pane_vc_ParamLimits

0xe93a,	// (0x00045ec6) list_double_heading_pane_vc

0x9513,	// (0x00040a9f) list_double_large_graphic_pane_vc_ParamLimits

0x9513,	// (0x00040a9f) list_double_large_graphic_pane_vc

0xe93a,	// (0x00045ec6) list_double_number_pane_vc_ParamLimits

0xe93a,	// (0x00045ec6) list_double_number_pane_vc

0xe93a,	// (0x00045ec6) list_double_pane_vc_ParamLimits

0xe93a,	// (0x00045ec6) list_double_pane_vc

0xe93a,	// (0x00045ec6) list_double_time_pane_vc_ParamLimits

0xe93a,	// (0x00045ec6) list_double_time_pane_vc

0xe93a,	// (0x00045ec6) list_setting_number_pane_vc_ParamLimits

0xe93a,	// (0x00045ec6) list_setting_number_pane_vc

0xe93a,	// (0x00045ec6) list_setting_pane_vc_ParamLimits

0xe93a,	// (0x00045ec6) list_setting_pane_vc

0xe93a,	// (0x00045ec6) list_single_graphic_heading_pane_vc_ParamLimits

0xe93a,	// (0x00045ec6) list_single_graphic_heading_pane_vc

0xe93a,	// (0x00045ec6) list_single_heading_pane_vc_ParamLimits

0xe93a,	// (0x00045ec6) list_single_heading_pane_vc

0xe93a,	// (0x00045ec6) list_single_number_heading_pane_vc_ParamLimits

0xe93a,	// (0x00045ec6) list_single_number_heading_pane_vc

0x93bb,	// (0x00040947) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x93bb,	// (0x00040947) list_double_graphic_heading_pane_vc_g1

0xc917,	// (0x00043ea3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc917,	// (0x00043ea3) list_double_graphic_heading_pane_vc_g2

0xa1d6,	// (0x00041762) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xa1d6,	// (0x00041762) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x00046d4f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00046d4f) list_double_graphic_heading_pane_vc_g

0x9546,	// (0x00040ad2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x9546,	// (0x00040ad2) list_double_graphic_heading_pane_vc_t1

0x955c,	// (0x00040ae8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x955c,	// (0x00040ae8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x00046f7f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x00046f7f) list_double_graphic_heading_pane_vc_t

0xd7d8,	// (0x00044d64) list_setting_pane_vc_g1_ParamLimits

0xd7d8,	// (0x00044d64) list_setting_pane_vc_g1

0xd7e4,	// (0x00044d70) list_setting_pane_vc_g2_ParamLimits

0xd7e4,	// (0x00044d70) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x00046d75) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x00046d75) list_setting_pane_vc_g

0x9574,	// (0x00040b00) list_setting_pane_vc_t1_ParamLimits

0x9574,	// (0x00040b00) list_setting_pane_vc_t1

0x958c,	// (0x00040b18) list_setting_pane_vc_t2_ParamLimits

0x958c,	// (0x00040b18) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x00046fc2) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x00046fc2) list_setting_pane_vc_t

0x9457,	// (0x000409e3) set_value_pane_cp_vc_ParamLimits

0x9457,	// (0x000409e3) set_value_pane_cp_vc

0xc917,	// (0x00043ea3) list_single_number_heading_pane_vc_g1_ParamLimits

0xc917,	// (0x00043ea3) list_single_number_heading_pane_vc_g1

0xa1d6,	// (0x00041762) list_single_number_heading_pane_vc_g2_ParamLimits

0xa1d6,	// (0x00041762) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00046b5e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00046b5e) list_single_number_heading_pane_vc_g

0x95a2,	// (0x00040b2e) list_single_number_heading_pane_vc_t1_ParamLimits

0x95a2,	// (0x00040b2e) list_single_number_heading_pane_vc_t1

0x95b8,	// (0x00040b44) list_single_number_heading_pane_vc_t2_ParamLimits

0x95b8,	// (0x00040b44) list_single_number_heading_pane_vc_t2

0x95ca,	// (0x00040b56) list_single_number_heading_pane_vc_t3_ParamLimits

0x95ca,	// (0x00040b56) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x00046fc7) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x00046fc7) list_single_number_heading_pane_vc_t

0x93bb,	// (0x00040947) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x93bb,	// (0x00040947) list_single_graphic_heading_pane_vc_g1

0xc917,	// (0x00043ea3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc917,	// (0x00043ea3) list_single_graphic_heading_pane_vc_g4

0xa1d6,	// (0x00041762) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xa1d6,	// (0x00041762) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00046d4f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00046d4f) list_single_graphic_heading_pane_vc_g

0x93dd,	// (0x00040969) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x93dd,	// (0x00040969) list_single_graphic_heading_pane_vc_t1

0x95dc,	// (0x00040b68) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x95dc,	// (0x00040b68) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x00046fce) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x00046fce) list_single_graphic_heading_pane_vc_t

0xc917,	// (0x00043ea3) list_double2_pane_vc_g1_ParamLimits

0xc917,	// (0x00043ea3) list_double2_pane_vc_g1

0xa1d6,	// (0x00041762) list_double2_pane_vc_g2_ParamLimits

0xa1d6,	// (0x00041762) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x00046b5e) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x00046b5e) list_double2_pane_vc_g

0x95ee,	// (0x00040b7a) list_double2_pane_vc_t1_ParamLimits

0x95ee,	// (0x00040b7a) list_double2_pane_vc_t1

0x9604,	// (0x00040b90) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9604,	// (0x00040b90) list_double2_large_graphic_pane_vc_g1

0x9610,	// (0x00040b9c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x9610,	// (0x00040b9c) list_double2_large_graphic_pane_vc_g2

0x961c,	// (0x00040ba8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x961c,	// (0x00040ba8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00046b76) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00046b76) list_double2_large_graphic_pane_vc_g

0x9628,	// (0x00040bb4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x9628,	// (0x00040bb4) list_double2_large_graphic_pane_vc_t1

0xa1e2,	// (0x0004176e) list_double_time_pane_vc_g1_ParamLimits

0xa1e2,	// (0x0004176e) list_double_time_pane_vc_g1

0xa1ee,	// (0x0004177a) list_double_time_pane_vc_g2_ParamLimits

0xa1ee,	// (0x0004177a) list_double_time_pane_vc_g2

0x0001,

0xfa47,	// (0x00046fd3) list_double_time_pane_vc_g_ParamLimits

0xfa47,	// (0x00046fd3) list_double_time_pane_vc_g

0x963e,	// (0x00040bca) list_double_time_pane_vc_t1_ParamLimits

0x963e,	// (0x00040bca) list_double_time_pane_vc_t1

0x965c,	// (0x00040be8) list_double_time_pane_vc_t2_ParamLimits

0x965c,	// (0x00040be8) list_double_time_pane_vc_t2

0x969a,	// (0x00040c26) list_double_time_pane_vc_t3_ParamLimits

0x969a,	// (0x00040c26) list_double_time_pane_vc_t3

0x96ac,	// (0x00040c38) list_double_time_pane_vc_t4_ParamLimits

0x96ac,	// (0x00040c38) list_double_time_pane_vc_t4

0x0003,

0xfa4c,	// (0x00046fd8) list_double_time_pane_vc_t_ParamLimits

0xfa4c,	// (0x00046fd8) list_double_time_pane_vc_t

0xc917,	// (0x00043ea3) list_double_pane_vc_g1_ParamLimits

0xc917,	// (0x00043ea3) list_double_pane_vc_g1

0xa1d6,	// (0x00041762) list_double_pane_vc_g2_ParamLimits

0xa1d6,	// (0x00041762) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x00046b5e) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x00046b5e) list_double_pane_vc_g

0x96be,	// (0x00040c4a) list_double_pane_vc_t1_ParamLimits

0x96be,	// (0x00040c4a) list_double_pane_vc_t1

0x96d0,	// (0x00040c5c) list_double_pane_vc_t2_ParamLimits

0x96d0,	// (0x00040c5c) list_double_pane_vc_t2

0x0001,

0xfa55,	// (0x00046fe1) list_double_pane_vc_t_ParamLimits

0xfa55,	// (0x00046fe1) list_double_pane_vc_t

0xc917,	// (0x00043ea3) list_double_number_pane_vc_g1_ParamLimits

0xc917,	// (0x00043ea3) list_double_number_pane_vc_g1

0xa1d6,	// (0x00041762) list_double_number_pane_vc_g2_ParamLimits

0xa1d6,	// (0x00041762) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x00046b5e) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x00046b5e) list_double_number_pane_vc_g

0x96e6,	// (0x00040c72) list_double_number_pane_vc_t1_ParamLimits

0x96e6,	// (0x00040c72) list_double_number_pane_vc_t1

0x96f8,	// (0x00040c84) list_double_number_pane_vc_t2_ParamLimits

0x96f8,	// (0x00040c84) list_double_number_pane_vc_t2

0x96d0,	// (0x00040c5c) list_double_number_pane_vc_t3_ParamLimits

0x96d0,	// (0x00040c5c) list_double_number_pane_vc_t3

0x0002,

0xfa5a,	// (0x00046fe6) list_double_number_pane_vc_t_ParamLimits

0xfa5a,	// (0x00046fe6) list_double_number_pane_vc_t

0x970a,	// (0x00040c96) list_double_large_graphic_pane_vc_g1_ParamLimits

0x970a,	// (0x00040c96) list_double_large_graphic_pane_vc_g1

0x972c,	// (0x00040cb8) list_double_large_graphic_pane_vc_g2_ParamLimits

0x972c,	// (0x00040cb8) list_double_large_graphic_pane_vc_g2

0x973d,	// (0x00040cc9) list_double_large_graphic_pane_vc_g3_ParamLimits

0x973d,	// (0x00040cc9) list_double_large_graphic_pane_vc_g3

0x9749,	// (0x00040cd5) list_double_large_graphic_pane_vc_g4_ParamLimits

0x9749,	// (0x00040cd5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa61,	// (0x00046fed) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x00046fed) list_double_large_graphic_pane_vc_g

0x9758,	// (0x00040ce4) list_double_large_graphic_pane_vc_t1_ParamLimits

0x9758,	// (0x00040ce4) list_double_large_graphic_pane_vc_t1

0x976a,	// (0x00040cf6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x976a,	// (0x00040cf6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x00046ff6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x00046ff6) list_double_large_graphic_pane_vc_t

0xc917,	// (0x00043ea3) list_double_heading_pane_vc_g1_ParamLimits

0xc917,	// (0x00043ea3) list_double_heading_pane_vc_g1

0xa1d6,	// (0x00041762) list_double_heading_pane_vc_g2_ParamLimits

0xa1d6,	// (0x00041762) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00046b5e) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00046b5e) list_double_heading_pane_vc_g

0x9784,	// (0x00040d10) list_double_heading_pane_vc_t1_ParamLimits

0x9784,	// (0x00040d10) list_double_heading_pane_vc_t1

0x9796,	// (0x00040d22) list_double_heading_pane_vc_t2_ParamLimits

0x9796,	// (0x00040d22) list_double_heading_pane_vc_t2

0x0001,

0xfa6f,	// (0x00046ffb) list_double_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x00046ffb) list_double_heading_pane_vc_t

0x97ac,	// (0x00040d38) list_double_graphic_pane_vc_g1_ParamLimits

0x97ac,	// (0x00040d38) list_double_graphic_pane_vc_g1

0xa1fa,	// (0x00041786) list_double_graphic_pane_vc_g2_ParamLimits

0xa1fa,	// (0x00041786) list_double_graphic_pane_vc_g2

0xc917,	// (0x00043ea3) list_double_graphic_pane_vc_g3_ParamLimits

0xc917,	// (0x00043ea3) list_double_graphic_pane_vc_g3

0x0003,

0xfa74,	// (0x00047000) list_double_graphic_pane_vc_g_ParamLimits

0xfa74,	// (0x00047000) list_double_graphic_pane_vc_g

0x97b8,	// (0x00040d44) list_double_graphic_pane_vc_t1_ParamLimits

0x97b8,	// (0x00040d44) list_double_graphic_pane_vc_t1

0x97d6,	// (0x00040d62) list_double_graphic_pane_vc_t2_ParamLimits

0x97d6,	// (0x00040d62) list_double_graphic_pane_vc_t2

0x0001,

0xfa7d,	// (0x00047009) list_double_graphic_pane_vc_t_ParamLimits

0xfa7d,	// (0x00047009) list_double_graphic_pane_vc_t

0x5afb,	// (0x0003d087) aid_size_cell_fastswap

0xace2,	// (0x0004226e) aid_size_cell_touch_ParamLimits

0xace2,	// (0x0004226e) aid_size_cell_touch

0x5d5e,	// (0x0003d2ea) popup_fast_swap_wide_window_ParamLimits

0x5d5e,	// (0x0003d2ea) popup_fast_swap_wide_window

0xae5e,	// (0x000423ea) touch_pane_ParamLimits

0xae5e,	// (0x000423ea) touch_pane

0xc977,	// (0x00043f03) button_value_adjust_pane_cp2

0x90f1,	// (0x0004067d) button_value_adjust_pane_cp4

0x9111,	// (0x0004069d) form_field_data_pane_cp2

0x07ba,	// (0x00037d46) form_field_data_wide_pane_cp2

0xccbd,	// (0x00044249) bg_scroll_pane_ParamLimits

0x60a8,	// (0x0003d634) scroll_handle_pane_ParamLimits

0x60bc,	// (0x0003d648) scroll_sc2_down_pane_ParamLimits

0x60bc,	// (0x0003d648) scroll_sc2_down_pane

0xccee,	// (0x0004427a) scroll_sc2_up_pane_ParamLimits

0xccee,	// (0x0004427a) scroll_sc2_up_pane

0x1f1b,	// (0x000394a7) grid_wheel_folder_pane_g1_ParamLimits

0x1f1b,	// (0x000394a7) grid_wheel_folder_pane_g1

0x6270,	// (0x0003d7fc) clock_nsta_pane_cp2_ParamLimits

0x6270,	// (0x0003d7fc) clock_nsta_pane_cp2

0xb41d,	// (0x000429a9) listscroll_midp_pane_ParamLimits

0xb429,	// (0x000429b5) midp_canvas_pane

0xd576,	// (0x00044b02) nsta_clock_indic_pane

0xd59e,	// (0x00044b2a) listscroll_form_pane_vc

0xd5a6,	// (0x00044b32) listscroll_set_pane_vc_ParamLimits

0xd5a6,	// (0x00044b32) listscroll_set_pane_vc

0x15bf,	// (0x00038b4b) clock_nsta_pane

0x15e9,	// (0x00038b75) indicator_nsta_pane

0xd6d0,	// (0x00044c5c) bg_popup_sub_pane_cp2_ParamLimits

0xd6e4,	// (0x00044c70) find_pane_cp2_ParamLimits

0xd6e4,	// (0x00044c70) find_pane_cp2

0xd6fa,	// (0x00044c86) grid_toobar_pane_ParamLimits

0xd7f0,	// (0x00044d7c) list_form_gen_pane_vc_ParamLimits

0xd7f0,	// (0x00044d7c) list_form_gen_pane_vc

0xd806,	// (0x00044d92) scroll_pane_cp8_vc_ParamLimits

0xd806,	// (0x00044d92) scroll_pane_cp8_vc

0xd856,	// (0x00044de2) data_form_wide_pane_vc_ParamLimits

0xd856,	// (0x00044de2) data_form_wide_pane_vc

0xd862,	// (0x00044dee) form_field_data_wide_pane_vc_g1

0xd86a,	// (0x00044df6) form_field_data_wide_pane_vc_t1_ParamLimits

0xd86a,	// (0x00044df6) form_field_data_wide_pane_vc_t1

0xc98b,	// (0x00043f17) input_focus_pane_cp6_vc_ParamLimits

0xc98b,	// (0x00043f17) input_focus_pane_cp6_vc

0xdab3,	// (0x0004503f) list_midp_pane_ParamLimits

0xe4c5,	// (0x00045a51) scroll_pane_cp16_ParamLimits

0xe4c5,	// (0x00045a51) scroll_pane_cp16

0xdafd,	// (0x00045089) button_value_adjust_pane_ParamLimits

0xdafd,	// (0x00045089) button_value_adjust_pane

0x1ba2,	// (0x0003912e) button_value_adjust_pane_cp6_ParamLimits

0x1ba2,	// (0x0003912e) button_value_adjust_pane_cp6

0x1cac,	// (0x00039238) settings_code_pane_cp_ParamLimits

0x1cac,	// (0x00039238) settings_code_pane_cp

0xc346,	// (0x000438d2) cell_touch_pane_g1

0xc346,	// (0x000438d2) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00046c94) cell_touch_pane_g

0x1e13,	// (0x0003939f) cell_touch_pane_cp_ParamLimits

0x1e13,	// (0x0003939f) cell_touch_pane_cp

0x1e2f,	// (0x000393bb) cell_touch_pane_ParamLimits

0x1e2f,	// (0x000393bb) cell_touch_pane

0xc346,	// (0x000438d2) scroll_sc2_down_pane_g1

0xc346,	// (0x000438d2) scroll_sc2_up_pane_g1

0xc350,	// (0x000438dc) bg_set_opt_pane_cp4_vc

0xecfe,	// (0x0004628a) list_set_graphic_pane_vc_g1_ParamLimits

0xecfe,	// (0x0004628a) list_set_graphic_pane_vc_g1

0xed0a,	// (0x00046296) list_set_graphic_pane_vc_g2_ParamLimits

0xed0a,	// (0x00046296) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x00046f84) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x00046f84) list_set_graphic_pane_vc_g

0xed16,	// (0x000462a2) text_primary_small_cp13_vc_ParamLimits

0xed16,	// (0x000462a2) text_primary_small_cp13_vc

0xe4a2,	// (0x00045a2e) list_set_graphic_pane_vc_ParamLimits

0xe4a2,	// (0x00045a2e) list_set_graphic_pane_vc

0xc350,	// (0x000438dc) input_focus_pane_cp2_vc

0xc346,	// (0x000438d2) setting_code_pane_vc_g1

0xc3d3,	// (0x0004395f) setting_code_pane_vc_t1

0xed2e,	// (0x000462ba) set_text_pane_vc_t1_ParamLimits

0xed2e,	// (0x000462ba) set_text_pane_vc_t1

0xc350,	// (0x000438dc) input_focus_pane_cp1_vc

0xed48,	// (0x000462d4) list_set_text_pane_vc

0xc346,	// (0x000438d2) setting_text_pane_vc_g1

0xc350,	// (0x000438dc) bg_set_opt_pane_cp2_vc

0xc3ca,	// (0x00043956) setting_slider_graphic_pane_vc_g1

0xed52,	// (0x000462de) setting_slider_graphic_pane_vc_t1

0xed61,	// (0x000462ed) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x00046f89) setting_slider_graphic_pane_vc_t

0xed70,	// (0x000462fc) slider_set_pane_cp_vc

0xed78,	// (0x00046304) slider_set_pane_vc_g1

0xed81,	// (0x0004630d) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x00046f8e) slider_set_pane_vc_g

0xc9d7,	// (0x00043f63) set_opt_bg_pane_g1_copy1

0xc9df,	// (0x00043f6b) set_opt_bg_pane_g2_copy1

0xedad,	// (0x00046339) set_opt_bg_pane_g3_copy1

0xc9ef,	// (0x00043f7b) set_opt_bg_pane_g4_copy1

0xc9f7,	// (0x00043f83) set_opt_bg_pane_g5_copy1

0xc9ff,	// (0x00043f8b) set_opt_bg_pane_g6_copy1

0xedb5,	// (0x00046341) set_opt_bg_pane_g7_copy1

0xedbd,	// (0x00046349) set_opt_bg_pane_g8_copy1

0xedc5,	// (0x00046351) set_opt_bg_pane_g9_copy1

0xc350,	// (0x000438dc) bg_set_opt_pane_cp_vc

0xedcd,	// (0x00046359) setting_slider_pane_vc_t1

0xeddc,	// (0x00046368) setting_slider_pane_vc_t2

0xedeb,	// (0x00046377) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x00046f9d) setting_slider_pane_vc_t

0xedfa,	// (0x00046386) slider_set_pane_vc

0x6adb,	// (0x0003e067) volume_set_pane_vc_g1

0x70a4,	// (0x0003e630) volume_set_pane_vc_g2

0x70ad,	// (0x0003e639) volume_set_pane_vc_g3

0x70b6,	// (0x0003e642) volume_set_pane_vc_g4

0x70bf,	// (0x0003e64b) volume_set_pane_vc_g5

0x70c8,	// (0x0003e654) volume_set_pane_vc_g6

0x70d1,	// (0x0003e65d) volume_set_pane_vc_g7

0x70da,	// (0x0003e666) volume_set_pane_vc_g8

0x70e3,	// (0x0003e66f) volume_set_pane_vc_g9

0x70ec,	// (0x0003e678) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x00046fa4) volume_set_pane_vc_g

0xee02,	// (0x0004638e) volume_set_pane_vc

0xee0a,	// (0x00046396) button_value_adjust_pane_cp1_vc

0xee12,	// (0x0004639e) list_highlight_pane_cp2_vc

0xee1b,	// (0x000463a7) list_set_pane_vc_ParamLimits

0xee1b,	// (0x000463a7) list_set_pane_vc

0xee6d,	// (0x000463f9) main_pane_set_vc_t1_ParamLimits

0xee6d,	// (0x000463f9) main_pane_set_vc_t1

0xee82,	// (0x0004640e) main_pane_set_vc_t2_ParamLimits

0xee82,	// (0x0004640e) main_pane_set_vc_t2

0xee94,	// (0x00046420) main_pane_set_vc_t3_ParamLimits

0xee94,	// (0x00046420) main_pane_set_vc_t3

0xeea6,	// (0x00046432) main_pane_set_vc_t4_ParamLimits

0xeea6,	// (0x00046432) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x00046fb9) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x00046fb9) main_pane_set_vc_t

0xeeb8,	// (0x00046444) setting_code_pane_vc_ParamLimits

0xeeb8,	// (0x00046444) setting_code_pane_vc

0xeec7,	// (0x00046453) setting_slider_graphic_pane_vc

0xeec7,	// (0x00046453) setting_slider_pane_vc

0xeec7,	// (0x00046453) setting_text_pane_vc

0xeec7,	// (0x00046453) setting_volume_pane_vc

0xeecf,	// (0x0004645b) scroll_pane_cp121_vc

0xc965,	// (0x00043ef1) set_content_pane_vc

0xeed7,	// (0x00046463) button_value_adjust_pane_g1

0xeee0,	// (0x0004646c) button_value_adjust_pane_g2

0x0001,

0xfa82,	// (0x0004700e) button_value_adjust_pane_g

0xeee9,	// (0x00046475) form_field_slider_wide_pane_vc_t1_ParamLimits

0xeee9,	// (0x00046475) form_field_slider_wide_pane_vc_t1

0xeefb,	// (0x00046487) form_field_slider_wide_pane_vc_t2_ParamLimits

0xeefb,	// (0x00046487) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa87,	// (0x00047013) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa87,	// (0x00047013) form_field_slider_wide_pane_vc_t

0xc39e,	// (0x0004392a) input_focus_pane_cp10_vc_ParamLimits

0xc39e,	// (0x0004392a) input_focus_pane_cp10_vc

0xef23,	// (0x000464af) slider_cont_pane_cp1_vc_ParamLimits

0xef23,	// (0x000464af) slider_cont_pane_cp1_vc

0xef33,	// (0x000464bf) slider_form_pane_g1_cp2

0xed81,	// (0x0004630d) slider_form_pane_g2_cp2

0xef60,	// (0x000464ec) form_field_slider_pane_vc_t3

0xef6e,	// (0x000464fa) form_field_slider_pane_vc_t4

0xef7c,	// (0x00046508) slider_form_pane_vc_ParamLimits

0xef7c,	// (0x00046508) slider_form_pane_vc

0xef89,	// (0x00046515) form_field_slider_pane_vc_t1_ParamLimits

0xef89,	// (0x00046515) form_field_slider_pane_vc_t1

0xeefb,	// (0x00046487) form_field_slider_pane_vc_t2_ParamLimits

0xeefb,	// (0x00046487) form_field_slider_pane_vc_t2

0x0001,

0xfa99,	// (0x00047025) form_field_slider_pane_vc_t_ParamLimits

0xfa99,	// (0x00047025) form_field_slider_pane_vc_t

0xc39e,	// (0x0004392a) input_focus_pane_cp9_vc_ParamLimits

0xc39e,	// (0x0004392a) input_focus_pane_cp9_vc

0xef9f,	// (0x0004652b) slider_cont_pane_vc_ParamLimits

0xef9f,	// (0x0004652b) slider_cont_pane_vc

0xefb1,	// (0x0004653d) list_form_graphic_pane_cp_vc_ParamLimits

0xefb1,	// (0x0004653d) list_form_graphic_pane_cp_vc

0xd862,	// (0x00044dee) form_field_popup_wide_pane_vc_g1

0xefc6,	// (0x00046552) form_field_popup_wide_pane_vc_t1_ParamLimits

0xefc6,	// (0x00046552) form_field_popup_wide_pane_vc_t1

0xc98b,	// (0x00043f17) input_focus_pane_cp8_vc_ParamLimits

0xc98b,	// (0x00043f17) input_focus_pane_cp8_vc

0xf005,	// (0x00046591) list_form_wide_pane_vc_ParamLimits

0xf005,	// (0x00046591) list_form_wide_pane_vc

0xf011,	// (0x0004659d) list_form_graphic_pane_vc_g1

0xf019,	// (0x000465a5) list_form_graphic_pane_vc_t1_ParamLimits

0xf019,	// (0x000465a5) list_form_graphic_pane_vc_t1

0xc3bc,	// (0x00043948) list_highlight_pane_cp5_vc_ParamLimits

0xc3bc,	// (0x00043948) list_highlight_pane_cp5_vc

0xf035,	// (0x000465c1) list_form_graphic_pane_vc_ParamLimits

0xf035,	// (0x000465c1) list_form_graphic_pane_vc

0xd862,	// (0x00044dee) form_field_popup_pane_vc_g1

0xf04b,	// (0x000465d7) form_field_popup_pane_vc_t1_ParamLimits

0xf04b,	// (0x000465d7) form_field_popup_pane_vc_t1

0xc98b,	// (0x00043f17) input_focus_pane_cp7_vc_ParamLimits

0xc98b,	// (0x00043f17) input_focus_pane_cp7_vc

0xf060,	// (0x000465ec) list_form_pane_vc_ParamLimits

0xf060,	// (0x000465ec) list_form_pane_vc

0xf06c,	// (0x000465f8) data_form_pane_vc_t1_ParamLimits

0xf06c,	// (0x000465f8) data_form_pane_vc_t1

0xc9d7,	// (0x00043f63) input_focus_pane_vc_g1

0xc9df,	// (0x00043f6b) input_focus_pane_vc_g2

0xc9e7,	// (0x00043f73) input_focus_pane_vc_g3

0xc9ef,	// (0x00043f7b) input_focus_pane_vc_g4

0xc9f7,	// (0x00043f83) input_focus_pane_vc_g5

0xc9ff,	// (0x00043f8b) input_focus_pane_vc_g6

0xca07,	// (0x00043f93) input_focus_pane_vc_g7

0xca0f,	// (0x00043f9b) input_focus_pane_vc_g8

0xca17,	// (0x00043fa3) input_focus_pane_vc_g9

0xc346,	// (0x000438d2) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00046c1d) input_focus_pane_vc_g

0xd856,	// (0x00044de2) data_form_pane_vc_ParamLimits

0xd856,	// (0x00044de2) data_form_pane_vc

0xd862,	// (0x00044dee) form_field_data_pane_vc_g1

0xf087,	// (0x00046613) form_field_data_pane_vc_t1_ParamLimits

0xf087,	// (0x00046613) form_field_data_pane_vc_t1

0xc98b,	// (0x00043f17) input_focus_pane_vc_ParamLimits

0xc98b,	// (0x00043f17) input_focus_pane_vc

0xf09d,	// (0x00046629) button_value_adjust_pane_cp3_vc

0xf0a5,	// (0x00046631) button_value_adjust_pane_cp5_vc

0xf0ad,	// (0x00046639) form_field_data_pane_vc_ParamLimits

0xf0ad,	// (0x00046639) form_field_data_pane_vc

0xf0c4,	// (0x00046650) form_field_data_pane_vc_cp2

0xf0cc,	// (0x00046658) form_field_data_wide_pane_vc_ParamLimits

0xf0cc,	// (0x00046658) form_field_data_wide_pane_vc

0xf0e2,	// (0x0004666e) form_field_data_wide_pane_vc_cp2

0xf0ea,	// (0x00046676) form_field_popup_pane_vc_ParamLimits

0xf0ea,	// (0x00046676) form_field_popup_pane_vc

0xf101,	// (0x0004668d) form_field_popup_wide_pane_vc_ParamLimits

0xf101,	// (0x0004668d) form_field_popup_wide_pane_vc

0xf117,	// (0x000466a3) form_field_slider_pane_vc_ParamLimits

0xf117,	// (0x000466a3) form_field_slider_pane_vc

0xf12a,	// (0x000466b6) form_field_slider_wide_pane_vc_ParamLimits

0xf12a,	// (0x000466b6) form_field_slider_wide_pane_vc

0x1e4d,	// (0x000393d9) grid_touch_1_pane_ParamLimits

0x1e4d,	// (0x000393d9) grid_touch_1_pane

0x1e61,	// (0x000393ed) grid_touch_2_pane_ParamLimits

0x1e61,	// (0x000393ed) grid_touch_2_pane

0xf13d,	// (0x000466c9) touch_pane_g1_ParamLimits

0xf13d,	// (0x000466c9) touch_pane_g1

0xf14b,	// (0x000466d7) cell_app_pane_cp_wide_ParamLimits

0xf14b,	// (0x000466d7) cell_app_pane_cp_wide

0xf15c,	// (0x000466e8) grid_popup_fast_wide_pane_ParamLimits

0xf15c,	// (0x000466e8) grid_popup_fast_wide_pane

0xf170,	// (0x000466fc) scroll_pane_cp19_ParamLimits

0xf170,	// (0x000466fc) scroll_pane_cp19

0xc350,	// (0x000438dc) bg_popup_window_pane_cp20

0xf184,	// (0x00046710) listscroll_popup_fast_wide_pane

0xd3ca,	// (0x00044956) grid_indicator_nsta_pane

0xf18c,	// (0x00046718) clock_nsta_pane_g1

0xf195,	// (0x00046721) clock_nsta_pane_t1

0x1e8b,	// (0x00039417) cell_indicator_nsta_pane_ParamLimits

0x1e8b,	// (0x00039417) cell_indicator_nsta_pane

0xf13d,	// (0x000466c9) cell_indicator_nsta_pane_g1

0x1ea2,	// (0x0003942e) cell_indicator_nsta_pane_g2

0x0001,

0xfaaa,	// (0x00047036) cell_indicator_nsta_pane_g

0xf1b1,	// (0x0004673d) clock_nsta_pane_cp

0xf1b9,	// (0x00046745) indicator_nsta_pane_cp

0xf1c1,	// (0x0004674d) nsta_clock_indic_pane_g1

0xc3f8,	// (0x00043984) grid_indicator_pane

0xcde0,	// (0x0004436c) scroll_pane_cp29

0x61c7,	// (0x0003d753) indicator_nsta_pane_cp2_ParamLimits

0x61c7,	// (0x0003d753) indicator_nsta_pane_cp2

0xc3bc,	// (0x00043948) main_apps_wheel_pane

0xd99a,	// (0x00044f26) form_midp_field_text_pane_ParamLimits

0xdac7,	// (0x00045053) scroll_bar_cp050_ParamLimits

0xf211,	// (0x0004679d) cell_indicator_pane_ParamLimits

0xf211,	// (0x0004679d) cell_indicator_pane

0xf225,	// (0x000467b1) cell_indicator_pane_g1

0x1eaf,	// (0x0003943b) grid_wheel_folder_pane_ParamLimits

0x1eaf,	// (0x0003943b) grid_wheel_folder_pane

0x1ebd,	// (0x00039449) list_wheel_apps_pane_ParamLimits

0x1ebd,	// (0x00039449) list_wheel_apps_pane

0x1ec9,	// (0x00039455) main_apps_wheel_pane_g1_ParamLimits

0x1ec9,	// (0x00039455) main_apps_wheel_pane_g1

0x1ed5,	// (0x00039461) main_apps_wheel_pane_g2_ParamLimits

0x1ed5,	// (0x00039461) main_apps_wheel_pane_g2

0x0001,

0xfac6,	// (0x00047052) main_apps_wheel_pane_g_ParamLimits

0xfac6,	// (0x00047052) main_apps_wheel_pane_g

0x1ee1,	// (0x0003946d) main_apps_wheel_pane_t1_ParamLimits

0x1ee1,	// (0x0003946d) main_apps_wheel_pane_t1

0x1ef3,	// (0x0003947f) list_wheel_apps_pane_g1

0x1efb,	// (0x00039487) list_wheel_apps_pane_g2

0x1f03,	// (0x0003948f) list_wheel_apps_pane_g3

0x1f0b,	// (0x00039497) list_wheel_apps_pane_g4

0x1f13,	// (0x0003949f) list_wheel_apps_pane_g5

0x0004,

0xfacb,	// (0x00047057) list_wheel_apps_pane_g

0xd267,	// (0x000447f3) navi_icon_text_pane

0x14c7,	// (0x00038a53) aid_fill_nsta

0xf22f,	// (0x000467bb) navi_icon_text_pane_g1

0xf23b,	// (0x000467c7) navi_icon_text_pane_t1

0xd11d,	// (0x000446a9) list_set_graphic_pane_t1_ParamLimits

0xd11d,	// (0x000446a9) list_set_graphic_pane_t1

0xe1af,	// (0x0004573b) popup_midp_note_alarm_window_t6_ParamLimits

0xe1af,	// (0x0004573b) popup_midp_note_alarm_window_t6

0xe1c1,	// (0x0004574d) popup_midp_note_alarm_window_t7_ParamLimits

0xe1c1,	// (0x0004574d) popup_midp_note_alarm_window_t7

0xe1d3,	// (0x0004575f) popup_midp_note_alarm_window_t8_ParamLimits

0xe1d3,	// (0x0004575f) popup_midp_note_alarm_window_t8

0xe1e5,	// (0x00045771) popup_midp_note_alarm_window_t9_ParamLimits

0xe1e5,	// (0x00045771) popup_midp_note_alarm_window_t9

0xe1f7,	// (0x00045783) popup_midp_note_alarm_window_t10_ParamLimits

0xe1f7,	// (0x00045783) popup_midp_note_alarm_window_t10

0xe209,	// (0x00045795) popup_midp_note_alarm_window_t11_ParamLimits

0xe209,	// (0x00045795) popup_midp_note_alarm_window_t11

0xe21b,	// (0x000457a7) scroll_pane_cp17_ParamLimits

0xe21b,	// (0x000457a7) scroll_pane_cp17

0x6adb,	// (0x0003e067) volume_small_pane_cp_g1

0x71fc,	// (0x0003e788) volume_small_pane_cp_g2

0x7205,	// (0x0003e791) volume_small_pane_cp_g3

0x720e,	// (0x0003e79a) volume_small_pane_cp_g4

0x7217,	// (0x0003e7a3) volume_small_pane_cp_g5

0x7220,	// (0x0003e7ac) volume_small_pane_cp_g6

0x7229,	// (0x0003e7b5) volume_small_pane_cp_g7

0x7232,	// (0x0003e7be) volume_small_pane_cp_g8

0x723b,	// (0x0003e7c7) volume_small_pane_cp_g9

0x7244,	// (0x0003e7d0) volume_small_pane_cp_g10

0xd42f,	// (0x000449bb) midp_ticker_pane_g1_ParamLimits

0xd43b,	// (0x000449c7) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00046ce9) midp_ticker_pane_g_ParamLimits

0xd447,	// (0x000449d3) midp_ticker_pane_t1_ParamLimits

0x14e3,	// (0x00038a6f) aid_fill_nsta_2

0xdabf,	// (0x0004504b) list_form2_midp_pane

0xe909,	// (0x00045e95) midp_editing_number_pane_ParamLimits

0xe918,	// (0x00045ea4) midp_ticker_pane_ParamLimits

0xf24d,	// (0x000467d9) form2_midp_field_pane

0xf255,	// (0x000467e1) scroll_pane_cp51

0xf275,	// (0x00046801) form2_midp_button_pane_ParamLimits

0xf275,	// (0x00046801) form2_midp_button_pane

0xf287,	// (0x00046813) form2_midp_content_pane_ParamLimits

0xf287,	// (0x00046813) form2_midp_content_pane

0xf2a1,	// (0x0004682d) form2_midp_field_choice_group_pane

0xf2a9,	// (0x00046835) form2_midp_field_pane_g1

0xf2b1,	// (0x0004683d) form2_midp_field_pane_g2

0xf2b9,	// (0x00046845) form2_midp_field_pane_g3

0xf2c1,	// (0x0004684d) form2_midp_field_pane_g4

0x0003,

0xfaf0,	// (0x0004707c) form2_midp_field_pane_g

0xf2c9,	// (0x00046855) form2_midp_gauge_slider_pane

0xf2d1,	// (0x0004685d) form2_midp_gauge_wait_pane

0xf2d9,	// (0x00046865) form2_midp_image_pane_ParamLimits

0xf2d9,	// (0x00046865) form2_midp_image_pane

0x1f48,	// (0x000394d4) form2_midp_label_pane_ParamLimits

0x1f48,	// (0x000394d4) form2_midp_label_pane

0x1f61,	// (0x000394ed) form2_midp_label_pane_cp_ParamLimits

0x1f61,	// (0x000394ed) form2_midp_label_pane_cp

0xf2f4,	// (0x00046880) form2_midp_string_pane_ParamLimits

0xf2f4,	// (0x00046880) form2_midp_string_pane

0x0986,	// (0x00037f12) form2_midp_text_pane_ParamLimits

0x0986,	// (0x00037f12) form2_midp_text_pane

0xf306,	// (0x00046892) form2_midp_time_pane

0xf316,	// (0x000468a2) input_focus_pane_cp51_ParamLimits

0xf316,	// (0x000468a2) input_focus_pane_cp51

0x1f80,	// (0x0003950c) form2_midp_label_pane_t1_ParamLimits

0x1f80,	// (0x0003950c) form2_midp_label_pane_t1

0x099f,	// (0x00037f2b) form2_mdip_text_pane_t1_ParamLimits

0x099f,	// (0x00037f2b) form2_mdip_text_pane_t1

0x9826,	// (0x00040db2) form2_midp_time_pane_t1

0xf336,	// (0x000468c2) form2_midp_gauge_slider_pane_t1

0x1fbb,	// (0x00039547) form2_midp_gauge_slider_pane_t2

0x1fcd,	// (0x00039559) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf9,	// (0x00047085) form2_midp_gauge_slider_pane_t

0xf348,	// (0x000468d4) form2_midp_slider_pane

0xf354,	// (0x000468e0) form2_midp_gauge_wait_pane_t1

0xf362,	// (0x000468ee) form2_midp_wait_pane_ParamLimits

0xf362,	// (0x000468ee) form2_midp_wait_pane

0xe484,	// (0x00045a10) list_single_2graphic_pane_cp4_ParamLimits

0xe484,	// (0x00045a10) list_single_2graphic_pane_cp4

0x1947,	// (0x00038ed3) list_single_midp_graphic_pane_cp_ParamLimits

0x1947,	// (0x00038ed3) list_single_midp_graphic_pane_cp

0xc350,	// (0x000438dc) list_highlight_pane_cp20

0xf38d,	// (0x00046919) list_single_2graphic_pane_g1_cp4

0xec37,	// (0x000461c3) list_single_2graphic_pane_g2_cp4

0xf395,	// (0x00046921) list_single_2graphic_pane_t1_cp4

0xc3bc,	// (0x00043948) list_highlight_pane_cp21

0xf3a4,	// (0x00046930) list_single_midp_graphic_pane_g4_cp

0xf3b3,	// (0x0004693f) list_single_midp_graphic_pane_t1_cp

0x1fdf,	// (0x0003956b) form2_mdip_string_pane_t1_ParamLimits

0x1fdf,	// (0x0003956b) form2_mdip_string_pane_t1

0xc350,	// (0x000438dc) bg_wml_button_pane_cp2

0xc346,	// (0x000438d2) form2_midp_image_pane_g1

0xa1a6,	// (0x00041732) list_double_large_graphic_pane_g5_ParamLimits

0xa1a6,	// (0x00041732) list_double_large_graphic_pane_g5

0xb41d,	// (0x000429a9) midp_form_pane_ParamLimits

0xc3bc,	// (0x00043948) main_apps_wheel_pane_ParamLimits

0xba54,	// (0x00042fe0) popup_preview_window_ParamLimits

0xba54,	// (0x00042fe0) popup_preview_window

0x6958,	// (0x0003dee4) popup_touch_info_window_ParamLimits

0x6958,	// (0x0003dee4) popup_touch_info_window

0x6976,	// (0x0003df02) popup_touch_menu_window_ParamLimits

0x6976,	// (0x0003df02) popup_touch_menu_window

0xc33c,	// (0x000438c8) bg_popup_sub_pane_cp6

0xf3c8,	// (0x00046954) list_touch_menu_pane

0xf3d0,	// (0x0004695c) list_single_touch_menu_pane_ParamLimits

0xf3d0,	// (0x0004695c) list_single_touch_menu_pane

0xf3e4,	// (0x00046970) list_single_touch_menu_pane_t1

0xc3bc,	// (0x00043948) bg_popup_sub_pane_cp7_ParamLimits

0xc3bc,	// (0x00043948) bg_popup_sub_pane_cp7

0xf3f2,	// (0x0004697e) heading_sub_pane

0xf3fa,	// (0x00046986) list_touch_info_pane_ParamLimits

0xf3fa,	// (0x00046986) list_touch_info_pane

0xf409,	// (0x00046995) list_single_touch_info_pane_ParamLimits

0xf409,	// (0x00046995) list_single_touch_info_pane

0xf41a,	// (0x000469a6) list_single_touch_info_pane_t1

0xf428,	// (0x000469b4) list_single_touch_info_pane_t2

0x0001,

0xfb07,	// (0x00047093) list_single_touch_info_pane_t

0xd405,	// (0x00044991) bg_popup_heading_pane_cp

0xf436,	// (0x000469c2) heading_sub_pane_t1

0xd81c,	// (0x00044da8) bg_popup_preview_window_pane_cp_ParamLimits

0xd81c,	// (0x00044da8) bg_popup_preview_window_pane_cp

0xf3f2,	// (0x0004697e) heading_preview_pane

0xf3fa,	// (0x00046986) list_preview_pane_ParamLimits

0xf3fa,	// (0x00046986) list_preview_pane

0xf444,	// (0x000469d0) popup_preview_window_g1

0xf409,	// (0x00046995) list_single_preview_pane_ParamLimits

0xf409,	// (0x00046995) list_single_preview_pane

0xf44c,	// (0x000469d8) list_single_preview_pane_g1

0xf454,	// (0x000469e0) list_single_preview_pane_t1

0xf41a,	// (0x000469a6) list_single_preview_pane_t2

0x0001,

0xfb0c,	// (0x00047098) list_single_preview_pane_t

0xf462,	// (0x000469ee) bg_popup_heading_pane_cp2_ParamLimits

0xf462,	// (0x000469ee) bg_popup_heading_pane_cp2

0xf478,	// (0x00046a04) heading_preview_pane_g1

0xf480,	// (0x00046a0c) heading_preview_pane_t1_ParamLimits

0xf480,	// (0x00046a0c) heading_preview_pane_t1

0xc40f,	// (0x0004399b) soft_indicator_pane_t1_ParamLimits

0xc8e3,	// (0x00043e6f) scroll_pane_ParamLimits

0xccdc,	// (0x00044268) scroll_sc2_left_pane

0xcce5,	// (0x00044271) scroll_sc2_right_pane

0xcd04,	// (0x00044290) scroll_bg_pane_g1_ParamLimits

0xcd19,	// (0x000442a5) scroll_bg_pane_g2_ParamLimits

0xcd31,	// (0x000442bd) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00046c74) scroll_bg_pane_g_ParamLimits

0xcd04,	// (0x00044290) scroll_handle_pane_g1_ParamLimits

0xcd53,	// (0x000442df) scroll_handle_pane_g2_ParamLimits

0xcd31,	// (0x000442bd) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00046c7b) scroll_handle_pane_g_ParamLimits

0x6502,	// (0x0003da8e) popup_choice_list_window_ParamLimits

0x6502,	// (0x0003da8e) popup_choice_list_window

0xd6dc,	// (0x00044c68) choice_list_pane

0xd75c,	// (0x00044ce8) cell_toolbar_pane_t1

0xd784,	// (0x00044d10) toolbar_button_pane_ParamLimits

0xe6a2,	// (0x00045c2e) ai_gene_pane_1_t2_ParamLimits

0xe6a2,	// (0x00045c2e) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x00046e9e) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x00046e9e) ai_gene_pane_1_t

0xf49d,	// (0x00046a29) scroll_sc2_left_pane_g1

0xf49d,	// (0x00046a29) scroll_sc2_right_pane_g1

0xd3ea,	// (0x00044976) bg_popup_sub_pane_cp10

0xf4a7,	// (0x00046a33) list_choice_list_pane

0xf4be,	// (0x00046a4a) list_single_choice_list_pane_ParamLimits

0xf4be,	// (0x00046a4a) list_single_choice_list_pane

0xf4d2,	// (0x00046a5e) list_single_choice_list_pane_g1

0xcacb,	// (0x00044057) list_single_choice_list_pane_t1_ParamLimits

0xcacb,	// (0x00044057) list_single_choice_list_pane_t1

0xf4da,	// (0x00046a66) choice_list_pane_g1

0xf4e2,	// (0x00046a6e) choice_list_pane_t1

0xc33c,	// (0x000438c8) input_focus_pane_cp11

0xcc51,	// (0x000441dd) title_pane_stacon_g2_ParamLimits

0xcc51,	// (0x000441dd) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00046c5a) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00046c5a) title_pane_stacon_g

0xd405,	// (0x00044991) cursor_press_pane

0xb7bb,	// (0x00042d47) popup_fep_hwr_window_ParamLimits

0xb7bb,	// (0x00042d47) popup_fep_hwr_window

0x65fa,	// (0x0003db86) popup_fep_vkb_window_ParamLimits

0x65fa,	// (0x0003db86) popup_fep_vkb_window

0xf4f0,	// (0x00046a7c) cursor_press_pane_g1

0x0002,

0xfb35,	// (0x000470c1) fep_vkb_side_pane_g_ParamLimits

0x73b4,	// (0x0003e940) fep_hwr_candidate_pane_ParamLimits

0x73b4,	// (0x0003e940) fep_hwr_candidate_pane

0x73dc,	// (0x0003e968) fep_hwr_side_pane_ParamLimits

0x73dc,	// (0x0003e968) fep_hwr_side_pane

0x73fc,	// (0x0003e988) fep_hwr_top_pane_ParamLimits

0x73fc,	// (0x0003e988) fep_hwr_top_pane

0x7414,	// (0x0003e9a0) fep_hwr_write_pane_ParamLimits

0x7414,	// (0x0003e9a0) fep_hwr_write_pane

0xfb35,	// (0x000470c1) fep_vkb_side_pane_g

0xf4f8,	// (0x00046a84) fep_hwr_top_pane_g1

0xf50a,	// (0x00046a96) fep_hwr_top_pane_g2

0x744e,	// (0x0003e9da) fep_hwr_top_pane_g3

0x0002,

0xfb11,	// (0x0004709d) fep_hwr_top_pane_g

0x7463,	// (0x0003e9ef) fep_hwr_top_text_pane

0xcea7,	// (0x00044433) fep_hwr_top_text_pane_g1

0xf540,	// (0x00046acc) fep_hwr_top_text_pane_t1

0x7551,	// (0x0003eadd) fep_hwr_candidate_pane_g1

0x389e,	// (0x0003ae2a) fep_vkb_keypad_pane_g3_ParamLimits

0x389e,	// (0x0003ae2a) fep_vkb_keypad_pane_g3

0x38c0,	// (0x0003ae4c) fep_vkb_keypad_pane_g4_ParamLimits

0x38c0,	// (0x0003ae4c) fep_vkb_keypad_pane_g4

0x392f,	// (0x0003aebb) fep_vkb_bottom_pane_g2_ParamLimits

0x392f,	// (0x0003aebb) fep_vkb_bottom_pane_g2

0x0001,

0xfb3c,	// (0x000470c8) fep_vkb_bottom_pane_g_ParamLimits

0xfb3c,	// (0x000470c8) fep_vkb_bottom_pane_g

0xf49d,	// (0x00046a29) cell_vkb_side_pane_g2

0x0001,

0xfb46,	// (0x000470d2) cell_vkb_side_pane_g

0x3973,	// (0x0003aeff) cell_vkb_side_pane_t1

0x3981,	// (0x0003af0d) cell_vkb_side_pane_t1_copy1

0xf49d,	// (0x00046a29) bg_fep_vkb_candidate_pane_g2

0x3a4f,	// (0x0003afdb) cell_vkb_candidate_pane_ParamLimits

0x36e3,	// (0x0003ac6f) aid_size_cell_vkb_ParamLimits

0x36e3,	// (0x0003ac6f) aid_size_cell_vkb

0x3a4f,	// (0x0003afdb) cell_vkb_candidate_pane

0x765c,	// (0x0003ebe8) bg_popup_fep_shadow_pane_g1

0x374d,	// (0x0003acd9) fep_vkb_bottom_pane_ParamLimits

0x374d,	// (0x0003acd9) fep_vkb_bottom_pane

0x378a,	// (0x0003ad16) fep_vkb_candidate_pane_ParamLimits

0x378a,	// (0x0003ad16) fep_vkb_candidate_pane

0x37a6,	// (0x0003ad32) fep_vkb_keypad_pane_ParamLimits

0x37a6,	// (0x0003ad32) fep_vkb_keypad_pane

0x37da,	// (0x0003ad66) fep_vkb_side_pane_ParamLimits

0x37da,	// (0x0003ad66) fep_vkb_side_pane

0x3806,	// (0x0003ad92) fep_vkb_top_pane_ParamLimits

0x3806,	// (0x0003ad92) fep_vkb_top_pane

0x3832,	// (0x0003adbe) fep_vkb_top_pane_g1_ParamLimits

0x3832,	// (0x0003adbe) fep_vkb_top_pane_g1

0x3841,	// (0x0003adcd) fep_vkb_top_pane_g2_ParamLimits

0x3841,	// (0x0003adcd) fep_vkb_top_pane_g2

0x3850,	// (0x0003addc) fep_vkb_top_pane_g3_ParamLimits

0x3850,	// (0x0003addc) fep_vkb_top_pane_g3

0x0003,

0xfb2c,	// (0x000470b8) fep_vkb_top_pane_g_ParamLimits

0xfb2c,	// (0x000470b8) fep_vkb_top_pane_g

0x386e,	// (0x0003adfa) fep_vkb_top_text_pane_ParamLimits

0x386e,	// (0x0003adfa) fep_vkb_top_text_pane

0x209d,	// (0x00039629) fep_vkb_side_pane_g1_ParamLimits

0x209d,	// (0x00039629) fep_vkb_side_pane_g1

0x388d,	// (0x0003ae19) grid_vkb_side_pane_ParamLimits

0x388d,	// (0x0003ae19) grid_vkb_side_pane

0x7664,	// (0x0003ebf0) bg_popup_fep_shadow_pane_g2

0x766d,	// (0x0003ebf9) bg_popup_fep_shadow_pane_g3

0x7675,	// (0x0003ec01) bg_popup_fep_shadow_pane_g4

0x767e,	// (0x0003ec0a) bg_popup_fep_shadow_pane_g5

0x7686,	// (0x0003ec12) bg_popup_fep_shadow_pane_g6

0x768e,	// (0x0003ec1a) bg_popup_fep_shadow_pane_g7

0xc9ef,	// (0x00043f7b) bg_popup_fep_shadow_pane_g8

0x38de,	// (0x0003ae6a) grid_vkb_keypad_number_pane_ParamLimits

0x38de,	// (0x0003ae6a) grid_vkb_keypad_number_pane

0x38ee,	// (0x0003ae7a) grid_vkb_keypad_pane_ParamLimits

0x38ee,	// (0x0003ae7a) grid_vkb_keypad_pane

0x3914,	// (0x0003aea0) fep_vkb_bottom_pane_g1_ParamLimits

0x3914,	// (0x0003aea0) fep_vkb_bottom_pane_g1

0x393d,	// (0x0003aec9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x393d,	// (0x0003aec9) grid_vkb_keypad_bottom_left_pane

0x3952,	// (0x0003aede) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x3952,	// (0x0003aede) grid_vkb_keypad_bottom_right_pane

0x3967,	// (0x0003aef3) fep_vkb_top_text_pane_g1

0x20e4,	// (0x00039670) fep_vkb_top_text_pane_t1

0x20f6,	// (0x00039682) cell_vkb_side_pane_ParamLimits

0x20f6,	// (0x00039682) cell_vkb_side_pane

0xf49d,	// (0x00046a29) cell_vkb_side_pane_g1

0x398f,	// (0x0003af1b) cell_vkb_keypad_pane_ParamLimits

0x398f,	// (0x0003af1b) cell_vkb_keypad_pane

0x39fc,	// (0x0003af88) cell_vkb_keypad_pane_g1

0x0008,

0xfb59,	// (0x000470e5) bg_popup_fep_shadow_pane_g

0x769e,	// (0x0003ec2a) cell_hwr_side_pane_g1

0x769e,	// (0x0003ec2a) cell_hwr_side_pane_g2

0x3a06,	// (0x0003af92) cell_vkb_keypad_pane_t1

0x210c,	// (0x00039698) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x210c,	// (0x00039698) cell_vkb_keypad_bottom_left_pane

0x2121,	// (0x000396ad) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x2121,	// (0x000396ad) cell_vkb_keypad_bottom_right_pane

0xf49d,	// (0x00046a29) cell_vkb_keypad_bottom_left_pane_g1

0xf49d,	// (0x00046a29) cell_vkb_keypad_bottom_right_pane_g1

0x3a14,	// (0x0003afa0) cell_vkb_keypad_number_pane_ParamLimits

0x3a14,	// (0x0003afa0) cell_vkb_keypad_number_pane

0x3a33,	// (0x0003afbf) cell_vkb_keypad_number_pane_g1

0x3a3d,	// (0x0003afc9) cell_vkb_keypad_number_pane_g2

0x3a46,	// (0x0003afd2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4b,	// (0x000470d7) cell_vkb_keypad_number_pane_g

0x3a06,	// (0x0003af92) cell_vkb_keypad_number_pane_t1

0x3a68,	// (0x0003aff4) fep_vkb_candidate_pane_g1

0x0001,

0xfb6c,	// (0x000470f8) cell_hwr_side_pane_g

0x3a81,	// (0x0003b00d) cell_hwr_side_pane_t1

0x76a8,	// (0x0003ec34) cell_hwr_side_pane_t1_copy1

0x76b6,	// (0x0003ec42) cell_hwr_candidate_pane_g1

0x76e5,	// (0x0003ec71) cell_hwr_candidate_pane_t1

0xf49d,	// (0x00046a29) cell_vkb_candidate_pane_g2

0x3b07,	// (0x0003b093) cell_vkb_candidate_pane_t1

0x737f,	// (0x0003e90b) bg_popup_fep_shadow_pane_ParamLimits

0x737f,	// (0x0003e90b) bg_popup_fep_shadow_pane

0x742e,	// (0x0003e9ba) bg_fep_hwr_top_pane_g4

0xf51c,	// (0x00046aa8) bg_hwr_side_pane_g1_ParamLimits

0xf51c,	// (0x00046aa8) bg_hwr_side_pane_g1

0xbd9a,	// (0x00043326) cell_hwr_side_pane_ParamLimits

0xbd9a,	// (0x00043326) cell_hwr_side_pane

0x74da,	// (0x0003ea66) fep_hwr_write_pane_g1_ParamLimits

0x74da,	// (0x0003ea66) fep_hwr_write_pane_g1

0x74e7,	// (0x0003ea73) fep_hwr_write_pane_g2_ParamLimits

0x74e7,	// (0x0003ea73) fep_hwr_write_pane_g2

0x74f4,	// (0x0003ea80) fep_hwr_write_pane_g3_ParamLimits

0x74f4,	// (0x0003ea80) fep_hwr_write_pane_g3

0xbdba,	// (0x00043346) fep_hwr_write_pane_g4_ParamLimits

0xbdba,	// (0x00043346) fep_hwr_write_pane_g4

0x0005,

0xfb18,	// (0x000470a4) fep_hwr_write_pane_g_ParamLimits

0xfb18,	// (0x000470a4) fep_hwr_write_pane_g

0x742e,	// (0x0003e9ba) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x742e,	// (0x0003e9ba) bg_fep_hwr_candidate_pane_g2

0x7517,	// (0x0003eaa3) cell_hwr_candidate_pane_ParamLimits

0x7517,	// (0x0003eaa3) cell_hwr_candidate_pane

0x7551,	// (0x0003eadd) fep_hwr_candidate_pane_g1_ParamLimits

0x3711,	// (0x0003ac9d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3711,	// (0x0003ac9d) bg_popup_fep_shadow_pane_cp2

0x3860,	// (0x0003adec) fep_vkb_top_pane_g4_ParamLimits

0x3860,	// (0x0003adec) fep_vkb_top_pane_g4

0x387f,	// (0x0003ae0b) fep_vkb_side_pane_g2_ParamLimits

0x387f,	// (0x0003ae0b) fep_vkb_side_pane_g2

0x06c8,	// (0x00037c54) list_setting_pane_t4_ParamLimits

0x06c8,	// (0x00037c54) list_setting_pane_t4

0x0762,	// (0x00037cee) list_setting_number_pane_t5_ParamLimits

0x0762,	// (0x00037cee) list_setting_number_pane_t5

0xb36d,	// (0x000428f9) list_double_heading_pane_cp2_ParamLimits

0xb36d,	// (0x000428f9) list_double_heading_pane_cp2

0xc923,	// (0x00043eaf) list_double_heading_pane_g1_cp2_ParamLimits

0xc923,	// (0x00043eaf) list_double_heading_pane_g1_cp2

0xc999,	// (0x00043f25) list_double_heading_pane_g2_cp2_ParamLimits

0xc999,	// (0x00043f25) list_double_heading_pane_g2_cp2

0x3b15,	// (0x0003b0a1) list_double_heading_pane_t1_cp2_ParamLimits

0x3b15,	// (0x0003b0a1) list_double_heading_pane_t1_cp2

0x3b2b,	// (0x0003b0b7) list_double_heading_pane_t2_cp2_ParamLimits

0x3b2b,	// (0x0003b0b7) list_double_heading_pane_t2_cp2

0xc334,	// (0x000438c0) aid_value_unit2

0x5d9a,	// (0x0003d326) popup_preview_fixed_window

0xc4ef,	// (0x00043a7b) bg_popup_preview_window_pane_cp02

0x3b3d,	// (0x0003b0c9) list_preview_fixed_pane

0x3b83,	// (0x0003b10f) list_empty_pane_fp_ParamLimits

0x3b83,	// (0x0003b10f) list_empty_pane_fp

0x3b83,	// (0x0003b10f) list_single_cale_day_pane_fp_ParamLimits

0x3b83,	// (0x0003b10f) list_single_cale_day_pane_fp

0x3b83,	// (0x0003b10f) list_single_graphic_heading_pane_fp_ParamLimits

0x3b83,	// (0x0003b10f) list_single_graphic_heading_pane_fp

0x3b83,	// (0x0003b10f) list_single_graphic_pane_fp_ParamLimits

0x3b83,	// (0x0003b10f) list_single_graphic_pane_fp

0x3b83,	// (0x0003b10f) list_single_heading_pane_fp_ParamLimits

0x3b83,	// (0x0003b10f) list_single_heading_pane_fp

0x3b83,	// (0x0003b10f) list_single_pane_fp_ParamLimits

0x3b83,	// (0x0003b10f) list_single_pane_fp

0x3b96,	// (0x0003b122) list_single_pane_fp_g1_ParamLimits

0x3b96,	// (0x0003b122) list_single_pane_fp_g1

0xa217,	// (0x000417a3) list_single_pane_fp_g2_ParamLimits

0xa217,	// (0x000417a3) list_single_pane_fp_g2

0xa223,	// (0x000417af) list_single_pane_fp_g3_ParamLimits

0xa223,	// (0x000417af) list_single_pane_fp_g3

0x3ba2,	// (0x0003b12e) list_single_pane_fp_g4_ParamLimits

0x3ba2,	// (0x0003b12e) list_single_pane_fp_g4

0x0003,

0xfb7f,	// (0x0004710b) list_single_pane_fp_g_ParamLimits

0xfb7f,	// (0x0004710b) list_single_pane_fp_g

0x9839,	// (0x00040dc5) list_single_pane_fp_t1_ParamLimits

0x9839,	// (0x00040dc5) list_single_pane_fp_t1

0x9850,	// (0x00040ddc) list_single_graphic_pane_fp_g1_ParamLimits

0x9850,	// (0x00040ddc) list_single_graphic_pane_fp_g1

0x3b96,	// (0x0003b122) list_single_graphic_pane_fp_g2_ParamLimits

0x3b96,	// (0x0003b122) list_single_graphic_pane_fp_g2

0xa217,	// (0x000417a3) list_single_graphic_pane_fp_g3_ParamLimits

0xa217,	// (0x000417a3) list_single_graphic_pane_fp_g3

0xa223,	// (0x000417af) list_single_graphic_pane_fp_g4_ParamLimits

0xa223,	// (0x000417af) list_single_graphic_pane_fp_g4

0x3ba2,	// (0x0003b12e) list_single_graphic_pane_fp_g5_ParamLimits

0x3ba2,	// (0x0003b12e) list_single_graphic_pane_fp_g5

0x0004,

0xfb88,	// (0x00047114) list_single_graphic_pane_fp_g_ParamLimits

0xfb88,	// (0x00047114) list_single_graphic_pane_fp_g

0x985c,	// (0x00040de8) list_single_graphic_pane_fp_t1_ParamLimits

0x985c,	// (0x00040de8) list_single_graphic_pane_fp_t1

0x9850,	// (0x00040ddc) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9850,	// (0x00040ddc) list_single_graphic_heading_pane_fp_g1

0x3b96,	// (0x0003b122) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x3b96,	// (0x0003b122) list_single_graphic_heading_pane_fp_g2

0xa217,	// (0x000417a3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xa217,	// (0x000417a3) list_single_graphic_heading_pane_fp_g3

0xa223,	// (0x000417af) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xa223,	// (0x000417af) list_single_graphic_heading_pane_fp_g4

0x3ba2,	// (0x0003b12e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x3ba2,	// (0x0003b12e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb88,	// (0x00047114) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb88,	// (0x00047114) list_single_graphic_heading_pane_fp_g

0x9872,	// (0x00040dfe) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9872,	// (0x00040dfe) list_single_graphic_heading_pane_fp_t1

0x9888,	// (0x00040e14) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x9888,	// (0x00040e14) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x0004711f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x0004711f) list_single_graphic_heading_pane_fp_t

0x989a,	// (0x00040e26) list_single_cale_day_pane_fp_g1_ParamLimits

0x989a,	// (0x00040e26) list_single_cale_day_pane_fp_g1

0x3bae,	// (0x0003b13a) list_single_cale_day_pane_fp_g2_ParamLimits

0x3bae,	// (0x0003b13a) list_single_cale_day_pane_fp_g2

0xa237,	// (0x000417c3) list_single_cale_day_pane_fp_g3_ParamLimits

0xa237,	// (0x000417c3) list_single_cale_day_pane_fp_g3

0xa25f,	// (0x000417eb) list_single_cale_day_pane_fp_g4_ParamLimits

0xa25f,	// (0x000417eb) list_single_cale_day_pane_fp_g4

0xa283,	// (0x0004180f) list_single_cale_day_pane_fp_g5_ParamLimits

0xa283,	// (0x0004180f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb98,	// (0x00047124) list_single_cale_day_pane_fp_g_ParamLimits

0xfb98,	// (0x00047124) list_single_cale_day_pane_fp_g

0x98d2,	// (0x00040e5e) list_single_cale_day_pane_fp_t1_ParamLimits

0x98d2,	// (0x00040e5e) list_single_cale_day_pane_fp_t1

0x98f8,	// (0x00040e84) list_single_cale_day_pane_fp_t2_ParamLimits

0x98f8,	// (0x00040e84) list_single_cale_day_pane_fp_t2

0x9911,	// (0x00040e9d) list_single_cale_day_pane_fp_t3_ParamLimits

0x9911,	// (0x00040e9d) list_single_cale_day_pane_fp_t3

0x0002,

0xfba3,	// (0x0004712f) list_single_cale_day_pane_fp_t_ParamLimits

0xfba3,	// (0x0004712f) list_single_cale_day_pane_fp_t

0x3b96,	// (0x0003b122) list_empty_pane_fp_g1_ParamLimits

0x3b96,	// (0x0003b122) list_empty_pane_fp_g1

0x992a,	// (0x00040eb6) list_empty_pane_fp_t1

0x9938,	// (0x00040ec4) list_empty_pane_fp_t2

0x0001,

0xfbaa,	// (0x00047136) list_empty_pane_fp_t

0x3b96,	// (0x0003b122) list_single_heading_pane_fp_g1_ParamLimits

0x3b96,	// (0x0003b122) list_single_heading_pane_fp_g1

0xa217,	// (0x000417a3) list_single_heading_pane_fp_g2_ParamLimits

0xa217,	// (0x000417a3) list_single_heading_pane_fp_g2

0xa223,	// (0x000417af) list_single_heading_pane_fp_g3_ParamLimits

0xa223,	// (0x000417af) list_single_heading_pane_fp_g3

0x0002,

0xfbaf,	// (0x0004713b) list_single_heading_pane_fp_g_ParamLimits

0xfbaf,	// (0x0004713b) list_single_heading_pane_fp_g

0x9946,	// (0x00040ed2) list_single_heading_pane_fp_t1_ParamLimits

0x9946,	// (0x00040ed2) list_single_heading_pane_fp_t1

0x9958,	// (0x00040ee4) list_single_heading_pane_fp_t2_ParamLimits

0x9958,	// (0x00040ee4) list_single_heading_pane_fp_t2

0x0001,

0xfbb6,	// (0x00047142) list_single_heading_pane_fp_t_ParamLimits

0xfbb6,	// (0x00047142) list_single_heading_pane_fp_t

0xcae8,	// (0x00044074) aid_size_cell_fast

0xc4d2,	// (0x00043a5e) soft_indicator_pane_cp1_t1

0xcb25,	// (0x000440b1) cell_app_pane_cp2_ParamLimits

0xcb25,	// (0x000440b1) cell_app_pane_cp2

0x73a1,	// (0x0003e92d) fep_hwr_candidate_drop_down_list_pane

0x756b,	// (0x0003eaf7) fep_hwr_candidate_pane_g3_ParamLimits

0x756b,	// (0x0003eaf7) fep_hwr_candidate_pane_g3

0x31c0,	// (0x0003a74c) fep_hwr_candidate_pane_g4_ParamLimits

0x31c0,	// (0x0003a74c) fep_hwr_candidate_pane_g4

0x0002,

0xfb25,	// (0x000470b1) fep_hwr_candidate_pane_g_ParamLimits

0xfb25,	// (0x000470b1) fep_hwr_candidate_pane_g

0x3779,	// (0x0003ad05) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3779,	// (0x0003ad05) fep_vkb_candidate_drop_down_list_pane

0x3a70,	// (0x0003affc) fep_vkb_candidate_pane_g3

0x3a78,	// (0x0003b004) fep_vkb_candidate_pane_g4

0x0002,

0xfb52,	// (0x000470de) fep_vkb_candidate_pane_g

0x76b6,	// (0x0003ec42) cell_hwr_candidate_pane_g1_ParamLimits

0x76c4,	// (0x0003ec50) cell_hwr_candidate_pane_g3_ParamLimits

0x76c4,	// (0x0003ec50) cell_hwr_candidate_pane_g3

0x4b1d,	// (0x0003c0a9) cell_hwr_candidate_pane_g4_ParamLimits

0x4b1d,	// (0x0003c0a9) cell_hwr_candidate_pane_g4

0x0002,

0xfb71,	// (0x000470fd) cell_hwr_candidate_pane_g_ParamLimits

0xfb71,	// (0x000470fd) cell_hwr_candidate_pane_g

0x3ad1,	// (0x0003b05d) cell_vkb_candidate_pane_g3_ParamLimits

0x3ad1,	// (0x0003b05d) cell_vkb_candidate_pane_g3

0x3aec,	// (0x0003b078) cell_vkb_candidate_pane_g4_ParamLimits

0x3aec,	// (0x0003b078) cell_vkb_candidate_pane_g4

0x3bba,	// (0x0003b146) cell_app_pane_cp2_g1_ParamLimits

0x3bba,	// (0x0003b146) cell_app_pane_cp2_g1

0x3bd8,	// (0x0003b164) cell_app_pane_cp2_g2_ParamLimits

0x3bd8,	// (0x0003b164) cell_app_pane_cp2_g2

0x0001,

0xfbbb,	// (0x00047147) cell_app_pane_cp2_g_ParamLimits

0xfbbb,	// (0x00047147) cell_app_pane_cp2_g

0x3be4,	// (0x0003b170) cell_app_pane_cp2_t1_ParamLimits

0x3be4,	// (0x0003b170) cell_app_pane_cp2_t1

0xc98b,	// (0x00043f17) grid_highlight_pane_cp1_ParamLimits

0xc98b,	// (0x00043f17) grid_highlight_pane_cp1

0x7702,	// (0x0003ec8e) cell_hwr_candidate_pane_cp1_ParamLimits

0x7702,	// (0x0003ec8e) cell_hwr_candidate_pane_cp1

0x76b6,	// (0x0003ec42) fep_hwr_candidate_drop_down_list_pane_g1

0x7720,	// (0x0003ecac) fep_hwr_candidate_drop_down_list_pane_g2

0x772d,	// (0x0003ecb9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc0,	// (0x0004714c) fep_hwr_candidate_drop_down_list_pane_g

0x773a,	// (0x0003ecc6) fep_hwr_candidate_drop_down_list_scroll_pane

0x7743,	// (0x0003eccf) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7743,	// (0x0003eccf) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7750,	// (0x0003ecdc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7750,	// (0x0003ecdc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x775d,	// (0x0003ece9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x775d,	// (0x0003ece9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x776a,	// (0x0003ecf6) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x776a,	// (0x0003ecf6) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7785,	// (0x0003ed11) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7785,	// (0x0003ed11) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x77a0,	// (0x0003ed2c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x77a0,	// (0x0003ed2c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x77bb,	// (0x0003ed47) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x77bb,	// (0x0003ed47) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x77d6,	// (0x0003ed62) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x77d6,	// (0x0003ed62) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc7,	// (0x00047153) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc7,	// (0x00047153) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x213c,	// (0x000396c8) cell_vkb_candidate_pane_cp1_ParamLimits

0x213c,	// (0x000396c8) cell_vkb_candidate_pane_cp1

0x3860,	// (0x0003adec) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3860,	// (0x0003adec) fep_vkb_candidate_drop_down_list_pane_g1

0x3bf6,	// (0x0003b182) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x3bf6,	// (0x0003b182) fep_vkb_candidate_drop_down_list_pane_g2

0x3c03,	// (0x0003b18f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x3c03,	// (0x0003b18f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd8,	// (0x00047164) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd8,	// (0x00047164) fep_vkb_candidate_drop_down_list_pane_g

0x3c10,	// (0x0003b19c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x3c10,	// (0x0003b19c) fep_vkb_candidate_drop_down_list_scroll_pane

0x3c1d,	// (0x0003b1a9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x3c1d,	// (0x0003b1a9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x3c2a,	// (0x0003b1b6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x3c2a,	// (0x0003b1b6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x3c36,	// (0x0003b1c2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x3c36,	// (0x0003b1c2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x3a8f,	// (0x0003b01b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x3a8f,	// (0x0003b01b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x3ab0,	// (0x0003b03c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x3ab0,	// (0x0003b03c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x3c42,	// (0x0003b1ce) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x3c42,	// (0x0003b1ce) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x3c63,	// (0x0003b1ef) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x3c63,	// (0x0003b1ef) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x3c84,	// (0x0003b210) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x3c84,	// (0x0003b210) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdf,	// (0x0004716b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdf,	// (0x0004716b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xaeb4,	// (0x00042440) title_pane_g1_ParamLimits

0xaec7,	// (0x00042453) title_pane_g2_ParamLimits

0xf54e,	// (0x00046ada) title_pane_g_ParamLimits

0xce97,	// (0x00044423) aid_call2_pane

0xce9f,	// (0x0004442b) aid_call_pane

0xcea7,	// (0x00044433) popup_clock_analogue_window_g1

0xcea7,	// (0x00044433) popup_clock_analogue_window_g2

0x60d1,	// (0x0003d65d) popup_clock_analogue_window_g3

0x60da,	// (0x0003d666) popup_clock_analogue_window_g4

0xc346,	// (0x000438d2) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00046c89) popup_clock_analogue_window_g

0x60e2,	// (0x0003d66e) popup_clock_analogue_window_t1

0x60f0,	// (0x0003d67c) clock_digital_number_pane_ParamLimits

0x60f0,	// (0x0003d67c) clock_digital_number_pane

0x60fc,	// (0x0003d688) clock_digital_number_pane_cp02_ParamLimits

0x60fc,	// (0x0003d688) clock_digital_number_pane_cp02

0x6108,	// (0x0003d694) clock_digital_number_pane_cp03_ParamLimits

0x6108,	// (0x0003d694) clock_digital_number_pane_cp03

0x6114,	// (0x0003d6a0) clock_digital_number_pane_cp04_ParamLimits

0x6114,	// (0x0003d6a0) clock_digital_number_pane_cp04

0x6120,	// (0x0003d6ac) clock_digital_separator_pane_ParamLimits

0x6120,	// (0x0003d6ac) clock_digital_separator_pane

0x612c,	// (0x0003d6b8) popup_clock_digital_window_t1_ParamLimits

0x612c,	// (0x0003d6b8) popup_clock_digital_window_t1

0xc346,	// (0x000438d2) clock_digital_number_pane_g1

0xc346,	// (0x000438d2) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00046c94) clock_digital_number_pane_g

0xc346,	// (0x000438d2) clock_digital_separator_pane_g1

0xc346,	// (0x000438d2) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00046c94) clock_digital_separator_pane_g

0x14c7,	// (0x00038a53) aid_fill_nsta_ParamLimits

0x15e9,	// (0x00038b75) indicator_nsta_pane_ParamLimits

0xd685,	// (0x00044c11) popup_clock_analogue_window

0xd685,	// (0x00044c11) popup_clock_digital_window

0xd3ca,	// (0x00044956) grid_indicator_nsta_pane_ParamLimits

0xf1a3,	// (0x0004672f) clock_nsta_pane_t2

0x0001,

0xfaa5,	// (0x00047031) clock_nsta_pane_t

0x6095,	// (0x0003d621) aid_size_max_handle

0xb364,	// (0x000428f0) aid_size_min_handle

0xd405,	// (0x00044991) editor_scroll_pane

0x3c9f,	// (0x0003b22b) ex_editor_pane

0xcaa8,	// (0x00044034) scroll_pane_cp13

0xc90f,	// (0x00043e9b) scroll_pane_cp14

0xced6,	// (0x00044462) scroll_pane_cp36

0xb37c,	// (0x00042908) list_single_graphic_hl_pane_cp2_ParamLimits

0xb37c,	// (0x00042908) list_single_graphic_hl_pane_cp2

0x1d06,	// (0x00039292) list_single_graphic_hl_pane_ParamLimits

0x1d06,	// (0x00039292) list_single_graphic_hl_pane

0x996e,	// (0x00040efa) aid_size_min_hl_cp1

0x3ca7,	// (0x0003b233) list_highlight_pane_cp34_ParamLimits

0x3ca7,	// (0x0003b233) list_highlight_pane_cp34

0x3cb8,	// (0x0003b244) list_single_graphic_hl_pane_g1_ParamLimits

0x3cb8,	// (0x0003b244) list_single_graphic_hl_pane_g1

0x09b6,	// (0x00037f42) list_single_graphic_hl_pane_g2_ParamLimits

0x09b6,	// (0x00037f42) list_single_graphic_hl_pane_g2

0x09b6,	// (0x00037f42) list_single_graphic_hl_pane_g3_ParamLimits

0x09b6,	// (0x00037f42) list_single_graphic_hl_pane_g3

0xd34a,	// (0x000448d6) list_single_graphic_hl_pane_g4_ParamLimits

0xd34a,	// (0x000448d6) list_single_graphic_hl_pane_g4

0x215c,	// (0x000396e8) list_single_graphic_hl_pane_g5_ParamLimits

0x215c,	// (0x000396e8) list_single_graphic_hl_pane_g5

0x0004,

0xfbf0,	// (0x0004717c) list_single_graphic_hl_pane_g_ParamLimits

0xfbf0,	// (0x0004717c) list_single_graphic_hl_pane_g

0x09c2,	// (0x00037f4e) list_single_graphic_hl_pane_t1_ParamLimits

0x09c2,	// (0x00037f4e) list_single_graphic_hl_pane_t1

0x3cc5,	// (0x0003b251) aid_size_min_hl_cp2

0x3cce,	// (0x0003b25a) list_highlight_pane_cp34_cp2_ParamLimits

0x3cce,	// (0x0003b25a) list_highlight_pane_cp34_cp2

0x3cb8,	// (0x0003b244) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x3cb8,	// (0x0003b244) list_single_graphic_hl_pane_g1_cp2

0x3cdb,	// (0x0003b267) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x3cdb,	// (0x0003b267) list_single_graphic_hl_pane_g2_cp2

0x3ce7,	// (0x0003b273) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x3ce7,	// (0x0003b273) list_single_graphic_hl_pane_g3_cp2

0xc917,	// (0x00043ea3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc917,	// (0x00043ea3) list_single_graphic_hl_pane_g4_cp2

0x3cf3,	// (0x0003b27f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x3cf3,	// (0x0003b27f) list_single_graphic_hl_pane_g5_cp2

0xb5b3,	// (0x00042b3f) control_pane_g4_ParamLimits

0xb5b3,	// (0x00042b3f) control_pane_g4

0xd3ea,	// (0x00044976) bg_popup_sub_pane_cp10_ParamLimits

0xf4a7,	// (0x00046a33) list_choice_list_pane_ParamLimits

0xf4b6,	// (0x00046a42) scroll_pane_cp23

0xc4ef,	// (0x00043a7b) bg_popup_preview_window_pane_cp02_ParamLimits

0x3b3d,	// (0x0003b0c9) list_preview_fixed_pane_ParamLimits

0x3b53,	// (0x0003b0df) list_preview_fixed_pane_cp_ParamLimits

0x3b53,	// (0x0003b0df) list_preview_fixed_pane_cp

0x3b5f,	// (0x0003b0eb) popup_preview_fixed_window_g1_ParamLimits

0x3b5f,	// (0x0003b0eb) popup_preview_fixed_window_g1

0x3b6b,	// (0x0003b0f7) popup_preview_fixed_window_g2_ParamLimits

0x3b6b,	// (0x0003b0f7) popup_preview_fixed_window_g2

0x0002,

0xfb78,	// (0x00047104) popup_preview_fixed_window_g_ParamLimits

0xfb78,	// (0x00047104) popup_preview_fixed_window_g

0x6011,	// (0x0003d59d) aid_navi_side_left_pane_ParamLimits

0x6022,	// (0x0003d5ae) aid_navi_side_right_pane_ParamLimits

0x6036,	// (0x0003d5c2) navi_icon_pane_stacon_ParamLimits

0x604a,	// (0x0003d5d6) navi_navi_pane_stacon_ParamLimits

0x6036,	// (0x0003d5c2) navi_text_pane_stacon_ParamLimits

0x5c79,	// (0x0003d205) main_text_info_pane

0x3d1d,	// (0x0003b2a9) listscroll_text_info_pane

0x3d25,	// (0x0003b2b1) list_text_info_pane_ParamLimits

0x3d25,	// (0x0003b2b1) list_text_info_pane

0x3d34,	// (0x0003b2c0) scroll_pane_cp24_ParamLimits

0x3d34,	// (0x0003b2c0) scroll_pane_cp24

0x2170,	// (0x000396fc) list_text_info_pane_t1_ParamLimits

0x2170,	// (0x000396fc) list_text_info_pane_t1

0xb73a,	// (0x00042cc6) popup_fast_swap2_window_ParamLimits

0xb73a,	// (0x00042cc6) popup_fast_swap2_window

0x3d52,	// (0x0003b2de) aid_size_cell_fast2

0xc33c,	// (0x000438c8) bg_popup_window_pane_cp17

0xdae7,	// (0x00045073) heading_pane_cp2

0xc6e2,	// (0x00043c6e) listscroll_fast2_pane

0x3d5c,	// (0x0003b2e8) grid_fast2_pane

0x3d64,	// (0x0003b2f0) listscroll_fast2_pane_g1

0x3d6c,	// (0x0003b2f8) listscroll_fast2_pane_g2

0x0001,

0xfbfb,	// (0x00047187) listscroll_fast2_pane_g

0xcaa8,	// (0x00044034) scroll_pane_cp26

0x3d74,	// (0x0003b300) cell_fast2_pane_ParamLimits

0x3d74,	// (0x0003b300) cell_fast2_pane

0x3d89,	// (0x0003b315) cell_fast2_pane_g1

0x3d92,	// (0x0003b31e) cell_fast2_pane_g2

0x3d9b,	// (0x0003b327) cell_fast2_pane_g3

0x0002,

0xfc00,	// (0x0004718c) cell_fast2_pane_g

0xc772,	// (0x00043cfe) grid_highlight_pane_cp9

0x64e8,	// (0x0003da74) main_eswt_pane_ParamLimits

0x64e8,	// (0x0003da74) main_eswt_pane

0x3d49,	// (0x0003b2d5) list_single_text_info_pane

0x3da3,	// (0x0003b32f) eswt_ctrl_button_pane

0x3da3,	// (0x0003b32f) eswt_ctrl_canvas_pane

0x3dab,	// (0x0003b337) eswt_ctrl_combo_pane

0x3da3,	// (0x0003b32f) eswt_ctrl_default_pane

0x3da3,	// (0x0003b32f) eswt_ctrl_label_pane

0x3db3,	// (0x0003b33f) eswt_ctrl_wait_pane

0x3dbb,	// (0x0003b347) eswt_shell_pane

0xc33c,	// (0x000438c8) listscroll_eswt_app_pane

0x3dd7,	// (0x0003b363) popup_eswt_tasktip_window_ParamLimits

0x3dd7,	// (0x0003b363) popup_eswt_tasktip_window

0xd81c,	// (0x00044da8) bg_popup_window_pane_cp18

0x3de8,	// (0x0003b374) eswt_control_pane_g1_ParamLimits

0x3de8,	// (0x0003b374) eswt_control_pane_g1

0x3df5,	// (0x0003b381) eswt_control_pane_g2_ParamLimits

0x3df5,	// (0x0003b381) eswt_control_pane_g2

0x3e02,	// (0x0003b38e) eswt_control_pane_g3_ParamLimits

0x3e02,	// (0x0003b38e) eswt_control_pane_g3

0x3e0f,	// (0x0003b39b) eswt_control_pane_g4_ParamLimits

0x3e0f,	// (0x0003b39b) eswt_control_pane_g4

0x0003,

0xfc07,	// (0x00047193) eswt_control_pane_g_ParamLimits

0xfc07,	// (0x00047193) eswt_control_pane_g

0xc98b,	// (0x00043f17) bg_button_pane_ParamLimits

0xc98b,	// (0x00043f17) bg_button_pane

0xc787,	// (0x00043d13) common_borders_pane_copy2_ParamLimits

0xc787,	// (0x00043d13) common_borders_pane_copy2

0x3e1c,	// (0x0003b3a8) control_button_pane_g1_ParamLimits

0x3e1c,	// (0x0003b3a8) control_button_pane_g1

0x3e28,	// (0x0003b3b4) control_button_pane_g2_ParamLimits

0x3e28,	// (0x0003b3b4) control_button_pane_g2

0x3e34,	// (0x0003b3c0) control_button_pane_g3_ParamLimits

0x3e34,	// (0x0003b3c0) control_button_pane_g3

0x0002,

0xfc10,	// (0x0004719c) control_button_pane_g_ParamLimits

0xfc10,	// (0x0004719c) control_button_pane_g

0x3e48,	// (0x0003b3d4) control_button_pane_t1

0x3e56,	// (0x0003b3e2) control_button_pane_t2

0x0001,

0xfc17,	// (0x000471a3) control_button_pane_t

0xd790,	// (0x00044d1c) bg_button_pane_g1

0xd7a0,	// (0x00044d2c) bg_button_pane_g2

0xd798,	// (0x00044d24) bg_button_pane_g3

0xd7b0,	// (0x00044d3c) bg_button_pane_g4

0xd7a8,	// (0x00044d34) bg_button_pane_g5

0xd7b8,	// (0x00044d44) bg_button_pane_g6

0xd7c0,	// (0x00044d4c) bg_button_pane_g7

0xd7d0,	// (0x00044d5c) bg_button_pane_g8

0xd7c8,	// (0x00044d54) bg_button_pane_g9

0x0008,

0xf866,	// (0x00046df2) bg_button_pane_g

0xf462,	// (0x000469ee) common_borders_pane_ParamLimits

0xf462,	// (0x000469ee) common_borders_pane

0x3de8,	// (0x0003b374) eswt_control_pane_g1_copy1_ParamLimits

0x3de8,	// (0x0003b374) eswt_control_pane_g1_copy1

0x3df5,	// (0x0003b381) eswt_control_pane_g2_copy1_ParamLimits

0x3df5,	// (0x0003b381) eswt_control_pane_g2_copy1

0x3e02,	// (0x0003b38e) eswt_control_pane_g3_copy1_ParamLimits

0x3e02,	// (0x0003b38e) eswt_control_pane_g3_copy1

0x3e0f,	// (0x0003b39b) eswt_control_pane_g4_copy1_ParamLimits

0x3e0f,	// (0x0003b39b) eswt_control_pane_g4_copy1

0xf49d,	// (0x00046a29) bg_eswt_ctrl_canvas_pane_g1

0xf462,	// (0x000469ee) common_borders_pane_cp2_ParamLimits

0xf462,	// (0x000469ee) common_borders_pane_cp2

0xf462,	// (0x000469ee) common_borders_pane_cp3_ParamLimits

0xf462,	// (0x000469ee) common_borders_pane_cp3

0x3e64,	// (0x0003b3f0) separator_horizontal_pane

0x3e6c,	// (0x0003b3f8) separator_vertical_pane

0x3de8,	// (0x0003b374) eswt_control_pane_g1_copy2_ParamLimits

0x3de8,	// (0x0003b374) eswt_control_pane_g1_copy2

0x3df5,	// (0x0003b381) eswt_control_pane_g2_copy2_ParamLimits

0x3df5,	// (0x0003b381) eswt_control_pane_g2_copy2

0x3e02,	// (0x0003b38e) eswt_control_pane_g3_copy2_ParamLimits

0x3e02,	// (0x0003b38e) eswt_control_pane_g3_copy2

0x3e0f,	// (0x0003b39b) eswt_control_pane_g4_copy2_ParamLimits

0x3e0f,	// (0x0003b39b) eswt_control_pane_g4_copy2

0xc33c,	// (0x000438c8) common_borders_pane_cp4

0x3e75,	// (0x0003b401) separator_horizontal_pane_g1

0x3e7e,	// (0x0003b40a) separator_horizontal_pane_g2

0x3e87,	// (0x0003b413) separator_horizontal_pane_g3

0x0002,

0xfc1c,	// (0x000471a8) separator_horizontal_pane_g

0x3de8,	// (0x0003b374) eswt_control_pane_g1_copy3_ParamLimits

0x3de8,	// (0x0003b374) eswt_control_pane_g1_copy3

0x3df5,	// (0x0003b381) eswt_control_pane_g2_copy3_ParamLimits

0x3df5,	// (0x0003b381) eswt_control_pane_g2_copy3

0x3e02,	// (0x0003b38e) eswt_control_pane_g3_copy3_ParamLimits

0x3e02,	// (0x0003b38e) eswt_control_pane_g3_copy3

0x3e0f,	// (0x0003b39b) eswt_control_pane_g4_copy3_ParamLimits

0x3e0f,	// (0x0003b39b) eswt_control_pane_g4_copy3

0xc33c,	// (0x000438c8) common_borders_pane_cp5

0x3e90,	// (0x0003b41c) separator_vertical_pane_g1

0x3e99,	// (0x0003b425) separator_vertical_pane_g2

0x3ea2,	// (0x0003b42e) separator_vertical_pane_g3

0x0002,

0xfc23,	// (0x000471af) separator_vertical_pane_g

0x3de8,	// (0x0003b374) eswt_control_pane_g1_copy4_ParamLimits

0x3de8,	// (0x0003b374) eswt_control_pane_g1_copy4

0x3df5,	// (0x0003b381) eswt_control_pane_g2_copy4_ParamLimits

0x3df5,	// (0x0003b381) eswt_control_pane_g2_copy4

0x3e02,	// (0x0003b38e) eswt_control_pane_g3_copy4_ParamLimits

0x3e02,	// (0x0003b38e) eswt_control_pane_g3_copy4

0x3e0f,	// (0x0003b39b) eswt_control_pane_g4_copy4_ParamLimits

0x3e0f,	// (0x0003b39b) eswt_control_pane_g4_copy4

0x2189,	// (0x00039715) eswt_ctrl_combo_button_pane

0x2191,	// (0x0003971d) eswt_ctrl_input_pane

0x2199,	// (0x00039725) popup_choice_list_window_cp70

0x21a1,	// (0x0003972d) eswt_ctrl_input_pane_t1

0xc33c,	// (0x000438c8) input_focus_pane_cp70

0xf462,	// (0x000469ee) bg_button_pane_cp70_ParamLimits

0xf462,	// (0x000469ee) bg_button_pane_cp70

0x21af,	// (0x0003973b) eswt_ctrl_combo_button_pane_g1

0x3eab,	// (0x0003b437) wait_bar_pane_cp70

0xd81c,	// (0x00044da8) bg_popup_window_pane_cp70_ParamLimits

0xd81c,	// (0x00044da8) bg_popup_window_pane_cp70

0x3eb3,	// (0x0003b43f) popup_eswt_tasktip_window_t1

0x3ec9,	// (0x0003b455) wait_bar_pane_cp71_ParamLimits

0x3ec9,	// (0x0003b455) wait_bar_pane_cp71

0x3ed5,	// (0x0003b461) grid_eswt_app_pane

0xccdc,	// (0x00044268) scroll_pane_cp70

0x21b7,	// (0x00039743) cell_eswt_app_pane_ParamLimits

0x21b7,	// (0x00039743) cell_eswt_app_pane

0x21df,	// (0x0003976b) cell_eswt_app_pane_g1_ParamLimits

0x21df,	// (0x0003976b) cell_eswt_app_pane_g1

0x220e,	// (0x0003979a) cell_eswt_app_pane_g2_ParamLimits

0x220e,	// (0x0003979a) cell_eswt_app_pane_g2

0x0001,

0xfc2a,	// (0x000471b6) cell_eswt_app_pane_g_ParamLimits

0xfc2a,	// (0x000471b6) cell_eswt_app_pane_g

0x2237,	// (0x000397c3) cell_eswt_app_pane_t1_ParamLimits

0x2237,	// (0x000397c3) cell_eswt_app_pane_t1

0x3ede,	// (0x0003b46a) grid_highlight_pane_cp70_ParamLimits

0x3ede,	// (0x0003b46a) grid_highlight_pane_cp70

0xd2bc,	// (0x00044848) set_content_pane_g1

0xb549,	// (0x00042ad5) status_small_volume_pane

0x790f,	// (0x0003ee9b) status_small_volume_pane_g1

0x7917,	// (0x0003eea3) volume_small2_pane

0x7920,	// (0x0003eeac) volume_small2_pane_g1

0x7929,	// (0x0003eeb5) volume_small2_pane_g2

0x7932,	// (0x0003eebe) volume_small2_pane_g3

0x793b,	// (0x0003eec7) volume_small2_pane_g4

0x7944,	// (0x0003eed0) volume_small2_pane_g5

0x794d,	// (0x0003eed9) volume_small2_pane_g6

0x7956,	// (0x0003eee2) volume_small2_pane_g7

0x795f,	// (0x0003eeeb) volume_small2_pane_g8

0x7968,	// (0x0003eef4) volume_small2_pane_g9

0x7971,	// (0x0003eefd) volume_small2_pane_g10

0x0009,

0xfc2f,	// (0x000471bb) volume_small2_pane_g

0x3967,	// (0x0003aef3) fep_vkb_top_text_pane_g1_ParamLimits

0x20e4,	// (0x00039670) fep_vkb_top_text_pane_t1_ParamLimits

0x3b77,	// (0x0003b103) popup_preview_fixed_window_g3_ParamLimits

0x3b77,	// (0x0003b103) popup_preview_fixed_window_g3

0xbc57,	// (0x000431e3) popup_toolbar_trans_pane

0x1b91,	// (0x0003911d) aid_height_set_list_ParamLimits

0xe4b3,	// (0x00045a3f) aid_size_parent_ParamLimits

0xd3ea,	// (0x00044976) list_highlight_pane_cp2_ParamLimits

0xd2bc,	// (0x00044848) set_content_pane_g1_ParamLimits

0x0976,	// (0x00037f02) list_single_image_pane_ParamLimits

0x0976,	// (0x00037f02) list_single_image_pane

0x2269,	// (0x000397f5) aid_size_cell_image_ParamLimits

0x2269,	// (0x000397f5) aid_size_cell_image

0x2276,	// (0x00039802) grid_single_image_pane_ParamLimits

0x2276,	// (0x00039802) grid_single_image_pane

0xc923,	// (0x00043eaf) list_single_image_pane_g1_ParamLimits

0xc923,	// (0x00043eaf) list_single_image_pane_g1

0xc999,	// (0x00043f25) list_single_image_pane_g2_ParamLimits

0xc999,	// (0x00043f25) list_single_image_pane_g2

0x0001,

0xfc44,	// (0x000471d0) list_single_image_pane_g_ParamLimits

0xfc44,	// (0x000471d0) list_single_image_pane_g

0x3eea,	// (0x0003b476) list_single_image_pane_t1_ParamLimits

0x3eea,	// (0x0003b476) list_single_image_pane_t1

0x2282,	// (0x0003980e) cell_image_list_pane_ParamLimits

0x2282,	// (0x0003980e) cell_image_list_pane

0x2296,	// (0x00039822) cell_image_list_pane_g1

0x229f,	// (0x0003982b) cell_image_list_pane_g2

0x0001,

0xfc49,	// (0x000471d5) cell_image_list_pane_g

0x3f00,	// (0x0003b48c) aid_size_cell_tb_trans_pane

0xc98b,	// (0x00043f17) bg_tb_trans_pane

0x3f12,	// (0x0003b49e) grid_tb_trans_pane

0xd790,	// (0x00044d1c) bg_tb_trans_pane_g1

0xd7a0,	// (0x00044d2c) bg_tb_trans_pane_g2

0xd798,	// (0x00044d24) bg_tb_trans_pane_g3

0xd7b0,	// (0x00044d3c) bg_tb_trans_pane_g4

0xd7a8,	// (0x00044d34) bg_tb_trans_pane_g5

0xd7d0,	// (0x00044d5c) bg_tb_trans_pane_g6

0xd7c8,	// (0x00044d54) bg_tb_trans_pane_g7

0xd7b8,	// (0x00044d44) bg_tb_trans_pane_g8

0xd7c0,	// (0x00044d4c) bg_tb_trans_pane_g9

0x0008,

0xfc4e,	// (0x000471da) bg_tb_trans_pane_g

0x3f26,	// (0x0003b4b2) cell_toolbar_trans_pane_ParamLimits

0x3f26,	// (0x0003b4b2) cell_toolbar_trans_pane

0xf49d,	// (0x00046a29) cell_toolbar_trans_pane_g1

0x1f2c,	// (0x000394b8) list_form2_midp_pane_t1

0x1f3a,	// (0x000394c6) list_form2_midp_pane_t2

0x0001,

0xfaeb,	// (0x00047077) list_form2_midp_pane_t

0xf255,	// (0x000467e1) scroll_pane_cp51_ParamLimits

0xf372,	// (0x000468fe) form2_midp_wait_pane_g1

0xf37b,	// (0x00046907) form2_midp_wait_pane_g2

0xf384,	// (0x00046910) form2_midp_wait_pane_g3

0x0002,

0xfb00,	// (0x0004708c) form2_midp_wait_pane_g

0xc3bc,	// (0x00043948) list_highlight_pane_cp21_ParamLimits

0xf3a4,	// (0x00046930) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xf3b3,	// (0x0004693f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe93a,	// (0x00045ec6) list_single_2graphic_im_pane_ParamLimits

0xe93a,	// (0x00045ec6) list_single_2graphic_im_pane

0x22a8,	// (0x00039834) list_single_2graphic_im_pane_g1_ParamLimits

0x22a8,	// (0x00039834) list_single_2graphic_im_pane_g1

0x3f4c,	// (0x0003b4d8) list_single_2graphic_im_pane_g2_ParamLimits

0x3f4c,	// (0x0003b4d8) list_single_2graphic_im_pane_g2

0x3f58,	// (0x0003b4e4) list_single_2graphic_im_pane_g3_ParamLimits

0x3f58,	// (0x0003b4e4) list_single_2graphic_im_pane_g3

0x0003,

0xfc61,	// (0x000471ed) list_single_2graphic_im_pane_g_ParamLimits

0xfc61,	// (0x000471ed) list_single_2graphic_im_pane_g

0x22b9,	// (0x00039845) list_single_2graphic_im_pane_t1_ParamLimits

0x22b9,	// (0x00039845) list_single_2graphic_im_pane_t1

0x3b83,	// (0x0003b10f) list_single_graphic_2heading_pane_fp_ParamLimits

0x3b83,	// (0x0003b10f) list_single_graphic_2heading_pane_fp

0x9850,	// (0x00040ddc) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9850,	// (0x00040ddc) list_single_graphic_2heading_pane_fp_g1

0x3b96,	// (0x0003b122) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x3b96,	// (0x0003b122) list_single_graphic_2heading_pane_fp_g2

0xa217,	// (0x000417a3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xa217,	// (0x000417a3) list_single_graphic_2heading_pane_fp_g3

0xa223,	// (0x000417af) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xa223,	// (0x000417af) list_single_graphic_2heading_pane_fp_g4

0x3ba2,	// (0x0003b12e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x3ba2,	// (0x0003b12e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb88,	// (0x00047114) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb88,	// (0x00047114) list_single_graphic_2heading_pane_fp_g

0x9999,	// (0x00040f25) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x9999,	// (0x00040f25) list_single_graphic_2heading_pane_fp_t1

0x9888,	// (0x00040e14) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x9888,	// (0x00040e14) list_single_graphic_2heading_pane_fp_t2

0x99af,	// (0x00040f3b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x99af,	// (0x00040f3b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6a,	// (0x000471f6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6a,	// (0x000471f6) list_single_graphic_2heading_pane_fp_t

0xf528,	// (0x00046ab4) fep_hwr_write_pane_g5_ParamLimits

0xf528,	// (0x00046ab4) fep_hwr_write_pane_g5

0xf534,	// (0x00046ac0) fep_hwr_write_pane_g6_ParamLimits

0xf534,	// (0x00046ac0) fep_hwr_write_pane_g6

0x3dbb,	// (0x0003b347) eswt_shell_pane_ParamLimits

0xd81c,	// (0x00044da8) bg_popup_window_pane_cp18_ParamLimits

0xe883,	// (0x00045e0f) heading_pane_cp70

0x3eb3,	// (0x0003b43f) popup_eswt_tasktip_window_t1_ParamLimits

0x1512,	// (0x00038a9e) aid_touch_tab_arrow_left

0x1526,	// (0x00038ab2) aid_touch_tab_arrow_right

0xaedf,	// (0x0004246b) title_pane_g3_ParamLimits

0xaedf,	// (0x0004246b) title_pane_g3

0xc953,	// (0x00043edf) set_value_pane_g1

0xbc57,	// (0x000431e3) popup_toolbar_trans_pane_ParamLimits

0x3f00,	// (0x0003b48c) aid_size_cell_tb_trans_pane_ParamLimits

0xc98b,	// (0x00043f17) bg_tb_trans_pane_ParamLimits

0x3f12,	// (0x0003b49e) grid_tb_trans_pane_ParamLimits

0xc4ef,	// (0x00043a7b) cont_note_pane_ParamLimits

0xc4ef,	// (0x00043a7b) cont_note_pane

0xc787,	// (0x00043d13) cont_snote2_single_text_pane_ParamLimits

0xc787,	// (0x00043d13) cont_snote2_single_text_pane

0xc787,	// (0x00043d13) cont_snote2_single_graphic_pane_ParamLimits

0xc787,	// (0x00043d13) cont_snote2_single_graphic_pane

0xdcf1,	// (0x0004527d) cont_note_wait_pane_ParamLimits

0xdcf1,	// (0x0004527d) cont_note_wait_pane

0xdcf1,	// (0x0004527d) cont_note_image_pane_ParamLimits

0xdcf1,	// (0x0004527d) cont_note_image_pane

0x3f78,	// (0x0003b504) popup_note2_window_g1_ParamLimits

0x3f78,	// (0x0003b504) popup_note2_window_g1

0x3fa9,	// (0x0003b535) popup_note2_window_t1_ParamLimits

0x3fa9,	// (0x0003b535) popup_note2_window_t1

0x3fee,	// (0x0003b57a) popup_note2_window_t2_ParamLimits

0x3fee,	// (0x0003b57a) popup_note2_window_t2

0x4033,	// (0x0003b5bf) popup_note2_window_t3_ParamLimits

0x4033,	// (0x0003b5bf) popup_note2_window_t3

0x4078,	// (0x0003b604) popup_note2_window_t4_ParamLimits

0x4078,	// (0x0003b604) popup_note2_window_t4

0xc573,	// (0x00043aff) popup_note2_window_t5_ParamLimits

0xc573,	// (0x00043aff) popup_note2_window_t5

0x0004,

0xfc76,	// (0x00047202) popup_note2_window_t_ParamLimits

0xfc76,	// (0x00047202) popup_note2_window_t

0x40a7,	// (0x0003b633) popup_note2_image_window_g1_ParamLimits

0x40a7,	// (0x0003b633) popup_note2_image_window_g1

0x40b3,	// (0x0003b63f) popup_note2_image_window_g2_ParamLimits

0x40b3,	// (0x0003b63f) popup_note2_image_window_g2

0x0001,

0xfc81,	// (0x0004720d) popup_note2_image_window_g_ParamLimits

0xfc81,	// (0x0004720d) popup_note2_image_window_g

0x40c5,	// (0x0003b651) popup_note2_image_window_t1_ParamLimits

0x40c5,	// (0x0003b651) popup_note2_image_window_t1

0x40dd,	// (0x0003b669) popup_note2_image_window_t2_ParamLimits

0x40dd,	// (0x0003b669) popup_note2_image_window_t2

0x40f5,	// (0x0003b681) popup_note2_image_window_t3_ParamLimits

0x40f5,	// (0x0003b681) popup_note2_image_window_t3

0x0002,

0xfc86,	// (0x00047212) popup_note2_image_window_t_ParamLimits

0xfc86,	// (0x00047212) popup_note2_image_window_t

0xdcff,	// (0x0004528b) popup_note2_wait_window_g1_ParamLimits

0xdcff,	// (0x0004528b) popup_note2_wait_window_g1

0xdd0b,	// (0x00045297) popup_note2_wait_window_g2_ParamLimits

0xdd0b,	// (0x00045297) popup_note2_wait_window_g2

0xdd17,	// (0x000452a3) popup_note2_wait_window_g3_ParamLimits

0xdd17,	// (0x000452a3) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x00046dd4) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x00046dd4) popup_note2_wait_window_g

0x4111,	// (0x0003b69d) popup_note2_wait_window_t1_ParamLimits

0x4111,	// (0x0003b69d) popup_note2_wait_window_t1

0x412f,	// (0x0003b6bb) popup_note2_wait_window_t2_ParamLimits

0x412f,	// (0x0003b6bb) popup_note2_wait_window_t2

0x414d,	// (0x0003b6d9) popup_note2_wait_window_t3_ParamLimits

0x414d,	// (0x0003b6d9) popup_note2_wait_window_t3

0x415f,	// (0x0003b6eb) popup_note2_wait_window_t4_ParamLimits

0x415f,	// (0x0003b6eb) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x00047219) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x00047219) popup_note2_wait_window_t

0x4171,	// (0x0003b6fd) wait_bar2_pane_ParamLimits

0x4171,	// (0x0003b6fd) wait_bar2_pane

0x4189,	// (0x0003b715) popup_snote2_single_text_window_g1_ParamLimits

0x4189,	// (0x0003b715) popup_snote2_single_text_window_g1

0x41b1,	// (0x0003b73d) popup_snote2_single_text_window_t1_ParamLimits

0x41b1,	// (0x0003b73d) popup_snote2_single_text_window_t1

0x41fd,	// (0x0003b789) popup_snote2_single_text_window_t2_ParamLimits

0x41fd,	// (0x0003b789) popup_snote2_single_text_window_t2

0x4249,	// (0x0003b7d5) popup_snote2_single_text_window_t3_ParamLimits

0x4249,	// (0x0003b7d5) popup_snote2_single_text_window_t3

0x428a,	// (0x0003b816) popup_snote2_single_text_window_t4_ParamLimits

0x428a,	// (0x0003b816) popup_snote2_single_text_window_t4

0x42c0,	// (0x0003b84c) popup_snote2_single_text_window_t5_ParamLimits

0x42c0,	// (0x0003b84c) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x00047222) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x00047222) popup_snote2_single_text_window_t

0x42eb,	// (0x0003b877) popup_snote2_single_graphic_window_g1_ParamLimits

0x42eb,	// (0x0003b877) popup_snote2_single_graphic_window_g1

0x4313,	// (0x0003b89f) popup_snote2_single_graphic_window_g2_ParamLimits

0x4313,	// (0x0003b89f) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0004722d) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0004722d) popup_snote2_single_graphic_window_g

0x433b,	// (0x0003b8c7) popup_snote2_single_graphic_window_t1_ParamLimits

0x433b,	// (0x0003b8c7) popup_snote2_single_graphic_window_t1

0x4387,	// (0x0003b913) popup_snote2_single_graphic_window_t2_ParamLimits

0x4387,	// (0x0003b913) popup_snote2_single_graphic_window_t2

0x4249,	// (0x0003b7d5) popup_snote2_single_graphic_window_t3_ParamLimits

0x4249,	// (0x0003b7d5) popup_snote2_single_graphic_window_t3

0x428a,	// (0x0003b816) popup_snote2_single_graphic_window_t4_ParamLimits

0x428a,	// (0x0003b816) popup_snote2_single_graphic_window_t4

0x42c0,	// (0x0003b84c) popup_snote2_single_graphic_window_t5_ParamLimits

0x42c0,	// (0x0003b84c) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x00047232) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x00047232) popup_snote2_single_graphic_window_t

0xf1f0,	// (0x0004677c) clock_nsta_pane_cp2_t1

0xf1f0,	// (0x0004677c) clock_nsta_pane_cp2_t2

0x0001,

0xfac1,	// (0x0004704d) clock_nsta_pane_cp2_t

0x91be,	// (0x0004074a) form_field_data_wide_pane_g1_ParamLimits

0xc923,	// (0x00043eaf) form_field_data_wide_pane_g2_ParamLimits

0xc923,	// (0x00043eaf) form_field_data_wide_pane_g2

0xc999,	// (0x00043f25) form_field_data_wide_pane_g3_ParamLimits

0xc999,	// (0x00043f25) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00046c0c) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00046c0c) form_field_data_wide_pane_g

0x1e75,	// (0x00039401) grid_touch_3_pane_ParamLimits

0x1e75,	// (0x00039401) grid_touch_3_pane

0x22ea,	// (0x00039876) cell_touch_3_pane_ParamLimits

0x22ea,	// (0x00039876) cell_touch_3_pane

0xf49d,	// (0x00046a29) cell_touch_3_pane_g1

0xf49d,	// (0x00046a29) cell_touch_3_pane_g2

0x0001,

0xfb46,	// (0x000470d2) cell_touch_3_pane_g

0xc5a5,	// (0x00043b31) cont_query_data_pane

0xc5ad,	// (0x00043b39) cont_query_data_pane_cp1

0x43d3,	// (0x0003b95f) button_value_adjust_pane_cp7

0x43db,	// (0x0003b967) query_popup_pane_cp3

0xcf08,	// (0x00044494) bg_popup_sub_pane_cp22_ParamLimits

0x614b,	// (0x0003d6d7) navi_navi_volume_pane_cp2

0x6163,	// (0x0003d6ef) popup_side_volume_key_window_g2

0x616f,	// (0x0003d6fb) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00046ca2) popup_side_volume_key_window_g

0x6189,	// (0x0003d715) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00046ca9) popup_side_volume_key_window_t

0xd19a,	// (0x00044726) popup_side_volume_key_window_ParamLimits

0x04b9,	// (0x00037a45) list_double_graphic_pane_g4_ParamLimits

0x04b9,	// (0x00037a45) list_double_graphic_pane_g4

0x1cf4,	// (0x00039280) list_single_2heading_msg_pane_ParamLimits

0x1cf4,	// (0x00039280) list_single_2heading_msg_pane

0x2330,	// (0x000398bc) list_single_2heading_msg_pane_g1_ParamLimits

0x2330,	// (0x000398bc) list_single_2heading_msg_pane_g1

0x233c,	// (0x000398c8) list_single_2heading_msg_pane_g2_ParamLimits

0x233c,	// (0x000398c8) list_single_2heading_msg_pane_g2

0x234f,	// (0x000398db) list_single_2heading_msg_pane_g3_ParamLimits

0x234f,	// (0x000398db) list_single_2heading_msg_pane_g3

0x235b,	// (0x000398e7) list_single_2heading_msg_pane_g4_ParamLimits

0x235b,	// (0x000398e7) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0004723d) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0004723d) list_single_2heading_msg_pane_g

0x09d8,	// (0x00037f64) list_single_2heading_msg_pane_t1_ParamLimits

0x09d8,	// (0x00037f64) list_single_2heading_msg_pane_t1

0x0a00,	// (0x00037f8c) list_single_2heading_msg_pane_t2_ParamLimits

0x0a00,	// (0x00037f8c) list_single_2heading_msg_pane_t2

0x0a6b,	// (0x00037ff7) list_single_2heading_msg_pane_t3_ParamLimits

0x0a6b,	// (0x00037ff7) list_single_2heading_msg_pane_t3

0x9a99,	// (0x00041025) list_single_2heading_msg_pane_t4_ParamLimits

0x9a99,	// (0x00041025) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x00047246) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x00047246) list_single_2heading_msg_pane_t

0xc35a,	// (0x000438e6) title_pane_g4_ParamLimits

0xc35a,	// (0x000438e6) title_pane_g4

0x5f61,	// (0x0003d4ed) title_pane_stacon_g3_ParamLimits

0x5f61,	// (0x0003d4ed) title_pane_stacon_g3

0x3f6c,	// (0x0003b4f8) list_single_2graphic_im_pane_g4_ParamLimits

0x3f6c,	// (0x0003b4f8) list_single_2graphic_im_pane_g4

0xe6bf,	// (0x00045c4b) popup_side_volume_key_window_cp

0xeb60,	// (0x000460ec) main_idle_act2_pane_t1

0x69d3,	// (0x0003df5f) toolbar_button_pane_g10

0xb22c,	// (0x000427b8) popup_toolbar_window_cp1

0xf1e1,	// (0x0004676d) clock_nsta_pane_cp_t1

0xf1e1,	// (0x0004676d) clock_nsta_pane_cp_t2

0x0001,

0xfabc,	// (0x00047048) clock_nsta_pane_cp_t

0x614b,	// (0x0003d6d7) navi_navi_volume_pane_cp2_ParamLimits

0x6157,	// (0x0003d6e3) popup_side_volume_key_window_g1_ParamLimits

0x6163,	// (0x0003d6ef) popup_side_volume_key_window_g2_ParamLimits

0x616f,	// (0x0003d6fb) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00046ca2) popup_side_volume_key_window_g_ParamLimits

0x738d,	// (0x0003e919) fep_hwr_aid_pane

0x742e,	// (0x0003e9ba) bg_fep_hwr_top_pane_g4_ParamLimits

0xf4f8,	// (0x00046a84) fep_hwr_top_pane_g1_ParamLimits

0xf50a,	// (0x00046a96) fep_hwr_top_pane_g2_ParamLimits

0x744e,	// (0x0003e9da) fep_hwr_top_pane_g3_ParamLimits

0xfb11,	// (0x0004709d) fep_hwr_top_pane_g_ParamLimits

0x7463,	// (0x0003e9ef) fep_hwr_top_text_pane_ParamLimits

0xe435,	// (0x000459c1) aid_touch_tab_arrow_arrow_2

0xe43e,	// (0x000459ca) aid_touch_tab_arrow_left_2

0x73a1,	// (0x0003e92d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x73d4,	// (0x0003e960) fep_hwr_prediction_pane

0x37d2,	// (0x0003ad5e) fep_vkb_prediction_pane

0x20c4,	// (0x00039650) fep_vkb_side_pane_g3_ParamLimits

0x20c4,	// (0x00039650) fep_vkb_side_pane_g3

0x76b6,	// (0x0003ec42) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7720,	// (0x0003ecac) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x772d,	// (0x0003ecb9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc0,	// (0x0004714c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7a3b,	// (0x0003efc7) fep_hwr_prediction_pane_g1

0x7a45,	// (0x0003efd1) fep_hwr_prediction_pane_g2

0x7a4d,	// (0x0003efd9) fep_hwr_prediction_pane_g3

0x7a55,	// (0x0003efe1) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0004724f) fep_hwr_prediction_pane_g

0x43ec,	// (0x0003b978) fep_vkb_prediction_pane_g1

0x43f6,	// (0x0003b982) fep_vkb_prediction_pane_g2

0x43fe,	// (0x0003b98a) fep_vkb_prediction_pane_g3

0x4406,	// (0x0003b992) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x00047258) fep_vkb_prediction_pane_g

0x6cc4,	// (0x0003e250) slider_set_pane_g3

0x6cd8,	// (0x0003e264) slider_set_pane_g4

0x6cf0,	// (0x0003e27c) slider_set_pane_g5

0x6cc4,	// (0x0003e250) slider_set_pane_g6

0xbd6c,	// (0x000432f8) slider_set_pane_g7

0xe8f0,	// (0x00045e7c) slider_form_pane_g3

0xe8f9,	// (0x00045e85) slider_form_pane_g4

0xe901,	// (0x00045e8d) slider_form_pane_g5

0xe8f0,	// (0x00045e7c) slider_form_pane_g6

0x1cc8,	// (0x00039254) slider_form_pane_g7

0xed89,	// (0x00046315) slider_set_pane_vc_g3

0xed92,	// (0x0004631e) slider_set_pane_vc_g4

0xed9b,	// (0x00046327) slider_set_pane_vc_g5

0xed89,	// (0x00046315) slider_set_pane_vc_g6

0xeda4,	// (0x00046330) slider_set_pane_vc_g7

0xef3c,	// (0x000464c8) slider_form_pane_vc_g1

0xef45,	// (0x000464d1) slider_form_pane_vc_g2

0xef4e,	// (0x000464da) slider_form_pane_vc_g3

0xef3c,	// (0x000464c8) slider_form_pane_vc_g4

0xef57,	// (0x000464e3) slider_form_pane_vc_g5

0x0004,

0xfa8e,	// (0x0004701a) slider_form_pane_vc_g

0x5c79,	// (0x0003d205) main_idle_act3_pane

0x440e,	// (0x0003b99a) ai3_links_pane

0x2373,	// (0x000398ff) popup_ai3_data_window_ParamLimits

0x2373,	// (0x000398ff) popup_ai3_data_window

0xc33c,	// (0x000438c8) grid_ai3_links_pane

0x238b,	// (0x00039917) cell_ai3_links_pane_ParamLimits

0x238b,	// (0x00039917) cell_ai3_links_pane

0x4417,	// (0x0003b9a3) bg_popup_sub_pane_cp11

0x4424,	// (0x0003b9b0) cell_ai3_links_pane_g1

0xc33c,	// (0x000438c8) bg_popup_sub_pane_cp12

0x4449,	// (0x0003b9d5) heading_ai3_data_pane

0x4451,	// (0x0003b9dd) list_ai3_gene_pane

0x445d,	// (0x0003b9e9) popup_ai3_data_window_g1

0x4465,	// (0x0003b9f1) heading_ai3_data_pane_g1

0x446d,	// (0x0003b9f9) heading_ai3_data_pane_t1

0x447b,	// (0x0003ba07) list_double_ai3_gene_pane_ParamLimits

0x447b,	// (0x0003ba07) list_double_ai3_gene_pane

0x4488,	// (0x0003ba14) list_single_ai3_gene_pane_ParamLimits

0x4488,	// (0x0003ba14) list_single_ai3_gene_pane

0xf462,	// (0x000469ee) list_highlight_pane_cp7_ParamLimits

0xf462,	// (0x000469ee) list_highlight_pane_cp7

0x4495,	// (0x0003ba21) list_single_a13_gene_pane_t1_ParamLimits

0x4495,	// (0x0003ba21) list_single_a13_gene_pane_t1

0x44ac,	// (0x0003ba38) list_single_ai3_gene_pane_g1

0x44b5,	// (0x0003ba41) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x00047261) list_single_ai3_gene_pane_g

0x44bd,	// (0x0003ba49) list_double_ai3_gene_pane_g1_ParamLimits

0x44bd,	// (0x0003ba49) list_double_ai3_gene_pane_g1

0x44c9,	// (0x0003ba55) list_double_ai3_gene_pane_t1_ParamLimits

0x44c9,	// (0x0003ba55) list_double_ai3_gene_pane_t1

0x44e5,	// (0x0003ba71) list_double_ai3_gene_pane_t2_ParamLimits

0x44e5,	// (0x0003ba71) list_double_ai3_gene_pane_t2

0x44fb,	// (0x0003ba87) list_double_ai3_gene_pane_t3_ParamLimits

0x44fb,	// (0x0003ba87) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x00047266) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x00047266) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x99c5,	// (0x00040f51) aid_size_min_col_2

0x231c,	// (0x000398a8) aid_size_min_msg_ParamLimits

0x231c,	// (0x000398a8) aid_size_min_msg

0x20d8,	// (0x00039664) fep_vkb_top_text_pane_g2_ParamLimits

0x20d8,	// (0x00039664) fep_vkb_top_text_pane_g2

0x0001,

0xfb41,	// (0x000470cd) fep_vkb_top_text_pane_g_ParamLimits

0xfb41,	// (0x000470cd) fep_vkb_top_text_pane_g

0x5c79,	// (0x0003d205) main_hc_apps_shell_pane

0x4518,	// (0x0003baa4) grid_hc_apps_pane_ParamLimits

0x4518,	// (0x0003baa4) grid_hc_apps_pane

0x4527,	// (0x0003bab3) list_hc_apps_pane

0x452f,	// (0x0003babb) scroll_pane_cp37_ParamLimits

0x452f,	// (0x0003babb) scroll_pane_cp37

0x23a1,	// (0x0003992d) cell_hc_apps_pane_ParamLimits

0x23a1,	// (0x0003992d) cell_hc_apps_pane

0x243b,	// (0x000399c7) cell_hc_apps_pane_g1_ParamLimits

0x243b,	// (0x000399c7) cell_hc_apps_pane_g1

0x453b,	// (0x0003bac7) cell_hc_apps_pane_g2_ParamLimits

0x453b,	// (0x0003bac7) cell_hc_apps_pane_g2

0x4557,	// (0x0003bae3) cell_hc_apps_pane_g3_ParamLimits

0x4557,	// (0x0003bae3) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0004726d) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0004726d) cell_hc_apps_pane_g

0x2468,	// (0x000399f4) cell_hc_apps_pane_t1_ParamLimits

0x2468,	// (0x000399f4) cell_hc_apps_pane_t1

0xc4ef,	// (0x00043a7b) grid_highlight_pane_cp10_ParamLimits

0xc4ef,	// (0x00043a7b) grid_highlight_pane_cp10

0x24a6,	// (0x00039a32) list_single_hc_apps_pane_ParamLimits

0x24a6,	// (0x00039a32) list_single_hc_apps_pane

0x24d1,	// (0x00039a5d) list_single_hc_apps_pane_g1

0x24ea,	// (0x00039a76) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x00047274) list_single_hc_apps_pane_g

0x2503,	// (0x00039a8f) list_single_hc_apps_pane_g2_copy1

0x0ad9,	// (0x00038065) list_single_hc_apps_pane_t1

0xc3bc,	// (0x00043948) bg_set_opt_pane_cp_ParamLimits

0x5e8c,	// (0x0003d418) setting_slider_pane_t1_ParamLimits

0xafa3,	// (0x0004252f) setting_slider_pane_t2_ParamLimits

0xafbc,	// (0x00042548) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00046aea) setting_slider_pane_t_ParamLimits

0x5ed5,	// (0x0003d461) slider_set_pane_ParamLimits

0x63d7,	// (0x0003d963) control_pane_g5_ParamLimits

0x63d7,	// (0x0003d963) control_pane_g5

0xe8ca,	// (0x00045e56) slider_set_pane_g1_ParamLimits

0x6cb8,	// (0x0003e244) slider_set_pane_g2_ParamLimits

0x6cc4,	// (0x0003e250) slider_set_pane_g3_ParamLimits

0x6cd8,	// (0x0003e264) slider_set_pane_g4_ParamLimits

0x6cf0,	// (0x0003e27c) slider_set_pane_g5_ParamLimits

0x6cc4,	// (0x0003e250) slider_set_pane_g6_ParamLimits

0xbd6c,	// (0x000432f8) slider_set_pane_g7_ParamLimits

0xf964,	// (0x00046ef0) slider_set_pane_g_ParamLimits

0xd267,	// (0x000447f3) navi_icon_text_pane_ParamLimits

0x14e3,	// (0x00038a6f) aid_fill_nsta_2_ParamLimits

0x1512,	// (0x00038a9e) aid_touch_tab_arrow_left_ParamLimits

0x1526,	// (0x00038ab2) aid_touch_tab_arrow_right_ParamLimits

0x15bf,	// (0x00038b4b) clock_nsta_pane_ParamLimits

0xe417,	// (0x000459a3) navi_icon_pane_g1_ParamLimits

0xe423,	// (0x000459af) navi_text_pane_t1_ParamLimits

0xf22f,	// (0x000467bb) navi_icon_text_pane_g1_ParamLimits

0xf23b,	// (0x000467c7) navi_icon_text_pane_t1_ParamLimits

0x24d1,	// (0x00039a5d) list_single_hc_apps_pane_g1_ParamLimits

0x24ea,	// (0x00039a76) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x00047274) list_single_hc_apps_pane_g_ParamLimits

0x2503,	// (0x00039a8f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0ad9,	// (0x00038065) list_single_hc_apps_pane_t1_ParamLimits

0xae02,	// (0x0004238e) popup_toolbar2_fixed_window_ParamLimits

0xae02,	// (0x0004238e) popup_toolbar2_fixed_window

0xbc4f,	// (0x000431db) popup_toolbar2_float_window

0xc33c,	// (0x000438c8) bg_popup_sub_pane_cp27

0x4579,	// (0x0003bb05) grid_toolbar2_float_pane

0xc33c,	// (0x000438c8) bg_popup_sub_pane_cp26

0x4579,	// (0x0003bb05) grid_toolbar2_fixed_pane

0x251f,	// (0x00039aab) cell_toolbar2_fixed_pane_ParamLimits

0x251f,	// (0x00039aab) cell_toolbar2_fixed_pane

0x253a,	// (0x00039ac6) cell_toolbar2_fixed_pane_g1

0x4581,	// (0x0003bb0d) toolbar2_fixed_button_pane

0xd790,	// (0x00044d1c) toolbar2_fixed_button_pane_g1

0xd7a0,	// (0x00044d2c) toolbar2_fixed_button_pane_g2

0xd798,	// (0x00044d24) toolbar2_fixed_button_pane_g3

0xd7b0,	// (0x00044d3c) toolbar2_fixed_button_pane_g4

0xd7a8,	// (0x00044d34) toolbar2_fixed_button_pane_g5

0xd7b8,	// (0x00044d44) toolbar2_fixed_button_pane_g6

0xd7c0,	// (0x00044d4c) toolbar2_fixed_button_pane_g7

0xd7d0,	// (0x00044d5c) toolbar2_fixed_button_pane_g8

0xd7c8,	// (0x00044d54) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00046df2) toolbar2_fixed_button_pane_g

0x4589,	// (0x0003bb15) cell_toolbar2_float_pane_ParamLimits

0x4589,	// (0x0003bb15) cell_toolbar2_float_pane

0x459a,	// (0x0003bb26) cell_toolbar2_float_pane_g1

0x4581,	// (0x0003bb0d) toolbar2_fixed_button_pane_cp

0x208d,	// (0x00039619) fep_vkb_accented_list_pane_ParamLimits

0x208d,	// (0x00039619) fep_vkb_accented_list_pane

0x7696,	// (0x0003ec22) bg_popup_fep_shadow_pane_g9

0xd405,	// (0x00044991) bg_popup_fep_shadow_pane_cp3

0xca8f,	// (0x0004401b) list_accented_list_pane

0x45a3,	// (0x0003bb2f) list_single_accented_list_pane_ParamLimits

0x45a3,	// (0x0003bb2f) list_single_accented_list_pane

0xd405,	// (0x00044991) list_highlight_pane_cp10

0x45b4,	// (0x0003bb40) list_single_accented_list_pane_t1

0xbb95,	// (0x00043121) popup_slider_window_ParamLimits

0xbb95,	// (0x00043121) popup_slider_window

0x43e3,	// (0x0003b96f) aid_indentation_list_msg

0x2619,	// (0x00039ba5) bg_popup_window_pane_cp19

0x461a,	// (0x0003bba6) popup_slider_window_g1

0x4636,	// (0x0003bbc2) popup_slider_window_g2

0x4652,	// (0x0003bbde) popup_slider_window_g3

0x0005,

0xfced,	// (0x00047279) popup_slider_window_g

0x466e,	// (0x0003bbfa) popup_slider_window_t1

0x46b2,	// (0x0003bc3e) small_volume_slider_vertical_pane

0xf49d,	// (0x00046a29) small_volume_slider_vertical_pane_g1

0xf49d,	// (0x00046a29) small_volume_slider_vertical_pane_g2

0x46ce,	// (0x0003bc5a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0004728b) small_volume_slider_vertical_pane_g

0xad86,	// (0x00042312) area_side_right_pane_ParamLimits

0xad86,	// (0x00042312) area_side_right_pane

0xbdcf,	// (0x0004335b) aid_size_side_button_ParamLimits

0xbdcf,	// (0x0004335b) aid_size_side_button

0xbde8,	// (0x00043374) grid_sctrl_middle_pane_ParamLimits

0xbde8,	// (0x00043374) grid_sctrl_middle_pane

0x7d1c,	// (0x0003f2a8) sctrl_sk_bottom_pane

0x7d2d,	// (0x0003f2b9) sctrl_sk_top_pane

0x7d3f,	// (0x0003f2cb) aid_touch_sctrl_top

0x7d4c,	// (0x0003f2d8) bg_sctrl_sk_pane_ParamLimits

0x7d4c,	// (0x0003f2d8) bg_sctrl_sk_pane

0x7d5a,	// (0x0003f2e6) sctrl_sk_top_pane_g1

0x7d67,	// (0x0003f2f3) sctrl_sk_top_pane_t1

0x7d3f,	// (0x0003f2cb) aid_touch_sctrl_bottom

0x7d4c,	// (0x0003f2d8) bg_sctrl_sk_pane_cp_ParamLimits

0x7d4c,	// (0x0003f2d8) bg_sctrl_sk_pane_cp

0x7d82,	// (0x0003f30e) sctrl_sk_bottom_pane_g1

0x7d67,	// (0x0003f2f3) sctrl_sk_bottom_pane_t1

0xbdfe,	// (0x0004338a) cell_sctrl_middle_pane_ParamLimits

0xbdfe,	// (0x0004338a) cell_sctrl_middle_pane

0xbe0f,	// (0x0004339b) aid_touch_sctrl_middle_ParamLimits

0xbe0f,	// (0x0004339b) aid_touch_sctrl_middle

0xbe1c,	// (0x000433a8) bg_sctrl_middle_pane_ParamLimits

0xbe1c,	// (0x000433a8) bg_sctrl_middle_pane

0x8821,	// (0x0003fdad) cell_sctrl_middle_pane_g1_ParamLimits

0x8821,	// (0x0003fdad) cell_sctrl_middle_pane_g1

0xbe2a,	// (0x000433b6) cell_sctrl_middle_pane_g2_ParamLimits

0xbe2a,	// (0x000433b6) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x00047297) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x00047297) cell_sctrl_middle_pane_g

0xd790,	// (0x00044d1c) bg_sctrl_middle_pane_g1

0xd798,	// (0x00044d24) bg_sctrl_middle_pane_g2

0xd7a0,	// (0x00044d2c) bg_sctrl_middle_pane_g3

0xd7a8,	// (0x00044d34) bg_sctrl_middle_pane_g4

0xd7b0,	// (0x00044d3c) bg_sctrl_middle_pane_g5

0xd7b8,	// (0x00044d44) bg_sctrl_middle_pane_g6

0xd7c0,	// (0x00044d4c) bg_sctrl_middle_pane_g7

0xd7c8,	// (0x00044d54) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0004729c) bg_sctrl_middle_pane_g

0xd7d0,	// (0x00044d5c) bg_sctrl_middle_pane_g8_copy1

0xd790,	// (0x00044d1c) bg_sctrl_sk_pane_g1

0xd7a0,	// (0x00044d2c) bg_sctrl_sk_pane_g2

0xd798,	// (0x00044d24) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00046df2) bg_sctrl_sk_pane_g

0xc8a9,	// (0x00043e35) aid_size_touch_scroll_bar

0xd7b0,	// (0x00044d3c) bg_sctrl_sk_pane_g4

0xd7a8,	// (0x00044d34) bg_sctrl_sk_pane_g5

0xd7b8,	// (0x00044d44) bg_sctrl_sk_pane_g6

0xd7c0,	// (0x00044d4c) bg_sctrl_sk_pane_g7

0xd7d0,	// (0x00044d5c) bg_sctrl_sk_pane_g8

0xd7c8,	// (0x00044d54) bg_sctrl_sk_pane_g9

0x6572,	// (0x0003dafe) popup_fep_china_hwr2_fs_candidate_window

0xb78d,	// (0x00042d19) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb78d,	// (0x00042d19) popup_fep_china_hwr2_fs_control_window

0x76b6,	// (0x0003ec42) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x00047292) sctrl_sk_top_pane_g

0x2738,	// (0x00039cc4) aid_fep_china_hwr2_fs_cell_ParamLimits

0x2738,	// (0x00039cc4) aid_fep_china_hwr2_fs_cell

0x274c,	// (0x00039cd8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x274c,	// (0x00039cd8) bg_popup_fep_shadow_pane_cp4

0x2763,	// (0x00039cef) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x2763,	// (0x00039cef) bg_popup_fep_shadow_pane_cp5

0x2775,	// (0x00039d01) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x2775,	// (0x00039d01) popup_fep_china_hwr2_fs_control_bar_grid

0x2789,	// (0x00039d15) popup_fep_china_hwr2_fs_control_funtion_grid

0x46e5,	// (0x0003bc71) aid_fep_china_hwr2_fs_candi_cell

0xc33c,	// (0x000438c8) bg_popup_fep_shadow_pane_cp6

0x46ef,	// (0x0003bc7b) popup_fep_china_hwr2_fs_candidate_grid

0x2791,	// (0x00039d1d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x2791,	// (0x00039d1d) cell_fep_china_hwr2_fs_funtion_grid

0xf49d,	// (0x00046a29) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x46d7,	// (0x0003bc63) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x46d7,	// (0x0003bc63) cell_fep_china_hwr2_fs_funtion_grid_g1

0x46f7,	// (0x0003bc83) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x46f7,	// (0x0003bc83) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x000472ad) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x000472ad) cell_fep_china_hwr2_fs_funtion_grid_g

0x27a9,	// (0x00039d35) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x27a9,	// (0x00039d35) cell_fep_china_hwr2_fs_funtion_grid_t1

0x27be,	// (0x00039d4a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x27be,	// (0x00039d4a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x000472b2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x000472b2) cell_fep_china_hwr2_fs_funtion_grid_t

0x470d,	// (0x0003bc99) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x4715,	// (0x0003bca1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x471d,	// (0x0003bca9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x000472b7) popup_fep_china_hwr2_fs_control_bar_grid_g

0x4725,	// (0x0003bcb1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x4725,	// (0x0003bcb1) cell_fep_china_hwr2_fs_candidate_grid

0x473e,	// (0x0003bcca) popup_fep_china_hwr2_fs_candidate_grid_g20

0x4746,	// (0x0003bcd2) popup_fep_china_hwr2_fs_candidate_grid_g21

0xf49d,	// (0x00046a29) cell_fep_china_hwr2_fs_candidate_grid_g1

0xf49d,	// (0x00046a29) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb46,	// (0x000470d2) cell_fep_china_hwr2_fs_candidate_grid_g

0x474e,	// (0x0003bcda) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd5e1,	// (0x00044b6d) clock_nsta_pane_cp_24_ParamLimits

0xd5e1,	// (0x00044b6d) clock_nsta_pane_cp_24

0xd649,	// (0x00044bd5) indicator_nsta_pane_cp_24_ParamLimits

0xd649,	// (0x00044bd5) indicator_nsta_pane_cp_24

0xe30d,	// (0x00045899) heading_pane_g1

0x0001,

0xf8cb,	// (0x00046e57) heading_pane_g

0xe9ed,	// (0x00045f79) grid_sct_catagory_button_pane

0xe4c5,	// (0x00045a51) scroll_pane_cp5_ParamLimits

0xf261,	// (0x000467ed) button_value_adjust_pane_cp5_ParamLimits

0xf261,	// (0x000467ed) button_value_adjust_pane_cp5

0xf306,	// (0x00046892) form2_midp_time_pane_ParamLimits

0x475c,	// (0x0003bce8) cell_sct_catagory_button_pane_ParamLimits

0x475c,	// (0x0003bce8) cell_sct_catagory_button_pane

0xf462,	// (0x000469ee) bg_button_pane_cp01_ParamLimits

0xf462,	// (0x000469ee) bg_button_pane_cp01

0xf49d,	// (0x00046a29) cell_sct_catagory_button_pane_g1

0xbc04,	// (0x00043190) popup_tb_extension_window

0x27da,	// (0x00039d66) aid_size_cell_ext_ParamLimits

0x27da,	// (0x00039d66) aid_size_cell_ext

0xc787,	// (0x00043d13) bg_tb_trans_pane_cp1_ParamLimits

0xc787,	// (0x00043d13) bg_tb_trans_pane_cp1

0x27fc,	// (0x00039d88) grid_tb_ext_pane_ParamLimits

0x27fc,	// (0x00039d88) grid_tb_ext_pane

0x282c,	// (0x00039db8) cell_tb_ext_pane_ParamLimits

0x282c,	// (0x00039db8) cell_tb_ext_pane

0x2850,	// (0x00039ddc) cell_tb_ext_pane_g1_ParamLimits

0x2850,	// (0x00039ddc) cell_tb_ext_pane_g1

0x476e,	// (0x0003bcfa) cell_tb_ext_pane_t1

0xc4ef,	// (0x00043a7b) list_highlight_pane_cp11_ParamLimits

0xc4ef,	// (0x00043a7b) list_highlight_pane_cp11

0xae17,	// (0x000423a3) popup_uni_indicator_window_ParamLimits

0xae17,	// (0x000423a3) popup_uni_indicator_window

0xc98b,	// (0x00043f17) bg_popup_sub_pane_cp14

0x4789,	// (0x0003bd15) list_uniindi_pane

0x4795,	// (0x0003bd21) uniindi_top_pane

0xc4ef,	// (0x00043a7b) bg_uniindi_top_pane

0x47b4,	// (0x0003bd40) uniindi_top_pane_g1

0x47ca,	// (0x0003bd56) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x000472be) uniindi_top_pane_g

0x47f4,	// (0x0003bd80) uniindi_top_pane_t1

0x481e,	// (0x0003bdaa) list_single_uniindi_pane_ParamLimits

0x481e,	// (0x0003bdaa) list_single_uniindi_pane

0xf49d,	// (0x00046a29) bg_uniindi_top_pane_g1

0x4830,	// (0x0003bdbc) list_single_uniindi_pane_g1

0x4843,	// (0x0003bdcf) list_single_uniindi_pane_t1

0x5c79,	// (0x0003d205) control_bg_pane

0x4868,	// (0x0003bdf4) bg_sctrl_sk_pane_cp1

0x4871,	// (0x0003bdfd) bg_sctrl_sk_pane_cp2

0x487a,	// (0x0003be06) control_bg_pane_g1

0x4883,	// (0x0003be0f) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x000472c7) control_bg_pane_g

0xf13d,	// (0x000466c9) cell_indicator_nsta_pane_g1_ParamLimits

0x1ea2,	// (0x0003942e) cell_indicator_nsta_pane_g2_ParamLimits

0xfaaa,	// (0x00047036) cell_indicator_nsta_pane_g_ParamLimits

0x9826,	// (0x00040db2) form2_midp_time_pane_t1_ParamLimits

0x737f,	// (0x0003e90b) main_idle_act4_pane_ParamLimits

0x737f,	// (0x0003e90b) main_idle_act4_pane

0xbc04,	// (0x00043190) popup_tb_extension_window_ParamLimits

0x2818,	// (0x00039da4) tb_ext_find_pane_ParamLimits

0x2818,	// (0x00039da4) tb_ext_find_pane

0x488c,	// (0x0003be18) ai_gene_pane_1_cp1

0xd499,	// (0x00044a25) ai_gene_pane_2_cp1

0x4894,	// (0x0003be20) list_single_idle_plugin_calendar_pane

0x489d,	// (0x0003be29) list_single_idle_plugin_notification_pane

0x48a6,	// (0x0003be32) list_single_idle_plugin_player_pane

0x286d,	// (0x00039df9) list_single_idle_plugin_shortcut_pane_ParamLimits

0x286d,	// (0x00039df9) list_single_idle_plugin_shortcut_pane

0x288d,	// (0x00039e19) main_idle_act4_pane_t1

0x28a3,	// (0x00039e2f) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x000472cc) main_idle_act4_pane_t

0x28b9,	// (0x00039e45) middle_sk_idle_act4_pane_ParamLimits

0x28b9,	// (0x00039e45) middle_sk_idle_act4_pane

0x28d5,	// (0x00039e61) popup_clock_digital_analogue_window_cp2

0x28fb,	// (0x00039e87) shortcut_wheel_idle_act4_pane_ParamLimits

0x28fb,	// (0x00039e87) shortcut_wheel_idle_act4_pane

0xf49d,	// (0x00046a29) shortcut_wheel_idle_act4_pane_g1

0xf49d,	// (0x00046a29) shortcut_wheel_idle_act4_pane_g2

0xf49d,	// (0x00046a29) shortcut_wheel_idle_act4_pane_g3

0xf49d,	// (0x00046a29) shortcut_wheel_idle_act4_pane_g4

0xf49d,	// (0x00046a29) shortcut_wheel_idle_act4_pane_g5

0x48af,	// (0x0003be3b) shortcut_wheel_idle_act4_pane_g6

0x48b7,	// (0x0003be43) shortcut_wheel_idle_act4_pane_g7

0x48bf,	// (0x0003be4b) shortcut_wheel_idle_act4_pane_g8

0x48c7,	// (0x0003be53) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x000472d1) shortcut_wheel_idle_act4_pane_g

0xbe36,	// (0x000433c2) middle_sk_idle_act4_pane_g1_ParamLimits

0xbe36,	// (0x000433c2) middle_sk_idle_act4_pane_g1

0x2976,	// (0x00039f02) middle_sk_idle_act4_pane_g2_ParamLimits

0x2976,	// (0x00039f02) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x000472f4) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x000472f4) middle_sk_idle_act4_pane_g

0x298e,	// (0x00039f1a) middle_sk_idle_act4_pane_t1_ParamLimits

0x298e,	// (0x00039f1a) middle_sk_idle_act4_pane_t1

0x29bd,	// (0x00039f49) grid_ai_shortcut_pane_ParamLimits

0x29bd,	// (0x00039f49) grid_ai_shortcut_pane

0x29da,	// (0x00039f66) list_highlight_pane_cp16_ParamLimits

0x29da,	// (0x00039f66) list_highlight_pane_cp16

0x29e7,	// (0x00039f73) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x29e7,	// (0x00039f73) list_single_idle_plugin_shortcut_pane_g1

0x29f3,	// (0x00039f7f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x29f3,	// (0x00039f7f) list_single_idle_plugin_shortcut_pane_g2

0x2a0f,	// (0x00039f9b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x2a0f,	// (0x00039f9b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x000472f9) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x000472f9) list_single_idle_plugin_shortcut_pane_g

0x2a24,	// (0x00039fb0) cell_ai_shortcut_pane_ParamLimits

0x2a24,	// (0x00039fb0) cell_ai_shortcut_pane

0x2a3a,	// (0x00039fc6) cell_ai_shortcut_pane_g1_ParamLimits

0x2a3a,	// (0x00039fc6) cell_ai_shortcut_pane_g1

0x488c,	// (0x0003be18) ai_gene_pane_1_cp2

0x48cf,	// (0x0003be5b) ai_gene_pane_2_cp2

0x48d7,	// (0x0003be63) list_highlight_pane_cp15

0x48e0,	// (0x0003be6c) list_single_idle_plugin_calendar_pane_g1

0x48d7,	// (0x0003be63) list_highlight_pane_cp17

0x48e8,	// (0x0003be74) list_single_idle_plugin_calendar_pane_g1_copy1

0x48f0,	// (0x0003be7c) list_single_idle_plugin_player_pane_g1

0xebec,	// (0x00046178) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x00047300) list_single_idle_plugin_player_pane_g

0x48f8,	// (0x0003be84) list_single_idle_plugin_player_pane_t1

0x4906,	// (0x0003be92) list_single_idle_plugin_player_pane_t2

0x4914,	// (0x0003bea0) list_single_idle_plugin_player_pane_t3

0x4922,	// (0x0003beae) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x00047305) list_single_idle_plugin_player_pane_t

0x4930,	// (0x0003bebc) wait_bar_pane_cp15

0x4938,	// (0x0003bec4) grid_ai_notification_pane

0xebec,	// (0x00046178) list_single_idle_plugin_notification_pane_g1

0x2a5c,	// (0x00039fe8) cell_ai_notification_pane_ParamLimits

0x2a5c,	// (0x00039fe8) cell_ai_notification_pane

0x4941,	// (0x0003becd) cell_ai_notification_pane_g1

0x4949,	// (0x0003bed5) cell_ai_notification_pane_t1

0x2a69,	// (0x00039ff5) tb_ext_find_button_pane

0x2a71,	// (0x00039ffd) tb_ext_find_pane_g1

0x2a79,	// (0x0003a005) tb_ext_find_pane_t1

0xcea7,	// (0x00044433) tb_ext_find_button_pane_g1

0x4957,	// (0x0003bee3) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0004730e) tb_ext_find_button_pane_g

0x288d,	// (0x00039e19) main_idle_act4_pane_t1_ParamLimits

0x28a3,	// (0x00039e2f) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x000472cc) main_idle_act4_pane_t_ParamLimits

0x28d5,	// (0x00039e61) popup_clock_digital_analogue_window_cp2_ParamLimits

0x28eb,	// (0x00039e77) sat_plugin_idle_act4_pane_ParamLimits

0x28eb,	// (0x00039e77) sat_plugin_idle_act4_pane

0x2a87,	// (0x0003a013) sat_plugin_idle_act4_pane_t1_ParamLimits

0x2a87,	// (0x0003a013) sat_plugin_idle_act4_pane_t1

0x2a9f,	// (0x0003a02b) sat_plugin_idle_act4_pane_t2_ParamLimits

0x2a9f,	// (0x0003a02b) sat_plugin_idle_act4_pane_t2

0x2ab7,	// (0x0003a043) sat_plugin_idle_act4_pane_t3_ParamLimits

0x2ab7,	// (0x0003a043) sat_plugin_idle_act4_pane_t3

0x2acf,	// (0x0003a05b) sat_plugin_idle_act4_pane_t4_ParamLimits

0x2acf,	// (0x0003a05b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x00047313) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x00047313) sat_plugin_idle_act4_pane_t

0x5d3e,	// (0x0003d2ca) popup_battery_window_ParamLimits

0x5d3e,	// (0x0003d2ca) popup_battery_window

0xc4ef,	// (0x00043a7b) bg_popup_sub_pane_cp25_ParamLimits

0xc4ef,	// (0x00043a7b) bg_popup_sub_pane_cp25

0x4960,	// (0x0003beec) popup_battery_window_g1_ParamLimits

0x4960,	// (0x0003beec) popup_battery_window_g1

0x496c,	// (0x0003bef8) popup_battery_window_t1_ParamLimits

0x496c,	// (0x0003bef8) popup_battery_window_t1

0x497e,	// (0x0003bf0a) popup_battery_window_t2_ParamLimits

0x497e,	// (0x0003bf0a) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0004731c) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0004731c) popup_battery_window_t

0xb429,	// (0x000429b5) midp_canvas_pane_ParamLimits

0xb47e,	// (0x00042a0a) midp_keypad_pane_ParamLimits

0xb47e,	// (0x00042a0a) midp_keypad_pane

0xd3ea,	// (0x00044976) main_midp_pane_ParamLimits

0xf1ff,	// (0x0004678b) signal_pane_g2_cp_ParamLimits

0x2ae7,	// (0x0003a073) aid_size_cell_midp_keypad_ParamLimits

0x2ae7,	// (0x0003a073) aid_size_cell_midp_keypad

0x2b04,	// (0x0003a090) midp_keyp_game_grid_pane_ParamLimits

0x2b04,	// (0x0003a090) midp_keyp_game_grid_pane

0x2b23,	// (0x0003a0af) midp_keyp_rocker_pane_ParamLimits

0x2b23,	// (0x0003a0af) midp_keyp_rocker_pane

0x2b64,	// (0x0003a0f0) midp_keyp_sk_left_pane_ParamLimits

0x2b64,	// (0x0003a0f0) midp_keyp_sk_left_pane

0x2bb6,	// (0x0003a142) midp_keyp_sk_right_pane_ParamLimits

0x2bb6,	// (0x0003a142) midp_keyp_sk_right_pane

0xc33c,	// (0x000438c8) bg_button_pane_cp03

0x2c02,	// (0x0003a18e) midp_keyp_sk_left_pane_g1

0xc33c,	// (0x000438c8) bg_button_pane_cp04

0x2c02,	// (0x0003a18e) midp_keyp_sk_right_pane_g1

0xf49d,	// (0x00046a29) midp_keyp_rocker_pane_g1

0x2c0b,	// (0x0003a197) keyp_game_cell_pane_ParamLimits

0x2c0b,	// (0x0003a197) keyp_game_cell_pane

0xc33c,	// (0x000438c8) bg_button_pane_cp02

0x2c2d,	// (0x0003a1b9) keyp_game_cell_pane_g1

0xadc8,	// (0x00042354) popup_fep_vkb2_window_ParamLimits

0xadc8,	// (0x00042354) popup_fep_vkb2_window

0xbe44,	// (0x000433d0) aid_size_cell_vkb2_ParamLimits

0xbe44,	// (0x000433d0) aid_size_cell_vkb2

0xbe7a,	// (0x00043406) popup_fep_vkb2_window_g1_ParamLimits

0xbe7a,	// (0x00043406) popup_fep_vkb2_window_g1

0xbeca,	// (0x00043456) vkb2_area_bottom_pane_ParamLimits

0xbeca,	// (0x00043456) vkb2_area_bottom_pane

0xbf08,	// (0x00043494) vkb2_area_keypad_pane_ParamLimits

0xbf08,	// (0x00043494) vkb2_area_keypad_pane

0xbf46,	// (0x000434d2) vkb2_area_top_pane_ParamLimits

0xbf46,	// (0x000434d2) vkb2_area_top_pane

0xbfc2,	// (0x0004354e) vkb2_top_entry_pane_ParamLimits

0xbfc2,	// (0x0004354e) vkb2_top_entry_pane

0xbfef,	// (0x0004357b) vkb2_top_grid_left_pane_ParamLimits

0xbfef,	// (0x0004357b) vkb2_top_grid_left_pane

0xc00f,	// (0x0004359b) vkb2_top_grid_right_pane_ParamLimits

0xc00f,	// (0x0004359b) vkb2_top_grid_right_pane

0x8422,	// (0x0003f9ae) vkb2_cell_keypad_pane_ParamLimits

0x8422,	// (0x0003f9ae) vkb2_cell_keypad_pane

0xc055,	// (0x000435e1) vkb2_area_bottom_grid_pane_ParamLimits

0xc055,	// (0x000435e1) vkb2_area_bottom_grid_pane

0xc07b,	// (0x00043607) vkb2_area_bottom_pane_g1_ParamLimits

0xc07b,	// (0x00043607) vkb2_area_bottom_pane_g1

0xc0a1,	// (0x0004362d) vkb2_area_bottom_pane_g2_ParamLimits

0xc0a1,	// (0x0004362d) vkb2_area_bottom_pane_g2

0xc0d2,	// (0x0004365e) vkb2_area_bottom_pane_g3_ParamLimits

0xc0d2,	// (0x0004365e) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x00047321) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x00047321) vkb2_area_bottom_pane_g

0x859a,	// (0x0003fb26) vkb2_top_cell_left_pane_ParamLimits

0x859a,	// (0x0003fb26) vkb2_top_cell_left_pane

0x2f1a,	// (0x0003a4a6) vkb2_top_entry_pane_g1_ParamLimits

0x2f1a,	// (0x0003a4a6) vkb2_top_entry_pane_g1

0x2f28,	// (0x0003a4b4) vkb2_top_entry_pane_t1_ParamLimits

0x2f28,	// (0x0003a4b4) vkb2_top_entry_pane_t1

0x49a3,	// (0x0003bf2f) vkb2_top_entry_pane_t2_ParamLimits

0x49a3,	// (0x0003bf2f) vkb2_top_entry_pane_t2

0x49d5,	// (0x0003bf61) vkb2_top_entry_pane_t3_ParamLimits

0x49d5,	// (0x0003bf61) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x00047328) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x00047328) vkb2_top_entry_pane_t

0xc128,	// (0x000436b4) vkb2_top_grid_right_pane_g1_ParamLimits

0xc128,	// (0x000436b4) vkb2_top_grid_right_pane_g1

0x863d,	// (0x0003fbc9) vkb2_top_grid_right_pane_g2_ParamLimits

0x863d,	// (0x0003fbc9) vkb2_top_grid_right_pane_g2

0x8655,	// (0x0003fbe1) vkb2_top_grid_right_pane_g3_ParamLimits

0x8655,	// (0x0003fbe1) vkb2_top_grid_right_pane_g3

0xc13e,	// (0x000436ca) vkb2_top_grid_right_pane_g4_ParamLimits

0xc13e,	// (0x000436ca) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0004732f) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0004732f) vkb2_top_grid_right_pane_g

0x8683,	// (0x0003fc0f) vkb2_top_cell_left_pane_g1

0x869a,	// (0x0003fc26) vkb2_cell_keypad_pane_g1_ParamLimits

0x869a,	// (0x0003fc26) vkb2_cell_keypad_pane_g1

0x49f9,	// (0x0003bf85) vkb2_cell_keypad_pane_t1_ParamLimits

0x49f9,	// (0x0003bf85) vkb2_cell_keypad_pane_t1

0x86a8,	// (0x0003fc34) vkb2_cell_bottom_grid_pane_ParamLimits

0x86a8,	// (0x0003fc34) vkb2_cell_bottom_grid_pane

0x86e1,	// (0x0003fc6d) vkb2_cell_bottom_grid_pane_g1

0x291a,	// (0x00039ea6) aid_call2_pane_cp02

0x2922,	// (0x00039eae) aid_call_pane_cp02

0x292a,	// (0x00039eb6) clock_digital_number_pane_cp10

0x2932,	// (0x00039ebe) clock_digital_number_pane_cp11

0x293a,	// (0x00039ec6) clock_digital_number_pane_cp12

0x2942,	// (0x00039ece) clock_digital_number_pane_cp13

0x294a,	// (0x00039ed6) clock_digital_separator_pane_cp10

0xcea7,	// (0x00044433) popup_clock_digital_analogue_window_cp2_g1

0xcea7,	// (0x00044433) popup_clock_digital_analogue_window_cp2_g2

0x2952,	// (0x00039ede) popup_clock_digital_analogue_window_cp2_g3

0xcea7,	// (0x00044433) popup_clock_digital_analogue_window_cp2_g4

0x2952,	// (0x00039ede) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x000472e4) popup_clock_digital_analogue_window_cp2_g

0x295a,	// (0x00039ee6) popup_clock_digital_analogue_window_cp2_t1

0x2968,	// (0x00039ef4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x000472ef) popup_clock_digital_analogue_window_cp2_t

0xf49d,	// (0x00046a29) clock_digital_number_pane_cp10_g1

0xf49d,	// (0x00046a29) clock_digital_number_pane_cp10_g2

0x0001,

0xfb46,	// (0x000470d2) clock_digital_number_pane_cp10_g

0xf49d,	// (0x00046a29) clock_digital_separator_pane_cp10_g1

0xf49d,	// (0x00046a29) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb46,	// (0x000470d2) clock_digital_separator_pane_cp10_g

0x47d6,	// (0x0003bd62) uniindi_top_pane_g3

0x47e7,	// (0x0003bd73) uniindi_top_pane_g4

0x848d,	// (0x0003fa19) vkb2_row_keypad_pane_ParamLimits

0x848d,	// (0x0003fa19) vkb2_row_keypad_pane

0x86fd,	// (0x0003fc89) vkb2_cell_t_keypad_pane_ParamLimits

0x86fd,	// (0x0003fc89) vkb2_cell_t_keypad_pane

0x870a,	// (0x0003fc96) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x870a,	// (0x0003fc96) vkb2_cell_t_keypad_pane_cp08

0x871a,	// (0x0003fca6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x871a,	// (0x0003fca6) vkb2_cell_t_keypad_pane_cp09

0x872b,	// (0x0003fcb7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x872b,	// (0x0003fcb7) vkb2_cell_t_keypad_pane_cp01

0x873b,	// (0x0003fcc7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x873b,	// (0x0003fcc7) vkb2_cell_t_keypad_pane_cp02

0x874b,	// (0x0003fcd7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x874b,	// (0x0003fcd7) vkb2_cell_t_keypad_pane_cp03

0x875b,	// (0x0003fce7) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x875b,	// (0x0003fce7) vkb2_cell_t_keypad_pane_cp04

0x876b,	// (0x0003fcf7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x876b,	// (0x0003fcf7) vkb2_cell_t_keypad_pane_cp05

0x877b,	// (0x0003fd07) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x877b,	// (0x0003fd07) vkb2_cell_t_keypad_pane_cp06

0x878b,	// (0x0003fd17) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x878b,	// (0x0003fd17) vkb2_cell_t_keypad_pane_cp07

0x879b,	// (0x0003fd27) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x879b,	// (0x0003fd27) vkb2_cell_t_keypad_pane_cp10

0x76b6,	// (0x0003ec42) vkb2_cell_t_keypad_pane_g1

0x4a10,	// (0x0003bf9c) vkb2_cell_t_keypad_pane_t1

0x5c79,	// (0x0003d205) popup_grid_graphic2_window

0x2f8d,	// (0x0003a519) aid_size_cell_graphic2_ParamLimits

0x2f8d,	// (0x0003a519) aid_size_cell_graphic2

0x2fcb,	// (0x0003a557) bg_popup_window_pane_cp21_ParamLimits

0x2fcb,	// (0x0003a557) bg_popup_window_pane_cp21

0x2fd9,	// (0x0003a565) graphic2_pages_pane_ParamLimits

0x2fd9,	// (0x0003a565) graphic2_pages_pane

0x3022,	// (0x0003a5ae) grid_graphic2_control_pane_ParamLimits

0x3022,	// (0x0003a5ae) grid_graphic2_control_pane

0x3060,	// (0x0003a5ec) grid_graphic2_pane_ParamLimits

0x3060,	// (0x0003a5ec) grid_graphic2_pane

0x30cf,	// (0x0003a65b) cell_graphic2_pane

0x5c79,	// (0x0003d205) main_comp_mode_pane

0x4451,	// (0x0003b9dd) list_ai3_gene_pane_ParamLimits

0x2619,	// (0x00039ba5) bg_popup_window_pane_cp19_ParamLimits

0x45c2,	// (0x0003bb4e) bg_touch_area_indi_pane_ParamLimits

0x45c2,	// (0x0003bb4e) bg_touch_area_indi_pane

0x45d8,	// (0x0003bb64) bg_touch_area_indi_pane_cp01_ParamLimits

0x45d8,	// (0x0003bb64) bg_touch_area_indi_pane_cp01

0x45ee,	// (0x0003bb7a) bg_touch_area_indi_pane_cp02_ParamLimits

0x45ee,	// (0x0003bb7a) bg_touch_area_indi_pane_cp02

0x4604,	// (0x0003bb90) bg_touch_area_indi_pane_cp03_ParamLimits

0x4604,	// (0x0003bb90) bg_touch_area_indi_pane_cp03

0x461a,	// (0x0003bba6) popup_slider_window_g1_ParamLimits

0x4636,	// (0x0003bbc2) popup_slider_window_g2_ParamLimits

0x4652,	// (0x0003bbde) popup_slider_window_g3_ParamLimits

0xfced,	// (0x00047279) popup_slider_window_g_ParamLimits

0x466e,	// (0x0003bbfa) popup_slider_window_t1_ParamLimits

0x46b2,	// (0x0003bc3e) small_volume_slider_vertical_pane_ParamLimits

0x30cf,	// (0x0003a65b) cell_graphic2_pane_ParamLimits

0x3118,	// (0x0003a6a4) bg_button_pane_cp10_ParamLimits

0x3118,	// (0x0003a6a4) bg_button_pane_cp10

0x312b,	// (0x0003a6b7) bg_button_pane_cp11_ParamLimits

0x312b,	// (0x0003a6b7) bg_button_pane_cp11

0x313e,	// (0x0003a6ca) graphic2_pages_pane_g1_ParamLimits

0x313e,	// (0x0003a6ca) graphic2_pages_pane_g1

0x3159,	// (0x0003a6e5) graphic2_pages_pane_g2_ParamLimits

0x3159,	// (0x0003a6e5) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0004733d) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0004733d) graphic2_pages_pane_g

0x3171,	// (0x0003a6fd) graphic2_pages_pane_t1_ParamLimits

0x3171,	// (0x0003a6fd) graphic2_pages_pane_t1

0x3189,	// (0x0003a715) cell_graphic2_control_pane_ParamLimits

0x3189,	// (0x0003a715) cell_graphic2_control_pane

0x31b3,	// (0x0003a73f) cell_graphic2_pane_g1_ParamLimits

0x31b3,	// (0x0003a73f) cell_graphic2_pane_g1

0xc154,	// (0x000436e0) cell_graphic2_pane_g2_ParamLimits

0xc154,	// (0x000436e0) cell_graphic2_pane_g2

0x31c0,	// (0x0003a74c) cell_graphic2_pane_g3_ParamLimits

0x31c0,	// (0x0003a74c) cell_graphic2_pane_g3

0xc161,	// (0x000436ed) cell_graphic2_pane_g4_ParamLimits

0xc161,	// (0x000436ed) cell_graphic2_pane_g4

0x31cd,	// (0x0003a759) cell_graphic2_pane_g5_ParamLimits

0x31cd,	// (0x0003a759) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x00047342) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x00047342) cell_graphic2_pane_g

0x31ed,	// (0x0003a779) cell_graphic2_pane_t1_ParamLimits

0x31ed,	// (0x0003a779) cell_graphic2_pane_t1

0xe301,	// (0x0004588d) grid_highlight_pane_cp11_ParamLimits

0xe301,	// (0x0004588d) grid_highlight_pane_cp11

0xc4ef,	// (0x00043a7b) bg_button_pane_cp05

0x3235,	// (0x0003a7c1) cell_graphic2_control_pane_g1

0xf49d,	// (0x00046a29) bg_touch_area_indi_pane_g1

0x4a22,	// (0x0003bfae) aid_cmod_rocker_key_size

0x4a2c,	// (0x0003bfb8) aid_cmode_itu_key_size

0x4a36,	// (0x0003bfc2) main_cmode_video_pane

0x4a3e,	// (0x0003bfca) main_comp_mode_itu_pane

0x4a48,	// (0x0003bfd4) main_comp_mode_rocker_pane

0x4a50,	// (0x0003bfdc) cell_cmode_rocker_pane_ParamLimits

0x4a50,	// (0x0003bfdc) cell_cmode_rocker_pane

0x4a62,	// (0x0003bfee) cell_cmode_itu_pane_ParamLimits

0x4a62,	// (0x0003bfee) cell_cmode_itu_pane

0xc98b,	// (0x00043f17) bg_button_pane_cp06_ParamLimits

0xc98b,	// (0x00043f17) bg_button_pane_cp06

0x3860,	// (0x0003adec) cell_cmode_rocker_pane_g1_ParamLimits

0x3860,	// (0x0003adec) cell_cmode_rocker_pane_g1

0x46d7,	// (0x0003bc63) cell_cmode_rocker_pane_g2_ParamLimits

0x46d7,	// (0x0003bc63) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x00047352) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x00047352) cell_cmode_rocker_pane_g

0xc33c,	// (0x000438c8) bg_button_pane_cp07

0x4a77,	// (0x0003c003) cell_cmode_itu_pane_g1

0x4a80,	// (0x0003c00c) cell_cmode_itu_pane_t1

0x4a8e,	// (0x0003c01a) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x00047357) cell_cmode_itu_pane_t

0x4858,	// (0x0003bde4) aid_touch_ctrl_left

0x4860,	// (0x0003bdec) aid_touch_ctrl_right

0xc33c,	// (0x000438c8) compa_mode_pane

0x325d,	// (0x0003a7e9) aid_cmod_rocker_key_size_cp

0x3267,	// (0x0003a7f3) aid_cmode_itu_key_size_cp

0x4a9c,	// (0x0003c028) compa_mode_pane_g1

0x4aa4,	// (0x0003c030) compa_mode_pane_g2

0x4aac,	// (0x0003c038) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0004735c) compa_mode_pane_g

0x3271,	// (0x0003a7fd) main_comp_mode_itu_pane_cp

0x3279,	// (0x0003a805) main_comp_mode_rocker_pane_cp

0x3281,	// (0x0003a80d) cell_cmode_itu_pane_cp_ParamLimits

0x3281,	// (0x0003a80d) cell_cmode_itu_pane_cp

0x3296,	// (0x0003a822) cell_cmode_rocker_pane_cp_ParamLimits

0x3296,	// (0x0003a822) cell_cmode_rocker_pane_cp

0xc98b,	// (0x00043f17) bg_button_pane_cp06_cp_ParamLimits

0xc98b,	// (0x00043f17) bg_button_pane_cp06_cp

0x3860,	// (0x0003adec) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3860,	// (0x0003adec) cell_cmode_rocker_pane_g1_cp

0xf49d,	// (0x00046a29) cell_cmode_rocker_pane_g2_cp

0xc33c,	// (0x000438c8) bg_button_pane_cp07_cp

0x32a8,	// (0x0003a834) cell_cmode_itu_pane_g1_cp

0x32b1,	// (0x0003a83d) cell_cmode_itu_pane_t1_cp

0x32b1,	// (0x0003a83d) cell_cmode_itu_pane_t2_cp

0x1cc0,	// (0x0003924c) settings_code_pane_cp2

0xc3bc,	// (0x00043948) bg_popup_window_pane_cp3_ParamLimits

0xc6c7,	// (0x00043c53) heading_pane_cp3_ParamLimits

0xc6d3,	// (0x00043c5f) listscroll_popup_graphic_pane_ParamLimits

0x738d,	// (0x0003e919) fep_hwr_aid_pane_ParamLimits

0x7d3f,	// (0x0003f2cb) aid_touch_sctrl_top_ParamLimits

0x7d5a,	// (0x0003f2e6) sctrl_sk_top_pane_g1_ParamLimits

0x76b6,	// (0x0003ec42) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x00047292) sctrl_sk_top_pane_g_ParamLimits

0x7d67,	// (0x0003f2f3) sctrl_sk_top_pane_t1_ParamLimits

0x7d3f,	// (0x0003f2cb) aid_touch_sctrl_bottom_ParamLimits

0x7d67,	// (0x0003f2f3) sctrl_sk_bottom_pane_t1_ParamLimits

0x47a2,	// (0x0003bd2e) aid_area_touch_clock

0xbf84,	// (0x00043510) aid_vkb2_area_top_pane_cell_ParamLimits

0xbf84,	// (0x00043510) aid_vkb2_area_top_pane_cell

0xc02f,	// (0x000435bb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc02f,	// (0x000435bb) aid_vkb2_area_bottom_pane_cell

0x499b,	// (0x0003bf27) popup_char_count_window

0x4ab4,	// (0x0003c040) popup_char_count_window_g1

0x4abd,	// (0x0003c049) popup_char_count_window_g2

0x4ac6,	// (0x0003c052) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x00047363) popup_char_count_window_g

0x4acf,	// (0x0003c05b) popup_char_count_window_t1

0x8272,	// (0x0003f7fe) popup_fep_char_preview_window_ParamLimits

0x8272,	// (0x0003f7fe) popup_fep_char_preview_window

0xbfa4,	// (0x00043530) vkb2_top_candi_pane_ParamLimits

0xbfa4,	// (0x00043530) vkb2_top_candi_pane

0x32bf,	// (0x0003a84b) cell_vkb2_top_candi_pane_ParamLimits

0x32bf,	// (0x0003a84b) cell_vkb2_top_candi_pane

0x87b0,	// (0x0003fd3c) bg_popup_fep_char_preview_window_ParamLimits

0x87b0,	// (0x0003fd3c) bg_popup_fep_char_preview_window

0x87be,	// (0x0003fd4a) popup_fep_char_preview_window_t1_ParamLimits

0x87be,	// (0x0003fd4a) popup_fep_char_preview_window_t1

0x4aed,	// (0x0003c079) bg_popup_fep_char_preview_window_g1

0x4ae5,	// (0x0003c071) bg_popup_fep_char_preview_window_g2

0x4add,	// (0x0003c069) bg_popup_fep_char_preview_window_g3

0x4b0d,	// (0x0003c099) bg_popup_fep_char_preview_window_g4

0x4b05,	// (0x0003c091) bg_popup_fep_char_preview_window_g5

0x87f8,	// (0x0003fd84) bg_popup_fep_char_preview_window_g6

0x4afd,	// (0x0003c089) bg_popup_fep_char_preview_window_g7

0x4af5,	// (0x0003c081) bg_popup_fep_char_preview_window_g8

0x4b15,	// (0x0003c0a1) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0004736a) bg_popup_fep_char_preview_window_g

0x76b6,	// (0x0003ec42) cell_vkb2_top_candi_pane_g1_ParamLimits

0x76b6,	// (0x0003ec42) cell_vkb2_top_candi_pane_g1

0x76c4,	// (0x0003ec50) cell_vkb2_top_candi_pane_g2_ParamLimits

0x76c4,	// (0x0003ec50) cell_vkb2_top_candi_pane_g2

0x4b1d,	// (0x0003c0a9) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4b1d,	// (0x0003c0a9) cell_vkb2_top_candi_pane_g3

0x8800,	// (0x0003fd8c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8800,	// (0x0003fd8c) cell_vkb2_top_candi_pane_g4

0x3ab0,	// (0x0003b03c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x3ab0,	// (0x0003b03c) cell_vkb2_top_candi_pane_g5

0x8821,	// (0x0003fdad) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8821,	// (0x0003fdad) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0004737d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0004737d) cell_vkb2_top_candi_pane_g

0x882f,	// (0x0003fdbb) cell_vkb2_top_candi_pane_t1

0x6ca4,	// (0x0003e230) aid_size_touch_slider_mark_ParamLimits

0x6ca4,	// (0x0003e230) aid_size_touch_slider_mark

0x300d,	// (0x0003a599) grid_graphic2_catg_pane_ParamLimits

0x300d,	// (0x0003a599) grid_graphic2_catg_pane

0x30a4,	// (0x0003a630) popup_grid_graphic2_window_t1_ParamLimits

0x30a4,	// (0x0003a630) popup_grid_graphic2_window_t1

0x30b9,	// (0x0003a645) popup_grid_graphic2_window_t2_ParamLimits

0x30b9,	// (0x0003a645) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x00047338) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x00047338) popup_grid_graphic2_window_t

0xc4ef,	// (0x00043a7b) bg_button_pane_cp05_ParamLimits

0x3235,	// (0x0003a7c1) cell_graphic2_control_pane_g1_ParamLimits

0x481e,	// (0x0003bdaa) cell_graphic2_catg_pane_ParamLimits

0x481e,	// (0x0003bdaa) cell_graphic2_catg_pane

0xc33c,	// (0x000438c8) bg_button_pane_cp12

0x3309,	// (0x0003a895) cell_graphic2_catg_pane_g1

0x476e,	// (0x0003bcfa) cell_tb_ext_pane_t1_ParamLimits

0x85fa,	// (0x0003fb86) vkb2_top_cell_right_narrow_pane_ParamLimits

0x85fa,	// (0x0003fb86) vkb2_top_cell_right_narrow_pane

0x8612,	// (0x0003fb9e) vkb2_top_cell_right_wide_pane_ParamLimits

0x8612,	// (0x0003fb9e) vkb2_top_cell_right_wide_pane

0x737f,	// (0x0003e90b) bg_vkb2_func_pane_ParamLimits

0x737f,	// (0x0003e90b) bg_vkb2_func_pane

0x8683,	// (0x0003fc0f) vkb2_top_cell_left_pane_g1_ParamLimits

0x737f,	// (0x0003e90b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x737f,	// (0x0003e90b) bg_vkb2_fuc_pane_cp03

0x86e1,	// (0x0003fc6d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd798,	// (0x00044d24) bg_vkb2_func_pane_g1

0xd7a0,	// (0x00044d2c) bg_vkb2_func_pane_g2

0xd7b0,	// (0x00044d3c) bg_vkb2_func_pane_g3

0xd7a8,	// (0x00044d34) bg_vkb2_func_pane_g4

0xd7b8,	// (0x00044d44) bg_vkb2_func_pane_g5

0xd7c0,	// (0x00044d4c) bg_vkb2_func_pane_g6

0xd7c8,	// (0x00044d54) bg_vkb2_func_pane_g7

0xd7d0,	// (0x00044d5c) bg_vkb2_func_pane_g8

0xd790,	// (0x00044d1c) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0004738a) bg_vkb2_func_pane_g

0x737f,	// (0x0003e90b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x737f,	// (0x0003e90b) bg_vkb2_fuc_pane_cp01

0x8683,	// (0x0003fc0f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8683,	// (0x0003fc0f) vkb2_top_cell_right_wide_pane_g1

0x737f,	// (0x0003e90b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x737f,	// (0x0003e90b) bg_vkb2_fuc_pane_cp02

0x86e1,	// (0x0003fc6d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x86e1,	// (0x0003fc6d) vkb2_top_cell_right_narrow_pane_g1

0x2567,	// (0x00039af3) aid_touch_area_decrease_ParamLimits

0x2567,	// (0x00039af3) aid_touch_area_decrease

0x2595,	// (0x00039b21) aid_touch_area_increase_ParamLimits

0x2595,	// (0x00039b21) aid_touch_area_increase

0x25bd,	// (0x00039b49) aid_touch_area_mute_ParamLimits

0x25bd,	// (0x00039b49) aid_touch_area_mute

0x25e5,	// (0x00039b71) aid_touch_area_slider_ParamLimits

0x25e5,	// (0x00039b71) aid_touch_area_slider

0x2625,	// (0x00039bb1) popup_slider_window_g4_ParamLimits

0x2625,	// (0x00039bb1) popup_slider_window_g4

0x264d,	// (0x00039bd9) popup_slider_window_g5_ParamLimits

0x264d,	// (0x00039bd9) popup_slider_window_g5

0x2681,	// (0x00039c0d) popup_slider_window_g6_ParamLimits

0x2681,	// (0x00039c0d) popup_slider_window_g6

0x469a,	// (0x0003bc26) popup_slider_window_t2_ParamLimits

0x469a,	// (0x0003bc26) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x00047286) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x00047286) popup_slider_window_t

0x269d,	// (0x00039c29) slider_pane_ParamLimits

0x269d,	// (0x00039c29) slider_pane

0x4b3e,	// (0x0003c0ca) slider_pane_g1_ParamLimits

0x4b3e,	// (0x0003c0ca) slider_pane_g1

0x4b52,	// (0x0003c0de) slider_pane_g2_ParamLimits

0x4b52,	// (0x0003c0de) slider_pane_g2

0x4b68,	// (0x0003c0f4) slider_pane_g3_ParamLimits

0x4b68,	// (0x0003c0f4) slider_pane_g3

0x0003,

0xfe11,	// (0x0004739d) slider_pane_g_ParamLimits

0xfe11,	// (0x0004739d) slider_pane_g

0xbc3c,	// (0x000431c8) popup_tb_float_extension_window_ParamLimits

0xbc3c,	// (0x000431c8) popup_tb_float_extension_window

0x4b94,	// (0x0003c120) aid_size_cell_tb_float_ext

0xc33c,	// (0x000438c8) bg_popup_sub_window_cp28

0x4b9f,	// (0x0003c12b) grid_tb_float_ext_pane

0x4ba7,	// (0x0003c133) cell_tb_float_ext_pane_ParamLimits

0x4ba7,	// (0x0003c133) cell_tb_float_ext_pane

0x4bbf,	// (0x0003c14b) cell_tb_float_ext_pane_g1

0x4bc8,	// (0x0003c154) grid_highlight_pane_cp12

0xbdad,	// (0x00043339) cell_last_hwr_side_pane_ParamLimits

0xbdad,	// (0x00043339) cell_last_hwr_side_pane

0xf49d,	// (0x00046a29) cell_last_hwr_side_pane_g1

0x4bd1,	// (0x0003c15d) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x000473a6) cell_last_hwr_side_pane_g

0xc103,	// (0x0004368f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc103,	// (0x0004368f) vkb2_area_bottom_space_btn_pane

0x76b6,	// (0x0003ec42) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x4a10,	// (0x0003bf9c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x882f,	// (0x0003fdbb) cell_vkb2_top_candi_pane_t1_ParamLimits

0x884d,	// (0x0003fdd9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x884d,	// (0x0003fdd9) vkb2_area_bottom_space_btn_pane_g1

0x8883,	// (0x0003fe0f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8883,	// (0x0003fe0f) vkb2_area_bottom_space_btn_pane_g2

0x88b9,	// (0x0003fe45) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x88b9,	// (0x0003fe45) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x000473ab) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x000473ab) vkb2_area_bottom_space_btn_pane_g

0x743c,	// (0x0003e9c8) cel_fep_hwr_func_pane_ParamLimits

0x743c,	// (0x0003e9c8) cel_fep_hwr_func_pane

0xbd82,	// (0x0004330e) cell_hwr_side_button_pane_ParamLimits

0xbd82,	// (0x0004330e) cell_hwr_side_button_pane

0x47a2,	// (0x0003bd2e) aid_area_touch_clock_ParamLimits

0xc4ef,	// (0x00043a7b) bg_uniindi_top_pane_ParamLimits

0x47b4,	// (0x0003bd40) uniindi_top_pane_g1_ParamLimits

0x47ca,	// (0x0003bd56) uniindi_top_pane_g2_ParamLimits

0x47d6,	// (0x0003bd62) uniindi_top_pane_g3_ParamLimits

0x47e7,	// (0x0003bd73) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x000472be) uniindi_top_pane_g_ParamLimits

0x47f4,	// (0x0003bd80) uniindi_top_pane_t1_ParamLimits

0xc4ef,	// (0x00043a7b) bg_vkb2_func_pane_cp01_ParamLimits

0xc4ef,	// (0x00043a7b) bg_vkb2_func_pane_cp01

0x4bda,	// (0x0003c166) cel_fep_hwr_func_pane_g1_ParamLimits

0x4bda,	// (0x0003c166) cel_fep_hwr_func_pane_g1

0xc4ef,	// (0x00043a7b) bg_vkb2_func_pane_cp02_ParamLimits

0xc4ef,	// (0x00043a7b) bg_vkb2_func_pane_cp02

0x4bda,	// (0x0003c166) cell_hwr_side_button_pane_g1_ParamLimits

0x4bda,	// (0x0003c166) cell_hwr_side_button_pane_g1

0xd6aa,	// (0x00044c36) status_pane_g4_ParamLimits

0xd6aa,	// (0x00044c36) status_pane_g4

0xd6c2,	// (0x00044c4e) status_pane_t1

0xf32e,	// (0x000468ba) form2_midp_gauge_slider_cont_pane

0xf336,	// (0x000468c2) form2_midp_gauge_slider_pane_t1_ParamLimits

0x1fbb,	// (0x00039547) form2_midp_gauge_slider_pane_t2_ParamLimits

0x1fcd,	// (0x00039559) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf9,	// (0x00047085) form2_midp_gauge_slider_pane_t_ParamLimits

0xf348,	// (0x000468d4) form2_midp_slider_pane_ParamLimits

0x8232,	// (0x0003f7be) aid_size_cell_func_vkb2_ParamLimits

0x8232,	// (0x0003f7be) aid_size_cell_func_vkb2

0x4b80,	// (0x0003c10c) slider_pane_g4_ParamLimits

0x4b80,	// (0x0003c10c) slider_pane_g4

0xc16e,	// (0x000436fa) form2_midp_gauge_slider_pane_t2_cp01

0xc17c,	// (0x00043708) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc17c,	// (0x00043708) form2_midp_gauge_slider_pane_t3_cp01

0x892a,	// (0x0003feb6) form2_midp_slider_pane_cp01

0xc33c,	// (0x000438c8) navi_smil_pane

0x4c0a,	// (0x0003c196) navi_smil_pane_g1

0x4c12,	// (0x0003c19e) navi_smil_pane_t1

0x4be8,	// (0x0003c174) form2_midp_slider_pane_g1

0x4bf1,	// (0x0003c17d) form2_midp_slider_pane_g2

0x4bf9,	// (0x0003c185) form2_midp_slider_pane_g3

0x4be8,	// (0x0003c174) form2_midp_slider_pane_g4

0x333d,	// (0x0003a8c9) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x000473b4) form2_midp_slider_pane_g

0x88ef,	// (0x0003fe7b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x88ef,	// (0x0003fe7b) vkb2_area_bottom_space_btn_pane_g4

0x160a,	// (0x00038b96) lc0_navi_pane_ParamLimits

0x160a,	// (0x00038b96) lc0_navi_pane

0x1674,	// (0x00038c00) lc0_stat_indi_pane_ParamLimits

0x1674,	// (0x00038c00) lc0_stat_indi_pane

0x1689,	// (0x00038c15) ls0_title_pane_ParamLimits

0x1689,	// (0x00038c15) ls0_title_pane

0xc98b,	// (0x00043f17) bg_popup_sub_pane_cp14_ParamLimits

0x4789,	// (0x0003bd15) list_uniindi_pane_ParamLimits

0x4795,	// (0x0003bd21) uniindi_top_pane_ParamLimits

0x4830,	// (0x0003bdbc) list_single_uniindi_pane_g1_ParamLimits

0x4843,	// (0x0003bdcf) list_single_uniindi_pane_t1_ParamLimits

0xc199,	// (0x00043725) lc0_stat_clock_pane_ParamLimits

0xc199,	// (0x00043725) lc0_stat_clock_pane

0x3360,	// (0x0003a8ec) lc0_stat_indi_pane_g1_ParamLimits

0x3360,	// (0x0003a8ec) lc0_stat_indi_pane_g1

0x3353,	// (0x0003a8df) lc0_stat_indi_pane_g2_ParamLimits

0x3353,	// (0x0003a8df) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x000473bf) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x000473bf) lc0_stat_indi_pane_g

0xc1a6,	// (0x00043732) lc0_uni_indicator_pane_ParamLimits

0xc1a6,	// (0x00043732) lc0_uni_indicator_pane

0x4c20,	// (0x0003c1ac) ls0_title_pane_g1_ParamLimits

0x4c20,	// (0x0003c1ac) ls0_title_pane_g1

0x337a,	// (0x0003a906) ls0_title_pane_t1_ParamLimits

0x337a,	// (0x0003a906) ls0_title_pane_t1

0xc1b3,	// (0x0004373f) lc0_uni_indicator_pane_g1_ParamLimits

0xc1b3,	// (0x0004373f) lc0_uni_indicator_pane_g1

0x4c34,	// (0x0003c1c0) lc0_stat_clock_pane_t1

0x5c79,	// (0x0003d205) main_ai5_pane

0x4c42,	// (0x0003c1ce) ai5_sk_pane_ParamLimits

0x4c42,	// (0x0003c1ce) ai5_sk_pane

0x33bd,	// (0x0003a949) cell_ai5_widget_pane_ParamLimits

0x33bd,	// (0x0003a949) cell_ai5_widget_pane

0x4c4f,	// (0x0003c1db) aid_size_cell_widget_grid

0x4c5d,	// (0x0003c1e9) bg_ai5_widget_pane_ParamLimits

0x4c5d,	// (0x0003c1e9) bg_ai5_widget_pane

0x4cb1,	// (0x0003c23d) cell_ai5_widget_pane_g2

0x4cc1,	// (0x0003c24d) cell_ai5_widget_pane_g3

0x4cd8,	// (0x0003c264) cell_ai5_widget_pane_g4

0x4ce4,	// (0x0003c270) cell_ai5_widget_pane_g5

0x4cf0,	// (0x0003c27c) cell_ai5_widget_pane_g6

0x4cfc,	// (0x0003c288) cell_ai5_widget_pane_g7

0x4d44,	// (0x0003c2d0) cell_ai5_widget_pane_t1_ParamLimits

0x4d44,	// (0x0003c2d0) cell_ai5_widget_pane_t1

0x4d61,	// (0x0003c2ed) cell_ai5_widget_pane_t2_ParamLimits

0x4d61,	// (0x0003c2ed) cell_ai5_widget_pane_t2

0x4d79,	// (0x0003c305) cell_ai5_widget_pane_t3_ParamLimits

0x4d79,	// (0x0003c305) cell_ai5_widget_pane_t3

0x4d91,	// (0x0003c31d) cell_ai5_widget_pane_t4_ParamLimits

0x4d91,	// (0x0003c31d) cell_ai5_widget_pane_t4

0x4dae,	// (0x0003c33a) cell_ai5_widget_pane_t5_ParamLimits

0x4dae,	// (0x0003c33a) cell_ai5_widget_pane_t5

0x4dcd,	// (0x0003c359) cell_ai5_widget_pane_t6_ParamLimits

0x4dcd,	// (0x0003c359) cell_ai5_widget_pane_t6

0x4ddf,	// (0x0003c36b) cell_ai5_widget_pane_t7_ParamLimits

0x4ddf,	// (0x0003c36b) cell_ai5_widget_pane_t7

0x4df8,	// (0x0003c384) cell_ai5_widget_pane_t8_ParamLimits

0x4df8,	// (0x0003c384) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x000473d9) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x000473d9) cell_ai5_widget_pane_t

0x4e4c,	// (0x0003c3d8) grid_ai5_widget_pane

0xc98b,	// (0x00043f17) highlight_cell_ai5_widget_pane_ParamLimits

0xc98b,	// (0x00043f17) highlight_cell_ai5_widget_pane

0x341b,	// (0x0003a9a7) ai5_sk_left_pane

0x3425,	// (0x0003a9b1) ai5_sk_middle_pane

0x342f,	// (0x0003a9bb) ai5_sk_right_pane

0x4e58,	// (0x0003c3e4) bg_ai5_widget_pane_g1_ParamLimits

0x4e58,	// (0x0003c3e4) bg_ai5_widget_pane_g1

0x4e64,	// (0x0003c3f0) bg_ai5_widget_pane_g2_ParamLimits

0x4e64,	// (0x0003c3f0) bg_ai5_widget_pane_g2

0x4e70,	// (0x0003c3fc) bg_ai5_widget_pane_g3_ParamLimits

0x4e70,	// (0x0003c3fc) bg_ai5_widget_pane_g3

0x4e7c,	// (0x0003c408) bg_ai5_widget_pane_g4_ParamLimits

0x4e7c,	// (0x0003c408) bg_ai5_widget_pane_g4

0x4e88,	// (0x0003c414) bg_ai5_widget_pane_g5_ParamLimits

0x4e88,	// (0x0003c414) bg_ai5_widget_pane_g5

0x4e94,	// (0x0003c420) bg_ai5_widget_pane_g6_ParamLimits

0x4e94,	// (0x0003c420) bg_ai5_widget_pane_g6

0x4ea0,	// (0x0003c42c) bg_ai5_widget_pane_g7_ParamLimits

0x4ea0,	// (0x0003c42c) bg_ai5_widget_pane_g7

0x4eac,	// (0x0003c438) bg_ai5_widget_pane_g8_ParamLimits

0x4eac,	// (0x0003c438) bg_ai5_widget_pane_g8

0x4eb8,	// (0x0003c444) bg_ai5_widget_pane_g9_ParamLimits

0x4eb8,	// (0x0003c444) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x000473ee) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x000473ee) bg_ai5_widget_pane_g

0x4eea,	// (0x0003c476) cell_shortcut_ai5_widget_pane_ParamLimits

0x4eea,	// (0x0003c476) cell_shortcut_ai5_widget_pane

0xd405,	// (0x00044991) bg_cell_shortcut_ai5_widget_pane

0x4efb,	// (0x0003c487) cell_grid_ai5_widget_pane_g1

0xd405,	// (0x00044991) highlight_cell_shortcut_ai5_widget_pane

0xd798,	// (0x00044d24) ai5_sk_left_pane_g1

0x4f04,	// (0x0003c490) ai5_sk_left_pane_g2

0x4f0c,	// (0x0003c498) ai5_sk_left_pane_g3

0x4f14,	// (0x0003c4a0) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x00047401) ai5_sk_left_pane_g

0x4f1c,	// (0x0003c4a8) ai5_sk_left_pane_t1

0xd7a0,	// (0x00044d2c) ai5_sk_right_pane_g1

0x4f2a,	// (0x0003c4b6) ai5_sk_right_pane_g2

0x4f32,	// (0x0003c4be) ai5_sk_right_pane_g3

0x4f3a,	// (0x0003c4c6) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0004740a) ai5_sk_right_pane_g

0x4f42,	// (0x0003c4ce) ai5_sk_right_pane_t1

0xd7a0,	// (0x00044d2c) ai5_sk_middle_pane_g1

0xd798,	// (0x00044d24) ai5_sk_middle_pane_g2

0xd7b8,	// (0x00044d44) ai5_sk_middle_pane_g3

0x4f32,	// (0x0003c4be) ai5_sk_middle_pane_g4

0x4f0c,	// (0x0003c498) ai5_sk_middle_pane_g5

0x4f50,	// (0x0003c4dc) ai5_sk_middle_pane_g6

0x3439,	// (0x0003a9c5) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x00047413) ai5_sk_middle_pane_g

0x14fc,	// (0x00038a88) aid_touch_area_size_lc0_ParamLimits

0x14fc,	// (0x00038a88) aid_touch_area_size_lc0

0x76e5,	// (0x0003ec71) cell_hwr_candidate_pane_t1_ParamLimits

0xd5ce,	// (0x00044b5a) aid_touch_navi_pane

0x1776,	// (0x00038d02) status_dt_navi_pane_ParamLimits

0x1776,	// (0x00038d02) status_dt_navi_pane

0x178e,	// (0x00038d1a) status_dt_sta_pane_ParamLimits

0x178e,	// (0x00038d1a) status_dt_sta_pane

0x3441,	// (0x0003a9cd) dt_sta_controll_pane

0x344e,	// (0x0003a9da) dt_sta_indi_pane

0x345b,	// (0x0003a9e7) dt_sta_title_pane

0xc4ef,	// (0x00043a7b) bg_dt_sta_indi_pane_ParamLimits

0xc4ef,	// (0x00043a7b) bg_dt_sta_indi_pane

0x4f58,	// (0x0003c4e4) dt_sta_battery_pane

0x4f60,	// (0x0003c4ec) dt_sta_indi_pane_g1

0x4f69,	// (0x0003c4f5) dt_sta_indi_pane_g2

0x4f72,	// (0x0003c4fe) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x00047422) dt_sta_indi_pane_g

0x4f7b,	// (0x0003c507) dt_sta_signal_pane

0xc98b,	// (0x00043f17) bg_dt_sta_title_pane_ParamLimits

0xc98b,	// (0x00043f17) bg_dt_sta_title_pane

0x4f84,	// (0x0003c510) dt_sta_title_pane_g1

0x4f8c,	// (0x0003c518) dt_sta_title_pane_t1_ParamLimits

0x4f8c,	// (0x0003c518) dt_sta_title_pane_t1

0xc33c,	// (0x000438c8) bg_dt_sta_control_pane

0x4fa1,	// (0x0003c52d) dt_sta_controll_pane_g1

0x4faa,	// (0x0003c536) bg_dt_sta_title_pane_g1

0x4fb3,	// (0x0003c53f) bg_dt_sta_title_pane_g2

0x4fbc,	// (0x0003c548) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x00047429) bg_dt_sta_title_pane_g

0xf49d,	// (0x00046a29) bg_dt_sta_indi_pane_g1

0x4fc5,	// (0x0003c551) dt_sta_signal_pane_g1

0x4fcd,	// (0x0003c559) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x00047430) dt_sta_signal_pane_g

0x4fd5,	// (0x0003c561) dt_sta_battery_pane_g1

0x4fde,	// (0x0003c56a) dt_sta_battery_pane_t1

0xf49d,	// (0x00046a29) bg_dt_sta_control_pane_g1

0xcf2a,	// (0x000444b6) fep_china_uni_eep_pane

0xcf32,	// (0x000444be) fep_china_uni_entry_pane_ParamLimits

0xcf42,	// (0x000444ce) popup_fep_china_uni_window_g1_ParamLimits

0xcf52,	// (0x000444de) popup_fep_china_uni_window_g2_ParamLimits

0xcf52,	// (0x000444de) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00046cae) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00046cae) popup_fep_china_uni_window_g

0x4fed,	// (0x0003c579) fep_china_uni_eep_pane_g1

0x4ff5,	// (0x0003c581) fep_china_uni_eep_pane_t1

0x4c01,	// (0x0003c18d) aid_touch_area_size_smil_player

0xd67d,	// (0x00044c09) lc0_clock_pane

0xd6b6,	// (0x00044c42) status_pane_g5_ParamLimits

0xd6b6,	// (0x00044c42) status_pane_g5

0xb874,	// (0x00042e00) popup_keymap_window

0xd696,	// (0x00044c22) status_icon_pane

0x4cc1,	// (0x0003c24d) cell_ai5_widget_pane_g3_ParamLimits

0x4cd8,	// (0x0003c264) cell_ai5_widget_pane_g4_ParamLimits

0x4ce4,	// (0x0003c270) cell_ai5_widget_pane_g5_ParamLimits

0x4d08,	// (0x0003c294) cell_ai5_widget_pane_g8_ParamLimits

0x4d08,	// (0x0003c294) cell_ai5_widget_pane_g8

0x4d1c,	// (0x0003c2a8) cell_ai5_widget_pane_g9_ParamLimits

0x4d1c,	// (0x0003c2a8) cell_ai5_widget_pane_g9

0x4d30,	// (0x0003c2bc) cell_ai5_widget_pane_g10_ParamLimits

0x4d30,	// (0x0003c2bc) cell_ai5_widget_pane_g10

0x5004,	// (0x0003c590) status_icon_pane_g1

0xc33c,	// (0x000438c8) bg_popup_sub_pane_cp13

0x500c,	// (0x0003c598) popup_keymap_window_t1

0xb5c7,	// (0x00042b53) control_pane_g6_ParamLimits

0xb5c7,	// (0x00042b53) control_pane_g6

0xb5d4,	// (0x00042b60) control_pane_g7_ParamLimits

0xb5d4,	// (0x00042b60) control_pane_g7

0xb5e1,	// (0x00042b6d) control_pane_g8_ParamLimits

0xb5e1,	// (0x00042b6d) control_pane_g8

0x3441,	// (0x0003a9cd) dt_sta_controll_pane_ParamLimits

0x344e,	// (0x0003a9da) dt_sta_indi_pane_ParamLimits

0x345b,	// (0x0003a9e7) dt_sta_title_pane_ParamLimits

0xc8b2,	// (0x00043e3e) aid_size_touch_scroll_bar_cale

0x5d52,	// (0x0003d2de) popup_discreet_window_ParamLimits

0x5d52,	// (0x0003d2de) popup_discreet_window

0xadfa,	// (0x00042386) popup_sk_window

0xdcf1,	// (0x0004527d) bg_popup_sub_pane_cp28_ParamLimits

0xdcf1,	// (0x0004527d) bg_popup_sub_pane_cp28

0x501a,	// (0x0003c5a6) popup_discreet_window_g1_ParamLimits

0x501a,	// (0x0003c5a6) popup_discreet_window_g1

0x503a,	// (0x0003c5c6) popup_discreet_window_t1_ParamLimits

0x503a,	// (0x0003c5c6) popup_discreet_window_t1

0x5058,	// (0x0003c5e4) popup_discreet_window_t2_ParamLimits

0x5058,	// (0x0003c5e4) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x00047435) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x00047435) popup_discreet_window_t

0x895f,	// (0x0003feeb) popup_sk_window_g1

0x8969,	// (0x0003fef5) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0004743c) popup_sk_window_g

0x8971,	// (0x0003fefd) popup_sk_window_t1

0x897f,	// (0x0003ff0b) popup_sk_window_t1_copy1

0x4cb1,	// (0x0003c23d) cell_ai5_widget_pane_g2_ParamLimits

0x4e0a,	// (0x0003c396) cell_ai5_widget_pane_t9_ParamLimits

0x4e0a,	// (0x0003c396) cell_ai5_widget_pane_t9

0xc33c,	// (0x000438c8) main_fep_fshwr2_pane

0xc1c8,	// (0x00043754) aid_fshwr2_btn_pane

0xc1d9,	// (0x00043765) aid_fshwr2_syb_pane

0xc1ea,	// (0x00043776) aid_fshwr2_txt_pane

0xc1f6,	// (0x00043782) fshwr2_func_candi_pane

0xc210,	// (0x0004379c) fshwr2_hwr_syb_pane

0xc225,	// (0x000437b1) fshwr2_icf_pane

0x5c79,	// (0x0003d205) fshwr2_icf_bg_pane

0xc24b,	// (0x000437d7) fshwr2_icf_pane_t1_ParamLimits

0xc24b,	// (0x000437d7) fshwr2_icf_pane_t1

0xcea7,	// (0x00044433) fshwr2_func_candi_pane_g1

0x3507,	// (0x0003aa93) fshwr2_func_candi_row_pane_ParamLimits

0x3507,	// (0x0003aa93) fshwr2_func_candi_row_pane

0xc262,	// (0x000437ee) cell_fshwr2_syb_pane_ParamLimits

0xc262,	// (0x000437ee) cell_fshwr2_syb_pane

0x76b6,	// (0x0003ec42) fshwr2_hwr_syb_pane_g1_ParamLimits

0x76b6,	// (0x0003ec42) fshwr2_hwr_syb_pane_g1

0x5c79,	// (0x0003d205) bg_popup_call_pane_cp01

0xc276,	// (0x00043802) fshwr2_func_candi_cell_pane_ParamLimits

0xc276,	// (0x00043802) fshwr2_func_candi_cell_pane

0x357d,	// (0x0003ab09) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x357d,	// (0x0003ab09) fshwr2_func_candi_cell_bg_pane

0xc2b5,	// (0x00043841) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc2b5,	// (0x00043841) fshwr2_func_candi_cell_pane_g1

0xc2ec,	// (0x00043878) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc2ec,	// (0x00043878) fshwr2_func_candi_cell_pane_t1

0x5c79,	// (0x0003d205) bg_button_pane_cp08

0xd405,	// (0x00044991) cell_fshwr2_syb_bg_pane

0xc307,	// (0x00043893) cell_fshwr2_syb_bg_pane_g1

0xc30f,	// (0x0004389b) cell_fshwr2_syb_bg_pane_t1

0xc98b,	// (0x00043f17) main_tmo_pane

0x1a9c,	// (0x00039028) uni_indicator_pane_g1_ParamLimits

0x1ab2,	// (0x0003903e) uni_indicator_pane_g2_ParamLimits

0x1ac8,	// (0x00039054) uni_indicator_pane_g3_ParamLimits

0xe744,	// (0x00045cd0) uni_indicator_pane_g4_ParamLimits

0xe744,	// (0x00045cd0) uni_indicator_pane_g4

0xe758,	// (0x00045ce4) uni_indicator_pane_g5_ParamLimits

0xe758,	// (0x00045ce4) uni_indicator_pane_g5

0xe758,	// (0x00045ce4) uni_indicator_pane_g6_ParamLimits

0xe758,	// (0x00045ce4) uni_indicator_pane_g6

0xf921,	// (0x00046ead) uni_indicator_pane_g_ParamLimits

0x254b,	// (0x00039ad7) popup_tmo_note_window_ParamLimits

0x254b,	// (0x00039ad7) popup_tmo_note_window

0x7db8,	// (0x0003f344) fshwr2_bg_pane

0xc2dd,	// (0x00043869) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc2dd,	// (0x00043869) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x00047441) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x00047441) fshwr2_func_candi_cell_pane_g

0x769e,	// (0x0003ec2a) bg_popup_window_pane_cp01

0x8aa8,	// (0x00040034) bg_popup_window_pane_g1_cp01

0x9aec,	// (0x00041078) bg_popup_window_pane_cp22_ParamLimits

0x9aec,	// (0x00041078) bg_popup_window_pane_cp22

0x9afa,	// (0x00041086) listscroll_tmo_link_pane_ParamLimits

0x9afa,	// (0x00041086) listscroll_tmo_link_pane

0x9b3a,	// (0x000410c6) popup_tmo_note_window_g1_ParamLimits

0x9b3a,	// (0x000410c6) popup_tmo_note_window_g1

0x9b47,	// (0x000410d3) tmo_note_info_pane_ParamLimits

0x9b47,	// (0x000410d3) tmo_note_info_pane

0x35f2,	// (0x0003ab7e) list_tmo_note_info_pane_g1_ParamLimits

0x35f2,	// (0x0003ab7e) list_tmo_note_info_pane_g1

0x9b61,	// (0x000410ed) list_tmo_note_info_pane_g2_ParamLimits

0x9b61,	// (0x000410ed) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x00047446) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x00047446) list_tmo_note_info_pane_g

0x9b7d,	// (0x00041109) list_tmo_note_info_text_pane_ParamLimits

0x9b7d,	// (0x00041109) list_tmo_note_info_text_pane

0x9bbf,	// (0x0004114b) list_tmo_link_pane

0x9bcc,	// (0x00041158) scroll_pane_cp20

0x9bd9,	// (0x00041165) list_single_tmo_link_pane_ParamLimits

0x9bd9,	// (0x00041165) list_single_tmo_link_pane

0x9be9,	// (0x00041175) list_single_tmo_link_pane_t1

0x9bf7,	// (0x00041183) list_tmo_note_info_text_pane_t1_ParamLimits

0x9bf7,	// (0x00041183) list_tmo_note_info_text_pane_t1

0xb23f,	// (0x000427cb) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb23f,	// (0x000427cb) aid_size_touch_scroll_bar_cp01

0x07fc,	// (0x00037d88) aid_size_touch_slider_marker

0xadee,	// (0x0004237a) popup_settings_window_ParamLimits

0xadee,	// (0x0004237a) popup_settings_window

0x93b3,	// (0x0004093f) popup_candi_list_indi_window

0xd5ce,	// (0x00044b5a) aid_touch_navi_pane_ParamLimits

0x7d13,	// (0x0003f29f) rs_clock_indi_pane

0x7d1c,	// (0x0003f2a8) sctrl_sk_bottom_pane_ParamLimits

0x7d2d,	// (0x0003f2b9) sctrl_sk_top_pane_ParamLimits

0x828c,	// (0x0003f818) popup_fep_tooltip_window

0x4c4f,	// (0x0003c1db) aid_size_cell_widget_grid_ParamLimits

0x4c9c,	// (0x0003c228) cell_ai5_widget_pane_g1_ParamLimits

0x4c9c,	// (0x0003c228) cell_ai5_widget_pane_g1

0x4cf0,	// (0x0003c27c) cell_ai5_widget_pane_g6_ParamLimits

0x4cfc,	// (0x0003c288) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x000473c4) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x000473c4) cell_ai5_widget_pane_g

0x4e2e,	// (0x0003c3ba) cell_ai5_widget_pane_t10_ParamLimits

0x4e2e,	// (0x0003c3ba) cell_ai5_widget_pane_t10

0x4e4c,	// (0x0003c3d8) grid_ai5_widget_pane_ParamLimits

0x4ec4,	// (0x0003c450) cell_contacts_ai5_widget_pane_ParamLimits

0x4ec4,	// (0x0003c450) cell_contacts_ai5_widget_pane

0x506d,	// (0x0003c5f9) popup_discreet_window_t3_ParamLimits

0x506d,	// (0x0003c5f9) popup_discreet_window_t3

0xc239,	// (0x000437c5) popup_fshwr2_char_preview_window_ParamLimits

0xc239,	// (0x000437c5) popup_fshwr2_char_preview_window

0x3609,	// (0x0003ab95) tmo_note_info_pane_t1

0x361e,	// (0x0003abaa) tmo_note_info_pane_t2

0x3633,	// (0x0003abbf) tmo_note_info_pane_t3

0x9b9b,	// (0x00041127) tmo_note_info_pane_t4

0x9bad,	// (0x00041139) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0004744b) tmo_note_info_pane_t

0x9bbf,	// (0x0004114b) list_tmo_link_pane_ParamLimits

0x9bcc,	// (0x00041158) scroll_pane_cp20_ParamLimits

0x5c79,	// (0x0003d205) bg_popup_fep_char_preview_window_cp01

0x9c10,	// (0x0004119c) popup_fshwr2_char_preview_window_t1

0x9c1e,	// (0x000411aa) popup_candi_list_indi_window_g1

0x9c27,	// (0x000411b3) bg_cell_contacts_ai5_widget_pane

0x9c33,	// (0x000411bf) cell_contacts_ai5_widget_pane_g1

0x9c48,	// (0x000411d4) cell_contacts_ai5_widget_pane_g2

0x9c54,	// (0x000411e0) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x00047456) cell_contacts_ai5_widget_pane_g

0x9c60,	// (0x000411ec) cell_contacts_ai5_widget_pane_t1

0xc98b,	// (0x00043f17) highlight_cell_shortcut_ai5_widget_pane_cp01

0x9cd5,	// (0x00041261) settings_container_pane

0xd405,	// (0x00044991) listscroll_set_pane_copy1

0xeecf,	// (0x0004645b) scroll_pane_cp121_copy1

0xdabf,	// (0x0004504b) set_content_pane_copy1

0x9ce1,	// (0x0004126d) aid_height_set_list_copy1_ParamLimits

0x9ce1,	// (0x0004126d) aid_height_set_list_copy1

0xe4b3,	// (0x00045a3f) aid_size_parent_copy1_ParamLimits

0xe4b3,	// (0x00045a3f) aid_size_parent_copy1

0x9ced,	// (0x00041279) button_value_adjust_pane_cp6_copy1_ParamLimits

0x9ced,	// (0x00041279) button_value_adjust_pane_cp6_copy1

0xd3ea,	// (0x00044976) list_highlight_pane_cp2_copy1_ParamLimits

0xd3ea,	// (0x00044976) list_highlight_pane_cp2_copy1

0x9d01,	// (0x0004128d) list_set_pane_copy1_ParamLimits

0x9d01,	// (0x0004128d) list_set_pane_copy1

0x9c72,	// (0x000411fe) main_pane_set_t1_copy1_ParamLimits

0x9c72,	// (0x000411fe) main_pane_set_t1_copy1

0x9cac,	// (0x00041238) main_pane_set_t2_copy1_ParamLimits

0x9cac,	// (0x00041238) main_pane_set_t2_copy1

0x9d90,	// (0x0004131c) main_pane_set_t3_copy1

0x9d9e,	// (0x0004132a) main_pane_set_t4_copy1

0x9cc9,	// (0x00041255) set_content_pane_g1_copy1_ParamLimits

0x9cc9,	// (0x00041255) set_content_pane_g1_copy1

0x9dac,	// (0x00041338) setting_code_pane_copy1

0x9db4,	// (0x00041340) setting_slider_graphic_pane_copy1

0x9db4,	// (0x00041340) setting_slider_pane_copy1

0x9db4,	// (0x00041340) setting_text_pane_copy1

0x9db4,	// (0x00041340) setting_volume_pane_copy1

0x9dac,	// (0x00041338) settings_code_pane_cp2_copy1

0x9dbc,	// (0x00041348) settings_code_pane_cp_copy1_ParamLimits

0x9dbc,	// (0x00041348) settings_code_pane_cp_copy1

0x8ab1,	// (0x0004003d) volume_set_pane_copy1

0x9dd0,	// (0x0004135c) volume_set_pane_g10_copy1

0x9dd8,	// (0x00041364) volume_set_pane_g1_copy1

0x9de0,	// (0x0004136c) volume_set_pane_g2_copy1

0x9de8,	// (0x00041374) volume_set_pane_g3_copy1

0x9df0,	// (0x0004137c) volume_set_pane_g4_copy1

0x9df8,	// (0x00041384) volume_set_pane_g5_copy1

0x9e00,	// (0x0004138c) volume_set_pane_g6_copy1

0x9e08,	// (0x00041394) volume_set_pane_g7_copy1

0x9e10,	// (0x0004139c) volume_set_pane_g8_copy1

0x9e18,	// (0x000413a4) volume_set_pane_g9_copy1

0xc3bc,	// (0x00043948) bg_set_opt_pane_cp_copy1_ParamLimits

0xc3bc,	// (0x00043948) bg_set_opt_pane_cp_copy1

0x8ab9,	// (0x00040045) setting_slider_pane_t1_copy1_ParamLimits

0x8ab9,	// (0x00040045) setting_slider_pane_t1_copy1

0x8ad7,	// (0x00040063) setting_slider_pane_t2_copy1_ParamLimits

0x8ad7,	// (0x00040063) setting_slider_pane_t2_copy1

0x8af0,	// (0x0004007c) setting_slider_pane_t3_copy1_ParamLimits

0x8af0,	// (0x0004007c) setting_slider_pane_t3_copy1

0x8b07,	// (0x00040093) slider_set_pane_copy1_ParamLimits

0x8b07,	// (0x00040093) slider_set_pane_copy1

0xc9d7,	// (0x00043f63) set_opt_bg_pane_g1_copy2

0xc9df,	// (0x00043f6b) set_opt_bg_pane_g2_copy2

0x9e20,	// (0x000413ac) set_opt_bg_pane_g3_copy2

0xc9ef,	// (0x00043f7b) set_opt_bg_pane_g4_copy2

0xc9f7,	// (0x00043f83) set_opt_bg_pane_g5_copy2

0xc9ff,	// (0x00043f8b) set_opt_bg_pane_g6_copy2

0x9e28,	// (0x000413b4) set_opt_bg_pane_g7_copy2

0x9e30,	// (0x000413bc) set_opt_bg_pane_g8_copy2

0x9e38,	// (0x000413c4) set_opt_bg_pane_g9_copy2

0x8b1d,	// (0x000400a9) aid_size_touch_slider_mark_copy1_ParamLimits

0x8b1d,	// (0x000400a9) aid_size_touch_slider_mark_copy1

0x9e40,	// (0x000413cc) slider_set_pane_g1_copy1

0x8b31,	// (0x000400bd) slider_set_pane_g2_copy1

0x6cc4,	// (0x0003e250) slider_set_pane_g3_copy1_ParamLimits

0x6cc4,	// (0x0003e250) slider_set_pane_g3_copy1

0x6cd8,	// (0x0003e264) slider_set_pane_g4_copy1_ParamLimits

0x6cd8,	// (0x0003e264) slider_set_pane_g4_copy1

0x6cf0,	// (0x0003e27c) slider_set_pane_g5_copy1_ParamLimits

0x6cf0,	// (0x0003e27c) slider_set_pane_g5_copy1

0x6cc4,	// (0x0003e250) slider_set_pane_g6_copy1_ParamLimits

0x6cc4,	// (0x0003e250) slider_set_pane_g6_copy1

0x8b39,	// (0x000400c5) slider_set_pane_g7_copy1_ParamLimits

0x8b39,	// (0x000400c5) slider_set_pane_g7_copy1

0xc350,	// (0x000438dc) bg_set_opt_pane_cp2_copy1

0x9e49,	// (0x000413d5) setting_slider_graphic_pane_g1_copy1

0x9e52,	// (0x000413de) setting_slider_graphic_pane_t1_copy1

0x9e61,	// (0x000413ed) setting_slider_graphic_pane_t2_copy1

0x9e70,	// (0x000413fc) slider_set_pane_cp_copy1

0x9e80,	// (0x0004140c) input_focus_pane_cp1_copy1

0x9e89,	// (0x00041415) list_set_text_pane_copy1

0x9e91,	// (0x0004141d) setting_text_pane_g1_copy1

0x9e9a,	// (0x00041426) set_text_pane_t1_copy1

0x9e80,	// (0x0004140c) input_focus_pane_cp2_copy1

0x9e91,	// (0x0004141d) setting_code_pane_g1_copy1

0x9eb2,	// (0x0004143e) setting_code_pane_t1_copy1

0xd3d8,	// (0x00044964) list_set_graphic_pane_copy1

0xc350,	// (0x000438dc) bg_set_opt_pane_cp4_copy1

0xd105,	// (0x00044691) list_set_graphic_pane_g1_copy1_ParamLimits

0xd105,	// (0x00044691) list_set_graphic_pane_g1_copy1

0x9ec0,	// (0x0004144c) list_set_graphic_pane_g2_copy1

0xd11d,	// (0x000446a9) list_set_graphic_pane_t1_copy1_ParamLimits

0xd11d,	// (0x000446a9) list_set_graphic_pane_t1_copy1

0xf49d,	// (0x00046a29) rs_clock_indi_pane_g1

0x9ec8,	// (0x00041454) rs_clock_indi_pane_t1

0x9ed6,	// (0x00041462) rs_indi_pane

0x9ede,	// (0x0004146a) rs_indi_pane_g1

0x9ee7,	// (0x00041473) rs_indi_pane_g2

0x9ef0,	// (0x0004147c) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0004745d) rs_indi_pane_g

0xd405,	// (0x00044991) bg_popup_preview_window_pane_cp03

0x9ef9,	// (0x00041485) popup_fep_tooltip_window_t1

0x3f9c,	// (0x0003b528) popup_note2_window_g2_ParamLimits

0x3f9c,	// (0x0003b528) popup_note2_window_g2

0x0001,

0xfc71,	// (0x000471fd) popup_note2_window_g_ParamLimits

0xfc71,	// (0x000471fd) popup_note2_window_g

0x4417,	// (0x0003b9a3) bg_popup_sub_pane_cp11_ParamLimits

0x4424,	// (0x0003b9b0) cell_ai3_links_pane_g1_ParamLimits

0x443b,	// (0x0003b9c7) cell_ai3_links_pane_t1

0x9e9a,	// (0x00041426) set_text_pane_t1_copy1_ParamLimits

0xd2f8,	// (0x00044884) cell_graphic_popup_pane_cp2_ParamLimits

0xd2f8,	// (0x00044884) cell_graphic_popup_pane_cp2

0x9f07,	// (0x00041493) cell_graphic_popup_pane_g1_cp2

0xc761,	// (0x00043ced) cell_graphic_popup_pane_g2_cp2

0x9f0f,	// (0x0004149b) cell_graphic_popup_pane_g3_cp2

0x9f17,	// (0x000414a3) cell_graphic_popup_pane_t2_cp2

0xc772,	// (0x00043cfe) grid_highlight_pane_cp3_cp2

0xcc86,	// (0x00044212) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc98b,	// (0x00043f17) main_tmo_pane_ParamLimits

0x2543,	// (0x00039acf) popup_tmo_big_image_note_window

0x4c8b,	// (0x0003c217) cell_ai5_widget_list_pane

0x4c93,	// (0x0003c21f) cell_ai5_widget_lrg_icon_pane

0x3609,	// (0x0003ab95) tmo_note_info_pane_t1_ParamLimits

0x361e,	// (0x0003abaa) tmo_note_info_pane_t2_ParamLimits

0x3633,	// (0x0003abbf) tmo_note_info_pane_t3_ParamLimits

0x9b9b,	// (0x00041127) tmo_note_info_pane_t4_ParamLimits

0x9bad,	// (0x00041139) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0004744b) tmo_note_info_pane_t_ParamLimits

0x9cd5,	// (0x00041261) settings_container_pane_ParamLimits

0x9e78,	// (0x00041404) indicator_popup_pane_cp5

0x9e78,	// (0x00041404) indicator_popup_pane_cp6

0xd3d8,	// (0x00044964) list_set_graphic_pane_copy1_ParamLimits

0xc33c,	// (0x000438c8) bg_popup_window_pane_cp23

0x9f25,	// (0x000414b1) popup_tmo_big_image_note_window_g1

0x9f2e,	// (0x000414ba) popup_tmo_big_image_note_window_t1

0x9f3c,	// (0x000414c8) popup_tmo_big_image_note_window_t2

0x9f4a,	// (0x000414d6) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x00047464) popup_tmo_big_image_note_window_t

0xf49d,	// (0x00046a29) cell_ai5_widget_lrg_icon_pane_g1

0x9f58,	// (0x000414e4) cell_ai5_widget_lrg_icon_pane_t1

0x9f66,	// (0x000414f2) cell_ai5_widget_list_row_pane_ParamLimits

0x9f66,	// (0x000414f2) cell_ai5_widget_list_row_pane

0x9f7d,	// (0x00041509) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x9f7d,	// (0x00041509) cell_ai5_widget_list_row_pane_g1

0x9f8a,	// (0x00041516) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x9f8a,	// (0x00041516) cell_ai5_widget_list_row_pane_t1

0x9fb8,	// (0x00041544) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x9fb8,	// (0x00041544) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0004746b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0004746b) cell_ai5_widget_list_row_pane_t

0x5c79,	// (0x0003d205) main_fep_vtchi_ss_pane

0x9ffc,	// (0x00041588) popup_fep_char_pre_window

0xa004,	// (0x00041590) popup_fep_ituss_window

0x3648,	// (0x0003abd4) popup_fep_vkbss_window

0x3655,	// (0x0003abe1) grid_vkbss_keypad_pane_ParamLimits

0x3655,	// (0x0003abe1) grid_vkbss_keypad_pane

0xa037,	// (0x000415c3) ituss_keypad_pane

0x8b59,	// (0x000400e5) aid_vkbss_key_offset_ParamLimits

0x8b59,	// (0x000400e5) aid_vkbss_key_offset

0xc31e,	// (0x000438aa) cell_vkbss_key_pane_ParamLimits

0xc31e,	// (0x000438aa) cell_vkbss_key_pane

0xe496,	// (0x00045a22) bg_cell_vkbss_key_g1_ParamLimits

0xe496,	// (0x00045a22) bg_cell_vkbss_key_g1

0x367b,	// (0x0003ac07) cell_vkbss_key_3p_pane_ParamLimits

0x367b,	// (0x0003ac07) cell_vkbss_key_3p_pane

0x3695,	// (0x0003ac21) cell_vkbss_key_g1_ParamLimits

0x3695,	// (0x0003ac21) cell_vkbss_key_g1

0x36af,	// (0x0003ac3b) cell_vkbss_key_t1_ParamLimits

0x36af,	// (0x0003ac3b) cell_vkbss_key_t1

0x8b7b,	// (0x00040107) cell_ituss_key_pane_ParamLimits

0x8b7b,	// (0x00040107) cell_ituss_key_pane

0xa046,	// (0x000415d2) bg_cell_ituss_key_g1_ParamLimits

0xa046,	// (0x000415d2) bg_cell_ituss_key_g1

0xa052,	// (0x000415de) cell_ituss_key_pane_g1_ParamLimits

0xa052,	// (0x000415de) cell_ituss_key_pane_g1

0x8b8c,	// (0x00040118) cell_ituss_key_pane_g2_ParamLimits

0x8b8c,	// (0x00040118) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x00047472) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x00047472) cell_ituss_key_pane_g

0x8bb4,	// (0x00040140) cell_ituss_key_t1_ParamLimits

0x8bb4,	// (0x00040140) cell_ituss_key_t1

0x8bee,	// (0x0004017a) cell_ituss_key_t2_ParamLimits

0x8bee,	// (0x0004017a) cell_ituss_key_t2

0x8c1f,	// (0x000401ab) cell_ituss_key_t3_ParamLimits

0x8c1f,	// (0x000401ab) cell_ituss_key_t3

0x8bee,	// (0x0004017a) cell_ituss_key_t4_ParamLimits

0x8bee,	// (0x0004017a) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x00047479) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x00047479) cell_ituss_key_t

0xa078,	// (0x00041604) cell_vkbss_key_3p_pane_g1

0xa080,	// (0x0004160c) cell_vkbss_key_3p_pane_g2

0xa088,	// (0x00041614) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x00047484) cell_vkbss_key_3p_pane_g

0x5c79,	// (0x0003d205) bg_popup_fep_char_preview_window_cp02

0x8c62,	// (0x000401ee) popup_fep_char_pre_window_t1

0x3411,	// (0x0003a99d) main_ai5_sk_pane

0x9c27,	// (0x000411b3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9c33,	// (0x000411bf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9c48,	// (0x000411d4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9c54,	// (0x000411e0) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x00047456) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9c60,	// (0x000411ec) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc98b,	// (0x00043f17) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x36da,	// (0x0003ac66) main_ai5_sk_pane_g1

0xdb3b,	// (0x000450c7) popup_query_code_window_g1

0xa016,	// (0x000415a2) popup_fep_vkb_icf_pane

0xa021,	// (0x000415ad) popup_fep_vtchi_icf_pane

0xa090,	// (0x0004161c) bg_icf_pane

0xa09c,	// (0x00041628) list_vkb_icf_pane

0xa0ab,	// (0x00041637) bg_icf_pane_cp01

0xa0be,	// (0x0004164a) vtchi_icf_list_pane

0xa0ce,	// (0x0004165a) list_vkb_icf_pane_t1_ParamLimits

0xa0ce,	// (0x0004165a) list_vkb_icf_pane_t1

0xa0e3,	// (0x0004166f) vtchi_icf_list_pane_t1_ParamLimits

0xa0e3,	// (0x0004166f) vtchi_icf_list_pane_t1

0xa004,	// (0x00041590) popup_fep_ituss_window_ParamLimits

0xa021,	// (0x000415ad) popup_fep_vtchi_icf_pane_ParamLimits

0xa037,	// (0x000415c3) ituss_keypad_pane_ParamLimits

0x8b4f,	// (0x000400db) ituss_sks_pane

0xa090,	// (0x0004161c) bg_icf_pane_ParamLimits

0x9fe0,	// (0x0004156c) icf_edit_indi_pane_ParamLimits

0x9fe0,	// (0x0004156c) icf_edit_indi_pane

0xa09c,	// (0x00041628) list_vkb_icf_pane_ParamLimits

0xa0ab,	// (0x00041637) bg_icf_pane_cp01_ParamLimits

0x9fef,	// (0x0004157b) icf_edit_indi_pane_cp01_ParamLimits

0x9fef,	// (0x0004157b) icf_edit_indi_pane_cp01

0xa0c6,	// (0x00041652) vtchi_query_pane

0x3860,	// (0x0003adec) icf_edit_indi_pane_g1_ParamLimits

0x3860,	// (0x0003adec) icf_edit_indi_pane_g1

0xa151,	// (0x000416dd) icf_edit_indi_pane_g2_ParamLimits

0xa151,	// (0x000416dd) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0004749c) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0004749c) icf_edit_indi_pane_g

0xa160,	// (0x000416ec) icf_edit_indi_pane_t1

0xa0fa,	// (0x00041686) bg_input_focus_pane_cp042

0xc8a9,	// (0x00043e35) vtchi_button_pane

0xa103,	// (0x0004168f) vtchi_query_pane_t1

0xa111,	// (0x0004169d) vtchi_query_pane_t2

0xa11f,	// (0x000416ab) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0004748b) vtchi_query_pane_t

0x5c79,	// (0x0003d205) bg_button_pane_cp13

0xa12d,	// (0x000416b9) vtchi_button_pane_g1

0x8c71,	// (0x000401fd) ituss_sks_pane_g1

0x8c7b,	// (0x00040207) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x00047492) ituss_sks_pane_g

0xa135,	// (0x000416c1) ituss_sks_pane_t1

0xa143,	// (0x000416cf) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x00047497) ituss_sks_pane_t

0xf1c9,	// (0x00046755) indicator_nsta_pane_cp_g1

0xf1d1,	// (0x0004675d) indicator_nsta_pane_cp_g2

0xf1d9,	// (0x00046765) indicator_nsta_pane_cp_g3

0xf1c9,	// (0x00046755) indicator_nsta_pane_cp_g4

0xf1d1,	// (0x0004675d) indicator_nsta_pane_cp_g5

0xf1d9,	// (0x00046765) indicator_nsta_pane_cp_g6

0x0005,

0xfaaf,	// (0x0004703b) indicator_nsta_pane_cp_g

0x3218,	// (0x0003a7a4) cell_graphic2_pane_t2_ParamLimits

0x3218,	// (0x0003a7a4) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0004734d) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0004734d) cell_graphic2_pane_t

0x324f,	// (0x0003a7db) cell_graphic2_control_pane_t1

0xb3dc,	// (0x00042968) signal_pane_g3_ParamLimits

0xb3dc,	// (0x00042968) signal_pane_g3

0xb3f0,	// (0x0004297c) signal_pane_g4_ParamLimits

0xb3f0,	// (0x0004297c) signal_pane_g4

0x9fca,	// (0x00041556) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x9fca,	// (0x00041556) cell_ai5_widget_list_row_pane_t3

0xa066,	// (0x000415f2) cell_ituss_key_pane_t1_ParamLimits

0xa066,	// (0x000415f2) cell_ituss_key_pane_t1

0xd87c,	// (0x00044e08) form_field_data_wide_pane_vc_t2_ParamLimits

0xd87c,	// (0x00044e08) form_field_data_wide_pane_vc_t2

0xd88e,	// (0x00044e1a) form_field_data_wide_pane_vc_t3_ParamLimits

0xd88e,	// (0x00044e1a) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00046d95) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00046d95) form_field_data_wide_pane_vc_t

0xef0d,	// (0x00046499) form_field_slider_wide_pane_vc_t3_ParamLimits

0xef0d,	// (0x00046499) form_field_slider_wide_pane_vc_t3

0xefdb,	// (0x00046567) form_field_popup_wide_pane_vc_t2_ParamLimits

0xefdb,	// (0x00046567) form_field_popup_wide_pane_vc_t2

0xeff0,	// (0x0004657c) form_field_popup_wide_pane_vc_t3_ParamLimits

0xeff0,	// (0x0004657c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9e,	// (0x0004702a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9e,	// (0x0004702a) form_field_popup_wide_pane_vc_t

0xc1c8,	// (0x00043754) aid_fshwr2_btn_pane_ParamLimits

0xc1d9,	// (0x00043765) aid_fshwr2_syb_pane_ParamLimits

0xc1ea,	// (0x00043776) aid_fshwr2_txt_pane_ParamLimits

0x7db8,	// (0x0003f344) fshwr2_bg_pane_ParamLimits

0xc1f6,	// (0x00043782) fshwr2_func_candi_pane_ParamLimits

0xc210,	// (0x0004379c) fshwr2_hwr_syb_pane_ParamLimits

0xc225,	// (0x000437b1) fshwr2_icf_pane_ParamLimits

0xa20b,	// (0x00041797) list_double_graphic_pane_vc_g4_ParamLimits

0xa20b,	// (0x00041797) list_double_graphic_pane_vc_g4

0x8ba8,	// (0x00040134) cell_ituss_key_pane_g3_ParamLimits

0x8ba8,	// (0x00040134) cell_ituss_key_pane_g3

0x8c50,	// (0x000401dc) cell_ituss_key_t5_ParamLimits

0x8c50,	// (0x000401dc) cell_ituss_key_t5

0x3648,	// (0x0003abd4) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large

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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00017663 };

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
0x7af5,	// (0x0001f158) Screen

0x7aff,	// (0x0001f162) application_window_ParamLimits

0x7aff,	// (0x0001f162) application_window

0xb194,	// (0x000227f7) screen_g1

0x7b2d,	// (0x0001f190) area_bottom_pane_ParamLimits

0x7b2d,	// (0x0001f190) area_bottom_pane

0xb19e,	// (0x00022801) area_top_pane_ParamLimits

0xb19e,	// (0x00022801) area_top_pane

0x4072,	// (0x0001b6d5) main_pane_ParamLimits

0x4072,	// (0x0001b6d5) main_pane

0xb216,	// (0x00022879) misc_graphics

0x8bdf,	// (0x00020242) battery_pane_ParamLimits

0x8bdf,	// (0x00020242) battery_pane

0xccdd,	// (0x00024340) bg_status_flat_pane_g8

0xcce5,	// (0x00024348) bg_status_flat_pane_g9

0xc3f6,	// (0x00023a59) context_pane_ParamLimits

0xc3f6,	// (0x00023a59) context_pane

0x8d39,	// (0x0002039c) navi_pane_ParamLimits

0x8d39,	// (0x0002039c) navi_pane

0x8dae,	// (0x00020411) signal_pane_ParamLimits

0x8dae,	// (0x00020411) signal_pane

0x0008,

0xf866,	// (0x00026ec9) bg_status_flat_pane_g

0x8e3a,	// (0x0002049d) status_pane_g1_ParamLimits

0x8e3a,	// (0x0002049d) status_pane_g1

0x8e46,	// (0x000204a9) status_pane_g2_ParamLimits

0x8e46,	// (0x000204a9) status_pane_g2

0xc45c,	// (0x00023abf) status_pane_g3_ParamLimits

0xc45c,	// (0x00023abf) status_pane_g3

0x0004,

0xf7a0,	// (0x00026e03) status_pane_g_ParamLimits

0xf7a0,	// (0x00026e03) status_pane_g

0x8e52,	// (0x000204b5) title_pane_ParamLimits

0x8e52,	// (0x000204b5) title_pane

0x8ead,	// (0x00020510) uni_indicator_pane_ParamLimits

0x8ead,	// (0x00020510) uni_indicator_pane

0xc34d,	// (0x000239b0) bg_list_pane_ParamLimits

0xc34d,	// (0x000239b0) bg_list_pane

0x7887,	// (0x0001eeea) find_pane

0x85c0,	// (0x0001fc23) listscroll_app_pane_ParamLimits

0x85c0,	// (0x0001fc23) listscroll_app_pane

0xc36d,	// (0x000239d0) listscroll_form_pane

0x788f,	// (0x0001eef2) listscroll_gen_pane_ParamLimits

0x788f,	// (0x0001eef2) listscroll_gen_pane

0x4869,	// (0x0001becc) listscroll_set_pane

0x85d0,	// (0x0001fc33) main_idle_act_pane

0xc1b8,	// (0x0002381b) main_idle_trad_pane

0xc1b8,	// (0x0002381b) main_list_empty_pane

0xb99a,	// (0x00022ffd) main_midp_pane

0xc387,	// (0x000239ea) main_pane_g1_ParamLimits

0xc387,	// (0x000239ea) main_pane_g1

0x85e3,	// (0x0001fc46) popup_ai_message_window_ParamLimits

0x85e3,	// (0x0001fc46) popup_ai_message_window

0x8667,	// (0x0001fcca) popup_fep_china_uni_window_ParamLimits

0x8667,	// (0x0001fcca) popup_fep_china_uni_window

0x4945,	// (0x0001bfa8) popup_fep_japan_candidate_window_ParamLimits

0x4945,	// (0x0001bfa8) popup_fep_japan_candidate_window

0x4963,	// (0x0001bfc6) popup_fep_japan_predictive_window_ParamLimits

0x4963,	// (0x0001bfc6) popup_fep_japan_predictive_window

0x86a5,	// (0x0001fd08) popup_find_window

0x86be,	// (0x0001fd21) popup_grid_graphic_window_ParamLimits

0x86be,	// (0x0001fd21) popup_grid_graphic_window

0x49ba,	// (0x0001c01d) popup_large_graphic_colour_window

0x873a,	// (0x0001fd9d) popup_menu_window_ParamLimits

0x873a,	// (0x0001fd9d) popup_menu_window

0x8898,	// (0x0001fefb) popup_note_image_window

0x8860,	// (0x0001fec3) popup_note_wait_window_ParamLimits

0x8860,	// (0x0001fec3) popup_note_wait_window

0x88ae,	// (0x0001ff11) popup_note_window_ParamLimits

0x88ae,	// (0x0001ff11) popup_note_window

0x8942,	// (0x0001ffa5) popup_query_code_window_ParamLimits

0x8942,	// (0x0001ffa5) popup_query_code_window

0x4b77,	// (0x0001c1da) popup_query_data_code_window_ParamLimits

0x4b77,	// (0x0001c1da) popup_query_data_code_window

0x897a,	// (0x0001ffdd) popup_query_data_window_ParamLimits

0x897a,	// (0x0001ffdd) popup_query_data_window

0x89ee,	// (0x00020051) popup_query_sat_info_window_ParamLimits

0x89ee,	// (0x00020051) popup_query_sat_info_window

0x8a7b,	// (0x000200de) popup_snote_single_graphic_window_ParamLimits

0x8a7b,	// (0x000200de) popup_snote_single_graphic_window

0x8a7b,	// (0x000200de) popup_snote_single_text_window_ParamLimits

0x8a7b,	// (0x000200de) popup_snote_single_text_window

0x4be6,	// (0x0001c249) popup_sub_window_general

0x4cea,	// (0x0001c34d) popup_window_general_ParamLimits

0x4cea,	// (0x0001c34d) popup_window_general

0xc395,	// (0x000239f8) power_save_pane

0x846a,	// (0x0001facd) control_pane_g1_ParamLimits

0x846a,	// (0x0001facd) control_pane_g1

0x4726,	// (0x0001bd89) control_pane_g2_ParamLimits

0x4726,	// (0x0001bd89) control_pane_g2

0xc33f,	// (0x000239a2) control_pane_g3_ParamLimits

0xc33f,	// (0x000239a2) control_pane_g3

0x0007,

0xf788,	// (0x00026deb) control_pane_g_ParamLimits

0xf788,	// (0x00026deb) control_pane_g

0x84c6,	// (0x0001fb29) control_pane_t1_ParamLimits

0x84c6,	// (0x0001fb29) control_pane_t1

0x8522,	// (0x0001fb85) control_pane_t2_ParamLimits

0x8522,	// (0x0001fb85) control_pane_t2

0x0002,

0xf799,	// (0x00026dfc) control_pane_t_ParamLimits

0xf799,	// (0x00026dfc) control_pane_t

0xc2e7,	// (0x0002394a) navi_navi_volume_pane_cp1

0xc2ef,	// (0x00023952) status_small_icon_pane

0xc2f7,	// (0x0002395a) status_small_pane_g1_ParamLimits

0xc2f7,	// (0x0002395a) status_small_pane_g1

0x83e9,	// (0x0001fa4c) status_small_pane_g2_ParamLimits

0x83e9,	// (0x0001fa4c) status_small_pane_g2

0x83f5,	// (0x0001fa58) status_small_pane_g3_ParamLimits

0x83f5,	// (0x0001fa58) status_small_pane_g3

0x8401,	// (0x0001fa64) status_small_pane_g4_ParamLimits

0x8401,	// (0x0001fa64) status_small_pane_g4

0x840d,	// (0x0001fa70) status_small_pane_g5_ParamLimits

0x840d,	// (0x0001fa70) status_small_pane_g5

0xc32b,	// (0x0002398e) status_small_pane_g6_ParamLimits

0xc32b,	// (0x0002398e) status_small_pane_g6

0x0007,

0xf777,	// (0x00026dda) status_small_pane_g_ParamLimits

0xf777,	// (0x00026dda) status_small_pane_g

0x843c,	// (0x0001fa9f) status_small_pane_t1

0x8456,	// (0x0001fab9) status_small_wait_pane_ParamLimits

0x8456,	// (0x0001fab9) status_small_wait_pane

0x827b,	// (0x0001f8de) aid_levels_signal_ParamLimits

0x827b,	// (0x0001f8de) aid_levels_signal

0x828f,	// (0x0001f8f2) signal_pane_g1_ParamLimits

0x828f,	// (0x0001f8f2) signal_pane_g1

0x82a9,	// (0x0001f90c) signal_pane_g2_ParamLimits

0x82a9,	// (0x0001f90c) signal_pane_g2

0x0003,

0xf708,	// (0x00026d6b) signal_pane_g_ParamLimits

0xf708,	// (0x00026d6b) signal_pane_g

0xbd5d,	// (0x000233c0) context_pane_g1

0x7cc4,	// (0x0001f327) title_pane_g1

0x7d06,	// (0x0001f369) title_pane_t1

0xb22c,	// (0x0002288f) title_pane_t2

0xb252,	// (0x000228b5) title_pane_t3

0x0002,

0xf557,	// (0x00026bba) title_pane_t

0x8ed3,	// (0x00020536) aid_levels_battery_ParamLimits

0x8ed3,	// (0x00020536) aid_levels_battery

0x8eeb,	// (0x0002054e) battery_pane_g1_ParamLimits

0x8eeb,	// (0x0002054e) battery_pane_g1

0x8f06,	// (0x00020569) battery_pane_g2_ParamLimits

0x8f06,	// (0x00020569) battery_pane_g2

0x0001,

0xf7ab,	// (0x00026e0e) battery_pane_g_ParamLimits

0xf7ab,	// (0x00026e0e) battery_pane_g

0x920e,	// (0x00020871) uni_indicator_pane_g1

0x9224,	// (0x00020887) uni_indicator_pane_g2

0x923a,	// (0x0002089d) uni_indicator_pane_g3

0x0005,

0xf90e,	// (0x00026f71) uni_indicator_pane_g

0xb8c0,	// (0x00022f23) navi_icon_pane_ParamLimits

0xb8c0,	// (0x00022f23) navi_icon_pane

0xb216,	// (0x00022879) navi_midp_pane

0xb216,	// (0x00022879) navi_navi_pane

0xb8c0,	// (0x00022f23) navi_text_pane_ParamLimits

0xb8c0,	// (0x00022f23) navi_text_pane

0xb194,	// (0x000227f7) status_small_wait_pane_g1

0xb567,	// (0x00022bca) status_small_wait_pane_g2

0x0001,

0xf909,	// (0x00026f6c) status_small_wait_pane_g

0x91b4,	// (0x00020817) navi_navi_icon_text_pane

0x91bc,	// (0x0002081f) navi_navi_pane_g1_ParamLimits

0x91bc,	// (0x0002081f) navi_navi_pane_g1

0x91ce,	// (0x00020831) navi_navi_pane_g2_ParamLimits

0x91ce,	// (0x00020831) navi_navi_pane_g2

0x0001,

0xf8d7,	// (0x00026f3a) navi_navi_pane_g_ParamLimits

0xf8d7,	// (0x00026f3a) navi_navi_pane_g

0x91e0,	// (0x00020843) navi_navi_tabs_pane

0x91b4,	// (0x00020817) navi_navi_text_pane

0x91b4,	// (0x00020817) navi_navi_volume_pane

0xd223,	// (0x00024886) navi_text_pane_t1

0xd217,	// (0x0002487a) navi_icon_pane_g1

0xd16b,	// (0x000247ce) navi_navi_text_pane_t1

0x4f51,	// (0x0001c5b4) navi_navi_volume_pane_g1

0x91ab,	// (0x0002080e) volume_small_pane

0x9107,	// (0x0002076a) navi_navi_icon_text_pane_g1

0x910f,	// (0x00020772) navi_navi_icon_text_pane_t1

0xcd25,	// (0x00024388) navi_tabs_2_long_pane

0xcd25,	// (0x00024388) navi_tabs_2_pane

0xcd25,	// (0x00024388) navi_tabs_3_long_pane

0xcd25,	// (0x00024388) navi_tabs_3_pane

0xcd25,	// (0x00024388) navi_tabs_4_pane

0x90e7,	// (0x0002074a) tabs_2_active_pane_ParamLimits

0x90e7,	// (0x0002074a) tabs_2_active_pane

0x90f7,	// (0x0002075a) tabs_2_passive_pane_ParamLimits

0x90f7,	// (0x0002075a) tabs_2_passive_pane

0x90b5,	// (0x00020718) tabs_3_active_pane_ParamLimits

0x90b5,	// (0x00020718) tabs_3_active_pane

0x90c5,	// (0x00020728) tabs_3_passive_pane_ParamLimits

0x90c5,	// (0x00020728) tabs_3_passive_pane

0x90d6,	// (0x00020739) tabs_3_passive_pane_cp_ParamLimits

0x90d6,	// (0x00020739) tabs_3_passive_pane_cp

0x9071,	// (0x000206d4) tabs_4_active_pane_ParamLimits

0x9071,	// (0x000206d4) tabs_4_active_pane

0x9082,	// (0x000206e5) tabs_4_passive_pane_ParamLimits

0x9082,	// (0x000206e5) tabs_4_passive_pane

0x9093,	// (0x000206f6) tabs_4_passive_pane_cp_ParamLimits

0x9093,	// (0x000206f6) tabs_4_passive_pane_cp

0x90a4,	// (0x00020707) tabs_4_passive_pane_cp2_ParamLimits

0x90a4,	// (0x00020707) tabs_4_passive_pane_cp2

0x9051,	// (0x000206b4) tabs_2_long_active_pane_ParamLimits

0x9051,	// (0x000206b4) tabs_2_long_active_pane

0x9061,	// (0x000206c4) tabs_2_long_passive_pane_ParamLimits

0x9061,	// (0x000206c4) tabs_2_long_passive_pane

0x901a,	// (0x0002067d) tabs_3_long_active_pane_ParamLimits

0x901a,	// (0x0002067d) tabs_3_long_active_pane

0x902d,	// (0x00020690) tabs_3_long_passive_pane_ParamLimits

0x902d,	// (0x00020690) tabs_3_long_passive_pane

0x903e,	// (0x000206a1) tabs_3_long_passive_pane_cp_ParamLimits

0x903e,	// (0x000206a1) tabs_3_long_passive_pane_cp

0x4e0c,	// (0x0001c46f) volume_small_pane_g1

0x4e15,	// (0x0001c478) volume_small_pane_g2

0x4e1e,	// (0x0001c481) volume_small_pane_g3

0x4e27,	// (0x0001c48a) volume_small_pane_g4

0x4e30,	// (0x0001c493) volume_small_pane_g5

0x4e39,	// (0x0001c49c) volume_small_pane_g6

0x4e42,	// (0x0001c4a5) volume_small_pane_g7

0x4e4b,	// (0x0001c4ae) volume_small_pane_g8

0x4e54,	// (0x0001c4b7) volume_small_pane_g9

0x4e5d,	// (0x0001c4c0) volume_small_pane_g10

0x0009,

0xf8a3,	// (0x00026f06) volume_small_pane_g

0xb264,	// (0x000228c7) bg_active_tab_pane_cp2_ParamLimits

0xb264,	// (0x000228c7) bg_active_tab_pane_cp2

0xb272,	// (0x000228d5) tabs_3_active_pane_g1

0x7d93,	// (0x0001f3f6) tabs_3_active_pane_t1

0xb264,	// (0x000228c7) bg_passive_tab_pane_cp2_ParamLimits

0xb264,	// (0x000228c7) bg_passive_tab_pane_cp2

0xb272,	// (0x000228d5) tabs_3_passive_pane_g1

0x7d93,	// (0x0001f3f6) tabs_3_passive_pane_t1

0xb264,	// (0x000228c7) bg_active_tab_pane_cp3_ParamLimits

0xb264,	// (0x000228c7) bg_active_tab_pane_cp3

0xd71e,	// (0x00024d81) tabs_4_active_pane_g1

0x7da9,	// (0x0001f40c) tabs_4_active_pane_t1

0xb264,	// (0x000228c7) bg_passive_tab_pane_cp3_ParamLimits

0xb264,	// (0x000228c7) bg_passive_tab_pane_cp3

0xd71e,	// (0x00024d81) tabs_4_1_passive_pane_g1

0x7da9,	// (0x0001f40c) tabs_4_1_passive_pane_t1

0xb99a,	// (0x00022ffd) list_highlight_pane_cp2

0x92f5,	// (0x00020958) list_set_pane_ParamLimits

0x92f5,	// (0x00020958) list_set_pane

0x9383,	// (0x000209e6) main_pane_set_t1_ParamLimits

0x9383,	// (0x000209e6) main_pane_set_t1

0x93a3,	// (0x00020a06) main_pane_set_t2_ParamLimits

0x93a3,	// (0x00020a06) main_pane_set_t2

0x93b7,	// (0x00020a1a) main_pane_set_t3_ParamLimits

0x93b7,	// (0x00020a1a) main_pane_set_t3

0x93c9,	// (0x00020a2c) main_pane_set_t4_ParamLimits

0x93c9,	// (0x00020a2c) main_pane_set_t4

0x0003,

0xf973,	// (0x00026fd6) main_pane_set_t_ParamLimits

0xf973,	// (0x00026fd6) main_pane_set_t

0x93db,	// (0x00020a3e) setting_code_pane

0x93e3,	// (0x00020a46) setting_slider_graphic_pane

0x93e3,	// (0x00020a46) setting_slider_pane

0x93e3,	// (0x00020a46) setting_text_pane

0x93e3,	// (0x00020a46) setting_volume_pane

0x7dbf,	// (0x0001f422) volume_set_pane

0xb27a,	// (0x000228dd) bg_set_opt_pane_cp

0x4279,	// (0x0001b8dc) setting_slider_pane_t1

0x7dc7,	// (0x0001f42a) setting_slider_pane_t2

0x7de0,	// (0x0001f443) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00026bc1) setting_slider_pane_t

0x42bf,	// (0x0001b922) slider_set_pane

0xb216,	// (0x00022879) bg_set_opt_pane_cp2

0xb288,	// (0x000228eb) setting_slider_graphic_pane_g1

0x7df7,	// (0x0001f45a) setting_slider_graphic_pane_t1

0x7e06,	// (0x0001f469) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00026bc8) setting_slider_graphic_pane_t

0x7e15,	// (0x0001f478) slider_set_pane_cp

0xb216,	// (0x00022879) input_focus_pane_cp1

0xd65f,	// (0x00024cc2) list_set_text_pane

0xb194,	// (0x000227f7) setting_text_pane_g1

0xb216,	// (0x00022879) input_focus_pane_cp2

0xb194,	// (0x000227f7) setting_code_pane_g1

0xb291,	// (0x000228f4) setting_code_pane_t1

0x72fc,	// (0x0001e95f) set_text_pane_t1_ParamLimits

0x72fc,	// (0x0001e95f) set_text_pane_t1

0xb86f,	// (0x00022ed2) set_opt_bg_pane_g1

0xb877,	// (0x00022eda) set_opt_bg_pane_g2

0x92b5,	// (0x00020918) set_opt_bg_pane_g3

0xb887,	// (0x00022eea) set_opt_bg_pane_g4

0xb88f,	// (0x00022ef2) set_opt_bg_pane_g5

0xb897,	// (0x00022efa) set_opt_bg_pane_g6

0x92bd,	// (0x00020920) set_opt_bg_pane_g7

0x92c5,	// (0x00020928) set_opt_bg_pane_g8

0x92cd,	// (0x00020930) set_opt_bg_pane_g9

0x0008,

0xf960,	// (0x00026fc3) set_opt_bg_pane_g

0xd652,	// (0x00024cb5) slider_set_pane_g1

0x4fc6,	// (0x0001c629) slider_set_pane_g2

0x0006,

0xf951,	// (0x00026fb4) slider_set_pane_g

0x924f,	// (0x000208b2) volume_set_pane_g1

0x9257,	// (0x000208ba) volume_set_pane_g2

0x925f,	// (0x000208c2) volume_set_pane_g3

0x9267,	// (0x000208ca) volume_set_pane_g4

0x926f,	// (0x000208d2) volume_set_pane_g5

0x9277,	// (0x000208da) volume_set_pane_g6

0x927f,	// (0x000208e2) volume_set_pane_g7

0x9287,	// (0x000208ea) volume_set_pane_g8

0x928f,	// (0x000208f2) volume_set_pane_g9

0x9297,	// (0x000208fa) volume_set_pane_g10

0x0009,

0xf929,	// (0x00026f8c) volume_set_pane_g

0x7e1d,	// (0x0001f480) indicator_pane_ParamLimits

0x7e1d,	// (0x0001f480) indicator_pane

0x7e45,	// (0x0001f4a8) main_idle_pane_g2_ParamLimits

0x7e45,	// (0x0001f4a8) main_idle_pane_g2

0x7e75,	// (0x0001f4d8) main_pane_idle_g1_ParamLimits

0x7e75,	// (0x0001f4d8) main_pane_idle_g1

0xb29f,	// (0x00022902) popup_clock_digital_analogue_window_ParamLimits

0xb29f,	// (0x00022902) popup_clock_digital_analogue_window

0x7e9a,	// (0x0001f4fd) soft_indicator_pane_ParamLimits

0x7e9a,	// (0x0001f4fd) soft_indicator_pane

0x7eb4,	// (0x0001f517) wallpaper_pane_ParamLimits

0x7eb4,	// (0x0001f517) wallpaper_pane

0xb194,	// (0x000227f7) wallpaper_pane_g1

0x7ec6,	// (0x0001f529) indicator_pane_g1_ParamLimits

0x7ec6,	// (0x0001f529) indicator_pane_g1

0xd7da,	// (0x00024e3d) navi_navi_icon_text_pane_srt_g1

0xb2cd,	// (0x00022930) soft_indicator_pane_t1

0xb2e7,	// (0x0002294a) aid_ps_area_pane

0x7edf,	// (0x0001f542) aid_ps_clock_pane

0xb2f8,	// (0x0002295b) aid_ps_indicator_pane

0xb304,	// (0x00022967) indicator_ps_pane_ParamLimits

0xb304,	// (0x00022967) indicator_ps_pane

0xb313,	// (0x00022976) power_save_pane_g1_ParamLimits

0xb313,	// (0x00022976) power_save_pane_g1

0xb31f,	// (0x00022982) power_save_pane_g2_ParamLimits

0xb31f,	// (0x00022982) power_save_pane_g2

0x3fee,	// (0x0001b651) aid_navinavi_width_pane

0xb2e7,	// (0x0002294a) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00026bcd) power_save_pane_g_ParamLimits

0xf56a,	// (0x00026bcd) power_save_pane_g

0xb32d,	// (0x00022990) power_save_pane_t1_ParamLimits

0xb32d,	// (0x00022990) power_save_pane_t1

0x7edf,	// (0x0001f542) aid_ps_clock_pane_ParamLimits

0xb2f8,	// (0x0002295b) aid_ps_indicator_pane_ParamLimits

0xb33f,	// (0x000229a2) power_save_pane_t4_ParamLimits

0xb33f,	// (0x000229a2) power_save_pane_t4

0x0001,

0xf56f,	// (0x00026bd2) power_save_pane_t_ParamLimits

0xf56f,	// (0x00026bd2) power_save_pane_t

0xb369,	// (0x000229cc) power_save_t3_ParamLimits

0xb369,	// (0x000229cc) power_save_t3

0xb354,	// (0x000229b7) power_save_t2_ParamLimits

0xb354,	// (0x000229b7) power_save_t2

0xb37e,	// (0x000229e1) indicator_ps_pane_g1

0x7eeb,	// (0x0001f54e) ai_gene_pane_ParamLimits

0x7eeb,	// (0x0001f54e) ai_gene_pane

0x7f02,	// (0x0001f565) ai_links_pane_ParamLimits

0x7f02,	// (0x0001f565) ai_links_pane

0x7f14,	// (0x0001f577) indicator_pane_cp1_ParamLimits

0x7f14,	// (0x0001f577) indicator_pane_cp1

0x7f23,	// (0x0001f586) main_pane_idle_g1_cp_ParamLimits

0x7f23,	// (0x0001f586) main_pane_idle_g1_cp

0xb387,	// (0x000229ea) popup_ai_links_title_window

0x7f3b,	// (0x0001f59e) soft_indicator_pane_cp1_ParamLimits

0x7f3b,	// (0x0001f59e) soft_indicator_pane_cp1

0xd4a8,	// (0x00024b0b) ai_links_pane_g1

0xd4b1,	// (0x00024b14) grid_ai_links_pane

0x9205,	// (0x00020868) ai_gene_pane_1

0xd496,	// (0x00024af9) ai_gene_pane_2

0xd49f,	// (0x00024b02) list_highlight_pane_cp4

0x91e9,	// (0x0002084c) cell_ai_link_pane_ParamLimits

0x91e9,	// (0x0002084c) cell_ai_link_pane

0xd48e,	// (0x00024af1) cell_ai_link_pane_g1

0xb567,	// (0x00022bca) cell_ai_link_pane_g2

0x0001,

0xf904,	// (0x00026f67) cell_ai_link_pane_g

0xb216,	// (0x00022879) grid_highlight_cp2

0xb216,	// (0x00022879) bg_popup_sub_pane_cp1

0xb39e,	// (0x00022a01) popup_ai_links_title_window_t1

0xd3e0,	// (0x00024a43) ai_gene_pane_1_g1_ParamLimits

0xd3e0,	// (0x00024a43) ai_gene_pane_1_g1

0xd3ec,	// (0x00024a4f) ai_gene_pane_1_g2_ParamLimits

0xd3ec,	// (0x00024a4f) ai_gene_pane_1_g2

0x0001,

0xf8fa,	// (0x00026f5d) ai_gene_pane_1_g_ParamLimits

0xf8fa,	// (0x00026f5d) ai_gene_pane_1_g

0xd3f9,	// (0x00024a5c) ai_gene_pane_1_t1_ParamLimits

0xd3f9,	// (0x00024a5c) ai_gene_pane_1_t1

0xd42d,	// (0x00024a90) grid_ai_soft_ind_pane

0xd3cb,	// (0x00024a2e) ai_gene_pane_2_t1_ParamLimits

0xd3cb,	// (0x00024a2e) ai_gene_pane_2_t1

0x7f4f,	// (0x0001f5b2) main_pane_empty_t1_ParamLimits

0x7f4f,	// (0x0001f5b2) main_pane_empty_t1

0x7f6c,	// (0x0001f5cf) main_pane_empty_t2_ParamLimits

0x7f6c,	// (0x0001f5cf) main_pane_empty_t2

0x7f84,	// (0x0001f5e7) main_pane_empty_t3_ParamLimits

0x7f84,	// (0x0001f5e7) main_pane_empty_t3

0x7f97,	// (0x0001f5fa) main_pane_empty_t4_ParamLimits

0x7f97,	// (0x0001f5fa) main_pane_empty_t4

0x7faa,	// (0x0001f60d) main_pane_empty_t5_ParamLimits

0x7faa,	// (0x0001f60d) main_pane_empty_t5

0x0004,

0xf574,	// (0x00026bd7) main_pane_empty_t_ParamLimits

0xf574,	// (0x00026bd7) main_pane_empty_t

0xb8c0,	// (0x00022f23) bg_popup_window_pane_ParamLimits

0xb8c0,	// (0x00022f23) bg_popup_window_pane

0xd17a,	// (0x000247dd) find_popup_pane_cp2_ParamLimits

0xd17a,	// (0x000247dd) find_popup_pane_cp2

0xd186,	// (0x000247e9) heading_pane_ParamLimits

0xd186,	// (0x000247e9) heading_pane

0xb216,	// (0x00022879) bg_popup_sub_pane

0x912c,	// (0x0002078f) bg_popup_window_pane_g1_ParamLimits

0x912c,	// (0x0002078f) bg_popup_window_pane_g1

0x913b,	// (0x0002079e) bg_popup_window_pane_g2_ParamLimits

0x913b,	// (0x0002079e) bg_popup_window_pane_g2

0x9147,	// (0x000207aa) bg_popup_window_pane_g3_ParamLimits

0x9147,	// (0x000207aa) bg_popup_window_pane_g3

0x9153,	// (0x000207b6) bg_popup_window_pane_g4_ParamLimits

0x9153,	// (0x000207b6) bg_popup_window_pane_g4

0x9162,	// (0x000207c5) bg_popup_window_pane_g5_ParamLimits

0x9162,	// (0x000207c5) bg_popup_window_pane_g5

0x9172,	// (0x000207d5) bg_popup_window_pane_g6_ParamLimits

0x9172,	// (0x000207d5) bg_popup_window_pane_g6

0x917e,	// (0x000207e1) bg_popup_window_pane_g7_ParamLimits

0x917e,	// (0x000207e1) bg_popup_window_pane_g7

0x918d,	// (0x000207f0) bg_popup_window_pane_g8_ParamLimits

0x918d,	// (0x000207f0) bg_popup_window_pane_g8

0x919c,	// (0x000207ff) bg_popup_window_pane_g9_ParamLimits

0x919c,	// (0x000207ff) bg_popup_window_pane_g9

0xd15f,	// (0x000247c2) bg_popup_window_pane_g10_ParamLimits

0xd15f,	// (0x000247c2) bg_popup_window_pane_g10

0x0009,

0xf8c2,	// (0x00026f25) bg_popup_window_pane_g_ParamLimits

0xf8c2,	// (0x00026f25) bg_popup_window_pane_g

0xd116,	// (0x00024779) bg_popup_heading_pane_ParamLimits

0xd116,	// (0x00024779) bg_popup_heading_pane

0x504e,	// (0x0001c6b1) tabs_4_passive_pane_cp_srt_ParamLimits

0x504e,	// (0x0001c6b1) tabs_4_passive_pane_cp_srt

0x5060,	// (0x0001c6c3) tabs_4_passive_pane_srt_ParamLimits

0xd12a,	// (0x0002478d) heading_pane_g2

0x5060,	// (0x0001c6c3) tabs_4_passive_pane_srt

0xc5b8,	// (0x00023c1b) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc5b8,	// (0x00023c1b) bg_passive_tab_pane_cp3_srt

0xd132,	// (0x00024795) heading_pane_t1_ParamLimits

0xd132,	// (0x00024795) heading_pane_t1

0xd149,	// (0x000247ac) heading_pane_t2_ParamLimits

0xd149,	// (0x000247ac) heading_pane_t2

0x0001,

0xf8bd,	// (0x00026f20) heading_pane_t_ParamLimits

0xf8bd,	// (0x00026f20) heading_pane_t

0xcca5,	// (0x00024308) bg_popup_heading_pane_g1

0xcd36,	// (0x00024399) bg_popup_heading_pane_g2

0xcd3e,	// (0x000243a1) bg_popup_heading_pane_g3

0xcd46,	// (0x000243a9) bg_popup_heading_pane_g4

0xcd4e,	// (0x000243b1) bg_popup_heading_pane_g5

0xcd56,	// (0x000243b9) bg_popup_heading_pane_g6

0xcd5e,	// (0x000243c1) bg_popup_heading_pane_g7

0xcd66,	// (0x000243c9) bg_popup_heading_pane_g8

0xcd6e,	// (0x000243d1) bg_popup_heading_pane_g9

0x0008,

0xf879,	// (0x00026edc) bg_popup_heading_pane_g

0xc544,	// (0x00023ba7) bg_popup_sub_pane_g1

0xc54c,	// (0x00023baf) bg_popup_sub_pane_g2

0xc554,	// (0x00023bb7) bg_popup_sub_pane_g3

0xc55c,	// (0x00023bbf) bg_popup_sub_pane_g4

0xc564,	// (0x00023bc7) bg_popup_sub_pane_g5

0xc56c,	// (0x00023bcf) bg_popup_sub_pane_g6

0xc574,	// (0x00023bd7) bg_popup_sub_pane_g7

0xc57c,	// (0x00023bdf) bg_popup_sub_pane_g8

0xc584,	// (0x00023be7) bg_popup_sub_pane_g9

0x0008,

0xf853,	// (0x00026eb6) bg_popup_sub_pane_g

0xb264,	// (0x000228c7) bg_popup_window_pane_cp5_ParamLimits

0xb264,	// (0x000228c7) bg_popup_window_pane_cp5

0xb3bb,	// (0x00022a1e) popup_note_window_g1_ParamLimits

0xb3bb,	// (0x00022a1e) popup_note_window_g1

0xb3c7,	// (0x00022a2a) popup_note_window_t1_ParamLimits

0xb3c7,	// (0x00022a2a) popup_note_window_t1

0xb3dd,	// (0x00022a40) popup_note_window_t2_ParamLimits

0xb3dd,	// (0x00022a40) popup_note_window_t2

0xb3f3,	// (0x00022a56) popup_note_window_t3_ParamLimits

0xb3f3,	// (0x00022a56) popup_note_window_t3

0xb409,	// (0x00022a6c) popup_note_window_t4_ParamLimits

0xb409,	// (0x00022a6c) popup_note_window_t4

0xb431,	// (0x00022a94) popup_note_window_t5_ParamLimits

0xb431,	// (0x00022a94) popup_note_window_t5

0x0004,

0xf57f,	// (0x00026be2) popup_note_window_t_ParamLimits

0xf57f,	// (0x00026be2) popup_note_window_t

0xb47b,	// (0x00022ade) bg_popup_window_pane_cp6_ParamLimits

0xb47b,	// (0x00022ade) bg_popup_window_pane_cp6

0xcc21,	// (0x00024284) popup_note_image_window_g1_ParamLimits

0xcc21,	// (0x00024284) popup_note_image_window_g1

0xcc2d,	// (0x00024290) popup_note_image_window_g2_ParamLimits

0xcc2d,	// (0x00024290) popup_note_image_window_g2

0x0001,

0xf847,	// (0x00026eaa) popup_note_image_window_g_ParamLimits

0xf847,	// (0x00026eaa) popup_note_image_window_g

0xcc46,	// (0x000242a9) popup_note_image_window_t1_ParamLimits

0xcc46,	// (0x000242a9) popup_note_image_window_t1

0xcc5f,	// (0x000242c2) popup_note_image_window_t2_ParamLimits

0xcc5f,	// (0x000242c2) popup_note_image_window_t2

0xcc78,	// (0x000242db) popup_note_image_window_t3_ParamLimits

0xcc78,	// (0x000242db) popup_note_image_window_t3

0x0002,

0xf84c,	// (0x00026eaf) popup_note_image_window_t_ParamLimits

0xf84c,	// (0x00026eaf) popup_note_image_window_t

0xcb0c,	// (0x0002416f) bg_popup_window_pane_cp7_ParamLimits

0xcb0c,	// (0x0002416f) bg_popup_window_pane_cp7

0xcb3c,	// (0x0002419f) popup_note_wait_window_g1_ParamLimits

0xcb3c,	// (0x0002419f) popup_note_wait_window_g1

0xcb48,	// (0x000241ab) popup_note_wait_window_g2_ParamLimits

0xcb48,	// (0x000241ab) popup_note_wait_window_g2

0x0002,

0xf835,	// (0x00026e98) popup_note_wait_window_g_ParamLimits

0xf835,	// (0x00026e98) popup_note_wait_window_g

0xcb60,	// (0x000241c3) popup_note_wait_window_t1_ParamLimits

0xcb60,	// (0x000241c3) popup_note_wait_window_t1

0xcb87,	// (0x000241ea) popup_note_wait_window_t2_ParamLimits

0xcb87,	// (0x000241ea) popup_note_wait_window_t2

0xcba4,	// (0x00024207) popup_note_wait_window_t3_ParamLimits

0xcba4,	// (0x00024207) popup_note_wait_window_t3

0xcbb7,	// (0x0002421a) popup_note_wait_window_t4_ParamLimits

0xcbb7,	// (0x0002421a) popup_note_wait_window_t4

0x0004,

0xf83c,	// (0x00026e9f) popup_note_wait_window_t_ParamLimits

0xf83c,	// (0x00026e9f) popup_note_wait_window_t

0xcbdc,	// (0x0002423f) wait_bar_pane_ParamLimits

0xcbdc,	// (0x0002423f) wait_bar_pane

0xb216,	// (0x00022879) wait_anim_pane

0xb216,	// (0x00022879) wait_border_pane

0xb194,	// (0x000227f7) wait_anim_pane_g1

0xb194,	// (0x000227f7) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00026d66) wait_anim_pane_g

0xcabc,	// (0x0002411f) wait_border_pane_g1

0xcac5,	// (0x00024128) wait_border_pane_g2

0xcace,	// (0x00024131) wait_border_pane_g3

0x0002,

0xf82e,	// (0x00026e91) wait_border_pane_g

0xc92c,	// (0x00023f8f) bg_popup_window_pane_cp16_ParamLimits

0xc92c,	// (0x00023f8f) bg_popup_window_pane_cp16

0xca2c,	// (0x0002408f) indicator_popup_pane_cp4_ParamLimits

0xca2c,	// (0x0002408f) indicator_popup_pane_cp4

0xca40,	// (0x000240a3) popup_query_data_window_t1_ParamLimits

0xca40,	// (0x000240a3) popup_query_data_window_t1

0xca52,	// (0x000240b5) popup_query_data_window_t2_ParamLimits

0xca52,	// (0x000240b5) popup_query_data_window_t2

0xca6b,	// (0x000240ce) popup_query_data_window_t3_ParamLimits

0xca6b,	// (0x000240ce) popup_query_data_window_t3

0x0002,

0xf827,	// (0x00026e8a) popup_query_data_window_t_ParamLimits

0xf827,	// (0x00026e8a) popup_query_data_window_t

0xca85,	// (0x000240e8) query_popup_data_pane_ParamLimits

0xca85,	// (0x000240e8) query_popup_data_pane

0xca99,	// (0x000240fc) query_popup_data_pane_cp1_ParamLimits

0xca99,	// (0x000240fc) query_popup_data_pane_cp1

0xc92c,	// (0x00023f8f) bg_popup_window_pane_cp10_ParamLimits

0xc92c,	// (0x00023f8f) bg_popup_window_pane_cp10

0xc95e,	// (0x00023fc1) indicator_popup_pane_ParamLimits

0xc95e,	// (0x00023fc1) indicator_popup_pane

0xc980,	// (0x00023fe3) popup_query_code_window_t1_ParamLimits

0xc980,	// (0x00023fe3) popup_query_code_window_t1

0xc99a,	// (0x00023ffd) popup_query_code_window_t2_ParamLimits

0xc99a,	// (0x00023ffd) popup_query_code_window_t2

0xc9e3,	// (0x00024046) popup_query_code_window_t3_ParamLimits

0xc9e3,	// (0x00024046) popup_query_code_window_t3

0x0002,

0xf820,	// (0x00026e83) popup_query_code_window_t_ParamLimits

0xf820,	// (0x00026e83) popup_query_code_window_t

0xca12,	// (0x00024075) query_popup_pane_ParamLimits

0xca12,	// (0x00024075) query_popup_pane

0xb47b,	// (0x00022ade) bg_popup_window_pane_cp15_ParamLimits

0xb47b,	// (0x00022ade) bg_popup_window_pane_cp15

0xb499,	// (0x00022afc) indicator_popup_pane_cp1_ParamLimits

0xb499,	// (0x00022afc) indicator_popup_pane_cp1

0xb4ac,	// (0x00022b0f) indicator_popup_pane_cp2_ParamLimits

0xb4ac,	// (0x00022b0f) indicator_popup_pane_cp2

0xb4bf,	// (0x00022b22) popup_query_data_code_window_g1_ParamLimits

0xb4bf,	// (0x00022b22) popup_query_data_code_window_g1

0xb4d2,	// (0x00022b35) popup_query_data_code_window_t1_ParamLimits

0xb4d2,	// (0x00022b35) popup_query_data_code_window_t1

0xb4e4,	// (0x00022b47) popup_query_data_code_window_t2_ParamLimits

0xb4e4,	// (0x00022b47) popup_query_data_code_window_t2

0xb4f6,	// (0x00022b59) popup_query_data_code_window_t3_ParamLimits

0xb4f6,	// (0x00022b59) popup_query_data_code_window_t3

0xb50c,	// (0x00022b6f) popup_query_data_code_window_t4_ParamLimits

0xb50c,	// (0x00022b6f) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00026bed) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00026bed) popup_query_data_code_window_t

0xc039,	// (0x0002369c) list_single_midp_graphic_pane_g3

0xb524,	// (0x00022b87) query_popup_data_pane_cp2_ParamLimits

0xb537,	// (0x00022b9a) query_popup_pane_cp2_ParamLimits

0xb537,	// (0x00022b9a) query_popup_pane_cp2

0xb216,	// (0x00022879) bg_popup_window_pane_cp11

0xc918,	// (0x00023f7b) heading_pane_cp5

0xb5c3,	// (0x00022c26) listscroll_popup_info_pane

0xb216,	// (0x00022879) input_focus_pane_cp3

0xb54a,	// (0x00022bad) query_popup_pane_t1

0xb558,	// (0x00022bbb) list_popup_info_pane_ParamLimits

0xb558,	// (0x00022bbb) list_popup_info_pane

0xb567,	// (0x00022bca) listscroll_popup_info_pane_g1

0xb56f,	// (0x00022bd2) scroll_pane_cp7

0xb577,	// (0x00022bda) popup_info_list_pane_t1_ParamLimits

0xb577,	// (0x00022bda) popup_info_list_pane_t1

0xb591,	// (0x00022bf4) popup_info_list_pane_t2_ParamLimits

0xb591,	// (0x00022bf4) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00026bf6) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00026bf6) popup_info_list_pane_t

0xb216,	// (0x00022879) bg_popup_window_pane_cp12

0xd7f4,	// (0x00024e57) find_popup_pane

0xb27a,	// (0x000228dd) bg_popup_window_pane_cp3

0xb5ab,	// (0x00022c0e) heading_pane_cp3

0xb5b7,	// (0x00022c1a) listscroll_popup_graphic_pane

0xb216,	// (0x00022879) bg_popup_window_pane_cp4

0x800d,	// (0x0001f670) heading_pane_cp4

0xb5c3,	// (0x00022c26) listscroll_popup_colour_pane

0xb5cb,	// (0x00022c2e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb5cb,	// (0x00022c2e) cell_large_graphic_colour_none_popup_pane

0x8015,	// (0x0001f678) grid_large_graphic_colour_popup_pane_ParamLimits

0x8015,	// (0x0001f678) grid_large_graphic_colour_popup_pane

0x8031,	// (0x0001f694) listscroll_popup_colour_pane_g1_ParamLimits

0x8031,	// (0x0001f694) listscroll_popup_colour_pane_g1

0x8048,	// (0x0001f6ab) listscroll_popup_colour_pane_g2_ParamLimits

0x8048,	// (0x0001f6ab) listscroll_popup_colour_pane_g2

0xb5db,	// (0x00022c3e) listscroll_popup_colour_pane_g3_ParamLimits

0xb5db,	// (0x00022c3e) listscroll_popup_colour_pane_g3

0x805c,	// (0x0001f6bf) listscroll_popup_colour_pane_g4_ParamLimits

0x805c,	// (0x0001f6bf) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00026bfb) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00026bfb) listscroll_popup_colour_pane_g

0xb5eb,	// (0x00022c4e) scroll_pane_cp6_ParamLimits

0xb5eb,	// (0x00022c4e) scroll_pane_cp6

0x806b,	// (0x0001f6ce) cell_large_graphic_colour_popup_pane_ParamLimits

0x806b,	// (0x0001f6ce) cell_large_graphic_colour_popup_pane

0xb5fd,	// (0x00022c60) cell_large_graphic_colour_none_popup_pane_t1

0xb216,	// (0x00022879) grid_highlight_pane_cp5

0xb60c,	// (0x00022c6f) cell_large_graphic_colour_popup_pane_g1

0xb614,	// (0x00022c77) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00026c04) cell_large_graphic_colour_popup_pane_g

0xb61c,	// (0x00022c7f) cell_large_graphic_colour_popup_pane_g2_copy1

0xb625,	// (0x00022c88) grid_highlight_pane_cp4

0xb62d,	// (0x00022c90) bg_popup_window_pane_cp8_ParamLimits

0xb62d,	// (0x00022c90) bg_popup_window_pane_cp8

0xb648,	// (0x00022cab) popup_snote_single_text_window_g1_ParamLimits

0xb648,	// (0x00022cab) popup_snote_single_text_window_g1

0xb65a,	// (0x00022cbd) popup_snote_single_text_window_t1_ParamLimits

0xb65a,	// (0x00022cbd) popup_snote_single_text_window_t1

0xb66d,	// (0x00022cd0) popup_snote_single_text_window_t2_ParamLimits

0xb66d,	// (0x00022cd0) popup_snote_single_text_window_t2

0xb680,	// (0x00022ce3) popup_snote_single_text_window_t3_ParamLimits

0xb680,	// (0x00022ce3) popup_snote_single_text_window_t3

0xb6b9,	// (0x00022d1c) popup_snote_single_text_window_t4_ParamLimits

0xb6b9,	// (0x00022d1c) popup_snote_single_text_window_t4

0xb6ed,	// (0x00022d50) popup_snote_single_text_window_t5_ParamLimits

0xb6ed,	// (0x00022d50) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00026c09) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00026c09) popup_snote_single_text_window_t

0xb71c,	// (0x00022d7f) bg_popup_window_pane_cp9_ParamLimits

0xb71c,	// (0x00022d7f) bg_popup_window_pane_cp9

0xb648,	// (0x00022cab) popup_snote_single_graphic_window_g1_ParamLimits

0xb648,	// (0x00022cab) popup_snote_single_graphic_window_g1

0xb72a,	// (0x00022d8d) popup_snote_single_graphic_window_g2_ParamLimits

0xb72a,	// (0x00022d8d) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00026c14) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00026c14) popup_snote_single_graphic_window_g

0xb736,	// (0x00022d99) popup_snote_single_graphic_window_t1_ParamLimits

0xb736,	// (0x00022d99) popup_snote_single_graphic_window_t1

0xb749,	// (0x00022dac) popup_snote_single_graphic_window_t2_ParamLimits

0xb749,	// (0x00022dac) popup_snote_single_graphic_window_t2

0xb680,	// (0x00022ce3) popup_snote_single_graphic_window_t3_ParamLimits

0xb680,	// (0x00022ce3) popup_snote_single_graphic_window_t3

0xb6b9,	// (0x00022d1c) popup_snote_single_graphic_window_t4_ParamLimits

0xb6b9,	// (0x00022d1c) popup_snote_single_graphic_window_t4

0xb6ed,	// (0x00022d50) popup_snote_single_graphic_window_t5_ParamLimits

0xb6ed,	// (0x00022d50) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00026c19) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00026c19) popup_snote_single_graphic_window_t

0x94de,	// (0x00020b41) grid_graphic_popup_pane_ParamLimits

0x94de,	// (0x00020b41) grid_graphic_popup_pane

0x9501,	// (0x00020b64) listscroll_popup_graphic_pane_g1_ParamLimits

0x9501,	// (0x00020b64) listscroll_popup_graphic_pane_g1

0x9515,	// (0x00020b78) listscroll_popup_graphic_pane_g2_ParamLimits

0x9515,	// (0x00020b78) listscroll_popup_graphic_pane_g2

0x0001,

0xf99d,	// (0x00027000) listscroll_popup_graphic_pane_g_ParamLimits

0xf99d,	// (0x00027000) listscroll_popup_graphic_pane_g

0xd748,	// (0x00024dab) scroll_pane_cp5

0x9499,	// (0x00020afc) cell_graphic_popup_pane_ParamLimits

0x9499,	// (0x00020afc) cell_graphic_popup_pane

0xd79d,	// (0x00024e00) cell_graphic_popup_pane_g1

0xd7a5,	// (0x00024e08) cell_graphic_popup_pane_g2

0xb61c,	// (0x00022c7f) cell_graphic_popup_pane_g3

0x0002,

0xf996,	// (0x00026ff9) cell_graphic_popup_pane_g

0xd7ae,	// (0x00024e11) cell_graphic_popup_pane_t2

0xb625,	// (0x00022c88) grid_highlight_pane_cp3

0xb76e,	// (0x00022dd1) list_gen_pane_ParamLimits

0xb76e,	// (0x00022dd1) list_gen_pane

0xb797,	// (0x00022dfa) scroll_pane

0x946c,	// (0x00020acf) bg_list_pane_g1_ParamLimits

0x946c,	// (0x00020acf) bg_list_pane_g1

0xd754,	// (0x00024db7) bg_list_pane_g2_ParamLimits

0xd754,	// (0x00024db7) bg_list_pane_g2

0xd767,	// (0x00024dca) bg_list_pane_g3_ParamLimits

0xd767,	// (0x00024dca) bg_list_pane_g3

0xd779,	// (0x00024ddc) bg_list_pane_g4_ParamLimits

0xd779,	// (0x00024ddc) bg_list_pane_g4

0x9487,	// (0x00020aea) bg_list_pane_g5_ParamLimits

0x9487,	// (0x00020aea) bg_list_pane_g5

0x0004,

0xf98b,	// (0x00026fee) bg_list_pane_g_ParamLimits

0xf98b,	// (0x00026fee) bg_list_pane_g

0x9410,	// (0x00020a73) list_double2_graphic_large_graphic_pane_ParamLimits

0x9410,	// (0x00020a73) list_double2_graphic_large_graphic_pane

0x9410,	// (0x00020a73) list_double2_graphic_pane_ParamLimits

0x9410,	// (0x00020a73) list_double2_graphic_pane

0x9410,	// (0x00020a73) list_double2_large_graphic_pane_ParamLimits

0x9410,	// (0x00020a73) list_double2_large_graphic_pane

0x9422,	// (0x00020a85) list_double2_pane_ParamLimits

0x9422,	// (0x00020a85) list_double2_pane

0x9410,	// (0x00020a73) list_double_graphic_heading_pane_ParamLimits

0x9410,	// (0x00020a73) list_double_graphic_heading_pane

0x9410,	// (0x00020a73) list_double_graphic_pane_ParamLimits

0x9410,	// (0x00020a73) list_double_graphic_pane

0x9410,	// (0x00020a73) list_double_heading_pane_ParamLimits

0x9410,	// (0x00020a73) list_double_heading_pane

0x9410,	// (0x00020a73) list_double_large_graphic_pane_ParamLimits

0x9410,	// (0x00020a73) list_double_large_graphic_pane

0x9410,	// (0x00020a73) list_double_number_pane_ParamLimits

0x9410,	// (0x00020a73) list_double_number_pane

0x9410,	// (0x00020a73) list_double_pane_ParamLimits

0x9410,	// (0x00020a73) list_double_pane

0x9410,	// (0x00020a73) list_double_time_pane_ParamLimits

0x9410,	// (0x00020a73) list_double_time_pane

0x9410,	// (0x00020a73) list_setting_number_pane_ParamLimits

0x9410,	// (0x00020a73) list_setting_number_pane

0x9410,	// (0x00020a73) list_setting_pane_ParamLimits

0x9410,	// (0x00020a73) list_setting_pane

0x78f7,	// (0x0001ef5a) list_single_2graphic_pane_ParamLimits

0x78f7,	// (0x0001ef5a) list_single_2graphic_pane

0x78f7,	// (0x0001ef5a) list_single_graphic_heading_pane_ParamLimits

0x78f7,	// (0x0001ef5a) list_single_graphic_heading_pane

0x78f7,	// (0x0001ef5a) list_single_graphic_pane_ParamLimits

0x78f7,	// (0x0001ef5a) list_single_graphic_pane

0x78f7,	// (0x0001ef5a) list_single_heading_pane_ParamLimits

0x78f7,	// (0x0001ef5a) list_single_heading_pane

0x9410,	// (0x00020a73) list_single_large_graphic_pane_ParamLimits

0x9410,	// (0x00020a73) list_single_large_graphic_pane

0x78f7,	// (0x0001ef5a) list_single_number_heading_pane_ParamLimits

0x78f7,	// (0x0001ef5a) list_single_number_heading_pane

0x78f7,	// (0x0001ef5a) list_single_number_pane_ParamLimits

0x78f7,	// (0x0001ef5a) list_single_number_pane

0x78f7,	// (0x0001ef5a) list_single_pane_ParamLimits

0x78f7,	// (0x0001ef5a) list_single_pane

0xb216,	// (0x00022879) list_highlight_pane_cp1

0x3761,	// (0x0001adc4) list_single_pane_g1_ParamLimits

0x3761,	// (0x0001adc4) list_single_pane_g1

0x376d,	// (0x0001add0) list_single_pane_g2_ParamLimits

0x376d,	// (0x0001add0) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00026c2b) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00026c2b) list_single_pane_g

0x39e4,	// (0x0001b047) list_single_pane_t1_ParamLimits

0x39e4,	// (0x0001b047) list_single_pane_t1

0x3761,	// (0x0001adc4) list_single_number_pane_g1_ParamLimits

0x3761,	// (0x0001adc4) list_single_number_pane_g1

0x376d,	// (0x0001add0) list_single_number_pane_g2_ParamLimits

0x376d,	// (0x0001add0) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00026c2b) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00026c2b) list_single_number_pane_g

0x37bf,	// (0x0001ae22) list_single_number_pane_t1_ParamLimits

0x37bf,	// (0x0001ae22) list_single_number_pane_t1

0x78ba,	// (0x0001ef1d) list_single_number_pane_t2_ParamLimits

0x78ba,	// (0x0001ef1d) list_single_number_pane_t2

0x0001,

0xf94c,	// (0x00026faf) list_single_number_pane_t_ParamLimits

0xf94c,	// (0x00026faf) list_single_number_pane_t

0x3036,	// (0x0001a699) list_single_graphic_pane_g1_ParamLimits

0x3036,	// (0x0001a699) list_single_graphic_pane_g1

0x3761,	// (0x0001adc4) list_single_graphic_pane_g2_ParamLimits

0x3761,	// (0x0001adc4) list_single_graphic_pane_g2

0x376d,	// (0x0001add0) list_single_graphic_pane_g3_ParamLimits

0x376d,	// (0x0001add0) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00026c24) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00026c24) list_single_graphic_pane_g

0x37bf,	// (0x0001ae22) list_single_graphic_pane_t1_ParamLimits

0x37bf,	// (0x0001ae22) list_single_graphic_pane_t1

0x3761,	// (0x0001adc4) list_single_heading_pane_g1_ParamLimits

0x3761,	// (0x0001adc4) list_single_heading_pane_g1

0x376d,	// (0x0001add0) list_single_heading_pane_g2_ParamLimits

0x376d,	// (0x0001add0) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00026c2b) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00026c2b) list_single_heading_pane_g

0x7316,	// (0x0001e979) list_single_heading_pane_t1_ParamLimits

0x7316,	// (0x0001e979) list_single_heading_pane_t1

0x732c,	// (0x0001e98f) list_single_heading_pane_t2_ParamLimits

0x732c,	// (0x0001e98f) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00026c30) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00026c30) list_single_heading_pane_t

0x3761,	// (0x0001adc4) list_single_number_heading_pane_g1_ParamLimits

0x3761,	// (0x0001adc4) list_single_number_heading_pane_g1

0x376d,	// (0x0001add0) list_single_number_heading_pane_g2_ParamLimits

0x376d,	// (0x0001add0) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00026c2b) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00026c2b) list_single_number_heading_pane_g

0x7316,	// (0x0001e979) list_single_number_heading_pane_t1_ParamLimits

0x7316,	// (0x0001e979) list_single_number_heading_pane_t1

0x733e,	// (0x0001e9a1) list_single_number_heading_pane_t2_ParamLimits

0x733e,	// (0x0001e9a1) list_single_number_heading_pane_t2

0x39c0,	// (0x0001b023) list_single_number_heading_pane_t3_ParamLimits

0x39c0,	// (0x0001b023) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00026c35) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00026c35) list_single_number_heading_pane_t

0x3036,	// (0x0001a699) list_single_graphic_heading_pane_g1_ParamLimits

0x3036,	// (0x0001a699) list_single_graphic_heading_pane_g1

0x7350,	// (0x0001e9b3) list_single_graphic_heading_pane_g4_ParamLimits

0x7350,	// (0x0001e9b3) list_single_graphic_heading_pane_g4

0x376d,	// (0x0001add0) list_single_graphic_heading_pane_g5_ParamLimits

0x376d,	// (0x0001add0) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00026c3c) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00026c3c) list_single_graphic_heading_pane_g

0x7316,	// (0x0001e979) list_single_graphic_heading_pane_t1_ParamLimits

0x7316,	// (0x0001e979) list_single_graphic_heading_pane_t1

0x7361,	// (0x0001e9c4) list_single_graphic_heading_pane_t2_ParamLimits

0x7361,	// (0x0001e9c4) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00026c43) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00026c43) list_single_graphic_heading_pane_t

0x39fa,	// (0x0001b05d) list_single_large_graphic_pane_g1_ParamLimits

0x39fa,	// (0x0001b05d) list_single_large_graphic_pane_g1

0x3a06,	// (0x0001b069) list_single_large_graphic_pane_g2_ParamLimits

0x3a06,	// (0x0001b069) list_single_large_graphic_pane_g2

0x3a12,	// (0x0001b075) list_single_large_graphic_pane_g3_ParamLimits

0x3a12,	// (0x0001b075) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00026c48) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00026c48) list_single_large_graphic_pane_g

0xcac5,	// (0x00024128) wait_border_pane_g2_copy1

0x7373,	// (0x0001e9d6) list_single_large_graphic_pane_g4_cp2

0x3a1e,	// (0x0001b081) list_single_large_graphic_pane_t1_ParamLimits

0x3a1e,	// (0x0001b081) list_single_large_graphic_pane_t1

0x3042,	// (0x0001a6a5) list_double_pane_g1_ParamLimits

0x3042,	// (0x0001a6a5) list_double_pane_g1

0x304e,	// (0x0001a6b1) list_double_pane_g2_ParamLimits

0x304e,	// (0x0001a6b1) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00026c4f) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00026c4f) list_double_pane_g

0x38cd,	// (0x0001af30) list_double_pane_t1_ParamLimits

0x38cd,	// (0x0001af30) list_double_pane_t1

0x737b,	// (0x0001e9de) list_double_pane_t2_ParamLimits

0x737b,	// (0x0001e9de) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00026c54) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00026c54) list_double_pane_t

0x738d,	// (0x0001e9f0) list_double2_pane_g1_ParamLimits

0x738d,	// (0x0001e9f0) list_double2_pane_g1

0x3221,	// (0x0001a884) list_double2_pane_g2_ParamLimits

0x3221,	// (0x0001a884) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00026c59) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00026c59) list_double2_pane_g

0x739e,	// (0x0001ea01) list_double2_pane_t1_ParamLimits

0x739e,	// (0x0001ea01) list_double2_pane_t1

0x73b4,	// (0x0001ea17) list_double2_pane_t2_ParamLimits

0x73b4,	// (0x0001ea17) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00026c5e) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00026c5e) list_double2_pane_t

0x3042,	// (0x0001a6a5) list_double_number_pane_g1_ParamLimits

0x3042,	// (0x0001a6a5) list_double_number_pane_g1

0x304e,	// (0x0001a6b1) list_double_number_pane_g2_ParamLimits

0x304e,	// (0x0001a6b1) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00026c4f) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00026c4f) list_double_number_pane_g

0x73c6,	// (0x0001ea29) list_double_number_pane_t1_ParamLimits

0x73c6,	// (0x0001ea29) list_double_number_pane_t1

0x305a,	// (0x0001a6bd) list_double_number_pane_t2_ParamLimits

0x305a,	// (0x0001a6bd) list_double_number_pane_t2

0x73d8,	// (0x0001ea3b) list_double_number_pane_t3_ParamLimits

0x73d8,	// (0x0001ea3b) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00026c63) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00026c63) list_double_number_pane_t

0x3036,	// (0x0001a699) list_double_graphic_pane_g1_ParamLimits

0x3036,	// (0x0001a699) list_double_graphic_pane_g1

0x73ea,	// (0x0001ea4d) list_double_graphic_pane_g2_ParamLimits

0x73ea,	// (0x0001ea4d) list_double_graphic_pane_g2

0x73f9,	// (0x0001ea5c) list_double_graphic_pane_g3_ParamLimits

0x73f9,	// (0x0001ea5c) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00026c6a) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00026c6a) list_double_graphic_pane_g

0x7411,	// (0x0001ea74) list_double_graphic_pane_t1_ParamLimits

0x7411,	// (0x0001ea74) list_double_graphic_pane_t1

0x7427,	// (0x0001ea8a) list_double_graphic_pane_t2_ParamLimits

0x7427,	// (0x0001ea8a) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00026c73) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00026c73) list_double_graphic_pane_t

0x7439,	// (0x0001ea9c) list_double2_graphic_pane_g1_ParamLimits

0x7439,	// (0x0001ea9c) list_double2_graphic_pane_g1

0x3042,	// (0x0001a6a5) list_double2_graphic_pane_g2_ParamLimits

0x3042,	// (0x0001a6a5) list_double2_graphic_pane_g2

0x304e,	// (0x0001a6b1) list_double2_graphic_pane_g3_ParamLimits

0x304e,	// (0x0001a6b1) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00026c78) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00026c78) list_double2_graphic_pane_g

0x7445,	// (0x0001eaa8) list_double2_graphic_pane_t1_ParamLimits

0x7445,	// (0x0001eaa8) list_double2_graphic_pane_t1

0x745b,	// (0x0001eabe) list_double2_graphic_pane_t2_ParamLimits

0x745b,	// (0x0001eabe) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00026c7f) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00026c7f) list_double2_graphic_pane_t

0x746d,	// (0x0001ead0) list_double_large_graphic_pane_g1_ParamLimits

0x746d,	// (0x0001ead0) list_double_large_graphic_pane_g1

0x7496,	// (0x0001eaf9) list_double_large_graphic_pane_g2_ParamLimits

0x7496,	// (0x0001eaf9) list_double_large_graphic_pane_g2

0x304e,	// (0x0001a6b1) list_double_large_graphic_pane_g3_ParamLimits

0x304e,	// (0x0001a6b1) list_double_large_graphic_pane_g3

0x74a7,	// (0x0001eb0a) list_double_large_graphic_pane_g4_ParamLimits

0x74a7,	// (0x0001eb0a) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00026c84) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00026c84) list_double_large_graphic_pane_g

0x74b8,	// (0x0001eb1b) list_double_large_graphic_pane_t1_ParamLimits

0x74b8,	// (0x0001eb1b) list_double_large_graphic_pane_t1

0x74d1,	// (0x0001eb34) list_double_large_graphic_pane_t2_ParamLimits

0x74d1,	// (0x0001eb34) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00026c8f) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00026c8f) list_double_large_graphic_pane_t

0x74e3,	// (0x0001eb46) list_double2_large_graphic_pane_g1_ParamLimits

0x74e3,	// (0x0001eb46) list_double2_large_graphic_pane_g1

0x74ef,	// (0x0001eb52) list_double2_large_graphic_pane_g2_ParamLimits

0x74ef,	// (0x0001eb52) list_double2_large_graphic_pane_g2

0x7500,	// (0x0001eb63) list_double2_large_graphic_pane_g3_ParamLimits

0x7500,	// (0x0001eb63) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00026c94) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00026c94) list_double2_large_graphic_pane_g

0x750c,	// (0x0001eb6f) list_double2_large_graphic_pane_t1_ParamLimits

0x750c,	// (0x0001eb6f) list_double2_large_graphic_pane_t1

0x7522,	// (0x0001eb85) list_double2_large_graphic_pane_t2_ParamLimits

0x7522,	// (0x0001eb85) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00026c9b) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00026c9b) list_double2_large_graphic_pane_t

0x7534,	// (0x0001eb97) list_double_heading_pane_g1_ParamLimits

0x7534,	// (0x0001eb97) list_double_heading_pane_g1

0x7545,	// (0x0001eba8) list_double_heading_pane_g2_ParamLimits

0x7545,	// (0x0001eba8) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00026ca0) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00026ca0) list_double_heading_pane_g

0x7551,	// (0x0001ebb4) list_double_heading_pane_t1_ParamLimits

0x7551,	// (0x0001ebb4) list_double_heading_pane_t1

0x7567,	// (0x0001ebca) list_double_heading_pane_t2_ParamLimits

0x7567,	// (0x0001ebca) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00026ca5) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00026ca5) list_double_heading_pane_t

0x7579,	// (0x0001ebdc) list_double_graphic_heading_pane_g1_ParamLimits

0x7579,	// (0x0001ebdc) list_double_graphic_heading_pane_g1

0x7534,	// (0x0001eb97) list_double_graphic_heading_pane_g2_ParamLimits

0x7534,	// (0x0001eb97) list_double_graphic_heading_pane_g2

0x7545,	// (0x0001eba8) list_double_graphic_heading_pane_g3_ParamLimits

0x7545,	// (0x0001eba8) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00026caa) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00026caa) list_double_graphic_heading_pane_g

0x7585,	// (0x0001ebe8) list_double_graphic_heading_pane_t1_ParamLimits

0x7585,	// (0x0001ebe8) list_double_graphic_heading_pane_t1

0x745b,	// (0x0001eabe) list_double_graphic_heading_pane_t2_ParamLimits

0x745b,	// (0x0001eabe) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00026cb1) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00026cb1) list_double_graphic_heading_pane_t

0x7496,	// (0x0001eaf9) list_double_time_pane_g1_ParamLimits

0x7496,	// (0x0001eaf9) list_double_time_pane_g1

0x304e,	// (0x0001a6b1) list_double_time_pane_g2_ParamLimits

0x304e,	// (0x0001a6b1) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00026cb6) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00026cb6) list_double_time_pane_g

0x3070,	// (0x0001a6d3) list_double_time_pane_t1_ParamLimits

0x3070,	// (0x0001a6d3) list_double_time_pane_t1

0x759b,	// (0x0001ebfe) list_double_time_pane_t2_ParamLimits

0x759b,	// (0x0001ebfe) list_double_time_pane_t2

0x75ad,	// (0x0001ec10) list_double_time_pane_t3_ParamLimits

0x75ad,	// (0x0001ec10) list_double_time_pane_t3

0x75bf,	// (0x0001ec22) list_double_time_pane_t4_ParamLimits

0x75bf,	// (0x0001ec22) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00026cbb) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00026cbb) list_double_time_pane_t

0x75d1,	// (0x0001ec34) list_setting_pane_g1_ParamLimits

0x75d1,	// (0x0001ec34) list_setting_pane_g1

0x7545,	// (0x0001eba8) list_setting_pane_g2_ParamLimits

0x7545,	// (0x0001eba8) list_setting_pane_g2

0x0001,

0xf661,	// (0x00026cc4) list_setting_pane_g_ParamLimits

0xf661,	// (0x00026cc4) list_setting_pane_g

0x75dd,	// (0x0001ec40) list_setting_pane_t1_ParamLimits

0x75dd,	// (0x0001ec40) list_setting_pane_t1

0x75f4,	// (0x0001ec57) list_setting_pane_t2_ParamLimits

0x75f4,	// (0x0001ec57) list_setting_pane_t2

0x0002,

0xf666,	// (0x00026cc9) list_setting_pane_t_ParamLimits

0xf666,	// (0x00026cc9) list_setting_pane_t

0x7631,	// (0x0001ec94) set_value_pane_cp_ParamLimits

0x7631,	// (0x0001ec94) set_value_pane_cp

0x763d,	// (0x0001eca0) list_setting_number_pane_g1_ParamLimits

0x763d,	// (0x0001eca0) list_setting_number_pane_g1

0x7649,	// (0x0001ecac) list_setting_number_pane_g2_ParamLimits

0x7649,	// (0x0001ecac) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00026cd0) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00026cd0) list_setting_number_pane_g

0x7655,	// (0x0001ecb8) list_setting_number_pane_t1_ParamLimits

0x7655,	// (0x0001ecb8) list_setting_number_pane_t1

0x7669,	// (0x0001eccc) list_setting_number_pane_t2_ParamLimits

0x7669,	// (0x0001eccc) list_setting_number_pane_t2

0x7680,	// (0x0001ece3) list_setting_number_pane_t3_ParamLimits

0x7680,	// (0x0001ece3) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00026cd5) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00026cd5) list_setting_number_pane_t

0x7631,	// (0x0001ec94) set_value_pane_ParamLimits

0x7631,	// (0x0001ec94) set_value_pane

0xb7cc,	// (0x00022e2f) bg_set_opt_pane_ParamLimits

0xb7cc,	// (0x00022e2f) bg_set_opt_pane

0x3494,	// (0x0001aaf7) set_value_pane_t1

0xb7ed,	// (0x00022e50) slider_set_pane_cp3

0xb7f6,	// (0x00022e59) volume_small_pane_cp

0xb7ff,	// (0x00022e62) list_form_gen_pane

0xb7bb,	// (0x00022e1e) scroll_pane_cp8

0x76c3,	// (0x0001ed26) form_field_data_pane_ParamLimits

0x76c3,	// (0x0001ed26) form_field_data_pane

0x76da,	// (0x0001ed3d) form_field_data_wide_pane_ParamLimits

0x76da,	// (0x0001ed3d) form_field_data_wide_pane

0x76fa,	// (0x0001ed5d) form_field_popup_pane_ParamLimits

0x76fa,	// (0x0001ed5d) form_field_popup_pane

0x7712,	// (0x0001ed75) form_field_popup_wide_pane_ParamLimits

0x7712,	// (0x0001ed75) form_field_popup_wide_pane

0x3518,	// (0x0001ab7b) form_field_slider_pane_ParamLimits

0x3518,	// (0x0001ab7b) form_field_slider_pane

0x352b,	// (0x0001ab8e) form_field_slider_wide_pane_ParamLimits

0x352b,	// (0x0001ab8e) form_field_slider_wide_pane

0xb808,	// (0x00022e6b) data_form_pane

0x8092,	// (0x0001f6f5) form_field_data_pane_t1

0xb814,	// (0x00022e77) input_focus_pane

0xb822,	// (0x00022e85) data_form_wide_pane

0x3552,	// (0x0001abb5) form_field_data_wide_pane_t1

0xb63a,	// (0x00022c9d) input_focus_pane_cp6

0x7733,	// (0x0001ed96) form_field_popup_pane_t1

0xb814,	// (0x00022e77) input_focus_pane_cp7

0xb808,	// (0x00022e6b) list_form_pane

0x3594,	// (0x0001abf7) form_field_popup_wide_pane_t1

0xb814,	// (0x00022e77) input_focus_pane_cp8

0xb84e,	// (0x00022eb1) list_form_wide_pane

0x7753,	// (0x0001edb6) form_field_slider_pane_t1_ParamLimits

0x7753,	// (0x0001edb6) form_field_slider_pane_t1

0x7769,	// (0x0001edcc) form_field_slider_pane_t2_ParamLimits

0x7769,	// (0x0001edcc) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00026ce5) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00026ce5) form_field_slider_pane_t

0xb264,	// (0x000228c7) input_focus_pane_cp9_ParamLimits

0xb264,	// (0x000228c7) input_focus_pane_cp9

0x777e,	// (0x0001ede1) slider_cont_pane_ParamLimits

0x777e,	// (0x0001ede1) slider_cont_pane

0xb85d,	// (0x00022ec0) form_field_slider_wide_pane_t1_ParamLimits

0xb85d,	// (0x00022ec0) form_field_slider_wide_pane_t1

0x35e9,	// (0x0001ac4c) form_field_slider_wide_pane_t2_ParamLimits

0x35e9,	// (0x0001ac4c) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00026cea) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00026cea) form_field_slider_wide_pane_t

0xb264,	// (0x000228c7) input_focus_pane_cp10_ParamLimits

0xb264,	// (0x000228c7) input_focus_pane_cp10

0x7792,	// (0x0001edf5) slider_cont_pane_cp1_ParamLimits

0x7792,	// (0x0001edf5) slider_cont_pane_cp1

0x77a8,	// (0x0001ee0b) slider_form_pane_cp

0xb86f,	// (0x00022ed2) input_focus_pane_g1

0xb877,	// (0x00022eda) input_focus_pane_g2

0xb87f,	// (0x00022ee2) input_focus_pane_g3

0xb887,	// (0x00022eea) input_focus_pane_g4

0xb88f,	// (0x00022ef2) input_focus_pane_g5

0xb897,	// (0x00022efa) input_focus_pane_g6

0xb89f,	// (0x00022f02) input_focus_pane_g7

0xb8a7,	// (0x00022f0a) input_focus_pane_g8

0xb8af,	// (0x00022f12) input_focus_pane_g9

0xb194,	// (0x000227f7) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00026cef) input_focus_pane_g

0xcace,	// (0x00024131) wait_border_pane_g3_copy1

0x77b0,	// (0x0001ee13) data_form_pane_t1

0xb194,	// (0x000227f7) wait_anim_pane_g1_copy1

0x78cc,	// (0x0001ef2f) data_form_wide_pane_t1

0x77c9,	// (0x0001ee2c) list_form_graphic_pane_cp_ParamLimits

0x77c9,	// (0x0001ee2c) list_form_graphic_pane_cp

0xd679,	// (0x00024cdc) slider_form_pane_g1

0xd682,	// (0x00024ce5) slider_form_pane_g2

0x0006,

0xf97c,	// (0x00026fdf) slider_form_pane_g

0x77dd,	// (0x0001ee40) list_form_graphic_pane_ParamLimits

0x77dd,	// (0x0001ee40) list_form_graphic_pane

0x3649,	// (0x0001acac) list_form_graphic_pane_g1

0x3651,	// (0x0001acb4) list_form_graphic_pane_t1_ParamLimits

0x3651,	// (0x0001acb4) list_form_graphic_pane_t1

0xb27a,	// (0x000228dd) list_highlight_pane_cp5_ParamLimits

0xb27a,	// (0x000228dd) list_highlight_pane_cp5

0x77f2,	// (0x0001ee55) find_pane_g1

0xb8b7,	// (0x00022f1a) input_find_pane

0x77fd,	// (0x0001ee60) input_find_pane_g1_ParamLimits

0x77fd,	// (0x0001ee60) input_find_pane_g1

0x367b,	// (0x0001acde) input_find_pane_t1_ParamLimits

0x367b,	// (0x0001acde) input_find_pane_t1

0x3690,	// (0x0001acf3) input_find_pane_t2_ParamLimits

0x3690,	// (0x0001acf3) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00026d04) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00026d04) input_find_pane_t

0xb8c0,	// (0x00022f23) input_focus_pane_cp5_ParamLimits

0xb8c0,	// (0x00022f23) input_focus_pane_cp5

0xb264,	// (0x000228c7) bg_popup_window_pane_cp2_ParamLimits

0xb264,	// (0x000228c7) bg_popup_window_pane_cp2

0xb8da,	// (0x00022f3d) listscroll_menu_pane_ParamLimits

0xb8da,	// (0x00022f3d) listscroll_menu_pane

0xb8e6,	// (0x00022f49) popup_submenu_window_ParamLimits

0xb8e6,	// (0x00022f49) popup_submenu_window

0xb90a,	// (0x00022f6d) find_popup_pane_g1

0xb912,	// (0x00022f75) input_popup_find_pane_cp

0xb8c0,	// (0x00022f23) input_focus_pane_cp4_ParamLimits

0xb8c0,	// (0x00022f23) input_focus_pane_cp4

0xb91c,	// (0x00022f7f) input_popup_find_pane_t1_ParamLimits

0xb91c,	// (0x00022f7f) input_popup_find_pane_t1

0xb216,	// (0x00022879) bg_popup_sub_pane_cp

0xb94a,	// (0x00022fad) listscroll_popup_sub_pane

0xb952,	// (0x00022fb5) list_submenu_pane_ParamLimits

0xb952,	// (0x00022fb5) list_submenu_pane

0xb963,	// (0x00022fc6) scroll_pane_cp4

0xb96b,	// (0x00022fce) list_single_popup_submenu_pane_ParamLimits

0xb96b,	// (0x00022fce) list_single_popup_submenu_pane

0xb97d,	// (0x00022fe0) list_single_popup_submenu_pane_g1

0xb985,	// (0x00022fe8) list_single_popup_submenu_pane_t1_ParamLimits

0xb985,	// (0x00022fe8) list_single_popup_submenu_pane_t1

0xb264,	// (0x000228c7) bg_active_tab_pane_cp1_ParamLimits

0xb264,	// (0x000228c7) bg_active_tab_pane_cp1

0xd72e,	// (0x00024d91) tabs_2_active_pane_g1

0x80b6,	// (0x0001f719) tabs_2_active_pane_t1

0xb264,	// (0x000228c7) bg_passive_tab_pane_cp1_ParamLimits

0xb264,	// (0x000228c7) bg_passive_tab_pane_cp1

0xd72e,	// (0x00024d91) tabs_2_passive_pane_g1

0x80b6,	// (0x0001f719) tabs_2_passive_pane_t1

0xb27a,	// (0x000228dd) bg_active_tab_pane_cp4

0x80cc,	// (0x0001f72f) tabs_2_long_active_pane_t1

0xb99a,	// (0x00022ffd) bg_passive_tab_pane_cp4

0xc61c,	// (0x00023c7f) list_single_midp_graphic_pane_g4_ParamLimits

0xb27a,	// (0x000228dd) bg_active_tab_pane_cp5

0x80e3,	// (0x0001f746) tabs_3_long_active_pane_t1

0xb99a,	// (0x00022ffd) bg_passive_tab_pane_cp5

0xc61c,	// (0x00023c7f) list_single_midp_graphic_pane_g4

0xb27a,	// (0x000228dd) bg_popup_window_pane_cp13_ParamLimits

0xb27a,	// (0x000228dd) bg_popup_window_pane_cp13

0xb9af,	// (0x00023012) listscroll_popup_fast_pane_ParamLimits

0xb9af,	// (0x00023012) listscroll_popup_fast_pane

0xb9be,	// (0x00023021) grid_popup_fast_pane_ParamLimits

0xb9be,	// (0x00023021) grid_popup_fast_pane

0xb9d0,	// (0x00023033) scroll_pane_cp9_ParamLimits

0xb9d0,	// (0x00023033) scroll_pane_cp9

0xe9c5,	// (0x00026028) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe9c5,	// (0x00026028) list_single_graphic_hl_pane_t1_cp2

0xb9f4,	// (0x00023057) input_focus_pane_cp20_ParamLimits

0xb9f4,	// (0x00023057) input_focus_pane_cp20

0xba02,	// (0x00023065) query_popup_data_pane_t1_ParamLimits

0xba02,	// (0x00023065) query_popup_data_pane_t1

0xba15,	// (0x00023078) query_popup_data_pane_t2_ParamLimits

0xba15,	// (0x00023078) query_popup_data_pane_t2

0xba5b,	// (0x000230be) query_popup_data_pane_t3_ParamLimits

0xba5b,	// (0x000230be) query_popup_data_pane_t3

0xba9c,	// (0x000230ff) query_popup_data_pane_t4_ParamLimits

0xba9c,	// (0x000230ff) query_popup_data_pane_t4

0xbad8,	// (0x0002313b) query_popup_data_pane_t5_ParamLimits

0xbad8,	// (0x0002313b) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00026d09) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00026d09) query_popup_data_pane_t

0xb86f,	// (0x00022ed2) bg_set_opt_pane_g1

0xb877,	// (0x00022eda) bg_set_opt_pane_g2

0xb87f,	// (0x00022ee2) bg_set_opt_pane_g3

0xb887,	// (0x00022eea) bg_set_opt_pane_g4

0xb88f,	// (0x00022ef2) bg_set_opt_pane_g5

0xb897,	// (0x00022efa) bg_set_opt_pane_g6

0xb89f,	// (0x00022f02) bg_set_opt_pane_g7

0xb8a7,	// (0x00022f0a) bg_set_opt_pane_g8

0xb8af,	// (0x00022f12) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00026d14) bg_set_opt_pane_g

0x452f,	// (0x0001bb92) control_top_pane_stacon_ParamLimits

0x452f,	// (0x0001bb92) control_top_pane_stacon

0x4582,	// (0x0001bbe5) signal_pane_stacon_ParamLimits

0x4582,	// (0x0001bbe5) signal_pane_stacon

0xbecb,	// (0x0002352e) stacon_top_pane_g1_ParamLimits

0xbecb,	// (0x0002352e) stacon_top_pane_g1

0x45a7,	// (0x0001bc0a) title_pane_stacon_ParamLimits

0x45a7,	// (0x0001bc0a) title_pane_stacon

0x45c9,	// (0x0001bc2c) uni_indicator_pane_stacon_ParamLimits

0x45c9,	// (0x0001bc2c) uni_indicator_pane_stacon

0x45de,	// (0x0001bc41) battery_pane_stacon_ParamLimits

0x45de,	// (0x0001bc41) battery_pane_stacon

0x461e,	// (0x0001bc81) control_bottom_pane_stacon_ParamLimits

0x461e,	// (0x0001bc81) control_bottom_pane_stacon

0x463d,	// (0x0001bca0) navi_pane_stacon_ParamLimits

0x463d,	// (0x0001bca0) navi_pane_stacon

0xbeed,	// (0x00023550) stacon_bottom_pane_g1_ParamLimits

0xbeed,	// (0x00023550) stacon_bottom_pane_g1

0xbb0f,	// (0x00023172) aid_levels_signal_lsc_ParamLimits

0xbb0f,	// (0x00023172) aid_levels_signal_lsc

0x42fb,	// (0x0001b95e) signal_pane_stacon_g1_ParamLimits

0x42fb,	// (0x0001b95e) signal_pane_stacon_g1

0x4307,	// (0x0001b96a) signal_pane_stacon_g2_ParamLimits

0x4307,	// (0x0001b96a) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00026d27) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00026d27) signal_pane_stacon_g

0x433b,	// (0x0001b99e) title_pane_stacon_t1_ParamLimits

0x433b,	// (0x0001b99e) title_pane_stacon_t1

0xbb29,	// (0x0002318c) uni_indicator_pane_stacon_g1

0xbb33,	// (0x00023196) uni_indicator_pane_stacon_g2

0xbb3d,	// (0x000231a0) uni_indicator_pane_stacon_g3

0xbb47,	// (0x000231aa) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00026d33) uni_indicator_pane_stacon_g

0x4360,	// (0x0001b9c3) control_top_pane_stacon_g1

0x4368,	// (0x0001b9cb) control_top_pane_stacon_t1_ParamLimits

0x4368,	// (0x0001b9cb) control_top_pane_stacon_t1

0xbb51,	// (0x000231b4) aid_levels_battery_lsc_ParamLimits

0xbb51,	// (0x000231b4) aid_levels_battery_lsc

0x4399,	// (0x0001b9fc) battery_pane_stacon_g1_ParamLimits

0x4399,	// (0x0001b9fc) battery_pane_stacon_g1

0x43a5,	// (0x0001ba08) battery_pane_stacon_g2_ParamLimits

0x43a5,	// (0x0001ba08) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00026d3c) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00026d3c) battery_pane_stacon_g

0x43d4,	// (0x0001ba37) navi_icon_pane_stacon

0x43e4,	// (0x0001ba47) navi_navi_pane_stacon

0x43d4,	// (0x0001ba37) navi_text_pane_stacon

0x4360,	// (0x0001b9c3) control_bottom_pane_stacon_g1

0x43f4,	// (0x0001ba57) control_bottom_pane_stacon_t1_ParamLimits

0x43f4,	// (0x0001ba57) control_bottom_pane_stacon_t1

0x80f9,	// (0x0001f75c) grid_app_pane_ParamLimits

0x80f9,	// (0x0001f75c) grid_app_pane

0x8127,	// (0x0001f78a) scroll_pane_cp15_ParamLimits

0x8127,	// (0x0001f78a) scroll_pane_cp15

0x813a,	// (0x0001f79d) cell_app_pane_ParamLimits

0x813a,	// (0x0001f79d) cell_app_pane

0x8177,	// (0x0001f7da) cell_app_pane_g1_ParamLimits

0x8177,	// (0x0001f7da) cell_app_pane_g1

0xbb79,	// (0x000231dc) cell_app_pane_g2_ParamLimits

0xbb79,	// (0x000231dc) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00026d41) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00026d41) cell_app_pane_g

0x819b,	// (0x0001f7fe) cell_app_pane_t1_ParamLimits

0x819b,	// (0x0001f7fe) cell_app_pane_t1

0xbb85,	// (0x000231e8) grid_highlight_pane_ParamLimits

0xbb85,	// (0x000231e8) grid_highlight_pane

0xb86f,	// (0x00022ed2) cell_highlight_pane_g1

0xb877,	// (0x00022eda) cell_highlight_pane_g2

0xb87f,	// (0x00022ee2) cell_highlight_pane_g3

0xb887,	// (0x00022eea) cell_highlight_pane_g4

0xb88f,	// (0x00022ef2) cell_highlight_pane_g5

0xb897,	// (0x00022efa) cell_highlight_pane_g6

0xb89f,	// (0x00022f02) cell_highlight_pane_g7

0xb8a7,	// (0x00022f0a) cell_highlight_pane_g8

0xb8af,	// (0x00022f12) cell_highlight_pane_g9

0xb194,	// (0x000227f7) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00026cef) cell_highlight_pane_g

0xbb96,	// (0x000231f9) bg_scroll_pane

0x4438,	// (0x0001ba9b) scroll_handle_pane

0xbbdd,	// (0x00023240) scroll_bg_pane_g1

0xbbf2,	// (0x00023255) scroll_bg_pane_g2

0xbc0a,	// (0x0002326d) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00026d46) scroll_bg_pane_g

0xbc1f,	// (0x00023282) scroll_handle_focus_pane_ParamLimits

0xbc1f,	// (0x00023282) scroll_handle_focus_pane

0xbbdd,	// (0x00023240) scroll_handle_pane_g1

0xbc2c,	// (0x0002328f) scroll_handle_pane_g2

0xbc0a,	// (0x0002326d) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00026d4d) scroll_handle_pane_g

0xb8c0,	// (0x00022f23) bg_popup_sub_pane_cp21_ParamLimits

0xb8c0,	// (0x00022f23) bg_popup_sub_pane_cp21

0xbc40,	// (0x000232a3) popup_fep_japan_predictive_window_t1_ParamLimits

0xbc40,	// (0x000232a3) popup_fep_japan_predictive_window_t1

0xbc57,	// (0x000232ba) popup_fep_japan_predictive_window_t2_ParamLimits

0xbc57,	// (0x000232ba) popup_fep_japan_predictive_window_t2

0xbc8a,	// (0x000232ed) popup_fep_japan_predictive_window_t3_ParamLimits

0xbc8a,	// (0x000232ed) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00026d54) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00026d54) popup_fep_japan_predictive_window_t

0xb216,	// (0x00022879) bg_popup_sub_pane_cp23

0xbcc1,	// (0x00023324) listscroll_japin_cand_pane

0xbcc9,	// (0x0002332c) popup_fep_japan_candidate_window_t1

0xbcd7,	// (0x0002333a) candidate_pane_ParamLimits

0xbcd7,	// (0x0002333a) candidate_pane

0xbcea,	// (0x0002334d) scroll_pane_cp30

0xbcf2,	// (0x00023355) list_single_popup_jap_candidate_pane_ParamLimits

0xbcf2,	// (0x00023355) list_single_popup_jap_candidate_pane

0xb216,	// (0x00022879) list_highlight_pane_cp30

0xbd07,	// (0x0002336a) list_single_popup_jap_candidate_pane_t1

0x81bb,	// (0x0001f81e) level_1_signal

0x81cd,	// (0x0001f830) level_2_signal

0x81e0,	// (0x0001f843) level_3_signal

0x81f3,	// (0x0001f856) level_4_signal

0x8206,	// (0x0001f869) level_5_signal

0x8219,	// (0x0001f87c) level_6_signal

0x822c,	// (0x0001f88f) level_7_signal

0x81bb,	// (0x0001f81e) level_1_battery

0x81cd,	// (0x0001f830) level_2_battery

0x81e0,	// (0x0001f843) level_3_battery

0x81f3,	// (0x0001f856) level_4_battery

0x8206,	// (0x0001f869) level_5_battery

0x8219,	// (0x0001f87c) level_6_battery

0x822c,	// (0x0001f88f) level_7_battery

0xbd2e,	// (0x00023391) list_menu_pane_ParamLimits

0xbd2e,	// (0x00023391) list_menu_pane

0xbd44,	// (0x000233a7) scroll_pane_cp25_ParamLimits

0xbd44,	// (0x000233a7) scroll_pane_cp25

0x823f,	// (0x0001f8a2) list_double2_graphic_pane_cp2_ParamLimits

0x823f,	// (0x0001f8a2) list_double2_graphic_pane_cp2

0x823f,	// (0x0001f8a2) list_double2_large_graphic_pane_cp2_ParamLimits

0x823f,	// (0x0001f8a2) list_double2_large_graphic_pane_cp2

0x823f,	// (0x0001f8a2) list_double2_pane_cp2_ParamLimits

0x823f,	// (0x0001f8a2) list_double2_pane_cp2

0x823f,	// (0x0001f8a2) list_double_graphic_pane_cp2_ParamLimits

0x823f,	// (0x0001f8a2) list_double_graphic_pane_cp2

0x823f,	// (0x0001f8a2) list_double_large_graphic_pane_cp2_ParamLimits

0x823f,	// (0x0001f8a2) list_double_large_graphic_pane_cp2

0x823f,	// (0x0001f8a2) list_double_number_pane_cp2_ParamLimits

0x823f,	// (0x0001f8a2) list_double_number_pane_cp2

0x823f,	// (0x0001f8a2) list_double_pane_cp2_ParamLimits

0x823f,	// (0x0001f8a2) list_double_pane_cp2

0x825a,	// (0x0001f8bd) list_single_2graphic_pane_cp2_ParamLimits

0x825a,	// (0x0001f8bd) list_single_2graphic_pane_cp2

0x825a,	// (0x0001f8bd) list_single_graphic_heading_pane_cp2_ParamLimits

0x825a,	// (0x0001f8bd) list_single_graphic_heading_pane_cp2

0x825a,	// (0x0001f8bd) list_single_graphic_pane_cp2_ParamLimits

0x825a,	// (0x0001f8bd) list_single_graphic_pane_cp2

0x825a,	// (0x0001f8bd) list_single_heading_pane_cp2_ParamLimits

0x825a,	// (0x0001f8bd) list_single_heading_pane_cp2

0x826b,	// (0x0001f8ce) list_single_large_graphic_pane_cp2_ParamLimits

0x826b,	// (0x0001f8ce) list_single_large_graphic_pane_cp2

0x825a,	// (0x0001f8bd) list_single_number_heading_pane_cp2_ParamLimits

0x825a,	// (0x0001f8bd) list_single_number_heading_pane_cp2

0x825a,	// (0x0001f8bd) list_single_number_pane_cp2_ParamLimits

0x825a,	// (0x0001f8bd) list_single_number_pane_cp2

0x825a,	// (0x0001f8bd) list_single_pane_cp2_ParamLimits

0x825a,	// (0x0001f8bd) list_single_pane_cp2

0xbd66,	// (0x000233c9) bg_popup_sub_pane_cp22

0x44e7,	// (0x0001bb4a) popup_side_volume_key_window_g1

0x450b,	// (0x0001bb6e) popup_side_volume_key_window_t1

0x4527,	// (0x0001bb8a) volume_small_pane_cp1

0xb264,	// (0x000228c7) bg_popup_sub_pane_cp24_ParamLimits

0xb264,	// (0x000228c7) bg_popup_sub_pane_cp24

0xbd7c,	// (0x000233df) fep_china_uni_candidate_pane_ParamLimits

0xbd7c,	// (0x000233df) fep_china_uni_candidate_pane

0xbd90,	// (0x000233f3) fep_china_uni_entry_pane

0xbda0,	// (0x00023403) popup_fep_china_uni_window_g1

0xbdbc,	// (0x0002341f) fep_china_uni_entry_pane_g1

0xbdc4,	// (0x00023427) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00026d85) fep_china_uni_entry_pane_g

0xbdcc,	// (0x0002342f) fep_entry_item_pane

0xbdd6,	// (0x00023439) fep_candidate_item_pane

0xbdde,	// (0x00023441) fep_china_uni_candidate_pane_g1

0xbde6,	// (0x00023449) fep_china_uni_candidate_pane_g2

0xbdee,	// (0x00023451) fep_china_uni_candidate_pane_g3

0xbdf6,	// (0x00023459) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00026d8a) fep_china_uni_candidate_pane_g

0xb194,	// (0x000227f7) fep_entry_item_pane_g1

0xbdfe,	// (0x00023461) fep_entry_item_pane_t1_ParamLimits

0xbdfe,	// (0x00023461) fep_entry_item_pane_t1

0xbe14,	// (0x00023477) fep_candidate_item_pane_t1_ParamLimits

0xbe14,	// (0x00023477) fep_candidate_item_pane_t1

0xbe29,	// (0x0002348c) fep_candidate_item_pane_t2_ParamLimits

0xbe29,	// (0x0002348c) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00026d93) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00026d93) fep_candidate_item_pane_t

0xb27a,	// (0x000228dd) list_highlight_pane_cp31_ParamLimits

0xb27a,	// (0x000228dd) list_highlight_pane_cp31

0xbe3b,	// (0x0002349e) level_1_signal_lsc

0xbe44,	// (0x000234a7) level_2_signal_lsc

0xbe4d,	// (0x000234b0) level_3_signal_lsc

0xbe56,	// (0x000234b9) level_4_signal_lsc

0xbe5f,	// (0x000234c2) level_5_signal_lsc

0xbe68,	// (0x000234cb) level_6_signal_lsc

0xbe71,	// (0x000234d4) level_7_signal_lsc

0xbe71,	// (0x000234d4) level_1_battery_lsc

0xbe7a,	// (0x000234dd) level_2_battery_lsc

0xbe83,	// (0x000234e6) level_3_battery_lsc

0xbe8c,	// (0x000234ef) level_4_battery_lsc

0xbe95,	// (0x000234f8) level_5_battery_lsc

0xbe9e,	// (0x00023501) level_6_battery_lsc

0xbe3b,	// (0x0002349e) level_7_battery_lsc

0xbea7,	// (0x0002350a) scroll_handle_focus_pane_g1

0xbeb0,	// (0x00023513) scroll_handle_focus_pane_g2

0xbeb9,	// (0x0002351c) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00026d98) scroll_handle_focus_pane_g

0x36a5,	// (0x0001ad08) list_single_2graphic_pane_g1_ParamLimits

0x36a5,	// (0x0001ad08) list_single_2graphic_pane_g1

0x7350,	// (0x0001e9b3) list_single_2graphic_pane_g2_ParamLimits

0x7350,	// (0x0001e9b3) list_single_2graphic_pane_g2

0x376d,	// (0x0001add0) list_single_2graphic_pane_g3_ParamLimits

0x376d,	// (0x0001add0) list_single_2graphic_pane_g3

0x7809,	// (0x0001ee6c) list_single_2graphic_pane_g4_ParamLimits

0x7809,	// (0x0001ee6c) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00026d9f) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00026d9f) list_single_2graphic_pane_g

0x7815,	// (0x0001ee78) list_single_2graphic_pane_t1_ParamLimits

0x7815,	// (0x0001ee78) list_single_2graphic_pane_t1

0x7843,	// (0x0001eea6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7843,	// (0x0001eea6) list_double2_graphic_large_graphic_pane_g1

0x74ef,	// (0x0001eb52) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x74ef,	// (0x0001eb52) list_double2_graphic_large_graphic_pane_g2

0x7500,	// (0x0001eb63) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7500,	// (0x0001eb63) list_double2_graphic_large_graphic_pane_g3

0x7853,	// (0x0001eeb6) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7853,	// (0x0001eeb6) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00026da8) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00026da8) list_double2_graphic_large_graphic_pane_g

0x785f,	// (0x0001eec2) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x785f,	// (0x0001eec2) list_double2_graphic_large_graphic_pane_t1

0x7875,	// (0x0001eed8) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7875,	// (0x0001eed8) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00026db1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00026db1) list_double2_graphic_large_graphic_pane_t

0xbf94,	// (0x000235f7) popup_fast_swap_window_ParamLimits

0xbf94,	// (0x000235f7) popup_fast_swap_window

0xbfb0,	// (0x00023613) popup_side_volume_key_window

0xbfca,	// (0x0002362d) stacon_top_pane

0xbfd4,	// (0x00023637) status_pane_ParamLimits

0xbfd4,	// (0x00023637) status_pane

0x833a,	// (0x0001f99d) status_small_pane

0xb216,	// (0x00022879) control_pane

0xb216,	// (0x00022879) stacon_bottom_pane

0xb7bb,	// (0x00022e1e) scroll_pane_cp121

0xb7ff,	// (0x00022e62) set_content_pane

0xd736,	// (0x00024d99) bg_active_tab_pane_g1_cp1

0xbec2,	// (0x00023525) bg_active_tab_pane_g2_cp1

0xd73f,	// (0x00024da2) bg_active_tab_pane_g3_cp1

0xd736,	// (0x00024d99) bg_passive_tab_pane_g1_cp1

0xbec2,	// (0x00023525) bg_passive_tab_pane_g2_cp1

0xd73f,	// (0x00024da2) bg_passive_tab_pane_g3_cp1

0x82f0,	// (0x0001f953) bg_active_tab_pane_g1_cp2

0xbec2,	// (0x00023525) bg_active_tab_pane_g2_cp2

0x82f9,	// (0x0001f95c) bg_active_tab_pane_g3_cp2

0x82f0,	// (0x0001f953) bg_passive_tab_pane_g1_cp2

0xbec2,	// (0x00023525) bg_passive_tab_pane_g2_cp2

0x82f9,	// (0x0001f95c) bg_passive_tab_pane_g3_cp2

0x8302,	// (0x0001f965) bg_active_tab_pane_g1_cp3

0xbec2,	// (0x00023525) bg_active_tab_pane_g2_cp3

0x830b,	// (0x0001f96e) bg_active_tab_pane_g3_cp3

0x8302,	// (0x0001f965) bg_passive_tab_pane_g1_cp3

0xbec2,	// (0x00023525) bg_passive_tab_pane_g2_cp3

0x830b,	// (0x0001f96e) bg_passive_tab_pane_g3_cp3

0x8314,	// (0x0001f977) bg_active_tab_pane_g1_cp4

0xbec2,	// (0x00023525) bg_active_tab_pane_g2_cp4

0x831d,	// (0x0001f980) bg_active_tab_pane_g3_cp4

0x8314,	// (0x0001f977) bg_passive_tab_pane_g1_cp4

0xbec2,	// (0x00023525) bg_passive_tab_pane_g2_cp4

0x831d,	// (0x0001f980) bg_passive_tab_pane_g3_cp4

0xbf09,	// (0x0002356c) bg_active_tab_pane_g1_cp5

0xbec2,	// (0x00023525) bg_active_tab_pane_g2_cp5

0xbf12,	// (0x00023575) bg_active_tab_pane_g3_cp5

0xbf09,	// (0x0002356c) bg_passive_tab_pane_g1_cp5

0xbec2,	// (0x00023525) bg_passive_tab_pane_g2_cp5

0xbf12,	// (0x00023575) bg_passive_tab_pane_g3_cp5

0x8326,	// (0x0001f989) list_set_graphic_pane_ParamLimits

0x8326,	// (0x0001f989) list_set_graphic_pane

0xb216,	// (0x00022879) bg_set_opt_pane_cp4

0xbf1b,	// (0x0002357e) list_set_graphic_pane_g1_ParamLimits

0xbf1b,	// (0x0002357e) list_set_graphic_pane_g1

0xbf27,	// (0x0002358a) list_set_graphic_pane_g2_ParamLimits

0xbf27,	// (0x0002358a) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00026db6) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00026db6) list_set_graphic_pane_g

0x0009,

0xfaca,	// (0x0002712d) volume_small_pane_cp_g

0xbf49,	// (0x000235ac) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xbf49,	// (0x000235ac) list_double2_large_graphic_pane_g1_cp2

0xbf55,	// (0x000235b8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbf55,	// (0x000235b8) list_double2_large_graphic_pane_g2_cp2

0xbf64,	// (0x000235c7) list_double2_large_graphic_pane_g3_cp2

0xbf6c,	// (0x000235cf) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbf6c,	// (0x000235cf) list_double2_large_graphic_pane_t1_cp2

0xbf82,	// (0x000235e5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbf82,	// (0x000235e5) list_double2_large_graphic_pane_t2_cp2

0xd43d,	// (0x00024aa0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd43d,	// (0x00024aa0) list_double_large_graphic_pane_g1_cp2

0xd44e,	// (0x00024ab1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd44e,	// (0x00024ab1) list_double_large_graphic_pane_g2_cp2

0xc0af,	// (0x00023712) list_double_large_graphic_pane_g3_cp2

0xd45d,	// (0x00024ac0) list_double_large_graphic_pane_g4_cp

0xd465,	// (0x00024ac8) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd465,	// (0x00024ac8) list_double_large_graphic_pane_t1_cp2

0xd47c,	// (0x00024adf) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd47c,	// (0x00024adf) list_double_large_graphic_pane_t2_cp2

0xbfe2,	// (0x00023645) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbfe2,	// (0x00023645) list_double2_graphic_pane_g1_cp2

0xbfee,	// (0x00023651) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbfee,	// (0x00023651) list_double2_graphic_pane_g2_cp2

0xbffd,	// (0x00023660) list_double2_graphic_pane_g3_cp2

0xc005,	// (0x00023668) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc005,	// (0x00023668) list_double2_graphic_pane_t1_cp2

0xc01b,	// (0x0002367e) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc01b,	// (0x0002367e) list_double2_graphic_pane_t2_cp2

0xc02d,	// (0x00023690) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc02d,	// (0x00023690) list_single_number_heading_pane_g1_cp2

0xc039,	// (0x0002369c) list_single_number_heading_pane_g2_cp2

0xc041,	// (0x000236a4) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc041,	// (0x000236a4) list_single_number_heading_pane_t1_cp2

0xc057,	// (0x000236ba) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc057,	// (0x000236ba) list_single_number_heading_pane_t2_cp2

0xc069,	// (0x000236cc) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc069,	// (0x000236cc) list_single_number_heading_pane_t3_cp2

0xc02d,	// (0x00023690) list_single_heading_pane_g1_cp2_ParamLimits

0xc02d,	// (0x00023690) list_single_heading_pane_g1_cp2

0xc039,	// (0x0002369c) list_single_heading_pane_g2_cp2

0xc041,	// (0x000236a4) list_single_heading_pane_t1_cp2_ParamLimits

0xc041,	// (0x000236a4) list_single_heading_pane_t1_cp2

0xd247,	// (0x000248aa) list_single_heading_pane_t2_cp2_ParamLimits

0xd247,	// (0x000248aa) list_single_heading_pane_t2_cp2

0xd1cc,	// (0x0002482f) list_double_graphic_pane_g1_cp2_ParamLimits

0xd1cc,	// (0x0002482f) list_double_graphic_pane_g1_cp2

0xd1d8,	// (0x0002483b) list_double_graphic_pane_g2_cp2_ParamLimits

0xd1d8,	// (0x0002483b) list_double_graphic_pane_g2_cp2

0xd1e7,	// (0x0002484a) list_double_graphic_pane_g3_cp2

0xd1ef,	// (0x00024852) list_double_graphic_pane_t1_cp2_ParamLimits

0xd1ef,	// (0x00024852) list_double_graphic_pane_t1_cp2

0xd205,	// (0x00024868) list_double_graphic_pane_t2_cp2_ParamLimits

0xd205,	// (0x00024868) list_double_graphic_pane_t2_cp2

0xc0a3,	// (0x00023706) list_double_number_pane_g1_cp2_ParamLimits

0xc0a3,	// (0x00023706) list_double_number_pane_g1_cp2

0xc0af,	// (0x00023712) list_double_number_pane_g2_cp2

0xd192,	// (0x000247f5) list_double_number_pane_t1_cp2_ParamLimits

0xd192,	// (0x000247f5) list_double_number_pane_t1_cp2

0xd1a4,	// (0x00024807) list_double_number_pane_t2_cp2_ParamLimits

0xd1a4,	// (0x00024807) list_double_number_pane_t2_cp2

0xd1ba,	// (0x0002481d) list_double_number_pane_t3_cp2_ParamLimits

0xd1ba,	// (0x0002481d) list_double_number_pane_t3_cp2

0xd10a,	// (0x0002476d) list_single_graphic_pane_g1_cp2_ParamLimits

0xd10a,	// (0x0002476d) list_single_graphic_pane_g1_cp2

0xc02d,	// (0x00023690) list_single_graphic_pane_g2_cp2_ParamLimits

0xc02d,	// (0x00023690) list_single_graphic_pane_g2_cp2

0xc039,	// (0x0002369c) list_single_graphic_pane_g3_cp2

0xd0e2,	// (0x00024745) list_single_graphic_pane_t1_cp2_ParamLimits

0xd0e2,	// (0x00024745) list_single_graphic_pane_t1_cp2

0xc02d,	// (0x00023690) list_single_number_pane_g1_cp2_ParamLimits

0xc02d,	// (0x00023690) list_single_number_pane_g1_cp2

0xc039,	// (0x0002369c) list_single_number_pane_g2_cp2

0xd0e2,	// (0x00024745) list_single_number_pane_t1_cp2_ParamLimits

0xd0e2,	// (0x00024745) list_single_number_pane_t1_cp2

0xd0f8,	// (0x0002475b) list_single_number_pane_t2_cp2_ParamLimits

0xd0f8,	// (0x0002475b) list_single_number_pane_t2_cp2

0xbf55,	// (0x000235b8) list_double2_pane_g1_cp2_ParamLimits

0xbf55,	// (0x000235b8) list_double2_pane_g1_cp2

0xbf64,	// (0x000235c7) list_double2_pane_g2_cp2

0xc07b,	// (0x000236de) list_double2_pane_t1_cp2_ParamLimits

0xc07b,	// (0x000236de) list_double2_pane_t1_cp2

0xc091,	// (0x000236f4) list_double2_pane_t2_cp2_ParamLimits

0xc091,	// (0x000236f4) list_double2_pane_t2_cp2

0xc0a3,	// (0x00023706) list_double_pane_g1_cp2_ParamLimits

0xc0a3,	// (0x00023706) list_double_pane_g1_cp2

0xc0af,	// (0x00023712) list_double_pane_g2_cp2

0xc0b7,	// (0x0002371a) list_double_pane_t1_cp2_ParamLimits

0xc0b7,	// (0x0002371a) list_double_pane_t1_cp2

0xc0cd,	// (0x00023730) list_double_pane_t2_cp2_ParamLimits

0xc0cd,	// (0x00023730) list_double_pane_t2_cp2

0xc0f5,	// (0x00023758) list_single_pane_cp2_g3

0xc02d,	// (0x00023690) list_single_pane_g1_cp2_ParamLimits

0xc02d,	// (0x00023690) list_single_pane_g1_cp2

0xc039,	// (0x0002369c) list_single_pane_g2_cp2

0xc105,	// (0x00023768) list_single_pane_t1_cp2_ParamLimits

0xc105,	// (0x00023768) list_single_pane_t1_cp2

0xc11d,	// (0x00023780) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc11d,	// (0x00023780) list_single_large_graphic_pane_g1_cp2

0xc129,	// (0x0002378c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc129,	// (0x0002378c) list_single_large_graphic_pane_g2_cp2

0xc135,	// (0x00023798) list_single_large_graphic_pane_g3_cp2

0xc13d,	// (0x000237a0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc13d,	// (0x000237a0) list_single_large_graphic_pane_g4_cp1

0xc157,	// (0x000237ba) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc157,	// (0x000237ba) list_single_large_graphic_pane_t1_cp2

0xd0c4,	// (0x00024727) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd0c4,	// (0x00024727) list_single_graphic_heading_pane_g1_cp2

0xd09f,	// (0x00024702) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd09f,	// (0x00024702) list_single_graphic_heading_pane_g4_cp2

0xc039,	// (0x0002369c) list_single_graphic_heading_pane_g5_cp2

0xc041,	// (0x000236a4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xc041,	// (0x000236a4) list_single_graphic_heading_pane_t1_cp2

0xd0d0,	// (0x00024733) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd0d0,	// (0x00024733) list_single_graphic_heading_pane_t2_cp2

0xd093,	// (0x000246f6) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd093,	// (0x000246f6) list_single_2graphic_pane_g1_cp2

0xd09f,	// (0x00024702) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd09f,	// (0x00024702) list_single_2graphic_pane_g2_cp2

0xc039,	// (0x0002369c) list_single_2graphic_pane_g3_cp2

0xc61c,	// (0x00023c7f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xc61c,	// (0x00023c7f) list_single_2graphic_pane_g4_cp2

0xd0ae,	// (0x00024711) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd0ae,	// (0x00024711) list_single_2graphic_pane_t1_cp2

0xb194,	// (0x000227f7) list_highlight_pane_g10_cp1

0xcca5,	// (0x00024308) list_highlight_pane_g1_cp1

0xccad,	// (0x00024310) list_highlight_pane_g2_cp1

0xccb5,	// (0x00024318) list_highlight_pane_g3_cp1

0xccbd,	// (0x00024320) list_highlight_pane_g4_cp1

0xccc5,	// (0x00024328) list_highlight_pane_g5_cp1

0xcccd,	// (0x00024330) list_highlight_pane_g6_cp1

0xccd5,	// (0x00024338) list_highlight_pane_g7_cp1

0xccdd,	// (0x00024340) list_highlight_pane_g8_cp1

0xcce5,	// (0x00024348) list_highlight_pane_g9_cp1

0x8fe0,	// (0x00020643) form_field_slider_pane_t3

0x8fee,	// (0x00020651) form_field_slider_pane_t4

0xcbef,	// (0x00024252) slider_form_pane_ParamLimits

0xcbef,	// (0x00024252) slider_form_pane

0xb216,	// (0x00022879) control_abbreviations

0xb216,	// (0x00022879) control_conventions

0xb216,	// (0x00022879) control_definitions

0xb216,	// (0x00022879) format_table_attribute

0xd291,	// (0x000248f4) bg_popup_preview_window_pane_g9

0xb216,	// (0x00022879) format_table_data2

0xb216,	// (0x00022879) format_table_data3

0xb216,	// (0x00022879) format_table_data_example

0x0008,

0xb216,	// (0x00022879) intro_purpose

0xf8dc,	// (0x00026f3f) bg_popup_preview_window_pane_g

0xb216,	// (0x00022879) texts_category

0xb216,	// (0x00022879) texts_graphics

0xc16d,	// (0x000237d0) text_digital

0xc17c,	// (0x000237df) text_primary

0xc18b,	// (0x000237ee) text_primary_small

0xc19a,	// (0x000237fd) text_secondary

0xc1a9,	// (0x0002380c) text_title

0xd78b,	// (0x00024dee) bg_passive_tab_pane_g1_cp3_srt

0xbec2,	// (0x00023525) bg_passive_tab_pane_g2_cp3_srt

0xd794,	// (0x00024df7) bg_passive_tab_pane_g3_cp3_srt

0xb264,	// (0x000228c7) bg_active_tab_pane_cp3_srt_ParamLimits

0xb264,	// (0x000228c7) bg_active_tab_pane_cp3_srt

0xd71e,	// (0x00024d81) tabs_4_active_pane_srt_g1

0x7da9,	// (0x0001f40c) tabs_4_active_pane_srt_t1_ParamLimits

0x7da9,	// (0x0001f40c) tabs_4_active_pane_srt_t1

0xd78b,	// (0x00024dee) bg_active_tab_pane_g1_cp3_copy1

0xbec2,	// (0x00023525) bg_active_tab_pane_g2_cp3_copy1

0xd794,	// (0x00024df7) bg_active_tab_pane_g3_cp3_copy1

0xb27a,	// (0x000228dd) tabs_2_long_active_pane_srt_ParamLimits

0xb27a,	// (0x000228dd) tabs_2_long_active_pane_srt

0xb27a,	// (0x000228dd) tabs_2_long_passive_pane_srt_ParamLimits

0xb27a,	// (0x000228dd) tabs_2_long_passive_pane_srt

0xb99a,	// (0x00022ffd) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb99a,	// (0x00022ffd) bg_passive_tab_pane_cp4_srt

0xd640,	// (0x00024ca3) bg_passive_tab_pane_g1_cp4_srt

0xbec2,	// (0x00023525) bg_passive_tab_pane_g2_cp4_srt

0xd649,	// (0x00024cac) bg_passive_tab_pane_g3_cp4_srt

0xb27a,	// (0x000228dd) bg_active_tab_pane_cp4_srt_ParamLimits

0xb27a,	// (0x000228dd) bg_active_tab_pane_cp4_srt

0x80cc,	// (0x0001f72f) tabs_2_long_active_pane_srt_t1_ParamLimits

0x80cc,	// (0x0001f72f) tabs_2_long_active_pane_srt_t1

0xd640,	// (0x00024ca3) bg_active_tab_pane_g1_cp4_srt

0xbec2,	// (0x00023525) bg_active_tab_pane_g2_cp4_srt

0xd649,	// (0x00024cac) bg_active_tab_pane_g3_cp4_srt

0xb264,	// (0x000228c7) tabs_3_long_active_pane_srt_ParamLimits

0xb264,	// (0x000228c7) tabs_3_long_active_pane_srt

0xb264,	// (0x000228c7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb264,	// (0x000228c7) tabs_3_long_passive_pane_cp_srt

0xb264,	// (0x000228c7) tabs_3_long_passive_pane_srt_ParamLimits

0xb264,	// (0x000228c7) tabs_3_long_passive_pane_srt

0xb99a,	// (0x00022ffd) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb99a,	// (0x00022ffd) bg_passive_tab_pane_cp5_srt

0xbf09,	// (0x0002356c) bg_passive_tab_pane_g1_cp5_srt

0xbec2,	// (0x00023525) bg_passive_tab_pane_g2_cp5_srt

0xbf12,	// (0x00023575) bg_passive_tab_pane_g3_cp5_srt

0xb27a,	// (0x000228dd) bg_active_tab_pane_cp5_srt_ParamLimits

0xb27a,	// (0x000228dd) bg_active_tab_pane_cp5_srt

0x80e3,	// (0x0001f746) tabs_3_long_active_pane_srt_t1_ParamLimits

0x80e3,	// (0x0001f746) tabs_3_long_active_pane_srt_t1

0xbf09,	// (0x0002356c) bg_active_tab_pane_g1_cp5_srt

0xbec2,	// (0x00023525) bg_active_tab_pane_g2_cp5_srt

0xbf12,	// (0x00023575) bg_active_tab_pane_g3_cp5_srt

0xd632,	// (0x00024c95) navi_text_pane_srt_t1

0xd62a,	// (0x00024c8d) navi_icon_pane_srt_g1

0xc2c1,	// (0x00023924) midp_editing_number_pane_srt

0xc1b8,	// (0x0002381b) midp_ticker_pane_srt

0xc2c9,	// (0x0002392c) midp_ticker_pane_srt_g1

0xc2d1,	// (0x00023934) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00026dd5) midp_ticker_pane_srt_g

0xc2d9,	// (0x0002393c) midp_ticker_pane_srt_t1

0xd61b,	// (0x00024c7e) midp_editing_number_pane_t1_copy1

0x8343,	// (0x0001f9a6) listscroll_midp_pane

0x8343,	// (0x0001f9a6) midp_form_pane

0xc1c0,	// (0x00023823) midp_info_popup_window_ParamLimits

0xc1c0,	// (0x00023823) midp_info_popup_window

0xb8c0,	// (0x00022f23) bg_popup_sub_pane_cp50_ParamLimits

0xb8c0,	// (0x00022f23) bg_popup_sub_pane_cp50

0xc90c,	// (0x00023f6f) listscroll_midp_info_pane_ParamLimits

0xc90c,	// (0x00023f6f) listscroll_midp_info_pane

0xc8f4,	// (0x00023f57) listscroll_form_midp_pane_ParamLimits

0xc8f4,	// (0x00023f57) listscroll_form_midp_pane

0xc900,	// (0x00023f63) scroll_bar_cp050

0x8fd4,	// (0x00020637) list_midp_pane

0xdf6d,	// (0x000255d0) signal_pane_g2_cp

0xc826,	// (0x00023e89) listscroll_midp_info_pane_t1_ParamLimits

0xc826,	// (0x00023e89) listscroll_midp_info_pane_t1

0xc83e,	// (0x00023ea1) listscroll_midp_info_pane_t2_ParamLimits

0xc83e,	// (0x00023ea1) listscroll_midp_info_pane_t2

0xc87c,	// (0x00023edf) listscroll_midp_info_pane_t3_ParamLimits

0xc87c,	// (0x00023edf) listscroll_midp_info_pane_t3

0xc8b6,	// (0x00023f19) listscroll_midp_info_pane_t4_ParamLimits

0xc8b6,	// (0x00023f19) listscroll_midp_info_pane_t4

0x0003,

0xf817,	// (0x00026e7a) listscroll_midp_info_pane_t_ParamLimits

0xf817,	// (0x00026e7a) listscroll_midp_info_pane_t

0xb963,	// (0x00022fc6) scroll_pane_cp21

0xc7ca,	// (0x00023e2d) form_midp_field_choice_group_pane

0xc7d3,	// (0x00023e36) form_midp_field_text_pane

0xc80c,	// (0x00023e6f) form_midp_field_time_pane

0xc814,	// (0x00023e77) form_midp_gauge_slider_pane

0xc81d,	// (0x00023e80) form_midp_gauge_wait_pane

0xb216,	// (0x00022879) form_midp_image_pane

0x78a4,	// (0x0001ef07) list_single_midp_pane_ParamLimits

0x78a4,	// (0x0001ef07) list_single_midp_pane

0xc798,	// (0x00023dfb) form_midp_field_text_pane_t1

0xc5b8,	// (0x00023c1b) input_focus_pane_cp050

0xc7b9,	// (0x00023e1c) list_midp_form_text_pane

0xc767,	// (0x00023dca) form_midp_field_choice_group_pane_t1

0xc775,	// (0x00023dd8) input_focus_pane_cp051

0xc789,	// (0x00023dec) list_midp_choice_pane

0xb216,	// (0x00022879) status_idle_pane

0xc74b,	// (0x00023dae) form_midp_field_time_pane_t1

0xb194,	// (0x000227f7) wait_anim_pane_g2_copy1

0xc759,	// (0x00023dbc) form_midp_field_time_pane_t2

0x0001,

0xc22b,	// (0x0002388e) aid_navinavi_width_2_pane

0xf812,	// (0x00026e75) form_midp_field_time_pane_t

0xb216,	// (0x00022879) input_focus_pane_cp052

0xb216,	// (0x00022879) bg_input_focus_pane_cp040

0xc727,	// (0x00023d8a) form_midp_gauge_slider_pane_t1

0xc735,	// (0x00023d98) form_midp_gauge_slider_pane_t2

0x8fb8,	// (0x0002061b) form_midp_gauge_slider_pane_t3

0x8fc6,	// (0x00020629) form_midp_gauge_slider_pane_t4

0x0003,

0xf809,	// (0x00026e6c) form_midp_gauge_slider_pane_t

0xc743,	// (0x00023da6) form_midp_slider_pane

0xb27a,	// (0x000228dd) bg_input_focus_pane_cp041_ParamLimits

0xb27a,	// (0x000228dd) bg_input_focus_pane_cp041

0xc6f7,	// (0x00023d5a) form_midp_gauge_wait_pane_t1_ParamLimits

0xc6f7,	// (0x00023d5a) form_midp_gauge_wait_pane_t1

0xc709,	// (0x00023d6c) form_midp_gauge_wait_pane_t2_ParamLimits

0xc709,	// (0x00023d6c) form_midp_gauge_wait_pane_t2

0x0001,

0xf804,	// (0x00026e67) form_midp_gauge_wait_pane_t_ParamLimits

0xf804,	// (0x00026e67) form_midp_gauge_wait_pane_t

0xc71b,	// (0x00023d7e) form_midp_wait_pane_ParamLimits

0xc71b,	// (0x00023d7e) form_midp_wait_pane

0xc6c1,	// (0x00023d24) form_midp_image_pane_g1

0xc6ca,	// (0x00023d2d) form_midp_image_pane_t1

0xc6d9,	// (0x00023d3c) form_midp_image_pane_t2

0xc6e8,	// (0x00023d4b) form_midp_image_pane_t3

0x0002,

0xf7fd,	// (0x00026e60) form_midp_image_pane_t

0xc6b8,	// (0x00023d1b) list_single_midp_pane_g1

0x3869,	// (0x0001aecc) list_single_midp_pane_t1

0xc6a4,	// (0x00023d07) list_midp_form_item_pane_ParamLimits

0xc6a4,	// (0x00023d07) list_midp_form_item_pane

0xc1d3,	// (0x00023836) list_midp_form_item_pane_t1

0xc1e2,	// (0x00023845) midp_ticker_pane_g1

0xc1ee,	// (0x00023851) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00026dbb) midp_ticker_pane_g

0xc1fa,	// (0x0002385d) midp_ticker_pane_t1

0xd61b,	// (0x00024c7e) midp_editing_number_pane_t1

0xd6a3,	// (0x00024d06) midp_editing_number_pane

0xd6af,	// (0x00024d12) midp_ticker_pane

0xd60b,	// (0x00024c6e) ai_message_heading_pane

0xb216,	// (0x00022879) bg_popup_window_pane_cp14

0xd613,	// (0x00024c76) listscroll_ai_message_pane

0xd595,	// (0x00024bf8) ai_message_heading_pane_g1_ParamLimits

0xd595,	// (0x00024bf8) ai_message_heading_pane_g1

0xd5a1,	// (0x00024c04) ai_message_heading_pane_g2_ParamLimits

0xd5a1,	// (0x00024c04) ai_message_heading_pane_g2

0xd5ad,	// (0x00024c10) ai_message_heading_pane_g3_ParamLimits

0xd5ad,	// (0x00024c10) ai_message_heading_pane_g3

0xd5b9,	// (0x00024c1c) ai_message_heading_pane_g4_ParamLimits

0xd5b9,	// (0x00024c1c) ai_message_heading_pane_g4

0x0003,

0xf93e,	// (0x00026fa1) ai_message_heading_pane_g_ParamLimits

0xf93e,	// (0x00026fa1) ai_message_heading_pane_g

0xd5c5,	// (0x00024c28) ai_message_heading_pane_t1_ParamLimits

0xd5c5,	// (0x00024c28) ai_message_heading_pane_t1

0xd5df,	// (0x00024c42) ai_message_heading_pane_t2_ParamLimits

0xd5df,	// (0x00024c42) ai_message_heading_pane_t2

0x0001,

0xf947,	// (0x00026faa) ai_message_heading_pane_t_ParamLimits

0xf947,	// (0x00026faa) ai_message_heading_pane_t

0xd5f1,	// (0x00024c54) bg_popup_heading_pane_cp1_ParamLimits

0xd5f1,	// (0x00024c54) bg_popup_heading_pane_cp1

0xd583,	// (0x00024be6) list_ai_message_pane_ParamLimits

0xd583,	// (0x00024be6) list_ai_message_pane

0xb963,	// (0x00022fc6) scroll_pane_cp10

0xd51f,	// (0x00024b82) list_ai_message_pane_g1

0xd527,	// (0x00024b8a) list_ai_message_pane_g2

0x0001,

0xf91b,	// (0x00026f7e) list_ai_message_pane_g

0xd52f,	// (0x00024b92) list_ai_message_pane_t1_ParamLimits

0xd52f,	// (0x00024b92) list_ai_message_pane_t1

0xd544,	// (0x00024ba7) list_ai_message_pane_t2_ParamLimits

0xd544,	// (0x00024ba7) list_ai_message_pane_t2

0xd559,	// (0x00024bbc) list_ai_message_pane_t3_ParamLimits

0xd559,	// (0x00024bbc) list_ai_message_pane_t3

0xd56e,	// (0x00024bd1) list_ai_message_pane_t4_ParamLimits

0xd56e,	// (0x00024bd1) list_ai_message_pane_t4

0x0003,

0xf920,	// (0x00026f83) list_ai_message_pane_t_ParamLimits

0xf920,	// (0x00026f83) list_ai_message_pane_t

0xd50d,	// (0x00024b70) cell_ai_soft_ind_pane_ParamLimits

0xd50d,	// (0x00024b70) cell_ai_soft_ind_pane

0xc20c,	// (0x0002386f) cell_ai_soft_ind_pane_g1_ParamLimits

0xc20c,	// (0x0002386f) cell_ai_soft_ind_pane_g1

0xb216,	// (0x00022879) grid_highlight_cp1

0xc219,	// (0x0002387c) text_secondary_cp56_ParamLimits

0xc219,	// (0x0002387c) text_secondary_cp56

0xd4e2,	// (0x00024b45) example_general_pane_ParamLimits

0xd4e2,	// (0x00024b45) example_general_pane

0xd4ee,	// (0x00024b51) example_parent_pane_g1_ParamLimits

0xd4ee,	// (0x00024b51) example_parent_pane_g1

0xd4fa,	// (0x00024b5d) example_parent_pane_t1_ParamLimits

0xd4fa,	// (0x00024b5d) example_parent_pane_t1

0x88de,	// (0x0001ff41) popup_preview_text_window_ParamLimits

0x88de,	// (0x0001ff41) popup_preview_text_window

0xc0fd,	// (0x00023760) list_single_pane_cp2_g4

0xb47b,	// (0x00022ade) bg_popup_preview_window_pane_ParamLimits

0xb47b,	// (0x00022ade) bg_popup_preview_window_pane

0xd299,	// (0x000248fc) popup_preview_text_window_t1_ParamLimits

0xd299,	// (0x000248fc) popup_preview_text_window_t1

0xd2b7,	// (0x0002491a) popup_preview_text_window_t2_ParamLimits

0xd2b7,	// (0x0002491a) popup_preview_text_window_t2

0xd300,	// (0x00024963) popup_preview_text_window_t3_ParamLimits

0xd300,	// (0x00024963) popup_preview_text_window_t3

0xd345,	// (0x000249a8) popup_preview_text_window_t4_ParamLimits

0xd345,	// (0x000249a8) popup_preview_text_window_t4

0x0004,

0xf8ef,	// (0x00026f52) popup_preview_text_window_t_ParamLimits

0xf8ef,	// (0x00026f52) popup_preview_text_window_t

0xd3c3,	// (0x00024a26) scroll_pane_cp11

0xc544,	// (0x00023ba7) bg_popup_preview_window_pane_g1

0xd259,	// (0x000248bc) bg_popup_preview_window_pane_g2

0xd261,	// (0x000248c4) bg_popup_preview_window_pane_g3

0xd269,	// (0x000248cc) bg_popup_preview_window_pane_g4

0xd271,	// (0x000248d4) bg_popup_preview_window_pane_g5

0xd279,	// (0x000248dc) bg_popup_preview_window_pane_g6

0xd281,	// (0x000248e4) bg_popup_preview_window_pane_g7

0xd289,	// (0x000248ec) bg_popup_preview_window_pane_g8

0x3ff6,	// (0x0001b659) aid_popup_width_pane

0x8860,	// (0x0001fec3) popup_midp_note_alarm_window_ParamLimits

0x8860,	// (0x0001fec3) popup_midp_note_alarm_window

0xb808,	// (0x00022e6b) data_form_pane_ParamLimits

0x7729,	// (0x0001ed8c) form_field_data_pane_g1

0x8092,	// (0x0001f6f5) form_field_data_pane_t1_ParamLimits

0xb814,	// (0x00022e77) input_focus_pane_ParamLimits

0xb822,	// (0x00022e85) data_form_wide_pane_ParamLimits

0x3546,	// (0x0001aba9) form_field_data_wide_pane_g1

0x3552,	// (0x0001abb5) form_field_data_wide_pane_t1_ParamLimits

0xb63a,	// (0x00022c9d) input_focus_pane_cp6_ParamLimits

0x80aa,	// (0x0001f70d) input_popup_find_pane_g1_ParamLimits

0x80aa,	// (0x0001f70d) input_popup_find_pane_g1

0x43b5,	// (0x0001ba18) aid_navi_side_left_pane

0x43c5,	// (0x0001ba28) aid_navi_side_right_pane

0xcd76,	// (0x000243d9) bg_popup_window_pane_cp30_ParamLimits

0xcd76,	// (0x000243d9) bg_popup_window_pane_cp30

0xcdf0,	// (0x00024453) popup_midp_note_alarm_window_g1_ParamLimits

0xcdf0,	// (0x00024453) popup_midp_note_alarm_window_g1

0xce20,	// (0x00024483) popup_midp_note_alarm_window_t1_ParamLimits

0xce20,	// (0x00024483) popup_midp_note_alarm_window_t1

0xcec1,	// (0x00024524) popup_midp_note_alarm_window_t2_ParamLimits

0xcec1,	// (0x00024524) popup_midp_note_alarm_window_t2

0xcf6f,	// (0x000245d2) popup_midp_note_alarm_window_t3_ParamLimits

0xcf6f,	// (0x000245d2) popup_midp_note_alarm_window_t3

0xcf97,	// (0x000245fa) popup_midp_note_alarm_window_t4_ParamLimits

0xcf97,	// (0x000245fa) popup_midp_note_alarm_window_t4

0xcfb7,	// (0x0002461a) popup_midp_note_alarm_window_t5_ParamLimits

0xcfb7,	// (0x0002461a) popup_midp_note_alarm_window_t5

0x000a,

0xf88c,	// (0x00026eef) popup_midp_note_alarm_window_t_ParamLimits

0xf88c,	// (0x00026eef) popup_midp_note_alarm_window_t

0xd063,	// (0x000246c6) wait_bar_pane_cp1_ParamLimits

0xd063,	// (0x000246c6) wait_bar_pane_cp1

0xb216,	// (0x00022879) wait_anim_pane_copy1

0xb216,	// (0x00022879) wait_border_pane_copy1

0xcabc,	// (0x0002411f) wait_border_pane_g1_copy1

0x356c,	// (0x0001abcf) form_field_popup_pane_g1

0x7733,	// (0x0001ed96) form_field_popup_pane_t1_ParamLimits

0xb814,	// (0x00022e77) input_focus_pane_cp7_ParamLimits

0xb808,	// (0x00022e6b) list_form_pane_ParamLimits

0x358c,	// (0x0001abef) form_field_popup_wide_pane_g1

0x3594,	// (0x0001abf7) form_field_popup_wide_pane_t1_ParamLimits

0xb814,	// (0x00022e77) input_focus_pane_cp8_ParamLimits

0xb84e,	// (0x00022eb1) list_form_wide_pane_ParamLimits

0xd7bc,	// (0x00024e1f) aid_size_cell_graphic_pane

0x77b0,	// (0x0001ee13) data_form_pane_t1_ParamLimits

0x78cc,	// (0x0001ef2f) data_form_wide_pane_t1_ParamLimits

0x8c3c,	// (0x0002029f) bg_status_flat_pane

0x7d06,	// (0x0001f369) title_pane_t1_ParamLimits

0xb22c,	// (0x0002288f) title_pane_t2_ParamLimits

0xb252,	// (0x000228b5) title_pane_t3_ParamLimits

0xf557,	// (0x00026bba) title_pane_t_ParamLimits

0x81bb,	// (0x0001f81e) level_1_signal_ParamLimits

0x81cd,	// (0x0001f830) level_2_signal_ParamLimits

0x81e0,	// (0x0001f843) level_3_signal_ParamLimits

0x81f3,	// (0x0001f856) level_4_signal_ParamLimits

0x8206,	// (0x0001f869) level_5_signal_ParamLimits

0x8219,	// (0x0001f87c) level_6_signal_ParamLimits

0x822c,	// (0x0001f88f) level_7_signal_ParamLimits

0x81bb,	// (0x0001f81e) level_1_battery_ParamLimits

0x81cd,	// (0x0001f830) level_2_battery_ParamLimits

0x81e0,	// (0x0001f843) level_3_battery_ParamLimits

0x81f3,	// (0x0001f856) level_4_battery_ParamLimits

0x8206,	// (0x0001f869) level_5_battery_ParamLimits

0x8219,	// (0x0001f87c) level_6_battery_ParamLimits

0x822c,	// (0x0001f88f) level_7_battery_ParamLimits

0xcca5,	// (0x00024308) bg_status_flat_pane_g1

0xccad,	// (0x00024310) bg_status_flat_pane_g2

0xccb5,	// (0x00024318) bg_status_flat_pane_g3

0xccbd,	// (0x00024320) bg_status_flat_pane_g4

0xccc5,	// (0x00024328) bg_status_flat_pane_g5

0xcccd,	// (0x00024330) bg_status_flat_pane_g6

0xccd5,	// (0x00024338) bg_status_flat_pane_g7

0x7d93,	// (0x0001f3f6) tabs_3_active_pane_t1_ParamLimits

0x7d93,	// (0x0001f3f6) tabs_3_passive_pane_t1_ParamLimits

0x7da9,	// (0x0001f40c) tabs_4_active_pane_t1_ParamLimits

0x7da9,	// (0x0001f40c) tabs_4_1_passive_pane_t1_ParamLimits

0x80b6,	// (0x0001f719) tabs_2_active_pane_t1_ParamLimits

0x80b6,	// (0x0001f719) tabs_2_passive_pane_t1_ParamLimits

0xb27a,	// (0x000228dd) bg_active_tab_pane_cp4_ParamLimits

0x80cc,	// (0x0001f72f) tabs_2_long_active_pane_t1_ParamLimits

0xb99a,	// (0x00022ffd) bg_passive_tab_pane_cp4_ParamLimits

0x4d61,	// (0x0001c3c4) list_single_midp_graphic_pane_t1_ParamLimits

0xb27a,	// (0x000228dd) bg_active_tab_pane_cp5_ParamLimits

0x80e3,	// (0x0001f746) tabs_3_long_active_pane_t1_ParamLimits

0xb99a,	// (0x00022ffd) bg_passive_tab_pane_cp5_ParamLimits

0x4d61,	// (0x0001c3c4) list_single_midp_graphic_pane_t1

0x8c3c,	// (0x0002029f) bg_status_flat_pane_ParamLimits

0xc423,	// (0x00023a86) indicator_pane_cp2_ParamLimits

0xc423,	// (0x00023a86) indicator_pane_cp2

0x8da2,	// (0x00020405) navi_pane_srt_ParamLimits

0x8da2,	// (0x00020405) navi_pane_srt

0xc44b,	// (0x00023aae) popup_clock_digital_analogue_window_cp1

0xb2be,	// (0x00022921) indicator_pane_t1

0xc1b8,	// (0x0002381b) copy_highlight_pane

0xc1b8,	// (0x0002381b) cursor_graphics_pane

0xc1b8,	// (0x0002381b) graphic_within_text_pane

0xc1b8,	// (0x0002381b) link_highlight_pane

0xd386,	// (0x000249e9) popup_preview_text_window_t5_ParamLimits

0xd386,	// (0x000249e9) popup_preview_text_window_t5

0xc233,	// (0x00023896) cursor_digital_pane

0xc233,	// (0x00023896) cursor_primary_pane

0xc244,	// (0x000238a7) cursor_primary_small_pane

0xc24c,	// (0x000238af) cursor_secondary_pane

0xc254,	// (0x000238b7) cursor_title_pane

0xc233,	// (0x00023896) link_highlight_digital_pane

0xc23b,	// (0x0002389e) link_highlight_primary_pane

0xc244,	// (0x000238a7) link_highlight_primary_small_pane

0xc24c,	// (0x000238af) link_highlight_secondary_pane

0xc254,	// (0x000238b7) link_highlight_title_pane

0xc233,	// (0x00023896) copy_highlight_digital_pane

0xc233,	// (0x00023896) copy_highlight_primary_pane

0xc244,	// (0x000238a7) copy_highlight_primary_small_pane

0xc24c,	// (0x000238af) copy_highlight_secondary_pane

0xc254,	// (0x000238b7) copy_highlight_title_pane

0xc24c,	// (0x000238af) graphic_text_digital_pane

0xcd25,	// (0x00024388) graphic_text_primary_pane

0xcd2e,	// (0x00024391) graphic_text_primary_small_pane

0xc244,	// (0x000238a7) graphic_text_secondary_pane

0xc233,	// (0x00023896) graphic_text_title_pane

0x83df,	// (0x0001fa42) cursor_primary_pane_g1

0xcd17,	// (0x0002437a) cursor_text_primary_t1

0x9010,	// (0x00020673) cursor_primary_small_pane_g1

0xcd09,	// (0x0002436c) cursor_text_primary_small_t1

0x9006,	// (0x00020669) cursor_primary_small_pane_g1_copy1

0xccfb,	// (0x0002435e) cursor_text_primary_small_t1_copy1

0xcced,	// (0x00024350) cursor_text_title_t1

0x8ffc,	// (0x0002065f) cursor_title_pane_g1

0x83df,	// (0x0001fa42) cursor_digital_pane_g1

0xc25c,	// (0x000238bf) cursor_text_digital_t1

0xc26a,	// (0x000238cd) link_highlight_primary_pane_g1

0xcc96,	// (0x000242f9) link_highlight_primary_pane_t1

0xc26a,	// (0x000238cd) link_highlight_primary_small_pane_g1

0xc272,	// (0x000238d5) link_highlight_primary_small_pane_t1

0xc281,	// (0x000238e4) link_highlight_secondary_pane_g1

0xc289,	// (0x000238ec) link_highlight_secondary_pane_t1

0xcbfb,	// (0x0002425e) link_highlight_title_pane_g1

0xcc12,	// (0x00024275) link_highlight_title_pane_t1

0xcbfb,	// (0x0002425e) link_highlight_digital_pane_g1

0xcc03,	// (0x00024266) link_highlight_digital_pane_t1

0xcad7,	// (0x0002413a) copy_highlight_primary_pane_g1

0xcafd,	// (0x00024160) copy_highlight_primary_pane_t1

0xcad7,	// (0x0002413a) copy_highlight_primary_small_pane_g1

0xcaee,	// (0x00024151) copy_highlight_primary_small_pane_t1

0xc298,	// (0x000238fb) copy_highlight_secondary_pane_g1

0xc2a0,	// (0x00023903) copy_highlight_secondary_pane_t1

0xcad7,	// (0x0002413a) copy_highlight_title_pane_g1

0xcadf,	// (0x00024142) copy_highlight_title_pane_t1

0xcad7,	// (0x0002413a) copy_highlight_digital_pane_g1

0xd8b7,	// (0x00024f1a) copy_highlight_digital_pane_t1

0xd80b,	// (0x00024e6e) graphic_text_primary_pane_g1

0xd89b,	// (0x00024efe) graphic_text_primary_pane_t1

0xd8a9,	// (0x00024f0c) graphic_text_primary_pane_t2

0x0001,

0xf9bb,	// (0x0002701e) graphic_text_primary_pane_t

0xd877,	// (0x00024eda) graphic_text_primary_small_pane_g1

0xd87f,	// (0x00024ee2) graphic_text_primary_small_pane_t1

0xd88d,	// (0x00024ef0) graphic_text_primary_small_pane_t2

0x0001,

0xf9b6,	// (0x00027019) graphic_text_primary_small_pane_t

0xd853,	// (0x00024eb6) graphic_text_secondary_pane_g1

0xd85b,	// (0x00024ebe) graphic_text_secondary_pane_t1

0xd869,	// (0x00024ecc) graphic_text_secondary_pane_t2

0x0001,

0xf9b1,	// (0x00027014) graphic_text_secondary_pane_t

0xd82f,	// (0x00024e92) graphic_text_title_pane_g1

0xd837,	// (0x00024e9a) graphic_text_title_pane_t1

0xd845,	// (0x00024ea8) graphic_text_title_pane_t2

0x0001,

0xf9ac,	// (0x0002700f) graphic_text_title_pane_t

0xd80b,	// (0x00024e6e) graphic_text_digital_pane_g1

0xd813,	// (0x00024e76) graphic_text_digital_pane_t1

0xd821,	// (0x00024e84) graphic_text_digital_pane_t2

0x0001,

0xf9a7,	// (0x0002700a) graphic_text_digital_pane_t

0xb27a,	// (0x000228dd) navi_icon_pane_srt_ParamLimits

0xb27a,	// (0x000228dd) navi_icon_pane_srt

0xb216,	// (0x00022879) navi_midp_pane_srt

0xb216,	// (0x00022879) navi_navi_pane_srt

0xb27a,	// (0x000228dd) navi_text_pane_srt_ParamLimits

0xb27a,	// (0x000228dd) navi_text_pane_srt

0xd6d3,	// (0x00024d36) navi_navi_icon_text_pane_srt

0xd6db,	// (0x00024d3e) navi_navi_pane_srt_g1_ParamLimits

0xd6db,	// (0x00024d3e) navi_navi_pane_srt_g1

0xd6ed,	// (0x00024d50) navi_navi_pane_srt_g2_ParamLimits

0xd6ed,	// (0x00024d50) navi_navi_pane_srt_g2

0x0001,

0xf9a2,	// (0x00027005) navi_navi_pane_srt_g_ParamLimits

0xf9a2,	// (0x00027005) navi_navi_pane_srt_g

0xd6ff,	// (0x00024d62) navi_navi_tabs_pane_srt

0xd6d3,	// (0x00024d36) navi_navi_text_pane_srt

0xd6d3,	// (0x00024d36) navi_navi_volume_pane_srt

0xd7fc,	// (0x00024e5f) navi_navi_text_pane_srt_t1

0x50c5,	// (0x0001c728) navi_navi_volume_pane_srt_g1

0x50cd,	// (0x0001c730) volume_small_pane_srt_ParamLimits

0x50cd,	// (0x0001c730) volume_small_pane_srt

0x465c,	// (0x0001bcbf) volume_small_pane_srt_g1_ParamLimits

0x465c,	// (0x0001bcbf) volume_small_pane_srt_g1

0x466c,	// (0x0001bccf) volume_small_pane_srt_g2_ParamLimits

0x466c,	// (0x0001bccf) volume_small_pane_srt_g2

0x467d,	// (0x0001bce0) volume_small_pane_srt_g3_ParamLimits

0x467d,	// (0x0001bce0) volume_small_pane_srt_g3

0x468e,	// (0x0001bcf1) volume_small_pane_srt_g4_ParamLimits

0x468e,	// (0x0001bcf1) volume_small_pane_srt_g4

0x469f,	// (0x0001bd02) volume_small_pane_srt_g5_ParamLimits

0x469f,	// (0x0001bd02) volume_small_pane_srt_g5

0x46b0,	// (0x0001bd13) volume_small_pane_srt_g6_ParamLimits

0x46b0,	// (0x0001bd13) volume_small_pane_srt_g6

0x46c1,	// (0x0001bd24) volume_small_pane_srt_g7_ParamLimits

0x46c1,	// (0x0001bd24) volume_small_pane_srt_g7

0x46d2,	// (0x0001bd35) volume_small_pane_srt_g8_ParamLimits

0x46d2,	// (0x0001bd35) volume_small_pane_srt_g8

0x46e3,	// (0x0001bd46) volume_small_pane_srt_g9_ParamLimits

0x46e3,	// (0x0001bd46) volume_small_pane_srt_g9

0x46f4,	// (0x0001bd57) volume_small_pane_srt_g10_ParamLimits

0x46f4,	// (0x0001bd57) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00026dc0) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00026dc0) volume_small_pane_srt_g

0xb524,	// (0x00022b87) query_popup_data_pane_cp2

0xd7e2,	// (0x00024e45) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd7e2,	// (0x00024e45) navi_navi_icon_text_pane_srt_t1

0xcd25,	// (0x00024388) navi_tabs_2_long_pane_srt

0xcd25,	// (0x00024388) navi_tabs_2_pane_srt

0xcd25,	// (0x00024388) navi_tabs_3_long_pane_srt

0xcd25,	// (0x00024388) navi_tabs_3_pane_srt

0xcd25,	// (0x00024388) navi_tabs_4_pane_srt

0x50a5,	// (0x0001c708) tabs_2_active_pane_srt_ParamLimits

0x50a5,	// (0x0001c708) tabs_2_active_pane_srt

0x50b5,	// (0x0001c718) tabs_2_passive_pane_srt_ParamLimits

0x50b5,	// (0x0001c718) tabs_2_passive_pane_srt

0xc5b8,	// (0x00023c1b) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc5b8,	// (0x00023c1b) bg_passive_tab_pane_cp1_srt

0xd736,	// (0x00024d99) bg_passive_tab_pane_g1_cp1_srt

0xbec2,	// (0x00023525) bg_passive_tab_pane_g2_cp1_srt

0xd73f,	// (0x00024da2) bg_passive_tab_pane_g3_cp1_srt

0xb264,	// (0x000228c7) bg_active_tab_pane_cp1_srt_ParamLimits

0xb264,	// (0x000228c7) bg_active_tab_pane_cp1_srt

0xd72e,	// (0x00024d91) tabs_2_active_pane_srt_g1

0x80b6,	// (0x0001f719) tabs_2_active_pane_srt_t1_ParamLimits

0x80b6,	// (0x0001f719) tabs_2_active_pane_srt_t1

0xd736,	// (0x00024d99) bg_active_tab_pane_g1_cp1_srt

0xbec2,	// (0x00023525) bg_active_tab_pane_g2_cp1_srt

0xd73f,	// (0x00024da2) bg_active_tab_pane_g3_cp1_srt

0x5072,	// (0x0001c6d5) tabs_3_active_pane_srt_ParamLimits

0x5072,	// (0x0001c6d5) tabs_3_active_pane_srt

0x5083,	// (0x0001c6e6) tabs_3_passive_pane_cp_srt_ParamLimits

0x5083,	// (0x0001c6e6) tabs_3_passive_pane_cp_srt

0x5094,	// (0x0001c6f7) tabs_3_passive_pane_srt_ParamLimits

0x5094,	// (0x0001c6f7) tabs_3_passive_pane_srt

0xc5b8,	// (0x00023c1b) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc5b8,	// (0x00023c1b) bg_passive_tab_pane_cp2_srt

0xc2af,	// (0x00023912) bg_passive_tab_pane_g1_cp2_srt

0xbec2,	// (0x00023525) bg_passive_tab_pane_g2_cp2_srt

0xc2b8,	// (0x0002391b) bg_passive_tab_pane_g3_cp2_srt

0xb264,	// (0x000228c7) bg_active_tab_pane_cp2_srt_ParamLimits

0xb264,	// (0x000228c7) bg_active_tab_pane_cp2_srt

0xd7d2,	// (0x00024e35) tabs_3_active_pane_srt_g1

0x7d93,	// (0x0001f3f6) tabs_3_active_pane_srt_t1_ParamLimits

0x7d93,	// (0x0001f3f6) tabs_3_active_pane_srt_t1

0xc2af,	// (0x00023912) bg_active_tab_pane_g1_cp2_srt

0xbec2,	// (0x00023525) bg_active_tab_pane_g2_cp2_srt

0xc2b8,	// (0x0002391b) bg_active_tab_pane_g3_cp2_srt

0x502a,	// (0x0001c68d) tabs_4_active_pane_srt_ParamLimits

0x502a,	// (0x0001c68d) tabs_4_active_pane_srt

0x503c,	// (0x0001c69f) tabs_4_passive_pane_cp2_srt_ParamLimits

0x503c,	// (0x0001c69f) tabs_4_passive_pane_cp2_srt

0x4859,	// (0x0001bebc) aid_size_cell_toolbar

0x85d0,	// (0x0001fc33) main_idle_act_pane_ParamLimits

0x49ba,	// (0x0001c01d) popup_large_graphic_colour_window_ParamLimits

0x8b2e,	// (0x00020191) popup_toolbar_window_ParamLimits

0x8b2e,	// (0x00020191) popup_toolbar_window

0x38e3,	// (0x0001af46) list_single_graphic_2heading_pane_ParamLimits

0x38e3,	// (0x0001af46) list_single_graphic_2heading_pane

0xbb5f,	// (0x000231c2) aid_size_cell_apps_grid_lsc_pane

0xbb71,	// (0x000231d4) aid_size_cell_apps_grid_prt_pane

0xb99a,	// (0x00022ffd) bg_wml_button_pane_cp1_ParamLimits

0xb99a,	// (0x00022ffd) bg_wml_button_pane_cp1

0xc798,	// (0x00023dfb) form_midp_field_text_pane_t1_ParamLimits

0xc5b8,	// (0x00023c1b) input_focus_pane_cp050_ParamLimits

0xc7b9,	// (0x00023e1c) list_midp_form_text_pane_ParamLimits

0xc775,	// (0x00023dd8) input_focus_pane_cp051_ParamLimits

0xc789,	// (0x00023dec) list_midp_choice_pane_ParamLimits

0xc672,	// (0x00023cd5) list_single_2graphic_pane_cp3_ParamLimits

0xc672,	// (0x00023cd5) list_single_2graphic_pane_cp3

0xc685,	// (0x00023ce8) list_single_midp_graphic_pane_ParamLimits

0xc685,	// (0x00023ce8) list_single_midp_graphic_pane

0x3036,	// (0x0001a699) list_single_graphic_2heading_pane_g1_ParamLimits

0x3036,	// (0x0001a699) list_single_graphic_2heading_pane_g1

0x3761,	// (0x0001adc4) list_single_graphic_2heading_pane_g4_ParamLimits

0x3761,	// (0x0001adc4) list_single_graphic_2heading_pane_g4

0x376d,	// (0x0001add0) list_single_graphic_2heading_pane_g5_ParamLimits

0x376d,	// (0x0001add0) list_single_graphic_2heading_pane_g5

0x0002,

0xf5c1,	// (0x00026c24) list_single_graphic_2heading_pane_g_ParamLimits

0xf5c1,	// (0x00026c24) list_single_graphic_2heading_pane_g

0x3779,	// (0x0001addc) list_single_graphic_2heading_pane_t1_ParamLimits

0x3779,	// (0x0001addc) list_single_graphic_2heading_pane_t1

0x378d,	// (0x0001adf0) list_single_graphic_2heading_pane_t2_ParamLimits

0x378d,	// (0x0001adf0) list_single_graphic_2heading_pane_t2

0x37a7,	// (0x0001ae0a) list_single_graphic_2heading_pane_t3_ParamLimits

0x37a7,	// (0x0001ae0a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b0,	// (0x00026e13) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b0,	// (0x00026e13) list_single_graphic_2heading_pane_t

0xc48e,	// (0x00023af1) bg_popup_sub_pane_cp2

0xc4b4,	// (0x00023b17) grid_toobar_pane

0x4cfd,	// (0x0001c360) cell_toolbar_pane_ParamLimits

0x4cfd,	// (0x0001c360) cell_toolbar_pane

0xc4ea,	// (0x00023b4d) cell_toolbar_pane_g1_ParamLimits

0xc4ea,	// (0x00023b4d) cell_toolbar_pane_g1

0xc4fc,	// (0x00023b5f) cell_toolbar_pane_g2_ParamLimits

0xc4fc,	// (0x00023b5f) cell_toolbar_pane_g2

0x0001,

0xf7b7,	// (0x00026e1a) cell_toolbar_pane_g_ParamLimits

0xf7b7,	// (0x00026e1a) cell_toolbar_pane_g

0xc51e,	// (0x00023b81) grid_highlight_pane_cp2_ParamLimits

0xc51e,	// (0x00023b81) grid_highlight_pane_cp2

0xc538,	// (0x00023b9b) toolbar_button_pane

0xc544,	// (0x00023ba7) toolbar_button_pane_g1

0xc54c,	// (0x00023baf) toolbar_button_pane_g2

0xc554,	// (0x00023bb7) toolbar_button_pane_g3

0xc55c,	// (0x00023bbf) toolbar_button_pane_g4

0xc564,	// (0x00023bc7) toolbar_button_pane_g5

0xc56c,	// (0x00023bcf) toolbar_button_pane_g6

0xc574,	// (0x00023bd7) toolbar_button_pane_g7

0xc57c,	// (0x00023bdf) toolbar_button_pane_g8

0xc584,	// (0x00023be7) toolbar_button_pane_g9

0x0009,

0xf7bc,	// (0x00026e1f) toolbar_button_pane_g

0x4d2c,	// (0x0001c38f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x4d2c,	// (0x0001c38f) list_single_2graphic_pane_g1_cp3

0x8f20,	// (0x00020583) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8f20,	// (0x00020583) list_single_2graphic_pane_g2_cp3

0xc039,	// (0x0002369c) list_single_2graphic_pane_g3_cp3

0xc61c,	// (0x00023c7f) list_single_2graphic_pane_g4_cp3_ParamLimits

0xc61c,	// (0x00023c7f) list_single_2graphic_pane_g4_cp3

0x4d47,	// (0x0001c3aa) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4d47,	// (0x0001c3aa) list_single_2graphic_pane_t1_cp3

0xc02d,	// (0x00023690) list_single_midp_graphic_pane_g2_ParamLimits

0xc02d,	// (0x00023690) list_single_midp_graphic_pane_g2

0x4861,	// (0x0001bec4) aid_zoom_text_primary

0x3734,	// (0x0001ad97) aid_zoom_text_secondary

0x8419,	// (0x0001fa7c) status_small_pane_g7_ParamLimits

0x8419,	// (0x0001fa7c) status_small_pane_g7

0x843c,	// (0x0001fa9f) status_small_pane_t1_ParamLimits

0x7cdb,	// (0x0001f33e) title_pane_g2

0x0003,

0xf54e,	// (0x00026bb1) title_pane_g

0x7fbd,	// (0x0001f620) aid_size_cell_colour_1_pane_ParamLimits

0x7fbd,	// (0x0001f620) aid_size_cell_colour_1_pane

0x7fd1,	// (0x0001f634) aid_size_cell_colour_2_pane_ParamLimits

0x7fd1,	// (0x0001f634) aid_size_cell_colour_2_pane

0x7fe5,	// (0x0001f648) aid_size_cell_colour_3_pane_ParamLimits

0x7fe5,	// (0x0001f648) aid_size_cell_colour_3_pane

0x7ff9,	// (0x0001f65c) aid_size_cell_colour_4_pane_ParamLimits

0x7ff9,	// (0x0001f65c) aid_size_cell_colour_4_pane

0x4317,	// (0x0001b97a) title_pane_stacon_g1_ParamLimits

0x4317,	// (0x0001b97a) title_pane_stacon_g1

0xcb54,	// (0x000241b7) popup_note_wait_window_g3_ParamLimits

0xcb54,	// (0x000241b7) popup_note_wait_window_g3

0xcbca,	// (0x0002422d) popup_note_wait_window_t5_ParamLimits

0xcbca,	// (0x0002422d) popup_note_wait_window_t5

0xb216,	// (0x00022879) main_feb_china_hwr_fs_writing_pane

0x8631,	// (0x0001fc94) popup_feb_china_hwr_fs_window_ParamLimits

0x8631,	// (0x0001fc94) popup_feb_china_hwr_fs_window

0x8f31,	// (0x00020594) aid_size_cell_hwr_fs_ParamLimits

0x8f31,	// (0x00020594) aid_size_cell_hwr_fs

0xc5b8,	// (0x00023c1b) bg_popup_sub_pane_cp3_ParamLimits

0xc5b8,	// (0x00023c1b) bg_popup_sub_pane_cp3

0x8f46,	// (0x000205a9) grid_hwr_fs_pane_ParamLimits

0x8f46,	// (0x000205a9) grid_hwr_fs_pane

0x4da0,	// (0x0001c403) linegrid_hwr_fs_pane_ParamLimits

0x4da0,	// (0x0001c403) linegrid_hwr_fs_pane

0x8f5e,	// (0x000205c1) cell_hwr_fs_pane_ParamLimits

0x8f5e,	// (0x000205c1) cell_hwr_fs_pane

0xc5c4,	// (0x00023c27) linegrid_hwr_fs_pane_g1_ParamLimits

0xc5c4,	// (0x00023c27) linegrid_hwr_fs_pane_g1

0x8f7e,	// (0x000205e1) linegrid_hwr_fs_pane_g2_ParamLimits

0x8f7e,	// (0x000205e1) linegrid_hwr_fs_pane_g2

0xc5d0,	// (0x00023c33) linegrid_hwr_fs_pane_g3_ParamLimits

0xc5d0,	// (0x00023c33) linegrid_hwr_fs_pane_g3

0x4dce,	// (0x0001c431) linegrid_hwr_fs_pane_g4_ParamLimits

0x4dce,	// (0x0001c431) linegrid_hwr_fs_pane_g4

0x4de8,	// (0x0001c44b) linegrid_hwr_fs_pane_g5_ParamLimits

0x4de8,	// (0x0001c44b) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e2,	// (0x00026e45) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e2,	// (0x00026e45) linegrid_hwr_fs_pane_g

0xc5dc,	// (0x00023c3f) cell_hwr_fs_pane_g1_ParamLimits

0xc5dc,	// (0x00023c3f) cell_hwr_fs_pane_g1

0xc45c,	// (0x00023abf) cell_hwr_fs_pane_g2_ParamLimits

0xc45c,	// (0x00023abf) cell_hwr_fs_pane_g2

0x8f90,	// (0x000205f3) cell_hwr_fs_pane_g3_ParamLimits

0x8f90,	// (0x000205f3) cell_hwr_fs_pane_g3

0x8f9d,	// (0x00020600) cell_hwr_fs_pane_g4_ParamLimits

0x8f9d,	// (0x00020600) cell_hwr_fs_pane_g4

0x0003,

0xf7ed,	// (0x00026e50) cell_hwr_fs_pane_g_ParamLimits

0xf7ed,	// (0x00026e50) cell_hwr_fs_pane_g

0x8faa,	// (0x0002060d) cell_hwr_fs_pane_t1

0xb216,	// (0x00022879) grid_highlight_pane_cp6

0xb216,	// (0x00022879) main_idle_act2_pane

0xb94a,	// (0x00022fad) aid_inside_area_popup_secondary

0x911d,	// (0x00020780) aid_inside_area_window_primary_ParamLimits

0x911d,	// (0x00020780) aid_inside_area_window_primary

0xd8c6,	// (0x00024f29) ai2_news_ticker_pane

0xd8ce,	// (0x00024f31) aid_size_cell_ai1_link_ParamLimits

0xd8ce,	// (0x00024f31) aid_size_cell_ai1_link

0x9529,	// (0x00020b8c) popup_ai2_data_window_ParamLimits

0x9529,	// (0x00020b8c) popup_ai2_data_window

0xd8e8,	// (0x00024f4b) popup_ai2_link_window_ParamLimits

0xd8e8,	// (0x00024f4b) popup_ai2_link_window

0xc5b8,	// (0x00023c1b) bg_popup_sub_pane_cp4_ParamLimits

0xc5b8,	// (0x00023c1b) bg_popup_sub_pane_cp4

0xd8fc,	// (0x00024f5f) grid_ai2_link_pane_ParamLimits

0xd8fc,	// (0x00024f5f) grid_ai2_link_pane

0xd913,	// (0x00024f76) popup_ai2_link_window_g1_ParamLimits

0xd913,	// (0x00024f76) popup_ai2_link_window_g1

0xd91f,	// (0x00024f82) popup_ai2_link_window_g2_ParamLimits

0xd91f,	// (0x00024f82) popup_ai2_link_window_g2

0x0001,

0xf9c0,	// (0x00027023) popup_ai2_link_window_g_ParamLimits

0xf9c0,	// (0x00027023) popup_ai2_link_window_g

0xd92e,	// (0x00024f91) ai2_mp_button_pane

0xd936,	// (0x00024f99) ai2_mp_volume_pane

0xc775,	// (0x00023dd8) bg_popup_sub_pane_cp5_ParamLimits

0xc775,	// (0x00023dd8) bg_popup_sub_pane_cp5

0xd93e,	// (0x00024fa1) heading_ai2_gene_pane_ParamLimits

0xd93e,	// (0x00024fa1) heading_ai2_gene_pane

0xd94a,	// (0x00024fad) list_ai2_gene_pane_ParamLimits

0xd94a,	// (0x00024fad) list_ai2_gene_pane

0xd992,	// (0x00024ff5) cell_ai2_link_pane_ParamLimits

0xd992,	// (0x00024ff5) cell_ai2_link_pane

0xd9a8,	// (0x0002500b) cell_ai2_link_pane_g1

0xb216,	// (0x00022879) grid_highlight_pane_cp7

0x50e2,	// (0x0001c745) ai2_mp_volume_pane_g1

0xda3d,	// (0x000250a0) ai2_mp_volume_pane_g2

0x9553,	// (0x00020bb6) list_ai2_gene_pane_t1

0xda45,	// (0x000250a8) ai2_mp_volume_pane_g3

0x0002,

0xf9d9,	// (0x0002703c) ai2_mp_volume_pane_g

0x50ea,	// (0x0001c74d) volume_small_pane_cp3

0xda4d,	// (0x000250b0) aid_size_cell_ai2_button

0xda55,	// (0x000250b8) grid_ai2_button_pane

0xda5e,	// (0x000250c1) cell_ai2_button_pane_ParamLimits

0xda5e,	// (0x000250c1) cell_ai2_button_pane

0xb194,	// (0x000227f7) cell_ai2_button_pane_g1

0xb216,	// (0x00022879) grid_highlight_pane_cp8

0xd9fd,	// (0x00025060) ai2_gene_pane_t1_ParamLimits

0xd9fd,	// (0x00025060) ai2_gene_pane_t1

0x85b8,	// (0x0001fc1b) aid_height_parent_landscape

0x92d5,	// (0x00020938) aid_height_set_list

0xd667,	// (0x00024cca) aid_size_parent

0xd7bc,	// (0x00024e1f) aid_size_cell_graphic_pane_ParamLimits

0xd95a,	// (0x00024fbd) popup_ai2_data_window_g1_ParamLimits

0xd95a,	// (0x00024fbd) popup_ai2_data_window_g1

0xd966,	// (0x00024fc9) ai2_news_ticker_pane_g1

0xd96e,	// (0x00024fd1) ai2_news_ticker_pane_g2

0x0001,

0xf9c5,	// (0x00027028) ai2_news_ticker_pane_g

0xd976,	// (0x00024fd9) ai2_news_ticker_pane_t1

0xd984,	// (0x00024fe7) ai2_news_ticker_pane_t2

0x0001,

0xf9ca,	// (0x0002702d) ai2_news_ticker_pane_t

0xd79d,	// (0x00024e00) heading_ai2_gene_pane_g1

0xd9b1,	// (0x00025014) heading_ai2_gene_pane_t1_ParamLimits

0xd9b1,	// (0x00025014) heading_ai2_gene_pane_t1

0xd9c6,	// (0x00025029) list_highlight_pane_cp6

0x953d,	// (0x00020ba0) ai2_gene_pane_ParamLimits

0x953d,	// (0x00020ba0) ai2_gene_pane

0x9561,	// (0x00020bc4) list_ai2_gene_pane_t2

0x0001,

0xf9cf,	// (0x00027032) list_ai2_gene_pane_t

0xd9ce,	// (0x00025031) list_highlight_pane_cp8_ParamLimits

0xd9ce,	// (0x00025031) list_highlight_pane_cp8

0xd9df,	// (0x00025042) ai2_gene_pane_g1_ParamLimits

0xd9df,	// (0x00025042) ai2_gene_pane_g1

0xd9f1,	// (0x00025054) ai2_gene_pane_g2_ParamLimits

0xd9f1,	// (0x00025054) ai2_gene_pane_g2

0x0001,

0xf9d4,	// (0x00027037) ai2_gene_pane_g_ParamLimits

0xf9d4,	// (0x00027037) ai2_gene_pane_g

0xb7bb,	// (0x00022e1e) scroll_pane_cp12

0x8577,	// (0x0001fbda) control_pane_t3_ParamLimits

0x8577,	// (0x0001fbda) control_pane_t3

0x842d,	// (0x0001fa90) status_small_pane_g8_ParamLimits

0x842d,	// (0x0001fa90) status_small_pane_g8

0x86a5,	// (0x0001fd08) popup_find_window_ParamLimits

0x8898,	// (0x0001fefb) popup_note_image_window_ParamLimits

0x3036,	// (0x0001a699) list_double2_graphic_pane_vc_g1_ParamLimits

0x3036,	// (0x0001a699) list_double2_graphic_pane_vc_g1

0x3761,	// (0x0001adc4) list_double2_graphic_pane_vc_g2_ParamLimits

0x3761,	// (0x0001adc4) list_double2_graphic_pane_vc_g2

0x376d,	// (0x0001add0) list_double2_graphic_pane_vc_g3_ParamLimits

0x376d,	// (0x0001add0) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00026c24) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00026c24) list_double2_graphic_pane_vc_g

0x37bf,	// (0x0001ae22) list_double2_graphic_pane_vc_t1_ParamLimits

0x37bf,	// (0x0001ae22) list_double2_graphic_pane_vc_t1

0x3761,	// (0x0001adc4) list_single_heading_pane_vc_g1_ParamLimits

0x3761,	// (0x0001adc4) list_single_heading_pane_vc_g1

0x376d,	// (0x0001add0) list_single_heading_pane_vc_g2_ParamLimits

0x376d,	// (0x0001add0) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00026c2b) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00026c2b) list_single_heading_pane_vc_g

0x37d5,	// (0x0001ae38) list_single_heading_pane_vc_t1_ParamLimits

0x37d5,	// (0x0001ae38) list_single_heading_pane_vc_t1

0x37eb,	// (0x0001ae4e) list_single_heading_pane_vc_t2_ParamLimits

0x37eb,	// (0x0001ae4e) list_single_heading_pane_vc_t2

0x0001,

0xf7d1,	// (0x00026e34) list_single_heading_pane_vc_t_ParamLimits

0xf7d1,	// (0x00026e34) list_single_heading_pane_vc_t

0x37fd,	// (0x0001ae60) list_setting_number_pane_vc_g1_ParamLimits

0x37fd,	// (0x0001ae60) list_setting_number_pane_vc_g1

0x3809,	// (0x0001ae6c) list_setting_number_pane_vc_g2_ParamLimits

0x3809,	// (0x0001ae6c) list_setting_number_pane_vc_g2

0x0001,

0xf7d6,	// (0x00026e39) list_setting_number_pane_vc_g_ParamLimits

0xf7d6,	// (0x00026e39) list_setting_number_pane_vc_g

0x3815,	// (0x0001ae78) list_setting_number_pane_vc_t1_ParamLimits

0x3815,	// (0x0001ae78) list_setting_number_pane_vc_t1

0x3829,	// (0x0001ae8c) list_setting_number_pane_vc_t2_ParamLimits

0x3829,	// (0x0001ae8c) list_setting_number_pane_vc_t2

0x3845,	// (0x0001aea8) list_setting_number_pane_vc_t3_ParamLimits

0x3845,	// (0x0001aea8) list_setting_number_pane_vc_t3

0x0002,

0xf7db,	// (0x00026e3e) list_setting_number_pane_vc_t_ParamLimits

0xf7db,	// (0x00026e3e) list_setting_number_pane_vc_t

0x385d,	// (0x0001aec0) set_value_pane_vc_ParamLimits

0x385d,	// (0x0001aec0) set_value_pane_vc

0x38e3,	// (0x0001af46) list_double2_graphic_pane_vc_ParamLimits

0x38e3,	// (0x0001af46) list_double2_graphic_pane_vc

0xd6c2,	// (0x00024d25) list_double2_large_graphic_pane_vc_ParamLimits

0xd6c2,	// (0x00024d25) list_double2_large_graphic_pane_vc

0x38e3,	// (0x0001af46) list_double2_pane_vc_ParamLimits

0x38e3,	// (0x0001af46) list_double2_pane_vc

0x38e3,	// (0x0001af46) list_double_graphic_heading_pane_vc_ParamLimits

0x38e3,	// (0x0001af46) list_double_graphic_heading_pane_vc

0x38e3,	// (0x0001af46) list_double_graphic_pane_vc_ParamLimits

0x38e3,	// (0x0001af46) list_double_graphic_pane_vc

0x38e3,	// (0x0001af46) list_double_heading_pane_vc_ParamLimits

0x38e3,	// (0x0001af46) list_double_heading_pane_vc

0x38f7,	// (0x0001af5a) list_double_large_graphic_pane_vc_ParamLimits

0x38f7,	// (0x0001af5a) list_double_large_graphic_pane_vc

0x38e3,	// (0x0001af46) list_double_number_pane_vc_ParamLimits

0x38e3,	// (0x0001af46) list_double_number_pane_vc

0x38e3,	// (0x0001af46) list_double_pane_vc_ParamLimits

0x38e3,	// (0x0001af46) list_double_pane_vc

0x38e3,	// (0x0001af46) list_double_time_pane_vc_ParamLimits

0x38e3,	// (0x0001af46) list_double_time_pane_vc

0x38e3,	// (0x0001af46) list_setting_number_pane_vc_ParamLimits

0x38e3,	// (0x0001af46) list_setting_number_pane_vc

0x38e3,	// (0x0001af46) list_setting_pane_vc_ParamLimits

0x38e3,	// (0x0001af46) list_setting_pane_vc

0x38e3,	// (0x0001af46) list_single_graphic_heading_pane_vc_ParamLimits

0x38e3,	// (0x0001af46) list_single_graphic_heading_pane_vc

0x38e3,	// (0x0001af46) list_single_heading_pane_vc_ParamLimits

0x38e3,	// (0x0001af46) list_single_heading_pane_vc

0x38e3,	// (0x0001af46) list_single_number_heading_pane_vc_ParamLimits

0x38e3,	// (0x0001af46) list_single_number_heading_pane_vc

0x394c,	// (0x0001afaf) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x394c,	// (0x0001afaf) list_double_graphic_heading_pane_vc_g1

0x3761,	// (0x0001adc4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3761,	// (0x0001adc4) list_double_graphic_heading_pane_vc_g2

0x376d,	// (0x0001add0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x376d,	// (0x0001add0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e0,	// (0x00027043) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e0,	// (0x00027043) list_double_graphic_heading_pane_vc_g

0x3958,	// (0x0001afbb) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3958,	// (0x0001afbb) list_double_graphic_heading_pane_vc_t1

0x396e,	// (0x0001afd1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x396e,	// (0x0001afd1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e7,	// (0x0002704a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e7,	// (0x0002704a) list_double_graphic_heading_pane_vc_t

0x37fd,	// (0x0001ae60) list_setting_pane_vc_g1_ParamLimits

0x37fd,	// (0x0001ae60) list_setting_pane_vc_g1

0x3809,	// (0x0001ae6c) list_setting_pane_vc_g2_ParamLimits

0x3809,	// (0x0001ae6c) list_setting_pane_vc_g2

0x0001,

0xf7d6,	// (0x00026e39) list_setting_pane_vc_g_ParamLimits

0xf7d6,	// (0x00026e39) list_setting_pane_vc_g

0x3986,	// (0x0001afe9) list_setting_pane_vc_t1_ParamLimits

0x3986,	// (0x0001afe9) list_setting_pane_vc_t1

0x399a,	// (0x0001affd) list_setting_pane_vc_t2_ParamLimits

0x399a,	// (0x0001affd) list_setting_pane_vc_t2

0x0001,

0xfa2a,	// (0x0002708d) list_setting_pane_vc_t_ParamLimits

0xfa2a,	// (0x0002708d) list_setting_pane_vc_t

0x385d,	// (0x0001aec0) set_value_pane_cp_vc_ParamLimits

0x385d,	// (0x0001aec0) set_value_pane_cp_vc

0x3761,	// (0x0001adc4) list_single_number_heading_pane_vc_g1_ParamLimits

0x3761,	// (0x0001adc4) list_single_number_heading_pane_vc_g1

0x376d,	// (0x0001add0) list_single_number_heading_pane_vc_g2_ParamLimits

0x376d,	// (0x0001add0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00026c2b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00026c2b) list_single_number_heading_pane_vc_g

0x37d5,	// (0x0001ae38) list_single_number_heading_pane_vc_t1_ParamLimits

0x37d5,	// (0x0001ae38) list_single_number_heading_pane_vc_t1

0x39ae,	// (0x0001b011) list_single_number_heading_pane_vc_t2_ParamLimits

0x39ae,	// (0x0001b011) list_single_number_heading_pane_vc_t2

0x39c0,	// (0x0001b023) list_single_number_heading_pane_vc_t3_ParamLimits

0x39c0,	// (0x0001b023) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2f,	// (0x00027092) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x00027092) list_single_number_heading_pane_vc_t

0x3036,	// (0x0001a699) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3036,	// (0x0001a699) list_single_graphic_heading_pane_vc_g1

0x3761,	// (0x0001adc4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3761,	// (0x0001adc4) list_single_graphic_heading_pane_vc_g4

0x376d,	// (0x0001add0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x376d,	// (0x0001add0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5c1,	// (0x00026c24) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x00026c24) list_single_graphic_heading_pane_vc_g

0x37d5,	// (0x0001ae38) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x37d5,	// (0x0001ae38) list_single_graphic_heading_pane_vc_t1

0x39d2,	// (0x0001b035) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x39d2,	// (0x0001b035) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa36,	// (0x00027099) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x00027099) list_single_graphic_heading_pane_vc_t

0x3761,	// (0x0001adc4) list_double2_pane_vc_g1_ParamLimits

0x3761,	// (0x0001adc4) list_double2_pane_vc_g1

0x376d,	// (0x0001add0) list_double2_pane_vc_g2_ParamLimits

0x376d,	// (0x0001add0) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00026c2b) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00026c2b) list_double2_pane_vc_g

0x39e4,	// (0x0001b047) list_double2_pane_vc_t1_ParamLimits

0x39e4,	// (0x0001b047) list_double2_pane_vc_t1

0x39fa,	// (0x0001b05d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x39fa,	// (0x0001b05d) list_double2_large_graphic_pane_vc_g1

0x3a06,	// (0x0001b069) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3a06,	// (0x0001b069) list_double2_large_graphic_pane_vc_g2

0x3a12,	// (0x0001b075) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3a12,	// (0x0001b075) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00026c48) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00026c48) list_double2_large_graphic_pane_vc_g

0x3a1e,	// (0x0001b081) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3a1e,	// (0x0001b081) list_double2_large_graphic_pane_vc_t1

0x3a34,	// (0x0001b097) list_double_time_pane_vc_g1_ParamLimits

0x3a34,	// (0x0001b097) list_double_time_pane_vc_g1

0x3a40,	// (0x0001b0a3) list_double_time_pane_vc_g2_ParamLimits

0x3a40,	// (0x0001b0a3) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0002709e) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0002709e) list_double_time_pane_vc_g

0x3a4c,	// (0x0001b0af) list_double_time_pane_vc_t1_ParamLimits

0x3a4c,	// (0x0001b0af) list_double_time_pane_vc_t1

0x3a6a,	// (0x0001b0cd) list_double_time_pane_vc_t2_ParamLimits

0x3a6a,	// (0x0001b0cd) list_double_time_pane_vc_t2

0x3aae,	// (0x0001b111) list_double_time_pane_vc_t3_ParamLimits

0x3aae,	// (0x0001b111) list_double_time_pane_vc_t3

0x3ac0,	// (0x0001b123) list_double_time_pane_vc_t4_ParamLimits

0x3ac0,	// (0x0001b123) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x000270a3) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x000270a3) list_double_time_pane_vc_t

0x3761,	// (0x0001adc4) list_double_pane_vc_g1_ParamLimits

0x3761,	// (0x0001adc4) list_double_pane_vc_g1

0x376d,	// (0x0001add0) list_double_pane_vc_g2_ParamLimits

0x376d,	// (0x0001add0) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00026c2b) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00026c2b) list_double_pane_vc_g

0x3ad2,	// (0x0001b135) list_double_pane_vc_t1_ParamLimits

0x3ad2,	// (0x0001b135) list_double_pane_vc_t1

0x3ae4,	// (0x0001b147) list_double_pane_vc_t2_ParamLimits

0x3ae4,	// (0x0001b147) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x000270ac) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x000270ac) list_double_pane_vc_t

0x3761,	// (0x0001adc4) list_double_number_pane_vc_g1_ParamLimits

0x3761,	// (0x0001adc4) list_double_number_pane_vc_g1

0x376d,	// (0x0001add0) list_double_number_pane_vc_g2_ParamLimits

0x376d,	// (0x0001add0) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00026c2b) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00026c2b) list_double_number_pane_vc_g

0x3afa,	// (0x0001b15d) list_double_number_pane_vc_t1_ParamLimits

0x3afa,	// (0x0001b15d) list_double_number_pane_vc_t1

0x3b0e,	// (0x0001b171) list_double_number_pane_vc_t2_ParamLimits

0x3b0e,	// (0x0001b171) list_double_number_pane_vc_t2

0x3b20,	// (0x0001b183) list_double_number_pane_vc_t3_ParamLimits

0x3b20,	// (0x0001b183) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x000270b1) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x000270b1) list_double_number_pane_vc_t

0x3b36,	// (0x0001b199) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3b36,	// (0x0001b199) list_double_large_graphic_pane_vc_g1

0x3b42,	// (0x0001b1a5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3b42,	// (0x0001b1a5) list_double_large_graphic_pane_vc_g2

0x3b53,	// (0x0001b1b6) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3b53,	// (0x0001b1b6) list_double_large_graphic_pane_vc_g3

0x3b5f,	// (0x0001b1c2) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3b5f,	// (0x0001b1c2) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x000270b8) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x000270b8) list_double_large_graphic_pane_vc_g

0x3b6b,	// (0x0001b1ce) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3b6b,	// (0x0001b1ce) list_double_large_graphic_pane_vc_t1

0x3b7d,	// (0x0001b1e0) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3b7d,	// (0x0001b1e0) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x000270c1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x000270c1) list_double_large_graphic_pane_vc_t

0x3761,	// (0x0001adc4) list_double_heading_pane_vc_g1_ParamLimits

0x3761,	// (0x0001adc4) list_double_heading_pane_vc_g1

0x376d,	// (0x0001add0) list_double_heading_pane_vc_g2_ParamLimits

0x376d,	// (0x0001add0) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00026c2b) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00026c2b) list_double_heading_pane_vc_g

0x3b97,	// (0x0001b1fa) list_double_heading_pane_vc_t1_ParamLimits

0x3b97,	// (0x0001b1fa) list_double_heading_pane_vc_t1

0x37d5,	// (0x0001ae38) list_double_heading_pane_vc_t2_ParamLimits

0x37d5,	// (0x0001ae38) list_double_heading_pane_vc_t2

0x0001,

0xfa63,	// (0x000270c6) list_double_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x000270c6) list_double_heading_pane_vc_t

0x3ba9,	// (0x0001b20c) list_double_graphic_pane_vc_g1_ParamLimits

0x3ba9,	// (0x0001b20c) list_double_graphic_pane_vc_g1

0x3bbc,	// (0x0001b21f) list_double_graphic_pane_vc_g2_ParamLimits

0x3bbc,	// (0x0001b21f) list_double_graphic_pane_vc_g2

0x3761,	// (0x0001adc4) list_double_graphic_pane_vc_g3_ParamLimits

0x3761,	// (0x0001adc4) list_double_graphic_pane_vc_g3

0x0003,

0xfa68,	// (0x000270cb) list_double_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x000270cb) list_double_graphic_pane_vc_g

0x3bd9,	// (0x0001b23c) list_double_graphic_pane_vc_t1_ParamLimits

0x3bd9,	// (0x0001b23c) list_double_graphic_pane_vc_t1

0x3bf7,	// (0x0001b25a) list_double_graphic_pane_vc_t2_ParamLimits

0x3bf7,	// (0x0001b25a) list_double_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x000270d4) list_double_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x000270d4) list_double_graphic_pane_vc_t

0x3ffe,	// (0x0001b661) aid_size_cell_fastswap

0x7b0d,	// (0x0001f170) aid_size_cell_touch_ParamLimits

0x7b0d,	// (0x0001f170) aid_size_cell_touch

0x414b,	// (0x0001b7ae) popup_fast_swap_wide_window_ParamLimits

0x414b,	// (0x0001b7ae) popup_fast_swap_wide_window

0x7c6e,	// (0x0001f2d1) touch_pane_ParamLimits

0x7c6e,	// (0x0001f2d1) touch_pane

0x34a2,	// (0x0001ab05) button_value_adjust_pane_cp2

0xd726,	// (0x00024d89) button_value_adjust_pane_cp4

0x34c2,	// (0x0001ab25) form_field_data_pane_cp2

0x76f0,	// (0x0001ed53) form_field_data_wide_pane_cp2

0xbb96,	// (0x000231f9) bg_scroll_pane_ParamLimits

0x4438,	// (0x0001ba9b) scroll_handle_pane_ParamLimits

0x444c,	// (0x0001baaf) scroll_sc2_down_pane_ParamLimits

0x444c,	// (0x0001baaf) scroll_sc2_down_pane

0xbbc7,	// (0x0002322a) scroll_sc2_up_pane_ParamLimits

0xbbc7,	// (0x0002322a) scroll_sc2_up_pane

0x9677,	// (0x00020cda) grid_wheel_folder_pane_g1_ParamLimits

0x9677,	// (0x00020cda) grid_wheel_folder_pane_g1

0x4600,	// (0x0001bc63) clock_nsta_pane_cp2_ParamLimits

0x4600,	// (0x0001bc63) clock_nsta_pane_cp2

0x8343,	// (0x0001f9a6) listscroll_midp_pane_ParamLimits

0x8352,	// (0x0001f9b5) midp_canvas_pane

0x4847,	// (0x0001beaa) nsta_clock_indic_pane

0xc36d,	// (0x000239d0) listscroll_form_pane_vc

0xc375,	// (0x000239d8) listscroll_set_pane_vc_ParamLimits

0xc375,	// (0x000239d8) listscroll_set_pane_vc

0x8c64,	// (0x000202c7) clock_nsta_pane

0x8c87,	// (0x000202ea) indicator_nsta_pane

0xc48e,	// (0x00023af1) bg_popup_sub_pane_cp2_ParamLimits

0xc4a2,	// (0x00023b05) find_pane_cp2_ParamLimits

0xc4a2,	// (0x00023b05) find_pane_cp2

0xc4b4,	// (0x00023b17) grid_toobar_pane_ParamLimits

0xc58c,	// (0x00023bef) list_form_gen_pane_vc_ParamLimits

0xc58c,	// (0x00023bef) list_form_gen_pane_vc

0xc5a2,	// (0x00023c05) scroll_pane_cp8_vc_ParamLimits

0xc5a2,	// (0x00023c05) scroll_pane_cp8_vc

0xc628,	// (0x00023c8b) data_form_wide_pane_vc_ParamLimits

0xc628,	// (0x00023c8b) data_form_wide_pane_vc

0xc634,	// (0x00023c97) form_field_data_wide_pane_vc_g1

0xc63c,	// (0x00023c9f) form_field_data_wide_pane_vc_t1_ParamLimits

0xc63c,	// (0x00023c9f) form_field_data_wide_pane_vc_t1

0xb814,	// (0x00022e77) input_focus_pane_cp6_vc_ParamLimits

0xb814,	// (0x00022e77) input_focus_pane_cp6_vc

0x8fd4,	// (0x00020637) list_midp_pane_ParamLimits

0xd748,	// (0x00024dab) scroll_pane_cp16_ParamLimits

0xd748,	// (0x00024dab) scroll_pane_cp16

0xc93a,	// (0x00023f9d) button_value_adjust_pane_ParamLimits

0xc93a,	// (0x00023f9d) button_value_adjust_pane

0x92e1,	// (0x00020944) button_value_adjust_pane_cp6_ParamLimits

0x92e1,	// (0x00020944) button_value_adjust_pane_cp6

0x93eb,	// (0x00020a4e) settings_code_pane_cp_ParamLimits

0x93eb,	// (0x00020a4e) settings_code_pane_cp

0xb194,	// (0x000227f7) cell_touch_pane_g1

0xb194,	// (0x000227f7) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00026d66) cell_touch_pane_g

0x956f,	// (0x00020bd2) cell_touch_pane_cp_ParamLimits

0x956f,	// (0x00020bd2) cell_touch_pane_cp

0x958b,	// (0x00020bee) cell_touch_pane_ParamLimits

0x958b,	// (0x00020bee) cell_touch_pane

0xb194,	// (0x000227f7) scroll_sc2_down_pane_g1

0xb194,	// (0x000227f7) scroll_sc2_up_pane_g1

0xb216,	// (0x00022879) bg_set_opt_pane_cp4_vc

0xda70,	// (0x000250d3) list_set_graphic_pane_vc_g1_ParamLimits

0xda70,	// (0x000250d3) list_set_graphic_pane_vc_g1

0xda7c,	// (0x000250df) list_set_graphic_pane_vc_g2_ParamLimits

0xda7c,	// (0x000250df) list_set_graphic_pane_vc_g2

0x0001,

0xf9ec,	// (0x0002704f) list_set_graphic_pane_vc_g_ParamLimits

0xf9ec,	// (0x0002704f) list_set_graphic_pane_vc_g

0xda88,	// (0x000250eb) text_primary_small_cp13_vc_ParamLimits

0xda88,	// (0x000250eb) text_primary_small_cp13_vc

0xdaa0,	// (0x00025103) list_set_graphic_pane_vc_ParamLimits

0xdaa0,	// (0x00025103) list_set_graphic_pane_vc

0xb216,	// (0x00022879) input_focus_pane_cp2_vc

0xb194,	// (0x000227f7) setting_code_pane_vc_g1

0xdab3,	// (0x00025116) setting_code_pane_vc_t1

0xdac1,	// (0x00025124) set_text_pane_vc_t1_ParamLimits

0xdac1,	// (0x00025124) set_text_pane_vc_t1

0xb216,	// (0x00022879) input_focus_pane_cp1_vc

0xdadc,	// (0x0002513f) list_set_text_pane_vc

0xb194,	// (0x000227f7) setting_text_pane_vc_g1

0xb216,	// (0x00022879) bg_set_opt_pane_cp2_vc

0xdae6,	// (0x00025149) setting_slider_graphic_pane_vc_g1

0xdaee,	// (0x00025151) setting_slider_graphic_pane_vc_t1

0xdafc,	// (0x0002515f) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f1,	// (0x00027054) setting_slider_graphic_pane_vc_t

0xdb0a,	// (0x0002516d) slider_set_pane_cp_vc

0xdb12,	// (0x00025175) slider_set_pane_vc_g1

0xdb1b,	// (0x0002517e) slider_set_pane_vc_g2

0x0006,

0xf9f6,	// (0x00027059) slider_set_pane_vc_g

0xb86f,	// (0x00022ed2) set_opt_bg_pane_g1_copy1

0xb877,	// (0x00022eda) set_opt_bg_pane_g2_copy1

0xdb47,	// (0x000251aa) set_opt_bg_pane_g3_copy1

0xb887,	// (0x00022eea) set_opt_bg_pane_g4_copy1

0xb88f,	// (0x00022ef2) set_opt_bg_pane_g5_copy1

0xb897,	// (0x00022efa) set_opt_bg_pane_g6_copy1

0xdb4f,	// (0x000251b2) set_opt_bg_pane_g7_copy1

0xdb57,	// (0x000251ba) set_opt_bg_pane_g8_copy1

0xdb5f,	// (0x000251c2) set_opt_bg_pane_g9_copy1

0xb216,	// (0x00022879) bg_set_opt_pane_cp_vc

0xdb67,	// (0x000251ca) setting_slider_pane_vc_t1

0xdaee,	// (0x00025151) setting_slider_pane_vc_t2

0xdafc,	// (0x0002515f) setting_slider_pane_vc_t3

0x0002,

0xfa05,	// (0x00027068) setting_slider_pane_vc_t

0xdb0a,	// (0x0002516d) slider_set_pane_vc

0x4e0c,	// (0x0001c46f) volume_set_pane_vc_g1

0x50f3,	// (0x0001c756) volume_set_pane_vc_g2

0x50fc,	// (0x0001c75f) volume_set_pane_vc_g3

0x5105,	// (0x0001c768) volume_set_pane_vc_g4

0x510e,	// (0x0001c771) volume_set_pane_vc_g5

0x5117,	// (0x0001c77a) volume_set_pane_vc_g6

0x5120,	// (0x0001c783) volume_set_pane_vc_g7

0x5129,	// (0x0001c78c) volume_set_pane_vc_g8

0x5132,	// (0x0001c795) volume_set_pane_vc_g9

0x513b,	// (0x0001c79e) volume_set_pane_vc_g10

0x0009,

0xfa0c,	// (0x0002706f) volume_set_pane_vc_g

0xdb76,	// (0x000251d9) volume_set_pane_vc

0xdb7e,	// (0x000251e1) button_value_adjust_pane_cp1_vc

0xdb88,	// (0x000251eb) list_highlight_pane_cp2_vc

0xdb91,	// (0x000251f4) list_set_pane_vc_ParamLimits

0xdb91,	// (0x000251f4) list_set_pane_vc

0xdbe3,	// (0x00025246) main_pane_set_vc_t1_ParamLimits

0xdbe3,	// (0x00025246) main_pane_set_vc_t1

0xdbf8,	// (0x0002525b) main_pane_set_vc_t2_ParamLimits

0xdbf8,	// (0x0002525b) main_pane_set_vc_t2

0xdc0a,	// (0x0002526d) main_pane_set_vc_t3_ParamLimits

0xdc0a,	// (0x0002526d) main_pane_set_vc_t3

0xdc1c,	// (0x0002527f) main_pane_set_vc_t4_ParamLimits

0xdc1c,	// (0x0002527f) main_pane_set_vc_t4

0x0003,

0xfa21,	// (0x00027084) main_pane_set_vc_t_ParamLimits

0xfa21,	// (0x00027084) main_pane_set_vc_t

0xdc2e,	// (0x00025291) setting_code_pane_vc_ParamLimits

0xdc2e,	// (0x00025291) setting_code_pane_vc

0xdc3d,	// (0x000252a0) setting_slider_graphic_pane_vc

0xdc3d,	// (0x000252a0) setting_slider_pane_vc

0xdc3d,	// (0x000252a0) setting_text_pane_vc

0xdc3d,	// (0x000252a0) setting_volume_pane_vc

0xdc45,	// (0x000252a8) scroll_pane_cp121_vc

0xb7ff,	// (0x00022e62) set_content_pane_vc

0xdc4d,	// (0x000252b0) button_value_adjust_pane_g1

0xdc56,	// (0x000252b9) button_value_adjust_pane_g2

0x0001,

0xfa76,	// (0x000270d9) button_value_adjust_pane_g

0xdc5f,	// (0x000252c2) form_field_slider_wide_pane_vc_t1_ParamLimits

0xdc5f,	// (0x000252c2) form_field_slider_wide_pane_vc_t1

0xdc75,	// (0x000252d8) form_field_slider_wide_pane_vc_t2_ParamLimits

0xdc75,	// (0x000252d8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7b,	// (0x000270de) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x000270de) form_field_slider_wide_pane_vc_t

0xb264,	// (0x000228c7) input_focus_pane_cp10_vc_ParamLimits

0xb264,	// (0x000228c7) input_focus_pane_cp10_vc

0xdca0,	// (0x00025303) slider_cont_pane_cp1_vc_ParamLimits

0xdca0,	// (0x00025303) slider_cont_pane_cp1_vc

0xdb12,	// (0x00025175) slider_form_pane_g1_cp2

0xdb1b,	// (0x0002517e) slider_form_pane_g2_cp2

0xdcbb,	// (0x0002531e) form_field_slider_pane_vc_t3

0xdcc9,	// (0x0002532c) form_field_slider_pane_vc_t4

0xdcd7,	// (0x0002533a) slider_form_pane_vc_ParamLimits

0xdcd7,	// (0x0002533a) slider_form_pane_vc

0xdce4,	// (0x00025347) form_field_slider_pane_vc_t1_ParamLimits

0xdce4,	// (0x00025347) form_field_slider_pane_vc_t1

0xdcfa,	// (0x0002535d) form_field_slider_pane_vc_t2_ParamLimits

0xdcfa,	// (0x0002535d) form_field_slider_pane_vc_t2

0x0001,

0xfa8d,	// (0x000270f0) form_field_slider_pane_vc_t_ParamLimits

0xfa8d,	// (0x000270f0) form_field_slider_pane_vc_t

0xb264,	// (0x000228c7) input_focus_pane_cp9_vc_ParamLimits

0xb264,	// (0x000228c7) input_focus_pane_cp9_vc

0xdd0c,	// (0x0002536f) slider_cont_pane_vc_ParamLimits

0xdd0c,	// (0x0002536f) slider_cont_pane_vc

0xdd1e,	// (0x00025381) list_form_graphic_pane_cp_vc_ParamLimits

0xdd1e,	// (0x00025381) list_form_graphic_pane_cp_vc

0xc634,	// (0x00023c97) form_field_popup_wide_pane_vc_g1

0xdd33,	// (0x00025396) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdd33,	// (0x00025396) form_field_popup_wide_pane_vc_t1

0xb814,	// (0x00022e77) input_focus_pane_cp8_vc_ParamLimits

0xb814,	// (0x00022e77) input_focus_pane_cp8_vc

0xdd72,	// (0x000253d5) list_form_wide_pane_vc_ParamLimits

0xdd72,	// (0x000253d5) list_form_wide_pane_vc

0xdd7e,	// (0x000253e1) list_form_graphic_pane_vc_g1

0xdd86,	// (0x000253e9) list_form_graphic_pane_vc_t1_ParamLimits

0xdd86,	// (0x000253e9) list_form_graphic_pane_vc_t1

0xb27a,	// (0x000228dd) list_highlight_pane_cp5_vc_ParamLimits

0xb27a,	// (0x000228dd) list_highlight_pane_cp5_vc

0xdda2,	// (0x00025405) list_form_graphic_pane_vc_ParamLimits

0xdda2,	// (0x00025405) list_form_graphic_pane_vc

0xc634,	// (0x00023c97) form_field_popup_pane_vc_g1

0xddb8,	// (0x0002541b) form_field_popup_pane_vc_t1_ParamLimits

0xddb8,	// (0x0002541b) form_field_popup_pane_vc_t1

0xb814,	// (0x00022e77) input_focus_pane_cp7_vc_ParamLimits

0xb814,	// (0x00022e77) input_focus_pane_cp7_vc

0xddcd,	// (0x00025430) list_form_pane_vc_ParamLimits

0xddcd,	// (0x00025430) list_form_pane_vc

0xddd9,	// (0x0002543c) data_form_pane_vc_t1_ParamLimits

0xddd9,	// (0x0002543c) data_form_pane_vc_t1

0xb86f,	// (0x00022ed2) input_focus_pane_vc_g1

0xb877,	// (0x00022eda) input_focus_pane_vc_g2

0xb87f,	// (0x00022ee2) input_focus_pane_vc_g3

0xb887,	// (0x00022eea) input_focus_pane_vc_g4

0xb88f,	// (0x00022ef2) input_focus_pane_vc_g5

0xb897,	// (0x00022efa) input_focus_pane_vc_g6

0xb89f,	// (0x00022f02) input_focus_pane_vc_g7

0xb8a7,	// (0x00022f0a) input_focus_pane_vc_g8

0xb8af,	// (0x00022f12) input_focus_pane_vc_g9

0xb194,	// (0x000227f7) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00026cef) input_focus_pane_vc_g

0xc628,	// (0x00023c8b) data_form_pane_vc_ParamLimits

0xc628,	// (0x00023c8b) data_form_pane_vc

0xc634,	// (0x00023c97) form_field_data_pane_vc_g1

0xddf4,	// (0x00025457) form_field_data_pane_vc_t1_ParamLimits

0xddf4,	// (0x00025457) form_field_data_pane_vc_t1

0xb814,	// (0x00022e77) input_focus_pane_vc_ParamLimits

0xb814,	// (0x00022e77) input_focus_pane_vc

0xc5f2,	// (0x00023c55) button_value_adjust_pane_cp3_vc

0xd726,	// (0x00024d89) button_value_adjust_pane_cp5_vc

0xde0a,	// (0x0002546d) form_field_data_pane_vc_ParamLimits

0xde0a,	// (0x0002546d) form_field_data_pane_vc

0xc5fa,	// (0x00023c5d) form_field_data_pane_vc_cp2

0xde21,	// (0x00025484) form_field_data_wide_pane_vc_ParamLimits

0xde21,	// (0x00025484) form_field_data_wide_pane_vc

0xde37,	// (0x0002549a) form_field_data_wide_pane_vc_cp2

0xde3f,	// (0x000254a2) form_field_popup_pane_vc_ParamLimits

0xde3f,	// (0x000254a2) form_field_popup_pane_vc

0xde56,	// (0x000254b9) form_field_popup_wide_pane_vc_ParamLimits

0xde56,	// (0x000254b9) form_field_popup_wide_pane_vc

0xde6c,	// (0x000254cf) form_field_slider_pane_vc_ParamLimits

0xde6c,	// (0x000254cf) form_field_slider_pane_vc

0xde7f,	// (0x000254e2) form_field_slider_wide_pane_vc_ParamLimits

0xde7f,	// (0x000254e2) form_field_slider_wide_pane_vc

0x95a9,	// (0x00020c0c) grid_touch_1_pane_ParamLimits

0x95a9,	// (0x00020c0c) grid_touch_1_pane

0x95bd,	// (0x00020c20) grid_touch_2_pane_ParamLimits

0x95bd,	// (0x00020c20) grid_touch_2_pane

0xde92,	// (0x000254f5) touch_pane_g1_ParamLimits

0xde92,	// (0x000254f5) touch_pane_g1

0xdea0,	// (0x00025503) cell_app_pane_cp_wide_ParamLimits

0xdea0,	// (0x00025503) cell_app_pane_cp_wide

0xdeb0,	// (0x00025513) grid_popup_fast_wide_pane_ParamLimits

0xdeb0,	// (0x00025513) grid_popup_fast_wide_pane

0xdec4,	// (0x00025527) scroll_pane_cp19_ParamLimits

0xdec4,	// (0x00025527) scroll_pane_cp19

0xb216,	// (0x00022879) bg_popup_window_pane_cp20

0xded8,	// (0x0002553b) listscroll_popup_fast_wide_pane

0xc602,	// (0x00023c65) grid_indicator_nsta_pane

0xdee0,	// (0x00025543) clock_nsta_pane_g1

0xdee9,	// (0x0002554c) clock_nsta_pane_t1

0x95e7,	// (0x00020c4a) cell_indicator_nsta_pane_ParamLimits

0x95e7,	// (0x00020c4a) cell_indicator_nsta_pane

0xde92,	// (0x000254f5) cell_indicator_nsta_pane_g1

0x95fe,	// (0x00020c61) cell_indicator_nsta_pane_g2

0x0001,

0xfa9e,	// (0x00027101) cell_indicator_nsta_pane_g

0xdf05,	// (0x00025568) clock_nsta_pane_cp

0xdf0d,	// (0x00025570) indicator_nsta_pane_cp

0xdf16,	// (0x00025579) nsta_clock_indic_pane_g1

0xb2b6,	// (0x00022919) grid_indicator_pane

0xbcb9,	// (0x0002331c) scroll_pane_cp29

0x4557,	// (0x0001bbba) indicator_nsta_pane_cp2_ParamLimits

0x4557,	// (0x0001bbba) indicator_nsta_pane_cp2

0xb27a,	// (0x000228dd) main_apps_wheel_pane

0xc7d3,	// (0x00023e36) form_midp_field_text_pane_ParamLimits

0xc900,	// (0x00023f63) scroll_bar_cp050_ParamLimits

0xdf7f,	// (0x000255e2) cell_indicator_pane_ParamLimits

0xdf7f,	// (0x000255e2) cell_indicator_pane

0xdf95,	// (0x000255f8) cell_indicator_pane_g1

0x960b,	// (0x00020c6e) grid_wheel_folder_pane_ParamLimits

0x960b,	// (0x00020c6e) grid_wheel_folder_pane

0x9619,	// (0x00020c7c) list_wheel_apps_pane_ParamLimits

0x9619,	// (0x00020c7c) list_wheel_apps_pane

0x9625,	// (0x00020c88) main_apps_wheel_pane_g1_ParamLimits

0x9625,	// (0x00020c88) main_apps_wheel_pane_g1

0x9631,	// (0x00020c94) main_apps_wheel_pane_g2_ParamLimits

0x9631,	// (0x00020c94) main_apps_wheel_pane_g2

0x0001,

0xfaba,	// (0x0002711d) main_apps_wheel_pane_g_ParamLimits

0xfaba,	// (0x0002711d) main_apps_wheel_pane_g

0x963d,	// (0x00020ca0) main_apps_wheel_pane_t1_ParamLimits

0x963d,	// (0x00020ca0) main_apps_wheel_pane_t1

0x964f,	// (0x00020cb2) list_wheel_apps_pane_g1

0x9657,	// (0x00020cba) list_wheel_apps_pane_g2

0x965f,	// (0x00020cc2) list_wheel_apps_pane_g3

0x9667,	// (0x00020cca) list_wheel_apps_pane_g4

0x966f,	// (0x00020cd2) list_wheel_apps_pane_g5

0x0004,

0xfabf,	// (0x00027122) list_wheel_apps_pane_g

0xb27a,	// (0x000228dd) navi_icon_text_pane

0x8b70,	// (0x000201d3) aid_fill_nsta

0xdf9f,	// (0x00025602) navi_icon_text_pane_g1

0xdfab,	// (0x0002560e) navi_icon_text_pane_t1

0xbf33,	// (0x00023596) list_set_graphic_pane_t1_ParamLimits

0xbf33,	// (0x00023596) list_set_graphic_pane_t1

0xcfe6,	// (0x00024649) popup_midp_note_alarm_window_t6_ParamLimits

0xcfe6,	// (0x00024649) popup_midp_note_alarm_window_t6

0xcff8,	// (0x0002465b) popup_midp_note_alarm_window_t7_ParamLimits

0xcff8,	// (0x0002465b) popup_midp_note_alarm_window_t7

0xd00a,	// (0x0002466d) popup_midp_note_alarm_window_t8_ParamLimits

0xd00a,	// (0x0002466d) popup_midp_note_alarm_window_t8

0xd01c,	// (0x0002467f) popup_midp_note_alarm_window_t9_ParamLimits

0xd01c,	// (0x0002467f) popup_midp_note_alarm_window_t9

0xd02e,	// (0x00024691) popup_midp_note_alarm_window_t10_ParamLimits

0xd02e,	// (0x00024691) popup_midp_note_alarm_window_t10

0xd040,	// (0x000246a3) popup_midp_note_alarm_window_t11_ParamLimits

0xd040,	// (0x000246a3) popup_midp_note_alarm_window_t11

0xd052,	// (0x000246b5) scroll_pane_cp17_ParamLimits

0xd052,	// (0x000246b5) scroll_pane_cp17

0x4e0c,	// (0x0001c46f) volume_small_pane_cp_g1

0x5144,	// (0x0001c7a7) volume_small_pane_cp_g2

0x514d,	// (0x0001c7b0) volume_small_pane_cp_g3

0x5156,	// (0x0001c7b9) volume_small_pane_cp_g4

0x4e39,	// (0x0001c49c) volume_small_pane_cp_g5

0x515f,	// (0x0001c7c2) volume_small_pane_cp_g6

0x5168,	// (0x0001c7cb) volume_small_pane_cp_g7

0x5171,	// (0x0001c7d4) volume_small_pane_cp_g8

0x517a,	// (0x0001c7dd) volume_small_pane_cp_g9

0x5183,	// (0x0001c7e6) volume_small_pane_cp_g10

0xc1e2,	// (0x00023845) midp_ticker_pane_g1_ParamLimits

0xc1ee,	// (0x00023851) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00026dbb) midp_ticker_pane_g_ParamLimits

0xc1fa,	// (0x0002385d) midp_ticker_pane_t1_ParamLimits

0x8b86,	// (0x000201e9) aid_fill_nsta_2

0xc8ec,	// (0x00023f4f) list_form2_midp_pane

0xd6a3,	// (0x00024d06) midp_editing_number_pane_ParamLimits

0xd6af,	// (0x00024d12) midp_ticker_pane_ParamLimits

0xdfbd,	// (0x00025620) form2_midp_field_pane

0xdfc5,	// (0x00025628) scroll_pane_cp51

0xdfe5,	// (0x00025648) form2_midp_button_pane_ParamLimits

0xdfe5,	// (0x00025648) form2_midp_button_pane

0xdff7,	// (0x0002565a) form2_midp_content_pane_ParamLimits

0xdff7,	// (0x0002565a) form2_midp_content_pane

0xe011,	// (0x00025674) form2_midp_field_choice_group_pane

0xe019,	// (0x0002567c) form2_midp_field_pane_g1

0xe021,	// (0x00025684) form2_midp_field_pane_g2

0xe029,	// (0x0002568c) form2_midp_field_pane_g3

0xe031,	// (0x00025694) form2_midp_field_pane_g4

0x0003,

0xfae4,	// (0x00027147) form2_midp_field_pane_g

0xe039,	// (0x0002569c) form2_midp_gauge_slider_pane

0xe041,	// (0x000256a4) form2_midp_gauge_wait_pane

0xe049,	// (0x000256ac) form2_midp_image_pane_ParamLimits

0xe049,	// (0x000256ac) form2_midp_image_pane

0xe064,	// (0x000256c7) form2_midp_label_pane_ParamLimits

0xe064,	// (0x000256c7) form2_midp_label_pane

0x96a4,	// (0x00020d07) form2_midp_label_pane_cp_ParamLimits

0x96a4,	// (0x00020d07) form2_midp_label_pane_cp

0xe07d,	// (0x000256e0) form2_midp_string_pane_ParamLimits

0xe07d,	// (0x000256e0) form2_midp_string_pane

0x3c15,	// (0x0001b278) form2_midp_text_pane_ParamLimits

0x3c15,	// (0x0001b278) form2_midp_text_pane

0xe08f,	// (0x000256f2) form2_midp_time_pane

0xe09f,	// (0x00025702) input_focus_pane_cp51_ParamLimits

0xe09f,	// (0x00025702) input_focus_pane_cp51

0xe0b7,	// (0x0002571a) form2_midp_label_pane_t1_ParamLimits

0xe0b7,	// (0x0002571a) form2_midp_label_pane_t1

0x3c2e,	// (0x0001b291) form2_mdip_text_pane_t1_ParamLimits

0x3c2e,	// (0x0001b291) form2_mdip_text_pane_t1

0x3c49,	// (0x0001b2ac) form2_midp_time_pane_t1

0xe0ff,	// (0x00025762) form2_midp_gauge_slider_pane_t1

0x96c3,	// (0x00020d26) form2_midp_gauge_slider_pane_t2

0x96d5,	// (0x00020d38) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaed,	// (0x00027150) form2_midp_gauge_slider_pane_t

0xe111,	// (0x00025774) form2_midp_slider_pane

0xe11d,	// (0x00025780) form2_midp_gauge_wait_pane_t1

0xe12b,	// (0x0002578e) form2_midp_wait_pane_ParamLimits

0xe12b,	// (0x0002578e) form2_midp_wait_pane

0xc672,	// (0x00023cd5) list_single_2graphic_pane_cp4_ParamLimits

0xc672,	// (0x00023cd5) list_single_2graphic_pane_cp4

0xe156,	// (0x000257b9) list_single_midp_graphic_pane_cp_ParamLimits

0xe156,	// (0x000257b9) list_single_midp_graphic_pane_cp

0xb216,	// (0x00022879) list_highlight_pane_cp20

0xe174,	// (0x000257d7) list_single_2graphic_pane_g1_cp4

0xd79d,	// (0x00024e00) list_single_2graphic_pane_g2_cp4

0xe17c,	// (0x000257df) list_single_2graphic_pane_t1_cp4

0xb27a,	// (0x000228dd) list_highlight_pane_cp21

0xe18b,	// (0x000257ee) list_single_midp_graphic_pane_g4_cp

0xe19a,	// (0x000257fd) list_single_midp_graphic_pane_t1_cp

0xe1af,	// (0x00025812) form2_mdip_string_pane_t1_ParamLimits

0xe1af,	// (0x00025812) form2_mdip_string_pane_t1

0xb216,	// (0x00022879) bg_wml_button_pane_cp2

0xb194,	// (0x000227f7) form2_midp_image_pane_g1

0x3279,	// (0x0001a8dc) list_double_large_graphic_pane_g5_ParamLimits

0x3279,	// (0x0001a8dc) list_double_large_graphic_pane_g5

0x8343,	// (0x0001f9a6) midp_form_pane_ParamLimits

0xb27a,	// (0x000228dd) main_apps_wheel_pane_ParamLimits

0x8912,	// (0x0001ff75) popup_preview_window_ParamLimits

0x8912,	// (0x0001ff75) popup_preview_window

0x4cb0,	// (0x0001c313) popup_touch_info_window_ParamLimits

0x4cb0,	// (0x0001c313) popup_touch_info_window

0x4cce,	// (0x0001c331) popup_touch_menu_window_ParamLimits

0x4cce,	// (0x0001c331) popup_touch_menu_window

0xb18a,	// (0x000227ed) bg_popup_sub_pane_cp6

0xe219,	// (0x0002587c) list_touch_menu_pane

0xe221,	// (0x00025884) list_single_touch_menu_pane_ParamLimits

0xe221,	// (0x00025884) list_single_touch_menu_pane

0xe238,	// (0x0002589b) list_single_touch_menu_pane_t1

0xb27a,	// (0x000228dd) bg_popup_sub_pane_cp7_ParamLimits

0xb27a,	// (0x000228dd) bg_popup_sub_pane_cp7

0xe246,	// (0x000258a9) heading_sub_pane

0xe24e,	// (0x000258b1) list_touch_info_pane_ParamLimits

0xe24e,	// (0x000258b1) list_touch_info_pane

0xe25d,	// (0x000258c0) list_single_touch_info_pane_ParamLimits

0xe25d,	// (0x000258c0) list_single_touch_info_pane

0xe26e,	// (0x000258d1) list_single_touch_info_pane_t1

0xe27c,	// (0x000258df) list_single_touch_info_pane_t2

0x0001,

0xfafb,	// (0x0002715e) list_single_touch_info_pane_t

0xc1b8,	// (0x0002381b) bg_popup_heading_pane_cp

0xe28a,	// (0x000258ed) heading_sub_pane_t1

0xc5b8,	// (0x00023c1b) bg_popup_preview_window_pane_cp_ParamLimits

0xc5b8,	// (0x00023c1b) bg_popup_preview_window_pane_cp

0xe246,	// (0x000258a9) heading_preview_pane

0xe24e,	// (0x000258b1) list_preview_pane_ParamLimits

0xe24e,	// (0x000258b1) list_preview_pane

0xe298,	// (0x000258fb) popup_preview_window_g1

0xe25d,	// (0x000258c0) list_single_preview_pane_ParamLimits

0xe25d,	// (0x000258c0) list_single_preview_pane

0xe2a0,	// (0x00025903) list_single_preview_pane_g1

0xe2a8,	// (0x0002590b) list_single_preview_pane_t1

0xe26e,	// (0x000258d1) list_single_preview_pane_t2

0x0001,

0xfb00,	// (0x00027163) list_single_preview_pane_t

0xe2b6,	// (0x00025919) bg_popup_heading_pane_cp2_ParamLimits

0xe2b6,	// (0x00025919) bg_popup_heading_pane_cp2

0xe2cc,	// (0x0002592f) heading_preview_pane_g1

0xe2d4,	// (0x00025937) heading_preview_pane_t1_ParamLimits

0xe2d4,	// (0x00025937) heading_preview_pane_t1

0xb2cd,	// (0x00022930) soft_indicator_pane_t1_ParamLimits

0xb797,	// (0x00022dfa) scroll_pane_ParamLimits

0xbbb5,	// (0x00023218) scroll_sc2_left_pane

0xbbbe,	// (0x00023221) scroll_sc2_right_pane

0xbbdd,	// (0x00023240) scroll_bg_pane_g1_ParamLimits

0xbbf2,	// (0x00023255) scroll_bg_pane_g2_ParamLimits

0xbc0a,	// (0x0002326d) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00026d46) scroll_bg_pane_g_ParamLimits

0xbbdd,	// (0x00023240) scroll_handle_pane_g1_ParamLimits

0xbc2c,	// (0x0002328f) scroll_handle_pane_g2_ParamLimits

0xbc0a,	// (0x0002326d) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00026d4d) scroll_handle_pane_g_ParamLimits

0x487d,	// (0x0001bee0) popup_choice_list_window_ParamLimits

0x487d,	// (0x0001bee0) popup_choice_list_window

0xc49a,	// (0x00023afd) choice_list_pane

0xc510,	// (0x00023b73) cell_toolbar_pane_t1

0xc538,	// (0x00023b9b) toolbar_button_pane_ParamLimits

0xd418,	// (0x00024a7b) ai_gene_pane_1_t2_ParamLimits

0xd418,	// (0x00024a7b) ai_gene_pane_1_t2

0x0001,

0xf8ff,	// (0x00026f62) ai_gene_pane_1_t_ParamLimits

0xf8ff,	// (0x00026f62) ai_gene_pane_1_t

0xe2f1,	// (0x00025954) scroll_sc2_left_pane_g1

0xe2f1,	// (0x00025954) scroll_sc2_right_pane_g1

0xb99a,	// (0x00022ffd) bg_popup_sub_pane_cp10

0xe2fb,	// (0x0002595e) list_choice_list_pane

0xe312,	// (0x00025975) list_single_choice_list_pane_ParamLimits

0xe312,	// (0x00025975) list_single_choice_list_pane

0xe324,	// (0x00025987) list_single_choice_list_pane_g1

0xb985,	// (0x00022fe8) list_single_choice_list_pane_t1_ParamLimits

0xb985,	// (0x00022fe8) list_single_choice_list_pane_t1

0xe32c,	// (0x0002598f) choice_list_pane_g1

0xe334,	// (0x00025997) choice_list_pane_t1

0xb18a,	// (0x000227ed) input_focus_pane_cp11

0xbb1c,	// (0x0002317f) title_pane_stacon_g2_ParamLimits

0xbb1c,	// (0x0002317f) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00026d2c) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00026d2c) title_pane_stacon_g

0xc1b8,	// (0x0002381b) cursor_press_pane

0x8679,	// (0x0001fcdc) popup_fep_hwr_window_ParamLimits

0x8679,	// (0x0001fcdc) popup_fep_hwr_window

0x4975,	// (0x0001bfd8) popup_fep_vkb_window_ParamLimits

0x4975,	// (0x0001bfd8) popup_fep_vkb_window

0xe342,	// (0x000259a5) cursor_press_pane_g1

0x0002,

0xfb29,	// (0x0002718c) fep_vkb_side_pane_g_ParamLimits

0x51c1,	// (0x0001c824) fep_hwr_candidate_pane_ParamLimits

0x51c1,	// (0x0001c824) fep_hwr_candidate_pane

0x51e9,	// (0x0001c84c) fep_hwr_side_pane_ParamLimits

0x51e9,	// (0x0001c84c) fep_hwr_side_pane

0x5209,	// (0x0001c86c) fep_hwr_top_pane_ParamLimits

0x5209,	// (0x0001c86c) fep_hwr_top_pane

0x5221,	// (0x0001c884) fep_hwr_write_pane_ParamLimits

0x5221,	// (0x0001c884) fep_hwr_write_pane

0xfb29,	// (0x0002718c) fep_vkb_side_pane_g

0xe34a,	// (0x000259ad) fep_hwr_top_pane_g1

0xe35c,	// (0x000259bf) fep_hwr_top_pane_g2

0x524d,	// (0x0001c8b0) fep_hwr_top_pane_g3

0x0002,

0xfb05,	// (0x00027168) fep_hwr_top_pane_g

0x5262,	// (0x0001c8c5) fep_hwr_top_text_pane

0xbd26,	// (0x00023389) fep_hwr_top_text_pane_g1

0xe392,	// (0x000259f5) fep_hwr_top_text_pane_t1

0x5350,	// (0x0001c9b3) fep_hwr_candidate_pane_g1

0xe55b,	// (0x00025bbe) fep_vkb_keypad_pane_g3_ParamLimits

0xe55b,	// (0x00025bbe) fep_vkb_keypad_pane_g3

0xe57d,	// (0x00025be0) fep_vkb_keypad_pane_g4_ParamLimits

0xe57d,	// (0x00025be0) fep_vkb_keypad_pane_g4

0xe5ec,	// (0x00025c4f) fep_vkb_bottom_pane_g2_ParamLimits

0xe5ec,	// (0x00025c4f) fep_vkb_bottom_pane_g2

0x0001,

0xfb30,	// (0x00027193) fep_vkb_bottom_pane_g_ParamLimits

0xfb30,	// (0x00027193) fep_vkb_bottom_pane_g

0xe2f1,	// (0x00025954) cell_vkb_side_pane_g2

0x0001,

0xfb3a,	// (0x0002719d) cell_vkb_side_pane_g

0xe630,	// (0x00025c93) cell_vkb_side_pane_t1

0xe63e,	// (0x00025ca1) cell_vkb_side_pane_t1_copy1

0xe2f1,	// (0x00025954) bg_fep_vkb_candidate_pane_g2

0xe70c,	// (0x00025d6f) cell_vkb_candidate_pane_ParamLimits

0xe3a0,	// (0x00025a03) aid_size_cell_vkb_ParamLimits

0xe3a0,	// (0x00025a03) aid_size_cell_vkb

0xe70c,	// (0x00025d6f) cell_vkb_candidate_pane

0x536a,	// (0x0001c9cd) bg_popup_fep_shadow_pane_g1

0xe40a,	// (0x00025a6d) fep_vkb_bottom_pane_ParamLimits

0xe40a,	// (0x00025a6d) fep_vkb_bottom_pane

0xe447,	// (0x00025aaa) fep_vkb_candidate_pane_ParamLimits

0xe447,	// (0x00025aaa) fep_vkb_candidate_pane

0xe463,	// (0x00025ac6) fep_vkb_keypad_pane_ParamLimits

0xe463,	// (0x00025ac6) fep_vkb_keypad_pane

0xe497,	// (0x00025afa) fep_vkb_side_pane_ParamLimits

0xe497,	// (0x00025afa) fep_vkb_side_pane

0xe4c3,	// (0x00025b26) fep_vkb_top_pane_ParamLimits

0xe4c3,	// (0x00025b26) fep_vkb_top_pane

0xe4ef,	// (0x00025b52) fep_vkb_top_pane_g1_ParamLimits

0xe4ef,	// (0x00025b52) fep_vkb_top_pane_g1

0xe4fe,	// (0x00025b61) fep_vkb_top_pane_g2_ParamLimits

0xe4fe,	// (0x00025b61) fep_vkb_top_pane_g2

0xe50d,	// (0x00025b70) fep_vkb_top_pane_g3_ParamLimits

0xe50d,	// (0x00025b70) fep_vkb_top_pane_g3

0x0003,

0xfb20,	// (0x00027183) fep_vkb_top_pane_g_ParamLimits

0xfb20,	// (0x00027183) fep_vkb_top_pane_g

0xe52b,	// (0x00025b8e) fep_vkb_top_text_pane_ParamLimits

0xe52b,	// (0x00025b8e) fep_vkb_top_text_pane

0x9744,	// (0x00020da7) fep_vkb_side_pane_g1_ParamLimits

0x9744,	// (0x00020da7) fep_vkb_side_pane_g1

0xe54a,	// (0x00025bad) grid_vkb_side_pane_ParamLimits

0xe54a,	// (0x00025bad) grid_vkb_side_pane

0x5372,	// (0x0001c9d5) bg_popup_fep_shadow_pane_g2

0x537b,	// (0x0001c9de) bg_popup_fep_shadow_pane_g3

0x5383,	// (0x0001c9e6) bg_popup_fep_shadow_pane_g4

0x538c,	// (0x0001c9ef) bg_popup_fep_shadow_pane_g5

0x5394,	// (0x0001c9f7) bg_popup_fep_shadow_pane_g6

0x539c,	// (0x0001c9ff) bg_popup_fep_shadow_pane_g7

0xb88f,	// (0x00022ef2) bg_popup_fep_shadow_pane_g8

0xe59b,	// (0x00025bfe) grid_vkb_keypad_number_pane_ParamLimits

0xe59b,	// (0x00025bfe) grid_vkb_keypad_number_pane

0xe5ab,	// (0x00025c0e) grid_vkb_keypad_pane_ParamLimits

0xe5ab,	// (0x00025c0e) grid_vkb_keypad_pane

0xe5d1,	// (0x00025c34) fep_vkb_bottom_pane_g1_ParamLimits

0xe5d1,	// (0x00025c34) fep_vkb_bottom_pane_g1

0xe5fa,	// (0x00025c5d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe5fa,	// (0x00025c5d) grid_vkb_keypad_bottom_left_pane

0xe60f,	// (0x00025c72) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe60f,	// (0x00025c72) grid_vkb_keypad_bottom_right_pane

0xe624,	// (0x00025c87) fep_vkb_top_text_pane_g1

0x978b,	// (0x00020dee) fep_vkb_top_text_pane_t1

0x979d,	// (0x00020e00) cell_vkb_side_pane_ParamLimits

0x979d,	// (0x00020e00) cell_vkb_side_pane

0xe2f1,	// (0x00025954) cell_vkb_side_pane_g1

0xe64c,	// (0x00025caf) cell_vkb_keypad_pane_ParamLimits

0xe64c,	// (0x00025caf) cell_vkb_keypad_pane

0xe6b9,	// (0x00025d1c) cell_vkb_keypad_pane_g1

0x0008,

0xfb4d,	// (0x000271b0) bg_popup_fep_shadow_pane_g

0xe2f1,	// (0x00025954) cell_hwr_side_pane_g1

0xe2f1,	// (0x00025954) cell_hwr_side_pane_g2

0xe6c3,	// (0x00025d26) cell_vkb_keypad_pane_t1

0x97b3,	// (0x00020e16) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x97b3,	// (0x00020e16) cell_vkb_keypad_bottom_left_pane

0x97c8,	// (0x00020e2b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x97c8,	// (0x00020e2b) cell_vkb_keypad_bottom_right_pane

0xe2f1,	// (0x00025954) cell_vkb_keypad_bottom_left_pane_g1

0xe2f1,	// (0x00025954) cell_vkb_keypad_bottom_right_pane_g1

0xe6d1,	// (0x00025d34) cell_vkb_keypad_number_pane_ParamLimits

0xe6d1,	// (0x00025d34) cell_vkb_keypad_number_pane

0xe6f0,	// (0x00025d53) cell_vkb_keypad_number_pane_g1

0xe6fa,	// (0x00025d5d) cell_vkb_keypad_number_pane_g2

0xe703,	// (0x00025d66) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3f,	// (0x000271a2) cell_vkb_keypad_number_pane_g

0xe6c3,	// (0x00025d26) cell_vkb_keypad_number_pane_t1

0xe725,	// (0x00025d88) fep_vkb_candidate_pane_g1

0x0001,

0xfb3a,	// (0x0002719d) cell_hwr_side_pane_g

0xe73e,	// (0x00025da1) cell_hwr_side_pane_t1

0x53ac,	// (0x0001ca0f) cell_hwr_side_pane_t1_copy1

0xe51d,	// (0x00025b80) cell_hwr_candidate_pane_g1

0x53ba,	// (0x0001ca1d) cell_hwr_candidate_pane_t1

0xe2f1,	// (0x00025954) cell_vkb_candidate_pane_g2

0xe7c4,	// (0x00025e27) cell_vkb_candidate_pane_t1

0x518c,	// (0x0001c7ef) bg_popup_fep_shadow_pane_ParamLimits

0x518c,	// (0x0001c7ef) bg_popup_fep_shadow_pane

0x1cc0,	// (0x00019323) bg_fep_hwr_top_pane_g4

0xe36e,	// (0x000259d1) bg_hwr_side_pane_g1_ParamLimits

0xe36e,	// (0x000259d1) bg_hwr_side_pane_g1

0x96ff,	// (0x00020d62) cell_hwr_side_pane_ParamLimits

0x96ff,	// (0x00020d62) cell_hwr_side_pane

0x52d9,	// (0x0001c93c) fep_hwr_write_pane_g1_ParamLimits

0x52d9,	// (0x0001c93c) fep_hwr_write_pane_g1

0x52e6,	// (0x0001c949) fep_hwr_write_pane_g2_ParamLimits

0x52e6,	// (0x0001c949) fep_hwr_write_pane_g2

0x52f3,	// (0x0001c956) fep_hwr_write_pane_g3_ParamLimits

0x52f3,	// (0x0001c956) fep_hwr_write_pane_g3

0x971f,	// (0x00020d82) fep_hwr_write_pane_g4_ParamLimits

0x971f,	// (0x00020d82) fep_hwr_write_pane_g4

0x0005,

0xfb0c,	// (0x0002716f) fep_hwr_write_pane_g_ParamLimits

0xfb0c,	// (0x0002716f) fep_hwr_write_pane_g

0x1cc0,	// (0x00019323) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1cc0,	// (0x00019323) bg_fep_hwr_candidate_pane_g2

0x5316,	// (0x0001c979) cell_hwr_candidate_pane_ParamLimits

0x5316,	// (0x0001c979) cell_hwr_candidate_pane

0x5350,	// (0x0001c9b3) fep_hwr_candidate_pane_g1_ParamLimits

0xe3ce,	// (0x00025a31) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe3ce,	// (0x00025a31) bg_popup_fep_shadow_pane_cp2

0xe51d,	// (0x00025b80) fep_vkb_top_pane_g4_ParamLimits

0xe51d,	// (0x00025b80) fep_vkb_top_pane_g4

0xe53c,	// (0x00025b9f) fep_vkb_side_pane_g2_ParamLimits

0xe53c,	// (0x00025b9f) fep_vkb_side_pane_g2

0x7606,	// (0x0001ec69) list_setting_pane_t4_ParamLimits

0x7606,	// (0x0001ec69) list_setting_pane_t4

0x7698,	// (0x0001ecfb) list_setting_number_pane_t5_ParamLimits

0x7698,	// (0x0001ecfb) list_setting_number_pane_t5

0x824e,	// (0x0001f8b1) list_double_heading_pane_cp2_ParamLimits

0x824e,	// (0x0001f8b1) list_double_heading_pane_cp2

0xc02d,	// (0x00023690) list_double_heading_pane_g1_cp2_ParamLimits

0xc02d,	// (0x00023690) list_double_heading_pane_g1_cp2

0xe7d2,	// (0x00025e35) list_double_heading_pane_g2_cp2_ParamLimits

0xe7d2,	// (0x00025e35) list_double_heading_pane_g2_cp2

0xe7e6,	// (0x00025e49) list_double_heading_pane_t1_cp2_ParamLimits

0xe7e6,	// (0x00025e49) list_double_heading_pane_t1_cp2

0xe7fc,	// (0x00025e5f) list_double_heading_pane_t2_cp2_ParamLimits

0xe7fc,	// (0x00025e5f) list_double_heading_pane_t2_cp2

0xb182,	// (0x000227e5) aid_value_unit2

0x4187,	// (0x0001b7ea) popup_preview_fixed_window

0xb3ad,	// (0x00022a10) bg_popup_preview_window_pane_cp02

0xe80e,	// (0x00025e71) list_preview_fixed_pane

0xe854,	// (0x00025eb7) list_empty_pane_fp_ParamLimits

0xe854,	// (0x00025eb7) list_empty_pane_fp

0xe854,	// (0x00025eb7) list_single_cale_day_pane_fp_ParamLimits

0xe854,	// (0x00025eb7) list_single_cale_day_pane_fp

0xe854,	// (0x00025eb7) list_single_graphic_heading_pane_fp_ParamLimits

0xe854,	// (0x00025eb7) list_single_graphic_heading_pane_fp

0xe854,	// (0x00025eb7) list_single_graphic_pane_fp_ParamLimits

0xe854,	// (0x00025eb7) list_single_graphic_pane_fp

0xe854,	// (0x00025eb7) list_single_heading_pane_fp_ParamLimits

0xe854,	// (0x00025eb7) list_single_heading_pane_fp

0xe854,	// (0x00025eb7) list_single_pane_fp_ParamLimits

0xe854,	// (0x00025eb7) list_single_pane_fp

0xe868,	// (0x00025ecb) list_single_pane_fp_g1_ParamLimits

0xe868,	// (0x00025ecb) list_single_pane_fp_g1

0x339a,	// (0x0001a9fd) list_single_pane_fp_g2_ParamLimits

0x339a,	// (0x0001a9fd) list_single_pane_fp_g2

0x3c5c,	// (0x0001b2bf) list_single_pane_fp_g3_ParamLimits

0x3c5c,	// (0x0001b2bf) list_single_pane_fp_g3

0xe874,	// (0x00025ed7) list_single_pane_fp_g4_ParamLimits

0xe874,	// (0x00025ed7) list_single_pane_fp_g4

0x0003,

0xfb6e,	// (0x000271d1) list_single_pane_fp_g_ParamLimits

0xfb6e,	// (0x000271d1) list_single_pane_fp_g

0x3c70,	// (0x0001b2d3) list_single_pane_fp_t1_ParamLimits

0x3c70,	// (0x0001b2d3) list_single_pane_fp_t1

0x3c87,	// (0x0001b2ea) list_single_graphic_pane_fp_g1_ParamLimits

0x3c87,	// (0x0001b2ea) list_single_graphic_pane_fp_g1

0xe868,	// (0x00025ecb) list_single_graphic_pane_fp_g2_ParamLimits

0xe868,	// (0x00025ecb) list_single_graphic_pane_fp_g2

0x339a,	// (0x0001a9fd) list_single_graphic_pane_fp_g3_ParamLimits

0x339a,	// (0x0001a9fd) list_single_graphic_pane_fp_g3

0x3c5c,	// (0x0001b2bf) list_single_graphic_pane_fp_g4_ParamLimits

0x3c5c,	// (0x0001b2bf) list_single_graphic_pane_fp_g4

0xe874,	// (0x00025ed7) list_single_graphic_pane_fp_g5_ParamLimits

0xe874,	// (0x00025ed7) list_single_graphic_pane_fp_g5

0x0004,

0xfb77,	// (0x000271da) list_single_graphic_pane_fp_g_ParamLimits

0xfb77,	// (0x000271da) list_single_graphic_pane_fp_g

0x3c93,	// (0x0001b2f6) list_single_graphic_pane_fp_t1_ParamLimits

0x3c93,	// (0x0001b2f6) list_single_graphic_pane_fp_t1

0x3c87,	// (0x0001b2ea) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3c87,	// (0x0001b2ea) list_single_graphic_heading_pane_fp_g1

0xe868,	// (0x00025ecb) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe868,	// (0x00025ecb) list_single_graphic_heading_pane_fp_g2

0x339a,	// (0x0001a9fd) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x339a,	// (0x0001a9fd) list_single_graphic_heading_pane_fp_g3

0x3c5c,	// (0x0001b2bf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3c5c,	// (0x0001b2bf) list_single_graphic_heading_pane_fp_g4

0xe874,	// (0x00025ed7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe874,	// (0x00025ed7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb77,	// (0x000271da) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x000271da) list_single_graphic_heading_pane_fp_g

0x3ca9,	// (0x0001b30c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3ca9,	// (0x0001b30c) list_single_graphic_heading_pane_fp_t1

0x3cbf,	// (0x0001b322) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3cbf,	// (0x0001b322) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb82,	// (0x000271e5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb82,	// (0x000271e5) list_single_graphic_heading_pane_fp_t

0x3cd1,	// (0x0001b334) list_single_cale_day_pane_fp_g1_ParamLimits

0x3cd1,	// (0x0001b334) list_single_cale_day_pane_fp_g1

0xe880,	// (0x00025ee3) list_single_cale_day_pane_fp_g2_ParamLimits

0xe880,	// (0x00025ee3) list_single_cale_day_pane_fp_g2

0x3d09,	// (0x0001b36c) list_single_cale_day_pane_fp_g3_ParamLimits

0x3d09,	// (0x0001b36c) list_single_cale_day_pane_fp_g3

0x3d31,	// (0x0001b394) list_single_cale_day_pane_fp_g4_ParamLimits

0x3d31,	// (0x0001b394) list_single_cale_day_pane_fp_g4

0x3d55,	// (0x0001b3b8) list_single_cale_day_pane_fp_g5_ParamLimits

0x3d55,	// (0x0001b3b8) list_single_cale_day_pane_fp_g5

0x0004,

0xfb87,	// (0x000271ea) list_single_cale_day_pane_fp_g_ParamLimits

0xfb87,	// (0x000271ea) list_single_cale_day_pane_fp_g

0x3d79,	// (0x0001b3dc) list_single_cale_day_pane_fp_t1_ParamLimits

0x3d79,	// (0x0001b3dc) list_single_cale_day_pane_fp_t1

0x3d9f,	// (0x0001b402) list_single_cale_day_pane_fp_t2_ParamLimits

0x3d9f,	// (0x0001b402) list_single_cale_day_pane_fp_t2

0x3db8,	// (0x0001b41b) list_single_cale_day_pane_fp_t3_ParamLimits

0x3db8,	// (0x0001b41b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb92,	// (0x000271f5) list_single_cale_day_pane_fp_t_ParamLimits

0xfb92,	// (0x000271f5) list_single_cale_day_pane_fp_t

0xe868,	// (0x00025ecb) list_empty_pane_fp_g1_ParamLimits

0xe868,	// (0x00025ecb) list_empty_pane_fp_g1

0x3dd1,	// (0x0001b434) list_empty_pane_fp_t1

0x3ddf,	// (0x0001b442) list_empty_pane_fp_t2

0x0001,

0xfb99,	// (0x000271fc) list_empty_pane_fp_t

0xe868,	// (0x00025ecb) list_single_heading_pane_fp_g1_ParamLimits

0xe868,	// (0x00025ecb) list_single_heading_pane_fp_g1

0x339a,	// (0x0001a9fd) list_single_heading_pane_fp_g2_ParamLimits

0x339a,	// (0x0001a9fd) list_single_heading_pane_fp_g2

0x3c5c,	// (0x0001b2bf) list_single_heading_pane_fp_g3_ParamLimits

0x3c5c,	// (0x0001b2bf) list_single_heading_pane_fp_g3

0x0002,

0xfb9e,	// (0x00027201) list_single_heading_pane_fp_g_ParamLimits

0xfb9e,	// (0x00027201) list_single_heading_pane_fp_g

0x3ded,	// (0x0001b450) list_single_heading_pane_fp_t1_ParamLimits

0x3ded,	// (0x0001b450) list_single_heading_pane_fp_t1

0x3dff,	// (0x0001b462) list_single_heading_pane_fp_t2_ParamLimits

0x3dff,	// (0x0001b462) list_single_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x00027208) list_single_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x00027208) list_single_heading_pane_fp_t

0xb9a6,	// (0x00023009) aid_size_cell_fast

0xb390,	// (0x000229f3) soft_indicator_pane_cp1_t1

0xb9e3,	// (0x00023046) cell_app_pane_cp2_ParamLimits

0xb9e3,	// (0x00023046) cell_app_pane_cp2

0x51ae,	// (0x0001c811) fep_hwr_candidate_drop_down_list_pane

0x1d47,	// (0x000193aa) fep_hwr_candidate_pane_g3_ParamLimits

0x1d47,	// (0x000193aa) fep_hwr_candidate_pane_g3

0x1d54,	// (0x000193b7) fep_hwr_candidate_pane_g4_ParamLimits

0x1d54,	// (0x000193b7) fep_hwr_candidate_pane_g4

0x0002,

0xfb19,	// (0x0002717c) fep_hwr_candidate_pane_g_ParamLimits

0xfb19,	// (0x0002717c) fep_hwr_candidate_pane_g

0xe436,	// (0x00025a99) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe436,	// (0x00025a99) fep_vkb_candidate_drop_down_list_pane

0xe72d,	// (0x00025d90) fep_vkb_candidate_pane_g3

0xe735,	// (0x00025d98) fep_vkb_candidate_pane_g4

0x0002,

0xfb46,	// (0x000271a9) fep_vkb_candidate_pane_g

0xe51d,	// (0x00025b80) cell_hwr_candidate_pane_g1_ParamLimits

0xe74c,	// (0x00025daf) cell_hwr_candidate_pane_g3_ParamLimits

0xe74c,	// (0x00025daf) cell_hwr_candidate_pane_g3

0xe76d,	// (0x00025dd0) cell_hwr_candidate_pane_g4_ParamLimits

0xe76d,	// (0x00025dd0) cell_hwr_candidate_pane_g4

0x0002,

0xfb60,	// (0x000271c3) cell_hwr_candidate_pane_g_ParamLimits

0xfb60,	// (0x000271c3) cell_hwr_candidate_pane_g

0xe78e,	// (0x00025df1) cell_vkb_candidate_pane_g3_ParamLimits

0xe78e,	// (0x00025df1) cell_vkb_candidate_pane_g3

0xe7a9,	// (0x00025e0c) cell_vkb_candidate_pane_g4_ParamLimits

0xe7a9,	// (0x00025e0c) cell_vkb_candidate_pane_g4

0xe88c,	// (0x00025eef) cell_app_pane_cp2_g1_ParamLimits

0xe88c,	// (0x00025eef) cell_app_pane_cp2_g1

0xe8aa,	// (0x00025f0d) cell_app_pane_cp2_g2_ParamLimits

0xe8aa,	// (0x00025f0d) cell_app_pane_cp2_g2

0x0001,

0xfbaa,	// (0x0002720d) cell_app_pane_cp2_g_ParamLimits

0xfbaa,	// (0x0002720d) cell_app_pane_cp2_g

0xe8b6,	// (0x00025f19) cell_app_pane_cp2_t1_ParamLimits

0xe8b6,	// (0x00025f19) cell_app_pane_cp2_t1

0xb814,	// (0x00022e77) grid_highlight_pane_cp1_ParamLimits

0xb814,	// (0x00022e77) grid_highlight_pane_cp1

0x53d7,	// (0x0001ca3a) cell_hwr_candidate_pane_cp1_ParamLimits

0x53d7,	// (0x0001ca3a) cell_hwr_candidate_pane_cp1

0xe51d,	// (0x00025b80) fep_hwr_candidate_drop_down_list_pane_g1

0xe8c8,	// (0x00025f2b) fep_hwr_candidate_drop_down_list_pane_g2

0xe8d5,	// (0x00025f38) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x00027212) fep_hwr_candidate_drop_down_list_pane_g

0x53f5,	// (0x0001ca58) fep_hwr_candidate_drop_down_list_scroll_pane

0x53fe,	// (0x0001ca61) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x53fe,	// (0x0001ca61) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x540b,	// (0x0001ca6e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x540b,	// (0x0001ca6e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5418,	// (0x0001ca7b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5418,	// (0x0001ca7b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xe78e,	// (0x00025df1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe78e,	// (0x00025df1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xe7a9,	// (0x00025e0c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe7a9,	// (0x00025e0c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5425,	// (0x0001ca88) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5425,	// (0x0001ca88) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5440,	// (0x0001caa3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5440,	// (0x0001caa3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x545b,	// (0x0001cabe) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x545b,	// (0x0001cabe) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb6,	// (0x00027219) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb6,	// (0x00027219) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x97e3,	// (0x00020e46) cell_vkb_candidate_pane_cp1_ParamLimits

0x97e3,	// (0x00020e46) cell_vkb_candidate_pane_cp1

0xe51d,	// (0x00025b80) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe51d,	// (0x00025b80) fep_vkb_candidate_drop_down_list_pane_g1

0xe8c8,	// (0x00025f2b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe8c8,	// (0x00025f2b) fep_vkb_candidate_drop_down_list_pane_g2

0xe8d5,	// (0x00025f38) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe8d5,	// (0x00025f38) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x00027212) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaf,	// (0x00027212) fep_vkb_candidate_drop_down_list_pane_g

0xe8e2,	// (0x00025f45) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe8e2,	// (0x00025f45) fep_vkb_candidate_drop_down_list_scroll_pane

0xe8ef,	// (0x00025f52) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe8ef,	// (0x00025f52) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe8fc,	// (0x00025f5f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe8fc,	// (0x00025f5f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe908,	// (0x00025f6b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe908,	// (0x00025f6b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe74c,	// (0x00025daf) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe74c,	// (0x00025daf) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe76d,	// (0x00025dd0) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe76d,	// (0x00025dd0) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe914,	// (0x00025f77) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe914,	// (0x00025f77) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe935,	// (0x00025f98) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe935,	// (0x00025f98) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe956,	// (0x00025fb9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe956,	// (0x00025fb9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc7,	// (0x0002722a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc7,	// (0x0002722a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7cc4,	// (0x0001f327) title_pane_g1_ParamLimits

0x7cdb,	// (0x0001f33e) title_pane_g2_ParamLimits

0xf54e,	// (0x00026bb1) title_pane_g_ParamLimits

0xbd16,	// (0x00023379) aid_call2_pane

0xbd1e,	// (0x00023381) aid_call_pane

0xbd26,	// (0x00023389) popup_clock_analogue_window_g1

0xbd26,	// (0x00023389) popup_clock_analogue_window_g2

0x4461,	// (0x0001bac4) popup_clock_analogue_window_g3

0x446a,	// (0x0001bacd) popup_clock_analogue_window_g4

0xb194,	// (0x000227f7) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00026d5b) popup_clock_analogue_window_g

0x4472,	// (0x0001bad5) popup_clock_analogue_window_t1

0x4480,	// (0x0001bae3) clock_digital_number_pane_ParamLimits

0x4480,	// (0x0001bae3) clock_digital_number_pane

0x448c,	// (0x0001baef) clock_digital_number_pane_cp02_ParamLimits

0x448c,	// (0x0001baef) clock_digital_number_pane_cp02

0x4498,	// (0x0001bafb) clock_digital_number_pane_cp03_ParamLimits

0x4498,	// (0x0001bafb) clock_digital_number_pane_cp03

0x44a4,	// (0x0001bb07) clock_digital_number_pane_cp04_ParamLimits

0x44a4,	// (0x0001bb07) clock_digital_number_pane_cp04

0x44b0,	// (0x0001bb13) clock_digital_separator_pane_ParamLimits

0x44b0,	// (0x0001bb13) clock_digital_separator_pane

0x44bc,	// (0x0001bb1f) popup_clock_digital_window_t1_ParamLimits

0x44bc,	// (0x0001bb1f) popup_clock_digital_window_t1

0xb194,	// (0x000227f7) clock_digital_number_pane_g1

0xb194,	// (0x000227f7) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00026d66) clock_digital_number_pane_g

0xb194,	// (0x000227f7) clock_digital_separator_pane_g1

0xb194,	// (0x000227f7) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00026d66) clock_digital_separator_pane_g

0x8b70,	// (0x000201d3) aid_fill_nsta_ParamLimits

0x8c87,	// (0x000202ea) indicator_nsta_pane_ParamLimits

0xc443,	// (0x00023aa6) popup_clock_analogue_window

0xc443,	// (0x00023aa6) popup_clock_digital_window

0xc602,	// (0x00023c65) grid_indicator_nsta_pane_ParamLimits

0xdef7,	// (0x0002555a) clock_nsta_pane_t2

0x0001,

0xfa99,	// (0x000270fc) clock_nsta_pane_t

0x4425,	// (0x0001ba88) aid_size_max_handle

0x81b2,	// (0x0001f815) aid_size_min_handle

0xc1b8,	// (0x0002381b) editor_scroll_pane

0xe971,	// (0x00025fd4) ex_editor_pane

0xb963,	// (0x00022fc6) scroll_pane_cp13

0xb7c4,	// (0x00022e27) scroll_pane_cp14

0xbd55,	// (0x000233b8) scroll_pane_cp36

0x825a,	// (0x0001f8bd) list_single_graphic_hl_pane_cp2_ParamLimits

0x825a,	// (0x0001f8bd) list_single_graphic_hl_pane_cp2

0x9448,	// (0x00020aab) list_single_graphic_hl_pane_ParamLimits

0x9448,	// (0x00020aab) list_single_graphic_hl_pane

0x3e15,	// (0x0001b478) aid_size_min_hl_cp1

0xe979,	// (0x00025fdc) list_highlight_pane_cp34_ParamLimits

0xe979,	// (0x00025fdc) list_highlight_pane_cp34

0xe98a,	// (0x00025fed) list_single_graphic_hl_pane_g1_ParamLimits

0xe98a,	// (0x00025fed) list_single_graphic_hl_pane_g1

0x790c,	// (0x0001ef6f) list_single_graphic_hl_pane_g2_ParamLimits

0x790c,	// (0x0001ef6f) list_single_graphic_hl_pane_g2

0x790c,	// (0x0001ef6f) list_single_graphic_hl_pane_g3_ParamLimits

0x790c,	// (0x0001ef6f) list_single_graphic_hl_pane_g3

0x7918,	// (0x0001ef7b) list_single_graphic_hl_pane_g4_ParamLimits

0x7918,	// (0x0001ef7b) list_single_graphic_hl_pane_g4

0x7924,	// (0x0001ef87) list_single_graphic_hl_pane_g5_ParamLimits

0x7924,	// (0x0001ef87) list_single_graphic_hl_pane_g5

0x0004,

0xfbd8,	// (0x0002723b) list_single_graphic_hl_pane_g_ParamLimits

0xfbd8,	// (0x0002723b) list_single_graphic_hl_pane_g

0x7938,	// (0x0001ef9b) list_single_graphic_hl_pane_t1_ParamLimits

0x7938,	// (0x0001ef9b) list_single_graphic_hl_pane_t1

0xe997,	// (0x00025ffa) aid_size_min_hl_cp2

0xe9a0,	// (0x00026003) list_highlight_pane_cp34_cp2_ParamLimits

0xe9a0,	// (0x00026003) list_highlight_pane_cp34_cp2

0xe98a,	// (0x00025fed) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe98a,	// (0x00025fed) list_single_graphic_hl_pane_g1_cp2

0xe9ad,	// (0x00026010) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe9ad,	// (0x00026010) list_single_graphic_hl_pane_g2_cp2

0xe9b9,	// (0x0002601c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe9b9,	// (0x0002601c) list_single_graphic_hl_pane_g3_cp2

0xc02d,	// (0x00023690) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc02d,	// (0x00023690) list_single_graphic_hl_pane_g4_cp2

0xe7d2,	// (0x00025e35) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe7d2,	// (0x00025e35) list_single_graphic_hl_pane_g5_cp2

0x848b,	// (0x0001faee) control_pane_g4_ParamLimits

0x848b,	// (0x0001faee) control_pane_g4

0xb99a,	// (0x00022ffd) bg_popup_sub_pane_cp10_ParamLimits

0xe2fb,	// (0x0002595e) list_choice_list_pane_ParamLimits

0xe30a,	// (0x0002596d) scroll_pane_cp23

0xb3ad,	// (0x00022a10) bg_popup_preview_window_pane_cp02_ParamLimits

0xe80e,	// (0x00025e71) list_preview_fixed_pane_ParamLimits

0xe824,	// (0x00025e87) list_preview_fixed_pane_cp_ParamLimits

0xe824,	// (0x00025e87) list_preview_fixed_pane_cp

0xe830,	// (0x00025e93) popup_preview_fixed_window_g1_ParamLimits

0xe830,	// (0x00025e93) popup_preview_fixed_window_g1

0xe83c,	// (0x00025e9f) popup_preview_fixed_window_g2_ParamLimits

0xe83c,	// (0x00025e9f) popup_preview_fixed_window_g2

0x0002,

0xfb67,	// (0x000271ca) popup_preview_fixed_window_g_ParamLimits

0xfb67,	// (0x000271ca) popup_preview_fixed_window_g

0x43b5,	// (0x0001ba18) aid_navi_side_left_pane_ParamLimits

0x43c5,	// (0x0001ba28) aid_navi_side_right_pane_ParamLimits

0x43d4,	// (0x0001ba37) navi_icon_pane_stacon_ParamLimits

0x43e4,	// (0x0001ba47) navi_navi_pane_stacon_ParamLimits

0x43d4,	// (0x0001ba37) navi_text_pane_stacon_ParamLimits

0xb18a,	// (0x000227ed) main_text_info_pane

0xe9db,	// (0x0002603e) listscroll_text_info_pane

0xe9e3,	// (0x00026046) list_text_info_pane_ParamLimits

0xe9e3,	// (0x00026046) list_text_info_pane

0xe9f2,	// (0x00026055) scroll_pane_cp24_ParamLimits

0xe9f2,	// (0x00026055) scroll_pane_cp24

0x9803,	// (0x00020e66) list_text_info_pane_t1_ParamLimits

0x9803,	// (0x00020e66) list_text_info_pane_t1

0x85f9,	// (0x0001fc5c) popup_fast_swap2_window_ParamLimits

0x85f9,	// (0x0001fc5c) popup_fast_swap2_window

0xea10,	// (0x00026073) aid_size_cell_fast2

0xb18a,	// (0x000227ed) bg_popup_window_pane_cp17

0xc918,	// (0x00023f7b) heading_pane_cp2

0xb5c3,	// (0x00022c26) listscroll_fast2_pane

0xea1a,	// (0x0002607d) grid_fast2_pane

0xea22,	// (0x00026085) listscroll_fast2_pane_g1

0xea2a,	// (0x0002608d) listscroll_fast2_pane_g2

0x0001,

0xfbe3,	// (0x00027246) listscroll_fast2_pane_g

0xb963,	// (0x00022fc6) scroll_pane_cp26

0xea32,	// (0x00026095) cell_fast2_pane_ParamLimits

0xea32,	// (0x00026095) cell_fast2_pane

0xea48,	// (0x000260ab) cell_fast2_pane_g1

0xea51,	// (0x000260b4) cell_fast2_pane_g2

0xea5a,	// (0x000260bd) cell_fast2_pane_g3

0x0002,

0xfbe8,	// (0x0002724b) cell_fast2_pane_g

0xb625,	// (0x00022c88) grid_highlight_pane_cp9

0xb63a,	// (0x00022c9d) main_eswt_pane_ParamLimits

0xb63a,	// (0x00022c9d) main_eswt_pane

0xea07,	// (0x0002606a) list_single_text_info_pane

0xea62,	// (0x000260c5) eswt_ctrl_button_pane

0xea62,	// (0x000260c5) eswt_ctrl_canvas_pane

0xea6a,	// (0x000260cd) eswt_ctrl_combo_pane

0xea62,	// (0x000260c5) eswt_ctrl_default_pane

0xea62,	// (0x000260c5) eswt_ctrl_label_pane

0xea72,	// (0x000260d5) eswt_ctrl_wait_pane

0xea7a,	// (0x000260dd) eswt_shell_pane

0xb18a,	// (0x000227ed) listscroll_eswt_app_pane

0xea96,	// (0x000260f9) popup_eswt_tasktip_window_ParamLimits

0xea96,	// (0x000260f9) popup_eswt_tasktip_window

0xc5b8,	// (0x00023c1b) bg_popup_window_pane_cp18

0xeaa7,	// (0x0002610a) eswt_control_pane_g1_ParamLimits

0xeaa7,	// (0x0002610a) eswt_control_pane_g1

0xeab4,	// (0x00026117) eswt_control_pane_g2_ParamLimits

0xeab4,	// (0x00026117) eswt_control_pane_g2

0xeac1,	// (0x00026124) eswt_control_pane_g3_ParamLimits

0xeac1,	// (0x00026124) eswt_control_pane_g3

0xeace,	// (0x00026131) eswt_control_pane_g4_ParamLimits

0xeace,	// (0x00026131) eswt_control_pane_g4

0x0003,

0xfbef,	// (0x00027252) eswt_control_pane_g_ParamLimits

0xfbef,	// (0x00027252) eswt_control_pane_g

0xb814,	// (0x00022e77) bg_button_pane_ParamLimits

0xb814,	// (0x00022e77) bg_button_pane

0xb63a,	// (0x00022c9d) common_borders_pane_copy2_ParamLimits

0xb63a,	// (0x00022c9d) common_borders_pane_copy2

0xeadb,	// (0x0002613e) control_button_pane_g1_ParamLimits

0xeadb,	// (0x0002613e) control_button_pane_g1

0xeae7,	// (0x0002614a) control_button_pane_g2_ParamLimits

0xeae7,	// (0x0002614a) control_button_pane_g2

0xeaf3,	// (0x00026156) control_button_pane_g3_ParamLimits

0xeaf3,	// (0x00026156) control_button_pane_g3

0x0002,

0xfbf8,	// (0x0002725b) control_button_pane_g_ParamLimits

0xfbf8,	// (0x0002725b) control_button_pane_g

0xeb07,	// (0x0002616a) control_button_pane_t1

0xeb15,	// (0x00026178) control_button_pane_t2

0x0001,

0xfbff,	// (0x00027262) control_button_pane_t

0xc544,	// (0x00023ba7) bg_button_pane_g1

0xc54c,	// (0x00023baf) bg_button_pane_g2

0xc554,	// (0x00023bb7) bg_button_pane_g3

0xc55c,	// (0x00023bbf) bg_button_pane_g4

0xc564,	// (0x00023bc7) bg_button_pane_g5

0xc56c,	// (0x00023bcf) bg_button_pane_g6

0xc574,	// (0x00023bd7) bg_button_pane_g7

0xc57c,	// (0x00023bdf) bg_button_pane_g8

0xc584,	// (0x00023be7) bg_button_pane_g9

0x0008,

0xf853,	// (0x00026eb6) bg_button_pane_g

0xe2b6,	// (0x00025919) common_borders_pane_ParamLimits

0xe2b6,	// (0x00025919) common_borders_pane

0xeaa7,	// (0x0002610a) eswt_control_pane_g1_copy1_ParamLimits

0xeaa7,	// (0x0002610a) eswt_control_pane_g1_copy1

0xeab4,	// (0x00026117) eswt_control_pane_g2_copy1_ParamLimits

0xeab4,	// (0x00026117) eswt_control_pane_g2_copy1

0xeac1,	// (0x00026124) eswt_control_pane_g3_copy1_ParamLimits

0xeac1,	// (0x00026124) eswt_control_pane_g3_copy1

0xeace,	// (0x00026131) eswt_control_pane_g4_copy1_ParamLimits

0xeace,	// (0x00026131) eswt_control_pane_g4_copy1

0xe2f1,	// (0x00025954) bg_eswt_ctrl_canvas_pane_g1

0xe2b6,	// (0x00025919) common_borders_pane_cp2_ParamLimits

0xe2b6,	// (0x00025919) common_borders_pane_cp2

0xe2b6,	// (0x00025919) common_borders_pane_cp3_ParamLimits

0xe2b6,	// (0x00025919) common_borders_pane_cp3

0xeb23,	// (0x00026186) separator_horizontal_pane

0xbbb5,	// (0x00023218) separator_vertical_pane

0xeaa7,	// (0x0002610a) eswt_control_pane_g1_copy2_ParamLimits

0xeaa7,	// (0x0002610a) eswt_control_pane_g1_copy2

0xeab4,	// (0x00026117) eswt_control_pane_g2_copy2_ParamLimits

0xeab4,	// (0x00026117) eswt_control_pane_g2_copy2

0xeac1,	// (0x00026124) eswt_control_pane_g3_copy2_ParamLimits

0xeac1,	// (0x00026124) eswt_control_pane_g3_copy2

0xeace,	// (0x00026131) eswt_control_pane_g4_copy2_ParamLimits

0xeace,	// (0x00026131) eswt_control_pane_g4_copy2

0xb18a,	// (0x000227ed) common_borders_pane_cp4

0xeb2b,	// (0x0002618e) separator_horizontal_pane_g1

0xeb34,	// (0x00026197) separator_horizontal_pane_g2

0xeb3d,	// (0x000261a0) separator_horizontal_pane_g3

0x0002,

0xfc04,	// (0x00027267) separator_horizontal_pane_g

0xeaa7,	// (0x0002610a) eswt_control_pane_g1_copy3_ParamLimits

0xeaa7,	// (0x0002610a) eswt_control_pane_g1_copy3

0xeab4,	// (0x00026117) eswt_control_pane_g2_copy3_ParamLimits

0xeab4,	// (0x00026117) eswt_control_pane_g2_copy3

0xeac1,	// (0x00026124) eswt_control_pane_g3_copy3_ParamLimits

0xeac1,	// (0x00026124) eswt_control_pane_g3_copy3

0xeace,	// (0x00026131) eswt_control_pane_g4_copy3_ParamLimits

0xeace,	// (0x00026131) eswt_control_pane_g4_copy3

0xb18a,	// (0x000227ed) common_borders_pane_cp5

0xeb46,	// (0x000261a9) separator_vertical_pane_g1

0xeb4f,	// (0x000261b2) separator_vertical_pane_g2

0xeb58,	// (0x000261bb) separator_vertical_pane_g3

0x0002,

0xfc0b,	// (0x0002726e) separator_vertical_pane_g

0xeaa7,	// (0x0002610a) eswt_control_pane_g1_copy4_ParamLimits

0xeaa7,	// (0x0002610a) eswt_control_pane_g1_copy4

0xeab4,	// (0x00026117) eswt_control_pane_g2_copy4_ParamLimits

0xeab4,	// (0x00026117) eswt_control_pane_g2_copy4

0xeac1,	// (0x00026124) eswt_control_pane_g3_copy4_ParamLimits

0xeac1,	// (0x00026124) eswt_control_pane_g3_copy4

0xeace,	// (0x00026131) eswt_control_pane_g4_copy4_ParamLimits

0xeace,	// (0x00026131) eswt_control_pane_g4_copy4

0x981e,	// (0x00020e81) eswt_ctrl_combo_button_pane

0x9826,	// (0x00020e89) eswt_ctrl_input_pane

0x982e,	// (0x00020e91) popup_choice_list_window_cp70

0x9836,	// (0x00020e99) eswt_ctrl_input_pane_t1

0xb18a,	// (0x000227ed) input_focus_pane_cp70

0xe2b6,	// (0x00025919) bg_button_pane_cp70_ParamLimits

0xe2b6,	// (0x00025919) bg_button_pane_cp70

0x9844,	// (0x00020ea7) eswt_ctrl_combo_button_pane_g1

0xeb61,	// (0x000261c4) wait_bar_pane_cp70

0xc5b8,	// (0x00023c1b) bg_popup_window_pane_cp70_ParamLimits

0xc5b8,	// (0x00023c1b) bg_popup_window_pane_cp70

0xeb69,	// (0x000261cc) popup_eswt_tasktip_window_t1

0xeb7f,	// (0x000261e2) wait_bar_pane_cp71_ParamLimits

0xeb7f,	// (0x000261e2) wait_bar_pane_cp71

0xeb8b,	// (0x000261ee) grid_eswt_app_pane

0xbbbe,	// (0x00023221) scroll_pane_cp70

0x984c,	// (0x00020eaf) cell_eswt_app_pane_ParamLimits

0x984c,	// (0x00020eaf) cell_eswt_app_pane

0x9874,	// (0x00020ed7) cell_eswt_app_pane_g1_ParamLimits

0x9874,	// (0x00020ed7) cell_eswt_app_pane_g1

0x98a3,	// (0x00020f06) cell_eswt_app_pane_g2_ParamLimits

0x98a3,	// (0x00020f06) cell_eswt_app_pane_g2

0x0001,

0xfc12,	// (0x00027275) cell_eswt_app_pane_g_ParamLimits

0xfc12,	// (0x00027275) cell_eswt_app_pane_g

0x98cc,	// (0x00020f2f) cell_eswt_app_pane_t1_ParamLimits

0x98cc,	// (0x00020f2f) cell_eswt_app_pane_t1

0xeb94,	// (0x000261f7) grid_highlight_pane_cp70_ParamLimits

0xeb94,	// (0x000261f7) grid_highlight_pane_cp70

0xb82e,	// (0x00022e91) set_content_pane_g1

0xc337,	// (0x0002399a) status_small_volume_pane

0x5476,	// (0x0001cad9) status_small_volume_pane_g1

0x547e,	// (0x0001cae1) volume_small2_pane

0x5487,	// (0x0001caea) volume_small2_pane_g1

0x5490,	// (0x0001caf3) volume_small2_pane_g2

0x5499,	// (0x0001cafc) volume_small2_pane_g3

0x54a2,	// (0x0001cb05) volume_small2_pane_g4

0x54ab,	// (0x0001cb0e) volume_small2_pane_g5

0x54b4,	// (0x0001cb17) volume_small2_pane_g6

0x54bd,	// (0x0001cb20) volume_small2_pane_g7

0x54c6,	// (0x0001cb29) volume_small2_pane_g8

0x54cf,	// (0x0001cb32) volume_small2_pane_g9

0x54d8,	// (0x0001cb3b) volume_small2_pane_g10

0x0009,

0xfc17,	// (0x0002727a) volume_small2_pane_g

0xe624,	// (0x00025c87) fep_vkb_top_text_pane_g1_ParamLimits

0x978b,	// (0x00020dee) fep_vkb_top_text_pane_t1_ParamLimits

0xe848,	// (0x00025eab) popup_preview_fixed_window_g3_ParamLimits

0xe848,	// (0x00025eab) popup_preview_fixed_window_g3

0x8b19,	// (0x0002017c) popup_toolbar_trans_pane

0x92d5,	// (0x00020938) aid_height_set_list_ParamLimits

0xd667,	// (0x00024cca) aid_size_parent_ParamLimits

0xb99a,	// (0x00022ffd) list_highlight_pane_cp2_ParamLimits

0xb82e,	// (0x00022e91) set_content_pane_g1_ParamLimits

0x945b,	// (0x00020abe) list_single_image_pane_ParamLimits

0x945b,	// (0x00020abe) list_single_image_pane

0x98fe,	// (0x00020f61) aid_size_cell_image_ParamLimits

0x98fe,	// (0x00020f61) aid_size_cell_image

0x990b,	// (0x00020f6e) grid_single_image_pane_ParamLimits

0x990b,	// (0x00020f6e) grid_single_image_pane

0xb82e,	// (0x00022e91) list_single_image_pane_g1_ParamLimits

0xb82e,	// (0x00022e91) list_single_image_pane_g1

0xb83a,	// (0x00022e9d) list_single_image_pane_g2_ParamLimits

0xb83a,	// (0x00022e9d) list_single_image_pane_g2

0x0001,

0xfc2c,	// (0x0002728f) list_single_image_pane_g_ParamLimits

0xfc2c,	// (0x0002728f) list_single_image_pane_g

0xd708,	// (0x00024d6b) list_single_image_pane_t1_ParamLimits

0xd708,	// (0x00024d6b) list_single_image_pane_t1

0x9917,	// (0x00020f7a) cell_image_list_pane_ParamLimits

0x9917,	// (0x00020f7a) cell_image_list_pane

0x992b,	// (0x00020f8e) cell_image_list_pane_g1

0x9934,	// (0x00020f97) cell_image_list_pane_g2

0x0001,

0xfc31,	// (0x00027294) cell_image_list_pane_g

0xeba0,	// (0x00026203) aid_size_cell_tb_trans_pane

0xb814,	// (0x00022e77) bg_tb_trans_pane

0xebb2,	// (0x00026215) grid_tb_trans_pane

0xc544,	// (0x00023ba7) bg_tb_trans_pane_g1

0xc54c,	// (0x00023baf) bg_tb_trans_pane_g2

0xc554,	// (0x00023bb7) bg_tb_trans_pane_g3

0xc55c,	// (0x00023bbf) bg_tb_trans_pane_g4

0xc564,	// (0x00023bc7) bg_tb_trans_pane_g5

0xc57c,	// (0x00023bdf) bg_tb_trans_pane_g6

0xc584,	// (0x00023be7) bg_tb_trans_pane_g7

0xc56c,	// (0x00023bcf) bg_tb_trans_pane_g8

0xc574,	// (0x00023bd7) bg_tb_trans_pane_g9

0x0008,

0xfc36,	// (0x00027299) bg_tb_trans_pane_g

0xebc6,	// (0x00026229) cell_toolbar_trans_pane_ParamLimits

0xebc6,	// (0x00026229) cell_toolbar_trans_pane

0xe2f1,	// (0x00025954) cell_toolbar_trans_pane_g1

0x9688,	// (0x00020ceb) list_form2_midp_pane_t1

0x9696,	// (0x00020cf9) list_form2_midp_pane_t2

0x0001,

0xfadf,	// (0x00027142) list_form2_midp_pane_t

0xdfc5,	// (0x00025628) scroll_pane_cp51_ParamLimits

0xe13b,	// (0x0002579e) form2_midp_wait_pane_g1

0xe144,	// (0x000257a7) form2_midp_wait_pane_g2

0xe14d,	// (0x000257b0) form2_midp_wait_pane_g3

0x0002,

0xfaf4,	// (0x00027157) form2_midp_wait_pane_g

0xb27a,	// (0x000228dd) list_highlight_pane_cp21_ParamLimits

0xe18b,	// (0x000257ee) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe19a,	// (0x000257fd) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x38e3,	// (0x0001af46) list_single_2graphic_im_pane_ParamLimits

0x38e3,	// (0x0001af46) list_single_2graphic_im_pane

0x993d,	// (0x00020fa0) list_single_2graphic_im_pane_g1_ParamLimits

0x993d,	// (0x00020fa0) list_single_2graphic_im_pane_g1

0x994e,	// (0x00020fb1) list_single_2graphic_im_pane_g2_ParamLimits

0x994e,	// (0x00020fb1) list_single_2graphic_im_pane_g2

0x995a,	// (0x00020fbd) list_single_2graphic_im_pane_g3_ParamLimits

0x995a,	// (0x00020fbd) list_single_2graphic_im_pane_g3

0x0003,

0xfc49,	// (0x000272ac) list_single_2graphic_im_pane_g_ParamLimits

0xfc49,	// (0x000272ac) list_single_2graphic_im_pane_g

0x996e,	// (0x00020fd1) list_single_2graphic_im_pane_t1_ParamLimits

0x996e,	// (0x00020fd1) list_single_2graphic_im_pane_t1

0xe854,	// (0x00025eb7) list_single_graphic_2heading_pane_fp_ParamLimits

0xe854,	// (0x00025eb7) list_single_graphic_2heading_pane_fp

0x3c87,	// (0x0001b2ea) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3c87,	// (0x0001b2ea) list_single_graphic_2heading_pane_fp_g1

0xe868,	// (0x00025ecb) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe868,	// (0x00025ecb) list_single_graphic_2heading_pane_fp_g2

0x339a,	// (0x0001a9fd) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x339a,	// (0x0001a9fd) list_single_graphic_2heading_pane_fp_g3

0x3c5c,	// (0x0001b2bf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3c5c,	// (0x0001b2bf) list_single_graphic_2heading_pane_fp_g4

0xe874,	// (0x00025ed7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe874,	// (0x00025ed7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb77,	// (0x000271da) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb77,	// (0x000271da) list_single_graphic_2heading_pane_fp_g

0x3e54,	// (0x0001b4b7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3e54,	// (0x0001b4b7) list_single_graphic_2heading_pane_fp_t1

0x3cbf,	// (0x0001b322) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3cbf,	// (0x0001b322) list_single_graphic_2heading_pane_fp_t2

0x3e6a,	// (0x0001b4cd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3e6a,	// (0x0001b4cd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc52,	// (0x000272b5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc52,	// (0x000272b5) list_single_graphic_2heading_pane_fp_t

0xe37a,	// (0x000259dd) fep_hwr_write_pane_g5_ParamLimits

0xe37a,	// (0x000259dd) fep_hwr_write_pane_g5

0xe386,	// (0x000259e9) fep_hwr_write_pane_g6_ParamLimits

0xe386,	// (0x000259e9) fep_hwr_write_pane_g6

0xea7a,	// (0x000260dd) eswt_shell_pane_ParamLimits

0xc5b8,	// (0x00023c1b) bg_popup_window_pane_cp18_ParamLimits

0xd60b,	// (0x00024c6e) heading_pane_cp70

0xeb69,	// (0x000261cc) popup_eswt_tasktip_window_t1_ParamLimits

0x8bb4,	// (0x00020217) aid_touch_tab_arrow_left

0x8bc8,	// (0x0002022b) aid_touch_tab_arrow_right

0x7cfa,	// (0x0001f35d) title_pane_g3_ParamLimits

0x7cfa,	// (0x0001f35d) title_pane_g3

0xb7e4,	// (0x00022e47) set_value_pane_g1

0x8b19,	// (0x0002017c) popup_toolbar_trans_pane_ParamLimits

0xeba0,	// (0x00026203) aid_size_cell_tb_trans_pane_ParamLimits

0xb814,	// (0x00022e77) bg_tb_trans_pane_ParamLimits

0xebb2,	// (0x00026215) grid_tb_trans_pane_ParamLimits

0xb3ad,	// (0x00022a10) cont_note_pane_ParamLimits

0xb3ad,	// (0x00022a10) cont_note_pane

0xb63a,	// (0x00022c9d) cont_snote2_single_text_pane_ParamLimits

0xb63a,	// (0x00022c9d) cont_snote2_single_text_pane

0xb63a,	// (0x00022c9d) cont_snote2_single_graphic_pane_ParamLimits

0xb63a,	// (0x00022c9d) cont_snote2_single_graphic_pane

0xcb2e,	// (0x00024191) cont_note_wait_pane_ParamLimits

0xcb2e,	// (0x00024191) cont_note_wait_pane

0xcb2e,	// (0x00024191) cont_note_image_pane_ParamLimits

0xcb2e,	// (0x00024191) cont_note_image_pane

0xebf8,	// (0x0002625b) popup_note2_window_g1_ParamLimits

0xebf8,	// (0x0002625b) popup_note2_window_g1

0xec29,	// (0x0002628c) popup_note2_window_t1_ParamLimits

0xec29,	// (0x0002628c) popup_note2_window_t1

0xec6e,	// (0x000262d1) popup_note2_window_t2_ParamLimits

0xec6e,	// (0x000262d1) popup_note2_window_t2

0xecb3,	// (0x00026316) popup_note2_window_t3_ParamLimits

0xecb3,	// (0x00026316) popup_note2_window_t3

0xecf8,	// (0x0002635b) popup_note2_window_t4_ParamLimits

0xecf8,	// (0x0002635b) popup_note2_window_t4

0xb431,	// (0x00022a94) popup_note2_window_t5_ParamLimits

0xb431,	// (0x00022a94) popup_note2_window_t5

0x0004,

0xfc5e,	// (0x000272c1) popup_note2_window_t_ParamLimits

0xfc5e,	// (0x000272c1) popup_note2_window_t

0xed27,	// (0x0002638a) popup_note2_image_window_g1_ParamLimits

0xed27,	// (0x0002638a) popup_note2_image_window_g1

0xed33,	// (0x00026396) popup_note2_image_window_g2_ParamLimits

0xed33,	// (0x00026396) popup_note2_image_window_g2

0x0001,

0xfc69,	// (0x000272cc) popup_note2_image_window_g_ParamLimits

0xfc69,	// (0x000272cc) popup_note2_image_window_g

0xed45,	// (0x000263a8) popup_note2_image_window_t1_ParamLimits

0xed45,	// (0x000263a8) popup_note2_image_window_t1

0xed5d,	// (0x000263c0) popup_note2_image_window_t2_ParamLimits

0xed5d,	// (0x000263c0) popup_note2_image_window_t2

0xed75,	// (0x000263d8) popup_note2_image_window_t3_ParamLimits

0xed75,	// (0x000263d8) popup_note2_image_window_t3

0x0002,

0xfc6e,	// (0x000272d1) popup_note2_image_window_t_ParamLimits

0xfc6e,	// (0x000272d1) popup_note2_image_window_t

0xcb3c,	// (0x0002419f) popup_note2_wait_window_g1_ParamLimits

0xcb3c,	// (0x0002419f) popup_note2_wait_window_g1

0xcb48,	// (0x000241ab) popup_note2_wait_window_g2_ParamLimits

0xcb48,	// (0x000241ab) popup_note2_wait_window_g2

0xcb54,	// (0x000241b7) popup_note2_wait_window_g3_ParamLimits

0xcb54,	// (0x000241b7) popup_note2_wait_window_g3

0x0002,

0xf835,	// (0x00026e98) popup_note2_wait_window_g_ParamLimits

0xf835,	// (0x00026e98) popup_note2_wait_window_g

0xed91,	// (0x000263f4) popup_note2_wait_window_t1_ParamLimits

0xed91,	// (0x000263f4) popup_note2_wait_window_t1

0xedaf,	// (0x00026412) popup_note2_wait_window_t2_ParamLimits

0xedaf,	// (0x00026412) popup_note2_wait_window_t2

0xedcd,	// (0x00026430) popup_note2_wait_window_t3_ParamLimits

0xedcd,	// (0x00026430) popup_note2_wait_window_t3

0xeddf,	// (0x00026442) popup_note2_wait_window_t4_ParamLimits

0xeddf,	// (0x00026442) popup_note2_wait_window_t4

0x0003,

0xfc75,	// (0x000272d8) popup_note2_wait_window_t_ParamLimits

0xfc75,	// (0x000272d8) popup_note2_wait_window_t

0xedf1,	// (0x00026454) wait_bar2_pane_ParamLimits

0xedf1,	// (0x00026454) wait_bar2_pane

0xee09,	// (0x0002646c) popup_snote2_single_text_window_g1_ParamLimits

0xee09,	// (0x0002646c) popup_snote2_single_text_window_g1

0xee31,	// (0x00026494) popup_snote2_single_text_window_t1_ParamLimits

0xee31,	// (0x00026494) popup_snote2_single_text_window_t1

0xee7d,	// (0x000264e0) popup_snote2_single_text_window_t2_ParamLimits

0xee7d,	// (0x000264e0) popup_snote2_single_text_window_t2

0xeec9,	// (0x0002652c) popup_snote2_single_text_window_t3_ParamLimits

0xeec9,	// (0x0002652c) popup_snote2_single_text_window_t3

0xef0a,	// (0x0002656d) popup_snote2_single_text_window_t4_ParamLimits

0xef0a,	// (0x0002656d) popup_snote2_single_text_window_t4

0xef40,	// (0x000265a3) popup_snote2_single_text_window_t5_ParamLimits

0xef40,	// (0x000265a3) popup_snote2_single_text_window_t5

0x0004,

0xfc7e,	// (0x000272e1) popup_snote2_single_text_window_t_ParamLimits

0xfc7e,	// (0x000272e1) popup_snote2_single_text_window_t

0xef6b,	// (0x000265ce) popup_snote2_single_graphic_window_g1_ParamLimits

0xef6b,	// (0x000265ce) popup_snote2_single_graphic_window_g1

0xef93,	// (0x000265f6) popup_snote2_single_graphic_window_g2_ParamLimits

0xef93,	// (0x000265f6) popup_snote2_single_graphic_window_g2

0x0001,

0xfc89,	// (0x000272ec) popup_snote2_single_graphic_window_g_ParamLimits

0xfc89,	// (0x000272ec) popup_snote2_single_graphic_window_g

0xefbb,	// (0x0002661e) popup_snote2_single_graphic_window_t1_ParamLimits

0xefbb,	// (0x0002661e) popup_snote2_single_graphic_window_t1

0xf007,	// (0x0002666a) popup_snote2_single_graphic_window_t2_ParamLimits

0xf007,	// (0x0002666a) popup_snote2_single_graphic_window_t2

0xeec9,	// (0x0002652c) popup_snote2_single_graphic_window_t3_ParamLimits

0xeec9,	// (0x0002652c) popup_snote2_single_graphic_window_t3

0xef0a,	// (0x0002656d) popup_snote2_single_graphic_window_t4_ParamLimits

0xef0a,	// (0x0002656d) popup_snote2_single_graphic_window_t4

0xef40,	// (0x000265a3) popup_snote2_single_graphic_window_t5_ParamLimits

0xef40,	// (0x000265a3) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8e,	// (0x000272f1) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8e,	// (0x000272f1) popup_snote2_single_graphic_window_t

0xdf5e,	// (0x000255c1) clock_nsta_pane_cp2_t1

0xdf5e,	// (0x000255c1) clock_nsta_pane_cp2_t2

0x0001,

0xfab5,	// (0x00027118) clock_nsta_pane_cp2_t

0x3546,	// (0x0001aba9) form_field_data_wide_pane_g1_ParamLimits

0xb82e,	// (0x00022e91) form_field_data_wide_pane_g2_ParamLimits

0xb82e,	// (0x00022e91) form_field_data_wide_pane_g2

0xb83a,	// (0x00022e9d) form_field_data_wide_pane_g3_ParamLimits

0xb83a,	// (0x00022e9d) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00026cde) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00026cde) form_field_data_wide_pane_g

0x95d1,	// (0x00020c34) grid_touch_3_pane_ParamLimits

0x95d1,	// (0x00020c34) grid_touch_3_pane

0x999f,	// (0x00021002) cell_touch_3_pane_ParamLimits

0x999f,	// (0x00021002) cell_touch_3_pane

0xe2f1,	// (0x00025954) cell_touch_3_pane_g1

0xe2f1,	// (0x00025954) cell_touch_3_pane_g2

0x0001,

0xfb3a,	// (0x0002719d) cell_touch_3_pane_g

0xb489,	// (0x00022aec) cont_query_data_pane

0xb491,	// (0x00022af4) cont_query_data_pane_cp1

0xf053,	// (0x000266b6) button_value_adjust_pane_cp7

0xf05b,	// (0x000266be) query_popup_pane_cp3

0xbd66,	// (0x000233c9) bg_popup_sub_pane_cp22_ParamLimits

0x44db,	// (0x0001bb3e) navi_navi_volume_pane_cp2

0x44f3,	// (0x0001bb56) popup_side_volume_key_window_g2

0x44ff,	// (0x0001bb62) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00026d74) popup_side_volume_key_window_g

0x4519,	// (0x0001bb7c) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00026d7b) popup_side_volume_key_window_t

0xbfb0,	// (0x00023613) popup_side_volume_key_window_ParamLimits

0x7405,	// (0x0001ea68) list_double_graphic_pane_g4_ParamLimits

0x7405,	// (0x0001ea68) list_double_graphic_pane_g4

0x9433,	// (0x00020a96) list_single_2heading_msg_pane_ParamLimits

0x9433,	// (0x00020a96) list_single_2heading_msg_pane

0x794e,	// (0x0001efb1) list_single_2heading_msg_pane_g1_ParamLimits

0x794e,	// (0x0001efb1) list_single_2heading_msg_pane_g1

0x795a,	// (0x0001efbd) list_single_2heading_msg_pane_g2_ParamLimits

0x795a,	// (0x0001efbd) list_single_2heading_msg_pane_g2

0x796d,	// (0x0001efd0) list_single_2heading_msg_pane_g3_ParamLimits

0x796d,	// (0x0001efd0) list_single_2heading_msg_pane_g3

0x7979,	// (0x0001efdc) list_single_2heading_msg_pane_g4_ParamLimits

0x7979,	// (0x0001efdc) list_single_2heading_msg_pane_g4

0x0003,

0xfc99,	// (0x000272fc) list_single_2heading_msg_pane_g_ParamLimits

0xfc99,	// (0x000272fc) list_single_2heading_msg_pane_g

0x7991,	// (0x0001eff4) list_single_2heading_msg_pane_t1_ParamLimits

0x7991,	// (0x0001eff4) list_single_2heading_msg_pane_t1

0x79b9,	// (0x0001f01c) list_single_2heading_msg_pane_t2_ParamLimits

0x79b9,	// (0x0001f01c) list_single_2heading_msg_pane_t2

0x7a24,	// (0x0001f087) list_single_2heading_msg_pane_t3_ParamLimits

0x7a24,	// (0x0001f087) list_single_2heading_msg_pane_t3

0x3f4d,	// (0x0001b5b0) list_single_2heading_msg_pane_t4_ParamLimits

0x3f4d,	// (0x0001b5b0) list_single_2heading_msg_pane_t4

0x0003,

0xfca2,	// (0x00027305) list_single_2heading_msg_pane_t_ParamLimits

0xfca2,	// (0x00027305) list_single_2heading_msg_pane_t

0xb220,	// (0x00022883) title_pane_g4_ParamLimits

0xb220,	// (0x00022883) title_pane_g4

0x432b,	// (0x0001b98e) title_pane_stacon_g3_ParamLimits

0x432b,	// (0x0001b98e) title_pane_stacon_g3

0xebec,	// (0x0002624f) list_single_2graphic_im_pane_g4_ParamLimits

0xebec,	// (0x0002624f) list_single_2graphic_im_pane_g4

0xd435,	// (0x00024a98) popup_side_volume_key_window_cp

0xd8da,	// (0x00024f3d) main_idle_act2_pane_t1

0x4d24,	// (0x0001c387) toolbar_button_pane_g10

0x808a,	// (0x0001f6ed) popup_toolbar_window_cp1

0xdf4f,	// (0x000255b2) clock_nsta_pane_cp_t1

0xdf4f,	// (0x000255b2) clock_nsta_pane_cp_t2

0x0001,

0xfab0,	// (0x00027113) clock_nsta_pane_cp_t

0x44db,	// (0x0001bb3e) navi_navi_volume_pane_cp2_ParamLimits

0x44e7,	// (0x0001bb4a) popup_side_volume_key_window_g1_ParamLimits

0x44f3,	// (0x0001bb56) popup_side_volume_key_window_g2_ParamLimits

0x44ff,	// (0x0001bb62) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00026d74) popup_side_volume_key_window_g_ParamLimits

0x519a,	// (0x0001c7fd) fep_hwr_aid_pane

0x1cc0,	// (0x00019323) bg_fep_hwr_top_pane_g4_ParamLimits

0xe34a,	// (0x000259ad) fep_hwr_top_pane_g1_ParamLimits

0xe35c,	// (0x000259bf) fep_hwr_top_pane_g2_ParamLimits

0x524d,	// (0x0001c8b0) fep_hwr_top_pane_g3_ParamLimits

0xfb05,	// (0x00027168) fep_hwr_top_pane_g_ParamLimits

0x5262,	// (0x0001c8c5) fep_hwr_top_text_pane_ParamLimits

0xd235,	// (0x00024898) aid_touch_tab_arrow_arrow_2

0xd23e,	// (0x000248a1) aid_touch_tab_arrow_left_2

0x51ae,	// (0x0001c811) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x51e1,	// (0x0001c844) fep_hwr_prediction_pane

0xe48f,	// (0x00025af2) fep_vkb_prediction_pane

0x976b,	// (0x00020dce) fep_vkb_side_pane_g3_ParamLimits

0x976b,	// (0x00020dce) fep_vkb_side_pane_g3

0xe51d,	// (0x00025b80) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xe8c8,	// (0x00025f2b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xe8d5,	// (0x00025f38) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaf,	// (0x00027212) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xf06c,	// (0x000266cf) fep_hwr_prediction_pane_g1

0x54e1,	// (0x0001cb44) fep_hwr_prediction_pane_g2

0x54e9,	// (0x0001cb4c) fep_hwr_prediction_pane_g3

0x54f1,	// (0x0001cb54) fep_hwr_prediction_pane_g4

0x0003,

0xfcab,	// (0x0002730e) fep_hwr_prediction_pane_g

0xf06c,	// (0x000266cf) fep_vkb_prediction_pane_g1

0xf076,	// (0x000266d9) fep_vkb_prediction_pane_g2

0xf07e,	// (0x000266e1) fep_vkb_prediction_pane_g3

0xf086,	// (0x000266e9) fep_vkb_prediction_pane_g4

0x0003,

0xfcb4,	// (0x00027317) fep_vkb_prediction_pane_g

0x4fd2,	// (0x0001c635) slider_set_pane_g3

0x4fe6,	// (0x0001c649) slider_set_pane_g4

0x4ffe,	// (0x0001c661) slider_set_pane_g5

0x4fd2,	// (0x0001c635) slider_set_pane_g6

0x929f,	// (0x00020902) slider_set_pane_g7

0xd68a,	// (0x00024ced) slider_form_pane_g3

0xd693,	// (0x00024cf6) slider_form_pane_g4

0xd69b,	// (0x00024cfe) slider_form_pane_g5

0xd68a,	// (0x00024ced) slider_form_pane_g6

0x9407,	// (0x00020a6a) slider_form_pane_g7

0xdb23,	// (0x00025186) slider_set_pane_vc_g3

0xdb2c,	// (0x0002518f) slider_set_pane_vc_g4

0xdb35,	// (0x00025198) slider_set_pane_vc_g5

0xdb23,	// (0x00025186) slider_set_pane_vc_g6

0xdb3e,	// (0x000251a1) slider_set_pane_vc_g7

0xdb23,	// (0x00025186) slider_form_pane_vc_g1

0xdb2c,	// (0x0002518f) slider_form_pane_vc_g2

0xdb35,	// (0x00025198) slider_form_pane_vc_g3

0xdb23,	// (0x00025186) slider_form_pane_vc_g4

0xdcb2,	// (0x00025315) slider_form_pane_vc_g5

0x0004,

0xfa82,	// (0x000270e5) slider_form_pane_vc_g

0xb18a,	// (0x000227ed) main_idle_act3_pane

0xf08e,	// (0x000266f1) ai3_links_pane

0x99e6,	// (0x00021049) popup_ai3_data_window_ParamLimits

0x99e6,	// (0x00021049) popup_ai3_data_window

0xb18a,	// (0x000227ed) grid_ai3_links_pane

0x99fe,	// (0x00021061) cell_ai3_links_pane_ParamLimits

0x99fe,	// (0x00021061) cell_ai3_links_pane

0xf097,	// (0x000266fa) bg_popup_sub_pane_cp11

0xf0a4,	// (0x00026707) cell_ai3_links_pane_g1

0xb18a,	// (0x000227ed) bg_popup_sub_pane_cp12

0xf0c9,	// (0x0002672c) heading_ai3_data_pane

0xf0d1,	// (0x00026734) list_ai3_gene_pane

0xf0dd,	// (0x00026740) popup_ai3_data_window_g1

0xf0e5,	// (0x00026748) heading_ai3_data_pane_g1

0xf0ed,	// (0x00026750) heading_ai3_data_pane_t1

0xf0fb,	// (0x0002675e) list_double_ai3_gene_pane_ParamLimits

0xf0fb,	// (0x0002675e) list_double_ai3_gene_pane

0xf108,	// (0x0002676b) list_single_ai3_gene_pane_ParamLimits

0xf108,	// (0x0002676b) list_single_ai3_gene_pane

0xe2b6,	// (0x00025919) list_highlight_pane_cp7_ParamLimits

0xe2b6,	// (0x00025919) list_highlight_pane_cp7

0xf115,	// (0x00026778) list_single_a13_gene_pane_t1_ParamLimits

0xf115,	// (0x00026778) list_single_a13_gene_pane_t1

0xf12c,	// (0x0002678f) list_single_ai3_gene_pane_g1

0xf135,	// (0x00026798) list_single_ai3_gene_pane_g2

0x0001,

0xfcbd,	// (0x00027320) list_single_ai3_gene_pane_g

0xf13d,	// (0x000267a0) list_double_ai3_gene_pane_g1_ParamLimits

0xf13d,	// (0x000267a0) list_double_ai3_gene_pane_g1

0xf149,	// (0x000267ac) list_double_ai3_gene_pane_t1_ParamLimits

0xf149,	// (0x000267ac) list_double_ai3_gene_pane_t1

0xf165,	// (0x000267c8) list_double_ai3_gene_pane_t2_ParamLimits

0xf165,	// (0x000267c8) list_double_ai3_gene_pane_t2

0xf17a,	// (0x000267dd) list_double_ai3_gene_pane_t3_ParamLimits

0xf17a,	// (0x000267dd) list_double_ai3_gene_pane_t3

0x0002,

0xfcc2,	// (0x00027325) list_double_ai3_gene_pane_t_ParamLimits

0xfcc2,	// (0x00027325) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3e80,	// (0x0001b4e3) aid_size_min_col_2

0x99d2,	// (0x00021035) aid_size_min_msg_ParamLimits

0x99d2,	// (0x00021035) aid_size_min_msg

0x977f,	// (0x00020de2) fep_vkb_top_text_pane_g2_ParamLimits

0x977f,	// (0x00020de2) fep_vkb_top_text_pane_g2

0x0001,

0xfb35,	// (0x00027198) fep_vkb_top_text_pane_g_ParamLimits

0xfb35,	// (0x00027198) fep_vkb_top_text_pane_g

0xb18a,	// (0x000227ed) main_hc_apps_shell_pane

0xf197,	// (0x000267fa) grid_hc_apps_pane_ParamLimits

0xf197,	// (0x000267fa) grid_hc_apps_pane

0xf1a6,	// (0x00026809) list_hc_apps_pane

0xf1ae,	// (0x00026811) scroll_pane_cp37_ParamLimits

0xf1ae,	// (0x00026811) scroll_pane_cp37

0x9a14,	// (0x00021077) cell_hc_apps_pane_ParamLimits

0x9a14,	// (0x00021077) cell_hc_apps_pane

0x9aae,	// (0x00021111) cell_hc_apps_pane_g1_ParamLimits

0x9aae,	// (0x00021111) cell_hc_apps_pane_g1

0xf1ba,	// (0x0002681d) cell_hc_apps_pane_g2_ParamLimits

0xf1ba,	// (0x0002681d) cell_hc_apps_pane_g2

0xf1d6,	// (0x00026839) cell_hc_apps_pane_g3_ParamLimits

0xf1d6,	// (0x00026839) cell_hc_apps_pane_g3

0x0002,

0xfcc9,	// (0x0002732c) cell_hc_apps_pane_g_ParamLimits

0xfcc9,	// (0x0002732c) cell_hc_apps_pane_g

0x9adb,	// (0x0002113e) cell_hc_apps_pane_t1_ParamLimits

0x9adb,	// (0x0002113e) cell_hc_apps_pane_t1

0xb3ad,	// (0x00022a10) grid_highlight_pane_cp10_ParamLimits

0xb3ad,	// (0x00022a10) grid_highlight_pane_cp10

0x9b19,	// (0x0002117c) list_single_hc_apps_pane_ParamLimits

0x9b19,	// (0x0002117c) list_single_hc_apps_pane

0x9b45,	// (0x000211a8) list_single_hc_apps_pane_g1

0x7a92,	// (0x0001f0f5) list_single_hc_apps_pane_g2

0x0001,

0xfcd0,	// (0x00027333) list_single_hc_apps_pane_g

0x7aab,	// (0x0001f10e) list_single_hc_apps_pane_g2_copy1

0x7ac7,	// (0x0001f12a) list_single_hc_apps_pane_t1

0xb27a,	// (0x000228dd) bg_set_opt_pane_cp_ParamLimits

0x4279,	// (0x0001b8dc) setting_slider_pane_t1_ParamLimits

0x7dc7,	// (0x0001f42a) setting_slider_pane_t2_ParamLimits

0x7de0,	// (0x0001f443) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00026bc1) setting_slider_pane_t_ParamLimits

0x42bf,	// (0x0001b922) slider_set_pane_ParamLimits

0x475b,	// (0x0001bdbe) control_pane_g5_ParamLimits

0x475b,	// (0x0001bdbe) control_pane_g5

0xd652,	// (0x00024cb5) slider_set_pane_g1_ParamLimits

0x4fc6,	// (0x0001c629) slider_set_pane_g2_ParamLimits

0x4fd2,	// (0x0001c635) slider_set_pane_g3_ParamLimits

0x4fe6,	// (0x0001c649) slider_set_pane_g4_ParamLimits

0x4ffe,	// (0x0001c661) slider_set_pane_g5_ParamLimits

0x4fd2,	// (0x0001c635) slider_set_pane_g6_ParamLimits

0x929f,	// (0x00020902) slider_set_pane_g7_ParamLimits

0xf951,	// (0x00026fb4) slider_set_pane_g_ParamLimits

0xb27a,	// (0x000228dd) navi_icon_text_pane_ParamLimits

0x8b86,	// (0x000201e9) aid_fill_nsta_2_ParamLimits

0x8bb4,	// (0x00020217) aid_touch_tab_arrow_left_ParamLimits

0x8bc8,	// (0x0002022b) aid_touch_tab_arrow_right_ParamLimits

0x8c64,	// (0x000202c7) clock_nsta_pane_ParamLimits

0xd217,	// (0x0002487a) navi_icon_pane_g1_ParamLimits

0xd223,	// (0x00024886) navi_text_pane_t1_ParamLimits

0xdf9f,	// (0x00025602) navi_icon_text_pane_g1_ParamLimits

0xdfab,	// (0x0002560e) navi_icon_text_pane_t1_ParamLimits

0x9b45,	// (0x000211a8) list_single_hc_apps_pane_g1_ParamLimits

0x7a92,	// (0x0001f0f5) list_single_hc_apps_pane_g2_ParamLimits

0xfcd0,	// (0x00027333) list_single_hc_apps_pane_g_ParamLimits

0x7aab,	// (0x0001f10e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7ac7,	// (0x0001f12a) list_single_hc_apps_pane_t1_ParamLimits

0x7c12,	// (0x0001f275) popup_toolbar2_fixed_window_ParamLimits

0x7c12,	// (0x0001f275) popup_toolbar2_fixed_window

0x8b11,	// (0x00020174) popup_toolbar2_float_window

0xb18a,	// (0x000227ed) bg_popup_sub_pane_cp27

0xf1f8,	// (0x0002685b) grid_toolbar2_float_pane

0xb18a,	// (0x000227ed) bg_popup_sub_pane_cp26

0xf1f8,	// (0x0002685b) grid_toolbar2_fixed_pane

0x9b5e,	// (0x000211c1) cell_toolbar2_fixed_pane_ParamLimits

0x9b5e,	// (0x000211c1) cell_toolbar2_fixed_pane

0x9b79,	// (0x000211dc) cell_toolbar2_fixed_pane_g1

0xf200,	// (0x00026863) toolbar2_fixed_button_pane

0xc544,	// (0x00023ba7) toolbar2_fixed_button_pane_g1

0xc54c,	// (0x00023baf) toolbar2_fixed_button_pane_g2

0xc554,	// (0x00023bb7) toolbar2_fixed_button_pane_g3

0xc55c,	// (0x00023bbf) toolbar2_fixed_button_pane_g4

0xc564,	// (0x00023bc7) toolbar2_fixed_button_pane_g5

0xc56c,	// (0x00023bcf) toolbar2_fixed_button_pane_g6

0xc574,	// (0x00023bd7) toolbar2_fixed_button_pane_g7

0xc57c,	// (0x00023bdf) toolbar2_fixed_button_pane_g8

0xc584,	// (0x00023be7) toolbar2_fixed_button_pane_g9

0x0008,

0xf853,	// (0x00026eb6) toolbar2_fixed_button_pane_g

0xf208,	// (0x0002686b) cell_toolbar2_float_pane_ParamLimits

0xf208,	// (0x0002686b) cell_toolbar2_float_pane

0xf219,	// (0x0002687c) cell_toolbar2_float_pane_g1

0xf200,	// (0x00026863) toolbar2_fixed_button_pane_cp

0x9734,	// (0x00020d97) fep_vkb_accented_list_pane_ParamLimits

0x9734,	// (0x00020d97) fep_vkb_accented_list_pane

0x53a4,	// (0x0001ca07) bg_popup_fep_shadow_pane_g9

0xc1b8,	// (0x0002381b) bg_popup_fep_shadow_pane_cp3

0xb94a,	// (0x00022fad) list_accented_list_pane

0xf222,	// (0x00026885) list_single_accented_list_pane_ParamLimits

0xf222,	// (0x00026885) list_single_accented_list_pane

0xc1b8,	// (0x0002381b) list_highlight_pane_cp10

0xf233,	// (0x00026896) list_single_accented_list_pane_t1

0x8a53,	// (0x000200b6) popup_slider_window_ParamLimits

0x8a53,	// (0x000200b6) popup_slider_window

0xf063,	// (0x000266c6) aid_indentation_list_msg

0x9c58,	// (0x000212bb) bg_popup_window_pane_cp19

0xf299,	// (0x000268fc) popup_slider_window_g1

0xf2b5,	// (0x00026918) popup_slider_window_g2

0xf2d1,	// (0x00026934) popup_slider_window_g3

0x0005,

0xfcd5,	// (0x00027338) popup_slider_window_g

0xf2ed,	// (0x00026950) popup_slider_window_t1

0xf331,	// (0x00026994) small_volume_slider_vertical_pane

0xe2f1,	// (0x00025954) small_volume_slider_vertical_pane_g1

0xe2f1,	// (0x00025954) small_volume_slider_vertical_pane_g2

0xf34d,	// (0x000269b0) small_volume_slider_vertical_pane_g3

0x0002,

0xfce7,	// (0x0002734a) small_volume_slider_vertical_pane_g

0x7b96,	// (0x0001f1f9) area_side_right_pane_ParamLimits

0x7b96,	// (0x0001f1f9) area_side_right_pane

0x9d10,	// (0x00021373) aid_size_side_button_ParamLimits

0x9d10,	// (0x00021373) aid_size_side_button

0x9d29,	// (0x0002138c) grid_sctrl_middle_pane_ParamLimits

0x9d29,	// (0x0002138c) grid_sctrl_middle_pane

0x5529,	// (0x0001cb8c) sctrl_sk_bottom_pane

0x553a,	// (0x0001cb9d) sctrl_sk_top_pane

0x554c,	// (0x0001cbaf) aid_touch_sctrl_top

0xb3ad,	// (0x00022a10) bg_sctrl_sk_pane_ParamLimits

0xb3ad,	// (0x00022a10) bg_sctrl_sk_pane

0x5559,	// (0x0001cbbc) sctrl_sk_top_pane_g1

0x5566,	// (0x0001cbc9) sctrl_sk_top_pane_t1

0x554c,	// (0x0001cbaf) aid_touch_sctrl_bottom

0xb3ad,	// (0x00022a10) bg_sctrl_sk_pane_cp_ParamLimits

0xb3ad,	// (0x00022a10) bg_sctrl_sk_pane_cp

0x5581,	// (0x0001cbe4) sctrl_sk_bottom_pane_g1

0x5566,	// (0x0001cbc9) sctrl_sk_bottom_pane_t1

0x9d3f,	// (0x000213a2) cell_sctrl_middle_pane_ParamLimits

0x9d3f,	// (0x000213a2) cell_sctrl_middle_pane

0x9d50,	// (0x000213b3) aid_touch_sctrl_middle_ParamLimits

0x9d50,	// (0x000213b3) aid_touch_sctrl_middle

0x9d5d,	// (0x000213c0) bg_sctrl_middle_pane_ParamLimits

0x9d5d,	// (0x000213c0) bg_sctrl_middle_pane

0xf356,	// (0x000269b9) cell_sctrl_middle_pane_g1_ParamLimits

0xf356,	// (0x000269b9) cell_sctrl_middle_pane_g1

0x9d6b,	// (0x000213ce) cell_sctrl_middle_pane_g2_ParamLimits

0x9d6b,	// (0x000213ce) cell_sctrl_middle_pane_g2

0x0001,

0xfcf3,	// (0x00027356) cell_sctrl_middle_pane_g_ParamLimits

0xfcf3,	// (0x00027356) cell_sctrl_middle_pane_g

0xc544,	// (0x00023ba7) bg_sctrl_middle_pane_g1

0xc54c,	// (0x00023baf) bg_sctrl_middle_pane_g2

0xc554,	// (0x00023bb7) bg_sctrl_middle_pane_g3

0xc55c,	// (0x00023bbf) bg_sctrl_middle_pane_g4

0xc564,	// (0x00023bc7) bg_sctrl_middle_pane_g5

0xc56c,	// (0x00023bcf) bg_sctrl_middle_pane_g6

0xc574,	// (0x00023bd7) bg_sctrl_middle_pane_g7

0xc57c,	// (0x00023bdf) bg_sctrl_middle_pane_g8

0x0007,

0xfcf8,	// (0x0002735b) bg_sctrl_middle_pane_g

0xc584,	// (0x00023be7) bg_sctrl_middle_pane_g8_copy1

0xc544,	// (0x00023ba7) bg_sctrl_sk_pane_g1

0xc54c,	// (0x00023baf) bg_sctrl_sk_pane_g2

0xc554,	// (0x00023bb7) bg_sctrl_sk_pane_g3

0x0008,

0xf853,	// (0x00026eb6) bg_sctrl_sk_pane_g

0xb75c,	// (0x00022dbf) aid_size_touch_scroll_bar

0xc55c,	// (0x00023bbf) bg_sctrl_sk_pane_g4

0xc564,	// (0x00023bc7) bg_sctrl_sk_pane_g5

0xc56c,	// (0x00023bcf) bg_sctrl_sk_pane_g6

0xc574,	// (0x00023bd7) bg_sctrl_sk_pane_g7

0xc57c,	// (0x00023bdf) bg_sctrl_sk_pane_g8

0xc584,	// (0x00023be7) bg_sctrl_sk_pane_g9

0x48ed,	// (0x0001bf50) popup_fep_china_hwr2_fs_candidate_window

0x864e,	// (0x0001fcb1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x864e,	// (0x0001fcb1) popup_fep_china_hwr2_fs_control_window

0xe51d,	// (0x00025b80) sctrl_sk_top_pane_g2

0x0001,

0xfcee,	// (0x00027351) sctrl_sk_top_pane_g

0x9d78,	// (0x000213db) aid_fep_china_hwr2_fs_cell_ParamLimits

0x9d78,	// (0x000213db) aid_fep_china_hwr2_fs_cell

0x9d8c,	// (0x000213ef) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x9d8c,	// (0x000213ef) bg_popup_fep_shadow_pane_cp4

0x9da3,	// (0x00021406) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x9da3,	// (0x00021406) bg_popup_fep_shadow_pane_cp5

0x9db5,	// (0x00021418) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x9db5,	// (0x00021418) popup_fep_china_hwr2_fs_control_bar_grid

0x9dc9,	// (0x0002142c) popup_fep_china_hwr2_fs_control_funtion_grid

0xf364,	// (0x000269c7) aid_fep_china_hwr2_fs_candi_cell

0xb18a,	// (0x000227ed) bg_popup_fep_shadow_pane_cp6

0xf36e,	// (0x000269d1) popup_fep_china_hwr2_fs_candidate_grid

0x9dd1,	// (0x00021434) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x9dd1,	// (0x00021434) cell_fep_china_hwr2_fs_funtion_grid

0xe2f1,	// (0x00025954) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf356,	// (0x000269b9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf356,	// (0x000269b9) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf376,	// (0x000269d9) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf376,	// (0x000269d9) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd09,	// (0x0002736c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd09,	// (0x0002736c) cell_fep_china_hwr2_fs_funtion_grid_g

0x9de9,	// (0x0002144c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x9de9,	// (0x0002144c) cell_fep_china_hwr2_fs_funtion_grid_t1

0x9dfe,	// (0x00021461) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x9dfe,	// (0x00021461) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0e,	// (0x00027371) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0e,	// (0x00027371) cell_fep_china_hwr2_fs_funtion_grid_t

0xf38c,	// (0x000269ef) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf394,	// (0x000269f7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf39c,	// (0x000269ff) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd13,	// (0x00027376) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf3a4,	// (0x00026a07) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf3a4,	// (0x00026a07) cell_fep_china_hwr2_fs_candidate_grid

0xf3bd,	// (0x00026a20) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf3c5,	// (0x00026a28) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe2f1,	// (0x00025954) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe2f1,	// (0x00025954) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3a,	// (0x0002719d) cell_fep_china_hwr2_fs_candidate_grid_g

0xf3cd,	// (0x00026a30) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc3a9,	// (0x00023a0c) clock_nsta_pane_cp_24_ParamLimits

0xc3a9,	// (0x00023a0c) clock_nsta_pane_cp_24

0xc406,	// (0x00023a69) indicator_nsta_pane_cp_24_ParamLimits

0xc406,	// (0x00023a69) indicator_nsta_pane_cp_24

0xd122,	// (0x00024785) heading_pane_g1

0x0001,

0xf8b8,	// (0x00026f1b) heading_pane_g

0x94f9,	// (0x00020b5c) grid_sct_catagory_button_pane

0xd748,	// (0x00024dab) scroll_pane_cp5_ParamLimits

0xdfd1,	// (0x00025634) button_value_adjust_pane_cp5_ParamLimits

0xdfd1,	// (0x00025634) button_value_adjust_pane_cp5

0xe08f,	// (0x000256f2) form2_midp_time_pane_ParamLimits

0xf3db,	// (0x00026a3e) cell_sct_catagory_button_pane_ParamLimits

0xf3db,	// (0x00026a3e) cell_sct_catagory_button_pane

0xe2b6,	// (0x00025919) bg_button_pane_cp01_ParamLimits

0xe2b6,	// (0x00025919) bg_button_pane_cp01

0xe2f1,	// (0x00025954) cell_sct_catagory_button_pane_g1

0x8ac2,	// (0x00020125) popup_tb_extension_window

0x9e1a,	// (0x0002147d) aid_size_cell_ext_ParamLimits

0x9e1a,	// (0x0002147d) aid_size_cell_ext

0xb63a,	// (0x00022c9d) bg_tb_trans_pane_cp1_ParamLimits

0xb63a,	// (0x00022c9d) bg_tb_trans_pane_cp1

0x9e40,	// (0x000214a3) grid_tb_ext_pane_ParamLimits

0x9e40,	// (0x000214a3) grid_tb_ext_pane

0x9e76,	// (0x000214d9) cell_tb_ext_pane_ParamLimits

0x9e76,	// (0x000214d9) cell_tb_ext_pane

0x9e9a,	// (0x000214fd) cell_tb_ext_pane_g1_ParamLimits

0x9e9a,	// (0x000214fd) cell_tb_ext_pane_g1

0xf3ed,	// (0x00026a50) cell_tb_ext_pane_t1

0xb3ad,	// (0x00022a10) list_highlight_pane_cp11_ParamLimits

0xb3ad,	// (0x00022a10) list_highlight_pane_cp11

0x7c27,	// (0x0001f28a) popup_uni_indicator_window_ParamLimits

0x7c27,	// (0x0001f28a) popup_uni_indicator_window

0xb814,	// (0x00022e77) bg_popup_sub_pane_cp14

0xf408,	// (0x00026a6b) list_uniindi_pane

0xf414,	// (0x00026a77) uniindi_top_pane

0xb3ad,	// (0x00022a10) bg_uniindi_top_pane

0xf433,	// (0x00026a96) uniindi_top_pane_g1

0xf449,	// (0x00026aac) uniindi_top_pane_g2

0x0003,

0xfd1a,	// (0x0002737d) uniindi_top_pane_g

0xf473,	// (0x00026ad6) uniindi_top_pane_t1

0xf49d,	// (0x00026b00) list_single_uniindi_pane_ParamLimits

0xf49d,	// (0x00026b00) list_single_uniindi_pane

0xe2f1,	// (0x00025954) bg_uniindi_top_pane_g1

0xf4af,	// (0x00026b12) list_single_uniindi_pane_g1

0xf4c2,	// (0x00026b25) list_single_uniindi_pane_t1

0xb18a,	// (0x000227ed) control_bg_pane

0xf4e7,	// (0x00026b4a) bg_sctrl_sk_pane_cp1

0xf4f0,	// (0x00026b53) bg_sctrl_sk_pane_cp2

0xf4f9,	// (0x00026b5c) control_bg_pane_g1

0xf502,	// (0x00026b65) control_bg_pane_g2

0x0001,

0xfd23,	// (0x00027386) control_bg_pane_g

0xde92,	// (0x000254f5) cell_indicator_nsta_pane_g1_ParamLimits

0x95fe,	// (0x00020c61) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9e,	// (0x00027101) cell_indicator_nsta_pane_g_ParamLimits

0x3c49,	// (0x0001b2ac) form2_midp_time_pane_t1_ParamLimits

0x518c,	// (0x0001c7ef) main_idle_act4_pane_ParamLimits

0x518c,	// (0x0001c7ef) main_idle_act4_pane

0x8ac2,	// (0x00020125) popup_tb_extension_window_ParamLimits

0x9e60,	// (0x000214c3) tb_ext_find_pane_ParamLimits

0x9e60,	// (0x000214c3) tb_ext_find_pane

0xf50b,	// (0x00026b6e) ai_gene_pane_1_cp1

0xc24c,	// (0x000238af) ai_gene_pane_2_cp1

0xf513,	// (0x00026b76) list_single_idle_plugin_calendar_pane

0xf51c,	// (0x00026b7f) list_single_idle_plugin_notification_pane

0xf525,	// (0x00026b88) list_single_idle_plugin_player_pane

0x9eb7,	// (0x0002151a) list_single_idle_plugin_shortcut_pane_ParamLimits

0x9eb7,	// (0x0002151a) list_single_idle_plugin_shortcut_pane

0x9edf,	// (0x00021542) main_idle_act4_pane_t1

0x9ef5,	// (0x00021558) main_idle_act4_pane_t2

0x0001,

0xfd28,	// (0x0002738b) main_idle_act4_pane_t

0x9f0b,	// (0x0002156e) middle_sk_idle_act4_pane_ParamLimits

0x9f0b,	// (0x0002156e) middle_sk_idle_act4_pane

0x9f27,	// (0x0002158a) popup_clock_digital_analogue_window_cp2

0x9f4d,	// (0x000215b0) shortcut_wheel_idle_act4_pane_ParamLimits

0x9f4d,	// (0x000215b0) shortcut_wheel_idle_act4_pane

0xe2f1,	// (0x00025954) shortcut_wheel_idle_act4_pane_g1

0xe2f1,	// (0x00025954) shortcut_wheel_idle_act4_pane_g2

0xe2f1,	// (0x00025954) shortcut_wheel_idle_act4_pane_g3

0xe2f1,	// (0x00025954) shortcut_wheel_idle_act4_pane_g4

0xe2f1,	// (0x00025954) shortcut_wheel_idle_act4_pane_g5

0xf52e,	// (0x00026b91) shortcut_wheel_idle_act4_pane_g6

0xf536,	// (0x00026b99) shortcut_wheel_idle_act4_pane_g7

0xf53e,	// (0x00026ba1) shortcut_wheel_idle_act4_pane_g8

0xf546,	// (0x00026ba9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2d,	// (0x00027390) shortcut_wheel_idle_act4_pane_g

0x1cc0,	// (0x00019323) middle_sk_idle_act4_pane_g1_ParamLimits

0x1cc0,	// (0x00019323) middle_sk_idle_act4_pane_g1

0x9fc8,	// (0x0002162b) middle_sk_idle_act4_pane_g2_ParamLimits

0x9fc8,	// (0x0002162b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd50,	// (0x000273b3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd50,	// (0x000273b3) middle_sk_idle_act4_pane_g

0x9fe0,	// (0x00021643) middle_sk_idle_act4_pane_t1_ParamLimits

0x9fe0,	// (0x00021643) middle_sk_idle_act4_pane_t1

0xa00f,	// (0x00021672) grid_ai_shortcut_pane_ParamLimits

0xa00f,	// (0x00021672) grid_ai_shortcut_pane

0xa02c,	// (0x0002168f) list_highlight_pane_cp16_ParamLimits

0xa02c,	// (0x0002168f) list_highlight_pane_cp16

0xa039,	// (0x0002169c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa039,	// (0x0002169c) list_single_idle_plugin_shortcut_pane_g1

0xa045,	// (0x000216a8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa045,	// (0x000216a8) list_single_idle_plugin_shortcut_pane_g2

0xa061,	// (0x000216c4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa061,	// (0x000216c4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd55,	// (0x000273b8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd55,	// (0x000273b8) list_single_idle_plugin_shortcut_pane_g

0xa076,	// (0x000216d9) cell_ai_shortcut_pane_ParamLimits

0xa076,	// (0x000216d9) cell_ai_shortcut_pane

0xa08c,	// (0x000216ef) cell_ai_shortcut_pane_g1_ParamLimits

0xa08c,	// (0x000216ef) cell_ai_shortcut_pane_g1

0xf50b,	// (0x00026b6e) ai_gene_pane_1_cp2

0x0023,	// (0x00017686) ai_gene_pane_2_cp2

0x002b,	// (0x0001768e) list_highlight_pane_cp15

0x0034,	// (0x00017697) list_single_idle_plugin_calendar_pane_g1

0x002b,	// (0x0001768e) list_highlight_pane_cp17

0x003c,	// (0x0001769f) list_single_idle_plugin_calendar_pane_g1_copy1

0x0044,	// (0x000176a7) list_single_idle_plugin_player_pane_g1

0xd966,	// (0x00024fc9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5c,	// (0x000273bf) list_single_idle_plugin_player_pane_g

0x004c,	// (0x000176af) list_single_idle_plugin_player_pane_t1

0x005a,	// (0x000176bd) list_single_idle_plugin_player_pane_t2

0x0068,	// (0x000176cb) list_single_idle_plugin_player_pane_t3

0x0076,	// (0x000176d9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd61,	// (0x000273c4) list_single_idle_plugin_player_pane_t

0x0084,	// (0x000176e7) wait_bar_pane_cp15

0x008c,	// (0x000176ef) grid_ai_notification_pane

0xd966,	// (0x00024fc9) list_single_idle_plugin_notification_pane_g1

0xa0ae,	// (0x00021711) cell_ai_notification_pane_ParamLimits

0xa0ae,	// (0x00021711) cell_ai_notification_pane

0x00a2,	// (0x00017705) cell_ai_notification_pane_g1

0x00aa,	// (0x0001770d) cell_ai_notification_pane_t1

0xa0bb,	// (0x0002171e) tb_ext_find_button_pane

0xa0c3,	// (0x00021726) tb_ext_find_pane_g1

0xa0cb,	// (0x0002172e) tb_ext_find_pane_t1

0xbd26,	// (0x00023389) tb_ext_find_button_pane_g1

0x00d6,	// (0x00017739) tb_ext_find_button_pane_g2

0x0001,

0xfd6a,	// (0x000273cd) tb_ext_find_button_pane_g

0x9edf,	// (0x00021542) main_idle_act4_pane_t1_ParamLimits

0x9ef5,	// (0x00021558) main_idle_act4_pane_t2_ParamLimits

0xfd28,	// (0x0002738b) main_idle_act4_pane_t_ParamLimits

0x9f27,	// (0x0002158a) popup_clock_digital_analogue_window_cp2_ParamLimits

0x9f3d,	// (0x000215a0) sat_plugin_idle_act4_pane_ParamLimits

0x9f3d,	// (0x000215a0) sat_plugin_idle_act4_pane

0xa0d9,	// (0x0002173c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa0d9,	// (0x0002173c) sat_plugin_idle_act4_pane_t1

0xa0f1,	// (0x00021754) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa0f1,	// (0x00021754) sat_plugin_idle_act4_pane_t2

0xa109,	// (0x0002176c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa109,	// (0x0002176c) sat_plugin_idle_act4_pane_t3

0xa121,	// (0x00021784) sat_plugin_idle_act4_pane_t4_ParamLimits

0xa121,	// (0x00021784) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6f,	// (0x000273d2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6f,	// (0x000273d2) sat_plugin_idle_act4_pane_t

0x412b,	// (0x0001b78e) popup_battery_window_ParamLimits

0x412b,	// (0x0001b78e) popup_battery_window

0xb3ad,	// (0x00022a10) bg_popup_sub_pane_cp25_ParamLimits

0xb3ad,	// (0x00022a10) bg_popup_sub_pane_cp25

0x012b,	// (0x0001778e) popup_battery_window_g1_ParamLimits

0x012b,	// (0x0001778e) popup_battery_window_g1

0x0137,	// (0x0001779a) popup_battery_window_t1_ParamLimits

0x0137,	// (0x0001779a) popup_battery_window_t1

0x0149,	// (0x000177ac) popup_battery_window_t2_ParamLimits

0x0149,	// (0x000177ac) popup_battery_window_t2

0x0001,

0xfd78,	// (0x000273db) popup_battery_window_t_ParamLimits

0xfd78,	// (0x000273db) popup_battery_window_t

0x8352,	// (0x0001f9b5) midp_canvas_pane_ParamLimits

0x83a7,	// (0x0001fa0a) midp_keypad_pane_ParamLimits

0x83a7,	// (0x0001fa0a) midp_keypad_pane

0xb99a,	// (0x00022ffd) main_midp_pane_ParamLimits

0xdf6d,	// (0x000255d0) signal_pane_g2_cp_ParamLimits

0xa139,	// (0x0002179c) aid_size_cell_midp_keypad_ParamLimits

0xa139,	// (0x0002179c) aid_size_cell_midp_keypad

0xa157,	// (0x000217ba) midp_keyp_game_grid_pane_ParamLimits

0xa157,	// (0x000217ba) midp_keyp_game_grid_pane

0xa176,	// (0x000217d9) midp_keyp_rocker_pane_ParamLimits

0xa176,	// (0x000217d9) midp_keyp_rocker_pane

0xa1b7,	// (0x0002181a) midp_keyp_sk_left_pane_ParamLimits

0xa1b7,	// (0x0002181a) midp_keyp_sk_left_pane

0xa209,	// (0x0002186c) midp_keyp_sk_right_pane_ParamLimits

0xa209,	// (0x0002186c) midp_keyp_sk_right_pane

0xb18a,	// (0x000227ed) bg_button_pane_cp03

0xa255,	// (0x000218b8) midp_keyp_sk_left_pane_g1

0xb18a,	// (0x000227ed) bg_button_pane_cp04

0xa255,	// (0x000218b8) midp_keyp_sk_right_pane_g1

0xe2f1,	// (0x00025954) midp_keyp_rocker_pane_g1

0xa25e,	// (0x000218c1) keyp_game_cell_pane_ParamLimits

0xa25e,	// (0x000218c1) keyp_game_cell_pane

0xb18a,	// (0x000227ed) bg_button_pane_cp02

0xa280,	// (0x000218e3) keyp_game_cell_pane_g1

0x7bd8,	// (0x0001f23b) popup_fep_vkb2_window_ParamLimits

0x7bd8,	// (0x0001f23b) popup_fep_vkb2_window

0xa289,	// (0x000218ec) aid_size_cell_vkb2_ParamLimits

0xa289,	// (0x000218ec) aid_size_cell_vkb2

0xa2bf,	// (0x00021922) popup_fep_vkb2_window_g1_ParamLimits

0xa2bf,	// (0x00021922) popup_fep_vkb2_window_g1

0xa30f,	// (0x00021972) vkb2_area_bottom_pane_ParamLimits

0xa30f,	// (0x00021972) vkb2_area_bottom_pane

0xa34d,	// (0x000219b0) vkb2_area_keypad_pane_ParamLimits

0xa34d,	// (0x000219b0) vkb2_area_keypad_pane

0xa38b,	// (0x000219ee) vkb2_area_top_pane_ParamLimits

0xa38b,	// (0x000219ee) vkb2_area_top_pane

0xa407,	// (0x00021a6a) vkb2_top_entry_pane_ParamLimits

0xa407,	// (0x00021a6a) vkb2_top_entry_pane

0xa434,	// (0x00021a97) vkb2_top_grid_left_pane_ParamLimits

0xa434,	// (0x00021a97) vkb2_top_grid_left_pane

0xa454,	// (0x00021ab7) vkb2_top_grid_right_pane_ParamLimits

0xa454,	// (0x00021ab7) vkb2_top_grid_right_pane

0x57bc,	// (0x0001ce1f) vkb2_cell_keypad_pane_ParamLimits

0x57bc,	// (0x0001ce1f) vkb2_cell_keypad_pane

0xa49a,	// (0x00021afd) vkb2_area_bottom_grid_pane_ParamLimits

0xa49a,	// (0x00021afd) vkb2_area_bottom_grid_pane

0xa4c0,	// (0x00021b23) vkb2_area_bottom_pane_g1_ParamLimits

0xa4c0,	// (0x00021b23) vkb2_area_bottom_pane_g1

0xa4e6,	// (0x00021b49) vkb2_area_bottom_pane_g2_ParamLimits

0xa4e6,	// (0x00021b49) vkb2_area_bottom_pane_g2

0xa517,	// (0x00021b7a) vkb2_area_bottom_pane_g3_ParamLimits

0xa517,	// (0x00021b7a) vkb2_area_bottom_pane_g3

0x0002,

0xfd7d,	// (0x000273e0) vkb2_area_bottom_pane_g_ParamLimits

0xfd7d,	// (0x000273e0) vkb2_area_bottom_pane_g

0x5934,	// (0x0001cf97) vkb2_top_cell_left_pane_ParamLimits

0x5934,	// (0x0001cf97) vkb2_top_cell_left_pane

0xa56d,	// (0x00021bd0) vkb2_top_entry_pane_g1_ParamLimits

0xa56d,	// (0x00021bd0) vkb2_top_entry_pane_g1

0xa57b,	// (0x00021bde) vkb2_top_entry_pane_t1_ParamLimits

0xa57b,	// (0x00021bde) vkb2_top_entry_pane_t1

0x1cd6,	// (0x00019339) vkb2_top_entry_pane_t2_ParamLimits

0x1cd6,	// (0x00019339) vkb2_top_entry_pane_t2

0x1d08,	// (0x0001936b) vkb2_top_entry_pane_t3_ParamLimits

0x1d08,	// (0x0001936b) vkb2_top_entry_pane_t3

0x0002,

0xfd84,	// (0x000273e7) vkb2_top_entry_pane_t_ParamLimits

0xfd84,	// (0x000273e7) vkb2_top_entry_pane_t

0xa5b4,	// (0x00021c17) vkb2_top_grid_right_pane_g1_ParamLimits

0xa5b4,	// (0x00021c17) vkb2_top_grid_right_pane_g1

0x59d7,	// (0x0001d03a) vkb2_top_grid_right_pane_g2_ParamLimits

0x59d7,	// (0x0001d03a) vkb2_top_grid_right_pane_g2

0x59ef,	// (0x0001d052) vkb2_top_grid_right_pane_g3_ParamLimits

0x59ef,	// (0x0001d052) vkb2_top_grid_right_pane_g3

0xa5ca,	// (0x00021c2d) vkb2_top_grid_right_pane_g4_ParamLimits

0xa5ca,	// (0x00021c2d) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8b,	// (0x000273ee) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8b,	// (0x000273ee) vkb2_top_grid_right_pane_g

0x5a1d,	// (0x0001d080) vkb2_top_cell_left_pane_g1

0x5a34,	// (0x0001d097) vkb2_cell_keypad_pane_g1_ParamLimits

0x5a34,	// (0x0001d097) vkb2_cell_keypad_pane_g1

0x1d1e,	// (0x00019381) vkb2_cell_keypad_pane_t1_ParamLimits

0x1d1e,	// (0x00019381) vkb2_cell_keypad_pane_t1

0x5a42,	// (0x0001d0a5) vkb2_cell_bottom_grid_pane_ParamLimits

0x5a42,	// (0x0001d0a5) vkb2_cell_bottom_grid_pane

0x5a7b,	// (0x0001d0de) vkb2_cell_bottom_grid_pane_g1

0x9f6c,	// (0x000215cf) aid_call2_pane_cp02

0x9f74,	// (0x000215d7) aid_call_pane_cp02

0x9f7c,	// (0x000215df) clock_digital_number_pane_cp10

0x9f84,	// (0x000215e7) clock_digital_number_pane_cp11

0x9f8c,	// (0x000215ef) clock_digital_number_pane_cp12

0x9f94,	// (0x000215f7) clock_digital_number_pane_cp13

0x9f9c,	// (0x000215ff) clock_digital_separator_pane_cp10

0xbd26,	// (0x00023389) popup_clock_digital_analogue_window_cp2_g1

0xbd26,	// (0x00023389) popup_clock_digital_analogue_window_cp2_g2

0x9fa4,	// (0x00021607) popup_clock_digital_analogue_window_cp2_g3

0xbd26,	// (0x00023389) popup_clock_digital_analogue_window_cp2_g4

0x9fa4,	// (0x00021607) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd40,	// (0x000273a3) popup_clock_digital_analogue_window_cp2_g

0x9fac,	// (0x0002160f) popup_clock_digital_analogue_window_cp2_t1

0x9fba,	// (0x0002161d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4b,	// (0x000273ae) popup_clock_digital_analogue_window_cp2_t

0xe2f1,	// (0x00025954) clock_digital_number_pane_cp10_g1

0xe2f1,	// (0x00025954) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3a,	// (0x0002719d) clock_digital_number_pane_cp10_g

0xe2f1,	// (0x00025954) clock_digital_separator_pane_cp10_g1

0xe2f1,	// (0x00025954) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3a,	// (0x0002719d) clock_digital_separator_pane_cp10_g

0xf455,	// (0x00026ab8) uniindi_top_pane_g3

0xf466,	// (0x00026ac9) uniindi_top_pane_g4

0x5827,	// (0x0001ce8a) vkb2_row_keypad_pane_ParamLimits

0x5827,	// (0x0001ce8a) vkb2_row_keypad_pane

0x5a97,	// (0x0001d0fa) vkb2_cell_t_keypad_pane_ParamLimits

0x5a97,	// (0x0001d0fa) vkb2_cell_t_keypad_pane

0x5aa4,	// (0x0001d107) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5aa4,	// (0x0001d107) vkb2_cell_t_keypad_pane_cp08

0x5ab4,	// (0x0001d117) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5ab4,	// (0x0001d117) vkb2_cell_t_keypad_pane_cp09

0x5ac5,	// (0x0001d128) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5ac5,	// (0x0001d128) vkb2_cell_t_keypad_pane_cp01

0x5ad5,	// (0x0001d138) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5ad5,	// (0x0001d138) vkb2_cell_t_keypad_pane_cp02

0x5ae5,	// (0x0001d148) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5ae5,	// (0x0001d148) vkb2_cell_t_keypad_pane_cp03

0x5af5,	// (0x0001d158) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5af5,	// (0x0001d158) vkb2_cell_t_keypad_pane_cp04

0x5b05,	// (0x0001d168) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5b05,	// (0x0001d168) vkb2_cell_t_keypad_pane_cp05

0x5b15,	// (0x0001d178) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5b15,	// (0x0001d178) vkb2_cell_t_keypad_pane_cp06

0x5b25,	// (0x0001d188) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5b25,	// (0x0001d188) vkb2_cell_t_keypad_pane_cp07

0x5b35,	// (0x0001d198) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5b35,	// (0x0001d198) vkb2_cell_t_keypad_pane_cp10

0xe51d,	// (0x00025b80) vkb2_cell_t_keypad_pane_g1

0x1d35,	// (0x00019398) vkb2_cell_t_keypad_pane_t1

0xb18a,	// (0x000227ed) popup_grid_graphic2_window

0xa5e0,	// (0x00021c43) aid_size_cell_graphic2_ParamLimits

0xa5e0,	// (0x00021c43) aid_size_cell_graphic2

0xa61e,	// (0x00021c81) bg_popup_window_pane_cp21_ParamLimits

0xa61e,	// (0x00021c81) bg_popup_window_pane_cp21

0xa62c,	// (0x00021c8f) graphic2_pages_pane_ParamLimits

0xa62c,	// (0x00021c8f) graphic2_pages_pane

0xa675,	// (0x00021cd8) grid_graphic2_control_pane_ParamLimits

0xa675,	// (0x00021cd8) grid_graphic2_control_pane

0xa6b3,	// (0x00021d16) grid_graphic2_pane_ParamLimits

0xa6b3,	// (0x00021d16) grid_graphic2_pane

0xa722,	// (0x00021d85) cell_graphic2_pane

0xb18a,	// (0x000227ed) main_comp_mode_pane

0xf0d1,	// (0x00026734) list_ai3_gene_pane_ParamLimits

0x9c58,	// (0x000212bb) bg_popup_window_pane_cp19_ParamLimits

0xf241,	// (0x000268a4) bg_touch_area_indi_pane_ParamLimits

0xf241,	// (0x000268a4) bg_touch_area_indi_pane

0xf257,	// (0x000268ba) bg_touch_area_indi_pane_cp01_ParamLimits

0xf257,	// (0x000268ba) bg_touch_area_indi_pane_cp01

0xf26d,	// (0x000268d0) bg_touch_area_indi_pane_cp02_ParamLimits

0xf26d,	// (0x000268d0) bg_touch_area_indi_pane_cp02

0xf283,	// (0x000268e6) bg_touch_area_indi_pane_cp03_ParamLimits

0xf283,	// (0x000268e6) bg_touch_area_indi_pane_cp03

0xf299,	// (0x000268fc) popup_slider_window_g1_ParamLimits

0xf2b5,	// (0x00026918) popup_slider_window_g2_ParamLimits

0xf2d1,	// (0x00026934) popup_slider_window_g3_ParamLimits

0xfcd5,	// (0x00027338) popup_slider_window_g_ParamLimits

0xf2ed,	// (0x00026950) popup_slider_window_t1_ParamLimits

0xf331,	// (0x00026994) small_volume_slider_vertical_pane_ParamLimits

0xa722,	// (0x00021d85) cell_graphic2_pane_ParamLimits

0xa76d,	// (0x00021dd0) bg_button_pane_cp10_ParamLimits

0xa76d,	// (0x00021dd0) bg_button_pane_cp10

0xa77e,	// (0x00021de1) bg_button_pane_cp11_ParamLimits

0xa77e,	// (0x00021de1) bg_button_pane_cp11

0xa78f,	// (0x00021df2) graphic2_pages_pane_g1_ParamLimits

0xa78f,	// (0x00021df2) graphic2_pages_pane_g1

0xa7aa,	// (0x00021e0d) graphic2_pages_pane_g2_ParamLimits

0xa7aa,	// (0x00021e0d) graphic2_pages_pane_g2

0x0001,

0xfd99,	// (0x000273fc) graphic2_pages_pane_g_ParamLimits

0xfd99,	// (0x000273fc) graphic2_pages_pane_g

0xa7c2,	// (0x00021e25) graphic2_pages_pane_t1_ParamLimits

0xa7c2,	// (0x00021e25) graphic2_pages_pane_t1

0xa7da,	// (0x00021e3d) cell_graphic2_control_pane_ParamLimits

0xa7da,	// (0x00021e3d) cell_graphic2_control_pane

0xa804,	// (0x00021e67) cell_graphic2_pane_g1_ParamLimits

0xa804,	// (0x00021e67) cell_graphic2_pane_g1

0x1d47,	// (0x000193aa) cell_graphic2_pane_g2_ParamLimits

0x1d47,	// (0x000193aa) cell_graphic2_pane_g2

0xa811,	// (0x00021e74) cell_graphic2_pane_g3_ParamLimits

0xa811,	// (0x00021e74) cell_graphic2_pane_g3

0x1d54,	// (0x000193b7) cell_graphic2_pane_g4_ParamLimits

0x1d54,	// (0x000193b7) cell_graphic2_pane_g4

0xa81e,	// (0x00021e81) cell_graphic2_pane_g5_ParamLimits

0xa81e,	// (0x00021e81) cell_graphic2_pane_g5

0x0004,

0xfd9e,	// (0x00027401) cell_graphic2_pane_g_ParamLimits

0xfd9e,	// (0x00027401) cell_graphic2_pane_g

0xa83e,	// (0x00021ea1) cell_graphic2_pane_t1_ParamLimits

0xa83e,	// (0x00021ea1) cell_graphic2_pane_t1

0xd116,	// (0x00024779) grid_highlight_pane_cp11_ParamLimits

0xd116,	// (0x00024779) grid_highlight_pane_cp11

0xb3ad,	// (0x00022a10) bg_button_pane_cp05

0xa873,	// (0x00021ed6) cell_graphic2_control_pane_g1

0xe2f1,	// (0x00025954) bg_touch_area_indi_pane_g1

0x1d61,	// (0x000193c4) aid_cmod_rocker_key_size

0x1d6b,	// (0x000193ce) aid_cmode_itu_key_size

0x1d75,	// (0x000193d8) main_cmode_video_pane

0x1d7d,	// (0x000193e0) main_comp_mode_itu_pane

0x1d87,	// (0x000193ea) main_comp_mode_rocker_pane

0x1d8f,	// (0x000193f2) cell_cmode_rocker_pane_ParamLimits

0x1d8f,	// (0x000193f2) cell_cmode_rocker_pane

0x1da1,	// (0x00019404) cell_cmode_itu_pane_ParamLimits

0x1da1,	// (0x00019404) cell_cmode_itu_pane

0xb814,	// (0x00022e77) bg_button_pane_cp06_ParamLimits

0xb814,	// (0x00022e77) bg_button_pane_cp06

0xe51d,	// (0x00025b80) cell_cmode_rocker_pane_g1_ParamLimits

0xe51d,	// (0x00025b80) cell_cmode_rocker_pane_g1

0xf356,	// (0x000269b9) cell_cmode_rocker_pane_g2_ParamLimits

0xf356,	// (0x000269b9) cell_cmode_rocker_pane_g2

0x0001,

0xfdae,	// (0x00027411) cell_cmode_rocker_pane_g_ParamLimits

0xfdae,	// (0x00027411) cell_cmode_rocker_pane_g

0xb18a,	// (0x000227ed) bg_button_pane_cp07

0x1db6,	// (0x00019419) cell_cmode_itu_pane_g1

0x1dbf,	// (0x00019422) cell_cmode_itu_pane_t1

0x1dcd,	// (0x00019430) cell_cmode_itu_pane_t2

0x0001,

0xfdb3,	// (0x00027416) cell_cmode_itu_pane_t

0xf4d7,	// (0x00026b3a) aid_touch_ctrl_left

0xf4df,	// (0x00026b42) aid_touch_ctrl_right

0xb18a,	// (0x000227ed) compa_mode_pane

0xa89b,	// (0x00021efe) aid_cmod_rocker_key_size_cp

0xa8a5,	// (0x00021f08) aid_cmode_itu_key_size_cp

0x1ddb,	// (0x0001943e) compa_mode_pane_g1

0x1de3,	// (0x00019446) compa_mode_pane_g2

0x1deb,	// (0x0001944e) compa_mode_pane_g3

0x0002,

0xfdb8,	// (0x0002741b) compa_mode_pane_g

0xa8af,	// (0x00021f12) main_comp_mode_itu_pane_cp

0xa8b9,	// (0x00021f1c) main_comp_mode_rocker_pane_cp

0xa8c3,	// (0x00021f26) cell_cmode_itu_pane_cp_ParamLimits

0xa8c3,	// (0x00021f26) cell_cmode_itu_pane_cp

0xa8d8,	// (0x00021f3b) cell_cmode_rocker_pane_cp_ParamLimits

0xa8d8,	// (0x00021f3b) cell_cmode_rocker_pane_cp

0xb814,	// (0x00022e77) bg_button_pane_cp06_cp_ParamLimits

0xb814,	// (0x00022e77) bg_button_pane_cp06_cp

0xe51d,	// (0x00025b80) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe51d,	// (0x00025b80) cell_cmode_rocker_pane_g1_cp

0xe2f1,	// (0x00025954) cell_cmode_rocker_pane_g2_cp

0xb18a,	// (0x000227ed) bg_button_pane_cp07_cp

0xa8ea,	// (0x00021f4d) cell_cmode_itu_pane_g1_cp

0xa8f3,	// (0x00021f56) cell_cmode_itu_pane_t1_cp

0xa901,	// (0x00021f64) cell_cmode_itu_pane_t2_cp

0x93ff,	// (0x00020a62) settings_code_pane_cp2

0xb27a,	// (0x000228dd) bg_popup_window_pane_cp3_ParamLimits

0xb5ab,	// (0x00022c0e) heading_pane_cp3_ParamLimits

0xb5b7,	// (0x00022c1a) listscroll_popup_graphic_pane_ParamLimits

0x519a,	// (0x0001c7fd) fep_hwr_aid_pane_ParamLimits

0x554c,	// (0x0001cbaf) aid_touch_sctrl_top_ParamLimits

0x5559,	// (0x0001cbbc) sctrl_sk_top_pane_g1_ParamLimits

0xe51d,	// (0x00025b80) sctrl_sk_top_pane_g2_ParamLimits

0xfcee,	// (0x00027351) sctrl_sk_top_pane_g_ParamLimits

0x5566,	// (0x0001cbc9) sctrl_sk_top_pane_t1_ParamLimits

0x554c,	// (0x0001cbaf) aid_touch_sctrl_bottom_ParamLimits

0x5566,	// (0x0001cbc9) sctrl_sk_bottom_pane_t1_ParamLimits

0xf421,	// (0x00026a84) aid_area_touch_clock

0xa3c9,	// (0x00021a2c) aid_vkb2_area_top_pane_cell_ParamLimits

0xa3c9,	// (0x00021a2c) aid_vkb2_area_top_pane_cell

0xa474,	// (0x00021ad7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa474,	// (0x00021ad7) aid_vkb2_area_bottom_pane_cell

0x1cce,	// (0x00019331) popup_char_count_window

0x1df3,	// (0x00019456) popup_char_count_window_g1

0x1dfc,	// (0x0001945f) popup_char_count_window_g2

0x1e05,	// (0x00019468) popup_char_count_window_g3

0x0002,

0xfdbf,	// (0x00027422) popup_char_count_window_g

0x1e0e,	// (0x00019471) popup_char_count_window_t1

0x560c,	// (0x0001cc6f) popup_fep_char_preview_window_ParamLimits

0x560c,	// (0x0001cc6f) popup_fep_char_preview_window

0xa3e9,	// (0x00021a4c) vkb2_top_candi_pane_ParamLimits

0xa3e9,	// (0x00021a4c) vkb2_top_candi_pane

0xa90f,	// (0x00021f72) cell_vkb2_top_candi_pane_ParamLimits

0xa90f,	// (0x00021f72) cell_vkb2_top_candi_pane

0xcb2e,	// (0x00024191) bg_popup_fep_char_preview_window_ParamLimits

0xcb2e,	// (0x00024191) bg_popup_fep_char_preview_window

0x5e65,	// (0x0001d4c8) popup_fep_char_preview_window_t1_ParamLimits

0x5e65,	// (0x0001d4c8) popup_fep_char_preview_window_t1

0x1e2c,	// (0x0001948f) bg_popup_fep_char_preview_window_g1

0x1e24,	// (0x00019487) bg_popup_fep_char_preview_window_g2

0x1e1c,	// (0x0001947f) bg_popup_fep_char_preview_window_g3

0x1e4c,	// (0x000194af) bg_popup_fep_char_preview_window_g4

0x1e44,	// (0x000194a7) bg_popup_fep_char_preview_window_g5

0x5e9f,	// (0x0001d502) bg_popup_fep_char_preview_window_g6

0x1e3c,	// (0x0001949f) bg_popup_fep_char_preview_window_g7

0x1e34,	// (0x00019497) bg_popup_fep_char_preview_window_g8

0x1e54,	// (0x000194b7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc6,	// (0x00027429) bg_popup_fep_char_preview_window_g

0xe51d,	// (0x00025b80) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe51d,	// (0x00025b80) cell_vkb2_top_candi_pane_g1

0xe74c,	// (0x00025daf) cell_vkb2_top_candi_pane_g2_ParamLimits

0xe74c,	// (0x00025daf) cell_vkb2_top_candi_pane_g2

0xe76d,	// (0x00025dd0) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe76d,	// (0x00025dd0) cell_vkb2_top_candi_pane_g3

0x5ea7,	// (0x0001d50a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x5ea7,	// (0x0001d50a) cell_vkb2_top_candi_pane_g4

0x1c9f,	// (0x00019302) cell_vkb2_top_candi_pane_g5_ParamLimits

0x1c9f,	// (0x00019302) cell_vkb2_top_candi_pane_g5

0xf356,	// (0x000269b9) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf356,	// (0x000269b9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd9,	// (0x0002743c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd9,	// (0x0002743c) cell_vkb2_top_candi_pane_g

0x5ec8,	// (0x0001d52b) cell_vkb2_top_candi_pane_t1

0x4fb2,	// (0x0001c615) aid_size_touch_slider_mark_ParamLimits

0x4fb2,	// (0x0001c615) aid_size_touch_slider_mark

0xa660,	// (0x00021cc3) grid_graphic2_catg_pane_ParamLimits

0xa660,	// (0x00021cc3) grid_graphic2_catg_pane

0xa6f7,	// (0x00021d5a) popup_grid_graphic2_window_t1_ParamLimits

0xa6f7,	// (0x00021d5a) popup_grid_graphic2_window_t1

0xa70c,	// (0x00021d6f) popup_grid_graphic2_window_t2_ParamLimits

0xa70c,	// (0x00021d6f) popup_grid_graphic2_window_t2

0x0001,

0xfd94,	// (0x000273f7) popup_grid_graphic2_window_t_ParamLimits

0xfd94,	// (0x000273f7) popup_grid_graphic2_window_t

0xb3ad,	// (0x00022a10) bg_button_pane_cp05_ParamLimits

0xa873,	// (0x00021ed6) cell_graphic2_control_pane_g1_ParamLimits

0xf49d,	// (0x00026b00) cell_graphic2_catg_pane_ParamLimits

0xf49d,	// (0x00026b00) cell_graphic2_catg_pane

0xb18a,	// (0x000227ed) bg_button_pane_cp12

0xa959,	// (0x00021fbc) cell_graphic2_catg_pane_g1

0xf3ed,	// (0x00026a50) cell_tb_ext_pane_t1_ParamLimits

0x5994,	// (0x0001cff7) vkb2_top_cell_right_narrow_pane_ParamLimits

0x5994,	// (0x0001cff7) vkb2_top_cell_right_narrow_pane

0x59ac,	// (0x0001d00f) vkb2_top_cell_right_wide_pane_ParamLimits

0x59ac,	// (0x0001d00f) vkb2_top_cell_right_wide_pane

0x518c,	// (0x0001c7ef) bg_vkb2_func_pane_ParamLimits

0x518c,	// (0x0001c7ef) bg_vkb2_func_pane

0x5a1d,	// (0x0001d080) vkb2_top_cell_left_pane_g1_ParamLimits

0x518c,	// (0x0001c7ef) bg_vkb2_fuc_pane_cp03_ParamLimits

0x518c,	// (0x0001c7ef) bg_vkb2_fuc_pane_cp03

0x5a7b,	// (0x0001d0de) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc54c,	// (0x00023baf) bg_vkb2_func_pane_g1

0xc554,	// (0x00023bb7) bg_vkb2_func_pane_g2

0xc564,	// (0x00023bc7) bg_vkb2_func_pane_g3

0xc55c,	// (0x00023bbf) bg_vkb2_func_pane_g4

0xc56c,	// (0x00023bcf) bg_vkb2_func_pane_g5

0xc574,	// (0x00023bd7) bg_vkb2_func_pane_g6

0xc57c,	// (0x00023bdf) bg_vkb2_func_pane_g7

0xc584,	// (0x00023be7) bg_vkb2_func_pane_g8

0xc544,	// (0x00023ba7) bg_vkb2_func_pane_g9

0x0008,

0xfde6,	// (0x00027449) bg_vkb2_func_pane_g

0x518c,	// (0x0001c7ef) bg_vkb2_fuc_pane_cp01_ParamLimits

0x518c,	// (0x0001c7ef) bg_vkb2_fuc_pane_cp01

0x5a1d,	// (0x0001d080) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x5a1d,	// (0x0001d080) vkb2_top_cell_right_wide_pane_g1

0x518c,	// (0x0001c7ef) bg_vkb2_fuc_pane_cp02_ParamLimits

0x518c,	// (0x0001c7ef) bg_vkb2_fuc_pane_cp02

0x5a7b,	// (0x0001d0de) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5a7b,	// (0x0001d0de) vkb2_top_cell_right_narrow_pane_g1

0x9ba6,	// (0x00021209) aid_touch_area_decrease_ParamLimits

0x9ba6,	// (0x00021209) aid_touch_area_decrease

0x9bd4,	// (0x00021237) aid_touch_area_increase_ParamLimits

0x9bd4,	// (0x00021237) aid_touch_area_increase

0x9bfc,	// (0x0002125f) aid_touch_area_mute_ParamLimits

0x9bfc,	// (0x0002125f) aid_touch_area_mute

0x9c24,	// (0x00021287) aid_touch_area_slider_ParamLimits

0x9c24,	// (0x00021287) aid_touch_area_slider

0x9c64,	// (0x000212c7) popup_slider_window_g4_ParamLimits

0x9c64,	// (0x000212c7) popup_slider_window_g4

0x9c8c,	// (0x000212ef) popup_slider_window_g5_ParamLimits

0x9c8c,	// (0x000212ef) popup_slider_window_g5

0x9cc0,	// (0x00021323) popup_slider_window_g6_ParamLimits

0x9cc0,	// (0x00021323) popup_slider_window_g6

0xf319,	// (0x0002697c) popup_slider_window_t2_ParamLimits

0xf319,	// (0x0002697c) popup_slider_window_t2

0x0001,

0xfce2,	// (0x00027345) popup_slider_window_t_ParamLimits

0xfce2,	// (0x00027345) popup_slider_window_t

0x9cdc,	// (0x0002133f) slider_pane_ParamLimits

0x9cdc,	// (0x0002133f) slider_pane

0x1e5c,	// (0x000194bf) slider_pane_g1_ParamLimits

0x1e5c,	// (0x000194bf) slider_pane_g1

0x1e70,	// (0x000194d3) slider_pane_g2_ParamLimits

0x1e70,	// (0x000194d3) slider_pane_g2

0x1e86,	// (0x000194e9) slider_pane_g3_ParamLimits

0x1e86,	// (0x000194e9) slider_pane_g3

0x0003,

0xfdf9,	// (0x0002745c) slider_pane_g_ParamLimits

0xfdf9,	// (0x0002745c) slider_pane_g

0x8afe,	// (0x00020161) popup_tb_float_extension_window_ParamLimits

0x8afe,	// (0x00020161) popup_tb_float_extension_window

0x1eb2,	// (0x00019515) aid_size_cell_tb_float_ext

0xb18a,	// (0x000227ed) bg_popup_sub_window_cp28

0x1ebd,	// (0x00019520) grid_tb_float_ext_pane

0x1ec5,	// (0x00019528) cell_tb_float_ext_pane_ParamLimits

0x1ec5,	// (0x00019528) cell_tb_float_ext_pane

0x1edd,	// (0x00019540) cell_tb_float_ext_pane_g1

0x1ee6,	// (0x00019549) grid_highlight_pane_cp12

0x9712,	// (0x00020d75) cell_last_hwr_side_pane_ParamLimits

0x9712,	// (0x00020d75) cell_last_hwr_side_pane

0xe2f1,	// (0x00025954) cell_last_hwr_side_pane_g1

0x1eef,	// (0x00019552) cell_last_hwr_side_pane_g2

0x0001,

0xfe02,	// (0x00027465) cell_last_hwr_side_pane_g

0xa548,	// (0x00021bab) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa548,	// (0x00021bab) vkb2_area_bottom_space_btn_pane

0xe51d,	// (0x00025b80) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x1d35,	// (0x00019398) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x5ec8,	// (0x0001d52b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x5ef9,	// (0x0001d55c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x5ef9,	// (0x0001d55c) vkb2_area_bottom_space_btn_pane_g1

0x5f2f,	// (0x0001d592) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x5f2f,	// (0x0001d592) vkb2_area_bottom_space_btn_pane_g2

0x5f65,	// (0x0001d5c8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x5f65,	// (0x0001d5c8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe07,	// (0x0002746a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe07,	// (0x0002746a) vkb2_area_bottom_space_btn_pane_g

0x523b,	// (0x0001c89e) cel_fep_hwr_func_pane_ParamLimits

0x523b,	// (0x0001c89e) cel_fep_hwr_func_pane

0x96e7,	// (0x00020d4a) cell_hwr_side_button_pane_ParamLimits

0x96e7,	// (0x00020d4a) cell_hwr_side_button_pane

0xf421,	// (0x00026a84) aid_area_touch_clock_ParamLimits

0xb3ad,	// (0x00022a10) bg_uniindi_top_pane_ParamLimits

0xf433,	// (0x00026a96) uniindi_top_pane_g1_ParamLimits

0xf449,	// (0x00026aac) uniindi_top_pane_g2_ParamLimits

0xf455,	// (0x00026ab8) uniindi_top_pane_g3_ParamLimits

0xf466,	// (0x00026ac9) uniindi_top_pane_g4_ParamLimits

0xfd1a,	// (0x0002737d) uniindi_top_pane_g_ParamLimits

0xf473,	// (0x00026ad6) uniindi_top_pane_t1_ParamLimits

0xb3ad,	// (0x00022a10) bg_vkb2_func_pane_cp01_ParamLimits

0xb3ad,	// (0x00022a10) bg_vkb2_func_pane_cp01

0x1ef8,	// (0x0001955b) cel_fep_hwr_func_pane_g1_ParamLimits

0x1ef8,	// (0x0001955b) cel_fep_hwr_func_pane_g1

0xb3ad,	// (0x00022a10) bg_vkb2_func_pane_cp02_ParamLimits

0xb3ad,	// (0x00022a10) bg_vkb2_func_pane_cp02

0x1ef8,	// (0x0001955b) cell_hwr_side_button_pane_g1_ParamLimits

0x1ef8,	// (0x0001955b) cell_hwr_side_button_pane_g1

0xc468,	// (0x00023acb) status_pane_g4_ParamLimits

0xc468,	// (0x00023acb) status_pane_g4

0xc480,	// (0x00023ae3) status_pane_t1

0xe0f7,	// (0x0002575a) form2_midp_gauge_slider_cont_pane

0xe0ff,	// (0x00025762) form2_midp_gauge_slider_pane_t1_ParamLimits

0x96c3,	// (0x00020d26) form2_midp_gauge_slider_pane_t2_ParamLimits

0x96d5,	// (0x00020d38) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaed,	// (0x00027150) form2_midp_gauge_slider_pane_t_ParamLimits

0xe111,	// (0x00025774) form2_midp_slider_pane_ParamLimits

0x55cc,	// (0x0001cc2f) aid_size_cell_func_vkb2_ParamLimits

0x55cc,	// (0x0001cc2f) aid_size_cell_func_vkb2

0x1e9e,	// (0x00019501) slider_pane_g4_ParamLimits

0x1e9e,	// (0x00019501) slider_pane_g4

0xa962,	// (0x00021fc5) form2_midp_gauge_slider_pane_t2_cp01

0xa970,	// (0x00021fd3) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa970,	// (0x00021fd3) form2_midp_gauge_slider_pane_t3_cp01

0x5fd6,	// (0x0001d639) form2_midp_slider_pane_cp01

0xb18a,	// (0x000227ed) navi_smil_pane

0x1f28,	// (0x0001958b) navi_smil_pane_g1

0x1f30,	// (0x00019593) navi_smil_pane_t1

0x1f06,	// (0x00019569) form2_midp_slider_pane_g1

0x1f0f,	// (0x00019572) form2_midp_slider_pane_g2

0x1f17,	// (0x0001957a) form2_midp_slider_pane_g3

0x1f06,	// (0x00019569) form2_midp_slider_pane_g4

0xa98d,	// (0x00021ff0) form2_midp_slider_pane_g5

0x0004,

0xfe10,	// (0x00027473) form2_midp_slider_pane_g

0x5f9b,	// (0x0001d5fe) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x5f9b,	// (0x0001d5fe) vkb2_area_bottom_space_btn_pane_g4

0x8ca0,	// (0x00020303) lc0_navi_pane_ParamLimits

0x8ca0,	// (0x00020303) lc0_navi_pane

0x8d0a,	// (0x0002036d) lc0_stat_indi_pane_ParamLimits

0x8d0a,	// (0x0002036d) lc0_stat_indi_pane

0x8d1f,	// (0x00020382) ls0_title_pane_ParamLimits

0x8d1f,	// (0x00020382) ls0_title_pane

0xb814,	// (0x00022e77) bg_popup_sub_pane_cp14_ParamLimits

0xf408,	// (0x00026a6b) list_uniindi_pane_ParamLimits

0xf414,	// (0x00026a77) uniindi_top_pane_ParamLimits

0xf4af,	// (0x00026b12) list_single_uniindi_pane_g1_ParamLimits

0xf4c2,	// (0x00026b25) list_single_uniindi_pane_t1_ParamLimits

0xa996,	// (0x00021ff9) lc0_stat_clock_pane_ParamLimits

0xa996,	// (0x00021ff9) lc0_stat_clock_pane

0xa9a3,	// (0x00022006) lc0_stat_indi_pane_g1_ParamLimits

0xa9a3,	// (0x00022006) lc0_stat_indi_pane_g1

0xa9b0,	// (0x00022013) lc0_stat_indi_pane_g2_ParamLimits

0xa9b0,	// (0x00022013) lc0_stat_indi_pane_g2

0x0001,

0xfe1b,	// (0x0002747e) lc0_stat_indi_pane_g_ParamLimits

0xfe1b,	// (0x0002747e) lc0_stat_indi_pane_g

0xa9bd,	// (0x00022020) lc0_uni_indicator_pane_ParamLimits

0xa9bd,	// (0x00022020) lc0_uni_indicator_pane

0x1f3e,	// (0x000195a1) ls0_title_pane_g1_ParamLimits

0x1f3e,	// (0x000195a1) ls0_title_pane_g1

0xa9ca,	// (0x0002202d) ls0_title_pane_t1_ParamLimits

0xa9ca,	// (0x0002202d) ls0_title_pane_t1

0xa9f8,	// (0x0002205b) lc0_uni_indicator_pane_g1_ParamLimits

0xa9f8,	// (0x0002205b) lc0_uni_indicator_pane_g1

0x1f52,	// (0x000195b5) lc0_stat_clock_pane_t1

0xb18a,	// (0x000227ed) main_ai5_pane

0x1f60,	// (0x000195c3) ai5_sk_pane_ParamLimits

0x1f60,	// (0x000195c3) ai5_sk_pane

0xaa0d,	// (0x00022070) cell_ai5_widget_pane_ParamLimits

0xaa0d,	// (0x00022070) cell_ai5_widget_pane

0x1f6d,	// (0x000195d0) aid_size_cell_widget_grid

0x1f7a,	// (0x000195dd) bg_ai5_widget_pane_ParamLimits

0x1f7a,	// (0x000195dd) bg_ai5_widget_pane

0xaa9a,	// (0x000220fd) cell_ai5_widget_pane_g2

0xaaae,	// (0x00022111) cell_ai5_widget_pane_g3

0xaac8,	// (0x0002212b) cell_ai5_widget_pane_g4

0xaad8,	// (0x0002213b) cell_ai5_widget_pane_g5

0xaae8,	// (0x0002214b) cell_ai5_widget_pane_g6

0xaaf4,	// (0x00022157) cell_ai5_widget_pane_g7

0xab3c,	// (0x0002219f) cell_ai5_widget_pane_t1_ParamLimits

0xab3c,	// (0x0002219f) cell_ai5_widget_pane_t1

0xab59,	// (0x000221bc) cell_ai5_widget_pane_t2_ParamLimits

0xab59,	// (0x000221bc) cell_ai5_widget_pane_t2

0xab71,	// (0x000221d4) cell_ai5_widget_pane_t3_ParamLimits

0xab71,	// (0x000221d4) cell_ai5_widget_pane_t3

0xab89,	// (0x000221ec) cell_ai5_widget_pane_t4_ParamLimits

0xab89,	// (0x000221ec) cell_ai5_widget_pane_t4

0xabaf,	// (0x00022212) cell_ai5_widget_pane_t5_ParamLimits

0xabaf,	// (0x00022212) cell_ai5_widget_pane_t5

0x1fb2,	// (0x00019615) cell_ai5_widget_pane_t6_ParamLimits

0x1fb2,	// (0x00019615) cell_ai5_widget_pane_t6

0x1fc4,	// (0x00019627) cell_ai5_widget_pane_t7_ParamLimits

0x1fc4,	// (0x00019627) cell_ai5_widget_pane_t7

0xabce,	// (0x00022231) cell_ai5_widget_pane_t8_ParamLimits

0xabce,	// (0x00022231) cell_ai5_widget_pane_t8

0x0009,

0xfe35,	// (0x00027498) cell_ai5_widget_pane_t_ParamLimits

0xfe35,	// (0x00027498) cell_ai5_widget_pane_t

0xac2d,	// (0x00022290) grid_ai5_widget_pane

0xb814,	// (0x00022e77) highlight_cell_ai5_widget_pane_ParamLimits

0xb814,	// (0x00022e77) highlight_cell_ai5_widget_pane

0xac39,	// (0x0002229c) ai5_sk_left_pane

0xac43,	// (0x000222a6) ai5_sk_middle_pane

0xac4d,	// (0x000222b0) ai5_sk_right_pane

0x1fdd,	// (0x00019640) bg_ai5_widget_pane_g1_ParamLimits

0x1fdd,	// (0x00019640) bg_ai5_widget_pane_g1

0x1fe9,	// (0x0001964c) bg_ai5_widget_pane_g2_ParamLimits

0x1fe9,	// (0x0001964c) bg_ai5_widget_pane_g2

0x1ff5,	// (0x00019658) bg_ai5_widget_pane_g3_ParamLimits

0x1ff5,	// (0x00019658) bg_ai5_widget_pane_g3

0x2001,	// (0x00019664) bg_ai5_widget_pane_g4_ParamLimits

0x2001,	// (0x00019664) bg_ai5_widget_pane_g4

0x200d,	// (0x00019670) bg_ai5_widget_pane_g5_ParamLimits

0x200d,	// (0x00019670) bg_ai5_widget_pane_g5

0x2019,	// (0x0001967c) bg_ai5_widget_pane_g6_ParamLimits

0x2019,	// (0x0001967c) bg_ai5_widget_pane_g6

0x2025,	// (0x00019688) bg_ai5_widget_pane_g7_ParamLimits

0x2025,	// (0x00019688) bg_ai5_widget_pane_g7

0x2031,	// (0x00019694) bg_ai5_widget_pane_g8_ParamLimits

0x2031,	// (0x00019694) bg_ai5_widget_pane_g8

0x203d,	// (0x000196a0) bg_ai5_widget_pane_g9_ParamLimits

0x203d,	// (0x000196a0) bg_ai5_widget_pane_g9

0x0008,

0xfe4a,	// (0x000274ad) bg_ai5_widget_pane_g_ParamLimits

0xfe4a,	// (0x000274ad) bg_ai5_widget_pane_g

0x206d,	// (0x000196d0) cell_shortcut_ai5_widget_pane_ParamLimits

0x206d,	// (0x000196d0) cell_shortcut_ai5_widget_pane

0x207e,	// (0x000196e1) bg_cell_shortcut_ai5_widget_pane

0xb567,	// (0x00022bca) cell_grid_ai5_widget_pane_g1

0xc1b8,	// (0x0002381b) highlight_cell_shortcut_ai5_widget_pane

0xc554,	// (0x00023bb7) ai5_sk_left_pane_g1

0x2086,	// (0x000196e9) ai5_sk_left_pane_g2

0x208e,	// (0x000196f1) ai5_sk_left_pane_g3

0x2096,	// (0x000196f9) ai5_sk_left_pane_g4

0x0003,

0xfe5d,	// (0x000274c0) ai5_sk_left_pane_g

0x209e,	// (0x00019701) ai5_sk_left_pane_t1

0xc54c,	// (0x00023baf) ai5_sk_right_pane_g1

0x20ac,	// (0x0001970f) ai5_sk_right_pane_g2

0x20b4,	// (0x00019717) ai5_sk_right_pane_g3

0x20bc,	// (0x0001971f) ai5_sk_right_pane_g4

0x0003,

0xfe66,	// (0x000274c9) ai5_sk_right_pane_g

0x20c4,	// (0x00019727) ai5_sk_right_pane_t1

0xc54c,	// (0x00023baf) ai5_sk_middle_pane_g1

0xc554,	// (0x00023bb7) ai5_sk_middle_pane_g2

0xc56c,	// (0x00023bcf) ai5_sk_middle_pane_g3

0x20b4,	// (0x00019717) ai5_sk_middle_pane_g4

0x208e,	// (0x000196f1) ai5_sk_middle_pane_g5

0x20d2,	// (0x00019735) ai5_sk_middle_pane_g6

0xac57,	// (0x000222ba) ai5_sk_middle_pane_g7

0x0006,

0xfe6f,	// (0x000274d2) ai5_sk_middle_pane_g

0x8b9e,	// (0x00020201) aid_touch_area_size_lc0_ParamLimits

0x8b9e,	// (0x00020201) aid_touch_area_size_lc0

0x53ba,	// (0x0001ca1d) cell_hwr_candidate_pane_t1_ParamLimits

0xc39d,	// (0x00023a00) aid_touch_navi_pane

0x8e0b,	// (0x0002046e) status_dt_navi_pane_ParamLimits

0x8e0b,	// (0x0002046e) status_dt_navi_pane

0x8e23,	// (0x00020486) status_dt_sta_pane_ParamLimits

0x8e23,	// (0x00020486) status_dt_sta_pane

0xac5f,	// (0x000222c2) dt_sta_controll_pane

0xac6c,	// (0x000222cf) dt_sta_indi_pane

0xac79,	// (0x000222dc) dt_sta_title_pane

0xb3ad,	// (0x00022a10) bg_dt_sta_indi_pane_ParamLimits

0xb3ad,	// (0x00022a10) bg_dt_sta_indi_pane

0xac8b,	// (0x000222ee) dt_sta_battery_pane

0xac93,	// (0x000222f6) dt_sta_indi_pane_g1

0xac9c,	// (0x000222ff) dt_sta_indi_pane_g2

0xaca5,	// (0x00022308) dt_sta_indi_pane_g3

0x0002,

0xfe7e,	// (0x000274e1) dt_sta_indi_pane_g

0xacae,	// (0x00022311) dt_sta_signal_pane

0xb814,	// (0x00022e77) bg_dt_sta_title_pane_ParamLimits

0xb814,	// (0x00022e77) bg_dt_sta_title_pane

0xacb7,	// (0x0002231a) dt_sta_title_pane_g1

0xacbf,	// (0x00022322) dt_sta_title_pane_t1_ParamLimits

0xacbf,	// (0x00022322) dt_sta_title_pane_t1

0xb18a,	// (0x000227ed) bg_dt_sta_control_pane

0xacd4,	// (0x00022337) dt_sta_controll_pane_g1

0xacdd,	// (0x00022340) bg_dt_sta_title_pane_g1

0xace6,	// (0x00022349) bg_dt_sta_title_pane_g2

0xacef,	// (0x00022352) bg_dt_sta_title_pane_g3

0x0002,

0xfe85,	// (0x000274e8) bg_dt_sta_title_pane_g

0xe2f1,	// (0x00025954) bg_dt_sta_indi_pane_g1

0xacf8,	// (0x0002235b) dt_sta_signal_pane_g1

0xad00,	// (0x00022363) dt_sta_signal_pane_g2

0x0001,

0xfe8c,	// (0x000274ef) dt_sta_signal_pane_g

0x20da,	// (0x0001973d) dt_sta_battery_pane_g1

0x20e3,	// (0x00019746) dt_sta_battery_pane_t1

0xe2f1,	// (0x00025954) bg_dt_sta_control_pane_g1

0xbd88,	// (0x000233eb) fep_china_uni_eep_pane

0xbd90,	// (0x000233f3) fep_china_uni_entry_pane_ParamLimits

0xbda0,	// (0x00023403) popup_fep_china_uni_window_g1_ParamLimits

0xbdb0,	// (0x00023413) popup_fep_china_uni_window_g2_ParamLimits

0xbdb0,	// (0x00023413) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00026d80) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00026d80) popup_fep_china_uni_window_g

0x20f2,	// (0x00019755) fep_china_uni_eep_pane_g1

0x20fa,	// (0x0001975d) fep_china_uni_eep_pane_t1

0x1f1f,	// (0x00019582) aid_touch_area_size_smil_player

0xc43b,	// (0x00023a9e) lc0_clock_pane

0xc474,	// (0x00023ad7) status_pane_g5_ParamLimits

0xc474,	// (0x00023ad7) status_pane_g5

0x8732,	// (0x0001fd95) popup_keymap_window

0xc454,	// (0x00023ab7) status_icon_pane

0xaaae,	// (0x00022111) cell_ai5_widget_pane_g3_ParamLimits

0xaac8,	// (0x0002212b) cell_ai5_widget_pane_g4_ParamLimits

0xaad8,	// (0x0002213b) cell_ai5_widget_pane_g5_ParamLimits

0xab00,	// (0x00022163) cell_ai5_widget_pane_g8_ParamLimits

0xab00,	// (0x00022163) cell_ai5_widget_pane_g8

0xab14,	// (0x00022177) cell_ai5_widget_pane_g9_ParamLimits

0xab14,	// (0x00022177) cell_ai5_widget_pane_g9

0xab28,	// (0x0002218b) cell_ai5_widget_pane_g10_ParamLimits

0xab28,	// (0x0002218b) cell_ai5_widget_pane_g10

0x2109,	// (0x0001976c) status_icon_pane_g1

0xb18a,	// (0x000227ed) bg_popup_sub_pane_cp13

0x2111,	// (0x00019774) popup_keymap_window_t1

0x849f,	// (0x0001fb02) control_pane_g6_ParamLimits

0x849f,	// (0x0001fb02) control_pane_g6

0x84ac,	// (0x0001fb0f) control_pane_g7_ParamLimits

0x84ac,	// (0x0001fb0f) control_pane_g7

0x84b9,	// (0x0001fb1c) control_pane_g8_ParamLimits

0x84b9,	// (0x0001fb1c) control_pane_g8

0xac5f,	// (0x000222c2) dt_sta_controll_pane_ParamLimits

0xac6c,	// (0x000222cf) dt_sta_indi_pane_ParamLimits

0xac79,	// (0x000222dc) dt_sta_title_pane_ParamLimits

0xb765,	// (0x00022dc8) aid_size_touch_scroll_bar_cale

0x413f,	// (0x0001b7a2) popup_discreet_window_ParamLimits

0x413f,	// (0x0001b7a2) popup_discreet_window

0x7c0a,	// (0x0001f26d) popup_sk_window

0xcb2e,	// (0x00024191) bg_popup_sub_pane_cp28_ParamLimits

0xcb2e,	// (0x00024191) bg_popup_sub_pane_cp28

0x211f,	// (0x00019782) popup_discreet_window_g1_ParamLimits

0x211f,	// (0x00019782) popup_discreet_window_g1

0x213f,	// (0x000197a2) popup_discreet_window_t1_ParamLimits

0x213f,	// (0x000197a2) popup_discreet_window_t1

0x215d,	// (0x000197c0) popup_discreet_window_t2_ParamLimits

0x215d,	// (0x000197c0) popup_discreet_window_t2

0x0002,

0xfe91,	// (0x000274f4) popup_discreet_window_t_ParamLimits

0xfe91,	// (0x000274f4) popup_discreet_window_t

0x636a,	// (0x0001d9cd) popup_sk_window_g1

0x6373,	// (0x0001d9d6) popup_sk_window_g2

0x0001,

0xfe98,	// (0x000274fb) popup_sk_window_g

0x637c,	// (0x0001d9df) popup_sk_window_t1

0x638a,	// (0x0001d9ed) popup_sk_window_t1_copy1

0xaa9a,	// (0x000220fd) cell_ai5_widget_pane_g2_ParamLimits

0xabe0,	// (0x00022243) cell_ai5_widget_pane_t9_ParamLimits

0xabe0,	// (0x00022243) cell_ai5_widget_pane_t9

0xb18a,	// (0x000227ed) main_fep_fshwr2_pane

0xad08,	// (0x0002236b) aid_fshwr2_btn_pane

0xad1c,	// (0x0002237f) aid_fshwr2_syb_pane

0xad30,	// (0x00022393) aid_fshwr2_txt_pane

0xad40,	// (0x000223a3) fshwr2_func_candi_pane

0xad58,	// (0x000223bb) fshwr2_hwr_syb_pane

0xad70,	// (0x000223d3) fshwr2_icf_pane

0xb18a,	// (0x000227ed) fshwr2_icf_bg_pane

0xad9a,	// (0x000223fd) fshwr2_icf_pane_t1_ParamLimits

0xad9a,	// (0x000223fd) fshwr2_icf_pane_t1

0xbd26,	// (0x00023389) fshwr2_func_candi_pane_g1

0xadb1,	// (0x00022414) fshwr2_func_candi_row_pane_ParamLimits

0xadb1,	// (0x00022414) fshwr2_func_candi_row_pane

0xadd4,	// (0x00022437) cell_fshwr2_syb_pane_ParamLimits

0xadd4,	// (0x00022437) cell_fshwr2_syb_pane

0x1ef8,	// (0x0001955b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1ef8,	// (0x0001955b) fshwr2_hwr_syb_pane_g1

0xb18a,	// (0x000227ed) bg_popup_call_pane_cp01

0xadf6,	// (0x00022459) fshwr2_func_candi_cell_pane_ParamLimits

0xadf6,	// (0x00022459) fshwr2_func_candi_cell_pane

0xc920,	// (0x00023f83) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xc920,	// (0x00023f83) fshwr2_func_candi_cell_bg_pane

0xae35,	// (0x00022498) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xae35,	// (0x00022498) fshwr2_func_candi_cell_pane_g1

0xae6c,	// (0x000224cf) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xae6c,	// (0x000224cf) fshwr2_func_candi_cell_pane_t1

0xb18a,	// (0x000227ed) bg_button_pane_cp08

0xb99a,	// (0x00022ffd) cell_fshwr2_syb_bg_pane

0xae87,	// (0x000224ea) cell_fshwr2_syb_bg_pane_g1

0xae97,	// (0x000224fa) cell_fshwr2_syb_bg_pane_t1

0xb814,	// (0x00022e77) main_tmo_pane

0x920e,	// (0x00020871) uni_indicator_pane_g1_ParamLimits

0x9224,	// (0x00020887) uni_indicator_pane_g2_ParamLimits

0x923a,	// (0x0002089d) uni_indicator_pane_g3_ParamLimits

0xd4ba,	// (0x00024b1d) uni_indicator_pane_g4_ParamLimits

0xd4ba,	// (0x00024b1d) uni_indicator_pane_g4

0xd4ce,	// (0x00024b31) uni_indicator_pane_g5_ParamLimits

0xd4ce,	// (0x00024b31) uni_indicator_pane_g5

0xd4ce,	// (0x00024b31) uni_indicator_pane_g6_ParamLimits

0xd4ce,	// (0x00024b31) uni_indicator_pane_g6

0xf90e,	// (0x00026f71) uni_indicator_pane_g_ParamLimits

0x9b8a,	// (0x000211ed) popup_tmo_note_window_ParamLimits

0x9b8a,	// (0x000211ed) popup_tmo_note_window

0xb814,	// (0x00022e77) fshwr2_bg_pane

0xae5d,	// (0x000224c0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xae5d,	// (0x000224c0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9d,	// (0x00027500) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9d,	// (0x00027500) fshwr2_func_candi_cell_pane_g

0xe2f1,	// (0x00025954) bg_popup_window_pane_cp01

0x6506,	// (0x0001db69) bg_popup_window_pane_g1_cp01

0x21af,	// (0x00019812) bg_popup_window_pane_cp22_ParamLimits

0x21af,	// (0x00019812) bg_popup_window_pane_cp22

0x21bd,	// (0x00019820) listscroll_tmo_link_pane_ParamLimits

0x21bd,	// (0x00019820) listscroll_tmo_link_pane

0x21fd,	// (0x00019860) popup_tmo_note_window_g1_ParamLimits

0x21fd,	// (0x00019860) popup_tmo_note_window_g1

0x220a,	// (0x0001986d) tmo_note_info_pane_ParamLimits

0x220a,	// (0x0001986d) tmo_note_info_pane

0xaead,	// (0x00022510) list_tmo_note_info_pane_g1_ParamLimits

0xaead,	// (0x00022510) list_tmo_note_info_pane_g1

0x2224,	// (0x00019887) list_tmo_note_info_pane_g2_ParamLimits

0x2224,	// (0x00019887) list_tmo_note_info_pane_g2

0x0001,

0xfea2,	// (0x00027505) list_tmo_note_info_pane_g_ParamLimits

0xfea2,	// (0x00027505) list_tmo_note_info_pane_g

0x2240,	// (0x000198a3) list_tmo_note_info_text_pane_ParamLimits

0x2240,	// (0x000198a3) list_tmo_note_info_text_pane

0x2282,	// (0x000198e5) list_tmo_link_pane

0x228f,	// (0x000198f2) scroll_pane_cp20

0x229c,	// (0x000198ff) list_single_tmo_link_pane_ParamLimits

0x229c,	// (0x000198ff) list_single_tmo_link_pane

0x22ac,	// (0x0001990f) list_single_tmo_link_pane_t1

0x22ba,	// (0x0001991d) list_tmo_note_info_text_pane_t1_ParamLimits

0x22ba,	// (0x0001991d) list_tmo_note_info_text_pane_t1

0xb8ce,	// (0x00022f31) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb8ce,	// (0x00022f31) aid_size_touch_scroll_bar_cp01

0x774b,	// (0x0001edae) aid_size_touch_slider_marker

0x7bfe,	// (0x0001f261) popup_settings_window_ParamLimits

0x7bfe,	// (0x0001f261) popup_settings_window

0x3759,	// (0x0001adbc) popup_candi_list_indi_window

0xc39d,	// (0x00023a00) aid_touch_navi_pane_ParamLimits

0x5520,	// (0x0001cb83) rs_clock_indi_pane

0x5529,	// (0x0001cb8c) sctrl_sk_bottom_pane_ParamLimits

0x553a,	// (0x0001cb9d) sctrl_sk_top_pane_ParamLimits

0x5626,	// (0x0001cc89) popup_fep_tooltip_window

0x1f6d,	// (0x000195d0) aid_size_cell_widget_grid_ParamLimits

0xaa86,	// (0x000220e9) cell_ai5_widget_pane_g1_ParamLimits

0xaa86,	// (0x000220e9) cell_ai5_widget_pane_g1

0xaae8,	// (0x0002214b) cell_ai5_widget_pane_g6_ParamLimits

0xaaf4,	// (0x00022157) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe20,	// (0x00027483) cell_ai5_widget_pane_g_ParamLimits

0xfe20,	// (0x00027483) cell_ai5_widget_pane_g

0xac0f,	// (0x00022272) cell_ai5_widget_pane_t10_ParamLimits

0xac0f,	// (0x00022272) cell_ai5_widget_pane_t10

0xac2d,	// (0x00022290) grid_ai5_widget_pane_ParamLimits

0x2049,	// (0x000196ac) cell_contacts_ai5_widget_pane_ParamLimits

0x2049,	// (0x000196ac) cell_contacts_ai5_widget_pane

0x2172,	// (0x000197d5) popup_discreet_window_t3_ParamLimits

0x2172,	// (0x000197d5) popup_discreet_window_t3

0xad88,	// (0x000223eb) popup_fshwr2_char_preview_window_ParamLimits

0xad88,	// (0x000223eb) popup_fshwr2_char_preview_window

0xaec4,	// (0x00022527) tmo_note_info_pane_t1

0xaed9,	// (0x0002253c) tmo_note_info_pane_t2

0xaeee,	// (0x00022551) tmo_note_info_pane_t3

0x225e,	// (0x000198c1) tmo_note_info_pane_t4

0x2270,	// (0x000198d3) tmo_note_info_pane_t5

0x0004,

0xfea7,	// (0x0002750a) tmo_note_info_pane_t

0x2282,	// (0x000198e5) list_tmo_link_pane_ParamLimits

0x228f,	// (0x000198f2) scroll_pane_cp20_ParamLimits

0xb18a,	// (0x000227ed) bg_popup_fep_char_preview_window_cp01

0x22d3,	// (0x00019936) popup_fshwr2_char_preview_window_t1

0x22e1,	// (0x00019944) popup_candi_list_indi_window_g1

0x22ea,	// (0x0001994d) bg_cell_contacts_ai5_widget_pane

0x22f6,	// (0x00019959) cell_contacts_ai5_widget_pane_g1

0x230b,	// (0x0001996e) cell_contacts_ai5_widget_pane_g2

0x2317,	// (0x0001997a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb2,	// (0x00027515) cell_contacts_ai5_widget_pane_g

0x2323,	// (0x00019986) cell_contacts_ai5_widget_pane_t1

0xb814,	// (0x00022e77) highlight_cell_shortcut_ai5_widget_pane_cp01

0xaf66,	// (0x000225c9) settings_container_pane

0xc1b8,	// (0x0002381b) listscroll_set_pane_copy1

0xdc45,	// (0x000252a8) scroll_pane_cp121_copy1

0x2335,	// (0x00019998) set_content_pane_copy1

0x233d,	// (0x000199a0) aid_height_set_list_copy1_ParamLimits

0x233d,	// (0x000199a0) aid_height_set_list_copy1

0xd667,	// (0x00024cca) aid_size_parent_copy1_ParamLimits

0xd667,	// (0x00024cca) aid_size_parent_copy1

0x2349,	// (0x000199ac) button_value_adjust_pane_cp6_copy1_ParamLimits

0x2349,	// (0x000199ac) button_value_adjust_pane_cp6_copy1

0xb99a,	// (0x00022ffd) list_highlight_pane_cp2_copy1_ParamLimits

0xb99a,	// (0x00022ffd) list_highlight_pane_cp2_copy1

0xaf72,	// (0x000225d5) list_set_pane_copy1_ParamLimits

0xaf72,	// (0x000225d5) list_set_pane_copy1

0xaf03,	// (0x00022566) main_pane_set_t1_copy1_ParamLimits

0xaf03,	// (0x00022566) main_pane_set_t1_copy1

0xaf3d,	// (0x000225a0) main_pane_set_t2_copy1_ParamLimits

0xaf3d,	// (0x000225a0) main_pane_set_t2_copy1

0x235d,	// (0x000199c0) main_pane_set_t3_copy1

0x236b,	// (0x000199ce) main_pane_set_t4_copy1

0xaf5a,	// (0x000225bd) set_content_pane_g1_copy1_ParamLimits

0xaf5a,	// (0x000225bd) set_content_pane_g1_copy1

0x2379,	// (0x000199dc) setting_code_pane_copy1

0x2381,	// (0x000199e4) setting_slider_graphic_pane_copy1

0x2381,	// (0x000199e4) setting_slider_pane_copy1

0x2381,	// (0x000199e4) setting_text_pane_copy1

0x2381,	// (0x000199e4) setting_volume_pane_copy1

0x2389,	// (0x000199ec) settings_code_pane_cp2_copy1

0x2391,	// (0x000199f4) settings_code_pane_cp_copy1_ParamLimits

0x2391,	// (0x000199f4) settings_code_pane_cp_copy1

0xb000,	// (0x00022663) volume_set_pane_copy1

0xb008,	// (0x0002266b) volume_set_pane_g10_copy1

0xb010,	// (0x00022673) volume_set_pane_g1_copy1

0xb018,	// (0x0002267b) volume_set_pane_g2_copy1

0xb020,	// (0x00022683) volume_set_pane_g3_copy1

0xb028,	// (0x0002268b) volume_set_pane_g4_copy1

0xb030,	// (0x00022693) volume_set_pane_g5_copy1

0xb038,	// (0x0002269b) volume_set_pane_g6_copy1

0xb040,	// (0x000226a3) volume_set_pane_g7_copy1

0xb048,	// (0x000226ab) volume_set_pane_g8_copy1

0xb050,	// (0x000226b3) volume_set_pane_g9_copy1

0xb27a,	// (0x000228dd) bg_set_opt_pane_cp_copy1_ParamLimits

0xb27a,	// (0x000228dd) bg_set_opt_pane_cp_copy1

0x4279,	// (0x0001b8dc) setting_slider_pane_t1_copy1_ParamLimits

0x4279,	// (0x0001b8dc) setting_slider_pane_t1_copy1

0x66ba,	// (0x0001dd1d) setting_slider_pane_t2_copy1_ParamLimits

0x66ba,	// (0x0001dd1d) setting_slider_pane_t2_copy1

0x66d3,	// (0x0001dd36) setting_slider_pane_t3_copy1_ParamLimits

0x66d3,	// (0x0001dd36) setting_slider_pane_t3_copy1

0x42bf,	// (0x0001b922) slider_set_pane_copy1_ParamLimits

0x42bf,	// (0x0001b922) slider_set_pane_copy1

0xb86f,	// (0x00022ed2) set_opt_bg_pane_g1_copy2

0xb877,	// (0x00022eda) set_opt_bg_pane_g2_copy2

0x23a5,	// (0x00019a08) set_opt_bg_pane_g3_copy2

0xb887,	// (0x00022eea) set_opt_bg_pane_g4_copy2

0xb88f,	// (0x00022ef2) set_opt_bg_pane_g5_copy2

0xb897,	// (0x00022efa) set_opt_bg_pane_g6_copy2

0xb058,	// (0x000226bb) set_opt_bg_pane_g7_copy2

0x23ad,	// (0x00019a10) set_opt_bg_pane_g8_copy2

0x23b5,	// (0x00019a18) set_opt_bg_pane_g9_copy2

0x4fb2,	// (0x0001c615) aid_size_touch_slider_mark_copy1_ParamLimits

0x4fb2,	// (0x0001c615) aid_size_touch_slider_mark_copy1

0xd679,	// (0x00024cdc) slider_set_pane_g1_copy1

0xd682,	// (0x00024ce5) slider_set_pane_g2_copy1

0x4fd2,	// (0x0001c635) slider_set_pane_g3_copy1_ParamLimits

0x4fd2,	// (0x0001c635) slider_set_pane_g3_copy1

0x4fe6,	// (0x0001c649) slider_set_pane_g4_copy1_ParamLimits

0x4fe6,	// (0x0001c649) slider_set_pane_g4_copy1

0x4ffe,	// (0x0001c661) slider_set_pane_g5_copy1_ParamLimits

0x4ffe,	// (0x0001c661) slider_set_pane_g5_copy1

0x4fd2,	// (0x0001c635) slider_set_pane_g6_copy1_ParamLimits

0x4fd2,	// (0x0001c635) slider_set_pane_g6_copy1

0xb060,	// (0x000226c3) slider_set_pane_g7_copy1_ParamLimits

0xb060,	// (0x000226c3) slider_set_pane_g7_copy1

0xb216,	// (0x00022879) bg_set_opt_pane_cp2_copy1

0xb288,	// (0x000228eb) setting_slider_graphic_pane_g1_copy1

0xb076,	// (0x000226d9) setting_slider_graphic_pane_t1_copy1

0xb085,	// (0x000226e8) setting_slider_graphic_pane_t2_copy1

0xb094,	// (0x000226f7) slider_set_pane_cp_copy1

0x23c5,	// (0x00019a28) input_focus_pane_cp1_copy1

0x23ce,	// (0x00019a31) list_set_text_pane_copy1

0x23d6,	// (0x00019a39) setting_text_pane_g1_copy1

0x3fd5,	// (0x0001b638) set_text_pane_t1_copy1

0x23c5,	// (0x00019a28) input_focus_pane_cp2_copy1

0x23d6,	// (0x00019a39) setting_code_pane_g1_copy1

0x23df,	// (0x00019a42) setting_code_pane_t1_copy1

0x8326,	// (0x0001f989) list_set_graphic_pane_copy1

0xb216,	// (0x00022879) bg_set_opt_pane_cp4_copy1

0x23ed,	// (0x00019a50) list_set_graphic_pane_g1_copy1_ParamLimits

0x23ed,	// (0x00019a50) list_set_graphic_pane_g1_copy1

0x23f9,	// (0x00019a5c) list_set_graphic_pane_g2_copy1

0xbf33,	// (0x00023596) list_set_graphic_pane_t1_copy1_ParamLimits

0xbf33,	// (0x00023596) list_set_graphic_pane_t1_copy1

0xe2f1,	// (0x00025954) rs_clock_indi_pane_g1

0x2401,	// (0x00019a64) rs_clock_indi_pane_t1

0x240f,	// (0x00019a72) rs_indi_pane

0x2417,	// (0x00019a7a) rs_indi_pane_g1

0x2420,	// (0x00019a83) rs_indi_pane_g2

0x22e1,	// (0x00019944) rs_indi_pane_g3

0x0002,

0xfeb9,	// (0x0002751c) rs_indi_pane_g

0xc1b8,	// (0x0002381b) bg_popup_preview_window_pane_cp03

0x2429,	// (0x00019a8c) popup_fep_tooltip_window_t1

0xec1c,	// (0x0002627f) popup_note2_window_g2_ParamLimits

0xec1c,	// (0x0002627f) popup_note2_window_g2

0x0001,

0xfc59,	// (0x000272bc) popup_note2_window_g_ParamLimits

0xfc59,	// (0x000272bc) popup_note2_window_g

0xf097,	// (0x000266fa) bg_popup_sub_pane_cp11_ParamLimits

0xf0a4,	// (0x00026707) cell_ai3_links_pane_g1_ParamLimits

0xf0bb,	// (0x0002671e) cell_ai3_links_pane_t1

0x3fd5,	// (0x0001b638) set_text_pane_t1_copy1_ParamLimits

0xc0df,	// (0x00023742) cell_graphic_popup_pane_cp2_ParamLimits

0xc0df,	// (0x00023742) cell_graphic_popup_pane_cp2

0x2437,	// (0x00019a9a) cell_graphic_popup_pane_g1_cp2

0xb614,	// (0x00022c77) cell_graphic_popup_pane_g2_cp2

0x243f,	// (0x00019aa2) cell_graphic_popup_pane_g3_cp2

0x2447,	// (0x00019aaa) cell_graphic_popup_pane_t2_cp2

0xb625,	// (0x00022c88) grid_highlight_pane_cp3_cp2

0xbb5f,	// (0x000231c2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb814,	// (0x00022e77) main_tmo_pane_ParamLimits

0x9b82,	// (0x000211e5) popup_tmo_big_image_note_window

0x1faa,	// (0x0001960d) cell_ai5_widget_list_pane

0xaa7d,	// (0x000220e0) cell_ai5_widget_lrg_icon_pane

0xaec4,	// (0x00022527) tmo_note_info_pane_t1_ParamLimits

0xaed9,	// (0x0002253c) tmo_note_info_pane_t2_ParamLimits

0xaeee,	// (0x00022551) tmo_note_info_pane_t3_ParamLimits

0x225e,	// (0x000198c1) tmo_note_info_pane_t4_ParamLimits

0x2270,	// (0x000198d3) tmo_note_info_pane_t5_ParamLimits

0xfea7,	// (0x0002750a) tmo_note_info_pane_t_ParamLimits

0xaf66,	// (0x000225c9) settings_container_pane_ParamLimits

0x23bd,	// (0x00019a20) indicator_popup_pane_cp5

0x23bd,	// (0x00019a20) indicator_popup_pane_cp6

0x8326,	// (0x0001f989) list_set_graphic_pane_copy1_ParamLimits

0xb18a,	// (0x000227ed) bg_popup_window_pane_cp23

0x2455,	// (0x00019ab8) popup_tmo_big_image_note_window_g1

0x245e,	// (0x00019ac1) popup_tmo_big_image_note_window_t1

0x246c,	// (0x00019acf) popup_tmo_big_image_note_window_t2

0x247a,	// (0x00019add) popup_tmo_big_image_note_window_t3

0x0002,

0xfec0,	// (0x00027523) popup_tmo_big_image_note_window_t

0xe2f1,	// (0x00025954) cell_ai5_widget_lrg_icon_pane_g1

0x2488,	// (0x00019aeb) cell_ai5_widget_lrg_icon_pane_t1

0xb09c,	// (0x000226ff) cell_ai5_widget_list_row_pane_ParamLimits

0xb09c,	// (0x000226ff) cell_ai5_widget_list_row_pane

0xb0b3,	// (0x00022716) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xb0b3,	// (0x00022716) cell_ai5_widget_list_row_pane_g1

0xb0c0,	// (0x00022723) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xb0c0,	// (0x00022723) cell_ai5_widget_list_row_pane_t1

0xb0f1,	// (0x00022754) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xb0f1,	// (0x00022754) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec7,	// (0x0002752a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec7,	// (0x0002752a) cell_ai5_widget_list_row_pane_t

0xb18a,	// (0x000227ed) main_fep_vtchi_ss_pane

0x24b6,	// (0x00019b19) popup_fep_char_pre_window

0x24be,	// (0x00019b21) popup_fep_ituss_window

0xb128,	// (0x0002278b) popup_fep_vkbss_window

0x24e6,	// (0x00019b49) grid_vkbss_keypad_pane_ParamLimits

0x24e6,	// (0x00019b49) grid_vkbss_keypad_pane

0x24f6,	// (0x00019b59) ituss_keypad_pane

0x67e2,	// (0x0001de45) aid_vkbss_key_offset_ParamLimits

0x67e2,	// (0x0001de45) aid_vkbss_key_offset

0x67ee,	// (0x0001de51) cell_vkbss_key_pane_ParamLimits

0x67ee,	// (0x0001de51) cell_vkbss_key_pane

0xc610,	// (0x00023c73) bg_cell_vkbss_key_g1_ParamLimits

0xc610,	// (0x00023c73) bg_cell_vkbss_key_g1

0x2505,	// (0x00019b68) cell_vkbss_key_3p_pane_ParamLimits

0x2505,	// (0x00019b68) cell_vkbss_key_3p_pane

0x251f,	// (0x00019b82) cell_vkbss_key_g1_ParamLimits

0x251f,	// (0x00019b82) cell_vkbss_key_g1

0x2539,	// (0x00019b9c) cell_vkbss_key_t1_ParamLimits

0x2539,	// (0x00019b9c) cell_vkbss_key_t1

0x6804,	// (0x0001de67) cell_ituss_key_pane_ParamLimits

0x6804,	// (0x0001de67) cell_ituss_key_pane

0x2564,	// (0x00019bc7) bg_cell_ituss_key_g1_ParamLimits

0x2564,	// (0x00019bc7) bg_cell_ituss_key_g1

0x2570,	// (0x00019bd3) cell_ituss_key_pane_g1_ParamLimits

0x2570,	// (0x00019bd3) cell_ituss_key_pane_g1

0x6815,	// (0x0001de78) cell_ituss_key_pane_g2_ParamLimits

0x6815,	// (0x0001de78) cell_ituss_key_pane_g2

0x0002,

0xfece,	// (0x00027531) cell_ituss_key_pane_g_ParamLimits

0xfece,	// (0x00027531) cell_ituss_key_pane_g

0x6841,	// (0x0001dea4) cell_ituss_key_t1_ParamLimits

0x6841,	// (0x0001dea4) cell_ituss_key_t1

0x6877,	// (0x0001deda) cell_ituss_key_t2_ParamLimits

0x6877,	// (0x0001deda) cell_ituss_key_t2

0x68a8,	// (0x0001df0b) cell_ituss_key_t3_ParamLimits

0x68a8,	// (0x0001df0b) cell_ituss_key_t3

0x6877,	// (0x0001deda) cell_ituss_key_t4_ParamLimits

0x6877,	// (0x0001deda) cell_ituss_key_t4

0x0004,

0xfed5,	// (0x00027538) cell_ituss_key_t_ParamLimits

0xfed5,	// (0x00027538) cell_ituss_key_t

0x25a6,	// (0x00019c09) cell_vkbss_key_3p_pane_g1

0x259e,	// (0x00019c01) cell_vkbss_key_3p_pane_g2

0x2596,	// (0x00019bf9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x00027543) cell_vkbss_key_3p_pane_g

0xc1b8,	// (0x0002381b) bg_popup_fep_char_preview_window_cp02

0x25ae,	// (0x00019c11) popup_fep_char_pre_window_t1

0xaa6a,	// (0x000220cd) main_ai5_sk_pane

0x22ea,	// (0x0001994d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x22f6,	// (0x00019959) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x230b,	// (0x0001996e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x2317,	// (0x0001997a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb2,	// (0x00027515) cell_contacts_ai5_widget_pane_g_ParamLimits

0x2323,	// (0x00019986) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb814,	// (0x00022e77) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb135,	// (0x00022798) main_ai5_sk_pane_g1

0xc978,	// (0x00023fdb) popup_query_code_window_g1

0xb119,	// (0x0002277c) popup_fep_vkb_icf_pane

0x24d0,	// (0x00019b33) popup_fep_vtchi_icf_pane

0x25bc,	// (0x00019c1f) bg_icf_pane

0x25c8,	// (0x00019c2b) list_vkb_icf_pane

0x25d4,	// (0x00019c37) bg_icf_pane_cp01

0x25e7,	// (0x00019c4a) vtchi_icf_list_pane

0xb13e,	// (0x000227a1) list_vkb_icf_pane_t1_ParamLimits

0xb13e,	// (0x000227a1) list_vkb_icf_pane_t1

0x25f7,	// (0x00019c5a) vtchi_icf_list_pane_t1_ParamLimits

0x25f7,	// (0x00019c5a) vtchi_icf_list_pane_t1

0x24be,	// (0x00019b21) popup_fep_ituss_window_ParamLimits

0x24d0,	// (0x00019b33) popup_fep_vtchi_icf_pane_ParamLimits

0x24f6,	// (0x00019b59) ituss_keypad_pane_ParamLimits

0x67d8,	// (0x0001de3b) ituss_sks_pane

0x25bc,	// (0x00019c1f) bg_icf_pane_ParamLimits

0x2496,	// (0x00019af9) icf_edit_indi_pane_ParamLimits

0x2496,	// (0x00019af9) icf_edit_indi_pane

0x25c8,	// (0x00019c2b) list_vkb_icf_pane_ParamLimits

0x25d4,	// (0x00019c37) bg_icf_pane_cp01_ParamLimits

0x24a9,	// (0x00019b0c) icf_edit_indi_pane_cp01_ParamLimits

0x24a9,	// (0x00019b0c) icf_edit_indi_pane_cp01

0x25ef,	// (0x00019c52) vtchi_query_pane

0x1ef8,	// (0x0001955b) icf_edit_indi_pane_g1_ParamLimits

0x1ef8,	// (0x0001955b) icf_edit_indi_pane_g1

0xb154,	// (0x000227b7) icf_edit_indi_pane_g2_ParamLimits

0xb154,	// (0x000227b7) icf_edit_indi_pane_g2

0x0001,

0xfef8,	// (0x0002755b) icf_edit_indi_pane_g_ParamLimits

0xfef8,	// (0x0002755b) icf_edit_indi_pane_g

0xb164,	// (0x000227c7) icf_edit_indi_pane_t1

0x260e,	// (0x00019c71) bg_input_focus_pane_cp042

0x2617,	// (0x00019c7a) vtchi_button_pane

0x2620,	// (0x00019c83) vtchi_query_pane_t1

0x262e,	// (0x00019c91) vtchi_query_pane_t2

0x263c,	// (0x00019c9f) vtchi_query_pane_t3

0x0002,

0xfee7,	// (0x0002754a) vtchi_query_pane_t

0xb18a,	// (0x000227ed) bg_button_pane_cp13

0x264a,	// (0x00019cad) vtchi_button_pane_g1

0x6906,	// (0x0001df69) ituss_sks_pane_g1

0x690f,	// (0x0001df72) ituss_sks_pane_g2

0x0001,

0xfeee,	// (0x00027551) ituss_sks_pane_g

0x2660,	// (0x00019cc3) ituss_sks_pane_t1

0x2652,	// (0x00019cb5) ituss_sks_pane_t2

0x0001,

0xfef3,	// (0x00027556) ituss_sks_pane_t

0xdf1e,	// (0x00025581) indicator_nsta_pane_cp_g1

0xdf27,	// (0x0002558a) indicator_nsta_pane_cp_g2

0xdf2f,	// (0x00025592) indicator_nsta_pane_cp_g3

0xdf37,	// (0x0002559a) indicator_nsta_pane_cp_g4

0xdf3f,	// (0x000255a2) indicator_nsta_pane_cp_g5

0xdf47,	// (0x000255aa) indicator_nsta_pane_cp_g6

0x0005,

0xfaa3,	// (0x00027106) indicator_nsta_pane_cp_g

0xa855,	// (0x00021eb8) cell_graphic2_pane_t2_ParamLimits

0xa855,	// (0x00021eb8) cell_graphic2_pane_t2

0x0001,

0xfda9,	// (0x0002740c) cell_graphic2_pane_t_ParamLimits

0xfda9,	// (0x0002740c) cell_graphic2_pane_t

0xa88d,	// (0x00021ef0) cell_graphic2_control_pane_t1

0x82c4,	// (0x0001f927) signal_pane_g3_ParamLimits

0x82c4,	// (0x0001f927) signal_pane_g3

0x82d8,	// (0x0001f93b) signal_pane_g4_ParamLimits

0x82d8,	// (0x0001f93b) signal_pane_g4

0xb103,	// (0x00022766) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xb103,	// (0x00022766) cell_ai5_widget_list_row_pane_t3

0x2584,	// (0x00019be7) cell_ituss_key_pane_t1_ParamLimits

0x2584,	// (0x00019be7) cell_ituss_key_pane_t1

0xc64e,	// (0x00023cb1) form_field_data_wide_pane_vc_t2_ParamLimits

0xc64e,	// (0x00023cb1) form_field_data_wide_pane_vc_t2

0xc660,	// (0x00023cc3) form_field_data_wide_pane_vc_t3_ParamLimits

0xc660,	// (0x00023cc3) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f6,	// (0x00026e59) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f6,	// (0x00026e59) form_field_data_wide_pane_vc_t

0xdc8a,	// (0x000252ed) form_field_slider_wide_pane_vc_t3_ParamLimits

0xdc8a,	// (0x000252ed) form_field_slider_wide_pane_vc_t3

0xdd48,	// (0x000253ab) form_field_popup_wide_pane_vc_t2_ParamLimits

0xdd48,	// (0x000253ab) form_field_popup_wide_pane_vc_t2

0xdd5d,	// (0x000253c0) form_field_popup_wide_pane_vc_t3_ParamLimits

0xdd5d,	// (0x000253c0) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa92,	// (0x000270f5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x000270f5) form_field_popup_wide_pane_vc_t

0xad08,	// (0x0002236b) aid_fshwr2_btn_pane_ParamLimits

0xad1c,	// (0x0002237f) aid_fshwr2_syb_pane_ParamLimits

0xad30,	// (0x00022393) aid_fshwr2_txt_pane_ParamLimits

0xb814,	// (0x00022e77) fshwr2_bg_pane_ParamLimits

0xad40,	// (0x000223a3) fshwr2_func_candi_pane_ParamLimits

0xad58,	// (0x000223bb) fshwr2_hwr_syb_pane_ParamLimits

0xad70,	// (0x000223d3) fshwr2_icf_pane_ParamLimits

0x3bcd,	// (0x0001b230) list_double_graphic_pane_vc_g4_ParamLimits

0x3bcd,	// (0x0001b230) list_double_graphic_pane_vc_g4

0x6835,	// (0x0001de98) cell_ituss_key_pane_g3_ParamLimits

0x6835,	// (0x0001de98) cell_ituss_key_pane_g3

0x68d9,	// (0x0001df3c) cell_ituss_key_t5_ParamLimits

0x68d9,	// (0x0001df3c) cell_ituss_key_t5

0xb128,	// (0x0002278b) popup_fep_vkbss_window_ParamLimits

0xaa74,	// (0x000220d7) aid_cell_ai5_quarter

0xb164,	// (0x000227c7) icf_edit_indi_pane_t1_ParamLimits

0xb455,	// (0x00022ab8) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xb455,	// (0x00022ab8) aid_tch_indicator_popup_pane_cp2

0xb468,	// (0x00022acb) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xb468,	// (0x00022acb) aid_tch_query_popup_data_pane_cp2

0xc920,	// (0x00023f83) aid_tch_query_popup_pane_ParamLimits

0xc920,	// (0x00023f83) aid_tch_query_popup_pane

0xc920,	// (0x00023f83) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xc920,	// (0x00023f83) aid_tch_query_popup_data_pane_cp1

0xb99a,	// (0x00022ffd) cell_fshwr2_syb_bg_pane_ParamLimits

0xae87,	// (0x000224ea) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xae97,	// (0x000224fa) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xb119,	// (0x0002277c) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small

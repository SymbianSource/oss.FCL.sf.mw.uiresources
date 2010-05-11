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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003aea9 };

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
0x7e79,	// (0x00042d22) Screen

0x7e8d,	// (0x00042d36) application_window_ParamLimits

0x7e8d,	// (0x00042d36) application_window

0x7ea7,	// (0x00042d50) screen_g1

0x58ac,	// (0x00040755) area_bottom_pane_ParamLimits

0x58ac,	// (0x00040755) area_bottom_pane

0x596c,	// (0x00040815) area_top_pane_ParamLimits

0x596c,	// (0x00040815) area_top_pane

0x5a00,	// (0x000408a9) main_pane_ParamLimits

0x5a00,	// (0x000408a9) main_pane

0x7eb1,	// (0x00042d5a) misc_graphics

0x986a,	// (0x00044713) battery_pane_ParamLimits

0x986a,	// (0x00044713) battery_pane

0xa53c,	// (0x000453e5) bg_status_flat_pane_g8

0xa544,	// (0x000453ed) bg_status_flat_pane_g9

0x992c,	// (0x000447d5) context_pane_ParamLimits

0x992c,	// (0x000447d5) context_pane

0x9a42,	// (0x000448eb) navi_pane_ParamLimits

0x9a42,	// (0x000448eb) navi_pane

0x9ac6,	// (0x0004496f) signal_pane_ParamLimits

0x9ac6,	// (0x0004496f) signal_pane

0x0008,

0xf87e,	// (0x0004a727) bg_status_flat_pane_g

0x9b33,	// (0x000449dc) status_pane_g1_ParamLimits

0x9b33,	// (0x000449dc) status_pane_g1

0x9b47,	// (0x000449f0) status_pane_g2_ParamLimits

0x9b47,	// (0x000449f0) status_pane_g2

0x9b53,	// (0x000449fc) status_pane_g3_ParamLimits

0x9b53,	// (0x000449fc) status_pane_g3

0x0004,

0xf7a5,	// (0x0004a64e) status_pane_g_ParamLimits

0xf7a5,	// (0x0004a64e) status_pane_g

0x9b87,	// (0x00044a30) title_pane_ParamLimits

0x9b87,	// (0x00044a30) title_pane

0x9bc4,	// (0x00044a6d) uni_indicator_pane_ParamLimits

0x9bc4,	// (0x00044a6d) uni_indicator_pane

0x978e,	// (0x00044637) bg_list_pane_ParamLimits

0x978e,	// (0x00044637) bg_list_pane

0x6393,	// (0x0004123c) find_pane

0x97ae,	// (0x00044657) listscroll_app_pane_ParamLimits

0x97ae,	// (0x00044657) listscroll_app_pane

0x97ba,	// (0x00044663) listscroll_form_pane

0x639b,	// (0x00041244) listscroll_gen_pane_ParamLimits

0x639b,	// (0x00041244) listscroll_gen_pane

0x63af,	// (0x00041258) listscroll_set_pane

0x89e4,	// (0x0004388d) main_idle_act_pane

0x9496,	// (0x0004433f) main_idle_trad_pane

0x9496,	// (0x0004433f) main_list_empty_pane

0x97d4,	// (0x0004467d) main_midp_pane

0x97e0,	// (0x00044689) main_pane_g1_ParamLimits

0x97e0,	// (0x00044689) main_pane_g1

0x63b7,	// (0x00041260) popup_ai_message_window_ParamLimits

0x63b7,	// (0x00041260) popup_ai_message_window

0x645d,	// (0x00041306) popup_fep_china_uni_window_ParamLimits

0x645d,	// (0x00041306) popup_fep_china_uni_window

0x64b9,	// (0x00041362) popup_fep_japan_candidate_window_ParamLimits

0x64b9,	// (0x00041362) popup_fep_japan_candidate_window

0x64d9,	// (0x00041382) popup_fep_japan_predictive_window_ParamLimits

0x64d9,	// (0x00041382) popup_fep_japan_predictive_window

0x6509,	// (0x000413b2) popup_find_window

0x6516,	// (0x000413bf) popup_grid_graphic_window_ParamLimits

0x6516,	// (0x000413bf) popup_grid_graphic_window

0x6540,	// (0x000413e9) popup_large_graphic_colour_window

0x6566,	// (0x0004140f) popup_menu_window_ParamLimits

0x6566,	// (0x0004140f) popup_menu_window

0x671e,	// (0x000415c7) popup_note_image_window

0x670a,	// (0x000415b3) popup_note_wait_window_ParamLimits

0x670a,	// (0x000415b3) popup_note_wait_window

0x670a,	// (0x000415b3) popup_note_window_ParamLimits

0x670a,	// (0x000415b3) popup_note_window

0x6774,	// (0x0004161d) popup_query_code_window_ParamLimits

0x6774,	// (0x0004161d) popup_query_code_window

0x6788,	// (0x00041631) popup_query_data_code_window_ParamLimits

0x6788,	// (0x00041631) popup_query_data_code_window

0x67a5,	// (0x0004164e) popup_query_data_window_ParamLimits

0x67a5,	// (0x0004164e) popup_query_data_window

0x67c1,	// (0x0004166a) popup_query_sat_info_window_ParamLimits

0x67c1,	// (0x0004166a) popup_query_sat_info_window

0x67fa,	// (0x000416a3) popup_snote_single_graphic_window_ParamLimits

0x67fa,	// (0x000416a3) popup_snote_single_graphic_window

0x67fa,	// (0x000416a3) popup_snote_single_text_window_ParamLimits

0x67fa,	// (0x000416a3) popup_snote_single_text_window

0x680f,	// (0x000416b8) popup_sub_window_general

0x693f,	// (0x000417e8) popup_window_general_ParamLimits

0x693f,	// (0x000417e8) popup_window_general

0x97ee,	// (0x00044697) power_save_pane

0x622f,	// (0x000410d8) control_pane_g1_ParamLimits

0x622f,	// (0x000410d8) control_pane_g1

0x6256,	// (0x000410ff) control_pane_g2_ParamLimits

0x6256,	// (0x000410ff) control_pane_g2

0x9751,	// (0x000445fa) control_pane_g3_ParamLimits

0x9751,	// (0x000445fa) control_pane_g3

0x0007,

0xf78d,	// (0x0004a636) control_pane_g_ParamLimits

0xf78d,	// (0x0004a636) control_pane_g

0x62a0,	// (0x00041149) control_pane_t1_ParamLimits

0x62a0,	// (0x00041149) control_pane_t1

0x62ec,	// (0x00041195) control_pane_t2_ParamLimits

0x62ec,	// (0x00041195) control_pane_t2

0x0002,

0xf79e,	// (0x0004a647) control_pane_t_ParamLimits

0xf79e,	// (0x0004a647) control_pane_t

0x9676,	// (0x0004451f) navi_navi_volume_pane_cp1

0x967e,	// (0x00044527) status_small_icon_pane

0x9686,	// (0x0004452f) status_small_pane_g1_ParamLimits

0x9686,	// (0x0004452f) status_small_pane_g1

0x96ba,	// (0x00044563) status_small_pane_g2_ParamLimits

0x96ba,	// (0x00044563) status_small_pane_g2

0x96c6,	// (0x0004456f) status_small_pane_g3_ParamLimits

0x96c6,	// (0x0004456f) status_small_pane_g3

0x96d2,	// (0x0004457b) status_small_pane_g4_ParamLimits

0x96d2,	// (0x0004457b) status_small_pane_g4

0x96de,	// (0x00044587) status_small_pane_g5_ParamLimits

0x96de,	// (0x00044587) status_small_pane_g5

0x96ec,	// (0x00044595) status_small_pane_g6_ParamLimits

0x96ec,	// (0x00044595) status_small_pane_g6

0x0007,

0xf77c,	// (0x0004a625) status_small_pane_g_ParamLimits

0xf77c,	// (0x0004a625) status_small_pane_g

0x971b,	// (0x000445c4) status_small_pane_t1

0x973d,	// (0x000445e6) status_small_wait_pane_ParamLimits

0x973d,	// (0x000445e6) status_small_wait_pane

0x8f08,	// (0x00043db1) aid_levels_signal_ParamLimits

0x8f08,	// (0x00043db1) aid_levels_signal

0x8f1a,	// (0x00043dc3) signal_pane_g1_ParamLimits

0x8f1a,	// (0x00043dc3) signal_pane_g1

0x8f2f,	// (0x00043dd8) signal_pane_g2_ParamLimits

0x8f2f,	// (0x00043dd8) signal_pane_g2

0x0003,

0xf70d,	// (0x0004a5b6) signal_pane_g_ParamLimits

0xf70d,	// (0x0004a5b6) signal_pane_g

0x8f6a,	// (0x00043e13) context_pane_g1

0x7ebb,	// (0x00042d64) title_pane_g1

0x7ef1,	// (0x00042d9a) title_pane_t1

0x7f59,	// (0x00042e02) title_pane_t2

0x7f7f,	// (0x00042e28) title_pane_t3

0x0002,

0xf557,	// (0x0004a400) title_pane_t

0x9bdc,	// (0x00044a85) aid_levels_battery_ParamLimits

0x9bdc,	// (0x00044a85) aid_levels_battery

0x9bf0,	// (0x00044a99) battery_pane_g1_ParamLimits

0x9bf0,	// (0x00044a99) battery_pane_g1

0x9c06,	// (0x00044aaf) battery_pane_g2_ParamLimits

0x9c06,	// (0x00044aaf) battery_pane_g2

0x0001,

0xf7b0,	// (0x0004a659) battery_pane_g_ParamLimits

0xf7b0,	// (0x0004a659) battery_pane_g

0xae72,	// (0x00045d1b) uni_indicator_pane_g1

0xae88,	// (0x00045d31) uni_indicator_pane_g2

0xae9e,	// (0x00045d47) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0004a7cf) uni_indicator_pane_g

0x9308,	// (0x000441b1) navi_icon_pane_ParamLimits

0x9308,	// (0x000441b1) navi_icon_pane

0x9246,	// (0x000440ef) navi_midp_pane

0x9324,	// (0x000441cd) navi_navi_pane

0x932e,	// (0x000441d7) navi_text_pane_ParamLimits

0x932e,	// (0x000441d7) navi_text_pane

0x7ea7,	// (0x00042d50) status_small_wait_pane_g1

0x83ae,	// (0x00043257) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0004a7ca) status_small_wait_pane_g

0xab97,	// (0x00045a40) navi_navi_icon_text_pane

0xab9f,	// (0x00045a48) navi_navi_pane_g1_ParamLimits

0xab9f,	// (0x00045a48) navi_navi_pane_g1

0xabb1,	// (0x00045a5a) navi_navi_pane_g2_ParamLimits

0xabb1,	// (0x00045a5a) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x0004a798) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x0004a798) navi_navi_pane_g

0xabc3,	// (0x00045a6c) navi_navi_tabs_pane

0xabcc,	// (0x00045a75) navi_navi_text_pane

0xab97,	// (0x00045a40) navi_navi_volume_pane

0xab73,	// (0x00045a1c) navi_text_pane_t1

0xab67,	// (0x00045a10) navi_icon_pane_g1

0xaaba,	// (0x00045963) navi_navi_text_pane_t1

0x6bf7,	// (0x00041aa0) navi_navi_volume_pane_g1

0x6bff,	// (0x00041aa8) volume_small_pane

0xaa20,	// (0x000458c9) navi_navi_icon_text_pane_g1

0xaa28,	// (0x000458d1) navi_navi_icon_text_pane_t1

0x9324,	// (0x000441cd) navi_tabs_2_long_pane

0x9324,	// (0x000441cd) navi_tabs_2_pane

0x9324,	// (0x000441cd) navi_tabs_3_long_pane

0x9324,	// (0x000441cd) navi_tabs_3_pane

0x9324,	// (0x000441cd) navi_tabs_4_pane

0x6bd7,	// (0x00041a80) tabs_2_active_pane_ParamLimits

0x6bd7,	// (0x00041a80) tabs_2_active_pane

0x6be7,	// (0x00041a90) tabs_2_passive_pane_ParamLimits

0x6be7,	// (0x00041a90) tabs_2_passive_pane

0x6ba5,	// (0x00041a4e) tabs_3_active_pane_ParamLimits

0x6ba5,	// (0x00041a4e) tabs_3_active_pane

0x6bb5,	// (0x00041a5e) tabs_3_passive_pane_ParamLimits

0x6bb5,	// (0x00041a5e) tabs_3_passive_pane

0x6bc6,	// (0x00041a6f) tabs_3_passive_pane_cp_ParamLimits

0x6bc6,	// (0x00041a6f) tabs_3_passive_pane_cp

0x6b61,	// (0x00041a0a) tabs_4_active_pane_ParamLimits

0x6b61,	// (0x00041a0a) tabs_4_active_pane

0x6b72,	// (0x00041a1b) tabs_4_passive_pane_ParamLimits

0x6b72,	// (0x00041a1b) tabs_4_passive_pane

0x6b83,	// (0x00041a2c) tabs_4_passive_pane_cp_ParamLimits

0x6b83,	// (0x00041a2c) tabs_4_passive_pane_cp

0x6b94,	// (0x00041a3d) tabs_4_passive_pane_cp2_ParamLimits

0x6b94,	// (0x00041a3d) tabs_4_passive_pane_cp2

0x6b3d,	// (0x000419e6) tabs_2_long_active_pane_ParamLimits

0x6b3d,	// (0x000419e6) tabs_2_long_active_pane

0x6b4f,	// (0x000419f8) tabs_2_long_passive_pane_ParamLimits

0x6b4f,	// (0x000419f8) tabs_2_long_passive_pane

0x6afe,	// (0x000419a7) tabs_3_long_active_pane_ParamLimits

0x6afe,	// (0x000419a7) tabs_3_long_active_pane

0x6b11,	// (0x000419ba) tabs_3_long_passive_pane_ParamLimits

0x6b11,	// (0x000419ba) tabs_3_long_passive_pane

0x6b2a,	// (0x000419d3) tabs_3_long_passive_pane_cp_ParamLimits

0x6b2a,	// (0x000419d3) tabs_3_long_passive_pane_cp

0x6aa4,	// (0x0004194d) volume_small_pane_g1

0x6aad,	// (0x00041956) volume_small_pane_g2

0x6ab6,	// (0x0004195f) volume_small_pane_g3

0x6abf,	// (0x00041968) volume_small_pane_g4

0x6ac8,	// (0x00041971) volume_small_pane_g5

0x6ad1,	// (0x0004197a) volume_small_pane_g6

0x6ada,	// (0x00041983) volume_small_pane_g7

0x6ae3,	// (0x0004198c) volume_small_pane_g8

0x6aec,	// (0x00041995) volume_small_pane_g9

0x6af5,	// (0x0004199e) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x0004a764) volume_small_pane_g

0x7f91,	// (0x00042e3a) bg_active_tab_pane_cp2_ParamLimits

0x7f91,	// (0x00042e3a) bg_active_tab_pane_cp2

0x7f9f,	// (0x00042e48) tabs_3_active_pane_g1

0x7fa7,	// (0x00042e50) tabs_3_active_pane_t1

0x7f91,	// (0x00042e3a) bg_passive_tab_pane_cp2_ParamLimits

0x7f91,	// (0x00042e3a) bg_passive_tab_pane_cp2

0x7f9f,	// (0x00042e48) tabs_3_passive_pane_g1

0x7fa7,	// (0x00042e50) tabs_3_passive_pane_t1

0x7f91,	// (0x00042e3a) bg_active_tab_pane_cp3_ParamLimits

0x7f91,	// (0x00042e3a) bg_active_tab_pane_cp3

0x7fb9,	// (0x00042e62) tabs_4_active_pane_g1

0x7fc1,	// (0x00042e6a) tabs_4_active_pane_t1

0x7f91,	// (0x00042e3a) bg_passive_tab_pane_cp3_ParamLimits

0x7f91,	// (0x00042e3a) bg_passive_tab_pane_cp3

0x7fb9,	// (0x00042e62) tabs_4_1_passive_pane_g1

0x7fc1,	// (0x00042e6a) tabs_4_1_passive_pane_t1

0x97d4,	// (0x0004467d) list_highlight_pane_cp2

0xb0e6,	// (0x00045f8f) list_set_pane_ParamLimits

0xb0e6,	// (0x00045f8f) list_set_pane

0xb18c,	// (0x00046035) main_pane_set_t1_ParamLimits

0xb18c,	// (0x00046035) main_pane_set_t1

0xb1ac,	// (0x00046055) main_pane_set_t2_ParamLimits

0xb1ac,	// (0x00046055) main_pane_set_t2

0xb1c0,	// (0x00046069) main_pane_set_t3_ParamLimits

0xb1c0,	// (0x00046069) main_pane_set_t3

0xb1d2,	// (0x0004607b) main_pane_set_t4_ParamLimits

0xb1d2,	// (0x0004607b) main_pane_set_t4

0x0003,

0xf98b,	// (0x0004a834) main_pane_set_t_ParamLimits

0xf98b,	// (0x0004a834) main_pane_set_t

0xb1e4,	// (0x0004608d) setting_code_pane

0xb1f0,	// (0x00046099) setting_slider_graphic_pane

0xb1f0,	// (0x00046099) setting_slider_pane

0xb1f0,	// (0x00046099) setting_text_pane

0xb1f0,	// (0x00046099) setting_volume_pane

0x5c4f,	// (0x00040af8) volume_set_pane

0x7f91,	// (0x00042e3a) bg_set_opt_pane_cp

0x5c57,	// (0x00040b00) setting_slider_pane_t1

0x5c70,	// (0x00040b19) setting_slider_pane_t2

0x5c8a,	// (0x00040b33) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004a407) setting_slider_pane_t

0x5ca2,	// (0x00040b4b) slider_set_pane

0x7eb1,	// (0x00042d5a) bg_set_opt_pane_cp2

0x7fd3,	// (0x00042e7c) setting_slider_graphic_pane_g1

0x5cb8,	// (0x00040b61) setting_slider_graphic_pane_t1

0x5cc8,	// (0x00040b71) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004a40e) setting_slider_graphic_pane_t

0x5cd8,	// (0x00040b81) slider_set_pane_cp

0x7eb1,	// (0x00042d5a) input_focus_pane_cp1

0xb0a5,	// (0x00045f4e) list_set_text_pane

0x7ea7,	// (0x00042d50) setting_text_pane_g1

0x7eb1,	// (0x00042d5a) input_focus_pane_cp2

0x7ea7,	// (0x00042d50) setting_code_pane_g1

0x7fdc,	// (0x00042e85) setting_code_pane_t1

0x48f0,	// (0x0003f799) set_text_pane_t1_ParamLimits

0x48f0,	// (0x0003f799) set_text_pane_t1

0x885b,	// (0x00043704) set_opt_bg_pane_g1

0x8863,	// (0x0004370c) set_opt_bg_pane_g2

0xb07f,	// (0x00045f28) set_opt_bg_pane_g3

0x8873,	// (0x0004371c) set_opt_bg_pane_g4

0x887b,	// (0x00043724) set_opt_bg_pane_g5

0x8883,	// (0x0004372c) set_opt_bg_pane_g6

0xb089,	// (0x00045f32) set_opt_bg_pane_g7

0xb091,	// (0x00045f3a) set_opt_bg_pane_g8

0xb09b,	// (0x00045f44) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0004a821) set_opt_bg_pane_g

0xb072,	// (0x00045f1b) slider_set_pane_g1

0x6c6c,	// (0x00041b15) slider_set_pane_g2

0x0006,

0xf969,	// (0x0004a812) slider_set_pane_g

0x6c08,	// (0x00041ab1) volume_set_pane_g1

0x6c10,	// (0x00041ab9) volume_set_pane_g2

0x6c18,	// (0x00041ac1) volume_set_pane_g3

0x6c20,	// (0x00041ac9) volume_set_pane_g4

0x6c28,	// (0x00041ad1) volume_set_pane_g5

0x6c30,	// (0x00041ad9) volume_set_pane_g6

0x6c38,	// (0x00041ae1) volume_set_pane_g7

0x6c40,	// (0x00041ae9) volume_set_pane_g8

0x6c48,	// (0x00041af1) volume_set_pane_g9

0x6c50,	// (0x00041af9) volume_set_pane_g10

0x0009,

0xf941,	// (0x0004a7ea) volume_set_pane_g

0x7fea,	// (0x00042e93) indicator_pane_ParamLimits

0x7fea,	// (0x00042e93) indicator_pane

0x7ff6,	// (0x00042e9f) main_idle_pane_g2_ParamLimits

0x7ff6,	// (0x00042e9f) main_idle_pane_g2

0x801e,	// (0x00042ec7) main_pane_idle_g1_ParamLimits

0x801e,	// (0x00042ec7) main_pane_idle_g1

0x802b,	// (0x00042ed4) popup_clock_digital_analogue_window_ParamLimits

0x802b,	// (0x00042ed4) popup_clock_digital_analogue_window

0x8042,	// (0x00042eeb) soft_indicator_pane_ParamLimits

0x8042,	// (0x00042eeb) soft_indicator_pane

0x804e,	// (0x00042ef7) wallpaper_pane_ParamLimits

0x804e,	// (0x00042ef7) wallpaper_pane

0x7ea7,	// (0x00042d50) wallpaper_pane_g1

0x8062,	// (0x00042f0b) indicator_pane_g1_ParamLimits

0x8062,	// (0x00042f0b) indicator_pane_g1

0xb454,	// (0x000462fd) navi_navi_icon_text_pane_srt_g1

0x807d,	// (0x00042f26) soft_indicator_pane_t1

0x8097,	// (0x00042f40) aid_ps_area_pane

0x80a8,	// (0x00042f51) aid_ps_clock_pane

0x80b6,	// (0x00042f5f) aid_ps_indicator_pane

0x80c2,	// (0x00042f6b) indicator_ps_pane_ParamLimits

0x80c2,	// (0x00042f6b) indicator_ps_pane

0x80d1,	// (0x00042f7a) power_save_pane_g1_ParamLimits

0x80d1,	// (0x00042f7a) power_save_pane_g1

0x80dd,	// (0x00042f86) power_save_pane_g2_ParamLimits

0x80dd,	// (0x00042f86) power_save_pane_g2

0x5860,	// (0x00040709) aid_navinavi_width_pane

0x8097,	// (0x00042f40) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004a413) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004a413) power_save_pane_g

0x80eb,	// (0x00042f94) power_save_pane_t1_ParamLimits

0x80eb,	// (0x00042f94) power_save_pane_t1

0x80a8,	// (0x00042f51) aid_ps_clock_pane_ParamLimits

0x80b6,	// (0x00042f5f) aid_ps_indicator_pane_ParamLimits

0x80fd,	// (0x00042fa6) power_save_pane_t4_ParamLimits

0x80fd,	// (0x00042fa6) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004a418) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004a418) power_save_pane_t

0x8127,	// (0x00042fd0) power_save_t3_ParamLimits

0x8127,	// (0x00042fd0) power_save_t3

0x8112,	// (0x00042fbb) power_save_t2_ParamLimits

0x8112,	// (0x00042fbb) power_save_t2

0x813c,	// (0x00042fe5) indicator_ps_pane_g1

0x8145,	// (0x00042fee) ai_gene_pane_ParamLimits

0x8145,	// (0x00042fee) ai_gene_pane

0x8151,	// (0x00042ffa) ai_links_pane_ParamLimits

0x8151,	// (0x00042ffa) ai_links_pane

0x815d,	// (0x00043006) indicator_pane_cp1_ParamLimits

0x815d,	// (0x00043006) indicator_pane_cp1

0x8169,	// (0x00043012) main_pane_idle_g1_cp_ParamLimits

0x8169,	// (0x00043012) main_pane_idle_g1_cp

0x8175,	// (0x0004301e) popup_ai_links_title_window

0x817e,	// (0x00043027) soft_indicator_pane_cp1_ParamLimits

0x817e,	// (0x00043027) soft_indicator_pane_cp1

0xae60,	// (0x00045d09) ai_links_pane_g1

0xae69,	// (0x00045d12) grid_ai_links_pane

0xae43,	// (0x00045cec) ai_gene_pane_1

0xae4e,	// (0x00045cf7) ai_gene_pane_2

0xae57,	// (0x00045d00) list_highlight_pane_cp4

0xae27,	// (0x00045cd0) cell_ai_link_pane_ParamLimits

0xae27,	// (0x00045cd0) cell_ai_link_pane

0xae1f,	// (0x00045cc8) cell_ai_link_pane_g1

0x83ae,	// (0x00043257) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x0004a7c5) cell_ai_link_pane_g

0x7eb1,	// (0x00042d5a) grid_highlight_cp2

0x7eb1,	// (0x00042d5a) bg_popup_sub_pane_cp1

0x8198,	// (0x00043041) popup_ai_links_title_window_t1

0xad6d,	// (0x00045c16) ai_gene_pane_1_g1_ParamLimits

0xad6d,	// (0x00045c16) ai_gene_pane_1_g1

0xad79,	// (0x00045c22) ai_gene_pane_1_g2_ParamLimits

0xad79,	// (0x00045c22) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x0004a7bb) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x0004a7bb) ai_gene_pane_1_g

0xad86,	// (0x00045c2f) ai_gene_pane_1_t1_ParamLimits

0xad86,	// (0x00045c2f) ai_gene_pane_1_t1

0xadba,	// (0x00045c63) grid_ai_soft_ind_pane

0xad58,	// (0x00045c01) ai_gene_pane_2_t1_ParamLimits

0xad58,	// (0x00045c01) ai_gene_pane_2_t1

0x81a7,	// (0x00043050) main_pane_empty_t1_ParamLimits

0x81a7,	// (0x00043050) main_pane_empty_t1

0x81bf,	// (0x00043068) main_pane_empty_t2_ParamLimits

0x81bf,	// (0x00043068) main_pane_empty_t2

0x81d4,	// (0x0004307d) main_pane_empty_t3_ParamLimits

0x81d4,	// (0x0004307d) main_pane_empty_t3

0x81e6,	// (0x0004308f) main_pane_empty_t4_ParamLimits

0x81e6,	// (0x0004308f) main_pane_empty_t4

0x81f8,	// (0x000430a1) main_pane_empty_t5_ParamLimits

0x81f8,	// (0x000430a1) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004a41d) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004a41d) main_pane_empty_t

0x88ac,	// (0x00043755) bg_popup_window_pane_ParamLimits

0x88ac,	// (0x00043755) bg_popup_window_pane

0xaac8,	// (0x00045971) find_popup_pane_cp2_ParamLimits

0xaac8,	// (0x00045971) find_popup_pane_cp2

0xaad4,	// (0x0004597d) heading_pane_ParamLimits

0xaad4,	// (0x0004597d) heading_pane

0x7eb1,	// (0x00042d5a) bg_popup_sub_pane

0xaa42,	// (0x000458eb) bg_popup_window_pane_g1_ParamLimits

0xaa42,	// (0x000458eb) bg_popup_window_pane_g1

0xaa4e,	// (0x000458f7) bg_popup_window_pane_g2_ParamLimits

0xaa4e,	// (0x000458f7) bg_popup_window_pane_g2

0xaa5a,	// (0x00045903) bg_popup_window_pane_g3_ParamLimits

0xaa5a,	// (0x00045903) bg_popup_window_pane_g3

0xaa66,	// (0x0004590f) bg_popup_window_pane_g4_ParamLimits

0xaa66,	// (0x0004590f) bg_popup_window_pane_g4

0xaa72,	// (0x0004591b) bg_popup_window_pane_g5_ParamLimits

0xaa72,	// (0x0004591b) bg_popup_window_pane_g5

0xaa7e,	// (0x00045927) bg_popup_window_pane_g6_ParamLimits

0xaa7e,	// (0x00045927) bg_popup_window_pane_g6

0xaa8a,	// (0x00045933) bg_popup_window_pane_g7_ParamLimits

0xaa8a,	// (0x00045933) bg_popup_window_pane_g7

0xaa96,	// (0x0004593f) bg_popup_window_pane_g8_ParamLimits

0xaa96,	// (0x0004593f) bg_popup_window_pane_g8

0xaaa2,	// (0x0004594b) bg_popup_window_pane_g9_ParamLimits

0xaaa2,	// (0x0004594b) bg_popup_window_pane_g9

0xaaae,	// (0x00045957) bg_popup_window_pane_g10_ParamLimits

0xaaae,	// (0x00045957) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x0004a783) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x0004a783) bg_popup_window_pane_g

0xa9d7,	// (0x00045880) bg_popup_heading_pane_ParamLimits

0xa9d7,	// (0x00045880) bg_popup_heading_pane

0x6d8a,	// (0x00041c33) tabs_4_passive_pane_cp_srt_ParamLimits

0x6d8a,	// (0x00041c33) tabs_4_passive_pane_cp_srt

0x6d9c,	// (0x00041c45) tabs_4_passive_pane_srt_ParamLimits

0xa9eb,	// (0x00045894) heading_pane_g2

0x6d9c,	// (0x00041c45) tabs_4_passive_pane_srt

0x97d4,	// (0x0004467d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97d4,	// (0x0004467d) bg_passive_tab_pane_cp3_srt

0xa9f3,	// (0x0004589c) heading_pane_t1_ParamLimits

0xa9f3,	// (0x0004589c) heading_pane_t1

0xaa0a,	// (0x000458b3) heading_pane_t2_ParamLimits

0xaa0a,	// (0x000458b3) heading_pane_t2

0x0001,

0xf8d5,	// (0x0004a77e) heading_pane_t_ParamLimits

0xf8d5,	// (0x0004a77e) heading_pane_t

0xa504,	// (0x000453ad) bg_popup_heading_pane_g1

0xa5b3,	// (0x0004545c) bg_popup_heading_pane_g2

0xa5bd,	// (0x00045466) bg_popup_heading_pane_g3

0xa5c7,	// (0x00045470) bg_popup_heading_pane_g4

0xa5d1,	// (0x0004547a) bg_popup_heading_pane_g5

0xa5db,	// (0x00045484) bg_popup_heading_pane_g6

0xa5e3,	// (0x0004548c) bg_popup_heading_pane_g7

0xa5eb,	// (0x00045494) bg_popup_heading_pane_g8

0xa5f5,	// (0x0004549e) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x0004a73a) bg_popup_heading_pane_g

0x9cde,	// (0x00044b87) bg_popup_sub_pane_g1

0x9ce6,	// (0x00044b8f) bg_popup_sub_pane_g2

0x9cee,	// (0x00044b97) bg_popup_sub_pane_g3

0x9cf6,	// (0x00044b9f) bg_popup_sub_pane_g4

0x9cfe,	// (0x00044ba7) bg_popup_sub_pane_g5

0x9d06,	// (0x00044baf) bg_popup_sub_pane_g6

0x9d0e,	// (0x00044bb7) bg_popup_sub_pane_g7

0x9d16,	// (0x00044bbf) bg_popup_sub_pane_g8

0x9d1e,	// (0x00044bc7) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x0004a714) bg_popup_sub_pane_g

0x820c,	// (0x000430b5) bg_popup_window_pane_cp5_ParamLimits

0x820c,	// (0x000430b5) bg_popup_window_pane_cp5

0x8228,	// (0x000430d1) popup_note_window_g1_ParamLimits

0x8228,	// (0x000430d1) popup_note_window_g1

0x8234,	// (0x000430dd) popup_note_window_t1_ParamLimits

0x8234,	// (0x000430dd) popup_note_window_t1

0x824a,	// (0x000430f3) popup_note_window_t2_ParamLimits

0x824a,	// (0x000430f3) popup_note_window_t2

0x8260,	// (0x00043109) popup_note_window_t3_ParamLimits

0x8260,	// (0x00043109) popup_note_window_t3

0x8276,	// (0x0004311f) popup_note_window_t4_ParamLimits

0x8276,	// (0x0004311f) popup_note_window_t4

0x829e,	// (0x00043147) popup_note_window_t5_ParamLimits

0x829e,	// (0x00043147) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004a428) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004a428) popup_note_window_t

0x82c2,	// (0x0004316b) bg_popup_window_pane_cp6_ParamLimits

0x82c2,	// (0x0004316b) bg_popup_window_pane_cp6

0xa474,	// (0x0004531d) popup_note_image_window_g1_ParamLimits

0xa474,	// (0x0004531d) popup_note_image_window_g1

0xa480,	// (0x00045329) popup_note_image_window_g2_ParamLimits

0xa480,	// (0x00045329) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x0004a708) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x0004a708) popup_note_image_window_g

0xa499,	// (0x00045342) popup_note_image_window_t1_ParamLimits

0xa499,	// (0x00045342) popup_note_image_window_t1

0xa4be,	// (0x00045367) popup_note_image_window_t2_ParamLimits

0xa4be,	// (0x00045367) popup_note_image_window_t2

0xa4d7,	// (0x00045380) popup_note_image_window_t3_ParamLimits

0xa4d7,	// (0x00045380) popup_note_image_window_t3

0x0002,

0xf864,	// (0x0004a70d) popup_note_image_window_t_ParamLimits

0xf864,	// (0x0004a70d) popup_note_image_window_t

0xa335,	// (0x000451de) bg_popup_window_pane_cp7_ParamLimits

0xa335,	// (0x000451de) bg_popup_window_pane_cp7

0xa365,	// (0x0004520e) popup_note_wait_window_g1_ParamLimits

0xa365,	// (0x0004520e) popup_note_wait_window_g1

0xa371,	// (0x0004521a) popup_note_wait_window_g2_ParamLimits

0xa371,	// (0x0004521a) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x0004a6f6) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x0004a6f6) popup_note_wait_window_g

0xa389,	// (0x00045232) popup_note_wait_window_t1_ParamLimits

0xa389,	// (0x00045232) popup_note_wait_window_t1

0xa3b0,	// (0x00045259) popup_note_wait_window_t2_ParamLimits

0xa3b0,	// (0x00045259) popup_note_wait_window_t2

0xa3cd,	// (0x00045276) popup_note_wait_window_t3_ParamLimits

0xa3cd,	// (0x00045276) popup_note_wait_window_t3

0xa3e0,	// (0x00045289) popup_note_wait_window_t4_ParamLimits

0xa3e0,	// (0x00045289) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x0004a6fd) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x0004a6fd) popup_note_wait_window_t

0xa405,	// (0x000452ae) wait_bar_pane_ParamLimits

0xa405,	// (0x000452ae) wait_bar_pane

0x7eb1,	// (0x00042d5a) wait_anim_pane

0x7eb1,	// (0x00042d5a) wait_border_pane

0x7ea7,	// (0x00042d50) wait_anim_pane_g1

0x7ea7,	// (0x00042d50) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0004a5b1) wait_anim_pane_g

0xa2d9,	// (0x00045182) wait_border_pane_g1

0xa2e4,	// (0x0004518d) wait_border_pane_g2

0xa2ed,	// (0x00045196) wait_border_pane_g3

0x0002,

0xf846,	// (0x0004a6ef) wait_border_pane_g

0xa144,	// (0x00044fed) bg_popup_window_pane_cp16_ParamLimits

0xa144,	// (0x00044fed) bg_popup_window_pane_cp16

0xa244,	// (0x000450ed) indicator_popup_pane_cp4_ParamLimits

0xa244,	// (0x000450ed) indicator_popup_pane_cp4

0xa258,	// (0x00045101) popup_query_data_window_t1_ParamLimits

0xa258,	// (0x00045101) popup_query_data_window_t1

0xa26a,	// (0x00045113) popup_query_data_window_t2_ParamLimits

0xa26a,	// (0x00045113) popup_query_data_window_t2

0xa283,	// (0x0004512c) popup_query_data_window_t3_ParamLimits

0xa283,	// (0x0004512c) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x0004a6e8) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x0004a6e8) popup_query_data_window_t

0xa29d,	// (0x00045146) query_popup_data_pane_ParamLimits

0xa29d,	// (0x00045146) query_popup_data_pane

0xa2b1,	// (0x0004515a) query_popup_data_pane_cp1_ParamLimits

0xa2b1,	// (0x0004515a) query_popup_data_pane_cp1

0xa144,	// (0x00044fed) bg_popup_window_pane_cp10_ParamLimits

0xa144,	// (0x00044fed) bg_popup_window_pane_cp10

0xa176,	// (0x0004501f) indicator_popup_pane_ParamLimits

0xa176,	// (0x0004501f) indicator_popup_pane

0xa198,	// (0x00045041) popup_query_code_window_t1_ParamLimits

0xa198,	// (0x00045041) popup_query_code_window_t1

0xa1b2,	// (0x0004505b) popup_query_code_window_t2_ParamLimits

0xa1b2,	// (0x0004505b) popup_query_code_window_t2

0xa1fb,	// (0x000450a4) popup_query_code_window_t3_ParamLimits

0xa1fb,	// (0x000450a4) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0004a6e1) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0004a6e1) popup_query_code_window_t

0xa22a,	// (0x000450d3) query_popup_pane_ParamLimits

0xa22a,	// (0x000450d3) query_popup_pane

0x82c2,	// (0x0004316b) bg_popup_window_pane_cp15_ParamLimits

0x82c2,	// (0x0004316b) bg_popup_window_pane_cp15

0x82e0,	// (0x00043189) indicator_popup_pane_cp1_ParamLimits

0x82e0,	// (0x00043189) indicator_popup_pane_cp1

0x82f3,	// (0x0004319c) indicator_popup_pane_cp2_ParamLimits

0x82f3,	// (0x0004319c) indicator_popup_pane_cp2

0x8306,	// (0x000431af) popup_query_data_code_window_g1_ParamLimits

0x8306,	// (0x000431af) popup_query_data_code_window_g1

0x8319,	// (0x000431c2) popup_query_data_code_window_t1_ParamLimits

0x8319,	// (0x000431c2) popup_query_data_code_window_t1

0x832b,	// (0x000431d4) popup_query_data_code_window_t2_ParamLimits

0x832b,	// (0x000431d4) popup_query_data_code_window_t2

0x833d,	// (0x000431e6) popup_query_data_code_window_t3_ParamLimits

0x833d,	// (0x000431e6) popup_query_data_code_window_t3

0x8353,	// (0x000431fc) popup_query_data_code_window_t4_ParamLimits

0x8353,	// (0x000431fc) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004a433) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004a433) popup_query_data_code_window_t

0x69b5,	// (0x0004185e) list_single_midp_graphic_pane_g3

0x836b,	// (0x00043214) query_popup_data_pane_cp2_ParamLimits

0x837e,	// (0x00043227) query_popup_pane_cp2_ParamLimits

0x837e,	// (0x00043227) query_popup_pane_cp2

0x7eb1,	// (0x00042d5a) bg_popup_window_pane_cp11

0xa13c,	// (0x00044fe5) heading_pane_cp5

0x8469,	// (0x00043312) listscroll_popup_info_pane

0x7eb1,	// (0x00042d5a) input_focus_pane_cp3

0x8391,	// (0x0004323a) query_popup_pane_t1

0x839f,	// (0x00043248) list_popup_info_pane_ParamLimits

0x839f,	// (0x00043248) list_popup_info_pane

0x83ae,	// (0x00043257) listscroll_popup_info_pane_g1

0x83b6,	// (0x0004325f) scroll_pane_cp7

0x83c0,	// (0x00043269) popup_info_list_pane_t1_ParamLimits

0x83c0,	// (0x00043269) popup_info_list_pane_t1

0x83da,	// (0x00043283) popup_info_list_pane_t2_ParamLimits

0x83da,	// (0x00043283) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004a43c) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004a43c) popup_info_list_pane_t

0x7eb1,	// (0x00042d5a) bg_popup_window_pane_cp12

0xb46e,	// (0x00046317) find_popup_pane

0x7f91,	// (0x00042e3a) bg_popup_window_pane_cp3

0x83f4,	// (0x0004329d) heading_pane_cp3

0x8400,	// (0x000432a9) listscroll_popup_graphic_pane

0x7eb1,	// (0x00042d5a) bg_popup_window_pane_cp4

0x845f,	// (0x00043308) heading_pane_cp4

0x8469,	// (0x00043312) listscroll_popup_colour_pane

0x8471,	// (0x0004331a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8471,	// (0x0004331a) cell_large_graphic_colour_none_popup_pane

0x8485,	// (0x0004332e) grid_large_graphic_colour_popup_pane_ParamLimits

0x8485,	// (0x0004332e) grid_large_graphic_colour_popup_pane

0x84b1,	// (0x0004335a) listscroll_popup_colour_pane_g1_ParamLimits

0x84b1,	// (0x0004335a) listscroll_popup_colour_pane_g1

0x84c8,	// (0x00043371) listscroll_popup_colour_pane_g2_ParamLimits

0x84c8,	// (0x00043371) listscroll_popup_colour_pane_g2

0x84df,	// (0x00043388) listscroll_popup_colour_pane_g3_ParamLimits

0x84df,	// (0x00043388) listscroll_popup_colour_pane_g3

0x84ef,	// (0x00043398) listscroll_popup_colour_pane_g4_ParamLimits

0x84ef,	// (0x00043398) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004a441) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004a441) listscroll_popup_colour_pane_g

0x8503,	// (0x000433ac) scroll_pane_cp6_ParamLimits

0x8503,	// (0x000433ac) scroll_pane_cp6

0x8515,	// (0x000433be) cell_large_graphic_colour_popup_pane_ParamLimits

0x8515,	// (0x000433be) cell_large_graphic_colour_popup_pane

0x8534,	// (0x000433dd) cell_large_graphic_colour_none_popup_pane_t1

0x7eb1,	// (0x00042d5a) grid_highlight_pane_cp5

0x8543,	// (0x000433ec) cell_large_graphic_colour_popup_pane_g1

0x854b,	// (0x000433f4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004a44a) cell_large_graphic_colour_popup_pane_g

0x8553,	// (0x000433fc) cell_large_graphic_colour_popup_pane_g2_copy1

0x855c,	// (0x00043405) grid_highlight_pane_cp4

0x8564,	// (0x0004340d) bg_popup_window_pane_cp8_ParamLimits

0x8564,	// (0x0004340d) bg_popup_window_pane_cp8

0x857f,	// (0x00043428) popup_snote_single_text_window_g1_ParamLimits

0x857f,	// (0x00043428) popup_snote_single_text_window_g1

0x8591,	// (0x0004343a) popup_snote_single_text_window_t1_ParamLimits

0x8591,	// (0x0004343a) popup_snote_single_text_window_t1

0x85a4,	// (0x0004344d) popup_snote_single_text_window_t2_ParamLimits

0x85a4,	// (0x0004344d) popup_snote_single_text_window_t2

0x85b7,	// (0x00043460) popup_snote_single_text_window_t3_ParamLimits

0x85b7,	// (0x00043460) popup_snote_single_text_window_t3

0x85f0,	// (0x00043499) popup_snote_single_text_window_t4_ParamLimits

0x85f0,	// (0x00043499) popup_snote_single_text_window_t4

0x8624,	// (0x000434cd) popup_snote_single_text_window_t5_ParamLimits

0x8624,	// (0x000434cd) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004a44f) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004a44f) popup_snote_single_text_window_t

0x8653,	// (0x000434fc) bg_popup_window_pane_cp9_ParamLimits

0x8653,	// (0x000434fc) bg_popup_window_pane_cp9

0x857f,	// (0x00043428) popup_snote_single_graphic_window_g1_ParamLimits

0x857f,	// (0x00043428) popup_snote_single_graphic_window_g1

0x8661,	// (0x0004350a) popup_snote_single_graphic_window_g2_ParamLimits

0x8661,	// (0x0004350a) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004a45a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004a45a) popup_snote_single_graphic_window_g

0x866d,	// (0x00043516) popup_snote_single_graphic_window_t1_ParamLimits

0x866d,	// (0x00043516) popup_snote_single_graphic_window_t1

0x8680,	// (0x00043529) popup_snote_single_graphic_window_t2_ParamLimits

0x8680,	// (0x00043529) popup_snote_single_graphic_window_t2

0x8693,	// (0x0004353c) popup_snote_single_graphic_window_t3_ParamLimits

0x8693,	// (0x0004353c) popup_snote_single_graphic_window_t3

0x86cc,	// (0x00043575) popup_snote_single_graphic_window_t4_ParamLimits

0x86cc,	// (0x00043575) popup_snote_single_graphic_window_t4

0x8700,	// (0x000435a9) popup_snote_single_graphic_window_t5_ParamLimits

0x8700,	// (0x000435a9) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004a45f) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004a45f) popup_snote_single_graphic_window_t

0xb3b2,	// (0x0004625b) grid_graphic_popup_pane_ParamLimits

0xb3b2,	// (0x0004625b) grid_graphic_popup_pane

0xb3da,	// (0x00046283) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3da,	// (0x00046283) listscroll_popup_graphic_pane_g1

0xb3ee,	// (0x00046297) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3ee,	// (0x00046297) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x0004a85e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x0004a85e) listscroll_popup_graphic_pane_g

0xb402,	// (0x000462ab) scroll_pane_cp5

0xb34f,	// (0x000461f8) cell_graphic_popup_pane_ParamLimits

0xb34f,	// (0x000461f8) cell_graphic_popup_pane

0xb330,	// (0x000461d9) cell_graphic_popup_pane_g1

0xb338,	// (0x000461e1) cell_graphic_popup_pane_g2

0x8553,	// (0x000433fc) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x0004a857) cell_graphic_popup_pane_g

0xb341,	// (0x000461ea) cell_graphic_popup_pane_t2

0x855c,	// (0x00043405) grid_highlight_pane_cp3

0x8741,	// (0x000435ea) list_gen_pane_ParamLimits

0x8741,	// (0x000435ea) list_gen_pane

0x8773,	// (0x0004361c) scroll_pane

0xb288,	// (0x00046131) bg_list_pane_g1_ParamLimits

0xb288,	// (0x00046131) bg_list_pane_g1

0xb2a5,	// (0x0004614e) bg_list_pane_g2_ParamLimits

0xb2a5,	// (0x0004614e) bg_list_pane_g2

0xb2ba,	// (0x00046163) bg_list_pane_g3_ParamLimits

0xb2ba,	// (0x00046163) bg_list_pane_g3

0xb2ce,	// (0x00046177) bg_list_pane_g4_ParamLimits

0xb2ce,	// (0x00046177) bg_list_pane_g4

0xb2e2,	// (0x0004618b) bg_list_pane_g5_ParamLimits

0xb2e2,	// (0x0004618b) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x0004a84c) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x0004a84c) bg_list_pane_g

0x6cd0,	// (0x00041b79) list_double2_graphic_large_graphic_pane_ParamLimits

0x6cd0,	// (0x00041b79) list_double2_graphic_large_graphic_pane

0x6cd0,	// (0x00041b79) list_double2_graphic_pane_ParamLimits

0x6cd0,	// (0x00041b79) list_double2_graphic_pane

0x6cd0,	// (0x00041b79) list_double2_large_graphic_pane_ParamLimits

0x6cd0,	// (0x00041b79) list_double2_large_graphic_pane

0x6cd0,	// (0x00041b79) list_double2_pane_ParamLimits

0x6cd0,	// (0x00041b79) list_double2_pane

0x6cd0,	// (0x00041b79) list_double_graphic_heading_pane_ParamLimits

0x6cd0,	// (0x00041b79) list_double_graphic_heading_pane

0x6cd0,	// (0x00041b79) list_double_graphic_pane_ParamLimits

0x6cd0,	// (0x00041b79) list_double_graphic_pane

0x6cd0,	// (0x00041b79) list_double_heading_pane_ParamLimits

0x6cd0,	// (0x00041b79) list_double_heading_pane

0x6cd0,	// (0x00041b79) list_double_large_graphic_pane_ParamLimits

0x6cd0,	// (0x00041b79) list_double_large_graphic_pane

0x6cd0,	// (0x00041b79) list_double_number_pane_ParamLimits

0x6cd0,	// (0x00041b79) list_double_number_pane

0x6cd0,	// (0x00041b79) list_double_pane_ParamLimits

0x6cd0,	// (0x00041b79) list_double_pane

0x6cd0,	// (0x00041b79) list_double_time_pane_ParamLimits

0x6cd0,	// (0x00041b79) list_double_time_pane

0x6cd0,	// (0x00041b79) list_setting_number_pane_ParamLimits

0x6cd0,	// (0x00041b79) list_setting_number_pane

0x6cd0,	// (0x00041b79) list_setting_pane_ParamLimits

0x6cd0,	// (0x00041b79) list_setting_pane

0x6d09,	// (0x00041bb2) list_single_2graphic_pane_ParamLimits

0x6d09,	// (0x00041bb2) list_single_2graphic_pane

0x6d09,	// (0x00041bb2) list_single_graphic_heading_pane_ParamLimits

0x6d09,	// (0x00041bb2) list_single_graphic_heading_pane

0x6d09,	// (0x00041bb2) list_single_graphic_pane_ParamLimits

0x6d09,	// (0x00041bb2) list_single_graphic_pane

0x6d09,	// (0x00041bb2) list_single_heading_pane_ParamLimits

0x6d09,	// (0x00041bb2) list_single_heading_pane

0x6d47,	// (0x00041bf0) list_single_large_graphic_pane_ParamLimits

0x6d47,	// (0x00041bf0) list_single_large_graphic_pane

0x6d09,	// (0x00041bb2) list_single_number_heading_pane_ParamLimits

0x6d09,	// (0x00041bb2) list_single_number_heading_pane

0x6d09,	// (0x00041bb2) list_single_number_pane_ParamLimits

0x6d09,	// (0x00041bb2) list_single_number_pane

0x6d09,	// (0x00041bb2) list_single_pane_ParamLimits

0x6d09,	// (0x00041bb2) list_single_pane

0x7eb1,	// (0x00042d5a) list_highlight_pane_cp1

0x5ce0,	// (0x00040b89) list_single_pane_g1_ParamLimits

0x5ce0,	// (0x00040b89) list_single_pane_g1

0x5cec,	// (0x00040b95) list_single_pane_g2_ParamLimits

0x5cec,	// (0x00040b95) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004a47b) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004a47b) list_single_pane_g

0x521a,	// (0x000400c3) list_single_pane_t1_ParamLimits

0x521a,	// (0x000400c3) list_single_pane_t1

0x5ce0,	// (0x00040b89) list_single_number_pane_g1_ParamLimits

0x5ce0,	// (0x00040b89) list_single_number_pane_g1

0x5cec,	// (0x00040b95) list_single_number_pane_g2_ParamLimits

0x5cec,	// (0x00040b95) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004a47b) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004a47b) list_single_number_pane_g

0x51c2,	// (0x0004006b) list_single_number_pane_t1_ParamLimits

0x51c2,	// (0x0004006b) list_single_number_pane_t1

0x51d8,	// (0x00040081) list_single_number_pane_t2_ParamLimits

0x51d8,	// (0x00040081) list_single_number_pane_t2

0x0001,

0xf964,	// (0x0004a80d) list_single_number_pane_t_ParamLimits

0xf964,	// (0x0004a80d) list_single_number_pane_t

0x4909,	// (0x0003f7b2) list_single_graphic_pane_g1_ParamLimits

0x4909,	// (0x0003f7b2) list_single_graphic_pane_g1

0x5ce0,	// (0x00040b89) list_single_graphic_pane_g2_ParamLimits

0x5ce0,	// (0x00040b89) list_single_graphic_pane_g2

0x5cec,	// (0x00040b95) list_single_graphic_pane_g3_ParamLimits

0x5cec,	// (0x00040b95) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004a46a) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004a46a) list_single_graphic_pane_g

0x4915,	// (0x0003f7be) list_single_graphic_pane_t1_ParamLimits

0x4915,	// (0x0003f7be) list_single_graphic_pane_t1

0x492b,	// (0x0003f7d4) list_single_heading_pane_g1_ParamLimits

0x492b,	// (0x0003f7d4) list_single_heading_pane_g1

0x5cec,	// (0x00040b95) list_single_heading_pane_g2_ParamLimits

0x5cec,	// (0x00040b95) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004a471) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004a471) list_single_heading_pane_g

0x493e,	// (0x0003f7e7) list_single_heading_pane_t1_ParamLimits

0x493e,	// (0x0003f7e7) list_single_heading_pane_t1

0x5cf8,	// (0x00040ba1) list_single_heading_pane_t2_ParamLimits

0x5cf8,	// (0x00040ba1) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004a476) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004a476) list_single_heading_pane_t

0x5ce0,	// (0x00040b89) list_single_number_heading_pane_g1_ParamLimits

0x5ce0,	// (0x00040b89) list_single_number_heading_pane_g1

0x5cec,	// (0x00040b95) list_single_number_heading_pane_g2_ParamLimits

0x5cec,	// (0x00040b95) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004a47b) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004a47b) list_single_number_heading_pane_g

0x4954,	// (0x0003f7fd) list_single_number_heading_pane_t1_ParamLimits

0x4954,	// (0x0003f7fd) list_single_number_heading_pane_t1

0x496a,	// (0x0003f813) list_single_number_heading_pane_t2_ParamLimits

0x496a,	// (0x0003f813) list_single_number_heading_pane_t2

0x497c,	// (0x0003f825) list_single_number_heading_pane_t3_ParamLimits

0x497c,	// (0x0003f825) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004a480) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004a480) list_single_number_heading_pane_t

0x498e,	// (0x0003f837) list_single_graphic_heading_pane_g1_ParamLimits

0x498e,	// (0x0003f837) list_single_graphic_heading_pane_g1

0x5d0a,	// (0x00040bb3) list_single_graphic_heading_pane_g4_ParamLimits

0x5d0a,	// (0x00040bb3) list_single_graphic_heading_pane_g4

0x5cec,	// (0x00040b95) list_single_graphic_heading_pane_g5_ParamLimits

0x5cec,	// (0x00040b95) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0004a487) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0004a487) list_single_graphic_heading_pane_g

0x4954,	// (0x0003f7fd) list_single_graphic_heading_pane_t1_ParamLimits

0x4954,	// (0x0003f7fd) list_single_graphic_heading_pane_t1

0x49a6,	// (0x0003f84f) list_single_graphic_heading_pane_t2_ParamLimits

0x49a6,	// (0x0003f84f) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004a48e) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004a48e) list_single_graphic_heading_pane_t

0x5d1b,	// (0x00040bc4) list_single_large_graphic_pane_g1_ParamLimits

0x5d1b,	// (0x00040bc4) list_single_large_graphic_pane_g1

0x5d27,	// (0x00040bd0) list_single_large_graphic_pane_g2_ParamLimits

0x5d27,	// (0x00040bd0) list_single_large_graphic_pane_g2

0x5d33,	// (0x00040bdc) list_single_large_graphic_pane_g3_ParamLimits

0x5d33,	// (0x00040bdc) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004a493) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004a493) list_single_large_graphic_pane_g

0xa2e4,	// (0x0004518d) wait_border_pane_g2_copy1

0x5d3f,	// (0x00040be8) list_single_large_graphic_pane_g4_cp2

0x49bc,	// (0x0003f865) list_single_large_graphic_pane_t1_ParamLimits

0x49bc,	// (0x0003f865) list_single_large_graphic_pane_t1

0x87a7,	// (0x00043650) list_double_pane_g1_ParamLimits

0x87a7,	// (0x00043650) list_double_pane_g1

0x5d47,	// (0x00040bf0) list_double_pane_g2_ParamLimits

0x5d47,	// (0x00040bf0) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004a49a) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004a49a) list_double_pane_g

0x49d2,	// (0x0003f87b) list_double_pane_t1_ParamLimits

0x49d2,	// (0x0003f87b) list_double_pane_t1

0x49e8,	// (0x0003f891) list_double_pane_t2_ParamLimits

0x49e8,	// (0x0003f891) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004a49f) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004a49f) list_double_pane_t

0x49fa,	// (0x0003f8a3) list_double2_pane_g1_ParamLimits

0x49fa,	// (0x0003f8a3) list_double2_pane_g1

0x4a0b,	// (0x0003f8b4) list_double2_pane_g2_ParamLimits

0x4a0b,	// (0x0003f8b4) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004a4a4) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004a4a4) list_double2_pane_g

0x4a17,	// (0x0003f8c0) list_double2_pane_t1_ParamLimits

0x4a17,	// (0x0003f8c0) list_double2_pane_t1

0x4a2d,	// (0x0003f8d6) list_double2_pane_t2_ParamLimits

0x4a2d,	// (0x0003f8d6) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004a4a9) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004a4a9) list_double2_pane_t

0x87a7,	// (0x00043650) list_double_number_pane_g1_ParamLimits

0x87a7,	// (0x00043650) list_double_number_pane_g1

0x5d47,	// (0x00040bf0) list_double_number_pane_g2_ParamLimits

0x5d47,	// (0x00040bf0) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004a49a) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004a49a) list_double_number_pane_g

0x4a3f,	// (0x0003f8e8) list_double_number_pane_t1_ParamLimits

0x4a3f,	// (0x0003f8e8) list_double_number_pane_t1

0x4a51,	// (0x0003f8fa) list_double_number_pane_t2_ParamLimits

0x4a51,	// (0x0003f8fa) list_double_number_pane_t2

0x4a67,	// (0x0003f910) list_double_number_pane_t3_ParamLimits

0x4a67,	// (0x0003f910) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004a4ae) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004a4ae) list_double_number_pane_t

0x4a79,	// (0x0003f922) list_double_graphic_pane_g1_ParamLimits

0x4a79,	// (0x0003f922) list_double_graphic_pane_g1

0x4a85,	// (0x0003f92e) list_double_graphic_pane_g2_ParamLimits

0x4a85,	// (0x0003f92e) list_double_graphic_pane_g2

0x4a94,	// (0x0003f93d) list_double_graphic_pane_g3_ParamLimits

0x4a94,	// (0x0003f93d) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0004a4b5) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004a4b5) list_double_graphic_pane_g

0x4aac,	// (0x0003f955) list_double_graphic_pane_t1_ParamLimits

0x4aac,	// (0x0003f955) list_double_graphic_pane_t1

0x4ac2,	// (0x0003f96b) list_double_graphic_pane_t2_ParamLimits

0x4ac2,	// (0x0003f96b) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004a4be) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004a4be) list_double_graphic_pane_t

0x4ad4,	// (0x0003f97d) list_double2_graphic_pane_g1_ParamLimits

0x4ad4,	// (0x0003f97d) list_double2_graphic_pane_g1

0xa4b2,	// (0x0004535b) list_double2_graphic_pane_g2_ParamLimits

0xa4b2,	// (0x0004535b) list_double2_graphic_pane_g2

0x5d53,	// (0x00040bfc) list_double2_graphic_pane_g3_ParamLimits

0x5d53,	// (0x00040bfc) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0004a4c3) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0004a4c3) list_double2_graphic_pane_g

0x4ae0,	// (0x0003f989) list_double2_graphic_pane_t1_ParamLimits

0x4ae0,	// (0x0003f989) list_double2_graphic_pane_t1

0x4af6,	// (0x0003f99f) list_double2_graphic_pane_t2_ParamLimits

0x4af6,	// (0x0003f99f) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004a4ca) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004a4ca) list_double2_graphic_pane_t

0x4b08,	// (0x0003f9b1) list_double_large_graphic_pane_g1_ParamLimits

0x4b08,	// (0x0003f9b1) list_double_large_graphic_pane_g1

0x4b27,	// (0x0003f9d0) list_double_large_graphic_pane_g2_ParamLimits

0x4b27,	// (0x0003f9d0) list_double_large_graphic_pane_g2

0x5d47,	// (0x00040bf0) list_double_large_graphic_pane_g3_ParamLimits

0x5d47,	// (0x00040bf0) list_double_large_graphic_pane_g3

0x4b3d,	// (0x0003f9e6) list_double_large_graphic_pane_g4_ParamLimits

0x4b3d,	// (0x0003f9e6) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004a4cf) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004a4cf) list_double_large_graphic_pane_g

0x4b4e,	// (0x0003f9f7) list_double_large_graphic_pane_t1_ParamLimits

0x4b4e,	// (0x0003f9f7) list_double_large_graphic_pane_t1

0x4b67,	// (0x0003fa10) list_double_large_graphic_pane_t2_ParamLimits

0x4b67,	// (0x0003fa10) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004a4da) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004a4da) list_double_large_graphic_pane_t

0x5d74,	// (0x00040c1d) list_double2_large_graphic_pane_g1_ParamLimits

0x5d74,	// (0x00040c1d) list_double2_large_graphic_pane_g1

0x4b79,	// (0x0003fa22) list_double2_large_graphic_pane_g2_ParamLimits

0x4b79,	// (0x0003fa22) list_double2_large_graphic_pane_g2

0x5d53,	// (0x00040bfc) list_double2_large_graphic_pane_g3_ParamLimits

0x5d53,	// (0x00040bfc) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004a4df) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004a4df) list_double2_large_graphic_pane_g

0x4b8a,	// (0x0003fa33) list_double2_large_graphic_pane_t1_ParamLimits

0x4b8a,	// (0x0003fa33) list_double2_large_graphic_pane_t1

0x4ba0,	// (0x0003fa49) list_double2_large_graphic_pane_t2_ParamLimits

0x4ba0,	// (0x0003fa49) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004a4e6) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004a4e6) list_double2_large_graphic_pane_t

0x4bb2,	// (0x0003fa5b) list_double_heading_pane_g1_ParamLimits

0x4bb2,	// (0x0003fa5b) list_double_heading_pane_g1

0x5d80,	// (0x00040c29) list_double_heading_pane_g2_ParamLimits

0x5d80,	// (0x00040c29) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004a4eb) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004a4eb) list_double_heading_pane_g

0x4bc3,	// (0x0003fa6c) list_double_heading_pane_t1_ParamLimits

0x4bc3,	// (0x0003fa6c) list_double_heading_pane_t1

0x4a2d,	// (0x0003f8d6) list_double_heading_pane_t2_ParamLimits

0x4a2d,	// (0x0003f8d6) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004a4f0) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004a4f0) list_double_heading_pane_t

0x4bd9,	// (0x0003fa82) list_double_graphic_heading_pane_g1_ParamLimits

0x4bd9,	// (0x0003fa82) list_double_graphic_heading_pane_g1

0x4bb2,	// (0x0003fa5b) list_double_graphic_heading_pane_g2_ParamLimits

0x4bb2,	// (0x0003fa5b) list_double_graphic_heading_pane_g2

0x5d80,	// (0x00040c29) list_double_graphic_heading_pane_g3_ParamLimits

0x5d80,	// (0x00040c29) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0004a4f5) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0004a4f5) list_double_graphic_heading_pane_g

0x4be5,	// (0x0003fa8e) list_double_graphic_heading_pane_t1_ParamLimits

0x4be5,	// (0x0003fa8e) list_double_graphic_heading_pane_t1

0x4af6,	// (0x0003f99f) list_double_graphic_heading_pane_t2_ParamLimits

0x4af6,	// (0x0003f99f) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004a4fc) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004a4fc) list_double_graphic_heading_pane_t

0x4bfb,	// (0x0003faa4) list_double_time_pane_g1_ParamLimits

0x4bfb,	// (0x0003faa4) list_double_time_pane_g1

0x4c0c,	// (0x0003fab5) list_double_time_pane_g2_ParamLimits

0x4c0c,	// (0x0003fab5) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0004a501) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0004a501) list_double_time_pane_g

0x4c18,	// (0x0003fac1) list_double_time_pane_t1_ParamLimits

0x4c18,	// (0x0003fac1) list_double_time_pane_t1

0x4c2e,	// (0x0003fad7) list_double_time_pane_t2_ParamLimits

0x4c2e,	// (0x0003fad7) list_double_time_pane_t2

0x4c40,	// (0x0003fae9) list_double_time_pane_t3_ParamLimits

0x4c40,	// (0x0003fae9) list_double_time_pane_t3

0x4c52,	// (0x0003fafb) list_double_time_pane_t4_ParamLimits

0x4c52,	// (0x0003fafb) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0004a506) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0004a506) list_double_time_pane_t

0x4c64,	// (0x0003fb0d) list_setting_pane_g1_ParamLimits

0x4c64,	// (0x0003fb0d) list_setting_pane_g1

0x4a0b,	// (0x0003f8b4) list_setting_pane_g2_ParamLimits

0x4a0b,	// (0x0003f8b4) list_setting_pane_g2

0x0001,

0xf666,	// (0x0004a50f) list_setting_pane_g_ParamLimits

0xf666,	// (0x0004a50f) list_setting_pane_g

0x4c70,	// (0x0003fb19) list_setting_pane_t1_ParamLimits

0x4c70,	// (0x0003fb19) list_setting_pane_t1

0x4c8a,	// (0x0003fb33) list_setting_pane_t2_ParamLimits

0x4c8a,	// (0x0003fb33) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0004a514) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0004a514) list_setting_pane_t

0x4cc9,	// (0x0003fb72) set_value_pane_cp_ParamLimits

0x4cc9,	// (0x0003fb72) set_value_pane_cp

0x4cd5,	// (0x0003fb7e) list_setting_number_pane_g1_ParamLimits

0x4cd5,	// (0x0003fb7e) list_setting_number_pane_g1

0x4ce1,	// (0x0003fb8a) list_setting_number_pane_g2_ParamLimits

0x4ce1,	// (0x0003fb8a) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0004a51b) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0004a51b) list_setting_number_pane_g

0x4ced,	// (0x0003fb96) list_setting_number_pane_t1_ParamLimits

0x4ced,	// (0x0003fb96) list_setting_number_pane_t1

0x4d06,	// (0x0003fbaf) list_setting_number_pane_t2_ParamLimits

0x4d06,	// (0x0003fbaf) list_setting_number_pane_t2

0x4d20,	// (0x0003fbc9) list_setting_number_pane_t3_ParamLimits

0x4d20,	// (0x0003fbc9) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0004a520) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0004a520) list_setting_number_pane_t

0x4cc9,	// (0x0003fb72) set_value_pane_ParamLimits

0x4cc9,	// (0x0003fb72) set_value_pane

0x87b3,	// (0x0004365c) bg_set_opt_pane_ParamLimits

0x87b3,	// (0x0004365c) bg_set_opt_pane

0x4d63,	// (0x0003fc0c) set_value_pane_t1

0x87d4,	// (0x0004367d) slider_set_pane_cp3

0x87dd,	// (0x00043686) volume_small_pane_cp

0x87e6,	// (0x0004368f) list_form_gen_pane

0x87ef,	// (0x00043698) scroll_pane_cp8

0x4d79,	// (0x0003fc22) form_field_data_pane_ParamLimits

0x4d79,	// (0x0003fc22) form_field_data_pane

0x4d9d,	// (0x0003fc46) form_field_data_wide_pane_ParamLimits

0x4d9d,	// (0x0003fc46) form_field_data_wide_pane

0x4dc0,	// (0x0003fc69) form_field_popup_pane_ParamLimits

0x4dc0,	// (0x0003fc69) form_field_popup_pane

0x4de0,	// (0x0003fc89) form_field_popup_wide_pane_ParamLimits

0x4de0,	// (0x0003fc89) form_field_popup_wide_pane

0x4dff,	// (0x0003fca8) form_field_slider_pane_ParamLimits

0x4dff,	// (0x0003fca8) form_field_slider_pane

0x4e12,	// (0x0003fcbb) form_field_slider_wide_pane_ParamLimits

0x4e12,	// (0x0003fcbb) form_field_slider_wide_pane

0x8800,	// (0x000436a9) data_form_pane

0x4e2f,	// (0x0003fcd8) form_field_data_pane_t1

0x880c,	// (0x000436b5) input_focus_pane

0x4e47,	// (0x0003fcf0) data_form_wide_pane

0x4e64,	// (0x0003fd0d) form_field_data_wide_pane_t1

0x8571,	// (0x0004341a) input_focus_pane_cp6

0x4e86,	// (0x0003fd2f) form_field_popup_pane_t1

0x880c,	// (0x000436b5) input_focus_pane_cp7

0x882e,	// (0x000436d7) list_form_pane

0x4ea6,	// (0x0003fd4f) form_field_popup_wide_pane_t1

0x880c,	// (0x000436b5) input_focus_pane_cp8

0x883a,	// (0x000436e3) list_form_wide_pane

0x4ec3,	// (0x0003fd6c) form_field_slider_pane_t1_ParamLimits

0x4ec3,	// (0x0003fd6c) form_field_slider_pane_t1

0x4ed9,	// (0x0003fd82) form_field_slider_pane_t2_ParamLimits

0x4ed9,	// (0x0003fd82) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0004a530) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0004a530) form_field_slider_pane_t

0x820c,	// (0x000430b5) input_focus_pane_cp9_ParamLimits

0x820c,	// (0x000430b5) input_focus_pane_cp9

0x4eee,	// (0x0003fd97) slider_cont_pane_ParamLimits

0x4eee,	// (0x0003fd97) slider_cont_pane

0x8849,	// (0x000436f2) form_field_slider_wide_pane_t1_ParamLimits

0x8849,	// (0x000436f2) form_field_slider_wide_pane_t1

0x4f02,	// (0x0003fdab) form_field_slider_wide_pane_t2_ParamLimits

0x4f02,	// (0x0003fdab) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0004a535) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0004a535) form_field_slider_wide_pane_t

0x820c,	// (0x000430b5) input_focus_pane_cp10_ParamLimits

0x820c,	// (0x000430b5) input_focus_pane_cp10

0x4f14,	// (0x0003fdbd) slider_cont_pane_cp1_ParamLimits

0x4f14,	// (0x0003fdbd) slider_cont_pane_cp1

0x4f28,	// (0x0003fdd1) slider_form_pane_cp

0x885b,	// (0x00043704) input_focus_pane_g1

0x8863,	// (0x0004370c) input_focus_pane_g2

0x886b,	// (0x00043714) input_focus_pane_g3

0x8873,	// (0x0004371c) input_focus_pane_g4

0x887b,	// (0x00043724) input_focus_pane_g5

0x8883,	// (0x0004372c) input_focus_pane_g6

0x888b,	// (0x00043734) input_focus_pane_g7

0x8893,	// (0x0004373c) input_focus_pane_g8

0x889b,	// (0x00043744) input_focus_pane_g9

0x7ea7,	// (0x00042d50) input_focus_pane_g10

0x0009,

0xf691,	// (0x0004a53a) input_focus_pane_g

0xa2ed,	// (0x00045196) wait_border_pane_g3_copy1

0x4f30,	// (0x0003fdd9) data_form_pane_t1

0x7ea7,	// (0x00042d50) wait_anim_pane_g1_copy1

0x51ea,	// (0x00040093) data_form_wide_pane_t1

0x4f4b,	// (0x0003fdf4) list_form_graphic_pane_cp_ParamLimits

0x4f4b,	// (0x0003fdf4) list_form_graphic_pane_cp

0xb21a,	// (0x000460c3) slider_form_pane_g1

0xb223,	// (0x000460cc) slider_form_pane_g2

0x0006,

0xf994,	// (0x0004a83d) slider_form_pane_g

0x4f64,	// (0x0003fe0d) list_form_graphic_pane_ParamLimits

0x4f64,	// (0x0003fe0d) list_form_graphic_pane

0x4f80,	// (0x0003fe29) list_form_graphic_pane_g1

0x4f88,	// (0x0003fe31) list_form_graphic_pane_t1_ParamLimits

0x4f88,	// (0x0003fe31) list_form_graphic_pane_t1

0x7f91,	// (0x00042e3a) list_highlight_pane_cp5_ParamLimits

0x7f91,	// (0x00042e3a) list_highlight_pane_cp5

0x4f9d,	// (0x0003fe46) find_pane_g1

0x88a3,	// (0x0004374c) input_find_pane

0x4fa6,	// (0x0003fe4f) input_find_pane_g1_ParamLimits

0x4fa6,	// (0x0003fe4f) input_find_pane_g1

0x4fb2,	// (0x0003fe5b) input_find_pane_t1_ParamLimits

0x4fb2,	// (0x0003fe5b) input_find_pane_t1

0x4fc7,	// (0x0003fe70) input_find_pane_t2_ParamLimits

0x4fc7,	// (0x0003fe70) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0004a54f) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0004a54f) input_find_pane_t

0x88ac,	// (0x00043755) input_focus_pane_cp5_ParamLimits

0x88ac,	// (0x00043755) input_focus_pane_cp5

0x88c6,	// (0x0004376f) bg_popup_window_pane_cp2_ParamLimits

0x88c6,	// (0x0004376f) bg_popup_window_pane_cp2

0x88d3,	// (0x0004377c) listscroll_menu_pane_ParamLimits

0x88d3,	// (0x0004377c) listscroll_menu_pane

0x88df,	// (0x00043788) popup_submenu_window_ParamLimits

0x88df,	// (0x00043788) popup_submenu_window

0x890b,	// (0x000437b4) find_popup_pane_g1

0x8913,	// (0x000437bc) input_popup_find_pane_cp

0x88ac,	// (0x00043755) input_focus_pane_cp4_ParamLimits

0x88ac,	// (0x00043755) input_focus_pane_cp4

0x8929,	// (0x000437d2) input_popup_find_pane_t1_ParamLimits

0x8929,	// (0x000437d2) input_popup_find_pane_t1

0x7eb1,	// (0x00042d5a) bg_popup_sub_pane_cp

0x8957,	// (0x00043800) listscroll_popup_sub_pane

0x895f,	// (0x00043808) list_submenu_pane_ParamLimits

0x895f,	// (0x00043808) list_submenu_pane

0x8970,	// (0x00043819) scroll_pane_cp4

0x8978,	// (0x00043821) list_single_popup_submenu_pane_ParamLimits

0x8978,	// (0x00043821) list_single_popup_submenu_pane

0x898c,	// (0x00043835) list_single_popup_submenu_pane_g1

0x8994,	// (0x0004383d) list_single_popup_submenu_pane_t1_ParamLimits

0x8994,	// (0x0004383d) list_single_popup_submenu_pane_t1

0x7f91,	// (0x00042e3a) bg_active_tab_pane_cp1_ParamLimits

0x7f91,	// (0x00042e3a) bg_active_tab_pane_cp1

0x89a9,	// (0x00043852) tabs_2_active_pane_g1

0x89b1,	// (0x0004385a) tabs_2_active_pane_t1

0x7f91,	// (0x00042e3a) bg_passive_tab_pane_cp1_ParamLimits

0x7f91,	// (0x00042e3a) bg_passive_tab_pane_cp1

0x89a9,	// (0x00043852) tabs_2_passive_pane_g1

0x89b1,	// (0x0004385a) tabs_2_passive_pane_t1

0x89c3,	// (0x0004386c) bg_active_tab_pane_cp4

0x89d1,	// (0x0004387a) tabs_2_long_active_pane_t1

0x89e4,	// (0x0004388d) bg_passive_tab_pane_cp4

0x6039,	// (0x00040ee2) list_single_midp_graphic_pane_g4_ParamLimits

0x89c3,	// (0x0004386c) bg_active_tab_pane_cp5

0x89f0,	// (0x00043899) tabs_3_long_active_pane_t1

0x89e4,	// (0x0004388d) bg_passive_tab_pane_cp5

0x6039,	// (0x00040ee2) list_single_midp_graphic_pane_g4

0x7f91,	// (0x00042e3a) bg_popup_window_pane_cp13_ParamLimits

0x7f91,	// (0x00042e3a) bg_popup_window_pane_cp13

0x8a0b,	// (0x000438b4) listscroll_popup_fast_pane_ParamLimits

0x8a0b,	// (0x000438b4) listscroll_popup_fast_pane

0x8a1a,	// (0x000438c3) grid_popup_fast_pane_ParamLimits

0x8a1a,	// (0x000438c3) grid_popup_fast_pane

0x8a2c,	// (0x000438d5) scroll_pane_cp9_ParamLimits

0x8a2c,	// (0x000438d5) scroll_pane_cp9

0xcae0,	// (0x00047989) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae0,	// (0x00047989) list_single_graphic_hl_pane_t1_cp2

0x8a50,	// (0x000438f9) input_focus_pane_cp20_ParamLimits

0x8a50,	// (0x000438f9) input_focus_pane_cp20

0x8a5e,	// (0x00043907) query_popup_data_pane_t1_ParamLimits

0x8a5e,	// (0x00043907) query_popup_data_pane_t1

0x8a71,	// (0x0004391a) query_popup_data_pane_t2_ParamLimits

0x8a71,	// (0x0004391a) query_popup_data_pane_t2

0x8ab7,	// (0x00043960) query_popup_data_pane_t3_ParamLimits

0x8ab7,	// (0x00043960) query_popup_data_pane_t3

0x8af8,	// (0x000439a1) query_popup_data_pane_t4_ParamLimits

0x8af8,	// (0x000439a1) query_popup_data_pane_t4

0x8b34,	// (0x000439dd) query_popup_data_pane_t5_ParamLimits

0x8b34,	// (0x000439dd) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0004a554) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0004a554) query_popup_data_pane_t

0x885b,	// (0x00043704) bg_set_opt_pane_g1

0x8863,	// (0x0004370c) bg_set_opt_pane_g2

0x886b,	// (0x00043714) bg_set_opt_pane_g3

0x8873,	// (0x0004371c) bg_set_opt_pane_g4

0x887b,	// (0x00043724) bg_set_opt_pane_g5

0x8883,	// (0x0004372c) bg_set_opt_pane_g6

0x888b,	// (0x00043734) bg_set_opt_pane_g7

0x8893,	// (0x0004373c) bg_set_opt_pane_g8

0x889b,	// (0x00043744) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0004a55f) bg_set_opt_pane_g

0x6045,	// (0x00040eee) control_top_pane_stacon_ParamLimits

0x6045,	// (0x00040eee) control_top_pane_stacon

0x6098,	// (0x00040f41) signal_pane_stacon_ParamLimits

0x6098,	// (0x00040f41) signal_pane_stacon

0x9124,	// (0x00043fcd) stacon_top_pane_g1_ParamLimits

0x9124,	// (0x00043fcd) stacon_top_pane_g1

0x60bd,	// (0x00040f66) title_pane_stacon_ParamLimits

0x60bd,	// (0x00040f66) title_pane_stacon

0x60e7,	// (0x00040f90) uni_indicator_pane_stacon_ParamLimits

0x60e7,	// (0x00040f90) uni_indicator_pane_stacon

0x60fc,	// (0x00040fa5) battery_pane_stacon_ParamLimits

0x60fc,	// (0x00040fa5) battery_pane_stacon

0x6140,	// (0x00040fe9) control_bottom_pane_stacon_ParamLimits

0x6140,	// (0x00040fe9) control_bottom_pane_stacon

0x6163,	// (0x0004100c) navi_pane_stacon_ParamLimits

0x6163,	// (0x0004100c) navi_pane_stacon

0x9146,	// (0x00043fef) stacon_bottom_pane_g1_ParamLimits

0x9146,	// (0x00043fef) stacon_bottom_pane_g1

0x5d8c,	// (0x00040c35) aid_levels_signal_lsc_ParamLimits

0x5d8c,	// (0x00040c35) aid_levels_signal_lsc

0x5da2,	// (0x00040c4b) signal_pane_stacon_g1_ParamLimits

0x5da2,	// (0x00040c4b) signal_pane_stacon_g1

0x5db6,	// (0x00040c5f) signal_pane_stacon_g2_ParamLimits

0x5db6,	// (0x00040c5f) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0004a572) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004a572) signal_pane_stacon_g

0x5deb,	// (0x00040c94) title_pane_stacon_t1_ParamLimits

0x5deb,	// (0x00040c94) title_pane_stacon_t1

0x8b78,	// (0x00043a21) uni_indicator_pane_stacon_g1

0x8b82,	// (0x00043a2b) uni_indicator_pane_stacon_g2

0x8b8c,	// (0x00043a35) uni_indicator_pane_stacon_g3

0x8b96,	// (0x00043a3f) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0004a57e) uni_indicator_pane_stacon_g

0x5e10,	// (0x00040cb9) control_top_pane_stacon_g1

0x5e18,	// (0x00040cc1) control_top_pane_stacon_t1_ParamLimits

0x5e18,	// (0x00040cc1) control_top_pane_stacon_t1

0x5e4f,	// (0x00040cf8) aid_levels_battery_lsc_ParamLimits

0x5e4f,	// (0x00040cf8) aid_levels_battery_lsc

0x5e66,	// (0x00040d0f) battery_pane_stacon_g1_ParamLimits

0x5e66,	// (0x00040d0f) battery_pane_stacon_g1

0x5e79,	// (0x00040d22) battery_pane_stacon_g2_ParamLimits

0x5e79,	// (0x00040d22) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0004a587) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0004a587) battery_pane_stacon_g

0x5eb7,	// (0x00040d60) navi_icon_pane_stacon

0x5ecb,	// (0x00040d74) navi_navi_pane_stacon

0x5eb7,	// (0x00040d60) navi_text_pane_stacon

0x5e10,	// (0x00040cb9) control_bottom_pane_stacon_g1

0x5edf,	// (0x00040d88) control_bottom_pane_stacon_t1_ParamLimits

0x5edf,	// (0x00040d88) control_bottom_pane_stacon_t1

0x8bba,	// (0x00043a63) grid_app_pane_ParamLimits

0x8bba,	// (0x00043a63) grid_app_pane

0x8bde,	// (0x00043a87) scroll_pane_cp15_ParamLimits

0x8bde,	// (0x00043a87) scroll_pane_cp15

0x8bf1,	// (0x00043a9a) cell_app_pane_ParamLimits

0x8bf1,	// (0x00043a9a) cell_app_pane

0x8c15,	// (0x00043abe) cell_app_pane_g1_ParamLimits

0x8c15,	// (0x00043abe) cell_app_pane_g1

0x8c39,	// (0x00043ae2) cell_app_pane_g2_ParamLimits

0x8c39,	// (0x00043ae2) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0004a58c) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0004a58c) cell_app_pane_g

0x8c45,	// (0x00043aee) cell_app_pane_t1_ParamLimits

0x8c45,	// (0x00043aee) cell_app_pane_t1

0x8c5c,	// (0x00043b05) grid_highlight_pane_ParamLimits

0x8c5c,	// (0x00043b05) grid_highlight_pane

0x885b,	// (0x00043704) cell_highlight_pane_g1

0x8863,	// (0x0004370c) cell_highlight_pane_g2

0x886b,	// (0x00043714) cell_highlight_pane_g3

0x8873,	// (0x0004371c) cell_highlight_pane_g4

0x887b,	// (0x00043724) cell_highlight_pane_g5

0x8883,	// (0x0004372c) cell_highlight_pane_g6

0x888b,	// (0x00043734) cell_highlight_pane_g7

0x8893,	// (0x0004373c) cell_highlight_pane_g8

0x889b,	// (0x00043744) cell_highlight_pane_g9

0x7ea7,	// (0x00042d50) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0004a53a) cell_highlight_pane_g

0x8c6d,	// (0x00043b16) bg_scroll_pane

0x5f29,	// (0x00040dd2) scroll_handle_pane

0x8cb4,	// (0x00043b5d) scroll_bg_pane_g1

0x8cc9,	// (0x00043b72) scroll_bg_pane_g2

0x8ce1,	// (0x00043b8a) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0004a591) scroll_bg_pane_g

0x8cf6,	// (0x00043b9f) scroll_handle_focus_pane_ParamLimits

0x8cf6,	// (0x00043b9f) scroll_handle_focus_pane

0x8cb4,	// (0x00043b5d) scroll_handle_pane_g1

0x8d03,	// (0x00043bac) scroll_handle_pane_g2

0x8ce1,	// (0x00043b8a) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0004a598) scroll_handle_pane_g

0x88ac,	// (0x00043755) bg_popup_sub_pane_cp21_ParamLimits

0x88ac,	// (0x00043755) bg_popup_sub_pane_cp21

0x8d17,	// (0x00043bc0) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d17,	// (0x00043bc0) popup_fep_japan_predictive_window_t1

0x8d31,	// (0x00043bda) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d31,	// (0x00043bda) popup_fep_japan_predictive_window_t2

0x8d64,	// (0x00043c0d) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d64,	// (0x00043c0d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0004a59f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0004a59f) popup_fep_japan_predictive_window_t

0x7eb1,	// (0x00042d5a) bg_popup_sub_pane_cp23

0x8d9b,	// (0x00043c44) listscroll_japin_cand_pane

0x8da3,	// (0x00043c4c) popup_fep_japan_candidate_window_t1

0x8db1,	// (0x00043c5a) candidate_pane_ParamLimits

0x8db1,	// (0x00043c5a) candidate_pane

0x8dc3,	// (0x00043c6c) scroll_pane_cp30

0x8dcb,	// (0x00043c74) list_single_popup_jap_candidate_pane_ParamLimits

0x8dcb,	// (0x00043c74) list_single_popup_jap_candidate_pane

0x7eb1,	// (0x00042d5a) list_highlight_pane_cp30

0x8de0,	// (0x00043c89) list_single_popup_jap_candidate_pane_t1

0x8def,	// (0x00043c98) level_1_signal

0x8e01,	// (0x00043caa) level_2_signal

0x8e14,	// (0x00043cbd) level_3_signal

0x8e27,	// (0x00043cd0) level_4_signal

0x8e3a,	// (0x00043ce3) level_5_signal

0x8e4d,	// (0x00043cf6) level_6_signal

0x8e60,	// (0x00043d09) level_7_signal

0x8def,	// (0x00043c98) level_1_battery

0x8e01,	// (0x00043caa) level_2_battery

0x8e14,	// (0x00043cbd) level_3_battery

0x8e27,	// (0x00043cd0) level_4_battery

0x8e3a,	// (0x00043ce3) level_5_battery

0x8e4d,	// (0x00043cf6) level_6_battery

0x8e60,	// (0x00043d09) level_7_battery

0x8e8b,	// (0x00043d34) list_menu_pane_ParamLimits

0x8e8b,	// (0x00043d34) list_menu_pane

0x8ea1,	// (0x00043d4a) scroll_pane_cp25_ParamLimits

0x8ea1,	// (0x00043d4a) scroll_pane_cp25

0x8eba,	// (0x00043d63) list_double2_graphic_pane_cp2_ParamLimits

0x8eba,	// (0x00043d63) list_double2_graphic_pane_cp2

0x8eba,	// (0x00043d63) list_double2_large_graphic_pane_cp2_ParamLimits

0x8eba,	// (0x00043d63) list_double2_large_graphic_pane_cp2

0x8eba,	// (0x00043d63) list_double2_pane_cp2_ParamLimits

0x8eba,	// (0x00043d63) list_double2_pane_cp2

0x8eba,	// (0x00043d63) list_double_graphic_pane_cp2_ParamLimits

0x8eba,	// (0x00043d63) list_double_graphic_pane_cp2

0x8eba,	// (0x00043d63) list_double_large_graphic_pane_cp2_ParamLimits

0x8eba,	// (0x00043d63) list_double_large_graphic_pane_cp2

0x8eba,	// (0x00043d63) list_double_number_pane_cp2_ParamLimits

0x8eba,	// (0x00043d63) list_double_number_pane_cp2

0x8eba,	// (0x00043d63) list_double_pane_cp2_ParamLimits

0x8eba,	// (0x00043d63) list_double_pane_cp2

0x8ede,	// (0x00043d87) list_single_2graphic_pane_cp2_ParamLimits

0x8ede,	// (0x00043d87) list_single_2graphic_pane_cp2

0x8ede,	// (0x00043d87) list_single_graphic_heading_pane_cp2_ParamLimits

0x8ede,	// (0x00043d87) list_single_graphic_heading_pane_cp2

0x8ede,	// (0x00043d87) list_single_graphic_pane_cp2_ParamLimits

0x8ede,	// (0x00043d87) list_single_graphic_pane_cp2

0x8ede,	// (0x00043d87) list_single_heading_pane_cp2_ParamLimits

0x8ede,	// (0x00043d87) list_single_heading_pane_cp2

0x8ef7,	// (0x00043da0) list_single_large_graphic_pane_cp2_ParamLimits

0x8ef7,	// (0x00043da0) list_single_large_graphic_pane_cp2

0x8ede,	// (0x00043d87) list_single_number_heading_pane_cp2_ParamLimits

0x8ede,	// (0x00043d87) list_single_number_heading_pane_cp2

0x8ede,	// (0x00043d87) list_single_number_pane_cp2_ParamLimits

0x8ede,	// (0x00043d87) list_single_number_pane_cp2

0x8ede,	// (0x00043d87) list_single_pane_cp2_ParamLimits

0x8ede,	// (0x00043d87) list_single_pane_cp2

0x8f73,	// (0x00043e1c) bg_popup_sub_pane_cp22

0x5fdb,	// (0x00040e84) popup_side_volume_key_window_g1

0x6005,	// (0x00040eae) popup_side_volume_key_window_t1

0x6021,	// (0x00040eca) volume_small_pane_cp1

0x820c,	// (0x000430b5) bg_popup_sub_pane_cp24_ParamLimits

0x820c,	// (0x000430b5) bg_popup_sub_pane_cp24

0x8f89,	// (0x00043e32) fep_china_uni_candidate_pane_ParamLimits

0x8f89,	// (0x00043e32) fep_china_uni_candidate_pane

0x8f9d,	// (0x00043e46) fep_china_uni_entry_pane

0x8fad,	// (0x00043e56) popup_fep_china_uni_window_g1

0x8fc9,	// (0x00043e72) fep_china_uni_entry_pane_g1

0x8fd1,	// (0x00043e7a) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0004a5d0) fep_china_uni_entry_pane_g

0x8fd9,	// (0x00043e82) fep_entry_item_pane

0x8fe3,	// (0x00043e8c) fep_candidate_item_pane

0x8feb,	// (0x00043e94) fep_china_uni_candidate_pane_g1

0x8ff3,	// (0x00043e9c) fep_china_uni_candidate_pane_g2

0x8ffb,	// (0x00043ea4) fep_china_uni_candidate_pane_g3

0x9003,	// (0x00043eac) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0004a5d5) fep_china_uni_candidate_pane_g

0x7ea7,	// (0x00042d50) fep_entry_item_pane_g1

0x900b,	// (0x00043eb4) fep_entry_item_pane_t1_ParamLimits

0x900b,	// (0x00043eb4) fep_entry_item_pane_t1

0x9021,	// (0x00043eca) fep_candidate_item_pane_t1_ParamLimits

0x9021,	// (0x00043eca) fep_candidate_item_pane_t1

0x9036,	// (0x00043edf) fep_candidate_item_pane_t2_ParamLimits

0x9036,	// (0x00043edf) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0004a5de) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0004a5de) fep_candidate_item_pane_t

0x7f91,	// (0x00042e3a) list_highlight_pane_cp31_ParamLimits

0x7f91,	// (0x00042e3a) list_highlight_pane_cp31

0x9048,	// (0x00043ef1) level_1_signal_lsc

0x9051,	// (0x00043efa) level_2_signal_lsc

0x905a,	// (0x00043f03) level_3_signal_lsc

0x9063,	// (0x00043f0c) level_4_signal_lsc

0x906c,	// (0x00043f15) level_5_signal_lsc

0x9075,	// (0x00043f1e) level_6_signal_lsc

0x907e,	// (0x00043f27) level_7_signal_lsc

0x907e,	// (0x00043f27) level_1_battery_lsc

0x9087,	// (0x00043f30) level_2_battery_lsc

0x9090,	// (0x00043f39) level_3_battery_lsc

0x9099,	// (0x00043f42) level_4_battery_lsc

0x90a2,	// (0x00043f4b) level_5_battery_lsc

0x90ab,	// (0x00043f54) level_6_battery_lsc

0x9048,	// (0x00043ef1) level_7_battery_lsc

0x90b4,	// (0x00043f5d) scroll_handle_focus_pane_g1

0x90bd,	// (0x00043f66) scroll_handle_focus_pane_g2

0x90c6,	// (0x00043f6f) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0004a5e3) scroll_handle_focus_pane_g

0x4fdc,	// (0x0003fe85) list_single_2graphic_pane_g1_ParamLimits

0x4fdc,	// (0x0003fe85) list_single_2graphic_pane_g1

0x5d0a,	// (0x00040bb3) list_single_2graphic_pane_g2_ParamLimits

0x5d0a,	// (0x00040bb3) list_single_2graphic_pane_g2

0x5cec,	// (0x00040b95) list_single_2graphic_pane_g3_ParamLimits

0x5cec,	// (0x00040b95) list_single_2graphic_pane_g3

0x4fe8,	// (0x0003fe91) list_single_2graphic_pane_g4_ParamLimits

0x4fe8,	// (0x0003fe91) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0004a5ea) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0004a5ea) list_single_2graphic_pane_g

0x4ff4,	// (0x0003fe9d) list_single_2graphic_pane_t1_ParamLimits

0x4ff4,	// (0x0003fe9d) list_single_2graphic_pane_t1

0x6029,	// (0x00040ed2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6029,	// (0x00040ed2) list_double2_graphic_large_graphic_pane_g1

0x4b79,	// (0x0003fa22) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4b79,	// (0x0003fa22) list_double2_graphic_large_graphic_pane_g2

0x5d53,	// (0x00040bfc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5d53,	// (0x00040bfc) list_double2_graphic_large_graphic_pane_g3

0x6039,	// (0x00040ee2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6039,	// (0x00040ee2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0004a5f3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0004a5f3) list_double2_graphic_large_graphic_pane_g

0x5022,	// (0x0003fecb) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5022,	// (0x0003fecb) list_double2_graphic_large_graphic_pane_t1

0x5038,	// (0x0003fee1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5038,	// (0x0003fee1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0004a5fc) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0004a5fc) list_double2_graphic_large_graphic_pane_t

0x920e,	// (0x000440b7) popup_fast_swap_window_ParamLimits

0x920e,	// (0x000440b7) popup_fast_swap_window

0x922a,	// (0x000440d3) popup_side_volume_key_window

0x9246,	// (0x000440ef) stacon_top_pane

0x9250,	// (0x000440f9) status_pane_ParamLimits

0x9250,	// (0x000440f9) status_pane

0x925e,	// (0x00044107) status_small_pane

0x7eb1,	// (0x00042d5a) control_pane

0x7eb1,	// (0x00042d5a) stacon_bottom_pane

0x87ef,	// (0x00043698) scroll_pane_cp121

0x87e6,	// (0x0004368f) set_content_pane

0x90cf,	// (0x00043f78) bg_active_tab_pane_g1_cp1

0x90d8,	// (0x00043f81) bg_active_tab_pane_g2_cp1

0x90e1,	// (0x00043f8a) bg_active_tab_pane_g3_cp1

0x90cf,	// (0x00043f78) bg_passive_tab_pane_g1_cp1

0x90d8,	// (0x00043f81) bg_passive_tab_pane_g2_cp1

0x90e1,	// (0x00043f8a) bg_passive_tab_pane_g3_cp1

0x90ea,	// (0x00043f93) bg_active_tab_pane_g1_cp2

0x90d8,	// (0x00043f81) bg_active_tab_pane_g2_cp2

0x90f3,	// (0x00043f9c) bg_active_tab_pane_g3_cp2

0x90ea,	// (0x00043f93) bg_passive_tab_pane_g1_cp2

0x90d8,	// (0x00043f81) bg_passive_tab_pane_g2_cp2

0x90f3,	// (0x00043f9c) bg_passive_tab_pane_g3_cp2

0x90fc,	// (0x00043fa5) bg_active_tab_pane_g1_cp3

0x90d8,	// (0x00043f81) bg_active_tab_pane_g2_cp3

0x9105,	// (0x00043fae) bg_active_tab_pane_g3_cp3

0x90fc,	// (0x00043fa5) bg_passive_tab_pane_g1_cp3

0x90d8,	// (0x00043f81) bg_passive_tab_pane_g2_cp3

0x9105,	// (0x00043fae) bg_passive_tab_pane_g3_cp3

0x910e,	// (0x00043fb7) bg_active_tab_pane_g1_cp4

0x90d8,	// (0x00043f81) bg_active_tab_pane_g2_cp4

0x9119,	// (0x00043fc2) bg_active_tab_pane_g3_cp4

0x910e,	// (0x00043fb7) bg_passive_tab_pane_g1_cp4

0x90d8,	// (0x00043f81) bg_passive_tab_pane_g2_cp4

0x9119,	// (0x00043fc2) bg_passive_tab_pane_g3_cp4

0x9162,	// (0x0004400b) bg_active_tab_pane_g1_cp5

0x90d8,	// (0x00043f81) bg_active_tab_pane_g2_cp5

0x916b,	// (0x00044014) bg_active_tab_pane_g3_cp5

0x9162,	// (0x0004400b) bg_passive_tab_pane_g1_cp5

0x90d8,	// (0x00043f81) bg_passive_tab_pane_g2_cp5

0x916b,	// (0x00044014) bg_passive_tab_pane_g3_cp5

0x9174,	// (0x0004401d) list_set_graphic_pane_ParamLimits

0x9174,	// (0x0004401d) list_set_graphic_pane

0x7eb1,	// (0x00042d5a) bg_set_opt_pane_cp4

0x9191,	// (0x0004403a) list_set_graphic_pane_g1_ParamLimits

0x9191,	// (0x0004403a) list_set_graphic_pane_g1

0x919d,	// (0x00044046) list_set_graphic_pane_g2_ParamLimits

0x919d,	// (0x00044046) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0004a601) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0004a601) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x0004a976) volume_small_pane_cp_g

0x91c1,	// (0x0004406a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91c1,	// (0x0004406a) list_double2_large_graphic_pane_g1_cp2

0x91cd,	// (0x00044076) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91cd,	// (0x00044076) list_double2_large_graphic_pane_g2_cp2

0x91de,	// (0x00044087) list_double2_large_graphic_pane_g3_cp2

0x91e6,	// (0x0004408f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x91e6,	// (0x0004408f) list_double2_large_graphic_pane_t1_cp2

0x91fc,	// (0x000440a5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91fc,	// (0x000440a5) list_double2_large_graphic_pane_t2_cp2

0xadcc,	// (0x00045c75) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadcc,	// (0x00045c75) list_double_large_graphic_pane_g1_cp2

0xaddd,	// (0x00045c86) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaddd,	// (0x00045c86) list_double_large_graphic_pane_g2_cp2

0x9377,	// (0x00044220) list_double_large_graphic_pane_g3_cp2

0xadee,	// (0x00045c97) list_double_large_graphic_pane_g4_cp

0xadf6,	// (0x00045c9f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xadf6,	// (0x00045c9f) list_double_large_graphic_pane_t1_cp2

0xae0d,	// (0x00045cb6) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae0d,	// (0x00045cb6) list_double_large_graphic_pane_t2_cp2

0x9269,	// (0x00044112) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9269,	// (0x00044112) list_double2_graphic_pane_g1_cp2

0x9277,	// (0x00044120) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9277,	// (0x00044120) list_double2_graphic_pane_g2_cp2

0x9288,	// (0x00044131) list_double2_graphic_pane_g3_cp2

0x9292,	// (0x0004413b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9292,	// (0x0004413b) list_double2_graphic_pane_t1_cp2

0x92a8,	// (0x00044151) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92a8,	// (0x00044151) list_double2_graphic_pane_t2_cp2

0x92ba,	// (0x00044163) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92ba,	// (0x00044163) list_single_number_heading_pane_g1_cp2

0x92c6,	// (0x0004416f) list_single_number_heading_pane_g2_cp2

0x92ce,	// (0x00044177) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92ce,	// (0x00044177) list_single_number_heading_pane_t1_cp2

0x92e4,	// (0x0004418d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x92e4,	// (0x0004418d) list_single_number_heading_pane_t2_cp2

0x92f6,	// (0x0004419f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92f6,	// (0x0004419f) list_single_number_heading_pane_t3_cp2

0x92ba,	// (0x00044163) list_single_heading_pane_g1_cp2_ParamLimits

0x92ba,	// (0x00044163) list_single_heading_pane_g1_cp2

0x92c6,	// (0x0004416f) list_single_heading_pane_g2_cp2

0x92ce,	// (0x00044177) list_single_heading_pane_t1_cp2_ParamLimits

0x92ce,	// (0x00044177) list_single_heading_pane_t1_cp2

0xabd4,	// (0x00045a7d) list_single_heading_pane_t2_cp2_ParamLimits

0xabd4,	// (0x00045a7d) list_single_heading_pane_t2_cp2

0xab1c,	// (0x000459c5) list_double_graphic_pane_g1_cp2_ParamLimits

0xab1c,	// (0x000459c5) list_double_graphic_pane_g1_cp2

0xab28,	// (0x000459d1) list_double_graphic_pane_g2_cp2_ParamLimits

0xab28,	// (0x000459d1) list_double_graphic_pane_g2_cp2

0xab37,	// (0x000459e0) list_double_graphic_pane_g3_cp2

0xab3f,	// (0x000459e8) list_double_graphic_pane_t1_cp2_ParamLimits

0xab3f,	// (0x000459e8) list_double_graphic_pane_t1_cp2

0xab55,	// (0x000459fe) list_double_graphic_pane_t2_cp2_ParamLimits

0xab55,	// (0x000459fe) list_double_graphic_pane_t2_cp2

0x936b,	// (0x00044214) list_double_number_pane_g1_cp2_ParamLimits

0x936b,	// (0x00044214) list_double_number_pane_g1_cp2

0x9377,	// (0x00044220) list_double_number_pane_g2_cp2

0xaae0,	// (0x00045989) list_double_number_pane_t1_cp2_ParamLimits

0xaae0,	// (0x00045989) list_double_number_pane_t1_cp2

0xaaf4,	// (0x0004599d) list_double_number_pane_t2_cp2_ParamLimits

0xaaf4,	// (0x0004599d) list_double_number_pane_t2_cp2

0xab0a,	// (0x000459b3) list_double_number_pane_t3_cp2_ParamLimits

0xab0a,	// (0x000459b3) list_double_number_pane_t3_cp2

0xa9c9,	// (0x00045872) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9c9,	// (0x00045872) list_single_graphic_pane_g1_cp2

0x93cf,	// (0x00044278) list_single_graphic_pane_g2_cp2_ParamLimits

0x93cf,	// (0x00044278) list_single_graphic_pane_g2_cp2

0x93db,	// (0x00044284) list_single_graphic_pane_g3_cp2

0xa99f,	// (0x00045848) list_single_graphic_pane_t1_cp2_ParamLimits

0xa99f,	// (0x00045848) list_single_graphic_pane_t1_cp2

0x93cf,	// (0x00044278) list_single_number_pane_g1_cp2_ParamLimits

0x93cf,	// (0x00044278) list_single_number_pane_g1_cp2

0x93db,	// (0x00044284) list_single_number_pane_g2_cp2

0xa99f,	// (0x00045848) list_single_number_pane_t1_cp2_ParamLimits

0xa99f,	// (0x00045848) list_single_number_pane_t1_cp2

0xa9b5,	// (0x0004585e) list_single_number_pane_t2_cp2_ParamLimits

0xa9b5,	// (0x0004585e) list_single_number_pane_t2_cp2

0x91cd,	// (0x00044076) list_double2_pane_g1_cp2_ParamLimits

0x91cd,	// (0x00044076) list_double2_pane_g1_cp2

0x91de,	// (0x00044087) list_double2_pane_g2_cp2

0x9343,	// (0x000441ec) list_double2_pane_t1_cp2_ParamLimits

0x9343,	// (0x000441ec) list_double2_pane_t1_cp2

0x9359,	// (0x00044202) list_double2_pane_t2_cp2_ParamLimits

0x9359,	// (0x00044202) list_double2_pane_t2_cp2

0x936b,	// (0x00044214) list_double_pane_g1_cp2_ParamLimits

0x936b,	// (0x00044214) list_double_pane_g1_cp2

0x9377,	// (0x00044220) list_double_pane_g2_cp2

0x937f,	// (0x00044228) list_double_pane_t1_cp2_ParamLimits

0x937f,	// (0x00044228) list_double_pane_t1_cp2

0x9395,	// (0x0004423e) list_double_pane_t2_cp2_ParamLimits

0x9395,	// (0x0004423e) list_double_pane_t2_cp2

0x93bf,	// (0x00044268) list_single_pane_cp2_g3

0x93cf,	// (0x00044278) list_single_pane_g1_cp2_ParamLimits

0x93cf,	// (0x00044278) list_single_pane_g1_cp2

0x93db,	// (0x00044284) list_single_pane_g2_cp2

0x93e3,	// (0x0004428c) list_single_pane_t1_cp2_ParamLimits

0x93e3,	// (0x0004428c) list_single_pane_t1_cp2

0x93fb,	// (0x000442a4) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93fb,	// (0x000442a4) list_single_large_graphic_pane_g1_cp2

0x9407,	// (0x000442b0) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9407,	// (0x000442b0) list_single_large_graphic_pane_g2_cp2

0x9413,	// (0x000442bc) list_single_large_graphic_pane_g3_cp2

0x941b,	// (0x000442c4) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x941b,	// (0x000442c4) list_single_large_graphic_pane_g4_cp1

0x9435,	// (0x000442de) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9435,	// (0x000442de) list_single_large_graphic_pane_t1_cp2

0xa96b,	// (0x00045814) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa96b,	// (0x00045814) list_single_graphic_heading_pane_g1_cp2

0xa938,	// (0x000457e1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa938,	// (0x000457e1) list_single_graphic_heading_pane_g4_cp2

0x93db,	// (0x00044284) list_single_graphic_heading_pane_g5_cp2

0xa977,	// (0x00045820) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa977,	// (0x00045820) list_single_graphic_heading_pane_t1_cp2

0xa98d,	// (0x00045836) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa98d,	// (0x00045836) list_single_graphic_heading_pane_t2_cp2

0xa92c,	// (0x000457d5) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa92c,	// (0x000457d5) list_single_2graphic_pane_g1_cp2

0xa938,	// (0x000457e1) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa938,	// (0x000457e1) list_single_2graphic_pane_g2_cp2

0x93db,	// (0x00044284) list_single_2graphic_pane_g3_cp2

0xa949,	// (0x000457f2) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa949,	// (0x000457f2) list_single_2graphic_pane_g4_cp2

0xa955,	// (0x000457fe) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa955,	// (0x000457fe) list_single_2graphic_pane_t1_cp2

0x7ea7,	// (0x00042d50) list_highlight_pane_g10_cp1

0xa504,	// (0x000453ad) list_highlight_pane_g1_cp1

0xa50c,	// (0x000453b5) list_highlight_pane_g2_cp1

0xa514,	// (0x000453bd) list_highlight_pane_g3_cp1

0xa51c,	// (0x000453c5) list_highlight_pane_g4_cp1

0xa524,	// (0x000453cd) list_highlight_pane_g5_cp1

0xa52c,	// (0x000453d5) list_highlight_pane_g6_cp1

0xa534,	// (0x000453dd) list_highlight_pane_g7_cp1

0xa53c,	// (0x000453e5) list_highlight_pane_g8_cp1

0xa544,	// (0x000453ed) list_highlight_pane_g9_cp1

0xa418,	// (0x000452c1) form_field_slider_pane_t3

0xa426,	// (0x000452cf) form_field_slider_pane_t4

0xa434,	// (0x000452dd) slider_form_pane_ParamLimits

0xa434,	// (0x000452dd) slider_form_pane

0x7eb1,	// (0x00042d5a) control_abbreviations

0x7eb1,	// (0x00042d5a) control_conventions

0x7eb1,	// (0x00042d5a) control_definitions

0x7eb1,	// (0x00042d5a) format_table_attribute

0xac1e,	// (0x00045ac7) bg_popup_preview_window_pane_g9

0x7eb1,	// (0x00042d5a) format_table_data2

0x7eb1,	// (0x00042d5a) format_table_data3

0x7eb1,	// (0x00042d5a) format_table_data_example

0x0008,

0x7eb1,	// (0x00042d5a) intro_purpose

0xf8f4,	// (0x0004a79d) bg_popup_preview_window_pane_g

0x7eb1,	// (0x00042d5a) texts_category

0x7eb1,	// (0x00042d5a) texts_graphics

0x944b,	// (0x000442f4) text_digital

0x945a,	// (0x00044303) text_primary

0x9469,	// (0x00044312) text_primary_small

0x9478,	// (0x00044321) text_secondary

0x9487,	// (0x00044330) text_title

0xb304,	// (0x000461ad) bg_passive_tab_pane_g1_cp3_srt

0x90d8,	// (0x00043f81) bg_passive_tab_pane_g2_cp3_srt

0xb30d,	// (0x000461b6) bg_passive_tab_pane_g3_cp3_srt

0x7f91,	// (0x00042e3a) bg_active_tab_pane_cp3_srt_ParamLimits

0x7f91,	// (0x00042e3a) bg_active_tab_pane_cp3_srt

0xb316,	// (0x000461bf) tabs_4_active_pane_srt_g1

0xb31e,	// (0x000461c7) tabs_4_active_pane_srt_t1_ParamLimits

0xb31e,	// (0x000461c7) tabs_4_active_pane_srt_t1

0xb304,	// (0x000461ad) bg_active_tab_pane_g1_cp3_copy1

0x90d8,	// (0x00043f81) bg_active_tab_pane_g2_cp3_copy1

0xb30d,	// (0x000461b6) bg_active_tab_pane_g3_cp3_copy1

0x7f91,	// (0x00042e3a) tabs_2_long_active_pane_srt_ParamLimits

0x7f91,	// (0x00042e3a) tabs_2_long_active_pane_srt

0x7f91,	// (0x00042e3a) tabs_2_long_passive_pane_srt_ParamLimits

0x7f91,	// (0x00042e3a) tabs_2_long_passive_pane_srt

0x89e4,	// (0x0004388d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x89e4,	// (0x0004388d) bg_passive_tab_pane_cp4_srt

0xb04d,	// (0x00045ef6) bg_passive_tab_pane_g1_cp4_srt

0x90d8,	// (0x00043f81) bg_passive_tab_pane_g2_cp4_srt

0xb056,	// (0x00045eff) bg_passive_tab_pane_g3_cp4_srt

0x89c3,	// (0x0004386c) bg_active_tab_pane_cp4_srt_ParamLimits

0x89c3,	// (0x0004386c) bg_active_tab_pane_cp4_srt

0xb05f,	// (0x00045f08) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb05f,	// (0x00045f08) tabs_2_long_active_pane_srt_t1

0xb04d,	// (0x00045ef6) bg_active_tab_pane_g1_cp4_srt

0x90d8,	// (0x00043f81) bg_active_tab_pane_g2_cp4_srt

0xb056,	// (0x00045eff) bg_active_tab_pane_g3_cp4_srt

0x820c,	// (0x000430b5) tabs_3_long_active_pane_srt_ParamLimits

0x820c,	// (0x000430b5) tabs_3_long_active_pane_srt

0x820c,	// (0x000430b5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x820c,	// (0x000430b5) tabs_3_long_passive_pane_cp_srt

0x820c,	// (0x000430b5) tabs_3_long_passive_pane_srt_ParamLimits

0x820c,	// (0x000430b5) tabs_3_long_passive_pane_srt

0x89e4,	// (0x0004388d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x89e4,	// (0x0004388d) bg_passive_tab_pane_cp5_srt

0x9162,	// (0x0004400b) bg_passive_tab_pane_g1_cp5_srt

0x90d8,	// (0x00043f81) bg_passive_tab_pane_g2_cp5_srt

0x916b,	// (0x00044014) bg_passive_tab_pane_g3_cp5_srt

0x89c3,	// (0x0004386c) bg_active_tab_pane_cp5_srt_ParamLimits

0x89c3,	// (0x0004386c) bg_active_tab_pane_cp5_srt

0xb03b,	// (0x00045ee4) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb03b,	// (0x00045ee4) tabs_3_long_active_pane_srt_t1

0x9162,	// (0x0004400b) bg_active_tab_pane_g1_cp5_srt

0x90d8,	// (0x00043f81) bg_active_tab_pane_g2_cp5_srt

0x916b,	// (0x00044014) bg_active_tab_pane_g3_cp5_srt

0xb02d,	// (0x00045ed6) navi_text_pane_srt_t1

0xb025,	// (0x00045ece) navi_icon_pane_srt_g1

0x9650,	// (0x000444f9) midp_editing_number_pane_srt

0x9496,	// (0x0004433f) midp_ticker_pane_srt

0x9658,	// (0x00044501) midp_ticker_pane_srt_g1

0x9660,	// (0x00044509) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0004a620) midp_ticker_pane_srt_g

0x9668,	// (0x00044511) midp_ticker_pane_srt_t1

0xb016,	// (0x00045ebf) midp_editing_number_pane_t1_copy1

0x89e4,	// (0x0004388d) listscroll_midp_pane

0x89e4,	// (0x0004388d) midp_form_pane

0x9502,	// (0x000443ab) midp_info_popup_window_ParamLimits

0x9502,	// (0x000443ab) midp_info_popup_window

0x88ac,	// (0x00043755) bg_popup_sub_pane_cp50_ParamLimits

0x88ac,	// (0x00043755) bg_popup_sub_pane_cp50

0xa130,	// (0x00044fd9) listscroll_midp_info_pane_ParamLimits

0xa130,	// (0x00044fd9) listscroll_midp_info_pane

0xa118,	// (0x00044fc1) listscroll_form_midp_pane_ParamLimits

0xa118,	// (0x00044fc1) listscroll_form_midp_pane

0xa124,	// (0x00044fcd) scroll_bar_cp050

0xa0f8,	// (0x00044fa1) list_midp_pane

0xbd59,	// (0x00046c02) signal_pane_g2_cp

0xa032,	// (0x00044edb) listscroll_midp_info_pane_t1_ParamLimits

0xa032,	// (0x00044edb) listscroll_midp_info_pane_t1

0xa04a,	// (0x00044ef3) listscroll_midp_info_pane_t2_ParamLimits

0xa04a,	// (0x00044ef3) listscroll_midp_info_pane_t2

0xa088,	// (0x00044f31) listscroll_midp_info_pane_t3_ParamLimits

0xa088,	// (0x00044f31) listscroll_midp_info_pane_t3

0xa0c2,	// (0x00044f6b) listscroll_midp_info_pane_t4_ParamLimits

0xa0c2,	// (0x00044f6b) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x0004a6d8) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x0004a6d8) listscroll_midp_info_pane_t

0x8970,	// (0x00043819) scroll_pane_cp21

0x9fd0,	// (0x00044e79) form_midp_field_choice_group_pane

0x9fd9,	// (0x00044e82) form_midp_field_text_pane

0xa018,	// (0x00044ec1) form_midp_field_time_pane

0xa020,	// (0x00044ec9) form_midp_gauge_slider_pane

0xa029,	// (0x00044ed2) form_midp_gauge_wait_pane

0x7eb1,	// (0x00042d5a) form_midp_image_pane

0x5197,	// (0x00040040) list_single_midp_pane_ParamLimits

0x5197,	// (0x00040040) list_single_midp_pane

0x9f88,	// (0x00044e31) form_midp_field_text_pane_t1

0x9d52,	// (0x00044bfb) input_focus_pane_cp050

0x9fbf,	// (0x00044e68) list_midp_form_text_pane

0x9f57,	// (0x00044e00) form_midp_field_choice_group_pane_t1

0x9f65,	// (0x00044e0e) input_focus_pane_cp051

0x9f79,	// (0x00044e22) list_midp_choice_pane

0x7eb1,	// (0x00042d5a) status_idle_pane

0x9f3b,	// (0x00044de4) form_midp_field_time_pane_t1

0x7ea7,	// (0x00042d50) wait_anim_pane_g2_copy1

0x9f49,	// (0x00044df2) form_midp_field_time_pane_t2

0x0001,

0x95b0,	// (0x00044459) aid_navinavi_width_2_pane

0xf82a,	// (0x0004a6d3) form_midp_field_time_pane_t

0x7eb1,	// (0x00042d5a) input_focus_pane_cp052

0x7eb1,	// (0x00042d5a) bg_input_focus_pane_cp040

0x9efb,	// (0x00044da4) form_midp_gauge_slider_pane_t1

0x9f09,	// (0x00044db2) form_midp_gauge_slider_pane_t2

0x9f17,	// (0x00044dc0) form_midp_gauge_slider_pane_t3

0x9f25,	// (0x00044dce) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0004a6ca) form_midp_gauge_slider_pane_t

0x9f33,	// (0x00044ddc) form_midp_slider_pane

0x7f91,	// (0x00042e3a) bg_input_focus_pane_cp041_ParamLimits

0x7f91,	// (0x00042e3a) bg_input_focus_pane_cp041

0x9ec8,	// (0x00044d71) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ec8,	// (0x00044d71) form_midp_gauge_wait_pane_t1

0x9eda,	// (0x00044d83) form_midp_gauge_wait_pane_t2_ParamLimits

0x9eda,	// (0x00044d83) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x0004a6c5) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x0004a6c5) form_midp_gauge_wait_pane_t

0x9eec,	// (0x00044d95) form_midp_wait_pane_ParamLimits

0x9eec,	// (0x00044d95) form_midp_wait_pane

0x9e92,	// (0x00044d3b) form_midp_image_pane_g1

0x9e9b,	// (0x00044d44) form_midp_image_pane_t1

0x9eaa,	// (0x00044d53) form_midp_image_pane_t2

0x9eb9,	// (0x00044d62) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0004a6be) form_midp_image_pane_t

0x9e89,	// (0x00044d32) list_single_midp_pane_g1

0x5188,	// (0x00040031) list_single_midp_pane_t1

0x9e61,	// (0x00044d0a) list_midp_form_item_pane_ParamLimits

0x9e61,	// (0x00044d0a) list_midp_form_item_pane

0x9558,	// (0x00044401) list_midp_form_item_pane_t1

0x9567,	// (0x00044410) midp_ticker_pane_g1

0x9573,	// (0x0004441c) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0004a606) midp_ticker_pane_g

0x957f,	// (0x00044428) midp_ticker_pane_t1

0xb267,	// (0x00046110) midp_editing_number_pane_t1

0xb245,	// (0x000460ee) midp_editing_number_pane

0xb254,	// (0x000460fd) midp_ticker_pane

0xb006,	// (0x00045eaf) ai_message_heading_pane

0x7eb1,	// (0x00042d5a) bg_popup_window_pane_cp14

0xb00e,	// (0x00045eb7) listscroll_ai_message_pane

0xaf90,	// (0x00045e39) ai_message_heading_pane_g1_ParamLimits

0xaf90,	// (0x00045e39) ai_message_heading_pane_g1

0xaf9c,	// (0x00045e45) ai_message_heading_pane_g2_ParamLimits

0xaf9c,	// (0x00045e45) ai_message_heading_pane_g2

0xafa8,	// (0x00045e51) ai_message_heading_pane_g3_ParamLimits

0xafa8,	// (0x00045e51) ai_message_heading_pane_g3

0xafb4,	// (0x00045e5d) ai_message_heading_pane_g4_ParamLimits

0xafb4,	// (0x00045e5d) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x0004a7ff) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x0004a7ff) ai_message_heading_pane_g

0xafc0,	// (0x00045e69) ai_message_heading_pane_t1_ParamLimits

0xafc0,	// (0x00045e69) ai_message_heading_pane_t1

0xafda,	// (0x00045e83) ai_message_heading_pane_t2_ParamLimits

0xafda,	// (0x00045e83) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x0004a808) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x0004a808) ai_message_heading_pane_t

0xafec,	// (0x00045e95) bg_popup_heading_pane_cp1_ParamLimits

0xafec,	// (0x00045e95) bg_popup_heading_pane_cp1

0xaf7e,	// (0x00045e27) list_ai_message_pane_ParamLimits

0xaf7e,	// (0x00045e27) list_ai_message_pane

0x8970,	// (0x00043819) scroll_pane_cp10

0xaf1a,	// (0x00045dc3) list_ai_message_pane_g1

0xaf22,	// (0x00045dcb) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0004a7dc) list_ai_message_pane_g

0xaf2a,	// (0x00045dd3) list_ai_message_pane_t1_ParamLimits

0xaf2a,	// (0x00045dd3) list_ai_message_pane_t1

0xaf3f,	// (0x00045de8) list_ai_message_pane_t2_ParamLimits

0xaf3f,	// (0x00045de8) list_ai_message_pane_t2

0xaf54,	// (0x00045dfd) list_ai_message_pane_t3_ParamLimits

0xaf54,	// (0x00045dfd) list_ai_message_pane_t3

0xaf69,	// (0x00045e12) list_ai_message_pane_t4_ParamLimits

0xaf69,	// (0x00045e12) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0004a7e1) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0004a7e1) list_ai_message_pane_t

0xaf05,	// (0x00045dae) cell_ai_soft_ind_pane_ParamLimits

0xaf05,	// (0x00045dae) cell_ai_soft_ind_pane

0x9591,	// (0x0004443a) cell_ai_soft_ind_pane_g1_ParamLimits

0x9591,	// (0x0004443a) cell_ai_soft_ind_pane_g1

0x7eb1,	// (0x00042d5a) grid_highlight_cp1

0x959e,	// (0x00044447) text_secondary_cp56_ParamLimits

0x959e,	// (0x00044447) text_secondary_cp56

0xaeda,	// (0x00045d83) example_general_pane_ParamLimits

0xaeda,	// (0x00045d83) example_general_pane

0xaee6,	// (0x00045d8f) example_parent_pane_g1_ParamLimits

0xaee6,	// (0x00045d8f) example_parent_pane_g1

0xaef2,	// (0x00045d9b) example_parent_pane_t1_ParamLimits

0xaef2,	// (0x00045d9b) example_parent_pane_t1

0x672c,	// (0x000415d5) popup_preview_text_window_ParamLimits

0x672c,	// (0x000415d5) popup_preview_text_window

0x93c7,	// (0x00044270) list_single_pane_cp2_g4

0x82c2,	// (0x0004316b) bg_popup_preview_window_pane_ParamLimits

0x82c2,	// (0x0004316b) bg_popup_preview_window_pane

0xac26,	// (0x00045acf) popup_preview_text_window_t1_ParamLimits

0xac26,	// (0x00045acf) popup_preview_text_window_t1

0xac44,	// (0x00045aed) popup_preview_text_window_t2_ParamLimits

0xac44,	// (0x00045aed) popup_preview_text_window_t2

0xac8d,	// (0x00045b36) popup_preview_text_window_t3_ParamLimits

0xac8d,	// (0x00045b36) popup_preview_text_window_t3

0xacd2,	// (0x00045b7b) popup_preview_text_window_t4_ParamLimits

0xacd2,	// (0x00045b7b) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0004a7b0) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0004a7b0) popup_preview_text_window_t

0xad50,	// (0x00045bf9) scroll_pane_cp11

0x9cde,	// (0x00044b87) bg_popup_preview_window_pane_g1

0xabe6,	// (0x00045a8f) bg_popup_preview_window_pane_g2

0xabee,	// (0x00045a97) bg_popup_preview_window_pane_g3

0xabf6,	// (0x00045a9f) bg_popup_preview_window_pane_g4

0xabfe,	// (0x00045aa7) bg_popup_preview_window_pane_g5

0xac06,	// (0x00045aaf) bg_popup_preview_window_pane_g6

0xac0e,	// (0x00045ab7) bg_popup_preview_window_pane_g7

0xac16,	// (0x00045abf) bg_popup_preview_window_pane_g8

0x586c,	// (0x00040715) aid_popup_width_pane

0x670a,	// (0x000415b3) popup_midp_note_alarm_window_ParamLimits

0x670a,	// (0x000415b3) popup_midp_note_alarm_window

0x8800,	// (0x000436a9) data_form_pane_ParamLimits

0x4e25,	// (0x0003fcce) form_field_data_pane_g1

0x4e2f,	// (0x0003fcd8) form_field_data_pane_t1_ParamLimits

0x880c,	// (0x000436b5) input_focus_pane_ParamLimits

0x4e47,	// (0x0003fcf0) data_form_wide_pane_ParamLimits

0x4e58,	// (0x0003fd01) form_field_data_wide_pane_g1

0x4e64,	// (0x0003fd0d) form_field_data_wide_pane_t1_ParamLimits

0x8571,	// (0x0004341a) input_focus_pane_cp6_ParamLimits

0x891d,	// (0x000437c6) input_popup_find_pane_g1_ParamLimits

0x891d,	// (0x000437c6) input_popup_find_pane_g1

0x5e8a,	// (0x00040d33) aid_navi_side_left_pane

0x5e9f,	// (0x00040d48) aid_navi_side_right_pane

0xa5ff,	// (0x000454a8) bg_popup_window_pane_cp30_ParamLimits

0xa5ff,	// (0x000454a8) bg_popup_window_pane_cp30

0xa679,	// (0x00045522) popup_midp_note_alarm_window_g1_ParamLimits

0xa679,	// (0x00045522) popup_midp_note_alarm_window_g1

0xa6a9,	// (0x00045552) popup_midp_note_alarm_window_t1_ParamLimits

0xa6a9,	// (0x00045552) popup_midp_note_alarm_window_t1

0xa74a,	// (0x000455f3) popup_midp_note_alarm_window_t2_ParamLimits

0xa74a,	// (0x000455f3) popup_midp_note_alarm_window_t2

0xa7f8,	// (0x000456a1) popup_midp_note_alarm_window_t3_ParamLimits

0xa7f8,	// (0x000456a1) popup_midp_note_alarm_window_t3

0xa82a,	// (0x000456d3) popup_midp_note_alarm_window_t4_ParamLimits

0xa82a,	// (0x000456d3) popup_midp_note_alarm_window_t4

0xa850,	// (0x000456f9) popup_midp_note_alarm_window_t5_ParamLimits

0xa850,	// (0x000456f9) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x0004a74d) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x0004a74d) popup_midp_note_alarm_window_t

0xa8fc,	// (0x000457a5) wait_bar_pane_cp1_ParamLimits

0xa8fc,	// (0x000457a5) wait_bar_pane_cp1

0x7eb1,	// (0x00042d5a) wait_anim_pane_copy1

0x7eb1,	// (0x00042d5a) wait_border_pane_copy1

0xa2d9,	// (0x00045182) wait_border_pane_g1_copy1

0x4e7e,	// (0x0003fd27) form_field_popup_pane_g1

0x4e86,	// (0x0003fd2f) form_field_popup_pane_t1_ParamLimits

0x880c,	// (0x000436b5) input_focus_pane_cp7_ParamLimits

0x882e,	// (0x000436d7) list_form_pane_ParamLimits

0x4e9e,	// (0x0003fd47) form_field_popup_wide_pane_g1

0x4ea6,	// (0x0003fd4f) form_field_popup_wide_pane_t1_ParamLimits

0x880c,	// (0x000436b5) input_focus_pane_cp8_ParamLimits

0x883a,	// (0x000436e3) list_form_wide_pane_ParamLimits

0xb39c,	// (0x00046245) aid_size_cell_graphic_pane

0x4f30,	// (0x0003fdd9) data_form_pane_t1_ParamLimits

0x51ea,	// (0x00040093) data_form_wide_pane_t1_ParamLimits

0x98ab,	// (0x00044754) bg_status_flat_pane

0x7ef1,	// (0x00042d9a) title_pane_t1_ParamLimits

0x7f59,	// (0x00042e02) title_pane_t2_ParamLimits

0x7f7f,	// (0x00042e28) title_pane_t3_ParamLimits

0xf557,	// (0x0004a400) title_pane_t_ParamLimits

0x8def,	// (0x00043c98) level_1_signal_ParamLimits

0x8e01,	// (0x00043caa) level_2_signal_ParamLimits

0x8e14,	// (0x00043cbd) level_3_signal_ParamLimits

0x8e27,	// (0x00043cd0) level_4_signal_ParamLimits

0x8e3a,	// (0x00043ce3) level_5_signal_ParamLimits

0x8e4d,	// (0x00043cf6) level_6_signal_ParamLimits

0x8e60,	// (0x00043d09) level_7_signal_ParamLimits

0x8def,	// (0x00043c98) level_1_battery_ParamLimits

0x8e01,	// (0x00043caa) level_2_battery_ParamLimits

0x8e14,	// (0x00043cbd) level_3_battery_ParamLimits

0x8e27,	// (0x00043cd0) level_4_battery_ParamLimits

0x8e3a,	// (0x00043ce3) level_5_battery_ParamLimits

0x8e4d,	// (0x00043cf6) level_6_battery_ParamLimits

0x8e60,	// (0x00043d09) level_7_battery_ParamLimits

0xa504,	// (0x000453ad) bg_status_flat_pane_g1

0xa50c,	// (0x000453b5) bg_status_flat_pane_g2

0xa514,	// (0x000453bd) bg_status_flat_pane_g3

0xa51c,	// (0x000453c5) bg_status_flat_pane_g4

0xa524,	// (0x000453cd) bg_status_flat_pane_g5

0xa52c,	// (0x000453d5) bg_status_flat_pane_g6

0xa534,	// (0x000453dd) bg_status_flat_pane_g7

0x7fa7,	// (0x00042e50) tabs_3_active_pane_t1_ParamLimits

0x7fa7,	// (0x00042e50) tabs_3_passive_pane_t1_ParamLimits

0x7fc1,	// (0x00042e6a) tabs_4_active_pane_t1_ParamLimits

0x7fc1,	// (0x00042e6a) tabs_4_1_passive_pane_t1_ParamLimits

0x89b1,	// (0x0004385a) tabs_2_active_pane_t1_ParamLimits

0x89b1,	// (0x0004385a) tabs_2_passive_pane_t1_ParamLimits

0x89c3,	// (0x0004386c) bg_active_tab_pane_cp4_ParamLimits

0x89d1,	// (0x0004387a) tabs_2_long_active_pane_t1_ParamLimits

0x89e4,	// (0x0004388d) bg_passive_tab_pane_cp4_ParamLimits

0x69d9,	// (0x00041882) list_single_midp_graphic_pane_t1_ParamLimits

0x89c3,	// (0x0004386c) bg_active_tab_pane_cp5_ParamLimits

0x89f0,	// (0x00043899) tabs_3_long_active_pane_t1_ParamLimits

0x89e4,	// (0x0004388d) bg_passive_tab_pane_cp5_ParamLimits

0x69d9,	// (0x00041882) list_single_midp_graphic_pane_t1

0x98ab,	// (0x00044754) bg_status_flat_pane_ParamLimits

0x996e,	// (0x00044817) indicator_pane_cp2_ParamLimits

0x996e,	// (0x00044817) indicator_pane_cp2

0x9a99,	// (0x00044942) navi_pane_srt_ParamLimits

0x9a99,	// (0x00044942) navi_pane_srt

0x9abd,	// (0x00044966) popup_clock_digital_analogue_window_cp1

0x806e,	// (0x00042f17) indicator_pane_t1

0x9496,	// (0x0004433f) copy_highlight_pane

0x9496,	// (0x0004433f) cursor_graphics_pane

0x9496,	// (0x0004433f) graphic_within_text_pane

0x9496,	// (0x0004433f) link_highlight_pane

0xad13,	// (0x00045bbc) popup_preview_text_window_t5_ParamLimits

0xad13,	// (0x00045bbc) popup_preview_text_window_t5

0x95b8,	// (0x00044461) cursor_digital_pane

0x95b8,	// (0x00044461) cursor_primary_pane

0x95c9,	// (0x00044472) cursor_primary_small_pane

0x95d1,	// (0x0004447a) cursor_secondary_pane

0x95d9,	// (0x00044482) cursor_title_pane

0x95b8,	// (0x00044461) link_highlight_digital_pane

0x95c0,	// (0x00044469) link_highlight_primary_pane

0x95c9,	// (0x00044472) link_highlight_primary_small_pane

0x95d1,	// (0x0004447a) link_highlight_secondary_pane

0x95d9,	// (0x00044482) link_highlight_title_pane

0x95b8,	// (0x00044461) copy_highlight_digital_pane

0x95b8,	// (0x00044461) copy_highlight_primary_pane

0x95c9,	// (0x00044472) copy_highlight_primary_small_pane

0x95d1,	// (0x0004447a) copy_highlight_secondary_pane

0x95d9,	// (0x00044482) copy_highlight_title_pane

0x95d1,	// (0x0004447a) graphic_text_digital_pane

0xa5a2,	// (0x0004544b) graphic_text_primary_pane

0xa5ab,	// (0x00045454) graphic_text_primary_small_pane

0x95c9,	// (0x00044472) graphic_text_secondary_pane

0x95b8,	// (0x00044461) graphic_text_title_pane

0x95e1,	// (0x0004448a) cursor_primary_pane_g1

0xa594,	// (0x0004543d) cursor_text_primary_t1

0xa57c,	// (0x00045425) cursor_primary_small_pane_g1

0xa586,	// (0x0004542f) cursor_text_primary_small_t1

0xa564,	// (0x0004540d) cursor_primary_small_pane_g1_copy1

0xa56e,	// (0x00045417) cursor_text_primary_small_t1_copy1

0xa54c,	// (0x000453f5) cursor_text_title_t1

0xa55a,	// (0x00045403) cursor_title_pane_g1

0x95e1,	// (0x0004448a) cursor_digital_pane_g1

0x95eb,	// (0x00044494) cursor_text_digital_t1

0x9610,	// (0x000444b9) link_highlight_primary_pane_g1

0xa4f5,	// (0x0004539e) link_highlight_primary_pane_t1

0x95f9,	// (0x000444a2) link_highlight_primary_small_pane_g1

0x9601,	// (0x000444aa) link_highlight_primary_small_pane_t1

0x9610,	// (0x000444b9) link_highlight_secondary_pane_g1

0x9618,	// (0x000444c1) link_highlight_secondary_pane_t1

0xa45d,	// (0x00045306) link_highlight_title_pane_g1

0xa465,	// (0x0004530e) link_highlight_title_pane_t1

0xa446,	// (0x000452ef) link_highlight_digital_pane_g1

0xa44e,	// (0x000452f7) link_highlight_digital_pane_t1

0xa31e,	// (0x000451c7) copy_highlight_primary_pane_g1

0xa326,	// (0x000451cf) copy_highlight_primary_pane_t1

0xa2f8,	// (0x000451a1) copy_highlight_primary_small_pane_g1

0xa30f,	// (0x000451b8) copy_highlight_primary_small_pane_t1

0x9627,	// (0x000444d0) copy_highlight_secondary_pane_g1

0x962f,	// (0x000444d8) copy_highlight_secondary_pane_t1

0xa2f8,	// (0x000451a1) copy_highlight_title_pane_g1

0xa300,	// (0x000451a9) copy_highlight_title_pane_t1

0xa31e,	// (0x000451c7) copy_highlight_digital_pane_g1

0xb566,	// (0x0004640f) copy_highlight_digital_pane_t1

0xb4ba,	// (0x00046363) graphic_text_primary_pane_g1

0xb54a,	// (0x000463f3) graphic_text_primary_pane_t1

0xb558,	// (0x00046401) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x0004a87c) graphic_text_primary_pane_t

0xb526,	// (0x000463cf) graphic_text_primary_small_pane_g1

0xb52e,	// (0x000463d7) graphic_text_primary_small_pane_t1

0xb53c,	// (0x000463e5) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x0004a877) graphic_text_primary_small_pane_t

0xb502,	// (0x000463ab) graphic_text_secondary_pane_g1

0xb50a,	// (0x000463b3) graphic_text_secondary_pane_t1

0xb518,	// (0x000463c1) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x0004a872) graphic_text_secondary_pane_t

0xb4de,	// (0x00046387) graphic_text_title_pane_g1

0xb4e6,	// (0x0004638f) graphic_text_title_pane_t1

0xb4f4,	// (0x0004639d) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x0004a86d) graphic_text_title_pane_t

0xb4ba,	// (0x00046363) graphic_text_digital_pane_g1

0xb4c2,	// (0x0004636b) graphic_text_digital_pane_t1

0xb4d0,	// (0x00046379) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x0004a868) graphic_text_digital_pane_t

0x7f91,	// (0x00042e3a) navi_icon_pane_srt_ParamLimits

0x7f91,	// (0x00042e3a) navi_icon_pane_srt

0x7eb1,	// (0x00042d5a) navi_midp_pane_srt

0x7eb1,	// (0x00042d5a) navi_navi_pane_srt

0x7f91,	// (0x00042e3a) navi_text_pane_srt_ParamLimits

0x7f91,	// (0x00042e3a) navi_text_pane_srt

0xb485,	// (0x0004632e) navi_navi_icon_text_pane_srt

0xb48d,	// (0x00046336) navi_navi_pane_srt_g1_ParamLimits

0xb48d,	// (0x00046336) navi_navi_pane_srt_g1

0xb49f,	// (0x00046348) navi_navi_pane_srt_g2_ParamLimits

0xb49f,	// (0x00046348) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x0004a863) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x0004a863) navi_navi_pane_srt_g

0xb4b1,	// (0x0004635a) navi_navi_tabs_pane_srt

0xb485,	// (0x0004632e) navi_navi_text_pane_srt

0xb485,	// (0x0004632e) navi_navi_volume_pane_srt

0xb476,	// (0x0004631f) navi_navi_text_pane_srt_t1

0x6e01,	// (0x00041caa) navi_navi_volume_pane_srt_g1

0x6e09,	// (0x00041cb2) volume_small_pane_srt_ParamLimits

0x6e09,	// (0x00041cb2) volume_small_pane_srt

0x6186,	// (0x0004102f) volume_small_pane_srt_g1_ParamLimits

0x6186,	// (0x0004102f) volume_small_pane_srt_g1

0x6196,	// (0x0004103f) volume_small_pane_srt_g2_ParamLimits

0x6196,	// (0x0004103f) volume_small_pane_srt_g2

0x61a7,	// (0x00041050) volume_small_pane_srt_g3_ParamLimits

0x61a7,	// (0x00041050) volume_small_pane_srt_g3

0x61b8,	// (0x00041061) volume_small_pane_srt_g4_ParamLimits

0x61b8,	// (0x00041061) volume_small_pane_srt_g4

0x61c9,	// (0x00041072) volume_small_pane_srt_g5_ParamLimits

0x61c9,	// (0x00041072) volume_small_pane_srt_g5

0x61da,	// (0x00041083) volume_small_pane_srt_g6_ParamLimits

0x61da,	// (0x00041083) volume_small_pane_srt_g6

0x61eb,	// (0x00041094) volume_small_pane_srt_g7_ParamLimits

0x61eb,	// (0x00041094) volume_small_pane_srt_g7

0x61fc,	// (0x000410a5) volume_small_pane_srt_g8_ParamLimits

0x61fc,	// (0x000410a5) volume_small_pane_srt_g8

0x620d,	// (0x000410b6) volume_small_pane_srt_g9_ParamLimits

0x620d,	// (0x000410b6) volume_small_pane_srt_g9

0x621e,	// (0x000410c7) volume_small_pane_srt_g10_ParamLimits

0x621e,	// (0x000410c7) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0004a60b) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0004a60b) volume_small_pane_srt_g

0x836b,	// (0x00043214) query_popup_data_pane_cp2

0xb45c,	// (0x00046305) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb45c,	// (0x00046305) navi_navi_icon_text_pane_srt_t1

0xa5a2,	// (0x0004544b) navi_tabs_2_long_pane_srt

0xa5a2,	// (0x0004544b) navi_tabs_2_pane_srt

0xa5a2,	// (0x0004544b) navi_tabs_3_long_pane_srt

0xa5a2,	// (0x0004544b) navi_tabs_3_pane_srt

0xa5a2,	// (0x0004544b) navi_tabs_4_pane_srt

0x6de1,	// (0x00041c8a) tabs_2_active_pane_srt_ParamLimits

0x6de1,	// (0x00041c8a) tabs_2_active_pane_srt

0x6df1,	// (0x00041c9a) tabs_2_passive_pane_srt_ParamLimits

0x6df1,	// (0x00041c9a) tabs_2_passive_pane_srt

0x97d4,	// (0x0004467d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97d4,	// (0x0004467d) bg_passive_tab_pane_cp1_srt

0xb428,	// (0x000462d1) bg_passive_tab_pane_g1_cp1_srt

0x90d8,	// (0x00043f81) bg_passive_tab_pane_g2_cp1_srt

0xb431,	// (0x000462da) bg_passive_tab_pane_g3_cp1_srt

0x7f91,	// (0x00042e3a) bg_active_tab_pane_cp1_srt_ParamLimits

0x7f91,	// (0x00042e3a) bg_active_tab_pane_cp1_srt

0xb43a,	// (0x000462e3) tabs_2_active_pane_srt_g1

0xb442,	// (0x000462eb) tabs_2_active_pane_srt_t1_ParamLimits

0xb442,	// (0x000462eb) tabs_2_active_pane_srt_t1

0xb428,	// (0x000462d1) bg_active_tab_pane_g1_cp1_srt

0x90d8,	// (0x00043f81) bg_active_tab_pane_g2_cp1_srt

0xb431,	// (0x000462da) bg_active_tab_pane_g3_cp1_srt

0x6dae,	// (0x00041c57) tabs_3_active_pane_srt_ParamLimits

0x6dae,	// (0x00041c57) tabs_3_active_pane_srt

0x6dbf,	// (0x00041c68) tabs_3_passive_pane_cp_srt_ParamLimits

0x6dbf,	// (0x00041c68) tabs_3_passive_pane_cp_srt

0x6dd0,	// (0x00041c79) tabs_3_passive_pane_srt_ParamLimits

0x6dd0,	// (0x00041c79) tabs_3_passive_pane_srt

0x97d4,	// (0x0004467d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97d4,	// (0x0004467d) bg_passive_tab_pane_cp2_srt

0x963e,	// (0x000444e7) bg_passive_tab_pane_g1_cp2_srt

0x90d8,	// (0x00043f81) bg_passive_tab_pane_g2_cp2_srt

0x9647,	// (0x000444f0) bg_passive_tab_pane_g3_cp2_srt

0x7f91,	// (0x00042e3a) bg_active_tab_pane_cp2_srt_ParamLimits

0x7f91,	// (0x00042e3a) bg_active_tab_pane_cp2_srt

0xb40e,	// (0x000462b7) tabs_3_active_pane_srt_g1

0xb416,	// (0x000462bf) tabs_3_active_pane_srt_t1_ParamLimits

0xb416,	// (0x000462bf) tabs_3_active_pane_srt_t1

0x963e,	// (0x000444e7) bg_active_tab_pane_g1_cp2_srt

0x90d8,	// (0x00043f81) bg_active_tab_pane_g2_cp2_srt

0x9647,	// (0x000444f0) bg_active_tab_pane_g3_cp2_srt

0x6d66,	// (0x00041c0f) tabs_4_active_pane_srt_ParamLimits

0x6d66,	// (0x00041c0f) tabs_4_active_pane_srt

0x6d78,	// (0x00041c21) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6d78,	// (0x00041c21) tabs_4_passive_pane_cp2_srt

0x6383,	// (0x0004122c) aid_size_cell_toolbar

0x89e4,	// (0x0004388d) main_idle_act_pane_ParamLimits

0x6540,	// (0x000413e9) popup_large_graphic_colour_window_ParamLimits

0x68a7,	// (0x00041750) popup_toolbar_window_ParamLimits

0x68a7,	// (0x00041750) popup_toolbar_window

0xb276,	// (0x0004611f) list_single_graphic_2heading_pane_ParamLimits

0xb276,	// (0x0004611f) list_single_graphic_2heading_pane

0x8ba0,	// (0x00043a49) aid_size_cell_apps_grid_lsc_pane

0x8bb2,	// (0x00043a5b) aid_size_cell_apps_grid_prt_pane

0x97d4,	// (0x0004467d) bg_wml_button_pane_cp1_ParamLimits

0x97d4,	// (0x0004467d) bg_wml_button_pane_cp1

0x9f88,	// (0x00044e31) form_midp_field_text_pane_t1_ParamLimits

0x9d52,	// (0x00044bfb) input_focus_pane_cp050_ParamLimits

0x9fbf,	// (0x00044e68) list_midp_form_text_pane_ParamLimits

0x9f65,	// (0x00044e0e) input_focus_pane_cp051_ParamLimits

0x9f79,	// (0x00044e22) list_midp_choice_pane_ParamLimits

0x9e0b,	// (0x00044cb4) list_single_2graphic_pane_cp3_ParamLimits

0x9e0b,	// (0x00044cb4) list_single_2graphic_pane_cp3

0x9e2f,	// (0x00044cd8) list_single_midp_graphic_pane_ParamLimits

0x9e2f,	// (0x00044cd8) list_single_midp_graphic_pane

0x505a,	// (0x0003ff03) list_single_graphic_2heading_pane_g1_ParamLimits

0x505a,	// (0x0003ff03) list_single_graphic_2heading_pane_g1

0x5066,	// (0x0003ff0f) list_single_graphic_2heading_pane_g4_ParamLimits

0x5066,	// (0x0003ff0f) list_single_graphic_2heading_pane_g4

0x5072,	// (0x0003ff1b) list_single_graphic_2heading_pane_g5_ParamLimits

0x5072,	// (0x0003ff1b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0004a65e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0004a65e) list_single_graphic_2heading_pane_g

0x507e,	// (0x0003ff27) list_single_graphic_2heading_pane_t1_ParamLimits

0x507e,	// (0x0003ff27) list_single_graphic_2heading_pane_t1

0x5092,	// (0x0003ff3b) list_single_graphic_2heading_pane_t2_ParamLimits

0x5092,	// (0x0003ff3b) list_single_graphic_2heading_pane_t2

0x50ae,	// (0x0003ff57) list_single_graphic_2heading_pane_t3_ParamLimits

0x50ae,	// (0x0003ff57) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0004a665) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0004a665) list_single_graphic_2heading_pane_t

0x9c1c,	// (0x00044ac5) bg_popup_sub_pane_cp2

0x9c46,	// (0x00044aef) grid_toobar_pane

0x6954,	// (0x000417fd) cell_toolbar_pane_ParamLimits

0x6954,	// (0x000417fd) cell_toolbar_pane

0x9c82,	// (0x00044b2b) cell_toolbar_pane_g1_ParamLimits

0x9c82,	// (0x00044b2b) cell_toolbar_pane_g1

0x9c96,	// (0x00044b3f) cell_toolbar_pane_g2_ParamLimits

0x9c96,	// (0x00044b3f) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0004a673) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0004a673) cell_toolbar_pane_g

0x9cb8,	// (0x00044b61) grid_highlight_pane_cp2_ParamLimits

0x9cb8,	// (0x00044b61) grid_highlight_pane_cp2

0x9cd2,	// (0x00044b7b) toolbar_button_pane

0x9cde,	// (0x00044b87) toolbar_button_pane_g1

0x9ce6,	// (0x00044b8f) toolbar_button_pane_g2

0x9cee,	// (0x00044b97) toolbar_button_pane_g3

0x9cf6,	// (0x00044b9f) toolbar_button_pane_g4

0x9cfe,	// (0x00044ba7) toolbar_button_pane_g5

0x9d06,	// (0x00044baf) toolbar_button_pane_g6

0x9d0e,	// (0x00044bb7) toolbar_button_pane_g7

0x9d16,	// (0x00044bbf) toolbar_button_pane_g8

0x9d1e,	// (0x00044bc7) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0004a678) toolbar_button_pane_g

0x6998,	// (0x00041841) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6998,	// (0x00041841) list_single_2graphic_pane_g1_cp3

0x69a4,	// (0x0004184d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x69a4,	// (0x0004184d) list_single_2graphic_pane_g2_cp3

0x69b5,	// (0x0004185e) list_single_2graphic_pane_g3_cp3

0x6039,	// (0x00040ee2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6039,	// (0x00040ee2) list_single_2graphic_pane_g4_cp3

0x69bd,	// (0x00041866) list_single_2graphic_pane_t1_cp3_ParamLimits

0x69bd,	// (0x00041866) list_single_2graphic_pane_t1_cp3

0xa4b2,	// (0x0004535b) list_single_midp_graphic_pane_g2_ParamLimits

0xa4b2,	// (0x0004535b) list_single_midp_graphic_pane_g2

0x504a,	// (0x0003fef3) aid_zoom_text_primary

0x638b,	// (0x00041234) aid_zoom_text_secondary

0x96f8,	// (0x000445a1) status_small_pane_g7_ParamLimits

0x96f8,	// (0x000445a1) status_small_pane_g7

0x971b,	// (0x000445c4) status_small_pane_t1_ParamLimits

0x7ec8,	// (0x00042d71) title_pane_g2

0x0003,

0xf54e,	// (0x0004a3f7) title_pane_g

0x840f,	// (0x000432b8) aid_size_cell_colour_1_pane_ParamLimits

0x840f,	// (0x000432b8) aid_size_cell_colour_1_pane

0x8423,	// (0x000432cc) aid_size_cell_colour_2_pane_ParamLimits

0x8423,	// (0x000432cc) aid_size_cell_colour_2_pane

0x8437,	// (0x000432e0) aid_size_cell_colour_3_pane_ParamLimits

0x8437,	// (0x000432e0) aid_size_cell_colour_3_pane

0x844b,	// (0x000432f4) aid_size_cell_colour_4_pane_ParamLimits

0x844b,	// (0x000432f4) aid_size_cell_colour_4_pane

0x5dc7,	// (0x00040c70) title_pane_stacon_g1_ParamLimits

0x5dc7,	// (0x00040c70) title_pane_stacon_g1

0xa37d,	// (0x00045226) popup_note_wait_window_g3_ParamLimits

0xa37d,	// (0x00045226) popup_note_wait_window_g3

0xa3f3,	// (0x0004529c) popup_note_wait_window_t5_ParamLimits

0xa3f3,	// (0x0004529c) popup_note_wait_window_t5

0x7eb1,	// (0x00042d5a) main_feb_china_hwr_fs_writing_pane

0x6423,	// (0x000412cc) popup_feb_china_hwr_fs_window_ParamLimits

0x6423,	// (0x000412cc) popup_feb_china_hwr_fs_window

0x6a07,	// (0x000418b0) aid_size_cell_hwr_fs_ParamLimits

0x6a07,	// (0x000418b0) aid_size_cell_hwr_fs

0x9d52,	// (0x00044bfb) bg_popup_sub_pane_cp3_ParamLimits

0x9d52,	// (0x00044bfb) bg_popup_sub_pane_cp3

0x6a1c,	// (0x000418c5) grid_hwr_fs_pane_ParamLimits

0x6a1c,	// (0x000418c5) grid_hwr_fs_pane

0x6a34,	// (0x000418dd) linegrid_hwr_fs_pane_ParamLimits

0x6a34,	// (0x000418dd) linegrid_hwr_fs_pane

0x6a44,	// (0x000418ed) cell_hwr_fs_pane_ParamLimits

0x6a44,	// (0x000418ed) cell_hwr_fs_pane

0x9d5e,	// (0x00044c07) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d5e,	// (0x00044c07) linegrid_hwr_fs_pane_g1

0x9d6a,	// (0x00044c13) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d6a,	// (0x00044c13) linegrid_hwr_fs_pane_g2

0x9d7c,	// (0x00044c25) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d7c,	// (0x00044c25) linegrid_hwr_fs_pane_g3

0x6a66,	// (0x0004190f) linegrid_hwr_fs_pane_g4_ParamLimits

0x6a66,	// (0x0004190f) linegrid_hwr_fs_pane_g4

0x6a80,	// (0x00041929) linegrid_hwr_fs_pane_g5_ParamLimits

0x6a80,	// (0x00041929) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x0004a6a3) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x0004a6a3) linegrid_hwr_fs_pane_g

0x9d88,	// (0x00044c31) cell_hwr_fs_pane_g1_ParamLimits

0x9d88,	// (0x00044c31) cell_hwr_fs_pane_g1

0x9b53,	// (0x000449fc) cell_hwr_fs_pane_g2_ParamLimits

0x9b53,	// (0x000449fc) cell_hwr_fs_pane_g2

0x9d9e,	// (0x00044c47) cell_hwr_fs_pane_g3_ParamLimits

0x9d9e,	// (0x00044c47) cell_hwr_fs_pane_g3

0x9dab,	// (0x00044c54) cell_hwr_fs_pane_g4_ParamLimits

0x9dab,	// (0x00044c54) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x0004a6ae) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x0004a6ae) cell_hwr_fs_pane_g

0x6a96,	// (0x0004193f) cell_hwr_fs_pane_t1

0x7eb1,	// (0x00042d5a) grid_highlight_pane_cp6

0x7eb1,	// (0x00042d5a) main_idle_act2_pane

0x8957,	// (0x00043800) aid_inside_area_popup_secondary

0xaa36,	// (0x000458df) aid_inside_area_window_primary_ParamLimits

0xaa36,	// (0x000458df) aid_inside_area_window_primary

0xb575,	// (0x0004641e) ai2_news_ticker_pane

0xb57d,	// (0x00046426) aid_size_cell_ai1_link_ParamLimits

0xb57d,	// (0x00046426) aid_size_cell_ai1_link

0xb597,	// (0x00046440) popup_ai2_data_window_ParamLimits

0xb597,	// (0x00046440) popup_ai2_data_window

0xb5ad,	// (0x00046456) popup_ai2_link_window_ParamLimits

0xb5ad,	// (0x00046456) popup_ai2_link_window

0x9d52,	// (0x00044bfb) bg_popup_sub_pane_cp4_ParamLimits

0x9d52,	// (0x00044bfb) bg_popup_sub_pane_cp4

0xb5c1,	// (0x0004646a) grid_ai2_link_pane_ParamLimits

0xb5c1,	// (0x0004646a) grid_ai2_link_pane

0xb5d8,	// (0x00046481) popup_ai2_link_window_g1_ParamLimits

0xb5d8,	// (0x00046481) popup_ai2_link_window_g1

0xb5e4,	// (0x0004648d) popup_ai2_link_window_g2_ParamLimits

0xb5e4,	// (0x0004648d) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x0004a881) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x0004a881) popup_ai2_link_window_g

0xb5f3,	// (0x0004649c) ai2_mp_button_pane

0xb5fb,	// (0x000464a4) ai2_mp_volume_pane

0x9f65,	// (0x00044e0e) bg_popup_sub_pane_cp5_ParamLimits

0x9f65,	// (0x00044e0e) bg_popup_sub_pane_cp5

0xb603,	// (0x000464ac) heading_ai2_gene_pane_ParamLimits

0xb603,	// (0x000464ac) heading_ai2_gene_pane

0xb60f,	// (0x000464b8) list_ai2_gene_pane_ParamLimits

0xb60f,	// (0x000464b8) list_ai2_gene_pane

0xb657,	// (0x00046500) cell_ai2_link_pane_ParamLimits

0xb657,	// (0x00046500) cell_ai2_link_pane

0xb66d,	// (0x00046516) cell_ai2_link_pane_g1

0x7eb1,	// (0x00042d5a) grid_highlight_pane_cp7

0x6e1e,	// (0x00041cc7) ai2_mp_volume_pane_g1

0xb73d,	// (0x000465e6) ai2_mp_volume_pane_g2

0xb6b2,	// (0x0004655b) list_ai2_gene_pane_t1

0xb745,	// (0x000465ee) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x0004a89a) ai2_mp_volume_pane_g

0x6e26,	// (0x00041ccf) volume_small_pane_cp3

0xb74d,	// (0x000465f6) aid_size_cell_ai2_button

0xb755,	// (0x000465fe) grid_ai2_button_pane

0xb75e,	// (0x00046607) cell_ai2_button_pane_ParamLimits

0xb75e,	// (0x00046607) cell_ai2_button_pane

0x7ea7,	// (0x00042d50) cell_ai2_button_pane_g1

0x7eb1,	// (0x00042d5a) grid_highlight_pane_cp8

0xb6fd,	// (0x000465a6) ai2_gene_pane_t1_ParamLimits

0xb6fd,	// (0x000465a6) ai2_gene_pane_t1

0x6379,	// (0x00041222) aid_height_parent_landscape

0xb0ad,	// (0x00045f56) aid_height_set_list

0xb0be,	// (0x00045f67) aid_size_parent

0xb39c,	// (0x00046245) aid_size_cell_graphic_pane_ParamLimits

0xb61f,	// (0x000464c8) popup_ai2_data_window_g1_ParamLimits

0xb61f,	// (0x000464c8) popup_ai2_data_window_g1

0xb62b,	// (0x000464d4) ai2_news_ticker_pane_g1

0xb633,	// (0x000464dc) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x0004a886) ai2_news_ticker_pane_g

0xb63b,	// (0x000464e4) ai2_news_ticker_pane_t1

0xb649,	// (0x000464f2) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x0004a88b) ai2_news_ticker_pane_t

0xb676,	// (0x0004651f) heading_ai2_gene_pane_g1

0xb67e,	// (0x00046527) heading_ai2_gene_pane_t1_ParamLimits

0xb67e,	// (0x00046527) heading_ai2_gene_pane_t1

0xb693,	// (0x0004653c) list_highlight_pane_cp6

0xb69b,	// (0x00046544) ai2_gene_pane_ParamLimits

0xb69b,	// (0x00046544) ai2_gene_pane

0xb6c0,	// (0x00046569) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x0004a890) list_ai2_gene_pane_t

0xb6ce,	// (0x00046577) list_highlight_pane_cp8_ParamLimits

0xb6ce,	// (0x00046577) list_highlight_pane_cp8

0xb6df,	// (0x00046588) ai2_gene_pane_g1_ParamLimits

0xb6df,	// (0x00046588) ai2_gene_pane_g1

0xb6f1,	// (0x0004659a) ai2_gene_pane_g2_ParamLimits

0xb6f1,	// (0x0004659a) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x0004a895) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x0004a895) ai2_gene_pane_g

0x8796,	// (0x0004363f) scroll_pane_cp12

0x6338,	// (0x000411e1) control_pane_t3_ParamLimits

0x6338,	// (0x000411e1) control_pane_t3

0x970c,	// (0x000445b5) status_small_pane_g8_ParamLimits

0x970c,	// (0x000445b5) status_small_pane_g8

0x6509,	// (0x000413b2) popup_find_window_ParamLimits

0x671e,	// (0x000415c7) popup_note_image_window_ParamLimits

0x50c6,	// (0x0003ff6f) list_double2_graphic_pane_vc_g1_ParamLimits

0x50c6,	// (0x0003ff6f) list_double2_graphic_pane_vc_g1

0x93cf,	// (0x00044278) list_double2_graphic_pane_vc_g2_ParamLimits

0x93cf,	// (0x00044278) list_double2_graphic_pane_vc_g2

0x6984,	// (0x0004182d) list_double2_graphic_pane_vc_g3_ParamLimits

0x6984,	// (0x0004182d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004a66c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004a66c) list_double2_graphic_pane_vc_g

0x50d2,	// (0x0003ff7b) list_double2_graphic_pane_vc_t1_ParamLimits

0x50d2,	// (0x0003ff7b) list_double2_graphic_pane_vc_t1

0x93cf,	// (0x00044278) list_single_heading_pane_vc_g1_ParamLimits

0x93cf,	// (0x00044278) list_single_heading_pane_vc_g1

0x6984,	// (0x0004182d) list_single_heading_pane_vc_g2_ParamLimits

0x6984,	// (0x0004182d) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a68d) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a68d) list_single_heading_pane_vc_g

0x50e8,	// (0x0003ff91) list_single_heading_pane_vc_t1_ParamLimits

0x50e8,	// (0x0003ff91) list_single_heading_pane_vc_t1

0x5100,	// (0x0003ffa9) list_single_heading_pane_vc_t2_ParamLimits

0x5100,	// (0x0003ffa9) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x0004a692) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x0004a692) list_single_heading_pane_vc_t

0x69ef,	// (0x00041898) list_setting_number_pane_vc_g1_ParamLimits

0x69ef,	// (0x00041898) list_setting_number_pane_vc_g1

0x69fb,	// (0x000418a4) list_setting_number_pane_vc_g2_ParamLimits

0x69fb,	// (0x000418a4) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x0004a697) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x0004a697) list_setting_number_pane_vc_g

0x511c,	// (0x0003ffc5) list_setting_number_pane_vc_t1_ParamLimits

0x511c,	// (0x0003ffc5) list_setting_number_pane_vc_t1

0x5130,	// (0x0003ffd9) list_setting_number_pane_vc_t2_ParamLimits

0x5130,	// (0x0003ffd9) list_setting_number_pane_vc_t2

0x514c,	// (0x0003fff5) list_setting_number_pane_vc_t3_ParamLimits

0x514c,	// (0x0003fff5) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x0004a69c) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x0004a69c) list_setting_number_pane_vc_t

0x5178,	// (0x00040021) set_value_pane_vc_ParamLimits

0x5178,	// (0x00040021) set_value_pane_vc

0xb276,	// (0x0004611f) list_double2_graphic_pane_vc_ParamLimits

0xb276,	// (0x0004611f) list_double2_graphic_pane_vc

0x5230,	// (0x000400d9) list_double2_large_graphic_pane_vc_ParamLimits

0x5230,	// (0x000400d9) list_double2_large_graphic_pane_vc

0xb276,	// (0x0004611f) list_double2_pane_vc_ParamLimits

0xb276,	// (0x0004611f) list_double2_pane_vc

0xb276,	// (0x0004611f) list_double_graphic_heading_pane_vc_ParamLimits

0xb276,	// (0x0004611f) list_double_graphic_heading_pane_vc

0xb276,	// (0x0004611f) list_double_graphic_pane_vc_ParamLimits

0xb276,	// (0x0004611f) list_double_graphic_pane_vc

0xb276,	// (0x0004611f) list_double_heading_pane_vc_ParamLimits

0xb276,	// (0x0004611f) list_double_heading_pane_vc

0x5241,	// (0x000400ea) list_double_large_graphic_pane_vc_ParamLimits

0x5241,	// (0x000400ea) list_double_large_graphic_pane_vc

0xb276,	// (0x0004611f) list_double_number_pane_vc_ParamLimits

0xb276,	// (0x0004611f) list_double_number_pane_vc

0xb276,	// (0x0004611f) list_double_pane_vc_ParamLimits

0xb276,	// (0x0004611f) list_double_pane_vc

0xb276,	// (0x0004611f) list_double_time_pane_vc_ParamLimits

0xb276,	// (0x0004611f) list_double_time_pane_vc

0xb276,	// (0x0004611f) list_setting_number_pane_vc_ParamLimits

0xb276,	// (0x0004611f) list_setting_number_pane_vc

0xb276,	// (0x0004611f) list_setting_pane_vc_ParamLimits

0xb276,	// (0x0004611f) list_setting_pane_vc

0xb276,	// (0x0004611f) list_single_graphic_heading_pane_vc_ParamLimits

0xb276,	// (0x0004611f) list_single_graphic_heading_pane_vc

0xb276,	// (0x0004611f) list_single_heading_pane_vc_ParamLimits

0xb276,	// (0x0004611f) list_single_heading_pane_vc

0x6ceb,	// (0x00041b94) list_single_number_heading_pane_vc_ParamLimits

0x6ceb,	// (0x00041b94) list_single_number_heading_pane_vc

0x50c6,	// (0x0003ff6f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x50c6,	// (0x0003ff6f) list_double_graphic_heading_pane_vc_g1

0x93cf,	// (0x00044278) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x93cf,	// (0x00044278) list_double_graphic_heading_pane_vc_g2

0x6984,	// (0x0004182d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6984,	// (0x0004182d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004a66c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004a66c) list_double_graphic_heading_pane_vc_g

0x5290,	// (0x00040139) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5290,	// (0x00040139) list_double_graphic_heading_pane_vc_t1

0x52ac,	// (0x00040155) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x52ac,	// (0x00040155) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x0004a8a1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x0004a8a1) list_double_graphic_heading_pane_vc_t

0x69ef,	// (0x00041898) list_setting_pane_vc_g1_ParamLimits

0x69ef,	// (0x00041898) list_setting_pane_vc_g1

0x69fb,	// (0x000418a4) list_setting_pane_vc_g2_ParamLimits

0x69fb,	// (0x000418a4) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x0004a697) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x0004a697) list_setting_pane_vc_g

0x52ca,	// (0x00040173) list_setting_pane_vc_t1_ParamLimits

0x52ca,	// (0x00040173) list_setting_pane_vc_t1

0x52e6,	// (0x0004018f) list_setting_pane_vc_t2_ParamLimits

0x52e6,	// (0x0004018f) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x0004a8cf) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x0004a8cf) list_setting_pane_vc_t

0x5178,	// (0x00040021) set_value_pane_cp_vc_ParamLimits

0x5178,	// (0x00040021) set_value_pane_cp_vc

0x93cf,	// (0x00044278) list_single_number_heading_pane_vc_g1_ParamLimits

0x93cf,	// (0x00044278) list_single_number_heading_pane_vc_g1

0x6984,	// (0x0004182d) list_single_number_heading_pane_vc_g2_ParamLimits

0x6984,	// (0x0004182d) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a68d) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a68d) list_single_number_heading_pane_vc_g

0x50e8,	// (0x0003ff91) list_single_number_heading_pane_vc_t1_ParamLimits

0x50e8,	// (0x0003ff91) list_single_number_heading_pane_vc_t1

0x5302,	// (0x000401ab) list_single_number_heading_pane_vc_t2_ParamLimits

0x5302,	// (0x000401ab) list_single_number_heading_pane_vc_t2

0x5316,	// (0x000401bf) list_single_number_heading_pane_vc_t3_ParamLimits

0x5316,	// (0x000401bf) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x0004a8d4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x0004a8d4) list_single_number_heading_pane_vc_t

0x50c6,	// (0x0003ff6f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x50c6,	// (0x0003ff6f) list_single_graphic_heading_pane_vc_g1

0x93cf,	// (0x00044278) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x93cf,	// (0x00044278) list_single_graphic_heading_pane_vc_g4

0x6984,	// (0x0004182d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6984,	// (0x0004182d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0004a66c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004a66c) list_single_graphic_heading_pane_vc_g

0x50e8,	// (0x0003ff91) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x50e8,	// (0x0003ff91) list_single_graphic_heading_pane_vc_t1

0x5328,	// (0x000401d1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5328,	// (0x000401d1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x0004a8db) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x0004a8db) list_single_graphic_heading_pane_vc_t

0x93cf,	// (0x00044278) list_double2_pane_vc_g1_ParamLimits

0x93cf,	// (0x00044278) list_double2_pane_vc_g1

0x6984,	// (0x0004182d) list_double2_pane_vc_g2_ParamLimits

0x6984,	// (0x0004182d) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a68d) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a68d) list_double2_pane_vc_g

0x533c,	// (0x000401e5) list_double2_pane_vc_t1_ParamLimits

0x533c,	// (0x000401e5) list_double2_pane_vc_t1

0x5352,	// (0x000401fb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5352,	// (0x000401fb) list_double2_large_graphic_pane_vc_g1

0x535e,	// (0x00040207) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x535e,	// (0x00040207) list_double2_large_graphic_pane_vc_g2

0x536a,	// (0x00040213) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x536a,	// (0x00040213) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x0004a8e0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x0004a8e0) list_double2_large_graphic_pane_vc_g

0x5376,	// (0x0004021f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5376,	// (0x0004021f) list_double2_large_graphic_pane_vc_t1

0x6e2f,	// (0x00041cd8) list_double_time_pane_vc_g1_ParamLimits

0x6e2f,	// (0x00041cd8) list_double_time_pane_vc_g1

0x6e3b,	// (0x00041ce4) list_double_time_pane_vc_g2_ParamLimits

0x6e3b,	// (0x00041ce4) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x0004a8e7) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x0004a8e7) list_double_time_pane_vc_g

0x538c,	// (0x00040235) list_double_time_pane_vc_t1_ParamLimits

0x538c,	// (0x00040235) list_double_time_pane_vc_t1

0x53b0,	// (0x00040259) list_double_time_pane_vc_t2_ParamLimits

0x53b0,	// (0x00040259) list_double_time_pane_vc_t2

0x53ff,	// (0x000402a8) list_double_time_pane_vc_t3_ParamLimits

0x53ff,	// (0x000402a8) list_double_time_pane_vc_t3

0x5411,	// (0x000402ba) list_double_time_pane_vc_t4_ParamLimits

0x5411,	// (0x000402ba) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x0004a8ec) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x0004a8ec) list_double_time_pane_vc_t

0x93cf,	// (0x00044278) list_double_pane_vc_g1_ParamLimits

0x93cf,	// (0x00044278) list_double_pane_vc_g1

0x6984,	// (0x0004182d) list_double_pane_vc_g2_ParamLimits

0x6984,	// (0x0004182d) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a68d) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a68d) list_double_pane_vc_g

0x5425,	// (0x000402ce) list_double_pane_vc_t1_ParamLimits

0x5425,	// (0x000402ce) list_double_pane_vc_t1

0x5439,	// (0x000402e2) list_double_pane_vc_t2_ParamLimits

0x5439,	// (0x000402e2) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x0004a8f5) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x0004a8f5) list_double_pane_vc_t

0x93cf,	// (0x00044278) list_double_number_pane_vc_g1_ParamLimits

0x93cf,	// (0x00044278) list_double_number_pane_vc_g1

0x6984,	// (0x0004182d) list_double_number_pane_vc_g2_ParamLimits

0x6984,	// (0x0004182d) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a68d) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a68d) list_double_number_pane_vc_g

0x5451,	// (0x000402fa) list_double_number_pane_vc_t1_ParamLimits

0x5451,	// (0x000402fa) list_double_number_pane_vc_t1

0x5463,	// (0x0004030c) list_double_number_pane_vc_t2_ParamLimits

0x5463,	// (0x0004030c) list_double_number_pane_vc_t2

0x5477,	// (0x00040320) list_double_number_pane_vc_t3_ParamLimits

0x5477,	// (0x00040320) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x0004a8fa) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x0004a8fa) list_double_number_pane_vc_t

0x548f,	// (0x00040338) list_double_large_graphic_pane_vc_g1_ParamLimits

0x548f,	// (0x00040338) list_double_large_graphic_pane_vc_g1

0x54b1,	// (0x0004035a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x54b1,	// (0x0004035a) list_double_large_graphic_pane_vc_g2

0x54c5,	// (0x0004036e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x54c5,	// (0x0004036e) list_double_large_graphic_pane_vc_g3

0x54d4,	// (0x0004037d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x54d4,	// (0x0004037d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x0004a901) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x0004a901) list_double_large_graphic_pane_vc_g

0x54e0,	// (0x00040389) list_double_large_graphic_pane_vc_t1_ParamLimits

0x54e0,	// (0x00040389) list_double_large_graphic_pane_vc_t1

0x54fc,	// (0x000403a5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x54fc,	// (0x000403a5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x0004a90a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x0004a90a) list_double_large_graphic_pane_vc_t

0x93cf,	// (0x00044278) list_double_heading_pane_vc_g1_ParamLimits

0x93cf,	// (0x00044278) list_double_heading_pane_vc_g1

0x6984,	// (0x0004182d) list_double_heading_pane_vc_g2_ParamLimits

0x6984,	// (0x0004182d) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a68d) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a68d) list_double_heading_pane_vc_g

0x551e,	// (0x000403c7) list_double_heading_pane_vc_t1_ParamLimits

0x551e,	// (0x000403c7) list_double_heading_pane_vc_t1

0x50e8,	// (0x0003ff91) list_double_heading_pane_vc_t2_ParamLimits

0x50e8,	// (0x0003ff91) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x0004a90f) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0004a90f) list_double_heading_pane_vc_t

0x5532,	// (0x000403db) list_double_graphic_pane_vc_g1_ParamLimits

0x5532,	// (0x000403db) list_double_graphic_pane_vc_g1

0x6e47,	// (0x00041cf0) list_double_graphic_pane_vc_g2_ParamLimits

0x6e47,	// (0x00041cf0) list_double_graphic_pane_vc_g2

0x93cf,	// (0x00044278) list_double_graphic_pane_vc_g3_ParamLimits

0x93cf,	// (0x00044278) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x0004a914) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0004a914) list_double_graphic_pane_vc_g

0x553e,	// (0x000403e7) list_double_graphic_pane_vc_t1_ParamLimits

0x553e,	// (0x000403e7) list_double_graphic_pane_vc_t1

0x5568,	// (0x00040411) list_double_graphic_pane_vc_t2_ParamLimits

0x5568,	// (0x00040411) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0004a91d) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0004a91d) list_double_graphic_pane_vc_t

0x5878,	// (0x00040721) aid_size_cell_fastswap

0x5880,	// (0x00040729) aid_size_cell_touch_ParamLimits

0x5880,	// (0x00040729) aid_size_cell_touch

0x5adb,	// (0x00040984) popup_fast_swap_wide_window_ParamLimits

0x5adb,	// (0x00040984) popup_fast_swap_wide_window

0x5bef,	// (0x00040a98) touch_pane_ParamLimits

0x5bef,	// (0x00040a98) touch_pane

0x87f8,	// (0x000436a1) button_value_adjust_pane_cp2

0x4d71,	// (0x0003fc1a) button_value_adjust_pane_cp4

0x4d95,	// (0x0003fc3e) form_field_data_pane_cp2

0x4db6,	// (0x0003fc5f) form_field_data_wide_pane_cp2

0x8c6d,	// (0x00043b16) bg_scroll_pane_ParamLimits

0x5f29,	// (0x00040dd2) scroll_handle_pane_ParamLimits

0x5f3d,	// (0x00040de6) scroll_sc2_down_pane_ParamLimits

0x5f3d,	// (0x00040de6) scroll_sc2_down_pane

0x8c9e,	// (0x00043b47) scroll_sc2_up_pane_ParamLimits

0x8c9e,	// (0x00043b47) scroll_sc2_up_pane

0xbe2e,	// (0x00046cd7) grid_wheel_folder_pane_g1_ParamLimits

0xbe2e,	// (0x00046cd7) grid_wheel_folder_pane_g1

0x611e,	// (0x00040fc7) clock_nsta_pane_cp2_ParamLimits

0x611e,	// (0x00040fc7) clock_nsta_pane_cp2

0x89e4,	// (0x0004388d) listscroll_midp_pane_ParamLimits

0x949e,	// (0x00044347) midp_canvas_pane

0x9786,	// (0x0004462f) nsta_clock_indic_pane

0x97ba,	// (0x00044663) listscroll_form_pane_vc

0x97c2,	// (0x0004466b) listscroll_set_pane_vc_ParamLimits

0x97c2,	// (0x0004466b) listscroll_set_pane_vc

0x98c7,	// (0x00044770) clock_nsta_pane

0x993c,	// (0x000447e5) indicator_nsta_pane

0x9c1c,	// (0x00044ac5) bg_popup_sub_pane_cp2_ParamLimits

0x9c30,	// (0x00044ad9) find_pane_cp2_ParamLimits

0x9c30,	// (0x00044ad9) find_pane_cp2

0x9c46,	// (0x00044aef) grid_toobar_pane_ParamLimits

0x9d26,	// (0x00044bcf) list_form_gen_pane_vc_ParamLimits

0x9d26,	// (0x00044bcf) list_form_gen_pane_vc

0x9d3c,	// (0x00044be5) scroll_pane_cp8_vc_ParamLimits

0x9d3c,	// (0x00044be5) scroll_pane_cp8_vc

0x9db8,	// (0x00044c61) data_form_wide_pane_vc_ParamLimits

0x9db8,	// (0x00044c61) data_form_wide_pane_vc

0x9dc4,	// (0x00044c6d) form_field_data_wide_pane_vc_g1

0x9dcc,	// (0x00044c75) form_field_data_wide_pane_vc_t1_ParamLimits

0x9dcc,	// (0x00044c75) form_field_data_wide_pane_vc_t1

0x880c,	// (0x000436b5) input_focus_pane_cp6_vc_ParamLimits

0x880c,	// (0x000436b5) input_focus_pane_cp6_vc

0xa0f8,	// (0x00044fa1) list_midp_pane_ParamLimits

0xa104,	// (0x00044fad) scroll_pane_cp16_ParamLimits

0xa104,	// (0x00044fad) scroll_pane_cp16

0xa152,	// (0x00044ffb) button_value_adjust_pane_ParamLimits

0xa152,	// (0x00044ffb) button_value_adjust_pane

0xb0d0,	// (0x00045f79) button_value_adjust_pane_cp6_ParamLimits

0xb0d0,	// (0x00045f79) button_value_adjust_pane_cp6

0xb1fa,	// (0x000460a3) settings_code_pane_cp_ParamLimits

0xb1fa,	// (0x000460a3) settings_code_pane_cp

0x7ea7,	// (0x00042d50) cell_touch_pane_g1

0x7ea7,	// (0x00042d50) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0004a5b1) cell_touch_pane_g

0xb770,	// (0x00046619) cell_touch_pane_cp_ParamLimits

0xb770,	// (0x00046619) cell_touch_pane_cp

0xb780,	// (0x00046629) cell_touch_pane_ParamLimits

0xb780,	// (0x00046629) cell_touch_pane

0x7ea7,	// (0x00042d50) scroll_sc2_down_pane_g1

0x7ea7,	// (0x00042d50) scroll_sc2_up_pane_g1

0x7eb1,	// (0x00042d5a) bg_set_opt_pane_cp4_vc

0xb792,	// (0x0004663b) list_set_graphic_pane_vc_g1_ParamLimits

0xb792,	// (0x0004663b) list_set_graphic_pane_vc_g1

0xb79e,	// (0x00046647) list_set_graphic_pane_vc_g2_ParamLimits

0xb79e,	// (0x00046647) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x0004a8a6) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x0004a8a6) list_set_graphic_pane_vc_g

0xb7aa,	// (0x00046653) text_primary_small_cp13_vc_ParamLimits

0xb7aa,	// (0x00046653) text_primary_small_cp13_vc

0xb7c2,	// (0x0004666b) list_set_graphic_pane_vc_ParamLimits

0xb7c2,	// (0x0004666b) list_set_graphic_pane_vc

0x7eb1,	// (0x00042d5a) input_focus_pane_cp2_vc

0x7ea7,	// (0x00042d50) setting_code_pane_vc_g1

0x7fdc,	// (0x00042e85) setting_code_pane_vc_t1

0xb7d5,	// (0x0004667e) set_text_pane_vc_t1_ParamLimits

0xb7d5,	// (0x0004667e) set_text_pane_vc_t1

0x7eb1,	// (0x00042d5a) input_focus_pane_cp1_vc

0xb7f1,	// (0x0004669a) list_set_text_pane_vc

0x7ea7,	// (0x00042d50) setting_text_pane_vc_g1

0x7eb1,	// (0x00042d5a) bg_set_opt_pane_cp2_vc

0x7fd3,	// (0x00042e7c) setting_slider_graphic_pane_vc_g1

0xb7fb,	// (0x000466a4) setting_slider_graphic_pane_vc_t1

0xb80b,	// (0x000466b4) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x0004a8ab) setting_slider_graphic_pane_vc_t

0xb81b,	// (0x000466c4) slider_set_pane_cp_vc

0xb823,	// (0x000466cc) slider_set_pane_vc_g1

0xb82c,	// (0x000466d5) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x0004a8b0) slider_set_pane_vc_g

0x885b,	// (0x00043704) set_opt_bg_pane_g1_copy1

0x8863,	// (0x0004370c) set_opt_bg_pane_g2_copy1

0xb858,	// (0x00046701) set_opt_bg_pane_g3_copy1

0x8873,	// (0x0004371c) set_opt_bg_pane_g4_copy1

0x887b,	// (0x00043724) set_opt_bg_pane_g5_copy1

0x8883,	// (0x0004372c) set_opt_bg_pane_g6_copy1

0xb862,	// (0x0004670b) set_opt_bg_pane_g7_copy1

0xb86a,	// (0x00046713) set_opt_bg_pane_g8_copy1

0xb874,	// (0x0004671d) set_opt_bg_pane_g9_copy1

0x7eb1,	// (0x00042d5a) bg_set_opt_pane_cp_vc

0xb87e,	// (0x00046727) setting_slider_pane_vc_t1

0xb88d,	// (0x00046736) setting_slider_pane_vc_t2

0xb89d,	// (0x00046746) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x0004a8bf) setting_slider_pane_vc_t

0xb8ad,	// (0x00046756) slider_set_pane_vc

0x6aa4,	// (0x0004194d) volume_set_pane_vc_g1

0x6aad,	// (0x00041956) volume_set_pane_vc_g2

0x6ab6,	// (0x0004195f) volume_set_pane_vc_g3

0x6abf,	// (0x00041968) volume_set_pane_vc_g4

0x6ac8,	// (0x00041971) volume_set_pane_vc_g5

0x6ad1,	// (0x0004197a) volume_set_pane_vc_g6

0x6ada,	// (0x00041983) volume_set_pane_vc_g7

0x6ae3,	// (0x0004198c) volume_set_pane_vc_g8

0x6aec,	// (0x00041995) volume_set_pane_vc_g9

0x6af5,	// (0x0004199e) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x0004a764) volume_set_pane_vc_g

0xb8b5,	// (0x0004675e) volume_set_pane_vc

0xb8bd,	// (0x00046766) button_value_adjust_pane_cp1_vc

0xb8c7,	// (0x00046770) list_highlight_pane_cp2_vc

0xb8d0,	// (0x00046779) list_set_pane_vc_ParamLimits

0xb8d0,	// (0x00046779) list_set_pane_vc

0xb92e,	// (0x000467d7) main_pane_set_vc_t1_ParamLimits

0xb92e,	// (0x000467d7) main_pane_set_vc_t1

0xb943,	// (0x000467ec) main_pane_set_vc_t2_ParamLimits

0xb943,	// (0x000467ec) main_pane_set_vc_t2

0xb955,	// (0x000467fe) main_pane_set_vc_t3_ParamLimits

0xb955,	// (0x000467fe) main_pane_set_vc_t3

0xb969,	// (0x00046812) main_pane_set_vc_t4_ParamLimits

0xb969,	// (0x00046812) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x0004a8c6) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x0004a8c6) main_pane_set_vc_t

0xb97d,	// (0x00046826) setting_code_pane_vc_ParamLimits

0xb97d,	// (0x00046826) setting_code_pane_vc

0xb98e,	// (0x00046837) setting_slider_graphic_pane_vc

0xb98e,	// (0x00046837) setting_slider_pane_vc

0xb98e,	// (0x00046837) setting_text_pane_vc

0xb98e,	// (0x00046837) setting_volume_pane_vc

0xb998,	// (0x00046841) scroll_pane_cp121_vc

0x87e6,	// (0x0004368f) set_content_pane_vc

0xb9a0,	// (0x00046849) button_value_adjust_pane_g1

0xb9a9,	// (0x00046852) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x0004a922) button_value_adjust_pane_g

0xb9b2,	// (0x0004685b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9b2,	// (0x0004685b) form_field_slider_wide_pane_vc_t1

0xb9c6,	// (0x0004686f) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9c6,	// (0x0004686f) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x0004a927) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x0004a927) form_field_slider_wide_pane_vc_t

0x820c,	// (0x000430b5) input_focus_pane_cp10_vc_ParamLimits

0x820c,	// (0x000430b5) input_focus_pane_cp10_vc

0xb9f4,	// (0x0004689d) slider_cont_pane_cp1_vc_ParamLimits

0xb9f4,	// (0x0004689d) slider_cont_pane_cp1_vc

0xba06,	// (0x000468af) slider_form_pane_g1_cp2

0xb82c,	// (0x000466d5) slider_form_pane_g2_cp2

0xba33,	// (0x000468dc) form_field_slider_pane_vc_t3

0xba41,	// (0x000468ea) form_field_slider_pane_vc_t4

0xba4f,	// (0x000468f8) slider_form_pane_vc_ParamLimits

0xba4f,	// (0x000468f8) slider_form_pane_vc

0xba5c,	// (0x00046905) form_field_slider_pane_vc_t1_ParamLimits

0xba5c,	// (0x00046905) form_field_slider_pane_vc_t1

0xb9c6,	// (0x0004686f) form_field_slider_pane_vc_t2_ParamLimits

0xb9c6,	// (0x0004686f) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x0004a939) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x0004a939) form_field_slider_pane_vc_t

0x820c,	// (0x000430b5) input_focus_pane_cp9_vc_ParamLimits

0x820c,	// (0x000430b5) input_focus_pane_cp9_vc

0xba78,	// (0x00046921) slider_cont_pane_vc_ParamLimits

0xba78,	// (0x00046921) slider_cont_pane_vc

0xba8c,	// (0x00046935) list_form_graphic_pane_cp_vc_ParamLimits

0xba8c,	// (0x00046935) list_form_graphic_pane_cp_vc

0x9dc4,	// (0x00044c6d) form_field_popup_wide_pane_vc_g1

0xbaa1,	// (0x0004694a) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbaa1,	// (0x0004694a) form_field_popup_wide_pane_vc_t1

0x880c,	// (0x000436b5) input_focus_pane_cp8_vc_ParamLimits

0x880c,	// (0x000436b5) input_focus_pane_cp8_vc

0xbae6,	// (0x0004698f) list_form_wide_pane_vc_ParamLimits

0xbae6,	// (0x0004698f) list_form_wide_pane_vc

0xbaf2,	// (0x0004699b) list_form_graphic_pane_vc_g1

0xbafa,	// (0x000469a3) list_form_graphic_pane_vc_t1_ParamLimits

0xbafa,	// (0x000469a3) list_form_graphic_pane_vc_t1

0x7f91,	// (0x00042e3a) list_highlight_pane_cp5_vc_ParamLimits

0x7f91,	// (0x00042e3a) list_highlight_pane_cp5_vc

0xbb16,	// (0x000469bf) list_form_graphic_pane_vc_ParamLimits

0xbb16,	// (0x000469bf) list_form_graphic_pane_vc

0x9dc4,	// (0x00044c6d) form_field_popup_pane_vc_g1

0xbb2c,	// (0x000469d5) form_field_popup_pane_vc_t1_ParamLimits

0xbb2c,	// (0x000469d5) form_field_popup_pane_vc_t1

0x880c,	// (0x000436b5) input_focus_pane_cp7_vc_ParamLimits

0x880c,	// (0x000436b5) input_focus_pane_cp7_vc

0xbb43,	// (0x000469ec) list_form_pane_vc_ParamLimits

0xbb43,	// (0x000469ec) list_form_pane_vc

0xbb4f,	// (0x000469f8) data_form_pane_vc_t1_ParamLimits

0xbb4f,	// (0x000469f8) data_form_pane_vc_t1

0x885b,	// (0x00043704) input_focus_pane_vc_g1

0x8863,	// (0x0004370c) input_focus_pane_vc_g2

0x886b,	// (0x00043714) input_focus_pane_vc_g3

0x8873,	// (0x0004371c) input_focus_pane_vc_g4

0x887b,	// (0x00043724) input_focus_pane_vc_g5

0x8883,	// (0x0004372c) input_focus_pane_vc_g6

0x888b,	// (0x00043734) input_focus_pane_vc_g7

0x8893,	// (0x0004373c) input_focus_pane_vc_g8

0x889b,	// (0x00043744) input_focus_pane_vc_g9

0x7ea7,	// (0x00042d50) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0004a53a) input_focus_pane_vc_g

0x9db8,	// (0x00044c61) data_form_pane_vc_ParamLimits

0x9db8,	// (0x00044c61) data_form_pane_vc

0x9dc4,	// (0x00044c6d) form_field_data_pane_vc_g1

0xbb6a,	// (0x00046a13) form_field_data_pane_vc_t1_ParamLimits

0xbb6a,	// (0x00046a13) form_field_data_pane_vc_t1

0x880c,	// (0x000436b5) input_focus_pane_vc_ParamLimits

0x880c,	// (0x000436b5) input_focus_pane_vc

0xbb84,	// (0x00046a2d) button_value_adjust_pane_cp3_vc

0xbb8c,	// (0x00046a35) button_value_adjust_pane_cp5_vc

0xbb94,	// (0x00046a3d) form_field_data_pane_vc_ParamLimits

0xbb94,	// (0x00046a3d) form_field_data_pane_vc

0xbbab,	// (0x00046a54) form_field_data_pane_vc_cp2

0xbbb3,	// (0x00046a5c) form_field_data_wide_pane_vc_ParamLimits

0xbbb3,	// (0x00046a5c) form_field_data_wide_pane_vc

0xbbc9,	// (0x00046a72) form_field_data_wide_pane_vc_cp2

0xbbd1,	// (0x00046a7a) form_field_popup_pane_vc_ParamLimits

0xbbd1,	// (0x00046a7a) form_field_popup_pane_vc

0xbbe8,	// (0x00046a91) form_field_popup_wide_pane_vc_ParamLimits

0xbbe8,	// (0x00046a91) form_field_popup_wide_pane_vc

0xbbfe,	// (0x00046aa7) form_field_slider_pane_vc_ParamLimits

0xbbfe,	// (0x00046aa7) form_field_slider_pane_vc

0xbc11,	// (0x00046aba) form_field_slider_wide_pane_vc_ParamLimits

0xbc11,	// (0x00046aba) form_field_slider_wide_pane_vc

0xbc24,	// (0x00046acd) grid_touch_1_pane_ParamLimits

0xbc24,	// (0x00046acd) grid_touch_1_pane

0xbc30,	// (0x00046ad9) grid_touch_2_pane_ParamLimits

0xbc30,	// (0x00046ad9) grid_touch_2_pane

0x9751,	// (0x000445fa) touch_pane_g1_ParamLimits

0x9751,	// (0x000445fa) touch_pane_g1

0xbc48,	// (0x00046af1) cell_app_pane_cp_wide_ParamLimits

0xbc48,	// (0x00046af1) cell_app_pane_cp_wide

0xbc59,	// (0x00046b02) grid_popup_fast_wide_pane_ParamLimits

0xbc59,	// (0x00046b02) grid_popup_fast_wide_pane

0xbc6d,	// (0x00046b16) scroll_pane_cp19_ParamLimits

0xbc6d,	// (0x00046b16) scroll_pane_cp19

0x7eb1,	// (0x00042d5a) bg_popup_window_pane_cp20

0xbc81,	// (0x00046b2a) listscroll_popup_fast_wide_pane

0x7f91,	// (0x00042e3a) grid_indicator_nsta_pane

0xbc89,	// (0x00046b32) clock_nsta_pane_g1

0xbc92,	// (0x00046b3b) clock_nsta_pane_t1

0xbcae,	// (0x00046b57) cell_indicator_nsta_pane_ParamLimits

0xbcae,	// (0x00046b57) cell_indicator_nsta_pane

0xbcdf,	// (0x00046b88) cell_indicator_nsta_pane_g1

0xbced,	// (0x00046b96) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x0004a94a) cell_indicator_nsta_pane_g

0xbcfa,	// (0x00046ba3) clock_nsta_pane_cp

0xbd02,	// (0x00046bab) indicator_nsta_pane_cp

0xbd0a,	// (0x00046bb3) nsta_clock_indic_pane_g1

0x805a,	// (0x00042f03) grid_indicator_pane

0x8d93,	// (0x00043c3c) scroll_pane_cp29

0x606d,	// (0x00040f16) indicator_nsta_pane_cp2_ParamLimits

0x606d,	// (0x00040f16) indicator_nsta_pane_cp2

0x7f91,	// (0x00042e3a) main_apps_wheel_pane

0x9fd9,	// (0x00044e82) form_midp_field_text_pane_ParamLimits

0xa124,	// (0x00044fcd) scroll_bar_cp050_ParamLimits

0xbd6b,	// (0x00046c14) cell_indicator_pane_ParamLimits

0xbd6b,	// (0x00046c14) cell_indicator_pane

0xbd82,	// (0x00046c2b) cell_indicator_pane_g1

0xbd8c,	// (0x00046c35) grid_wheel_folder_pane_ParamLimits

0xbd8c,	// (0x00046c35) grid_wheel_folder_pane

0xbda2,	// (0x00046c4b) list_wheel_apps_pane_ParamLimits

0xbda2,	// (0x00046c4b) list_wheel_apps_pane

0xbdb3,	// (0x00046c5c) main_apps_wheel_pane_g1_ParamLimits

0xbdb3,	// (0x00046c5c) main_apps_wheel_pane_g1

0xbdc7,	// (0x00046c70) main_apps_wheel_pane_g2_ParamLimits

0xbdc7,	// (0x00046c70) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x0004a966) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x0004a966) main_apps_wheel_pane_g

0xbddf,	// (0x00046c88) main_apps_wheel_pane_t1_ParamLimits

0xbddf,	// (0x00046c88) main_apps_wheel_pane_t1

0xbe02,	// (0x00046cab) list_wheel_apps_pane_g1

0xbe0a,	// (0x00046cb3) list_wheel_apps_pane_g2

0xbe12,	// (0x00046cbb) list_wheel_apps_pane_g3

0xbe1a,	// (0x00046cc3) list_wheel_apps_pane_g4

0xbe24,	// (0x00046ccd) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x0004a96b) list_wheel_apps_pane_g

0x9316,	// (0x000441bf) navi_icon_text_pane

0x97f6,	// (0x0004469f) aid_fill_nsta

0xbe47,	// (0x00046cf0) navi_icon_text_pane_g1

0xbe53,	// (0x00046cfc) navi_icon_text_pane_t1

0x91a9,	// (0x00044052) list_set_graphic_pane_t1_ParamLimits

0x91a9,	// (0x00044052) list_set_graphic_pane_t1

0xa87f,	// (0x00045728) popup_midp_note_alarm_window_t6_ParamLimits

0xa87f,	// (0x00045728) popup_midp_note_alarm_window_t6

0xa891,	// (0x0004573a) popup_midp_note_alarm_window_t7_ParamLimits

0xa891,	// (0x0004573a) popup_midp_note_alarm_window_t7

0xa8a3,	// (0x0004574c) popup_midp_note_alarm_window_t8_ParamLimits

0xa8a3,	// (0x0004574c) popup_midp_note_alarm_window_t8

0xa8b5,	// (0x0004575e) popup_midp_note_alarm_window_t9_ParamLimits

0xa8b5,	// (0x0004575e) popup_midp_note_alarm_window_t9

0xa8c7,	// (0x00045770) popup_midp_note_alarm_window_t10_ParamLimits

0xa8c7,	// (0x00045770) popup_midp_note_alarm_window_t10

0xa8d9,	// (0x00045782) popup_midp_note_alarm_window_t11_ParamLimits

0xa8d9,	// (0x00045782) popup_midp_note_alarm_window_t11

0xa8eb,	// (0x00045794) scroll_pane_cp17_ParamLimits

0xa8eb,	// (0x00045794) scroll_pane_cp17

0x6aa4,	// (0x0004194d) volume_small_pane_cp_g1

0x6e64,	// (0x00041d0d) volume_small_pane_cp_g2

0x6e6d,	// (0x00041d16) volume_small_pane_cp_g3

0x6e76,	// (0x00041d1f) volume_small_pane_cp_g4

0x6e7f,	// (0x00041d28) volume_small_pane_cp_g5

0x6e88,	// (0x00041d31) volume_small_pane_cp_g6

0x6e91,	// (0x00041d3a) volume_small_pane_cp_g7

0x6e9a,	// (0x00041d43) volume_small_pane_cp_g8

0x6ea3,	// (0x00041d4c) volume_small_pane_cp_g9

0x6eac,	// (0x00041d55) volume_small_pane_cp_g10

0x9567,	// (0x00044410) midp_ticker_pane_g1_ParamLimits

0x9573,	// (0x0004441c) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0004a606) midp_ticker_pane_g_ParamLimits

0x957f,	// (0x00044428) midp_ticker_pane_t1_ParamLimits

0x980c,	// (0x000446b5) aid_fill_nsta_2

0xa110,	// (0x00044fb9) list_form2_midp_pane

0xb245,	// (0x000460ee) midp_editing_number_pane_ParamLimits

0xb254,	// (0x000460fd) midp_ticker_pane_ParamLimits

0xbe65,	// (0x00046d0e) form2_midp_field_pane

0xbe89,	// (0x00046d32) scroll_pane_cp51

0xbea9,	// (0x00046d52) form2_midp_button_pane_ParamLimits

0xbea9,	// (0x00046d52) form2_midp_button_pane

0xbebb,	// (0x00046d64) form2_midp_content_pane_ParamLimits

0xbebb,	// (0x00046d64) form2_midp_content_pane

0xbed5,	// (0x00046d7e) form2_midp_field_choice_group_pane

0xbedd,	// (0x00046d86) form2_midp_field_pane_g1

0xbee5,	// (0x00046d8e) form2_midp_field_pane_g2

0xbeed,	// (0x00046d96) form2_midp_field_pane_g3

0xbef5,	// (0x00046d9e) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x0004a990) form2_midp_field_pane_g

0xbefd,	// (0x00046da6) form2_midp_gauge_slider_pane

0xbf05,	// (0x00046dae) form2_midp_gauge_wait_pane

0xbf0d,	// (0x00046db6) form2_midp_image_pane_ParamLimits

0xbf0d,	// (0x00046db6) form2_midp_image_pane

0xbf28,	// (0x00046dd1) form2_midp_label_pane_ParamLimits

0xbf28,	// (0x00046dd1) form2_midp_label_pane

0xbf41,	// (0x00046dea) form2_midp_label_pane_cp_ParamLimits

0xbf41,	// (0x00046dea) form2_midp_label_pane_cp

0xbf62,	// (0x00046e0b) form2_midp_string_pane_ParamLimits

0xbf62,	// (0x00046e0b) form2_midp_string_pane

0x5592,	// (0x0004043b) form2_midp_text_pane_ParamLimits

0x5592,	// (0x0004043b) form2_midp_text_pane

0xbf74,	// (0x00046e1d) form2_midp_time_pane

0xbf84,	// (0x00046e2d) input_focus_pane_cp51_ParamLimits

0xbf84,	// (0x00046e2d) input_focus_pane_cp51

0xbf9c,	// (0x00046e45) form2_midp_label_pane_t1_ParamLimits

0xbf9c,	// (0x00046e45) form2_midp_label_pane_t1

0x55b1,	// (0x0004045a) form2_mdip_text_pane_t1_ParamLimits

0x55b1,	// (0x0004045a) form2_mdip_text_pane_t1

0x55cf,	// (0x00040478) form2_midp_time_pane_t1

0xbfe5,	// (0x00046e8e) form2_midp_gauge_slider_pane_t1

0xbff7,	// (0x00046ea0) form2_midp_gauge_slider_pane_t2

0xc009,	// (0x00046eb2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x0004a999) form2_midp_gauge_slider_pane_t

0xc01b,	// (0x00046ec4) form2_midp_slider_pane

0xc027,	// (0x00046ed0) form2_midp_gauge_wait_pane_t1

0xc035,	// (0x00046ede) form2_midp_wait_pane_ParamLimits

0xc035,	// (0x00046ede) form2_midp_wait_pane

0x9e0b,	// (0x00044cb4) list_single_2graphic_pane_cp4_ParamLimits

0x9e0b,	// (0x00044cb4) list_single_2graphic_pane_cp4

0xc060,	// (0x00046f09) list_single_midp_graphic_pane_cp_ParamLimits

0xc060,	// (0x00046f09) list_single_midp_graphic_pane_cp

0x7eb1,	// (0x00042d5a) list_highlight_pane_cp20

0xc08f,	// (0x00046f38) list_single_2graphic_pane_g1_cp4

0xc097,	// (0x00046f40) list_single_2graphic_pane_g2_cp4

0xc09f,	// (0x00046f48) list_single_2graphic_pane_t1_cp4

0x7f91,	// (0x00042e3a) list_highlight_pane_cp21

0xc0ae,	// (0x00046f57) list_single_midp_graphic_pane_g4_cp

0xc0bd,	// (0x00046f66) list_single_midp_graphic_pane_t1_cp

0xc0d2,	// (0x00046f7b) form2_mdip_string_pane_t1_ParamLimits

0xc0d2,	// (0x00046f7b) form2_mdip_string_pane_t1

0x7eb1,	// (0x00042d5a) bg_wml_button_pane_cp2

0x7ea7,	// (0x00042d50) form2_midp_image_pane_g1

0x5d5f,	// (0x00040c08) list_double_large_graphic_pane_g5_ParamLimits

0x5d5f,	// (0x00040c08) list_double_large_graphic_pane_g5

0x89e4,	// (0x0004388d) midp_form_pane_ParamLimits

0x7f91,	// (0x00042e3a) main_apps_wheel_pane_ParamLimits

0x6744,	// (0x000415ed) popup_preview_window_ParamLimits

0x6744,	// (0x000415ed) popup_preview_window

0x68ff,	// (0x000417a8) popup_touch_info_window_ParamLimits

0x68ff,	// (0x000417a8) popup_touch_info_window

0x691d,	// (0x000417c6) popup_touch_menu_window_ParamLimits

0x691d,	// (0x000417c6) popup_touch_menu_window

0x7e9d,	// (0x00042d46) bg_popup_sub_pane_cp6

0xc1cb,	// (0x00047074) list_touch_menu_pane

0xc1d3,	// (0x0004707c) list_single_touch_menu_pane_ParamLimits

0xc1d3,	// (0x0004707c) list_single_touch_menu_pane

0xc1e9,	// (0x00047092) list_single_touch_menu_pane_t1

0x7f91,	// (0x00042e3a) bg_popup_sub_pane_cp7_ParamLimits

0x7f91,	// (0x00042e3a) bg_popup_sub_pane_cp7

0xc1f7,	// (0x000470a0) heading_sub_pane

0xc1ff,	// (0x000470a8) list_touch_info_pane_ParamLimits

0xc1ff,	// (0x000470a8) list_touch_info_pane

0xc20e,	// (0x000470b7) list_single_touch_info_pane_ParamLimits

0xc20e,	// (0x000470b7) list_single_touch_info_pane

0xc220,	// (0x000470c9) list_single_touch_info_pane_t1

0xc22e,	// (0x000470d7) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x0004a9a7) list_single_touch_info_pane_t

0x9496,	// (0x0004433f) bg_popup_heading_pane_cp

0xc23c,	// (0x000470e5) heading_sub_pane_t1

0x9d52,	// (0x00044bfb) bg_popup_preview_window_pane_cp_ParamLimits

0x9d52,	// (0x00044bfb) bg_popup_preview_window_pane_cp

0xc1f7,	// (0x000470a0) heading_preview_pane

0xc1ff,	// (0x000470a8) list_preview_pane_ParamLimits

0xc1ff,	// (0x000470a8) list_preview_pane

0xc24a,	// (0x000470f3) popup_preview_window_g1

0xc20e,	// (0x000470b7) list_single_preview_pane_ParamLimits

0xc20e,	// (0x000470b7) list_single_preview_pane

0xc252,	// (0x000470fb) list_single_preview_pane_g1

0xc25a,	// (0x00047103) list_single_preview_pane_t1

0xc220,	// (0x000470c9) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x0004a9ac) list_single_preview_pane_t

0xc268,	// (0x00047111) bg_popup_heading_pane_cp2_ParamLimits

0xc268,	// (0x00047111) bg_popup_heading_pane_cp2

0xc27e,	// (0x00047127) heading_preview_pane_g1

0xc286,	// (0x0004712f) heading_preview_pane_t1_ParamLimits

0xc286,	// (0x0004712f) heading_preview_pane_t1

0x807d,	// (0x00042f26) soft_indicator_pane_t1_ParamLimits

0x8773,	// (0x0004361c) scroll_pane_ParamLimits

0x8c8c,	// (0x00043b35) scroll_sc2_left_pane

0x8c95,	// (0x00043b3e) scroll_sc2_right_pane

0x8cb4,	// (0x00043b5d) scroll_bg_pane_g1_ParamLimits

0x8cc9,	// (0x00043b72) scroll_bg_pane_g2_ParamLimits

0x8ce1,	// (0x00043b8a) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0004a591) scroll_bg_pane_g_ParamLimits

0x8cb4,	// (0x00043b5d) scroll_handle_pane_g1_ParamLimits

0x8d03,	// (0x00043bac) scroll_handle_pane_g2_ParamLimits

0x8ce1,	// (0x00043b8a) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0004a598) scroll_handle_pane_g_ParamLimits

0x63c5,	// (0x0004126e) popup_choice_list_window_ParamLimits

0x63c5,	// (0x0004126e) popup_choice_list_window

0x9c28,	// (0x00044ad1) choice_list_pane

0x9caa,	// (0x00044b53) cell_toolbar_pane_t1

0x9cd2,	// (0x00044b7b) toolbar_button_pane_ParamLimits

0xada5,	// (0x00045c4e) ai_gene_pane_1_t2_ParamLimits

0xada5,	// (0x00045c4e) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0004a7c0) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0004a7c0) ai_gene_pane_1_t

0xc2a3,	// (0x0004714c) scroll_sc2_left_pane_g1

0xc2a3,	// (0x0004714c) scroll_sc2_right_pane_g1

0x97d4,	// (0x0004467d) bg_popup_sub_pane_cp10

0xc2ad,	// (0x00047156) list_choice_list_pane

0xc2c6,	// (0x0004716f) list_single_choice_list_pane_ParamLimits

0xc2c6,	// (0x0004716f) list_single_choice_list_pane

0xc2d9,	// (0x00047182) list_single_choice_list_pane_g1

0x8994,	// (0x0004383d) list_single_choice_list_pane_t1_ParamLimits

0x8994,	// (0x0004383d) list_single_choice_list_pane_t1

0xc2e1,	// (0x0004718a) choice_list_pane_g1

0xc2e9,	// (0x00047192) choice_list_pane_t1

0x7e9d,	// (0x00042d46) input_focus_pane_cp11

0x8b6b,	// (0x00043a14) title_pane_stacon_g2_ParamLimits

0x8b6b,	// (0x00043a14) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0004a577) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0004a577) title_pane_stacon_g

0x9496,	// (0x0004433f) cursor_press_pane

0x6471,	// (0x0004131a) popup_fep_hwr_window_ParamLimits

0x6471,	// (0x0004131a) popup_fep_hwr_window

0x64eb,	// (0x00041394) popup_fep_vkb_window_ParamLimits

0x64eb,	// (0x00041394) popup_fep_vkb_window

0xc2f7,	// (0x000471a0) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x0004a9d5) fep_vkb_side_pane_g_ParamLimits

0x6eee,	// (0x00041d97) fep_hwr_candidate_pane_ParamLimits

0x6eee,	// (0x00041d97) fep_hwr_candidate_pane

0x6f18,	// (0x00041dc1) fep_hwr_side_pane_ParamLimits

0x6f18,	// (0x00041dc1) fep_hwr_side_pane

0x6f38,	// (0x00041de1) fep_hwr_top_pane_ParamLimits

0x6f38,	// (0x00041de1) fep_hwr_top_pane

0x6f50,	// (0x00041df9) fep_hwr_write_pane_ParamLimits

0x6f50,	// (0x00041df9) fep_hwr_write_pane

0xfb2c,	// (0x0004a9d5) fep_vkb_side_pane_g

0xc2ff,	// (0x000471a8) fep_hwr_top_pane_g1

0xc311,	// (0x000471ba) fep_hwr_top_pane_g2

0x6f7c,	// (0x00041e25) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x0004a9b1) fep_hwr_top_pane_g

0x6f91,	// (0x00041e3a) fep_hwr_top_text_pane

0x8e83,	// (0x00043d2c) fep_hwr_top_text_pane_g1

0xc347,	// (0x000471f0) fep_hwr_top_text_pane_t1

0x7087,	// (0x00041f30) fep_hwr_candidate_pane_g1

0xc59a,	// (0x00047443) fep_vkb_keypad_pane_g3_ParamLimits

0xc59a,	// (0x00047443) fep_vkb_keypad_pane_g3

0xc5c2,	// (0x0004746b) fep_vkb_keypad_pane_g4_ParamLimits

0xc5c2,	// (0x0004746b) fep_vkb_keypad_pane_g4

0xc631,	// (0x000474da) fep_vkb_bottom_pane_g2_ParamLimits

0xc631,	// (0x000474da) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x0004a9dc) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x0004a9dc) fep_vkb_bottom_pane_g

0xc2a3,	// (0x0004714c) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x0004a9e6) cell_vkb_side_pane_g

0xc6bc,	// (0x00047565) cell_vkb_side_pane_t1

0xc6ca,	// (0x00047573) cell_vkb_side_pane_t1_copy1

0xc2a3,	// (0x0004714c) bg_fep_vkb_candidate_pane_g2

0xc7f6,	// (0x0004769f) cell_vkb_candidate_pane_ParamLimits

0xc355,	// (0x000471fe) aid_size_cell_vkb_ParamLimits

0xc355,	// (0x000471fe) aid_size_cell_vkb

0xc7f6,	// (0x0004769f) cell_vkb_candidate_pane

0x70a1,	// (0x00041f4a) bg_popup_fep_shadow_pane_g1

0xc3e3,	// (0x0004728c) fep_vkb_bottom_pane_ParamLimits

0xc3e3,	// (0x0004728c) fep_vkb_bottom_pane

0xc419,	// (0x000472c2) fep_vkb_candidate_pane_ParamLimits

0xc419,	// (0x000472c2) fep_vkb_candidate_pane

0xc435,	// (0x000472de) fep_vkb_keypad_pane_ParamLimits

0xc435,	// (0x000472de) fep_vkb_keypad_pane

0xc47b,	// (0x00047324) fep_vkb_side_pane_ParamLimits

0xc47b,	// (0x00047324) fep_vkb_side_pane

0xc4b7,	// (0x00047360) fep_vkb_top_pane_ParamLimits

0xc4b7,	// (0x00047360) fep_vkb_top_pane

0xc4f3,	// (0x0004739c) fep_vkb_top_pane_g1_ParamLimits

0xc4f3,	// (0x0004739c) fep_vkb_top_pane_g1

0xc502,	// (0x000473ab) fep_vkb_top_pane_g2_ParamLimits

0xc502,	// (0x000473ab) fep_vkb_top_pane_g2

0xc511,	// (0x000473ba) fep_vkb_top_pane_g3_ParamLimits

0xc511,	// (0x000473ba) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x0004a9cc) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x0004a9cc) fep_vkb_top_pane_g

0xc52f,	// (0x000473d8) fep_vkb_top_text_pane_ParamLimits

0xc52f,	// (0x000473d8) fep_vkb_top_text_pane

0xc540,	// (0x000473e9) fep_vkb_side_pane_g1_ParamLimits

0xc540,	// (0x000473e9) fep_vkb_side_pane_g1

0xc589,	// (0x00047432) grid_vkb_side_pane_ParamLimits

0xc589,	// (0x00047432) grid_vkb_side_pane

0x70a9,	// (0x00041f52) bg_popup_fep_shadow_pane_g2

0x70b2,	// (0x00041f5b) bg_popup_fep_shadow_pane_g3

0x70ba,	// (0x00041f63) bg_popup_fep_shadow_pane_g4

0x70c3,	// (0x00041f6c) bg_popup_fep_shadow_pane_g5

0x70cd,	// (0x00041f76) bg_popup_fep_shadow_pane_g6

0x70d5,	// (0x00041f7e) bg_popup_fep_shadow_pane_g7

0x887b,	// (0x00043724) bg_popup_fep_shadow_pane_g8

0xc5e0,	// (0x00047489) grid_vkb_keypad_number_pane_ParamLimits

0xc5e0,	// (0x00047489) grid_vkb_keypad_number_pane

0xc5f0,	// (0x00047499) grid_vkb_keypad_pane_ParamLimits

0xc5f0,	// (0x00047499) grid_vkb_keypad_pane

0xc616,	// (0x000474bf) fep_vkb_bottom_pane_g1_ParamLimits

0xc616,	// (0x000474bf) fep_vkb_bottom_pane_g1

0xc63f,	// (0x000474e8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc63f,	// (0x000474e8) grid_vkb_keypad_bottom_left_pane

0xc654,	// (0x000474fd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc654,	// (0x000474fd) grid_vkb_keypad_bottom_right_pane

0xc669,	// (0x00047512) fep_vkb_top_text_pane_g1

0xc684,	// (0x0004752d) fep_vkb_top_text_pane_t1

0xc699,	// (0x00047542) cell_vkb_side_pane_ParamLimits

0xc699,	// (0x00047542) cell_vkb_side_pane

0xc2a3,	// (0x0004714c) cell_vkb_side_pane_g1

0xc6d8,	// (0x00047581) cell_vkb_keypad_pane_ParamLimits

0xc6d8,	// (0x00047581) cell_vkb_keypad_pane

0xc74d,	// (0x000475f6) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x0004a9f9) bg_popup_fep_shadow_pane_g

0xc2a3,	// (0x0004714c) cell_hwr_side_pane_g1

0xc2a3,	// (0x0004714c) cell_hwr_side_pane_g2

0xc757,	// (0x00047600) cell_vkb_keypad_pane_t1

0xc765,	// (0x0004760e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc765,	// (0x0004760e) cell_vkb_keypad_bottom_left_pane

0xc782,	// (0x0004762b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc782,	// (0x0004762b) cell_vkb_keypad_bottom_right_pane

0xc2a3,	// (0x0004714c) cell_vkb_keypad_bottom_left_pane_g1

0xc2a3,	// (0x0004714c) cell_vkb_keypad_bottom_right_pane_g1

0xc7bb,	// (0x00047664) cell_vkb_keypad_number_pane_ParamLimits

0xc7bb,	// (0x00047664) cell_vkb_keypad_number_pane

0xc7da,	// (0x00047683) cell_vkb_keypad_number_pane_g1

0xc7e4,	// (0x0004768d) cell_vkb_keypad_number_pane_g2

0xc7ed,	// (0x00047696) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x0004a9eb) cell_vkb_keypad_number_pane_g

0xc757,	// (0x00047600) cell_vkb_keypad_number_pane_t1

0xc811,	// (0x000476ba) fep_vkb_candidate_pane_g1

0x0001,

0xfb3d,	// (0x0004a9e6) cell_hwr_side_pane_g

0xc82a,	// (0x000476d3) cell_hwr_side_pane_t1

0x70e7,	// (0x00041f90) cell_hwr_side_pane_t1_copy1

0xc521,	// (0x000473ca) cell_hwr_candidate_pane_g1

0x70f5,	// (0x00041f9e) cell_hwr_candidate_pane_t1

0xc2a3,	// (0x0004714c) cell_vkb_candidate_pane_g2

0xc8b0,	// (0x00047759) cell_vkb_candidate_pane_t1

0x6eb5,	// (0x00041d5e) bg_popup_fep_shadow_pane_ParamLimits

0x6eb5,	// (0x00041d5e) bg_popup_fep_shadow_pane

0x2d1e,	// (0x0003dbc7) bg_fep_hwr_top_pane_g4

0xc323,	// (0x000471cc) bg_hwr_side_pane_g1_ParamLimits

0xc323,	// (0x000471cc) bg_hwr_side_pane_g1

0x6fcd,	// (0x00041e76) cell_hwr_side_pane_ParamLimits

0x6fcd,	// (0x00041e76) cell_hwr_side_pane

0x7008,	// (0x00041eb1) fep_hwr_write_pane_g1_ParamLimits

0x7008,	// (0x00041eb1) fep_hwr_write_pane_g1

0x7015,	// (0x00041ebe) fep_hwr_write_pane_g2_ParamLimits

0x7015,	// (0x00041ebe) fep_hwr_write_pane_g2

0x7022,	// (0x00041ecb) fep_hwr_write_pane_g3_ParamLimits

0x7022,	// (0x00041ecb) fep_hwr_write_pane_g3

0x7030,	// (0x00041ed9) fep_hwr_write_pane_g4_ParamLimits

0x7030,	// (0x00041ed9) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x0004a9b8) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x0004a9b8) fep_hwr_write_pane_g

0x2d1e,	// (0x0003dbc7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2d1e,	// (0x0003dbc7) bg_fep_hwr_candidate_pane_g2

0x7045,	// (0x00041eee) cell_hwr_candidate_pane_ParamLimits

0x7045,	// (0x00041eee) cell_hwr_candidate_pane

0x7087,	// (0x00041f30) fep_hwr_candidate_pane_g1_ParamLimits

0xc383,	// (0x0004722c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc383,	// (0x0004722c) bg_popup_fep_shadow_pane_cp2

0xc521,	// (0x000473ca) fep_vkb_top_pane_g4_ParamLimits

0xc521,	// (0x000473ca) fep_vkb_top_pane_g4

0xc567,	// (0x00047410) fep_vkb_side_pane_g2_ParamLimits

0xc567,	// (0x00047410) fep_vkb_side_pane_g2

0x4c9e,	// (0x0003fb47) list_setting_pane_t4_ParamLimits

0x4c9e,	// (0x0003fb47) list_setting_pane_t4

0x4d38,	// (0x0003fbe1) list_setting_number_pane_t5_ParamLimits

0x4d38,	// (0x0003fbe1) list_setting_number_pane_t5

0x8eca,	// (0x00043d73) list_double_heading_pane_cp2_ParamLimits

0x8eca,	// (0x00043d73) list_double_heading_pane_cp2

0x87a7,	// (0x00043650) list_double_heading_pane_g1_cp2_ParamLimits

0x87a7,	// (0x00043650) list_double_heading_pane_g1_cp2

0x881a,	// (0x000436c3) list_double_heading_pane_g2_cp2_ParamLimits

0x881a,	// (0x000436c3) list_double_heading_pane_g2_cp2

0xc8be,	// (0x00047767) list_double_heading_pane_t1_cp2_ParamLimits

0xc8be,	// (0x00047767) list_double_heading_pane_t1_cp2

0xc8d4,	// (0x0004777d) list_double_heading_pane_t2_cp2_ParamLimits

0xc8d4,	// (0x0004777d) list_double_heading_pane_t2_cp2

0x7e85,	// (0x00042d2e) aid_value_unit2

0x5b35,	// (0x000409de) popup_preview_fixed_window

0x821a,	// (0x000430c3) bg_popup_preview_window_pane_cp02

0xc8e6,	// (0x0004778f) list_preview_fixed_pane

0xc92c,	// (0x000477d5) list_empty_pane_fp_ParamLimits

0xc92c,	// (0x000477d5) list_empty_pane_fp

0xc92c,	// (0x000477d5) list_single_cale_day_pane_fp_ParamLimits

0xc92c,	// (0x000477d5) list_single_cale_day_pane_fp

0xc92c,	// (0x000477d5) list_single_graphic_heading_pane_fp_ParamLimits

0xc92c,	// (0x000477d5) list_single_graphic_heading_pane_fp

0xc92c,	// (0x000477d5) list_single_graphic_pane_fp_ParamLimits

0xc92c,	// (0x000477d5) list_single_graphic_pane_fp

0xc92c,	// (0x000477d5) list_single_heading_pane_fp_ParamLimits

0xc92c,	// (0x000477d5) list_single_heading_pane_fp

0xc92c,	// (0x000477d5) list_single_pane_fp_ParamLimits

0xc92c,	// (0x000477d5) list_single_pane_fp

0xc941,	// (0x000477ea) list_single_pane_fp_g1_ParamLimits

0xc941,	// (0x000477ea) list_single_pane_fp_g1

0x87a7,	// (0x00043650) list_single_pane_fp_g2_ParamLimits

0x87a7,	// (0x00043650) list_single_pane_fp_g2

0x881a,	// (0x000436c3) list_single_pane_fp_g3_ParamLimits

0x881a,	// (0x000436c3) list_single_pane_fp_g3

0xc94d,	// (0x000477f6) list_single_pane_fp_g4_ParamLimits

0xc94d,	// (0x000477f6) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x0004aa1a) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x0004aa1a) list_single_pane_fp_g

0x55e2,	// (0x0004048b) list_single_pane_fp_t1_ParamLimits

0x55e2,	// (0x0004048b) list_single_pane_fp_t1

0x55f9,	// (0x000404a2) list_single_graphic_pane_fp_g1_ParamLimits

0x55f9,	// (0x000404a2) list_single_graphic_pane_fp_g1

0xc941,	// (0x000477ea) list_single_graphic_pane_fp_g2_ParamLimits

0xc941,	// (0x000477ea) list_single_graphic_pane_fp_g2

0x87a7,	// (0x00043650) list_single_graphic_pane_fp_g3_ParamLimits

0x87a7,	// (0x00043650) list_single_graphic_pane_fp_g3

0x881a,	// (0x000436c3) list_single_graphic_pane_fp_g4_ParamLimits

0x881a,	// (0x000436c3) list_single_graphic_pane_fp_g4

0xc94d,	// (0x000477f6) list_single_graphic_pane_fp_g5_ParamLimits

0xc94d,	// (0x000477f6) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004aa23) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004aa23) list_single_graphic_pane_fp_g

0x5605,	// (0x000404ae) list_single_graphic_pane_fp_t1_ParamLimits

0x5605,	// (0x000404ae) list_single_graphic_pane_fp_t1

0x55f9,	// (0x000404a2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x55f9,	// (0x000404a2) list_single_graphic_heading_pane_fp_g1

0xc941,	// (0x000477ea) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc941,	// (0x000477ea) list_single_graphic_heading_pane_fp_g2

0x87a7,	// (0x00043650) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x87a7,	// (0x00043650) list_single_graphic_heading_pane_fp_g3

0x881a,	// (0x000436c3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x881a,	// (0x000436c3) list_single_graphic_heading_pane_fp_g4

0xc94d,	// (0x000477f6) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc94d,	// (0x000477f6) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004aa23) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004aa23) list_single_graphic_heading_pane_fp_g

0x561b,	// (0x000404c4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x561b,	// (0x000404c4) list_single_graphic_heading_pane_fp_t1

0x5631,	// (0x000404da) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5631,	// (0x000404da) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0004aa2e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0004aa2e) list_single_graphic_heading_pane_fp_t

0x5643,	// (0x000404ec) list_single_cale_day_pane_fp_g1_ParamLimits

0x5643,	// (0x000404ec) list_single_cale_day_pane_fp_g1

0xc959,	// (0x00047802) list_single_cale_day_pane_fp_g2_ParamLimits

0xc959,	// (0x00047802) list_single_cale_day_pane_fp_g2

0x7113,	// (0x00041fbc) list_single_cale_day_pane_fp_g3_ParamLimits

0x7113,	// (0x00041fbc) list_single_cale_day_pane_fp_g3

0x713b,	// (0x00041fe4) list_single_cale_day_pane_fp_g4_ParamLimits

0x713b,	// (0x00041fe4) list_single_cale_day_pane_fp_g4

0x715f,	// (0x00042008) list_single_cale_day_pane_fp_g5_ParamLimits

0x715f,	// (0x00042008) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004aa33) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004aa33) list_single_cale_day_pane_fp_g

0x567b,	// (0x00040524) list_single_cale_day_pane_fp_t1_ParamLimits

0x567b,	// (0x00040524) list_single_cale_day_pane_fp_t1

0x56a1,	// (0x0004054a) list_single_cale_day_pane_fp_t2_ParamLimits

0x56a1,	// (0x0004054a) list_single_cale_day_pane_fp_t2

0x56ba,	// (0x00040563) list_single_cale_day_pane_fp_t3_ParamLimits

0x56ba,	// (0x00040563) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x0004aa3e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x0004aa3e) list_single_cale_day_pane_fp_t

0xc941,	// (0x000477ea) list_empty_pane_fp_g1_ParamLimits

0xc941,	// (0x000477ea) list_empty_pane_fp_g1

0x56d3,	// (0x0004057c) list_empty_pane_fp_t1

0x56e1,	// (0x0004058a) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x0004aa45) list_empty_pane_fp_t

0xc941,	// (0x000477ea) list_single_heading_pane_fp_g1_ParamLimits

0xc941,	// (0x000477ea) list_single_heading_pane_fp_g1

0x87a7,	// (0x00043650) list_single_heading_pane_fp_g2_ParamLimits

0x87a7,	// (0x00043650) list_single_heading_pane_fp_g2

0x881a,	// (0x000436c3) list_single_heading_pane_fp_g3_ParamLimits

0x881a,	// (0x000436c3) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x0004aa4a) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0004aa4a) list_single_heading_pane_fp_g

0x56ef,	// (0x00040598) list_single_heading_pane_fp_t1_ParamLimits

0x56ef,	// (0x00040598) list_single_heading_pane_fp_t1

0x5701,	// (0x000405aa) list_single_heading_pane_fp_t2_ParamLimits

0x5701,	// (0x000405aa) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0004aa51) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0004aa51) list_single_heading_pane_fp_t

0x8a02,	// (0x000438ab) aid_size_cell_fast

0x818a,	// (0x00043033) soft_indicator_pane_cp1_t1

0x8a3f,	// (0x000438e8) cell_app_pane_cp2_ParamLimits

0x8a3f,	// (0x000438e8) cell_app_pane_cp2

0x6ed7,	// (0x00041d80) fep_hwr_candidate_drop_down_list_pane

0x2d2c,	// (0x0003dbd5) fep_hwr_candidate_pane_g3_ParamLimits

0x2d2c,	// (0x0003dbd5) fep_hwr_candidate_pane_g3

0x2d39,	// (0x0003dbe2) fep_hwr_candidate_pane_g4_ParamLimits

0x2d39,	// (0x0003dbe2) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x0004a9c5) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x0004a9c5) fep_hwr_candidate_pane_g

0xc408,	// (0x000472b1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc408,	// (0x000472b1) fep_vkb_candidate_drop_down_list_pane

0xc819,	// (0x000476c2) fep_vkb_candidate_pane_g3

0xc821,	// (0x000476ca) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x0004a9f2) fep_vkb_candidate_pane_g

0xc521,	// (0x000473ca) cell_hwr_candidate_pane_g1_ParamLimits

0xc838,	// (0x000476e1) cell_hwr_candidate_pane_g3_ParamLimits

0xc838,	// (0x000476e1) cell_hwr_candidate_pane_g3

0xc859,	// (0x00047702) cell_hwr_candidate_pane_g4_ParamLimits

0xc859,	// (0x00047702) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x0004aa0c) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x0004aa0c) cell_hwr_candidate_pane_g

0xc87a,	// (0x00047723) cell_vkb_candidate_pane_g3_ParamLimits

0xc87a,	// (0x00047723) cell_vkb_candidate_pane_g3

0xc895,	// (0x0004773e) cell_vkb_candidate_pane_g4_ParamLimits

0xc895,	// (0x0004773e) cell_vkb_candidate_pane_g4

0xc965,	// (0x0004780e) cell_app_pane_cp2_g1_ParamLimits

0xc965,	// (0x0004780e) cell_app_pane_cp2_g1

0xc983,	// (0x0004782c) cell_app_pane_cp2_g2_ParamLimits

0xc983,	// (0x0004782c) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x0004aa56) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x0004aa56) cell_app_pane_cp2_g

0xc98f,	// (0x00047838) cell_app_pane_cp2_t1_ParamLimits

0xc98f,	// (0x00047838) cell_app_pane_cp2_t1

0x880c,	// (0x000436b5) grid_highlight_pane_cp1_ParamLimits

0x880c,	// (0x000436b5) grid_highlight_pane_cp1

0x7183,	// (0x0004202c) cell_hwr_candidate_pane_cp1_ParamLimits

0x7183,	// (0x0004202c) cell_hwr_candidate_pane_cp1

0xc521,	// (0x000473ca) fep_hwr_candidate_drop_down_list_pane_g1

0xc9a1,	// (0x0004784a) fep_hwr_candidate_drop_down_list_pane_g2

0xc9ae,	// (0x00047857) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0004aa5b) fep_hwr_candidate_drop_down_list_pane_g

0x71a2,	// (0x0004204b) fep_hwr_candidate_drop_down_list_scroll_pane

0x71ab,	// (0x00042054) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71ab,	// (0x00042054) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71b8,	// (0x00042061) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71b8,	// (0x00042061) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71c5,	// (0x0004206e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71c5,	// (0x0004206e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc87a,	// (0x00047723) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc87a,	// (0x00047723) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc895,	// (0x0004773e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc895,	// (0x0004773e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x71d2,	// (0x0004207b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71d2,	// (0x0004207b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x71ed,	// (0x00042096) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71ed,	// (0x00042096) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7208,	// (0x000420b1) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7208,	// (0x000420b1) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0004aa62) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0004aa62) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9bb,	// (0x00047864) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9bb,	// (0x00047864) cell_vkb_candidate_pane_cp1

0xc521,	// (0x000473ca) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc521,	// (0x000473ca) fep_vkb_candidate_drop_down_list_pane_g1

0xc9a1,	// (0x0004784a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9a1,	// (0x0004784a) fep_vkb_candidate_drop_down_list_pane_g2

0xc9ae,	// (0x00047857) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9ae,	// (0x00047857) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0004aa5b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x0004aa5b) fep_vkb_candidate_drop_down_list_pane_g

0xc9db,	// (0x00047884) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9db,	// (0x00047884) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9e8,	// (0x00047891) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9e8,	// (0x00047891) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9f5,	// (0x0004789e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9f5,	// (0x0004789e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca01,	// (0x000478aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca01,	// (0x000478aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc838,	// (0x000476e1) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc838,	// (0x000476e1) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc859,	// (0x00047702) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc859,	// (0x00047702) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca0d,	// (0x000478b6) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca0d,	// (0x000478b6) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca2e,	// (0x000478d7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca2e,	// (0x000478d7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca4f,	// (0x000478f8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca4f,	// (0x000478f8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0004aa73) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0004aa73) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7ebb,	// (0x00042d64) title_pane_g1_ParamLimits

0x7ec8,	// (0x00042d71) title_pane_g2_ParamLimits

0xf54e,	// (0x0004a3f7) title_pane_g_ParamLimits

0x8e73,	// (0x00043d1c) aid_call2_pane

0x8e7b,	// (0x00043d24) aid_call_pane

0x8e83,	// (0x00043d2c) popup_clock_analogue_window_g1

0x8e83,	// (0x00043d2c) popup_clock_analogue_window_g2

0x5f52,	// (0x00040dfb) popup_clock_analogue_window_g3

0x5f5b,	// (0x00040e04) popup_clock_analogue_window_g4

0x7ea7,	// (0x00042d50) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0004a5a6) popup_clock_analogue_window_g

0x5f63,	// (0x00040e0c) popup_clock_analogue_window_t1

0x5f71,	// (0x00040e1a) clock_digital_number_pane_ParamLimits

0x5f71,	// (0x00040e1a) clock_digital_number_pane

0x5f7d,	// (0x00040e26) clock_digital_number_pane_cp02_ParamLimits

0x5f7d,	// (0x00040e26) clock_digital_number_pane_cp02

0x5f89,	// (0x00040e32) clock_digital_number_pane_cp03_ParamLimits

0x5f89,	// (0x00040e32) clock_digital_number_pane_cp03

0x5f95,	// (0x00040e3e) clock_digital_number_pane_cp04_ParamLimits

0x5f95,	// (0x00040e3e) clock_digital_number_pane_cp04

0x5fa1,	// (0x00040e4a) clock_digital_separator_pane_ParamLimits

0x5fa1,	// (0x00040e4a) clock_digital_separator_pane

0x5fad,	// (0x00040e56) popup_clock_digital_window_t1_ParamLimits

0x5fad,	// (0x00040e56) popup_clock_digital_window_t1

0x7ea7,	// (0x00042d50) clock_digital_number_pane_g1

0x7ea7,	// (0x00042d50) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0004a5b1) clock_digital_number_pane_g

0x7ea7,	// (0x00042d50) clock_digital_separator_pane_g1

0x7ea7,	// (0x00042d50) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0004a5b1) clock_digital_separator_pane_g

0x97f6,	// (0x0004469f) aid_fill_nsta_ParamLimits

0x993c,	// (0x000447e5) indicator_nsta_pane_ParamLimits

0x9ab5,	// (0x0004495e) popup_clock_analogue_window

0x9ab5,	// (0x0004495e) popup_clock_digital_window

0x7f91,	// (0x00042e3a) grid_indicator_nsta_pane_ParamLimits

0xbca0,	// (0x00046b49) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x0004a945) clock_nsta_pane_t

0x5f16,	// (0x00040dbf) aid_size_max_handle

0x5f20,	// (0x00040dc9) aid_size_min_handle

0x9496,	// (0x0004433f) editor_scroll_pane

0xca76,	// (0x0004791f) ex_editor_pane

0x8970,	// (0x00043819) scroll_pane_cp13

0x879f,	// (0x00043648) scroll_pane_cp14

0x8eb2,	// (0x00043d5b) scroll_pane_cp36

0x8ede,	// (0x00043d87) list_single_graphic_hl_pane_cp2_ParamLimits

0x8ede,	// (0x00043d87) list_single_graphic_hl_pane_cp2

0x525d,	// (0x00040106) list_single_graphic_hl_pane_ParamLimits

0x525d,	// (0x00040106) list_single_graphic_hl_pane

0x5717,	// (0x000405c0) aid_size_min_hl_cp1

0xca7e,	// (0x00047927) list_highlight_pane_cp34_ParamLimits

0xca7e,	// (0x00047927) list_highlight_pane_cp34

0xca8f,	// (0x00047938) list_single_graphic_hl_pane_g1_ParamLimits

0xca8f,	// (0x00047938) list_single_graphic_hl_pane_g1

0x5720,	// (0x000405c9) list_single_graphic_hl_pane_g2_ParamLimits

0x5720,	// (0x000405c9) list_single_graphic_hl_pane_g2

0x5720,	// (0x000405c9) list_single_graphic_hl_pane_g3_ParamLimits

0x5720,	// (0x000405c9) list_single_graphic_hl_pane_g3

0x9407,	// (0x000442b0) list_single_graphic_hl_pane_g4_ParamLimits

0x9407,	// (0x000442b0) list_single_graphic_hl_pane_g4

0x7223,	// (0x000420cc) list_single_graphic_hl_pane_g5_ParamLimits

0x7223,	// (0x000420cc) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0004aa84) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0004aa84) list_single_graphic_hl_pane_g

0x572c,	// (0x000405d5) list_single_graphic_hl_pane_t1_ParamLimits

0x572c,	// (0x000405d5) list_single_graphic_hl_pane_t1

0xca9c,	// (0x00047945) aid_size_min_hl_cp2

0xcaa5,	// (0x0004794e) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa5,	// (0x0004794e) list_highlight_pane_cp34_cp2

0xca8f,	// (0x00047938) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca8f,	// (0x00047938) list_single_graphic_hl_pane_g1_cp2

0xcab2,	// (0x0004795b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab2,	// (0x0004795b) list_single_graphic_hl_pane_g2_cp2

0xcabe,	// (0x00047967) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcabe,	// (0x00047967) list_single_graphic_hl_pane_g3_cp2

0xca6a,	// (0x00047913) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xca6a,	// (0x00047913) list_single_graphic_hl_pane_g4_cp2

0xcacc,	// (0x00047975) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcacc,	// (0x00047975) list_single_graphic_hl_pane_g5_cp2

0x627d,	// (0x00041126) control_pane_g4_ParamLimits

0x627d,	// (0x00041126) control_pane_g4

0x97d4,	// (0x0004467d) bg_popup_sub_pane_cp10_ParamLimits

0xc2ad,	// (0x00047156) list_choice_list_pane_ParamLimits

0xc2bc,	// (0x00047165) scroll_pane_cp23

0x821a,	// (0x000430c3) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8e6,	// (0x0004778f) list_preview_fixed_pane_ParamLimits

0xc8fc,	// (0x000477a5) list_preview_fixed_pane_cp_ParamLimits

0xc8fc,	// (0x000477a5) list_preview_fixed_pane_cp

0xc908,	// (0x000477b1) popup_preview_fixed_window_g1_ParamLimits

0xc908,	// (0x000477b1) popup_preview_fixed_window_g1

0xc914,	// (0x000477bd) popup_preview_fixed_window_g2_ParamLimits

0xc914,	// (0x000477bd) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x0004aa13) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x0004aa13) popup_preview_fixed_window_g

0x5e8a,	// (0x00040d33) aid_navi_side_left_pane_ParamLimits

0x5e9f,	// (0x00040d48) aid_navi_side_right_pane_ParamLimits

0x5eb7,	// (0x00040d60) navi_icon_pane_stacon_ParamLimits

0x5ecb,	// (0x00040d74) navi_navi_pane_stacon_ParamLimits

0x5eb7,	// (0x00040d60) navi_text_pane_stacon_ParamLimits

0x7e9d,	// (0x00042d46) main_text_info_pane

0xcaf6,	// (0x0004799f) listscroll_text_info_pane

0xcafe,	// (0x000479a7) list_text_info_pane_ParamLimits

0xcafe,	// (0x000479a7) list_text_info_pane

0xcb0d,	// (0x000479b6) scroll_pane_cp24_ParamLimits

0xcb0d,	// (0x000479b6) scroll_pane_cp24

0xcb2b,	// (0x000479d4) list_text_info_pane_t1_ParamLimits

0xcb2b,	// (0x000479d4) list_text_info_pane_t1

0x63e3,	// (0x0004128c) popup_fast_swap2_window_ParamLimits

0x63e3,	// (0x0004128c) popup_fast_swap2_window

0xcb5c,	// (0x00047a05) aid_size_cell_fast2

0x7e9d,	// (0x00042d46) bg_popup_window_pane_cp17

0xa13c,	// (0x00044fe5) heading_pane_cp2

0x8469,	// (0x00043312) listscroll_fast2_pane

0xcb66,	// (0x00047a0f) grid_fast2_pane

0xcb70,	// (0x00047a19) listscroll_fast2_pane_g1

0xcb78,	// (0x00047a21) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0004aa8f) listscroll_fast2_pane_g

0x8970,	// (0x00043819) scroll_pane_cp26

0xcb82,	// (0x00047a2b) cell_fast2_pane_ParamLimits

0xcb82,	// (0x00047a2b) cell_fast2_pane

0xcb97,	// (0x00047a40) cell_fast2_pane_g1

0xcba0,	// (0x00047a49) cell_fast2_pane_g2

0xcba9,	// (0x00047a52) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0004aa94) cell_fast2_pane_g

0x855c,	// (0x00043405) grid_highlight_pane_cp9

0x8571,	// (0x0004341a) main_eswt_pane_ParamLimits

0x8571,	// (0x0004341a) main_eswt_pane

0xcb22,	// (0x000479cb) list_single_text_info_pane

0xcbb1,	// (0x00047a5a) eswt_ctrl_button_pane

0xcbb1,	// (0x00047a5a) eswt_ctrl_canvas_pane

0xcbb9,	// (0x00047a62) eswt_ctrl_combo_pane

0xcbb1,	// (0x00047a5a) eswt_ctrl_default_pane

0xcbb1,	// (0x00047a5a) eswt_ctrl_label_pane

0xcbc1,	// (0x00047a6a) eswt_ctrl_wait_pane

0xcbc9,	// (0x00047a72) eswt_shell_pane

0x7e9d,	// (0x00042d46) listscroll_eswt_app_pane

0xcbe9,	// (0x00047a92) popup_eswt_tasktip_window_ParamLimits

0xcbe9,	// (0x00047a92) popup_eswt_tasktip_window

0x9d52,	// (0x00044bfb) bg_popup_window_pane_cp18

0xcbfa,	// (0x00047aa3) eswt_control_pane_g1_ParamLimits

0xcbfa,	// (0x00047aa3) eswt_control_pane_g1

0xcc07,	// (0x00047ab0) eswt_control_pane_g2_ParamLimits

0xcc07,	// (0x00047ab0) eswt_control_pane_g2

0xcc14,	// (0x00047abd) eswt_control_pane_g3_ParamLimits

0xcc14,	// (0x00047abd) eswt_control_pane_g3

0xcc21,	// (0x00047aca) eswt_control_pane_g4_ParamLimits

0xcc21,	// (0x00047aca) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0004aa9b) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0004aa9b) eswt_control_pane_g

0x880c,	// (0x000436b5) bg_button_pane_ParamLimits

0x880c,	// (0x000436b5) bg_button_pane

0x8571,	// (0x0004341a) common_borders_pane_copy2_ParamLimits

0x8571,	// (0x0004341a) common_borders_pane_copy2

0xcc2e,	// (0x00047ad7) control_button_pane_g1_ParamLimits

0xcc2e,	// (0x00047ad7) control_button_pane_g1

0xcc3a,	// (0x00047ae3) control_button_pane_g2_ParamLimits

0xcc3a,	// (0x00047ae3) control_button_pane_g2

0xcc46,	// (0x00047aef) control_button_pane_g3_ParamLimits

0xcc46,	// (0x00047aef) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0004aaa4) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0004aaa4) control_button_pane_g

0xcc5a,	// (0x00047b03) control_button_pane_t1

0xcc68,	// (0x00047b11) control_button_pane_t2

0x0001,

0xfc02,	// (0x0004aaab) control_button_pane_t

0x9cde,	// (0x00044b87) bg_button_pane_g1

0x9ce6,	// (0x00044b8f) bg_button_pane_g2

0x9cee,	// (0x00044b97) bg_button_pane_g3

0x9cf6,	// (0x00044b9f) bg_button_pane_g4

0x9cfe,	// (0x00044ba7) bg_button_pane_g5

0x9d06,	// (0x00044baf) bg_button_pane_g6

0x9d0e,	// (0x00044bb7) bg_button_pane_g7

0x9d16,	// (0x00044bbf) bg_button_pane_g8

0x9d1e,	// (0x00044bc7) bg_button_pane_g9

0x0008,

0xf86b,	// (0x0004a714) bg_button_pane_g

0xc268,	// (0x00047111) common_borders_pane_ParamLimits

0xc268,	// (0x00047111) common_borders_pane

0xcbfa,	// (0x00047aa3) eswt_control_pane_g1_copy1_ParamLimits

0xcbfa,	// (0x00047aa3) eswt_control_pane_g1_copy1

0xcc07,	// (0x00047ab0) eswt_control_pane_g2_copy1_ParamLimits

0xcc07,	// (0x00047ab0) eswt_control_pane_g2_copy1

0xcc14,	// (0x00047abd) eswt_control_pane_g3_copy1_ParamLimits

0xcc14,	// (0x00047abd) eswt_control_pane_g3_copy1

0xcc21,	// (0x00047aca) eswt_control_pane_g4_copy1_ParamLimits

0xcc21,	// (0x00047aca) eswt_control_pane_g4_copy1

0xc2a3,	// (0x0004714c) bg_eswt_ctrl_canvas_pane_g1

0xc268,	// (0x00047111) common_borders_pane_cp2_ParamLimits

0xc268,	// (0x00047111) common_borders_pane_cp2

0xc268,	// (0x00047111) common_borders_pane_cp3_ParamLimits

0xc268,	// (0x00047111) common_borders_pane_cp3

0xcc76,	// (0x00047b1f) separator_horizontal_pane

0xcc7e,	// (0x00047b27) separator_vertical_pane

0xcbfa,	// (0x00047aa3) eswt_control_pane_g1_copy2_ParamLimits

0xcbfa,	// (0x00047aa3) eswt_control_pane_g1_copy2

0xcc07,	// (0x00047ab0) eswt_control_pane_g2_copy2_ParamLimits

0xcc07,	// (0x00047ab0) eswt_control_pane_g2_copy2

0xcc14,	// (0x00047abd) eswt_control_pane_g3_copy2_ParamLimits

0xcc14,	// (0x00047abd) eswt_control_pane_g3_copy2

0xcc21,	// (0x00047aca) eswt_control_pane_g4_copy2_ParamLimits

0xcc21,	// (0x00047aca) eswt_control_pane_g4_copy2

0x7e9d,	// (0x00042d46) common_borders_pane_cp4

0xcc87,	// (0x00047b30) separator_horizontal_pane_g1

0xcc90,	// (0x00047b39) separator_horizontal_pane_g2

0xcc99,	// (0x00047b42) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0004aab0) separator_horizontal_pane_g

0xcbfa,	// (0x00047aa3) eswt_control_pane_g1_copy3_ParamLimits

0xcbfa,	// (0x00047aa3) eswt_control_pane_g1_copy3

0xcc07,	// (0x00047ab0) eswt_control_pane_g2_copy3_ParamLimits

0xcc07,	// (0x00047ab0) eswt_control_pane_g2_copy3

0xcc14,	// (0x00047abd) eswt_control_pane_g3_copy3_ParamLimits

0xcc14,	// (0x00047abd) eswt_control_pane_g3_copy3

0xcc21,	// (0x00047aca) eswt_control_pane_g4_copy3_ParamLimits

0xcc21,	// (0x00047aca) eswt_control_pane_g4_copy3

0x7e9d,	// (0x00042d46) common_borders_pane_cp5

0xcca2,	// (0x00047b4b) separator_vertical_pane_g1

0xccab,	// (0x00047b54) separator_vertical_pane_g2

0xccb4,	// (0x00047b5d) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0004aab7) separator_vertical_pane_g

0xcbfa,	// (0x00047aa3) eswt_control_pane_g1_copy4_ParamLimits

0xcbfa,	// (0x00047aa3) eswt_control_pane_g1_copy4

0xcc07,	// (0x00047ab0) eswt_control_pane_g2_copy4_ParamLimits

0xcc07,	// (0x00047ab0) eswt_control_pane_g2_copy4

0xcc14,	// (0x00047abd) eswt_control_pane_g3_copy4_ParamLimits

0xcc14,	// (0x00047abd) eswt_control_pane_g3_copy4

0xcc21,	// (0x00047aca) eswt_control_pane_g4_copy4_ParamLimits

0xcc21,	// (0x00047aca) eswt_control_pane_g4_copy4

0xccbd,	// (0x00047b66) eswt_ctrl_combo_button_pane

0xccc5,	// (0x00047b6e) eswt_ctrl_input_pane

0xcccd,	// (0x00047b76) popup_choice_list_window_cp70

0xccd5,	// (0x00047b7e) eswt_ctrl_input_pane_t1

0x7e9d,	// (0x00042d46) input_focus_pane_cp70

0xc268,	// (0x00047111) bg_button_pane_cp70_ParamLimits

0xc268,	// (0x00047111) bg_button_pane_cp70

0xcce3,	// (0x00047b8c) eswt_ctrl_combo_button_pane_g1

0xcceb,	// (0x00047b94) wait_bar_pane_cp70

0x9d52,	// (0x00044bfb) bg_popup_window_pane_cp70_ParamLimits

0x9d52,	// (0x00044bfb) bg_popup_window_pane_cp70

0xccf3,	// (0x00047b9c) popup_eswt_tasktip_window_t1

0xcd09,	// (0x00047bb2) wait_bar_pane_cp71_ParamLimits

0xcd09,	// (0x00047bb2) wait_bar_pane_cp71

0xcd15,	// (0x00047bbe) grid_eswt_app_pane

0x8c95,	// (0x00043b3e) scroll_pane_cp70

0xcd1e,	// (0x00047bc7) cell_eswt_app_pane_ParamLimits

0xcd1e,	// (0x00047bc7) cell_eswt_app_pane

0xcd4e,	// (0x00047bf7) cell_eswt_app_pane_g1_ParamLimits

0xcd4e,	// (0x00047bf7) cell_eswt_app_pane_g1

0xcd7d,	// (0x00047c26) cell_eswt_app_pane_g2_ParamLimits

0xcd7d,	// (0x00047c26) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0004aabe) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0004aabe) cell_eswt_app_pane_g

0xcda6,	// (0x00047c4f) cell_eswt_app_pane_t1_ParamLimits

0xcda6,	// (0x00047c4f) cell_eswt_app_pane_t1

0xcdd8,	// (0x00047c81) grid_highlight_pane_cp70_ParamLimits

0xcdd8,	// (0x00047c81) grid_highlight_pane_cp70

0x936b,	// (0x00044214) set_content_pane_g1

0x9735,	// (0x000445de) status_small_volume_pane

0x7237,	// (0x000420e0) status_small_volume_pane_g1

0x723f,	// (0x000420e8) volume_small2_pane

0x7248,	// (0x000420f1) volume_small2_pane_g1

0x7251,	// (0x000420fa) volume_small2_pane_g2

0x725a,	// (0x00042103) volume_small2_pane_g3

0x7263,	// (0x0004210c) volume_small2_pane_g4

0x726c,	// (0x00042115) volume_small2_pane_g5

0x7275,	// (0x0004211e) volume_small2_pane_g6

0x727e,	// (0x00042127) volume_small2_pane_g7

0x7287,	// (0x00042130) volume_small2_pane_g8

0x7290,	// (0x00042139) volume_small2_pane_g9

0x7299,	// (0x00042142) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0004aac3) volume_small2_pane_g

0xc669,	// (0x00047512) fep_vkb_top_text_pane_g1_ParamLimits

0xc684,	// (0x0004752d) fep_vkb_top_text_pane_t1_ParamLimits

0xc920,	// (0x000477c9) popup_preview_fixed_window_g3_ParamLimits

0xc920,	// (0x000477c9) popup_preview_fixed_window_g3

0x6892,	// (0x0004173b) popup_toolbar_trans_pane

0xb0ad,	// (0x00045f56) aid_height_set_list_ParamLimits

0xb0be,	// (0x00045f67) aid_size_parent_ParamLimits

0x97d4,	// (0x0004467d) list_highlight_pane_cp2_ParamLimits

0x936b,	// (0x00044214) set_content_pane_g1_ParamLimits

0x5278,	// (0x00040121) list_single_image_pane_ParamLimits

0x5278,	// (0x00040121) list_single_image_pane

0xcde4,	// (0x00047c8d) aid_size_cell_image_ParamLimits

0xcde4,	// (0x00047c8d) aid_size_cell_image

0xcdf1,	// (0x00047c9a) grid_single_image_pane_ParamLimits

0xcdf1,	// (0x00047c9a) grid_single_image_pane

0xa4b2,	// (0x0004535b) list_single_image_pane_g1_ParamLimits

0xa4b2,	// (0x0004535b) list_single_image_pane_g1

0xcdfd,	// (0x00047ca6) list_single_image_pane_g2_ParamLimits

0xcdfd,	// (0x00047ca6) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0004aad8) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0004aad8) list_single_image_pane_g

0xce11,	// (0x00047cba) list_single_image_pane_t1_ParamLimits

0xce11,	// (0x00047cba) list_single_image_pane_t1

0xce27,	// (0x00047cd0) cell_image_list_pane_ParamLimits

0xce27,	// (0x00047cd0) cell_image_list_pane

0xce3b,	// (0x00047ce4) cell_image_list_pane_g1

0xce44,	// (0x00047ced) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0004aadd) cell_image_list_pane_g

0xce4d,	// (0x00047cf6) aid_size_cell_tb_trans_pane

0x880c,	// (0x000436b5) bg_tb_trans_pane

0xce5f,	// (0x00047d08) grid_tb_trans_pane

0x9cde,	// (0x00044b87) bg_tb_trans_pane_g1

0x9ce6,	// (0x00044b8f) bg_tb_trans_pane_g2

0x9cee,	// (0x00044b97) bg_tb_trans_pane_g3

0x9cf6,	// (0x00044b9f) bg_tb_trans_pane_g4

0x9cfe,	// (0x00044ba7) bg_tb_trans_pane_g5

0x9d16,	// (0x00044bbf) bg_tb_trans_pane_g6

0x9d1e,	// (0x00044bc7) bg_tb_trans_pane_g7

0x9d06,	// (0x00044baf) bg_tb_trans_pane_g8

0x9d0e,	// (0x00044bb7) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0004aae2) bg_tb_trans_pane_g

0xce73,	// (0x00047d1c) cell_toolbar_trans_pane_ParamLimits

0xce73,	// (0x00047d1c) cell_toolbar_trans_pane

0xc2a3,	// (0x0004714c) cell_toolbar_trans_pane_g1

0xbe6d,	// (0x00046d16) list_form2_midp_pane_t1

0xbe7b,	// (0x00046d24) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x0004a98b) list_form2_midp_pane_t

0xbe89,	// (0x00046d32) scroll_pane_cp51_ParamLimits

0xc045,	// (0x00046eee) form2_midp_wait_pane_g1

0xc04e,	// (0x00046ef7) form2_midp_wait_pane_g2

0xc057,	// (0x00046f00) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x0004a9a0) form2_midp_wait_pane_g

0x7f91,	// (0x00042e3a) list_highlight_pane_cp21_ParamLimits

0xc0ae,	// (0x00046f57) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0bd,	// (0x00046f66) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6ceb,	// (0x00041b94) list_single_2graphic_im_pane_ParamLimits

0x6ceb,	// (0x00041b94) list_single_2graphic_im_pane

0xce99,	// (0x00047d42) list_single_2graphic_im_pane_g1_ParamLimits

0xce99,	// (0x00047d42) list_single_2graphic_im_pane_g1

0xceaa,	// (0x00047d53) list_single_2graphic_im_pane_g2_ParamLimits

0xceaa,	// (0x00047d53) list_single_2graphic_im_pane_g2

0xceb6,	// (0x00047d5f) list_single_2graphic_im_pane_g3_ParamLimits

0xceb6,	// (0x00047d5f) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0004aaf5) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0004aaf5) list_single_2graphic_im_pane_g

0xced6,	// (0x00047d7f) list_single_2graphic_im_pane_t1_ParamLimits

0xced6,	// (0x00047d7f) list_single_2graphic_im_pane_t1

0xc92c,	// (0x000477d5) list_single_graphic_2heading_pane_fp_ParamLimits

0xc92c,	// (0x000477d5) list_single_graphic_2heading_pane_fp

0x55f9,	// (0x000404a2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x55f9,	// (0x000404a2) list_single_graphic_2heading_pane_fp_g1

0xc941,	// (0x000477ea) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc941,	// (0x000477ea) list_single_graphic_2heading_pane_fp_g2

0x87a7,	// (0x00043650) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x87a7,	// (0x00043650) list_single_graphic_2heading_pane_fp_g3

0x881a,	// (0x000436c3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x881a,	// (0x000436c3) list_single_graphic_2heading_pane_fp_g4

0xc94d,	// (0x000477f6) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc94d,	// (0x000477f6) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004aa23) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004aa23) list_single_graphic_2heading_pane_fp_g

0x5742,	// (0x000405eb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5742,	// (0x000405eb) list_single_graphic_2heading_pane_fp_t1

0x5631,	// (0x000404da) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5631,	// (0x000404da) list_single_graphic_2heading_pane_fp_t2

0x5758,	// (0x00040601) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5758,	// (0x00040601) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0004aafe) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0004aafe) list_single_graphic_2heading_pane_fp_t

0xc32f,	// (0x000471d8) fep_hwr_write_pane_g5_ParamLimits

0xc32f,	// (0x000471d8) fep_hwr_write_pane_g5

0xc33b,	// (0x000471e4) fep_hwr_write_pane_g6_ParamLimits

0xc33b,	// (0x000471e4) fep_hwr_write_pane_g6

0xcbc9,	// (0x00047a72) eswt_shell_pane_ParamLimits

0x9d52,	// (0x00044bfb) bg_popup_window_pane_cp18_ParamLimits

0xb006,	// (0x00045eaf) heading_pane_cp70

0xccf3,	// (0x00047b9c) popup_eswt_tasktip_window_t1_ParamLimits

0x984b,	// (0x000446f4) aid_touch_tab_arrow_left

0x985a,	// (0x00044703) aid_touch_tab_arrow_right

0x7ed9,	// (0x00042d82) title_pane_g3_ParamLimits

0x7ed9,	// (0x00042d82) title_pane_g3

0x87cb,	// (0x00043674) set_value_pane_g1

0x6892,	// (0x0004173b) popup_toolbar_trans_pane_ParamLimits

0xce4d,	// (0x00047cf6) aid_size_cell_tb_trans_pane_ParamLimits

0x880c,	// (0x000436b5) bg_tb_trans_pane_ParamLimits

0xce5f,	// (0x00047d08) grid_tb_trans_pane_ParamLimits

0x821a,	// (0x000430c3) cont_note_pane_ParamLimits

0x821a,	// (0x000430c3) cont_note_pane

0x8571,	// (0x0004341a) cont_snote2_single_text_pane_ParamLimits

0x8571,	// (0x0004341a) cont_snote2_single_text_pane

0x8571,	// (0x0004341a) cont_snote2_single_graphic_pane_ParamLimits

0x8571,	// (0x0004341a) cont_snote2_single_graphic_pane

0xa357,	// (0x00045200) cont_note_wait_pane_ParamLimits

0xa357,	// (0x00045200) cont_note_wait_pane

0xa357,	// (0x00045200) cont_note_image_pane_ParamLimits

0xa357,	// (0x00045200) cont_note_image_pane

0xcf07,	// (0x00047db0) popup_note2_window_g1_ParamLimits

0xcf07,	// (0x00047db0) popup_note2_window_g1

0xcf38,	// (0x00047de1) popup_note2_window_t1_ParamLimits

0xcf38,	// (0x00047de1) popup_note2_window_t1

0xcf7d,	// (0x00047e26) popup_note2_window_t2_ParamLimits

0xcf7d,	// (0x00047e26) popup_note2_window_t2

0xcfc2,	// (0x00047e6b) popup_note2_window_t3_ParamLimits

0xcfc2,	// (0x00047e6b) popup_note2_window_t3

0xd007,	// (0x00047eb0) popup_note2_window_t4_ParamLimits

0xd007,	// (0x00047eb0) popup_note2_window_t4

0x829e,	// (0x00043147) popup_note2_window_t5_ParamLimits

0x829e,	// (0x00043147) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0004ab0a) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0004ab0a) popup_note2_window_t

0xd036,	// (0x00047edf) popup_note2_image_window_g1_ParamLimits

0xd036,	// (0x00047edf) popup_note2_image_window_g1

0xd042,	// (0x00047eeb) popup_note2_image_window_g2_ParamLimits

0xd042,	// (0x00047eeb) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0004ab15) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0004ab15) popup_note2_image_window_g

0xd054,	// (0x00047efd) popup_note2_image_window_t1_ParamLimits

0xd054,	// (0x00047efd) popup_note2_image_window_t1

0xd06c,	// (0x00047f15) popup_note2_image_window_t2_ParamLimits

0xd06c,	// (0x00047f15) popup_note2_image_window_t2

0xd084,	// (0x00047f2d) popup_note2_image_window_t3_ParamLimits

0xd084,	// (0x00047f2d) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0004ab1a) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0004ab1a) popup_note2_image_window_t

0xa365,	// (0x0004520e) popup_note2_wait_window_g1_ParamLimits

0xa365,	// (0x0004520e) popup_note2_wait_window_g1

0xd0a0,	// (0x00047f49) popup_note2_wait_window_g2_ParamLimits

0xd0a0,	// (0x00047f49) popup_note2_wait_window_g2

0xa37d,	// (0x00045226) popup_note2_wait_window_g3_ParamLimits

0xa37d,	// (0x00045226) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0004ab21) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0004ab21) popup_note2_wait_window_g

0xd0ac,	// (0x00047f55) popup_note2_wait_window_t1_ParamLimits

0xd0ac,	// (0x00047f55) popup_note2_wait_window_t1

0xd0ca,	// (0x00047f73) popup_note2_wait_window_t2_ParamLimits

0xd0ca,	// (0x00047f73) popup_note2_wait_window_t2

0xd0e8,	// (0x00047f91) popup_note2_wait_window_t3_ParamLimits

0xd0e8,	// (0x00047f91) popup_note2_wait_window_t3

0xd0fa,	// (0x00047fa3) popup_note2_wait_window_t4_ParamLimits

0xd0fa,	// (0x00047fa3) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0004ab28) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0004ab28) popup_note2_wait_window_t

0xd10c,	// (0x00047fb5) wait_bar2_pane_ParamLimits

0xd10c,	// (0x00047fb5) wait_bar2_pane

0xd124,	// (0x00047fcd) popup_snote2_single_text_window_g1_ParamLimits

0xd124,	// (0x00047fcd) popup_snote2_single_text_window_g1

0xd14c,	// (0x00047ff5) popup_snote2_single_text_window_t1_ParamLimits

0xd14c,	// (0x00047ff5) popup_snote2_single_text_window_t1

0xd198,	// (0x00048041) popup_snote2_single_text_window_t2_ParamLimits

0xd198,	// (0x00048041) popup_snote2_single_text_window_t2

0xd1e4,	// (0x0004808d) popup_snote2_single_text_window_t3_ParamLimits

0xd1e4,	// (0x0004808d) popup_snote2_single_text_window_t3

0xd225,	// (0x000480ce) popup_snote2_single_text_window_t4_ParamLimits

0xd225,	// (0x000480ce) popup_snote2_single_text_window_t4

0xd25b,	// (0x00048104) popup_snote2_single_text_window_t5_ParamLimits

0xd25b,	// (0x00048104) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0004ab31) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0004ab31) popup_snote2_single_text_window_t

0xd286,	// (0x0004812f) popup_snote2_single_graphic_window_g1_ParamLimits

0xd286,	// (0x0004812f) popup_snote2_single_graphic_window_g1

0xd2ae,	// (0x00048157) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2ae,	// (0x00048157) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0004ab3c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0004ab3c) popup_snote2_single_graphic_window_g

0xd2d6,	// (0x0004817f) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2d6,	// (0x0004817f) popup_snote2_single_graphic_window_t1

0xd322,	// (0x000481cb) popup_snote2_single_graphic_window_t2_ParamLimits

0xd322,	// (0x000481cb) popup_snote2_single_graphic_window_t2

0xd1e4,	// (0x0004808d) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e4,	// (0x0004808d) popup_snote2_single_graphic_window_t3

0xd225,	// (0x000480ce) popup_snote2_single_graphic_window_t4_ParamLimits

0xd225,	// (0x000480ce) popup_snote2_single_graphic_window_t4

0xd25b,	// (0x00048104) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25b,	// (0x00048104) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0004ab41) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0004ab41) popup_snote2_single_graphic_window_t

0xbd4a,	// (0x00046bf3) clock_nsta_pane_cp2_t1

0xbd4a,	// (0x00046bf3) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x0004a961) clock_nsta_pane_cp2_t

0x4e58,	// (0x0003fd01) form_field_data_wide_pane_g1_ParamLimits

0x87a7,	// (0x00043650) form_field_data_wide_pane_g2_ParamLimits

0x87a7,	// (0x00043650) form_field_data_wide_pane_g2

0x881a,	// (0x000436c3) form_field_data_wide_pane_g3_ParamLimits

0x881a,	// (0x000436c3) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0004a529) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0004a529) form_field_data_wide_pane_g

0xbc3c,	// (0x00046ae5) grid_touch_3_pane_ParamLimits

0xbc3c,	// (0x00046ae5) grid_touch_3_pane

0xd36e,	// (0x00048217) cell_touch_3_pane_ParamLimits

0xd36e,	// (0x00048217) cell_touch_3_pane

0xc2a3,	// (0x0004714c) cell_touch_3_pane_g1

0xc2a3,	// (0x0004714c) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x0004a9e6) cell_touch_3_pane_g

0x82d0,	// (0x00043179) cont_query_data_pane

0x82d8,	// (0x00043181) cont_query_data_pane_cp1

0xd39c,	// (0x00048245) button_value_adjust_pane_cp7

0xd3a4,	// (0x0004824d) query_popup_pane_cp3

0x8f73,	// (0x00043e1c) bg_popup_sub_pane_cp22_ParamLimits

0x5fcc,	// (0x00040e75) navi_navi_volume_pane_cp2

0x5fe7,	// (0x00040e90) popup_side_volume_key_window_g2

0x5ff6,	// (0x00040e9f) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0004a5bf) popup_side_volume_key_window_g

0x6013,	// (0x00040ebc) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0004a5c6) popup_side_volume_key_window_t

0x922a,	// (0x000440d3) popup_side_volume_key_window_ParamLimits

0x4aa0,	// (0x0003f949) list_double_graphic_pane_g4_ParamLimits

0x4aa0,	// (0x0003f949) list_double_graphic_pane_g4

0x6d28,	// (0x00041bd1) list_single_2heading_msg_pane_ParamLimits

0x6d28,	// (0x00041bd1) list_single_2heading_msg_pane

0x72a2,	// (0x0004214b) list_single_2heading_msg_pane_g1_ParamLimits

0x72a2,	// (0x0004214b) list_single_2heading_msg_pane_g1

0x93cf,	// (0x00044278) list_single_2heading_msg_pane_g2_ParamLimits

0x93cf,	// (0x00044278) list_single_2heading_msg_pane_g2

0x6e2f,	// (0x00041cd8) list_single_2heading_msg_pane_g3_ParamLimits

0x6e2f,	// (0x00041cd8) list_single_2heading_msg_pane_g3

0x72ae,	// (0x00042157) list_single_2heading_msg_pane_g4_ParamLimits

0x72ae,	// (0x00042157) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0004ab4c) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0004ab4c) list_single_2heading_msg_pane_g

0x5778,	// (0x00040621) list_single_2heading_msg_pane_t1_ParamLimits

0x5778,	// (0x00040621) list_single_2heading_msg_pane_t1

0x57a0,	// (0x00040649) list_single_2heading_msg_pane_t2_ParamLimits

0x57a0,	// (0x00040649) list_single_2heading_msg_pane_t2

0x57d4,	// (0x0004067d) list_single_2heading_msg_pane_t3_ParamLimits

0x57d4,	// (0x0004067d) list_single_2heading_msg_pane_t3

0x580d,	// (0x000406b6) list_single_2heading_msg_pane_t4_ParamLimits

0x580d,	// (0x000406b6) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0004ab55) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0004ab55) list_single_2heading_msg_pane_t

0x7ee5,	// (0x00042d8e) title_pane_g4_ParamLimits

0x7ee5,	// (0x00042d8e) title_pane_g4

0x5ddb,	// (0x00040c84) title_pane_stacon_g3_ParamLimits

0x5ddb,	// (0x00040c84) title_pane_stacon_g3

0xceca,	// (0x00047d73) list_single_2graphic_im_pane_g4_ParamLimits

0xceca,	// (0x00047d73) list_single_2graphic_im_pane_g4

0xadc2,	// (0x00045c6b) popup_side_volume_key_window_cp

0xb589,	// (0x00046432) main_idle_act2_pane_t1

0x6990,	// (0x00041839) toolbar_button_pane_g10

0x8769,	// (0x00043612) popup_toolbar_window_cp1

0xbd3b,	// (0x00046be4) clock_nsta_pane_cp_t1

0xbd3b,	// (0x00046be4) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x0004a95c) clock_nsta_pane_cp_t

0x5fcc,	// (0x00040e75) navi_navi_volume_pane_cp2_ParamLimits

0x5fdb,	// (0x00040e84) popup_side_volume_key_window_g1_ParamLimits

0x5fe7,	// (0x00040e90) popup_side_volume_key_window_g2_ParamLimits

0x5ff6,	// (0x00040e9f) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0004a5bf) popup_side_volume_key_window_g_ParamLimits

0x6ec3,	// (0x00041d6c) fep_hwr_aid_pane

0x2d1e,	// (0x0003dbc7) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2ff,	// (0x000471a8) fep_hwr_top_pane_g1_ParamLimits

0xc311,	// (0x000471ba) fep_hwr_top_pane_g2_ParamLimits

0x6f7c,	// (0x00041e25) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x0004a9b1) fep_hwr_top_pane_g_ParamLimits

0x6f91,	// (0x00041e3a) fep_hwr_top_text_pane_ParamLimits

0xab85,	// (0x00045a2e) aid_touch_tab_arrow_arrow_2

0xab8e,	// (0x00045a37) aid_touch_tab_arrow_left_2

0x6ed7,	// (0x00041d80) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6f0e,	// (0x00041db7) fep_hwr_prediction_pane

0xc471,	// (0x0004731a) fep_vkb_prediction_pane

0xc575,	// (0x0004741e) fep_vkb_side_pane_g3_ParamLimits

0xc575,	// (0x0004741e) fep_vkb_side_pane_g3

0xc521,	// (0x000473ca) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc9a1,	// (0x0004784a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc9ae,	// (0x00047857) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x0004aa5b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3c9,	// (0x00048272) fep_hwr_prediction_pane_g1

0x72c6,	// (0x0004216f) fep_hwr_prediction_pane_g2

0x72ce,	// (0x00042177) fep_hwr_prediction_pane_g3

0x72d6,	// (0x0004217f) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0004ab5e) fep_hwr_prediction_pane_g

0xd3c9,	// (0x00048272) fep_vkb_prediction_pane_g1

0xd3d3,	// (0x0004827c) fep_vkb_prediction_pane_g2

0xd3db,	// (0x00048284) fep_vkb_prediction_pane_g3

0xd3e3,	// (0x0004828c) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0004ab67) fep_vkb_prediction_pane_g

0x6c78,	// (0x00041b21) slider_set_pane_g3

0x6c8c,	// (0x00041b35) slider_set_pane_g4

0x6ca4,	// (0x00041b4d) slider_set_pane_g5

0x6c78,	// (0x00041b21) slider_set_pane_g6

0x6cba,	// (0x00041b63) slider_set_pane_g7

0xb223,	// (0x000460cc) slider_form_pane_g3

0xb22c,	// (0x000460d5) slider_form_pane_g4

0xb234,	// (0x000460dd) slider_form_pane_g5

0xb223,	// (0x000460cc) slider_form_pane_g6

0xb23c,	// (0x000460e5) slider_form_pane_g7

0xb834,	// (0x000466dd) slider_set_pane_vc_g3

0xb83d,	// (0x000466e6) slider_set_pane_vc_g4

0xb846,	// (0x000466ef) slider_set_pane_vc_g5

0xb834,	// (0x000466dd) slider_set_pane_vc_g6

0xb84f,	// (0x000466f8) slider_set_pane_vc_g7

0xba0f,	// (0x000468b8) slider_form_pane_vc_g1

0xba18,	// (0x000468c1) slider_form_pane_vc_g2

0xba21,	// (0x000468ca) slider_form_pane_vc_g3

0xba0f,	// (0x000468b8) slider_form_pane_vc_g4

0xba2a,	// (0x000468d3) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x0004a92e) slider_form_pane_vc_g

0x7e9d,	// (0x00042d46) main_idle_act3_pane

0xd3eb,	// (0x00048294) ai3_links_pane

0xd3f4,	// (0x0004829d) popup_ai3_data_window_ParamLimits

0xd3f4,	// (0x0004829d) popup_ai3_data_window

0x7e9d,	// (0x00042d46) grid_ai3_links_pane

0xd40e,	// (0x000482b7) cell_ai3_links_pane_ParamLimits

0xd40e,	// (0x000482b7) cell_ai3_links_pane

0xd426,	// (0x000482cf) bg_popup_sub_pane_cp11

0xd433,	// (0x000482dc) cell_ai3_links_pane_g1

0x7e9d,	// (0x00042d46) bg_popup_sub_pane_cp12

0xd458,	// (0x00048301) heading_ai3_data_pane

0xd460,	// (0x00048309) list_ai3_gene_pane

0xd46c,	// (0x00048315) popup_ai3_data_window_g1

0xd474,	// (0x0004831d) heading_ai3_data_pane_g1

0xd47c,	// (0x00048325) heading_ai3_data_pane_t1

0xd48a,	// (0x00048333) list_double_ai3_gene_pane_ParamLimits

0xd48a,	// (0x00048333) list_double_ai3_gene_pane

0xd497,	// (0x00048340) list_single_ai3_gene_pane_ParamLimits

0xd497,	// (0x00048340) list_single_ai3_gene_pane

0xc268,	// (0x00047111) list_highlight_pane_cp7_ParamLimits

0xc268,	// (0x00047111) list_highlight_pane_cp7

0xd4a4,	// (0x0004834d) list_single_a13_gene_pane_t1_ParamLimits

0xd4a4,	// (0x0004834d) list_single_a13_gene_pane_t1

0xd4bb,	// (0x00048364) list_single_ai3_gene_pane_g1

0xd4c4,	// (0x0004836d) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0004ab70) list_single_ai3_gene_pane_g

0xd4cc,	// (0x00048375) list_double_ai3_gene_pane_g1_ParamLimits

0xd4cc,	// (0x00048375) list_double_ai3_gene_pane_g1

0xd4d8,	// (0x00048381) list_double_ai3_gene_pane_t1_ParamLimits

0xd4d8,	// (0x00048381) list_double_ai3_gene_pane_t1

0xd4f4,	// (0x0004839d) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f4,	// (0x0004839d) list_double_ai3_gene_pane_t2

0xd50a,	// (0x000483b3) list_double_ai3_gene_pane_t3_ParamLimits

0xd50a,	// (0x000483b3) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0004ab75) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0004ab75) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x576e,	// (0x00040617) aid_size_min_col_2

0xd3b5,	// (0x0004825e) aid_size_min_msg_ParamLimits

0xd3b5,	// (0x0004825e) aid_size_min_msg

0xc675,	// (0x0004751e) fep_vkb_top_text_pane_g2_ParamLimits

0xc675,	// (0x0004751e) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x0004a9e1) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x0004a9e1) fep_vkb_top_text_pane_g

0x7e9d,	// (0x00042d46) main_hc_apps_shell_pane

0xd527,	// (0x000483d0) grid_hc_apps_pane_ParamLimits

0xd527,	// (0x000483d0) grid_hc_apps_pane

0xd536,	// (0x000483df) list_hc_apps_pane

0xd53e,	// (0x000483e7) scroll_pane_cp37_ParamLimits

0xd53e,	// (0x000483e7) scroll_pane_cp37

0xd54a,	// (0x000483f3) cell_hc_apps_pane_ParamLimits

0xd54a,	// (0x000483f3) cell_hc_apps_pane

0xd5f8,	// (0x000484a1) cell_hc_apps_pane_g1_ParamLimits

0xd5f8,	// (0x000484a1) cell_hc_apps_pane_g1

0xd629,	// (0x000484d2) cell_hc_apps_pane_g2_ParamLimits

0xd629,	// (0x000484d2) cell_hc_apps_pane_g2

0xd645,	// (0x000484ee) cell_hc_apps_pane_g3_ParamLimits

0xd645,	// (0x000484ee) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0004ab7c) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0004ab7c) cell_hc_apps_pane_g

0xd667,	// (0x00048510) cell_hc_apps_pane_t1_ParamLimits

0xd667,	// (0x00048510) cell_hc_apps_pane_t1

0x821a,	// (0x000430c3) grid_highlight_pane_cp10_ParamLimits

0x821a,	// (0x000430c3) grid_highlight_pane_cp10

0xd6a7,	// (0x00048550) list_single_hc_apps_pane_ParamLimits

0xd6a7,	// (0x00048550) list_single_hc_apps_pane

0xd703,	// (0x000485ac) list_single_hc_apps_pane_g1

0x72de,	// (0x00042187) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0004ab83) list_single_hc_apps_pane_g

0x72f7,	// (0x000421a0) list_single_hc_apps_pane_g2_copy1

0x5832,	// (0x000406db) list_single_hc_apps_pane_t1

0x7f91,	// (0x00042e3a) bg_set_opt_pane_cp_ParamLimits

0x5c57,	// (0x00040b00) setting_slider_pane_t1_ParamLimits

0x5c70,	// (0x00040b19) setting_slider_pane_t2_ParamLimits

0x5c8a,	// (0x00040b33) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004a407) setting_slider_pane_t_ParamLimits

0x5ca2,	// (0x00040b4b) slider_set_pane_ParamLimits

0x6291,	// (0x0004113a) control_pane_g5_ParamLimits

0x6291,	// (0x0004113a) control_pane_g5

0xb072,	// (0x00045f1b) slider_set_pane_g1_ParamLimits

0x6c6c,	// (0x00041b15) slider_set_pane_g2_ParamLimits

0x6c78,	// (0x00041b21) slider_set_pane_g3_ParamLimits

0x6c8c,	// (0x00041b35) slider_set_pane_g4_ParamLimits

0x6ca4,	// (0x00041b4d) slider_set_pane_g5_ParamLimits

0x6c78,	// (0x00041b21) slider_set_pane_g6_ParamLimits

0x6cba,	// (0x00041b63) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0004a812) slider_set_pane_g_ParamLimits

0x9316,	// (0x000441bf) navi_icon_text_pane_ParamLimits

0x980c,	// (0x000446b5) aid_fill_nsta_2_ParamLimits

0x984b,	// (0x000446f4) aid_touch_tab_arrow_left_ParamLimits

0x985a,	// (0x00044703) aid_touch_tab_arrow_right_ParamLimits

0x98c7,	// (0x00044770) clock_nsta_pane_ParamLimits

0xab67,	// (0x00045a10) navi_icon_pane_g1_ParamLimits

0xab73,	// (0x00045a1c) navi_text_pane_t1_ParamLimits

0xbe47,	// (0x00046cf0) navi_icon_text_pane_g1_ParamLimits

0xbe53,	// (0x00046cfc) navi_icon_text_pane_t1_ParamLimits

0xd703,	// (0x000485ac) list_single_hc_apps_pane_g1_ParamLimits

0x72de,	// (0x00042187) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0004ab83) list_single_hc_apps_pane_g_ParamLimits

0x72f7,	// (0x000421a0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5832,	// (0x000406db) list_single_hc_apps_pane_t1_ParamLimits

0x5b61,	// (0x00040a0a) popup_toolbar2_fixed_window_ParamLimits

0x5b61,	// (0x00040a0a) popup_toolbar2_fixed_window

0x6888,	// (0x00041731) popup_toolbar2_float_window

0x7e9d,	// (0x00042d46) bg_popup_sub_pane_cp27

0xd71c,	// (0x000485c5) grid_toolbar2_float_pane

0x7e9d,	// (0x00042d46) bg_popup_sub_pane_cp26

0xd71c,	// (0x000485c5) grid_toolbar2_fixed_pane

0xd724,	// (0x000485cd) cell_toolbar2_fixed_pane_ParamLimits

0xd724,	// (0x000485cd) cell_toolbar2_fixed_pane

0xd734,	// (0x000485dd) cell_toolbar2_fixed_pane_g1

0xd73d,	// (0x000485e6) toolbar2_fixed_button_pane

0x9cde,	// (0x00044b87) toolbar2_fixed_button_pane_g1

0x9ce6,	// (0x00044b8f) toolbar2_fixed_button_pane_g2

0x9cee,	// (0x00044b97) toolbar2_fixed_button_pane_g3

0x9cf6,	// (0x00044b9f) toolbar2_fixed_button_pane_g4

0x9cfe,	// (0x00044ba7) toolbar2_fixed_button_pane_g5

0x9d06,	// (0x00044baf) toolbar2_fixed_button_pane_g6

0x9d0e,	// (0x00044bb7) toolbar2_fixed_button_pane_g7

0x9d16,	// (0x00044bbf) toolbar2_fixed_button_pane_g8

0x9d1e,	// (0x00044bc7) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x0004a714) toolbar2_fixed_button_pane_g

0xd745,	// (0x000485ee) cell_toolbar2_float_pane_ParamLimits

0xd745,	// (0x000485ee) cell_toolbar2_float_pane

0xd756,	// (0x000485ff) cell_toolbar2_float_pane_g1

0xd73d,	// (0x000485e6) toolbar2_fixed_button_pane_cp

0xc3d1,	// (0x0004727a) fep_vkb_accented_list_pane_ParamLimits

0xc3d1,	// (0x0004727a) fep_vkb_accented_list_pane

0x70df,	// (0x00041f88) bg_popup_fep_shadow_pane_g9

0x9496,	// (0x0004433f) bg_popup_fep_shadow_pane_cp3

0x8957,	// (0x00043800) list_accented_list_pane

0xd75f,	// (0x00048608) list_single_accented_list_pane_ParamLimits

0xd75f,	// (0x00048608) list_single_accented_list_pane

0x9496,	// (0x0004433f) list_highlight_pane_cp10

0xd770,	// (0x00048619) list_single_accented_list_pane_t1

0x67d8,	// (0x00041681) popup_slider_window_ParamLimits

0x67d8,	// (0x00041681) popup_slider_window

0xd3ac,	// (0x00048255) aid_indentation_list_msg

0xd82a,	// (0x000486d3) bg_popup_window_pane_cp19

0xd894,	// (0x0004873d) popup_slider_window_g1

0xd8b0,	// (0x00048759) popup_slider_window_g2

0xd8cc,	// (0x00048775) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0004ab88) popup_slider_window_g

0xd928,	// (0x000487d1) popup_slider_window_t1

0xd99c,	// (0x00048845) small_volume_slider_vertical_pane

0xc2a3,	// (0x0004714c) small_volume_slider_vertical_pane_g1

0xc2a3,	// (0x0004714c) small_volume_slider_vertical_pane_g2

0xd9b8,	// (0x00048861) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0004ab9a) small_volume_slider_vertical_pane_g

0x5923,	// (0x000407cc) area_side_right_pane_ParamLimits

0x5923,	// (0x000407cc) area_side_right_pane

0x7313,	// (0x000421bc) aid_size_side_button_ParamLimits

0x7313,	// (0x000421bc) aid_size_side_button

0x7327,	// (0x000421d0) grid_sctrl_middle_pane_ParamLimits

0x7327,	// (0x000421d0) grid_sctrl_middle_pane

0x7346,	// (0x000421ef) sctrl_sk_bottom_pane

0x7357,	// (0x00042200) sctrl_sk_top_pane

0x7369,	// (0x00042212) aid_touch_sctrl_top

0x821a,	// (0x000430c3) bg_sctrl_sk_pane_ParamLimits

0x821a,	// (0x000430c3) bg_sctrl_sk_pane

0x7376,	// (0x0004221f) sctrl_sk_top_pane_g1

0x7383,	// (0x0004222c) sctrl_sk_top_pane_t1

0x7369,	// (0x00042212) aid_touch_sctrl_bottom

0x821a,	// (0x000430c3) bg_sctrl_sk_pane_cp_ParamLimits

0x821a,	// (0x000430c3) bg_sctrl_sk_pane_cp

0x739e,	// (0x00042247) sctrl_sk_bottom_pane_g1

0x7383,	// (0x0004222c) sctrl_sk_bottom_pane_t1

0x73a7,	// (0x00042250) cell_sctrl_middle_pane_ParamLimits

0x73a7,	// (0x00042250) cell_sctrl_middle_pane

0x73c2,	// (0x0004226b) aid_touch_sctrl_middle_ParamLimits

0x73c2,	// (0x0004226b) aid_touch_sctrl_middle

0x880c,	// (0x000436b5) bg_sctrl_middle_pane_ParamLimits

0x880c,	// (0x000436b5) bg_sctrl_middle_pane

0xc521,	// (0x000473ca) cell_sctrl_middle_pane_g1_ParamLimits

0xc521,	// (0x000473ca) cell_sctrl_middle_pane_g1

0x73d4,	// (0x0004227d) cell_sctrl_middle_pane_g2_ParamLimits

0x73d4,	// (0x0004227d) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0004aba6) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0004aba6) cell_sctrl_middle_pane_g

0x9cde,	// (0x00044b87) bg_sctrl_middle_pane_g1

0x9ce6,	// (0x00044b8f) bg_sctrl_middle_pane_g2

0x9cee,	// (0x00044b97) bg_sctrl_middle_pane_g3

0x9cf6,	// (0x00044b9f) bg_sctrl_middle_pane_g4

0x9cfe,	// (0x00044ba7) bg_sctrl_middle_pane_g5

0x9d06,	// (0x00044baf) bg_sctrl_middle_pane_g6

0x9d0e,	// (0x00044bb7) bg_sctrl_middle_pane_g7

0x9d16,	// (0x00044bbf) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0004abab) bg_sctrl_middle_pane_g

0x9d1e,	// (0x00044bc7) bg_sctrl_middle_pane_g8_copy1

0x9cde,	// (0x00044b87) bg_sctrl_sk_pane_g1

0x9ce6,	// (0x00044b8f) bg_sctrl_sk_pane_g2

0x9cee,	// (0x00044b97) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x0004a714) bg_sctrl_sk_pane_g

0x872f,	// (0x000435d8) aid_size_touch_scroll_bar

0x9cf6,	// (0x00044b9f) bg_sctrl_sk_pane_g4

0x9cfe,	// (0x00044ba7) bg_sctrl_sk_pane_g5

0x9d06,	// (0x00044baf) bg_sctrl_sk_pane_g6

0x9d0e,	// (0x00044bb7) bg_sctrl_sk_pane_g7

0x9d16,	// (0x00044bbf) bg_sctrl_sk_pane_g8

0x9d1e,	// (0x00044bc7) bg_sctrl_sk_pane_g9

0x6441,	// (0x000412ea) popup_fep_china_hwr2_fs_candidate_window

0x644b,	// (0x000412f4) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x644b,	// (0x000412f4) popup_fep_china_hwr2_fs_control_window

0xc521,	// (0x000473ca) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0004aba1) sctrl_sk_top_pane_g

0xd9c1,	// (0x0004886a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c1,	// (0x0004886a) aid_fep_china_hwr2_fs_cell

0xd9d3,	// (0x0004887c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d3,	// (0x0004887c) bg_popup_fep_shadow_pane_cp4

0xd9ea,	// (0x00048893) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ea,	// (0x00048893) bg_popup_fep_shadow_pane_cp5

0xd9fc,	// (0x000488a5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9fc,	// (0x000488a5) popup_fep_china_hwr2_fs_control_bar_grid

0xda0c,	// (0x000488b5) popup_fep_china_hwr2_fs_control_funtion_grid

0xda14,	// (0x000488bd) aid_fep_china_hwr2_fs_candi_cell

0x7e9d,	// (0x00042d46) bg_popup_fep_shadow_pane_cp6

0xda1e,	// (0x000488c7) popup_fep_china_hwr2_fs_candidate_grid

0xda28,	// (0x000488d1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda28,	// (0x000488d1) cell_fep_china_hwr2_fs_funtion_grid

0xc2a3,	// (0x0004714c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda40,	// (0x000488e9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda40,	// (0x000488e9) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda4e,	// (0x000488f7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda4e,	// (0x000488f7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0004abbc) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0004abbc) cell_fep_china_hwr2_fs_funtion_grid_g

0xda64,	// (0x0004890d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda64,	// (0x0004890d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda79,	// (0x00048922) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda79,	// (0x00048922) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0004abc1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0004abc1) cell_fep_china_hwr2_fs_funtion_grid_t

0xda95,	// (0x0004893e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda9d,	// (0x00048946) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa5,	// (0x0004894e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0004abc6) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaad,	// (0x00048956) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaad,	// (0x00048956) cell_fep_china_hwr2_fs_candidate_grid

0xdac6,	// (0x0004896f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdace,	// (0x00048977) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2a3,	// (0x0004714c) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2a3,	// (0x0004714c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x0004a9e6) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad6,	// (0x0004897f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98d4,	// (0x0004477d) clock_nsta_pane_cp_24_ParamLimits

0x98d4,	// (0x0004477d) clock_nsta_pane_cp_24

0x9952,	// (0x000447fb) indicator_nsta_pane_cp_24_ParamLimits

0x9952,	// (0x000447fb) indicator_nsta_pane_cp_24

0xa9e3,	// (0x0004588c) heading_pane_g1

0x0001,

0xf8d0,	// (0x0004a779) heading_pane_g

0xb3d2,	// (0x0004627b) grid_sct_catagory_button_pane

0xb402,	// (0x000462ab) scroll_pane_cp5_ParamLimits

0xbe95,	// (0x00046d3e) button_value_adjust_pane_cp5_ParamLimits

0xbe95,	// (0x00046d3e) button_value_adjust_pane_cp5

0xbf74,	// (0x00046e1d) form2_midp_time_pane_ParamLimits

0xdae4,	// (0x0004898d) cell_sct_catagory_button_pane_ParamLimits

0xdae4,	// (0x0004898d) cell_sct_catagory_button_pane

0xc268,	// (0x00047111) bg_button_pane_cp01_ParamLimits

0xc268,	// (0x00047111) bg_button_pane_cp01

0xc2a3,	// (0x0004714c) cell_sct_catagory_button_pane_g1

0x6817,	// (0x000416c0) popup_tb_extension_window

0xdaf6,	// (0x0004899f) aid_size_cell_ext_ParamLimits

0xdaf6,	// (0x0004899f) aid_size_cell_ext

0x821a,	// (0x000430c3) bg_tb_trans_pane_cp1_ParamLimits

0x821a,	// (0x000430c3) bg_tb_trans_pane_cp1

0xdb16,	// (0x000489bf) grid_tb_ext_pane_ParamLimits

0xdb16,	// (0x000489bf) grid_tb_ext_pane

0xdb44,	// (0x000489ed) cell_tb_ext_pane_ParamLimits

0xdb44,	// (0x000489ed) cell_tb_ext_pane

0xdb5b,	// (0x00048a04) cell_tb_ext_pane_g1_ParamLimits

0xdb5b,	// (0x00048a04) cell_tb_ext_pane_g1

0xdb78,	// (0x00048a21) cell_tb_ext_pane_t1

0x821a,	// (0x000430c3) list_highlight_pane_cp11_ParamLimits

0x821a,	// (0x000430c3) list_highlight_pane_cp11

0x5b80,	// (0x00040a29) popup_uni_indicator_window_ParamLimits

0x5b80,	// (0x00040a29) popup_uni_indicator_window

0x880c,	// (0x000436b5) bg_popup_sub_pane_cp14

0xdb93,	// (0x00048a3c) list_uniindi_pane

0xdb9f,	// (0x00048a48) uniindi_top_pane

0x821a,	// (0x000430c3) bg_uniindi_top_pane

0xdbbe,	// (0x00048a67) uniindi_top_pane_g1

0xdbd4,	// (0x00048a7d) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0004abcd) uniindi_top_pane_g

0xdbfe,	// (0x00048aa7) uniindi_top_pane_t1

0xdc28,	// (0x00048ad1) list_single_uniindi_pane_ParamLimits

0xdc28,	// (0x00048ad1) list_single_uniindi_pane

0xc2a3,	// (0x0004714c) bg_uniindi_top_pane_g1

0xdc3b,	// (0x00048ae4) list_single_uniindi_pane_g1

0xdc4e,	// (0x00048af7) list_single_uniindi_pane_t1

0x7e9d,	// (0x00042d46) control_bg_pane

0xdc73,	// (0x00048b1c) bg_sctrl_sk_pane_cp1

0xdc7c,	// (0x00048b25) bg_sctrl_sk_pane_cp2

0xdc85,	// (0x00048b2e) control_bg_pane_g1

0xdc8e,	// (0x00048b37) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0004abd6) control_bg_pane_g

0xbcdf,	// (0x00046b88) cell_indicator_nsta_pane_g1_ParamLimits

0xbced,	// (0x00046b96) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x0004a94a) cell_indicator_nsta_pane_g_ParamLimits

0x55cf,	// (0x00040478) form2_midp_time_pane_t1_ParamLimits

0x8571,	// (0x0004341a) main_idle_act4_pane_ParamLimits

0x8571,	// (0x0004341a) main_idle_act4_pane

0x6817,	// (0x000416c0) popup_tb_extension_window_ParamLimits

0xdb34,	// (0x000489dd) tb_ext_find_pane_ParamLimits

0xdb34,	// (0x000489dd) tb_ext_find_pane

0xdc97,	// (0x00048b40) ai_gene_pane_1_cp1

0x95d1,	// (0x0004447a) ai_gene_pane_2_cp1

0xdc9f,	// (0x00048b48) list_single_idle_plugin_calendar_pane

0xdca8,	// (0x00048b51) list_single_idle_plugin_notification_pane

0xdcb1,	// (0x00048b5a) list_single_idle_plugin_player_pane

0xdcba,	// (0x00048b63) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcba,	// (0x00048b63) list_single_idle_plugin_shortcut_pane

0xdcdc,	// (0x00048b85) main_idle_act4_pane_t1

0xdcee,	// (0x00048b97) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0004abdb) main_idle_act4_pane_t

0xdd00,	// (0x00048ba9) middle_sk_idle_act4_pane_ParamLimits

0xdd00,	// (0x00048ba9) middle_sk_idle_act4_pane

0xdd16,	// (0x00048bbf) popup_clock_digital_analogue_window_cp2

0xdd30,	// (0x00048bd9) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd30,	// (0x00048bd9) shortcut_wheel_idle_act4_pane

0xc2a3,	// (0x0004714c) shortcut_wheel_idle_act4_pane_g1

0xc2a3,	// (0x0004714c) shortcut_wheel_idle_act4_pane_g2

0xc2a3,	// (0x0004714c) shortcut_wheel_idle_act4_pane_g3

0xc2a3,	// (0x0004714c) shortcut_wheel_idle_act4_pane_g4

0xc2a3,	// (0x0004714c) shortcut_wheel_idle_act4_pane_g5

0xdd44,	// (0x00048bed) shortcut_wheel_idle_act4_pane_g6

0xdd4c,	// (0x00048bf5) shortcut_wheel_idle_act4_pane_g7

0xdd54,	// (0x00048bfd) shortcut_wheel_idle_act4_pane_g8

0xdd5c,	// (0x00048c05) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0004abe0) shortcut_wheel_idle_act4_pane_g

0xc521,	// (0x000473ca) middle_sk_idle_act4_pane_g1_ParamLimits

0xc521,	// (0x000473ca) middle_sk_idle_act4_pane_g1

0xddc0,	// (0x00048c69) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc0,	// (0x00048c69) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0004ac03) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0004ac03) middle_sk_idle_act4_pane_g

0xddcc,	// (0x00048c75) middle_sk_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x00048c75) middle_sk_idle_act4_pane_t1

0xdde9,	// (0x00048c92) grid_ai_shortcut_pane_ParamLimits

0xdde9,	// (0x00048c92) grid_ai_shortcut_pane

0xde02,	// (0x00048cab) list_highlight_pane_cp16_ParamLimits

0xde02,	// (0x00048cab) list_highlight_pane_cp16

0xde0f,	// (0x00048cb8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde0f,	// (0x00048cb8) list_single_idle_plugin_shortcut_pane_g1

0xde1b,	// (0x00048cc4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1b,	// (0x00048cc4) list_single_idle_plugin_shortcut_pane_g2

0xde33,	// (0x00048cdc) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde33,	// (0x00048cdc) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0004ac08) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0004ac08) list_single_idle_plugin_shortcut_pane_g

0xde46,	// (0x00048cef) cell_ai_shortcut_pane_ParamLimits

0xde46,	// (0x00048cef) cell_ai_shortcut_pane

0xde6a,	// (0x00048d13) cell_ai_shortcut_pane_g1_ParamLimits

0xde6a,	// (0x00048d13) cell_ai_shortcut_pane_g1

0xdc97,	// (0x00048b40) ai_gene_pane_1_cp2

0xde8c,	// (0x00048d35) ai_gene_pane_2_cp2

0xde94,	// (0x00048d3d) list_highlight_pane_cp15

0xde9d,	// (0x00048d46) list_single_idle_plugin_calendar_pane_g1

0xde94,	// (0x00048d3d) list_highlight_pane_cp17

0xdea5,	// (0x00048d4e) list_single_idle_plugin_calendar_pane_g1_copy1

0xdead,	// (0x00048d56) list_single_idle_plugin_player_pane_g1

0xb62b,	// (0x000464d4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0004ac0f) list_single_idle_plugin_player_pane_g

0xdeb5,	// (0x00048d5e) list_single_idle_plugin_player_pane_t1

0xdec3,	// (0x00048d6c) list_single_idle_plugin_player_pane_t2

0xded1,	// (0x00048d7a) list_single_idle_plugin_player_pane_t3

0xdedf,	// (0x00048d88) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0004ac14) list_single_idle_plugin_player_pane_t

0xdeed,	// (0x00048d96) wait_bar_pane_cp15

0xdef5,	// (0x00048d9e) grid_ai_notification_pane

0xb62b,	// (0x000464d4) list_single_idle_plugin_notification_pane_g1

0xdefe,	// (0x00048da7) cell_ai_notification_pane_ParamLimits

0xdefe,	// (0x00048da7) cell_ai_notification_pane

0xdf0b,	// (0x00048db4) cell_ai_notification_pane_g1

0xdf13,	// (0x00048dbc) cell_ai_notification_pane_t1

0xdf21,	// (0x00048dca) tb_ext_find_button_pane

0xdf29,	// (0x00048dd2) tb_ext_find_pane_g1

0xdf31,	// (0x00048dda) tb_ext_find_pane_t1

0x8e83,	// (0x00043d2c) tb_ext_find_button_pane_g1

0xdf3f,	// (0x00048de8) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0004ac1d) tb_ext_find_button_pane_g

0xdcdc,	// (0x00048b85) main_idle_act4_pane_t1_ParamLimits

0xdcee,	// (0x00048b97) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0004abdb) main_idle_act4_pane_t_ParamLimits

0xdd16,	// (0x00048bbf) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd24,	// (0x00048bcd) sat_plugin_idle_act4_pane_ParamLimits

0xdd24,	// (0x00048bcd) sat_plugin_idle_act4_pane

0xdf48,	// (0x00048df1) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf48,	// (0x00048df1) sat_plugin_idle_act4_pane_t1

0xdf5b,	// (0x00048e04) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5b,	// (0x00048e04) sat_plugin_idle_act4_pane_t2

0xdf6e,	// (0x00048e17) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf6e,	// (0x00048e17) sat_plugin_idle_act4_pane_t3

0xdf81,	// (0x00048e2a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf81,	// (0x00048e2a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0004ac22) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0004ac22) sat_plugin_idle_act4_pane_t

0x5abb,	// (0x00040964) popup_battery_window_ParamLimits

0x5abb,	// (0x00040964) popup_battery_window

0x821a,	// (0x000430c3) bg_popup_sub_pane_cp25_ParamLimits

0x821a,	// (0x000430c3) bg_popup_sub_pane_cp25

0xdf94,	// (0x00048e3d) popup_battery_window_g1_ParamLimits

0xdf94,	// (0x00048e3d) popup_battery_window_g1

0xdfa0,	// (0x00048e49) popup_battery_window_t1_ParamLimits

0xdfa0,	// (0x00048e49) popup_battery_window_t1

0xdfb2,	// (0x00048e5b) popup_battery_window_t2_ParamLimits

0xdfb2,	// (0x00048e5b) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0004ac2b) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0004ac2b) popup_battery_window_t

0x949e,	// (0x00044347) midp_canvas_pane_ParamLimits

0x9515,	// (0x000443be) midp_keypad_pane_ParamLimits

0x9515,	// (0x000443be) midp_keypad_pane

0x97d4,	// (0x0004467d) main_midp_pane_ParamLimits

0xbd59,	// (0x00046c02) signal_pane_g2_cp_ParamLimits

0xdfcf,	// (0x00048e78) aid_size_cell_midp_keypad_ParamLimits

0xdfcf,	// (0x00048e78) aid_size_cell_midp_keypad

0xdfe9,	// (0x00048e92) midp_keyp_game_grid_pane_ParamLimits

0xdfe9,	// (0x00048e92) midp_keyp_game_grid_pane

0xe009,	// (0x00048eb2) midp_keyp_rocker_pane_ParamLimits

0xe009,	// (0x00048eb2) midp_keyp_rocker_pane

0xe042,	// (0x00048eeb) midp_keyp_sk_left_pane_ParamLimits

0xe042,	// (0x00048eeb) midp_keyp_sk_left_pane

0xe09c,	// (0x00048f45) midp_keyp_sk_right_pane_ParamLimits

0xe09c,	// (0x00048f45) midp_keyp_sk_right_pane

0x7e9d,	// (0x00042d46) bg_button_pane_cp03

0xe0f6,	// (0x00048f9f) midp_keyp_sk_left_pane_g1

0x7e9d,	// (0x00042d46) bg_button_pane_cp04

0xe0f6,	// (0x00048f9f) midp_keyp_sk_right_pane_g1

0xc2a3,	// (0x0004714c) midp_keyp_rocker_pane_g1

0xe0ff,	// (0x00048fa8) keyp_game_cell_pane_ParamLimits

0xe0ff,	// (0x00048fa8) keyp_game_cell_pane

0x7e9d,	// (0x00042d46) bg_button_pane_cp02

0xe112,	// (0x00048fbb) keyp_game_cell_pane_g1

0x5aff,	// (0x000409a8) popup_fep_vkb2_window_ParamLimits

0x5aff,	// (0x000409a8) popup_fep_vkb2_window

0x73f2,	// (0x0004229b) aid_size_cell_vkb2_ParamLimits

0x73f2,	// (0x0004229b) aid_size_cell_vkb2

0x7446,	// (0x000422ef) popup_fep_vkb2_window_g1_ParamLimits

0x7446,	// (0x000422ef) popup_fep_vkb2_window_g1

0x748e,	// (0x00042337) vkb2_area_bottom_pane_ParamLimits

0x748e,	// (0x00042337) vkb2_area_bottom_pane

0x74da,	// (0x00042383) vkb2_area_keypad_pane_ParamLimits

0x74da,	// (0x00042383) vkb2_area_keypad_pane

0x751c,	// (0x000423c5) vkb2_area_top_pane_ParamLimits

0x751c,	// (0x000423c5) vkb2_area_top_pane

0x7596,	// (0x0004243f) vkb2_top_entry_pane_ParamLimits

0x7596,	// (0x0004243f) vkb2_top_entry_pane

0x75c0,	// (0x00042469) vkb2_top_grid_left_pane_ParamLimits

0x75c0,	// (0x00042469) vkb2_top_grid_left_pane

0x75de,	// (0x00042487) vkb2_top_grid_right_pane_ParamLimits

0x75de,	// (0x00042487) vkb2_top_grid_right_pane

0x75fc,	// (0x000424a5) vkb2_cell_keypad_pane_ParamLimits

0x75fc,	// (0x000424a5) vkb2_cell_keypad_pane

0x76cd,	// (0x00042576) vkb2_area_bottom_grid_pane_ParamLimits

0x76cd,	// (0x00042576) vkb2_area_bottom_grid_pane

0x76f3,	// (0x0004259c) vkb2_area_bottom_pane_g1_ParamLimits

0x76f3,	// (0x0004259c) vkb2_area_bottom_pane_g1

0x7717,	// (0x000425c0) vkb2_area_bottom_pane_g2_ParamLimits

0x7717,	// (0x000425c0) vkb2_area_bottom_pane_g2

0x7745,	// (0x000425ee) vkb2_area_bottom_pane_g3_ParamLimits

0x7745,	// (0x000425ee) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0004ac30) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0004ac30) vkb2_area_bottom_pane_g

0x77a6,	// (0x0004264f) vkb2_top_cell_left_pane_ParamLimits

0x77a6,	// (0x0004264f) vkb2_top_cell_left_pane

0xe123,	// (0x00048fcc) vkb2_top_entry_pane_g1_ParamLimits

0xe123,	// (0x00048fcc) vkb2_top_entry_pane_g1

0xe131,	// (0x00048fda) vkb2_top_entry_pane_t1_ParamLimits

0xe131,	// (0x00048fda) vkb2_top_entry_pane_t1

0xe163,	// (0x0004900c) vkb2_top_entry_pane_t2_ParamLimits

0xe163,	// (0x0004900c) vkb2_top_entry_pane_t2

0xe195,	// (0x0004903e) vkb2_top_entry_pane_t3_ParamLimits

0xe195,	// (0x0004903e) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0004ac37) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0004ac37) vkb2_top_entry_pane_t

0x77f3,	// (0x0004269c) vkb2_top_grid_right_pane_g1_ParamLimits

0x77f3,	// (0x0004269c) vkb2_top_grid_right_pane_g1

0x7809,	// (0x000426b2) vkb2_top_grid_right_pane_g2_ParamLimits

0x7809,	// (0x000426b2) vkb2_top_grid_right_pane_g2

0x7821,	// (0x000426ca) vkb2_top_grid_right_pane_g3_ParamLimits

0x7821,	// (0x000426ca) vkb2_top_grid_right_pane_g3

0x7839,	// (0x000426e2) vkb2_top_grid_right_pane_g4_ParamLimits

0x7839,	// (0x000426e2) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0004ac3e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0004ac3e) vkb2_top_grid_right_pane_g

0x784f,	// (0x000426f8) vkb2_top_cell_left_pane_g1

0x7866,	// (0x0004270f) vkb2_cell_keypad_pane_g1_ParamLimits

0x7866,	// (0x0004270f) vkb2_cell_keypad_pane_g1

0xe1b9,	// (0x00049062) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1b9,	// (0x00049062) vkb2_cell_keypad_pane_t1

0x7874,	// (0x0004271d) vkb2_cell_bottom_grid_pane_ParamLimits

0x7874,	// (0x0004271d) vkb2_cell_bottom_grid_pane

0x78ad,	// (0x00042756) vkb2_cell_bottom_grid_pane_g1

0xdd64,	// (0x00048c0d) aid_call2_pane_cp02

0xdd6c,	// (0x00048c15) aid_call_pane_cp02

0xdd74,	// (0x00048c1d) clock_digital_number_pane_cp10

0xdd7c,	// (0x00048c25) clock_digital_number_pane_cp11

0xdd84,	// (0x00048c2d) clock_digital_number_pane_cp12

0xdd8c,	// (0x00048c35) clock_digital_number_pane_cp13

0xdd94,	// (0x00048c3d) clock_digital_separator_pane_cp10

0x8e83,	// (0x00043d2c) popup_clock_digital_analogue_window_cp2_g1

0x8e83,	// (0x00043d2c) popup_clock_digital_analogue_window_cp2_g2

0xdd9c,	// (0x00048c45) popup_clock_digital_analogue_window_cp2_g3

0x8e83,	// (0x00043d2c) popup_clock_digital_analogue_window_cp2_g4

0xdd9c,	// (0x00048c45) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0004abf3) popup_clock_digital_analogue_window_cp2_g

0xdda4,	// (0x00048c4d) popup_clock_digital_analogue_window_cp2_t1

0xddb2,	// (0x00048c5b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0004abfe) popup_clock_digital_analogue_window_cp2_t

0xc2a3,	// (0x0004714c) clock_digital_number_pane_cp10_g1

0xc2a3,	// (0x0004714c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0004a9e6) clock_digital_number_pane_cp10_g

0xc2a3,	// (0x0004714c) clock_digital_separator_pane_cp10_g1

0xc2a3,	// (0x0004714c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0004a9e6) clock_digital_separator_pane_cp10_g

0xdbe0,	// (0x00048a89) uniindi_top_pane_g3

0xdbf1,	// (0x00048a9a) uniindi_top_pane_g4

0x7687,	// (0x00042530) vkb2_row_keypad_pane_ParamLimits

0x7687,	// (0x00042530) vkb2_row_keypad_pane

0x78c9,	// (0x00042772) vkb2_cell_t_keypad_pane_ParamLimits

0x78c9,	// (0x00042772) vkb2_cell_t_keypad_pane

0x78d9,	// (0x00042782) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x78d9,	// (0x00042782) vkb2_cell_t_keypad_pane_cp08

0x78ec,	// (0x00042795) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x78ec,	// (0x00042795) vkb2_cell_t_keypad_pane_cp09

0x7900,	// (0x000427a9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7900,	// (0x000427a9) vkb2_cell_t_keypad_pane_cp01

0x7911,	// (0x000427ba) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7911,	// (0x000427ba) vkb2_cell_t_keypad_pane_cp02

0x7922,	// (0x000427cb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7922,	// (0x000427cb) vkb2_cell_t_keypad_pane_cp03

0x7933,	// (0x000427dc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7933,	// (0x000427dc) vkb2_cell_t_keypad_pane_cp04

0x7944,	// (0x000427ed) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7944,	// (0x000427ed) vkb2_cell_t_keypad_pane_cp05

0x7955,	// (0x000427fe) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7955,	// (0x000427fe) vkb2_cell_t_keypad_pane_cp06

0x7966,	// (0x0004280f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7966,	// (0x0004280f) vkb2_cell_t_keypad_pane_cp07

0x7977,	// (0x00042820) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7977,	// (0x00042820) vkb2_cell_t_keypad_pane_cp10

0xc521,	// (0x000473ca) vkb2_cell_t_keypad_pane_g1

0xe1d0,	// (0x00049079) vkb2_cell_t_keypad_pane_t1

0x7e9d,	// (0x00042d46) popup_grid_graphic2_window

0xe1e2,	// (0x0004908b) aid_size_cell_graphic2_ParamLimits

0xe1e2,	// (0x0004908b) aid_size_cell_graphic2

0xe21a,	// (0x000490c3) bg_popup_window_pane_cp21_ParamLimits

0xe21a,	// (0x000490c3) bg_popup_window_pane_cp21

0xe228,	// (0x000490d1) graphic2_pages_pane_ParamLimits

0xe228,	// (0x000490d1) graphic2_pages_pane

0xe26e,	// (0x00049117) grid_graphic2_control_pane_ParamLimits

0xe26e,	// (0x00049117) grid_graphic2_control_pane

0xe2ac,	// (0x00049155) grid_graphic2_pane_ParamLimits

0xe2ac,	// (0x00049155) grid_graphic2_pane

0xe320,	// (0x000491c9) cell_graphic2_pane

0x7e9d,	// (0x00042d46) main_comp_mode_pane

0xd460,	// (0x00048309) list_ai3_gene_pane_ParamLimits

0xd82a,	// (0x000486d3) bg_popup_window_pane_cp19_ParamLimits

0xd836,	// (0x000486df) bg_touch_area_indi_pane_ParamLimits

0xd836,	// (0x000486df) bg_touch_area_indi_pane

0xd84c,	// (0x000486f5) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84c,	// (0x000486f5) bg_touch_area_indi_pane_cp01

0xd862,	// (0x0004870b) bg_touch_area_indi_pane_cp02_ParamLimits

0xd862,	// (0x0004870b) bg_touch_area_indi_pane_cp02

0xd87a,	// (0x00048723) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87a,	// (0x00048723) bg_touch_area_indi_pane_cp03

0xd894,	// (0x0004873d) popup_slider_window_g1_ParamLimits

0xd8b0,	// (0x00048759) popup_slider_window_g2_ParamLimits

0xd8cc,	// (0x00048775) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0004ab88) popup_slider_window_g_ParamLimits

0xd928,	// (0x000487d1) popup_slider_window_t1_ParamLimits

0xd99c,	// (0x00048845) small_volume_slider_vertical_pane_ParamLimits

0xe320,	// (0x000491c9) cell_graphic2_pane_ParamLimits

0xe38f,	// (0x00049238) bg_button_pane_cp10_ParamLimits

0xe38f,	// (0x00049238) bg_button_pane_cp10

0xe3a2,	// (0x0004924b) bg_button_pane_cp11_ParamLimits

0xe3a2,	// (0x0004924b) bg_button_pane_cp11

0xe3b5,	// (0x0004925e) graphic2_pages_pane_g1_ParamLimits

0xe3b5,	// (0x0004925e) graphic2_pages_pane_g1

0xe3d0,	// (0x00049279) graphic2_pages_pane_g2_ParamLimits

0xe3d0,	// (0x00049279) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0004ac4c) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0004ac4c) graphic2_pages_pane_g

0xe3e8,	// (0x00049291) graphic2_pages_pane_t1_ParamLimits

0xe3e8,	// (0x00049291) graphic2_pages_pane_t1

0xe400,	// (0x000492a9) cell_graphic2_control_pane_ParamLimits

0xe400,	// (0x000492a9) cell_graphic2_control_pane

0xe421,	// (0x000492ca) cell_graphic2_pane_g1_ParamLimits

0xe421,	// (0x000492ca) cell_graphic2_pane_g1

0xe42e,	// (0x000492d7) cell_graphic2_pane_g2_ParamLimits

0xe42e,	// (0x000492d7) cell_graphic2_pane_g2

0xe43b,	// (0x000492e4) cell_graphic2_pane_g3_ParamLimits

0xe43b,	// (0x000492e4) cell_graphic2_pane_g3

0xe448,	// (0x000492f1) cell_graphic2_pane_g4_ParamLimits

0xe448,	// (0x000492f1) cell_graphic2_pane_g4

0xe455,	// (0x000492fe) cell_graphic2_pane_g5_ParamLimits

0xe455,	// (0x000492fe) cell_graphic2_pane_g5

0x0004,

0xfda8,	// (0x0004ac51) cell_graphic2_pane_g_ParamLimits

0xfda8,	// (0x0004ac51) cell_graphic2_pane_g

0xe470,	// (0x00049319) cell_graphic2_pane_t1_ParamLimits

0xe470,	// (0x00049319) cell_graphic2_pane_t1

0x9d52,	// (0x00044bfb) grid_highlight_pane_cp11_ParamLimits

0x9d52,	// (0x00044bfb) grid_highlight_pane_cp11

0x821a,	// (0x000430c3) bg_button_pane_cp05

0xe499,	// (0x00049342) cell_graphic2_control_pane_g1

0xc2a3,	// (0x0004714c) bg_touch_area_indi_pane_g1

0xe4c1,	// (0x0004936a) aid_cmod_rocker_key_size

0xe4cb,	// (0x00049374) aid_cmode_itu_key_size

0xe4d5,	// (0x0004937e) main_cmode_video_pane

0xe4df,	// (0x00049388) main_comp_mode_itu_pane

0xe4eb,	// (0x00049394) main_comp_mode_rocker_pane

0xe4f7,	// (0x000493a0) cell_cmode_rocker_pane_ParamLimits

0xe4f7,	// (0x000493a0) cell_cmode_rocker_pane

0xe509,	// (0x000493b2) cell_cmode_itu_pane_ParamLimits

0xe509,	// (0x000493b2) cell_cmode_itu_pane

0x880c,	// (0x000436b5) bg_button_pane_cp06_ParamLimits

0x880c,	// (0x000436b5) bg_button_pane_cp06

0xc521,	// (0x000473ca) cell_cmode_rocker_pane_g1_ParamLimits

0xc521,	// (0x000473ca) cell_cmode_rocker_pane_g1

0xda40,	// (0x000488e9) cell_cmode_rocker_pane_g2_ParamLimits

0xda40,	// (0x000488e9) cell_cmode_rocker_pane_g2

0x0001,

0xfdb8,	// (0x0004ac61) cell_cmode_rocker_pane_g_ParamLimits

0xfdb8,	// (0x0004ac61) cell_cmode_rocker_pane_g

0x7e9d,	// (0x00042d46) bg_button_pane_cp07

0xe51e,	// (0x000493c7) cell_cmode_itu_pane_g1

0xe527,	// (0x000493d0) cell_cmode_itu_pane_t1

0xe535,	// (0x000493de) cell_cmode_itu_pane_t2

0x0001,

0xfdbd,	// (0x0004ac66) cell_cmode_itu_pane_t

0xdc63,	// (0x00048b0c) aid_touch_ctrl_left

0xdc6b,	// (0x00048b14) aid_touch_ctrl_right

0x7e9d,	// (0x00042d46) compa_mode_pane

0xe543,	// (0x000493ec) aid_cmod_rocker_key_size_cp

0xe54d,	// (0x000493f6) aid_cmode_itu_key_size_cp

0xe557,	// (0x00049400) compa_mode_pane_g1

0xe55f,	// (0x00049408) compa_mode_pane_g2

0xe567,	// (0x00049410) compa_mode_pane_g3

0x0002,

0xfdc2,	// (0x0004ac6b) compa_mode_pane_g

0xe56f,	// (0x00049418) main_comp_mode_itu_pane_cp

0xe577,	// (0x00049420) main_comp_mode_rocker_pane_cp

0xe57f,	// (0x00049428) cell_cmode_itu_pane_cp_ParamLimits

0xe57f,	// (0x00049428) cell_cmode_itu_pane_cp

0xe594,	// (0x0004943d) cell_cmode_rocker_pane_cp_ParamLimits

0xe594,	// (0x0004943d) cell_cmode_rocker_pane_cp

0x880c,	// (0x000436b5) bg_button_pane_cp06_cp_ParamLimits

0x880c,	// (0x000436b5) bg_button_pane_cp06_cp

0xc521,	// (0x000473ca) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc521,	// (0x000473ca) cell_cmode_rocker_pane_g1_cp

0xc2a3,	// (0x0004714c) cell_cmode_rocker_pane_g2_cp

0x7e9d,	// (0x00042d46) bg_button_pane_cp07_cp

0xb223,	// (0x000460cc) cell_cmode_itu_pane_g1_cp

0xe5a6,	// (0x0004944f) cell_cmode_itu_pane_t1_cp

0xe5a6,	// (0x0004944f) cell_cmode_itu_pane_t2_cp

0xb210,	// (0x000460b9) settings_code_pane_cp2

0x7f91,	// (0x00042e3a) bg_popup_window_pane_cp3_ParamLimits

0x83f4,	// (0x0004329d) heading_pane_cp3_ParamLimits

0x8400,	// (0x000432a9) listscroll_popup_graphic_pane_ParamLimits

0x6ec3,	// (0x00041d6c) fep_hwr_aid_pane_ParamLimits

0x7369,	// (0x00042212) aid_touch_sctrl_top_ParamLimits

0x7376,	// (0x0004221f) sctrl_sk_top_pane_g1_ParamLimits

0xc521,	// (0x000473ca) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0004aba1) sctrl_sk_top_pane_g_ParamLimits

0x7383,	// (0x0004222c) sctrl_sk_top_pane_t1_ParamLimits

0x7369,	// (0x00042212) aid_touch_sctrl_bottom_ParamLimits

0x7383,	// (0x0004222c) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbac,	// (0x00048a55) aid_area_touch_clock

0x755e,	// (0x00042407) aid_vkb2_area_top_pane_cell_ParamLimits

0x755e,	// (0x00042407) aid_vkb2_area_top_pane_cell

0x76a9,	// (0x00042552) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x76a9,	// (0x00042552) aid_vkb2_area_bottom_pane_cell

0xe11b,	// (0x00048fc4) popup_char_count_window

0xe5b4,	// (0x0004945d) popup_char_count_window_g1

0xe5bd,	// (0x00049466) popup_char_count_window_g2

0xe5c6,	// (0x0004946f) popup_char_count_window_g3

0x0002,

0xfdc9,	// (0x0004ac72) popup_char_count_window_g

0xe5cf,	// (0x00049478) popup_char_count_window_t1

0x7424,	// (0x000422cd) popup_fep_char_preview_window_ParamLimits

0x7424,	// (0x000422cd) popup_fep_char_preview_window

0x757c,	// (0x00042425) vkb2_top_candi_pane_ParamLimits

0x757c,	// (0x00042425) vkb2_top_candi_pane

0xe5dd,	// (0x00049486) cell_vkb2_top_candi_pane_ParamLimits

0xe5dd,	// (0x00049486) cell_vkb2_top_candi_pane

0xa357,	// (0x00045200) bg_popup_fep_char_preview_window_ParamLimits

0xa357,	// (0x00045200) bg_popup_fep_char_preview_window

0x798c,	// (0x00042835) popup_fep_char_preview_window_t1_ParamLimits

0x798c,	// (0x00042835) popup_fep_char_preview_window_t1

0xe62a,	// (0x000494d3) bg_popup_fep_char_preview_window_g1

0xe632,	// (0x000494db) bg_popup_fep_char_preview_window_g2

0xe63a,	// (0x000494e3) bg_popup_fep_char_preview_window_g3

0xe642,	// (0x000494eb) bg_popup_fep_char_preview_window_g4

0xe64a,	// (0x000494f3) bg_popup_fep_char_preview_window_g5

0x79c6,	// (0x0004286f) bg_popup_fep_char_preview_window_g6

0xe652,	// (0x000494fb) bg_popup_fep_char_preview_window_g7

0xe65a,	// (0x00049503) bg_popup_fep_char_preview_window_g8

0xe662,	// (0x0004950b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd0,	// (0x0004ac79) bg_popup_fep_char_preview_window_g

0xc521,	// (0x000473ca) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc521,	// (0x000473ca) cell_vkb2_top_candi_pane_g1

0xc838,	// (0x000476e1) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc838,	// (0x000476e1) cell_vkb2_top_candi_pane_g2

0xc859,	// (0x00047702) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc859,	// (0x00047702) cell_vkb2_top_candi_pane_g3

0x79ce,	// (0x00042877) cell_vkb2_top_candi_pane_g4_ParamLimits

0x79ce,	// (0x00042877) cell_vkb2_top_candi_pane_g4

0xe36e,	// (0x00049217) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe36e,	// (0x00049217) cell_vkb2_top_candi_pane_g5

0xda40,	// (0x000488e9) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda40,	// (0x000488e9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde3,	// (0x0004ac8c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde3,	// (0x0004ac8c) cell_vkb2_top_candi_pane_g

0x79ef,	// (0x00042898) cell_vkb2_top_candi_pane_t1

0x6c58,	// (0x00041b01) aid_size_touch_slider_mark_ParamLimits

0x6c58,	// (0x00041b01) aid_size_touch_slider_mark

0xe25e,	// (0x00049107) grid_graphic2_catg_pane_ParamLimits

0xe25e,	// (0x00049107) grid_graphic2_catg_pane

0xe2fc,	// (0x000491a5) popup_grid_graphic2_window_t1_ParamLimits

0xe2fc,	// (0x000491a5) popup_grid_graphic2_window_t1

0xe30e,	// (0x000491b7) popup_grid_graphic2_window_t2_ParamLimits

0xe30e,	// (0x000491b7) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0004ac47) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0004ac47) popup_grid_graphic2_window_t

0x821a,	// (0x000430c3) bg_button_pane_cp05_ParamLimits

0xe499,	// (0x00049342) cell_graphic2_control_pane_g1_ParamLimits

0xe66a,	// (0x00049513) cell_graphic2_catg_pane_ParamLimits

0xe66a,	// (0x00049513) cell_graphic2_catg_pane

0x7e9d,	// (0x00042d46) bg_button_pane_cp12

0xe67c,	// (0x00049525) cell_graphic2_catg_pane_g1

0xdb78,	// (0x00048a21) cell_tb_ext_pane_t1_ParamLimits

0x77c6,	// (0x0004266f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x77c6,	// (0x0004266f) vkb2_top_cell_right_narrow_pane

0x77de,	// (0x00042687) vkb2_top_cell_right_wide_pane_ParamLimits

0x77de,	// (0x00042687) vkb2_top_cell_right_wide_pane

0x6eb5,	// (0x00041d5e) bg_vkb2_func_pane_ParamLimits

0x6eb5,	// (0x00041d5e) bg_vkb2_func_pane

0x784f,	// (0x000426f8) vkb2_top_cell_left_pane_g1_ParamLimits

0x6eb5,	// (0x00041d5e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6eb5,	// (0x00041d5e) bg_vkb2_fuc_pane_cp03

0x78ad,	// (0x00042756) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9ce6,	// (0x00044b8f) bg_vkb2_func_pane_g1

0x9cee,	// (0x00044b97) bg_vkb2_func_pane_g2

0x9cfe,	// (0x00044ba7) bg_vkb2_func_pane_g3

0x9cf6,	// (0x00044b9f) bg_vkb2_func_pane_g4

0x9d06,	// (0x00044baf) bg_vkb2_func_pane_g5

0x9d0e,	// (0x00044bb7) bg_vkb2_func_pane_g6

0x9d16,	// (0x00044bbf) bg_vkb2_func_pane_g7

0x9d1e,	// (0x00044bc7) bg_vkb2_func_pane_g8

0x9cde,	// (0x00044b87) bg_vkb2_func_pane_g9

0x0008,

0xfdf0,	// (0x0004ac99) bg_vkb2_func_pane_g

0x6eb5,	// (0x00041d5e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6eb5,	// (0x00041d5e) bg_vkb2_fuc_pane_cp01

0x784f,	// (0x000426f8) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x784f,	// (0x000426f8) vkb2_top_cell_right_wide_pane_g1

0x6eb5,	// (0x00041d5e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6eb5,	// (0x00041d5e) bg_vkb2_fuc_pane_cp02

0x78ad,	// (0x00042756) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x78ad,	// (0x00042756) vkb2_top_cell_right_narrow_pane_g1

0xd7ae,	// (0x00048657) aid_touch_area_decrease_ParamLimits

0xd7ae,	// (0x00048657) aid_touch_area_decrease

0xd7cc,	// (0x00048675) aid_touch_area_increase_ParamLimits

0xd7cc,	// (0x00048675) aid_touch_area_increase

0xd7d8,	// (0x00048681) aid_touch_area_mute_ParamLimits

0xd7d8,	// (0x00048681) aid_touch_area_mute

0xd7fc,	// (0x000486a5) aid_touch_area_slider_ParamLimits

0xd7fc,	// (0x000486a5) aid_touch_area_slider

0xd8e8,	// (0x00048791) popup_slider_window_g4_ParamLimits

0xd8e8,	// (0x00048791) popup_slider_window_g4

0xd8f4,	// (0x0004879d) popup_slider_window_g5_ParamLimits

0xd8f4,	// (0x0004879d) popup_slider_window_g5

0xd916,	// (0x000487bf) popup_slider_window_g6_ParamLimits

0xd916,	// (0x000487bf) popup_slider_window_g6

0xd956,	// (0x000487ff) popup_slider_window_t2_ParamLimits

0xd956,	// (0x000487ff) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0004ab95) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0004ab95) popup_slider_window_t

0xd96e,	// (0x00048817) slider_pane_ParamLimits

0xd96e,	// (0x00048817) slider_pane

0xe685,	// (0x0004952e) slider_pane_g1_ParamLimits

0xe685,	// (0x0004952e) slider_pane_g1

0xe699,	// (0x00049542) slider_pane_g2_ParamLimits

0xe699,	// (0x00049542) slider_pane_g2

0xe6af,	// (0x00049558) slider_pane_g3_ParamLimits

0xe6af,	// (0x00049558) slider_pane_g3

0x0003,

0xfe03,	// (0x0004acac) slider_pane_g_ParamLimits

0xfe03,	// (0x0004acac) slider_pane_g

0x6873,	// (0x0004171c) popup_tb_float_extension_window_ParamLimits

0x6873,	// (0x0004171c) popup_tb_float_extension_window

0xe6db,	// (0x00049584) aid_size_cell_tb_float_ext

0x7e9d,	// (0x00042d46) bg_popup_sub_window_cp28

0xe6e7,	// (0x00049590) grid_tb_float_ext_pane

0xe6f1,	// (0x0004959a) cell_tb_float_ext_pane_ParamLimits

0xe6f1,	// (0x0004959a) cell_tb_float_ext_pane

0xe70b,	// (0x000495b4) cell_tb_float_ext_pane_g1

0xe714,	// (0x000495bd) grid_highlight_pane_cp12

0x6ff6,	// (0x00041e9f) cell_last_hwr_side_pane_ParamLimits

0x6ff6,	// (0x00041e9f) cell_last_hwr_side_pane

0xc2a3,	// (0x0004714c) cell_last_hwr_side_pane_g1

0xe71d,	// (0x000495c6) cell_last_hwr_side_pane_g2

0x0001,

0xfe0c,	// (0x0004acb5) cell_last_hwr_side_pane_g

0x7775,	// (0x0004261e) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7775,	// (0x0004261e) vkb2_area_bottom_space_btn_pane

0xc521,	// (0x000473ca) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1d0,	// (0x00049079) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x79ef,	// (0x00042898) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7a0e,	// (0x000428b7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7a0e,	// (0x000428b7) vkb2_area_bottom_space_btn_pane_g1

0x7a48,	// (0x000428f1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a48,	// (0x000428f1) vkb2_area_bottom_space_btn_pane_g2

0x7a7e,	// (0x00042927) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a7e,	// (0x00042927) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe11,	// (0x0004acba) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe11,	// (0x0004acba) vkb2_area_bottom_space_btn_pane_g

0x6f6a,	// (0x00041e13) cel_fep_hwr_func_pane_ParamLimits

0x6f6a,	// (0x00041e13) cel_fep_hwr_func_pane

0x6fa6,	// (0x00041e4f) cell_hwr_side_button_pane_ParamLimits

0x6fa6,	// (0x00041e4f) cell_hwr_side_button_pane

0xdbac,	// (0x00048a55) aid_area_touch_clock_ParamLimits

0x821a,	// (0x000430c3) bg_uniindi_top_pane_ParamLimits

0xdbbe,	// (0x00048a67) uniindi_top_pane_g1_ParamLimits

0xdbd4,	// (0x00048a7d) uniindi_top_pane_g2_ParamLimits

0xdbe0,	// (0x00048a89) uniindi_top_pane_g3_ParamLimits

0xdbf1,	// (0x00048a9a) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0004abcd) uniindi_top_pane_g_ParamLimits

0xdbfe,	// (0x00048aa7) uniindi_top_pane_t1_ParamLimits

0x821a,	// (0x000430c3) bg_vkb2_func_pane_cp01_ParamLimits

0x821a,	// (0x000430c3) bg_vkb2_func_pane_cp01

0xe726,	// (0x000495cf) cel_fep_hwr_func_pane_g1_ParamLimits

0xe726,	// (0x000495cf) cel_fep_hwr_func_pane_g1

0x821a,	// (0x000430c3) bg_vkb2_func_pane_cp02_ParamLimits

0x821a,	// (0x000430c3) bg_vkb2_func_pane_cp02

0xe726,	// (0x000495cf) cell_hwr_side_button_pane_g1_ParamLimits

0xe726,	// (0x000495cf) cell_hwr_side_button_pane_g1

0x9b5f,	// (0x00044a08) status_pane_g4_ParamLimits

0x9b5f,	// (0x00044a08) status_pane_g4

0x9b79,	// (0x00044a22) status_pane_t1

0xbfdd,	// (0x00046e86) form2_midp_gauge_slider_cont_pane

0xbfe5,	// (0x00046e8e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbff7,	// (0x00046ea0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc009,	// (0x00046eb2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x0004a999) form2_midp_gauge_slider_pane_t_ParamLimits

0xc01b,	// (0x00046ec4) form2_midp_slider_pane_ParamLimits

0x73e4,	// (0x0004228d) aid_size_cell_func_vkb2_ParamLimits

0x73e4,	// (0x0004228d) aid_size_cell_func_vkb2

0xe6c7,	// (0x00049570) slider_pane_g4_ParamLimits

0xe6c7,	// (0x00049570) slider_pane_g4

0x7ac8,	// (0x00042971) form2_midp_gauge_slider_pane_t2_cp01

0x7ad6,	// (0x0004297f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7ad6,	// (0x0004297f) form2_midp_gauge_slider_pane_t3_cp01

0x7af3,	// (0x0004299c) form2_midp_slider_pane_cp01

0x7e9d,	// (0x00042d46) navi_smil_pane

0xe75f,	// (0x00049608) navi_smil_pane_g1

0xe767,	// (0x00049610) navi_smil_pane_t1

0xe734,	// (0x000495dd) form2_midp_slider_pane_g1

0xe73d,	// (0x000495e6) form2_midp_slider_pane_g2

0xe745,	// (0x000495ee) form2_midp_slider_pane_g3

0xe734,	// (0x000495dd) form2_midp_slider_pane_g4

0xe74d,	// (0x000495f6) form2_midp_slider_pane_g5

0x0004,

0xfe1a,	// (0x0004acc3) form2_midp_slider_pane_g

0x7ab8,	// (0x00042961) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7ab8,	// (0x00042961) vkb2_area_bottom_space_btn_pane_g4

0x998e,	// (0x00044837) lc0_navi_pane_ParamLimits

0x998e,	// (0x00044837) lc0_navi_pane

0x9a04,	// (0x000448ad) lc0_stat_indi_pane_ParamLimits

0x9a04,	// (0x000448ad) lc0_stat_indi_pane

0x9a1b,	// (0x000448c4) ls0_title_pane_ParamLimits

0x9a1b,	// (0x000448c4) ls0_title_pane

0x880c,	// (0x000436b5) bg_popup_sub_pane_cp14_ParamLimits

0xdb93,	// (0x00048a3c) list_uniindi_pane_ParamLimits

0xdb9f,	// (0x00048a48) uniindi_top_pane_ParamLimits

0xdc3b,	// (0x00048ae4) list_single_uniindi_pane_g1_ParamLimits

0xdc4e,	// (0x00048af7) list_single_uniindi_pane_t1_ParamLimits

0x7afc,	// (0x000429a5) lc0_stat_clock_pane_ParamLimits

0x7afc,	// (0x000429a5) lc0_stat_clock_pane

0xe775,	// (0x0004961e) lc0_stat_indi_pane_g1_ParamLimits

0xe775,	// (0x0004961e) lc0_stat_indi_pane_g1

0xe782,	// (0x0004962b) lc0_stat_indi_pane_g2_ParamLimits

0xe782,	// (0x0004962b) lc0_stat_indi_pane_g2

0x0001,

0xfe25,	// (0x0004acce) lc0_stat_indi_pane_g_ParamLimits

0xfe25,	// (0x0004acce) lc0_stat_indi_pane_g

0x7b09,	// (0x000429b2) lc0_uni_indicator_pane_ParamLimits

0x7b09,	// (0x000429b2) lc0_uni_indicator_pane

0xe78f,	// (0x00049638) ls0_title_pane_g1_ParamLimits

0xe78f,	// (0x00049638) ls0_title_pane_g1

0xe7a3,	// (0x0004964c) ls0_title_pane_t1_ParamLimits

0xe7a3,	// (0x0004964c) ls0_title_pane_t1

0x7b16,	// (0x000429bf) lc0_uni_indicator_pane_g1_ParamLimits

0x7b16,	// (0x000429bf) lc0_uni_indicator_pane_g1

0xe7d9,	// (0x00049682) lc0_stat_clock_pane_t1

0x7e9d,	// (0x00042d46) main_ai5_pane

0xe7e7,	// (0x00049690) ai5_sk_pane_ParamLimits

0xe7e7,	// (0x00049690) ai5_sk_pane

0xe7f4,	// (0x0004969d) cell_ai5_widget_pane_ParamLimits

0xe7f4,	// (0x0004969d) cell_ai5_widget_pane

0xe8aa,	// (0x00049753) aid_size_cell_widget_grid

0xe8c0,	// (0x00049769) bg_ai5_widget_pane_ParamLimits

0xe8c0,	// (0x00049769) bg_ai5_widget_pane

0xe934,	// (0x000497dd) cell_ai5_widget_pane_g2

0xe944,	// (0x000497ed) cell_ai5_widget_pane_g3

0xe95b,	// (0x00049804) cell_ai5_widget_pane_g4

0xe967,	// (0x00049810) cell_ai5_widget_pane_g5

0xe973,	// (0x0004981c) cell_ai5_widget_pane_g6

0xe97f,	// (0x00049828) cell_ai5_widget_pane_g7

0xe9c7,	// (0x00049870) cell_ai5_widget_pane_t1_ParamLimits

0xe9c7,	// (0x00049870) cell_ai5_widget_pane_t1

0xe9e4,	// (0x0004988d) cell_ai5_widget_pane_t2_ParamLimits

0xe9e4,	// (0x0004988d) cell_ai5_widget_pane_t2

0xe9fc,	// (0x000498a5) cell_ai5_widget_pane_t3_ParamLimits

0xe9fc,	// (0x000498a5) cell_ai5_widget_pane_t3

0xea14,	// (0x000498bd) cell_ai5_widget_pane_t4_ParamLimits

0xea14,	// (0x000498bd) cell_ai5_widget_pane_t4

0xea31,	// (0x000498da) cell_ai5_widget_pane_t5_ParamLimits

0xea31,	// (0x000498da) cell_ai5_widget_pane_t5

0xea50,	// (0x000498f9) cell_ai5_widget_pane_t6_ParamLimits

0xea50,	// (0x000498f9) cell_ai5_widget_pane_t6

0xea62,	// (0x0004990b) cell_ai5_widget_pane_t7_ParamLimits

0xea62,	// (0x0004990b) cell_ai5_widget_pane_t7

0xea7b,	// (0x00049924) cell_ai5_widget_pane_t8_ParamLimits

0xea7b,	// (0x00049924) cell_ai5_widget_pane_t8

0x0009,

0xfe3f,	// (0x0004ace8) cell_ai5_widget_pane_t_ParamLimits

0xfe3f,	// (0x0004ace8) cell_ai5_widget_pane_t

0xeacf,	// (0x00049978) grid_ai5_widget_pane

0x880c,	// (0x000436b5) highlight_cell_ai5_widget_pane_ParamLimits

0x880c,	// (0x000436b5) highlight_cell_ai5_widget_pane

0xeae6,	// (0x0004998f) ai5_sk_left_pane

0xeaf0,	// (0x00049999) ai5_sk_middle_pane

0xeafa,	// (0x000499a3) ai5_sk_right_pane

0xeb04,	// (0x000499ad) bg_ai5_widget_pane_g1_ParamLimits

0xeb04,	// (0x000499ad) bg_ai5_widget_pane_g1

0xeb10,	// (0x000499b9) bg_ai5_widget_pane_g2_ParamLimits

0xeb10,	// (0x000499b9) bg_ai5_widget_pane_g2

0xeb1c,	// (0x000499c5) bg_ai5_widget_pane_g3_ParamLimits

0xeb1c,	// (0x000499c5) bg_ai5_widget_pane_g3

0xeb28,	// (0x000499d1) bg_ai5_widget_pane_g4_ParamLimits

0xeb28,	// (0x000499d1) bg_ai5_widget_pane_g4

0xeb34,	// (0x000499dd) bg_ai5_widget_pane_g5_ParamLimits

0xeb34,	// (0x000499dd) bg_ai5_widget_pane_g5

0xeb40,	// (0x000499e9) bg_ai5_widget_pane_g6_ParamLimits

0xeb40,	// (0x000499e9) bg_ai5_widget_pane_g6

0xeb4c,	// (0x000499f5) bg_ai5_widget_pane_g7_ParamLimits

0xeb4c,	// (0x000499f5) bg_ai5_widget_pane_g7

0xeb58,	// (0x00049a01) bg_ai5_widget_pane_g8_ParamLimits

0xeb58,	// (0x00049a01) bg_ai5_widget_pane_g8

0xeb64,	// (0x00049a0d) bg_ai5_widget_pane_g9_ParamLimits

0xeb64,	// (0x00049a0d) bg_ai5_widget_pane_g9

0x0008,

0xfe54,	// (0x0004acfd) bg_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0004acfd) bg_ai5_widget_pane_g

0xeb96,	// (0x00049a3f) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb96,	// (0x00049a3f) cell_shortcut_ai5_widget_pane

0x9496,	// (0x0004433f) bg_cell_shortcut_ai5_widget_pane

0xeba7,	// (0x00049a50) cell_grid_ai5_widget_pane_g1

0x9496,	// (0x0004433f) highlight_cell_shortcut_ai5_widget_pane

0x9cee,	// (0x00044b97) ai5_sk_left_pane_g1

0xebb0,	// (0x00049a59) ai5_sk_left_pane_g2

0xebb8,	// (0x00049a61) ai5_sk_left_pane_g3

0xebc0,	// (0x00049a69) ai5_sk_left_pane_g4

0x0003,

0xfe67,	// (0x0004ad10) ai5_sk_left_pane_g

0xebc8,	// (0x00049a71) ai5_sk_left_pane_t1

0x9ce6,	// (0x00044b8f) ai5_sk_right_pane_g1

0xebd6,	// (0x00049a7f) ai5_sk_right_pane_g2

0xebde,	// (0x00049a87) ai5_sk_right_pane_g3

0xebe6,	// (0x00049a8f) ai5_sk_right_pane_g4

0x0003,

0xfe70,	// (0x0004ad19) ai5_sk_right_pane_g

0xebee,	// (0x00049a97) ai5_sk_right_pane_t1

0x9ce6,	// (0x00044b8f) ai5_sk_middle_pane_g1

0x9cee,	// (0x00044b97) ai5_sk_middle_pane_g2

0x9d06,	// (0x00044baf) ai5_sk_middle_pane_g3

0xebde,	// (0x00049a87) ai5_sk_middle_pane_g4

0xebb8,	// (0x00049a61) ai5_sk_middle_pane_g5

0xebfc,	// (0x00049aa5) ai5_sk_middle_pane_g6

0xec04,	// (0x00049aad) ai5_sk_middle_pane_g7

0x0006,

0xfe79,	// (0x0004ad22) ai5_sk_middle_pane_g

0x981a,	// (0x000446c3) aid_touch_area_size_lc0_ParamLimits

0x981a,	// (0x000446c3) aid_touch_area_size_lc0

0x70f5,	// (0x00041f9e) cell_hwr_candidate_pane_t1_ParamLimits

0x9836,	// (0x000446df) aid_touch_navi_pane

0x9b09,	// (0x000449b2) status_dt_navi_pane_ParamLimits

0x9b09,	// (0x000449b2) status_dt_navi_pane

0x9b16,	// (0x000449bf) status_dt_sta_pane_ParamLimits

0x9b16,	// (0x000449bf) status_dt_sta_pane

0xec0c,	// (0x00049ab5) dt_sta_controll_pane

0xec19,	// (0x00049ac2) dt_sta_indi_pane

0xec2a,	// (0x00049ad3) dt_sta_title_pane

0x821a,	// (0x000430c3) bg_dt_sta_indi_pane_ParamLimits

0x821a,	// (0x000430c3) bg_dt_sta_indi_pane

0xec3d,	// (0x00049ae6) dt_sta_battery_pane

0xec45,	// (0x00049aee) dt_sta_indi_pane_g1

0xec4e,	// (0x00049af7) dt_sta_indi_pane_g2

0xec57,	// (0x00049b00) dt_sta_indi_pane_g3

0x0002,

0xfe88,	// (0x0004ad31) dt_sta_indi_pane_g

0xec60,	// (0x00049b09) dt_sta_signal_pane

0x880c,	// (0x000436b5) bg_dt_sta_title_pane_ParamLimits

0x880c,	// (0x000436b5) bg_dt_sta_title_pane

0xec69,	// (0x00049b12) dt_sta_title_pane_g1

0xec71,	// (0x00049b1a) dt_sta_title_pane_t1_ParamLimits

0xec71,	// (0x00049b1a) dt_sta_title_pane_t1

0x7e9d,	// (0x00042d46) bg_dt_sta_control_pane

0xec86,	// (0x00049b2f) dt_sta_controll_pane_g1

0xec8f,	// (0x00049b38) bg_dt_sta_title_pane_g1

0xec98,	// (0x00049b41) bg_dt_sta_title_pane_g2

0xeca1,	// (0x00049b4a) bg_dt_sta_title_pane_g3

0x0002,

0xfe8f,	// (0x0004ad38) bg_dt_sta_title_pane_g

0xc2a3,	// (0x0004714c) bg_dt_sta_indi_pane_g1

0xecaa,	// (0x00049b53) dt_sta_signal_pane_g1

0xecb2,	// (0x00049b5b) dt_sta_signal_pane_g2

0x0001,

0xfe96,	// (0x0004ad3f) dt_sta_signal_pane_g

0xecba,	// (0x00049b63) dt_sta_battery_pane_g1

0xecc3,	// (0x00049b6c) dt_sta_battery_pane_t1

0xc2a3,	// (0x0004714c) bg_dt_sta_control_pane_g1

0x8f95,	// (0x00043e3e) fep_china_uni_eep_pane

0x8f9d,	// (0x00043e46) fep_china_uni_entry_pane_ParamLimits

0x8fad,	// (0x00043e56) popup_fep_china_uni_window_g1_ParamLimits

0x8fbd,	// (0x00043e66) popup_fep_china_uni_window_g2_ParamLimits

0x8fbd,	// (0x00043e66) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0004a5cb) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0004a5cb) popup_fep_china_uni_window_g

0xecd2,	// (0x00049b7b) fep_china_uni_eep_pane_g1

0xecda,	// (0x00049b83) fep_china_uni_eep_pane_t1

0xe756,	// (0x000495ff) aid_touch_area_size_smil_player

0x9986,	// (0x0004482f) lc0_clock_pane

0x9b6d,	// (0x00044a16) status_pane_g5_ParamLimits

0x9b6d,	// (0x00044a16) status_pane_g5

0x6538,	// (0x000413e1) popup_keymap_window

0x9b2b,	// (0x000449d4) status_icon_pane

0xe944,	// (0x000497ed) cell_ai5_widget_pane_g3_ParamLimits

0xe95b,	// (0x00049804) cell_ai5_widget_pane_g4_ParamLimits

0xe967,	// (0x00049810) cell_ai5_widget_pane_g5_ParamLimits

0xe98b,	// (0x00049834) cell_ai5_widget_pane_g8_ParamLimits

0xe98b,	// (0x00049834) cell_ai5_widget_pane_g8

0xe99f,	// (0x00049848) cell_ai5_widget_pane_g9_ParamLimits

0xe99f,	// (0x00049848) cell_ai5_widget_pane_g9

0xe9b3,	// (0x0004985c) cell_ai5_widget_pane_g10_ParamLimits

0xe9b3,	// (0x0004985c) cell_ai5_widget_pane_g10

0xece9,	// (0x00049b92) status_icon_pane_g1

0x7e9d,	// (0x00042d46) bg_popup_sub_pane_cp13

0xecf1,	// (0x00049b9a) popup_keymap_window_t1

0x975f,	// (0x00044608) control_pane_g6_ParamLimits

0x975f,	// (0x00044608) control_pane_g6

0x976c,	// (0x00044615) control_pane_g7_ParamLimits

0x976c,	// (0x00044615) control_pane_g7

0x9779,	// (0x00044622) control_pane_g8_ParamLimits

0x9779,	// (0x00044622) control_pane_g8

0xec0c,	// (0x00049ab5) dt_sta_controll_pane_ParamLimits

0xec19,	// (0x00049ac2) dt_sta_indi_pane_ParamLimits

0xec2a,	// (0x00049ad3) dt_sta_title_pane_ParamLimits

0x8738,	// (0x000435e1) aid_size_touch_scroll_bar_cale

0x5acf,	// (0x00040978) popup_discreet_window_ParamLimits

0x5acf,	// (0x00040978) popup_discreet_window

0x5b57,	// (0x00040a00) popup_sk_window

0xa357,	// (0x00045200) bg_popup_sub_pane_cp28_ParamLimits

0xa357,	// (0x00045200) bg_popup_sub_pane_cp28

0xecff,	// (0x00049ba8) popup_discreet_window_g1_ParamLimits

0xecff,	// (0x00049ba8) popup_discreet_window_g1

0xed1f,	// (0x00049bc8) popup_discreet_window_t1_ParamLimits

0xed1f,	// (0x00049bc8) popup_discreet_window_t1

0xed3d,	// (0x00049be6) popup_discreet_window_t2_ParamLimits

0xed3d,	// (0x00049be6) popup_discreet_window_t2

0x0002,

0xfe9b,	// (0x0004ad44) popup_discreet_window_t_ParamLimits

0xfe9b,	// (0x0004ad44) popup_discreet_window_t

0x7b2a,	// (0x000429d3) popup_sk_window_g1

0x7b34,	// (0x000429dd) popup_sk_window_g2

0x0001,

0xfea2,	// (0x0004ad4b) popup_sk_window_g

0x7b3e,	// (0x000429e7) popup_sk_window_t1

0x7b4c,	// (0x000429f5) popup_sk_window_t1_copy1

0xe934,	// (0x000497dd) cell_ai5_widget_pane_g2_ParamLimits

0xea8d,	// (0x00049936) cell_ai5_widget_pane_t9_ParamLimits

0xea8d,	// (0x00049936) cell_ai5_widget_pane_t9

0x7e9d,	// (0x00042d46) main_fep_fshwr2_pane

0x7b5a,	// (0x00042a03) aid_fshwr2_btn_pane

0x7b66,	// (0x00042a0f) aid_fshwr2_syb_pane

0x7b72,	// (0x00042a1b) aid_fshwr2_txt_pane

0x7b7e,	// (0x00042a27) fshwr2_func_candi_pane

0x7b93,	// (0x00042a3c) fshwr2_hwr_syb_pane

0x7ba3,	// (0x00042a4c) fshwr2_icf_pane

0x7e9d,	// (0x00042d46) fshwr2_icf_bg_pane

0x7bcc,	// (0x00042a75) fshwr2_icf_pane_t1_ParamLimits

0x7bcc,	// (0x00042a75) fshwr2_icf_pane_t1

0x8e83,	// (0x00043d2c) fshwr2_func_candi_pane_g1

0xed8f,	// (0x00049c38) fshwr2_func_candi_row_pane_ParamLimits

0xed8f,	// (0x00049c38) fshwr2_func_candi_row_pane

0x7be4,	// (0x00042a8d) cell_fshwr2_syb_pane_ParamLimits

0x7be4,	// (0x00042a8d) cell_fshwr2_syb_pane

0xc521,	// (0x000473ca) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc521,	// (0x000473ca) fshwr2_hwr_syb_pane_g1

0x7e9d,	// (0x00042d46) bg_popup_call_pane_cp01

0x7bfa,	// (0x00042aa3) fshwr2_func_candi_cell_pane_ParamLimits

0x7bfa,	// (0x00042aa3) fshwr2_func_candi_cell_pane

0xed9f,	// (0x00049c48) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed9f,	// (0x00049c48) fshwr2_func_candi_cell_bg_pane

0x7c43,	// (0x00042aec) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7c43,	// (0x00042aec) fshwr2_func_candi_cell_pane_g1

0x7c6b,	// (0x00042b14) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7c6b,	// (0x00042b14) fshwr2_func_candi_cell_pane_t1

0x7e9d,	// (0x00042d46) bg_button_pane_cp08

0xedab,	// (0x00049c54) cell_fshwr2_syb_bg_pane

0x7c7e,	// (0x00042b27) cell_fshwr2_syb_bg_pane_g1

0x7c86,	// (0x00042b2f) cell_fshwr2_syb_bg_pane_t1

0x880c,	// (0x000436b5) main_tmo_pane

0xae72,	// (0x00045d1b) uni_indicator_pane_g1_ParamLimits

0xae88,	// (0x00045d31) uni_indicator_pane_g2_ParamLimits

0xae9e,	// (0x00045d47) uni_indicator_pane_g3_ParamLimits

0xaeb2,	// (0x00045d5b) uni_indicator_pane_g4_ParamLimits

0xaeb2,	// (0x00045d5b) uni_indicator_pane_g4

0xaec6,	// (0x00045d6f) uni_indicator_pane_g5_ParamLimits

0xaec6,	// (0x00045d6f) uni_indicator_pane_g5

0xaec6,	// (0x00045d6f) uni_indicator_pane_g6_ParamLimits

0xaec6,	// (0x00045d6f) uni_indicator_pane_g6

0xf926,	// (0x0004a7cf) uni_indicator_pane_g_ParamLimits

0xd78a,	// (0x00048633) popup_tmo_note_window_ParamLimits

0xd78a,	// (0x00048633) popup_tmo_note_window

0x880c,	// (0x000436b5) fshwr2_bg_pane

0x7c5c,	// (0x00042b05) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7c5c,	// (0x00042b05) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea7,	// (0x0004ad50) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea7,	// (0x0004ad50) fshwr2_func_candi_cell_pane_g

0xc2a3,	// (0x0004714c) bg_popup_window_pane_cp01

0x7c95,	// (0x00042b3e) bg_popup_window_pane_g1_cp01

0xedb3,	// (0x00049c5c) bg_popup_window_pane_cp22_ParamLimits

0xedb3,	// (0x00049c5c) bg_popup_window_pane_cp22

0xedc1,	// (0x00049c6a) listscroll_tmo_link_pane_ParamLimits

0xedc1,	// (0x00049c6a) listscroll_tmo_link_pane

0xee01,	// (0x00049caa) popup_tmo_note_window_g1_ParamLimits

0xee01,	// (0x00049caa) popup_tmo_note_window_g1

0xee0e,	// (0x00049cb7) tmo_note_info_pane_ParamLimits

0xee0e,	// (0x00049cb7) tmo_note_info_pane

0xee28,	// (0x00049cd1) list_tmo_note_info_pane_g1_ParamLimits

0xee28,	// (0x00049cd1) list_tmo_note_info_pane_g1

0xee3f,	// (0x00049ce8) list_tmo_note_info_pane_g2_ParamLimits

0xee3f,	// (0x00049ce8) list_tmo_note_info_pane_g2

0x0001,

0xfeac,	// (0x0004ad55) list_tmo_note_info_pane_g_ParamLimits

0xfeac,	// (0x0004ad55) list_tmo_note_info_pane_g

0xee5b,	// (0x00049d04) list_tmo_note_info_text_pane_ParamLimits

0xee5b,	// (0x00049d04) list_tmo_note_info_text_pane

0xeedc,	// (0x00049d85) list_tmo_link_pane

0xeee9,	// (0x00049d92) scroll_pane_cp20

0xeef6,	// (0x00049d9f) list_single_tmo_link_pane_ParamLimits

0xeef6,	// (0x00049d9f) list_single_tmo_link_pane

0xef06,	// (0x00049daf) list_single_tmo_link_pane_t1

0xef14,	// (0x00049dbd) list_tmo_note_info_text_pane_t1_ParamLimits

0xef14,	// (0x00049dbd) list_tmo_note_info_text_pane_t1

0x88ba,	// (0x00043763) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88ba,	// (0x00043763) aid_size_touch_scroll_bar_cp01

0x4ebb,	// (0x0003fd64) aid_size_touch_slider_marker

0x5b3f,	// (0x000409e8) popup_settings_window_ParamLimits

0x5b3f,	// (0x000409e8) popup_settings_window

0x5052,	// (0x0003fefb) popup_candi_list_indi_window

0x9836,	// (0x000446df) aid_touch_navi_pane_ParamLimits

0x733d,	// (0x000421e6) rs_clock_indi_pane

0x7346,	// (0x000421ef) sctrl_sk_bottom_pane_ParamLimits

0x7357,	// (0x00042200) sctrl_sk_top_pane_ParamLimits

0x743e,	// (0x000422e7) popup_fep_tooltip_window

0xe8aa,	// (0x00049753) aid_size_cell_widget_grid_ParamLimits

0xe91f,	// (0x000497c8) cell_ai5_widget_pane_g1_ParamLimits

0xe91f,	// (0x000497c8) cell_ai5_widget_pane_g1

0xe973,	// (0x0004981c) cell_ai5_widget_pane_g6_ParamLimits

0xe97f,	// (0x00049828) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2a,	// (0x0004acd3) cell_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0004acd3) cell_ai5_widget_pane_g

0xeab1,	// (0x0004995a) cell_ai5_widget_pane_t10_ParamLimits

0xeab1,	// (0x0004995a) cell_ai5_widget_pane_t10

0xeacf,	// (0x00049978) grid_ai5_widget_pane_ParamLimits

0xeb70,	// (0x00049a19) cell_contacts_ai5_widget_pane_ParamLimits

0xeb70,	// (0x00049a19) cell_contacts_ai5_widget_pane

0xed52,	// (0x00049bfb) popup_discreet_window_t3_ParamLimits

0xed52,	// (0x00049bfb) popup_discreet_window_t3

0x7bb8,	// (0x00042a61) popup_fshwr2_char_preview_window_ParamLimits

0x7bb8,	// (0x00042a61) popup_fshwr2_char_preview_window

0xee79,	// (0x00049d22) tmo_note_info_pane_t1

0xee8e,	// (0x00049d37) tmo_note_info_pane_t2

0xeea3,	// (0x00049d4c) tmo_note_info_pane_t3

0xeeb8,	// (0x00049d61) tmo_note_info_pane_t4

0xeeca,	// (0x00049d73) tmo_note_info_pane_t5

0x0004,

0xfeb1,	// (0x0004ad5a) tmo_note_info_pane_t

0xeedc,	// (0x00049d85) list_tmo_link_pane_ParamLimits

0xeee9,	// (0x00049d92) scroll_pane_cp20_ParamLimits

0x7e9d,	// (0x00042d46) bg_popup_fep_char_preview_window_cp01

0xef2d,	// (0x00049dd6) popup_fshwr2_char_preview_window_t1

0xef3b,	// (0x00049de4) popup_candi_list_indi_window_g1

0xef44,	// (0x00049ded) bg_cell_contacts_ai5_widget_pane

0xef50,	// (0x00049df9) cell_contacts_ai5_widget_pane_g1

0xc983,	// (0x0004782c) cell_contacts_ai5_widget_pane_g2

0xef65,	// (0x00049e0e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebc,	// (0x0004ad65) cell_contacts_ai5_widget_pane_g

0xef71,	// (0x00049e1a) cell_contacts_ai5_widget_pane_t1

0x880c,	// (0x000436b5) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefe8,	// (0x00049e91) settings_container_pane

0x9496,	// (0x0004433f) listscroll_set_pane_copy1

0xb998,	// (0x00046841) scroll_pane_cp121_copy1

0xeff4,	// (0x00049e9d) set_content_pane_copy1

0xeffc,	// (0x00049ea5) aid_height_set_list_copy1_ParamLimits

0xeffc,	// (0x00049ea5) aid_height_set_list_copy1

0xb0be,	// (0x00045f67) aid_size_parent_copy1_ParamLimits

0xb0be,	// (0x00045f67) aid_size_parent_copy1

0xf008,	// (0x00049eb1) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf008,	// (0x00049eb1) button_value_adjust_pane_cp6_copy1

0x97d4,	// (0x0004467d) list_highlight_pane_cp2_copy1_ParamLimits

0x97d4,	// (0x0004467d) list_highlight_pane_cp2_copy1

0xf01c,	// (0x00049ec5) list_set_pane_copy1_ParamLimits

0xf01c,	// (0x00049ec5) list_set_pane_copy1

0xef83,	// (0x00049e2c) main_pane_set_t1_copy1_ParamLimits

0xef83,	// (0x00049e2c) main_pane_set_t1_copy1

0xefbd,	// (0x00049e66) main_pane_set_t2_copy1_ParamLimits

0xefbd,	// (0x00049e66) main_pane_set_t2_copy1

0xf0c9,	// (0x00049f72) main_pane_set_t3_copy1

0xf0d7,	// (0x00049f80) main_pane_set_t4_copy1

0xefdc,	// (0x00049e85) set_content_pane_g1_copy1_ParamLimits

0xefdc,	// (0x00049e85) set_content_pane_g1_copy1

0xf0e5,	// (0x00049f8e) setting_code_pane_copy1

0xf0ed,	// (0x00049f96) setting_slider_graphic_pane_copy1

0xf0ed,	// (0x00049f96) setting_slider_pane_copy1

0xf0ed,	// (0x00049f96) setting_text_pane_copy1

0xf0ed,	// (0x00049f96) setting_volume_pane_copy1

0xf0e5,	// (0x00049f8e) settings_code_pane_cp2_copy1

0xf0f5,	// (0x00049f9e) settings_code_pane_cp_copy1_ParamLimits

0xf0f5,	// (0x00049f9e) settings_code_pane_cp_copy1

0x7c9e,	// (0x00042b47) volume_set_pane_copy1

0xf109,	// (0x00049fb2) volume_set_pane_g10_copy1

0xf111,	// (0x00049fba) volume_set_pane_g1_copy1

0xf119,	// (0x00049fc2) volume_set_pane_g2_copy1

0xf121,	// (0x00049fca) volume_set_pane_g3_copy1

0xf129,	// (0x00049fd2) volume_set_pane_g4_copy1

0xf131,	// (0x00049fda) volume_set_pane_g5_copy1

0xf139,	// (0x00049fe2) volume_set_pane_g6_copy1

0xf141,	// (0x00049fea) volume_set_pane_g7_copy1

0xf149,	// (0x00049ff2) volume_set_pane_g8_copy1

0xf151,	// (0x00049ffa) volume_set_pane_g9_copy1

0x7f91,	// (0x00042e3a) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f91,	// (0x00042e3a) bg_set_opt_pane_cp_copy1

0x7ca6,	// (0x00042b4f) setting_slider_pane_t1_copy1_ParamLimits

0x7ca6,	// (0x00042b4f) setting_slider_pane_t1_copy1

0x7cc4,	// (0x00042b6d) setting_slider_pane_t2_copy1_ParamLimits

0x7cc4,	// (0x00042b6d) setting_slider_pane_t2_copy1

0x7cde,	// (0x00042b87) setting_slider_pane_t3_copy1_ParamLimits

0x7cde,	// (0x00042b87) setting_slider_pane_t3_copy1

0x7cf6,	// (0x00042b9f) slider_set_pane_copy1_ParamLimits

0x7cf6,	// (0x00042b9f) slider_set_pane_copy1

0x885b,	// (0x00043704) set_opt_bg_pane_g1_copy2

0x8863,	// (0x0004370c) set_opt_bg_pane_g2_copy2

0xf159,	// (0x0004a002) set_opt_bg_pane_g3_copy2

0x8873,	// (0x0004371c) set_opt_bg_pane_g4_copy2

0x887b,	// (0x00043724) set_opt_bg_pane_g5_copy2

0x8883,	// (0x0004372c) set_opt_bg_pane_g6_copy2

0xf163,	// (0x0004a00c) set_opt_bg_pane_g7_copy2

0xf16b,	// (0x0004a014) set_opt_bg_pane_g8_copy2

0xf175,	// (0x0004a01e) set_opt_bg_pane_g9_copy2

0x7d0c,	// (0x00042bb5) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d0c,	// (0x00042bb5) aid_size_touch_slider_mark_copy1

0xf17f,	// (0x0004a028) slider_set_pane_g1_copy1

0x7d20,	// (0x00042bc9) slider_set_pane_g2_copy1

0x6c78,	// (0x00041b21) slider_set_pane_g3_copy1_ParamLimits

0x6c78,	// (0x00041b21) slider_set_pane_g3_copy1

0x6c8c,	// (0x00041b35) slider_set_pane_g4_copy1_ParamLimits

0x6c8c,	// (0x00041b35) slider_set_pane_g4_copy1

0x6ca4,	// (0x00041b4d) slider_set_pane_g5_copy1_ParamLimits

0x6ca4,	// (0x00041b4d) slider_set_pane_g5_copy1

0x6c78,	// (0x00041b21) slider_set_pane_g6_copy1_ParamLimits

0x6c78,	// (0x00041b21) slider_set_pane_g6_copy1

0x7d28,	// (0x00042bd1) slider_set_pane_g7_copy1_ParamLimits

0x7d28,	// (0x00042bd1) slider_set_pane_g7_copy1

0x7eb1,	// (0x00042d5a) bg_set_opt_pane_cp2_copy1

0xf188,	// (0x0004a031) setting_slider_graphic_pane_g1_copy1

0xf191,	// (0x0004a03a) setting_slider_graphic_pane_t1_copy1

0xf1a1,	// (0x0004a04a) setting_slider_graphic_pane_t2_copy1

0xf1b1,	// (0x0004a05a) slider_set_pane_cp_copy1

0xf1c1,	// (0x0004a06a) input_focus_pane_cp1_copy1

0xf1ca,	// (0x0004a073) list_set_text_pane_copy1

0xf1d2,	// (0x0004a07b) setting_text_pane_g1_copy1

0x48f0,	// (0x0003f799) set_text_pane_t1_copy1

0xf1c1,	// (0x0004a06a) input_focus_pane_cp2_copy1

0xf1d2,	// (0x0004a07b) setting_code_pane_g1_copy1

0xf1db,	// (0x0004a084) setting_code_pane_t1_copy1

0xf1e9,	// (0x0004a092) list_set_graphic_pane_copy1

0x7eb1,	// (0x00042d5a) bg_set_opt_pane_cp4_copy1

0x9191,	// (0x0004403a) list_set_graphic_pane_g1_copy1_ParamLimits

0x9191,	// (0x0004403a) list_set_graphic_pane_g1_copy1

0xf1fb,	// (0x0004a0a4) list_set_graphic_pane_g2_copy1

0x91a9,	// (0x00044052) list_set_graphic_pane_t1_copy1_ParamLimits

0x91a9,	// (0x00044052) list_set_graphic_pane_t1_copy1

0xc2a3,	// (0x0004714c) rs_clock_indi_pane_g1

0xf203,	// (0x0004a0ac) rs_clock_indi_pane_t1

0xf211,	// (0x0004a0ba) rs_indi_pane

0xf219,	// (0x0004a0c2) rs_indi_pane_g1

0xf222,	// (0x0004a0cb) rs_indi_pane_g2

0xf22b,	// (0x0004a0d4) rs_indi_pane_g3

0x0002,

0xfec3,	// (0x0004ad6c) rs_indi_pane_g

0x9496,	// (0x0004433f) bg_popup_preview_window_pane_cp03

0xf234,	// (0x0004a0dd) popup_fep_tooltip_window_t1

0xcf2b,	// (0x00047dd4) popup_note2_window_g2_ParamLimits

0xcf2b,	// (0x00047dd4) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0004ab05) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0004ab05) popup_note2_window_g

0xd426,	// (0x000482cf) bg_popup_sub_pane_cp11_ParamLimits

0xd433,	// (0x000482dc) cell_ai3_links_pane_g1_ParamLimits

0xd44a,	// (0x000482f3) cell_ai3_links_pane_t1

0x48f0,	// (0x0003f799) set_text_pane_t1_copy1_ParamLimits

0x93a7,	// (0x00044250) cell_graphic_popup_pane_cp2_ParamLimits

0x93a7,	// (0x00044250) cell_graphic_popup_pane_cp2

0xf242,	// (0x0004a0eb) cell_graphic_popup_pane_g1_cp2

0x854b,	// (0x000433f4) cell_graphic_popup_pane_g2_cp2

0xf24a,	// (0x0004a0f3) cell_graphic_popup_pane_g3_cp2

0xf252,	// (0x0004a0fb) cell_graphic_popup_pane_t2_cp2

0x855c,	// (0x00043405) grid_highlight_pane_cp3_cp2

0x8ba0,	// (0x00043a49) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x880c,	// (0x000436b5) main_tmo_pane_ParamLimits

0xd77e,	// (0x00048627) popup_tmo_big_image_note_window

0xe90e,	// (0x000497b7) cell_ai5_widget_list_pane

0xe916,	// (0x000497bf) cell_ai5_widget_lrg_icon_pane

0xee79,	// (0x00049d22) tmo_note_info_pane_t1_ParamLimits

0xee8e,	// (0x00049d37) tmo_note_info_pane_t2_ParamLimits

0xeea3,	// (0x00049d4c) tmo_note_info_pane_t3_ParamLimits

0xeeb8,	// (0x00049d61) tmo_note_info_pane_t4_ParamLimits

0xeeca,	// (0x00049d73) tmo_note_info_pane_t5_ParamLimits

0xfeb1,	// (0x0004ad5a) tmo_note_info_pane_t_ParamLimits

0xefe8,	// (0x00049e91) settings_container_pane_ParamLimits

0xf1b9,	// (0x0004a062) indicator_popup_pane_cp5

0xf1b9,	// (0x0004a062) indicator_popup_pane_cp6

0xf1e9,	// (0x0004a092) list_set_graphic_pane_copy1_ParamLimits

0x7e9d,	// (0x00042d46) bg_popup_window_pane_cp23

0xf260,	// (0x0004a109) popup_tmo_big_image_note_window_g1

0xf26a,	// (0x0004a113) popup_tmo_big_image_note_window_t1

0xf27a,	// (0x0004a123) popup_tmo_big_image_note_window_t2

0xf28a,	// (0x0004a133) popup_tmo_big_image_note_window_t3

0x0002,

0xfeca,	// (0x0004ad73) popup_tmo_big_image_note_window_t

0xc2a3,	// (0x0004714c) cell_ai5_widget_lrg_icon_pane_g1

0xf29a,	// (0x0004a143) cell_ai5_widget_lrg_icon_pane_t1

0xf2a8,	// (0x0004a151) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a8,	// (0x0004a151) cell_ai5_widget_list_row_pane

0xf2bf,	// (0x0004a168) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2bf,	// (0x0004a168) cell_ai5_widget_list_row_pane_g1

0xf2cc,	// (0x0004a175) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cc,	// (0x0004a175) cell_ai5_widget_list_row_pane_t1

0xf2fd,	// (0x0004a1a6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2fd,	// (0x0004a1a6) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed1,	// (0x0004ad7a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed1,	// (0x0004ad7a) cell_ai5_widget_list_row_pane_t

0x7e9d,	// (0x00042d46) main_fep_vtchi_ss_pane

0xf341,	// (0x0004a1ea) popup_fep_char_pre_window

0xf349,	// (0x0004a1f2) popup_fep_ituss_window

0xf36a,	// (0x0004a213) popup_fep_vkbss_window

0xf389,	// (0x0004a232) grid_vkbss_keypad_pane_ParamLimits

0xf389,	// (0x0004a232) grid_vkbss_keypad_pane

0xf399,	// (0x0004a242) ituss_keypad_pane

0x7d4a,	// (0x00042bf3) aid_vkbss_key_offset_ParamLimits

0x7d4a,	// (0x00042bf3) aid_vkbss_key_offset

0x7d56,	// (0x00042bff) cell_vkbss_key_pane_ParamLimits

0x7d56,	// (0x00042bff) cell_vkbss_key_pane

0xf3a8,	// (0x0004a251) bg_cell_vkbss_key_g1_ParamLimits

0xf3a8,	// (0x0004a251) bg_cell_vkbss_key_g1

0xf3b4,	// (0x0004a25d) cell_vkbss_key_3p_pane_ParamLimits

0xf3b4,	// (0x0004a25d) cell_vkbss_key_3p_pane

0xf3ce,	// (0x0004a277) cell_vkbss_key_g1_ParamLimits

0xf3ce,	// (0x0004a277) cell_vkbss_key_g1

0xf3e8,	// (0x0004a291) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x0004a291) cell_vkbss_key_t1

0x7d6c,	// (0x00042c15) cell_ituss_key_pane_ParamLimits

0x7d6c,	// (0x00042c15) cell_ituss_key_pane

0xf413,	// (0x0004a2bc) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x0004a2bc) bg_cell_ituss_key_g1

0xf41f,	// (0x0004a2c8) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x0004a2c8) cell_ituss_key_pane_g1

0x7d7d,	// (0x00042c26) cell_ituss_key_pane_g2_ParamLimits

0x7d7d,	// (0x00042c26) cell_ituss_key_pane_g2

0x0002,

0xfed8,	// (0x0004ad81) cell_ituss_key_pane_g_ParamLimits

0xfed8,	// (0x0004ad81) cell_ituss_key_pane_g

0x7da9,	// (0x00042c52) cell_ituss_key_t1_ParamLimits

0x7da9,	// (0x00042c52) cell_ituss_key_t1

0x7de3,	// (0x00042c8c) cell_ituss_key_t2_ParamLimits

0x7de3,	// (0x00042c8c) cell_ituss_key_t2

0x7e14,	// (0x00042cbd) cell_ituss_key_t3_ParamLimits

0x7e14,	// (0x00042cbd) cell_ituss_key_t3

0x7de3,	// (0x00042c8c) cell_ituss_key_t4_ParamLimits

0x7de3,	// (0x00042c8c) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x0004ad88) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0004ad88) cell_ituss_key_t

0xf44b,	// (0x0004a2f4) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x0004a2fc) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x0004a304) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0004ad93) cell_vkbss_key_3p_pane_g

0x7e9d,	// (0x00042d46) bg_popup_fep_char_preview_window_cp02

0x7e57,	// (0x00042d00) popup_fep_char_pre_window_t1

0xe8a0,	// (0x00049749) main_ai5_sk_pane

0xef44,	// (0x00049ded) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef50,	// (0x00049df9) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc983,	// (0x0004782c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef65,	// (0x00049e0e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebc,	// (0x0004ad65) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef71,	// (0x00049e1a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x880c,	// (0x000436b5) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x0004a30c) main_ai5_sk_pane_g1

0xa190,	// (0x00045039) popup_query_code_window_g1

0xf35f,	// (0x0004a208) popup_fep_vkb_icf_pane

0xf373,	// (0x0004a21c) popup_fep_vtchi_icf_pane

0xf46c,	// (0x0004a315) bg_icf_pane

0xf478,	// (0x0004a321) list_vkb_icf_pane

0xf487,	// (0x0004a330) bg_icf_pane_cp01

0xf49a,	// (0x0004a343) vtchi_icf_list_pane

0xf4aa,	// (0x0004a353) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x0004a353) list_vkb_icf_pane_t1

0xf4c0,	// (0x0004a369) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x0004a369) vtchi_icf_list_pane_t1

0xf349,	// (0x0004a1f2) popup_fep_ituss_window_ParamLimits

0xf373,	// (0x0004a21c) popup_fep_vtchi_icf_pane_ParamLimits

0xf399,	// (0x0004a242) ituss_keypad_pane_ParamLimits

0x7d3e,	// (0x00042be7) ituss_sks_pane

0xf46c,	// (0x0004a315) bg_icf_pane_ParamLimits

0xf325,	// (0x0004a1ce) icf_edit_indi_pane_ParamLimits

0xf325,	// (0x0004a1ce) icf_edit_indi_pane

0xf478,	// (0x0004a321) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x0004a330) bg_icf_pane_cp01_ParamLimits

0xf334,	// (0x0004a1dd) icf_edit_indi_pane_cp01_ParamLimits

0xf334,	// (0x0004a1dd) icf_edit_indi_pane_cp01

0xf4a2,	// (0x0004a34b) vtchi_query_pane

0xc521,	// (0x000473ca) icf_edit_indi_pane_g1_ParamLimits

0xc521,	// (0x000473ca) icf_edit_indi_pane_g1

0xf531,	// (0x0004a3da) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0004a3da) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0004adab) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0004adab) icf_edit_indi_pane_g

0xf540,	// (0x0004a3e9) icf_edit_indi_pane_t1

0xf4da,	// (0x0004a383) bg_input_focus_pane_cp042

0x872f,	// (0x000435d8) vtchi_button_pane

0xf4e3,	// (0x0004a38c) vtchi_query_pane_t1

0xf4f1,	// (0x0004a39a) vtchi_query_pane_t2

0xf4ff,	// (0x0004a3a8) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0004ad9a) vtchi_query_pane_t

0x7e9d,	// (0x00042d46) bg_button_pane_cp13

0xf50d,	// (0x0004a3b6) vtchi_button_pane_g1

0x7e66,	// (0x00042d0f) ituss_sks_pane_g1

0x7e71,	// (0x00042d1a) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0004ada1) ituss_sks_pane_g

0xf515,	// (0x0004a3be) ituss_sks_pane_t1

0xf523,	// (0x0004a3cc) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0004ada6) ituss_sks_pane_t

0xbd12,	// (0x00046bbb) indicator_nsta_pane_cp_g1

0xbd1b,	// (0x00046bc4) indicator_nsta_pane_cp_g2

0xbd23,	// (0x00046bcc) indicator_nsta_pane_cp_g3

0xbd2b,	// (0x00046bd4) indicator_nsta_pane_cp_g4

0xbd33,	// (0x00046bdc) indicator_nsta_pane_cp_g5

0xbd33,	// (0x00046bdc) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x0004a94f) indicator_nsta_pane_cp_g

0xe486,	// (0x0004932f) cell_graphic2_pane_t2_ParamLimits

0xe486,	// (0x0004932f) cell_graphic2_pane_t2

0x0001,

0xfdb3,	// (0x0004ac5c) cell_graphic2_pane_t_ParamLimits

0xfdb3,	// (0x0004ac5c) cell_graphic2_pane_t

0xe4b3,	// (0x0004935c) cell_graphic2_control_pane_t1

0x8f44,	// (0x00043ded) signal_pane_g3_ParamLimits

0x8f44,	// (0x00043ded) signal_pane_g3

0x8f56,	// (0x00043dff) signal_pane_g4_ParamLimits

0x8f56,	// (0x00043dff) signal_pane_g4

0xf30f,	// (0x0004a1b8) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf30f,	// (0x0004a1b8) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x0004a2e2) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x0004a2e2) cell_ituss_key_pane_t1

0x9de3,	// (0x00044c8c) form_field_data_wide_pane_vc_t2_ParamLimits

0x9de3,	// (0x00044c8c) form_field_data_wide_pane_vc_t2

0x9df7,	// (0x00044ca0) form_field_data_wide_pane_vc_t3_ParamLimits

0x9df7,	// (0x00044ca0) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x0004a6b7) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x0004a6b7) form_field_data_wide_pane_vc_t

0xb9da,	// (0x00046883) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9da,	// (0x00046883) form_field_slider_wide_pane_vc_t3

0xbab8,	// (0x00046961) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbab8,	// (0x00046961) form_field_popup_wide_pane_vc_t2

0xbacf,	// (0x00046978) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbacf,	// (0x00046978) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x0004a93e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x0004a93e) form_field_popup_wide_pane_vc_t

0x7b5a,	// (0x00042a03) aid_fshwr2_btn_pane_ParamLimits

0x7b66,	// (0x00042a0f) aid_fshwr2_syb_pane_ParamLimits

0x7b72,	// (0x00042a1b) aid_fshwr2_txt_pane_ParamLimits

0x880c,	// (0x000436b5) fshwr2_bg_pane_ParamLimits

0x7b7e,	// (0x00042a27) fshwr2_func_candi_pane_ParamLimits

0x7b93,	// (0x00042a3c) fshwr2_hwr_syb_pane_ParamLimits

0x7ba3,	// (0x00042a4c) fshwr2_icf_pane_ParamLimits

0x6e58,	// (0x00041d01) list_double_graphic_pane_vc_g4_ParamLimits

0x6e58,	// (0x00041d01) list_double_graphic_pane_vc_g4

0x7d9d,	// (0x00042c46) cell_ituss_key_pane_g3_ParamLimits

0x7d9d,	// (0x00042c46) cell_ituss_key_pane_g3

0x7e45,	// (0x00042cee) cell_ituss_key_t5_ParamLimits

0x7e45,	// (0x00042cee) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large

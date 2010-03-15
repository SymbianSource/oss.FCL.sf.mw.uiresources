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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001f001 };

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
0x6005,	// (0x00025006) Screen

0x6011,	// (0x00025012) application_window_ParamLimits

0x6011,	// (0x00025012) application_window

0x09ff,	// (0x0001fa00) screen_g1

0x606d,	// (0x0002506e) area_bottom_pane_ParamLimits

0x606d,	// (0x0002506e) area_bottom_pane

0x612d,	// (0x0002512e) area_top_pane_ParamLimits

0x612d,	// (0x0002512e) area_top_pane

0x61c1,	// (0x000251c2) main_pane_ParamLimits

0x61c1,	// (0x000251c2) main_pane

0x0a09,	// (0x0001fa0a) misc_graphics

0x7ecd,	// (0x00026ece) battery_pane_ParamLimits

0x7ecd,	// (0x00026ece) battery_pane

0x9d50,	// (0x00028d51) bg_status_flat_pane_g8

0x9d58,	// (0x00028d59) bg_status_flat_pane_g9

0x7f95,	// (0x00026f96) context_pane_ParamLimits

0x7f95,	// (0x00026f96) context_pane

0x80b9,	// (0x000270ba) navi_pane_ParamLimits

0x80b9,	// (0x000270ba) navi_pane

0x8149,	// (0x0002714a) signal_pane_ParamLimits

0x8149,	// (0x0002714a) signal_pane

0x0008,

0xf87a,	// (0x0002e87b) bg_status_flat_pane_g

0x81b6,	// (0x000271b7) status_pane_g1_ParamLimits

0x81b6,	// (0x000271b7) status_pane_g1

0x81ca,	// (0x000271cb) status_pane_g2_ParamLimits

0x81ca,	// (0x000271cb) status_pane_g2

0x81d6,	// (0x000271d7) status_pane_g3_ParamLimits

0x81d6,	// (0x000271d7) status_pane_g3

0x0004,

0xf7a1,	// (0x0002e7a2) status_pane_g_ParamLimits

0xf7a1,	// (0x0002e7a2) status_pane_g

0x820a,	// (0x0002720b) title_pane_ParamLimits

0x820a,	// (0x0002720b) title_pane

0x8247,	// (0x00027248) uni_indicator_pane_ParamLimits

0x8247,	// (0x00027248) uni_indicator_pane

0x77be,	// (0x000267bf) bg_list_pane_ParamLimits

0x77be,	// (0x000267bf) bg_list_pane

0x77de,	// (0x000267df) find_pane

0x77e6,	// (0x000267e7) listscroll_app_pane_ParamLimits

0x77e6,	// (0x000267e7) listscroll_app_pane

0x77f2,	// (0x000267f3) listscroll_form_pane

0x77fa,	// (0x000267fb) listscroll_gen_pane_ParamLimits

0x77fa,	// (0x000267fb) listscroll_gen_pane

0x77f2,	// (0x000267f3) listscroll_set_pane

0x680c,	// (0x0002580d) main_idle_act_pane

0x72b3,	// (0x000262b4) main_idle_trad_pane

0x72b3,	// (0x000262b4) main_list_empty_pane

0x7820,	// (0x00026821) main_midp_pane

0x782c,	// (0x0002682d) main_pane_g1_ParamLimits

0x782c,	// (0x0002682d) main_pane_g1

0x783a,	// (0x0002683b) popup_ai_message_window_ParamLimits

0x783a,	// (0x0002683b) popup_ai_message_window

0x78ee,	// (0x000268ef) popup_fep_china_uni_window_ParamLimits

0x78ee,	// (0x000268ef) popup_fep_china_uni_window

0x794e,	// (0x0002694f) popup_fep_japan_candidate_window_ParamLimits

0x794e,	// (0x0002694f) popup_fep_japan_candidate_window

0x7978,	// (0x00026979) popup_fep_japan_predictive_window_ParamLimits

0x7978,	// (0x00026979) popup_fep_japan_predictive_window

0x79ae,	// (0x000269af) popup_find_window

0x79bb,	// (0x000269bc) popup_grid_graphic_window_ParamLimits

0x79bb,	// (0x000269bc) popup_grid_graphic_window

0x79e9,	// (0x000269ea) popup_large_graphic_colour_window

0x7a0f,	// (0x00026a10) popup_menu_window_ParamLimits

0x7a0f,	// (0x00026a10) popup_menu_window

0x7bd9,	// (0x00026bda) popup_note_image_window

0x7bc3,	// (0x00026bc4) popup_note_wait_window_ParamLimits

0x7bc3,	// (0x00026bc4) popup_note_wait_window

0x7bc3,	// (0x00026bc4) popup_note_window_ParamLimits

0x7bc3,	// (0x00026bc4) popup_note_window

0x7c3f,	// (0x00026c40) popup_query_code_window_ParamLimits

0x7c3f,	// (0x00026c40) popup_query_code_window

0x7c55,	// (0x00026c56) popup_query_data_code_window_ParamLimits

0x7c55,	// (0x00026c56) popup_query_data_code_window

0x7c78,	// (0x00026c79) popup_query_data_window_ParamLimits

0x7c78,	// (0x00026c79) popup_query_data_window

0x7c9a,	// (0x00026c9b) popup_query_sat_info_window_ParamLimits

0x7c9a,	// (0x00026c9b) popup_query_sat_info_window

0x7cd9,	// (0x00026cda) popup_snote_single_graphic_window_ParamLimits

0x7cd9,	// (0x00026cda) popup_snote_single_graphic_window

0x7cd9,	// (0x00026cda) popup_snote_single_text_window_ParamLimits

0x7cd9,	// (0x00026cda) popup_snote_single_text_window

0x7cf0,	// (0x00026cf1) popup_sub_window_general

0x7e36,	// (0x00026e37) popup_window_general_ParamLimits

0x7e36,	// (0x00026e37) popup_window_general

0x7e4f,	// (0x00026e50) power_save_pane

0x761d,	// (0x0002661e) control_pane_g1_ParamLimits

0x761d,	// (0x0002661e) control_pane_g1

0x7646,	// (0x00026647) control_pane_g2_ParamLimits

0x7646,	// (0x00026647) control_pane_g2

0x766b,	// (0x0002666c) control_pane_g3_ParamLimits

0x766b,	// (0x0002666c) control_pane_g3

0x0007,

0xf789,	// (0x0002e78a) control_pane_g_ParamLimits

0xf789,	// (0x0002e78a) control_pane_g

0x76c3,	// (0x000266c4) control_pane_t1_ParamLimits

0x76c3,	// (0x000266c4) control_pane_t1

0x770f,	// (0x00026710) control_pane_t2_ParamLimits

0x770f,	// (0x00026710) control_pane_t2

0x0002,

0xf79a,	// (0x0002e79b) control_pane_t_ParamLimits

0xf79a,	// (0x0002e79b) control_pane_t

0x753e,	// (0x0002653f) navi_navi_volume_pane_cp1

0x7547,	// (0x00026548) status_small_icon_pane

0x754f,	// (0x00026550) status_small_pane_g1_ParamLimits

0x754f,	// (0x00026550) status_small_pane_g1

0x7583,	// (0x00026584) status_small_pane_g2_ParamLimits

0x7583,	// (0x00026584) status_small_pane_g2

0x758f,	// (0x00026590) status_small_pane_g3_ParamLimits

0x758f,	// (0x00026590) status_small_pane_g3

0x759b,	// (0x0002659c) status_small_pane_g4_ParamLimits

0x759b,	// (0x0002659c) status_small_pane_g4

0x75a7,	// (0x000265a8) status_small_pane_g5_ParamLimits

0x75a7,	// (0x000265a8) status_small_pane_g5

0x75b6,	// (0x000265b7) status_small_pane_g6_ParamLimits

0x75b6,	// (0x000265b7) status_small_pane_g6

0x0007,

0xf778,	// (0x0002e779) status_small_pane_g_ParamLimits

0xf778,	// (0x0002e779) status_small_pane_g

0x75e6,	// (0x000265e7) status_small_pane_t1

0x7609,	// (0x0002660a) status_small_wait_pane_ParamLimits

0x7609,	// (0x0002660a) status_small_wait_pane

0x6b81,	// (0x00025b82) aid_levels_signal_ParamLimits

0x6b81,	// (0x00025b82) aid_levels_signal

0x6b93,	// (0x00025b94) signal_pane_g1_ParamLimits

0x6b93,	// (0x00025b94) signal_pane_g1

0x6ba8,	// (0x00025ba9) signal_pane_g2_ParamLimits

0x6ba8,	// (0x00025ba9) signal_pane_g2

0x0003,

0xf709,	// (0x0002e70a) signal_pane_g_ParamLimits

0xf709,	// (0x0002e70a) signal_pane_g

0x6be3,	// (0x00025be4) context_pane_g1

0x6418,	// (0x00025419) title_pane_g1

0x6436,	// (0x00025437) title_pane_t1

0x0a2b,	// (0x0001fa2c) title_pane_t2

0x0a51,	// (0x0001fa52) title_pane_t3

0x0002,

0xf55d,	// (0x0002e55e) title_pane_t

0x825f,	// (0x00027260) aid_levels_battery_ParamLimits

0x825f,	// (0x00027260) aid_levels_battery

0x8273,	// (0x00027274) battery_pane_g1_ParamLimits

0x8273,	// (0x00027274) battery_pane_g1

0x8289,	// (0x0002728a) battery_pane_g2_ParamLimits

0x8289,	// (0x0002728a) battery_pane_g2

0x0001,

0xf7ac,	// (0x0002e7ad) battery_pane_g_ParamLimits

0xf7ac,	// (0x0002e7ad) battery_pane_g

0xa69a,	// (0x0002969b) uni_indicator_pane_g1

0xa6af,	// (0x000296b0) uni_indicator_pane_g2

0xa6c5,	// (0x000296c6) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0002e923) uni_indicator_pane_g

0x7121,	// (0x00026122) navi_icon_pane_ParamLimits

0x7121,	// (0x00026122) navi_icon_pane

0x7068,	// (0x00026069) navi_midp_pane

0x713d,	// (0x0002613e) navi_navi_pane

0x7147,	// (0x00026148) navi_text_pane_ParamLimits

0x7147,	// (0x00026148) navi_text_pane

0x09ff,	// (0x0001fa00) status_small_wait_pane_g1

0x2828,	// (0x00021829) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0002e91e) status_small_wait_pane_g

0xa3ad,	// (0x000293ae) navi_navi_icon_text_pane

0xa3b5,	// (0x000293b6) navi_navi_pane_g1_ParamLimits

0xa3b5,	// (0x000293b6) navi_navi_pane_g1

0xa3c7,	// (0x000293c8) navi_navi_pane_g2_ParamLimits

0xa3c7,	// (0x000293c8) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0002e8ec) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0002e8ec) navi_navi_pane_g

0xa3d9,	// (0x000293da) navi_navi_tabs_pane

0xa3e2,	// (0x000293e3) navi_navi_text_pane

0xa3ad,	// (0x000293ae) navi_navi_volume_pane

0xa389,	// (0x0002938a) navi_text_pane_t1

0xa37d,	// (0x0002937e) navi_icon_pane_g1

0xa2d0,	// (0x000292d1) navi_navi_text_pane_t1

0x8595,	// (0x00027596) navi_navi_volume_pane_g1

0x859d,	// (0x0002759e) volume_small_pane

0xa236,	// (0x00029237) navi_navi_icon_text_pane_g1

0xa23e,	// (0x0002923f) navi_navi_icon_text_pane_t1

0x713d,	// (0x0002613e) navi_tabs_2_long_pane

0x713d,	// (0x0002613e) navi_tabs_2_pane

0x713d,	// (0x0002613e) navi_tabs_3_long_pane

0x713d,	// (0x0002613e) navi_tabs_3_pane

0x713d,	// (0x0002613e) navi_tabs_4_pane

0x8575,	// (0x00027576) tabs_2_active_pane_ParamLimits

0x8575,	// (0x00027576) tabs_2_active_pane

0x8585,	// (0x00027586) tabs_2_passive_pane_ParamLimits

0x8585,	// (0x00027586) tabs_2_passive_pane

0x8543,	// (0x00027544) tabs_3_active_pane_ParamLimits

0x8543,	// (0x00027544) tabs_3_active_pane

0x8553,	// (0x00027554) tabs_3_passive_pane_ParamLimits

0x8553,	// (0x00027554) tabs_3_passive_pane

0x8564,	// (0x00027565) tabs_3_passive_pane_cp_ParamLimits

0x8564,	// (0x00027565) tabs_3_passive_pane_cp

0x84f7,	// (0x000274f8) tabs_4_active_pane_ParamLimits

0x84f7,	// (0x000274f8) tabs_4_active_pane

0x850a,	// (0x0002750b) tabs_4_passive_pane_ParamLimits

0x850a,	// (0x0002750b) tabs_4_passive_pane

0x851b,	// (0x0002751c) tabs_4_passive_pane_cp_ParamLimits

0x851b,	// (0x0002751c) tabs_4_passive_pane_cp

0x852c,	// (0x0002752d) tabs_4_passive_pane_cp2_ParamLimits

0x852c,	// (0x0002752d) tabs_4_passive_pane_cp2

0x84d3,	// (0x000274d4) tabs_2_long_active_pane_ParamLimits

0x84d3,	// (0x000274d4) tabs_2_long_active_pane

0x84e5,	// (0x000274e6) tabs_2_long_passive_pane_ParamLimits

0x84e5,	// (0x000274e6) tabs_2_long_passive_pane

0x8494,	// (0x00027495) tabs_3_long_active_pane_ParamLimits

0x8494,	// (0x00027495) tabs_3_long_active_pane

0x84a7,	// (0x000274a8) tabs_3_long_passive_pane_ParamLimits

0x84a7,	// (0x000274a8) tabs_3_long_passive_pane

0x84c0,	// (0x000274c1) tabs_3_long_passive_pane_cp_ParamLimits

0x84c0,	// (0x000274c1) tabs_3_long_passive_pane_cp

0x843a,	// (0x0002743b) volume_small_pane_g1

0x8443,	// (0x00027444) volume_small_pane_g2

0x844c,	// (0x0002744d) volume_small_pane_g3

0x8455,	// (0x00027456) volume_small_pane_g4

0x845e,	// (0x0002745f) volume_small_pane_g5

0x8467,	// (0x00027468) volume_small_pane_g6

0x8470,	// (0x00027471) volume_small_pane_g7

0x8479,	// (0x0002747a) volume_small_pane_g8

0x8482,	// (0x00027483) volume_small_pane_g9

0x848b,	// (0x0002748c) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0002e8b8) volume_small_pane_g

0x2533,	// (0x00021534) bg_active_tab_pane_cp2_ParamLimits

0x2533,	// (0x00021534) bg_active_tab_pane_cp2

0x649e,	// (0x0002549f) tabs_3_active_pane_g1

0x64a6,	// (0x000254a7) tabs_3_active_pane_t1

0x2533,	// (0x00021534) bg_passive_tab_pane_cp2_ParamLimits

0x2533,	// (0x00021534) bg_passive_tab_pane_cp2

0x649e,	// (0x0002549f) tabs_3_passive_pane_g1

0x64a6,	// (0x000254a7) tabs_3_passive_pane_t1

0x2533,	// (0x00021534) bg_active_tab_pane_cp3_ParamLimits

0x2533,	// (0x00021534) bg_active_tab_pane_cp3

0x64b8,	// (0x000254b9) tabs_4_active_pane_g1

0x64c0,	// (0x000254c1) tabs_4_active_pane_t1

0x2533,	// (0x00021534) bg_passive_tab_pane_cp3_ParamLimits

0x2533,	// (0x00021534) bg_passive_tab_pane_cp3

0x64b8,	// (0x000254b9) tabs_4_1_passive_pane_g1

0x64c0,	// (0x000254c1) tabs_4_1_passive_pane_t1

0x7820,	// (0x00026821) list_highlight_pane_cp2

0xa955,	// (0x00029956) list_set_pane_ParamLimits

0xa955,	// (0x00029956) list_set_pane

0xaa1d,	// (0x00029a1e) main_pane_set_t1_ParamLimits

0xaa1d,	// (0x00029a1e) main_pane_set_t1

0xaa3d,	// (0x00029a3e) main_pane_set_t2_ParamLimits

0xaa3d,	// (0x00029a3e) main_pane_set_t2

0xaa51,	// (0x00029a52) main_pane_set_t3_ParamLimits

0xaa51,	// (0x00029a52) main_pane_set_t3

0xaa65,	// (0x00029a66) main_pane_set_t4_ParamLimits

0xaa65,	// (0x00029a66) main_pane_set_t4

0x0003,

0xf987,	// (0x0002e988) main_pane_set_t_ParamLimits

0xf987,	// (0x0002e988) main_pane_set_t

0xaa79,	// (0x00029a7a) setting_code_pane

0xaa83,	// (0x00029a84) setting_slider_graphic_pane

0xaa83,	// (0x00029a84) setting_slider_pane

0xaa83,	// (0x00029a84) setting_text_pane

0xaa83,	// (0x00029a84) setting_volume_pane

0x64d2,	// (0x000254d3) volume_set_pane

0x2533,	// (0x00021534) bg_set_opt_pane_cp

0x64dc,	// (0x000254dd) setting_slider_pane_t1

0x64f5,	// (0x000254f6) setting_slider_pane_t2

0x650f,	// (0x00025510) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0002e565) setting_slider_pane_t

0x6527,	// (0x00025528) slider_set_pane

0x0a09,	// (0x0001fa0a) bg_set_opt_pane_cp2

0x2541,	// (0x00021542) setting_slider_graphic_pane_g1

0x653d,	// (0x0002553e) setting_slider_graphic_pane_t1

0x654d,	// (0x0002554e) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0002e56c) setting_slider_graphic_pane_t

0x655d,	// (0x0002555e) slider_set_pane_cp

0x0a09,	// (0x0001fa0a) input_focus_pane_cp1

0xa916,	// (0x00029917) list_set_text_pane

0x09ff,	// (0x0001fa00) setting_text_pane_g1

0x0a09,	// (0x0001fa0a) input_focus_pane_cp2

0x09ff,	// (0x0001fa00) setting_code_pane_g1

0x254a,	// (0x0002154b) setting_code_pane_t1

0x4f52,	// (0x00023f53) set_text_pane_t1_ParamLimits

0x4f52,	// (0x00023f53) set_text_pane_t1

0x2cb1,	// (0x00021cb2) set_opt_bg_pane_g1

0x2cb9,	// (0x00021cba) set_opt_bg_pane_g2

0xa8ee,	// (0x000298ef) set_opt_bg_pane_g3

0x2cc9,	// (0x00021cca) set_opt_bg_pane_g4

0x2cd1,	// (0x00021cd2) set_opt_bg_pane_g5

0x2cd9,	// (0x00021cda) set_opt_bg_pane_g6

0xa8f8,	// (0x000298f9) set_opt_bg_pane_g7

0xa902,	// (0x00029903) set_opt_bg_pane_g8

0xa90c,	// (0x0002990d) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0002e975) set_opt_bg_pane_g

0xa8b5,	// (0x000298b6) slider_set_pane_g1

0x861e,	// (0x0002761f) slider_set_pane_g2

0x0006,

0xf965,	// (0x0002e966) slider_set_pane_g

0x85a6,	// (0x000275a7) volume_set_pane_g1

0x85b0,	// (0x000275b1) volume_set_pane_g2

0x85ba,	// (0x000275bb) volume_set_pane_g3

0x85c4,	// (0x000275c5) volume_set_pane_g4

0x85ce,	// (0x000275cf) volume_set_pane_g5

0x85d8,	// (0x000275d9) volume_set_pane_g6

0x85e2,	// (0x000275e3) volume_set_pane_g7

0x85ec,	// (0x000275ed) volume_set_pane_g8

0x85f6,	// (0x000275f7) volume_set_pane_g9

0x8600,	// (0x00027601) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0002e93e) volume_set_pane_g

0x6565,	// (0x00025566) indicator_pane_ParamLimits

0x6565,	// (0x00025566) indicator_pane

0x6571,	// (0x00025572) main_idle_pane_g2_ParamLimits

0x6571,	// (0x00025572) main_idle_pane_g2

0x6599,	// (0x0002559a) main_pane_idle_g1_ParamLimits

0x6599,	// (0x0002559a) main_pane_idle_g1

0x2572,	// (0x00021573) popup_clock_digital_analogue_window_ParamLimits

0x2572,	// (0x00021573) popup_clock_digital_analogue_window

0x65a7,	// (0x000255a8) soft_indicator_pane_ParamLimits

0x65a7,	// (0x000255a8) soft_indicator_pane

0x65b5,	// (0x000255b6) wallpaper_pane_ParamLimits

0x65b5,	// (0x000255b6) wallpaper_pane

0x09ff,	// (0x0001fa00) wallpaper_pane_g1

0x65c1,	// (0x000255c2) indicator_pane_g1_ParamLimits

0x65c1,	// (0x000255c2) indicator_pane_g1

0xad3d,	// (0x00029d3e) navi_navi_icon_text_pane_srt_g1

0x25a0,	// (0x000215a1) soft_indicator_pane_t1

0x25ba,	// (0x000215bb) aid_ps_area_pane

0x65cd,	// (0x000255ce) aid_ps_clock_pane

0x25cb,	// (0x000215cc) aid_ps_indicator_pane

0x25d7,	// (0x000215d8) indicator_ps_pane_ParamLimits

0x25d7,	// (0x000215d8) indicator_ps_pane

0x25e6,	// (0x000215e7) power_save_pane_g1_ParamLimits

0x25e6,	// (0x000215e7) power_save_pane_g1

0x25f2,	// (0x000215f3) power_save_pane_g2_ParamLimits

0x25f2,	// (0x000215f3) power_save_pane_g2

0x6021,	// (0x00025022) aid_navinavi_width_pane

0x25ba,	// (0x000215bb) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0002e571) power_save_pane_g_ParamLimits

0xf570,	// (0x0002e571) power_save_pane_g

0x2600,	// (0x00021601) power_save_pane_t1_ParamLimits

0x2600,	// (0x00021601) power_save_pane_t1

0x65cd,	// (0x000255ce) aid_ps_clock_pane_ParamLimits

0x25cb,	// (0x000215cc) aid_ps_indicator_pane_ParamLimits

0x2612,	// (0x00021613) power_save_pane_t4_ParamLimits

0x2612,	// (0x00021613) power_save_pane_t4

0x0001,

0xf575,	// (0x0002e576) power_save_pane_t_ParamLimits

0xf575,	// (0x0002e576) power_save_pane_t

0x263c,	// (0x0002163d) power_save_t3_ParamLimits

0x263c,	// (0x0002163d) power_save_t3

0x2627,	// (0x00021628) power_save_t2_ParamLimits

0x2627,	// (0x00021628) power_save_t2

0x2651,	// (0x00021652) indicator_ps_pane_g1

0x65db,	// (0x000255dc) ai_gene_pane_ParamLimits

0x65db,	// (0x000255dc) ai_gene_pane

0x65e7,	// (0x000255e8) ai_links_pane_ParamLimits

0x65e7,	// (0x000255e8) ai_links_pane

0x65f3,	// (0x000255f4) indicator_pane_cp1_ParamLimits

0x65f3,	// (0x000255f4) indicator_pane_cp1

0x65ff,	// (0x00025600) main_pane_idle_g1_cp_ParamLimits

0x65ff,	// (0x00025600) main_pane_idle_g1_cp

0x265a,	// (0x0002165b) popup_ai_links_title_window

0x660b,	// (0x0002560c) soft_indicator_pane_cp1_ParamLimits

0x660b,	// (0x0002560c) soft_indicator_pane_cp1

0xa688,	// (0x00029689) ai_links_pane_g1

0xa691,	// (0x00029692) grid_ai_links_pane

0xa66d,	// (0x0002966e) ai_gene_pane_1

0xa676,	// (0x00029677) ai_gene_pane_2

0xa67f,	// (0x00029680) list_highlight_pane_cp4

0xa64d,	// (0x0002964e) cell_ai_link_pane_ParamLimits

0xa64d,	// (0x0002964e) cell_ai_link_pane

0xa645,	// (0x00029646) cell_ai_link_pane_g1

0x2828,	// (0x00021829) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0002e919) cell_ai_link_pane_g

0x0a09,	// (0x0001fa0a) grid_highlight_cp2

0x0a09,	// (0x0001fa0a) bg_popup_sub_pane_cp1

0x2671,	// (0x00021672) popup_ai_links_title_window_t1

0xa591,	// (0x00029592) ai_gene_pane_1_g1_ParamLimits

0xa591,	// (0x00029592) ai_gene_pane_1_g1

0xa59d,	// (0x0002959e) ai_gene_pane_1_g2_ParamLimits

0xa59d,	// (0x0002959e) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0002e90f) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0002e90f) ai_gene_pane_1_g

0xa5aa,	// (0x000295ab) ai_gene_pane_1_t1_ParamLimits

0xa5aa,	// (0x000295ab) ai_gene_pane_1_t1

0xa5de,	// (0x000295df) grid_ai_soft_ind_pane

0xa57c,	// (0x0002957d) ai_gene_pane_2_t1_ParamLimits

0xa57c,	// (0x0002957d) ai_gene_pane_2_t1

0x6617,	// (0x00025618) main_pane_empty_t1_ParamLimits

0x6617,	// (0x00025618) main_pane_empty_t1

0x662f,	// (0x00025630) main_pane_empty_t2_ParamLimits

0x662f,	// (0x00025630) main_pane_empty_t2

0x6644,	// (0x00025645) main_pane_empty_t3_ParamLimits

0x6644,	// (0x00025645) main_pane_empty_t3

0x6656,	// (0x00025657) main_pane_empty_t4_ParamLimits

0x6656,	// (0x00025657) main_pane_empty_t4

0x6668,	// (0x00025669) main_pane_empty_t5_ParamLimits

0x6668,	// (0x00025669) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0002e57b) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0002e57b) main_pane_empty_t

0x2d31,	// (0x00021d32) bg_popup_window_pane_ParamLimits

0x2d31,	// (0x00021d32) bg_popup_window_pane

0xa2de,	// (0x000292df) find_popup_pane_cp2_ParamLimits

0xa2de,	// (0x000292df) find_popup_pane_cp2

0xa2ea,	// (0x000292eb) heading_pane_ParamLimits

0xa2ea,	// (0x000292eb) heading_pane

0x0a09,	// (0x0001fa0a) bg_popup_sub_pane

0xa258,	// (0x00029259) bg_popup_window_pane_g1_ParamLimits

0xa258,	// (0x00029259) bg_popup_window_pane_g1

0xa264,	// (0x00029265) bg_popup_window_pane_g2_ParamLimits

0xa264,	// (0x00029265) bg_popup_window_pane_g2

0xa270,	// (0x00029271) bg_popup_window_pane_g3_ParamLimits

0xa270,	// (0x00029271) bg_popup_window_pane_g3

0xa27c,	// (0x0002927d) bg_popup_window_pane_g4_ParamLimits

0xa27c,	// (0x0002927d) bg_popup_window_pane_g4

0xa288,	// (0x00029289) bg_popup_window_pane_g5_ParamLimits

0xa288,	// (0x00029289) bg_popup_window_pane_g5

0xa294,	// (0x00029295) bg_popup_window_pane_g6_ParamLimits

0xa294,	// (0x00029295) bg_popup_window_pane_g6

0xa2a0,	// (0x000292a1) bg_popup_window_pane_g7_ParamLimits

0xa2a0,	// (0x000292a1) bg_popup_window_pane_g7

0xa2ac,	// (0x000292ad) bg_popup_window_pane_g8_ParamLimits

0xa2ac,	// (0x000292ad) bg_popup_window_pane_g8

0xa2b8,	// (0x000292b9) bg_popup_window_pane_g9_ParamLimits

0xa2b8,	// (0x000292b9) bg_popup_window_pane_g9

0xa2c4,	// (0x000292c5) bg_popup_window_pane_g10_ParamLimits

0xa2c4,	// (0x000292c5) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0002e8d7) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0002e8d7) bg_popup_window_pane_g

0xa1ed,	// (0x000291ee) bg_popup_heading_pane_ParamLimits

0xa1ed,	// (0x000291ee) bg_popup_heading_pane

0x8664,	// (0x00027665) tabs_4_passive_pane_cp_srt_ParamLimits

0x8664,	// (0x00027665) tabs_4_passive_pane_cp_srt

0x8676,	// (0x00027677) tabs_4_passive_pane_srt_ParamLimits

0xa201,	// (0x00029202) heading_pane_g2

0x8676,	// (0x00027677) tabs_4_passive_pane_srt

0x7820,	// (0x00026821) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7820,	// (0x00026821) bg_passive_tab_pane_cp3_srt

0xa209,	// (0x0002920a) heading_pane_t1_ParamLimits

0xa209,	// (0x0002920a) heading_pane_t1

0xa220,	// (0x00029221) heading_pane_t2_ParamLimits

0xa220,	// (0x00029221) heading_pane_t2

0x0001,

0xf8d1,	// (0x0002e8d2) heading_pane_t_ParamLimits

0xf8d1,	// (0x0002e8d2) heading_pane_t

0x9d18,	// (0x00028d19) bg_popup_heading_pane_g1

0x9dc7,	// (0x00028dc8) bg_popup_heading_pane_g2

0x9dd1,	// (0x00028dd2) bg_popup_heading_pane_g3

0x9ddb,	// (0x00028ddc) bg_popup_heading_pane_g4

0x9de5,	// (0x00028de6) bg_popup_heading_pane_g5

0x9def,	// (0x00028df0) bg_popup_heading_pane_g6

0x9df7,	// (0x00028df8) bg_popup_heading_pane_g7

0x9dff,	// (0x00028e00) bg_popup_heading_pane_g8

0x9e09,	// (0x00028e0a) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0002e88e) bg_popup_heading_pane_g

0x9526,	// (0x00028527) bg_popup_sub_pane_g1

0x952e,	// (0x0002852f) bg_popup_sub_pane_g2

0x9536,	// (0x00028537) bg_popup_sub_pane_g3

0x953e,	// (0x0002853f) bg_popup_sub_pane_g4

0x9546,	// (0x00028547) bg_popup_sub_pane_g5

0x954e,	// (0x0002854f) bg_popup_sub_pane_g6

0x9556,	// (0x00028557) bg_popup_sub_pane_g7

0x955e,	// (0x0002855f) bg_popup_sub_pane_g8

0x9566,	// (0x00028567) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0002e868) bg_popup_sub_pane_g

0x0a63,	// (0x0001fa64) bg_popup_window_pane_cp5_ParamLimits

0x0a63,	// (0x0001fa64) bg_popup_window_pane_cp5

0x268e,	// (0x0002168f) popup_note_window_g1_ParamLimits

0x268e,	// (0x0002168f) popup_note_window_g1

0x269a,	// (0x0002169b) popup_note_window_t1_ParamLimits

0x269a,	// (0x0002169b) popup_note_window_t1

0x26b0,	// (0x000216b1) popup_note_window_t2_ParamLimits

0x26b0,	// (0x000216b1) popup_note_window_t2

0x26c6,	// (0x000216c7) popup_note_window_t3_ParamLimits

0x26c6,	// (0x000216c7) popup_note_window_t3

0x26dc,	// (0x000216dd) popup_note_window_t4_ParamLimits

0x26dc,	// (0x000216dd) popup_note_window_t4

0x2704,	// (0x00021705) popup_note_window_t5_ParamLimits

0x2704,	// (0x00021705) popup_note_window_t5

0x0004,

0xf585,	// (0x0002e586) popup_note_window_t_ParamLimits

0xf585,	// (0x0002e586) popup_note_window_t

0x2728,	// (0x00021729) bg_popup_window_pane_cp6_ParamLimits

0x2728,	// (0x00021729) bg_popup_window_pane_cp6

0x9c94,	// (0x00028c95) popup_note_image_window_g1_ParamLimits

0x9c94,	// (0x00028c95) popup_note_image_window_g1

0x9ca0,	// (0x00028ca1) popup_note_image_window_g2_ParamLimits

0x9ca0,	// (0x00028ca1) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0002e85c) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0002e85c) popup_note_image_window_g

0x9cb9,	// (0x00028cba) popup_note_image_window_t1_ParamLimits

0x9cb9,	// (0x00028cba) popup_note_image_window_t1

0x9cd2,	// (0x00028cd3) popup_note_image_window_t2_ParamLimits

0x9cd2,	// (0x00028cd3) popup_note_image_window_t2

0x9ceb,	// (0x00028cec) popup_note_image_window_t3_ParamLimits

0x9ceb,	// (0x00028cec) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0002e861) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0002e861) popup_note_image_window_t

0x9b54,	// (0x00028b55) bg_popup_window_pane_cp7_ParamLimits

0x9b54,	// (0x00028b55) bg_popup_window_pane_cp7

0x9b84,	// (0x00028b85) popup_note_wait_window_g1_ParamLimits

0x9b84,	// (0x00028b85) popup_note_wait_window_g1

0x9b90,	// (0x00028b91) popup_note_wait_window_g2_ParamLimits

0x9b90,	// (0x00028b91) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0002e84a) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0002e84a) popup_note_wait_window_g

0x9ba8,	// (0x00028ba9) popup_note_wait_window_t1_ParamLimits

0x9ba8,	// (0x00028ba9) popup_note_wait_window_t1

0x9bcf,	// (0x00028bd0) popup_note_wait_window_t2_ParamLimits

0x9bcf,	// (0x00028bd0) popup_note_wait_window_t2

0x9bed,	// (0x00028bee) popup_note_wait_window_t3_ParamLimits

0x9bed,	// (0x00028bee) popup_note_wait_window_t3

0x9c00,	// (0x00028c01) popup_note_wait_window_t4_ParamLimits

0x9c00,	// (0x00028c01) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0002e851) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0002e851) popup_note_wait_window_t

0x9c25,	// (0x00028c26) wait_bar_pane_ParamLimits

0x9c25,	// (0x00028c26) wait_bar_pane

0x0a09,	// (0x0001fa0a) wait_anim_pane

0x0a09,	// (0x0001fa0a) wait_border_pane

0x09ff,	// (0x0001fa00) wait_anim_pane_g1

0x09ff,	// (0x0001fa00) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0002e705) wait_anim_pane_g

0x9af8,	// (0x00028af9) wait_border_pane_g1

0x9b03,	// (0x00028b04) wait_border_pane_g2

0x9b0c,	// (0x00028b0d) wait_border_pane_g3

0x0002,

0xf842,	// (0x0002e843) wait_border_pane_g

0x9962,	// (0x00028963) bg_popup_window_pane_cp16_ParamLimits

0x9962,	// (0x00028963) bg_popup_window_pane_cp16

0x9a62,	// (0x00028a63) indicator_popup_pane_cp4_ParamLimits

0x9a62,	// (0x00028a63) indicator_popup_pane_cp4

0x9a76,	// (0x00028a77) popup_query_data_window_t1_ParamLimits

0x9a76,	// (0x00028a77) popup_query_data_window_t1

0x9a88,	// (0x00028a89) popup_query_data_window_t2_ParamLimits

0x9a88,	// (0x00028a89) popup_query_data_window_t2

0x9aa1,	// (0x00028aa2) popup_query_data_window_t3_ParamLimits

0x9aa1,	// (0x00028aa2) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0002e83c) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0002e83c) popup_query_data_window_t

0x9abb,	// (0x00028abc) query_popup_data_pane_ParamLimits

0x9abb,	// (0x00028abc) query_popup_data_pane

0x9acf,	// (0x00028ad0) query_popup_data_pane_cp1_ParamLimits

0x9acf,	// (0x00028ad0) query_popup_data_pane_cp1

0x9962,	// (0x00028963) bg_popup_window_pane_cp10_ParamLimits

0x9962,	// (0x00028963) bg_popup_window_pane_cp10

0x9994,	// (0x00028995) indicator_popup_pane_ParamLimits

0x9994,	// (0x00028995) indicator_popup_pane

0x99b6,	// (0x000289b7) popup_query_code_window_t1_ParamLimits

0x99b6,	// (0x000289b7) popup_query_code_window_t1

0x99d0,	// (0x000289d1) popup_query_code_window_t2_ParamLimits

0x99d0,	// (0x000289d1) popup_query_code_window_t2

0x9a19,	// (0x00028a1a) popup_query_code_window_t3_ParamLimits

0x9a19,	// (0x00028a1a) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0002e835) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0002e835) popup_query_code_window_t

0x9a48,	// (0x00028a49) query_popup_pane_ParamLimits

0x9a48,	// (0x00028a49) query_popup_pane

0x2728,	// (0x00021729) bg_popup_window_pane_cp15_ParamLimits

0x2728,	// (0x00021729) bg_popup_window_pane_cp15

0x2748,	// (0x00021749) indicator_popup_pane_cp1_ParamLimits

0x2748,	// (0x00021749) indicator_popup_pane_cp1

0x275b,	// (0x0002175c) indicator_popup_pane_cp2_ParamLimits

0x275b,	// (0x0002175c) indicator_popup_pane_cp2

0x2776,	// (0x00021777) popup_query_data_code_window_g1_ParamLimits

0x2776,	// (0x00021777) popup_query_data_code_window_g1

0x2789,	// (0x0002178a) popup_query_data_code_window_t1_ParamLimits

0x2789,	// (0x0002178a) popup_query_data_code_window_t1

0x279b,	// (0x0002179c) popup_query_data_code_window_t2_ParamLimits

0x279b,	// (0x0002179c) popup_query_data_code_window_t2

0x27ad,	// (0x000217ae) popup_query_data_code_window_t3_ParamLimits

0x27ad,	// (0x000217ae) popup_query_data_code_window_t3

0x27c3,	// (0x000217c4) popup_query_data_code_window_t4_ParamLimits

0x27c3,	// (0x000217c4) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0002e591) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0002e591) popup_query_data_code_window_t

0x70dd,	// (0x000260de) list_single_midp_graphic_pane_g3

0x27dd,	// (0x000217de) query_popup_data_pane_cp2_ParamLimits

0x27f0,	// (0x000217f1) query_popup_pane_cp2_ParamLimits

0x27f0,	// (0x000217f1) query_popup_pane_cp2

0x0a09,	// (0x0001fa0a) bg_popup_window_pane_cp11

0x995a,	// (0x0002895b) heading_pane_cp5

0x2886,	// (0x00021887) listscroll_popup_info_pane

0x0a09,	// (0x0001fa0a) input_focus_pane_cp3

0x280b,	// (0x0002180c) query_popup_pane_t1

0x2819,	// (0x0002181a) list_popup_info_pane_ParamLimits

0x2819,	// (0x0002181a) list_popup_info_pane

0x2828,	// (0x00021829) listscroll_popup_info_pane_g1

0x2830,	// (0x00021831) scroll_pane_cp7

0x283a,	// (0x0002183b) popup_info_list_pane_t1_ParamLimits

0x283a,	// (0x0002183b) popup_info_list_pane_t1

0x2854,	// (0x00021855) popup_info_list_pane_t2_ParamLimits

0x2854,	// (0x00021855) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0002e59a) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0002e59a) popup_info_list_pane_t

0x0a09,	// (0x0001fa0a) bg_popup_window_pane_cp12

0xad57,	// (0x00029d58) find_popup_pane

0x2533,	// (0x00021534) bg_popup_window_pane_cp3

0x286e,	// (0x0002186f) heading_pane_cp3

0x287a,	// (0x0002187b) listscroll_popup_graphic_pane

0x0a09,	// (0x0001fa0a) bg_popup_window_pane_cp4

0x66ca,	// (0x000256cb) heading_pane_cp4

0x2886,	// (0x00021887) listscroll_popup_colour_pane

0x66d4,	// (0x000256d5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x66d4,	// (0x000256d5) cell_large_graphic_colour_none_popup_pane

0x66e8,	// (0x000256e9) grid_large_graphic_colour_popup_pane_ParamLimits

0x66e8,	// (0x000256e9) grid_large_graphic_colour_popup_pane

0x6714,	// (0x00025715) listscroll_popup_colour_pane_g1_ParamLimits

0x6714,	// (0x00025715) listscroll_popup_colour_pane_g1

0x672b,	// (0x0002572c) listscroll_popup_colour_pane_g2_ParamLimits

0x672b,	// (0x0002572c) listscroll_popup_colour_pane_g2

0x6742,	// (0x00025743) listscroll_popup_colour_pane_g3_ParamLimits

0x6742,	// (0x00025743) listscroll_popup_colour_pane_g3

0x6752,	// (0x00025753) listscroll_popup_colour_pane_g4_ParamLimits

0x6752,	// (0x00025753) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002e59f) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002e59f) listscroll_popup_colour_pane_g

0x288e,	// (0x0002188f) scroll_pane_cp6_ParamLimits

0x288e,	// (0x0002188f) scroll_pane_cp6

0x6766,	// (0x00025767) cell_large_graphic_colour_popup_pane_ParamLimits

0x6766,	// (0x00025767) cell_large_graphic_colour_popup_pane

0x28a0,	// (0x000218a1) cell_large_graphic_colour_none_popup_pane_t1

0x0a09,	// (0x0001fa0a) grid_highlight_pane_cp5

0x28af,	// (0x000218b0) cell_large_graphic_colour_popup_pane_g1

0x28b7,	// (0x000218b8) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0002e5a8) cell_large_graphic_colour_popup_pane_g

0x28bf,	// (0x000218c0) cell_large_graphic_colour_popup_pane_g2_copy1

0x28c8,	// (0x000218c9) grid_highlight_pane_cp4

0x28d0,	// (0x000218d1) bg_popup_window_pane_cp8_ParamLimits

0x28d0,	// (0x000218d1) bg_popup_window_pane_cp8

0x28eb,	// (0x000218ec) popup_snote_single_text_window_g1_ParamLimits

0x28eb,	// (0x000218ec) popup_snote_single_text_window_g1

0x28fd,	// (0x000218fe) popup_snote_single_text_window_t1_ParamLimits

0x28fd,	// (0x000218fe) popup_snote_single_text_window_t1

0x2910,	// (0x00021911) popup_snote_single_text_window_t2_ParamLimits

0x2910,	// (0x00021911) popup_snote_single_text_window_t2

0x2923,	// (0x00021924) popup_snote_single_text_window_t3_ParamLimits

0x2923,	// (0x00021924) popup_snote_single_text_window_t3

0x295c,	// (0x0002195d) popup_snote_single_text_window_t4_ParamLimits

0x295c,	// (0x0002195d) popup_snote_single_text_window_t4

0x2990,	// (0x00021991) popup_snote_single_text_window_t5_ParamLimits

0x2990,	// (0x00021991) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002e5ad) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002e5ad) popup_snote_single_text_window_t

0x29bf,	// (0x000219c0) bg_popup_window_pane_cp9_ParamLimits

0x29bf,	// (0x000219c0) bg_popup_window_pane_cp9

0x28eb,	// (0x000218ec) popup_snote_single_graphic_window_g1_ParamLimits

0x28eb,	// (0x000218ec) popup_snote_single_graphic_window_g1

0x29cd,	// (0x000219ce) popup_snote_single_graphic_window_g2_ParamLimits

0x29cd,	// (0x000219ce) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0002e5b8) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0002e5b8) popup_snote_single_graphic_window_g

0x29d9,	// (0x000219da) popup_snote_single_graphic_window_t1_ParamLimits

0x29d9,	// (0x000219da) popup_snote_single_graphic_window_t1

0x29ec,	// (0x000219ed) popup_snote_single_graphic_window_t2_ParamLimits

0x29ec,	// (0x000219ed) popup_snote_single_graphic_window_t2

0x29ff,	// (0x00021a00) popup_snote_single_graphic_window_t3_ParamLimits

0x29ff,	// (0x00021a00) popup_snote_single_graphic_window_t3

0x2a38,	// (0x00021a39) popup_snote_single_graphic_window_t4_ParamLimits

0x2a38,	// (0x00021a39) popup_snote_single_graphic_window_t4

0x2a6c,	// (0x00021a6d) popup_snote_single_graphic_window_t5_ParamLimits

0x2a6c,	// (0x00021a6d) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002e5bd) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002e5bd) popup_snote_single_graphic_window_t

0xac95,	// (0x00029c96) grid_graphic_popup_pane_ParamLimits

0xac95,	// (0x00029c96) grid_graphic_popup_pane

0xacc3,	// (0x00029cc4) listscroll_popup_graphic_pane_g1_ParamLimits

0xacc3,	// (0x00029cc4) listscroll_popup_graphic_pane_g1

0xacd7,	// (0x00029cd8) listscroll_popup_graphic_pane_g2_ParamLimits

0xacd7,	// (0x00029cd8) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0002e9b2) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0002e9b2) listscroll_popup_graphic_pane_g

0xaceb,	// (0x00029cec) scroll_pane_cp5

0xac3d,	// (0x00029c3e) cell_graphic_popup_pane_ParamLimits

0xac3d,	// (0x00029c3e) cell_graphic_popup_pane

0xac1e,	// (0x00029c1f) cell_graphic_popup_pane_g1

0xac26,	// (0x00029c27) cell_graphic_popup_pane_g2

0x28bf,	// (0x000218c0) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0002e9ab) cell_graphic_popup_pane_g

0xac2f,	// (0x00029c30) cell_graphic_popup_pane_t2

0x28c8,	// (0x000218c9) grid_highlight_pane_cp3

0x2aad,	// (0x00021aae) list_gen_pane_ParamLimits

0x2aad,	// (0x00021aae) list_gen_pane

0x2ad5,	// (0x00021ad6) scroll_pane

0xab76,	// (0x00029b77) bg_list_pane_g1_ParamLimits

0xab76,	// (0x00029b77) bg_list_pane_g1

0xab93,	// (0x00029b94) bg_list_pane_g2_ParamLimits

0xab93,	// (0x00029b94) bg_list_pane_g2

0xaba8,	// (0x00029ba9) bg_list_pane_g3_ParamLimits

0xaba8,	// (0x00029ba9) bg_list_pane_g3

0xabbc,	// (0x00029bbd) bg_list_pane_g4_ParamLimits

0xabbc,	// (0x00029bbd) bg_list_pane_g4

0xabd0,	// (0x00029bd1) bg_list_pane_g5_ParamLimits

0xabd0,	// (0x00029bd1) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0002e9a0) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0002e9a0) bg_list_pane_g

0x58d3,	// (0x000248d4) list_double2_graphic_large_graphic_pane_ParamLimits

0x58d3,	// (0x000248d4) list_double2_graphic_large_graphic_pane

0x58d3,	// (0x000248d4) list_double2_graphic_pane_ParamLimits

0x58d3,	// (0x000248d4) list_double2_graphic_pane

0x58d3,	// (0x000248d4) list_double2_large_graphic_pane_ParamLimits

0x58d3,	// (0x000248d4) list_double2_large_graphic_pane

0x58d3,	// (0x000248d4) list_double2_pane_ParamLimits

0x58d3,	// (0x000248d4) list_double2_pane

0x58d3,	// (0x000248d4) list_double_graphic_heading_pane_ParamLimits

0x58d3,	// (0x000248d4) list_double_graphic_heading_pane

0x58d3,	// (0x000248d4) list_double_graphic_pane_ParamLimits

0x58d3,	// (0x000248d4) list_double_graphic_pane

0x58d3,	// (0x000248d4) list_double_heading_pane_ParamLimits

0x58d3,	// (0x000248d4) list_double_heading_pane

0x58d3,	// (0x000248d4) list_double_large_graphic_pane_ParamLimits

0x58d3,	// (0x000248d4) list_double_large_graphic_pane

0x58d3,	// (0x000248d4) list_double_number_pane_ParamLimits

0x58d3,	// (0x000248d4) list_double_number_pane

0x58d3,	// (0x000248d4) list_double_pane_ParamLimits

0x58d3,	// (0x000248d4) list_double_pane

0x58d3,	// (0x000248d4) list_double_time_pane_ParamLimits

0x58d3,	// (0x000248d4) list_double_time_pane

0x58d3,	// (0x000248d4) list_setting_number_pane_ParamLimits

0x58d3,	// (0x000248d4) list_setting_number_pane

0x58d3,	// (0x000248d4) list_setting_pane_ParamLimits

0x58d3,	// (0x000248d4) list_setting_pane

0xab32,	// (0x00029b33) list_single_2graphic_pane_ParamLimits

0xab32,	// (0x00029b33) list_single_2graphic_pane

0xab32,	// (0x00029b33) list_single_graphic_heading_pane_ParamLimits

0xab32,	// (0x00029b33) list_single_graphic_heading_pane

0xab32,	// (0x00029b33) list_single_graphic_pane_ParamLimits

0xab32,	// (0x00029b33) list_single_graphic_pane

0xab32,	// (0x00029b33) list_single_heading_pane_ParamLimits

0xab32,	// (0x00029b33) list_single_heading_pane

0x5912,	// (0x00024913) list_single_large_graphic_pane_ParamLimits

0x5912,	// (0x00024913) list_single_large_graphic_pane

0xab32,	// (0x00029b33) list_single_number_heading_pane_ParamLimits

0xab32,	// (0x00029b33) list_single_number_heading_pane

0xab32,	// (0x00029b33) list_single_number_pane_ParamLimits

0xab32,	// (0x00029b33) list_single_number_pane

0xab32,	// (0x00029b33) list_single_pane_ParamLimits

0xab32,	// (0x00029b33) list_single_pane

0x0a09,	// (0x0001fa0a) list_highlight_pane_cp1

0x4f79,	// (0x00023f7a) list_single_pane_g1_ParamLimits

0x4f79,	// (0x00023f7a) list_single_pane_g1

0x4f85,	// (0x00023f86) list_single_pane_g2_ParamLimits

0x4f85,	// (0x00023f86) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002e5cf) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002e5cf) list_single_pane_g

0x58bd,	// (0x000248be) list_single_pane_t1_ParamLimits

0x58bd,	// (0x000248be) list_single_pane_t1

0x4f79,	// (0x00023f7a) list_single_number_pane_g1_ParamLimits

0x4f79,	// (0x00023f7a) list_single_number_pane_g1

0x4f85,	// (0x00023f86) list_single_number_pane_g2_ParamLimits

0x4f85,	// (0x00023f86) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002e5cf) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002e5cf) list_single_number_pane_g

0x5867,	// (0x00024868) list_single_number_pane_t1_ParamLimits

0x5867,	// (0x00024868) list_single_number_pane_t1

0x587d,	// (0x0002487e) list_single_number_pane_t2_ParamLimits

0x587d,	// (0x0002487e) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0002e961) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0002e961) list_single_number_pane_t

0x4f6d,	// (0x00023f6e) list_single_graphic_pane_g1_ParamLimits

0x4f6d,	// (0x00023f6e) list_single_graphic_pane_g1

0x4f79,	// (0x00023f7a) list_single_graphic_pane_g2_ParamLimits

0x4f79,	// (0x00023f7a) list_single_graphic_pane_g2

0x4f85,	// (0x00023f86) list_single_graphic_pane_g3_ParamLimits

0x4f85,	// (0x00023f86) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0002e5c8) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0002e5c8) list_single_graphic_pane_g

0x4f91,	// (0x00023f92) list_single_graphic_pane_t1_ParamLimits

0x4f91,	// (0x00023f92) list_single_graphic_pane_t1

0x4f79,	// (0x00023f7a) list_single_heading_pane_g1_ParamLimits

0x4f79,	// (0x00023f7a) list_single_heading_pane_g1

0x4f85,	// (0x00023f86) list_single_heading_pane_g2_ParamLimits

0x4f85,	// (0x00023f86) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002e5cf) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002e5cf) list_single_heading_pane_g

0x4fa7,	// (0x00023fa8) list_single_heading_pane_t1_ParamLimits

0x4fa7,	// (0x00023fa8) list_single_heading_pane_t1

0x4fbd,	// (0x00023fbe) list_single_heading_pane_t2_ParamLimits

0x4fbd,	// (0x00023fbe) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0002e5d4) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0002e5d4) list_single_heading_pane_t

0x4f79,	// (0x00023f7a) list_single_number_heading_pane_g1_ParamLimits

0x4f79,	// (0x00023f7a) list_single_number_heading_pane_g1

0x4f85,	// (0x00023f86) list_single_number_heading_pane_g2_ParamLimits

0x4f85,	// (0x00023f86) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002e5cf) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002e5cf) list_single_number_heading_pane_g

0x4fa7,	// (0x00023fa8) list_single_number_heading_pane_t1_ParamLimits

0x4fa7,	// (0x00023fa8) list_single_number_heading_pane_t1

0x4fcf,	// (0x00023fd0) list_single_number_heading_pane_t2_ParamLimits

0x4fcf,	// (0x00023fd0) list_single_number_heading_pane_t2

0x4fe1,	// (0x00023fe2) list_single_number_heading_pane_t3_ParamLimits

0x4fe1,	// (0x00023fe2) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002e5d9) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002e5d9) list_single_number_heading_pane_t

0x4ff3,	// (0x00023ff4) list_single_graphic_heading_pane_g1_ParamLimits

0x4ff3,	// (0x00023ff4) list_single_graphic_heading_pane_g1

0x4fff,	// (0x00024000) list_single_graphic_heading_pane_g4_ParamLimits

0x4fff,	// (0x00024000) list_single_graphic_heading_pane_g4

0x4f85,	// (0x00023f86) list_single_graphic_heading_pane_g5_ParamLimits

0x4f85,	// (0x00023f86) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0002e5e0) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0002e5e0) list_single_graphic_heading_pane_g

0x4fa7,	// (0x00023fa8) list_single_graphic_heading_pane_t1_ParamLimits

0x4fa7,	// (0x00023fa8) list_single_graphic_heading_pane_t1

0x5010,	// (0x00024011) list_single_graphic_heading_pane_t2_ParamLimits

0x5010,	// (0x00024011) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0002e5e7) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0002e5e7) list_single_graphic_heading_pane_t

0x5022,	// (0x00024023) list_single_large_graphic_pane_g1_ParamLimits

0x5022,	// (0x00024023) list_single_large_graphic_pane_g1

0x4f79,	// (0x00023f7a) list_single_large_graphic_pane_g2_ParamLimits

0x4f79,	// (0x00023f7a) list_single_large_graphic_pane_g2

0x4f85,	// (0x00023f86) list_single_large_graphic_pane_g3_ParamLimits

0x4f85,	// (0x00023f86) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002e5ec) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002e5ec) list_single_large_graphic_pane_g

0x9b03,	// (0x00028b04) wait_border_pane_g2_copy1

0x502e,	// (0x0002402f) list_single_large_graphic_pane_g4_cp2

0x4fa7,	// (0x00023fa8) list_single_large_graphic_pane_t1_ParamLimits

0x4fa7,	// (0x00023fa8) list_single_large_graphic_pane_t1

0x5036,	// (0x00024037) list_double_pane_g1_ParamLimits

0x5036,	// (0x00024037) list_double_pane_g1

0x5042,	// (0x00024043) list_double_pane_g2_ParamLimits

0x5042,	// (0x00024043) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0002e5f3) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0002e5f3) list_double_pane_g

0x504e,	// (0x0002404f) list_double_pane_t1_ParamLimits

0x504e,	// (0x0002404f) list_double_pane_t1

0x5064,	// (0x00024065) list_double_pane_t2_ParamLimits

0x5064,	// (0x00024065) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002e5f8) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002e5f8) list_double_pane_t

0x5076,	// (0x00024077) list_double2_pane_g1_ParamLimits

0x5076,	// (0x00024077) list_double2_pane_g1

0x5042,	// (0x00024043) list_double2_pane_g2_ParamLimits

0x5042,	// (0x00024043) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002e5fd) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002e5fd) list_double2_pane_g

0x504e,	// (0x0002404f) list_double2_pane_t1_ParamLimits

0x504e,	// (0x0002404f) list_double2_pane_t1

0x5087,	// (0x00024088) list_double2_pane_t2_ParamLimits

0x5087,	// (0x00024088) list_double2_pane_t2

0x0001,

0xf601,	// (0x0002e602) list_double2_pane_t_ParamLimits

0xf601,	// (0x0002e602) list_double2_pane_t

0x5036,	// (0x00024037) list_double_number_pane_g1_ParamLimits

0x5036,	// (0x00024037) list_double_number_pane_g1

0x5042,	// (0x00024043) list_double_number_pane_g2_ParamLimits

0x5042,	// (0x00024043) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0002e5f3) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0002e5f3) list_double_number_pane_g

0x5099,	// (0x0002409a) list_double_number_pane_t1_ParamLimits

0x5099,	// (0x0002409a) list_double_number_pane_t1

0x50ab,	// (0x000240ac) list_double_number_pane_t2_ParamLimits

0x50ab,	// (0x000240ac) list_double_number_pane_t2

0x50c1,	// (0x000240c2) list_double_number_pane_t3_ParamLimits

0x50c1,	// (0x000240c2) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0002e607) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0002e607) list_double_number_pane_t

0x50d3,	// (0x000240d4) list_double_graphic_pane_g1_ParamLimits

0x50d3,	// (0x000240d4) list_double_graphic_pane_g1

0x50df,	// (0x000240e0) list_double_graphic_pane_g2_ParamLimits

0x50df,	// (0x000240e0) list_double_graphic_pane_g2

0x50ee,	// (0x000240ef) list_double_graphic_pane_g3_ParamLimits

0x50ee,	// (0x000240ef) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0002e60e) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0002e60e) list_double_graphic_pane_g

0x5106,	// (0x00024107) list_double_graphic_pane_t1_ParamLimits

0x5106,	// (0x00024107) list_double_graphic_pane_t1

0x511c,	// (0x0002411d) list_double_graphic_pane_t2_ParamLimits

0x511c,	// (0x0002411d) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0002e617) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0002e617) list_double_graphic_pane_t

0x50d3,	// (0x000240d4) list_double2_graphic_pane_g1_ParamLimits

0x50d3,	// (0x000240d4) list_double2_graphic_pane_g1

0x512e,	// (0x0002412f) list_double2_graphic_pane_g2_ParamLimits

0x512e,	// (0x0002412f) list_double2_graphic_pane_g2

0x513a,	// (0x0002413b) list_double2_graphic_pane_g3_ParamLimits

0x513a,	// (0x0002413b) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002e61c) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002e61c) list_double2_graphic_pane_g

0x50ab,	// (0x000240ac) list_double2_graphic_pane_t1_ParamLimits

0x50ab,	// (0x000240ac) list_double2_graphic_pane_t1

0x5146,	// (0x00024147) list_double2_graphic_pane_t2_ParamLimits

0x5146,	// (0x00024147) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0002e623) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0002e623) list_double2_graphic_pane_t

0x5158,	// (0x00024159) list_double_large_graphic_pane_g1_ParamLimits

0x5158,	// (0x00024159) list_double_large_graphic_pane_g1

0x5076,	// (0x00024077) list_double_large_graphic_pane_g2_ParamLimits

0x5076,	// (0x00024077) list_double_large_graphic_pane_g2

0x5042,	// (0x00024043) list_double_large_graphic_pane_g3_ParamLimits

0x5042,	// (0x00024043) list_double_large_graphic_pane_g3

0x5183,	// (0x00024184) list_double_large_graphic_pane_g4_ParamLimits

0x5183,	// (0x00024184) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002e628) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002e628) list_double_large_graphic_pane_g

0x51ab,	// (0x000241ac) list_double_large_graphic_pane_t1_ParamLimits

0x51ab,	// (0x000241ac) list_double_large_graphic_pane_t1

0x51c4,	// (0x000241c5) list_double_large_graphic_pane_t2_ParamLimits

0x51c4,	// (0x000241c5) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0002e633) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0002e633) list_double_large_graphic_pane_t

0x51d6,	// (0x000241d7) list_double2_large_graphic_pane_g1_ParamLimits

0x51d6,	// (0x000241d7) list_double2_large_graphic_pane_g1

0x5076,	// (0x00024077) list_double2_large_graphic_pane_g2_ParamLimits

0x5076,	// (0x00024077) list_double2_large_graphic_pane_g2

0x5042,	// (0x00024043) list_double2_large_graphic_pane_g3_ParamLimits

0x5042,	// (0x00024043) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0002e638) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0002e638) list_double2_large_graphic_pane_g

0x51e2,	// (0x000241e3) list_double2_large_graphic_pane_t1_ParamLimits

0x51e2,	// (0x000241e3) list_double2_large_graphic_pane_t1

0x51f8,	// (0x000241f9) list_double2_large_graphic_pane_t2_ParamLimits

0x51f8,	// (0x000241f9) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002e63f) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002e63f) list_double2_large_graphic_pane_t

0x520a,	// (0x0002420b) list_double_heading_pane_g1_ParamLimits

0x520a,	// (0x0002420b) list_double_heading_pane_g1

0x521b,	// (0x0002421c) list_double_heading_pane_g2_ParamLimits

0x521b,	// (0x0002421c) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0002e644) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0002e644) list_double_heading_pane_g

0x5227,	// (0x00024228) list_double_heading_pane_t1_ParamLimits

0x5227,	// (0x00024228) list_double_heading_pane_t1

0x523d,	// (0x0002423e) list_double_heading_pane_t2_ParamLimits

0x523d,	// (0x0002423e) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0002e649) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0002e649) list_double_heading_pane_t

0x524f,	// (0x00024250) list_double_graphic_heading_pane_g1_ParamLimits

0x524f,	// (0x00024250) list_double_graphic_heading_pane_g1

0x520a,	// (0x0002420b) list_double_graphic_heading_pane_g2_ParamLimits

0x520a,	// (0x0002420b) list_double_graphic_heading_pane_g2

0x521b,	// (0x0002421c) list_double_graphic_heading_pane_g3_ParamLimits

0x521b,	// (0x0002421c) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002e64e) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002e64e) list_double_graphic_heading_pane_g

0x525b,	// (0x0002425c) list_double_graphic_heading_pane_t1_ParamLimits

0x525b,	// (0x0002425c) list_double_graphic_heading_pane_t1

0x5271,	// (0x00024272) list_double_graphic_heading_pane_t2_ParamLimits

0x5271,	// (0x00024272) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0002e655) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0002e655) list_double_graphic_heading_pane_t

0x5076,	// (0x00024077) list_double_time_pane_g1_ParamLimits

0x5076,	// (0x00024077) list_double_time_pane_g1

0x5042,	// (0x00024043) list_double_time_pane_g2_ParamLimits

0x5042,	// (0x00024043) list_double_time_pane_g2

0x0001,

0xf5fc,	// (0x0002e5fd) list_double_time_pane_g_ParamLimits

0xf5fc,	// (0x0002e5fd) list_double_time_pane_g

0x51e2,	// (0x000241e3) list_double_time_pane_t1_ParamLimits

0x51e2,	// (0x000241e3) list_double_time_pane_t1

0x5283,	// (0x00024284) list_double_time_pane_t2_ParamLimits

0x5283,	// (0x00024284) list_double_time_pane_t2

0x5295,	// (0x00024296) list_double_time_pane_t3_ParamLimits

0x5295,	// (0x00024296) list_double_time_pane_t3

0x52a7,	// (0x000242a8) list_double_time_pane_t4_ParamLimits

0x52a7,	// (0x000242a8) list_double_time_pane_t4

0x0003,

0xf659,	// (0x0002e65a) list_double_time_pane_t_ParamLimits

0xf659,	// (0x0002e65a) list_double_time_pane_t

0x52b9,	// (0x000242ba) list_setting_pane_g1_ParamLimits

0x52b9,	// (0x000242ba) list_setting_pane_g1

0x52c5,	// (0x000242c6) list_setting_pane_g2_ParamLimits

0x52c5,	// (0x000242c6) list_setting_pane_g2

0x0001,

0xf662,	// (0x0002e663) list_setting_pane_g_ParamLimits

0xf662,	// (0x0002e663) list_setting_pane_g

0x52d1,	// (0x000242d2) list_setting_pane_t1_ParamLimits

0x52d1,	// (0x000242d2) list_setting_pane_t1

0x52eb,	// (0x000242ec) list_setting_pane_t2_ParamLimits

0x52eb,	// (0x000242ec) list_setting_pane_t2

0x0002,

0xf667,	// (0x0002e668) list_setting_pane_t_ParamLimits

0xf667,	// (0x0002e668) list_setting_pane_t

0x532a,	// (0x0002432b) set_value_pane_cp_ParamLimits

0x532a,	// (0x0002432b) set_value_pane_cp

0x5338,	// (0x00024339) list_setting_number_pane_g1_ParamLimits

0x5338,	// (0x00024339) list_setting_number_pane_g1

0x5344,	// (0x00024345) list_setting_number_pane_g2_ParamLimits

0x5344,	// (0x00024345) list_setting_number_pane_g2

0x0001,

0xf66e,	// (0x0002e66f) list_setting_number_pane_g_ParamLimits

0xf66e,	// (0x0002e66f) list_setting_number_pane_g

0x5350,	// (0x00024351) list_setting_number_pane_t1_ParamLimits

0x5350,	// (0x00024351) list_setting_number_pane_t1

0x5369,	// (0x0002436a) list_setting_number_pane_t2_ParamLimits

0x5369,	// (0x0002436a) list_setting_number_pane_t2

0x5383,	// (0x00024384) list_setting_number_pane_t3_ParamLimits

0x5383,	// (0x00024384) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0002e674) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0002e674) list_setting_number_pane_t

0x532a,	// (0x0002432b) set_value_pane_ParamLimits

0x532a,	// (0x0002432b) set_value_pane

0x2b2a,	// (0x00021b2b) bg_set_opt_pane_ParamLimits

0x2b2a,	// (0x00021b2b) bg_set_opt_pane

0x53c6,	// (0x000243c7) set_value_pane_t1

0x2b59,	// (0x00021b5a) slider_set_pane_cp3

0x2b62,	// (0x00021b63) volume_small_pane_cp

0x2b6b,	// (0x00021b6c) list_form_gen_pane

0x2b74,	// (0x00021b75) scroll_pane_cp8

0x53dc,	// (0x000243dd) form_field_data_pane_ParamLimits

0x53dc,	// (0x000243dd) form_field_data_pane

0x5402,	// (0x00024403) form_field_data_wide_pane_ParamLimits

0x5402,	// (0x00024403) form_field_data_wide_pane

0x5427,	// (0x00024428) form_field_popup_pane_ParamLimits

0x5427,	// (0x00024428) form_field_popup_pane

0x5449,	// (0x0002444a) form_field_popup_wide_pane_ParamLimits

0x5449,	// (0x0002444a) form_field_popup_wide_pane

0x546a,	// (0x0002446b) form_field_slider_pane_ParamLimits

0x546a,	// (0x0002446b) form_field_slider_pane

0x547d,	// (0x0002447e) form_field_slider_wide_pane_ParamLimits

0x547d,	// (0x0002447e) form_field_slider_wide_pane

0x2bdc,	// (0x00021bdd) data_form_pane

0x549a,	// (0x0002449b) form_field_data_pane_t1

0x2be8,	// (0x00021be9) input_focus_pane

0x54b4,	// (0x000244b5) data_form_wide_pane

0x54d1,	// (0x000244d2) form_field_data_wide_pane_t1

0x28dd,	// (0x000218de) input_focus_pane_cp6

0x54f3,	// (0x000244f4) form_field_popup_pane_t1

0x2be8,	// (0x00021be9) input_focus_pane_cp7

0x2c55,	// (0x00021c56) list_form_pane

0x5515,	// (0x00024516) form_field_popup_wide_pane_t1

0x2be8,	// (0x00021be9) input_focus_pane_cp8

0x2c7e,	// (0x00021c7f) list_form_wide_pane

0x5532,	// (0x00024533) form_field_slider_pane_t1_ParamLimits

0x5532,	// (0x00024533) form_field_slider_pane_t1

0x554a,	// (0x0002454b) form_field_slider_pane_t2_ParamLimits

0x554a,	// (0x0002454b) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0002e684) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0002e684) form_field_slider_pane_t

0x0a63,	// (0x0001fa64) input_focus_pane_cp9_ParamLimits

0x0a63,	// (0x0001fa64) input_focus_pane_cp9

0x555f,	// (0x00024560) slider_cont_pane_ParamLimits

0x555f,	// (0x00024560) slider_cont_pane

0x2c8d,	// (0x00021c8e) form_field_slider_wide_pane_t1_ParamLimits

0x2c8d,	// (0x00021c8e) form_field_slider_wide_pane_t1

0x5573,	// (0x00024574) form_field_slider_wide_pane_t2_ParamLimits

0x5573,	// (0x00024574) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0002e689) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0002e689) form_field_slider_wide_pane_t

0x0a63,	// (0x0001fa64) input_focus_pane_cp10_ParamLimits

0x0a63,	// (0x0001fa64) input_focus_pane_cp10

0x5585,	// (0x00024586) slider_cont_pane_cp1_ParamLimits

0x5585,	// (0x00024586) slider_cont_pane_cp1

0x5599,	// (0x0002459a) slider_form_pane_cp

0x2cb1,	// (0x00021cb2) input_focus_pane_g1

0x2cb9,	// (0x00021cba) input_focus_pane_g2

0x2cc1,	// (0x00021cc2) input_focus_pane_g3

0x2cc9,	// (0x00021cca) input_focus_pane_g4

0x2cd1,	// (0x00021cd2) input_focus_pane_g5

0x2cd9,	// (0x00021cda) input_focus_pane_g6

0x2ce1,	// (0x00021ce2) input_focus_pane_g7

0x2ce9,	// (0x00021cea) input_focus_pane_g8

0x2cf1,	// (0x00021cf2) input_focus_pane_g9

0x09ff,	// (0x0001fa00) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0002e68e) input_focus_pane_g

0x9b0c,	// (0x00028b0d) wait_border_pane_g3_copy1

0x55a1,	// (0x000245a2) data_form_pane_t1

0x09ff,	// (0x0001fa00) wait_anim_pane_g1_copy1

0x588f,	// (0x00024890) data_form_wide_pane_t1

0x55be,	// (0x000245bf) list_form_graphic_pane_cp_ParamLimits

0x55be,	// (0x000245bf) list_form_graphic_pane_cp

0xaaab,	// (0x00029aac) slider_form_pane_g1

0xaab4,	// (0x00029ab5) slider_form_pane_g2

0x0006,

0xf990,	// (0x0002e991) slider_form_pane_g

0x55d3,	// (0x000245d4) list_form_graphic_pane_ParamLimits

0x55d3,	// (0x000245d4) list_form_graphic_pane

0x55e5,	// (0x000245e6) list_form_graphic_pane_g1

0x55ed,	// (0x000245ee) list_form_graphic_pane_t1_ParamLimits

0x55ed,	// (0x000245ee) list_form_graphic_pane_t1

0x2533,	// (0x00021534) list_highlight_pane_cp5_ParamLimits

0x2533,	// (0x00021534) list_highlight_pane_cp5

0x5602,	// (0x00024603) find_pane_g1

0x2d28,	// (0x00021d29) input_find_pane

0x560b,	// (0x0002460c) input_find_pane_g1_ParamLimits

0x560b,	// (0x0002460c) input_find_pane_g1

0x5617,	// (0x00024618) input_find_pane_t1_ParamLimits

0x5617,	// (0x00024618) input_find_pane_t1

0x562c,	// (0x0002462d) input_find_pane_t2_ParamLimits

0x562c,	// (0x0002462d) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0002e6a3) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0002e6a3) input_find_pane_t

0x2d31,	// (0x00021d32) input_focus_pane_cp5_ParamLimits

0x2d31,	// (0x00021d32) input_focus_pane_cp5

0x2d3f,	// (0x00021d40) bg_popup_window_pane_cp2_ParamLimits

0x2d3f,	// (0x00021d40) bg_popup_window_pane_cp2

0x2d4c,	// (0x00021d4d) listscroll_menu_pane_ParamLimits

0x2d4c,	// (0x00021d4d) listscroll_menu_pane

0x67a1,	// (0x000257a2) popup_submenu_window_ParamLimits

0x67a1,	// (0x000257a2) popup_submenu_window

0x2d58,	// (0x00021d59) find_popup_pane_g1

0x2d60,	// (0x00021d61) input_popup_find_pane_cp

0x2d31,	// (0x00021d32) input_focus_pane_cp4_ParamLimits

0x2d31,	// (0x00021d32) input_focus_pane_cp4

0x2d6a,	// (0x00021d6b) input_popup_find_pane_t1_ParamLimits

0x2d6a,	// (0x00021d6b) input_popup_find_pane_t1

0x0a09,	// (0x0001fa0a) bg_popup_sub_pane_cp

0x2d98,	// (0x00021d99) listscroll_popup_sub_pane

0x2da0,	// (0x00021da1) list_submenu_pane_ParamLimits

0x2da0,	// (0x00021da1) list_submenu_pane

0x2db1,	// (0x00021db2) scroll_pane_cp4

0x2db9,	// (0x00021dba) list_single_popup_submenu_pane_ParamLimits

0x2db9,	// (0x00021dba) list_single_popup_submenu_pane

0x2dce,	// (0x00021dcf) list_single_popup_submenu_pane_g1

0x2dd6,	// (0x00021dd7) list_single_popup_submenu_pane_t1_ParamLimits

0x2dd6,	// (0x00021dd7) list_single_popup_submenu_pane_t1

0x2533,	// (0x00021534) bg_active_tab_pane_cp1_ParamLimits

0x2533,	// (0x00021534) bg_active_tab_pane_cp1

0x67df,	// (0x000257e0) tabs_2_active_pane_g1

0x67e7,	// (0x000257e8) tabs_2_active_pane_t1

0x2533,	// (0x00021534) bg_passive_tab_pane_cp1_ParamLimits

0x2533,	// (0x00021534) bg_passive_tab_pane_cp1

0x67df,	// (0x000257e0) tabs_2_passive_pane_g1

0x67e7,	// (0x000257e8) tabs_2_passive_pane_t1

0x31ca,	// (0x000221cb) bg_active_tab_pane_cp4

0x67f9,	// (0x000257fa) tabs_2_long_active_pane_t1

0x680c,	// (0x0002580d) bg_passive_tab_pane_cp4

0x835a,	// (0x0002735b) list_single_midp_graphic_pane_g4_ParamLimits

0x31ca,	// (0x000221cb) bg_active_tab_pane_cp5

0x6818,	// (0x00025819) tabs_3_long_active_pane_t1

0x680c,	// (0x0002580d) bg_passive_tab_pane_cp5

0x835a,	// (0x0002735b) list_single_midp_graphic_pane_g4

0x2533,	// (0x00021534) bg_popup_window_pane_cp13_ParamLimits

0x2533,	// (0x00021534) bg_popup_window_pane_cp13

0x2df4,	// (0x00021df5) listscroll_popup_fast_pane_ParamLimits

0x2df4,	// (0x00021df5) listscroll_popup_fast_pane

0x2e03,	// (0x00021e04) grid_popup_fast_pane_ParamLimits

0x2e03,	// (0x00021e04) grid_popup_fast_pane

0x2e15,	// (0x00021e16) scroll_pane_cp9_ParamLimits

0x2e15,	// (0x00021e16) scroll_pane_cp9

0xc426,	// (0x0002b427) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc426,	// (0x0002b427) list_single_graphic_hl_pane_t1_cp2

0x2e39,	// (0x00021e3a) input_focus_pane_cp20_ParamLimits

0x2e39,	// (0x00021e3a) input_focus_pane_cp20

0x2e47,	// (0x00021e48) query_popup_data_pane_t1_ParamLimits

0x2e47,	// (0x00021e48) query_popup_data_pane_t1

0x2e5a,	// (0x00021e5b) query_popup_data_pane_t2_ParamLimits

0x2e5a,	// (0x00021e5b) query_popup_data_pane_t2

0x2ea0,	// (0x00021ea1) query_popup_data_pane_t3_ParamLimits

0x2ea0,	// (0x00021ea1) query_popup_data_pane_t3

0x2ee1,	// (0x00021ee2) query_popup_data_pane_t4_ParamLimits

0x2ee1,	// (0x00021ee2) query_popup_data_pane_t4

0x2f1d,	// (0x00021f1e) query_popup_data_pane_t5_ParamLimits

0x2f1d,	// (0x00021f1e) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0002e6a8) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0002e6a8) query_popup_data_pane_t

0x2cb1,	// (0x00021cb2) bg_set_opt_pane_g1

0x2cb9,	// (0x00021cba) bg_set_opt_pane_g2

0x2cc1,	// (0x00021cc2) bg_set_opt_pane_g3

0x2cc9,	// (0x00021cca) bg_set_opt_pane_g4

0x2cd1,	// (0x00021cd2) bg_set_opt_pane_g5

0x2cd9,	// (0x00021cda) bg_set_opt_pane_g6

0x2ce1,	// (0x00021ce2) bg_set_opt_pane_g7

0x2ce9,	// (0x00021cea) bg_set_opt_pane_g8

0x2cf1,	// (0x00021cf2) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0002e6b3) bg_set_opt_pane_g

0x6e04,	// (0x00025e05) control_top_pane_stacon_ParamLimits

0x6e04,	// (0x00025e05) control_top_pane_stacon

0x6e57,	// (0x00025e58) signal_pane_stacon_ParamLimits

0x6e57,	// (0x00025e58) signal_pane_stacon

0x6e7c,	// (0x00025e7d) stacon_top_pane_g1_ParamLimits

0x6e7c,	// (0x00025e7d) stacon_top_pane_g1

0x6e9e,	// (0x00025e9f) title_pane_stacon_ParamLimits

0x6e9e,	// (0x00025e9f) title_pane_stacon

0x6ec8,	// (0x00025ec9) uni_indicator_pane_stacon_ParamLimits

0x6ec8,	// (0x00025ec9) uni_indicator_pane_stacon

0x6ee0,	// (0x00025ee1) battery_pane_stacon_ParamLimits

0x6ee0,	// (0x00025ee1) battery_pane_stacon

0x6f24,	// (0x00025f25) control_bottom_pane_stacon_ParamLimits

0x6f24,	// (0x00025f25) control_bottom_pane_stacon

0x6f47,	// (0x00025f48) navi_pane_stacon_ParamLimits

0x6f47,	// (0x00025f48) navi_pane_stacon

0x6f6a,	// (0x00025f6b) stacon_bottom_pane_g1_ParamLimits

0x6f6a,	// (0x00025f6b) stacon_bottom_pane_g1

0x682a,	// (0x0002582b) aid_levels_signal_lsc_ParamLimits

0x682a,	// (0x0002582b) aid_levels_signal_lsc

0x6841,	// (0x00025842) signal_pane_stacon_g1_ParamLimits

0x6841,	// (0x00025842) signal_pane_stacon_g1

0x6855,	// (0x00025856) signal_pane_stacon_g2_ParamLimits

0x6855,	// (0x00025856) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0002e6c6) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0002e6c6) signal_pane_stacon_g

0x688a,	// (0x0002588b) title_pane_stacon_t1_ParamLimits

0x688a,	// (0x0002588b) title_pane_stacon_t1

0x2f75,	// (0x00021f76) uni_indicator_pane_stacon_g1

0x2f7f,	// (0x00021f80) uni_indicator_pane_stacon_g2

0x2f61,	// (0x00021f62) uni_indicator_pane_stacon_g3

0x2f6b,	// (0x00021f6c) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0002e6d2) uni_indicator_pane_stacon_g

0x68af,	// (0x000258b0) control_top_pane_stacon_g1

0x68b7,	// (0x000258b8) control_top_pane_stacon_t1_ParamLimits

0x68b7,	// (0x000258b8) control_top_pane_stacon_t1

0x68ee,	// (0x000258ef) aid_levels_battery_lsc_ParamLimits

0x68ee,	// (0x000258ef) aid_levels_battery_lsc

0x6906,	// (0x00025907) battery_pane_stacon_g1_ParamLimits

0x6906,	// (0x00025907) battery_pane_stacon_g1

0x6919,	// (0x0002591a) battery_pane_stacon_g2_ParamLimits

0x6919,	// (0x0002591a) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0002e6db) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0002e6db) battery_pane_stacon_g

0x6957,	// (0x00025958) navi_icon_pane_stacon

0x696b,	// (0x0002596c) navi_navi_pane_stacon

0x6957,	// (0x00025958) navi_text_pane_stacon

0x68af,	// (0x000258b0) control_bottom_pane_stacon_g1

0x6981,	// (0x00025982) control_bottom_pane_stacon_t1_ParamLimits

0x6981,	// (0x00025982) control_bottom_pane_stacon_t1

0x69b8,	// (0x000259b9) grid_app_pane_ParamLimits

0x69b8,	// (0x000259b9) grid_app_pane

0x69dc,	// (0x000259dd) scroll_pane_cp15_ParamLimits

0x69dc,	// (0x000259dd) scroll_pane_cp15

0x69f1,	// (0x000259f2) cell_app_pane_ParamLimits

0x69f1,	// (0x000259f2) cell_app_pane

0x6a1d,	// (0x00025a1e) cell_app_pane_g1_ParamLimits

0x6a1d,	// (0x00025a1e) cell_app_pane_g1

0x2fa3,	// (0x00021fa4) cell_app_pane_g2_ParamLimits

0x2fa3,	// (0x00021fa4) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0002e6e0) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0002e6e0) cell_app_pane_g

0x2faf,	// (0x00021fb0) cell_app_pane_t1_ParamLimits

0x2faf,	// (0x00021fb0) cell_app_pane_t1

0x2fc6,	// (0x00021fc7) grid_highlight_pane_ParamLimits

0x2fc6,	// (0x00021fc7) grid_highlight_pane

0x2cb1,	// (0x00021cb2) cell_highlight_pane_g1

0x2cb9,	// (0x00021cba) cell_highlight_pane_g2

0x2cc1,	// (0x00021cc2) cell_highlight_pane_g3

0x2cc9,	// (0x00021cca) cell_highlight_pane_g4

0x2cd1,	// (0x00021cd2) cell_highlight_pane_g5

0x2cd9,	// (0x00021cda) cell_highlight_pane_g6

0x2ce1,	// (0x00021ce2) cell_highlight_pane_g7

0x2ce9,	// (0x00021cea) cell_highlight_pane_g8

0x2cf1,	// (0x00021cf2) cell_highlight_pane_g9

0x09ff,	// (0x0001fa00) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0002e68e) cell_highlight_pane_g

0x2fd7,	// (0x00021fd8) bg_scroll_pane

0x6a50,	// (0x00025a51) scroll_handle_pane

0x301e,	// (0x0002201f) scroll_bg_pane_g1

0x3033,	// (0x00022034) scroll_bg_pane_g2

0x304b,	// (0x0002204c) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0002e6e5) scroll_bg_pane_g

0x3060,	// (0x00022061) scroll_handle_focus_pane_ParamLimits

0x3060,	// (0x00022061) scroll_handle_focus_pane

0x301e,	// (0x0002201f) scroll_handle_pane_g1

0x306d,	// (0x0002206e) scroll_handle_pane_g2

0x304b,	// (0x0002204c) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0002e6ec) scroll_handle_pane_g

0x2d31,	// (0x00021d32) bg_popup_sub_pane_cp21_ParamLimits

0x2d31,	// (0x00021d32) bg_popup_sub_pane_cp21

0x3081,	// (0x00022082) popup_fep_japan_predictive_window_t1_ParamLimits

0x3081,	// (0x00022082) popup_fep_japan_predictive_window_t1

0x3098,	// (0x00022099) popup_fep_japan_predictive_window_t2_ParamLimits

0x3098,	// (0x00022099) popup_fep_japan_predictive_window_t2

0x30cb,	// (0x000220cc) popup_fep_japan_predictive_window_t3_ParamLimits

0x30cb,	// (0x000220cc) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0002e6f3) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0002e6f3) popup_fep_japan_predictive_window_t

0x0a09,	// (0x0001fa0a) bg_popup_sub_pane_cp23

0x3102,	// (0x00022103) listscroll_japin_cand_pane

0x310a,	// (0x0002210b) popup_fep_japan_candidate_window_t1

0x3118,	// (0x00022119) candidate_pane_ParamLimits

0x3118,	// (0x00022119) candidate_pane

0x312a,	// (0x0002212b) scroll_pane_cp30

0x3134,	// (0x00022135) list_single_popup_jap_candidate_pane_ParamLimits

0x3134,	// (0x00022135) list_single_popup_jap_candidate_pane

0x0a09,	// (0x0001fa0a) list_highlight_pane_cp30

0x3148,	// (0x00022149) list_single_popup_jap_candidate_pane_t1

0x6a79,	// (0x00025a7a) level_1_signal

0x6a86,	// (0x00025a87) level_2_signal

0x6a93,	// (0x00025a94) level_3_signal

0x6aa0,	// (0x00025aa1) level_4_signal

0x6aad,	// (0x00025aae) level_5_signal

0x6aba,	// (0x00025abb) level_6_signal

0x6ac7,	// (0x00025ac8) level_7_signal

0x6a79,	// (0x00025a7a) level_1_battery

0x6a86,	// (0x00025a87) level_2_battery

0x6a93,	// (0x00025a94) level_3_battery

0x6aa0,	// (0x00025aa1) level_4_battery

0x6aad,	// (0x00025aae) level_5_battery

0x6aba,	// (0x00025abb) level_6_battery

0x6ac7,	// (0x00025ac8) level_7_battery

0x316f,	// (0x00022170) list_menu_pane_ParamLimits

0x316f,	// (0x00022170) list_menu_pane

0x3185,	// (0x00022186) scroll_pane_cp25_ParamLimits

0x3185,	// (0x00022186) scroll_pane_cp25

0x319e,	// (0x0002219f) list_double2_graphic_pane_cp2_ParamLimits

0x319e,	// (0x0002219f) list_double2_graphic_pane_cp2

0x319e,	// (0x0002219f) list_double2_large_graphic_pane_cp2_ParamLimits

0x319e,	// (0x0002219f) list_double2_large_graphic_pane_cp2

0x319e,	// (0x0002219f) list_double2_pane_cp2_ParamLimits

0x319e,	// (0x0002219f) list_double2_pane_cp2

0x319e,	// (0x0002219f) list_double_graphic_pane_cp2_ParamLimits

0x319e,	// (0x0002219f) list_double_graphic_pane_cp2

0x319e,	// (0x0002219f) list_double_large_graphic_pane_cp2_ParamLimits

0x319e,	// (0x0002219f) list_double_large_graphic_pane_cp2

0x319e,	// (0x0002219f) list_double_number_pane_cp2_ParamLimits

0x319e,	// (0x0002219f) list_double_number_pane_cp2

0x319e,	// (0x0002219f) list_double_pane_cp2_ParamLimits

0x319e,	// (0x0002219f) list_double_pane_cp2

0x6b09,	// (0x00025b0a) list_single_2graphic_pane_cp2_ParamLimits

0x6b09,	// (0x00025b0a) list_single_2graphic_pane_cp2

0x6b09,	// (0x00025b0a) list_single_graphic_heading_pane_cp2_ParamLimits

0x6b09,	// (0x00025b0a) list_single_graphic_heading_pane_cp2

0x6b09,	// (0x00025b0a) list_single_graphic_pane_cp2_ParamLimits

0x6b09,	// (0x00025b0a) list_single_graphic_pane_cp2

0x6b09,	// (0x00025b0a) list_single_heading_pane_cp2_ParamLimits

0x6b09,	// (0x00025b0a) list_single_heading_pane_cp2

0x31ae,	// (0x000221af) list_single_large_graphic_pane_cp2_ParamLimits

0x31ae,	// (0x000221af) list_single_large_graphic_pane_cp2

0x6b09,	// (0x00025b0a) list_single_number_heading_pane_cp2_ParamLimits

0x6b09,	// (0x00025b0a) list_single_number_heading_pane_cp2

0x6b09,	// (0x00025b0a) list_single_number_pane_cp2_ParamLimits

0x6b09,	// (0x00025b0a) list_single_number_pane_cp2

0x6b09,	// (0x00025b0a) list_single_pane_cp2_ParamLimits

0x6b09,	// (0x00025b0a) list_single_pane_cp2

0x6bec,	// (0x00025bed) bg_popup_sub_pane_cp22

0x6c11,	// (0x00025c12) popup_side_volume_key_window_g1

0x6c3b,	// (0x00025c3c) popup_side_volume_key_window_t1

0x6c59,	// (0x00025c5a) volume_small_pane_cp1

0x0a63,	// (0x0001fa64) bg_popup_sub_pane_cp24_ParamLimits

0x0a63,	// (0x0001fa64) bg_popup_sub_pane_cp24

0x6c61,	// (0x00025c62) fep_china_uni_candidate_pane_ParamLimits

0x6c61,	// (0x00025c62) fep_china_uni_candidate_pane

0x6c75,	// (0x00025c76) fep_china_uni_entry_pane

0x6c85,	// (0x00025c86) popup_fep_china_uni_window_g1

0x6ca1,	// (0x00025ca2) fep_china_uni_entry_pane_g1

0x6cab,	// (0x00025cac) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0002e724) fep_china_uni_entry_pane_g

0x6cb5,	// (0x00025cb6) fep_entry_item_pane

0x6cbf,	// (0x00025cc0) fep_candidate_item_pane

0x6cc7,	// (0x00025cc8) fep_china_uni_candidate_pane_g1

0x6cd1,	// (0x00025cd2) fep_china_uni_candidate_pane_g2

0x6cd9,	// (0x00025cda) fep_china_uni_candidate_pane_g3

0x6ce1,	// (0x00025ce2) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0002e729) fep_china_uni_candidate_pane_g

0x09ff,	// (0x0001fa00) fep_entry_item_pane_g1

0x6ceb,	// (0x00025cec) fep_entry_item_pane_t1_ParamLimits

0x6ceb,	// (0x00025cec) fep_entry_item_pane_t1

0x6d01,	// (0x00025d02) fep_candidate_item_pane_t1_ParamLimits

0x6d01,	// (0x00025d02) fep_candidate_item_pane_t1

0x6d16,	// (0x00025d17) fep_candidate_item_pane_t2_ParamLimits

0x6d16,	// (0x00025d17) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0002e732) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0002e732) fep_candidate_item_pane_t

0x2533,	// (0x00021534) list_highlight_pane_cp31_ParamLimits

0x2533,	// (0x00021534) list_highlight_pane_cp31

0x6d28,	// (0x00025d29) level_1_signal_lsc

0x6d31,	// (0x00025d32) level_2_signal_lsc

0x6d3a,	// (0x00025d3b) level_3_signal_lsc

0x6d43,	// (0x00025d44) level_4_signal_lsc

0x6d4c,	// (0x00025d4d) level_5_signal_lsc

0x6d55,	// (0x00025d56) level_6_signal_lsc

0x6d5e,	// (0x00025d5f) level_7_signal_lsc

0x6d5e,	// (0x00025d5f) level_1_battery_lsc

0x6d67,	// (0x00025d68) level_2_battery_lsc

0x6d70,	// (0x00025d71) level_3_battery_lsc

0x6d79,	// (0x00025d7a) level_4_battery_lsc

0x6d82,	// (0x00025d83) level_5_battery_lsc

0x6d8b,	// (0x00025d8c) level_6_battery_lsc

0x6d28,	// (0x00025d29) level_7_battery_lsc

0x6d94,	// (0x00025d95) scroll_handle_focus_pane_g1

0x6d9d,	// (0x00025d9e) scroll_handle_focus_pane_g2

0x6da6,	// (0x00025da7) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0002e737) scroll_handle_focus_pane_g

0x5641,	// (0x00024642) list_single_2graphic_pane_g1_ParamLimits

0x5641,	// (0x00024642) list_single_2graphic_pane_g1

0x4fff,	// (0x00024000) list_single_2graphic_pane_g2_ParamLimits

0x4fff,	// (0x00024000) list_single_2graphic_pane_g2

0x4f85,	// (0x00023f86) list_single_2graphic_pane_g3_ParamLimits

0x4f85,	// (0x00023f86) list_single_2graphic_pane_g3

0x564d,	// (0x0002464e) list_single_2graphic_pane_g4_ParamLimits

0x564d,	// (0x0002464e) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0002e73e) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0002e73e) list_single_2graphic_pane_g

0x5659,	// (0x0002465a) list_single_2graphic_pane_t1_ParamLimits

0x5659,	// (0x0002465a) list_single_2graphic_pane_t1

0x5687,	// (0x00024688) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5687,	// (0x00024688) list_double2_graphic_large_graphic_pane_g1

0x5076,	// (0x00024077) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5076,	// (0x00024077) list_double2_graphic_large_graphic_pane_g2

0x5042,	// (0x00024043) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5042,	// (0x00024043) list_double2_graphic_large_graphic_pane_g3

0x5699,	// (0x0002469a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5699,	// (0x0002469a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0002e747) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0002e747) list_double2_graphic_large_graphic_pane_g

0x56a5,	// (0x000246a6) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x56a5,	// (0x000246a6) list_double2_graphic_large_graphic_pane_t1

0x56bb,	// (0x000246bc) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x56bb,	// (0x000246bc) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0002e750) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0002e750) list_double2_graphic_large_graphic_pane_t

0x702c,	// (0x0002602d) popup_fast_swap_window_ParamLimits

0x702c,	// (0x0002602d) popup_fast_swap_window

0x704a,	// (0x0002604b) popup_side_volume_key_window

0x7068,	// (0x00026069) stacon_top_pane

0x7072,	// (0x00026073) status_pane_ParamLimits

0x7072,	// (0x00026073) status_pane

0x7068,	// (0x00026069) status_small_pane

0x0a09,	// (0x0001fa0a) control_pane

0x0a09,	// (0x0001fa0a) stacon_bottom_pane

0x2b74,	// (0x00021b75) scroll_pane_cp121

0x2b6b,	// (0x00021b6c) set_content_pane

0x6daf,	// (0x00025db0) bg_active_tab_pane_g1_cp1

0x6db8,	// (0x00025db9) bg_active_tab_pane_g2_cp1

0x6dc1,	// (0x00025dc2) bg_active_tab_pane_g3_cp1

0x6daf,	// (0x00025db0) bg_passive_tab_pane_g1_cp1

0x6db8,	// (0x00025db9) bg_passive_tab_pane_g2_cp1

0x6dc1,	// (0x00025dc2) bg_passive_tab_pane_g3_cp1

0x6dca,	// (0x00025dcb) bg_active_tab_pane_g1_cp2

0x6db8,	// (0x00025db9) bg_active_tab_pane_g2_cp2

0x6dd3,	// (0x00025dd4) bg_active_tab_pane_g3_cp2

0x6dca,	// (0x00025dcb) bg_passive_tab_pane_g1_cp2

0x6db8,	// (0x00025db9) bg_passive_tab_pane_g2_cp2

0x6dd3,	// (0x00025dd4) bg_passive_tab_pane_g3_cp2

0x6ddc,	// (0x00025ddd) bg_active_tab_pane_g1_cp3

0x6db8,	// (0x00025db9) bg_active_tab_pane_g2_cp3

0x6de5,	// (0x00025de6) bg_active_tab_pane_g3_cp3

0x6ddc,	// (0x00025ddd) bg_passive_tab_pane_g1_cp3

0x6db8,	// (0x00025db9) bg_passive_tab_pane_g2_cp3

0x6de5,	// (0x00025de6) bg_passive_tab_pane_g3_cp3

0x6dee,	// (0x00025def) bg_active_tab_pane_g1_cp4

0x6db8,	// (0x00025db9) bg_active_tab_pane_g2_cp4

0x6df9,	// (0x00025dfa) bg_active_tab_pane_g3_cp4

0x6dee,	// (0x00025def) bg_passive_tab_pane_g1_cp4

0x6db8,	// (0x00025db9) bg_passive_tab_pane_g2_cp4

0x6df9,	// (0x00025dfa) bg_passive_tab_pane_g3_cp4

0x6f86,	// (0x00025f87) bg_active_tab_pane_g1_cp5

0x6db8,	// (0x00025db9) bg_active_tab_pane_g2_cp5

0x6f8f,	// (0x00025f90) bg_active_tab_pane_g3_cp5

0x6f86,	// (0x00025f87) bg_passive_tab_pane_g1_cp5

0x6db8,	// (0x00025db9) bg_passive_tab_pane_g2_cp5

0x6f8f,	// (0x00025f90) bg_passive_tab_pane_g3_cp5

0x6f98,	// (0x00025f99) list_set_graphic_pane_ParamLimits

0x6f98,	// (0x00025f99) list_set_graphic_pane

0x0a09,	// (0x0001fa0a) bg_set_opt_pane_cp4

0x6fad,	// (0x00025fae) list_set_graphic_pane_g1_ParamLimits

0x6fad,	// (0x00025fae) list_set_graphic_pane_g1

0x6fb9,	// (0x00025fba) list_set_graphic_pane_g2_ParamLimits

0x6fb9,	// (0x00025fba) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0002e755) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0002e755) list_set_graphic_pane_g

0x0009,

0xface,	// (0x0002eacf) volume_small_pane_cp_g

0x6fdd,	// (0x00025fde) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6fdd,	// (0x00025fde) list_double2_large_graphic_pane_g1_cp2

0x6feb,	// (0x00025fec) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6feb,	// (0x00025fec) list_double2_large_graphic_pane_g2_cp2

0x6ffc,	// (0x00025ffd) list_double2_large_graphic_pane_g3_cp2

0x7004,	// (0x00026005) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7004,	// (0x00026005) list_double2_large_graphic_pane_t1_cp2

0x701a,	// (0x0002601b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x701a,	// (0x0002601b) list_double2_large_graphic_pane_t2_cp2

0xa5f0,	// (0x000295f1) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa5f0,	// (0x000295f1) list_double_large_graphic_pane_g1_cp2

0xa603,	// (0x00029604) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa603,	// (0x00029604) list_double_large_graphic_pane_g2_cp2

0x7190,	// (0x00026191) list_double_large_graphic_pane_g3_cp2

0xa614,	// (0x00029615) list_double_large_graphic_pane_g4_cp

0xa61c,	// (0x0002961d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa61c,	// (0x0002961d) list_double_large_graphic_pane_t1_cp2

0xa633,	// (0x00029634) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa633,	// (0x00029634) list_double_large_graphic_pane_t2_cp2

0x7080,	// (0x00026081) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7080,	// (0x00026081) list_double2_graphic_pane_g1_cp2

0x708e,	// (0x0002608f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x708e,	// (0x0002608f) list_double2_graphic_pane_g2_cp2

0x709f,	// (0x000260a0) list_double2_graphic_pane_g3_cp2

0x70a9,	// (0x000260aa) list_double2_graphic_pane_t1_cp2_ParamLimits

0x70a9,	// (0x000260aa) list_double2_graphic_pane_t1_cp2

0x70bf,	// (0x000260c0) list_double2_graphic_pane_t2_cp2_ParamLimits

0x70bf,	// (0x000260c0) list_double2_graphic_pane_t2_cp2

0x70d1,	// (0x000260d2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x70d1,	// (0x000260d2) list_single_number_heading_pane_g1_cp2

0x70dd,	// (0x000260de) list_single_number_heading_pane_g2_cp2

0x70e5,	// (0x000260e6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x70e5,	// (0x000260e6) list_single_number_heading_pane_t1_cp2

0x70fb,	// (0x000260fc) list_single_number_heading_pane_t2_cp2_ParamLimits

0x70fb,	// (0x000260fc) list_single_number_heading_pane_t2_cp2

0x710f,	// (0x00026110) list_single_number_heading_pane_t3_cp2_ParamLimits

0x710f,	// (0x00026110) list_single_number_heading_pane_t3_cp2

0x70d1,	// (0x000260d2) list_single_heading_pane_g1_cp2_ParamLimits

0x70d1,	// (0x000260d2) list_single_heading_pane_g1_cp2

0x70dd,	// (0x000260de) list_single_heading_pane_g2_cp2

0x70e5,	// (0x000260e6) list_single_heading_pane_t1_cp2_ParamLimits

0x70e5,	// (0x000260e6) list_single_heading_pane_t1_cp2

0xa3ea,	// (0x000293eb) list_single_heading_pane_t2_cp2_ParamLimits

0xa3ea,	// (0x000293eb) list_single_heading_pane_t2_cp2

0xa332,	// (0x00029333) list_double_graphic_pane_g1_cp2_ParamLimits

0xa332,	// (0x00029333) list_double_graphic_pane_g1_cp2

0xa33e,	// (0x0002933f) list_double_graphic_pane_g2_cp2_ParamLimits

0xa33e,	// (0x0002933f) list_double_graphic_pane_g2_cp2

0xa34d,	// (0x0002934e) list_double_graphic_pane_g3_cp2

0xa355,	// (0x00029356) list_double_graphic_pane_t1_cp2_ParamLimits

0xa355,	// (0x00029356) list_double_graphic_pane_t1_cp2

0xa36b,	// (0x0002936c) list_double_graphic_pane_t2_cp2_ParamLimits

0xa36b,	// (0x0002936c) list_double_graphic_pane_t2_cp2

0x7184,	// (0x00026185) list_double_number_pane_g1_cp2_ParamLimits

0x7184,	// (0x00026185) list_double_number_pane_g1_cp2

0x7190,	// (0x00026191) list_double_number_pane_g2_cp2

0xa2f6,	// (0x000292f7) list_double_number_pane_t1_cp2_ParamLimits

0xa2f6,	// (0x000292f7) list_double_number_pane_t1_cp2

0xa30a,	// (0x0002930b) list_double_number_pane_t2_cp2_ParamLimits

0xa30a,	// (0x0002930b) list_double_number_pane_t2_cp2

0xa320,	// (0x00029321) list_double_number_pane_t3_cp2_ParamLimits

0xa320,	// (0x00029321) list_double_number_pane_t3_cp2

0xa1df,	// (0x000291e0) list_single_graphic_pane_g1_cp2_ParamLimits

0xa1df,	// (0x000291e0) list_single_graphic_pane_g1_cp2

0x71ea,	// (0x000261eb) list_single_graphic_pane_g2_cp2_ParamLimits

0x71ea,	// (0x000261eb) list_single_graphic_pane_g2_cp2

0x71f6,	// (0x000261f7) list_single_graphic_pane_g3_cp2

0xa1b5,	// (0x000291b6) list_single_graphic_pane_t1_cp2_ParamLimits

0xa1b5,	// (0x000291b6) list_single_graphic_pane_t1_cp2

0x71ea,	// (0x000261eb) list_single_number_pane_g1_cp2_ParamLimits

0x71ea,	// (0x000261eb) list_single_number_pane_g1_cp2

0x71f6,	// (0x000261f7) list_single_number_pane_g2_cp2

0xa1b5,	// (0x000291b6) list_single_number_pane_t1_cp2_ParamLimits

0xa1b5,	// (0x000291b6) list_single_number_pane_t1_cp2

0xa1cb,	// (0x000291cc) list_single_number_pane_t2_cp2_ParamLimits

0xa1cb,	// (0x000291cc) list_single_number_pane_t2_cp2

0x6feb,	// (0x00025fec) list_double2_pane_g1_cp2_ParamLimits

0x6feb,	// (0x00025fec) list_double2_pane_g1_cp2

0x6ffc,	// (0x00025ffd) list_double2_pane_g2_cp2

0x715c,	// (0x0002615d) list_double2_pane_t1_cp2_ParamLimits

0x715c,	// (0x0002615d) list_double2_pane_t1_cp2

0x7172,	// (0x00026173) list_double2_pane_t2_cp2_ParamLimits

0x7172,	// (0x00026173) list_double2_pane_t2_cp2

0x7184,	// (0x00026185) list_double_pane_g1_cp2_ParamLimits

0x7184,	// (0x00026185) list_double_pane_g1_cp2

0x7190,	// (0x00026191) list_double_pane_g2_cp2

0x7198,	// (0x00026199) list_double_pane_t1_cp2_ParamLimits

0x7198,	// (0x00026199) list_double_pane_t1_cp2

0x71ae,	// (0x000261af) list_double_pane_t2_cp2_ParamLimits

0x71ae,	// (0x000261af) list_double_pane_t2_cp2

0x71da,	// (0x000261db) list_single_pane_cp2_g3

0x71ea,	// (0x000261eb) list_single_pane_g1_cp2_ParamLimits

0x71ea,	// (0x000261eb) list_single_pane_g1_cp2

0x71f6,	// (0x000261f7) list_single_pane_g2_cp2

0x71fe,	// (0x000261ff) list_single_pane_t1_cp2_ParamLimits

0x71fe,	// (0x000261ff) list_single_pane_t1_cp2

0x7216,	// (0x00026217) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7216,	// (0x00026217) list_single_large_graphic_pane_g1_cp2

0x7224,	// (0x00026225) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7224,	// (0x00026225) list_single_large_graphic_pane_g2_cp2

0x7230,	// (0x00026231) list_single_large_graphic_pane_g3_cp2

0x7238,	// (0x00026239) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7238,	// (0x00026239) list_single_large_graphic_pane_g4_cp1

0x7252,	// (0x00026253) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7252,	// (0x00026253) list_single_large_graphic_pane_t1_cp2

0xa17f,	// (0x00029180) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa17f,	// (0x00029180) list_single_graphic_heading_pane_g1_cp2

0xa14c,	// (0x0002914d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa14c,	// (0x0002914d) list_single_graphic_heading_pane_g4_cp2

0x71f6,	// (0x000261f7) list_single_graphic_heading_pane_g5_cp2

0xa18b,	// (0x0002918c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa18b,	// (0x0002918c) list_single_graphic_heading_pane_t1_cp2

0xa1a1,	// (0x000291a2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa1a1,	// (0x000291a2) list_single_graphic_heading_pane_t2_cp2

0xa140,	// (0x00029141) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa140,	// (0x00029141) list_single_2graphic_pane_g1_cp2

0xa14c,	// (0x0002914d) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa14c,	// (0x0002914d) list_single_2graphic_pane_g2_cp2

0x71f6,	// (0x000261f7) list_single_2graphic_pane_g3_cp2

0xa15d,	// (0x0002915e) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa15d,	// (0x0002915e) list_single_2graphic_pane_g4_cp2

0xa169,	// (0x0002916a) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa169,	// (0x0002916a) list_single_2graphic_pane_t1_cp2

0x09ff,	// (0x0001fa00) list_highlight_pane_g10_cp1

0x9d18,	// (0x00028d19) list_highlight_pane_g1_cp1

0x9d20,	// (0x00028d21) list_highlight_pane_g2_cp1

0x9d28,	// (0x00028d29) list_highlight_pane_g3_cp1

0x9d30,	// (0x00028d31) list_highlight_pane_g4_cp1

0x9d38,	// (0x00028d39) list_highlight_pane_g5_cp1

0x9d40,	// (0x00028d41) list_highlight_pane_g6_cp1

0x9d48,	// (0x00028d49) list_highlight_pane_g7_cp1

0x9d50,	// (0x00028d51) list_highlight_pane_g8_cp1

0x9d58,	// (0x00028d59) list_highlight_pane_g9_cp1

0x9c38,	// (0x00028c39) form_field_slider_pane_t3

0x9c46,	// (0x00028c47) form_field_slider_pane_t4

0x9c54,	// (0x00028c55) slider_form_pane_ParamLimits

0x9c54,	// (0x00028c55) slider_form_pane

0x0a09,	// (0x0001fa0a) control_abbreviations

0x0a09,	// (0x0001fa0a) control_conventions

0x0a09,	// (0x0001fa0a) control_definitions

0x0a09,	// (0x0001fa0a) format_table_attribute

0xa440,	// (0x00029441) bg_popup_preview_window_pane_g9

0x0a09,	// (0x0001fa0a) format_table_data2

0x0a09,	// (0x0001fa0a) format_table_data3

0x0a09,	// (0x0001fa0a) format_table_data_example

0x0008,

0x0a09,	// (0x0001fa0a) intro_purpose

0xf8f0,	// (0x0002e8f1) bg_popup_preview_window_pane_g

0x0a09,	// (0x0001fa0a) texts_category

0x0a09,	// (0x0001fa0a) texts_graphics

0x7268,	// (0x00026269) text_digital

0x7277,	// (0x00026278) text_primary

0x7286,	// (0x00026287) text_primary_small

0x7295,	// (0x00026296) text_secondary

0x72a4,	// (0x000262a5) text_title

0xabf2,	// (0x00029bf3) bg_passive_tab_pane_g1_cp3_srt

0x6db8,	// (0x00025db9) bg_passive_tab_pane_g2_cp3_srt

0xabfb,	// (0x00029bfc) bg_passive_tab_pane_g3_cp3_srt

0x2533,	// (0x00021534) bg_active_tab_pane_cp3_srt_ParamLimits

0x2533,	// (0x00021534) bg_active_tab_pane_cp3_srt

0xac04,	// (0x00029c05) tabs_4_active_pane_srt_g1

0xac0c,	// (0x00029c0d) tabs_4_active_pane_srt_t1_ParamLimits

0xac0c,	// (0x00029c0d) tabs_4_active_pane_srt_t1

0xabf2,	// (0x00029bf3) bg_active_tab_pane_g1_cp3_copy1

0x6db8,	// (0x00025db9) bg_active_tab_pane_g2_cp3_copy1

0xabfb,	// (0x00029bfc) bg_active_tab_pane_g3_cp3_copy1

0x2533,	// (0x00021534) tabs_2_long_active_pane_srt_ParamLimits

0x2533,	// (0x00021534) tabs_2_long_active_pane_srt

0x2533,	// (0x00021534) tabs_2_long_passive_pane_srt_ParamLimits

0x2533,	// (0x00021534) tabs_2_long_passive_pane_srt

0x680c,	// (0x0002580d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x680c,	// (0x0002580d) bg_passive_tab_pane_cp4_srt

0xa890,	// (0x00029891) bg_passive_tab_pane_g1_cp4_srt

0x6db8,	// (0x00025db9) bg_passive_tab_pane_g2_cp4_srt

0xa899,	// (0x0002989a) bg_passive_tab_pane_g3_cp4_srt

0x31ca,	// (0x000221cb) bg_active_tab_pane_cp4_srt_ParamLimits

0x31ca,	// (0x000221cb) bg_active_tab_pane_cp4_srt

0xa8a2,	// (0x000298a3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa8a2,	// (0x000298a3) tabs_2_long_active_pane_srt_t1

0xa890,	// (0x00029891) bg_active_tab_pane_g1_cp4_srt

0x6db8,	// (0x00025db9) bg_active_tab_pane_g2_cp4_srt

0xa899,	// (0x0002989a) bg_active_tab_pane_g3_cp4_srt

0x0a63,	// (0x0001fa64) tabs_3_long_active_pane_srt_ParamLimits

0x0a63,	// (0x0001fa64) tabs_3_long_active_pane_srt

0x0a63,	// (0x0001fa64) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0a63,	// (0x0001fa64) tabs_3_long_passive_pane_cp_srt

0x0a63,	// (0x0001fa64) tabs_3_long_passive_pane_srt_ParamLimits

0x0a63,	// (0x0001fa64) tabs_3_long_passive_pane_srt

0x680c,	// (0x0002580d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x680c,	// (0x0002580d) bg_passive_tab_pane_cp5_srt

0x6f86,	// (0x00025f87) bg_passive_tab_pane_g1_cp5_srt

0x6db8,	// (0x00025db9) bg_passive_tab_pane_g2_cp5_srt

0x6f8f,	// (0x00025f90) bg_passive_tab_pane_g3_cp5_srt

0x31ca,	// (0x000221cb) bg_active_tab_pane_cp5_srt_ParamLimits

0x31ca,	// (0x000221cb) bg_active_tab_pane_cp5_srt

0xa87e,	// (0x0002987f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa87e,	// (0x0002987f) tabs_3_long_active_pane_srt_t1

0x6f86,	// (0x00025f87) bg_active_tab_pane_g1_cp5_srt

0x6db8,	// (0x00025db9) bg_active_tab_pane_g2_cp5_srt

0x6f8f,	// (0x00025f90) bg_active_tab_pane_g3_cp5_srt

0xa870,	// (0x00029871) navi_text_pane_srt_t1

0xa868,	// (0x00029869) navi_icon_pane_srt_g1

0x7518,	// (0x00026519) midp_editing_number_pane_srt

0x72b3,	// (0x000262b4) midp_ticker_pane_srt

0x7520,	// (0x00026521) midp_ticker_pane_srt_g1

0x7528,	// (0x00026529) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0002e774) midp_ticker_pane_srt_g

0x7530,	// (0x00026531) midp_ticker_pane_srt_t1

0xa859,	// (0x0002985a) midp_editing_number_pane_t1_copy1

0x680c,	// (0x0002580d) listscroll_midp_pane

0x680c,	// (0x0002580d) midp_form_pane

0x731d,	// (0x0002631e) midp_info_popup_window_ParamLimits

0x731d,	// (0x0002631e) midp_info_popup_window

0x2d31,	// (0x00021d32) bg_popup_sub_pane_cp50_ParamLimits

0x2d31,	// (0x00021d32) bg_popup_sub_pane_cp50

0x994e,	// (0x0002894f) listscroll_midp_info_pane_ParamLimits

0x994e,	// (0x0002894f) listscroll_midp_info_pane

0x9936,	// (0x00028937) listscroll_form_midp_pane_ParamLimits

0x9936,	// (0x00028937) listscroll_form_midp_pane

0x9942,	// (0x00028943) scroll_bar_cp050

0x9916,	// (0x00028917) list_midp_pane

0xb68d,	// (0x0002a68e) signal_pane_g2_cp

0x9850,	// (0x00028851) listscroll_midp_info_pane_t1_ParamLimits

0x9850,	// (0x00028851) listscroll_midp_info_pane_t1

0x9868,	// (0x00028869) listscroll_midp_info_pane_t2_ParamLimits

0x9868,	// (0x00028869) listscroll_midp_info_pane_t2

0x98a6,	// (0x000288a7) listscroll_midp_info_pane_t3_ParamLimits

0x98a6,	// (0x000288a7) listscroll_midp_info_pane_t3

0x98e0,	// (0x000288e1) listscroll_midp_info_pane_t4_ParamLimits

0x98e0,	// (0x000288e1) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0002e82c) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0002e82c) listscroll_midp_info_pane_t

0x2db1,	// (0x00021db2) scroll_pane_cp21

0x97ea,	// (0x000287eb) form_midp_field_choice_group_pane

0x97f3,	// (0x000287f4) form_midp_field_text_pane

0x9836,	// (0x00028837) form_midp_field_time_pane

0x983e,	// (0x0002883f) form_midp_gauge_slider_pane

0x9847,	// (0x00028848) form_midp_gauge_wait_pane

0x0a09,	// (0x0001fa0a) form_midp_image_pane

0x5844,	// (0x00024845) list_single_midp_pane_ParamLimits

0x5844,	// (0x00024845) list_single_midp_pane

0x97ae,	// (0x000287af) form_midp_field_text_pane_t1

0x959a,	// (0x0002859b) input_focus_pane_cp050

0x97d9,	// (0x000287da) list_midp_form_text_pane

0x977d,	// (0x0002877e) form_midp_field_choice_group_pane_t1

0x978b,	// (0x0002878c) input_focus_pane_cp051

0x979f,	// (0x000287a0) list_midp_choice_pane

0x0a09,	// (0x0001fa0a) status_idle_pane

0x9761,	// (0x00028762) form_midp_field_time_pane_t1

0x09ff,	// (0x0001fa00) wait_anim_pane_g2_copy1

0x976f,	// (0x00028770) form_midp_field_time_pane_t2

0x0001,

0x73cd,	// (0x000263ce) aid_navinavi_width_2_pane

0xf826,	// (0x0002e827) form_midp_field_time_pane_t

0x0a09,	// (0x0001fa0a) input_focus_pane_cp052

0x0a09,	// (0x0001fa0a) bg_input_focus_pane_cp040

0x9721,	// (0x00028722) form_midp_gauge_slider_pane_t1

0x972f,	// (0x00028730) form_midp_gauge_slider_pane_t2

0x973d,	// (0x0002873e) form_midp_gauge_slider_pane_t3

0x974b,	// (0x0002874c) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0002e81e) form_midp_gauge_slider_pane_t

0x9759,	// (0x0002875a) form_midp_slider_pane

0x2533,	// (0x00021534) bg_input_focus_pane_cp041_ParamLimits

0x2533,	// (0x00021534) bg_input_focus_pane_cp041

0x96ee,	// (0x000286ef) form_midp_gauge_wait_pane_t1_ParamLimits

0x96ee,	// (0x000286ef) form_midp_gauge_wait_pane_t1

0x9700,	// (0x00028701) form_midp_gauge_wait_pane_t2_ParamLimits

0x9700,	// (0x00028701) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0002e819) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0002e819) form_midp_gauge_wait_pane_t

0x9712,	// (0x00028713) form_midp_wait_pane_ParamLimits

0x9712,	// (0x00028713) form_midp_wait_pane

0x96b6,	// (0x000286b7) form_midp_image_pane_g1

0x96bf,	// (0x000286c0) form_midp_image_pane_t1

0x96ce,	// (0x000286cf) form_midp_image_pane_t2

0x96dd,	// (0x000286de) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0002e812) form_midp_image_pane_t

0x96ad,	// (0x000286ae) list_single_midp_pane_g1

0x5835,	// (0x00024836) list_single_midp_pane_t1

0x9693,	// (0x00028694) list_midp_form_item_pane_ParamLimits

0x9693,	// (0x00028694) list_midp_form_item_pane

0x7375,	// (0x00026376) list_midp_form_item_pane_t1

0x7384,	// (0x00026385) midp_ticker_pane_g1

0x7390,	// (0x00026391) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0002e75a) midp_ticker_pane_g

0x739c,	// (0x0002639d) midp_ticker_pane_t1

0xaaf8,	// (0x00029af9) midp_editing_number_pane_t1

0xaad6,	// (0x00029ad7) midp_editing_number_pane

0xaae5,	// (0x00029ae6) midp_ticker_pane

0xa849,	// (0x0002984a) ai_message_heading_pane

0x0a09,	// (0x0001fa0a) bg_popup_window_pane_cp14

0xa851,	// (0x00029852) listscroll_ai_message_pane

0xa7cf,	// (0x000297d0) ai_message_heading_pane_g1_ParamLimits

0xa7cf,	// (0x000297d0) ai_message_heading_pane_g1

0xa7db,	// (0x000297dc) ai_message_heading_pane_g2_ParamLimits

0xa7db,	// (0x000297dc) ai_message_heading_pane_g2

0xa7e9,	// (0x000297ea) ai_message_heading_pane_g3_ParamLimits

0xa7e9,	// (0x000297ea) ai_message_heading_pane_g3

0xa7f5,	// (0x000297f6) ai_message_heading_pane_g4_ParamLimits

0xa7f5,	// (0x000297f6) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0002e953) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0002e953) ai_message_heading_pane_g

0xa801,	// (0x00029802) ai_message_heading_pane_t1_ParamLimits

0xa801,	// (0x00029802) ai_message_heading_pane_t1

0xa81b,	// (0x0002981c) ai_message_heading_pane_t2_ParamLimits

0xa81b,	// (0x0002981c) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0002e95c) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0002e95c) ai_message_heading_pane_t

0xa82f,	// (0x00029830) bg_popup_heading_pane_cp1_ParamLimits

0xa82f,	// (0x00029830) bg_popup_heading_pane_cp1

0xa7bd,	// (0x000297be) list_ai_message_pane_ParamLimits

0xa7bd,	// (0x000297be) list_ai_message_pane

0x2db1,	// (0x00021db2) scroll_pane_cp10

0xa759,	// (0x0002975a) list_ai_message_pane_g1

0xa761,	// (0x00029762) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0002e930) list_ai_message_pane_g

0xa769,	// (0x0002976a) list_ai_message_pane_t1_ParamLimits

0xa769,	// (0x0002976a) list_ai_message_pane_t1

0xa77e,	// (0x0002977f) list_ai_message_pane_t2_ParamLimits

0xa77e,	// (0x0002977f) list_ai_message_pane_t2

0xa793,	// (0x00029794) list_ai_message_pane_t3_ParamLimits

0xa793,	// (0x00029794) list_ai_message_pane_t3

0xa7a8,	// (0x000297a9) list_ai_message_pane_t4_ParamLimits

0xa7a8,	// (0x000297a9) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0002e935) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0002e935) list_ai_message_pane_t

0xa742,	// (0x00029743) cell_ai_soft_ind_pane_ParamLimits

0xa742,	// (0x00029743) cell_ai_soft_ind_pane

0x73ae,	// (0x000263af) cell_ai_soft_ind_pane_g1_ParamLimits

0x73ae,	// (0x000263af) cell_ai_soft_ind_pane_g1

0x0a09,	// (0x0001fa0a) grid_highlight_cp1

0x73bb,	// (0x000263bc) text_secondary_cp56_ParamLimits

0x73bb,	// (0x000263bc) text_secondary_cp56

0xa717,	// (0x00029718) example_general_pane_ParamLimits

0xa717,	// (0x00029718) example_general_pane

0xa723,	// (0x00029724) example_parent_pane_g1_ParamLimits

0xa723,	// (0x00029724) example_parent_pane_g1

0xa72f,	// (0x00029730) example_parent_pane_t1_ParamLimits

0xa72f,	// (0x00029730) example_parent_pane_t1

0x7be7,	// (0x00026be8) popup_preview_text_window_ParamLimits

0x7be7,	// (0x00026be8) popup_preview_text_window

0x71e2,	// (0x000261e3) list_single_pane_cp2_g4

0x2728,	// (0x00021729) bg_popup_preview_window_pane_ParamLimits

0x2728,	// (0x00021729) bg_popup_preview_window_pane

0xa44a,	// (0x0002944b) popup_preview_text_window_t1_ParamLimits

0xa44a,	// (0x0002944b) popup_preview_text_window_t1

0xa468,	// (0x00029469) popup_preview_text_window_t2_ParamLimits

0xa468,	// (0x00029469) popup_preview_text_window_t2

0xa4b1,	// (0x000294b2) popup_preview_text_window_t3_ParamLimits

0xa4b1,	// (0x000294b2) popup_preview_text_window_t3

0xa4f6,	// (0x000294f7) popup_preview_text_window_t4_ParamLimits

0xa4f6,	// (0x000294f7) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0002e904) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0002e904) popup_preview_text_window_t

0xa574,	// (0x00029575) scroll_pane_cp11

0x9526,	// (0x00028527) bg_popup_preview_window_pane_g1

0xa3fe,	// (0x000293ff) bg_popup_preview_window_pane_g2

0xa408,	// (0x00029409) bg_popup_preview_window_pane_g3

0xa412,	// (0x00029413) bg_popup_preview_window_pane_g4

0xa41c,	// (0x0002941d) bg_popup_preview_window_pane_g5

0xa426,	// (0x00029427) bg_popup_preview_window_pane_g6

0xa42e,	// (0x0002942f) bg_popup_preview_window_pane_g7

0xa436,	// (0x00029437) bg_popup_preview_window_pane_g8

0x602d,	// (0x0002502e) aid_popup_width_pane

0x7bc3,	// (0x00026bc4) popup_midp_note_alarm_window_ParamLimits

0x7bc3,	// (0x00026bc4) popup_midp_note_alarm_window

0x2bdc,	// (0x00021bdd) data_form_pane_ParamLimits

0x5490,	// (0x00024491) form_field_data_pane_g1

0x549a,	// (0x0002449b) form_field_data_pane_t1_ParamLimits

0x2be8,	// (0x00021be9) input_focus_pane_ParamLimits

0x54b4,	// (0x000244b5) data_form_wide_pane_ParamLimits

0x54c5,	// (0x000244c6) form_field_data_wide_pane_g1

0x54d1,	// (0x000244d2) form_field_data_wide_pane_t1_ParamLimits

0x28dd,	// (0x000218de) input_focus_pane_cp6_ParamLimits

0x67d1,	// (0x000257d2) input_popup_find_pane_g1_ParamLimits

0x67d1,	// (0x000257d2) input_popup_find_pane_g1

0x692a,	// (0x0002592b) aid_navi_side_left_pane

0x693f,	// (0x00025940) aid_navi_side_right_pane

0x9e13,	// (0x00028e14) bg_popup_window_pane_cp30_ParamLimits

0x9e13,	// (0x00028e14) bg_popup_window_pane_cp30

0x9e8d,	// (0x00028e8e) popup_midp_note_alarm_window_g1_ParamLimits

0x9e8d,	// (0x00028e8e) popup_midp_note_alarm_window_g1

0x9ebd,	// (0x00028ebe) popup_midp_note_alarm_window_t1_ParamLimits

0x9ebd,	// (0x00028ebe) popup_midp_note_alarm_window_t1

0x9f5e,	// (0x00028f5f) popup_midp_note_alarm_window_t2_ParamLimits

0x9f5e,	// (0x00028f5f) popup_midp_note_alarm_window_t2

0xa00c,	// (0x0002900d) popup_midp_note_alarm_window_t3_ParamLimits

0xa00c,	// (0x0002900d) popup_midp_note_alarm_window_t3

0xa03e,	// (0x0002903f) popup_midp_note_alarm_window_t4_ParamLimits

0xa03e,	// (0x0002903f) popup_midp_note_alarm_window_t4

0xa064,	// (0x00029065) popup_midp_note_alarm_window_t5_ParamLimits

0xa064,	// (0x00029065) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0002e8a1) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0002e8a1) popup_midp_note_alarm_window_t

0xa110,	// (0x00029111) wait_bar_pane_cp1_ParamLimits

0xa110,	// (0x00029111) wait_bar_pane_cp1

0x0a09,	// (0x0001fa0a) wait_anim_pane_copy1

0x0a09,	// (0x0001fa0a) wait_border_pane_copy1

0x9af8,	// (0x00028af9) wait_border_pane_g1_copy1

0x54eb,	// (0x000244ec) form_field_popup_pane_g1

0x54f3,	// (0x000244f4) form_field_popup_pane_t1_ParamLimits

0x2be8,	// (0x00021be9) input_focus_pane_cp7_ParamLimits

0x2c55,	// (0x00021c56) list_form_pane_ParamLimits

0x550d,	// (0x0002450e) form_field_popup_wide_pane_g1

0x5515,	// (0x00024516) form_field_popup_wide_pane_t1_ParamLimits

0x2be8,	// (0x00021be9) input_focus_pane_cp8_ParamLimits

0x2c7e,	// (0x00021c7f) list_form_wide_pane_ParamLimits

0xac7f,	// (0x00029c80) aid_size_cell_graphic_pane

0x55a1,	// (0x000245a2) data_form_pane_t1_ParamLimits

0x588f,	// (0x00024890) data_form_wide_pane_t1_ParamLimits

0x7f0e,	// (0x00026f0f) bg_status_flat_pane

0x6436,	// (0x00025437) title_pane_t1_ParamLimits

0x0a2b,	// (0x0001fa2c) title_pane_t2_ParamLimits

0x0a51,	// (0x0001fa52) title_pane_t3_ParamLimits

0xf55d,	// (0x0002e55e) title_pane_t_ParamLimits

0x6a79,	// (0x00025a7a) level_1_signal_ParamLimits

0x6a86,	// (0x00025a87) level_2_signal_ParamLimits

0x6a93,	// (0x00025a94) level_3_signal_ParamLimits

0x6aa0,	// (0x00025aa1) level_4_signal_ParamLimits

0x6aad,	// (0x00025aae) level_5_signal_ParamLimits

0x6aba,	// (0x00025abb) level_6_signal_ParamLimits

0x6ac7,	// (0x00025ac8) level_7_signal_ParamLimits

0x6a79,	// (0x00025a7a) level_1_battery_ParamLimits

0x6a86,	// (0x00025a87) level_2_battery_ParamLimits

0x6a93,	// (0x00025a94) level_3_battery_ParamLimits

0x6aa0,	// (0x00025aa1) level_4_battery_ParamLimits

0x6aad,	// (0x00025aae) level_5_battery_ParamLimits

0x6aba,	// (0x00025abb) level_6_battery_ParamLimits

0x6ac7,	// (0x00025ac8) level_7_battery_ParamLimits

0x9d18,	// (0x00028d19) bg_status_flat_pane_g1

0x9d20,	// (0x00028d21) bg_status_flat_pane_g2

0x9d28,	// (0x00028d29) bg_status_flat_pane_g3

0x9d30,	// (0x00028d31) bg_status_flat_pane_g4

0x9d38,	// (0x00028d39) bg_status_flat_pane_g5

0x9d40,	// (0x00028d41) bg_status_flat_pane_g6

0x9d48,	// (0x00028d49) bg_status_flat_pane_g7

0x64a6,	// (0x000254a7) tabs_3_active_pane_t1_ParamLimits

0x64a6,	// (0x000254a7) tabs_3_passive_pane_t1_ParamLimits

0x64c0,	// (0x000254c1) tabs_4_active_pane_t1_ParamLimits

0x64c0,	// (0x000254c1) tabs_4_1_passive_pane_t1_ParamLimits

0x67e7,	// (0x000257e8) tabs_2_active_pane_t1_ParamLimits

0x67e7,	// (0x000257e8) tabs_2_passive_pane_t1_ParamLimits

0x31ca,	// (0x000221cb) bg_active_tab_pane_cp4_ParamLimits

0x67f9,	// (0x000257fa) tabs_2_long_active_pane_t1_ParamLimits

0x680c,	// (0x0002580d) bg_passive_tab_pane_cp4_ParamLimits

0x8381,	// (0x00027382) list_single_midp_graphic_pane_t1_ParamLimits

0x31ca,	// (0x000221cb) bg_active_tab_pane_cp5_ParamLimits

0x6818,	// (0x00025819) tabs_3_long_active_pane_t1_ParamLimits

0x680c,	// (0x0002580d) bg_passive_tab_pane_cp5_ParamLimits

0x8381,	// (0x00027382) list_single_midp_graphic_pane_t1

0x7f0e,	// (0x00026f0f) bg_status_flat_pane_ParamLimits

0x7fd9,	// (0x00026fda) indicator_pane_cp2_ParamLimits

0x7fd9,	// (0x00026fda) indicator_pane_cp2

0x811c,	// (0x0002711d) navi_pane_srt_ParamLimits

0x811c,	// (0x0002711d) navi_pane_srt

0x8140,	// (0x00027141) popup_clock_digital_analogue_window_cp1

0x2591,	// (0x00021592) indicator_pane_t1

0x72b3,	// (0x000262b4) copy_highlight_pane

0x72b3,	// (0x000262b4) cursor_graphics_pane

0x72b3,	// (0x000262b4) graphic_within_text_pane

0x72b3,	// (0x000262b4) link_highlight_pane

0xa537,	// (0x00029538) popup_preview_text_window_t5_ParamLimits

0xa537,	// (0x00029538) popup_preview_text_window_t5

0x73d7,	// (0x000263d8) cursor_digital_pane

0x73d7,	// (0x000263d8) cursor_primary_pane

0x73e8,	// (0x000263e9) cursor_primary_small_pane

0x73f0,	// (0x000263f1) cursor_secondary_pane

0x73f8,	// (0x000263f9) cursor_title_pane

0x73d7,	// (0x000263d8) link_highlight_digital_pane

0x73df,	// (0x000263e0) link_highlight_primary_pane

0x73e8,	// (0x000263e9) link_highlight_primary_small_pane

0x73f0,	// (0x000263f1) link_highlight_secondary_pane

0x73f8,	// (0x000263f9) link_highlight_title_pane

0x73d7,	// (0x000263d8) copy_highlight_digital_pane

0x73d7,	// (0x000263d8) copy_highlight_primary_pane

0x73e8,	// (0x000263e9) copy_highlight_primary_small_pane

0x73f0,	// (0x000263f1) copy_highlight_secondary_pane

0x73f8,	// (0x000263f9) copy_highlight_title_pane

0x73f0,	// (0x000263f1) graphic_text_digital_pane

0x9db6,	// (0x00028db7) graphic_text_primary_pane

0x9dbf,	// (0x00028dc0) graphic_text_primary_small_pane

0x73e8,	// (0x000263e9) graphic_text_secondary_pane

0x73d7,	// (0x000263d8) graphic_text_title_pane

0x7400,	// (0x00026401) cursor_primary_pane_g1

0x9da8,	// (0x00028da9) cursor_text_primary_t1

0x9d90,	// (0x00028d91) cursor_primary_small_pane_g1

0x9d9a,	// (0x00028d9b) cursor_text_primary_small_t1

0x9d78,	// (0x00028d79) cursor_primary_small_pane_g1_copy1

0x9d82,	// (0x00028d83) cursor_text_primary_small_t1_copy1

0x9d60,	// (0x00028d61) cursor_text_title_t1

0x9d6e,	// (0x00028d6f) cursor_title_pane_g1

0x7400,	// (0x00026401) cursor_digital_pane_g1

0x740a,	// (0x0002640b) cursor_text_digital_t1

0x7418,	// (0x00026419) link_highlight_primary_pane_g1

0x9d09,	// (0x00028d0a) link_highlight_primary_pane_t1

0x7418,	// (0x00026419) link_highlight_primary_small_pane_g1

0x7420,	// (0x00026421) link_highlight_primary_small_pane_t1

0x742f,	// (0x00026430) link_highlight_secondary_pane_g1

0x7437,	// (0x00026438) link_highlight_secondary_pane_t1

0x9c7d,	// (0x00028c7e) link_highlight_title_pane_g1

0x9c85,	// (0x00028c86) link_highlight_title_pane_t1

0x9c66,	// (0x00028c67) link_highlight_digital_pane_g1

0x9c6e,	// (0x00028c6f) link_highlight_digital_pane_t1

0x9b2e,	// (0x00028b2f) copy_highlight_primary_pane_g1

0x9b45,	// (0x00028b46) copy_highlight_primary_pane_t1

0x9b2e,	// (0x00028b2f) copy_highlight_primary_small_pane_g1

0x9b36,	// (0x00028b37) copy_highlight_primary_small_pane_t1

0x7446,	// (0x00026447) copy_highlight_secondary_pane_g1

0x744e,	// (0x0002644f) copy_highlight_secondary_pane_t1

0x9b17,	// (0x00028b18) copy_highlight_title_pane_g1

0x9b1f,	// (0x00028b20) copy_highlight_title_pane_t1

0x9b2e,	// (0x00028b2f) copy_highlight_digital_pane_g1

0xae4f,	// (0x00029e50) copy_highlight_digital_pane_t1

0xada3,	// (0x00029da4) graphic_text_primary_pane_g1

0xae33,	// (0x00029e34) graphic_text_primary_pane_t1

0xae41,	// (0x00029e42) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0002e9d0) graphic_text_primary_pane_t

0xae0f,	// (0x00029e10) graphic_text_primary_small_pane_g1

0xae17,	// (0x00029e18) graphic_text_primary_small_pane_t1

0xae25,	// (0x00029e26) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0002e9cb) graphic_text_primary_small_pane_t

0xadeb,	// (0x00029dec) graphic_text_secondary_pane_g1

0xadf3,	// (0x00029df4) graphic_text_secondary_pane_t1

0xae01,	// (0x00029e02) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0002e9c6) graphic_text_secondary_pane_t

0xadc7,	// (0x00029dc8) graphic_text_title_pane_g1

0xadcf,	// (0x00029dd0) graphic_text_title_pane_t1

0xaddd,	// (0x00029dde) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0002e9c1) graphic_text_title_pane_t

0xada3,	// (0x00029da4) graphic_text_digital_pane_g1

0xadab,	// (0x00029dac) graphic_text_digital_pane_t1

0xadb9,	// (0x00029dba) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0002e9bc) graphic_text_digital_pane_t

0x2533,	// (0x00021534) navi_icon_pane_srt_ParamLimits

0x2533,	// (0x00021534) navi_icon_pane_srt

0x0a09,	// (0x0001fa0a) navi_midp_pane_srt

0x0a09,	// (0x0001fa0a) navi_navi_pane_srt

0x2533,	// (0x00021534) navi_text_pane_srt_ParamLimits

0x2533,	// (0x00021534) navi_text_pane_srt

0xad6e,	// (0x00029d6f) navi_navi_icon_text_pane_srt

0xad76,	// (0x00029d77) navi_navi_pane_srt_g1_ParamLimits

0xad76,	// (0x00029d77) navi_navi_pane_srt_g1

0xad88,	// (0x00029d89) navi_navi_pane_srt_g2_ParamLimits

0xad88,	// (0x00029d89) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0002e9b7) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0002e9b7) navi_navi_pane_srt_g

0xad9a,	// (0x00029d9b) navi_navi_tabs_pane_srt

0xad6e,	// (0x00029d6f) navi_navi_text_pane_srt

0xad6e,	// (0x00029d6f) navi_navi_volume_pane_srt

0xad5f,	// (0x00029d60) navi_navi_text_pane_srt_t1

0x86db,	// (0x000276dc) navi_navi_volume_pane_srt_g1

0x86e3,	// (0x000276e4) volume_small_pane_srt_ParamLimits

0x86e3,	// (0x000276e4) volume_small_pane_srt

0x745d,	// (0x0002645e) volume_small_pane_srt_g1_ParamLimits

0x745d,	// (0x0002645e) volume_small_pane_srt_g1

0x746d,	// (0x0002646e) volume_small_pane_srt_g2_ParamLimits

0x746d,	// (0x0002646e) volume_small_pane_srt_g2

0x747e,	// (0x0002647f) volume_small_pane_srt_g3_ParamLimits

0x747e,	// (0x0002647f) volume_small_pane_srt_g3

0x748f,	// (0x00026490) volume_small_pane_srt_g4_ParamLimits

0x748f,	// (0x00026490) volume_small_pane_srt_g4

0x74a0,	// (0x000264a1) volume_small_pane_srt_g5_ParamLimits

0x74a0,	// (0x000264a1) volume_small_pane_srt_g5

0x74b1,	// (0x000264b2) volume_small_pane_srt_g6_ParamLimits

0x74b1,	// (0x000264b2) volume_small_pane_srt_g6

0x74c2,	// (0x000264c3) volume_small_pane_srt_g7_ParamLimits

0x74c2,	// (0x000264c3) volume_small_pane_srt_g7

0x74d3,	// (0x000264d4) volume_small_pane_srt_g8_ParamLimits

0x74d3,	// (0x000264d4) volume_small_pane_srt_g8

0x74e4,	// (0x000264e5) volume_small_pane_srt_g9_ParamLimits

0x74e4,	// (0x000264e5) volume_small_pane_srt_g9

0x74f5,	// (0x000264f6) volume_small_pane_srt_g10_ParamLimits

0x74f5,	// (0x000264f6) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0002e75f) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0002e75f) volume_small_pane_srt_g

0x27dd,	// (0x000217de) query_popup_data_pane_cp2

0xad45,	// (0x00029d46) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xad45,	// (0x00029d46) navi_navi_icon_text_pane_srt_t1

0x9db6,	// (0x00028db7) navi_tabs_2_long_pane_srt

0x9db6,	// (0x00028db7) navi_tabs_2_pane_srt

0x9db6,	// (0x00028db7) navi_tabs_3_long_pane_srt

0x9db6,	// (0x00028db7) navi_tabs_3_pane_srt

0x9db6,	// (0x00028db7) navi_tabs_4_pane_srt

0x86bb,	// (0x000276bc) tabs_2_active_pane_srt_ParamLimits

0x86bb,	// (0x000276bc) tabs_2_active_pane_srt

0x86cb,	// (0x000276cc) tabs_2_passive_pane_srt_ParamLimits

0x86cb,	// (0x000276cc) tabs_2_passive_pane_srt

0x7820,	// (0x00026821) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7820,	// (0x00026821) bg_passive_tab_pane_cp1_srt

0xad11,	// (0x00029d12) bg_passive_tab_pane_g1_cp1_srt

0x6db8,	// (0x00025db9) bg_passive_tab_pane_g2_cp1_srt

0xad1a,	// (0x00029d1b) bg_passive_tab_pane_g3_cp1_srt

0x2533,	// (0x00021534) bg_active_tab_pane_cp1_srt_ParamLimits

0x2533,	// (0x00021534) bg_active_tab_pane_cp1_srt

0xad23,	// (0x00029d24) tabs_2_active_pane_srt_g1

0xad2b,	// (0x00029d2c) tabs_2_active_pane_srt_t1_ParamLimits

0xad2b,	// (0x00029d2c) tabs_2_active_pane_srt_t1

0xad11,	// (0x00029d12) bg_active_tab_pane_g1_cp1_srt

0x6db8,	// (0x00025db9) bg_active_tab_pane_g2_cp1_srt

0xad1a,	// (0x00029d1b) bg_active_tab_pane_g3_cp1_srt

0x8688,	// (0x00027689) tabs_3_active_pane_srt_ParamLimits

0x8688,	// (0x00027689) tabs_3_active_pane_srt

0x8699,	// (0x0002769a) tabs_3_passive_pane_cp_srt_ParamLimits

0x8699,	// (0x0002769a) tabs_3_passive_pane_cp_srt

0x86aa,	// (0x000276ab) tabs_3_passive_pane_srt_ParamLimits

0x86aa,	// (0x000276ab) tabs_3_passive_pane_srt

0x7820,	// (0x00026821) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7820,	// (0x00026821) bg_passive_tab_pane_cp2_srt

0x7506,	// (0x00026507) bg_passive_tab_pane_g1_cp2_srt

0x6db8,	// (0x00025db9) bg_passive_tab_pane_g2_cp2_srt

0x750f,	// (0x00026510) bg_passive_tab_pane_g3_cp2_srt

0x2533,	// (0x00021534) bg_active_tab_pane_cp2_srt_ParamLimits

0x2533,	// (0x00021534) bg_active_tab_pane_cp2_srt

0xacf7,	// (0x00029cf8) tabs_3_active_pane_srt_g1

0xacff,	// (0x00029d00) tabs_3_active_pane_srt_t1_ParamLimits

0xacff,	// (0x00029d00) tabs_3_active_pane_srt_t1

0x7506,	// (0x00026507) bg_active_tab_pane_g1_cp2_srt

0x6db8,	// (0x00025db9) bg_active_tab_pane_g2_cp2_srt

0x750f,	// (0x00026510) bg_active_tab_pane_g3_cp2_srt

0x8640,	// (0x00027641) tabs_4_active_pane_srt_ParamLimits

0x8640,	// (0x00027641) tabs_4_active_pane_srt

0x8652,	// (0x00027653) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8652,	// (0x00027653) tabs_4_passive_pane_cp2_srt

0x77ae,	// (0x000267af) aid_size_cell_toolbar

0x680c,	// (0x0002580d) main_idle_act_pane_ParamLimits

0x79e9,	// (0x000269ea) popup_large_graphic_colour_window_ParamLimits

0x7d90,	// (0x00026d91) popup_toolbar_window_ParamLimits

0x7d90,	// (0x00026d91) popup_toolbar_window

0x58e8,	// (0x000248e9) list_single_graphic_2heading_pane_ParamLimits

0x58e8,	// (0x000248e9) list_single_graphic_2heading_pane

0x2f89,	// (0x00021f8a) aid_size_cell_apps_grid_lsc_pane

0x2f9b,	// (0x00021f9c) aid_size_cell_apps_grid_prt_pane

0x7820,	// (0x00026821) bg_wml_button_pane_cp1_ParamLimits

0x7820,	// (0x00026821) bg_wml_button_pane_cp1

0x97ae,	// (0x000287af) form_midp_field_text_pane_t1_ParamLimits

0x959a,	// (0x0002859b) input_focus_pane_cp050_ParamLimits

0x97d9,	// (0x000287da) list_midp_form_text_pane_ParamLimits

0x978b,	// (0x0002878c) input_focus_pane_cp051_ParamLimits

0x979f,	// (0x000287a0) list_midp_choice_pane_ParamLimits

0x9653,	// (0x00028654) list_single_2graphic_pane_cp3_ParamLimits

0x9653,	// (0x00028654) list_single_2graphic_pane_cp3

0x966c,	// (0x0002866d) list_single_midp_graphic_pane_ParamLimits

0x966c,	// (0x0002866d) list_single_midp_graphic_pane

0x56dd,	// (0x000246de) list_single_graphic_2heading_pane_g1_ParamLimits

0x56dd,	// (0x000246de) list_single_graphic_2heading_pane_g1

0x56e9,	// (0x000246ea) list_single_graphic_2heading_pane_g4_ParamLimits

0x56e9,	// (0x000246ea) list_single_graphic_2heading_pane_g4

0x56f5,	// (0x000246f6) list_single_graphic_2heading_pane_g5_ParamLimits

0x56f5,	// (0x000246f6) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0002e7b2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0002e7b2) list_single_graphic_2heading_pane_g

0x5701,	// (0x00024702) list_single_graphic_2heading_pane_t1_ParamLimits

0x5701,	// (0x00024702) list_single_graphic_2heading_pane_t1

0x5715,	// (0x00024716) list_single_graphic_2heading_pane_t2_ParamLimits

0x5715,	// (0x00024716) list_single_graphic_2heading_pane_t2

0x5731,	// (0x00024732) list_single_graphic_2heading_pane_t3_ParamLimits

0x5731,	// (0x00024732) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0002e7b9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0002e7b9) list_single_graphic_2heading_pane_t

0x829f,	// (0x000272a0) bg_popup_sub_pane_cp2

0x82c9,	// (0x000272ca) grid_toobar_pane

0x8305,	// (0x00027306) cell_toolbar_pane_ParamLimits

0x8305,	// (0x00027306) cell_toolbar_pane

0x94ca,	// (0x000284cb) cell_toolbar_pane_g1_ParamLimits

0x94ca,	// (0x000284cb) cell_toolbar_pane_g1

0x94de,	// (0x000284df) cell_toolbar_pane_g2_ParamLimits

0x94de,	// (0x000284df) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0002e7c7) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0002e7c7) cell_toolbar_pane_g

0x9500,	// (0x00028501) grid_highlight_pane_cp2_ParamLimits

0x9500,	// (0x00028501) grid_highlight_pane_cp2

0x951a,	// (0x0002851b) toolbar_button_pane

0x9526,	// (0x00028527) toolbar_button_pane_g1

0x952e,	// (0x0002852f) toolbar_button_pane_g2

0x9536,	// (0x00028537) toolbar_button_pane_g3

0x953e,	// (0x0002853f) toolbar_button_pane_g4

0x9546,	// (0x00028547) toolbar_button_pane_g5

0x954e,	// (0x0002854f) toolbar_button_pane_g6

0x9556,	// (0x00028557) toolbar_button_pane_g7

0x955e,	// (0x0002855f) toolbar_button_pane_g8

0x9566,	// (0x00028567) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0002e7cc) toolbar_button_pane_g

0x833d,	// (0x0002733e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x833d,	// (0x0002733e) list_single_2graphic_pane_g1_cp3

0x8349,	// (0x0002734a) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8349,	// (0x0002734a) list_single_2graphic_pane_g2_cp3

0x70dd,	// (0x000260de) list_single_2graphic_pane_g3_cp3

0x835a,	// (0x0002735b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x835a,	// (0x0002735b) list_single_2graphic_pane_g4_cp3

0x8366,	// (0x00027367) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8366,	// (0x00027367) list_single_2graphic_pane_t1_cp3

0x70d1,	// (0x000260d2) list_single_midp_graphic_pane_g2_ParamLimits

0x70d1,	// (0x000260d2) list_single_midp_graphic_pane_g2

0x77b6,	// (0x000267b7) aid_zoom_text_primary

0x56cd,	// (0x000246ce) aid_zoom_text_secondary

0x75c3,	// (0x000265c4) status_small_pane_g7_ParamLimits

0x75c3,	// (0x000265c4) status_small_pane_g7

0x75e6,	// (0x000265e7) status_small_pane_t1_ParamLimits

0x6425,	// (0x00025426) title_pane_g2

0x0003,

0xf554,	// (0x0002e555) title_pane_g

0x667a,	// (0x0002567b) aid_size_cell_colour_1_pane_ParamLimits

0x667a,	// (0x0002567b) aid_size_cell_colour_1_pane

0x668e,	// (0x0002568f) aid_size_cell_colour_2_pane_ParamLimits

0x668e,	// (0x0002568f) aid_size_cell_colour_2_pane

0x66a2,	// (0x000256a3) aid_size_cell_colour_3_pane_ParamLimits

0x66a2,	// (0x000256a3) aid_size_cell_colour_3_pane

0x66b6,	// (0x000256b7) aid_size_cell_colour_4_pane_ParamLimits

0x66b6,	// (0x000256b7) aid_size_cell_colour_4_pane

0x6866,	// (0x00025867) title_pane_stacon_g1_ParamLimits

0x6866,	// (0x00025867) title_pane_stacon_g1

0x9b9c,	// (0x00028b9d) popup_note_wait_window_g3_ParamLimits

0x9b9c,	// (0x00028b9d) popup_note_wait_window_g3

0x9c13,	// (0x00028c14) popup_note_wait_window_t5_ParamLimits

0x9c13,	// (0x00028c14) popup_note_wait_window_t5

0x0a09,	// (0x0001fa0a) main_feb_china_hwr_fs_writing_pane

0x78b0,	// (0x000268b1) popup_feb_china_hwr_fs_window_ParamLimits

0x78b0,	// (0x000268b1) popup_feb_china_hwr_fs_window

0x8397,	// (0x00027398) aid_size_cell_hwr_fs_ParamLimits

0x8397,	// (0x00027398) aid_size_cell_hwr_fs

0x959a,	// (0x0002859b) bg_popup_sub_pane_cp3_ParamLimits

0x959a,	// (0x0002859b) bg_popup_sub_pane_cp3

0x83ac,	// (0x000273ad) grid_hwr_fs_pane_ParamLimits

0x83ac,	// (0x000273ad) grid_hwr_fs_pane

0x83c4,	// (0x000273c5) linegrid_hwr_fs_pane_ParamLimits

0x83c4,	// (0x000273c5) linegrid_hwr_fs_pane

0x83d4,	// (0x000273d5) cell_hwr_fs_pane_ParamLimits

0x83d4,	// (0x000273d5) cell_hwr_fs_pane

0x95a6,	// (0x000285a7) linegrid_hwr_fs_pane_g1_ParamLimits

0x95a6,	// (0x000285a7) linegrid_hwr_fs_pane_g1

0x95b2,	// (0x000285b3) linegrid_hwr_fs_pane_g2_ParamLimits

0x95b2,	// (0x000285b3) linegrid_hwr_fs_pane_g2

0x95c4,	// (0x000285c5) linegrid_hwr_fs_pane_g3_ParamLimits

0x95c4,	// (0x000285c5) linegrid_hwr_fs_pane_g3

0x83f8,	// (0x000273f9) linegrid_hwr_fs_pane_g4_ParamLimits

0x83f8,	// (0x000273f9) linegrid_hwr_fs_pane_g4

0x8416,	// (0x00027417) linegrid_hwr_fs_pane_g5_ParamLimits

0x8416,	// (0x00027417) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0002e7f7) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0002e7f7) linegrid_hwr_fs_pane_g

0x95d0,	// (0x000285d1) cell_hwr_fs_pane_g1_ParamLimits

0x95d0,	// (0x000285d1) cell_hwr_fs_pane_g1

0x81d6,	// (0x000271d7) cell_hwr_fs_pane_g2_ParamLimits

0x81d6,	// (0x000271d7) cell_hwr_fs_pane_g2

0x95e6,	// (0x000285e7) cell_hwr_fs_pane_g3_ParamLimits

0x95e6,	// (0x000285e7) cell_hwr_fs_pane_g3

0x95f3,	// (0x000285f4) cell_hwr_fs_pane_g4_ParamLimits

0x95f3,	// (0x000285f4) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0002e802) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0002e802) cell_hwr_fs_pane_g

0x842c,	// (0x0002742d) cell_hwr_fs_pane_t1

0x0a09,	// (0x0001fa0a) grid_highlight_pane_cp6

0x0a09,	// (0x0001fa0a) main_idle_act2_pane

0x2d98,	// (0x00021d99) aid_inside_area_popup_secondary

0xa24c,	// (0x0002924d) aid_inside_area_window_primary_ParamLimits

0xa24c,	// (0x0002924d) aid_inside_area_window_primary

0xae5e,	// (0x00029e5f) ai2_news_ticker_pane

0xae66,	// (0x00029e67) aid_size_cell_ai1_link_ParamLimits

0xae66,	// (0x00029e67) aid_size_cell_ai1_link

0xae80,	// (0x00029e81) popup_ai2_data_window_ParamLimits

0xae80,	// (0x00029e81) popup_ai2_data_window

0xae9e,	// (0x00029e9f) popup_ai2_link_window_ParamLimits

0xae9e,	// (0x00029e9f) popup_ai2_link_window

0x959a,	// (0x0002859b) bg_popup_sub_pane_cp4_ParamLimits

0x959a,	// (0x0002859b) bg_popup_sub_pane_cp4

0xaeb4,	// (0x00029eb5) grid_ai2_link_pane_ParamLimits

0xaeb4,	// (0x00029eb5) grid_ai2_link_pane

0xaecb,	// (0x00029ecc) popup_ai2_link_window_g1_ParamLimits

0xaecb,	// (0x00029ecc) popup_ai2_link_window_g1

0xaed7,	// (0x00029ed8) popup_ai2_link_window_g2_ParamLimits

0xaed7,	// (0x00029ed8) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0002e9d5) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0002e9d5) popup_ai2_link_window_g

0xaee8,	// (0x00029ee9) ai2_mp_button_pane

0xaef0,	// (0x00029ef1) ai2_mp_volume_pane

0x978b,	// (0x0002878c) bg_popup_sub_pane_cp5_ParamLimits

0x978b,	// (0x0002878c) bg_popup_sub_pane_cp5

0xaef8,	// (0x00029ef9) heading_ai2_gene_pane_ParamLimits

0xaef8,	// (0x00029ef9) heading_ai2_gene_pane

0xaf04,	// (0x00029f05) list_ai2_gene_pane_ParamLimits

0xaf04,	// (0x00029f05) list_ai2_gene_pane

0xaf4c,	// (0x00029f4d) cell_ai2_link_pane_ParamLimits

0xaf4c,	// (0x00029f4d) cell_ai2_link_pane

0xaf62,	// (0x00029f63) cell_ai2_link_pane_g1

0x0a09,	// (0x0001fa0a) grid_highlight_pane_cp7

0x86f8,	// (0x000276f9) ai2_mp_volume_pane_g1

0xb035,	// (0x0002a036) ai2_mp_volume_pane_g2

0xafaa,	// (0x00029fab) list_ai2_gene_pane_t1

0xb03d,	// (0x0002a03e) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0002e9ee) ai2_mp_volume_pane_g

0x8700,	// (0x00027701) volume_small_pane_cp3

0xb045,	// (0x0002a046) aid_size_cell_ai2_button

0xb04d,	// (0x0002a04e) grid_ai2_button_pane

0xb056,	// (0x0002a057) cell_ai2_button_pane_ParamLimits

0xb056,	// (0x0002a057) cell_ai2_button_pane

0x09ff,	// (0x0001fa00) cell_ai2_button_pane_g1

0x0a09,	// (0x0001fa0a) grid_highlight_pane_cp8

0xaff5,	// (0x00029ff6) ai2_gene_pane_t1_ParamLimits

0xaff5,	// (0x00029ff6) ai2_gene_pane_t1

0x77a4,	// (0x000267a5) aid_height_parent_landscape

0xa91e,	// (0x0002991f) aid_height_set_list

0xa92f,	// (0x00029930) aid_size_parent

0xac7f,	// (0x00029c80) aid_size_cell_graphic_pane_ParamLimits

0xaf14,	// (0x00029f15) popup_ai2_data_window_g1_ParamLimits

0xaf14,	// (0x00029f15) popup_ai2_data_window_g1

0xaf20,	// (0x00029f21) ai2_news_ticker_pane_g1

0xaf28,	// (0x00029f29) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0002e9da) ai2_news_ticker_pane_g

0xaf30,	// (0x00029f31) ai2_news_ticker_pane_t1

0xaf3e,	// (0x00029f3f) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0002e9df) ai2_news_ticker_pane_t

0xaf6b,	// (0x00029f6c) heading_ai2_gene_pane_g1

0xaf73,	// (0x00029f74) heading_ai2_gene_pane_t1_ParamLimits

0xaf73,	// (0x00029f74) heading_ai2_gene_pane_t1

0xaf88,	// (0x00029f89) list_highlight_pane_cp6

0xaf90,	// (0x00029f91) ai2_gene_pane_ParamLimits

0xaf90,	// (0x00029f91) ai2_gene_pane

0xafb8,	// (0x00029fb9) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0002e9e4) list_ai2_gene_pane_t

0xafc6,	// (0x00029fc7) list_highlight_pane_cp8_ParamLimits

0xafc6,	// (0x00029fc7) list_highlight_pane_cp8

0xafd7,	// (0x00029fd8) ai2_gene_pane_g1_ParamLimits

0xafd7,	// (0x00029fd8) ai2_gene_pane_g1

0xafe9,	// (0x00029fea) ai2_gene_pane_g2_ParamLimits

0xafe9,	// (0x00029fea) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0002e9e9) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0002e9e9) ai2_gene_pane_g

0x2af8,	// (0x00021af9) scroll_pane_cp12

0x775b,	// (0x0002675c) control_pane_t3_ParamLimits

0x775b,	// (0x0002675c) control_pane_t3

0x75d7,	// (0x000265d8) status_small_pane_g8_ParamLimits

0x75d7,	// (0x000265d8) status_small_pane_g8

0x79ae,	// (0x000269af) popup_find_window_ParamLimits

0x7bd9,	// (0x00026bda) popup_note_image_window_ParamLimits

0x5749,	// (0x0002474a) list_double2_graphic_pane_vc_g1_ParamLimits

0x5749,	// (0x0002474a) list_double2_graphic_pane_vc_g1

0x5755,	// (0x00024756) list_double2_graphic_pane_vc_g2_ParamLimits

0x5755,	// (0x00024756) list_double2_graphic_pane_vc_g2

0x5761,	// (0x00024762) list_double2_graphic_pane_vc_g3_ParamLimits

0x5761,	// (0x00024762) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0002e7c0) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0002e7c0) list_double2_graphic_pane_vc_g

0x576d,	// (0x0002476e) list_double2_graphic_pane_vc_t1_ParamLimits

0x576d,	// (0x0002476e) list_double2_graphic_pane_vc_t1

0x56e9,	// (0x000246ea) list_single_heading_pane_vc_g1_ParamLimits

0x56e9,	// (0x000246ea) list_single_heading_pane_vc_g1

0x56f5,	// (0x000246f6) list_single_heading_pane_vc_g2_ParamLimits

0x56f5,	// (0x000246f6) list_single_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0002e7e1) list_single_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0002e7e1) list_single_heading_pane_vc_g

0x5783,	// (0x00024784) list_single_heading_pane_vc_t1_ParamLimits

0x5783,	// (0x00024784) list_single_heading_pane_vc_t1

0x579b,	// (0x0002479c) list_single_heading_pane_vc_t2_ParamLimits

0x579b,	// (0x0002479c) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0002e7e6) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0002e7e6) list_single_heading_pane_vc_t

0x57ad,	// (0x000247ae) list_setting_number_pane_vc_g1_ParamLimits

0x57ad,	// (0x000247ae) list_setting_number_pane_vc_g1

0x57b9,	// (0x000247ba) list_setting_number_pane_vc_g2_ParamLimits

0x57b9,	// (0x000247ba) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0002e7eb) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0002e7eb) list_setting_number_pane_vc_g

0x57c5,	// (0x000247c6) list_setting_number_pane_vc_t1_ParamLimits

0x57c5,	// (0x000247c6) list_setting_number_pane_vc_t1

0x57d9,	// (0x000247da) list_setting_number_pane_vc_t2_ParamLimits

0x57d9,	// (0x000247da) list_setting_number_pane_vc_t2

0x57f5,	// (0x000247f6) list_setting_number_pane_vc_t3_ParamLimits

0x57f5,	// (0x000247f6) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0002e7f0) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0002e7f0) list_setting_number_pane_vc_t

0x5823,	// (0x00024824) set_value_pane_vc_ParamLimits

0x5823,	// (0x00024824) set_value_pane_vc

0x58e8,	// (0x000248e9) list_double2_graphic_pane_vc_ParamLimits

0x58e8,	// (0x000248e9) list_double2_graphic_pane_vc

0xab07,	// (0x00029b08) list_double2_large_graphic_pane_vc_ParamLimits

0xab07,	// (0x00029b08) list_double2_large_graphic_pane_vc

0x58e8,	// (0x000248e9) list_double2_pane_vc_ParamLimits

0x58e8,	// (0x000248e9) list_double2_pane_vc

0x58e8,	// (0x000248e9) list_double_graphic_heading_pane_vc_ParamLimits

0x58e8,	// (0x000248e9) list_double_graphic_heading_pane_vc

0x58e8,	// (0x000248e9) list_double_graphic_pane_vc_ParamLimits

0x58e8,	// (0x000248e9) list_double_graphic_pane_vc

0x58e8,	// (0x000248e9) list_double_heading_pane_vc_ParamLimits

0x58e8,	// (0x000248e9) list_double_heading_pane_vc

0xab07,	// (0x00029b08) list_double_large_graphic_pane_vc_ParamLimits

0xab07,	// (0x00029b08) list_double_large_graphic_pane_vc

0x58e8,	// (0x000248e9) list_double_number_pane_vc_ParamLimits

0x58e8,	// (0x000248e9) list_double_number_pane_vc

0x58e8,	// (0x000248e9) list_double_pane_vc_ParamLimits

0x58e8,	// (0x000248e9) list_double_pane_vc

0x58e8,	// (0x000248e9) list_double_time_pane_vc_ParamLimits

0x58e8,	// (0x000248e9) list_double_time_pane_vc

0x58e8,	// (0x000248e9) list_setting_number_pane_vc_ParamLimits

0x58e8,	// (0x000248e9) list_setting_number_pane_vc

0x58e8,	// (0x000248e9) list_setting_pane_vc_ParamLimits

0x58e8,	// (0x000248e9) list_setting_pane_vc

0x58e8,	// (0x000248e9) list_single_graphic_heading_pane_vc_ParamLimits

0x58e8,	// (0x000248e9) list_single_graphic_heading_pane_vc

0x58e8,	// (0x000248e9) list_single_heading_pane_vc_ParamLimits

0x58e8,	// (0x000248e9) list_single_heading_pane_vc

0xab1b,	// (0x00029b1c) list_single_number_heading_pane_vc_ParamLimits

0xab1b,	// (0x00029b1c) list_single_number_heading_pane_vc

0x5749,	// (0x0002474a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5749,	// (0x0002474a) list_double_graphic_heading_pane_vc_g1

0x56e9,	// (0x000246ea) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x56e9,	// (0x000246ea) list_double_graphic_heading_pane_vc_g2

0x56f5,	// (0x000246f6) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x56f5,	// (0x000246f6) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x0002e9f5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0002e9f5) list_double_graphic_heading_pane_vc_g

0x592d,	// (0x0002492e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x592d,	// (0x0002492e) list_double_graphic_heading_pane_vc_t1

0x5943,	// (0x00024944) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5943,	// (0x00024944) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x0002e9fc) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x0002e9fc) list_double_graphic_heading_pane_vc_t

0x57ad,	// (0x000247ae) list_setting_pane_vc_g1_ParamLimits

0x57ad,	// (0x000247ae) list_setting_pane_vc_g1

0x57b9,	// (0x000247ba) list_setting_pane_vc_g2_ParamLimits

0x57b9,	// (0x000247ba) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0002e7eb) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0002e7eb) list_setting_pane_vc_g

0x5961,	// (0x00024962) list_setting_pane_vc_t1_ParamLimits

0x5961,	// (0x00024962) list_setting_pane_vc_t1

0x597d,	// (0x0002497e) list_setting_pane_vc_t2_ParamLimits

0x597d,	// (0x0002497e) list_setting_pane_vc_t2

0x0001,

0xfa29,	// (0x0002ea2a) list_setting_pane_vc_t_ParamLimits

0xfa29,	// (0x0002ea2a) list_setting_pane_vc_t

0x5823,	// (0x00024824) set_value_pane_cp_vc_ParamLimits

0x5823,	// (0x00024824) set_value_pane_cp_vc

0x56e9,	// (0x000246ea) list_single_number_heading_pane_vc_g1_ParamLimits

0x56e9,	// (0x000246ea) list_single_number_heading_pane_vc_g1

0x56f5,	// (0x000246f6) list_single_number_heading_pane_vc_g2_ParamLimits

0x56f5,	// (0x000246f6) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0002e7e1) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0002e7e1) list_single_number_heading_pane_vc_g

0x5783,	// (0x00024784) list_single_number_heading_pane_vc_t1_ParamLimits

0x5783,	// (0x00024784) list_single_number_heading_pane_vc_t1

0x5999,	// (0x0002499a) list_single_number_heading_pane_vc_t2_ParamLimits

0x5999,	// (0x0002499a) list_single_number_heading_pane_vc_t2

0x59ab,	// (0x000249ac) list_single_number_heading_pane_vc_t3_ParamLimits

0x59ab,	// (0x000249ac) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2e,	// (0x0002ea2f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002ea2f) list_single_number_heading_pane_vc_t

0x5749,	// (0x0002474a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5749,	// (0x0002474a) list_single_graphic_heading_pane_vc_g1

0x56e9,	// (0x000246ea) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x56e9,	// (0x000246ea) list_single_graphic_heading_pane_vc_g4

0x56f5,	// (0x000246f6) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x56f5,	// (0x000246f6) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9f4,	// (0x0002e9f5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0002e9f5) list_single_graphic_heading_pane_vc_g

0x5783,	// (0x00024784) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5783,	// (0x00024784) list_single_graphic_heading_pane_vc_t1

0x59bd,	// (0x000249be) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x59bd,	// (0x000249be) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x0002ea36) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x0002ea36) list_single_graphic_heading_pane_vc_t

0x56e9,	// (0x000246ea) list_double2_pane_vc_g1_ParamLimits

0x56e9,	// (0x000246ea) list_double2_pane_vc_g1

0x56f5,	// (0x000246f6) list_double2_pane_vc_g2_ParamLimits

0x56f5,	// (0x000246f6) list_double2_pane_vc_g2

0x0001,

0xf7e0,	// (0x0002e7e1) list_double2_pane_vc_g_ParamLimits

0xf7e0,	// (0x0002e7e1) list_double2_pane_vc_g

0x59cf,	// (0x000249d0) list_double2_pane_vc_t1_ParamLimits

0x59cf,	// (0x000249d0) list_double2_pane_vc_t1

0x59e5,	// (0x000249e6) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x59e5,	// (0x000249e6) list_double2_large_graphic_pane_vc_g1

0x59f1,	// (0x000249f2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x59f1,	// (0x000249f2) list_double2_large_graphic_pane_vc_g2

0x59fd,	// (0x000249fe) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x59fd,	// (0x000249fe) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3a,	// (0x0002ea3b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0002ea3b) list_double2_large_graphic_pane_vc_g

0x5a09,	// (0x00024a0a) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5a09,	// (0x00024a0a) list_double2_large_graphic_pane_vc_t1

0x5a1f,	// (0x00024a20) list_double_time_pane_vc_g1_ParamLimits

0x5a1f,	// (0x00024a20) list_double_time_pane_vc_g1

0x5a2b,	// (0x00024a2c) list_double_time_pane_vc_g2_ParamLimits

0x5a2b,	// (0x00024a2c) list_double_time_pane_vc_g2

0x0001,

0xfa41,	// (0x0002ea42) list_double_time_pane_vc_g_ParamLimits

0xfa41,	// (0x0002ea42) list_double_time_pane_vc_g

0x5a37,	// (0x00024a38) list_double_time_pane_vc_t1_ParamLimits

0x5a37,	// (0x00024a38) list_double_time_pane_vc_t1

0x5a61,	// (0x00024a62) list_double_time_pane_vc_t2_ParamLimits

0x5a61,	// (0x00024a62) list_double_time_pane_vc_t2

0x5aaa,	// (0x00024aab) list_double_time_pane_vc_t3_ParamLimits

0x5aaa,	// (0x00024aab) list_double_time_pane_vc_t3

0x5abc,	// (0x00024abd) list_double_time_pane_vc_t4_ParamLimits

0x5abc,	// (0x00024abd) list_double_time_pane_vc_t4

0x0003,

0xfa46,	// (0x0002ea47) list_double_time_pane_vc_t_ParamLimits

0xfa46,	// (0x0002ea47) list_double_time_pane_vc_t

0x56e9,	// (0x000246ea) list_double_pane_vc_g1_ParamLimits

0x56e9,	// (0x000246ea) list_double_pane_vc_g1

0x56f5,	// (0x000246f6) list_double_pane_vc_g2_ParamLimits

0x56f5,	// (0x000246f6) list_double_pane_vc_g2

0x0001,

0xf7e0,	// (0x0002e7e1) list_double_pane_vc_g_ParamLimits

0xf7e0,	// (0x0002e7e1) list_double_pane_vc_g

0x5ae1,	// (0x00024ae2) list_double_pane_vc_t1_ParamLimits

0x5ae1,	// (0x00024ae2) list_double_pane_vc_t1

0x5af5,	// (0x00024af6) list_double_pane_vc_t2_ParamLimits

0x5af5,	// (0x00024af6) list_double_pane_vc_t2

0x0001,

0xfa4f,	// (0x0002ea50) list_double_pane_vc_t_ParamLimits

0xfa4f,	// (0x0002ea50) list_double_pane_vc_t

0x56e9,	// (0x000246ea) list_double_number_pane_vc_g1_ParamLimits

0x56e9,	// (0x000246ea) list_double_number_pane_vc_g1

0x56f5,	// (0x000246f6) list_double_number_pane_vc_g2_ParamLimits

0x56f5,	// (0x000246f6) list_double_number_pane_vc_g2

0x0001,

0xf7e0,	// (0x0002e7e1) list_double_number_pane_vc_g_ParamLimits

0xf7e0,	// (0x0002e7e1) list_double_number_pane_vc_g

0x5b0b,	// (0x00024b0c) list_double_number_pane_vc_t1_ParamLimits

0x5b0b,	// (0x00024b0c) list_double_number_pane_vc_t1

0x5b1f,	// (0x00024b20) list_double_number_pane_vc_t2_ParamLimits

0x5b1f,	// (0x00024b20) list_double_number_pane_vc_t2

0x5b33,	// (0x00024b34) list_double_number_pane_vc_t3_ParamLimits

0x5b33,	// (0x00024b34) list_double_number_pane_vc_t3

0x0002,

0xfa54,	// (0x0002ea55) list_double_number_pane_vc_t_ParamLimits

0xfa54,	// (0x0002ea55) list_double_number_pane_vc_t

0x5b49,	// (0x00024b4a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5b49,	// (0x00024b4a) list_double_large_graphic_pane_vc_g1

0x5b5a,	// (0x00024b5b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5b5a,	// (0x00024b5b) list_double_large_graphic_pane_vc_g2

0x59fd,	// (0x000249fe) list_double_large_graphic_pane_vc_g3_ParamLimits

0x59fd,	// (0x000249fe) list_double_large_graphic_pane_vc_g3

0x5b69,	// (0x00024b6a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5b69,	// (0x00024b6a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5b,	// (0x0002ea5c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x0002ea5c) list_double_large_graphic_pane_vc_g

0x5b75,	// (0x00024b76) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5b75,	// (0x00024b76) list_double_large_graphic_pane_vc_t1

0x5b8e,	// (0x00024b8f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5b8e,	// (0x00024b8f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x0002ea65) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x0002ea65) list_double_large_graphic_pane_vc_t

0x56e9,	// (0x000246ea) list_double_heading_pane_vc_g1_ParamLimits

0x56e9,	// (0x000246ea) list_double_heading_pane_vc_g1

0x56f5,	// (0x000246f6) list_double_heading_pane_vc_g2_ParamLimits

0x56f5,	// (0x000246f6) list_double_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0002e7e1) list_double_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0002e7e1) list_double_heading_pane_vc_g

0x5ba5,	// (0x00024ba6) list_double_heading_pane_vc_t1_ParamLimits

0x5ba5,	// (0x00024ba6) list_double_heading_pane_vc_t1

0x5783,	// (0x00024784) list_double_heading_pane_vc_t2_ParamLimits

0x5783,	// (0x00024784) list_double_heading_pane_vc_t2

0x0001,

0xfa69,	// (0x0002ea6a) list_double_heading_pane_vc_t_ParamLimits

0xfa69,	// (0x0002ea6a) list_double_heading_pane_vc_t

0x5bb7,	// (0x00024bb8) list_double_graphic_pane_vc_g1_ParamLimits

0x5bb7,	// (0x00024bb8) list_double_graphic_pane_vc_g1

0x5bc7,	// (0x00024bc8) list_double_graphic_pane_vc_g2_ParamLimits

0x5bc7,	// (0x00024bc8) list_double_graphic_pane_vc_g2

0x5bd6,	// (0x00024bd7) list_double_graphic_pane_vc_g3_ParamLimits

0x5bd6,	// (0x00024bd7) list_double_graphic_pane_vc_g3

0x0002,

0xfa6e,	// (0x0002ea6f) list_double_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x0002ea6f) list_double_graphic_pane_vc_g

0x5be2,	// (0x00024be3) list_double_graphic_pane_vc_t1_ParamLimits

0x5be2,	// (0x00024be3) list_double_graphic_pane_vc_t1

0x5bf6,	// (0x00024bf7) list_double_graphic_pane_vc_t2_ParamLimits

0x5bf6,	// (0x00024bf7) list_double_graphic_pane_vc_t2

0x0001,

0xfa75,	// (0x0002ea76) list_double_graphic_pane_vc_t_ParamLimits

0xfa75,	// (0x0002ea76) list_double_graphic_pane_vc_t

0x6039,	// (0x0002503a) aid_size_cell_fastswap

0x6041,	// (0x00025042) aid_size_cell_touch_ParamLimits

0x6041,	// (0x00025042) aid_size_cell_touch

0x62a2,	// (0x000252a3) popup_fast_swap_wide_window_ParamLimits

0x62a2,	// (0x000252a3) popup_fast_swap_wide_window

0x63b8,	// (0x000253b9) touch_pane_ParamLimits

0x63b8,	// (0x000253b9) touch_pane

0x2b7d,	// (0x00021b7e) button_value_adjust_pane_cp2

0x53d4,	// (0x000243d5) button_value_adjust_pane_cp4

0x53fa,	// (0x000243fb) form_field_data_pane_cp2

0x541d,	// (0x0002441e) form_field_data_wide_pane_cp2

0x2fd7,	// (0x00021fd8) bg_scroll_pane_ParamLimits

0x6a50,	// (0x00025a51) scroll_handle_pane_ParamLimits

0x6a64,	// (0x00025a65) scroll_sc2_down_pane_ParamLimits

0x6a64,	// (0x00025a65) scroll_sc2_down_pane

0x3008,	// (0x00022009) scroll_sc2_up_pane_ParamLimits

0x3008,	// (0x00022009) scroll_sc2_up_pane

0xb775,	// (0x0002a776) grid_wheel_folder_pane_g1_ParamLimits

0xb775,	// (0x0002a776) grid_wheel_folder_pane_g1

0x6f02,	// (0x00025f03) clock_nsta_pane_cp2_ParamLimits

0x6f02,	// (0x00025f03) clock_nsta_pane_cp2

0x680c,	// (0x0002580d) listscroll_midp_pane_ParamLimits

0x72bb,	// (0x000262bc) midp_canvas_pane

0x779c,	// (0x0002679d) nsta_clock_indic_pane

0x77f2,	// (0x000267f3) listscroll_form_pane_vc

0x780e,	// (0x0002680f) listscroll_set_pane_vc_ParamLimits

0x780e,	// (0x0002680f) listscroll_set_pane_vc

0x7f2a,	// (0x00026f2b) clock_nsta_pane

0x7fa7,	// (0x00026fa8) indicator_nsta_pane

0x829f,	// (0x000272a0) bg_popup_sub_pane_cp2_ParamLimits

0x82b3,	// (0x000272b4) find_pane_cp2_ParamLimits

0x82b3,	// (0x000272b4) find_pane_cp2

0x82c9,	// (0x000272ca) grid_toobar_pane_ParamLimits

0x956e,	// (0x0002856f) list_form_gen_pane_vc_ParamLimits

0x956e,	// (0x0002856f) list_form_gen_pane_vc

0x9584,	// (0x00028585) scroll_pane_cp8_vc_ParamLimits

0x9584,	// (0x00028585) scroll_pane_cp8_vc

0x9600,	// (0x00028601) data_form_wide_pane_vc_ParamLimits

0x9600,	// (0x00028601) data_form_wide_pane_vc

0x960c,	// (0x0002860d) form_field_data_wide_pane_vc_g1

0x9614,	// (0x00028615) form_field_data_wide_pane_vc_t1_ParamLimits

0x9614,	// (0x00028615) form_field_data_wide_pane_vc_t1

0x2be8,	// (0x00021be9) input_focus_pane_cp6_vc_ParamLimits

0x2be8,	// (0x00021be9) input_focus_pane_cp6_vc

0x9916,	// (0x00028917) list_midp_pane_ParamLimits

0x9922,	// (0x00028923) scroll_pane_cp16_ParamLimits

0x9922,	// (0x00028923) scroll_pane_cp16

0x9970,	// (0x00028971) button_value_adjust_pane_ParamLimits

0x9970,	// (0x00028971) button_value_adjust_pane

0xa941,	// (0x00029942) button_value_adjust_pane_cp6_ParamLimits

0xa941,	// (0x00029942) button_value_adjust_pane_cp6

0xaa8f,	// (0x00029a90) settings_code_pane_cp_ParamLimits

0xaa8f,	// (0x00029a90) settings_code_pane_cp

0x09ff,	// (0x0001fa00) cell_touch_pane_g1

0x09ff,	// (0x0001fa00) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0002e705) cell_touch_pane_g

0xb068,	// (0x0002a069) cell_touch_pane_cp_ParamLimits

0xb068,	// (0x0002a069) cell_touch_pane_cp

0xb078,	// (0x0002a079) cell_touch_pane_ParamLimits

0xb078,	// (0x0002a079) cell_touch_pane

0x09ff,	// (0x0001fa00) scroll_sc2_down_pane_g1

0x09ff,	// (0x0001fa00) scroll_sc2_up_pane_g1

0x0a09,	// (0x0001fa0a) bg_set_opt_pane_cp4_vc

0xb089,	// (0x0002a08a) list_set_graphic_pane_vc_g1_ParamLimits

0xb089,	// (0x0002a08a) list_set_graphic_pane_vc_g1

0x31be,	// (0x000221bf) list_set_graphic_pane_vc_g2_ParamLimits

0x31be,	// (0x000221bf) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x0002ea01) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x0002ea01) list_set_graphic_pane_vc_g

0xb095,	// (0x0002a096) text_primary_small_cp13_vc_ParamLimits

0xb095,	// (0x0002a096) text_primary_small_cp13_vc

0xb0ad,	// (0x0002a0ae) list_set_graphic_pane_vc_ParamLimits

0xb0ad,	// (0x0002a0ae) list_set_graphic_pane_vc

0x0a09,	// (0x0001fa0a) input_focus_pane_cp2_vc

0x09ff,	// (0x0001fa00) setting_code_pane_vc_g1

0x254a,	// (0x0002154b) setting_code_pane_vc_t1

0xb0c2,	// (0x0002a0c3) set_text_pane_vc_t1_ParamLimits

0xb0c2,	// (0x0002a0c3) set_text_pane_vc_t1

0x0a09,	// (0x0001fa0a) input_focus_pane_cp1_vc

0xb0e0,	// (0x0002a0e1) list_set_text_pane_vc

0x09ff,	// (0x0001fa00) setting_text_pane_vc_g1

0x0a09,	// (0x0001fa0a) bg_set_opt_pane_cp2_vc

0x2541,	// (0x00021542) setting_slider_graphic_pane_vc_g1

0xb0ea,	// (0x0002a0eb) setting_slider_graphic_pane_vc_t1

0xb0fc,	// (0x0002a0fd) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0002ea06) setting_slider_graphic_pane_vc_t

0xb10e,	// (0x0002a10f) slider_set_pane_cp_vc

0xb118,	// (0x0002a119) slider_set_pane_vc_g1

0xb121,	// (0x0002a122) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0002ea0b) slider_set_pane_vc_g

0x2cb1,	// (0x00021cb2) set_opt_bg_pane_g1_copy1

0x2cb9,	// (0x00021cba) set_opt_bg_pane_g2_copy1

0xb14d,	// (0x0002a14e) set_opt_bg_pane_g3_copy1

0x2cc9,	// (0x00021cca) set_opt_bg_pane_g4_copy1

0x2cd1,	// (0x00021cd2) set_opt_bg_pane_g5_copy1

0x2cd9,	// (0x00021cda) set_opt_bg_pane_g6_copy1

0xb157,	// (0x0002a158) set_opt_bg_pane_g7_copy1

0xb161,	// (0x0002a162) set_opt_bg_pane_g8_copy1

0xb16b,	// (0x0002a16c) set_opt_bg_pane_g9_copy1

0x0a09,	// (0x0001fa0a) bg_set_opt_pane_cp_vc

0xb175,	// (0x0002a176) setting_slider_pane_vc_t1

0xb184,	// (0x0002a185) setting_slider_pane_vc_t2

0xb196,	// (0x0002a197) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0002ea1a) setting_slider_pane_vc_t

0xb1a8,	// (0x0002a1a9) slider_set_pane_vc

0x843a,	// (0x0002743b) volume_set_pane_vc_g1

0x8443,	// (0x00027444) volume_set_pane_vc_g2

0x844c,	// (0x0002744d) volume_set_pane_vc_g3

0x8455,	// (0x00027456) volume_set_pane_vc_g4

0x845e,	// (0x0002745f) volume_set_pane_vc_g5

0x8467,	// (0x00027468) volume_set_pane_vc_g6

0x8470,	// (0x00027471) volume_set_pane_vc_g7

0x8479,	// (0x0002747a) volume_set_pane_vc_g8

0x8482,	// (0x00027483) volume_set_pane_vc_g9

0x848b,	// (0x0002748c) volume_set_pane_vc_g10

0x0009,

0xf8b7,	// (0x0002e8b8) volume_set_pane_vc_g

0xb1b2,	// (0x0002a1b3) volume_set_pane_vc

0xb1bc,	// (0x0002a1bd) button_value_adjust_pane_cp1_vc

0xb1c6,	// (0x0002a1c7) list_highlight_pane_cp2_vc

0xb1cf,	// (0x0002a1d0) list_set_pane_vc_ParamLimits

0xb1cf,	// (0x0002a1d0) list_set_pane_vc

0xb23f,	// (0x0002a240) main_pane_set_vc_t1_ParamLimits

0xb23f,	// (0x0002a240) main_pane_set_vc_t1

0xb254,	// (0x0002a255) main_pane_set_vc_t2_ParamLimits

0xb254,	// (0x0002a255) main_pane_set_vc_t2

0xb266,	// (0x0002a267) main_pane_set_vc_t3_ParamLimits

0xb266,	// (0x0002a267) main_pane_set_vc_t3

0xb27a,	// (0x0002a27b) main_pane_set_vc_t4_ParamLimits

0xb27a,	// (0x0002a27b) main_pane_set_vc_t4

0x0003,

0xfa20,	// (0x0002ea21) main_pane_set_vc_t_ParamLimits

0xfa20,	// (0x0002ea21) main_pane_set_vc_t

0xb28e,	// (0x0002a28f) setting_code_pane_vc_ParamLimits

0xb28e,	// (0x0002a28f) setting_code_pane_vc

0xb29f,	// (0x0002a2a0) setting_slider_graphic_pane_vc

0xb29f,	// (0x0002a2a0) setting_slider_pane_vc

0xb29f,	// (0x0002a2a0) setting_text_pane_vc

0xb29f,	// (0x0002a2a0) setting_volume_pane_vc

0xb2a9,	// (0x0002a2aa) scroll_pane_cp121_vc

0x2b6b,	// (0x00021b6c) set_content_pane_vc

0xb2b1,	// (0x0002a2b2) button_value_adjust_pane_g1

0xb2ba,	// (0x0002a2bb) button_value_adjust_pane_g2

0x0001,

0xfa7a,	// (0x0002ea7b) button_value_adjust_pane_g

0xb2c3,	// (0x0002a2c4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb2c3,	// (0x0002a2c4) form_field_slider_wide_pane_vc_t1

0xb2d5,	// (0x0002a2d6) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb2d5,	// (0x0002a2d6) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7f,	// (0x0002ea80) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0002ea80) form_field_slider_wide_pane_vc_t

0x0a63,	// (0x0001fa64) input_focus_pane_cp10_vc_ParamLimits

0x0a63,	// (0x0001fa64) input_focus_pane_cp10_vc

0xb301,	// (0x0002a302) slider_cont_pane_cp1_vc_ParamLimits

0xb301,	// (0x0002a302) slider_cont_pane_cp1_vc

0xb313,	// (0x0002a314) slider_form_pane_g1_cp2

0xb121,	// (0x0002a122) slider_form_pane_g2_cp2

0xb340,	// (0x0002a341) form_field_slider_pane_vc_t3

0xb34e,	// (0x0002a34f) form_field_slider_pane_vc_t4

0xb35c,	// (0x0002a35d) slider_form_pane_vc_ParamLimits

0xb35c,	// (0x0002a35d) slider_form_pane_vc

0xb369,	// (0x0002a36a) form_field_slider_pane_vc_t1_ParamLimits

0xb369,	// (0x0002a36a) form_field_slider_pane_vc_t1

0xb2d5,	// (0x0002a2d6) form_field_slider_pane_vc_t2_ParamLimits

0xb2d5,	// (0x0002a2d6) form_field_slider_pane_vc_t2

0x0001,

0xfa91,	// (0x0002ea92) form_field_slider_pane_vc_t_ParamLimits

0xfa91,	// (0x0002ea92) form_field_slider_pane_vc_t

0x0a63,	// (0x0001fa64) input_focus_pane_cp9_vc_ParamLimits

0x0a63,	// (0x0001fa64) input_focus_pane_cp9_vc

0xb37f,	// (0x0002a380) slider_cont_pane_vc_ParamLimits

0xb37f,	// (0x0002a380) slider_cont_pane_vc

0xb393,	// (0x0002a394) list_form_graphic_pane_cp_vc_ParamLimits

0xb393,	// (0x0002a394) list_form_graphic_pane_cp_vc

0x960c,	// (0x0002860d) form_field_popup_wide_pane_vc_g1

0xb3a8,	// (0x0002a3a9) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb3a8,	// (0x0002a3a9) form_field_popup_wide_pane_vc_t1

0x2be8,	// (0x00021be9) input_focus_pane_cp8_vc_ParamLimits

0x2be8,	// (0x00021be9) input_focus_pane_cp8_vc

0xb3ed,	// (0x0002a3ee) list_form_wide_pane_vc_ParamLimits

0xb3ed,	// (0x0002a3ee) list_form_wide_pane_vc

0xb3f9,	// (0x0002a3fa) list_form_graphic_pane_vc_g1

0xb401,	// (0x0002a402) list_form_graphic_pane_vc_t1_ParamLimits

0xb401,	// (0x0002a402) list_form_graphic_pane_vc_t1

0x2533,	// (0x00021534) list_highlight_pane_cp5_vc_ParamLimits

0x2533,	// (0x00021534) list_highlight_pane_cp5_vc

0xb41d,	// (0x0002a41e) list_form_graphic_pane_vc_ParamLimits

0xb41d,	// (0x0002a41e) list_form_graphic_pane_vc

0x960c,	// (0x0002860d) form_field_popup_pane_vc_g1

0xb433,	// (0x0002a434) form_field_popup_pane_vc_t1_ParamLimits

0xb433,	// (0x0002a434) form_field_popup_pane_vc_t1

0x2be8,	// (0x00021be9) input_focus_pane_cp7_vc_ParamLimits

0x2be8,	// (0x00021be9) input_focus_pane_cp7_vc

0xb44a,	// (0x0002a44b) list_form_pane_vc_ParamLimits

0xb44a,	// (0x0002a44b) list_form_pane_vc

0xb456,	// (0x0002a457) data_form_pane_vc_t1_ParamLimits

0xb456,	// (0x0002a457) data_form_pane_vc_t1

0x2cb1,	// (0x00021cb2) input_focus_pane_vc_g1

0x2cb9,	// (0x00021cba) input_focus_pane_vc_g2

0x2cc1,	// (0x00021cc2) input_focus_pane_vc_g3

0x2cc9,	// (0x00021cca) input_focus_pane_vc_g4

0x2cd1,	// (0x00021cd2) input_focus_pane_vc_g5

0x2cd9,	// (0x00021cda) input_focus_pane_vc_g6

0x2ce1,	// (0x00021ce2) input_focus_pane_vc_g7

0x2ce9,	// (0x00021cea) input_focus_pane_vc_g8

0x2cf1,	// (0x00021cf2) input_focus_pane_vc_g9

0x09ff,	// (0x0001fa00) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0002e68e) input_focus_pane_vc_g

0x9600,	// (0x00028601) data_form_pane_vc_ParamLimits

0x9600,	// (0x00028601) data_form_pane_vc

0x960c,	// (0x0002860d) form_field_data_pane_vc_g1

0xb473,	// (0x0002a474) form_field_data_pane_vc_t1_ParamLimits

0xb473,	// (0x0002a474) form_field_data_pane_vc_t1

0x2be8,	// (0x00021be9) input_focus_pane_vc_ParamLimits

0x2be8,	// (0x00021be9) input_focus_pane_vc

0xb48d,	// (0x0002a48e) button_value_adjust_pane_cp3_vc

0xb495,	// (0x0002a496) button_value_adjust_pane_cp5_vc

0xb49d,	// (0x0002a49e) form_field_data_pane_vc_ParamLimits

0xb49d,	// (0x0002a49e) form_field_data_pane_vc

0xb4b8,	// (0x0002a4b9) form_field_data_pane_vc_cp2

0xb4c0,	// (0x0002a4c1) form_field_data_wide_pane_vc_ParamLimits

0xb4c0,	// (0x0002a4c1) form_field_data_wide_pane_vc

0xb4da,	// (0x0002a4db) form_field_data_wide_pane_vc_cp2

0xb4e2,	// (0x0002a4e3) form_field_popup_pane_vc_ParamLimits

0xb4e2,	// (0x0002a4e3) form_field_popup_pane_vc

0xb4fd,	// (0x0002a4fe) form_field_popup_wide_pane_vc_ParamLimits

0xb4fd,	// (0x0002a4fe) form_field_popup_wide_pane_vc

0xb517,	// (0x0002a518) form_field_slider_pane_vc_ParamLimits

0xb517,	// (0x0002a518) form_field_slider_pane_vc

0xb52a,	// (0x0002a52b) form_field_slider_wide_pane_vc_ParamLimits

0xb52a,	// (0x0002a52b) form_field_slider_wide_pane_vc

0xb53d,	// (0x0002a53e) grid_touch_1_pane_ParamLimits

0xb53d,	// (0x0002a53e) grid_touch_1_pane

0xb549,	// (0x0002a54a) grid_touch_2_pane_ParamLimits

0xb549,	// (0x0002a54a) grid_touch_2_pane

0x766b,	// (0x0002666c) touch_pane_g1_ParamLimits

0x766b,	// (0x0002666c) touch_pane_g1

0xb563,	// (0x0002a564) cell_app_pane_cp_wide_ParamLimits

0xb563,	// (0x0002a564) cell_app_pane_cp_wide

0xb574,	// (0x0002a575) grid_popup_fast_wide_pane_ParamLimits

0xb574,	// (0x0002a575) grid_popup_fast_wide_pane

0xb588,	// (0x0002a589) scroll_pane_cp19_ParamLimits

0xb588,	// (0x0002a589) scroll_pane_cp19

0x0a09,	// (0x0001fa0a) bg_popup_window_pane_cp20

0xb59c,	// (0x0002a59d) listscroll_popup_fast_wide_pane

0x2533,	// (0x00021534) grid_indicator_nsta_pane

0xb5a4,	// (0x0002a5a5) clock_nsta_pane_g1

0xb5ad,	// (0x0002a5ae) clock_nsta_pane_t1

0xb5c9,	// (0x0002a5ca) cell_indicator_nsta_pane_ParamLimits

0xb5c9,	// (0x0002a5ca) cell_indicator_nsta_pane

0xb601,	// (0x0002a602) cell_indicator_nsta_pane_g1

0xb60f,	// (0x0002a610) cell_indicator_nsta_pane_g2

0x0001,

0xfaa2,	// (0x0002eaa3) cell_indicator_nsta_pane_g

0xb625,	// (0x0002a626) clock_nsta_pane_cp

0xb62d,	// (0x0002a62e) indicator_nsta_pane_cp

0xb636,	// (0x0002a637) nsta_clock_indic_pane_g1

0x2589,	// (0x0002158a) grid_indicator_pane

0x30fa,	// (0x000220fb) scroll_pane_cp29

0x6e2c,	// (0x00025e2d) indicator_nsta_pane_cp2_ParamLimits

0x6e2c,	// (0x00025e2d) indicator_nsta_pane_cp2

0x2533,	// (0x00021534) main_apps_wheel_pane

0x97f3,	// (0x000287f4) form_midp_field_text_pane_ParamLimits

0x9942,	// (0x00028943) scroll_bar_cp050_ParamLimits

0xb69f,	// (0x0002a6a0) cell_indicator_pane_ParamLimits

0xb69f,	// (0x0002a6a0) cell_indicator_pane

0xb6b7,	// (0x0002a6b8) cell_indicator_pane_g1

0xb6c1,	// (0x0002a6c2) grid_wheel_folder_pane_ParamLimits

0xb6c1,	// (0x0002a6c2) grid_wheel_folder_pane

0xb6d5,	// (0x0002a6d6) list_wheel_apps_pane_ParamLimits

0xb6d5,	// (0x0002a6d6) list_wheel_apps_pane

0xb6e8,	// (0x0002a6e9) main_apps_wheel_pane_g1_ParamLimits

0xb6e8,	// (0x0002a6e9) main_apps_wheel_pane_g1

0xb704,	// (0x0002a705) main_apps_wheel_pane_g2_ParamLimits

0xb704,	// (0x0002a705) main_apps_wheel_pane_g2

0x0001,

0xfabe,	// (0x0002eabf) main_apps_wheel_pane_g_ParamLimits

0xfabe,	// (0x0002eabf) main_apps_wheel_pane_g

0xb720,	// (0x0002a721) main_apps_wheel_pane_t1_ParamLimits

0xb720,	// (0x0002a721) main_apps_wheel_pane_t1

0xb749,	// (0x0002a74a) list_wheel_apps_pane_g1

0xb751,	// (0x0002a752) list_wheel_apps_pane_g2

0xb759,	// (0x0002a75a) list_wheel_apps_pane_g3

0xb761,	// (0x0002a762) list_wheel_apps_pane_g4

0xb76b,	// (0x0002a76c) list_wheel_apps_pane_g5

0x0004,

0xfac3,	// (0x0002eac4) list_wheel_apps_pane_g

0x712f,	// (0x00026130) navi_icon_text_pane

0x7e57,	// (0x00026e58) aid_fill_nsta

0xb78c,	// (0x0002a78d) navi_icon_text_pane_g1

0xb798,	// (0x0002a799) navi_icon_text_pane_t1

0x6fc5,	// (0x00025fc6) list_set_graphic_pane_t1_ParamLimits

0x6fc5,	// (0x00025fc6) list_set_graphic_pane_t1

0xa093,	// (0x00029094) popup_midp_note_alarm_window_t6_ParamLimits

0xa093,	// (0x00029094) popup_midp_note_alarm_window_t6

0xa0a5,	// (0x000290a6) popup_midp_note_alarm_window_t7_ParamLimits

0xa0a5,	// (0x000290a6) popup_midp_note_alarm_window_t7

0xa0b7,	// (0x000290b8) popup_midp_note_alarm_window_t8_ParamLimits

0xa0b7,	// (0x000290b8) popup_midp_note_alarm_window_t8

0xa0c9,	// (0x000290ca) popup_midp_note_alarm_window_t9_ParamLimits

0xa0c9,	// (0x000290ca) popup_midp_note_alarm_window_t9

0xa0db,	// (0x000290dc) popup_midp_note_alarm_window_t10_ParamLimits

0xa0db,	// (0x000290dc) popup_midp_note_alarm_window_t10

0xa0ed,	// (0x000290ee) popup_midp_note_alarm_window_t11_ParamLimits

0xa0ed,	// (0x000290ee) popup_midp_note_alarm_window_t11

0xa0ff,	// (0x00029100) scroll_pane_cp17_ParamLimits

0xa0ff,	// (0x00029100) scroll_pane_cp17

0x843a,	// (0x0002743b) volume_small_pane_cp_g1

0x8709,	// (0x0002770a) volume_small_pane_cp_g2

0x8712,	// (0x00027713) volume_small_pane_cp_g3

0x871b,	// (0x0002771c) volume_small_pane_cp_g4

0x8724,	// (0x00027725) volume_small_pane_cp_g5

0x872d,	// (0x0002772e) volume_small_pane_cp_g6

0x8736,	// (0x00027737) volume_small_pane_cp_g7

0x873f,	// (0x00027740) volume_small_pane_cp_g8

0x8748,	// (0x00027749) volume_small_pane_cp_g9

0x8751,	// (0x00027752) volume_small_pane_cp_g10

0x7384,	// (0x00026385) midp_ticker_pane_g1_ParamLimits

0x7390,	// (0x00026391) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0002e75a) midp_ticker_pane_g_ParamLimits

0x739c,	// (0x0002639d) midp_ticker_pane_t1_ParamLimits

0x7e6d,	// (0x00026e6e) aid_fill_nsta_2

0x992e,	// (0x0002892f) list_form2_midp_pane

0xaad6,	// (0x00029ad7) midp_editing_number_pane_ParamLimits

0xaae5,	// (0x00029ae6) midp_ticker_pane_ParamLimits

0xb7aa,	// (0x0002a7ab) form2_midp_field_pane

0xb7ce,	// (0x0002a7cf) scroll_pane_cp51

0xb7ee,	// (0x0002a7ef) form2_midp_button_pane_ParamLimits

0xb7ee,	// (0x0002a7ef) form2_midp_button_pane

0xb800,	// (0x0002a801) form2_midp_content_pane_ParamLimits

0xb800,	// (0x0002a801) form2_midp_content_pane

0xb81a,	// (0x0002a81b) form2_midp_field_choice_group_pane

0xb822,	// (0x0002a823) form2_midp_field_pane_g1

0xb82a,	// (0x0002a82b) form2_midp_field_pane_g2

0xb832,	// (0x0002a833) form2_midp_field_pane_g3

0xb83a,	// (0x0002a83b) form2_midp_field_pane_g4

0x0003,

0xfae8,	// (0x0002eae9) form2_midp_field_pane_g

0xb842,	// (0x0002a843) form2_midp_gauge_slider_pane

0xb84a,	// (0x0002a84b) form2_midp_gauge_wait_pane

0xb852,	// (0x0002a853) form2_midp_image_pane_ParamLimits

0xb852,	// (0x0002a853) form2_midp_image_pane

0xb86d,	// (0x0002a86e) form2_midp_label_pane_ParamLimits

0xb86d,	// (0x0002a86e) form2_midp_label_pane

0xb88c,	// (0x0002a88d) form2_midp_label_pane_cp_ParamLimits

0xb88c,	// (0x0002a88d) form2_midp_label_pane_cp

0xb8ad,	// (0x0002a8ae) form2_midp_string_pane_ParamLimits

0xb8ad,	// (0x0002a8ae) form2_midp_string_pane

0x5c0c,	// (0x00024c0d) form2_midp_text_pane_ParamLimits

0x5c0c,	// (0x00024c0d) form2_midp_text_pane

0xb8bf,	// (0x0002a8c0) form2_midp_time_pane

0xb8cf,	// (0x0002a8d0) input_focus_pane_cp51_ParamLimits

0xb8cf,	// (0x0002a8d0) input_focus_pane_cp51

0xb8e7,	// (0x0002a8e8) form2_midp_label_pane_t1_ParamLimits

0xb8e7,	// (0x0002a8e8) form2_midp_label_pane_t1

0x5c2d,	// (0x00024c2e) form2_mdip_text_pane_t1_ParamLimits

0x5c2d,	// (0x00024c2e) form2_mdip_text_pane_t1

0x5c51,	// (0x00024c52) form2_midp_time_pane_t1

0xb935,	// (0x0002a936) form2_midp_gauge_slider_pane_t1

0xb947,	// (0x0002a948) form2_midp_gauge_slider_pane_t2

0xb959,	// (0x0002a95a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf1,	// (0x0002eaf2) form2_midp_gauge_slider_pane_t

0xb96b,	// (0x0002a96c) form2_midp_slider_pane

0xb977,	// (0x0002a978) form2_midp_gauge_wait_pane_t1

0xb985,	// (0x0002a986) form2_midp_wait_pane_ParamLimits

0xb985,	// (0x0002a986) form2_midp_wait_pane

0x9653,	// (0x00028654) list_single_2graphic_pane_cp4_ParamLimits

0x9653,	// (0x00028654) list_single_2graphic_pane_cp4

0xb9b0,	// (0x0002a9b1) list_single_midp_graphic_pane_cp_ParamLimits

0xb9b0,	// (0x0002a9b1) list_single_midp_graphic_pane_cp

0x0a09,	// (0x0001fa0a) list_highlight_pane_cp20

0xb9d4,	// (0x0002a9d5) list_single_2graphic_pane_g1_cp4

0xaf6b,	// (0x00029f6c) list_single_2graphic_pane_g2_cp4

0xb9dc,	// (0x0002a9dd) list_single_2graphic_pane_t1_cp4

0x2533,	// (0x00021534) list_highlight_pane_cp21

0xb9eb,	// (0x0002a9ec) list_single_midp_graphic_pane_g4_cp

0xb9fa,	// (0x0002a9fb) list_single_midp_graphic_pane_t1_cp

0xba0f,	// (0x0002aa10) form2_mdip_string_pane_t1_ParamLimits

0xba0f,	// (0x0002aa10) form2_mdip_string_pane_t1

0x0a09,	// (0x0001fa0a) bg_wml_button_pane_cp2

0x09ff,	// (0x0001fa00) form2_midp_image_pane_g1

0x5196,	// (0x00024197) list_double_large_graphic_pane_g5_ParamLimits

0x5196,	// (0x00024197) list_double_large_graphic_pane_g5

0x680c,	// (0x0002580d) midp_form_pane_ParamLimits

0x2533,	// (0x00021534) main_apps_wheel_pane_ParamLimits

0x7c01,	// (0x00026c02) popup_preview_window_ParamLimits

0x7c01,	// (0x00026c02) popup_preview_window

0x7de8,	// (0x00026de9) popup_touch_info_window_ParamLimits

0x7de8,	// (0x00026de9) popup_touch_info_window

0x7e0a,	// (0x00026e0b) popup_touch_menu_window_ParamLimits

0x7e0a,	// (0x00026e0b) popup_touch_menu_window

0x09f5,	// (0x0001f9f6) bg_popup_sub_pane_cp6

0xbab4,	// (0x0002aab5) list_touch_menu_pane

0xbabc,	// (0x0002aabd) list_single_touch_menu_pane_ParamLimits

0xbabc,	// (0x0002aabd) list_single_touch_menu_pane

0xbad4,	// (0x0002aad5) list_single_touch_menu_pane_t1

0x2533,	// (0x00021534) bg_popup_sub_pane_cp7_ParamLimits

0x2533,	// (0x00021534) bg_popup_sub_pane_cp7

0xbae2,	// (0x0002aae3) heading_sub_pane

0xbaea,	// (0x0002aaeb) list_touch_info_pane_ParamLimits

0xbaea,	// (0x0002aaeb) list_touch_info_pane

0xbaf9,	// (0x0002aafa) list_single_touch_info_pane_ParamLimits

0xbaf9,	// (0x0002aafa) list_single_touch_info_pane

0xbb0b,	// (0x0002ab0c) list_single_touch_info_pane_t1

0xbb19,	// (0x0002ab1a) list_single_touch_info_pane_t2

0x0001,

0xfaff,	// (0x0002eb00) list_single_touch_info_pane_t

0x72b3,	// (0x000262b4) bg_popup_heading_pane_cp

0xbb27,	// (0x0002ab28) heading_sub_pane_t1

0x959a,	// (0x0002859b) bg_popup_preview_window_pane_cp_ParamLimits

0x959a,	// (0x0002859b) bg_popup_preview_window_pane_cp

0xbae2,	// (0x0002aae3) heading_preview_pane

0xbaea,	// (0x0002aaeb) list_preview_pane_ParamLimits

0xbaea,	// (0x0002aaeb) list_preview_pane

0xbb35,	// (0x0002ab36) popup_preview_window_g1

0xbaf9,	// (0x0002aafa) list_single_preview_pane_ParamLimits

0xbaf9,	// (0x0002aafa) list_single_preview_pane

0xbb3d,	// (0x0002ab3e) list_single_preview_pane_g1

0xbb45,	// (0x0002ab46) list_single_preview_pane_t1

0xbb0b,	// (0x0002ab0c) list_single_preview_pane_t2

0x0001,

0xfb04,	// (0x0002eb05) list_single_preview_pane_t

0xbb53,	// (0x0002ab54) bg_popup_heading_pane_cp2_ParamLimits

0xbb53,	// (0x0002ab54) bg_popup_heading_pane_cp2

0xbb69,	// (0x0002ab6a) heading_preview_pane_g1

0xbb71,	// (0x0002ab72) heading_preview_pane_t1_ParamLimits

0xbb71,	// (0x0002ab72) heading_preview_pane_t1

0x25a0,	// (0x000215a1) soft_indicator_pane_t1_ParamLimits

0x2ad5,	// (0x00021ad6) scroll_pane_ParamLimits

0x2fff,	// (0x00022000) scroll_sc2_left_pane

0x2ff6,	// (0x00021ff7) scroll_sc2_right_pane

0x301e,	// (0x0002201f) scroll_bg_pane_g1_ParamLimits

0x3033,	// (0x00022034) scroll_bg_pane_g2_ParamLimits

0x304b,	// (0x0002204c) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0002e6e5) scroll_bg_pane_g_ParamLimits

0x301e,	// (0x0002201f) scroll_handle_pane_g1_ParamLimits

0x306d,	// (0x0002206e) scroll_handle_pane_g2_ParamLimits

0x304b,	// (0x0002204c) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0002e6ec) scroll_handle_pane_g_ParamLimits

0x7848,	// (0x00026849) popup_choice_list_window_ParamLimits

0x7848,	// (0x00026849) popup_choice_list_window

0x82ab,	// (0x000272ac) choice_list_pane

0x94f2,	// (0x000284f3) cell_toolbar_pane_t1

0x951a,	// (0x0002851b) toolbar_button_pane_ParamLimits

0xa5c9,	// (0x000295ca) ai_gene_pane_1_t2_ParamLimits

0xa5c9,	// (0x000295ca) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0002e914) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0002e914) ai_gene_pane_1_t

0xbb8e,	// (0x0002ab8f) scroll_sc2_left_pane_g1

0xbb8e,	// (0x0002ab8f) scroll_sc2_right_pane_g1

0x7820,	// (0x00026821) bg_popup_sub_pane_cp10

0xbb98,	// (0x0002ab99) list_choice_list_pane

0xbbb1,	// (0x0002abb2) list_single_choice_list_pane_ParamLimits

0xbbb1,	// (0x0002abb2) list_single_choice_list_pane

0xbbc9,	// (0x0002abca) list_single_choice_list_pane_g1

0x2dd6,	// (0x00021dd7) list_single_choice_list_pane_t1_ParamLimits

0x2dd6,	// (0x00021dd7) list_single_choice_list_pane_t1

0xbbd1,	// (0x0002abd2) choice_list_pane_g1

0xbbd9,	// (0x0002abda) choice_list_pane_t1

0x09f5,	// (0x0001f9f6) input_focus_pane_cp11

0x2f54,	// (0x00021f55) title_pane_stacon_g2_ParamLimits

0x2f54,	// (0x00021f55) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0002e6cb) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002e6cb) title_pane_stacon_g

0x72b3,	// (0x000262b4) cursor_press_pane

0x7902,	// (0x00026903) popup_fep_hwr_window_ParamLimits

0x7902,	// (0x00026903) popup_fep_hwr_window

0x798c,	// (0x0002698d) popup_fep_vkb_window_ParamLimits

0x798c,	// (0x0002698d) popup_fep_vkb_window

0xbbe7,	// (0x0002abe8) cursor_press_pane_g1

0x0002,

0xfb2d,	// (0x0002eb2e) fep_vkb_side_pane_g_ParamLimits

0x8785,	// (0x00027786) fep_hwr_candidate_pane_ParamLimits

0x8785,	// (0x00027786) fep_hwr_candidate_pane

0x87af,	// (0x000277b0) fep_hwr_side_pane_ParamLimits

0x87af,	// (0x000277b0) fep_hwr_side_pane

0x87d1,	// (0x000277d2) fep_hwr_top_pane_ParamLimits

0x87d1,	// (0x000277d2) fep_hwr_top_pane

0x87e9,	// (0x000277ea) fep_hwr_write_pane_ParamLimits

0x87e9,	// (0x000277ea) fep_hwr_write_pane

0xfb2d,	// (0x0002eb2e) fep_vkb_side_pane_g

0xbbef,	// (0x0002abf0) fep_hwr_top_pane_g1

0xbc01,	// (0x0002ac02) fep_hwr_top_pane_g2

0x8815,	// (0x00027816) fep_hwr_top_pane_g3

0x0002,

0xfb09,	// (0x0002eb0a) fep_hwr_top_pane_g

0x882a,	// (0x0002782b) fep_hwr_top_text_pane

0x3167,	// (0x00022168) fep_hwr_top_text_pane_g1

0xbc37,	// (0x0002ac38) fep_hwr_top_text_pane_t1

0x8934,	// (0x00027935) fep_hwr_candidate_pane_g1

0xbe82,	// (0x0002ae83) fep_vkb_keypad_pane_g3_ParamLimits

0xbe82,	// (0x0002ae83) fep_vkb_keypad_pane_g3

0xbeae,	// (0x0002aeaf) fep_vkb_keypad_pane_g4_ParamLimits

0xbeae,	// (0x0002aeaf) fep_vkb_keypad_pane_g4

0xbf25,	// (0x0002af26) fep_vkb_bottom_pane_g2_ParamLimits

0xbf25,	// (0x0002af26) fep_vkb_bottom_pane_g2

0x0001,

0xfb34,	// (0x0002eb35) fep_vkb_bottom_pane_g_ParamLimits

0xfb34,	// (0x0002eb35) fep_vkb_bottom_pane_g

0xbb8e,	// (0x0002ab8f) cell_vkb_side_pane_g2

0x0001,

0xfb3e,	// (0x0002eb3f) cell_vkb_side_pane_g

0xbfb0,	// (0x0002afb1) cell_vkb_side_pane_t1

0xbfbe,	// (0x0002afbf) cell_vkb_side_pane_t1_copy1

0xbb8e,	// (0x0002ab8f) bg_fep_vkb_candidate_pane_g2

0xc102,	// (0x0002b103) cell_vkb_candidate_pane_ParamLimits

0xbc45,	// (0x0002ac46) aid_size_cell_vkb_ParamLimits

0xbc45,	// (0x0002ac46) aid_size_cell_vkb

0xc102,	// (0x0002b103) cell_vkb_candidate_pane

0x894e,	// (0x0002794f) bg_popup_fep_shadow_pane_g1

0xbcd7,	// (0x0002acd8) fep_vkb_bottom_pane_ParamLimits

0xbcd7,	// (0x0002acd8) fep_vkb_bottom_pane

0xbd14,	// (0x0002ad15) fep_vkb_candidate_pane_ParamLimits

0xbd14,	// (0x0002ad15) fep_vkb_candidate_pane

0xbd30,	// (0x0002ad31) fep_vkb_keypad_pane_ParamLimits

0xbd30,	// (0x0002ad31) fep_vkb_keypad_pane

0xbd63,	// (0x0002ad64) fep_vkb_side_pane_ParamLimits

0xbd63,	// (0x0002ad64) fep_vkb_side_pane

0xbd9f,	// (0x0002ada0) fep_vkb_top_pane_ParamLimits

0xbd9f,	// (0x0002ada0) fep_vkb_top_pane

0xbddb,	// (0x0002addc) fep_vkb_top_pane_g1_ParamLimits

0xbddb,	// (0x0002addc) fep_vkb_top_pane_g1

0xbdea,	// (0x0002adeb) fep_vkb_top_pane_g2_ParamLimits

0xbdea,	// (0x0002adeb) fep_vkb_top_pane_g2

0xbdf9,	// (0x0002adfa) fep_vkb_top_pane_g3_ParamLimits

0xbdf9,	// (0x0002adfa) fep_vkb_top_pane_g3

0x0003,

0xfb24,	// (0x0002eb25) fep_vkb_top_pane_g_ParamLimits

0xfb24,	// (0x0002eb25) fep_vkb_top_pane_g

0xbe17,	// (0x0002ae18) fep_vkb_top_text_pane_ParamLimits

0xbe17,	// (0x0002ae18) fep_vkb_top_text_pane

0xbe28,	// (0x0002ae29) fep_vkb_side_pane_g1_ParamLimits

0xbe28,	// (0x0002ae29) fep_vkb_side_pane_g1

0xbe71,	// (0x0002ae72) grid_vkb_side_pane_ParamLimits

0xbe71,	// (0x0002ae72) grid_vkb_side_pane

0x8956,	// (0x00027957) bg_popup_fep_shadow_pane_g2

0x895f,	// (0x00027960) bg_popup_fep_shadow_pane_g3

0x8967,	// (0x00027968) bg_popup_fep_shadow_pane_g4

0x8970,	// (0x00027971) bg_popup_fep_shadow_pane_g5

0x897a,	// (0x0002797b) bg_popup_fep_shadow_pane_g6

0x8982,	// (0x00027983) bg_popup_fep_shadow_pane_g7

0x2cd1,	// (0x00021cd2) bg_popup_fep_shadow_pane_g8

0xbed0,	// (0x0002aed1) grid_vkb_keypad_number_pane_ParamLimits

0xbed0,	// (0x0002aed1) grid_vkb_keypad_number_pane

0xbee4,	// (0x0002aee5) grid_vkb_keypad_pane_ParamLimits

0xbee4,	// (0x0002aee5) grid_vkb_keypad_pane

0xbf0a,	// (0x0002af0b) fep_vkb_bottom_pane_g1_ParamLimits

0xbf0a,	// (0x0002af0b) fep_vkb_bottom_pane_g1

0xbf33,	// (0x0002af34) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbf33,	// (0x0002af34) grid_vkb_keypad_bottom_left_pane

0xbf48,	// (0x0002af49) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbf48,	// (0x0002af49) grid_vkb_keypad_bottom_right_pane

0xbf5d,	// (0x0002af5e) fep_vkb_top_text_pane_g1

0xbf78,	// (0x0002af79) fep_vkb_top_text_pane_t1

0xbf8d,	// (0x0002af8e) cell_vkb_side_pane_ParamLimits

0xbf8d,	// (0x0002af8e) cell_vkb_side_pane

0xbb8e,	// (0x0002ab8f) cell_vkb_side_pane_g1

0xbfcc,	// (0x0002afcd) cell_vkb_keypad_pane_ParamLimits

0xbfcc,	// (0x0002afcd) cell_vkb_keypad_pane

0xc059,	// (0x0002b05a) cell_vkb_keypad_pane_g1

0x0008,

0xfb51,	// (0x0002eb52) bg_popup_fep_shadow_pane_g

0xbb8e,	// (0x0002ab8f) cell_hwr_side_pane_g1

0xbb8e,	// (0x0002ab8f) cell_hwr_side_pane_g2

0xc063,	// (0x0002b064) cell_vkb_keypad_pane_t1

0xc071,	// (0x0002b072) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc071,	// (0x0002b072) cell_vkb_keypad_bottom_left_pane

0xc08e,	// (0x0002b08f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc08e,	// (0x0002b08f) cell_vkb_keypad_bottom_right_pane

0xbb8e,	// (0x0002ab8f) cell_vkb_keypad_bottom_left_pane_g1

0xbb8e,	// (0x0002ab8f) cell_vkb_keypad_bottom_right_pane_g1

0xc0c7,	// (0x0002b0c8) cell_vkb_keypad_number_pane_ParamLimits

0xc0c7,	// (0x0002b0c8) cell_vkb_keypad_number_pane

0xc0e6,	// (0x0002b0e7) cell_vkb_keypad_number_pane_g1

0xc0f0,	// (0x0002b0f1) cell_vkb_keypad_number_pane_g2

0xc0f9,	// (0x0002b0fa) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb43,	// (0x0002eb44) cell_vkb_keypad_number_pane_g

0xc063,	// (0x0002b064) cell_vkb_keypad_number_pane_t1

0xc123,	// (0x0002b124) fep_vkb_candidate_pane_g1

0x0001,

0xfb3e,	// (0x0002eb3f) cell_hwr_side_pane_g

0xc13c,	// (0x0002b13d) cell_hwr_side_pane_t1

0x8994,	// (0x00027995) cell_hwr_side_pane_t1_copy1

0xbe09,	// (0x0002ae0a) cell_hwr_candidate_pane_g1

0x89a2,	// (0x000279a3) cell_hwr_candidate_pane_t1

0xbb8e,	// (0x0002ab8f) cell_vkb_candidate_pane_g2

0xc1c2,	// (0x0002b1c3) cell_vkb_candidate_pane_t1

0xf001,	// (0x0002e002) bg_popup_fep_shadow_pane_ParamLimits

0xf001,	// (0x0002e002) bg_popup_fep_shadow_pane

0x09c5,	// (0x0001f9c6) bg_fep_hwr_top_pane_g4

0xbc13,	// (0x0002ac14) bg_hwr_side_pane_g1_ParamLimits

0xbc13,	// (0x0002ac14) bg_hwr_side_pane_g1

0x8868,	// (0x00027869) cell_hwr_side_pane_ParamLimits

0x8868,	// (0x00027869) cell_hwr_side_pane

0x88a5,	// (0x000278a6) fep_hwr_write_pane_g1_ParamLimits

0x88a5,	// (0x000278a6) fep_hwr_write_pane_g1

0x88b2,	// (0x000278b3) fep_hwr_write_pane_g2_ParamLimits

0x88b2,	// (0x000278b3) fep_hwr_write_pane_g2

0x88bf,	// (0x000278c0) fep_hwr_write_pane_g3_ParamLimits

0x88bf,	// (0x000278c0) fep_hwr_write_pane_g3

0x88cd,	// (0x000278ce) fep_hwr_write_pane_g4_ParamLimits

0x88cd,	// (0x000278ce) fep_hwr_write_pane_g4

0x0005,

0xfb10,	// (0x0002eb11) fep_hwr_write_pane_g_ParamLimits

0xfb10,	// (0x0002eb11) fep_hwr_write_pane_g

0x09c5,	// (0x0001f9c6) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x09c5,	// (0x0001f9c6) bg_fep_hwr_candidate_pane_g2

0x88e2,	// (0x000278e3) cell_hwr_candidate_pane_ParamLimits

0x88e2,	// (0x000278e3) cell_hwr_candidate_pane

0x8934,	// (0x00027935) fep_hwr_candidate_pane_g1_ParamLimits

0xbc73,	// (0x0002ac74) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbc73,	// (0x0002ac74) bg_popup_fep_shadow_pane_cp2

0xbe09,	// (0x0002ae0a) fep_vkb_top_pane_g4_ParamLimits

0xbe09,	// (0x0002ae0a) fep_vkb_top_pane_g4

0xbe4f,	// (0x0002ae50) fep_vkb_side_pane_g2_ParamLimits

0xbe4f,	// (0x0002ae50) fep_vkb_side_pane_g2

0x52ff,	// (0x00024300) list_setting_pane_t4_ParamLimits

0x52ff,	// (0x00024300) list_setting_pane_t4

0x539b,	// (0x0002439c) list_setting_number_pane_t5_ParamLimits

0x539b,	// (0x0002439c) list_setting_number_pane_t5

0x6af3,	// (0x00025af4) list_double_heading_pane_cp2_ParamLimits

0x6af3,	// (0x00025af4) list_double_heading_pane_cp2

0xc1d0,	// (0x0002b1d1) list_double_heading_pane_g1_cp2_ParamLimits

0xc1d0,	// (0x0002b1d1) list_double_heading_pane_g1_cp2

0xc1dc,	// (0x0002b1dd) list_double_heading_pane_g2_cp2_ParamLimits

0xc1dc,	// (0x0002b1dd) list_double_heading_pane_g2_cp2

0xc1f0,	// (0x0002b1f1) list_double_heading_pane_t1_cp2_ParamLimits

0xc1f0,	// (0x0002b1f1) list_double_heading_pane_t1_cp2

0xc206,	// (0x0002b207) list_double_heading_pane_t2_cp2_ParamLimits

0xc206,	// (0x0002b207) list_double_heading_pane_t2_cp2

0x09ed,	// (0x0001f9ee) aid_value_unit2

0x6300,	// (0x00025301) popup_preview_fixed_window

0x2680,	// (0x00021681) bg_popup_preview_window_pane_cp02

0xc218,	// (0x0002b219) list_preview_fixed_pane

0xc25e,	// (0x0002b25f) list_empty_pane_fp_ParamLimits

0xc25e,	// (0x0002b25f) list_empty_pane_fp

0xc25e,	// (0x0002b25f) list_single_cale_day_pane_fp_ParamLimits

0xc25e,	// (0x0002b25f) list_single_cale_day_pane_fp

0xc25e,	// (0x0002b25f) list_single_graphic_heading_pane_fp_ParamLimits

0xc25e,	// (0x0002b25f) list_single_graphic_heading_pane_fp

0xc25e,	// (0x0002b25f) list_single_graphic_pane_fp_ParamLimits

0xc25e,	// (0x0002b25f) list_single_graphic_pane_fp

0xc25e,	// (0x0002b25f) list_single_heading_pane_fp_ParamLimits

0xc25e,	// (0x0002b25f) list_single_heading_pane_fp

0xc25e,	// (0x0002b25f) list_single_pane_fp_ParamLimits

0xc25e,	// (0x0002b25f) list_single_pane_fp

0xc277,	// (0x0002b278) list_single_pane_fp_g1_ParamLimits

0xc277,	// (0x0002b278) list_single_pane_fp_g1

0x5c64,	// (0x00024c65) list_single_pane_fp_g2_ParamLimits

0x5c64,	// (0x00024c65) list_single_pane_fp_g2

0x5c70,	// (0x00024c71) list_single_pane_fp_g3_ParamLimits

0x5c70,	// (0x00024c71) list_single_pane_fp_g3

0xc283,	// (0x0002b284) list_single_pane_fp_g4_ParamLimits

0xc283,	// (0x0002b284) list_single_pane_fp_g4

0x0003,

0xfb72,	// (0x0002eb73) list_single_pane_fp_g_ParamLimits

0xfb72,	// (0x0002eb73) list_single_pane_fp_g

0x5c84,	// (0x00024c85) list_single_pane_fp_t1_ParamLimits

0x5c84,	// (0x00024c85) list_single_pane_fp_t1

0x5c9b,	// (0x00024c9c) list_single_graphic_pane_fp_g1_ParamLimits

0x5c9b,	// (0x00024c9c) list_single_graphic_pane_fp_g1

0xc277,	// (0x0002b278) list_single_graphic_pane_fp_g2_ParamLimits

0xc277,	// (0x0002b278) list_single_graphic_pane_fp_g2

0x5c64,	// (0x00024c65) list_single_graphic_pane_fp_g3_ParamLimits

0x5c64,	// (0x00024c65) list_single_graphic_pane_fp_g3

0x5c70,	// (0x00024c71) list_single_graphic_pane_fp_g4_ParamLimits

0x5c70,	// (0x00024c71) list_single_graphic_pane_fp_g4

0xc283,	// (0x0002b284) list_single_graphic_pane_fp_g5_ParamLimits

0xc283,	// (0x0002b284) list_single_graphic_pane_fp_g5

0x0004,

0xfb7b,	// (0x0002eb7c) list_single_graphic_pane_fp_g_ParamLimits

0xfb7b,	// (0x0002eb7c) list_single_graphic_pane_fp_g

0x5ca7,	// (0x00024ca8) list_single_graphic_pane_fp_t1_ParamLimits

0x5ca7,	// (0x00024ca8) list_single_graphic_pane_fp_t1

0x5c9b,	// (0x00024c9c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5c9b,	// (0x00024c9c) list_single_graphic_heading_pane_fp_g1

0xc277,	// (0x0002b278) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc277,	// (0x0002b278) list_single_graphic_heading_pane_fp_g2

0x5c64,	// (0x00024c65) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5c64,	// (0x00024c65) list_single_graphic_heading_pane_fp_g3

0x5c70,	// (0x00024c71) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5c70,	// (0x00024c71) list_single_graphic_heading_pane_fp_g4

0xc283,	// (0x0002b284) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc283,	// (0x0002b284) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x0002eb7c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x0002eb7c) list_single_graphic_heading_pane_fp_g

0x5cbd,	// (0x00024cbe) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5cbd,	// (0x00024cbe) list_single_graphic_heading_pane_fp_t1

0x5cd3,	// (0x00024cd4) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5cd3,	// (0x00024cd4) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb86,	// (0x0002eb87) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb86,	// (0x0002eb87) list_single_graphic_heading_pane_fp_t

0x5ce5,	// (0x00024ce6) list_single_cale_day_pane_fp_g1_ParamLimits

0x5ce5,	// (0x00024ce6) list_single_cale_day_pane_fp_g1

0xc28f,	// (0x0002b290) list_single_cale_day_pane_fp_g2_ParamLimits

0xc28f,	// (0x0002b290) list_single_cale_day_pane_fp_g2

0x5d1d,	// (0x00024d1e) list_single_cale_day_pane_fp_g3_ParamLimits

0x5d1d,	// (0x00024d1e) list_single_cale_day_pane_fp_g3

0x5d45,	// (0x00024d46) list_single_cale_day_pane_fp_g4_ParamLimits

0x5d45,	// (0x00024d46) list_single_cale_day_pane_fp_g4

0x5d69,	// (0x00024d6a) list_single_cale_day_pane_fp_g5_ParamLimits

0x5d69,	// (0x00024d6a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002eb8c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002eb8c) list_single_cale_day_pane_fp_g

0x5d8d,	// (0x00024d8e) list_single_cale_day_pane_fp_t1_ParamLimits

0x5d8d,	// (0x00024d8e) list_single_cale_day_pane_fp_t1

0x5db3,	// (0x00024db4) list_single_cale_day_pane_fp_t2_ParamLimits

0x5db3,	// (0x00024db4) list_single_cale_day_pane_fp_t2

0x5dcc,	// (0x00024dcd) list_single_cale_day_pane_fp_t3_ParamLimits

0x5dcc,	// (0x00024dcd) list_single_cale_day_pane_fp_t3

0x0002,

0xfb96,	// (0x0002eb97) list_single_cale_day_pane_fp_t_ParamLimits

0xfb96,	// (0x0002eb97) list_single_cale_day_pane_fp_t

0xc277,	// (0x0002b278) list_empty_pane_fp_g1_ParamLimits

0xc277,	// (0x0002b278) list_empty_pane_fp_g1

0x5de5,	// (0x00024de6) list_empty_pane_fp_t1

0x5df3,	// (0x00024df4) list_empty_pane_fp_t2

0x0001,

0xfb9d,	// (0x0002eb9e) list_empty_pane_fp_t

0xc277,	// (0x0002b278) list_single_heading_pane_fp_g1_ParamLimits

0xc277,	// (0x0002b278) list_single_heading_pane_fp_g1

0x5c64,	// (0x00024c65) list_single_heading_pane_fp_g2_ParamLimits

0x5c64,	// (0x00024c65) list_single_heading_pane_fp_g2

0x5c70,	// (0x00024c71) list_single_heading_pane_fp_g3_ParamLimits

0x5c70,	// (0x00024c71) list_single_heading_pane_fp_g3

0x0002,

0xfba2,	// (0x0002eba3) list_single_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0002eba3) list_single_heading_pane_fp_g

0x5e01,	// (0x00024e02) list_single_heading_pane_fp_t1_ParamLimits

0x5e01,	// (0x00024e02) list_single_heading_pane_fp_t1

0x5e13,	// (0x00024e14) list_single_heading_pane_fp_t2_ParamLimits

0x5e13,	// (0x00024e14) list_single_heading_pane_fp_t2

0x0001,

0xfba9,	// (0x0002ebaa) list_single_heading_pane_fp_t_ParamLimits

0xfba9,	// (0x0002ebaa) list_single_heading_pane_fp_t

0x2deb,	// (0x00021dec) aid_size_cell_fast

0x2663,	// (0x00021664) soft_indicator_pane_cp1_t1

0x2e28,	// (0x00021e29) cell_app_pane_cp2_ParamLimits

0x2e28,	// (0x00021e29) cell_app_pane_cp2

0x876e,	// (0x0002776f) fep_hwr_candidate_drop_down_list_pane

0x09d3,	// (0x0001f9d4) fep_hwr_candidate_pane_g3_ParamLimits

0x09d3,	// (0x0001f9d4) fep_hwr_candidate_pane_g3

0x09e0,	// (0x0001f9e1) fep_hwr_candidate_pane_g4_ParamLimits

0x09e0,	// (0x0001f9e1) fep_hwr_candidate_pane_g4

0x0002,

0xfb1d,	// (0x0002eb1e) fep_hwr_candidate_pane_g_ParamLimits

0xfb1d,	// (0x0002eb1e) fep_hwr_candidate_pane_g

0xbd03,	// (0x0002ad04) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbd03,	// (0x0002ad04) fep_vkb_candidate_drop_down_list_pane

0xc12b,	// (0x0002b12c) fep_vkb_candidate_pane_g3

0xc133,	// (0x0002b134) fep_vkb_candidate_pane_g4

0x0002,

0xfb4a,	// (0x0002eb4b) fep_vkb_candidate_pane_g

0xbe09,	// (0x0002ae0a) cell_hwr_candidate_pane_g1_ParamLimits

0xc14a,	// (0x0002b14b) cell_hwr_candidate_pane_g3_ParamLimits

0xc14a,	// (0x0002b14b) cell_hwr_candidate_pane_g3

0xc16b,	// (0x0002b16c) cell_hwr_candidate_pane_g4_ParamLimits

0xc16b,	// (0x0002b16c) cell_hwr_candidate_pane_g4

0x0002,

0xfb64,	// (0x0002eb65) cell_hwr_candidate_pane_g_ParamLimits

0xfb64,	// (0x0002eb65) cell_hwr_candidate_pane_g

0xc18c,	// (0x0002b18d) cell_vkb_candidate_pane_g3_ParamLimits

0xc18c,	// (0x0002b18d) cell_vkb_candidate_pane_g3

0xc1a7,	// (0x0002b1a8) cell_vkb_candidate_pane_g4_ParamLimits

0xc1a7,	// (0x0002b1a8) cell_vkb_candidate_pane_g4

0xc29b,	// (0x0002b29c) cell_app_pane_cp2_g1_ParamLimits

0xc29b,	// (0x0002b29c) cell_app_pane_cp2_g1

0xc2b9,	// (0x0002b2ba) cell_app_pane_cp2_g2_ParamLimits

0xc2b9,	// (0x0002b2ba) cell_app_pane_cp2_g2

0x0001,

0xfbae,	// (0x0002ebaf) cell_app_pane_cp2_g_ParamLimits

0xfbae,	// (0x0002ebaf) cell_app_pane_cp2_g

0xc2c5,	// (0x0002b2c6) cell_app_pane_cp2_t1_ParamLimits

0xc2c5,	// (0x0002b2c6) cell_app_pane_cp2_t1

0x2be8,	// (0x00021be9) grid_highlight_pane_cp1_ParamLimits

0x2be8,	// (0x00021be9) grid_highlight_pane_cp1

0x89c0,	// (0x000279c1) cell_hwr_candidate_pane_cp1_ParamLimits

0x89c0,	// (0x000279c1) cell_hwr_candidate_pane_cp1

0xbe09,	// (0x0002ae0a) fep_hwr_candidate_drop_down_list_pane_g1

0xc2d7,	// (0x0002b2d8) fep_hwr_candidate_drop_down_list_pane_g2

0xc2e4,	// (0x0002b2e5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x0002ebb4) fep_hwr_candidate_drop_down_list_pane_g

0x89e4,	// (0x000279e5) fep_hwr_candidate_drop_down_list_scroll_pane

0x89ed,	// (0x000279ee) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x89ed,	// (0x000279ee) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x89fa,	// (0x000279fb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x89fa,	// (0x000279fb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8a07,	// (0x00027a08) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8a07,	// (0x00027a08) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc18c,	// (0x0002b18d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc18c,	// (0x0002b18d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc1a7,	// (0x0002b1a8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc1a7,	// (0x0002b1a8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8a14,	// (0x00027a15) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8a14,	// (0x00027a15) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8a2f,	// (0x00027a30) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8a2f,	// (0x00027a30) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8a4a,	// (0x00027a4b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8a4a,	// (0x00027a4b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x0002ebbb) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x0002ebbb) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc2f1,	// (0x0002b2f2) cell_vkb_candidate_pane_cp1_ParamLimits

0xc2f1,	// (0x0002b2f2) cell_vkb_candidate_pane_cp1

0xbe09,	// (0x0002ae0a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbe09,	// (0x0002ae0a) fep_vkb_candidate_drop_down_list_pane_g1

0xc2d7,	// (0x0002b2d8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc2d7,	// (0x0002b2d8) fep_vkb_candidate_drop_down_list_pane_g2

0xc2e4,	// (0x0002b2e5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc2e4,	// (0x0002b2e5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x0002ebb4) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb3,	// (0x0002ebb4) fep_vkb_candidate_drop_down_list_pane_g

0xc317,	// (0x0002b318) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc317,	// (0x0002b318) fep_vkb_candidate_drop_down_list_scroll_pane

0xc324,	// (0x0002b325) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc324,	// (0x0002b325) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc331,	// (0x0002b332) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc331,	// (0x0002b332) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc353,	// (0x0002b354) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc353,	// (0x0002b354) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc14a,	// (0x0002b14b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc14a,	// (0x0002b14b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc16b,	// (0x0002b16c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc16b,	// (0x0002b16c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc35f,	// (0x0002b360) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc35f,	// (0x0002b360) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc380,	// (0x0002b381) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc380,	// (0x0002b381) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc3a1,	// (0x0002b3a2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc3a1,	// (0x0002b3a2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcb,	// (0x0002ebcc) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcb,	// (0x0002ebcc) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6418,	// (0x00025419) title_pane_g1_ParamLimits

0x6425,	// (0x00025426) title_pane_g2_ParamLimits

0xf554,	// (0x0002e555) title_pane_g_ParamLimits

0x315f,	// (0x00022160) aid_call2_pane

0x3157,	// (0x00022158) aid_call_pane

0x3167,	// (0x00022168) popup_clock_analogue_window_g1

0x3167,	// (0x00022168) popup_clock_analogue_window_g2

0x6ad4,	// (0x00025ad5) popup_clock_analogue_window_g3

0x6add,	// (0x00025ade) popup_clock_analogue_window_g4

0x09ff,	// (0x0001fa00) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0002e6fa) popup_clock_analogue_window_g

0x6ae5,	// (0x00025ae6) popup_clock_analogue_window_t1

0x6b26,	// (0x00025b27) clock_digital_number_pane_ParamLimits

0x6b26,	// (0x00025b27) clock_digital_number_pane

0x6b32,	// (0x00025b33) clock_digital_number_pane_cp02_ParamLimits

0x6b32,	// (0x00025b33) clock_digital_number_pane_cp02

0x6b3e,	// (0x00025b3f) clock_digital_number_pane_cp03_ParamLimits

0x6b3e,	// (0x00025b3f) clock_digital_number_pane_cp03

0x6b4a,	// (0x00025b4b) clock_digital_number_pane_cp04_ParamLimits

0x6b4a,	// (0x00025b4b) clock_digital_number_pane_cp04

0x6b56,	// (0x00025b57) clock_digital_separator_pane_ParamLimits

0x6b56,	// (0x00025b57) clock_digital_separator_pane

0x6b62,	// (0x00025b63) popup_clock_digital_window_t1_ParamLimits

0x6b62,	// (0x00025b63) popup_clock_digital_window_t1

0x09ff,	// (0x0001fa00) clock_digital_number_pane_g1

0x09ff,	// (0x0001fa00) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0002e705) clock_digital_number_pane_g

0x09ff,	// (0x0001fa00) clock_digital_separator_pane_g1

0x09ff,	// (0x0001fa00) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0002e705) clock_digital_separator_pane_g

0x7e57,	// (0x00026e58) aid_fill_nsta_ParamLimits

0x7fa7,	// (0x00026fa8) indicator_nsta_pane_ParamLimits

0x8138,	// (0x00027139) popup_clock_analogue_window

0x8138,	// (0x00027139) popup_clock_digital_window

0x2533,	// (0x00021534) grid_indicator_nsta_pane_ParamLimits

0xb5bb,	// (0x0002a5bc) clock_nsta_pane_t2

0x0001,

0xfa9d,	// (0x0002ea9e) clock_nsta_pane_t

0x6a3d,	// (0x00025a3e) aid_size_max_handle

0x6a47,	// (0x00025a48) aid_size_min_handle

0x72b3,	// (0x000262b4) editor_scroll_pane

0xc3bc,	// (0x0002b3bd) ex_editor_pane

0x2db1,	// (0x00021db2) scroll_pane_cp13

0x2b01,	// (0x00021b02) scroll_pane_cp14

0x3196,	// (0x00022197) scroll_pane_cp36

0x6b09,	// (0x00025b0a) list_single_graphic_hl_pane_cp2_ParamLimits

0x6b09,	// (0x00025b0a) list_single_graphic_hl_pane_cp2

0x58fd,	// (0x000248fe) list_single_graphic_hl_pane_ParamLimits

0x58fd,	// (0x000248fe) list_single_graphic_hl_pane

0x5e29,	// (0x00024e2a) aid_size_min_hl_cp1

0xc3c4,	// (0x0002b3c5) list_highlight_pane_cp34_ParamLimits

0xc3c4,	// (0x0002b3c5) list_highlight_pane_cp34

0xc3d5,	// (0x0002b3d6) list_single_graphic_hl_pane_g1_ParamLimits

0xc3d5,	// (0x0002b3d6) list_single_graphic_hl_pane_g1

0x5e32,	// (0x00024e33) list_single_graphic_hl_pane_g2_ParamLimits

0x5e32,	// (0x00024e33) list_single_graphic_hl_pane_g2

0x5e32,	// (0x00024e33) list_single_graphic_hl_pane_g3_ParamLimits

0x5e32,	// (0x00024e33) list_single_graphic_hl_pane_g3

0x56e9,	// (0x000246ea) list_single_graphic_hl_pane_g4_ParamLimits

0x56e9,	// (0x000246ea) list_single_graphic_hl_pane_g4

0x5e3e,	// (0x00024e3f) list_single_graphic_hl_pane_g5_ParamLimits

0x5e3e,	// (0x00024e3f) list_single_graphic_hl_pane_g5

0x0004,

0xfbdc,	// (0x0002ebdd) list_single_graphic_hl_pane_g_ParamLimits

0xfbdc,	// (0x0002ebdd) list_single_graphic_hl_pane_g

0x5e52,	// (0x00024e53) list_single_graphic_hl_pane_t1_ParamLimits

0x5e52,	// (0x00024e53) list_single_graphic_hl_pane_t1

0xc3e2,	// (0x0002b3e3) aid_size_min_hl_cp2

0xc3eb,	// (0x0002b3ec) list_highlight_pane_cp34_cp2_ParamLimits

0xc3eb,	// (0x0002b3ec) list_highlight_pane_cp34_cp2

0xc3d5,	// (0x0002b3d6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc3d5,	// (0x0002b3d6) list_single_graphic_hl_pane_g1_cp2

0xc3f8,	// (0x0002b3f9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc3f8,	// (0x0002b3f9) list_single_graphic_hl_pane_g2_cp2

0xc404,	// (0x0002b405) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc404,	// (0x0002b405) list_single_graphic_hl_pane_g3_cp2

0x31e4,	// (0x000221e5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x31e4,	// (0x000221e5) list_single_graphic_hl_pane_g4_cp2

0xc412,	// (0x0002b413) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc412,	// (0x0002b413) list_single_graphic_hl_pane_g5_cp2

0x7679,	// (0x0002667a) control_pane_g4_ParamLimits

0x7679,	// (0x0002667a) control_pane_g4

0x7820,	// (0x00026821) bg_popup_sub_pane_cp10_ParamLimits

0xbb98,	// (0x0002ab99) list_choice_list_pane_ParamLimits

0xbba7,	// (0x0002aba8) scroll_pane_cp23

0x2680,	// (0x00021681) bg_popup_preview_window_pane_cp02_ParamLimits

0xc218,	// (0x0002b219) list_preview_fixed_pane_ParamLimits

0xc22e,	// (0x0002b22f) list_preview_fixed_pane_cp_ParamLimits

0xc22e,	// (0x0002b22f) list_preview_fixed_pane_cp

0xc23a,	// (0x0002b23b) popup_preview_fixed_window_g1_ParamLimits

0xc23a,	// (0x0002b23b) popup_preview_fixed_window_g1

0xc246,	// (0x0002b247) popup_preview_fixed_window_g2_ParamLimits

0xc246,	// (0x0002b247) popup_preview_fixed_window_g2

0x0002,

0xfb6b,	// (0x0002eb6c) popup_preview_fixed_window_g_ParamLimits

0xfb6b,	// (0x0002eb6c) popup_preview_fixed_window_g

0x692a,	// (0x0002592b) aid_navi_side_left_pane_ParamLimits

0x693f,	// (0x00025940) aid_navi_side_right_pane_ParamLimits

0x6957,	// (0x00025958) navi_icon_pane_stacon_ParamLimits

0x696b,	// (0x0002596c) navi_navi_pane_stacon_ParamLimits

0x6957,	// (0x00025958) navi_text_pane_stacon_ParamLimits

0x09f5,	// (0x0001f9f6) main_text_info_pane

0xc43c,	// (0x0002b43d) listscroll_text_info_pane

0xc444,	// (0x0002b445) list_text_info_pane_ParamLimits

0xc444,	// (0x0002b445) list_text_info_pane

0xc453,	// (0x0002b454) scroll_pane_cp24_ParamLimits

0xc453,	// (0x0002b454) scroll_pane_cp24

0xc471,	// (0x0002b472) list_text_info_pane_t1_ParamLimits

0xc471,	// (0x0002b472) list_text_info_pane_t1

0x786a,	// (0x0002686b) popup_fast_swap2_window_ParamLimits

0x786a,	// (0x0002686b) popup_fast_swap2_window

0xc496,	// (0x0002b497) aid_size_cell_fast2

0x09f5,	// (0x0001f9f6) bg_popup_window_pane_cp17

0x995a,	// (0x0002895b) heading_pane_cp2

0x2886,	// (0x00021887) listscroll_fast2_pane

0xc4a0,	// (0x0002b4a1) grid_fast2_pane

0xc4aa,	// (0x0002b4ab) listscroll_fast2_pane_g1

0xc4b4,	// (0x0002b4b5) listscroll_fast2_pane_g2

0x0001,

0xfbe7,	// (0x0002ebe8) listscroll_fast2_pane_g

0x2db1,	// (0x00021db2) scroll_pane_cp26

0xc4be,	// (0x0002b4bf) cell_fast2_pane_ParamLimits

0xc4be,	// (0x0002b4bf) cell_fast2_pane

0xc4d5,	// (0x0002b4d6) cell_fast2_pane_g1

0xc4de,	// (0x0002b4df) cell_fast2_pane_g2

0xc4e7,	// (0x0002b4e8) cell_fast2_pane_g3

0x0002,

0xfbec,	// (0x0002ebed) cell_fast2_pane_g

0x28c8,	// (0x000218c9) grid_highlight_pane_cp9

0x28dd,	// (0x000218de) main_eswt_pane_ParamLimits

0x28dd,	// (0x000218de) main_eswt_pane

0xc468,	// (0x0002b469) list_single_text_info_pane

0xc4ef,	// (0x0002b4f0) eswt_ctrl_button_pane

0xc4ef,	// (0x0002b4f0) eswt_ctrl_canvas_pane

0xc4f7,	// (0x0002b4f8) eswt_ctrl_combo_pane

0xc4ef,	// (0x0002b4f0) eswt_ctrl_default_pane

0xc4ef,	// (0x0002b4f0) eswt_ctrl_label_pane

0xc4ff,	// (0x0002b500) eswt_ctrl_wait_pane

0xc507,	// (0x0002b508) eswt_shell_pane

0x09f5,	// (0x0001f9f6) listscroll_eswt_app_pane

0xc527,	// (0x0002b528) popup_eswt_tasktip_window_ParamLimits

0xc527,	// (0x0002b528) popup_eswt_tasktip_window

0x959a,	// (0x0002859b) bg_popup_window_pane_cp18

0xc538,	// (0x0002b539) eswt_control_pane_g1_ParamLimits

0xc538,	// (0x0002b539) eswt_control_pane_g1

0xc545,	// (0x0002b546) eswt_control_pane_g2_ParamLimits

0xc545,	// (0x0002b546) eswt_control_pane_g2

0xc552,	// (0x0002b553) eswt_control_pane_g3_ParamLimits

0xc552,	// (0x0002b553) eswt_control_pane_g3

0xc55f,	// (0x0002b560) eswt_control_pane_g4_ParamLimits

0xc55f,	// (0x0002b560) eswt_control_pane_g4

0x0003,

0xfbf3,	// (0x0002ebf4) eswt_control_pane_g_ParamLimits

0xfbf3,	// (0x0002ebf4) eswt_control_pane_g

0x2be8,	// (0x00021be9) bg_button_pane_ParamLimits

0x2be8,	// (0x00021be9) bg_button_pane

0x28dd,	// (0x000218de) common_borders_pane_copy2_ParamLimits

0x28dd,	// (0x000218de) common_borders_pane_copy2

0xc56c,	// (0x0002b56d) control_button_pane_g1_ParamLimits

0xc56c,	// (0x0002b56d) control_button_pane_g1

0xc578,	// (0x0002b579) control_button_pane_g2_ParamLimits

0xc578,	// (0x0002b579) control_button_pane_g2

0xc584,	// (0x0002b585) control_button_pane_g3_ParamLimits

0xc584,	// (0x0002b585) control_button_pane_g3

0x0002,

0xfbfc,	// (0x0002ebfd) control_button_pane_g_ParamLimits

0xfbfc,	// (0x0002ebfd) control_button_pane_g

0xc598,	// (0x0002b599) control_button_pane_t1

0xc5a6,	// (0x0002b5a7) control_button_pane_t2

0x0001,

0xfc03,	// (0x0002ec04) control_button_pane_t

0x9526,	// (0x00028527) bg_button_pane_g1

0x952e,	// (0x0002852f) bg_button_pane_g2

0x9536,	// (0x00028537) bg_button_pane_g3

0x953e,	// (0x0002853f) bg_button_pane_g4

0x9546,	// (0x00028547) bg_button_pane_g5

0x954e,	// (0x0002854f) bg_button_pane_g6

0x9556,	// (0x00028557) bg_button_pane_g7

0x955e,	// (0x0002855f) bg_button_pane_g8

0x9566,	// (0x00028567) bg_button_pane_g9

0x0008,

0xf867,	// (0x0002e868) bg_button_pane_g

0xbb53,	// (0x0002ab54) common_borders_pane_ParamLimits

0xbb53,	// (0x0002ab54) common_borders_pane

0xc538,	// (0x0002b539) eswt_control_pane_g1_copy1_ParamLimits

0xc538,	// (0x0002b539) eswt_control_pane_g1_copy1

0xc545,	// (0x0002b546) eswt_control_pane_g2_copy1_ParamLimits

0xc545,	// (0x0002b546) eswt_control_pane_g2_copy1

0xc552,	// (0x0002b553) eswt_control_pane_g3_copy1_ParamLimits

0xc552,	// (0x0002b553) eswt_control_pane_g3_copy1

0xc55f,	// (0x0002b560) eswt_control_pane_g4_copy1_ParamLimits

0xc55f,	// (0x0002b560) eswt_control_pane_g4_copy1

0xbb8e,	// (0x0002ab8f) bg_eswt_ctrl_canvas_pane_g1

0xbb53,	// (0x0002ab54) common_borders_pane_cp2_ParamLimits

0xbb53,	// (0x0002ab54) common_borders_pane_cp2

0xbb53,	// (0x0002ab54) common_borders_pane_cp3_ParamLimits

0xbb53,	// (0x0002ab54) common_borders_pane_cp3

0xc5b4,	// (0x0002b5b5) separator_horizontal_pane

0xc5bc,	// (0x0002b5bd) separator_vertical_pane

0xc538,	// (0x0002b539) eswt_control_pane_g1_copy2_ParamLimits

0xc538,	// (0x0002b539) eswt_control_pane_g1_copy2

0xc545,	// (0x0002b546) eswt_control_pane_g2_copy2_ParamLimits

0xc545,	// (0x0002b546) eswt_control_pane_g2_copy2

0xc552,	// (0x0002b553) eswt_control_pane_g3_copy2_ParamLimits

0xc552,	// (0x0002b553) eswt_control_pane_g3_copy2

0xc55f,	// (0x0002b560) eswt_control_pane_g4_copy2_ParamLimits

0xc55f,	// (0x0002b560) eswt_control_pane_g4_copy2

0x09f5,	// (0x0001f9f6) common_borders_pane_cp4

0xc5c5,	// (0x0002b5c6) separator_horizontal_pane_g1

0xc5ce,	// (0x0002b5cf) separator_horizontal_pane_g2

0xc5d7,	// (0x0002b5d8) separator_horizontal_pane_g3

0x0002,

0xfc08,	// (0x0002ec09) separator_horizontal_pane_g

0xc538,	// (0x0002b539) eswt_control_pane_g1_copy3_ParamLimits

0xc538,	// (0x0002b539) eswt_control_pane_g1_copy3

0xc545,	// (0x0002b546) eswt_control_pane_g2_copy3_ParamLimits

0xc545,	// (0x0002b546) eswt_control_pane_g2_copy3

0xc552,	// (0x0002b553) eswt_control_pane_g3_copy3_ParamLimits

0xc552,	// (0x0002b553) eswt_control_pane_g3_copy3

0xc55f,	// (0x0002b560) eswt_control_pane_g4_copy3_ParamLimits

0xc55f,	// (0x0002b560) eswt_control_pane_g4_copy3

0x09f5,	// (0x0001f9f6) common_borders_pane_cp5

0xc5e0,	// (0x0002b5e1) separator_vertical_pane_g1

0xc5e9,	// (0x0002b5ea) separator_vertical_pane_g2

0xc5f2,	// (0x0002b5f3) separator_vertical_pane_g3

0x0002,

0xfc0f,	// (0x0002ec10) separator_vertical_pane_g

0xc538,	// (0x0002b539) eswt_control_pane_g1_copy4_ParamLimits

0xc538,	// (0x0002b539) eswt_control_pane_g1_copy4

0xc545,	// (0x0002b546) eswt_control_pane_g2_copy4_ParamLimits

0xc545,	// (0x0002b546) eswt_control_pane_g2_copy4

0xc552,	// (0x0002b553) eswt_control_pane_g3_copy4_ParamLimits

0xc552,	// (0x0002b553) eswt_control_pane_g3_copy4

0xc55f,	// (0x0002b560) eswt_control_pane_g4_copy4_ParamLimits

0xc55f,	// (0x0002b560) eswt_control_pane_g4_copy4

0xc5fb,	// (0x0002b5fc) eswt_ctrl_combo_button_pane

0xc603,	// (0x0002b604) eswt_ctrl_input_pane

0xc60b,	// (0x0002b60c) popup_choice_list_window_cp70

0xc613,	// (0x0002b614) eswt_ctrl_input_pane_t1

0x09f5,	// (0x0001f9f6) input_focus_pane_cp70

0xbb53,	// (0x0002ab54) bg_button_pane_cp70_ParamLimits

0xbb53,	// (0x0002ab54) bg_button_pane_cp70

0xc621,	// (0x0002b622) eswt_ctrl_combo_button_pane_g1

0xc629,	// (0x0002b62a) wait_bar_pane_cp70

0x959a,	// (0x0002859b) bg_popup_window_pane_cp70_ParamLimits

0x959a,	// (0x0002859b) bg_popup_window_pane_cp70

0xc631,	// (0x0002b632) popup_eswt_tasktip_window_t1

0xc647,	// (0x0002b648) wait_bar_pane_cp71_ParamLimits

0xc647,	// (0x0002b648) wait_bar_pane_cp71

0xc653,	// (0x0002b654) grid_eswt_app_pane

0x2ff6,	// (0x00021ff7) scroll_pane_cp70

0xc65c,	// (0x0002b65d) cell_eswt_app_pane_ParamLimits

0xc65c,	// (0x0002b65d) cell_eswt_app_pane

0xc68e,	// (0x0002b68f) cell_eswt_app_pane_g1_ParamLimits

0xc68e,	// (0x0002b68f) cell_eswt_app_pane_g1

0xc6bd,	// (0x0002b6be) cell_eswt_app_pane_g2_ParamLimits

0xc6bd,	// (0x0002b6be) cell_eswt_app_pane_g2

0x0001,

0xfc16,	// (0x0002ec17) cell_eswt_app_pane_g_ParamLimits

0xfc16,	// (0x0002ec17) cell_eswt_app_pane_g

0xc6e6,	// (0x0002b6e7) cell_eswt_app_pane_t1_ParamLimits

0xc6e6,	// (0x0002b6e7) cell_eswt_app_pane_t1

0xc718,	// (0x0002b719) grid_highlight_pane_cp70_ParamLimits

0xc718,	// (0x0002b719) grid_highlight_pane_cp70

0x7184,	// (0x00026185) set_content_pane_g1

0x7600,	// (0x00026601) status_small_volume_pane

0x8a65,	// (0x00027a66) status_small_volume_pane_g1

0x8a6d,	// (0x00027a6e) volume_small2_pane

0x8a76,	// (0x00027a77) volume_small2_pane_g1

0x8a7f,	// (0x00027a80) volume_small2_pane_g2

0x8a88,	// (0x00027a89) volume_small2_pane_g3

0x8a91,	// (0x00027a92) volume_small2_pane_g4

0x8a9a,	// (0x00027a9b) volume_small2_pane_g5

0x8aa3,	// (0x00027aa4) volume_small2_pane_g6

0x8aac,	// (0x00027aad) volume_small2_pane_g7

0x8ab5,	// (0x00027ab6) volume_small2_pane_g8

0x8abe,	// (0x00027abf) volume_small2_pane_g9

0x8ac7,	// (0x00027ac8) volume_small2_pane_g10

0x0009,

0xfc1b,	// (0x0002ec1c) volume_small2_pane_g

0xbf5d,	// (0x0002af5e) fep_vkb_top_text_pane_g1_ParamLimits

0xbf78,	// (0x0002af79) fep_vkb_top_text_pane_t1_ParamLimits

0xc252,	// (0x0002b253) popup_preview_fixed_window_g3_ParamLimits

0xc252,	// (0x0002b253) popup_preview_fixed_window_g3

0x7d7b,	// (0x00026d7c) popup_toolbar_trans_pane

0xa91e,	// (0x0002991f) aid_height_set_list_ParamLimits

0xa92f,	// (0x00029930) aid_size_parent_ParamLimits

0x7820,	// (0x00026821) list_highlight_pane_cp2_ParamLimits

0x7184,	// (0x00026185) set_content_pane_g1_ParamLimits

0xab62,	// (0x00029b63) list_single_image_pane_ParamLimits

0xab62,	// (0x00029b63) list_single_image_pane

0xc724,	// (0x0002b725) aid_size_cell_image_ParamLimits

0xc724,	// (0x0002b725) aid_size_cell_image

0xc731,	// (0x0002b732) grid_single_image_pane_ParamLimits

0xc731,	// (0x0002b732) grid_single_image_pane

0x2c13,	// (0x00021c14) list_single_image_pane_g1_ParamLimits

0x2c13,	// (0x00021c14) list_single_image_pane_g1

0x2c1f,	// (0x00021c20) list_single_image_pane_g2_ParamLimits

0x2c1f,	// (0x00021c20) list_single_image_pane_g2

0x0001,

0xfc30,	// (0x0002ec31) list_single_image_pane_g_ParamLimits

0xfc30,	// (0x0002ec31) list_single_image_pane_g

0xc73f,	// (0x0002b740) list_single_image_pane_t1_ParamLimits

0xc73f,	// (0x0002b740) list_single_image_pane_t1

0xc755,	// (0x0002b756) cell_image_list_pane_ParamLimits

0xc755,	// (0x0002b756) cell_image_list_pane

0xc76b,	// (0x0002b76c) cell_image_list_pane_g1

0xc774,	// (0x0002b775) cell_image_list_pane_g2

0x0001,

0xfc35,	// (0x0002ec36) cell_image_list_pane_g

0xc77d,	// (0x0002b77e) aid_size_cell_tb_trans_pane

0x2be8,	// (0x00021be9) bg_tb_trans_pane

0xc78f,	// (0x0002b790) grid_tb_trans_pane

0x9526,	// (0x00028527) bg_tb_trans_pane_g1

0x952e,	// (0x0002852f) bg_tb_trans_pane_g2

0x9536,	// (0x00028537) bg_tb_trans_pane_g3

0x953e,	// (0x0002853f) bg_tb_trans_pane_g4

0x9546,	// (0x00028547) bg_tb_trans_pane_g5

0x955e,	// (0x0002855f) bg_tb_trans_pane_g6

0x9566,	// (0x00028567) bg_tb_trans_pane_g7

0x954e,	// (0x0002854f) bg_tb_trans_pane_g8

0x9556,	// (0x00028557) bg_tb_trans_pane_g9

0x0008,

0xfc3a,	// (0x0002ec3b) bg_tb_trans_pane_g

0xc7a3,	// (0x0002b7a4) cell_toolbar_trans_pane_ParamLimits

0xc7a3,	// (0x0002b7a4) cell_toolbar_trans_pane

0xbb8e,	// (0x0002ab8f) cell_toolbar_trans_pane_g1

0xb7b2,	// (0x0002a7b3) list_form2_midp_pane_t1

0xb7c0,	// (0x0002a7c1) list_form2_midp_pane_t2

0x0001,

0xfae3,	// (0x0002eae4) list_form2_midp_pane_t

0xb7ce,	// (0x0002a7cf) scroll_pane_cp51_ParamLimits

0xb995,	// (0x0002a996) form2_midp_wait_pane_g1

0xb99e,	// (0x0002a99f) form2_midp_wait_pane_g2

0xb9a7,	// (0x0002a9a8) form2_midp_wait_pane_g3

0x0002,

0xfaf8,	// (0x0002eaf9) form2_midp_wait_pane_g

0x2533,	// (0x00021534) list_highlight_pane_cp21_ParamLimits

0xb9eb,	// (0x0002a9ec) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb9fa,	// (0x0002a9fb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xab1b,	// (0x00029b1c) list_single_2graphic_im_pane_ParamLimits

0xab1b,	// (0x00029b1c) list_single_2graphic_im_pane

0xc7c9,	// (0x0002b7ca) list_single_2graphic_im_pane_g1_ParamLimits

0xc7c9,	// (0x0002b7ca) list_single_2graphic_im_pane_g1

0xc7da,	// (0x0002b7db) list_single_2graphic_im_pane_g2_ParamLimits

0xc7da,	// (0x0002b7db) list_single_2graphic_im_pane_g2

0xc7e6,	// (0x0002b7e7) list_single_2graphic_im_pane_g3_ParamLimits

0xc7e6,	// (0x0002b7e7) list_single_2graphic_im_pane_g3

0x0003,

0xfc4d,	// (0x0002ec4e) list_single_2graphic_im_pane_g_ParamLimits

0xfc4d,	// (0x0002ec4e) list_single_2graphic_im_pane_g

0xc806,	// (0x0002b807) list_single_2graphic_im_pane_t1_ParamLimits

0xc806,	// (0x0002b807) list_single_2graphic_im_pane_t1

0xc25e,	// (0x0002b25f) list_single_graphic_2heading_pane_fp_ParamLimits

0xc25e,	// (0x0002b25f) list_single_graphic_2heading_pane_fp

0x5c9b,	// (0x00024c9c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5c9b,	// (0x00024c9c) list_single_graphic_2heading_pane_fp_g1

0xc277,	// (0x0002b278) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc277,	// (0x0002b278) list_single_graphic_2heading_pane_fp_g2

0x5c64,	// (0x00024c65) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5c64,	// (0x00024c65) list_single_graphic_2heading_pane_fp_g3

0x5c70,	// (0x00024c71) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5c70,	// (0x00024c71) list_single_graphic_2heading_pane_fp_g4

0xc283,	// (0x0002b284) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc283,	// (0x0002b284) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x0002eb7c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x0002eb7c) list_single_graphic_2heading_pane_fp_g

0x5e68,	// (0x00024e69) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5e68,	// (0x00024e69) list_single_graphic_2heading_pane_fp_t1

0x5cd3,	// (0x00024cd4) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5cd3,	// (0x00024cd4) list_single_graphic_2heading_pane_fp_t2

0x5e7e,	// (0x00024e7f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5e7e,	// (0x00024e7f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc56,	// (0x0002ec57) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc56,	// (0x0002ec57) list_single_graphic_2heading_pane_fp_t

0xbc1f,	// (0x0002ac20) fep_hwr_write_pane_g5_ParamLimits

0xbc1f,	// (0x0002ac20) fep_hwr_write_pane_g5

0xbc2b,	// (0x0002ac2c) fep_hwr_write_pane_g6_ParamLimits

0xbc2b,	// (0x0002ac2c) fep_hwr_write_pane_g6

0xc507,	// (0x0002b508) eswt_shell_pane_ParamLimits

0x959a,	// (0x0002859b) bg_popup_window_pane_cp18_ParamLimits

0xa849,	// (0x0002984a) heading_pane_cp70

0xc631,	// (0x0002b632) popup_eswt_tasktip_window_t1_ParamLimits

0x7eae,	// (0x00026eaf) aid_touch_tab_arrow_left

0x7ebd,	// (0x00026ebe) aid_touch_tab_arrow_right

0x0a13,	// (0x0001fa14) title_pane_g3_ParamLimits

0x0a13,	// (0x0001fa14) title_pane_g3

0x2b42,	// (0x00021b43) set_value_pane_g1

0x7d7b,	// (0x00026d7c) popup_toolbar_trans_pane_ParamLimits

0xc77d,	// (0x0002b77e) aid_size_cell_tb_trans_pane_ParamLimits

0x2be8,	// (0x00021be9) bg_tb_trans_pane_ParamLimits

0xc78f,	// (0x0002b790) grid_tb_trans_pane_ParamLimits

0x2680,	// (0x00021681) cont_note_pane_ParamLimits

0x2680,	// (0x00021681) cont_note_pane

0x28dd,	// (0x000218de) cont_snote2_single_text_pane_ParamLimits

0x28dd,	// (0x000218de) cont_snote2_single_text_pane

0x28dd,	// (0x000218de) cont_snote2_single_graphic_pane_ParamLimits

0x28dd,	// (0x000218de) cont_snote2_single_graphic_pane

0x9b76,	// (0x00028b77) cont_note_wait_pane_ParamLimits

0x9b76,	// (0x00028b77) cont_note_wait_pane

0x9b76,	// (0x00028b77) cont_note_image_pane_ParamLimits

0x9b76,	// (0x00028b77) cont_note_image_pane

0xc837,	// (0x0002b838) popup_note2_window_g1_ParamLimits

0xc837,	// (0x0002b838) popup_note2_window_g1

0xc868,	// (0x0002b869) popup_note2_window_t1_ParamLimits

0xc868,	// (0x0002b869) popup_note2_window_t1

0xc8ad,	// (0x0002b8ae) popup_note2_window_t2_ParamLimits

0xc8ad,	// (0x0002b8ae) popup_note2_window_t2

0xc8f2,	// (0x0002b8f3) popup_note2_window_t3_ParamLimits

0xc8f2,	// (0x0002b8f3) popup_note2_window_t3

0xc937,	// (0x0002b938) popup_note2_window_t4_ParamLimits

0xc937,	// (0x0002b938) popup_note2_window_t4

0x2704,	// (0x00021705) popup_note2_window_t5_ParamLimits

0x2704,	// (0x00021705) popup_note2_window_t5

0x0004,

0xfc62,	// (0x0002ec63) popup_note2_window_t_ParamLimits

0xfc62,	// (0x0002ec63) popup_note2_window_t

0xc966,	// (0x0002b967) popup_note2_image_window_g1_ParamLimits

0xc966,	// (0x0002b967) popup_note2_image_window_g1

0xc972,	// (0x0002b973) popup_note2_image_window_g2_ParamLimits

0xc972,	// (0x0002b973) popup_note2_image_window_g2

0x0001,

0xfc6d,	// (0x0002ec6e) popup_note2_image_window_g_ParamLimits

0xfc6d,	// (0x0002ec6e) popup_note2_image_window_g

0xc984,	// (0x0002b985) popup_note2_image_window_t1_ParamLimits

0xc984,	// (0x0002b985) popup_note2_image_window_t1

0xc99c,	// (0x0002b99d) popup_note2_image_window_t2_ParamLimits

0xc99c,	// (0x0002b99d) popup_note2_image_window_t2

0xc9b4,	// (0x0002b9b5) popup_note2_image_window_t3_ParamLimits

0xc9b4,	// (0x0002b9b5) popup_note2_image_window_t3

0x0002,

0xfc72,	// (0x0002ec73) popup_note2_image_window_t_ParamLimits

0xfc72,	// (0x0002ec73) popup_note2_image_window_t

0x9b84,	// (0x00028b85) popup_note2_wait_window_g1_ParamLimits

0x9b84,	// (0x00028b85) popup_note2_wait_window_g1

0xc9d0,	// (0x0002b9d1) popup_note2_wait_window_g2_ParamLimits

0xc9d0,	// (0x0002b9d1) popup_note2_wait_window_g2

0x9b9c,	// (0x00028b9d) popup_note2_wait_window_g3_ParamLimits

0x9b9c,	// (0x00028b9d) popup_note2_wait_window_g3

0x0002,

0xfc79,	// (0x0002ec7a) popup_note2_wait_window_g_ParamLimits

0xfc79,	// (0x0002ec7a) popup_note2_wait_window_g

0xc9dc,	// (0x0002b9dd) popup_note2_wait_window_t1_ParamLimits

0xc9dc,	// (0x0002b9dd) popup_note2_wait_window_t1

0xc9fa,	// (0x0002b9fb) popup_note2_wait_window_t2_ParamLimits

0xc9fa,	// (0x0002b9fb) popup_note2_wait_window_t2

0xca18,	// (0x0002ba19) popup_note2_wait_window_t3_ParamLimits

0xca18,	// (0x0002ba19) popup_note2_wait_window_t3

0xca2a,	// (0x0002ba2b) popup_note2_wait_window_t4_ParamLimits

0xca2a,	// (0x0002ba2b) popup_note2_wait_window_t4

0x0003,

0xfc80,	// (0x0002ec81) popup_note2_wait_window_t_ParamLimits

0xfc80,	// (0x0002ec81) popup_note2_wait_window_t

0xca3c,	// (0x0002ba3d) wait_bar2_pane_ParamLimits

0xca3c,	// (0x0002ba3d) wait_bar2_pane

0xca54,	// (0x0002ba55) popup_snote2_single_text_window_g1_ParamLimits

0xca54,	// (0x0002ba55) popup_snote2_single_text_window_g1

0xca7c,	// (0x0002ba7d) popup_snote2_single_text_window_t1_ParamLimits

0xca7c,	// (0x0002ba7d) popup_snote2_single_text_window_t1

0xcac8,	// (0x0002bac9) popup_snote2_single_text_window_t2_ParamLimits

0xcac8,	// (0x0002bac9) popup_snote2_single_text_window_t2

0xcb14,	// (0x0002bb15) popup_snote2_single_text_window_t3_ParamLimits

0xcb14,	// (0x0002bb15) popup_snote2_single_text_window_t3

0xcb55,	// (0x0002bb56) popup_snote2_single_text_window_t4_ParamLimits

0xcb55,	// (0x0002bb56) popup_snote2_single_text_window_t4

0xcb8b,	// (0x0002bb8c) popup_snote2_single_text_window_t5_ParamLimits

0xcb8b,	// (0x0002bb8c) popup_snote2_single_text_window_t5

0x0004,

0xfc89,	// (0x0002ec8a) popup_snote2_single_text_window_t_ParamLimits

0xfc89,	// (0x0002ec8a) popup_snote2_single_text_window_t

0xcbb6,	// (0x0002bbb7) popup_snote2_single_graphic_window_g1_ParamLimits

0xcbb6,	// (0x0002bbb7) popup_snote2_single_graphic_window_g1

0xcbde,	// (0x0002bbdf) popup_snote2_single_graphic_window_g2_ParamLimits

0xcbde,	// (0x0002bbdf) popup_snote2_single_graphic_window_g2

0x0001,

0xfc94,	// (0x0002ec95) popup_snote2_single_graphic_window_g_ParamLimits

0xfc94,	// (0x0002ec95) popup_snote2_single_graphic_window_g

0xcc06,	// (0x0002bc07) popup_snote2_single_graphic_window_t1_ParamLimits

0xcc06,	// (0x0002bc07) popup_snote2_single_graphic_window_t1

0xcc52,	// (0x0002bc53) popup_snote2_single_graphic_window_t2_ParamLimits

0xcc52,	// (0x0002bc53) popup_snote2_single_graphic_window_t2

0xcb14,	// (0x0002bb15) popup_snote2_single_graphic_window_t3_ParamLimits

0xcb14,	// (0x0002bb15) popup_snote2_single_graphic_window_t3

0xcb55,	// (0x0002bb56) popup_snote2_single_graphic_window_t4_ParamLimits

0xcb55,	// (0x0002bb56) popup_snote2_single_graphic_window_t4

0xcb8b,	// (0x0002bb8c) popup_snote2_single_graphic_window_t5_ParamLimits

0xcb8b,	// (0x0002bb8c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc99,	// (0x0002ec9a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc99,	// (0x0002ec9a) popup_snote2_single_graphic_window_t

0xb67e,	// (0x0002a67f) clock_nsta_pane_cp2_t1

0xb67e,	// (0x0002a67f) clock_nsta_pane_cp2_t2

0x0001,

0xfab9,	// (0x0002eaba) clock_nsta_pane_cp2_t

0x54c5,	// (0x000244c6) form_field_data_wide_pane_g1_ParamLimits

0x2c13,	// (0x00021c14) form_field_data_wide_pane_g2_ParamLimits

0x2c13,	// (0x00021c14) form_field_data_wide_pane_g2

0x2c1f,	// (0x00021c20) form_field_data_wide_pane_g3_ParamLimits

0x2c1f,	// (0x00021c20) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0002e67d) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0002e67d) form_field_data_wide_pane_g

0xb557,	// (0x0002a558) grid_touch_3_pane_ParamLimits

0xb557,	// (0x0002a558) grid_touch_3_pane

0xcc9e,	// (0x0002bc9f) cell_touch_3_pane_ParamLimits

0xcc9e,	// (0x0002bc9f) cell_touch_3_pane

0xbb8e,	// (0x0002ab8f) cell_touch_3_pane_g1

0xbb8e,	// (0x0002ab8f) cell_touch_3_pane_g2

0x0001,

0xfb3e,	// (0x0002eb3f) cell_touch_3_pane_g

0x2736,	// (0x00021737) cont_query_data_pane

0x273e,	// (0x0002173f) cont_query_data_pane_cp1

0xccd1,	// (0x0002bcd2) button_value_adjust_pane_cp7

0xccd9,	// (0x0002bcda) query_popup_pane_cp3

0x6bec,	// (0x00025bed) bg_popup_sub_pane_cp22_ParamLimits

0x6c02,	// (0x00025c03) navi_navi_volume_pane_cp2

0x6c1d,	// (0x00025c1e) popup_side_volume_key_window_g2

0x6c2c,	// (0x00025c2d) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0002e713) popup_side_volume_key_window_g

0x6c49,	// (0x00025c4a) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0002e71a) popup_side_volume_key_window_t

0x704a,	// (0x0002604b) popup_side_volume_key_window_ParamLimits

0x50fa,	// (0x000240fb) list_double_graphic_pane_g4_ParamLimits

0x50fa,	// (0x000240fb) list_double_graphic_pane_g4

0xab4a,	// (0x00029b4b) list_single_2heading_msg_pane_ParamLimits

0xab4a,	// (0x00029b4b) list_single_2heading_msg_pane

0x5e9e,	// (0x00024e9f) list_single_2heading_msg_pane_g1_ParamLimits

0x5e9e,	// (0x00024e9f) list_single_2heading_msg_pane_g1

0x4f79,	// (0x00023f7a) list_single_2heading_msg_pane_g2_ParamLimits

0x4f79,	// (0x00023f7a) list_single_2heading_msg_pane_g2

0x5eaa,	// (0x00024eab) list_single_2heading_msg_pane_g3_ParamLimits

0x5eaa,	// (0x00024eab) list_single_2heading_msg_pane_g3

0x5eb6,	// (0x00024eb7) list_single_2heading_msg_pane_g4_ParamLimits

0x5eb6,	// (0x00024eb7) list_single_2heading_msg_pane_g4

0x0003,

0xfca4,	// (0x0002eca5) list_single_2heading_msg_pane_g_ParamLimits

0xfca4,	// (0x0002eca5) list_single_2heading_msg_pane_g

0x5ece,	// (0x00024ecf) list_single_2heading_msg_pane_t1_ParamLimits

0x5ece,	// (0x00024ecf) list_single_2heading_msg_pane_t1

0x5ef6,	// (0x00024ef7) list_single_2heading_msg_pane_t2_ParamLimits

0x5ef6,	// (0x00024ef7) list_single_2heading_msg_pane_t2

0x5f2a,	// (0x00024f2b) list_single_2heading_msg_pane_t3_ParamLimits

0x5f2a,	// (0x00024f2b) list_single_2heading_msg_pane_t3

0x5f63,	// (0x00024f64) list_single_2heading_msg_pane_t4_ParamLimits

0x5f63,	// (0x00024f64) list_single_2heading_msg_pane_t4

0x0003,

0xfcad,	// (0x0002ecae) list_single_2heading_msg_pane_t_ParamLimits

0xfcad,	// (0x0002ecae) list_single_2heading_msg_pane_t

0x0a1f,	// (0x0001fa20) title_pane_g4_ParamLimits

0x0a1f,	// (0x0001fa20) title_pane_g4

0x687a,	// (0x0002587b) title_pane_stacon_g3_ParamLimits

0x687a,	// (0x0002587b) title_pane_stacon_g3

0xc7fa,	// (0x0002b7fb) list_single_2graphic_im_pane_g4_ParamLimits

0xc7fa,	// (0x0002b7fb) list_single_2graphic_im_pane_g4

0xa5e6,	// (0x000295e7) popup_side_volume_key_window_cp

0xae72,	// (0x00029e73) main_idle_act2_pane_t1

0x8335,	// (0x00027336) toolbar_button_pane_g10

0x678b,	// (0x0002578c) popup_toolbar_window_cp1

0xb66f,	// (0x0002a670) clock_nsta_pane_cp_t1

0xb66f,	// (0x0002a670) clock_nsta_pane_cp_t2

0x0001,

0xfab4,	// (0x0002eab5) clock_nsta_pane_cp_t

0x6c02,	// (0x00025c03) navi_navi_volume_pane_cp2_ParamLimits

0x6c11,	// (0x00025c12) popup_side_volume_key_window_g1_ParamLimits

0x6c1d,	// (0x00025c1e) popup_side_volume_key_window_g2_ParamLimits

0x6c2c,	// (0x00025c2d) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0002e713) popup_side_volume_key_window_g_ParamLimits

0x875a,	// (0x0002775b) fep_hwr_aid_pane

0x09c5,	// (0x0001f9c6) bg_fep_hwr_top_pane_g4_ParamLimits

0xbbef,	// (0x0002abf0) fep_hwr_top_pane_g1_ParamLimits

0xbc01,	// (0x0002ac02) fep_hwr_top_pane_g2_ParamLimits

0x8815,	// (0x00027816) fep_hwr_top_pane_g3_ParamLimits

0xfb09,	// (0x0002eb0a) fep_hwr_top_pane_g_ParamLimits

0x882a,	// (0x0002782b) fep_hwr_top_text_pane_ParamLimits

0xa39b,	// (0x0002939c) aid_touch_tab_arrow_arrow_2

0xa3a4,	// (0x000293a5) aid_touch_tab_arrow_left_2

0x876e,	// (0x0002776f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x87a5,	// (0x000277a6) fep_hwr_prediction_pane

0xbd57,	// (0x0002ad58) fep_vkb_prediction_pane

0xbe5d,	// (0x0002ae5e) fep_vkb_side_pane_g3_ParamLimits

0xbe5d,	// (0x0002ae5e) fep_vkb_side_pane_g3

0xbe09,	// (0x0002ae0a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc2d7,	// (0x0002b2d8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc2e4,	// (0x0002b2e5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb3,	// (0x0002ebb4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xcd00,	// (0x0002bd01) fep_hwr_prediction_pane_g1

0x8ad0,	// (0x00027ad1) fep_hwr_prediction_pane_g2

0x8ad8,	// (0x00027ad9) fep_hwr_prediction_pane_g3

0x8ae0,	// (0x00027ae1) fep_hwr_prediction_pane_g4

0x0003,

0xfcb6,	// (0x0002ecb7) fep_hwr_prediction_pane_g

0xcd00,	// (0x0002bd01) fep_vkb_prediction_pane_g1

0xcd0a,	// (0x0002bd0b) fep_vkb_prediction_pane_g2

0xcd12,	// (0x0002bd13) fep_vkb_prediction_pane_g3

0xcd1a,	// (0x0002bd1b) fep_vkb_prediction_pane_g4

0x0003,

0xfcbf,	// (0x0002ecc0) fep_vkb_prediction_pane_g

0xa8c2,	// (0x000298c3) slider_set_pane_g3

0xa8d6,	// (0x000298d7) slider_set_pane_g4

0xc33d,	// (0x0002b33e) slider_set_pane_g5

0xa8c2,	// (0x000298c3) slider_set_pane_g6

0x862a,	// (0x0002762b) slider_set_pane_g7

0xaab4,	// (0x00029ab5) slider_form_pane_g3

0xaabd,	// (0x00029abe) slider_form_pane_g4

0xaac5,	// (0x00029ac6) slider_form_pane_g5

0xaab4,	// (0x00029ab5) slider_form_pane_g6

0xaacd,	// (0x00029ace) slider_form_pane_g7

0xb129,	// (0x0002a12a) slider_set_pane_vc_g3

0xb132,	// (0x0002a133) slider_set_pane_vc_g4

0xb13b,	// (0x0002a13c) slider_set_pane_vc_g5

0xb129,	// (0x0002a12a) slider_set_pane_vc_g6

0xb144,	// (0x0002a145) slider_set_pane_vc_g7

0xb31c,	// (0x0002a31d) slider_form_pane_vc_g1

0xb325,	// (0x0002a326) slider_form_pane_vc_g2

0xb32e,	// (0x0002a32f) slider_form_pane_vc_g3

0xb31c,	// (0x0002a31d) slider_form_pane_vc_g4

0xb337,	// (0x0002a338) slider_form_pane_vc_g5

0x0004,

0xfa86,	// (0x0002ea87) slider_form_pane_vc_g

0x09f5,	// (0x0001f9f6) main_idle_act3_pane

0xcd22,	// (0x0002bd23) ai3_links_pane

0xcd2b,	// (0x0002bd2c) popup_ai3_data_window_ParamLimits

0xcd2b,	// (0x0002bd2c) popup_ai3_data_window

0x09f5,	// (0x0001f9f6) grid_ai3_links_pane

0xcd49,	// (0x0002bd4a) cell_ai3_links_pane_ParamLimits

0xcd49,	// (0x0002bd4a) cell_ai3_links_pane

0xcd63,	// (0x0002bd64) bg_popup_sub_pane_cp11

0xcd70,	// (0x0002bd71) cell_ai3_links_pane_g1

0x09f5,	// (0x0001f9f6) bg_popup_sub_pane_cp12

0xcd95,	// (0x0002bd96) heading_ai3_data_pane

0xcd9d,	// (0x0002bd9e) list_ai3_gene_pane

0xcda9,	// (0x0002bdaa) popup_ai3_data_window_g1

0xcdb1,	// (0x0002bdb2) heading_ai3_data_pane_g1

0xcdb9,	// (0x0002bdba) heading_ai3_data_pane_t1

0xcdc7,	// (0x0002bdc8) list_double_ai3_gene_pane_ParamLimits

0xcdc7,	// (0x0002bdc8) list_double_ai3_gene_pane

0xcdd4,	// (0x0002bdd5) list_single_ai3_gene_pane_ParamLimits

0xcdd4,	// (0x0002bdd5) list_single_ai3_gene_pane

0xbb53,	// (0x0002ab54) list_highlight_pane_cp7_ParamLimits

0xbb53,	// (0x0002ab54) list_highlight_pane_cp7

0xcde1,	// (0x0002bde2) list_single_a13_gene_pane_t1_ParamLimits

0xcde1,	// (0x0002bde2) list_single_a13_gene_pane_t1

0xcdf8,	// (0x0002bdf9) list_single_ai3_gene_pane_g1

0xce01,	// (0x0002be02) list_single_ai3_gene_pane_g2

0x0001,

0xfcc8,	// (0x0002ecc9) list_single_ai3_gene_pane_g

0xce09,	// (0x0002be0a) list_double_ai3_gene_pane_g1_ParamLimits

0xce09,	// (0x0002be0a) list_double_ai3_gene_pane_g1

0xce15,	// (0x0002be16) list_double_ai3_gene_pane_t1_ParamLimits

0xce15,	// (0x0002be16) list_double_ai3_gene_pane_t1

0xce31,	// (0x0002be32) list_double_ai3_gene_pane_t2_ParamLimits

0xce31,	// (0x0002be32) list_double_ai3_gene_pane_t2

0xce46,	// (0x0002be47) list_double_ai3_gene_pane_t3_ParamLimits

0xce46,	// (0x0002be47) list_double_ai3_gene_pane_t3

0x0002,

0xfccd,	// (0x0002ecce) list_double_ai3_gene_pane_t_ParamLimits

0xfccd,	// (0x0002ecce) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5e94,	// (0x00024e95) aid_size_min_col_2

0xccea,	// (0x0002bceb) aid_size_min_msg_ParamLimits

0xccea,	// (0x0002bceb) aid_size_min_msg

0xbf69,	// (0x0002af6a) fep_vkb_top_text_pane_g2_ParamLimits

0xbf69,	// (0x0002af6a) fep_vkb_top_text_pane_g2

0x0001,

0xfb39,	// (0x0002eb3a) fep_vkb_top_text_pane_g_ParamLimits

0xfb39,	// (0x0002eb3a) fep_vkb_top_text_pane_g

0x09f5,	// (0x0001f9f6) main_hc_apps_shell_pane

0xce63,	// (0x0002be64) grid_hc_apps_pane_ParamLimits

0xce63,	// (0x0002be64) grid_hc_apps_pane

0xce72,	// (0x0002be73) list_hc_apps_pane

0xce7a,	// (0x0002be7b) scroll_pane_cp37_ParamLimits

0xce7a,	// (0x0002be7b) scroll_pane_cp37

0xce86,	// (0x0002be87) cell_hc_apps_pane_ParamLimits

0xce86,	// (0x0002be87) cell_hc_apps_pane

0xcf3e,	// (0x0002bf3f) cell_hc_apps_pane_g1_ParamLimits

0xcf3e,	// (0x0002bf3f) cell_hc_apps_pane_g1

0xcf6f,	// (0x0002bf70) cell_hc_apps_pane_g2_ParamLimits

0xcf6f,	// (0x0002bf70) cell_hc_apps_pane_g2

0xcf8b,	// (0x0002bf8c) cell_hc_apps_pane_g3_ParamLimits

0xcf8b,	// (0x0002bf8c) cell_hc_apps_pane_g3

0x0002,

0xfcd4,	// (0x0002ecd5) cell_hc_apps_pane_g_ParamLimits

0xfcd4,	// (0x0002ecd5) cell_hc_apps_pane_g

0xcfad,	// (0x0002bfae) cell_hc_apps_pane_t1_ParamLimits

0xcfad,	// (0x0002bfae) cell_hc_apps_pane_t1

0x2680,	// (0x00021681) grid_highlight_pane_cp10_ParamLimits

0x2680,	// (0x00021681) grid_highlight_pane_cp10

0xcfed,	// (0x0002bfee) list_single_hc_apps_pane_ParamLimits

0xcfed,	// (0x0002bfee) list_single_hc_apps_pane

0xd02c,	// (0x0002c02d) list_single_hc_apps_pane_g1

0x5f88,	// (0x00024f89) list_single_hc_apps_pane_g2

0x0001,

0xfcdb,	// (0x0002ecdc) list_single_hc_apps_pane_g

0x5fa1,	// (0x00024fa2) list_single_hc_apps_pane_g2_copy1

0x5fbd,	// (0x00024fbe) list_single_hc_apps_pane_t1

0x2533,	// (0x00021534) bg_set_opt_pane_cp_ParamLimits

0x64dc,	// (0x000254dd) setting_slider_pane_t1_ParamLimits

0x64f5,	// (0x000254f6) setting_slider_pane_t2_ParamLimits

0x650f,	// (0x00025510) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0002e565) setting_slider_pane_t_ParamLimits

0x6527,	// (0x00025528) slider_set_pane_ParamLimits

0x768d,	// (0x0002668e) control_pane_g5_ParamLimits

0x768d,	// (0x0002668e) control_pane_g5

0xa8b5,	// (0x000298b6) slider_set_pane_g1_ParamLimits

0x861e,	// (0x0002761f) slider_set_pane_g2_ParamLimits

0xa8c2,	// (0x000298c3) slider_set_pane_g3_ParamLimits

0xa8d6,	// (0x000298d7) slider_set_pane_g4_ParamLimits

0xc33d,	// (0x0002b33e) slider_set_pane_g5_ParamLimits

0xa8c2,	// (0x000298c3) slider_set_pane_g6_ParamLimits

0x862a,	// (0x0002762b) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0002e966) slider_set_pane_g_ParamLimits

0x712f,	// (0x00026130) navi_icon_text_pane_ParamLimits

0x7e6d,	// (0x00026e6e) aid_fill_nsta_2_ParamLimits

0x7eae,	// (0x00026eaf) aid_touch_tab_arrow_left_ParamLimits

0x7ebd,	// (0x00026ebe) aid_touch_tab_arrow_right_ParamLimits

0x7f2a,	// (0x00026f2b) clock_nsta_pane_ParamLimits

0xa37d,	// (0x0002937e) navi_icon_pane_g1_ParamLimits

0xa389,	// (0x0002938a) navi_text_pane_t1_ParamLimits

0xb78c,	// (0x0002a78d) navi_icon_text_pane_g1_ParamLimits

0xb798,	// (0x0002a799) navi_icon_text_pane_t1_ParamLimits

0xd02c,	// (0x0002c02d) list_single_hc_apps_pane_g1_ParamLimits

0x5f88,	// (0x00024f89) list_single_hc_apps_pane_g2_ParamLimits

0xfcdb,	// (0x0002ecdc) list_single_hc_apps_pane_g_ParamLimits

0x5fa1,	// (0x00024fa2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5fbd,	// (0x00024fbe) list_single_hc_apps_pane_t1_ParamLimits

0x632c,	// (0x0002532d) popup_toolbar2_fixed_window_ParamLimits

0x632c,	// (0x0002532d) popup_toolbar2_fixed_window

0x7d71,	// (0x00026d72) popup_toolbar2_float_window

0x09f5,	// (0x0001f9f6) bg_popup_sub_pane_cp27

0xd045,	// (0x0002c046) grid_toolbar2_float_pane

0x09f5,	// (0x0001f9f6) bg_popup_sub_pane_cp26

0xd045,	// (0x0002c046) grid_toolbar2_fixed_pane

0xd04d,	// (0x0002c04e) cell_toolbar2_fixed_pane_ParamLimits

0xd04d,	// (0x0002c04e) cell_toolbar2_fixed_pane

0xd05d,	// (0x0002c05e) cell_toolbar2_fixed_pane_g1

0xd066,	// (0x0002c067) toolbar2_fixed_button_pane

0x9526,	// (0x00028527) toolbar2_fixed_button_pane_g1

0x952e,	// (0x0002852f) toolbar2_fixed_button_pane_g2

0x9536,	// (0x00028537) toolbar2_fixed_button_pane_g3

0x953e,	// (0x0002853f) toolbar2_fixed_button_pane_g4

0x9546,	// (0x00028547) toolbar2_fixed_button_pane_g5

0x954e,	// (0x0002854f) toolbar2_fixed_button_pane_g6

0x9556,	// (0x00028557) toolbar2_fixed_button_pane_g7

0x955e,	// (0x0002855f) toolbar2_fixed_button_pane_g8

0x9566,	// (0x00028567) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0002e868) toolbar2_fixed_button_pane_g

0xd06e,	// (0x0002c06f) cell_toolbar2_float_pane_ParamLimits

0xd06e,	// (0x0002c06f) cell_toolbar2_float_pane

0xd07f,	// (0x0002c080) cell_toolbar2_float_pane_g1

0xd066,	// (0x0002c067) toolbar2_fixed_button_pane_cp

0xbcc5,	// (0x0002acc6) fep_vkb_accented_list_pane_ParamLimits

0xbcc5,	// (0x0002acc6) fep_vkb_accented_list_pane

0x898c,	// (0x0002798d) bg_popup_fep_shadow_pane_g9

0x72b3,	// (0x000262b4) bg_popup_fep_shadow_pane_cp3

0x2d98,	// (0x00021d99) list_accented_list_pane

0xd088,	// (0x0002c089) list_single_accented_list_pane_ParamLimits

0xd088,	// (0x0002c089) list_single_accented_list_pane

0x72b3,	// (0x000262b4) list_highlight_pane_cp10

0xd099,	// (0x0002c09a) list_single_accented_list_pane_t1

0x7cb7,	// (0x00026cb8) popup_slider_window_ParamLimits

0x7cb7,	// (0x00026cb8) popup_slider_window

0xcce1,	// (0x0002bce2) aid_indentation_list_msg

0xd165,	// (0x0002c166) bg_popup_window_pane_cp19

0xd1d3,	// (0x0002c1d4) popup_slider_window_g1

0xd1ef,	// (0x0002c1f0) popup_slider_window_g2

0xd20b,	// (0x0002c20c) popup_slider_window_g3

0x0005,

0xfce0,	// (0x0002ece1) popup_slider_window_g

0xd267,	// (0x0002c268) popup_slider_window_t1

0xd2db,	// (0x0002c2dc) small_volume_slider_vertical_pane

0xbb8e,	// (0x0002ab8f) small_volume_slider_vertical_pane_g1

0xbb8e,	// (0x0002ab8f) small_volume_slider_vertical_pane_g2

0xd2f7,	// (0x0002c2f8) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf2,	// (0x0002ecf3) small_volume_slider_vertical_pane_g

0x60e4,	// (0x000250e5) area_side_right_pane_ParamLimits

0x60e4,	// (0x000250e5) area_side_right_pane

0x8ae8,	// (0x00027ae9) aid_size_side_button_ParamLimits

0x8ae8,	// (0x00027ae9) aid_size_side_button

0x8afc,	// (0x00027afd) grid_sctrl_middle_pane_ParamLimits

0x8afc,	// (0x00027afd) grid_sctrl_middle_pane

0x8b1c,	// (0x00027b1d) sctrl_sk_bottom_pane

0x8b2d,	// (0x00027b2e) sctrl_sk_top_pane

0x8b3f,	// (0x00027b40) aid_touch_sctrl_top

0x2680,	// (0x00021681) bg_sctrl_sk_pane_ParamLimits

0x2680,	// (0x00021681) bg_sctrl_sk_pane

0x8b4c,	// (0x00027b4d) sctrl_sk_top_pane_g1

0x8b59,	// (0x00027b5a) sctrl_sk_top_pane_t1

0x8b3f,	// (0x00027b40) aid_touch_sctrl_bottom

0x2680,	// (0x00021681) bg_sctrl_sk_pane_cp_ParamLimits

0x2680,	// (0x00021681) bg_sctrl_sk_pane_cp

0x8b74,	// (0x00027b75) sctrl_sk_bottom_pane_g1

0x8b59,	// (0x00027b5a) sctrl_sk_bottom_pane_t1

0x8b7d,	// (0x00027b7e) cell_sctrl_middle_pane_ParamLimits

0x8b7d,	// (0x00027b7e) cell_sctrl_middle_pane

0x8b9a,	// (0x00027b9b) aid_touch_sctrl_middle_ParamLimits

0x8b9a,	// (0x00027b9b) aid_touch_sctrl_middle

0x2be8,	// (0x00021be9) bg_sctrl_middle_pane_ParamLimits

0x2be8,	// (0x00021be9) bg_sctrl_middle_pane

0xbe09,	// (0x0002ae0a) cell_sctrl_middle_pane_g1_ParamLimits

0xbe09,	// (0x0002ae0a) cell_sctrl_middle_pane_g1

0x8bac,	// (0x00027bad) cell_sctrl_middle_pane_g2_ParamLimits

0x8bac,	// (0x00027bad) cell_sctrl_middle_pane_g2

0x0001,

0xfcfe,	// (0x0002ecff) cell_sctrl_middle_pane_g_ParamLimits

0xfcfe,	// (0x0002ecff) cell_sctrl_middle_pane_g

0x9526,	// (0x00028527) bg_sctrl_middle_pane_g1

0x952e,	// (0x0002852f) bg_sctrl_middle_pane_g2

0x9536,	// (0x00028537) bg_sctrl_middle_pane_g3

0x953e,	// (0x0002853f) bg_sctrl_middle_pane_g4

0x9546,	// (0x00028547) bg_sctrl_middle_pane_g5

0x954e,	// (0x0002854f) bg_sctrl_middle_pane_g6

0x9556,	// (0x00028557) bg_sctrl_middle_pane_g7

0x955e,	// (0x0002855f) bg_sctrl_middle_pane_g8

0x0007,

0xfd03,	// (0x0002ed04) bg_sctrl_middle_pane_g

0x9566,	// (0x00028567) bg_sctrl_middle_pane_g8_copy1

0x9526,	// (0x00028527) bg_sctrl_sk_pane_g1

0x952e,	// (0x0002852f) bg_sctrl_sk_pane_g2

0x9536,	// (0x00028537) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0002e868) bg_sctrl_sk_pane_g

0x2a9b,	// (0x00021a9c) aid_size_touch_scroll_bar

0x953e,	// (0x0002853f) bg_sctrl_sk_pane_g4

0x9546,	// (0x00028547) bg_sctrl_sk_pane_g5

0x954e,	// (0x0002854f) bg_sctrl_sk_pane_g6

0x9556,	// (0x00028557) bg_sctrl_sk_pane_g7

0x955e,	// (0x0002855f) bg_sctrl_sk_pane_g8

0x9566,	// (0x00028567) bg_sctrl_sk_pane_g9

0x78ce,	// (0x000268cf) popup_fep_china_hwr2_fs_candidate_window

0x78d8,	// (0x000268d9) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x78d8,	// (0x000268d9) popup_fep_china_hwr2_fs_control_window

0xbe09,	// (0x0002ae0a) sctrl_sk_top_pane_g2

0x0001,

0xfcf9,	// (0x0002ecfa) sctrl_sk_top_pane_g

0xd300,	// (0x0002c301) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd300,	// (0x0002c301) aid_fep_china_hwr2_fs_cell

0xd313,	// (0x0002c314) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd313,	// (0x0002c314) bg_popup_fep_shadow_pane_cp4

0xd32c,	// (0x0002c32d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd32c,	// (0x0002c32d) bg_popup_fep_shadow_pane_cp5

0xd33e,	// (0x0002c33f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd33e,	// (0x0002c33f) popup_fep_china_hwr2_fs_control_bar_grid

0xd34e,	// (0x0002c34f) popup_fep_china_hwr2_fs_control_funtion_grid

0xd356,	// (0x0002c357) aid_fep_china_hwr2_fs_candi_cell

0x09f5,	// (0x0001f9f6) bg_popup_fep_shadow_pane_cp6

0xd360,	// (0x0002c361) popup_fep_china_hwr2_fs_candidate_grid

0xd36a,	// (0x0002c36b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd36a,	// (0x0002c36b) cell_fep_china_hwr2_fs_funtion_grid

0xbb8e,	// (0x0002ab8f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd382,	// (0x0002c383) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd382,	// (0x0002c383) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd390,	// (0x0002c391) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd390,	// (0x0002c391) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd14,	// (0x0002ed15) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd14,	// (0x0002ed15) cell_fep_china_hwr2_fs_funtion_grid_g

0xd3a6,	// (0x0002c3a7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd3a6,	// (0x0002c3a7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd3bb,	// (0x0002c3bc) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd3bb,	// (0x0002c3bc) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd19,	// (0x0002ed1a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd19,	// (0x0002ed1a) cell_fep_china_hwr2_fs_funtion_grid_t

0xd3d7,	// (0x0002c3d8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd3df,	// (0x0002c3e0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd3e7,	// (0x0002c3e8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1e,	// (0x0002ed1f) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd3ef,	// (0x0002c3f0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd3ef,	// (0x0002c3f0) cell_fep_china_hwr2_fs_candidate_grid

0xd40e,	// (0x0002c40f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd416,	// (0x0002c417) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbb8e,	// (0x0002ab8f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbb8e,	// (0x0002ab8f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3e,	// (0x0002eb3f) cell_fep_china_hwr2_fs_candidate_grid_g

0xd41e,	// (0x0002c41f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7f3d,	// (0x00026f3e) clock_nsta_pane_cp_24_ParamLimits

0x7f3d,	// (0x00026f3e) clock_nsta_pane_cp_24

0x7fbd,	// (0x00026fbe) indicator_nsta_pane_cp_24_ParamLimits

0x7fbd,	// (0x00026fbe) indicator_nsta_pane_cp_24

0xa1f9,	// (0x000291fa) heading_pane_g1

0x0001,

0xf8cc,	// (0x0002e8cd) heading_pane_g

0xacb9,	// (0x00029cba) grid_sct_catagory_button_pane

0xaceb,	// (0x00029cec) scroll_pane_cp5_ParamLimits

0xb7da,	// (0x0002a7db) button_value_adjust_pane_cp5_ParamLimits

0xb7da,	// (0x0002a7db) button_value_adjust_pane_cp5

0xb8bf,	// (0x0002a8c0) form2_midp_time_pane_ParamLimits

0xd42c,	// (0x0002c42d) cell_sct_catagory_button_pane_ParamLimits

0xd42c,	// (0x0002c42d) cell_sct_catagory_button_pane

0xbb53,	// (0x0002ab54) bg_button_pane_cp01_ParamLimits

0xbb53,	// (0x0002ab54) bg_button_pane_cp01

0xbb8e,	// (0x0002ab8f) cell_sct_catagory_button_pane_g1

0x7cf8,	// (0x00026cf9) popup_tb_extension_window

0xd43e,	// (0x0002c43f) aid_size_cell_ext_ParamLimits

0xd43e,	// (0x0002c43f) aid_size_cell_ext

0x2680,	// (0x00021681) bg_tb_trans_pane_cp1_ParamLimits

0x2680,	// (0x00021681) bg_tb_trans_pane_cp1

0xd45e,	// (0x0002c45f) grid_tb_ext_pane_ParamLimits

0xd45e,	// (0x0002c45f) grid_tb_ext_pane

0xd48e,	// (0x0002c48f) cell_tb_ext_pane_ParamLimits

0xd48e,	// (0x0002c48f) cell_tb_ext_pane

0xd4a5,	// (0x0002c4a6) cell_tb_ext_pane_g1_ParamLimits

0xd4a5,	// (0x0002c4a6) cell_tb_ext_pane_g1

0xd4c2,	// (0x0002c4c3) cell_tb_ext_pane_t1

0x2680,	// (0x00021681) list_highlight_pane_cp11_ParamLimits

0x2680,	// (0x00021681) list_highlight_pane_cp11

0x634b,	// (0x0002534c) popup_uni_indicator_window_ParamLimits

0x634b,	// (0x0002534c) popup_uni_indicator_window

0x2be8,	// (0x00021be9) bg_popup_sub_pane_cp14

0xd4dd,	// (0x0002c4de) list_uniindi_pane

0xd4e9,	// (0x0002c4ea) uniindi_top_pane

0x2680,	// (0x00021681) bg_uniindi_top_pane

0xd50a,	// (0x0002c50b) uniindi_top_pane_g1

0xd520,	// (0x0002c521) uniindi_top_pane_g2

0x0003,

0xfd25,	// (0x0002ed26) uniindi_top_pane_g

0xd54a,	// (0x0002c54b) uniindi_top_pane_t1

0xd576,	// (0x0002c577) list_single_uniindi_pane_ParamLimits

0xd576,	// (0x0002c577) list_single_uniindi_pane

0xbb8e,	// (0x0002ab8f) bg_uniindi_top_pane_g1

0xd588,	// (0x0002c589) list_single_uniindi_pane_g1

0xd59b,	// (0x0002c59c) list_single_uniindi_pane_t1

0x09f5,	// (0x0001f9f6) control_bg_pane

0xd5c0,	// (0x0002c5c1) bg_sctrl_sk_pane_cp1

0xd5c9,	// (0x0002c5ca) bg_sctrl_sk_pane_cp2

0xd5d2,	// (0x0002c5d3) control_bg_pane_g1

0xd5db,	// (0x0002c5dc) control_bg_pane_g2

0x0001,

0xfd2e,	// (0x0002ed2f) control_bg_pane_g

0xb601,	// (0x0002a602) cell_indicator_nsta_pane_g1_ParamLimits

0xb60f,	// (0x0002a610) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa2,	// (0x0002eaa3) cell_indicator_nsta_pane_g_ParamLimits

0x5c51,	// (0x00024c52) form2_midp_time_pane_t1_ParamLimits

0x28dd,	// (0x000218de) main_idle_act4_pane_ParamLimits

0x28dd,	// (0x000218de) main_idle_act4_pane

0x7cf8,	// (0x00026cf9) popup_tb_extension_window_ParamLimits

0xd480,	// (0x0002c481) tb_ext_find_pane_ParamLimits

0xd480,	// (0x0002c481) tb_ext_find_pane

0xd5e4,	// (0x0002c5e5) ai_gene_pane_1_cp1

0x73f0,	// (0x000263f1) ai_gene_pane_2_cp1

0xd5ec,	// (0x0002c5ed) list_single_idle_plugin_calendar_pane

0xd5f5,	// (0x0002c5f6) list_single_idle_plugin_notification_pane

0xd5fe,	// (0x0002c5ff) list_single_idle_plugin_player_pane

0xd607,	// (0x0002c608) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd607,	// (0x0002c608) list_single_idle_plugin_shortcut_pane

0xd629,	// (0x0002c62a) main_idle_act4_pane_t1

0xd63b,	// (0x0002c63c) main_idle_act4_pane_t2

0x0001,

0xfd33,	// (0x0002ed34) main_idle_act4_pane_t

0xd64d,	// (0x0002c64e) middle_sk_idle_act4_pane_ParamLimits

0xd64d,	// (0x0002c64e) middle_sk_idle_act4_pane

0xd663,	// (0x0002c664) popup_clock_digital_analogue_window_cp2

0xd67d,	// (0x0002c67e) shortcut_wheel_idle_act4_pane_ParamLimits

0xd67d,	// (0x0002c67e) shortcut_wheel_idle_act4_pane

0xbb8e,	// (0x0002ab8f) shortcut_wheel_idle_act4_pane_g1

0xbb8e,	// (0x0002ab8f) shortcut_wheel_idle_act4_pane_g2

0xbb8e,	// (0x0002ab8f) shortcut_wheel_idle_act4_pane_g3

0xbb8e,	// (0x0002ab8f) shortcut_wheel_idle_act4_pane_g4

0xbb8e,	// (0x0002ab8f) shortcut_wheel_idle_act4_pane_g5

0xd691,	// (0x0002c692) shortcut_wheel_idle_act4_pane_g6

0xd699,	// (0x0002c69a) shortcut_wheel_idle_act4_pane_g7

0xd6a1,	// (0x0002c6a2) shortcut_wheel_idle_act4_pane_g8

0xd6a9,	// (0x0002c6aa) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd38,	// (0x0002ed39) shortcut_wheel_idle_act4_pane_g

0xbe09,	// (0x0002ae0a) middle_sk_idle_act4_pane_g1_ParamLimits

0xbe09,	// (0x0002ae0a) middle_sk_idle_act4_pane_g1

0xd70d,	// (0x0002c70e) middle_sk_idle_act4_pane_g2_ParamLimits

0xd70d,	// (0x0002c70e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5b,	// (0x0002ed5c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5b,	// (0x0002ed5c) middle_sk_idle_act4_pane_g

0xd719,	// (0x0002c71a) middle_sk_idle_act4_pane_t1_ParamLimits

0xd719,	// (0x0002c71a) middle_sk_idle_act4_pane_t1

0xd736,	// (0x0002c737) grid_ai_shortcut_pane_ParamLimits

0xd736,	// (0x0002c737) grid_ai_shortcut_pane

0xd74f,	// (0x0002c750) list_highlight_pane_cp16_ParamLimits

0xd74f,	// (0x0002c750) list_highlight_pane_cp16

0xd75c,	// (0x0002c75d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd75c,	// (0x0002c75d) list_single_idle_plugin_shortcut_pane_g1

0xd768,	// (0x0002c769) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd768,	// (0x0002c769) list_single_idle_plugin_shortcut_pane_g2

0xd782,	// (0x0002c783) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd782,	// (0x0002c783) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd60,	// (0x0002ed61) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd60,	// (0x0002ed61) list_single_idle_plugin_shortcut_pane_g

0xd795,	// (0x0002c796) cell_ai_shortcut_pane_ParamLimits

0xd795,	// (0x0002c796) cell_ai_shortcut_pane

0xd7b8,	// (0x0002c7b9) cell_ai_shortcut_pane_g1_ParamLimits

0xd7b8,	// (0x0002c7b9) cell_ai_shortcut_pane_g1

0xd5e4,	// (0x0002c5e5) ai_gene_pane_1_cp2

0xd7da,	// (0x0002c7db) ai_gene_pane_2_cp2

0xd7e2,	// (0x0002c7e3) list_highlight_pane_cp15

0xd7eb,	// (0x0002c7ec) list_single_idle_plugin_calendar_pane_g1

0xd7e2,	// (0x0002c7e3) list_highlight_pane_cp17

0xd7f3,	// (0x0002c7f4) list_single_idle_plugin_calendar_pane_g1_copy1

0xd7fb,	// (0x0002c7fc) list_single_idle_plugin_player_pane_g1

0xaf20,	// (0x00029f21) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd67,	// (0x0002ed68) list_single_idle_plugin_player_pane_g

0xd803,	// (0x0002c804) list_single_idle_plugin_player_pane_t1

0xd811,	// (0x0002c812) list_single_idle_plugin_player_pane_t2

0xd81f,	// (0x0002c820) list_single_idle_plugin_player_pane_t3

0xd82d,	// (0x0002c82e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6c,	// (0x0002ed6d) list_single_idle_plugin_player_pane_t

0xd83b,	// (0x0002c83c) wait_bar_pane_cp15

0xd843,	// (0x0002c844) grid_ai_notification_pane

0xaf20,	// (0x00029f21) list_single_idle_plugin_notification_pane_g1

0xd84c,	// (0x0002c84d) cell_ai_notification_pane_ParamLimits

0xd84c,	// (0x0002c84d) cell_ai_notification_pane

0xd859,	// (0x0002c85a) cell_ai_notification_pane_g1

0xd861,	// (0x0002c862) cell_ai_notification_pane_t1

0xd86f,	// (0x0002c870) tb_ext_find_button_pane

0xd877,	// (0x0002c878) tb_ext_find_pane_g1

0xd87f,	// (0x0002c880) tb_ext_find_pane_t1

0x3167,	// (0x00022168) tb_ext_find_button_pane_g1

0xd88d,	// (0x0002c88e) tb_ext_find_button_pane_g2

0x0001,

0xfd75,	// (0x0002ed76) tb_ext_find_button_pane_g

0xd629,	// (0x0002c62a) main_idle_act4_pane_t1_ParamLimits

0xd63b,	// (0x0002c63c) main_idle_act4_pane_t2_ParamLimits

0xfd33,	// (0x0002ed34) main_idle_act4_pane_t_ParamLimits

0xd663,	// (0x0002c664) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd671,	// (0x0002c672) sat_plugin_idle_act4_pane_ParamLimits

0xd671,	// (0x0002c672) sat_plugin_idle_act4_pane

0xd896,	// (0x0002c897) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd896,	// (0x0002c897) sat_plugin_idle_act4_pane_t1

0xd8a9,	// (0x0002c8aa) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd8a9,	// (0x0002c8aa) sat_plugin_idle_act4_pane_t2

0xd8bc,	// (0x0002c8bd) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd8bc,	// (0x0002c8bd) sat_plugin_idle_act4_pane_t3

0xd8cf,	// (0x0002c8d0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd8cf,	// (0x0002c8d0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7a,	// (0x0002ed7b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7a,	// (0x0002ed7b) sat_plugin_idle_act4_pane_t

0x627c,	// (0x0002527d) popup_battery_window_ParamLimits

0x627c,	// (0x0002527d) popup_battery_window

0x2680,	// (0x00021681) bg_popup_sub_pane_cp25_ParamLimits

0x2680,	// (0x00021681) bg_popup_sub_pane_cp25

0xd8e2,	// (0x0002c8e3) popup_battery_window_g1_ParamLimits

0xd8e2,	// (0x0002c8e3) popup_battery_window_g1

0xd8ee,	// (0x0002c8ef) popup_battery_window_t1_ParamLimits

0xd8ee,	// (0x0002c8ef) popup_battery_window_t1

0xd900,	// (0x0002c901) popup_battery_window_t2_ParamLimits

0xd900,	// (0x0002c901) popup_battery_window_t2

0x0001,

0xfd83,	// (0x0002ed84) popup_battery_window_t_ParamLimits

0xfd83,	// (0x0002ed84) popup_battery_window_t

0x72bb,	// (0x000262bc) midp_canvas_pane_ParamLimits

0x7332,	// (0x00026333) midp_keypad_pane_ParamLimits

0x7332,	// (0x00026333) midp_keypad_pane

0x7820,	// (0x00026821) main_midp_pane_ParamLimits

0xb68d,	// (0x0002a68e) signal_pane_g2_cp_ParamLimits

0xd91d,	// (0x0002c91e) aid_size_cell_midp_keypad_ParamLimits

0xd91d,	// (0x0002c91e) aid_size_cell_midp_keypad

0xd937,	// (0x0002c938) midp_keyp_game_grid_pane_ParamLimits

0xd937,	// (0x0002c938) midp_keyp_game_grid_pane

0xd957,	// (0x0002c958) midp_keyp_rocker_pane_ParamLimits

0xd957,	// (0x0002c958) midp_keyp_rocker_pane

0xd982,	// (0x0002c983) midp_keyp_sk_left_pane_ParamLimits

0xd982,	// (0x0002c983) midp_keyp_sk_left_pane

0xd9dc,	// (0x0002c9dd) midp_keyp_sk_right_pane_ParamLimits

0xd9dc,	// (0x0002c9dd) midp_keyp_sk_right_pane

0x09f5,	// (0x0001f9f6) bg_button_pane_cp03

0xda36,	// (0x0002ca37) midp_keyp_sk_left_pane_g1

0x09f5,	// (0x0001f9f6) bg_button_pane_cp04

0xda36,	// (0x0002ca37) midp_keyp_sk_right_pane_g1

0xbb8e,	// (0x0002ab8f) midp_keyp_rocker_pane_g1

0xda3f,	// (0x0002ca40) keyp_game_cell_pane_ParamLimits

0xda3f,	// (0x0002ca40) keyp_game_cell_pane

0x09f5,	// (0x0001f9f6) bg_button_pane_cp02

0xda52,	// (0x0002ca53) keyp_game_cell_pane_g1

0x62c6,	// (0x000252c7) popup_fep_vkb2_window_ParamLimits

0x62c6,	// (0x000252c7) popup_fep_vkb2_window

0x8bca,	// (0x00027bcb) aid_size_cell_vkb2_ParamLimits

0x8bca,	// (0x00027bcb) aid_size_cell_vkb2

0x8c1e,	// (0x00027c1f) popup_fep_vkb2_window_g1_ParamLimits

0x8c1e,	// (0x00027c1f) popup_fep_vkb2_window_g1

0x8c66,	// (0x00027c67) vkb2_area_bottom_pane_ParamLimits

0x8c66,	// (0x00027c67) vkb2_area_bottom_pane

0x8cba,	// (0x00027cbb) vkb2_area_keypad_pane_ParamLimits

0x8cba,	// (0x00027cbb) vkb2_area_keypad_pane

0x8d00,	// (0x00027d01) vkb2_area_top_pane_ParamLimits

0x8d00,	// (0x00027d01) vkb2_area_top_pane

0x8d7a,	// (0x00027d7b) vkb2_top_entry_pane_ParamLimits

0x8d7a,	// (0x00027d7b) vkb2_top_entry_pane

0x8da4,	// (0x00027da5) vkb2_top_grid_left_pane_ParamLimits

0x8da4,	// (0x00027da5) vkb2_top_grid_left_pane

0x8dc2,	// (0x00027dc3) vkb2_top_grid_right_pane_ParamLimits

0x8dc2,	// (0x00027dc3) vkb2_top_grid_right_pane

0x8de0,	// (0x00027de1) vkb2_cell_keypad_pane_ParamLimits

0x8de0,	// (0x00027de1) vkb2_cell_keypad_pane

0x8eb1,	// (0x00027eb2) vkb2_area_bottom_grid_pane_ParamLimits

0x8eb1,	// (0x00027eb2) vkb2_area_bottom_grid_pane

0x8ed7,	// (0x00027ed8) vkb2_area_bottom_pane_g1_ParamLimits

0x8ed7,	// (0x00027ed8) vkb2_area_bottom_pane_g1

0x8efb,	// (0x00027efc) vkb2_area_bottom_pane_g2_ParamLimits

0x8efb,	// (0x00027efc) vkb2_area_bottom_pane_g2

0x8f29,	// (0x00027f2a) vkb2_area_bottom_pane_g3_ParamLimits

0x8f29,	// (0x00027f2a) vkb2_area_bottom_pane_g3

0x0002,

0xfd88,	// (0x0002ed89) vkb2_area_bottom_pane_g_ParamLimits

0xfd88,	// (0x0002ed89) vkb2_area_bottom_pane_g

0x8f8a,	// (0x00027f8b) vkb2_top_cell_left_pane_ParamLimits

0x8f8a,	// (0x00027f8b) vkb2_top_cell_left_pane

0xda63,	// (0x0002ca64) vkb2_top_entry_pane_g1_ParamLimits

0xda63,	// (0x0002ca64) vkb2_top_entry_pane_g1

0xda71,	// (0x0002ca72) vkb2_top_entry_pane_t1_ParamLimits

0xda71,	// (0x0002ca72) vkb2_top_entry_pane_t1

0xdaa3,	// (0x0002caa4) vkb2_top_entry_pane_t2_ParamLimits

0xdaa3,	// (0x0002caa4) vkb2_top_entry_pane_t2

0xdad5,	// (0x0002cad6) vkb2_top_entry_pane_t3_ParamLimits

0xdad5,	// (0x0002cad6) vkb2_top_entry_pane_t3

0x0002,

0xfd8f,	// (0x0002ed90) vkb2_top_entry_pane_t_ParamLimits

0xfd8f,	// (0x0002ed90) vkb2_top_entry_pane_t

0x8fd7,	// (0x00027fd8) vkb2_top_grid_right_pane_g1_ParamLimits

0x8fd7,	// (0x00027fd8) vkb2_top_grid_right_pane_g1

0x8fed,	// (0x00027fee) vkb2_top_grid_right_pane_g2_ParamLimits

0x8fed,	// (0x00027fee) vkb2_top_grid_right_pane_g2

0x9005,	// (0x00028006) vkb2_top_grid_right_pane_g3_ParamLimits

0x9005,	// (0x00028006) vkb2_top_grid_right_pane_g3

0x901d,	// (0x0002801e) vkb2_top_grid_right_pane_g4_ParamLimits

0x901d,	// (0x0002801e) vkb2_top_grid_right_pane_g4

0x0003,

0xfd96,	// (0x0002ed97) vkb2_top_grid_right_pane_g_ParamLimits

0xfd96,	// (0x0002ed97) vkb2_top_grid_right_pane_g

0x9033,	// (0x00028034) vkb2_top_cell_left_pane_g1

0x904a,	// (0x0002804b) vkb2_cell_keypad_pane_g1_ParamLimits

0x904a,	// (0x0002804b) vkb2_cell_keypad_pane_g1

0xdaf9,	// (0x0002cafa) vkb2_cell_keypad_pane_t1_ParamLimits

0xdaf9,	// (0x0002cafa) vkb2_cell_keypad_pane_t1

0x9058,	// (0x00028059) vkb2_cell_bottom_grid_pane_ParamLimits

0x9058,	// (0x00028059) vkb2_cell_bottom_grid_pane

0x9091,	// (0x00028092) vkb2_cell_bottom_grid_pane_g1

0xd6b1,	// (0x0002c6b2) aid_call2_pane_cp02

0xd6b9,	// (0x0002c6ba) aid_call_pane_cp02

0xd6c1,	// (0x0002c6c2) clock_digital_number_pane_cp10

0xd6c9,	// (0x0002c6ca) clock_digital_number_pane_cp11

0xd6d1,	// (0x0002c6d2) clock_digital_number_pane_cp12

0xd6d9,	// (0x0002c6da) clock_digital_number_pane_cp13

0xd6e1,	// (0x0002c6e2) clock_digital_separator_pane_cp10

0x3167,	// (0x00022168) popup_clock_digital_analogue_window_cp2_g1

0x3167,	// (0x00022168) popup_clock_digital_analogue_window_cp2_g2

0xd6e9,	// (0x0002c6ea) popup_clock_digital_analogue_window_cp2_g3

0x3167,	// (0x00022168) popup_clock_digital_analogue_window_cp2_g4

0xd6e9,	// (0x0002c6ea) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4b,	// (0x0002ed4c) popup_clock_digital_analogue_window_cp2_g

0xd6f1,	// (0x0002c6f2) popup_clock_digital_analogue_window_cp2_t1

0xd6ff,	// (0x0002c700) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd56,	// (0x0002ed57) popup_clock_digital_analogue_window_cp2_t

0xbb8e,	// (0x0002ab8f) clock_digital_number_pane_cp10_g1

0xbb8e,	// (0x0002ab8f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0002eb3f) clock_digital_number_pane_cp10_g

0xbb8e,	// (0x0002ab8f) clock_digital_separator_pane_cp10_g1

0xbb8e,	// (0x0002ab8f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0002eb3f) clock_digital_separator_pane_cp10_g

0xd52c,	// (0x0002c52d) uniindi_top_pane_g3

0xd53d,	// (0x0002c53e) uniindi_top_pane_g4

0x8e6b,	// (0x00027e6c) vkb2_row_keypad_pane_ParamLimits

0x8e6b,	// (0x00027e6c) vkb2_row_keypad_pane

0x90ad,	// (0x000280ae) vkb2_cell_t_keypad_pane_ParamLimits

0x90ad,	// (0x000280ae) vkb2_cell_t_keypad_pane

0x90bd,	// (0x000280be) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x90bd,	// (0x000280be) vkb2_cell_t_keypad_pane_cp08

0x90d2,	// (0x000280d3) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x90d2,	// (0x000280d3) vkb2_cell_t_keypad_pane_cp09

0x90e6,	// (0x000280e7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x90e6,	// (0x000280e7) vkb2_cell_t_keypad_pane_cp01

0x90f7,	// (0x000280f8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x90f7,	// (0x000280f8) vkb2_cell_t_keypad_pane_cp02

0x9108,	// (0x00028109) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9108,	// (0x00028109) vkb2_cell_t_keypad_pane_cp03

0x9119,	// (0x0002811a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9119,	// (0x0002811a) vkb2_cell_t_keypad_pane_cp04

0x912a,	// (0x0002812b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x912a,	// (0x0002812b) vkb2_cell_t_keypad_pane_cp05

0x913b,	// (0x0002813c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x913b,	// (0x0002813c) vkb2_cell_t_keypad_pane_cp06

0x914e,	// (0x0002814f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x914e,	// (0x0002814f) vkb2_cell_t_keypad_pane_cp07

0x9163,	// (0x00028164) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9163,	// (0x00028164) vkb2_cell_t_keypad_pane_cp10

0xbe09,	// (0x0002ae0a) vkb2_cell_t_keypad_pane_g1

0xdb10,	// (0x0002cb11) vkb2_cell_t_keypad_pane_t1

0x09f5,	// (0x0001f9f6) popup_grid_graphic2_window

0xdb22,	// (0x0002cb23) aid_size_cell_graphic2_ParamLimits

0xdb22,	// (0x0002cb23) aid_size_cell_graphic2

0xdb5a,	// (0x0002cb5b) bg_popup_window_pane_cp21_ParamLimits

0xdb5a,	// (0x0002cb5b) bg_popup_window_pane_cp21

0xdb68,	// (0x0002cb69) graphic2_pages_pane_ParamLimits

0xdb68,	// (0x0002cb69) graphic2_pages_pane

0xdbae,	// (0x0002cbaf) grid_graphic2_control_pane_ParamLimits

0xdbae,	// (0x0002cbaf) grid_graphic2_control_pane

0xdbec,	// (0x0002cbed) grid_graphic2_pane_ParamLimits

0xdbec,	// (0x0002cbed) grid_graphic2_pane

0xdc62,	// (0x0002cc63) cell_graphic2_pane

0x09f5,	// (0x0001f9f6) main_comp_mode_pane

0xcd9d,	// (0x0002bd9e) list_ai3_gene_pane_ParamLimits

0xd165,	// (0x0002c166) bg_popup_window_pane_cp19_ParamLimits

0xd171,	// (0x0002c172) bg_touch_area_indi_pane_ParamLimits

0xd171,	// (0x0002c172) bg_touch_area_indi_pane

0xd187,	// (0x0002c188) bg_touch_area_indi_pane_cp01_ParamLimits

0xd187,	// (0x0002c188) bg_touch_area_indi_pane_cp01

0xd19f,	// (0x0002c1a0) bg_touch_area_indi_pane_cp02_ParamLimits

0xd19f,	// (0x0002c1a0) bg_touch_area_indi_pane_cp02

0xd1b9,	// (0x0002c1ba) bg_touch_area_indi_pane_cp03_ParamLimits

0xd1b9,	// (0x0002c1ba) bg_touch_area_indi_pane_cp03

0xd1d3,	// (0x0002c1d4) popup_slider_window_g1_ParamLimits

0xd1ef,	// (0x0002c1f0) popup_slider_window_g2_ParamLimits

0xd20b,	// (0x0002c20c) popup_slider_window_g3_ParamLimits

0xfce0,	// (0x0002ece1) popup_slider_window_g_ParamLimits

0xd267,	// (0x0002c268) popup_slider_window_t1_ParamLimits

0xd2db,	// (0x0002c2dc) small_volume_slider_vertical_pane_ParamLimits

0xdc62,	// (0x0002cc63) cell_graphic2_pane_ParamLimits

0xdcb4,	// (0x0002ccb5) bg_button_pane_cp10_ParamLimits

0xdcb4,	// (0x0002ccb5) bg_button_pane_cp10

0xdcc9,	// (0x0002ccca) bg_button_pane_cp11_ParamLimits

0xdcc9,	// (0x0002ccca) bg_button_pane_cp11

0xdcde,	// (0x0002ccdf) graphic2_pages_pane_g1_ParamLimits

0xdcde,	// (0x0002ccdf) graphic2_pages_pane_g1

0xdcf9,	// (0x0002ccfa) graphic2_pages_pane_g2_ParamLimits

0xdcf9,	// (0x0002ccfa) graphic2_pages_pane_g2

0x0001,

0xfda4,	// (0x0002eda5) graphic2_pages_pane_g_ParamLimits

0xfda4,	// (0x0002eda5) graphic2_pages_pane_g

0xdd11,	// (0x0002cd12) graphic2_pages_pane_t1_ParamLimits

0xdd11,	// (0x0002cd12) graphic2_pages_pane_t1

0xdd27,	// (0x0002cd28) cell_graphic2_control_pane_ParamLimits

0xdd27,	// (0x0002cd28) cell_graphic2_control_pane

0xdd4a,	// (0x0002cd4b) cell_graphic2_pane_g1_ParamLimits

0xdd4a,	// (0x0002cd4b) cell_graphic2_pane_g1

0xdd57,	// (0x0002cd58) cell_graphic2_pane_g2_ParamLimits

0xdd57,	// (0x0002cd58) cell_graphic2_pane_g2

0xdd64,	// (0x0002cd65) cell_graphic2_pane_g3_ParamLimits

0xdd64,	// (0x0002cd65) cell_graphic2_pane_g3

0xdd71,	// (0x0002cd72) cell_graphic2_pane_g4_ParamLimits

0xdd71,	// (0x0002cd72) cell_graphic2_pane_g4

0xdd7e,	// (0x0002cd7f) cell_graphic2_pane_g5_ParamLimits

0xdd7e,	// (0x0002cd7f) cell_graphic2_pane_g5

0x0004,

0xfda9,	// (0x0002edaa) cell_graphic2_pane_g_ParamLimits

0xfda9,	// (0x0002edaa) cell_graphic2_pane_g

0xdd99,	// (0x0002cd9a) cell_graphic2_pane_t1_ParamLimits

0xdd99,	// (0x0002cd9a) cell_graphic2_pane_t1

0x959a,	// (0x0002859b) grid_highlight_pane_cp11_ParamLimits

0x959a,	// (0x0002859b) grid_highlight_pane_cp11

0x2680,	// (0x00021681) bg_button_pane_cp05

0xddc2,	// (0x0002cdc3) cell_graphic2_control_pane_g1

0xbb8e,	// (0x0002ab8f) bg_touch_area_indi_pane_g1

0xddea,	// (0x0002cdeb) aid_cmod_rocker_key_size

0xddf4,	// (0x0002cdf5) aid_cmode_itu_key_size

0xddfe,	// (0x0002cdff) main_cmode_video_pane

0xde08,	// (0x0002ce09) main_comp_mode_itu_pane

0xde14,	// (0x0002ce15) main_comp_mode_rocker_pane

0xde20,	// (0x0002ce21) cell_cmode_rocker_pane_ParamLimits

0xde20,	// (0x0002ce21) cell_cmode_rocker_pane

0xde34,	// (0x0002ce35) cell_cmode_itu_pane_ParamLimits

0xde34,	// (0x0002ce35) cell_cmode_itu_pane

0x2be8,	// (0x00021be9) bg_button_pane_cp06_ParamLimits

0x2be8,	// (0x00021be9) bg_button_pane_cp06

0xbe09,	// (0x0002ae0a) cell_cmode_rocker_pane_g1_ParamLimits

0xbe09,	// (0x0002ae0a) cell_cmode_rocker_pane_g1

0xd382,	// (0x0002c383) cell_cmode_rocker_pane_g2_ParamLimits

0xd382,	// (0x0002c383) cell_cmode_rocker_pane_g2

0x0001,

0xfdb9,	// (0x0002edba) cell_cmode_rocker_pane_g_ParamLimits

0xfdb9,	// (0x0002edba) cell_cmode_rocker_pane_g

0x09f5,	// (0x0001f9f6) bg_button_pane_cp07

0xde4b,	// (0x0002ce4c) cell_cmode_itu_pane_g1

0xde54,	// (0x0002ce55) cell_cmode_itu_pane_t1

0xde62,	// (0x0002ce63) cell_cmode_itu_pane_t2

0x0001,

0xfdbe,	// (0x0002edbf) cell_cmode_itu_pane_t

0xd5b0,	// (0x0002c5b1) aid_touch_ctrl_left

0xd5b8,	// (0x0002c5b9) aid_touch_ctrl_right

0x09f5,	// (0x0001f9f6) compa_mode_pane

0xde70,	// (0x0002ce71) aid_cmod_rocker_key_size_cp

0xde7a,	// (0x0002ce7b) aid_cmode_itu_key_size_cp

0xde84,	// (0x0002ce85) compa_mode_pane_g1

0xde8c,	// (0x0002ce8d) compa_mode_pane_g2

0xde94,	// (0x0002ce95) compa_mode_pane_g3

0x0002,

0xfdc3,	// (0x0002edc4) compa_mode_pane_g

0xde9c,	// (0x0002ce9d) main_comp_mode_itu_pane_cp

0xdea4,	// (0x0002cea5) main_comp_mode_rocker_pane_cp

0xdeac,	// (0x0002cead) cell_cmode_itu_pane_cp_ParamLimits

0xdeac,	// (0x0002cead) cell_cmode_itu_pane_cp

0xdec1,	// (0x0002cec2) cell_cmode_rocker_pane_cp_ParamLimits

0xdec1,	// (0x0002cec2) cell_cmode_rocker_pane_cp

0x2be8,	// (0x00021be9) bg_button_pane_cp06_cp_ParamLimits

0x2be8,	// (0x00021be9) bg_button_pane_cp06_cp

0xbe09,	// (0x0002ae0a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbe09,	// (0x0002ae0a) cell_cmode_rocker_pane_g1_cp

0xbb8e,	// (0x0002ab8f) cell_cmode_rocker_pane_g2_cp

0x09f5,	// (0x0001f9f6) bg_button_pane_cp07_cp

0xded3,	// (0x0002ced4) cell_cmode_itu_pane_g1_cp

0xdedc,	// (0x0002cedd) cell_cmode_itu_pane_t1_cp

0xdedc,	// (0x0002cedd) cell_cmode_itu_pane_t2_cp

0xaaa3,	// (0x00029aa4) settings_code_pane_cp2

0x2533,	// (0x00021534) bg_popup_window_pane_cp3_ParamLimits

0x286e,	// (0x0002186f) heading_pane_cp3_ParamLimits

0x287a,	// (0x0002187b) listscroll_popup_graphic_pane_ParamLimits

0x875a,	// (0x0002775b) fep_hwr_aid_pane_ParamLimits

0x8b3f,	// (0x00027b40) aid_touch_sctrl_top_ParamLimits

0x8b4c,	// (0x00027b4d) sctrl_sk_top_pane_g1_ParamLimits

0xbe09,	// (0x0002ae0a) sctrl_sk_top_pane_g2_ParamLimits

0xfcf9,	// (0x0002ecfa) sctrl_sk_top_pane_g_ParamLimits

0x8b59,	// (0x00027b5a) sctrl_sk_top_pane_t1_ParamLimits

0x8b3f,	// (0x00027b40) aid_touch_sctrl_bottom_ParamLimits

0x8b59,	// (0x00027b5a) sctrl_sk_bottom_pane_t1_ParamLimits

0xd4f6,	// (0x0002c4f7) aid_area_touch_clock

0x8d42,	// (0x00027d43) aid_vkb2_area_top_pane_cell_ParamLimits

0x8d42,	// (0x00027d43) aid_vkb2_area_top_pane_cell

0x8e8d,	// (0x00027e8e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8e8d,	// (0x00027e8e) aid_vkb2_area_bottom_pane_cell

0xda5b,	// (0x0002ca5c) popup_char_count_window

0xdeea,	// (0x0002ceeb) popup_char_count_window_g1

0xdef3,	// (0x0002cef4) popup_char_count_window_g2

0xdefc,	// (0x0002cefd) popup_char_count_window_g3

0x0002,

0xfdca,	// (0x0002edcb) popup_char_count_window_g

0xdf05,	// (0x0002cf06) popup_char_count_window_t1

0x8bfc,	// (0x00027bfd) popup_fep_char_preview_window_ParamLimits

0x8bfc,	// (0x00027bfd) popup_fep_char_preview_window

0x8d60,	// (0x00027d61) vkb2_top_candi_pane_ParamLimits

0x8d60,	// (0x00027d61) vkb2_top_candi_pane

0xdf13,	// (0x0002cf14) cell_vkb2_top_candi_pane_ParamLimits

0xdf13,	// (0x0002cf14) cell_vkb2_top_candi_pane

0x9b76,	// (0x00028b77) bg_popup_fep_char_preview_window_ParamLimits

0x9b76,	// (0x00028b77) bg_popup_fep_char_preview_window

0x9178,	// (0x00028179) popup_fep_char_preview_window_t1_ParamLimits

0x9178,	// (0x00028179) popup_fep_char_preview_window_t1

0xdf64,	// (0x0002cf65) bg_popup_fep_char_preview_window_g1

0xdf6c,	// (0x0002cf6d) bg_popup_fep_char_preview_window_g2

0xdf74,	// (0x0002cf75) bg_popup_fep_char_preview_window_g3

0xdf7c,	// (0x0002cf7d) bg_popup_fep_char_preview_window_g4

0xdf84,	// (0x0002cf85) bg_popup_fep_char_preview_window_g5

0x91b2,	// (0x000281b3) bg_popup_fep_char_preview_window_g6

0xdf8c,	// (0x0002cf8d) bg_popup_fep_char_preview_window_g7

0xdf94,	// (0x0002cf95) bg_popup_fep_char_preview_window_g8

0xdf9c,	// (0x0002cf9d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd1,	// (0x0002edd2) bg_popup_fep_char_preview_window_g

0xbe09,	// (0x0002ae0a) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbe09,	// (0x0002ae0a) cell_vkb2_top_candi_pane_g1

0xc14a,	// (0x0002b14b) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc14a,	// (0x0002b14b) cell_vkb2_top_candi_pane_g2

0xc16b,	// (0x0002b16c) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc16b,	// (0x0002b16c) cell_vkb2_top_candi_pane_g3

0x91ba,	// (0x000281bb) cell_vkb2_top_candi_pane_g4_ParamLimits

0x91ba,	// (0x000281bb) cell_vkb2_top_candi_pane_g4

0xdfa4,	// (0x0002cfa5) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdfa4,	// (0x0002cfa5) cell_vkb2_top_candi_pane_g5

0xd382,	// (0x0002c383) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd382,	// (0x0002c383) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde4,	// (0x0002ede5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde4,	// (0x0002ede5) cell_vkb2_top_candi_pane_g

0x91db,	// (0x000281dc) cell_vkb2_top_candi_pane_t1

0x860a,	// (0x0002760b) aid_size_touch_slider_mark_ParamLimits

0x860a,	// (0x0002760b) aid_size_touch_slider_mark

0xdb9e,	// (0x0002cb9f) grid_graphic2_catg_pane_ParamLimits

0xdb9e,	// (0x0002cb9f) grid_graphic2_catg_pane

0xdc3c,	// (0x0002cc3d) popup_grid_graphic2_window_t1_ParamLimits

0xdc3c,	// (0x0002cc3d) popup_grid_graphic2_window_t1

0xdc4e,	// (0x0002cc4f) popup_grid_graphic2_window_t2_ParamLimits

0xdc4e,	// (0x0002cc4f) popup_grid_graphic2_window_t2

0x0001,

0xfd9f,	// (0x0002eda0) popup_grid_graphic2_window_t_ParamLimits

0xfd9f,	// (0x0002eda0) popup_grid_graphic2_window_t

0x2680,	// (0x00021681) bg_button_pane_cp05_ParamLimits

0xddc2,	// (0x0002cdc3) cell_graphic2_control_pane_g1_ParamLimits

0xdfc5,	// (0x0002cfc6) cell_graphic2_catg_pane_ParamLimits

0xdfc5,	// (0x0002cfc6) cell_graphic2_catg_pane

0x09f5,	// (0x0001f9f6) bg_button_pane_cp12

0xdfd7,	// (0x0002cfd8) cell_graphic2_catg_pane_g1

0xd4c2,	// (0x0002c4c3) cell_tb_ext_pane_t1_ParamLimits

0x8faa,	// (0x00027fab) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8faa,	// (0x00027fab) vkb2_top_cell_right_narrow_pane

0x8fc2,	// (0x00027fc3) vkb2_top_cell_right_wide_pane_ParamLimits

0x8fc2,	// (0x00027fc3) vkb2_top_cell_right_wide_pane

0xf001,	// (0x0002e002) bg_vkb2_func_pane_ParamLimits

0xf001,	// (0x0002e002) bg_vkb2_func_pane

0x9033,	// (0x00028034) vkb2_top_cell_left_pane_g1_ParamLimits

0xf001,	// (0x0002e002) bg_vkb2_fuc_pane_cp03_ParamLimits

0xf001,	// (0x0002e002) bg_vkb2_fuc_pane_cp03

0x9091,	// (0x00028092) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x952e,	// (0x0002852f) bg_vkb2_func_pane_g1

0x9536,	// (0x00028537) bg_vkb2_func_pane_g2

0x9546,	// (0x00028547) bg_vkb2_func_pane_g3

0x953e,	// (0x0002853f) bg_vkb2_func_pane_g4

0x954e,	// (0x0002854f) bg_vkb2_func_pane_g5

0x9556,	// (0x00028557) bg_vkb2_func_pane_g6

0x955e,	// (0x0002855f) bg_vkb2_func_pane_g7

0x9566,	// (0x00028567) bg_vkb2_func_pane_g8

0x9526,	// (0x00028527) bg_vkb2_func_pane_g9

0x0008,

0xfdf1,	// (0x0002edf2) bg_vkb2_func_pane_g

0xf001,	// (0x0002e002) bg_vkb2_fuc_pane_cp01_ParamLimits

0xf001,	// (0x0002e002) bg_vkb2_fuc_pane_cp01

0x9033,	// (0x00028034) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9033,	// (0x00028034) vkb2_top_cell_right_wide_pane_g1

0xf001,	// (0x0002e002) bg_vkb2_fuc_pane_cp02_ParamLimits

0xf001,	// (0x0002e002) bg_vkb2_fuc_pane_cp02

0x9091,	// (0x00028092) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9091,	// (0x00028092) vkb2_top_cell_right_narrow_pane_g1

0xd0e3,	// (0x0002c0e4) aid_touch_area_decrease_ParamLimits

0xd0e3,	// (0x0002c0e4) aid_touch_area_decrease

0xd107,	// (0x0002c108) aid_touch_area_increase_ParamLimits

0xd107,	// (0x0002c108) aid_touch_area_increase

0xd113,	// (0x0002c114) aid_touch_area_mute_ParamLimits

0xd113,	// (0x0002c114) aid_touch_area_mute

0xd137,	// (0x0002c138) aid_touch_area_slider_ParamLimits

0xd137,	// (0x0002c138) aid_touch_area_slider

0xd227,	// (0x0002c228) popup_slider_window_g4_ParamLimits

0xd227,	// (0x0002c228) popup_slider_window_g4

0xd233,	// (0x0002c234) popup_slider_window_g5_ParamLimits

0xd233,	// (0x0002c234) popup_slider_window_g5

0xd255,	// (0x0002c256) popup_slider_window_g6_ParamLimits

0xd255,	// (0x0002c256) popup_slider_window_g6

0xd295,	// (0x0002c296) popup_slider_window_t2_ParamLimits

0xd295,	// (0x0002c296) popup_slider_window_t2

0x0001,

0xfced,	// (0x0002ecee) popup_slider_window_t_ParamLimits

0xfced,	// (0x0002ecee) popup_slider_window_t

0xd2ad,	// (0x0002c2ae) slider_pane_ParamLimits

0xd2ad,	// (0x0002c2ae) slider_pane

0xdfe0,	// (0x0002cfe1) slider_pane_g1_ParamLimits

0xdfe0,	// (0x0002cfe1) slider_pane_g1

0xdff4,	// (0x0002cff5) slider_pane_g2_ParamLimits

0xdff4,	// (0x0002cff5) slider_pane_g2

0xe00a,	// (0x0002d00b) slider_pane_g3_ParamLimits

0xe00a,	// (0x0002d00b) slider_pane_g3

0x0003,

0xfe04,	// (0x0002ee05) slider_pane_g_ParamLimits

0xfe04,	// (0x0002ee05) slider_pane_g

0x7d5a,	// (0x00026d5b) popup_tb_float_extension_window_ParamLimits

0x7d5a,	// (0x00026d5b) popup_tb_float_extension_window

0xe036,	// (0x0002d037) aid_size_cell_tb_float_ext

0x09f5,	// (0x0001f9f6) bg_popup_sub_window_cp28

0xe042,	// (0x0002d043) grid_tb_float_ext_pane

0xe04e,	// (0x0002d04f) cell_tb_float_ext_pane_ParamLimits

0xe04e,	// (0x0002d04f) cell_tb_float_ext_pane

0xe06a,	// (0x0002d06b) cell_tb_float_ext_pane_g1

0xe073,	// (0x0002d074) grid_highlight_pane_cp12

0x8893,	// (0x00027894) cell_last_hwr_side_pane_ParamLimits

0x8893,	// (0x00027894) cell_last_hwr_side_pane

0xbb8e,	// (0x0002ab8f) cell_last_hwr_side_pane_g1

0xe07c,	// (0x0002d07d) cell_last_hwr_side_pane_g2

0x0001,

0xfe0d,	// (0x0002ee0e) cell_last_hwr_side_pane_g

0x8f59,	// (0x00027f5a) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8f59,	// (0x00027f5a) vkb2_area_bottom_space_btn_pane

0xbe09,	// (0x0002ae0a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdb10,	// (0x0002cb11) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x91db,	// (0x000281dc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x91f9,	// (0x000281fa) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x91f9,	// (0x000281fa) vkb2_area_bottom_space_btn_pane_g1

0x9233,	// (0x00028234) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9233,	// (0x00028234) vkb2_area_bottom_space_btn_pane_g2

0x9269,	// (0x0002826a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9269,	// (0x0002826a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe12,	// (0x0002ee13) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe12,	// (0x0002ee13) vkb2_area_bottom_space_btn_pane_g

0x8803,	// (0x00027804) cel_fep_hwr_func_pane_ParamLimits

0x8803,	// (0x00027804) cel_fep_hwr_func_pane

0x883f,	// (0x00027840) cell_hwr_side_button_pane_ParamLimits

0x883f,	// (0x00027840) cell_hwr_side_button_pane

0xd4f6,	// (0x0002c4f7) aid_area_touch_clock_ParamLimits

0x2680,	// (0x00021681) bg_uniindi_top_pane_ParamLimits

0xd50a,	// (0x0002c50b) uniindi_top_pane_g1_ParamLimits

0xd520,	// (0x0002c521) uniindi_top_pane_g2_ParamLimits

0xd52c,	// (0x0002c52d) uniindi_top_pane_g3_ParamLimits

0xd53d,	// (0x0002c53e) uniindi_top_pane_g4_ParamLimits

0xfd25,	// (0x0002ed26) uniindi_top_pane_g_ParamLimits

0xd54a,	// (0x0002c54b) uniindi_top_pane_t1_ParamLimits

0x2680,	// (0x00021681) bg_vkb2_func_pane_cp01_ParamLimits

0x2680,	// (0x00021681) bg_vkb2_func_pane_cp01

0xe085,	// (0x0002d086) cel_fep_hwr_func_pane_g1_ParamLimits

0xe085,	// (0x0002d086) cel_fep_hwr_func_pane_g1

0x2680,	// (0x00021681) bg_vkb2_func_pane_cp02_ParamLimits

0x2680,	// (0x00021681) bg_vkb2_func_pane_cp02

0xe085,	// (0x0002d086) cell_hwr_side_button_pane_g1_ParamLimits

0xe085,	// (0x0002d086) cell_hwr_side_button_pane_g1

0x81e2,	// (0x000271e3) status_pane_g4_ParamLimits

0x81e2,	// (0x000271e3) status_pane_g4

0x81fc,	// (0x000271fd) status_pane_t1

0xb92d,	// (0x0002a92e) form2_midp_gauge_slider_cont_pane

0xb935,	// (0x0002a936) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb947,	// (0x0002a948) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb959,	// (0x0002a95a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf1,	// (0x0002eaf2) form2_midp_gauge_slider_pane_t_ParamLimits

0xb96b,	// (0x0002a96c) form2_midp_slider_pane_ParamLimits

0x8bbc,	// (0x00027bbd) aid_size_cell_func_vkb2_ParamLimits

0x8bbc,	// (0x00027bbd) aid_size_cell_func_vkb2

0xe022,	// (0x0002d023) slider_pane_g4_ParamLimits

0xe022,	// (0x0002d023) slider_pane_g4

0x92b3,	// (0x000282b4) form2_midp_gauge_slider_pane_t2_cp01

0x92c1,	// (0x000282c2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x92c1,	// (0x000282c2) form2_midp_gauge_slider_pane_t3_cp01

0x92de,	// (0x000282df) form2_midp_slider_pane_cp01

0x09f5,	// (0x0001f9f6) navi_smil_pane

0xe0be,	// (0x0002d0bf) navi_smil_pane_g1

0xe0c6,	// (0x0002d0c7) navi_smil_pane_t1

0xe093,	// (0x0002d094) form2_midp_slider_pane_g1

0xe09c,	// (0x0002d09d) form2_midp_slider_pane_g2

0xe0a4,	// (0x0002d0a5) form2_midp_slider_pane_g3

0xe093,	// (0x0002d094) form2_midp_slider_pane_g4

0xe0ac,	// (0x0002d0ad) form2_midp_slider_pane_g5

0x0004,

0xfe1b,	// (0x0002ee1c) form2_midp_slider_pane_g

0x92a3,	// (0x000282a4) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x92a3,	// (0x000282a4) vkb2_area_bottom_space_btn_pane_g4

0x7ff9,	// (0x00026ffa) lc0_navi_pane_ParamLimits

0x7ff9,	// (0x00026ffa) lc0_navi_pane

0x8075,	// (0x00027076) lc0_stat_indi_pane_ParamLimits

0x8075,	// (0x00027076) lc0_stat_indi_pane

0x808c,	// (0x0002708d) ls0_title_pane_ParamLimits

0x808c,	// (0x0002708d) ls0_title_pane

0x2be8,	// (0x00021be9) bg_popup_sub_pane_cp14_ParamLimits

0xd4dd,	// (0x0002c4de) list_uniindi_pane_ParamLimits

0xd4e9,	// (0x0002c4ea) uniindi_top_pane_ParamLimits

0xd588,	// (0x0002c589) list_single_uniindi_pane_g1_ParamLimits

0xd59b,	// (0x0002c59c) list_single_uniindi_pane_t1_ParamLimits

0x92e7,	// (0x000282e8) lc0_stat_clock_pane_ParamLimits

0x92e7,	// (0x000282e8) lc0_stat_clock_pane

0xe0d4,	// (0x0002d0d5) lc0_stat_indi_pane_g1_ParamLimits

0xe0d4,	// (0x0002d0d5) lc0_stat_indi_pane_g1

0xe0e1,	// (0x0002d0e2) lc0_stat_indi_pane_g2_ParamLimits

0xe0e1,	// (0x0002d0e2) lc0_stat_indi_pane_g2

0x0001,

0xfe26,	// (0x0002ee27) lc0_stat_indi_pane_g_ParamLimits

0xfe26,	// (0x0002ee27) lc0_stat_indi_pane_g

0x92f4,	// (0x000282f5) lc0_uni_indicator_pane_ParamLimits

0x92f4,	// (0x000282f5) lc0_uni_indicator_pane

0xe0ee,	// (0x0002d0ef) ls0_title_pane_g1_ParamLimits

0xe0ee,	// (0x0002d0ef) ls0_title_pane_g1

0xe102,	// (0x0002d103) ls0_title_pane_t1_ParamLimits

0xe102,	// (0x0002d103) ls0_title_pane_t1

0x9301,	// (0x00028302) lc0_uni_indicator_pane_g1_ParamLimits

0x9301,	// (0x00028302) lc0_uni_indicator_pane_g1

0xe138,	// (0x0002d139) lc0_stat_clock_pane_t1

0x09f5,	// (0x0001f9f6) main_ai5_pane

0xe146,	// (0x0002d147) ai5_sk_pane_ParamLimits

0xe146,	// (0x0002d147) ai5_sk_pane

0xe153,	// (0x0002d154) cell_ai5_widget_pane_ParamLimits

0xe153,	// (0x0002d154) cell_ai5_widget_pane

0xe6ef,	// (0x0002d6f0) aid_size_cell_widget_grid

0xe705,	// (0x0002d706) bg_ai5_widget_pane_ParamLimits

0xe705,	// (0x0002d706) bg_ai5_widget_pane

0xe76f,	// (0x0002d770) cell_ai5_widget_pane_g2

0xe77f,	// (0x0002d780) cell_ai5_widget_pane_g3

0xe79e,	// (0x0002d79f) cell_ai5_widget_pane_g4

0xe7aa,	// (0x0002d7ab) cell_ai5_widget_pane_g5

0xe7b6,	// (0x0002d7b7) cell_ai5_widget_pane_g6

0xe7c2,	// (0x0002d7c3) cell_ai5_widget_pane_g7

0xe80a,	// (0x0002d80b) cell_ai5_widget_pane_t1_ParamLimits

0xe80a,	// (0x0002d80b) cell_ai5_widget_pane_t1

0xe827,	// (0x0002d828) cell_ai5_widget_pane_t2_ParamLimits

0xe827,	// (0x0002d828) cell_ai5_widget_pane_t2

0xe83f,	// (0x0002d840) cell_ai5_widget_pane_t3_ParamLimits

0xe83f,	// (0x0002d840) cell_ai5_widget_pane_t3

0xe857,	// (0x0002d858) cell_ai5_widget_pane_t4_ParamLimits

0xe857,	// (0x0002d858) cell_ai5_widget_pane_t4

0xe871,	// (0x0002d872) cell_ai5_widget_pane_t5_ParamLimits

0xe871,	// (0x0002d872) cell_ai5_widget_pane_t5

0xe890,	// (0x0002d891) cell_ai5_widget_pane_t6_ParamLimits

0xe890,	// (0x0002d891) cell_ai5_widget_pane_t6

0xe8a2,	// (0x0002d8a3) cell_ai5_widget_pane_t7_ParamLimits

0xe8a2,	// (0x0002d8a3) cell_ai5_widget_pane_t7

0xe8bb,	// (0x0002d8bc) cell_ai5_widget_pane_t8_ParamLimits

0xe8bb,	// (0x0002d8bc) cell_ai5_widget_pane_t8

0x0009,

0xfe40,	// (0x0002ee41) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x0002ee41) cell_ai5_widget_pane_t

0xe907,	// (0x0002d908) grid_ai5_widget_pane

0x2be8,	// (0x00021be9) highlight_cell_ai5_widget_pane_ParamLimits

0x2be8,	// (0x00021be9) highlight_cell_ai5_widget_pane

0xe91f,	// (0x0002d920) ai5_sk_left_pane

0xe929,	// (0x0002d92a) ai5_sk_middle_pane

0xe933,	// (0x0002d934) ai5_sk_right_pane

0xe93d,	// (0x0002d93e) bg_ai5_widget_pane_g1_ParamLimits

0xe93d,	// (0x0002d93e) bg_ai5_widget_pane_g1

0xe949,	// (0x0002d94a) bg_ai5_widget_pane_g2_ParamLimits

0xe949,	// (0x0002d94a) bg_ai5_widget_pane_g2

0xe955,	// (0x0002d956) bg_ai5_widget_pane_g3_ParamLimits

0xe955,	// (0x0002d956) bg_ai5_widget_pane_g3

0xe961,	// (0x0002d962) bg_ai5_widget_pane_g4_ParamLimits

0xe961,	// (0x0002d962) bg_ai5_widget_pane_g4

0xe96d,	// (0x0002d96e) bg_ai5_widget_pane_g5_ParamLimits

0xe96d,	// (0x0002d96e) bg_ai5_widget_pane_g5

0xe979,	// (0x0002d97a) bg_ai5_widget_pane_g6_ParamLimits

0xe979,	// (0x0002d97a) bg_ai5_widget_pane_g6

0xe985,	// (0x0002d986) bg_ai5_widget_pane_g7_ParamLimits

0xe985,	// (0x0002d986) bg_ai5_widget_pane_g7

0xe991,	// (0x0002d992) bg_ai5_widget_pane_g8_ParamLimits

0xe991,	// (0x0002d992) bg_ai5_widget_pane_g8

0xe99d,	// (0x0002d99e) bg_ai5_widget_pane_g9_ParamLimits

0xe99d,	// (0x0002d99e) bg_ai5_widget_pane_g9

0x0008,

0xfe55,	// (0x0002ee56) bg_ai5_widget_pane_g_ParamLimits

0xfe55,	// (0x0002ee56) bg_ai5_widget_pane_g

0xe9d6,	// (0x0002d9d7) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9d6,	// (0x0002d9d7) cell_shortcut_ai5_widget_pane

0x72b3,	// (0x000262b4) bg_cell_shortcut_ai5_widget_pane

0xe9e9,	// (0x0002d9ea) cell_grid_ai5_widget_pane_g1

0xe9f2,	// (0x0002d9f3) highlight_cell_shortcut_ai5_widget_pane

0x9536,	// (0x00028537) ai5_sk_left_pane_g1

0xe9fa,	// (0x0002d9fb) ai5_sk_left_pane_g2

0xea02,	// (0x0002da03) ai5_sk_left_pane_g3

0xea0a,	// (0x0002da0b) ai5_sk_left_pane_g4

0x0003,

0xfe68,	// (0x0002ee69) ai5_sk_left_pane_g

0xea12,	// (0x0002da13) ai5_sk_left_pane_t1

0x952e,	// (0x0002852f) ai5_sk_right_pane_g1

0xea20,	// (0x0002da21) ai5_sk_right_pane_g2

0xea28,	// (0x0002da29) ai5_sk_right_pane_g3

0xea30,	// (0x0002da31) ai5_sk_right_pane_g4

0x0003,

0xfe71,	// (0x0002ee72) ai5_sk_right_pane_g

0xea38,	// (0x0002da39) ai5_sk_right_pane_t1

0x952e,	// (0x0002852f) ai5_sk_middle_pane_g1

0x9536,	// (0x00028537) ai5_sk_middle_pane_g2

0x954e,	// (0x0002854f) ai5_sk_middle_pane_g3

0xea28,	// (0x0002da29) ai5_sk_middle_pane_g4

0xea02,	// (0x0002da03) ai5_sk_middle_pane_g5

0xea46,	// (0x0002da47) ai5_sk_middle_pane_g6

0xea4e,	// (0x0002da4f) ai5_sk_middle_pane_g7

0x0006,

0xfe7a,	// (0x0002ee7b) ai5_sk_middle_pane_g

0x7e7b,	// (0x00026e7c) aid_touch_area_size_lc0_ParamLimits

0x7e7b,	// (0x00026e7c) aid_touch_area_size_lc0

0x89a2,	// (0x000279a3) cell_hwr_candidate_pane_t1_ParamLimits

0x7e99,	// (0x00026e9a) aid_touch_navi_pane

0x818c,	// (0x0002718d) status_dt_navi_pane_ParamLimits

0x818c,	// (0x0002718d) status_dt_navi_pane

0x8199,	// (0x0002719a) status_dt_sta_pane_ParamLimits

0x8199,	// (0x0002719a) status_dt_sta_pane

0xea56,	// (0x0002da57) dt_sta_controll_pane

0xea63,	// (0x0002da64) dt_sta_indi_pane

0xea74,	// (0x0002da75) dt_sta_title_pane

0x2680,	// (0x00021681) bg_dt_sta_indi_pane_ParamLimits

0x2680,	// (0x00021681) bg_dt_sta_indi_pane

0xea87,	// (0x0002da88) dt_sta_battery_pane

0xea8f,	// (0x0002da90) dt_sta_indi_pane_g1

0xea98,	// (0x0002da99) dt_sta_indi_pane_g2

0xeaa1,	// (0x0002daa2) dt_sta_indi_pane_g3

0x0002,

0xfe89,	// (0x0002ee8a) dt_sta_indi_pane_g

0xeaaa,	// (0x0002daab) dt_sta_signal_pane

0x2be8,	// (0x00021be9) bg_dt_sta_title_pane_ParamLimits

0x2be8,	// (0x00021be9) bg_dt_sta_title_pane

0xeab3,	// (0x0002dab4) dt_sta_title_pane_g1

0xeabb,	// (0x0002dabc) dt_sta_title_pane_t1_ParamLimits

0xeabb,	// (0x0002dabc) dt_sta_title_pane_t1

0x09f5,	// (0x0001f9f6) bg_dt_sta_control_pane

0xead0,	// (0x0002dad1) dt_sta_controll_pane_g1

0xead9,	// (0x0002dada) bg_dt_sta_title_pane_g1

0xeae2,	// (0x0002dae3) bg_dt_sta_title_pane_g2

0xeaeb,	// (0x0002daec) bg_dt_sta_title_pane_g3

0x0002,

0xfe90,	// (0x0002ee91) bg_dt_sta_title_pane_g

0xbb8e,	// (0x0002ab8f) bg_dt_sta_indi_pane_g1

0xeaf4,	// (0x0002daf5) dt_sta_signal_pane_g1

0xeafc,	// (0x0002dafd) dt_sta_signal_pane_g2

0x0001,

0xfe97,	// (0x0002ee98) dt_sta_signal_pane_g

0xeb04,	// (0x0002db05) dt_sta_battery_pane_g1

0xeb0d,	// (0x0002db0e) dt_sta_battery_pane_t1

0xbb8e,	// (0x0002ab8f) bg_dt_sta_control_pane_g1

0x6c6d,	// (0x00025c6e) fep_china_uni_eep_pane

0x6c75,	// (0x00025c76) fep_china_uni_entry_pane_ParamLimits

0x6c85,	// (0x00025c86) popup_fep_china_uni_window_g1_ParamLimits

0x6c95,	// (0x00025c96) popup_fep_china_uni_window_g2_ParamLimits

0x6c95,	// (0x00025c96) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0002e71f) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0002e71f) popup_fep_china_uni_window_g

0xeb1c,	// (0x0002db1d) fep_china_uni_eep_pane_g1

0xeb24,	// (0x0002db25) fep_china_uni_eep_pane_t1

0xe0b5,	// (0x0002d0b6) aid_touch_area_size_smil_player

0x7ff1,	// (0x00026ff2) lc0_clock_pane

0x81f0,	// (0x000271f1) status_pane_g5_ParamLimits

0x81f0,	// (0x000271f1) status_pane_g5

0x79df,	// (0x000269e0) popup_keymap_window

0x81ae,	// (0x000271af) status_icon_pane

0xe77f,	// (0x0002d780) cell_ai5_widget_pane_g3_ParamLimits

0xe79e,	// (0x0002d79f) cell_ai5_widget_pane_g4_ParamLimits

0xe7aa,	// (0x0002d7ab) cell_ai5_widget_pane_g5_ParamLimits

0xe7ce,	// (0x0002d7cf) cell_ai5_widget_pane_g8_ParamLimits

0xe7ce,	// (0x0002d7cf) cell_ai5_widget_pane_g8

0xe7e2,	// (0x0002d7e3) cell_ai5_widget_pane_g9_ParamLimits

0xe7e2,	// (0x0002d7e3) cell_ai5_widget_pane_g9

0xe7f6,	// (0x0002d7f7) cell_ai5_widget_pane_g10_ParamLimits

0xe7f6,	// (0x0002d7f7) cell_ai5_widget_pane_g10

0xeb33,	// (0x0002db34) status_icon_pane_g1

0x09f5,	// (0x0001f9f6) bg_popup_sub_pane_cp13

0xeb3b,	// (0x0002db3c) popup_keymap_window_t1

0x769c,	// (0x0002669d) control_pane_g6_ParamLimits

0x769c,	// (0x0002669d) control_pane_g6

0x76a9,	// (0x000266aa) control_pane_g7_ParamLimits

0x76a9,	// (0x000266aa) control_pane_g7

0x76b6,	// (0x000266b7) control_pane_g8_ParamLimits

0x76b6,	// (0x000266b7) control_pane_g8

0xea56,	// (0x0002da57) dt_sta_controll_pane_ParamLimits

0xea63,	// (0x0002da64) dt_sta_indi_pane_ParamLimits

0xea74,	// (0x0002da75) dt_sta_title_pane_ParamLimits

0x2aa4,	// (0x00021aa5) aid_size_touch_scroll_bar_cale

0x6294,	// (0x00025295) popup_discreet_window_ParamLimits

0x6294,	// (0x00025295) popup_discreet_window

0x6322,	// (0x00025323) popup_sk_window

0x9b76,	// (0x00028b77) bg_popup_sub_pane_cp28_ParamLimits

0x9b76,	// (0x00028b77) bg_popup_sub_pane_cp28

0xeb49,	// (0x0002db4a) popup_discreet_window_g1_ParamLimits

0xeb49,	// (0x0002db4a) popup_discreet_window_g1

0xeb69,	// (0x0002db6a) popup_discreet_window_t1_ParamLimits

0xeb69,	// (0x0002db6a) popup_discreet_window_t1

0xeb87,	// (0x0002db88) popup_discreet_window_t2_ParamLimits

0xeb87,	// (0x0002db88) popup_discreet_window_t2

0x0002,

0xfe9c,	// (0x0002ee9d) popup_discreet_window_t_ParamLimits

0xfe9c,	// (0x0002ee9d) popup_discreet_window_t

0x9314,	// (0x00028315) popup_sk_window_g1

0x931e,	// (0x0002831f) popup_sk_window_g2

0x0001,

0xfea3,	// (0x0002eea4) popup_sk_window_g

0x9328,	// (0x00028329) popup_sk_window_t1

0x9338,	// (0x00028339) popup_sk_window_t1_copy1

0xe76f,	// (0x0002d770) cell_ai5_widget_pane_g2_ParamLimits

0xe8cd,	// (0x0002d8ce) cell_ai5_widget_pane_t9_ParamLimits

0xe8cd,	// (0x0002d8ce) cell_ai5_widget_pane_t9

0x09f5,	// (0x0001f9f6) main_fep_fshwr2_pane

0x9346,	// (0x00028347) aid_fshwr2_btn_pane

0x9352,	// (0x00028353) aid_fshwr2_syb_pane

0x9363,	// (0x00028364) aid_fshwr2_txt_pane

0x936f,	// (0x00028370) fshwr2_func_candi_pane

0x9380,	// (0x00028381) fshwr2_hwr_syb_pane

0x9393,	// (0x00028394) fshwr2_icf_pane

0x09f5,	// (0x0001f9f6) fshwr2_icf_bg_pane

0xebd9,	// (0x0002dbda) fshwr2_icf_pane_t1_ParamLimits

0xebd9,	// (0x0002dbda) fshwr2_icf_pane_t1

0xbb8e,	// (0x0002ab8f) fshwr2_func_candi_pane_g1

0xebf0,	// (0x0002dbf1) fshwr2_func_candi_row_pane_ParamLimits

0xebf0,	// (0x0002dbf1) fshwr2_func_candi_row_pane

0xec01,	// (0x0002dc02) cell_fshwr2_syb_pane_ParamLimits

0xec01,	// (0x0002dc02) cell_fshwr2_syb_pane

0xbe09,	// (0x0002ae0a) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbe09,	// (0x0002ae0a) fshwr2_hwr_syb_pane_g1

0x09f5,	// (0x0001f9f6) bg_popup_call_pane_cp01

0xec1b,	// (0x0002dc1c) fshwr2_func_candi_cell_pane_ParamLimits

0xec1b,	// (0x0002dc1c) fshwr2_func_candi_cell_pane

0xec4d,	// (0x0002dc4e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec4d,	// (0x0002dc4e) fshwr2_func_candi_cell_bg_pane

0xec67,	// (0x0002dc68) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec67,	// (0x0002dc68) fshwr2_func_candi_cell_pane_g1

0xec87,	// (0x0002dc88) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec87,	// (0x0002dc88) fshwr2_func_candi_cell_pane_t1

0x09f5,	// (0x0001f9f6) bg_button_pane_cp08

0x72b3,	// (0x000262b4) cell_fshwr2_syb_bg_pane

0xec9a,	// (0x0002dc9b) cell_fshwr2_syb_bg_pane_g1

0xeca2,	// (0x0002dca3) cell_fshwr2_syb_bg_pane_t1

0x2be8,	// (0x00021be9) main_tmo_pane

0xa69a,	// (0x0002969b) uni_indicator_pane_g1_ParamLimits

0xa6af,	// (0x000296b0) uni_indicator_pane_g2_ParamLimits

0xa6c5,	// (0x000296c6) uni_indicator_pane_g3_ParamLimits

0xa6db,	// (0x000296dc) uni_indicator_pane_g4_ParamLimits

0xa6db,	// (0x000296dc) uni_indicator_pane_g4

0xa6ef,	// (0x000296f0) uni_indicator_pane_g5_ParamLimits

0xa6ef,	// (0x000296f0) uni_indicator_pane_g5

0xa703,	// (0x00029704) uni_indicator_pane_g6_ParamLimits

0xa703,	// (0x00029704) uni_indicator_pane_g6

0xf922,	// (0x0002e923) uni_indicator_pane_g_ParamLimits

0xd0b3,	// (0x0002c0b4) popup_tmo_note_window_ParamLimits

0xd0b3,	// (0x0002c0b4) popup_tmo_note_window

0x2be8,	// (0x00021be9) fshwr2_bg_pane

0xec78,	// (0x0002dc79) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec78,	// (0x0002dc79) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea8,	// (0x0002eea9) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea8,	// (0x0002eea9) fshwr2_func_candi_cell_pane_g

0xbb8e,	// (0x0002ab8f) bg_popup_window_pane_cp01

0xecb1,	// (0x0002dcb2) bg_popup_window_pane_g1_cp01

0xecba,	// (0x0002dcbb) bg_popup_window_pane_cp22_ParamLimits

0xecba,	// (0x0002dcbb) bg_popup_window_pane_cp22

0xecc8,	// (0x0002dcc9) listscroll_tmo_link_pane_ParamLimits

0xecc8,	// (0x0002dcc9) listscroll_tmo_link_pane

0xed08,	// (0x0002dd09) popup_tmo_note_window_g1_ParamLimits

0xed08,	// (0x0002dd09) popup_tmo_note_window_g1

0xed15,	// (0x0002dd16) tmo_note_info_pane_ParamLimits

0xed15,	// (0x0002dd16) tmo_note_info_pane

0xed2f,	// (0x0002dd30) list_tmo_note_info_pane_g1_ParamLimits

0xed2f,	// (0x0002dd30) list_tmo_note_info_pane_g1

0xed46,	// (0x0002dd47) list_tmo_note_info_pane_g2_ParamLimits

0xed46,	// (0x0002dd47) list_tmo_note_info_pane_g2

0x0001,

0xfead,	// (0x0002eeae) list_tmo_note_info_pane_g_ParamLimits

0xfead,	// (0x0002eeae) list_tmo_note_info_pane_g

0xed62,	// (0x0002dd63) list_tmo_note_info_text_pane_ParamLimits

0xed62,	// (0x0002dd63) list_tmo_note_info_text_pane

0xede7,	// (0x0002dde8) list_tmo_link_pane

0xedf4,	// (0x0002ddf5) scroll_pane_cp20

0xee01,	// (0x0002de02) list_single_tmo_link_pane_ParamLimits

0xee01,	// (0x0002de02) list_single_tmo_link_pane

0xee11,	// (0x0002de12) list_single_tmo_link_pane_t1

0xee1f,	// (0x0002de20) list_tmo_note_info_text_pane_t1_ParamLimits

0xee1f,	// (0x0002de20) list_tmo_note_info_text_pane_t1

0x6795,	// (0x00025796) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6795,	// (0x00025796) aid_size_touch_scroll_bar_cp01

0x552a,	// (0x0002452b) aid_size_touch_slider_marker

0x630a,	// (0x0002530b) popup_settings_window_ParamLimits

0x630a,	// (0x0002530b) popup_settings_window

0x56d5,	// (0x000246d6) popup_candi_list_indi_window

0x7e99,	// (0x00026e9a) aid_touch_navi_pane_ParamLimits

0x8b13,	// (0x00027b14) rs_clock_indi_pane

0x8b1c,	// (0x00027b1d) sctrl_sk_bottom_pane_ParamLimits

0x8b2d,	// (0x00027b2e) sctrl_sk_top_pane_ParamLimits

0x8c16,	// (0x00027c17) popup_fep_tooltip_window

0xe6ef,	// (0x0002d6f0) aid_size_cell_widget_grid_ParamLimits

0xe763,	// (0x0002d764) cell_ai5_widget_pane_g1_ParamLimits

0xe763,	// (0x0002d764) cell_ai5_widget_pane_g1

0xe7b6,	// (0x0002d7b7) cell_ai5_widget_pane_g6_ParamLimits

0xe7c2,	// (0x0002d7c3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2b,	// (0x0002ee2c) cell_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x0002ee2c) cell_ai5_widget_pane_g

0xe8f1,	// (0x0002d8f2) cell_ai5_widget_pane_t10_ParamLimits

0xe8f1,	// (0x0002d8f2) cell_ai5_widget_pane_t10

0xe907,	// (0x0002d908) grid_ai5_widget_pane_ParamLimits

0xe9a9,	// (0x0002d9aa) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a9,	// (0x0002d9aa) cell_contacts_ai5_widget_pane

0xeb9c,	// (0x0002db9d) popup_discreet_window_t3_ParamLimits

0xeb9c,	// (0x0002db9d) popup_discreet_window_t3

0x93a8,	// (0x000283a9) popup_fshwr2_char_preview_window_ParamLimits

0x93a8,	// (0x000283a9) popup_fshwr2_char_preview_window

0xed80,	// (0x0002dd81) tmo_note_info_pane_t1

0xed95,	// (0x0002dd96) tmo_note_info_pane_t2

0xedae,	// (0x0002ddaf) tmo_note_info_pane_t3

0xedc3,	// (0x0002ddc4) tmo_note_info_pane_t4

0xedd5,	// (0x0002ddd6) tmo_note_info_pane_t5

0x0004,

0xfeb2,	// (0x0002eeb3) tmo_note_info_pane_t

0xede7,	// (0x0002dde8) list_tmo_link_pane_ParamLimits

0xedf4,	// (0x0002ddf5) scroll_pane_cp20_ParamLimits

0x09f5,	// (0x0001f9f6) bg_popup_fep_char_preview_window_cp01

0xee38,	// (0x0002de39) popup_fshwr2_char_preview_window_t1

0xee46,	// (0x0002de47) popup_candi_list_indi_window_g1

0xee4f,	// (0x0002de50) bg_cell_contacts_ai5_widget_pane

0xee5b,	// (0x0002de5c) cell_contacts_ai5_widget_pane_g1

0xee6e,	// (0x0002de6f) cell_contacts_ai5_widget_pane_g2

0xee7a,	// (0x0002de7b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebd,	// (0x0002eebe) cell_contacts_ai5_widget_pane_g

0xee8c,	// (0x0002de8d) cell_contacts_ai5_widget_pane_t1

0x2be8,	// (0x00021be9) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef06,	// (0x0002df07) settings_container_pane

0x72b3,	// (0x000262b4) listscroll_set_pane_copy1

0xb2a9,	// (0x0002a2aa) scroll_pane_cp121_copy1

0xef12,	// (0x0002df13) set_content_pane_copy1

0xef1a,	// (0x0002df1b) aid_height_set_list_copy1_ParamLimits

0xef1a,	// (0x0002df1b) aid_height_set_list_copy1

0xa92f,	// (0x00029930) aid_size_parent_copy1_ParamLimits

0xa92f,	// (0x00029930) aid_size_parent_copy1

0xef26,	// (0x0002df27) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef26,	// (0x0002df27) button_value_adjust_pane_cp6_copy1

0x7820,	// (0x00026821) list_highlight_pane_cp2_copy1_ParamLimits

0x7820,	// (0x00026821) list_highlight_pane_cp2_copy1

0xef3a,	// (0x0002df3b) list_set_pane_copy1_ParamLimits

0xef3a,	// (0x0002df3b) list_set_pane_copy1

0xeea1,	// (0x0002dea2) main_pane_set_t1_copy1_ParamLimits

0xeea1,	// (0x0002dea2) main_pane_set_t1_copy1

0xeedb,	// (0x0002dedc) main_pane_set_t2_copy1_ParamLimits

0xeedb,	// (0x0002dedc) main_pane_set_t2_copy1

0xf00f,	// (0x0002e010) main_pane_set_t3_copy1

0xf01d,	// (0x0002e01e) main_pane_set_t4_copy1

0xeefa,	// (0x0002defb) set_content_pane_g1_copy1_ParamLimits

0xeefa,	// (0x0002defb) set_content_pane_g1_copy1

0xf02b,	// (0x0002e02c) setting_code_pane_copy1

0xf033,	// (0x0002e034) setting_slider_graphic_pane_copy1

0xf033,	// (0x0002e034) setting_slider_pane_copy1

0xf033,	// (0x0002e034) setting_text_pane_copy1

0xf033,	// (0x0002e034) setting_volume_pane_copy1

0xf02b,	// (0x0002e02c) settings_code_pane_cp2_copy1

0xf03b,	// (0x0002e03c) settings_code_pane_cp_copy1_ParamLimits

0xf03b,	// (0x0002e03c) settings_code_pane_cp_copy1

0x93c0,	// (0x000283c1) volume_set_pane_copy1

0xf04f,	// (0x0002e050) volume_set_pane_g10_copy1

0xf05b,	// (0x0002e05c) volume_set_pane_g1_copy1

0xf065,	// (0x0002e066) volume_set_pane_g2_copy1

0xf06f,	// (0x0002e070) volume_set_pane_g3_copy1

0xf079,	// (0x0002e07a) volume_set_pane_g4_copy1

0xf083,	// (0x0002e084) volume_set_pane_g5_copy1

0xf08d,	// (0x0002e08e) volume_set_pane_g6_copy1

0xf097,	// (0x0002e098) volume_set_pane_g7_copy1

0xf0a1,	// (0x0002e0a2) volume_set_pane_g8_copy1

0xf0ab,	// (0x0002e0ac) volume_set_pane_g9_copy1

0x2533,	// (0x00021534) bg_set_opt_pane_cp_copy1_ParamLimits

0x2533,	// (0x00021534) bg_set_opt_pane_cp_copy1

0x93cc,	// (0x000283cd) setting_slider_pane_t1_copy1_ParamLimits

0x93cc,	// (0x000283cd) setting_slider_pane_t1_copy1

0x93ea,	// (0x000283eb) setting_slider_pane_t2_copy1_ParamLimits

0x93ea,	// (0x000283eb) setting_slider_pane_t2_copy1

0x9404,	// (0x00028405) setting_slider_pane_t3_copy1_ParamLimits

0x9404,	// (0x00028405) setting_slider_pane_t3_copy1

0x941c,	// (0x0002841d) slider_set_pane_copy1_ParamLimits

0x941c,	// (0x0002841d) slider_set_pane_copy1

0x2cb1,	// (0x00021cb2) set_opt_bg_pane_g1_copy2

0x2cb9,	// (0x00021cba) set_opt_bg_pane_g2_copy2

0xf0b5,	// (0x0002e0b6) set_opt_bg_pane_g3_copy2

0x2cc9,	// (0x00021cca) set_opt_bg_pane_g4_copy2

0x2cd1,	// (0x00021cd2) set_opt_bg_pane_g5_copy2

0x2cd9,	// (0x00021cda) set_opt_bg_pane_g6_copy2

0xf0bf,	// (0x0002e0c0) set_opt_bg_pane_g7_copy2

0xf0c9,	// (0x0002e0ca) set_opt_bg_pane_g8_copy2

0xf0d3,	// (0x0002e0d4) set_opt_bg_pane_g9_copy2

0xf0dd,	// (0x0002e0de) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0dd,	// (0x0002e0de) aid_size_touch_slider_mark_copy1

0xf0f1,	// (0x0002e0f2) slider_set_pane_g1_copy1

0xf0fa,	// (0x0002e0fb) slider_set_pane_g2_copy1

0xa8c2,	// (0x000298c3) slider_set_pane_g3_copy1_ParamLimits

0xa8c2,	// (0x000298c3) slider_set_pane_g3_copy1

0xa8d6,	// (0x000298d7) slider_set_pane_g4_copy1_ParamLimits

0xa8d6,	// (0x000298d7) slider_set_pane_g4_copy1

0xc33d,	// (0x0002b33e) slider_set_pane_g5_copy1_ParamLimits

0xc33d,	// (0x0002b33e) slider_set_pane_g5_copy1

0xa8c2,	// (0x000298c3) slider_set_pane_g6_copy1_ParamLimits

0xa8c2,	// (0x000298c3) slider_set_pane_g6_copy1

0xf102,	// (0x0002e103) slider_set_pane_g7_copy1_ParamLimits

0xf102,	// (0x0002e103) slider_set_pane_g7_copy1

0x0a09,	// (0x0001fa0a) bg_set_opt_pane_cp2_copy1

0xf118,	// (0x0002e119) setting_slider_graphic_pane_g1_copy1

0xf121,	// (0x0002e122) setting_slider_graphic_pane_t1_copy1

0xf131,	// (0x0002e132) setting_slider_graphic_pane_t2_copy1

0xf141,	// (0x0002e142) slider_set_pane_cp_copy1

0xf151,	// (0x0002e152) input_focus_pane_cp1_copy1

0xf15a,	// (0x0002e15b) list_set_text_pane_copy1

0xf162,	// (0x0002e163) setting_text_pane_g1_copy1

0x5feb,	// (0x00024fec) set_text_pane_t1_copy1

0xf151,	// (0x0002e152) input_focus_pane_cp2_copy1

0xf162,	// (0x0002e163) setting_code_pane_g1_copy1

0xf16b,	// (0x0002e16c) setting_code_pane_t1_copy1

0xf179,	// (0x0002e17a) list_set_graphic_pane_copy1

0x0a09,	// (0x0001fa0a) bg_set_opt_pane_cp4_copy1

0x6fad,	// (0x00025fae) list_set_graphic_pane_g1_copy1_ParamLimits

0x6fad,	// (0x00025fae) list_set_graphic_pane_g1_copy1

0xf18b,	// (0x0002e18c) list_set_graphic_pane_g2_copy1

0x6fc5,	// (0x00025fc6) list_set_graphic_pane_t1_copy1_ParamLimits

0x6fc5,	// (0x00025fc6) list_set_graphic_pane_t1_copy1

0xbb8e,	// (0x0002ab8f) rs_clock_indi_pane_g1

0xf193,	// (0x0002e194) rs_clock_indi_pane_t1

0xf1a1,	// (0x0002e1a2) rs_indi_pane

0xf1a9,	// (0x0002e1aa) rs_indi_pane_g1

0xf1b2,	// (0x0002e1b3) rs_indi_pane_g2

0xf1bb,	// (0x0002e1bc) rs_indi_pane_g3

0x0002,

0xfec4,	// (0x0002eec5) rs_indi_pane_g

0x72b3,	// (0x000262b4) bg_popup_preview_window_pane_cp03

0xf1c4,	// (0x0002e1c5) popup_fep_tooltip_window_t1

0xc85b,	// (0x0002b85c) popup_note2_window_g2_ParamLimits

0xc85b,	// (0x0002b85c) popup_note2_window_g2

0x0001,

0xfc5d,	// (0x0002ec5e) popup_note2_window_g_ParamLimits

0xfc5d,	// (0x0002ec5e) popup_note2_window_g

0xcd63,	// (0x0002bd64) bg_popup_sub_pane_cp11_ParamLimits

0xcd70,	// (0x0002bd71) cell_ai3_links_pane_g1_ParamLimits

0xcd87,	// (0x0002bd88) cell_ai3_links_pane_t1

0x5feb,	// (0x00024fec) set_text_pane_t1_copy1_ParamLimits

0x71c0,	// (0x000261c1) cell_graphic_popup_pane_cp2_ParamLimits

0x71c0,	// (0x000261c1) cell_graphic_popup_pane_cp2

0xf1d2,	// (0x0002e1d3) cell_graphic_popup_pane_g1_cp2

0x28b7,	// (0x000218b8) cell_graphic_popup_pane_g2_cp2

0xf1da,	// (0x0002e1db) cell_graphic_popup_pane_g3_cp2

0xf1e2,	// (0x0002e1e3) cell_graphic_popup_pane_t2_cp2

0x28c8,	// (0x000218c9) grid_highlight_pane_cp3_cp2

0x2f89,	// (0x00021f8a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2be8,	// (0x00021be9) main_tmo_pane_ParamLimits

0xd0a7,	// (0x0002c0a8) popup_tmo_big_image_note_window

0xe753,	// (0x0002d754) cell_ai5_widget_list_pane

0xe75b,	// (0x0002d75c) cell_ai5_widget_lrg_icon_pane

0xed80,	// (0x0002dd81) tmo_note_info_pane_t1_ParamLimits

0xed95,	// (0x0002dd96) tmo_note_info_pane_t2_ParamLimits

0xedae,	// (0x0002ddaf) tmo_note_info_pane_t3_ParamLimits

0xedc3,	// (0x0002ddc4) tmo_note_info_pane_t4_ParamLimits

0xedd5,	// (0x0002ddd6) tmo_note_info_pane_t5_ParamLimits

0xfeb2,	// (0x0002eeb3) tmo_note_info_pane_t_ParamLimits

0xef06,	// (0x0002df07) settings_container_pane_ParamLimits

0xf149,	// (0x0002e14a) indicator_popup_pane_cp5

0xf149,	// (0x0002e14a) indicator_popup_pane_cp6

0xf179,	// (0x0002e17a) list_set_graphic_pane_copy1_ParamLimits

0x09f5,	// (0x0001f9f6) bg_popup_window_pane_cp23

0xf1f0,	// (0x0002e1f1) popup_tmo_big_image_note_window_g1

0xf1fc,	// (0x0002e1fd) popup_tmo_big_image_note_window_t1

0xf20c,	// (0x0002e20d) popup_tmo_big_image_note_window_t2

0xf21c,	// (0x0002e21d) popup_tmo_big_image_note_window_t3

0x0002,

0xfecb,	// (0x0002eecc) popup_tmo_big_image_note_window_t

0xf22c,	// (0x0002e22d) cell_ai5_widget_lrg_icon_pane_g1

0xf234,	// (0x0002e235) cell_ai5_widget_lrg_icon_pane_t1

0xf242,	// (0x0002e243) cell_ai5_widget_list_row_pane_ParamLimits

0xf242,	// (0x0002e243) cell_ai5_widget_list_row_pane

0xf25b,	// (0x0002e25c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf25b,	// (0x0002e25c) cell_ai5_widget_list_row_pane_g1

0xf268,	// (0x0002e269) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf268,	// (0x0002e269) cell_ai5_widget_list_row_pane_t1

0xf280,	// (0x0002e281) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf280,	// (0x0002e281) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed2,	// (0x0002eed3) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed2,	// (0x0002eed3) cell_ai5_widget_list_row_pane_t

0x09f5,	// (0x0001f9f6) main_fep_vtchi_ss_pane

0x9441,	// (0x00028442) popup_fep_char_pre_window

0x9449,	// (0x0002844a) popup_fep_ituss_window

0x946a,	// (0x0002846b) popup_fep_vkbss_window

0xf2a8,	// (0x0002e2a9) grid_vkbss_keypad_pane_ParamLimits

0xf2a8,	// (0x0002e2a9) grid_vkbss_keypad_pane

0xf2b8,	// (0x0002e2b9) ituss_keypad_pane

0x9497,	// (0x00028498) aid_vkbss_key_offset_ParamLimits

0x9497,	// (0x00028498) aid_vkbss_key_offset

0x94a3,	// (0x000284a4) cell_vkbss_key_pane_ParamLimits

0x94a3,	// (0x000284a4) cell_vkbss_key_pane

0xf2c8,	// (0x0002e2c9) bg_cell_vkbss_key_g1_ParamLimits

0xf2c8,	// (0x0002e2c9) bg_cell_vkbss_key_g1

0xf2d4,	// (0x0002e2d5) cell_vkbss_key_3p_pane_ParamLimits

0xf2d4,	// (0x0002e2d5) cell_vkbss_key_3p_pane

0xf2ee,	// (0x0002e2ef) cell_vkbss_key_g1_ParamLimits

0xf2ee,	// (0x0002e2ef) cell_vkbss_key_g1

0xf308,	// (0x0002e309) cell_vkbss_key_t1_ParamLimits

0xf308,	// (0x0002e309) cell_vkbss_key_t1

0x94b9,	// (0x000284ba) cell_ituss_key_pane_ParamLimits

0x94b9,	// (0x000284ba) cell_ituss_key_pane

0xf333,	// (0x0002e334) bg_cell_ituss_key_g1_ParamLimits

0xf333,	// (0x0002e334) bg_cell_ituss_key_g1

0xf33f,	// (0x0002e340) cell_ituss_key_pane_g1_ParamLimits

0xf33f,	// (0x0002e340) cell_ituss_key_pane_g1

0xf353,	// (0x0002e354) cell_ituss_key_pane_g2_ParamLimits

0xf353,	// (0x0002e354) cell_ituss_key_pane_g2

0x0001,

0xfed9,	// (0x0002eeda) cell_ituss_key_pane_g_ParamLimits

0xfed9,	// (0x0002eeda) cell_ituss_key_pane_g

0xf385,	// (0x0002e386) cell_ituss_key_t1_ParamLimits

0xf385,	// (0x0002e386) cell_ituss_key_t1

0xf3bf,	// (0x0002e3c0) cell_ituss_key_t2_ParamLimits

0xf3bf,	// (0x0002e3c0) cell_ituss_key_t2

0xf3f0,	// (0x0002e3f1) cell_ituss_key_t3_ParamLimits

0xf3f0,	// (0x0002e3f1) cell_ituss_key_t3

0xf421,	// (0x0002e422) cell_ituss_key_t4_ParamLimits

0xf421,	// (0x0002e422) cell_ituss_key_t4

0x0003,

0xfede,	// (0x0002eedf) cell_ituss_key_t_ParamLimits

0xfede,	// (0x0002eedf) cell_ituss_key_t

0xf452,	// (0x0002e453) cell_vkbss_key_3p_pane_g1

0xf45a,	// (0x0002e45b) cell_vkbss_key_3p_pane_g2

0xf462,	// (0x0002e463) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x0002eee8) cell_vkbss_key_3p_pane_g

0x09f5,	// (0x0001f9f6) bg_popup_fep_char_preview_window_cp02

0xf46a,	// (0x0002e46b) popup_fep_char_pre_window_t1

0xe6e5,	// (0x0002d6e6) main_ai5_sk_pane

0xee4f,	// (0x0002de50) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee5b,	// (0x0002de5c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee6e,	// (0x0002de6f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee7a,	// (0x0002de7b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebd,	// (0x0002eebe) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee8c,	// (0x0002de8d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2be8,	// (0x00021be9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf479,	// (0x0002e47a) main_ai5_sk_pane_g1

0x99ae,	// (0x000289af) popup_query_code_window_g1

0x945f,	// (0x00028460) popup_fep_vkb_icf_pane

0x9475,	// (0x00028476) popup_fep_vtchi_icf_pane

0x2be8,	// (0x00021be9) bg_icf_pane

0xf482,	// (0x0002e483) list_vkb_icf_pane

0x2be8,	// (0x00021be9) bg_icf_pane_cp01

0xf48e,	// (0x0002e48f) vtchi_icf_list_pane

0xf49f,	// (0x0002e4a0) list_vkb_icf_pane_t1_ParamLimits

0xf49f,	// (0x0002e4a0) list_vkb_icf_pane_t1

0xf4b5,	// (0x0002e4b6) vtchi_icf_list_pane_t1_ParamLimits

0xf4b5,	// (0x0002e4b6) vtchi_icf_list_pane_t1

0x9449,	// (0x0002844a) popup_fep_ituss_window_ParamLimits

0x9475,	// (0x00028476) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b8,	// (0x0002e2b9) ituss_keypad_pane_ParamLimits

0x948b,	// (0x0002848c) ituss_sks_pane

0x2be8,	// (0x00021be9) bg_icf_pane_ParamLimits

0x9432,	// (0x00028433) icf_edit_indi_pane_ParamLimits

0x9432,	// (0x00028433) icf_edit_indi_pane

0xf482,	// (0x0002e483) list_vkb_icf_pane_ParamLimits

0x2be8,	// (0x00021be9) bg_icf_pane_cp01_ParamLimits

0x9432,	// (0x00028433) icf_edit_indi_pane_cp01_ParamLimits

0x9432,	// (0x00028433) icf_edit_indi_pane_cp01

0xf496,	// (0x0002e497) vtchi_query_pane

0xbe09,	// (0x0002ae0a) icf_edit_indi_pane_g1_ParamLimits

0xbe09,	// (0x0002ae0a) icf_edit_indi_pane_g1

0xf537,	// (0x0002e538) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0002e538) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0002ef00) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0002ef00) icf_edit_indi_pane_g

0xf546,	// (0x0002e547) icf_edit_indi_pane_t1

0xf4cd,	// (0x0002e4ce) bg_input_focus_pane_cp042

0x2a9b,	// (0x00021a9c) vtchi_button_pane

0xf4d6,	// (0x0002e4d7) vtchi_query_pane_t1

0xf4e4,	// (0x0002e4e5) vtchi_query_pane_t2

0xf4f2,	// (0x0002e4f3) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0002eeef) vtchi_query_pane_t

0x09f5,	// (0x0001f9f6) bg_button_pane_cp13

0xf500,	// (0x0002e501) vtchi_button_pane_g1

0xf508,	// (0x0002e509) ituss_sks_pane_g1

0xf513,	// (0x0002e514) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0002eef6) ituss_sks_pane_g

0xf51b,	// (0x0002e51c) ituss_sks_pane_t1

0xf529,	// (0x0002e52a) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0002eefb) ituss_sks_pane_t

0xb63e,	// (0x0002a63f) indicator_nsta_pane_cp_g1

0xb647,	// (0x0002a648) indicator_nsta_pane_cp_g2

0xb64f,	// (0x0002a650) indicator_nsta_pane_cp_g3

0xb657,	// (0x0002a658) indicator_nsta_pane_cp_g4

0xb65f,	// (0x0002a660) indicator_nsta_pane_cp_g5

0xb667,	// (0x0002a668) indicator_nsta_pane_cp_g6

0x0005,

0xfaa7,	// (0x0002eaa8) indicator_nsta_pane_cp_g

0xddaf,	// (0x0002cdb0) cell_graphic2_pane_t2_ParamLimits

0xddaf,	// (0x0002cdb0) cell_graphic2_pane_t2

0x0001,

0xfdb4,	// (0x0002edb5) cell_graphic2_pane_t_ParamLimits

0xfdb4,	// (0x0002edb5) cell_graphic2_pane_t

0xdddc,	// (0x0002cddd) cell_graphic2_control_pane_t1

0x6bbd,	// (0x00025bbe) signal_pane_g3_ParamLimits

0x6bbd,	// (0x00025bbe) signal_pane_g3

0x6bcf,	// (0x00025bd0) signal_pane_g4_ParamLimits

0x6bcf,	// (0x00025bd0) signal_pane_g4

0xf292,	// (0x0002e293) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf292,	// (0x0002e293) cell_ai5_widget_list_row_pane_t3

0xf373,	// (0x0002e374) cell_ituss_key_pane_t1_ParamLimits

0xf373,	// (0x0002e374) cell_ituss_key_pane_t1

0x962b,	// (0x0002862c) form_field_data_wide_pane_vc_t2_ParamLimits

0x962b,	// (0x0002862c) form_field_data_wide_pane_vc_t2

0x963f,	// (0x00028640) form_field_data_wide_pane_vc_t3_ParamLimits

0x963f,	// (0x00028640) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0002e80b) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0002e80b) form_field_data_wide_pane_vc_t

0xb2e9,	// (0x0002a2ea) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb2e9,	// (0x0002a2ea) form_field_slider_wide_pane_vc_t3

0xb3bf,	// (0x0002a3c0) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb3bf,	// (0x0002a3c0) form_field_popup_wide_pane_vc_t2

0xb3d6,	// (0x0002a3d7) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb3d6,	// (0x0002a3d7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa96,	// (0x0002ea97) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x0002ea97) form_field_popup_wide_pane_vc_t

0x9346,	// (0x00028347) aid_fshwr2_btn_pane_ParamLimits

0x9352,	// (0x00028353) aid_fshwr2_syb_pane_ParamLimits

0x9363,	// (0x00028364) aid_fshwr2_txt_pane_ParamLimits

0x2be8,	// (0x00021be9) fshwr2_bg_pane_ParamLimits

0x936f,	// (0x00028370) fshwr2_func_candi_pane_ParamLimits

0x9380,	// (0x00028381) fshwr2_hwr_syb_pane_ParamLimits

0x9393,	// (0x00028394) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small

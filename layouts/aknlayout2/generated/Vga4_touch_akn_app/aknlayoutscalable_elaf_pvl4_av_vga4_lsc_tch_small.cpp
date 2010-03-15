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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000257cd };

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
0xa002,	// (0x0002f7cf) Screen

0xa016,	// (0x0002f7e3) application_window_ParamLimits

0xa016,	// (0x0002f7e3) application_window

0xa030,	// (0x0002f7fd) screen_g1

0xa062,	// (0x0002f82f) area_bottom_pane_ParamLimits

0xa062,	// (0x0002f82f) area_bottom_pane

0xf0dd,	// (0x000348aa) area_top_pane_ParamLimits

0xf0dd,	// (0x000348aa) area_top_pane

0xf171,	// (0x0003493e) main_pane_ParamLimits

0xf171,	// (0x0003493e) main_pane

0xa120,	// (0x0002f8ed) misc_graphics

0xb35d,	// (0x00030b2a) battery_pane_ParamLimits

0xb35d,	// (0x00030b2a) battery_pane

0x3584,	// (0x00028d51) bg_status_flat_pane_g8

0x358c,	// (0x00028d59) bg_status_flat_pane_g9

0x17c9,	// (0x00026f96) context_pane_ParamLimits

0x17c9,	// (0x00026f96) context_pane

0xb4d4,	// (0x00030ca1) navi_pane_ParamLimits

0xb4d4,	// (0x00030ca1) navi_pane

0xb55e,	// (0x00030d2b) signal_pane_ParamLimits

0xb55e,	// (0x00030d2b) signal_pane

0x0008,

0xf87a,	// (0x00035047) bg_status_flat_pane_g

0xb5ee,	// (0x00030dbb) status_pane_g1_ParamLimits

0xb5ee,	// (0x00030dbb) status_pane_g1

0xb604,	// (0x00030dd1) status_pane_g2_ParamLimits

0xb604,	// (0x00030dd1) status_pane_g2

0x1a0a,	// (0x000271d7) status_pane_g3_ParamLimits

0x1a0a,	// (0x000271d7) status_pane_g3

0x0004,

0xf7a6,	// (0x00034f73) status_pane_g_ParamLimits

0xf7a6,	// (0x00034f73) status_pane_g

0xb610,	// (0x00030ddd) title_pane_ParamLimits

0xb610,	// (0x00030ddd) title_pane

0xb673,	// (0x00030e40) uni_indicator_pane_ParamLimits

0xb673,	// (0x00030e40) uni_indicator_pane

0x0ff2,	// (0x000267bf) bg_list_pane_ParamLimits

0x0ff2,	// (0x000267bf) bg_list_pane

0x9d7f,	// (0x0002f54c) find_pane

0xabab,	// (0x00030378) listscroll_app_pane_ParamLimits

0xabab,	// (0x00030378) listscroll_app_pane

0x1026,	// (0x000267f3) listscroll_form_pane

0x9d87,	// (0x0002f554) listscroll_gen_pane_ParamLimits

0x9d87,	// (0x0002f554) listscroll_gen_pane

0x1026,	// (0x000267f3) listscroll_set_pane

0x4163,	// (0x00029930) main_idle_act_pane

0x0ae7,	// (0x000262b4) main_idle_trad_pane

0x0ae7,	// (0x000262b4) main_list_empty_pane

0x1054,	// (0x00026821) main_midp_pane

0x1060,	// (0x0002682d) main_pane_g1_ParamLimits

0x1060,	// (0x0002682d) main_pane_g1

0xabb7,	// (0x00030384) popup_ai_message_window_ParamLimits

0xabb7,	// (0x00030384) popup_ai_message_window

0xac57,	// (0x00030424) popup_fep_china_uni_window_ParamLimits

0xac57,	// (0x00030424) popup_fep_china_uni_window

0x1182,	// (0x0002694f) popup_fep_japan_candidate_window_ParamLimits

0x1182,	// (0x0002694f) popup_fep_japan_candidate_window

0x11ac,	// (0x00026979) popup_fep_japan_predictive_window_ParamLimits

0x11ac,	// (0x00026979) popup_fep_japan_predictive_window

0xacb7,	// (0x00030484) popup_find_window

0xacd4,	// (0x000304a1) popup_grid_graphic_window_ParamLimits

0xacd4,	// (0x000304a1) popup_grid_graphic_window

0x121d,	// (0x000269ea) popup_large_graphic_colour_window

0xad78,	// (0x00030545) popup_menu_window_ParamLimits

0xad78,	// (0x00030545) popup_menu_window

0xaf68,	// (0x00030735) popup_note_image_window

0xaf28,	// (0x000306f5) popup_note_wait_window_ParamLimits

0xaf28,	// (0x000306f5) popup_note_wait_window

0xaf80,	// (0x0003074d) popup_note_window_ParamLimits

0xaf80,	// (0x0003074d) popup_note_window

0xb02e,	// (0x000307fb) popup_query_code_window_ParamLimits

0xb02e,	// (0x000307fb) popup_query_code_window

0x1489,	// (0x00026c56) popup_query_data_code_window_ParamLimits

0x1489,	// (0x00026c56) popup_query_data_code_window

0xb06e,	// (0x0003083b) popup_query_data_window_ParamLimits

0xb06e,	// (0x0003083b) popup_query_data_window

0xb102,	// (0x000308cf) popup_query_sat_info_window_ParamLimits

0xb102,	// (0x000308cf) popup_query_sat_info_window

0xb1ad,	// (0x0003097a) popup_snote_single_graphic_window_ParamLimits

0xb1ad,	// (0x0003097a) popup_snote_single_graphic_window

0xb1ad,	// (0x0003097a) popup_snote_single_text_window_ParamLimits

0xb1ad,	// (0x0003097a) popup_snote_single_text_window

0x1524,	// (0x00026cf1) popup_sub_window_general

0x166a,	// (0x00026e37) popup_window_general_ParamLimits

0x166a,	// (0x00026e37) popup_window_general

0x1683,	// (0x00026e50) power_save_pane

0xaa19,	// (0x000301e6) control_pane_g1_ParamLimits

0xaa19,	// (0x000301e6) control_pane_g1

0xaa42,	// (0x0003020f) control_pane_g2_ParamLimits

0xaa42,	// (0x0003020f) control_pane_g2

0x0e9f,	// (0x0002666c) control_pane_g3_ParamLimits

0x0e9f,	// (0x0002666c) control_pane_g3

0x0007,

0xf78e,	// (0x00034f5b) control_pane_g_ParamLimits

0xf78e,	// (0x00034f5b) control_pane_g

0xaaa4,	// (0x00030271) control_pane_t1_ParamLimits

0xaaa4,	// (0x00030271) control_pane_t1

0xab02,	// (0x000302cf) control_pane_t2_ParamLimits

0xab02,	// (0x000302cf) control_pane_t2

0x0002,

0xf79f,	// (0x00034f6c) control_pane_t_ParamLimits

0xf79f,	// (0x00034f6c) control_pane_t

0x0d72,	// (0x0002653f) navi_navi_volume_pane_cp1

0x0d7b,	// (0x00026548) status_small_icon_pane

0x0d83,	// (0x00026550) status_small_pane_g1_ParamLimits

0x0d83,	// (0x00026550) status_small_pane_g1

0x0db7,	// (0x00026584) status_small_pane_g2_ParamLimits

0x0db7,	// (0x00026584) status_small_pane_g2

0x0dc3,	// (0x00026590) status_small_pane_g3_ParamLimits

0x0dc3,	// (0x00026590) status_small_pane_g3

0x0dcf,	// (0x0002659c) status_small_pane_g4_ParamLimits

0x0dcf,	// (0x0002659c) status_small_pane_g4

0x0ddb,	// (0x000265a8) status_small_pane_g5_ParamLimits

0x0ddb,	// (0x000265a8) status_small_pane_g5

0x0dea,	// (0x000265b7) status_small_pane_g6_ParamLimits

0x0dea,	// (0x000265b7) status_small_pane_g6

0x0007,

0xf77d,	// (0x00034f4a) status_small_pane_g_ParamLimits

0xf77d,	// (0x00034f4a) status_small_pane_g

0x0e1a,	// (0x000265e7) status_small_pane_t1

0x0e3d,	// (0x0002660a) status_small_wait_pane_ParamLimits

0x0e3d,	// (0x0002660a) status_small_wait_pane

0xa7ef,	// (0x0002ffbc) aid_levels_signal_ParamLimits

0xa7ef,	// (0x0002ffbc) aid_levels_signal

0xa807,	// (0x0002ffd4) signal_pane_g1_ParamLimits

0xa807,	// (0x0002ffd4) signal_pane_g1

0xa822,	// (0x0002ffef) signal_pane_g2_ParamLimits

0xa822,	// (0x0002ffef) signal_pane_g2

0x0003,

0xf70e,	// (0x00034edb) signal_pane_g_ParamLimits

0xf70e,	// (0x00034edb) signal_pane_g

0x0417,	// (0x00025be4) context_pane_g1

0xa1e9,	// (0x0002f9b6) title_pane_g1

0xa22c,	// (0x0002f9f9) title_pane_t1

0xa2b8,	// (0x0002fa85) title_pane_t2

0xa2de,	// (0x0002faab) title_pane_t3

0x0002,

0xf55d,	// (0x00034d2a) title_pane_t

0xb69b,	// (0x00030e68) aid_levels_battery_ParamLimits

0xb69b,	// (0x00030e68) aid_levels_battery

0xb6b7,	// (0x00030e84) battery_pane_g1_ParamLimits

0xb6b7,	// (0x00030e84) battery_pane_g1

0xb6d4,	// (0x00030ea1) battery_pane_g2_ParamLimits

0xb6d4,	// (0x00030ea1) battery_pane_g2

0x0001,

0xf7b1,	// (0x00034f7e) battery_pane_g_ParamLimits

0xf7b1,	// (0x00034f7e) battery_pane_g

0xbb63,	// (0x00031330) uni_indicator_pane_g1

0xbb78,	// (0x00031345) uni_indicator_pane_g2

0xbb8d,	// (0x0003135a) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x000350ef) uni_indicator_pane_g

0x0955,	// (0x00026122) navi_icon_pane_ParamLimits

0x0955,	// (0x00026122) navi_icon_pane

0x089c,	// (0x00026069) navi_midp_pane

0x0971,	// (0x0002613e) navi_navi_pane

0x097b,	// (0x00026148) navi_text_pane_ParamLimits

0x097b,	// (0x00026148) navi_text_pane

0xa030,	// (0x0002f7fd) status_small_wait_pane_g1

0xcfdc,	// (0x000327a9) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x000350ea) status_small_wait_pane_g

0xbaca,	// (0x00031297) navi_navi_icon_text_pane

0xbad2,	// (0x0003129f) navi_navi_pane_g1_ParamLimits

0xbad2,	// (0x0003129f) navi_navi_pane_g1

0xbae4,	// (0x000312b1) navi_navi_pane_g2_ParamLimits

0xbae4,	// (0x000312b1) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x000350b8) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x000350b8) navi_navi_pane_g

0x3c0d,	// (0x000293da) navi_navi_tabs_pane

0xbaf6,	// (0x000312c3) navi_navi_text_pane

0xbaca,	// (0x00031297) navi_navi_volume_pane

0xbab8,	// (0x00031285) navi_text_pane_t1

0xbaac,	// (0x00031279) navi_icon_pane_g1

0x3b04,	// (0x000292d1) navi_navi_text_pane_t1

0xba87,	// (0x00031254) navi_navi_volume_pane_g1

0xba8f,	// (0x0003125c) volume_small_pane

0xb9e3,	// (0x000311b0) navi_navi_icon_text_pane_g1

0xb9eb,	// (0x000311b8) navi_navi_icon_text_pane_t1

0x0971,	// (0x0002613e) navi_tabs_2_long_pane

0x0971,	// (0x0002613e) navi_tabs_2_pane

0x0971,	// (0x0002613e) navi_tabs_3_long_pane

0x0971,	// (0x0002613e) navi_tabs_3_pane

0x0971,	// (0x0002613e) navi_tabs_4_pane

0xb9a1,	// (0x0003116e) tabs_2_active_pane_ParamLimits

0xb9a1,	// (0x0003116e) tabs_2_active_pane

0xb9b1,	// (0x0003117e) tabs_2_passive_pane_ParamLimits

0xb9b1,	// (0x0003117e) tabs_2_passive_pane

0xb96f,	// (0x0003113c) tabs_3_active_pane_ParamLimits

0xb96f,	// (0x0003113c) tabs_3_active_pane

0xb97f,	// (0x0003114c) tabs_3_passive_pane_ParamLimits

0xb97f,	// (0x0003114c) tabs_3_passive_pane

0xb990,	// (0x0003115d) tabs_3_passive_pane_cp_ParamLimits

0xb990,	// (0x0003115d) tabs_3_passive_pane_cp

0xb92b,	// (0x000310f8) tabs_4_active_pane_ParamLimits

0xb92b,	// (0x000310f8) tabs_4_active_pane

0xb93c,	// (0x00031109) tabs_4_passive_pane_ParamLimits

0xb93c,	// (0x00031109) tabs_4_passive_pane

0xb94d,	// (0x0003111a) tabs_4_passive_pane_cp_ParamLimits

0xb94d,	// (0x0003111a) tabs_4_passive_pane_cp

0xb95e,	// (0x0003112b) tabs_4_passive_pane_cp2_ParamLimits

0xb95e,	// (0x0003112b) tabs_4_passive_pane_cp2

0xb907,	// (0x000310d4) tabs_2_long_active_pane_ParamLimits

0xb907,	// (0x000310d4) tabs_2_long_active_pane

0xb919,	// (0x000310e6) tabs_2_long_passive_pane_ParamLimits

0xb919,	// (0x000310e6) tabs_2_long_passive_pane

0xb8bc,	// (0x00031089) tabs_3_long_active_pane_ParamLimits

0xb8bc,	// (0x00031089) tabs_3_long_active_pane

0xb8d5,	// (0x000310a2) tabs_3_long_passive_pane_ParamLimits

0xb8d5,	// (0x000310a2) tabs_3_long_passive_pane

0xb8ee,	// (0x000310bb) tabs_3_long_passive_pane_cp_ParamLimits

0xb8ee,	// (0x000310bb) tabs_3_long_passive_pane_cp

0x1c6e,	// (0x0002743b) volume_small_pane_g1

0xb86b,	// (0x00031038) volume_small_pane_g2

0xb874,	// (0x00031041) volume_small_pane_g3

0xb87d,	// (0x0003104a) volume_small_pane_g4

0xb886,	// (0x00031053) volume_small_pane_g5

0xb88f,	// (0x0003105c) volume_small_pane_g6

0xb898,	// (0x00031065) volume_small_pane_g7

0xb8a1,	// (0x0003106e) volume_small_pane_g8

0xb8aa,	// (0x00031077) volume_small_pane_g9

0xb8b3,	// (0x00031080) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x00035084) volume_small_pane_g

0xa2f0,	// (0x0002fabd) bg_active_tab_pane_cp2_ParamLimits

0xa2f0,	// (0x0002fabd) bg_active_tab_pane_cp2

0xa2fe,	// (0x0002facb) tabs_3_active_pane_g1

0xa306,	// (0x0002fad3) tabs_3_active_pane_t1

0xa2f0,	// (0x0002fabd) bg_passive_tab_pane_cp2_ParamLimits

0xa2f0,	// (0x0002fabd) bg_passive_tab_pane_cp2

0xa2fe,	// (0x0002facb) tabs_3_passive_pane_g1

0xa306,	// (0x0002fad3) tabs_3_passive_pane_t1

0xa2f0,	// (0x0002fabd) bg_active_tab_pane_cp3_ParamLimits

0xa2f0,	// (0x0002fabd) bg_active_tab_pane_cp3

0xa318,	// (0x0002fae5) tabs_4_active_pane_g1

0xa320,	// (0x0002faed) tabs_4_active_pane_t1

0xa2f0,	// (0x0002fabd) bg_passive_tab_pane_cp3_ParamLimits

0xa2f0,	// (0x0002fabd) bg_passive_tab_pane_cp3

0xa318,	// (0x0002fae5) tabs_4_1_passive_pane_g1

0xa320,	// (0x0002faed) tabs_4_1_passive_pane_t1

0x1054,	// (0x00026821) list_highlight_pane_cp2

0xbc4b,	// (0x00031418) list_set_pane_ParamLimits

0xbc4b,	// (0x00031418) list_set_pane

0xbd13,	// (0x000314e0) main_pane_set_t1_ParamLimits

0xbd13,	// (0x000314e0) main_pane_set_t1

0xbd33,	// (0x00031500) main_pane_set_t2_ParamLimits

0xbd33,	// (0x00031500) main_pane_set_t2

0xbd47,	// (0x00031514) main_pane_set_t3_ParamLimits

0xbd47,	// (0x00031514) main_pane_set_t3

0xbd5b,	// (0x00031528) main_pane_set_t4_ParamLimits

0xbd5b,	// (0x00031528) main_pane_set_t4

0x0003,

0xf987,	// (0x00035154) main_pane_set_t_ParamLimits

0xf987,	// (0x00035154) main_pane_set_t

0xbd6f,	// (0x0003153c) setting_code_pane

0x42b7,	// (0x00029a84) setting_slider_graphic_pane

0x42b7,	// (0x00029a84) setting_slider_pane

0x42b7,	// (0x00029a84) setting_text_pane

0x42b7,	// (0x00029a84) setting_volume_pane

0xf4c1,	// (0x00034c8e) volume_set_pane

0xcd01,	// (0x000324ce) bg_set_opt_pane_cp

0xf4cb,	// (0x00034c98) setting_slider_pane_t1

0xf4e4,	// (0x00034cb1) setting_slider_pane_t2

0xf4fe,	// (0x00034ccb) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00034d31) setting_slider_pane_t

0xf516,	// (0x00034ce3) slider_set_pane

0xa120,	// (0x0002f8ed) bg_set_opt_pane_cp2

0xcd0f,	// (0x000324dc) setting_slider_graphic_pane_g1

0xf52c,	// (0x00034cf9) setting_slider_graphic_pane_t1

0xf53c,	// (0x00034d09) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00034d38) setting_slider_graphic_pane_t

0xf54c,	// (0x00034d19) slider_set_pane_cp

0xa120,	// (0x0002f8ed) input_focus_pane_cp1

0x414a,	// (0x00029917) list_set_text_pane

0xa030,	// (0x0002f7fd) setting_text_pane_g1

0xa120,	// (0x0002f8ed) input_focus_pane_cp2

0xa030,	// (0x0002f7fd) setting_code_pane_g1

0xcd18,	// (0x000324e5) setting_code_pane_t1

0xea4c,	// (0x00034219) set_text_pane_t1_ParamLimits

0xea4c,	// (0x00034219) set_text_pane_t1

0xd371,	// (0x00032b3e) set_opt_bg_pane_g1

0xd379,	// (0x00032b46) set_opt_bg_pane_g2

0x4122,	// (0x000298ef) set_opt_bg_pane_g3

0xd389,	// (0x00032b56) set_opt_bg_pane_g4

0xd391,	// (0x00032b5e) set_opt_bg_pane_g5

0xd399,	// (0x00032b66) set_opt_bg_pane_g6

0x412c,	// (0x000298f9) set_opt_bg_pane_g7

0x4136,	// (0x00029903) set_opt_bg_pane_g8

0x4140,	// (0x0002990d) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x00035141) set_opt_bg_pane_g

0x40e9,	// (0x000298b6) slider_set_pane_g1

0x1e52,	// (0x0002761f) slider_set_pane_g2

0x0006,

0xf965,	// (0x00035132) slider_set_pane_g

0x1dda,	// (0x000275a7) volume_set_pane_g1

0x1de4,	// (0x000275b1) volume_set_pane_g2

0x1dee,	// (0x000275bb) volume_set_pane_g3

0x1df8,	// (0x000275c5) volume_set_pane_g4

0x1e02,	// (0x000275cf) volume_set_pane_g5

0x1e0c,	// (0x000275d9) volume_set_pane_g6

0x1e16,	// (0x000275e3) volume_set_pane_g7

0x1e20,	// (0x000275ed) volume_set_pane_g8

0x1e2a,	// (0x000275f7) volume_set_pane_g9

0x1e34,	// (0x00027601) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0003510a) volume_set_pane_g

0xa332,	// (0x0002faff) indicator_pane_ParamLimits

0xa332,	// (0x0002faff) indicator_pane

0xa35e,	// (0x0002fb2b) main_idle_pane_g2_ParamLimits

0xa35e,	// (0x0002fb2b) main_idle_pane_g2

0xa396,	// (0x0002fb63) main_pane_idle_g1_ParamLimits

0xa396,	// (0x0002fb63) main_pane_idle_g1

0xcd26,	// (0x000324f3) popup_clock_digital_analogue_window_ParamLimits

0xcd26,	// (0x000324f3) popup_clock_digital_analogue_window

0xa3c4,	// (0x0002fb91) soft_indicator_pane_ParamLimits

0xa3c4,	// (0x0002fb91) soft_indicator_pane

0xa3e0,	// (0x0002fbad) wallpaper_pane_ParamLimits

0xa3e0,	// (0x0002fbad) wallpaper_pane

0xa030,	// (0x0002f7fd) wallpaper_pane_g1

0xa3f2,	// (0x0002fbbf) indicator_pane_g1_ParamLimits

0xa3f2,	// (0x0002fbbf) indicator_pane_g1

0x4571,	// (0x00029d3e) navi_navi_icon_text_pane_srt_g1

0xcd54,	// (0x00032521) soft_indicator_pane_t1

0xcd6e,	// (0x0003253b) aid_ps_area_pane

0xa40b,	// (0x0002fbd8) aid_ps_clock_pane

0xcd7f,	// (0x0003254c) aid_ps_indicator_pane

0xcd8b,	// (0x00032558) indicator_ps_pane_ParamLimits

0xcd8b,	// (0x00032558) indicator_ps_pane

0xcd9a,	// (0x00032567) power_save_pane_g1_ParamLimits

0xcd9a,	// (0x00032567) power_save_pane_g1

0xcda6,	// (0x00032573) power_save_pane_g2_ParamLimits

0xcda6,	// (0x00032573) power_save_pane_g2

0xf0bd,	// (0x0003488a) aid_navinavi_width_pane

0xcd6e,	// (0x0003253b) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00034d3d) power_save_pane_g_ParamLimits

0xf570,	// (0x00034d3d) power_save_pane_g

0xcdb4,	// (0x00032581) power_save_pane_t1_ParamLimits

0xcdb4,	// (0x00032581) power_save_pane_t1

0xa40b,	// (0x0002fbd8) aid_ps_clock_pane_ParamLimits

0xcd7f,	// (0x0003254c) aid_ps_indicator_pane_ParamLimits

0xcdc6,	// (0x00032593) power_save_pane_t4_ParamLimits

0xcdc6,	// (0x00032593) power_save_pane_t4

0x0001,

0xf575,	// (0x00034d42) power_save_pane_t_ParamLimits

0xf575,	// (0x00034d42) power_save_pane_t

0xcdf0,	// (0x000325bd) power_save_t3_ParamLimits

0xcdf0,	// (0x000325bd) power_save_t3

0xcddb,	// (0x000325a8) power_save_t2_ParamLimits

0xcddb,	// (0x000325a8) power_save_t2

0xce05,	// (0x000325d2) indicator_ps_pane_g1

0xa419,	// (0x0002fbe6) ai_gene_pane_ParamLimits

0xa419,	// (0x0002fbe6) ai_gene_pane

0xa430,	// (0x0002fbfd) ai_links_pane_ParamLimits

0xa430,	// (0x0002fbfd) ai_links_pane

0xa448,	// (0x0002fc15) indicator_pane_cp1_ParamLimits

0xa448,	// (0x0002fc15) indicator_pane_cp1

0xa457,	// (0x0002fc24) main_pane_idle_g1_cp_ParamLimits

0xa457,	// (0x0002fc24) main_pane_idle_g1_cp

0xce0e,	// (0x000325db) popup_ai_links_title_window

0xa46f,	// (0x0002fc3c) soft_indicator_pane_cp1_ParamLimits

0xa46f,	// (0x0002fc3c) soft_indicator_pane_cp1

0x3ebc,	// (0x00029689) ai_links_pane_g1

0x3ec5,	// (0x00029692) grid_ai_links_pane

0xbb5a,	// (0x00031327) ai_gene_pane_1

0x3eaa,	// (0x00029677) ai_gene_pane_2

0x3eb3,	// (0x00029680) list_highlight_pane_cp4

0xbb36,	// (0x00031303) cell_ai_link_pane_ParamLimits

0xbb36,	// (0x00031303) cell_ai_link_pane

0x3e79,	// (0x00029646) cell_ai_link_pane_g1

0xcfdc,	// (0x000327a9) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x000350e5) cell_ai_link_pane_g

0xa120,	// (0x0002f8ed) grid_highlight_cp2

0xa120,	// (0x0002f8ed) bg_popup_sub_pane_cp1

0xce25,	// (0x000325f2) popup_ai_links_title_window_t1

0x3dc5,	// (0x00029592) ai_gene_pane_1_g1_ParamLimits

0x3dc5,	// (0x00029592) ai_gene_pane_1_g1

0x3dd1,	// (0x0002959e) ai_gene_pane_1_g2_ParamLimits

0x3dd1,	// (0x0002959e) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x000350db) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x000350db) ai_gene_pane_1_g

0x3dde,	// (0x000295ab) ai_gene_pane_1_t1_ParamLimits

0x3dde,	// (0x000295ab) ai_gene_pane_1_t1

0x3e12,	// (0x000295df) grid_ai_soft_ind_pane

0x3db0,	// (0x0002957d) ai_gene_pane_2_t1_ParamLimits

0x3db0,	// (0x0002957d) ai_gene_pane_2_t1

0xa483,	// (0x0002fc50) main_pane_empty_t1_ParamLimits

0xa483,	// (0x0002fc50) main_pane_empty_t1

0xa49b,	// (0x0002fc68) main_pane_empty_t2_ParamLimits

0xa49b,	// (0x0002fc68) main_pane_empty_t2

0xa4b0,	// (0x0002fc7d) main_pane_empty_t3_ParamLimits

0xa4b0,	// (0x0002fc7d) main_pane_empty_t3

0xa4c2,	// (0x0002fc8f) main_pane_empty_t4_ParamLimits

0xa4c2,	// (0x0002fc8f) main_pane_empty_t4

0xa4d4,	// (0x0002fca1) main_pane_empty_t5_ParamLimits

0xa4d4,	// (0x0002fca1) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00034d47) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00034d47) main_pane_empty_t

0xd3c2,	// (0x00032b8f) bg_popup_window_pane_ParamLimits

0xd3c2,	// (0x00032b8f) bg_popup_window_pane

0x3b12,	// (0x000292df) find_popup_pane_cp2_ParamLimits

0x3b12,	// (0x000292df) find_popup_pane_cp2

0x3b1e,	// (0x000292eb) heading_pane_ParamLimits

0x3b1e,	// (0x000292eb) heading_pane

0xa120,	// (0x0002f8ed) bg_popup_sub_pane

0xba08,	// (0x000311d5) bg_popup_window_pane_g1_ParamLimits

0xba08,	// (0x000311d5) bg_popup_window_pane_g1

0xba17,	// (0x000311e4) bg_popup_window_pane_g2_ParamLimits

0xba17,	// (0x000311e4) bg_popup_window_pane_g2

0xba23,	// (0x000311f0) bg_popup_window_pane_g3_ParamLimits

0xba23,	// (0x000311f0) bg_popup_window_pane_g3

0xba2f,	// (0x000311fc) bg_popup_window_pane_g4_ParamLimits

0xba2f,	// (0x000311fc) bg_popup_window_pane_g4

0xba3e,	// (0x0003120b) bg_popup_window_pane_g5_ParamLimits

0xba3e,	// (0x0003120b) bg_popup_window_pane_g5

0xba4e,	// (0x0003121b) bg_popup_window_pane_g6_ParamLimits

0xba4e,	// (0x0003121b) bg_popup_window_pane_g6

0xba5a,	// (0x00031227) bg_popup_window_pane_g7_ParamLimits

0xba5a,	// (0x00031227) bg_popup_window_pane_g7

0xba69,	// (0x00031236) bg_popup_window_pane_g8_ParamLimits

0xba69,	// (0x00031236) bg_popup_window_pane_g8

0xba78,	// (0x00031245) bg_popup_window_pane_g9_ParamLimits

0xba78,	// (0x00031245) bg_popup_window_pane_g9

0x3af8,	// (0x000292c5) bg_popup_window_pane_g10_ParamLimits

0x3af8,	// (0x000292c5) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x000350a3) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x000350a3) bg_popup_window_pane_g

0x3a21,	// (0x000291ee) bg_popup_heading_pane_ParamLimits

0x3a21,	// (0x000291ee) bg_popup_heading_pane

0x1e98,	// (0x00027665) tabs_4_passive_pane_cp_srt_ParamLimits

0x1e98,	// (0x00027665) tabs_4_passive_pane_cp_srt

0x1eaa,	// (0x00027677) tabs_4_passive_pane_srt_ParamLimits

0x3a35,	// (0x00029202) heading_pane_g2

0x1eaa,	// (0x00027677) tabs_4_passive_pane_srt

0x2dce,	// (0x0002859b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2dce,	// (0x0002859b) bg_passive_tab_pane_cp3_srt

0x3a3d,	// (0x0002920a) heading_pane_t1_ParamLimits

0x3a3d,	// (0x0002920a) heading_pane_t1

0x3a54,	// (0x00029221) heading_pane_t2_ParamLimits

0x3a54,	// (0x00029221) heading_pane_t2

0x0001,

0xf8d1,	// (0x0003509e) heading_pane_t_ParamLimits

0xf8d1,	// (0x0003509e) heading_pane_t

0x354c,	// (0x00028d19) bg_popup_heading_pane_g1

0x35fb,	// (0x00028dc8) bg_popup_heading_pane_g2

0x3605,	// (0x00028dd2) bg_popup_heading_pane_g3

0x360f,	// (0x00028ddc) bg_popup_heading_pane_g4

0x3619,	// (0x00028de6) bg_popup_heading_pane_g5

0x3623,	// (0x00028df0) bg_popup_heading_pane_g6

0x362b,	// (0x00028df8) bg_popup_heading_pane_g7

0x3633,	// (0x00028e00) bg_popup_heading_pane_g8

0x363d,	// (0x00028e0a) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0003505a) bg_popup_heading_pane_g

0x2d5a,	// (0x00028527) bg_popup_sub_pane_g1

0x2d62,	// (0x0002852f) bg_popup_sub_pane_g2

0x2d6a,	// (0x00028537) bg_popup_sub_pane_g3

0x2d72,	// (0x0002853f) bg_popup_sub_pane_g4

0x2d7a,	// (0x00028547) bg_popup_sub_pane_g5

0x2d82,	// (0x0002854f) bg_popup_sub_pane_g6

0x2d8a,	// (0x00028557) bg_popup_sub_pane_g7

0x2d92,	// (0x0002855f) bg_popup_sub_pane_g8

0x2d9a,	// (0x00028567) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x00035034) bg_popup_sub_pane_g

0xa2f0,	// (0x0002fabd) bg_popup_window_pane_cp5_ParamLimits

0xa2f0,	// (0x0002fabd) bg_popup_window_pane_cp5

0xce42,	// (0x0003260f) popup_note_window_g1_ParamLimits

0xce42,	// (0x0003260f) popup_note_window_g1

0xce4e,	// (0x0003261b) popup_note_window_t1_ParamLimits

0xce4e,	// (0x0003261b) popup_note_window_t1

0xce64,	// (0x00032631) popup_note_window_t2_ParamLimits

0xce64,	// (0x00032631) popup_note_window_t2

0xce7a,	// (0x00032647) popup_note_window_t3_ParamLimits

0xce7a,	// (0x00032647) popup_note_window_t3

0xce90,	// (0x0003265d) popup_note_window_t4_ParamLimits

0xce90,	// (0x0003265d) popup_note_window_t4

0xceb8,	// (0x00032685) popup_note_window_t5_ParamLimits

0xceb8,	// (0x00032685) popup_note_window_t5

0x0004,

0xf585,	// (0x00034d52) popup_note_window_t_ParamLimits

0xf585,	// (0x00034d52) popup_note_window_t

0xcedc,	// (0x000326a9) bg_popup_window_pane_cp6_ParamLimits

0xcedc,	// (0x000326a9) bg_popup_window_pane_cp6

0x34c8,	// (0x00028c95) popup_note_image_window_g1_ParamLimits

0x34c8,	// (0x00028c95) popup_note_image_window_g1

0x34d4,	// (0x00028ca1) popup_note_image_window_g2_ParamLimits

0x34d4,	// (0x00028ca1) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x00035028) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x00035028) popup_note_image_window_g

0x34ed,	// (0x00028cba) popup_note_image_window_t1_ParamLimits

0x34ed,	// (0x00028cba) popup_note_image_window_t1

0x3506,	// (0x00028cd3) popup_note_image_window_t2_ParamLimits

0x3506,	// (0x00028cd3) popup_note_image_window_t2

0x351f,	// (0x00028cec) popup_note_image_window_t3_ParamLimits

0x351f,	// (0x00028cec) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0003502d) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0003502d) popup_note_image_window_t

0x3388,	// (0x00028b55) bg_popup_window_pane_cp7_ParamLimits

0x3388,	// (0x00028b55) bg_popup_window_pane_cp7

0x33b8,	// (0x00028b85) popup_note_wait_window_g1_ParamLimits

0x33b8,	// (0x00028b85) popup_note_wait_window_g1

0x33c4,	// (0x00028b91) popup_note_wait_window_g2_ParamLimits

0x33c4,	// (0x00028b91) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x00035016) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x00035016) popup_note_wait_window_g

0x33dc,	// (0x00028ba9) popup_note_wait_window_t1_ParamLimits

0x33dc,	// (0x00028ba9) popup_note_wait_window_t1

0x3403,	// (0x00028bd0) popup_note_wait_window_t2_ParamLimits

0x3403,	// (0x00028bd0) popup_note_wait_window_t2

0x3421,	// (0x00028bee) popup_note_wait_window_t3_ParamLimits

0x3421,	// (0x00028bee) popup_note_wait_window_t3

0x3434,	// (0x00028c01) popup_note_wait_window_t4_ParamLimits

0x3434,	// (0x00028c01) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0003501d) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0003501d) popup_note_wait_window_t

0x3459,	// (0x00028c26) wait_bar_pane_ParamLimits

0x3459,	// (0x00028c26) wait_bar_pane

0xa120,	// (0x0002f8ed) wait_anim_pane

0xa120,	// (0x0002f8ed) wait_border_pane

0xa030,	// (0x0002f7fd) wait_anim_pane_g1

0xa030,	// (0x0002f7fd) wait_anim_pane_g2

0x0001,

0xf709,	// (0x00034ed6) wait_anim_pane_g

0x332c,	// (0x00028af9) wait_border_pane_g1

0x3337,	// (0x00028b04) wait_border_pane_g2

0x3340,	// (0x00028b0d) wait_border_pane_g3

0x0002,

0xf842,	// (0x0003500f) wait_border_pane_g

0x3196,	// (0x00028963) bg_popup_window_pane_cp16_ParamLimits

0x3196,	// (0x00028963) bg_popup_window_pane_cp16

0x3296,	// (0x00028a63) indicator_popup_pane_cp4_ParamLimits

0x3296,	// (0x00028a63) indicator_popup_pane_cp4

0x32aa,	// (0x00028a77) popup_query_data_window_t1_ParamLimits

0x32aa,	// (0x00028a77) popup_query_data_window_t1

0x32bc,	// (0x00028a89) popup_query_data_window_t2_ParamLimits

0x32bc,	// (0x00028a89) popup_query_data_window_t2

0x32d5,	// (0x00028aa2) popup_query_data_window_t3_ParamLimits

0x32d5,	// (0x00028aa2) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x00035008) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x00035008) popup_query_data_window_t

0x32ef,	// (0x00028abc) query_popup_data_pane_ParamLimits

0x32ef,	// (0x00028abc) query_popup_data_pane

0x3303,	// (0x00028ad0) query_popup_data_pane_cp1_ParamLimits

0x3303,	// (0x00028ad0) query_popup_data_pane_cp1

0x3196,	// (0x00028963) bg_popup_window_pane_cp10_ParamLimits

0x3196,	// (0x00028963) bg_popup_window_pane_cp10

0x31c8,	// (0x00028995) indicator_popup_pane_ParamLimits

0x31c8,	// (0x00028995) indicator_popup_pane

0x31ea,	// (0x000289b7) popup_query_code_window_t1_ParamLimits

0x31ea,	// (0x000289b7) popup_query_code_window_t1

0x3204,	// (0x000289d1) popup_query_code_window_t2_ParamLimits

0x3204,	// (0x000289d1) popup_query_code_window_t2

0x324d,	// (0x00028a1a) popup_query_code_window_t3_ParamLimits

0x324d,	// (0x00028a1a) popup_query_code_window_t3

0x0002,

0xf834,	// (0x00035001) popup_query_code_window_t_ParamLimits

0xf834,	// (0x00035001) popup_query_code_window_t

0x327c,	// (0x00028a49) query_popup_pane_ParamLimits

0x327c,	// (0x00028a49) query_popup_pane

0xcedc,	// (0x000326a9) bg_popup_window_pane_cp15_ParamLimits

0xcedc,	// (0x000326a9) bg_popup_window_pane_cp15

0xcefc,	// (0x000326c9) indicator_popup_pane_cp1_ParamLimits

0xcefc,	// (0x000326c9) indicator_popup_pane_cp1

0xcf0f,	// (0x000326dc) indicator_popup_pane_cp2_ParamLimits

0xcf0f,	// (0x000326dc) indicator_popup_pane_cp2

0xcf2a,	// (0x000326f7) popup_query_data_code_window_g1_ParamLimits

0xcf2a,	// (0x000326f7) popup_query_data_code_window_g1

0xcf3d,	// (0x0003270a) popup_query_data_code_window_t1_ParamLimits

0xcf3d,	// (0x0003270a) popup_query_data_code_window_t1

0xcf4f,	// (0x0003271c) popup_query_data_code_window_t2_ParamLimits

0xcf4f,	// (0x0003271c) popup_query_data_code_window_t2

0xcf61,	// (0x0003272e) popup_query_data_code_window_t3_ParamLimits

0xcf61,	// (0x0003272e) popup_query_data_code_window_t3

0xcf77,	// (0x00032744) popup_query_data_code_window_t4_ParamLimits

0xcf77,	// (0x00032744) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00034d5d) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00034d5d) popup_query_data_code_window_t

0x0911,	// (0x000260de) list_single_midp_graphic_pane_g3

0xcf91,	// (0x0003275e) query_popup_data_pane_cp2_ParamLimits

0xcfa4,	// (0x00032771) query_popup_pane_cp2_ParamLimits

0xcfa4,	// (0x00032771) query_popup_pane_cp2

0xa120,	// (0x0002f8ed) bg_popup_window_pane_cp11

0x318e,	// (0x0002895b) heading_pane_cp5

0xd03a,	// (0x00032807) listscroll_popup_info_pane

0xa120,	// (0x0002f8ed) input_focus_pane_cp3

0xcfbf,	// (0x0003278c) query_popup_pane_t1

0xcfcd,	// (0x0003279a) list_popup_info_pane_ParamLimits

0xcfcd,	// (0x0003279a) list_popup_info_pane

0xcfdc,	// (0x000327a9) listscroll_popup_info_pane_g1

0xcfe4,	// (0x000327b1) scroll_pane_cp7

0xcfee,	// (0x000327bb) popup_info_list_pane_t1_ParamLimits

0xcfee,	// (0x000327bb) popup_info_list_pane_t1

0xd008,	// (0x000327d5) popup_info_list_pane_t2_ParamLimits

0xd008,	// (0x000327d5) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00034d66) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00034d66) popup_info_list_pane_t

0xa120,	// (0x0002f8ed) bg_popup_window_pane_cp12

0x458b,	// (0x00029d58) find_popup_pane

0xcd01,	// (0x000324ce) bg_popup_window_pane_cp3

0xd022,	// (0x000327ef) heading_pane_cp3

0xd02e,	// (0x000327fb) listscroll_popup_graphic_pane

0xa120,	// (0x0002f8ed) bg_popup_window_pane_cp4

0xa536,	// (0x0002fd03) heading_pane_cp4

0xd03a,	// (0x00032807) listscroll_popup_colour_pane

0xa540,	// (0x0002fd0d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa540,	// (0x0002fd0d) cell_large_graphic_colour_none_popup_pane

0xa554,	// (0x0002fd21) grid_large_graphic_colour_popup_pane_ParamLimits

0xa554,	// (0x0002fd21) grid_large_graphic_colour_popup_pane

0xa578,	// (0x0002fd45) listscroll_popup_colour_pane_g1_ParamLimits

0xa578,	// (0x0002fd45) listscroll_popup_colour_pane_g1

0xa58f,	// (0x0002fd5c) listscroll_popup_colour_pane_g2_ParamLimits

0xa58f,	// (0x0002fd5c) listscroll_popup_colour_pane_g2

0xa5a6,	// (0x0002fd73) listscroll_popup_colour_pane_g3_ParamLimits

0xa5a6,	// (0x0002fd73) listscroll_popup_colour_pane_g3

0xa5b6,	// (0x0002fd83) listscroll_popup_colour_pane_g4_ParamLimits

0xa5b6,	// (0x0002fd83) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00034d6b) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00034d6b) listscroll_popup_colour_pane_g

0xd042,	// (0x0003280f) scroll_pane_cp6_ParamLimits

0xd042,	// (0x0003280f) scroll_pane_cp6

0xa5c6,	// (0x0002fd93) cell_large_graphic_colour_popup_pane_ParamLimits

0xa5c6,	// (0x0002fd93) cell_large_graphic_colour_popup_pane

0xd054,	// (0x00032821) cell_large_graphic_colour_none_popup_pane_t1

0xa120,	// (0x0002f8ed) grid_highlight_pane_cp5

0xd063,	// (0x00032830) cell_large_graphic_colour_popup_pane_g1

0xd06b,	// (0x00032838) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00034d74) cell_large_graphic_colour_popup_pane_g

0xd073,	// (0x00032840) cell_large_graphic_colour_popup_pane_g2_copy1

0xd07c,	// (0x00032849) grid_highlight_pane_cp4

0xd084,	// (0x00032851) bg_popup_window_pane_cp8_ParamLimits

0xd084,	// (0x00032851) bg_popup_window_pane_cp8

0xd09f,	// (0x0003286c) popup_snote_single_text_window_g1_ParamLimits

0xd09f,	// (0x0003286c) popup_snote_single_text_window_g1

0xd0b1,	// (0x0003287e) popup_snote_single_text_window_t1_ParamLimits

0xd0b1,	// (0x0003287e) popup_snote_single_text_window_t1

0xd0c4,	// (0x00032891) popup_snote_single_text_window_t2_ParamLimits

0xd0c4,	// (0x00032891) popup_snote_single_text_window_t2

0xd0d7,	// (0x000328a4) popup_snote_single_text_window_t3_ParamLimits

0xd0d7,	// (0x000328a4) popup_snote_single_text_window_t3

0xd110,	// (0x000328dd) popup_snote_single_text_window_t4_ParamLimits

0xd110,	// (0x000328dd) popup_snote_single_text_window_t4

0xd144,	// (0x00032911) popup_snote_single_text_window_t5_ParamLimits

0xd144,	// (0x00032911) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00034d79) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00034d79) popup_snote_single_text_window_t

0xd173,	// (0x00032940) bg_popup_window_pane_cp9_ParamLimits

0xd173,	// (0x00032940) bg_popup_window_pane_cp9

0xd09f,	// (0x0003286c) popup_snote_single_graphic_window_g1_ParamLimits

0xd09f,	// (0x0003286c) popup_snote_single_graphic_window_g1

0xd181,	// (0x0003294e) popup_snote_single_graphic_window_g2_ParamLimits

0xd181,	// (0x0003294e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00034d84) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00034d84) popup_snote_single_graphic_window_g

0xd18d,	// (0x0003295a) popup_snote_single_graphic_window_t1_ParamLimits

0xd18d,	// (0x0003295a) popup_snote_single_graphic_window_t1

0xd1a0,	// (0x0003296d) popup_snote_single_graphic_window_t2_ParamLimits

0xd1a0,	// (0x0003296d) popup_snote_single_graphic_window_t2

0xd1b3,	// (0x00032980) popup_snote_single_graphic_window_t3_ParamLimits

0xd1b3,	// (0x00032980) popup_snote_single_graphic_window_t3

0xd1ec,	// (0x000329b9) popup_snote_single_graphic_window_t4_ParamLimits

0xd1ec,	// (0x000329b9) popup_snote_single_graphic_window_t4

0xd220,	// (0x000329ed) popup_snote_single_graphic_window_t5_ParamLimits

0xd220,	// (0x000329ed) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00034d89) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00034d89) popup_snote_single_graphic_window_t

0x44c9,	// (0x00029c96) grid_graphic_popup_pane_ParamLimits

0x44c9,	// (0x00029c96) grid_graphic_popup_pane

0x44f7,	// (0x00029cc4) listscroll_popup_graphic_pane_g1_ParamLimits

0x44f7,	// (0x00029cc4) listscroll_popup_graphic_pane_g1

0xbe88,	// (0x00031655) listscroll_popup_graphic_pane_g2_ParamLimits

0xbe88,	// (0x00031655) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0003517e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0003517e) listscroll_popup_graphic_pane_g

0x451f,	// (0x00029cec) scroll_pane_cp5

0xbe47,	// (0x00031614) cell_graphic_popup_pane_ParamLimits

0xbe47,	// (0x00031614) cell_graphic_popup_pane

0x4452,	// (0x00029c1f) cell_graphic_popup_pane_g1

0x445a,	// (0x00029c27) cell_graphic_popup_pane_g2

0xd073,	// (0x00032840) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x00035177) cell_graphic_popup_pane_g

0x4463,	// (0x00029c30) cell_graphic_popup_pane_t2

0xd07c,	// (0x00032849) grid_highlight_pane_cp3

0xd261,	// (0x00032a2e) list_gen_pane_ParamLimits

0xd261,	// (0x00032a2e) list_gen_pane

0xd289,	// (0x00032a56) scroll_pane

0xbdfe,	// (0x000315cb) bg_list_pane_g1_ParamLimits

0xbdfe,	// (0x000315cb) bg_list_pane_g1

0x43c7,	// (0x00029b94) bg_list_pane_g2_ParamLimits

0x43c7,	// (0x00029b94) bg_list_pane_g2

0x43dc,	// (0x00029ba9) bg_list_pane_g3_ParamLimits

0x43dc,	// (0x00029ba9) bg_list_pane_g3

0x43f0,	// (0x00029bbd) bg_list_pane_g4_ParamLimits

0x43f0,	// (0x00029bbd) bg_list_pane_g4

0xbe1b,	// (0x000315e8) bg_list_pane_g5_ParamLimits

0xbe1b,	// (0x000315e8) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0003516c) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0003516c) bg_list_pane_g

0xbdad,	// (0x0003157a) list_double2_graphic_large_graphic_pane_ParamLimits

0xbdad,	// (0x0003157a) list_double2_graphic_large_graphic_pane

0xbdad,	// (0x0003157a) list_double2_graphic_pane_ParamLimits

0xbdad,	// (0x0003157a) list_double2_graphic_pane

0xbdad,	// (0x0003157a) list_double2_large_graphic_pane_ParamLimits

0xbdad,	// (0x0003157a) list_double2_large_graphic_pane

0xbdc1,	// (0x0003158e) list_double2_pane_ParamLimits

0xbdc1,	// (0x0003158e) list_double2_pane

0xbdad,	// (0x0003157a) list_double_graphic_heading_pane_ParamLimits

0xbdad,	// (0x0003157a) list_double_graphic_heading_pane

0xbdad,	// (0x0003157a) list_double_graphic_pane_ParamLimits

0xbdad,	// (0x0003157a) list_double_graphic_pane

0xbdad,	// (0x0003157a) list_double_heading_pane_ParamLimits

0xbdad,	// (0x0003157a) list_double_heading_pane

0xbdad,	// (0x0003157a) list_double_large_graphic_pane_ParamLimits

0xbdad,	// (0x0003157a) list_double_large_graphic_pane

0xbdad,	// (0x0003157a) list_double_number_pane_ParamLimits

0xbdad,	// (0x0003157a) list_double_number_pane

0xbdad,	// (0x0003157a) list_double_pane_ParamLimits

0xbdad,	// (0x0003157a) list_double_pane

0xbdad,	// (0x0003157a) list_double_time_pane_ParamLimits

0xbdad,	// (0x0003157a) list_double_time_pane

0xbdad,	// (0x0003157a) list_setting_number_pane_ParamLimits

0xbdad,	// (0x0003157a) list_setting_number_pane

0xbdad,	// (0x0003157a) list_setting_pane_ParamLimits

0xbdad,	// (0x0003157a) list_setting_pane

0x9df9,	// (0x0002f5c6) list_single_2graphic_pane_ParamLimits

0x9df9,	// (0x0002f5c6) list_single_2graphic_pane

0x9df9,	// (0x0002f5c6) list_single_graphic_heading_pane_ParamLimits

0x9df9,	// (0x0002f5c6) list_single_graphic_heading_pane

0x9df9,	// (0x0002f5c6) list_single_graphic_pane_ParamLimits

0x9df9,	// (0x0002f5c6) list_single_graphic_pane

0x9df9,	// (0x0002f5c6) list_single_heading_pane_ParamLimits

0x9df9,	// (0x0002f5c6) list_single_heading_pane

0xbdc1,	// (0x0003158e) list_single_large_graphic_pane_ParamLimits

0xbdc1,	// (0x0003158e) list_single_large_graphic_pane

0x9df9,	// (0x0002f5c6) list_single_number_heading_pane_ParamLimits

0x9df9,	// (0x0002f5c6) list_single_number_heading_pane

0x9df9,	// (0x0002f5c6) list_single_number_pane_ParamLimits

0x9df9,	// (0x0002f5c6) list_single_number_pane

0x9df9,	// (0x0002f5c6) list_single_pane_ParamLimits

0x9df9,	// (0x0002f5c6) list_single_pane

0xa120,	// (0x0002f8ed) list_highlight_pane_cp1

0xea67,	// (0x00034234) list_single_pane_g1_ParamLimits

0xea67,	// (0x00034234) list_single_pane_g1

0xea73,	// (0x00034240) list_single_pane_g2_ParamLimits

0xea73,	// (0x00034240) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00034d9b) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00034d9b) list_single_pane_g

0xed42,	// (0x0003450f) list_single_pane_t1_ParamLimits

0xed42,	// (0x0003450f) list_single_pane_t1

0xea67,	// (0x00034234) list_single_number_pane_g1_ParamLimits

0xea67,	// (0x00034234) list_single_number_pane_g1

0xea73,	// (0x00034240) list_single_number_pane_g2_ParamLimits

0xea73,	// (0x00034240) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00034d9b) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00034d9b) list_single_number_pane_g

0xec6b,	// (0x00034438) list_single_number_pane_t1_ParamLimits

0xec6b,	// (0x00034438) list_single_number_pane_t1

0x9dbb,	// (0x0002f588) list_single_number_pane_t2_ParamLimits

0x9dbb,	// (0x0002f588) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0003512d) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0003512d) list_single_number_pane_t

0x9738,	// (0x0002ef05) list_single_graphic_pane_g1_ParamLimits

0x9738,	// (0x0002ef05) list_single_graphic_pane_g1

0xea67,	// (0x00034234) list_single_graphic_pane_g2_ParamLimits

0xea67,	// (0x00034234) list_single_graphic_pane_g2

0xea73,	// (0x00034240) list_single_graphic_pane_g3_ParamLimits

0xea73,	// (0x00034240) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00034d94) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00034d94) list_single_graphic_pane_g

0x9744,	// (0x0002ef11) list_single_graphic_pane_t1_ParamLimits

0x9744,	// (0x0002ef11) list_single_graphic_pane_t1

0xea67,	// (0x00034234) list_single_heading_pane_g1_ParamLimits

0xea67,	// (0x00034234) list_single_heading_pane_g1

0xea73,	// (0x00034240) list_single_heading_pane_g2_ParamLimits

0xea73,	// (0x00034240) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00034d9b) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00034d9b) list_single_heading_pane_g

0x975a,	// (0x0002ef27) list_single_heading_pane_t1_ParamLimits

0x975a,	// (0x0002ef27) list_single_heading_pane_t1

0x9770,	// (0x0002ef3d) list_single_heading_pane_t2_ParamLimits

0x9770,	// (0x0002ef3d) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00034da0) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00034da0) list_single_heading_pane_t

0xea67,	// (0x00034234) list_single_number_heading_pane_g1_ParamLimits

0xea67,	// (0x00034234) list_single_number_heading_pane_g1

0xea73,	// (0x00034240) list_single_number_heading_pane_g2_ParamLimits

0xea73,	// (0x00034240) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00034d9b) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00034d9b) list_single_number_heading_pane_g

0x975a,	// (0x0002ef27) list_single_number_heading_pane_t1_ParamLimits

0x975a,	// (0x0002ef27) list_single_number_heading_pane_t1

0x9782,	// (0x0002ef4f) list_single_number_heading_pane_t2_ParamLimits

0x9782,	// (0x0002ef4f) list_single_number_heading_pane_t2

0xea7f,	// (0x0003424c) list_single_number_heading_pane_t3_ParamLimits

0xea7f,	// (0x0003424c) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x00034da5) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x00034da5) list_single_number_heading_pane_t

0xea91,	// (0x0003425e) list_single_graphic_heading_pane_g1_ParamLimits

0xea91,	// (0x0003425e) list_single_graphic_heading_pane_g1

0x9794,	// (0x0002ef61) list_single_graphic_heading_pane_g4_ParamLimits

0x9794,	// (0x0002ef61) list_single_graphic_heading_pane_g4

0xea73,	// (0x00034240) list_single_graphic_heading_pane_g5_ParamLimits

0xea73,	// (0x00034240) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00034dac) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00034dac) list_single_graphic_heading_pane_g

0x975a,	// (0x0002ef27) list_single_graphic_heading_pane_t1_ParamLimits

0x975a,	// (0x0002ef27) list_single_graphic_heading_pane_t1

0x97a5,	// (0x0002ef72) list_single_graphic_heading_pane_t2_ParamLimits

0x97a5,	// (0x0002ef72) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00034db3) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00034db3) list_single_graphic_heading_pane_t

0xea9d,	// (0x0003426a) list_single_large_graphic_pane_g1_ParamLimits

0xea9d,	// (0x0003426a) list_single_large_graphic_pane_g1

0xeaa9,	// (0x00034276) list_single_large_graphic_pane_g2_ParamLimits

0xeaa9,	// (0x00034276) list_single_large_graphic_pane_g2

0xeab5,	// (0x00034282) list_single_large_graphic_pane_g3_ParamLimits

0xeab5,	// (0x00034282) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00034db8) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00034db8) list_single_large_graphic_pane_g

0x3337,	// (0x00028b04) wait_border_pane_g2_copy1

0x97b7,	// (0x0002ef84) list_single_large_graphic_pane_g4_cp2

0xeac1,	// (0x0003428e) list_single_large_graphic_pane_t1_ParamLimits

0xeac1,	// (0x0003428e) list_single_large_graphic_pane_t1

0x97bf,	// (0x0002ef8c) list_double_pane_g1_ParamLimits

0x97bf,	// (0x0002ef8c) list_double_pane_g1

0x97cb,	// (0x0002ef98) list_double_pane_g2_ParamLimits

0x97cb,	// (0x0002ef98) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00034dbf) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00034dbf) list_double_pane_g

0x97d7,	// (0x0002efa4) list_double_pane_t1_ParamLimits

0x97d7,	// (0x0002efa4) list_double_pane_t1

0x97ed,	// (0x0002efba) list_double_pane_t2_ParamLimits

0x97ed,	// (0x0002efba) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00034dc4) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00034dc4) list_double_pane_t

0x97ff,	// (0x0002efcc) list_double2_pane_g1_ParamLimits

0x97ff,	// (0x0002efcc) list_double2_pane_g1

0x9810,	// (0x0002efdd) list_double2_pane_g2_ParamLimits

0x9810,	// (0x0002efdd) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00034dc9) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00034dc9) list_double2_pane_g

0x981c,	// (0x0002efe9) list_double2_pane_t1_ParamLimits

0x981c,	// (0x0002efe9) list_double2_pane_t1

0x9832,	// (0x0002efff) list_double2_pane_t2_ParamLimits

0x9832,	// (0x0002efff) list_double2_pane_t2

0x0001,

0xf601,	// (0x00034dce) list_double2_pane_t_ParamLimits

0xf601,	// (0x00034dce) list_double2_pane_t

0x97bf,	// (0x0002ef8c) list_double_number_pane_g1_ParamLimits

0x97bf,	// (0x0002ef8c) list_double_number_pane_g1

0x97cb,	// (0x0002ef98) list_double_number_pane_g2_ParamLimits

0x97cb,	// (0x0002ef98) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00034dbf) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00034dbf) list_double_number_pane_g

0x9844,	// (0x0002f011) list_double_number_pane_t1_ParamLimits

0x9844,	// (0x0002f011) list_double_number_pane_t1

0x9856,	// (0x0002f023) list_double_number_pane_t2_ParamLimits

0x9856,	// (0x0002f023) list_double_number_pane_t2

0x986c,	// (0x0002f039) list_double_number_pane_t3_ParamLimits

0x986c,	// (0x0002f039) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00034dd3) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00034dd3) list_double_number_pane_t

0x987e,	// (0x0002f04b) list_double_graphic_pane_g1_ParamLimits

0x987e,	// (0x0002f04b) list_double_graphic_pane_g1

0x988a,	// (0x0002f057) list_double_graphic_pane_g2_ParamLimits

0x988a,	// (0x0002f057) list_double_graphic_pane_g2

0x9899,	// (0x0002f066) list_double_graphic_pane_g3_ParamLimits

0x9899,	// (0x0002f066) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00034dda) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00034dda) list_double_graphic_pane_g

0x98b1,	// (0x0002f07e) list_double_graphic_pane_t1_ParamLimits

0x98b1,	// (0x0002f07e) list_double_graphic_pane_t1

0x98c7,	// (0x0002f094) list_double_graphic_pane_t2_ParamLimits

0x98c7,	// (0x0002f094) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00034de3) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00034de3) list_double_graphic_pane_t

0x98d9,	// (0x0002f0a6) list_double2_graphic_pane_g1_ParamLimits

0x98d9,	// (0x0002f0a6) list_double2_graphic_pane_g1

0x98e5,	// (0x0002f0b2) list_double2_graphic_pane_g2_ParamLimits

0x98e5,	// (0x0002f0b2) list_double2_graphic_pane_g2

0x98f1,	// (0x0002f0be) list_double2_graphic_pane_g3_ParamLimits

0x98f1,	// (0x0002f0be) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00034de8) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00034de8) list_double2_graphic_pane_g

0x98fd,	// (0x0002f0ca) list_double2_graphic_pane_t1_ParamLimits

0x98fd,	// (0x0002f0ca) list_double2_graphic_pane_t1

0x9913,	// (0x0002f0e0) list_double2_graphic_pane_t2_ParamLimits

0x9913,	// (0x0002f0e0) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00034def) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00034def) list_double2_graphic_pane_t

0x9925,	// (0x0002f0f2) list_double_large_graphic_pane_g1_ParamLimits

0x9925,	// (0x0002f0f2) list_double_large_graphic_pane_g1

0x9950,	// (0x0002f11d) list_double_large_graphic_pane_g2_ParamLimits

0x9950,	// (0x0002f11d) list_double_large_graphic_pane_g2

0x97cb,	// (0x0002ef98) list_double_large_graphic_pane_g3_ParamLimits

0x97cb,	// (0x0002ef98) list_double_large_graphic_pane_g3

0x9961,	// (0x0002f12e) list_double_large_graphic_pane_g4_ParamLimits

0x9961,	// (0x0002f12e) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00034df4) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00034df4) list_double_large_graphic_pane_g

0x9974,	// (0x0002f141) list_double_large_graphic_pane_t1_ParamLimits

0x9974,	// (0x0002f141) list_double_large_graphic_pane_t1

0x998d,	// (0x0002f15a) list_double_large_graphic_pane_t2_ParamLimits

0x998d,	// (0x0002f15a) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00034dff) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00034dff) list_double_large_graphic_pane_t

0x999f,	// (0x0002f16c) list_double2_large_graphic_pane_g1_ParamLimits

0x999f,	// (0x0002f16c) list_double2_large_graphic_pane_g1

0x99ab,	// (0x0002f178) list_double2_large_graphic_pane_g2_ParamLimits

0x99ab,	// (0x0002f178) list_double2_large_graphic_pane_g2

0x99bc,	// (0x0002f189) list_double2_large_graphic_pane_g3_ParamLimits

0x99bc,	// (0x0002f189) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00034e04) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00034e04) list_double2_large_graphic_pane_g

0x99c8,	// (0x0002f195) list_double2_large_graphic_pane_t1_ParamLimits

0x99c8,	// (0x0002f195) list_double2_large_graphic_pane_t1

0x99de,	// (0x0002f1ab) list_double2_large_graphic_pane_t2_ParamLimits

0x99de,	// (0x0002f1ab) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00034e0b) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00034e0b) list_double2_large_graphic_pane_t

0x99f0,	// (0x0002f1bd) list_double_heading_pane_g1_ParamLimits

0x99f0,	// (0x0002f1bd) list_double_heading_pane_g1

0x9a01,	// (0x0002f1ce) list_double_heading_pane_g2_ParamLimits

0x9a01,	// (0x0002f1ce) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00034e10) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00034e10) list_double_heading_pane_g

0x9a0d,	// (0x0002f1da) list_double_heading_pane_t1_ParamLimits

0x9a0d,	// (0x0002f1da) list_double_heading_pane_t1

0x9a23,	// (0x0002f1f0) list_double_heading_pane_t2_ParamLimits

0x9a23,	// (0x0002f1f0) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00034e15) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00034e15) list_double_heading_pane_t

0x9a35,	// (0x0002f202) list_double_graphic_heading_pane_g1_ParamLimits

0x9a35,	// (0x0002f202) list_double_graphic_heading_pane_g1

0x99f0,	// (0x0002f1bd) list_double_graphic_heading_pane_g2_ParamLimits

0x99f0,	// (0x0002f1bd) list_double_graphic_heading_pane_g2

0x9a01,	// (0x0002f1ce) list_double_graphic_heading_pane_g3_ParamLimits

0x9a01,	// (0x0002f1ce) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00034e1a) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00034e1a) list_double_graphic_heading_pane_g

0x9a41,	// (0x0002f20e) list_double_graphic_heading_pane_t1_ParamLimits

0x9a41,	// (0x0002f20e) list_double_graphic_heading_pane_t1

0x9913,	// (0x0002f0e0) list_double_graphic_heading_pane_t2_ParamLimits

0x9913,	// (0x0002f0e0) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00034e21) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00034e21) list_double_graphic_heading_pane_t

0x9950,	// (0x0002f11d) list_double_time_pane_g1_ParamLimits

0x9950,	// (0x0002f11d) list_double_time_pane_g1

0x97cb,	// (0x0002ef98) list_double_time_pane_g2_ParamLimits

0x97cb,	// (0x0002ef98) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00034e26) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00034e26) list_double_time_pane_g

0x9a57,	// (0x0002f224) list_double_time_pane_t1_ParamLimits

0x9a57,	// (0x0002f224) list_double_time_pane_t1

0x9a6d,	// (0x0002f23a) list_double_time_pane_t2_ParamLimits

0x9a6d,	// (0x0002f23a) list_double_time_pane_t2

0x9a7f,	// (0x0002f24c) list_double_time_pane_t3_ParamLimits

0x9a7f,	// (0x0002f24c) list_double_time_pane_t3

0x9a91,	// (0x0002f25e) list_double_time_pane_t4_ParamLimits

0x9a91,	// (0x0002f25e) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00034e2b) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00034e2b) list_double_time_pane_t

0x9aa3,	// (0x0002f270) list_setting_pane_g1_ParamLimits

0x9aa3,	// (0x0002f270) list_setting_pane_g1

0x9a01,	// (0x0002f1ce) list_setting_pane_g2_ParamLimits

0x9a01,	// (0x0002f1ce) list_setting_pane_g2

0x0001,

0xf667,	// (0x00034e34) list_setting_pane_g_ParamLimits

0xf667,	// (0x00034e34) list_setting_pane_g

0x9aaf,	// (0x0002f27c) list_setting_pane_t1_ParamLimits

0x9aaf,	// (0x0002f27c) list_setting_pane_t1

0x9ac6,	// (0x0002f293) list_setting_pane_t2_ParamLimits

0x9ac6,	// (0x0002f293) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00034e39) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00034e39) list_setting_pane_t

0x9b05,	// (0x0002f2d2) set_value_pane_cp_ParamLimits

0x9b05,	// (0x0002f2d2) set_value_pane_cp

0x9b13,	// (0x0002f2e0) list_setting_number_pane_g1_ParamLimits

0x9b13,	// (0x0002f2e0) list_setting_number_pane_g1

0x9b1f,	// (0x0002f2ec) list_setting_number_pane_g2_ParamLimits

0x9b1f,	// (0x0002f2ec) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x00034e40) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x00034e40) list_setting_number_pane_g

0x9b2b,	// (0x0002f2f8) list_setting_number_pane_t1_ParamLimits

0x9b2b,	// (0x0002f2f8) list_setting_number_pane_t1

0x9b3f,	// (0x0002f30c) list_setting_number_pane_t2_ParamLimits

0x9b3f,	// (0x0002f30c) list_setting_number_pane_t2

0x9b56,	// (0x0002f323) list_setting_number_pane_t3_ParamLimits

0x9b56,	// (0x0002f323) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x00034e45) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x00034e45) list_setting_number_pane_t

0x9b05,	// (0x0002f2d2) set_value_pane_ParamLimits

0x9b05,	// (0x0002f2d2) set_value_pane

0xd2bd,	// (0x00032a8a) bg_set_opt_pane_ParamLimits

0xd2bd,	// (0x00032a8a) bg_set_opt_pane

0xeaec,	// (0x000342b9) set_value_pane_t1

0xd2de,	// (0x00032aab) slider_set_pane_cp3

0xd2e7,	// (0x00032ab4) volume_small_pane_cp

0xd2f0,	// (0x00032abd) list_form_gen_pane

0xd2f9,	// (0x00032ac6) scroll_pane_cp8

0x9b99,	// (0x0002f366) form_field_data_pane_ParamLimits

0x9b99,	// (0x0002f366) form_field_data_pane

0x9bb4,	// (0x0002f381) form_field_data_wide_pane_ParamLimits

0x9bb4,	// (0x0002f381) form_field_data_wide_pane

0xeb0a,	// (0x000342d7) form_field_popup_pane_ParamLimits

0xeb0a,	// (0x000342d7) form_field_popup_pane

0x9bd6,	// (0x0002f3a3) form_field_popup_wide_pane_ParamLimits

0x9bd6,	// (0x0002f3a3) form_field_popup_wide_pane

0xeb2c,	// (0x000342f9) form_field_slider_pane_ParamLimits

0xeb2c,	// (0x000342f9) form_field_slider_pane

0xeb3f,	// (0x0003430c) form_field_slider_wide_pane_ParamLimits

0xeb3f,	// (0x0003430c) form_field_slider_wide_pane

0xd30a,	// (0x00032ad7) data_form_pane

0x9c01,	// (0x0002f3ce) form_field_data_pane_t1

0xd316,	// (0x00032ae3) input_focus_pane

0xeb52,	// (0x0003431f) data_form_wide_pane

0xeb6f,	// (0x0003433c) form_field_data_wide_pane_t1

0xd091,	// (0x0003285e) input_focus_pane_cp6

0x9c1b,	// (0x0002f3e8) form_field_popup_pane_t1

0xd316,	// (0x00032ae3) input_focus_pane_cp7

0xd344,	// (0x00032b11) list_form_pane

0xeb99,	// (0x00034366) form_field_popup_wide_pane_t1

0xd316,	// (0x00032ae3) input_focus_pane_cp8

0xd350,	// (0x00032b1d) list_form_wide_pane

0x9c3d,	// (0x0002f40a) form_field_slider_pane_t1_ParamLimits

0x9c3d,	// (0x0002f40a) form_field_slider_pane_t1

0x9c55,	// (0x0002f422) form_field_slider_pane_t2_ParamLimits

0x9c55,	// (0x0002f422) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x00034e55) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x00034e55) form_field_slider_pane_t

0xa2f0,	// (0x0002fabd) input_focus_pane_cp9_ParamLimits

0xa2f0,	// (0x0002fabd) input_focus_pane_cp9

0x9c6a,	// (0x0002f437) slider_cont_pane_ParamLimits

0x9c6a,	// (0x0002f437) slider_cont_pane

0xd35f,	// (0x00032b2c) form_field_slider_wide_pane_t1_ParamLimits

0xd35f,	// (0x00032b2c) form_field_slider_wide_pane_t1

0xebae,	// (0x0003437b) form_field_slider_wide_pane_t2_ParamLimits

0xebae,	// (0x0003437b) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x00034e5a) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x00034e5a) form_field_slider_wide_pane_t

0xa2f0,	// (0x0002fabd) input_focus_pane_cp10_ParamLimits

0xa2f0,	// (0x0002fabd) input_focus_pane_cp10

0x9c7e,	// (0x0002f44b) slider_cont_pane_cp1_ParamLimits

0x9c7e,	// (0x0002f44b) slider_cont_pane_cp1

0x9c92,	// (0x0002f45f) slider_form_pane_cp

0xd371,	// (0x00032b3e) input_focus_pane_g1

0xd379,	// (0x00032b46) input_focus_pane_g2

0xd381,	// (0x00032b4e) input_focus_pane_g3

0xd389,	// (0x00032b56) input_focus_pane_g4

0xd391,	// (0x00032b5e) input_focus_pane_g5

0xd399,	// (0x00032b66) input_focus_pane_g6

0xd3a1,	// (0x00032b6e) input_focus_pane_g7

0xd3a9,	// (0x00032b76) input_focus_pane_g8

0xd3b1,	// (0x00032b7e) input_focus_pane_g9

0xa030,	// (0x0002f7fd) input_focus_pane_g10

0x0009,

0xf692,	// (0x00034e5f) input_focus_pane_g

0x3340,	// (0x00028b0d) wait_border_pane_g3_copy1

0x9c9a,	// (0x0002f467) data_form_pane_t1

0xa030,	// (0x0002f7fd) wait_anim_pane_g1_copy1

0x9dcd,	// (0x0002f59a) data_form_wide_pane_t1

0xebc0,	// (0x0003438d) list_form_graphic_pane_cp_ParamLimits

0xebc0,	// (0x0003438d) list_form_graphic_pane_cp

0x42df,	// (0x00029aac) slider_form_pane_g1

0x42e8,	// (0x00029ab5) slider_form_pane_g2

0x0006,

0xf990,	// (0x0003515d) slider_form_pane_g

0xebc0,	// (0x0003438d) list_form_graphic_pane_ParamLimits

0xebc0,	// (0x0003438d) list_form_graphic_pane

0xebd2,	// (0x0003439f) list_form_graphic_pane_g1

0xebda,	// (0x000343a7) list_form_graphic_pane_t1_ParamLimits

0xebda,	// (0x000343a7) list_form_graphic_pane_t1

0xcd01,	// (0x000324ce) list_highlight_pane_cp5_ParamLimits

0xcd01,	// (0x000324ce) list_highlight_pane_cp5

0x9cb4,	// (0x0002f481) find_pane_g1

0xd3b9,	// (0x00032b86) input_find_pane

0x9cbd,	// (0x0002f48a) input_find_pane_g1_ParamLimits

0x9cbd,	// (0x0002f48a) input_find_pane_g1

0x9cc9,	// (0x0002f496) input_find_pane_t1_ParamLimits

0x9cc9,	// (0x0002f496) input_find_pane_t1

0x9cde,	// (0x0002f4ab) input_find_pane_t2_ParamLimits

0x9cde,	// (0x0002f4ab) input_find_pane_t2

0x0001,

0xf6a7,	// (0x00034e74) input_find_pane_t_ParamLimits

0xf6a7,	// (0x00034e74) input_find_pane_t

0xd3c2,	// (0x00032b8f) input_focus_pane_cp5_ParamLimits

0xd3c2,	// (0x00032b8f) input_focus_pane_cp5

0xd3d0,	// (0x00032b9d) bg_popup_window_pane_cp2_ParamLimits

0xd3d0,	// (0x00032b9d) bg_popup_window_pane_cp2

0xd3dd,	// (0x00032baa) listscroll_menu_pane_ParamLimits

0xd3dd,	// (0x00032baa) listscroll_menu_pane

0xa5fd,	// (0x0002fdca) popup_submenu_window_ParamLimits

0xa5fd,	// (0x0002fdca) popup_submenu_window

0xd3e9,	// (0x00032bb6) find_popup_pane_g1

0xd3f1,	// (0x00032bbe) input_popup_find_pane_cp

0xd3c2,	// (0x00032b8f) input_focus_pane_cp4_ParamLimits

0xd3c2,	// (0x00032b8f) input_focus_pane_cp4

0xd3fb,	// (0x00032bc8) input_popup_find_pane_t1_ParamLimits

0xd3fb,	// (0x00032bc8) input_popup_find_pane_t1

0xa120,	// (0x0002f8ed) bg_popup_sub_pane_cp

0xd429,	// (0x00032bf6) listscroll_popup_sub_pane

0xd431,	// (0x00032bfe) list_submenu_pane_ParamLimits

0xd431,	// (0x00032bfe) list_submenu_pane

0xd442,	// (0x00032c0f) scroll_pane_cp4

0xd44a,	// (0x00032c17) list_single_popup_submenu_pane_ParamLimits

0xd44a,	// (0x00032c17) list_single_popup_submenu_pane

0xd45f,	// (0x00032c2c) list_single_popup_submenu_pane_g1

0xd467,	// (0x00032c34) list_single_popup_submenu_pane_t1_ParamLimits

0xd467,	// (0x00032c34) list_single_popup_submenu_pane_t1

0xa2f0,	// (0x0002fabd) bg_active_tab_pane_cp1_ParamLimits

0xa2f0,	// (0x0002fabd) bg_active_tab_pane_cp1

0xa63b,	// (0x0002fe08) tabs_2_active_pane_g1

0xa643,	// (0x0002fe10) tabs_2_active_pane_t1

0xa2f0,	// (0x0002fabd) bg_passive_tab_pane_cp1_ParamLimits

0xa2f0,	// (0x0002fabd) bg_passive_tab_pane_cp1

0xa63b,	// (0x0002fe08) tabs_2_passive_pane_g1

0xa643,	// (0x0002fe10) tabs_2_passive_pane_t1

0xcd01,	// (0x000324ce) bg_active_tab_pane_cp4

0xa655,	// (0x0002fe22) tabs_2_long_active_pane_t1

0x1054,	// (0x00026821) bg_passive_tab_pane_cp4

0x1b8e,	// (0x0002735b) list_single_midp_graphic_pane_g4_ParamLimits

0xcd01,	// (0x000324ce) bg_active_tab_pane_cp5

0xa668,	// (0x0002fe35) tabs_3_long_active_pane_t1

0x1054,	// (0x00026821) bg_passive_tab_pane_cp5

0x1b8e,	// (0x0002735b) list_single_midp_graphic_pane_g4

0xcd01,	// (0x000324ce) bg_popup_window_pane_cp13_ParamLimits

0xcd01,	// (0x000324ce) bg_popup_window_pane_cp13

0xd485,	// (0x00032c52) listscroll_popup_fast_pane_ParamLimits

0xd485,	// (0x00032c52) listscroll_popup_fast_pane

0xd494,	// (0x00032c61) grid_popup_fast_pane_ParamLimits

0xd494,	// (0x00032c61) grid_popup_fast_pane

0xd4a6,	// (0x00032c73) scroll_pane_cp9_ParamLimits

0xd4a6,	// (0x00032c73) scroll_pane_cp9

0x5c5a,	// (0x0002b427) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5c5a,	// (0x0002b427) list_single_graphic_hl_pane_t1_cp2

0xd4ca,	// (0x00032c97) input_focus_pane_cp20_ParamLimits

0xd4ca,	// (0x00032c97) input_focus_pane_cp20

0xd4d8,	// (0x00032ca5) query_popup_data_pane_t1_ParamLimits

0xd4d8,	// (0x00032ca5) query_popup_data_pane_t1

0xd4eb,	// (0x00032cb8) query_popup_data_pane_t2_ParamLimits

0xd4eb,	// (0x00032cb8) query_popup_data_pane_t2

0xd531,	// (0x00032cfe) query_popup_data_pane_t3_ParamLimits

0xd531,	// (0x00032cfe) query_popup_data_pane_t3

0xd572,	// (0x00032d3f) query_popup_data_pane_t4_ParamLimits

0xd572,	// (0x00032d3f) query_popup_data_pane_t4

0xd5ae,	// (0x00032d7b) query_popup_data_pane_t5_ParamLimits

0xd5ae,	// (0x00032d7b) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x00034e79) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x00034e79) query_popup_data_pane_t

0xd371,	// (0x00032b3e) bg_set_opt_pane_g1

0xd379,	// (0x00032b46) bg_set_opt_pane_g2

0xd381,	// (0x00032b4e) bg_set_opt_pane_g3

0xd389,	// (0x00032b56) bg_set_opt_pane_g4

0xd391,	// (0x00032b5e) bg_set_opt_pane_g5

0xd399,	// (0x00032b66) bg_set_opt_pane_g6

0xd3a1,	// (0x00032b6e) bg_set_opt_pane_g7

0xd3a9,	// (0x00032b76) bg_set_opt_pane_g8

0xd3b1,	// (0x00032b7e) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x00034e84) bg_set_opt_pane_g

0x0638,	// (0x00025e05) control_top_pane_stacon_ParamLimits

0x0638,	// (0x00025e05) control_top_pane_stacon

0x068b,	// (0x00025e58) signal_pane_stacon_ParamLimits

0x068b,	// (0x00025e58) signal_pane_stacon

0x06b0,	// (0x00025e7d) stacon_top_pane_g1_ParamLimits

0x06b0,	// (0x00025e7d) stacon_top_pane_g1

0x06d2,	// (0x00025e9f) title_pane_stacon_ParamLimits

0x06d2,	// (0x00025e9f) title_pane_stacon

0x06fc,	// (0x00025ec9) uni_indicator_pane_stacon_ParamLimits

0x06fc,	// (0x00025ec9) uni_indicator_pane_stacon

0x0714,	// (0x00025ee1) battery_pane_stacon_ParamLimits

0x0714,	// (0x00025ee1) battery_pane_stacon

0x0758,	// (0x00025f25) control_bottom_pane_stacon_ParamLimits

0x0758,	// (0x00025f25) control_bottom_pane_stacon

0x077b,	// (0x00025f48) navi_pane_stacon_ParamLimits

0x077b,	// (0x00025f48) navi_pane_stacon

0x079e,	// (0x00025f6b) stacon_bottom_pane_g1_ParamLimits

0x079e,	// (0x00025f6b) stacon_bottom_pane_g1

0x005e,	// (0x0002582b) aid_levels_signal_lsc_ParamLimits

0x005e,	// (0x0002582b) aid_levels_signal_lsc

0x0075,	// (0x00025842) signal_pane_stacon_g1_ParamLimits

0x0075,	// (0x00025842) signal_pane_stacon_g1

0x0089,	// (0x00025856) signal_pane_stacon_g2_ParamLimits

0x0089,	// (0x00025856) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00034e97) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00034e97) signal_pane_stacon_g

0x00be,	// (0x0002588b) title_pane_stacon_t1_ParamLimits

0x00be,	// (0x0002588b) title_pane_stacon_t1

0xd5f2,	// (0x00032dbf) uni_indicator_pane_stacon_g1

0xd5fc,	// (0x00032dc9) uni_indicator_pane_stacon_g2

0xd606,	// (0x00032dd3) uni_indicator_pane_stacon_g3

0xd610,	// (0x00032ddd) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x00034ea3) uni_indicator_pane_stacon_g

0x00e3,	// (0x000258b0) control_top_pane_stacon_g1

0x00eb,	// (0x000258b8) control_top_pane_stacon_t1_ParamLimits

0x00eb,	// (0x000258b8) control_top_pane_stacon_t1

0x0122,	// (0x000258ef) aid_levels_battery_lsc_ParamLimits

0x0122,	// (0x000258ef) aid_levels_battery_lsc

0x013a,	// (0x00025907) battery_pane_stacon_g1_ParamLimits

0x013a,	// (0x00025907) battery_pane_stacon_g1

0x014d,	// (0x0002591a) battery_pane_stacon_g2_ParamLimits

0x014d,	// (0x0002591a) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x00034eac) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x00034eac) battery_pane_stacon_g

0x018b,	// (0x00025958) navi_icon_pane_stacon

0x019f,	// (0x0002596c) navi_navi_pane_stacon

0x018b,	// (0x00025958) navi_text_pane_stacon

0x00e3,	// (0x000258b0) control_bottom_pane_stacon_g1

0x01b5,	// (0x00025982) control_bottom_pane_stacon_t1_ParamLimits

0x01b5,	// (0x00025982) control_bottom_pane_stacon_t1

0xa67a,	// (0x0002fe47) grid_app_pane_ParamLimits

0xa67a,	// (0x0002fe47) grid_app_pane

0xa6b2,	// (0x0002fe7f) scroll_pane_cp15_ParamLimits

0xa6b2,	// (0x0002fe7f) scroll_pane_cp15

0xa6cb,	// (0x0002fe98) cell_app_pane_ParamLimits

0xa6cb,	// (0x0002fe98) cell_app_pane

0xa718,	// (0x0002fee5) cell_app_pane_g1_ParamLimits

0xa718,	// (0x0002fee5) cell_app_pane_g1

0xd634,	// (0x00032e01) cell_app_pane_g2_ParamLimits

0xd634,	// (0x00032e01) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x00034eb1) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x00034eb1) cell_app_pane_g

0xd640,	// (0x00032e0d) cell_app_pane_t1_ParamLimits

0xd640,	// (0x00032e0d) cell_app_pane_t1

0xd657,	// (0x00032e24) grid_highlight_pane_ParamLimits

0xd657,	// (0x00032e24) grid_highlight_pane

0xd371,	// (0x00032b3e) cell_highlight_pane_g1

0xd379,	// (0x00032b46) cell_highlight_pane_g2

0xd381,	// (0x00032b4e) cell_highlight_pane_g3

0xd389,	// (0x00032b56) cell_highlight_pane_g4

0xd391,	// (0x00032b5e) cell_highlight_pane_g5

0xd399,	// (0x00032b66) cell_highlight_pane_g6

0xd3a1,	// (0x00032b6e) cell_highlight_pane_g7

0xd3a9,	// (0x00032b76) cell_highlight_pane_g8

0xd3b1,	// (0x00032b7e) cell_highlight_pane_g9

0xa030,	// (0x0002f7fd) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00034e5f) cell_highlight_pane_g

0xd668,	// (0x00032e35) bg_scroll_pane

0x0284,	// (0x00025a51) scroll_handle_pane

0xd6af,	// (0x00032e7c) scroll_bg_pane_g1

0xd6c4,	// (0x00032e91) scroll_bg_pane_g2

0xd6dc,	// (0x00032ea9) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x00034eb6) scroll_bg_pane_g

0xd6f1,	// (0x00032ebe) scroll_handle_focus_pane_ParamLimits

0xd6f1,	// (0x00032ebe) scroll_handle_focus_pane

0xd6af,	// (0x00032e7c) scroll_handle_pane_g1

0xd6fe,	// (0x00032ecb) scroll_handle_pane_g2

0xd6dc,	// (0x00032ea9) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00034ebd) scroll_handle_pane_g

0xd3c2,	// (0x00032b8f) bg_popup_sub_pane_cp21_ParamLimits

0xd3c2,	// (0x00032b8f) bg_popup_sub_pane_cp21

0xd712,	// (0x00032edf) popup_fep_japan_predictive_window_t1_ParamLimits

0xd712,	// (0x00032edf) popup_fep_japan_predictive_window_t1

0xd729,	// (0x00032ef6) popup_fep_japan_predictive_window_t2_ParamLimits

0xd729,	// (0x00032ef6) popup_fep_japan_predictive_window_t2

0xd75c,	// (0x00032f29) popup_fep_japan_predictive_window_t3_ParamLimits

0xd75c,	// (0x00032f29) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x00034ec4) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x00034ec4) popup_fep_japan_predictive_window_t

0xa120,	// (0x0002f8ed) bg_popup_sub_pane_cp23

0xd793,	// (0x00032f60) listscroll_japin_cand_pane

0xd79b,	// (0x00032f68) popup_fep_japan_candidate_window_t1

0xd7a9,	// (0x00032f76) candidate_pane_ParamLimits

0xd7a9,	// (0x00032f76) candidate_pane

0xd7bb,	// (0x00032f88) scroll_pane_cp30

0xd7c5,	// (0x00032f92) list_single_popup_jap_candidate_pane_ParamLimits

0xd7c5,	// (0x00032f92) list_single_popup_jap_candidate_pane

0xa120,	// (0x0002f8ed) list_highlight_pane_cp30

0xd7d9,	// (0x00032fa6) list_single_popup_jap_candidate_pane_t1

0xa741,	// (0x0002ff0e) level_1_signal

0xa753,	// (0x0002ff20) level_2_signal

0xa766,	// (0x0002ff33) level_3_signal

0xa779,	// (0x0002ff46) level_4_signal

0xa78c,	// (0x0002ff59) level_5_signal

0xa79f,	// (0x0002ff6c) level_6_signal

0xa7b2,	// (0x0002ff7f) level_7_signal

0xa741,	// (0x0002ff0e) level_1_battery

0xa753,	// (0x0002ff20) level_2_battery

0xa766,	// (0x0002ff33) level_3_battery

0xa779,	// (0x0002ff46) level_4_battery

0xa78c,	// (0x0002ff59) level_5_battery

0xa79f,	// (0x0002ff6c) level_6_battery

0xa7b2,	// (0x0002ff7f) level_7_battery

0xd800,	// (0x00032fcd) list_menu_pane_ParamLimits

0xd800,	// (0x00032fcd) list_menu_pane

0xd816,	// (0x00032fe3) scroll_pane_cp25_ParamLimits

0xd816,	// (0x00032fe3) scroll_pane_cp25

0xd82f,	// (0x00032ffc) list_double2_graphic_pane_cp2_ParamLimits

0xd82f,	// (0x00032ffc) list_double2_graphic_pane_cp2

0xd82f,	// (0x00032ffc) list_double2_large_graphic_pane_cp2_ParamLimits

0xd82f,	// (0x00032ffc) list_double2_large_graphic_pane_cp2

0xd82f,	// (0x00032ffc) list_double2_pane_cp2_ParamLimits

0xd82f,	// (0x00032ffc) list_double2_pane_cp2

0xd82f,	// (0x00032ffc) list_double_graphic_pane_cp2_ParamLimits

0xd82f,	// (0x00032ffc) list_double_graphic_pane_cp2

0xd82f,	// (0x00032ffc) list_double_large_graphic_pane_cp2_ParamLimits

0xd82f,	// (0x00032ffc) list_double_large_graphic_pane_cp2

0xd82f,	// (0x00032ffc) list_double_number_pane_cp2_ParamLimits

0xd82f,	// (0x00032ffc) list_double_number_pane_cp2

0xd82f,	// (0x00032ffc) list_double_pane_cp2_ParamLimits

0xd82f,	// (0x00032ffc) list_double_pane_cp2

0xa7d8,	// (0x0002ffa5) list_single_2graphic_pane_cp2_ParamLimits

0xa7d8,	// (0x0002ffa5) list_single_2graphic_pane_cp2

0xa7d8,	// (0x0002ffa5) list_single_graphic_heading_pane_cp2_ParamLimits

0xa7d8,	// (0x0002ffa5) list_single_graphic_heading_pane_cp2

0xa7d8,	// (0x0002ffa5) list_single_graphic_pane_cp2_ParamLimits

0xa7d8,	// (0x0002ffa5) list_single_graphic_pane_cp2

0xa7d8,	// (0x0002ffa5) list_single_heading_pane_cp2_ParamLimits

0xa7d8,	// (0x0002ffa5) list_single_heading_pane_cp2

0xd83f,	// (0x0003300c) list_single_large_graphic_pane_cp2_ParamLimits

0xd83f,	// (0x0003300c) list_single_large_graphic_pane_cp2

0xa7d8,	// (0x0002ffa5) list_single_number_heading_pane_cp2_ParamLimits

0xa7d8,	// (0x0002ffa5) list_single_number_heading_pane_cp2

0xa7d8,	// (0x0002ffa5) list_single_number_pane_cp2_ParamLimits

0xa7d8,	// (0x0002ffa5) list_single_number_pane_cp2

0xa7d8,	// (0x0002ffa5) list_single_pane_cp2_ParamLimits

0xa7d8,	// (0x0002ffa5) list_single_pane_cp2

0x0420,	// (0x00025bed) bg_popup_sub_pane_cp22

0x0445,	// (0x00025c12) popup_side_volume_key_window_g1

0x046f,	// (0x00025c3c) popup_side_volume_key_window_t1

0x048d,	// (0x00025c5a) volume_small_pane_cp1

0xa2f0,	// (0x0002fabd) bg_popup_sub_pane_cp24_ParamLimits

0xa2f0,	// (0x0002fabd) bg_popup_sub_pane_cp24

0x0495,	// (0x00025c62) fep_china_uni_candidate_pane_ParamLimits

0x0495,	// (0x00025c62) fep_china_uni_candidate_pane

0x04a9,	// (0x00025c76) fep_china_uni_entry_pane

0x04b9,	// (0x00025c86) popup_fep_china_uni_window_g1

0x04d5,	// (0x00025ca2) fep_china_uni_entry_pane_g1

0x04df,	// (0x00025cac) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x00034ef5) fep_china_uni_entry_pane_g

0x04e9,	// (0x00025cb6) fep_entry_item_pane

0x04f3,	// (0x00025cc0) fep_candidate_item_pane

0x04fb,	// (0x00025cc8) fep_china_uni_candidate_pane_g1

0x0505,	// (0x00025cd2) fep_china_uni_candidate_pane_g2

0x050d,	// (0x00025cda) fep_china_uni_candidate_pane_g3

0x0515,	// (0x00025ce2) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x00034efa) fep_china_uni_candidate_pane_g

0xa030,	// (0x0002f7fd) fep_entry_item_pane_g1

0x051f,	// (0x00025cec) fep_entry_item_pane_t1_ParamLimits

0x051f,	// (0x00025cec) fep_entry_item_pane_t1

0x0535,	// (0x00025d02) fep_candidate_item_pane_t1_ParamLimits

0x0535,	// (0x00025d02) fep_candidate_item_pane_t1

0x054a,	// (0x00025d17) fep_candidate_item_pane_t2_ParamLimits

0x054a,	// (0x00025d17) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x00034f03) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x00034f03) fep_candidate_item_pane_t

0xcd01,	// (0x000324ce) list_highlight_pane_cp31_ParamLimits

0xcd01,	// (0x000324ce) list_highlight_pane_cp31

0x055c,	// (0x00025d29) level_1_signal_lsc

0x0565,	// (0x00025d32) level_2_signal_lsc

0x056e,	// (0x00025d3b) level_3_signal_lsc

0x0577,	// (0x00025d44) level_4_signal_lsc

0x0580,	// (0x00025d4d) level_5_signal_lsc

0x0589,	// (0x00025d56) level_6_signal_lsc

0x0592,	// (0x00025d5f) level_7_signal_lsc

0x0592,	// (0x00025d5f) level_1_battery_lsc

0x059b,	// (0x00025d68) level_2_battery_lsc

0x05a4,	// (0x00025d71) level_3_battery_lsc

0x05ad,	// (0x00025d7a) level_4_battery_lsc

0x05b6,	// (0x00025d83) level_5_battery_lsc

0x05bf,	// (0x00025d8c) level_6_battery_lsc

0x055c,	// (0x00025d29) level_7_battery_lsc

0x05c8,	// (0x00025d95) scroll_handle_focus_pane_g1

0x05d1,	// (0x00025d9e) scroll_handle_focus_pane_g2

0x05da,	// (0x00025da7) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x00034f08) scroll_handle_focus_pane_g

0x9cf3,	// (0x0002f4c0) list_single_2graphic_pane_g1_ParamLimits

0x9cf3,	// (0x0002f4c0) list_single_2graphic_pane_g1

0x9794,	// (0x0002ef61) list_single_2graphic_pane_g2_ParamLimits

0x9794,	// (0x0002ef61) list_single_2graphic_pane_g2

0xea73,	// (0x00034240) list_single_2graphic_pane_g3_ParamLimits

0xea73,	// (0x00034240) list_single_2graphic_pane_g3

0x9cff,	// (0x0002f4cc) list_single_2graphic_pane_g4_ParamLimits

0x9cff,	// (0x0002f4cc) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00034f0f) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00034f0f) list_single_2graphic_pane_g

0x9d0b,	// (0x0002f4d8) list_single_2graphic_pane_t1_ParamLimits

0x9d0b,	// (0x0002f4d8) list_single_2graphic_pane_t1

0x9d39,	// (0x0002f506) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9d39,	// (0x0002f506) list_double2_graphic_large_graphic_pane_g1

0x99ab,	// (0x0002f178) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x99ab,	// (0x0002f178) list_double2_graphic_large_graphic_pane_g2

0x99bc,	// (0x0002f189) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x99bc,	// (0x0002f189) list_double2_graphic_large_graphic_pane_g3

0x9d4b,	// (0x0002f518) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9d4b,	// (0x0002f518) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x00034f18) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x00034f18) list_double2_graphic_large_graphic_pane_g

0x9d57,	// (0x0002f524) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9d57,	// (0x0002f524) list_double2_graphic_large_graphic_pane_t1

0x9d6d,	// (0x0002f53a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9d6d,	// (0x0002f53a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x00034f21) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x00034f21) list_double2_graphic_large_graphic_pane_t

0x0860,	// (0x0002602d) popup_fast_swap_window_ParamLimits

0x0860,	// (0x0002602d) popup_fast_swap_window

0x087e,	// (0x0002604b) popup_side_volume_key_window

0x089c,	// (0x00026069) stacon_top_pane

0x08a6,	// (0x00026073) status_pane_ParamLimits

0x08a6,	// (0x00026073) status_pane

0x089c,	// (0x00026069) status_small_pane

0xa120,	// (0x0002f8ed) control_pane

0xa120,	// (0x0002f8ed) stacon_bottom_pane

0xd2f9,	// (0x00032ac6) scroll_pane_cp121

0xd2f0,	// (0x00032abd) set_content_pane

0xa86a,	// (0x00030037) bg_active_tab_pane_g1_cp1

0x05ec,	// (0x00025db9) bg_active_tab_pane_g2_cp1

0xa873,	// (0x00030040) bg_active_tab_pane_g3_cp1

0xa86a,	// (0x00030037) bg_passive_tab_pane_g1_cp1

0x05ec,	// (0x00025db9) bg_passive_tab_pane_g2_cp1

0xa873,	// (0x00030040) bg_passive_tab_pane_g3_cp1

0xa87c,	// (0x00030049) bg_active_tab_pane_g1_cp2

0x05ec,	// (0x00025db9) bg_active_tab_pane_g2_cp2

0xa885,	// (0x00030052) bg_active_tab_pane_g3_cp2

0xa87c,	// (0x00030049) bg_passive_tab_pane_g1_cp2

0x05ec,	// (0x00025db9) bg_passive_tab_pane_g2_cp2

0xa885,	// (0x00030052) bg_passive_tab_pane_g3_cp2

0xa88e,	// (0x0003005b) bg_active_tab_pane_g1_cp3

0x05ec,	// (0x00025db9) bg_active_tab_pane_g2_cp3

0xa897,	// (0x00030064) bg_active_tab_pane_g3_cp3

0xa88e,	// (0x0003005b) bg_passive_tab_pane_g1_cp3

0x05ec,	// (0x00025db9) bg_passive_tab_pane_g2_cp3

0xa897,	// (0x00030064) bg_passive_tab_pane_g3_cp3

0xa8a0,	// (0x0003006d) bg_active_tab_pane_g1_cp4

0x05ec,	// (0x00025db9) bg_active_tab_pane_g2_cp4

0xa8a9,	// (0x00030076) bg_active_tab_pane_g3_cp4

0xa8a0,	// (0x0003006d) bg_passive_tab_pane_g1_cp4

0x05ec,	// (0x00025db9) bg_passive_tab_pane_g2_cp4

0xa8a9,	// (0x00030076) bg_passive_tab_pane_g3_cp4

0x07ba,	// (0x00025f87) bg_active_tab_pane_g1_cp5

0x05ec,	// (0x00025db9) bg_active_tab_pane_g2_cp5

0x07c3,	// (0x00025f90) bg_active_tab_pane_g3_cp5

0x07ba,	// (0x00025f87) bg_passive_tab_pane_g1_cp5

0x05ec,	// (0x00025db9) bg_passive_tab_pane_g2_cp5

0x07c3,	// (0x00025f90) bg_passive_tab_pane_g3_cp5

0x48e1,	// (0x0002a0ae) list_set_graphic_pane_ParamLimits

0x48e1,	// (0x0002a0ae) list_set_graphic_pane

0xa120,	// (0x0002f8ed) bg_set_opt_pane_cp4

0xa8b2,	// (0x0003007f) list_set_graphic_pane_g1_ParamLimits

0xa8b2,	// (0x0003007f) list_set_graphic_pane_g1

0xa8be,	// (0x0003008b) list_set_graphic_pane_g2_ParamLimits

0xa8be,	// (0x0003008b) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x00034f26) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x00034f26) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x000352a9) volume_small_pane_cp_g

0xa8e2,	// (0x000300af) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa8e2,	// (0x000300af) list_double2_large_graphic_pane_g1_cp2

0xa8f0,	// (0x000300bd) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa8f0,	// (0x000300bd) list_double2_large_graphic_pane_g2_cp2

0x0830,	// (0x00025ffd) list_double2_large_graphic_pane_g3_cp2

0x0838,	// (0x00026005) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0838,	// (0x00026005) list_double2_large_graphic_pane_t1_cp2

0x084e,	// (0x0002601b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x084e,	// (0x0002601b) list_double2_large_graphic_pane_t2_cp2

0xbb12,	// (0x000312df) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbb12,	// (0x000312df) list_double_large_graphic_pane_g1_cp2

0xbb25,	// (0x000312f2) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbb25,	// (0x000312f2) list_double_large_graphic_pane_g2_cp2

0x09c4,	// (0x00026191) list_double_large_graphic_pane_g3_cp2

0x3e48,	// (0x00029615) list_double_large_graphic_pane_g4_cp

0x3e50,	// (0x0002961d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3e50,	// (0x0002961d) list_double_large_graphic_pane_t1_cp2

0x3e67,	// (0x00029634) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3e67,	// (0x00029634) list_double_large_graphic_pane_t2_cp2

0xa901,	// (0x000300ce) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa901,	// (0x000300ce) list_double2_graphic_pane_g1_cp2

0xa90f,	// (0x000300dc) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa90f,	// (0x000300dc) list_double2_graphic_pane_g2_cp2

0xa920,	// (0x000300ed) list_double2_graphic_pane_g3_cp2

0x08dd,	// (0x000260aa) list_double2_graphic_pane_t1_cp2_ParamLimits

0x08dd,	// (0x000260aa) list_double2_graphic_pane_t1_cp2

0x08f3,	// (0x000260c0) list_double2_graphic_pane_t2_cp2_ParamLimits

0x08f3,	// (0x000260c0) list_double2_graphic_pane_t2_cp2

0x0905,	// (0x000260d2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0905,	// (0x000260d2) list_single_number_heading_pane_g1_cp2

0x0911,	// (0x000260de) list_single_number_heading_pane_g2_cp2

0x0919,	// (0x000260e6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0919,	// (0x000260e6) list_single_number_heading_pane_t1_cp2

0xa92a,	// (0x000300f7) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa92a,	// (0x000300f7) list_single_number_heading_pane_t2_cp2

0x0943,	// (0x00026110) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0943,	// (0x00026110) list_single_number_heading_pane_t3_cp2

0x0905,	// (0x000260d2) list_single_heading_pane_g1_cp2_ParamLimits

0x0905,	// (0x000260d2) list_single_heading_pane_g1_cp2

0x0911,	// (0x000260de) list_single_heading_pane_g2_cp2

0x0919,	// (0x000260e6) list_single_heading_pane_t1_cp2_ParamLimits

0x0919,	// (0x000260e6) list_single_heading_pane_t1_cp2

0xbafe,	// (0x000312cb) list_single_heading_pane_t2_cp2_ParamLimits

0xbafe,	// (0x000312cb) list_single_heading_pane_t2_cp2

0x3b66,	// (0x00029333) list_double_graphic_pane_g1_cp2_ParamLimits

0x3b66,	// (0x00029333) list_double_graphic_pane_g1_cp2

0x3b72,	// (0x0002933f) list_double_graphic_pane_g2_cp2_ParamLimits

0x3b72,	// (0x0002933f) list_double_graphic_pane_g2_cp2

0x3b81,	// (0x0002934e) list_double_graphic_pane_g3_cp2

0x3b89,	// (0x00029356) list_double_graphic_pane_t1_cp2_ParamLimits

0x3b89,	// (0x00029356) list_double_graphic_pane_t1_cp2

0x3b9f,	// (0x0002936c) list_double_graphic_pane_t2_cp2_ParamLimits

0x3b9f,	// (0x0002936c) list_double_graphic_pane_t2_cp2

0x09b8,	// (0x00026185) list_double_number_pane_g1_cp2_ParamLimits

0x09b8,	// (0x00026185) list_double_number_pane_g1_cp2

0x09c4,	// (0x00026191) list_double_number_pane_g2_cp2

0xba98,	// (0x00031265) list_double_number_pane_t1_cp2_ParamLimits

0xba98,	// (0x00031265) list_double_number_pane_t1_cp2

0x3b3e,	// (0x0002930b) list_double_number_pane_t2_cp2_ParamLimits

0x3b3e,	// (0x0002930b) list_double_number_pane_t2_cp2

0x3b54,	// (0x00029321) list_double_number_pane_t3_cp2_ParamLimits

0x3b54,	// (0x00029321) list_double_number_pane_t3_cp2

0xb9d5,	// (0x000311a2) list_single_graphic_pane_g1_cp2_ParamLimits

0xb9d5,	// (0x000311a2) list_single_graphic_pane_g1_cp2

0x0a1e,	// (0x000261eb) list_single_graphic_pane_g2_cp2_ParamLimits

0x0a1e,	// (0x000261eb) list_single_graphic_pane_g2_cp2

0x0a2a,	// (0x000261f7) list_single_graphic_pane_g3_cp2

0x39e9,	// (0x000291b6) list_single_graphic_pane_t1_cp2_ParamLimits

0x39e9,	// (0x000291b6) list_single_graphic_pane_t1_cp2

0x0a1e,	// (0x000261eb) list_single_number_pane_g1_cp2_ParamLimits

0x0a1e,	// (0x000261eb) list_single_number_pane_g1_cp2

0x0a2a,	// (0x000261f7) list_single_number_pane_g2_cp2

0x39e9,	// (0x000291b6) list_single_number_pane_t1_cp2_ParamLimits

0x39e9,	// (0x000291b6) list_single_number_pane_t1_cp2

0xb9c1,	// (0x0003118e) list_single_number_pane_t2_cp2_ParamLimits

0xb9c1,	// (0x0003118e) list_single_number_pane_t2_cp2

0xa8f0,	// (0x000300bd) list_double2_pane_g1_cp2_ParamLimits

0xa8f0,	// (0x000300bd) list_double2_pane_g1_cp2

0x0830,	// (0x00025ffd) list_double2_pane_g2_cp2

0x0990,	// (0x0002615d) list_double2_pane_t1_cp2_ParamLimits

0x0990,	// (0x0002615d) list_double2_pane_t1_cp2

0x09a6,	// (0x00026173) list_double2_pane_t2_cp2_ParamLimits

0x09a6,	// (0x00026173) list_double2_pane_t2_cp2

0x09b8,	// (0x00026185) list_double_pane_g1_cp2_ParamLimits

0x09b8,	// (0x00026185) list_double_pane_g1_cp2

0x09c4,	// (0x00026191) list_double_pane_g2_cp2

0x09cc,	// (0x00026199) list_double_pane_t1_cp2_ParamLimits

0x09cc,	// (0x00026199) list_double_pane_t1_cp2

0x09e2,	// (0x000261af) list_double_pane_t2_cp2_ParamLimits

0x09e2,	// (0x000261af) list_double_pane_t2_cp2

0x0a0e,	// (0x000261db) list_single_pane_cp2_g3

0x0a1e,	// (0x000261eb) list_single_pane_g1_cp2_ParamLimits

0x0a1e,	// (0x000261eb) list_single_pane_g1_cp2

0x0a2a,	// (0x000261f7) list_single_pane_g2_cp2

0x0a32,	// (0x000261ff) list_single_pane_t1_cp2_ParamLimits

0x0a32,	// (0x000261ff) list_single_pane_t1_cp2

0xa958,	// (0x00030125) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa958,	// (0x00030125) list_single_large_graphic_pane_g1_cp2

0x0a58,	// (0x00026225) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0a58,	// (0x00026225) list_single_large_graphic_pane_g2_cp2

0x0a64,	// (0x00026231) list_single_large_graphic_pane_g3_cp2

0x0a6c,	// (0x00026239) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x0a6c,	// (0x00026239) list_single_large_graphic_pane_g4_cp1

0x0a86,	// (0x00026253) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0a86,	// (0x00026253) list_single_large_graphic_pane_t1_cp2

0x39b3,	// (0x00029180) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x39b3,	// (0x00029180) list_single_graphic_heading_pane_g1_cp2

0xb846,	// (0x00031013) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb846,	// (0x00031013) list_single_graphic_heading_pane_g4_cp2

0x0a2a,	// (0x000261f7) list_single_graphic_heading_pane_g5_cp2

0x39bf,	// (0x0002918c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x39bf,	// (0x0002918c) list_single_graphic_heading_pane_t1_cp2

0xb857,	// (0x00031024) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb857,	// (0x00031024) list_single_graphic_heading_pane_t2_cp2

0x3974,	// (0x00029141) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3974,	// (0x00029141) list_single_2graphic_pane_g1_cp2

0xb846,	// (0x00031013) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb846,	// (0x00031013) list_single_2graphic_pane_g2_cp2

0x0a2a,	// (0x000261f7) list_single_2graphic_pane_g3_cp2

0x3991,	// (0x0002915e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3991,	// (0x0002915e) list_single_2graphic_pane_g4_cp2

0x399d,	// (0x0002916a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x399d,	// (0x0002916a) list_single_2graphic_pane_t1_cp2

0xa030,	// (0x0002f7fd) list_highlight_pane_g10_cp1

0x354c,	// (0x00028d19) list_highlight_pane_g1_cp1

0x3554,	// (0x00028d21) list_highlight_pane_g2_cp1

0x355c,	// (0x00028d29) list_highlight_pane_g3_cp1

0x3564,	// (0x00028d31) list_highlight_pane_g4_cp1

0x356c,	// (0x00028d39) list_highlight_pane_g5_cp1

0x3574,	// (0x00028d41) list_highlight_pane_g6_cp1

0x357c,	// (0x00028d49) list_highlight_pane_g7_cp1

0x3584,	// (0x00028d51) list_highlight_pane_g8_cp1

0x358c,	// (0x00028d59) list_highlight_pane_g9_cp1

0xb80c,	// (0x00030fd9) form_field_slider_pane_t3

0xb81a,	// (0x00030fe7) form_field_slider_pane_t4

0x3488,	// (0x00028c55) slider_form_pane_ParamLimits

0x3488,	// (0x00028c55) slider_form_pane

0xa120,	// (0x0002f8ed) control_abbreviations

0xa120,	// (0x0002f8ed) control_conventions

0xa120,	// (0x0002f8ed) control_definitions

0xa120,	// (0x0002f8ed) format_table_attribute

0x3c74,	// (0x00029441) bg_popup_preview_window_pane_g9

0xa120,	// (0x0002f8ed) format_table_data2

0xa120,	// (0x0002f8ed) format_table_data3

0xa120,	// (0x0002f8ed) format_table_data_example

0x0008,

0xa120,	// (0x0002f8ed) intro_purpose

0xf8f0,	// (0x000350bd) bg_popup_preview_window_pane_g

0xa120,	// (0x0002f8ed) texts_category

0xa120,	// (0x0002f8ed) texts_graphics

0x0a9c,	// (0x00026269) text_digital

0x0aab,	// (0x00026278) text_primary

0x0aba,	// (0x00026287) text_primary_small

0x0ac9,	// (0x00026296) text_secondary

0x0ad8,	// (0x000262a5) text_title

0x4426,	// (0x00029bf3) bg_passive_tab_pane_g1_cp3_srt

0x05ec,	// (0x00025db9) bg_passive_tab_pane_g2_cp3_srt

0x442f,	// (0x00029bfc) bg_passive_tab_pane_g3_cp3_srt

0xa2f0,	// (0x0002fabd) bg_active_tab_pane_cp3_srt_ParamLimits

0xa2f0,	// (0x0002fabd) bg_active_tab_pane_cp3_srt

0x4438,	// (0x00029c05) tabs_4_active_pane_srt_g1

0xbe31,	// (0x000315fe) tabs_4_active_pane_srt_t1_ParamLimits

0xbe31,	// (0x000315fe) tabs_4_active_pane_srt_t1

0x4426,	// (0x00029bf3) bg_active_tab_pane_g1_cp3_copy1

0x05ec,	// (0x00025db9) bg_active_tab_pane_g2_cp3_copy1

0x442f,	// (0x00029bfc) bg_active_tab_pane_g3_cp3_copy1

0xcd01,	// (0x000324ce) tabs_2_long_active_pane_srt_ParamLimits

0xcd01,	// (0x000324ce) tabs_2_long_active_pane_srt

0xcd01,	// (0x000324ce) tabs_2_long_passive_pane_srt_ParamLimits

0xcd01,	// (0x000324ce) tabs_2_long_passive_pane_srt

0x1054,	// (0x00026821) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1054,	// (0x00026821) bg_passive_tab_pane_cp4_srt

0x40c4,	// (0x00029891) bg_passive_tab_pane_g1_cp4_srt

0x05ec,	// (0x00025db9) bg_passive_tab_pane_g2_cp4_srt

0x40cd,	// (0x0002989a) bg_passive_tab_pane_g3_cp4_srt

0xcd01,	// (0x000324ce) bg_active_tab_pane_cp4_srt_ParamLimits

0xcd01,	// (0x000324ce) bg_active_tab_pane_cp4_srt

0xbc0f,	// (0x000313dc) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbc0f,	// (0x000313dc) tabs_2_long_active_pane_srt_t1

0x40c4,	// (0x00029891) bg_active_tab_pane_g1_cp4_srt

0x05ec,	// (0x00025db9) bg_active_tab_pane_g2_cp4_srt

0x40cd,	// (0x0002989a) bg_active_tab_pane_g3_cp4_srt

0xa2f0,	// (0x0002fabd) tabs_3_long_active_pane_srt_ParamLimits

0xa2f0,	// (0x0002fabd) tabs_3_long_active_pane_srt

0xa2f0,	// (0x0002fabd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa2f0,	// (0x0002fabd) tabs_3_long_passive_pane_cp_srt

0xa2f0,	// (0x0002fabd) tabs_3_long_passive_pane_srt_ParamLimits

0xa2f0,	// (0x0002fabd) tabs_3_long_passive_pane_srt

0x1054,	// (0x00026821) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1054,	// (0x00026821) bg_passive_tab_pane_cp5_srt

0x07ba,	// (0x00025f87) bg_passive_tab_pane_g1_cp5_srt

0x05ec,	// (0x00025db9) bg_passive_tab_pane_g2_cp5_srt

0x07c3,	// (0x00025f90) bg_passive_tab_pane_g3_cp5_srt

0xcd01,	// (0x000324ce) bg_active_tab_pane_cp5_srt_ParamLimits

0xcd01,	// (0x000324ce) bg_active_tab_pane_cp5_srt

0xbbf9,	// (0x000313c6) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbbf9,	// (0x000313c6) tabs_3_long_active_pane_srt_t1

0x07ba,	// (0x00025f87) bg_active_tab_pane_g1_cp5_srt

0x05ec,	// (0x00025db9) bg_active_tab_pane_g2_cp5_srt

0x07c3,	// (0x00025f90) bg_active_tab_pane_g3_cp5_srt

0x40a4,	// (0x00029871) navi_text_pane_srt_t1

0x409c,	// (0x00029869) navi_icon_pane_srt_g1

0x0d4c,	// (0x00026519) midp_editing_number_pane_srt

0x0ae7,	// (0x000262b4) midp_ticker_pane_srt

0x0d54,	// (0x00026521) midp_ticker_pane_srt_g1

0x0d5c,	// (0x00026529) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x00034f45) midp_ticker_pane_srt_g

0x0d64,	// (0x00026531) midp_ticker_pane_srt_t1

0x408d,	// (0x0002985a) midp_editing_number_pane_t1_copy1

0x1054,	// (0x00026821) listscroll_midp_pane

0x1054,	// (0x00026821) midp_form_pane

0x0b51,	// (0x0002631e) midp_info_popup_window_ParamLimits

0x0b51,	// (0x0002631e) midp_info_popup_window

0xd3c2,	// (0x00032b8f) bg_popup_sub_pane_cp50_ParamLimits

0xd3c2,	// (0x00032b8f) bg_popup_sub_pane_cp50

0x3182,	// (0x0002894f) listscroll_midp_info_pane_ParamLimits

0x3182,	// (0x0002894f) listscroll_midp_info_pane

0x316a,	// (0x00028937) listscroll_form_midp_pane_ParamLimits

0x316a,	// (0x00028937) listscroll_form_midp_pane

0x3176,	// (0x00028943) scroll_bar_cp050

0xb800,	// (0x00030fcd) list_midp_pane

0x4ec1,	// (0x0002a68e) signal_pane_g2_cp

0x3084,	// (0x00028851) listscroll_midp_info_pane_t1_ParamLimits

0x3084,	// (0x00028851) listscroll_midp_info_pane_t1

0x309c,	// (0x00028869) listscroll_midp_info_pane_t2_ParamLimits

0x309c,	// (0x00028869) listscroll_midp_info_pane_t2

0x30da,	// (0x000288a7) listscroll_midp_info_pane_t3_ParamLimits

0x30da,	// (0x000288a7) listscroll_midp_info_pane_t3

0x3114,	// (0x000288e1) listscroll_midp_info_pane_t4_ParamLimits

0x3114,	// (0x000288e1) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x00034ff8) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x00034ff8) listscroll_midp_info_pane_t

0xd442,	// (0x00032c0f) scroll_pane_cp21

0x301e,	// (0x000287eb) form_midp_field_choice_group_pane

0x3027,	// (0x000287f4) form_midp_field_text_pane

0x306a,	// (0x00028837) form_midp_field_time_pane

0x3072,	// (0x0002883f) form_midp_gauge_slider_pane

0x307b,	// (0x00028848) form_midp_gauge_wait_pane

0xa120,	// (0x0002f8ed) form_midp_image_pane

0x9d9b,	// (0x0002f568) list_single_midp_pane_ParamLimits

0x9d9b,	// (0x0002f568) list_single_midp_pane

0xb7d8,	// (0x00030fa5) form_midp_field_text_pane_t1

0x2dce,	// (0x0002859b) input_focus_pane_cp050

0x300d,	// (0x000287da) list_midp_form_text_pane

0x2fb1,	// (0x0002877e) form_midp_field_choice_group_pane_t1

0x2fbf,	// (0x0002878c) input_focus_pane_cp051

0x2fd3,	// (0x000287a0) list_midp_choice_pane

0xa120,	// (0x0002f8ed) status_idle_pane

0x2f95,	// (0x00028762) form_midp_field_time_pane_t1

0xa030,	// (0x0002f7fd) wait_anim_pane_g2_copy1

0x2fa3,	// (0x00028770) form_midp_field_time_pane_t2

0x0001,

0x0c01,	// (0x000263ce) aid_navinavi_width_2_pane

0xf826,	// (0x00034ff3) form_midp_field_time_pane_t

0xa120,	// (0x0002f8ed) input_focus_pane_cp052

0xa120,	// (0x0002f8ed) bg_input_focus_pane_cp040

0x2f55,	// (0x00028722) form_midp_gauge_slider_pane_t1

0x2f63,	// (0x00028730) form_midp_gauge_slider_pane_t2

0xb7bc,	// (0x00030f89) form_midp_gauge_slider_pane_t3

0xb7ca,	// (0x00030f97) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x00034fea) form_midp_gauge_slider_pane_t

0x2f8d,	// (0x0002875a) form_midp_slider_pane

0xcd01,	// (0x000324ce) bg_input_focus_pane_cp041_ParamLimits

0xcd01,	// (0x000324ce) bg_input_focus_pane_cp041

0x2f22,	// (0x000286ef) form_midp_gauge_wait_pane_t1_ParamLimits

0x2f22,	// (0x000286ef) form_midp_gauge_wait_pane_t1

0x2f34,	// (0x00028701) form_midp_gauge_wait_pane_t2_ParamLimits

0x2f34,	// (0x00028701) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x00034fe5) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x00034fe5) form_midp_gauge_wait_pane_t

0x2f46,	// (0x00028713) form_midp_wait_pane_ParamLimits

0x2f46,	// (0x00028713) form_midp_wait_pane

0x2eea,	// (0x000286b7) form_midp_image_pane_g1

0x2ef3,	// (0x000286c0) form_midp_image_pane_t1

0x2f02,	// (0x000286cf) form_midp_image_pane_t2

0x2f11,	// (0x000286de) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x00034fde) form_midp_image_pane_t

0x2ee1,	// (0x000286ae) list_single_midp_pane_g1

0xed33,	// (0x00034500) list_single_midp_pane_t1

0xb7a5,	// (0x00030f72) list_midp_form_item_pane_ParamLimits

0xb7a5,	// (0x00030f72) list_midp_form_item_pane

0x0ba9,	// (0x00026376) list_midp_form_item_pane_t1

0x0bb8,	// (0x00026385) midp_ticker_pane_g1

0x0bc4,	// (0x00026391) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x00034f2b) midp_ticker_pane_g

0xa9fd,	// (0x000301ca) midp_ticker_pane_t1

0xbd9e,	// (0x0003156b) midp_editing_number_pane_t1

0x430a,	// (0x00029ad7) midp_editing_number_pane

0x4319,	// (0x00029ae6) midp_ticker_pane

0x407d,	// (0x0002984a) ai_message_heading_pane

0xa120,	// (0x0002f8ed) bg_popup_window_pane_cp14

0x4085,	// (0x00029852) listscroll_ai_message_pane

0x4003,	// (0x000297d0) ai_message_heading_pane_g1_ParamLimits

0x4003,	// (0x000297d0) ai_message_heading_pane_g1

0x400f,	// (0x000297dc) ai_message_heading_pane_g2_ParamLimits

0x400f,	// (0x000297dc) ai_message_heading_pane_g2

0x401d,	// (0x000297ea) ai_message_heading_pane_g3_ParamLimits

0x401d,	// (0x000297ea) ai_message_heading_pane_g3

0x4029,	// (0x000297f6) ai_message_heading_pane_g4_ParamLimits

0x4029,	// (0x000297f6) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0003511f) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0003511f) ai_message_heading_pane_g

0x4035,	// (0x00029802) ai_message_heading_pane_t1_ParamLimits

0x4035,	// (0x00029802) ai_message_heading_pane_t1

0x404f,	// (0x0002981c) ai_message_heading_pane_t2_ParamLimits

0x404f,	// (0x0002981c) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x00035128) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x00035128) ai_message_heading_pane_t

0x4063,	// (0x00029830) bg_popup_heading_pane_cp1_ParamLimits

0x4063,	// (0x00029830) bg_popup_heading_pane_cp1

0x3ff1,	// (0x000297be) list_ai_message_pane_ParamLimits

0x3ff1,	// (0x000297be) list_ai_message_pane

0xd442,	// (0x00032c0f) scroll_pane_cp10

0x3f8d,	// (0x0002975a) list_ai_message_pane_g1

0x3f95,	// (0x00029762) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x000350fc) list_ai_message_pane_g

0x3f9d,	// (0x0002976a) list_ai_message_pane_t1_ParamLimits

0x3f9d,	// (0x0002976a) list_ai_message_pane_t1

0x3fb2,	// (0x0002977f) list_ai_message_pane_t2_ParamLimits

0x3fb2,	// (0x0002977f) list_ai_message_pane_t2

0x3fc7,	// (0x00029794) list_ai_message_pane_t3_ParamLimits

0x3fc7,	// (0x00029794) list_ai_message_pane_t3

0x3fdc,	// (0x000297a9) list_ai_message_pane_t4_ParamLimits

0x3fdc,	// (0x000297a9) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x00035101) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x00035101) list_ai_message_pane_t

0xbbdf,	// (0x000313ac) cell_ai_soft_ind_pane_ParamLimits

0xbbdf,	// (0x000313ac) cell_ai_soft_ind_pane

0x0be2,	// (0x000263af) cell_ai_soft_ind_pane_g1_ParamLimits

0x0be2,	// (0x000263af) cell_ai_soft_ind_pane_g1

0xa120,	// (0x0002f8ed) grid_highlight_cp1

0x0bef,	// (0x000263bc) text_secondary_cp56_ParamLimits

0x0bef,	// (0x000263bc) text_secondary_cp56

0x3f4b,	// (0x00029718) example_general_pane_ParamLimits

0x3f4b,	// (0x00029718) example_general_pane

0x3f57,	// (0x00029724) example_parent_pane_g1_ParamLimits

0x3f57,	// (0x00029724) example_parent_pane_g1

0x3f63,	// (0x00029730) example_parent_pane_t1_ParamLimits

0x3f63,	// (0x00029730) example_parent_pane_t1

0xafb8,	// (0x00030785) popup_preview_text_window_ParamLimits

0xafb8,	// (0x00030785) popup_preview_text_window

0x0a16,	// (0x000261e3) list_single_pane_cp2_g4

0xcedc,	// (0x000326a9) bg_popup_preview_window_pane_ParamLimits

0xcedc,	// (0x000326a9) bg_popup_preview_window_pane

0x3c7e,	// (0x0002944b) popup_preview_text_window_t1_ParamLimits

0x3c7e,	// (0x0002944b) popup_preview_text_window_t1

0x3c9c,	// (0x00029469) popup_preview_text_window_t2_ParamLimits

0x3c9c,	// (0x00029469) popup_preview_text_window_t2

0x3ce5,	// (0x000294b2) popup_preview_text_window_t3_ParamLimits

0x3ce5,	// (0x000294b2) popup_preview_text_window_t3

0x3d2a,	// (0x000294f7) popup_preview_text_window_t4_ParamLimits

0x3d2a,	// (0x000294f7) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x000350d0) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x000350d0) popup_preview_text_window_t

0x3da8,	// (0x00029575) scroll_pane_cp11

0x2d5a,	// (0x00028527) bg_popup_preview_window_pane_g1

0x3c32,	// (0x000293ff) bg_popup_preview_window_pane_g2

0x3c3c,	// (0x00029409) bg_popup_preview_window_pane_g3

0x3c46,	// (0x00029413) bg_popup_preview_window_pane_g4

0x3c50,	// (0x0002941d) bg_popup_preview_window_pane_g5

0x3c5a,	// (0x00029427) bg_popup_preview_window_pane_g6

0x3c62,	// (0x0002942f) bg_popup_preview_window_pane_g7

0x3c6a,	// (0x00029437) bg_popup_preview_window_pane_g8

0xf0c9,	// (0x00034896) aid_popup_width_pane

0xaf28,	// (0x000306f5) popup_midp_note_alarm_window_ParamLimits

0xaf28,	// (0x000306f5) popup_midp_note_alarm_window

0xd30a,	// (0x00032ad7) data_form_pane_ParamLimits

0x9bf7,	// (0x0002f3c4) form_field_data_pane_g1

0x9c01,	// (0x0002f3ce) form_field_data_pane_t1_ParamLimits

0xd316,	// (0x00032ae3) input_focus_pane_ParamLimits

0xeb52,	// (0x0003431f) data_form_wide_pane_ParamLimits

0xeb63,	// (0x00034330) form_field_data_wide_pane_g1

0xeb6f,	// (0x0003433c) form_field_data_wide_pane_t1_ParamLimits

0xd091,	// (0x0003285e) input_focus_pane_cp6_ParamLimits

0xa62d,	// (0x0002fdfa) input_popup_find_pane_g1_ParamLimits

0xa62d,	// (0x0002fdfa) input_popup_find_pane_g1

0x015e,	// (0x0002592b) aid_navi_side_left_pane

0x0173,	// (0x00025940) aid_navi_side_right_pane

0x3647,	// (0x00028e14) bg_popup_window_pane_cp30_ParamLimits

0x3647,	// (0x00028e14) bg_popup_window_pane_cp30

0x36c1,	// (0x00028e8e) popup_midp_note_alarm_window_g1_ParamLimits

0x36c1,	// (0x00028e8e) popup_midp_note_alarm_window_g1

0x36f1,	// (0x00028ebe) popup_midp_note_alarm_window_t1_ParamLimits

0x36f1,	// (0x00028ebe) popup_midp_note_alarm_window_t1

0x3792,	// (0x00028f5f) popup_midp_note_alarm_window_t2_ParamLimits

0x3792,	// (0x00028f5f) popup_midp_note_alarm_window_t2

0x3840,	// (0x0002900d) popup_midp_note_alarm_window_t3_ParamLimits

0x3840,	// (0x0002900d) popup_midp_note_alarm_window_t3

0x3872,	// (0x0002903f) popup_midp_note_alarm_window_t4_ParamLimits

0x3872,	// (0x0002903f) popup_midp_note_alarm_window_t4

0x3898,	// (0x00029065) popup_midp_note_alarm_window_t5_ParamLimits

0x3898,	// (0x00029065) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0003506d) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0003506d) popup_midp_note_alarm_window_t

0x3944,	// (0x00029111) wait_bar_pane_cp1_ParamLimits

0x3944,	// (0x00029111) wait_bar_pane_cp1

0xa120,	// (0x0002f8ed) wait_anim_pane_copy1

0xa120,	// (0x0002f8ed) wait_border_pane_copy1

0x332c,	// (0x00028af9) wait_border_pane_g1_copy1

0xeb89,	// (0x00034356) form_field_popup_pane_g1

0x9c1b,	// (0x0002f3e8) form_field_popup_pane_t1_ParamLimits

0xd316,	// (0x00032ae3) input_focus_pane_cp7_ParamLimits

0xd344,	// (0x00032b11) list_form_pane_ParamLimits

0xeb91,	// (0x0003435e) form_field_popup_wide_pane_g1

0xeb99,	// (0x00034366) form_field_popup_wide_pane_t1_ParamLimits

0xd316,	// (0x00032ae3) input_focus_pane_cp8_ParamLimits

0xd350,	// (0x00032b1d) list_form_wide_pane_ParamLimits

0x44b3,	// (0x00029c80) aid_size_cell_graphic_pane

0x9c9a,	// (0x0002f467) data_form_pane_t1_ParamLimits

0x9dcd,	// (0x0002f59a) data_form_wide_pane_t1_ParamLimits

0xb3bc,	// (0x00030b89) bg_status_flat_pane

0xa22c,	// (0x0002f9f9) title_pane_t1_ParamLimits

0xa2b8,	// (0x0002fa85) title_pane_t2_ParamLimits

0xa2de,	// (0x0002faab) title_pane_t3_ParamLimits

0xf55d,	// (0x00034d2a) title_pane_t_ParamLimits

0xa741,	// (0x0002ff0e) level_1_signal_ParamLimits

0xa753,	// (0x0002ff20) level_2_signal_ParamLimits

0xa766,	// (0x0002ff33) level_3_signal_ParamLimits

0xa779,	// (0x0002ff46) level_4_signal_ParamLimits

0xa78c,	// (0x0002ff59) level_5_signal_ParamLimits

0xa79f,	// (0x0002ff6c) level_6_signal_ParamLimits

0xa7b2,	// (0x0002ff7f) level_7_signal_ParamLimits

0xa741,	// (0x0002ff0e) level_1_battery_ParamLimits

0xa753,	// (0x0002ff20) level_2_battery_ParamLimits

0xa766,	// (0x0002ff33) level_3_battery_ParamLimits

0xa779,	// (0x0002ff46) level_4_battery_ParamLimits

0xa78c,	// (0x0002ff59) level_5_battery_ParamLimits

0xa79f,	// (0x0002ff6c) level_6_battery_ParamLimits

0xa7b2,	// (0x0002ff7f) level_7_battery_ParamLimits

0x354c,	// (0x00028d19) bg_status_flat_pane_g1

0x3554,	// (0x00028d21) bg_status_flat_pane_g2

0x355c,	// (0x00028d29) bg_status_flat_pane_g3

0x3564,	// (0x00028d31) bg_status_flat_pane_g4

0x356c,	// (0x00028d39) bg_status_flat_pane_g5

0x3574,	// (0x00028d41) bg_status_flat_pane_g6

0x357c,	// (0x00028d49) bg_status_flat_pane_g7

0xa306,	// (0x0002fad3) tabs_3_active_pane_t1_ParamLimits

0xa306,	// (0x0002fad3) tabs_3_passive_pane_t1_ParamLimits

0xa320,	// (0x0002faed) tabs_4_active_pane_t1_ParamLimits

0xa320,	// (0x0002faed) tabs_4_1_passive_pane_t1_ParamLimits

0xa643,	// (0x0002fe10) tabs_2_active_pane_t1_ParamLimits

0xa643,	// (0x0002fe10) tabs_2_passive_pane_t1_ParamLimits

0xcd01,	// (0x000324ce) bg_active_tab_pane_cp4_ParamLimits

0xa655,	// (0x0002fe22) tabs_2_long_active_pane_t1_ParamLimits

0x1054,	// (0x00026821) bg_passive_tab_pane_cp4_ParamLimits

0x1bb5,	// (0x00027382) list_single_midp_graphic_pane_t1_ParamLimits

0xcd01,	// (0x000324ce) bg_active_tab_pane_cp5_ParamLimits

0xa668,	// (0x0002fe35) tabs_3_long_active_pane_t1_ParamLimits

0x1054,	// (0x00026821) bg_passive_tab_pane_cp5_ParamLimits

0x1bb5,	// (0x00027382) list_single_midp_graphic_pane_t1

0xb3bc,	// (0x00030b89) bg_status_flat_pane_ParamLimits

0x180d,	// (0x00026fda) indicator_pane_cp2_ParamLimits

0x180d,	// (0x00026fda) indicator_pane_cp2

0xb552,	// (0x00030d1f) navi_pane_srt_ParamLimits

0xb552,	// (0x00030d1f) navi_pane_srt

0x1974,	// (0x00027141) popup_clock_digital_analogue_window_cp1

0xcd45,	// (0x00032512) indicator_pane_t1

0x0ae7,	// (0x000262b4) copy_highlight_pane

0x0ae7,	// (0x000262b4) cursor_graphics_pane

0x0ae7,	// (0x000262b4) graphic_within_text_pane

0x0ae7,	// (0x000262b4) link_highlight_pane

0x3d6b,	// (0x00029538) popup_preview_text_window_t5_ParamLimits

0x3d6b,	// (0x00029538) popup_preview_text_window_t5

0x0c0b,	// (0x000263d8) cursor_digital_pane

0x0c0b,	// (0x000263d8) cursor_primary_pane

0x0c1c,	// (0x000263e9) cursor_primary_small_pane

0x0c24,	// (0x000263f1) cursor_secondary_pane

0x0c2c,	// (0x000263f9) cursor_title_pane

0x0c0b,	// (0x000263d8) link_highlight_digital_pane

0x0c13,	// (0x000263e0) link_highlight_primary_pane

0x0c1c,	// (0x000263e9) link_highlight_primary_small_pane

0x0c24,	// (0x000263f1) link_highlight_secondary_pane

0x0c2c,	// (0x000263f9) link_highlight_title_pane

0x0c0b,	// (0x000263d8) copy_highlight_digital_pane

0x0c0b,	// (0x000263d8) copy_highlight_primary_pane

0x0c1c,	// (0x000263e9) copy_highlight_primary_small_pane

0x0c24,	// (0x000263f1) copy_highlight_secondary_pane

0x0c2c,	// (0x000263f9) copy_highlight_title_pane

0x0c24,	// (0x000263f1) graphic_text_digital_pane

0x35ea,	// (0x00028db7) graphic_text_primary_pane

0x35f3,	// (0x00028dc0) graphic_text_primary_small_pane

0x0c1c,	// (0x000263e9) graphic_text_secondary_pane

0x0c0b,	// (0x000263d8) graphic_text_title_pane

0xaa0f,	// (0x000301dc) cursor_primary_pane_g1

0x35dc,	// (0x00028da9) cursor_text_primary_t1

0xb83c,	// (0x00031009) cursor_primary_small_pane_g1

0x35ce,	// (0x00028d9b) cursor_text_primary_small_t1

0xb832,	// (0x00030fff) cursor_primary_small_pane_g1_copy1

0x35b6,	// (0x00028d83) cursor_text_primary_small_t1_copy1

0x3594,	// (0x00028d61) cursor_text_title_t1

0xb828,	// (0x00030ff5) cursor_title_pane_g1

0xaa0f,	// (0x000301dc) cursor_digital_pane_g1

0x0c3e,	// (0x0002640b) cursor_text_digital_t1

0x0c4c,	// (0x00026419) link_highlight_primary_pane_g1

0x353d,	// (0x00028d0a) link_highlight_primary_pane_t1

0x0c4c,	// (0x00026419) link_highlight_primary_small_pane_g1

0x0c54,	// (0x00026421) link_highlight_primary_small_pane_t1

0x0c63,	// (0x00026430) link_highlight_secondary_pane_g1

0x0c6b,	// (0x00026438) link_highlight_secondary_pane_t1

0x34b1,	// (0x00028c7e) link_highlight_title_pane_g1

0x34b9,	// (0x00028c86) link_highlight_title_pane_t1

0x349a,	// (0x00028c67) link_highlight_digital_pane_g1

0x34a2,	// (0x00028c6f) link_highlight_digital_pane_t1

0x3362,	// (0x00028b2f) copy_highlight_primary_pane_g1

0x3379,	// (0x00028b46) copy_highlight_primary_pane_t1

0x3362,	// (0x00028b2f) copy_highlight_primary_small_pane_g1

0x336a,	// (0x00028b37) copy_highlight_primary_small_pane_t1

0x0c7a,	// (0x00026447) copy_highlight_secondary_pane_g1

0x0c82,	// (0x0002644f) copy_highlight_secondary_pane_t1

0x334b,	// (0x00028b18) copy_highlight_title_pane_g1

0x3353,	// (0x00028b20) copy_highlight_title_pane_t1

0x3362,	// (0x00028b2f) copy_highlight_digital_pane_g1

0x4683,	// (0x00029e50) copy_highlight_digital_pane_t1

0x45d7,	// (0x00029da4) graphic_text_primary_pane_g1

0x4667,	// (0x00029e34) graphic_text_primary_pane_t1

0x4675,	// (0x00029e42) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0003519c) graphic_text_primary_pane_t

0x4643,	// (0x00029e10) graphic_text_primary_small_pane_g1

0x464b,	// (0x00029e18) graphic_text_primary_small_pane_t1

0x4659,	// (0x00029e26) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x00035197) graphic_text_primary_small_pane_t

0x461f,	// (0x00029dec) graphic_text_secondary_pane_g1

0x4627,	// (0x00029df4) graphic_text_secondary_pane_t1

0x4635,	// (0x00029e02) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x00035192) graphic_text_secondary_pane_t

0x45fb,	// (0x00029dc8) graphic_text_title_pane_g1

0x4603,	// (0x00029dd0) graphic_text_title_pane_t1

0x4611,	// (0x00029dde) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0003518d) graphic_text_title_pane_t

0x45d7,	// (0x00029da4) graphic_text_digital_pane_g1

0x45df,	// (0x00029dac) graphic_text_digital_pane_t1

0x45ed,	// (0x00029dba) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x00035188) graphic_text_digital_pane_t

0xcd01,	// (0x000324ce) navi_icon_pane_srt_ParamLimits

0xcd01,	// (0x000324ce) navi_icon_pane_srt

0xa120,	// (0x0002f8ed) navi_midp_pane_srt

0xa120,	// (0x0002f8ed) navi_navi_pane_srt

0xcd01,	// (0x000324ce) navi_text_pane_srt_ParamLimits

0xcd01,	// (0x000324ce) navi_text_pane_srt

0x45a2,	// (0x00029d6f) navi_navi_icon_text_pane_srt

0x45aa,	// (0x00029d77) navi_navi_pane_srt_g1_ParamLimits

0x45aa,	// (0x00029d77) navi_navi_pane_srt_g1

0x45bc,	// (0x00029d89) navi_navi_pane_srt_g2_ParamLimits

0x45bc,	// (0x00029d89) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x00035183) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x00035183) navi_navi_pane_srt_g

0x45ce,	// (0x00029d9b) navi_navi_tabs_pane_srt

0x45a2,	// (0x00029d6f) navi_navi_text_pane_srt

0x45a2,	// (0x00029d6f) navi_navi_volume_pane_srt

0x4593,	// (0x00029d60) navi_navi_text_pane_srt_t1

0x1f0f,	// (0x000276dc) navi_navi_volume_pane_srt_g1

0x1f17,	// (0x000276e4) volume_small_pane_srt_ParamLimits

0x1f17,	// (0x000276e4) volume_small_pane_srt

0x0c91,	// (0x0002645e) volume_small_pane_srt_g1_ParamLimits

0x0c91,	// (0x0002645e) volume_small_pane_srt_g1

0x0ca1,	// (0x0002646e) volume_small_pane_srt_g2_ParamLimits

0x0ca1,	// (0x0002646e) volume_small_pane_srt_g2

0x0cb2,	// (0x0002647f) volume_small_pane_srt_g3_ParamLimits

0x0cb2,	// (0x0002647f) volume_small_pane_srt_g3

0x0cc3,	// (0x00026490) volume_small_pane_srt_g4_ParamLimits

0x0cc3,	// (0x00026490) volume_small_pane_srt_g4

0x0cd4,	// (0x000264a1) volume_small_pane_srt_g5_ParamLimits

0x0cd4,	// (0x000264a1) volume_small_pane_srt_g5

0x0ce5,	// (0x000264b2) volume_small_pane_srt_g6_ParamLimits

0x0ce5,	// (0x000264b2) volume_small_pane_srt_g6

0x0cf6,	// (0x000264c3) volume_small_pane_srt_g7_ParamLimits

0x0cf6,	// (0x000264c3) volume_small_pane_srt_g7

0x0d07,	// (0x000264d4) volume_small_pane_srt_g8_ParamLimits

0x0d07,	// (0x000264d4) volume_small_pane_srt_g8

0x0d18,	// (0x000264e5) volume_small_pane_srt_g9_ParamLimits

0x0d18,	// (0x000264e5) volume_small_pane_srt_g9

0x0d29,	// (0x000264f6) volume_small_pane_srt_g10_ParamLimits

0x0d29,	// (0x000264f6) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00034f30) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00034f30) volume_small_pane_srt_g

0xcf91,	// (0x0003275e) query_popup_data_pane_cp2

0x4579,	// (0x00029d46) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4579,	// (0x00029d46) navi_navi_icon_text_pane_srt_t1

0x35ea,	// (0x00028db7) navi_tabs_2_long_pane_srt

0x35ea,	// (0x00028db7) navi_tabs_2_pane_srt

0x35ea,	// (0x00028db7) navi_tabs_3_long_pane_srt

0x35ea,	// (0x00028db7) navi_tabs_3_pane_srt

0x35ea,	// (0x00028db7) navi_tabs_4_pane_srt

0x1eef,	// (0x000276bc) tabs_2_active_pane_srt_ParamLimits

0x1eef,	// (0x000276bc) tabs_2_active_pane_srt

0x1eff,	// (0x000276cc) tabs_2_passive_pane_srt_ParamLimits

0x1eff,	// (0x000276cc) tabs_2_passive_pane_srt

0x2dce,	// (0x0002859b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2dce,	// (0x0002859b) bg_passive_tab_pane_cp1_srt

0x4545,	// (0x00029d12) bg_passive_tab_pane_g1_cp1_srt

0x05ec,	// (0x00025db9) bg_passive_tab_pane_g2_cp1_srt

0x454e,	// (0x00029d1b) bg_passive_tab_pane_g3_cp1_srt

0xa2f0,	// (0x0002fabd) bg_active_tab_pane_cp1_srt_ParamLimits

0xa2f0,	// (0x0002fabd) bg_active_tab_pane_cp1_srt

0x4557,	// (0x00029d24) tabs_2_active_pane_srt_g1

0xbeb2,	// (0x0003167f) tabs_2_active_pane_srt_t1_ParamLimits

0xbeb2,	// (0x0003167f) tabs_2_active_pane_srt_t1

0x4545,	// (0x00029d12) bg_active_tab_pane_g1_cp1_srt

0x05ec,	// (0x00025db9) bg_active_tab_pane_g2_cp1_srt

0x454e,	// (0x00029d1b) bg_active_tab_pane_g3_cp1_srt

0x1ebc,	// (0x00027689) tabs_3_active_pane_srt_ParamLimits

0x1ebc,	// (0x00027689) tabs_3_active_pane_srt

0x1ecd,	// (0x0002769a) tabs_3_passive_pane_cp_srt_ParamLimits

0x1ecd,	// (0x0002769a) tabs_3_passive_pane_cp_srt

0x1ede,	// (0x000276ab) tabs_3_passive_pane_srt_ParamLimits

0x1ede,	// (0x000276ab) tabs_3_passive_pane_srt

0x2dce,	// (0x0002859b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2dce,	// (0x0002859b) bg_passive_tab_pane_cp2_srt

0x0d3a,	// (0x00026507) bg_passive_tab_pane_g1_cp2_srt

0x05ec,	// (0x00025db9) bg_passive_tab_pane_g2_cp2_srt

0x0d43,	// (0x00026510) bg_passive_tab_pane_g3_cp2_srt

0xa2f0,	// (0x0002fabd) bg_active_tab_pane_cp2_srt_ParamLimits

0xa2f0,	// (0x0002fabd) bg_active_tab_pane_cp2_srt

0x452b,	// (0x00029cf8) tabs_3_active_pane_srt_g1

0xbe9c,	// (0x00031669) tabs_3_active_pane_srt_t1_ParamLimits

0xbe9c,	// (0x00031669) tabs_3_active_pane_srt_t1

0x0d3a,	// (0x00026507) bg_active_tab_pane_g1_cp2_srt

0x05ec,	// (0x00025db9) bg_active_tab_pane_g2_cp2_srt

0x0d43,	// (0x00026510) bg_active_tab_pane_g3_cp2_srt

0x1e74,	// (0x00027641) tabs_4_active_pane_srt_ParamLimits

0x1e74,	// (0x00027641) tabs_4_active_pane_srt

0x1e86,	// (0x00027653) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1e86,	// (0x00027653) tabs_4_passive_pane_cp2_srt

0x0fe2,	// (0x000267af) aid_size_cell_toolbar

0x4163,	// (0x00029930) main_idle_act_pane_ParamLimits

0x121d,	// (0x000269ea) popup_large_graphic_colour_window_ParamLimits

0xb27e,	// (0x00030a4b) popup_toolbar_window_ParamLimits

0xb27e,	// (0x00030a4b) popup_toolbar_window

0xed58,	// (0x00034525) list_single_graphic_2heading_pane_ParamLimits

0xed58,	// (0x00034525) list_single_graphic_2heading_pane

0xd61a,	// (0x00032de7) aid_size_cell_apps_grid_lsc_pane

0xd62c,	// (0x00032df9) aid_size_cell_apps_grid_prt_pane

0x1054,	// (0x00026821) bg_wml_button_pane_cp1_ParamLimits

0x1054,	// (0x00026821) bg_wml_button_pane_cp1

0xb7d8,	// (0x00030fa5) form_midp_field_text_pane_t1_ParamLimits

0x2dce,	// (0x0002859b) input_focus_pane_cp050_ParamLimits

0x300d,	// (0x000287da) list_midp_form_text_pane_ParamLimits

0x2fbf,	// (0x0002878c) input_focus_pane_cp051_ParamLimits

0x2fd3,	// (0x000287a0) list_midp_choice_pane_ParamLimits

0xb78f,	// (0x00030f5c) list_single_2graphic_pane_cp3_ParamLimits

0xb78f,	// (0x00030f5c) list_single_2graphic_pane_cp3

0x51e4,	// (0x0002a9b1) list_single_midp_graphic_pane_ParamLimits

0x51e4,	// (0x0002a9b1) list_single_midp_graphic_pane

0xebff,	// (0x000343cc) list_single_graphic_2heading_pane_g1_ParamLimits

0xebff,	// (0x000343cc) list_single_graphic_2heading_pane_g1

0xea67,	// (0x00034234) list_single_graphic_2heading_pane_g4_ParamLimits

0xea67,	// (0x00034234) list_single_graphic_2heading_pane_g4

0xea73,	// (0x00034240) list_single_graphic_2heading_pane_g5_ParamLimits

0xea73,	// (0x00034240) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x00034f83) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x00034f83) list_single_graphic_2heading_pane_g

0xec0b,	// (0x000343d8) list_single_graphic_2heading_pane_t1_ParamLimits

0xec0b,	// (0x000343d8) list_single_graphic_2heading_pane_t1

0xec1f,	// (0x000343ec) list_single_graphic_2heading_pane_t2_ParamLimits

0xec1f,	// (0x000343ec) list_single_graphic_2heading_pane_t2

0xec3b,	// (0x00034408) list_single_graphic_2heading_pane_t3_ParamLimits

0xec3b,	// (0x00034408) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x00034f8a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x00034f8a) list_single_graphic_2heading_pane_t

0x1ad3,	// (0x000272a0) bg_popup_sub_pane_cp2

0x1afd,	// (0x000272ca) grid_toobar_pane

0x1b39,	// (0x00027306) cell_toolbar_pane_ParamLimits

0x1b39,	// (0x00027306) cell_toolbar_pane

0x2cfe,	// (0x000284cb) cell_toolbar_pane_g1_ParamLimits

0x2cfe,	// (0x000284cb) cell_toolbar_pane_g1

0x2d12,	// (0x000284df) cell_toolbar_pane_g2_ParamLimits

0x2d12,	// (0x000284df) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x00034f98) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x00034f98) cell_toolbar_pane_g

0x2d34,	// (0x00028501) grid_highlight_pane_cp2_ParamLimits

0x2d34,	// (0x00028501) grid_highlight_pane_cp2

0x2d4e,	// (0x0002851b) toolbar_button_pane

0x2d5a,	// (0x00028527) toolbar_button_pane_g1

0x2d62,	// (0x0002852f) toolbar_button_pane_g2

0x2d6a,	// (0x00028537) toolbar_button_pane_g3

0x2d72,	// (0x0002853f) toolbar_button_pane_g4

0x2d7a,	// (0x00028547) toolbar_button_pane_g5

0x2d82,	// (0x0002854f) toolbar_button_pane_g6

0x2d8a,	// (0x00028557) toolbar_button_pane_g7

0x2d92,	// (0x0002855f) toolbar_button_pane_g8

0x2d9a,	// (0x00028567) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x00034f9d) toolbar_button_pane_g

0x1b71,	// (0x0002733e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1b71,	// (0x0002733e) list_single_2graphic_pane_g1_cp3

0xb6f1,	// (0x00030ebe) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb6f1,	// (0x00030ebe) list_single_2graphic_pane_g2_cp3

0x0911,	// (0x000260de) list_single_2graphic_pane_g3_cp3

0x1b8e,	// (0x0002735b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1b8e,	// (0x0002735b) list_single_2graphic_pane_g4_cp3

0x1b9a,	// (0x00027367) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1b9a,	// (0x00027367) list_single_2graphic_pane_t1_cp3

0x0905,	// (0x000260d2) list_single_midp_graphic_pane_g2_ParamLimits

0x0905,	// (0x000260d2) list_single_midp_graphic_pane_g2

0x0fea,	// (0x000267b7) aid_zoom_text_primary

0xebef,	// (0x000343bc) aid_zoom_text_secondary

0x0df7,	// (0x000265c4) status_small_pane_g7_ParamLimits

0x0df7,	// (0x000265c4) status_small_pane_g7

0x0e1a,	// (0x000265e7) status_small_pane_t1_ParamLimits

0xa1fc,	// (0x0002f9c9) title_pane_g2

0x0003,

0xf554,	// (0x00034d21) title_pane_g

0xa4e6,	// (0x0002fcb3) aid_size_cell_colour_1_pane_ParamLimits

0xa4e6,	// (0x0002fcb3) aid_size_cell_colour_1_pane

0xa4fa,	// (0x0002fcc7) aid_size_cell_colour_2_pane_ParamLimits

0xa4fa,	// (0x0002fcc7) aid_size_cell_colour_2_pane

0xa50e,	// (0x0002fcdb) aid_size_cell_colour_3_pane_ParamLimits

0xa50e,	// (0x0002fcdb) aid_size_cell_colour_3_pane

0xa522,	// (0x0002fcef) aid_size_cell_colour_4_pane_ParamLimits

0xa522,	// (0x0002fcef) aid_size_cell_colour_4_pane

0x009a,	// (0x00025867) title_pane_stacon_g1_ParamLimits

0x009a,	// (0x00025867) title_pane_stacon_g1

0x33d0,	// (0x00028b9d) popup_note_wait_window_g3_ParamLimits

0x33d0,	// (0x00028b9d) popup_note_wait_window_g3

0x3447,	// (0x00028c14) popup_note_wait_window_t5_ParamLimits

0x3447,	// (0x00028c14) popup_note_wait_window_t5

0xa120,	// (0x0002f8ed) main_feb_china_hwr_fs_writing_pane

0xac15,	// (0x000303e2) popup_feb_china_hwr_fs_window_ParamLimits

0xac15,	// (0x000303e2) popup_feb_china_hwr_fs_window

0xb702,	// (0x00030ecf) aid_size_cell_hwr_fs_ParamLimits

0xb702,	// (0x00030ecf) aid_size_cell_hwr_fs

0x2dce,	// (0x0002859b) bg_popup_sub_pane_cp3_ParamLimits

0x2dce,	// (0x0002859b) bg_popup_sub_pane_cp3

0xb717,	// (0x00030ee4) grid_hwr_fs_pane_ParamLimits

0xb717,	// (0x00030ee4) grid_hwr_fs_pane

0x1bf8,	// (0x000273c5) linegrid_hwr_fs_pane_ParamLimits

0x1bf8,	// (0x000273c5) linegrid_hwr_fs_pane

0xb72f,	// (0x00030efc) cell_hwr_fs_pane_ParamLimits

0xb72f,	// (0x00030efc) cell_hwr_fs_pane

0x2dda,	// (0x000285a7) linegrid_hwr_fs_pane_g1_ParamLimits

0x2dda,	// (0x000285a7) linegrid_hwr_fs_pane_g1

0xb755,	// (0x00030f22) linegrid_hwr_fs_pane_g2_ParamLimits

0xb755,	// (0x00030f22) linegrid_hwr_fs_pane_g2

0x2df8,	// (0x000285c5) linegrid_hwr_fs_pane_g3_ParamLimits

0x2df8,	// (0x000285c5) linegrid_hwr_fs_pane_g3

0x1c2c,	// (0x000273f9) linegrid_hwr_fs_pane_g4_ParamLimits

0x1c2c,	// (0x000273f9) linegrid_hwr_fs_pane_g4

0x1c4a,	// (0x00027417) linegrid_hwr_fs_pane_g5_ParamLimits

0x1c4a,	// (0x00027417) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x00034fc3) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x00034fc3) linegrid_hwr_fs_pane_g

0x2e04,	// (0x000285d1) cell_hwr_fs_pane_g1_ParamLimits

0x2e04,	// (0x000285d1) cell_hwr_fs_pane_g1

0x1a0a,	// (0x000271d7) cell_hwr_fs_pane_g2_ParamLimits

0x1a0a,	// (0x000271d7) cell_hwr_fs_pane_g2

0xb767,	// (0x00030f34) cell_hwr_fs_pane_g3_ParamLimits

0xb767,	// (0x00030f34) cell_hwr_fs_pane_g3

0xb774,	// (0x00030f41) cell_hwr_fs_pane_g4_ParamLimits

0xb774,	// (0x00030f41) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x00034fce) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00034fce) cell_hwr_fs_pane_g

0xb781,	// (0x00030f4e) cell_hwr_fs_pane_t1

0xa120,	// (0x0002f8ed) grid_highlight_pane_cp6

0xa120,	// (0x0002f8ed) main_idle_act2_pane

0xd429,	// (0x00032bf6) aid_inside_area_popup_secondary

0xb9f9,	// (0x000311c6) aid_inside_area_window_primary_ParamLimits

0xb9f9,	// (0x000311c6) aid_inside_area_window_primary

0x4692,	// (0x00029e5f) ai2_news_ticker_pane

0x469a,	// (0x00029e67) aid_size_cell_ai1_link_ParamLimits

0x469a,	// (0x00029e67) aid_size_cell_ai1_link

0x46b4,	// (0x00029e81) popup_ai2_data_window_ParamLimits

0x46b4,	// (0x00029e81) popup_ai2_data_window

0x46d2,	// (0x00029e9f) popup_ai2_link_window_ParamLimits

0x46d2,	// (0x00029e9f) popup_ai2_link_window

0x2dce,	// (0x0002859b) bg_popup_sub_pane_cp4_ParamLimits

0x2dce,	// (0x0002859b) bg_popup_sub_pane_cp4

0x46e8,	// (0x00029eb5) grid_ai2_link_pane_ParamLimits

0x46e8,	// (0x00029eb5) grid_ai2_link_pane

0x46ff,	// (0x00029ecc) popup_ai2_link_window_g1_ParamLimits

0x46ff,	// (0x00029ecc) popup_ai2_link_window_g1

0x470b,	// (0x00029ed8) popup_ai2_link_window_g2_ParamLimits

0x470b,	// (0x00029ed8) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x000351a1) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x000351a1) popup_ai2_link_window_g

0x471c,	// (0x00029ee9) ai2_mp_button_pane

0x4724,	// (0x00029ef1) ai2_mp_volume_pane

0x2fbf,	// (0x0002878c) bg_popup_sub_pane_cp5_ParamLimits

0x2fbf,	// (0x0002878c) bg_popup_sub_pane_cp5

0x472c,	// (0x00029ef9) heading_ai2_gene_pane_ParamLimits

0x472c,	// (0x00029ef9) heading_ai2_gene_pane

0x4738,	// (0x00029f05) list_ai2_gene_pane_ParamLimits

0x4738,	// (0x00029f05) list_ai2_gene_pane

0x4780,	// (0x00029f4d) cell_ai2_link_pane_ParamLimits

0x4780,	// (0x00029f4d) cell_ai2_link_pane

0x4796,	// (0x00029f63) cell_ai2_link_pane_g1

0xa120,	// (0x0002f8ed) grid_highlight_pane_cp7

0x1f2c,	// (0x000276f9) ai2_mp_volume_pane_g1

0x4869,	// (0x0002a036) ai2_mp_volume_pane_g2

0x47de,	// (0x00029fab) list_ai2_gene_pane_t1

0x4871,	// (0x0002a03e) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x000351ba) ai2_mp_volume_pane_g

0x1f34,	// (0x00027701) volume_small_pane_cp3

0x4879,	// (0x0002a046) aid_size_cell_ai2_button

0x4881,	// (0x0002a04e) grid_ai2_button_pane

0x488a,	// (0x0002a057) cell_ai2_button_pane_ParamLimits

0x488a,	// (0x0002a057) cell_ai2_button_pane

0xa030,	// (0x0002f7fd) cell_ai2_button_pane_g1

0xa120,	// (0x0002f8ed) grid_highlight_pane_cp8

0x4829,	// (0x00029ff6) ai2_gene_pane_t1_ParamLimits

0x4829,	// (0x00029ff6) ai2_gene_pane_t1

0xaba1,	// (0x0003036e) aid_height_parent_landscape

0xbc26,	// (0x000313f3) aid_height_set_list

0x4163,	// (0x00029930) aid_size_parent

0x44b3,	// (0x00029c80) aid_size_cell_graphic_pane_ParamLimits

0x4748,	// (0x00029f15) popup_ai2_data_window_g1_ParamLimits

0x4748,	// (0x00029f15) popup_ai2_data_window_g1

0x4754,	// (0x00029f21) ai2_news_ticker_pane_g1

0x475c,	// (0x00029f29) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x000351a6) ai2_news_ticker_pane_g

0x4764,	// (0x00029f31) ai2_news_ticker_pane_t1

0x4772,	// (0x00029f3f) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x000351ab) ai2_news_ticker_pane_t

0x479f,	// (0x00029f6c) heading_ai2_gene_pane_g1

0x47a7,	// (0x00029f74) heading_ai2_gene_pane_t1_ParamLimits

0x47a7,	// (0x00029f74) heading_ai2_gene_pane_t1

0x47bc,	// (0x00029f89) list_highlight_pane_cp6

0x47c4,	// (0x00029f91) ai2_gene_pane_ParamLimits

0x47c4,	// (0x00029f91) ai2_gene_pane

0x47ec,	// (0x00029fb9) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x000351b0) list_ai2_gene_pane_t

0x47fa,	// (0x00029fc7) list_highlight_pane_cp8_ParamLimits

0x47fa,	// (0x00029fc7) list_highlight_pane_cp8

0x480b,	// (0x00029fd8) ai2_gene_pane_g1_ParamLimits

0x480b,	// (0x00029fd8) ai2_gene_pane_g1

0x481d,	// (0x00029fea) ai2_gene_pane_g2_ParamLimits

0x481d,	// (0x00029fea) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x000351b5) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x000351b5) ai2_gene_pane_g

0xd2ac,	// (0x00032a79) scroll_pane_cp12

0xab60,	// (0x0003032d) control_pane_t3_ParamLimits

0xab60,	// (0x0003032d) control_pane_t3

0x0e0b,	// (0x000265d8) status_small_pane_g8_ParamLimits

0x0e0b,	// (0x000265d8) status_small_pane_g8

0xacb7,	// (0x00030484) popup_find_window_ParamLimits

0xaf68,	// (0x00030735) popup_note_image_window_ParamLimits

0xea91,	// (0x0003425e) list_double2_graphic_pane_vc_g1_ParamLimits

0xea91,	// (0x0003425e) list_double2_graphic_pane_vc_g1

0xec53,	// (0x00034420) list_double2_graphic_pane_vc_g2_ParamLimits

0xec53,	// (0x00034420) list_double2_graphic_pane_vc_g2

0xec5f,	// (0x0003442c) list_double2_graphic_pane_vc_g3_ParamLimits

0xec5f,	// (0x0003442c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x00034f91) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x00034f91) list_double2_graphic_pane_vc_g

0xec6b,	// (0x00034438) list_double2_graphic_pane_vc_t1_ParamLimits

0xec6b,	// (0x00034438) list_double2_graphic_pane_vc_t1

0xea67,	// (0x00034234) list_single_heading_pane_vc_g1_ParamLimits

0xea67,	// (0x00034234) list_single_heading_pane_vc_g1

0xea73,	// (0x00034240) list_single_heading_pane_vc_g2_ParamLimits

0xea73,	// (0x00034240) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00034d9b) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00034d9b) list_single_heading_pane_vc_g

0xec81,	// (0x0003444e) list_single_heading_pane_vc_t1_ParamLimits

0xec81,	// (0x0003444e) list_single_heading_pane_vc_t1

0xec99,	// (0x00034466) list_single_heading_pane_vc_t2_ParamLimits

0xec99,	// (0x00034466) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x00034fb2) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x00034fb2) list_single_heading_pane_vc_t

0xecab,	// (0x00034478) list_setting_number_pane_vc_g1_ParamLimits

0xecab,	// (0x00034478) list_setting_number_pane_vc_g1

0xecb7,	// (0x00034484) list_setting_number_pane_vc_g2_ParamLimits

0xecb7,	// (0x00034484) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00034fb7) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00034fb7) list_setting_number_pane_vc_g

0xecc3,	// (0x00034490) list_setting_number_pane_vc_t1_ParamLimits

0xecc3,	// (0x00034490) list_setting_number_pane_vc_t1

0xecd7,	// (0x000344a4) list_setting_number_pane_vc_t2_ParamLimits

0xecd7,	// (0x000344a4) list_setting_number_pane_vc_t2

0xecf3,	// (0x000344c0) list_setting_number_pane_vc_t3_ParamLimits

0xecf3,	// (0x000344c0) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x00034fbc) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x00034fbc) list_setting_number_pane_vc_t

0xed21,	// (0x000344ee) set_value_pane_vc_ParamLimits

0xed21,	// (0x000344ee) set_value_pane_vc

0xed58,	// (0x00034525) list_double2_graphic_pane_vc_ParamLimits

0xed58,	// (0x00034525) list_double2_graphic_pane_vc

0x433b,	// (0x00029b08) list_double2_large_graphic_pane_vc_ParamLimits

0x433b,	// (0x00029b08) list_double2_large_graphic_pane_vc

0xed58,	// (0x00034525) list_double2_pane_vc_ParamLimits

0xed58,	// (0x00034525) list_double2_pane_vc

0xed58,	// (0x00034525) list_double_graphic_heading_pane_vc_ParamLimits

0xed58,	// (0x00034525) list_double_graphic_heading_pane_vc

0xed58,	// (0x00034525) list_double_graphic_pane_vc_ParamLimits

0xed58,	// (0x00034525) list_double_graphic_pane_vc

0xed58,	// (0x00034525) list_double_heading_pane_vc_ParamLimits

0xed58,	// (0x00034525) list_double_heading_pane_vc

0x433b,	// (0x00029b08) list_double_large_graphic_pane_vc_ParamLimits

0x433b,	// (0x00029b08) list_double_large_graphic_pane_vc

0xed58,	// (0x00034525) list_double_number_pane_vc_ParamLimits

0xed58,	// (0x00034525) list_double_number_pane_vc

0xed58,	// (0x00034525) list_double_pane_vc_ParamLimits

0xed58,	// (0x00034525) list_double_pane_vc

0xed58,	// (0x00034525) list_double_time_pane_vc_ParamLimits

0xed58,	// (0x00034525) list_double_time_pane_vc

0xed58,	// (0x00034525) list_setting_number_pane_vc_ParamLimits

0xed58,	// (0x00034525) list_setting_number_pane_vc

0xed58,	// (0x00034525) list_setting_pane_vc_ParamLimits

0xed58,	// (0x00034525) list_setting_pane_vc

0xed58,	// (0x00034525) list_single_graphic_heading_pane_vc_ParamLimits

0xed58,	// (0x00034525) list_single_graphic_heading_pane_vc

0xed58,	// (0x00034525) list_single_heading_pane_vc_ParamLimits

0xed58,	// (0x00034525) list_single_heading_pane_vc

0xed58,	// (0x00034525) list_single_number_heading_pane_vc_ParamLimits

0xed58,	// (0x00034525) list_single_number_heading_pane_vc

0xea91,	// (0x0003425e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xea91,	// (0x0003425e) list_double_graphic_heading_pane_vc_g1

0xea67,	// (0x00034234) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xea67,	// (0x00034234) list_double_graphic_heading_pane_vc_g2

0xea73,	// (0x00034240) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xea73,	// (0x00034240) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x000351c1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x000351c1) list_double_graphic_heading_pane_vc_g

0xed6d,	// (0x0003453a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xed6d,	// (0x0003453a) list_double_graphic_heading_pane_vc_t1

0xed83,	// (0x00034550) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xed83,	// (0x00034550) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x000351c8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x000351c8) list_double_graphic_heading_pane_vc_t

0xecab,	// (0x00034478) list_setting_pane_vc_g1_ParamLimits

0xecab,	// (0x00034478) list_setting_pane_vc_g1

0xecb7,	// (0x00034484) list_setting_pane_vc_g2_ParamLimits

0xecb7,	// (0x00034484) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x00034fb7) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x00034fb7) list_setting_pane_vc_g

0xeda1,	// (0x0003456e) list_setting_pane_vc_t1_ParamLimits

0xeda1,	// (0x0003456e) list_setting_pane_vc_t1

0xedbd,	// (0x0003458a) list_setting_pane_vc_t2_ParamLimits

0xedbd,	// (0x0003458a) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x0003520b) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003520b) list_setting_pane_vc_t

0xed21,	// (0x000344ee) set_value_pane_cp_vc_ParamLimits

0xed21,	// (0x000344ee) set_value_pane_cp_vc

0xea67,	// (0x00034234) list_single_number_heading_pane_vc_g1_ParamLimits

0xea67,	// (0x00034234) list_single_number_heading_pane_vc_g1

0xea73,	// (0x00034240) list_single_number_heading_pane_vc_g2_ParamLimits

0xea73,	// (0x00034240) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00034d9b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00034d9b) list_single_number_heading_pane_vc_g

0xec81,	// (0x0003444e) list_single_number_heading_pane_vc_t1_ParamLimits

0xec81,	// (0x0003444e) list_single_number_heading_pane_vc_t1

0xedd9,	// (0x000345a6) list_single_number_heading_pane_vc_t2_ParamLimits

0xedd9,	// (0x000345a6) list_single_number_heading_pane_vc_t2

0xea7f,	// (0x0003424c) list_single_number_heading_pane_vc_t3_ParamLimits

0xea7f,	// (0x0003424c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x00035210) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00035210) list_single_number_heading_pane_vc_t

0xea91,	// (0x0003425e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xea91,	// (0x0003425e) list_single_graphic_heading_pane_vc_g1

0xea67,	// (0x00034234) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xea67,	// (0x00034234) list_single_graphic_heading_pane_vc_g4

0xea73,	// (0x00034240) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xea73,	// (0x00034240) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9f4,	// (0x000351c1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x000351c1) list_single_graphic_heading_pane_vc_g

0xec81,	// (0x0003444e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xec81,	// (0x0003444e) list_single_graphic_heading_pane_vc_t1

0xedeb,	// (0x000345b8) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xedeb,	// (0x000345b8) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x00035217) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x00035217) list_single_graphic_heading_pane_vc_t

0xea67,	// (0x00034234) list_double2_pane_vc_g1_ParamLimits

0xea67,	// (0x00034234) list_double2_pane_vc_g1

0xea73,	// (0x00034240) list_double2_pane_vc_g2_ParamLimits

0xea73,	// (0x00034240) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x00034d9b) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x00034d9b) list_double2_pane_vc_g

0xed42,	// (0x0003450f) list_double2_pane_vc_t1_ParamLimits

0xed42,	// (0x0003450f) list_double2_pane_vc_t1

0xea9d,	// (0x0003426a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xea9d,	// (0x0003426a) list_double2_large_graphic_pane_vc_g1

0xeaa9,	// (0x00034276) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xeaa9,	// (0x00034276) list_double2_large_graphic_pane_vc_g2

0xeab5,	// (0x00034282) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeab5,	// (0x00034282) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x00034db8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x00034db8) list_double2_large_graphic_pane_vc_g

0xeac1,	// (0x0003428e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xeac1,	// (0x0003428e) list_double2_large_graphic_pane_vc_t1

0xedfd,	// (0x000345ca) list_double_time_pane_vc_g1_ParamLimits

0xedfd,	// (0x000345ca) list_double_time_pane_vc_g1

0xee09,	// (0x000345d6) list_double_time_pane_vc_g2_ParamLimits

0xee09,	// (0x000345d6) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x0003521c) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x0003521c) list_double_time_pane_vc_g

0xee15,	// (0x000345e2) list_double_time_pane_vc_t1_ParamLimits

0xee15,	// (0x000345e2) list_double_time_pane_vc_t1

0xee3f,	// (0x0003460c) list_double_time_pane_vc_t2_ParamLimits

0xee3f,	// (0x0003460c) list_double_time_pane_vc_t2

0xee88,	// (0x00034655) list_double_time_pane_vc_t3_ParamLimits

0xee88,	// (0x00034655) list_double_time_pane_vc_t3

0xee9a,	// (0x00034667) list_double_time_pane_vc_t4_ParamLimits

0xee9a,	// (0x00034667) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x00035221) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x00035221) list_double_time_pane_vc_t

0xea67,	// (0x00034234) list_double_pane_vc_g1_ParamLimits

0xea67,	// (0x00034234) list_double_pane_vc_g1

0xea73,	// (0x00034240) list_double_pane_vc_g2_ParamLimits

0xea73,	// (0x00034240) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x00034d9b) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x00034d9b) list_double_pane_vc_g

0xeebf,	// (0x0003468c) list_double_pane_vc_t1_ParamLimits

0xeebf,	// (0x0003468c) list_double_pane_vc_t1

0xeed3,	// (0x000346a0) list_double_pane_vc_t2_ParamLimits

0xeed3,	// (0x000346a0) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x0003522a) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x0003522a) list_double_pane_vc_t

0xea67,	// (0x00034234) list_double_number_pane_vc_g1_ParamLimits

0xea67,	// (0x00034234) list_double_number_pane_vc_g1

0xea73,	// (0x00034240) list_double_number_pane_vc_g2_ParamLimits

0xea73,	// (0x00034240) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x00034d9b) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x00034d9b) list_double_number_pane_vc_g

0xeee9,	// (0x000346b6) list_double_number_pane_vc_t1_ParamLimits

0xeee9,	// (0x000346b6) list_double_number_pane_vc_t1

0xeefd,	// (0x000346ca) list_double_number_pane_vc_t2_ParamLimits

0xeefd,	// (0x000346ca) list_double_number_pane_vc_t2

0xef11,	// (0x000346de) list_double_number_pane_vc_t3_ParamLimits

0xef11,	// (0x000346de) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x0003522f) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x0003522f) list_double_number_pane_vc_t

0xef27,	// (0x000346f4) list_double_large_graphic_pane_vc_g1_ParamLimits

0xef27,	// (0x000346f4) list_double_large_graphic_pane_vc_g1

0xef38,	// (0x00034705) list_double_large_graphic_pane_vc_g2_ParamLimits

0xef38,	// (0x00034705) list_double_large_graphic_pane_vc_g2

0xeab5,	// (0x00034282) list_double_large_graphic_pane_vc_g3_ParamLimits

0xeab5,	// (0x00034282) list_double_large_graphic_pane_vc_g3

0xef47,	// (0x00034714) list_double_large_graphic_pane_vc_g4_ParamLimits

0xef47,	// (0x00034714) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x00035236) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x00035236) list_double_large_graphic_pane_vc_g

0xef53,	// (0x00034720) list_double_large_graphic_pane_vc_t1_ParamLimits

0xef53,	// (0x00034720) list_double_large_graphic_pane_vc_t1

0xef6c,	// (0x00034739) list_double_large_graphic_pane_vc_t2_ParamLimits

0xef6c,	// (0x00034739) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x0003523f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x0003523f) list_double_large_graphic_pane_vc_t

0xea67,	// (0x00034234) list_double_heading_pane_vc_g1_ParamLimits

0xea67,	// (0x00034234) list_double_heading_pane_vc_g1

0xea73,	// (0x00034240) list_double_heading_pane_vc_g2_ParamLimits

0xea73,	// (0x00034240) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00034d9b) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00034d9b) list_double_heading_pane_vc_g

0xef83,	// (0x00034750) list_double_heading_pane_vc_t1_ParamLimits

0xef83,	// (0x00034750) list_double_heading_pane_vc_t1

0xec81,	// (0x0003444e) list_double_heading_pane_vc_t2_ParamLimits

0xec81,	// (0x0003444e) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x00035244) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x00035244) list_double_heading_pane_vc_t

0xef95,	// (0x00034762) list_double_graphic_pane_vc_g1_ParamLimits

0xef95,	// (0x00034762) list_double_graphic_pane_vc_g1

0xefa5,	// (0x00034772) list_double_graphic_pane_vc_g2_ParamLimits

0xefa5,	// (0x00034772) list_double_graphic_pane_vc_g2

0xefb4,	// (0x00034781) list_double_graphic_pane_vc_g3_ParamLimits

0xefb4,	// (0x00034781) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x00035249) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x00035249) list_double_graphic_pane_vc_g

0xefc0,	// (0x0003478d) list_double_graphic_pane_vc_t1_ParamLimits

0xefc0,	// (0x0003478d) list_double_graphic_pane_vc_t1

0xefd4,	// (0x000347a1) list_double_graphic_pane_vc_t2_ParamLimits

0xefd4,	// (0x000347a1) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x00035250) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x00035250) list_double_graphic_pane_vc_t

0xf0d5,	// (0x000348a2) aid_size_cell_fastswap

0xa03a,	// (0x0002f807) aid_size_cell_touch_ParamLimits

0xa03a,	// (0x0002f807) aid_size_cell_touch

0xf252,	// (0x00034a1f) popup_fast_swap_wide_window_ParamLimits

0xf252,	// (0x00034a1f) popup_fast_swap_wide_window

0xa193,	// (0x0002f960) touch_pane_ParamLimits

0xa193,	// (0x0002f960) touch_pane

0xd302,	// (0x00032acf) button_value_adjust_pane_cp2

0xeafa,	// (0x000342c7) button_value_adjust_pane_cp4

0xeb02,	// (0x000342cf) form_field_data_pane_cp2

0x9bcc,	// (0x0002f399) form_field_data_wide_pane_cp2

0xd668,	// (0x00032e35) bg_scroll_pane_ParamLimits

0x0284,	// (0x00025a51) scroll_handle_pane_ParamLimits

0x0298,	// (0x00025a65) scroll_sc2_down_pane_ParamLimits

0x0298,	// (0x00025a65) scroll_sc2_down_pane

0xd699,	// (0x00032e66) scroll_sc2_up_pane_ParamLimits

0xd699,	// (0x00032e66) scroll_sc2_up_pane

0xbff3,	// (0x000317c0) grid_wheel_folder_pane_g1_ParamLimits

0xbff3,	// (0x000317c0) grid_wheel_folder_pane_g1

0x0736,	// (0x00025f03) clock_nsta_pane_cp2_ParamLimits

0x0736,	// (0x00025f03) clock_nsta_pane_cp2

0x1054,	// (0x00026821) listscroll_midp_pane_ParamLimits

0xa966,	// (0x00030133) midp_canvas_pane

0x0fd0,	// (0x0002679d) nsta_clock_indic_pane

0x1026,	// (0x000267f3) listscroll_form_pane_vc

0x1042,	// (0x0002680f) listscroll_set_pane_vc_ParamLimits

0x1042,	// (0x0002680f) listscroll_set_pane_vc

0xb3e4,	// (0x00030bb1) clock_nsta_pane

0xb40e,	// (0x00030bdb) indicator_nsta_pane

0x1ad3,	// (0x000272a0) bg_popup_sub_pane_cp2_ParamLimits

0x1ae7,	// (0x000272b4) find_pane_cp2_ParamLimits

0x1ae7,	// (0x000272b4) find_pane_cp2

0x1afd,	// (0x000272ca) grid_toobar_pane_ParamLimits

0x2da2,	// (0x0002856f) list_form_gen_pane_vc_ParamLimits

0x2da2,	// (0x0002856f) list_form_gen_pane_vc

0x2db8,	// (0x00028585) scroll_pane_cp8_vc_ParamLimits

0x2db8,	// (0x00028585) scroll_pane_cp8_vc

0x2e34,	// (0x00028601) data_form_wide_pane_vc_ParamLimits

0x2e34,	// (0x00028601) data_form_wide_pane_vc

0x2e40,	// (0x0002860d) form_field_data_wide_pane_vc_g1

0x2e48,	// (0x00028615) form_field_data_wide_pane_vc_t1_ParamLimits

0x2e48,	// (0x00028615) form_field_data_wide_pane_vc_t1

0xd316,	// (0x00032ae3) input_focus_pane_cp6_vc_ParamLimits

0xd316,	// (0x00032ae3) input_focus_pane_cp6_vc

0xb800,	// (0x00030fcd) list_midp_pane_ParamLimits

0x451f,	// (0x00029cec) scroll_pane_cp16_ParamLimits

0x451f,	// (0x00029cec) scroll_pane_cp16

0x31a4,	// (0x00028971) button_value_adjust_pane_ParamLimits

0x31a4,	// (0x00028971) button_value_adjust_pane

0xbc37,	// (0x00031404) button_value_adjust_pane_cp6_ParamLimits

0xbc37,	// (0x00031404) button_value_adjust_pane_cp6

0xbd79,	// (0x00031546) settings_code_pane_cp_ParamLimits

0xbd79,	// (0x00031546) settings_code_pane_cp

0xa030,	// (0x0002f7fd) cell_touch_pane_g1

0xa030,	// (0x0002f7fd) cell_touch_pane_g2

0x0001,

0xf709,	// (0x00034ed6) cell_touch_pane_g

0xbec8,	// (0x00031695) cell_touch_pane_cp_ParamLimits

0xbec8,	// (0x00031695) cell_touch_pane_cp

0xbee4,	// (0x000316b1) cell_touch_pane_ParamLimits

0xbee4,	// (0x000316b1) cell_touch_pane

0xa030,	// (0x0002f7fd) scroll_sc2_down_pane_g1

0xa030,	// (0x0002f7fd) scroll_sc2_up_pane_g1

0xa120,	// (0x0002f8ed) bg_set_opt_pane_cp4_vc

0x48bd,	// (0x0002a08a) list_set_graphic_pane_vc_g1_ParamLimits

0x48bd,	// (0x0002a08a) list_set_graphic_pane_vc_g1

0xd84f,	// (0x0003301c) list_set_graphic_pane_vc_g2_ParamLimits

0xd84f,	// (0x0003301c) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x000351cd) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x000351cd) list_set_graphic_pane_vc_g

0x48c9,	// (0x0002a096) text_primary_small_cp13_vc_ParamLimits

0x48c9,	// (0x0002a096) text_primary_small_cp13_vc

0x48e1,	// (0x0002a0ae) list_set_graphic_pane_vc_ParamLimits

0x48e1,	// (0x0002a0ae) list_set_graphic_pane_vc

0xa120,	// (0x0002f8ed) input_focus_pane_cp2_vc

0xa030,	// (0x0002f7fd) setting_code_pane_vc_g1

0xcd18,	// (0x000324e5) setting_code_pane_vc_t1

0x48f6,	// (0x0002a0c3) set_text_pane_vc_t1_ParamLimits

0x48f6,	// (0x0002a0c3) set_text_pane_vc_t1

0xa120,	// (0x0002f8ed) input_focus_pane_cp1_vc

0x4914,	// (0x0002a0e1) list_set_text_pane_vc

0xa030,	// (0x0002f7fd) setting_text_pane_vc_g1

0xa120,	// (0x0002f8ed) bg_set_opt_pane_cp2_vc

0xcd0f,	// (0x000324dc) setting_slider_graphic_pane_vc_g1

0x491e,	// (0x0002a0eb) setting_slider_graphic_pane_vc_t1

0x4930,	// (0x0002a0fd) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x000351d2) setting_slider_graphic_pane_vc_t

0x4942,	// (0x0002a10f) slider_set_pane_cp_vc

0x494c,	// (0x0002a119) slider_set_pane_vc_g1

0x4955,	// (0x0002a122) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x000351d7) slider_set_pane_vc_g

0xd371,	// (0x00032b3e) set_opt_bg_pane_g1_copy1

0xd379,	// (0x00032b46) set_opt_bg_pane_g2_copy1

0x4981,	// (0x0002a14e) set_opt_bg_pane_g3_copy1

0xd389,	// (0x00032b56) set_opt_bg_pane_g4_copy1

0xd391,	// (0x00032b5e) set_opt_bg_pane_g5_copy1

0xd399,	// (0x00032b66) set_opt_bg_pane_g6_copy1

0x498b,	// (0x0002a158) set_opt_bg_pane_g7_copy1

0x4995,	// (0x0002a162) set_opt_bg_pane_g8_copy1

0x499f,	// (0x0002a16c) set_opt_bg_pane_g9_copy1

0xa120,	// (0x0002f8ed) bg_set_opt_pane_cp_vc

0x49a9,	// (0x0002a176) setting_slider_pane_vc_t1

0x49b8,	// (0x0002a185) setting_slider_pane_vc_t2

0x49ca,	// (0x0002a197) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x000351e6) setting_slider_pane_vc_t

0x49dc,	// (0x0002a1a9) slider_set_pane_vc

0x1c6e,	// (0x0002743b) volume_set_pane_vc_g1

0x1c77,	// (0x00027444) volume_set_pane_vc_g2

0x1c80,	// (0x0002744d) volume_set_pane_vc_g3

0x1c89,	// (0x00027456) volume_set_pane_vc_g4

0x1c92,	// (0x0002745f) volume_set_pane_vc_g5

0x1c9b,	// (0x00027468) volume_set_pane_vc_g6

0x1ca4,	// (0x00027471) volume_set_pane_vc_g7

0x1cad,	// (0x0002747a) volume_set_pane_vc_g8

0x1cb6,	// (0x00027483) volume_set_pane_vc_g9

0x1cbf,	// (0x0002748c) volume_set_pane_vc_g10

0x0009,

0xfa20,	// (0x000351ed) volume_set_pane_vc_g

0x49e6,	// (0x0002a1b3) volume_set_pane_vc

0x49f0,	// (0x0002a1bd) button_value_adjust_pane_cp1_vc

0x49fa,	// (0x0002a1c7) list_highlight_pane_cp2_vc

0x4a03,	// (0x0002a1d0) list_set_pane_vc_ParamLimits

0x4a03,	// (0x0002a1d0) list_set_pane_vc

0x4a73,	// (0x0002a240) main_pane_set_vc_t1_ParamLimits

0x4a73,	// (0x0002a240) main_pane_set_vc_t1

0x4a88,	// (0x0002a255) main_pane_set_vc_t2_ParamLimits

0x4a88,	// (0x0002a255) main_pane_set_vc_t2

0x4a9a,	// (0x0002a267) main_pane_set_vc_t3_ParamLimits

0x4a9a,	// (0x0002a267) main_pane_set_vc_t3

0x4aae,	// (0x0002a27b) main_pane_set_vc_t4_ParamLimits

0x4aae,	// (0x0002a27b) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x00035202) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x00035202) main_pane_set_vc_t

0x4ac2,	// (0x0002a28f) setting_code_pane_vc_ParamLimits

0x4ac2,	// (0x0002a28f) setting_code_pane_vc

0x4ad3,	// (0x0002a2a0) setting_slider_graphic_pane_vc

0x4ad3,	// (0x0002a2a0) setting_slider_pane_vc

0x4ad3,	// (0x0002a2a0) setting_text_pane_vc

0x4ad3,	// (0x0002a2a0) setting_volume_pane_vc

0x4add,	// (0x0002a2aa) scroll_pane_cp121_vc

0xd2f0,	// (0x00032abd) set_content_pane_vc

0x4ae5,	// (0x0002a2b2) button_value_adjust_pane_g1

0x4aee,	// (0x0002a2bb) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x00035255) button_value_adjust_pane_g

0x4af7,	// (0x0002a2c4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4af7,	// (0x0002a2c4) form_field_slider_wide_pane_vc_t1

0x4b09,	// (0x0002a2d6) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4b09,	// (0x0002a2d6) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0003525a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0003525a) form_field_slider_wide_pane_vc_t

0xa2f0,	// (0x0002fabd) input_focus_pane_cp10_vc_ParamLimits

0xa2f0,	// (0x0002fabd) input_focus_pane_cp10_vc

0x4b35,	// (0x0002a302) slider_cont_pane_cp1_vc_ParamLimits

0x4b35,	// (0x0002a302) slider_cont_pane_cp1_vc

0x4b47,	// (0x0002a314) slider_form_pane_g1_cp2

0x4955,	// (0x0002a122) slider_form_pane_g2_cp2

0x4b74,	// (0x0002a341) form_field_slider_pane_vc_t3

0x4b82,	// (0x0002a34f) form_field_slider_pane_vc_t4

0x4b90,	// (0x0002a35d) slider_form_pane_vc_ParamLimits

0x4b90,	// (0x0002a35d) slider_form_pane_vc

0x4b9d,	// (0x0002a36a) form_field_slider_pane_vc_t1_ParamLimits

0x4b9d,	// (0x0002a36a) form_field_slider_pane_vc_t1

0x4b09,	// (0x0002a2d6) form_field_slider_pane_vc_t2_ParamLimits

0x4b09,	// (0x0002a2d6) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0003526c) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0003526c) form_field_slider_pane_vc_t

0xa2f0,	// (0x0002fabd) input_focus_pane_cp9_vc_ParamLimits

0xa2f0,	// (0x0002fabd) input_focus_pane_cp9_vc

0x4bb3,	// (0x0002a380) slider_cont_pane_vc_ParamLimits

0x4bb3,	// (0x0002a380) slider_cont_pane_vc

0x4bc7,	// (0x0002a394) list_form_graphic_pane_cp_vc_ParamLimits

0x4bc7,	// (0x0002a394) list_form_graphic_pane_cp_vc

0x2e40,	// (0x0002860d) form_field_popup_wide_pane_vc_g1

0x4bdc,	// (0x0002a3a9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4bdc,	// (0x0002a3a9) form_field_popup_wide_pane_vc_t1

0xd316,	// (0x00032ae3) input_focus_pane_cp8_vc_ParamLimits

0xd316,	// (0x00032ae3) input_focus_pane_cp8_vc

0x4c21,	// (0x0002a3ee) list_form_wide_pane_vc_ParamLimits

0x4c21,	// (0x0002a3ee) list_form_wide_pane_vc

0x4c2d,	// (0x0002a3fa) list_form_graphic_pane_vc_g1

0x4c35,	// (0x0002a402) list_form_graphic_pane_vc_t1_ParamLimits

0x4c35,	// (0x0002a402) list_form_graphic_pane_vc_t1

0xcd01,	// (0x000324ce) list_highlight_pane_cp5_vc_ParamLimits

0xcd01,	// (0x000324ce) list_highlight_pane_cp5_vc

0x4c51,	// (0x0002a41e) list_form_graphic_pane_vc_ParamLimits

0x4c51,	// (0x0002a41e) list_form_graphic_pane_vc

0x2e40,	// (0x0002860d) form_field_popup_pane_vc_g1

0x4c67,	// (0x0002a434) form_field_popup_pane_vc_t1_ParamLimits

0x4c67,	// (0x0002a434) form_field_popup_pane_vc_t1

0xd316,	// (0x00032ae3) input_focus_pane_cp7_vc_ParamLimits

0xd316,	// (0x00032ae3) input_focus_pane_cp7_vc

0x4c7e,	// (0x0002a44b) list_form_pane_vc_ParamLimits

0x4c7e,	// (0x0002a44b) list_form_pane_vc

0x4c8a,	// (0x0002a457) data_form_pane_vc_t1_ParamLimits

0x4c8a,	// (0x0002a457) data_form_pane_vc_t1

0xd371,	// (0x00032b3e) input_focus_pane_vc_g1

0xd379,	// (0x00032b46) input_focus_pane_vc_g2

0xd381,	// (0x00032b4e) input_focus_pane_vc_g3

0xd389,	// (0x00032b56) input_focus_pane_vc_g4

0xd391,	// (0x00032b5e) input_focus_pane_vc_g5

0xd399,	// (0x00032b66) input_focus_pane_vc_g6

0xd3a1,	// (0x00032b6e) input_focus_pane_vc_g7

0xd3a9,	// (0x00032b76) input_focus_pane_vc_g8

0xd3b1,	// (0x00032b7e) input_focus_pane_vc_g9

0xa030,	// (0x0002f7fd) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00034e5f) input_focus_pane_vc_g

0x2e34,	// (0x00028601) data_form_pane_vc_ParamLimits

0x2e34,	// (0x00028601) data_form_pane_vc

0x2e40,	// (0x0002860d) form_field_data_pane_vc_g1

0x4ca7,	// (0x0002a474) form_field_data_pane_vc_t1_ParamLimits

0x4ca7,	// (0x0002a474) form_field_data_pane_vc_t1

0xd316,	// (0x00032ae3) input_focus_pane_vc_ParamLimits

0xd316,	// (0x00032ae3) input_focus_pane_vc

0x4cc1,	// (0x0002a48e) button_value_adjust_pane_cp3_vc

0x4cc9,	// (0x0002a496) button_value_adjust_pane_cp5_vc

0x4cd1,	// (0x0002a49e) form_field_data_pane_vc_ParamLimits

0x4cd1,	// (0x0002a49e) form_field_data_pane_vc

0x4cec,	// (0x0002a4b9) form_field_data_pane_vc_cp2

0x4cf4,	// (0x0002a4c1) form_field_data_wide_pane_vc_ParamLimits

0x4cf4,	// (0x0002a4c1) form_field_data_wide_pane_vc

0x4d0e,	// (0x0002a4db) form_field_data_wide_pane_vc_cp2

0x4d16,	// (0x0002a4e3) form_field_popup_pane_vc_ParamLimits

0x4d16,	// (0x0002a4e3) form_field_popup_pane_vc

0x4d31,	// (0x0002a4fe) form_field_popup_wide_pane_vc_ParamLimits

0x4d31,	// (0x0002a4fe) form_field_popup_wide_pane_vc

0x4d4b,	// (0x0002a518) form_field_slider_pane_vc_ParamLimits

0x4d4b,	// (0x0002a518) form_field_slider_pane_vc

0x4d5e,	// (0x0002a52b) form_field_slider_wide_pane_vc_ParamLimits

0x4d5e,	// (0x0002a52b) form_field_slider_wide_pane_vc

0xbf02,	// (0x000316cf) grid_touch_1_pane_ParamLimits

0xbf02,	// (0x000316cf) grid_touch_1_pane

0xbf16,	// (0x000316e3) grid_touch_2_pane_ParamLimits

0xbf16,	// (0x000316e3) grid_touch_2_pane

0x4e35,	// (0x0002a602) touch_pane_g1_ParamLimits

0x4e35,	// (0x0002a602) touch_pane_g1

0x4d97,	// (0x0002a564) cell_app_pane_cp_wide_ParamLimits

0x4d97,	// (0x0002a564) cell_app_pane_cp_wide

0x4da8,	// (0x0002a575) grid_popup_fast_wide_pane_ParamLimits

0x4da8,	// (0x0002a575) grid_popup_fast_wide_pane

0x4dbc,	// (0x0002a589) scroll_pane_cp19_ParamLimits

0x4dbc,	// (0x0002a589) scroll_pane_cp19

0xa120,	// (0x0002f8ed) bg_popup_window_pane_cp20

0x4dd0,	// (0x0002a59d) listscroll_popup_fast_wide_pane

0xd85b,	// (0x00033028) grid_indicator_nsta_pane

0x4dd8,	// (0x0002a5a5) clock_nsta_pane_g1

0x4de1,	// (0x0002a5ae) clock_nsta_pane_t1

0xbf42,	// (0x0003170f) cell_indicator_nsta_pane_ParamLimits

0xbf42,	// (0x0003170f) cell_indicator_nsta_pane

0x4e35,	// (0x0002a602) cell_indicator_nsta_pane_g1

0xbf5f,	// (0x0003172c) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0003527d) cell_indicator_nsta_pane_g

0x4e59,	// (0x0002a626) clock_nsta_pane_cp

0x4e61,	// (0x0002a62e) indicator_nsta_pane_cp

0x4e6a,	// (0x0002a637) nsta_clock_indic_pane_g1

0xcd3d,	// (0x0003250a) grid_indicator_pane

0xd78b,	// (0x00032f58) scroll_pane_cp29

0x0660,	// (0x00025e2d) indicator_nsta_pane_cp2_ParamLimits

0x0660,	// (0x00025e2d) indicator_nsta_pane_cp2

0xcd01,	// (0x000324ce) main_apps_wheel_pane

0x3027,	// (0x000287f4) form_midp_field_text_pane_ParamLimits

0x3176,	// (0x00028943) scroll_bar_cp050_ParamLimits

0x4ed3,	// (0x0002a6a0) cell_indicator_pane_ParamLimits

0x4ed3,	// (0x0002a6a0) cell_indicator_pane

0x4eeb,	// (0x0002a6b8) cell_indicator_pane_g1

0xbf75,	// (0x00031742) grid_wheel_folder_pane_ParamLimits

0xbf75,	// (0x00031742) grid_wheel_folder_pane

0xbf83,	// (0x00031750) list_wheel_apps_pane_ParamLimits

0xbf83,	// (0x00031750) list_wheel_apps_pane

0xbf91,	// (0x0003175e) main_apps_wheel_pane_g1_ParamLimits

0xbf91,	// (0x0003175e) main_apps_wheel_pane_g1

0xbfa1,	// (0x0003176e) main_apps_wheel_pane_g2_ParamLimits

0xbfa1,	// (0x0003176e) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x00035299) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x00035299) main_apps_wheel_pane_g

0xbfb1,	// (0x0003177e) main_apps_wheel_pane_t1_ParamLimits

0xbfb1,	// (0x0003177e) main_apps_wheel_pane_t1

0xbfc9,	// (0x00031796) list_wheel_apps_pane_g1

0xbfd1,	// (0x0003179e) list_wheel_apps_pane_g2

0xbfd9,	// (0x000317a6) list_wheel_apps_pane_g3

0xbfe1,	// (0x000317ae) list_wheel_apps_pane_g4

0xbfe9,	// (0x000317b6) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0003529e) list_wheel_apps_pane_g

0x0963,	// (0x00026130) navi_icon_text_pane

0xb2d6,	// (0x00030aa3) aid_fill_nsta

0xc006,	// (0x000317d3) navi_icon_text_pane_g1

0xc012,	// (0x000317df) navi_icon_text_pane_t1

0xa8ca,	// (0x00030097) list_set_graphic_pane_t1_ParamLimits

0xa8ca,	// (0x00030097) list_set_graphic_pane_t1

0x38c7,	// (0x00029094) popup_midp_note_alarm_window_t6_ParamLimits

0x38c7,	// (0x00029094) popup_midp_note_alarm_window_t6

0x38d9,	// (0x000290a6) popup_midp_note_alarm_window_t7_ParamLimits

0x38d9,	// (0x000290a6) popup_midp_note_alarm_window_t7

0x38eb,	// (0x000290b8) popup_midp_note_alarm_window_t8_ParamLimits

0x38eb,	// (0x000290b8) popup_midp_note_alarm_window_t8

0x38fd,	// (0x000290ca) popup_midp_note_alarm_window_t9_ParamLimits

0x38fd,	// (0x000290ca) popup_midp_note_alarm_window_t9

0x390f,	// (0x000290dc) popup_midp_note_alarm_window_t10_ParamLimits

0x390f,	// (0x000290dc) popup_midp_note_alarm_window_t10

0x3921,	// (0x000290ee) popup_midp_note_alarm_window_t11_ParamLimits

0x3921,	// (0x000290ee) popup_midp_note_alarm_window_t11

0x3933,	// (0x00029100) scroll_pane_cp17_ParamLimits

0x3933,	// (0x00029100) scroll_pane_cp17

0x1c6e,	// (0x0002743b) volume_small_pane_cp_g1

0x1f3d,	// (0x0002770a) volume_small_pane_cp_g2

0x1f46,	// (0x00027713) volume_small_pane_cp_g3

0x1f4f,	// (0x0002771c) volume_small_pane_cp_g4

0x1f58,	// (0x00027725) volume_small_pane_cp_g5

0x1f61,	// (0x0002772e) volume_small_pane_cp_g6

0x1f6a,	// (0x00027737) volume_small_pane_cp_g7

0x1f73,	// (0x00027740) volume_small_pane_cp_g8

0x1f7c,	// (0x00027749) volume_small_pane_cp_g9

0x1f85,	// (0x00027752) volume_small_pane_cp_g10

0x0bb8,	// (0x00026385) midp_ticker_pane_g1_ParamLimits

0x0bc4,	// (0x00026391) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x00034f2b) midp_ticker_pane_g_ParamLimits

0xa9fd,	// (0x000301ca) midp_ticker_pane_t1_ParamLimits

0xb2fa,	// (0x00030ac7) aid_fill_nsta_2

0x3162,	// (0x0002892f) list_form2_midp_pane

0x430a,	// (0x00029ad7) midp_editing_number_pane_ParamLimits

0x4319,	// (0x00029ae6) midp_ticker_pane_ParamLimits

0x4fde,	// (0x0002a7ab) form2_midp_field_pane

0x5002,	// (0x0002a7cf) scroll_pane_cp51

0x5022,	// (0x0002a7ef) form2_midp_button_pane_ParamLimits

0x5022,	// (0x0002a7ef) form2_midp_button_pane

0x5034,	// (0x0002a801) form2_midp_content_pane_ParamLimits

0x5034,	// (0x0002a801) form2_midp_content_pane

0x504e,	// (0x0002a81b) form2_midp_field_choice_group_pane

0x5056,	// (0x0002a823) form2_midp_field_pane_g1

0x505e,	// (0x0002a82b) form2_midp_field_pane_g2

0x5066,	// (0x0002a833) form2_midp_field_pane_g3

0x506e,	// (0x0002a83b) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x000352c3) form2_midp_field_pane_g

0x5076,	// (0x0002a843) form2_midp_gauge_slider_pane

0x507e,	// (0x0002a84b) form2_midp_gauge_wait_pane

0x5086,	// (0x0002a853) form2_midp_image_pane_ParamLimits

0x5086,	// (0x0002a853) form2_midp_image_pane

0x50a1,	// (0x0002a86e) form2_midp_label_pane_ParamLimits

0x50a1,	// (0x0002a86e) form2_midp_label_pane

0xc040,	// (0x0003180d) form2_midp_label_pane_cp_ParamLimits

0xc040,	// (0x0003180d) form2_midp_label_pane_cp

0x50e1,	// (0x0002a8ae) form2_midp_string_pane_ParamLimits

0x50e1,	// (0x0002a8ae) form2_midp_string_pane

0xefea,	// (0x000347b7) form2_midp_text_pane_ParamLimits

0xefea,	// (0x000347b7) form2_midp_text_pane

0x50f3,	// (0x0002a8c0) form2_midp_time_pane

0x5103,	// (0x0002a8d0) input_focus_pane_cp51_ParamLimits

0x5103,	// (0x0002a8d0) input_focus_pane_cp51

0x511b,	// (0x0002a8e8) form2_midp_label_pane_t1_ParamLimits

0x511b,	// (0x0002a8e8) form2_midp_label_pane_t1

0xf00b,	// (0x000347d8) form2_mdip_text_pane_t1_ParamLimits

0xf00b,	// (0x000347d8) form2_mdip_text_pane_t1

0xf02f,	// (0x000347fc) form2_midp_time_pane_t1

0x5169,	// (0x0002a936) form2_midp_gauge_slider_pane_t1

0xc061,	// (0x0003182e) form2_midp_gauge_slider_pane_t2

0xc073,	// (0x00031840) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x000352cc) form2_midp_gauge_slider_pane_t

0x519f,	// (0x0002a96c) form2_midp_slider_pane

0x51ab,	// (0x0002a978) form2_midp_gauge_wait_pane_t1

0x51b9,	// (0x0002a986) form2_midp_wait_pane_ParamLimits

0x51b9,	// (0x0002a986) form2_midp_wait_pane

0x2e87,	// (0x00028654) list_single_2graphic_pane_cp4_ParamLimits

0x2e87,	// (0x00028654) list_single_2graphic_pane_cp4

0x51e4,	// (0x0002a9b1) list_single_midp_graphic_pane_cp_ParamLimits

0x51e4,	// (0x0002a9b1) list_single_midp_graphic_pane_cp

0xa120,	// (0x0002f8ed) list_highlight_pane_cp20

0x5208,	// (0x0002a9d5) list_single_2graphic_pane_g1_cp4

0x479f,	// (0x00029f6c) list_single_2graphic_pane_g2_cp4

0x5210,	// (0x0002a9dd) list_single_2graphic_pane_t1_cp4

0xcd01,	// (0x000324ce) list_highlight_pane_cp21

0x521f,	// (0x0002a9ec) list_single_midp_graphic_pane_g4_cp

0x522e,	// (0x0002a9fb) list_single_midp_graphic_pane_t1_cp

0xc085,	// (0x00031852) form2_mdip_string_pane_t1_ParamLimits

0xc085,	// (0x00031852) form2_mdip_string_pane_t1

0xa120,	// (0x0002f8ed) bg_wml_button_pane_cp2

0xa030,	// (0x0002f7fd) form2_midp_image_pane_g1

0xead7,	// (0x000342a4) list_double_large_graphic_pane_g5_ParamLimits

0xead7,	// (0x000342a4) list_double_large_graphic_pane_g5

0x1054,	// (0x00026821) midp_form_pane_ParamLimits

0xcd01,	// (0x000324ce) main_apps_wheel_pane_ParamLimits

0xafee,	// (0x000307bb) popup_preview_window_ParamLimits

0xafee,	// (0x000307bb) popup_preview_window

0x161c,	// (0x00026de9) popup_touch_info_window_ParamLimits

0x161c,	// (0x00026de9) popup_touch_info_window

0x163e,	// (0x00026e0b) popup_touch_menu_window_ParamLimits

0x163e,	// (0x00026e0b) popup_touch_menu_window

0xa026,	// (0x0002f7f3) bg_popup_sub_pane_cp6

0x52e8,	// (0x0002aab5) list_touch_menu_pane

0x52f0,	// (0x0002aabd) list_single_touch_menu_pane_ParamLimits

0x52f0,	// (0x0002aabd) list_single_touch_menu_pane

0x5308,	// (0x0002aad5) list_single_touch_menu_pane_t1

0xcd01,	// (0x000324ce) bg_popup_sub_pane_cp7_ParamLimits

0xcd01,	// (0x000324ce) bg_popup_sub_pane_cp7

0x5316,	// (0x0002aae3) heading_sub_pane

0x531e,	// (0x0002aaeb) list_touch_info_pane_ParamLimits

0x531e,	// (0x0002aaeb) list_touch_info_pane

0x532d,	// (0x0002aafa) list_single_touch_info_pane_ParamLimits

0x532d,	// (0x0002aafa) list_single_touch_info_pane

0x533f,	// (0x0002ab0c) list_single_touch_info_pane_t1

0x534d,	// (0x0002ab1a) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x000352da) list_single_touch_info_pane_t

0x0ae7,	// (0x000262b4) bg_popup_heading_pane_cp

0x535b,	// (0x0002ab28) heading_sub_pane_t1

0x2dce,	// (0x0002859b) bg_popup_preview_window_pane_cp_ParamLimits

0x2dce,	// (0x0002859b) bg_popup_preview_window_pane_cp

0x5316,	// (0x0002aae3) heading_preview_pane

0x531e,	// (0x0002aaeb) list_preview_pane_ParamLimits

0x531e,	// (0x0002aaeb) list_preview_pane

0x5369,	// (0x0002ab36) popup_preview_window_g1

0x532d,	// (0x0002aafa) list_single_preview_pane_ParamLimits

0x532d,	// (0x0002aafa) list_single_preview_pane

0x5371,	// (0x0002ab3e) list_single_preview_pane_g1

0x5379,	// (0x0002ab46) list_single_preview_pane_t1

0x533f,	// (0x0002ab0c) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x000352df) list_single_preview_pane_t

0x5387,	// (0x0002ab54) bg_popup_heading_pane_cp2_ParamLimits

0x5387,	// (0x0002ab54) bg_popup_heading_pane_cp2

0x539d,	// (0x0002ab6a) heading_preview_pane_g1

0x53a5,	// (0x0002ab72) heading_preview_pane_t1_ParamLimits

0x53a5,	// (0x0002ab72) heading_preview_pane_t1

0xcd54,	// (0x00032521) soft_indicator_pane_t1_ParamLimits

0xd289,	// (0x00032a56) scroll_pane_ParamLimits

0xd687,	// (0x00032e54) scroll_sc2_left_pane

0xd690,	// (0x00032e5d) scroll_sc2_right_pane

0xd6af,	// (0x00032e7c) scroll_bg_pane_g1_ParamLimits

0xd6c4,	// (0x00032e91) scroll_bg_pane_g2_ParamLimits

0xd6dc,	// (0x00032ea9) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x00034eb6) scroll_bg_pane_g_ParamLimits

0xd6af,	// (0x00032e7c) scroll_handle_pane_g1_ParamLimits

0xd6fe,	// (0x00032ecb) scroll_handle_pane_g2_ParamLimits

0xd6dc,	// (0x00032ea9) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00034ebd) scroll_handle_pane_g_ParamLimits

0x107c,	// (0x00026849) popup_choice_list_window_ParamLimits

0x107c,	// (0x00026849) popup_choice_list_window

0x1adf,	// (0x000272ac) choice_list_pane

0x2d26,	// (0x000284f3) cell_toolbar_pane_t1

0x2d4e,	// (0x0002851b) toolbar_button_pane_ParamLimits

0x3dfd,	// (0x000295ca) ai_gene_pane_1_t2_ParamLimits

0x3dfd,	// (0x000295ca) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x000350e0) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x000350e0) ai_gene_pane_1_t

0x53c2,	// (0x0002ab8f) scroll_sc2_left_pane_g1

0x53c2,	// (0x0002ab8f) scroll_sc2_right_pane_g1

0x1054,	// (0x00026821) bg_popup_sub_pane_cp10

0x53cc,	// (0x0002ab99) list_choice_list_pane

0x53e5,	// (0x0002abb2) list_single_choice_list_pane_ParamLimits

0x53e5,	// (0x0002abb2) list_single_choice_list_pane

0x53fd,	// (0x0002abca) list_single_choice_list_pane_g1

0xd467,	// (0x00032c34) list_single_choice_list_pane_t1_ParamLimits

0xd467,	// (0x00032c34) list_single_choice_list_pane_t1

0x5405,	// (0x0002abd2) choice_list_pane_g1

0x540d,	// (0x0002abda) choice_list_pane_t1

0xa026,	// (0x0002f7f3) input_focus_pane_cp11

0xd5e5,	// (0x00032db2) title_pane_stacon_g2_ParamLimits

0xd5e5,	// (0x00032db2) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x00034e9c) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00034e9c) title_pane_stacon_g

0x0ae7,	// (0x000262b4) cursor_press_pane

0xac6b,	// (0x00030438) popup_fep_hwr_window_ParamLimits

0xac6b,	// (0x00030438) popup_fep_hwr_window

0x11c0,	// (0x0002698d) popup_fep_vkb_window_ParamLimits

0x11c0,	// (0x0002698d) popup_fep_vkb_window

0x541b,	// (0x0002abe8) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x00035308) fep_vkb_side_pane_g_ParamLimits

0x1fb9,	// (0x00027786) fep_hwr_candidate_pane_ParamLimits

0x1fb9,	// (0x00027786) fep_hwr_candidate_pane

0x1fe3,	// (0x000277b0) fep_hwr_side_pane_ParamLimits

0x1fe3,	// (0x000277b0) fep_hwr_side_pane

0x2005,	// (0x000277d2) fep_hwr_top_pane_ParamLimits

0x2005,	// (0x000277d2) fep_hwr_top_pane

0x201d,	// (0x000277ea) fep_hwr_write_pane_ParamLimits

0x201d,	// (0x000277ea) fep_hwr_write_pane

0xfb3b,	// (0x00035308) fep_vkb_side_pane_g

0x5423,	// (0x0002abf0) fep_hwr_top_pane_g1

0x5435,	// (0x0002ac02) fep_hwr_top_pane_g2

0x2049,	// (0x00027816) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x000352e4) fep_hwr_top_pane_g

0x205e,	// (0x0002782b) fep_hwr_top_text_pane

0xd7f8,	// (0x00032fc5) fep_hwr_top_text_pane_g1

0x546b,	// (0x0002ac38) fep_hwr_top_text_pane_t1

0x2168,	// (0x00027935) fep_hwr_candidate_pane_g1

0x56b6,	// (0x0002ae83) fep_vkb_keypad_pane_g3_ParamLimits

0x56b6,	// (0x0002ae83) fep_vkb_keypad_pane_g3

0x56e2,	// (0x0002aeaf) fep_vkb_keypad_pane_g4_ParamLimits

0x56e2,	// (0x0002aeaf) fep_vkb_keypad_pane_g4

0x5759,	// (0x0002af26) fep_vkb_bottom_pane_g2_ParamLimits

0x5759,	// (0x0002af26) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0003530f) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0003530f) fep_vkb_bottom_pane_g

0x53c2,	// (0x0002ab8f) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x00035319) cell_vkb_side_pane_g

0x57e4,	// (0x0002afb1) cell_vkb_side_pane_t1

0x57f2,	// (0x0002afbf) cell_vkb_side_pane_t1_copy1

0x53c2,	// (0x0002ab8f) bg_fep_vkb_candidate_pane_g2

0x5936,	// (0x0002b103) cell_vkb_candidate_pane_ParamLimits

0x5479,	// (0x0002ac46) aid_size_cell_vkb_ParamLimits

0x5479,	// (0x0002ac46) aid_size_cell_vkb

0x5936,	// (0x0002b103) cell_vkb_candidate_pane

0x2182,	// (0x0002794f) bg_popup_fep_shadow_pane_g1

0xc1a2,	// (0x0003196f) fep_vkb_bottom_pane_ParamLimits

0xc1a2,	// (0x0003196f) fep_vkb_bottom_pane

0x5548,	// (0x0002ad15) fep_vkb_candidate_pane_ParamLimits

0x5548,	// (0x0002ad15) fep_vkb_candidate_pane

0xc1ce,	// (0x0003199b) fep_vkb_keypad_pane_ParamLimits

0xc1ce,	// (0x0003199b) fep_vkb_keypad_pane

0xc1f5,	// (0x000319c2) fep_vkb_side_pane_ParamLimits

0xc1f5,	// (0x000319c2) fep_vkb_side_pane

0xc231,	// (0x000319fe) fep_vkb_top_pane_ParamLimits

0xc231,	// (0x000319fe) fep_vkb_top_pane

0x560f,	// (0x0002addc) fep_vkb_top_pane_g1_ParamLimits

0x560f,	// (0x0002addc) fep_vkb_top_pane_g1

0x561e,	// (0x0002adeb) fep_vkb_top_pane_g2_ParamLimits

0x561e,	// (0x0002adeb) fep_vkb_top_pane_g2

0x562d,	// (0x0002adfa) fep_vkb_top_pane_g3_ParamLimits

0x562d,	// (0x0002adfa) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x000352ff) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x000352ff) fep_vkb_top_pane_g

0x564b,	// (0x0002ae18) fep_vkb_top_text_pane_ParamLimits

0x564b,	// (0x0002ae18) fep_vkb_top_text_pane

0xc26d,	// (0x00031a3a) fep_vkb_side_pane_g1_ParamLimits

0xc26d,	// (0x00031a3a) fep_vkb_side_pane_g1

0x56a5,	// (0x0002ae72) grid_vkb_side_pane_ParamLimits

0x56a5,	// (0x0002ae72) grid_vkb_side_pane

0x218a,	// (0x00027957) bg_popup_fep_shadow_pane_g2

0x2193,	// (0x00027960) bg_popup_fep_shadow_pane_g3

0x219b,	// (0x00027968) bg_popup_fep_shadow_pane_g4

0x21a4,	// (0x00027971) bg_popup_fep_shadow_pane_g5

0x21ae,	// (0x0002797b) bg_popup_fep_shadow_pane_g6

0x21b6,	// (0x00027983) bg_popup_fep_shadow_pane_g7

0xd391,	// (0x00032b5e) bg_popup_fep_shadow_pane_g8

0x5704,	// (0x0002aed1) grid_vkb_keypad_number_pane_ParamLimits

0x5704,	// (0x0002aed1) grid_vkb_keypad_number_pane

0x5718,	// (0x0002aee5) grid_vkb_keypad_pane_ParamLimits

0x5718,	// (0x0002aee5) grid_vkb_keypad_pane

0x573e,	// (0x0002af0b) fep_vkb_bottom_pane_g1_ParamLimits

0x573e,	// (0x0002af0b) fep_vkb_bottom_pane_g1

0x5767,	// (0x0002af34) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5767,	// (0x0002af34) grid_vkb_keypad_bottom_left_pane

0x577c,	// (0x0002af49) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x577c,	// (0x0002af49) grid_vkb_keypad_bottom_right_pane

0x5791,	// (0x0002af5e) fep_vkb_top_text_pane_g1

0xc2b4,	// (0x00031a81) fep_vkb_top_text_pane_t1

0xc2c6,	// (0x00031a93) cell_vkb_side_pane_ParamLimits

0xc2c6,	// (0x00031a93) cell_vkb_side_pane

0x53c2,	// (0x0002ab8f) cell_vkb_side_pane_g1

0x5800,	// (0x0002afcd) cell_vkb_keypad_pane_ParamLimits

0x5800,	// (0x0002afcd) cell_vkb_keypad_pane

0x588d,	// (0x0002b05a) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0003532c) bg_popup_fep_shadow_pane_g

0x53c2,	// (0x0002ab8f) cell_hwr_side_pane_g1

0x53c2,	// (0x0002ab8f) cell_hwr_side_pane_g2

0x5897,	// (0x0002b064) cell_vkb_keypad_pane_t1

0xc2dc,	// (0x00031aa9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc2dc,	// (0x00031aa9) cell_vkb_keypad_bottom_left_pane

0xc2f1,	// (0x00031abe) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc2f1,	// (0x00031abe) cell_vkb_keypad_bottom_right_pane

0x53c2,	// (0x0002ab8f) cell_vkb_keypad_bottom_left_pane_g1

0x53c2,	// (0x0002ab8f) cell_vkb_keypad_bottom_right_pane_g1

0x58fb,	// (0x0002b0c8) cell_vkb_keypad_number_pane_ParamLimits

0x58fb,	// (0x0002b0c8) cell_vkb_keypad_number_pane

0x591a,	// (0x0002b0e7) cell_vkb_keypad_number_pane_g1

0x5924,	// (0x0002b0f1) cell_vkb_keypad_number_pane_g2

0x592d,	// (0x0002b0fa) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0003531e) cell_vkb_keypad_number_pane_g

0x5897,	// (0x0002b064) cell_vkb_keypad_number_pane_t1

0x5957,	// (0x0002b124) fep_vkb_candidate_pane_g1

0x0001,

0xfb4c,	// (0x00035319) cell_hwr_side_pane_g

0x5970,	// (0x0002b13d) cell_hwr_side_pane_t1

0x21c8,	// (0x00027995) cell_hwr_side_pane_t1_copy1

0x563d,	// (0x0002ae0a) cell_hwr_candidate_pane_g1

0x21d6,	// (0x000279a3) cell_hwr_candidate_pane_t1

0x53c2,	// (0x0002ab8f) cell_vkb_candidate_pane_g2

0x59f6,	// (0x0002b1c3) cell_vkb_candidate_pane_t1

0x8835,	// (0x0002e002) bg_popup_fep_shadow_pane_ParamLimits

0x8835,	// (0x0002e002) bg_popup_fep_shadow_pane

0xc11b,	// (0x000318e8) bg_fep_hwr_top_pane_g4

0x5447,	// (0x0002ac14) bg_hwr_side_pane_g1_ParamLimits

0x5447,	// (0x0002ac14) bg_hwr_side_pane_g1

0xc141,	// (0x0003190e) cell_hwr_side_pane_ParamLimits

0xc141,	// (0x0003190e) cell_hwr_side_pane

0x20d9,	// (0x000278a6) fep_hwr_write_pane_g1_ParamLimits

0x20d9,	// (0x000278a6) fep_hwr_write_pane_g1

0x20e6,	// (0x000278b3) fep_hwr_write_pane_g2_ParamLimits

0x20e6,	// (0x000278b3) fep_hwr_write_pane_g2

0x20f3,	// (0x000278c0) fep_hwr_write_pane_g3_ParamLimits

0x20f3,	// (0x000278c0) fep_hwr_write_pane_g3

0xc161,	// (0x0003192e) fep_hwr_write_pane_g4_ParamLimits

0xc161,	// (0x0003192e) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x000352eb) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x000352eb) fep_hwr_write_pane_g

0xc11b,	// (0x000318e8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xc11b,	// (0x000318e8) bg_fep_hwr_candidate_pane_g2

0x2116,	// (0x000278e3) cell_hwr_candidate_pane_ParamLimits

0x2116,	// (0x000278e3) cell_hwr_candidate_pane

0x2168,	// (0x00027935) fep_hwr_candidate_pane_g1_ParamLimits

0x54a7,	// (0x0002ac74) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x54a7,	// (0x0002ac74) bg_popup_fep_shadow_pane_cp2

0x563d,	// (0x0002ae0a) fep_vkb_top_pane_g4_ParamLimits

0x563d,	// (0x0002ae0a) fep_vkb_top_pane_g4

0x5683,	// (0x0002ae50) fep_vkb_side_pane_g2_ParamLimits

0x5683,	// (0x0002ae50) fep_vkb_side_pane_g2

0x9ada,	// (0x0002f2a7) list_setting_pane_t4_ParamLimits

0x9ada,	// (0x0002f2a7) list_setting_pane_t4

0x9b6e,	// (0x0002f33b) list_setting_number_pane_t5_ParamLimits

0x9b6e,	// (0x0002f33b) list_setting_number_pane_t5

0xa7c5,	// (0x0002ff92) list_double_heading_pane_cp2_ParamLimits

0xa7c5,	// (0x0002ff92) list_double_heading_pane_cp2

0x5a04,	// (0x0002b1d1) list_double_heading_pane_g1_cp2_ParamLimits

0x5a04,	// (0x0002b1d1) list_double_heading_pane_g1_cp2

0x5a10,	// (0x0002b1dd) list_double_heading_pane_g2_cp2_ParamLimits

0x5a10,	// (0x0002b1dd) list_double_heading_pane_g2_cp2

0x5a24,	// (0x0002b1f1) list_double_heading_pane_t1_cp2_ParamLimits

0x5a24,	// (0x0002b1f1) list_double_heading_pane_t1_cp2

0x5a3a,	// (0x0002b207) list_double_heading_pane_t2_cp2_ParamLimits

0x5a3a,	// (0x0002b207) list_double_heading_pane_t2_cp2

0xa00e,	// (0x0002f7db) aid_value_unit2

0xf276,	// (0x00034a43) popup_preview_fixed_window

0xce34,	// (0x00032601) bg_popup_preview_window_pane_cp02

0x5a4c,	// (0x0002b219) list_preview_fixed_pane

0x5a92,	// (0x0002b25f) list_empty_pane_fp_ParamLimits

0x5a92,	// (0x0002b25f) list_empty_pane_fp

0x5a92,	// (0x0002b25f) list_single_cale_day_pane_fp_ParamLimits

0x5a92,	// (0x0002b25f) list_single_cale_day_pane_fp

0x5a92,	// (0x0002b25f) list_single_graphic_heading_pane_fp_ParamLimits

0x5a92,	// (0x0002b25f) list_single_graphic_heading_pane_fp

0x5a92,	// (0x0002b25f) list_single_graphic_pane_fp_ParamLimits

0x5a92,	// (0x0002b25f) list_single_graphic_pane_fp

0x5a92,	// (0x0002b25f) list_single_heading_pane_fp_ParamLimits

0x5a92,	// (0x0002b25f) list_single_heading_pane_fp

0x5a92,	// (0x0002b25f) list_single_pane_fp_ParamLimits

0x5a92,	// (0x0002b25f) list_single_pane_fp

0x5aab,	// (0x0002b278) list_single_pane_fp_g1_ParamLimits

0x5aab,	// (0x0002b278) list_single_pane_fp_g1

0xf042,	// (0x0003480f) list_single_pane_fp_g2_ParamLimits

0xf042,	// (0x0003480f) list_single_pane_fp_g2

0xf04e,	// (0x0003481b) list_single_pane_fp_g3_ParamLimits

0xf04e,	// (0x0003481b) list_single_pane_fp_g3

0x5ab7,	// (0x0002b284) list_single_pane_fp_g4_ParamLimits

0x5ab7,	// (0x0002b284) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x0003534d) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x0003534d) list_single_pane_fp_g

0xf062,	// (0x0003482f) list_single_pane_fp_t1_ParamLimits

0xf062,	// (0x0003482f) list_single_pane_fp_t1

0xf079,	// (0x00034846) list_single_graphic_pane_fp_g1_ParamLimits

0xf079,	// (0x00034846) list_single_graphic_pane_fp_g1

0x5aab,	// (0x0002b278) list_single_graphic_pane_fp_g2_ParamLimits

0x5aab,	// (0x0002b278) list_single_graphic_pane_fp_g2

0xf042,	// (0x0003480f) list_single_graphic_pane_fp_g3_ParamLimits

0xf042,	// (0x0003480f) list_single_graphic_pane_fp_g3

0xf04e,	// (0x0003481b) list_single_graphic_pane_fp_g4_ParamLimits

0xf04e,	// (0x0003481b) list_single_graphic_pane_fp_g4

0x5ab7,	// (0x0002b284) list_single_graphic_pane_fp_g5_ParamLimits

0x5ab7,	// (0x0002b284) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x00035356) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x00035356) list_single_graphic_pane_fp_g

0xf085,	// (0x00034852) list_single_graphic_pane_fp_t1_ParamLimits

0xf085,	// (0x00034852) list_single_graphic_pane_fp_t1

0xf079,	// (0x00034846) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf079,	// (0x00034846) list_single_graphic_heading_pane_fp_g1

0x5aab,	// (0x0002b278) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5aab,	// (0x0002b278) list_single_graphic_heading_pane_fp_g2

0xf042,	// (0x0003480f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf042,	// (0x0003480f) list_single_graphic_heading_pane_fp_g3

0xf04e,	// (0x0003481b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf04e,	// (0x0003481b) list_single_graphic_heading_pane_fp_g4

0x5ab7,	// (0x0002b284) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5ab7,	// (0x0002b284) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x00035356) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x00035356) list_single_graphic_heading_pane_fp_g

0xf09b,	// (0x00034868) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf09b,	// (0x00034868) list_single_graphic_heading_pane_fp_t1

0xf280,	// (0x00034a4d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf280,	// (0x00034a4d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x00035361) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x00035361) list_single_graphic_heading_pane_fp_t

0xf292,	// (0x00034a5f) list_single_cale_day_pane_fp_g1_ParamLimits

0xf292,	// (0x00034a5f) list_single_cale_day_pane_fp_g1

0x5ac3,	// (0x0002b290) list_single_cale_day_pane_fp_g2_ParamLimits

0x5ac3,	// (0x0002b290) list_single_cale_day_pane_fp_g2

0xf2ca,	// (0x00034a97) list_single_cale_day_pane_fp_g3_ParamLimits

0xf2ca,	// (0x00034a97) list_single_cale_day_pane_fp_g3

0xf2f2,	// (0x00034abf) list_single_cale_day_pane_fp_g4_ParamLimits

0xf2f2,	// (0x00034abf) list_single_cale_day_pane_fp_g4

0xf316,	// (0x00034ae3) list_single_cale_day_pane_fp_g5_ParamLimits

0xf316,	// (0x00034ae3) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x00035366) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x00035366) list_single_cale_day_pane_fp_g

0xf33a,	// (0x00034b07) list_single_cale_day_pane_fp_t1_ParamLimits

0xf33a,	// (0x00034b07) list_single_cale_day_pane_fp_t1

0xf360,	// (0x00034b2d) list_single_cale_day_pane_fp_t2_ParamLimits

0xf360,	// (0x00034b2d) list_single_cale_day_pane_fp_t2

0xf379,	// (0x00034b46) list_single_cale_day_pane_fp_t3_ParamLimits

0xf379,	// (0x00034b46) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x00035371) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x00035371) list_single_cale_day_pane_fp_t

0x5aab,	// (0x0002b278) list_empty_pane_fp_g1_ParamLimits

0x5aab,	// (0x0002b278) list_empty_pane_fp_g1

0xf392,	// (0x00034b5f) list_empty_pane_fp_t1

0xf3a0,	// (0x00034b6d) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x00035378) list_empty_pane_fp_t

0x5aab,	// (0x0002b278) list_single_heading_pane_fp_g1_ParamLimits

0x5aab,	// (0x0002b278) list_single_heading_pane_fp_g1

0xf042,	// (0x0003480f) list_single_heading_pane_fp_g2_ParamLimits

0xf042,	// (0x0003480f) list_single_heading_pane_fp_g2

0xf04e,	// (0x0003481b) list_single_heading_pane_fp_g3_ParamLimits

0xf04e,	// (0x0003481b) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x0003537d) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0003537d) list_single_heading_pane_fp_g

0xf3ae,	// (0x00034b7b) list_single_heading_pane_fp_t1_ParamLimits

0xf3ae,	// (0x00034b7b) list_single_heading_pane_fp_t1

0xf3c0,	// (0x00034b8d) list_single_heading_pane_fp_t2_ParamLimits

0xf3c0,	// (0x00034b8d) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x00035384) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x00035384) list_single_heading_pane_fp_t

0xd47c,	// (0x00032c49) aid_size_cell_fast

0xce17,	// (0x000325e4) soft_indicator_pane_cp1_t1

0xd4b9,	// (0x00032c86) cell_app_pane_cp2_ParamLimits

0xd4b9,	// (0x00032c86) cell_app_pane_cp2

0x1fa2,	// (0x0002776f) fep_hwr_candidate_drop_down_list_pane

0xc176,	// (0x00031943) fep_hwr_candidate_pane_g3_ParamLimits

0xc176,	// (0x00031943) fep_hwr_candidate_pane_g3

0xc183,	// (0x00031950) fep_hwr_candidate_pane_g4_ParamLimits

0xc183,	// (0x00031950) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x000352f8) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x000352f8) fep_hwr_candidate_pane_g

0x5537,	// (0x0002ad04) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5537,	// (0x0002ad04) fep_vkb_candidate_drop_down_list_pane

0x595f,	// (0x0002b12c) fep_vkb_candidate_pane_g3

0x5967,	// (0x0002b134) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x00035325) fep_vkb_candidate_pane_g

0x563d,	// (0x0002ae0a) cell_hwr_candidate_pane_g1_ParamLimits

0x597e,	// (0x0002b14b) cell_hwr_candidate_pane_g3_ParamLimits

0x597e,	// (0x0002b14b) cell_hwr_candidate_pane_g3

0x599f,	// (0x0002b16c) cell_hwr_candidate_pane_g4_ParamLimits

0x599f,	// (0x0002b16c) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x0003533f) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x0003533f) cell_hwr_candidate_pane_g

0x59c0,	// (0x0002b18d) cell_vkb_candidate_pane_g3_ParamLimits

0x59c0,	// (0x0002b18d) cell_vkb_candidate_pane_g3

0x59db,	// (0x0002b1a8) cell_vkb_candidate_pane_g4_ParamLimits

0x59db,	// (0x0002b1a8) cell_vkb_candidate_pane_g4

0x5acf,	// (0x0002b29c) cell_app_pane_cp2_g1_ParamLimits

0x5acf,	// (0x0002b29c) cell_app_pane_cp2_g1

0x5aed,	// (0x0002b2ba) cell_app_pane_cp2_g2_ParamLimits

0x5aed,	// (0x0002b2ba) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x00035389) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x00035389) cell_app_pane_cp2_g

0x5af9,	// (0x0002b2c6) cell_app_pane_cp2_t1_ParamLimits

0x5af9,	// (0x0002b2c6) cell_app_pane_cp2_t1

0xd316,	// (0x00032ae3) grid_highlight_pane_cp1_ParamLimits

0xd316,	// (0x00032ae3) grid_highlight_pane_cp1

0x21f4,	// (0x000279c1) cell_hwr_candidate_pane_cp1_ParamLimits

0x21f4,	// (0x000279c1) cell_hwr_candidate_pane_cp1

0x563d,	// (0x0002ae0a) fep_hwr_candidate_drop_down_list_pane_g1

0x5b0b,	// (0x0002b2d8) fep_hwr_candidate_drop_down_list_pane_g2

0x5b18,	// (0x0002b2e5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0003538e) fep_hwr_candidate_drop_down_list_pane_g

0x2218,	// (0x000279e5) fep_hwr_candidate_drop_down_list_scroll_pane

0x2221,	// (0x000279ee) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2221,	// (0x000279ee) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x222e,	// (0x000279fb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x222e,	// (0x000279fb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x223b,	// (0x00027a08) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x223b,	// (0x00027a08) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x59c0,	// (0x0002b18d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x59c0,	// (0x0002b18d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x59db,	// (0x0002b1a8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x59db,	// (0x0002b1a8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2248,	// (0x00027a15) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2248,	// (0x00027a15) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2263,	// (0x00027a30) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2263,	// (0x00027a30) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x227e,	// (0x00027a4b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x227e,	// (0x00027a4b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x00035395) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x00035395) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5b25,	// (0x0002b2f2) cell_vkb_candidate_pane_cp1_ParamLimits

0x5b25,	// (0x0002b2f2) cell_vkb_candidate_pane_cp1

0x563d,	// (0x0002ae0a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x563d,	// (0x0002ae0a) fep_vkb_candidate_drop_down_list_pane_g1

0x5b0b,	// (0x0002b2d8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5b0b,	// (0x0002b2d8) fep_vkb_candidate_drop_down_list_pane_g2

0x5b18,	// (0x0002b2e5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5b18,	// (0x0002b2e5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0003538e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc1,	// (0x0003538e) fep_vkb_candidate_drop_down_list_pane_g

0x5b4b,	// (0x0002b318) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5b4b,	// (0x0002b318) fep_vkb_candidate_drop_down_list_scroll_pane

0x5b58,	// (0x0002b325) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5b58,	// (0x0002b325) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5b65,	// (0x0002b332) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5b65,	// (0x0002b332) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5b87,	// (0x0002b354) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5b87,	// (0x0002b354) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x597e,	// (0x0002b14b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x597e,	// (0x0002b14b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x599f,	// (0x0002b16c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x599f,	// (0x0002b16c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5b93,	// (0x0002b360) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5b93,	// (0x0002b360) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5bb4,	// (0x0002b381) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5bb4,	// (0x0002b381) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5bd5,	// (0x0002b3a2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5bd5,	// (0x0002b3a2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x000353a6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x000353a6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa1e9,	// (0x0002f9b6) title_pane_g1_ParamLimits

0xa1fc,	// (0x0002f9c9) title_pane_g2_ParamLimits

0xf554,	// (0x00034d21) title_pane_g_ParamLimits

0xd7e8,	// (0x00032fb5) aid_call2_pane

0xd7f0,	// (0x00032fbd) aid_call_pane

0xd7f8,	// (0x00032fc5) popup_clock_analogue_window_g1

0xd7f8,	// (0x00032fc5) popup_clock_analogue_window_g2

0x0308,	// (0x00025ad5) popup_clock_analogue_window_g3

0x0311,	// (0x00025ade) popup_clock_analogue_window_g4

0xa030,	// (0x0002f7fd) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00034ecb) popup_clock_analogue_window_g

0x0319,	// (0x00025ae6) popup_clock_analogue_window_t1

0x035a,	// (0x00025b27) clock_digital_number_pane_ParamLimits

0x035a,	// (0x00025b27) clock_digital_number_pane

0x0366,	// (0x00025b33) clock_digital_number_pane_cp02_ParamLimits

0x0366,	// (0x00025b33) clock_digital_number_pane_cp02

0x0372,	// (0x00025b3f) clock_digital_number_pane_cp03_ParamLimits

0x0372,	// (0x00025b3f) clock_digital_number_pane_cp03

0x037e,	// (0x00025b4b) clock_digital_number_pane_cp04_ParamLimits

0x037e,	// (0x00025b4b) clock_digital_number_pane_cp04

0x038a,	// (0x00025b57) clock_digital_separator_pane_ParamLimits

0x038a,	// (0x00025b57) clock_digital_separator_pane

0x0396,	// (0x00025b63) popup_clock_digital_window_t1_ParamLimits

0x0396,	// (0x00025b63) popup_clock_digital_window_t1

0xa030,	// (0x0002f7fd) clock_digital_number_pane_g1

0xa030,	// (0x0002f7fd) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x00034ed6) clock_digital_number_pane_g

0xa030,	// (0x0002f7fd) clock_digital_separator_pane_g1

0xa030,	// (0x0002f7fd) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x00034ed6) clock_digital_separator_pane_g

0xb2d6,	// (0x00030aa3) aid_fill_nsta_ParamLimits

0xb40e,	// (0x00030bdb) indicator_nsta_pane_ParamLimits

0x196c,	// (0x00027139) popup_clock_analogue_window

0x196c,	// (0x00027139) popup_clock_digital_window

0xd85b,	// (0x00033028) grid_indicator_nsta_pane_ParamLimits

0x4def,	// (0x0002a5bc) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x00035278) clock_nsta_pane_t

0x0271,	// (0x00025a3e) aid_size_max_handle

0xa738,	// (0x0002ff05) aid_size_min_handle

0x0ae7,	// (0x000262b4) editor_scroll_pane

0x5bf0,	// (0x0002b3bd) ex_editor_pane

0xd442,	// (0x00032c0f) scroll_pane_cp13

0xd2b5,	// (0x00032a82) scroll_pane_cp14

0xd827,	// (0x00032ff4) scroll_pane_cp36

0xa7d8,	// (0x0002ffa5) list_single_graphic_hl_pane_cp2_ParamLimits

0xa7d8,	// (0x0002ffa5) list_single_graphic_hl_pane_cp2

0xbdd6,	// (0x000315a3) list_single_graphic_hl_pane_ParamLimits

0xbdd6,	// (0x000315a3) list_single_graphic_hl_pane

0xf3d6,	// (0x00034ba3) aid_size_min_hl_cp1

0x5bf8,	// (0x0002b3c5) list_highlight_pane_cp34_ParamLimits

0x5bf8,	// (0x0002b3c5) list_highlight_pane_cp34

0x5c09,	// (0x0002b3d6) list_single_graphic_hl_pane_g1_ParamLimits

0x5c09,	// (0x0002b3d6) list_single_graphic_hl_pane_g1

0x9e25,	// (0x0002f5f2) list_single_graphic_hl_pane_g2_ParamLimits

0x9e25,	// (0x0002f5f2) list_single_graphic_hl_pane_g2

0x9e25,	// (0x0002f5f2) list_single_graphic_hl_pane_g3_ParamLimits

0x9e25,	// (0x0002f5f2) list_single_graphic_hl_pane_g3

0xf0b1,	// (0x0003487e) list_single_graphic_hl_pane_g4_ParamLimits

0xf0b1,	// (0x0003487e) list_single_graphic_hl_pane_g4

0x9e31,	// (0x0002f5fe) list_single_graphic_hl_pane_g5_ParamLimits

0x9e31,	// (0x0002f5fe) list_single_graphic_hl_pane_g5

0x0004,

0xfbea,	// (0x000353b7) list_single_graphic_hl_pane_g_ParamLimits

0xfbea,	// (0x000353b7) list_single_graphic_hl_pane_g

0x9e45,	// (0x0002f612) list_single_graphic_hl_pane_t1_ParamLimits

0x9e45,	// (0x0002f612) list_single_graphic_hl_pane_t1

0x5c16,	// (0x0002b3e3) aid_size_min_hl_cp2

0x5c1f,	// (0x0002b3ec) list_highlight_pane_cp34_cp2_ParamLimits

0x5c1f,	// (0x0002b3ec) list_highlight_pane_cp34_cp2

0x5c09,	// (0x0002b3d6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5c09,	// (0x0002b3d6) list_single_graphic_hl_pane_g1_cp2

0x5c2c,	// (0x0002b3f9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5c2c,	// (0x0002b3f9) list_single_graphic_hl_pane_g2_cp2

0xc30c,	// (0x00031ad9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc30c,	// (0x00031ad9) list_single_graphic_hl_pane_g3_cp2

0xd869,	// (0x00033036) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd869,	// (0x00033036) list_single_graphic_hl_pane_g4_cp2

0x5c46,	// (0x0002b413) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5c46,	// (0x0002b413) list_single_graphic_hl_pane_g5_cp2

0xaa67,	// (0x00030234) control_pane_g4_ParamLimits

0xaa67,	// (0x00030234) control_pane_g4

0x1054,	// (0x00026821) bg_popup_sub_pane_cp10_ParamLimits

0x53cc,	// (0x0002ab99) list_choice_list_pane_ParamLimits

0x53db,	// (0x0002aba8) scroll_pane_cp23

0xce34,	// (0x00032601) bg_popup_preview_window_pane_cp02_ParamLimits

0x5a4c,	// (0x0002b219) list_preview_fixed_pane_ParamLimits

0x5a62,	// (0x0002b22f) list_preview_fixed_pane_cp_ParamLimits

0x5a62,	// (0x0002b22f) list_preview_fixed_pane_cp

0x5a6e,	// (0x0002b23b) popup_preview_fixed_window_g1_ParamLimits

0x5a6e,	// (0x0002b23b) popup_preview_fixed_window_g1

0x5a7a,	// (0x0002b247) popup_preview_fixed_window_g2_ParamLimits

0x5a7a,	// (0x0002b247) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x00035346) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x00035346) popup_preview_fixed_window_g

0x015e,	// (0x0002592b) aid_navi_side_left_pane_ParamLimits

0x0173,	// (0x00025940) aid_navi_side_right_pane_ParamLimits

0x018b,	// (0x00025958) navi_icon_pane_stacon_ParamLimits

0x019f,	// (0x0002596c) navi_navi_pane_stacon_ParamLimits

0x018b,	// (0x00025958) navi_text_pane_stacon_ParamLimits

0xa026,	// (0x0002f7f3) main_text_info_pane

0x5c70,	// (0x0002b43d) listscroll_text_info_pane

0x5c78,	// (0x0002b445) list_text_info_pane_ParamLimits

0x5c78,	// (0x0002b445) list_text_info_pane

0x5c87,	// (0x0002b454) scroll_pane_cp24_ParamLimits

0x5c87,	// (0x0002b454) scroll_pane_cp24

0xc31a,	// (0x00031ae7) list_text_info_pane_t1_ParamLimits

0xc31a,	// (0x00031ae7) list_text_info_pane_t1

0xabcf,	// (0x0003039c) popup_fast_swap2_window_ParamLimits

0xabcf,	// (0x0003039c) popup_fast_swap2_window

0x5cca,	// (0x0002b497) aid_size_cell_fast2

0xa026,	// (0x0002f7f3) bg_popup_window_pane_cp17

0x318e,	// (0x0002895b) heading_pane_cp2

0xd03a,	// (0x00032807) listscroll_fast2_pane

0x5cd4,	// (0x0002b4a1) grid_fast2_pane

0x5cde,	// (0x0002b4ab) listscroll_fast2_pane_g1

0x5ce8,	// (0x0002b4b5) listscroll_fast2_pane_g2

0x0001,

0xfbf5,	// (0x000353c2) listscroll_fast2_pane_g

0xd442,	// (0x00032c0f) scroll_pane_cp26

0x5cf2,	// (0x0002b4bf) cell_fast2_pane_ParamLimits

0x5cf2,	// (0x0002b4bf) cell_fast2_pane

0x5d09,	// (0x0002b4d6) cell_fast2_pane_g1

0x5d12,	// (0x0002b4df) cell_fast2_pane_g2

0x5d1b,	// (0x0002b4e8) cell_fast2_pane_g3

0x0002,

0xfbfa,	// (0x000353c7) cell_fast2_pane_g

0xd07c,	// (0x00032849) grid_highlight_pane_cp9

0xd091,	// (0x0003285e) main_eswt_pane_ParamLimits

0xd091,	// (0x0003285e) main_eswt_pane

0x5c9c,	// (0x0002b469) list_single_text_info_pane

0x5d23,	// (0x0002b4f0) eswt_ctrl_button_pane

0x5d23,	// (0x0002b4f0) eswt_ctrl_canvas_pane

0x5d2b,	// (0x0002b4f8) eswt_ctrl_combo_pane

0x5d23,	// (0x0002b4f0) eswt_ctrl_default_pane

0x5d23,	// (0x0002b4f0) eswt_ctrl_label_pane

0x5d33,	// (0x0002b500) eswt_ctrl_wait_pane

0x5d3b,	// (0x0002b508) eswt_shell_pane

0xa026,	// (0x0002f7f3) listscroll_eswt_app_pane

0x5d5b,	// (0x0002b528) popup_eswt_tasktip_window_ParamLimits

0x5d5b,	// (0x0002b528) popup_eswt_tasktip_window

0x2dce,	// (0x0002859b) bg_popup_window_pane_cp18

0x5d6c,	// (0x0002b539) eswt_control_pane_g1_ParamLimits

0x5d6c,	// (0x0002b539) eswt_control_pane_g1

0x5d79,	// (0x0002b546) eswt_control_pane_g2_ParamLimits

0x5d79,	// (0x0002b546) eswt_control_pane_g2

0x5d86,	// (0x0002b553) eswt_control_pane_g3_ParamLimits

0x5d86,	// (0x0002b553) eswt_control_pane_g3

0x5d93,	// (0x0002b560) eswt_control_pane_g4_ParamLimits

0x5d93,	// (0x0002b560) eswt_control_pane_g4

0x0003,

0xfc01,	// (0x000353ce) eswt_control_pane_g_ParamLimits

0xfc01,	// (0x000353ce) eswt_control_pane_g

0xd316,	// (0x00032ae3) bg_button_pane_ParamLimits

0xd316,	// (0x00032ae3) bg_button_pane

0xd091,	// (0x0003285e) common_borders_pane_copy2_ParamLimits

0xd091,	// (0x0003285e) common_borders_pane_copy2

0x5da0,	// (0x0002b56d) control_button_pane_g1_ParamLimits

0x5da0,	// (0x0002b56d) control_button_pane_g1

0x5dac,	// (0x0002b579) control_button_pane_g2_ParamLimits

0x5dac,	// (0x0002b579) control_button_pane_g2

0x5db8,	// (0x0002b585) control_button_pane_g3_ParamLimits

0x5db8,	// (0x0002b585) control_button_pane_g3

0x0002,

0xfc0a,	// (0x000353d7) control_button_pane_g_ParamLimits

0xfc0a,	// (0x000353d7) control_button_pane_g

0x5dcc,	// (0x0002b599) control_button_pane_t1

0x5dda,	// (0x0002b5a7) control_button_pane_t2

0x0001,

0xfc11,	// (0x000353de) control_button_pane_t

0x2d5a,	// (0x00028527) bg_button_pane_g1

0x2d62,	// (0x0002852f) bg_button_pane_g2

0x2d6a,	// (0x00028537) bg_button_pane_g3

0x2d72,	// (0x0002853f) bg_button_pane_g4

0x2d7a,	// (0x00028547) bg_button_pane_g5

0x2d82,	// (0x0002854f) bg_button_pane_g6

0x2d8a,	// (0x00028557) bg_button_pane_g7

0x2d92,	// (0x0002855f) bg_button_pane_g8

0x2d9a,	// (0x00028567) bg_button_pane_g9

0x0008,

0xf867,	// (0x00035034) bg_button_pane_g

0x5387,	// (0x0002ab54) common_borders_pane_ParamLimits

0x5387,	// (0x0002ab54) common_borders_pane

0x5d6c,	// (0x0002b539) eswt_control_pane_g1_copy1_ParamLimits

0x5d6c,	// (0x0002b539) eswt_control_pane_g1_copy1

0x5d79,	// (0x0002b546) eswt_control_pane_g2_copy1_ParamLimits

0x5d79,	// (0x0002b546) eswt_control_pane_g2_copy1

0x5d86,	// (0x0002b553) eswt_control_pane_g3_copy1_ParamLimits

0x5d86,	// (0x0002b553) eswt_control_pane_g3_copy1

0x5d93,	// (0x0002b560) eswt_control_pane_g4_copy1_ParamLimits

0x5d93,	// (0x0002b560) eswt_control_pane_g4_copy1

0x53c2,	// (0x0002ab8f) bg_eswt_ctrl_canvas_pane_g1

0x5387,	// (0x0002ab54) common_borders_pane_cp2_ParamLimits

0x5387,	// (0x0002ab54) common_borders_pane_cp2

0x5387,	// (0x0002ab54) common_borders_pane_cp3_ParamLimits

0x5387,	// (0x0002ab54) common_borders_pane_cp3

0x5de8,	// (0x0002b5b5) separator_horizontal_pane

0x5df0,	// (0x0002b5bd) separator_vertical_pane

0x5d6c,	// (0x0002b539) eswt_control_pane_g1_copy2_ParamLimits

0x5d6c,	// (0x0002b539) eswt_control_pane_g1_copy2

0x5d79,	// (0x0002b546) eswt_control_pane_g2_copy2_ParamLimits

0x5d79,	// (0x0002b546) eswt_control_pane_g2_copy2

0x5d86,	// (0x0002b553) eswt_control_pane_g3_copy2_ParamLimits

0x5d86,	// (0x0002b553) eswt_control_pane_g3_copy2

0x5d93,	// (0x0002b560) eswt_control_pane_g4_copy2_ParamLimits

0x5d93,	// (0x0002b560) eswt_control_pane_g4_copy2

0xa026,	// (0x0002f7f3) common_borders_pane_cp4

0x5df9,	// (0x0002b5c6) separator_horizontal_pane_g1

0x5e02,	// (0x0002b5cf) separator_horizontal_pane_g2

0x5e0b,	// (0x0002b5d8) separator_horizontal_pane_g3

0x0002,

0xfc16,	// (0x000353e3) separator_horizontal_pane_g

0x5d6c,	// (0x0002b539) eswt_control_pane_g1_copy3_ParamLimits

0x5d6c,	// (0x0002b539) eswt_control_pane_g1_copy3

0x5d79,	// (0x0002b546) eswt_control_pane_g2_copy3_ParamLimits

0x5d79,	// (0x0002b546) eswt_control_pane_g2_copy3

0x5d86,	// (0x0002b553) eswt_control_pane_g3_copy3_ParamLimits

0x5d86,	// (0x0002b553) eswt_control_pane_g3_copy3

0x5d93,	// (0x0002b560) eswt_control_pane_g4_copy3_ParamLimits

0x5d93,	// (0x0002b560) eswt_control_pane_g4_copy3

0xa026,	// (0x0002f7f3) common_borders_pane_cp5

0x5e14,	// (0x0002b5e1) separator_vertical_pane_g1

0x5e1d,	// (0x0002b5ea) separator_vertical_pane_g2

0x5e26,	// (0x0002b5f3) separator_vertical_pane_g3

0x0002,

0xfc1d,	// (0x000353ea) separator_vertical_pane_g

0x5d6c,	// (0x0002b539) eswt_control_pane_g1_copy4_ParamLimits

0x5d6c,	// (0x0002b539) eswt_control_pane_g1_copy4

0x5d79,	// (0x0002b546) eswt_control_pane_g2_copy4_ParamLimits

0x5d79,	// (0x0002b546) eswt_control_pane_g2_copy4

0x5d86,	// (0x0002b553) eswt_control_pane_g3_copy4_ParamLimits

0x5d86,	// (0x0002b553) eswt_control_pane_g3_copy4

0x5d93,	// (0x0002b560) eswt_control_pane_g4_copy4_ParamLimits

0x5d93,	// (0x0002b560) eswt_control_pane_g4_copy4

0xc33c,	// (0x00031b09) eswt_ctrl_combo_button_pane

0xc344,	// (0x00031b11) eswt_ctrl_input_pane

0xc34c,	// (0x00031b19) popup_choice_list_window_cp70

0xc354,	// (0x00031b21) eswt_ctrl_input_pane_t1

0xa026,	// (0x0002f7f3) input_focus_pane_cp70

0x5387,	// (0x0002ab54) bg_button_pane_cp70_ParamLimits

0x5387,	// (0x0002ab54) bg_button_pane_cp70

0xc362,	// (0x00031b2f) eswt_ctrl_combo_button_pane_g1

0x5e5d,	// (0x0002b62a) wait_bar_pane_cp70

0x2dce,	// (0x0002859b) bg_popup_window_pane_cp70_ParamLimits

0x2dce,	// (0x0002859b) bg_popup_window_pane_cp70

0x5e65,	// (0x0002b632) popup_eswt_tasktip_window_t1

0x5e7b,	// (0x0002b648) wait_bar_pane_cp71_ParamLimits

0x5e7b,	// (0x0002b648) wait_bar_pane_cp71

0x5e87,	// (0x0002b654) grid_eswt_app_pane

0xd690,	// (0x00032e5d) scroll_pane_cp70

0xc36a,	// (0x00031b37) cell_eswt_app_pane_ParamLimits

0xc36a,	// (0x00031b37) cell_eswt_app_pane

0xc39c,	// (0x00031b69) cell_eswt_app_pane_g1_ParamLimits

0xc39c,	// (0x00031b69) cell_eswt_app_pane_g1

0xc3cb,	// (0x00031b98) cell_eswt_app_pane_g2_ParamLimits

0xc3cb,	// (0x00031b98) cell_eswt_app_pane_g2

0x0001,

0xfc24,	// (0x000353f1) cell_eswt_app_pane_g_ParamLimits

0xfc24,	// (0x000353f1) cell_eswt_app_pane_g

0xc3f4,	// (0x00031bc1) cell_eswt_app_pane_t1_ParamLimits

0xc3f4,	// (0x00031bc1) cell_eswt_app_pane_t1

0x5f4c,	// (0x0002b719) grid_highlight_pane_cp70_ParamLimits

0x5f4c,	// (0x0002b719) grid_highlight_pane_cp70

0x09b8,	// (0x00026185) set_content_pane_g1

0x0e34,	// (0x00026601) status_small_volume_pane

0x2299,	// (0x00027a66) status_small_volume_pane_g1

0x22a1,	// (0x00027a6e) volume_small2_pane

0x22aa,	// (0x00027a77) volume_small2_pane_g1

0x22b3,	// (0x00027a80) volume_small2_pane_g2

0x22bc,	// (0x00027a89) volume_small2_pane_g3

0x22c5,	// (0x00027a92) volume_small2_pane_g4

0x22ce,	// (0x00027a9b) volume_small2_pane_g5

0x22d7,	// (0x00027aa4) volume_small2_pane_g6

0x22e0,	// (0x00027aad) volume_small2_pane_g7

0x22e9,	// (0x00027ab6) volume_small2_pane_g8

0x22f2,	// (0x00027abf) volume_small2_pane_g9

0x22fb,	// (0x00027ac8) volume_small2_pane_g10

0x0009,

0xfc29,	// (0x000353f6) volume_small2_pane_g

0x5791,	// (0x0002af5e) fep_vkb_top_text_pane_g1_ParamLimits

0xc2b4,	// (0x00031a81) fep_vkb_top_text_pane_t1_ParamLimits

0x5a86,	// (0x0002b253) popup_preview_fixed_window_g3_ParamLimits

0x5a86,	// (0x0002b253) popup_preview_fixed_window_g3

0xb269,	// (0x00030a36) popup_toolbar_trans_pane

0xbc26,	// (0x000313f3) aid_height_set_list_ParamLimits

0x4163,	// (0x00029930) aid_size_parent_ParamLimits

0x1054,	// (0x00026821) list_highlight_pane_cp2_ParamLimits

0x09b8,	// (0x00026185) set_content_pane_g1_ParamLimits

0xbdea,	// (0x000315b7) list_single_image_pane_ParamLimits

0xbdea,	// (0x000315b7) list_single_image_pane

0xc426,	// (0x00031bf3) aid_size_cell_image_ParamLimits

0xc426,	// (0x00031bf3) aid_size_cell_image

0xc433,	// (0x00031c00) grid_single_image_pane_ParamLimits

0xc433,	// (0x00031c00) grid_single_image_pane

0xd324,	// (0x00032af1) list_single_image_pane_g1_ParamLimits

0xd324,	// (0x00032af1) list_single_image_pane_g1

0xd330,	// (0x00032afd) list_single_image_pane_g2_ParamLimits

0xd330,	// (0x00032afd) list_single_image_pane_g2

0x0001,

0xfc3e,	// (0x0003540b) list_single_image_pane_g_ParamLimits

0xfc3e,	// (0x0003540b) list_single_image_pane_g

0x5f73,	// (0x0002b740) list_single_image_pane_t1_ParamLimits

0x5f73,	// (0x0002b740) list_single_image_pane_t1

0xc441,	// (0x00031c0e) cell_image_list_pane_ParamLimits

0xc441,	// (0x00031c0e) cell_image_list_pane

0xc455,	// (0x00031c22) cell_image_list_pane_g1

0xc45e,	// (0x00031c2b) cell_image_list_pane_g2

0x0001,

0xfc43,	// (0x00035410) cell_image_list_pane_g

0x5fb1,	// (0x0002b77e) aid_size_cell_tb_trans_pane

0xd316,	// (0x00032ae3) bg_tb_trans_pane

0x5fc3,	// (0x0002b790) grid_tb_trans_pane

0x2d5a,	// (0x00028527) bg_tb_trans_pane_g1

0x2d62,	// (0x0002852f) bg_tb_trans_pane_g2

0x2d6a,	// (0x00028537) bg_tb_trans_pane_g3

0x2d72,	// (0x0002853f) bg_tb_trans_pane_g4

0x2d7a,	// (0x00028547) bg_tb_trans_pane_g5

0x2d92,	// (0x0002855f) bg_tb_trans_pane_g6

0x2d9a,	// (0x00028567) bg_tb_trans_pane_g7

0x2d82,	// (0x0002854f) bg_tb_trans_pane_g8

0x2d8a,	// (0x00028557) bg_tb_trans_pane_g9

0x0008,

0xfc48,	// (0x00035415) bg_tb_trans_pane_g

0x5fd7,	// (0x0002b7a4) cell_toolbar_trans_pane_ParamLimits

0x5fd7,	// (0x0002b7a4) cell_toolbar_trans_pane

0x53c2,	// (0x0002ab8f) cell_toolbar_trans_pane_g1

0xc024,	// (0x000317f1) list_form2_midp_pane_t1

0xc032,	// (0x000317ff) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x000352be) list_form2_midp_pane_t

0x5002,	// (0x0002a7cf) scroll_pane_cp51_ParamLimits

0x51c9,	// (0x0002a996) form2_midp_wait_pane_g1

0x51d2,	// (0x0002a99f) form2_midp_wait_pane_g2

0x51db,	// (0x0002a9a8) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x000352d3) form2_midp_wait_pane_g

0xcd01,	// (0x000324ce) list_highlight_pane_cp21_ParamLimits

0x521f,	// (0x0002a9ec) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x522e,	// (0x0002a9fb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xed58,	// (0x00034525) list_single_2graphic_im_pane_ParamLimits

0xed58,	// (0x00034525) list_single_2graphic_im_pane

0xc467,	// (0x00031c34) list_single_2graphic_im_pane_g1_ParamLimits

0xc467,	// (0x00031c34) list_single_2graphic_im_pane_g1

0xc478,	// (0x00031c45) list_single_2graphic_im_pane_g2_ParamLimits

0xc478,	// (0x00031c45) list_single_2graphic_im_pane_g2

0xc484,	// (0x00031c51) list_single_2graphic_im_pane_g3_ParamLimits

0xc484,	// (0x00031c51) list_single_2graphic_im_pane_g3

0x0003,

0xfc5b,	// (0x00035428) list_single_2graphic_im_pane_g_ParamLimits

0xfc5b,	// (0x00035428) list_single_2graphic_im_pane_g

0xc498,	// (0x00031c65) list_single_2graphic_im_pane_t1_ParamLimits

0xc498,	// (0x00031c65) list_single_2graphic_im_pane_t1

0x5a92,	// (0x0002b25f) list_single_graphic_2heading_pane_fp_ParamLimits

0x5a92,	// (0x0002b25f) list_single_graphic_2heading_pane_fp

0xf079,	// (0x00034846) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf079,	// (0x00034846) list_single_graphic_2heading_pane_fp_g1

0x5aab,	// (0x0002b278) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5aab,	// (0x0002b278) list_single_graphic_2heading_pane_fp_g2

0xf042,	// (0x0003480f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf042,	// (0x0003480f) list_single_graphic_2heading_pane_fp_g3

0xf04e,	// (0x0003481b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf04e,	// (0x0003481b) list_single_graphic_2heading_pane_fp_g4

0x5ab7,	// (0x0002b284) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5ab7,	// (0x0002b284) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x00035356) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x00035356) list_single_graphic_2heading_pane_fp_g

0xf3df,	// (0x00034bac) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf3df,	// (0x00034bac) list_single_graphic_2heading_pane_fp_t1

0xf280,	// (0x00034a4d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf280,	// (0x00034a4d) list_single_graphic_2heading_pane_fp_t2

0xf3f5,	// (0x00034bc2) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf3f5,	// (0x00034bc2) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc64,	// (0x00035431) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc64,	// (0x00035431) list_single_graphic_2heading_pane_fp_t

0x5453,	// (0x0002ac20) fep_hwr_write_pane_g5_ParamLimits

0x5453,	// (0x0002ac20) fep_hwr_write_pane_g5

0x545f,	// (0x0002ac2c) fep_hwr_write_pane_g6_ParamLimits

0x545f,	// (0x0002ac2c) fep_hwr_write_pane_g6

0x5d3b,	// (0x0002b508) eswt_shell_pane_ParamLimits

0x2dce,	// (0x0002859b) bg_popup_window_pane_cp18_ParamLimits

0x407d,	// (0x0002984a) heading_pane_cp70

0x5e65,	// (0x0002b632) popup_eswt_tasktip_window_t1_ParamLimits

0xb333,	// (0x00030b00) aid_touch_tab_arrow_left

0xb349,	// (0x00030b16) aid_touch_tab_arrow_right

0xa214,	// (0x0002f9e1) title_pane_g3_ParamLimits

0xa214,	// (0x0002f9e1) title_pane_g3

0xd2d5,	// (0x00032aa2) set_value_pane_g1

0xb269,	// (0x00030a36) popup_toolbar_trans_pane_ParamLimits

0x5fb1,	// (0x0002b77e) aid_size_cell_tb_trans_pane_ParamLimits

0xd316,	// (0x00032ae3) bg_tb_trans_pane_ParamLimits

0x5fc3,	// (0x0002b790) grid_tb_trans_pane_ParamLimits

0xce34,	// (0x00032601) cont_note_pane_ParamLimits

0xce34,	// (0x00032601) cont_note_pane

0xd091,	// (0x0003285e) cont_snote2_single_text_pane_ParamLimits

0xd091,	// (0x0003285e) cont_snote2_single_text_pane

0xd091,	// (0x0003285e) cont_snote2_single_graphic_pane_ParamLimits

0xd091,	// (0x0003285e) cont_snote2_single_graphic_pane

0x33aa,	// (0x00028b77) cont_note_wait_pane_ParamLimits

0x33aa,	// (0x00028b77) cont_note_wait_pane

0x33aa,	// (0x00028b77) cont_note_image_pane_ParamLimits

0x33aa,	// (0x00028b77) cont_note_image_pane

0x606b,	// (0x0002b838) popup_note2_window_g1_ParamLimits

0x606b,	// (0x0002b838) popup_note2_window_g1

0x609c,	// (0x0002b869) popup_note2_window_t1_ParamLimits

0x609c,	// (0x0002b869) popup_note2_window_t1

0x60e1,	// (0x0002b8ae) popup_note2_window_t2_ParamLimits

0x60e1,	// (0x0002b8ae) popup_note2_window_t2

0x6126,	// (0x0002b8f3) popup_note2_window_t3_ParamLimits

0x6126,	// (0x0002b8f3) popup_note2_window_t3

0x616b,	// (0x0002b938) popup_note2_window_t4_ParamLimits

0x616b,	// (0x0002b938) popup_note2_window_t4

0xceb8,	// (0x00032685) popup_note2_window_t5_ParamLimits

0xceb8,	// (0x00032685) popup_note2_window_t5

0x0004,

0xfc70,	// (0x0003543d) popup_note2_window_t_ParamLimits

0xfc70,	// (0x0003543d) popup_note2_window_t

0x619a,	// (0x0002b967) popup_note2_image_window_g1_ParamLimits

0x619a,	// (0x0002b967) popup_note2_image_window_g1

0x61a6,	// (0x0002b973) popup_note2_image_window_g2_ParamLimits

0x61a6,	// (0x0002b973) popup_note2_image_window_g2

0x0001,

0xfc7b,	// (0x00035448) popup_note2_image_window_g_ParamLimits

0xfc7b,	// (0x00035448) popup_note2_image_window_g

0x61b8,	// (0x0002b985) popup_note2_image_window_t1_ParamLimits

0x61b8,	// (0x0002b985) popup_note2_image_window_t1

0x61d0,	// (0x0002b99d) popup_note2_image_window_t2_ParamLimits

0x61d0,	// (0x0002b99d) popup_note2_image_window_t2

0x61e8,	// (0x0002b9b5) popup_note2_image_window_t3_ParamLimits

0x61e8,	// (0x0002b9b5) popup_note2_image_window_t3

0x0002,

0xfc80,	// (0x0003544d) popup_note2_image_window_t_ParamLimits

0xfc80,	// (0x0003544d) popup_note2_image_window_t

0x33b8,	// (0x00028b85) popup_note2_wait_window_g1_ParamLimits

0x33b8,	// (0x00028b85) popup_note2_wait_window_g1

0x6204,	// (0x0002b9d1) popup_note2_wait_window_g2_ParamLimits

0x6204,	// (0x0002b9d1) popup_note2_wait_window_g2

0x33d0,	// (0x00028b9d) popup_note2_wait_window_g3_ParamLimits

0x33d0,	// (0x00028b9d) popup_note2_wait_window_g3

0x0002,

0xfc87,	// (0x00035454) popup_note2_wait_window_g_ParamLimits

0xfc87,	// (0x00035454) popup_note2_wait_window_g

0x6210,	// (0x0002b9dd) popup_note2_wait_window_t1_ParamLimits

0x6210,	// (0x0002b9dd) popup_note2_wait_window_t1

0x622e,	// (0x0002b9fb) popup_note2_wait_window_t2_ParamLimits

0x622e,	// (0x0002b9fb) popup_note2_wait_window_t2

0x624c,	// (0x0002ba19) popup_note2_wait_window_t3_ParamLimits

0x624c,	// (0x0002ba19) popup_note2_wait_window_t3

0x625e,	// (0x0002ba2b) popup_note2_wait_window_t4_ParamLimits

0x625e,	// (0x0002ba2b) popup_note2_wait_window_t4

0x0003,

0xfc8e,	// (0x0003545b) popup_note2_wait_window_t_ParamLimits

0xfc8e,	// (0x0003545b) popup_note2_wait_window_t

0x6270,	// (0x0002ba3d) wait_bar2_pane_ParamLimits

0x6270,	// (0x0002ba3d) wait_bar2_pane

0x6288,	// (0x0002ba55) popup_snote2_single_text_window_g1_ParamLimits

0x6288,	// (0x0002ba55) popup_snote2_single_text_window_g1

0x62b0,	// (0x0002ba7d) popup_snote2_single_text_window_t1_ParamLimits

0x62b0,	// (0x0002ba7d) popup_snote2_single_text_window_t1

0x62fc,	// (0x0002bac9) popup_snote2_single_text_window_t2_ParamLimits

0x62fc,	// (0x0002bac9) popup_snote2_single_text_window_t2

0x6348,	// (0x0002bb15) popup_snote2_single_text_window_t3_ParamLimits

0x6348,	// (0x0002bb15) popup_snote2_single_text_window_t3

0x6389,	// (0x0002bb56) popup_snote2_single_text_window_t4_ParamLimits

0x6389,	// (0x0002bb56) popup_snote2_single_text_window_t4

0x63bf,	// (0x0002bb8c) popup_snote2_single_text_window_t5_ParamLimits

0x63bf,	// (0x0002bb8c) popup_snote2_single_text_window_t5

0x0004,

0xfc97,	// (0x00035464) popup_snote2_single_text_window_t_ParamLimits

0xfc97,	// (0x00035464) popup_snote2_single_text_window_t

0x63ea,	// (0x0002bbb7) popup_snote2_single_graphic_window_g1_ParamLimits

0x63ea,	// (0x0002bbb7) popup_snote2_single_graphic_window_g1

0x6412,	// (0x0002bbdf) popup_snote2_single_graphic_window_g2_ParamLimits

0x6412,	// (0x0002bbdf) popup_snote2_single_graphic_window_g2

0x0001,

0xfca2,	// (0x0003546f) popup_snote2_single_graphic_window_g_ParamLimits

0xfca2,	// (0x0003546f) popup_snote2_single_graphic_window_g

0x643a,	// (0x0002bc07) popup_snote2_single_graphic_window_t1_ParamLimits

0x643a,	// (0x0002bc07) popup_snote2_single_graphic_window_t1

0x6486,	// (0x0002bc53) popup_snote2_single_graphic_window_t2_ParamLimits

0x6486,	// (0x0002bc53) popup_snote2_single_graphic_window_t2

0x6348,	// (0x0002bb15) popup_snote2_single_graphic_window_t3_ParamLimits

0x6348,	// (0x0002bb15) popup_snote2_single_graphic_window_t3

0x6389,	// (0x0002bb56) popup_snote2_single_graphic_window_t4_ParamLimits

0x6389,	// (0x0002bb56) popup_snote2_single_graphic_window_t4

0x63bf,	// (0x0002bb8c) popup_snote2_single_graphic_window_t5_ParamLimits

0x63bf,	// (0x0002bb8c) popup_snote2_single_graphic_window_t5

0x0004,

0xfca7,	// (0x00035474) popup_snote2_single_graphic_window_t_ParamLimits

0xfca7,	// (0x00035474) popup_snote2_single_graphic_window_t

0x4eb2,	// (0x0002a67f) clock_nsta_pane_cp2_t1

0x4eb2,	// (0x0002a67f) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x00035294) clock_nsta_pane_cp2_t

0xeb63,	// (0x00034330) form_field_data_wide_pane_g1_ParamLimits

0xd324,	// (0x00032af1) form_field_data_wide_pane_g2_ParamLimits

0xd324,	// (0x00032af1) form_field_data_wide_pane_g2

0xd330,	// (0x00032afd) form_field_data_wide_pane_g3_ParamLimits

0xd330,	// (0x00032afd) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x00034e4e) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x00034e4e) form_field_data_wide_pane_g

0xbf2c,	// (0x000316f9) grid_touch_3_pane_ParamLimits

0xbf2c,	// (0x000316f9) grid_touch_3_pane

0xc4c9,	// (0x00031c96) cell_touch_3_pane_ParamLimits

0xc4c9,	// (0x00031c96) cell_touch_3_pane

0x53c2,	// (0x0002ab8f) cell_touch_3_pane_g1

0x53c2,	// (0x0002ab8f) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x00035319) cell_touch_3_pane_g

0xceea,	// (0x000326b7) cont_query_data_pane

0xcef2,	// (0x000326bf) cont_query_data_pane_cp1

0x6505,	// (0x0002bcd2) button_value_adjust_pane_cp7

0x650d,	// (0x0002bcda) query_popup_pane_cp3

0x0420,	// (0x00025bed) bg_popup_sub_pane_cp22_ParamLimits

0x0436,	// (0x00025c03) navi_navi_volume_pane_cp2

0x0451,	// (0x00025c1e) popup_side_volume_key_window_g2

0x0460,	// (0x00025c2d) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x00034ee4) popup_side_volume_key_window_g

0x047d,	// (0x00025c4a) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x00034eeb) popup_side_volume_key_window_t

0x087e,	// (0x0002604b) popup_side_volume_key_window_ParamLimits

0x98a5,	// (0x0002f072) list_double_graphic_pane_g4_ParamLimits

0x98a5,	// (0x0002f072) list_double_graphic_pane_g4

0x9e0f,	// (0x0002f5dc) list_single_2heading_msg_pane_ParamLimits

0x9e0f,	// (0x0002f5dc) list_single_2heading_msg_pane

0x9e5b,	// (0x0002f628) list_single_2heading_msg_pane_g1_ParamLimits

0x9e5b,	// (0x0002f628) list_single_2heading_msg_pane_g1

0x9e67,	// (0x0002f634) list_single_2heading_msg_pane_g2_ParamLimits

0x9e67,	// (0x0002f634) list_single_2heading_msg_pane_g2

0x9e7a,	// (0x0002f647) list_single_2heading_msg_pane_g3_ParamLimits

0x9e7a,	// (0x0002f647) list_single_2heading_msg_pane_g3

0x9e86,	// (0x0002f653) list_single_2heading_msg_pane_g4_ParamLimits

0x9e86,	// (0x0002f653) list_single_2heading_msg_pane_g4

0x0003,

0xfcb2,	// (0x0003547f) list_single_2heading_msg_pane_g_ParamLimits

0xfcb2,	// (0x0003547f) list_single_2heading_msg_pane_g

0x9e9e,	// (0x0002f66b) list_single_2heading_msg_pane_t1_ParamLimits

0x9e9e,	// (0x0002f66b) list_single_2heading_msg_pane_t1

0x9ec6,	// (0x0002f693) list_single_2heading_msg_pane_t2_ParamLimits

0x9ec6,	// (0x0002f693) list_single_2heading_msg_pane_t2

0x9f31,	// (0x0002f6fe) list_single_2heading_msg_pane_t3_ParamLimits

0x9f31,	// (0x0002f6fe) list_single_2heading_msg_pane_t3

0xf415,	// (0x00034be2) list_single_2heading_msg_pane_t4_ParamLimits

0xf415,	// (0x00034be2) list_single_2heading_msg_pane_t4

0x0003,

0xfcbb,	// (0x00035488) list_single_2heading_msg_pane_t_ParamLimits

0xfcbb,	// (0x00035488) list_single_2heading_msg_pane_t

0xa220,	// (0x0002f9ed) title_pane_g4_ParamLimits

0xa220,	// (0x0002f9ed) title_pane_g4

0x00ae,	// (0x0002587b) title_pane_stacon_g3_ParamLimits

0x00ae,	// (0x0002587b) title_pane_stacon_g3

0x602e,	// (0x0002b7fb) list_single_2graphic_im_pane_g4_ParamLimits

0x602e,	// (0x0002b7fb) list_single_2graphic_im_pane_g4

0x3e1a,	// (0x000295e7) popup_side_volume_key_window_cp

0x46a6,	// (0x00029e73) main_idle_act2_pane_t1

0x1b69,	// (0x00027336) toolbar_button_pane_g10

0xa5e7,	// (0x0002fdb4) popup_toolbar_window_cp1

0x4ea3,	// (0x0002a670) clock_nsta_pane_cp_t1

0x4ea3,	// (0x0002a670) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0003528f) clock_nsta_pane_cp_t

0x0436,	// (0x00025c03) navi_navi_volume_pane_cp2_ParamLimits

0x0445,	// (0x00025c12) popup_side_volume_key_window_g1_ParamLimits

0x0451,	// (0x00025c1e) popup_side_volume_key_window_g2_ParamLimits

0x0460,	// (0x00025c2d) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x00034ee4) popup_side_volume_key_window_g_ParamLimits

0x1f8e,	// (0x0002775b) fep_hwr_aid_pane

0xc11b,	// (0x000318e8) bg_fep_hwr_top_pane_g4_ParamLimits

0x5423,	// (0x0002abf0) fep_hwr_top_pane_g1_ParamLimits

0x5435,	// (0x0002ac02) fep_hwr_top_pane_g2_ParamLimits

0x2049,	// (0x00027816) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x000352e4) fep_hwr_top_pane_g_ParamLimits

0x205e,	// (0x0002782b) fep_hwr_top_text_pane_ParamLimits

0x3bcf,	// (0x0002939c) aid_touch_tab_arrow_arrow_2

0x3bd8,	// (0x000293a5) aid_touch_tab_arrow_left_2

0x1fa2,	// (0x0002776f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1fd9,	// (0x000277a6) fep_hwr_prediction_pane

0x558b,	// (0x0002ad58) fep_vkb_prediction_pane

0xc294,	// (0x00031a61) fep_vkb_side_pane_g3_ParamLimits

0xc294,	// (0x00031a61) fep_vkb_side_pane_g3

0x563d,	// (0x0002ae0a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5b0b,	// (0x0002b2d8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5b18,	// (0x0002b2e5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x0003538e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6534,	// (0x0002bd01) fep_hwr_prediction_pane_g1

0x2304,	// (0x00027ad1) fep_hwr_prediction_pane_g2

0x230c,	// (0x00027ad9) fep_hwr_prediction_pane_g3

0x2314,	// (0x00027ae1) fep_hwr_prediction_pane_g4

0x0003,

0xfcc4,	// (0x00035491) fep_hwr_prediction_pane_g

0x6534,	// (0x0002bd01) fep_vkb_prediction_pane_g1

0x653e,	// (0x0002bd0b) fep_vkb_prediction_pane_g2

0x6546,	// (0x0002bd13) fep_vkb_prediction_pane_g3

0x654e,	// (0x0002bd1b) fep_vkb_prediction_pane_g4

0x0003,

0xfccd,	// (0x0003549a) fep_vkb_prediction_pane_g

0x40f6,	// (0x000298c3) slider_set_pane_g3

0x410a,	// (0x000298d7) slider_set_pane_g4

0x5b71,	// (0x0002b33e) slider_set_pane_g5

0x40f6,	// (0x000298c3) slider_set_pane_g6

0x1e5e,	// (0x0002762b) slider_set_pane_g7

0x42e8,	// (0x00029ab5) slider_form_pane_g3

0x42f1,	// (0x00029abe) slider_form_pane_g4

0x42f9,	// (0x00029ac6) slider_form_pane_g5

0x42e8,	// (0x00029ab5) slider_form_pane_g6

0xbd95,	// (0x00031562) slider_form_pane_g7

0x495d,	// (0x0002a12a) slider_set_pane_vc_g3

0x4966,	// (0x0002a133) slider_set_pane_vc_g4

0x496f,	// (0x0002a13c) slider_set_pane_vc_g5

0x495d,	// (0x0002a12a) slider_set_pane_vc_g6

0x4978,	// (0x0002a145) slider_set_pane_vc_g7

0x4b50,	// (0x0002a31d) slider_form_pane_vc_g1

0x4b59,	// (0x0002a326) slider_form_pane_vc_g2

0x4b62,	// (0x0002a32f) slider_form_pane_vc_g3

0x4b50,	// (0x0002a31d) slider_form_pane_vc_g4

0x4b6b,	// (0x0002a338) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x00035261) slider_form_pane_vc_g

0xa026,	// (0x0002f7f3) main_idle_act3_pane

0x6556,	// (0x0002bd23) ai3_links_pane

0xc513,	// (0x00031ce0) popup_ai3_data_window_ParamLimits

0xc513,	// (0x00031ce0) popup_ai3_data_window

0xa026,	// (0x0002f7f3) grid_ai3_links_pane

0xc531,	// (0x00031cfe) cell_ai3_links_pane_ParamLimits

0xc531,	// (0x00031cfe) cell_ai3_links_pane

0x6597,	// (0x0002bd64) bg_popup_sub_pane_cp11

0x65a4,	// (0x0002bd71) cell_ai3_links_pane_g1

0xa026,	// (0x0002f7f3) bg_popup_sub_pane_cp12

0x65c9,	// (0x0002bd96) heading_ai3_data_pane

0x65d1,	// (0x0002bd9e) list_ai3_gene_pane

0x65dd,	// (0x0002bdaa) popup_ai3_data_window_g1

0x65e5,	// (0x0002bdb2) heading_ai3_data_pane_g1

0x65ed,	// (0x0002bdba) heading_ai3_data_pane_t1

0x65fb,	// (0x0002bdc8) list_double_ai3_gene_pane_ParamLimits

0x65fb,	// (0x0002bdc8) list_double_ai3_gene_pane

0x6608,	// (0x0002bdd5) list_single_ai3_gene_pane_ParamLimits

0x6608,	// (0x0002bdd5) list_single_ai3_gene_pane

0x5387,	// (0x0002ab54) list_highlight_pane_cp7_ParamLimits

0x5387,	// (0x0002ab54) list_highlight_pane_cp7

0x6615,	// (0x0002bde2) list_single_a13_gene_pane_t1_ParamLimits

0x6615,	// (0x0002bde2) list_single_a13_gene_pane_t1

0x662c,	// (0x0002bdf9) list_single_ai3_gene_pane_g1

0x6635,	// (0x0002be02) list_single_ai3_gene_pane_g2

0x0001,

0xfcd6,	// (0x000354a3) list_single_ai3_gene_pane_g

0x663d,	// (0x0002be0a) list_double_ai3_gene_pane_g1_ParamLimits

0x663d,	// (0x0002be0a) list_double_ai3_gene_pane_g1

0x6649,	// (0x0002be16) list_double_ai3_gene_pane_t1_ParamLimits

0x6649,	// (0x0002be16) list_double_ai3_gene_pane_t1

0x6665,	// (0x0002be32) list_double_ai3_gene_pane_t2_ParamLimits

0x6665,	// (0x0002be32) list_double_ai3_gene_pane_t2

0x667a,	// (0x0002be47) list_double_ai3_gene_pane_t3_ParamLimits

0x667a,	// (0x0002be47) list_double_ai3_gene_pane_t3

0x0002,

0xfcdb,	// (0x000354a8) list_double_ai3_gene_pane_t_ParamLimits

0xfcdb,	// (0x000354a8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf40b,	// (0x00034bd8) aid_size_min_col_2

0xc4fd,	// (0x00031cca) aid_size_min_msg_ParamLimits

0xc4fd,	// (0x00031cca) aid_size_min_msg

0xc2a8,	// (0x00031a75) fep_vkb_top_text_pane_g2_ParamLimits

0xc2a8,	// (0x00031a75) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x00035314) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x00035314) fep_vkb_top_text_pane_g

0xa026,	// (0x0002f7f3) main_hc_apps_shell_pane

0x6697,	// (0x0002be64) grid_hc_apps_pane_ParamLimits

0x6697,	// (0x0002be64) grid_hc_apps_pane

0x66a6,	// (0x0002be73) list_hc_apps_pane

0x66ae,	// (0x0002be7b) scroll_pane_cp37_ParamLimits

0x66ae,	// (0x0002be7b) scroll_pane_cp37

0xc54b,	// (0x00031d18) cell_hc_apps_pane_ParamLimits

0xc54b,	// (0x00031d18) cell_hc_apps_pane

0xc615,	// (0x00031de2) cell_hc_apps_pane_g1_ParamLimits

0xc615,	// (0x00031de2) cell_hc_apps_pane_g1

0x67a3,	// (0x0002bf70) cell_hc_apps_pane_g2_ParamLimits

0x67a3,	// (0x0002bf70) cell_hc_apps_pane_g2

0x67bf,	// (0x0002bf8c) cell_hc_apps_pane_g3_ParamLimits

0x67bf,	// (0x0002bf8c) cell_hc_apps_pane_g3

0x0002,

0xfce2,	// (0x000354af) cell_hc_apps_pane_g_ParamLimits

0xfce2,	// (0x000354af) cell_hc_apps_pane_g

0xc642,	// (0x00031e0f) cell_hc_apps_pane_t1_ParamLimits

0xc642,	// (0x00031e0f) cell_hc_apps_pane_t1

0xce34,	// (0x00032601) grid_highlight_pane_cp10_ParamLimits

0xce34,	// (0x00032601) grid_highlight_pane_cp10

0xc682,	// (0x00031e4f) list_single_hc_apps_pane_ParamLimits

0xc682,	// (0x00031e4f) list_single_hc_apps_pane

0xc6bc,	// (0x00031e89) list_single_hc_apps_pane_g1

0x9f9f,	// (0x0002f76c) list_single_hc_apps_pane_g2

0x0001,

0xfce9,	// (0x000354b6) list_single_hc_apps_pane_g

0x9fb8,	// (0x0002f785) list_single_hc_apps_pane_g2_copy1

0x9fd4,	// (0x0002f7a1) list_single_hc_apps_pane_t1

0xcd01,	// (0x000324ce) bg_set_opt_pane_cp_ParamLimits

0xf4cb,	// (0x00034c98) setting_slider_pane_t1_ParamLimits

0xf4e4,	// (0x00034cb1) setting_slider_pane_t2_ParamLimits

0xf4fe,	// (0x00034ccb) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00034d31) setting_slider_pane_t_ParamLimits

0xf516,	// (0x00034ce3) slider_set_pane_ParamLimits

0x0ec1,	// (0x0002668e) control_pane_g5_ParamLimits

0x0ec1,	// (0x0002668e) control_pane_g5

0x40e9,	// (0x000298b6) slider_set_pane_g1_ParamLimits

0x1e52,	// (0x0002761f) slider_set_pane_g2_ParamLimits

0x40f6,	// (0x000298c3) slider_set_pane_g3_ParamLimits

0x410a,	// (0x000298d7) slider_set_pane_g4_ParamLimits

0x5b71,	// (0x0002b33e) slider_set_pane_g5_ParamLimits

0x40f6,	// (0x000298c3) slider_set_pane_g6_ParamLimits

0x1e5e,	// (0x0002762b) slider_set_pane_g7_ParamLimits

0xf965,	// (0x00035132) slider_set_pane_g_ParamLimits

0x0963,	// (0x00026130) navi_icon_text_pane_ParamLimits

0xb2fa,	// (0x00030ac7) aid_fill_nsta_2_ParamLimits

0xb333,	// (0x00030b00) aid_touch_tab_arrow_left_ParamLimits

0xb349,	// (0x00030b16) aid_touch_tab_arrow_right_ParamLimits

0xb3e4,	// (0x00030bb1) clock_nsta_pane_ParamLimits

0xbaac,	// (0x00031279) navi_icon_pane_g1_ParamLimits

0xbab8,	// (0x00031285) navi_text_pane_t1_ParamLimits

0xc006,	// (0x000317d3) navi_icon_text_pane_g1_ParamLimits

0xc012,	// (0x000317df) navi_icon_text_pane_t1_ParamLimits

0xc6bc,	// (0x00031e89) list_single_hc_apps_pane_g1_ParamLimits

0x9f9f,	// (0x0002f76c) list_single_hc_apps_pane_g2_ParamLimits

0xfce9,	// (0x000354b6) list_single_hc_apps_pane_g_ParamLimits

0x9fb8,	// (0x0002f785) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9fd4,	// (0x0002f7a1) list_single_hc_apps_pane_t1_ParamLimits

0xa17e,	// (0x0002f94b) popup_toolbar2_fixed_window_ParamLimits

0xa17e,	// (0x0002f94b) popup_toolbar2_fixed_window

0xb25f,	// (0x00030a2c) popup_toolbar2_float_window

0xa026,	// (0x0002f7f3) bg_popup_sub_pane_cp27

0x6879,	// (0x0002c046) grid_toolbar2_float_pane

0xa026,	// (0x0002f7f3) bg_popup_sub_pane_cp26

0x6879,	// (0x0002c046) grid_toolbar2_fixed_pane

0xc6d5,	// (0x00031ea2) cell_toolbar2_fixed_pane_ParamLimits

0xc6d5,	// (0x00031ea2) cell_toolbar2_fixed_pane

0xc6f2,	// (0x00031ebf) cell_toolbar2_fixed_pane_g1

0x689a,	// (0x0002c067) toolbar2_fixed_button_pane

0x2d5a,	// (0x00028527) toolbar2_fixed_button_pane_g1

0x2d62,	// (0x0002852f) toolbar2_fixed_button_pane_g2

0x2d6a,	// (0x00028537) toolbar2_fixed_button_pane_g3

0x2d72,	// (0x0002853f) toolbar2_fixed_button_pane_g4

0x2d7a,	// (0x00028547) toolbar2_fixed_button_pane_g5

0x2d82,	// (0x0002854f) toolbar2_fixed_button_pane_g6

0x2d8a,	// (0x00028557) toolbar2_fixed_button_pane_g7

0x2d92,	// (0x0002855f) toolbar2_fixed_button_pane_g8

0x2d9a,	// (0x00028567) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x00035034) toolbar2_fixed_button_pane_g

0x68a2,	// (0x0002c06f) cell_toolbar2_float_pane_ParamLimits

0x68a2,	// (0x0002c06f) cell_toolbar2_float_pane

0x68b3,	// (0x0002c080) cell_toolbar2_float_pane_g1

0x689a,	// (0x0002c067) toolbar2_fixed_button_pane_cp

0xc190,	// (0x0003195d) fep_vkb_accented_list_pane_ParamLimits

0xc190,	// (0x0003195d) fep_vkb_accented_list_pane

0x21c0,	// (0x0002798d) bg_popup_fep_shadow_pane_g9

0x0ae7,	// (0x000262b4) bg_popup_fep_shadow_pane_cp3

0xd429,	// (0x00032bf6) list_accented_list_pane

0x68bc,	// (0x0002c089) list_single_accented_list_pane_ParamLimits

0x68bc,	// (0x0002c089) list_single_accented_list_pane

0x0ae7,	// (0x000262b4) list_highlight_pane_cp10

0x68cd,	// (0x0002c09a) list_single_accented_list_pane_t1

0xb17b,	// (0x00030948) popup_slider_window_ParamLimits

0xb17b,	// (0x00030948) popup_slider_window

0x6515,	// (0x0002bce2) aid_indentation_list_msg

0xd875,	// (0x00033042) bg_popup_window_pane_cp19

0x6a07,	// (0x0002c1d4) popup_slider_window_g1

0x6a23,	// (0x0002c1f0) popup_slider_window_g2

0x6a3f,	// (0x0002c20c) popup_slider_window_g3

0x0005,

0xfcee,	// (0x000354bb) popup_slider_window_g

0x6a9b,	// (0x0002c268) popup_slider_window_t1

0x6b0f,	// (0x0002c2dc) small_volume_slider_vertical_pane

0x53c2,	// (0x0002ab8f) small_volume_slider_vertical_pane_g1

0x53c2,	// (0x0002ab8f) small_volume_slider_vertical_pane_g2

0x6b2b,	// (0x0002c2f8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd00,	// (0x000354cd) small_volume_slider_vertical_pane_g

0xa0de,	// (0x0002f8ab) area_side_right_pane_ParamLimits

0xa0de,	// (0x0002f8ab) area_side_right_pane

0xc7fd,	// (0x00031fca) aid_size_side_button_ParamLimits

0xc7fd,	// (0x00031fca) aid_size_side_button

0xc816,	// (0x00031fe3) grid_sctrl_middle_pane_ParamLimits

0xc816,	// (0x00031fe3) grid_sctrl_middle_pane

0x2350,	// (0x00027b1d) sctrl_sk_bottom_pane

0x2361,	// (0x00027b2e) sctrl_sk_top_pane

0x2373,	// (0x00027b40) aid_touch_sctrl_top

0xce34,	// (0x00032601) bg_sctrl_sk_pane_ParamLimits

0xce34,	// (0x00032601) bg_sctrl_sk_pane

0x2380,	// (0x00027b4d) sctrl_sk_top_pane_g1

0x238d,	// (0x00027b5a) sctrl_sk_top_pane_t1

0x2373,	// (0x00027b40) aid_touch_sctrl_bottom

0xce34,	// (0x00032601) bg_sctrl_sk_pane_cp_ParamLimits

0xce34,	// (0x00032601) bg_sctrl_sk_pane_cp

0x23a8,	// (0x00027b75) sctrl_sk_bottom_pane_g1

0x238d,	// (0x00027b5a) sctrl_sk_bottom_pane_t1

0xc830,	// (0x00031ffd) cell_sctrl_middle_pane_ParamLimits

0xc830,	// (0x00031ffd) cell_sctrl_middle_pane

0xc843,	// (0x00032010) aid_touch_sctrl_middle_ParamLimits

0xc843,	// (0x00032010) aid_touch_sctrl_middle

0xc850,	// (0x0003201d) bg_sctrl_middle_pane_ParamLimits

0xc850,	// (0x0003201d) bg_sctrl_middle_pane

0x6bb6,	// (0x0002c383) cell_sctrl_middle_pane_g1_ParamLimits

0x6bb6,	// (0x0002c383) cell_sctrl_middle_pane_g1

0xc85e,	// (0x0003202b) cell_sctrl_middle_pane_g2_ParamLimits

0xc85e,	// (0x0003202b) cell_sctrl_middle_pane_g2

0x0001,

0xfd0c,	// (0x000354d9) cell_sctrl_middle_pane_g_ParamLimits

0xfd0c,	// (0x000354d9) cell_sctrl_middle_pane_g

0x2d5a,	// (0x00028527) bg_sctrl_middle_pane_g1

0x2d62,	// (0x0002852f) bg_sctrl_middle_pane_g2

0x2d6a,	// (0x00028537) bg_sctrl_middle_pane_g3

0x2d72,	// (0x0002853f) bg_sctrl_middle_pane_g4

0x2d7a,	// (0x00028547) bg_sctrl_middle_pane_g5

0x2d82,	// (0x0002854f) bg_sctrl_middle_pane_g6

0x2d8a,	// (0x00028557) bg_sctrl_middle_pane_g7

0x2d92,	// (0x0002855f) bg_sctrl_middle_pane_g8

0x0007,

0xfd11,	// (0x000354de) bg_sctrl_middle_pane_g

0x2d9a,	// (0x00028567) bg_sctrl_middle_pane_g8_copy1

0x2d5a,	// (0x00028527) bg_sctrl_sk_pane_g1

0x2d62,	// (0x0002852f) bg_sctrl_sk_pane_g2

0x2d6a,	// (0x00028537) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x00035034) bg_sctrl_sk_pane_g

0xd24f,	// (0x00032a1c) aid_size_touch_scroll_bar

0x2d72,	// (0x0002853f) bg_sctrl_sk_pane_g4

0x2d7a,	// (0x00028547) bg_sctrl_sk_pane_g5

0x2d82,	// (0x0002854f) bg_sctrl_sk_pane_g6

0x2d8a,	// (0x00028557) bg_sctrl_sk_pane_g7

0x2d92,	// (0x0002855f) bg_sctrl_sk_pane_g8

0x2d9a,	// (0x00028567) bg_sctrl_sk_pane_g9

0x1102,	// (0x000268cf) popup_fep_china_hwr2_fs_candidate_window

0xac33,	// (0x00030400) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xac33,	// (0x00030400) popup_fep_china_hwr2_fs_control_window

0x563d,	// (0x0002ae0a) sctrl_sk_top_pane_g2

0x0001,

0xfd07,	// (0x000354d4) sctrl_sk_top_pane_g

0xd92d,	// (0x000330fa) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd92d,	// (0x000330fa) aid_fep_china_hwr2_fs_cell

0xd943,	// (0x00033110) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd943,	// (0x00033110) bg_popup_fep_shadow_pane_cp4

0xd95a,	// (0x00033127) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd95a,	// (0x00033127) bg_popup_fep_shadow_pane_cp5

0xd96c,	// (0x00033139) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd96c,	// (0x00033139) popup_fep_china_hwr2_fs_control_bar_grid

0xd980,	// (0x0003314d) popup_fep_china_hwr2_fs_control_funtion_grid

0x6b8a,	// (0x0002c357) aid_fep_china_hwr2_fs_candi_cell

0xa026,	// (0x0002f7f3) bg_popup_fep_shadow_pane_cp6

0x6b94,	// (0x0002c361) popup_fep_china_hwr2_fs_candidate_grid

0xd988,	// (0x00033155) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd988,	// (0x00033155) cell_fep_china_hwr2_fs_funtion_grid

0x53c2,	// (0x0002ab8f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6bb6,	// (0x0002c383) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6bb6,	// (0x0002c383) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6bc4,	// (0x0002c391) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6bc4,	// (0x0002c391) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd22,	// (0x000354ef) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd22,	// (0x000354ef) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9a0,	// (0x0003316d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9a0,	// (0x0003316d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd9b5,	// (0x00033182) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd9b5,	// (0x00033182) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd27,	// (0x000354f4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd27,	// (0x000354f4) cell_fep_china_hwr2_fs_funtion_grid_t

0x6c0b,	// (0x0002c3d8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6c13,	// (0x0002c3e0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6c1b,	// (0x0002c3e8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2c,	// (0x000354f9) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6c23,	// (0x0002c3f0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6c23,	// (0x0002c3f0) cell_fep_china_hwr2_fs_candidate_grid

0x6c42,	// (0x0002c40f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6c4a,	// (0x0002c417) popup_fep_china_hwr2_fs_candidate_grid_g21

0x53c2,	// (0x0002ab8f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x53c2,	// (0x0002ab8f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x00035319) cell_fep_china_hwr2_fs_candidate_grid_g

0x6c52,	// (0x0002c41f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1771,	// (0x00026f3e) clock_nsta_pane_cp_24_ParamLimits

0x1771,	// (0x00026f3e) clock_nsta_pane_cp_24

0x17f1,	// (0x00026fbe) indicator_nsta_pane_cp_24_ParamLimits

0x17f1,	// (0x00026fbe) indicator_nsta_pane_cp_24

0x3a2d,	// (0x000291fa) heading_pane_g1

0x0001,

0xf8cc,	// (0x00035099) heading_pane_g

0x44ed,	// (0x00029cba) grid_sct_catagory_button_pane

0x451f,	// (0x00029cec) scroll_pane_cp5_ParamLimits

0x500e,	// (0x0002a7db) button_value_adjust_pane_cp5_ParamLimits

0x500e,	// (0x0002a7db) button_value_adjust_pane_cp5

0x50f3,	// (0x0002a8c0) form2_midp_time_pane_ParamLimits

0x6c60,	// (0x0002c42d) cell_sct_catagory_button_pane_ParamLimits

0x6c60,	// (0x0002c42d) cell_sct_catagory_button_pane

0x5387,	// (0x0002ab54) bg_button_pane_cp01_ParamLimits

0x5387,	// (0x0002ab54) bg_button_pane_cp01

0x53c2,	// (0x0002ab8f) cell_sct_catagory_button_pane_g1

0xb1fc,	// (0x000309c9) popup_tb_extension_window

0xd9d1,	// (0x0003319e) aid_size_cell_ext_ParamLimits

0xd9d1,	// (0x0003319e) aid_size_cell_ext

0xd091,	// (0x0003285e) bg_tb_trans_pane_cp1_ParamLimits

0xd091,	// (0x0003285e) bg_tb_trans_pane_cp1

0xd9f7,	// (0x000331c4) grid_tb_ext_pane_ParamLimits

0xd9f7,	// (0x000331c4) grid_tb_ext_pane

0xda37,	// (0x00033204) cell_tb_ext_pane_ParamLimits

0xda37,	// (0x00033204) cell_tb_ext_pane

0xda5f,	// (0x0003322c) cell_tb_ext_pane_g1_ParamLimits

0xda5f,	// (0x0003322c) cell_tb_ext_pane_g1

0x6cf6,	// (0x0002c4c3) cell_tb_ext_pane_t1

0xce34,	// (0x00032601) list_highlight_pane_cp11_ParamLimits

0xce34,	// (0x00032601) list_highlight_pane_cp11

0xf454,	// (0x00034c21) popup_uni_indicator_window_ParamLimits

0xf454,	// (0x00034c21) popup_uni_indicator_window

0xd316,	// (0x00032ae3) bg_popup_sub_pane_cp14

0x6d11,	// (0x0002c4de) list_uniindi_pane

0x6d1d,	// (0x0002c4ea) uniindi_top_pane

0xce34,	// (0x00032601) bg_uniindi_top_pane

0x6d3e,	// (0x0002c50b) uniindi_top_pane_g1

0x6d54,	// (0x0002c521) uniindi_top_pane_g2

0x0003,

0xfd33,	// (0x00035500) uniindi_top_pane_g

0x6d7e,	// (0x0002c54b) uniindi_top_pane_t1

0x6daa,	// (0x0002c577) list_single_uniindi_pane_ParamLimits

0x6daa,	// (0x0002c577) list_single_uniindi_pane

0x53c2,	// (0x0002ab8f) bg_uniindi_top_pane_g1

0x6dbc,	// (0x0002c589) list_single_uniindi_pane_g1

0x6dcf,	// (0x0002c59c) list_single_uniindi_pane_t1

0xa026,	// (0x0002f7f3) control_bg_pane

0x6df4,	// (0x0002c5c1) bg_sctrl_sk_pane_cp1

0x6dfd,	// (0x0002c5ca) bg_sctrl_sk_pane_cp2

0x6e06,	// (0x0002c5d3) control_bg_pane_g1

0x6e0f,	// (0x0002c5dc) control_bg_pane_g2

0x0001,

0xfd3c,	// (0x00035509) control_bg_pane_g

0x4e35,	// (0x0002a602) cell_indicator_nsta_pane_g1_ParamLimits

0xbf5f,	// (0x0003172c) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0003527d) cell_indicator_nsta_pane_g_ParamLimits

0xf02f,	// (0x000347fc) form2_midp_time_pane_t1_ParamLimits

0x8835,	// (0x0002e002) main_idle_act4_pane_ParamLimits

0x8835,	// (0x0002e002) main_idle_act4_pane

0xb1fc,	// (0x000309c9) popup_tb_extension_window_ParamLimits

0xda1f,	// (0x000331ec) tb_ext_find_pane_ParamLimits

0xda1f,	// (0x000331ec) tb_ext_find_pane

0x6e18,	// (0x0002c5e5) ai_gene_pane_1_cp1

0x0c24,	// (0x000263f1) ai_gene_pane_2_cp1

0x6e20,	// (0x0002c5ed) list_single_idle_plugin_calendar_pane

0x6e29,	// (0x0002c5f6) list_single_idle_plugin_notification_pane

0x6e32,	// (0x0002c5ff) list_single_idle_plugin_player_pane

0xda7c,	// (0x00033249) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda7c,	// (0x00033249) list_single_idle_plugin_shortcut_pane

0xdaa4,	// (0x00033271) main_idle_act4_pane_t1

0xdabc,	// (0x00033289) main_idle_act4_pane_t2

0x0001,

0xfd41,	// (0x0003550e) main_idle_act4_pane_t

0xdad4,	// (0x000332a1) middle_sk_idle_act4_pane_ParamLimits

0xdad4,	// (0x000332a1) middle_sk_idle_act4_pane

0xdaf0,	// (0x000332bd) popup_clock_digital_analogue_window_cp2

0xdb17,	// (0x000332e4) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb17,	// (0x000332e4) shortcut_wheel_idle_act4_pane

0x53c2,	// (0x0002ab8f) shortcut_wheel_idle_act4_pane_g1

0x53c2,	// (0x0002ab8f) shortcut_wheel_idle_act4_pane_g2

0x53c2,	// (0x0002ab8f) shortcut_wheel_idle_act4_pane_g3

0x53c2,	// (0x0002ab8f) shortcut_wheel_idle_act4_pane_g4

0x53c2,	// (0x0002ab8f) shortcut_wheel_idle_act4_pane_g5

0x6ec5,	// (0x0002c692) shortcut_wheel_idle_act4_pane_g6

0x6ecd,	// (0x0002c69a) shortcut_wheel_idle_act4_pane_g7

0x6ed5,	// (0x0002c6a2) shortcut_wheel_idle_act4_pane_g8

0x6edd,	// (0x0002c6aa) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd46,	// (0x00035513) shortcut_wheel_idle_act4_pane_g

0xc11b,	// (0x000318e8) middle_sk_idle_act4_pane_g1_ParamLimits

0xc11b,	// (0x000318e8) middle_sk_idle_act4_pane_g1

0xdb94,	// (0x00033361) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb94,	// (0x00033361) middle_sk_idle_act4_pane_g2

0x0001,

0xfd69,	// (0x00035536) middle_sk_idle_act4_pane_g_ParamLimits

0xfd69,	// (0x00035536) middle_sk_idle_act4_pane_g

0xdbac,	// (0x00033379) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbac,	// (0x00033379) middle_sk_idle_act4_pane_t1

0xdbdb,	// (0x000333a8) grid_ai_shortcut_pane_ParamLimits

0xdbdb,	// (0x000333a8) grid_ai_shortcut_pane

0xdbf8,	// (0x000333c5) list_highlight_pane_cp16_ParamLimits

0xdbf8,	// (0x000333c5) list_highlight_pane_cp16

0xdc05,	// (0x000333d2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc05,	// (0x000333d2) list_single_idle_plugin_shortcut_pane_g1

0xdc11,	// (0x000333de) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc11,	// (0x000333de) list_single_idle_plugin_shortcut_pane_g2

0xdc2f,	// (0x000333fc) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc2f,	// (0x000333fc) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6e,	// (0x0003553b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6e,	// (0x0003553b) list_single_idle_plugin_shortcut_pane_g

0xdc44,	// (0x00033411) cell_ai_shortcut_pane_ParamLimits

0xdc44,	// (0x00033411) cell_ai_shortcut_pane

0xdc5a,	// (0x00033427) cell_ai_shortcut_pane_g1_ParamLimits

0xdc5a,	// (0x00033427) cell_ai_shortcut_pane_g1

0x6e18,	// (0x0002c5e5) ai_gene_pane_1_cp2

0x700e,	// (0x0002c7db) ai_gene_pane_2_cp2

0x7016,	// (0x0002c7e3) list_highlight_pane_cp15

0x701f,	// (0x0002c7ec) list_single_idle_plugin_calendar_pane_g1

0x7016,	// (0x0002c7e3) list_highlight_pane_cp17

0x7027,	// (0x0002c7f4) list_single_idle_plugin_calendar_pane_g1_copy1

0x702f,	// (0x0002c7fc) list_single_idle_plugin_player_pane_g1

0x4754,	// (0x00029f21) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd75,	// (0x00035542) list_single_idle_plugin_player_pane_g

0x7037,	// (0x0002c804) list_single_idle_plugin_player_pane_t1

0x7045,	// (0x0002c812) list_single_idle_plugin_player_pane_t2

0x7053,	// (0x0002c820) list_single_idle_plugin_player_pane_t3

0x7061,	// (0x0002c82e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7a,	// (0x00035547) list_single_idle_plugin_player_pane_t

0x706f,	// (0x0002c83c) wait_bar_pane_cp15

0x7077,	// (0x0002c844) grid_ai_notification_pane

0x4754,	// (0x00029f21) list_single_idle_plugin_notification_pane_g1

0xdc7c,	// (0x00033449) cell_ai_notification_pane_ParamLimits

0xdc7c,	// (0x00033449) cell_ai_notification_pane

0x708d,	// (0x0002c85a) cell_ai_notification_pane_g1

0x7095,	// (0x0002c862) cell_ai_notification_pane_t1

0xdc89,	// (0x00033456) tb_ext_find_button_pane

0xdc91,	// (0x0003345e) tb_ext_find_pane_g1

0xdc99,	// (0x00033466) tb_ext_find_pane_t1

0xd7f8,	// (0x00032fc5) tb_ext_find_button_pane_g1

0x70c1,	// (0x0002c88e) tb_ext_find_button_pane_g2

0x0001,

0xfd83,	// (0x00035550) tb_ext_find_button_pane_g

0xdaa4,	// (0x00033271) main_idle_act4_pane_t1_ParamLimits

0xdabc,	// (0x00033289) main_idle_act4_pane_t2_ParamLimits

0xfd41,	// (0x0003550e) main_idle_act4_pane_t_ParamLimits

0xdaf0,	// (0x000332bd) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb07,	// (0x000332d4) sat_plugin_idle_act4_pane_ParamLimits

0xdb07,	// (0x000332d4) sat_plugin_idle_act4_pane

0xdca7,	// (0x00033474) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdca7,	// (0x00033474) sat_plugin_idle_act4_pane_t1

0xdcbf,	// (0x0003348c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcbf,	// (0x0003348c) sat_plugin_idle_act4_pane_t2

0xdcd7,	// (0x000334a4) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdcd7,	// (0x000334a4) sat_plugin_idle_act4_pane_t3

0xdcef,	// (0x000334bc) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdcef,	// (0x000334bc) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd88,	// (0x00035555) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd88,	// (0x00035555) sat_plugin_idle_act4_pane_t

0xf22c,	// (0x000349f9) popup_battery_window_ParamLimits

0xf22c,	// (0x000349f9) popup_battery_window

0xce34,	// (0x00032601) bg_popup_sub_pane_cp25_ParamLimits

0xce34,	// (0x00032601) bg_popup_sub_pane_cp25

0x7116,	// (0x0002c8e3) popup_battery_window_g1_ParamLimits

0x7116,	// (0x0002c8e3) popup_battery_window_g1

0x7122,	// (0x0002c8ef) popup_battery_window_t1_ParamLimits

0x7122,	// (0x0002c8ef) popup_battery_window_t1

0x7134,	// (0x0002c901) popup_battery_window_t2_ParamLimits

0x7134,	// (0x0002c901) popup_battery_window_t2

0x0001,

0xfd91,	// (0x0003555e) popup_battery_window_t_ParamLimits

0xfd91,	// (0x0003555e) popup_battery_window_t

0xa966,	// (0x00030133) midp_canvas_pane_ParamLimits

0xa9c1,	// (0x0003018e) midp_keypad_pane_ParamLimits

0xa9c1,	// (0x0003018e) midp_keypad_pane

0x1054,	// (0x00026821) main_midp_pane_ParamLimits

0x4ec1,	// (0x0002a68e) signal_pane_g2_cp_ParamLimits

0xdd07,	// (0x000334d4) aid_size_cell_midp_keypad_ParamLimits

0xdd07,	// (0x000334d4) aid_size_cell_midp_keypad

0xdd25,	// (0x000334f2) midp_keyp_game_grid_pane_ParamLimits

0xdd25,	// (0x000334f2) midp_keyp_game_grid_pane

0xdd4c,	// (0x00033519) midp_keyp_rocker_pane_ParamLimits

0xdd4c,	// (0x00033519) midp_keyp_rocker_pane

0xdd8b,	// (0x00033558) midp_keyp_sk_left_pane_ParamLimits

0xdd8b,	// (0x00033558) midp_keyp_sk_left_pane

0xdddf,	// (0x000335ac) midp_keyp_sk_right_pane_ParamLimits

0xdddf,	// (0x000335ac) midp_keyp_sk_right_pane

0xa026,	// (0x0002f7f3) bg_button_pane_cp03

0xde33,	// (0x00033600) midp_keyp_sk_left_pane_g1

0xa026,	// (0x0002f7f3) bg_button_pane_cp04

0xde33,	// (0x00033600) midp_keyp_sk_right_pane_g1

0x53c2,	// (0x0002ab8f) midp_keyp_rocker_pane_g1

0xde3c,	// (0x00033609) keyp_game_cell_pane_ParamLimits

0xde3c,	// (0x00033609) keyp_game_cell_pane

0xa026,	// (0x0002f7f3) bg_button_pane_cp02

0xde62,	// (0x0003362f) keyp_game_cell_pane_g1

0xa12a,	// (0x0002f8f7) popup_fep_vkb2_window_ParamLimits

0xa12a,	// (0x0002f8f7) popup_fep_vkb2_window

0xc86a,	// (0x00032037) aid_size_cell_vkb2_ParamLimits

0xc86a,	// (0x00032037) aid_size_cell_vkb2

0xc8a0,	// (0x0003206d) popup_fep_vkb2_window_g1_ParamLimits

0xc8a0,	// (0x0003206d) popup_fep_vkb2_window_g1

0xc8f0,	// (0x000320bd) vkb2_area_bottom_pane_ParamLimits

0xc8f0,	// (0x000320bd) vkb2_area_bottom_pane

0xc94c,	// (0x00032119) vkb2_area_keypad_pane_ParamLimits

0xc94c,	// (0x00032119) vkb2_area_keypad_pane

0xc99a,	// (0x00032167) vkb2_area_top_pane_ParamLimits

0xc99a,	// (0x00032167) vkb2_area_top_pane

0xca20,	// (0x000321ed) vkb2_top_entry_pane_ParamLimits

0xca20,	// (0x000321ed) vkb2_top_entry_pane

0xca4d,	// (0x0003221a) vkb2_top_grid_left_pane_ParamLimits

0xca4d,	// (0x0003221a) vkb2_top_grid_left_pane

0xca6d,	// (0x0003223a) vkb2_top_grid_right_pane_ParamLimits

0xca6d,	// (0x0003223a) vkb2_top_grid_right_pane

0x2614,	// (0x00027de1) vkb2_cell_keypad_pane_ParamLimits

0x2614,	// (0x00027de1) vkb2_cell_keypad_pane

0xcab3,	// (0x00032280) vkb2_area_bottom_grid_pane_ParamLimits

0xcab3,	// (0x00032280) vkb2_area_bottom_grid_pane

0xcadd,	// (0x000322aa) vkb2_area_bottom_pane_g1_ParamLimits

0xcadd,	// (0x000322aa) vkb2_area_bottom_pane_g1

0xcb03,	// (0x000322d0) vkb2_area_bottom_pane_g2_ParamLimits

0xcb03,	// (0x000322d0) vkb2_area_bottom_pane_g2

0xcb34,	// (0x00032301) vkb2_area_bottom_pane_g3_ParamLimits

0xcb34,	// (0x00032301) vkb2_area_bottom_pane_g3

0x0002,

0xfd96,	// (0x00035563) vkb2_area_bottom_pane_g_ParamLimits

0xfd96,	// (0x00035563) vkb2_area_bottom_pane_g

0x27be,	// (0x00027f8b) vkb2_top_cell_left_pane_ParamLimits

0x27be,	// (0x00027f8b) vkb2_top_cell_left_pane

0xde6b,	// (0x00033638) vkb2_top_entry_pane_g1_ParamLimits

0xde6b,	// (0x00033638) vkb2_top_entry_pane_g1

0xde79,	// (0x00033646) vkb2_top_entry_pane_t1_ParamLimits

0xde79,	// (0x00033646) vkb2_top_entry_pane_t1

0x72d7,	// (0x0002caa4) vkb2_top_entry_pane_t2_ParamLimits

0x72d7,	// (0x0002caa4) vkb2_top_entry_pane_t2

0x7309,	// (0x0002cad6) vkb2_top_entry_pane_t3_ParamLimits

0x7309,	// (0x0002cad6) vkb2_top_entry_pane_t3

0x0002,

0xfd9d,	// (0x0003556a) vkb2_top_entry_pane_t_ParamLimits

0xfd9d,	// (0x0003556a) vkb2_top_entry_pane_t

0xcb9e,	// (0x0003236b) vkb2_top_grid_right_pane_g1_ParamLimits

0xcb9e,	// (0x0003236b) vkb2_top_grid_right_pane_g1

0x2821,	// (0x00027fee) vkb2_top_grid_right_pane_g2_ParamLimits

0x2821,	// (0x00027fee) vkb2_top_grid_right_pane_g2

0x2839,	// (0x00028006) vkb2_top_grid_right_pane_g3_ParamLimits

0x2839,	// (0x00028006) vkb2_top_grid_right_pane_g3

0xcbb4,	// (0x00032381) vkb2_top_grid_right_pane_g4_ParamLimits

0xcbb4,	// (0x00032381) vkb2_top_grid_right_pane_g4

0x0003,

0xfda4,	// (0x00035571) vkb2_top_grid_right_pane_g_ParamLimits

0xfda4,	// (0x00035571) vkb2_top_grid_right_pane_g

0x2867,	// (0x00028034) vkb2_top_cell_left_pane_g1

0x287e,	// (0x0002804b) vkb2_cell_keypad_pane_g1_ParamLimits

0x287e,	// (0x0002804b) vkb2_cell_keypad_pane_g1

0x732d,	// (0x0002cafa) vkb2_cell_keypad_pane_t1_ParamLimits

0x732d,	// (0x0002cafa) vkb2_cell_keypad_pane_t1

0x288c,	// (0x00028059) vkb2_cell_bottom_grid_pane_ParamLimits

0x288c,	// (0x00028059) vkb2_cell_bottom_grid_pane

0x28c5,	// (0x00028092) vkb2_cell_bottom_grid_pane_g1

0xdb38,	// (0x00033305) aid_call2_pane_cp02

0xdb40,	// (0x0003330d) aid_call_pane_cp02

0xdb48,	// (0x00033315) clock_digital_number_pane_cp10

0xdb50,	// (0x0003331d) clock_digital_number_pane_cp11

0xdb58,	// (0x00033325) clock_digital_number_pane_cp12

0xdb60,	// (0x0003332d) clock_digital_number_pane_cp13

0xdb68,	// (0x00033335) clock_digital_separator_pane_cp10

0xd7f8,	// (0x00032fc5) popup_clock_digital_analogue_window_cp2_g1

0xd7f8,	// (0x00032fc5) popup_clock_digital_analogue_window_cp2_g2

0xdb70,	// (0x0003333d) popup_clock_digital_analogue_window_cp2_g3

0xd7f8,	// (0x00032fc5) popup_clock_digital_analogue_window_cp2_g4

0xdb70,	// (0x0003333d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd59,	// (0x00035526) popup_clock_digital_analogue_window_cp2_g

0xdb78,	// (0x00033345) popup_clock_digital_analogue_window_cp2_t1

0xdb86,	// (0x00033353) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd64,	// (0x00035531) popup_clock_digital_analogue_window_cp2_t

0x53c2,	// (0x0002ab8f) clock_digital_number_pane_cp10_g1

0x53c2,	// (0x0002ab8f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00035319) clock_digital_number_pane_cp10_g

0x53c2,	// (0x0002ab8f) clock_digital_separator_pane_cp10_g1

0x53c2,	// (0x0002ab8f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00035319) clock_digital_separator_pane_cp10_g

0x6d60,	// (0x0002c52d) uniindi_top_pane_g3

0x6d71,	// (0x0002c53e) uniindi_top_pane_g4

0x269f,	// (0x00027e6c) vkb2_row_keypad_pane_ParamLimits

0x269f,	// (0x00027e6c) vkb2_row_keypad_pane

0x28e1,	// (0x000280ae) vkb2_cell_t_keypad_pane_ParamLimits

0x28e1,	// (0x000280ae) vkb2_cell_t_keypad_pane

0x28f1,	// (0x000280be) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x28f1,	// (0x000280be) vkb2_cell_t_keypad_pane_cp08

0x2906,	// (0x000280d3) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2906,	// (0x000280d3) vkb2_cell_t_keypad_pane_cp09

0x291a,	// (0x000280e7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x291a,	// (0x000280e7) vkb2_cell_t_keypad_pane_cp01

0x292b,	// (0x000280f8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x292b,	// (0x000280f8) vkb2_cell_t_keypad_pane_cp02

0x293c,	// (0x00028109) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x293c,	// (0x00028109) vkb2_cell_t_keypad_pane_cp03

0x294d,	// (0x0002811a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x294d,	// (0x0002811a) vkb2_cell_t_keypad_pane_cp04

0x295e,	// (0x0002812b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x295e,	// (0x0002812b) vkb2_cell_t_keypad_pane_cp05

0x296f,	// (0x0002813c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x296f,	// (0x0002813c) vkb2_cell_t_keypad_pane_cp06

0x2982,	// (0x0002814f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2982,	// (0x0002814f) vkb2_cell_t_keypad_pane_cp07

0x2997,	// (0x00028164) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2997,	// (0x00028164) vkb2_cell_t_keypad_pane_cp10

0x563d,	// (0x0002ae0a) vkb2_cell_t_keypad_pane_g1

0x7344,	// (0x0002cb11) vkb2_cell_t_keypad_pane_t1

0xa026,	// (0x0002f7f3) popup_grid_graphic2_window

0xdeb2,	// (0x0003367f) aid_size_cell_graphic2_ParamLimits

0xdeb2,	// (0x0003367f) aid_size_cell_graphic2

0xdef0,	// (0x000336bd) bg_popup_window_pane_cp21_ParamLimits

0xdef0,	// (0x000336bd) bg_popup_window_pane_cp21

0xdefe,	// (0x000336cb) graphic2_pages_pane_ParamLimits

0xdefe,	// (0x000336cb) graphic2_pages_pane

0xdf56,	// (0x00033723) grid_graphic2_control_pane_ParamLimits

0xdf56,	// (0x00033723) grid_graphic2_control_pane

0xdf9e,	// (0x0003376b) grid_graphic2_pane_ParamLimits

0xdf9e,	// (0x0003376b) grid_graphic2_pane

0xe029,	// (0x000337f6) cell_graphic2_pane

0xa026,	// (0x0002f7f3) main_comp_mode_pane

0x65d1,	// (0x0002bd9e) list_ai3_gene_pane_ParamLimits

0xd875,	// (0x00033042) bg_popup_window_pane_cp19_ParamLimits

0x69a5,	// (0x0002c172) bg_touch_area_indi_pane_ParamLimits

0x69a5,	// (0x0002c172) bg_touch_area_indi_pane

0x69bb,	// (0x0002c188) bg_touch_area_indi_pane_cp01_ParamLimits

0x69bb,	// (0x0002c188) bg_touch_area_indi_pane_cp01

0x69d3,	// (0x0002c1a0) bg_touch_area_indi_pane_cp02_ParamLimits

0x69d3,	// (0x0002c1a0) bg_touch_area_indi_pane_cp02

0x69ed,	// (0x0002c1ba) bg_touch_area_indi_pane_cp03_ParamLimits

0x69ed,	// (0x0002c1ba) bg_touch_area_indi_pane_cp03

0x6a07,	// (0x0002c1d4) popup_slider_window_g1_ParamLimits

0x6a23,	// (0x0002c1f0) popup_slider_window_g2_ParamLimits

0x6a3f,	// (0x0002c20c) popup_slider_window_g3_ParamLimits

0xfcee,	// (0x000354bb) popup_slider_window_g_ParamLimits

0x6a9b,	// (0x0002c268) popup_slider_window_t1_ParamLimits

0x6b0f,	// (0x0002c2dc) small_volume_slider_vertical_pane_ParamLimits

0xe029,	// (0x000337f6) cell_graphic2_pane_ParamLimits

0xe08c,	// (0x00033859) bg_button_pane_cp10_ParamLimits

0xe08c,	// (0x00033859) bg_button_pane_cp10

0xe09f,	// (0x0003386c) bg_button_pane_cp11_ParamLimits

0xe09f,	// (0x0003386c) bg_button_pane_cp11

0xe0b2,	// (0x0003387f) graphic2_pages_pane_g1_ParamLimits

0xe0b2,	// (0x0003387f) graphic2_pages_pane_g1

0xe0cd,	// (0x0003389a) graphic2_pages_pane_g2_ParamLimits

0xe0cd,	// (0x0003389a) graphic2_pages_pane_g2

0x0001,

0xfdb2,	// (0x0003557f) graphic2_pages_pane_g_ParamLimits

0xfdb2,	// (0x0003557f) graphic2_pages_pane_g

0xe0e5,	// (0x000338b2) graphic2_pages_pane_t1_ParamLimits

0xe0e5,	// (0x000338b2) graphic2_pages_pane_t1

0xe0fd,	// (0x000338ca) cell_graphic2_control_pane_ParamLimits

0xe0fd,	// (0x000338ca) cell_graphic2_control_pane

0xe131,	// (0x000338fe) cell_graphic2_pane_g1_ParamLimits

0xe131,	// (0x000338fe) cell_graphic2_pane_g1

0xc176,	// (0x00031943) cell_graphic2_pane_g2_ParamLimits

0xc176,	// (0x00031943) cell_graphic2_pane_g2

0xcbca,	// (0x00032397) cell_graphic2_pane_g3_ParamLimits

0xcbca,	// (0x00032397) cell_graphic2_pane_g3

0xc183,	// (0x00031950) cell_graphic2_pane_g4_ParamLimits

0xc183,	// (0x00031950) cell_graphic2_pane_g4

0xe13e,	// (0x0003390b) cell_graphic2_pane_g5_ParamLimits

0xe13e,	// (0x0003390b) cell_graphic2_pane_g5

0x0004,

0xfdb7,	// (0x00035584) cell_graphic2_pane_g_ParamLimits

0xfdb7,	// (0x00035584) cell_graphic2_pane_g

0xe15e,	// (0x0003392b) cell_graphic2_pane_t1_ParamLimits

0xe15e,	// (0x0003392b) cell_graphic2_pane_t1

0x3a21,	// (0x000291ee) grid_highlight_pane_cp11_ParamLimits

0x3a21,	// (0x000291ee) grid_highlight_pane_cp11

0xce34,	// (0x00032601) bg_button_pane_cp05

0xe193,	// (0x00033960) cell_graphic2_control_pane_g1

0x53c2,	// (0x0002ab8f) bg_touch_area_indi_pane_g1

0x761e,	// (0x0002cdeb) aid_cmod_rocker_key_size

0x7628,	// (0x0002cdf5) aid_cmode_itu_key_size

0x7632,	// (0x0002cdff) main_cmode_video_pane

0x763c,	// (0x0002ce09) main_comp_mode_itu_pane

0x7648,	// (0x0002ce15) main_comp_mode_rocker_pane

0x7654,	// (0x0002ce21) cell_cmode_rocker_pane_ParamLimits

0x7654,	// (0x0002ce21) cell_cmode_rocker_pane

0x7668,	// (0x0002ce35) cell_cmode_itu_pane_ParamLimits

0x7668,	// (0x0002ce35) cell_cmode_itu_pane

0xd316,	// (0x00032ae3) bg_button_pane_cp06_ParamLimits

0xd316,	// (0x00032ae3) bg_button_pane_cp06

0x563d,	// (0x0002ae0a) cell_cmode_rocker_pane_g1_ParamLimits

0x563d,	// (0x0002ae0a) cell_cmode_rocker_pane_g1

0x6bb6,	// (0x0002c383) cell_cmode_rocker_pane_g2_ParamLimits

0x6bb6,	// (0x0002c383) cell_cmode_rocker_pane_g2

0x0001,

0xfdc7,	// (0x00035594) cell_cmode_rocker_pane_g_ParamLimits

0xfdc7,	// (0x00035594) cell_cmode_rocker_pane_g

0xa026,	// (0x0002f7f3) bg_button_pane_cp07

0x767f,	// (0x0002ce4c) cell_cmode_itu_pane_g1

0x7688,	// (0x0002ce55) cell_cmode_itu_pane_t1

0x7696,	// (0x0002ce63) cell_cmode_itu_pane_t2

0x0001,

0xfdcc,	// (0x00035599) cell_cmode_itu_pane_t

0x6de4,	// (0x0002c5b1) aid_touch_ctrl_left

0x6dec,	// (0x0002c5b9) aid_touch_ctrl_right

0xa026,	// (0x0002f7f3) compa_mode_pane

0xe1b9,	// (0x00033986) aid_cmod_rocker_key_size_cp

0xe1c3,	// (0x00033990) aid_cmode_itu_key_size_cp

0x76b8,	// (0x0002ce85) compa_mode_pane_g1

0x76c0,	// (0x0002ce8d) compa_mode_pane_g2

0x76c8,	// (0x0002ce95) compa_mode_pane_g3

0x0002,

0xfdd1,	// (0x0003559e) compa_mode_pane_g

0xe1cd,	// (0x0003399a) main_comp_mode_itu_pane_cp

0xe1d5,	// (0x000339a2) main_comp_mode_rocker_pane_cp

0xe1dd,	// (0x000339aa) cell_cmode_itu_pane_cp_ParamLimits

0xe1dd,	// (0x000339aa) cell_cmode_itu_pane_cp

0xe1f2,	// (0x000339bf) cell_cmode_rocker_pane_cp_ParamLimits

0xe1f2,	// (0x000339bf) cell_cmode_rocker_pane_cp

0xd316,	// (0x00032ae3) bg_button_pane_cp06_cp_ParamLimits

0xd316,	// (0x00032ae3) bg_button_pane_cp06_cp

0x563d,	// (0x0002ae0a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x563d,	// (0x0002ae0a) cell_cmode_rocker_pane_g1_cp

0x53c2,	// (0x0002ab8f) cell_cmode_rocker_pane_g2_cp

0xa026,	// (0x0002f7f3) bg_button_pane_cp07_cp

0xe204,	// (0x000339d1) cell_cmode_itu_pane_g1_cp

0xe20d,	// (0x000339da) cell_cmode_itu_pane_t1_cp

0xe20d,	// (0x000339da) cell_cmode_itu_pane_t2_cp

0xbd8d,	// (0x0003155a) settings_code_pane_cp2

0xcd01,	// (0x000324ce) bg_popup_window_pane_cp3_ParamLimits

0xd022,	// (0x000327ef) heading_pane_cp3_ParamLimits

0xd02e,	// (0x000327fb) listscroll_popup_graphic_pane_ParamLimits

0x1f8e,	// (0x0002775b) fep_hwr_aid_pane_ParamLimits

0x2373,	// (0x00027b40) aid_touch_sctrl_top_ParamLimits

0x2380,	// (0x00027b4d) sctrl_sk_top_pane_g1_ParamLimits

0x563d,	// (0x0002ae0a) sctrl_sk_top_pane_g2_ParamLimits

0xfd07,	// (0x000354d4) sctrl_sk_top_pane_g_ParamLimits

0x238d,	// (0x00027b5a) sctrl_sk_top_pane_t1_ParamLimits

0x2373,	// (0x00027b40) aid_touch_sctrl_bottom_ParamLimits

0x238d,	// (0x00027b5a) sctrl_sk_bottom_pane_t1_ParamLimits

0x6d2a,	// (0x0002c4f7) aid_area_touch_clock

0xc9e2,	// (0x000321af) aid_vkb2_area_top_pane_cell_ParamLimits

0xc9e2,	// (0x000321af) aid_vkb2_area_top_pane_cell

0xca8d,	// (0x0003225a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xca8d,	// (0x0003225a) aid_vkb2_area_bottom_pane_cell

0x728f,	// (0x0002ca5c) popup_char_count_window

0x771e,	// (0x0002ceeb) popup_char_count_window_g1

0x7727,	// (0x0002cef4) popup_char_count_window_g2

0x7730,	// (0x0002cefd) popup_char_count_window_g3

0x0002,

0xfdd8,	// (0x000355a5) popup_char_count_window_g

0x7739,	// (0x0002cf06) popup_char_count_window_t1

0x2430,	// (0x00027bfd) popup_fep_char_preview_window_ParamLimits

0x2430,	// (0x00027bfd) popup_fep_char_preview_window

0xca02,	// (0x000321cf) vkb2_top_candi_pane_ParamLimits

0xca02,	// (0x000321cf) vkb2_top_candi_pane

0xe21b,	// (0x000339e8) cell_vkb2_top_candi_pane_ParamLimits

0xe21b,	// (0x000339e8) cell_vkb2_top_candi_pane

0x33aa,	// (0x00028b77) bg_popup_fep_char_preview_window_ParamLimits

0x33aa,	// (0x00028b77) bg_popup_fep_char_preview_window

0x29ac,	// (0x00028179) popup_fep_char_preview_window_t1_ParamLimits

0x29ac,	// (0x00028179) popup_fep_char_preview_window_t1

0x7798,	// (0x0002cf65) bg_popup_fep_char_preview_window_g1

0x77a0,	// (0x0002cf6d) bg_popup_fep_char_preview_window_g2

0x77a8,	// (0x0002cf75) bg_popup_fep_char_preview_window_g3

0x77b0,	// (0x0002cf7d) bg_popup_fep_char_preview_window_g4

0x77b8,	// (0x0002cf85) bg_popup_fep_char_preview_window_g5

0x29e6,	// (0x000281b3) bg_popup_fep_char_preview_window_g6

0x77c0,	// (0x0002cf8d) bg_popup_fep_char_preview_window_g7

0x77c8,	// (0x0002cf95) bg_popup_fep_char_preview_window_g8

0x77d0,	// (0x0002cf9d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddf,	// (0x000355ac) bg_popup_fep_char_preview_window_g

0x563d,	// (0x0002ae0a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x563d,	// (0x0002ae0a) cell_vkb2_top_candi_pane_g1

0x597e,	// (0x0002b14b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x597e,	// (0x0002b14b) cell_vkb2_top_candi_pane_g2

0x599f,	// (0x0002b16c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x599f,	// (0x0002b16c) cell_vkb2_top_candi_pane_g3

0x29ee,	// (0x000281bb) cell_vkb2_top_candi_pane_g4_ParamLimits

0x29ee,	// (0x000281bb) cell_vkb2_top_candi_pane_g4

0x77d8,	// (0x0002cfa5) cell_vkb2_top_candi_pane_g5_ParamLimits

0x77d8,	// (0x0002cfa5) cell_vkb2_top_candi_pane_g5

0x6bb6,	// (0x0002c383) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6bb6,	// (0x0002c383) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf2,	// (0x000355bf) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf2,	// (0x000355bf) cell_vkb2_top_candi_pane_g

0x2a0f,	// (0x000281dc) cell_vkb2_top_candi_pane_t1

0x1e3e,	// (0x0002760b) aid_size_touch_slider_mark_ParamLimits

0x1e3e,	// (0x0002760b) aid_size_touch_slider_mark

0xdf3a,	// (0x00033707) grid_graphic2_catg_pane_ParamLimits

0xdf3a,	// (0x00033707) grid_graphic2_catg_pane

0xdff8,	// (0x000337c5) popup_grid_graphic2_window_t1_ParamLimits

0xdff8,	// (0x000337c5) popup_grid_graphic2_window_t1

0xe00e,	// (0x000337db) popup_grid_graphic2_window_t2_ParamLimits

0xe00e,	// (0x000337db) popup_grid_graphic2_window_t2

0x0001,

0xfdad,	// (0x0003557a) popup_grid_graphic2_window_t_ParamLimits

0xfdad,	// (0x0003557a) popup_grid_graphic2_window_t

0xce34,	// (0x00032601) bg_button_pane_cp05_ParamLimits

0xe193,	// (0x00033960) cell_graphic2_control_pane_g1_ParamLimits

0xe285,	// (0x00033a52) cell_graphic2_catg_pane_ParamLimits

0xe285,	// (0x00033a52) cell_graphic2_catg_pane

0xa026,	// (0x0002f7f3) bg_button_pane_cp12

0xe297,	// (0x00033a64) cell_graphic2_catg_pane_g1

0x6cf6,	// (0x0002c4c3) cell_tb_ext_pane_t1_ParamLimits

0x27de,	// (0x00027fab) vkb2_top_cell_right_narrow_pane_ParamLimits

0x27de,	// (0x00027fab) vkb2_top_cell_right_narrow_pane

0x27f6,	// (0x00027fc3) vkb2_top_cell_right_wide_pane_ParamLimits

0x27f6,	// (0x00027fc3) vkb2_top_cell_right_wide_pane

0x8835,	// (0x0002e002) bg_vkb2_func_pane_ParamLimits

0x8835,	// (0x0002e002) bg_vkb2_func_pane

0x2867,	// (0x00028034) vkb2_top_cell_left_pane_g1_ParamLimits

0x8835,	// (0x0002e002) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8835,	// (0x0002e002) bg_vkb2_fuc_pane_cp03

0x28c5,	// (0x00028092) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2d62,	// (0x0002852f) bg_vkb2_func_pane_g1

0x2d6a,	// (0x00028537) bg_vkb2_func_pane_g2

0x2d7a,	// (0x00028547) bg_vkb2_func_pane_g3

0x2d72,	// (0x0002853f) bg_vkb2_func_pane_g4

0x2d82,	// (0x0002854f) bg_vkb2_func_pane_g5

0x2d8a,	// (0x00028557) bg_vkb2_func_pane_g6

0x2d92,	// (0x0002855f) bg_vkb2_func_pane_g7

0x2d9a,	// (0x00028567) bg_vkb2_func_pane_g8

0x2d5a,	// (0x00028527) bg_vkb2_func_pane_g9

0x0008,

0xfdff,	// (0x000355cc) bg_vkb2_func_pane_g

0x8835,	// (0x0002e002) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8835,	// (0x0002e002) bg_vkb2_fuc_pane_cp01

0x2867,	// (0x00028034) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2867,	// (0x00028034) vkb2_top_cell_right_wide_pane_g1

0x8835,	// (0x0002e002) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8835,	// (0x0002e002) bg_vkb2_fuc_pane_cp02

0x28c5,	// (0x00028092) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x28c5,	// (0x00028092) vkb2_top_cell_right_narrow_pane_g1

0xc737,	// (0x00031f04) aid_touch_area_decrease_ParamLimits

0xc737,	// (0x00031f04) aid_touch_area_decrease

0xc771,	// (0x00031f3e) aid_touch_area_increase_ParamLimits

0xc771,	// (0x00031f3e) aid_touch_area_increase

0xc799,	// (0x00031f66) aid_touch_area_mute_ParamLimits

0xc799,	// (0x00031f66) aid_touch_area_mute

0xc7c9,	// (0x00031f96) aid_touch_area_slider_ParamLimits

0xc7c9,	// (0x00031f96) aid_touch_area_slider

0xd881,	// (0x0003304e) popup_slider_window_g4_ParamLimits

0xd881,	// (0x0003304e) popup_slider_window_g4

0xd8a9,	// (0x00033076) popup_slider_window_g5_ParamLimits

0xd8a9,	// (0x00033076) popup_slider_window_g5

0xd8dd,	// (0x000330aa) popup_slider_window_g6_ParamLimits

0xd8dd,	// (0x000330aa) popup_slider_window_g6

0x6ac9,	// (0x0002c296) popup_slider_window_t2_ParamLimits

0x6ac9,	// (0x0002c296) popup_slider_window_t2

0x0001,

0xfcfb,	// (0x000354c8) popup_slider_window_t_ParamLimits

0xfcfb,	// (0x000354c8) popup_slider_window_t

0xd8f9,	// (0x000330c6) slider_pane_ParamLimits

0xd8f9,	// (0x000330c6) slider_pane

0x7814,	// (0x0002cfe1) slider_pane_g1_ParamLimits

0x7814,	// (0x0002cfe1) slider_pane_g1

0x7828,	// (0x0002cff5) slider_pane_g2_ParamLimits

0x7828,	// (0x0002cff5) slider_pane_g2

0x783e,	// (0x0002d00b) slider_pane_g3_ParamLimits

0x783e,	// (0x0002d00b) slider_pane_g3

0x0003,

0xfe12,	// (0x000355df) slider_pane_g_ParamLimits

0xfe12,	// (0x000355df) slider_pane_g

0xb248,	// (0x00030a15) popup_tb_float_extension_window_ParamLimits

0xb248,	// (0x00030a15) popup_tb_float_extension_window

0x786a,	// (0x0002d037) aid_size_cell_tb_float_ext

0xa026,	// (0x0002f7f3) bg_popup_sub_window_cp28

0x7876,	// (0x0002d043) grid_tb_float_ext_pane

0x7882,	// (0x0002d04f) cell_tb_float_ext_pane_ParamLimits

0x7882,	// (0x0002d04f) cell_tb_float_ext_pane

0x789e,	// (0x0002d06b) cell_tb_float_ext_pane_g1

0x78a7,	// (0x0002d074) grid_highlight_pane_cp12

0xc154,	// (0x00031921) cell_last_hwr_side_pane_ParamLimits

0xc154,	// (0x00031921) cell_last_hwr_side_pane

0x53c2,	// (0x0002ab8f) cell_last_hwr_side_pane_g1

0x78b0,	// (0x0002d07d) cell_last_hwr_side_pane_g2

0x0001,

0xfe1b,	// (0x000355e8) cell_last_hwr_side_pane_g

0xcb69,	// (0x00032336) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcb69,	// (0x00032336) vkb2_area_bottom_space_btn_pane

0x563d,	// (0x0002ae0a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7344,	// (0x0002cb11) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2a0f,	// (0x000281dc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2a2d,	// (0x000281fa) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2a2d,	// (0x000281fa) vkb2_area_bottom_space_btn_pane_g1

0x2a67,	// (0x00028234) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2a67,	// (0x00028234) vkb2_area_bottom_space_btn_pane_g2

0x2a9d,	// (0x0002826a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2a9d,	// (0x0002826a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe20,	// (0x000355ed) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe20,	// (0x000355ed) vkb2_area_bottom_space_btn_pane_g

0x2037,	// (0x00027804) cel_fep_hwr_func_pane_ParamLimits

0x2037,	// (0x00027804) cel_fep_hwr_func_pane

0xc129,	// (0x000318f6) cell_hwr_side_button_pane_ParamLimits

0xc129,	// (0x000318f6) cell_hwr_side_button_pane

0x6d2a,	// (0x0002c4f7) aid_area_touch_clock_ParamLimits

0xce34,	// (0x00032601) bg_uniindi_top_pane_ParamLimits

0x6d3e,	// (0x0002c50b) uniindi_top_pane_g1_ParamLimits

0x6d54,	// (0x0002c521) uniindi_top_pane_g2_ParamLimits

0x6d60,	// (0x0002c52d) uniindi_top_pane_g3_ParamLimits

0x6d71,	// (0x0002c53e) uniindi_top_pane_g4_ParamLimits

0xfd33,	// (0x00035500) uniindi_top_pane_g_ParamLimits

0x6d7e,	// (0x0002c54b) uniindi_top_pane_t1_ParamLimits

0xce34,	// (0x00032601) bg_vkb2_func_pane_cp01_ParamLimits

0xce34,	// (0x00032601) bg_vkb2_func_pane_cp01

0x78b9,	// (0x0002d086) cel_fep_hwr_func_pane_g1_ParamLimits

0x78b9,	// (0x0002d086) cel_fep_hwr_func_pane_g1

0xce34,	// (0x00032601) bg_vkb2_func_pane_cp02_ParamLimits

0xce34,	// (0x00032601) bg_vkb2_func_pane_cp02

0x78b9,	// (0x0002d086) cell_hwr_side_button_pane_g1_ParamLimits

0x78b9,	// (0x0002d086) cell_hwr_side_button_pane_g1

0x1a16,	// (0x000271e3) status_pane_g4_ParamLimits

0x1a16,	// (0x000271e3) status_pane_g4

0x1a30,	// (0x000271fd) status_pane_t1

0x5161,	// (0x0002a92e) form2_midp_gauge_slider_cont_pane

0x5169,	// (0x0002a936) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc061,	// (0x0003182e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc073,	// (0x00031840) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x000352cc) form2_midp_gauge_slider_pane_t_ParamLimits

0x519f,	// (0x0002a96c) form2_midp_slider_pane_ParamLimits

0x23f0,	// (0x00027bbd) aid_size_cell_func_vkb2_ParamLimits

0x23f0,	// (0x00027bbd) aid_size_cell_func_vkb2

0x7856,	// (0x0002d023) slider_pane_g4_ParamLimits

0x7856,	// (0x0002d023) slider_pane_g4

0xcbd7,	// (0x000323a4) form2_midp_gauge_slider_pane_t2_cp01

0xcbe5,	// (0x000323b2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcbe5,	// (0x000323b2) form2_midp_gauge_slider_pane_t3_cp01

0x2b12,	// (0x000282df) form2_midp_slider_pane_cp01

0xa026,	// (0x0002f7f3) navi_smil_pane

0x78f2,	// (0x0002d0bf) navi_smil_pane_g1

0x78fa,	// (0x0002d0c7) navi_smil_pane_t1

0x78c7,	// (0x0002d094) form2_midp_slider_pane_g1

0x78d0,	// (0x0002d09d) form2_midp_slider_pane_g2

0x78d8,	// (0x0002d0a5) form2_midp_slider_pane_g3

0x78c7,	// (0x0002d094) form2_midp_slider_pane_g4

0xe2a0,	// (0x00033a6d) form2_midp_slider_pane_g5

0x0004,

0xfe29,	// (0x000355f6) form2_midp_slider_pane_g

0x2ad7,	// (0x000282a4) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2ad7,	// (0x000282a4) vkb2_area_bottom_space_btn_pane_g4

0xb42f,	// (0x00030bfc) lc0_navi_pane_ParamLimits

0xb42f,	// (0x00030bfc) lc0_navi_pane

0xb49f,	// (0x00030c6c) lc0_stat_indi_pane_ParamLimits

0xb49f,	// (0x00030c6c) lc0_stat_indi_pane

0xb4b4,	// (0x00030c81) ls0_title_pane_ParamLimits

0xb4b4,	// (0x00030c81) ls0_title_pane

0xd316,	// (0x00032ae3) bg_popup_sub_pane_cp14_ParamLimits

0x6d11,	// (0x0002c4de) list_uniindi_pane_ParamLimits

0x6d1d,	// (0x0002c4ea) uniindi_top_pane_ParamLimits

0x6dbc,	// (0x0002c589) list_single_uniindi_pane_g1_ParamLimits

0x6dcf,	// (0x0002c59c) list_single_uniindi_pane_t1_ParamLimits

0xcc02,	// (0x000323cf) lc0_stat_clock_pane_ParamLimits

0xcc02,	// (0x000323cf) lc0_stat_clock_pane

0xe2a9,	// (0x00033a76) lc0_stat_indi_pane_g1_ParamLimits

0xe2a9,	// (0x00033a76) lc0_stat_indi_pane_g1

0xe2b6,	// (0x00033a83) lc0_stat_indi_pane_g2_ParamLimits

0xe2b6,	// (0x00033a83) lc0_stat_indi_pane_g2

0x0001,

0xfe34,	// (0x00035601) lc0_stat_indi_pane_g_ParamLimits

0xfe34,	// (0x00035601) lc0_stat_indi_pane_g

0xcc0f,	// (0x000323dc) lc0_uni_indicator_pane_ParamLimits

0xcc0f,	// (0x000323dc) lc0_uni_indicator_pane

0xe2c3,	// (0x00033a90) ls0_title_pane_g1_ParamLimits

0xe2c3,	// (0x00033a90) ls0_title_pane_g1

0xe2d7,	// (0x00033aa4) ls0_title_pane_t1_ParamLimits

0xe2d7,	// (0x00033aa4) ls0_title_pane_t1

0xcc1c,	// (0x000323e9) lc0_uni_indicator_pane_g1_ParamLimits

0xcc1c,	// (0x000323e9) lc0_uni_indicator_pane_g1

0x796c,	// (0x0002d139) lc0_stat_clock_pane_t1

0xa026,	// (0x0002f7f3) main_ai5_pane

0x797a,	// (0x0002d147) ai5_sk_pane_ParamLimits

0x797a,	// (0x0002d147) ai5_sk_pane

0xe305,	// (0x00033ad2) cell_ai5_widget_pane_ParamLimits

0xe305,	// (0x00033ad2) cell_ai5_widget_pane

0x7f23,	// (0x0002d6f0) aid_size_cell_widget_grid

0x7f39,	// (0x0002d706) bg_ai5_widget_pane_ParamLimits

0x7f39,	// (0x0002d706) bg_ai5_widget_pane

0x7fa3,	// (0x0002d770) cell_ai5_widget_pane_g2

0x7fb3,	// (0x0002d780) cell_ai5_widget_pane_g3

0x7fd2,	// (0x0002d79f) cell_ai5_widget_pane_g4

0x7fde,	// (0x0002d7ab) cell_ai5_widget_pane_g5

0xe65c,	// (0x00033e29) cell_ai5_widget_pane_g6

0xe668,	// (0x00033e35) cell_ai5_widget_pane_g7

0x803e,	// (0x0002d80b) cell_ai5_widget_pane_t1_ParamLimits

0x803e,	// (0x0002d80b) cell_ai5_widget_pane_t1

0x805b,	// (0x0002d828) cell_ai5_widget_pane_t2_ParamLimits

0x805b,	// (0x0002d828) cell_ai5_widget_pane_t2

0x8073,	// (0x0002d840) cell_ai5_widget_pane_t3_ParamLimits

0x8073,	// (0x0002d840) cell_ai5_widget_pane_t3

0x808b,	// (0x0002d858) cell_ai5_widget_pane_t4_ParamLimits

0x808b,	// (0x0002d858) cell_ai5_widget_pane_t4

0x80a5,	// (0x0002d872) cell_ai5_widget_pane_t5_ParamLimits

0x80a5,	// (0x0002d872) cell_ai5_widget_pane_t5

0x80c4,	// (0x0002d891) cell_ai5_widget_pane_t6_ParamLimits

0x80c4,	// (0x0002d891) cell_ai5_widget_pane_t6

0x80d6,	// (0x0002d8a3) cell_ai5_widget_pane_t7_ParamLimits

0x80d6,	// (0x0002d8a3) cell_ai5_widget_pane_t7

0x80ef,	// (0x0002d8bc) cell_ai5_widget_pane_t8_ParamLimits

0x80ef,	// (0x0002d8bc) cell_ai5_widget_pane_t8

0x0009,

0xfe4e,	// (0x0003561b) cell_ai5_widget_pane_t_ParamLimits

0xfe4e,	// (0x0003561b) cell_ai5_widget_pane_t

0x813b,	// (0x0002d908) grid_ai5_widget_pane

0xd316,	// (0x00032ae3) highlight_cell_ai5_widget_pane_ParamLimits

0xd316,	// (0x00032ae3) highlight_cell_ai5_widget_pane

0xe674,	// (0x00033e41) ai5_sk_left_pane

0xe67e,	// (0x00033e4b) ai5_sk_middle_pane

0xe688,	// (0x00033e55) ai5_sk_right_pane

0x8171,	// (0x0002d93e) bg_ai5_widget_pane_g1_ParamLimits

0x8171,	// (0x0002d93e) bg_ai5_widget_pane_g1

0x817d,	// (0x0002d94a) bg_ai5_widget_pane_g2_ParamLimits

0x817d,	// (0x0002d94a) bg_ai5_widget_pane_g2

0x8189,	// (0x0002d956) bg_ai5_widget_pane_g3_ParamLimits

0x8189,	// (0x0002d956) bg_ai5_widget_pane_g3

0x8195,	// (0x0002d962) bg_ai5_widget_pane_g4_ParamLimits

0x8195,	// (0x0002d962) bg_ai5_widget_pane_g4

0x81a1,	// (0x0002d96e) bg_ai5_widget_pane_g5_ParamLimits

0x81a1,	// (0x0002d96e) bg_ai5_widget_pane_g5

0x81ad,	// (0x0002d97a) bg_ai5_widget_pane_g6_ParamLimits

0x81ad,	// (0x0002d97a) bg_ai5_widget_pane_g6

0x81b9,	// (0x0002d986) bg_ai5_widget_pane_g7_ParamLimits

0x81b9,	// (0x0002d986) bg_ai5_widget_pane_g7

0x81c5,	// (0x0002d992) bg_ai5_widget_pane_g8_ParamLimits

0x81c5,	// (0x0002d992) bg_ai5_widget_pane_g8

0x81d1,	// (0x0002d99e) bg_ai5_widget_pane_g9_ParamLimits

0x81d1,	// (0x0002d99e) bg_ai5_widget_pane_g9

0x0008,

0xfe63,	// (0x00035630) bg_ai5_widget_pane_g_ParamLimits

0xfe63,	// (0x00035630) bg_ai5_widget_pane_g

0x820a,	// (0x0002d9d7) cell_shortcut_ai5_widget_pane_ParamLimits

0x820a,	// (0x0002d9d7) cell_shortcut_ai5_widget_pane

0x0ae7,	// (0x000262b4) bg_cell_shortcut_ai5_widget_pane

0x821d,	// (0x0002d9ea) cell_grid_ai5_widget_pane_g1

0x8226,	// (0x0002d9f3) highlight_cell_shortcut_ai5_widget_pane

0x2d6a,	// (0x00028537) ai5_sk_left_pane_g1

0x822e,	// (0x0002d9fb) ai5_sk_left_pane_g2

0x8236,	// (0x0002da03) ai5_sk_left_pane_g3

0x823e,	// (0x0002da0b) ai5_sk_left_pane_g4

0x0003,

0xfe76,	// (0x00035643) ai5_sk_left_pane_g

0x8246,	// (0x0002da13) ai5_sk_left_pane_t1

0x2d62,	// (0x0002852f) ai5_sk_right_pane_g1

0x8254,	// (0x0002da21) ai5_sk_right_pane_g2

0x825c,	// (0x0002da29) ai5_sk_right_pane_g3

0x8264,	// (0x0002da31) ai5_sk_right_pane_g4

0x0003,

0xfe7f,	// (0x0003564c) ai5_sk_right_pane_g

0x826c,	// (0x0002da39) ai5_sk_right_pane_t1

0x2d62,	// (0x0002852f) ai5_sk_middle_pane_g1

0x2d6a,	// (0x00028537) ai5_sk_middle_pane_g2

0x2d82,	// (0x0002854f) ai5_sk_middle_pane_g3

0x825c,	// (0x0002da29) ai5_sk_middle_pane_g4

0x8236,	// (0x0002da03) ai5_sk_middle_pane_g5

0x827a,	// (0x0002da47) ai5_sk_middle_pane_g6

0xe692,	// (0x00033e5f) ai5_sk_middle_pane_g7

0x0006,

0xfe88,	// (0x00035655) ai5_sk_middle_pane_g

0xb319,	// (0x00030ae6) aid_touch_area_size_lc0_ParamLimits

0xb319,	// (0x00030ae6) aid_touch_area_size_lc0

0x21d6,	// (0x000279a3) cell_hwr_candidate_pane_t1_ParamLimits

0x16cd,	// (0x00026e9a) aid_touch_navi_pane

0xb5bf,	// (0x00030d8c) status_dt_navi_pane_ParamLimits

0xb5bf,	// (0x00030d8c) status_dt_navi_pane

0xb5d7,	// (0x00030da4) status_dt_sta_pane_ParamLimits

0xb5d7,	// (0x00030da4) status_dt_sta_pane

0xe69a,	// (0x00033e67) dt_sta_controll_pane

0xe6a7,	// (0x00033e74) dt_sta_indi_pane

0xe6b4,	// (0x00033e81) dt_sta_title_pane

0xce34,	// (0x00032601) bg_dt_sta_indi_pane_ParamLimits

0xce34,	// (0x00032601) bg_dt_sta_indi_pane

0xe6c6,	// (0x00033e93) dt_sta_battery_pane

0xe6ce,	// (0x00033e9b) dt_sta_indi_pane_g1

0xe6d7,	// (0x00033ea4) dt_sta_indi_pane_g2

0xe6e0,	// (0x00033ead) dt_sta_indi_pane_g3

0x0002,

0xfe97,	// (0x00035664) dt_sta_indi_pane_g

0xe6e9,	// (0x00033eb6) dt_sta_signal_pane

0xd316,	// (0x00032ae3) bg_dt_sta_title_pane_ParamLimits

0xd316,	// (0x00032ae3) bg_dt_sta_title_pane

0xe6f2,	// (0x00033ebf) dt_sta_title_pane_g1

0xe6fa,	// (0x00033ec7) dt_sta_title_pane_t1_ParamLimits

0xe6fa,	// (0x00033ec7) dt_sta_title_pane_t1

0xa026,	// (0x0002f7f3) bg_dt_sta_control_pane

0xe70f,	// (0x00033edc) dt_sta_controll_pane_g1

0xe718,	// (0x00033ee5) bg_dt_sta_title_pane_g1

0xe721,	// (0x00033eee) bg_dt_sta_title_pane_g2

0xe72a,	// (0x00033ef7) bg_dt_sta_title_pane_g3

0x0002,

0xfe9e,	// (0x0003566b) bg_dt_sta_title_pane_g

0x53c2,	// (0x0002ab8f) bg_dt_sta_indi_pane_g1

0x8328,	// (0x0002daf5) dt_sta_signal_pane_g1

0x8330,	// (0x0002dafd) dt_sta_signal_pane_g2

0x0001,

0xfea5,	// (0x00035672) dt_sta_signal_pane_g

0x8338,	// (0x0002db05) dt_sta_battery_pane_g1

0x8341,	// (0x0002db0e) dt_sta_battery_pane_t1

0x53c2,	// (0x0002ab8f) bg_dt_sta_control_pane_g1

0x04a1,	// (0x00025c6e) fep_china_uni_eep_pane

0x04a9,	// (0x00025c76) fep_china_uni_entry_pane_ParamLimits

0x04b9,	// (0x00025c86) popup_fep_china_uni_window_g1_ParamLimits

0x04c9,	// (0x00025c96) popup_fep_china_uni_window_g2_ParamLimits

0x04c9,	// (0x00025c96) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00034ef0) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00034ef0) popup_fep_china_uni_window_g

0x8350,	// (0x0002db1d) fep_china_uni_eep_pane_g1

0x8358,	// (0x0002db25) fep_china_uni_eep_pane_t1

0x78e9,	// (0x0002d0b6) aid_touch_area_size_smil_player

0x1825,	// (0x00026ff2) lc0_clock_pane

0x1a24,	// (0x000271f1) status_pane_g5_ParamLimits

0x1a24,	// (0x000271f1) status_pane_g5

0xad6e,	// (0x0003053b) popup_keymap_window

0x19e2,	// (0x000271af) status_icon_pane

0x7fb3,	// (0x0002d780) cell_ai5_widget_pane_g3_ParamLimits

0x7fd2,	// (0x0002d79f) cell_ai5_widget_pane_g4_ParamLimits

0x7fde,	// (0x0002d7ab) cell_ai5_widget_pane_g5_ParamLimits

0x8002,	// (0x0002d7cf) cell_ai5_widget_pane_g8_ParamLimits

0x8002,	// (0x0002d7cf) cell_ai5_widget_pane_g8

0x8016,	// (0x0002d7e3) cell_ai5_widget_pane_g9_ParamLimits

0x8016,	// (0x0002d7e3) cell_ai5_widget_pane_g9

0x802a,	// (0x0002d7f7) cell_ai5_widget_pane_g10_ParamLimits

0x802a,	// (0x0002d7f7) cell_ai5_widget_pane_g10

0x8367,	// (0x0002db34) status_icon_pane_g1

0xa026,	// (0x0002f7f3) bg_popup_sub_pane_cp13

0x836f,	// (0x0002db3c) popup_keymap_window_t1

0xaa7d,	// (0x0003024a) control_pane_g6_ParamLimits

0xaa7d,	// (0x0003024a) control_pane_g6

0xaa8a,	// (0x00030257) control_pane_g7_ParamLimits

0xaa8a,	// (0x00030257) control_pane_g7

0xaa97,	// (0x00030264) control_pane_g8_ParamLimits

0xaa97,	// (0x00030264) control_pane_g8

0xe69a,	// (0x00033e67) dt_sta_controll_pane_ParamLimits

0xe6a7,	// (0x00033e74) dt_sta_indi_pane_ParamLimits

0xe6b4,	// (0x00033e81) dt_sta_title_pane_ParamLimits

0xd258,	// (0x00032a25) aid_size_touch_scroll_bar_cale

0xf244,	// (0x00034a11) popup_discreet_window_ParamLimits

0xf244,	// (0x00034a11) popup_discreet_window

0xa174,	// (0x0002f941) popup_sk_window

0x33aa,	// (0x00028b77) bg_popup_sub_pane_cp28_ParamLimits

0x33aa,	// (0x00028b77) bg_popup_sub_pane_cp28

0x837d,	// (0x0002db4a) popup_discreet_window_g1_ParamLimits

0x837d,	// (0x0002db4a) popup_discreet_window_g1

0x839d,	// (0x0002db6a) popup_discreet_window_t1_ParamLimits

0x839d,	// (0x0002db6a) popup_discreet_window_t1

0x83bb,	// (0x0002db88) popup_discreet_window_t2_ParamLimits

0x83bb,	// (0x0002db88) popup_discreet_window_t2

0x0002,

0xfeaa,	// (0x00035677) popup_discreet_window_t_ParamLimits

0xfeaa,	// (0x00035677) popup_discreet_window_t

0x2b48,	// (0x00028315) popup_sk_window_g1

0x2b52,	// (0x0002831f) popup_sk_window_g2

0x0001,

0xfeb1,	// (0x0003567e) popup_sk_window_g

0x2b5c,	// (0x00028329) popup_sk_window_t1

0x2b6c,	// (0x00028339) popup_sk_window_t1_copy1

0x7fa3,	// (0x0002d770) cell_ai5_widget_pane_g2_ParamLimits

0x8101,	// (0x0002d8ce) cell_ai5_widget_pane_t9_ParamLimits

0x8101,	// (0x0002d8ce) cell_ai5_widget_pane_t9

0xa026,	// (0x0002f7f3) main_fep_fshwr2_pane

0xcc3b,	// (0x00032408) aid_fshwr2_btn_pane

0xcc4a,	// (0x00032417) aid_fshwr2_syb_pane

0xcc5c,	// (0x00032429) aid_fshwr2_txt_pane

0xcc6b,	// (0x00032438) fshwr2_func_candi_pane

0xcc7c,	// (0x00032449) fshwr2_hwr_syb_pane

0xcc97,	// (0x00032464) fshwr2_icf_pane

0xa026,	// (0x0002f7f3) fshwr2_icf_bg_pane

0xe733,	// (0x00033f00) fshwr2_icf_pane_t1_ParamLimits

0xe733,	// (0x00033f00) fshwr2_icf_pane_t1

0x53c2,	// (0x0002ab8f) fshwr2_func_candi_pane_g1

0x8424,	// (0x0002dbf1) fshwr2_func_candi_row_pane_ParamLimits

0x8424,	// (0x0002dbf1) fshwr2_func_candi_row_pane

0xe74b,	// (0x00033f18) cell_fshwr2_syb_pane_ParamLimits

0xe74b,	// (0x00033f18) cell_fshwr2_syb_pane

0x563d,	// (0x0002ae0a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x563d,	// (0x0002ae0a) fshwr2_hwr_syb_pane_g1

0xa026,	// (0x0002f7f3) bg_popup_call_pane_cp01

0x844f,	// (0x0002dc1c) fshwr2_func_candi_cell_pane_ParamLimits

0x844f,	// (0x0002dc1c) fshwr2_func_candi_cell_pane

0x8481,	// (0x0002dc4e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x8481,	// (0x0002dc4e) fshwr2_func_candi_cell_bg_pane

0x849b,	// (0x0002dc68) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x849b,	// (0x0002dc68) fshwr2_func_candi_cell_pane_g1

0x84bb,	// (0x0002dc88) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x84bb,	// (0x0002dc88) fshwr2_func_candi_cell_pane_t1

0xa026,	// (0x0002f7f3) bg_button_pane_cp08

0x0ae7,	// (0x000262b4) cell_fshwr2_syb_bg_pane

0xe764,	// (0x00033f31) cell_fshwr2_syb_bg_pane_g1

0xe76c,	// (0x00033f39) cell_fshwr2_syb_bg_pane_t1

0xd316,	// (0x00032ae3) main_tmo_pane

0xbb63,	// (0x00031330) uni_indicator_pane_g1_ParamLimits

0xbb78,	// (0x00031345) uni_indicator_pane_g2_ParamLimits

0xbb8d,	// (0x0003135a) uni_indicator_pane_g3_ParamLimits

0xbba3,	// (0x00031370) uni_indicator_pane_g4_ParamLimits

0xbba3,	// (0x00031370) uni_indicator_pane_g4

0xbbb7,	// (0x00031384) uni_indicator_pane_g5_ParamLimits

0xbbb7,	// (0x00031384) uni_indicator_pane_g5

0xbbcb,	// (0x00031398) uni_indicator_pane_g6_ParamLimits

0xbbcb,	// (0x00031398) uni_indicator_pane_g6

0xf922,	// (0x000350ef) uni_indicator_pane_g_ParamLimits

0xc707,	// (0x00031ed4) popup_tmo_note_window_ParamLimits

0xc707,	// (0x00031ed4) popup_tmo_note_window

0xd316,	// (0x00032ae3) fshwr2_bg_pane

0x84ac,	// (0x0002dc79) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x84ac,	// (0x0002dc79) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb6,	// (0x00035683) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb6,	// (0x00035683) fshwr2_func_candi_cell_pane_g

0x53c2,	// (0x0002ab8f) bg_popup_window_pane_cp01

0x84e5,	// (0x0002dcb2) bg_popup_window_pane_g1_cp01

0x84ee,	// (0x0002dcbb) bg_popup_window_pane_cp22_ParamLimits

0x84ee,	// (0x0002dcbb) bg_popup_window_pane_cp22

0x84fc,	// (0x0002dcc9) listscroll_tmo_link_pane_ParamLimits

0x84fc,	// (0x0002dcc9) listscroll_tmo_link_pane

0x853c,	// (0x0002dd09) popup_tmo_note_window_g1_ParamLimits

0x853c,	// (0x0002dd09) popup_tmo_note_window_g1

0x8549,	// (0x0002dd16) tmo_note_info_pane_ParamLimits

0x8549,	// (0x0002dd16) tmo_note_info_pane

0xe77b,	// (0x00033f48) list_tmo_note_info_pane_g1_ParamLimits

0xe77b,	// (0x00033f48) list_tmo_note_info_pane_g1

0x857a,	// (0x0002dd47) list_tmo_note_info_pane_g2_ParamLimits

0x857a,	// (0x0002dd47) list_tmo_note_info_pane_g2

0x0001,

0xfebb,	// (0x00035688) list_tmo_note_info_pane_g_ParamLimits

0xfebb,	// (0x00035688) list_tmo_note_info_pane_g

0x8596,	// (0x0002dd63) list_tmo_note_info_text_pane_ParamLimits

0x8596,	// (0x0002dd63) list_tmo_note_info_text_pane

0x861b,	// (0x0002dde8) list_tmo_link_pane

0x8628,	// (0x0002ddf5) scroll_pane_cp20

0x8635,	// (0x0002de02) list_single_tmo_link_pane_ParamLimits

0x8635,	// (0x0002de02) list_single_tmo_link_pane

0x8645,	// (0x0002de12) list_single_tmo_link_pane_t1

0x8653,	// (0x0002de20) list_tmo_note_info_text_pane_t1_ParamLimits

0x8653,	// (0x0002de20) list_tmo_note_info_text_pane_t1

0xa5f1,	// (0x0002fdbe) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa5f1,	// (0x0002fdbe) aid_size_touch_scroll_bar_cp01

0x9c35,	// (0x0002f402) aid_size_touch_slider_marker

0xa164,	// (0x0002f931) popup_settings_window_ParamLimits

0xa164,	// (0x0002f931) popup_settings_window

0xebf7,	// (0x000343c4) popup_candi_list_indi_window

0x16cd,	// (0x00026e9a) aid_touch_navi_pane_ParamLimits

0x2347,	// (0x00027b14) rs_clock_indi_pane

0x2350,	// (0x00027b1d) sctrl_sk_bottom_pane_ParamLimits

0x2361,	// (0x00027b2e) sctrl_sk_top_pane_ParamLimits

0x244a,	// (0x00027c17) popup_fep_tooltip_window

0x7f23,	// (0x0002d6f0) aid_size_cell_widget_grid_ParamLimits

0x7f97,	// (0x0002d764) cell_ai5_widget_pane_g1_ParamLimits

0x7f97,	// (0x0002d764) cell_ai5_widget_pane_g1

0xe65c,	// (0x00033e29) cell_ai5_widget_pane_g6_ParamLimits

0xe668,	// (0x00033e35) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe39,	// (0x00035606) cell_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x00035606) cell_ai5_widget_pane_g

0x8125,	// (0x0002d8f2) cell_ai5_widget_pane_t10_ParamLimits

0x8125,	// (0x0002d8f2) cell_ai5_widget_pane_t10

0x813b,	// (0x0002d908) grid_ai5_widget_pane_ParamLimits

0x81dd,	// (0x0002d9aa) cell_contacts_ai5_widget_pane_ParamLimits

0x81dd,	// (0x0002d9aa) cell_contacts_ai5_widget_pane

0x83d0,	// (0x0002db9d) popup_discreet_window_t3_ParamLimits

0x83d0,	// (0x0002db9d) popup_discreet_window_t3

0x2bdc,	// (0x000283a9) popup_fshwr2_char_preview_window_ParamLimits

0x2bdc,	// (0x000283a9) popup_fshwr2_char_preview_window

0xe792,	// (0x00033f5f) tmo_note_info_pane_t1

0xe7a7,	// (0x00033f74) tmo_note_info_pane_t2

0xe7c0,	// (0x00033f8d) tmo_note_info_pane_t3

0x85f7,	// (0x0002ddc4) tmo_note_info_pane_t4

0x8609,	// (0x0002ddd6) tmo_note_info_pane_t5

0x0004,

0xfec0,	// (0x0003568d) tmo_note_info_pane_t

0x861b,	// (0x0002dde8) list_tmo_link_pane_ParamLimits

0x8628,	// (0x0002ddf5) scroll_pane_cp20_ParamLimits

0xa026,	// (0x0002f7f3) bg_popup_fep_char_preview_window_cp01

0x866c,	// (0x0002de39) popup_fshwr2_char_preview_window_t1

0x867a,	// (0x0002de47) popup_candi_list_indi_window_g1

0x8683,	// (0x0002de50) bg_cell_contacts_ai5_widget_pane

0x868f,	// (0x0002de5c) cell_contacts_ai5_widget_pane_g1

0x86a2,	// (0x0002de6f) cell_contacts_ai5_widget_pane_g2

0x86ae,	// (0x0002de7b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecb,	// (0x00035698) cell_contacts_ai5_widget_pane_g

0x86c0,	// (0x0002de8d) cell_contacts_ai5_widget_pane_t1

0xd316,	// (0x00032ae3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe83a,	// (0x00034007) settings_container_pane

0x0ae7,	// (0x000262b4) listscroll_set_pane_copy1

0x4add,	// (0x0002a2aa) scroll_pane_cp121_copy1

0x8746,	// (0x0002df13) set_content_pane_copy1

0xe846,	// (0x00034013) aid_height_set_list_copy1_ParamLimits

0xe846,	// (0x00034013) aid_height_set_list_copy1

0x4163,	// (0x00029930) aid_size_parent_copy1_ParamLimits

0x4163,	// (0x00029930) aid_size_parent_copy1

0xe852,	// (0x0003401f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe852,	// (0x0003401f) button_value_adjust_pane_cp6_copy1

0x1054,	// (0x00026821) list_highlight_pane_cp2_copy1_ParamLimits

0x1054,	// (0x00026821) list_highlight_pane_cp2_copy1

0xe866,	// (0x00034033) list_set_pane_copy1_ParamLimits

0xe866,	// (0x00034033) list_set_pane_copy1

0xe7d5,	// (0x00033fa2) main_pane_set_t1_copy1_ParamLimits

0xe7d5,	// (0x00033fa2) main_pane_set_t1_copy1

0xe80f,	// (0x00033fdc) main_pane_set_t2_copy1_ParamLimits

0xe80f,	// (0x00033fdc) main_pane_set_t2_copy1

0xe92d,	// (0x000340fa) main_pane_set_t3_copy1

0xe93b,	// (0x00034108) main_pane_set_t4_copy1

0xe82e,	// (0x00033ffb) set_content_pane_g1_copy1_ParamLimits

0xe82e,	// (0x00033ffb) set_content_pane_g1_copy1

0xe949,	// (0x00034116) setting_code_pane_copy1

0x8867,	// (0x0002e034) setting_slider_graphic_pane_copy1

0x8867,	// (0x0002e034) setting_slider_pane_copy1

0x8867,	// (0x0002e034) setting_text_pane_copy1

0x8867,	// (0x0002e034) setting_volume_pane_copy1

0xe949,	// (0x00034116) settings_code_pane_cp2_copy1

0xe951,	// (0x0003411e) settings_code_pane_cp_copy1_ParamLimits

0xe951,	// (0x0003411e) settings_code_pane_cp_copy1

0xccad,	// (0x0003247a) volume_set_pane_copy1

0xe965,	// (0x00034132) volume_set_pane_g10_copy1

0xe971,	// (0x0003413e) volume_set_pane_g1_copy1

0xe97b,	// (0x00034148) volume_set_pane_g2_copy1

0xe985,	// (0x00034152) volume_set_pane_g3_copy1

0xe98f,	// (0x0003415c) volume_set_pane_g4_copy1

0xe999,	// (0x00034166) volume_set_pane_g5_copy1

0xe9a3,	// (0x00034170) volume_set_pane_g6_copy1

0xe9ad,	// (0x0003417a) volume_set_pane_g7_copy1

0xe9b7,	// (0x00034184) volume_set_pane_g8_copy1

0xe9c1,	// (0x0003418e) volume_set_pane_g9_copy1

0xcd01,	// (0x000324ce) bg_set_opt_pane_cp_copy1_ParamLimits

0xcd01,	// (0x000324ce) bg_set_opt_pane_cp_copy1

0x2c00,	// (0x000283cd) setting_slider_pane_t1_copy1_ParamLimits

0x2c00,	// (0x000283cd) setting_slider_pane_t1_copy1

0xccb9,	// (0x00032486) setting_slider_pane_t2_copy1_ParamLimits

0xccb9,	// (0x00032486) setting_slider_pane_t2_copy1

0xccd3,	// (0x000324a0) setting_slider_pane_t3_copy1_ParamLimits

0xccd3,	// (0x000324a0) setting_slider_pane_t3_copy1

0xcceb,	// (0x000324b8) slider_set_pane_copy1_ParamLimits

0xcceb,	// (0x000324b8) slider_set_pane_copy1

0xd371,	// (0x00032b3e) set_opt_bg_pane_g1_copy2

0xd379,	// (0x00032b46) set_opt_bg_pane_g2_copy2

0x88e9,	// (0x0002e0b6) set_opt_bg_pane_g3_copy2

0xd389,	// (0x00032b56) set_opt_bg_pane_g4_copy2

0xd391,	// (0x00032b5e) set_opt_bg_pane_g5_copy2

0xd399,	// (0x00032b66) set_opt_bg_pane_g6_copy2

0xe9cb,	// (0x00034198) set_opt_bg_pane_g7_copy2

0x88fd,	// (0x0002e0ca) set_opt_bg_pane_g8_copy2

0x8907,	// (0x0002e0d4) set_opt_bg_pane_g9_copy2

0x8911,	// (0x0002e0de) aid_size_touch_slider_mark_copy1_ParamLimits

0x8911,	// (0x0002e0de) aid_size_touch_slider_mark_copy1

0x8925,	// (0x0002e0f2) slider_set_pane_g1_copy1

0x892e,	// (0x0002e0fb) slider_set_pane_g2_copy1

0x40f6,	// (0x000298c3) slider_set_pane_g3_copy1_ParamLimits

0x40f6,	// (0x000298c3) slider_set_pane_g3_copy1

0x410a,	// (0x000298d7) slider_set_pane_g4_copy1_ParamLimits

0x410a,	// (0x000298d7) slider_set_pane_g4_copy1

0x5b71,	// (0x0002b33e) slider_set_pane_g5_copy1_ParamLimits

0x5b71,	// (0x0002b33e) slider_set_pane_g5_copy1

0x40f6,	// (0x000298c3) slider_set_pane_g6_copy1_ParamLimits

0x40f6,	// (0x000298c3) slider_set_pane_g6_copy1

0xe9d5,	// (0x000341a2) slider_set_pane_g7_copy1_ParamLimits

0xe9d5,	// (0x000341a2) slider_set_pane_g7_copy1

0xa120,	// (0x0002f8ed) bg_set_opt_pane_cp2_copy1

0x894c,	// (0x0002e119) setting_slider_graphic_pane_g1_copy1

0xe9eb,	// (0x000341b8) setting_slider_graphic_pane_t1_copy1

0xe9fb,	// (0x000341c8) setting_slider_graphic_pane_t2_copy1

0xea0b,	// (0x000341d8) slider_set_pane_cp_copy1

0x8985,	// (0x0002e152) input_focus_pane_cp1_copy1

0x898e,	// (0x0002e15b) list_set_text_pane_copy1

0x8996,	// (0x0002e163) setting_text_pane_g1_copy1

0xf43a,	// (0x00034c07) set_text_pane_t1_copy1

0x8985,	// (0x0002e152) input_focus_pane_cp2_copy1

0x8996,	// (0x0002e163) setting_code_pane_g1_copy1

0xea13,	// (0x000341e0) setting_code_pane_t1_copy1

0xea21,	// (0x000341ee) list_set_graphic_pane_copy1

0xa120,	// (0x0002f8ed) bg_set_opt_pane_cp4_copy1

0xa8b2,	// (0x0003007f) list_set_graphic_pane_g1_copy1_ParamLimits

0xa8b2,	// (0x0003007f) list_set_graphic_pane_g1_copy1

0xea33,	// (0x00034200) list_set_graphic_pane_g2_copy1

0xa8ca,	// (0x00030097) list_set_graphic_pane_t1_copy1_ParamLimits

0xa8ca,	// (0x00030097) list_set_graphic_pane_t1_copy1

0x53c2,	// (0x0002ab8f) rs_clock_indi_pane_g1

0x89c7,	// (0x0002e194) rs_clock_indi_pane_t1

0x89d5,	// (0x0002e1a2) rs_indi_pane

0x89dd,	// (0x0002e1aa) rs_indi_pane_g1

0x89e6,	// (0x0002e1b3) rs_indi_pane_g2

0x89ef,	// (0x0002e1bc) rs_indi_pane_g3

0x0002,

0xfed2,	// (0x0003569f) rs_indi_pane_g

0x0ae7,	// (0x000262b4) bg_popup_preview_window_pane_cp03

0x89f8,	// (0x0002e1c5) popup_fep_tooltip_window_t1

0x608f,	// (0x0002b85c) popup_note2_window_g2_ParamLimits

0x608f,	// (0x0002b85c) popup_note2_window_g2

0x0001,

0xfc6b,	// (0x00035438) popup_note2_window_g_ParamLimits

0xfc6b,	// (0x00035438) popup_note2_window_g

0x6597,	// (0x0002bd64) bg_popup_sub_pane_cp11_ParamLimits

0x65a4,	// (0x0002bd71) cell_ai3_links_pane_g1_ParamLimits

0x65bb,	// (0x0002bd88) cell_ai3_links_pane_t1

0xf43a,	// (0x00034c07) set_text_pane_t1_copy1_ParamLimits

0xa93e,	// (0x0003010b) cell_graphic_popup_pane_cp2_ParamLimits

0xa93e,	// (0x0003010b) cell_graphic_popup_pane_cp2

0xea3b,	// (0x00034208) cell_graphic_popup_pane_g1_cp2

0xd06b,	// (0x00032838) cell_graphic_popup_pane_g2_cp2

0x8a0e,	// (0x0002e1db) cell_graphic_popup_pane_g3_cp2

0x8a16,	// (0x0002e1e3) cell_graphic_popup_pane_t2_cp2

0xd07c,	// (0x00032849) grid_highlight_pane_cp3_cp2

0xd61a,	// (0x00032de7) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd316,	// (0x00032ae3) main_tmo_pane_ParamLimits

0xc6fb,	// (0x00031ec8) popup_tmo_big_image_note_window

0x7f87,	// (0x0002d754) cell_ai5_widget_list_pane

0x7f8f,	// (0x0002d75c) cell_ai5_widget_lrg_icon_pane

0xe792,	// (0x00033f5f) tmo_note_info_pane_t1_ParamLimits

0xe7a7,	// (0x00033f74) tmo_note_info_pane_t2_ParamLimits

0xe7c0,	// (0x00033f8d) tmo_note_info_pane_t3_ParamLimits

0x85f7,	// (0x0002ddc4) tmo_note_info_pane_t4_ParamLimits

0x8609,	// (0x0002ddd6) tmo_note_info_pane_t5_ParamLimits

0xfec0,	// (0x0003568d) tmo_note_info_pane_t_ParamLimits

0xe83a,	// (0x00034007) settings_container_pane_ParamLimits

0x897d,	// (0x0002e14a) indicator_popup_pane_cp5

0x897d,	// (0x0002e14a) indicator_popup_pane_cp6

0xea21,	// (0x000341ee) list_set_graphic_pane_copy1_ParamLimits

0xa026,	// (0x0002f7f3) bg_popup_window_pane_cp23

0x8a24,	// (0x0002e1f1) popup_tmo_big_image_note_window_g1

0x8a30,	// (0x0002e1fd) popup_tmo_big_image_note_window_t1

0x8a40,	// (0x0002e20d) popup_tmo_big_image_note_window_t2

0x8a50,	// (0x0002e21d) popup_tmo_big_image_note_window_t3

0x0002,

0xfed9,	// (0x000356a6) popup_tmo_big_image_note_window_t

0x8a60,	// (0x0002e22d) cell_ai5_widget_lrg_icon_pane_g1

0x8a68,	// (0x0002e235) cell_ai5_widget_lrg_icon_pane_t1

0x8a76,	// (0x0002e243) cell_ai5_widget_list_row_pane_ParamLimits

0x8a76,	// (0x0002e243) cell_ai5_widget_list_row_pane

0x8a8f,	// (0x0002e25c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8a8f,	// (0x0002e25c) cell_ai5_widget_list_row_pane_g1

0x8a9c,	// (0x0002e269) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8a9c,	// (0x0002e269) cell_ai5_widget_list_row_pane_t1

0x8ab4,	// (0x0002e281) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8ab4,	// (0x0002e281) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee0,	// (0x000356ad) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee0,	// (0x000356ad) cell_ai5_widget_list_row_pane_t

0xa026,	// (0x0002f7f3) main_fep_vtchi_ss_pane

0x2c75,	// (0x00028442) popup_fep_char_pre_window

0x2c7d,	// (0x0002844a) popup_fep_ituss_window

0x2c9e,	// (0x0002846b) popup_fep_vkbss_window

0x8adc,	// (0x0002e2a9) grid_vkbss_keypad_pane_ParamLimits

0x8adc,	// (0x0002e2a9) grid_vkbss_keypad_pane

0x8aec,	// (0x0002e2b9) ituss_keypad_pane

0x2ccb,	// (0x00028498) aid_vkbss_key_offset_ParamLimits

0x2ccb,	// (0x00028498) aid_vkbss_key_offset

0x2cd7,	// (0x000284a4) cell_vkbss_key_pane_ParamLimits

0x2cd7,	// (0x000284a4) cell_vkbss_key_pane

0x8afc,	// (0x0002e2c9) bg_cell_vkbss_key_g1_ParamLimits

0x8afc,	// (0x0002e2c9) bg_cell_vkbss_key_g1

0x8b08,	// (0x0002e2d5) cell_vkbss_key_3p_pane_ParamLimits

0x8b08,	// (0x0002e2d5) cell_vkbss_key_3p_pane

0x8b22,	// (0x0002e2ef) cell_vkbss_key_g1_ParamLimits

0x8b22,	// (0x0002e2ef) cell_vkbss_key_g1

0x8b3c,	// (0x0002e309) cell_vkbss_key_t1_ParamLimits

0x8b3c,	// (0x0002e309) cell_vkbss_key_t1

0x2ced,	// (0x000284ba) cell_ituss_key_pane_ParamLimits

0x2ced,	// (0x000284ba) cell_ituss_key_pane

0x8b67,	// (0x0002e334) bg_cell_ituss_key_g1_ParamLimits

0x8b67,	// (0x0002e334) bg_cell_ituss_key_g1

0x8b73,	// (0x0002e340) cell_ituss_key_pane_g1_ParamLimits

0x8b73,	// (0x0002e340) cell_ituss_key_pane_g1

0x8b87,	// (0x0002e354) cell_ituss_key_pane_g2_ParamLimits

0x8b87,	// (0x0002e354) cell_ituss_key_pane_g2

0x0001,

0xfee7,	// (0x000356b4) cell_ituss_key_pane_g_ParamLimits

0xfee7,	// (0x000356b4) cell_ituss_key_pane_g

0x8bb9,	// (0x0002e386) cell_ituss_key_t1_ParamLimits

0x8bb9,	// (0x0002e386) cell_ituss_key_t1

0x8bf3,	// (0x0002e3c0) cell_ituss_key_t2_ParamLimits

0x8bf3,	// (0x0002e3c0) cell_ituss_key_t2

0x8c24,	// (0x0002e3f1) cell_ituss_key_t3_ParamLimits

0x8c24,	// (0x0002e3f1) cell_ituss_key_t3

0x8c55,	// (0x0002e422) cell_ituss_key_t4_ParamLimits

0x8c55,	// (0x0002e422) cell_ituss_key_t4

0x0003,

0xfeec,	// (0x000356b9) cell_ituss_key_t_ParamLimits

0xfeec,	// (0x000356b9) cell_ituss_key_t

0x8c86,	// (0x0002e453) cell_vkbss_key_3p_pane_g1

0x8c8e,	// (0x0002e45b) cell_vkbss_key_3p_pane_g2

0x8c96,	// (0x0002e463) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x000356c2) cell_vkbss_key_3p_pane_g

0xa026,	// (0x0002f7f3) bg_popup_fep_char_preview_window_cp02

0x8c9e,	// (0x0002e46b) popup_fep_char_pre_window_t1

0xe652,	// (0x00033e1f) main_ai5_sk_pane

0x8683,	// (0x0002de50) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x868f,	// (0x0002de5c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x86a2,	// (0x0002de6f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x86ae,	// (0x0002de7b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecb,	// (0x00035698) cell_contacts_ai5_widget_pane_g_ParamLimits

0x86c0,	// (0x0002de8d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd316,	// (0x00032ae3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xea43,	// (0x00034210) main_ai5_sk_pane_g1

0x31e2,	// (0x000289af) popup_query_code_window_g1

0x2c93,	// (0x00028460) popup_fep_vkb_icf_pane

0x2ca9,	// (0x00028476) popup_fep_vtchi_icf_pane

0xd316,	// (0x00032ae3) bg_icf_pane

0x8cb6,	// (0x0002e483) list_vkb_icf_pane

0xd316,	// (0x00032ae3) bg_icf_pane_cp01

0x8cc2,	// (0x0002e48f) vtchi_icf_list_pane

0x8cd3,	// (0x0002e4a0) list_vkb_icf_pane_t1_ParamLimits

0x8cd3,	// (0x0002e4a0) list_vkb_icf_pane_t1

0x8ce9,	// (0x0002e4b6) vtchi_icf_list_pane_t1_ParamLimits

0x8ce9,	// (0x0002e4b6) vtchi_icf_list_pane_t1

0x2c7d,	// (0x0002844a) popup_fep_ituss_window_ParamLimits

0x2ca9,	// (0x00028476) popup_fep_vtchi_icf_pane_ParamLimits

0x8aec,	// (0x0002e2b9) ituss_keypad_pane_ParamLimits

0x2cbf,	// (0x0002848c) ituss_sks_pane

0xd316,	// (0x00032ae3) bg_icf_pane_ParamLimits

0x2c66,	// (0x00028433) icf_edit_indi_pane_ParamLimits

0x2c66,	// (0x00028433) icf_edit_indi_pane

0x8cb6,	// (0x0002e483) list_vkb_icf_pane_ParamLimits

0xd316,	// (0x00032ae3) bg_icf_pane_cp01_ParamLimits

0x2c66,	// (0x00028433) icf_edit_indi_pane_cp01_ParamLimits

0x2c66,	// (0x00028433) icf_edit_indi_pane_cp01

0x8cca,	// (0x0002e497) vtchi_query_pane

0x563d,	// (0x0002ae0a) icf_edit_indi_pane_g1_ParamLimits

0x563d,	// (0x0002ae0a) icf_edit_indi_pane_g1

0x8d6b,	// (0x0002e538) icf_edit_indi_pane_g2_ParamLimits

0x8d6b,	// (0x0002e538) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x000356da) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x000356da) icf_edit_indi_pane_g

0x8d7a,	// (0x0002e547) icf_edit_indi_pane_t1

0x8d01,	// (0x0002e4ce) bg_input_focus_pane_cp042

0xd24f,	// (0x00032a1c) vtchi_button_pane

0x8d0a,	// (0x0002e4d7) vtchi_query_pane_t1

0x8d18,	// (0x0002e4e5) vtchi_query_pane_t2

0x8d26,	// (0x0002e4f3) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x000356c9) vtchi_query_pane_t

0xa026,	// (0x0002f7f3) bg_button_pane_cp13

0x8d34,	// (0x0002e501) vtchi_button_pane_g1

0x8d3c,	// (0x0002e509) ituss_sks_pane_g1

0x8d47,	// (0x0002e514) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x000356d0) ituss_sks_pane_g

0x8d4f,	// (0x0002e51c) ituss_sks_pane_t1

0x8d5d,	// (0x0002e52a) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x000356d5) ituss_sks_pane_t

0x4e72,	// (0x0002a63f) indicator_nsta_pane_cp_g1

0x4e7b,	// (0x0002a648) indicator_nsta_pane_cp_g2

0x4e83,	// (0x0002a650) indicator_nsta_pane_cp_g3

0x4e8b,	// (0x0002a658) indicator_nsta_pane_cp_g4

0x4e93,	// (0x0002a660) indicator_nsta_pane_cp_g5

0x4e9b,	// (0x0002a668) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x00035282) indicator_nsta_pane_cp_g

0xe175,	// (0x00033942) cell_graphic2_pane_t2_ParamLimits

0xe175,	// (0x00033942) cell_graphic2_pane_t2

0x0001,

0xfdc2,	// (0x0003558f) cell_graphic2_pane_t_ParamLimits

0xfdc2,	// (0x0003558f) cell_graphic2_pane_t

0xe1ab,	// (0x00033978) cell_graphic2_control_pane_t1

0xa83e,	// (0x0003000b) signal_pane_g3_ParamLimits

0xa83e,	// (0x0003000b) signal_pane_g3

0xa852,	// (0x0003001f) signal_pane_g4_ParamLimits

0xa852,	// (0x0003001f) signal_pane_g4

0x8ac6,	// (0x0002e293) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8ac6,	// (0x0002e293) cell_ai5_widget_list_row_pane_t3

0x8ba7,	// (0x0002e374) cell_ituss_key_pane_t1_ParamLimits

0x8ba7,	// (0x0002e374) cell_ituss_key_pane_t1

0x2e5f,	// (0x0002862c) form_field_data_wide_pane_vc_t2_ParamLimits

0x2e5f,	// (0x0002862c) form_field_data_wide_pane_vc_t2

0x2e73,	// (0x00028640) form_field_data_wide_pane_vc_t3_ParamLimits

0x2e73,	// (0x00028640) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x00034fd7) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x00034fd7) form_field_data_wide_pane_vc_t

0x4b1d,	// (0x0002a2ea) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4b1d,	// (0x0002a2ea) form_field_slider_wide_pane_vc_t3

0x4bf3,	// (0x0002a3c0) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4bf3,	// (0x0002a3c0) form_field_popup_wide_pane_vc_t2

0x4c0a,	// (0x0002a3d7) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4c0a,	// (0x0002a3d7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x00035271) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x00035271) form_field_popup_wide_pane_vc_t

0xcc3b,	// (0x00032408) aid_fshwr2_btn_pane_ParamLimits

0xcc4a,	// (0x00032417) aid_fshwr2_syb_pane_ParamLimits

0xcc5c,	// (0x00032429) aid_fshwr2_txt_pane_ParamLimits

0xd316,	// (0x00032ae3) fshwr2_bg_pane_ParamLimits

0xcc6b,	// (0x00032438) fshwr2_func_candi_pane_ParamLimits

0xcc7c,	// (0x00032449) fshwr2_hwr_syb_pane_ParamLimits

0xcc97,	// (0x00032464) fshwr2_icf_pane_ParamLimits
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

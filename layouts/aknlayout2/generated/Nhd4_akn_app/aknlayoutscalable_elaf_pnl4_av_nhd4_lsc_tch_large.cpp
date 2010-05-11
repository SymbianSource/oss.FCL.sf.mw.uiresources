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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000494dc };

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
0x947d,	// (0x00052959) Screen

0x9491,	// (0x0005296d) application_window_ParamLimits

0x9491,	// (0x0005296d) application_window

0x94ab,	// (0x00052987) screen_g1

0x94dd,	// (0x000529b9) area_bottom_pane_ParamLimits

0x94dd,	// (0x000529b9) area_bottom_pane

0xedaf,	// (0x0005828b) area_top_pane_ParamLimits

0xedaf,	// (0x0005828b) area_top_pane

0xee43,	// (0x0005831f) main_pane_ParamLimits

0xee43,	// (0x0005831f) main_pane

0x959b,	// (0x00052a77) misc_graphics

0xc050,	// (0x0005552c) battery_pane_ParamLimits

0xc050,	// (0x0005552c) battery_pane

0x32c6,	// (0x0004c7a2) bg_status_flat_pane_g8

0x32ce,	// (0x0004c7aa) bg_status_flat_pane_g9

0x26d4,	// (0x0004bbb0) context_pane_ParamLimits

0x26d4,	// (0x0004bbb0) context_pane

0xc1bb,	// (0x00055697) navi_pane_ParamLimits

0xc1bb,	// (0x00055697) navi_pane

0xc239,	// (0x00055715) signal_pane_ParamLimits

0xc239,	// (0x00055715) signal_pane

0x0008,

0xf879,	// (0x00058d55) bg_status_flat_pane_g

0xc2c9,	// (0x000557a5) status_pane_g1_ParamLimits

0xc2c9,	// (0x000557a5) status_pane_g1

0xc2df,	// (0x000557bb) status_pane_g2_ParamLimits

0xc2df,	// (0x000557bb) status_pane_g2

0x28fb,	// (0x0004bdd7) status_pane_g3_ParamLimits

0x28fb,	// (0x0004bdd7) status_pane_g3

0x0004,

0xf7a5,	// (0x00058c81) status_pane_g_ParamLimits

0xf7a5,	// (0x00058c81) status_pane_g

0xc2eb,	// (0x000557c7) title_pane_ParamLimits

0xc2eb,	// (0x000557c7) title_pane

0xc34e,	// (0x0005582a) uni_indicator_pane_ParamLimits

0xc34e,	// (0x0005582a) uni_indicator_pane

0x2530,	// (0x0004ba0c) bg_list_pane_ParamLimits

0x2530,	// (0x0004ba0c) bg_list_pane

0xadc9,	// (0x000542a5) find_pane

0xadd1,	// (0x000542ad) listscroll_app_pane_ParamLimits

0xadd1,	// (0x000542ad) listscroll_app_pane

0x255c,	// (0x0004ba38) listscroll_form_pane

0xade1,	// (0x000542bd) listscroll_gen_pane_ParamLimits

0xade1,	// (0x000542bd) listscroll_gen_pane

0x074d,	// (0x00049c29) listscroll_set_pane

0x3e37,	// (0x0004d313) main_idle_act_pane

0x04b6,	// (0x00049992) main_idle_trad_pane

0x04b6,	// (0x00049992) main_list_empty_pane

0x2576,	// (0x0004ba52) main_midp_pane

0x2582,	// (0x0004ba5e) main_pane_g1_ParamLimits

0x2582,	// (0x0004ba5e) main_pane_g1

0xadf5,	// (0x000542d1) popup_ai_message_window_ParamLimits

0xadf5,	// (0x000542d1) popup_ai_message_window

0xaea6,	// (0x00054382) popup_fep_china_uni_window_ParamLimits

0xaea6,	// (0x00054382) popup_fep_china_uni_window

0xaf00,	// (0x000543dc) popup_fep_japan_candidate_window_ParamLimits

0xaf00,	// (0x000543dc) popup_fep_japan_candidate_window

0xaf1e,	// (0x000543fa) popup_fep_japan_predictive_window_ParamLimits

0xaf1e,	// (0x000543fa) popup_fep_japan_predictive_window

0xaf30,	// (0x0005440c) popup_find_window

0xaf4d,	// (0x00054429) popup_grid_graphic_window_ParamLimits

0xaf4d,	// (0x00054429) popup_grid_graphic_window

0xafeb,	// (0x000544c7) popup_large_graphic_colour_window

0xb011,	// (0x000544ed) popup_menu_window_ParamLimits

0xb011,	// (0x000544ed) popup_menu_window

0xb1e3,	// (0x000546bf) popup_note_image_window

0xb1a9,	// (0x00054685) popup_note_wait_window_ParamLimits

0xb1a9,	// (0x00054685) popup_note_wait_window

0xb1fb,	// (0x000546d7) popup_note_window_ParamLimits

0xb1fb,	// (0x000546d7) popup_note_window

0xb2aa,	// (0x00054786) popup_query_code_window_ParamLimits

0xb2aa,	// (0x00054786) popup_query_code_window

0xb2e4,	// (0x000547c0) popup_query_data_code_window_ParamLimits

0xb2e4,	// (0x000547c0) popup_query_data_code_window

0xb301,	// (0x000547dd) popup_query_data_window_ParamLimits

0xb301,	// (0x000547dd) popup_query_data_window

0xb383,	// (0x0005485f) popup_query_sat_info_window_ParamLimits

0xb383,	// (0x0005485f) popup_query_sat_info_window

0xb41a,	// (0x000548f6) popup_snote_single_graphic_window_ParamLimits

0xb41a,	// (0x000548f6) popup_snote_single_graphic_window

0xb41a,	// (0x000548f6) popup_snote_single_text_window_ParamLimits

0xb41a,	// (0x000548f6) popup_snote_single_text_window

0x0bab,	// (0x0004a087) popup_sub_window_general

0xb577,	// (0x00054a53) popup_window_general_ParamLimits

0xb577,	// (0x00054a53) popup_window_general

0x2590,	// (0x0004ba6c) power_save_pane

0xac31,	// (0x0005410d) control_pane_g1_ParamLimits

0xac31,	// (0x0005410d) control_pane_g1

0xac5a,	// (0x00054136) control_pane_g2_ParamLimits

0xac5a,	// (0x00054136) control_pane_g2

0x24f3,	// (0x0004b9cf) control_pane_g3_ParamLimits

0x24f3,	// (0x0004b9cf) control_pane_g3

0x0007,

0xf78d,	// (0x00058c69) control_pane_g_ParamLimits

0xf78d,	// (0x00058c69) control_pane_g

0xacc2,	// (0x0005419e) control_pane_t1_ParamLimits

0xacc2,	// (0x0005419e) control_pane_t1

0xad20,	// (0x000541fc) control_pane_t2_ParamLimits

0xad20,	// (0x000541fc) control_pane_t2

0x0002,

0xf79e,	// (0x00058c7a) control_pane_t_ParamLimits

0xf79e,	// (0x00058c7a) control_pane_t

0xab8a,	// (0x00054066) navi_navi_volume_pane_cp1

0xab92,	// (0x0005406e) status_small_icon_pane

0x2428,	// (0x0004b904) status_small_pane_g1_ParamLimits

0x2428,	// (0x0004b904) status_small_pane_g1

0xab9a,	// (0x00054076) status_small_pane_g2_ParamLimits

0xab9a,	// (0x00054076) status_small_pane_g2

0xaba6,	// (0x00054082) status_small_pane_g3_ParamLimits

0xaba6,	// (0x00054082) status_small_pane_g3

0xabb2,	// (0x0005408e) status_small_pane_g4_ParamLimits

0xabb2,	// (0x0005408e) status_small_pane_g4

0xabbe,	// (0x0005409a) status_small_pane_g5_ParamLimits

0xabbe,	// (0x0005409a) status_small_pane_g5

0xabcc,	// (0x000540a8) status_small_pane_g6_ParamLimits

0xabcc,	// (0x000540a8) status_small_pane_g6

0x0007,

0xf77c,	// (0x00058c58) status_small_pane_g_ParamLimits

0xf77c,	// (0x00058c58) status_small_pane_g

0xabfb,	// (0x000540d7) status_small_pane_t1

0xac1d,	// (0x000540f9) status_small_wait_pane_ParamLimits

0xac1d,	// (0x000540f9) status_small_wait_pane

0xa85f,	// (0x00053d3b) aid_levels_signal_ParamLimits

0xa85f,	// (0x00053d3b) aid_levels_signal

0xa877,	// (0x00053d53) signal_pane_g1_ParamLimits

0xa877,	// (0x00053d53) signal_pane_g1

0xa892,	// (0x00053d6e) signal_pane_g2_ParamLimits

0xa892,	// (0x00053d6e) signal_pane_g2

0x0003,

0xf70d,	// (0x00058be9) signal_pane_g_ParamLimits

0xf70d,	// (0x00058be9) signal_pane_g

0xa8da,	// (0x00053db6) context_pane_g1

0x96e5,	// (0x00052bc1) title_pane_g1

0x9728,	// (0x00052c04) title_pane_t1

0x97b4,	// (0x00052c90) title_pane_t2

0x97da,	// (0x00052cb6) title_pane_t3

0x0002,

0xf557,	// (0x00058a33) title_pane_t

0xc376,	// (0x00055852) aid_levels_battery_ParamLimits

0xc376,	// (0x00055852) aid_levels_battery

0xc392,	// (0x0005586e) battery_pane_g1_ParamLimits

0xc392,	// (0x0005586e) battery_pane_g1

0xc3af,	// (0x0005588b) battery_pane_g2_ParamLimits

0xc3af,	// (0x0005588b) battery_pane_g2

0x0001,

0xf7b0,	// (0x00058c8c) battery_pane_g_ParamLimits

0xf7b0,	// (0x00058c8c) battery_pane_g

0xc982,	// (0x00055e5e) uni_indicator_pane_g1

0xc998,	// (0x00055e74) uni_indicator_pane_g2

0xc9ae,	// (0x00055e8a) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x00058dfd) uni_indicator_pane_g

0xe37b,	// (0x00057857) navi_icon_pane_ParamLimits

0xe37b,	// (0x00057857) navi_icon_pane

0xe2d0,	// (0x000577ac) navi_midp_pane

0xe397,	// (0x00057873) navi_navi_pane

0xe3a1,	// (0x0005787d) navi_text_pane_ParamLimits

0xe3a1,	// (0x0005787d) navi_text_pane

0x94ab,	// (0x00052987) status_small_wait_pane_g1

0x9d34,	// (0x00053210) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00058df8) status_small_wait_pane_g

0xc8db,	// (0x00055db7) navi_navi_icon_text_pane

0x3919,	// (0x0004cdf5) navi_navi_pane_g1_ParamLimits

0x3919,	// (0x0004cdf5) navi_navi_pane_g1

0x392b,	// (0x0004ce07) navi_navi_pane_g2_ParamLimits

0x392b,	// (0x0004ce07) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00058dc6) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00058dc6) navi_navi_pane_g

0x393d,	// (0x0004ce19) navi_navi_tabs_pane

0x3946,	// (0x0004ce22) navi_navi_text_pane

0xc8db,	// (0x00055db7) navi_navi_volume_pane

0x38ed,	// (0x0004cdc9) navi_text_pane_t1

0x38e1,	// (0x0004cdbd) navi_icon_pane_g1

0x3834,	// (0x0004cd10) navi_navi_text_pane_t1

0xb634,	// (0x00054b10) navi_navi_volume_pane_g1

0x0f99,	// (0x0004a475) volume_small_pane

0x379a,	// (0x0004cc76) navi_navi_icon_text_pane_g1

0xc833,	// (0x00055d0f) navi_navi_icon_text_pane_t1

0xe397,	// (0x00057873) navi_tabs_2_long_pane

0xe397,	// (0x00057873) navi_tabs_2_pane

0xe397,	// (0x00057873) navi_tabs_3_long_pane

0xe397,	// (0x00057873) navi_tabs_3_pane

0xe397,	// (0x00057873) navi_tabs_4_pane

0x0f71,	// (0x0004a44d) tabs_2_active_pane_ParamLimits

0x0f71,	// (0x0004a44d) tabs_2_active_pane

0x0f81,	// (0x0004a45d) tabs_2_passive_pane_ParamLimits

0x0f81,	// (0x0004a45d) tabs_2_passive_pane

0x0f3f,	// (0x0004a41b) tabs_3_active_pane_ParamLimits

0x0f3f,	// (0x0004a41b) tabs_3_active_pane

0x0f4f,	// (0x0004a42b) tabs_3_passive_pane_ParamLimits

0x0f4f,	// (0x0004a42b) tabs_3_passive_pane

0x0f60,	// (0x0004a43c) tabs_3_passive_pane_cp_ParamLimits

0x0f60,	// (0x0004a43c) tabs_3_passive_pane_cp

0x0efb,	// (0x0004a3d7) tabs_4_active_pane_ParamLimits

0x0efb,	// (0x0004a3d7) tabs_4_active_pane

0x0f0c,	// (0x0004a3e8) tabs_4_passive_pane_ParamLimits

0x0f0c,	// (0x0004a3e8) tabs_4_passive_pane

0x0f1d,	// (0x0004a3f9) tabs_4_passive_pane_cp_ParamLimits

0x0f1d,	// (0x0004a3f9) tabs_4_passive_pane_cp

0x0f2e,	// (0x0004a40a) tabs_4_passive_pane_cp2_ParamLimits

0x0f2e,	// (0x0004a40a) tabs_4_passive_pane_cp2

0x0ed7,	// (0x0004a3b3) tabs_2_long_active_pane_ParamLimits

0x0ed7,	// (0x0004a3b3) tabs_2_long_active_pane

0x0ee9,	// (0x0004a3c5) tabs_2_long_passive_pane_ParamLimits

0x0ee9,	// (0x0004a3c5) tabs_2_long_passive_pane

0x0e92,	// (0x0004a36e) tabs_3_long_active_pane_ParamLimits

0x0e92,	// (0x0004a36e) tabs_3_long_active_pane

0x0eab,	// (0x0004a387) tabs_3_long_passive_pane_ParamLimits

0x0eab,	// (0x0004a387) tabs_3_long_passive_pane

0x0ebe,	// (0x0004a39a) tabs_3_long_passive_pane_cp_ParamLimits

0x0ebe,	// (0x0004a39a) tabs_3_long_passive_pane_cp

0x0e38,	// (0x0004a314) volume_small_pane_g1

0x0e41,	// (0x0004a31d) volume_small_pane_g2

0x0e4a,	// (0x0004a326) volume_small_pane_g3

0x0e53,	// (0x0004a32f) volume_small_pane_g4

0x0e5c,	// (0x0004a338) volume_small_pane_g5

0x0e65,	// (0x0004a341) volume_small_pane_g6

0x0e6e,	// (0x0004a34a) volume_small_pane_g7

0x0e77,	// (0x0004a353) volume_small_pane_g8

0x0e80,	// (0x0004a35c) volume_small_pane_g9

0x0e89,	// (0x0004a365) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00058d92) volume_small_pane_g

0x97ec,	// (0x00052cc8) bg_active_tab_pane_cp2_ParamLimits

0x97ec,	// (0x00052cc8) bg_active_tab_pane_cp2

0x97fa,	// (0x00052cd6) tabs_3_active_pane_g1

0x9802,	// (0x00052cde) tabs_3_active_pane_t1

0x97ec,	// (0x00052cc8) bg_passive_tab_pane_cp2_ParamLimits

0x97ec,	// (0x00052cc8) bg_passive_tab_pane_cp2

0x97fa,	// (0x00052cd6) tabs_3_passive_pane_g1

0x9802,	// (0x00052cde) tabs_3_passive_pane_t1

0x97ec,	// (0x00052cc8) bg_active_tab_pane_cp3_ParamLimits

0x97ec,	// (0x00052cc8) bg_active_tab_pane_cp3

0x9814,	// (0x00052cf0) tabs_4_active_pane_g1

0x981c,	// (0x00052cf8) tabs_4_active_pane_t1

0x97ec,	// (0x00052cc8) bg_passive_tab_pane_cp3_ParamLimits

0x97ec,	// (0x00052cc8) bg_passive_tab_pane_cp3

0x9814,	// (0x00052cf0) tabs_4_1_passive_pane_g1

0x981c,	// (0x00052cf8) tabs_4_1_passive_pane_t1

0x2576,	// (0x0004ba52) list_highlight_pane_cp2

0xcab6,	// (0x00055f92) list_set_pane_ParamLimits

0xcab6,	// (0x00055f92) list_set_pane

0xcb50,	// (0x0005602c) main_pane_set_t1_ParamLimits

0xcb50,	// (0x0005602c) main_pane_set_t1

0xcb70,	// (0x0005604c) main_pane_set_t2_ParamLimits

0xcb70,	// (0x0005604c) main_pane_set_t2

0xcb84,	// (0x00056060) main_pane_set_t3_ParamLimits

0xcb84,	// (0x00056060) main_pane_set_t3

0xcb96,	// (0x00056072) main_pane_set_t4_ParamLimits

0xcb96,	// (0x00056072) main_pane_set_t4

0x0003,

0xf986,	// (0x00058e62) main_pane_set_t_ParamLimits

0xf986,	// (0x00058e62) main_pane_set_t

0xcba8,	// (0x00056084) setting_code_pane

0xcbb2,	// (0x0005608e) setting_slider_graphic_pane

0xcbb2,	// (0x0005608e) setting_slider_pane

0xcbb2,	// (0x0005608e) setting_text_pane

0xcbb2,	// (0x0005608e) setting_volume_pane

0x982e,	// (0x00052d0a) volume_set_pane

0x9836,	// (0x00052d12) bg_set_opt_pane_cp

0x9844,	// (0x00052d20) setting_slider_pane_t1

0x985d,	// (0x00052d39) setting_slider_pane_t2

0x9877,	// (0x00052d53) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00058a3a) setting_slider_pane_t

0x988f,	// (0x00052d6b) slider_set_pane

0x959b,	// (0x00052a77) bg_set_opt_pane_cp2

0x98a5,	// (0x00052d81) setting_slider_graphic_pane_g1

0x98ae,	// (0x00052d8a) setting_slider_graphic_pane_t1

0x98be,	// (0x00052d9a) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00058a41) setting_slider_graphic_pane_t

0x98ce,	// (0x00052daa) slider_set_pane_cp

0x959b,	// (0x00052a77) input_focus_pane_cp1

0x3e1e,	// (0x0004d2fa) list_set_text_pane

0x94ab,	// (0x00052987) setting_text_pane_g1

0x959b,	// (0x00052a77) input_focus_pane_cp2

0x94ab,	// (0x00052987) setting_code_pane_g1

0x98d6,	// (0x00052db2) setting_code_pane_t1

0xe15c,	// (0x00057638) set_text_pane_t1_ParamLimits

0xe15c,	// (0x00057638) set_text_pane_t1

0xa1b5,	// (0x00053691) set_opt_bg_pane_g1

0xa1bd,	// (0x00053699) set_opt_bg_pane_g2

0xca6b,	// (0x00055f47) set_opt_bg_pane_g3

0xa1cd,	// (0x000536a9) set_opt_bg_pane_g4

0xa1d5,	// (0x000536b1) set_opt_bg_pane_g5

0xa1dd,	// (0x000536b9) set_opt_bg_pane_g6

0xca75,	// (0x00055f51) set_opt_bg_pane_g7

0xca7d,	// (0x00055f59) set_opt_bg_pane_g8

0xca87,	// (0x00055f63) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00058e4f) set_opt_bg_pane_g

0xca5e,	// (0x00055f3a) slider_set_pane_g1

0x1006,	// (0x0004a4e2) slider_set_pane_g2

0x0006,

0xf964,	// (0x00058e40) slider_set_pane_g

0xb63c,	// (0x00054b18) volume_set_pane_g1

0xb644,	// (0x00054b20) volume_set_pane_g2

0xb64c,	// (0x00054b28) volume_set_pane_g3

0xb654,	// (0x00054b30) volume_set_pane_g4

0xb65c,	// (0x00054b38) volume_set_pane_g5

0xb664,	// (0x00054b40) volume_set_pane_g6

0xb66c,	// (0x00054b48) volume_set_pane_g7

0xb674,	// (0x00054b50) volume_set_pane_g8

0xb67c,	// (0x00054b58) volume_set_pane_g9

0xb684,	// (0x00054b60) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00058e18) volume_set_pane_g

0x98e4,	// (0x00052dc0) indicator_pane_ParamLimits

0x98e4,	// (0x00052dc0) indicator_pane

0x990c,	// (0x00052de8) main_idle_pane_g2_ParamLimits

0x990c,	// (0x00052de8) main_idle_pane_g2

0x9944,	// (0x00052e20) main_pane_idle_g1_ParamLimits

0x9944,	// (0x00052e20) main_pane_idle_g1

0x996b,	// (0x00052e47) popup_clock_digital_analogue_window_ParamLimits

0x996b,	// (0x00052e47) popup_clock_digital_analogue_window

0x9982,	// (0x00052e5e) soft_indicator_pane_ParamLimits

0x9982,	// (0x00052e5e) soft_indicator_pane

0x99a6,	// (0x00052e82) wallpaper_pane_ParamLimits

0x99a6,	// (0x00052e82) wallpaper_pane

0x94ab,	// (0x00052987) wallpaper_pane_g1

0x99c0,	// (0x00052e9c) indicator_pane_g1_ParamLimits

0x99c0,	// (0x00052e9c) indicator_pane_g1

0x41eb,	// (0x0004d6c7) navi_navi_icon_text_pane_srt_g1

0x99e5,	// (0x00052ec1) soft_indicator_pane_t1

0x99ff,	// (0x00052edb) aid_ps_area_pane

0x9a10,	// (0x00052eec) aid_ps_clock_pane

0x9a1e,	// (0x00052efa) aid_ps_indicator_pane

0x9a2a,	// (0x00052f06) indicator_ps_pane_ParamLimits

0x9a2a,	// (0x00052f06) indicator_ps_pane

0x9a39,	// (0x00052f15) power_save_pane_g1_ParamLimits

0x9a39,	// (0x00052f15) power_save_pane_g1

0x9a45,	// (0x00052f21) power_save_pane_g2_ParamLimits

0x9a45,	// (0x00052f21) power_save_pane_g2

0xed8f,	// (0x0005826b) aid_navinavi_width_pane

0x99ff,	// (0x00052edb) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00058a46) power_save_pane_g_ParamLimits

0xf56a,	// (0x00058a46) power_save_pane_g

0x9a53,	// (0x00052f2f) power_save_pane_t1_ParamLimits

0x9a53,	// (0x00052f2f) power_save_pane_t1

0x9a10,	// (0x00052eec) aid_ps_clock_pane_ParamLimits

0x9a1e,	// (0x00052efa) aid_ps_indicator_pane_ParamLimits

0x9a65,	// (0x00052f41) power_save_pane_t4_ParamLimits

0x9a65,	// (0x00052f41) power_save_pane_t4

0x0001,

0xf56f,	// (0x00058a4b) power_save_pane_t_ParamLimits

0xf56f,	// (0x00058a4b) power_save_pane_t

0x9a8f,	// (0x00052f6b) power_save_t3_ParamLimits

0x9a8f,	// (0x00052f6b) power_save_t3

0x9a7a,	// (0x00052f56) power_save_t2_ParamLimits

0x9a7a,	// (0x00052f56) power_save_t2

0x9aa4,	// (0x00052f80) indicator_ps_pane_g1

0x9aad,	// (0x00052f89) ai_gene_pane_ParamLimits

0x9aad,	// (0x00052f89) ai_gene_pane

0x9ac4,	// (0x00052fa0) ai_links_pane_ParamLimits

0x9ac4,	// (0x00052fa0) ai_links_pane

0x9adc,	// (0x00052fb8) indicator_pane_cp1_ParamLimits

0x9adc,	// (0x00052fb8) indicator_pane_cp1

0x9aeb,	// (0x00052fc7) main_pane_idle_g1_cp_ParamLimits

0x9aeb,	// (0x00052fc7) main_pane_idle_g1_cp

0x9b03,	// (0x00052fdf) popup_ai_links_title_window

0x9b0c,	// (0x00052fe8) soft_indicator_pane_cp1_ParamLimits

0x9b0c,	// (0x00052fe8) soft_indicator_pane_cp1

0x3bd8,	// (0x0004d0b4) ai_links_pane_g1

0x3be1,	// (0x0004d0bd) grid_ai_links_pane

0xc979,	// (0x00055e55) ai_gene_pane_1

0x3bc6,	// (0x0004d0a2) ai_gene_pane_2

0x3bcf,	// (0x0004d0ab) list_highlight_pane_cp4

0xc955,	// (0x00055e31) cell_ai_link_pane_ParamLimits

0xc955,	// (0x00055e31) cell_ai_link_pane

0x3b97,	// (0x0004d073) cell_ai_link_pane_g1

0x9d34,	// (0x00053210) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x00058df3) cell_ai_link_pane_g

0x959b,	// (0x00052a77) grid_highlight_cp2

0x959b,	// (0x00052a77) bg_popup_sub_pane_cp1

0x9b2e,	// (0x0005300a) popup_ai_links_title_window_t1

0x3ae7,	// (0x0004cfc3) ai_gene_pane_1_g1_ParamLimits

0x3ae7,	// (0x0004cfc3) ai_gene_pane_1_g1

0x3af3,	// (0x0004cfcf) ai_gene_pane_1_g2_ParamLimits

0x3af3,	// (0x0004cfcf) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00058de9) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00058de9) ai_gene_pane_1_g

0x3b00,	// (0x0004cfdc) ai_gene_pane_1_t1_ParamLimits

0x3b00,	// (0x0004cfdc) ai_gene_pane_1_t1

0x3b34,	// (0x0004d010) grid_ai_soft_ind_pane

0x3ad2,	// (0x0004cfae) ai_gene_pane_2_t1_ParamLimits

0x3ad2,	// (0x0004cfae) ai_gene_pane_2_t1

0x9b3d,	// (0x00053019) main_pane_empty_t1_ParamLimits

0x9b3d,	// (0x00053019) main_pane_empty_t1

0x9b55,	// (0x00053031) main_pane_empty_t2_ParamLimits

0x9b55,	// (0x00053031) main_pane_empty_t2

0x9b6a,	// (0x00053046) main_pane_empty_t3_ParamLimits

0x9b6a,	// (0x00053046) main_pane_empty_t3

0x9b7c,	// (0x00053058) main_pane_empty_t4_ParamLimits

0x9b7c,	// (0x00053058) main_pane_empty_t4

0x9b8e,	// (0x0005306a) main_pane_empty_t5_ParamLimits

0x9b8e,	// (0x0005306a) main_pane_empty_t5

0x0004,

0xf574,	// (0x00058a50) main_pane_empty_t_ParamLimits

0xf574,	// (0x00058a50) main_pane_empty_t

0xa206,	// (0x000536e2) bg_popup_window_pane_ParamLimits

0xa206,	// (0x000536e2) bg_popup_window_pane

0xc8cf,	// (0x00055dab) find_popup_pane_cp2_ParamLimits

0xc8cf,	// (0x00055dab) find_popup_pane_cp2

0x384e,	// (0x0004cd2a) heading_pane_ParamLimits

0x384e,	// (0x0004cd2a) heading_pane

0x959b,	// (0x00052a77) bg_popup_sub_pane

0xc850,	// (0x00055d2c) bg_popup_window_pane_g1_ParamLimits

0xc850,	// (0x00055d2c) bg_popup_window_pane_g1

0xc85f,	// (0x00055d3b) bg_popup_window_pane_g2_ParamLimits

0xc85f,	// (0x00055d3b) bg_popup_window_pane_g2

0xc86b,	// (0x00055d47) bg_popup_window_pane_g3_ParamLimits

0xc86b,	// (0x00055d47) bg_popup_window_pane_g3

0xc877,	// (0x00055d53) bg_popup_window_pane_g4_ParamLimits

0xc877,	// (0x00055d53) bg_popup_window_pane_g4

0xc886,	// (0x00055d62) bg_popup_window_pane_g5_ParamLimits

0xc886,	// (0x00055d62) bg_popup_window_pane_g5

0xc896,	// (0x00055d72) bg_popup_window_pane_g6_ParamLimits

0xc896,	// (0x00055d72) bg_popup_window_pane_g6

0xc8a2,	// (0x00055d7e) bg_popup_window_pane_g7_ParamLimits

0xc8a2,	// (0x00055d7e) bg_popup_window_pane_g7

0xc8b1,	// (0x00055d8d) bg_popup_window_pane_g8_ParamLimits

0xc8b1,	// (0x00055d8d) bg_popup_window_pane_g8

0xc8c0,	// (0x00055d9c) bg_popup_window_pane_g9_ParamLimits

0xc8c0,	// (0x00055d9c) bg_popup_window_pane_g9

0x3828,	// (0x0004cd04) bg_popup_window_pane_g10_ParamLimits

0x3828,	// (0x0004cd04) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00058db1) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00058db1) bg_popup_window_pane_g

0x3751,	// (0x0004cc2d) bg_popup_heading_pane_ParamLimits

0x3751,	// (0x0004cc2d) bg_popup_heading_pane

0x112a,	// (0x0004a606) tabs_4_passive_pane_cp_srt_ParamLimits

0x112a,	// (0x0004a606) tabs_4_passive_pane_cp_srt

0x113c,	// (0x0004a618) tabs_4_passive_pane_srt_ParamLimits

0x3765,	// (0x0004cc41) heading_pane_g2

0x113c,	// (0x0004a618) tabs_4_passive_pane_srt

0x2af7,	// (0x0004bfd3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2af7,	// (0x0004bfd3) bg_passive_tab_pane_cp3_srt

0x376d,	// (0x0004cc49) heading_pane_t1_ParamLimits

0x376d,	// (0x0004cc49) heading_pane_t1

0x3784,	// (0x0004cc60) heading_pane_t2_ParamLimits

0x3784,	// (0x0004cc60) heading_pane_t2

0x0001,

0xf8d0,	// (0x00058dac) heading_pane_t_ParamLimits

0xf8d0,	// (0x00058dac) heading_pane_t

0x328e,	// (0x0004c76a) bg_popup_heading_pane_g1

0x333d,	// (0x0004c819) bg_popup_heading_pane_g2

0x3347,	// (0x0004c823) bg_popup_heading_pane_g3

0x3351,	// (0x0004c82d) bg_popup_heading_pane_g4

0x335b,	// (0x0004c837) bg_popup_heading_pane_g5

0x3365,	// (0x0004c841) bg_popup_heading_pane_g6

0x336d,	// (0x0004c849) bg_popup_heading_pane_g7

0x3375,	// (0x0004c851) bg_popup_heading_pane_g8

0x337f,	// (0x0004c85b) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00058d68) bg_popup_heading_pane_g

0x2a83,	// (0x0004bf5f) bg_popup_sub_pane_g1

0x2a8b,	// (0x0004bf67) bg_popup_sub_pane_g2

0x2a93,	// (0x0004bf6f) bg_popup_sub_pane_g3

0x2a9b,	// (0x0004bf77) bg_popup_sub_pane_g4

0x2aa3,	// (0x0004bf7f) bg_popup_sub_pane_g5

0x2aab,	// (0x0004bf87) bg_popup_sub_pane_g6

0x2ab3,	// (0x0004bf8f) bg_popup_sub_pane_g7

0x2abb,	// (0x0004bf97) bg_popup_sub_pane_g8

0x2ac3,	// (0x0004bf9f) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00058d42) bg_popup_sub_pane_g

0x97ec,	// (0x00052cc8) bg_popup_window_pane_cp5_ParamLimits

0x97ec,	// (0x00052cc8) bg_popup_window_pane_cp5

0x9bae,	// (0x0005308a) popup_note_window_g1_ParamLimits

0x9bae,	// (0x0005308a) popup_note_window_g1

0x9bba,	// (0x00053096) popup_note_window_t1_ParamLimits

0x9bba,	// (0x00053096) popup_note_window_t1

0x9bd0,	// (0x000530ac) popup_note_window_t2_ParamLimits

0x9bd0,	// (0x000530ac) popup_note_window_t2

0x9be6,	// (0x000530c2) popup_note_window_t3_ParamLimits

0x9be6,	// (0x000530c2) popup_note_window_t3

0x9bfc,	// (0x000530d8) popup_note_window_t4_ParamLimits

0x9bfc,	// (0x000530d8) popup_note_window_t4

0x9c24,	// (0x00053100) popup_note_window_t5_ParamLimits

0x9c24,	// (0x00053100) popup_note_window_t5

0x0004,

0xf57f,	// (0x00058a5b) popup_note_window_t_ParamLimits

0xf57f,	// (0x00058a5b) popup_note_window_t

0x9c48,	// (0x00053124) bg_popup_window_pane_cp6_ParamLimits

0x9c48,	// (0x00053124) bg_popup_window_pane_cp6

0x320a,	// (0x0004c6e6) popup_note_image_window_g1_ParamLimits

0x320a,	// (0x0004c6e6) popup_note_image_window_g1

0xc6f5,	// (0x00055bd1) popup_note_image_window_g2_ParamLimits

0xc6f5,	// (0x00055bd1) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00058d36) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00058d36) popup_note_image_window_g

0x322f,	// (0x0004c70b) popup_note_image_window_t1_ParamLimits

0x322f,	// (0x0004c70b) popup_note_image_window_t1

0x3248,	// (0x0004c724) popup_note_image_window_t2_ParamLimits

0x3248,	// (0x0004c724) popup_note_image_window_t2

0x3261,	// (0x0004c73d) popup_note_image_window_t3_ParamLimits

0x3261,	// (0x0004c73d) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00058d3b) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00058d3b) popup_note_image_window_t

0x30d3,	// (0x0004c5af) bg_popup_window_pane_cp7_ParamLimits

0x30d3,	// (0x0004c5af) bg_popup_window_pane_cp7

0x3103,	// (0x0004c5df) popup_note_wait_window_g1_ParamLimits

0x3103,	// (0x0004c5df) popup_note_wait_window_g1

0x310f,	// (0x0004c5eb) popup_note_wait_window_g2_ParamLimits

0x310f,	// (0x0004c5eb) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00058d24) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00058d24) popup_note_wait_window_g

0x3127,	// (0x0004c603) popup_note_wait_window_t1_ParamLimits

0x3127,	// (0x0004c603) popup_note_wait_window_t1

0xc696,	// (0x00055b72) popup_note_wait_window_t2_ParamLimits

0xc696,	// (0x00055b72) popup_note_wait_window_t2

0xc6b3,	// (0x00055b8f) popup_note_wait_window_t3_ParamLimits

0xc6b3,	// (0x00055b8f) popup_note_wait_window_t3

0xc6c6,	// (0x00055ba2) popup_note_wait_window_t4_ParamLimits

0xc6c6,	// (0x00055ba2) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00058d2b) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00058d2b) popup_note_wait_window_t

0x31a3,	// (0x0004c67f) wait_bar_pane_ParamLimits

0x31a3,	// (0x0004c67f) wait_bar_pane

0x959b,	// (0x00052a77) wait_anim_pane

0x959b,	// (0x00052a77) wait_border_pane

0x94ab,	// (0x00052987) wait_anim_pane_g1

0x94ab,	// (0x00052987) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00058be4) wait_anim_pane_g

0x307f,	// (0x0004c55b) wait_border_pane_g1

0x308a,	// (0x0004c566) wait_border_pane_g2

0x3093,	// (0x0004c56f) wait_border_pane_g3

0x0002,

0xf841,	// (0x00058d1d) wait_border_pane_g

0x2eea,	// (0x0004c3c6) bg_popup_window_pane_cp16_ParamLimits

0x2eea,	// (0x0004c3c6) bg_popup_window_pane_cp16

0xc646,	// (0x00055b22) indicator_popup_pane_cp4_ParamLimits

0xc646,	// (0x00055b22) indicator_popup_pane_cp4

0x2ffe,	// (0x0004c4da) popup_query_data_window_t1_ParamLimits

0x2ffe,	// (0x0004c4da) popup_query_data_window_t1

0x3010,	// (0x0004c4ec) popup_query_data_window_t2_ParamLimits

0x3010,	// (0x0004c4ec) popup_query_data_window_t2

0x3029,	// (0x0004c505) popup_query_data_window_t3_ParamLimits

0x3029,	// (0x0004c505) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00058d16) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00058d16) popup_query_data_window_t

0xc65a,	// (0x00055b36) query_popup_data_pane_ParamLimits

0xc65a,	// (0x00055b36) query_popup_data_pane

0xc66e,	// (0x00055b4a) query_popup_data_pane_cp1_ParamLimits

0xc66e,	// (0x00055b4a) query_popup_data_pane_cp1

0x2eea,	// (0x0004c3c6) bg_popup_window_pane_cp10_ParamLimits

0x2eea,	// (0x0004c3c6) bg_popup_window_pane_cp10

0xc5c1,	// (0x00055a9d) indicator_popup_pane_ParamLimits

0xc5c1,	// (0x00055a9d) indicator_popup_pane

0xc5e3,	// (0x00055abf) popup_query_code_window_t1_ParamLimits

0xc5e3,	// (0x00055abf) popup_query_code_window_t1

0xc5fd,	// (0x00055ad9) popup_query_code_window_t2_ParamLimits

0xc5fd,	// (0x00055ad9) popup_query_code_window_t2

0x2fa1,	// (0x0004c47d) popup_query_code_window_t3_ParamLimits

0x2fa1,	// (0x0004c47d) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00058d0f) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00058d0f) popup_query_code_window_t

0x2fd0,	// (0x0004c4ac) query_popup_pane_ParamLimits

0x2fd0,	// (0x0004c4ac) query_popup_pane

0x9c48,	// (0x00053124) bg_popup_window_pane_cp15_ParamLimits

0x9c48,	// (0x00053124) bg_popup_window_pane_cp15

0x9c66,	// (0x00053142) indicator_popup_pane_cp1_ParamLimits

0x9c66,	// (0x00053142) indicator_popup_pane_cp1

0x9c79,	// (0x00053155) indicator_popup_pane_cp2_ParamLimits

0x9c79,	// (0x00053155) indicator_popup_pane_cp2

0x9c8c,	// (0x00053168) popup_query_data_code_window_g1_ParamLimits

0x9c8c,	// (0x00053168) popup_query_data_code_window_g1

0x9c9f,	// (0x0005317b) popup_query_data_code_window_t1_ParamLimits

0x9c9f,	// (0x0005317b) popup_query_data_code_window_t1

0x9cb1,	// (0x0005318d) popup_query_data_code_window_t2_ParamLimits

0x9cb1,	// (0x0005318d) popup_query_data_code_window_t2

0x9cc3,	// (0x0005319f) popup_query_data_code_window_t3_ParamLimits

0x9cc3,	// (0x0005319f) popup_query_data_code_window_t3

0x9cd9,	// (0x000531b5) popup_query_data_code_window_t4_ParamLimits

0x9cd9,	// (0x000531b5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00058a66) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00058a66) popup_query_data_code_window_t

0xe339,	// (0x00057815) list_single_midp_graphic_pane_g3

0x9cf1,	// (0x000531cd) query_popup_data_pane_cp2_ParamLimits

0x9d04,	// (0x000531e0) query_popup_pane_cp2_ParamLimits

0x9d04,	// (0x000531e0) query_popup_pane_cp2

0x959b,	// (0x00052a77) bg_popup_window_pane_cp11

0x2ee2,	// (0x0004c3be) heading_pane_cp5

0x9ded,	// (0x000532c9) listscroll_popup_info_pane

0x959b,	// (0x00052a77) input_focus_pane_cp3

0x9d17,	// (0x000531f3) query_popup_pane_t1

0x9d25,	// (0x00053201) list_popup_info_pane_ParamLimits

0x9d25,	// (0x00053201) list_popup_info_pane

0x9d34,	// (0x00053210) listscroll_popup_info_pane_g1

0x9d3c,	// (0x00053218) scroll_pane_cp7

0x9d46,	// (0x00053222) popup_info_list_pane_t1_ParamLimits

0x9d46,	// (0x00053222) popup_info_list_pane_t1

0x9d60,	// (0x0005323c) popup_info_list_pane_t2_ParamLimits

0x9d60,	// (0x0005323c) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00058a6f) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00058a6f) popup_info_list_pane_t

0x959b,	// (0x00052a77) bg_popup_window_pane_cp12

0xcd59,	// (0x00056235) find_popup_pane

0x9836,	// (0x00052d12) bg_popup_window_pane_cp3

0x9d7a,	// (0x00053256) heading_pane_cp3

0x9d86,	// (0x00053262) listscroll_popup_graphic_pane

0x959b,	// (0x00052a77) bg_popup_window_pane_cp4

0x9de5,	// (0x000532c1) heading_pane_cp4

0x9ded,	// (0x000532c9) listscroll_popup_colour_pane

0x9df5,	// (0x000532d1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9df5,	// (0x000532d1) cell_large_graphic_colour_none_popup_pane

0x9e09,	// (0x000532e5) grid_large_graphic_colour_popup_pane_ParamLimits

0x9e09,	// (0x000532e5) grid_large_graphic_colour_popup_pane

0x9e2d,	// (0x00053309) listscroll_popup_colour_pane_g1_ParamLimits

0x9e2d,	// (0x00053309) listscroll_popup_colour_pane_g1

0x9e44,	// (0x00053320) listscroll_popup_colour_pane_g2_ParamLimits

0x9e44,	// (0x00053320) listscroll_popup_colour_pane_g2

0x9e5b,	// (0x00053337) listscroll_popup_colour_pane_g3_ParamLimits

0x9e5b,	// (0x00053337) listscroll_popup_colour_pane_g3

0x9e6b,	// (0x00053347) listscroll_popup_colour_pane_g4_ParamLimits

0x9e6b,	// (0x00053347) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00058a74) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00058a74) listscroll_popup_colour_pane_g

0x9e7b,	// (0x00053357) scroll_pane_cp6_ParamLimits

0x9e7b,	// (0x00053357) scroll_pane_cp6

0x9e8d,	// (0x00053369) cell_large_graphic_colour_popup_pane_ParamLimits

0x9e8d,	// (0x00053369) cell_large_graphic_colour_popup_pane

0x9eac,	// (0x00053388) cell_large_graphic_colour_none_popup_pane_t1

0x959b,	// (0x00052a77) grid_highlight_pane_cp5

0x9ebb,	// (0x00053397) cell_large_graphic_colour_popup_pane_g1

0x9ec3,	// (0x0005339f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00058a7d) cell_large_graphic_colour_popup_pane_g

0x9ecb,	// (0x000533a7) cell_large_graphic_colour_popup_pane_g2_copy1

0x9ed4,	// (0x000533b0) grid_highlight_pane_cp4

0x9edc,	// (0x000533b8) bg_popup_window_pane_cp8_ParamLimits

0x9edc,	// (0x000533b8) bg_popup_window_pane_cp8

0x9ef7,	// (0x000533d3) popup_snote_single_text_window_g1_ParamLimits

0x9ef7,	// (0x000533d3) popup_snote_single_text_window_g1

0x9f09,	// (0x000533e5) popup_snote_single_text_window_t1_ParamLimits

0x9f09,	// (0x000533e5) popup_snote_single_text_window_t1

0x9f1c,	// (0x000533f8) popup_snote_single_text_window_t2_ParamLimits

0x9f1c,	// (0x000533f8) popup_snote_single_text_window_t2

0x9f2f,	// (0x0005340b) popup_snote_single_text_window_t3_ParamLimits

0x9f2f,	// (0x0005340b) popup_snote_single_text_window_t3

0x9f68,	// (0x00053444) popup_snote_single_text_window_t4_ParamLimits

0x9f68,	// (0x00053444) popup_snote_single_text_window_t4

0x9f9c,	// (0x00053478) popup_snote_single_text_window_t5_ParamLimits

0x9f9c,	// (0x00053478) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00058a82) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00058a82) popup_snote_single_text_window_t

0x9fcb,	// (0x000534a7) bg_popup_window_pane_cp9_ParamLimits

0x9fcb,	// (0x000534a7) bg_popup_window_pane_cp9

0x9ef7,	// (0x000533d3) popup_snote_single_graphic_window_g1_ParamLimits

0x9ef7,	// (0x000533d3) popup_snote_single_graphic_window_g1

0x9fd9,	// (0x000534b5) popup_snote_single_graphic_window_g2_ParamLimits

0x9fd9,	// (0x000534b5) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00058a8d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00058a8d) popup_snote_single_graphic_window_g

0x9fe5,	// (0x000534c1) popup_snote_single_graphic_window_t1_ParamLimits

0x9fe5,	// (0x000534c1) popup_snote_single_graphic_window_t1

0x9ff8,	// (0x000534d4) popup_snote_single_graphic_window_t2_ParamLimits

0x9ff8,	// (0x000534d4) popup_snote_single_graphic_window_t2

0x9f2f,	// (0x0005340b) popup_snote_single_graphic_window_t3_ParamLimits

0x9f2f,	// (0x0005340b) popup_snote_single_graphic_window_t3

0x9f68,	// (0x00053444) popup_snote_single_graphic_window_t4_ParamLimits

0x9f68,	// (0x00053444) popup_snote_single_graphic_window_t4

0xa00b,	// (0x000534e7) popup_snote_single_graphic_window_t5_ParamLimits

0xa00b,	// (0x000534e7) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00058a92) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00058a92) popup_snote_single_graphic_window_t

0x4149,	// (0x0004d625) grid_graphic_popup_pane_ParamLimits

0x4149,	// (0x0004d625) grid_graphic_popup_pane

0x4171,	// (0x0004d64d) listscroll_popup_graphic_pane_g1_ParamLimits

0x4171,	// (0x0004d64d) listscroll_popup_graphic_pane_g1

0xccf7,	// (0x000561d3) listscroll_popup_graphic_pane_g2_ParamLimits

0xccf7,	// (0x000561d3) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00058e8c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00058e8c) listscroll_popup_graphic_pane_g

0x4199,	// (0x0004d675) scroll_pane_cp5

0xccb2,	// (0x0005618e) cell_graphic_popup_pane_ParamLimits

0xccb2,	// (0x0005618e) cell_graphic_popup_pane

0x40c7,	// (0x0004d5a3) cell_graphic_popup_pane_g1

0x40cf,	// (0x0004d5ab) cell_graphic_popup_pane_g2

0x9ecb,	// (0x000533a7) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x00058e85) cell_graphic_popup_pane_g

0x40d8,	// (0x0004d5b4) cell_graphic_popup_pane_t2

0x9ed4,	// (0x000533b0) grid_highlight_pane_cp3

0xa04c,	// (0x00053528) list_gen_pane_ParamLimits

0xa04c,	// (0x00053528) list_gen_pane

0xa07e,	// (0x0005355a) scroll_pane

0xcc1c,	// (0x000560f8) bg_list_pane_g1_ParamLimits

0xcc1c,	// (0x000560f8) bg_list_pane_g1

0xcc37,	// (0x00056113) bg_list_pane_g2_ParamLimits

0xcc37,	// (0x00056113) bg_list_pane_g2

0xcc4a,	// (0x00056126) bg_list_pane_g3_ParamLimits

0xcc4a,	// (0x00056126) bg_list_pane_g3

0xcc5c,	// (0x00056138) bg_list_pane_g4_ParamLimits

0xcc5c,	// (0x00056138) bg_list_pane_g4

0xcc6e,	// (0x0005614a) bg_list_pane_g5_ParamLimits

0xcc6e,	// (0x0005614a) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00058e7a) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00058e7a) bg_list_pane_g

0xb6f8,	// (0x00054bd4) list_double2_graphic_large_graphic_pane_ParamLimits

0xb6f8,	// (0x00054bd4) list_double2_graphic_large_graphic_pane

0xb6f8,	// (0x00054bd4) list_double2_graphic_pane_ParamLimits

0xb6f8,	// (0x00054bd4) list_double2_graphic_pane

0xb6f8,	// (0x00054bd4) list_double2_large_graphic_pane_ParamLimits

0xb6f8,	// (0x00054bd4) list_double2_large_graphic_pane

0xb6f8,	// (0x00054bd4) list_double2_pane_ParamLimits

0xb6f8,	// (0x00054bd4) list_double2_pane

0xb6f8,	// (0x00054bd4) list_double_graphic_heading_pane_ParamLimits

0xb6f8,	// (0x00054bd4) list_double_graphic_heading_pane

0xb6f8,	// (0x00054bd4) list_double_graphic_pane_ParamLimits

0xb6f8,	// (0x00054bd4) list_double_graphic_pane

0xb6f8,	// (0x00054bd4) list_double_heading_pane_ParamLimits

0xb6f8,	// (0x00054bd4) list_double_heading_pane

0xb6f8,	// (0x00054bd4) list_double_large_graphic_pane_ParamLimits

0xb6f8,	// (0x00054bd4) list_double_large_graphic_pane

0xb6f8,	// (0x00054bd4) list_double_number_pane_ParamLimits

0xb6f8,	// (0x00054bd4) list_double_number_pane

0xb6f8,	// (0x00054bd4) list_double_pane_ParamLimits

0xb6f8,	// (0x00054bd4) list_double_pane

0xb6f8,	// (0x00054bd4) list_double_time_pane_ParamLimits

0xb6f8,	// (0x00054bd4) list_double_time_pane

0xb6f8,	// (0x00054bd4) list_setting_number_pane_ParamLimits

0xb6f8,	// (0x00054bd4) list_setting_number_pane

0xb6f8,	// (0x00054bd4) list_setting_pane_ParamLimits

0xb6f8,	// (0x00054bd4) list_setting_pane

0xcbe5,	// (0x000560c1) list_single_2graphic_pane_ParamLimits

0xcbe5,	// (0x000560c1) list_single_2graphic_pane

0xcbe5,	// (0x000560c1) list_single_graphic_heading_pane_ParamLimits

0xcbe5,	// (0x000560c1) list_single_graphic_heading_pane

0xcbe5,	// (0x000560c1) list_single_graphic_pane_ParamLimits

0xcbe5,	// (0x000560c1) list_single_graphic_pane

0xcbe5,	// (0x000560c1) list_single_heading_pane_ParamLimits

0xcbe5,	// (0x000560c1) list_single_heading_pane

0xcbe5,	// (0x000560c1) list_single_large_graphic_pane_ParamLimits

0xcbe5,	// (0x000560c1) list_single_large_graphic_pane

0xcbe5,	// (0x000560c1) list_single_number_heading_pane_ParamLimits

0xcbe5,	// (0x000560c1) list_single_number_heading_pane

0xcbe5,	// (0x000560c1) list_single_number_pane_ParamLimits

0xcbe5,	// (0x000560c1) list_single_number_pane

0xcbe5,	// (0x000560c1) list_single_pane_ParamLimits

0xcbe5,	// (0x000560c1) list_single_pane

0x959b,	// (0x00052a77) list_highlight_pane_cp1

0xf36c,	// (0x00058848) list_single_pane_g1_ParamLimits

0xf36c,	// (0x00058848) list_single_pane_g1

0xf378,	// (0x00058854) list_single_pane_g2_ParamLimits

0xf378,	// (0x00058854) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00058aae) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00058aae) list_single_pane_g

0xef58,	// (0x00058434) list_single_pane_t1_ParamLimits

0xef58,	// (0x00058434) list_single_pane_t1

0xf36c,	// (0x00058848) list_single_number_pane_g1_ParamLimits

0xf36c,	// (0x00058848) list_single_number_pane_g1

0xf378,	// (0x00058854) list_single_number_pane_g2_ParamLimits

0xf378,	// (0x00058854) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00058aae) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00058aae) list_single_number_pane_g

0xe4ec,	// (0x000579c8) list_single_number_pane_t1_ParamLimits

0xe4ec,	// (0x000579c8) list_single_number_pane_t1

0xef46,	// (0x00058422) list_single_number_pane_t2_ParamLimits

0xef46,	// (0x00058422) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00058e3b) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00058e3b) list_single_number_pane_t

0x8c64,	// (0x00052140) list_single_graphic_pane_g1_ParamLimits

0x8c64,	// (0x00052140) list_single_graphic_pane_g1

0xf36c,	// (0x00058848) list_single_graphic_pane_g2_ParamLimits

0xf36c,	// (0x00058848) list_single_graphic_pane_g2

0xf378,	// (0x00058854) list_single_graphic_pane_g3_ParamLimits

0xf378,	// (0x00058854) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00058a9d) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00058a9d) list_single_graphic_pane_g

0x8c70,	// (0x0005214c) list_single_graphic_pane_t1_ParamLimits

0x8c70,	// (0x0005214c) list_single_graphic_pane_t1

0x8c86,	// (0x00052162) list_single_heading_pane_g1_ParamLimits

0x8c86,	// (0x00052162) list_single_heading_pane_g1

0xf378,	// (0x00058854) list_single_heading_pane_g2_ParamLimits

0xf378,	// (0x00058854) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00058aa4) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00058aa4) list_single_heading_pane_g

0x8c99,	// (0x00052175) list_single_heading_pane_t1_ParamLimits

0x8c99,	// (0x00052175) list_single_heading_pane_t1

0xa0b2,	// (0x0005358e) list_single_heading_pane_t2_ParamLimits

0xa0b2,	// (0x0005358e) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00058aa9) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00058aa9) list_single_heading_pane_t

0xf36c,	// (0x00058848) list_single_number_heading_pane_g1_ParamLimits

0xf36c,	// (0x00058848) list_single_number_heading_pane_g1

0xf378,	// (0x00058854) list_single_number_heading_pane_g2_ParamLimits

0xf378,	// (0x00058854) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00058aae) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00058aae) list_single_number_heading_pane_g

0x8caf,	// (0x0005218b) list_single_number_heading_pane_t1_ParamLimits

0x8caf,	// (0x0005218b) list_single_number_heading_pane_t1

0x8cc5,	// (0x000521a1) list_single_number_heading_pane_t2_ParamLimits

0x8cc5,	// (0x000521a1) list_single_number_heading_pane_t2

0xef1e,	// (0x000583fa) list_single_number_heading_pane_t3_ParamLimits

0xef1e,	// (0x000583fa) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00058ab3) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00058ab3) list_single_number_heading_pane_t

0x8cd7,	// (0x000521b3) list_single_graphic_heading_pane_g1_ParamLimits

0x8cd7,	// (0x000521b3) list_single_graphic_heading_pane_g1

0xa0c4,	// (0x000535a0) list_single_graphic_heading_pane_g4_ParamLimits

0xa0c4,	// (0x000535a0) list_single_graphic_heading_pane_g4

0xf378,	// (0x00058854) list_single_graphic_heading_pane_g5_ParamLimits

0xf378,	// (0x00058854) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00058aba) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00058aba) list_single_graphic_heading_pane_g

0x8caf,	// (0x0005218b) list_single_graphic_heading_pane_t1_ParamLimits

0x8caf,	// (0x0005218b) list_single_graphic_heading_pane_t1

0x8ced,	// (0x000521c9) list_single_graphic_heading_pane_t2_ParamLimits

0x8ced,	// (0x000521c9) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00058ac1) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00058ac1) list_single_graphic_heading_pane_t

0x1220,	// (0x0004a6fc) list_single_large_graphic_pane_g1_ParamLimits

0x1220,	// (0x0004a6fc) list_single_large_graphic_pane_g1

0xf36c,	// (0x00058848) list_single_large_graphic_pane_g2_ParamLimits

0xf36c,	// (0x00058848) list_single_large_graphic_pane_g2

0xf378,	// (0x00058854) list_single_large_graphic_pane_g3_ParamLimits

0xf378,	// (0x00058854) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00058ac6) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00058ac6) list_single_large_graphic_pane_g

0x308a,	// (0x0004c566) wait_border_pane_g2_copy1

0xa0d5,	// (0x000535b1) list_single_large_graphic_pane_g4_cp2

0xef30,	// (0x0005840c) list_single_large_graphic_pane_t1_ParamLimits

0xef30,	// (0x0005840c) list_single_large_graphic_pane_t1

0x4be0,	// (0x0004e0bc) list_double_pane_g1_ParamLimits

0x4be0,	// (0x0004e0bc) list_double_pane_g1

0xf384,	// (0x00058860) list_double_pane_g2_ParamLimits

0xf384,	// (0x00058860) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00058acd) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00058acd) list_double_pane_g

0x8d05,	// (0x000521e1) list_double_pane_t1_ParamLimits

0x8d05,	// (0x000521e1) list_double_pane_t1

0x8d1b,	// (0x000521f7) list_double_pane_t2_ParamLimits

0x8d1b,	// (0x000521f7) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00058ad2) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00058ad2) list_double_pane_t

0x8d2d,	// (0x00052209) list_double2_pane_g1_ParamLimits

0x8d2d,	// (0x00052209) list_double2_pane_g1

0x8d3e,	// (0x0005221a) list_double2_pane_g2_ParamLimits

0x8d3e,	// (0x0005221a) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00058ad7) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00058ad7) list_double2_pane_g

0x8d4a,	// (0x00052226) list_double2_pane_t1_ParamLimits

0x8d4a,	// (0x00052226) list_double2_pane_t1

0x8d60,	// (0x0005223c) list_double2_pane_t2_ParamLimits

0x8d60,	// (0x0005223c) list_double2_pane_t2

0x0001,

0xf600,	// (0x00058adc) list_double2_pane_t_ParamLimits

0xf600,	// (0x00058adc) list_double2_pane_t

0x4be0,	// (0x0004e0bc) list_double_number_pane_g1_ParamLimits

0x4be0,	// (0x0004e0bc) list_double_number_pane_g1

0xf384,	// (0x00058860) list_double_number_pane_g2_ParamLimits

0xf384,	// (0x00058860) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00058acd) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00058acd) list_double_number_pane_g

0x8d72,	// (0x0005224e) list_double_number_pane_t1_ParamLimits

0x8d72,	// (0x0005224e) list_double_number_pane_t1

0xe175,	// (0x00057651) list_double_number_pane_t2_ParamLimits

0xe175,	// (0x00057651) list_double_number_pane_t2

0x8d84,	// (0x00052260) list_double_number_pane_t3_ParamLimits

0x8d84,	// (0x00052260) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00058ae1) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00058ae1) list_double_number_pane_t

0xe18b,	// (0x00057667) list_double_graphic_pane_g1_ParamLimits

0xe18b,	// (0x00057667) list_double_graphic_pane_g1

0x8d96,	// (0x00052272) list_double_graphic_pane_g2_ParamLimits

0x8d96,	// (0x00052272) list_double_graphic_pane_g2

0x8da5,	// (0x00052281) list_double_graphic_pane_g3_ParamLimits

0x8da5,	// (0x00052281) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00058ae8) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00058ae8) list_double_graphic_pane_g

0x8dbd,	// (0x00052299) list_double_graphic_pane_t1_ParamLimits

0x8dbd,	// (0x00052299) list_double_graphic_pane_t1

0x8dd3,	// (0x000522af) list_double_graphic_pane_t2_ParamLimits

0x8dd3,	// (0x000522af) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00058af1) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00058af1) list_double_graphic_pane_t

0x8de5,	// (0x000522c1) list_double2_graphic_pane_g1_ParamLimits

0x8de5,	// (0x000522c1) list_double2_graphic_pane_g1

0xa0dd,	// (0x000535b9) list_double2_graphic_pane_g2_ParamLimits

0xa0dd,	// (0x000535b9) list_double2_graphic_pane_g2

0xa0e9,	// (0x000535c5) list_double2_graphic_pane_g3_ParamLimits

0xa0e9,	// (0x000535c5) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00058af6) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00058af6) list_double2_graphic_pane_g

0x8df1,	// (0x000522cd) list_double2_graphic_pane_t1_ParamLimits

0x8df1,	// (0x000522cd) list_double2_graphic_pane_t1

0x8e07,	// (0x000522e3) list_double2_graphic_pane_t2_ParamLimits

0x8e07,	// (0x000522e3) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00058afd) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00058afd) list_double2_graphic_pane_t

0x8e19,	// (0x000522f5) list_double_large_graphic_pane_g1_ParamLimits

0x8e19,	// (0x000522f5) list_double_large_graphic_pane_g1

0x8e38,	// (0x00052314) list_double_large_graphic_pane_g2_ParamLimits

0x8e38,	// (0x00052314) list_double_large_graphic_pane_g2

0xf384,	// (0x00058860) list_double_large_graphic_pane_g3_ParamLimits

0xf384,	// (0x00058860) list_double_large_graphic_pane_g3

0x8e4e,	// (0x0005232a) list_double_large_graphic_pane_g4_ParamLimits

0x8e4e,	// (0x0005232a) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00058b02) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00058b02) list_double_large_graphic_pane_g

0x8e61,	// (0x0005233d) list_double_large_graphic_pane_t1_ParamLimits

0x8e61,	// (0x0005233d) list_double_large_graphic_pane_t1

0x8e7a,	// (0x00052356) list_double_large_graphic_pane_t2_ParamLimits

0x8e7a,	// (0x00052356) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00058b0d) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00058b0d) list_double_large_graphic_pane_t

0xa0f5,	// (0x000535d1) list_double2_large_graphic_pane_g1_ParamLimits

0xa0f5,	// (0x000535d1) list_double2_large_graphic_pane_g1

0x8e8c,	// (0x00052368) list_double2_large_graphic_pane_g2_ParamLimits

0x8e8c,	// (0x00052368) list_double2_large_graphic_pane_g2

0xa0e9,	// (0x000535c5) list_double2_large_graphic_pane_g3_ParamLimits

0xa0e9,	// (0x000535c5) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00058b12) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00058b12) list_double2_large_graphic_pane_g

0x8e9d,	// (0x00052379) list_double2_large_graphic_pane_t1_ParamLimits

0x8e9d,	// (0x00052379) list_double2_large_graphic_pane_t1

0x8eb3,	// (0x0005238f) list_double2_large_graphic_pane_t2_ParamLimits

0x8eb3,	// (0x0005238f) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00058b19) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00058b19) list_double2_large_graphic_pane_t

0x8ec5,	// (0x000523a1) list_double_heading_pane_g1_ParamLimits

0x8ec5,	// (0x000523a1) list_double_heading_pane_g1

0xa101,	// (0x000535dd) list_double_heading_pane_g2_ParamLimits

0xa101,	// (0x000535dd) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00058b1e) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00058b1e) list_double_heading_pane_g

0x8ed6,	// (0x000523b2) list_double_heading_pane_t1_ParamLimits

0x8ed6,	// (0x000523b2) list_double_heading_pane_t1

0x8d60,	// (0x0005223c) list_double_heading_pane_t2_ParamLimits

0x8d60,	// (0x0005223c) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00058b23) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00058b23) list_double_heading_pane_t

0xe197,	// (0x00057673) list_double_graphic_heading_pane_g1_ParamLimits

0xe197,	// (0x00057673) list_double_graphic_heading_pane_g1

0x8ec5,	// (0x000523a1) list_double_graphic_heading_pane_g2_ParamLimits

0x8ec5,	// (0x000523a1) list_double_graphic_heading_pane_g2

0xa101,	// (0x000535dd) list_double_graphic_heading_pane_g3_ParamLimits

0xa101,	// (0x000535dd) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00058b28) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00058b28) list_double_graphic_heading_pane_g

0x8eec,	// (0x000523c8) list_double_graphic_heading_pane_t1_ParamLimits

0x8eec,	// (0x000523c8) list_double_graphic_heading_pane_t1

0x8e07,	// (0x000522e3) list_double_graphic_heading_pane_t2_ParamLimits

0x8e07,	// (0x000522e3) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00058b2f) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00058b2f) list_double_graphic_heading_pane_t

0x8f02,	// (0x000523de) list_double_time_pane_g1_ParamLimits

0x8f02,	// (0x000523de) list_double_time_pane_g1

0xe1a3,	// (0x0005767f) list_double_time_pane_g2_ParamLimits

0xe1a3,	// (0x0005767f) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00058b34) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00058b34) list_double_time_pane_g

0x8f13,	// (0x000523ef) list_double_time_pane_t1_ParamLimits

0x8f13,	// (0x000523ef) list_double_time_pane_t1

0x8f29,	// (0x00052405) list_double_time_pane_t2_ParamLimits

0x8f29,	// (0x00052405) list_double_time_pane_t2

0x8f3b,	// (0x00052417) list_double_time_pane_t3_ParamLimits

0x8f3b,	// (0x00052417) list_double_time_pane_t3

0x8f4d,	// (0x00052429) list_double_time_pane_t4_ParamLimits

0x8f4d,	// (0x00052429) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00058b39) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00058b39) list_double_time_pane_t

0x8f5f,	// (0x0005243b) list_setting_pane_g1_ParamLimits

0x8f5f,	// (0x0005243b) list_setting_pane_g1

0x8f6b,	// (0x00052447) list_setting_pane_g2_ParamLimits

0x8f6b,	// (0x00052447) list_setting_pane_g2

0x0001,

0xf666,	// (0x00058b42) list_setting_pane_g_ParamLimits

0xf666,	// (0x00058b42) list_setting_pane_g

0x8f77,	// (0x00052453) list_setting_pane_t1_ParamLimits

0x8f77,	// (0x00052453) list_setting_pane_t1

0x8f91,	// (0x0005246d) list_setting_pane_t2_ParamLimits

0x8f91,	// (0x0005246d) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00058b47) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00058b47) list_setting_pane_t

0x8fd0,	// (0x000524ac) set_value_pane_cp_ParamLimits

0x8fd0,	// (0x000524ac) set_value_pane_cp

0x8fdc,	// (0x000524b8) list_setting_number_pane_g1_ParamLimits

0x8fdc,	// (0x000524b8) list_setting_number_pane_g1

0x8fe8,	// (0x000524c4) list_setting_number_pane_g2_ParamLimits

0x8fe8,	// (0x000524c4) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00058b4e) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00058b4e) list_setting_number_pane_g

0x8ff4,	// (0x000524d0) list_setting_number_pane_t1_ParamLimits

0x8ff4,	// (0x000524d0) list_setting_number_pane_t1

0x900d,	// (0x000524e9) list_setting_number_pane_t2_ParamLimits

0x900d,	// (0x000524e9) list_setting_number_pane_t2

0x9027,	// (0x00052503) list_setting_number_pane_t3_ParamLimits

0x9027,	// (0x00052503) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00058b53) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00058b53) list_setting_number_pane_t

0x8fd0,	// (0x000524ac) set_value_pane_ParamLimits

0x8fd0,	// (0x000524ac) set_value_pane

0xa10d,	// (0x000535e9) bg_set_opt_pane_ParamLimits

0xa10d,	// (0x000535e9) bg_set_opt_pane

0xe1af,	// (0x0005768b) set_value_pane_t1

0xa12e,	// (0x0005360a) slider_set_pane_cp3

0xa137,	// (0x00053613) volume_small_pane_cp

0xa140,	// (0x0005361c) list_form_gen_pane

0xa149,	// (0x00053625) scroll_pane_cp8

0x906a,	// (0x00052546) form_field_data_pane_ParamLimits

0x906a,	// (0x00052546) form_field_data_pane

0x9081,	// (0x0005255d) form_field_data_wide_pane_ParamLimits

0x9081,	// (0x0005255d) form_field_data_wide_pane

0x90a1,	// (0x0005257d) form_field_popup_pane_ParamLimits

0x90a1,	// (0x0005257d) form_field_popup_pane

0x90b9,	// (0x00052595) form_field_popup_wide_pane_ParamLimits

0x90b9,	// (0x00052595) form_field_popup_wide_pane

0xe1cd,	// (0x000576a9) form_field_slider_pane_ParamLimits

0xe1cd,	// (0x000576a9) form_field_slider_pane

0x90d0,	// (0x000525ac) form_field_slider_wide_pane_ParamLimits

0x90d0,	// (0x000525ac) form_field_slider_wide_pane

0xa15a,	// (0x00053636) data_form_pane

0x90ed,	// (0x000525c9) form_field_data_pane_t1

0xa166,	// (0x00053642) input_focus_pane

0x9107,	// (0x000525e3) data_form_wide_pane

0x9118,	// (0x000525f4) form_field_data_wide_pane_t1

0x9ee9,	// (0x000533c5) input_focus_pane_cp6

0x9132,	// (0x0005260e) form_field_popup_pane_t1

0xa166,	// (0x00053642) input_focus_pane_cp7

0xa188,	// (0x00053664) list_form_pane

0xe1fc,	// (0x000576d8) form_field_popup_wide_pane_t1

0xa166,	// (0x00053642) input_focus_pane_cp8

0xa194,	// (0x00053670) list_form_wide_pane

0x9154,	// (0x00052630) form_field_slider_pane_t1_ParamLimits

0x9154,	// (0x00052630) form_field_slider_pane_t1

0x916c,	// (0x00052648) form_field_slider_pane_t2_ParamLimits

0x916c,	// (0x00052648) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00058b63) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00058b63) form_field_slider_pane_t

0x97ec,	// (0x00052cc8) input_focus_pane_cp9_ParamLimits

0x97ec,	// (0x00052cc8) input_focus_pane_cp9

0x9181,	// (0x0005265d) slider_cont_pane_ParamLimits

0x9181,	// (0x0005265d) slider_cont_pane

0xa1a3,	// (0x0005367f) form_field_slider_wide_pane_t1_ParamLimits

0xa1a3,	// (0x0005367f) form_field_slider_wide_pane_t1

0xe211,	// (0x000576ed) form_field_slider_wide_pane_t2_ParamLimits

0xe211,	// (0x000576ed) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00058b68) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00058b68) form_field_slider_wide_pane_t

0x97ec,	// (0x00052cc8) input_focus_pane_cp10_ParamLimits

0x97ec,	// (0x00052cc8) input_focus_pane_cp10

0x9195,	// (0x00052671) slider_cont_pane_cp1_ParamLimits

0x9195,	// (0x00052671) slider_cont_pane_cp1

0x91a9,	// (0x00052685) slider_form_pane_cp

0xa1b5,	// (0x00053691) input_focus_pane_g1

0xa1bd,	// (0x00053699) input_focus_pane_g2

0xa1c5,	// (0x000536a1) input_focus_pane_g3

0xa1cd,	// (0x000536a9) input_focus_pane_g4

0xa1d5,	// (0x000536b1) input_focus_pane_g5

0xa1dd,	// (0x000536b9) input_focus_pane_g6

0xa1e5,	// (0x000536c1) input_focus_pane_g7

0xa1ed,	// (0x000536c9) input_focus_pane_g8

0xa1f5,	// (0x000536d1) input_focus_pane_g9

0x94ab,	// (0x00052987) input_focus_pane_g10

0x0009,

0xf691,	// (0x00058b6d) input_focus_pane_g

0x3093,	// (0x0004c56f) wait_border_pane_g3_copy1

0x91b1,	// (0x0005268d) data_form_pane_t1

0x94ab,	// (0x00052987) wait_anim_pane_g1_copy1

0x92bd,	// (0x00052799) data_form_wide_pane_t1

0x91cb,	// (0x000526a7) list_form_graphic_pane_cp_ParamLimits

0x91cb,	// (0x000526a7) list_form_graphic_pane_cp

0x3f93,	// (0x0004d46f) slider_form_pane_g1

0x3f9c,	// (0x0004d478) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00058e6b) slider_form_pane_g

0x91cb,	// (0x000526a7) list_form_graphic_pane_ParamLimits

0x91cb,	// (0x000526a7) list_form_graphic_pane

0x91dd,	// (0x000526b9) list_form_graphic_pane_g1

0x91e5,	// (0x000526c1) list_form_graphic_pane_t1_ParamLimits

0x91e5,	// (0x000526c1) list_form_graphic_pane_t1

0x9836,	// (0x00052d12) list_highlight_pane_cp5_ParamLimits

0x9836,	// (0x00052d12) list_highlight_pane_cp5

0x91fa,	// (0x000526d6) find_pane_g1

0xa1fd,	// (0x000536d9) input_find_pane

0x9203,	// (0x000526df) input_find_pane_g1_ParamLimits

0x9203,	// (0x000526df) input_find_pane_g1

0x920f,	// (0x000526eb) input_find_pane_t1_ParamLimits

0x920f,	// (0x000526eb) input_find_pane_t1

0x9224,	// (0x00052700) input_find_pane_t2_ParamLimits

0x9224,	// (0x00052700) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00058b82) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00058b82) input_find_pane_t

0xa206,	// (0x000536e2) input_focus_pane_cp5_ParamLimits

0xa206,	// (0x000536e2) input_focus_pane_cp5

0xa220,	// (0x000536fc) bg_popup_window_pane_cp2_ParamLimits

0xa220,	// (0x000536fc) bg_popup_window_pane_cp2

0xa22d,	// (0x00053709) listscroll_menu_pane_ParamLimits

0xa22d,	// (0x00053709) listscroll_menu_pane

0xa239,	// (0x00053715) popup_submenu_window_ParamLimits

0xa239,	// (0x00053715) popup_submenu_window

0xa261,	// (0x0005373d) find_popup_pane_g1

0xa269,	// (0x00053745) input_popup_find_pane_cp

0xa206,	// (0x000536e2) input_focus_pane_cp4_ParamLimits

0xa206,	// (0x000536e2) input_focus_pane_cp4

0xa281,	// (0x0005375d) input_popup_find_pane_t1_ParamLimits

0xa281,	// (0x0005375d) input_popup_find_pane_t1

0x959b,	// (0x00052a77) bg_popup_sub_pane_cp

0xa2af,	// (0x0005378b) listscroll_popup_sub_pane

0xa2b7,	// (0x00053793) list_submenu_pane_ParamLimits

0xa2b7,	// (0x00053793) list_submenu_pane

0xa2c8,	// (0x000537a4) scroll_pane_cp4

0xa2d0,	// (0x000537ac) list_single_popup_submenu_pane_ParamLimits

0xa2d0,	// (0x000537ac) list_single_popup_submenu_pane

0xa2e4,	// (0x000537c0) list_single_popup_submenu_pane_g1

0xa2ec,	// (0x000537c8) list_single_popup_submenu_pane_t1_ParamLimits

0xa2ec,	// (0x000537c8) list_single_popup_submenu_pane_t1

0x97ec,	// (0x00052cc8) bg_active_tab_pane_cp1_ParamLimits

0x97ec,	// (0x00052cc8) bg_active_tab_pane_cp1

0xa301,	// (0x000537dd) tabs_2_active_pane_g1

0xa309,	// (0x000537e5) tabs_2_active_pane_t1

0x97ec,	// (0x00052cc8) bg_passive_tab_pane_cp1_ParamLimits

0x97ec,	// (0x00052cc8) bg_passive_tab_pane_cp1

0xa301,	// (0x000537dd) tabs_2_passive_pane_g1

0xa309,	// (0x000537e5) tabs_2_passive_pane_t1

0x9836,	// (0x00052d12) bg_active_tab_pane_cp4

0xa31b,	// (0x000537f7) tabs_2_long_active_pane_t1

0x2576,	// (0x0004ba52) bg_passive_tab_pane_cp4

0x0d45,	// (0x0004a221) list_single_midp_graphic_pane_g4_ParamLimits

0x9836,	// (0x00052d12) bg_active_tab_pane_cp5

0xa32e,	// (0x0005380a) tabs_3_long_active_pane_t1

0x2576,	// (0x0004ba52) bg_passive_tab_pane_cp5

0x0d45,	// (0x0004a221) list_single_midp_graphic_pane_g4

0x9836,	// (0x00052d12) bg_popup_window_pane_cp13_ParamLimits

0x9836,	// (0x00052d12) bg_popup_window_pane_cp13

0xa349,	// (0x00053825) listscroll_popup_fast_pane_ParamLimits

0xa349,	// (0x00053825) listscroll_popup_fast_pane

0xa355,	// (0x00053831) grid_popup_fast_pane_ParamLimits

0xa355,	// (0x00053831) grid_popup_fast_pane

0xa367,	// (0x00053843) scroll_pane_cp9_ParamLimits

0xa367,	// (0x00053843) scroll_pane_cp9

0x5899,	// (0x0004ed75) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5899,	// (0x0004ed75) list_single_graphic_hl_pane_t1_cp2

0xa38b,	// (0x00053867) input_focus_pane_cp20_ParamLimits

0xa38b,	// (0x00053867) input_focus_pane_cp20

0xa399,	// (0x00053875) query_popup_data_pane_t1_ParamLimits

0xa399,	// (0x00053875) query_popup_data_pane_t1

0xa3ac,	// (0x00053888) query_popup_data_pane_t2_ParamLimits

0xa3ac,	// (0x00053888) query_popup_data_pane_t2

0xa3f2,	// (0x000538ce) query_popup_data_pane_t3_ParamLimits

0xa3f2,	// (0x000538ce) query_popup_data_pane_t3

0xa433,	// (0x0005390f) query_popup_data_pane_t4_ParamLimits

0xa433,	// (0x0005390f) query_popup_data_pane_t4

0xa46f,	// (0x0005394b) query_popup_data_pane_t5_ParamLimits

0xa46f,	// (0x0005394b) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00058b87) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00058b87) query_popup_data_pane_t

0xa1b5,	// (0x00053691) bg_set_opt_pane_g1

0xa1bd,	// (0x00053699) bg_set_opt_pane_g2

0xa1c5,	// (0x000536a1) bg_set_opt_pane_g3

0xa1cd,	// (0x000536a9) bg_set_opt_pane_g4

0xa1d5,	// (0x000536b1) bg_set_opt_pane_g5

0xa1dd,	// (0x000536b9) bg_set_opt_pane_g6

0xa1e5,	// (0x000536c1) bg_set_opt_pane_g7

0xa1ed,	// (0x000536c9) bg_set_opt_pane_g8

0xa1f5,	// (0x000536d1) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00058b92) bg_set_opt_pane_g

0x0253,	// (0x0004972f) control_top_pane_stacon_ParamLimits

0x0253,	// (0x0004972f) control_top_pane_stacon

0x02a6,	// (0x00049782) signal_pane_stacon_ParamLimits

0x02a6,	// (0x00049782) signal_pane_stacon

0xe223,	// (0x000576ff) stacon_top_pane_g1_ParamLimits

0xe223,	// (0x000576ff) stacon_top_pane_g1

0x02cb,	// (0x000497a7) title_pane_stacon_ParamLimits

0x02cb,	// (0x000497a7) title_pane_stacon

0x02f5,	// (0x000497d1) uni_indicator_pane_stacon_ParamLimits

0x02f5,	// (0x000497d1) uni_indicator_pane_stacon

0x030a,	// (0x000497e6) battery_pane_stacon_ParamLimits

0x030a,	// (0x000497e6) battery_pane_stacon

0x034e,	// (0x0004982a) control_bottom_pane_stacon_ParamLimits

0x034e,	// (0x0004982a) control_bottom_pane_stacon

0x0371,	// (0x0004984d) navi_pane_stacon_ParamLimits

0x0371,	// (0x0004984d) navi_pane_stacon

0xe245,	// (0x00057721) stacon_bottom_pane_g1_ParamLimits

0xe245,	// (0x00057721) stacon_bottom_pane_g1

0xf3a5,	// (0x00058881) aid_levels_signal_lsc_ParamLimits

0xf3a5,	// (0x00058881) aid_levels_signal_lsc

0xf3bb,	// (0x00058897) signal_pane_stacon_g1_ParamLimits

0xf3bb,	// (0x00058897) signal_pane_stacon_g1

0xf3cf,	// (0x000588ab) signal_pane_stacon_g2_ParamLimits

0xf3cf,	// (0x000588ab) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00058ba5) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00058ba5) signal_pane_stacon_g

0xf404,	// (0x000588e0) title_pane_stacon_t1_ParamLimits

0xf404,	// (0x000588e0) title_pane_stacon_t1

0xa4b3,	// (0x0005398f) uni_indicator_pane_stacon_g1

0xa4bd,	// (0x00053999) uni_indicator_pane_stacon_g2

0xa4c7,	// (0x000539a3) uni_indicator_pane_stacon_g3

0xa4d1,	// (0x000539ad) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00058bb1) uni_indicator_pane_stacon_g

0xf429,	// (0x00058905) control_top_pane_stacon_g1

0xf431,	// (0x0005890d) control_top_pane_stacon_t1_ParamLimits

0xf431,	// (0x0005890d) control_top_pane_stacon_t1

0xf468,	// (0x00058944) aid_levels_battery_lsc_ParamLimits

0xf468,	// (0x00058944) aid_levels_battery_lsc

0xf47f,	// (0x0005895b) battery_pane_stacon_g1_ParamLimits

0xf47f,	// (0x0005895b) battery_pane_stacon_g1

0xf492,	// (0x0005896e) battery_pane_stacon_g2_ParamLimits

0xf492,	// (0x0005896e) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00058bba) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00058bba) battery_pane_stacon_g

0xf4d0,	// (0x000589ac) navi_icon_pane_stacon

0xf4e4,	// (0x000589c0) navi_navi_pane_stacon

0xf4d0,	// (0x000589ac) navi_text_pane_stacon

0xf429,	// (0x00058905) control_bottom_pane_stacon_g1

0xf4f8,	// (0x000589d4) control_bottom_pane_stacon_t1_ParamLimits

0xf4f8,	// (0x000589d4) control_bottom_pane_stacon_t1

0xa4f5,	// (0x000539d1) grid_app_pane_ParamLimits

0xa4f5,	// (0x000539d1) grid_app_pane

0xa52d,	// (0x00053a09) scroll_pane_cp15_ParamLimits

0xa52d,	// (0x00053a09) scroll_pane_cp15

0xa542,	// (0x00053a1e) cell_app_pane_ParamLimits

0xa542,	// (0x00053a1e) cell_app_pane

0xa587,	// (0x00053a63) cell_app_pane_g1_ParamLimits

0xa587,	// (0x00053a63) cell_app_pane_g1

0xa5ab,	// (0x00053a87) cell_app_pane_g2_ParamLimits

0xa5ab,	// (0x00053a87) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00058bbf) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00058bbf) cell_app_pane_g

0xa5b7,	// (0x00053a93) cell_app_pane_t1_ParamLimits

0xa5b7,	// (0x00053a93) cell_app_pane_t1

0xa5ce,	// (0x00053aaa) grid_highlight_pane_ParamLimits

0xa5ce,	// (0x00053aaa) grid_highlight_pane

0xa1b5,	// (0x00053691) cell_highlight_pane_g1

0xa1bd,	// (0x00053699) cell_highlight_pane_g2

0xa1c5,	// (0x000536a1) cell_highlight_pane_g3

0xa1cd,	// (0x000536a9) cell_highlight_pane_g4

0xa1d5,	// (0x000536b1) cell_highlight_pane_g5

0xa1dd,	// (0x000536b9) cell_highlight_pane_g6

0xa1e5,	// (0x000536c1) cell_highlight_pane_g7

0xa1ed,	// (0x000536c9) cell_highlight_pane_g8

0xa1f5,	// (0x000536d1) cell_highlight_pane_g9

0x94ab,	// (0x00052987) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00058b6d) cell_highlight_pane_g

0xa5e8,	// (0x00053ac4) bg_scroll_pane

0xa607,	// (0x00053ae3) scroll_handle_pane

0xa643,	// (0x00053b1f) scroll_bg_pane_g1

0xa658,	// (0x00053b34) scroll_bg_pane_g2

0xa670,	// (0x00053b4c) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00058bc4) scroll_bg_pane_g

0xa685,	// (0x00053b61) scroll_handle_focus_pane_ParamLimits

0xa685,	// (0x00053b61) scroll_handle_focus_pane

0xa643,	// (0x00053b1f) scroll_handle_pane_g1

0xa692,	// (0x00053b6e) scroll_handle_pane_g2

0xa670,	// (0x00053b4c) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00058bcb) scroll_handle_pane_g

0xa206,	// (0x000536e2) bg_popup_sub_pane_cp21_ParamLimits

0xa206,	// (0x000536e2) bg_popup_sub_pane_cp21

0xa6a6,	// (0x00053b82) popup_fep_japan_predictive_window_t1_ParamLimits

0xa6a6,	// (0x00053b82) popup_fep_japan_predictive_window_t1

0xa6bd,	// (0x00053b99) popup_fep_japan_predictive_window_t2_ParamLimits

0xa6bd,	// (0x00053b99) popup_fep_japan_predictive_window_t2

0xa6f0,	// (0x00053bcc) popup_fep_japan_predictive_window_t3_ParamLimits

0xa6f0,	// (0x00053bcc) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00058bd2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00058bd2) popup_fep_japan_predictive_window_t

0x959b,	// (0x00052a77) bg_popup_sub_pane_cp23

0xa727,	// (0x00053c03) listscroll_japin_cand_pane

0xa72f,	// (0x00053c0b) popup_fep_japan_candidate_window_t1

0xa73d,	// (0x00053c19) candidate_pane_ParamLimits

0xa73d,	// (0x00053c19) candidate_pane

0xa74f,	// (0x00053c2b) scroll_pane_cp30

0xa757,	// (0x00053c33) list_single_popup_jap_candidate_pane_ParamLimits

0xa757,	// (0x00053c33) list_single_popup_jap_candidate_pane

0x959b,	// (0x00052a77) list_highlight_pane_cp30

0xa76c,	// (0x00053c48) list_single_popup_jap_candidate_pane_t1

0xa77b,	// (0x00053c57) level_1_signal

0xa788,	// (0x00053c64) level_2_signal

0xa795,	// (0x00053c71) level_3_signal

0xa7a2,	// (0x00053c7e) level_4_signal

0xa7af,	// (0x00053c8b) level_5_signal

0xa7bc,	// (0x00053c98) level_6_signal

0xa7c9,	// (0x00053ca5) level_7_signal

0xa77b,	// (0x00053c57) level_1_battery

0xa788,	// (0x00053c64) level_2_battery

0xa795,	// (0x00053c71) level_3_battery

0xa7a2,	// (0x00053c7e) level_4_battery

0xa7af,	// (0x00053c8b) level_5_battery

0xa7bc,	// (0x00053c98) level_6_battery

0xa7c9,	// (0x00053ca5) level_7_battery

0xa7ee,	// (0x00053cca) list_menu_pane_ParamLimits

0xa7ee,	// (0x00053cca) list_menu_pane

0xa804,	// (0x00053ce0) scroll_pane_cp25_ParamLimits

0xa804,	// (0x00053ce0) scroll_pane_cp25

0xa81d,	// (0x00053cf9) list_double2_graphic_pane_cp2_ParamLimits

0xa81d,	// (0x00053cf9) list_double2_graphic_pane_cp2

0xa81d,	// (0x00053cf9) list_double2_large_graphic_pane_cp2_ParamLimits

0xa81d,	// (0x00053cf9) list_double2_large_graphic_pane_cp2

0xa81d,	// (0x00053cf9) list_double2_pane_cp2_ParamLimits

0xa81d,	// (0x00053cf9) list_double2_pane_cp2

0xa81d,	// (0x00053cf9) list_double_graphic_pane_cp2_ParamLimits

0xa81d,	// (0x00053cf9) list_double_graphic_pane_cp2

0xa81d,	// (0x00053cf9) list_double_large_graphic_pane_cp2_ParamLimits

0xa81d,	// (0x00053cf9) list_double_large_graphic_pane_cp2

0xa81d,	// (0x00053cf9) list_double_number_pane_cp2_ParamLimits

0xa81d,	// (0x00053cf9) list_double_number_pane_cp2

0xa81d,	// (0x00053cf9) list_double_pane_cp2_ParamLimits

0xa81d,	// (0x00053cf9) list_double_pane_cp2

0xa83c,	// (0x00053d18) list_single_2graphic_pane_cp2_ParamLimits

0xa83c,	// (0x00053d18) list_single_2graphic_pane_cp2

0xa83c,	// (0x00053d18) list_single_graphic_heading_pane_cp2_ParamLimits

0xa83c,	// (0x00053d18) list_single_graphic_heading_pane_cp2

0xa83c,	// (0x00053d18) list_single_graphic_pane_cp2_ParamLimits

0xa83c,	// (0x00053d18) list_single_graphic_pane_cp2

0xa83c,	// (0x00053d18) list_single_heading_pane_cp2_ParamLimits

0xa83c,	// (0x00053d18) list_single_heading_pane_cp2

0xa84e,	// (0x00053d2a) list_single_large_graphic_pane_cp2_ParamLimits

0xa84e,	// (0x00053d2a) list_single_large_graphic_pane_cp2

0xa83c,	// (0x00053d18) list_single_number_heading_pane_cp2_ParamLimits

0xa83c,	// (0x00053d18) list_single_number_heading_pane_cp2

0xa83c,	// (0x00053d18) list_single_number_pane_cp2_ParamLimits

0xa83c,	// (0x00053d18) list_single_number_pane_cp2

0xa83c,	// (0x00053d18) list_single_pane_cp2_ParamLimits

0xa83c,	// (0x00053d18) list_single_pane_cp2

0xa8e3,	// (0x00053dbf) bg_popup_sub_pane_cp22

0x017e,	// (0x0004965a) popup_side_volume_key_window_g1

0x01a2,	// (0x0004967e) popup_side_volume_key_window_t1

0xa934,	// (0x00053e10) volume_small_pane_cp1

0x97ec,	// (0x00052cc8) bg_popup_sub_pane_cp24_ParamLimits

0x97ec,	// (0x00052cc8) bg_popup_sub_pane_cp24

0xa93c,	// (0x00053e18) fep_china_uni_candidate_pane_ParamLimits

0xa93c,	// (0x00053e18) fep_china_uni_candidate_pane

0xa950,	// (0x00053e2c) fep_china_uni_entry_pane

0xa960,	// (0x00053e3c) popup_fep_china_uni_window_g1

0xa97c,	// (0x00053e58) fep_china_uni_entry_pane_g1

0xa984,	// (0x00053e60) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00058c03) fep_china_uni_entry_pane_g

0xa98c,	// (0x00053e68) fep_entry_item_pane

0xa996,	// (0x00053e72) fep_candidate_item_pane

0xa99e,	// (0x00053e7a) fep_china_uni_candidate_pane_g1

0xa9a6,	// (0x00053e82) fep_china_uni_candidate_pane_g2

0xa9ae,	// (0x00053e8a) fep_china_uni_candidate_pane_g3

0xa9b6,	// (0x00053e92) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00058c08) fep_china_uni_candidate_pane_g

0x94ab,	// (0x00052987) fep_entry_item_pane_g1

0xbefb,	// (0x000553d7) fep_entry_item_pane_t1_ParamLimits

0xbefb,	// (0x000553d7) fep_entry_item_pane_t1

0xbf11,	// (0x000553ed) fep_candidate_item_pane_t1_ParamLimits

0xbf11,	// (0x000553ed) fep_candidate_item_pane_t1

0xbf26,	// (0x00055402) fep_candidate_item_pane_t2_ParamLimits

0xbf26,	// (0x00055402) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00058c11) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00058c11) fep_candidate_item_pane_t

0x9836,	// (0x00052d12) list_highlight_pane_cp31_ParamLimits

0x9836,	// (0x00052d12) list_highlight_pane_cp31

0xbf38,	// (0x00055414) level_1_signal_lsc

0xbf41,	// (0x0005541d) level_2_signal_lsc

0xbf4a,	// (0x00055426) level_3_signal_lsc

0xbf53,	// (0x0005542f) level_4_signal_lsc

0xbf5c,	// (0x00055438) level_5_signal_lsc

0xbf65,	// (0x00055441) level_6_signal_lsc

0xbf6e,	// (0x0005544a) level_7_signal_lsc

0xbf6e,	// (0x0005544a) level_1_battery_lsc

0xbf77,	// (0x00055453) level_2_battery_lsc

0xbf80,	// (0x0005545c) level_3_battery_lsc

0xbf89,	// (0x00055465) level_4_battery_lsc

0xbf92,	// (0x0005546e) level_5_battery_lsc

0xbf9b,	// (0x00055477) level_6_battery_lsc

0xbf38,	// (0x00055414) level_7_battery_lsc

0xbfa4,	// (0x00055480) scroll_handle_focus_pane_g1

0xbfad,	// (0x00055489) scroll_handle_focus_pane_g2

0xbfb6,	// (0x00055492) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00058c16) scroll_handle_focus_pane_g

0x9239,	// (0x00052715) list_single_2graphic_pane_g1_ParamLimits

0x9239,	// (0x00052715) list_single_2graphic_pane_g1

0xa0c4,	// (0x000535a0) list_single_2graphic_pane_g2_ParamLimits

0xa0c4,	// (0x000535a0) list_single_2graphic_pane_g2

0xf378,	// (0x00058854) list_single_2graphic_pane_g3_ParamLimits

0xf378,	// (0x00058854) list_single_2graphic_pane_g3

0xa9be,	// (0x00053e9a) list_single_2graphic_pane_g4_ParamLimits

0xa9be,	// (0x00053e9a) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00058c1d) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00058c1d) list_single_2graphic_pane_g

0x9245,	// (0x00052721) list_single_2graphic_pane_t1_ParamLimits

0x9245,	// (0x00052721) list_single_2graphic_pane_t1

0xa9ca,	// (0x00053ea6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa9ca,	// (0x00053ea6) list_double2_graphic_large_graphic_pane_g1

0x8e8c,	// (0x00052368) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8e8c,	// (0x00052368) list_double2_graphic_large_graphic_pane_g2

0xa0e9,	// (0x000535c5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa0e9,	// (0x000535c5) list_double2_graphic_large_graphic_pane_g3

0x9273,	// (0x0005274f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9273,	// (0x0005274f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00058c26) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00058c26) list_double2_graphic_large_graphic_pane_g

0x927f,	// (0x0005275b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x927f,	// (0x0005275b) list_double2_graphic_large_graphic_pane_t1

0x9295,	// (0x00052771) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9295,	// (0x00052771) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00058c2f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00058c2f) list_double2_graphic_large_graphic_pane_t

0xaa4f,	// (0x00053f2b) popup_fast_swap_window_ParamLimits

0xaa4f,	// (0x00053f2b) popup_fast_swap_window

0xaa6b,	// (0x00053f47) popup_side_volume_key_window

0xe2d0,	// (0x000577ac) stacon_top_pane

0xe2da,	// (0x000577b6) status_pane_ParamLimits

0xe2da,	// (0x000577b6) status_pane

0xaa85,	// (0x00053f61) status_small_pane

0x959b,	// (0x00052a77) control_pane

0x959b,	// (0x00052a77) stacon_bottom_pane

0xa149,	// (0x00053625) scroll_pane_cp121

0xa140,	// (0x0005361c) set_content_pane

0xa9dc,	// (0x00053eb8) bg_active_tab_pane_g1_cp1

0xa9e5,	// (0x00053ec1) bg_active_tab_pane_g2_cp1

0xa9ee,	// (0x00053eca) bg_active_tab_pane_g3_cp1

0xa9dc,	// (0x00053eb8) bg_passive_tab_pane_g1_cp1

0xa9e5,	// (0x00053ec1) bg_passive_tab_pane_g2_cp1

0xa9ee,	// (0x00053eca) bg_passive_tab_pane_g3_cp1

0xa9f7,	// (0x00053ed3) bg_active_tab_pane_g1_cp2

0xa9e5,	// (0x00053ec1) bg_active_tab_pane_g2_cp2

0xaa00,	// (0x00053edc) bg_active_tab_pane_g3_cp2

0xa9f7,	// (0x00053ed3) bg_passive_tab_pane_g1_cp2

0xa9e5,	// (0x00053ec1) bg_passive_tab_pane_g2_cp2

0xaa00,	// (0x00053edc) bg_passive_tab_pane_g3_cp2

0xaa09,	// (0x00053ee5) bg_active_tab_pane_g1_cp3

0xa9e5,	// (0x00053ec1) bg_active_tab_pane_g2_cp3

0xaa12,	// (0x00053eee) bg_active_tab_pane_g3_cp3

0xaa09,	// (0x00053ee5) bg_passive_tab_pane_g1_cp3

0xa9e5,	// (0x00053ec1) bg_passive_tab_pane_g2_cp3

0xaa12,	// (0x00053eee) bg_passive_tab_pane_g3_cp3

0xaa1b,	// (0x00053ef7) bg_active_tab_pane_g1_cp4

0xa9e5,	// (0x00053ec1) bg_active_tab_pane_g2_cp4

0xaa26,	// (0x00053f02) bg_active_tab_pane_g3_cp4

0xaa1b,	// (0x00053ef7) bg_passive_tab_pane_g1_cp4

0xa9e5,	// (0x00053ec1) bg_passive_tab_pane_g2_cp4

0xaa26,	// (0x00053f02) bg_passive_tab_pane_g3_cp4

0xaa31,	// (0x00053f0d) bg_active_tab_pane_g1_cp5

0xa9e5,	// (0x00053ec1) bg_active_tab_pane_g2_cp5

0xaa3a,	// (0x00053f16) bg_active_tab_pane_g3_cp5

0xaa31,	// (0x00053f0d) bg_passive_tab_pane_g1_cp5

0xa9e5,	// (0x00053ec1) bg_passive_tab_pane_g2_cp5

0xaa3a,	// (0x00053f16) bg_passive_tab_pane_g3_cp5

0x4559,	// (0x0004da35) list_set_graphic_pane_ParamLimits

0x4559,	// (0x0004da35) list_set_graphic_pane

0x959b,	// (0x00052a77) bg_set_opt_pane_cp4

0xe261,	// (0x0005773d) list_set_graphic_pane_g1_ParamLimits

0xe261,	// (0x0005773d) list_set_graphic_pane_g1

0xe26d,	// (0x00057749) list_set_graphic_pane_g2_ParamLimits

0xe26d,	// (0x00057749) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00058c34) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00058c34) list_set_graphic_pane_g

0x0009,

0xfad6,	// (0x00058fb2) volume_small_pane_cp_g

0xaa43,	// (0x00053f1f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xaa43,	// (0x00053f1f) list_double2_large_graphic_pane_g1_cp2

0xe28f,	// (0x0005776b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xe28f,	// (0x0005776b) list_double2_large_graphic_pane_g2_cp2

0xe2a0,	// (0x0005777c) list_double2_large_graphic_pane_g3_cp2

0xe2a8,	// (0x00057784) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe2a8,	// (0x00057784) list_double2_large_graphic_pane_t1_cp2

0xe2be,	// (0x0005779a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe2be,	// (0x0005779a) list_double2_large_graphic_pane_t2_cp2

0xc944,	// (0x00055e20) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc944,	// (0x00055e20) list_double_large_graphic_pane_g1_cp2

0x3b55,	// (0x0004d031) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3b55,	// (0x0004d031) list_double_large_graphic_pane_g2_cp2

0xe3ea,	// (0x000578c6) list_double_large_graphic_pane_g3_cp2

0x3b66,	// (0x0004d042) list_double_large_graphic_pane_g4_cp

0x3b6e,	// (0x0004d04a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3b6e,	// (0x0004d04a) list_double_large_graphic_pane_t1_cp2

0x3b85,	// (0x0004d061) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3b85,	// (0x0004d061) list_double_large_graphic_pane_t2_cp2

0xe2e8,	// (0x000577c4) list_double2_graphic_pane_g1_cp2_ParamLimits

0xe2e8,	// (0x000577c4) list_double2_graphic_pane_g1_cp2

0xe2f6,	// (0x000577d2) list_double2_graphic_pane_g2_cp2_ParamLimits

0xe2f6,	// (0x000577d2) list_double2_graphic_pane_g2_cp2

0xe307,	// (0x000577e3) list_double2_graphic_pane_g3_cp2

0xe311,	// (0x000577ed) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe311,	// (0x000577ed) list_double2_graphic_pane_t1_cp2

0xe327,	// (0x00057803) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe327,	// (0x00057803) list_double2_graphic_pane_t2_cp2

0xbfbf,	// (0x0005549b) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbfbf,	// (0x0005549b) list_single_number_heading_pane_g1_cp2

0xe339,	// (0x00057815) list_single_number_heading_pane_g2_cp2

0xe341,	// (0x0005781d) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe341,	// (0x0005781d) list_single_number_heading_pane_t1_cp2

0xe357,	// (0x00057833) list_single_number_heading_pane_t2_cp2_ParamLimits

0xe357,	// (0x00057833) list_single_number_heading_pane_t2_cp2

0xe369,	// (0x00057845) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe369,	// (0x00057845) list_single_number_heading_pane_t3_cp2

0xbfbf,	// (0x0005549b) list_single_heading_pane_g1_cp2_ParamLimits

0xbfbf,	// (0x0005549b) list_single_heading_pane_g1_cp2

0xe339,	// (0x00057815) list_single_heading_pane_g2_cp2

0xe341,	// (0x0005781d) list_single_heading_pane_t1_cp2_ParamLimits

0xe341,	// (0x0005781d) list_single_heading_pane_t1_cp2

0x394e,	// (0x0004ce2a) list_single_heading_pane_t2_cp2_ParamLimits

0x394e,	// (0x0004ce2a) list_single_heading_pane_t2_cp2

0x3896,	// (0x0004cd72) list_double_graphic_pane_g1_cp2_ParamLimits

0x3896,	// (0x0004cd72) list_double_graphic_pane_g1_cp2

0x38a2,	// (0x0004cd7e) list_double_graphic_pane_g2_cp2_ParamLimits

0x38a2,	// (0x0004cd7e) list_double_graphic_pane_g2_cp2

0x38b1,	// (0x0004cd8d) list_double_graphic_pane_g3_cp2

0x38b9,	// (0x0004cd95) list_double_graphic_pane_t1_cp2_ParamLimits

0x38b9,	// (0x0004cd95) list_double_graphic_pane_t1_cp2

0x38cf,	// (0x0004cdab) list_double_graphic_pane_t2_cp2_ParamLimits

0x38cf,	// (0x0004cdab) list_double_graphic_pane_t2_cp2

0xe3de,	// (0x000578ba) list_double_number_pane_g1_cp2_ParamLimits

0xe3de,	// (0x000578ba) list_double_number_pane_g1_cp2

0xe3ea,	// (0x000578c6) list_double_number_pane_g2_cp2

0x385a,	// (0x0004cd36) list_double_number_pane_t1_cp2_ParamLimits

0x385a,	// (0x0004cd36) list_double_number_pane_t1_cp2

0x386e,	// (0x0004cd4a) list_double_number_pane_t2_cp2_ParamLimits

0x386e,	// (0x0004cd4a) list_double_number_pane_t2_cp2

0x3884,	// (0x0004cd60) list_double_number_pane_t3_cp2_ParamLimits

0x3884,	// (0x0004cd60) list_double_number_pane_t3_cp2

0x3743,	// (0x0004cc1f) list_single_graphic_pane_g1_cp2_ParamLimits

0x3743,	// (0x0004cc1f) list_single_graphic_pane_g1_cp2

0xe43a,	// (0x00057916) list_single_graphic_pane_g2_cp2_ParamLimits

0xe43a,	// (0x00057916) list_single_graphic_pane_g2_cp2

0xe446,	// (0x00057922) list_single_graphic_pane_g3_cp2

0x3719,	// (0x0004cbf5) list_single_graphic_pane_t1_cp2_ParamLimits

0x3719,	// (0x0004cbf5) list_single_graphic_pane_t1_cp2

0xe43a,	// (0x00057916) list_single_number_pane_g1_cp2_ParamLimits

0xe43a,	// (0x00057916) list_single_number_pane_g1_cp2

0xe446,	// (0x00057922) list_single_number_pane_g2_cp2

0x3719,	// (0x0004cbf5) list_single_number_pane_t1_cp2_ParamLimits

0x3719,	// (0x0004cbf5) list_single_number_pane_t1_cp2

0x372f,	// (0x0004cc0b) list_single_number_pane_t2_cp2_ParamLimits

0x372f,	// (0x0004cc0b) list_single_number_pane_t2_cp2

0xe28f,	// (0x0005776b) list_double2_pane_g1_cp2_ParamLimits

0xe28f,	// (0x0005776b) list_double2_pane_g1_cp2

0xe2a0,	// (0x0005777c) list_double2_pane_g2_cp2

0xe3b6,	// (0x00057892) list_double2_pane_t1_cp2_ParamLimits

0xe3b6,	// (0x00057892) list_double2_pane_t1_cp2

0xe3cc,	// (0x000578a8) list_double2_pane_t2_cp2_ParamLimits

0xe3cc,	// (0x000578a8) list_double2_pane_t2_cp2

0xe3de,	// (0x000578ba) list_double_pane_g1_cp2_ParamLimits

0xe3de,	// (0x000578ba) list_double_pane_g1_cp2

0xe3ea,	// (0x000578c6) list_double_pane_g2_cp2

0xe3f2,	// (0x000578ce) list_double_pane_t1_cp2_ParamLimits

0xe3f2,	// (0x000578ce) list_double_pane_t1_cp2

0xe408,	// (0x000578e4) list_double_pane_t2_cp2_ParamLimits

0xe408,	// (0x000578e4) list_double_pane_t2_cp2

0xaa90,	// (0x00053f6c) list_single_pane_cp2_g3

0xe43a,	// (0x00057916) list_single_pane_g1_cp2_ParamLimits

0xe43a,	// (0x00057916) list_single_pane_g1_cp2

0xe446,	// (0x00057922) list_single_pane_g2_cp2

0xe44e,	// (0x0005792a) list_single_pane_t1_cp2_ParamLimits

0xe44e,	// (0x0005792a) list_single_pane_t1_cp2

0xaa98,	// (0x00053f74) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xaa98,	// (0x00053f74) list_single_large_graphic_pane_g1_cp2

0x0427,	// (0x00049903) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0427,	// (0x00049903) list_single_large_graphic_pane_g2_cp2

0x0433,	// (0x0004990f) list_single_large_graphic_pane_g3_cp2

0xaaa4,	// (0x00053f80) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xaaa4,	// (0x00053f80) list_single_large_graphic_pane_g4_cp1

0x0455,	// (0x00049931) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0455,	// (0x00049931) list_single_large_graphic_pane_t1_cp2

0x36e5,	// (0x0004cbc1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x36e5,	// (0x0004cbc1) list_single_graphic_heading_pane_g1_cp2

0x36b2,	// (0x0004cb8e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x36b2,	// (0x0004cb8e) list_single_graphic_heading_pane_g4_cp2

0xe446,	// (0x00057922) list_single_graphic_heading_pane_g5_cp2

0x36f1,	// (0x0004cbcd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x36f1,	// (0x0004cbcd) list_single_graphic_heading_pane_t1_cp2

0x3707,	// (0x0004cbe3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3707,	// (0x0004cbe3) list_single_graphic_heading_pane_t2_cp2

0x36a6,	// (0x0004cb82) list_single_2graphic_pane_g1_cp2_ParamLimits

0x36a6,	// (0x0004cb82) list_single_2graphic_pane_g1_cp2

0x36b2,	// (0x0004cb8e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x36b2,	// (0x0004cb8e) list_single_2graphic_pane_g2_cp2

0xe446,	// (0x00057922) list_single_2graphic_pane_g3_cp2

0x36c3,	// (0x0004cb9f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x36c3,	// (0x0004cb9f) list_single_2graphic_pane_g4_cp2

0x36cf,	// (0x0004cbab) list_single_2graphic_pane_t1_cp2_ParamLimits

0x36cf,	// (0x0004cbab) list_single_2graphic_pane_t1_cp2

0x94ab,	// (0x00052987) list_highlight_pane_g10_cp1

0x328e,	// (0x0004c76a) list_highlight_pane_g1_cp1

0x3296,	// (0x0004c772) list_highlight_pane_g2_cp1

0x329e,	// (0x0004c77a) list_highlight_pane_g3_cp1

0x32a6,	// (0x0004c782) list_highlight_pane_g4_cp1

0x32ae,	// (0x0004c78a) list_highlight_pane_g5_cp1

0x32b6,	// (0x0004c792) list_highlight_pane_g6_cp1

0x32be,	// (0x0004c79a) list_highlight_pane_g7_cp1

0x32c6,	// (0x0004c7a2) list_highlight_pane_g8_cp1

0x32ce,	// (0x0004c7aa) list_highlight_pane_g9_cp1

0xc6d9,	// (0x00055bb5) form_field_slider_pane_t3

0xc6e7,	// (0x00055bc3) form_field_slider_pane_t4

0x31d2,	// (0x0004c6ae) slider_form_pane_ParamLimits

0x31d2,	// (0x0004c6ae) slider_form_pane

0x959b,	// (0x00052a77) control_abbreviations

0x959b,	// (0x00052a77) control_conventions

0x959b,	// (0x00052a77) control_definitions

0x959b,	// (0x00052a77) format_table_attribute

0xc91b,	// (0x00055df7) bg_popup_preview_window_pane_g9

0x959b,	// (0x00052a77) format_table_data2

0x959b,	// (0x00052a77) format_table_data3

0x959b,	// (0x00052a77) format_table_data_example

0x0008,

0x959b,	// (0x00052a77) intro_purpose

0xf8ef,	// (0x00058dcb) bg_popup_preview_window_pane_g

0x959b,	// (0x00052a77) texts_category

0x959b,	// (0x00052a77) texts_graphics

0x046b,	// (0x00049947) text_digital

0x047a,	// (0x00049956) text_primary

0x0489,	// (0x00049965) text_primary_small

0x0498,	// (0x00049974) text_secondary

0x04a7,	// (0x00049983) text_title

0xcc82,	// (0x0005615e) bg_passive_tab_pane_g1_cp3_srt

0xa9e5,	// (0x00053ec1) bg_passive_tab_pane_g2_cp3_srt

0xcc8b,	// (0x00056167) bg_passive_tab_pane_g3_cp3_srt

0x97ec,	// (0x00052cc8) bg_active_tab_pane_cp3_srt_ParamLimits

0x97ec,	// (0x00052cc8) bg_active_tab_pane_cp3_srt

0xcc94,	// (0x00056170) tabs_4_active_pane_srt_g1

0xcc9c,	// (0x00056178) tabs_4_active_pane_srt_t1_ParamLimits

0xcc9c,	// (0x00056178) tabs_4_active_pane_srt_t1

0xcc82,	// (0x0005615e) bg_active_tab_pane_g1_cp3_copy1

0xa9e5,	// (0x00053ec1) bg_active_tab_pane_g2_cp3_copy1

0xcc8b,	// (0x00056167) bg_active_tab_pane_g3_cp3_copy1

0x9836,	// (0x00052d12) tabs_2_long_active_pane_srt_ParamLimits

0x9836,	// (0x00052d12) tabs_2_long_active_pane_srt

0x9836,	// (0x00052d12) tabs_2_long_passive_pane_srt_ParamLimits

0x9836,	// (0x00052d12) tabs_2_long_passive_pane_srt

0x2576,	// (0x0004ba52) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2576,	// (0x0004ba52) bg_passive_tab_pane_cp4_srt

0xca35,	// (0x00055f11) bg_passive_tab_pane_g1_cp4_srt

0xa9e5,	// (0x00053ec1) bg_passive_tab_pane_g2_cp4_srt

0xca3e,	// (0x00055f1a) bg_passive_tab_pane_g3_cp4_srt

0x9836,	// (0x00052d12) bg_active_tab_pane_cp4_srt_ParamLimits

0x9836,	// (0x00052d12) bg_active_tab_pane_cp4_srt

0xca47,	// (0x00055f23) tabs_2_long_active_pane_srt_t1_ParamLimits

0xca47,	// (0x00055f23) tabs_2_long_active_pane_srt_t1

0xca35,	// (0x00055f11) bg_active_tab_pane_g1_cp4_srt

0xa9e5,	// (0x00053ec1) bg_active_tab_pane_g2_cp4_srt

0xca3e,	// (0x00055f1a) bg_active_tab_pane_g3_cp4_srt

0x97ec,	// (0x00052cc8) tabs_3_long_active_pane_srt_ParamLimits

0x97ec,	// (0x00052cc8) tabs_3_long_active_pane_srt

0x97ec,	// (0x00052cc8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x97ec,	// (0x00052cc8) tabs_3_long_passive_pane_cp_srt

0x97ec,	// (0x00052cc8) tabs_3_long_passive_pane_srt_ParamLimits

0x97ec,	// (0x00052cc8) tabs_3_long_passive_pane_srt

0x2576,	// (0x0004ba52) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2576,	// (0x0004ba52) bg_passive_tab_pane_cp5_srt

0xaa31,	// (0x00053f0d) bg_passive_tab_pane_g1_cp5_srt

0xa9e5,	// (0x00053ec1) bg_passive_tab_pane_g2_cp5_srt

0xaa3a,	// (0x00053f16) bg_passive_tab_pane_g3_cp5_srt

0x9836,	// (0x00052d12) bg_active_tab_pane_cp5_srt_ParamLimits

0x9836,	// (0x00052d12) bg_active_tab_pane_cp5_srt

0xca1f,	// (0x00055efb) tabs_3_long_active_pane_srt_t1_ParamLimits

0xca1f,	// (0x00055efb) tabs_3_long_active_pane_srt_t1

0xaa31,	// (0x00053f0d) bg_active_tab_pane_g1_cp5_srt

0xa9e5,	// (0x00053ec1) bg_active_tab_pane_g2_cp5_srt

0xaa3a,	// (0x00053f16) bg_active_tab_pane_g3_cp5_srt

0x3da6,	// (0x0004d282) navi_text_pane_srt_t1

0x3d9e,	// (0x0004d27a) navi_icon_pane_srt_g1

0x23f2,	// (0x0004b8ce) midp_editing_number_pane_srt

0x04b6,	// (0x00049992) midp_ticker_pane_srt

0x23fa,	// (0x0004b8d6) midp_ticker_pane_srt_g1

0x2402,	// (0x0004b8de) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00058c53) midp_ticker_pane_srt_g

0x240a,	// (0x0004b8e6) midp_ticker_pane_srt_t1

0x3d8f,	// (0x0004d26b) midp_editing_number_pane_t1_copy1

0x2576,	// (0x0004ba52) listscroll_midp_pane

0x2576,	// (0x0004ba52) midp_form_pane

0xab1d,	// (0x00053ff9) midp_info_popup_window_ParamLimits

0xab1d,	// (0x00053ff9) midp_info_popup_window

0xa206,	// (0x000536e2) bg_popup_sub_pane_cp50_ParamLimits

0xa206,	// (0x000536e2) bg_popup_sub_pane_cp50

0x2ed6,	// (0x0004c3b2) listscroll_midp_info_pane_ParamLimits

0x2ed6,	// (0x0004c3b2) listscroll_midp_info_pane

0x2ebe,	// (0x0004c39a) listscroll_form_midp_pane_ParamLimits

0x2ebe,	// (0x0004c39a) listscroll_form_midp_pane

0x2eca,	// (0x0004c3a6) scroll_bar_cp050

0xc5b5,	// (0x00055a91) list_midp_pane

0xce28,	// (0x00056304) signal_pane_g2_cp

0x2dd8,	// (0x0004c2b4) listscroll_midp_info_pane_t1_ParamLimits

0x2dd8,	// (0x0004c2b4) listscroll_midp_info_pane_t1

0xc507,	// (0x000559e3) listscroll_midp_info_pane_t2_ParamLimits

0xc507,	// (0x000559e3) listscroll_midp_info_pane_t2

0xc545,	// (0x00055a21) listscroll_midp_info_pane_t3_ParamLimits

0xc545,	// (0x00055a21) listscroll_midp_info_pane_t3

0xc57f,	// (0x00055a5b) listscroll_midp_info_pane_t4_ParamLimits

0xc57f,	// (0x00055a5b) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00058d06) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00058d06) listscroll_midp_info_pane_t

0xa2c8,	// (0x000537a4) scroll_pane_cp21

0x2d78,	// (0x0004c254) form_midp_field_choice_group_pane

0xc4ca,	// (0x000559a6) form_midp_field_text_pane

0x2dbe,	// (0x0004c29a) form_midp_field_time_pane

0x2dc6,	// (0x0004c2a2) form_midp_gauge_slider_pane

0x2dcf,	// (0x0004c2ab) form_midp_gauge_wait_pane

0x959b,	// (0x00052a77) form_midp_image_pane

0x92a7,	// (0x00052783) list_single_midp_pane_ParamLimits

0x92a7,	// (0x00052783) list_single_midp_pane

0xc4a8,	// (0x00055984) form_midp_field_text_pane_t1

0x2af7,	// (0x0004bfd3) input_focus_pane_cp050

0x2d67,	// (0x0004c243) list_midp_form_text_pane

0x2cfc,	// (0x0004c1d8) form_midp_field_choice_group_pane_t1

0x2d0a,	// (0x0004c1e6) input_focus_pane_cp051

0x2d1e,	// (0x0004c1fa) list_midp_choice_pane

0x959b,	// (0x00052a77) status_idle_pane

0x2ce0,	// (0x0004c1bc) form_midp_field_time_pane_t1

0x94ab,	// (0x00052987) wait_anim_pane_g2_copy1

0x2cee,	// (0x0004c1ca) form_midp_field_time_pane_t2

0x0001,

0x235a,	// (0x0004b836) aid_navinavi_width_2_pane

0xf825,	// (0x00058d01) form_midp_field_time_pane_t

0x959b,	// (0x00052a77) input_focus_pane_cp052

0x959b,	// (0x00052a77) bg_input_focus_pane_cp040

0x2ca0,	// (0x0004c17c) form_midp_gauge_slider_pane_t1

0x2cae,	// (0x0004c18a) form_midp_gauge_slider_pane_t2

0xc48c,	// (0x00055968) form_midp_gauge_slider_pane_t3

0xc49a,	// (0x00055976) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00058cf8) form_midp_gauge_slider_pane_t

0x2cd8,	// (0x0004c1b4) form_midp_slider_pane

0x9836,	// (0x00052d12) bg_input_focus_pane_cp041_ParamLimits

0x9836,	// (0x00052d12) bg_input_focus_pane_cp041

0x2c6d,	// (0x0004c149) form_midp_gauge_wait_pane_t1_ParamLimits

0x2c6d,	// (0x0004c149) form_midp_gauge_wait_pane_t1

0x2c7f,	// (0x0004c15b) form_midp_gauge_wait_pane_t2_ParamLimits

0x2c7f,	// (0x0004c15b) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00058cf3) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00058cf3) form_midp_gauge_wait_pane_t

0x2c91,	// (0x0004c16d) form_midp_wait_pane_ParamLimits

0x2c91,	// (0x0004c16d) form_midp_wait_pane

0xc456,	// (0x00055932) form_midp_image_pane_g1

0xc45f,	// (0x0005593b) form_midp_image_pane_t1

0xc46e,	// (0x0005594a) form_midp_image_pane_t2

0xc47d,	// (0x00055959) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00058cec) form_midp_image_pane_t

0x2c2e,	// (0x0004c10a) list_single_midp_pane_g1

0xe5a0,	// (0x00057a7c) list_single_midp_pane_t1

0xc440,	// (0x0005591c) list_midp_form_item_pane_ParamLimits

0xc440,	// (0x0005591c) list_midp_form_item_pane

0x2302,	// (0x0004b7de) list_midp_form_item_pane_t1

0x2311,	// (0x0004b7ed) midp_ticker_pane_g1

0x231d,	// (0x0004b7f9) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00058c39) midp_ticker_pane_g

0x2329,	// (0x0004b805) midp_ticker_pane_t1

0x3fe0,	// (0x0004d4bc) midp_editing_number_pane_t1

0x3fbe,	// (0x0004d49a) midp_editing_number_pane

0x3fcd,	// (0x0004d4a9) midp_ticker_pane

0x3d7f,	// (0x0004d25b) ai_message_heading_pane

0x959b,	// (0x00052a77) bg_popup_window_pane_cp14

0x3d87,	// (0x0004d263) listscroll_ai_message_pane

0x3d09,	// (0x0004d1e5) ai_message_heading_pane_g1_ParamLimits

0x3d09,	// (0x0004d1e5) ai_message_heading_pane_g1

0xc9e7,	// (0x00055ec3) ai_message_heading_pane_g2_ParamLimits

0xc9e7,	// (0x00055ec3) ai_message_heading_pane_g2

0x3d21,	// (0x0004d1fd) ai_message_heading_pane_g3_ParamLimits

0x3d21,	// (0x0004d1fd) ai_message_heading_pane_g3

0x3d2d,	// (0x0004d209) ai_message_heading_pane_g4_ParamLimits

0x3d2d,	// (0x0004d209) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x00058e2d) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x00058e2d) ai_message_heading_pane_g

0xc9f3,	// (0x00055ecf) ai_message_heading_pane_t1_ParamLimits

0xc9f3,	// (0x00055ecf) ai_message_heading_pane_t1

0xca0d,	// (0x00055ee9) ai_message_heading_pane_t2_ParamLimits

0xca0d,	// (0x00055ee9) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00058e36) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00058e36) ai_message_heading_pane_t

0x3d65,	// (0x0004d241) bg_popup_heading_pane_cp1_ParamLimits

0x3d65,	// (0x0004d241) bg_popup_heading_pane_cp1

0x3cf7,	// (0x0004d1d3) list_ai_message_pane_ParamLimits

0x3cf7,	// (0x0004d1d3) list_ai_message_pane

0xa2c8,	// (0x000537a4) scroll_pane_cp10

0x3c93,	// (0x0004d16f) list_ai_message_pane_g1

0x3c9b,	// (0x0004d177) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00058e0a) list_ai_message_pane_g

0x3ca3,	// (0x0004d17f) list_ai_message_pane_t1_ParamLimits

0x3ca3,	// (0x0004d17f) list_ai_message_pane_t1

0x3cb8,	// (0x0004d194) list_ai_message_pane_t2_ParamLimits

0x3cb8,	// (0x0004d194) list_ai_message_pane_t2

0x3ccd,	// (0x0004d1a9) list_ai_message_pane_t3_ParamLimits

0x3ccd,	// (0x0004d1a9) list_ai_message_pane_t3

0x3ce2,	// (0x0004d1be) list_ai_message_pane_t4_ParamLimits

0x3ce2,	// (0x0004d1be) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x00058e0f) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x00058e0f) list_ai_message_pane_t

0xc9c3,	// (0x00055e9f) cell_ai_soft_ind_pane_ParamLimits

0xc9c3,	// (0x00055e9f) cell_ai_soft_ind_pane

0x233b,	// (0x0004b817) cell_ai_soft_ind_pane_g1_ParamLimits

0x233b,	// (0x0004b817) cell_ai_soft_ind_pane_g1

0x959b,	// (0x00052a77) grid_highlight_cp1

0x2348,	// (0x0004b824) text_secondary_cp56_ParamLimits

0x2348,	// (0x0004b824) text_secondary_cp56

0x3c53,	// (0x0004d12f) example_general_pane_ParamLimits

0x3c53,	// (0x0004d12f) example_general_pane

0x3c5f,	// (0x0004d13b) example_parent_pane_g1_ParamLimits

0x3c5f,	// (0x0004d13b) example_parent_pane_g1

0x3c6b,	// (0x0004d147) example_parent_pane_t1_ParamLimits

0x3c6b,	// (0x0004d147) example_parent_pane_t1

0xb22d,	// (0x00054709) popup_preview_text_window_ParamLimits

0xb22d,	// (0x00054709) popup_preview_text_window

0xe432,	// (0x0005790e) list_single_pane_cp2_g4

0x9c48,	// (0x00053124) bg_popup_preview_window_pane_ParamLimits

0x9c48,	// (0x00053124) bg_popup_preview_window_pane

0xc923,	// (0x00055dff) popup_preview_text_window_t1_ParamLimits

0xc923,	// (0x00055dff) popup_preview_text_window_t1

0x39be,	// (0x0004ce9a) popup_preview_text_window_t2_ParamLimits

0x39be,	// (0x0004ce9a) popup_preview_text_window_t2

0x3a07,	// (0x0004cee3) popup_preview_text_window_t3_ParamLimits

0x3a07,	// (0x0004cee3) popup_preview_text_window_t3

0x3a4c,	// (0x0004cf28) popup_preview_text_window_t4_ParamLimits

0x3a4c,	// (0x0004cf28) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00058dde) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00058dde) popup_preview_text_window_t

0x3aca,	// (0x0004cfa6) scroll_pane_cp11

0x2a83,	// (0x0004bf5f) bg_popup_preview_window_pane_g1

0xc8e3,	// (0x00055dbf) bg_popup_preview_window_pane_g2

0xc8eb,	// (0x00055dc7) bg_popup_preview_window_pane_g3

0xc8f3,	// (0x00055dcf) bg_popup_preview_window_pane_g4

0xc8fb,	// (0x00055dd7) bg_popup_preview_window_pane_g5

0xc903,	// (0x00055ddf) bg_popup_preview_window_pane_g6

0xc90b,	// (0x00055de7) bg_popup_preview_window_pane_g7

0xc913,	// (0x00055def) bg_popup_preview_window_pane_g8

0xed9b,	// (0x00058277) aid_popup_width_pane

0xb1a9,	// (0x00054685) popup_midp_note_alarm_window_ParamLimits

0xb1a9,	// (0x00054685) popup_midp_note_alarm_window

0xa15a,	// (0x00053636) data_form_pane_ParamLimits

0x90e3,	// (0x000525bf) form_field_data_pane_g1

0x90ed,	// (0x000525c9) form_field_data_pane_t1_ParamLimits

0xa166,	// (0x00053642) input_focus_pane_ParamLimits

0x9107,	// (0x000525e3) data_form_wide_pane_ParamLimits

0xe1e0,	// (0x000576bc) form_field_data_wide_pane_g1

0x9118,	// (0x000525f4) form_field_data_wide_pane_t1_ParamLimits

0x9ee9,	// (0x000533c5) input_focus_pane_cp6_ParamLimits

0xa273,	// (0x0005374f) input_popup_find_pane_g1_ParamLimits

0xa273,	// (0x0005374f) input_popup_find_pane_g1

0xf4a3,	// (0x0005897f) aid_navi_side_left_pane

0xf4b8,	// (0x00058994) aid_navi_side_right_pane

0x3389,	// (0x0004c865) bg_popup_window_pane_cp30_ParamLimits

0x3389,	// (0x0004c865) bg_popup_window_pane_cp30

0x3403,	// (0x0004c8df) popup_midp_note_alarm_window_g1_ParamLimits

0x3403,	// (0x0004c8df) popup_midp_note_alarm_window_g1

0x3433,	// (0x0004c90f) popup_midp_note_alarm_window_t1_ParamLimits

0x3433,	// (0x0004c90f) popup_midp_note_alarm_window_t1

0xc72c,	// (0x00055c08) popup_midp_note_alarm_window_t2_ParamLimits

0xc72c,	// (0x00055c08) popup_midp_note_alarm_window_t2

0xc7da,	// (0x00055cb6) popup_midp_note_alarm_window_t3_ParamLimits

0xc7da,	// (0x00055cb6) popup_midp_note_alarm_window_t3

0xc802,	// (0x00055cde) popup_midp_note_alarm_window_t4_ParamLimits

0xc802,	// (0x00055cde) popup_midp_note_alarm_window_t4

0x35ca,	// (0x0004caa6) popup_midp_note_alarm_window_t5_ParamLimits

0x35ca,	// (0x0004caa6) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00058d7b) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00058d7b) popup_midp_note_alarm_window_t

0x3676,	// (0x0004cb52) wait_bar_pane_cp1_ParamLimits

0x3676,	// (0x0004cb52) wait_bar_pane_cp1

0x959b,	// (0x00052a77) wait_anim_pane_copy1

0x959b,	// (0x00052a77) wait_border_pane_copy1

0x307f,	// (0x0004c55b) wait_border_pane_g1_copy1

0xe1ec,	// (0x000576c8) form_field_popup_pane_g1

0x9132,	// (0x0005260e) form_field_popup_pane_t1_ParamLimits

0xa166,	// (0x00053642) input_focus_pane_cp7_ParamLimits

0xa188,	// (0x00053664) list_form_pane_ParamLimits

0xe1f4,	// (0x000576d0) form_field_popup_wide_pane_g1

0xe1fc,	// (0x000576d8) form_field_popup_wide_pane_t1_ParamLimits

0xa166,	// (0x00053642) input_focus_pane_cp8_ParamLimits

0xa194,	// (0x00053670) list_form_wide_pane_ParamLimits

0x4133,	// (0x0004d60f) aid_size_cell_graphic_pane

0x91b1,	// (0x0005268d) data_form_pane_t1_ParamLimits

0x92bd,	// (0x00052799) data_form_wide_pane_t1_ParamLimits

0xc0af,	// (0x0005558b) bg_status_flat_pane

0x9728,	// (0x00052c04) title_pane_t1_ParamLimits

0x97b4,	// (0x00052c90) title_pane_t2_ParamLimits

0x97da,	// (0x00052cb6) title_pane_t3_ParamLimits

0xf557,	// (0x00058a33) title_pane_t_ParamLimits

0xa77b,	// (0x00053c57) level_1_signal_ParamLimits

0xa788,	// (0x00053c64) level_2_signal_ParamLimits

0xa795,	// (0x00053c71) level_3_signal_ParamLimits

0xa7a2,	// (0x00053c7e) level_4_signal_ParamLimits

0xa7af,	// (0x00053c8b) level_5_signal_ParamLimits

0xa7bc,	// (0x00053c98) level_6_signal_ParamLimits

0xa7c9,	// (0x00053ca5) level_7_signal_ParamLimits

0xa77b,	// (0x00053c57) level_1_battery_ParamLimits

0xa788,	// (0x00053c64) level_2_battery_ParamLimits

0xa795,	// (0x00053c71) level_3_battery_ParamLimits

0xa7a2,	// (0x00053c7e) level_4_battery_ParamLimits

0xa7af,	// (0x00053c8b) level_5_battery_ParamLimits

0xa7bc,	// (0x00053c98) level_6_battery_ParamLimits

0xa7c9,	// (0x00053ca5) level_7_battery_ParamLimits

0x328e,	// (0x0004c76a) bg_status_flat_pane_g1

0x3296,	// (0x0004c772) bg_status_flat_pane_g2

0x329e,	// (0x0004c77a) bg_status_flat_pane_g3

0x32a6,	// (0x0004c782) bg_status_flat_pane_g4

0x32ae,	// (0x0004c78a) bg_status_flat_pane_g5

0x32b6,	// (0x0004c792) bg_status_flat_pane_g6

0x32be,	// (0x0004c79a) bg_status_flat_pane_g7

0x9802,	// (0x00052cde) tabs_3_active_pane_t1_ParamLimits

0x9802,	// (0x00052cde) tabs_3_passive_pane_t1_ParamLimits

0x981c,	// (0x00052cf8) tabs_4_active_pane_t1_ParamLimits

0x981c,	// (0x00052cf8) tabs_4_1_passive_pane_t1_ParamLimits

0xa309,	// (0x000537e5) tabs_2_active_pane_t1_ParamLimits

0xa309,	// (0x000537e5) tabs_2_passive_pane_t1_ParamLimits

0x9836,	// (0x00052d12) bg_active_tab_pane_cp4_ParamLimits

0xa31b,	// (0x000537f7) tabs_2_long_active_pane_t1_ParamLimits

0x2576,	// (0x0004ba52) bg_passive_tab_pane_cp4_ParamLimits

0x0d6d,	// (0x0004a249) list_single_midp_graphic_pane_t1_ParamLimits

0x9836,	// (0x00052d12) bg_active_tab_pane_cp5_ParamLimits

0xa32e,	// (0x0005380a) tabs_3_long_active_pane_t1_ParamLimits

0x2576,	// (0x0004ba52) bg_passive_tab_pane_cp5_ParamLimits

0x0d6d,	// (0x0004a249) list_single_midp_graphic_pane_t1

0xc0af,	// (0x0005558b) bg_status_flat_pane_ParamLimits

0x2716,	// (0x0004bbf2) indicator_pane_cp2_ParamLimits

0x2716,	// (0x0004bbf2) indicator_pane_cp2

0xc22d,	// (0x00055709) navi_pane_srt_ParamLimits

0xc22d,	// (0x00055709) navi_pane_srt

0x2865,	// (0x0004bd41) popup_clock_digital_analogue_window_cp1

0x99d6,	// (0x00052eb2) indicator_pane_t1

0x04b6,	// (0x00049992) copy_highlight_pane

0x04b6,	// (0x00049992) cursor_graphics_pane

0x04b6,	// (0x00049992) graphic_within_text_pane

0x04b6,	// (0x00049992) link_highlight_pane

0x3a8d,	// (0x0004cf69) popup_preview_text_window_t5_ParamLimits

0x3a8d,	// (0x0004cf69) popup_preview_text_window_t5

0x2362,	// (0x0004b83e) cursor_digital_pane

0x2362,	// (0x0004b83e) cursor_primary_pane

0x2373,	// (0x0004b84f) cursor_primary_small_pane

0x237b,	// (0x0004b857) cursor_secondary_pane

0x2383,	// (0x0004b85f) cursor_title_pane

0x2362,	// (0x0004b83e) link_highlight_digital_pane

0x236a,	// (0x0004b846) link_highlight_primary_pane

0x2373,	// (0x0004b84f) link_highlight_primary_small_pane

0x237b,	// (0x0004b857) link_highlight_secondary_pane

0x2383,	// (0x0004b85f) link_highlight_title_pane

0x2362,	// (0x0004b83e) copy_highlight_digital_pane

0x2362,	// (0x0004b83e) copy_highlight_primary_pane

0x2373,	// (0x0004b84f) copy_highlight_primary_small_pane

0x237b,	// (0x0004b857) copy_highlight_secondary_pane

0x2383,	// (0x0004b85f) copy_highlight_title_pane

0x237b,	// (0x0004b857) graphic_text_digital_pane

0x332c,	// (0x0004c808) graphic_text_primary_pane

0x3335,	// (0x0004c811) graphic_text_primary_small_pane

0x2373,	// (0x0004b84f) graphic_text_secondary_pane

0x2362,	// (0x0004b83e) graphic_text_title_pane

0xab6e,	// (0x0005404a) cursor_primary_pane_g1

0x331e,	// (0x0004c7fa) cursor_text_primary_t1

0xc722,	// (0x00055bfe) cursor_primary_small_pane_g1

0x3310,	// (0x0004c7ec) cursor_text_primary_small_t1

0xc718,	// (0x00055bf4) cursor_primary_small_pane_g1_copy1

0x32f8,	// (0x0004c7d4) cursor_text_primary_small_t1_copy1

0x32d6,	// (0x0004c7b2) cursor_text_title_t1

0xc70e,	// (0x00055bea) cursor_title_pane_g1

0xab6e,	// (0x0005404a) cursor_digital_pane_g1

0x2395,	// (0x0004b871) cursor_text_digital_t1

0x23a3,	// (0x0004b87f) link_highlight_primary_pane_g1

0x327f,	// (0x0004c75b) link_highlight_primary_pane_t1

0x23a3,	// (0x0004b87f) link_highlight_primary_small_pane_g1

0x23ab,	// (0x0004b887) link_highlight_primary_small_pane_t1

0x23a3,	// (0x0004b87f) link_highlight_secondary_pane_g1

0x23ba,	// (0x0004b896) link_highlight_secondary_pane_t1

0x31e4,	// (0x0004c6c0) link_highlight_title_pane_g1

0x31fb,	// (0x0004c6d7) link_highlight_title_pane_t1

0x31e4,	// (0x0004c6c0) link_highlight_digital_pane_g1

0x31ec,	// (0x0004c6c8) link_highlight_digital_pane_t1

0x309e,	// (0x0004c57a) copy_highlight_primary_pane_g1

0x30c4,	// (0x0004c5a0) copy_highlight_primary_pane_t1

0x309e,	// (0x0004c57a) copy_highlight_primary_small_pane_g1

0x30b5,	// (0x0004c591) copy_highlight_primary_small_pane_t1

0x23c9,	// (0x0004b8a5) copy_highlight_secondary_pane_g1

0x23d1,	// (0x0004b8ad) copy_highlight_secondary_pane_t1

0x309e,	// (0x0004c57a) copy_highlight_title_pane_g1

0x30a6,	// (0x0004c582) copy_highlight_title_pane_t1

0x309e,	// (0x0004c57a) copy_highlight_digital_pane_g1

0x42fd,	// (0x0004d7d9) copy_highlight_digital_pane_t1

0x4251,	// (0x0004d72d) graphic_text_primary_pane_g1

0x42e1,	// (0x0004d7bd) graphic_text_primary_pane_t1

0x42ef,	// (0x0004d7cb) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x00058eaa) graphic_text_primary_pane_t

0x42bd,	// (0x0004d799) graphic_text_primary_small_pane_g1

0x42c5,	// (0x0004d7a1) graphic_text_primary_small_pane_t1

0x42d3,	// (0x0004d7af) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x00058ea5) graphic_text_primary_small_pane_t

0x4299,	// (0x0004d775) graphic_text_secondary_pane_g1

0x42a1,	// (0x0004d77d) graphic_text_secondary_pane_t1

0x42af,	// (0x0004d78b) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x00058ea0) graphic_text_secondary_pane_t

0x4275,	// (0x0004d751) graphic_text_title_pane_g1

0x427d,	// (0x0004d759) graphic_text_title_pane_t1

0x428b,	// (0x0004d767) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x00058e9b) graphic_text_title_pane_t

0x4251,	// (0x0004d72d) graphic_text_digital_pane_g1

0x4259,	// (0x0004d735) graphic_text_digital_pane_t1

0x4267,	// (0x0004d743) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x00058e96) graphic_text_digital_pane_t

0x9836,	// (0x00052d12) navi_icon_pane_srt_ParamLimits

0x9836,	// (0x00052d12) navi_icon_pane_srt

0x959b,	// (0x00052a77) navi_midp_pane_srt

0x959b,	// (0x00052a77) navi_navi_pane_srt

0x9836,	// (0x00052d12) navi_text_pane_srt_ParamLimits

0x9836,	// (0x00052d12) navi_text_pane_srt

0x421c,	// (0x0004d6f8) navi_navi_icon_text_pane_srt

0x4224,	// (0x0004d700) navi_navi_pane_srt_g1_ParamLimits

0x4224,	// (0x0004d700) navi_navi_pane_srt_g1

0x4236,	// (0x0004d712) navi_navi_pane_srt_g2_ParamLimits

0x4236,	// (0x0004d712) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x00058e91) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x00058e91) navi_navi_pane_srt_g

0x4248,	// (0x0004d724) navi_navi_tabs_pane_srt

0x421c,	// (0x0004d6f8) navi_navi_text_pane_srt

0x421c,	// (0x0004d6f8) navi_navi_volume_pane_srt

0x420d,	// (0x0004d6e9) navi_navi_text_pane_srt_t1

0x11a1,	// (0x0004a67d) navi_navi_volume_pane_srt_g1

0x11a9,	// (0x0004a685) volume_small_pane_srt_ParamLimits

0x11a9,	// (0x0004a685) volume_small_pane_srt

0x0524,	// (0x00049a00) volume_small_pane_srt_g1_ParamLimits

0x0524,	// (0x00049a00) volume_small_pane_srt_g1

0x0534,	// (0x00049a10) volume_small_pane_srt_g2_ParamLimits

0x0534,	// (0x00049a10) volume_small_pane_srt_g2

0x0545,	// (0x00049a21) volume_small_pane_srt_g3_ParamLimits

0x0545,	// (0x00049a21) volume_small_pane_srt_g3

0x0556,	// (0x00049a32) volume_small_pane_srt_g4_ParamLimits

0x0556,	// (0x00049a32) volume_small_pane_srt_g4

0x0567,	// (0x00049a43) volume_small_pane_srt_g5_ParamLimits

0x0567,	// (0x00049a43) volume_small_pane_srt_g5

0x0578,	// (0x00049a54) volume_small_pane_srt_g6_ParamLimits

0x0578,	// (0x00049a54) volume_small_pane_srt_g6

0x0589,	// (0x00049a65) volume_small_pane_srt_g7_ParamLimits

0x0589,	// (0x00049a65) volume_small_pane_srt_g7

0x059a,	// (0x00049a76) volume_small_pane_srt_g8_ParamLimits

0x059a,	// (0x00049a76) volume_small_pane_srt_g8

0x05ab,	// (0x00049a87) volume_small_pane_srt_g9_ParamLimits

0x05ab,	// (0x00049a87) volume_small_pane_srt_g9

0x05bc,	// (0x00049a98) volume_small_pane_srt_g10_ParamLimits

0x05bc,	// (0x00049a98) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00058c3e) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00058c3e) volume_small_pane_srt_g

0x9cf1,	// (0x000531cd) query_popup_data_pane_cp2

0x41f3,	// (0x0004d6cf) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x41f3,	// (0x0004d6cf) navi_navi_icon_text_pane_srt_t1

0x332c,	// (0x0004c808) navi_tabs_2_long_pane_srt

0x332c,	// (0x0004c808) navi_tabs_2_pane_srt

0x332c,	// (0x0004c808) navi_tabs_3_long_pane_srt

0x332c,	// (0x0004c808) navi_tabs_3_pane_srt

0x332c,	// (0x0004c808) navi_tabs_4_pane_srt

0xb750,	// (0x00054c2c) tabs_2_active_pane_srt_ParamLimits

0xb750,	// (0x00054c2c) tabs_2_active_pane_srt

0xb760,	// (0x00054c3c) tabs_2_passive_pane_srt_ParamLimits

0xb760,	// (0x00054c3c) tabs_2_passive_pane_srt

0x2af7,	// (0x0004bfd3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2af7,	// (0x0004bfd3) bg_passive_tab_pane_cp1_srt

0xcd29,	// (0x00056205) bg_passive_tab_pane_g1_cp1_srt

0xa9e5,	// (0x00053ec1) bg_passive_tab_pane_g2_cp1_srt

0xcd32,	// (0x0005620e) bg_passive_tab_pane_g3_cp1_srt

0x97ec,	// (0x00052cc8) bg_active_tab_pane_cp1_srt_ParamLimits

0x97ec,	// (0x00052cc8) bg_active_tab_pane_cp1_srt

0xcd3b,	// (0x00056217) tabs_2_active_pane_srt_g1

0xcd43,	// (0x0005621f) tabs_2_active_pane_srt_t1_ParamLimits

0xcd43,	// (0x0005621f) tabs_2_active_pane_srt_t1

0xcd29,	// (0x00056205) bg_active_tab_pane_g1_cp1_srt

0xa9e5,	// (0x00053ec1) bg_active_tab_pane_g2_cp1_srt

0xcd32,	// (0x0005620e) bg_active_tab_pane_g3_cp1_srt

0xb71d,	// (0x00054bf9) tabs_3_active_pane_srt_ParamLimits

0xb71d,	// (0x00054bf9) tabs_3_active_pane_srt

0xb72e,	// (0x00054c0a) tabs_3_passive_pane_cp_srt_ParamLimits

0xb72e,	// (0x00054c0a) tabs_3_passive_pane_cp_srt

0xb73f,	// (0x00054c1b) tabs_3_passive_pane_srt_ParamLimits

0xb73f,	// (0x00054c1b) tabs_3_passive_pane_srt

0x2af7,	// (0x0004bfd3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2af7,	// (0x0004bfd3) bg_passive_tab_pane_cp2_srt

0xab78,	// (0x00054054) bg_passive_tab_pane_g1_cp2_srt

0xa9e5,	// (0x00053ec1) bg_passive_tab_pane_g2_cp2_srt

0xab81,	// (0x0005405d) bg_passive_tab_pane_g3_cp2_srt

0x97ec,	// (0x00052cc8) bg_active_tab_pane_cp2_srt_ParamLimits

0x97ec,	// (0x00052cc8) bg_active_tab_pane_cp2_srt

0xcd0b,	// (0x000561e7) tabs_3_active_pane_srt_g1

0xcd13,	// (0x000561ef) tabs_3_active_pane_srt_t1_ParamLimits

0xcd13,	// (0x000561ef) tabs_3_active_pane_srt_t1

0xab78,	// (0x00054054) bg_active_tab_pane_g1_cp2_srt

0xa9e5,	// (0x00053ec1) bg_active_tab_pane_g2_cp2_srt

0xab81,	// (0x0005405d) bg_active_tab_pane_g3_cp2_srt

0x1106,	// (0x0004a5e2) tabs_4_active_pane_srt_ParamLimits

0x1106,	// (0x0004a5e2) tabs_4_active_pane_srt

0x1118,	// (0x0004a5f4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1118,	// (0x0004a5f4) tabs_4_passive_pane_cp2_srt

0x0721,	// (0x00049bfd) aid_size_cell_toolbar

0x3e37,	// (0x0004d313) main_idle_act_pane_ParamLimits

0xafeb,	// (0x000544c7) popup_large_graphic_colour_window_ParamLimits

0xb4df,	// (0x000549bb) popup_toolbar_window_ParamLimits

0xb4df,	// (0x000549bb) popup_toolbar_window

0x3fef,	// (0x0004d4cb) list_single_graphic_2heading_pane_ParamLimits

0x3fef,	// (0x0004d4cb) list_single_graphic_2heading_pane

0xa4db,	// (0x000539b7) aid_size_cell_apps_grid_lsc_pane

0xa4ed,	// (0x000539c9) aid_size_cell_apps_grid_prt_pane

0x2576,	// (0x0004ba52) bg_wml_button_pane_cp1_ParamLimits

0x2576,	// (0x0004ba52) bg_wml_button_pane_cp1

0xc4a8,	// (0x00055984) form_midp_field_text_pane_t1_ParamLimits

0x2af7,	// (0x0004bfd3) input_focus_pane_cp050_ParamLimits

0x2d67,	// (0x0004c243) list_midp_form_text_pane_ParamLimits

0x2d0a,	// (0x0004c1e6) input_focus_pane_cp051_ParamLimits

0x2d1e,	// (0x0004c1fa) list_midp_choice_pane_ParamLimits

0xc40c,	// (0x000558e8) list_single_2graphic_pane_cp3_ParamLimits

0xc40c,	// (0x000558e8) list_single_2graphic_pane_cp3

0xc420,	// (0x000558fc) list_single_midp_graphic_pane_ParamLimits

0xc420,	// (0x000558fc) list_single_midp_graphic_pane

0xe476,	// (0x00057952) list_single_graphic_2heading_pane_g1_ParamLimits

0xe476,	// (0x00057952) list_single_graphic_2heading_pane_g1

0xe482,	// (0x0005795e) list_single_graphic_2heading_pane_g4_ParamLimits

0xe482,	// (0x0005795e) list_single_graphic_2heading_pane_g4

0xe48e,	// (0x0005796a) list_single_graphic_2heading_pane_g5_ParamLimits

0xe48e,	// (0x0005796a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00058c91) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00058c91) list_single_graphic_2heading_pane_g

0xe49a,	// (0x00057976) list_single_graphic_2heading_pane_t1_ParamLimits

0xe49a,	// (0x00057976) list_single_graphic_2heading_pane_t1

0xe4ae,	// (0x0005798a) list_single_graphic_2heading_pane_t2_ParamLimits

0xe4ae,	// (0x0005798a) list_single_graphic_2heading_pane_t2

0xe4c8,	// (0x000579a4) list_single_graphic_2heading_pane_t3_ParamLimits

0xe4c8,	// (0x000579a4) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00058c98) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00058c98) list_single_graphic_2heading_pane_t

0x29c1,	// (0x0004be9d) bg_popup_sub_pane_cp2

0x29eb,	// (0x0004bec7) grid_toobar_pane

0x0cf0,	// (0x0004a1cc) cell_toolbar_pane_ParamLimits

0x0cf0,	// (0x0004a1cc) cell_toolbar_pane

0x2a27,	// (0x0004bf03) cell_toolbar_pane_g1_ParamLimits

0x2a27,	// (0x0004bf03) cell_toolbar_pane_g1

0xc3cc,	// (0x000558a8) cell_toolbar_pane_g2_ParamLimits

0xc3cc,	// (0x000558a8) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00058ca6) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00058ca6) cell_toolbar_pane_g

0x2a5d,	// (0x0004bf39) grid_highlight_pane_cp2_ParamLimits

0x2a5d,	// (0x0004bf39) grid_highlight_pane_cp2

0x2a77,	// (0x0004bf53) toolbar_button_pane

0x2a83,	// (0x0004bf5f) toolbar_button_pane_g1

0x2a8b,	// (0x0004bf67) toolbar_button_pane_g2

0x2a93,	// (0x0004bf6f) toolbar_button_pane_g3

0x2a9b,	// (0x0004bf77) toolbar_button_pane_g4

0x2aa3,	// (0x0004bf7f) toolbar_button_pane_g5

0x2aab,	// (0x0004bf87) toolbar_button_pane_g6

0x2ab3,	// (0x0004bf8f) toolbar_button_pane_g7

0x2abb,	// (0x0004bf97) toolbar_button_pane_g8

0x2ac3,	// (0x0004bf9f) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00058cab) toolbar_button_pane_g

0x0d28,	// (0x0004a204) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0d28,	// (0x0004a204) list_single_2graphic_pane_g1_cp3

0xb58c,	// (0x00054a68) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb58c,	// (0x00054a68) list_single_2graphic_pane_g2_cp3

0xe339,	// (0x00057815) list_single_2graphic_pane_g3_cp3

0x0d45,	// (0x0004a221) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0d45,	// (0x0004a221) list_single_2graphic_pane_g4_cp3

0xb59d,	// (0x00054a79) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb59d,	// (0x00054a79) list_single_2graphic_pane_t1_cp3

0xbfbf,	// (0x0005549b) list_single_midp_graphic_pane_g2_ParamLimits

0xbfbf,	// (0x0005549b) list_single_midp_graphic_pane_g2

0xe466,	// (0x00057942) aid_zoom_text_primary

0x0729,	// (0x00049c05) aid_zoom_text_secondary

0xabd8,	// (0x000540b4) status_small_pane_g7_ParamLimits

0xabd8,	// (0x000540b4) status_small_pane_g7

0xabfb,	// (0x000540d7) status_small_pane_t1_ParamLimits

0x96f8,	// (0x00052bd4) title_pane_g2

0x0003,

0xf54e,	// (0x00058a2a) title_pane_g

0x9d95,	// (0x00053271) aid_size_cell_colour_1_pane_ParamLimits

0x9d95,	// (0x00053271) aid_size_cell_colour_1_pane

0x9da9,	// (0x00053285) aid_size_cell_colour_2_pane_ParamLimits

0x9da9,	// (0x00053285) aid_size_cell_colour_2_pane

0x9dbd,	// (0x00053299) aid_size_cell_colour_3_pane_ParamLimits

0x9dbd,	// (0x00053299) aid_size_cell_colour_3_pane

0x9dd1,	// (0x000532ad) aid_size_cell_colour_4_pane_ParamLimits

0x9dd1,	// (0x000532ad) aid_size_cell_colour_4_pane

0xf3e0,	// (0x000588bc) title_pane_stacon_g1_ParamLimits

0xf3e0,	// (0x000588bc) title_pane_stacon_g1

0x311b,	// (0x0004c5f7) popup_note_wait_window_g3_ParamLimits

0x311b,	// (0x0004c5f7) popup_note_wait_window_g3

0x3191,	// (0x0004c66d) popup_note_wait_window_t5_ParamLimits

0x3191,	// (0x0004c66d) popup_note_wait_window_t5

0x959b,	// (0x00052a77) main_feb_china_hwr_fs_writing_pane

0xae6d,	// (0x00054349) popup_feb_china_hwr_fs_window_ParamLimits

0xae6d,	// (0x00054349) popup_feb_china_hwr_fs_window

0xb5b9,	// (0x00054a95) aid_size_cell_hwr_fs_ParamLimits

0xb5b9,	// (0x00054a95) aid_size_cell_hwr_fs

0x2af7,	// (0x0004bfd3) bg_popup_sub_pane_cp3_ParamLimits

0x2af7,	// (0x0004bfd3) bg_popup_sub_pane_cp3

0xb5ce,	// (0x00054aaa) grid_hwr_fs_pane_ParamLimits

0xb5ce,	// (0x00054aaa) grid_hwr_fs_pane

0x0dc8,	// (0x0004a2a4) linegrid_hwr_fs_pane_ParamLimits

0x0dc8,	// (0x0004a2a4) linegrid_hwr_fs_pane

0xb5e6,	// (0x00054ac2) cell_hwr_fs_pane_ParamLimits

0xb5e6,	// (0x00054ac2) cell_hwr_fs_pane

0x2b03,	// (0x0004bfdf) linegrid_hwr_fs_pane_g1_ParamLimits

0x2b03,	// (0x0004bfdf) linegrid_hwr_fs_pane_g1

0xc3e0,	// (0x000558bc) linegrid_hwr_fs_pane_g2_ParamLimits

0xc3e0,	// (0x000558bc) linegrid_hwr_fs_pane_g2

0x2b21,	// (0x0004bffd) linegrid_hwr_fs_pane_g3_ParamLimits

0x2b21,	// (0x0004bffd) linegrid_hwr_fs_pane_g3

0xb60c,	// (0x00054ae8) linegrid_hwr_fs_pane_g4_ParamLimits

0xb60c,	// (0x00054ae8) linegrid_hwr_fs_pane_g4

0x0e14,	// (0x0004a2f0) linegrid_hwr_fs_pane_g5_ParamLimits

0x0e14,	// (0x0004a2f0) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00058cd1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00058cd1) linegrid_hwr_fs_pane_g

0x2b2d,	// (0x0004c009) cell_hwr_fs_pane_g1_ParamLimits

0x2b2d,	// (0x0004c009) cell_hwr_fs_pane_g1

0x28fb,	// (0x0004bdd7) cell_hwr_fs_pane_g2_ParamLimits

0x28fb,	// (0x0004bdd7) cell_hwr_fs_pane_g2

0xc3f2,	// (0x000558ce) cell_hwr_fs_pane_g3_ParamLimits

0xc3f2,	// (0x000558ce) cell_hwr_fs_pane_g3

0xc3ff,	// (0x000558db) cell_hwr_fs_pane_g4_ParamLimits

0xc3ff,	// (0x000558db) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00058cdc) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00058cdc) cell_hwr_fs_pane_g

0xb626,	// (0x00054b02) cell_hwr_fs_pane_t1

0x959b,	// (0x00052a77) grid_highlight_pane_cp6

0x959b,	// (0x00052a77) main_idle_act2_pane

0xa2af,	// (0x0005378b) aid_inside_area_popup_secondary

0xc841,	// (0x00055d1d) aid_inside_area_window_primary_ParamLimits

0xc841,	// (0x00055d1d) aid_inside_area_window_primary

0xcd61,	// (0x0005623d) ai2_news_ticker_pane

0x4314,	// (0x0004d7f0) aid_size_cell_ai1_link_ParamLimits

0x4314,	// (0x0004d7f0) aid_size_cell_ai1_link

0xcd69,	// (0x00056245) popup_ai2_data_window_ParamLimits

0xcd69,	// (0x00056245) popup_ai2_data_window

0x4344,	// (0x0004d820) popup_ai2_link_window_ParamLimits

0x4344,	// (0x0004d820) popup_ai2_link_window

0x2af7,	// (0x0004bfd3) bg_popup_sub_pane_cp4_ParamLimits

0x2af7,	// (0x0004bfd3) bg_popup_sub_pane_cp4

0x4358,	// (0x0004d834) grid_ai2_link_pane_ParamLimits

0x4358,	// (0x0004d834) grid_ai2_link_pane

0x436f,	// (0x0004d84b) popup_ai2_link_window_g1_ParamLimits

0x436f,	// (0x0004d84b) popup_ai2_link_window_g1

0x437b,	// (0x0004d857) popup_ai2_link_window_g2_ParamLimits

0x437b,	// (0x0004d857) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x00058eaf) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x00058eaf) popup_ai2_link_window_g

0x438a,	// (0x0004d866) ai2_mp_button_pane

0x4392,	// (0x0004d86e) ai2_mp_volume_pane

0x2d0a,	// (0x0004c1e6) bg_popup_sub_pane_cp5_ParamLimits

0x2d0a,	// (0x0004c1e6) bg_popup_sub_pane_cp5

0x439a,	// (0x0004d876) heading_ai2_gene_pane_ParamLimits

0x439a,	// (0x0004d876) heading_ai2_gene_pane

0x43a6,	// (0x0004d882) list_ai2_gene_pane_ParamLimits

0x43a6,	// (0x0004d882) list_ai2_gene_pane

0x43ee,	// (0x0004d8ca) cell_ai2_link_pane_ParamLimits

0x43ee,	// (0x0004d8ca) cell_ai2_link_pane

0x4404,	// (0x0004d8e0) cell_ai2_link_pane_g1

0x959b,	// (0x00052a77) grid_highlight_pane_cp7

0x11be,	// (0x0004a69a) ai2_mp_volume_pane_g1

0x44d4,	// (0x0004d9b0) ai2_mp_volume_pane_g2

0x4449,	// (0x0004d925) list_ai2_gene_pane_t1

0x44dc,	// (0x0004d9b8) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x00058ec8) ai2_mp_volume_pane_g

0xb770,	// (0x00054c4c) volume_small_pane_cp3

0x44e4,	// (0x0004d9c0) aid_size_cell_ai2_button

0x44ec,	// (0x0004d9c8) grid_ai2_button_pane

0x44f5,	// (0x0004d9d1) cell_ai2_button_pane_ParamLimits

0x44f5,	// (0x0004d9d1) cell_ai2_button_pane

0x94ab,	// (0x00052987) cell_ai2_button_pane_g1

0x959b,	// (0x00052a77) grid_highlight_pane_cp8

0x4494,	// (0x0004d970) ai2_gene_pane_t1_ParamLimits

0x4494,	// (0x0004d970) ai2_gene_pane_t1

0xadbf,	// (0x0005429b) aid_height_parent_landscape

0xca91,	// (0x00055f6d) aid_height_set_list

0x3e37,	// (0x0004d313) aid_size_parent

0x4133,	// (0x0004d60f) aid_size_cell_graphic_pane_ParamLimits

0x43b6,	// (0x0004d892) popup_ai2_data_window_g1_ParamLimits

0x43b6,	// (0x0004d892) popup_ai2_data_window_g1

0x43c2,	// (0x0004d89e) ai2_news_ticker_pane_g1

0x43ca,	// (0x0004d8a6) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x00058eb4) ai2_news_ticker_pane_g

0x43d2,	// (0x0004d8ae) ai2_news_ticker_pane_t1

0x43e0,	// (0x0004d8bc) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x00058eb9) ai2_news_ticker_pane_t

0x440d,	// (0x0004d8e9) heading_ai2_gene_pane_g1

0x4415,	// (0x0004d8f1) heading_ai2_gene_pane_t1_ParamLimits

0x4415,	// (0x0004d8f1) heading_ai2_gene_pane_t1

0x442a,	// (0x0004d906) list_highlight_pane_cp6

0x4432,	// (0x0004d90e) ai2_gene_pane_ParamLimits

0x4432,	// (0x0004d90e) ai2_gene_pane

0x4457,	// (0x0004d933) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x00058ebe) list_ai2_gene_pane_t

0x4465,	// (0x0004d941) list_highlight_pane_cp8_ParamLimits

0x4465,	// (0x0004d941) list_highlight_pane_cp8

0x4476,	// (0x0004d952) ai2_gene_pane_g1_ParamLimits

0x4476,	// (0x0004d952) ai2_gene_pane_g1

0x4488,	// (0x0004d964) ai2_gene_pane_g2_ParamLimits

0x4488,	// (0x0004d964) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x00058ec3) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x00058ec3) ai2_gene_pane_g

0xa0a1,	// (0x0005357d) scroll_pane_cp12

0xad7e,	// (0x0005425a) control_pane_t3_ParamLimits

0xad7e,	// (0x0005425a) control_pane_t3

0xabec,	// (0x000540c8) status_small_pane_g8_ParamLimits

0xabec,	// (0x000540c8) status_small_pane_g8

0xaf30,	// (0x0005440c) popup_find_window_ParamLimits

0xb1e3,	// (0x000546bf) popup_note_image_window_ParamLimits

0xe4e0,	// (0x000579bc) list_double2_graphic_pane_vc_g1_ParamLimits

0xe4e0,	// (0x000579bc) list_double2_graphic_pane_vc_g1

0xf36c,	// (0x00058848) list_double2_graphic_pane_vc_g2_ParamLimits

0xf36c,	// (0x00058848) list_double2_graphic_pane_vc_g2

0xf378,	// (0x00058854) list_double2_graphic_pane_vc_g3_ParamLimits

0xf378,	// (0x00058854) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00058c9f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00058c9f) list_double2_graphic_pane_vc_g

0xe4ec,	// (0x000579c8) list_double2_graphic_pane_vc_t1_ParamLimits

0xe4ec,	// (0x000579c8) list_double2_graphic_pane_vc_t1

0xf36c,	// (0x00058848) list_single_heading_pane_vc_g1_ParamLimits

0xf36c,	// (0x00058848) list_single_heading_pane_vc_g1

0xf378,	// (0x00058854) list_single_heading_pane_vc_g2_ParamLimits

0xf378,	// (0x00058854) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00058aae) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00058aae) list_single_heading_pane_vc_g

0xe502,	// (0x000579de) list_single_heading_pane_vc_t1_ParamLimits

0xe502,	// (0x000579de) list_single_heading_pane_vc_t1

0xe51a,	// (0x000579f6) list_single_heading_pane_vc_t2_ParamLimits

0xe51a,	// (0x000579f6) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00058cc0) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00058cc0) list_single_heading_pane_vc_t

0x0d83,	// (0x0004a25f) list_setting_number_pane_vc_g1_ParamLimits

0x0d83,	// (0x0004a25f) list_setting_number_pane_vc_g1

0x0d8f,	// (0x0004a26b) list_setting_number_pane_vc_g2_ParamLimits

0x0d8f,	// (0x0004a26b) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x00058cc5) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x00058cc5) list_setting_number_pane_vc_g

0xe536,	// (0x00057a12) list_setting_number_pane_vc_t1_ParamLimits

0xe536,	// (0x00057a12) list_setting_number_pane_vc_t1

0xe54a,	// (0x00057a26) list_setting_number_pane_vc_t2_ParamLimits

0xe54a,	// (0x00057a26) list_setting_number_pane_vc_t2

0xe566,	// (0x00057a42) list_setting_number_pane_vc_t3_ParamLimits

0xe566,	// (0x00057a42) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00058cca) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00058cca) list_setting_number_pane_vc_t

0xe590,	// (0x00057a6c) set_value_pane_vc_ParamLimits

0xe590,	// (0x00057a6c) set_value_pane_vc

0x3fef,	// (0x0004d4cb) list_double2_graphic_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_double2_graphic_pane_vc

0x3fef,	// (0x0004d4cb) list_double2_large_graphic_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_double2_large_graphic_pane_vc

0x3fef,	// (0x0004d4cb) list_double2_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_double2_pane_vc

0x3fef,	// (0x0004d4cb) list_double_graphic_heading_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_double_graphic_heading_pane_vc

0x3fef,	// (0x0004d4cb) list_double_graphic_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_double_graphic_pane_vc

0x3fef,	// (0x0004d4cb) list_double_heading_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_double_heading_pane_vc

0x4001,	// (0x0004d4dd) list_double_large_graphic_pane_vc_ParamLimits

0x4001,	// (0x0004d4dd) list_double_large_graphic_pane_vc

0x3fef,	// (0x0004d4cb) list_double_number_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_double_number_pane_vc

0x3fef,	// (0x0004d4cb) list_double_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_double_pane_vc

0x3fef,	// (0x0004d4cb) list_double_time_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_double_time_pane_vc

0x3fef,	// (0x0004d4cb) list_setting_number_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_setting_number_pane_vc

0x3fef,	// (0x0004d4cb) list_setting_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_setting_pane_vc

0x3fef,	// (0x0004d4cb) list_single_graphic_heading_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_single_graphic_heading_pane_vc

0x3fef,	// (0x0004d4cb) list_single_heading_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_single_heading_pane_vc

0x3fef,	// (0x0004d4cb) list_single_number_heading_pane_vc_ParamLimits

0x3fef,	// (0x0004d4cb) list_single_number_heading_pane_vc

0xe4e0,	// (0x000579bc) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe4e0,	// (0x000579bc) list_double_graphic_heading_pane_vc_g1

0xf36c,	// (0x00058848) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf36c,	// (0x00058848) list_double_graphic_heading_pane_vc_g2

0xf378,	// (0x00058854) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xf378,	// (0x00058854) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x00058c9f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00058c9f) list_double_graphic_heading_pane_vc_g

0xef6e,	// (0x0005844a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xef6e,	// (0x0005844a) list_double_graphic_heading_pane_vc_t1

0xef8a,	// (0x00058466) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xef8a,	// (0x00058466) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x00058ecf) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x00058ecf) list_double_graphic_heading_pane_vc_t

0x0d83,	// (0x0004a25f) list_setting_pane_vc_g1_ParamLimits

0x0d83,	// (0x0004a25f) list_setting_pane_vc_g1

0x0d8f,	// (0x0004a26b) list_setting_pane_vc_g2_ParamLimits

0x0d8f,	// (0x0004a26b) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x00058cc5) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x00058cc5) list_setting_pane_vc_g

0xefa8,	// (0x00058484) list_setting_pane_vc_t1_ParamLimits

0xefa8,	// (0x00058484) list_setting_pane_vc_t1

0xefc4,	// (0x000584a0) list_setting_pane_vc_t2_ParamLimits

0xefc4,	// (0x000584a0) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x00058f12) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x00058f12) list_setting_pane_vc_t

0xe590,	// (0x00057a6c) set_value_pane_cp_vc_ParamLimits

0xe590,	// (0x00057a6c) set_value_pane_cp_vc

0xf36c,	// (0x00058848) list_single_number_heading_pane_vc_g1_ParamLimits

0xf36c,	// (0x00058848) list_single_number_heading_pane_vc_g1

0xf378,	// (0x00058854) list_single_number_heading_pane_vc_g2_ParamLimits

0xf378,	// (0x00058854) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00058aae) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00058aae) list_single_number_heading_pane_vc_g

0xe502,	// (0x000579de) list_single_number_heading_pane_vc_t1_ParamLimits

0xe502,	// (0x000579de) list_single_number_heading_pane_vc_t1

0xefde,	// (0x000584ba) list_single_number_heading_pane_vc_t2_ParamLimits

0xefde,	// (0x000584ba) list_single_number_heading_pane_vc_t2

0xef1e,	// (0x000583fa) list_single_number_heading_pane_vc_t3_ParamLimits

0xef1e,	// (0x000583fa) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x00058f17) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x00058f17) list_single_number_heading_pane_vc_t

0xe4e0,	// (0x000579bc) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe4e0,	// (0x000579bc) list_single_graphic_heading_pane_vc_g1

0xf36c,	// (0x00058848) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xf36c,	// (0x00058848) list_single_graphic_heading_pane_vc_g4

0xf378,	// (0x00058854) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xf378,	// (0x00058854) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00058c9f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00058c9f) list_single_graphic_heading_pane_vc_g

0xe502,	// (0x000579de) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe502,	// (0x000579de) list_single_graphic_heading_pane_vc_t1

0xeff2,	// (0x000584ce) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeff2,	// (0x000584ce) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x00058f1e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x00058f1e) list_single_graphic_heading_pane_vc_t

0xf36c,	// (0x00058848) list_double2_pane_vc_g1_ParamLimits

0xf36c,	// (0x00058848) list_double2_pane_vc_g1

0xf378,	// (0x00058854) list_double2_pane_vc_g2_ParamLimits

0xf378,	// (0x00058854) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x00058aae) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x00058aae) list_double2_pane_vc_g

0xef58,	// (0x00058434) list_double2_pane_vc_t1_ParamLimits

0xef58,	// (0x00058434) list_double2_pane_vc_t1

0x1220,	// (0x0004a6fc) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1220,	// (0x0004a6fc) list_double2_large_graphic_pane_vc_g1

0xf36c,	// (0x00058848) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf36c,	// (0x00058848) list_double2_large_graphic_pane_vc_g2

0xf378,	// (0x00058854) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf378,	// (0x00058854) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00058ac6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00058ac6) list_double2_large_graphic_pane_vc_g

0xef30,	// (0x0005840c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xef30,	// (0x0005840c) list_double2_large_graphic_pane_vc_t1

0x122c,	// (0x0004a708) list_double_time_pane_vc_g1_ParamLimits

0x122c,	// (0x0004a708) list_double_time_pane_vc_g1

0x1238,	// (0x0004a714) list_double_time_pane_vc_g2_ParamLimits

0x1238,	// (0x0004a714) list_double_time_pane_vc_g2

0x0001,

0xfa47,	// (0x00058f23) list_double_time_pane_vc_g_ParamLimits

0xfa47,	// (0x00058f23) list_double_time_pane_vc_g

0xf006,	// (0x000584e2) list_double_time_pane_vc_t1_ParamLimits

0xf006,	// (0x000584e2) list_double_time_pane_vc_t1

0xf02a,	// (0x00058506) list_double_time_pane_vc_t2_ParamLimits

0xf02a,	// (0x00058506) list_double_time_pane_vc_t2

0xf079,	// (0x00058555) list_double_time_pane_vc_t3_ParamLimits

0xf079,	// (0x00058555) list_double_time_pane_vc_t3

0xf08b,	// (0x00058567) list_double_time_pane_vc_t4_ParamLimits

0xf08b,	// (0x00058567) list_double_time_pane_vc_t4

0x0003,

0xfa4c,	// (0x00058f28) list_double_time_pane_vc_t_ParamLimits

0xfa4c,	// (0x00058f28) list_double_time_pane_vc_t

0xf36c,	// (0x00058848) list_double_pane_vc_g1_ParamLimits

0xf36c,	// (0x00058848) list_double_pane_vc_g1

0xf378,	// (0x00058854) list_double_pane_vc_g2_ParamLimits

0xf378,	// (0x00058854) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x00058aae) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x00058aae) list_double_pane_vc_g

0xf09f,	// (0x0005857b) list_double_pane_vc_t1_ParamLimits

0xf09f,	// (0x0005857b) list_double_pane_vc_t1

0xf0b3,	// (0x0005858f) list_double_pane_vc_t2_ParamLimits

0xf0b3,	// (0x0005858f) list_double_pane_vc_t2

0x0001,

0xfa55,	// (0x00058f31) list_double_pane_vc_t_ParamLimits

0xfa55,	// (0x00058f31) list_double_pane_vc_t

0xf36c,	// (0x00058848) list_double_number_pane_vc_g1_ParamLimits

0xf36c,	// (0x00058848) list_double_number_pane_vc_g1

0xf378,	// (0x00058854) list_double_number_pane_vc_g2_ParamLimits

0xf378,	// (0x00058854) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x00058aae) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x00058aae) list_double_number_pane_vc_g

0xef46,	// (0x00058422) list_double_number_pane_vc_t1_ParamLimits

0xef46,	// (0x00058422) list_double_number_pane_vc_t1

0xf0cb,	// (0x000585a7) list_double_number_pane_vc_t2_ParamLimits

0xf0cb,	// (0x000585a7) list_double_number_pane_vc_t2

0xf0df,	// (0x000585bb) list_double_number_pane_vc_t3_ParamLimits

0xf0df,	// (0x000585bb) list_double_number_pane_vc_t3

0x0002,

0xfa5a,	// (0x00058f36) list_double_number_pane_vc_t_ParamLimits

0xfa5a,	// (0x00058f36) list_double_number_pane_vc_t

0x1244,	// (0x0004a720) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1244,	// (0x0004a720) list_double_large_graphic_pane_vc_g1

0x1266,	// (0x0004a742) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1266,	// (0x0004a742) list_double_large_graphic_pane_vc_g2

0x127a,	// (0x0004a756) list_double_large_graphic_pane_vc_g3_ParamLimits

0x127a,	// (0x0004a756) list_double_large_graphic_pane_vc_g3

0xf0f7,	// (0x000585d3) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf0f7,	// (0x000585d3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa61,	// (0x00058f3d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x00058f3d) list_double_large_graphic_pane_vc_g

0xf103,	// (0x000585df) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf103,	// (0x000585df) list_double_large_graphic_pane_vc_t1

0xf11f,	// (0x000585fb) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf11f,	// (0x000585fb) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x00058f46) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x00058f46) list_double_large_graphic_pane_vc_t

0xf36c,	// (0x00058848) list_double_heading_pane_vc_g1_ParamLimits

0xf36c,	// (0x00058848) list_double_heading_pane_vc_g1

0xf378,	// (0x00058854) list_double_heading_pane_vc_g2_ParamLimits

0xf378,	// (0x00058854) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00058aae) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00058aae) list_double_heading_pane_vc_g

0xf141,	// (0x0005861d) list_double_heading_pane_vc_t1_ParamLimits

0xf141,	// (0x0005861d) list_double_heading_pane_vc_t1

0xe502,	// (0x000579de) list_double_heading_pane_vc_t2_ParamLimits

0xe502,	// (0x000579de) list_double_heading_pane_vc_t2

0x0001,

0xfa6f,	// (0x00058f4b) list_double_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x00058f4b) list_double_heading_pane_vc_t

0xf155,	// (0x00058631) list_double_graphic_pane_vc_g1_ParamLimits

0xf155,	// (0x00058631) list_double_graphic_pane_vc_g1

0x1289,	// (0x0004a765) list_double_graphic_pane_vc_g2_ParamLimits

0x1289,	// (0x0004a765) list_double_graphic_pane_vc_g2

0xf36c,	// (0x00058848) list_double_graphic_pane_vc_g3_ParamLimits

0xf36c,	// (0x00058848) list_double_graphic_pane_vc_g3

0x0003,

0xfa74,	// (0x00058f50) list_double_graphic_pane_vc_g_ParamLimits

0xfa74,	// (0x00058f50) list_double_graphic_pane_vc_g

0xf161,	// (0x0005863d) list_double_graphic_pane_vc_t1_ParamLimits

0xf161,	// (0x0005863d) list_double_graphic_pane_vc_t1

0xf185,	// (0x00058661) list_double_graphic_pane_vc_t2_ParamLimits

0xf185,	// (0x00058661) list_double_graphic_pane_vc_t2

0x0001,

0xfa7d,	// (0x00058f59) list_double_graphic_pane_vc_t_ParamLimits

0xfa7d,	// (0x00058f59) list_double_graphic_pane_vc_t

0xeda7,	// (0x00058283) aid_size_cell_fastswap

0x94b5,	// (0x00052991) aid_size_cell_touch_ParamLimits

0x94b5,	// (0x00052991) aid_size_cell_touch

0xeefe,	// (0x000583da) popup_fast_swap_wide_window_ParamLimits

0xeefe,	// (0x000583da) popup_fast_swap_wide_window

0x968f,	// (0x00052b6b) touch_pane_ParamLimits

0x968f,	// (0x00052b6b) touch_pane

0xa152,	// (0x0005362e) button_value_adjust_pane_cp2

0xe1bd,	// (0x00057699) button_value_adjust_pane_cp4

0xe1c5,	// (0x000576a1) form_field_data_pane_cp2

0x9097,	// (0x00052573) form_field_data_wide_pane_cp2

0xa5e8,	// (0x00053ac4) bg_scroll_pane_ParamLimits

0xa607,	// (0x00053ae3) scroll_handle_pane_ParamLimits

0xf539,	// (0x00058a15) scroll_sc2_down_pane_ParamLimits

0xf539,	// (0x00058a15) scroll_sc2_down_pane

0xa62d,	// (0x00053b09) scroll_sc2_up_pane_ParamLimits

0xa62d,	// (0x00053b09) scroll_sc2_up_pane

0xceb0,	// (0x0005638c) grid_wheel_folder_pane_g1_ParamLimits

0xceb0,	// (0x0005638c) grid_wheel_folder_pane_g1

0x032c,	// (0x00049808) clock_nsta_pane_cp2_ParamLimits

0x032c,	// (0x00049808) clock_nsta_pane_cp2

0x2576,	// (0x0004ba52) listscroll_midp_pane_ParamLimits

0xaabe,	// (0x00053f9a) midp_canvas_pane

0x2528,	// (0x0004ba04) nsta_clock_indic_pane

0x255c,	// (0x0004ba38) listscroll_form_pane_vc

0x2564,	// (0x0004ba40) listscroll_set_pane_vc_ParamLimits

0x2564,	// (0x0004ba40) listscroll_set_pane_vc

0xc0d7,	// (0x000555b3) clock_nsta_pane

0xc101,	// (0x000555dd) indicator_nsta_pane

0x29c1,	// (0x0004be9d) bg_popup_sub_pane_cp2_ParamLimits

0x29d5,	// (0x0004beb1) find_pane_cp2_ParamLimits

0x29d5,	// (0x0004beb1) find_pane_cp2

0x29eb,	// (0x0004bec7) grid_toobar_pane_ParamLimits

0x2acb,	// (0x0004bfa7) list_form_gen_pane_vc_ParamLimits

0x2acb,	// (0x0004bfa7) list_form_gen_pane_vc

0x2ae1,	// (0x0004bfbd) scroll_pane_cp8_vc_ParamLimits

0x2ae1,	// (0x0004bfbd) scroll_pane_cp8_vc

0x2b5d,	// (0x0004c039) data_form_wide_pane_vc_ParamLimits

0x2b5d,	// (0x0004c039) data_form_wide_pane_vc

0x2b69,	// (0x0004c045) form_field_data_wide_pane_vc_g1

0x2b71,	// (0x0004c04d) form_field_data_wide_pane_vc_t1_ParamLimits

0x2b71,	// (0x0004c04d) form_field_data_wide_pane_vc_t1

0xa166,	// (0x00053642) input_focus_pane_cp6_vc_ParamLimits

0xa166,	// (0x00053642) input_focus_pane_cp6_vc

0xc5b5,	// (0x00055a91) list_midp_pane_ParamLimits

0x4199,	// (0x0004d675) scroll_pane_cp16_ParamLimits

0x4199,	// (0x0004d675) scroll_pane_cp16

0x2ef8,	// (0x0004c3d4) button_value_adjust_pane_ParamLimits

0x2ef8,	// (0x0004c3d4) button_value_adjust_pane

0xcaa2,	// (0x00055f7e) button_value_adjust_pane_cp6_ParamLimits

0xcaa2,	// (0x00055f7e) button_value_adjust_pane_cp6

0xcbbc,	// (0x00056098) settings_code_pane_cp_ParamLimits

0xcbbc,	// (0x00056098) settings_code_pane_cp

0x94ab,	// (0x00052987) cell_touch_pane_g1

0x94ab,	// (0x00052987) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00058be4) cell_touch_pane_g

0xcd7f,	// (0x0005625b) cell_touch_pane_cp_ParamLimits

0xcd7f,	// (0x0005625b) cell_touch_pane_cp

0xcd9b,	// (0x00056277) cell_touch_pane_ParamLimits

0xcd9b,	// (0x00056277) cell_touch_pane

0x94ab,	// (0x00052987) scroll_sc2_down_pane_g1

0x94ab,	// (0x00052987) scroll_sc2_up_pane_g1

0x959b,	// (0x00052a77) bg_set_opt_pane_cp4_vc

0x4529,	// (0x0004da05) list_set_graphic_pane_vc_g1_ParamLimits

0x4529,	// (0x0004da05) list_set_graphic_pane_vc_g1

0x4535,	// (0x0004da11) list_set_graphic_pane_vc_g2_ParamLimits

0x4535,	// (0x0004da11) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x00058ed4) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x00058ed4) list_set_graphic_pane_vc_g

0x4541,	// (0x0004da1d) text_primary_small_cp13_vc_ParamLimits

0x4541,	// (0x0004da1d) text_primary_small_cp13_vc

0x4559,	// (0x0004da35) list_set_graphic_pane_vc_ParamLimits

0x4559,	// (0x0004da35) list_set_graphic_pane_vc

0x959b,	// (0x00052a77) input_focus_pane_cp2_vc

0x94ab,	// (0x00052987) setting_code_pane_vc_g1

0x98d6,	// (0x00052db2) setting_code_pane_vc_t1

0x456c,	// (0x0004da48) set_text_pane_vc_t1_ParamLimits

0x456c,	// (0x0004da48) set_text_pane_vc_t1

0x959b,	// (0x00052a77) input_focus_pane_cp1_vc

0x4588,	// (0x0004da64) list_set_text_pane_vc

0x94ab,	// (0x00052987) setting_text_pane_vc_g1

0x959b,	// (0x00052a77) bg_set_opt_pane_cp2_vc

0x98a5,	// (0x00052d81) setting_slider_graphic_pane_vc_g1

0x4592,	// (0x0004da6e) setting_slider_graphic_pane_vc_t1

0x45a2,	// (0x0004da7e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x00058ed9) setting_slider_graphic_pane_vc_t

0x45b2,	// (0x0004da8e) slider_set_pane_cp_vc

0x45ba,	// (0x0004da96) slider_set_pane_vc_g1

0x45c3,	// (0x0004da9f) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x00058ede) slider_set_pane_vc_g

0xa1b5,	// (0x00053691) set_opt_bg_pane_g1_copy1

0xa1bd,	// (0x00053699) set_opt_bg_pane_g2_copy1

0x45ef,	// (0x0004dacb) set_opt_bg_pane_g3_copy1

0xa1cd,	// (0x000536a9) set_opt_bg_pane_g4_copy1

0xa1d5,	// (0x000536b1) set_opt_bg_pane_g5_copy1

0xa1dd,	// (0x000536b9) set_opt_bg_pane_g6_copy1

0x45f7,	// (0x0004dad3) set_opt_bg_pane_g7_copy1

0x45ff,	// (0x0004dadb) set_opt_bg_pane_g8_copy1

0x4607,	// (0x0004dae3) set_opt_bg_pane_g9_copy1

0x959b,	// (0x00052a77) bg_set_opt_pane_cp_vc

0x460f,	// (0x0004daeb) setting_slider_pane_vc_t1

0x461e,	// (0x0004dafa) setting_slider_pane_vc_t2

0x462e,	// (0x0004db0a) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x00058eed) setting_slider_pane_vc_t

0x463e,	// (0x0004db1a) slider_set_pane_vc

0x0e38,	// (0x0004a314) volume_set_pane_vc_g1

0x11cf,	// (0x0004a6ab) volume_set_pane_vc_g2

0x11d8,	// (0x0004a6b4) volume_set_pane_vc_g3

0x11e1,	// (0x0004a6bd) volume_set_pane_vc_g4

0x11ea,	// (0x0004a6c6) volume_set_pane_vc_g5

0x11f3,	// (0x0004a6cf) volume_set_pane_vc_g6

0x11fc,	// (0x0004a6d8) volume_set_pane_vc_g7

0x1205,	// (0x0004a6e1) volume_set_pane_vc_g8

0x120e,	// (0x0004a6ea) volume_set_pane_vc_g9

0x1217,	// (0x0004a6f3) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x00058ef4) volume_set_pane_vc_g

0x4646,	// (0x0004db22) volume_set_pane_vc

0x464e,	// (0x0004db2a) button_value_adjust_pane_cp1_vc

0x4658,	// (0x0004db34) list_highlight_pane_cp2_vc

0x4661,	// (0x0004db3d) list_set_pane_vc_ParamLimits

0x4661,	// (0x0004db3d) list_set_pane_vc

0x46bf,	// (0x0004db9b) main_pane_set_vc_t1_ParamLimits

0x46bf,	// (0x0004db9b) main_pane_set_vc_t1

0x46d4,	// (0x0004dbb0) main_pane_set_vc_t2_ParamLimits

0x46d4,	// (0x0004dbb0) main_pane_set_vc_t2

0x46e6,	// (0x0004dbc2) main_pane_set_vc_t3_ParamLimits

0x46e6,	// (0x0004dbc2) main_pane_set_vc_t3

0x46f8,	// (0x0004dbd4) main_pane_set_vc_t4_ParamLimits

0x46f8,	// (0x0004dbd4) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x00058f09) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x00058f09) main_pane_set_vc_t

0x470a,	// (0x0004dbe6) setting_code_pane_vc_ParamLimits

0x470a,	// (0x0004dbe6) setting_code_pane_vc

0x4719,	// (0x0004dbf5) setting_slider_graphic_pane_vc

0x4719,	// (0x0004dbf5) setting_slider_pane_vc

0x4719,	// (0x0004dbf5) setting_text_pane_vc

0x4719,	// (0x0004dbf5) setting_volume_pane_vc

0x4721,	// (0x0004dbfd) scroll_pane_cp121_vc

0xa140,	// (0x0005361c) set_content_pane_vc

0x4729,	// (0x0004dc05) button_value_adjust_pane_g1

0x4732,	// (0x0004dc0e) button_value_adjust_pane_g2

0x0001,

0xfa82,	// (0x00058f5e) button_value_adjust_pane_g

0x473b,	// (0x0004dc17) form_field_slider_wide_pane_vc_t1_ParamLimits

0x473b,	// (0x0004dc17) form_field_slider_wide_pane_vc_t1

0x474f,	// (0x0004dc2b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x474f,	// (0x0004dc2b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa87,	// (0x00058f63) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa87,	// (0x00058f63) form_field_slider_wide_pane_vc_t

0x97ec,	// (0x00052cc8) input_focus_pane_cp10_vc_ParamLimits

0x97ec,	// (0x00052cc8) input_focus_pane_cp10_vc

0x477d,	// (0x0004dc59) slider_cont_pane_cp1_vc_ParamLimits

0x477d,	// (0x0004dc59) slider_cont_pane_cp1_vc

0x478f,	// (0x0004dc6b) slider_form_pane_g1_cp2

0x45c3,	// (0x0004da9f) slider_form_pane_g2_cp2

0x47bc,	// (0x0004dc98) form_field_slider_pane_vc_t3

0x47ca,	// (0x0004dca6) form_field_slider_pane_vc_t4

0x47d8,	// (0x0004dcb4) slider_form_pane_vc_ParamLimits

0x47d8,	// (0x0004dcb4) slider_form_pane_vc

0x47e5,	// (0x0004dcc1) form_field_slider_pane_vc_t1_ParamLimits

0x47e5,	// (0x0004dcc1) form_field_slider_pane_vc_t1

0x474f,	// (0x0004dc2b) form_field_slider_pane_vc_t2_ParamLimits

0x474f,	// (0x0004dc2b) form_field_slider_pane_vc_t2

0x0001,

0xfa99,	// (0x00058f75) form_field_slider_pane_vc_t_ParamLimits

0xfa99,	// (0x00058f75) form_field_slider_pane_vc_t

0x97ec,	// (0x00052cc8) input_focus_pane_cp9_vc_ParamLimits

0x97ec,	// (0x00052cc8) input_focus_pane_cp9_vc

0x4801,	// (0x0004dcdd) slider_cont_pane_vc_ParamLimits

0x4801,	// (0x0004dcdd) slider_cont_pane_vc

0x4815,	// (0x0004dcf1) list_form_graphic_pane_cp_vc_ParamLimits

0x4815,	// (0x0004dcf1) list_form_graphic_pane_cp_vc

0x2b69,	// (0x0004c045) form_field_popup_wide_pane_vc_g1

0x482a,	// (0x0004dd06) form_field_popup_wide_pane_vc_t1_ParamLimits

0x482a,	// (0x0004dd06) form_field_popup_wide_pane_vc_t1

0xa166,	// (0x00053642) input_focus_pane_cp8_vc_ParamLimits

0xa166,	// (0x00053642) input_focus_pane_cp8_vc

0x486f,	// (0x0004dd4b) list_form_wide_pane_vc_ParamLimits

0x486f,	// (0x0004dd4b) list_form_wide_pane_vc

0x487b,	// (0x0004dd57) list_form_graphic_pane_vc_g1

0x4883,	// (0x0004dd5f) list_form_graphic_pane_vc_t1_ParamLimits

0x4883,	// (0x0004dd5f) list_form_graphic_pane_vc_t1

0x9836,	// (0x00052d12) list_highlight_pane_cp5_vc_ParamLimits

0x9836,	// (0x00052d12) list_highlight_pane_cp5_vc

0x489f,	// (0x0004dd7b) list_form_graphic_pane_vc_ParamLimits

0x489f,	// (0x0004dd7b) list_form_graphic_pane_vc

0x2b69,	// (0x0004c045) form_field_popup_pane_vc_g1

0x48b5,	// (0x0004dd91) form_field_popup_pane_vc_t1_ParamLimits

0x48b5,	// (0x0004dd91) form_field_popup_pane_vc_t1

0xa166,	// (0x00053642) input_focus_pane_cp7_vc_ParamLimits

0xa166,	// (0x00053642) input_focus_pane_cp7_vc

0x48cc,	// (0x0004dda8) list_form_pane_vc_ParamLimits

0x48cc,	// (0x0004dda8) list_form_pane_vc

0x48d8,	// (0x0004ddb4) data_form_pane_vc_t1_ParamLimits

0x48d8,	// (0x0004ddb4) data_form_pane_vc_t1

0xa1b5,	// (0x00053691) input_focus_pane_vc_g1

0xa1bd,	// (0x00053699) input_focus_pane_vc_g2

0xa1c5,	// (0x000536a1) input_focus_pane_vc_g3

0xa1cd,	// (0x000536a9) input_focus_pane_vc_g4

0xa1d5,	// (0x000536b1) input_focus_pane_vc_g5

0xa1dd,	// (0x000536b9) input_focus_pane_vc_g6

0xa1e5,	// (0x000536c1) input_focus_pane_vc_g7

0xa1ed,	// (0x000536c9) input_focus_pane_vc_g8

0xa1f5,	// (0x000536d1) input_focus_pane_vc_g9

0x94ab,	// (0x00052987) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00058b6d) input_focus_pane_vc_g

0x2b5d,	// (0x0004c039) data_form_pane_vc_ParamLimits

0x2b5d,	// (0x0004c039) data_form_pane_vc

0x2b69,	// (0x0004c045) form_field_data_pane_vc_g1

0x48f3,	// (0x0004ddcf) form_field_data_pane_vc_t1_ParamLimits

0x48f3,	// (0x0004ddcf) form_field_data_pane_vc_t1

0xa166,	// (0x00053642) input_focus_pane_vc_ParamLimits

0xa166,	// (0x00053642) input_focus_pane_vc

0x490d,	// (0x0004dde9) button_value_adjust_pane_cp3_vc

0x4915,	// (0x0004ddf1) button_value_adjust_pane_cp5_vc

0x491d,	// (0x0004ddf9) form_field_data_pane_vc_ParamLimits

0x491d,	// (0x0004ddf9) form_field_data_pane_vc

0x4934,	// (0x0004de10) form_field_data_pane_vc_cp2

0x493c,	// (0x0004de18) form_field_data_wide_pane_vc_ParamLimits

0x493c,	// (0x0004de18) form_field_data_wide_pane_vc

0x4952,	// (0x0004de2e) form_field_data_wide_pane_vc_cp2

0x495a,	// (0x0004de36) form_field_popup_pane_vc_ParamLimits

0x495a,	// (0x0004de36) form_field_popup_pane_vc

0x4971,	// (0x0004de4d) form_field_popup_wide_pane_vc_ParamLimits

0x4971,	// (0x0004de4d) form_field_popup_wide_pane_vc

0x4987,	// (0x0004de63) form_field_slider_pane_vc_ParamLimits

0x4987,	// (0x0004de63) form_field_slider_pane_vc

0x499a,	// (0x0004de76) form_field_slider_wide_pane_vc_ParamLimits

0x499a,	// (0x0004de76) form_field_slider_wide_pane_vc

0xcdb8,	// (0x00056294) grid_touch_1_pane_ParamLimits

0xcdb8,	// (0x00056294) grid_touch_1_pane

0xcdcc,	// (0x000562a8) grid_touch_2_pane_ParamLimits

0xcdcc,	// (0x000562a8) grid_touch_2_pane

0x4a68,	// (0x0004df44) touch_pane_g1_ParamLimits

0x4a68,	// (0x0004df44) touch_pane_g1

0x49d1,	// (0x0004dead) cell_app_pane_cp_wide_ParamLimits

0x49d1,	// (0x0004dead) cell_app_pane_cp_wide

0x49e2,	// (0x0004debe) grid_popup_fast_wide_pane_ParamLimits

0x49e2,	// (0x0004debe) grid_popup_fast_wide_pane

0x49f6,	// (0x0004ded2) scroll_pane_cp19_ParamLimits

0x49f6,	// (0x0004ded2) scroll_pane_cp19

0x959b,	// (0x00052a77) bg_popup_window_pane_cp20

0x4a0a,	// (0x0004dee6) listscroll_popup_fast_wide_pane

0xcdf6,	// (0x000562d2) grid_indicator_nsta_pane

0x4a12,	// (0x0004deee) clock_nsta_pane_g1

0x4a1b,	// (0x0004def7) clock_nsta_pane_t1

0xce04,	// (0x000562e0) cell_indicator_nsta_pane_ParamLimits

0xce04,	// (0x000562e0) cell_indicator_nsta_pane

0x4a68,	// (0x0004df44) cell_indicator_nsta_pane_g1

0xce1b,	// (0x000562f7) cell_indicator_nsta_pane_g2

0x0001,

0xfaaa,	// (0x00058f86) cell_indicator_nsta_pane_g

0x4a83,	// (0x0004df5f) clock_nsta_pane_cp

0x4a8b,	// (0x0004df67) indicator_nsta_pane_cp

0x4a93,	// (0x0004df6f) nsta_clock_indic_pane_g1

0x99b8,	// (0x00052e94) grid_indicator_pane

0xa71f,	// (0x00053bfb) scroll_pane_cp29

0x027b,	// (0x00049757) indicator_nsta_pane_cp2_ParamLimits

0x027b,	// (0x00049757) indicator_nsta_pane_cp2

0x9836,	// (0x00052d12) main_apps_wheel_pane

0xc4ca,	// (0x000559a6) form_midp_field_text_pane_ParamLimits

0x2eca,	// (0x0004c3a6) scroll_bar_cp050_ParamLimits

0x4af4,	// (0x0004dfd0) cell_indicator_pane_ParamLimits

0x4af4,	// (0x0004dfd0) cell_indicator_pane

0x4b0d,	// (0x0004dfe9) cell_indicator_pane_g1

0xce3a,	// (0x00056316) grid_wheel_folder_pane_ParamLimits

0xce3a,	// (0x00056316) grid_wheel_folder_pane

0xce48,	// (0x00056324) list_wheel_apps_pane_ParamLimits

0xce48,	// (0x00056324) list_wheel_apps_pane

0xce56,	// (0x00056332) main_apps_wheel_pane_g1_ParamLimits

0xce56,	// (0x00056332) main_apps_wheel_pane_g1

0xce62,	// (0x0005633e) main_apps_wheel_pane_g2_ParamLimits

0xce62,	// (0x0005633e) main_apps_wheel_pane_g2

0x0001,

0xfac6,	// (0x00058fa2) main_apps_wheel_pane_g_ParamLimits

0xfac6,	// (0x00058fa2) main_apps_wheel_pane_g

0xce70,	// (0x0005634c) main_apps_wheel_pane_t1_ParamLimits

0xce70,	// (0x0005634c) main_apps_wheel_pane_t1

0xce84,	// (0x00056360) list_wheel_apps_pane_g1

0xce8c,	// (0x00056368) list_wheel_apps_pane_g2

0xce94,	// (0x00056370) list_wheel_apps_pane_g3

0xce9c,	// (0x00056378) list_wheel_apps_pane_g4

0xcea6,	// (0x00056382) list_wheel_apps_pane_g5

0x0004,

0xfacb,	// (0x00058fa7) list_wheel_apps_pane_g

0xe389,	// (0x00057865) navi_icon_text_pane

0xbfcb,	// (0x000554a7) aid_fill_nsta

0x4bd4,	// (0x0004e0b0) navi_icon_text_pane_g1

0x4bec,	// (0x0004e0c8) navi_icon_text_pane_t1

0xe279,	// (0x00057755) list_set_graphic_pane_t1_ParamLimits

0xe279,	// (0x00057755) list_set_graphic_pane_t1

0x35f9,	// (0x0004cad5) popup_midp_note_alarm_window_t6_ParamLimits

0x35f9,	// (0x0004cad5) popup_midp_note_alarm_window_t6

0x360b,	// (0x0004cae7) popup_midp_note_alarm_window_t7_ParamLimits

0x360b,	// (0x0004cae7) popup_midp_note_alarm_window_t7

0x361d,	// (0x0004caf9) popup_midp_note_alarm_window_t8_ParamLimits

0x361d,	// (0x0004caf9) popup_midp_note_alarm_window_t8

0x362f,	// (0x0004cb0b) popup_midp_note_alarm_window_t9_ParamLimits

0x362f,	// (0x0004cb0b) popup_midp_note_alarm_window_t9

0x3641,	// (0x0004cb1d) popup_midp_note_alarm_window_t10_ParamLimits

0x3641,	// (0x0004cb1d) popup_midp_note_alarm_window_t10

0x3653,	// (0x0004cb2f) popup_midp_note_alarm_window_t11_ParamLimits

0x3653,	// (0x0004cb2f) popup_midp_note_alarm_window_t11

0xc822,	// (0x00055cfe) scroll_pane_cp17_ParamLimits

0xc822,	// (0x00055cfe) scroll_pane_cp17

0x0e38,	// (0x0004a314) volume_small_pane_cp_g1

0x12a6,	// (0x0004a782) volume_small_pane_cp_g2

0x12af,	// (0x0004a78b) volume_small_pane_cp_g3

0x12b8,	// (0x0004a794) volume_small_pane_cp_g4

0x12c1,	// (0x0004a79d) volume_small_pane_cp_g5

0x11ea,	// (0x0004a6c6) volume_small_pane_cp_g6

0x12ca,	// (0x0004a7a6) volume_small_pane_cp_g7

0x12d3,	// (0x0004a7af) volume_small_pane_cp_g8

0x12dc,	// (0x0004a7b8) volume_small_pane_cp_g9

0x12e5,	// (0x0004a7c1) volume_small_pane_cp_g10

0x2311,	// (0x0004b7ed) midp_ticker_pane_g1_ParamLimits

0x231d,	// (0x0004b7f9) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00058c39) midp_ticker_pane_g_ParamLimits

0x2329,	// (0x0004b805) midp_ticker_pane_t1_ParamLimits

0xbfef,	// (0x000554cb) aid_fill_nsta_2

0x2eb6,	// (0x0004c392) list_form2_midp_pane

0x3fbe,	// (0x0004d49a) midp_editing_number_pane_ParamLimits

0x3fcd,	// (0x0004d4a9) midp_ticker_pane_ParamLimits

0x4bfe,	// (0x0004e0da) form2_midp_field_pane

0x4c22,	// (0x0004e0fe) scroll_pane_cp51

0x4c42,	// (0x0004e11e) form2_midp_button_pane_ParamLimits

0x4c42,	// (0x0004e11e) form2_midp_button_pane

0x4c54,	// (0x0004e130) form2_midp_content_pane_ParamLimits

0x4c54,	// (0x0004e130) form2_midp_content_pane

0x4c6e,	// (0x0004e14a) form2_midp_field_choice_group_pane

0x4c76,	// (0x0004e152) form2_midp_field_pane_g1

0x4c7e,	// (0x0004e15a) form2_midp_field_pane_g2

0x4c86,	// (0x0004e162) form2_midp_field_pane_g3

0x4c8e,	// (0x0004e16a) form2_midp_field_pane_g4

0x0003,

0xfaf0,	// (0x00058fcc) form2_midp_field_pane_g

0x4c96,	// (0x0004e172) form2_midp_gauge_slider_pane

0x4c9e,	// (0x0004e17a) form2_midp_gauge_wait_pane

0x4ca6,	// (0x0004e182) form2_midp_image_pane_ParamLimits

0x4ca6,	// (0x0004e182) form2_midp_image_pane

0xced9,	// (0x000563b5) form2_midp_label_pane_ParamLimits

0xced9,	// (0x000563b5) form2_midp_label_pane

0xcef2,	// (0x000563ce) form2_midp_label_pane_cp_ParamLimits

0xcef2,	// (0x000563ce) form2_midp_label_pane_cp

0x4cfb,	// (0x0004e1d7) form2_midp_string_pane_ParamLimits

0x4cfb,	// (0x0004e1d7) form2_midp_string_pane

0x92eb,	// (0x000527c7) form2_midp_text_pane_ParamLimits

0x92eb,	// (0x000527c7) form2_midp_text_pane

0x4d0d,	// (0x0004e1e9) form2_midp_time_pane

0x4d1d,	// (0x0004e1f9) input_focus_pane_cp51_ParamLimits

0x4d1d,	// (0x0004e1f9) input_focus_pane_cp51

0xcf11,	// (0x000563ed) form2_midp_label_pane_t1_ParamLimits

0xcf11,	// (0x000563ed) form2_midp_label_pane_t1

0x9308,	// (0x000527e4) form2_mdip_text_pane_t1_ParamLimits

0x9308,	// (0x000527e4) form2_mdip_text_pane_t1

0xf1af,	// (0x0005868b) form2_midp_time_pane_t1

0x4d7e,	// (0x0004e25a) form2_midp_gauge_slider_pane_t1

0xcf51,	// (0x0005642d) form2_midp_gauge_slider_pane_t2

0xcf63,	// (0x0005643f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf9,	// (0x00058fd5) form2_midp_gauge_slider_pane_t

0x4db4,	// (0x0004e290) form2_midp_slider_pane

0x4dc0,	// (0x0004e29c) form2_midp_gauge_wait_pane_t1

0x4dce,	// (0x0004e2aa) form2_midp_wait_pane_ParamLimits

0x4dce,	// (0x0004e2aa) form2_midp_wait_pane

0xcf75,	// (0x00056451) list_single_2graphic_pane_cp4_ParamLimits

0xcf75,	// (0x00056451) list_single_2graphic_pane_cp4

0xc420,	// (0x000558fc) list_single_midp_graphic_pane_cp_ParamLimits

0xc420,	// (0x000558fc) list_single_midp_graphic_pane_cp

0x959b,	// (0x00052a77) list_highlight_pane_cp20

0x4e21,	// (0x0004e2fd) list_single_2graphic_pane_g1_cp4

0x440d,	// (0x0004d8e9) list_single_2graphic_pane_g2_cp4

0x4e29,	// (0x0004e305) list_single_2graphic_pane_t1_cp4

0x9836,	// (0x00052d12) list_highlight_pane_cp21

0x4e38,	// (0x0004e314) list_single_midp_graphic_pane_g4_cp

0x4e47,	// (0x0004e323) list_single_midp_graphic_pane_t1_cp

0xcf8a,	// (0x00056466) form2_mdip_string_pane_t1_ParamLimits

0xcf8a,	// (0x00056466) form2_mdip_string_pane_t1

0x959b,	// (0x00052a77) bg_wml_button_pane_cp2

0x94ab,	// (0x00052987) form2_midp_image_pane_g1

0xf390,	// (0x0005886c) list_double_large_graphic_pane_g5_ParamLimits

0xf390,	// (0x0005886c) list_double_large_graphic_pane_g5

0x2576,	// (0x0004ba52) midp_form_pane_ParamLimits

0x9836,	// (0x00052d12) main_apps_wheel_pane_ParamLimits

0xb26a,	// (0x00054746) popup_preview_window_ParamLimits

0xb26a,	// (0x00054746) popup_preview_window

0xb537,	// (0x00054a13) popup_touch_info_window_ParamLimits

0xb537,	// (0x00054a13) popup_touch_info_window

0xb555,	// (0x00054a31) popup_touch_menu_window_ParamLimits

0xb555,	// (0x00054a31) popup_touch_menu_window

0x94a1,	// (0x0005297d) bg_popup_sub_pane_cp6

0x4f69,	// (0x0004e445) list_touch_menu_pane

0xd002,	// (0x000564de) list_single_touch_menu_pane_ParamLimits

0xd002,	// (0x000564de) list_single_touch_menu_pane

0xd016,	// (0x000564f2) list_single_touch_menu_pane_t1

0x9836,	// (0x00052d12) bg_popup_sub_pane_cp7_ParamLimits

0x9836,	// (0x00052d12) bg_popup_sub_pane_cp7

0x4f95,	// (0x0004e471) heading_sub_pane

0x4f9d,	// (0x0004e479) list_touch_info_pane_ParamLimits

0x4f9d,	// (0x0004e479) list_touch_info_pane

0x4fac,	// (0x0004e488) list_single_touch_info_pane_ParamLimits

0x4fac,	// (0x0004e488) list_single_touch_info_pane

0x4fbe,	// (0x0004e49a) list_single_touch_info_pane_t1

0x4fcc,	// (0x0004e4a8) list_single_touch_info_pane_t2

0x0001,

0xfb07,	// (0x00058fe3) list_single_touch_info_pane_t

0x04b6,	// (0x00049992) bg_popup_heading_pane_cp

0x4fda,	// (0x0004e4b6) heading_sub_pane_t1

0x2af7,	// (0x0004bfd3) bg_popup_preview_window_pane_cp_ParamLimits

0x2af7,	// (0x0004bfd3) bg_popup_preview_window_pane_cp

0x4f95,	// (0x0004e471) heading_preview_pane

0x4f9d,	// (0x0004e479) list_preview_pane_ParamLimits

0x4f9d,	// (0x0004e479) list_preview_pane

0x4fe8,	// (0x0004e4c4) popup_preview_window_g1

0x4fac,	// (0x0004e488) list_single_preview_pane_ParamLimits

0x4fac,	// (0x0004e488) list_single_preview_pane

0x4ff0,	// (0x0004e4cc) list_single_preview_pane_g1

0x4ff8,	// (0x0004e4d4) list_single_preview_pane_t1

0x4fbe,	// (0x0004e49a) list_single_preview_pane_t2

0x0001,

0xfb0c,	// (0x00058fe8) list_single_preview_pane_t

0x5006,	// (0x0004e4e2) bg_popup_heading_pane_cp2_ParamLimits

0x5006,	// (0x0004e4e2) bg_popup_heading_pane_cp2

0x501c,	// (0x0004e4f8) heading_preview_pane_g1

0x5024,	// (0x0004e500) heading_preview_pane_t1_ParamLimits

0x5024,	// (0x0004e500) heading_preview_pane_t1

0x99e5,	// (0x00052ec1) soft_indicator_pane_t1_ParamLimits

0xa07e,	// (0x0005355a) scroll_pane_ParamLimits

0xa61b,	// (0x00053af7) scroll_sc2_left_pane

0xa624,	// (0x00053b00) scroll_sc2_right_pane

0xa643,	// (0x00053b1f) scroll_bg_pane_g1_ParamLimits

0xa658,	// (0x00053b34) scroll_bg_pane_g2_ParamLimits

0xa670,	// (0x00053b4c) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00058bc4) scroll_bg_pane_g_ParamLimits

0xa643,	// (0x00053b1f) scroll_handle_pane_g1_ParamLimits

0xa692,	// (0x00053b6e) scroll_handle_pane_g2_ParamLimits

0xa670,	// (0x00053b4c) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00058bcb) scroll_handle_pane_g_ParamLimits

0xae11,	// (0x000542ed) popup_choice_list_window_ParamLimits

0xae11,	// (0x000542ed) popup_choice_list_window

0x29cd,	// (0x0004bea9) choice_list_pane

0x2a4f,	// (0x0004bf2b) cell_toolbar_pane_t1

0x2a77,	// (0x0004bf53) toolbar_button_pane_ParamLimits

0x3b1f,	// (0x0004cffb) ai_gene_pane_1_t2_ParamLimits

0x3b1f,	// (0x0004cffb) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x00058dee) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x00058dee) ai_gene_pane_1_t

0x5041,	// (0x0004e51d) scroll_sc2_left_pane_g1

0x5041,	// (0x0004e51d) scroll_sc2_right_pane_g1

0x2576,	// (0x0004ba52) bg_popup_sub_pane_cp10

0x504b,	// (0x0004e527) list_choice_list_pane

0xd024,	// (0x00056500) list_single_choice_list_pane_ParamLimits

0xd024,	// (0x00056500) list_single_choice_list_pane

0xd037,	// (0x00056513) list_single_choice_list_pane_g1

0xa2ec,	// (0x000537c8) list_single_choice_list_pane_t1_ParamLimits

0xa2ec,	// (0x000537c8) list_single_choice_list_pane_t1

0x507f,	// (0x0004e55b) choice_list_pane_g1

0xd03f,	// (0x0005651b) choice_list_pane_t1

0x94a1,	// (0x0005297d) input_focus_pane_cp11

0xa4a6,	// (0x00053982) title_pane_stacon_g2_ParamLimits

0xa4a6,	// (0x00053982) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00058baa) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00058baa) title_pane_stacon_g

0x04b6,	// (0x00049992) cursor_press_pane

0xaeb8,	// (0x00054394) popup_fep_hwr_window_ParamLimits

0xaeb8,	// (0x00054394) popup_fep_hwr_window

0x0883,	// (0x00049d5f) popup_fep_vkb_window_ParamLimits

0x0883,	// (0x00049d5f) popup_fep_vkb_window

0xd04d,	// (0x00056529) cursor_press_pane_g1

0x0002,

0xfb35,	// (0x00059011) fep_vkb_side_pane_g_ParamLimits

0x1327,	// (0x0004a803) fep_hwr_candidate_pane_ParamLimits

0x1327,	// (0x0004a803) fep_hwr_candidate_pane

0x1351,	// (0x0004a82d) fep_hwr_side_pane_ParamLimits

0x1351,	// (0x0004a82d) fep_hwr_side_pane

0x1371,	// (0x0004a84d) fep_hwr_top_pane_ParamLimits

0x1371,	// (0x0004a84d) fep_hwr_top_pane

0x1389,	// (0x0004a865) fep_hwr_write_pane_ParamLimits

0x1389,	// (0x0004a865) fep_hwr_write_pane

0xfb35,	// (0x00059011) fep_vkb_side_pane_g

0x509d,	// (0x0004e579) fep_hwr_top_pane_g1

0x50af,	// (0x0004e58b) fep_hwr_top_pane_g2

0x13b5,	// (0x0004a891) fep_hwr_top_pane_g3

0x0002,

0xfb11,	// (0x00058fed) fep_hwr_top_pane_g

0x13ca,	// (0x0004a8a6) fep_hwr_top_text_pane

0xa7e6,	// (0x00053cc2) fep_hwr_top_text_pane_g1

0x50e5,	// (0x0004e5c1) fep_hwr_top_text_pane_t1

0x14c0,	// (0x0004a99c) fep_hwr_candidate_pane_g1

0x532a,	// (0x0004e806) fep_vkb_keypad_pane_g3_ParamLimits

0x532a,	// (0x0004e806) fep_vkb_keypad_pane_g3

0x5352,	// (0x0004e82e) fep_vkb_keypad_pane_g4_ParamLimits

0x5352,	// (0x0004e82e) fep_vkb_keypad_pane_g4

0x53c1,	// (0x0004e89d) fep_vkb_bottom_pane_g2_ParamLimits

0x53c1,	// (0x0004e89d) fep_vkb_bottom_pane_g2

0x0001,

0xfb3c,	// (0x00059018) fep_vkb_bottom_pane_g_ParamLimits

0xfb3c,	// (0x00059018) fep_vkb_bottom_pane_g

0x5041,	// (0x0004e51d) cell_vkb_side_pane_g2

0x0001,

0xfb46,	// (0x00059022) cell_vkb_side_pane_g

0x544c,	// (0x0004e928) cell_vkb_side_pane_t1

0x545a,	// (0x0004e936) cell_vkb_side_pane_t1_copy1

0x5041,	// (0x0004e51d) bg_fep_vkb_candidate_pane_g2

0x5586,	// (0x0004ea62) cell_vkb_candidate_pane_ParamLimits

0x50f3,	// (0x0004e5cf) aid_size_cell_vkb_ParamLimits

0x50f3,	// (0x0004e5cf) aid_size_cell_vkb

0x5586,	// (0x0004ea62) cell_vkb_candidate_pane

0x14da,	// (0x0004a9b6) bg_popup_fep_shadow_pane_g1

0xd08f,	// (0x0005656b) fep_vkb_bottom_pane_ParamLimits

0xd08f,	// (0x0005656b) fep_vkb_bottom_pane

0x51b7,	// (0x0004e693) fep_vkb_candidate_pane_ParamLimits

0x51b7,	// (0x0004e693) fep_vkb_candidate_pane

0xd0b4,	// (0x00056590) fep_vkb_keypad_pane_ParamLimits

0xd0b4,	// (0x00056590) fep_vkb_keypad_pane

0xd0e9,	// (0x000565c5) fep_vkb_side_pane_ParamLimits

0xd0e9,	// (0x000565c5) fep_vkb_side_pane

0xd125,	// (0x00056601) fep_vkb_top_pane_ParamLimits

0xd125,	// (0x00056601) fep_vkb_top_pane

0x5283,	// (0x0004e75f) fep_vkb_top_pane_g1_ParamLimits

0x5283,	// (0x0004e75f) fep_vkb_top_pane_g1

0x5292,	// (0x0004e76e) fep_vkb_top_pane_g2_ParamLimits

0x5292,	// (0x0004e76e) fep_vkb_top_pane_g2

0x52a1,	// (0x0004e77d) fep_vkb_top_pane_g3_ParamLimits

0x52a1,	// (0x0004e77d) fep_vkb_top_pane_g3

0x0003,

0xfb2c,	// (0x00059008) fep_vkb_top_pane_g_ParamLimits

0xfb2c,	// (0x00059008) fep_vkb_top_pane_g

0x52bf,	// (0x0004e79b) fep_vkb_top_text_pane_ParamLimits

0x52bf,	// (0x0004e79b) fep_vkb_top_text_pane

0xd15a,	// (0x00056636) fep_vkb_side_pane_g1_ParamLimits

0xd15a,	// (0x00056636) fep_vkb_side_pane_g1

0x5319,	// (0x0004e7f5) grid_vkb_side_pane_ParamLimits

0x5319,	// (0x0004e7f5) grid_vkb_side_pane

0x14e2,	// (0x0004a9be) bg_popup_fep_shadow_pane_g2

0x14eb,	// (0x0004a9c7) bg_popup_fep_shadow_pane_g3

0x14f3,	// (0x0004a9cf) bg_popup_fep_shadow_pane_g4

0x14fc,	// (0x0004a9d8) bg_popup_fep_shadow_pane_g5

0x1506,	// (0x0004a9e2) bg_popup_fep_shadow_pane_g6

0x150e,	// (0x0004a9ea) bg_popup_fep_shadow_pane_g7

0xa1d5,	// (0x000536b1) bg_popup_fep_shadow_pane_g8

0x5370,	// (0x0004e84c) grid_vkb_keypad_number_pane_ParamLimits

0x5370,	// (0x0004e84c) grid_vkb_keypad_number_pane

0x5380,	// (0x0004e85c) grid_vkb_keypad_pane_ParamLimits

0x5380,	// (0x0004e85c) grid_vkb_keypad_pane

0x53a6,	// (0x0004e882) fep_vkb_bottom_pane_g1_ParamLimits

0x53a6,	// (0x0004e882) fep_vkb_bottom_pane_g1

0x53cf,	// (0x0004e8ab) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x53cf,	// (0x0004e8ab) grid_vkb_keypad_bottom_left_pane

0x53e4,	// (0x0004e8c0) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x53e4,	// (0x0004e8c0) grid_vkb_keypad_bottom_right_pane

0x53f9,	// (0x0004e8d5) fep_vkb_top_text_pane_g1

0xd1a1,	// (0x0005667d) fep_vkb_top_text_pane_t1

0xd1b3,	// (0x0005668f) cell_vkb_side_pane_ParamLimits

0xd1b3,	// (0x0005668f) cell_vkb_side_pane

0x5041,	// (0x0004e51d) cell_vkb_side_pane_g1

0x5468,	// (0x0004e944) cell_vkb_keypad_pane_ParamLimits

0x5468,	// (0x0004e944) cell_vkb_keypad_pane

0x54dd,	// (0x0004e9b9) cell_vkb_keypad_pane_g1

0x0008,

0xfb59,	// (0x00059035) bg_popup_fep_shadow_pane_g

0x5041,	// (0x0004e51d) cell_hwr_side_pane_g1

0x5041,	// (0x0004e51d) cell_hwr_side_pane_g2

0x54e7,	// (0x0004e9c3) cell_vkb_keypad_pane_t1

0xd1c9,	// (0x000566a5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd1c9,	// (0x000566a5) cell_vkb_keypad_bottom_left_pane

0xd1de,	// (0x000566ba) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd1de,	// (0x000566ba) cell_vkb_keypad_bottom_right_pane

0x5041,	// (0x0004e51d) cell_vkb_keypad_bottom_left_pane_g1

0x5041,	// (0x0004e51d) cell_vkb_keypad_bottom_right_pane_g1

0x554b,	// (0x0004ea27) cell_vkb_keypad_number_pane_ParamLimits

0x554b,	// (0x0004ea27) cell_vkb_keypad_number_pane

0x556a,	// (0x0004ea46) cell_vkb_keypad_number_pane_g1

0x5574,	// (0x0004ea50) cell_vkb_keypad_number_pane_g2

0x557d,	// (0x0004ea59) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4b,	// (0x00059027) cell_vkb_keypad_number_pane_g

0x54e7,	// (0x0004e9c3) cell_vkb_keypad_number_pane_t1

0x55a1,	// (0x0004ea7d) fep_vkb_candidate_pane_g1

0x0001,

0xfb46,	// (0x00059022) cell_hwr_side_pane_g

0x55ba,	// (0x0004ea96) cell_hwr_side_pane_t1

0x1520,	// (0x0004a9fc) cell_hwr_side_pane_t1_copy1

0x52b1,	// (0x0004e78d) cell_hwr_candidate_pane_g1

0x152e,	// (0x0004aa0a) cell_hwr_candidate_pane_t1

0x5041,	// (0x0004e51d) cell_vkb_candidate_pane_g2

0x5640,	// (0x0004eb1c) cell_vkb_candidate_pane_t1

0x12ee,	// (0x0004a7ca) bg_popup_fep_shadow_pane_ParamLimits

0x12ee,	// (0x0004a7ca) bg_popup_fep_shadow_pane

0xd055,	// (0x00056531) bg_fep_hwr_top_pane_g4

0x50c1,	// (0x0004e59d) bg_hwr_side_pane_g1_ParamLimits

0x50c1,	// (0x0004e59d) bg_hwr_side_pane_g1

0xb791,	// (0x00054c6d) cell_hwr_side_pane_ParamLimits

0xb791,	// (0x00054c6d) cell_hwr_side_pane

0x1441,	// (0x0004a91d) fep_hwr_write_pane_g1_ParamLimits

0x1441,	// (0x0004a91d) fep_hwr_write_pane_g1

0x144e,	// (0x0004a92a) fep_hwr_write_pane_g2_ParamLimits

0x144e,	// (0x0004a92a) fep_hwr_write_pane_g2

0x145b,	// (0x0004a937) fep_hwr_write_pane_g3_ParamLimits

0x145b,	// (0x0004a937) fep_hwr_write_pane_g3

0xb7b1,	// (0x00054c8d) fep_hwr_write_pane_g4_ParamLimits

0xb7b1,	// (0x00054c8d) fep_hwr_write_pane_g4

0x0005,

0xfb18,	// (0x00058ff4) fep_hwr_write_pane_g_ParamLimits

0xfb18,	// (0x00058ff4) fep_hwr_write_pane_g

0xd055,	// (0x00056531) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd055,	// (0x00056531) bg_fep_hwr_candidate_pane_g2

0x147e,	// (0x0004a95a) cell_hwr_candidate_pane_ParamLimits

0x147e,	// (0x0004a95a) cell_hwr_candidate_pane

0x14c0,	// (0x0004a99c) fep_hwr_candidate_pane_g1_ParamLimits

0x5121,	// (0x0004e5fd) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5121,	// (0x0004e5fd) bg_popup_fep_shadow_pane_cp2

0x52b1,	// (0x0004e78d) fep_vkb_top_pane_g4_ParamLimits

0x52b1,	// (0x0004e78d) fep_vkb_top_pane_g4

0x52f7,	// (0x0004e7d3) fep_vkb_side_pane_g2_ParamLimits

0x52f7,	// (0x0004e7d3) fep_vkb_side_pane_g2

0x8fa5,	// (0x00052481) list_setting_pane_t4_ParamLimits

0x8fa5,	// (0x00052481) list_setting_pane_t4

0x903f,	// (0x0005251b) list_setting_number_pane_t5_ParamLimits

0x903f,	// (0x0005251b) list_setting_number_pane_t5

0xa82c,	// (0x00053d08) list_double_heading_pane_cp2_ParamLimits

0xa82c,	// (0x00053d08) list_double_heading_pane_cp2

0x4be0,	// (0x0004e0bc) list_double_heading_pane_g1_cp2_ParamLimits

0x4be0,	// (0x0004e0bc) list_double_heading_pane_g1_cp2

0x564e,	// (0x0004eb2a) list_double_heading_pane_g2_cp2_ParamLimits

0x564e,	// (0x0004eb2a) list_double_heading_pane_g2_cp2

0x5662,	// (0x0004eb3e) list_double_heading_pane_t1_cp2_ParamLimits

0x5662,	// (0x0004eb3e) list_double_heading_pane_t1_cp2

0x5678,	// (0x0004eb54) list_double_heading_pane_t2_cp2_ParamLimits

0x5678,	// (0x0004eb54) list_double_heading_pane_t2_cp2

0x9489,	// (0x00052965) aid_value_unit2

0xef14,	// (0x000583f0) popup_preview_fixed_window

0x9ba0,	// (0x0005307c) bg_popup_preview_window_pane_cp02

0x568a,	// (0x0004eb66) list_preview_fixed_pane

0x56d0,	// (0x0004ebac) list_empty_pane_fp_ParamLimits

0x56d0,	// (0x0004ebac) list_empty_pane_fp

0x56d0,	// (0x0004ebac) list_single_cale_day_pane_fp_ParamLimits

0x56d0,	// (0x0004ebac) list_single_cale_day_pane_fp

0x56d0,	// (0x0004ebac) list_single_graphic_heading_pane_fp_ParamLimits

0x56d0,	// (0x0004ebac) list_single_graphic_heading_pane_fp

0x56d0,	// (0x0004ebac) list_single_graphic_pane_fp_ParamLimits

0x56d0,	// (0x0004ebac) list_single_graphic_pane_fp

0x56d0,	// (0x0004ebac) list_single_heading_pane_fp_ParamLimits

0x56d0,	// (0x0004ebac) list_single_heading_pane_fp

0x56d0,	// (0x0004ebac) list_single_pane_fp_ParamLimits

0x56d0,	// (0x0004ebac) list_single_pane_fp

0x56e6,	// (0x0004ebc2) list_single_pane_fp_g1_ParamLimits

0x56e6,	// (0x0004ebc2) list_single_pane_fp_g1

0x56f2,	// (0x0004ebce) list_single_pane_fp_g2_ParamLimits

0x56f2,	// (0x0004ebce) list_single_pane_fp_g2

0x56fe,	// (0x0004ebda) list_single_pane_fp_g3_ParamLimits

0x56fe,	// (0x0004ebda) list_single_pane_fp_g3

0x5712,	// (0x0004ebee) list_single_pane_fp_g4_ParamLimits

0x5712,	// (0x0004ebee) list_single_pane_fp_g4

0x0003,

0xfb7a,	// (0x00059056) list_single_pane_fp_g_ParamLimits

0xfb7a,	// (0x00059056) list_single_pane_fp_g

0xf1c2,	// (0x0005869e) list_single_pane_fp_t1_ParamLimits

0xf1c2,	// (0x0005869e) list_single_pane_fp_t1

0xf1d9,	// (0x000586b5) list_single_graphic_pane_fp_g1_ParamLimits

0xf1d9,	// (0x000586b5) list_single_graphic_pane_fp_g1

0x56e6,	// (0x0004ebc2) list_single_graphic_pane_fp_g2_ParamLimits

0x56e6,	// (0x0004ebc2) list_single_graphic_pane_fp_g2

0x56f2,	// (0x0004ebce) list_single_graphic_pane_fp_g3_ParamLimits

0x56f2,	// (0x0004ebce) list_single_graphic_pane_fp_g3

0x56fe,	// (0x0004ebda) list_single_graphic_pane_fp_g4_ParamLimits

0x56fe,	// (0x0004ebda) list_single_graphic_pane_fp_g4

0x5712,	// (0x0004ebee) list_single_graphic_pane_fp_g5_ParamLimits

0x5712,	// (0x0004ebee) list_single_graphic_pane_fp_g5

0x0004,

0xfb83,	// (0x0005905f) list_single_graphic_pane_fp_g_ParamLimits

0xfb83,	// (0x0005905f) list_single_graphic_pane_fp_g

0xf1e5,	// (0x000586c1) list_single_graphic_pane_fp_t1_ParamLimits

0xf1e5,	// (0x000586c1) list_single_graphic_pane_fp_t1

0xf1d9,	// (0x000586b5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf1d9,	// (0x000586b5) list_single_graphic_heading_pane_fp_g1

0x56e6,	// (0x0004ebc2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x56e6,	// (0x0004ebc2) list_single_graphic_heading_pane_fp_g2

0x56f2,	// (0x0004ebce) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x56f2,	// (0x0004ebce) list_single_graphic_heading_pane_fp_g3

0x56fe,	// (0x0004ebda) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x56fe,	// (0x0004ebda) list_single_graphic_heading_pane_fp_g4

0x5712,	// (0x0004ebee) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5712,	// (0x0004ebee) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb83,	// (0x0005905f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0005905f) list_single_graphic_heading_pane_fp_g

0xf1fb,	// (0x000586d7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf1fb,	// (0x000586d7) list_single_graphic_heading_pane_fp_t1

0xf211,	// (0x000586ed) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf211,	// (0x000586ed) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x0005906a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x0005906a) list_single_graphic_heading_pane_fp_t

0xf223,	// (0x000586ff) list_single_cale_day_pane_fp_g1_ParamLimits

0xf223,	// (0x000586ff) list_single_cale_day_pane_fp_g1

0x571e,	// (0x0004ebfa) list_single_cale_day_pane_fp_g2_ParamLimits

0x571e,	// (0x0004ebfa) list_single_cale_day_pane_fp_g2

0x154c,	// (0x0004aa28) list_single_cale_day_pane_fp_g3_ParamLimits

0x154c,	// (0x0004aa28) list_single_cale_day_pane_fp_g3

0x1574,	// (0x0004aa50) list_single_cale_day_pane_fp_g4_ParamLimits

0x1574,	// (0x0004aa50) list_single_cale_day_pane_fp_g4

0x1598,	// (0x0004aa74) list_single_cale_day_pane_fp_g5_ParamLimits

0x1598,	// (0x0004aa74) list_single_cale_day_pane_fp_g5

0x0004,

0xfb93,	// (0x0005906f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb93,	// (0x0005906f) list_single_cale_day_pane_fp_g

0xf25b,	// (0x00058737) list_single_cale_day_pane_fp_t1_ParamLimits

0xf25b,	// (0x00058737) list_single_cale_day_pane_fp_t1

0xf281,	// (0x0005875d) list_single_cale_day_pane_fp_t2_ParamLimits

0xf281,	// (0x0005875d) list_single_cale_day_pane_fp_t2

0xf29a,	// (0x00058776) list_single_cale_day_pane_fp_t3_ParamLimits

0xf29a,	// (0x00058776) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9e,	// (0x0005907a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9e,	// (0x0005907a) list_single_cale_day_pane_fp_t

0x56e6,	// (0x0004ebc2) list_empty_pane_fp_g1_ParamLimits

0x56e6,	// (0x0004ebc2) list_empty_pane_fp_g1

0xf2b3,	// (0x0005878f) list_empty_pane_fp_t1

0xf2c1,	// (0x0005879d) list_empty_pane_fp_t2

0x0001,

0xfba5,	// (0x00059081) list_empty_pane_fp_t

0x56e6,	// (0x0004ebc2) list_single_heading_pane_fp_g1_ParamLimits

0x56e6,	// (0x0004ebc2) list_single_heading_pane_fp_g1

0x56f2,	// (0x0004ebce) list_single_heading_pane_fp_g2_ParamLimits

0x56f2,	// (0x0004ebce) list_single_heading_pane_fp_g2

0x56fe,	// (0x0004ebda) list_single_heading_pane_fp_g3_ParamLimits

0x56fe,	// (0x0004ebda) list_single_heading_pane_fp_g3

0x0002,

0xfbaa,	// (0x00059086) list_single_heading_pane_fp_g_ParamLimits

0xfbaa,	// (0x00059086) list_single_heading_pane_fp_g

0xf2cf,	// (0x000587ab) list_single_heading_pane_fp_t1_ParamLimits

0xf2cf,	// (0x000587ab) list_single_heading_pane_fp_t1

0xf2e1,	// (0x000587bd) list_single_heading_pane_fp_t2_ParamLimits

0xf2e1,	// (0x000587bd) list_single_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x0005908d) list_single_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x0005908d) list_single_heading_pane_fp_t

0xa340,	// (0x0005381c) aid_size_cell_fast

0x9b20,	// (0x00052ffc) soft_indicator_pane_cp1_t1

0xa37a,	// (0x00053856) cell_app_pane_cp2_ParamLimits

0xa37a,	// (0x00053856) cell_app_pane_cp2

0x1310,	// (0x0004a7ec) fep_hwr_candidate_drop_down_list_pane

0xd063,	// (0x0005653f) fep_hwr_candidate_pane_g3_ParamLimits

0xd063,	// (0x0005653f) fep_hwr_candidate_pane_g3

0xd070,	// (0x0005654c) fep_hwr_candidate_pane_g4_ParamLimits

0xd070,	// (0x0005654c) fep_hwr_candidate_pane_g4

0x0002,

0xfb25,	// (0x00059001) fep_hwr_candidate_pane_g_ParamLimits

0xfb25,	// (0x00059001) fep_hwr_candidate_pane_g

0x51a6,	// (0x0004e682) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x51a6,	// (0x0004e682) fep_vkb_candidate_drop_down_list_pane

0x55a9,	// (0x0004ea85) fep_vkb_candidate_pane_g3

0x55b1,	// (0x0004ea8d) fep_vkb_candidate_pane_g4

0x0002,

0xfb52,	// (0x0005902e) fep_vkb_candidate_pane_g

0x52b1,	// (0x0004e78d) cell_hwr_candidate_pane_g1_ParamLimits

0x55c8,	// (0x0004eaa4) cell_hwr_candidate_pane_g3_ParamLimits

0x55c8,	// (0x0004eaa4) cell_hwr_candidate_pane_g3

0x55e9,	// (0x0004eac5) cell_hwr_candidate_pane_g4_ParamLimits

0x55e9,	// (0x0004eac5) cell_hwr_candidate_pane_g4

0x0002,

0xfb6c,	// (0x00059048) cell_hwr_candidate_pane_g_ParamLimits

0xfb6c,	// (0x00059048) cell_hwr_candidate_pane_g

0x560a,	// (0x0004eae6) cell_vkb_candidate_pane_g3_ParamLimits

0x560a,	// (0x0004eae6) cell_vkb_candidate_pane_g3

0x5625,	// (0x0004eb01) cell_vkb_candidate_pane_g4_ParamLimits

0x5625,	// (0x0004eb01) cell_vkb_candidate_pane_g4

0xd1f9,	// (0x000566d5) cell_app_pane_cp2_g1_ParamLimits

0xd1f9,	// (0x000566d5) cell_app_pane_cp2_g1

0x5748,	// (0x0004ec24) cell_app_pane_cp2_g2_ParamLimits

0x5748,	// (0x0004ec24) cell_app_pane_cp2_g2

0x0001,

0xfbb6,	// (0x00059092) cell_app_pane_cp2_g_ParamLimits

0xfbb6,	// (0x00059092) cell_app_pane_cp2_g

0x5754,	// (0x0004ec30) cell_app_pane_cp2_t1_ParamLimits

0x5754,	// (0x0004ec30) cell_app_pane_cp2_t1

0xa166,	// (0x00053642) grid_highlight_pane_cp1_ParamLimits

0xa166,	// (0x00053642) grid_highlight_pane_cp1

0x15bc,	// (0x0004aa98) cell_hwr_candidate_pane_cp1_ParamLimits

0x15bc,	// (0x0004aa98) cell_hwr_candidate_pane_cp1

0x52b1,	// (0x0004e78d) fep_hwr_candidate_drop_down_list_pane_g1

0x5766,	// (0x0004ec42) fep_hwr_candidate_drop_down_list_pane_g2

0x5773,	// (0x0004ec4f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbb,	// (0x00059097) fep_hwr_candidate_drop_down_list_pane_g

0x15db,	// (0x0004aab7) fep_hwr_candidate_drop_down_list_scroll_pane

0x15e4,	// (0x0004aac0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x15e4,	// (0x0004aac0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x15f1,	// (0x0004aacd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x15f1,	// (0x0004aacd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x15fe,	// (0x0004aada) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x15fe,	// (0x0004aada) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x560a,	// (0x0004eae6) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x560a,	// (0x0004eae6) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5625,	// (0x0004eb01) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5625,	// (0x0004eb01) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x160b,	// (0x0004aae7) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x160b,	// (0x0004aae7) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1626,	// (0x0004ab02) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1626,	// (0x0004ab02) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1641,	// (0x0004ab1d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1641,	// (0x0004ab1d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x0005909e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x0005909e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5780,	// (0x0004ec5c) cell_vkb_candidate_pane_cp1_ParamLimits

0x5780,	// (0x0004ec5c) cell_vkb_candidate_pane_cp1

0x52b1,	// (0x0004e78d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x52b1,	// (0x0004e78d) fep_vkb_candidate_drop_down_list_pane_g1

0x5766,	// (0x0004ec42) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5766,	// (0x0004ec42) fep_vkb_candidate_drop_down_list_pane_g2

0x5773,	// (0x0004ec4f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5773,	// (0x0004ec4f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbb,	// (0x00059097) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbb,	// (0x00059097) fep_vkb_candidate_drop_down_list_pane_g

0x57a0,	// (0x0004ec7c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x57a0,	// (0x0004ec7c) fep_vkb_candidate_drop_down_list_scroll_pane

0x57ad,	// (0x0004ec89) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x57ad,	// (0x0004ec89) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x57ba,	// (0x0004ec96) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x57ba,	// (0x0004ec96) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x57c6,	// (0x0004eca2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x57c6,	// (0x0004eca2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x55c8,	// (0x0004eaa4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x55c8,	// (0x0004eaa4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x55e9,	// (0x0004eac5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x55e9,	// (0x0004eac5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x57d2,	// (0x0004ecae) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x57d2,	// (0x0004ecae) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x57f3,	// (0x0004eccf) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x57f3,	// (0x0004eccf) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5814,	// (0x0004ecf0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5814,	// (0x0004ecf0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd3,	// (0x000590af) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd3,	// (0x000590af) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x96e5,	// (0x00052bc1) title_pane_g1_ParamLimits

0x96f8,	// (0x00052bd4) title_pane_g2_ParamLimits

0xf54e,	// (0x00058a2a) title_pane_g_ParamLimits

0xa7d6,	// (0x00053cb2) aid_call2_pane

0xa7de,	// (0x00053cba) aid_call_pane

0xa7e6,	// (0x00053cc2) popup_clock_analogue_window_g1

0xa7e6,	// (0x00053cc2) popup_clock_analogue_window_g2

0x0073,	// (0x0004954f) popup_clock_analogue_window_g3

0x007c,	// (0x00049558) popup_clock_analogue_window_g4

0x94ab,	// (0x00052987) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00058bd9) popup_clock_analogue_window_g

0x0084,	// (0x00049560) popup_clock_analogue_window_t1

0x00bc,	// (0x00049598) clock_digital_number_pane_ParamLimits

0x00bc,	// (0x00049598) clock_digital_number_pane

0x00c8,	// (0x000495a4) clock_digital_number_pane_cp02_ParamLimits

0x00c8,	// (0x000495a4) clock_digital_number_pane_cp02

0x00d4,	// (0x000495b0) clock_digital_number_pane_cp03_ParamLimits

0x00d4,	// (0x000495b0) clock_digital_number_pane_cp03

0x00e0,	// (0x000495bc) clock_digital_number_pane_cp04_ParamLimits

0x00e0,	// (0x000495bc) clock_digital_number_pane_cp04

0x00ec,	// (0x000495c8) clock_digital_separator_pane_ParamLimits

0x00ec,	// (0x000495c8) clock_digital_separator_pane

0x00f8,	// (0x000495d4) popup_clock_digital_window_t1_ParamLimits

0x00f8,	// (0x000495d4) popup_clock_digital_window_t1

0x94ab,	// (0x00052987) clock_digital_number_pane_g1

0x94ab,	// (0x00052987) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00058be4) clock_digital_number_pane_g

0x94ab,	// (0x00052987) clock_digital_separator_pane_g1

0x94ab,	// (0x00052987) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00058be4) clock_digital_separator_pane_g

0xbfcb,	// (0x000554a7) aid_fill_nsta_ParamLimits

0xc101,	// (0x000555dd) indicator_nsta_pane_ParamLimits

0x285d,	// (0x0004bd39) popup_clock_analogue_window

0x285d,	// (0x0004bd39) popup_clock_digital_window

0xcdf6,	// (0x000562d2) grid_indicator_nsta_pane_ParamLimits

0x4a29,	// (0x0004df05) clock_nsta_pane_t2

0x0001,

0xfaa5,	// (0x00058f81) clock_nsta_pane_t

0xf52f,	// (0x00058a0b) aid_size_max_handle

0xa5df,	// (0x00053abb) aid_size_min_handle

0x04b6,	// (0x00049992) editor_scroll_pane

0x582f,	// (0x0004ed0b) ex_editor_pane

0xa2c8,	// (0x000537a4) scroll_pane_cp13

0xa0aa,	// (0x00053586) scroll_pane_cp14

0xa815,	// (0x00053cf1) scroll_pane_cp36

0xa83c,	// (0x00053d18) list_single_graphic_hl_pane_cp2_ParamLimits

0xa83c,	// (0x00053d18) list_single_graphic_hl_pane_cp2

0xcbf8,	// (0x000560d4) list_single_graphic_hl_pane_ParamLimits

0xcbf8,	// (0x000560d4) list_single_graphic_hl_pane

0x9323,	// (0x000527ff) aid_size_min_hl_cp1

0x5837,	// (0x0004ed13) list_highlight_pane_cp34_ParamLimits

0x5837,	// (0x0004ed13) list_highlight_pane_cp34

0x5848,	// (0x0004ed24) list_single_graphic_hl_pane_g1_ParamLimits

0x5848,	// (0x0004ed24) list_single_graphic_hl_pane_g1

0x932c,	// (0x00052808) list_single_graphic_hl_pane_g2_ParamLimits

0x932c,	// (0x00052808) list_single_graphic_hl_pane_g2

0x932c,	// (0x00052808) list_single_graphic_hl_pane_g3_ParamLimits

0x932c,	// (0x00052808) list_single_graphic_hl_pane_g3

0xe43a,	// (0x00057916) list_single_graphic_hl_pane_g4_ParamLimits

0xe43a,	// (0x00057916) list_single_graphic_hl_pane_g4

0x5885,	// (0x0004ed61) list_single_graphic_hl_pane_g5_ParamLimits

0x5885,	// (0x0004ed61) list_single_graphic_hl_pane_g5

0x0004,

0xfbe4,	// (0x000590c0) list_single_graphic_hl_pane_g_ParamLimits

0xfbe4,	// (0x000590c0) list_single_graphic_hl_pane_g

0x9338,	// (0x00052814) list_single_graphic_hl_pane_t1_ParamLimits

0x9338,	// (0x00052814) list_single_graphic_hl_pane_t1

0x5855,	// (0x0004ed31) aid_size_min_hl_cp2

0x585e,	// (0x0004ed3a) list_highlight_pane_cp34_cp2_ParamLimits

0x585e,	// (0x0004ed3a) list_highlight_pane_cp34_cp2

0x5848,	// (0x0004ed24) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5848,	// (0x0004ed24) list_single_graphic_hl_pane_g1_cp2

0x586b,	// (0x0004ed47) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x586b,	// (0x0004ed47) list_single_graphic_hl_pane_g2_cp2

0xd217,	// (0x000566f3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd217,	// (0x000566f3) list_single_graphic_hl_pane_g3_cp2

0xe43a,	// (0x00057916) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe43a,	// (0x00057916) list_single_graphic_hl_pane_g4_cp2

0x5885,	// (0x0004ed61) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5885,	// (0x0004ed61) list_single_graphic_hl_pane_g5_cp2

0xac83,	// (0x0005415f) control_pane_g4_ParamLimits

0xac83,	// (0x0005415f) control_pane_g4

0x2576,	// (0x0004ba52) bg_popup_sub_pane_cp10_ParamLimits

0x504b,	// (0x0004e527) list_choice_list_pane_ParamLimits

0x505a,	// (0x0004e536) scroll_pane_cp23

0x9ba0,	// (0x0005307c) bg_popup_preview_window_pane_cp02_ParamLimits

0x568a,	// (0x0004eb66) list_preview_fixed_pane_ParamLimits

0x56a0,	// (0x0004eb7c) list_preview_fixed_pane_cp_ParamLimits

0x56a0,	// (0x0004eb7c) list_preview_fixed_pane_cp

0x56ac,	// (0x0004eb88) popup_preview_fixed_window_g1_ParamLimits

0x56ac,	// (0x0004eb88) popup_preview_fixed_window_g1

0x56b8,	// (0x0004eb94) popup_preview_fixed_window_g2_ParamLimits

0x56b8,	// (0x0004eb94) popup_preview_fixed_window_g2

0x0002,

0xfb73,	// (0x0005904f) popup_preview_fixed_window_g_ParamLimits

0xfb73,	// (0x0005904f) popup_preview_fixed_window_g

0xf4a3,	// (0x0005897f) aid_navi_side_left_pane_ParamLimits

0xf4b8,	// (0x00058994) aid_navi_side_right_pane_ParamLimits

0xf4d0,	// (0x000589ac) navi_icon_pane_stacon_ParamLimits

0xf4e4,	// (0x000589c0) navi_navi_pane_stacon_ParamLimits

0xf4d0,	// (0x000589ac) navi_text_pane_stacon_ParamLimits

0x94a1,	// (0x0005297d) main_text_info_pane

0x58af,	// (0x0004ed8b) listscroll_text_info_pane

0x58b7,	// (0x0004ed93) list_text_info_pane_ParamLimits

0x58b7,	// (0x0004ed93) list_text_info_pane

0x58c6,	// (0x0004eda2) scroll_pane_cp24_ParamLimits

0x58c6,	// (0x0004eda2) scroll_pane_cp24

0xd225,	// (0x00056701) list_text_info_pane_t1_ParamLimits

0xd225,	// (0x00056701) list_text_info_pane_t1

0xae2d,	// (0x00054309) popup_fast_swap2_window_ParamLimits

0xae2d,	// (0x00054309) popup_fast_swap2_window

0x5918,	// (0x0004edf4) aid_size_cell_fast2

0x94a1,	// (0x0005297d) bg_popup_window_pane_cp17

0x2ee2,	// (0x0004c3be) heading_pane_cp2

0x9ded,	// (0x000532c9) listscroll_fast2_pane

0x5922,	// (0x0004edfe) grid_fast2_pane

0x592c,	// (0x0004ee08) listscroll_fast2_pane_g1

0x5934,	// (0x0004ee10) listscroll_fast2_pane_g2

0x0001,

0xfbef,	// (0x000590cb) listscroll_fast2_pane_g

0xa2c8,	// (0x000537a4) scroll_pane_cp26

0x593e,	// (0x0004ee1a) cell_fast2_pane_ParamLimits

0x593e,	// (0x0004ee1a) cell_fast2_pane

0x5953,	// (0x0004ee2f) cell_fast2_pane_g1

0x595c,	// (0x0004ee38) cell_fast2_pane_g2

0x5965,	// (0x0004ee41) cell_fast2_pane_g3

0x0002,

0xfbf4,	// (0x000590d0) cell_fast2_pane_g

0x9ed4,	// (0x000533b0) grid_highlight_pane_cp9

0x9ee9,	// (0x000533c5) main_eswt_pane_ParamLimits

0x9ee9,	// (0x000533c5) main_eswt_pane

0x58db,	// (0x0004edb7) list_single_text_info_pane

0x596d,	// (0x0004ee49) eswt_ctrl_button_pane

0x596d,	// (0x0004ee49) eswt_ctrl_canvas_pane

0xd241,	// (0x0005671d) eswt_ctrl_combo_pane

0x596d,	// (0x0004ee49) eswt_ctrl_default_pane

0x596d,	// (0x0004ee49) eswt_ctrl_label_pane

0x597d,	// (0x0004ee59) eswt_ctrl_wait_pane

0xd249,	// (0x00056725) eswt_shell_pane

0x94a1,	// (0x0005297d) listscroll_eswt_app_pane

0x59a5,	// (0x0004ee81) popup_eswt_tasktip_window_ParamLimits

0x59a5,	// (0x0004ee81) popup_eswt_tasktip_window

0x2af7,	// (0x0004bfd3) bg_popup_window_pane_cp18

0x59b6,	// (0x0004ee92) eswt_control_pane_g1_ParamLimits

0x59b6,	// (0x0004ee92) eswt_control_pane_g1

0x59c3,	// (0x0004ee9f) eswt_control_pane_g2_ParamLimits

0x59c3,	// (0x0004ee9f) eswt_control_pane_g2

0x59d0,	// (0x0004eeac) eswt_control_pane_g3_ParamLimits

0x59d0,	// (0x0004eeac) eswt_control_pane_g3

0x59dd,	// (0x0004eeb9) eswt_control_pane_g4_ParamLimits

0x59dd,	// (0x0004eeb9) eswt_control_pane_g4

0x0003,

0xfbfb,	// (0x000590d7) eswt_control_pane_g_ParamLimits

0xfbfb,	// (0x000590d7) eswt_control_pane_g

0xa166,	// (0x00053642) bg_button_pane_ParamLimits

0xa166,	// (0x00053642) bg_button_pane

0x9ee9,	// (0x000533c5) common_borders_pane_copy2_ParamLimits

0x9ee9,	// (0x000533c5) common_borders_pane_copy2

0x59ea,	// (0x0004eec6) control_button_pane_g1_ParamLimits

0x59ea,	// (0x0004eec6) control_button_pane_g1

0x59f6,	// (0x0004eed2) control_button_pane_g2_ParamLimits

0x59f6,	// (0x0004eed2) control_button_pane_g2

0x5a02,	// (0x0004eede) control_button_pane_g3_ParamLimits

0x5a02,	// (0x0004eede) control_button_pane_g3

0x0002,

0xfc04,	// (0x000590e0) control_button_pane_g_ParamLimits

0xfc04,	// (0x000590e0) control_button_pane_g

0x5a16,	// (0x0004eef2) control_button_pane_t1

0x5a24,	// (0x0004ef00) control_button_pane_t2

0x0001,

0xfc0b,	// (0x000590e7) control_button_pane_t

0x2a83,	// (0x0004bf5f) bg_button_pane_g1

0x2a8b,	// (0x0004bf67) bg_button_pane_g2

0x2a93,	// (0x0004bf6f) bg_button_pane_g3

0x2a9b,	// (0x0004bf77) bg_button_pane_g4

0x2aa3,	// (0x0004bf7f) bg_button_pane_g5

0x2aab,	// (0x0004bf87) bg_button_pane_g6

0x2ab3,	// (0x0004bf8f) bg_button_pane_g7

0x2abb,	// (0x0004bf97) bg_button_pane_g8

0x2ac3,	// (0x0004bf9f) bg_button_pane_g9

0x0008,

0xf866,	// (0x00058d42) bg_button_pane_g

0x5006,	// (0x0004e4e2) common_borders_pane_ParamLimits

0x5006,	// (0x0004e4e2) common_borders_pane

0x59b6,	// (0x0004ee92) eswt_control_pane_g1_copy1_ParamLimits

0x59b6,	// (0x0004ee92) eswt_control_pane_g1_copy1

0x59c3,	// (0x0004ee9f) eswt_control_pane_g2_copy1_ParamLimits

0x59c3,	// (0x0004ee9f) eswt_control_pane_g2_copy1

0x59d0,	// (0x0004eeac) eswt_control_pane_g3_copy1_ParamLimits

0x59d0,	// (0x0004eeac) eswt_control_pane_g3_copy1

0x59dd,	// (0x0004eeb9) eswt_control_pane_g4_copy1_ParamLimits

0x59dd,	// (0x0004eeb9) eswt_control_pane_g4_copy1

0x5041,	// (0x0004e51d) bg_eswt_ctrl_canvas_pane_g1

0x5006,	// (0x0004e4e2) common_borders_pane_cp2_ParamLimits

0x5006,	// (0x0004e4e2) common_borders_pane_cp2

0x5006,	// (0x0004e4e2) common_borders_pane_cp3_ParamLimits

0x5006,	// (0x0004e4e2) common_borders_pane_cp3

0x5a32,	// (0x0004ef0e) separator_horizontal_pane

0x5a3a,	// (0x0004ef16) separator_vertical_pane

0x59b6,	// (0x0004ee92) eswt_control_pane_g1_copy2_ParamLimits

0x59b6,	// (0x0004ee92) eswt_control_pane_g1_copy2

0x59c3,	// (0x0004ee9f) eswt_control_pane_g2_copy2_ParamLimits

0x59c3,	// (0x0004ee9f) eswt_control_pane_g2_copy2

0x59d0,	// (0x0004eeac) eswt_control_pane_g3_copy2_ParamLimits

0x59d0,	// (0x0004eeac) eswt_control_pane_g3_copy2

0x59dd,	// (0x0004eeb9) eswt_control_pane_g4_copy2_ParamLimits

0x59dd,	// (0x0004eeb9) eswt_control_pane_g4_copy2

0x94a1,	// (0x0005297d) common_borders_pane_cp4

0x5a43,	// (0x0004ef1f) separator_horizontal_pane_g1

0x5a4c,	// (0x0004ef28) separator_horizontal_pane_g2

0x5a55,	// (0x0004ef31) separator_horizontal_pane_g3

0x0002,

0xfc10,	// (0x000590ec) separator_horizontal_pane_g

0x59b6,	// (0x0004ee92) eswt_control_pane_g1_copy3_ParamLimits

0x59b6,	// (0x0004ee92) eswt_control_pane_g1_copy3

0x59c3,	// (0x0004ee9f) eswt_control_pane_g2_copy3_ParamLimits

0x59c3,	// (0x0004ee9f) eswt_control_pane_g2_copy3

0x59d0,	// (0x0004eeac) eswt_control_pane_g3_copy3_ParamLimits

0x59d0,	// (0x0004eeac) eswt_control_pane_g3_copy3

0x59dd,	// (0x0004eeb9) eswt_control_pane_g4_copy3_ParamLimits

0x59dd,	// (0x0004eeb9) eswt_control_pane_g4_copy3

0x94a1,	// (0x0005297d) common_borders_pane_cp5

0x5a5e,	// (0x0004ef3a) separator_vertical_pane_g1

0x5a67,	// (0x0004ef43) separator_vertical_pane_g2

0x5a70,	// (0x0004ef4c) separator_vertical_pane_g3

0x0002,

0xfc17,	// (0x000590f3) separator_vertical_pane_g

0x59b6,	// (0x0004ee92) eswt_control_pane_g1_copy4_ParamLimits

0x59b6,	// (0x0004ee92) eswt_control_pane_g1_copy4

0x59c3,	// (0x0004ee9f) eswt_control_pane_g2_copy4_ParamLimits

0x59c3,	// (0x0004ee9f) eswt_control_pane_g2_copy4

0x59d0,	// (0x0004eeac) eswt_control_pane_g3_copy4_ParamLimits

0x59d0,	// (0x0004eeac) eswt_control_pane_g3_copy4

0x59dd,	// (0x0004eeb9) eswt_control_pane_g4_copy4_ParamLimits

0x59dd,	// (0x0004eeb9) eswt_control_pane_g4_copy4

0xd269,	// (0x00056745) eswt_ctrl_combo_button_pane

0xd271,	// (0x0005674d) eswt_ctrl_input_pane

0xd279,	// (0x00056755) popup_choice_list_window_cp70

0xd281,	// (0x0005675d) eswt_ctrl_input_pane_t1

0x94a1,	// (0x0005297d) input_focus_pane_cp70

0x5006,	// (0x0004e4e2) bg_button_pane_cp70_ParamLimits

0x5006,	// (0x0004e4e2) bg_button_pane_cp70

0xd28f,	// (0x0005676b) eswt_ctrl_combo_button_pane_g1

0x5aa7,	// (0x0004ef83) wait_bar_pane_cp70

0x2af7,	// (0x0004bfd3) bg_popup_window_pane_cp70_ParamLimits

0x2af7,	// (0x0004bfd3) bg_popup_window_pane_cp70

0x5aaf,	// (0x0004ef8b) popup_eswt_tasktip_window_t1

0x5ac5,	// (0x0004efa1) wait_bar_pane_cp71_ParamLimits

0x5ac5,	// (0x0004efa1) wait_bar_pane_cp71

0x5ad1,	// (0x0004efad) grid_eswt_app_pane

0xa624,	// (0x00053b00) scroll_pane_cp70

0xd297,	// (0x00056773) cell_eswt_app_pane_ParamLimits

0xd297,	// (0x00056773) cell_eswt_app_pane

0xd2c1,	// (0x0005679d) cell_eswt_app_pane_g1_ParamLimits

0xd2c1,	// (0x0005679d) cell_eswt_app_pane_g1

0xd2f0,	// (0x000567cc) cell_eswt_app_pane_g2_ParamLimits

0xd2f0,	// (0x000567cc) cell_eswt_app_pane_g2

0x0001,

0xfc1e,	// (0x000590fa) cell_eswt_app_pane_g_ParamLimits

0xfc1e,	// (0x000590fa) cell_eswt_app_pane_g

0xd314,	// (0x000567f0) cell_eswt_app_pane_t1_ParamLimits

0xd314,	// (0x000567f0) cell_eswt_app_pane_t1

0x5b8f,	// (0x0004f06b) grid_highlight_pane_cp70_ParamLimits

0x5b8f,	// (0x0004f06b) grid_highlight_pane_cp70

0xe3de,	// (0x000578ba) set_content_pane_g1

0xac15,	// (0x000540f1) status_small_volume_pane

0xb7c6,	// (0x00054ca2) status_small_volume_pane_g1

0xb7ce,	// (0x00054caa) volume_small2_pane

0xb7d7,	// (0x00054cb3) volume_small2_pane_g1

0xb7e0,	// (0x00054cbc) volume_small2_pane_g2

0xb7e9,	// (0x00054cc5) volume_small2_pane_g3

0xb7f2,	// (0x00054cce) volume_small2_pane_g4

0xb7fb,	// (0x00054cd7) volume_small2_pane_g5

0xb804,	// (0x00054ce0) volume_small2_pane_g6

0xb80d,	// (0x00054ce9) volume_small2_pane_g7

0xb816,	// (0x00054cf2) volume_small2_pane_g8

0xb81f,	// (0x00054cfb) volume_small2_pane_g9

0xb828,	// (0x00054d04) volume_small2_pane_g10

0x0009,

0xfc23,	// (0x000590ff) volume_small2_pane_g

0x53f9,	// (0x0004e8d5) fep_vkb_top_text_pane_g1_ParamLimits

0xd1a1,	// (0x0005667d) fep_vkb_top_text_pane_t1_ParamLimits

0x56c4,	// (0x0004eba0) popup_preview_fixed_window_g3_ParamLimits

0x56c4,	// (0x0004eba0) popup_preview_fixed_window_g3

0xb4ca,	// (0x000549a6) popup_toolbar_trans_pane

0xca91,	// (0x00055f6d) aid_height_set_list_ParamLimits

0x3e37,	// (0x0004d313) aid_size_parent_ParamLimits

0x2576,	// (0x0004ba52) list_highlight_pane_cp2_ParamLimits

0xe3de,	// (0x000578ba) set_content_pane_g1_ParamLimits

0xcc0a,	// (0x000560e6) list_single_image_pane_ParamLimits

0xcc0a,	// (0x000560e6) list_single_image_pane

0xd346,	// (0x00056822) aid_size_cell_image_ParamLimits

0xd346,	// (0x00056822) aid_size_cell_image

0xd353,	// (0x0005682f) grid_single_image_pane_ParamLimits

0xd353,	// (0x0005682f) grid_single_image_pane

0x56f2,	// (0x0004ebce) list_single_image_pane_g1_ParamLimits

0x56f2,	// (0x0004ebce) list_single_image_pane_g1

0x56fe,	// (0x0004ebda) list_single_image_pane_g2_ParamLimits

0x56fe,	// (0x0004ebda) list_single_image_pane_g2

0x0001,

0xfc38,	// (0x00059114) list_single_image_pane_g_ParamLimits

0xfc38,	// (0x00059114) list_single_image_pane_g

0x5bb6,	// (0x0004f092) list_single_image_pane_t1_ParamLimits

0x5bb6,	// (0x0004f092) list_single_image_pane_t1

0xd35f,	// (0x0005683b) cell_image_list_pane_ParamLimits

0xd35f,	// (0x0005683b) cell_image_list_pane

0xd373,	// (0x0005684f) cell_image_list_pane_g1

0xd37c,	// (0x00056858) cell_image_list_pane_g2

0x0001,

0xfc3d,	// (0x00059119) cell_image_list_pane_g

0xd385,	// (0x00056861) aid_size_cell_tb_trans_pane

0xa166,	// (0x00053642) bg_tb_trans_pane

0xd397,	// (0x00056873) grid_tb_trans_pane

0x2a83,	// (0x0004bf5f) bg_tb_trans_pane_g1

0x2a8b,	// (0x0004bf67) bg_tb_trans_pane_g2

0x2a93,	// (0x0004bf6f) bg_tb_trans_pane_g3

0x2a9b,	// (0x0004bf77) bg_tb_trans_pane_g4

0x2aa3,	// (0x0004bf7f) bg_tb_trans_pane_g5

0x2abb,	// (0x0004bf97) bg_tb_trans_pane_g6

0x2ac3,	// (0x0004bf9f) bg_tb_trans_pane_g7

0x2aab,	// (0x0004bf87) bg_tb_trans_pane_g8

0x2ab3,	// (0x0004bf8f) bg_tb_trans_pane_g9

0x0008,

0xfc42,	// (0x0005911e) bg_tb_trans_pane_g

0xd3ab,	// (0x00056887) cell_toolbar_trans_pane_ParamLimits

0xd3ab,	// (0x00056887) cell_toolbar_trans_pane

0x5041,	// (0x0004e51d) cell_toolbar_trans_pane_g1

0xcebd,	// (0x00056399) list_form2_midp_pane_t1

0xcecb,	// (0x000563a7) list_form2_midp_pane_t2

0x0001,

0xfaeb,	// (0x00058fc7) list_form2_midp_pane_t

0x4c22,	// (0x0004e0fe) scroll_pane_cp51_ParamLimits

0x4dde,	// (0x0004e2ba) form2_midp_wait_pane_g1

0x4de7,	// (0x0004e2c3) form2_midp_wait_pane_g2

0x4df0,	// (0x0004e2cc) form2_midp_wait_pane_g3

0x0002,

0xfb00,	// (0x00058fdc) form2_midp_wait_pane_g

0x9836,	// (0x00052d12) list_highlight_pane_cp21_ParamLimits

0x4e38,	// (0x0004e314) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4e47,	// (0x0004e323) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3fef,	// (0x0004d4cb) list_single_2graphic_im_pane_ParamLimits

0x3fef,	// (0x0004d4cb) list_single_2graphic_im_pane

0xd3d1,	// (0x000568ad) list_single_2graphic_im_pane_g1_ParamLimits

0xd3d1,	// (0x000568ad) list_single_2graphic_im_pane_g1

0xd3e2,	// (0x000568be) list_single_2graphic_im_pane_g2_ParamLimits

0xd3e2,	// (0x000568be) list_single_2graphic_im_pane_g2

0xd3ee,	// (0x000568ca) list_single_2graphic_im_pane_g3_ParamLimits

0xd3ee,	// (0x000568ca) list_single_2graphic_im_pane_g3

0x0003,

0xfc55,	// (0x00059131) list_single_2graphic_im_pane_g_ParamLimits

0xfc55,	// (0x00059131) list_single_2graphic_im_pane_g

0xd402,	// (0x000568de) list_single_2graphic_im_pane_t1_ParamLimits

0xd402,	// (0x000568de) list_single_2graphic_im_pane_t1

0x56d0,	// (0x0004ebac) list_single_graphic_2heading_pane_fp_ParamLimits

0x56d0,	// (0x0004ebac) list_single_graphic_2heading_pane_fp

0xf1d9,	// (0x000586b5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf1d9,	// (0x000586b5) list_single_graphic_2heading_pane_fp_g1

0x56e6,	// (0x0004ebc2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x56e6,	// (0x0004ebc2) list_single_graphic_2heading_pane_fp_g2

0x56f2,	// (0x0004ebce) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x56f2,	// (0x0004ebce) list_single_graphic_2heading_pane_fp_g3

0x56fe,	// (0x0004ebda) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x56fe,	// (0x0004ebda) list_single_graphic_2heading_pane_fp_g4

0x5712,	// (0x0004ebee) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5712,	// (0x0004ebee) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb83,	// (0x0005905f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0005905f) list_single_graphic_2heading_pane_fp_g

0xf2f7,	// (0x000587d3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf2f7,	// (0x000587d3) list_single_graphic_2heading_pane_fp_t1

0xf211,	// (0x000586ed) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf211,	// (0x000586ed) list_single_graphic_2heading_pane_fp_t2

0xf30d,	// (0x000587e9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf30d,	// (0x000587e9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5e,	// (0x0005913a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5e,	// (0x0005913a) list_single_graphic_2heading_pane_fp_t

0x50cd,	// (0x0004e5a9) fep_hwr_write_pane_g5_ParamLimits

0x50cd,	// (0x0004e5a9) fep_hwr_write_pane_g5

0x50d9,	// (0x0004e5b5) fep_hwr_write_pane_g6_ParamLimits

0x50d9,	// (0x0004e5b5) fep_hwr_write_pane_g6

0xd249,	// (0x00056725) eswt_shell_pane_ParamLimits

0x2af7,	// (0x0004bfd3) bg_popup_window_pane_cp18_ParamLimits

0x3d7f,	// (0x0004d25b) heading_pane_cp70

0x5aaf,	// (0x0004ef8b) popup_eswt_tasktip_window_t1_ParamLimits

0xc026,	// (0x00055502) aid_touch_tab_arrow_left

0xc03c,	// (0x00055518) aid_touch_tab_arrow_right

0x9710,	// (0x00052bec) title_pane_g3_ParamLimits

0x9710,	// (0x00052bec) title_pane_g3

0xa125,	// (0x00053601) set_value_pane_g1

0xb4ca,	// (0x000549a6) popup_toolbar_trans_pane_ParamLimits

0xd385,	// (0x00056861) aid_size_cell_tb_trans_pane_ParamLimits

0xa166,	// (0x00053642) bg_tb_trans_pane_ParamLimits

0xd397,	// (0x00056873) grid_tb_trans_pane_ParamLimits

0x9ba0,	// (0x0005307c) cont_note_pane_ParamLimits

0x9ba0,	// (0x0005307c) cont_note_pane

0x9ee9,	// (0x000533c5) cont_snote2_single_text_pane_ParamLimits

0x9ee9,	// (0x000533c5) cont_snote2_single_text_pane

0x9ee9,	// (0x000533c5) cont_snote2_single_graphic_pane_ParamLimits

0x9ee9,	// (0x000533c5) cont_snote2_single_graphic_pane

0x30f5,	// (0x0004c5d1) cont_note_wait_pane_ParamLimits

0x30f5,	// (0x0004c5d1) cont_note_wait_pane

0x30f5,	// (0x0004c5d1) cont_note_image_pane_ParamLimits

0x30f5,	// (0x0004c5d1) cont_note_image_pane

0x5cac,	// (0x0004f188) popup_note2_window_g1_ParamLimits

0x5cac,	// (0x0004f188) popup_note2_window_g1

0xd440,	// (0x0005691c) popup_note2_window_t1_ParamLimits

0xd440,	// (0x0005691c) popup_note2_window_t1

0xd485,	// (0x00056961) popup_note2_window_t2_ParamLimits

0xd485,	// (0x00056961) popup_note2_window_t2

0xd4ca,	// (0x000569a6) popup_note2_window_t3_ParamLimits

0xd4ca,	// (0x000569a6) popup_note2_window_t3

0x5dac,	// (0x0004f288) popup_note2_window_t4_ParamLimits

0x5dac,	// (0x0004f288) popup_note2_window_t4

0x9c24,	// (0x00053100) popup_note2_window_t5_ParamLimits

0x9c24,	// (0x00053100) popup_note2_window_t5

0x0004,

0xfc6a,	// (0x00059146) popup_note2_window_t_ParamLimits

0xfc6a,	// (0x00059146) popup_note2_window_t

0x5ddb,	// (0x0004f2b7) popup_note2_image_window_g1_ParamLimits

0x5ddb,	// (0x0004f2b7) popup_note2_image_window_g1

0xd50f,	// (0x000569eb) popup_note2_image_window_g2_ParamLimits

0xd50f,	// (0x000569eb) popup_note2_image_window_g2

0x0001,

0xfc75,	// (0x00059151) popup_note2_image_window_g_ParamLimits

0xfc75,	// (0x00059151) popup_note2_image_window_g

0x5df9,	// (0x0004f2d5) popup_note2_image_window_t1_ParamLimits

0x5df9,	// (0x0004f2d5) popup_note2_image_window_t1

0x5e11,	// (0x0004f2ed) popup_note2_image_window_t2_ParamLimits

0x5e11,	// (0x0004f2ed) popup_note2_image_window_t2

0x5e29,	// (0x0004f305) popup_note2_image_window_t3_ParamLimits

0x5e29,	// (0x0004f305) popup_note2_image_window_t3

0x0002,

0xfc7a,	// (0x00059156) popup_note2_image_window_t_ParamLimits

0xfc7a,	// (0x00059156) popup_note2_image_window_t

0x3103,	// (0x0004c5df) popup_note2_wait_window_g1_ParamLimits

0x3103,	// (0x0004c5df) popup_note2_wait_window_g1

0x310f,	// (0x0004c5eb) popup_note2_wait_window_g2_ParamLimits

0x310f,	// (0x0004c5eb) popup_note2_wait_window_g2

0x311b,	// (0x0004c5f7) popup_note2_wait_window_g3_ParamLimits

0x311b,	// (0x0004c5f7) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x00058d24) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x00058d24) popup_note2_wait_window_g

0x5e45,	// (0x0004f321) popup_note2_wait_window_t1_ParamLimits

0x5e45,	// (0x0004f321) popup_note2_wait_window_t1

0x5e63,	// (0x0004f33f) popup_note2_wait_window_t2_ParamLimits

0x5e63,	// (0x0004f33f) popup_note2_wait_window_t2

0x5e81,	// (0x0004f35d) popup_note2_wait_window_t3_ParamLimits

0x5e81,	// (0x0004f35d) popup_note2_wait_window_t3

0x5e93,	// (0x0004f36f) popup_note2_wait_window_t4_ParamLimits

0x5e93,	// (0x0004f36f) popup_note2_wait_window_t4

0x0003,

0xfc81,	// (0x0005915d) popup_note2_wait_window_t_ParamLimits

0xfc81,	// (0x0005915d) popup_note2_wait_window_t

0x5ea5,	// (0x0004f381) wait_bar2_pane_ParamLimits

0x5ea5,	// (0x0004f381) wait_bar2_pane

0x5ebd,	// (0x0004f399) popup_snote2_single_text_window_g1_ParamLimits

0x5ebd,	// (0x0004f399) popup_snote2_single_text_window_g1

0x5ee5,	// (0x0004f3c1) popup_snote2_single_text_window_t1_ParamLimits

0x5ee5,	// (0x0004f3c1) popup_snote2_single_text_window_t1

0x5f31,	// (0x0004f40d) popup_snote2_single_text_window_t2_ParamLimits

0x5f31,	// (0x0004f40d) popup_snote2_single_text_window_t2

0x5f7d,	// (0x0004f459) popup_snote2_single_text_window_t3_ParamLimits

0x5f7d,	// (0x0004f459) popup_snote2_single_text_window_t3

0x5fbe,	// (0x0004f49a) popup_snote2_single_text_window_t4_ParamLimits

0x5fbe,	// (0x0004f49a) popup_snote2_single_text_window_t4

0x5ff4,	// (0x0004f4d0) popup_snote2_single_text_window_t5_ParamLimits

0x5ff4,	// (0x0004f4d0) popup_snote2_single_text_window_t5

0x0004,

0xfc8a,	// (0x00059166) popup_snote2_single_text_window_t_ParamLimits

0xfc8a,	// (0x00059166) popup_snote2_single_text_window_t

0xd521,	// (0x000569fd) popup_snote2_single_graphic_window_g1_ParamLimits

0xd521,	// (0x000569fd) popup_snote2_single_graphic_window_g1

0x6047,	// (0x0004f523) popup_snote2_single_graphic_window_g2_ParamLimits

0x6047,	// (0x0004f523) popup_snote2_single_graphic_window_g2

0x0001,

0xfc95,	// (0x00059171) popup_snote2_single_graphic_window_g_ParamLimits

0xfc95,	// (0x00059171) popup_snote2_single_graphic_window_g

0x606f,	// (0x0004f54b) popup_snote2_single_graphic_window_t1_ParamLimits

0x606f,	// (0x0004f54b) popup_snote2_single_graphic_window_t1

0x60bb,	// (0x0004f597) popup_snote2_single_graphic_window_t2_ParamLimits

0x60bb,	// (0x0004f597) popup_snote2_single_graphic_window_t2

0x5f7d,	// (0x0004f459) popup_snote2_single_graphic_window_t3_ParamLimits

0x5f7d,	// (0x0004f459) popup_snote2_single_graphic_window_t3

0x5fbe,	// (0x0004f49a) popup_snote2_single_graphic_window_t4_ParamLimits

0x5fbe,	// (0x0004f49a) popup_snote2_single_graphic_window_t4

0x5ff4,	// (0x0004f4d0) popup_snote2_single_graphic_window_t5_ParamLimits

0x5ff4,	// (0x0004f4d0) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9a,	// (0x00059176) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9a,	// (0x00059176) popup_snote2_single_graphic_window_t

0x4ad3,	// (0x0004dfaf) clock_nsta_pane_cp2_t1

0x4ad3,	// (0x0004dfaf) clock_nsta_pane_cp2_t2

0x0001,

0xfac1,	// (0x00058f9d) clock_nsta_pane_cp2_t

0xe1e0,	// (0x000576bc) form_field_data_wide_pane_g1_ParamLimits

0xa0dd,	// (0x000535b9) form_field_data_wide_pane_g2_ParamLimits

0xa0dd,	// (0x000535b9) form_field_data_wide_pane_g2

0xa174,	// (0x00053650) form_field_data_wide_pane_g3_ParamLimits

0xa174,	// (0x00053650) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00058b5c) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00058b5c) form_field_data_wide_pane_g

0xcde0,	// (0x000562bc) grid_touch_3_pane_ParamLimits

0xcde0,	// (0x000562bc) grid_touch_3_pane

0xd549,	// (0x00056a25) cell_touch_3_pane_ParamLimits

0xd549,	// (0x00056a25) cell_touch_3_pane

0x5041,	// (0x0004e51d) cell_touch_3_pane_g1

0x5041,	// (0x0004e51d) cell_touch_3_pane_g2

0x0001,

0xfb46,	// (0x00059022) cell_touch_3_pane_g

0x9c56,	// (0x00053132) cont_query_data_pane

0x9c5e,	// (0x0005313a) cont_query_data_pane_cp1

0x6135,	// (0x0004f611) button_value_adjust_pane_cp7

0x613d,	// (0x0004f619) query_popup_pane_cp3

0xa8e3,	// (0x00053dbf) bg_popup_sub_pane_cp22_ParamLimits

0xa8f9,	// (0x00053dd5) navi_navi_volume_pane_cp2

0xa908,	// (0x00053de4) popup_side_volume_key_window_g2

0xa917,	// (0x00053df3) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00058bf2) popup_side_volume_key_window_g

0xa926,	// (0x00053e02) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00058bf9) popup_side_volume_key_window_t

0xaa6b,	// (0x00053f47) popup_side_volume_key_window_ParamLimits

0x8db1,	// (0x0005228d) list_double_graphic_pane_g4_ParamLimits

0x8db1,	// (0x0005228d) list_double_graphic_pane_g4

0xb70a,	// (0x00054be6) list_single_2heading_msg_pane_ParamLimits

0xb70a,	// (0x00054be6) list_single_2heading_msg_pane

0xb831,	// (0x00054d0d) list_single_2heading_msg_pane_g1_ParamLimits

0xb831,	// (0x00054d0d) list_single_2heading_msg_pane_g1

0xb83d,	// (0x00054d19) list_single_2heading_msg_pane_g2_ParamLimits

0xb83d,	// (0x00054d19) list_single_2heading_msg_pane_g2

0xb850,	// (0x00054d2c) list_single_2heading_msg_pane_g3_ParamLimits

0xb850,	// (0x00054d2c) list_single_2heading_msg_pane_g3

0xb85c,	// (0x00054d38) list_single_2heading_msg_pane_g4_ParamLimits

0xb85c,	// (0x00054d38) list_single_2heading_msg_pane_g4

0x0003,

0xfca5,	// (0x00059181) list_single_2heading_msg_pane_g_ParamLimits

0xfca5,	// (0x00059181) list_single_2heading_msg_pane_g

0x934e,	// (0x0005282a) list_single_2heading_msg_pane_t1_ParamLimits

0x934e,	// (0x0005282a) list_single_2heading_msg_pane_t1

0x9376,	// (0x00052852) list_single_2heading_msg_pane_t2_ParamLimits

0x9376,	// (0x00052852) list_single_2heading_msg_pane_t2

0x93e1,	// (0x000528bd) list_single_2heading_msg_pane_t3_ParamLimits

0x93e1,	// (0x000528bd) list_single_2heading_msg_pane_t3

0xf32d,	// (0x00058809) list_single_2heading_msg_pane_t4_ParamLimits

0xf32d,	// (0x00058809) list_single_2heading_msg_pane_t4

0x0003,

0xfcae,	// (0x0005918a) list_single_2heading_msg_pane_t_ParamLimits

0xfcae,	// (0x0005918a) list_single_2heading_msg_pane_t

0x971c,	// (0x00052bf8) title_pane_g4_ParamLimits

0x971c,	// (0x00052bf8) title_pane_g4

0xf3f4,	// (0x000588d0) title_pane_stacon_g3_ParamLimits

0xf3f4,	// (0x000588d0) title_pane_stacon_g3

0x5c6f,	// (0x0004f14b) list_single_2graphic_im_pane_g4_ParamLimits

0x5c6f,	// (0x0004f14b) list_single_2graphic_im_pane_g4

0xc93c,	// (0x00055e18) popup_side_volume_key_window_cp

0x4320,	// (0x0004d7fc) main_idle_act2_pane_t1

0x0d20,	// (0x0004a1fc) toolbar_button_pane_g10

0xa074,	// (0x00053550) popup_toolbar_window_cp1

0x4ac4,	// (0x0004dfa0) clock_nsta_pane_cp_t1

0x4ac4,	// (0x0004dfa0) clock_nsta_pane_cp_t2

0x0001,

0xfabc,	// (0x00058f98) clock_nsta_pane_cp_t

0xa8f9,	// (0x00053dd5) navi_navi_volume_pane_cp2_ParamLimits

0x017e,	// (0x0004965a) popup_side_volume_key_window_g1_ParamLimits

0xa908,	// (0x00053de4) popup_side_volume_key_window_g2_ParamLimits

0xa917,	// (0x00053df3) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00058bf2) popup_side_volume_key_window_g_ParamLimits

0x12fc,	// (0x0004a7d8) fep_hwr_aid_pane

0xd055,	// (0x00056531) bg_fep_hwr_top_pane_g4_ParamLimits

0x509d,	// (0x0004e579) fep_hwr_top_pane_g1_ParamLimits

0x50af,	// (0x0004e58b) fep_hwr_top_pane_g2_ParamLimits

0x13b5,	// (0x0004a891) fep_hwr_top_pane_g3_ParamLimits

0xfb11,	// (0x00058fed) fep_hwr_top_pane_g_ParamLimits

0x13ca,	// (0x0004a8a6) fep_hwr_top_text_pane_ParamLimits

0x38ff,	// (0x0004cddb) aid_touch_tab_arrow_arrow_2

0x3908,	// (0x0004cde4) aid_touch_tab_arrow_left_2

0x1310,	// (0x0004a7ec) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1347,	// (0x0004a823) fep_hwr_prediction_pane

0x5208,	// (0x0004e6e4) fep_vkb_prediction_pane

0xd181,	// (0x0005665d) fep_vkb_side_pane_g3_ParamLimits

0xd181,	// (0x0005665d) fep_vkb_side_pane_g3

0x52b1,	// (0x0004e78d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5766,	// (0x0004ec42) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5773,	// (0x0004ec4f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbb,	// (0x00059097) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6162,	// (0x0004f63e) fep_hwr_prediction_pane_g1

0x16f7,	// (0x0004abd3) fep_hwr_prediction_pane_g2

0x16ff,	// (0x0004abdb) fep_hwr_prediction_pane_g3

0x1707,	// (0x0004abe3) fep_hwr_prediction_pane_g4

0x0003,

0xfcb7,	// (0x00059193) fep_hwr_prediction_pane_g

0x6162,	// (0x0004f63e) fep_vkb_prediction_pane_g1

0x616c,	// (0x0004f648) fep_vkb_prediction_pane_g2

0x6174,	// (0x0004f650) fep_vkb_prediction_pane_g3

0x617c,	// (0x0004f658) fep_vkb_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0005919c) fep_vkb_prediction_pane_g

0xb6a0,	// (0x00054b7c) slider_set_pane_g3

0xb6b4,	// (0x00054b90) slider_set_pane_g4

0xb6cc,	// (0x00054ba8) slider_set_pane_g5

0xb6a0,	// (0x00054b7c) slider_set_pane_g6

0xb6e2,	// (0x00054bbe) slider_set_pane_g7

0x3f9c,	// (0x0004d478) slider_form_pane_g3

0x3fa5,	// (0x0004d481) slider_form_pane_g4

0x3fad,	// (0x0004d489) slider_form_pane_g5

0x3f9c,	// (0x0004d478) slider_form_pane_g6

0xcbdc,	// (0x000560b8) slider_form_pane_g7

0x45cb,	// (0x0004daa7) slider_set_pane_vc_g3

0x45d4,	// (0x0004dab0) slider_set_pane_vc_g4

0x45dd,	// (0x0004dab9) slider_set_pane_vc_g5

0x45cb,	// (0x0004daa7) slider_set_pane_vc_g6

0x45e6,	// (0x0004dac2) slider_set_pane_vc_g7

0x4798,	// (0x0004dc74) slider_form_pane_vc_g1

0x47a1,	// (0x0004dc7d) slider_form_pane_vc_g2

0x47aa,	// (0x0004dc86) slider_form_pane_vc_g3

0x4798,	// (0x0004dc74) slider_form_pane_vc_g4

0x47b3,	// (0x0004dc8f) slider_form_pane_vc_g5

0x0004,

0xfa8e,	// (0x00058f6a) slider_form_pane_vc_g

0x94a1,	// (0x0005297d) main_idle_act3_pane

0x6184,	// (0x0004f660) ai3_links_pane

0xd592,	// (0x00056a6e) popup_ai3_data_window_ParamLimits

0xd592,	// (0x00056a6e) popup_ai3_data_window

0x94a1,	// (0x0005297d) grid_ai3_links_pane

0xd5aa,	// (0x00056a86) cell_ai3_links_pane_ParamLimits

0xd5aa,	// (0x00056a86) cell_ai3_links_pane

0x61bd,	// (0x0004f699) bg_popup_sub_pane_cp11

0x61ca,	// (0x0004f6a6) cell_ai3_links_pane_g1

0x94a1,	// (0x0005297d) bg_popup_sub_pane_cp12

0x61ef,	// (0x0004f6cb) heading_ai3_data_pane

0x61f7,	// (0x0004f6d3) list_ai3_gene_pane

0x6203,	// (0x0004f6df) popup_ai3_data_window_g1

0x620b,	// (0x0004f6e7) heading_ai3_data_pane_g1

0x6213,	// (0x0004f6ef) heading_ai3_data_pane_t1

0xd5c4,	// (0x00056aa0) list_double_ai3_gene_pane_ParamLimits

0xd5c4,	// (0x00056aa0) list_double_ai3_gene_pane

0x622e,	// (0x0004f70a) list_single_ai3_gene_pane_ParamLimits

0x622e,	// (0x0004f70a) list_single_ai3_gene_pane

0x5006,	// (0x0004e4e2) list_highlight_pane_cp7_ParamLimits

0x5006,	// (0x0004e4e2) list_highlight_pane_cp7

0x623b,	// (0x0004f717) list_single_a13_gene_pane_t1_ParamLimits

0x623b,	// (0x0004f717) list_single_a13_gene_pane_t1

0x6252,	// (0x0004f72e) list_single_ai3_gene_pane_g1

0x625b,	// (0x0004f737) list_single_ai3_gene_pane_g2

0x0001,

0xfcc9,	// (0x000591a5) list_single_ai3_gene_pane_g

0x6263,	// (0x0004f73f) list_double_ai3_gene_pane_g1_ParamLimits

0x6263,	// (0x0004f73f) list_double_ai3_gene_pane_g1

0xd5d1,	// (0x00056aad) list_double_ai3_gene_pane_t1_ParamLimits

0xd5d1,	// (0x00056aad) list_double_ai3_gene_pane_t1

0x628b,	// (0x0004f767) list_double_ai3_gene_pane_t2_ParamLimits

0x628b,	// (0x0004f767) list_double_ai3_gene_pane_t2

0x62a0,	// (0x0004f77c) list_double_ai3_gene_pane_t3_ParamLimits

0x62a0,	// (0x0004f77c) list_double_ai3_gene_pane_t3

0x0002,

0xfcce,	// (0x000591aa) list_double_ai3_gene_pane_t_ParamLimits

0xfcce,	// (0x000591aa) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf323,	// (0x000587ff) aid_size_min_col_2

0xd57c,	// (0x00056a58) aid_size_min_msg_ParamLimits

0xd57c,	// (0x00056a58) aid_size_min_msg

0xd195,	// (0x00056671) fep_vkb_top_text_pane_g2_ParamLimits

0xd195,	// (0x00056671) fep_vkb_top_text_pane_g2

0x0001,

0xfb41,	// (0x0005901d) fep_vkb_top_text_pane_g_ParamLimits

0xfb41,	// (0x0005901d) fep_vkb_top_text_pane_g

0x94a1,	// (0x0005297d) main_hc_apps_shell_pane

0x62bd,	// (0x0004f799) grid_hc_apps_pane_ParamLimits

0x62bd,	// (0x0004f799) grid_hc_apps_pane

0x62cc,	// (0x0004f7a8) list_hc_apps_pane

0x62d4,	// (0x0004f7b0) scroll_pane_cp37_ParamLimits

0x62d4,	// (0x0004f7b0) scroll_pane_cp37

0xd5ed,	// (0x00056ac9) cell_hc_apps_pane_ParamLimits

0xd5ed,	// (0x00056ac9) cell_hc_apps_pane

0xd6ab,	// (0x00056b87) cell_hc_apps_pane_g1_ParamLimits

0xd6ab,	// (0x00056b87) cell_hc_apps_pane_g1

0x63bf,	// (0x0004f89b) cell_hc_apps_pane_g2_ParamLimits

0x63bf,	// (0x0004f89b) cell_hc_apps_pane_g2

0x63db,	// (0x0004f8b7) cell_hc_apps_pane_g3_ParamLimits

0x63db,	// (0x0004f8b7) cell_hc_apps_pane_g3

0x0002,

0xfcd5,	// (0x000591b1) cell_hc_apps_pane_g_ParamLimits

0xfcd5,	// (0x000591b1) cell_hc_apps_pane_g

0xd6d8,	// (0x00056bb4) cell_hc_apps_pane_t1_ParamLimits

0xd6d8,	// (0x00056bb4) cell_hc_apps_pane_t1

0x9ba0,	// (0x0005307c) grid_highlight_pane_cp10_ParamLimits

0x9ba0,	// (0x0005307c) grid_highlight_pane_cp10

0xd716,	// (0x00056bf2) list_single_hc_apps_pane_ParamLimits

0xd716,	// (0x00056bf2) list_single_hc_apps_pane

0xd746,	// (0x00056c22) list_single_hc_apps_pane_g1

0xb874,	// (0x00054d50) list_single_hc_apps_pane_g2

0x0001,

0xfcdc,	// (0x000591b8) list_single_hc_apps_pane_g

0xb88d,	// (0x00054d69) list_single_hc_apps_pane_g2_copy1

0x944f,	// (0x0005292b) list_single_hc_apps_pane_t1

0x9836,	// (0x00052d12) bg_set_opt_pane_cp_ParamLimits

0x9844,	// (0x00052d20) setting_slider_pane_t1_ParamLimits

0x985d,	// (0x00052d39) setting_slider_pane_t2_ParamLimits

0x9877,	// (0x00052d53) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00058a3a) setting_slider_pane_t_ParamLimits

0x988f,	// (0x00052d6b) slider_set_pane_ParamLimits

0x062f,	// (0x00049b0b) control_pane_g5_ParamLimits

0x062f,	// (0x00049b0b) control_pane_g5

0xca5e,	// (0x00055f3a) slider_set_pane_g1_ParamLimits

0x1006,	// (0x0004a4e2) slider_set_pane_g2_ParamLimits

0xb6a0,	// (0x00054b7c) slider_set_pane_g3_ParamLimits

0xb6b4,	// (0x00054b90) slider_set_pane_g4_ParamLimits

0xb6cc,	// (0x00054ba8) slider_set_pane_g5_ParamLimits

0xb6a0,	// (0x00054b7c) slider_set_pane_g6_ParamLimits

0xb6e2,	// (0x00054bbe) slider_set_pane_g7_ParamLimits

0xf964,	// (0x00058e40) slider_set_pane_g_ParamLimits

0xe389,	// (0x00057865) navi_icon_text_pane_ParamLimits

0xbfef,	// (0x000554cb) aid_fill_nsta_2_ParamLimits

0xc026,	// (0x00055502) aid_touch_tab_arrow_left_ParamLimits

0xc03c,	// (0x00055518) aid_touch_tab_arrow_right_ParamLimits

0xc0d7,	// (0x000555b3) clock_nsta_pane_ParamLimits

0x38e1,	// (0x0004cdbd) navi_icon_pane_g1_ParamLimits

0x38ed,	// (0x0004cdc9) navi_text_pane_t1_ParamLimits

0x4bd4,	// (0x0004e0b0) navi_icon_text_pane_g1_ParamLimits

0x4bec,	// (0x0004e0c8) navi_icon_text_pane_t1_ParamLimits

0xd746,	// (0x00056c22) list_single_hc_apps_pane_g1_ParamLimits

0xb874,	// (0x00054d50) list_single_hc_apps_pane_g2_ParamLimits

0xfcdc,	// (0x000591b8) list_single_hc_apps_pane_g_ParamLimits

0xb88d,	// (0x00054d69) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x944f,	// (0x0005292b) list_single_hc_apps_pane_t1_ParamLimits

0x9615,	// (0x00052af1) popup_toolbar2_fixed_window_ParamLimits

0x9615,	// (0x00052af1) popup_toolbar2_fixed_window

0xb4c0,	// (0x0005499c) popup_toolbar2_float_window

0x94a1,	// (0x0005297d) bg_popup_sub_pane_cp27

0x64b9,	// (0x0004f995) grid_toolbar2_float_pane

0x94a1,	// (0x0005297d) bg_popup_sub_pane_cp26

0x64b9,	// (0x0004f995) grid_toolbar2_fixed_pane

0xd75f,	// (0x00056c3b) cell_toolbar2_fixed_pane_ParamLimits

0xd75f,	// (0x00056c3b) cell_toolbar2_fixed_pane

0xd779,	// (0x00056c55) cell_toolbar2_fixed_pane_g1

0x2a03,	// (0x0004bedf) toolbar2_fixed_button_pane

0x2a83,	// (0x0004bf5f) toolbar2_fixed_button_pane_g1

0x2a8b,	// (0x0004bf67) toolbar2_fixed_button_pane_g2

0x2a93,	// (0x0004bf6f) toolbar2_fixed_button_pane_g3

0x2a9b,	// (0x0004bf77) toolbar2_fixed_button_pane_g4

0x2aa3,	// (0x0004bf7f) toolbar2_fixed_button_pane_g5

0x2aab,	// (0x0004bf87) toolbar2_fixed_button_pane_g6

0x2ab3,	// (0x0004bf8f) toolbar2_fixed_button_pane_g7

0x2abb,	// (0x0004bf97) toolbar2_fixed_button_pane_g8

0x2ac3,	// (0x0004bf9f) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00058d42) toolbar2_fixed_button_pane_g

0x64da,	// (0x0004f9b6) cell_toolbar2_float_pane_ParamLimits

0x64da,	// (0x0004f9b6) cell_toolbar2_float_pane

0x64eb,	// (0x0004f9c7) cell_toolbar2_float_pane_g1

0x2a03,	// (0x0004bedf) toolbar2_fixed_button_pane_cp

0xd07d,	// (0x00056559) fep_vkb_accented_list_pane_ParamLimits

0xd07d,	// (0x00056559) fep_vkb_accented_list_pane

0x1518,	// (0x0004a9f4) bg_popup_fep_shadow_pane_g9

0x04b6,	// (0x00049992) bg_popup_fep_shadow_pane_cp3

0xa2af,	// (0x0005378b) list_accented_list_pane

0x64f4,	// (0x0004f9d0) list_single_accented_list_pane_ParamLimits

0x64f4,	// (0x0004f9d0) list_single_accented_list_pane

0x04b6,	// (0x00049992) list_highlight_pane_cp10

0x6505,	// (0x0004f9e1) list_single_accented_list_pane_t1

0xb3ea,	// (0x000548c6) popup_slider_window_ParamLimits

0xb3ea,	// (0x000548c6) popup_slider_window

0x6145,	// (0x0004f621) aid_indentation_list_msg

0xd86e,	// (0x00056d4a) bg_popup_window_pane_cp19

0x6625,	// (0x0004fb01) popup_slider_window_g1

0x6641,	// (0x0004fb1d) popup_slider_window_g2

0x665d,	// (0x0004fb39) popup_slider_window_g3

0x0005,

0xfce1,	// (0x000591bd) popup_slider_window_g

0x66b9,	// (0x0004fb95) popup_slider_window_t1

0x672d,	// (0x0004fc09) small_volume_slider_vertical_pane

0x5041,	// (0x0004e51d) small_volume_slider_vertical_pane_g1

0x5041,	// (0x0004e51d) small_volume_slider_vertical_pane_g2

0x6749,	// (0x0004fc25) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf3,	// (0x000591cf) small_volume_slider_vertical_pane_g

0x9559,	// (0x00052a35) area_side_right_pane_ParamLimits

0x9559,	// (0x00052a35) area_side_right_pane

0xb8a9,	// (0x00054d85) aid_size_side_button_ParamLimits

0xb8a9,	// (0x00054d85) aid_size_side_button

0xb8c2,	// (0x00054d9e) grid_sctrl_middle_pane_ParamLimits

0xb8c2,	// (0x00054d9e) grid_sctrl_middle_pane

0x1777,	// (0x0004ac53) sctrl_sk_bottom_pane

0x1788,	// (0x0004ac64) sctrl_sk_top_pane

0x179a,	// (0x0004ac76) aid_touch_sctrl_top

0x9ba0,	// (0x0005307c) bg_sctrl_sk_pane_ParamLimits

0x9ba0,	// (0x0005307c) bg_sctrl_sk_pane

0x17a7,	// (0x0004ac83) sctrl_sk_top_pane_g1

0x17b4,	// (0x0004ac90) sctrl_sk_top_pane_t1

0x179a,	// (0x0004ac76) aid_touch_sctrl_bottom

0x9ba0,	// (0x0005307c) bg_sctrl_sk_pane_cp_ParamLimits

0x9ba0,	// (0x0005307c) bg_sctrl_sk_pane_cp

0x17cf,	// (0x0004acab) sctrl_sk_bottom_pane_g1

0x17b4,	// (0x0004ac90) sctrl_sk_bottom_pane_t1

0xb8dc,	// (0x00054db8) cell_sctrl_middle_pane_ParamLimits

0xb8dc,	// (0x00054db8) cell_sctrl_middle_pane

0xb8ed,	// (0x00054dc9) aid_touch_sctrl_middle_ParamLimits

0xb8ed,	// (0x00054dc9) aid_touch_sctrl_middle

0xb8fa,	// (0x00054dd6) bg_sctrl_middle_pane_ParamLimits

0xb8fa,	// (0x00054dd6) bg_sctrl_middle_pane

0x67d1,	// (0x0004fcad) cell_sctrl_middle_pane_g1_ParamLimits

0x67d1,	// (0x0004fcad) cell_sctrl_middle_pane_g1

0xb908,	// (0x00054de4) cell_sctrl_middle_pane_g2_ParamLimits

0xb908,	// (0x00054de4) cell_sctrl_middle_pane_g2

0x0001,

0xfcff,	// (0x000591db) cell_sctrl_middle_pane_g_ParamLimits

0xfcff,	// (0x000591db) cell_sctrl_middle_pane_g

0x2a83,	// (0x0004bf5f) bg_sctrl_middle_pane_g1

0x2a8b,	// (0x0004bf67) bg_sctrl_middle_pane_g2

0x2a93,	// (0x0004bf6f) bg_sctrl_middle_pane_g3

0x2a9b,	// (0x0004bf77) bg_sctrl_middle_pane_g4

0x2aa3,	// (0x0004bf7f) bg_sctrl_middle_pane_g5

0x2aab,	// (0x0004bf87) bg_sctrl_middle_pane_g6

0x2ab3,	// (0x0004bf8f) bg_sctrl_middle_pane_g7

0x2abb,	// (0x0004bf97) bg_sctrl_middle_pane_g8

0x0007,

0xfd04,	// (0x000591e0) bg_sctrl_middle_pane_g

0x2ac3,	// (0x0004bf9f) bg_sctrl_middle_pane_g8_copy1

0x2a83,	// (0x0004bf5f) bg_sctrl_sk_pane_g1

0x2a8b,	// (0x0004bf67) bg_sctrl_sk_pane_g2

0x2a93,	// (0x0004bf6f) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00058d42) bg_sctrl_sk_pane_g

0xa03a,	// (0x00053516) aid_size_touch_scroll_bar

0x2a9b,	// (0x0004bf77) bg_sctrl_sk_pane_g4

0x2aa3,	// (0x0004bf7f) bg_sctrl_sk_pane_g5

0x2aab,	// (0x0004bf87) bg_sctrl_sk_pane_g6

0x2ab3,	// (0x0004bf8f) bg_sctrl_sk_pane_g7

0x2abb,	// (0x0004bf97) bg_sctrl_sk_pane_g8

0x2ac3,	// (0x0004bf9f) bg_sctrl_sk_pane_g9

0x07dd,	// (0x00049cb9) popup_fep_china_hwr2_fs_candidate_window

0xae8a,	// (0x00054366) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xae8a,	// (0x00054366) popup_fep_china_hwr2_fs_control_window

0x52b1,	// (0x0004e78d) sctrl_sk_top_pane_g2

0x0001,

0xfcfa,	// (0x000591d6) sctrl_sk_top_pane_g

0xd926,	// (0x00056e02) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd926,	// (0x00056e02) aid_fep_china_hwr2_fs_cell

0xd93a,	// (0x00056e16) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd93a,	// (0x00056e16) bg_popup_fep_shadow_pane_cp4

0xd951,	// (0x00056e2d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd951,	// (0x00056e2d) bg_popup_fep_shadow_pane_cp5

0xd963,	// (0x00056e3f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd963,	// (0x00056e3f) popup_fep_china_hwr2_fs_control_bar_grid

0xd977,	// (0x00056e53) popup_fep_china_hwr2_fs_control_funtion_grid

0x67a5,	// (0x0004fc81) aid_fep_china_hwr2_fs_candi_cell

0x94a1,	// (0x0005297d) bg_popup_fep_shadow_pane_cp6

0x67af,	// (0x0004fc8b) popup_fep_china_hwr2_fs_candidate_grid

0xd97f,	// (0x00056e5b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd97f,	// (0x00056e5b) cell_fep_china_hwr2_fs_funtion_grid

0x5041,	// (0x0004e51d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x67d1,	// (0x0004fcad) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x67d1,	// (0x0004fcad) cell_fep_china_hwr2_fs_funtion_grid_g1

0x67df,	// (0x0004fcbb) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x67df,	// (0x0004fcbb) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd15,	// (0x000591f1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd15,	// (0x000591f1) cell_fep_china_hwr2_fs_funtion_grid_g

0xd997,	// (0x00056e73) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd997,	// (0x00056e73) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd9ac,	// (0x00056e88) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd9ac,	// (0x00056e88) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1a,	// (0x000591f6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1a,	// (0x000591f6) cell_fep_china_hwr2_fs_funtion_grid_t

0x6826,	// (0x0004fd02) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x682e,	// (0x0004fd0a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6836,	// (0x0004fd12) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1f,	// (0x000591fb) popup_fep_china_hwr2_fs_control_bar_grid_g

0x683e,	// (0x0004fd1a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x683e,	// (0x0004fd1a) cell_fep_china_hwr2_fs_candidate_grid

0x6857,	// (0x0004fd33) popup_fep_china_hwr2_fs_candidate_grid_g20

0x685f,	// (0x0004fd3b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5041,	// (0x0004e51d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5041,	// (0x0004e51d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb46,	// (0x00059022) cell_fep_china_hwr2_fs_candidate_grid_g

0x6867,	// (0x0004fd43) cell_fep_china_hwr2_fs_candidate_grid_t1

0x267c,	// (0x0004bb58) clock_nsta_pane_cp_24_ParamLimits

0x267c,	// (0x0004bb58) clock_nsta_pane_cp_24

0x26fa,	// (0x0004bbd6) indicator_nsta_pane_cp_24_ParamLimits

0x26fa,	// (0x0004bbd6) indicator_nsta_pane_cp_24

0x375d,	// (0x0004cc39) heading_pane_g1

0x0001,

0xf8cb,	// (0x00058da7) heading_pane_g

0x4169,	// (0x0004d645) grid_sct_catagory_button_pane

0x4199,	// (0x0004d675) scroll_pane_cp5_ParamLimits

0x4c2e,	// (0x0004e10a) button_value_adjust_pane_cp5_ParamLimits

0x4c2e,	// (0x0004e10a) button_value_adjust_pane_cp5

0x4d0d,	// (0x0004e1e9) form2_midp_time_pane_ParamLimits

0x6875,	// (0x0004fd51) cell_sct_catagory_button_pane_ParamLimits

0x6875,	// (0x0004fd51) cell_sct_catagory_button_pane

0x5006,	// (0x0004e4e2) bg_button_pane_cp01_ParamLimits

0x5006,	// (0x0004e4e2) bg_button_pane_cp01

0x5041,	// (0x0004e51d) cell_sct_catagory_button_pane_g1

0xb463,	// (0x0005493f) popup_tb_extension_window

0xd9c8,	// (0x00056ea4) aid_size_cell_ext_ParamLimits

0xd9c8,	// (0x00056ea4) aid_size_cell_ext

0x9ee9,	// (0x000533c5) bg_tb_trans_pane_cp1_ParamLimits

0x9ee9,	// (0x000533c5) bg_tb_trans_pane_cp1

0xd9ee,	// (0x00056eca) grid_tb_ext_pane_ParamLimits

0xd9ee,	// (0x00056eca) grid_tb_ext_pane

0xda2d,	// (0x00056f09) cell_tb_ext_pane_ParamLimits

0xda2d,	// (0x00056f09) cell_tb_ext_pane

0xda55,	// (0x00056f31) cell_tb_ext_pane_g1_ParamLimits

0xda55,	// (0x00056f31) cell_tb_ext_pane_g1

0x690b,	// (0x0004fde7) cell_tb_ext_pane_t1

0x9ba0,	// (0x0005307c) list_highlight_pane_cp11_ParamLimits

0x9ba0,	// (0x0005307c) list_highlight_pane_cp11

0x962a,	// (0x00052b06) popup_uni_indicator_window_ParamLimits

0x962a,	// (0x00052b06) popup_uni_indicator_window

0xa166,	// (0x00053642) bg_popup_sub_pane_cp14

0xda72,	// (0x00056f4e) list_uniindi_pane

0xda7e,	// (0x00056f5a) uniindi_top_pane

0x9ba0,	// (0x0005307c) bg_uniindi_top_pane

0xda9d,	// (0x00056f79) uniindi_top_pane_g1

0xdab3,	// (0x00056f8f) uniindi_top_pane_g2

0x0003,

0xfd26,	// (0x00059202) uniindi_top_pane_g

0xdad0,	// (0x00056fac) uniindi_top_pane_t1

0x69bb,	// (0x0004fe97) list_single_uniindi_pane_ParamLimits

0x69bb,	// (0x0004fe97) list_single_uniindi_pane

0x5041,	// (0x0004e51d) bg_uniindi_top_pane_g1

0x69cd,	// (0x0004fea9) list_single_uniindi_pane_g1

0x69e0,	// (0x0004febc) list_single_uniindi_pane_t1

0x94a1,	// (0x0005297d) control_bg_pane

0x6a05,	// (0x0004fee1) bg_sctrl_sk_pane_cp1

0x6a0e,	// (0x0004feea) bg_sctrl_sk_pane_cp2

0x6a17,	// (0x0004fef3) control_bg_pane_g1

0x6a20,	// (0x0004fefc) control_bg_pane_g2

0x0001,

0xfd2f,	// (0x0005920b) control_bg_pane_g

0x4a68,	// (0x0004df44) cell_indicator_nsta_pane_g1_ParamLimits

0xce1b,	// (0x000562f7) cell_indicator_nsta_pane_g2_ParamLimits

0xfaaa,	// (0x00058f86) cell_indicator_nsta_pane_g_ParamLimits

0xf1af,	// (0x0005868b) form2_midp_time_pane_t1_ParamLimits

0x12ee,	// (0x0004a7ca) main_idle_act4_pane_ParamLimits

0x12ee,	// (0x0004a7ca) main_idle_act4_pane

0xb463,	// (0x0005493f) popup_tb_extension_window_ParamLimits

0xda13,	// (0x00056eef) tb_ext_find_pane_ParamLimits

0xda13,	// (0x00056eef) tb_ext_find_pane

0x6a29,	// (0x0004ff05) ai_gene_pane_1_cp1

0x237b,	// (0x0004b857) ai_gene_pane_2_cp1

0xdafa,	// (0x00056fd6) list_single_idle_plugin_calendar_pane

0x6a3a,	// (0x0004ff16) list_single_idle_plugin_notification_pane

0x6a43,	// (0x0004ff1f) list_single_idle_plugin_player_pane

0xdb03,	// (0x00056fdf) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb03,	// (0x00056fdf) list_single_idle_plugin_shortcut_pane

0xdb2b,	// (0x00057007) main_idle_act4_pane_t1

0xdb42,	// (0x0005701e) main_idle_act4_pane_t2

0x0001,

0xfd34,	// (0x00059210) main_idle_act4_pane_t

0xdb59,	// (0x00057035) middle_sk_idle_act4_pane_ParamLimits

0xdb59,	// (0x00057035) middle_sk_idle_act4_pane

0xdb75,	// (0x00057051) popup_clock_digital_analogue_window_cp2

0xdba1,	// (0x0005707d) shortcut_wheel_idle_act4_pane_ParamLimits

0xdba1,	// (0x0005707d) shortcut_wheel_idle_act4_pane

0x5041,	// (0x0004e51d) shortcut_wheel_idle_act4_pane_g1

0x5041,	// (0x0004e51d) shortcut_wheel_idle_act4_pane_g2

0x5041,	// (0x0004e51d) shortcut_wheel_idle_act4_pane_g3

0x5041,	// (0x0004e51d) shortcut_wheel_idle_act4_pane_g4

0x5041,	// (0x0004e51d) shortcut_wheel_idle_act4_pane_g5

0x6ad6,	// (0x0004ffb2) shortcut_wheel_idle_act4_pane_g6

0x6ade,	// (0x0004ffba) shortcut_wheel_idle_act4_pane_g7

0x6ae6,	// (0x0004ffc2) shortcut_wheel_idle_act4_pane_g8

0x6aee,	// (0x0004ffca) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd39,	// (0x00059215) shortcut_wheel_idle_act4_pane_g

0xd055,	// (0x00056531) middle_sk_idle_act4_pane_g1_ParamLimits

0xd055,	// (0x00056531) middle_sk_idle_act4_pane_g1

0xdc1e,	// (0x000570fa) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc1e,	// (0x000570fa) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5c,	// (0x00059238) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5c,	// (0x00059238) middle_sk_idle_act4_pane_g

0xdc36,	// (0x00057112) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc36,	// (0x00057112) middle_sk_idle_act4_pane_t1

0xdc65,	// (0x00057141) grid_ai_shortcut_pane_ParamLimits

0xdc65,	// (0x00057141) grid_ai_shortcut_pane

0xdc82,	// (0x0005715e) list_highlight_pane_cp16_ParamLimits

0xdc82,	// (0x0005715e) list_highlight_pane_cp16

0xdc8f,	// (0x0005716b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc8f,	// (0x0005716b) list_single_idle_plugin_shortcut_pane_g1

0xdc9b,	// (0x00057177) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc9b,	// (0x00057177) list_single_idle_plugin_shortcut_pane_g2

0xdcb7,	// (0x00057193) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcb7,	// (0x00057193) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd61,	// (0x0005923d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd61,	// (0x0005923d) list_single_idle_plugin_shortcut_pane_g

0xdccc,	// (0x000571a8) cell_ai_shortcut_pane_ParamLimits

0xdccc,	// (0x000571a8) cell_ai_shortcut_pane

0xdce2,	// (0x000571be) cell_ai_shortcut_pane_g1_ParamLimits

0xdce2,	// (0x000571be) cell_ai_shortcut_pane_g1

0x6a29,	// (0x0004ff05) ai_gene_pane_1_cp2

0x6c1e,	// (0x000500fa) ai_gene_pane_2_cp2

0x6c26,	// (0x00050102) list_highlight_pane_cp15

0xdd04,	// (0x000571e0) list_single_idle_plugin_calendar_pane_g1

0x6c26,	// (0x00050102) list_highlight_pane_cp17

0x6c37,	// (0x00050113) list_single_idle_plugin_calendar_pane_g1_copy1

0x6c3f,	// (0x0005011b) list_single_idle_plugin_player_pane_g1

0x43c2,	// (0x0004d89e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd68,	// (0x00059244) list_single_idle_plugin_player_pane_g

0x6c47,	// (0x00050123) list_single_idle_plugin_player_pane_t1

0x6c55,	// (0x00050131) list_single_idle_plugin_player_pane_t2

0x6c63,	// (0x0005013f) list_single_idle_plugin_player_pane_t3

0x6c71,	// (0x0005014d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6d,	// (0x00059249) list_single_idle_plugin_player_pane_t

0x6c7f,	// (0x0005015b) wait_bar_pane_cp15

0x6c87,	// (0x00050163) grid_ai_notification_pane

0x43c2,	// (0x0004d89e) list_single_idle_plugin_notification_pane_g1

0xdd0c,	// (0x000571e8) cell_ai_notification_pane_ParamLimits

0xdd0c,	// (0x000571e8) cell_ai_notification_pane

0x6c9d,	// (0x00050179) cell_ai_notification_pane_g1

0x6ca5,	// (0x00050181) cell_ai_notification_pane_t1

0xdd19,	// (0x000571f5) tb_ext_find_button_pane

0xdd21,	// (0x000571fd) tb_ext_find_pane_g1

0xdd29,	// (0x00057205) tb_ext_find_pane_t1

0xa7e6,	// (0x00053cc2) tb_ext_find_button_pane_g1

0xdd37,	// (0x00057213) tb_ext_find_button_pane_g2

0x0001,

0xfd76,	// (0x00059252) tb_ext_find_button_pane_g

0xdb2b,	// (0x00057007) main_idle_act4_pane_t1_ParamLimits

0xdb42,	// (0x0005701e) main_idle_act4_pane_t2_ParamLimits

0xfd34,	// (0x00059210) main_idle_act4_pane_t_ParamLimits

0xdb75,	// (0x00057051) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb8d,	// (0x00057069) sat_plugin_idle_act4_pane_ParamLimits

0xdb8d,	// (0x00057069) sat_plugin_idle_act4_pane

0xdd40,	// (0x0005721c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd40,	// (0x0005721c) sat_plugin_idle_act4_pane_t1

0xdd58,	// (0x00057234) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd58,	// (0x00057234) sat_plugin_idle_act4_pane_t2

0xdd70,	// (0x0005724c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd70,	// (0x0005724c) sat_plugin_idle_act4_pane_t3

0xdd88,	// (0x00057264) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd88,	// (0x00057264) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7b,	// (0x00059257) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7b,	// (0x00059257) sat_plugin_idle_act4_pane_t

0x95a5,	// (0x00052a81) popup_battery_window_ParamLimits

0x95a5,	// (0x00052a81) popup_battery_window

0x9ba0,	// (0x0005307c) bg_popup_sub_pane_cp25_ParamLimits

0x9ba0,	// (0x0005307c) bg_popup_sub_pane_cp25

0x6d26,	// (0x00050202) popup_battery_window_g1_ParamLimits

0x6d26,	// (0x00050202) popup_battery_window_g1

0x6d32,	// (0x0005020e) popup_battery_window_t1_ParamLimits

0x6d32,	// (0x0005020e) popup_battery_window_t1

0x6d44,	// (0x00050220) popup_battery_window_t2_ParamLimits

0x6d44,	// (0x00050220) popup_battery_window_t2

0x0001,

0xfd84,	// (0x00059260) popup_battery_window_t_ParamLimits

0xfd84,	// (0x00059260) popup_battery_window_t

0xaabe,	// (0x00053f9a) midp_canvas_pane_ParamLimits

0xab30,	// (0x0005400c) midp_keypad_pane_ParamLimits

0xab30,	// (0x0005400c) midp_keypad_pane

0x2576,	// (0x0004ba52) main_midp_pane_ParamLimits

0xce28,	// (0x00056304) signal_pane_g2_cp_ParamLimits

0xdda0,	// (0x0005727c) aid_size_cell_midp_keypad_ParamLimits

0xdda0,	// (0x0005727c) aid_size_cell_midp_keypad

0xddbe,	// (0x0005729a) midp_keyp_game_grid_pane_ParamLimits

0xddbe,	// (0x0005729a) midp_keyp_game_grid_pane

0xdde5,	// (0x000572c1) midp_keyp_rocker_pane_ParamLimits

0xdde5,	// (0x000572c1) midp_keyp_rocker_pane

0xde36,	// (0x00057312) midp_keyp_sk_left_pane_ParamLimits

0xde36,	// (0x00057312) midp_keyp_sk_left_pane

0xde8a,	// (0x00057366) midp_keyp_sk_right_pane_ParamLimits

0xde8a,	// (0x00057366) midp_keyp_sk_right_pane

0x94a1,	// (0x0005297d) bg_button_pane_cp03

0xdede,	// (0x000573ba) midp_keyp_sk_left_pane_g1

0x94a1,	// (0x0005297d) bg_button_pane_cp04

0xdede,	// (0x000573ba) midp_keyp_sk_right_pane_g1

0x5041,	// (0x0004e51d) midp_keyp_rocker_pane_g1

0xdee7,	// (0x000573c3) keyp_game_cell_pane_ParamLimits

0xdee7,	// (0x000573c3) keyp_game_cell_pane

0x94a1,	// (0x0005297d) bg_button_pane_cp02

0xdf0b,	// (0x000573e7) keyp_game_cell_pane_g1

0x95c5,	// (0x00052aa1) popup_fep_vkb2_window_ParamLimits

0x95c5,	// (0x00052aa1) popup_fep_vkb2_window

0xb914,	// (0x00054df0) aid_size_cell_vkb2_ParamLimits

0xb914,	// (0x00054df0) aid_size_cell_vkb2

0xb952,	// (0x00054e2e) popup_fep_vkb2_window_g1_ParamLimits

0xb952,	// (0x00054e2e) popup_fep_vkb2_window_g1

0xb9a2,	// (0x00054e7e) vkb2_area_bottom_pane_ParamLimits

0xb9a2,	// (0x00054e7e) vkb2_area_bottom_pane

0xb9f6,	// (0x00054ed2) vkb2_area_keypad_pane_ParamLimits

0xb9f6,	// (0x00054ed2) vkb2_area_keypad_pane

0xba3e,	// (0x00054f1a) vkb2_area_top_pane_ParamLimits

0xba3e,	// (0x00054f1a) vkb2_area_top_pane

0xbac4,	// (0x00054fa0) vkb2_top_entry_pane_ParamLimits

0xbac4,	// (0x00054fa0) vkb2_top_entry_pane

0xbaf1,	// (0x00054fcd) vkb2_top_grid_left_pane_ParamLimits

0xbaf1,	// (0x00054fcd) vkb2_top_grid_left_pane

0xbb11,	// (0x00054fed) vkb2_top_grid_right_pane_ParamLimits

0xbb11,	// (0x00054fed) vkb2_top_grid_right_pane

0x1a2d,	// (0x0004af09) vkb2_cell_keypad_pane_ParamLimits

0x1a2d,	// (0x0004af09) vkb2_cell_keypad_pane

0xbb57,	// (0x00055033) vkb2_area_bottom_grid_pane_ParamLimits

0xbb57,	// (0x00055033) vkb2_area_bottom_grid_pane

0xbb81,	// (0x0005505d) vkb2_area_bottom_pane_g1_ParamLimits

0xbb81,	// (0x0005505d) vkb2_area_bottom_pane_g1

0xbba7,	// (0x00055083) vkb2_area_bottom_pane_g2_ParamLimits

0xbba7,	// (0x00055083) vkb2_area_bottom_pane_g2

0xbbd8,	// (0x000550b4) vkb2_area_bottom_pane_g3_ParamLimits

0xbbd8,	// (0x000550b4) vkb2_area_bottom_pane_g3

0x0002,

0xfd89,	// (0x00059265) vkb2_area_bottom_pane_g_ParamLimits

0xfd89,	// (0x00059265) vkb2_area_bottom_pane_g

0x1bd7,	// (0x0004b0b3) vkb2_top_cell_left_pane_ParamLimits

0x1bd7,	// (0x0004b0b3) vkb2_top_cell_left_pane

0xdf14,	// (0x000573f0) vkb2_top_entry_pane_g1_ParamLimits

0xdf14,	// (0x000573f0) vkb2_top_entry_pane_g1

0xdf22,	// (0x000573fe) vkb2_top_entry_pane_t1_ParamLimits

0xdf22,	// (0x000573fe) vkb2_top_entry_pane_t1

0x6ef5,	// (0x000503d1) vkb2_top_entry_pane_t2_ParamLimits

0x6ef5,	// (0x000503d1) vkb2_top_entry_pane_t2

0x6f27,	// (0x00050403) vkb2_top_entry_pane_t3_ParamLimits

0x6f27,	// (0x00050403) vkb2_top_entry_pane_t3

0x0002,

0xfd90,	// (0x0005926c) vkb2_top_entry_pane_t_ParamLimits

0xfd90,	// (0x0005926c) vkb2_top_entry_pane_t

0xbc42,	// (0x0005511e) vkb2_top_grid_right_pane_g1_ParamLimits

0xbc42,	// (0x0005511e) vkb2_top_grid_right_pane_g1

0x1c3a,	// (0x0004b116) vkb2_top_grid_right_pane_g2_ParamLimits

0x1c3a,	// (0x0004b116) vkb2_top_grid_right_pane_g2

0x1c52,	// (0x0004b12e) vkb2_top_grid_right_pane_g3_ParamLimits

0x1c52,	// (0x0004b12e) vkb2_top_grid_right_pane_g3

0xbc58,	// (0x00055134) vkb2_top_grid_right_pane_g4_ParamLimits

0xbc58,	// (0x00055134) vkb2_top_grid_right_pane_g4

0x0003,

0xfd97,	// (0x00059273) vkb2_top_grid_right_pane_g_ParamLimits

0xfd97,	// (0x00059273) vkb2_top_grid_right_pane_g

0x1c80,	// (0x0004b15c) vkb2_top_cell_left_pane_g1

0x1c97,	// (0x0004b173) vkb2_cell_keypad_pane_g1_ParamLimits

0x1c97,	// (0x0004b173) vkb2_cell_keypad_pane_g1

0x6f4b,	// (0x00050427) vkb2_cell_keypad_pane_t1_ParamLimits

0x6f4b,	// (0x00050427) vkb2_cell_keypad_pane_t1

0x1ca5,	// (0x0004b181) vkb2_cell_bottom_grid_pane_ParamLimits

0x1ca5,	// (0x0004b181) vkb2_cell_bottom_grid_pane

0x1cde,	// (0x0004b1ba) vkb2_cell_bottom_grid_pane_g1

0xdbc2,	// (0x0005709e) aid_call2_pane_cp02

0xdbca,	// (0x000570a6) aid_call_pane_cp02

0xdbd2,	// (0x000570ae) clock_digital_number_pane_cp10

0xdbda,	// (0x000570b6) clock_digital_number_pane_cp11

0xdbe2,	// (0x000570be) clock_digital_number_pane_cp12

0xdbea,	// (0x000570c6) clock_digital_number_pane_cp13

0xdbf2,	// (0x000570ce) clock_digital_separator_pane_cp10

0xa7e6,	// (0x00053cc2) popup_clock_digital_analogue_window_cp2_g1

0xa7e6,	// (0x00053cc2) popup_clock_digital_analogue_window_cp2_g2

0xdbfa,	// (0x000570d6) popup_clock_digital_analogue_window_cp2_g3

0xa7e6,	// (0x00053cc2) popup_clock_digital_analogue_window_cp2_g4

0xdbfa,	// (0x000570d6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4c,	// (0x00059228) popup_clock_digital_analogue_window_cp2_g

0xdc02,	// (0x000570de) popup_clock_digital_analogue_window_cp2_t1

0xdc10,	// (0x000570ec) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd57,	// (0x00059233) popup_clock_digital_analogue_window_cp2_t

0x5041,	// (0x0004e51d) clock_digital_number_pane_cp10_g1

0x5041,	// (0x0004e51d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb46,	// (0x00059022) clock_digital_number_pane_cp10_g

0x5041,	// (0x0004e51d) clock_digital_separator_pane_cp10_g1

0x5041,	// (0x0004e51d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb46,	// (0x00059022) clock_digital_separator_pane_cp10_g

0xdabf,	// (0x00056f9b) uniindi_top_pane_g3

0x6984,	// (0x0004fe60) uniindi_top_pane_g4

0x1ab8,	// (0x0004af94) vkb2_row_keypad_pane_ParamLimits

0x1ab8,	// (0x0004af94) vkb2_row_keypad_pane

0x1cfa,	// (0x0004b1d6) vkb2_cell_t_keypad_pane_ParamLimits

0x1cfa,	// (0x0004b1d6) vkb2_cell_t_keypad_pane

0x1d0a,	// (0x0004b1e6) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1d0a,	// (0x0004b1e6) vkb2_cell_t_keypad_pane_cp08

0x1d1d,	// (0x0004b1f9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1d1d,	// (0x0004b1f9) vkb2_cell_t_keypad_pane_cp09

0x1d31,	// (0x0004b20d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1d31,	// (0x0004b20d) vkb2_cell_t_keypad_pane_cp01

0x1d42,	// (0x0004b21e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1d42,	// (0x0004b21e) vkb2_cell_t_keypad_pane_cp02

0x1d53,	// (0x0004b22f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1d53,	// (0x0004b22f) vkb2_cell_t_keypad_pane_cp03

0x1d64,	// (0x0004b240) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1d64,	// (0x0004b240) vkb2_cell_t_keypad_pane_cp04

0x1d75,	// (0x0004b251) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1d75,	// (0x0004b251) vkb2_cell_t_keypad_pane_cp05

0x1d86,	// (0x0004b262) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1d86,	// (0x0004b262) vkb2_cell_t_keypad_pane_cp06

0x1d97,	// (0x0004b273) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1d97,	// (0x0004b273) vkb2_cell_t_keypad_pane_cp07

0x1da8,	// (0x0004b284) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1da8,	// (0x0004b284) vkb2_cell_t_keypad_pane_cp10

0x52b1,	// (0x0004e78d) vkb2_cell_t_keypad_pane_g1

0x6f62,	// (0x0005043e) vkb2_cell_t_keypad_pane_t1

0x94a1,	// (0x0005297d) popup_grid_graphic2_window

0xdf5b,	// (0x00057437) aid_size_cell_graphic2_ParamLimits

0xdf5b,	// (0x00057437) aid_size_cell_graphic2

0xdf99,	// (0x00057475) bg_popup_window_pane_cp21_ParamLimits

0xdf99,	// (0x00057475) bg_popup_window_pane_cp21

0xdfa7,	// (0x00057483) graphic2_pages_pane_ParamLimits

0xdfa7,	// (0x00057483) graphic2_pages_pane

0xdffd,	// (0x000574d9) grid_graphic2_control_pane_ParamLimits

0xdffd,	// (0x000574d9) grid_graphic2_control_pane

0xe045,	// (0x00057521) grid_graphic2_pane_ParamLimits

0xe045,	// (0x00057521) grid_graphic2_pane

0xe0cc,	// (0x000575a8) cell_graphic2_pane

0x94a1,	// (0x0005297d) main_comp_mode_pane

0x61f7,	// (0x0004f6d3) list_ai3_gene_pane_ParamLimits

0xd86e,	// (0x00056d4a) bg_popup_window_pane_cp19_ParamLimits

0x65c7,	// (0x0004faa3) bg_touch_area_indi_pane_ParamLimits

0x65c7,	// (0x0004faa3) bg_touch_area_indi_pane

0x65dd,	// (0x0004fab9) bg_touch_area_indi_pane_cp01_ParamLimits

0x65dd,	// (0x0004fab9) bg_touch_area_indi_pane_cp01

0x65f3,	// (0x0004facf) bg_touch_area_indi_pane_cp02_ParamLimits

0x65f3,	// (0x0004facf) bg_touch_area_indi_pane_cp02

0x660b,	// (0x0004fae7) bg_touch_area_indi_pane_cp03_ParamLimits

0x660b,	// (0x0004fae7) bg_touch_area_indi_pane_cp03

0x6625,	// (0x0004fb01) popup_slider_window_g1_ParamLimits

0x6641,	// (0x0004fb1d) popup_slider_window_g2_ParamLimits

0x665d,	// (0x0004fb39) popup_slider_window_g3_ParamLimits

0xfce1,	// (0x000591bd) popup_slider_window_g_ParamLimits

0x66b9,	// (0x0004fb95) popup_slider_window_t1_ParamLimits

0x672d,	// (0x0004fc09) small_volume_slider_vertical_pane_ParamLimits

0xe0cc,	// (0x000575a8) cell_graphic2_pane_ParamLimits

0xe129,	// (0x00057605) bg_button_pane_cp10_ParamLimits

0xe129,	// (0x00057605) bg_button_pane_cp10

0xe13c,	// (0x00057618) bg_button_pane_cp11_ParamLimits

0xe13c,	// (0x00057618) bg_button_pane_cp11

0xe5af,	// (0x00057a8b) graphic2_pages_pane_g1_ParamLimits

0xe5af,	// (0x00057a8b) graphic2_pages_pane_g1

0xe5ca,	// (0x00057aa6) graphic2_pages_pane_g2_ParamLimits

0xe5ca,	// (0x00057aa6) graphic2_pages_pane_g2

0x0001,

0xfda5,	// (0x00059281) graphic2_pages_pane_g_ParamLimits

0xfda5,	// (0x00059281) graphic2_pages_pane_g

0xe5e2,	// (0x00057abe) graphic2_pages_pane_t1_ParamLimits

0xe5e2,	// (0x00057abe) graphic2_pages_pane_t1

0xe5fa,	// (0x00057ad6) cell_graphic2_control_pane_ParamLimits

0xe5fa,	// (0x00057ad6) cell_graphic2_control_pane

0xe62c,	// (0x00057b08) cell_graphic2_pane_g1_ParamLimits

0xe62c,	// (0x00057b08) cell_graphic2_pane_g1

0xd063,	// (0x0005653f) cell_graphic2_pane_g2_ParamLimits

0xd063,	// (0x0005653f) cell_graphic2_pane_g2

0xe14f,	// (0x0005762b) cell_graphic2_pane_g3_ParamLimits

0xe14f,	// (0x0005762b) cell_graphic2_pane_g3

0xd070,	// (0x0005654c) cell_graphic2_pane_g4_ParamLimits

0xd070,	// (0x0005654c) cell_graphic2_pane_g4

0xe639,	// (0x00057b15) cell_graphic2_pane_g5_ParamLimits

0xe639,	// (0x00057b15) cell_graphic2_pane_g5

0x0004,

0xfdaa,	// (0x00059286) cell_graphic2_pane_g_ParamLimits

0xfdaa,	// (0x00059286) cell_graphic2_pane_g

0xe659,	// (0x00057b35) cell_graphic2_pane_t1_ParamLimits

0xe659,	// (0x00057b35) cell_graphic2_pane_t1

0x3751,	// (0x0004cc2d) grid_highlight_pane_cp11_ParamLimits

0x3751,	// (0x0004cc2d) grid_highlight_pane_cp11

0x9ba0,	// (0x0005307c) bg_button_pane_cp05

0xe690,	// (0x00057b6c) cell_graphic2_control_pane_g1

0x5041,	// (0x0004e51d) bg_touch_area_indi_pane_g1

0x7232,	// (0x0005070e) aid_cmod_rocker_key_size

0x723c,	// (0x00050718) aid_cmode_itu_key_size

0x7246,	// (0x00050722) main_cmode_video_pane

0x7250,	// (0x0005072c) main_comp_mode_itu_pane

0x725c,	// (0x00050738) main_comp_mode_rocker_pane

0x7268,	// (0x00050744) cell_cmode_rocker_pane_ParamLimits

0x7268,	// (0x00050744) cell_cmode_rocker_pane

0x727a,	// (0x00050756) cell_cmode_itu_pane_ParamLimits

0x727a,	// (0x00050756) cell_cmode_itu_pane

0xa166,	// (0x00053642) bg_button_pane_cp06_ParamLimits

0xa166,	// (0x00053642) bg_button_pane_cp06

0x52b1,	// (0x0004e78d) cell_cmode_rocker_pane_g1_ParamLimits

0x52b1,	// (0x0004e78d) cell_cmode_rocker_pane_g1

0x67d1,	// (0x0004fcad) cell_cmode_rocker_pane_g2_ParamLimits

0x67d1,	// (0x0004fcad) cell_cmode_rocker_pane_g2

0x0001,

0xfdba,	// (0x00059296) cell_cmode_rocker_pane_g_ParamLimits

0xfdba,	// (0x00059296) cell_cmode_rocker_pane_g

0x94a1,	// (0x0005297d) bg_button_pane_cp07

0x728f,	// (0x0005076b) cell_cmode_itu_pane_g1

0x7298,	// (0x00050774) cell_cmode_itu_pane_t1

0x72a6,	// (0x00050782) cell_cmode_itu_pane_t2

0x0001,

0xfdbf,	// (0x0005929b) cell_cmode_itu_pane_t

0x69f5,	// (0x0004fed1) aid_touch_ctrl_left

0x69fd,	// (0x0004fed9) aid_touch_ctrl_right

0x94a1,	// (0x0005297d) compa_mode_pane

0xe6b8,	// (0x00057b94) aid_cmod_rocker_key_size_cp

0xe6c2,	// (0x00057b9e) aid_cmode_itu_key_size_cp

0x72c8,	// (0x000507a4) compa_mode_pane_g1

0x72d0,	// (0x000507ac) compa_mode_pane_g2

0x72d8,	// (0x000507b4) compa_mode_pane_g3

0x0002,

0xfdc4,	// (0x000592a0) compa_mode_pane_g

0xe6cc,	// (0x00057ba8) main_comp_mode_itu_pane_cp

0xe6d4,	// (0x00057bb0) main_comp_mode_rocker_pane_cp

0xe6dc,	// (0x00057bb8) cell_cmode_itu_pane_cp_ParamLimits

0xe6dc,	// (0x00057bb8) cell_cmode_itu_pane_cp

0xe6f1,	// (0x00057bcd) cell_cmode_rocker_pane_cp_ParamLimits

0xe6f1,	// (0x00057bcd) cell_cmode_rocker_pane_cp

0xa166,	// (0x00053642) bg_button_pane_cp06_cp_ParamLimits

0xa166,	// (0x00053642) bg_button_pane_cp06_cp

0x52b1,	// (0x0004e78d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x52b1,	// (0x0004e78d) cell_cmode_rocker_pane_g1_cp

0x5041,	// (0x0004e51d) cell_cmode_rocker_pane_g2_cp

0x94a1,	// (0x0005297d) bg_button_pane_cp07_cp

0xe703,	// (0x00057bdf) cell_cmode_itu_pane_g1_cp

0xe70c,	// (0x00057be8) cell_cmode_itu_pane_t1_cp

0xe70c,	// (0x00057be8) cell_cmode_itu_pane_t2_cp

0xcbd2,	// (0x000560ae) settings_code_pane_cp2

0x9836,	// (0x00052d12) bg_popup_window_pane_cp3_ParamLimits

0x9d7a,	// (0x00053256) heading_pane_cp3_ParamLimits

0x9d86,	// (0x00053262) listscroll_popup_graphic_pane_ParamLimits

0x12fc,	// (0x0004a7d8) fep_hwr_aid_pane_ParamLimits

0x179a,	// (0x0004ac76) aid_touch_sctrl_top_ParamLimits

0x17a7,	// (0x0004ac83) sctrl_sk_top_pane_g1_ParamLimits

0x52b1,	// (0x0004e78d) sctrl_sk_top_pane_g2_ParamLimits

0xfcfa,	// (0x000591d6) sctrl_sk_top_pane_g_ParamLimits

0x17b4,	// (0x0004ac90) sctrl_sk_top_pane_t1_ParamLimits

0x179a,	// (0x0004ac76) aid_touch_sctrl_bottom_ParamLimits

0x17b4,	// (0x0004ac90) sctrl_sk_bottom_pane_t1_ParamLimits

0xda8b,	// (0x00056f67) aid_area_touch_clock

0xba86,	// (0x00054f62) aid_vkb2_area_top_pane_cell_ParamLimits

0xba86,	// (0x00054f62) aid_vkb2_area_top_pane_cell

0xbb31,	// (0x0005500d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbb31,	// (0x0005500d) aid_vkb2_area_bottom_pane_cell

0x6ead,	// (0x00050389) popup_char_count_window

0x732e,	// (0x0005080a) popup_char_count_window_g1

0x7337,	// (0x00050813) popup_char_count_window_g2

0x7340,	// (0x0005081c) popup_char_count_window_g3

0x0002,

0xfdcb,	// (0x000592a7) popup_char_count_window_g

0x7349,	// (0x00050825) popup_char_count_window_t1

0x1855,	// (0x0004ad31) popup_fep_char_preview_window_ParamLimits

0x1855,	// (0x0004ad31) popup_fep_char_preview_window

0xbaa6,	// (0x00054f82) vkb2_top_candi_pane_ParamLimits

0xbaa6,	// (0x00054f82) vkb2_top_candi_pane

0xe71a,	// (0x00057bf6) cell_vkb2_top_candi_pane_ParamLimits

0xe71a,	// (0x00057bf6) cell_vkb2_top_candi_pane

0x30f5,	// (0x0004c5d1) bg_popup_fep_char_preview_window_ParamLimits

0x30f5,	// (0x0004c5d1) bg_popup_fep_char_preview_window

0x1dbd,	// (0x0004b299) popup_fep_char_preview_window_t1_ParamLimits

0x1dbd,	// (0x0004b299) popup_fep_char_preview_window_t1

0x73a4,	// (0x00050880) bg_popup_fep_char_preview_window_g1

0x73ac,	// (0x00050888) bg_popup_fep_char_preview_window_g2

0x73b4,	// (0x00050890) bg_popup_fep_char_preview_window_g3

0x73bc,	// (0x00050898) bg_popup_fep_char_preview_window_g4

0x73c4,	// (0x000508a0) bg_popup_fep_char_preview_window_g5

0x1df7,	// (0x0004b2d3) bg_popup_fep_char_preview_window_g6

0x73cc,	// (0x000508a8) bg_popup_fep_char_preview_window_g7

0x73d4,	// (0x000508b0) bg_popup_fep_char_preview_window_g8

0x73dc,	// (0x000508b8) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd2,	// (0x000592ae) bg_popup_fep_char_preview_window_g

0x52b1,	// (0x0004e78d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x52b1,	// (0x0004e78d) cell_vkb2_top_candi_pane_g1

0x55c8,	// (0x0004eaa4) cell_vkb2_top_candi_pane_g2_ParamLimits

0x55c8,	// (0x0004eaa4) cell_vkb2_top_candi_pane_g2

0x55e9,	// (0x0004eac5) cell_vkb2_top_candi_pane_g3_ParamLimits

0x55e9,	// (0x0004eac5) cell_vkb2_top_candi_pane_g3

0x1dff,	// (0x0004b2db) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1dff,	// (0x0004b2db) cell_vkb2_top_candi_pane_g4

0x73e4,	// (0x000508c0) cell_vkb2_top_candi_pane_g5_ParamLimits

0x73e4,	// (0x000508c0) cell_vkb2_top_candi_pane_g5

0x67d1,	// (0x0004fcad) cell_vkb2_top_candi_pane_g6_ParamLimits

0x67d1,	// (0x0004fcad) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde5,	// (0x000592c1) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde5,	// (0x000592c1) cell_vkb2_top_candi_pane_g

0x1e20,	// (0x0004b2fc) cell_vkb2_top_candi_pane_t1

0xb68c,	// (0x00054b68) aid_size_touch_slider_mark_ParamLimits

0xb68c,	// (0x00054b68) aid_size_touch_slider_mark

0xdfe3,	// (0x000574bf) grid_graphic2_catg_pane_ParamLimits

0xdfe3,	// (0x000574bf) grid_graphic2_catg_pane

0xe09f,	// (0x0005757b) popup_grid_graphic2_window_t1_ParamLimits

0xe09f,	// (0x0005757b) popup_grid_graphic2_window_t1

0xe0b5,	// (0x00057591) popup_grid_graphic2_window_t2_ParamLimits

0xe0b5,	// (0x00057591) popup_grid_graphic2_window_t2

0x0001,

0xfda0,	// (0x0005927c) popup_grid_graphic2_window_t_ParamLimits

0xfda0,	// (0x0005927c) popup_grid_graphic2_window_t

0x9ba0,	// (0x0005307c) bg_button_pane_cp05_ParamLimits

0xe690,	// (0x00057b6c) cell_graphic2_control_pane_g1_ParamLimits

0xe780,	// (0x00057c5c) cell_graphic2_catg_pane_ParamLimits

0xe780,	// (0x00057c5c) cell_graphic2_catg_pane

0x94a1,	// (0x0005297d) bg_button_pane_cp12

0xe792,	// (0x00057c6e) cell_graphic2_catg_pane_g1

0x690b,	// (0x0004fde7) cell_tb_ext_pane_t1_ParamLimits

0x1bf7,	// (0x0004b0d3) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1bf7,	// (0x0004b0d3) vkb2_top_cell_right_narrow_pane

0x1c0f,	// (0x0004b0eb) vkb2_top_cell_right_wide_pane_ParamLimits

0x1c0f,	// (0x0004b0eb) vkb2_top_cell_right_wide_pane

0x12ee,	// (0x0004a7ca) bg_vkb2_func_pane_ParamLimits

0x12ee,	// (0x0004a7ca) bg_vkb2_func_pane

0x1c80,	// (0x0004b15c) vkb2_top_cell_left_pane_g1_ParamLimits

0x12ee,	// (0x0004a7ca) bg_vkb2_fuc_pane_cp03_ParamLimits

0x12ee,	// (0x0004a7ca) bg_vkb2_fuc_pane_cp03

0x1cde,	// (0x0004b1ba) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2a8b,	// (0x0004bf67) bg_vkb2_func_pane_g1

0x2a93,	// (0x0004bf6f) bg_vkb2_func_pane_g2

0x2aa3,	// (0x0004bf7f) bg_vkb2_func_pane_g3

0x2a9b,	// (0x0004bf77) bg_vkb2_func_pane_g4

0x2aab,	// (0x0004bf87) bg_vkb2_func_pane_g5

0x2ab3,	// (0x0004bf8f) bg_vkb2_func_pane_g6

0x2abb,	// (0x0004bf97) bg_vkb2_func_pane_g7

0x2ac3,	// (0x0004bf9f) bg_vkb2_func_pane_g8

0x2a83,	// (0x0004bf5f) bg_vkb2_func_pane_g9

0x0008,

0xfdf2,	// (0x000592ce) bg_vkb2_func_pane_g

0x12ee,	// (0x0004a7ca) bg_vkb2_fuc_pane_cp01_ParamLimits

0x12ee,	// (0x0004a7ca) bg_vkb2_fuc_pane_cp01

0x1c80,	// (0x0004b15c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1c80,	// (0x0004b15c) vkb2_top_cell_right_wide_pane_g1

0x12ee,	// (0x0004a7ca) bg_vkb2_fuc_pane_cp02_ParamLimits

0x12ee,	// (0x0004a7ca) bg_vkb2_fuc_pane_cp02

0x1cde,	// (0x0004b1ba) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1cde,	// (0x0004b1ba) vkb2_top_cell_right_narrow_pane_g1

0xd7ac,	// (0x00056c88) aid_touch_area_decrease_ParamLimits

0xd7ac,	// (0x00056c88) aid_touch_area_decrease

0xd7e2,	// (0x00056cbe) aid_touch_area_increase_ParamLimits

0xd7e2,	// (0x00056cbe) aid_touch_area_increase

0xd80a,	// (0x00056ce6) aid_touch_area_mute_ParamLimits

0xd80a,	// (0x00056ce6) aid_touch_area_mute

0xd83a,	// (0x00056d16) aid_touch_area_slider_ParamLimits

0xd83a,	// (0x00056d16) aid_touch_area_slider

0xd87a,	// (0x00056d56) popup_slider_window_g4_ParamLimits

0xd87a,	// (0x00056d56) popup_slider_window_g4

0xd8a2,	// (0x00056d7e) popup_slider_window_g5_ParamLimits

0xd8a2,	// (0x00056d7e) popup_slider_window_g5

0xd8d6,	// (0x00056db2) popup_slider_window_g6_ParamLimits

0xd8d6,	// (0x00056db2) popup_slider_window_g6

0x66e7,	// (0x0004fbc3) popup_slider_window_t2_ParamLimits

0x66e7,	// (0x0004fbc3) popup_slider_window_t2

0x0001,

0xfcee,	// (0x000591ca) popup_slider_window_t_ParamLimits

0xfcee,	// (0x000591ca) popup_slider_window_t

0xd8f2,	// (0x00056dce) slider_pane_ParamLimits

0xd8f2,	// (0x00056dce) slider_pane

0x7420,	// (0x000508fc) slider_pane_g1_ParamLimits

0x7420,	// (0x000508fc) slider_pane_g1

0x7434,	// (0x00050910) slider_pane_g2_ParamLimits

0x7434,	// (0x00050910) slider_pane_g2

0x744a,	// (0x00050926) slider_pane_g3_ParamLimits

0x744a,	// (0x00050926) slider_pane_g3

0x0003,

0xfe05,	// (0x000592e1) slider_pane_g_ParamLimits

0xfe05,	// (0x000592e1) slider_pane_g

0xb4ab,	// (0x00054987) popup_tb_float_extension_window_ParamLimits

0xb4ab,	// (0x00054987) popup_tb_float_extension_window

0x7476,	// (0x00050952) aid_size_cell_tb_float_ext

0x94a1,	// (0x0005297d) bg_popup_sub_window_cp28

0xe79b,	// (0x00057c77) grid_tb_float_ext_pane

0xe7a5,	// (0x00057c81) cell_tb_float_ext_pane_ParamLimits

0xe7a5,	// (0x00057c81) cell_tb_float_ext_pane

0xe7bf,	// (0x00057c9b) cell_tb_float_ext_pane_g1

0xe7c8,	// (0x00057ca4) grid_highlight_pane_cp12

0xb7a4,	// (0x00054c80) cell_last_hwr_side_pane_ParamLimits

0xb7a4,	// (0x00054c80) cell_last_hwr_side_pane

0x5041,	// (0x0004e51d) cell_last_hwr_side_pane_g1

0x74b8,	// (0x00050994) cell_last_hwr_side_pane_g2

0x0001,

0xfe0e,	// (0x000592ea) cell_last_hwr_side_pane_g

0xbc0d,	// (0x000550e9) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbc0d,	// (0x000550e9) vkb2_area_bottom_space_btn_pane

0x52b1,	// (0x0004e78d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6f62,	// (0x0005043e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1e20,	// (0x0004b2fc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1e3f,	// (0x0004b31b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1e3f,	// (0x0004b31b) vkb2_area_bottom_space_btn_pane_g1

0x1e79,	// (0x0004b355) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1e79,	// (0x0004b355) vkb2_area_bottom_space_btn_pane_g2

0x1eaf,	// (0x0004b38b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1eaf,	// (0x0004b38b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe13,	// (0x000592ef) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe13,	// (0x000592ef) vkb2_area_bottom_space_btn_pane_g

0x13a3,	// (0x0004a87f) cel_fep_hwr_func_pane_ParamLimits

0x13a3,	// (0x0004a87f) cel_fep_hwr_func_pane

0xb779,	// (0x00054c55) cell_hwr_side_button_pane_ParamLimits

0xb779,	// (0x00054c55) cell_hwr_side_button_pane

0xda8b,	// (0x00056f67) aid_area_touch_clock_ParamLimits

0x9ba0,	// (0x0005307c) bg_uniindi_top_pane_ParamLimits

0xda9d,	// (0x00056f79) uniindi_top_pane_g1_ParamLimits

0xdab3,	// (0x00056f8f) uniindi_top_pane_g2_ParamLimits

0xdabf,	// (0x00056f9b) uniindi_top_pane_g3_ParamLimits

0x6984,	// (0x0004fe60) uniindi_top_pane_g4_ParamLimits

0xfd26,	// (0x00059202) uniindi_top_pane_g_ParamLimits

0xdad0,	// (0x00056fac) uniindi_top_pane_t1_ParamLimits

0x9ba0,	// (0x0005307c) bg_vkb2_func_pane_cp01_ParamLimits

0x9ba0,	// (0x0005307c) bg_vkb2_func_pane_cp01

0x74c1,	// (0x0005099d) cel_fep_hwr_func_pane_g1_ParamLimits

0x74c1,	// (0x0005099d) cel_fep_hwr_func_pane_g1

0x9ba0,	// (0x0005307c) bg_vkb2_func_pane_cp02_ParamLimits

0x9ba0,	// (0x0005307c) bg_vkb2_func_pane_cp02

0x74c1,	// (0x0005099d) cell_hwr_side_button_pane_g1_ParamLimits

0x74c1,	// (0x0005099d) cell_hwr_side_button_pane_g1

0x2907,	// (0x0004bde3) status_pane_g4_ParamLimits

0x2907,	// (0x0004bde3) status_pane_g4

0x2921,	// (0x0004bdfd) status_pane_t1

0x4d76,	// (0x0004e252) form2_midp_gauge_slider_cont_pane

0x4d7e,	// (0x0004e25a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcf51,	// (0x0005642d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcf63,	// (0x0005643f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf9,	// (0x00058fd5) form2_midp_gauge_slider_pane_t_ParamLimits

0x4db4,	// (0x0004e290) form2_midp_slider_pane_ParamLimits

0x1815,	// (0x0004acf1) aid_size_cell_func_vkb2_ParamLimits

0x1815,	// (0x0004acf1) aid_size_cell_func_vkb2

0x7462,	// (0x0005093e) slider_pane_g4_ParamLimits

0x7462,	// (0x0005093e) slider_pane_g4

0xbc6e,	// (0x0005514a) form2_midp_gauge_slider_pane_t2_cp01

0xbc7c,	// (0x00055158) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbc7c,	// (0x00055158) form2_midp_gauge_slider_pane_t3_cp01

0x1f24,	// (0x0004b400) form2_midp_slider_pane_cp01

0x94a1,	// (0x0005297d) navi_smil_pane

0x74fa,	// (0x000509d6) navi_smil_pane_g1

0x7502,	// (0x000509de) navi_smil_pane_t1

0x74cf,	// (0x000509ab) form2_midp_slider_pane_g1

0x74d8,	// (0x000509b4) form2_midp_slider_pane_g2

0x74e0,	// (0x000509bc) form2_midp_slider_pane_g3

0x74cf,	// (0x000509ab) form2_midp_slider_pane_g4

0xe7d1,	// (0x00057cad) form2_midp_slider_pane_g5

0x0004,

0xfe1c,	// (0x000592f8) form2_midp_slider_pane_g

0x1ee9,	// (0x0004b3c5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1ee9,	// (0x0004b3c5) vkb2_area_bottom_space_btn_pane_g4

0xc122,	// (0x000555fe) lc0_navi_pane_ParamLimits

0xc122,	// (0x000555fe) lc0_navi_pane

0xc18c,	// (0x00055668) lc0_stat_indi_pane_ParamLimits

0xc18c,	// (0x00055668) lc0_stat_indi_pane

0xc1a1,	// (0x0005567d) ls0_title_pane_ParamLimits

0xc1a1,	// (0x0005567d) ls0_title_pane

0xa166,	// (0x00053642) bg_popup_sub_pane_cp14_ParamLimits

0xda72,	// (0x00056f4e) list_uniindi_pane_ParamLimits

0xda7e,	// (0x00056f5a) uniindi_top_pane_ParamLimits

0x69cd,	// (0x0004fea9) list_single_uniindi_pane_g1_ParamLimits

0x69e0,	// (0x0004febc) list_single_uniindi_pane_t1_ParamLimits

0xbc99,	// (0x00055175) lc0_stat_clock_pane_ParamLimits

0xbc99,	// (0x00055175) lc0_stat_clock_pane

0xe7dc,	// (0x00057cb8) lc0_stat_indi_pane_g1_ParamLimits

0xe7dc,	// (0x00057cb8) lc0_stat_indi_pane_g1

0xe7e9,	// (0x00057cc5) lc0_stat_indi_pane_g2_ParamLimits

0xe7e9,	// (0x00057cc5) lc0_stat_indi_pane_g2

0x0001,

0xfe27,	// (0x00059303) lc0_stat_indi_pane_g_ParamLimits

0xfe27,	// (0x00059303) lc0_stat_indi_pane_g

0xbca9,	// (0x00055185) lc0_uni_indicator_pane_ParamLimits

0xbca9,	// (0x00055185) lc0_uni_indicator_pane

0xe7f6,	// (0x00057cd2) ls0_title_pane_g1_ParamLimits

0xe7f6,	// (0x00057cd2) ls0_title_pane_g1

0xe80a,	// (0x00057ce6) ls0_title_pane_t1_ParamLimits

0xe80a,	// (0x00057ce6) ls0_title_pane_t1

0xbcb9,	// (0x00055195) lc0_uni_indicator_pane_g1_ParamLimits

0xbcb9,	// (0x00055195) lc0_uni_indicator_pane_g1

0x7574,	// (0x00050a50) lc0_stat_clock_pane_t1

0x94a1,	// (0x0005297d) main_ai5_pane

0x7582,	// (0x00050a5e) ai5_sk_pane_ParamLimits

0x7582,	// (0x00050a5e) ai5_sk_pane

0xe838,	// (0x00057d14) cell_ai5_widget_pane_ParamLimits

0xe838,	// (0x00057d14) cell_ai5_widget_pane

0xe8a2,	// (0x00057d7e) aid_size_cell_widget_grid

0x7659,	// (0x00050b35) bg_ai5_widget_pane_ParamLimits

0x7659,	// (0x00050b35) bg_ai5_widget_pane

0xe8d6,	// (0x00057db2) cell_ai5_widget_pane_g2

0x76dd,	// (0x00050bb9) cell_ai5_widget_pane_g3

0x76f4,	// (0x00050bd0) cell_ai5_widget_pane_g4

0x7700,	// (0x00050bdc) cell_ai5_widget_pane_g5

0xe8e6,	// (0x00057dc2) cell_ai5_widget_pane_g6

0xe8f2,	// (0x00057dce) cell_ai5_widget_pane_g7

0x7760,	// (0x00050c3c) cell_ai5_widget_pane_t1_ParamLimits

0x7760,	// (0x00050c3c) cell_ai5_widget_pane_t1

0x777d,	// (0x00050c59) cell_ai5_widget_pane_t2_ParamLimits

0x777d,	// (0x00050c59) cell_ai5_widget_pane_t2

0x7795,	// (0x00050c71) cell_ai5_widget_pane_t3_ParamLimits

0x7795,	// (0x00050c71) cell_ai5_widget_pane_t3

0xe8fe,	// (0x00057dda) cell_ai5_widget_pane_t4_ParamLimits

0xe8fe,	// (0x00057dda) cell_ai5_widget_pane_t4

0xe91b,	// (0x00057df7) cell_ai5_widget_pane_t5_ParamLimits

0xe91b,	// (0x00057df7) cell_ai5_widget_pane_t5

0x77e9,	// (0x00050cc5) cell_ai5_widget_pane_t6_ParamLimits

0x77e9,	// (0x00050cc5) cell_ai5_widget_pane_t6

0x77fb,	// (0x00050cd7) cell_ai5_widget_pane_t7_ParamLimits

0x77fb,	// (0x00050cd7) cell_ai5_widget_pane_t7

0x7814,	// (0x00050cf0) cell_ai5_widget_pane_t8_ParamLimits

0x7814,	// (0x00050cf0) cell_ai5_widget_pane_t8

0x0009,

0xfe41,	// (0x0005931d) cell_ai5_widget_pane_t_ParamLimits

0xfe41,	// (0x0005931d) cell_ai5_widget_pane_t

0xe93a,	// (0x00057e16) grid_ai5_widget_pane

0xa166,	// (0x00053642) highlight_cell_ai5_widget_pane_ParamLimits

0xa166,	// (0x00053642) highlight_cell_ai5_widget_pane

0xe952,	// (0x00057e2e) ai5_sk_left_pane

0xe95c,	// (0x00057e38) ai5_sk_middle_pane

0xe966,	// (0x00057e42) ai5_sk_right_pane

0x7894,	// (0x00050d70) bg_ai5_widget_pane_g1_ParamLimits

0x7894,	// (0x00050d70) bg_ai5_widget_pane_g1

0x78a0,	// (0x00050d7c) bg_ai5_widget_pane_g2_ParamLimits

0x78a0,	// (0x00050d7c) bg_ai5_widget_pane_g2

0x78ac,	// (0x00050d88) bg_ai5_widget_pane_g3_ParamLimits

0x78ac,	// (0x00050d88) bg_ai5_widget_pane_g3

0x78b8,	// (0x00050d94) bg_ai5_widget_pane_g4_ParamLimits

0x78b8,	// (0x00050d94) bg_ai5_widget_pane_g4

0x78c4,	// (0x00050da0) bg_ai5_widget_pane_g5_ParamLimits

0x78c4,	// (0x00050da0) bg_ai5_widget_pane_g5

0x78d0,	// (0x00050dac) bg_ai5_widget_pane_g6_ParamLimits

0x78d0,	// (0x00050dac) bg_ai5_widget_pane_g6

0x78dc,	// (0x00050db8) bg_ai5_widget_pane_g7_ParamLimits

0x78dc,	// (0x00050db8) bg_ai5_widget_pane_g7

0x78e8,	// (0x00050dc4) bg_ai5_widget_pane_g8_ParamLimits

0x78e8,	// (0x00050dc4) bg_ai5_widget_pane_g8

0x78f4,	// (0x00050dd0) bg_ai5_widget_pane_g9_ParamLimits

0x78f4,	// (0x00050dd0) bg_ai5_widget_pane_g9

0x0008,

0xfe56,	// (0x00059332) bg_ai5_widget_pane_g_ParamLimits

0xfe56,	// (0x00059332) bg_ai5_widget_pane_g

0xe996,	// (0x00057e72) cell_shortcut_ai5_widget_pane_ParamLimits

0xe996,	// (0x00057e72) cell_shortcut_ai5_widget_pane

0x04b6,	// (0x00049992) bg_cell_shortcut_ai5_widget_pane

0x7937,	// (0x00050e13) cell_grid_ai5_widget_pane_g1

0x04b6,	// (0x00049992) highlight_cell_shortcut_ai5_widget_pane

0x2a93,	// (0x0004bf6f) ai5_sk_left_pane_g1

0x7940,	// (0x00050e1c) ai5_sk_left_pane_g2

0x7948,	// (0x00050e24) ai5_sk_left_pane_g3

0x7950,	// (0x00050e2c) ai5_sk_left_pane_g4

0x0003,

0xfe69,	// (0x00059345) ai5_sk_left_pane_g

0x7958,	// (0x00050e34) ai5_sk_left_pane_t1

0x2a8b,	// (0x0004bf67) ai5_sk_right_pane_g1

0x7966,	// (0x00050e42) ai5_sk_right_pane_g2

0x796e,	// (0x00050e4a) ai5_sk_right_pane_g3

0x7976,	// (0x00050e52) ai5_sk_right_pane_g4

0x0003,

0xfe72,	// (0x0005934e) ai5_sk_right_pane_g

0x797e,	// (0x00050e5a) ai5_sk_right_pane_t1

0x2a8b,	// (0x0004bf67) ai5_sk_middle_pane_g1

0x2a93,	// (0x0004bf6f) ai5_sk_middle_pane_g2

0x2aab,	// (0x0004bf87) ai5_sk_middle_pane_g3

0x796e,	// (0x00050e4a) ai5_sk_middle_pane_g4

0x7948,	// (0x00050e24) ai5_sk_middle_pane_g5

0x798c,	// (0x00050e68) ai5_sk_middle_pane_g6

0xe9a7,	// (0x00057e83) ai5_sk_middle_pane_g7

0x0006,

0xfe7b,	// (0x00059357) ai5_sk_middle_pane_g

0xc00e,	// (0x000554ea) aid_touch_area_size_lc0_ParamLimits

0xc00e,	// (0x000554ea) aid_touch_area_size_lc0

0x152e,	// (0x0004aa0a) cell_hwr_candidate_pane_t1_ParamLimits

0x25d8,	// (0x0004bab4) aid_touch_navi_pane

0xc29a,	// (0x00055776) status_dt_navi_pane_ParamLimits

0xc29a,	// (0x00055776) status_dt_navi_pane

0xc2b2,	// (0x0005578e) status_dt_sta_pane_ParamLimits

0xc2b2,	// (0x0005578e) status_dt_sta_pane

0xe9af,	// (0x00057e8b) dt_sta_controll_pane

0xe9bc,	// (0x00057e98) dt_sta_indi_pane

0xe9c9,	// (0x00057ea5) dt_sta_title_pane

0x9ba0,	// (0x0005307c) bg_dt_sta_indi_pane_ParamLimits

0x9ba0,	// (0x0005307c) bg_dt_sta_indi_pane

0xe9db,	// (0x00057eb7) dt_sta_battery_pane

0xe9e3,	// (0x00057ebf) dt_sta_indi_pane_g1

0x79de,	// (0x00050eba) dt_sta_indi_pane_g2

0x79e7,	// (0x00050ec3) dt_sta_indi_pane_g3

0x0002,

0xfe8a,	// (0x00059366) dt_sta_indi_pane_g

0x79f0,	// (0x00050ecc) dt_sta_signal_pane

0xa166,	// (0x00053642) bg_dt_sta_title_pane_ParamLimits

0xa166,	// (0x00053642) bg_dt_sta_title_pane

0x38b1,	// (0x0004cd8d) dt_sta_title_pane_g1

0xe9ec,	// (0x00057ec8) dt_sta_title_pane_t1_ParamLimits

0xe9ec,	// (0x00057ec8) dt_sta_title_pane_t1

0x94a1,	// (0x0005297d) bg_dt_sta_control_pane

0xea01,	// (0x00057edd) dt_sta_controll_pane_g1

0xea0a,	// (0x00057ee6) bg_dt_sta_title_pane_g1

0xea13,	// (0x00057eef) bg_dt_sta_title_pane_g2

0xea1c,	// (0x00057ef8) bg_dt_sta_title_pane_g3

0x0002,

0xfe91,	// (0x0005936d) bg_dt_sta_title_pane_g

0x5041,	// (0x0004e51d) bg_dt_sta_indi_pane_g1

0x7a32,	// (0x00050f0e) dt_sta_signal_pane_g1

0x7a3a,	// (0x00050f16) dt_sta_signal_pane_g2

0x0001,

0xfe98,	// (0x00059374) dt_sta_signal_pane_g

0x7a42,	// (0x00050f1e) dt_sta_battery_pane_g1

0x7a4b,	// (0x00050f27) dt_sta_battery_pane_t1

0x5041,	// (0x0004e51d) bg_dt_sta_control_pane_g1

0xa948,	// (0x00053e24) fep_china_uni_eep_pane

0xa950,	// (0x00053e2c) fep_china_uni_entry_pane_ParamLimits

0xa960,	// (0x00053e3c) popup_fep_china_uni_window_g1_ParamLimits

0xa970,	// (0x00053e4c) popup_fep_china_uni_window_g2_ParamLimits

0xa970,	// (0x00053e4c) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00058bfe) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00058bfe) popup_fep_china_uni_window_g

0x7a5a,	// (0x00050f36) fep_china_uni_eep_pane_g1

0x7a62,	// (0x00050f3e) fep_china_uni_eep_pane_t1

0x74f1,	// (0x000509cd) aid_touch_area_size_smil_player

0x272e,	// (0x0004bc0a) lc0_clock_pane

0x2915,	// (0x0004bdf1) status_pane_g5_ParamLimits

0x2915,	// (0x0004bdf1) status_pane_g5

0xafe1,	// (0x000544bd) popup_keymap_window

0x28d3,	// (0x0004bdaf) status_icon_pane

0x76dd,	// (0x00050bb9) cell_ai5_widget_pane_g3_ParamLimits

0x76f4,	// (0x00050bd0) cell_ai5_widget_pane_g4_ParamLimits

0x7700,	// (0x00050bdc) cell_ai5_widget_pane_g5_ParamLimits

0x7724,	// (0x00050c00) cell_ai5_widget_pane_g8_ParamLimits

0x7724,	// (0x00050c00) cell_ai5_widget_pane_g8

0x7738,	// (0x00050c14) cell_ai5_widget_pane_g9_ParamLimits

0x7738,	// (0x00050c14) cell_ai5_widget_pane_g9

0x774c,	// (0x00050c28) cell_ai5_widget_pane_g10_ParamLimits

0x774c,	// (0x00050c28) cell_ai5_widget_pane_g10

0x7a71,	// (0x00050f4d) status_icon_pane_g1

0x94a1,	// (0x0005297d) bg_popup_sub_pane_cp13

0x7a79,	// (0x00050f55) popup_keymap_window_t1

0xac9b,	// (0x00054177) control_pane_g6_ParamLimits

0xac9b,	// (0x00054177) control_pane_g6

0xaca8,	// (0x00054184) control_pane_g7_ParamLimits

0xaca8,	// (0x00054184) control_pane_g7

0xacb5,	// (0x00054191) control_pane_g8_ParamLimits

0xacb5,	// (0x00054191) control_pane_g8

0xe9af,	// (0x00057e8b) dt_sta_controll_pane_ParamLimits

0xe9bc,	// (0x00057e98) dt_sta_indi_pane_ParamLimits

0xe9c9,	// (0x00057ea5) dt_sta_title_pane_ParamLimits

0xa043,	// (0x0005351f) aid_size_touch_scroll_bar_cale

0x95b9,	// (0x00052a95) popup_discreet_window_ParamLimits

0x95b9,	// (0x00052a95) popup_discreet_window

0x960b,	// (0x00052ae7) popup_sk_window

0x30f5,	// (0x0004c5d1) bg_popup_sub_pane_cp28_ParamLimits

0x30f5,	// (0x0004c5d1) bg_popup_sub_pane_cp28

0x7a87,	// (0x00050f63) popup_discreet_window_g1_ParamLimits

0x7a87,	// (0x00050f63) popup_discreet_window_g1

0xea25,	// (0x00057f01) popup_discreet_window_t1_ParamLimits

0xea25,	// (0x00057f01) popup_discreet_window_t1

0x7ac5,	// (0x00050fa1) popup_discreet_window_t2_ParamLimits

0x7ac5,	// (0x00050fa1) popup_discreet_window_t2

0x0002,

0xfe9d,	// (0x00059379) popup_discreet_window_t_ParamLimits

0xfe9d,	// (0x00059379) popup_discreet_window_t

0x1f5b,	// (0x0004b437) popup_sk_window_g1

0x1f65,	// (0x0004b441) popup_sk_window_g2

0x0001,

0xfea4,	// (0x00059380) popup_sk_window_g

0xbce4,	// (0x000551c0) popup_sk_window_t1

0xbcf2,	// (0x000551ce) popup_sk_window_t1_copy1

0xe8d6,	// (0x00057db2) cell_ai5_widget_pane_g2_ParamLimits

0x7826,	// (0x00050d02) cell_ai5_widget_pane_t9_ParamLimits

0x7826,	// (0x00050d02) cell_ai5_widget_pane_t9

0x94a1,	// (0x0005297d) main_fep_fshwr2_pane

0xbd00,	// (0x000551dc) aid_fshwr2_btn_pane

0xbd12,	// (0x000551ee) aid_fshwr2_syb_pane

0xbd24,	// (0x00055200) aid_fshwr2_txt_pane

0xbd33,	// (0x0005520f) fshwr2_func_candi_pane

0xbd52,	// (0x0005522e) fshwr2_hwr_syb_pane

0xbd6d,	// (0x00055249) fshwr2_icf_pane

0x94a1,	// (0x0005297d) fshwr2_icf_bg_pane

0x1ffd,	// (0x0004b4d9) fshwr2_icf_pane_t1_ParamLimits

0x1ffd,	// (0x0004b4d9) fshwr2_icf_pane_t1

0xa7e6,	// (0x00053cc2) fshwr2_func_candi_pane_g1

0xea43,	// (0x00057f1f) fshwr2_func_candi_row_pane_ParamLimits

0xea43,	// (0x00057f1f) fshwr2_func_candi_row_pane

0xbd99,	// (0x00055275) cell_fshwr2_syb_pane_ParamLimits

0xbd99,	// (0x00055275) cell_fshwr2_syb_pane

0x52b1,	// (0x0004e78d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x52b1,	// (0x0004e78d) fshwr2_hwr_syb_pane_g1

0x94a1,	// (0x0005297d) bg_popup_call_pane_cp01

0xbdaf,	// (0x0005528b) fshwr2_func_candi_cell_pane_ParamLimits

0xbdaf,	// (0x0005528b) fshwr2_func_candi_cell_pane

0xea66,	// (0x00057f42) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xea66,	// (0x00057f42) fshwr2_func_candi_cell_bg_pane

0xbdfa,	// (0x000552d6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbdfa,	// (0x000552d6) fshwr2_func_candi_cell_pane_g1

0xbe31,	// (0x0005530d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbe31,	// (0x0005530d) fshwr2_func_candi_cell_pane_t1

0x94a1,	// (0x0005297d) bg_button_pane_cp08

0x7b27,	// (0x00051003) cell_fshwr2_syb_bg_pane

0xbe4c,	// (0x00055328) cell_fshwr2_syb_bg_pane_g1

0xbe54,	// (0x00055330) cell_fshwr2_syb_bg_pane_t1

0xa166,	// (0x00053642) main_tmo_pane

0xc982,	// (0x00055e5e) uni_indicator_pane_g1_ParamLimits

0xc998,	// (0x00055e74) uni_indicator_pane_g2_ParamLimits

0xc9ae,	// (0x00055e8a) uni_indicator_pane_g3_ParamLimits

0x3c2b,	// (0x0004d107) uni_indicator_pane_g4_ParamLimits

0x3c2b,	// (0x0004d107) uni_indicator_pane_g4

0x3c3f,	// (0x0004d11b) uni_indicator_pane_g5_ParamLimits

0x3c3f,	// (0x0004d11b) uni_indicator_pane_g5

0x3c3f,	// (0x0004d11b) uni_indicator_pane_g6_ParamLimits

0x3c3f,	// (0x0004d11b) uni_indicator_pane_g6

0xf921,	// (0x00058dfd) uni_indicator_pane_g_ParamLimits

0xd78e,	// (0x00056c6a) popup_tmo_note_window_ParamLimits

0xd78e,	// (0x00056c6a) popup_tmo_note_window

0xa166,	// (0x00053642) fshwr2_bg_pane

0xbe22,	// (0x000552fe) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbe22,	// (0x000552fe) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea9,	// (0x00059385) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea9,	// (0x00059385) fshwr2_func_candi_cell_pane_g

0x5041,	// (0x0004e51d) bg_popup_window_pane_cp01

0x20c6,	// (0x0004b5a2) bg_popup_window_pane_g1_cp01

0x7b2f,	// (0x0005100b) bg_popup_window_pane_cp22_ParamLimits

0x7b2f,	// (0x0005100b) bg_popup_window_pane_cp22

0xea72,	// (0x00057f4e) listscroll_tmo_link_pane_ParamLimits

0xea72,	// (0x00057f4e) listscroll_tmo_link_pane

0x7b7d,	// (0x00051059) popup_tmo_note_window_g1_ParamLimits

0x7b7d,	// (0x00051059) popup_tmo_note_window_g1

0xeab2,	// (0x00057f8e) tmo_note_info_pane_ParamLimits

0xeab2,	// (0x00057f8e) tmo_note_info_pane

0xeacc,	// (0x00057fa8) list_tmo_note_info_pane_g1_ParamLimits

0xeacc,	// (0x00057fa8) list_tmo_note_info_pane_g1

0x7bbb,	// (0x00051097) list_tmo_note_info_pane_g2_ParamLimits

0x7bbb,	// (0x00051097) list_tmo_note_info_pane_g2

0x0001,

0xfeae,	// (0x0005938a) list_tmo_note_info_pane_g_ParamLimits

0xfeae,	// (0x0005938a) list_tmo_note_info_pane_g

0x7bd7,	// (0x000510b3) list_tmo_note_info_text_pane_ParamLimits

0x7bd7,	// (0x000510b3) list_tmo_note_info_text_pane

0x7c58,	// (0x00051134) list_tmo_link_pane

0x7c65,	// (0x00051141) scroll_pane_cp20

0x7c72,	// (0x0005114e) list_single_tmo_link_pane_ParamLimits

0x7c72,	// (0x0005114e) list_single_tmo_link_pane

0x7c82,	// (0x0005115e) list_single_tmo_link_pane_t1

0x7c90,	// (0x0005116c) list_tmo_note_info_text_pane_t1_ParamLimits

0x7c90,	// (0x0005116c) list_tmo_note_info_text_pane_t1

0xa214,	// (0x000536f0) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa214,	// (0x000536f0) aid_size_touch_scroll_bar_cp01

0x914c,	// (0x00052628) aid_size_touch_slider_marker

0x95fb,	// (0x00052ad7) popup_settings_window_ParamLimits

0x95fb,	// (0x00052ad7) popup_settings_window

0xe46e,	// (0x0005794a) popup_candi_list_indi_window

0x25d8,	// (0x0004bab4) aid_touch_navi_pane_ParamLimits

0x176e,	// (0x0004ac4a) rs_clock_indi_pane

0x1777,	// (0x0004ac53) sctrl_sk_bottom_pane_ParamLimits

0x1788,	// (0x0004ac64) sctrl_sk_top_pane_ParamLimits

0xb94a,	// (0x00054e26) popup_fep_tooltip_window

0xe8a2,	// (0x00057d7e) aid_size_cell_widget_grid_ParamLimits

0xe8c1,	// (0x00057d9d) cell_ai5_widget_pane_g1_ParamLimits

0xe8c1,	// (0x00057d9d) cell_ai5_widget_pane_g1

0xe8e6,	// (0x00057dc2) cell_ai5_widget_pane_g6_ParamLimits

0xe8f2,	// (0x00057dce) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2c,	// (0x00059308) cell_ai5_widget_pane_g_ParamLimits

0xfe2c,	// (0x00059308) cell_ai5_widget_pane_g

0x784a,	// (0x00050d26) cell_ai5_widget_pane_t10_ParamLimits

0x784a,	// (0x00050d26) cell_ai5_widget_pane_t10

0xe93a,	// (0x00057e16) grid_ai5_widget_pane_ParamLimits

0xe970,	// (0x00057e4c) cell_contacts_ai5_widget_pane_ParamLimits

0xe970,	// (0x00057e4c) cell_contacts_ai5_widget_pane

0x7ada,	// (0x00050fb6) popup_discreet_window_t3_ParamLimits

0x7ada,	// (0x00050fb6) popup_discreet_window_t3

0xbd85,	// (0x00055261) popup_fshwr2_char_preview_window_ParamLimits

0xbd85,	// (0x00055261) popup_fshwr2_char_preview_window

0xeae3,	// (0x00057fbf) tmo_note_info_pane_t1

0xeaf8,	// (0x00057fd4) tmo_note_info_pane_t2

0xeb0f,	// (0x00057feb) tmo_note_info_pane_t3

0x7c34,	// (0x00051110) tmo_note_info_pane_t4

0x7c46,	// (0x00051122) tmo_note_info_pane_t5

0x0004,

0xfeb3,	// (0x0005938f) tmo_note_info_pane_t

0x7c58,	// (0x00051134) list_tmo_link_pane_ParamLimits

0x7c65,	// (0x00051141) scroll_pane_cp20_ParamLimits

0x94a1,	// (0x0005297d) bg_popup_fep_char_preview_window_cp01

0x7ca9,	// (0x00051185) popup_fshwr2_char_preview_window_t1

0x7cb7,	// (0x00051193) popup_candi_list_indi_window_g1

0x7cc0,	// (0x0005119c) bg_cell_contacts_ai5_widget_pane

0x7ccc,	// (0x000511a8) cell_contacts_ai5_widget_pane_g1

0x5748,	// (0x0004ec24) cell_contacts_ai5_widget_pane_g2

0x7ce1,	// (0x000511bd) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebe,	// (0x0005939a) cell_contacts_ai5_widget_pane_g

0x7ced,	// (0x000511c9) cell_contacts_ai5_widget_pane_t1

0xa166,	// (0x00053642) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7d64,	// (0x00051240) settings_container_pane

0x04b6,	// (0x00049992) listscroll_set_pane_copy1

0x4721,	// (0x0004dbfd) scroll_pane_cp121_copy1

0x7d70,	// (0x0005124c) set_content_pane_copy1

0xeb89,	// (0x00058065) aid_height_set_list_copy1_ParamLimits

0xeb89,	// (0x00058065) aid_height_set_list_copy1

0x3e37,	// (0x0004d313) aid_size_parent_copy1_ParamLimits

0x3e37,	// (0x0004d313) aid_size_parent_copy1

0xeb95,	// (0x00058071) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeb95,	// (0x00058071) button_value_adjust_pane_cp6_copy1

0x2576,	// (0x0004ba52) list_highlight_pane_cp2_copy1_ParamLimits

0x2576,	// (0x0004ba52) list_highlight_pane_cp2_copy1

0xeba9,	// (0x00058085) list_set_pane_copy1_ParamLimits

0xeba9,	// (0x00058085) list_set_pane_copy1

0xeb24,	// (0x00058000) main_pane_set_t1_copy1_ParamLimits

0xeb24,	// (0x00058000) main_pane_set_t1_copy1

0xeb5e,	// (0x0005803a) main_pane_set_t2_copy1_ParamLimits

0xeb5e,	// (0x0005803a) main_pane_set_t2_copy1

0xec56,	// (0x00058132) main_pane_set_t3_copy1

0xec64,	// (0x00058140) main_pane_set_t4_copy1

0xeb7d,	// (0x00058059) set_content_pane_g1_copy1_ParamLimits

0xeb7d,	// (0x00058059) set_content_pane_g1_copy1

0xec72,	// (0x0005814e) setting_code_pane_copy1

0x7e69,	// (0x00051345) setting_slider_graphic_pane_copy1

0x7e69,	// (0x00051345) setting_slider_pane_copy1

0x7e69,	// (0x00051345) setting_text_pane_copy1

0x7e69,	// (0x00051345) setting_volume_pane_copy1

0xec72,	// (0x0005814e) settings_code_pane_cp2_copy1

0xec7a,	// (0x00058156) settings_code_pane_cp_copy1_ParamLimits

0xec7a,	// (0x00058156) settings_code_pane_cp_copy1

0xbe63,	// (0x0005533f) volume_set_pane_copy1

0xec8e,	// (0x0005816a) volume_set_pane_g10_copy1

0xec96,	// (0x00058172) volume_set_pane_g1_copy1

0xec9e,	// (0x0005817a) volume_set_pane_g2_copy1

0xeca6,	// (0x00058182) volume_set_pane_g3_copy1

0xecae,	// (0x0005818a) volume_set_pane_g4_copy1

0xecb6,	// (0x00058192) volume_set_pane_g5_copy1

0xecbe,	// (0x0005819a) volume_set_pane_g6_copy1

0xecc6,	// (0x000581a2) volume_set_pane_g7_copy1

0xecce,	// (0x000581aa) volume_set_pane_g8_copy1

0xecd6,	// (0x000581b2) volume_set_pane_g9_copy1

0x9836,	// (0x00052d12) bg_set_opt_pane_cp_copy1_ParamLimits

0x9836,	// (0x00052d12) bg_set_opt_pane_cp_copy1

0xbe6b,	// (0x00055347) setting_slider_pane_t1_copy1_ParamLimits

0xbe6b,	// (0x00055347) setting_slider_pane_t1_copy1

0xbe89,	// (0x00055365) setting_slider_pane_t2_copy1_ParamLimits

0xbe89,	// (0x00055365) setting_slider_pane_t2_copy1

0xbea3,	// (0x0005537f) setting_slider_pane_t3_copy1_ParamLimits

0xbea3,	// (0x0005537f) setting_slider_pane_t3_copy1

0xbebb,	// (0x00055397) slider_set_pane_copy1_ParamLimits

0xbebb,	// (0x00055397) slider_set_pane_copy1

0xa1b5,	// (0x00053691) set_opt_bg_pane_g1_copy2

0xa1bd,	// (0x00053699) set_opt_bg_pane_g2_copy2

0x7ed5,	// (0x000513b1) set_opt_bg_pane_g3_copy2

0xa1cd,	// (0x000536a9) set_opt_bg_pane_g4_copy2

0xa1d5,	// (0x000536b1) set_opt_bg_pane_g5_copy2

0xa1dd,	// (0x000536b9) set_opt_bg_pane_g6_copy2

0xecde,	// (0x000581ba) set_opt_bg_pane_g7_copy2

0x7ee7,	// (0x000513c3) set_opt_bg_pane_g8_copy2

0x7ef1,	// (0x000513cd) set_opt_bg_pane_g9_copy2

0xbed1,	// (0x000553ad) aid_size_touch_slider_mark_copy1_ParamLimits

0xbed1,	// (0x000553ad) aid_size_touch_slider_mark_copy1

0xece6,	// (0x000581c2) slider_set_pane_g1_copy1

0x2151,	// (0x0004b62d) slider_set_pane_g2_copy1

0xb6a0,	// (0x00054b7c) slider_set_pane_g3_copy1_ParamLimits

0xb6a0,	// (0x00054b7c) slider_set_pane_g3_copy1

0xb6b4,	// (0x00054b90) slider_set_pane_g4_copy1_ParamLimits

0xb6b4,	// (0x00054b90) slider_set_pane_g4_copy1

0xb6cc,	// (0x00054ba8) slider_set_pane_g5_copy1_ParamLimits

0xb6cc,	// (0x00054ba8) slider_set_pane_g5_copy1

0xb6a0,	// (0x00054b7c) slider_set_pane_g6_copy1_ParamLimits

0xb6a0,	// (0x00054b7c) slider_set_pane_g6_copy1

0xbee5,	// (0x000553c1) slider_set_pane_g7_copy1_ParamLimits

0xbee5,	// (0x000553c1) slider_set_pane_g7_copy1

0x959b,	// (0x00052a77) bg_set_opt_pane_cp2_copy1

0xecef,	// (0x000581cb) setting_slider_graphic_pane_g1_copy1

0xecf8,	// (0x000581d4) setting_slider_graphic_pane_t1_copy1

0xed08,	// (0x000581e4) setting_slider_graphic_pane_t2_copy1

0xed18,	// (0x000581f4) slider_set_pane_cp_copy1

0x7f3d,	// (0x00051419) input_focus_pane_cp1_copy1

0x7f46,	// (0x00051422) list_set_text_pane_copy1

0x7f4e,	// (0x0005142a) setting_text_pane_g1_copy1

0xf352,	// (0x0005882e) set_text_pane_t1_copy1

0x7f3d,	// (0x00051419) input_focus_pane_cp2_copy1

0x7f4e,	// (0x0005142a) setting_code_pane_g1_copy1

0x7f57,	// (0x00051433) setting_code_pane_t1_copy1

0x4559,	// (0x0004da35) list_set_graphic_pane_copy1

0x959b,	// (0x00052a77) bg_set_opt_pane_cp4_copy1

0xe261,	// (0x0005773d) list_set_graphic_pane_g1_copy1_ParamLimits

0xe261,	// (0x0005773d) list_set_graphic_pane_g1_copy1

0x7f65,	// (0x00051441) list_set_graphic_pane_g2_copy1

0xe279,	// (0x00057755) list_set_graphic_pane_t1_copy1_ParamLimits

0xe279,	// (0x00057755) list_set_graphic_pane_t1_copy1

0x5041,	// (0x0004e51d) rs_clock_indi_pane_g1

0x7f6d,	// (0x00051449) rs_clock_indi_pane_t1

0x7f7b,	// (0x00051457) rs_indi_pane

0x7f83,	// (0x0005145f) rs_indi_pane_g1

0x7f8c,	// (0x00051468) rs_indi_pane_g2

0x7cb7,	// (0x00051193) rs_indi_pane_g3

0x0002,

0xfec5,	// (0x000593a1) rs_indi_pane_g

0x04b6,	// (0x00049992) bg_popup_preview_window_pane_cp03

0x7f95,	// (0x00051471) popup_fep_tooltip_window_t1

0xd433,	// (0x0005690f) popup_note2_window_g2_ParamLimits

0xd433,	// (0x0005690f) popup_note2_window_g2

0x0001,

0xfc65,	// (0x00059141) popup_note2_window_g_ParamLimits

0xfc65,	// (0x00059141) popup_note2_window_g

0x61bd,	// (0x0004f699) bg_popup_sub_pane_cp11_ParamLimits

0x61ca,	// (0x0004f6a6) cell_ai3_links_pane_g1_ParamLimits

0x61e1,	// (0x0004f6bd) cell_ai3_links_pane_t1

0xf352,	// (0x0005882e) set_text_pane_t1_copy1_ParamLimits

0xe41a,	// (0x000578f6) cell_graphic_popup_pane_cp2_ParamLimits

0xe41a,	// (0x000578f6) cell_graphic_popup_pane_cp2

0xed28,	// (0x00058204) cell_graphic_popup_pane_g1_cp2

0x9ec3,	// (0x0005339f) cell_graphic_popup_pane_g2_cp2

0x7fab,	// (0x00051487) cell_graphic_popup_pane_g3_cp2

0xed30,	// (0x0005820c) cell_graphic_popup_pane_t2_cp2

0x9ed4,	// (0x000533b0) grid_highlight_pane_cp3_cp2

0xa4db,	// (0x000539b7) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xa166,	// (0x00053642) main_tmo_pane_ParamLimits

0xd782,	// (0x00056c5e) popup_tmo_big_image_note_window

0x76a7,	// (0x00050b83) cell_ai5_widget_list_pane

0xe8b8,	// (0x00057d94) cell_ai5_widget_lrg_icon_pane

0xeae3,	// (0x00057fbf) tmo_note_info_pane_t1_ParamLimits

0xeaf8,	// (0x00057fd4) tmo_note_info_pane_t2_ParamLimits

0xeb0f,	// (0x00057feb) tmo_note_info_pane_t3_ParamLimits

0x7c34,	// (0x00051110) tmo_note_info_pane_t4_ParamLimits

0x7c46,	// (0x00051122) tmo_note_info_pane_t5_ParamLimits

0xfeb3,	// (0x0005938f) tmo_note_info_pane_t_ParamLimits

0x7d64,	// (0x00051240) settings_container_pane_ParamLimits

0xed20,	// (0x000581fc) indicator_popup_pane_cp5

0xed20,	// (0x000581fc) indicator_popup_pane_cp6

0x4559,	// (0x0004da35) list_set_graphic_pane_copy1_ParamLimits

0x94a1,	// (0x0005297d) bg_popup_window_pane_cp23

0x7fc1,	// (0x0005149d) popup_tmo_big_image_note_window_g1

0x7fca,	// (0x000514a6) popup_tmo_big_image_note_window_t1

0x7fda,	// (0x000514b6) popup_tmo_big_image_note_window_t2

0x7fea,	// (0x000514c6) popup_tmo_big_image_note_window_t3

0x0002,

0xfecc,	// (0x000593a8) popup_tmo_big_image_note_window_t

0x5041,	// (0x0004e51d) cell_ai5_widget_lrg_icon_pane_g1

0x7ffa,	// (0x000514d6) cell_ai5_widget_lrg_icon_pane_t1

0xed3e,	// (0x0005821a) cell_ai5_widget_list_row_pane_ParamLimits

0xed3e,	// (0x0005821a) cell_ai5_widget_list_row_pane

0x801f,	// (0x000514fb) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x801f,	// (0x000514fb) cell_ai5_widget_list_row_pane_g1

0xed55,	// (0x00058231) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xed55,	// (0x00058231) cell_ai5_widget_list_row_pane_t1

0x8057,	// (0x00051533) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8057,	// (0x00051533) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed3,	// (0x000593af) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed3,	// (0x000593af) cell_ai5_widget_list_row_pane_t

0x94a1,	// (0x0005297d) main_fep_vtchi_ss_pane

0x809b,	// (0x00051577) popup_fep_char_pre_window

0x80a3,	// (0x0005157f) popup_fep_ituss_window

0x80c4,	// (0x000515a0) popup_fep_vkbss_window

0x80e3,	// (0x000515bf) grid_vkbss_keypad_pane_ParamLimits

0x80e3,	// (0x000515bf) grid_vkbss_keypad_pane

0x80f3,	// (0x000515cf) ituss_keypad_pane

0x217b,	// (0x0004b657) aid_vkbss_key_offset_ParamLimits

0x217b,	// (0x0004b657) aid_vkbss_key_offset

0x2187,	// (0x0004b663) cell_vkbss_key_pane_ParamLimits

0x2187,	// (0x0004b663) cell_vkbss_key_pane

0x28ef,	// (0x0004bdcb) bg_cell_vkbss_key_g1_ParamLimits

0x28ef,	// (0x0004bdcb) bg_cell_vkbss_key_g1

0x8102,	// (0x000515de) cell_vkbss_key_3p_pane_ParamLimits

0x8102,	// (0x000515de) cell_vkbss_key_3p_pane

0x811c,	// (0x000515f8) cell_vkbss_key_g1_ParamLimits

0x811c,	// (0x000515f8) cell_vkbss_key_g1

0x8136,	// (0x00051612) cell_vkbss_key_t1_ParamLimits

0x8136,	// (0x00051612) cell_vkbss_key_t1

0x219d,	// (0x0004b679) cell_ituss_key_pane_ParamLimits

0x219d,	// (0x0004b679) cell_ituss_key_pane

0x8161,	// (0x0005163d) bg_cell_ituss_key_g1_ParamLimits

0x8161,	// (0x0005163d) bg_cell_ituss_key_g1

0x816d,	// (0x00051649) cell_ituss_key_pane_g1_ParamLimits

0x816d,	// (0x00051649) cell_ituss_key_pane_g1

0x21ae,	// (0x0004b68a) cell_ituss_key_pane_g2_ParamLimits

0x21ae,	// (0x0004b68a) cell_ituss_key_pane_g2

0x0002,

0xfeda,	// (0x000593b6) cell_ituss_key_pane_g_ParamLimits

0xfeda,	// (0x000593b6) cell_ituss_key_pane_g

0x21da,	// (0x0004b6b6) cell_ituss_key_t1_ParamLimits

0x21da,	// (0x0004b6b6) cell_ituss_key_t1

0x2214,	// (0x0004b6f0) cell_ituss_key_t2_ParamLimits

0x2214,	// (0x0004b6f0) cell_ituss_key_t2

0x2245,	// (0x0004b721) cell_ituss_key_t3_ParamLimits

0x2245,	// (0x0004b721) cell_ituss_key_t3

0x2214,	// (0x0004b6f0) cell_ituss_key_t4_ParamLimits

0x2214,	// (0x0004b6f0) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x000593bd) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x000593bd) cell_ituss_key_t

0x8199,	// (0x00051675) cell_vkbss_key_3p_pane_g1

0x81a1,	// (0x0005167d) cell_vkbss_key_3p_pane_g2

0x81a9,	// (0x00051685) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x000593c8) cell_vkbss_key_3p_pane_g

0x94a1,	// (0x0005297d) bg_popup_fep_char_preview_window_cp02

0x2288,	// (0x0004b764) popup_fep_char_pre_window_t1

0xe898,	// (0x00057d74) main_ai5_sk_pane

0x7cc0,	// (0x0005119c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7ccc,	// (0x000511a8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5748,	// (0x0004ec24) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7ce1,	// (0x000511bd) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebe,	// (0x0005939a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7ced,	// (0x000511c9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xa166,	// (0x00053642) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xed86,	// (0x00058262) main_ai5_sk_pane_g1

0xc5db,	// (0x00055ab7) popup_query_code_window_g1

0x80b9,	// (0x00051595) popup_fep_vkb_icf_pane

0x80cd,	// (0x000515a9) popup_fep_vtchi_icf_pane

0x81ba,	// (0x00051696) bg_icf_pane

0x81c6,	// (0x000516a2) list_vkb_icf_pane

0x81d5,	// (0x000516b1) bg_icf_pane_cp01

0x81e8,	// (0x000516c4) vtchi_icf_list_pane

0x81f8,	// (0x000516d4) list_vkb_icf_pane_t1_ParamLimits

0x81f8,	// (0x000516d4) list_vkb_icf_pane_t1

0x820e,	// (0x000516ea) vtchi_icf_list_pane_t1_ParamLimits

0x820e,	// (0x000516ea) vtchi_icf_list_pane_t1

0x80a3,	// (0x0005157f) popup_fep_ituss_window_ParamLimits

0x80cd,	// (0x000515a9) popup_fep_vtchi_icf_pane_ParamLimits

0x80f3,	// (0x000515cf) ituss_keypad_pane_ParamLimits

0x216f,	// (0x0004b64b) ituss_sks_pane

0x81ba,	// (0x00051696) bg_icf_pane_ParamLimits

0x807f,	// (0x0005155b) icf_edit_indi_pane_ParamLimits

0x807f,	// (0x0005155b) icf_edit_indi_pane

0x81c6,	// (0x000516a2) list_vkb_icf_pane_ParamLimits

0x81d5,	// (0x000516b1) bg_icf_pane_cp01_ParamLimits

0x808e,	// (0x0005156a) icf_edit_indi_pane_cp01_ParamLimits

0x808e,	// (0x0005156a) icf_edit_indi_pane_cp01

0x81f0,	// (0x000516cc) vtchi_query_pane

0x52b1,	// (0x0004e78d) icf_edit_indi_pane_g1_ParamLimits

0x52b1,	// (0x0004e78d) icf_edit_indi_pane_g1

0x8280,	// (0x0005175c) icf_edit_indi_pane_g2_ParamLimits

0x8280,	// (0x0005175c) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x000593e0) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x000593e0) icf_edit_indi_pane_g

0x828f,	// (0x0005176b) icf_edit_indi_pane_t1

0x8229,	// (0x00051705) bg_input_focus_pane_cp042

0xa03a,	// (0x00053516) vtchi_button_pane

0x8232,	// (0x0005170e) vtchi_query_pane_t1

0x8240,	// (0x0005171c) vtchi_query_pane_t2

0x824e,	// (0x0005172a) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x000593cf) vtchi_query_pane_t

0x94a1,	// (0x0005297d) bg_button_pane_cp13

0x825c,	// (0x00051738) vtchi_button_pane_g1

0x2297,	// (0x0004b773) ituss_sks_pane_g1

0x22a2,	// (0x0004b77e) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x000593d6) ituss_sks_pane_g

0x8264,	// (0x00051740) ituss_sks_pane_t1

0x8272,	// (0x0005174e) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x000593db) ituss_sks_pane_t

0x4a9b,	// (0x0004df77) indicator_nsta_pane_cp_g1

0x4aa4,	// (0x0004df80) indicator_nsta_pane_cp_g2

0x4aac,	// (0x0004df88) indicator_nsta_pane_cp_g3

0x4ab4,	// (0x0004df90) indicator_nsta_pane_cp_g4

0x4abc,	// (0x0004df98) indicator_nsta_pane_cp_g5

0x4abc,	// (0x0004df98) indicator_nsta_pane_cp_g6

0x0005,

0xfaaf,	// (0x00058f8b) indicator_nsta_pane_cp_g

0xe670,	// (0x00057b4c) cell_graphic2_pane_t2_ParamLimits

0xe670,	// (0x00057b4c) cell_graphic2_pane_t2

0x0001,

0xfdb5,	// (0x00059291) cell_graphic2_pane_t_ParamLimits

0xfdb5,	// (0x00059291) cell_graphic2_pane_t

0xe6aa,	// (0x00057b86) cell_graphic2_control_pane_t1

0xa8ae,	// (0x00053d8a) signal_pane_g3_ParamLimits

0xa8ae,	// (0x00053d8a) signal_pane_g3

0xa8c2,	// (0x00053d9e) signal_pane_g4_ParamLimits

0xa8c2,	// (0x00053d9e) signal_pane_g4

0x8069,	// (0x00051545) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8069,	// (0x00051545) cell_ai5_widget_list_row_pane_t3

0x8187,	// (0x00051663) cell_ituss_key_pane_t1_ParamLimits

0x8187,	// (0x00051663) cell_ituss_key_pane_t1

0x2b85,	// (0x0004c061) form_field_data_wide_pane_vc_t2_ParamLimits

0x2b85,	// (0x0004c061) form_field_data_wide_pane_vc_t2

0x2b99,	// (0x0004c075) form_field_data_wide_pane_vc_t3_ParamLimits

0x2b99,	// (0x0004c075) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00058ce5) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00058ce5) form_field_data_wide_pane_vc_t

0x4763,	// (0x0004dc3f) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4763,	// (0x0004dc3f) form_field_slider_wide_pane_vc_t3

0x4841,	// (0x0004dd1d) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4841,	// (0x0004dd1d) form_field_popup_wide_pane_vc_t2

0x4858,	// (0x0004dd34) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4858,	// (0x0004dd34) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9e,	// (0x00058f7a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9e,	// (0x00058f7a) form_field_popup_wide_pane_vc_t

0xbd00,	// (0x000551dc) aid_fshwr2_btn_pane_ParamLimits

0xbd12,	// (0x000551ee) aid_fshwr2_syb_pane_ParamLimits

0xbd24,	// (0x00055200) aid_fshwr2_txt_pane_ParamLimits

0xa166,	// (0x00053642) fshwr2_bg_pane_ParamLimits

0xbd33,	// (0x0005520f) fshwr2_func_candi_pane_ParamLimits

0xbd52,	// (0x0005522e) fshwr2_hwr_syb_pane_ParamLimits

0xbd6d,	// (0x00055249) fshwr2_icf_pane_ParamLimits

0x129a,	// (0x0004a776) list_double_graphic_pane_vc_g4_ParamLimits

0x129a,	// (0x0004a776) list_double_graphic_pane_vc_g4

0x21ce,	// (0x0004b6aa) cell_ituss_key_pane_g3_ParamLimits

0x21ce,	// (0x0004b6aa) cell_ituss_key_pane_g3

0x2276,	// (0x0004b752) cell_ituss_key_t5_ParamLimits

0x2276,	// (0x0004b752) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large

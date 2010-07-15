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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000022dc };

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
0x9259,	// (0x0000b535) Screen

0x9265,	// (0x0000b541) application_window_ParamLimits

0x9265,	// (0x0000b541) application_window

0xe490,	// (0x0001076c) screen_g1

0x929d,	// (0x0000b579) area_bottom_pane_ParamLimits

0x929d,	// (0x0000b579) area_bottom_pane

0xe4ba,	// (0x00010796) area_top_pane_ParamLimits

0xe4ba,	// (0x00010796) area_top_pane

0xe54e,	// (0x0001082a) main_pane_ParamLimits

0xe54e,	// (0x0001082a) main_pane

0xe609,	// (0x000108e5) misc_graphics

0xb04e,	// (0x0000d32a) battery_pane_ParamLimits

0xb04e,	// (0x0000d32a) battery_pane

0x1d6f,	// (0x0000404b) bg_status_flat_pane_g8

0x1d77,	// (0x00004053) bg_status_flat_pane_g9

0x0ee4,	// (0x000031c0) context_pane_ParamLimits

0x0ee4,	// (0x000031c0) context_pane

0xb1b9,	// (0x0000d495) navi_pane_ParamLimits

0xb1b9,	// (0x0000d495) navi_pane

0xb237,	// (0x0000d513) signal_pane_ParamLimits

0xb237,	// (0x0000d513) signal_pane

0x0008,

0xf859,	// (0x00011b35) bg_status_flat_pane_g

0xb2c7,	// (0x0000d5a3) status_pane_g1_ParamLimits

0xb2c7,	// (0x0000d5a3) status_pane_g1

0xb2dd,	// (0x0000d5b9) status_pane_g2_ParamLimits

0xb2dd,	// (0x0000d5b9) status_pane_g2

0x110b,	// (0x000033e7) status_pane_g3_ParamLimits

0x110b,	// (0x000033e7) status_pane_g3

0x0004,

0xf78c,	// (0x00011a68) status_pane_g_ParamLimits

0xf78c,	// (0x00011a68) status_pane_g

0xb2e9,	// (0x0000d5c5) title_pane_ParamLimits

0xb2e9,	// (0x0000d5c5) title_pane

0xb34c,	// (0x0000d628) uni_indicator_pane_ParamLimits

0xb34c,	// (0x0000d628) uni_indicator_pane

0x0785,	// (0x00002a61) bg_list_pane_ParamLimits

0x0785,	// (0x00002a61) bg_list_pane

0xa816,	// (0x0000caf2) find_pane

0x14c3,	// (0x0000379f) listscroll_app_pane_ParamLimits

0x14c3,	// (0x0000379f) listscroll_app_pane

0x07b9,	// (0x00002a95) listscroll_form_pane

0xa81e,	// (0x0000cafa) listscroll_gen_pane_ParamLimits

0xa81e,	// (0x0000cafa) listscroll_gen_pane

0x07d5,	// (0x00002ab1) listscroll_set_pane

0x2b17,	// (0x00004df3) main_idle_act_pane

0x0266,	// (0x00002542) main_idle_trad_pane

0x0266,	// (0x00002542) main_list_empty_pane

0x07ad,	// (0x00002a89) main_midp_pane

0x07ef,	// (0x00002acb) main_pane_g1_ParamLimits

0x07ef,	// (0x00002acb) main_pane_g1

0xa832,	// (0x0000cb0e) popup_ai_message_window_ParamLimits

0xa832,	// (0x0000cb0e) popup_ai_message_window

0xa8e3,	// (0x0000cbbf) popup_fep_china_uni_window_ParamLimits

0xa8e3,	// (0x0000cbbf) popup_fep_china_uni_window

0xa93d,	// (0x0000cc19) popup_fep_japan_candidate_window_ParamLimits

0xa93d,	// (0x0000cc19) popup_fep_japan_candidate_window

0xa95b,	// (0x0000cc37) popup_fep_japan_predictive_window_ParamLimits

0xa95b,	// (0x0000cc37) popup_fep_japan_predictive_window

0xa96d,	// (0x0000cc49) popup_find_window

0xa98a,	// (0x0000cc66) popup_grid_graphic_window_ParamLimits

0xa98a,	// (0x0000cc66) popup_grid_graphic_window

0xaa28,	// (0x0000cd04) popup_large_graphic_colour_window

0xaa4e,	// (0x0000cd2a) popup_menu_window_ParamLimits

0xaa4e,	// (0x0000cd2a) popup_menu_window

0xac20,	// (0x0000cefc) popup_note_image_window

0xabe6,	// (0x0000cec2) popup_note_wait_window_ParamLimits

0xabe6,	// (0x0000cec2) popup_note_wait_window

0xac38,	// (0x0000cf14) popup_note_window_ParamLimits

0xac38,	// (0x0000cf14) popup_note_window

0xace7,	// (0x0000cfc3) popup_query_code_window_ParamLimits

0xace7,	// (0x0000cfc3) popup_query_code_window

0xad21,	// (0x0000cffd) popup_query_data_code_window_ParamLimits

0xad21,	// (0x0000cffd) popup_query_data_code_window

0xad3e,	// (0x0000d01a) popup_query_data_window_ParamLimits

0xad3e,	// (0x0000d01a) popup_query_data_window

0xadc0,	// (0x0000d09c) popup_query_sat_info_window_ParamLimits

0xadc0,	// (0x0000d09c) popup_query_sat_info_window

0xae57,	// (0x0000d133) popup_snote_single_graphic_window_ParamLimits

0xae57,	// (0x0000d133) popup_snote_single_graphic_window

0xae57,	// (0x0000d133) popup_snote_single_text_window_ParamLimits

0xae57,	// (0x0000d133) popup_snote_single_text_window

0x0c5b,	// (0x00002f37) popup_sub_window_general

0xafb4,	// (0x0000d290) popup_window_general_ParamLimits

0xafb4,	// (0x0000d290) popup_window_general

0x0da0,	// (0x0000307c) power_save_pane

0xa674,	// (0x0000c950) control_pane_g1_ParamLimits

0xa674,	// (0x0000c950) control_pane_g1

0xa69d,	// (0x0000c979) control_pane_g2_ParamLimits

0xa69d,	// (0x0000c979) control_pane_g2

0x0620,	// (0x000028fc) control_pane_g3_ParamLimits

0x0620,	// (0x000028fc) control_pane_g3

0x0007,

0xf774,	// (0x00011a50) control_pane_g_ParamLimits

0xf774,	// (0x00011a50) control_pane_g

0xa705,	// (0x0000c9e1) control_pane_t1_ParamLimits

0xa705,	// (0x0000c9e1) control_pane_t1

0xa76b,	// (0x0000ca47) control_pane_t2_ParamLimits

0xa76b,	// (0x0000ca47) control_pane_t2

0x0002,

0xf785,	// (0x00011a61) control_pane_t_ParamLimits

0xf785,	// (0x00011a61) control_pane_t

0xa5cd,	// (0x0000c8a9) navi_navi_volume_pane_cp1

0xa5d5,	// (0x0000c8b1) status_small_icon_pane

0x0507,	// (0x000027e3) status_small_pane_g1_ParamLimits

0x0507,	// (0x000027e3) status_small_pane_g1

0xa5dd,	// (0x0000c8b9) status_small_pane_g2_ParamLimits

0xa5dd,	// (0x0000c8b9) status_small_pane_g2

0xa5e9,	// (0x0000c8c5) status_small_pane_g3_ParamLimits

0xa5e9,	// (0x0000c8c5) status_small_pane_g3

0xa5f5,	// (0x0000c8d1) status_small_pane_g4_ParamLimits

0xa5f5,	// (0x0000c8d1) status_small_pane_g4

0xa601,	// (0x0000c8dd) status_small_pane_g5_ParamLimits

0xa601,	// (0x0000c8dd) status_small_pane_g5

0xa60f,	// (0x0000c8eb) status_small_pane_g6_ParamLimits

0xa60f,	// (0x0000c8eb) status_small_pane_g6

0x0007,

0xf763,	// (0x00011a3f) status_small_pane_g_ParamLimits

0xf763,	// (0x00011a3f) status_small_pane_g

0xa63e,	// (0x0000c91a) status_small_pane_t1

0xa660,	// (0x0000c93c) status_small_wait_pane_ParamLimits

0xa660,	// (0x0000c93c) status_small_wait_pane

0xa2a9,	// (0x0000c585) aid_levels_signal_ParamLimits

0xa2a9,	// (0x0000c585) aid_levels_signal

0xa2c1,	// (0x0000c59d) signal_pane_g1_ParamLimits

0xa2c1,	// (0x0000c59d) signal_pane_g1

0xa2dc,	// (0x0000c5b8) signal_pane_g2_ParamLimits

0xa2dc,	// (0x0000c5b8) signal_pane_g2

0x0003,

0xf6f4,	// (0x000119d0) signal_pane_g_ParamLimits

0xf6f4,	// (0x000119d0) signal_pane_g

0xf1f5,	// (0x000114d1) context_pane_g1

0x949b,	// (0x0000b777) title_pane_g1

0x94d2,	// (0x0000b7ae) title_pane_t1

0xe63f,	// (0x0001091b) title_pane_t2

0xe665,	// (0x00010941) title_pane_t3

0x0002,

0xf557,	// (0x00011833) title_pane_t

0xb374,	// (0x0000d650) aid_levels_battery_ParamLimits

0xb374,	// (0x0000d650) aid_levels_battery

0xb390,	// (0x0000d66c) battery_pane_g1_ParamLimits

0xb390,	// (0x0000d66c) battery_pane_g1

0xb3ad,	// (0x0000d689) battery_pane_g2_ParamLimits

0xb3ad,	// (0x0000d689) battery_pane_g2

0x0001,

0xf797,	// (0x00011a73) battery_pane_g_ParamLimits

0xf797,	// (0x00011a73) battery_pane_g

0xba3a,	// (0x0000dd16) uni_indicator_pane_g1

0xba50,	// (0x0000dd2c) uni_indicator_pane_g2

0xba66,	// (0x0000dd42) uni_indicator_pane_g3

0x0005,

0xf901,	// (0x00011bdd) uni_indicator_pane_g

0x00d8,	// (0x000023b4) navi_icon_pane_ParamLimits

0x00d8,	// (0x000023b4) navi_icon_pane

0x0022,	// (0x000022fe) navi_midp_pane

0x00f4,	// (0x000023d0) navi_navi_pane

0x00fe,	// (0x000023da) navi_text_pane_ParamLimits

0x00fe,	// (0x000023da) navi_text_pane

0xe490,	// (0x0001076c) status_small_wait_pane_g1

0xe8d0,	// (0x00010bac) status_small_wait_pane_g2

0x0001,

0xf8fc,	// (0x00011bd8) status_small_wait_pane_g

0xb993,	// (0x0000dc6f) navi_navi_icon_text_pane

0x252c,	// (0x00004808) navi_navi_pane_g1_ParamLimits

0x252c,	// (0x00004808) navi_navi_pane_g1

0x253e,	// (0x0000481a) navi_navi_pane_g2_ParamLimits

0x253e,	// (0x0000481a) navi_navi_pane_g2

0x0001,

0xf8ca,	// (0x00011ba6) navi_navi_pane_g_ParamLimits

0xf8ca,	// (0x00011ba6) navi_navi_pane_g

0x2550,	// (0x0000482c) navi_navi_tabs_pane

0x2559,	// (0x00004835) navi_navi_text_pane

0xb993,	// (0x0000dc6f) navi_navi_volume_pane

0x2500,	// (0x000047dc) navi_text_pane_t1

0x24f4,	// (0x000047d0) navi_icon_pane_g1

0x2447,	// (0x00004723) navi_navi_text_pane_t1

0xb97f,	// (0x0000dc5b) navi_navi_volume_pane_g1

0x243e,	// (0x0000471a) volume_small_pane

0x239c,	// (0x00004678) navi_navi_icon_text_pane_g1

0xb8e3,	// (0x0000dbbf) navi_navi_icon_text_pane_t1

0x00f4,	// (0x000023d0) navi_tabs_2_long_pane

0x00f4,	// (0x000023d0) navi_tabs_2_pane

0x00f4,	// (0x000023d0) navi_tabs_3_long_pane

0x00f4,	// (0x000023d0) navi_tabs_3_pane

0x00f4,	// (0x000023d0) navi_tabs_4_pane

0x22fb,	// (0x000045d7) tabs_2_active_pane_ParamLimits

0x22fb,	// (0x000045d7) tabs_2_active_pane

0x230b,	// (0x000045e7) tabs_2_passive_pane_ParamLimits

0x230b,	// (0x000045e7) tabs_2_passive_pane

0x22c9,	// (0x000045a5) tabs_3_active_pane_ParamLimits

0x22c9,	// (0x000045a5) tabs_3_active_pane

0x22d9,	// (0x000045b5) tabs_3_passive_pane_ParamLimits

0x22d9,	// (0x000045b5) tabs_3_passive_pane

0x22ea,	// (0x000045c6) tabs_3_passive_pane_cp_ParamLimits

0x22ea,	// (0x000045c6) tabs_3_passive_pane_cp

0x2285,	// (0x00004561) tabs_4_active_pane_ParamLimits

0x2285,	// (0x00004561) tabs_4_active_pane

0x2296,	// (0x00004572) tabs_4_passive_pane_ParamLimits

0x2296,	// (0x00004572) tabs_4_passive_pane

0x22a7,	// (0x00004583) tabs_4_passive_pane_cp_ParamLimits

0x22a7,	// (0x00004583) tabs_4_passive_pane_cp

0x22b8,	// (0x00004594) tabs_4_passive_pane_cp2_ParamLimits

0x22b8,	// (0x00004594) tabs_4_passive_pane_cp2

0x2261,	// (0x0000453d) tabs_2_long_active_pane_ParamLimits

0x2261,	// (0x0000453d) tabs_2_long_active_pane

0x2273,	// (0x0000454f) tabs_2_long_passive_pane_ParamLimits

0x2273,	// (0x0000454f) tabs_2_long_passive_pane

0x221c,	// (0x000044f8) tabs_3_long_active_pane_ParamLimits

0x221c,	// (0x000044f8) tabs_3_long_active_pane

0x2235,	// (0x00004511) tabs_3_long_passive_pane_ParamLimits

0x2235,	// (0x00004511) tabs_3_long_passive_pane

0x2248,	// (0x00004524) tabs_3_long_passive_pane_cp_ParamLimits

0x2248,	// (0x00004524) tabs_3_long_passive_pane_cp

0x21c2,	// (0x0000449e) volume_small_pane_g1

0x21cb,	// (0x000044a7) volume_small_pane_g2

0x21d4,	// (0x000044b0) volume_small_pane_g3

0x21dd,	// (0x000044b9) volume_small_pane_g4

0x21e6,	// (0x000044c2) volume_small_pane_g5

0x21ef,	// (0x000044cb) volume_small_pane_g6

0x21f8,	// (0x000044d4) volume_small_pane_g7

0x2201,	// (0x000044dd) volume_small_pane_g8

0x220a,	// (0x000044e6) volume_small_pane_g9

0x2213,	// (0x000044ef) volume_small_pane_g10

0x0009,

0xf896,	// (0x00011b72) volume_small_pane_g

0xe677,	// (0x00010953) bg_active_tab_pane_cp2_ParamLimits

0xe677,	// (0x00010953) bg_active_tab_pane_cp2

0x955e,	// (0x0000b83a) tabs_3_active_pane_g1

0x9566,	// (0x0000b842) tabs_3_active_pane_t1

0xe677,	// (0x00010953) bg_passive_tab_pane_cp2_ParamLimits

0xe677,	// (0x00010953) bg_passive_tab_pane_cp2

0x955e,	// (0x0000b83a) tabs_3_passive_pane_g1

0x9566,	// (0x0000b842) tabs_3_passive_pane_t1

0xe677,	// (0x00010953) bg_active_tab_pane_cp3_ParamLimits

0xe677,	// (0x00010953) bg_active_tab_pane_cp3

0x9578,	// (0x0000b854) tabs_4_active_pane_g1

0x9580,	// (0x0000b85c) tabs_4_active_pane_t1

0xe677,	// (0x00010953) bg_passive_tab_pane_cp3_ParamLimits

0xe677,	// (0x00010953) bg_passive_tab_pane_cp3

0x9578,	// (0x0000b854) tabs_4_1_passive_pane_g1

0x9580,	// (0x0000b85c) tabs_4_1_passive_pane_t1

0x07ad,	// (0x00002a89) list_highlight_pane_cp2

0xbc3a,	// (0x0000df16) list_set_pane_ParamLimits

0xbc3a,	// (0x0000df16) list_set_pane

0xbcd4,	// (0x0000dfb0) main_pane_set_t1_ParamLimits

0xbcd4,	// (0x0000dfb0) main_pane_set_t1

0xbcf4,	// (0x0000dfd0) main_pane_set_t2_ParamLimits

0xbcf4,	// (0x0000dfd0) main_pane_set_t2

0xbd08,	// (0x0000dfe4) main_pane_set_t3_ParamLimits

0xbd08,	// (0x0000dfe4) main_pane_set_t3

0xbd1a,	// (0x0000dff6) main_pane_set_t4_ParamLimits

0xbd1a,	// (0x0000dff6) main_pane_set_t4

0x0003,

0xf966,	// (0x00011c42) main_pane_set_t_ParamLimits

0xf966,	// (0x00011c42) main_pane_set_t

0xbd2c,	// (0x0000e008) setting_code_pane

0xbd36,	// (0x0000e012) setting_slider_graphic_pane

0xbd36,	// (0x0000e012) setting_slider_pane

0xbd36,	// (0x0000e012) setting_text_pane

0xbd36,	// (0x0000e012) setting_volume_pane

0x9592,	// (0x0000b86e) volume_set_pane

0xe685,	// (0x00010961) bg_set_opt_pane_cp

0x959a,	// (0x0000b876) setting_slider_pane_t1

0x95b3,	// (0x0000b88f) setting_slider_pane_t2

0x95cd,	// (0x0000b8a9) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001183a) setting_slider_pane_t

0x95e5,	// (0x0000b8c1) slider_set_pane

0xe609,	// (0x000108e5) bg_set_opt_pane_cp2

0xe693,	// (0x0001096f) setting_slider_graphic_pane_g1

0x95fb,	// (0x0000b8d7) setting_slider_graphic_pane_t1

0x960b,	// (0x0000b8e7) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00011841) setting_slider_graphic_pane_t

0x961b,	// (0x0000b8f7) slider_set_pane_cp

0xe609,	// (0x000108e5) input_focus_pane_cp1

0x2afe,	// (0x00004dda) list_set_text_pane

0xe490,	// (0x0001076c) setting_text_pane_g1

0xe609,	// (0x000108e5) input_focus_pane_cp2

0xe490,	// (0x0001076c) setting_code_pane_g1

0xe69c,	// (0x00010978) setting_code_pane_t1

0xe6aa,	// (0x00010986) set_text_pane_t1_ParamLimits

0xe6aa,	// (0x00010986) set_text_pane_t1

0xeb81,	// (0x00010e5d) set_opt_bg_pane_g1

0xeb89,	// (0x00010e65) set_opt_bg_pane_g2

0xbbef,	// (0x0000decb) set_opt_bg_pane_g3

0xeb99,	// (0x00010e75) set_opt_bg_pane_g4

0xeba1,	// (0x00010e7d) set_opt_bg_pane_g5

0xeba9,	// (0x00010e85) set_opt_bg_pane_g6

0xbbf9,	// (0x0000ded5) set_opt_bg_pane_g7

0xbc01,	// (0x0000dedd) set_opt_bg_pane_g8

0xbc0b,	// (0x0000dee7) set_opt_bg_pane_g9

0x0008,

0xf953,	// (0x00011c2f) set_opt_bg_pane_g

0xbb8a,	// (0x0000de66) slider_set_pane_g1

0x2a74,	// (0x00004d50) slider_set_pane_g2

0x0006,

0xf944,	// (0x00011c20) slider_set_pane_g

0xba9d,	// (0x0000dd79) volume_set_pane_g1

0xbaa5,	// (0x0000dd81) volume_set_pane_g2

0xbaad,	// (0x0000dd89) volume_set_pane_g3

0xbab5,	// (0x0000dd91) volume_set_pane_g4

0xbabd,	// (0x0000dd99) volume_set_pane_g5

0xbac5,	// (0x0000dda1) volume_set_pane_g6

0xbacd,	// (0x0000dda9) volume_set_pane_g7

0xbad5,	// (0x0000ddb1) volume_set_pane_g8

0xbadd,	// (0x0000ddb9) volume_set_pane_g9

0xbae5,	// (0x0000ddc1) volume_set_pane_g10

0x0009,

0xf91c,	// (0x00011bf8) volume_set_pane_g

0x9623,	// (0x0000b8ff) indicator_pane_ParamLimits

0x9623,	// (0x0000b8ff) indicator_pane

0x964b,	// (0x0000b927) main_idle_pane_g2_ParamLimits

0x964b,	// (0x0000b927) main_idle_pane_g2

0x9683,	// (0x0000b95f) main_pane_idle_g1_ParamLimits

0x9683,	// (0x0000b95f) main_pane_idle_g1

0xe6c4,	// (0x000109a0) popup_clock_digital_analogue_window_ParamLimits

0xe6c4,	// (0x000109a0) popup_clock_digital_analogue_window

0x96aa,	// (0x0000b986) soft_indicator_pane_ParamLimits

0x96aa,	// (0x0000b986) soft_indicator_pane

0x96ce,	// (0x0000b9aa) wallpaper_pane_ParamLimits

0x96ce,	// (0x0000b9aa) wallpaper_pane

0xe490,	// (0x0001076c) wallpaper_pane_g1

0x96e0,	// (0x0000b9bc) indicator_pane_g1_ParamLimits

0x96e0,	// (0x0000b9bc) indicator_pane_g1

0x306c,	// (0x00005348) navi_navi_icon_text_pane_srt_g1

0xe6f2,	// (0x000109ce) soft_indicator_pane_t1

0xe70c,	// (0x000109e8) aid_ps_area_pane

0x96f6,	// (0x0000b9d2) aid_ps_clock_pane

0xe71d,	// (0x000109f9) aid_ps_indicator_pane

0xe729,	// (0x00010a05) indicator_ps_pane_ParamLimits

0xe729,	// (0x00010a05) indicator_ps_pane

0xe738,	// (0x00010a14) power_save_pane_g1_ParamLimits

0xe738,	// (0x00010a14) power_save_pane_g1

0xe744,	// (0x00010a20) power_save_pane_g2_ParamLimits

0xe744,	// (0x00010a20) power_save_pane_g2

0xe49a,	// (0x00010776) aid_navinavi_width_pane

0xe70c,	// (0x000109e8) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00011846) power_save_pane_g_ParamLimits

0xf56a,	// (0x00011846) power_save_pane_g

0xe752,	// (0x00010a2e) power_save_pane_t1_ParamLimits

0xe752,	// (0x00010a2e) power_save_pane_t1

0x96f6,	// (0x0000b9d2) aid_ps_clock_pane_ParamLimits

0xe71d,	// (0x000109f9) aid_ps_indicator_pane_ParamLimits

0xe764,	// (0x00010a40) power_save_pane_t4_ParamLimits

0xe764,	// (0x00010a40) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001184b) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001184b) power_save_pane_t

0xe78e,	// (0x00010a6a) power_save_t3_ParamLimits

0xe78e,	// (0x00010a6a) power_save_t3

0xe779,	// (0x00010a55) power_save_t2_ParamLimits

0xe779,	// (0x00010a55) power_save_t2

0xe7a3,	// (0x00010a7f) indicator_ps_pane_g1

0x9704,	// (0x0000b9e0) ai_gene_pane_ParamLimits

0x9704,	// (0x0000b9e0) ai_gene_pane

0x971b,	// (0x0000b9f7) ai_links_pane_ParamLimits

0x971b,	// (0x0000b9f7) ai_links_pane

0x9733,	// (0x0000ba0f) indicator_pane_cp1_ParamLimits

0x9733,	// (0x0000ba0f) indicator_pane_cp1

0x9742,	// (0x0000ba1e) main_pane_idle_g1_cp_ParamLimits

0x9742,	// (0x0000ba1e) main_pane_idle_g1_cp

0x975a,	// (0x0000ba36) popup_ai_links_title_window

0x9763,	// (0x0000ba3f) soft_indicator_pane_cp1_ParamLimits

0x9763,	// (0x0000ba3f) soft_indicator_pane_cp1

0x27eb,	// (0x00004ac7) ai_links_pane_g1

0x27f4,	// (0x00004ad0) grid_ai_links_pane

0xba31,	// (0x0000dd0d) ai_gene_pane_1

0x27d9,	// (0x00004ab5) ai_gene_pane_2

0x27e2,	// (0x00004abe) list_highlight_pane_cp4

0xba0d,	// (0x0000dce9) cell_ai_link_pane_ParamLimits

0xba0d,	// (0x0000dce9) cell_ai_link_pane

0x27aa,	// (0x00004a86) cell_ai_link_pane_g1

0xe8d0,	// (0x00010bac) cell_ai_link_pane_g2

0x0001,

0xf8f7,	// (0x00011bd3) cell_ai_link_pane_g

0xe609,	// (0x000108e5) grid_highlight_cp2

0xe609,	// (0x000108e5) bg_popup_sub_pane_cp1

0xe7ba,	// (0x00010a96) popup_ai_links_title_window_t1

0x26fa,	// (0x000049d6) ai_gene_pane_1_g1_ParamLimits

0x26fa,	// (0x000049d6) ai_gene_pane_1_g1

0x2706,	// (0x000049e2) ai_gene_pane_1_g2_ParamLimits

0x2706,	// (0x000049e2) ai_gene_pane_1_g2

0x0001,

0xf8ed,	// (0x00011bc9) ai_gene_pane_1_g_ParamLimits

0xf8ed,	// (0x00011bc9) ai_gene_pane_1_g

0x2713,	// (0x000049ef) ai_gene_pane_1_t1_ParamLimits

0x2713,	// (0x000049ef) ai_gene_pane_1_t1

0x2747,	// (0x00004a23) grid_ai_soft_ind_pane

0x26e5,	// (0x000049c1) ai_gene_pane_2_t1_ParamLimits

0x26e5,	// (0x000049c1) ai_gene_pane_2_t1

0x9777,	// (0x0000ba53) main_pane_empty_t1_ParamLimits

0x9777,	// (0x0000ba53) main_pane_empty_t1

0x978f,	// (0x0000ba6b) main_pane_empty_t2_ParamLimits

0x978f,	// (0x0000ba6b) main_pane_empty_t2

0x97a4,	// (0x0000ba80) main_pane_empty_t3_ParamLimits

0x97a4,	// (0x0000ba80) main_pane_empty_t3

0x97b6,	// (0x0000ba92) main_pane_empty_t4_ParamLimits

0x97b6,	// (0x0000ba92) main_pane_empty_t4

0x97c8,	// (0x0000baa4) main_pane_empty_t5_ParamLimits

0x97c8,	// (0x0000baa4) main_pane_empty_t5

0x0004,

0xf574,	// (0x00011850) main_pane_empty_t_ParamLimits

0xf574,	// (0x00011850) main_pane_empty_t

0xebd2,	// (0x00010eae) bg_popup_window_pane_ParamLimits

0xebd2,	// (0x00010eae) bg_popup_window_pane

0xb987,	// (0x0000dc63) find_popup_pane_cp2_ParamLimits

0xb987,	// (0x0000dc63) find_popup_pane_cp2

0x2461,	// (0x0000473d) heading_pane_ParamLimits

0x2461,	// (0x0000473d) heading_pane

0xe609,	// (0x000108e5) bg_popup_sub_pane

0xb900,	// (0x0000dbdc) bg_popup_window_pane_g1_ParamLimits

0xb900,	// (0x0000dbdc) bg_popup_window_pane_g1

0xb90f,	// (0x0000dbeb) bg_popup_window_pane_g2_ParamLimits

0xb90f,	// (0x0000dbeb) bg_popup_window_pane_g2

0xb91b,	// (0x0000dbf7) bg_popup_window_pane_g3_ParamLimits

0xb91b,	// (0x0000dbf7) bg_popup_window_pane_g3

0xb927,	// (0x0000dc03) bg_popup_window_pane_g4_ParamLimits

0xb927,	// (0x0000dc03) bg_popup_window_pane_g4

0xb936,	// (0x0000dc12) bg_popup_window_pane_g5_ParamLimits

0xb936,	// (0x0000dc12) bg_popup_window_pane_g5

0xb946,	// (0x0000dc22) bg_popup_window_pane_g6_ParamLimits

0xb946,	// (0x0000dc22) bg_popup_window_pane_g6

0xb952,	// (0x0000dc2e) bg_popup_window_pane_g7_ParamLimits

0xb952,	// (0x0000dc2e) bg_popup_window_pane_g7

0xb961,	// (0x0000dc3d) bg_popup_window_pane_g8_ParamLimits

0xb961,	// (0x0000dc3d) bg_popup_window_pane_g8

0xb970,	// (0x0000dc4c) bg_popup_window_pane_g9_ParamLimits

0xb970,	// (0x0000dc4c) bg_popup_window_pane_g9

0x242a,	// (0x00004706) bg_popup_window_pane_g10_ParamLimits

0x242a,	// (0x00004706) bg_popup_window_pane_g10

0x0009,

0xf8b5,	// (0x00011b91) bg_popup_window_pane_g_ParamLimits

0xf8b5,	// (0x00011b91) bg_popup_window_pane_g

0x2353,	// (0x0000462f) bg_popup_heading_pane_ParamLimits

0x2353,	// (0x0000462f) bg_popup_heading_pane

0x2faf,	// (0x0000528b) tabs_4_passive_pane_cp_srt_ParamLimits

0x2faf,	// (0x0000528b) tabs_4_passive_pane_cp_srt

0x2fc1,	// (0x0000529d) tabs_4_passive_pane_srt_ParamLimits

0x2367,	// (0x00004643) heading_pane_g2

0x2fc1,	// (0x0000529d) tabs_4_passive_pane_srt

0x14c3,	// (0x0000379f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x14c3,	// (0x0000379f) bg_passive_tab_pane_cp3_srt

0x236f,	// (0x0000464b) heading_pane_t1_ParamLimits

0x236f,	// (0x0000464b) heading_pane_t1

0x2386,	// (0x00004662) heading_pane_t2_ParamLimits

0x2386,	// (0x00004662) heading_pane_t2

0x0001,

0xf8b0,	// (0x00011b8c) heading_pane_t_ParamLimits

0xf8b0,	// (0x00011b8c) heading_pane_t

0x1d37,	// (0x00004013) bg_popup_heading_pane_g1

0x1de6,	// (0x000040c2) bg_popup_heading_pane_g2

0x1df0,	// (0x000040cc) bg_popup_heading_pane_g3

0x1dfa,	// (0x000040d6) bg_popup_heading_pane_g4

0x1e04,	// (0x000040e0) bg_popup_heading_pane_g5

0x1e0e,	// (0x000040ea) bg_popup_heading_pane_g6

0x1e16,	// (0x000040f2) bg_popup_heading_pane_g7

0x1e1e,	// (0x000040fa) bg_popup_heading_pane_g8

0x1e28,	// (0x00004104) bg_popup_heading_pane_g9

0x0008,

0xf86c,	// (0x00011b48) bg_popup_heading_pane_g

0x1337,	// (0x00003613) bg_popup_sub_pane_g1

0x133f,	// (0x0000361b) bg_popup_sub_pane_g2

0x1347,	// (0x00003623) bg_popup_sub_pane_g3

0x134f,	// (0x0000362b) bg_popup_sub_pane_g4

0x1357,	// (0x00003633) bg_popup_sub_pane_g5

0x135f,	// (0x0000363b) bg_popup_sub_pane_g6

0x1367,	// (0x00003643) bg_popup_sub_pane_g7

0x136f,	// (0x0000364b) bg_popup_sub_pane_g8

0x1377,	// (0x00003653) bg_popup_sub_pane_g9

0x0008,

0xf846,	// (0x00011b22) bg_popup_sub_pane_g

0xe677,	// (0x00010953) bg_popup_window_pane_cp5_ParamLimits

0xe677,	// (0x00010953) bg_popup_window_pane_cp5

0xe7d7,	// (0x00010ab3) popup_note_window_g1_ParamLimits

0xe7d7,	// (0x00010ab3) popup_note_window_g1

0xe7e3,	// (0x00010abf) popup_note_window_t1_ParamLimits

0xe7e3,	// (0x00010abf) popup_note_window_t1

0xe7f9,	// (0x00010ad5) popup_note_window_t2_ParamLimits

0xe7f9,	// (0x00010ad5) popup_note_window_t2

0xe80f,	// (0x00010aeb) popup_note_window_t3_ParamLimits

0xe80f,	// (0x00010aeb) popup_note_window_t3

0xe825,	// (0x00010b01) popup_note_window_t4_ParamLimits

0xe825,	// (0x00010b01) popup_note_window_t4

0xe84d,	// (0x00010b29) popup_note_window_t5_ParamLimits

0xe84d,	// (0x00010b29) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001185b) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001185b) popup_note_window_t

0xe871,	// (0x00010b4d) bg_popup_window_pane_cp6_ParamLimits

0xe871,	// (0x00010b4d) bg_popup_window_pane_cp6

0x1cb3,	// (0x00003f8f) popup_note_image_window_g1_ParamLimits

0x1cb3,	// (0x00003f8f) popup_note_image_window_g1

0xb7a5,	// (0x0000da81) popup_note_image_window_g2_ParamLimits

0xb7a5,	// (0x0000da81) popup_note_image_window_g2

0x0001,

0xf83a,	// (0x00011b16) popup_note_image_window_g_ParamLimits

0xf83a,	// (0x00011b16) popup_note_image_window_g

0x1cd8,	// (0x00003fb4) popup_note_image_window_t1_ParamLimits

0x1cd8,	// (0x00003fb4) popup_note_image_window_t1

0x1cf1,	// (0x00003fcd) popup_note_image_window_t2_ParamLimits

0x1cf1,	// (0x00003fcd) popup_note_image_window_t2

0x1d0a,	// (0x00003fe6) popup_note_image_window_t3_ParamLimits

0x1d0a,	// (0x00003fe6) popup_note_image_window_t3

0x0002,

0xf83f,	// (0x00011b1b) popup_note_image_window_t_ParamLimits

0xf83f,	// (0x00011b1b) popup_note_image_window_t

0x1b7c,	// (0x00003e58) bg_popup_window_pane_cp7_ParamLimits

0x1b7c,	// (0x00003e58) bg_popup_window_pane_cp7

0x1bac,	// (0x00003e88) popup_note_wait_window_g1_ParamLimits

0x1bac,	// (0x00003e88) popup_note_wait_window_g1

0x1bb8,	// (0x00003e94) popup_note_wait_window_g2_ParamLimits

0x1bb8,	// (0x00003e94) popup_note_wait_window_g2

0x0002,

0xf828,	// (0x00011b04) popup_note_wait_window_g_ParamLimits

0xf828,	// (0x00011b04) popup_note_wait_window_g

0x1bd0,	// (0x00003eac) popup_note_wait_window_t1_ParamLimits

0x1bd0,	// (0x00003eac) popup_note_wait_window_t1

0xb746,	// (0x0000da22) popup_note_wait_window_t2_ParamLimits

0xb746,	// (0x0000da22) popup_note_wait_window_t2

0xb763,	// (0x0000da3f) popup_note_wait_window_t3_ParamLimits

0xb763,	// (0x0000da3f) popup_note_wait_window_t3

0xb776,	// (0x0000da52) popup_note_wait_window_t4_ParamLimits

0xb776,	// (0x0000da52) popup_note_wait_window_t4

0x0004,

0xf82f,	// (0x00011b0b) popup_note_wait_window_t_ParamLimits

0xf82f,	// (0x00011b0b) popup_note_wait_window_t

0x1c4c,	// (0x00003f28) wait_bar_pane_ParamLimits

0x1c4c,	// (0x00003f28) wait_bar_pane

0xe609,	// (0x000108e5) wait_anim_pane

0xe609,	// (0x000108e5) wait_border_pane

0xe490,	// (0x0001076c) wait_anim_pane_g1

0xe490,	// (0x0001076c) wait_anim_pane_g2

0x0001,

0xf6ef,	// (0x000119cb) wait_anim_pane_g

0x1b28,	// (0x00003e04) wait_border_pane_g1

0x1b33,	// (0x00003e0f) wait_border_pane_g2

0x1b3c,	// (0x00003e18) wait_border_pane_g3

0x0002,

0xf821,	// (0x00011afd) wait_border_pane_g

0x1993,	// (0x00003c6f) bg_popup_window_pane_cp16_ParamLimits

0x1993,	// (0x00003c6f) bg_popup_window_pane_cp16

0xb6f6,	// (0x0000d9d2) indicator_popup_pane_cp4_ParamLimits

0xb6f6,	// (0x0000d9d2) indicator_popup_pane_cp4

0x1aa7,	// (0x00003d83) popup_query_data_window_t1_ParamLimits

0x1aa7,	// (0x00003d83) popup_query_data_window_t1

0x1ab9,	// (0x00003d95) popup_query_data_window_t2_ParamLimits

0x1ab9,	// (0x00003d95) popup_query_data_window_t2

0x1ad2,	// (0x00003dae) popup_query_data_window_t3_ParamLimits

0x1ad2,	// (0x00003dae) popup_query_data_window_t3

0x0002,

0xf81a,	// (0x00011af6) popup_query_data_window_t_ParamLimits

0xf81a,	// (0x00011af6) popup_query_data_window_t

0xb70a,	// (0x0000d9e6) query_popup_data_pane_ParamLimits

0xb70a,	// (0x0000d9e6) query_popup_data_pane

0xb71e,	// (0x0000d9fa) query_popup_data_pane_cp1_ParamLimits

0xb71e,	// (0x0000d9fa) query_popup_data_pane_cp1

0x1993,	// (0x00003c6f) bg_popup_window_pane_cp10_ParamLimits

0x1993,	// (0x00003c6f) bg_popup_window_pane_cp10

0xb671,	// (0x0000d94d) indicator_popup_pane_ParamLimits

0xb671,	// (0x0000d94d) indicator_popup_pane

0xb693,	// (0x0000d96f) popup_query_code_window_t1_ParamLimits

0xb693,	// (0x0000d96f) popup_query_code_window_t1

0xb6ad,	// (0x0000d989) popup_query_code_window_t2_ParamLimits

0xb6ad,	// (0x0000d989) popup_query_code_window_t2

0x1a4a,	// (0x00003d26) popup_query_code_window_t3_ParamLimits

0x1a4a,	// (0x00003d26) popup_query_code_window_t3

0x0002,

0xf813,	// (0x00011aef) popup_query_code_window_t_ParamLimits

0xf813,	// (0x00011aef) popup_query_code_window_t

0x1a79,	// (0x00003d55) query_popup_pane_ParamLimits

0x1a79,	// (0x00003d55) query_popup_pane

0xe871,	// (0x00010b4d) bg_popup_window_pane_cp15_ParamLimits

0xe871,	// (0x00010b4d) bg_popup_window_pane_cp15

0x9800,	// (0x0000badc) indicator_popup_pane_cp1_ParamLimits

0x9800,	// (0x0000badc) indicator_popup_pane_cp1

0x9813,	// (0x0000baef) indicator_popup_pane_cp2_ParamLimits

0x9813,	// (0x0000baef) indicator_popup_pane_cp2

0x9826,	// (0x0000bb02) popup_query_data_code_window_g1_ParamLimits

0x9826,	// (0x0000bb02) popup_query_data_code_window_g1

0xe88f,	// (0x00010b6b) popup_query_data_code_window_t1_ParamLimits

0xe88f,	// (0x00010b6b) popup_query_data_code_window_t1

0xe8a1,	// (0x00010b7d) popup_query_data_code_window_t2_ParamLimits

0xe8a1,	// (0x00010b7d) popup_query_data_code_window_t2

0x9839,	// (0x0000bb15) popup_query_data_code_window_t3_ParamLimits

0x9839,	// (0x0000bb15) popup_query_data_code_window_t3

0x984f,	// (0x0000bb2b) popup_query_data_code_window_t4_ParamLimits

0x984f,	// (0x0000bb2b) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00011866) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00011866) popup_query_data_code_window_t

0x0096,	// (0x00002372) list_single_midp_graphic_pane_g3

0x9867,	// (0x0000bb43) query_popup_data_pane_cp2_ParamLimits

0x987a,	// (0x0000bb56) query_popup_pane_cp2_ParamLimits

0x987a,	// (0x0000bb56) query_popup_pane_cp2

0xe609,	// (0x000108e5) bg_popup_window_pane_cp11

0x197f,	// (0x00003c5b) heading_pane_cp5

0xe8fd,	// (0x00010bd9) listscroll_popup_info_pane

0xe609,	// (0x000108e5) input_focus_pane_cp3

0xe8b3,	// (0x00010b8f) query_popup_pane_t1

0xe8c1,	// (0x00010b9d) list_popup_info_pane_ParamLimits

0xe8c1,	// (0x00010b9d) list_popup_info_pane

0xe8d0,	// (0x00010bac) listscroll_popup_info_pane_g1

0xe8d8,	// (0x00010bb4) scroll_pane_cp7

0x988d,	// (0x0000bb69) popup_info_list_pane_t1_ParamLimits

0x988d,	// (0x0000bb69) popup_info_list_pane_t1

0x98a7,	// (0x0000bb83) popup_info_list_pane_t2_ParamLimits

0x98a7,	// (0x0000bb83) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001186f) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001186f) popup_info_list_pane_t

0xe609,	// (0x000108e5) bg_popup_window_pane_cp12

0xbf9d,	// (0x0000e279) find_popup_pane

0xe685,	// (0x00010961) bg_popup_window_pane_cp3

0xe8e2,	// (0x00010bbe) heading_pane_cp3

0xe8ee,	// (0x00010bca) listscroll_popup_graphic_pane

0xe609,	// (0x000108e5) bg_popup_window_pane_cp4

0x9911,	// (0x0000bbed) heading_pane_cp4

0xe8fd,	// (0x00010bd9) listscroll_popup_colour_pane

0x9919,	// (0x0000bbf5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9919,	// (0x0000bbf5) cell_large_graphic_colour_none_popup_pane

0x992d,	// (0x0000bc09) grid_large_graphic_colour_popup_pane_ParamLimits

0x992d,	// (0x0000bc09) grid_large_graphic_colour_popup_pane

0x9951,	// (0x0000bc2d) listscroll_popup_colour_pane_g1_ParamLimits

0x9951,	// (0x0000bc2d) listscroll_popup_colour_pane_g1

0x9968,	// (0x0000bc44) listscroll_popup_colour_pane_g2_ParamLimits

0x9968,	// (0x0000bc44) listscroll_popup_colour_pane_g2

0x997f,	// (0x0000bc5b) listscroll_popup_colour_pane_g3_ParamLimits

0x997f,	// (0x0000bc5b) listscroll_popup_colour_pane_g3

0x998f,	// (0x0000bc6b) listscroll_popup_colour_pane_g4_ParamLimits

0x998f,	// (0x0000bc6b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00011874) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00011874) listscroll_popup_colour_pane_g

0xe905,	// (0x00010be1) scroll_pane_cp6_ParamLimits

0xe905,	// (0x00010be1) scroll_pane_cp6

0x999f,	// (0x0000bc7b) cell_large_graphic_colour_popup_pane_ParamLimits

0x999f,	// (0x0000bc7b) cell_large_graphic_colour_popup_pane

0x99be,	// (0x0000bc9a) cell_large_graphic_colour_none_popup_pane_t1

0xe609,	// (0x000108e5) grid_highlight_pane_cp5

0xe917,	// (0x00010bf3) cell_large_graphic_colour_popup_pane_g1

0xe91f,	// (0x00010bfb) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001187d) cell_large_graphic_colour_popup_pane_g

0xe927,	// (0x00010c03) cell_large_graphic_colour_popup_pane_g2_copy1

0xe930,	// (0x00010c0c) grid_highlight_pane_cp4

0xe938,	// (0x00010c14) bg_popup_window_pane_cp8_ParamLimits

0xe938,	// (0x00010c14) bg_popup_window_pane_cp8

0x99cd,	// (0x0000bca9) popup_snote_single_text_window_g1_ParamLimits

0x99cd,	// (0x0000bca9) popup_snote_single_text_window_g1

0x99df,	// (0x0000bcbb) popup_snote_single_text_window_t1_ParamLimits

0x99df,	// (0x0000bcbb) popup_snote_single_text_window_t1

0x99f2,	// (0x0000bcce) popup_snote_single_text_window_t2_ParamLimits

0x99f2,	// (0x0000bcce) popup_snote_single_text_window_t2

0x9a05,	// (0x0000bce1) popup_snote_single_text_window_t3_ParamLimits

0x9a05,	// (0x0000bce1) popup_snote_single_text_window_t3

0x9a3e,	// (0x0000bd1a) popup_snote_single_text_window_t4_ParamLimits

0x9a3e,	// (0x0000bd1a) popup_snote_single_text_window_t4

0x9a72,	// (0x0000bd4e) popup_snote_single_text_window_t5_ParamLimits

0x9a72,	// (0x0000bd4e) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00011882) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00011882) popup_snote_single_text_window_t

0xe953,	// (0x00010c2f) bg_popup_window_pane_cp9_ParamLimits

0xe953,	// (0x00010c2f) bg_popup_window_pane_cp9

0x99cd,	// (0x0000bca9) popup_snote_single_graphic_window_g1_ParamLimits

0x99cd,	// (0x0000bca9) popup_snote_single_graphic_window_g1

0xe961,	// (0x00010c3d) popup_snote_single_graphic_window_g2_ParamLimits

0xe961,	// (0x00010c3d) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001188d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001188d) popup_snote_single_graphic_window_g

0xe96d,	// (0x00010c49) popup_snote_single_graphic_window_t1_ParamLimits

0xe96d,	// (0x00010c49) popup_snote_single_graphic_window_t1

0xe980,	// (0x00010c5c) popup_snote_single_graphic_window_t2_ParamLimits

0xe980,	// (0x00010c5c) popup_snote_single_graphic_window_t2

0x9a05,	// (0x0000bce1) popup_snote_single_graphic_window_t3_ParamLimits

0x9a05,	// (0x0000bce1) popup_snote_single_graphic_window_t3

0x9a3e,	// (0x0000bd1a) popup_snote_single_graphic_window_t4_ParamLimits

0x9a3e,	// (0x0000bd1a) popup_snote_single_graphic_window_t4

0x9aa1,	// (0x0000bd7d) popup_snote_single_graphic_window_t5_ParamLimits

0x9aa1,	// (0x0000bd7d) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00011892) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00011892) popup_snote_single_graphic_window_t

0x2f2d,	// (0x00005209) grid_graphic_popup_pane_ParamLimits

0x2f2d,	// (0x00005209) grid_graphic_popup_pane

0x2f57,	// (0x00005233) listscroll_popup_graphic_pane_g1_ParamLimits

0x2f57,	// (0x00005233) listscroll_popup_graphic_pane_g1

0xbee8,	// (0x0000e1c4) listscroll_popup_graphic_pane_g2_ParamLimits

0xbee8,	// (0x0000e1c4) listscroll_popup_graphic_pane_g2

0x0001,

0xf990,	// (0x00011c6c) listscroll_popup_graphic_pane_g_ParamLimits

0xf990,	// (0x00011c6c) listscroll_popup_graphic_pane_g

0x2f7f,	// (0x0000525b) scroll_pane_cp5

0xbe8d,	// (0x0000e169) cell_graphic_popup_pane_ParamLimits

0xbe8d,	// (0x0000e169) cell_graphic_popup_pane

0x2ead,	// (0x00005189) cell_graphic_popup_pane_g1

0x2eb5,	// (0x00005191) cell_graphic_popup_pane_g2

0xe927,	// (0x00010c03) cell_graphic_popup_pane_g3

0x0002,

0xf989,	// (0x00011c65) cell_graphic_popup_pane_g

0x2ebe,	// (0x0000519a) cell_graphic_popup_pane_t2

0xe930,	// (0x00010c0c) grid_highlight_pane_cp3

0xe9a5,	// (0x00010c81) list_gen_pane_ParamLimits

0xe9a5,	// (0x00010c81) list_gen_pane

0xe9cd,	// (0x00010ca9) scroll_pane

0xbdf7,	// (0x0000e0d3) bg_list_pane_g1_ParamLimits

0xbdf7,	// (0x0000e0d3) bg_list_pane_g1

0xbe12,	// (0x0000e0ee) bg_list_pane_g2_ParamLimits

0xbe12,	// (0x0000e0ee) bg_list_pane_g2

0xbe25,	// (0x0000e101) bg_list_pane_g3_ParamLimits

0xbe25,	// (0x0000e101) bg_list_pane_g3

0xbe37,	// (0x0000e113) bg_list_pane_g4_ParamLimits

0xbe37,	// (0x0000e113) bg_list_pane_g4

0xbe49,	// (0x0000e125) bg_list_pane_g5_ParamLimits

0xbe49,	// (0x0000e125) bg_list_pane_g5

0x0004,

0xf97e,	// (0x00011c5a) bg_list_pane_g_ParamLimits

0xf97e,	// (0x00011c5a) bg_list_pane_g

0xbd9b,	// (0x0000e077) list_double2_graphic_large_graphic_pane_ParamLimits

0xbd9b,	// (0x0000e077) list_double2_graphic_large_graphic_pane

0xbd9b,	// (0x0000e077) list_double2_graphic_pane_ParamLimits

0xbd9b,	// (0x0000e077) list_double2_graphic_pane

0xbd9b,	// (0x0000e077) list_double2_large_graphic_pane_ParamLimits

0xbd9b,	// (0x0000e077) list_double2_large_graphic_pane

0xbd9b,	// (0x0000e077) list_double2_pane_ParamLimits

0xbd9b,	// (0x0000e077) list_double2_pane

0xbd9b,	// (0x0000e077) list_double_graphic_heading_pane_ParamLimits

0xbd9b,	// (0x0000e077) list_double_graphic_heading_pane

0xbd9b,	// (0x0000e077) list_double_graphic_pane_ParamLimits

0xbd9b,	// (0x0000e077) list_double_graphic_pane

0xbd9b,	// (0x0000e077) list_double_heading_pane_ParamLimits

0xbd9b,	// (0x0000e077) list_double_heading_pane

0xbd9b,	// (0x0000e077) list_double_large_graphic_pane_ParamLimits

0xbd9b,	// (0x0000e077) list_double_large_graphic_pane

0xbd9b,	// (0x0000e077) list_double_number_pane_ParamLimits

0xbd9b,	// (0x0000e077) list_double_number_pane

0xbd9b,	// (0x0000e077) list_double_pane_ParamLimits

0xbd9b,	// (0x0000e077) list_double_pane

0xbd9b,	// (0x0000e077) list_double_time_pane_ParamLimits

0xbd9b,	// (0x0000e077) list_double_time_pane

0xbd9b,	// (0x0000e077) list_setting_number_pane_ParamLimits

0xbd9b,	// (0x0000e077) list_setting_number_pane

0xbd9b,	// (0x0000e077) list_setting_pane_ParamLimits

0xbd9b,	// (0x0000e077) list_setting_pane

0xbdad,	// (0x0000e089) list_single_2graphic_pane_ParamLimits

0xbdad,	// (0x0000e089) list_single_2graphic_pane

0xbdad,	// (0x0000e089) list_single_graphic_heading_pane_ParamLimits

0xbdad,	// (0x0000e089) list_single_graphic_heading_pane

0xbdad,	// (0x0000e089) list_single_graphic_pane_ParamLimits

0xbdad,	// (0x0000e089) list_single_graphic_pane

0xbdad,	// (0x0000e089) list_single_heading_pane_ParamLimits

0xbdad,	// (0x0000e089) list_single_heading_pane

0xbdad,	// (0x0000e089) list_single_large_graphic_pane_ParamLimits

0xbdad,	// (0x0000e089) list_single_large_graphic_pane

0xbdad,	// (0x0000e089) list_single_number_heading_pane_ParamLimits

0xbdad,	// (0x0000e089) list_single_number_heading_pane

0xbdad,	// (0x0000e089) list_single_number_pane_ParamLimits

0xbdad,	// (0x0000e089) list_single_number_pane

0xbdad,	// (0x0000e089) list_single_pane_ParamLimits

0xbdad,	// (0x0000e089) list_single_pane

0xe609,	// (0x000108e5) list_highlight_pane_cp1

0xea01,	// (0x00010cdd) list_single_pane_g1_ParamLimits

0xea01,	// (0x00010cdd) list_single_pane_g1

0xea0d,	// (0x00010ce9) list_single_pane_g2_ParamLimits

0xea0d,	// (0x00010ce9) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000118a4) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000118a4) list_single_pane_g

0xbd85,	// (0x0000e061) list_single_pane_t1_ParamLimits

0xbd85,	// (0x0000e061) list_single_pane_t1

0xea01,	// (0x00010cdd) list_single_number_pane_g1_ParamLimits

0xea01,	// (0x00010cdd) list_single_number_pane_g1

0xea0d,	// (0x00010ce9) list_single_number_pane_g2_ParamLimits

0xea0d,	// (0x00010ce9) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000118a4) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000118a4) list_single_number_pane_g

0x12c5,	// (0x000035a1) list_single_number_pane_t1_ParamLimits

0x12c5,	// (0x000035a1) list_single_number_pane_t1

0xbb25,	// (0x0000de01) list_single_number_pane_t2_ParamLimits

0xbb25,	// (0x0000de01) list_single_number_pane_t2

0x0001,

0xf93f,	// (0x00011c1b) list_single_number_pane_t_ParamLimits

0xf93f,	// (0x00011c1b) list_single_number_pane_t

0x12b9,	// (0x00003595) list_single_graphic_pane_g1_ParamLimits

0x12b9,	// (0x00003595) list_single_graphic_pane_g1

0xea01,	// (0x00010cdd) list_single_graphic_pane_g2_ParamLimits

0xea01,	// (0x00010cdd) list_single_graphic_pane_g2

0xea0d,	// (0x00010ce9) list_single_graphic_pane_g3_ParamLimits

0xea0d,	// (0x00010ce9) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001189d) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001189d) list_single_graphic_pane_g

0x12c5,	// (0x000035a1) list_single_graphic_pane_t1_ParamLimits

0x12c5,	// (0x000035a1) list_single_graphic_pane_t1

0xea01,	// (0x00010cdd) list_single_heading_pane_g1_ParamLimits

0xea01,	// (0x00010cdd) list_single_heading_pane_g1

0xea0d,	// (0x00010ce9) list_single_heading_pane_g2_ParamLimits

0xea0d,	// (0x00010ce9) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000118a4) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000118a4) list_single_heading_pane_g

0x9ada,	// (0x0000bdb6) list_single_heading_pane_t1_ParamLimits

0x9ada,	// (0x0000bdb6) list_single_heading_pane_t1

0x9af0,	// (0x0000bdcc) list_single_heading_pane_t2_ParamLimits

0x9af0,	// (0x0000bdcc) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000118a9) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000118a9) list_single_heading_pane_t

0xea01,	// (0x00010cdd) list_single_number_heading_pane_g1_ParamLimits

0xea01,	// (0x00010cdd) list_single_number_heading_pane_g1

0xea0d,	// (0x00010ce9) list_single_number_heading_pane_g2_ParamLimits

0xea0d,	// (0x00010ce9) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000118a4) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000118a4) list_single_number_heading_pane_g

0x9ada,	// (0x0000bdb6) list_single_number_heading_pane_t1_ParamLimits

0x9ada,	// (0x0000bdb6) list_single_number_heading_pane_t1

0x9b02,	// (0x0000bdde) list_single_number_heading_pane_t2_ParamLimits

0x9b02,	// (0x0000bdde) list_single_number_heading_pane_t2

0x9b14,	// (0x0000bdf0) list_single_number_heading_pane_t3_ParamLimits

0x9b14,	// (0x0000bdf0) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000118ae) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000118ae) list_single_number_heading_pane_t

0x9b26,	// (0x0000be02) list_single_graphic_heading_pane_g1_ParamLimits

0x9b26,	// (0x0000be02) list_single_graphic_heading_pane_g1

0x9b32,	// (0x0000be0e) list_single_graphic_heading_pane_g4_ParamLimits

0x9b32,	// (0x0000be0e) list_single_graphic_heading_pane_g4

0xea0d,	// (0x00010ce9) list_single_graphic_heading_pane_g5_ParamLimits

0xea0d,	// (0x00010ce9) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x000118b5) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x000118b5) list_single_graphic_heading_pane_g

0x9ada,	// (0x0000bdb6) list_single_graphic_heading_pane_t1_ParamLimits

0x9ada,	// (0x0000bdb6) list_single_graphic_heading_pane_t1

0x9b43,	// (0x0000be1f) list_single_graphic_heading_pane_t2_ParamLimits

0x9b43,	// (0x0000be1f) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x000118bc) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x000118bc) list_single_graphic_heading_pane_t

0x371d,	// (0x000059f9) list_single_large_graphic_pane_g1_ParamLimits

0x371d,	// (0x000059f9) list_single_large_graphic_pane_g1

0xea01,	// (0x00010cdd) list_single_large_graphic_pane_g2_ParamLimits

0xea01,	// (0x00010cdd) list_single_large_graphic_pane_g2

0xea0d,	// (0x00010ce9) list_single_large_graphic_pane_g3_ParamLimits

0xea0d,	// (0x00010ce9) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x000118c1) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000118c1) list_single_large_graphic_pane_g

0x1b33,	// (0x00003e0f) wait_border_pane_g2_copy1

0x9b55,	// (0x0000be31) list_single_large_graphic_pane_g4_cp2

0x12c5,	// (0x000035a1) list_single_large_graphic_pane_t1_ParamLimits

0x12c5,	// (0x000035a1) list_single_large_graphic_pane_t1

0x9b5d,	// (0x0000be39) list_double_pane_g1_ParamLimits

0x9b5d,	// (0x0000be39) list_double_pane_g1

0x9b69,	// (0x0000be45) list_double_pane_g2_ParamLimits

0x9b69,	// (0x0000be45) list_double_pane_g2

0x0001,

0xf5ec,	// (0x000118c8) list_double_pane_g_ParamLimits

0xf5ec,	// (0x000118c8) list_double_pane_g

0x9b75,	// (0x0000be51) list_double_pane_t1_ParamLimits

0x9b75,	// (0x0000be51) list_double_pane_t1

0x9b8b,	// (0x0000be67) list_double_pane_t2_ParamLimits

0x9b8b,	// (0x0000be67) list_double_pane_t2

0x0001,

0xf5f1,	// (0x000118cd) list_double_pane_t_ParamLimits

0xf5f1,	// (0x000118cd) list_double_pane_t

0x9b9d,	// (0x0000be79) list_double2_pane_g1_ParamLimits

0x9b9d,	// (0x0000be79) list_double2_pane_g1

0x9bae,	// (0x0000be8a) list_double2_pane_g2_ParamLimits

0x9bae,	// (0x0000be8a) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000118d2) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000118d2) list_double2_pane_g

0x9bba,	// (0x0000be96) list_double2_pane_t1_ParamLimits

0x9bba,	// (0x0000be96) list_double2_pane_t1

0x9bd0,	// (0x0000beac) list_double2_pane_t2_ParamLimits

0x9bd0,	// (0x0000beac) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000118d7) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000118d7) list_double2_pane_t

0x9b5d,	// (0x0000be39) list_double_number_pane_g1_ParamLimits

0x9b5d,	// (0x0000be39) list_double_number_pane_g1

0x9b69,	// (0x0000be45) list_double_number_pane_g2_ParamLimits

0x9b69,	// (0x0000be45) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x000118c8) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x000118c8) list_double_number_pane_g

0x9be2,	// (0x0000bebe) list_double_number_pane_t1_ParamLimits

0x9be2,	// (0x0000bebe) list_double_number_pane_t1

0x9bf4,	// (0x0000bed0) list_double_number_pane_t2_ParamLimits

0x9bf4,	// (0x0000bed0) list_double_number_pane_t2

0x9c0a,	// (0x0000bee6) list_double_number_pane_t3_ParamLimits

0x9c0a,	// (0x0000bee6) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000118dc) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000118dc) list_double_number_pane_t

0x9c1c,	// (0x0000bef8) list_double_graphic_pane_g1_ParamLimits

0x9c1c,	// (0x0000bef8) list_double_graphic_pane_g1

0x9c28,	// (0x0000bf04) list_double_graphic_pane_g2_ParamLimits

0x9c28,	// (0x0000bf04) list_double_graphic_pane_g2

0x9c37,	// (0x0000bf13) list_double_graphic_pane_g3_ParamLimits

0x9c37,	// (0x0000bf13) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x000118e3) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x000118e3) list_double_graphic_pane_g

0x9b75,	// (0x0000be51) list_double_graphic_pane_t1_ParamLimits

0x9b75,	// (0x0000be51) list_double_graphic_pane_t1

0x9b8b,	// (0x0000be67) list_double_graphic_pane_t2_ParamLimits

0x9b8b,	// (0x0000be67) list_double_graphic_pane_t2

0x0001,

0xf5f1,	// (0x000118cd) list_double_graphic_pane_t_ParamLimits

0xf5f1,	// (0x000118cd) list_double_graphic_pane_t

0x9c4f,	// (0x0000bf2b) list_double2_graphic_pane_g1_ParamLimits

0x9c4f,	// (0x0000bf2b) list_double2_graphic_pane_g1

0x4b62,	// (0x00006e3e) list_double2_graphic_pane_g2_ParamLimits

0x4b62,	// (0x00006e3e) list_double2_graphic_pane_g2

0x9bae,	// (0x0000be8a) list_double2_graphic_pane_g3_ParamLimits

0x9bae,	// (0x0000be8a) list_double2_graphic_pane_g3

0x0002,

0xf610,	// (0x000118ec) list_double2_graphic_pane_g_ParamLimits

0xf610,	// (0x000118ec) list_double2_graphic_pane_g

0x9c5b,	// (0x0000bf37) list_double2_graphic_pane_t1_ParamLimits

0x9c5b,	// (0x0000bf37) list_double2_graphic_pane_t1

0x9c71,	// (0x0000bf4d) list_double2_graphic_pane_t2_ParamLimits

0x9c71,	// (0x0000bf4d) list_double2_graphic_pane_t2

0x0001,

0xf617,	// (0x000118f3) list_double2_graphic_pane_t_ParamLimits

0xf617,	// (0x000118f3) list_double2_graphic_pane_t

0x9c83,	// (0x0000bf5f) list_double_large_graphic_pane_g1_ParamLimits

0x9c83,	// (0x0000bf5f) list_double_large_graphic_pane_g1

0x9ca2,	// (0x0000bf7e) list_double_large_graphic_pane_g2_ParamLimits

0x9ca2,	// (0x0000bf7e) list_double_large_graphic_pane_g2

0x9b69,	// (0x0000be45) list_double_large_graphic_pane_g3_ParamLimits

0x9b69,	// (0x0000be45) list_double_large_graphic_pane_g3

0x9cb3,	// (0x0000bf8f) list_double_large_graphic_pane_g4_ParamLimits

0x9cb3,	// (0x0000bf8f) list_double_large_graphic_pane_g4

0x0004,

0xf61c,	// (0x000118f8) list_double_large_graphic_pane_g_ParamLimits

0xf61c,	// (0x000118f8) list_double_large_graphic_pane_g

0x9cc6,	// (0x0000bfa2) list_double_large_graphic_pane_t1_ParamLimits

0x9cc6,	// (0x0000bfa2) list_double_large_graphic_pane_t1

0x9cdf,	// (0x0000bfbb) list_double_large_graphic_pane_t2_ParamLimits

0x9cdf,	// (0x0000bfbb) list_double_large_graphic_pane_t2

0x0001,

0xf627,	// (0x00011903) list_double_large_graphic_pane_t_ParamLimits

0xf627,	// (0x00011903) list_double_large_graphic_pane_t

0x9cf1,	// (0x0000bfcd) list_double2_large_graphic_pane_g1_ParamLimits

0x9cf1,	// (0x0000bfcd) list_double2_large_graphic_pane_g1

0x9b9d,	// (0x0000be79) list_double2_large_graphic_pane_g2_ParamLimits

0x9b9d,	// (0x0000be79) list_double2_large_graphic_pane_g2

0x9bae,	// (0x0000be8a) list_double2_large_graphic_pane_g3_ParamLimits

0x9bae,	// (0x0000be8a) list_double2_large_graphic_pane_g3

0x0002,

0xf62c,	// (0x00011908) list_double2_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00011908) list_double2_large_graphic_pane_g

0x9c5b,	// (0x0000bf37) list_double2_large_graphic_pane_t1_ParamLimits

0x9c5b,	// (0x0000bf37) list_double2_large_graphic_pane_t1

0x9c71,	// (0x0000bf4d) list_double2_large_graphic_pane_t2_ParamLimits

0x9c71,	// (0x0000bf4d) list_double2_large_graphic_pane_t2

0x0001,

0xf617,	// (0x000118f3) list_double2_large_graphic_pane_t_ParamLimits

0xf617,	// (0x000118f3) list_double2_large_graphic_pane_t

0x9cfd,	// (0x0000bfd9) list_double_heading_pane_g1_ParamLimits

0x9cfd,	// (0x0000bfd9) list_double_heading_pane_g1

0x9d0e,	// (0x0000bfea) list_double_heading_pane_g2_ParamLimits

0x9d0e,	// (0x0000bfea) list_double_heading_pane_g2

0x0001,

0xf633,	// (0x0001190f) list_double_heading_pane_g_ParamLimits

0xf633,	// (0x0001190f) list_double_heading_pane_g

0x9d1a,	// (0x0000bff6) list_double_heading_pane_t1_ParamLimits

0x9d1a,	// (0x0000bff6) list_double_heading_pane_t1

0x9d30,	// (0x0000c00c) list_double_heading_pane_t2_ParamLimits

0x9d30,	// (0x0000c00c) list_double_heading_pane_t2

0x0001,

0xf638,	// (0x00011914) list_double_heading_pane_t_ParamLimits

0xf638,	// (0x00011914) list_double_heading_pane_t

0x9d42,	// (0x0000c01e) list_double_graphic_heading_pane_g1_ParamLimits

0x9d42,	// (0x0000c01e) list_double_graphic_heading_pane_g1

0x9cfd,	// (0x0000bfd9) list_double_graphic_heading_pane_g2_ParamLimits

0x9cfd,	// (0x0000bfd9) list_double_graphic_heading_pane_g2

0x9d0e,	// (0x0000bfea) list_double_graphic_heading_pane_g3_ParamLimits

0x9d0e,	// (0x0000bfea) list_double_graphic_heading_pane_g3

0x0002,

0xf63d,	// (0x00011919) list_double_graphic_heading_pane_g_ParamLimits

0xf63d,	// (0x00011919) list_double_graphic_heading_pane_g

0x9d1a,	// (0x0000bff6) list_double_graphic_heading_pane_t1_ParamLimits

0x9d1a,	// (0x0000bff6) list_double_graphic_heading_pane_t1

0x9d30,	// (0x0000c00c) list_double_graphic_heading_pane_t2_ParamLimits

0x9d30,	// (0x0000c00c) list_double_graphic_heading_pane_t2

0x0001,

0xf638,	// (0x00011914) list_double_graphic_heading_pane_t_ParamLimits

0xf638,	// (0x00011914) list_double_graphic_heading_pane_t

0x9ca2,	// (0x0000bf7e) list_double_time_pane_g1_ParamLimits

0x9ca2,	// (0x0000bf7e) list_double_time_pane_g1

0x9b69,	// (0x0000be45) list_double_time_pane_g2_ParamLimits

0x9b69,	// (0x0000be45) list_double_time_pane_g2

0x0001,

0xf644,	// (0x00011920) list_double_time_pane_g_ParamLimits

0xf644,	// (0x00011920) list_double_time_pane_g

0x9d4e,	// (0x0000c02a) list_double_time_pane_t1_ParamLimits

0x9d4e,	// (0x0000c02a) list_double_time_pane_t1

0x9d64,	// (0x0000c040) list_double_time_pane_t2_ParamLimits

0x9d64,	// (0x0000c040) list_double_time_pane_t2

0x9d76,	// (0x0000c052) list_double_time_pane_t3_ParamLimits

0x9d76,	// (0x0000c052) list_double_time_pane_t3

0x9d88,	// (0x0000c064) list_double_time_pane_t4_ParamLimits

0x9d88,	// (0x0000c064) list_double_time_pane_t4

0x0003,

0xf649,	// (0x00011925) list_double_time_pane_t_ParamLimits

0xf649,	// (0x00011925) list_double_time_pane_t

0x4b62,	// (0x00006e3e) list_setting_pane_g1_ParamLimits

0x4b62,	// (0x00006e3e) list_setting_pane_g1

0x9bae,	// (0x0000be8a) list_setting_pane_g2_ParamLimits

0x9bae,	// (0x0000be8a) list_setting_pane_g2

0x0001,

0xf652,	// (0x0001192e) list_setting_pane_g_ParamLimits

0xf652,	// (0x0001192e) list_setting_pane_g

0x9d9a,	// (0x0000c076) list_setting_pane_t1_ParamLimits

0x9d9a,	// (0x0000c076) list_setting_pane_t1

0x9db1,	// (0x0000c08d) list_setting_pane_t2_ParamLimits

0x9db1,	// (0x0000c08d) list_setting_pane_t2

0x0002,

0xf657,	// (0x00011933) list_setting_pane_t_ParamLimits

0xf657,	// (0x00011933) list_setting_pane_t

0x9df0,	// (0x0000c0cc) set_value_pane_cp_ParamLimits

0x9df0,	// (0x0000c0cc) set_value_pane_cp

0x4b62,	// (0x00006e3e) list_setting_number_pane_g1_ParamLimits

0x4b62,	// (0x00006e3e) list_setting_number_pane_g1

0x9bae,	// (0x0000be8a) list_setting_number_pane_g2_ParamLimits

0x9bae,	// (0x0000be8a) list_setting_number_pane_g2

0x0001,

0xf652,	// (0x0001192e) list_setting_number_pane_g_ParamLimits

0xf652,	// (0x0001192e) list_setting_number_pane_g

0x9dfc,	// (0x0000c0d8) list_setting_number_pane_t1_ParamLimits

0x9dfc,	// (0x0000c0d8) list_setting_number_pane_t1

0x9e10,	// (0x0000c0ec) list_setting_number_pane_t2_ParamLimits

0x9e10,	// (0x0000c0ec) list_setting_number_pane_t2

0x9e27,	// (0x0000c103) list_setting_number_pane_t3_ParamLimits

0x9e27,	// (0x0000c103) list_setting_number_pane_t3

0x0003,

0xf65e,	// (0x0001193a) list_setting_number_pane_t_ParamLimits

0xf65e,	// (0x0001193a) list_setting_number_pane_t

0x9df0,	// (0x0000c0cc) set_value_pane_ParamLimits

0x9df0,	// (0x0000c0cc) set_value_pane

0xea2e,	// (0x00010d0a) bg_set_opt_pane_ParamLimits

0xea2e,	// (0x00010d0a) bg_set_opt_pane

0xea4f,	// (0x00010d2b) set_value_pane_t1

0xea75,	// (0x00010d51) slider_set_pane_cp3

0x9e6a,	// (0x0000c146) volume_small_pane_cp

0xea7e,	// (0x00010d5a) list_form_gen_pane

0xea87,	// (0x00010d63) scroll_pane_cp8

0x9e73,	// (0x0000c14f) form_field_data_pane_ParamLimits

0x9e73,	// (0x0000c14f) form_field_data_pane

0x9e8a,	// (0x0000c166) form_field_data_wide_pane_ParamLimits

0x9e8a,	// (0x0000c166) form_field_data_wide_pane

0x9eaa,	// (0x0000c186) form_field_popup_pane_ParamLimits

0x9eaa,	// (0x0000c186) form_field_popup_pane

0x9eca,	// (0x0000c1a6) form_field_popup_wide_pane_ParamLimits

0x9eca,	// (0x0000c1a6) form_field_popup_wide_pane

0xeaa8,	// (0x00010d84) form_field_slider_pane_ParamLimits

0xeaa8,	// (0x00010d84) form_field_slider_pane

0x9ee1,	// (0x0000c1bd) form_field_slider_wide_pane_ParamLimits

0x9ee1,	// (0x0000c1bd) form_field_slider_wide_pane

0xeabb,	// (0x00010d97) data_form_pane

0x9efe,	// (0x0000c1da) form_field_data_pane_t1

0xeac7,	// (0x00010da3) input_focus_pane

0xead5,	// (0x00010db1) data_form_wide_pane

0xeb06,	// (0x00010de2) form_field_data_wide_pane_t1

0xe945,	// (0x00010c21) input_focus_pane_cp6

0x9f18,	// (0x0000c1f4) form_field_popup_pane_t1

0xeac7,	// (0x00010da3) input_focus_pane_cp7

0xeb28,	// (0x00010e04) list_form_pane

0xeb3c,	// (0x00010e18) form_field_popup_wide_pane_t1

0xeac7,	// (0x00010da3) input_focus_pane_cp8

0xeb51,	// (0x00010e2d) list_form_wide_pane

0x9f3a,	// (0x0000c216) form_field_slider_pane_t1_ParamLimits

0x9f3a,	// (0x0000c216) form_field_slider_pane_t1

0x9f52,	// (0x0000c22e) form_field_slider_pane_t2_ParamLimits

0x9f52,	// (0x0000c22e) form_field_slider_pane_t2

0x0001,

0xf66e,	// (0x0001194a) form_field_slider_pane_t_ParamLimits

0xf66e,	// (0x0001194a) form_field_slider_pane_t

0xe677,	// (0x00010953) input_focus_pane_cp9_ParamLimits

0xe677,	// (0x00010953) input_focus_pane_cp9

0x9f67,	// (0x0000c243) slider_cont_pane_ParamLimits

0x9f67,	// (0x0000c243) slider_cont_pane

0xeb5d,	// (0x00010e39) form_field_slider_wide_pane_t1_ParamLimits

0xeb5d,	// (0x00010e39) form_field_slider_wide_pane_t1

0xeb6f,	// (0x00010e4b) form_field_slider_wide_pane_t2_ParamLimits

0xeb6f,	// (0x00010e4b) form_field_slider_wide_pane_t2

0x0001,

0xf673,	// (0x0001194f) form_field_slider_wide_pane_t_ParamLimits

0xf673,	// (0x0001194f) form_field_slider_wide_pane_t

0xe677,	// (0x00010953) input_focus_pane_cp10_ParamLimits

0xe677,	// (0x00010953) input_focus_pane_cp10

0x9f7b,	// (0x0000c257) slider_cont_pane_cp1_ParamLimits

0x9f7b,	// (0x0000c257) slider_cont_pane_cp1

0x9f8f,	// (0x0000c26b) slider_form_pane_cp

0xeb81,	// (0x00010e5d) input_focus_pane_g1

0xeb89,	// (0x00010e65) input_focus_pane_g2

0xeb91,	// (0x00010e6d) input_focus_pane_g3

0xeb99,	// (0x00010e75) input_focus_pane_g4

0xeba1,	// (0x00010e7d) input_focus_pane_g5

0xeba9,	// (0x00010e85) input_focus_pane_g6

0xebb1,	// (0x00010e8d) input_focus_pane_g7

0xebb9,	// (0x00010e95) input_focus_pane_g8

0xebc1,	// (0x00010e9d) input_focus_pane_g9

0xe490,	// (0x0001076c) input_focus_pane_g10

0x0009,

0xf678,	// (0x00011954) input_focus_pane_g

0x1b3c,	// (0x00003e18) wait_border_pane_g3_copy1

0x9f97,	// (0x0000c273) data_form_pane_t1

0xe490,	// (0x0001076c) wait_anim_pane_g1_copy1

0xbd69,	// (0x0000e045) data_form_wide_pane_t1

0x9fb1,	// (0x0000c28d) list_form_graphic_pane_cp_ParamLimits

0x9fb1,	// (0x0000c28d) list_form_graphic_pane_cp

0x2c6f,	// (0x00004f4b) slider_form_pane_g1

0x2c78,	// (0x00004f54) slider_form_pane_g2

0x0006,

0xf96f,	// (0x00011c4b) slider_form_pane_g

0x9fc3,	// (0x0000c29f) list_form_graphic_pane_ParamLimits

0x9fc3,	// (0x0000c29f) list_form_graphic_pane

0x9fd6,	// (0x0000c2b2) list_form_graphic_pane_g1

0x9fde,	// (0x0000c2ba) list_form_graphic_pane_t1_ParamLimits

0x9fde,	// (0x0000c2ba) list_form_graphic_pane_t1

0xe685,	// (0x00010961) list_highlight_pane_cp5_ParamLimits

0xe685,	// (0x00010961) list_highlight_pane_cp5

0x9ff3,	// (0x0000c2cf) find_pane_g1

0xebc9,	// (0x00010ea5) input_find_pane

0x9ffc,	// (0x0000c2d8) input_find_pane_g1_ParamLimits

0x9ffc,	// (0x0000c2d8) input_find_pane_g1

0xa008,	// (0x0000c2e4) input_find_pane_t1_ParamLimits

0xa008,	// (0x0000c2e4) input_find_pane_t1

0xa01d,	// (0x0000c2f9) input_find_pane_t2_ParamLimits

0xa01d,	// (0x0000c2f9) input_find_pane_t2

0x0001,

0xf68d,	// (0x00011969) input_find_pane_t_ParamLimits

0xf68d,	// (0x00011969) input_find_pane_t

0xebd2,	// (0x00010eae) input_focus_pane_cp5_ParamLimits

0xebd2,	// (0x00010eae) input_focus_pane_cp5

0xebe0,	// (0x00010ebc) bg_popup_window_pane_cp2_ParamLimits

0xebe0,	// (0x00010ebc) bg_popup_window_pane_cp2

0xebed,	// (0x00010ec9) listscroll_menu_pane_ParamLimits

0xebed,	// (0x00010ec9) listscroll_menu_pane

0xa03e,	// (0x0000c31a) popup_submenu_window_ParamLimits

0xa03e,	// (0x0000c31a) popup_submenu_window

0xebf9,	// (0x00010ed5) find_popup_pane_g1

0xa066,	// (0x0000c342) input_popup_find_pane_cp

0xebd2,	// (0x00010eae) input_focus_pane_cp4_ParamLimits

0xebd2,	// (0x00010eae) input_focus_pane_cp4

0xec01,	// (0x00010edd) input_popup_find_pane_t1_ParamLimits

0xec01,	// (0x00010edd) input_popup_find_pane_t1

0xe609,	// (0x000108e5) bg_popup_sub_pane_cp

0xec2f,	// (0x00010f0b) listscroll_popup_sub_pane

0xec37,	// (0x00010f13) list_submenu_pane_ParamLimits

0xec37,	// (0x00010f13) list_submenu_pane

0xec48,	// (0x00010f24) scroll_pane_cp4

0xa07e,	// (0x0000c35a) list_single_popup_submenu_pane_ParamLimits

0xa07e,	// (0x0000c35a) list_single_popup_submenu_pane

0xa092,	// (0x0000c36e) list_single_popup_submenu_pane_g1

0xa09a,	// (0x0000c376) list_single_popup_submenu_pane_t1_ParamLimits

0xa09a,	// (0x0000c376) list_single_popup_submenu_pane_t1

0xe677,	// (0x00010953) bg_active_tab_pane_cp1_ParamLimits

0xe677,	// (0x00010953) bg_active_tab_pane_cp1

0xec50,	// (0x00010f2c) tabs_2_active_pane_g1

0xa0af,	// (0x0000c38b) tabs_2_active_pane_t1

0xe677,	// (0x00010953) bg_passive_tab_pane_cp1_ParamLimits

0xe677,	// (0x00010953) bg_passive_tab_pane_cp1

0xec50,	// (0x00010f2c) tabs_2_passive_pane_g1

0xa0af,	// (0x0000c38b) tabs_2_passive_pane_t1

0xe685,	// (0x00010961) bg_active_tab_pane_cp4

0xa0c1,	// (0x0000c39d) tabs_2_long_active_pane_t1

0x07ad,	// (0x00002a89) bg_passive_tab_pane_cp4

0xf37c,	// (0x00011658) list_single_midp_graphic_pane_g4_ParamLimits

0xe685,	// (0x00010961) bg_active_tab_pane_cp5

0xa0d4,	// (0x0000c3b0) tabs_3_long_active_pane_t1

0x07ad,	// (0x00002a89) bg_passive_tab_pane_cp5

0xf37c,	// (0x00011658) list_single_midp_graphic_pane_g4

0xe685,	// (0x00010961) bg_popup_window_pane_cp13_ParamLimits

0xe685,	// (0x00010961) bg_popup_window_pane_cp13

0xec58,	// (0x00010f34) listscroll_popup_fast_pane_ParamLimits

0xec58,	// (0x00010f34) listscroll_popup_fast_pane

0xec64,	// (0x00010f40) grid_popup_fast_pane_ParamLimits

0xec64,	// (0x00010f40) grid_popup_fast_pane

0xec76,	// (0x00010f52) scroll_pane_cp9_ParamLimits

0xec76,	// (0x00010f52) scroll_pane_cp9

0x5049,	// (0x00007325) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5049,	// (0x00007325) list_single_graphic_hl_pane_t1_cp2

0xec89,	// (0x00010f65) input_focus_pane_cp20_ParamLimits

0xec89,	// (0x00010f65) input_focus_pane_cp20

0xec97,	// (0x00010f73) query_popup_data_pane_t1_ParamLimits

0xec97,	// (0x00010f73) query_popup_data_pane_t1

0xecaa,	// (0x00010f86) query_popup_data_pane_t2_ParamLimits

0xecaa,	// (0x00010f86) query_popup_data_pane_t2

0xecf0,	// (0x00010fcc) query_popup_data_pane_t3_ParamLimits

0xecf0,	// (0x00010fcc) query_popup_data_pane_t3

0xed31,	// (0x0001100d) query_popup_data_pane_t4_ParamLimits

0xed31,	// (0x0001100d) query_popup_data_pane_t4

0xed6d,	// (0x00011049) query_popup_data_pane_t5_ParamLimits

0xed6d,	// (0x00011049) query_popup_data_pane_t5

0x0004,

0xf692,	// (0x0001196e) query_popup_data_pane_t_ParamLimits

0xf692,	// (0x0001196e) query_popup_data_pane_t

0xeb81,	// (0x00010e5d) bg_set_opt_pane_g1

0xeb89,	// (0x00010e65) bg_set_opt_pane_g2

0xeb91,	// (0x00010e6d) bg_set_opt_pane_g3

0xeb99,	// (0x00010e75) bg_set_opt_pane_g4

0xeba1,	// (0x00010e7d) bg_set_opt_pane_g5

0xeba9,	// (0x00010e85) bg_set_opt_pane_g6

0xebb1,	// (0x00010e8d) bg_set_opt_pane_g7

0xebb9,	// (0x00010e95) bg_set_opt_pane_g8

0xebc1,	// (0x00010e9d) bg_set_opt_pane_g9

0x0008,

0xf69d,	// (0x00011979) bg_set_opt_pane_g

0xf354,	// (0x00011630) control_top_pane_stacon_ParamLimits

0xf354,	// (0x00011630) control_top_pane_stacon

0xf3b3,	// (0x0001168f) signal_pane_stacon_ParamLimits

0xf3b3,	// (0x0001168f) signal_pane_stacon

0xf3d8,	// (0x000116b4) stacon_top_pane_g1_ParamLimits

0xf3d8,	// (0x000116b4) stacon_top_pane_g1

0xf3fa,	// (0x000116d6) title_pane_stacon_ParamLimits

0xf3fa,	// (0x000116d6) title_pane_stacon

0xf424,	// (0x00011700) uni_indicator_pane_stacon_ParamLimits

0xf424,	// (0x00011700) uni_indicator_pane_stacon

0xf439,	// (0x00011715) battery_pane_stacon_ParamLimits

0xf439,	// (0x00011715) battery_pane_stacon

0xf47d,	// (0x00011759) control_bottom_pane_stacon_ParamLimits

0xf47d,	// (0x00011759) control_bottom_pane_stacon

0xf4a0,	// (0x0001177c) navi_pane_stacon_ParamLimits

0xf4a0,	// (0x0001177c) navi_pane_stacon

0xf4c3,	// (0x0001179f) stacon_bottom_pane_g1_ParamLimits

0xf4c3,	// (0x0001179f) stacon_bottom_pane_g1

0xeda4,	// (0x00011080) aid_levels_signal_lsc_ParamLimits

0xeda4,	// (0x00011080) aid_levels_signal_lsc

0xedd0,	// (0x000110ac) signal_pane_stacon_g1_ParamLimits

0xedd0,	// (0x000110ac) signal_pane_stacon_g1

0xede4,	// (0x000110c0) signal_pane_stacon_g2_ParamLimits

0xede4,	// (0x000110c0) signal_pane_stacon_g2

0x0001,

0xf6b0,	// (0x0001198c) signal_pane_stacon_g_ParamLimits

0xf6b0,	// (0x0001198c) signal_pane_stacon_g

0xee26,	// (0x00011102) title_pane_stacon_t1_ParamLimits

0xee26,	// (0x00011102) title_pane_stacon_t1

0xee4b,	// (0x00011127) uni_indicator_pane_stacon_g1

0xee55,	// (0x00011131) uni_indicator_pane_stacon_g2

0xee5f,	// (0x0001113b) uni_indicator_pane_stacon_g3

0xee69,	// (0x00011145) uni_indicator_pane_stacon_g4

0x0003,

0xf6bc,	// (0x00011998) uni_indicator_pane_stacon_g

0xee73,	// (0x0001114f) control_top_pane_stacon_g1

0xee7b,	// (0x00011157) control_top_pane_stacon_t1_ParamLimits

0xee7b,	// (0x00011157) control_top_pane_stacon_t1

0xeeb2,	// (0x0001118e) aid_levels_battery_lsc_ParamLimits

0xeeb2,	// (0x0001118e) aid_levels_battery_lsc

0xeec9,	// (0x000111a5) battery_pane_stacon_g1_ParamLimits

0xeec9,	// (0x000111a5) battery_pane_stacon_g1

0xeedc,	// (0x000111b8) battery_pane_stacon_g2_ParamLimits

0xeedc,	// (0x000111b8) battery_pane_stacon_g2

0x0001,

0xf6c5,	// (0x000119a1) battery_pane_stacon_g_ParamLimits

0xf6c5,	// (0x000119a1) battery_pane_stacon_g

0xef1a,	// (0x000111f6) navi_icon_pane_stacon

0xef2e,	// (0x0001120a) navi_navi_pane_stacon

0xef1a,	// (0x000111f6) navi_text_pane_stacon

0xee73,	// (0x0001114f) control_bottom_pane_stacon_g1

0xef42,	// (0x0001121e) control_bottom_pane_stacon_t1_ParamLimits

0xef42,	// (0x0001121e) control_bottom_pane_stacon_t1

0xa100,	// (0x0000c3dc) grid_app_pane_ParamLimits

0xa100,	// (0x0000c3dc) grid_app_pane

0xa138,	// (0x0000c414) scroll_pane_cp15_ParamLimits

0xa138,	// (0x0000c414) scroll_pane_cp15

0xa14d,	// (0x0000c429) cell_app_pane_ParamLimits

0xa14d,	// (0x0000c429) cell_app_pane

0xa192,	// (0x0000c46e) cell_app_pane_g1_ParamLimits

0xa192,	// (0x0000c46e) cell_app_pane_g1

0xef93,	// (0x0001126f) cell_app_pane_g2_ParamLimits

0xef93,	// (0x0001126f) cell_app_pane_g2

0x0001,

0xf6ca,	// (0x000119a6) cell_app_pane_g_ParamLimits

0xf6ca,	// (0x000119a6) cell_app_pane_g

0xa1b6,	// (0x0000c492) cell_app_pane_t1_ParamLimits

0xa1b6,	// (0x0000c492) cell_app_pane_t1

0xef9f,	// (0x0001127b) grid_highlight_pane_ParamLimits

0xef9f,	// (0x0001127b) grid_highlight_pane

0xeb81,	// (0x00010e5d) cell_highlight_pane_g1

0xeb89,	// (0x00010e65) cell_highlight_pane_g2

0xeb91,	// (0x00010e6d) cell_highlight_pane_g3

0xeb99,	// (0x00010e75) cell_highlight_pane_g4

0xeba1,	// (0x00010e7d) cell_highlight_pane_g5

0xeba9,	// (0x00010e85) cell_highlight_pane_g6

0xebb1,	// (0x00010e8d) cell_highlight_pane_g7

0xebb9,	// (0x00010e95) cell_highlight_pane_g8

0xebc1,	// (0x00010e9d) cell_highlight_pane_g9

0xe490,	// (0x0001076c) cell_highlight_pane_g10

0x0009,

0xf678,	// (0x00011954) cell_highlight_pane_g

0xefba,	// (0x00011296) bg_scroll_pane

0xa1d6,	// (0x0000c4b2) scroll_handle_pane

0xf016,	// (0x000112f2) scroll_bg_pane_g1

0xf02b,	// (0x00011307) scroll_bg_pane_g2

0xf043,	// (0x0001131f) scroll_bg_pane_g3

0x0002,

0xf6cf,	// (0x000119ab) scroll_bg_pane_g

0xa1ea,	// (0x0000c4c6) scroll_handle_focus_pane_ParamLimits

0xa1ea,	// (0x0000c4c6) scroll_handle_focus_pane

0xf016,	// (0x000112f2) scroll_handle_pane_g1

0xf058,	// (0x00011334) scroll_handle_pane_g2

0xf043,	// (0x0001131f) scroll_handle_pane_g3

0x0002,

0xf6d6,	// (0x000119b2) scroll_handle_pane_g

0xebd2,	// (0x00010eae) bg_popup_sub_pane_cp21_ParamLimits

0xebd2,	// (0x00010eae) bg_popup_sub_pane_cp21

0xa1f7,	// (0x0000c4d3) popup_fep_japan_predictive_window_t1_ParamLimits

0xa1f7,	// (0x0000c4d3) popup_fep_japan_predictive_window_t1

0xa20e,	// (0x0000c4ea) popup_fep_japan_predictive_window_t2_ParamLimits

0xa20e,	// (0x0000c4ea) popup_fep_japan_predictive_window_t2

0xa241,	// (0x0000c51d) popup_fep_japan_predictive_window_t3_ParamLimits

0xa241,	// (0x0000c51d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6dd,	// (0x000119b9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6dd,	// (0x000119b9) popup_fep_japan_predictive_window_t

0xe609,	// (0x000108e5) bg_popup_sub_pane_cp23

0xa278,	// (0x0000c554) listscroll_japin_cand_pane

0xf06c,	// (0x00011348) popup_fep_japan_candidate_window_t1

0xf07a,	// (0x00011356) candidate_pane_ParamLimits

0xf07a,	// (0x00011356) candidate_pane

0xa280,	// (0x0000c55c) scroll_pane_cp30

0xf08c,	// (0x00011368) list_single_popup_jap_candidate_pane_ParamLimits

0xf08c,	// (0x00011368) list_single_popup_jap_candidate_pane

0xe609,	// (0x000108e5) list_highlight_pane_cp30

0xf0a1,	// (0x0001137d) list_single_popup_jap_candidate_pane_t1

0xf0b0,	// (0x0001138c) level_1_signal

0xf0bd,	// (0x00011399) level_2_signal

0xf0ca,	// (0x000113a6) level_3_signal

0xf0d7,	// (0x000113b3) level_4_signal

0xf0e4,	// (0x000113c0) level_5_signal

0xf0f1,	// (0x000113cd) level_6_signal

0xf0fe,	// (0x000113da) level_7_signal

0xf0b0,	// (0x0001138c) level_1_battery

0xf0bd,	// (0x00011399) level_2_battery

0xf0ca,	// (0x000113a6) level_3_battery

0xf0d7,	// (0x000113b3) level_4_battery

0xf0e4,	// (0x000113c0) level_5_battery

0xf0f1,	// (0x000113cd) level_6_battery

0xf0fe,	// (0x000113da) level_7_battery

0xf142,	// (0x0001141e) list_menu_pane_ParamLimits

0xf142,	// (0x0001141e) list_menu_pane

0xf158,	// (0x00011434) scroll_pane_cp25_ParamLimits

0xf158,	// (0x00011434) scroll_pane_cp25

0xa288,	// (0x0000c564) list_double2_graphic_pane_cp2_ParamLimits

0xa288,	// (0x0000c564) list_double2_graphic_pane_cp2

0xa288,	// (0x0000c564) list_double2_large_graphic_pane_cp2_ParamLimits

0xa288,	// (0x0000c564) list_double2_large_graphic_pane_cp2

0xa288,	// (0x0000c564) list_double2_pane_cp2_ParamLimits

0xa288,	// (0x0000c564) list_double2_pane_cp2

0xa288,	// (0x0000c564) list_double_graphic_pane_cp2_ParamLimits

0xa288,	// (0x0000c564) list_double_graphic_pane_cp2

0xa288,	// (0x0000c564) list_double_large_graphic_pane_cp2_ParamLimits

0xa288,	// (0x0000c564) list_double_large_graphic_pane_cp2

0xa288,	// (0x0000c564) list_double_number_pane_cp2_ParamLimits

0xa288,	// (0x0000c564) list_double_number_pane_cp2

0xa288,	// (0x0000c564) list_double_pane_cp2_ParamLimits

0xa288,	// (0x0000c564) list_double_pane_cp2

0xa297,	// (0x0000c573) list_single_2graphic_pane_cp2_ParamLimits

0xa297,	// (0x0000c573) list_single_2graphic_pane_cp2

0xa297,	// (0x0000c573) list_single_graphic_heading_pane_cp2_ParamLimits

0xa297,	// (0x0000c573) list_single_graphic_heading_pane_cp2

0xa297,	// (0x0000c573) list_single_graphic_pane_cp2_ParamLimits

0xa297,	// (0x0000c573) list_single_graphic_pane_cp2

0xa297,	// (0x0000c573) list_single_heading_pane_cp2_ParamLimits

0xa297,	// (0x0000c573) list_single_heading_pane_cp2

0xf181,	// (0x0001145d) list_single_large_graphic_pane_cp2_ParamLimits

0xf181,	// (0x0001145d) list_single_large_graphic_pane_cp2

0xa297,	// (0x0000c573) list_single_number_heading_pane_cp2_ParamLimits

0xa297,	// (0x0000c573) list_single_number_heading_pane_cp2

0xa297,	// (0x0000c573) list_single_number_pane_cp2_ParamLimits

0xa297,	// (0x0000c573) list_single_number_pane_cp2

0xa297,	// (0x0000c573) list_single_pane_cp2_ParamLimits

0xa297,	// (0x0000c573) list_single_pane_cp2

0xf1fe,	// (0x000114da) bg_popup_sub_pane_cp22

0xf214,	// (0x000114f0) popup_side_volume_key_window_g1

0xf220,	// (0x000114fc) popup_side_volume_key_window_t1

0xa35f,	// (0x0000c63b) volume_small_pane_cp1

0xe677,	// (0x00010953) bg_popup_sub_pane_cp24_ParamLimits

0xe677,	// (0x00010953) bg_popup_sub_pane_cp24

0xf22e,	// (0x0001150a) fep_china_uni_candidate_pane_ParamLimits

0xf22e,	// (0x0001150a) fep_china_uni_candidate_pane

0xf242,	// (0x0001151e) fep_china_uni_entry_pane

0xf252,	// (0x0001152e) popup_fep_china_uni_window_g1

0xa367,	// (0x0000c643) fep_china_uni_entry_pane_g1

0xa36f,	// (0x0000c64b) fep_china_uni_entry_pane_g2

0x0001,

0xf70e,	// (0x000119ea) fep_china_uni_entry_pane_g

0xf26e,	// (0x0001154a) fep_entry_item_pane

0xf278,	// (0x00011554) fep_candidate_item_pane

0xa377,	// (0x0000c653) fep_china_uni_candidate_pane_g1

0xf280,	// (0x0001155c) fep_china_uni_candidate_pane_g2

0xf288,	// (0x00011564) fep_china_uni_candidate_pane_g3

0xa37f,	// (0x0000c65b) fep_china_uni_candidate_pane_g4

0x0003,

0xf713,	// (0x000119ef) fep_china_uni_candidate_pane_g

0xe490,	// (0x0001076c) fep_entry_item_pane_g1

0xf290,	// (0x0001156c) fep_entry_item_pane_t1_ParamLimits

0xf290,	// (0x0001156c) fep_entry_item_pane_t1

0xf2a6,	// (0x00011582) fep_candidate_item_pane_t1_ParamLimits

0xf2a6,	// (0x00011582) fep_candidate_item_pane_t1

0xf2bb,	// (0x00011597) fep_candidate_item_pane_t2_ParamLimits

0xf2bb,	// (0x00011597) fep_candidate_item_pane_t2

0x0001,

0xf71c,	// (0x000119f8) fep_candidate_item_pane_t_ParamLimits

0xf71c,	// (0x000119f8) fep_candidate_item_pane_t

0xe685,	// (0x00010961) list_highlight_pane_cp31_ParamLimits

0xe685,	// (0x00010961) list_highlight_pane_cp31

0xf2cd,	// (0x000115a9) level_1_signal_lsc

0xf2d6,	// (0x000115b2) level_2_signal_lsc

0xf2df,	// (0x000115bb) level_3_signal_lsc

0xf2e8,	// (0x000115c4) level_4_signal_lsc

0xf2f1,	// (0x000115cd) level_5_signal_lsc

0xf2fa,	// (0x000115d6) level_6_signal_lsc

0xf303,	// (0x000115df) level_7_signal_lsc

0xf303,	// (0x000115df) level_1_battery_lsc

0xf30c,	// (0x000115e8) level_2_battery_lsc

0xf315,	// (0x000115f1) level_3_battery_lsc

0xf31e,	// (0x000115fa) level_4_battery_lsc

0xf327,	// (0x00011603) level_5_battery_lsc

0xf330,	// (0x0001160c) level_6_battery_lsc

0xf2cd,	// (0x000115a9) level_7_battery_lsc

0xf339,	// (0x00011615) scroll_handle_focus_pane_g1

0xf342,	// (0x0001161e) scroll_handle_focus_pane_g2

0xf34b,	// (0x00011627) scroll_handle_focus_pane_g3

0x0002,

0xf721,	// (0x000119fd) scroll_handle_focus_pane_g

0xa387,	// (0x0000c663) list_single_2graphic_pane_g1_ParamLimits

0xa387,	// (0x0000c663) list_single_2graphic_pane_g1

0x9b32,	// (0x0000be0e) list_single_2graphic_pane_g2_ParamLimits

0x9b32,	// (0x0000be0e) list_single_2graphic_pane_g2

0xea0d,	// (0x00010ce9) list_single_2graphic_pane_g3_ParamLimits

0xea0d,	// (0x00010ce9) list_single_2graphic_pane_g3

0xa393,	// (0x0000c66f) list_single_2graphic_pane_g4_ParamLimits

0xa393,	// (0x0000c66f) list_single_2graphic_pane_g4

0x0003,

0xf728,	// (0x00011a04) list_single_2graphic_pane_g_ParamLimits

0xf728,	// (0x00011a04) list_single_2graphic_pane_g

0xa39f,	// (0x0000c67b) list_single_2graphic_pane_t1_ParamLimits

0xa39f,	// (0x0000c67b) list_single_2graphic_pane_t1

0xa3cd,	// (0x0000c6a9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa3cd,	// (0x0000c6a9) list_double2_graphic_large_graphic_pane_g1

0x9b9d,	// (0x0000be79) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9b9d,	// (0x0000be79) list_double2_graphic_large_graphic_pane_g2

0x9bae,	// (0x0000be8a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9bae,	// (0x0000be8a) list_double2_graphic_large_graphic_pane_g3

0xa3df,	// (0x0000c6bb) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa3df,	// (0x0000c6bb) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf731,	// (0x00011a0d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf731,	// (0x00011a0d) list_double2_graphic_large_graphic_pane_g

0xa3eb,	// (0x0000c6c7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa3eb,	// (0x0000c6c7) list_double2_graphic_large_graphic_pane_t1

0xa401,	// (0x0000c6dd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa401,	// (0x0000c6dd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73a,	// (0x00011a16) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73a,	// (0x00011a16) list_double2_graphic_large_graphic_pane_t

0xa486,	// (0x0000c762) popup_fast_swap_window_ParamLimits

0xa486,	// (0x0000c762) popup_fast_swap_window

0xa4a2,	// (0x0000c77e) popup_side_volume_key_window

0x0022,	// (0x000022fe) stacon_top_pane

0x002c,	// (0x00002308) status_pane_ParamLimits

0x002c,	// (0x00002308) status_pane

0xa4bc,	// (0x0000c798) status_small_pane

0xe609,	// (0x000108e5) control_pane

0xe609,	// (0x000108e5) stacon_bottom_pane

0xea87,	// (0x00010d63) scroll_pane_cp121

0xea7e,	// (0x00010d5a) set_content_pane

0xa413,	// (0x0000c6ef) bg_active_tab_pane_g1_cp1

0xa41c,	// (0x0000c6f8) bg_active_tab_pane_g2_cp1

0xa425,	// (0x0000c701) bg_active_tab_pane_g3_cp1

0xa413,	// (0x0000c6ef) bg_passive_tab_pane_g1_cp1

0xa41c,	// (0x0000c6f8) bg_passive_tab_pane_g2_cp1

0xa425,	// (0x0000c701) bg_passive_tab_pane_g3_cp1

0xa42e,	// (0x0000c70a) bg_active_tab_pane_g1_cp2

0xa41c,	// (0x0000c6f8) bg_active_tab_pane_g2_cp2

0xa437,	// (0x0000c713) bg_active_tab_pane_g3_cp2

0xa42e,	// (0x0000c70a) bg_passive_tab_pane_g1_cp2

0xa41c,	// (0x0000c6f8) bg_passive_tab_pane_g2_cp2

0xa437,	// (0x0000c713) bg_passive_tab_pane_g3_cp2

0xa440,	// (0x0000c71c) bg_active_tab_pane_g1_cp3

0xa41c,	// (0x0000c6f8) bg_active_tab_pane_g2_cp3

0xa449,	// (0x0000c725) bg_active_tab_pane_g3_cp3

0xa440,	// (0x0000c71c) bg_passive_tab_pane_g1_cp3

0xa41c,	// (0x0000c6f8) bg_passive_tab_pane_g2_cp3

0xa449,	// (0x0000c725) bg_passive_tab_pane_g3_cp3

0xa452,	// (0x0000c72e) bg_active_tab_pane_g1_cp4

0xa41c,	// (0x0000c6f8) bg_active_tab_pane_g2_cp4

0xa45d,	// (0x0000c739) bg_active_tab_pane_g3_cp4

0xa452,	// (0x0000c72e) bg_passive_tab_pane_g1_cp4

0xa41c,	// (0x0000c6f8) bg_passive_tab_pane_g2_cp4

0xa45d,	// (0x0000c739) bg_passive_tab_pane_g3_cp4

0xa468,	// (0x0000c744) bg_active_tab_pane_g1_cp5

0xa41c,	// (0x0000c6f8) bg_active_tab_pane_g2_cp5

0xa471,	// (0x0000c74d) bg_active_tab_pane_g3_cp5

0xa468,	// (0x0000c744) bg_passive_tab_pane_g1_cp5

0xa41c,	// (0x0000c6f8) bg_passive_tab_pane_g2_cp5

0xa471,	// (0x0000c74d) bg_passive_tab_pane_g3_cp5

0x3440,	// (0x0000571c) list_set_graphic_pane_ParamLimits

0x3440,	// (0x0000571c) list_set_graphic_pane

0xe609,	// (0x000108e5) bg_set_opt_pane_cp4

0xf4df,	// (0x000117bb) list_set_graphic_pane_g1_ParamLimits

0xf4df,	// (0x000117bb) list_set_graphic_pane_g1

0xf4eb,	// (0x000117c7) list_set_graphic_pane_g2_ParamLimits

0xf4eb,	// (0x000117c7) list_set_graphic_pane_g2

0x0001,

0xf73f,	// (0x00011a1b) list_set_graphic_pane_g_ParamLimits

0xf73f,	// (0x00011a1b) list_set_graphic_pane_g

0x0009,

0xfac4,	// (0x00011da0) volume_small_pane_cp_g

0xa47a,	// (0x0000c756) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa47a,	// (0x0000c756) list_double2_large_graphic_pane_g1_cp2

0xf50d,	// (0x000117e9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf50d,	// (0x000117e9) list_double2_large_graphic_pane_g2_cp2

0xf51e,	// (0x000117fa) list_double2_large_graphic_pane_g3_cp2

0xf526,	// (0x00011802) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf526,	// (0x00011802) list_double2_large_graphic_pane_t1_cp2

0xf53c,	// (0x00011818) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf53c,	// (0x00011818) list_double2_large_graphic_pane_t2_cp2

0xb9fc,	// (0x0000dcd8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb9fc,	// (0x0000dcd8) list_double_large_graphic_pane_g1_cp2

0x2768,	// (0x00004a44) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2768,	// (0x00004a44) list_double_large_graphic_pane_g2_cp2

0x0147,	// (0x00002423) list_double_large_graphic_pane_g3_cp2

0x2779,	// (0x00004a55) list_double_large_graphic_pane_g4_cp

0x2781,	// (0x00004a5d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2781,	// (0x00004a5d) list_double_large_graphic_pane_t1_cp2

0x2798,	// (0x00004a74) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2798,	// (0x00004a74) list_double_large_graphic_pane_t2_cp2

0x0045,	// (0x00002321) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0045,	// (0x00002321) list_double2_graphic_pane_g1_cp2

0x0053,	// (0x0000232f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0053,	// (0x0000232f) list_double2_graphic_pane_g2_cp2

0x0064,	// (0x00002340) list_double2_graphic_pane_g3_cp2

0x006e,	// (0x0000234a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x006e,	// (0x0000234a) list_double2_graphic_pane_t1_cp2

0x0084,	// (0x00002360) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0084,	// (0x00002360) list_double2_graphic_pane_t2_cp2

0xea69,	// (0x00010d45) list_single_number_heading_pane_g1_cp2_ParamLimits

0xea69,	// (0x00010d45) list_single_number_heading_pane_g1_cp2

0x0096,	// (0x00002372) list_single_number_heading_pane_g2_cp2

0x009e,	// (0x0000237a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x009e,	// (0x0000237a) list_single_number_heading_pane_t1_cp2

0x00b4,	// (0x00002390) list_single_number_heading_pane_t2_cp2_ParamLimits

0x00b4,	// (0x00002390) list_single_number_heading_pane_t2_cp2

0x00c6,	// (0x000023a2) list_single_number_heading_pane_t3_cp2_ParamLimits

0x00c6,	// (0x000023a2) list_single_number_heading_pane_t3_cp2

0xea69,	// (0x00010d45) list_single_heading_pane_g1_cp2_ParamLimits

0xea69,	// (0x00010d45) list_single_heading_pane_g1_cp2

0x0096,	// (0x00002372) list_single_heading_pane_g2_cp2

0x009e,	// (0x0000237a) list_single_heading_pane_t1_cp2_ParamLimits

0x009e,	// (0x0000237a) list_single_heading_pane_t1_cp2

0x2561,	// (0x0000483d) list_single_heading_pane_t2_cp2_ParamLimits

0x2561,	// (0x0000483d) list_single_heading_pane_t2_cp2

0x24a9,	// (0x00004785) list_double_graphic_pane_g1_cp2_ParamLimits

0x24a9,	// (0x00004785) list_double_graphic_pane_g1_cp2

0x24b5,	// (0x00004791) list_double_graphic_pane_g2_cp2_ParamLimits

0x24b5,	// (0x00004791) list_double_graphic_pane_g2_cp2

0x24c4,	// (0x000047a0) list_double_graphic_pane_g3_cp2

0x24cc,	// (0x000047a8) list_double_graphic_pane_t1_cp2_ParamLimits

0x24cc,	// (0x000047a8) list_double_graphic_pane_t1_cp2

0x24e2,	// (0x000047be) list_double_graphic_pane_t2_cp2_ParamLimits

0x24e2,	// (0x000047be) list_double_graphic_pane_t2_cp2

0x013b,	// (0x00002417) list_double_number_pane_g1_cp2_ParamLimits

0x013b,	// (0x00002417) list_double_number_pane_g1_cp2

0x0147,	// (0x00002423) list_double_number_pane_g2_cp2

0x246d,	// (0x00004749) list_double_number_pane_t1_cp2_ParamLimits

0x246d,	// (0x00004749) list_double_number_pane_t1_cp2

0x2481,	// (0x0000475d) list_double_number_pane_t2_cp2_ParamLimits

0x2481,	// (0x0000475d) list_double_number_pane_t2_cp2

0x2497,	// (0x00004773) list_double_number_pane_t3_cp2_ParamLimits

0x2497,	// (0x00004773) list_double_number_pane_t3_cp2

0x2345,	// (0x00004621) list_single_graphic_pane_g1_cp2_ParamLimits

0x2345,	// (0x00004621) list_single_graphic_pane_g1_cp2

0x019f,	// (0x0000247b) list_single_graphic_pane_g2_cp2_ParamLimits

0x019f,	// (0x0000247b) list_single_graphic_pane_g2_cp2

0x01ab,	// (0x00002487) list_single_graphic_pane_g3_cp2

0x231b,	// (0x000045f7) list_single_graphic_pane_t1_cp2_ParamLimits

0x231b,	// (0x000045f7) list_single_graphic_pane_t1_cp2

0x019f,	// (0x0000247b) list_single_number_pane_g1_cp2_ParamLimits

0x019f,	// (0x0000247b) list_single_number_pane_g1_cp2

0x01ab,	// (0x00002487) list_single_number_pane_g2_cp2

0x231b,	// (0x000045f7) list_single_number_pane_t1_cp2_ParamLimits

0x231b,	// (0x000045f7) list_single_number_pane_t1_cp2

0x2331,	// (0x0000460d) list_single_number_pane_t2_cp2_ParamLimits

0x2331,	// (0x0000460d) list_single_number_pane_t2_cp2

0xf50d,	// (0x000117e9) list_double2_pane_g1_cp2_ParamLimits

0xf50d,	// (0x000117e9) list_double2_pane_g1_cp2

0xf51e,	// (0x000117fa) list_double2_pane_g2_cp2

0x0113,	// (0x000023ef) list_double2_pane_t1_cp2_ParamLimits

0x0113,	// (0x000023ef) list_double2_pane_t1_cp2

0x0129,	// (0x00002405) list_double2_pane_t2_cp2_ParamLimits

0x0129,	// (0x00002405) list_double2_pane_t2_cp2

0x013b,	// (0x00002417) list_double_pane_g1_cp2_ParamLimits

0x013b,	// (0x00002417) list_double_pane_g1_cp2

0x0147,	// (0x00002423) list_double_pane_g2_cp2

0x014f,	// (0x0000242b) list_double_pane_t1_cp2_ParamLimits

0x014f,	// (0x0000242b) list_double_pane_t1_cp2

0x0165,	// (0x00002441) list_double_pane_t2_cp2_ParamLimits

0x0165,	// (0x00002441) list_double_pane_t2_cp2

0xa4c7,	// (0x0000c7a3) list_single_pane_cp2_g3

0x019f,	// (0x0000247b) list_single_pane_g1_cp2_ParamLimits

0x019f,	// (0x0000247b) list_single_pane_g1_cp2

0x01ab,	// (0x00002487) list_single_pane_g2_cp2

0x01b3,	// (0x0000248f) list_single_pane_t1_cp2_ParamLimits

0x01b3,	// (0x0000248f) list_single_pane_t1_cp2

0xa4cf,	// (0x0000c7ab) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa4cf,	// (0x0000c7ab) list_single_large_graphic_pane_g1_cp2

0x01d7,	// (0x000024b3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x01d7,	// (0x000024b3) list_single_large_graphic_pane_g2_cp2

0x01e3,	// (0x000024bf) list_single_large_graphic_pane_g3_cp2

0xa4db,	// (0x0000c7b7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa4db,	// (0x0000c7b7) list_single_large_graphic_pane_g4_cp1

0x0205,	// (0x000024e1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0205,	// (0x000024e1) list_single_large_graphic_pane_t1_cp2

0x218e,	// (0x0000446a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x218e,	// (0x0000446a) list_single_graphic_heading_pane_g1_cp2

0x215b,	// (0x00004437) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x215b,	// (0x00004437) list_single_graphic_heading_pane_g4_cp2

0x01ab,	// (0x00002487) list_single_graphic_heading_pane_g5_cp2

0x219a,	// (0x00004476) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x219a,	// (0x00004476) list_single_graphic_heading_pane_t1_cp2

0x21b0,	// (0x0000448c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x21b0,	// (0x0000448c) list_single_graphic_heading_pane_t2_cp2

0x214f,	// (0x0000442b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x214f,	// (0x0000442b) list_single_2graphic_pane_g1_cp2

0x215b,	// (0x00004437) list_single_2graphic_pane_g2_cp2_ParamLimits

0x215b,	// (0x00004437) list_single_2graphic_pane_g2_cp2

0x01ab,	// (0x00002487) list_single_2graphic_pane_g3_cp2

0x216c,	// (0x00004448) list_single_2graphic_pane_g4_cp2_ParamLimits

0x216c,	// (0x00004448) list_single_2graphic_pane_g4_cp2

0x2178,	// (0x00004454) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2178,	// (0x00004454) list_single_2graphic_pane_t1_cp2

0xe490,	// (0x0001076c) list_highlight_pane_g10_cp1

0x1d37,	// (0x00004013) list_highlight_pane_g1_cp1

0x1d3f,	// (0x0000401b) list_highlight_pane_g2_cp1

0x1d47,	// (0x00004023) list_highlight_pane_g3_cp1

0x1d4f,	// (0x0000402b) list_highlight_pane_g4_cp1

0x1d57,	// (0x00004033) list_highlight_pane_g5_cp1

0x1d5f,	// (0x0000403b) list_highlight_pane_g6_cp1

0x1d67,	// (0x00004043) list_highlight_pane_g7_cp1

0x1d6f,	// (0x0000404b) list_highlight_pane_g8_cp1

0x1d77,	// (0x00004053) list_highlight_pane_g9_cp1

0xb789,	// (0x0000da65) form_field_slider_pane_t3

0xb797,	// (0x0000da73) form_field_slider_pane_t4

0x1c7b,	// (0x00003f57) slider_form_pane_ParamLimits

0x1c7b,	// (0x00003f57) slider_form_pane

0xe609,	// (0x000108e5) control_abbreviations

0xe609,	// (0x000108e5) control_conventions

0xe609,	// (0x000108e5) control_definitions

0xe609,	// (0x000108e5) format_table_attribute

0xb9d3,	// (0x0000dcaf) bg_popup_preview_window_pane_g9

0xe609,	// (0x000108e5) format_table_data2

0xe609,	// (0x000108e5) format_table_data3

0xe609,	// (0x000108e5) format_table_data_example

0x0008,

0xe609,	// (0x000108e5) intro_purpose

0xf8cf,	// (0x00011bab) bg_popup_preview_window_pane_g

0xe609,	// (0x000108e5) texts_category

0xe609,	// (0x000108e5) texts_graphics

0x021b,	// (0x000024f7) text_digital

0x022a,	// (0x00002506) text_primary

0x0239,	// (0x00002515) text_primary_small

0x0248,	// (0x00002524) text_secondary

0x0257,	// (0x00002533) text_title

0xbe5d,	// (0x0000e139) bg_passive_tab_pane_g1_cp3_srt

0xa41c,	// (0x0000c6f8) bg_passive_tab_pane_g2_cp3_srt

0xbe66,	// (0x0000e142) bg_passive_tab_pane_g3_cp3_srt

0xe677,	// (0x00010953) bg_active_tab_pane_cp3_srt_ParamLimits

0xe677,	// (0x00010953) bg_active_tab_pane_cp3_srt

0xbe6f,	// (0x0000e14b) tabs_4_active_pane_srt_g1

0xbe77,	// (0x0000e153) tabs_4_active_pane_srt_t1_ParamLimits

0xbe77,	// (0x0000e153) tabs_4_active_pane_srt_t1

0xbe5d,	// (0x0000e139) bg_active_tab_pane_g1_cp3_copy1

0xa41c,	// (0x0000c6f8) bg_active_tab_pane_g2_cp3_copy1

0xbe66,	// (0x0000e142) bg_active_tab_pane_g3_cp3_copy1

0xe685,	// (0x00010961) tabs_2_long_active_pane_srt_ParamLimits

0xe685,	// (0x00010961) tabs_2_long_active_pane_srt

0xe685,	// (0x00010961) tabs_2_long_passive_pane_srt_ParamLimits

0xe685,	// (0x00010961) tabs_2_long_passive_pane_srt

0x07ad,	// (0x00002a89) bg_passive_tab_pane_cp4_srt_ParamLimits

0x07ad,	// (0x00002a89) bg_passive_tab_pane_cp4_srt

0xbb4d,	// (0x0000de29) bg_passive_tab_pane_g1_cp4_srt

0xa41c,	// (0x0000c6f8) bg_passive_tab_pane_g2_cp4_srt

0xbb56,	// (0x0000de32) bg_passive_tab_pane_g3_cp4_srt

0xe685,	// (0x00010961) bg_active_tab_pane_cp4_srt_ParamLimits

0xe685,	// (0x00010961) bg_active_tab_pane_cp4_srt

0xbb5f,	// (0x0000de3b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbb5f,	// (0x0000de3b) tabs_2_long_active_pane_srt_t1

0xbb4d,	// (0x0000de29) bg_active_tab_pane_g1_cp4_srt

0xa41c,	// (0x0000c6f8) bg_active_tab_pane_g2_cp4_srt

0xbb56,	// (0x0000de32) bg_active_tab_pane_g3_cp4_srt

0xe677,	// (0x00010953) tabs_3_long_active_pane_srt_ParamLimits

0xe677,	// (0x00010953) tabs_3_long_active_pane_srt

0xe677,	// (0x00010953) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe677,	// (0x00010953) tabs_3_long_passive_pane_cp_srt

0xe677,	// (0x00010953) tabs_3_long_passive_pane_srt_ParamLimits

0xe677,	// (0x00010953) tabs_3_long_passive_pane_srt

0x07ad,	// (0x00002a89) bg_passive_tab_pane_cp5_srt_ParamLimits

0x07ad,	// (0x00002a89) bg_passive_tab_pane_cp5_srt

0xa468,	// (0x0000c744) bg_passive_tab_pane_g1_cp5_srt

0xa41c,	// (0x0000c6f8) bg_passive_tab_pane_g2_cp5_srt

0xa471,	// (0x0000c74d) bg_passive_tab_pane_g3_cp5_srt

0xe685,	// (0x00010961) bg_active_tab_pane_cp5_srt_ParamLimits

0xe685,	// (0x00010961) bg_active_tab_pane_cp5_srt

0xbb37,	// (0x0000de13) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbb37,	// (0x0000de13) tabs_3_long_active_pane_srt_t1

0xa468,	// (0x0000c744) bg_active_tab_pane_g1_cp5_srt

0xa41c,	// (0x0000c6f8) bg_active_tab_pane_g2_cp5_srt

0xa471,	// (0x0000c74d) bg_active_tab_pane_g3_cp5_srt

0x2a0e,	// (0x00004cea) navi_text_pane_srt_t1

0x2a06,	// (0x00004ce2) navi_icon_pane_srt_g1

0x04d1,	// (0x000027ad) midp_editing_number_pane_srt

0x0266,	// (0x00002542) midp_ticker_pane_srt

0x04d9,	// (0x000027b5) midp_ticker_pane_srt_g1

0x04e1,	// (0x000027bd) midp_ticker_pane_srt_g2

0x0001,

0xf75e,	// (0x00011a3a) midp_ticker_pane_srt_g

0x04e9,	// (0x000027c5) midp_ticker_pane_srt_t1

0x29f7,	// (0x00004cd3) midp_editing_number_pane_t1_copy1

0xa4f5,	// (0x0000c7d1) listscroll_midp_pane

0xa4f5,	// (0x0000c7d1) midp_form_pane

0xa560,	// (0x0000c83c) midp_info_popup_window_ParamLimits

0xa560,	// (0x0000c83c) midp_info_popup_window

0xebd2,	// (0x00010eae) bg_popup_sub_pane_cp50_ParamLimits

0xebd2,	// (0x00010eae) bg_popup_sub_pane_cp50

0x1973,	// (0x00003c4f) listscroll_midp_info_pane_ParamLimits

0x1973,	// (0x00003c4f) listscroll_midp_info_pane

0x1953,	// (0x00003c2f) listscroll_form_midp_pane_ParamLimits

0x1953,	// (0x00003c2f) listscroll_form_midp_pane

0x195f,	// (0x00003c3b) scroll_bar_cp050

0x1953,	// (0x00003c2f) list_midp_pane

0xc067,	// (0x0000e343) signal_pane_g2_cp

0x186d,	// (0x00003b49) listscroll_midp_info_pane_t1_ParamLimits

0x186d,	// (0x00003b49) listscroll_midp_info_pane_t1

0xb5c3,	// (0x0000d89f) listscroll_midp_info_pane_t2_ParamLimits

0xb5c3,	// (0x0000d89f) listscroll_midp_info_pane_t2

0xb601,	// (0x0000d8dd) listscroll_midp_info_pane_t3_ParamLimits

0xb601,	// (0x0000d8dd) listscroll_midp_info_pane_t3

0xb63b,	// (0x0000d917) listscroll_midp_info_pane_t4_ParamLimits

0xb63b,	// (0x0000d917) listscroll_midp_info_pane_t4

0x0003,

0xf80a,	// (0x00011ae6) listscroll_midp_info_pane_t_ParamLimits

0xf80a,	// (0x00011ae6) listscroll_midp_info_pane_t

0xec48,	// (0x00010f24) scroll_pane_cp21

0x180d,	// (0x00003ae9) form_midp_field_choice_group_pane

0xb586,	// (0x0000d862) form_midp_field_text_pane

0x1853,	// (0x00003b2f) form_midp_field_time_pane

0x185b,	// (0x00003b37) form_midp_gauge_slider_pane

0x1864,	// (0x00003b40) form_midp_gauge_wait_pane

0xe609,	// (0x000108e5) form_midp_image_pane

0xb56f,	// (0x0000d84b) list_single_midp_pane_ParamLimits

0xb56f,	// (0x0000d84b) list_single_midp_pane

0xb54d,	// (0x0000d829) form_midp_field_text_pane_t1

0x14c3,	// (0x0000379f) input_focus_pane_cp050

0x17ca,	// (0x00003aa6) list_midp_form_text_pane

0x175f,	// (0x00003a3b) form_midp_field_choice_group_pane_t1

0x176d,	// (0x00003a49) input_focus_pane_cp051

0x1781,	// (0x00003a5d) list_midp_choice_pane

0xe609,	// (0x000108e5) status_idle_pane

0x1743,	// (0x00003a1f) form_midp_field_time_pane_t1

0xe490,	// (0x0001076c) wait_anim_pane_g2_copy1

0x1751,	// (0x00003a2d) form_midp_field_time_pane_t2

0x0001,

0x0390,	// (0x0000266c) aid_navinavi_width_2_pane

0xf805,	// (0x00011ae1) form_midp_field_time_pane_t

0xe609,	// (0x000108e5) input_focus_pane_cp052

0xe609,	// (0x000108e5) bg_input_focus_pane_cp040

0x1703,	// (0x000039df) form_midp_gauge_slider_pane_t1

0x1711,	// (0x000039ed) form_midp_gauge_slider_pane_t2

0xb531,	// (0x0000d80d) form_midp_gauge_slider_pane_t3

0xb53f,	// (0x0000d81b) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fc,	// (0x00011ad8) form_midp_gauge_slider_pane_t

0x173b,	// (0x00003a17) form_midp_slider_pane

0xe685,	// (0x00010961) bg_input_focus_pane_cp041_ParamLimits

0xe685,	// (0x00010961) bg_input_focus_pane_cp041

0x16d0,	// (0x000039ac) form_midp_gauge_wait_pane_t1_ParamLimits

0x16d0,	// (0x000039ac) form_midp_gauge_wait_pane_t1

0x16e2,	// (0x000039be) form_midp_gauge_wait_pane_t2_ParamLimits

0x16e2,	// (0x000039be) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f7,	// (0x00011ad3) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f7,	// (0x00011ad3) form_midp_gauge_wait_pane_t

0x16f4,	// (0x000039d0) form_midp_wait_pane_ParamLimits

0x16f4,	// (0x000039d0) form_midp_wait_pane

0xb4fb,	// (0x0000d7d7) form_midp_image_pane_g1

0xb504,	// (0x0000d7e0) form_midp_image_pane_t1

0xb513,	// (0x0000d7ef) form_midp_image_pane_t2

0xb522,	// (0x0000d7fe) form_midp_image_pane_t3

0x0002,

0xf7f0,	// (0x00011acc) form_midp_image_pane_t

0x1682,	// (0x0000395e) list_single_midp_pane_g1

0x168b,	// (0x00003967) list_single_midp_pane_t1

0xb4e6,	// (0x0000d7c2) list_midp_form_item_pane_ParamLimits

0xb4e6,	// (0x0000d7c2) list_midp_form_item_pane

0x0338,	// (0x00002614) list_midp_form_item_pane_t1

0x0347,	// (0x00002623) midp_ticker_pane_g1

0x0353,	// (0x0000262f) midp_ticker_pane_g2

0x0001,

0xf744,	// (0x00011a20) midp_ticker_pane_g

0x035f,	// (0x0000263b) midp_ticker_pane_t1

0x2cef,	// (0x00004fcb) midp_editing_number_pane_t1

0x2ccd,	// (0x00004fa9) midp_editing_number_pane

0x2cdc,	// (0x00004fb8) midp_ticker_pane

0x29d5,	// (0x00004cb1) ai_message_heading_pane

0xe609,	// (0x000108e5) bg_popup_window_pane_cp14

0x29dd,	// (0x00004cb9) listscroll_ai_message_pane

0x295f,	// (0x00004c3b) ai_message_heading_pane_g1_ParamLimits

0x295f,	// (0x00004c3b) ai_message_heading_pane_g1

0xbaed,	// (0x0000ddc9) ai_message_heading_pane_g2_ParamLimits

0xbaed,	// (0x0000ddc9) ai_message_heading_pane_g2

0x2977,	// (0x00004c53) ai_message_heading_pane_g3_ParamLimits

0x2977,	// (0x00004c53) ai_message_heading_pane_g3

0x2983,	// (0x00004c5f) ai_message_heading_pane_g4_ParamLimits

0x2983,	// (0x00004c5f) ai_message_heading_pane_g4

0x0003,

0xf931,	// (0x00011c0d) ai_message_heading_pane_g_ParamLimits

0xf931,	// (0x00011c0d) ai_message_heading_pane_g

0xbaf9,	// (0x0000ddd5) ai_message_heading_pane_t1_ParamLimits

0xbaf9,	// (0x0000ddd5) ai_message_heading_pane_t1

0xbb13,	// (0x0000ddef) ai_message_heading_pane_t2_ParamLimits

0xbb13,	// (0x0000ddef) ai_message_heading_pane_t2

0x0001,

0xf93a,	// (0x00011c16) ai_message_heading_pane_t_ParamLimits

0xf93a,	// (0x00011c16) ai_message_heading_pane_t

0x29bb,	// (0x00004c97) bg_popup_heading_pane_cp1_ParamLimits

0x29bb,	// (0x00004c97) bg_popup_heading_pane_cp1

0x294d,	// (0x00004c29) list_ai_message_pane_ParamLimits

0x294d,	// (0x00004c29) list_ai_message_pane

0xec48,	// (0x00010f24) scroll_pane_cp10

0x2899,	// (0x00004b75) list_ai_message_pane_g1

0x28a1,	// (0x00004b7d) list_ai_message_pane_g2

0x0001,

0xf90e,	// (0x00011bea) list_ai_message_pane_g

0x28a9,	// (0x00004b85) list_ai_message_pane_t1_ParamLimits

0x28a9,	// (0x00004b85) list_ai_message_pane_t1

0x28be,	// (0x00004b9a) list_ai_message_pane_t2_ParamLimits

0x28be,	// (0x00004b9a) list_ai_message_pane_t2

0x28d3,	// (0x00004baf) list_ai_message_pane_t3_ParamLimits

0x28d3,	// (0x00004baf) list_ai_message_pane_t3

0x28e8,	// (0x00004bc4) list_ai_message_pane_t4_ParamLimits

0x28e8,	// (0x00004bc4) list_ai_message_pane_t4

0x0003,

0xf913,	// (0x00011bef) list_ai_message_pane_t_ParamLimits

0xf913,	// (0x00011bef) list_ai_message_pane_t

0xba79,	// (0x0000dd55) cell_ai_soft_ind_pane_ParamLimits

0xba79,	// (0x0000dd55) cell_ai_soft_ind_pane

0x0371,	// (0x0000264d) cell_ai_soft_ind_pane_g1_ParamLimits

0x0371,	// (0x0000264d) cell_ai_soft_ind_pane_g1

0xe609,	// (0x000108e5) grid_highlight_cp1

0x037e,	// (0x0000265a) text_secondary_cp56_ParamLimits

0x037e,	// (0x0000265a) text_secondary_cp56

0x2859,	// (0x00004b35) example_general_pane_ParamLimits

0x2859,	// (0x00004b35) example_general_pane

0x2865,	// (0x00004b41) example_parent_pane_g1_ParamLimits

0x2865,	// (0x00004b41) example_parent_pane_g1

0x2871,	// (0x00004b4d) example_parent_pane_t1_ParamLimits

0x2871,	// (0x00004b4d) example_parent_pane_t1

0xac6a,	// (0x0000cf46) popup_preview_text_window_ParamLimits

0xac6a,	// (0x0000cf46) popup_preview_text_window

0x0197,	// (0x00002473) list_single_pane_cp2_g4

0xe871,	// (0x00010b4d) bg_popup_preview_window_pane_ParamLimits

0xe871,	// (0x00010b4d) bg_popup_preview_window_pane

0xb9db,	// (0x0000dcb7) popup_preview_text_window_t1_ParamLimits

0xb9db,	// (0x0000dcb7) popup_preview_text_window_t1

0x25d1,	// (0x000048ad) popup_preview_text_window_t2_ParamLimits

0x25d1,	// (0x000048ad) popup_preview_text_window_t2

0x261a,	// (0x000048f6) popup_preview_text_window_t3_ParamLimits

0x261a,	// (0x000048f6) popup_preview_text_window_t3

0x265f,	// (0x0000493b) popup_preview_text_window_t4_ParamLimits

0x265f,	// (0x0000493b) popup_preview_text_window_t4

0x0004,

0xf8e2,	// (0x00011bbe) popup_preview_text_window_t_ParamLimits

0xf8e2,	// (0x00011bbe) popup_preview_text_window_t

0x26dd,	// (0x000049b9) scroll_pane_cp11

0x1337,	// (0x00003613) bg_popup_preview_window_pane_g1

0xb99b,	// (0x0000dc77) bg_popup_preview_window_pane_g2

0xb9a3,	// (0x0000dc7f) bg_popup_preview_window_pane_g3

0xb9ab,	// (0x0000dc87) bg_popup_preview_window_pane_g4

0xb9b3,	// (0x0000dc8f) bg_popup_preview_window_pane_g5

0xb9bb,	// (0x0000dc97) bg_popup_preview_window_pane_g6

0xb9c3,	// (0x0000dc9f) bg_popup_preview_window_pane_g7

0xb9cb,	// (0x0000dca7) bg_popup_preview_window_pane_g8

0xe4a6,	// (0x00010782) aid_popup_width_pane

0xabe6,	// (0x0000cec2) popup_midp_note_alarm_window_ParamLimits

0xabe6,	// (0x0000cec2) popup_midp_note_alarm_window

0xeabb,	// (0x00010d97) data_form_pane_ParamLimits

0x9ef4,	// (0x0000c1d0) form_field_data_pane_g1

0x9efe,	// (0x0000c1da) form_field_data_pane_t1_ParamLimits

0xeac7,	// (0x00010da3) input_focus_pane_ParamLimits

0xead5,	// (0x00010db1) data_form_wide_pane_ParamLimits

0xeae6,	// (0x00010dc2) form_field_data_wide_pane_g1

0xeb06,	// (0x00010de2) form_field_data_wide_pane_t1_ParamLimits

0xe945,	// (0x00010c21) input_focus_pane_cp6_ParamLimits

0xa070,	// (0x0000c34c) input_popup_find_pane_g1_ParamLimits

0xa070,	// (0x0000c34c) input_popup_find_pane_g1

0xeeed,	// (0x000111c9) aid_navi_side_left_pane

0xef02,	// (0x000111de) aid_navi_side_right_pane

0x1e32,	// (0x0000410e) bg_popup_window_pane_cp30_ParamLimits

0x1e32,	// (0x0000410e) bg_popup_window_pane_cp30

0x1eac,	// (0x00004188) popup_midp_note_alarm_window_g1_ParamLimits

0x1eac,	// (0x00004188) popup_midp_note_alarm_window_g1

0x1edc,	// (0x000041b8) popup_midp_note_alarm_window_t1_ParamLimits

0x1edc,	// (0x000041b8) popup_midp_note_alarm_window_t1

0xb7dc,	// (0x0000dab8) popup_midp_note_alarm_window_t2_ParamLimits

0xb7dc,	// (0x0000dab8) popup_midp_note_alarm_window_t2

0xb88a,	// (0x0000db66) popup_midp_note_alarm_window_t3_ParamLimits

0xb88a,	// (0x0000db66) popup_midp_note_alarm_window_t3

0xb8b2,	// (0x0000db8e) popup_midp_note_alarm_window_t4_ParamLimits

0xb8b2,	// (0x0000db8e) popup_midp_note_alarm_window_t4

0x2073,	// (0x0000434f) popup_midp_note_alarm_window_t5_ParamLimits

0x2073,	// (0x0000434f) popup_midp_note_alarm_window_t5

0x000a,

0xf87f,	// (0x00011b5b) popup_midp_note_alarm_window_t_ParamLimits

0xf87f,	// (0x00011b5b) popup_midp_note_alarm_window_t

0x211f,	// (0x000043fb) wait_bar_pane_cp1_ParamLimits

0x211f,	// (0x000043fb) wait_bar_pane_cp1

0xe609,	// (0x000108e5) wait_anim_pane_copy1

0xe609,	// (0x000108e5) wait_border_pane_copy1

0x1b28,	// (0x00003e04) wait_border_pane_g1_copy1

0xeb20,	// (0x00010dfc) form_field_popup_pane_g1

0x9f18,	// (0x0000c1f4) form_field_popup_pane_t1_ParamLimits

0xeac7,	// (0x00010da3) input_focus_pane_cp7_ParamLimits

0xeb28,	// (0x00010e04) list_form_pane_ParamLimits

0xeb34,	// (0x00010e10) form_field_popup_wide_pane_g1

0xeb3c,	// (0x00010e18) form_field_popup_wide_pane_t1_ParamLimits

0xeac7,	// (0x00010da3) input_focus_pane_cp8_ParamLimits

0xeb51,	// (0x00010e2d) list_form_wide_pane_ParamLimits

0xbed0,	// (0x0000e1ac) aid_size_cell_graphic_pane

0x9f97,	// (0x0000c273) data_form_pane_t1_ParamLimits

0xbd69,	// (0x0000e045) data_form_wide_pane_t1_ParamLimits

0xb0ad,	// (0x0000d389) bg_status_flat_pane

0x94d2,	// (0x0000b7ae) title_pane_t1_ParamLimits

0xe63f,	// (0x0001091b) title_pane_t2_ParamLimits

0xe665,	// (0x00010941) title_pane_t3_ParamLimits

0xf557,	// (0x00011833) title_pane_t_ParamLimits

0xf0b0,	// (0x0001138c) level_1_signal_ParamLimits

0xf0bd,	// (0x00011399) level_2_signal_ParamLimits

0xf0ca,	// (0x000113a6) level_3_signal_ParamLimits

0xf0d7,	// (0x000113b3) level_4_signal_ParamLimits

0xf0e4,	// (0x000113c0) level_5_signal_ParamLimits

0xf0f1,	// (0x000113cd) level_6_signal_ParamLimits

0xf0fe,	// (0x000113da) level_7_signal_ParamLimits

0xf0b0,	// (0x0001138c) level_1_battery_ParamLimits

0xf0bd,	// (0x00011399) level_2_battery_ParamLimits

0xf0ca,	// (0x000113a6) level_3_battery_ParamLimits

0xf0d7,	// (0x000113b3) level_4_battery_ParamLimits

0xf0e4,	// (0x000113c0) level_5_battery_ParamLimits

0xf0f1,	// (0x000113cd) level_6_battery_ParamLimits

0xf0fe,	// (0x000113da) level_7_battery_ParamLimits

0x1d37,	// (0x00004013) bg_status_flat_pane_g1

0x1d3f,	// (0x0000401b) bg_status_flat_pane_g2

0x1d47,	// (0x00004023) bg_status_flat_pane_g3

0x1d4f,	// (0x0000402b) bg_status_flat_pane_g4

0x1d57,	// (0x00004033) bg_status_flat_pane_g5

0x1d5f,	// (0x0000403b) bg_status_flat_pane_g6

0x1d67,	// (0x00004043) bg_status_flat_pane_g7

0x9566,	// (0x0000b842) tabs_3_active_pane_t1_ParamLimits

0x9566,	// (0x0000b842) tabs_3_passive_pane_t1_ParamLimits

0x9580,	// (0x0000b85c) tabs_4_active_pane_t1_ParamLimits

0x9580,	// (0x0000b85c) tabs_4_1_passive_pane_t1_ParamLimits

0xa0af,	// (0x0000c38b) tabs_2_active_pane_t1_ParamLimits

0xa0af,	// (0x0000c38b) tabs_2_passive_pane_t1_ParamLimits

0xe685,	// (0x00010961) bg_active_tab_pane_cp4_ParamLimits

0xa0c1,	// (0x0000c39d) tabs_2_long_active_pane_t1_ParamLimits

0x07ad,	// (0x00002a89) bg_passive_tab_pane_cp4_ParamLimits

0x13e8,	// (0x000036c4) list_single_midp_graphic_pane_t1_ParamLimits

0xe685,	// (0x00010961) bg_active_tab_pane_cp5_ParamLimits

0xa0d4,	// (0x0000c3b0) tabs_3_long_active_pane_t1_ParamLimits

0x07ad,	// (0x00002a89) bg_passive_tab_pane_cp5_ParamLimits

0x13e8,	// (0x000036c4) list_single_midp_graphic_pane_t1

0xb0ad,	// (0x0000d389) bg_status_flat_pane_ParamLimits

0x0f26,	// (0x00003202) indicator_pane_cp2_ParamLimits

0x0f26,	// (0x00003202) indicator_pane_cp2

0xb22b,	// (0x0000d507) navi_pane_srt_ParamLimits

0xb22b,	// (0x0000d507) navi_pane_srt

0x1075,	// (0x00003351) popup_clock_digital_analogue_window_cp1

0xe6e3,	// (0x000109bf) indicator_pane_t1

0x0266,	// (0x00002542) copy_highlight_pane

0x0266,	// (0x00002542) cursor_graphics_pane

0x0266,	// (0x00002542) graphic_within_text_pane

0x0266,	// (0x00002542) link_highlight_pane

0x26a0,	// (0x0000497c) popup_preview_text_window_t5_ParamLimits

0x26a0,	// (0x0000497c) popup_preview_text_window_t5

0x0398,	// (0x00002674) cursor_digital_pane

0x0398,	// (0x00002674) cursor_primary_pane

0x03a9,	// (0x00002685) cursor_primary_small_pane

0x03b1,	// (0x0000268d) cursor_secondary_pane

0x03b9,	// (0x00002695) cursor_title_pane

0x0398,	// (0x00002674) link_highlight_digital_pane

0x03a0,	// (0x0000267c) link_highlight_primary_pane

0x03a9,	// (0x00002685) link_highlight_primary_small_pane

0x03b1,	// (0x0000268d) link_highlight_secondary_pane

0x03b9,	// (0x00002695) link_highlight_title_pane

0x0398,	// (0x00002674) copy_highlight_digital_pane

0x0398,	// (0x00002674) copy_highlight_primary_pane

0x03a9,	// (0x00002685) copy_highlight_primary_small_pane

0x03b1,	// (0x0000268d) copy_highlight_secondary_pane

0x03b9,	// (0x00002695) copy_highlight_title_pane

0x03b1,	// (0x0000268d) graphic_text_digital_pane

0x1dd5,	// (0x000040b1) graphic_text_primary_pane

0x1dde,	// (0x000040ba) graphic_text_primary_small_pane

0x03a9,	// (0x00002685) graphic_text_secondary_pane

0x0398,	// (0x00002674) graphic_text_title_pane

0xa5b1,	// (0x0000c88d) cursor_primary_pane_g1

0x1dc7,	// (0x000040a3) cursor_text_primary_t1

0xb7d2,	// (0x0000daae) cursor_primary_small_pane_g1

0x1db9,	// (0x00004095) cursor_text_primary_small_t1

0xb7c8,	// (0x0000daa4) cursor_primary_small_pane_g1_copy1

0x1da1,	// (0x0000407d) cursor_text_primary_small_t1_copy1

0x1d7f,	// (0x0000405b) cursor_text_title_t1

0xb7be,	// (0x0000da9a) cursor_title_pane_g1

0xa5b1,	// (0x0000c88d) cursor_digital_pane_g1

0x03cb,	// (0x000026a7) cursor_text_digital_t1

0x03d9,	// (0x000026b5) link_highlight_primary_pane_g1

0x1d28,	// (0x00004004) link_highlight_primary_pane_t1

0x03d9,	// (0x000026b5) link_highlight_primary_small_pane_g1

0x03e1,	// (0x000026bd) link_highlight_primary_small_pane_t1

0x03d9,	// (0x000026b5) link_highlight_secondary_pane_g1

0x03f0,	// (0x000026cc) link_highlight_secondary_pane_t1

0x1c8d,	// (0x00003f69) link_highlight_title_pane_g1

0x1ca4,	// (0x00003f80) link_highlight_title_pane_t1

0x1c8d,	// (0x00003f69) link_highlight_digital_pane_g1

0x1c95,	// (0x00003f71) link_highlight_digital_pane_t1

0x1b47,	// (0x00003e23) copy_highlight_primary_pane_g1

0x1b6d,	// (0x00003e49) copy_highlight_primary_pane_t1

0x1b47,	// (0x00003e23) copy_highlight_primary_small_pane_g1

0x1b5e,	// (0x00003e3a) copy_highlight_primary_small_pane_t1

0x03ff,	// (0x000026db) copy_highlight_secondary_pane_g1

0x0407,	// (0x000026e3) copy_highlight_secondary_pane_t1

0x1b47,	// (0x00003e23) copy_highlight_title_pane_g1

0x1b4f,	// (0x00003e2b) copy_highlight_title_pane_t1

0x1b47,	// (0x00003e23) copy_highlight_digital_pane_g1

0x319b,	// (0x00005477) copy_highlight_digital_pane_t1

0x30ef,	// (0x000053cb) graphic_text_primary_pane_g1

0x317f,	// (0x0000545b) graphic_text_primary_pane_t1

0x318d,	// (0x00005469) graphic_text_primary_pane_t2

0x0001,

0xf9ae,	// (0x00011c8a) graphic_text_primary_pane_t

0x315b,	// (0x00005437) graphic_text_primary_small_pane_g1

0x3163,	// (0x0000543f) graphic_text_primary_small_pane_t1

0x3171,	// (0x0000544d) graphic_text_primary_small_pane_t2

0x0001,

0xf9a9,	// (0x00011c85) graphic_text_primary_small_pane_t

0x3137,	// (0x00005413) graphic_text_secondary_pane_g1

0x313f,	// (0x0000541b) graphic_text_secondary_pane_t1

0x314d,	// (0x00005429) graphic_text_secondary_pane_t2

0x0001,

0xf9a4,	// (0x00011c80) graphic_text_secondary_pane_t

0x3113,	// (0x000053ef) graphic_text_title_pane_g1

0x311b,	// (0x000053f7) graphic_text_title_pane_t1

0x3129,	// (0x00005405) graphic_text_title_pane_t2

0x0001,

0xf99f,	// (0x00011c7b) graphic_text_title_pane_t

0x30ef,	// (0x000053cb) graphic_text_digital_pane_g1

0x30f7,	// (0x000053d3) graphic_text_digital_pane_t1

0x3105,	// (0x000053e1) graphic_text_digital_pane_t2

0x0001,

0xf99a,	// (0x00011c76) graphic_text_digital_pane_t

0xe685,	// (0x00010961) navi_icon_pane_srt_ParamLimits

0xe685,	// (0x00010961) navi_icon_pane_srt

0xe609,	// (0x000108e5) navi_midp_pane_srt

0xe609,	// (0x000108e5) navi_navi_pane_srt

0xe685,	// (0x00010961) navi_text_pane_srt_ParamLimits

0xe685,	// (0x00010961) navi_text_pane_srt

0x30ba,	// (0x00005396) navi_navi_icon_text_pane_srt

0x30c2,	// (0x0000539e) navi_navi_pane_srt_g1_ParamLimits

0x30c2,	// (0x0000539e) navi_navi_pane_srt_g1

0x30d4,	// (0x000053b0) navi_navi_pane_srt_g2_ParamLimits

0x30d4,	// (0x000053b0) navi_navi_pane_srt_g2

0x0001,

0xf995,	// (0x00011c71) navi_navi_pane_srt_g_ParamLimits

0xf995,	// (0x00011c71) navi_navi_pane_srt_g

0x30e6,	// (0x000053c2) navi_navi_tabs_pane_srt

0x30ba,	// (0x00005396) navi_navi_text_pane_srt

0x30ba,	// (0x00005396) navi_navi_volume_pane_srt

0x30ab,	// (0x00005387) navi_navi_text_pane_srt_t1

0x3086,	// (0x00005362) navi_navi_volume_pane_srt_g1

0x308e,	// (0x0000536a) volume_small_pane_srt_ParamLimits

0x308e,	// (0x0000536a) volume_small_pane_srt

0x0416,	// (0x000026f2) volume_small_pane_srt_g1_ParamLimits

0x0416,	// (0x000026f2) volume_small_pane_srt_g1

0x0426,	// (0x00002702) volume_small_pane_srt_g2_ParamLimits

0x0426,	// (0x00002702) volume_small_pane_srt_g2

0x0437,	// (0x00002713) volume_small_pane_srt_g3_ParamLimits

0x0437,	// (0x00002713) volume_small_pane_srt_g3

0x0448,	// (0x00002724) volume_small_pane_srt_g4_ParamLimits

0x0448,	// (0x00002724) volume_small_pane_srt_g4

0x0459,	// (0x00002735) volume_small_pane_srt_g5_ParamLimits

0x0459,	// (0x00002735) volume_small_pane_srt_g5

0x046a,	// (0x00002746) volume_small_pane_srt_g6_ParamLimits

0x046a,	// (0x00002746) volume_small_pane_srt_g6

0x047b,	// (0x00002757) volume_small_pane_srt_g7_ParamLimits

0x047b,	// (0x00002757) volume_small_pane_srt_g7

0x048c,	// (0x00002768) volume_small_pane_srt_g8_ParamLimits

0x048c,	// (0x00002768) volume_small_pane_srt_g8

0x049d,	// (0x00002779) volume_small_pane_srt_g9_ParamLimits

0x049d,	// (0x00002779) volume_small_pane_srt_g9

0x04ae,	// (0x0000278a) volume_small_pane_srt_g10_ParamLimits

0x04ae,	// (0x0000278a) volume_small_pane_srt_g10

0x0009,

0xf749,	// (0x00011a25) volume_small_pane_srt_g_ParamLimits

0xf749,	// (0x00011a25) volume_small_pane_srt_g

0x9867,	// (0x0000bb43) query_popup_data_pane_cp2

0x3074,	// (0x00005350) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3074,	// (0x00005350) navi_navi_icon_text_pane_srt_t1

0x1dd5,	// (0x000040b1) navi_tabs_2_long_pane_srt

0x1dd5,	// (0x000040b1) navi_tabs_2_pane_srt

0x1dd5,	// (0x000040b1) navi_tabs_3_long_pane_srt

0x1dd5,	// (0x000040b1) navi_tabs_3_pane_srt

0x1dd5,	// (0x000040b1) navi_tabs_4_pane_srt

0xbf7d,	// (0x0000e259) tabs_2_active_pane_srt_ParamLimits

0xbf7d,	// (0x0000e259) tabs_2_active_pane_srt

0xbf8d,	// (0x0000e269) tabs_2_passive_pane_srt_ParamLimits

0xbf8d,	// (0x0000e269) tabs_2_passive_pane_srt

0x14c3,	// (0x0000379f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x14c3,	// (0x0000379f) bg_passive_tab_pane_cp1_srt

0xbf4d,	// (0x0000e229) bg_passive_tab_pane_g1_cp1_srt

0xa41c,	// (0x0000c6f8) bg_passive_tab_pane_g2_cp1_srt

0xbf56,	// (0x0000e232) bg_passive_tab_pane_g3_cp1_srt

0xe677,	// (0x00010953) bg_active_tab_pane_cp1_srt_ParamLimits

0xe677,	// (0x00010953) bg_active_tab_pane_cp1_srt

0xbf5f,	// (0x0000e23b) tabs_2_active_pane_srt_g1

0xbf67,	// (0x0000e243) tabs_2_active_pane_srt_t1_ParamLimits

0xbf67,	// (0x0000e243) tabs_2_active_pane_srt_t1

0xbf4d,	// (0x0000e229) bg_active_tab_pane_g1_cp1_srt

0xa41c,	// (0x0000c6f8) bg_active_tab_pane_g2_cp1_srt

0xbf56,	// (0x0000e232) bg_active_tab_pane_g3_cp1_srt

0xbf1a,	// (0x0000e1f6) tabs_3_active_pane_srt_ParamLimits

0xbf1a,	// (0x0000e1f6) tabs_3_active_pane_srt

0xbf2b,	// (0x0000e207) tabs_3_passive_pane_cp_srt_ParamLimits

0xbf2b,	// (0x0000e207) tabs_3_passive_pane_cp_srt

0xbf3c,	// (0x0000e218) tabs_3_passive_pane_srt_ParamLimits

0xbf3c,	// (0x0000e218) tabs_3_passive_pane_srt

0x14c3,	// (0x0000379f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x14c3,	// (0x0000379f) bg_passive_tab_pane_cp2_srt

0xa5bb,	// (0x0000c897) bg_passive_tab_pane_g1_cp2_srt

0xa41c,	// (0x0000c6f8) bg_passive_tab_pane_g2_cp2_srt

0xa5c4,	// (0x0000c8a0) bg_passive_tab_pane_g3_cp2_srt

0xe677,	// (0x00010953) bg_active_tab_pane_cp2_srt_ParamLimits

0xe677,	// (0x00010953) bg_active_tab_pane_cp2_srt

0xbefc,	// (0x0000e1d8) tabs_3_active_pane_srt_g1

0xbf04,	// (0x0000e1e0) tabs_3_active_pane_srt_t1_ParamLimits

0xbf04,	// (0x0000e1e0) tabs_3_active_pane_srt_t1

0xa5bb,	// (0x0000c897) bg_active_tab_pane_g1_cp2_srt

0xa41c,	// (0x0000c6f8) bg_active_tab_pane_g2_cp2_srt

0xa5c4,	// (0x0000c8a0) bg_active_tab_pane_g3_cp2_srt

0x2f8b,	// (0x00005267) tabs_4_active_pane_srt_ParamLimits

0x2f8b,	// (0x00005267) tabs_4_active_pane_srt

0x2f9d,	// (0x00005279) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2f9d,	// (0x00005279) tabs_4_passive_pane_cp2_srt

0x076d,	// (0x00002a49) aid_size_cell_toolbar

0x2b17,	// (0x00004df3) main_idle_act_pane_ParamLimits

0xaa28,	// (0x0000cd04) popup_large_graphic_colour_window_ParamLimits

0xaf1c,	// (0x0000d1f8) popup_toolbar_window_ParamLimits

0xaf1c,	// (0x0000d1f8) popup_toolbar_window

0x2d1a,	// (0x00004ff6) list_single_graphic_2heading_pane_ParamLimits

0x2d1a,	// (0x00004ff6) list_single_graphic_2heading_pane

0xef79,	// (0x00011255) aid_size_cell_apps_grid_lsc_pane

0xef8b,	// (0x00011267) aid_size_cell_apps_grid_prt_pane

0x07ad,	// (0x00002a89) bg_wml_button_pane_cp1_ParamLimits

0x07ad,	// (0x00002a89) bg_wml_button_pane_cp1

0xb54d,	// (0x0000d829) form_midp_field_text_pane_t1_ParamLimits

0x14c3,	// (0x0000379f) input_focus_pane_cp050_ParamLimits

0x17ca,	// (0x00003aa6) list_midp_form_text_pane_ParamLimits

0x176d,	// (0x00003a49) input_focus_pane_cp051_ParamLimits

0x1781,	// (0x00003a5d) list_midp_choice_pane_ParamLimits

0xb4b2,	// (0x0000d78e) list_single_2graphic_pane_cp3_ParamLimits

0xb4b2,	// (0x0000d78e) list_single_2graphic_pane_cp3

0xb4c6,	// (0x0000d7a2) list_single_midp_graphic_pane_ParamLimits

0xb4c6,	// (0x0000d7a2) list_single_midp_graphic_pane

0x11d1,	// (0x000034ad) list_single_graphic_2heading_pane_g1_ParamLimits

0x11d1,	// (0x000034ad) list_single_graphic_2heading_pane_g1

0xea01,	// (0x00010cdd) list_single_graphic_2heading_pane_g4_ParamLimits

0xea01,	// (0x00010cdd) list_single_graphic_2heading_pane_g4

0xea0d,	// (0x00010ce9) list_single_graphic_2heading_pane_g5_ParamLimits

0xea0d,	// (0x00010ce9) list_single_graphic_2heading_pane_g5

0x0002,

0xf79c,	// (0x00011a78) list_single_graphic_2heading_pane_g_ParamLimits

0xf79c,	// (0x00011a78) list_single_graphic_2heading_pane_g

0x11dd,	// (0x000034b9) list_single_graphic_2heading_pane_t1_ParamLimits

0x11dd,	// (0x000034b9) list_single_graphic_2heading_pane_t1

0x11f1,	// (0x000034cd) list_single_graphic_2heading_pane_t2_ParamLimits

0x11f1,	// (0x000034cd) list_single_graphic_2heading_pane_t2

0x120b,	// (0x000034e7) list_single_graphic_2heading_pane_t3_ParamLimits

0x120b,	// (0x000034e7) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a3,	// (0x00011a7f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a3,	// (0x00011a7f) list_single_graphic_2heading_pane_t

0x1223,	// (0x000034ff) bg_popup_sub_pane_cp2

0x124d,	// (0x00003529) grid_toobar_pane

0x1289,	// (0x00003565) cell_toolbar_pane_ParamLimits

0x1289,	// (0x00003565) cell_toolbar_pane

0x12db,	// (0x000035b7) cell_toolbar_pane_g1_ParamLimits

0x12db,	// (0x000035b7) cell_toolbar_pane_g1

0xb3ca,	// (0x0000d6a6) cell_toolbar_pane_g2_ParamLimits

0xb3ca,	// (0x0000d6a6) cell_toolbar_pane_g2

0x0001,

0xf7aa,	// (0x00011a86) cell_toolbar_pane_g_ParamLimits

0xf7aa,	// (0x00011a86) cell_toolbar_pane_g

0x1311,	// (0x000035ed) grid_highlight_pane_cp2_ParamLimits

0x1311,	// (0x000035ed) grid_highlight_pane_cp2

0x132b,	// (0x00003607) toolbar_button_pane

0x1337,	// (0x00003613) toolbar_button_pane_g1

0x133f,	// (0x0000361b) toolbar_button_pane_g2

0x1347,	// (0x00003623) toolbar_button_pane_g3

0x134f,	// (0x0000362b) toolbar_button_pane_g4

0x1357,	// (0x00003633) toolbar_button_pane_g5

0x135f,	// (0x0000363b) toolbar_button_pane_g6

0x1367,	// (0x00003643) toolbar_button_pane_g7

0x136f,	// (0x0000364b) toolbar_button_pane_g8

0x1377,	// (0x00003653) toolbar_button_pane_g9

0x0009,

0xf7af,	// (0x00011a8b) toolbar_button_pane_g

0x1387,	// (0x00003663) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1387,	// (0x00003663) list_single_2graphic_pane_g1_cp3

0xb3de,	// (0x0000d6ba) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb3de,	// (0x0000d6ba) list_single_2graphic_pane_g2_cp3

0x0096,	// (0x00002372) list_single_2graphic_pane_g3_cp3

0xf37c,	// (0x00011658) list_single_2graphic_pane_g4_cp3_ParamLimits

0xf37c,	// (0x00011658) list_single_2graphic_pane_g4_cp3

0xb3ef,	// (0x0000d6cb) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb3ef,	// (0x0000d6cb) list_single_2graphic_pane_t1_cp3

0xea69,	// (0x00010d45) list_single_midp_graphic_pane_g2_ParamLimits

0xea69,	// (0x00010d45) list_single_midp_graphic_pane_g2

0x0775,	// (0x00002a51) aid_zoom_text_primary

0x077d,	// (0x00002a59) aid_zoom_text_secondary

0xa61b,	// (0x0000c8f7) status_small_pane_g7_ParamLimits

0xa61b,	// (0x0000c8f7) status_small_pane_g7

0xa63e,	// (0x0000c91a) status_small_pane_t1_ParamLimits

0x94ae,	// (0x0000b78a) title_pane_g2

0x0003,

0xf54e,	// (0x0001182a) title_pane_g

0x98c1,	// (0x0000bb9d) aid_size_cell_colour_1_pane_ParamLimits

0x98c1,	// (0x0000bb9d) aid_size_cell_colour_1_pane

0x98d5,	// (0x0000bbb1) aid_size_cell_colour_2_pane_ParamLimits

0x98d5,	// (0x0000bbb1) aid_size_cell_colour_2_pane

0x98e9,	// (0x0000bbc5) aid_size_cell_colour_3_pane_ParamLimits

0x98e9,	// (0x0000bbc5) aid_size_cell_colour_3_pane

0x98fd,	// (0x0000bbd9) aid_size_cell_colour_4_pane_ParamLimits

0x98fd,	// (0x0000bbd9) aid_size_cell_colour_4_pane

0xedf5,	// (0x000110d1) title_pane_stacon_g1_ParamLimits

0xedf5,	// (0x000110d1) title_pane_stacon_g1

0x1bc4,	// (0x00003ea0) popup_note_wait_window_g3_ParamLimits

0x1bc4,	// (0x00003ea0) popup_note_wait_window_g3

0x1c3a,	// (0x00003f16) popup_note_wait_window_t5_ParamLimits

0x1c3a,	// (0x00003f16) popup_note_wait_window_t5

0xe609,	// (0x000108e5) main_feb_china_hwr_fs_writing_pane

0xa8aa,	// (0x0000cb86) popup_feb_china_hwr_fs_window_ParamLimits

0xa8aa,	// (0x0000cb86) popup_feb_china_hwr_fs_window

0xb40b,	// (0x0000d6e7) aid_size_cell_hwr_fs_ParamLimits

0xb40b,	// (0x0000d6e7) aid_size_cell_hwr_fs

0x14c3,	// (0x0000379f) bg_popup_sub_pane_cp3_ParamLimits

0x14c3,	// (0x0000379f) bg_popup_sub_pane_cp3

0xb420,	// (0x0000d6fc) grid_hwr_fs_pane_ParamLimits

0xb420,	// (0x0000d6fc) grid_hwr_fs_pane

0x14e7,	// (0x000037c3) linegrid_hwr_fs_pane_ParamLimits

0x14e7,	// (0x000037c3) linegrid_hwr_fs_pane

0xb438,	// (0x0000d714) cell_hwr_fs_pane_ParamLimits

0xb438,	// (0x0000d714) cell_hwr_fs_pane

0x1519,	// (0x000037f5) linegrid_hwr_fs_pane_g1_ParamLimits

0x1519,	// (0x000037f5) linegrid_hwr_fs_pane_g1

0xb45e,	// (0x0000d73a) linegrid_hwr_fs_pane_g2_ParamLimits

0xb45e,	// (0x0000d73a) linegrid_hwr_fs_pane_g2

0x1537,	// (0x00003813) linegrid_hwr_fs_pane_g3_ParamLimits

0x1537,	// (0x00003813) linegrid_hwr_fs_pane_g3

0xb470,	// (0x0000d74c) linegrid_hwr_fs_pane_g4_ParamLimits

0xb470,	// (0x0000d74c) linegrid_hwr_fs_pane_g4

0x155d,	// (0x00003839) linegrid_hwr_fs_pane_g5_ParamLimits

0x155d,	// (0x00003839) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d5,	// (0x00011ab1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d5,	// (0x00011ab1) linegrid_hwr_fs_pane_g

0x1573,	// (0x0000384f) cell_hwr_fs_pane_g1_ParamLimits

0x1573,	// (0x0000384f) cell_hwr_fs_pane_g1

0x110b,	// (0x000033e7) cell_hwr_fs_pane_g2_ParamLimits

0x110b,	// (0x000033e7) cell_hwr_fs_pane_g2

0xb48a,	// (0x0000d766) cell_hwr_fs_pane_g3_ParamLimits

0xb48a,	// (0x0000d766) cell_hwr_fs_pane_g3

0xb497,	// (0x0000d773) cell_hwr_fs_pane_g4_ParamLimits

0xb497,	// (0x0000d773) cell_hwr_fs_pane_g4

0x0003,

0xf7e0,	// (0x00011abc) cell_hwr_fs_pane_g_ParamLimits

0xf7e0,	// (0x00011abc) cell_hwr_fs_pane_g

0xb4a4,	// (0x0000d780) cell_hwr_fs_pane_t1

0xe609,	// (0x000108e5) grid_highlight_pane_cp6

0xe609,	// (0x000108e5) main_idle_act2_pane

0xec2f,	// (0x00010f0b) aid_inside_area_popup_secondary

0xb8f1,	// (0x0000dbcd) aid_inside_area_window_primary_ParamLimits

0xb8f1,	// (0x0000dbcd) aid_inside_area_window_primary

0xbfa5,	// (0x0000e281) ai2_news_ticker_pane

0x31b2,	// (0x0000548e) aid_size_cell_ai1_link_ParamLimits

0x31b2,	// (0x0000548e) aid_size_cell_ai1_link

0xbfad,	// (0x0000e289) popup_ai2_data_window_ParamLimits

0xbfad,	// (0x0000e289) popup_ai2_data_window

0x31e2,	// (0x000054be) popup_ai2_link_window_ParamLimits

0x31e2,	// (0x000054be) popup_ai2_link_window

0x14c3,	// (0x0000379f) bg_popup_sub_pane_cp4_ParamLimits

0x14c3,	// (0x0000379f) bg_popup_sub_pane_cp4

0x31f6,	// (0x000054d2) grid_ai2_link_pane_ParamLimits

0x31f6,	// (0x000054d2) grid_ai2_link_pane

0x320d,	// (0x000054e9) popup_ai2_link_window_g1_ParamLimits

0x320d,	// (0x000054e9) popup_ai2_link_window_g1

0x3219,	// (0x000054f5) popup_ai2_link_window_g2_ParamLimits

0x3219,	// (0x000054f5) popup_ai2_link_window_g2

0x0001,

0xf9b3,	// (0x00011c8f) popup_ai2_link_window_g_ParamLimits

0xf9b3,	// (0x00011c8f) popup_ai2_link_window_g

0x3228,	// (0x00005504) ai2_mp_button_pane

0x3230,	// (0x0000550c) ai2_mp_volume_pane

0x176d,	// (0x00003a49) bg_popup_sub_pane_cp5_ParamLimits

0x176d,	// (0x00003a49) bg_popup_sub_pane_cp5

0x3238,	// (0x00005514) heading_ai2_gene_pane_ParamLimits

0x3238,	// (0x00005514) heading_ai2_gene_pane

0x3244,	// (0x00005520) list_ai2_gene_pane_ParamLimits

0x3244,	// (0x00005520) list_ai2_gene_pane

0x328c,	// (0x00005568) cell_ai2_link_pane_ParamLimits

0x328c,	// (0x00005568) cell_ai2_link_pane

0x32a2,	// (0x0000557e) cell_ai2_link_pane_g1

0xe609,	// (0x000108e5) grid_highlight_pane_cp7

0x3372,	// (0x0000564e) ai2_mp_volume_pane_g1

0x337a,	// (0x00005656) ai2_mp_volume_pane_g2

0x32e7,	// (0x000055c3) list_ai2_gene_pane_t1

0x3382,	// (0x0000565e) ai2_mp_volume_pane_g3

0x0002,

0xf9cc,	// (0x00011ca8) ai2_mp_volume_pane_g

0xbfc3,	// (0x0000e29f) volume_small_pane_cp3

0x3393,	// (0x0000566f) aid_size_cell_ai2_button

0x339b,	// (0x00005677) grid_ai2_button_pane

0x33a4,	// (0x00005680) cell_ai2_button_pane_ParamLimits

0x33a4,	// (0x00005680) cell_ai2_button_pane

0xe490,	// (0x0001076c) cell_ai2_button_pane_g1

0xe609,	// (0x000108e5) grid_highlight_pane_cp8

0x3332,	// (0x0000560e) ai2_gene_pane_t1_ParamLimits

0x3332,	// (0x0000560e) ai2_gene_pane_t1

0xa80c,	// (0x0000cae8) aid_height_parent_landscape

0xbc15,	// (0x0000def1) aid_height_set_list

0x2b17,	// (0x00004df3) aid_size_parent

0xbed0,	// (0x0000e1ac) aid_size_cell_graphic_pane_ParamLimits

0x3254,	// (0x00005530) popup_ai2_data_window_g1_ParamLimits

0x3254,	// (0x00005530) popup_ai2_data_window_g1

0x3260,	// (0x0000553c) ai2_news_ticker_pane_g1

0x3268,	// (0x00005544) ai2_news_ticker_pane_g2

0x0001,

0xf9b8,	// (0x00011c94) ai2_news_ticker_pane_g

0x3270,	// (0x0000554c) ai2_news_ticker_pane_t1

0x327e,	// (0x0000555a) ai2_news_ticker_pane_t2

0x0001,

0xf9bd,	// (0x00011c99) ai2_news_ticker_pane_t

0x32ab,	// (0x00005587) heading_ai2_gene_pane_g1

0x32b3,	// (0x0000558f) heading_ai2_gene_pane_t1_ParamLimits

0x32b3,	// (0x0000558f) heading_ai2_gene_pane_t1

0x32c8,	// (0x000055a4) list_highlight_pane_cp6

0x32d0,	// (0x000055ac) ai2_gene_pane_ParamLimits

0x32d0,	// (0x000055ac) ai2_gene_pane

0x32f5,	// (0x000055d1) list_ai2_gene_pane_t2

0x0001,

0xf9c2,	// (0x00011c9e) list_ai2_gene_pane_t

0x3303,	// (0x000055df) list_highlight_pane_cp8_ParamLimits

0x3303,	// (0x000055df) list_highlight_pane_cp8

0x3314,	// (0x000055f0) ai2_gene_pane_g1_ParamLimits

0x3314,	// (0x000055f0) ai2_gene_pane_g1

0x3326,	// (0x00005602) ai2_gene_pane_g2_ParamLimits

0x3326,	// (0x00005602) ai2_gene_pane_g2

0x0001,

0xf9c7,	// (0x00011ca3) ai2_gene_pane_g_ParamLimits

0xf9c7,	// (0x00011ca3) ai2_gene_pane_g

0xe9f0,	// (0x00010ccc) scroll_pane_cp12

0xa7c9,	// (0x0000caa5) control_pane_t3_ParamLimits

0xa7c9,	// (0x0000caa5) control_pane_t3

0xa62f,	// (0x0000c90b) status_small_pane_g8_ParamLimits

0xa62f,	// (0x0000c90b) status_small_pane_g8

0xa96d,	// (0x0000cc49) popup_find_window_ParamLimits

0xac20,	// (0x0000cefc) popup_note_image_window_ParamLimits

0x12b9,	// (0x00003595) list_double2_graphic_pane_vc_g1_ParamLimits

0x12b9,	// (0x00003595) list_double2_graphic_pane_vc_g1

0xea01,	// (0x00010cdd) list_double2_graphic_pane_vc_g2_ParamLimits

0xea01,	// (0x00010cdd) list_double2_graphic_pane_vc_g2

0xea0d,	// (0x00010ce9) list_double2_graphic_pane_vc_g3_ParamLimits

0xea0d,	// (0x00010ce9) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x0001189d) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x0001189d) list_double2_graphic_pane_vc_g

0x12c5,	// (0x000035a1) list_double2_graphic_pane_vc_t1_ParamLimits

0x12c5,	// (0x000035a1) list_double2_graphic_pane_vc_t1

0xea01,	// (0x00010cdd) list_single_heading_pane_vc_g1_ParamLimits

0xea01,	// (0x00010cdd) list_single_heading_pane_vc_g1

0xea0d,	// (0x00010ce9) list_single_heading_pane_vc_g2_ParamLimits

0xea0d,	// (0x00010ce9) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000118a4) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000118a4) list_single_heading_pane_vc_g

0x13c0,	// (0x0000369c) list_single_heading_pane_vc_t1_ParamLimits

0x13c0,	// (0x0000369c) list_single_heading_pane_vc_t1

0x13d6,	// (0x000036b2) list_single_heading_pane_vc_t2_ParamLimits

0x13d6,	// (0x000036b2) list_single_heading_pane_vc_t2

0x0001,

0xf7c4,	// (0x00011aa0) list_single_heading_pane_vc_t_ParamLimits

0xf7c4,	// (0x00011aa0) list_single_heading_pane_vc_t

0x13fe,	// (0x000036da) list_setting_number_pane_vc_g1_ParamLimits

0x13fe,	// (0x000036da) list_setting_number_pane_vc_g1

0x140a,	// (0x000036e6) list_setting_number_pane_vc_g2_ParamLimits

0x140a,	// (0x000036e6) list_setting_number_pane_vc_g2

0x0001,

0xf7c9,	// (0x00011aa5) list_setting_number_pane_vc_g_ParamLimits

0xf7c9,	// (0x00011aa5) list_setting_number_pane_vc_g

0x1416,	// (0x000036f2) list_setting_number_pane_vc_t1_ParamLimits

0x1416,	// (0x000036f2) list_setting_number_pane_vc_t1

0x142a,	// (0x00003706) list_setting_number_pane_vc_t2_ParamLimits

0x142a,	// (0x00003706) list_setting_number_pane_vc_t2

0x1446,	// (0x00003722) list_setting_number_pane_vc_t3_ParamLimits

0x1446,	// (0x00003722) list_setting_number_pane_vc_t3

0x0002,

0xf7ce,	// (0x00011aaa) list_setting_number_pane_vc_t_ParamLimits

0xf7ce,	// (0x00011aaa) list_setting_number_pane_vc_t

0x1472,	// (0x0000374e) set_value_pane_vc_ParamLimits

0x1472,	// (0x0000374e) set_value_pane_vc

0x2d1a,	// (0x00004ff6) list_double2_graphic_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_double2_graphic_pane_vc

0x2d1a,	// (0x00004ff6) list_double2_large_graphic_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_double2_large_graphic_pane_vc

0x2d1a,	// (0x00004ff6) list_double2_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_double2_pane_vc

0x2d1a,	// (0x00004ff6) list_double_graphic_heading_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_double_graphic_heading_pane_vc

0x2d1a,	// (0x00004ff6) list_double_graphic_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_double_graphic_pane_vc

0x2d1a,	// (0x00004ff6) list_double_heading_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_double_heading_pane_vc

0x2d2c,	// (0x00005008) list_double_large_graphic_pane_vc_ParamLimits

0x2d2c,	// (0x00005008) list_double_large_graphic_pane_vc

0x2d1a,	// (0x00004ff6) list_double_number_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_double_number_pane_vc

0x2d1a,	// (0x00004ff6) list_double_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_double_pane_vc

0x2d1a,	// (0x00004ff6) list_double_time_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_double_time_pane_vc

0x2d1a,	// (0x00004ff6) list_setting_number_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_setting_number_pane_vc

0x2d1a,	// (0x00004ff6) list_setting_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_setting_pane_vc

0x2d1a,	// (0x00004ff6) list_single_graphic_heading_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_single_graphic_heading_pane_vc

0x2d1a,	// (0x00004ff6) list_single_heading_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_single_heading_pane_vc

0x2d1a,	// (0x00004ff6) list_single_number_heading_pane_vc_ParamLimits

0x2d1a,	// (0x00004ff6) list_single_number_heading_pane_vc

0x33d8,	// (0x000056b4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x33d8,	// (0x000056b4) list_double_graphic_heading_pane_vc_g1

0xea01,	// (0x00010cdd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xea01,	// (0x00010cdd) list_double_graphic_heading_pane_vc_g2

0xea0d,	// (0x00010ce9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xea0d,	// (0x00010ce9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d3,	// (0x00011caf) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d3,	// (0x00011caf) list_double_graphic_heading_pane_vc_g

0x33e4,	// (0x000056c0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x33e4,	// (0x000056c0) list_double_graphic_heading_pane_vc_t1

0x33f8,	// (0x000056d4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x33f8,	// (0x000056d4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9da,	// (0x00011cb6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9da,	// (0x00011cb6) list_double_graphic_heading_pane_vc_t

0x13fe,	// (0x000036da) list_setting_pane_vc_g1_ParamLimits

0x13fe,	// (0x000036da) list_setting_pane_vc_g1

0x140a,	// (0x000036e6) list_setting_pane_vc_g2_ParamLimits

0x140a,	// (0x000036e6) list_setting_pane_vc_g2

0x0001,

0xf7c9,	// (0x00011aa5) list_setting_pane_vc_g_ParamLimits

0xf7c9,	// (0x00011aa5) list_setting_pane_vc_g

0x3661,	// (0x0000593d) list_setting_pane_vc_t1_ParamLimits

0x3661,	// (0x0000593d) list_setting_pane_vc_t1

0x367d,	// (0x00005959) list_setting_pane_vc_t2_ParamLimits

0x367d,	// (0x00005959) list_setting_pane_vc_t2

0x0001,

0xfa1d,	// (0x00011cf9) list_setting_pane_vc_t_ParamLimits

0xfa1d,	// (0x00011cf9) list_setting_pane_vc_t

0x1472,	// (0x0000374e) set_value_pane_cp_vc_ParamLimits

0x1472,	// (0x0000374e) set_value_pane_cp_vc

0xea01,	// (0x00010cdd) list_single_number_heading_pane_vc_g1_ParamLimits

0xea01,	// (0x00010cdd) list_single_number_heading_pane_vc_g1

0xea0d,	// (0x00010ce9) list_single_number_heading_pane_vc_g2_ParamLimits

0xea0d,	// (0x00010ce9) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000118a4) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000118a4) list_single_number_heading_pane_vc_g

0x3697,	// (0x00005973) list_single_number_heading_pane_vc_t1_ParamLimits

0x3697,	// (0x00005973) list_single_number_heading_pane_vc_t1

0x36ad,	// (0x00005989) list_single_number_heading_pane_vc_t2_ParamLimits

0x36ad,	// (0x00005989) list_single_number_heading_pane_vc_t2

0x36bf,	// (0x0000599b) list_single_number_heading_pane_vc_t3_ParamLimits

0x36bf,	// (0x0000599b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa22,	// (0x00011cfe) list_single_number_heading_pane_vc_t_ParamLimits

0xfa22,	// (0x00011cfe) list_single_number_heading_pane_vc_t

0x36d1,	// (0x000059ad) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x36d1,	// (0x000059ad) list_single_graphic_heading_pane_vc_g1

0xea01,	// (0x00010cdd) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xea01,	// (0x00010cdd) list_single_graphic_heading_pane_vc_g4

0xea0d,	// (0x00010ce9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xea0d,	// (0x00010ce9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa29,	// (0x00011d05) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa29,	// (0x00011d05) list_single_graphic_heading_pane_vc_g

0x36dd,	// (0x000059b9) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x36dd,	// (0x000059b9) list_single_graphic_heading_pane_vc_t1

0x36f3,	// (0x000059cf) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x36f3,	// (0x000059cf) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa30,	// (0x00011d0c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa30,	// (0x00011d0c) list_single_graphic_heading_pane_vc_t

0xea01,	// (0x00010cdd) list_double2_pane_vc_g1_ParamLimits

0xea01,	// (0x00010cdd) list_double2_pane_vc_g1

0xea0d,	// (0x00010ce9) list_double2_pane_vc_g2_ParamLimits

0xea0d,	// (0x00010ce9) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x000118a4) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x000118a4) list_double2_pane_vc_g

0x3705,	// (0x000059e1) list_double2_pane_vc_t1_ParamLimits

0x3705,	// (0x000059e1) list_double2_pane_vc_t1

0x371d,	// (0x000059f9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x371d,	// (0x000059f9) list_double2_large_graphic_pane_vc_g1

0xea01,	// (0x00010cdd) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xea01,	// (0x00010cdd) list_double2_large_graphic_pane_vc_g2

0xea0d,	// (0x00010ce9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xea0d,	// (0x00010ce9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x000118c1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x000118c1) list_double2_large_graphic_pane_vc_g

0x12c5,	// (0x000035a1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x12c5,	// (0x000035a1) list_double2_large_graphic_pane_vc_t1

0x3729,	// (0x00005a05) list_double_time_pane_vc_g1_ParamLimits

0x3729,	// (0x00005a05) list_double_time_pane_vc_g1

0x3735,	// (0x00005a11) list_double_time_pane_vc_g2_ParamLimits

0x3735,	// (0x00005a11) list_double_time_pane_vc_g2

0x0001,

0xfa35,	// (0x00011d11) list_double_time_pane_vc_g_ParamLimits

0xfa35,	// (0x00011d11) list_double_time_pane_vc_g

0x3741,	// (0x00005a1d) list_double_time_pane_vc_t1_ParamLimits

0x3741,	// (0x00005a1d) list_double_time_pane_vc_t1

0x3765,	// (0x00005a41) list_double_time_pane_vc_t2_ParamLimits

0x3765,	// (0x00005a41) list_double_time_pane_vc_t2

0x3794,	// (0x00005a70) list_double_time_pane_vc_t3_ParamLimits

0x3794,	// (0x00005a70) list_double_time_pane_vc_t3

0x37a6,	// (0x00005a82) list_double_time_pane_vc_t4_ParamLimits

0x37a6,	// (0x00005a82) list_double_time_pane_vc_t4

0x0003,

0xfa3a,	// (0x00011d16) list_double_time_pane_vc_t_ParamLimits

0xfa3a,	// (0x00011d16) list_double_time_pane_vc_t

0xea01,	// (0x00010cdd) list_double_pane_vc_g1_ParamLimits

0xea01,	// (0x00010cdd) list_double_pane_vc_g1

0xea0d,	// (0x00010ce9) list_double_pane_vc_g2_ParamLimits

0xea0d,	// (0x00010ce9) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x000118a4) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x000118a4) list_double_pane_vc_g

0x37ba,	// (0x00005a96) list_double_pane_vc_t1_ParamLimits

0x37ba,	// (0x00005a96) list_double_pane_vc_t1

0x37ce,	// (0x00005aaa) list_double_pane_vc_t2_ParamLimits

0x37ce,	// (0x00005aaa) list_double_pane_vc_t2

0x0001,

0xfa43,	// (0x00011d1f) list_double_pane_vc_t_ParamLimits

0xfa43,	// (0x00011d1f) list_double_pane_vc_t

0xea01,	// (0x00010cdd) list_double_number_pane_vc_g1_ParamLimits

0xea01,	// (0x00010cdd) list_double_number_pane_vc_g1

0xea0d,	// (0x00010ce9) list_double_number_pane_vc_g2_ParamLimits

0xea0d,	// (0x00010ce9) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x000118a4) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x000118a4) list_double_number_pane_vc_g

0x37e6,	// (0x00005ac2) list_double_number_pane_vc_t1_ParamLimits

0x37e6,	// (0x00005ac2) list_double_number_pane_vc_t1

0x37ba,	// (0x00005a96) list_double_number_pane_vc_t2_ParamLimits

0x37ba,	// (0x00005a96) list_double_number_pane_vc_t2

0x37f8,	// (0x00005ad4) list_double_number_pane_vc_t3_ParamLimits

0x37f8,	// (0x00005ad4) list_double_number_pane_vc_t3

0x0002,

0xfa48,	// (0x00011d24) list_double_number_pane_vc_t_ParamLimits

0xfa48,	// (0x00011d24) list_double_number_pane_vc_t

0x3810,	// (0x00005aec) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3810,	// (0x00005aec) list_double_large_graphic_pane_vc_g1

0x3832,	// (0x00005b0e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3832,	// (0x00005b0e) list_double_large_graphic_pane_vc_g2

0x3846,	// (0x00005b22) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3846,	// (0x00005b22) list_double_large_graphic_pane_vc_g3

0x3855,	// (0x00005b31) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3855,	// (0x00005b31) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4f,	// (0x00011d2b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x00011d2b) list_double_large_graphic_pane_vc_g

0x3861,	// (0x00005b3d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3861,	// (0x00005b3d) list_double_large_graphic_pane_vc_t1

0x387d,	// (0x00005b59) list_double_large_graphic_pane_vc_t2_ParamLimits

0x387d,	// (0x00005b59) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa58,	// (0x00011d34) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa58,	// (0x00011d34) list_double_large_graphic_pane_vc_t

0xea01,	// (0x00010cdd) list_double_heading_pane_vc_g1_ParamLimits

0xea01,	// (0x00010cdd) list_double_heading_pane_vc_g1

0xea0d,	// (0x00010ce9) list_double_heading_pane_vc_g2_ParamLimits

0xea0d,	// (0x00010ce9) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000118a4) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000118a4) list_double_heading_pane_vc_g

0x389f,	// (0x00005b7b) list_double_heading_pane_vc_t1_ParamLimits

0x389f,	// (0x00005b7b) list_double_heading_pane_vc_t1

0x38b3,	// (0x00005b8f) list_double_heading_pane_vc_t2_ParamLimits

0x38b3,	// (0x00005b8f) list_double_heading_pane_vc_t2

0x0001,

0xfa5d,	// (0x00011d39) list_double_heading_pane_vc_t_ParamLimits

0xfa5d,	// (0x00011d39) list_double_heading_pane_vc_t

0x38cb,	// (0x00005ba7) list_double_graphic_pane_vc_g1_ParamLimits

0x38cb,	// (0x00005ba7) list_double_graphic_pane_vc_g1

0x38de,	// (0x00005bba) list_double_graphic_pane_vc_g2_ParamLimits

0x38de,	// (0x00005bba) list_double_graphic_pane_vc_g2

0xea01,	// (0x00010cdd) list_double_graphic_pane_vc_g3_ParamLimits

0xea01,	// (0x00010cdd) list_double_graphic_pane_vc_g3

0x0003,

0xfa62,	// (0x00011d3e) list_double_graphic_pane_vc_g_ParamLimits

0xfa62,	// (0x00011d3e) list_double_graphic_pane_vc_g

0x38fb,	// (0x00005bd7) list_double_graphic_pane_vc_t1_ParamLimits

0x38fb,	// (0x00005bd7) list_double_graphic_pane_vc_t1

0x391a,	// (0x00005bf6) list_double_graphic_pane_vc_t2_ParamLimits

0x391a,	// (0x00005bf6) list_double_graphic_pane_vc_t2

0x0001,

0xfa6b,	// (0x00011d47) list_double_graphic_pane_vc_t_ParamLimits

0xfa6b,	// (0x00011d47) list_double_graphic_pane_vc_t

0xe4b2,	// (0x0001078e) aid_size_cell_fastswap

0x9275,	// (0x0000b551) aid_size_cell_touch_ParamLimits

0x9275,	// (0x0000b551) aid_size_cell_touch

0xe613,	// (0x000108ef) popup_fast_swap_wide_window_ParamLimits

0xe613,	// (0x000108ef) popup_fast_swap_wide_window

0x9445,	// (0x0000b721) touch_pane_ParamLimits

0x9445,	// (0x0000b721) touch_pane

0xea90,	// (0x00010d6c) button_value_adjust_pane_cp2

0xea98,	// (0x00010d74) button_value_adjust_pane_cp4

0xeaa0,	// (0x00010d7c) form_field_data_pane_cp2

0x9ea0,	// (0x0000c17c) form_field_data_wide_pane_cp2

0xefba,	// (0x00011296) bg_scroll_pane_ParamLimits

0xa1d6,	// (0x0000c4b2) scroll_handle_pane_ParamLimits

0xefd9,	// (0x000112b5) scroll_sc2_down_pane_ParamLimits

0xefd9,	// (0x000112b5) scroll_sc2_down_pane

0xf000,	// (0x000112dc) scroll_sc2_up_pane_ParamLimits

0xf000,	// (0x000112dc) scroll_sc2_up_pane

0xc0ef,	// (0x0000e3cb) grid_wheel_folder_pane_g1_ParamLimits

0xc0ef,	// (0x0000e3cb) grid_wheel_folder_pane_g1

0xf45b,	// (0x00011737) clock_nsta_pane_cp2_ParamLimits

0xf45b,	// (0x00011737) clock_nsta_pane_cp2

0xa4f5,	// (0x0000c7d1) listscroll_midp_pane_ParamLimits

0xa501,	// (0x0000c7dd) midp_canvas_pane

0x075b,	// (0x00002a37) nsta_clock_indic_pane

0x07b9,	// (0x00002a95) listscroll_form_pane_vc

0x07dd,	// (0x00002ab9) listscroll_set_pane_vc_ParamLimits

0x07dd,	// (0x00002ab9) listscroll_set_pane_vc

0xb0d5,	// (0x0000d3b1) clock_nsta_pane

0xb0ff,	// (0x0000d3db) indicator_nsta_pane

0x1223,	// (0x000034ff) bg_popup_sub_pane_cp2_ParamLimits

0x1237,	// (0x00003513) find_pane_cp2_ParamLimits

0x1237,	// (0x00003513) find_pane_cp2

0x124d,	// (0x00003529) grid_toobar_pane_ParamLimits

0x1482,	// (0x0000375e) list_form_gen_pane_vc_ParamLimits

0x1482,	// (0x0000375e) list_form_gen_pane_vc

0x1498,	// (0x00003774) scroll_pane_cp8_vc_ParamLimits

0x1498,	// (0x00003774) scroll_pane_cp8_vc

0x15b1,	// (0x0000388d) data_form_wide_pane_vc_ParamLimits

0x15b1,	// (0x0000388d) data_form_wide_pane_vc

0x15bd,	// (0x00003899) form_field_data_wide_pane_vc_g1

0x15c5,	// (0x000038a1) form_field_data_wide_pane_vc_t1_ParamLimits

0x15c5,	// (0x000038a1) form_field_data_wide_pane_vc_t1

0xeac7,	// (0x00010da3) input_focus_pane_cp6_vc_ParamLimits

0xeac7,	// (0x00010da3) input_focus_pane_cp6_vc

0x1953,	// (0x00003c2f) list_midp_pane_ParamLimits

0x2f7f,	// (0x0000525b) scroll_pane_cp16_ParamLimits

0x2f7f,	// (0x0000525b) scroll_pane_cp16

0x19a1,	// (0x00003c7d) button_value_adjust_pane_ParamLimits

0x19a1,	// (0x00003c7d) button_value_adjust_pane

0xbc26,	// (0x0000df02) button_value_adjust_pane_cp6_ParamLimits

0xbc26,	// (0x0000df02) button_value_adjust_pane_cp6

0xbd40,	// (0x0000e01c) settings_code_pane_cp_ParamLimits

0xbd40,	// (0x0000e01c) settings_code_pane_cp

0xe490,	// (0x0001076c) cell_touch_pane_g1

0xe490,	// (0x0001076c) cell_touch_pane_g2

0x0001,

0xf6ef,	// (0x000119cb) cell_touch_pane_g

0xbfcc,	// (0x0000e2a8) cell_touch_pane_cp_ParamLimits

0xbfcc,	// (0x0000e2a8) cell_touch_pane_cp

0xbfe8,	// (0x0000e2c4) cell_touch_pane_ParamLimits

0xbfe8,	// (0x0000e2c4) cell_touch_pane

0xe490,	// (0x0001076c) scroll_sc2_down_pane_g1

0xe490,	// (0x0001076c) scroll_sc2_up_pane_g1

0xe609,	// (0x000108e5) bg_set_opt_pane_cp4_vc

0x3410,	// (0x000056ec) list_set_graphic_pane_vc_g1_ParamLimits

0x3410,	// (0x000056ec) list_set_graphic_pane_vc_g1

0x341c,	// (0x000056f8) list_set_graphic_pane_vc_g2_ParamLimits

0x341c,	// (0x000056f8) list_set_graphic_pane_vc_g2

0x0001,

0xf9df,	// (0x00011cbb) list_set_graphic_pane_vc_g_ParamLimits

0xf9df,	// (0x00011cbb) list_set_graphic_pane_vc_g

0x3428,	// (0x00005704) text_primary_small_cp13_vc_ParamLimits

0x3428,	// (0x00005704) text_primary_small_cp13_vc

0x3440,	// (0x0000571c) list_set_graphic_pane_vc_ParamLimits

0x3440,	// (0x0000571c) list_set_graphic_pane_vc

0xe609,	// (0x000108e5) input_focus_pane_cp2_vc

0xe490,	// (0x0001076c) setting_code_pane_vc_g1

0xe69c,	// (0x00010978) setting_code_pane_vc_t1

0x3453,	// (0x0000572f) set_text_pane_vc_t1_ParamLimits

0x3453,	// (0x0000572f) set_text_pane_vc_t1

0xe609,	// (0x000108e5) input_focus_pane_cp1_vc

0x346f,	// (0x0000574b) list_set_text_pane_vc

0xe490,	// (0x0001076c) setting_text_pane_vc_g1

0xe609,	// (0x000108e5) bg_set_opt_pane_cp2_vc

0xe693,	// (0x0001096f) setting_slider_graphic_pane_vc_g1

0x3479,	// (0x00005755) setting_slider_graphic_pane_vc_t1

0x3489,	// (0x00005765) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e4,	// (0x00011cc0) setting_slider_graphic_pane_vc_t

0x3499,	// (0x00005775) slider_set_pane_cp_vc

0x34a1,	// (0x0000577d) slider_set_pane_vc_g1

0x34aa,	// (0x00005786) slider_set_pane_vc_g2

0x0006,

0xf9e9,	// (0x00011cc5) slider_set_pane_vc_g

0xeb81,	// (0x00010e5d) set_opt_bg_pane_g1_copy1

0xeb89,	// (0x00010e65) set_opt_bg_pane_g2_copy1

0x34d6,	// (0x000057b2) set_opt_bg_pane_g3_copy1

0xeb99,	// (0x00010e75) set_opt_bg_pane_g4_copy1

0xeba1,	// (0x00010e7d) set_opt_bg_pane_g5_copy1

0xeba9,	// (0x00010e85) set_opt_bg_pane_g6_copy1

0x34de,	// (0x000057ba) set_opt_bg_pane_g7_copy1

0x34e6,	// (0x000057c2) set_opt_bg_pane_g8_copy1

0x34ee,	// (0x000057ca) set_opt_bg_pane_g9_copy1

0xe609,	// (0x000108e5) bg_set_opt_pane_cp_vc

0x34f6,	// (0x000057d2) setting_slider_pane_vc_t1

0x3505,	// (0x000057e1) setting_slider_pane_vc_t2

0x3515,	// (0x000057f1) setting_slider_pane_vc_t3

0x0002,

0xf9f8,	// (0x00011cd4) setting_slider_pane_vc_t

0x3525,	// (0x00005801) slider_set_pane_vc

0x21c2,	// (0x0000449e) volume_set_pane_vc_g1

0x352d,	// (0x00005809) volume_set_pane_vc_g2

0x3536,	// (0x00005812) volume_set_pane_vc_g3

0x353f,	// (0x0000581b) volume_set_pane_vc_g4

0x3548,	// (0x00005824) volume_set_pane_vc_g5

0x3551,	// (0x0000582d) volume_set_pane_vc_g6

0x355a,	// (0x00005836) volume_set_pane_vc_g7

0x3563,	// (0x0000583f) volume_set_pane_vc_g8

0x356c,	// (0x00005848) volume_set_pane_vc_g9

0x3575,	// (0x00005851) volume_set_pane_vc_g10

0x0009,

0xf9ff,	// (0x00011cdb) volume_set_pane_vc_g

0x357e,	// (0x0000585a) volume_set_pane_vc

0x3586,	// (0x00005862) button_value_adjust_pane_cp1_vc

0x3590,	// (0x0000586c) list_highlight_pane_cp2_vc

0x3599,	// (0x00005875) list_set_pane_vc_ParamLimits

0x3599,	// (0x00005875) list_set_pane_vc

0x35f7,	// (0x000058d3) main_pane_set_vc_t1_ParamLimits

0x35f7,	// (0x000058d3) main_pane_set_vc_t1

0x360c,	// (0x000058e8) main_pane_set_vc_t2_ParamLimits

0x360c,	// (0x000058e8) main_pane_set_vc_t2

0x361e,	// (0x000058fa) main_pane_set_vc_t3_ParamLimits

0x361e,	// (0x000058fa) main_pane_set_vc_t3

0x3630,	// (0x0000590c) main_pane_set_vc_t4_ParamLimits

0x3630,	// (0x0000590c) main_pane_set_vc_t4

0x0003,

0xfa14,	// (0x00011cf0) main_pane_set_vc_t_ParamLimits

0xfa14,	// (0x00011cf0) main_pane_set_vc_t

0x3642,	// (0x0000591e) setting_code_pane_vc_ParamLimits

0x3642,	// (0x0000591e) setting_code_pane_vc

0x3651,	// (0x0000592d) setting_slider_graphic_pane_vc

0x3651,	// (0x0000592d) setting_slider_pane_vc

0x3651,	// (0x0000592d) setting_text_pane_vc

0x3651,	// (0x0000592d) setting_volume_pane_vc

0x3659,	// (0x00005935) scroll_pane_cp121_vc

0xea7e,	// (0x00010d5a) set_content_pane_vc

0x3944,	// (0x00005c20) button_value_adjust_pane_g1

0x394d,	// (0x00005c29) button_value_adjust_pane_g2

0x0001,

0xfa70,	// (0x00011d4c) button_value_adjust_pane_g

0x3956,	// (0x00005c32) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3956,	// (0x00005c32) form_field_slider_wide_pane_vc_t1

0x396a,	// (0x00005c46) form_field_slider_wide_pane_vc_t2_ParamLimits

0x396a,	// (0x00005c46) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa75,	// (0x00011d51) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa75,	// (0x00011d51) form_field_slider_wide_pane_vc_t

0xe677,	// (0x00010953) input_focus_pane_cp10_vc_ParamLimits

0xe677,	// (0x00010953) input_focus_pane_cp10_vc

0x3998,	// (0x00005c74) slider_cont_pane_cp1_vc_ParamLimits

0x3998,	// (0x00005c74) slider_cont_pane_cp1_vc

0x39aa,	// (0x00005c86) slider_form_pane_g1_cp2

0x34aa,	// (0x00005786) slider_form_pane_g2_cp2

0x39d7,	// (0x00005cb3) form_field_slider_pane_vc_t3

0x39e5,	// (0x00005cc1) form_field_slider_pane_vc_t4

0x39f3,	// (0x00005ccf) slider_form_pane_vc_ParamLimits

0x39f3,	// (0x00005ccf) slider_form_pane_vc

0x3a00,	// (0x00005cdc) form_field_slider_pane_vc_t1_ParamLimits

0x3a00,	// (0x00005cdc) form_field_slider_pane_vc_t1

0x396a,	// (0x00005c46) form_field_slider_pane_vc_t2_ParamLimits

0x396a,	// (0x00005c46) form_field_slider_pane_vc_t2

0x0001,

0xfa87,	// (0x00011d63) form_field_slider_pane_vc_t_ParamLimits

0xfa87,	// (0x00011d63) form_field_slider_pane_vc_t

0xe677,	// (0x00010953) input_focus_pane_cp9_vc_ParamLimits

0xe677,	// (0x00010953) input_focus_pane_cp9_vc

0x3a1c,	// (0x00005cf8) slider_cont_pane_vc_ParamLimits

0x3a1c,	// (0x00005cf8) slider_cont_pane_vc

0x3a30,	// (0x00005d0c) list_form_graphic_pane_cp_vc_ParamLimits

0x3a30,	// (0x00005d0c) list_form_graphic_pane_cp_vc

0x15bd,	// (0x00003899) form_field_popup_wide_pane_vc_g1

0x3a45,	// (0x00005d21) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3a45,	// (0x00005d21) form_field_popup_wide_pane_vc_t1

0xeac7,	// (0x00010da3) input_focus_pane_cp8_vc_ParamLimits

0xeac7,	// (0x00010da3) input_focus_pane_cp8_vc

0x3a8a,	// (0x00005d66) list_form_wide_pane_vc_ParamLimits

0x3a8a,	// (0x00005d66) list_form_wide_pane_vc

0x3a96,	// (0x00005d72) list_form_graphic_pane_vc_g1

0x3a9e,	// (0x00005d7a) list_form_graphic_pane_vc_t1_ParamLimits

0x3a9e,	// (0x00005d7a) list_form_graphic_pane_vc_t1

0xe685,	// (0x00010961) list_highlight_pane_cp5_vc_ParamLimits

0xe685,	// (0x00010961) list_highlight_pane_cp5_vc

0x3aba,	// (0x00005d96) list_form_graphic_pane_vc_ParamLimits

0x3aba,	// (0x00005d96) list_form_graphic_pane_vc

0x15bd,	// (0x00003899) form_field_popup_pane_vc_g1

0x3ad0,	// (0x00005dac) form_field_popup_pane_vc_t1_ParamLimits

0x3ad0,	// (0x00005dac) form_field_popup_pane_vc_t1

0xeac7,	// (0x00010da3) input_focus_pane_cp7_vc_ParamLimits

0xeac7,	// (0x00010da3) input_focus_pane_cp7_vc

0x3ae7,	// (0x00005dc3) list_form_pane_vc_ParamLimits

0x3ae7,	// (0x00005dc3) list_form_pane_vc

0x3af3,	// (0x00005dcf) data_form_pane_vc_t1_ParamLimits

0x3af3,	// (0x00005dcf) data_form_pane_vc_t1

0xeb81,	// (0x00010e5d) input_focus_pane_vc_g1

0xeb89,	// (0x00010e65) input_focus_pane_vc_g2

0xeb91,	// (0x00010e6d) input_focus_pane_vc_g3

0xeb99,	// (0x00010e75) input_focus_pane_vc_g4

0xeba1,	// (0x00010e7d) input_focus_pane_vc_g5

0xeba9,	// (0x00010e85) input_focus_pane_vc_g6

0xebb1,	// (0x00010e8d) input_focus_pane_vc_g7

0xebb9,	// (0x00010e95) input_focus_pane_vc_g8

0xebc1,	// (0x00010e9d) input_focus_pane_vc_g9

0xe490,	// (0x0001076c) input_focus_pane_vc_g10

0x0009,

0xf678,	// (0x00011954) input_focus_pane_vc_g

0x15b1,	// (0x0000388d) data_form_pane_vc_ParamLimits

0x15b1,	// (0x0000388d) data_form_pane_vc

0x15bd,	// (0x00003899) form_field_data_pane_vc_g1

0x3b0e,	// (0x00005dea) form_field_data_pane_vc_t1_ParamLimits

0x3b0e,	// (0x00005dea) form_field_data_pane_vc_t1

0xeac7,	// (0x00010da3) input_focus_pane_vc_ParamLimits

0xeac7,	// (0x00010da3) input_focus_pane_vc

0x3b28,	// (0x00005e04) button_value_adjust_pane_cp3_vc

0x3b30,	// (0x00005e0c) button_value_adjust_pane_cp5_vc

0x3b38,	// (0x00005e14) form_field_data_pane_vc_ParamLimits

0x3b38,	// (0x00005e14) form_field_data_pane_vc

0x3b4f,	// (0x00005e2b) form_field_data_pane_vc_cp2

0x3b57,	// (0x00005e33) form_field_data_wide_pane_vc_ParamLimits

0x3b57,	// (0x00005e33) form_field_data_wide_pane_vc

0x3b6d,	// (0x00005e49) form_field_data_wide_pane_vc_cp2

0x3b75,	// (0x00005e51) form_field_popup_pane_vc_ParamLimits

0x3b75,	// (0x00005e51) form_field_popup_pane_vc

0x3b8c,	// (0x00005e68) form_field_popup_wide_pane_vc_ParamLimits

0x3b8c,	// (0x00005e68) form_field_popup_wide_pane_vc

0x3ba2,	// (0x00005e7e) form_field_slider_pane_vc_ParamLimits

0x3ba2,	// (0x00005e7e) form_field_slider_pane_vc

0x3bb5,	// (0x00005e91) form_field_slider_wide_pane_vc_ParamLimits

0x3bb5,	// (0x00005e91) form_field_slider_wide_pane_vc

0xc005,	// (0x0000e2e1) grid_touch_1_pane_ParamLimits

0xc005,	// (0x0000e2e1) grid_touch_1_pane

0xc019,	// (0x0000e2f5) grid_touch_2_pane_ParamLimits

0xc019,	// (0x0000e2f5) grid_touch_2_pane

0x3c83,	// (0x00005f5f) touch_pane_g1_ParamLimits

0x3c83,	// (0x00005f5f) touch_pane_g1

0x3bec,	// (0x00005ec8) cell_app_pane_cp_wide_ParamLimits

0x3bec,	// (0x00005ec8) cell_app_pane_cp_wide

0x3bfd,	// (0x00005ed9) grid_popup_fast_wide_pane_ParamLimits

0x3bfd,	// (0x00005ed9) grid_popup_fast_wide_pane

0x3c11,	// (0x00005eed) scroll_pane_cp19_ParamLimits

0x3c11,	// (0x00005eed) scroll_pane_cp19

0xe609,	// (0x000108e5) bg_popup_window_pane_cp20

0x3c25,	// (0x00005f01) listscroll_popup_fast_wide_pane

0xedba,	// (0x00011096) grid_indicator_nsta_pane

0x3c2d,	// (0x00005f09) clock_nsta_pane_g1

0x3c36,	// (0x00005f12) clock_nsta_pane_t1

0xc043,	// (0x0000e31f) cell_indicator_nsta_pane_ParamLimits

0xc043,	// (0x0000e31f) cell_indicator_nsta_pane

0x3c83,	// (0x00005f5f) cell_indicator_nsta_pane_g1

0xc05a,	// (0x0000e336) cell_indicator_nsta_pane_g2

0x0001,

0xfa98,	// (0x00011d74) cell_indicator_nsta_pane_g

0x3c9e,	// (0x00005f7a) clock_nsta_pane_cp

0x3ca7,	// (0x00005f83) indicator_nsta_pane_cp

0x3caf,	// (0x00005f8b) nsta_clock_indic_pane_g1

0xe6db,	// (0x000109b7) grid_indicator_pane

0xa270,	// (0x0000c54c) scroll_pane_cp29

0xf388,	// (0x00011664) indicator_nsta_pane_cp2_ParamLimits

0xf388,	// (0x00011664) indicator_nsta_pane_cp2

0xe685,	// (0x00010961) main_apps_wheel_pane

0xb586,	// (0x0000d862) form_midp_field_text_pane_ParamLimits

0x195f,	// (0x00003c3b) scroll_bar_cp050_ParamLimits

0x3cff,	// (0x00005fdb) cell_indicator_pane_ParamLimits

0x3cff,	// (0x00005fdb) cell_indicator_pane

0x3d18,	// (0x00005ff4) cell_indicator_pane_g1

0xc079,	// (0x0000e355) grid_wheel_folder_pane_ParamLimits

0xc079,	// (0x0000e355) grid_wheel_folder_pane

0xc087,	// (0x0000e363) list_wheel_apps_pane_ParamLimits

0xc087,	// (0x0000e363) list_wheel_apps_pane

0xc095,	// (0x0000e371) main_apps_wheel_pane_g1_ParamLimits

0xc095,	// (0x0000e371) main_apps_wheel_pane_g1

0xc0a1,	// (0x0000e37d) main_apps_wheel_pane_g2_ParamLimits

0xc0a1,	// (0x0000e37d) main_apps_wheel_pane_g2

0x0001,

0xfab4,	// (0x00011d90) main_apps_wheel_pane_g_ParamLimits

0xfab4,	// (0x00011d90) main_apps_wheel_pane_g

0xc0af,	// (0x0000e38b) main_apps_wheel_pane_t1_ParamLimits

0xc0af,	// (0x0000e38b) main_apps_wheel_pane_t1

0xc0c3,	// (0x0000e39f) list_wheel_apps_pane_g1

0xc0cb,	// (0x0000e3a7) list_wheel_apps_pane_g2

0xc0d3,	// (0x0000e3af) list_wheel_apps_pane_g3

0xc0db,	// (0x0000e3b7) list_wheel_apps_pane_g4

0xc0e5,	// (0x0000e3c1) list_wheel_apps_pane_g5

0x0004,

0xfab9,	// (0x00011d95) list_wheel_apps_pane_g

0x00e6,	// (0x000023c2) navi_icon_text_pane

0xafc9,	// (0x0000d2a5) aid_fill_nsta

0x3ddf,	// (0x000060bb) navi_icon_text_pane_g1

0x3deb,	// (0x000060c7) navi_icon_text_pane_t1

0xf4f7,	// (0x000117d3) list_set_graphic_pane_t1_ParamLimits

0xf4f7,	// (0x000117d3) list_set_graphic_pane_t1

0x20a2,	// (0x0000437e) popup_midp_note_alarm_window_t6_ParamLimits

0x20a2,	// (0x0000437e) popup_midp_note_alarm_window_t6

0x20b4,	// (0x00004390) popup_midp_note_alarm_window_t7_ParamLimits

0x20b4,	// (0x00004390) popup_midp_note_alarm_window_t7

0x20c6,	// (0x000043a2) popup_midp_note_alarm_window_t8_ParamLimits

0x20c6,	// (0x000043a2) popup_midp_note_alarm_window_t8

0x20d8,	// (0x000043b4) popup_midp_note_alarm_window_t9_ParamLimits

0x20d8,	// (0x000043b4) popup_midp_note_alarm_window_t9

0x20ea,	// (0x000043c6) popup_midp_note_alarm_window_t10_ParamLimits

0x20ea,	// (0x000043c6) popup_midp_note_alarm_window_t10

0x20fc,	// (0x000043d8) popup_midp_note_alarm_window_t11_ParamLimits

0x20fc,	// (0x000043d8) popup_midp_note_alarm_window_t11

0xb8d2,	// (0x0000dbae) scroll_pane_cp17_ParamLimits

0xb8d2,	// (0x0000dbae) scroll_pane_cp17

0x21c2,	// (0x0000449e) volume_small_pane_cp_g1

0x3dfd,	// (0x000060d9) volume_small_pane_cp_g2

0x3e06,	// (0x000060e2) volume_small_pane_cp_g3

0x3e0f,	// (0x000060eb) volume_small_pane_cp_g4

0x3e18,	// (0x000060f4) volume_small_pane_cp_g5

0x3548,	// (0x00005824) volume_small_pane_cp_g6

0x3e21,	// (0x000060fd) volume_small_pane_cp_g7

0x3e2a,	// (0x00006106) volume_small_pane_cp_g8

0x3e33,	// (0x0000610f) volume_small_pane_cp_g9

0x3e3c,	// (0x00006118) volume_small_pane_cp_g10

0x0347,	// (0x00002623) midp_ticker_pane_g1_ParamLimits

0x0353,	// (0x0000262f) midp_ticker_pane_g2_ParamLimits

0xf744,	// (0x00011a20) midp_ticker_pane_g_ParamLimits

0x035f,	// (0x0000263b) midp_ticker_pane_t1_ParamLimits

0xafed,	// (0x0000d2c9) aid_fill_nsta_2

0x194b,	// (0x00003c27) list_form2_midp_pane

0x2ccd,	// (0x00004fa9) midp_editing_number_pane_ParamLimits

0x2cdc,	// (0x00004fb8) midp_ticker_pane_ParamLimits

0x3e45,	// (0x00006121) form2_midp_field_pane

0x3e69,	// (0x00006145) scroll_pane_cp51

0x3e89,	// (0x00006165) form2_midp_button_pane_ParamLimits

0x3e89,	// (0x00006165) form2_midp_button_pane

0x3e9b,	// (0x00006177) form2_midp_content_pane_ParamLimits

0x3e9b,	// (0x00006177) form2_midp_content_pane

0x3eb5,	// (0x00006191) form2_midp_field_choice_group_pane

0x3ebd,	// (0x00006199) form2_midp_field_pane_g1

0x3ec5,	// (0x000061a1) form2_midp_field_pane_g2

0x3ecd,	// (0x000061a9) form2_midp_field_pane_g3

0x3ed5,	// (0x000061b1) form2_midp_field_pane_g4

0x0003,

0xfade,	// (0x00011dba) form2_midp_field_pane_g

0x3edd,	// (0x000061b9) form2_midp_gauge_slider_pane

0x3ee5,	// (0x000061c1) form2_midp_gauge_wait_pane

0x3eed,	// (0x000061c9) form2_midp_image_pane_ParamLimits

0x3eed,	// (0x000061c9) form2_midp_image_pane

0xc118,	// (0x0000e3f4) form2_midp_label_pane_ParamLimits

0xc118,	// (0x0000e3f4) form2_midp_label_pane

0xc131,	// (0x0000e40d) form2_midp_label_pane_cp_ParamLimits

0xc131,	// (0x0000e40d) form2_midp_label_pane_cp

0x3f42,	// (0x0000621e) form2_midp_string_pane_ParamLimits

0x3f42,	// (0x0000621e) form2_midp_string_pane

0xc150,	// (0x0000e42c) form2_midp_text_pane_ParamLimits

0xc150,	// (0x0000e42c) form2_midp_text_pane

0x3f6f,	// (0x0000624b) form2_midp_time_pane

0x3f7f,	// (0x0000625b) input_focus_pane_cp51_ParamLimits

0x3f7f,	// (0x0000625b) input_focus_pane_cp51

0xc169,	// (0x0000e445) form2_midp_label_pane_t1_ParamLimits

0xc169,	// (0x0000e445) form2_midp_label_pane_t1

0xc1a9,	// (0x0000e485) form2_mdip_text_pane_t1_ParamLimits

0xc1a9,	// (0x0000e485) form2_mdip_text_pane_t1

0x3ff7,	// (0x000062d3) form2_midp_time_pane_t1

0x4012,	// (0x000062ee) form2_midp_gauge_slider_pane_t1

0xc1c5,	// (0x0000e4a1) form2_midp_gauge_slider_pane_t2

0xc1d7,	// (0x0000e4b3) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae7,	// (0x00011dc3) form2_midp_gauge_slider_pane_t

0x4048,	// (0x00006324) form2_midp_slider_pane

0x4054,	// (0x00006330) form2_midp_gauge_wait_pane_t1

0x4062,	// (0x0000633e) form2_midp_wait_pane_ParamLimits

0x4062,	// (0x0000633e) form2_midp_wait_pane

0xc1e9,	// (0x0000e4c5) list_single_2graphic_pane_cp4_ParamLimits

0xc1e9,	// (0x0000e4c5) list_single_2graphic_pane_cp4

0xb4c6,	// (0x0000d7a2) list_single_midp_graphic_pane_cp_ParamLimits

0xb4c6,	// (0x0000d7a2) list_single_midp_graphic_pane_cp

0xe609,	// (0x000108e5) list_highlight_pane_cp20

0x40b5,	// (0x00006391) list_single_2graphic_pane_g1_cp4

0x32ab,	// (0x00005587) list_single_2graphic_pane_g2_cp4

0x40bd,	// (0x00006399) list_single_2graphic_pane_t1_cp4

0xe685,	// (0x00010961) list_highlight_pane_cp21

0x40cc,	// (0x000063a8) list_single_midp_graphic_pane_g4_cp

0x40db,	// (0x000063b7) list_single_midp_graphic_pane_t1_cp

0xc1fe,	// (0x0000e4da) form2_mdip_string_pane_t1_ParamLimits

0xc1fe,	// (0x0000e4da) form2_mdip_string_pane_t1

0xe609,	// (0x000108e5) bg_wml_button_pane_cp2

0xe490,	// (0x0001076c) form2_midp_image_pane_g1

0xea19,	// (0x00010cf5) list_double_large_graphic_pane_g5_ParamLimits

0xea19,	// (0x00010cf5) list_double_large_graphic_pane_g5

0xa4f5,	// (0x0000c7d1) midp_form_pane_ParamLimits

0xe685,	// (0x00010961) main_apps_wheel_pane_ParamLimits

0xaca7,	// (0x0000cf83) popup_preview_window_ParamLimits

0xaca7,	// (0x0000cf83) popup_preview_window

0xaf74,	// (0x0000d250) popup_touch_info_window_ParamLimits

0xaf74,	// (0x0000d250) popup_touch_info_window

0xaf92,	// (0x0000d26e) popup_touch_menu_window_ParamLimits

0xaf92,	// (0x0000d26e) popup_touch_menu_window

0xe486,	// (0x00010762) bg_popup_sub_pane_cp6

0x41f7,	// (0x000064d3) list_touch_menu_pane

0xc274,	// (0x0000e550) list_single_touch_menu_pane_ParamLimits

0xc274,	// (0x0000e550) list_single_touch_menu_pane

0xc288,	// (0x0000e564) list_single_touch_menu_pane_t1

0xe685,	// (0x00010961) bg_popup_sub_pane_cp7_ParamLimits

0xe685,	// (0x00010961) bg_popup_sub_pane_cp7

0x4223,	// (0x000064ff) heading_sub_pane

0x422b,	// (0x00006507) list_touch_info_pane_ParamLimits

0x422b,	// (0x00006507) list_touch_info_pane

0x423a,	// (0x00006516) list_single_touch_info_pane_ParamLimits

0x423a,	// (0x00006516) list_single_touch_info_pane

0x424c,	// (0x00006528) list_single_touch_info_pane_t1

0x425a,	// (0x00006536) list_single_touch_info_pane_t2

0x0001,

0xfaf5,	// (0x00011dd1) list_single_touch_info_pane_t

0x0266,	// (0x00002542) bg_popup_heading_pane_cp

0x4268,	// (0x00006544) heading_sub_pane_t1

0x14c3,	// (0x0000379f) bg_popup_preview_window_pane_cp_ParamLimits

0x14c3,	// (0x0000379f) bg_popup_preview_window_pane_cp

0x4223,	// (0x000064ff) heading_preview_pane

0x422b,	// (0x00006507) list_preview_pane_ParamLimits

0x422b,	// (0x00006507) list_preview_pane

0x4276,	// (0x00006552) popup_preview_window_g1

0x423a,	// (0x00006516) list_single_preview_pane_ParamLimits

0x423a,	// (0x00006516) list_single_preview_pane

0x427e,	// (0x0000655a) list_single_preview_pane_g1

0x4286,	// (0x00006562) list_single_preview_pane_t1

0x424c,	// (0x00006528) list_single_preview_pane_t2

0x0001,

0xfafa,	// (0x00011dd6) list_single_preview_pane_t

0x4294,	// (0x00006570) bg_popup_heading_pane_cp2_ParamLimits

0x4294,	// (0x00006570) bg_popup_heading_pane_cp2

0x42aa,	// (0x00006586) heading_preview_pane_g1

0x42b2,	// (0x0000658e) heading_preview_pane_t1_ParamLimits

0x42b2,	// (0x0000658e) heading_preview_pane_t1

0xe6f2,	// (0x000109ce) soft_indicator_pane_t1_ParamLimits

0xe9cd,	// (0x00010ca9) scroll_pane_ParamLimits

0xefee,	// (0x000112ca) scroll_sc2_left_pane

0xeff7,	// (0x000112d3) scroll_sc2_right_pane

0xf016,	// (0x000112f2) scroll_bg_pane_g1_ParamLimits

0xf02b,	// (0x00011307) scroll_bg_pane_g2_ParamLimits

0xf043,	// (0x0001131f) scroll_bg_pane_g3_ParamLimits

0xf6cf,	// (0x000119ab) scroll_bg_pane_g_ParamLimits

0xf016,	// (0x000112f2) scroll_handle_pane_g1_ParamLimits

0xf058,	// (0x00011334) scroll_handle_pane_g2_ParamLimits

0xf043,	// (0x0001131f) scroll_handle_pane_g3_ParamLimits

0xf6d6,	// (0x000119b2) scroll_handle_pane_g_ParamLimits

0xa84e,	// (0x0000cb2a) popup_choice_list_window_ParamLimits

0xa84e,	// (0x0000cb2a) popup_choice_list_window

0x122f,	// (0x0000350b) choice_list_pane

0x1303,	// (0x000035df) cell_toolbar_pane_t1

0x132b,	// (0x00003607) toolbar_button_pane_ParamLimits

0x2732,	// (0x00004a0e) ai_gene_pane_1_t2_ParamLimits

0x2732,	// (0x00004a0e) ai_gene_pane_1_t2

0x0001,

0xf8f2,	// (0x00011bce) ai_gene_pane_1_t_ParamLimits

0xf8f2,	// (0x00011bce) ai_gene_pane_1_t

0x42cf,	// (0x000065ab) scroll_sc2_left_pane_g1

0x42cf,	// (0x000065ab) scroll_sc2_right_pane_g1

0x07ad,	// (0x00002a89) bg_popup_sub_pane_cp10

0x42d9,	// (0x000065b5) list_choice_list_pane

0xc296,	// (0x0000e572) list_single_choice_list_pane_ParamLimits

0xc296,	// (0x0000e572) list_single_choice_list_pane

0xedc8,	// (0x000110a4) list_single_choice_list_pane_g1

0xa09a,	// (0x0000c376) list_single_choice_list_pane_t1_ParamLimits

0xa09a,	// (0x0000c376) list_single_choice_list_pane_t1

0x430d,	// (0x000065e9) choice_list_pane_g1

0xc2aa,	// (0x0000e586) choice_list_pane_t1

0xe486,	// (0x00010762) input_focus_pane_cp11

0xee09,	// (0x000110e5) title_pane_stacon_g2_ParamLimits

0xee09,	// (0x000110e5) title_pane_stacon_g2

0x0002,

0xf6b5,	// (0x00011991) title_pane_stacon_g_ParamLimits

0xf6b5,	// (0x00011991) title_pane_stacon_g

0x0266,	// (0x00002542) cursor_press_pane

0xa8f5,	// (0x0000cbd1) popup_fep_hwr_window_ParamLimits

0xa8f5,	// (0x0000cbd1) popup_fep_hwr_window

0x0933,	// (0x00002c0f) popup_fep_vkb_window_ParamLimits

0x0933,	// (0x00002c0f) popup_fep_vkb_window

0xc2b8,	// (0x0000e594) cursor_press_pane_g1

0x0002,

0xfb23,	// (0x00011dff) fep_vkb_side_pane_g_ParamLimits

0x4364,	// (0x00006640) fep_hwr_candidate_pane_ParamLimits

0x4364,	// (0x00006640) fep_hwr_candidate_pane

0x438e,	// (0x0000666a) fep_hwr_side_pane_ParamLimits

0x438e,	// (0x0000666a) fep_hwr_side_pane

0x43ae,	// (0x0000668a) fep_hwr_top_pane_ParamLimits

0x43ae,	// (0x0000668a) fep_hwr_top_pane

0x43c6,	// (0x000066a2) fep_hwr_write_pane_ParamLimits

0x43c6,	// (0x000066a2) fep_hwr_write_pane

0xfb23,	// (0x00011dff) fep_vkb_side_pane_g

0x4400,	// (0x000066dc) fep_hwr_top_pane_g1

0x4412,	// (0x000066ee) fep_hwr_top_pane_g2

0x4424,	// (0x00006700) fep_hwr_top_pane_g3

0x0002,

0xfaff,	// (0x00011ddb) fep_hwr_top_pane_g

0x4439,	// (0x00006715) fep_hwr_top_text_pane

0xf11b,	// (0x000113f7) fep_hwr_top_text_pane_g1

0x4511,	// (0x000067ed) fep_hwr_top_text_pane_t1

0x4561,	// (0x0000683d) fep_hwr_candidate_pane_g1

0x47cc,	// (0x00006aa8) fep_vkb_keypad_pane_g3_ParamLimits

0x47cc,	// (0x00006aa8) fep_vkb_keypad_pane_g3

0x47f4,	// (0x00006ad0) fep_vkb_keypad_pane_g4_ParamLimits

0x47f4,	// (0x00006ad0) fep_vkb_keypad_pane_g4

0x4863,	// (0x00006b3f) fep_vkb_bottom_pane_g2_ParamLimits

0x4863,	// (0x00006b3f) fep_vkb_bottom_pane_g2

0x0001,

0xfb2a,	// (0x00011e06) fep_vkb_bottom_pane_g_ParamLimits

0xfb2a,	// (0x00011e06) fep_vkb_bottom_pane_g

0x42cf,	// (0x000065ab) cell_vkb_side_pane_g2

0x0001,

0xfb34,	// (0x00011e10) cell_vkb_side_pane_g

0x48ee,	// (0x00006bca) cell_vkb_side_pane_t1

0x48fc,	// (0x00006bd8) cell_vkb_side_pane_t1_copy1

0x42cf,	// (0x000065ab) bg_fep_vkb_candidate_pane_g2

0x4a28,	// (0x00006d04) cell_vkb_candidate_pane_ParamLimits

0x4595,	// (0x00006871) aid_size_cell_vkb_ParamLimits

0x4595,	// (0x00006871) aid_size_cell_vkb

0x4a28,	// (0x00006d04) cell_vkb_candidate_pane

0x4a5c,	// (0x00006d38) bg_popup_fep_shadow_pane_g1

0xc31f,	// (0x0000e5fb) fep_vkb_bottom_pane_ParamLimits

0xc31f,	// (0x0000e5fb) fep_vkb_bottom_pane

0x4659,	// (0x00006935) fep_vkb_candidate_pane_ParamLimits

0x4659,	// (0x00006935) fep_vkb_candidate_pane

0xc344,	// (0x0000e620) fep_vkb_keypad_pane_ParamLimits

0xc344,	// (0x0000e620) fep_vkb_keypad_pane

0xc379,	// (0x0000e655) fep_vkb_side_pane_ParamLimits

0xc379,	// (0x0000e655) fep_vkb_side_pane

0xc3b5,	// (0x0000e691) fep_vkb_top_pane_ParamLimits

0xc3b5,	// (0x0000e691) fep_vkb_top_pane

0x4725,	// (0x00006a01) fep_vkb_top_pane_g1_ParamLimits

0x4725,	// (0x00006a01) fep_vkb_top_pane_g1

0x4734,	// (0x00006a10) fep_vkb_top_pane_g2_ParamLimits

0x4734,	// (0x00006a10) fep_vkb_top_pane_g2

0x4743,	// (0x00006a1f) fep_vkb_top_pane_g3_ParamLimits

0x4743,	// (0x00006a1f) fep_vkb_top_pane_g3

0x0003,

0xfb1a,	// (0x00011df6) fep_vkb_top_pane_g_ParamLimits

0xfb1a,	// (0x00011df6) fep_vkb_top_pane_g

0x4761,	// (0x00006a3d) fep_vkb_top_text_pane_ParamLimits

0x4761,	// (0x00006a3d) fep_vkb_top_text_pane

0xc3ea,	// (0x0000e6c6) fep_vkb_side_pane_g1_ParamLimits

0xc3ea,	// (0x0000e6c6) fep_vkb_side_pane_g1

0x47bb,	// (0x00006a97) grid_vkb_side_pane_ParamLimits

0x47bb,	// (0x00006a97) grid_vkb_side_pane

0x4a64,	// (0x00006d40) bg_popup_fep_shadow_pane_g2

0x4a6d,	// (0x00006d49) bg_popup_fep_shadow_pane_g3

0x4a75,	// (0x00006d51) bg_popup_fep_shadow_pane_g4

0x4a7e,	// (0x00006d5a) bg_popup_fep_shadow_pane_g5

0x4a88,	// (0x00006d64) bg_popup_fep_shadow_pane_g6

0x4a90,	// (0x00006d6c) bg_popup_fep_shadow_pane_g7

0xeba1,	// (0x00010e7d) bg_popup_fep_shadow_pane_g8

0x4812,	// (0x00006aee) grid_vkb_keypad_number_pane_ParamLimits

0x4812,	// (0x00006aee) grid_vkb_keypad_number_pane

0x4822,	// (0x00006afe) grid_vkb_keypad_pane_ParamLimits

0x4822,	// (0x00006afe) grid_vkb_keypad_pane

0x4848,	// (0x00006b24) fep_vkb_bottom_pane_g1_ParamLimits

0x4848,	// (0x00006b24) fep_vkb_bottom_pane_g1

0x4871,	// (0x00006b4d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4871,	// (0x00006b4d) grid_vkb_keypad_bottom_left_pane

0x4886,	// (0x00006b62) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4886,	// (0x00006b62) grid_vkb_keypad_bottom_right_pane

0x489b,	// (0x00006b77) fep_vkb_top_text_pane_g1

0xc431,	// (0x0000e70d) fep_vkb_top_text_pane_t1

0xc443,	// (0x0000e71f) cell_vkb_side_pane_ParamLimits

0xc443,	// (0x0000e71f) cell_vkb_side_pane

0x42cf,	// (0x000065ab) cell_vkb_side_pane_g1

0x490a,	// (0x00006be6) cell_vkb_keypad_pane_ParamLimits

0x490a,	// (0x00006be6) cell_vkb_keypad_pane

0x497f,	// (0x00006c5b) cell_vkb_keypad_pane_g1

0x0008,

0xfb47,	// (0x00011e23) bg_popup_fep_shadow_pane_g

0x42cf,	// (0x000065ab) cell_hwr_side_pane_g1

0x42cf,	// (0x000065ab) cell_hwr_side_pane_g2

0x4989,	// (0x00006c65) cell_vkb_keypad_pane_t1

0xc459,	// (0x0000e735) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc459,	// (0x0000e735) cell_vkb_keypad_bottom_left_pane

0xc46e,	// (0x0000e74a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc46e,	// (0x0000e74a) cell_vkb_keypad_bottom_right_pane

0x42cf,	// (0x000065ab) cell_vkb_keypad_bottom_left_pane_g1

0x42cf,	// (0x000065ab) cell_vkb_keypad_bottom_right_pane_g1

0x49ed,	// (0x00006cc9) cell_vkb_keypad_number_pane_ParamLimits

0x49ed,	// (0x00006cc9) cell_vkb_keypad_number_pane

0x4a0c,	// (0x00006ce8) cell_vkb_keypad_number_pane_g1

0x4a16,	// (0x00006cf2) cell_vkb_keypad_number_pane_g2

0x4a1f,	// (0x00006cfb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb39,	// (0x00011e15) cell_vkb_keypad_number_pane_g

0x4989,	// (0x00006c65) cell_vkb_keypad_number_pane_t1

0x4a43,	// (0x00006d1f) fep_vkb_candidate_pane_g1

0x0001,

0xfb34,	// (0x00011e10) cell_hwr_side_pane_g

0x4aa2,	// (0x00006d7e) cell_hwr_side_pane_t1

0x4ab0,	// (0x00006d8c) cell_hwr_side_pane_t1_copy1

0x4753,	// (0x00006a2f) cell_hwr_candidate_pane_g1

0x4b00,	// (0x00006ddc) cell_hwr_candidate_pane_t1

0x42cf,	// (0x000065ab) cell_vkb_candidate_pane_g2

0x4b54,	// (0x00006e30) cell_vkb_candidate_pane_t1

0x432b,	// (0x00006607) bg_popup_fep_shadow_pane_ParamLimits

0x432b,	// (0x00006607) bg_popup_fep_shadow_pane

0x43e0,	// (0x000066bc) bg_fep_hwr_top_pane_g4

0x444e,	// (0x0000672a) bg_hwr_side_pane_g1_ParamLimits

0x444e,	// (0x0000672a) bg_hwr_side_pane_g1

0xc2d8,	// (0x0000e5b4) cell_hwr_side_pane_ParamLimits

0xc2d8,	// (0x0000e5b4) cell_hwr_side_pane

0x44bc,	// (0x00006798) fep_hwr_write_pane_g1_ParamLimits

0x44bc,	// (0x00006798) fep_hwr_write_pane_g1

0x44c9,	// (0x000067a5) fep_hwr_write_pane_g2_ParamLimits

0x44c9,	// (0x000067a5) fep_hwr_write_pane_g2

0x44d6,	// (0x000067b2) fep_hwr_write_pane_g3_ParamLimits

0x44d6,	// (0x000067b2) fep_hwr_write_pane_g3

0xc2f8,	// (0x0000e5d4) fep_hwr_write_pane_g4_ParamLimits

0xc2f8,	// (0x0000e5d4) fep_hwr_write_pane_g4

0x0005,

0xfb06,	// (0x00011de2) fep_hwr_write_pane_g_ParamLimits

0xfb06,	// (0x00011de2) fep_hwr_write_pane_g

0x43e0,	// (0x000066bc) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x43e0,	// (0x000066bc) bg_fep_hwr_candidate_pane_g2

0x451f,	// (0x000067fb) cell_hwr_candidate_pane_ParamLimits

0x451f,	// (0x000067fb) cell_hwr_candidate_pane

0x4561,	// (0x0000683d) fep_hwr_candidate_pane_g1_ParamLimits

0x45c3,	// (0x0000689f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x45c3,	// (0x0000689f) bg_popup_fep_shadow_pane_cp2

0x4753,	// (0x00006a2f) fep_vkb_top_pane_g4_ParamLimits

0x4753,	// (0x00006a2f) fep_vkb_top_pane_g4

0x4799,	// (0x00006a75) fep_vkb_side_pane_g2_ParamLimits

0x4799,	// (0x00006a75) fep_vkb_side_pane_g2

0x9dc5,	// (0x0000c0a1) list_setting_pane_t4_ParamLimits

0x9dc5,	// (0x0000c0a1) list_setting_pane_t4

0x9e3f,	// (0x0000c11b) list_setting_number_pane_t5_ParamLimits

0x9e3f,	// (0x0000c11b) list_setting_number_pane_t5

0xf171,	// (0x0001144d) list_double_heading_pane_cp2_ParamLimits

0xf171,	// (0x0001144d) list_double_heading_pane_cp2

0x4b62,	// (0x00006e3e) list_double_heading_pane_g1_cp2_ParamLimits

0x4b62,	// (0x00006e3e) list_double_heading_pane_g1_cp2

0x4b6e,	// (0x00006e4a) list_double_heading_pane_g2_cp2_ParamLimits

0x4b6e,	// (0x00006e4a) list_double_heading_pane_g2_cp2

0x4b82,	// (0x00006e5e) list_double_heading_pane_t1_cp2_ParamLimits

0x4b82,	// (0x00006e5e) list_double_heading_pane_t1_cp2

0x4b98,	// (0x00006e74) list_double_heading_pane_t2_cp2_ParamLimits

0x4b98,	// (0x00006e74) list_double_heading_pane_t2_cp2

0xe47e,	// (0x0001075a) aid_value_unit2

0xe629,	// (0x00010905) popup_preview_fixed_window

0xe7c9,	// (0x00010aa5) bg_popup_preview_window_pane_cp02

0x4baa,	// (0x00006e86) list_preview_fixed_pane

0x4bf0,	// (0x00006ecc) list_empty_pane_fp_ParamLimits

0x4bf0,	// (0x00006ecc) list_empty_pane_fp

0x4bf0,	// (0x00006ecc) list_single_cale_day_pane_fp_ParamLimits

0x4bf0,	// (0x00006ecc) list_single_cale_day_pane_fp

0x4bf0,	// (0x00006ecc) list_single_graphic_heading_pane_fp_ParamLimits

0x4bf0,	// (0x00006ecc) list_single_graphic_heading_pane_fp

0x4bf0,	// (0x00006ecc) list_single_graphic_pane_fp_ParamLimits

0x4bf0,	// (0x00006ecc) list_single_graphic_pane_fp

0x4bf0,	// (0x00006ecc) list_single_heading_pane_fp_ParamLimits

0x4bf0,	// (0x00006ecc) list_single_heading_pane_fp

0x4bf0,	// (0x00006ecc) list_single_pane_fp_ParamLimits

0x4bf0,	// (0x00006ecc) list_single_pane_fp

0x4c06,	// (0x00006ee2) list_single_pane_fp_g1_ParamLimits

0x4c06,	// (0x00006ee2) list_single_pane_fp_g1

0x4c12,	// (0x00006eee) list_single_pane_fp_g2_ParamLimits

0x4c12,	// (0x00006eee) list_single_pane_fp_g2

0x4c1e,	// (0x00006efa) list_single_pane_fp_g3_ParamLimits

0x4c1e,	// (0x00006efa) list_single_pane_fp_g3

0x4c32,	// (0x00006f0e) list_single_pane_fp_g4_ParamLimits

0x4c32,	// (0x00006f0e) list_single_pane_fp_g4

0x0003,

0xfb68,	// (0x00011e44) list_single_pane_fp_g_ParamLimits

0xfb68,	// (0x00011e44) list_single_pane_fp_g

0x4c3e,	// (0x00006f1a) list_single_pane_fp_t1_ParamLimits

0x4c3e,	// (0x00006f1a) list_single_pane_fp_t1

0x4c55,	// (0x00006f31) list_single_graphic_pane_fp_g1_ParamLimits

0x4c55,	// (0x00006f31) list_single_graphic_pane_fp_g1

0x4c06,	// (0x00006ee2) list_single_graphic_pane_fp_g2_ParamLimits

0x4c06,	// (0x00006ee2) list_single_graphic_pane_fp_g2

0x4c12,	// (0x00006eee) list_single_graphic_pane_fp_g3_ParamLimits

0x4c12,	// (0x00006eee) list_single_graphic_pane_fp_g3

0x4c1e,	// (0x00006efa) list_single_graphic_pane_fp_g4_ParamLimits

0x4c1e,	// (0x00006efa) list_single_graphic_pane_fp_g4

0x4c32,	// (0x00006f0e) list_single_graphic_pane_fp_g5_ParamLimits

0x4c32,	// (0x00006f0e) list_single_graphic_pane_fp_g5

0x0004,

0xfb71,	// (0x00011e4d) list_single_graphic_pane_fp_g_ParamLimits

0xfb71,	// (0x00011e4d) list_single_graphic_pane_fp_g

0x4c61,	// (0x00006f3d) list_single_graphic_pane_fp_t1_ParamLimits

0x4c61,	// (0x00006f3d) list_single_graphic_pane_fp_t1

0x4c55,	// (0x00006f31) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4c55,	// (0x00006f31) list_single_graphic_heading_pane_fp_g1

0x4c06,	// (0x00006ee2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4c06,	// (0x00006ee2) list_single_graphic_heading_pane_fp_g2

0x4c12,	// (0x00006eee) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4c12,	// (0x00006eee) list_single_graphic_heading_pane_fp_g3

0x4c1e,	// (0x00006efa) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4c1e,	// (0x00006efa) list_single_graphic_heading_pane_fp_g4

0x4c32,	// (0x00006f0e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4c32,	// (0x00006f0e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb71,	// (0x00011e4d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb71,	// (0x00011e4d) list_single_graphic_heading_pane_fp_g

0x4c77,	// (0x00006f53) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4c77,	// (0x00006f53) list_single_graphic_heading_pane_fp_t1

0x4c8d,	// (0x00006f69) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4c8d,	// (0x00006f69) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7c,	// (0x00011e58) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7c,	// (0x00011e58) list_single_graphic_heading_pane_fp_t

0x4c9f,	// (0x00006f7b) list_single_cale_day_pane_fp_g1_ParamLimits

0x4c9f,	// (0x00006f7b) list_single_cale_day_pane_fp_g1

0x4cd7,	// (0x00006fb3) list_single_cale_day_pane_fp_g2_ParamLimits

0x4cd7,	// (0x00006fb3) list_single_cale_day_pane_fp_g2

0x4ce3,	// (0x00006fbf) list_single_cale_day_pane_fp_g3_ParamLimits

0x4ce3,	// (0x00006fbf) list_single_cale_day_pane_fp_g3

0x4d0b,	// (0x00006fe7) list_single_cale_day_pane_fp_g4_ParamLimits

0x4d0b,	// (0x00006fe7) list_single_cale_day_pane_fp_g4

0x4d2f,	// (0x0000700b) list_single_cale_day_pane_fp_g5_ParamLimits

0x4d2f,	// (0x0000700b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb81,	// (0x00011e5d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb81,	// (0x00011e5d) list_single_cale_day_pane_fp_g

0x4d53,	// (0x0000702f) list_single_cale_day_pane_fp_t1_ParamLimits

0x4d53,	// (0x0000702f) list_single_cale_day_pane_fp_t1

0x4d79,	// (0x00007055) list_single_cale_day_pane_fp_t2_ParamLimits

0x4d79,	// (0x00007055) list_single_cale_day_pane_fp_t2

0x4d92,	// (0x0000706e) list_single_cale_day_pane_fp_t3_ParamLimits

0x4d92,	// (0x0000706e) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8c,	// (0x00011e68) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8c,	// (0x00011e68) list_single_cale_day_pane_fp_t

0x4c06,	// (0x00006ee2) list_empty_pane_fp_g1_ParamLimits

0x4c06,	// (0x00006ee2) list_empty_pane_fp_g1

0x4dab,	// (0x00007087) list_empty_pane_fp_t1

0x4db9,	// (0x00007095) list_empty_pane_fp_t2

0x0001,

0xfb93,	// (0x00011e6f) list_empty_pane_fp_t

0x4c06,	// (0x00006ee2) list_single_heading_pane_fp_g1_ParamLimits

0x4c06,	// (0x00006ee2) list_single_heading_pane_fp_g1

0x4c12,	// (0x00006eee) list_single_heading_pane_fp_g2_ParamLimits

0x4c12,	// (0x00006eee) list_single_heading_pane_fp_g2

0x4c1e,	// (0x00006efa) list_single_heading_pane_fp_g3_ParamLimits

0x4c1e,	// (0x00006efa) list_single_heading_pane_fp_g3

0x0002,

0xfb98,	// (0x00011e74) list_single_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00011e74) list_single_heading_pane_fp_g

0x4dc7,	// (0x000070a3) list_single_heading_pane_fp_t1_ParamLimits

0x4dc7,	// (0x000070a3) list_single_heading_pane_fp_t1

0x4dd9,	// (0x000070b5) list_single_heading_pane_fp_t2_ParamLimits

0x4dd9,	// (0x000070b5) list_single_heading_pane_fp_t2

0x0001,

0xfb9f,	// (0x00011e7b) list_single_heading_pane_fp_t_ParamLimits

0xfb9f,	// (0x00011e7b) list_single_heading_pane_fp_t

0xa0e6,	// (0x0000c3c2) aid_size_cell_fast

0xe7ac,	// (0x00010a88) soft_indicator_pane_cp1_t1

0xa0ef,	// (0x0000c3cb) cell_app_pane_cp2_ParamLimits

0xa0ef,	// (0x0000c3cb) cell_app_pane_cp2

0x434d,	// (0x00006629) fep_hwr_candidate_drop_down_list_pane

0x457b,	// (0x00006857) fep_hwr_candidate_pane_g3_ParamLimits

0x457b,	// (0x00006857) fep_hwr_candidate_pane_g3

0x4588,	// (0x00006864) fep_hwr_candidate_pane_g4_ParamLimits

0x4588,	// (0x00006864) fep_hwr_candidate_pane_g4

0x0002,

0xfb13,	// (0x00011def) fep_hwr_candidate_pane_g_ParamLimits

0xfb13,	// (0x00011def) fep_hwr_candidate_pane_g

0x4648,	// (0x00006924) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4648,	// (0x00006924) fep_vkb_candidate_drop_down_list_pane

0x4a4b,	// (0x00006d27) fep_vkb_candidate_pane_g3

0x4a53,	// (0x00006d2f) fep_vkb_candidate_pane_g4

0x0002,

0xfb40,	// (0x00011e1c) fep_vkb_candidate_pane_g

0x4753,	// (0x00006a2f) cell_hwr_candidate_pane_g1_ParamLimits

0x4abe,	// (0x00006d9a) cell_hwr_candidate_pane_g3_ParamLimits

0x4abe,	// (0x00006d9a) cell_hwr_candidate_pane_g3

0x4adf,	// (0x00006dbb) cell_hwr_candidate_pane_g4_ParamLimits

0x4adf,	// (0x00006dbb) cell_hwr_candidate_pane_g4

0x0002,

0xfb5a,	// (0x00011e36) cell_hwr_candidate_pane_g_ParamLimits

0xfb5a,	// (0x00011e36) cell_hwr_candidate_pane_g

0x4b1e,	// (0x00006dfa) cell_vkb_candidate_pane_g3_ParamLimits

0x4b1e,	// (0x00006dfa) cell_vkb_candidate_pane_g3

0x4b39,	// (0x00006e15) cell_vkb_candidate_pane_g4_ParamLimits

0x4b39,	// (0x00006e15) cell_vkb_candidate_pane_g4

0xc489,	// (0x0000e765) cell_app_pane_cp2_g1_ParamLimits

0xc489,	// (0x0000e765) cell_app_pane_cp2_g1

0x4e0d,	// (0x000070e9) cell_app_pane_cp2_g2_ParamLimits

0x4e0d,	// (0x000070e9) cell_app_pane_cp2_g2

0x0001,

0xfba4,	// (0x00011e80) cell_app_pane_cp2_g_ParamLimits

0xfba4,	// (0x00011e80) cell_app_pane_cp2_g

0x4e19,	// (0x000070f5) cell_app_pane_cp2_t1_ParamLimits

0x4e19,	// (0x000070f5) cell_app_pane_cp2_t1

0xeac7,	// (0x00010da3) grid_highlight_pane_cp1_ParamLimits

0xeac7,	// (0x00010da3) grid_highlight_pane_cp1

0x4e2b,	// (0x00007107) cell_hwr_candidate_pane_cp1_ParamLimits

0x4e2b,	// (0x00007107) cell_hwr_candidate_pane_cp1

0x4753,	// (0x00006a2f) fep_hwr_candidate_drop_down_list_pane_g1

0x4e4a,	// (0x00007126) fep_hwr_candidate_drop_down_list_pane_g2

0x4e57,	// (0x00007133) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba9,	// (0x00011e85) fep_hwr_candidate_drop_down_list_pane_g

0x4e64,	// (0x00007140) fep_hwr_candidate_drop_down_list_scroll_pane

0x4e6d,	// (0x00007149) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e6d,	// (0x00007149) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x4e7a,	// (0x00007156) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e7a,	// (0x00007156) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x4e87,	// (0x00007163) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4e87,	// (0x00007163) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4b1e,	// (0x00006dfa) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4b1e,	// (0x00006dfa) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4b39,	// (0x00006e15) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4b39,	// (0x00006e15) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x4e94,	// (0x00007170) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4e94,	// (0x00007170) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x4eaf,	// (0x0000718b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4eaf,	// (0x0000718b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x4eca,	// (0x000071a6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4eca,	// (0x000071a6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb0,	// (0x00011e8c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb0,	// (0x00011e8c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4ee5,	// (0x000071c1) cell_vkb_candidate_pane_cp1_ParamLimits

0x4ee5,	// (0x000071c1) cell_vkb_candidate_pane_cp1

0x4753,	// (0x00006a2f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4753,	// (0x00006a2f) fep_vkb_candidate_drop_down_list_pane_g1

0x4e4a,	// (0x00007126) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e4a,	// (0x00007126) fep_vkb_candidate_drop_down_list_pane_g2

0x4e57,	// (0x00007133) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e57,	// (0x00007133) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba9,	// (0x00011e85) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba9,	// (0x00011e85) fep_vkb_candidate_drop_down_list_pane_g

0x4f05,	// (0x000071e1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4f05,	// (0x000071e1) fep_vkb_candidate_drop_down_list_scroll_pane

0x4f12,	// (0x000071ee) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4f12,	// (0x000071ee) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4f1f,	// (0x000071fb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4f1f,	// (0x000071fb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4f2b,	// (0x00007207) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4f2b,	// (0x00007207) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4abe,	// (0x00006d9a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4abe,	// (0x00006d9a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4adf,	// (0x00006dbb) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4adf,	// (0x00006dbb) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4f37,	// (0x00007213) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4f37,	// (0x00007213) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4f58,	// (0x00007234) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4f58,	// (0x00007234) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f79,	// (0x00007255) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f79,	// (0x00007255) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x00011e9d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x00011e9d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x949b,	// (0x0000b777) title_pane_g1_ParamLimits

0x94ae,	// (0x0000b78a) title_pane_g2_ParamLimits

0xf54e,	// (0x0001182a) title_pane_g_ParamLimits

0xf10b,	// (0x000113e7) aid_call2_pane

0xf113,	// (0x000113ef) aid_call_pane

0xf11b,	// (0x000113f7) popup_clock_analogue_window_g1

0xf11b,	// (0x000113f7) popup_clock_analogue_window_g2

0xf123,	// (0x000113ff) popup_clock_analogue_window_g3

0xf12c,	// (0x00011408) popup_clock_analogue_window_g4

0xe490,	// (0x0001076c) popup_clock_analogue_window_g5

0x0004,

0xf6e4,	// (0x000119c0) popup_clock_analogue_window_g

0xf134,	// (0x00011410) popup_clock_analogue_window_t1

0xf192,	// (0x0001146e) clock_digital_number_pane_ParamLimits

0xf192,	// (0x0001146e) clock_digital_number_pane

0xf19e,	// (0x0001147a) clock_digital_number_pane_cp02_ParamLimits

0xf19e,	// (0x0001147a) clock_digital_number_pane_cp02

0xf1aa,	// (0x00011486) clock_digital_number_pane_cp03_ParamLimits

0xf1aa,	// (0x00011486) clock_digital_number_pane_cp03

0xf1b6,	// (0x00011492) clock_digital_number_pane_cp04_ParamLimits

0xf1b6,	// (0x00011492) clock_digital_number_pane_cp04

0xf1c2,	// (0x0001149e) clock_digital_separator_pane_ParamLimits

0xf1c2,	// (0x0001149e) clock_digital_separator_pane

0xf1ce,	// (0x000114aa) popup_clock_digital_window_t1_ParamLimits

0xf1ce,	// (0x000114aa) popup_clock_digital_window_t1

0xe490,	// (0x0001076c) clock_digital_number_pane_g1

0xe490,	// (0x0001076c) clock_digital_number_pane_g2

0x0001,

0xf6ef,	// (0x000119cb) clock_digital_number_pane_g

0xe490,	// (0x0001076c) clock_digital_separator_pane_g1

0xe490,	// (0x0001076c) clock_digital_separator_pane_g2

0x0001,

0xf6ef,	// (0x000119cb) clock_digital_separator_pane_g

0xafc9,	// (0x0000d2a5) aid_fill_nsta_ParamLimits

0xb0ff,	// (0x0000d3db) indicator_nsta_pane_ParamLimits

0x106d,	// (0x00003349) popup_clock_analogue_window

0x106d,	// (0x00003349) popup_clock_digital_window

0xedba,	// (0x00011096) grid_indicator_nsta_pane_ParamLimits

0x3c44,	// (0x00005f20) clock_nsta_pane_t2

0x0001,

0xfa93,	// (0x00011d6f) clock_nsta_pane_t

0xefb0,	// (0x0001128c) aid_size_max_handle

0xa1cd,	// (0x0000c4a9) aid_size_min_handle

0x0266,	// (0x00002542) editor_scroll_pane

0x4f94,	// (0x00007270) ex_editor_pane

0xec48,	// (0x00010f24) scroll_pane_cp13

0xe9f9,	// (0x00010cd5) scroll_pane_cp14

0xf169,	// (0x00011445) scroll_pane_cp36

0xa297,	// (0x0000c573) list_single_graphic_hl_pane_cp2_ParamLimits

0xa297,	// (0x0000c573) list_single_graphic_hl_pane_cp2

0xbdd3,	// (0x0000e0af) list_single_graphic_hl_pane_ParamLimits

0xbdd3,	// (0x0000e0af) list_single_graphic_hl_pane

0x7826,	// (0x00009b02) aid_size_min_hl_cp1

0x4fa5,	// (0x00007281) list_highlight_pane_cp34_ParamLimits

0x4fa5,	// (0x00007281) list_highlight_pane_cp34

0x4fb6,	// (0x00007292) list_single_graphic_hl_pane_g1_ParamLimits

0x4fb6,	// (0x00007292) list_single_graphic_hl_pane_g1

0xc4a7,	// (0x0000e783) list_single_graphic_hl_pane_g2_ParamLimits

0xc4a7,	// (0x0000e783) list_single_graphic_hl_pane_g2

0xc4a7,	// (0x0000e783) list_single_graphic_hl_pane_g3_ParamLimits

0xc4a7,	// (0x0000e783) list_single_graphic_hl_pane_g3

0x019f,	// (0x0000247b) list_single_graphic_hl_pane_g4_ParamLimits

0x019f,	// (0x0000247b) list_single_graphic_hl_pane_g4

0x5035,	// (0x00007311) list_single_graphic_hl_pane_g5_ParamLimits

0x5035,	// (0x00007311) list_single_graphic_hl_pane_g5

0x0004,

0xfbd2,	// (0x00011eae) list_single_graphic_hl_pane_g_ParamLimits

0xfbd2,	// (0x00011eae) list_single_graphic_hl_pane_g

0xc4b3,	// (0x0000e78f) list_single_graphic_hl_pane_t1_ParamLimits

0xc4b3,	// (0x0000e78f) list_single_graphic_hl_pane_t1

0x5005,	// (0x000072e1) aid_size_min_hl_cp2

0x500e,	// (0x000072ea) list_highlight_pane_cp34_cp2_ParamLimits

0x500e,	// (0x000072ea) list_highlight_pane_cp34_cp2

0x4fb6,	// (0x00007292) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4fb6,	// (0x00007292) list_single_graphic_hl_pane_g1_cp2

0x501b,	// (0x000072f7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x501b,	// (0x000072f7) list_single_graphic_hl_pane_g2_cp2

0xc4c9,	// (0x0000e7a5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc4c9,	// (0x0000e7a5) list_single_graphic_hl_pane_g3_cp2

0x019f,	// (0x0000247b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x019f,	// (0x0000247b) list_single_graphic_hl_pane_g4_cp2

0x5035,	// (0x00007311) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5035,	// (0x00007311) list_single_graphic_hl_pane_g5_cp2

0xa6c6,	// (0x0000c9a2) control_pane_g4_ParamLimits

0xa6c6,	// (0x0000c9a2) control_pane_g4

0x07ad,	// (0x00002a89) bg_popup_sub_pane_cp10_ParamLimits

0x42d9,	// (0x000065b5) list_choice_list_pane_ParamLimits

0x42e8,	// (0x000065c4) scroll_pane_cp23

0xe7c9,	// (0x00010aa5) bg_popup_preview_window_pane_cp02_ParamLimits

0x4baa,	// (0x00006e86) list_preview_fixed_pane_ParamLimits

0x4bc0,	// (0x00006e9c) list_preview_fixed_pane_cp_ParamLimits

0x4bc0,	// (0x00006e9c) list_preview_fixed_pane_cp

0x4bcc,	// (0x00006ea8) popup_preview_fixed_window_g1_ParamLimits

0x4bcc,	// (0x00006ea8) popup_preview_fixed_window_g1

0x4bd8,	// (0x00006eb4) popup_preview_fixed_window_g2_ParamLimits

0x4bd8,	// (0x00006eb4) popup_preview_fixed_window_g2

0x0002,

0xfb61,	// (0x00011e3d) popup_preview_fixed_window_g_ParamLimits

0xfb61,	// (0x00011e3d) popup_preview_fixed_window_g

0xeeed,	// (0x000111c9) aid_navi_side_left_pane_ParamLimits

0xef02,	// (0x000111de) aid_navi_side_right_pane_ParamLimits

0xef1a,	// (0x000111f6) navi_icon_pane_stacon_ParamLimits

0xef2e,	// (0x0001120a) navi_navi_pane_stacon_ParamLimits

0xef1a,	// (0x000111f6) navi_text_pane_stacon_ParamLimits

0xe486,	// (0x00010762) main_text_info_pane

0x505f,	// (0x0000733b) listscroll_text_info_pane

0x5067,	// (0x00007343) list_text_info_pane_ParamLimits

0x5067,	// (0x00007343) list_text_info_pane

0x5076,	// (0x00007352) scroll_pane_cp24_ParamLimits

0x5076,	// (0x00007352) scroll_pane_cp24

0xc4d7,	// (0x0000e7b3) list_text_info_pane_t1_ParamLimits

0xc4d7,	// (0x0000e7b3) list_text_info_pane_t1

0xa86a,	// (0x0000cb46) popup_fast_swap2_window_ParamLimits

0xa86a,	// (0x0000cb46) popup_fast_swap2_window

0x50c8,	// (0x000073a4) aid_size_cell_fast2

0xe486,	// (0x00010762) bg_popup_window_pane_cp17

0x197f,	// (0x00003c5b) heading_pane_cp2

0xe8fd,	// (0x00010bd9) listscroll_fast2_pane

0x50d2,	// (0x000073ae) grid_fast2_pane

0x50dc,	// (0x000073b8) listscroll_fast2_pane_g1

0x50e4,	// (0x000073c0) listscroll_fast2_pane_g2

0x0001,

0xfbdd,	// (0x00011eb9) listscroll_fast2_pane_g

0xec48,	// (0x00010f24) scroll_pane_cp26

0x50ee,	// (0x000073ca) cell_fast2_pane_ParamLimits

0x50ee,	// (0x000073ca) cell_fast2_pane

0x5103,	// (0x000073df) cell_fast2_pane_g1

0x510c,	// (0x000073e8) cell_fast2_pane_g2

0x5115,	// (0x000073f1) cell_fast2_pane_g3

0x0002,

0xfbe2,	// (0x00011ebe) cell_fast2_pane_g

0xe930,	// (0x00010c0c) grid_highlight_pane_cp9

0xe945,	// (0x00010c21) main_eswt_pane_ParamLimits

0xe945,	// (0x00010c21) main_eswt_pane

0x508b,	// (0x00007367) list_single_text_info_pane

0x511d,	// (0x000073f9) eswt_ctrl_button_pane

0x511d,	// (0x000073f9) eswt_ctrl_canvas_pane

0xc4f3,	// (0x0000e7cf) eswt_ctrl_combo_pane

0x511d,	// (0x000073f9) eswt_ctrl_default_pane

0x511d,	// (0x000073f9) eswt_ctrl_label_pane

0x512d,	// (0x00007409) eswt_ctrl_wait_pane

0xc4fb,	// (0x0000e7d7) eswt_shell_pane

0xe486,	// (0x00010762) listscroll_eswt_app_pane

0x5155,	// (0x00007431) popup_eswt_tasktip_window_ParamLimits

0x5155,	// (0x00007431) popup_eswt_tasktip_window

0x14c3,	// (0x0000379f) bg_popup_window_pane_cp18

0x5166,	// (0x00007442) eswt_control_pane_g1_ParamLimits

0x5166,	// (0x00007442) eswt_control_pane_g1

0x5173,	// (0x0000744f) eswt_control_pane_g2_ParamLimits

0x5173,	// (0x0000744f) eswt_control_pane_g2

0x5180,	// (0x0000745c) eswt_control_pane_g3_ParamLimits

0x5180,	// (0x0000745c) eswt_control_pane_g3

0x518d,	// (0x00007469) eswt_control_pane_g4_ParamLimits

0x518d,	// (0x00007469) eswt_control_pane_g4

0x0003,

0xfbe9,	// (0x00011ec5) eswt_control_pane_g_ParamLimits

0xfbe9,	// (0x00011ec5) eswt_control_pane_g

0xeac7,	// (0x00010da3) bg_button_pane_ParamLimits

0xeac7,	// (0x00010da3) bg_button_pane

0xe945,	// (0x00010c21) common_borders_pane_copy2_ParamLimits

0xe945,	// (0x00010c21) common_borders_pane_copy2

0x519a,	// (0x00007476) control_button_pane_g1_ParamLimits

0x519a,	// (0x00007476) control_button_pane_g1

0x51a6,	// (0x00007482) control_button_pane_g2_ParamLimits

0x51a6,	// (0x00007482) control_button_pane_g2

0x51b2,	// (0x0000748e) control_button_pane_g3_ParamLimits

0x51b2,	// (0x0000748e) control_button_pane_g3

0x0002,

0xfbf2,	// (0x00011ece) control_button_pane_g_ParamLimits

0xfbf2,	// (0x00011ece) control_button_pane_g

0x51c6,	// (0x000074a2) control_button_pane_t1

0x51d4,	// (0x000074b0) control_button_pane_t2

0x0001,

0xfbf9,	// (0x00011ed5) control_button_pane_t

0x1337,	// (0x00003613) bg_button_pane_g1

0x133f,	// (0x0000361b) bg_button_pane_g2

0x1347,	// (0x00003623) bg_button_pane_g3

0x134f,	// (0x0000362b) bg_button_pane_g4

0x1357,	// (0x00003633) bg_button_pane_g5

0x135f,	// (0x0000363b) bg_button_pane_g6

0x1367,	// (0x00003643) bg_button_pane_g7

0x136f,	// (0x0000364b) bg_button_pane_g8

0x1377,	// (0x00003653) bg_button_pane_g9

0x0008,

0xf846,	// (0x00011b22) bg_button_pane_g

0x4294,	// (0x00006570) common_borders_pane_ParamLimits

0x4294,	// (0x00006570) common_borders_pane

0x5166,	// (0x00007442) eswt_control_pane_g1_copy1_ParamLimits

0x5166,	// (0x00007442) eswt_control_pane_g1_copy1

0x5173,	// (0x0000744f) eswt_control_pane_g2_copy1_ParamLimits

0x5173,	// (0x0000744f) eswt_control_pane_g2_copy1

0x5180,	// (0x0000745c) eswt_control_pane_g3_copy1_ParamLimits

0x5180,	// (0x0000745c) eswt_control_pane_g3_copy1

0x518d,	// (0x00007469) eswt_control_pane_g4_copy1_ParamLimits

0x518d,	// (0x00007469) eswt_control_pane_g4_copy1

0x42cf,	// (0x000065ab) bg_eswt_ctrl_canvas_pane_g1

0x4294,	// (0x00006570) common_borders_pane_cp2_ParamLimits

0x4294,	// (0x00006570) common_borders_pane_cp2

0x4294,	// (0x00006570) common_borders_pane_cp3_ParamLimits

0x4294,	// (0x00006570) common_borders_pane_cp3

0x51e2,	// (0x000074be) separator_horizontal_pane

0x51ea,	// (0x000074c6) separator_vertical_pane

0x5166,	// (0x00007442) eswt_control_pane_g1_copy2_ParamLimits

0x5166,	// (0x00007442) eswt_control_pane_g1_copy2

0x5173,	// (0x0000744f) eswt_control_pane_g2_copy2_ParamLimits

0x5173,	// (0x0000744f) eswt_control_pane_g2_copy2

0x5180,	// (0x0000745c) eswt_control_pane_g3_copy2_ParamLimits

0x5180,	// (0x0000745c) eswt_control_pane_g3_copy2

0x518d,	// (0x00007469) eswt_control_pane_g4_copy2_ParamLimits

0x518d,	// (0x00007469) eswt_control_pane_g4_copy2

0xe486,	// (0x00010762) common_borders_pane_cp4

0x51f3,	// (0x000074cf) separator_horizontal_pane_g1

0x51fc,	// (0x000074d8) separator_horizontal_pane_g2

0x5205,	// (0x000074e1) separator_horizontal_pane_g3

0x0002,

0xfbfe,	// (0x00011eda) separator_horizontal_pane_g

0x5166,	// (0x00007442) eswt_control_pane_g1_copy3_ParamLimits

0x5166,	// (0x00007442) eswt_control_pane_g1_copy3

0x5173,	// (0x0000744f) eswt_control_pane_g2_copy3_ParamLimits

0x5173,	// (0x0000744f) eswt_control_pane_g2_copy3

0x5180,	// (0x0000745c) eswt_control_pane_g3_copy3_ParamLimits

0x5180,	// (0x0000745c) eswt_control_pane_g3_copy3

0x518d,	// (0x00007469) eswt_control_pane_g4_copy3_ParamLimits

0x518d,	// (0x00007469) eswt_control_pane_g4_copy3

0xe486,	// (0x00010762) common_borders_pane_cp5

0x520e,	// (0x000074ea) separator_vertical_pane_g1

0x5217,	// (0x000074f3) separator_vertical_pane_g2

0x5220,	// (0x000074fc) separator_vertical_pane_g3

0x0002,

0xfc05,	// (0x00011ee1) separator_vertical_pane_g

0x5166,	// (0x00007442) eswt_control_pane_g1_copy4_ParamLimits

0x5166,	// (0x00007442) eswt_control_pane_g1_copy4

0x5173,	// (0x0000744f) eswt_control_pane_g2_copy4_ParamLimits

0x5173,	// (0x0000744f) eswt_control_pane_g2_copy4

0x5180,	// (0x0000745c) eswt_control_pane_g3_copy4_ParamLimits

0x5180,	// (0x0000745c) eswt_control_pane_g3_copy4

0x518d,	// (0x00007469) eswt_control_pane_g4_copy4_ParamLimits

0x518d,	// (0x00007469) eswt_control_pane_g4_copy4

0xc51b,	// (0x0000e7f7) eswt_ctrl_combo_button_pane

0xc523,	// (0x0000e7ff) eswt_ctrl_input_pane

0xc52b,	// (0x0000e807) popup_choice_list_window_cp70

0xc533,	// (0x0000e80f) eswt_ctrl_input_pane_t1

0xe486,	// (0x00010762) input_focus_pane_cp70

0x4294,	// (0x00006570) bg_button_pane_cp70_ParamLimits

0x4294,	// (0x00006570) bg_button_pane_cp70

0xc541,	// (0x0000e81d) eswt_ctrl_combo_button_pane_g1

0x5257,	// (0x00007533) wait_bar_pane_cp70

0x14c3,	// (0x0000379f) bg_popup_window_pane_cp70_ParamLimits

0x14c3,	// (0x0000379f) bg_popup_window_pane_cp70

0x525f,	// (0x0000753b) popup_eswt_tasktip_window_t1

0x5275,	// (0x00007551) wait_bar_pane_cp71_ParamLimits

0x5275,	// (0x00007551) wait_bar_pane_cp71

0x5281,	// (0x0000755d) grid_eswt_app_pane

0xeff7,	// (0x000112d3) scroll_pane_cp70

0xc549,	// (0x0000e825) cell_eswt_app_pane_ParamLimits

0xc549,	// (0x0000e825) cell_eswt_app_pane

0xc573,	// (0x0000e84f) cell_eswt_app_pane_g1_ParamLimits

0xc573,	// (0x0000e84f) cell_eswt_app_pane_g1

0xc5a2,	// (0x0000e87e) cell_eswt_app_pane_g2_ParamLimits

0xc5a2,	// (0x0000e87e) cell_eswt_app_pane_g2

0x0001,

0xfc0c,	// (0x00011ee8) cell_eswt_app_pane_g_ParamLimits

0xfc0c,	// (0x00011ee8) cell_eswt_app_pane_g

0xc5c6,	// (0x0000e8a2) cell_eswt_app_pane_t1_ParamLimits

0xc5c6,	// (0x0000e8a2) cell_eswt_app_pane_t1

0x533f,	// (0x0000761b) grid_highlight_pane_cp70_ParamLimits

0x533f,	// (0x0000761b) grid_highlight_pane_cp70

0x013b,	// (0x00002417) set_content_pane_g1

0xa658,	// (0x0000c934) status_small_volume_pane

0xc5f8,	// (0x0000e8d4) status_small_volume_pane_g1

0xc600,	// (0x0000e8dc) volume_small2_pane

0xc609,	// (0x0000e8e5) volume_small2_pane_g1

0xc612,	// (0x0000e8ee) volume_small2_pane_g2

0xc61b,	// (0x0000e8f7) volume_small2_pane_g3

0xc624,	// (0x0000e900) volume_small2_pane_g4

0xc62d,	// (0x0000e909) volume_small2_pane_g5

0xc636,	// (0x0000e912) volume_small2_pane_g6

0xc63f,	// (0x0000e91b) volume_small2_pane_g7

0xc648,	// (0x0000e924) volume_small2_pane_g8

0xc651,	// (0x0000e92d) volume_small2_pane_g9

0xc65a,	// (0x0000e936) volume_small2_pane_g10

0x0009,

0xfc11,	// (0x00011eed) volume_small2_pane_g

0x489b,	// (0x00006b77) fep_vkb_top_text_pane_g1_ParamLimits

0xc431,	// (0x0000e70d) fep_vkb_top_text_pane_t1_ParamLimits

0x4be4,	// (0x00006ec0) popup_preview_fixed_window_g3_ParamLimits

0x4be4,	// (0x00006ec0) popup_preview_fixed_window_g3

0xaf07,	// (0x0000d1e3) popup_toolbar_trans_pane

0xbc15,	// (0x0000def1) aid_height_set_list_ParamLimits

0x2b17,	// (0x00004df3) aid_size_parent_ParamLimits

0x07ad,	// (0x00002a89) list_highlight_pane_cp2_ParamLimits

0x013b,	// (0x00002417) set_content_pane_g1_ParamLimits

0xbde5,	// (0x0000e0c1) list_single_image_pane_ParamLimits

0xbde5,	// (0x0000e0c1) list_single_image_pane

0xc663,	// (0x0000e93f) aid_size_cell_image_ParamLimits

0xc663,	// (0x0000e93f) aid_size_cell_image

0xc670,	// (0x0000e94c) grid_single_image_pane_ParamLimits

0xc670,	// (0x0000e94c) grid_single_image_pane

0x4c12,	// (0x00006eee) list_single_image_pane_g1_ParamLimits

0x4c12,	// (0x00006eee) list_single_image_pane_g1

0x4c1e,	// (0x00006efa) list_single_image_pane_g2_ParamLimits

0x4c1e,	// (0x00006efa) list_single_image_pane_g2

0x0001,

0xfc26,	// (0x00011f02) list_single_image_pane_g_ParamLimits

0xfc26,	// (0x00011f02) list_single_image_pane_g

0x53d1,	// (0x000076ad) list_single_image_pane_t1_ParamLimits

0x53d1,	// (0x000076ad) list_single_image_pane_t1

0xc67c,	// (0x0000e958) cell_image_list_pane_ParamLimits

0xc67c,	// (0x0000e958) cell_image_list_pane

0xc690,	// (0x0000e96c) cell_image_list_pane_g1

0xc699,	// (0x0000e975) cell_image_list_pane_g2

0x0001,

0xfc2b,	// (0x00011f07) cell_image_list_pane_g

0xc6a2,	// (0x0000e97e) aid_size_cell_tb_trans_pane

0xeac7,	// (0x00010da3) bg_tb_trans_pane

0xc6b4,	// (0x0000e990) grid_tb_trans_pane

0x1337,	// (0x00003613) bg_tb_trans_pane_g1

0x133f,	// (0x0000361b) bg_tb_trans_pane_g2

0x1347,	// (0x00003623) bg_tb_trans_pane_g3

0x134f,	// (0x0000362b) bg_tb_trans_pane_g4

0x1357,	// (0x00003633) bg_tb_trans_pane_g5

0x136f,	// (0x0000364b) bg_tb_trans_pane_g6

0x1377,	// (0x00003653) bg_tb_trans_pane_g7

0x135f,	// (0x0000363b) bg_tb_trans_pane_g8

0x1367,	// (0x00003643) bg_tb_trans_pane_g9

0x0008,

0xfc30,	// (0x00011f0c) bg_tb_trans_pane_g

0xc6c8,	// (0x0000e9a4) cell_toolbar_trans_pane_ParamLimits

0xc6c8,	// (0x0000e9a4) cell_toolbar_trans_pane

0x42cf,	// (0x000065ab) cell_toolbar_trans_pane_g1

0xc0fc,	// (0x0000e3d8) list_form2_midp_pane_t1

0xc10a,	// (0x0000e3e6) list_form2_midp_pane_t2

0x0001,

0xfad9,	// (0x00011db5) list_form2_midp_pane_t

0x3e69,	// (0x00006145) scroll_pane_cp51_ParamLimits

0x4072,	// (0x0000634e) form2_midp_wait_pane_g1

0x407b,	// (0x00006357) form2_midp_wait_pane_g2

0x4084,	// (0x00006360) form2_midp_wait_pane_g3

0x0002,

0xfaee,	// (0x00011dca) form2_midp_wait_pane_g

0xe685,	// (0x00010961) list_highlight_pane_cp21_ParamLimits

0x40cc,	// (0x000063a8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x40db,	// (0x000063b7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2d1a,	// (0x00004ff6) list_single_2graphic_im_pane_ParamLimits

0x2d1a,	// (0x00004ff6) list_single_2graphic_im_pane

0xc6ee,	// (0x0000e9ca) list_single_2graphic_im_pane_g1_ParamLimits

0xc6ee,	// (0x0000e9ca) list_single_2graphic_im_pane_g1

0xc6ff,	// (0x0000e9db) list_single_2graphic_im_pane_g2_ParamLimits

0xc6ff,	// (0x0000e9db) list_single_2graphic_im_pane_g2

0xc70b,	// (0x0000e9e7) list_single_2graphic_im_pane_g3_ParamLimits

0xc70b,	// (0x0000e9e7) list_single_2graphic_im_pane_g3

0x0003,

0xfc43,	// (0x00011f1f) list_single_2graphic_im_pane_g_ParamLimits

0xfc43,	// (0x00011f1f) list_single_2graphic_im_pane_g

0xc71f,	// (0x0000e9fb) list_single_2graphic_im_pane_t1_ParamLimits

0xc71f,	// (0x0000e9fb) list_single_2graphic_im_pane_t1

0x4bf0,	// (0x00006ecc) list_single_graphic_2heading_pane_fp_ParamLimits

0x4bf0,	// (0x00006ecc) list_single_graphic_2heading_pane_fp

0x4c55,	// (0x00006f31) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4c55,	// (0x00006f31) list_single_graphic_2heading_pane_fp_g1

0x4c06,	// (0x00006ee2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4c06,	// (0x00006ee2) list_single_graphic_2heading_pane_fp_g2

0x4c12,	// (0x00006eee) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4c12,	// (0x00006eee) list_single_graphic_2heading_pane_fp_g3

0x4c1e,	// (0x00006efa) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4c1e,	// (0x00006efa) list_single_graphic_2heading_pane_fp_g4

0x4c32,	// (0x00006f0e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4c32,	// (0x00006f0e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb71,	// (0x00011e4d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb71,	// (0x00011e4d) list_single_graphic_2heading_pane_fp_g

0x54c7,	// (0x000077a3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x54c7,	// (0x000077a3) list_single_graphic_2heading_pane_fp_t1

0x4c8d,	// (0x00006f69) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4c8d,	// (0x00006f69) list_single_graphic_2heading_pane_fp_t2

0x54dd,	// (0x000077b9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x54dd,	// (0x000077b9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4c,	// (0x00011f28) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4c,	// (0x00011f28) list_single_graphic_2heading_pane_fp_t

0x44f9,	// (0x000067d5) fep_hwr_write_pane_g5_ParamLimits

0x44f9,	// (0x000067d5) fep_hwr_write_pane_g5

0x4505,	// (0x000067e1) fep_hwr_write_pane_g6_ParamLimits

0x4505,	// (0x000067e1) fep_hwr_write_pane_g6

0xc4fb,	// (0x0000e7d7) eswt_shell_pane_ParamLimits

0x14c3,	// (0x0000379f) bg_popup_window_pane_cp18_ParamLimits

0x29d5,	// (0x00004cb1) heading_pane_cp70

0x525f,	// (0x0000753b) popup_eswt_tasktip_window_t1_ParamLimits

0xb024,	// (0x0000d300) aid_touch_tab_arrow_left

0xb03a,	// (0x0000d316) aid_touch_tab_arrow_right

0x94c6,	// (0x0000b7a2) title_pane_g3_ParamLimits

0x94c6,	// (0x0000b7a2) title_pane_g3

0xea46,	// (0x00010d22) set_value_pane_g1

0xaf07,	// (0x0000d1e3) popup_toolbar_trans_pane_ParamLimits

0xc6a2,	// (0x0000e97e) aid_size_cell_tb_trans_pane_ParamLimits

0xeac7,	// (0x00010da3) bg_tb_trans_pane_ParamLimits

0xc6b4,	// (0x0000e990) grid_tb_trans_pane_ParamLimits

0xe7c9,	// (0x00010aa5) cont_note_pane_ParamLimits

0xe7c9,	// (0x00010aa5) cont_note_pane

0xe945,	// (0x00010c21) cont_snote2_single_text_pane_ParamLimits

0xe945,	// (0x00010c21) cont_snote2_single_text_pane

0xe945,	// (0x00010c21) cont_snote2_single_graphic_pane_ParamLimits

0xe945,	// (0x00010c21) cont_snote2_single_graphic_pane

0x1b9e,	// (0x00003e7a) cont_note_wait_pane_ParamLimits

0x1b9e,	// (0x00003e7a) cont_note_wait_pane

0x1b9e,	// (0x00003e7a) cont_note_image_pane_ParamLimits

0x1b9e,	// (0x00003e7a) cont_note_image_pane

0x54f3,	// (0x000077cf) popup_note2_window_g1_ParamLimits

0x54f3,	// (0x000077cf) popup_note2_window_g1

0xc75d,	// (0x0000ea39) popup_note2_window_t1_ParamLimits

0xc75d,	// (0x0000ea39) popup_note2_window_t1

0xc7a2,	// (0x0000ea7e) popup_note2_window_t2_ParamLimits

0xc7a2,	// (0x0000ea7e) popup_note2_window_t2

0xc7e7,	// (0x0000eac3) popup_note2_window_t3_ParamLimits

0xc7e7,	// (0x0000eac3) popup_note2_window_t3

0x55f3,	// (0x000078cf) popup_note2_window_t4_ParamLimits

0x55f3,	// (0x000078cf) popup_note2_window_t4

0xe84d,	// (0x00010b29) popup_note2_window_t5_ParamLimits

0xe84d,	// (0x00010b29) popup_note2_window_t5

0x0004,

0xfc58,	// (0x00011f34) popup_note2_window_t_ParamLimits

0xfc58,	// (0x00011f34) popup_note2_window_t

0x5622,	// (0x000078fe) popup_note2_image_window_g1_ParamLimits

0x5622,	// (0x000078fe) popup_note2_image_window_g1

0xc82c,	// (0x0000eb08) popup_note2_image_window_g2_ParamLimits

0xc82c,	// (0x0000eb08) popup_note2_image_window_g2

0x0001,

0xfc63,	// (0x00011f3f) popup_note2_image_window_g_ParamLimits

0xfc63,	// (0x00011f3f) popup_note2_image_window_g

0x5640,	// (0x0000791c) popup_note2_image_window_t1_ParamLimits

0x5640,	// (0x0000791c) popup_note2_image_window_t1

0x5658,	// (0x00007934) popup_note2_image_window_t2_ParamLimits

0x5658,	// (0x00007934) popup_note2_image_window_t2

0x5670,	// (0x0000794c) popup_note2_image_window_t3_ParamLimits

0x5670,	// (0x0000794c) popup_note2_image_window_t3

0x0002,

0xfc68,	// (0x00011f44) popup_note2_image_window_t_ParamLimits

0xfc68,	// (0x00011f44) popup_note2_image_window_t

0x1bac,	// (0x00003e88) popup_note2_wait_window_g1_ParamLimits

0x1bac,	// (0x00003e88) popup_note2_wait_window_g1

0x1bb8,	// (0x00003e94) popup_note2_wait_window_g2_ParamLimits

0x1bb8,	// (0x00003e94) popup_note2_wait_window_g2

0x1bc4,	// (0x00003ea0) popup_note2_wait_window_g3_ParamLimits

0x1bc4,	// (0x00003ea0) popup_note2_wait_window_g3

0x0002,

0xf828,	// (0x00011b04) popup_note2_wait_window_g_ParamLimits

0xf828,	// (0x00011b04) popup_note2_wait_window_g

0x568c,	// (0x00007968) popup_note2_wait_window_t1_ParamLimits

0x568c,	// (0x00007968) popup_note2_wait_window_t1

0x56aa,	// (0x00007986) popup_note2_wait_window_t2_ParamLimits

0x56aa,	// (0x00007986) popup_note2_wait_window_t2

0x56c8,	// (0x000079a4) popup_note2_wait_window_t3_ParamLimits

0x56c8,	// (0x000079a4) popup_note2_wait_window_t3

0x56da,	// (0x000079b6) popup_note2_wait_window_t4_ParamLimits

0x56da,	// (0x000079b6) popup_note2_wait_window_t4

0x0003,

0xfc6f,	// (0x00011f4b) popup_note2_wait_window_t_ParamLimits

0xfc6f,	// (0x00011f4b) popup_note2_wait_window_t

0x56ec,	// (0x000079c8) wait_bar2_pane_ParamLimits

0x56ec,	// (0x000079c8) wait_bar2_pane

0x5704,	// (0x000079e0) popup_snote2_single_text_window_g1_ParamLimits

0x5704,	// (0x000079e0) popup_snote2_single_text_window_g1

0x572c,	// (0x00007a08) popup_snote2_single_text_window_t1_ParamLimits

0x572c,	// (0x00007a08) popup_snote2_single_text_window_t1

0x5778,	// (0x00007a54) popup_snote2_single_text_window_t2_ParamLimits

0x5778,	// (0x00007a54) popup_snote2_single_text_window_t2

0x57c4,	// (0x00007aa0) popup_snote2_single_text_window_t3_ParamLimits

0x57c4,	// (0x00007aa0) popup_snote2_single_text_window_t3

0x5805,	// (0x00007ae1) popup_snote2_single_text_window_t4_ParamLimits

0x5805,	// (0x00007ae1) popup_snote2_single_text_window_t4

0x583b,	// (0x00007b17) popup_snote2_single_text_window_t5_ParamLimits

0x583b,	// (0x00007b17) popup_snote2_single_text_window_t5

0x0004,

0xfc78,	// (0x00011f54) popup_snote2_single_text_window_t_ParamLimits

0xfc78,	// (0x00011f54) popup_snote2_single_text_window_t

0xc83e,	// (0x0000eb1a) popup_snote2_single_graphic_window_g1_ParamLimits

0xc83e,	// (0x0000eb1a) popup_snote2_single_graphic_window_g1

0x588e,	// (0x00007b6a) popup_snote2_single_graphic_window_g2_ParamLimits

0x588e,	// (0x00007b6a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc83,	// (0x00011f5f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc83,	// (0x00011f5f) popup_snote2_single_graphic_window_g

0x58b6,	// (0x00007b92) popup_snote2_single_graphic_window_t1_ParamLimits

0x58b6,	// (0x00007b92) popup_snote2_single_graphic_window_t1

0x5902,	// (0x00007bde) popup_snote2_single_graphic_window_t2_ParamLimits

0x5902,	// (0x00007bde) popup_snote2_single_graphic_window_t2

0x57c4,	// (0x00007aa0) popup_snote2_single_graphic_window_t3_ParamLimits

0x57c4,	// (0x00007aa0) popup_snote2_single_graphic_window_t3

0x5805,	// (0x00007ae1) popup_snote2_single_graphic_window_t4_ParamLimits

0x5805,	// (0x00007ae1) popup_snote2_single_graphic_window_t4

0x583b,	// (0x00007b17) popup_snote2_single_graphic_window_t5_ParamLimits

0x583b,	// (0x00007b17) popup_snote2_single_graphic_window_t5

0x0004,

0xfc88,	// (0x00011f64) popup_snote2_single_graphic_window_t_ParamLimits

0xfc88,	// (0x00011f64) popup_snote2_single_graphic_window_t

0x3cde,	// (0x00005fba) clock_nsta_pane_cp2_t1

0x3cde,	// (0x00005fba) clock_nsta_pane_cp2_t2

0x0001,

0xfaaf,	// (0x00011d8b) clock_nsta_pane_cp2_t

0xeae6,	// (0x00010dc2) form_field_data_wide_pane_g1_ParamLimits

0xea5d,	// (0x00010d39) form_field_data_wide_pane_g2_ParamLimits

0xea5d,	// (0x00010d39) form_field_data_wide_pane_g2

0xeaf2,	// (0x00010dce) form_field_data_wide_pane_g3_ParamLimits

0xeaf2,	// (0x00010dce) form_field_data_wide_pane_g3

0x0002,

0xf667,	// (0x00011943) form_field_data_wide_pane_g_ParamLimits

0xf667,	// (0x00011943) form_field_data_wide_pane_g

0xc02d,	// (0x0000e309) grid_touch_3_pane_ParamLimits

0xc02d,	// (0x0000e309) grid_touch_3_pane

0xc866,	// (0x0000eb42) cell_touch_3_pane_ParamLimits

0xc866,	// (0x0000eb42) cell_touch_3_pane

0x42cf,	// (0x000065ab) cell_touch_3_pane_g1

0x42cf,	// (0x000065ab) cell_touch_3_pane_g2

0x0001,

0xfb34,	// (0x00011e10) cell_touch_3_pane_g

0xe87f,	// (0x00010b5b) cont_query_data_pane

0xe887,	// (0x00010b63) cont_query_data_pane_cp1

0x597c,	// (0x00007c58) button_value_adjust_pane_cp7

0x5984,	// (0x00007c60) query_popup_pane_cp3

0xf1fe,	// (0x000114da) bg_popup_sub_pane_cp22_ParamLimits

0xa324,	// (0x0000c600) navi_navi_volume_pane_cp2

0xa333,	// (0x0000c60f) popup_side_volume_key_window_g2

0xa342,	// (0x0000c61e) popup_side_volume_key_window_g3

0x0002,

0xf6fd,	// (0x000119d9) popup_side_volume_key_window_g

0xa351,	// (0x0000c62d) popup_side_volume_key_window_t2

0x0001,

0xf704,	// (0x000119e0) popup_side_volume_key_window_t

0xa4a2,	// (0x0000c77e) popup_side_volume_key_window_ParamLimits

0x9c43,	// (0x0000bf1f) list_double_graphic_pane_g4_ParamLimits

0x9c43,	// (0x0000bf1f) list_double_graphic_pane_g4

0xbdc0,	// (0x0000e09c) list_single_2heading_msg_pane_ParamLimits

0xbdc0,	// (0x0000e09c) list_single_2heading_msg_pane

0xc8af,	// (0x0000eb8b) list_single_2heading_msg_pane_g1_ParamLimits

0xc8af,	// (0x0000eb8b) list_single_2heading_msg_pane_g1

0xc8bb,	// (0x0000eb97) list_single_2heading_msg_pane_g2_ParamLimits

0xc8bb,	// (0x0000eb97) list_single_2heading_msg_pane_g2

0xc8ce,	// (0x0000ebaa) list_single_2heading_msg_pane_g3_ParamLimits

0xc8ce,	// (0x0000ebaa) list_single_2heading_msg_pane_g3

0xc8da,	// (0x0000ebb6) list_single_2heading_msg_pane_g4_ParamLimits

0xc8da,	// (0x0000ebb6) list_single_2heading_msg_pane_g4

0x0003,

0xfc93,	// (0x00011f6f) list_single_2heading_msg_pane_g_ParamLimits

0xfc93,	// (0x00011f6f) list_single_2heading_msg_pane_g

0xc8f2,	// (0x0000ebce) list_single_2heading_msg_pane_t1_ParamLimits

0xc8f2,	// (0x0000ebce) list_single_2heading_msg_pane_t1

0xc91a,	// (0x0000ebf6) list_single_2heading_msg_pane_t2_ParamLimits

0xc91a,	// (0x0000ebf6) list_single_2heading_msg_pane_t2

0xc985,	// (0x0000ec61) list_single_2heading_msg_pane_t3_ParamLimits

0xc985,	// (0x0000ec61) list_single_2heading_msg_pane_t3

0x5a73,	// (0x00007d4f) list_single_2heading_msg_pane_t4_ParamLimits

0x5a73,	// (0x00007d4f) list_single_2heading_msg_pane_t4

0x0003,

0xfc9c,	// (0x00011f78) list_single_2heading_msg_pane_t_ParamLimits

0xfc9c,	// (0x00011f78) list_single_2heading_msg_pane_t

0xe633,	// (0x0001090f) title_pane_g4_ParamLimits

0xe633,	// (0x0001090f) title_pane_g4

0xee16,	// (0x000110f2) title_pane_stacon_g3_ParamLimits

0xee16,	// (0x000110f2) title_pane_stacon_g3

0x548a,	// (0x00007766) list_single_2graphic_im_pane_g4_ParamLimits

0x548a,	// (0x00007766) list_single_2graphic_im_pane_g4

0xb9f4,	// (0x0000dcd0) popup_side_volume_key_window_cp

0x31be,	// (0x0000549a) main_idle_act2_pane_t1

0x137f,	// (0x0000365b) toolbar_button_pane_g10

0x9ad0,	// (0x0000bdac) popup_toolbar_window_cp1

0x3ccf,	// (0x00005fab) clock_nsta_pane_cp_t1

0x3ccf,	// (0x00005fab) clock_nsta_pane_cp_t2

0x0001,

0xfaaa,	// (0x00011d86) clock_nsta_pane_cp_t

0xa324,	// (0x0000c600) navi_navi_volume_pane_cp2_ParamLimits

0xf214,	// (0x000114f0) popup_side_volume_key_window_g1_ParamLimits

0xa333,	// (0x0000c60f) popup_side_volume_key_window_g2_ParamLimits

0xa342,	// (0x0000c61e) popup_side_volume_key_window_g3_ParamLimits

0xf6fd,	// (0x000119d9) popup_side_volume_key_window_g_ParamLimits

0x4339,	// (0x00006615) fep_hwr_aid_pane

0x43e0,	// (0x000066bc) bg_fep_hwr_top_pane_g4_ParamLimits

0x4400,	// (0x000066dc) fep_hwr_top_pane_g1_ParamLimits

0x4412,	// (0x000066ee) fep_hwr_top_pane_g2_ParamLimits

0x4424,	// (0x00006700) fep_hwr_top_pane_g3_ParamLimits

0xfaff,	// (0x00011ddb) fep_hwr_top_pane_g_ParamLimits

0x4439,	// (0x00006715) fep_hwr_top_text_pane_ParamLimits

0x2512,	// (0x000047ee) aid_touch_tab_arrow_arrow_2

0x251b,	// (0x000047f7) aid_touch_tab_arrow_left_2

0x434d,	// (0x00006629) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x4384,	// (0x00006660) fep_hwr_prediction_pane

0x46aa,	// (0x00006986) fep_vkb_prediction_pane

0xc411,	// (0x0000e6ed) fep_vkb_side_pane_g3_ParamLimits

0xc411,	// (0x0000e6ed) fep_vkb_side_pane_g3

0x4753,	// (0x00006a2f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4e4a,	// (0x00007126) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4e57,	// (0x00007133) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba9,	// (0x00011e85) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5a98,	// (0x00007d74) fep_hwr_prediction_pane_g1

0x5aa2,	// (0x00007d7e) fep_hwr_prediction_pane_g2

0x5aaa,	// (0x00007d86) fep_hwr_prediction_pane_g3

0x5ab2,	// (0x00007d8e) fep_hwr_prediction_pane_g4

0x0003,

0xfca5,	// (0x00011f81) fep_hwr_prediction_pane_g

0x5a98,	// (0x00007d74) fep_vkb_prediction_pane_g1

0x5aba,	// (0x00007d96) fep_vkb_prediction_pane_g2

0x5ac2,	// (0x00007d9e) fep_vkb_prediction_pane_g3

0x5aca,	// (0x00007da6) fep_vkb_prediction_pane_g4

0x0003,

0xfcae,	// (0x00011f8a) fep_vkb_prediction_pane_g

0xbb97,	// (0x0000de73) slider_set_pane_g3

0xbbab,	// (0x0000de87) slider_set_pane_g4

0xbbc3,	// (0x0000de9f) slider_set_pane_g5

0xbb97,	// (0x0000de73) slider_set_pane_g6

0xbbd9,	// (0x0000deb5) slider_set_pane_g7

0x2c78,	// (0x00004f54) slider_form_pane_g3

0x2c81,	// (0x00004f5d) slider_form_pane_g4

0x2c89,	// (0x00004f65) slider_form_pane_g5

0x2c78,	// (0x00004f54) slider_form_pane_g6

0xbd60,	// (0x0000e03c) slider_form_pane_g7

0x34b2,	// (0x0000578e) slider_set_pane_vc_g3

0x34bb,	// (0x00005797) slider_set_pane_vc_g4

0x34c4,	// (0x000057a0) slider_set_pane_vc_g5

0x34b2,	// (0x0000578e) slider_set_pane_vc_g6

0x34cd,	// (0x000057a9) slider_set_pane_vc_g7

0x39b3,	// (0x00005c8f) slider_form_pane_vc_g1

0x39bc,	// (0x00005c98) slider_form_pane_vc_g2

0x39c5,	// (0x00005ca1) slider_form_pane_vc_g3

0x39b3,	// (0x00005c8f) slider_form_pane_vc_g4

0x39ce,	// (0x00005caa) slider_form_pane_vc_g5

0x0004,

0xfa7c,	// (0x00011d58) slider_form_pane_vc_g

0xe486,	// (0x00010762) main_idle_act3_pane

0x5ad2,	// (0x00007dae) ai3_links_pane

0xc9f3,	// (0x0000eccf) popup_ai3_data_window_ParamLimits

0xc9f3,	// (0x0000eccf) popup_ai3_data_window

0xe486,	// (0x00010762) grid_ai3_links_pane

0xca0b,	// (0x0000ece7) cell_ai3_links_pane_ParamLimits

0xca0b,	// (0x0000ece7) cell_ai3_links_pane

0x5b0b,	// (0x00007de7) bg_popup_sub_pane_cp11

0x5b18,	// (0x00007df4) cell_ai3_links_pane_g1

0xe486,	// (0x00010762) bg_popup_sub_pane_cp12

0x5b3d,	// (0x00007e19) heading_ai3_data_pane

0x5b45,	// (0x00007e21) list_ai3_gene_pane

0x5b51,	// (0x00007e2d) popup_ai3_data_window_g1

0x5b59,	// (0x00007e35) heading_ai3_data_pane_g1

0x5b61,	// (0x00007e3d) heading_ai3_data_pane_t1

0xca25,	// (0x0000ed01) list_double_ai3_gene_pane_ParamLimits

0xca25,	// (0x0000ed01) list_double_ai3_gene_pane

0x5b7c,	// (0x00007e58) list_single_ai3_gene_pane_ParamLimits

0x5b7c,	// (0x00007e58) list_single_ai3_gene_pane

0x4294,	// (0x00006570) list_highlight_pane_cp7_ParamLimits

0x4294,	// (0x00006570) list_highlight_pane_cp7

0x5b89,	// (0x00007e65) list_single_a13_gene_pane_t1_ParamLimits

0x5b89,	// (0x00007e65) list_single_a13_gene_pane_t1

0x5ba0,	// (0x00007e7c) list_single_ai3_gene_pane_g1

0x5ba9,	// (0x00007e85) list_single_ai3_gene_pane_g2

0x0001,

0xfcb7,	// (0x00011f93) list_single_ai3_gene_pane_g

0x5bb1,	// (0x00007e8d) list_double_ai3_gene_pane_g1_ParamLimits

0x5bb1,	// (0x00007e8d) list_double_ai3_gene_pane_g1

0xca32,	// (0x0000ed0e) list_double_ai3_gene_pane_t1_ParamLimits

0xca32,	// (0x0000ed0e) list_double_ai3_gene_pane_t1

0x5bd9,	// (0x00007eb5) list_double_ai3_gene_pane_t2_ParamLimits

0x5bd9,	// (0x00007eb5) list_double_ai3_gene_pane_t2

0x5bee,	// (0x00007eca) list_double_ai3_gene_pane_t3_ParamLimits

0x5bee,	// (0x00007eca) list_double_ai3_gene_pane_t3

0x0002,

0xfcbc,	// (0x00011f98) list_double_ai3_gene_pane_t_ParamLimits

0xfcbc,	// (0x00011f98) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5995,	// (0x00007c71) aid_size_min_col_2

0xc899,	// (0x0000eb75) aid_size_min_msg_ParamLimits

0xc899,	// (0x0000eb75) aid_size_min_msg

0xc425,	// (0x0000e701) fep_vkb_top_text_pane_g2_ParamLimits

0xc425,	// (0x0000e701) fep_vkb_top_text_pane_g2

0x0001,

0xfb2f,	// (0x00011e0b) fep_vkb_top_text_pane_g_ParamLimits

0xfb2f,	// (0x00011e0b) fep_vkb_top_text_pane_g

0xe486,	// (0x00010762) main_hc_apps_shell_pane

0x5c0b,	// (0x00007ee7) grid_hc_apps_pane_ParamLimits

0x5c0b,	// (0x00007ee7) grid_hc_apps_pane

0x5c1a,	// (0x00007ef6) list_hc_apps_pane

0x5c22,	// (0x00007efe) scroll_pane_cp37_ParamLimits

0x5c22,	// (0x00007efe) scroll_pane_cp37

0xca4e,	// (0x0000ed2a) cell_hc_apps_pane_ParamLimits

0xca4e,	// (0x0000ed2a) cell_hc_apps_pane

0xcb0c,	// (0x0000ede8) cell_hc_apps_pane_g1_ParamLimits

0xcb0c,	// (0x0000ede8) cell_hc_apps_pane_g1

0x5d0d,	// (0x00007fe9) cell_hc_apps_pane_g2_ParamLimits

0x5d0d,	// (0x00007fe9) cell_hc_apps_pane_g2

0x5d29,	// (0x00008005) cell_hc_apps_pane_g3_ParamLimits

0x5d29,	// (0x00008005) cell_hc_apps_pane_g3

0x0002,

0xfcc3,	// (0x00011f9f) cell_hc_apps_pane_g_ParamLimits

0xfcc3,	// (0x00011f9f) cell_hc_apps_pane_g

0xcb39,	// (0x0000ee15) cell_hc_apps_pane_t1_ParamLimits

0xcb39,	// (0x0000ee15) cell_hc_apps_pane_t1

0xe7c9,	// (0x00010aa5) grid_highlight_pane_cp10_ParamLimits

0xe7c9,	// (0x00010aa5) grid_highlight_pane_cp10

0xcb77,	// (0x0000ee53) list_single_hc_apps_pane_ParamLimits

0xcb77,	// (0x0000ee53) list_single_hc_apps_pane

0xcba7,	// (0x0000ee83) list_single_hc_apps_pane_g1

0xcbc0,	// (0x0000ee9c) list_single_hc_apps_pane_g2

0x0001,

0xfcca,	// (0x00011fa6) list_single_hc_apps_pane_g

0xcbd9,	// (0x0000eeb5) list_single_hc_apps_pane_g2_copy1

0xcbf5,	// (0x0000eed1) list_single_hc_apps_pane_t1

0xe685,	// (0x00010961) bg_set_opt_pane_cp_ParamLimits

0x959a,	// (0x0000b876) setting_slider_pane_t1_ParamLimits

0x95b3,	// (0x0000b88f) setting_slider_pane_t2_ParamLimits

0x95cd,	// (0x0000b8a9) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001183a) setting_slider_pane_t_ParamLimits

0x95e5,	// (0x0000b8c1) slider_set_pane_ParamLimits

0x0642,	// (0x0000291e) control_pane_g5_ParamLimits

0x0642,	// (0x0000291e) control_pane_g5

0xbb8a,	// (0x0000de66) slider_set_pane_g1_ParamLimits

0x2a74,	// (0x00004d50) slider_set_pane_g2_ParamLimits

0xbb97,	// (0x0000de73) slider_set_pane_g3_ParamLimits

0xbbab,	// (0x0000de87) slider_set_pane_g4_ParamLimits

0xbbc3,	// (0x0000de9f) slider_set_pane_g5_ParamLimits

0xbb97,	// (0x0000de73) slider_set_pane_g6_ParamLimits

0xbbd9,	// (0x0000deb5) slider_set_pane_g7_ParamLimits

0xf944,	// (0x00011c20) slider_set_pane_g_ParamLimits

0x00e6,	// (0x000023c2) navi_icon_text_pane_ParamLimits

0xafed,	// (0x0000d2c9) aid_fill_nsta_2_ParamLimits

0xb024,	// (0x0000d300) aid_touch_tab_arrow_left_ParamLimits

0xb03a,	// (0x0000d316) aid_touch_tab_arrow_right_ParamLimits

0xb0d5,	// (0x0000d3b1) clock_nsta_pane_ParamLimits

0x24f4,	// (0x000047d0) navi_icon_pane_g1_ParamLimits

0x2500,	// (0x000047dc) navi_text_pane_t1_ParamLimits

0x3ddf,	// (0x000060bb) navi_icon_text_pane_g1_ParamLimits

0x3deb,	// (0x000060c7) navi_icon_text_pane_t1_ParamLimits

0xcba7,	// (0x0000ee83) list_single_hc_apps_pane_g1_ParamLimits

0xcbc0,	// (0x0000ee9c) list_single_hc_apps_pane_g2_ParamLimits

0xfcca,	// (0x00011fa6) list_single_hc_apps_pane_g_ParamLimits

0xcbd9,	// (0x0000eeb5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcbf5,	// (0x0000eed1) list_single_hc_apps_pane_t1_ParamLimits

0x93cb,	// (0x0000b6a7) popup_toolbar2_fixed_window_ParamLimits

0x93cb,	// (0x0000b6a7) popup_toolbar2_fixed_window

0xaefd,	// (0x0000d1d9) popup_toolbar2_float_window

0xe486,	// (0x00010762) bg_popup_sub_pane_cp27

0x5e6a,	// (0x00008146) grid_toolbar2_float_pane

0xe486,	// (0x00010762) bg_popup_sub_pane_cp26

0x5e6a,	// (0x00008146) grid_toolbar2_fixed_pane

0xcc23,	// (0x0000eeff) cell_toolbar2_fixed_pane_ParamLimits

0xcc23,	// (0x0000eeff) cell_toolbar2_fixed_pane

0xcc3d,	// (0x0000ef19) cell_toolbar2_fixed_pane_g1

0x1265,	// (0x00003541) toolbar2_fixed_button_pane

0x1337,	// (0x00003613) toolbar2_fixed_button_pane_g1

0x133f,	// (0x0000361b) toolbar2_fixed_button_pane_g2

0x1347,	// (0x00003623) toolbar2_fixed_button_pane_g3

0x134f,	// (0x0000362b) toolbar2_fixed_button_pane_g4

0x1357,	// (0x00003633) toolbar2_fixed_button_pane_g5

0x135f,	// (0x0000363b) toolbar2_fixed_button_pane_g6

0x1367,	// (0x00003643) toolbar2_fixed_button_pane_g7

0x136f,	// (0x0000364b) toolbar2_fixed_button_pane_g8

0x1377,	// (0x00003653) toolbar2_fixed_button_pane_g9

0x0008,

0xf846,	// (0x00011b22) toolbar2_fixed_button_pane_g

0x5e8b,	// (0x00008167) cell_toolbar2_float_pane_ParamLimits

0x5e8b,	// (0x00008167) cell_toolbar2_float_pane

0x5e9c,	// (0x00008178) cell_toolbar2_float_pane_g1

0x1265,	// (0x00003541) toolbar2_fixed_button_pane_cp

0xc30d,	// (0x0000e5e9) fep_vkb_accented_list_pane_ParamLimits

0xc30d,	// (0x0000e5e9) fep_vkb_accented_list_pane

0x4a9a,	// (0x00006d76) bg_popup_fep_shadow_pane_g9

0x0266,	// (0x00002542) bg_popup_fep_shadow_pane_cp3

0xec2f,	// (0x00010f0b) list_accented_list_pane

0x5ea5,	// (0x00008181) list_single_accented_list_pane_ParamLimits

0x5ea5,	// (0x00008181) list_single_accented_list_pane

0x0266,	// (0x00002542) list_highlight_pane_cp10

0x5eb6,	// (0x00008192) list_single_accented_list_pane_t1

0xae27,	// (0x0000d103) popup_slider_window_ParamLimits

0xae27,	// (0x0000d103) popup_slider_window

0x598c,	// (0x00007c68) aid_indentation_list_msg

0xcd2e,	// (0x0000f00a) bg_popup_window_pane_cp19

0x5fdc,	// (0x000082b8) popup_slider_window_g1

0x5ff8,	// (0x000082d4) popup_slider_window_g2

0x6014,	// (0x000082f0) popup_slider_window_g3

0x0005,

0xfccf,	// (0x00011fab) popup_slider_window_g

0x607a,	// (0x00008356) popup_slider_window_t1

0x60ee,	// (0x000083ca) small_volume_slider_vertical_pane

0x42cf,	// (0x000065ab) small_volume_slider_vertical_pane_g1

0x42cf,	// (0x000065ab) small_volume_slider_vertical_pane_g2

0x610a,	// (0x000083e6) small_volume_slider_vertical_pane_g3

0x0002,

0xfce1,	// (0x00011fbd) small_volume_slider_vertical_pane_g

0x9319,	// (0x0000b5f5) area_side_right_pane_ParamLimits

0x9319,	// (0x0000b5f5) area_side_right_pane

0xcde6,	// (0x0000f0c2) aid_size_side_button_ParamLimits

0xcde6,	// (0x0000f0c2) aid_size_side_button

0xcdff,	// (0x0000f0db) grid_sctrl_middle_pane_ParamLimits

0xcdff,	// (0x0000f0db) grid_sctrl_middle_pane

0x6146,	// (0x00008422) sctrl_sk_bottom_pane

0x6157,	// (0x00008433) sctrl_sk_top_pane

0x6169,	// (0x00008445) aid_touch_sctrl_top

0xe7c9,	// (0x00010aa5) bg_sctrl_sk_pane_ParamLimits

0xe7c9,	// (0x00010aa5) bg_sctrl_sk_pane

0x6176,	// (0x00008452) sctrl_sk_top_pane_g1

0x6183,	// (0x0000845f) sctrl_sk_top_pane_t1

0x6169,	// (0x00008445) aid_touch_sctrl_bottom

0xe7c9,	// (0x00010aa5) bg_sctrl_sk_pane_cp_ParamLimits

0xe7c9,	// (0x00010aa5) bg_sctrl_sk_pane_cp

0x619e,	// (0x0000847a) sctrl_sk_bottom_pane_g1

0x6183,	// (0x0000845f) sctrl_sk_bottom_pane_t1

0xce19,	// (0x0000f0f5) cell_sctrl_middle_pane_ParamLimits

0xce19,	// (0x0000f0f5) cell_sctrl_middle_pane

0xce2a,	// (0x0000f106) aid_touch_sctrl_middle_ParamLimits

0xce2a,	// (0x0000f106) aid_touch_sctrl_middle

0xce37,	// (0x0000f113) bg_sctrl_middle_pane_ParamLimits

0xce37,	// (0x0000f113) bg_sctrl_middle_pane

0x6263,	// (0x0000853f) cell_sctrl_middle_pane_g1_ParamLimits

0x6263,	// (0x0000853f) cell_sctrl_middle_pane_g1

0xce45,	// (0x0000f121) cell_sctrl_middle_pane_g2_ParamLimits

0xce45,	// (0x0000f121) cell_sctrl_middle_pane_g2

0x0001,

0xfced,	// (0x00011fc9) cell_sctrl_middle_pane_g_ParamLimits

0xfced,	// (0x00011fc9) cell_sctrl_middle_pane_g

0x1337,	// (0x00003613) bg_sctrl_middle_pane_g1

0x133f,	// (0x0000361b) bg_sctrl_middle_pane_g2

0x1347,	// (0x00003623) bg_sctrl_middle_pane_g3

0x134f,	// (0x0000362b) bg_sctrl_middle_pane_g4

0x1357,	// (0x00003633) bg_sctrl_middle_pane_g5

0x135f,	// (0x0000363b) bg_sctrl_middle_pane_g6

0x1367,	// (0x00003643) bg_sctrl_middle_pane_g7

0x136f,	// (0x0000364b) bg_sctrl_middle_pane_g8

0x0007,

0xfcf2,	// (0x00011fce) bg_sctrl_middle_pane_g

0x1377,	// (0x00003653) bg_sctrl_middle_pane_g8_copy1

0x1337,	// (0x00003613) bg_sctrl_sk_pane_g1

0x133f,	// (0x0000361b) bg_sctrl_sk_pane_g2

0x1347,	// (0x00003623) bg_sctrl_sk_pane_g3

0x0008,

0xf846,	// (0x00011b22) bg_sctrl_sk_pane_g

0xe993,	// (0x00010c6f) aid_size_touch_scroll_bar

0x134f,	// (0x0000362b) bg_sctrl_sk_pane_g4

0x1357,	// (0x00003633) bg_sctrl_sk_pane_g5

0x135f,	// (0x0000363b) bg_sctrl_sk_pane_g6

0x1367,	// (0x00003643) bg_sctrl_sk_pane_g7

0x136f,	// (0x0000364b) bg_sctrl_sk_pane_g8

0x1377,	// (0x00003653) bg_sctrl_sk_pane_g9

0x088d,	// (0x00002b69) popup_fep_china_hwr2_fs_candidate_window

0xa8c7,	// (0x0000cba3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa8c7,	// (0x0000cba3) popup_fep_china_hwr2_fs_control_window

0x4753,	// (0x00006a2f) sctrl_sk_top_pane_g2

0x0001,

0xfce8,	// (0x00011fc4) sctrl_sk_top_pane_g

0xce51,	// (0x0000f12d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xce51,	// (0x0000f12d) aid_fep_china_hwr2_fs_cell

0xce65,	// (0x0000f141) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xce65,	// (0x0000f141) bg_popup_fep_shadow_pane_cp4

0xce7c,	// (0x0000f158) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xce7c,	// (0x0000f158) bg_popup_fep_shadow_pane_cp5

0xce8e,	// (0x0000f16a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xce8e,	// (0x0000f16a) popup_fep_china_hwr2_fs_control_bar_grid

0xf1ed,	// (0x000114c9) popup_fep_china_hwr2_fs_control_funtion_grid

0x6237,	// (0x00008513) aid_fep_china_hwr2_fs_candi_cell

0xe486,	// (0x00010762) bg_popup_fep_shadow_pane_cp6

0x6241,	// (0x0000851d) popup_fep_china_hwr2_fs_candidate_grid

0xcea2,	// (0x0000f17e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcea2,	// (0x0000f17e) cell_fep_china_hwr2_fs_funtion_grid

0x42cf,	// (0x000065ab) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6263,	// (0x0000853f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6263,	// (0x0000853f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6271,	// (0x0000854d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6271,	// (0x0000854d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd03,	// (0x00011fdf) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd03,	// (0x00011fdf) cell_fep_china_hwr2_fs_funtion_grid_g

0xceba,	// (0x0000f196) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xceba,	// (0x0000f196) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcecf,	// (0x0000f1ab) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcecf,	// (0x0000f1ab) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd08,	// (0x00011fe4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd08,	// (0x00011fe4) cell_fep_china_hwr2_fs_funtion_grid_t

0x62b8,	// (0x00008594) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x62c0,	// (0x0000859c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x62c8,	// (0x000085a4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0d,	// (0x00011fe9) popup_fep_china_hwr2_fs_control_bar_grid_g

0x62d0,	// (0x000085ac) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x62d0,	// (0x000085ac) cell_fep_china_hwr2_fs_candidate_grid

0x62e9,	// (0x000085c5) popup_fep_china_hwr2_fs_candidate_grid_g20

0x62f1,	// (0x000085cd) popup_fep_china_hwr2_fs_candidate_grid_g21

0x42cf,	// (0x000065ab) cell_fep_china_hwr2_fs_candidate_grid_g1

0x42cf,	// (0x000065ab) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb34,	// (0x00011e10) cell_fep_china_hwr2_fs_candidate_grid_g

0x62f9,	// (0x000085d5) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0e8c,	// (0x00003168) clock_nsta_pane_cp_24_ParamLimits

0x0e8c,	// (0x00003168) clock_nsta_pane_cp_24

0x0f0a,	// (0x000031e6) indicator_nsta_pane_cp_24_ParamLimits

0x0f0a,	// (0x000031e6) indicator_nsta_pane_cp_24

0x235f,	// (0x0000463b) heading_pane_g1

0x0001,

0xf8ab,	// (0x00011b87) heading_pane_g

0x2f4f,	// (0x0000522b) grid_sct_catagory_button_pane

0x2f7f,	// (0x0000525b) scroll_pane_cp5_ParamLimits

0x3e75,	// (0x00006151) button_value_adjust_pane_cp5_ParamLimits

0x3e75,	// (0x00006151) button_value_adjust_pane_cp5

0x3f6f,	// (0x0000624b) form2_midp_time_pane_ParamLimits

0x6307,	// (0x000085e3) cell_sct_catagory_button_pane_ParamLimits

0x6307,	// (0x000085e3) cell_sct_catagory_button_pane

0x4294,	// (0x00006570) bg_button_pane_cp01_ParamLimits

0x4294,	// (0x00006570) bg_button_pane_cp01

0x42cf,	// (0x000065ab) cell_sct_catagory_button_pane_g1

0xaea0,	// (0x0000d17c) popup_tb_extension_window

0xceeb,	// (0x0000f1c7) aid_size_cell_ext_ParamLimits

0xceeb,	// (0x0000f1c7) aid_size_cell_ext

0xe945,	// (0x00010c21) bg_tb_trans_pane_cp1_ParamLimits

0xe945,	// (0x00010c21) bg_tb_trans_pane_cp1

0xcf11,	// (0x0000f1ed) grid_tb_ext_pane_ParamLimits

0xcf11,	// (0x0000f1ed) grid_tb_ext_pane

0xcf50,	// (0x0000f22c) cell_tb_ext_pane_ParamLimits

0xcf50,	// (0x0000f22c) cell_tb_ext_pane

0xcf78,	// (0x0000f254) cell_tb_ext_pane_g1_ParamLimits

0xcf78,	// (0x0000f254) cell_tb_ext_pane_g1

0x639d,	// (0x00008679) cell_tb_ext_pane_t1

0xe7c9,	// (0x00010aa5) list_highlight_pane_cp11_ParamLimits

0xe7c9,	// (0x00010aa5) list_highlight_pane_cp11

0x93e0,	// (0x0000b6bc) popup_uni_indicator_window_ParamLimits

0x93e0,	// (0x0000b6bc) popup_uni_indicator_window

0xeac7,	// (0x00010da3) bg_popup_sub_pane_cp14

0xcf95,	// (0x0000f271) list_uniindi_pane

0xcfa1,	// (0x0000f27d) uniindi_top_pane

0xe7c9,	// (0x00010aa5) bg_uniindi_top_pane

0xcfc0,	// (0x0000f29c) uniindi_top_pane_g1

0xcfd6,	// (0x0000f2b2) uniindi_top_pane_g2

0x0003,

0xfd14,	// (0x00011ff0) uniindi_top_pane_g

0xcff3,	// (0x0000f2cf) uniindi_top_pane_t1

0x644e,	// (0x0000872a) list_single_uniindi_pane_ParamLimits

0x644e,	// (0x0000872a) list_single_uniindi_pane

0x42cf,	// (0x000065ab) bg_uniindi_top_pane_g1

0x6460,	// (0x0000873c) list_single_uniindi_pane_g1

0x6473,	// (0x0000874f) list_single_uniindi_pane_t1

0xe486,	// (0x00010762) control_bg_pane

0x6498,	// (0x00008774) bg_sctrl_sk_pane_cp1

0x64a1,	// (0x0000877d) bg_sctrl_sk_pane_cp2

0x64aa,	// (0x00008786) control_bg_pane_g1

0x64b3,	// (0x0000878f) control_bg_pane_g2

0x0001,

0xfd1d,	// (0x00011ff9) control_bg_pane_g

0x3c83,	// (0x00005f5f) cell_indicator_nsta_pane_g1_ParamLimits

0xc05a,	// (0x0000e336) cell_indicator_nsta_pane_g2_ParamLimits

0xfa98,	// (0x00011d74) cell_indicator_nsta_pane_g_ParamLimits

0x3ff7,	// (0x000062d3) form2_midp_time_pane_t1_ParamLimits

0x432b,	// (0x00006607) main_idle_act4_pane_ParamLimits

0x432b,	// (0x00006607) main_idle_act4_pane

0xaea0,	// (0x0000d17c) popup_tb_extension_window_ParamLimits

0xcf36,	// (0x0000f212) tb_ext_find_pane_ParamLimits

0xcf36,	// (0x0000f212) tb_ext_find_pane

0x64bc,	// (0x00008798) ai_gene_pane_1_cp1

0x03b1,	// (0x0000268d) ai_gene_pane_2_cp1

0xd01d,	// (0x0000f2f9) list_single_idle_plugin_calendar_pane

0x64cd,	// (0x000087a9) list_single_idle_plugin_notification_pane

0x64d6,	// (0x000087b2) list_single_idle_plugin_player_pane

0xd026,	// (0x0000f302) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd026,	// (0x0000f302) list_single_idle_plugin_shortcut_pane

0xd04e,	// (0x0000f32a) main_idle_act4_pane_t1

0xd065,	// (0x0000f341) main_idle_act4_pane_t2

0x0001,

0xfd22,	// (0x00011ffe) main_idle_act4_pane_t

0xd07c,	// (0x0000f358) middle_sk_idle_act4_pane_ParamLimits

0xd07c,	// (0x0000f358) middle_sk_idle_act4_pane

0xd098,	// (0x0000f374) popup_clock_digital_analogue_window_cp2

0xd0c4,	// (0x0000f3a0) shortcut_wheel_idle_act4_pane_ParamLimits

0xd0c4,	// (0x0000f3a0) shortcut_wheel_idle_act4_pane

0x42cf,	// (0x000065ab) shortcut_wheel_idle_act4_pane_g1

0x42cf,	// (0x000065ab) shortcut_wheel_idle_act4_pane_g2

0x42cf,	// (0x000065ab) shortcut_wheel_idle_act4_pane_g3

0x42cf,	// (0x000065ab) shortcut_wheel_idle_act4_pane_g4

0x42cf,	// (0x000065ab) shortcut_wheel_idle_act4_pane_g5

0x6569,	// (0x00008845) shortcut_wheel_idle_act4_pane_g6

0x6571,	// (0x0000884d) shortcut_wheel_idle_act4_pane_g7

0x6579,	// (0x00008855) shortcut_wheel_idle_act4_pane_g8

0x6581,	// (0x0000885d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd27,	// (0x00012003) shortcut_wheel_idle_act4_pane_g

0x43e0,	// (0x000066bc) middle_sk_idle_act4_pane_g1_ParamLimits

0x43e0,	// (0x000066bc) middle_sk_idle_act4_pane_g1

0xd141,	// (0x0000f41d) middle_sk_idle_act4_pane_g2_ParamLimits

0xd141,	// (0x0000f41d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4a,	// (0x00012026) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4a,	// (0x00012026) middle_sk_idle_act4_pane_g

0xd159,	// (0x0000f435) middle_sk_idle_act4_pane_t1_ParamLimits

0xd159,	// (0x0000f435) middle_sk_idle_act4_pane_t1

0xd188,	// (0x0000f464) grid_ai_shortcut_pane_ParamLimits

0xd188,	// (0x0000f464) grid_ai_shortcut_pane

0xd1a5,	// (0x0000f481) list_highlight_pane_cp16_ParamLimits

0xd1a5,	// (0x0000f481) list_highlight_pane_cp16

0xd1b2,	// (0x0000f48e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd1b2,	// (0x0000f48e) list_single_idle_plugin_shortcut_pane_g1

0xd1be,	// (0x0000f49a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd1be,	// (0x0000f49a) list_single_idle_plugin_shortcut_pane_g2

0xd1da,	// (0x0000f4b6) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd1da,	// (0x0000f4b6) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4f,	// (0x0001202b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4f,	// (0x0001202b) list_single_idle_plugin_shortcut_pane_g

0xd1ef,	// (0x0000f4cb) cell_ai_shortcut_pane_ParamLimits

0xd1ef,	// (0x0000f4cb) cell_ai_shortcut_pane

0xd205,	// (0x0000f4e1) cell_ai_shortcut_pane_g1_ParamLimits

0xd205,	// (0x0000f4e1) cell_ai_shortcut_pane_g1

0x64bc,	// (0x00008798) ai_gene_pane_1_cp2

0x66b1,	// (0x0000898d) ai_gene_pane_2_cp2

0x66b9,	// (0x00008995) list_highlight_pane_cp15

0xd227,	// (0x0000f503) list_single_idle_plugin_calendar_pane_g1

0x66b9,	// (0x00008995) list_highlight_pane_cp17

0x66ca,	// (0x000089a6) list_single_idle_plugin_calendar_pane_g1_copy1

0x66d2,	// (0x000089ae) list_single_idle_plugin_player_pane_g1

0x3260,	// (0x0000553c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd56,	// (0x00012032) list_single_idle_plugin_player_pane_g

0x66da,	// (0x000089b6) list_single_idle_plugin_player_pane_t1

0x66e8,	// (0x000089c4) list_single_idle_plugin_player_pane_t2

0x66f6,	// (0x000089d2) list_single_idle_plugin_player_pane_t3

0x6704,	// (0x000089e0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5b,	// (0x00012037) list_single_idle_plugin_player_pane_t

0x6712,	// (0x000089ee) wait_bar_pane_cp15

0x671a,	// (0x000089f6) grid_ai_notification_pane

0x3260,	// (0x0000553c) list_single_idle_plugin_notification_pane_g1

0xd22f,	// (0x0000f50b) cell_ai_notification_pane_ParamLimits

0xd22f,	// (0x0000f50b) cell_ai_notification_pane

0x6730,	// (0x00008a0c) cell_ai_notification_pane_g1

0x6738,	// (0x00008a14) cell_ai_notification_pane_t1

0xd23c,	// (0x0000f518) tb_ext_find_button_pane

0xd244,	// (0x0000f520) tb_ext_find_pane_g1

0xd24c,	// (0x0000f528) tb_ext_find_pane_t1

0xf11b,	// (0x000113f7) tb_ext_find_button_pane_g1

0xd25a,	// (0x0000f536) tb_ext_find_button_pane_g2

0x0001,

0xfd64,	// (0x00012040) tb_ext_find_button_pane_g

0xd04e,	// (0x0000f32a) main_idle_act4_pane_t1_ParamLimits

0xd065,	// (0x0000f341) main_idle_act4_pane_t2_ParamLimits

0xfd22,	// (0x00011ffe) main_idle_act4_pane_t_ParamLimits

0xd098,	// (0x0000f374) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd0b0,	// (0x0000f38c) sat_plugin_idle_act4_pane_ParamLimits

0xd0b0,	// (0x0000f38c) sat_plugin_idle_act4_pane

0xd263,	// (0x0000f53f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd263,	// (0x0000f53f) sat_plugin_idle_act4_pane_t1

0xd27b,	// (0x0000f557) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd27b,	// (0x0000f557) sat_plugin_idle_act4_pane_t2

0xd293,	// (0x0000f56f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd293,	// (0x0000f56f) sat_plugin_idle_act4_pane_t3

0xd2ab,	// (0x0000f587) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd2ab,	// (0x0000f587) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd69,	// (0x00012045) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd69,	// (0x00012045) sat_plugin_idle_act4_pane_t

0x935b,	// (0x0000b637) popup_battery_window_ParamLimits

0x935b,	// (0x0000b637) popup_battery_window

0xe7c9,	// (0x00010aa5) bg_popup_sub_pane_cp25_ParamLimits

0xe7c9,	// (0x00010aa5) bg_popup_sub_pane_cp25

0x67b9,	// (0x00008a95) popup_battery_window_g1_ParamLimits

0x67b9,	// (0x00008a95) popup_battery_window_g1

0x67c5,	// (0x00008aa1) popup_battery_window_t1_ParamLimits

0x67c5,	// (0x00008aa1) popup_battery_window_t1

0x67d7,	// (0x00008ab3) popup_battery_window_t2_ParamLimits

0x67d7,	// (0x00008ab3) popup_battery_window_t2

0x0001,

0xfd72,	// (0x0001204e) popup_battery_window_t_ParamLimits

0xfd72,	// (0x0001204e) popup_battery_window_t

0xa501,	// (0x0000c7dd) midp_canvas_pane_ParamLimits

0xa573,	// (0x0000c84f) midp_keypad_pane_ParamLimits

0xa573,	// (0x0000c84f) midp_keypad_pane

0x07ad,	// (0x00002a89) main_midp_pane_ParamLimits

0xc067,	// (0x0000e343) signal_pane_g2_cp_ParamLimits

0xd2c3,	// (0x0000f59f) aid_size_cell_midp_keypad_ParamLimits

0xd2c3,	// (0x0000f59f) aid_size_cell_midp_keypad

0xd2e1,	// (0x0000f5bd) midp_keyp_game_grid_pane_ParamLimits

0xd2e1,	// (0x0000f5bd) midp_keyp_game_grid_pane

0xd308,	// (0x0000f5e4) midp_keyp_rocker_pane_ParamLimits

0xd308,	// (0x0000f5e4) midp_keyp_rocker_pane

0xd359,	// (0x0000f635) midp_keyp_sk_left_pane_ParamLimits

0xd359,	// (0x0000f635) midp_keyp_sk_left_pane

0xd3ad,	// (0x0000f689) midp_keyp_sk_right_pane_ParamLimits

0xd3ad,	// (0x0000f689) midp_keyp_sk_right_pane

0xe486,	// (0x00010762) bg_button_pane_cp03

0xd401,	// (0x0000f6dd) midp_keyp_sk_left_pane_g1

0xe486,	// (0x00010762) bg_button_pane_cp04

0xd401,	// (0x0000f6dd) midp_keyp_sk_right_pane_g1

0x42cf,	// (0x000065ab) midp_keyp_rocker_pane_g1

0xd40a,	// (0x0000f6e6) keyp_game_cell_pane_ParamLimits

0xd40a,	// (0x0000f6e6) keyp_game_cell_pane

0xe486,	// (0x00010762) bg_button_pane_cp02

0xd42e,	// (0x0000f70a) keyp_game_cell_pane_g1

0x937b,	// (0x0000b657) popup_fep_vkb2_window_ParamLimits

0x937b,	// (0x0000b657) popup_fep_vkb2_window

0xd437,	// (0x0000f713) aid_size_cell_vkb2_ParamLimits

0xd437,	// (0x0000f713) aid_size_cell_vkb2

0xd475,	// (0x0000f751) popup_fep_vkb2_window_g1_ParamLimits

0xd475,	// (0x0000f751) popup_fep_vkb2_window_g1

0xd4c5,	// (0x0000f7a1) vkb2_area_bottom_pane_ParamLimits

0xd4c5,	// (0x0000f7a1) vkb2_area_bottom_pane

0xd519,	// (0x0000f7f5) vkb2_area_keypad_pane_ParamLimits

0xd519,	// (0x0000f7f5) vkb2_area_keypad_pane

0xd561,	// (0x0000f83d) vkb2_area_top_pane_ParamLimits

0xd561,	// (0x0000f83d) vkb2_area_top_pane

0xd5e7,	// (0x0000f8c3) vkb2_top_entry_pane_ParamLimits

0xd5e7,	// (0x0000f8c3) vkb2_top_entry_pane

0xd614,	// (0x0000f8f0) vkb2_top_grid_left_pane_ParamLimits

0xd614,	// (0x0000f8f0) vkb2_top_grid_left_pane

0xd634,	// (0x0000f910) vkb2_top_grid_right_pane_ParamLimits

0xd634,	// (0x0000f910) vkb2_top_grid_right_pane

0x6b58,	// (0x00008e34) vkb2_cell_keypad_pane_ParamLimits

0x6b58,	// (0x00008e34) vkb2_cell_keypad_pane

0xd67a,	// (0x0000f956) vkb2_area_bottom_grid_pane_ParamLimits

0xd67a,	// (0x0000f956) vkb2_area_bottom_grid_pane

0xd6a4,	// (0x0000f980) vkb2_area_bottom_pane_g1_ParamLimits

0xd6a4,	// (0x0000f980) vkb2_area_bottom_pane_g1

0xd6ca,	// (0x0000f9a6) vkb2_area_bottom_pane_g2_ParamLimits

0xd6ca,	// (0x0000f9a6) vkb2_area_bottom_pane_g2

0xd6fb,	// (0x0000f9d7) vkb2_area_bottom_pane_g3_ParamLimits

0xd6fb,	// (0x0000f9d7) vkb2_area_bottom_pane_g3

0x0002,

0xfd77,	// (0x00012053) vkb2_area_bottom_pane_g_ParamLimits

0xfd77,	// (0x00012053) vkb2_area_bottom_pane_g

0x6d02,	// (0x00008fde) vkb2_top_cell_left_pane_ParamLimits

0x6d02,	// (0x00008fde) vkb2_top_cell_left_pane

0xd765,	// (0x0000fa41) vkb2_top_entry_pane_g1_ParamLimits

0xd765,	// (0x0000fa41) vkb2_top_entry_pane_g1

0xd773,	// (0x0000fa4f) vkb2_top_entry_pane_t1_ParamLimits

0xd773,	// (0x0000fa4f) vkb2_top_entry_pane_t1

0x6d6a,	// (0x00009046) vkb2_top_entry_pane_t2_ParamLimits

0x6d6a,	// (0x00009046) vkb2_top_entry_pane_t2

0x6d9c,	// (0x00009078) vkb2_top_entry_pane_t3_ParamLimits

0x6d9c,	// (0x00009078) vkb2_top_entry_pane_t3

0x0002,

0xfd7e,	// (0x0001205a) vkb2_top_entry_pane_t_ParamLimits

0xfd7e,	// (0x0001205a) vkb2_top_entry_pane_t

0xd7ac,	// (0x0000fa88) vkb2_top_grid_right_pane_g1_ParamLimits

0xd7ac,	// (0x0000fa88) vkb2_top_grid_right_pane_g1

0x6e03,	// (0x000090df) vkb2_top_grid_right_pane_g2_ParamLimits

0x6e03,	// (0x000090df) vkb2_top_grid_right_pane_g2

0x6e1b,	// (0x000090f7) vkb2_top_grid_right_pane_g3_ParamLimits

0x6e1b,	// (0x000090f7) vkb2_top_grid_right_pane_g3

0xd7c2,	// (0x0000fa9e) vkb2_top_grid_right_pane_g4_ParamLimits

0xd7c2,	// (0x0000fa9e) vkb2_top_grid_right_pane_g4

0x0003,

0xfd85,	// (0x00012061) vkb2_top_grid_right_pane_g_ParamLimits

0xfd85,	// (0x00012061) vkb2_top_grid_right_pane_g

0x6e49,	// (0x00009125) vkb2_top_cell_left_pane_g1

0x6e60,	// (0x0000913c) vkb2_cell_keypad_pane_g1_ParamLimits

0x6e60,	// (0x0000913c) vkb2_cell_keypad_pane_g1

0x6e6e,	// (0x0000914a) vkb2_cell_keypad_pane_t1_ParamLimits

0x6e6e,	// (0x0000914a) vkb2_cell_keypad_pane_t1

0x6e85,	// (0x00009161) vkb2_cell_bottom_grid_pane_ParamLimits

0x6e85,	// (0x00009161) vkb2_cell_bottom_grid_pane

0x6ebe,	// (0x0000919a) vkb2_cell_bottom_grid_pane_g1

0xd0e5,	// (0x0000f3c1) aid_call2_pane_cp02

0xd0ed,	// (0x0000f3c9) aid_call_pane_cp02

0xd0f5,	// (0x0000f3d1) clock_digital_number_pane_cp10

0xd0fd,	// (0x0000f3d9) clock_digital_number_pane_cp11

0xd105,	// (0x0000f3e1) clock_digital_number_pane_cp12

0xd10d,	// (0x0000f3e9) clock_digital_number_pane_cp13

0xd115,	// (0x0000f3f1) clock_digital_separator_pane_cp10

0xf11b,	// (0x000113f7) popup_clock_digital_analogue_window_cp2_g1

0xf11b,	// (0x000113f7) popup_clock_digital_analogue_window_cp2_g2

0xd11d,	// (0x0000f3f9) popup_clock_digital_analogue_window_cp2_g3

0xf11b,	// (0x000113f7) popup_clock_digital_analogue_window_cp2_g4

0xd11d,	// (0x0000f3f9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3a,	// (0x00012016) popup_clock_digital_analogue_window_cp2_g

0xd125,	// (0x0000f401) popup_clock_digital_analogue_window_cp2_t1

0xd133,	// (0x0000f40f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd45,	// (0x00012021) popup_clock_digital_analogue_window_cp2_t

0x42cf,	// (0x000065ab) clock_digital_number_pane_cp10_g1

0x42cf,	// (0x000065ab) clock_digital_number_pane_cp10_g2

0x0001,

0xfb34,	// (0x00011e10) clock_digital_number_pane_cp10_g

0x42cf,	// (0x000065ab) clock_digital_separator_pane_cp10_g1

0x42cf,	// (0x000065ab) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb34,	// (0x00011e10) clock_digital_separator_pane_cp10_g

0xcfe2,	// (0x0000f2be) uniindi_top_pane_g3

0x6417,	// (0x000086f3) uniindi_top_pane_g4

0x6be3,	// (0x00008ebf) vkb2_row_keypad_pane_ParamLimits

0x6be3,	// (0x00008ebf) vkb2_row_keypad_pane

0x6eda,	// (0x000091b6) vkb2_cell_t_keypad_pane_ParamLimits

0x6eda,	// (0x000091b6) vkb2_cell_t_keypad_pane

0x6eea,	// (0x000091c6) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6eea,	// (0x000091c6) vkb2_cell_t_keypad_pane_cp08

0x6efd,	// (0x000091d9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6efd,	// (0x000091d9) vkb2_cell_t_keypad_pane_cp09

0x6f11,	// (0x000091ed) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6f11,	// (0x000091ed) vkb2_cell_t_keypad_pane_cp01

0x6f22,	// (0x000091fe) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6f22,	// (0x000091fe) vkb2_cell_t_keypad_pane_cp02

0x6f33,	// (0x0000920f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6f33,	// (0x0000920f) vkb2_cell_t_keypad_pane_cp03

0x6f44,	// (0x00009220) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6f44,	// (0x00009220) vkb2_cell_t_keypad_pane_cp04

0x6f55,	// (0x00009231) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6f55,	// (0x00009231) vkb2_cell_t_keypad_pane_cp05

0x6f66,	// (0x00009242) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6f66,	// (0x00009242) vkb2_cell_t_keypad_pane_cp06

0x6f77,	// (0x00009253) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6f77,	// (0x00009253) vkb2_cell_t_keypad_pane_cp07

0x6f88,	// (0x00009264) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6f88,	// (0x00009264) vkb2_cell_t_keypad_pane_cp10

0x4753,	// (0x00006a2f) vkb2_cell_t_keypad_pane_g1

0x6f9d,	// (0x00009279) vkb2_cell_t_keypad_pane_t1

0xe486,	// (0x00010762) popup_grid_graphic2_window

0xd7d8,	// (0x0000fab4) aid_size_cell_graphic2_ParamLimits

0xd7d8,	// (0x0000fab4) aid_size_cell_graphic2

0xd816,	// (0x0000faf2) bg_popup_window_pane_cp21_ParamLimits

0xd816,	// (0x0000faf2) bg_popup_window_pane_cp21

0xd824,	// (0x0000fb00) graphic2_pages_pane_ParamLimits

0xd824,	// (0x0000fb00) graphic2_pages_pane

0xd87a,	// (0x0000fb56) grid_graphic2_control_pane_ParamLimits

0xd87a,	// (0x0000fb56) grid_graphic2_control_pane

0xd8c2,	// (0x0000fb9e) grid_graphic2_pane_ParamLimits

0xd8c2,	// (0x0000fb9e) grid_graphic2_pane

0xd949,	// (0x0000fc25) cell_graphic2_pane

0xe486,	// (0x00010762) main_comp_mode_pane

0x5b45,	// (0x00007e21) list_ai3_gene_pane_ParamLimits

0xcd2e,	// (0x0000f00a) bg_popup_window_pane_cp19_ParamLimits

0x5f80,	// (0x0000825c) bg_touch_area_indi_pane_ParamLimits

0x5f80,	// (0x0000825c) bg_touch_area_indi_pane

0x5f96,	// (0x00008272) bg_touch_area_indi_pane_cp01_ParamLimits

0x5f96,	// (0x00008272) bg_touch_area_indi_pane_cp01

0x5fac,	// (0x00008288) bg_touch_area_indi_pane_cp02_ParamLimits

0x5fac,	// (0x00008288) bg_touch_area_indi_pane_cp02

0x5fc2,	// (0x0000829e) bg_touch_area_indi_pane_cp03_ParamLimits

0x5fc2,	// (0x0000829e) bg_touch_area_indi_pane_cp03

0x5fdc,	// (0x000082b8) popup_slider_window_g1_ParamLimits

0x5ff8,	// (0x000082d4) popup_slider_window_g2_ParamLimits

0x6014,	// (0x000082f0) popup_slider_window_g3_ParamLimits

0xfccf,	// (0x00011fab) popup_slider_window_g_ParamLimits

0x607a,	// (0x00008356) popup_slider_window_t1_ParamLimits

0x60ee,	// (0x000083ca) small_volume_slider_vertical_pane_ParamLimits

0xd949,	// (0x0000fc25) cell_graphic2_pane_ParamLimits

0xd9a4,	// (0x0000fc80) bg_button_pane_cp10_ParamLimits

0xd9a4,	// (0x0000fc80) bg_button_pane_cp10

0xd9b7,	// (0x0000fc93) bg_button_pane_cp11_ParamLimits

0xd9b7,	// (0x0000fc93) bg_button_pane_cp11

0xd9ca,	// (0x0000fca6) graphic2_pages_pane_g1_ParamLimits

0xd9ca,	// (0x0000fca6) graphic2_pages_pane_g1

0xd9e5,	// (0x0000fcc1) graphic2_pages_pane_g2_ParamLimits

0xd9e5,	// (0x0000fcc1) graphic2_pages_pane_g2

0x0001,

0xfd93,	// (0x0001206f) graphic2_pages_pane_g_ParamLimits

0xfd93,	// (0x0001206f) graphic2_pages_pane_g

0xd9fd,	// (0x0000fcd9) graphic2_pages_pane_t1_ParamLimits

0xd9fd,	// (0x0000fcd9) graphic2_pages_pane_t1

0xda15,	// (0x0000fcf1) cell_graphic2_control_pane_ParamLimits

0xda15,	// (0x0000fcf1) cell_graphic2_control_pane

0xda47,	// (0x0000fd23) cell_graphic2_pane_g1_ParamLimits

0xda47,	// (0x0000fd23) cell_graphic2_pane_g1

0x457b,	// (0x00006857) cell_graphic2_pane_g2_ParamLimits

0x457b,	// (0x00006857) cell_graphic2_pane_g2

0xda54,	// (0x0000fd30) cell_graphic2_pane_g3_ParamLimits

0xda54,	// (0x0000fd30) cell_graphic2_pane_g3

0x4588,	// (0x00006864) cell_graphic2_pane_g4_ParamLimits

0x4588,	// (0x00006864) cell_graphic2_pane_g4

0xda61,	// (0x0000fd3d) cell_graphic2_pane_g5_ParamLimits

0xda61,	// (0x0000fd3d) cell_graphic2_pane_g5

0x0004,

0xfd98,	// (0x00012074) cell_graphic2_pane_g_ParamLimits

0xfd98,	// (0x00012074) cell_graphic2_pane_g

0xda81,	// (0x0000fd5d) cell_graphic2_pane_t1_ParamLimits

0xda81,	// (0x0000fd5d) cell_graphic2_pane_t1

0x2353,	// (0x0000462f) grid_highlight_pane_cp11_ParamLimits

0x2353,	// (0x0000462f) grid_highlight_pane_cp11

0xe7c9,	// (0x00010aa5) bg_button_pane_cp05

0xdacd,	// (0x0000fda9) cell_graphic2_control_pane_g1

0x42cf,	// (0x000065ab) bg_touch_area_indi_pane_g1

0x7279,	// (0x00009555) aid_cmod_rocker_key_size

0x7283,	// (0x0000955f) aid_cmode_itu_key_size

0x728d,	// (0x00009569) main_cmode_video_pane

0x7297,	// (0x00009573) main_comp_mode_itu_pane

0x72a3,	// (0x0000957f) main_comp_mode_rocker_pane

0x72af,	// (0x0000958b) cell_cmode_rocker_pane_ParamLimits

0x72af,	// (0x0000958b) cell_cmode_rocker_pane

0x72c1,	// (0x0000959d) cell_cmode_itu_pane_ParamLimits

0x72c1,	// (0x0000959d) cell_cmode_itu_pane

0xeac7,	// (0x00010da3) bg_button_pane_cp06_ParamLimits

0xeac7,	// (0x00010da3) bg_button_pane_cp06

0x4753,	// (0x00006a2f) cell_cmode_rocker_pane_g1_ParamLimits

0x4753,	// (0x00006a2f) cell_cmode_rocker_pane_g1

0x6263,	// (0x0000853f) cell_cmode_rocker_pane_g2_ParamLimits

0x6263,	// (0x0000853f) cell_cmode_rocker_pane_g2

0x0001,

0xfda8,	// (0x00012084) cell_cmode_rocker_pane_g_ParamLimits

0xfda8,	// (0x00012084) cell_cmode_rocker_pane_g

0xe486,	// (0x00010762) bg_button_pane_cp07

0x72d6,	// (0x000095b2) cell_cmode_itu_pane_g1

0x72df,	// (0x000095bb) cell_cmode_itu_pane_t1

0x72ed,	// (0x000095c9) cell_cmode_itu_pane_t2

0x0001,

0xfdad,	// (0x00012089) cell_cmode_itu_pane_t

0x6488,	// (0x00008764) aid_touch_ctrl_left

0x6490,	// (0x0000876c) aid_touch_ctrl_right

0xe486,	// (0x00010762) compa_mode_pane

0xdaf3,	// (0x0000fdcf) aid_cmod_rocker_key_size_cp

0xdafd,	// (0x0000fdd9) aid_cmode_itu_key_size_cp

0x730f,	// (0x000095eb) compa_mode_pane_g1

0x7317,	// (0x000095f3) compa_mode_pane_g2

0x731f,	// (0x000095fb) compa_mode_pane_g3

0x0002,

0xfdb2,	// (0x0001208e) compa_mode_pane_g

0xdb07,	// (0x0000fde3) main_comp_mode_itu_pane_cp

0xdb0f,	// (0x0000fdeb) main_comp_mode_rocker_pane_cp

0xdb17,	// (0x0000fdf3) cell_cmode_itu_pane_cp_ParamLimits

0xdb17,	// (0x0000fdf3) cell_cmode_itu_pane_cp

0xdb2c,	// (0x0000fe08) cell_cmode_rocker_pane_cp_ParamLimits

0xdb2c,	// (0x0000fe08) cell_cmode_rocker_pane_cp

0xeac7,	// (0x00010da3) bg_button_pane_cp06_cp_ParamLimits

0xeac7,	// (0x00010da3) bg_button_pane_cp06_cp

0x4753,	// (0x00006a2f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4753,	// (0x00006a2f) cell_cmode_rocker_pane_g1_cp

0x42cf,	// (0x000065ab) cell_cmode_rocker_pane_g2_cp

0xe486,	// (0x00010762) bg_button_pane_cp07_cp

0xdb3e,	// (0x0000fe1a) cell_cmode_itu_pane_g1_cp

0xdb47,	// (0x0000fe23) cell_cmode_itu_pane_t1_cp

0xdb47,	// (0x0000fe23) cell_cmode_itu_pane_t2_cp

0xbd56,	// (0x0000e032) settings_code_pane_cp2

0xe685,	// (0x00010961) bg_popup_window_pane_cp3_ParamLimits

0xe8e2,	// (0x00010bbe) heading_pane_cp3_ParamLimits

0xe8ee,	// (0x00010bca) listscroll_popup_graphic_pane_ParamLimits

0x4339,	// (0x00006615) fep_hwr_aid_pane_ParamLimits

0x6169,	// (0x00008445) aid_touch_sctrl_top_ParamLimits

0x6176,	// (0x00008452) sctrl_sk_top_pane_g1_ParamLimits

0x4753,	// (0x00006a2f) sctrl_sk_top_pane_g2_ParamLimits

0xfce8,	// (0x00011fc4) sctrl_sk_top_pane_g_ParamLimits

0x6183,	// (0x0000845f) sctrl_sk_top_pane_t1_ParamLimits

0x6169,	// (0x00008445) aid_touch_sctrl_bottom_ParamLimits

0x6183,	// (0x0000845f) sctrl_sk_bottom_pane_t1_ParamLimits

0xcfae,	// (0x0000f28a) aid_area_touch_clock

0xd5a9,	// (0x0000f885) aid_vkb2_area_top_pane_cell_ParamLimits

0xd5a9,	// (0x0000f885) aid_vkb2_area_top_pane_cell

0xd654,	// (0x0000f930) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd654,	// (0x0000f930) aid_vkb2_area_bottom_pane_cell

0x6d22,	// (0x00008ffe) popup_char_count_window

0x7375,	// (0x00009651) popup_char_count_window_g1

0x737e,	// (0x0000965a) popup_char_count_window_g2

0x7387,	// (0x00009663) popup_char_count_window_g3

0x0002,

0xfdb9,	// (0x00012095) popup_char_count_window_g

0x7390,	// (0x0000966c) popup_char_count_window_t1

0x6980,	// (0x00008c5c) popup_fep_char_preview_window_ParamLimits

0x6980,	// (0x00008c5c) popup_fep_char_preview_window

0xd5c9,	// (0x0000f8a5) vkb2_top_candi_pane_ParamLimits

0xd5c9,	// (0x0000f8a5) vkb2_top_candi_pane

0xdb55,	// (0x0000fe31) cell_vkb2_top_candi_pane_ParamLimits

0xdb55,	// (0x0000fe31) cell_vkb2_top_candi_pane

0x1b9e,	// (0x00003e7a) bg_popup_fep_char_preview_window_ParamLimits

0x1b9e,	// (0x00003e7a) bg_popup_fep_char_preview_window

0x73eb,	// (0x000096c7) popup_fep_char_preview_window_t1_ParamLimits

0x73eb,	// (0x000096c7) popup_fep_char_preview_window_t1

0x7425,	// (0x00009701) bg_popup_fep_char_preview_window_g1

0x742d,	// (0x00009709) bg_popup_fep_char_preview_window_g2

0x7435,	// (0x00009711) bg_popup_fep_char_preview_window_g3

0x743d,	// (0x00009719) bg_popup_fep_char_preview_window_g4

0x7445,	// (0x00009721) bg_popup_fep_char_preview_window_g5

0x744d,	// (0x00009729) bg_popup_fep_char_preview_window_g6

0x7455,	// (0x00009731) bg_popup_fep_char_preview_window_g7

0x745d,	// (0x00009739) bg_popup_fep_char_preview_window_g8

0x7465,	// (0x00009741) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc0,	// (0x0001209c) bg_popup_fep_char_preview_window_g

0x4753,	// (0x00006a2f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4753,	// (0x00006a2f) cell_vkb2_top_candi_pane_g1

0x4abe,	// (0x00006d9a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4abe,	// (0x00006d9a) cell_vkb2_top_candi_pane_g2

0x4adf,	// (0x00006dbb) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4adf,	// (0x00006dbb) cell_vkb2_top_candi_pane_g3

0x746d,	// (0x00009749) cell_vkb2_top_candi_pane_g4_ParamLimits

0x746d,	// (0x00009749) cell_vkb2_top_candi_pane_g4

0x748e,	// (0x0000976a) cell_vkb2_top_candi_pane_g5_ParamLimits

0x748e,	// (0x0000976a) cell_vkb2_top_candi_pane_g5

0x6263,	// (0x0000853f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6263,	// (0x0000853f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd3,	// (0x000120af) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd3,	// (0x000120af) cell_vkb2_top_candi_pane_g

0x74af,	// (0x0000978b) cell_vkb2_top_candi_pane_t1

0xbb76,	// (0x0000de52) aid_size_touch_slider_mark_ParamLimits

0xbb76,	// (0x0000de52) aid_size_touch_slider_mark

0xd860,	// (0x0000fb3c) grid_graphic2_catg_pane_ParamLimits

0xd860,	// (0x0000fb3c) grid_graphic2_catg_pane

0xd91c,	// (0x0000fbf8) popup_grid_graphic2_window_t1_ParamLimits

0xd91c,	// (0x0000fbf8) popup_grid_graphic2_window_t1

0xd932,	// (0x0000fc0e) popup_grid_graphic2_window_t2_ParamLimits

0xd932,	// (0x0000fc0e) popup_grid_graphic2_window_t2

0x0001,

0xfd8e,	// (0x0001206a) popup_grid_graphic2_window_t_ParamLimits

0xfd8e,	// (0x0001206a) popup_grid_graphic2_window_t

0xe7c9,	// (0x00010aa5) bg_button_pane_cp05_ParamLimits

0xdacd,	// (0x0000fda9) cell_graphic2_control_pane_g1_ParamLimits

0xdbbb,	// (0x0000fe97) cell_graphic2_catg_pane_ParamLimits

0xdbbb,	// (0x0000fe97) cell_graphic2_catg_pane

0xe486,	// (0x00010762) bg_button_pane_cp12

0xdbcd,	// (0x0000fea9) cell_graphic2_catg_pane_g1

0x639d,	// (0x00008679) cell_tb_ext_pane_t1_ParamLimits

0x6dc0,	// (0x0000909c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6dc0,	// (0x0000909c) vkb2_top_cell_right_narrow_pane

0x6dd8,	// (0x000090b4) vkb2_top_cell_right_wide_pane_ParamLimits

0x6dd8,	// (0x000090b4) vkb2_top_cell_right_wide_pane

0x432b,	// (0x00006607) bg_vkb2_func_pane_ParamLimits

0x432b,	// (0x00006607) bg_vkb2_func_pane

0x6e49,	// (0x00009125) vkb2_top_cell_left_pane_g1_ParamLimits

0x432b,	// (0x00006607) bg_vkb2_fuc_pane_cp03_ParamLimits

0x432b,	// (0x00006607) bg_vkb2_fuc_pane_cp03

0x6ebe,	// (0x0000919a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x133f,	// (0x0000361b) bg_vkb2_func_pane_g1

0x1347,	// (0x00003623) bg_vkb2_func_pane_g2

0x1357,	// (0x00003633) bg_vkb2_func_pane_g3

0x134f,	// (0x0000362b) bg_vkb2_func_pane_g4

0x135f,	// (0x0000363b) bg_vkb2_func_pane_g5

0x1367,	// (0x00003643) bg_vkb2_func_pane_g6

0x136f,	// (0x0000364b) bg_vkb2_func_pane_g7

0x1377,	// (0x00003653) bg_vkb2_func_pane_g8

0x1337,	// (0x00003613) bg_vkb2_func_pane_g9

0x0008,

0xfde0,	// (0x000120bc) bg_vkb2_func_pane_g

0x432b,	// (0x00006607) bg_vkb2_fuc_pane_cp01_ParamLimits

0x432b,	// (0x00006607) bg_vkb2_fuc_pane_cp01

0x6e49,	// (0x00009125) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6e49,	// (0x00009125) vkb2_top_cell_right_wide_pane_g1

0x432b,	// (0x00006607) bg_vkb2_fuc_pane_cp02_ParamLimits

0x432b,	// (0x00006607) bg_vkb2_fuc_pane_cp02

0x6ebe,	// (0x0000919a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6ebe,	// (0x0000919a) vkb2_top_cell_right_narrow_pane_g1

0xcc70,	// (0x0000ef4c) aid_touch_area_decrease_ParamLimits

0xcc70,	// (0x0000ef4c) aid_touch_area_decrease

0xccaa,	// (0x0000ef86) aid_touch_area_increase_ParamLimits

0xccaa,	// (0x0000ef86) aid_touch_area_increase

0xccd2,	// (0x0000efae) aid_touch_area_mute_ParamLimits

0xccd2,	// (0x0000efae) aid_touch_area_mute

0xccfa,	// (0x0000efd6) aid_touch_area_slider_ParamLimits

0xccfa,	// (0x0000efd6) aid_touch_area_slider

0xcd3a,	// (0x0000f016) popup_slider_window_g4_ParamLimits

0xcd3a,	// (0x0000f016) popup_slider_window_g4

0xcd62,	// (0x0000f03e) popup_slider_window_g5_ParamLimits

0xcd62,	// (0x0000f03e) popup_slider_window_g5

0xcd96,	// (0x0000f072) popup_slider_window_g6_ParamLimits

0xcd96,	// (0x0000f072) popup_slider_window_g6

0x60a8,	// (0x00008384) popup_slider_window_t2_ParamLimits

0x60a8,	// (0x00008384) popup_slider_window_t2

0x0001,

0xfcdc,	// (0x00011fb8) popup_slider_window_t_ParamLimits

0xfcdc,	// (0x00011fb8) popup_slider_window_t

0xcdb2,	// (0x0000f08e) slider_pane_ParamLimits

0xcdb2,	// (0x0000f08e) slider_pane

0x74e9,	// (0x000097c5) slider_pane_g1_ParamLimits

0x74e9,	// (0x000097c5) slider_pane_g1

0x74fd,	// (0x000097d9) slider_pane_g2_ParamLimits

0x74fd,	// (0x000097d9) slider_pane_g2

0x7513,	// (0x000097ef) slider_pane_g3_ParamLimits

0x7513,	// (0x000097ef) slider_pane_g3

0x0003,

0xfdf3,	// (0x000120cf) slider_pane_g_ParamLimits

0xfdf3,	// (0x000120cf) slider_pane_g

0xaee8,	// (0x0000d1c4) popup_tb_float_extension_window_ParamLimits

0xaee8,	// (0x0000d1c4) popup_tb_float_extension_window

0x753f,	// (0x0000981b) aid_size_cell_tb_float_ext

0xe486,	// (0x00010762) bg_popup_sub_window_cp28

0xdbd6,	// (0x0000feb2) grid_tb_float_ext_pane

0xdbe0,	// (0x0000febc) cell_tb_float_ext_pane_ParamLimits

0xdbe0,	// (0x0000febc) cell_tb_float_ext_pane

0xdbfa,	// (0x0000fed6) cell_tb_float_ext_pane_g1

0xdc03,	// (0x0000fedf) grid_highlight_pane_cp12

0xc2eb,	// (0x0000e5c7) cell_last_hwr_side_pane_ParamLimits

0xc2eb,	// (0x0000e5c7) cell_last_hwr_side_pane

0x42cf,	// (0x000065ab) cell_last_hwr_side_pane_g1

0x7581,	// (0x0000985d) cell_last_hwr_side_pane_g2

0x0001,

0xfdfc,	// (0x000120d8) cell_last_hwr_side_pane_g

0xd730,	// (0x0000fa0c) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd730,	// (0x0000fa0c) vkb2_area_bottom_space_btn_pane

0x4753,	// (0x00006a2f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6f9d,	// (0x00009279) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x74af,	// (0x0000978b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x758a,	// (0x00009866) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x758a,	// (0x00009866) vkb2_area_bottom_space_btn_pane_g1

0x75c4,	// (0x000098a0) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x75c4,	// (0x000098a0) vkb2_area_bottom_space_btn_pane_g2

0x75fa,	// (0x000098d6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x75fa,	// (0x000098d6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe01,	// (0x000120dd) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe01,	// (0x000120dd) vkb2_area_bottom_space_btn_pane_g

0x43ee,	// (0x000066ca) cel_fep_hwr_func_pane_ParamLimits

0x43ee,	// (0x000066ca) cel_fep_hwr_func_pane

0xc2c0,	// (0x0000e59c) cell_hwr_side_button_pane_ParamLimits

0xc2c0,	// (0x0000e59c) cell_hwr_side_button_pane

0xcfae,	// (0x0000f28a) aid_area_touch_clock_ParamLimits

0xe7c9,	// (0x00010aa5) bg_uniindi_top_pane_ParamLimits

0xcfc0,	// (0x0000f29c) uniindi_top_pane_g1_ParamLimits

0xcfd6,	// (0x0000f2b2) uniindi_top_pane_g2_ParamLimits

0xcfe2,	// (0x0000f2be) uniindi_top_pane_g3_ParamLimits

0x6417,	// (0x000086f3) uniindi_top_pane_g4_ParamLimits

0xfd14,	// (0x00011ff0) uniindi_top_pane_g_ParamLimits

0xcff3,	// (0x0000f2cf) uniindi_top_pane_t1_ParamLimits

0xe7c9,	// (0x00010aa5) bg_vkb2_func_pane_cp01_ParamLimits

0xe7c9,	// (0x00010aa5) bg_vkb2_func_pane_cp01

0x7644,	// (0x00009920) cel_fep_hwr_func_pane_g1_ParamLimits

0x7644,	// (0x00009920) cel_fep_hwr_func_pane_g1

0xe7c9,	// (0x00010aa5) bg_vkb2_func_pane_cp02_ParamLimits

0xe7c9,	// (0x00010aa5) bg_vkb2_func_pane_cp02

0x7644,	// (0x00009920) cell_hwr_side_button_pane_g1_ParamLimits

0x7644,	// (0x00009920) cell_hwr_side_button_pane_g1

0x1117,	// (0x000033f3) status_pane_g4_ParamLimits

0x1117,	// (0x000033f3) status_pane_g4

0x1131,	// (0x0000340d) status_pane_t1

0x400a,	// (0x000062e6) form2_midp_gauge_slider_cont_pane

0x4012,	// (0x000062ee) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc1c5,	// (0x0000e4a1) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc1d7,	// (0x0000e4b3) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae7,	// (0x00011dc3) form2_midp_gauge_slider_pane_t_ParamLimits

0x4048,	// (0x00006324) form2_midp_slider_pane_ParamLimits

0x6940,	// (0x00008c1c) aid_size_cell_func_vkb2_ParamLimits

0x6940,	// (0x00008c1c) aid_size_cell_func_vkb2

0x752b,	// (0x00009807) slider_pane_g4_ParamLimits

0x752b,	// (0x00009807) slider_pane_g4

0xdc0c,	// (0x0000fee8) form2_midp_gauge_slider_pane_t2_cp01

0xdc1a,	// (0x0000fef6) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdc1a,	// (0x0000fef6) form2_midp_gauge_slider_pane_t3_cp01

0x767d,	// (0x00009959) form2_midp_slider_pane_cp01

0xe486,	// (0x00010762) navi_smil_pane

0x76b1,	// (0x0000998d) navi_smil_pane_g1

0x76b9,	// (0x00009995) navi_smil_pane_t1

0x7686,	// (0x00009962) form2_midp_slider_pane_g1

0x768f,	// (0x0000996b) form2_midp_slider_pane_g2

0x7697,	// (0x00009973) form2_midp_slider_pane_g3

0x7686,	// (0x00009962) form2_midp_slider_pane_g4

0xdc37,	// (0x0000ff13) form2_midp_slider_pane_g5

0x0004,

0xfe0a,	// (0x000120e6) form2_midp_slider_pane_g

0x7634,	// (0x00009910) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7634,	// (0x00009910) vkb2_area_bottom_space_btn_pane_g4

0xb120,	// (0x0000d3fc) lc0_navi_pane_ParamLimits

0xb120,	// (0x0000d3fc) lc0_navi_pane

0xb18a,	// (0x0000d466) lc0_stat_indi_pane_ParamLimits

0xb18a,	// (0x0000d466) lc0_stat_indi_pane

0xb19f,	// (0x0000d47b) ls0_title_pane_ParamLimits

0xb19f,	// (0x0000d47b) ls0_title_pane

0xeac7,	// (0x00010da3) bg_popup_sub_pane_cp14_ParamLimits

0xcf95,	// (0x0000f271) list_uniindi_pane_ParamLimits

0xcfa1,	// (0x0000f27d) uniindi_top_pane_ParamLimits

0x6460,	// (0x0000873c) list_single_uniindi_pane_g1_ParamLimits

0x6473,	// (0x0000874f) list_single_uniindi_pane_t1_ParamLimits

0xdc42,	// (0x0000ff1e) lc0_stat_clock_pane_ParamLimits

0xdc42,	// (0x0000ff1e) lc0_stat_clock_pane

0xdc52,	// (0x0000ff2e) lc0_stat_indi_pane_g1_ParamLimits

0xdc52,	// (0x0000ff2e) lc0_stat_indi_pane_g1

0xdc5f,	// (0x0000ff3b) lc0_stat_indi_pane_g2_ParamLimits

0xdc5f,	// (0x0000ff3b) lc0_stat_indi_pane_g2

0x0001,

0xfe15,	// (0x000120f1) lc0_stat_indi_pane_g_ParamLimits

0xfe15,	// (0x000120f1) lc0_stat_indi_pane_g

0xdc6c,	// (0x0000ff48) lc0_uni_indicator_pane_ParamLimits

0xdc6c,	// (0x0000ff48) lc0_uni_indicator_pane

0xdc7c,	// (0x0000ff58) ls0_title_pane_g1_ParamLimits

0xdc7c,	// (0x0000ff58) ls0_title_pane_g1

0xdc90,	// (0x0000ff6c) ls0_title_pane_t1_ParamLimits

0xdc90,	// (0x0000ff6c) ls0_title_pane_t1

0xdcbe,	// (0x0000ff9a) lc0_uni_indicator_pane_g1_ParamLimits

0xdcbe,	// (0x0000ff9a) lc0_uni_indicator_pane_g1

0x7759,	// (0x00009a35) lc0_stat_clock_pane_t1

0xe486,	// (0x00010762) main_ai5_pane

0x7767,	// (0x00009a43) ai5_sk_pane_ParamLimits

0x7767,	// (0x00009a43) ai5_sk_pane

0xdce9,	// (0x0000ffc5) cell_ai5_widget_pane_ParamLimits

0xdce9,	// (0x0000ffc5) cell_ai5_widget_pane

0x782f,	// (0x00009b0b) aid_size_cell_widget_grid

0x783d,	// (0x00009b19) bg_ai5_widget_pane_ParamLimits

0x783d,	// (0x00009b19) bg_ai5_widget_pane

0x78b5,	// (0x00009b91) cell_ai5_widget_pane_g2

0x78c9,	// (0x00009ba5) cell_ai5_widget_pane_g3

0x78e3,	// (0x00009bbf) cell_ai5_widget_pane_g4

0x78f3,	// (0x00009bcf) cell_ai5_widget_pane_g5

0x7903,	// (0x00009bdf) cell_ai5_widget_pane_g6

0x790f,	// (0x00009beb) cell_ai5_widget_pane_g7

0x7957,	// (0x00009c33) cell_ai5_widget_pane_t1_ParamLimits

0x7957,	// (0x00009c33) cell_ai5_widget_pane_t1

0x7974,	// (0x00009c50) cell_ai5_widget_pane_t2_ParamLimits

0x7974,	// (0x00009c50) cell_ai5_widget_pane_t2

0x798c,	// (0x00009c68) cell_ai5_widget_pane_t3_ParamLimits

0x798c,	// (0x00009c68) cell_ai5_widget_pane_t3

0x79a4,	// (0x00009c80) cell_ai5_widget_pane_t4_ParamLimits

0x79a4,	// (0x00009c80) cell_ai5_widget_pane_t4

0x79ca,	// (0x00009ca6) cell_ai5_widget_pane_t5_ParamLimits

0x79ca,	// (0x00009ca6) cell_ai5_widget_pane_t5

0x79ea,	// (0x00009cc6) cell_ai5_widget_pane_t6_ParamLimits

0x79ea,	// (0x00009cc6) cell_ai5_widget_pane_t6

0x79fc,	// (0x00009cd8) cell_ai5_widget_pane_t7_ParamLimits

0x79fc,	// (0x00009cd8) cell_ai5_widget_pane_t7

0x7a15,	// (0x00009cf1) cell_ai5_widget_pane_t8_ParamLimits

0x7a15,	// (0x00009cf1) cell_ai5_widget_pane_t8

0x0009,

0xfe2f,	// (0x0001210b) cell_ai5_widget_pane_t_ParamLimits

0xfe2f,	// (0x0001210b) cell_ai5_widget_pane_t

0x7a74,	// (0x00009d50) grid_ai5_widget_pane

0xeac7,	// (0x00010da3) highlight_cell_ai5_widget_pane_ParamLimits

0xeac7,	// (0x00010da3) highlight_cell_ai5_widget_pane

0xdd4f,	// (0x0001002b) ai5_sk_left_pane

0xdd59,	// (0x00010035) ai5_sk_middle_pane

0xdd63,	// (0x0001003f) ai5_sk_right_pane

0x7aa0,	// (0x00009d7c) bg_ai5_widget_pane_g1_ParamLimits

0x7aa0,	// (0x00009d7c) bg_ai5_widget_pane_g1

0x7aac,	// (0x00009d88) bg_ai5_widget_pane_g2_ParamLimits

0x7aac,	// (0x00009d88) bg_ai5_widget_pane_g2

0x7ab8,	// (0x00009d94) bg_ai5_widget_pane_g3_ParamLimits

0x7ab8,	// (0x00009d94) bg_ai5_widget_pane_g3

0x7ac4,	// (0x00009da0) bg_ai5_widget_pane_g4_ParamLimits

0x7ac4,	// (0x00009da0) bg_ai5_widget_pane_g4

0x7ad0,	// (0x00009dac) bg_ai5_widget_pane_g5_ParamLimits

0x7ad0,	// (0x00009dac) bg_ai5_widget_pane_g5

0x7adc,	// (0x00009db8) bg_ai5_widget_pane_g6_ParamLimits

0x7adc,	// (0x00009db8) bg_ai5_widget_pane_g6

0x7ae8,	// (0x00009dc4) bg_ai5_widget_pane_g7_ParamLimits

0x7ae8,	// (0x00009dc4) bg_ai5_widget_pane_g7

0x7af4,	// (0x00009dd0) bg_ai5_widget_pane_g8_ParamLimits

0x7af4,	// (0x00009dd0) bg_ai5_widget_pane_g8

0x7b00,	// (0x00009ddc) bg_ai5_widget_pane_g9_ParamLimits

0x7b00,	// (0x00009ddc) bg_ai5_widget_pane_g9

0x0008,

0xfe44,	// (0x00012120) bg_ai5_widget_pane_g_ParamLimits

0xfe44,	// (0x00012120) bg_ai5_widget_pane_g

0x7b32,	// (0x00009e0e) cell_shortcut_ai5_widget_pane_ParamLimits

0x7b32,	// (0x00009e0e) cell_shortcut_ai5_widget_pane

0x0266,	// (0x00002542) bg_cell_shortcut_ai5_widget_pane

0x7b43,	// (0x00009e1f) cell_grid_ai5_widget_pane_g1

0x0266,	// (0x00002542) highlight_cell_shortcut_ai5_widget_pane

0x1347,	// (0x00003623) ai5_sk_left_pane_g1

0x7b4c,	// (0x00009e28) ai5_sk_left_pane_g2

0x7b54,	// (0x00009e30) ai5_sk_left_pane_g3

0x7b5c,	// (0x00009e38) ai5_sk_left_pane_g4

0x0003,

0xfe57,	// (0x00012133) ai5_sk_left_pane_g

0x7b64,	// (0x00009e40) ai5_sk_left_pane_t1

0x133f,	// (0x0000361b) ai5_sk_right_pane_g1

0x7b72,	// (0x00009e4e) ai5_sk_right_pane_g2

0x7b7a,	// (0x00009e56) ai5_sk_right_pane_g3

0x7b82,	// (0x00009e5e) ai5_sk_right_pane_g4

0x0003,

0xfe60,	// (0x0001213c) ai5_sk_right_pane_g

0x7b8a,	// (0x00009e66) ai5_sk_right_pane_t1

0x133f,	// (0x0000361b) ai5_sk_middle_pane_g1

0x1347,	// (0x00003623) ai5_sk_middle_pane_g2

0x135f,	// (0x0000363b) ai5_sk_middle_pane_g3

0x7b7a,	// (0x00009e56) ai5_sk_middle_pane_g4

0x7b54,	// (0x00009e30) ai5_sk_middle_pane_g5

0x7b98,	// (0x00009e74) ai5_sk_middle_pane_g6

0xdd6d,	// (0x00010049) ai5_sk_middle_pane_g7

0x0006,

0xfe69,	// (0x00012145) ai5_sk_middle_pane_g

0xb00c,	// (0x0000d2e8) aid_touch_area_size_lc0_ParamLimits

0xb00c,	// (0x0000d2e8) aid_touch_area_size_lc0

0x4b00,	// (0x00006ddc) cell_hwr_candidate_pane_t1_ParamLimits

0x0de8,	// (0x000030c4) aid_touch_navi_pane

0xb298,	// (0x0000d574) status_dt_navi_pane_ParamLimits

0xb298,	// (0x0000d574) status_dt_navi_pane

0xb2b0,	// (0x0000d58c) status_dt_sta_pane_ParamLimits

0xb2b0,	// (0x0000d58c) status_dt_sta_pane

0xdd75,	// (0x00010051) dt_sta_controll_pane

0xdd82,	// (0x0001005e) dt_sta_indi_pane

0xdd8f,	// (0x0001006b) dt_sta_title_pane

0xe7c9,	// (0x00010aa5) bg_dt_sta_indi_pane_ParamLimits

0xe7c9,	// (0x00010aa5) bg_dt_sta_indi_pane

0xdda1,	// (0x0001007d) dt_sta_battery_pane

0xdda9,	// (0x00010085) dt_sta_indi_pane_g1

0x7bea,	// (0x00009ec6) dt_sta_indi_pane_g2

0x7bf3,	// (0x00009ecf) dt_sta_indi_pane_g3

0x0002,

0xfe78,	// (0x00012154) dt_sta_indi_pane_g

0x7bfc,	// (0x00009ed8) dt_sta_signal_pane

0xeac7,	// (0x00010da3) bg_dt_sta_title_pane_ParamLimits

0xeac7,	// (0x00010da3) bg_dt_sta_title_pane

0x24c4,	// (0x000047a0) dt_sta_title_pane_g1

0xddb2,	// (0x0001008e) dt_sta_title_pane_t1_ParamLimits

0xddb2,	// (0x0001008e) dt_sta_title_pane_t1

0xe486,	// (0x00010762) bg_dt_sta_control_pane

0xddc7,	// (0x000100a3) dt_sta_controll_pane_g1

0xddd0,	// (0x000100ac) bg_dt_sta_title_pane_g1

0xddd9,	// (0x000100b5) bg_dt_sta_title_pane_g2

0xdde2,	// (0x000100be) bg_dt_sta_title_pane_g3

0x0002,

0xfe7f,	// (0x0001215b) bg_dt_sta_title_pane_g

0x42cf,	// (0x000065ab) bg_dt_sta_indi_pane_g1

0x7c3e,	// (0x00009f1a) dt_sta_signal_pane_g1

0x7c46,	// (0x00009f22) dt_sta_signal_pane_g2

0x0001,

0xfe86,	// (0x00012162) dt_sta_signal_pane_g

0x7c4e,	// (0x00009f2a) dt_sta_battery_pane_g1

0x7c57,	// (0x00009f33) dt_sta_battery_pane_t1

0x42cf,	// (0x000065ab) bg_dt_sta_control_pane_g1

0xf23a,	// (0x00011516) fep_china_uni_eep_pane

0xf242,	// (0x0001151e) fep_china_uni_entry_pane_ParamLimits

0xf252,	// (0x0001152e) popup_fep_china_uni_window_g1_ParamLimits

0xf262,	// (0x0001153e) popup_fep_china_uni_window_g2_ParamLimits

0xf262,	// (0x0001153e) popup_fep_china_uni_window_g2

0x0001,

0xf709,	// (0x000119e5) popup_fep_china_uni_window_g_ParamLimits

0xf709,	// (0x000119e5) popup_fep_china_uni_window_g

0x7c66,	// (0x00009f42) fep_china_uni_eep_pane_g1

0x7c6e,	// (0x00009f4a) fep_china_uni_eep_pane_t1

0x76a8,	// (0x00009984) aid_touch_area_size_smil_player

0x0f3e,	// (0x0000321a) lc0_clock_pane

0x1125,	// (0x00003401) status_pane_g5_ParamLimits

0x1125,	// (0x00003401) status_pane_g5

0xaa1e,	// (0x0000ccfa) popup_keymap_window

0x10e3,	// (0x000033bf) status_icon_pane

0x78c9,	// (0x00009ba5) cell_ai5_widget_pane_g3_ParamLimits

0x78e3,	// (0x00009bbf) cell_ai5_widget_pane_g4_ParamLimits

0x78f3,	// (0x00009bcf) cell_ai5_widget_pane_g5_ParamLimits

0x791b,	// (0x00009bf7) cell_ai5_widget_pane_g8_ParamLimits

0x791b,	// (0x00009bf7) cell_ai5_widget_pane_g8

0x792f,	// (0x00009c0b) cell_ai5_widget_pane_g9_ParamLimits

0x792f,	// (0x00009c0b) cell_ai5_widget_pane_g9

0x7943,	// (0x00009c1f) cell_ai5_widget_pane_g10_ParamLimits

0x7943,	// (0x00009c1f) cell_ai5_widget_pane_g10

0x7c7d,	// (0x00009f59) status_icon_pane_g1

0xe486,	// (0x00010762) bg_popup_sub_pane_cp13

0x7c85,	// (0x00009f61) popup_keymap_window_t1

0xa6de,	// (0x0000c9ba) control_pane_g6_ParamLimits

0xa6de,	// (0x0000c9ba) control_pane_g6

0xa6eb,	// (0x0000c9c7) control_pane_g7_ParamLimits

0xa6eb,	// (0x0000c9c7) control_pane_g7

0xa6f8,	// (0x0000c9d4) control_pane_g8_ParamLimits

0xa6f8,	// (0x0000c9d4) control_pane_g8

0xdd75,	// (0x00010051) dt_sta_controll_pane_ParamLimits

0xdd82,	// (0x0001005e) dt_sta_indi_pane_ParamLimits

0xdd8f,	// (0x0001006b) dt_sta_title_pane_ParamLimits

0xe99c,	// (0x00010c78) aid_size_touch_scroll_bar_cale

0x936f,	// (0x0000b64b) popup_discreet_window_ParamLimits

0x936f,	// (0x0000b64b) popup_discreet_window

0x93c1,	// (0x0000b69d) popup_sk_window

0x1b9e,	// (0x00003e7a) bg_popup_sub_pane_cp28_ParamLimits

0x1b9e,	// (0x00003e7a) bg_popup_sub_pane_cp28

0x7c93,	// (0x00009f6f) popup_discreet_window_g1_ParamLimits

0x7c93,	// (0x00009f6f) popup_discreet_window_g1

0xddeb,	// (0x000100c7) popup_discreet_window_t1_ParamLimits

0xddeb,	// (0x000100c7) popup_discreet_window_t1

0x7cd1,	// (0x00009fad) popup_discreet_window_t2_ParamLimits

0x7cd1,	// (0x00009fad) popup_discreet_window_t2

0x0002,

0xfe8b,	// (0x00012167) popup_discreet_window_t_ParamLimits

0xfe8b,	// (0x00012167) popup_discreet_window_t

0x7d23,	// (0x00009fff) popup_sk_window_g1

0x7d2d,	// (0x0000a009) popup_sk_window_g2

0x0001,

0xfe92,	// (0x0001216e) popup_sk_window_g

0xde09,	// (0x000100e5) popup_sk_window_t1

0xde17,	// (0x000100f3) popup_sk_window_t1_copy1

0x78b5,	// (0x00009b91) cell_ai5_widget_pane_g2_ParamLimits

0x7a27,	// (0x00009d03) cell_ai5_widget_pane_t9_ParamLimits

0x7a27,	// (0x00009d03) cell_ai5_widget_pane_t9

0xe486,	// (0x00010762) main_fep_fshwr2_pane

0xde25,	// (0x00010101) aid_fshwr2_btn_pane

0xde39,	// (0x00010115) aid_fshwr2_syb_pane

0xde4d,	// (0x00010129) aid_fshwr2_txt_pane

0xde5d,	// (0x00010139) fshwr2_func_candi_pane

0xde7d,	// (0x00010159) fshwr2_hwr_syb_pane

0xde9f,	// (0x0001017b) fshwr2_icf_pane

0xe486,	// (0x00010762) fshwr2_icf_bg_pane

0x7ddf,	// (0x0000a0bb) fshwr2_icf_pane_t1_ParamLimits

0x7ddf,	// (0x0000a0bb) fshwr2_icf_pane_t1

0xf11b,	// (0x000113f7) fshwr2_func_candi_pane_g1

0xdecf,	// (0x000101ab) fshwr2_func_candi_row_pane_ParamLimits

0xdecf,	// (0x000101ab) fshwr2_func_candi_row_pane

0xdef2,	// (0x000101ce) cell_fshwr2_syb_pane_ParamLimits

0xdef2,	// (0x000101ce) cell_fshwr2_syb_pane

0x7644,	// (0x00009920) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7644,	// (0x00009920) fshwr2_hwr_syb_pane_g1

0xe486,	// (0x00010762) bg_popup_call_pane_cp01

0xdf18,	// (0x000101f4) fshwr2_func_candi_cell_pane_ParamLimits

0xdf18,	// (0x000101f4) fshwr2_func_candi_cell_pane

0x1987,	// (0x00003c63) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1987,	// (0x00003c63) fshwr2_func_candi_cell_bg_pane

0xdf63,	// (0x0001023f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xdf63,	// (0x0001023f) fshwr2_func_candi_cell_pane_g1

0xdf9a,	// (0x00010276) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xdf9a,	// (0x00010276) fshwr2_func_candi_cell_pane_t1

0xe486,	// (0x00010762) bg_button_pane_cp08

0x7ec8,	// (0x0000a1a4) cell_fshwr2_syb_bg_pane

0xdfb5,	// (0x00010291) cell_fshwr2_syb_bg_pane_g1

0xdfc8,	// (0x000102a4) cell_fshwr2_syb_bg_pane_t1

0xeac7,	// (0x00010da3) main_tmo_pane

0xba3a,	// (0x0000dd16) uni_indicator_pane_g1_ParamLimits

0xba50,	// (0x0000dd2c) uni_indicator_pane_g2_ParamLimits

0xba66,	// (0x0000dd42) uni_indicator_pane_g3_ParamLimits

0x2831,	// (0x00004b0d) uni_indicator_pane_g4_ParamLimits

0x2831,	// (0x00004b0d) uni_indicator_pane_g4

0x2845,	// (0x00004b21) uni_indicator_pane_g5_ParamLimits

0x2845,	// (0x00004b21) uni_indicator_pane_g5

0x2845,	// (0x00004b21) uni_indicator_pane_g6_ParamLimits

0x2845,	// (0x00004b21) uni_indicator_pane_g6

0xf901,	// (0x00011bdd) uni_indicator_pane_g_ParamLimits

0xcc52,	// (0x0000ef2e) popup_tmo_note_window_ParamLimits

0xcc52,	// (0x0000ef2e) popup_tmo_note_window

0xeac7,	// (0x00010da3) fshwr2_bg_pane

0xdf8b,	// (0x00010267) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xdf8b,	// (0x00010267) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe97,	// (0x00012173) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe97,	// (0x00012173) fshwr2_func_candi_cell_pane_g

0x42cf,	// (0x000065ab) bg_popup_window_pane_cp01

0x7efe,	// (0x0000a1da) bg_popup_window_pane_g1_cp01

0x7f07,	// (0x0000a1e3) bg_popup_window_pane_cp22_ParamLimits

0x7f07,	// (0x0000a1e3) bg_popup_window_pane_cp22

0xdfde,	// (0x000102ba) listscroll_tmo_link_pane_ParamLimits

0xdfde,	// (0x000102ba) listscroll_tmo_link_pane

0x7f55,	// (0x0000a231) popup_tmo_note_window_g1_ParamLimits

0x7f55,	// (0x0000a231) popup_tmo_note_window_g1

0xe01e,	// (0x000102fa) tmo_note_info_pane_ParamLimits

0xe01e,	// (0x000102fa) tmo_note_info_pane

0xe038,	// (0x00010314) list_tmo_note_info_pane_g1_ParamLimits

0xe038,	// (0x00010314) list_tmo_note_info_pane_g1

0x7f93,	// (0x0000a26f) list_tmo_note_info_pane_g2_ParamLimits

0x7f93,	// (0x0000a26f) list_tmo_note_info_pane_g2

0x0001,

0xfe9c,	// (0x00012178) list_tmo_note_info_pane_g_ParamLimits

0xfe9c,	// (0x00012178) list_tmo_note_info_pane_g

0x7faf,	// (0x0000a28b) list_tmo_note_info_text_pane_ParamLimits

0x7faf,	// (0x0000a28b) list_tmo_note_info_text_pane

0x8030,	// (0x0000a30c) list_tmo_link_pane

0x803d,	// (0x0000a319) scroll_pane_cp20

0x804a,	// (0x0000a326) list_single_tmo_link_pane_ParamLimits

0x804a,	// (0x0000a326) list_single_tmo_link_pane

0x805a,	// (0x0000a336) list_single_tmo_link_pane_t1

0x8068,	// (0x0000a344) list_tmo_note_info_text_pane_t1_ParamLimits

0x8068,	// (0x0000a344) list_tmo_note_info_text_pane_t1

0xa032,	// (0x0000c30e) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa032,	// (0x0000c30e) aid_size_touch_scroll_bar_cp01

0x9f32,	// (0x0000c20e) aid_size_touch_slider_marker

0x93b1,	// (0x0000b68d) popup_settings_window_ParamLimits

0x93b1,	// (0x0000b68d) popup_settings_window

0x080b,	// (0x00002ae7) popup_candi_list_indi_window

0x0de8,	// (0x000030c4) aid_touch_navi_pane_ParamLimits

0x613d,	// (0x00008419) rs_clock_indi_pane

0x6146,	// (0x00008422) sctrl_sk_bottom_pane_ParamLimits

0x6157,	// (0x00008433) sctrl_sk_top_pane_ParamLimits

0xd46d,	// (0x0000f749) popup_fep_tooltip_window

0x782f,	// (0x00009b0b) aid_size_cell_widget_grid_ParamLimits

0x78a0,	// (0x00009b7c) cell_ai5_widget_pane_g1_ParamLimits

0x78a0,	// (0x00009b7c) cell_ai5_widget_pane_g1

0x7903,	// (0x00009bdf) cell_ai5_widget_pane_g6_ParamLimits

0x790f,	// (0x00009beb) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1a,	// (0x000120f6) cell_ai5_widget_pane_g_ParamLimits

0xfe1a,	// (0x000120f6) cell_ai5_widget_pane_g

0x7a56,	// (0x00009d32) cell_ai5_widget_pane_t10_ParamLimits

0x7a56,	// (0x00009d32) cell_ai5_widget_pane_t10

0x7a74,	// (0x00009d50) grid_ai5_widget_pane_ParamLimits

0x7b0c,	// (0x00009de8) cell_contacts_ai5_widget_pane_ParamLimits

0x7b0c,	// (0x00009de8) cell_contacts_ai5_widget_pane

0x7ce6,	// (0x00009fc2) popup_discreet_window_t3_ParamLimits

0x7ce6,	// (0x00009fc2) popup_discreet_window_t3

0xdebb,	// (0x00010197) popup_fshwr2_char_preview_window_ParamLimits

0xdebb,	// (0x00010197) popup_fshwr2_char_preview_window

0xe04f,	// (0x0001032b) tmo_note_info_pane_t1

0xe064,	// (0x00010340) tmo_note_info_pane_t2

0xe07b,	// (0x00010357) tmo_note_info_pane_t3

0x800c,	// (0x0000a2e8) tmo_note_info_pane_t4

0x801e,	// (0x0000a2fa) tmo_note_info_pane_t5

0x0004,

0xfea1,	// (0x0001217d) tmo_note_info_pane_t

0x8030,	// (0x0000a30c) list_tmo_link_pane_ParamLimits

0x803d,	// (0x0000a319) scroll_pane_cp20_ParamLimits

0xe486,	// (0x00010762) bg_popup_fep_char_preview_window_cp01

0xe090,	// (0x0001036c) popup_fshwr2_char_preview_window_t1

0x808f,	// (0x0000a36b) popup_candi_list_indi_window_g1

0x8098,	// (0x0000a374) bg_cell_contacts_ai5_widget_pane

0x80a4,	// (0x0000a380) cell_contacts_ai5_widget_pane_g1

0x4e0d,	// (0x000070e9) cell_contacts_ai5_widget_pane_g2

0x80b9,	// (0x0000a395) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeac,	// (0x00012188) cell_contacts_ai5_widget_pane_g

0x80c5,	// (0x0000a3a1) cell_contacts_ai5_widget_pane_t1

0xeac7,	// (0x00010da3) highlight_cell_shortcut_ai5_widget_pane_cp01

0x813c,	// (0x0000a418) settings_container_pane

0x0266,	// (0x00002542) listscroll_set_pane_copy1

0x3659,	// (0x00005935) scroll_pane_cp121_copy1

0x194b,	// (0x00003c27) set_content_pane_copy1

0xe103,	// (0x000103df) aid_height_set_list_copy1_ParamLimits

0xe103,	// (0x000103df) aid_height_set_list_copy1

0x2b17,	// (0x00004df3) aid_size_parent_copy1_ParamLimits

0x2b17,	// (0x00004df3) aid_size_parent_copy1

0xe10f,	// (0x000103eb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe10f,	// (0x000103eb) button_value_adjust_pane_cp6_copy1

0x07ad,	// (0x00002a89) list_highlight_pane_cp2_copy1_ParamLimits

0x07ad,	// (0x00002a89) list_highlight_pane_cp2_copy1

0xe123,	// (0x000103ff) list_set_pane_copy1_ParamLimits

0xe123,	// (0x000103ff) list_set_pane_copy1

0xe09e,	// (0x0001037a) main_pane_set_t1_copy1_ParamLimits

0xe09e,	// (0x0001037a) main_pane_set_t1_copy1

0xe0d8,	// (0x000103b4) main_pane_set_t2_copy1_ParamLimits

0xe0d8,	// (0x000103b4) main_pane_set_t2_copy1

0xe1d0,	// (0x000104ac) main_pane_set_t3_copy1

0xe1de,	// (0x000104ba) main_pane_set_t4_copy1

0xe0f7,	// (0x000103d3) set_content_pane_g1_copy1_ParamLimits

0xe0f7,	// (0x000103d3) set_content_pane_g1_copy1

0xe1ec,	// (0x000104c8) setting_code_pane_copy1

0x8239,	// (0x0000a515) setting_slider_graphic_pane_copy1

0x8239,	// (0x0000a515) setting_slider_pane_copy1

0x8239,	// (0x0000a515) setting_text_pane_copy1

0x8239,	// (0x0000a515) setting_volume_pane_copy1

0xe1ec,	// (0x000104c8) settings_code_pane_cp2_copy1

0xe1f4,	// (0x000104d0) settings_code_pane_cp_copy1_ParamLimits

0xe1f4,	// (0x000104d0) settings_code_pane_cp_copy1

0xe208,	// (0x000104e4) volume_set_pane_copy1

0xe210,	// (0x000104ec) volume_set_pane_g10_copy1

0xe218,	// (0x000104f4) volume_set_pane_g1_copy1

0xe220,	// (0x000104fc) volume_set_pane_g2_copy1

0xe228,	// (0x00010504) volume_set_pane_g3_copy1

0xe230,	// (0x0001050c) volume_set_pane_g4_copy1

0xe238,	// (0x00010514) volume_set_pane_g5_copy1

0xe240,	// (0x0001051c) volume_set_pane_g6_copy1

0xe248,	// (0x00010524) volume_set_pane_g7_copy1

0xe250,	// (0x0001052c) volume_set_pane_g8_copy1

0xe258,	// (0x00010534) volume_set_pane_g9_copy1

0xe685,	// (0x00010961) bg_set_opt_pane_cp_copy1_ParamLimits

0xe685,	// (0x00010961) bg_set_opt_pane_cp_copy1

0xe260,	// (0x0001053c) setting_slider_pane_t1_copy1_ParamLimits

0xe260,	// (0x0001053c) setting_slider_pane_t1_copy1

0xe27e,	// (0x0001055a) setting_slider_pane_t2_copy1_ParamLimits

0xe27e,	// (0x0001055a) setting_slider_pane_t2_copy1

0xe298,	// (0x00010574) setting_slider_pane_t3_copy1_ParamLimits

0xe298,	// (0x00010574) setting_slider_pane_t3_copy1

0xe2b0,	// (0x0001058c) slider_set_pane_copy1_ParamLimits

0xe2b0,	// (0x0001058c) slider_set_pane_copy1

0xeb81,	// (0x00010e5d) set_opt_bg_pane_g1_copy2

0xeb89,	// (0x00010e65) set_opt_bg_pane_g2_copy2

0x8313,	// (0x0000a5ef) set_opt_bg_pane_g3_copy2

0xeb99,	// (0x00010e75) set_opt_bg_pane_g4_copy2

0xeba1,	// (0x00010e7d) set_opt_bg_pane_g5_copy2

0xeba9,	// (0x00010e85) set_opt_bg_pane_g6_copy2

0xe2c6,	// (0x000105a2) set_opt_bg_pane_g7_copy2

0x8325,	// (0x0000a601) set_opt_bg_pane_g8_copy2

0x832f,	// (0x0000a60b) set_opt_bg_pane_g9_copy2

0xe2ce,	// (0x000105aa) aid_size_touch_slider_mark_copy1_ParamLimits

0xe2ce,	// (0x000105aa) aid_size_touch_slider_mark_copy1

0xe2e2,	// (0x000105be) slider_set_pane_g1_copy1

0x8356,	// (0x0000a632) slider_set_pane_g2_copy1

0xbb97,	// (0x0000de73) slider_set_pane_g3_copy1_ParamLimits

0xbb97,	// (0x0000de73) slider_set_pane_g3_copy1

0xbbab,	// (0x0000de87) slider_set_pane_g4_copy1_ParamLimits

0xbbab,	// (0x0000de87) slider_set_pane_g4_copy1

0xbbc3,	// (0x0000de9f) slider_set_pane_g5_copy1_ParamLimits

0xbbc3,	// (0x0000de9f) slider_set_pane_g5_copy1

0xbb97,	// (0x0000de73) slider_set_pane_g6_copy1_ParamLimits

0xbb97,	// (0x0000de73) slider_set_pane_g6_copy1

0xe2eb,	// (0x000105c7) slider_set_pane_g7_copy1_ParamLimits

0xe2eb,	// (0x000105c7) slider_set_pane_g7_copy1

0xe609,	// (0x000108e5) bg_set_opt_pane_cp2_copy1

0xe301,	// (0x000105dd) setting_slider_graphic_pane_g1_copy1

0xe30a,	// (0x000105e6) setting_slider_graphic_pane_t1_copy1

0xe31a,	// (0x000105f6) setting_slider_graphic_pane_t2_copy1

0xe32a,	// (0x00010606) slider_set_pane_cp_copy1

0x83ad,	// (0x0000a689) input_focus_pane_cp1_copy1

0x83b6,	// (0x0000a692) list_set_text_pane_copy1

0x83be,	// (0x0000a69a) setting_text_pane_g1_copy1

0x83c7,	// (0x0000a6a3) set_text_pane_t1_copy1

0x83ad,	// (0x0000a689) input_focus_pane_cp2_copy1

0x83be,	// (0x0000a69a) setting_code_pane_g1_copy1

0x83e2,	// (0x0000a6be) setting_code_pane_t1_copy1

0x83f0,	// (0x0000a6cc) list_set_graphic_pane_copy1

0xe609,	// (0x000108e5) bg_set_opt_pane_cp4_copy1

0xf4df,	// (0x000117bb) list_set_graphic_pane_g1_copy1_ParamLimits

0xf4df,	// (0x000117bb) list_set_graphic_pane_g1_copy1

0x8404,	// (0x0000a6e0) list_set_graphic_pane_g2_copy1

0xf4f7,	// (0x000117d3) list_set_graphic_pane_t1_copy1_ParamLimits

0xf4f7,	// (0x000117d3) list_set_graphic_pane_t1_copy1

0x42cf,	// (0x000065ab) rs_clock_indi_pane_g1

0x840c,	// (0x0000a6e8) rs_clock_indi_pane_t1

0x841a,	// (0x0000a6f6) rs_indi_pane

0x8422,	// (0x0000a6fe) rs_indi_pane_g1

0x842b,	// (0x0000a707) rs_indi_pane_g2

0x808f,	// (0x0000a36b) rs_indi_pane_g3

0x0002,

0xfeb3,	// (0x0001218f) rs_indi_pane_g

0x0266,	// (0x00002542) bg_popup_preview_window_pane_cp03

0x8434,	// (0x0000a710) popup_fep_tooltip_window_t1

0xc750,	// (0x0000ea2c) popup_note2_window_g2_ParamLimits

0xc750,	// (0x0000ea2c) popup_note2_window_g2

0x0001,

0xfc53,	// (0x00011f2f) popup_note2_window_g_ParamLimits

0xfc53,	// (0x00011f2f) popup_note2_window_g

0x5b0b,	// (0x00007de7) bg_popup_sub_pane_cp11_ParamLimits

0x5b18,	// (0x00007df4) cell_ai3_links_pane_g1_ParamLimits

0x5b2f,	// (0x00007e0b) cell_ai3_links_pane_t1

0x83c7,	// (0x0000a6a3) set_text_pane_t1_copy1_ParamLimits

0x0177,	// (0x00002453) cell_graphic_popup_pane_cp2_ParamLimits

0x0177,	// (0x00002453) cell_graphic_popup_pane_cp2

0xe33a,	// (0x00010616) cell_graphic_popup_pane_g1_cp2

0xe91f,	// (0x00010bfb) cell_graphic_popup_pane_g2_cp2

0x844a,	// (0x0000a726) cell_graphic_popup_pane_g3_cp2

0xe342,	// (0x0001061e) cell_graphic_popup_pane_t2_cp2

0xe930,	// (0x00010c0c) grid_highlight_pane_cp3_cp2

0xef79,	// (0x00011255) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xeac7,	// (0x00010da3) main_tmo_pane_ParamLimits

0xcc46,	// (0x0000ef22) popup_tmo_big_image_note_window

0x788f,	// (0x00009b6b) cell_ai5_widget_list_pane

0x7897,	// (0x00009b73) cell_ai5_widget_lrg_icon_pane

0xe04f,	// (0x0001032b) tmo_note_info_pane_t1_ParamLimits

0xe064,	// (0x00010340) tmo_note_info_pane_t2_ParamLimits

0xe07b,	// (0x00010357) tmo_note_info_pane_t3_ParamLimits

0x800c,	// (0x0000a2e8) tmo_note_info_pane_t4_ParamLimits

0x801e,	// (0x0000a2fa) tmo_note_info_pane_t5_ParamLimits

0xfea1,	// (0x0001217d) tmo_note_info_pane_t_ParamLimits

0x813c,	// (0x0000a418) settings_container_pane_ParamLimits

0xe332,	// (0x0001060e) indicator_popup_pane_cp5

0xe332,	// (0x0001060e) indicator_popup_pane_cp6

0x83f0,	// (0x0000a6cc) list_set_graphic_pane_copy1_ParamLimits

0xe486,	// (0x00010762) bg_popup_window_pane_cp23

0x8460,	// (0x0000a73c) popup_tmo_big_image_note_window_g1

0x8469,	// (0x0000a745) popup_tmo_big_image_note_window_t1

0x8479,	// (0x0000a755) popup_tmo_big_image_note_window_t2

0x8489,	// (0x0000a765) popup_tmo_big_image_note_window_t3

0x0002,

0xfeba,	// (0x00012196) popup_tmo_big_image_note_window_t

0x42cf,	// (0x000065ab) cell_ai5_widget_lrg_icon_pane_g1

0x8499,	// (0x0000a775) cell_ai5_widget_lrg_icon_pane_t1

0x84a7,	// (0x0000a783) cell_ai5_widget_list_row_pane_ParamLimits

0x84a7,	// (0x0000a783) cell_ai5_widget_list_row_pane

0x84be,	// (0x0000a79a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x84be,	// (0x0000a79a) cell_ai5_widget_list_row_pane_g1

0xe350,	// (0x0001062c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe350,	// (0x0001062c) cell_ai5_widget_list_row_pane_t1

0x84f6,	// (0x0000a7d2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x84f6,	// (0x0000a7d2) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec1,	// (0x0001219d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec1,	// (0x0001219d) cell_ai5_widget_list_row_pane_t

0xe486,	// (0x00010762) main_fep_vtchi_ss_pane

0x853e,	// (0x0000a81a) popup_fep_char_pre_window

0x8546,	// (0x0000a822) popup_fep_ituss_window

0xe3a3,	// (0x0001067f) popup_fep_vkbss_window

0xe3b0,	// (0x0001068c) grid_vkbss_keypad_pane_ParamLimits

0xe3b0,	// (0x0001068c) grid_vkbss_keypad_pane

0x85ac,	// (0x0000a888) ituss_keypad_pane

0x85c7,	// (0x0000a8a3) aid_vkbss_key_offset_ParamLimits

0x85c7,	// (0x0000a8a3) aid_vkbss_key_offset

0xe3c0,	// (0x0001069c) cell_vkbss_key_pane_ParamLimits

0xe3c0,	// (0x0001069c) cell_vkbss_key_pane

0x10ff,	// (0x000033db) bg_cell_vkbss_key_g1_ParamLimits

0x10ff,	// (0x000033db) bg_cell_vkbss_key_g1

0xe3d6,	// (0x000106b2) cell_vkbss_key_3p_pane_ParamLimits

0xe3d6,	// (0x000106b2) cell_vkbss_key_3p_pane

0xe3f0,	// (0x000106cc) cell_vkbss_key_g1_ParamLimits

0xe3f0,	// (0x000106cc) cell_vkbss_key_g1

0xe40a,	// (0x000106e6) cell_vkbss_key_t1_ParamLimits

0xe40a,	// (0x000106e6) cell_vkbss_key_t1

0x863c,	// (0x0000a918) cell_ituss_key_pane_ParamLimits

0x863c,	// (0x0000a918) cell_ituss_key_pane

0x864d,	// (0x0000a929) bg_cell_ituss_key_g1_ParamLimits

0x864d,	// (0x0000a929) bg_cell_ituss_key_g1

0x8659,	// (0x0000a935) cell_ituss_key_pane_g1_ParamLimits

0x8659,	// (0x0000a935) cell_ituss_key_pane_g1

0x866d,	// (0x0000a949) cell_ituss_key_pane_g2_ParamLimits

0x866d,	// (0x0000a949) cell_ituss_key_pane_g2

0x0002,

0xfec8,	// (0x000121a4) cell_ituss_key_pane_g_ParamLimits

0xfec8,	// (0x000121a4) cell_ituss_key_pane_g

0x86ab,	// (0x0000a987) cell_ituss_key_t1_ParamLimits

0x86ab,	// (0x0000a987) cell_ituss_key_t1

0x86e5,	// (0x0000a9c1) cell_ituss_key_t2_ParamLimits

0x86e5,	// (0x0000a9c1) cell_ituss_key_t2

0x8716,	// (0x0000a9f2) cell_ituss_key_t3_ParamLimits

0x8716,	// (0x0000a9f2) cell_ituss_key_t3

0x86e5,	// (0x0000a9c1) cell_ituss_key_t4_ParamLimits

0x86e5,	// (0x0000a9c1) cell_ituss_key_t4

0x0004,

0xfecf,	// (0x000121ab) cell_ituss_key_t_ParamLimits

0xfecf,	// (0x000121ab) cell_ituss_key_t

0x8759,	// (0x0000aa35) cell_vkbss_key_3p_pane_g1

0x8761,	// (0x0000aa3d) cell_vkbss_key_3p_pane_g2

0x8769,	// (0x0000aa45) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeda,	// (0x000121b6) cell_vkbss_key_3p_pane_g

0x0266,	// (0x00002542) bg_popup_fep_char_preview_window_cp02

0x8771,	// (0x0000aa4d) popup_fep_char_pre_window_t1

0xdd45,	// (0x00010021) main_ai5_sk_pane

0x8098,	// (0x0000a374) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x80a4,	// (0x0000a380) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e0d,	// (0x000070e9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x80b9,	// (0x0000a395) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeac,	// (0x00012188) cell_contacts_ai5_widget_pane_g_ParamLimits

0x80c5,	// (0x0000a3a1) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xeac7,	// (0x00010da3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe435,	// (0x00010711) main_ai5_sk_pane_g1

0xb68b,	// (0x0000d967) popup_query_code_window_g1

0xe394,	// (0x00010670) popup_fep_vkb_icf_pane

0x8586,	// (0x0000a862) popup_fep_vtchi_icf_pane

0x8788,	// (0x0000aa64) bg_icf_pane

0x8794,	// (0x0000aa70) list_vkb_icf_pane

0x87a3,	// (0x0000aa7f) bg_icf_pane_cp01

0x87b6,	// (0x0000aa92) vtchi_icf_list_pane

0xe43e,	// (0x0001071a) list_vkb_icf_pane_t1_ParamLimits

0xe43e,	// (0x0001071a) list_vkb_icf_pane_t1

0x87e7,	// (0x0000aac3) vtchi_icf_list_pane_t1_ParamLimits

0x87e7,	// (0x0000aac3) vtchi_icf_list_pane_t1

0x8546,	// (0x0000a822) popup_fep_ituss_window_ParamLimits

0x8586,	// (0x0000a862) popup_fep_vtchi_icf_pane_ParamLimits

0x85ac,	// (0x0000a888) ituss_keypad_pane_ParamLimits

0x85bb,	// (0x0000a897) ituss_sks_pane

0x8788,	// (0x0000aa64) bg_icf_pane_ParamLimits

0xe381,	// (0x0001065d) icf_edit_indi_pane_ParamLimits

0xe381,	// (0x0001065d) icf_edit_indi_pane

0x8794,	// (0x0000aa70) list_vkb_icf_pane_ParamLimits

0x87a3,	// (0x0000aa7f) bg_icf_pane_cp01_ParamLimits

0x8531,	// (0x0000a80d) icf_edit_indi_pane_cp01_ParamLimits

0x8531,	// (0x0000a80d) icf_edit_indi_pane_cp01

0x87be,	// (0x0000aa9a) vtchi_query_pane

0x7644,	// (0x00009920) icf_edit_indi_pane_g1_ParamLimits

0x7644,	// (0x00009920) icf_edit_indi_pane_g1

0xe455,	// (0x00010731) icf_edit_indi_pane_g2_ParamLimits

0xe455,	// (0x00010731) icf_edit_indi_pane_g2

0x0001,

0xfef2,	// (0x000121ce) icf_edit_indi_pane_g_ParamLimits

0xfef2,	// (0x000121ce) icf_edit_indi_pane_g

0xe467,	// (0x00010743) icf_edit_indi_pane_t1

0x8805,	// (0x0000aae1) bg_input_focus_pane_cp042

0xe993,	// (0x00010c6f) vtchi_button_pane

0x880e,	// (0x0000aaea) vtchi_query_pane_t1

0x881c,	// (0x0000aaf8) vtchi_query_pane_t2

0x882a,	// (0x0000ab06) vtchi_query_pane_t3

0x0002,

0xfee1,	// (0x000121bd) vtchi_query_pane_t

0xe486,	// (0x00010762) bg_button_pane_cp13

0x8838,	// (0x0000ab14) vtchi_button_pane_g1

0x8840,	// (0x0000ab1c) ituss_sks_pane_g1

0x884b,	// (0x0000ab27) ituss_sks_pane_g2

0x0001,

0xfee8,	// (0x000121c4) ituss_sks_pane_g

0x8853,	// (0x0000ab2f) ituss_sks_pane_t1

0x8861,	// (0x0000ab3d) ituss_sks_pane_t2

0x0001,

0xfeed,	// (0x000121c9) ituss_sks_pane_t

0x3cb7,	// (0x00005f93) indicator_nsta_pane_cp_g1

0x3cbf,	// (0x00005f9b) indicator_nsta_pane_cp_g2

0x3cc7,	// (0x00005fa3) indicator_nsta_pane_cp_g3

0x3cb7,	// (0x00005f93) indicator_nsta_pane_cp_g4

0x3cbf,	// (0x00005f9b) indicator_nsta_pane_cp_g5

0x3cc7,	// (0x00005fa3) indicator_nsta_pane_cp_g6

0x0005,

0xfa9d,	// (0x00011d79) indicator_nsta_pane_cp_g

0xdaac,	// (0x0000fd88) cell_graphic2_pane_t2_ParamLimits

0xdaac,	// (0x0000fd88) cell_graphic2_pane_t2

0x0001,

0xfda3,	// (0x0001207f) cell_graphic2_pane_t_ParamLimits

0xfda3,	// (0x0001207f) cell_graphic2_pane_t

0xdae5,	// (0x0000fdc1) cell_graphic2_control_pane_t1

0xa2f8,	// (0x0000c5d4) signal_pane_g3_ParamLimits

0xa2f8,	// (0x0000c5d4) signal_pane_g3

0xa30c,	// (0x0000c5e8) signal_pane_g4_ParamLimits

0xa30c,	// (0x0000c5e8) signal_pane_g4

0x8508,	// (0x0000a7e4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8508,	// (0x0000a7e4) cell_ai5_widget_list_row_pane_t3

0x8699,	// (0x0000a975) cell_ituss_key_pane_t1_ParamLimits

0x8699,	// (0x0000a975) cell_ituss_key_pane_t1

0x15d9,	// (0x000038b5) form_field_data_wide_pane_vc_t2_ParamLimits

0x15d9,	// (0x000038b5) form_field_data_wide_pane_vc_t2

0x15ed,	// (0x000038c9) form_field_data_wide_pane_vc_t3_ParamLimits

0x15ed,	// (0x000038c9) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e9,	// (0x00011ac5) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e9,	// (0x00011ac5) form_field_data_wide_pane_vc_t

0x397e,	// (0x00005c5a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x397e,	// (0x00005c5a) form_field_slider_wide_pane_vc_t3

0x3a5c,	// (0x00005d38) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3a5c,	// (0x00005d38) form_field_popup_wide_pane_vc_t2

0x3a73,	// (0x00005d4f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3a73,	// (0x00005d4f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8c,	// (0x00011d68) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8c,	// (0x00011d68) form_field_popup_wide_pane_vc_t

0xde25,	// (0x00010101) aid_fshwr2_btn_pane_ParamLimits

0xde39,	// (0x00010115) aid_fshwr2_syb_pane_ParamLimits

0xde4d,	// (0x00010129) aid_fshwr2_txt_pane_ParamLimits

0xeac7,	// (0x00010da3) fshwr2_bg_pane_ParamLimits

0xde5d,	// (0x00010139) fshwr2_func_candi_pane_ParamLimits

0xde7d,	// (0x00010159) fshwr2_hwr_syb_pane_ParamLimits

0xde9f,	// (0x0001017b) fshwr2_icf_pane_ParamLimits

0x38ef,	// (0x00005bcb) list_double_graphic_pane_vc_g4_ParamLimits

0x38ef,	// (0x00005bcb) list_double_graphic_pane_vc_g4

0x868d,	// (0x0000a969) cell_ituss_key_pane_g3_ParamLimits

0x868d,	// (0x0000a969) cell_ituss_key_pane_g3

0x8747,	// (0x0000aa23) cell_ituss_key_t5_ParamLimits

0x8747,	// (0x0000aa23) cell_ituss_key_t5

0xe3a3,	// (0x0001067f) popup_fep_vkbss_window_ParamLimits

0x7826,	// (0x00009b02) aid_cell_ai5_quarter

0xe467,	// (0x00010743) icf_edit_indi_pane_t1_ParamLimits

0x97da,	// (0x0000bab6) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x97da,	// (0x0000bab6) aid_tch_indicator_popup_pane_cp2

0x97ed,	// (0x0000bac9) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x97ed,	// (0x0000bac9) aid_tch_query_popup_data_pane_cp2

0x1987,	// (0x00003c63) aid_tch_query_popup_pane_ParamLimits

0x1987,	// (0x00003c63) aid_tch_query_popup_pane

0x1987,	// (0x00003c63) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x1987,	// (0x00003c63) aid_tch_query_popup_data_pane_cp1

0x7ec8,	// (0x0000a1a4) cell_fshwr2_syb_bg_pane_ParamLimits

0xdfb5,	// (0x00010291) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xdfc8,	// (0x000102a4) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe394,	// (0x00010670) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal

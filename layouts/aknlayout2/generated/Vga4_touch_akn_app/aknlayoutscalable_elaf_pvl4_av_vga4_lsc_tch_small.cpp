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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002657c };

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
0x98ee,	// (0x0002fe6a) Screen

0x9902,	// (0x0002fe7e) application_window_ParamLimits

0x9902,	// (0x0002fe7e) application_window

0x991c,	// (0x0002fe98) screen_g1

0x994e,	// (0x0002feca) area_bottom_pane_ParamLimits

0x994e,	// (0x0002feca) area_bottom_pane

0xf07e,	// (0x000355fa) area_top_pane_ParamLimits

0xf07e,	// (0x000355fa) area_top_pane

0xf112,	// (0x0003568e) main_pane_ParamLimits

0xf112,	// (0x0003568e) main_pane

0x9a0c,	// (0x0002ff88) misc_graphics

0xb326,	// (0x000318a2) battery_pane_ParamLimits

0xb326,	// (0x000318a2) battery_pane

0x30af,	// (0x0002962b) bg_status_flat_pane_g8

0x30b7,	// (0x00029633) bg_status_flat_pane_g9

0x10aa,	// (0x00027626) context_pane_ParamLimits

0x10aa,	// (0x00027626) context_pane

0xb49d,	// (0x00031a19) navi_pane_ParamLimits

0xb49d,	// (0x00031a19) navi_pane

0xb527,	// (0x00031aa3) signal_pane_ParamLimits

0xb527,	// (0x00031aa3) signal_pane

0x0008,

0xf874,	// (0x00035df0) bg_status_flat_pane_g

0xb5b7,	// (0x00031b33) status_pane_g1_ParamLimits

0xb5b7,	// (0x00031b33) status_pane_g1

0xb5cd,	// (0x00031b49) status_pane_g2_ParamLimits

0xb5cd,	// (0x00031b49) status_pane_g2

0x12eb,	// (0x00027867) status_pane_g3_ParamLimits

0x12eb,	// (0x00027867) status_pane_g3

0x0004,

0xf7a0,	// (0x00035d1c) status_pane_g_ParamLimits

0xf7a0,	// (0x00035d1c) status_pane_g

0xb5d9,	// (0x00031b55) title_pane_ParamLimits

0xb5d9,	// (0x00031b55) title_pane

0xb63c,	// (0x00031bb8) uni_indicator_pane_ParamLimits

0xb63c,	// (0x00031bb8) uni_indicator_pane

0x08cb,	// (0x00026e47) bg_list_pane_ParamLimits

0x08cb,	// (0x00026e47) bg_list_pane

0x966b,	// (0x0002fbe7) find_pane

0xab70,	// (0x000310ec) listscroll_app_pane_ParamLimits

0xab70,	// (0x000310ec) listscroll_app_pane

0x08ff,	// (0x00026e7b) listscroll_form_pane

0x9673,	// (0x0002fbef) listscroll_gen_pane_ParamLimits

0x9673,	// (0x0002fbef) listscroll_gen_pane

0x091b,	// (0x00026e97) listscroll_set_pane

0x3c4e,	// (0x0002a1ca) main_idle_act_pane

0x03c4,	// (0x00026940) main_idle_trad_pane

0x03c4,	// (0x00026940) main_list_empty_pane

0x0935,	// (0x00026eb1) main_midp_pane

0x0941,	// (0x00026ebd) main_pane_g1_ParamLimits

0x0941,	// (0x00026ebd) main_pane_g1

0xab80,	// (0x000310fc) popup_ai_message_window_ParamLimits

0xab80,	// (0x000310fc) popup_ai_message_window

0xac20,	// (0x0003119c) popup_fep_china_uni_window_ParamLimits

0xac20,	// (0x0003119c) popup_fep_china_uni_window

0x0a63,	// (0x00026fdf) popup_fep_japan_candidate_window_ParamLimits

0x0a63,	// (0x00026fdf) popup_fep_japan_candidate_window

0x0a8d,	// (0x00027009) popup_fep_japan_predictive_window_ParamLimits

0x0a8d,	// (0x00027009) popup_fep_japan_predictive_window

0xac80,	// (0x000311fc) popup_find_window

0xac9d,	// (0x00031219) popup_grid_graphic_window_ParamLimits

0xac9d,	// (0x00031219) popup_grid_graphic_window

0x0afe,	// (0x0002707a) popup_large_graphic_colour_window

0xad41,	// (0x000312bd) popup_menu_window_ParamLimits

0xad41,	// (0x000312bd) popup_menu_window

0xaf31,	// (0x000314ad) popup_note_image_window

0xaef1,	// (0x0003146d) popup_note_wait_window_ParamLimits

0xaef1,	// (0x0003146d) popup_note_wait_window

0xaf49,	// (0x000314c5) popup_note_window_ParamLimits

0xaf49,	// (0x000314c5) popup_note_window

0xaff7,	// (0x00031573) popup_query_code_window_ParamLimits

0xaff7,	// (0x00031573) popup_query_code_window

0x0d6a,	// (0x000272e6) popup_query_data_code_window_ParamLimits

0x0d6a,	// (0x000272e6) popup_query_data_code_window

0xb037,	// (0x000315b3) popup_query_data_window_ParamLimits

0xb037,	// (0x000315b3) popup_query_data_window

0xb0cb,	// (0x00031647) popup_query_sat_info_window_ParamLimits

0xb0cb,	// (0x00031647) popup_query_sat_info_window

0xb176,	// (0x000316f2) popup_snote_single_graphic_window_ParamLimits

0xb176,	// (0x000316f2) popup_snote_single_graphic_window

0xb176,	// (0x000316f2) popup_snote_single_text_window_ParamLimits

0xb176,	// (0x000316f2) popup_snote_single_text_window

0x0e05,	// (0x00027381) popup_sub_window_general

0x0f4b,	// (0x000274c7) popup_window_general_ParamLimits

0x0f4b,	// (0x000274c7) popup_window_general

0x0f64,	// (0x000274e0) power_save_pane

0xa9de,	// (0x00030f5a) control_pane_g1_ParamLimits

0xa9de,	// (0x00030f5a) control_pane_g1

0xaa07,	// (0x00030f83) control_pane_g2_ParamLimits

0xaa07,	// (0x00030f83) control_pane_g2

0x0778,	// (0x00026cf4) control_pane_g3_ParamLimits

0x0778,	// (0x00026cf4) control_pane_g3

0x0007,

0xf788,	// (0x00035d04) control_pane_g_ParamLimits

0xf788,	// (0x00035d04) control_pane_g

0xaa69,	// (0x00030fe5) control_pane_t1_ParamLimits

0xaa69,	// (0x00030fe5) control_pane_t1

0xaac7,	// (0x00031043) control_pane_t2_ParamLimits

0xaac7,	// (0x00031043) control_pane_t2

0x0002,

0xf799,	// (0x00035d15) control_pane_t_ParamLimits

0xf799,	// (0x00035d15) control_pane_t

0xa937,	// (0x00030eb3) navi_navi_volume_pane_cp1

0xa93f,	// (0x00030ebb) status_small_icon_pane

0x065f,	// (0x00026bdb) status_small_pane_g1_ParamLimits

0x065f,	// (0x00026bdb) status_small_pane_g1

0xa947,	// (0x00030ec3) status_small_pane_g2_ParamLimits

0xa947,	// (0x00030ec3) status_small_pane_g2

0xa953,	// (0x00030ecf) status_small_pane_g3_ParamLimits

0xa953,	// (0x00030ecf) status_small_pane_g3

0xa95f,	// (0x00030edb) status_small_pane_g4_ParamLimits

0xa95f,	// (0x00030edb) status_small_pane_g4

0xa96b,	// (0x00030ee7) status_small_pane_g5_ParamLimits

0xa96b,	// (0x00030ee7) status_small_pane_g5

0xa979,	// (0x00030ef5) status_small_pane_g6_ParamLimits

0xa979,	// (0x00030ef5) status_small_pane_g6

0x0007,

0xf777,	// (0x00035cf3) status_small_pane_g_ParamLimits

0xf777,	// (0x00035cf3) status_small_pane_g

0xa9a8,	// (0x00030f24) status_small_pane_t1

0xa9ca,	// (0x00030f46) status_small_wait_pane_ParamLimits

0xa9ca,	// (0x00030f46) status_small_wait_pane

0xa702,	// (0x00030c7e) aid_levels_signal_ParamLimits

0xa702,	// (0x00030c7e) aid_levels_signal

0xa71a,	// (0x00030c96) signal_pane_g1_ParamLimits

0xa71a,	// (0x00030c96) signal_pane_g1

0xa735,	// (0x00030cb1) signal_pane_g2_ParamLimits

0xa735,	// (0x00030cb1) signal_pane_g2

0x0003,

0xf708,	// (0x00035c84) signal_pane_g_ParamLimits

0xf708,	// (0x00035c84) signal_pane_g

0xcfe4,	// (0x00033560) context_pane_g1

0x9b44,	// (0x000300c0) title_pane_g1

0x9b87,	// (0x00030103) title_pane_t1

0x9c13,	// (0x0003018f) title_pane_t2

0x9c39,	// (0x000301b5) title_pane_t3

0x0002,

0xf557,	// (0x00035ad3) title_pane_t

0xb664,	// (0x00031be0) aid_levels_battery_ParamLimits

0xb664,	// (0x00031be0) aid_levels_battery

0xb680,	// (0x00031bfc) battery_pane_g1_ParamLimits

0xb680,	// (0x00031bfc) battery_pane_g1

0xb69d,	// (0x00031c19) battery_pane_g2_ParamLimits

0xb69d,	// (0x00031c19) battery_pane_g2

0x0001,

0xf7ab,	// (0x00035d27) battery_pane_g_ParamLimits

0xf7ab,	// (0x00035d27) battery_pane_g

0xbb2c,	// (0x000320a8) uni_indicator_pane_g1

0xbb42,	// (0x000320be) uni_indicator_pane_g2

0xbb58,	// (0x000320d4) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x00035e98) uni_indicator_pane_g

0xd292,	// (0x0003380e) navi_icon_pane_ParamLimits

0xd292,	// (0x0003380e) navi_icon_pane

0xd216,	// (0x00033792) navi_midp_pane

0xd2ae,	// (0x0003382a) navi_navi_pane

0xd2b8,	// (0x00033834) navi_text_pane_ParamLimits

0xd2b8,	// (0x00033834) navi_text_pane

0x991c,	// (0x0002fe98) status_small_wait_pane_g1

0xa11c,	// (0x00030698) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00035e93) status_small_wait_pane_g

0xba93,	// (0x0003200f) navi_navi_icon_text_pane

0xba9b,	// (0x00032017) navi_navi_pane_g1_ParamLimits

0xba9b,	// (0x00032017) navi_navi_pane_g1

0xbaad,	// (0x00032029) navi_navi_pane_g2_ParamLimits

0xbaad,	// (0x00032029) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00035e61) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00035e61) navi_navi_pane_g

0x3738,	// (0x00029cb4) navi_navi_tabs_pane

0xbabf,	// (0x0003203b) navi_navi_text_pane

0xba93,	// (0x0003200f) navi_navi_volume_pane

0xba81,	// (0x00031ffd) navi_text_pane_t1

0xba75,	// (0x00031ff1) navi_icon_pane_g1

0x362f,	// (0x00029bab) navi_navi_text_pane_t1

0xba50,	// (0x00031fcc) navi_navi_volume_pane_g1

0xba58,	// (0x00031fd4) volume_small_pane

0xb9ac,	// (0x00031f28) navi_navi_icon_text_pane_g1

0xb9b4,	// (0x00031f30) navi_navi_icon_text_pane_t1

0xd2ae,	// (0x0003382a) navi_tabs_2_long_pane

0xd2ae,	// (0x0003382a) navi_tabs_2_pane

0xd2ae,	// (0x0003382a) navi_tabs_3_long_pane

0xd2ae,	// (0x0003382a) navi_tabs_3_pane

0xd2ae,	// (0x0003382a) navi_tabs_4_pane

0xb96a,	// (0x00031ee6) tabs_2_active_pane_ParamLimits

0xb96a,	// (0x00031ee6) tabs_2_active_pane

0xb97a,	// (0x00031ef6) tabs_2_passive_pane_ParamLimits

0xb97a,	// (0x00031ef6) tabs_2_passive_pane

0xb938,	// (0x00031eb4) tabs_3_active_pane_ParamLimits

0xb938,	// (0x00031eb4) tabs_3_active_pane

0xb948,	// (0x00031ec4) tabs_3_passive_pane_ParamLimits

0xb948,	// (0x00031ec4) tabs_3_passive_pane

0xb959,	// (0x00031ed5) tabs_3_passive_pane_cp_ParamLimits

0xb959,	// (0x00031ed5) tabs_3_passive_pane_cp

0xb8f4,	// (0x00031e70) tabs_4_active_pane_ParamLimits

0xb8f4,	// (0x00031e70) tabs_4_active_pane

0xb905,	// (0x00031e81) tabs_4_passive_pane_ParamLimits

0xb905,	// (0x00031e81) tabs_4_passive_pane

0xb916,	// (0x00031e92) tabs_4_passive_pane_cp_ParamLimits

0xb916,	// (0x00031e92) tabs_4_passive_pane_cp

0xb927,	// (0x00031ea3) tabs_4_passive_pane_cp2_ParamLimits

0xb927,	// (0x00031ea3) tabs_4_passive_pane_cp2

0xb8d0,	// (0x00031e4c) tabs_2_long_active_pane_ParamLimits

0xb8d0,	// (0x00031e4c) tabs_2_long_active_pane

0xb8e2,	// (0x00031e5e) tabs_2_long_passive_pane_ParamLimits

0xb8e2,	// (0x00031e5e) tabs_2_long_passive_pane

0xb885,	// (0x00031e01) tabs_3_long_active_pane_ParamLimits

0xb885,	// (0x00031e01) tabs_3_long_active_pane

0xb89e,	// (0x00031e1a) tabs_3_long_passive_pane_ParamLimits

0xb89e,	// (0x00031e1a) tabs_3_long_passive_pane

0xb8b7,	// (0x00031e33) tabs_3_long_passive_pane_cp_ParamLimits

0xb8b7,	// (0x00031e33) tabs_3_long_passive_pane_cp

0x18bb,	// (0x00027e37) volume_small_pane_g1

0xb834,	// (0x00031db0) volume_small_pane_g2

0xb83d,	// (0x00031db9) volume_small_pane_g3

0xb846,	// (0x00031dc2) volume_small_pane_g4

0xb84f,	// (0x00031dcb) volume_small_pane_g5

0xb858,	// (0x00031dd4) volume_small_pane_g6

0xb861,	// (0x00031ddd) volume_small_pane_g7

0xb86a,	// (0x00031de6) volume_small_pane_g8

0xb873,	// (0x00031def) volume_small_pane_g9

0xb87c,	// (0x00031df8) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00035e2d) volume_small_pane_g

0x9c4b,	// (0x000301c7) bg_active_tab_pane_cp2_ParamLimits

0x9c4b,	// (0x000301c7) bg_active_tab_pane_cp2

0x9c59,	// (0x000301d5) tabs_3_active_pane_g1

0x9c61,	// (0x000301dd) tabs_3_active_pane_t1

0x9c4b,	// (0x000301c7) bg_passive_tab_pane_cp2_ParamLimits

0x9c4b,	// (0x000301c7) bg_passive_tab_pane_cp2

0x9c59,	// (0x000301d5) tabs_3_passive_pane_g1

0x9c61,	// (0x000301dd) tabs_3_passive_pane_t1

0x9c4b,	// (0x000301c7) bg_active_tab_pane_cp3_ParamLimits

0x9c4b,	// (0x000301c7) bg_active_tab_pane_cp3

0x9c73,	// (0x000301ef) tabs_4_active_pane_g1

0x9c7b,	// (0x000301f7) tabs_4_active_pane_t1

0x9c4b,	// (0x000301c7) bg_passive_tab_pane_cp3_ParamLimits

0x9c4b,	// (0x000301c7) bg_passive_tab_pane_cp3

0x9c73,	// (0x000301ef) tabs_4_1_passive_pane_g1

0x9c7b,	// (0x000301f7) tabs_4_1_passive_pane_t1

0x0935,	// (0x00026eb1) list_highlight_pane_cp2

0xbbed,	// (0x00032169) list_set_pane_ParamLimits

0xbbed,	// (0x00032169) list_set_pane

0xbcb5,	// (0x00032231) main_pane_set_t1_ParamLimits

0xbcb5,	// (0x00032231) main_pane_set_t1

0xbcd5,	// (0x00032251) main_pane_set_t2_ParamLimits

0xbcd5,	// (0x00032251) main_pane_set_t2

0xbce9,	// (0x00032265) main_pane_set_t3_ParamLimits

0xbce9,	// (0x00032265) main_pane_set_t3

0xbcfd,	// (0x00032279) main_pane_set_t4_ParamLimits

0xbcfd,	// (0x00032279) main_pane_set_t4

0x0003,

0xf981,	// (0x00035efd) main_pane_set_t_ParamLimits

0xf981,	// (0x00035efd) main_pane_set_t

0xbd11,	// (0x0003228d) setting_code_pane

0x3da2,	// (0x0002a31e) setting_slider_graphic_pane

0x3da2,	// (0x0002a31e) setting_slider_pane

0x3da2,	// (0x0002a31e) setting_text_pane

0x3da2,	// (0x0002a31e) setting_volume_pane

0xf221,	// (0x0003579d) volume_set_pane

0x9c8d,	// (0x00030209) bg_set_opt_pane_cp

0xf22b,	// (0x000357a7) setting_slider_pane_t1

0xf244,	// (0x000357c0) setting_slider_pane_t2

0xf25e,	// (0x000357da) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00035ada) setting_slider_pane_t

0xf276,	// (0x000357f2) slider_set_pane

0x9a0c,	// (0x0002ff88) bg_set_opt_pane_cp2

0x9c9b,	// (0x00030217) setting_slider_graphic_pane_g1

0xf28c,	// (0x00035808) setting_slider_graphic_pane_t1

0xf29c,	// (0x00035818) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00035ae1) setting_slider_graphic_pane_t

0xf2ac,	// (0x00035828) slider_set_pane_cp

0x9a0c,	// (0x0002ff88) input_focus_pane_cp1

0x3c35,	// (0x0002a1b1) list_set_text_pane

0x991c,	// (0x0002fe98) setting_text_pane_g1

0x9a0c,	// (0x0002ff88) input_focus_pane_cp2

0x991c,	// (0x0002fe98) setting_code_pane_g1

0x9ca4,	// (0x00030220) setting_code_pane_t1

0xe814,	// (0x00034d90) set_text_pane_t1_ParamLimits

0xe814,	// (0x00034d90) set_text_pane_t1

0xcb06,	// (0x00033082) set_opt_bg_pane_g1

0xcb0e,	// (0x0003308a) set_opt_bg_pane_g2

0x3c0d,	// (0x0002a189) set_opt_bg_pane_g3

0xcb1e,	// (0x0003309a) set_opt_bg_pane_g4

0xcb26,	// (0x000330a2) set_opt_bg_pane_g5

0xcb2e,	// (0x000330aa) set_opt_bg_pane_g6

0x3c17,	// (0x0002a193) set_opt_bg_pane_g7

0x3c21,	// (0x0002a19d) set_opt_bg_pane_g8

0x3c2b,	// (0x0002a1a7) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00035eea) set_opt_bg_pane_g

0x3c00,	// (0x0002a17c) slider_set_pane_g1

0x1a9f,	// (0x0002801b) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00035edb) slider_set_pane_g

0x1a27,	// (0x00027fa3) volume_set_pane_g1

0x1a31,	// (0x00027fad) volume_set_pane_g2

0x1a3b,	// (0x00027fb7) volume_set_pane_g3

0x1a45,	// (0x00027fc1) volume_set_pane_g4

0x1a4f,	// (0x00027fcb) volume_set_pane_g5

0x1a59,	// (0x00027fd5) volume_set_pane_g6

0x1a63,	// (0x00027fdf) volume_set_pane_g7

0x1a6d,	// (0x00027fe9) volume_set_pane_g8

0x1a77,	// (0x00027ff3) volume_set_pane_g9

0x1a81,	// (0x00027ffd) volume_set_pane_g10

0x0009,

0xf937,	// (0x00035eb3) volume_set_pane_g

0x9cb2,	// (0x0003022e) indicator_pane_ParamLimits

0x9cb2,	// (0x0003022e) indicator_pane

0x9cde,	// (0x0003025a) main_idle_pane_g2_ParamLimits

0x9cde,	// (0x0003025a) main_idle_pane_g2

0x9d16,	// (0x00030292) main_pane_idle_g1_ParamLimits

0x9d16,	// (0x00030292) main_pane_idle_g1

0x9d44,	// (0x000302c0) popup_clock_digital_analogue_window_ParamLimits

0x9d44,	// (0x000302c0) popup_clock_digital_analogue_window

0x9d5b,	// (0x000302d7) soft_indicator_pane_ParamLimits

0x9d5b,	// (0x000302d7) soft_indicator_pane

0x9d77,	// (0x000302f3) wallpaper_pane_ParamLimits

0x9d77,	// (0x000302f3) wallpaper_pane

0x991c,	// (0x0002fe98) wallpaper_pane_g1

0x9d91,	// (0x0003030d) indicator_pane_g1_ParamLimits

0x9d91,	// (0x0003030d) indicator_pane_g1

0x407e,	// (0x0002a5fa) navi_navi_icon_text_pane_srt_g1

0x9db9,	// (0x00030335) soft_indicator_pane_t1

0x9dd3,	// (0x0003034f) aid_ps_area_pane

0x9de4,	// (0x00030360) aid_ps_clock_pane

0x9df2,	// (0x0003036e) aid_ps_indicator_pane

0x9dfe,	// (0x0003037a) indicator_ps_pane_ParamLimits

0x9dfe,	// (0x0003037a) indicator_ps_pane

0x9e0d,	// (0x00030389) power_save_pane_g1_ParamLimits

0x9e0d,	// (0x00030389) power_save_pane_g1

0x9e19,	// (0x00030395) power_save_pane_g2_ParamLimits

0x9e19,	// (0x00030395) power_save_pane_g2

0xf05e,	// (0x000355da) aid_navinavi_width_pane

0x9dd3,	// (0x0003034f) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00035ae6) power_save_pane_g_ParamLimits

0xf56a,	// (0x00035ae6) power_save_pane_g

0x9e27,	// (0x000303a3) power_save_pane_t1_ParamLimits

0x9e27,	// (0x000303a3) power_save_pane_t1

0x9de4,	// (0x00030360) aid_ps_clock_pane_ParamLimits

0x9df2,	// (0x0003036e) aid_ps_indicator_pane_ParamLimits

0x9e39,	// (0x000303b5) power_save_pane_t4_ParamLimits

0x9e39,	// (0x000303b5) power_save_pane_t4

0x0001,

0xf56f,	// (0x00035aeb) power_save_pane_t_ParamLimits

0xf56f,	// (0x00035aeb) power_save_pane_t

0x9e63,	// (0x000303df) power_save_t3_ParamLimits

0x9e63,	// (0x000303df) power_save_t3

0x9e4e,	// (0x000303ca) power_save_t2_ParamLimits

0x9e4e,	// (0x000303ca) power_save_t2

0x9e78,	// (0x000303f4) indicator_ps_pane_g1

0x9e81,	// (0x000303fd) ai_gene_pane_ParamLimits

0x9e81,	// (0x000303fd) ai_gene_pane

0x9e98,	// (0x00030414) ai_links_pane_ParamLimits

0x9e98,	// (0x00030414) ai_links_pane

0x9eb0,	// (0x0003042c) indicator_pane_cp1_ParamLimits

0x9eb0,	// (0x0003042c) indicator_pane_cp1

0x9ebf,	// (0x0003043b) main_pane_idle_g1_cp_ParamLimits

0x9ebf,	// (0x0003043b) main_pane_idle_g1_cp

0x9ed7,	// (0x00030453) popup_ai_links_title_window

0x9ee0,	// (0x0003045c) soft_indicator_pane_cp1_ParamLimits

0x9ee0,	// (0x0003045c) soft_indicator_pane_cp1

0x39e7,	// (0x00029f63) ai_links_pane_g1

0x39f0,	// (0x00029f6c) grid_ai_links_pane

0xbb23,	// (0x0003209f) ai_gene_pane_1

0x39d5,	// (0x00029f51) ai_gene_pane_2

0x39de,	// (0x00029f5a) list_highlight_pane_cp4

0xbaff,	// (0x0003207b) cell_ai_link_pane_ParamLimits

0xbaff,	// (0x0003207b) cell_ai_link_pane

0x39a4,	// (0x00029f20) cell_ai_link_pane_g1

0xa11c,	// (0x00030698) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x00035e8e) cell_ai_link_pane_g

0x9a0c,	// (0x0002ff88) grid_highlight_cp2

0x9a0c,	// (0x0002ff88) bg_popup_sub_pane_cp1

0x9f02,	// (0x0003047e) popup_ai_links_title_window_t1

0x38f0,	// (0x00029e6c) ai_gene_pane_1_g1_ParamLimits

0x38f0,	// (0x00029e6c) ai_gene_pane_1_g1

0x38fc,	// (0x00029e78) ai_gene_pane_1_g2_ParamLimits

0x38fc,	// (0x00029e78) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00035e84) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00035e84) ai_gene_pane_1_g

0x3909,	// (0x00029e85) ai_gene_pane_1_t1_ParamLimits

0x3909,	// (0x00029e85) ai_gene_pane_1_t1

0x393d,	// (0x00029eb9) grid_ai_soft_ind_pane

0x38db,	// (0x00029e57) ai_gene_pane_2_t1_ParamLimits

0x38db,	// (0x00029e57) ai_gene_pane_2_t1

0x9f11,	// (0x0003048d) main_pane_empty_t1_ParamLimits

0x9f11,	// (0x0003048d) main_pane_empty_t1

0x9f29,	// (0x000304a5) main_pane_empty_t2_ParamLimits

0x9f29,	// (0x000304a5) main_pane_empty_t2

0x9f3e,	// (0x000304ba) main_pane_empty_t3_ParamLimits

0x9f3e,	// (0x000304ba) main_pane_empty_t3

0x9f50,	// (0x000304cc) main_pane_empty_t4_ParamLimits

0x9f50,	// (0x000304cc) main_pane_empty_t4

0x9f62,	// (0x000304de) main_pane_empty_t5_ParamLimits

0x9f62,	// (0x000304de) main_pane_empty_t5

0x0004,

0xf574,	// (0x00035af0) main_pane_empty_t_ParamLimits

0xf574,	// (0x00035af0) main_pane_empty_t

0xcb57,	// (0x000330d3) bg_popup_window_pane_ParamLimits

0xcb57,	// (0x000330d3) bg_popup_window_pane

0x363d,	// (0x00029bb9) find_popup_pane_cp2_ParamLimits

0x363d,	// (0x00029bb9) find_popup_pane_cp2

0x3649,	// (0x00029bc5) heading_pane_ParamLimits

0x3649,	// (0x00029bc5) heading_pane

0x9a0c,	// (0x0002ff88) bg_popup_sub_pane

0xb9d1,	// (0x00031f4d) bg_popup_window_pane_g1_ParamLimits

0xb9d1,	// (0x00031f4d) bg_popup_window_pane_g1

0xb9e0,	// (0x00031f5c) bg_popup_window_pane_g2_ParamLimits

0xb9e0,	// (0x00031f5c) bg_popup_window_pane_g2

0xb9ec,	// (0x00031f68) bg_popup_window_pane_g3_ParamLimits

0xb9ec,	// (0x00031f68) bg_popup_window_pane_g3

0xb9f8,	// (0x00031f74) bg_popup_window_pane_g4_ParamLimits

0xb9f8,	// (0x00031f74) bg_popup_window_pane_g4

0xba07,	// (0x00031f83) bg_popup_window_pane_g5_ParamLimits

0xba07,	// (0x00031f83) bg_popup_window_pane_g5

0xba17,	// (0x00031f93) bg_popup_window_pane_g6_ParamLimits

0xba17,	// (0x00031f93) bg_popup_window_pane_g6

0xba23,	// (0x00031f9f) bg_popup_window_pane_g7_ParamLimits

0xba23,	// (0x00031f9f) bg_popup_window_pane_g7

0xba32,	// (0x00031fae) bg_popup_window_pane_g8_ParamLimits

0xba32,	// (0x00031fae) bg_popup_window_pane_g8

0xba41,	// (0x00031fbd) bg_popup_window_pane_g9_ParamLimits

0xba41,	// (0x00031fbd) bg_popup_window_pane_g9

0x3623,	// (0x00029b9f) bg_popup_window_pane_g10_ParamLimits

0x3623,	// (0x00029b9f) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x00035e4c) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x00035e4c) bg_popup_window_pane_g

0x354c,	// (0x00029ac8) bg_popup_heading_pane_ParamLimits

0x354c,	// (0x00029ac8) bg_popup_heading_pane

0x1b27,	// (0x000280a3) tabs_4_passive_pane_cp_srt_ParamLimits

0x1b27,	// (0x000280a3) tabs_4_passive_pane_cp_srt

0x1b39,	// (0x000280b5) tabs_4_passive_pane_srt_ParamLimits

0x3560,	// (0x00029adc) heading_pane_g2

0x1b39,	// (0x000280b5) tabs_4_passive_pane_srt

0x1591,	// (0x00027b0d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1591,	// (0x00027b0d) bg_passive_tab_pane_cp3_srt

0x3568,	// (0x00029ae4) heading_pane_t1_ParamLimits

0x3568,	// (0x00029ae4) heading_pane_t1

0x357f,	// (0x00029afb) heading_pane_t2_ParamLimits

0x357f,	// (0x00029afb) heading_pane_t2

0x0001,

0xf8cb,	// (0x00035e47) heading_pane_t_ParamLimits

0xf8cb,	// (0x00035e47) heading_pane_t

0x3077,	// (0x000295f3) bg_popup_heading_pane_g1

0x3126,	// (0x000296a2) bg_popup_heading_pane_g2

0x3130,	// (0x000296ac) bg_popup_heading_pane_g3

0x313a,	// (0x000296b6) bg_popup_heading_pane_g4

0x3144,	// (0x000296c0) bg_popup_heading_pane_g5

0x314e,	// (0x000296ca) bg_popup_heading_pane_g6

0x3156,	// (0x000296d2) bg_popup_heading_pane_g7

0x315e,	// (0x000296da) bg_popup_heading_pane_g8

0x3168,	// (0x000296e4) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00035e03) bg_popup_heading_pane_g

0x14a6,	// (0x00027a22) bg_popup_sub_pane_g1

0x14ae,	// (0x00027a2a) bg_popup_sub_pane_g2

0x14b6,	// (0x00027a32) bg_popup_sub_pane_g3

0x14be,	// (0x00027a3a) bg_popup_sub_pane_g4

0x14c6,	// (0x00027a42) bg_popup_sub_pane_g5

0x14ce,	// (0x00027a4a) bg_popup_sub_pane_g6

0x14d6,	// (0x00027a52) bg_popup_sub_pane_g7

0x14de,	// (0x00027a5a) bg_popup_sub_pane_g8

0x14e6,	// (0x00027a62) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00035ddd) bg_popup_sub_pane_g

0x9c4b,	// (0x000301c7) bg_popup_window_pane_cp5_ParamLimits

0x9c4b,	// (0x000301c7) bg_popup_window_pane_cp5

0x9f82,	// (0x000304fe) popup_note_window_g1_ParamLimits

0x9f82,	// (0x000304fe) popup_note_window_g1

0x9f8e,	// (0x0003050a) popup_note_window_t1_ParamLimits

0x9f8e,	// (0x0003050a) popup_note_window_t1

0x9fa4,	// (0x00030520) popup_note_window_t2_ParamLimits

0x9fa4,	// (0x00030520) popup_note_window_t2

0x9fba,	// (0x00030536) popup_note_window_t3_ParamLimits

0x9fba,	// (0x00030536) popup_note_window_t3

0x9fd0,	// (0x0003054c) popup_note_window_t4_ParamLimits

0x9fd0,	// (0x0003054c) popup_note_window_t4

0x9ff8,	// (0x00030574) popup_note_window_t5_ParamLimits

0x9ff8,	// (0x00030574) popup_note_window_t5

0x0004,

0xf57f,	// (0x00035afb) popup_note_window_t_ParamLimits

0xf57f,	// (0x00035afb) popup_note_window_t

0xa01c,	// (0x00030598) bg_popup_window_pane_cp6_ParamLimits

0xa01c,	// (0x00030598) bg_popup_window_pane_cp6

0x2ff3,	// (0x0002956f) popup_note_image_window_g1_ParamLimits

0x2ff3,	// (0x0002956f) popup_note_image_window_g1

0x2fff,	// (0x0002957b) popup_note_image_window_g2_ParamLimits

0x2fff,	// (0x0002957b) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00035dd1) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00035dd1) popup_note_image_window_g

0x3018,	// (0x00029594) popup_note_image_window_t1_ParamLimits

0x3018,	// (0x00029594) popup_note_image_window_t1

0x3031,	// (0x000295ad) popup_note_image_window_t2_ParamLimits

0x3031,	// (0x000295ad) popup_note_image_window_t2

0x304a,	// (0x000295c6) popup_note_image_window_t3_ParamLimits

0x304a,	// (0x000295c6) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00035dd6) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00035dd6) popup_note_image_window_t

0x2eb3,	// (0x0002942f) bg_popup_window_pane_cp7_ParamLimits

0x2eb3,	// (0x0002942f) bg_popup_window_pane_cp7

0x2ee3,	// (0x0002945f) popup_note_wait_window_g1_ParamLimits

0x2ee3,	// (0x0002945f) popup_note_wait_window_g1

0x2eef,	// (0x0002946b) popup_note_wait_window_g2_ParamLimits

0x2eef,	// (0x0002946b) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00035dbf) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00035dbf) popup_note_wait_window_g

0x2f07,	// (0x00029483) popup_note_wait_window_t1_ParamLimits

0x2f07,	// (0x00029483) popup_note_wait_window_t1

0x2f2e,	// (0x000294aa) popup_note_wait_window_t2_ParamLimits

0x2f2e,	// (0x000294aa) popup_note_wait_window_t2

0x2f4c,	// (0x000294c8) popup_note_wait_window_t3_ParamLimits

0x2f4c,	// (0x000294c8) popup_note_wait_window_t3

0x2f5f,	// (0x000294db) popup_note_wait_window_t4_ParamLimits

0x2f5f,	// (0x000294db) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00035dc6) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00035dc6) popup_note_wait_window_t

0x2f84,	// (0x00029500) wait_bar_pane_ParamLimits

0x2f84,	// (0x00029500) wait_bar_pane

0x9a0c,	// (0x0002ff88) wait_anim_pane

0x9a0c,	// (0x0002ff88) wait_border_pane

0x991c,	// (0x0002fe98) wait_anim_pane_g1

0x991c,	// (0x0002fe98) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00035c7f) wait_anim_pane_g

0x2e57,	// (0x000293d3) wait_border_pane_g1

0x2e62,	// (0x000293de) wait_border_pane_g2

0x2e6b,	// (0x000293e7) wait_border_pane_g3

0x0002,

0xf83c,	// (0x00035db8) wait_border_pane_g

0x2cc1,	// (0x0002923d) bg_popup_window_pane_cp16_ParamLimits

0x2cc1,	// (0x0002923d) bg_popup_window_pane_cp16

0x2dc1,	// (0x0002933d) indicator_popup_pane_cp4_ParamLimits

0x2dc1,	// (0x0002933d) indicator_popup_pane_cp4

0x2dd5,	// (0x00029351) popup_query_data_window_t1_ParamLimits

0x2dd5,	// (0x00029351) popup_query_data_window_t1

0x2de7,	// (0x00029363) popup_query_data_window_t2_ParamLimits

0x2de7,	// (0x00029363) popup_query_data_window_t2

0x2e00,	// (0x0002937c) popup_query_data_window_t3_ParamLimits

0x2e00,	// (0x0002937c) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00035db1) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00035db1) popup_query_data_window_t

0x2e1a,	// (0x00029396) query_popup_data_pane_ParamLimits

0x2e1a,	// (0x00029396) query_popup_data_pane

0x2e2e,	// (0x000293aa) query_popup_data_pane_cp1_ParamLimits

0x2e2e,	// (0x000293aa) query_popup_data_pane_cp1

0x2cc1,	// (0x0002923d) bg_popup_window_pane_cp10_ParamLimits

0x2cc1,	// (0x0002923d) bg_popup_window_pane_cp10

0x2cf3,	// (0x0002926f) indicator_popup_pane_ParamLimits

0x2cf3,	// (0x0002926f) indicator_popup_pane

0x2d15,	// (0x00029291) popup_query_code_window_t1_ParamLimits

0x2d15,	// (0x00029291) popup_query_code_window_t1

0x2d2f,	// (0x000292ab) popup_query_code_window_t2_ParamLimits

0x2d2f,	// (0x000292ab) popup_query_code_window_t2

0x2d78,	// (0x000292f4) popup_query_code_window_t3_ParamLimits

0x2d78,	// (0x000292f4) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x00035daa) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x00035daa) popup_query_code_window_t

0x2da7,	// (0x00029323) query_popup_pane_ParamLimits

0x2da7,	// (0x00029323) query_popup_pane

0xa01c,	// (0x00030598) bg_popup_window_pane_cp15_ParamLimits

0xa01c,	// (0x00030598) bg_popup_window_pane_cp15

0xa03c,	// (0x000305b8) indicator_popup_pane_cp1_ParamLimits

0xa03c,	// (0x000305b8) indicator_popup_pane_cp1

0xa04f,	// (0x000305cb) indicator_popup_pane_cp2_ParamLimits

0xa04f,	// (0x000305cb) indicator_popup_pane_cp2

0xa06a,	// (0x000305e6) popup_query_data_code_window_g1_ParamLimits

0xa06a,	// (0x000305e6) popup_query_data_code_window_g1

0xa07d,	// (0x000305f9) popup_query_data_code_window_t1_ParamLimits

0xa07d,	// (0x000305f9) popup_query_data_code_window_t1

0xa08f,	// (0x0003060b) popup_query_data_code_window_t2_ParamLimits

0xa08f,	// (0x0003060b) popup_query_data_code_window_t2

0xa0a1,	// (0x0003061d) popup_query_data_code_window_t3_ParamLimits

0xa0a1,	// (0x0003061d) popup_query_data_code_window_t3

0xa0b7,	// (0x00030633) popup_query_data_code_window_t4_ParamLimits

0xa0b7,	// (0x00030633) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00035b06) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00035b06) popup_query_data_code_window_t

0xd262,	// (0x000337de) list_single_midp_graphic_pane_g3

0xa0d1,	// (0x0003064d) query_popup_data_pane_cp2_ParamLimits

0xa0e4,	// (0x00030660) query_popup_pane_cp2_ParamLimits

0xa0e4,	// (0x00030660) query_popup_pane_cp2

0x9a0c,	// (0x0002ff88) bg_popup_window_pane_cp11

0x2cb9,	// (0x00029235) heading_pane_cp5

0xa1d4,	// (0x00030750) listscroll_popup_info_pane

0x9a0c,	// (0x0002ff88) input_focus_pane_cp3

0xa0ff,	// (0x0003067b) query_popup_pane_t1

0xa10d,	// (0x00030689) list_popup_info_pane_ParamLimits

0xa10d,	// (0x00030689) list_popup_info_pane

0xa11c,	// (0x00030698) listscroll_popup_info_pane_g1

0xa124,	// (0x000306a0) scroll_pane_cp7

0xa12e,	// (0x000306aa) popup_info_list_pane_t1_ParamLimits

0xa12e,	// (0x000306aa) popup_info_list_pane_t1

0xa148,	// (0x000306c4) popup_info_list_pane_t2_ParamLimits

0xa148,	// (0x000306c4) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00035b0f) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00035b0f) popup_info_list_pane_t

0x9a0c,	// (0x0002ff88) bg_popup_window_pane_cp12

0x4098,	// (0x0002a614) find_popup_pane

0x9c8d,	// (0x00030209) bg_popup_window_pane_cp3

0xa162,	// (0x000306de) heading_pane_cp3

0xa16e,	// (0x000306ea) listscroll_popup_graphic_pane

0x9a0c,	// (0x0002ff88) bg_popup_window_pane_cp4

0xa1ca,	// (0x00030746) heading_pane_cp4

0xa1d4,	// (0x00030750) listscroll_popup_colour_pane

0xa1dc,	// (0x00030758) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa1dc,	// (0x00030758) cell_large_graphic_colour_none_popup_pane

0xa1f0,	// (0x0003076c) grid_large_graphic_colour_popup_pane_ParamLimits

0xa1f0,	// (0x0003076c) grid_large_graphic_colour_popup_pane

0xa214,	// (0x00030790) listscroll_popup_colour_pane_g1_ParamLimits

0xa214,	// (0x00030790) listscroll_popup_colour_pane_g1

0xa22b,	// (0x000307a7) listscroll_popup_colour_pane_g2_ParamLimits

0xa22b,	// (0x000307a7) listscroll_popup_colour_pane_g2

0xa242,	// (0x000307be) listscroll_popup_colour_pane_g3_ParamLimits

0xa242,	// (0x000307be) listscroll_popup_colour_pane_g3

0xa252,	// (0x000307ce) listscroll_popup_colour_pane_g4_ParamLimits

0xa252,	// (0x000307ce) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00035b14) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00035b14) listscroll_popup_colour_pane_g

0xa262,	// (0x000307de) scroll_pane_cp6_ParamLimits

0xa262,	// (0x000307de) scroll_pane_cp6

0xa274,	// (0x000307f0) cell_large_graphic_colour_popup_pane_ParamLimits

0xa274,	// (0x000307f0) cell_large_graphic_colour_popup_pane

0xa295,	// (0x00030811) cell_large_graphic_colour_none_popup_pane_t1

0x9a0c,	// (0x0002ff88) grid_highlight_pane_cp5

0xa2a4,	// (0x00030820) cell_large_graphic_colour_popup_pane_g1

0xa2ac,	// (0x00030828) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00035b1d) cell_large_graphic_colour_popup_pane_g

0xa2b4,	// (0x00030830) cell_large_graphic_colour_popup_pane_g2_copy1

0xa2bd,	// (0x00030839) grid_highlight_pane_cp4

0xa2c5,	// (0x00030841) bg_popup_window_pane_cp8_ParamLimits

0xa2c5,	// (0x00030841) bg_popup_window_pane_cp8

0xa2e0,	// (0x0003085c) popup_snote_single_text_window_g1_ParamLimits

0xa2e0,	// (0x0003085c) popup_snote_single_text_window_g1

0xa2f2,	// (0x0003086e) popup_snote_single_text_window_t1_ParamLimits

0xa2f2,	// (0x0003086e) popup_snote_single_text_window_t1

0xa305,	// (0x00030881) popup_snote_single_text_window_t2_ParamLimits

0xa305,	// (0x00030881) popup_snote_single_text_window_t2

0xa318,	// (0x00030894) popup_snote_single_text_window_t3_ParamLimits

0xa318,	// (0x00030894) popup_snote_single_text_window_t3

0xa351,	// (0x000308cd) popup_snote_single_text_window_t4_ParamLimits

0xa351,	// (0x000308cd) popup_snote_single_text_window_t4

0xa385,	// (0x00030901) popup_snote_single_text_window_t5_ParamLimits

0xa385,	// (0x00030901) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00035b22) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00035b22) popup_snote_single_text_window_t

0xa3b4,	// (0x00030930) bg_popup_window_pane_cp9_ParamLimits

0xa3b4,	// (0x00030930) bg_popup_window_pane_cp9

0xa2e0,	// (0x0003085c) popup_snote_single_graphic_window_g1_ParamLimits

0xa2e0,	// (0x0003085c) popup_snote_single_graphic_window_g1

0xa3c2,	// (0x0003093e) popup_snote_single_graphic_window_g2_ParamLimits

0xa3c2,	// (0x0003093e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00035b2d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00035b2d) popup_snote_single_graphic_window_g

0xa3ce,	// (0x0003094a) popup_snote_single_graphic_window_t1_ParamLimits

0xa3ce,	// (0x0003094a) popup_snote_single_graphic_window_t1

0xa3e1,	// (0x0003095d) popup_snote_single_graphic_window_t2_ParamLimits

0xa3e1,	// (0x0003095d) popup_snote_single_graphic_window_t2

0xa3f4,	// (0x00030970) popup_snote_single_graphic_window_t3_ParamLimits

0xa3f4,	// (0x00030970) popup_snote_single_graphic_window_t3

0xa42d,	// (0x000309a9) popup_snote_single_graphic_window_t4_ParamLimits

0xa42d,	// (0x000309a9) popup_snote_single_graphic_window_t4

0xa461,	// (0x000309dd) popup_snote_single_graphic_window_t5_ParamLimits

0xa461,	// (0x000309dd) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00035b32) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00035b32) popup_snote_single_graphic_window_t

0x3fd6,	// (0x0002a552) grid_graphic_popup_pane_ParamLimits

0x3fd6,	// (0x0002a552) grid_graphic_popup_pane

0x4004,	// (0x0002a580) listscroll_popup_graphic_pane_g1_ParamLimits

0x4004,	// (0x0002a580) listscroll_popup_graphic_pane_g1

0xbe2a,	// (0x000323a6) listscroll_popup_graphic_pane_g2_ParamLimits

0xbe2a,	// (0x000323a6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x00035f27) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x00035f27) listscroll_popup_graphic_pane_g

0x402c,	// (0x0002a5a8) scroll_pane_cp5

0xbde9,	// (0x00032365) cell_graphic_popup_pane_ParamLimits

0xbde9,	// (0x00032365) cell_graphic_popup_pane

0x3f5f,	// (0x0002a4db) cell_graphic_popup_pane_g1

0x3f67,	// (0x0002a4e3) cell_graphic_popup_pane_g2

0xa2b4,	// (0x00030830) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00035f20) cell_graphic_popup_pane_g

0x3f70,	// (0x0002a4ec) cell_graphic_popup_pane_t2

0xa2bd,	// (0x00030839) grid_highlight_pane_cp3

0xa4a2,	// (0x00030a1e) list_gen_pane_ParamLimits

0xa4a2,	// (0x00030a1e) list_gen_pane

0xa4d4,	// (0x00030a50) scroll_pane

0xbda0,	// (0x0003231c) bg_list_pane_g1_ParamLimits

0xbda0,	// (0x0003231c) bg_list_pane_g1

0x3ed4,	// (0x0002a450) bg_list_pane_g2_ParamLimits

0x3ed4,	// (0x0002a450) bg_list_pane_g2

0x3ee9,	// (0x0002a465) bg_list_pane_g3_ParamLimits

0x3ee9,	// (0x0002a465) bg_list_pane_g3

0x3efd,	// (0x0002a479) bg_list_pane_g4_ParamLimits

0x3efd,	// (0x0002a479) bg_list_pane_g4

0xbdbd,	// (0x00032339) bg_list_pane_g5_ParamLimits

0xbdbd,	// (0x00032339) bg_list_pane_g5

0x0004,

0xf999,	// (0x00035f15) bg_list_pane_g_ParamLimits

0xf999,	// (0x00035f15) bg_list_pane_g

0xbd4f,	// (0x000322cb) list_double2_graphic_large_graphic_pane_ParamLimits

0xbd4f,	// (0x000322cb) list_double2_graphic_large_graphic_pane

0xbd4f,	// (0x000322cb) list_double2_graphic_pane_ParamLimits

0xbd4f,	// (0x000322cb) list_double2_graphic_pane

0xbd4f,	// (0x000322cb) list_double2_large_graphic_pane_ParamLimits

0xbd4f,	// (0x000322cb) list_double2_large_graphic_pane

0xbd63,	// (0x000322df) list_double2_pane_ParamLimits

0xbd63,	// (0x000322df) list_double2_pane

0xbd4f,	// (0x000322cb) list_double_graphic_heading_pane_ParamLimits

0xbd4f,	// (0x000322cb) list_double_graphic_heading_pane

0xbd4f,	// (0x000322cb) list_double_graphic_pane_ParamLimits

0xbd4f,	// (0x000322cb) list_double_graphic_pane

0xbd4f,	// (0x000322cb) list_double_heading_pane_ParamLimits

0xbd4f,	// (0x000322cb) list_double_heading_pane

0xbd4f,	// (0x000322cb) list_double_large_graphic_pane_ParamLimits

0xbd4f,	// (0x000322cb) list_double_large_graphic_pane

0xbd4f,	// (0x000322cb) list_double_number_pane_ParamLimits

0xbd4f,	// (0x000322cb) list_double_number_pane

0xbd4f,	// (0x000322cb) list_double_pane_ParamLimits

0xbd4f,	// (0x000322cb) list_double_pane

0xbd4f,	// (0x000322cb) list_double_time_pane_ParamLimits

0xbd4f,	// (0x000322cb) list_double_time_pane

0xbd4f,	// (0x000322cb) list_setting_number_pane_ParamLimits

0xbd4f,	// (0x000322cb) list_setting_number_pane

0xbd4f,	// (0x000322cb) list_setting_pane_ParamLimits

0xbd4f,	// (0x000322cb) list_setting_pane

0x96e5,	// (0x0002fc61) list_single_2graphic_pane_ParamLimits

0x96e5,	// (0x0002fc61) list_single_2graphic_pane

0x96e5,	// (0x0002fc61) list_single_graphic_heading_pane_ParamLimits

0x96e5,	// (0x0002fc61) list_single_graphic_heading_pane

0x96e5,	// (0x0002fc61) list_single_graphic_pane_ParamLimits

0x96e5,	// (0x0002fc61) list_single_graphic_pane

0x96e5,	// (0x0002fc61) list_single_heading_pane_ParamLimits

0x96e5,	// (0x0002fc61) list_single_heading_pane

0xbd63,	// (0x000322df) list_single_large_graphic_pane_ParamLimits

0xbd63,	// (0x000322df) list_single_large_graphic_pane

0x96e5,	// (0x0002fc61) list_single_number_heading_pane_ParamLimits

0x96e5,	// (0x0002fc61) list_single_number_heading_pane

0x96e5,	// (0x0002fc61) list_single_number_pane_ParamLimits

0x96e5,	// (0x0002fc61) list_single_number_pane

0x96e5,	// (0x0002fc61) list_single_pane_ParamLimits

0x96e5,	// (0x0002fc61) list_single_pane

0x9a0c,	// (0x0002ff88) list_highlight_pane_cp1

0xe82f,	// (0x00034dab) list_single_pane_g1_ParamLimits

0xe82f,	// (0x00034dab) list_single_pane_g1

0xe83b,	// (0x00034db7) list_single_pane_g2_ParamLimits

0xe83b,	// (0x00034db7) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00035b44) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00035b44) list_single_pane_g

0xeb0a,	// (0x00035086) list_single_pane_t1_ParamLimits

0xeb0a,	// (0x00035086) list_single_pane_t1

0xe82f,	// (0x00034dab) list_single_number_pane_g1_ParamLimits

0xe82f,	// (0x00034dab) list_single_number_pane_g1

0xe83b,	// (0x00034db7) list_single_number_pane_g2_ParamLimits

0xe83b,	// (0x00034db7) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00035b44) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00035b44) list_single_number_pane_g

0xea33,	// (0x00034faf) list_single_number_pane_t1_ParamLimits

0xea33,	// (0x00034faf) list_single_number_pane_t1

0x96a7,	// (0x0002fc23) list_single_number_pane_t2_ParamLimits

0x96a7,	// (0x0002fc23) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00035ed6) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00035ed6) list_single_number_pane_t

0x9024,	// (0x0002f5a0) list_single_graphic_pane_g1_ParamLimits

0x9024,	// (0x0002f5a0) list_single_graphic_pane_g1

0xe82f,	// (0x00034dab) list_single_graphic_pane_g2_ParamLimits

0xe82f,	// (0x00034dab) list_single_graphic_pane_g2

0xe83b,	// (0x00034db7) list_single_graphic_pane_g3_ParamLimits

0xe83b,	// (0x00034db7) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00035b3d) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00035b3d) list_single_graphic_pane_g

0x9030,	// (0x0002f5ac) list_single_graphic_pane_t1_ParamLimits

0x9030,	// (0x0002f5ac) list_single_graphic_pane_t1

0xe82f,	// (0x00034dab) list_single_heading_pane_g1_ParamLimits

0xe82f,	// (0x00034dab) list_single_heading_pane_g1

0xe83b,	// (0x00034db7) list_single_heading_pane_g2_ParamLimits

0xe83b,	// (0x00034db7) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00035b44) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00035b44) list_single_heading_pane_g

0x9046,	// (0x0002f5c2) list_single_heading_pane_t1_ParamLimits

0x9046,	// (0x0002f5c2) list_single_heading_pane_t1

0x905c,	// (0x0002f5d8) list_single_heading_pane_t2_ParamLimits

0x905c,	// (0x0002f5d8) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00035b49) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00035b49) list_single_heading_pane_t

0xe82f,	// (0x00034dab) list_single_number_heading_pane_g1_ParamLimits

0xe82f,	// (0x00034dab) list_single_number_heading_pane_g1

0xe83b,	// (0x00034db7) list_single_number_heading_pane_g2_ParamLimits

0xe83b,	// (0x00034db7) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00035b44) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00035b44) list_single_number_heading_pane_g

0x9046,	// (0x0002f5c2) list_single_number_heading_pane_t1_ParamLimits

0x9046,	// (0x0002f5c2) list_single_number_heading_pane_t1

0x906e,	// (0x0002f5ea) list_single_number_heading_pane_t2_ParamLimits

0x906e,	// (0x0002f5ea) list_single_number_heading_pane_t2

0xe847,	// (0x00034dc3) list_single_number_heading_pane_t3_ParamLimits

0xe847,	// (0x00034dc3) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00035b4e) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00035b4e) list_single_number_heading_pane_t

0xe859,	// (0x00034dd5) list_single_graphic_heading_pane_g1_ParamLimits

0xe859,	// (0x00034dd5) list_single_graphic_heading_pane_g1

0x9080,	// (0x0002f5fc) list_single_graphic_heading_pane_g4_ParamLimits

0x9080,	// (0x0002f5fc) list_single_graphic_heading_pane_g4

0xe83b,	// (0x00034db7) list_single_graphic_heading_pane_g5_ParamLimits

0xe83b,	// (0x00034db7) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00035b55) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00035b55) list_single_graphic_heading_pane_g

0x9046,	// (0x0002f5c2) list_single_graphic_heading_pane_t1_ParamLimits

0x9046,	// (0x0002f5c2) list_single_graphic_heading_pane_t1

0x9091,	// (0x0002f60d) list_single_graphic_heading_pane_t2_ParamLimits

0x9091,	// (0x0002f60d) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00035b5c) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00035b5c) list_single_graphic_heading_pane_t

0xe865,	// (0x00034de1) list_single_large_graphic_pane_g1_ParamLimits

0xe865,	// (0x00034de1) list_single_large_graphic_pane_g1

0xe871,	// (0x00034ded) list_single_large_graphic_pane_g2_ParamLimits

0xe871,	// (0x00034ded) list_single_large_graphic_pane_g2

0xe87d,	// (0x00034df9) list_single_large_graphic_pane_g3_ParamLimits

0xe87d,	// (0x00034df9) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00035b61) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00035b61) list_single_large_graphic_pane_g

0x2e62,	// (0x000293de) wait_border_pane_g2_copy1

0x90a3,	// (0x0002f61f) list_single_large_graphic_pane_g4_cp2

0xe889,	// (0x00034e05) list_single_large_graphic_pane_t1_ParamLimits

0xe889,	// (0x00034e05) list_single_large_graphic_pane_t1

0x90ab,	// (0x0002f627) list_double_pane_g1_ParamLimits

0x90ab,	// (0x0002f627) list_double_pane_g1

0x90b7,	// (0x0002f633) list_double_pane_g2_ParamLimits

0x90b7,	// (0x0002f633) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00035b68) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00035b68) list_double_pane_g

0x90c3,	// (0x0002f63f) list_double_pane_t1_ParamLimits

0x90c3,	// (0x0002f63f) list_double_pane_t1

0x90d9,	// (0x0002f655) list_double_pane_t2_ParamLimits

0x90d9,	// (0x0002f655) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00035b6d) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00035b6d) list_double_pane_t

0x90eb,	// (0x0002f667) list_double2_pane_g1_ParamLimits

0x90eb,	// (0x0002f667) list_double2_pane_g1

0x90fc,	// (0x0002f678) list_double2_pane_g2_ParamLimits

0x90fc,	// (0x0002f678) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00035b72) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00035b72) list_double2_pane_g

0x9108,	// (0x0002f684) list_double2_pane_t1_ParamLimits

0x9108,	// (0x0002f684) list_double2_pane_t1

0x911e,	// (0x0002f69a) list_double2_pane_t2_ParamLimits

0x911e,	// (0x0002f69a) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00035b77) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00035b77) list_double2_pane_t

0x90ab,	// (0x0002f627) list_double_number_pane_g1_ParamLimits

0x90ab,	// (0x0002f627) list_double_number_pane_g1

0x90b7,	// (0x0002f633) list_double_number_pane_g2_ParamLimits

0x90b7,	// (0x0002f633) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00035b68) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00035b68) list_double_number_pane_g

0x9130,	// (0x0002f6ac) list_double_number_pane_t1_ParamLimits

0x9130,	// (0x0002f6ac) list_double_number_pane_t1

0x9142,	// (0x0002f6be) list_double_number_pane_t2_ParamLimits

0x9142,	// (0x0002f6be) list_double_number_pane_t2

0x9158,	// (0x0002f6d4) list_double_number_pane_t3_ParamLimits

0x9158,	// (0x0002f6d4) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00035b7c) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00035b7c) list_double_number_pane_t

0x916a,	// (0x0002f6e6) list_double_graphic_pane_g1_ParamLimits

0x916a,	// (0x0002f6e6) list_double_graphic_pane_g1

0x9176,	// (0x0002f6f2) list_double_graphic_pane_g2_ParamLimits

0x9176,	// (0x0002f6f2) list_double_graphic_pane_g2

0x9185,	// (0x0002f701) list_double_graphic_pane_g3_ParamLimits

0x9185,	// (0x0002f701) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00035b83) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00035b83) list_double_graphic_pane_g

0x919d,	// (0x0002f719) list_double_graphic_pane_t1_ParamLimits

0x919d,	// (0x0002f719) list_double_graphic_pane_t1

0x91b3,	// (0x0002f72f) list_double_graphic_pane_t2_ParamLimits

0x91b3,	// (0x0002f72f) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00035b8c) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00035b8c) list_double_graphic_pane_t

0x91c5,	// (0x0002f741) list_double2_graphic_pane_g1_ParamLimits

0x91c5,	// (0x0002f741) list_double2_graphic_pane_g1

0x91d1,	// (0x0002f74d) list_double2_graphic_pane_g2_ParamLimits

0x91d1,	// (0x0002f74d) list_double2_graphic_pane_g2

0x91dd,	// (0x0002f759) list_double2_graphic_pane_g3_ParamLimits

0x91dd,	// (0x0002f759) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00035b91) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00035b91) list_double2_graphic_pane_g

0x91e9,	// (0x0002f765) list_double2_graphic_pane_t1_ParamLimits

0x91e9,	// (0x0002f765) list_double2_graphic_pane_t1

0x91ff,	// (0x0002f77b) list_double2_graphic_pane_t2_ParamLimits

0x91ff,	// (0x0002f77b) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00035b98) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00035b98) list_double2_graphic_pane_t

0x9211,	// (0x0002f78d) list_double_large_graphic_pane_g1_ParamLimits

0x9211,	// (0x0002f78d) list_double_large_graphic_pane_g1

0x923c,	// (0x0002f7b8) list_double_large_graphic_pane_g2_ParamLimits

0x923c,	// (0x0002f7b8) list_double_large_graphic_pane_g2

0x90b7,	// (0x0002f633) list_double_large_graphic_pane_g3_ParamLimits

0x90b7,	// (0x0002f633) list_double_large_graphic_pane_g3

0x924d,	// (0x0002f7c9) list_double_large_graphic_pane_g4_ParamLimits

0x924d,	// (0x0002f7c9) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00035b9d) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00035b9d) list_double_large_graphic_pane_g

0x9260,	// (0x0002f7dc) list_double_large_graphic_pane_t1_ParamLimits

0x9260,	// (0x0002f7dc) list_double_large_graphic_pane_t1

0x9279,	// (0x0002f7f5) list_double_large_graphic_pane_t2_ParamLimits

0x9279,	// (0x0002f7f5) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00035ba8) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00035ba8) list_double_large_graphic_pane_t

0x928b,	// (0x0002f807) list_double2_large_graphic_pane_g1_ParamLimits

0x928b,	// (0x0002f807) list_double2_large_graphic_pane_g1

0x9297,	// (0x0002f813) list_double2_large_graphic_pane_g2_ParamLimits

0x9297,	// (0x0002f813) list_double2_large_graphic_pane_g2

0x92a8,	// (0x0002f824) list_double2_large_graphic_pane_g3_ParamLimits

0x92a8,	// (0x0002f824) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00035bad) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00035bad) list_double2_large_graphic_pane_g

0x92b4,	// (0x0002f830) list_double2_large_graphic_pane_t1_ParamLimits

0x92b4,	// (0x0002f830) list_double2_large_graphic_pane_t1

0x92ca,	// (0x0002f846) list_double2_large_graphic_pane_t2_ParamLimits

0x92ca,	// (0x0002f846) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00035bb4) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00035bb4) list_double2_large_graphic_pane_t

0x92dc,	// (0x0002f858) list_double_heading_pane_g1_ParamLimits

0x92dc,	// (0x0002f858) list_double_heading_pane_g1

0x92ed,	// (0x0002f869) list_double_heading_pane_g2_ParamLimits

0x92ed,	// (0x0002f869) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00035bb9) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00035bb9) list_double_heading_pane_g

0x92f9,	// (0x0002f875) list_double_heading_pane_t1_ParamLimits

0x92f9,	// (0x0002f875) list_double_heading_pane_t1

0x930f,	// (0x0002f88b) list_double_heading_pane_t2_ParamLimits

0x930f,	// (0x0002f88b) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00035bbe) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00035bbe) list_double_heading_pane_t

0x9321,	// (0x0002f89d) list_double_graphic_heading_pane_g1_ParamLimits

0x9321,	// (0x0002f89d) list_double_graphic_heading_pane_g1

0x92dc,	// (0x0002f858) list_double_graphic_heading_pane_g2_ParamLimits

0x92dc,	// (0x0002f858) list_double_graphic_heading_pane_g2

0x92ed,	// (0x0002f869) list_double_graphic_heading_pane_g3_ParamLimits

0x92ed,	// (0x0002f869) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00035bc3) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00035bc3) list_double_graphic_heading_pane_g

0x932d,	// (0x0002f8a9) list_double_graphic_heading_pane_t1_ParamLimits

0x932d,	// (0x0002f8a9) list_double_graphic_heading_pane_t1

0x91ff,	// (0x0002f77b) list_double_graphic_heading_pane_t2_ParamLimits

0x91ff,	// (0x0002f77b) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00035bca) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00035bca) list_double_graphic_heading_pane_t

0x923c,	// (0x0002f7b8) list_double_time_pane_g1_ParamLimits

0x923c,	// (0x0002f7b8) list_double_time_pane_g1

0x90b7,	// (0x0002f633) list_double_time_pane_g2_ParamLimits

0x90b7,	// (0x0002f633) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00035bcf) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00035bcf) list_double_time_pane_g

0x9343,	// (0x0002f8bf) list_double_time_pane_t1_ParamLimits

0x9343,	// (0x0002f8bf) list_double_time_pane_t1

0x9359,	// (0x0002f8d5) list_double_time_pane_t2_ParamLimits

0x9359,	// (0x0002f8d5) list_double_time_pane_t2

0x936b,	// (0x0002f8e7) list_double_time_pane_t3_ParamLimits

0x936b,	// (0x0002f8e7) list_double_time_pane_t3

0x937d,	// (0x0002f8f9) list_double_time_pane_t4_ParamLimits

0x937d,	// (0x0002f8f9) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00035bd4) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00035bd4) list_double_time_pane_t

0x938f,	// (0x0002f90b) list_setting_pane_g1_ParamLimits

0x938f,	// (0x0002f90b) list_setting_pane_g1

0x92ed,	// (0x0002f869) list_setting_pane_g2_ParamLimits

0x92ed,	// (0x0002f869) list_setting_pane_g2

0x0001,

0xf661,	// (0x00035bdd) list_setting_pane_g_ParamLimits

0xf661,	// (0x00035bdd) list_setting_pane_g

0x939b,	// (0x0002f917) list_setting_pane_t1_ParamLimits

0x939b,	// (0x0002f917) list_setting_pane_t1

0x93b2,	// (0x0002f92e) list_setting_pane_t2_ParamLimits

0x93b2,	// (0x0002f92e) list_setting_pane_t2

0x0002,

0xf666,	// (0x00035be2) list_setting_pane_t_ParamLimits

0xf666,	// (0x00035be2) list_setting_pane_t

0x93f1,	// (0x0002f96d) set_value_pane_cp_ParamLimits

0x93f1,	// (0x0002f96d) set_value_pane_cp

0x93ff,	// (0x0002f97b) list_setting_number_pane_g1_ParamLimits

0x93ff,	// (0x0002f97b) list_setting_number_pane_g1

0x940b,	// (0x0002f987) list_setting_number_pane_g2_ParamLimits

0x940b,	// (0x0002f987) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00035be9) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00035be9) list_setting_number_pane_g

0x9417,	// (0x0002f993) list_setting_number_pane_t1_ParamLimits

0x9417,	// (0x0002f993) list_setting_number_pane_t1

0x942b,	// (0x0002f9a7) list_setting_number_pane_t2_ParamLimits

0x942b,	// (0x0002f9a7) list_setting_number_pane_t2

0x9442,	// (0x0002f9be) list_setting_number_pane_t3_ParamLimits

0x9442,	// (0x0002f9be) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00035bee) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00035bee) list_setting_number_pane_t

0x93f1,	// (0x0002f96d) set_value_pane_ParamLimits

0x93f1,	// (0x0002f96d) set_value_pane

0xca52,	// (0x00032fce) bg_set_opt_pane_ParamLimits

0xca52,	// (0x00032fce) bg_set_opt_pane

0xe8b4,	// (0x00034e30) set_value_pane_t1

0xca73,	// (0x00032fef) slider_set_pane_cp3

0xca7c,	// (0x00032ff8) volume_small_pane_cp

0xca85,	// (0x00033001) list_form_gen_pane

0xca8e,	// (0x0003300a) scroll_pane_cp8

0x9485,	// (0x0002fa01) form_field_data_pane_ParamLimits

0x9485,	// (0x0002fa01) form_field_data_pane

0x94a0,	// (0x0002fa1c) form_field_data_wide_pane_ParamLimits

0x94a0,	// (0x0002fa1c) form_field_data_wide_pane

0xe8d2,	// (0x00034e4e) form_field_popup_pane_ParamLimits

0xe8d2,	// (0x00034e4e) form_field_popup_pane

0x94c2,	// (0x0002fa3e) form_field_popup_wide_pane_ParamLimits

0x94c2,	// (0x0002fa3e) form_field_popup_wide_pane

0xe8f4,	// (0x00034e70) form_field_slider_pane_ParamLimits

0xe8f4,	// (0x00034e70) form_field_slider_pane

0xe907,	// (0x00034e83) form_field_slider_wide_pane_ParamLimits

0xe907,	// (0x00034e83) form_field_slider_wide_pane

0xca9f,	// (0x0003301b) data_form_pane

0x94ed,	// (0x0002fa69) form_field_data_pane_t1

0xcaab,	// (0x00033027) input_focus_pane

0xe91a,	// (0x00034e96) data_form_wide_pane

0xe937,	// (0x00034eb3) form_field_data_wide_pane_t1

0xa2d2,	// (0x0003084e) input_focus_pane_cp6

0x9507,	// (0x0002fa83) form_field_popup_pane_t1

0xcaab,	// (0x00033027) input_focus_pane_cp7

0xcad9,	// (0x00033055) list_form_pane

0xe961,	// (0x00034edd) form_field_popup_wide_pane_t1

0xcaab,	// (0x00033027) input_focus_pane_cp8

0xcae5,	// (0x00033061) list_form_wide_pane

0x9529,	// (0x0002faa5) form_field_slider_pane_t1_ParamLimits

0x9529,	// (0x0002faa5) form_field_slider_pane_t1

0x9541,	// (0x0002fabd) form_field_slider_pane_t2_ParamLimits

0x9541,	// (0x0002fabd) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00035bfe) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00035bfe) form_field_slider_pane_t

0x9c4b,	// (0x000301c7) input_focus_pane_cp9_ParamLimits

0x9c4b,	// (0x000301c7) input_focus_pane_cp9

0x9556,	// (0x0002fad2) slider_cont_pane_ParamLimits

0x9556,	// (0x0002fad2) slider_cont_pane

0xcaf4,	// (0x00033070) form_field_slider_wide_pane_t1_ParamLimits

0xcaf4,	// (0x00033070) form_field_slider_wide_pane_t1

0xe976,	// (0x00034ef2) form_field_slider_wide_pane_t2_ParamLimits

0xe976,	// (0x00034ef2) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00035c03) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00035c03) form_field_slider_wide_pane_t

0x9c4b,	// (0x000301c7) input_focus_pane_cp10_ParamLimits

0x9c4b,	// (0x000301c7) input_focus_pane_cp10

0x956a,	// (0x0002fae6) slider_cont_pane_cp1_ParamLimits

0x956a,	// (0x0002fae6) slider_cont_pane_cp1

0x957e,	// (0x0002fafa) slider_form_pane_cp

0xcb06,	// (0x00033082) input_focus_pane_g1

0xcb0e,	// (0x0003308a) input_focus_pane_g2

0xcb16,	// (0x00033092) input_focus_pane_g3

0xcb1e,	// (0x0003309a) input_focus_pane_g4

0xcb26,	// (0x000330a2) input_focus_pane_g5

0xcb2e,	// (0x000330aa) input_focus_pane_g6

0xcb36,	// (0x000330b2) input_focus_pane_g7

0xcb3e,	// (0x000330ba) input_focus_pane_g8

0xcb46,	// (0x000330c2) input_focus_pane_g9

0x991c,	// (0x0002fe98) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00035c08) input_focus_pane_g

0x2e6b,	// (0x000293e7) wait_border_pane_g3_copy1

0x9586,	// (0x0002fb02) data_form_pane_t1

0x991c,	// (0x0002fe98) wait_anim_pane_g1_copy1

0x96b9,	// (0x0002fc35) data_form_wide_pane_t1

0xe988,	// (0x00034f04) list_form_graphic_pane_cp_ParamLimits

0xe988,	// (0x00034f04) list_form_graphic_pane_cp

0x3dca,	// (0x0002a346) slider_form_pane_g1

0x3dd3,	// (0x0002a34f) slider_form_pane_g2

0x0006,

0xf98a,	// (0x00035f06) slider_form_pane_g

0xe988,	// (0x00034f04) list_form_graphic_pane_ParamLimits

0xe988,	// (0x00034f04) list_form_graphic_pane

0xe99a,	// (0x00034f16) list_form_graphic_pane_g1

0xe9a2,	// (0x00034f1e) list_form_graphic_pane_t1_ParamLimits

0xe9a2,	// (0x00034f1e) list_form_graphic_pane_t1

0x9c8d,	// (0x00030209) list_highlight_pane_cp5_ParamLimits

0x9c8d,	// (0x00030209) list_highlight_pane_cp5

0x95a0,	// (0x0002fb1c) find_pane_g1

0xcb4e,	// (0x000330ca) input_find_pane

0x95a9,	// (0x0002fb25) input_find_pane_g1_ParamLimits

0x95a9,	// (0x0002fb25) input_find_pane_g1

0x95b5,	// (0x0002fb31) input_find_pane_t1_ParamLimits

0x95b5,	// (0x0002fb31) input_find_pane_t1

0x95ca,	// (0x0002fb46) input_find_pane_t2_ParamLimits

0x95ca,	// (0x0002fb46) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00035c1d) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00035c1d) input_find_pane_t

0xcb57,	// (0x000330d3) input_focus_pane_cp5_ParamLimits

0xcb57,	// (0x000330d3) input_focus_pane_cp5

0xcb65,	// (0x000330e1) bg_popup_window_pane_cp2_ParamLimits

0xcb65,	// (0x000330e1) bg_popup_window_pane_cp2

0xcb72,	// (0x000330ee) listscroll_menu_pane_ParamLimits

0xcb72,	// (0x000330ee) listscroll_menu_pane

0xa514,	// (0x00030a90) popup_submenu_window_ParamLimits

0xa514,	// (0x00030a90) popup_submenu_window

0xcb7e,	// (0x000330fa) find_popup_pane_g1

0xcb86,	// (0x00033102) input_popup_find_pane_cp

0xcb57,	// (0x000330d3) input_focus_pane_cp4_ParamLimits

0xcb57,	// (0x000330d3) input_focus_pane_cp4

0xcb90,	// (0x0003310c) input_popup_find_pane_t1_ParamLimits

0xcb90,	// (0x0003310c) input_popup_find_pane_t1

0x9a0c,	// (0x0002ff88) bg_popup_sub_pane_cp

0xcbbe,	// (0x0003313a) listscroll_popup_sub_pane

0xcbc6,	// (0x00033142) list_submenu_pane_ParamLimits

0xcbc6,	// (0x00033142) list_submenu_pane

0xcbd7,	// (0x00033153) scroll_pane_cp4

0xcbdf,	// (0x0003315b) list_single_popup_submenu_pane_ParamLimits

0xcbdf,	// (0x0003315b) list_single_popup_submenu_pane

0xcbf4,	// (0x00033170) list_single_popup_submenu_pane_g1

0xcbfc,	// (0x00033178) list_single_popup_submenu_pane_t1_ParamLimits

0xcbfc,	// (0x00033178) list_single_popup_submenu_pane_t1

0x9c4b,	// (0x000301c7) bg_active_tab_pane_cp1_ParamLimits

0x9c4b,	// (0x000301c7) bg_active_tab_pane_cp1

0xa552,	// (0x00030ace) tabs_2_active_pane_g1

0xa55a,	// (0x00030ad6) tabs_2_active_pane_t1

0x9c4b,	// (0x000301c7) bg_passive_tab_pane_cp1_ParamLimits

0x9c4b,	// (0x000301c7) bg_passive_tab_pane_cp1

0xa552,	// (0x00030ace) tabs_2_passive_pane_g1

0xa55a,	// (0x00030ad6) tabs_2_passive_pane_t1

0x9c8d,	// (0x00030209) bg_active_tab_pane_cp4

0xa56c,	// (0x00030ae8) tabs_2_long_active_pane_t1

0x0935,	// (0x00026eb1) bg_passive_tab_pane_cp4

0x1513,	// (0x00027a8f) list_single_midp_graphic_pane_g4_ParamLimits

0x9c8d,	// (0x00030209) bg_active_tab_pane_cp5

0xa57f,	// (0x00030afb) tabs_3_long_active_pane_t1

0x0935,	// (0x00026eb1) bg_passive_tab_pane_cp5

0x1513,	// (0x00027a8f) list_single_midp_graphic_pane_g4

0x9c8d,	// (0x00030209) bg_popup_window_pane_cp13_ParamLimits

0x9c8d,	// (0x00030209) bg_popup_window_pane_cp13

0xcc1a,	// (0x00033196) listscroll_popup_fast_pane_ParamLimits

0xcc1a,	// (0x00033196) listscroll_popup_fast_pane

0xcc29,	// (0x000331a5) grid_popup_fast_pane_ParamLimits

0xcc29,	// (0x000331a5) grid_popup_fast_pane

0xcc3b,	// (0x000331b7) scroll_pane_cp9_ParamLimits

0xcc3b,	// (0x000331b7) scroll_pane_cp9

0x574b,	// (0x0002bcc7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x574b,	// (0x0002bcc7) list_single_graphic_hl_pane_t1_cp2

0xcc5f,	// (0x000331db) input_focus_pane_cp20_ParamLimits

0xcc5f,	// (0x000331db) input_focus_pane_cp20

0xcc6d,	// (0x000331e9) query_popup_data_pane_t1_ParamLimits

0xcc6d,	// (0x000331e9) query_popup_data_pane_t1

0xcc80,	// (0x000331fc) query_popup_data_pane_t2_ParamLimits

0xcc80,	// (0x000331fc) query_popup_data_pane_t2

0xccc6,	// (0x00033242) query_popup_data_pane_t3_ParamLimits

0xccc6,	// (0x00033242) query_popup_data_pane_t3

0xcd07,	// (0x00033283) query_popup_data_pane_t4_ParamLimits

0xcd07,	// (0x00033283) query_popup_data_pane_t4

0xcd43,	// (0x000332bf) query_popup_data_pane_t5_ParamLimits

0xcd43,	// (0x000332bf) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00035c22) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00035c22) query_popup_data_pane_t

0xcb06,	// (0x00033082) bg_set_opt_pane_g1

0xcb0e,	// (0x0003308a) bg_set_opt_pane_g2

0xcb16,	// (0x00033092) bg_set_opt_pane_g3

0xcb1e,	// (0x0003309a) bg_set_opt_pane_g4

0xcb26,	// (0x000330a2) bg_set_opt_pane_g5

0xcb2e,	// (0x000330aa) bg_set_opt_pane_g6

0xcb36,	// (0x000330b2) bg_set_opt_pane_g7

0xcb3e,	// (0x000330ba) bg_set_opt_pane_g8

0xcb46,	// (0x000330c2) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00035c2d) bg_set_opt_pane_g

0x00e1,	// (0x0002665d) control_top_pane_stacon_ParamLimits

0x00e1,	// (0x0002665d) control_top_pane_stacon

0x0134,	// (0x000266b0) signal_pane_stacon_ParamLimits

0x0134,	// (0x000266b0) signal_pane_stacon

0xd15a,	// (0x000336d6) stacon_top_pane_g1_ParamLimits

0xd15a,	// (0x000336d6) stacon_top_pane_g1

0x0159,	// (0x000266d5) title_pane_stacon_ParamLimits

0x0159,	// (0x000266d5) title_pane_stacon

0x0183,	// (0x000266ff) uni_indicator_pane_stacon_ParamLimits

0x0183,	// (0x000266ff) uni_indicator_pane_stacon

0x019b,	// (0x00026717) battery_pane_stacon_ParamLimits

0x019b,	// (0x00026717) battery_pane_stacon

0x01df,	// (0x0002675b) control_bottom_pane_stacon_ParamLimits

0x01df,	// (0x0002675b) control_bottom_pane_stacon

0x0202,	// (0x0002677e) navi_pane_stacon_ParamLimits

0x0202,	// (0x0002677e) navi_pane_stacon

0xd17c,	// (0x000336f8) stacon_bottom_pane_g1_ParamLimits

0xd17c,	// (0x000336f8) stacon_bottom_pane_g1

0xf313,	// (0x0003588f) aid_levels_signal_lsc_ParamLimits

0xf313,	// (0x0003588f) aid_levels_signal_lsc

0xf32a,	// (0x000358a6) signal_pane_stacon_g1_ParamLimits

0xf32a,	// (0x000358a6) signal_pane_stacon_g1

0xf33e,	// (0x000358ba) signal_pane_stacon_g2_ParamLimits

0xf33e,	// (0x000358ba) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00035c40) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00035c40) signal_pane_stacon_g

0xf373,	// (0x000358ef) title_pane_stacon_t1_ParamLimits

0xf373,	// (0x000358ef) title_pane_stacon_t1

0xcd87,	// (0x00033303) uni_indicator_pane_stacon_g1

0xcd91,	// (0x0003330d) uni_indicator_pane_stacon_g2

0xcd9b,	// (0x00033317) uni_indicator_pane_stacon_g3

0xcda5,	// (0x00033321) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00035c4c) uni_indicator_pane_stacon_g

0xf398,	// (0x00035914) control_top_pane_stacon_g1

0xf3a0,	// (0x0003591c) control_top_pane_stacon_t1_ParamLimits

0xf3a0,	// (0x0003591c) control_top_pane_stacon_t1

0xf3d7,	// (0x00035953) aid_levels_battery_lsc_ParamLimits

0xf3d7,	// (0x00035953) aid_levels_battery_lsc

0xf3ef,	// (0x0003596b) battery_pane_stacon_g1_ParamLimits

0xf3ef,	// (0x0003596b) battery_pane_stacon_g1

0xf402,	// (0x0003597e) battery_pane_stacon_g2_ParamLimits

0xf402,	// (0x0003597e) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00035c55) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00035c55) battery_pane_stacon_g

0xf440,	// (0x000359bc) navi_icon_pane_stacon

0xf454,	// (0x000359d0) navi_navi_pane_stacon

0xf440,	// (0x000359bc) navi_text_pane_stacon

0xf398,	// (0x00035914) control_bottom_pane_stacon_g1

0xf46a,	// (0x000359e6) control_bottom_pane_stacon_t1_ParamLimits

0xf46a,	// (0x000359e6) control_bottom_pane_stacon_t1

0xa591,	// (0x00030b0d) grid_app_pane_ParamLimits

0xa591,	// (0x00030b0d) grid_app_pane

0xa5c9,	// (0x00030b45) scroll_pane_cp15_ParamLimits

0xa5c9,	// (0x00030b45) scroll_pane_cp15

0xa5de,	// (0x00030b5a) cell_app_pane_ParamLimits

0xa5de,	// (0x00030b5a) cell_app_pane

0xa62b,	// (0x00030ba7) cell_app_pane_g1_ParamLimits

0xa62b,	// (0x00030ba7) cell_app_pane_g1

0xcdc9,	// (0x00033345) cell_app_pane_g2_ParamLimits

0xcdc9,	// (0x00033345) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00035c5a) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00035c5a) cell_app_pane_g

0xcdd5,	// (0x00033351) cell_app_pane_t1_ParamLimits

0xcdd5,	// (0x00033351) cell_app_pane_t1

0xcdec,	// (0x00033368) grid_highlight_pane_ParamLimits

0xcdec,	// (0x00033368) grid_highlight_pane

0xcb06,	// (0x00033082) cell_highlight_pane_g1

0xcb0e,	// (0x0003308a) cell_highlight_pane_g2

0xcb16,	// (0x00033092) cell_highlight_pane_g3

0xcb1e,	// (0x0003309a) cell_highlight_pane_g4

0xcb26,	// (0x000330a2) cell_highlight_pane_g5

0xcb2e,	// (0x000330aa) cell_highlight_pane_g6

0xcb36,	// (0x000330b2) cell_highlight_pane_g7

0xcb3e,	// (0x000330ba) cell_highlight_pane_g8

0xcb46,	// (0x000330c2) cell_highlight_pane_g9

0x991c,	// (0x0002fe98) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00035c08) cell_highlight_pane_g

0xcdfd,	// (0x00033379) bg_scroll_pane

0xf4ab,	// (0x00035a27) scroll_handle_pane

0xce44,	// (0x000333c0) scroll_bg_pane_g1

0xce59,	// (0x000333d5) scroll_bg_pane_g2

0xce71,	// (0x000333ed) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00035c5f) scroll_bg_pane_g

0xce86,	// (0x00033402) scroll_handle_focus_pane_ParamLimits

0xce86,	// (0x00033402) scroll_handle_focus_pane

0xce44,	// (0x000333c0) scroll_handle_pane_g1

0xce93,	// (0x0003340f) scroll_handle_pane_g2

0xce71,	// (0x000333ed) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00035c66) scroll_handle_pane_g

0xcb57,	// (0x000330d3) bg_popup_sub_pane_cp21_ParamLimits

0xcb57,	// (0x000330d3) bg_popup_sub_pane_cp21

0xcea7,	// (0x00033423) popup_fep_japan_predictive_window_t1_ParamLimits

0xcea7,	// (0x00033423) popup_fep_japan_predictive_window_t1

0xcebe,	// (0x0003343a) popup_fep_japan_predictive_window_t2_ParamLimits

0xcebe,	// (0x0003343a) popup_fep_japan_predictive_window_t2

0xcef1,	// (0x0003346d) popup_fep_japan_predictive_window_t3_ParamLimits

0xcef1,	// (0x0003346d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00035c6d) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00035c6d) popup_fep_japan_predictive_window_t

0x9a0c,	// (0x0002ff88) bg_popup_sub_pane_cp23

0xcf28,	// (0x000334a4) listscroll_japin_cand_pane

0xcf30,	// (0x000334ac) popup_fep_japan_candidate_window_t1

0xcf3e,	// (0x000334ba) candidate_pane_ParamLimits

0xcf3e,	// (0x000334ba) candidate_pane

0xcf50,	// (0x000334cc) scroll_pane_cp30

0xcf5a,	// (0x000334d6) list_single_popup_jap_candidate_pane_ParamLimits

0xcf5a,	// (0x000334d6) list_single_popup_jap_candidate_pane

0x9a0c,	// (0x0002ff88) list_highlight_pane_cp30

0xcf6e,	// (0x000334ea) list_single_popup_jap_candidate_pane_t1

0xa654,	// (0x00030bd0) level_1_signal

0xa666,	// (0x00030be2) level_2_signal

0xa679,	// (0x00030bf5) level_3_signal

0xa68c,	// (0x00030c08) level_4_signal

0xa69f,	// (0x00030c1b) level_5_signal

0xa6b2,	// (0x00030c2e) level_6_signal

0xa6c5,	// (0x00030c41) level_7_signal

0xa654,	// (0x00030bd0) level_1_battery

0xa666,	// (0x00030be2) level_2_battery

0xa679,	// (0x00030bf5) level_3_battery

0xa68c,	// (0x00030c08) level_4_battery

0xa69f,	// (0x00030c1b) level_5_battery

0xa6b2,	// (0x00030c2e) level_6_battery

0xa6c5,	// (0x00030c41) level_7_battery

0xcf95,	// (0x00033511) list_menu_pane_ParamLimits

0xcf95,	// (0x00033511) list_menu_pane

0xcfab,	// (0x00033527) scroll_pane_cp25_ParamLimits

0xcfab,	// (0x00033527) scroll_pane_cp25

0xcfc4,	// (0x00033540) list_double2_graphic_pane_cp2_ParamLimits

0xcfc4,	// (0x00033540) list_double2_graphic_pane_cp2

0xcfc4,	// (0x00033540) list_double2_large_graphic_pane_cp2_ParamLimits

0xcfc4,	// (0x00033540) list_double2_large_graphic_pane_cp2

0xcfc4,	// (0x00033540) list_double2_pane_cp2_ParamLimits

0xcfc4,	// (0x00033540) list_double2_pane_cp2

0xcfc4,	// (0x00033540) list_double_graphic_pane_cp2_ParamLimits

0xcfc4,	// (0x00033540) list_double_graphic_pane_cp2

0xcfc4,	// (0x00033540) list_double_large_graphic_pane_cp2_ParamLimits

0xcfc4,	// (0x00033540) list_double_large_graphic_pane_cp2

0xcfc4,	// (0x00033540) list_double_number_pane_cp2_ParamLimits

0xcfc4,	// (0x00033540) list_double_number_pane_cp2

0xcfc4,	// (0x00033540) list_double_pane_cp2_ParamLimits

0xcfc4,	// (0x00033540) list_double_pane_cp2

0xa6eb,	// (0x00030c67) list_single_2graphic_pane_cp2_ParamLimits

0xa6eb,	// (0x00030c67) list_single_2graphic_pane_cp2

0xa6eb,	// (0x00030c67) list_single_graphic_heading_pane_cp2_ParamLimits

0xa6eb,	// (0x00030c67) list_single_graphic_heading_pane_cp2

0xa6eb,	// (0x00030c67) list_single_graphic_pane_cp2_ParamLimits

0xa6eb,	// (0x00030c67) list_single_graphic_pane_cp2

0xa6eb,	// (0x00030c67) list_single_heading_pane_cp2_ParamLimits

0xa6eb,	// (0x00030c67) list_single_heading_pane_cp2

0xcfd4,	// (0x00033550) list_single_large_graphic_pane_cp2_ParamLimits

0xcfd4,	// (0x00033550) list_single_large_graphic_pane_cp2

0xa6eb,	// (0x00030c67) list_single_number_heading_pane_cp2_ParamLimits

0xa6eb,	// (0x00030c67) list_single_number_heading_pane_cp2

0xa6eb,	// (0x00030c67) list_single_number_pane_cp2_ParamLimits

0xa6eb,	// (0x00030c67) list_single_number_pane_cp2

0xa6eb,	// (0x00030c67) list_single_pane_cp2_ParamLimits

0xa6eb,	// (0x00030c67) list_single_pane_cp2

0xcfed,	// (0x00033569) bg_popup_sub_pane_cp22

0x0045,	// (0x000265c1) popup_side_volume_key_window_g1

0x006f,	// (0x000265eb) popup_side_volume_key_window_t1

0x008d,	// (0x00026609) volume_small_pane_cp1

0x9c4b,	// (0x000301c7) bg_popup_sub_pane_cp24_ParamLimits

0x9c4b,	// (0x000301c7) bg_popup_sub_pane_cp24

0xd003,	// (0x0003357f) fep_china_uni_candidate_pane_ParamLimits

0xd003,	// (0x0003357f) fep_china_uni_candidate_pane

0xd017,	// (0x00033593) fep_china_uni_entry_pane

0xd027,	// (0x000335a3) popup_fep_china_uni_window_g1

0xd043,	// (0x000335bf) fep_china_uni_entry_pane_g1

0xd04d,	// (0x000335c9) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00035c9e) fep_china_uni_entry_pane_g

0xd057,	// (0x000335d3) fep_entry_item_pane

0xd061,	// (0x000335dd) fep_candidate_item_pane

0xd069,	// (0x000335e5) fep_china_uni_candidate_pane_g1

0xd073,	// (0x000335ef) fep_china_uni_candidate_pane_g2

0xd07b,	// (0x000335f7) fep_china_uni_candidate_pane_g3

0xd083,	// (0x000335ff) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00035ca3) fep_china_uni_candidate_pane_g

0x991c,	// (0x0002fe98) fep_entry_item_pane_g1

0xd08d,	// (0x00033609) fep_entry_item_pane_t1_ParamLimits

0xd08d,	// (0x00033609) fep_entry_item_pane_t1

0xd0a3,	// (0x0003361f) fep_candidate_item_pane_t1_ParamLimits

0xd0a3,	// (0x0003361f) fep_candidate_item_pane_t1

0xd0b8,	// (0x00033634) fep_candidate_item_pane_t2_ParamLimits

0xd0b8,	// (0x00033634) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00035cac) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00035cac) fep_candidate_item_pane_t

0x9c8d,	// (0x00030209) list_highlight_pane_cp31_ParamLimits

0x9c8d,	// (0x00030209) list_highlight_pane_cp31

0xd0ca,	// (0x00033646) level_1_signal_lsc

0xd0d3,	// (0x0003364f) level_2_signal_lsc

0xd0dc,	// (0x00033658) level_3_signal_lsc

0xd0e5,	// (0x00033661) level_4_signal_lsc

0xd0ee,	// (0x0003366a) level_5_signal_lsc

0xd0f7,	// (0x00033673) level_6_signal_lsc

0xd100,	// (0x0003367c) level_7_signal_lsc

0xd100,	// (0x0003367c) level_1_battery_lsc

0xd109,	// (0x00033685) level_2_battery_lsc

0xd112,	// (0x0003368e) level_3_battery_lsc

0xd11b,	// (0x00033697) level_4_battery_lsc

0xd124,	// (0x000336a0) level_5_battery_lsc

0xd12d,	// (0x000336a9) level_6_battery_lsc

0xd0ca,	// (0x00033646) level_7_battery_lsc

0xd136,	// (0x000336b2) scroll_handle_focus_pane_g1

0xd13f,	// (0x000336bb) scroll_handle_focus_pane_g2

0xd148,	// (0x000336c4) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00035cb1) scroll_handle_focus_pane_g

0x95df,	// (0x0002fb5b) list_single_2graphic_pane_g1_ParamLimits

0x95df,	// (0x0002fb5b) list_single_2graphic_pane_g1

0x9080,	// (0x0002f5fc) list_single_2graphic_pane_g2_ParamLimits

0x9080,	// (0x0002f5fc) list_single_2graphic_pane_g2

0xe83b,	// (0x00034db7) list_single_2graphic_pane_g3_ParamLimits

0xe83b,	// (0x00034db7) list_single_2graphic_pane_g3

0x95eb,	// (0x0002fb67) list_single_2graphic_pane_g4_ParamLimits

0x95eb,	// (0x0002fb67) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00035cb8) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00035cb8) list_single_2graphic_pane_g

0x95f7,	// (0x0002fb73) list_single_2graphic_pane_t1_ParamLimits

0x95f7,	// (0x0002fb73) list_single_2graphic_pane_t1

0x9625,	// (0x0002fba1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9625,	// (0x0002fba1) list_double2_graphic_large_graphic_pane_g1

0x9297,	// (0x0002f813) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9297,	// (0x0002f813) list_double2_graphic_large_graphic_pane_g2

0x92a8,	// (0x0002f824) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x92a8,	// (0x0002f824) list_double2_graphic_large_graphic_pane_g3

0x9637,	// (0x0002fbb3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9637,	// (0x0002fbb3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00035cc1) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00035cc1) list_double2_graphic_large_graphic_pane_g

0x9643,	// (0x0002fbbf) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9643,	// (0x0002fbbf) list_double2_graphic_large_graphic_pane_t1

0x9659,	// (0x0002fbd5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9659,	// (0x0002fbd5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00035cca) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00035cca) list_double2_graphic_large_graphic_pane_t

0xd1da,	// (0x00033756) popup_fast_swap_window_ParamLimits

0xd1da,	// (0x00033756) popup_fast_swap_window

0xd1f8,	// (0x00033774) popup_side_volume_key_window

0xd216,	// (0x00033792) stacon_top_pane

0xd220,	// (0x0003379c) status_pane_ParamLimits

0xd220,	// (0x0003379c) status_pane

0xa814,	// (0x00030d90) status_small_pane

0x9a0c,	// (0x0002ff88) control_pane

0x9a0c,	// (0x0002ff88) stacon_bottom_pane

0xca8e,	// (0x0003300a) scroll_pane_cp121

0xca85,	// (0x00033001) set_content_pane

0xa77d,	// (0x00030cf9) bg_active_tab_pane_g1_cp1

0xd151,	// (0x000336cd) bg_active_tab_pane_g2_cp1

0xa786,	// (0x00030d02) bg_active_tab_pane_g3_cp1

0xa77d,	// (0x00030cf9) bg_passive_tab_pane_g1_cp1

0xd151,	// (0x000336cd) bg_passive_tab_pane_g2_cp1

0xa786,	// (0x00030d02) bg_passive_tab_pane_g3_cp1

0xa78f,	// (0x00030d0b) bg_active_tab_pane_g1_cp2

0xd151,	// (0x000336cd) bg_active_tab_pane_g2_cp2

0xa798,	// (0x00030d14) bg_active_tab_pane_g3_cp2

0xa78f,	// (0x00030d0b) bg_passive_tab_pane_g1_cp2

0xd151,	// (0x000336cd) bg_passive_tab_pane_g2_cp2

0xa798,	// (0x00030d14) bg_passive_tab_pane_g3_cp2

0xa7a1,	// (0x00030d1d) bg_active_tab_pane_g1_cp3

0xd151,	// (0x000336cd) bg_active_tab_pane_g2_cp3

0xa7aa,	// (0x00030d26) bg_active_tab_pane_g3_cp3

0xa7a1,	// (0x00030d1d) bg_passive_tab_pane_g1_cp3

0xd151,	// (0x000336cd) bg_passive_tab_pane_g2_cp3

0xa7aa,	// (0x00030d26) bg_passive_tab_pane_g3_cp3

0xa7b3,	// (0x00030d2f) bg_active_tab_pane_g1_cp4

0xd151,	// (0x000336cd) bg_active_tab_pane_g2_cp4

0xa7bc,	// (0x00030d38) bg_active_tab_pane_g3_cp4

0xa7b3,	// (0x00030d2f) bg_passive_tab_pane_g1_cp4

0xd151,	// (0x000336cd) bg_passive_tab_pane_g2_cp4

0xa7bc,	// (0x00030d38) bg_passive_tab_pane_g3_cp4

0xd198,	// (0x00033714) bg_active_tab_pane_g1_cp5

0xd151,	// (0x000336cd) bg_active_tab_pane_g2_cp5

0xd1a1,	// (0x0003371d) bg_active_tab_pane_g3_cp5

0xd198,	// (0x00033714) bg_passive_tab_pane_g1_cp5

0xd151,	// (0x000336cd) bg_passive_tab_pane_g2_cp5

0xd1a1,	// (0x0003371d) bg_passive_tab_pane_g3_cp5

0x43ee,	// (0x0002a96a) list_set_graphic_pane_ParamLimits

0x43ee,	// (0x0002a96a) list_set_graphic_pane

0x9a0c,	// (0x0002ff88) bg_set_opt_pane_cp4

0xa7c5,	// (0x00030d41) list_set_graphic_pane_g1_ParamLimits

0xa7c5,	// (0x00030d41) list_set_graphic_pane_g1

0xa7d1,	// (0x00030d4d) list_set_graphic_pane_g2_ParamLimits

0xa7d1,	// (0x00030d4d) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00035ccf) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00035ccf) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x00036054) volume_small_pane_cp_g

0xa7f5,	// (0x00030d71) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa7f5,	// (0x00030d71) list_double2_large_graphic_pane_g1_cp2

0xa803,	// (0x00030d7f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa803,	// (0x00030d7f) list_double2_large_graphic_pane_g2_cp2

0xd1aa,	// (0x00033726) list_double2_large_graphic_pane_g3_cp2

0xd1b2,	// (0x0003372e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xd1b2,	// (0x0003372e) list_double2_large_graphic_pane_t1_cp2

0xd1c8,	// (0x00033744) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xd1c8,	// (0x00033744) list_double2_large_graphic_pane_t2_cp2

0xbadb,	// (0x00032057) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbadb,	// (0x00032057) list_double_large_graphic_pane_g1_cp2

0xbaee,	// (0x0003206a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbaee,	// (0x0003206a) list_double_large_graphic_pane_g2_cp2

0xd301,	// (0x0003387d) list_double_large_graphic_pane_g3_cp2

0x3973,	// (0x00029eef) list_double_large_graphic_pane_g4_cp

0x397b,	// (0x00029ef7) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x397b,	// (0x00029ef7) list_double_large_graphic_pane_t1_cp2

0x3992,	// (0x00029f0e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3992,	// (0x00029f0e) list_double_large_graphic_pane_t2_cp2

0xa81f,	// (0x00030d9b) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa81f,	// (0x00030d9b) list_double2_graphic_pane_g1_cp2

0xa82d,	// (0x00030da9) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa82d,	// (0x00030da9) list_double2_graphic_pane_g2_cp2

0xa83e,	// (0x00030dba) list_double2_graphic_pane_g3_cp2

0xd22e,	// (0x000337aa) list_double2_graphic_pane_t1_cp2_ParamLimits

0xd22e,	// (0x000337aa) list_double2_graphic_pane_t1_cp2

0xd244,	// (0x000337c0) list_double2_graphic_pane_t2_cp2_ParamLimits

0xd244,	// (0x000337c0) list_double2_graphic_pane_t2_cp2

0xd256,	// (0x000337d2) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd256,	// (0x000337d2) list_single_number_heading_pane_g1_cp2

0xd262,	// (0x000337de) list_single_number_heading_pane_g2_cp2

0xd26a,	// (0x000337e6) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd26a,	// (0x000337e6) list_single_number_heading_pane_t1_cp2

0xa848,	// (0x00030dc4) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa848,	// (0x00030dc4) list_single_number_heading_pane_t2_cp2

0xd280,	// (0x000337fc) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd280,	// (0x000337fc) list_single_number_heading_pane_t3_cp2

0xd256,	// (0x000337d2) list_single_heading_pane_g1_cp2_ParamLimits

0xd256,	// (0x000337d2) list_single_heading_pane_g1_cp2

0xd262,	// (0x000337de) list_single_heading_pane_g2_cp2

0xd26a,	// (0x000337e6) list_single_heading_pane_t1_cp2_ParamLimits

0xd26a,	// (0x000337e6) list_single_heading_pane_t1_cp2

0xbac7,	// (0x00032043) list_single_heading_pane_t2_cp2_ParamLimits

0xbac7,	// (0x00032043) list_single_heading_pane_t2_cp2

0x3691,	// (0x00029c0d) list_double_graphic_pane_g1_cp2_ParamLimits

0x3691,	// (0x00029c0d) list_double_graphic_pane_g1_cp2

0x369d,	// (0x00029c19) list_double_graphic_pane_g2_cp2_ParamLimits

0x369d,	// (0x00029c19) list_double_graphic_pane_g2_cp2

0x36ac,	// (0x00029c28) list_double_graphic_pane_g3_cp2

0x36b4,	// (0x00029c30) list_double_graphic_pane_t1_cp2_ParamLimits

0x36b4,	// (0x00029c30) list_double_graphic_pane_t1_cp2

0x36ca,	// (0x00029c46) list_double_graphic_pane_t2_cp2_ParamLimits

0x36ca,	// (0x00029c46) list_double_graphic_pane_t2_cp2

0xd2f5,	// (0x00033871) list_double_number_pane_g1_cp2_ParamLimits

0xd2f5,	// (0x00033871) list_double_number_pane_g1_cp2

0xd301,	// (0x0003387d) list_double_number_pane_g2_cp2

0xba61,	// (0x00031fdd) list_double_number_pane_t1_cp2_ParamLimits

0xba61,	// (0x00031fdd) list_double_number_pane_t1_cp2

0x3669,	// (0x00029be5) list_double_number_pane_t2_cp2_ParamLimits

0x3669,	// (0x00029be5) list_double_number_pane_t2_cp2

0x367f,	// (0x00029bfb) list_double_number_pane_t3_cp2_ParamLimits

0x367f,	// (0x00029bfb) list_double_number_pane_t3_cp2

0xb99e,	// (0x00031f1a) list_single_graphic_pane_g1_cp2_ParamLimits

0xb99e,	// (0x00031f1a) list_single_graphic_pane_g1_cp2

0x02fb,	// (0x00026877) list_single_graphic_pane_g2_cp2_ParamLimits

0x02fb,	// (0x00026877) list_single_graphic_pane_g2_cp2

0x0307,	// (0x00026883) list_single_graphic_pane_g3_cp2

0x3514,	// (0x00029a90) list_single_graphic_pane_t1_cp2_ParamLimits

0x3514,	// (0x00029a90) list_single_graphic_pane_t1_cp2

0x02fb,	// (0x00026877) list_single_number_pane_g1_cp2_ParamLimits

0x02fb,	// (0x00026877) list_single_number_pane_g1_cp2

0x0307,	// (0x00026883) list_single_number_pane_g2_cp2

0x3514,	// (0x00029a90) list_single_number_pane_t1_cp2_ParamLimits

0x3514,	// (0x00029a90) list_single_number_pane_t1_cp2

0xb98a,	// (0x00031f06) list_single_number_pane_t2_cp2_ParamLimits

0xb98a,	// (0x00031f06) list_single_number_pane_t2_cp2

0xa803,	// (0x00030d7f) list_double2_pane_g1_cp2_ParamLimits

0xa803,	// (0x00030d7f) list_double2_pane_g1_cp2

0xd1aa,	// (0x00033726) list_double2_pane_g2_cp2

0xd2cd,	// (0x00033849) list_double2_pane_t1_cp2_ParamLimits

0xd2cd,	// (0x00033849) list_double2_pane_t1_cp2

0xd2e3,	// (0x0003385f) list_double2_pane_t2_cp2_ParamLimits

0xd2e3,	// (0x0003385f) list_double2_pane_t2_cp2

0xd2f5,	// (0x00033871) list_double_pane_g1_cp2_ParamLimits

0xd2f5,	// (0x00033871) list_double_pane_g1_cp2

0xd301,	// (0x0003387d) list_double_pane_g2_cp2

0xd309,	// (0x00033885) list_double_pane_t1_cp2_ParamLimits

0xd309,	// (0x00033885) list_double_pane_t1_cp2

0xd31f,	// (0x0003389b) list_double_pane_t2_cp2_ParamLimits

0xd31f,	// (0x0003389b) list_double_pane_t2_cp2

0x02eb,	// (0x00026867) list_single_pane_cp2_g3

0x02fb,	// (0x00026877) list_single_pane_g1_cp2_ParamLimits

0x02fb,	// (0x00026877) list_single_pane_g1_cp2

0x0307,	// (0x00026883) list_single_pane_g2_cp2

0x030f,	// (0x0002688b) list_single_pane_t1_cp2_ParamLimits

0x030f,	// (0x0002688b) list_single_pane_t1_cp2

0xa876,	// (0x00030df2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa876,	// (0x00030df2) list_single_large_graphic_pane_g1_cp2

0x0335,	// (0x000268b1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0335,	// (0x000268b1) list_single_large_graphic_pane_g2_cp2

0x0341,	// (0x000268bd) list_single_large_graphic_pane_g3_cp2

0x0349,	// (0x000268c5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x0349,	// (0x000268c5) list_single_large_graphic_pane_g4_cp1

0x0363,	// (0x000268df) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0363,	// (0x000268df) list_single_large_graphic_pane_t1_cp2

0x34de,	// (0x00029a5a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x34de,	// (0x00029a5a) list_single_graphic_heading_pane_g1_cp2

0xb80f,	// (0x00031d8b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb80f,	// (0x00031d8b) list_single_graphic_heading_pane_g4_cp2

0x0307,	// (0x00026883) list_single_graphic_heading_pane_g5_cp2

0x34ea,	// (0x00029a66) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x34ea,	// (0x00029a66) list_single_graphic_heading_pane_t1_cp2

0xb820,	// (0x00031d9c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb820,	// (0x00031d9c) list_single_graphic_heading_pane_t2_cp2

0x349f,	// (0x00029a1b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x349f,	// (0x00029a1b) list_single_2graphic_pane_g1_cp2

0xb80f,	// (0x00031d8b) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb80f,	// (0x00031d8b) list_single_2graphic_pane_g2_cp2

0x0307,	// (0x00026883) list_single_2graphic_pane_g3_cp2

0x34bc,	// (0x00029a38) list_single_2graphic_pane_g4_cp2_ParamLimits

0x34bc,	// (0x00029a38) list_single_2graphic_pane_g4_cp2

0x34c8,	// (0x00029a44) list_single_2graphic_pane_t1_cp2_ParamLimits

0x34c8,	// (0x00029a44) list_single_2graphic_pane_t1_cp2

0x991c,	// (0x0002fe98) list_highlight_pane_g10_cp1

0x3077,	// (0x000295f3) list_highlight_pane_g1_cp1

0x307f,	// (0x000295fb) list_highlight_pane_g2_cp1

0x3087,	// (0x00029603) list_highlight_pane_g3_cp1

0x308f,	// (0x0002960b) list_highlight_pane_g4_cp1

0x3097,	// (0x00029613) list_highlight_pane_g5_cp1

0x309f,	// (0x0002961b) list_highlight_pane_g6_cp1

0x30a7,	// (0x00029623) list_highlight_pane_g7_cp1

0x30af,	// (0x0002962b) list_highlight_pane_g8_cp1

0x30b7,	// (0x00029633) list_highlight_pane_g9_cp1

0xb7d5,	// (0x00031d51) form_field_slider_pane_t3

0xb7e3,	// (0x00031d5f) form_field_slider_pane_t4

0x2fb3,	// (0x0002952f) slider_form_pane_ParamLimits

0x2fb3,	// (0x0002952f) slider_form_pane

0x9a0c,	// (0x0002ff88) control_abbreviations

0x9a0c,	// (0x0002ff88) control_conventions

0x9a0c,	// (0x0002ff88) control_definitions

0x9a0c,	// (0x0002ff88) format_table_attribute

0x379f,	// (0x00029d1b) bg_popup_preview_window_pane_g9

0x9a0c,	// (0x0002ff88) format_table_data2

0x9a0c,	// (0x0002ff88) format_table_data3

0x9a0c,	// (0x0002ff88) format_table_data_example

0x0008,

0x9a0c,	// (0x0002ff88) intro_purpose

0xf8ea,	// (0x00035e66) bg_popup_preview_window_pane_g

0x9a0c,	// (0x0002ff88) texts_category

0x9a0c,	// (0x0002ff88) texts_graphics

0x0379,	// (0x000268f5) text_digital

0x0388,	// (0x00026904) text_primary

0x0397,	// (0x00026913) text_primary_small

0x03a6,	// (0x00026922) text_secondary

0x03b5,	// (0x00026931) text_title

0x3f33,	// (0x0002a4af) bg_passive_tab_pane_g1_cp3_srt

0xd151,	// (0x000336cd) bg_passive_tab_pane_g2_cp3_srt

0x3f3c,	// (0x0002a4b8) bg_passive_tab_pane_g3_cp3_srt

0x9c4b,	// (0x000301c7) bg_active_tab_pane_cp3_srt_ParamLimits

0x9c4b,	// (0x000301c7) bg_active_tab_pane_cp3_srt

0x3f45,	// (0x0002a4c1) tabs_4_active_pane_srt_g1

0xbdd3,	// (0x0003234f) tabs_4_active_pane_srt_t1_ParamLimits

0xbdd3,	// (0x0003234f) tabs_4_active_pane_srt_t1

0x3f33,	// (0x0002a4af) bg_active_tab_pane_g1_cp3_copy1

0xd151,	// (0x000336cd) bg_active_tab_pane_g2_cp3_copy1

0x3f3c,	// (0x0002a4b8) bg_active_tab_pane_g3_cp3_copy1

0x9c8d,	// (0x00030209) tabs_2_long_active_pane_srt_ParamLimits

0x9c8d,	// (0x00030209) tabs_2_long_active_pane_srt

0x9c8d,	// (0x00030209) tabs_2_long_passive_pane_srt_ParamLimits

0x9c8d,	// (0x00030209) tabs_2_long_passive_pane_srt

0x0935,	// (0x00026eb1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0935,	// (0x00026eb1) bg_passive_tab_pane_cp4_srt

0x3bdb,	// (0x0002a157) bg_passive_tab_pane_g1_cp4_srt

0xd151,	// (0x000336cd) bg_passive_tab_pane_g2_cp4_srt

0x3be4,	// (0x0002a160) bg_passive_tab_pane_g3_cp4_srt

0x9c8d,	// (0x00030209) bg_active_tab_pane_cp4_srt_ParamLimits

0x9c8d,	// (0x00030209) bg_active_tab_pane_cp4_srt

0xbbb1,	// (0x0003212d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbbb1,	// (0x0003212d) tabs_2_long_active_pane_srt_t1

0x3bdb,	// (0x0002a157) bg_active_tab_pane_g1_cp4_srt

0xd151,	// (0x000336cd) bg_active_tab_pane_g2_cp4_srt

0x3be4,	// (0x0002a160) bg_active_tab_pane_g3_cp4_srt

0x9c4b,	// (0x000301c7) tabs_3_long_active_pane_srt_ParamLimits

0x9c4b,	// (0x000301c7) tabs_3_long_active_pane_srt

0x9c4b,	// (0x000301c7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x9c4b,	// (0x000301c7) tabs_3_long_passive_pane_cp_srt

0x9c4b,	// (0x000301c7) tabs_3_long_passive_pane_srt_ParamLimits

0x9c4b,	// (0x000301c7) tabs_3_long_passive_pane_srt

0x0935,	// (0x00026eb1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0935,	// (0x00026eb1) bg_passive_tab_pane_cp5_srt

0xd198,	// (0x00033714) bg_passive_tab_pane_g1_cp5_srt

0xd151,	// (0x000336cd) bg_passive_tab_pane_g2_cp5_srt

0xd1a1,	// (0x0003371d) bg_passive_tab_pane_g3_cp5_srt

0x9c8d,	// (0x00030209) bg_active_tab_pane_cp5_srt_ParamLimits

0x9c8d,	// (0x00030209) bg_active_tab_pane_cp5_srt

0xbb9b,	// (0x00032117) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbb9b,	// (0x00032117) tabs_3_long_active_pane_srt_t1

0xd198,	// (0x00033714) bg_active_tab_pane_g1_cp5_srt

0xd151,	// (0x000336cd) bg_active_tab_pane_g2_cp5_srt

0xd1a1,	// (0x0003371d) bg_active_tab_pane_g3_cp5_srt

0x3bbb,	// (0x0002a137) navi_text_pane_srt_t1

0x3bb3,	// (0x0002a12f) navi_icon_pane_srt_g1

0x0629,	// (0x00026ba5) midp_editing_number_pane_srt

0x03c4,	// (0x00026940) midp_ticker_pane_srt

0x0631,	// (0x00026bad) midp_ticker_pane_srt_g1

0x0639,	// (0x00026bb5) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00035cee) midp_ticker_pane_srt_g

0x0641,	// (0x00026bbd) midp_ticker_pane_srt_t1

0x3ba4,	// (0x0002a120) midp_editing_number_pane_t1_copy1

0x0935,	// (0x00026eb1) listscroll_midp_pane

0x0935,	// (0x00026eb1) midp_form_pane

0x042e,	// (0x000269aa) midp_info_popup_window_ParamLimits

0x042e,	// (0x000269aa) midp_info_popup_window

0xcb57,	// (0x000330d3) bg_popup_sub_pane_cp50_ParamLimits

0xcb57,	// (0x000330d3) bg_popup_sub_pane_cp50

0x2cad,	// (0x00029229) listscroll_midp_info_pane_ParamLimits

0x2cad,	// (0x00029229) listscroll_midp_info_pane

0x2c95,	// (0x00029211) listscroll_form_midp_pane_ParamLimits

0x2c95,	// (0x00029211) listscroll_form_midp_pane

0x2ca1,	// (0x0002921d) scroll_bar_cp050

0xb7c9,	// (0x00031d45) list_midp_pane

0x49c8,	// (0x0002af44) signal_pane_g2_cp

0x2baf,	// (0x0002912b) listscroll_midp_info_pane_t1_ParamLimits

0x2baf,	// (0x0002912b) listscroll_midp_info_pane_t1

0x2bc7,	// (0x00029143) listscroll_midp_info_pane_t2_ParamLimits

0x2bc7,	// (0x00029143) listscroll_midp_info_pane_t2

0x2c05,	// (0x00029181) listscroll_midp_info_pane_t3_ParamLimits

0x2c05,	// (0x00029181) listscroll_midp_info_pane_t3

0x2c3f,	// (0x000291bb) listscroll_midp_info_pane_t4_ParamLimits

0x2c3f,	// (0x000291bb) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00035da1) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00035da1) listscroll_midp_info_pane_t

0xcbd7,	// (0x00033153) scroll_pane_cp21

0x186f,	// (0x00027deb) form_midp_field_choice_group_pane

0x1878,	// (0x00027df4) form_midp_field_text_pane

0x2b95,	// (0x00029111) form_midp_field_time_pane

0x2b9d,	// (0x00029119) form_midp_gauge_slider_pane

0x2ba6,	// (0x00029122) form_midp_gauge_wait_pane

0x9a0c,	// (0x0002ff88) form_midp_image_pane

0x9687,	// (0x0002fc03) list_single_midp_pane_ParamLimits

0x9687,	// (0x0002fc03) list_single_midp_pane

0xb7a1,	// (0x00031d1d) form_midp_field_text_pane_t1

0x1591,	// (0x00027b0d) input_focus_pane_cp050

0x185e,	// (0x00027dda) list_midp_form_text_pane

0x1802,	// (0x00027d7e) form_midp_field_choice_group_pane_t1

0x1810,	// (0x00027d8c) input_focus_pane_cp051

0x1824,	// (0x00027da0) list_midp_choice_pane

0x9a0c,	// (0x0002ff88) status_idle_pane

0x17e6,	// (0x00027d62) form_midp_field_time_pane_t1

0x991c,	// (0x0002fe98) wait_anim_pane_g2_copy1

0x17f4,	// (0x00027d70) form_midp_field_time_pane_t2

0x0001,

0x04de,	// (0x00026a5a) aid_navinavi_width_2_pane

0xf820,	// (0x00035d9c) form_midp_field_time_pane_t

0x9a0c,	// (0x0002ff88) input_focus_pane_cp052

0x9a0c,	// (0x0002ff88) bg_input_focus_pane_cp040

0x17a6,	// (0x00027d22) form_midp_gauge_slider_pane_t1

0x17b4,	// (0x00027d30) form_midp_gauge_slider_pane_t2

0xb785,	// (0x00031d01) form_midp_gauge_slider_pane_t3

0xb793,	// (0x00031d0f) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00035d93) form_midp_gauge_slider_pane_t

0x17de,	// (0x00027d5a) form_midp_slider_pane

0x9c8d,	// (0x00030209) bg_input_focus_pane_cp041_ParamLimits

0x9c8d,	// (0x00030209) bg_input_focus_pane_cp041

0x1773,	// (0x00027cef) form_midp_gauge_wait_pane_t1_ParamLimits

0x1773,	// (0x00027cef) form_midp_gauge_wait_pane_t1

0x1785,	// (0x00027d01) form_midp_gauge_wait_pane_t2_ParamLimits

0x1785,	// (0x00027d01) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x00035d8e) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x00035d8e) form_midp_gauge_wait_pane_t

0x1797,	// (0x00027d13) form_midp_wait_pane_ParamLimits

0x1797,	// (0x00027d13) form_midp_wait_pane

0x173b,	// (0x00027cb7) form_midp_image_pane_g1

0x1744,	// (0x00027cc0) form_midp_image_pane_t1

0x1753,	// (0x00027ccf) form_midp_image_pane_t2

0x1762,	// (0x00027cde) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x00035d87) form_midp_image_pane_t

0x1732,	// (0x00027cae) list_single_midp_pane_g1

0xeafb,	// (0x00035077) list_single_midp_pane_t1

0xb76e,	// (0x00031cea) list_midp_form_item_pane_ParamLimits

0xb76e,	// (0x00031cea) list_midp_form_item_pane

0x0486,	// (0x00026a02) list_midp_form_item_pane_t1

0x0495,	// (0x00026a11) midp_ticker_pane_g1

0x04a1,	// (0x00026a1d) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00035cd4) midp_ticker_pane_g

0xa91b,	// (0x00030e97) midp_ticker_pane_t1

0xbd40,	// (0x000322bc) midp_editing_number_pane_t1

0x3df5,	// (0x0002a371) midp_editing_number_pane

0x3e04,	// (0x0002a380) midp_ticker_pane

0x3b94,	// (0x0002a110) ai_message_heading_pane

0x9a0c,	// (0x0002ff88) bg_popup_window_pane_cp14

0x3b9c,	// (0x0002a118) listscroll_ai_message_pane

0x3b1a,	// (0x0002a096) ai_message_heading_pane_g1_ParamLimits

0x3b1a,	// (0x0002a096) ai_message_heading_pane_g1

0x3b26,	// (0x0002a0a2) ai_message_heading_pane_g2_ParamLimits

0x3b26,	// (0x0002a0a2) ai_message_heading_pane_g2

0x3b34,	// (0x0002a0b0) ai_message_heading_pane_g3_ParamLimits

0x3b34,	// (0x0002a0b0) ai_message_heading_pane_g3

0x3b40,	// (0x0002a0bc) ai_message_heading_pane_g4_ParamLimits

0x3b40,	// (0x0002a0bc) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x00035ec8) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x00035ec8) ai_message_heading_pane_g

0x3b4c,	// (0x0002a0c8) ai_message_heading_pane_t1_ParamLimits

0x3b4c,	// (0x0002a0c8) ai_message_heading_pane_t1

0x3b66,	// (0x0002a0e2) ai_message_heading_pane_t2_ParamLimits

0x3b66,	// (0x0002a0e2) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00035ed1) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00035ed1) ai_message_heading_pane_t

0x3b7a,	// (0x0002a0f6) bg_popup_heading_pane_cp1_ParamLimits

0x3b7a,	// (0x0002a0f6) bg_popup_heading_pane_cp1

0x3b08,	// (0x0002a084) list_ai_message_pane_ParamLimits

0x3b08,	// (0x0002a084) list_ai_message_pane

0xcbd7,	// (0x00033153) scroll_pane_cp10

0x3aa4,	// (0x0002a020) list_ai_message_pane_g1

0x3aac,	// (0x0002a028) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x00035ea5) list_ai_message_pane_g

0x3ab4,	// (0x0002a030) list_ai_message_pane_t1_ParamLimits

0x3ab4,	// (0x0002a030) list_ai_message_pane_t1

0x3ac9,	// (0x0002a045) list_ai_message_pane_t2_ParamLimits

0x3ac9,	// (0x0002a045) list_ai_message_pane_t2

0x3ade,	// (0x0002a05a) list_ai_message_pane_t3_ParamLimits

0x3ade,	// (0x0002a05a) list_ai_message_pane_t3

0x3af3,	// (0x0002a06f) list_ai_message_pane_t4_ParamLimits

0x3af3,	// (0x0002a06f) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00035eaa) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00035eaa) list_ai_message_pane_t

0xbb81,	// (0x000320fd) cell_ai_soft_ind_pane_ParamLimits

0xbb81,	// (0x000320fd) cell_ai_soft_ind_pane

0x04bf,	// (0x00026a3b) cell_ai_soft_ind_pane_g1_ParamLimits

0x04bf,	// (0x00026a3b) cell_ai_soft_ind_pane_g1

0x9a0c,	// (0x0002ff88) grid_highlight_cp1

0x04cc,	// (0x00026a48) text_secondary_cp56_ParamLimits

0x04cc,	// (0x00026a48) text_secondary_cp56

0x3a62,	// (0x00029fde) example_general_pane_ParamLimits

0x3a62,	// (0x00029fde) example_general_pane

0x3a6e,	// (0x00029fea) example_parent_pane_g1_ParamLimits

0x3a6e,	// (0x00029fea) example_parent_pane_g1

0x3a7a,	// (0x00029ff6) example_parent_pane_t1_ParamLimits

0x3a7a,	// (0x00029ff6) example_parent_pane_t1

0xaf81,	// (0x000314fd) popup_preview_text_window_ParamLimits

0xaf81,	// (0x000314fd) popup_preview_text_window

0x02f3,	// (0x0002686f) list_single_pane_cp2_g4

0xa01c,	// (0x00030598) bg_popup_preview_window_pane_ParamLimits

0xa01c,	// (0x00030598) bg_popup_preview_window_pane

0x37a9,	// (0x00029d25) popup_preview_text_window_t1_ParamLimits

0x37a9,	// (0x00029d25) popup_preview_text_window_t1

0x37c7,	// (0x00029d43) popup_preview_text_window_t2_ParamLimits

0x37c7,	// (0x00029d43) popup_preview_text_window_t2

0x3810,	// (0x00029d8c) popup_preview_text_window_t3_ParamLimits

0x3810,	// (0x00029d8c) popup_preview_text_window_t3

0x3855,	// (0x00029dd1) popup_preview_text_window_t4_ParamLimits

0x3855,	// (0x00029dd1) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00035e79) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00035e79) popup_preview_text_window_t

0x38d3,	// (0x00029e4f) scroll_pane_cp11

0x14a6,	// (0x00027a22) bg_popup_preview_window_pane_g1

0x375d,	// (0x00029cd9) bg_popup_preview_window_pane_g2

0x3767,	// (0x00029ce3) bg_popup_preview_window_pane_g3

0x3771,	// (0x00029ced) bg_popup_preview_window_pane_g4

0x377b,	// (0x00029cf7) bg_popup_preview_window_pane_g5

0x3785,	// (0x00029d01) bg_popup_preview_window_pane_g6

0x378d,	// (0x00029d09) bg_popup_preview_window_pane_g7

0x3795,	// (0x00029d11) bg_popup_preview_window_pane_g8

0xf06a,	// (0x000355e6) aid_popup_width_pane

0xaef1,	// (0x0003146d) popup_midp_note_alarm_window_ParamLimits

0xaef1,	// (0x0003146d) popup_midp_note_alarm_window

0xca9f,	// (0x0003301b) data_form_pane_ParamLimits

0x94e3,	// (0x0002fa5f) form_field_data_pane_g1

0x94ed,	// (0x0002fa69) form_field_data_pane_t1_ParamLimits

0xcaab,	// (0x00033027) input_focus_pane_ParamLimits

0xe91a,	// (0x00034e96) data_form_wide_pane_ParamLimits

0xe92b,	// (0x00034ea7) form_field_data_wide_pane_g1

0xe937,	// (0x00034eb3) form_field_data_wide_pane_t1_ParamLimits

0xa2d2,	// (0x0003084e) input_focus_pane_cp6_ParamLimits

0xa544,	// (0x00030ac0) input_popup_find_pane_g1_ParamLimits

0xa544,	// (0x00030ac0) input_popup_find_pane_g1

0xf413,	// (0x0003598f) aid_navi_side_left_pane

0xf428,	// (0x000359a4) aid_navi_side_right_pane

0x3172,	// (0x000296ee) bg_popup_window_pane_cp30_ParamLimits

0x3172,	// (0x000296ee) bg_popup_window_pane_cp30

0x31ec,	// (0x00029768) popup_midp_note_alarm_window_g1_ParamLimits

0x31ec,	// (0x00029768) popup_midp_note_alarm_window_g1

0x321c,	// (0x00029798) popup_midp_note_alarm_window_t1_ParamLimits

0x321c,	// (0x00029798) popup_midp_note_alarm_window_t1

0x32bd,	// (0x00029839) popup_midp_note_alarm_window_t2_ParamLimits

0x32bd,	// (0x00029839) popup_midp_note_alarm_window_t2

0x336b,	// (0x000298e7) popup_midp_note_alarm_window_t3_ParamLimits

0x336b,	// (0x000298e7) popup_midp_note_alarm_window_t3

0x339d,	// (0x00029919) popup_midp_note_alarm_window_t4_ParamLimits

0x339d,	// (0x00029919) popup_midp_note_alarm_window_t4

0x33c3,	// (0x0002993f) popup_midp_note_alarm_window_t5_ParamLimits

0x33c3,	// (0x0002993f) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00035e16) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00035e16) popup_midp_note_alarm_window_t

0x346f,	// (0x000299eb) wait_bar_pane_cp1_ParamLimits

0x346f,	// (0x000299eb) wait_bar_pane_cp1

0x9a0c,	// (0x0002ff88) wait_anim_pane_copy1

0x9a0c,	// (0x0002ff88) wait_border_pane_copy1

0x2e57,	// (0x000293d3) wait_border_pane_g1_copy1

0xe951,	// (0x00034ecd) form_field_popup_pane_g1

0x9507,	// (0x0002fa83) form_field_popup_pane_t1_ParamLimits

0xcaab,	// (0x00033027) input_focus_pane_cp7_ParamLimits

0xcad9,	// (0x00033055) list_form_pane_ParamLimits

0xe959,	// (0x00034ed5) form_field_popup_wide_pane_g1

0xe961,	// (0x00034edd) form_field_popup_wide_pane_t1_ParamLimits

0xcaab,	// (0x00033027) input_focus_pane_cp8_ParamLimits

0xcae5,	// (0x00033061) list_form_wide_pane_ParamLimits

0x3fc0,	// (0x0002a53c) aid_size_cell_graphic_pane

0x9586,	// (0x0002fb02) data_form_pane_t1_ParamLimits

0x96b9,	// (0x0002fc35) data_form_wide_pane_t1_ParamLimits

0xb385,	// (0x00031901) bg_status_flat_pane

0x9b87,	// (0x00030103) title_pane_t1_ParamLimits

0x9c13,	// (0x0003018f) title_pane_t2_ParamLimits

0x9c39,	// (0x000301b5) title_pane_t3_ParamLimits

0xf557,	// (0x00035ad3) title_pane_t_ParamLimits

0xa654,	// (0x00030bd0) level_1_signal_ParamLimits

0xa666,	// (0x00030be2) level_2_signal_ParamLimits

0xa679,	// (0x00030bf5) level_3_signal_ParamLimits

0xa68c,	// (0x00030c08) level_4_signal_ParamLimits

0xa69f,	// (0x00030c1b) level_5_signal_ParamLimits

0xa6b2,	// (0x00030c2e) level_6_signal_ParamLimits

0xa6c5,	// (0x00030c41) level_7_signal_ParamLimits

0xa654,	// (0x00030bd0) level_1_battery_ParamLimits

0xa666,	// (0x00030be2) level_2_battery_ParamLimits

0xa679,	// (0x00030bf5) level_3_battery_ParamLimits

0xa68c,	// (0x00030c08) level_4_battery_ParamLimits

0xa69f,	// (0x00030c1b) level_5_battery_ParamLimits

0xa6b2,	// (0x00030c2e) level_6_battery_ParamLimits

0xa6c5,	// (0x00030c41) level_7_battery_ParamLimits

0x3077,	// (0x000295f3) bg_status_flat_pane_g1

0x307f,	// (0x000295fb) bg_status_flat_pane_g2

0x3087,	// (0x00029603) bg_status_flat_pane_g3

0x308f,	// (0x0002960b) bg_status_flat_pane_g4

0x3097,	// (0x00029613) bg_status_flat_pane_g5

0x309f,	// (0x0002961b) bg_status_flat_pane_g6

0x30a7,	// (0x00029623) bg_status_flat_pane_g7

0x9c61,	// (0x000301dd) tabs_3_active_pane_t1_ParamLimits

0x9c61,	// (0x000301dd) tabs_3_passive_pane_t1_ParamLimits

0x9c7b,	// (0x000301f7) tabs_4_active_pane_t1_ParamLimits

0x9c7b,	// (0x000301f7) tabs_4_1_passive_pane_t1_ParamLimits

0xa55a,	// (0x00030ad6) tabs_2_active_pane_t1_ParamLimits

0xa55a,	// (0x00030ad6) tabs_2_passive_pane_t1_ParamLimits

0x9c8d,	// (0x00030209) bg_active_tab_pane_cp4_ParamLimits

0xa56c,	// (0x00030ae8) tabs_2_long_active_pane_t1_ParamLimits

0x0935,	// (0x00026eb1) bg_passive_tab_pane_cp4_ParamLimits

0x153a,	// (0x00027ab6) list_single_midp_graphic_pane_t1_ParamLimits

0x9c8d,	// (0x00030209) bg_active_tab_pane_cp5_ParamLimits

0xa57f,	// (0x00030afb) tabs_3_long_active_pane_t1_ParamLimits

0x0935,	// (0x00026eb1) bg_passive_tab_pane_cp5_ParamLimits

0x153a,	// (0x00027ab6) list_single_midp_graphic_pane_t1

0xb385,	// (0x00031901) bg_status_flat_pane_ParamLimits

0x10ee,	// (0x0002766a) indicator_pane_cp2_ParamLimits

0x10ee,	// (0x0002766a) indicator_pane_cp2

0xb51b,	// (0x00031a97) navi_pane_srt_ParamLimits

0xb51b,	// (0x00031a97) navi_pane_srt

0x1255,	// (0x000277d1) popup_clock_digital_analogue_window_cp1

0x9daa,	// (0x00030326) indicator_pane_t1

0x03c4,	// (0x00026940) copy_highlight_pane

0x03c4,	// (0x00026940) cursor_graphics_pane

0x03c4,	// (0x00026940) graphic_within_text_pane

0x03c4,	// (0x00026940) link_highlight_pane

0x3896,	// (0x00029e12) popup_preview_text_window_t5_ParamLimits

0x3896,	// (0x00029e12) popup_preview_text_window_t5

0x04e8,	// (0x00026a64) cursor_digital_pane

0x04e8,	// (0x00026a64) cursor_primary_pane

0x04f9,	// (0x00026a75) cursor_primary_small_pane

0x0501,	// (0x00026a7d) cursor_secondary_pane

0x0509,	// (0x00026a85) cursor_title_pane

0x04e8,	// (0x00026a64) link_highlight_digital_pane

0x04f0,	// (0x00026a6c) link_highlight_primary_pane

0x04f9,	// (0x00026a75) link_highlight_primary_small_pane

0x0501,	// (0x00026a7d) link_highlight_secondary_pane

0x0509,	// (0x00026a85) link_highlight_title_pane

0x04e8,	// (0x00026a64) copy_highlight_digital_pane

0x04e8,	// (0x00026a64) copy_highlight_primary_pane

0x04f9,	// (0x00026a75) copy_highlight_primary_small_pane

0x0501,	// (0x00026a7d) copy_highlight_secondary_pane

0x0509,	// (0x00026a85) copy_highlight_title_pane

0x0501,	// (0x00026a7d) graphic_text_digital_pane

0x3115,	// (0x00029691) graphic_text_primary_pane

0x311e,	// (0x0002969a) graphic_text_primary_small_pane

0x04f9,	// (0x00026a75) graphic_text_secondary_pane

0x04e8,	// (0x00026a64) graphic_text_title_pane

0xa92d,	// (0x00030ea9) cursor_primary_pane_g1

0x3107,	// (0x00029683) cursor_text_primary_t1

0xb805,	// (0x00031d81) cursor_primary_small_pane_g1

0x30f9,	// (0x00029675) cursor_text_primary_small_t1

0xb7fb,	// (0x00031d77) cursor_primary_small_pane_g1_copy1

0x30e1,	// (0x0002965d) cursor_text_primary_small_t1_copy1

0x30bf,	// (0x0002963b) cursor_text_title_t1

0xb7f1,	// (0x00031d6d) cursor_title_pane_g1

0xa92d,	// (0x00030ea9) cursor_digital_pane_g1

0x051b,	// (0x00026a97) cursor_text_digital_t1

0x0529,	// (0x00026aa5) link_highlight_primary_pane_g1

0x3068,	// (0x000295e4) link_highlight_primary_pane_t1

0x0529,	// (0x00026aa5) link_highlight_primary_small_pane_g1

0x0531,	// (0x00026aad) link_highlight_primary_small_pane_t1

0x0540,	// (0x00026abc) link_highlight_secondary_pane_g1

0x0548,	// (0x00026ac4) link_highlight_secondary_pane_t1

0x2fdc,	// (0x00029558) link_highlight_title_pane_g1

0x2fe4,	// (0x00029560) link_highlight_title_pane_t1

0x2fc5,	// (0x00029541) link_highlight_digital_pane_g1

0x2fcd,	// (0x00029549) link_highlight_digital_pane_t1

0x2e8d,	// (0x00029409) copy_highlight_primary_pane_g1

0x2ea4,	// (0x00029420) copy_highlight_primary_pane_t1

0x2e8d,	// (0x00029409) copy_highlight_primary_small_pane_g1

0x2e95,	// (0x00029411) copy_highlight_primary_small_pane_t1

0x0557,	// (0x00026ad3) copy_highlight_secondary_pane_g1

0x055f,	// (0x00026adb) copy_highlight_secondary_pane_t1

0x2e76,	// (0x000293f2) copy_highlight_title_pane_g1

0x2e7e,	// (0x000293fa) copy_highlight_title_pane_t1

0x2e8d,	// (0x00029409) copy_highlight_digital_pane_g1

0x4190,	// (0x0002a70c) copy_highlight_digital_pane_t1

0x40e4,	// (0x0002a660) graphic_text_primary_pane_g1

0x4174,	// (0x0002a6f0) graphic_text_primary_pane_t1

0x4182,	// (0x0002a6fe) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x00035f45) graphic_text_primary_pane_t

0x4150,	// (0x0002a6cc) graphic_text_primary_small_pane_g1

0x4158,	// (0x0002a6d4) graphic_text_primary_small_pane_t1

0x4166,	// (0x0002a6e2) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00035f40) graphic_text_primary_small_pane_t

0x412c,	// (0x0002a6a8) graphic_text_secondary_pane_g1

0x4134,	// (0x0002a6b0) graphic_text_secondary_pane_t1

0x4142,	// (0x0002a6be) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00035f3b) graphic_text_secondary_pane_t

0x4108,	// (0x0002a684) graphic_text_title_pane_g1

0x4110,	// (0x0002a68c) graphic_text_title_pane_t1

0x411e,	// (0x0002a69a) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x00035f36) graphic_text_title_pane_t

0x40e4,	// (0x0002a660) graphic_text_digital_pane_g1

0x40ec,	// (0x0002a668) graphic_text_digital_pane_t1

0x40fa,	// (0x0002a676) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00035f31) graphic_text_digital_pane_t

0x9c8d,	// (0x00030209) navi_icon_pane_srt_ParamLimits

0x9c8d,	// (0x00030209) navi_icon_pane_srt

0x9a0c,	// (0x0002ff88) navi_midp_pane_srt

0x9a0c,	// (0x0002ff88) navi_navi_pane_srt

0x9c8d,	// (0x00030209) navi_text_pane_srt_ParamLimits

0x9c8d,	// (0x00030209) navi_text_pane_srt

0x40af,	// (0x0002a62b) navi_navi_icon_text_pane_srt

0x40b7,	// (0x0002a633) navi_navi_pane_srt_g1_ParamLimits

0x40b7,	// (0x0002a633) navi_navi_pane_srt_g1

0x40c9,	// (0x0002a645) navi_navi_pane_srt_g2_ParamLimits

0x40c9,	// (0x0002a645) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00035f2c) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00035f2c) navi_navi_pane_srt_g

0x40db,	// (0x0002a657) navi_navi_tabs_pane_srt

0x40af,	// (0x0002a62b) navi_navi_text_pane_srt

0x40af,	// (0x0002a62b) navi_navi_volume_pane_srt

0x40a0,	// (0x0002a61c) navi_navi_text_pane_srt_t1

0x1b9e,	// (0x0002811a) navi_navi_volume_pane_srt_g1

0x1ba6,	// (0x00028122) volume_small_pane_srt_ParamLimits

0x1ba6,	// (0x00028122) volume_small_pane_srt

0x056e,	// (0x00026aea) volume_small_pane_srt_g1_ParamLimits

0x056e,	// (0x00026aea) volume_small_pane_srt_g1

0x057e,	// (0x00026afa) volume_small_pane_srt_g2_ParamLimits

0x057e,	// (0x00026afa) volume_small_pane_srt_g2

0x058f,	// (0x00026b0b) volume_small_pane_srt_g3_ParamLimits

0x058f,	// (0x00026b0b) volume_small_pane_srt_g3

0x05a0,	// (0x00026b1c) volume_small_pane_srt_g4_ParamLimits

0x05a0,	// (0x00026b1c) volume_small_pane_srt_g4

0x05b1,	// (0x00026b2d) volume_small_pane_srt_g5_ParamLimits

0x05b1,	// (0x00026b2d) volume_small_pane_srt_g5

0x05c2,	// (0x00026b3e) volume_small_pane_srt_g6_ParamLimits

0x05c2,	// (0x00026b3e) volume_small_pane_srt_g6

0x05d3,	// (0x00026b4f) volume_small_pane_srt_g7_ParamLimits

0x05d3,	// (0x00026b4f) volume_small_pane_srt_g7

0x05e4,	// (0x00026b60) volume_small_pane_srt_g8_ParamLimits

0x05e4,	// (0x00026b60) volume_small_pane_srt_g8

0x05f5,	// (0x00026b71) volume_small_pane_srt_g9_ParamLimits

0x05f5,	// (0x00026b71) volume_small_pane_srt_g9

0x0606,	// (0x00026b82) volume_small_pane_srt_g10_ParamLimits

0x0606,	// (0x00026b82) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00035cd9) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00035cd9) volume_small_pane_srt_g

0xa0d1,	// (0x0003064d) query_popup_data_pane_cp2

0x4086,	// (0x0002a602) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4086,	// (0x0002a602) navi_navi_icon_text_pane_srt_t1

0x3115,	// (0x00029691) navi_tabs_2_long_pane_srt

0x3115,	// (0x00029691) navi_tabs_2_pane_srt

0x3115,	// (0x00029691) navi_tabs_3_long_pane_srt

0x3115,	// (0x00029691) navi_tabs_3_pane_srt

0x3115,	// (0x00029691) navi_tabs_4_pane_srt

0x1b7e,	// (0x000280fa) tabs_2_active_pane_srt_ParamLimits

0x1b7e,	// (0x000280fa) tabs_2_active_pane_srt

0x1b8e,	// (0x0002810a) tabs_2_passive_pane_srt_ParamLimits

0x1b8e,	// (0x0002810a) tabs_2_passive_pane_srt

0x1591,	// (0x00027b0d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1591,	// (0x00027b0d) bg_passive_tab_pane_cp1_srt

0x4052,	// (0x0002a5ce) bg_passive_tab_pane_g1_cp1_srt

0xd151,	// (0x000336cd) bg_passive_tab_pane_g2_cp1_srt

0x405b,	// (0x0002a5d7) bg_passive_tab_pane_g3_cp1_srt

0x9c4b,	// (0x000301c7) bg_active_tab_pane_cp1_srt_ParamLimits

0x9c4b,	// (0x000301c7) bg_active_tab_pane_cp1_srt

0x4064,	// (0x0002a5e0) tabs_2_active_pane_srt_g1

0xbe54,	// (0x000323d0) tabs_2_active_pane_srt_t1_ParamLimits

0xbe54,	// (0x000323d0) tabs_2_active_pane_srt_t1

0x4052,	// (0x0002a5ce) bg_active_tab_pane_g1_cp1_srt

0xd151,	// (0x000336cd) bg_active_tab_pane_g2_cp1_srt

0x405b,	// (0x0002a5d7) bg_active_tab_pane_g3_cp1_srt

0x1b4b,	// (0x000280c7) tabs_3_active_pane_srt_ParamLimits

0x1b4b,	// (0x000280c7) tabs_3_active_pane_srt

0x1b5c,	// (0x000280d8) tabs_3_passive_pane_cp_srt_ParamLimits

0x1b5c,	// (0x000280d8) tabs_3_passive_pane_cp_srt

0x1b6d,	// (0x000280e9) tabs_3_passive_pane_srt_ParamLimits

0x1b6d,	// (0x000280e9) tabs_3_passive_pane_srt

0x1591,	// (0x00027b0d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1591,	// (0x00027b0d) bg_passive_tab_pane_cp2_srt

0x0617,	// (0x00026b93) bg_passive_tab_pane_g1_cp2_srt

0xd151,	// (0x000336cd) bg_passive_tab_pane_g2_cp2_srt

0x0620,	// (0x00026b9c) bg_passive_tab_pane_g3_cp2_srt

0x9c4b,	// (0x000301c7) bg_active_tab_pane_cp2_srt_ParamLimits

0x9c4b,	// (0x000301c7) bg_active_tab_pane_cp2_srt

0x4038,	// (0x0002a5b4) tabs_3_active_pane_srt_g1

0xbe3e,	// (0x000323ba) tabs_3_active_pane_srt_t1_ParamLimits

0xbe3e,	// (0x000323ba) tabs_3_active_pane_srt_t1

0x0617,	// (0x00026b93) bg_active_tab_pane_g1_cp2_srt

0xd151,	// (0x000336cd) bg_active_tab_pane_g2_cp2_srt

0x0620,	// (0x00026b9c) bg_active_tab_pane_g3_cp2_srt

0x1b03,	// (0x0002807f) tabs_4_active_pane_srt_ParamLimits

0x1b03,	// (0x0002807f) tabs_4_active_pane_srt

0x1b15,	// (0x00028091) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1b15,	// (0x00028091) tabs_4_passive_pane_cp2_srt

0x08bb,	// (0x00026e37) aid_size_cell_toolbar

0x3c4e,	// (0x0002a1ca) main_idle_act_pane_ParamLimits

0x0afe,	// (0x0002707a) popup_large_graphic_colour_window_ParamLimits

0xb247,	// (0x000317c3) popup_toolbar_window_ParamLimits

0xb247,	// (0x000317c3) popup_toolbar_window

0xeb20,	// (0x0003509c) list_single_graphic_2heading_pane_ParamLimits

0xeb20,	// (0x0003509c) list_single_graphic_2heading_pane

0xcdaf,	// (0x0003332b) aid_size_cell_apps_grid_lsc_pane

0xcdc1,	// (0x0003333d) aid_size_cell_apps_grid_prt_pane

0x0935,	// (0x00026eb1) bg_wml_button_pane_cp1_ParamLimits

0x0935,	// (0x00026eb1) bg_wml_button_pane_cp1

0xb7a1,	// (0x00031d1d) form_midp_field_text_pane_t1_ParamLimits

0x1591,	// (0x00027b0d) input_focus_pane_cp050_ParamLimits

0x185e,	// (0x00027dda) list_midp_form_text_pane_ParamLimits

0x1810,	// (0x00027d8c) input_focus_pane_cp051_ParamLimits

0x1824,	// (0x00027da0) list_midp_choice_pane_ParamLimits

0xb758,	// (0x00031cd4) list_single_2graphic_pane_cp3_ParamLimits

0xb758,	// (0x00031cd4) list_single_2graphic_pane_cp3

0x4ceb,	// (0x0002b267) list_single_midp_graphic_pane_ParamLimits

0x4ceb,	// (0x0002b267) list_single_midp_graphic_pane

0xe9c7,	// (0x00034f43) list_single_graphic_2heading_pane_g1_ParamLimits

0xe9c7,	// (0x00034f43) list_single_graphic_2heading_pane_g1

0xe82f,	// (0x00034dab) list_single_graphic_2heading_pane_g4_ParamLimits

0xe82f,	// (0x00034dab) list_single_graphic_2heading_pane_g4

0xe83b,	// (0x00034db7) list_single_graphic_2heading_pane_g5_ParamLimits

0xe83b,	// (0x00034db7) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00035d2c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00035d2c) list_single_graphic_2heading_pane_g

0xe9d3,	// (0x00034f4f) list_single_graphic_2heading_pane_t1_ParamLimits

0xe9d3,	// (0x00034f4f) list_single_graphic_2heading_pane_t1

0xe9e7,	// (0x00034f63) list_single_graphic_2heading_pane_t2_ParamLimits

0xe9e7,	// (0x00034f63) list_single_graphic_2heading_pane_t2

0xea03,	// (0x00034f7f) list_single_graphic_2heading_pane_t3_ParamLimits

0xea03,	// (0x00034f7f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00035d33) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00035d33) list_single_graphic_2heading_pane_t

0x13b4,	// (0x00027930) bg_popup_sub_pane_cp2

0x13de,	// (0x0002795a) grid_toobar_pane

0x141a,	// (0x00027996) cell_toolbar_pane_ParamLimits

0x141a,	// (0x00027996) cell_toolbar_pane

0x144a,	// (0x000279c6) cell_toolbar_pane_g1_ParamLimits

0x144a,	// (0x000279c6) cell_toolbar_pane_g1

0x145e,	// (0x000279da) cell_toolbar_pane_g2_ParamLimits

0x145e,	// (0x000279da) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x00035d41) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x00035d41) cell_toolbar_pane_g

0x1480,	// (0x000279fc) grid_highlight_pane_cp2_ParamLimits

0x1480,	// (0x000279fc) grid_highlight_pane_cp2

0x149a,	// (0x00027a16) toolbar_button_pane

0x14a6,	// (0x00027a22) toolbar_button_pane_g1

0x14ae,	// (0x00027a2a) toolbar_button_pane_g2

0x14b6,	// (0x00027a32) toolbar_button_pane_g3

0x14be,	// (0x00027a3a) toolbar_button_pane_g4

0x14c6,	// (0x00027a42) toolbar_button_pane_g5

0x14ce,	// (0x00027a4a) toolbar_button_pane_g6

0x14d6,	// (0x00027a52) toolbar_button_pane_g7

0x14de,	// (0x00027a5a) toolbar_button_pane_g8

0x14e6,	// (0x00027a62) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x00035d46) toolbar_button_pane_g

0x14f6,	// (0x00027a72) list_single_2graphic_pane_g1_cp3_ParamLimits

0x14f6,	// (0x00027a72) list_single_2graphic_pane_g1_cp3

0xb6ba,	// (0x00031c36) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb6ba,	// (0x00031c36) list_single_2graphic_pane_g2_cp3

0xd262,	// (0x000337de) list_single_2graphic_pane_g3_cp3

0x1513,	// (0x00027a8f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1513,	// (0x00027a8f) list_single_2graphic_pane_g4_cp3

0x151f,	// (0x00027a9b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x151f,	// (0x00027a9b) list_single_2graphic_pane_t1_cp3

0xd256,	// (0x000337d2) list_single_midp_graphic_pane_g2_ParamLimits

0xd256,	// (0x000337d2) list_single_midp_graphic_pane_g2

0x08c3,	// (0x00026e3f) aid_zoom_text_primary

0xe9b7,	// (0x00034f33) aid_zoom_text_secondary

0xa985,	// (0x00030f01) status_small_pane_g7_ParamLimits

0xa985,	// (0x00030f01) status_small_pane_g7

0xa9a8,	// (0x00030f24) status_small_pane_t1_ParamLimits

0x9b57,	// (0x000300d3) title_pane_g2

0x0003,

0xf54e,	// (0x00035aca) title_pane_g

0xa17a,	// (0x000306f6) aid_size_cell_colour_1_pane_ParamLimits

0xa17a,	// (0x000306f6) aid_size_cell_colour_1_pane

0xa18e,	// (0x0003070a) aid_size_cell_colour_2_pane_ParamLimits

0xa18e,	// (0x0003070a) aid_size_cell_colour_2_pane

0xa1a2,	// (0x0003071e) aid_size_cell_colour_3_pane_ParamLimits

0xa1a2,	// (0x0003071e) aid_size_cell_colour_3_pane

0xa1b6,	// (0x00030732) aid_size_cell_colour_4_pane_ParamLimits

0xa1b6,	// (0x00030732) aid_size_cell_colour_4_pane

0xf34f,	// (0x000358cb) title_pane_stacon_g1_ParamLimits

0xf34f,	// (0x000358cb) title_pane_stacon_g1

0x2efb,	// (0x00029477) popup_note_wait_window_g3_ParamLimits

0x2efb,	// (0x00029477) popup_note_wait_window_g3

0x2f72,	// (0x000294ee) popup_note_wait_window_t5_ParamLimits

0x2f72,	// (0x000294ee) popup_note_wait_window_t5

0x9a0c,	// (0x0002ff88) main_feb_china_hwr_fs_writing_pane

0xabde,	// (0x0003115a) popup_feb_china_hwr_fs_window_ParamLimits

0xabde,	// (0x0003115a) popup_feb_china_hwr_fs_window

0xb6cb,	// (0x00031c47) aid_size_cell_hwr_fs_ParamLimits

0xb6cb,	// (0x00031c47) aid_size_cell_hwr_fs

0x1591,	// (0x00027b0d) bg_popup_sub_pane_cp3_ParamLimits

0x1591,	// (0x00027b0d) bg_popup_sub_pane_cp3

0xb6e0,	// (0x00031c5c) grid_hwr_fs_pane_ParamLimits

0xb6e0,	// (0x00031c5c) grid_hwr_fs_pane

0x15b5,	// (0x00027b31) linegrid_hwr_fs_pane_ParamLimits

0x15b5,	// (0x00027b31) linegrid_hwr_fs_pane

0xb6f8,	// (0x00031c74) cell_hwr_fs_pane_ParamLimits

0xb6f8,	// (0x00031c74) cell_hwr_fs_pane

0x15e9,	// (0x00027b65) linegrid_hwr_fs_pane_g1_ParamLimits

0x15e9,	// (0x00027b65) linegrid_hwr_fs_pane_g1

0xb71e,	// (0x00031c9a) linegrid_hwr_fs_pane_g2_ParamLimits

0xb71e,	// (0x00031c9a) linegrid_hwr_fs_pane_g2

0x1607,	// (0x00027b83) linegrid_hwr_fs_pane_g3_ParamLimits

0x1607,	// (0x00027b83) linegrid_hwr_fs_pane_g3

0x1613,	// (0x00027b8f) linegrid_hwr_fs_pane_g4_ParamLimits

0x1613,	// (0x00027b8f) linegrid_hwr_fs_pane_g4

0x1631,	// (0x00027bad) linegrid_hwr_fs_pane_g5_ParamLimits

0x1631,	// (0x00027bad) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x00035d6c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x00035d6c) linegrid_hwr_fs_pane_g

0x1647,	// (0x00027bc3) cell_hwr_fs_pane_g1_ParamLimits

0x1647,	// (0x00027bc3) cell_hwr_fs_pane_g1

0x12eb,	// (0x00027867) cell_hwr_fs_pane_g2_ParamLimits

0x12eb,	// (0x00027867) cell_hwr_fs_pane_g2

0xb730,	// (0x00031cac) cell_hwr_fs_pane_g3_ParamLimits

0xb730,	// (0x00031cac) cell_hwr_fs_pane_g3

0xb73d,	// (0x00031cb9) cell_hwr_fs_pane_g4_ParamLimits

0xb73d,	// (0x00031cb9) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x00035d77) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00035d77) cell_hwr_fs_pane_g

0xb74a,	// (0x00031cc6) cell_hwr_fs_pane_t1

0x9a0c,	// (0x0002ff88) grid_highlight_pane_cp6

0x9a0c,	// (0x0002ff88) main_idle_act2_pane

0xcbbe,	// (0x0003313a) aid_inside_area_popup_secondary

0xb9c2,	// (0x00031f3e) aid_inside_area_window_primary_ParamLimits

0xb9c2,	// (0x00031f3e) aid_inside_area_window_primary

0x419f,	// (0x0002a71b) ai2_news_ticker_pane

0x41a7,	// (0x0002a723) aid_size_cell_ai1_link_ParamLimits

0x41a7,	// (0x0002a723) aid_size_cell_ai1_link

0x41c1,	// (0x0002a73d) popup_ai2_data_window_ParamLimits

0x41c1,	// (0x0002a73d) popup_ai2_data_window

0x41df,	// (0x0002a75b) popup_ai2_link_window_ParamLimits

0x41df,	// (0x0002a75b) popup_ai2_link_window

0x1591,	// (0x00027b0d) bg_popup_sub_pane_cp4_ParamLimits

0x1591,	// (0x00027b0d) bg_popup_sub_pane_cp4

0x41f5,	// (0x0002a771) grid_ai2_link_pane_ParamLimits

0x41f5,	// (0x0002a771) grid_ai2_link_pane

0x420c,	// (0x0002a788) popup_ai2_link_window_g1_ParamLimits

0x420c,	// (0x0002a788) popup_ai2_link_window_g1

0x4218,	// (0x0002a794) popup_ai2_link_window_g2_ParamLimits

0x4218,	// (0x0002a794) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00035f4a) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00035f4a) popup_ai2_link_window_g

0x4229,	// (0x0002a7a5) ai2_mp_button_pane

0x4231,	// (0x0002a7ad) ai2_mp_volume_pane

0x1810,	// (0x00027d8c) bg_popup_sub_pane_cp5_ParamLimits

0x1810,	// (0x00027d8c) bg_popup_sub_pane_cp5

0x4239,	// (0x0002a7b5) heading_ai2_gene_pane_ParamLimits

0x4239,	// (0x0002a7b5) heading_ai2_gene_pane

0x4245,	// (0x0002a7c1) list_ai2_gene_pane_ParamLimits

0x4245,	// (0x0002a7c1) list_ai2_gene_pane

0x428d,	// (0x0002a809) cell_ai2_link_pane_ParamLimits

0x428d,	// (0x0002a809) cell_ai2_link_pane

0x42a3,	// (0x0002a81f) cell_ai2_link_pane_g1

0x9a0c,	// (0x0002ff88) grid_highlight_pane_cp7

0x1bbb,	// (0x00028137) ai2_mp_volume_pane_g1

0x4376,	// (0x0002a8f2) ai2_mp_volume_pane_g2

0x42eb,	// (0x0002a867) list_ai2_gene_pane_t1

0x437e,	// (0x0002a8fa) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00035f63) ai2_mp_volume_pane_g

0x1bc3,	// (0x0002813f) volume_small_pane_cp3

0x4386,	// (0x0002a902) aid_size_cell_ai2_button

0x438e,	// (0x0002a90a) grid_ai2_button_pane

0x4397,	// (0x0002a913) cell_ai2_button_pane_ParamLimits

0x4397,	// (0x0002a913) cell_ai2_button_pane

0x991c,	// (0x0002fe98) cell_ai2_button_pane_g1

0x9a0c,	// (0x0002ff88) grid_highlight_pane_cp8

0x4336,	// (0x0002a8b2) ai2_gene_pane_t1_ParamLimits

0x4336,	// (0x0002a8b2) ai2_gene_pane_t1

0xab66,	// (0x000310e2) aid_height_parent_landscape

0xbbc8,	// (0x00032144) aid_height_set_list

0x3c4e,	// (0x0002a1ca) aid_size_parent

0x3fc0,	// (0x0002a53c) aid_size_cell_graphic_pane_ParamLimits

0x4255,	// (0x0002a7d1) popup_ai2_data_window_g1_ParamLimits

0x4255,	// (0x0002a7d1) popup_ai2_data_window_g1

0x4261,	// (0x0002a7dd) ai2_news_ticker_pane_g1

0x4269,	// (0x0002a7e5) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00035f4f) ai2_news_ticker_pane_g

0x4271,	// (0x0002a7ed) ai2_news_ticker_pane_t1

0x427f,	// (0x0002a7fb) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x00035f54) ai2_news_ticker_pane_t

0x42ac,	// (0x0002a828) heading_ai2_gene_pane_g1

0x42b4,	// (0x0002a830) heading_ai2_gene_pane_t1_ParamLimits

0x42b4,	// (0x0002a830) heading_ai2_gene_pane_t1

0x42c9,	// (0x0002a845) list_highlight_pane_cp6

0x42d1,	// (0x0002a84d) ai2_gene_pane_ParamLimits

0x42d1,	// (0x0002a84d) ai2_gene_pane

0x42f9,	// (0x0002a875) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00035f59) list_ai2_gene_pane_t

0x4307,	// (0x0002a883) list_highlight_pane_cp8_ParamLimits

0x4307,	// (0x0002a883) list_highlight_pane_cp8

0x4318,	// (0x0002a894) ai2_gene_pane_g1_ParamLimits

0x4318,	// (0x0002a894) ai2_gene_pane_g1

0x432a,	// (0x0002a8a6) ai2_gene_pane_g2_ParamLimits

0x432a,	// (0x0002a8a6) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00035f5e) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00035f5e) ai2_gene_pane_g

0xa4f7,	// (0x00030a73) scroll_pane_cp12

0xab25,	// (0x000310a1) control_pane_t3_ParamLimits

0xab25,	// (0x000310a1) control_pane_t3

0xa999,	// (0x00030f15) status_small_pane_g8_ParamLimits

0xa999,	// (0x00030f15) status_small_pane_g8

0xac80,	// (0x000311fc) popup_find_window_ParamLimits

0xaf31,	// (0x000314ad) popup_note_image_window_ParamLimits

0xe859,	// (0x00034dd5) list_double2_graphic_pane_vc_g1_ParamLimits

0xe859,	// (0x00034dd5) list_double2_graphic_pane_vc_g1

0xea1b,	// (0x00034f97) list_double2_graphic_pane_vc_g2_ParamLimits

0xea1b,	// (0x00034f97) list_double2_graphic_pane_vc_g2

0xea27,	// (0x00034fa3) list_double2_graphic_pane_vc_g3_ParamLimits

0xea27,	// (0x00034fa3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x00035d3a) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x00035d3a) list_double2_graphic_pane_vc_g

0xea33,	// (0x00034faf) list_double2_graphic_pane_vc_t1_ParamLimits

0xea33,	// (0x00034faf) list_double2_graphic_pane_vc_t1

0xe82f,	// (0x00034dab) list_single_heading_pane_vc_g1_ParamLimits

0xe82f,	// (0x00034dab) list_single_heading_pane_vc_g1

0xe83b,	// (0x00034db7) list_single_heading_pane_vc_g2_ParamLimits

0xe83b,	// (0x00034db7) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035b44) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035b44) list_single_heading_pane_vc_g

0xea49,	// (0x00034fc5) list_single_heading_pane_vc_t1_ParamLimits

0xea49,	// (0x00034fc5) list_single_heading_pane_vc_t1

0xea61,	// (0x00034fdd) list_single_heading_pane_vc_t2_ParamLimits

0xea61,	// (0x00034fdd) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x00035d5b) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x00035d5b) list_single_heading_pane_vc_t

0xea73,	// (0x00034fef) list_setting_number_pane_vc_g1_ParamLimits

0xea73,	// (0x00034fef) list_setting_number_pane_vc_g1

0xea7f,	// (0x00034ffb) list_setting_number_pane_vc_g2_ParamLimits

0xea7f,	// (0x00034ffb) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00035d60) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00035d60) list_setting_number_pane_vc_g

0xea8b,	// (0x00035007) list_setting_number_pane_vc_t1_ParamLimits

0xea8b,	// (0x00035007) list_setting_number_pane_vc_t1

0xea9f,	// (0x0003501b) list_setting_number_pane_vc_t2_ParamLimits

0xea9f,	// (0x0003501b) list_setting_number_pane_vc_t2

0xeabb,	// (0x00035037) list_setting_number_pane_vc_t3_ParamLimits

0xeabb,	// (0x00035037) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x00035d65) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x00035d65) list_setting_number_pane_vc_t

0xeae9,	// (0x00035065) set_value_pane_vc_ParamLimits

0xeae9,	// (0x00035065) set_value_pane_vc

0xeb20,	// (0x0003509c) list_double2_graphic_pane_vc_ParamLimits

0xeb20,	// (0x0003509c) list_double2_graphic_pane_vc

0x3e26,	// (0x0002a3a2) list_double2_large_graphic_pane_vc_ParamLimits

0x3e26,	// (0x0002a3a2) list_double2_large_graphic_pane_vc

0xeb20,	// (0x0003509c) list_double2_pane_vc_ParamLimits

0xeb20,	// (0x0003509c) list_double2_pane_vc

0xeb20,	// (0x0003509c) list_double_graphic_heading_pane_vc_ParamLimits

0xeb20,	// (0x0003509c) list_double_graphic_heading_pane_vc

0xeb20,	// (0x0003509c) list_double_graphic_pane_vc_ParamLimits

0xeb20,	// (0x0003509c) list_double_graphic_pane_vc

0xeb20,	// (0x0003509c) list_double_heading_pane_vc_ParamLimits

0xeb20,	// (0x0003509c) list_double_heading_pane_vc

0x3e3a,	// (0x0002a3b6) list_double_large_graphic_pane_vc_ParamLimits

0x3e3a,	// (0x0002a3b6) list_double_large_graphic_pane_vc

0xeb20,	// (0x0003509c) list_double_number_pane_vc_ParamLimits

0xeb20,	// (0x0003509c) list_double_number_pane_vc

0xeb20,	// (0x0003509c) list_double_pane_vc_ParamLimits

0xeb20,	// (0x0003509c) list_double_pane_vc

0xeb20,	// (0x0003509c) list_double_time_pane_vc_ParamLimits

0xeb20,	// (0x0003509c) list_double_time_pane_vc

0xeb20,	// (0x0003509c) list_setting_number_pane_vc_ParamLimits

0xeb20,	// (0x0003509c) list_setting_number_pane_vc

0xeb20,	// (0x0003509c) list_setting_pane_vc_ParamLimits

0xeb20,	// (0x0003509c) list_setting_pane_vc

0xeb20,	// (0x0003509c) list_single_graphic_heading_pane_vc_ParamLimits

0xeb20,	// (0x0003509c) list_single_graphic_heading_pane_vc

0xeb20,	// (0x0003509c) list_single_heading_pane_vc_ParamLimits

0xeb20,	// (0x0003509c) list_single_heading_pane_vc

0xeb20,	// (0x0003509c) list_single_number_heading_pane_vc_ParamLimits

0xeb20,	// (0x0003509c) list_single_number_heading_pane_vc

0xe859,	// (0x00034dd5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe859,	// (0x00034dd5) list_double_graphic_heading_pane_vc_g1

0xe82f,	// (0x00034dab) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe82f,	// (0x00034dab) list_double_graphic_heading_pane_vc_g2

0xe83b,	// (0x00034db7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe83b,	// (0x00034db7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x00035f6a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00035f6a) list_double_graphic_heading_pane_vc_g

0xeb35,	// (0x000350b1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeb35,	// (0x000350b1) list_double_graphic_heading_pane_vc_t1

0xeb4b,	// (0x000350c7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeb4b,	// (0x000350c7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00035f71) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00035f71) list_double_graphic_heading_pane_vc_t

0xea73,	// (0x00034fef) list_setting_pane_vc_g1_ParamLimits

0xea73,	// (0x00034fef) list_setting_pane_vc_g1

0xea7f,	// (0x00034ffb) list_setting_pane_vc_g2_ParamLimits

0xea7f,	// (0x00034ffb) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00035d60) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00035d60) list_setting_pane_vc_g

0xeb69,	// (0x000350e5) list_setting_pane_vc_t1_ParamLimits

0xeb69,	// (0x000350e5) list_setting_pane_vc_t1

0xeb85,	// (0x00035101) list_setting_pane_vc_t2_ParamLimits

0xeb85,	// (0x00035101) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x00035fb4) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x00035fb4) list_setting_pane_vc_t

0xeae9,	// (0x00035065) set_value_pane_cp_vc_ParamLimits

0xeae9,	// (0x00035065) set_value_pane_cp_vc

0xe82f,	// (0x00034dab) list_single_number_heading_pane_vc_g1_ParamLimits

0xe82f,	// (0x00034dab) list_single_number_heading_pane_vc_g1

0xe83b,	// (0x00034db7) list_single_number_heading_pane_vc_g2_ParamLimits

0xe83b,	// (0x00034db7) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035b44) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035b44) list_single_number_heading_pane_vc_g

0xea49,	// (0x00034fc5) list_single_number_heading_pane_vc_t1_ParamLimits

0xea49,	// (0x00034fc5) list_single_number_heading_pane_vc_t1

0xeba1,	// (0x0003511d) list_single_number_heading_pane_vc_t2_ParamLimits

0xeba1,	// (0x0003511d) list_single_number_heading_pane_vc_t2

0xe847,	// (0x00034dc3) list_single_number_heading_pane_vc_t3_ParamLimits

0xe847,	// (0x00034dc3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x00035fb9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x00035fb9) list_single_number_heading_pane_vc_t

0xe859,	// (0x00034dd5) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe859,	// (0x00034dd5) list_single_graphic_heading_pane_vc_g1

0xe82f,	// (0x00034dab) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe82f,	// (0x00034dab) list_single_graphic_heading_pane_vc_g4

0xe83b,	// (0x00034db7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe83b,	// (0x00034db7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x00035f6a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00035f6a) list_single_graphic_heading_pane_vc_g

0xea49,	// (0x00034fc5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xea49,	// (0x00034fc5) list_single_graphic_heading_pane_vc_t1

0xebb3,	// (0x0003512f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xebb3,	// (0x0003512f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa44,	// (0x00035fc0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa44,	// (0x00035fc0) list_single_graphic_heading_pane_vc_t

0xe82f,	// (0x00034dab) list_double2_pane_vc_g1_ParamLimits

0xe82f,	// (0x00034dab) list_double2_pane_vc_g1

0xe83b,	// (0x00034db7) list_double2_pane_vc_g2_ParamLimits

0xe83b,	// (0x00034db7) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035b44) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035b44) list_double2_pane_vc_g

0xeb0a,	// (0x00035086) list_double2_pane_vc_t1_ParamLimits

0xeb0a,	// (0x00035086) list_double2_pane_vc_t1

0xe865,	// (0x00034de1) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe865,	// (0x00034de1) list_double2_large_graphic_pane_vc_g1

0xe871,	// (0x00034ded) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe871,	// (0x00034ded) list_double2_large_graphic_pane_vc_g2

0xe87d,	// (0x00034df9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe87d,	// (0x00034df9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00035b61) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00035b61) list_double2_large_graphic_pane_vc_g

0xe889,	// (0x00034e05) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe889,	// (0x00034e05) list_double2_large_graphic_pane_vc_t1

0xebc5,	// (0x00035141) list_double_time_pane_vc_g1_ParamLimits

0xebc5,	// (0x00035141) list_double_time_pane_vc_g1

0xebd1,	// (0x0003514d) list_double_time_pane_vc_g2_ParamLimits

0xebd1,	// (0x0003514d) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x00035fc5) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x00035fc5) list_double_time_pane_vc_g

0xebdd,	// (0x00035159) list_double_time_pane_vc_t1_ParamLimits

0xebdd,	// (0x00035159) list_double_time_pane_vc_t1

0xec07,	// (0x00035183) list_double_time_pane_vc_t2_ParamLimits

0xec07,	// (0x00035183) list_double_time_pane_vc_t2

0xec50,	// (0x000351cc) list_double_time_pane_vc_t3_ParamLimits

0xec50,	// (0x000351cc) list_double_time_pane_vc_t3

0xec62,	// (0x000351de) list_double_time_pane_vc_t4_ParamLimits

0xec62,	// (0x000351de) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x00035fca) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x00035fca) list_double_time_pane_vc_t

0xe82f,	// (0x00034dab) list_double_pane_vc_g1_ParamLimits

0xe82f,	// (0x00034dab) list_double_pane_vc_g1

0xe83b,	// (0x00034db7) list_double_pane_vc_g2_ParamLimits

0xe83b,	// (0x00034db7) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035b44) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035b44) list_double_pane_vc_g

0xec87,	// (0x00035203) list_double_pane_vc_t1_ParamLimits

0xec87,	// (0x00035203) list_double_pane_vc_t1

0xec9b,	// (0x00035217) list_double_pane_vc_t2_ParamLimits

0xec9b,	// (0x00035217) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x00035fd3) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x00035fd3) list_double_pane_vc_t

0xe82f,	// (0x00034dab) list_double_number_pane_vc_g1_ParamLimits

0xe82f,	// (0x00034dab) list_double_number_pane_vc_g1

0xe83b,	// (0x00034db7) list_double_number_pane_vc_g2_ParamLimits

0xe83b,	// (0x00034db7) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035b44) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035b44) list_double_number_pane_vc_g

0xecb1,	// (0x0003522d) list_double_number_pane_vc_t1_ParamLimits

0xecb1,	// (0x0003522d) list_double_number_pane_vc_t1

0xecc5,	// (0x00035241) list_double_number_pane_vc_t2_ParamLimits

0xecc5,	// (0x00035241) list_double_number_pane_vc_t2

0xecd9,	// (0x00035255) list_double_number_pane_vc_t3_ParamLimits

0xecd9,	// (0x00035255) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x00035fd8) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x00035fd8) list_double_number_pane_vc_t

0xecef,	// (0x0003526b) list_double_large_graphic_pane_vc_g1_ParamLimits

0xecef,	// (0x0003526b) list_double_large_graphic_pane_vc_g1

0xed17,	// (0x00035293) list_double_large_graphic_pane_vc_g2_ParamLimits

0xed17,	// (0x00035293) list_double_large_graphic_pane_vc_g2

0xed2b,	// (0x000352a7) list_double_large_graphic_pane_vc_g3_ParamLimits

0xed2b,	// (0x000352a7) list_double_large_graphic_pane_vc_g3

0xed3a,	// (0x000352b6) list_double_large_graphic_pane_vc_g4_ParamLimits

0xed3a,	// (0x000352b6) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x00035fdf) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x00035fdf) list_double_large_graphic_pane_vc_g

0xed4a,	// (0x000352c6) list_double_large_graphic_pane_vc_t1_ParamLimits

0xed4a,	// (0x000352c6) list_double_large_graphic_pane_vc_t1

0xed6c,	// (0x000352e8) list_double_large_graphic_pane_vc_t2_ParamLimits

0xed6c,	// (0x000352e8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x00035fe8) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x00035fe8) list_double_large_graphic_pane_vc_t

0xe82f,	// (0x00034dab) list_double_heading_pane_vc_g1_ParamLimits

0xe82f,	// (0x00034dab) list_double_heading_pane_vc_g1

0xe83b,	// (0x00034db7) list_double_heading_pane_vc_g2_ParamLimits

0xe83b,	// (0x00034db7) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035b44) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035b44) list_double_heading_pane_vc_g

0xed8c,	// (0x00035308) list_double_heading_pane_vc_t1_ParamLimits

0xed8c,	// (0x00035308) list_double_heading_pane_vc_t1

0xea49,	// (0x00034fc5) list_double_heading_pane_vc_t2_ParamLimits

0xea49,	// (0x00034fc5) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x00035fed) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x00035fed) list_double_heading_pane_vc_t

0xed9e,	// (0x0003531a) list_double_graphic_pane_vc_g1_ParamLimits

0xed9e,	// (0x0003531a) list_double_graphic_pane_vc_g1

0xedb1,	// (0x0003532d) list_double_graphic_pane_vc_g2_ParamLimits

0xedb1,	// (0x0003532d) list_double_graphic_pane_vc_g2

0xe82f,	// (0x00034dab) list_double_graphic_pane_vc_g3_ParamLimits

0xe82f,	// (0x00034dab) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x00035ff2) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x00035ff2) list_double_graphic_pane_vc_g

0xedce,	// (0x0003534a) list_double_graphic_pane_vc_t1_ParamLimits

0xedce,	// (0x0003534a) list_double_graphic_pane_vc_t1

0xedf8,	// (0x00035374) list_double_graphic_pane_vc_t2_ParamLimits

0xedf8,	// (0x00035374) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x00035ffb) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x00035ffb) list_double_graphic_pane_vc_t

0xf076,	// (0x000355f2) aid_size_cell_fastswap

0x9926,	// (0x0002fea2) aid_size_cell_touch_ParamLimits

0x9926,	// (0x0002fea2) aid_size_cell_touch

0xf1f3,	// (0x0003576f) popup_fast_swap_wide_window_ParamLimits

0xf1f3,	// (0x0003576f) popup_fast_swap_wide_window

0x9aee,	// (0x0003006a) touch_pane_ParamLimits

0x9aee,	// (0x0003006a) touch_pane

0xca97,	// (0x00033013) button_value_adjust_pane_cp2

0xe8c2,	// (0x00034e3e) button_value_adjust_pane_cp4

0xe8ca,	// (0x00034e46) form_field_data_pane_cp2

0x94b8,	// (0x0002fa34) form_field_data_wide_pane_cp2

0xcdfd,	// (0x00033379) bg_scroll_pane_ParamLimits

0xf4ab,	// (0x00035a27) scroll_handle_pane_ParamLimits

0xf4bf,	// (0x00035a3b) scroll_sc2_down_pane_ParamLimits

0xf4bf,	// (0x00035a3b) scroll_sc2_down_pane

0xce2e,	// (0x000333aa) scroll_sc2_up_pane_ParamLimits

0xce2e,	// (0x000333aa) scroll_sc2_up_pane

0xbf91,	// (0x0003250d) grid_wheel_folder_pane_g1_ParamLimits

0xbf91,	// (0x0003250d) grid_wheel_folder_pane_g1

0x01bd,	// (0x00026739) clock_nsta_pane_cp2_ParamLimits

0x01bd,	// (0x00026739) clock_nsta_pane_cp2

0x0935,	// (0x00026eb1) listscroll_midp_pane_ParamLimits

0xa884,	// (0x00030e00) midp_canvas_pane

0x08a9,	// (0x00026e25) nsta_clock_indic_pane

0x08ff,	// (0x00026e7b) listscroll_form_pane_vc

0x0923,	// (0x00026e9f) listscroll_set_pane_vc_ParamLimits

0x0923,	// (0x00026e9f) listscroll_set_pane_vc

0xb3ad,	// (0x00031929) clock_nsta_pane

0xb3d7,	// (0x00031953) indicator_nsta_pane

0x13b4,	// (0x00027930) bg_popup_sub_pane_cp2_ParamLimits

0x13c8,	// (0x00027944) find_pane_cp2_ParamLimits

0x13c8,	// (0x00027944) find_pane_cp2

0x13de,	// (0x0002795a) grid_toobar_pane_ParamLimits

0x1550,	// (0x00027acc) list_form_gen_pane_vc_ParamLimits

0x1550,	// (0x00027acc) list_form_gen_pane_vc

0x1566,	// (0x00027ae2) scroll_pane_cp8_vc_ParamLimits

0x1566,	// (0x00027ae2) scroll_pane_cp8_vc

0x1685,	// (0x00027c01) data_form_wide_pane_vc_ParamLimits

0x1685,	// (0x00027c01) data_form_wide_pane_vc

0x1691,	// (0x00027c0d) form_field_data_wide_pane_vc_g1

0x1699,	// (0x00027c15) form_field_data_wide_pane_vc_t1_ParamLimits

0x1699,	// (0x00027c15) form_field_data_wide_pane_vc_t1

0xcaab,	// (0x00033027) input_focus_pane_cp6_vc_ParamLimits

0xcaab,	// (0x00033027) input_focus_pane_cp6_vc

0xb7c9,	// (0x00031d45) list_midp_pane_ParamLimits

0x402c,	// (0x0002a5a8) scroll_pane_cp16_ParamLimits

0x402c,	// (0x0002a5a8) scroll_pane_cp16

0x2ccf,	// (0x0002924b) button_value_adjust_pane_ParamLimits

0x2ccf,	// (0x0002924b) button_value_adjust_pane

0xbbd9,	// (0x00032155) button_value_adjust_pane_cp6_ParamLimits

0xbbd9,	// (0x00032155) button_value_adjust_pane_cp6

0xbd1b,	// (0x00032297) settings_code_pane_cp_ParamLimits

0xbd1b,	// (0x00032297) settings_code_pane_cp

0x991c,	// (0x0002fe98) cell_touch_pane_g1

0x991c,	// (0x0002fe98) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00035c7f) cell_touch_pane_g

0xbe6a,	// (0x000323e6) cell_touch_pane_cp_ParamLimits

0xbe6a,	// (0x000323e6) cell_touch_pane_cp

0xbe86,	// (0x00032402) cell_touch_pane_ParamLimits

0xbe86,	// (0x00032402) cell_touch_pane

0x991c,	// (0x0002fe98) scroll_sc2_down_pane_g1

0x991c,	// (0x0002fe98) scroll_sc2_up_pane_g1

0x9a0c,	// (0x0002ff88) bg_set_opt_pane_cp4_vc

0x43ca,	// (0x0002a946) list_set_graphic_pane_vc_g1_ParamLimits

0x43ca,	// (0x0002a946) list_set_graphic_pane_vc_g1

0xd331,	// (0x000338ad) list_set_graphic_pane_vc_g2_ParamLimits

0xd331,	// (0x000338ad) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x00035f76) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x00035f76) list_set_graphic_pane_vc_g

0x43d6,	// (0x0002a952) text_primary_small_cp13_vc_ParamLimits

0x43d6,	// (0x0002a952) text_primary_small_cp13_vc

0x43ee,	// (0x0002a96a) list_set_graphic_pane_vc_ParamLimits

0x43ee,	// (0x0002a96a) list_set_graphic_pane_vc

0x9a0c,	// (0x0002ff88) input_focus_pane_cp2_vc

0x991c,	// (0x0002fe98) setting_code_pane_vc_g1

0x9ca4,	// (0x00030220) setting_code_pane_vc_t1

0x4403,	// (0x0002a97f) set_text_pane_vc_t1_ParamLimits

0x4403,	// (0x0002a97f) set_text_pane_vc_t1

0x9a0c,	// (0x0002ff88) input_focus_pane_cp1_vc

0x4421,	// (0x0002a99d) list_set_text_pane_vc

0x991c,	// (0x0002fe98) setting_text_pane_vc_g1

0x9a0c,	// (0x0002ff88) bg_set_opt_pane_cp2_vc

0x9c9b,	// (0x00030217) setting_slider_graphic_pane_vc_g1

0x442b,	// (0x0002a9a7) setting_slider_graphic_pane_vc_t1

0x443d,	// (0x0002a9b9) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x00035f7b) setting_slider_graphic_pane_vc_t

0x444f,	// (0x0002a9cb) slider_set_pane_cp_vc

0x4459,	// (0x0002a9d5) slider_set_pane_vc_g1

0x4462,	// (0x0002a9de) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x00035f80) slider_set_pane_vc_g

0xcb06,	// (0x00033082) set_opt_bg_pane_g1_copy1

0xcb0e,	// (0x0003308a) set_opt_bg_pane_g2_copy1

0x448e,	// (0x0002aa0a) set_opt_bg_pane_g3_copy1

0xcb1e,	// (0x0003309a) set_opt_bg_pane_g4_copy1

0xcb26,	// (0x000330a2) set_opt_bg_pane_g5_copy1

0xcb2e,	// (0x000330aa) set_opt_bg_pane_g6_copy1

0x4498,	// (0x0002aa14) set_opt_bg_pane_g7_copy1

0x44a2,	// (0x0002aa1e) set_opt_bg_pane_g8_copy1

0x44ac,	// (0x0002aa28) set_opt_bg_pane_g9_copy1

0x9a0c,	// (0x0002ff88) bg_set_opt_pane_cp_vc

0x44b6,	// (0x0002aa32) setting_slider_pane_vc_t1

0x44c5,	// (0x0002aa41) setting_slider_pane_vc_t2

0x44d7,	// (0x0002aa53) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x00035f8f) setting_slider_pane_vc_t

0x44e9,	// (0x0002aa65) slider_set_pane_vc

0x18bb,	// (0x00027e37) volume_set_pane_vc_g1

0x18c4,	// (0x00027e40) volume_set_pane_vc_g2

0x18cd,	// (0x00027e49) volume_set_pane_vc_g3

0x18d6,	// (0x00027e52) volume_set_pane_vc_g4

0x18df,	// (0x00027e5b) volume_set_pane_vc_g5

0x18e8,	// (0x00027e64) volume_set_pane_vc_g6

0x18f1,	// (0x00027e6d) volume_set_pane_vc_g7

0x18fa,	// (0x00027e76) volume_set_pane_vc_g8

0x1903,	// (0x00027e7f) volume_set_pane_vc_g9

0x190c,	// (0x00027e88) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x00035f96) volume_set_pane_vc_g

0x44f3,	// (0x0002aa6f) volume_set_pane_vc

0x44fd,	// (0x0002aa79) button_value_adjust_pane_cp1_vc

0x4507,	// (0x0002aa83) list_highlight_pane_cp2_vc

0x4510,	// (0x0002aa8c) list_set_pane_vc_ParamLimits

0x4510,	// (0x0002aa8c) list_set_pane_vc

0x4580,	// (0x0002aafc) main_pane_set_vc_t1_ParamLimits

0x4580,	// (0x0002aafc) main_pane_set_vc_t1

0x4595,	// (0x0002ab11) main_pane_set_vc_t2_ParamLimits

0x4595,	// (0x0002ab11) main_pane_set_vc_t2

0x45a7,	// (0x0002ab23) main_pane_set_vc_t3_ParamLimits

0x45a7,	// (0x0002ab23) main_pane_set_vc_t3

0x45bb,	// (0x0002ab37) main_pane_set_vc_t4_ParamLimits

0x45bb,	// (0x0002ab37) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x00035fab) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x00035fab) main_pane_set_vc_t

0x45cf,	// (0x0002ab4b) setting_code_pane_vc_ParamLimits

0x45cf,	// (0x0002ab4b) setting_code_pane_vc

0x45e0,	// (0x0002ab5c) setting_slider_graphic_pane_vc

0x45e0,	// (0x0002ab5c) setting_slider_pane_vc

0x45e0,	// (0x0002ab5c) setting_text_pane_vc

0x45e0,	// (0x0002ab5c) setting_volume_pane_vc

0x45ea,	// (0x0002ab66) scroll_pane_cp121_vc

0xca85,	// (0x00033001) set_content_pane_vc

0x45f2,	// (0x0002ab6e) button_value_adjust_pane_g1

0x45fb,	// (0x0002ab77) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x00036000) button_value_adjust_pane_g

0x4604,	// (0x0002ab80) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4604,	// (0x0002ab80) form_field_slider_wide_pane_vc_t1

0x4616,	// (0x0002ab92) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4616,	// (0x0002ab92) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x00036005) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00036005) form_field_slider_wide_pane_vc_t

0x9c4b,	// (0x000301c7) input_focus_pane_cp10_vc_ParamLimits

0x9c4b,	// (0x000301c7) input_focus_pane_cp10_vc

0x4642,	// (0x0002abbe) slider_cont_pane_cp1_vc_ParamLimits

0x4642,	// (0x0002abbe) slider_cont_pane_cp1_vc

0x4654,	// (0x0002abd0) slider_form_pane_g1_cp2

0x4462,	// (0x0002a9de) slider_form_pane_g2_cp2

0x4681,	// (0x0002abfd) form_field_slider_pane_vc_t3

0x468f,	// (0x0002ac0b) form_field_slider_pane_vc_t4

0x469d,	// (0x0002ac19) slider_form_pane_vc_ParamLimits

0x469d,	// (0x0002ac19) slider_form_pane_vc

0x46aa,	// (0x0002ac26) form_field_slider_pane_vc_t1_ParamLimits

0x46aa,	// (0x0002ac26) form_field_slider_pane_vc_t1

0x4616,	// (0x0002ab92) form_field_slider_pane_vc_t2_ParamLimits

0x4616,	// (0x0002ab92) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x00036017) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x00036017) form_field_slider_pane_vc_t

0x9c4b,	// (0x000301c7) input_focus_pane_cp9_vc_ParamLimits

0x9c4b,	// (0x000301c7) input_focus_pane_cp9_vc

0x46c0,	// (0x0002ac3c) slider_cont_pane_vc_ParamLimits

0x46c0,	// (0x0002ac3c) slider_cont_pane_vc

0x46d4,	// (0x0002ac50) list_form_graphic_pane_cp_vc_ParamLimits

0x46d4,	// (0x0002ac50) list_form_graphic_pane_cp_vc

0x1691,	// (0x00027c0d) form_field_popup_wide_pane_vc_g1

0x46e9,	// (0x0002ac65) form_field_popup_wide_pane_vc_t1_ParamLimits

0x46e9,	// (0x0002ac65) form_field_popup_wide_pane_vc_t1

0xcaab,	// (0x00033027) input_focus_pane_cp8_vc_ParamLimits

0xcaab,	// (0x00033027) input_focus_pane_cp8_vc

0x472e,	// (0x0002acaa) list_form_wide_pane_vc_ParamLimits

0x472e,	// (0x0002acaa) list_form_wide_pane_vc

0x473a,	// (0x0002acb6) list_form_graphic_pane_vc_g1

0x4742,	// (0x0002acbe) list_form_graphic_pane_vc_t1_ParamLimits

0x4742,	// (0x0002acbe) list_form_graphic_pane_vc_t1

0x9c8d,	// (0x00030209) list_highlight_pane_cp5_vc_ParamLimits

0x9c8d,	// (0x00030209) list_highlight_pane_cp5_vc

0x475e,	// (0x0002acda) list_form_graphic_pane_vc_ParamLimits

0x475e,	// (0x0002acda) list_form_graphic_pane_vc

0x1691,	// (0x00027c0d) form_field_popup_pane_vc_g1

0x4774,	// (0x0002acf0) form_field_popup_pane_vc_t1_ParamLimits

0x4774,	// (0x0002acf0) form_field_popup_pane_vc_t1

0xcaab,	// (0x00033027) input_focus_pane_cp7_vc_ParamLimits

0xcaab,	// (0x00033027) input_focus_pane_cp7_vc

0x478b,	// (0x0002ad07) list_form_pane_vc_ParamLimits

0x478b,	// (0x0002ad07) list_form_pane_vc

0x4797,	// (0x0002ad13) data_form_pane_vc_t1_ParamLimits

0x4797,	// (0x0002ad13) data_form_pane_vc_t1

0xcb06,	// (0x00033082) input_focus_pane_vc_g1

0xcb0e,	// (0x0003308a) input_focus_pane_vc_g2

0xcb16,	// (0x00033092) input_focus_pane_vc_g3

0xcb1e,	// (0x0003309a) input_focus_pane_vc_g4

0xcb26,	// (0x000330a2) input_focus_pane_vc_g5

0xcb2e,	// (0x000330aa) input_focus_pane_vc_g6

0xcb36,	// (0x000330b2) input_focus_pane_vc_g7

0xcb3e,	// (0x000330ba) input_focus_pane_vc_g8

0xcb46,	// (0x000330c2) input_focus_pane_vc_g9

0x991c,	// (0x0002fe98) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00035c08) input_focus_pane_vc_g

0x1685,	// (0x00027c01) data_form_pane_vc_ParamLimits

0x1685,	// (0x00027c01) data_form_pane_vc

0x1691,	// (0x00027c0d) form_field_data_pane_vc_g1

0x47b4,	// (0x0002ad30) form_field_data_pane_vc_t1_ParamLimits

0x47b4,	// (0x0002ad30) form_field_data_pane_vc_t1

0xcaab,	// (0x00033027) input_focus_pane_vc_ParamLimits

0xcaab,	// (0x00033027) input_focus_pane_vc

0x47ce,	// (0x0002ad4a) button_value_adjust_pane_cp3_vc

0x47d6,	// (0x0002ad52) button_value_adjust_pane_cp5_vc

0x47de,	// (0x0002ad5a) form_field_data_pane_vc_ParamLimits

0x47de,	// (0x0002ad5a) form_field_data_pane_vc

0x47f9,	// (0x0002ad75) form_field_data_pane_vc_cp2

0x4801,	// (0x0002ad7d) form_field_data_wide_pane_vc_ParamLimits

0x4801,	// (0x0002ad7d) form_field_data_wide_pane_vc

0x481b,	// (0x0002ad97) form_field_data_wide_pane_vc_cp2

0x4823,	// (0x0002ad9f) form_field_popup_pane_vc_ParamLimits

0x4823,	// (0x0002ad9f) form_field_popup_pane_vc

0x483e,	// (0x0002adba) form_field_popup_wide_pane_vc_ParamLimits

0x483e,	// (0x0002adba) form_field_popup_wide_pane_vc

0x4858,	// (0x0002add4) form_field_slider_pane_vc_ParamLimits

0x4858,	// (0x0002add4) form_field_slider_pane_vc

0x486b,	// (0x0002ade7) form_field_slider_wide_pane_vc_ParamLimits

0x486b,	// (0x0002ade7) form_field_slider_wide_pane_vc

0xbea4,	// (0x00032420) grid_touch_1_pane_ParamLimits

0xbea4,	// (0x00032420) grid_touch_1_pane

0xbeb8,	// (0x00032434) grid_touch_2_pane_ParamLimits

0xbeb8,	// (0x00032434) grid_touch_2_pane

0x493c,	// (0x0002aeb8) touch_pane_g1_ParamLimits

0x493c,	// (0x0002aeb8) touch_pane_g1

0x48a4,	// (0x0002ae20) cell_app_pane_cp_wide_ParamLimits

0x48a4,	// (0x0002ae20) cell_app_pane_cp_wide

0x48b5,	// (0x0002ae31) grid_popup_fast_wide_pane_ParamLimits

0x48b5,	// (0x0002ae31) grid_popup_fast_wide_pane

0x48c9,	// (0x0002ae45) scroll_pane_cp19_ParamLimits

0x48c9,	// (0x0002ae45) scroll_pane_cp19

0x9a0c,	// (0x0002ff88) bg_popup_window_pane_cp20

0x48dd,	// (0x0002ae59) listscroll_popup_fast_wide_pane

0xd33d,	// (0x000338b9) grid_indicator_nsta_pane

0x48e5,	// (0x0002ae61) clock_nsta_pane_g1

0x48ee,	// (0x0002ae6a) clock_nsta_pane_t1

0xbee4,	// (0x00032460) cell_indicator_nsta_pane_ParamLimits

0xbee4,	// (0x00032460) cell_indicator_nsta_pane

0x493c,	// (0x0002aeb8) cell_indicator_nsta_pane_g1

0xbefd,	// (0x00032479) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x00036028) cell_indicator_nsta_pane_g

0x4960,	// (0x0002aedc) clock_nsta_pane_cp

0x4968,	// (0x0002aee4) indicator_nsta_pane_cp

0x4971,	// (0x0002aeed) nsta_clock_indic_pane_g1

0x9d89,	// (0x00030305) grid_indicator_pane

0xcf20,	// (0x0003349c) scroll_pane_cp29

0x0109,	// (0x00026685) indicator_nsta_pane_cp2_ParamLimits

0x0109,	// (0x00026685) indicator_nsta_pane_cp2

0x9c8d,	// (0x00030209) main_apps_wheel_pane

0x1878,	// (0x00027df4) form_midp_field_text_pane_ParamLimits

0x2ca1,	// (0x0002921d) scroll_bar_cp050_ParamLimits

0x49da,	// (0x0002af56) cell_indicator_pane_ParamLimits

0x49da,	// (0x0002af56) cell_indicator_pane

0x49f2,	// (0x0002af6e) cell_indicator_pane_g1

0xbf13,	// (0x0003248f) grid_wheel_folder_pane_ParamLimits

0xbf13,	// (0x0003248f) grid_wheel_folder_pane

0xbf21,	// (0x0003249d) list_wheel_apps_pane_ParamLimits

0xbf21,	// (0x0003249d) list_wheel_apps_pane

0xbf2f,	// (0x000324ab) main_apps_wheel_pane_g1_ParamLimits

0xbf2f,	// (0x000324ab) main_apps_wheel_pane_g1

0xbf3f,	// (0x000324bb) main_apps_wheel_pane_g2_ParamLimits

0xbf3f,	// (0x000324bb) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x00036044) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x00036044) main_apps_wheel_pane_g

0xbf4f,	// (0x000324cb) main_apps_wheel_pane_t1_ParamLimits

0xbf4f,	// (0x000324cb) main_apps_wheel_pane_t1

0xbf67,	// (0x000324e3) list_wheel_apps_pane_g1

0xbf6f,	// (0x000324eb) list_wheel_apps_pane_g2

0xbf77,	// (0x000324f3) list_wheel_apps_pane_g3

0xbf7f,	// (0x000324fb) list_wheel_apps_pane_g4

0xbf87,	// (0x00032503) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x00036049) list_wheel_apps_pane_g

0xd2a0,	// (0x0003381c) navi_icon_text_pane

0xb29f,	// (0x0003181b) aid_fill_nsta

0xbfa4,	// (0x00032520) navi_icon_text_pane_g1

0xbfb0,	// (0x0003252c) navi_icon_text_pane_t1

0xa7dd,	// (0x00030d59) list_set_graphic_pane_t1_ParamLimits

0xa7dd,	// (0x00030d59) list_set_graphic_pane_t1

0x33f2,	// (0x0002996e) popup_midp_note_alarm_window_t6_ParamLimits

0x33f2,	// (0x0002996e) popup_midp_note_alarm_window_t6

0x3404,	// (0x00029980) popup_midp_note_alarm_window_t7_ParamLimits

0x3404,	// (0x00029980) popup_midp_note_alarm_window_t7

0x3416,	// (0x00029992) popup_midp_note_alarm_window_t8_ParamLimits

0x3416,	// (0x00029992) popup_midp_note_alarm_window_t8

0x3428,	// (0x000299a4) popup_midp_note_alarm_window_t9_ParamLimits

0x3428,	// (0x000299a4) popup_midp_note_alarm_window_t9

0x343a,	// (0x000299b6) popup_midp_note_alarm_window_t10_ParamLimits

0x343a,	// (0x000299b6) popup_midp_note_alarm_window_t10

0x344c,	// (0x000299c8) popup_midp_note_alarm_window_t11_ParamLimits

0x344c,	// (0x000299c8) popup_midp_note_alarm_window_t11

0x345e,	// (0x000299da) scroll_pane_cp17_ParamLimits

0x345e,	// (0x000299da) scroll_pane_cp17

0x18bb,	// (0x00027e37) volume_small_pane_cp_g1

0x1bcc,	// (0x00028148) volume_small_pane_cp_g2

0x1bd5,	// (0x00028151) volume_small_pane_cp_g3

0x1bde,	// (0x0002815a) volume_small_pane_cp_g4

0x1be7,	// (0x00028163) volume_small_pane_cp_g5

0x1bf0,	// (0x0002816c) volume_small_pane_cp_g6

0x1bf9,	// (0x00028175) volume_small_pane_cp_g7

0x1c02,	// (0x0002817e) volume_small_pane_cp_g8

0x1c0b,	// (0x00028187) volume_small_pane_cp_g9

0x1c14,	// (0x00028190) volume_small_pane_cp_g10

0x0495,	// (0x00026a11) midp_ticker_pane_g1_ParamLimits

0x04a1,	// (0x00026a1d) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00035cd4) midp_ticker_pane_g_ParamLimits

0xa91b,	// (0x00030e97) midp_ticker_pane_t1_ParamLimits

0xb2c3,	// (0x0003183f) aid_fill_nsta_2

0x2c8d,	// (0x00029209) list_form2_midp_pane

0x3df5,	// (0x0002a371) midp_editing_number_pane_ParamLimits

0x3e04,	// (0x0002a380) midp_ticker_pane_ParamLimits

0x4ae5,	// (0x0002b061) form2_midp_field_pane

0x4b09,	// (0x0002b085) scroll_pane_cp51

0x4b29,	// (0x0002b0a5) form2_midp_button_pane_ParamLimits

0x4b29,	// (0x0002b0a5) form2_midp_button_pane

0x4b3b,	// (0x0002b0b7) form2_midp_content_pane_ParamLimits

0x4b3b,	// (0x0002b0b7) form2_midp_content_pane

0x4b55,	// (0x0002b0d1) form2_midp_field_choice_group_pane

0x4b5d,	// (0x0002b0d9) form2_midp_field_pane_g1

0x4b65,	// (0x0002b0e1) form2_midp_field_pane_g2

0x4b6d,	// (0x0002b0e9) form2_midp_field_pane_g3

0x4b75,	// (0x0002b0f1) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x0003606e) form2_midp_field_pane_g

0x4b7d,	// (0x0002b0f9) form2_midp_gauge_slider_pane

0x4b85,	// (0x0002b101) form2_midp_gauge_wait_pane

0x4b8d,	// (0x0002b109) form2_midp_image_pane_ParamLimits

0x4b8d,	// (0x0002b109) form2_midp_image_pane

0x4ba8,	// (0x0002b124) form2_midp_label_pane_ParamLimits

0x4ba8,	// (0x0002b124) form2_midp_label_pane

0xbfde,	// (0x0003255a) form2_midp_label_pane_cp_ParamLimits

0xbfde,	// (0x0003255a) form2_midp_label_pane_cp

0x4be8,	// (0x0002b164) form2_midp_string_pane_ParamLimits

0x4be8,	// (0x0002b164) form2_midp_string_pane

0xee16,	// (0x00035392) form2_midp_text_pane_ParamLimits

0xee16,	// (0x00035392) form2_midp_text_pane

0x4bfa,	// (0x0002b176) form2_midp_time_pane

0x4c0a,	// (0x0002b186) input_focus_pane_cp51_ParamLimits

0x4c0a,	// (0x0002b186) input_focus_pane_cp51

0x4c22,	// (0x0002b19e) form2_midp_label_pane_t1_ParamLimits

0x4c22,	// (0x0002b19e) form2_midp_label_pane_t1

0xee37,	// (0x000353b3) form2_mdip_text_pane_t1_ParamLimits

0xee37,	// (0x000353b3) form2_mdip_text_pane_t1

0xee5b,	// (0x000353d7) form2_midp_time_pane_t1

0x4c70,	// (0x0002b1ec) form2_midp_gauge_slider_pane_t1

0xbfff,	// (0x0003257b) form2_midp_gauge_slider_pane_t2

0xc011,	// (0x0003258d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x00036077) form2_midp_gauge_slider_pane_t

0x4ca6,	// (0x0002b222) form2_midp_slider_pane

0x4cb2,	// (0x0002b22e) form2_midp_gauge_wait_pane_t1

0x4cc0,	// (0x0002b23c) form2_midp_wait_pane_ParamLimits

0x4cc0,	// (0x0002b23c) form2_midp_wait_pane

0x16d8,	// (0x00027c54) list_single_2graphic_pane_cp4_ParamLimits

0x16d8,	// (0x00027c54) list_single_2graphic_pane_cp4

0x4ceb,	// (0x0002b267) list_single_midp_graphic_pane_cp_ParamLimits

0x4ceb,	// (0x0002b267) list_single_midp_graphic_pane_cp

0x9a0c,	// (0x0002ff88) list_highlight_pane_cp20

0x4d0f,	// (0x0002b28b) list_single_2graphic_pane_g1_cp4

0x42ac,	// (0x0002a828) list_single_2graphic_pane_g2_cp4

0x4d17,	// (0x0002b293) list_single_2graphic_pane_t1_cp4

0x9c8d,	// (0x00030209) list_highlight_pane_cp21

0x4d26,	// (0x0002b2a2) list_single_midp_graphic_pane_g4_cp

0x4d35,	// (0x0002b2b1) list_single_midp_graphic_pane_t1_cp

0xc023,	// (0x0003259f) form2_mdip_string_pane_t1_ParamLimits

0xc023,	// (0x0003259f) form2_mdip_string_pane_t1

0x9a0c,	// (0x0002ff88) bg_wml_button_pane_cp2

0x991c,	// (0x0002fe98) form2_midp_image_pane_g1

0xe89f,	// (0x00034e1b) list_double_large_graphic_pane_g5_ParamLimits

0xe89f,	// (0x00034e1b) list_double_large_graphic_pane_g5

0x0935,	// (0x00026eb1) midp_form_pane_ParamLimits

0x9c8d,	// (0x00030209) main_apps_wheel_pane_ParamLimits

0xafb7,	// (0x00031533) popup_preview_window_ParamLimits

0xafb7,	// (0x00031533) popup_preview_window

0x0efd,	// (0x00027479) popup_touch_info_window_ParamLimits

0x0efd,	// (0x00027479) popup_touch_info_window

0x0f1f,	// (0x0002749b) popup_touch_menu_window_ParamLimits

0x0f1f,	// (0x0002749b) popup_touch_menu_window

0x9912,	// (0x0002fe8e) bg_popup_sub_pane_cp6

0x4def,	// (0x0002b36b) list_touch_menu_pane

0x4df7,	// (0x0002b373) list_single_touch_menu_pane_ParamLimits

0x4df7,	// (0x0002b373) list_single_touch_menu_pane

0x4e0f,	// (0x0002b38b) list_single_touch_menu_pane_t1

0x9c8d,	// (0x00030209) bg_popup_sub_pane_cp7_ParamLimits

0x9c8d,	// (0x00030209) bg_popup_sub_pane_cp7

0x4e1d,	// (0x0002b399) heading_sub_pane

0x4e25,	// (0x0002b3a1) list_touch_info_pane_ParamLimits

0x4e25,	// (0x0002b3a1) list_touch_info_pane

0x4e34,	// (0x0002b3b0) list_single_touch_info_pane_ParamLimits

0x4e34,	// (0x0002b3b0) list_single_touch_info_pane

0x4e46,	// (0x0002b3c2) list_single_touch_info_pane_t1

0x4e54,	// (0x0002b3d0) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x00036085) list_single_touch_info_pane_t

0x03c4,	// (0x00026940) bg_popup_heading_pane_cp

0x4e62,	// (0x0002b3de) heading_sub_pane_t1

0x1591,	// (0x00027b0d) bg_popup_preview_window_pane_cp_ParamLimits

0x1591,	// (0x00027b0d) bg_popup_preview_window_pane_cp

0x4e1d,	// (0x0002b399) heading_preview_pane

0x4e25,	// (0x0002b3a1) list_preview_pane_ParamLimits

0x4e25,	// (0x0002b3a1) list_preview_pane

0x4e70,	// (0x0002b3ec) popup_preview_window_g1

0x4e34,	// (0x0002b3b0) list_single_preview_pane_ParamLimits

0x4e34,	// (0x0002b3b0) list_single_preview_pane

0x4e78,	// (0x0002b3f4) list_single_preview_pane_g1

0x4e80,	// (0x0002b3fc) list_single_preview_pane_t1

0x4e46,	// (0x0002b3c2) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x0003608a) list_single_preview_pane_t

0x4e8e,	// (0x0002b40a) bg_popup_heading_pane_cp2_ParamLimits

0x4e8e,	// (0x0002b40a) bg_popup_heading_pane_cp2

0x4ea4,	// (0x0002b420) heading_preview_pane_g1

0x4eac,	// (0x0002b428) heading_preview_pane_t1_ParamLimits

0x4eac,	// (0x0002b428) heading_preview_pane_t1

0x9db9,	// (0x00030335) soft_indicator_pane_t1_ParamLimits

0xa4d4,	// (0x00030a50) scroll_pane_ParamLimits

0xce1c,	// (0x00033398) scroll_sc2_left_pane

0xce25,	// (0x000333a1) scroll_sc2_right_pane

0xce44,	// (0x000333c0) scroll_bg_pane_g1_ParamLimits

0xce59,	// (0x000333d5) scroll_bg_pane_g2_ParamLimits

0xce71,	// (0x000333ed) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00035c5f) scroll_bg_pane_g_ParamLimits

0xce44,	// (0x000333c0) scroll_handle_pane_g1_ParamLimits

0xce93,	// (0x0003340f) scroll_handle_pane_g2_ParamLimits

0xce71,	// (0x000333ed) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00035c66) scroll_handle_pane_g_ParamLimits

0x095d,	// (0x00026ed9) popup_choice_list_window_ParamLimits

0x095d,	// (0x00026ed9) popup_choice_list_window

0x13c0,	// (0x0002793c) choice_list_pane

0x1472,	// (0x000279ee) cell_toolbar_pane_t1

0x149a,	// (0x00027a16) toolbar_button_pane_ParamLimits

0x3928,	// (0x00029ea4) ai_gene_pane_1_t2_ParamLimits

0x3928,	// (0x00029ea4) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00035e89) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00035e89) ai_gene_pane_1_t

0x4ec9,	// (0x0002b445) scroll_sc2_left_pane_g1

0x4ec9,	// (0x0002b445) scroll_sc2_right_pane_g1

0x0935,	// (0x00026eb1) bg_popup_sub_pane_cp10

0x4ed3,	// (0x0002b44f) list_choice_list_pane

0x4eec,	// (0x0002b468) list_single_choice_list_pane_ParamLimits

0x4eec,	// (0x0002b468) list_single_choice_list_pane

0x4f04,	// (0x0002b480) list_single_choice_list_pane_g1

0xcbfc,	// (0x00033178) list_single_choice_list_pane_t1_ParamLimits

0xcbfc,	// (0x00033178) list_single_choice_list_pane_t1

0x4f0c,	// (0x0002b488) choice_list_pane_g1

0x4f14,	// (0x0002b490) choice_list_pane_t1

0x9912,	// (0x0002fe8e) input_focus_pane_cp11

0xcd7a,	// (0x000332f6) title_pane_stacon_g2_ParamLimits

0xcd7a,	// (0x000332f6) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00035c45) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00035c45) title_pane_stacon_g

0x03c4,	// (0x00026940) cursor_press_pane

0xac34,	// (0x000311b0) popup_fep_hwr_window_ParamLimits

0xac34,	// (0x000311b0) popup_fep_hwr_window

0x0aa1,	// (0x0002701d) popup_fep_vkb_window_ParamLimits

0x0aa1,	// (0x0002701d) popup_fep_vkb_window

0x4f22,	// (0x0002b49e) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x000360b3) fep_vkb_side_pane_g_ParamLimits

0x1c48,	// (0x000281c4) fep_hwr_candidate_pane_ParamLimits

0x1c48,	// (0x000281c4) fep_hwr_candidate_pane

0x1c72,	// (0x000281ee) fep_hwr_side_pane_ParamLimits

0x1c72,	// (0x000281ee) fep_hwr_side_pane

0x1c94,	// (0x00028210) fep_hwr_top_pane_ParamLimits

0x1c94,	// (0x00028210) fep_hwr_top_pane

0x1cac,	// (0x00028228) fep_hwr_write_pane_ParamLimits

0x1cac,	// (0x00028228) fep_hwr_write_pane

0xfb37,	// (0x000360b3) fep_vkb_side_pane_g

0x4f2a,	// (0x0002b4a6) fep_hwr_top_pane_g1

0x4f3c,	// (0x0002b4b8) fep_hwr_top_pane_g2

0x1cd8,	// (0x00028254) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x0003608f) fep_hwr_top_pane_g

0x1ced,	// (0x00028269) fep_hwr_top_text_pane

0xcf8d,	// (0x00033509) fep_hwr_top_text_pane_g1

0x4f72,	// (0x0002b4ee) fep_hwr_top_text_pane_t1

0x1df7,	// (0x00028373) fep_hwr_candidate_pane_g1

0x51bd,	// (0x0002b739) fep_vkb_keypad_pane_g3_ParamLimits

0x51bd,	// (0x0002b739) fep_vkb_keypad_pane_g3

0x51e9,	// (0x0002b765) fep_vkb_keypad_pane_g4_ParamLimits

0x51e9,	// (0x0002b765) fep_vkb_keypad_pane_g4

0x5260,	// (0x0002b7dc) fep_vkb_bottom_pane_g2_ParamLimits

0x5260,	// (0x0002b7dc) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x000360ba) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x000360ba) fep_vkb_bottom_pane_g

0x4ec9,	// (0x0002b445) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x000360c4) cell_vkb_side_pane_g

0x52eb,	// (0x0002b867) cell_vkb_side_pane_t1

0x52f9,	// (0x0002b875) cell_vkb_side_pane_t1_copy1

0x4ec9,	// (0x0002b445) bg_fep_vkb_candidate_pane_g2

0x543d,	// (0x0002b9b9) cell_vkb_candidate_pane_ParamLimits

0x4f80,	// (0x0002b4fc) aid_size_cell_vkb_ParamLimits

0x4f80,	// (0x0002b4fc) aid_size_cell_vkb

0x543d,	// (0x0002b9b9) cell_vkb_candidate_pane

0x1e11,	// (0x0002838d) bg_popup_fep_shadow_pane_g1

0xc140,	// (0x000326bc) fep_vkb_bottom_pane_ParamLimits

0xc140,	// (0x000326bc) fep_vkb_bottom_pane

0x504f,	// (0x0002b5cb) fep_vkb_candidate_pane_ParamLimits

0x504f,	// (0x0002b5cb) fep_vkb_candidate_pane

0xc16c,	// (0x000326e8) fep_vkb_keypad_pane_ParamLimits

0xc16c,	// (0x000326e8) fep_vkb_keypad_pane

0xc193,	// (0x0003270f) fep_vkb_side_pane_ParamLimits

0xc193,	// (0x0003270f) fep_vkb_side_pane

0xc1cf,	// (0x0003274b) fep_vkb_top_pane_ParamLimits

0xc1cf,	// (0x0003274b) fep_vkb_top_pane

0x5116,	// (0x0002b692) fep_vkb_top_pane_g1_ParamLimits

0x5116,	// (0x0002b692) fep_vkb_top_pane_g1

0x5125,	// (0x0002b6a1) fep_vkb_top_pane_g2_ParamLimits

0x5125,	// (0x0002b6a1) fep_vkb_top_pane_g2

0x5134,	// (0x0002b6b0) fep_vkb_top_pane_g3_ParamLimits

0x5134,	// (0x0002b6b0) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x000360aa) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x000360aa) fep_vkb_top_pane_g

0x5152,	// (0x0002b6ce) fep_vkb_top_text_pane_ParamLimits

0x5152,	// (0x0002b6ce) fep_vkb_top_text_pane

0xc20b,	// (0x00032787) fep_vkb_side_pane_g1_ParamLimits

0xc20b,	// (0x00032787) fep_vkb_side_pane_g1

0x51ac,	// (0x0002b728) grid_vkb_side_pane_ParamLimits

0x51ac,	// (0x0002b728) grid_vkb_side_pane

0x1e19,	// (0x00028395) bg_popup_fep_shadow_pane_g2

0x1e22,	// (0x0002839e) bg_popup_fep_shadow_pane_g3

0x1e2a,	// (0x000283a6) bg_popup_fep_shadow_pane_g4

0x1e33,	// (0x000283af) bg_popup_fep_shadow_pane_g5

0x1e3d,	// (0x000283b9) bg_popup_fep_shadow_pane_g6

0x1e45,	// (0x000283c1) bg_popup_fep_shadow_pane_g7

0xcb26,	// (0x000330a2) bg_popup_fep_shadow_pane_g8

0x520b,	// (0x0002b787) grid_vkb_keypad_number_pane_ParamLimits

0x520b,	// (0x0002b787) grid_vkb_keypad_number_pane

0x521f,	// (0x0002b79b) grid_vkb_keypad_pane_ParamLimits

0x521f,	// (0x0002b79b) grid_vkb_keypad_pane

0x5245,	// (0x0002b7c1) fep_vkb_bottom_pane_g1_ParamLimits

0x5245,	// (0x0002b7c1) fep_vkb_bottom_pane_g1

0x526e,	// (0x0002b7ea) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x526e,	// (0x0002b7ea) grid_vkb_keypad_bottom_left_pane

0x5283,	// (0x0002b7ff) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5283,	// (0x0002b7ff) grid_vkb_keypad_bottom_right_pane

0x5298,	// (0x0002b814) fep_vkb_top_text_pane_g1

0xc252,	// (0x000327ce) fep_vkb_top_text_pane_t1

0xc264,	// (0x000327e0) cell_vkb_side_pane_ParamLimits

0xc264,	// (0x000327e0) cell_vkb_side_pane

0x4ec9,	// (0x0002b445) cell_vkb_side_pane_g1

0x5307,	// (0x0002b883) cell_vkb_keypad_pane_ParamLimits

0x5307,	// (0x0002b883) cell_vkb_keypad_pane

0x5394,	// (0x0002b910) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x000360d7) bg_popup_fep_shadow_pane_g

0x4ec9,	// (0x0002b445) cell_hwr_side_pane_g1

0x4ec9,	// (0x0002b445) cell_hwr_side_pane_g2

0x539e,	// (0x0002b91a) cell_vkb_keypad_pane_t1

0xc27a,	// (0x000327f6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc27a,	// (0x000327f6) cell_vkb_keypad_bottom_left_pane

0xc28f,	// (0x0003280b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc28f,	// (0x0003280b) cell_vkb_keypad_bottom_right_pane

0x4ec9,	// (0x0002b445) cell_vkb_keypad_bottom_left_pane_g1

0x4ec9,	// (0x0002b445) cell_vkb_keypad_bottom_right_pane_g1

0x5402,	// (0x0002b97e) cell_vkb_keypad_number_pane_ParamLimits

0x5402,	// (0x0002b97e) cell_vkb_keypad_number_pane

0x5421,	// (0x0002b99d) cell_vkb_keypad_number_pane_g1

0x542b,	// (0x0002b9a7) cell_vkb_keypad_number_pane_g2

0x5434,	// (0x0002b9b0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x000360c9) cell_vkb_keypad_number_pane_g

0x539e,	// (0x0002b91a) cell_vkb_keypad_number_pane_t1

0x545e,	// (0x0002b9da) fep_vkb_candidate_pane_g1

0x0001,

0xfb48,	// (0x000360c4) cell_hwr_side_pane_g

0x5477,	// (0x0002b9f3) cell_hwr_side_pane_t1

0x1e57,	// (0x000283d3) cell_hwr_side_pane_t1_copy1

0x5144,	// (0x0002b6c0) cell_hwr_candidate_pane_g1

0x1e65,	// (0x000283e1) cell_hwr_candidate_pane_t1

0x4ec9,	// (0x0002b445) cell_vkb_candidate_pane_g2

0x54fd,	// (0x0002ba79) cell_vkb_candidate_pane_t1

0x8660,	// (0x0002ebdc) bg_popup_fep_shadow_pane_ParamLimits

0x8660,	// (0x0002ebdc) bg_popup_fep_shadow_pane

0xc0b9,	// (0x00032635) bg_fep_hwr_top_pane_g4

0x4f4e,	// (0x0002b4ca) bg_hwr_side_pane_g1_ParamLimits

0x4f4e,	// (0x0002b4ca) bg_hwr_side_pane_g1

0xc0df,	// (0x0003265b) cell_hwr_side_pane_ParamLimits

0xc0df,	// (0x0003265b) cell_hwr_side_pane

0x1d68,	// (0x000282e4) fep_hwr_write_pane_g1_ParamLimits

0x1d68,	// (0x000282e4) fep_hwr_write_pane_g1

0x1d75,	// (0x000282f1) fep_hwr_write_pane_g2_ParamLimits

0x1d75,	// (0x000282f1) fep_hwr_write_pane_g2

0x1d82,	// (0x000282fe) fep_hwr_write_pane_g3_ParamLimits

0x1d82,	// (0x000282fe) fep_hwr_write_pane_g3

0xc0ff,	// (0x0003267b) fep_hwr_write_pane_g4_ParamLimits

0xc0ff,	// (0x0003267b) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x00036096) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x00036096) fep_hwr_write_pane_g

0xc0b9,	// (0x00032635) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xc0b9,	// (0x00032635) bg_fep_hwr_candidate_pane_g2

0x1da5,	// (0x00028321) cell_hwr_candidate_pane_ParamLimits

0x1da5,	// (0x00028321) cell_hwr_candidate_pane

0x1df7,	// (0x00028373) fep_hwr_candidate_pane_g1_ParamLimits

0x4fae,	// (0x0002b52a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4fae,	// (0x0002b52a) bg_popup_fep_shadow_pane_cp2

0x5144,	// (0x0002b6c0) fep_vkb_top_pane_g4_ParamLimits

0x5144,	// (0x0002b6c0) fep_vkb_top_pane_g4

0x518a,	// (0x0002b706) fep_vkb_side_pane_g2_ParamLimits

0x518a,	// (0x0002b706) fep_vkb_side_pane_g2

0x93c6,	// (0x0002f942) list_setting_pane_t4_ParamLimits

0x93c6,	// (0x0002f942) list_setting_pane_t4

0x945a,	// (0x0002f9d6) list_setting_number_pane_t5_ParamLimits

0x945a,	// (0x0002f9d6) list_setting_number_pane_t5

0xa6d8,	// (0x00030c54) list_double_heading_pane_cp2_ParamLimits

0xa6d8,	// (0x00030c54) list_double_heading_pane_cp2

0x550b,	// (0x0002ba87) list_double_heading_pane_g1_cp2_ParamLimits

0x550b,	// (0x0002ba87) list_double_heading_pane_g1_cp2

0x5517,	// (0x0002ba93) list_double_heading_pane_g2_cp2_ParamLimits

0x5517,	// (0x0002ba93) list_double_heading_pane_g2_cp2

0x552b,	// (0x0002baa7) list_double_heading_pane_t1_cp2_ParamLimits

0x552b,	// (0x0002baa7) list_double_heading_pane_t1_cp2

0x5541,	// (0x0002babd) list_double_heading_pane_t2_cp2_ParamLimits

0x5541,	// (0x0002babd) list_double_heading_pane_t2_cp2

0x98fa,	// (0x0002fe76) aid_value_unit2

0xf217,	// (0x00035793) popup_preview_fixed_window

0x9f74,	// (0x000304f0) bg_popup_preview_window_pane_cp02

0x5553,	// (0x0002bacf) list_preview_fixed_pane

0x5599,	// (0x0002bb15) list_empty_pane_fp_ParamLimits

0x5599,	// (0x0002bb15) list_empty_pane_fp

0x5599,	// (0x0002bb15) list_single_cale_day_pane_fp_ParamLimits

0x5599,	// (0x0002bb15) list_single_cale_day_pane_fp

0x5599,	// (0x0002bb15) list_single_graphic_heading_pane_fp_ParamLimits

0x5599,	// (0x0002bb15) list_single_graphic_heading_pane_fp

0x5599,	// (0x0002bb15) list_single_graphic_pane_fp_ParamLimits

0x5599,	// (0x0002bb15) list_single_graphic_pane_fp

0x5599,	// (0x0002bb15) list_single_heading_pane_fp_ParamLimits

0x5599,	// (0x0002bb15) list_single_heading_pane_fp

0x5599,	// (0x0002bb15) list_single_pane_fp_ParamLimits

0x5599,	// (0x0002bb15) list_single_pane_fp

0x55b2,	// (0x0002bb2e) list_single_pane_fp_g1_ParamLimits

0x55b2,	// (0x0002bb2e) list_single_pane_fp_g1

0xee6e,	// (0x000353ea) list_single_pane_fp_g2_ParamLimits

0xee6e,	// (0x000353ea) list_single_pane_fp_g2

0xee7a,	// (0x000353f6) list_single_pane_fp_g3_ParamLimits

0xee7a,	// (0x000353f6) list_single_pane_fp_g3

0x55be,	// (0x0002bb3a) list_single_pane_fp_g4_ParamLimits

0x55be,	// (0x0002bb3a) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x000360f8) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x000360f8) list_single_pane_fp_g

0xee8e,	// (0x0003540a) list_single_pane_fp_t1_ParamLimits

0xee8e,	// (0x0003540a) list_single_pane_fp_t1

0xeea5,	// (0x00035421) list_single_graphic_pane_fp_g1_ParamLimits

0xeea5,	// (0x00035421) list_single_graphic_pane_fp_g1

0x55b2,	// (0x0002bb2e) list_single_graphic_pane_fp_g2_ParamLimits

0x55b2,	// (0x0002bb2e) list_single_graphic_pane_fp_g2

0xee6e,	// (0x000353ea) list_single_graphic_pane_fp_g3_ParamLimits

0xee6e,	// (0x000353ea) list_single_graphic_pane_fp_g3

0xee7a,	// (0x000353f6) list_single_graphic_pane_fp_g4_ParamLimits

0xee7a,	// (0x000353f6) list_single_graphic_pane_fp_g4

0x55be,	// (0x0002bb3a) list_single_graphic_pane_fp_g5_ParamLimits

0x55be,	// (0x0002bb3a) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x00036101) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x00036101) list_single_graphic_pane_fp_g

0xeeb1,	// (0x0003542d) list_single_graphic_pane_fp_t1_ParamLimits

0xeeb1,	// (0x0003542d) list_single_graphic_pane_fp_t1

0xeea5,	// (0x00035421) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xeea5,	// (0x00035421) list_single_graphic_heading_pane_fp_g1

0x55b2,	// (0x0002bb2e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x55b2,	// (0x0002bb2e) list_single_graphic_heading_pane_fp_g2

0xee6e,	// (0x000353ea) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xee6e,	// (0x000353ea) list_single_graphic_heading_pane_fp_g3

0xee7a,	// (0x000353f6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xee7a,	// (0x000353f6) list_single_graphic_heading_pane_fp_g4

0x55be,	// (0x0002bb3a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x55be,	// (0x0002bb3a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x00036101) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x00036101) list_single_graphic_heading_pane_fp_g

0xeec7,	// (0x00035443) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xeec7,	// (0x00035443) list_single_graphic_heading_pane_fp_t1

0xeedd,	// (0x00035459) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xeedd,	// (0x00035459) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0003610c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0003610c) list_single_graphic_heading_pane_fp_t

0xeeef,	// (0x0003546b) list_single_cale_day_pane_fp_g1_ParamLimits

0xeeef,	// (0x0003546b) list_single_cale_day_pane_fp_g1

0x55ca,	// (0x0002bb46) list_single_cale_day_pane_fp_g2_ParamLimits

0x55ca,	// (0x0002bb46) list_single_cale_day_pane_fp_g2

0xef27,	// (0x000354a3) list_single_cale_day_pane_fp_g3_ParamLimits

0xef27,	// (0x000354a3) list_single_cale_day_pane_fp_g3

0xef4f,	// (0x000354cb) list_single_cale_day_pane_fp_g4_ParamLimits

0xef4f,	// (0x000354cb) list_single_cale_day_pane_fp_g4

0xef73,	// (0x000354ef) list_single_cale_day_pane_fp_g5_ParamLimits

0xef73,	// (0x000354ef) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x00036111) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x00036111) list_single_cale_day_pane_fp_g

0xef97,	// (0x00035513) list_single_cale_day_pane_fp_t1_ParamLimits

0xef97,	// (0x00035513) list_single_cale_day_pane_fp_t1

0xefbd,	// (0x00035539) list_single_cale_day_pane_fp_t2_ParamLimits

0xefbd,	// (0x00035539) list_single_cale_day_pane_fp_t2

0xefd6,	// (0x00035552) list_single_cale_day_pane_fp_t3_ParamLimits

0xefd6,	// (0x00035552) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0003611c) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0003611c) list_single_cale_day_pane_fp_t

0x55b2,	// (0x0002bb2e) list_empty_pane_fp_g1_ParamLimits

0x55b2,	// (0x0002bb2e) list_empty_pane_fp_g1

0xefef,	// (0x0003556b) list_empty_pane_fp_t1

0xeffd,	// (0x00035579) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x00036123) list_empty_pane_fp_t

0x55b2,	// (0x0002bb2e) list_single_heading_pane_fp_g1_ParamLimits

0x55b2,	// (0x0002bb2e) list_single_heading_pane_fp_g1

0xee6e,	// (0x000353ea) list_single_heading_pane_fp_g2_ParamLimits

0xee6e,	// (0x000353ea) list_single_heading_pane_fp_g2

0xee7a,	// (0x000353f6) list_single_heading_pane_fp_g3_ParamLimits

0xee7a,	// (0x000353f6) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x00036128) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x00036128) list_single_heading_pane_fp_g

0xf00b,	// (0x00035587) list_single_heading_pane_fp_t1_ParamLimits

0xf00b,	// (0x00035587) list_single_heading_pane_fp_t1

0xf01d,	// (0x00035599) list_single_heading_pane_fp_t2_ParamLimits

0xf01d,	// (0x00035599) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0003612f) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0003612f) list_single_heading_pane_fp_t

0xcc11,	// (0x0003318d) aid_size_cell_fast

0x9ef4,	// (0x00030470) soft_indicator_pane_cp1_t1

0xcc4e,	// (0x000331ca) cell_app_pane_cp2_ParamLimits

0xcc4e,	// (0x000331ca) cell_app_pane_cp2

0x1c31,	// (0x000281ad) fep_hwr_candidate_drop_down_list_pane

0xc114,	// (0x00032690) fep_hwr_candidate_pane_g3_ParamLimits

0xc114,	// (0x00032690) fep_hwr_candidate_pane_g3

0xc121,	// (0x0003269d) fep_hwr_candidate_pane_g4_ParamLimits

0xc121,	// (0x0003269d) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x000360a3) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x000360a3) fep_hwr_candidate_pane_g

0x503e,	// (0x0002b5ba) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x503e,	// (0x0002b5ba) fep_vkb_candidate_drop_down_list_pane

0x5466,	// (0x0002b9e2) fep_vkb_candidate_pane_g3

0x546e,	// (0x0002b9ea) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x000360d0) fep_vkb_candidate_pane_g

0x5144,	// (0x0002b6c0) cell_hwr_candidate_pane_g1_ParamLimits

0x5485,	// (0x0002ba01) cell_hwr_candidate_pane_g3_ParamLimits

0x5485,	// (0x0002ba01) cell_hwr_candidate_pane_g3

0x54a6,	// (0x0002ba22) cell_hwr_candidate_pane_g4_ParamLimits

0x54a6,	// (0x0002ba22) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x000360ea) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x000360ea) cell_hwr_candidate_pane_g

0x54c7,	// (0x0002ba43) cell_vkb_candidate_pane_g3_ParamLimits

0x54c7,	// (0x0002ba43) cell_vkb_candidate_pane_g3

0x54e2,	// (0x0002ba5e) cell_vkb_candidate_pane_g4_ParamLimits

0x54e2,	// (0x0002ba5e) cell_vkb_candidate_pane_g4

0x55d6,	// (0x0002bb52) cell_app_pane_cp2_g1_ParamLimits

0x55d6,	// (0x0002bb52) cell_app_pane_cp2_g1

0x55f4,	// (0x0002bb70) cell_app_pane_cp2_g2_ParamLimits

0x55f4,	// (0x0002bb70) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x00036134) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x00036134) cell_app_pane_cp2_g

0x5600,	// (0x0002bb7c) cell_app_pane_cp2_t1_ParamLimits

0x5600,	// (0x0002bb7c) cell_app_pane_cp2_t1

0xcaab,	// (0x00033027) grid_highlight_pane_cp1_ParamLimits

0xcaab,	// (0x00033027) grid_highlight_pane_cp1

0x1e83,	// (0x000283ff) cell_hwr_candidate_pane_cp1_ParamLimits

0x1e83,	// (0x000283ff) cell_hwr_candidate_pane_cp1

0x5144,	// (0x0002b6c0) fep_hwr_candidate_drop_down_list_pane_g1

0x5612,	// (0x0002bb8e) fep_hwr_candidate_drop_down_list_pane_g2

0x561f,	// (0x0002bb9b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x00036139) fep_hwr_candidate_drop_down_list_pane_g

0x1ea7,	// (0x00028423) fep_hwr_candidate_drop_down_list_scroll_pane

0x1eb0,	// (0x0002842c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1eb0,	// (0x0002842c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1ebd,	// (0x00028439) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1ebd,	// (0x00028439) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1eca,	// (0x00028446) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1eca,	// (0x00028446) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x54c7,	// (0x0002ba43) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x54c7,	// (0x0002ba43) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x54e2,	// (0x0002ba5e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x54e2,	// (0x0002ba5e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1ed7,	// (0x00028453) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1ed7,	// (0x00028453) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1ef2,	// (0x0002846e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1ef2,	// (0x0002846e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1f0d,	// (0x00028489) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1f0d,	// (0x00028489) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x00036140) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x00036140) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x562c,	// (0x0002bba8) cell_vkb_candidate_pane_cp1_ParamLimits

0x562c,	// (0x0002bba8) cell_vkb_candidate_pane_cp1

0x5144,	// (0x0002b6c0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5144,	// (0x0002b6c0) fep_vkb_candidate_drop_down_list_pane_g1

0x5612,	// (0x0002bb8e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5612,	// (0x0002bb8e) fep_vkb_candidate_drop_down_list_pane_g2

0x561f,	// (0x0002bb9b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x561f,	// (0x0002bb9b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x00036139) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbd,	// (0x00036139) fep_vkb_candidate_drop_down_list_pane_g

0x5652,	// (0x0002bbce) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5652,	// (0x0002bbce) fep_vkb_candidate_drop_down_list_scroll_pane

0x565f,	// (0x0002bbdb) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x565f,	// (0x0002bbdb) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x566c,	// (0x0002bbe8) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x566c,	// (0x0002bbe8) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5678,	// (0x0002bbf4) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5678,	// (0x0002bbf4) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5485,	// (0x0002ba01) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5485,	// (0x0002ba01) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x54a6,	// (0x0002ba22) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x54a6,	// (0x0002ba22) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5684,	// (0x0002bc00) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5684,	// (0x0002bc00) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x56a5,	// (0x0002bc21) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x56a5,	// (0x0002bc21) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x56c6,	// (0x0002bc42) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x56c6,	// (0x0002bc42) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x00036151) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x00036151) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9b44,	// (0x000300c0) title_pane_g1_ParamLimits

0x9b57,	// (0x000300d3) title_pane_g2_ParamLimits

0xf54e,	// (0x00035aca) title_pane_g_ParamLimits

0xcf7d,	// (0x000334f9) aid_call2_pane

0xcf85,	// (0x00033501) aid_call_pane

0xcf8d,	// (0x00033509) popup_clock_analogue_window_g1

0xcf8d,	// (0x00033509) popup_clock_analogue_window_g2

0xf4d4,	// (0x00035a50) popup_clock_analogue_window_g3

0xf4dd,	// (0x00035a59) popup_clock_analogue_window_g4

0x991c,	// (0x0002fe98) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00035c74) popup_clock_analogue_window_g

0xf4e5,	// (0x00035a61) popup_clock_analogue_window_t1

0xf4f3,	// (0x00035a6f) clock_digital_number_pane_ParamLimits

0xf4f3,	// (0x00035a6f) clock_digital_number_pane

0xf4ff,	// (0x00035a7b) clock_digital_number_pane_cp02_ParamLimits

0xf4ff,	// (0x00035a7b) clock_digital_number_pane_cp02

0xf50b,	// (0x00035a87) clock_digital_number_pane_cp03_ParamLimits

0xf50b,	// (0x00035a87) clock_digital_number_pane_cp03

0xf517,	// (0x00035a93) clock_digital_number_pane_cp04_ParamLimits

0xf517,	// (0x00035a93) clock_digital_number_pane_cp04

0xf523,	// (0x00035a9f) clock_digital_separator_pane_ParamLimits

0xf523,	// (0x00035a9f) clock_digital_separator_pane

0xf52f,	// (0x00035aab) popup_clock_digital_window_t1_ParamLimits

0xf52f,	// (0x00035aab) popup_clock_digital_window_t1

0x991c,	// (0x0002fe98) clock_digital_number_pane_g1

0x991c,	// (0x0002fe98) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00035c7f) clock_digital_number_pane_g

0x991c,	// (0x0002fe98) clock_digital_separator_pane_g1

0x991c,	// (0x0002fe98) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00035c7f) clock_digital_separator_pane_g

0xb29f,	// (0x0003181b) aid_fill_nsta_ParamLimits

0xb3d7,	// (0x00031953) indicator_nsta_pane_ParamLimits

0x124d,	// (0x000277c9) popup_clock_analogue_window

0x124d,	// (0x000277c9) popup_clock_digital_window

0xd33d,	// (0x000338b9) grid_indicator_nsta_pane_ParamLimits

0x48fc,	// (0x0002ae78) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x00036023) clock_nsta_pane_t

0xf4a1,	// (0x00035a1d) aid_size_max_handle

0xa64b,	// (0x00030bc7) aid_size_min_handle

0x03c4,	// (0x00026940) editor_scroll_pane

0x56e1,	// (0x0002bc5d) ex_editor_pane

0xcbd7,	// (0x00033153) scroll_pane_cp13

0xa500,	// (0x00030a7c) scroll_pane_cp14

0xcfbc,	// (0x00033538) scroll_pane_cp36

0xa6eb,	// (0x00030c67) list_single_graphic_hl_pane_cp2_ParamLimits

0xa6eb,	// (0x00030c67) list_single_graphic_hl_pane_cp2

0xbd78,	// (0x000322f4) list_single_graphic_hl_pane_ParamLimits

0xbd78,	// (0x000322f4) list_single_graphic_hl_pane

0xf033,	// (0x000355af) aid_size_min_hl_cp1

0x56e9,	// (0x0002bc65) list_highlight_pane_cp34_ParamLimits

0x56e9,	// (0x0002bc65) list_highlight_pane_cp34

0x56fa,	// (0x0002bc76) list_single_graphic_hl_pane_g1_ParamLimits

0x56fa,	// (0x0002bc76) list_single_graphic_hl_pane_g1

0x9711,	// (0x0002fc8d) list_single_graphic_hl_pane_g2_ParamLimits

0x9711,	// (0x0002fc8d) list_single_graphic_hl_pane_g2

0x9711,	// (0x0002fc8d) list_single_graphic_hl_pane_g3_ParamLimits

0x9711,	// (0x0002fc8d) list_single_graphic_hl_pane_g3

0xf03c,	// (0x000355b8) list_single_graphic_hl_pane_g4_ParamLimits

0xf03c,	// (0x000355b8) list_single_graphic_hl_pane_g4

0x971d,	// (0x0002fc99) list_single_graphic_hl_pane_g5_ParamLimits

0x971d,	// (0x0002fc99) list_single_graphic_hl_pane_g5

0x0004,

0xfbe6,	// (0x00036162) list_single_graphic_hl_pane_g_ParamLimits

0xfbe6,	// (0x00036162) list_single_graphic_hl_pane_g

0x9731,	// (0x0002fcad) list_single_graphic_hl_pane_t1_ParamLimits

0x9731,	// (0x0002fcad) list_single_graphic_hl_pane_t1

0x5707,	// (0x0002bc83) aid_size_min_hl_cp2

0x5710,	// (0x0002bc8c) list_highlight_pane_cp34_cp2_ParamLimits

0x5710,	// (0x0002bc8c) list_highlight_pane_cp34_cp2

0x56fa,	// (0x0002bc76) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x56fa,	// (0x0002bc76) list_single_graphic_hl_pane_g1_cp2

0x571d,	// (0x0002bc99) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x571d,	// (0x0002bc99) list_single_graphic_hl_pane_g2_cp2

0xc2aa,	// (0x00032826) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc2aa,	// (0x00032826) list_single_graphic_hl_pane_g3_cp2

0xc2b8,	// (0x00032834) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc2b8,	// (0x00032834) list_single_graphic_hl_pane_g4_cp2

0x5737,	// (0x0002bcb3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5737,	// (0x0002bcb3) list_single_graphic_hl_pane_g5_cp2

0xaa2c,	// (0x00030fa8) control_pane_g4_ParamLimits

0xaa2c,	// (0x00030fa8) control_pane_g4

0x0935,	// (0x00026eb1) bg_popup_sub_pane_cp10_ParamLimits

0x4ed3,	// (0x0002b44f) list_choice_list_pane_ParamLimits

0x4ee2,	// (0x0002b45e) scroll_pane_cp23

0x9f74,	// (0x000304f0) bg_popup_preview_window_pane_cp02_ParamLimits

0x5553,	// (0x0002bacf) list_preview_fixed_pane_ParamLimits

0x5569,	// (0x0002bae5) list_preview_fixed_pane_cp_ParamLimits

0x5569,	// (0x0002bae5) list_preview_fixed_pane_cp

0x5575,	// (0x0002baf1) popup_preview_fixed_window_g1_ParamLimits

0x5575,	// (0x0002baf1) popup_preview_fixed_window_g1

0x5581,	// (0x0002bafd) popup_preview_fixed_window_g2_ParamLimits

0x5581,	// (0x0002bafd) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x000360f1) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x000360f1) popup_preview_fixed_window_g

0xf413,	// (0x0003598f) aid_navi_side_left_pane_ParamLimits

0xf428,	// (0x000359a4) aid_navi_side_right_pane_ParamLimits

0xf440,	// (0x000359bc) navi_icon_pane_stacon_ParamLimits

0xf454,	// (0x000359d0) navi_navi_pane_stacon_ParamLimits

0xf440,	// (0x000359bc) navi_text_pane_stacon_ParamLimits

0x9912,	// (0x0002fe8e) main_text_info_pane

0x5761,	// (0x0002bcdd) listscroll_text_info_pane

0x5769,	// (0x0002bce5) list_text_info_pane_ParamLimits

0x5769,	// (0x0002bce5) list_text_info_pane

0x5778,	// (0x0002bcf4) scroll_pane_cp24_ParamLimits

0x5778,	// (0x0002bcf4) scroll_pane_cp24

0xc2c4,	// (0x00032840) list_text_info_pane_t1_ParamLimits

0xc2c4,	// (0x00032840) list_text_info_pane_t1

0xab98,	// (0x00031114) popup_fast_swap2_window_ParamLimits

0xab98,	// (0x00031114) popup_fast_swap2_window

0x57bb,	// (0x0002bd37) aid_size_cell_fast2

0x9912,	// (0x0002fe8e) bg_popup_window_pane_cp17

0x2cb9,	// (0x00029235) heading_pane_cp2

0xa1d4,	// (0x00030750) listscroll_fast2_pane

0x57c5,	// (0x0002bd41) grid_fast2_pane

0x57cf,	// (0x0002bd4b) listscroll_fast2_pane_g1

0x57d9,	// (0x0002bd55) listscroll_fast2_pane_g2

0x0001,

0xfbf1,	// (0x0003616d) listscroll_fast2_pane_g

0xcbd7,	// (0x00033153) scroll_pane_cp26

0x57e3,	// (0x0002bd5f) cell_fast2_pane_ParamLimits

0x57e3,	// (0x0002bd5f) cell_fast2_pane

0x57fa,	// (0x0002bd76) cell_fast2_pane_g1

0x5803,	// (0x0002bd7f) cell_fast2_pane_g2

0x580c,	// (0x0002bd88) cell_fast2_pane_g3

0x0002,

0xfbf6,	// (0x00036172) cell_fast2_pane_g

0xa2bd,	// (0x00030839) grid_highlight_pane_cp9

0xa2d2,	// (0x0003084e) main_eswt_pane_ParamLimits

0xa2d2,	// (0x0003084e) main_eswt_pane

0x578d,	// (0x0002bd09) list_single_text_info_pane

0x5814,	// (0x0002bd90) eswt_ctrl_button_pane

0x5814,	// (0x0002bd90) eswt_ctrl_canvas_pane

0x581c,	// (0x0002bd98) eswt_ctrl_combo_pane

0x5814,	// (0x0002bd90) eswt_ctrl_default_pane

0x5814,	// (0x0002bd90) eswt_ctrl_label_pane

0x5824,	// (0x0002bda0) eswt_ctrl_wait_pane

0x582c,	// (0x0002bda8) eswt_shell_pane

0x9912,	// (0x0002fe8e) listscroll_eswt_app_pane

0x584c,	// (0x0002bdc8) popup_eswt_tasktip_window_ParamLimits

0x584c,	// (0x0002bdc8) popup_eswt_tasktip_window

0x1591,	// (0x00027b0d) bg_popup_window_pane_cp18

0x585d,	// (0x0002bdd9) eswt_control_pane_g1_ParamLimits

0x585d,	// (0x0002bdd9) eswt_control_pane_g1

0x586a,	// (0x0002bde6) eswt_control_pane_g2_ParamLimits

0x586a,	// (0x0002bde6) eswt_control_pane_g2

0x5877,	// (0x0002bdf3) eswt_control_pane_g3_ParamLimits

0x5877,	// (0x0002bdf3) eswt_control_pane_g3

0x5884,	// (0x0002be00) eswt_control_pane_g4_ParamLimits

0x5884,	// (0x0002be00) eswt_control_pane_g4

0x0003,

0xfbfd,	// (0x00036179) eswt_control_pane_g_ParamLimits

0xfbfd,	// (0x00036179) eswt_control_pane_g

0xcaab,	// (0x00033027) bg_button_pane_ParamLimits

0xcaab,	// (0x00033027) bg_button_pane

0xa2d2,	// (0x0003084e) common_borders_pane_copy2_ParamLimits

0xa2d2,	// (0x0003084e) common_borders_pane_copy2

0x5891,	// (0x0002be0d) control_button_pane_g1_ParamLimits

0x5891,	// (0x0002be0d) control_button_pane_g1

0x589d,	// (0x0002be19) control_button_pane_g2_ParamLimits

0x589d,	// (0x0002be19) control_button_pane_g2

0x58a9,	// (0x0002be25) control_button_pane_g3_ParamLimits

0x58a9,	// (0x0002be25) control_button_pane_g3

0x0002,

0xfc06,	// (0x00036182) control_button_pane_g_ParamLimits

0xfc06,	// (0x00036182) control_button_pane_g

0x58bd,	// (0x0002be39) control_button_pane_t1

0x58cb,	// (0x0002be47) control_button_pane_t2

0x0001,

0xfc0d,	// (0x00036189) control_button_pane_t

0x14a6,	// (0x00027a22) bg_button_pane_g1

0x14ae,	// (0x00027a2a) bg_button_pane_g2

0x14b6,	// (0x00027a32) bg_button_pane_g3

0x14be,	// (0x00027a3a) bg_button_pane_g4

0x14c6,	// (0x00027a42) bg_button_pane_g5

0x14ce,	// (0x00027a4a) bg_button_pane_g6

0x14d6,	// (0x00027a52) bg_button_pane_g7

0x14de,	// (0x00027a5a) bg_button_pane_g8

0x14e6,	// (0x00027a62) bg_button_pane_g9

0x0008,

0xf861,	// (0x00035ddd) bg_button_pane_g

0x4e8e,	// (0x0002b40a) common_borders_pane_ParamLimits

0x4e8e,	// (0x0002b40a) common_borders_pane

0x585d,	// (0x0002bdd9) eswt_control_pane_g1_copy1_ParamLimits

0x585d,	// (0x0002bdd9) eswt_control_pane_g1_copy1

0x586a,	// (0x0002bde6) eswt_control_pane_g2_copy1_ParamLimits

0x586a,	// (0x0002bde6) eswt_control_pane_g2_copy1

0x5877,	// (0x0002bdf3) eswt_control_pane_g3_copy1_ParamLimits

0x5877,	// (0x0002bdf3) eswt_control_pane_g3_copy1

0x5884,	// (0x0002be00) eswt_control_pane_g4_copy1_ParamLimits

0x5884,	// (0x0002be00) eswt_control_pane_g4_copy1

0x4ec9,	// (0x0002b445) bg_eswt_ctrl_canvas_pane_g1

0x4e8e,	// (0x0002b40a) common_borders_pane_cp2_ParamLimits

0x4e8e,	// (0x0002b40a) common_borders_pane_cp2

0x4e8e,	// (0x0002b40a) common_borders_pane_cp3_ParamLimits

0x4e8e,	// (0x0002b40a) common_borders_pane_cp3

0x58d9,	// (0x0002be55) separator_horizontal_pane

0x58e1,	// (0x0002be5d) separator_vertical_pane

0x585d,	// (0x0002bdd9) eswt_control_pane_g1_copy2_ParamLimits

0x585d,	// (0x0002bdd9) eswt_control_pane_g1_copy2

0x586a,	// (0x0002bde6) eswt_control_pane_g2_copy2_ParamLimits

0x586a,	// (0x0002bde6) eswt_control_pane_g2_copy2

0x5877,	// (0x0002bdf3) eswt_control_pane_g3_copy2_ParamLimits

0x5877,	// (0x0002bdf3) eswt_control_pane_g3_copy2

0x5884,	// (0x0002be00) eswt_control_pane_g4_copy2_ParamLimits

0x5884,	// (0x0002be00) eswt_control_pane_g4_copy2

0x9912,	// (0x0002fe8e) common_borders_pane_cp4

0x58ea,	// (0x0002be66) separator_horizontal_pane_g1

0x58f3,	// (0x0002be6f) separator_horizontal_pane_g2

0x58fc,	// (0x0002be78) separator_horizontal_pane_g3

0x0002,

0xfc12,	// (0x0003618e) separator_horizontal_pane_g

0x585d,	// (0x0002bdd9) eswt_control_pane_g1_copy3_ParamLimits

0x585d,	// (0x0002bdd9) eswt_control_pane_g1_copy3

0x586a,	// (0x0002bde6) eswt_control_pane_g2_copy3_ParamLimits

0x586a,	// (0x0002bde6) eswt_control_pane_g2_copy3

0x5877,	// (0x0002bdf3) eswt_control_pane_g3_copy3_ParamLimits

0x5877,	// (0x0002bdf3) eswt_control_pane_g3_copy3

0x5884,	// (0x0002be00) eswt_control_pane_g4_copy3_ParamLimits

0x5884,	// (0x0002be00) eswt_control_pane_g4_copy3

0x9912,	// (0x0002fe8e) common_borders_pane_cp5

0x5905,	// (0x0002be81) separator_vertical_pane_g1

0x590e,	// (0x0002be8a) separator_vertical_pane_g2

0x5917,	// (0x0002be93) separator_vertical_pane_g3

0x0002,

0xfc19,	// (0x00036195) separator_vertical_pane_g

0x585d,	// (0x0002bdd9) eswt_control_pane_g1_copy4_ParamLimits

0x585d,	// (0x0002bdd9) eswt_control_pane_g1_copy4

0x586a,	// (0x0002bde6) eswt_control_pane_g2_copy4_ParamLimits

0x586a,	// (0x0002bde6) eswt_control_pane_g2_copy4

0x5877,	// (0x0002bdf3) eswt_control_pane_g3_copy4_ParamLimits

0x5877,	// (0x0002bdf3) eswt_control_pane_g3_copy4

0x5884,	// (0x0002be00) eswt_control_pane_g4_copy4_ParamLimits

0x5884,	// (0x0002be00) eswt_control_pane_g4_copy4

0xc2e6,	// (0x00032862) eswt_ctrl_combo_button_pane

0xc2ee,	// (0x0003286a) eswt_ctrl_input_pane

0xc2f6,	// (0x00032872) popup_choice_list_window_cp70

0xc2fe,	// (0x0003287a) eswt_ctrl_input_pane_t1

0x9912,	// (0x0002fe8e) input_focus_pane_cp70

0x4e8e,	// (0x0002b40a) bg_button_pane_cp70_ParamLimits

0x4e8e,	// (0x0002b40a) bg_button_pane_cp70

0xc30c,	// (0x00032888) eswt_ctrl_combo_button_pane_g1

0x594e,	// (0x0002beca) wait_bar_pane_cp70

0x1591,	// (0x00027b0d) bg_popup_window_pane_cp70_ParamLimits

0x1591,	// (0x00027b0d) bg_popup_window_pane_cp70

0x5956,	// (0x0002bed2) popup_eswt_tasktip_window_t1

0x596c,	// (0x0002bee8) wait_bar_pane_cp71_ParamLimits

0x596c,	// (0x0002bee8) wait_bar_pane_cp71

0x5978,	// (0x0002bef4) grid_eswt_app_pane

0xce25,	// (0x000333a1) scroll_pane_cp70

0xc314,	// (0x00032890) cell_eswt_app_pane_ParamLimits

0xc314,	// (0x00032890) cell_eswt_app_pane

0xc346,	// (0x000328c2) cell_eswt_app_pane_g1_ParamLimits

0xc346,	// (0x000328c2) cell_eswt_app_pane_g1

0xc375,	// (0x000328f1) cell_eswt_app_pane_g2_ParamLimits

0xc375,	// (0x000328f1) cell_eswt_app_pane_g2

0x0001,

0xfc20,	// (0x0003619c) cell_eswt_app_pane_g_ParamLimits

0xfc20,	// (0x0003619c) cell_eswt_app_pane_g

0xc39e,	// (0x0003291a) cell_eswt_app_pane_t1_ParamLimits

0xc39e,	// (0x0003291a) cell_eswt_app_pane_t1

0x5a3d,	// (0x0002bfb9) grid_highlight_pane_cp70_ParamLimits

0x5a3d,	// (0x0002bfb9) grid_highlight_pane_cp70

0xd2f5,	// (0x00033871) set_content_pane_g1

0xa9c2,	// (0x00030f3e) status_small_volume_pane

0x1f28,	// (0x000284a4) status_small_volume_pane_g1

0x1f30,	// (0x000284ac) volume_small2_pane

0x1f39,	// (0x000284b5) volume_small2_pane_g1

0x1f42,	// (0x000284be) volume_small2_pane_g2

0x1f4b,	// (0x000284c7) volume_small2_pane_g3

0x1f54,	// (0x000284d0) volume_small2_pane_g4

0x1f5d,	// (0x000284d9) volume_small2_pane_g5

0x1f66,	// (0x000284e2) volume_small2_pane_g6

0x1f6f,	// (0x000284eb) volume_small2_pane_g7

0x1f78,	// (0x000284f4) volume_small2_pane_g8

0x1f81,	// (0x000284fd) volume_small2_pane_g9

0x1f8a,	// (0x00028506) volume_small2_pane_g10

0x0009,

0xfc25,	// (0x000361a1) volume_small2_pane_g

0x5298,	// (0x0002b814) fep_vkb_top_text_pane_g1_ParamLimits

0xc252,	// (0x000327ce) fep_vkb_top_text_pane_t1_ParamLimits

0x558d,	// (0x0002bb09) popup_preview_fixed_window_g3_ParamLimits

0x558d,	// (0x0002bb09) popup_preview_fixed_window_g3

0xb232,	// (0x000317ae) popup_toolbar_trans_pane

0xbbc8,	// (0x00032144) aid_height_set_list_ParamLimits

0x3c4e,	// (0x0002a1ca) aid_size_parent_ParamLimits

0x0935,	// (0x00026eb1) list_highlight_pane_cp2_ParamLimits

0xd2f5,	// (0x00033871) set_content_pane_g1_ParamLimits

0xbd8c,	// (0x00032308) list_single_image_pane_ParamLimits

0xbd8c,	// (0x00032308) list_single_image_pane

0xc3d0,	// (0x0003294c) aid_size_cell_image_ParamLimits

0xc3d0,	// (0x0003294c) aid_size_cell_image

0xc3dd,	// (0x00032959) grid_single_image_pane_ParamLimits

0xc3dd,	// (0x00032959) grid_single_image_pane

0xcab9,	// (0x00033035) list_single_image_pane_g1_ParamLimits

0xcab9,	// (0x00033035) list_single_image_pane_g1

0xcac5,	// (0x00033041) list_single_image_pane_g2_ParamLimits

0xcac5,	// (0x00033041) list_single_image_pane_g2

0x0001,

0xfc3a,	// (0x000361b6) list_single_image_pane_g_ParamLimits

0xfc3a,	// (0x000361b6) list_single_image_pane_g

0x5a64,	// (0x0002bfe0) list_single_image_pane_t1_ParamLimits

0x5a64,	// (0x0002bfe0) list_single_image_pane_t1

0xc3eb,	// (0x00032967) cell_image_list_pane_ParamLimits

0xc3eb,	// (0x00032967) cell_image_list_pane

0xc3ff,	// (0x0003297b) cell_image_list_pane_g1

0xc408,	// (0x00032984) cell_image_list_pane_g2

0x0001,

0xfc3f,	// (0x000361bb) cell_image_list_pane_g

0x5aa2,	// (0x0002c01e) aid_size_cell_tb_trans_pane

0xcaab,	// (0x00033027) bg_tb_trans_pane

0x5ab4,	// (0x0002c030) grid_tb_trans_pane

0x14a6,	// (0x00027a22) bg_tb_trans_pane_g1

0x14ae,	// (0x00027a2a) bg_tb_trans_pane_g2

0x14b6,	// (0x00027a32) bg_tb_trans_pane_g3

0x14be,	// (0x00027a3a) bg_tb_trans_pane_g4

0x14c6,	// (0x00027a42) bg_tb_trans_pane_g5

0x14de,	// (0x00027a5a) bg_tb_trans_pane_g6

0x14e6,	// (0x00027a62) bg_tb_trans_pane_g7

0x14ce,	// (0x00027a4a) bg_tb_trans_pane_g8

0x14d6,	// (0x00027a52) bg_tb_trans_pane_g9

0x0008,

0xfc44,	// (0x000361c0) bg_tb_trans_pane_g

0x5ac8,	// (0x0002c044) cell_toolbar_trans_pane_ParamLimits

0x5ac8,	// (0x0002c044) cell_toolbar_trans_pane

0x4ec9,	// (0x0002b445) cell_toolbar_trans_pane_g1

0xbfc2,	// (0x0003253e) list_form2_midp_pane_t1

0xbfd0,	// (0x0003254c) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x00036069) list_form2_midp_pane_t

0x4b09,	// (0x0002b085) scroll_pane_cp51_ParamLimits

0x4cd0,	// (0x0002b24c) form2_midp_wait_pane_g1

0x4cd9,	// (0x0002b255) form2_midp_wait_pane_g2

0x4ce2,	// (0x0002b25e) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x0003607e) form2_midp_wait_pane_g

0x9c8d,	// (0x00030209) list_highlight_pane_cp21_ParamLimits

0x4d26,	// (0x0002b2a2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4d35,	// (0x0002b2b1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xeb20,	// (0x0003509c) list_single_2graphic_im_pane_ParamLimits

0xeb20,	// (0x0003509c) list_single_2graphic_im_pane

0xc411,	// (0x0003298d) list_single_2graphic_im_pane_g1_ParamLimits

0xc411,	// (0x0003298d) list_single_2graphic_im_pane_g1

0xc422,	// (0x0003299e) list_single_2graphic_im_pane_g2_ParamLimits

0xc422,	// (0x0003299e) list_single_2graphic_im_pane_g2

0xc42e,	// (0x000329aa) list_single_2graphic_im_pane_g3_ParamLimits

0xc42e,	// (0x000329aa) list_single_2graphic_im_pane_g3

0x0003,

0xfc57,	// (0x000361d3) list_single_2graphic_im_pane_g_ParamLimits

0xfc57,	// (0x000361d3) list_single_2graphic_im_pane_g

0xc442,	// (0x000329be) list_single_2graphic_im_pane_t1_ParamLimits

0xc442,	// (0x000329be) list_single_2graphic_im_pane_t1

0x5599,	// (0x0002bb15) list_single_graphic_2heading_pane_fp_ParamLimits

0x5599,	// (0x0002bb15) list_single_graphic_2heading_pane_fp

0xeea5,	// (0x00035421) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xeea5,	// (0x00035421) list_single_graphic_2heading_pane_fp_g1

0x55b2,	// (0x0002bb2e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x55b2,	// (0x0002bb2e) list_single_graphic_2heading_pane_fp_g2

0xee6e,	// (0x000353ea) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xee6e,	// (0x000353ea) list_single_graphic_2heading_pane_fp_g3

0xee7a,	// (0x000353f6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xee7a,	// (0x000353f6) list_single_graphic_2heading_pane_fp_g4

0x55be,	// (0x0002bb3a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x55be,	// (0x0002bb3a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x00036101) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x00036101) list_single_graphic_2heading_pane_fp_g

0xf048,	// (0x000355c4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf048,	// (0x000355c4) list_single_graphic_2heading_pane_fp_t1

0xeedd,	// (0x00035459) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xeedd,	// (0x00035459) list_single_graphic_2heading_pane_fp_t2

0xf2b4,	// (0x00035830) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf2b4,	// (0x00035830) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc60,	// (0x000361dc) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc60,	// (0x000361dc) list_single_graphic_2heading_pane_fp_t

0x4f5a,	// (0x0002b4d6) fep_hwr_write_pane_g5_ParamLimits

0x4f5a,	// (0x0002b4d6) fep_hwr_write_pane_g5

0x4f66,	// (0x0002b4e2) fep_hwr_write_pane_g6_ParamLimits

0x4f66,	// (0x0002b4e2) fep_hwr_write_pane_g6

0x582c,	// (0x0002bda8) eswt_shell_pane_ParamLimits

0x1591,	// (0x00027b0d) bg_popup_window_pane_cp18_ParamLimits

0x3b94,	// (0x0002a110) heading_pane_cp70

0x5956,	// (0x0002bed2) popup_eswt_tasktip_window_t1_ParamLimits

0xb2fc,	// (0x00031878) aid_touch_tab_arrow_left

0xb312,	// (0x0003188e) aid_touch_tab_arrow_right

0x9b6f,	// (0x000300eb) title_pane_g3_ParamLimits

0x9b6f,	// (0x000300eb) title_pane_g3

0xca6a,	// (0x00032fe6) set_value_pane_g1

0xb232,	// (0x000317ae) popup_toolbar_trans_pane_ParamLimits

0x5aa2,	// (0x0002c01e) aid_size_cell_tb_trans_pane_ParamLimits

0xcaab,	// (0x00033027) bg_tb_trans_pane_ParamLimits

0x5ab4,	// (0x0002c030) grid_tb_trans_pane_ParamLimits

0x9f74,	// (0x000304f0) cont_note_pane_ParamLimits

0x9f74,	// (0x000304f0) cont_note_pane

0xa2d2,	// (0x0003084e) cont_snote2_single_text_pane_ParamLimits

0xa2d2,	// (0x0003084e) cont_snote2_single_text_pane

0xa2d2,	// (0x0003084e) cont_snote2_single_graphic_pane_ParamLimits

0xa2d2,	// (0x0003084e) cont_snote2_single_graphic_pane

0x2ed5,	// (0x00029451) cont_note_wait_pane_ParamLimits

0x2ed5,	// (0x00029451) cont_note_wait_pane

0x2ed5,	// (0x00029451) cont_note_image_pane_ParamLimits

0x2ed5,	// (0x00029451) cont_note_image_pane

0x5b5c,	// (0x0002c0d8) popup_note2_window_g1_ParamLimits

0x5b5c,	// (0x0002c0d8) popup_note2_window_g1

0x5b8d,	// (0x0002c109) popup_note2_window_t1_ParamLimits

0x5b8d,	// (0x0002c109) popup_note2_window_t1

0x5bd2,	// (0x0002c14e) popup_note2_window_t2_ParamLimits

0x5bd2,	// (0x0002c14e) popup_note2_window_t2

0x5c17,	// (0x0002c193) popup_note2_window_t3_ParamLimits

0x5c17,	// (0x0002c193) popup_note2_window_t3

0x5c5c,	// (0x0002c1d8) popup_note2_window_t4_ParamLimits

0x5c5c,	// (0x0002c1d8) popup_note2_window_t4

0x9ff8,	// (0x00030574) popup_note2_window_t5_ParamLimits

0x9ff8,	// (0x00030574) popup_note2_window_t5

0x0004,

0xfc6c,	// (0x000361e8) popup_note2_window_t_ParamLimits

0xfc6c,	// (0x000361e8) popup_note2_window_t

0x5c8b,	// (0x0002c207) popup_note2_image_window_g1_ParamLimits

0x5c8b,	// (0x0002c207) popup_note2_image_window_g1

0x5c97,	// (0x0002c213) popup_note2_image_window_g2_ParamLimits

0x5c97,	// (0x0002c213) popup_note2_image_window_g2

0x0001,

0xfc77,	// (0x000361f3) popup_note2_image_window_g_ParamLimits

0xfc77,	// (0x000361f3) popup_note2_image_window_g

0x5ca9,	// (0x0002c225) popup_note2_image_window_t1_ParamLimits

0x5ca9,	// (0x0002c225) popup_note2_image_window_t1

0x5cc1,	// (0x0002c23d) popup_note2_image_window_t2_ParamLimits

0x5cc1,	// (0x0002c23d) popup_note2_image_window_t2

0x5cd9,	// (0x0002c255) popup_note2_image_window_t3_ParamLimits

0x5cd9,	// (0x0002c255) popup_note2_image_window_t3

0x0002,

0xfc7c,	// (0x000361f8) popup_note2_image_window_t_ParamLimits

0xfc7c,	// (0x000361f8) popup_note2_image_window_t

0x2ee3,	// (0x0002945f) popup_note2_wait_window_g1_ParamLimits

0x2ee3,	// (0x0002945f) popup_note2_wait_window_g1

0x5cf5,	// (0x0002c271) popup_note2_wait_window_g2_ParamLimits

0x5cf5,	// (0x0002c271) popup_note2_wait_window_g2

0x2efb,	// (0x00029477) popup_note2_wait_window_g3_ParamLimits

0x2efb,	// (0x00029477) popup_note2_wait_window_g3

0x0002,

0xfc83,	// (0x000361ff) popup_note2_wait_window_g_ParamLimits

0xfc83,	// (0x000361ff) popup_note2_wait_window_g

0x5d01,	// (0x0002c27d) popup_note2_wait_window_t1_ParamLimits

0x5d01,	// (0x0002c27d) popup_note2_wait_window_t1

0x5d1f,	// (0x0002c29b) popup_note2_wait_window_t2_ParamLimits

0x5d1f,	// (0x0002c29b) popup_note2_wait_window_t2

0x5d3d,	// (0x0002c2b9) popup_note2_wait_window_t3_ParamLimits

0x5d3d,	// (0x0002c2b9) popup_note2_wait_window_t3

0x5d4f,	// (0x0002c2cb) popup_note2_wait_window_t4_ParamLimits

0x5d4f,	// (0x0002c2cb) popup_note2_wait_window_t4

0x0003,

0xfc8a,	// (0x00036206) popup_note2_wait_window_t_ParamLimits

0xfc8a,	// (0x00036206) popup_note2_wait_window_t

0x5d61,	// (0x0002c2dd) wait_bar2_pane_ParamLimits

0x5d61,	// (0x0002c2dd) wait_bar2_pane

0x5d79,	// (0x0002c2f5) popup_snote2_single_text_window_g1_ParamLimits

0x5d79,	// (0x0002c2f5) popup_snote2_single_text_window_g1

0x5da1,	// (0x0002c31d) popup_snote2_single_text_window_t1_ParamLimits

0x5da1,	// (0x0002c31d) popup_snote2_single_text_window_t1

0x5ded,	// (0x0002c369) popup_snote2_single_text_window_t2_ParamLimits

0x5ded,	// (0x0002c369) popup_snote2_single_text_window_t2

0x5e39,	// (0x0002c3b5) popup_snote2_single_text_window_t3_ParamLimits

0x5e39,	// (0x0002c3b5) popup_snote2_single_text_window_t3

0x5e7a,	// (0x0002c3f6) popup_snote2_single_text_window_t4_ParamLimits

0x5e7a,	// (0x0002c3f6) popup_snote2_single_text_window_t4

0x5eb0,	// (0x0002c42c) popup_snote2_single_text_window_t5_ParamLimits

0x5eb0,	// (0x0002c42c) popup_snote2_single_text_window_t5

0x0004,

0xfc93,	// (0x0003620f) popup_snote2_single_text_window_t_ParamLimits

0xfc93,	// (0x0003620f) popup_snote2_single_text_window_t

0x5edb,	// (0x0002c457) popup_snote2_single_graphic_window_g1_ParamLimits

0x5edb,	// (0x0002c457) popup_snote2_single_graphic_window_g1

0x5f03,	// (0x0002c47f) popup_snote2_single_graphic_window_g2_ParamLimits

0x5f03,	// (0x0002c47f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9e,	// (0x0003621a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9e,	// (0x0003621a) popup_snote2_single_graphic_window_g

0x5f2b,	// (0x0002c4a7) popup_snote2_single_graphic_window_t1_ParamLimits

0x5f2b,	// (0x0002c4a7) popup_snote2_single_graphic_window_t1

0x5f77,	// (0x0002c4f3) popup_snote2_single_graphic_window_t2_ParamLimits

0x5f77,	// (0x0002c4f3) popup_snote2_single_graphic_window_t2

0x5e39,	// (0x0002c3b5) popup_snote2_single_graphic_window_t3_ParamLimits

0x5e39,	// (0x0002c3b5) popup_snote2_single_graphic_window_t3

0x5e7a,	// (0x0002c3f6) popup_snote2_single_graphic_window_t4_ParamLimits

0x5e7a,	// (0x0002c3f6) popup_snote2_single_graphic_window_t4

0x5eb0,	// (0x0002c42c) popup_snote2_single_graphic_window_t5_ParamLimits

0x5eb0,	// (0x0002c42c) popup_snote2_single_graphic_window_t5

0x0004,

0xfca3,	// (0x0003621f) popup_snote2_single_graphic_window_t_ParamLimits

0xfca3,	// (0x0003621f) popup_snote2_single_graphic_window_t

0x49b9,	// (0x0002af35) clock_nsta_pane_cp2_t1

0x49b9,	// (0x0002af35) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x0003603f) clock_nsta_pane_cp2_t

0xe92b,	// (0x00034ea7) form_field_data_wide_pane_g1_ParamLimits

0xcab9,	// (0x00033035) form_field_data_wide_pane_g2_ParamLimits

0xcab9,	// (0x00033035) form_field_data_wide_pane_g2

0xcac5,	// (0x00033041) form_field_data_wide_pane_g3_ParamLimits

0xcac5,	// (0x00033041) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00035bf7) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00035bf7) form_field_data_wide_pane_g

0xbece,	// (0x0003244a) grid_touch_3_pane_ParamLimits

0xbece,	// (0x0003244a) grid_touch_3_pane

0xd34b,	// (0x000338c7) cell_touch_3_pane_ParamLimits

0xd34b,	// (0x000338c7) cell_touch_3_pane

0x4ec9,	// (0x0002b445) cell_touch_3_pane_g1

0x4ec9,	// (0x0002b445) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x000360c4) cell_touch_3_pane_g

0xa02a,	// (0x000305a6) cont_query_data_pane

0xa032,	// (0x000305ae) cont_query_data_pane_cp1

0x5ff6,	// (0x0002c572) button_value_adjust_pane_cp7

0x5ffe,	// (0x0002c57a) query_popup_pane_cp3

0xcfed,	// (0x00033569) bg_popup_sub_pane_cp22_ParamLimits

0x0036,	// (0x000265b2) navi_navi_volume_pane_cp2

0x0051,	// (0x000265cd) popup_side_volume_key_window_g2

0x0060,	// (0x000265dc) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00035c8d) popup_side_volume_key_window_g

0x007d,	// (0x000265f9) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00035c94) popup_side_volume_key_window_t

0xd1f8,	// (0x00033774) popup_side_volume_key_window_ParamLimits

0x9191,	// (0x0002f70d) list_double_graphic_pane_g4_ParamLimits

0x9191,	// (0x0002f70d) list_double_graphic_pane_g4

0x96fb,	// (0x0002fc77) list_single_2heading_msg_pane_ParamLimits

0x96fb,	// (0x0002fc77) list_single_2heading_msg_pane

0x9747,	// (0x0002fcc3) list_single_2heading_msg_pane_g1_ParamLimits

0x9747,	// (0x0002fcc3) list_single_2heading_msg_pane_g1

0x9753,	// (0x0002fccf) list_single_2heading_msg_pane_g2_ParamLimits

0x9753,	// (0x0002fccf) list_single_2heading_msg_pane_g2

0x9766,	// (0x0002fce2) list_single_2heading_msg_pane_g3_ParamLimits

0x9766,	// (0x0002fce2) list_single_2heading_msg_pane_g3

0x9772,	// (0x0002fcee) list_single_2heading_msg_pane_g4_ParamLimits

0x9772,	// (0x0002fcee) list_single_2heading_msg_pane_g4

0x0003,

0xfcae,	// (0x0003622a) list_single_2heading_msg_pane_g_ParamLimits

0xfcae,	// (0x0003622a) list_single_2heading_msg_pane_g

0x978a,	// (0x0002fd06) list_single_2heading_msg_pane_t1_ParamLimits

0x978a,	// (0x0002fd06) list_single_2heading_msg_pane_t1

0x97b2,	// (0x0002fd2e) list_single_2heading_msg_pane_t2_ParamLimits

0x97b2,	// (0x0002fd2e) list_single_2heading_msg_pane_t2

0x981d,	// (0x0002fd99) list_single_2heading_msg_pane_t3_ParamLimits

0x981d,	// (0x0002fd99) list_single_2heading_msg_pane_t3

0xf2d4,	// (0x00035850) list_single_2heading_msg_pane_t4_ParamLimits

0xf2d4,	// (0x00035850) list_single_2heading_msg_pane_t4

0x0003,

0xfcb7,	// (0x00036233) list_single_2heading_msg_pane_t_ParamLimits

0xfcb7,	// (0x00036233) list_single_2heading_msg_pane_t

0x9b7b,	// (0x000300f7) title_pane_g4_ParamLimits

0x9b7b,	// (0x000300f7) title_pane_g4

0xf363,	// (0x000358df) title_pane_stacon_g3_ParamLimits

0xf363,	// (0x000358df) title_pane_stacon_g3

0x5b1f,	// (0x0002c09b) list_single_2graphic_im_pane_g4_ParamLimits

0x5b1f,	// (0x0002c09b) list_single_2graphic_im_pane_g4

0x3945,	// (0x00029ec1) popup_side_volume_key_window_cp

0x41b3,	// (0x0002a72f) main_idle_act2_pane_t1

0x14ee,	// (0x00027a6a) toolbar_button_pane_g10

0xa4ca,	// (0x00030a46) popup_toolbar_window_cp1

0x49aa,	// (0x0002af26) clock_nsta_pane_cp_t1

0x49aa,	// (0x0002af26) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x0003603a) clock_nsta_pane_cp_t

0x0036,	// (0x000265b2) navi_navi_volume_pane_cp2_ParamLimits

0x0045,	// (0x000265c1) popup_side_volume_key_window_g1_ParamLimits

0x0051,	// (0x000265cd) popup_side_volume_key_window_g2_ParamLimits

0x0060,	// (0x000265dc) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00035c8d) popup_side_volume_key_window_g_ParamLimits

0x1c1d,	// (0x00028199) fep_hwr_aid_pane

0xc0b9,	// (0x00032635) bg_fep_hwr_top_pane_g4_ParamLimits

0x4f2a,	// (0x0002b4a6) fep_hwr_top_pane_g1_ParamLimits

0x4f3c,	// (0x0002b4b8) fep_hwr_top_pane_g2_ParamLimits

0x1cd8,	// (0x00028254) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x0003608f) fep_hwr_top_pane_g_ParamLimits

0x1ced,	// (0x00028269) fep_hwr_top_text_pane_ParamLimits

0x36fa,	// (0x00029c76) aid_touch_tab_arrow_arrow_2

0x3703,	// (0x00029c7f) aid_touch_tab_arrow_left_2

0x1c31,	// (0x000281ad) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1c68,	// (0x000281e4) fep_hwr_prediction_pane

0x5092,	// (0x0002b60e) fep_vkb_prediction_pane

0xc232,	// (0x000327ae) fep_vkb_side_pane_g3_ParamLimits

0xc232,	// (0x000327ae) fep_vkb_side_pane_g3

0x5144,	// (0x0002b6c0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5612,	// (0x0002bb8e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x561f,	// (0x0002bb9b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x00036139) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6025,	// (0x0002c5a1) fep_hwr_prediction_pane_g1

0x1f93,	// (0x0002850f) fep_hwr_prediction_pane_g2

0x1f9b,	// (0x00028517) fep_hwr_prediction_pane_g3

0x1fa3,	// (0x0002851f) fep_hwr_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0003623c) fep_hwr_prediction_pane_g

0x6025,	// (0x0002c5a1) fep_vkb_prediction_pane_g1

0x602f,	// (0x0002c5ab) fep_vkb_prediction_pane_g2

0x6037,	// (0x0002c5b3) fep_vkb_prediction_pane_g3

0x603f,	// (0x0002c5bb) fep_vkb_prediction_pane_g4

0x0003,

0xfcc9,	// (0x00036245) fep_vkb_prediction_pane_g

0x1aab,	// (0x00028027) slider_set_pane_g3

0x1abf,	// (0x0002803b) slider_set_pane_g4

0x1ad7,	// (0x00028053) slider_set_pane_g5

0x1aab,	// (0x00028027) slider_set_pane_g6

0x1aed,	// (0x00028069) slider_set_pane_g7

0x3dd3,	// (0x0002a34f) slider_form_pane_g3

0x3ddc,	// (0x0002a358) slider_form_pane_g4

0x3de4,	// (0x0002a360) slider_form_pane_g5

0x3dd3,	// (0x0002a34f) slider_form_pane_g6

0xbd37,	// (0x000322b3) slider_form_pane_g7

0x446a,	// (0x0002a9e6) slider_set_pane_vc_g3

0x4473,	// (0x0002a9ef) slider_set_pane_vc_g4

0x447c,	// (0x0002a9f8) slider_set_pane_vc_g5

0x446a,	// (0x0002a9e6) slider_set_pane_vc_g6

0x4485,	// (0x0002aa01) slider_set_pane_vc_g7

0x465d,	// (0x0002abd9) slider_form_pane_vc_g1

0x4666,	// (0x0002abe2) slider_form_pane_vc_g2

0x466f,	// (0x0002abeb) slider_form_pane_vc_g3

0x465d,	// (0x0002abd9) slider_form_pane_vc_g4

0x4678,	// (0x0002abf4) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x0003600c) slider_form_pane_vc_g

0x9912,	// (0x0002fe8e) main_idle_act3_pane

0x6047,	// (0x0002c5c3) ai3_links_pane

0xd395,	// (0x00033911) popup_ai3_data_window_ParamLimits

0xd395,	// (0x00033911) popup_ai3_data_window

0x9912,	// (0x0002fe8e) grid_ai3_links_pane

0xd3b3,	// (0x0003392f) cell_ai3_links_pane_ParamLimits

0xd3b3,	// (0x0003392f) cell_ai3_links_pane

0x6088,	// (0x0002c604) bg_popup_sub_pane_cp11

0x6095,	// (0x0002c611) cell_ai3_links_pane_g1

0x9912,	// (0x0002fe8e) bg_popup_sub_pane_cp12

0x60ba,	// (0x0002c636) heading_ai3_data_pane

0x60c2,	// (0x0002c63e) list_ai3_gene_pane

0x60ce,	// (0x0002c64a) popup_ai3_data_window_g1

0x60d6,	// (0x0002c652) heading_ai3_data_pane_g1

0x60de,	// (0x0002c65a) heading_ai3_data_pane_t1

0x60ec,	// (0x0002c668) list_double_ai3_gene_pane_ParamLimits

0x60ec,	// (0x0002c668) list_double_ai3_gene_pane

0x60f9,	// (0x0002c675) list_single_ai3_gene_pane_ParamLimits

0x60f9,	// (0x0002c675) list_single_ai3_gene_pane

0x4e8e,	// (0x0002b40a) list_highlight_pane_cp7_ParamLimits

0x4e8e,	// (0x0002b40a) list_highlight_pane_cp7

0x6106,	// (0x0002c682) list_single_a13_gene_pane_t1_ParamLimits

0x6106,	// (0x0002c682) list_single_a13_gene_pane_t1

0x611d,	// (0x0002c699) list_single_ai3_gene_pane_g1

0x6126,	// (0x0002c6a2) list_single_ai3_gene_pane_g2

0x0001,

0xfcd2,	// (0x0003624e) list_single_ai3_gene_pane_g

0x612e,	// (0x0002c6aa) list_double_ai3_gene_pane_g1_ParamLimits

0x612e,	// (0x0002c6aa) list_double_ai3_gene_pane_g1

0x613a,	// (0x0002c6b6) list_double_ai3_gene_pane_t1_ParamLimits

0x613a,	// (0x0002c6b6) list_double_ai3_gene_pane_t1

0x6156,	// (0x0002c6d2) list_double_ai3_gene_pane_t2_ParamLimits

0x6156,	// (0x0002c6d2) list_double_ai3_gene_pane_t2

0x616b,	// (0x0002c6e7) list_double_ai3_gene_pane_t3_ParamLimits

0x616b,	// (0x0002c6e7) list_double_ai3_gene_pane_t3

0x0002,

0xfcd7,	// (0x00036253) list_double_ai3_gene_pane_t_ParamLimits

0xfcd7,	// (0x00036253) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf2ca,	// (0x00035846) aid_size_min_col_2

0xd37f,	// (0x000338fb) aid_size_min_msg_ParamLimits

0xd37f,	// (0x000338fb) aid_size_min_msg

0xc246,	// (0x000327c2) fep_vkb_top_text_pane_g2_ParamLimits

0xc246,	// (0x000327c2) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x000360bf) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x000360bf) fep_vkb_top_text_pane_g

0x9912,	// (0x0002fe8e) main_hc_apps_shell_pane

0x6188,	// (0x0002c704) grid_hc_apps_pane_ParamLimits

0x6188,	// (0x0002c704) grid_hc_apps_pane

0x6197,	// (0x0002c713) list_hc_apps_pane

0x619f,	// (0x0002c71b) scroll_pane_cp37_ParamLimits

0x619f,	// (0x0002c71b) scroll_pane_cp37

0xd3cd,	// (0x00033949) cell_hc_apps_pane_ParamLimits

0xd3cd,	// (0x00033949) cell_hc_apps_pane

0xd497,	// (0x00033a13) cell_hc_apps_pane_g1_ParamLimits

0xd497,	// (0x00033a13) cell_hc_apps_pane_g1

0x6294,	// (0x0002c810) cell_hc_apps_pane_g2_ParamLimits

0x6294,	// (0x0002c810) cell_hc_apps_pane_g2

0x62b0,	// (0x0002c82c) cell_hc_apps_pane_g3_ParamLimits

0x62b0,	// (0x0002c82c) cell_hc_apps_pane_g3

0x0002,

0xfcde,	// (0x0003625a) cell_hc_apps_pane_g_ParamLimits

0xfcde,	// (0x0003625a) cell_hc_apps_pane_g

0xd4c4,	// (0x00033a40) cell_hc_apps_pane_t1_ParamLimits

0xd4c4,	// (0x00033a40) cell_hc_apps_pane_t1

0x9f74,	// (0x000304f0) grid_highlight_pane_cp10_ParamLimits

0x9f74,	// (0x000304f0) grid_highlight_pane_cp10

0xd504,	// (0x00033a80) list_single_hc_apps_pane_ParamLimits

0xd504,	// (0x00033a80) list_single_hc_apps_pane

0xd53e,	// (0x00033aba) list_single_hc_apps_pane_g1

0x988b,	// (0x0002fe07) list_single_hc_apps_pane_g2

0x0001,

0xfce5,	// (0x00036261) list_single_hc_apps_pane_g

0x98a4,	// (0x0002fe20) list_single_hc_apps_pane_g2_copy1

0x98c0,	// (0x0002fe3c) list_single_hc_apps_pane_t1

0x9c8d,	// (0x00030209) bg_set_opt_pane_cp_ParamLimits

0xf22b,	// (0x000357a7) setting_slider_pane_t1_ParamLimits

0xf244,	// (0x000357c0) setting_slider_pane_t2_ParamLimits

0xf25e,	// (0x000357da) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00035ada) setting_slider_pane_t_ParamLimits

0xf276,	// (0x000357f2) slider_set_pane_ParamLimits

0x079a,	// (0x00026d16) control_pane_g5_ParamLimits

0x079a,	// (0x00026d16) control_pane_g5

0x3c00,	// (0x0002a17c) slider_set_pane_g1_ParamLimits

0x1a9f,	// (0x0002801b) slider_set_pane_g2_ParamLimits

0x1aab,	// (0x00028027) slider_set_pane_g3_ParamLimits

0x1abf,	// (0x0002803b) slider_set_pane_g4_ParamLimits

0x1ad7,	// (0x00028053) slider_set_pane_g5_ParamLimits

0x1aab,	// (0x00028027) slider_set_pane_g6_ParamLimits

0x1aed,	// (0x00028069) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00035edb) slider_set_pane_g_ParamLimits

0xd2a0,	// (0x0003381c) navi_icon_text_pane_ParamLimits

0xb2c3,	// (0x0003183f) aid_fill_nsta_2_ParamLimits

0xb2fc,	// (0x00031878) aid_touch_tab_arrow_left_ParamLimits

0xb312,	// (0x0003188e) aid_touch_tab_arrow_right_ParamLimits

0xb3ad,	// (0x00031929) clock_nsta_pane_ParamLimits

0xba75,	// (0x00031ff1) navi_icon_pane_g1_ParamLimits

0xba81,	// (0x00031ffd) navi_text_pane_t1_ParamLimits

0xbfa4,	// (0x00032520) navi_icon_text_pane_g1_ParamLimits

0xbfb0,	// (0x0003252c) navi_icon_text_pane_t1_ParamLimits

0xd53e,	// (0x00033aba) list_single_hc_apps_pane_g1_ParamLimits

0x988b,	// (0x0002fe07) list_single_hc_apps_pane_g2_ParamLimits

0xfce5,	// (0x00036261) list_single_hc_apps_pane_g_ParamLimits

0x98a4,	// (0x0002fe20) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x98c0,	// (0x0002fe3c) list_single_hc_apps_pane_t1_ParamLimits

0x9a6a,	// (0x0002ffe6) popup_toolbar2_fixed_window_ParamLimits

0x9a6a,	// (0x0002ffe6) popup_toolbar2_fixed_window

0xb228,	// (0x000317a4) popup_toolbar2_float_window

0x9912,	// (0x0002fe8e) bg_popup_sub_pane_cp27

0x636a,	// (0x0002c8e6) grid_toolbar2_float_pane

0x9912,	// (0x0002fe8e) bg_popup_sub_pane_cp26

0x636a,	// (0x0002c8e6) grid_toolbar2_fixed_pane

0xd557,	// (0x00033ad3) cell_toolbar2_fixed_pane_ParamLimits

0xd557,	// (0x00033ad3) cell_toolbar2_fixed_pane

0xd574,	// (0x00033af0) cell_toolbar2_fixed_pane_g1

0x638b,	// (0x0002c907) toolbar2_fixed_button_pane

0x14a6,	// (0x00027a22) toolbar2_fixed_button_pane_g1

0x14ae,	// (0x00027a2a) toolbar2_fixed_button_pane_g2

0x14b6,	// (0x00027a32) toolbar2_fixed_button_pane_g3

0x14be,	// (0x00027a3a) toolbar2_fixed_button_pane_g4

0x14c6,	// (0x00027a42) toolbar2_fixed_button_pane_g5

0x14ce,	// (0x00027a4a) toolbar2_fixed_button_pane_g6

0x14d6,	// (0x00027a52) toolbar2_fixed_button_pane_g7

0x14de,	// (0x00027a5a) toolbar2_fixed_button_pane_g8

0x14e6,	// (0x00027a62) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00035ddd) toolbar2_fixed_button_pane_g

0x6393,	// (0x0002c90f) cell_toolbar2_float_pane_ParamLimits

0x6393,	// (0x0002c90f) cell_toolbar2_float_pane

0x63a4,	// (0x0002c920) cell_toolbar2_float_pane_g1

0x638b,	// (0x0002c907) toolbar2_fixed_button_pane_cp

0xc12e,	// (0x000326aa) fep_vkb_accented_list_pane_ParamLimits

0xc12e,	// (0x000326aa) fep_vkb_accented_list_pane

0x1e4f,	// (0x000283cb) bg_popup_fep_shadow_pane_g9

0x03c4,	// (0x00026940) bg_popup_fep_shadow_pane_cp3

0xcbbe,	// (0x0003313a) list_accented_list_pane

0x63ad,	// (0x0002c929) list_single_accented_list_pane_ParamLimits

0x63ad,	// (0x0002c929) list_single_accented_list_pane

0x03c4,	// (0x00026940) list_highlight_pane_cp10

0x63be,	// (0x0002c93a) list_single_accented_list_pane_t1

0xb144,	// (0x000316c0) popup_slider_window_ParamLimits

0xb144,	// (0x000316c0) popup_slider_window

0x6006,	// (0x0002c582) aid_indentation_list_msg

0xd67f,	// (0x00033bfb) bg_popup_window_pane_cp19

0x64f8,	// (0x0002ca74) popup_slider_window_g1

0x6514,	// (0x0002ca90) popup_slider_window_g2

0x6530,	// (0x0002caac) popup_slider_window_g3

0x0005,

0xfcea,	// (0x00036266) popup_slider_window_g

0x658c,	// (0x0002cb08) popup_slider_window_t1

0x6600,	// (0x0002cb7c) small_volume_slider_vertical_pane

0x4ec9,	// (0x0002b445) small_volume_slider_vertical_pane_g1

0x4ec9,	// (0x0002b445) small_volume_slider_vertical_pane_g2

0x661c,	// (0x0002cb98) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfc,	// (0x00036278) small_volume_slider_vertical_pane_g

0x99ca,	// (0x0002ff46) area_side_right_pane_ParamLimits

0x99ca,	// (0x0002ff46) area_side_right_pane

0xc473,	// (0x000329ef) aid_size_side_button_ParamLimits

0xc473,	// (0x000329ef) aid_size_side_button

0xc48c,	// (0x00032a08) grid_sctrl_middle_pane_ParamLimits

0xc48c,	// (0x00032a08) grid_sctrl_middle_pane

0x1fdf,	// (0x0002855b) sctrl_sk_bottom_pane

0x1ff0,	// (0x0002856c) sctrl_sk_top_pane

0x2002,	// (0x0002857e) aid_touch_sctrl_top

0x9f74,	// (0x000304f0) bg_sctrl_sk_pane_ParamLimits

0x9f74,	// (0x000304f0) bg_sctrl_sk_pane

0x200f,	// (0x0002858b) sctrl_sk_top_pane_g1

0x201c,	// (0x00028598) sctrl_sk_top_pane_t1

0x2002,	// (0x0002857e) aid_touch_sctrl_bottom

0x9f74,	// (0x000304f0) bg_sctrl_sk_pane_cp_ParamLimits

0x9f74,	// (0x000304f0) bg_sctrl_sk_pane_cp

0x2037,	// (0x000285b3) sctrl_sk_bottom_pane_g1

0x201c,	// (0x00028598) sctrl_sk_bottom_pane_t1

0xc4a6,	// (0x00032a22) cell_sctrl_middle_pane_ParamLimits

0xc4a6,	// (0x00032a22) cell_sctrl_middle_pane

0xc4b9,	// (0x00032a35) aid_touch_sctrl_middle_ParamLimits

0xc4b9,	// (0x00032a35) aid_touch_sctrl_middle

0xc4c6,	// (0x00032a42) bg_sctrl_middle_pane_ParamLimits

0xc4c6,	// (0x00032a42) bg_sctrl_middle_pane

0x66a7,	// (0x0002cc23) cell_sctrl_middle_pane_g1_ParamLimits

0x66a7,	// (0x0002cc23) cell_sctrl_middle_pane_g1

0xc4d4,	// (0x00032a50) cell_sctrl_middle_pane_g2_ParamLimits

0xc4d4,	// (0x00032a50) cell_sctrl_middle_pane_g2

0x0001,

0xfd08,	// (0x00036284) cell_sctrl_middle_pane_g_ParamLimits

0xfd08,	// (0x00036284) cell_sctrl_middle_pane_g

0x14a6,	// (0x00027a22) bg_sctrl_middle_pane_g1

0x14ae,	// (0x00027a2a) bg_sctrl_middle_pane_g2

0x14b6,	// (0x00027a32) bg_sctrl_middle_pane_g3

0x14be,	// (0x00027a3a) bg_sctrl_middle_pane_g4

0x14c6,	// (0x00027a42) bg_sctrl_middle_pane_g5

0x14ce,	// (0x00027a4a) bg_sctrl_middle_pane_g6

0x14d6,	// (0x00027a52) bg_sctrl_middle_pane_g7

0x14de,	// (0x00027a5a) bg_sctrl_middle_pane_g8

0x0007,

0xfd0d,	// (0x00036289) bg_sctrl_middle_pane_g

0x14e6,	// (0x00027a62) bg_sctrl_middle_pane_g8_copy1

0x14a6,	// (0x00027a22) bg_sctrl_sk_pane_g1

0x14ae,	// (0x00027a2a) bg_sctrl_sk_pane_g2

0x14b6,	// (0x00027a32) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00035ddd) bg_sctrl_sk_pane_g

0xa490,	// (0x00030a0c) aid_size_touch_scroll_bar

0x14be,	// (0x00027a3a) bg_sctrl_sk_pane_g4

0x14c6,	// (0x00027a42) bg_sctrl_sk_pane_g5

0x14ce,	// (0x00027a4a) bg_sctrl_sk_pane_g6

0x14d6,	// (0x00027a52) bg_sctrl_sk_pane_g7

0x14de,	// (0x00027a5a) bg_sctrl_sk_pane_g8

0x14e6,	// (0x00027a62) bg_sctrl_sk_pane_g9

0x09e3,	// (0x00026f5f) popup_fep_china_hwr2_fs_candidate_window

0xabfc,	// (0x00031178) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xabfc,	// (0x00031178) popup_fep_china_hwr2_fs_control_window

0x5144,	// (0x0002b6c0) sctrl_sk_top_pane_g2

0x0001,

0xfd03,	// (0x0003627f) sctrl_sk_top_pane_g

0xd737,	// (0x00033cb3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd737,	// (0x00033cb3) aid_fep_china_hwr2_fs_cell

0xd74d,	// (0x00033cc9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd74d,	// (0x00033cc9) bg_popup_fep_shadow_pane_cp4

0xd764,	// (0x00033ce0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd764,	// (0x00033ce0) bg_popup_fep_shadow_pane_cp5

0xd776,	// (0x00033cf2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd776,	// (0x00033cf2) popup_fep_china_hwr2_fs_control_bar_grid

0xd78a,	// (0x00033d06) popup_fep_china_hwr2_fs_control_funtion_grid

0x667b,	// (0x0002cbf7) aid_fep_china_hwr2_fs_candi_cell

0x9912,	// (0x0002fe8e) bg_popup_fep_shadow_pane_cp6

0x6685,	// (0x0002cc01) popup_fep_china_hwr2_fs_candidate_grid

0xd792,	// (0x00033d0e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd792,	// (0x00033d0e) cell_fep_china_hwr2_fs_funtion_grid

0x4ec9,	// (0x0002b445) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x66a7,	// (0x0002cc23) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x66a7,	// (0x0002cc23) cell_fep_china_hwr2_fs_funtion_grid_g1

0x66b5,	// (0x0002cc31) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x66b5,	// (0x0002cc31) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1e,	// (0x0003629a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1e,	// (0x0003629a) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7aa,	// (0x00033d26) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7aa,	// (0x00033d26) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7bf,	// (0x00033d3b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7bf,	// (0x00033d3b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd23,	// (0x0003629f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd23,	// (0x0003629f) cell_fep_china_hwr2_fs_funtion_grid_t

0x66fc,	// (0x0002cc78) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6704,	// (0x0002cc80) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x670c,	// (0x0002cc88) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd28,	// (0x000362a4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6714,	// (0x0002cc90) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6714,	// (0x0002cc90) cell_fep_china_hwr2_fs_candidate_grid

0x6733,	// (0x0002ccaf) popup_fep_china_hwr2_fs_candidate_grid_g20

0x673b,	// (0x0002ccb7) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4ec9,	// (0x0002b445) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4ec9,	// (0x0002b445) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x000360c4) cell_fep_china_hwr2_fs_candidate_grid_g

0x6743,	// (0x0002ccbf) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1052,	// (0x000275ce) clock_nsta_pane_cp_24_ParamLimits

0x1052,	// (0x000275ce) clock_nsta_pane_cp_24

0x10d2,	// (0x0002764e) indicator_nsta_pane_cp_24_ParamLimits

0x10d2,	// (0x0002764e) indicator_nsta_pane_cp_24

0x3558,	// (0x00029ad4) heading_pane_g1

0x0001,

0xf8c6,	// (0x00035e42) heading_pane_g

0x3ffa,	// (0x0002a576) grid_sct_catagory_button_pane

0x402c,	// (0x0002a5a8) scroll_pane_cp5_ParamLimits

0x4b15,	// (0x0002b091) button_value_adjust_pane_cp5_ParamLimits

0x4b15,	// (0x0002b091) button_value_adjust_pane_cp5

0x4bfa,	// (0x0002b176) form2_midp_time_pane_ParamLimits

0x6751,	// (0x0002cccd) cell_sct_catagory_button_pane_ParamLimits

0x6751,	// (0x0002cccd) cell_sct_catagory_button_pane

0x4e8e,	// (0x0002b40a) bg_button_pane_cp01_ParamLimits

0x4e8e,	// (0x0002b40a) bg_button_pane_cp01

0x4ec9,	// (0x0002b445) cell_sct_catagory_button_pane_g1

0xb1c5,	// (0x00031741) popup_tb_extension_window

0xd7db,	// (0x00033d57) aid_size_cell_ext_ParamLimits

0xd7db,	// (0x00033d57) aid_size_cell_ext

0xa2d2,	// (0x0003084e) bg_tb_trans_pane_cp1_ParamLimits

0xa2d2,	// (0x0003084e) bg_tb_trans_pane_cp1

0xd801,	// (0x00033d7d) grid_tb_ext_pane_ParamLimits

0xd801,	// (0x00033d7d) grid_tb_ext_pane

0xd841,	// (0x00033dbd) cell_tb_ext_pane_ParamLimits

0xd841,	// (0x00033dbd) cell_tb_ext_pane

0xd869,	// (0x00033de5) cell_tb_ext_pane_g1_ParamLimits

0xd869,	// (0x00033de5) cell_tb_ext_pane_g1

0x67e7,	// (0x0002cd63) cell_tb_ext_pane_t1

0x9f74,	// (0x000304f0) list_highlight_pane_cp11_ParamLimits

0x9f74,	// (0x000304f0) list_highlight_pane_cp11

0x9a7f,	// (0x0002fffb) popup_uni_indicator_window_ParamLimits

0x9a7f,	// (0x0002fffb) popup_uni_indicator_window

0xcaab,	// (0x00033027) bg_popup_sub_pane_cp14

0x6802,	// (0x0002cd7e) list_uniindi_pane

0x680e,	// (0x0002cd8a) uniindi_top_pane

0x9f74,	// (0x000304f0) bg_uniindi_top_pane

0x682f,	// (0x0002cdab) uniindi_top_pane_g1

0x6845,	// (0x0002cdc1) uniindi_top_pane_g2

0x0003,

0xfd2f,	// (0x000362ab) uniindi_top_pane_g

0x686f,	// (0x0002cdeb) uniindi_top_pane_t1

0x689b,	// (0x0002ce17) list_single_uniindi_pane_ParamLimits

0x689b,	// (0x0002ce17) list_single_uniindi_pane

0x4ec9,	// (0x0002b445) bg_uniindi_top_pane_g1

0x68ad,	// (0x0002ce29) list_single_uniindi_pane_g1

0x68c0,	// (0x0002ce3c) list_single_uniindi_pane_t1

0x9912,	// (0x0002fe8e) control_bg_pane

0x68e5,	// (0x0002ce61) bg_sctrl_sk_pane_cp1

0x68ee,	// (0x0002ce6a) bg_sctrl_sk_pane_cp2

0x68f7,	// (0x0002ce73) control_bg_pane_g1

0x6900,	// (0x0002ce7c) control_bg_pane_g2

0x0001,

0xfd38,	// (0x000362b4) control_bg_pane_g

0x493c,	// (0x0002aeb8) cell_indicator_nsta_pane_g1_ParamLimits

0xbefd,	// (0x00032479) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x00036028) cell_indicator_nsta_pane_g_ParamLimits

0xee5b,	// (0x000353d7) form2_midp_time_pane_t1_ParamLimits

0x8660,	// (0x0002ebdc) main_idle_act4_pane_ParamLimits

0x8660,	// (0x0002ebdc) main_idle_act4_pane

0xb1c5,	// (0x00031741) popup_tb_extension_window_ParamLimits

0xd829,	// (0x00033da5) tb_ext_find_pane_ParamLimits

0xd829,	// (0x00033da5) tb_ext_find_pane

0x6909,	// (0x0002ce85) ai_gene_pane_1_cp1

0x0501,	// (0x00026a7d) ai_gene_pane_2_cp1

0x6911,	// (0x0002ce8d) list_single_idle_plugin_calendar_pane

0x691a,	// (0x0002ce96) list_single_idle_plugin_notification_pane

0x6923,	// (0x0002ce9f) list_single_idle_plugin_player_pane

0xd886,	// (0x00033e02) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd886,	// (0x00033e02) list_single_idle_plugin_shortcut_pane

0xd8ae,	// (0x00033e2a) main_idle_act4_pane_t1

0xd8c6,	// (0x00033e42) main_idle_act4_pane_t2

0x0001,

0xfd3d,	// (0x000362b9) main_idle_act4_pane_t

0xd8de,	// (0x00033e5a) middle_sk_idle_act4_pane_ParamLimits

0xd8de,	// (0x00033e5a) middle_sk_idle_act4_pane

0xd8fa,	// (0x00033e76) popup_clock_digital_analogue_window_cp2

0xd921,	// (0x00033e9d) shortcut_wheel_idle_act4_pane_ParamLimits

0xd921,	// (0x00033e9d) shortcut_wheel_idle_act4_pane

0x4ec9,	// (0x0002b445) shortcut_wheel_idle_act4_pane_g1

0x4ec9,	// (0x0002b445) shortcut_wheel_idle_act4_pane_g2

0x4ec9,	// (0x0002b445) shortcut_wheel_idle_act4_pane_g3

0x4ec9,	// (0x0002b445) shortcut_wheel_idle_act4_pane_g4

0x4ec9,	// (0x0002b445) shortcut_wheel_idle_act4_pane_g5

0x69b6,	// (0x0002cf32) shortcut_wheel_idle_act4_pane_g6

0x69be,	// (0x0002cf3a) shortcut_wheel_idle_act4_pane_g7

0x69c6,	// (0x0002cf42) shortcut_wheel_idle_act4_pane_g8

0x69ce,	// (0x0002cf4a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd42,	// (0x000362be) shortcut_wheel_idle_act4_pane_g

0xc0b9,	// (0x00032635) middle_sk_idle_act4_pane_g1_ParamLimits

0xc0b9,	// (0x00032635) middle_sk_idle_act4_pane_g1

0xd99e,	// (0x00033f1a) middle_sk_idle_act4_pane_g2_ParamLimits

0xd99e,	// (0x00033f1a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd65,	// (0x000362e1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd65,	// (0x000362e1) middle_sk_idle_act4_pane_g

0xd9b6,	// (0x00033f32) middle_sk_idle_act4_pane_t1_ParamLimits

0xd9b6,	// (0x00033f32) middle_sk_idle_act4_pane_t1

0xd9e5,	// (0x00033f61) grid_ai_shortcut_pane_ParamLimits

0xd9e5,	// (0x00033f61) grid_ai_shortcut_pane

0xda02,	// (0x00033f7e) list_highlight_pane_cp16_ParamLimits

0xda02,	// (0x00033f7e) list_highlight_pane_cp16

0xda0f,	// (0x00033f8b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xda0f,	// (0x00033f8b) list_single_idle_plugin_shortcut_pane_g1

0xda1b,	// (0x00033f97) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xda1b,	// (0x00033f97) list_single_idle_plugin_shortcut_pane_g2

0xda39,	// (0x00033fb5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xda39,	// (0x00033fb5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6a,	// (0x000362e6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6a,	// (0x000362e6) list_single_idle_plugin_shortcut_pane_g

0xda4e,	// (0x00033fca) cell_ai_shortcut_pane_ParamLimits

0xda4e,	// (0x00033fca) cell_ai_shortcut_pane

0xda64,	// (0x00033fe0) cell_ai_shortcut_pane_g1_ParamLimits

0xda64,	// (0x00033fe0) cell_ai_shortcut_pane_g1

0x6909,	// (0x0002ce85) ai_gene_pane_1_cp2

0x6aff,	// (0x0002d07b) ai_gene_pane_2_cp2

0x6b07,	// (0x0002d083) list_highlight_pane_cp15

0x6b10,	// (0x0002d08c) list_single_idle_plugin_calendar_pane_g1

0x6b07,	// (0x0002d083) list_highlight_pane_cp17

0x6b18,	// (0x0002d094) list_single_idle_plugin_calendar_pane_g1_copy1

0x6b20,	// (0x0002d09c) list_single_idle_plugin_player_pane_g1

0x4261,	// (0x0002a7dd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd71,	// (0x000362ed) list_single_idle_plugin_player_pane_g

0x6b28,	// (0x0002d0a4) list_single_idle_plugin_player_pane_t1

0x6b36,	// (0x0002d0b2) list_single_idle_plugin_player_pane_t2

0x6b44,	// (0x0002d0c0) list_single_idle_plugin_player_pane_t3

0x6b52,	// (0x0002d0ce) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd76,	// (0x000362f2) list_single_idle_plugin_player_pane_t

0x6b60,	// (0x0002d0dc) wait_bar_pane_cp15

0x6b68,	// (0x0002d0e4) grid_ai_notification_pane

0x4261,	// (0x0002a7dd) list_single_idle_plugin_notification_pane_g1

0xda86,	// (0x00034002) cell_ai_notification_pane_ParamLimits

0xda86,	// (0x00034002) cell_ai_notification_pane

0x6b7e,	// (0x0002d0fa) cell_ai_notification_pane_g1

0x6b86,	// (0x0002d102) cell_ai_notification_pane_t1

0xda93,	// (0x0003400f) tb_ext_find_button_pane

0xda9b,	// (0x00034017) tb_ext_find_pane_g1

0xdaa3,	// (0x0003401f) tb_ext_find_pane_t1

0xcf8d,	// (0x00033509) tb_ext_find_button_pane_g1

0x6bb2,	// (0x0002d12e) tb_ext_find_button_pane_g2

0x0001,

0xfd7f,	// (0x000362fb) tb_ext_find_button_pane_g

0xd8ae,	// (0x00033e2a) main_idle_act4_pane_t1_ParamLimits

0xd8c6,	// (0x00033e42) main_idle_act4_pane_t2_ParamLimits

0xfd3d,	// (0x000362b9) main_idle_act4_pane_t_ParamLimits

0xd8fa,	// (0x00033e76) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd911,	// (0x00033e8d) sat_plugin_idle_act4_pane_ParamLimits

0xd911,	// (0x00033e8d) sat_plugin_idle_act4_pane

0xdab1,	// (0x0003402d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdab1,	// (0x0003402d) sat_plugin_idle_act4_pane_t1

0xdac9,	// (0x00034045) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdac9,	// (0x00034045) sat_plugin_idle_act4_pane_t2

0xdae1,	// (0x0003405d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdae1,	// (0x0003405d) sat_plugin_idle_act4_pane_t3

0xdaf9,	// (0x00034075) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdaf9,	// (0x00034075) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd84,	// (0x00036300) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd84,	// (0x00036300) sat_plugin_idle_act4_pane_t

0xf1cd,	// (0x00035749) popup_battery_window_ParamLimits

0xf1cd,	// (0x00035749) popup_battery_window

0x9f74,	// (0x000304f0) bg_popup_sub_pane_cp25_ParamLimits

0x9f74,	// (0x000304f0) bg_popup_sub_pane_cp25

0x6c07,	// (0x0002d183) popup_battery_window_g1_ParamLimits

0x6c07,	// (0x0002d183) popup_battery_window_g1

0x6c13,	// (0x0002d18f) popup_battery_window_t1_ParamLimits

0x6c13,	// (0x0002d18f) popup_battery_window_t1

0x6c25,	// (0x0002d1a1) popup_battery_window_t2_ParamLimits

0x6c25,	// (0x0002d1a1) popup_battery_window_t2

0x0001,

0xfd8d,	// (0x00036309) popup_battery_window_t_ParamLimits

0xfd8d,	// (0x00036309) popup_battery_window_t

0xa884,	// (0x00030e00) midp_canvas_pane_ParamLimits

0xa8df,	// (0x00030e5b) midp_keypad_pane_ParamLimits

0xa8df,	// (0x00030e5b) midp_keypad_pane

0x0935,	// (0x00026eb1) main_midp_pane_ParamLimits

0x49c8,	// (0x0002af44) signal_pane_g2_cp_ParamLimits

0xdb11,	// (0x0003408d) aid_size_cell_midp_keypad_ParamLimits

0xdb11,	// (0x0003408d) aid_size_cell_midp_keypad

0xdb2f,	// (0x000340ab) midp_keyp_game_grid_pane_ParamLimits

0xdb2f,	// (0x000340ab) midp_keyp_game_grid_pane

0xdb56,	// (0x000340d2) midp_keyp_rocker_pane_ParamLimits

0xdb56,	// (0x000340d2) midp_keyp_rocker_pane

0xdb95,	// (0x00034111) midp_keyp_sk_left_pane_ParamLimits

0xdb95,	// (0x00034111) midp_keyp_sk_left_pane

0xdbe9,	// (0x00034165) midp_keyp_sk_right_pane_ParamLimits

0xdbe9,	// (0x00034165) midp_keyp_sk_right_pane

0x9912,	// (0x0002fe8e) bg_button_pane_cp03

0xdc3d,	// (0x000341b9) midp_keyp_sk_left_pane_g1

0x9912,	// (0x0002fe8e) bg_button_pane_cp04

0xdc3d,	// (0x000341b9) midp_keyp_sk_right_pane_g1

0x4ec9,	// (0x0002b445) midp_keyp_rocker_pane_g1

0xdc46,	// (0x000341c2) keyp_game_cell_pane_ParamLimits

0xdc46,	// (0x000341c2) keyp_game_cell_pane

0x9912,	// (0x0002fe8e) bg_button_pane_cp02

0xdc6c,	// (0x000341e8) keyp_game_cell_pane_g1

0x9a16,	// (0x0002ff92) popup_fep_vkb2_window_ParamLimits

0x9a16,	// (0x0002ff92) popup_fep_vkb2_window

0xc4e0,	// (0x00032a5c) aid_size_cell_vkb2_ParamLimits

0xc4e0,	// (0x00032a5c) aid_size_cell_vkb2

0xc516,	// (0x00032a92) popup_fep_vkb2_window_g1_ParamLimits

0xc516,	// (0x00032a92) popup_fep_vkb2_window_g1

0xc566,	// (0x00032ae2) vkb2_area_bottom_pane_ParamLimits

0xc566,	// (0x00032ae2) vkb2_area_bottom_pane

0xc5c2,	// (0x00032b3e) vkb2_area_keypad_pane_ParamLimits

0xc5c2,	// (0x00032b3e) vkb2_area_keypad_pane

0xc610,	// (0x00032b8c) vkb2_area_top_pane_ParamLimits

0xc610,	// (0x00032b8c) vkb2_area_top_pane

0xc696,	// (0x00032c12) vkb2_top_entry_pane_ParamLimits

0xc696,	// (0x00032c12) vkb2_top_entry_pane

0xc6c3,	// (0x00032c3f) vkb2_top_grid_left_pane_ParamLimits

0xc6c3,	// (0x00032c3f) vkb2_top_grid_left_pane

0xc6e3,	// (0x00032c5f) vkb2_top_grid_right_pane_ParamLimits

0xc6e3,	// (0x00032c5f) vkb2_top_grid_right_pane

0x22a3,	// (0x0002881f) vkb2_cell_keypad_pane_ParamLimits

0x22a3,	// (0x0002881f) vkb2_cell_keypad_pane

0xc729,	// (0x00032ca5) vkb2_area_bottom_grid_pane_ParamLimits

0xc729,	// (0x00032ca5) vkb2_area_bottom_grid_pane

0xc753,	// (0x00032ccf) vkb2_area_bottom_pane_g1_ParamLimits

0xc753,	// (0x00032ccf) vkb2_area_bottom_pane_g1

0xc779,	// (0x00032cf5) vkb2_area_bottom_pane_g2_ParamLimits

0xc779,	// (0x00032cf5) vkb2_area_bottom_pane_g2

0xc7aa,	// (0x00032d26) vkb2_area_bottom_pane_g3_ParamLimits

0xc7aa,	// (0x00032d26) vkb2_area_bottom_pane_g3

0x0002,

0xfd92,	// (0x0003630e) vkb2_area_bottom_pane_g_ParamLimits

0xfd92,	// (0x0003630e) vkb2_area_bottom_pane_g

0x244d,	// (0x000289c9) vkb2_top_cell_left_pane_ParamLimits

0x244d,	// (0x000289c9) vkb2_top_cell_left_pane

0xdc75,	// (0x000341f1) vkb2_top_entry_pane_g1_ParamLimits

0xdc75,	// (0x000341f1) vkb2_top_entry_pane_g1

0xdc83,	// (0x000341ff) vkb2_top_entry_pane_t1_ParamLimits

0xdc83,	// (0x000341ff) vkb2_top_entry_pane_t1

0x6dc8,	// (0x0002d344) vkb2_top_entry_pane_t2_ParamLimits

0x6dc8,	// (0x0002d344) vkb2_top_entry_pane_t2

0x6dfa,	// (0x0002d376) vkb2_top_entry_pane_t3_ParamLimits

0x6dfa,	// (0x0002d376) vkb2_top_entry_pane_t3

0x0002,

0xfd99,	// (0x00036315) vkb2_top_entry_pane_t_ParamLimits

0xfd99,	// (0x00036315) vkb2_top_entry_pane_t

0xc814,	// (0x00032d90) vkb2_top_grid_right_pane_g1_ParamLimits

0xc814,	// (0x00032d90) vkb2_top_grid_right_pane_g1

0x24b0,	// (0x00028a2c) vkb2_top_grid_right_pane_g2_ParamLimits

0x24b0,	// (0x00028a2c) vkb2_top_grid_right_pane_g2

0x24c8,	// (0x00028a44) vkb2_top_grid_right_pane_g3_ParamLimits

0x24c8,	// (0x00028a44) vkb2_top_grid_right_pane_g3

0xc82a,	// (0x00032da6) vkb2_top_grid_right_pane_g4_ParamLimits

0xc82a,	// (0x00032da6) vkb2_top_grid_right_pane_g4

0x0003,

0xfda0,	// (0x0003631c) vkb2_top_grid_right_pane_g_ParamLimits

0xfda0,	// (0x0003631c) vkb2_top_grid_right_pane_g

0x24f6,	// (0x00028a72) vkb2_top_cell_left_pane_g1

0x250d,	// (0x00028a89) vkb2_cell_keypad_pane_g1_ParamLimits

0x250d,	// (0x00028a89) vkb2_cell_keypad_pane_g1

0x6e1e,	// (0x0002d39a) vkb2_cell_keypad_pane_t1_ParamLimits

0x6e1e,	// (0x0002d39a) vkb2_cell_keypad_pane_t1

0x251b,	// (0x00028a97) vkb2_cell_bottom_grid_pane_ParamLimits

0x251b,	// (0x00028a97) vkb2_cell_bottom_grid_pane

0x2554,	// (0x00028ad0) vkb2_cell_bottom_grid_pane_g1

0xd942,	// (0x00033ebe) aid_call2_pane_cp02

0xd94a,	// (0x00033ec6) aid_call_pane_cp02

0xd952,	// (0x00033ece) clock_digital_number_pane_cp10

0xd95a,	// (0x00033ed6) clock_digital_number_pane_cp11

0xd962,	// (0x00033ede) clock_digital_number_pane_cp12

0xd96a,	// (0x00033ee6) clock_digital_number_pane_cp13

0xd972,	// (0x00033eee) clock_digital_separator_pane_cp10

0xcf8d,	// (0x00033509) popup_clock_digital_analogue_window_cp2_g1

0xcf8d,	// (0x00033509) popup_clock_digital_analogue_window_cp2_g2

0xd97a,	// (0x00033ef6) popup_clock_digital_analogue_window_cp2_g3

0xcf8d,	// (0x00033509) popup_clock_digital_analogue_window_cp2_g4

0xd97a,	// (0x00033ef6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd55,	// (0x000362d1) popup_clock_digital_analogue_window_cp2_g

0xd982,	// (0x00033efe) popup_clock_digital_analogue_window_cp2_t1

0xd990,	// (0x00033f0c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd60,	// (0x000362dc) popup_clock_digital_analogue_window_cp2_t

0x4ec9,	// (0x0002b445) clock_digital_number_pane_cp10_g1

0x4ec9,	// (0x0002b445) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x000360c4) clock_digital_number_pane_cp10_g

0x4ec9,	// (0x0002b445) clock_digital_separator_pane_cp10_g1

0x4ec9,	// (0x0002b445) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x000360c4) clock_digital_separator_pane_cp10_g

0x6851,	// (0x0002cdcd) uniindi_top_pane_g3

0x6862,	// (0x0002cdde) uniindi_top_pane_g4

0x232e,	// (0x000288aa) vkb2_row_keypad_pane_ParamLimits

0x232e,	// (0x000288aa) vkb2_row_keypad_pane

0x2570,	// (0x00028aec) vkb2_cell_t_keypad_pane_ParamLimits

0x2570,	// (0x00028aec) vkb2_cell_t_keypad_pane

0x2580,	// (0x00028afc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2580,	// (0x00028afc) vkb2_cell_t_keypad_pane_cp08

0x2595,	// (0x00028b11) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2595,	// (0x00028b11) vkb2_cell_t_keypad_pane_cp09

0x25a9,	// (0x00028b25) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x25a9,	// (0x00028b25) vkb2_cell_t_keypad_pane_cp01

0x25ba,	// (0x00028b36) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x25ba,	// (0x00028b36) vkb2_cell_t_keypad_pane_cp02

0x25cb,	// (0x00028b47) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x25cb,	// (0x00028b47) vkb2_cell_t_keypad_pane_cp03

0x25dc,	// (0x00028b58) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x25dc,	// (0x00028b58) vkb2_cell_t_keypad_pane_cp04

0x25ed,	// (0x00028b69) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x25ed,	// (0x00028b69) vkb2_cell_t_keypad_pane_cp05

0x25fe,	// (0x00028b7a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x25fe,	// (0x00028b7a) vkb2_cell_t_keypad_pane_cp06

0x2611,	// (0x00028b8d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2611,	// (0x00028b8d) vkb2_cell_t_keypad_pane_cp07

0x2626,	// (0x00028ba2) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2626,	// (0x00028ba2) vkb2_cell_t_keypad_pane_cp10

0x5144,	// (0x0002b6c0) vkb2_cell_t_keypad_pane_g1

0x6e35,	// (0x0002d3b1) vkb2_cell_t_keypad_pane_t1

0x9912,	// (0x0002fe8e) popup_grid_graphic2_window

0xdcbc,	// (0x00034238) aid_size_cell_graphic2_ParamLimits

0xdcbc,	// (0x00034238) aid_size_cell_graphic2

0xdcfa,	// (0x00034276) bg_popup_window_pane_cp21_ParamLimits

0xdcfa,	// (0x00034276) bg_popup_window_pane_cp21

0xdd08,	// (0x00034284) graphic2_pages_pane_ParamLimits

0xdd08,	// (0x00034284) graphic2_pages_pane

0xdd60,	// (0x000342dc) grid_graphic2_control_pane_ParamLimits

0xdd60,	// (0x000342dc) grid_graphic2_control_pane

0xdda8,	// (0x00034324) grid_graphic2_pane_ParamLimits

0xdda8,	// (0x00034324) grid_graphic2_pane

0xde33,	// (0x000343af) cell_graphic2_pane

0x9912,	// (0x0002fe8e) main_comp_mode_pane

0x60c2,	// (0x0002c63e) list_ai3_gene_pane_ParamLimits

0xd67f,	// (0x00033bfb) bg_popup_window_pane_cp19_ParamLimits

0x6496,	// (0x0002ca12) bg_touch_area_indi_pane_ParamLimits

0x6496,	// (0x0002ca12) bg_touch_area_indi_pane

0x64ac,	// (0x0002ca28) bg_touch_area_indi_pane_cp01_ParamLimits

0x64ac,	// (0x0002ca28) bg_touch_area_indi_pane_cp01

0x64c4,	// (0x0002ca40) bg_touch_area_indi_pane_cp02_ParamLimits

0x64c4,	// (0x0002ca40) bg_touch_area_indi_pane_cp02

0x64de,	// (0x0002ca5a) bg_touch_area_indi_pane_cp03_ParamLimits

0x64de,	// (0x0002ca5a) bg_touch_area_indi_pane_cp03

0x64f8,	// (0x0002ca74) popup_slider_window_g1_ParamLimits

0x6514,	// (0x0002ca90) popup_slider_window_g2_ParamLimits

0x6530,	// (0x0002caac) popup_slider_window_g3_ParamLimits

0xfcea,	// (0x00036266) popup_slider_window_g_ParamLimits

0x658c,	// (0x0002cb08) popup_slider_window_t1_ParamLimits

0x6600,	// (0x0002cb7c) small_volume_slider_vertical_pane_ParamLimits

0xde33,	// (0x000343af) cell_graphic2_pane_ParamLimits

0xde96,	// (0x00034412) bg_button_pane_cp10_ParamLimits

0xde96,	// (0x00034412) bg_button_pane_cp10

0xdea9,	// (0x00034425) bg_button_pane_cp11_ParamLimits

0xdea9,	// (0x00034425) bg_button_pane_cp11

0xdebc,	// (0x00034438) graphic2_pages_pane_g1_ParamLimits

0xdebc,	// (0x00034438) graphic2_pages_pane_g1

0xded7,	// (0x00034453) graphic2_pages_pane_g2_ParamLimits

0xded7,	// (0x00034453) graphic2_pages_pane_g2

0x0001,

0xfdae,	// (0x0003632a) graphic2_pages_pane_g_ParamLimits

0xfdae,	// (0x0003632a) graphic2_pages_pane_g

0xdeef,	// (0x0003446b) graphic2_pages_pane_t1_ParamLimits

0xdeef,	// (0x0003446b) graphic2_pages_pane_t1

0xdf07,	// (0x00034483) cell_graphic2_control_pane_ParamLimits

0xdf07,	// (0x00034483) cell_graphic2_control_pane

0xdf3b,	// (0x000344b7) cell_graphic2_pane_g1_ParamLimits

0xdf3b,	// (0x000344b7) cell_graphic2_pane_g1

0xc114,	// (0x00032690) cell_graphic2_pane_g2_ParamLimits

0xc114,	// (0x00032690) cell_graphic2_pane_g2

0xc840,	// (0x00032dbc) cell_graphic2_pane_g3_ParamLimits

0xc840,	// (0x00032dbc) cell_graphic2_pane_g3

0xc121,	// (0x0003269d) cell_graphic2_pane_g4_ParamLimits

0xc121,	// (0x0003269d) cell_graphic2_pane_g4

0xdf48,	// (0x000344c4) cell_graphic2_pane_g5_ParamLimits

0xdf48,	// (0x000344c4) cell_graphic2_pane_g5

0x0004,

0xfdb3,	// (0x0003632f) cell_graphic2_pane_g_ParamLimits

0xfdb3,	// (0x0003632f) cell_graphic2_pane_g

0xdf68,	// (0x000344e4) cell_graphic2_pane_t1_ParamLimits

0xdf68,	// (0x000344e4) cell_graphic2_pane_t1

0x354c,	// (0x00029ac8) grid_highlight_pane_cp11_ParamLimits

0x354c,	// (0x00029ac8) grid_highlight_pane_cp11

0x9f74,	// (0x000304f0) bg_button_pane_cp05

0xdf9d,	// (0x00034519) cell_graphic2_control_pane_g1

0x4ec9,	// (0x0002b445) bg_touch_area_indi_pane_g1

0x710f,	// (0x0002d68b) aid_cmod_rocker_key_size

0x7119,	// (0x0002d695) aid_cmode_itu_key_size

0x7123,	// (0x0002d69f) main_cmode_video_pane

0x712d,	// (0x0002d6a9) main_comp_mode_itu_pane

0x7139,	// (0x0002d6b5) main_comp_mode_rocker_pane

0x7145,	// (0x0002d6c1) cell_cmode_rocker_pane_ParamLimits

0x7145,	// (0x0002d6c1) cell_cmode_rocker_pane

0x7159,	// (0x0002d6d5) cell_cmode_itu_pane_ParamLimits

0x7159,	// (0x0002d6d5) cell_cmode_itu_pane

0xcaab,	// (0x00033027) bg_button_pane_cp06_ParamLimits

0xcaab,	// (0x00033027) bg_button_pane_cp06

0x5144,	// (0x0002b6c0) cell_cmode_rocker_pane_g1_ParamLimits

0x5144,	// (0x0002b6c0) cell_cmode_rocker_pane_g1

0x66a7,	// (0x0002cc23) cell_cmode_rocker_pane_g2_ParamLimits

0x66a7,	// (0x0002cc23) cell_cmode_rocker_pane_g2

0x0001,

0xfdc3,	// (0x0003633f) cell_cmode_rocker_pane_g_ParamLimits

0xfdc3,	// (0x0003633f) cell_cmode_rocker_pane_g

0x9912,	// (0x0002fe8e) bg_button_pane_cp07

0x7170,	// (0x0002d6ec) cell_cmode_itu_pane_g1

0x7179,	// (0x0002d6f5) cell_cmode_itu_pane_t1

0x7187,	// (0x0002d703) cell_cmode_itu_pane_t2

0x0001,

0xfdc8,	// (0x00036344) cell_cmode_itu_pane_t

0x68d5,	// (0x0002ce51) aid_touch_ctrl_left

0x68dd,	// (0x0002ce59) aid_touch_ctrl_right

0x9912,	// (0x0002fe8e) compa_mode_pane

0xdfc3,	// (0x0003453f) aid_cmod_rocker_key_size_cp

0xdfcd,	// (0x00034549) aid_cmode_itu_key_size_cp

0x71a9,	// (0x0002d725) compa_mode_pane_g1

0x71b1,	// (0x0002d72d) compa_mode_pane_g2

0x71b9,	// (0x0002d735) compa_mode_pane_g3

0x0002,

0xfdcd,	// (0x00036349) compa_mode_pane_g

0xdfd7,	// (0x00034553) main_comp_mode_itu_pane_cp

0xdfdf,	// (0x0003455b) main_comp_mode_rocker_pane_cp

0xdfe7,	// (0x00034563) cell_cmode_itu_pane_cp_ParamLimits

0xdfe7,	// (0x00034563) cell_cmode_itu_pane_cp

0xdffc,	// (0x00034578) cell_cmode_rocker_pane_cp_ParamLimits

0xdffc,	// (0x00034578) cell_cmode_rocker_pane_cp

0xcaab,	// (0x00033027) bg_button_pane_cp06_cp_ParamLimits

0xcaab,	// (0x00033027) bg_button_pane_cp06_cp

0x5144,	// (0x0002b6c0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5144,	// (0x0002b6c0) cell_cmode_rocker_pane_g1_cp

0x4ec9,	// (0x0002b445) cell_cmode_rocker_pane_g2_cp

0x9912,	// (0x0002fe8e) bg_button_pane_cp07_cp

0xe00e,	// (0x0003458a) cell_cmode_itu_pane_g1_cp

0xe017,	// (0x00034593) cell_cmode_itu_pane_t1_cp

0xe017,	// (0x00034593) cell_cmode_itu_pane_t2_cp

0xbd2f,	// (0x000322ab) settings_code_pane_cp2

0x9c8d,	// (0x00030209) bg_popup_window_pane_cp3_ParamLimits

0xa162,	// (0x000306de) heading_pane_cp3_ParamLimits

0xa16e,	// (0x000306ea) listscroll_popup_graphic_pane_ParamLimits

0x1c1d,	// (0x00028199) fep_hwr_aid_pane_ParamLimits

0x2002,	// (0x0002857e) aid_touch_sctrl_top_ParamLimits

0x200f,	// (0x0002858b) sctrl_sk_top_pane_g1_ParamLimits

0x5144,	// (0x0002b6c0) sctrl_sk_top_pane_g2_ParamLimits

0xfd03,	// (0x0003627f) sctrl_sk_top_pane_g_ParamLimits

0x201c,	// (0x00028598) sctrl_sk_top_pane_t1_ParamLimits

0x2002,	// (0x0002857e) aid_touch_sctrl_bottom_ParamLimits

0x201c,	// (0x00028598) sctrl_sk_bottom_pane_t1_ParamLimits

0x681b,	// (0x0002cd97) aid_area_touch_clock

0xc658,	// (0x00032bd4) aid_vkb2_area_top_pane_cell_ParamLimits

0xc658,	// (0x00032bd4) aid_vkb2_area_top_pane_cell

0xc703,	// (0x00032c7f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc703,	// (0x00032c7f) aid_vkb2_area_bottom_pane_cell

0x6d80,	// (0x0002d2fc) popup_char_count_window

0x720f,	// (0x0002d78b) popup_char_count_window_g1

0x7218,	// (0x0002d794) popup_char_count_window_g2

0x7221,	// (0x0002d79d) popup_char_count_window_g3

0x0002,

0xfdd4,	// (0x00036350) popup_char_count_window_g

0x722a,	// (0x0002d7a6) popup_char_count_window_t1

0x20bf,	// (0x0002863b) popup_fep_char_preview_window_ParamLimits

0x20bf,	// (0x0002863b) popup_fep_char_preview_window

0xc678,	// (0x00032bf4) vkb2_top_candi_pane_ParamLimits

0xc678,	// (0x00032bf4) vkb2_top_candi_pane

0xe025,	// (0x000345a1) cell_vkb2_top_candi_pane_ParamLimits

0xe025,	// (0x000345a1) cell_vkb2_top_candi_pane

0x2ed5,	// (0x00029451) bg_popup_fep_char_preview_window_ParamLimits

0x2ed5,	// (0x00029451) bg_popup_fep_char_preview_window

0x263b,	// (0x00028bb7) popup_fep_char_preview_window_t1_ParamLimits

0x263b,	// (0x00028bb7) popup_fep_char_preview_window_t1

0x7289,	// (0x0002d805) bg_popup_fep_char_preview_window_g1

0x7291,	// (0x0002d80d) bg_popup_fep_char_preview_window_g2

0x7299,	// (0x0002d815) bg_popup_fep_char_preview_window_g3

0x72a1,	// (0x0002d81d) bg_popup_fep_char_preview_window_g4

0x72a9,	// (0x0002d825) bg_popup_fep_char_preview_window_g5

0x2675,	// (0x00028bf1) bg_popup_fep_char_preview_window_g6

0x72b1,	// (0x0002d82d) bg_popup_fep_char_preview_window_g7

0x72b9,	// (0x0002d835) bg_popup_fep_char_preview_window_g8

0x72c1,	// (0x0002d83d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddb,	// (0x00036357) bg_popup_fep_char_preview_window_g

0x5144,	// (0x0002b6c0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5144,	// (0x0002b6c0) cell_vkb2_top_candi_pane_g1

0x5485,	// (0x0002ba01) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5485,	// (0x0002ba01) cell_vkb2_top_candi_pane_g2

0x54a6,	// (0x0002ba22) cell_vkb2_top_candi_pane_g3_ParamLimits

0x54a6,	// (0x0002ba22) cell_vkb2_top_candi_pane_g3

0x267d,	// (0x00028bf9) cell_vkb2_top_candi_pane_g4_ParamLimits

0x267d,	// (0x00028bf9) cell_vkb2_top_candi_pane_g4

0x72c9,	// (0x0002d845) cell_vkb2_top_candi_pane_g5_ParamLimits

0x72c9,	// (0x0002d845) cell_vkb2_top_candi_pane_g5

0x66a7,	// (0x0002cc23) cell_vkb2_top_candi_pane_g6_ParamLimits

0x66a7,	// (0x0002cc23) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdee,	// (0x0003636a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdee,	// (0x0003636a) cell_vkb2_top_candi_pane_g

0x269e,	// (0x00028c1a) cell_vkb2_top_candi_pane_t1

0x1a8b,	// (0x00028007) aid_size_touch_slider_mark_ParamLimits

0x1a8b,	// (0x00028007) aid_size_touch_slider_mark

0xdd44,	// (0x000342c0) grid_graphic2_catg_pane_ParamLimits

0xdd44,	// (0x000342c0) grid_graphic2_catg_pane

0xde02,	// (0x0003437e) popup_grid_graphic2_window_t1_ParamLimits

0xde02,	// (0x0003437e) popup_grid_graphic2_window_t1

0xde18,	// (0x00034394) popup_grid_graphic2_window_t2_ParamLimits

0xde18,	// (0x00034394) popup_grid_graphic2_window_t2

0x0001,

0xfda9,	// (0x00036325) popup_grid_graphic2_window_t_ParamLimits

0xfda9,	// (0x00036325) popup_grid_graphic2_window_t

0x9f74,	// (0x000304f0) bg_button_pane_cp05_ParamLimits

0xdf9d,	// (0x00034519) cell_graphic2_control_pane_g1_ParamLimits

0xe08f,	// (0x0003460b) cell_graphic2_catg_pane_ParamLimits

0xe08f,	// (0x0003460b) cell_graphic2_catg_pane

0x9912,	// (0x0002fe8e) bg_button_pane_cp12

0xe0a1,	// (0x0003461d) cell_graphic2_catg_pane_g1

0x67e7,	// (0x0002cd63) cell_tb_ext_pane_t1_ParamLimits

0x246d,	// (0x000289e9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x246d,	// (0x000289e9) vkb2_top_cell_right_narrow_pane

0x2485,	// (0x00028a01) vkb2_top_cell_right_wide_pane_ParamLimits

0x2485,	// (0x00028a01) vkb2_top_cell_right_wide_pane

0x8660,	// (0x0002ebdc) bg_vkb2_func_pane_ParamLimits

0x8660,	// (0x0002ebdc) bg_vkb2_func_pane

0x24f6,	// (0x00028a72) vkb2_top_cell_left_pane_g1_ParamLimits

0x8660,	// (0x0002ebdc) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8660,	// (0x0002ebdc) bg_vkb2_fuc_pane_cp03

0x2554,	// (0x00028ad0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x14ae,	// (0x00027a2a) bg_vkb2_func_pane_g1

0x14b6,	// (0x00027a32) bg_vkb2_func_pane_g2

0x14c6,	// (0x00027a42) bg_vkb2_func_pane_g3

0x14be,	// (0x00027a3a) bg_vkb2_func_pane_g4

0x14ce,	// (0x00027a4a) bg_vkb2_func_pane_g5

0x14d6,	// (0x00027a52) bg_vkb2_func_pane_g6

0x14de,	// (0x00027a5a) bg_vkb2_func_pane_g7

0x14e6,	// (0x00027a62) bg_vkb2_func_pane_g8

0x14a6,	// (0x00027a22) bg_vkb2_func_pane_g9

0x0008,

0xfdfb,	// (0x00036377) bg_vkb2_func_pane_g

0x8660,	// (0x0002ebdc) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8660,	// (0x0002ebdc) bg_vkb2_fuc_pane_cp01

0x24f6,	// (0x00028a72) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x24f6,	// (0x00028a72) vkb2_top_cell_right_wide_pane_g1

0x8660,	// (0x0002ebdc) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8660,	// (0x0002ebdc) bg_vkb2_fuc_pane_cp02

0x2554,	// (0x00028ad0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2554,	// (0x00028ad0) vkb2_top_cell_right_narrow_pane_g1

0xd5b9,	// (0x00033b35) aid_touch_area_decrease_ParamLimits

0xd5b9,	// (0x00033b35) aid_touch_area_decrease

0xd5f3,	// (0x00033b6f) aid_touch_area_increase_ParamLimits

0xd5f3,	// (0x00033b6f) aid_touch_area_increase

0xd61b,	// (0x00033b97) aid_touch_area_mute_ParamLimits

0xd61b,	// (0x00033b97) aid_touch_area_mute

0xd64b,	// (0x00033bc7) aid_touch_area_slider_ParamLimits

0xd64b,	// (0x00033bc7) aid_touch_area_slider

0xd68b,	// (0x00033c07) popup_slider_window_g4_ParamLimits

0xd68b,	// (0x00033c07) popup_slider_window_g4

0xd6b3,	// (0x00033c2f) popup_slider_window_g5_ParamLimits

0xd6b3,	// (0x00033c2f) popup_slider_window_g5

0xd6e7,	// (0x00033c63) popup_slider_window_g6_ParamLimits

0xd6e7,	// (0x00033c63) popup_slider_window_g6

0x65ba,	// (0x0002cb36) popup_slider_window_t2_ParamLimits

0x65ba,	// (0x0002cb36) popup_slider_window_t2

0x0001,

0xfcf7,	// (0x00036273) popup_slider_window_t_ParamLimits

0xfcf7,	// (0x00036273) popup_slider_window_t

0xd703,	// (0x00033c7f) slider_pane_ParamLimits

0xd703,	// (0x00033c7f) slider_pane

0x7305,	// (0x0002d881) slider_pane_g1_ParamLimits

0x7305,	// (0x0002d881) slider_pane_g1

0x7319,	// (0x0002d895) slider_pane_g2_ParamLimits

0x7319,	// (0x0002d895) slider_pane_g2

0x732f,	// (0x0002d8ab) slider_pane_g3_ParamLimits

0x732f,	// (0x0002d8ab) slider_pane_g3

0x0003,

0xfe0e,	// (0x0003638a) slider_pane_g_ParamLimits

0xfe0e,	// (0x0003638a) slider_pane_g

0xb211,	// (0x0003178d) popup_tb_float_extension_window_ParamLimits

0xb211,	// (0x0003178d) popup_tb_float_extension_window

0x735b,	// (0x0002d8d7) aid_size_cell_tb_float_ext

0x9912,	// (0x0002fe8e) bg_popup_sub_window_cp28

0x7367,	// (0x0002d8e3) grid_tb_float_ext_pane

0x7373,	// (0x0002d8ef) cell_tb_float_ext_pane_ParamLimits

0x7373,	// (0x0002d8ef) cell_tb_float_ext_pane

0x738f,	// (0x0002d90b) cell_tb_float_ext_pane_g1

0x7398,	// (0x0002d914) grid_highlight_pane_cp12

0xc0f2,	// (0x0003266e) cell_last_hwr_side_pane_ParamLimits

0xc0f2,	// (0x0003266e) cell_last_hwr_side_pane

0x4ec9,	// (0x0002b445) cell_last_hwr_side_pane_g1

0x73a1,	// (0x0002d91d) cell_last_hwr_side_pane_g2

0x0001,

0xfe17,	// (0x00036393) cell_last_hwr_side_pane_g

0xc7df,	// (0x00032d5b) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc7df,	// (0x00032d5b) vkb2_area_bottom_space_btn_pane

0x5144,	// (0x0002b6c0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6e35,	// (0x0002d3b1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x269e,	// (0x00028c1a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x26bc,	// (0x00028c38) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x26bc,	// (0x00028c38) vkb2_area_bottom_space_btn_pane_g1

0x26f6,	// (0x00028c72) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x26f6,	// (0x00028c72) vkb2_area_bottom_space_btn_pane_g2

0x272c,	// (0x00028ca8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x272c,	// (0x00028ca8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1c,	// (0x00036398) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1c,	// (0x00036398) vkb2_area_bottom_space_btn_pane_g

0x1cc6,	// (0x00028242) cel_fep_hwr_func_pane_ParamLimits

0x1cc6,	// (0x00028242) cel_fep_hwr_func_pane

0xc0c7,	// (0x00032643) cell_hwr_side_button_pane_ParamLimits

0xc0c7,	// (0x00032643) cell_hwr_side_button_pane

0x681b,	// (0x0002cd97) aid_area_touch_clock_ParamLimits

0x9f74,	// (0x000304f0) bg_uniindi_top_pane_ParamLimits

0x682f,	// (0x0002cdab) uniindi_top_pane_g1_ParamLimits

0x6845,	// (0x0002cdc1) uniindi_top_pane_g2_ParamLimits

0x6851,	// (0x0002cdcd) uniindi_top_pane_g3_ParamLimits

0x6862,	// (0x0002cdde) uniindi_top_pane_g4_ParamLimits

0xfd2f,	// (0x000362ab) uniindi_top_pane_g_ParamLimits

0x686f,	// (0x0002cdeb) uniindi_top_pane_t1_ParamLimits

0x9f74,	// (0x000304f0) bg_vkb2_func_pane_cp01_ParamLimits

0x9f74,	// (0x000304f0) bg_vkb2_func_pane_cp01

0x73aa,	// (0x0002d926) cel_fep_hwr_func_pane_g1_ParamLimits

0x73aa,	// (0x0002d926) cel_fep_hwr_func_pane_g1

0x9f74,	// (0x000304f0) bg_vkb2_func_pane_cp02_ParamLimits

0x9f74,	// (0x000304f0) bg_vkb2_func_pane_cp02

0x73aa,	// (0x0002d926) cell_hwr_side_button_pane_g1_ParamLimits

0x73aa,	// (0x0002d926) cell_hwr_side_button_pane_g1

0x12f7,	// (0x00027873) status_pane_g4_ParamLimits

0x12f7,	// (0x00027873) status_pane_g4

0x1311,	// (0x0002788d) status_pane_t1

0x4c68,	// (0x0002b1e4) form2_midp_gauge_slider_cont_pane

0x4c70,	// (0x0002b1ec) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfff,	// (0x0003257b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc011,	// (0x0003258d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x00036077) form2_midp_gauge_slider_pane_t_ParamLimits

0x4ca6,	// (0x0002b222) form2_midp_slider_pane_ParamLimits

0x207f,	// (0x000285fb) aid_size_cell_func_vkb2_ParamLimits

0x207f,	// (0x000285fb) aid_size_cell_func_vkb2

0x7347,	// (0x0002d8c3) slider_pane_g4_ParamLimits

0x7347,	// (0x0002d8c3) slider_pane_g4

0xc84d,	// (0x00032dc9) form2_midp_gauge_slider_pane_t2_cp01

0xc85b,	// (0x00032dd7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc85b,	// (0x00032dd7) form2_midp_gauge_slider_pane_t3_cp01

0x27a1,	// (0x00028d1d) form2_midp_slider_pane_cp01

0x9912,	// (0x0002fe8e) navi_smil_pane

0x73e3,	// (0x0002d95f) navi_smil_pane_g1

0x73eb,	// (0x0002d967) navi_smil_pane_t1

0x73b8,	// (0x0002d934) form2_midp_slider_pane_g1

0x73c1,	// (0x0002d93d) form2_midp_slider_pane_g2

0x73c9,	// (0x0002d945) form2_midp_slider_pane_g3

0x73b8,	// (0x0002d934) form2_midp_slider_pane_g4

0xe0aa,	// (0x00034626) form2_midp_slider_pane_g5

0x0004,

0xfe25,	// (0x000363a1) form2_midp_slider_pane_g

0x2766,	// (0x00028ce2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2766,	// (0x00028ce2) vkb2_area_bottom_space_btn_pane_g4

0xb3f8,	// (0x00031974) lc0_navi_pane_ParamLimits

0xb3f8,	// (0x00031974) lc0_navi_pane

0xb468,	// (0x000319e4) lc0_stat_indi_pane_ParamLimits

0xb468,	// (0x000319e4) lc0_stat_indi_pane

0xb47d,	// (0x000319f9) ls0_title_pane_ParamLimits

0xb47d,	// (0x000319f9) ls0_title_pane

0xcaab,	// (0x00033027) bg_popup_sub_pane_cp14_ParamLimits

0x6802,	// (0x0002cd7e) list_uniindi_pane_ParamLimits

0x680e,	// (0x0002cd8a) uniindi_top_pane_ParamLimits

0x68ad,	// (0x0002ce29) list_single_uniindi_pane_g1_ParamLimits

0x68c0,	// (0x0002ce3c) list_single_uniindi_pane_t1_ParamLimits

0xc878,	// (0x00032df4) lc0_stat_clock_pane_ParamLimits

0xc878,	// (0x00032df4) lc0_stat_clock_pane

0xe0b3,	// (0x0003462f) lc0_stat_indi_pane_g1_ParamLimits

0xe0b3,	// (0x0003462f) lc0_stat_indi_pane_g1

0xe0c0,	// (0x0003463c) lc0_stat_indi_pane_g2_ParamLimits

0xe0c0,	// (0x0003463c) lc0_stat_indi_pane_g2

0x0001,

0xfe30,	// (0x000363ac) lc0_stat_indi_pane_g_ParamLimits

0xfe30,	// (0x000363ac) lc0_stat_indi_pane_g

0xc885,	// (0x00032e01) lc0_uni_indicator_pane_ParamLimits

0xc885,	// (0x00032e01) lc0_uni_indicator_pane

0xe0cd,	// (0x00034649) ls0_title_pane_g1_ParamLimits

0xe0cd,	// (0x00034649) ls0_title_pane_g1

0xe0e1,	// (0x0003465d) ls0_title_pane_t1_ParamLimits

0xe0e1,	// (0x0003465d) ls0_title_pane_t1

0xc892,	// (0x00032e0e) lc0_uni_indicator_pane_g1_ParamLimits

0xc892,	// (0x00032e0e) lc0_uni_indicator_pane_g1

0x745d,	// (0x0002d9d9) lc0_stat_clock_pane_t1

0x9912,	// (0x0002fe8e) main_ai5_pane

0x746b,	// (0x0002d9e7) ai5_sk_pane_ParamLimits

0x746b,	// (0x0002d9e7) ai5_sk_pane

0xe10f,	// (0x0003468b) cell_ai5_widget_pane_ParamLimits

0xe10f,	// (0x0003468b) cell_ai5_widget_pane

0x7a14,	// (0x0002df90) aid_size_cell_widget_grid

0x7a22,	// (0x0002df9e) bg_ai5_widget_pane_ParamLimits

0x7a22,	// (0x0002df9e) bg_ai5_widget_pane

0x7a96,	// (0x0002e012) cell_ai5_widget_pane_g2

0x7aa6,	// (0x0002e022) cell_ai5_widget_pane_g3

0x7abd,	// (0x0002e039) cell_ai5_widget_pane_g4

0x7ac9,	// (0x0002e045) cell_ai5_widget_pane_g5

0xe466,	// (0x000349e2) cell_ai5_widget_pane_g6

0xe472,	// (0x000349ee) cell_ai5_widget_pane_g7

0x7b29,	// (0x0002e0a5) cell_ai5_widget_pane_t1_ParamLimits

0x7b29,	// (0x0002e0a5) cell_ai5_widget_pane_t1

0x7b46,	// (0x0002e0c2) cell_ai5_widget_pane_t2_ParamLimits

0x7b46,	// (0x0002e0c2) cell_ai5_widget_pane_t2

0x7b5e,	// (0x0002e0da) cell_ai5_widget_pane_t3_ParamLimits

0x7b5e,	// (0x0002e0da) cell_ai5_widget_pane_t3

0x7b76,	// (0x0002e0f2) cell_ai5_widget_pane_t4_ParamLimits

0x7b76,	// (0x0002e0f2) cell_ai5_widget_pane_t4

0x7b93,	// (0x0002e10f) cell_ai5_widget_pane_t5_ParamLimits

0x7b93,	// (0x0002e10f) cell_ai5_widget_pane_t5

0x7bb2,	// (0x0002e12e) cell_ai5_widget_pane_t6_ParamLimits

0x7bb2,	// (0x0002e12e) cell_ai5_widget_pane_t6

0x7bc4,	// (0x0002e140) cell_ai5_widget_pane_t7_ParamLimits

0x7bc4,	// (0x0002e140) cell_ai5_widget_pane_t7

0x7bdd,	// (0x0002e159) cell_ai5_widget_pane_t8_ParamLimits

0x7bdd,	// (0x0002e159) cell_ai5_widget_pane_t8

0x0009,

0xfe4a,	// (0x000363c6) cell_ai5_widget_pane_t_ParamLimits

0xfe4a,	// (0x000363c6) cell_ai5_widget_pane_t

0x7c31,	// (0x0002e1ad) grid_ai5_widget_pane

0xcaab,	// (0x00033027) highlight_cell_ai5_widget_pane_ParamLimits

0xcaab,	// (0x00033027) highlight_cell_ai5_widget_pane

0xe47e,	// (0x000349fa) ai5_sk_left_pane

0xe488,	// (0x00034a04) ai5_sk_middle_pane

0xe492,	// (0x00034a0e) ai5_sk_right_pane

0x7c63,	// (0x0002e1df) bg_ai5_widget_pane_g1_ParamLimits

0x7c63,	// (0x0002e1df) bg_ai5_widget_pane_g1

0x7c6f,	// (0x0002e1eb) bg_ai5_widget_pane_g2_ParamLimits

0x7c6f,	// (0x0002e1eb) bg_ai5_widget_pane_g2

0x7c7b,	// (0x0002e1f7) bg_ai5_widget_pane_g3_ParamLimits

0x7c7b,	// (0x0002e1f7) bg_ai5_widget_pane_g3

0x7c87,	// (0x0002e203) bg_ai5_widget_pane_g4_ParamLimits

0x7c87,	// (0x0002e203) bg_ai5_widget_pane_g4

0x7c93,	// (0x0002e20f) bg_ai5_widget_pane_g5_ParamLimits

0x7c93,	// (0x0002e20f) bg_ai5_widget_pane_g5

0x7c9f,	// (0x0002e21b) bg_ai5_widget_pane_g6_ParamLimits

0x7c9f,	// (0x0002e21b) bg_ai5_widget_pane_g6

0x7cab,	// (0x0002e227) bg_ai5_widget_pane_g7_ParamLimits

0x7cab,	// (0x0002e227) bg_ai5_widget_pane_g7

0x7cb7,	// (0x0002e233) bg_ai5_widget_pane_g8_ParamLimits

0x7cb7,	// (0x0002e233) bg_ai5_widget_pane_g8

0x7cc3,	// (0x0002e23f) bg_ai5_widget_pane_g9_ParamLimits

0x7cc3,	// (0x0002e23f) bg_ai5_widget_pane_g9

0x0008,

0xfe5f,	// (0x000363db) bg_ai5_widget_pane_g_ParamLimits

0xfe5f,	// (0x000363db) bg_ai5_widget_pane_g

0x7cf9,	// (0x0002e275) cell_shortcut_ai5_widget_pane_ParamLimits

0x7cf9,	// (0x0002e275) cell_shortcut_ai5_widget_pane

0x03c4,	// (0x00026940) bg_cell_shortcut_ai5_widget_pane

0x7d0c,	// (0x0002e288) cell_grid_ai5_widget_pane_g1

0x03c4,	// (0x00026940) highlight_cell_shortcut_ai5_widget_pane

0x14b6,	// (0x00027a32) ai5_sk_left_pane_g1

0x7d15,	// (0x0002e291) ai5_sk_left_pane_g2

0x7d1d,	// (0x0002e299) ai5_sk_left_pane_g3

0x7d25,	// (0x0002e2a1) ai5_sk_left_pane_g4

0x0003,

0xfe72,	// (0x000363ee) ai5_sk_left_pane_g

0x7d2d,	// (0x0002e2a9) ai5_sk_left_pane_t1

0x14ae,	// (0x00027a2a) ai5_sk_right_pane_g1

0x7d3b,	// (0x0002e2b7) ai5_sk_right_pane_g2

0x7d43,	// (0x0002e2bf) ai5_sk_right_pane_g3

0x7d4b,	// (0x0002e2c7) ai5_sk_right_pane_g4

0x0003,

0xfe7b,	// (0x000363f7) ai5_sk_right_pane_g

0x7d53,	// (0x0002e2cf) ai5_sk_right_pane_t1

0x14ae,	// (0x00027a2a) ai5_sk_middle_pane_g1

0x14b6,	// (0x00027a32) ai5_sk_middle_pane_g2

0x14ce,	// (0x00027a4a) ai5_sk_middle_pane_g3

0x7d43,	// (0x0002e2bf) ai5_sk_middle_pane_g4

0x7d1d,	// (0x0002e299) ai5_sk_middle_pane_g5

0x7d61,	// (0x0002e2dd) ai5_sk_middle_pane_g6

0xe49c,	// (0x00034a18) ai5_sk_middle_pane_g7

0x0006,

0xfe84,	// (0x00036400) ai5_sk_middle_pane_g

0xb2e2,	// (0x0003185e) aid_touch_area_size_lc0_ParamLimits

0xb2e2,	// (0x0003185e) aid_touch_area_size_lc0

0x1e65,	// (0x000283e1) cell_hwr_candidate_pane_t1_ParamLimits

0x0fae,	// (0x0002752a) aid_touch_navi_pane

0xb588,	// (0x00031b04) status_dt_navi_pane_ParamLimits

0xb588,	// (0x00031b04) status_dt_navi_pane

0xb5a0,	// (0x00031b1c) status_dt_sta_pane_ParamLimits

0xb5a0,	// (0x00031b1c) status_dt_sta_pane

0xe4a4,	// (0x00034a20) dt_sta_controll_pane

0xe4b1,	// (0x00034a2d) dt_sta_indi_pane

0xe4be,	// (0x00034a3a) dt_sta_title_pane

0x9f74,	// (0x000304f0) bg_dt_sta_indi_pane_ParamLimits

0x9f74,	// (0x000304f0) bg_dt_sta_indi_pane

0xe4d0,	// (0x00034a4c) dt_sta_battery_pane

0xe4d8,	// (0x00034a54) dt_sta_indi_pane_g1

0xe4e1,	// (0x00034a5d) dt_sta_indi_pane_g2

0xe4ea,	// (0x00034a66) dt_sta_indi_pane_g3

0x0002,

0xfe93,	// (0x0003640f) dt_sta_indi_pane_g

0xe4f3,	// (0x00034a6f) dt_sta_signal_pane

0xcaab,	// (0x00033027) bg_dt_sta_title_pane_ParamLimits

0xcaab,	// (0x00033027) bg_dt_sta_title_pane

0xe4fc,	// (0x00034a78) dt_sta_title_pane_g1

0xe504,	// (0x00034a80) dt_sta_title_pane_t1_ParamLimits

0xe504,	// (0x00034a80) dt_sta_title_pane_t1

0x9912,	// (0x0002fe8e) bg_dt_sta_control_pane

0xe519,	// (0x00034a95) dt_sta_controll_pane_g1

0xe522,	// (0x00034a9e) bg_dt_sta_title_pane_g1

0xe52b,	// (0x00034aa7) bg_dt_sta_title_pane_g2

0xe534,	// (0x00034ab0) bg_dt_sta_title_pane_g3

0x0002,

0xfe9a,	// (0x00036416) bg_dt_sta_title_pane_g

0x4ec9,	// (0x0002b445) bg_dt_sta_indi_pane_g1

0x7e0f,	// (0x0002e38b) dt_sta_signal_pane_g1

0x7e17,	// (0x0002e393) dt_sta_signal_pane_g2

0x0001,

0xfea1,	// (0x0003641d) dt_sta_signal_pane_g

0x7e1f,	// (0x0002e39b) dt_sta_battery_pane_g1

0x7e28,	// (0x0002e3a4) dt_sta_battery_pane_t1

0x4ec9,	// (0x0002b445) bg_dt_sta_control_pane_g1

0xd00f,	// (0x0003358b) fep_china_uni_eep_pane

0xd017,	// (0x00033593) fep_china_uni_entry_pane_ParamLimits

0xd027,	// (0x000335a3) popup_fep_china_uni_window_g1_ParamLimits

0xd037,	// (0x000335b3) popup_fep_china_uni_window_g2_ParamLimits

0xd037,	// (0x000335b3) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00035c99) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00035c99) popup_fep_china_uni_window_g

0x7e37,	// (0x0002e3b3) fep_china_uni_eep_pane_g1

0x7e3f,	// (0x0002e3bb) fep_china_uni_eep_pane_t1

0x73da,	// (0x0002d956) aid_touch_area_size_smil_player

0x1106,	// (0x00027682) lc0_clock_pane

0x1305,	// (0x00027881) status_pane_g5_ParamLimits

0x1305,	// (0x00027881) status_pane_g5

0xad37,	// (0x000312b3) popup_keymap_window

0x12c3,	// (0x0002783f) status_icon_pane

0x7aa6,	// (0x0002e022) cell_ai5_widget_pane_g3_ParamLimits

0x7abd,	// (0x0002e039) cell_ai5_widget_pane_g4_ParamLimits

0x7ac9,	// (0x0002e045) cell_ai5_widget_pane_g5_ParamLimits

0x7aed,	// (0x0002e069) cell_ai5_widget_pane_g8_ParamLimits

0x7aed,	// (0x0002e069) cell_ai5_widget_pane_g8

0x7b01,	// (0x0002e07d) cell_ai5_widget_pane_g9_ParamLimits

0x7b01,	// (0x0002e07d) cell_ai5_widget_pane_g9

0x7b15,	// (0x0002e091) cell_ai5_widget_pane_g10_ParamLimits

0x7b15,	// (0x0002e091) cell_ai5_widget_pane_g10

0x7e4e,	// (0x0002e3ca) status_icon_pane_g1

0x9912,	// (0x0002fe8e) bg_popup_sub_pane_cp13

0x7e56,	// (0x0002e3d2) popup_keymap_window_t1

0xaa42,	// (0x00030fbe) control_pane_g6_ParamLimits

0xaa42,	// (0x00030fbe) control_pane_g6

0xaa4f,	// (0x00030fcb) control_pane_g7_ParamLimits

0xaa4f,	// (0x00030fcb) control_pane_g7

0xaa5c,	// (0x00030fd8) control_pane_g8_ParamLimits

0xaa5c,	// (0x00030fd8) control_pane_g8

0xe4a4,	// (0x00034a20) dt_sta_controll_pane_ParamLimits

0xe4b1,	// (0x00034a2d) dt_sta_indi_pane_ParamLimits

0xe4be,	// (0x00034a3a) dt_sta_title_pane_ParamLimits

0xa499,	// (0x00030a15) aid_size_touch_scroll_bar_cale

0xf1e5,	// (0x00035761) popup_discreet_window_ParamLimits

0xf1e5,	// (0x00035761) popup_discreet_window

0x9a60,	// (0x0002ffdc) popup_sk_window

0x2ed5,	// (0x00029451) bg_popup_sub_pane_cp28_ParamLimits

0x2ed5,	// (0x00029451) bg_popup_sub_pane_cp28

0x7e64,	// (0x0002e3e0) popup_discreet_window_g1_ParamLimits

0x7e64,	// (0x0002e3e0) popup_discreet_window_g1

0x7e84,	// (0x0002e400) popup_discreet_window_t1_ParamLimits

0x7e84,	// (0x0002e400) popup_discreet_window_t1

0x7ea2,	// (0x0002e41e) popup_discreet_window_t2_ParamLimits

0x7ea2,	// (0x0002e41e) popup_discreet_window_t2

0x0002,

0xfea6,	// (0x00036422) popup_discreet_window_t_ParamLimits

0xfea6,	// (0x00036422) popup_discreet_window_t

0x27d7,	// (0x00028d53) popup_sk_window_g1

0x27e1,	// (0x00028d5d) popup_sk_window_g2

0x0001,

0xfead,	// (0x00036429) popup_sk_window_g

0x27eb,	// (0x00028d67) popup_sk_window_t1

0x27fb,	// (0x00028d77) popup_sk_window_t1_copy1

0x7a96,	// (0x0002e012) cell_ai5_widget_pane_g2_ParamLimits

0x7bef,	// (0x0002e16b) cell_ai5_widget_pane_t9_ParamLimits

0x7bef,	// (0x0002e16b) cell_ai5_widget_pane_t9

0x9912,	// (0x0002fe8e) main_fep_fshwr2_pane

0xc8b1,	// (0x00032e2d) aid_fshwr2_btn_pane

0xc8c2,	// (0x00032e3e) aid_fshwr2_syb_pane

0xc8d3,	// (0x00032e4f) aid_fshwr2_txt_pane

0xc8df,	// (0x00032e5b) fshwr2_func_candi_pane

0xc900,	// (0x00032e7c) fshwr2_hwr_syb_pane

0xc91d,	// (0x00032e99) fshwr2_icf_pane

0x9912,	// (0x0002fe8e) fshwr2_icf_bg_pane

0x287d,	// (0x00028df9) fshwr2_icf_pane_t1_ParamLimits

0x287d,	// (0x00028df9) fshwr2_icf_pane_t1

0xcf8d,	// (0x00033509) fshwr2_func_candi_pane_g1

0xe53d,	// (0x00034ab9) fshwr2_func_candi_row_pane_ParamLimits

0xe53d,	// (0x00034ab9) fshwr2_func_candi_row_pane

0xc949,	// (0x00032ec5) cell_fshwr2_syb_pane_ParamLimits

0xc949,	// (0x00032ec5) cell_fshwr2_syb_pane

0x5144,	// (0x0002b6c0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x5144,	// (0x0002b6c0) fshwr2_hwr_syb_pane_g1

0x9912,	// (0x0002fe8e) bg_popup_call_pane_cp01

0xc95f,	// (0x00032edb) fshwr2_func_candi_cell_pane_ParamLimits

0xc95f,	// (0x00032edb) fshwr2_func_candi_cell_pane

0xe54d,	// (0x00034ac9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe54d,	// (0x00034ac9) fshwr2_func_candi_cell_bg_pane

0xc98f,	// (0x00032f0b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc98f,	// (0x00032f0b) fshwr2_func_candi_cell_pane_g1

0xc9be,	// (0x00032f3a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc9be,	// (0x00032f3a) fshwr2_func_candi_cell_pane_t1

0x9912,	// (0x0002fe8e) bg_button_pane_cp08

0x7f10,	// (0x0002e48c) cell_fshwr2_syb_bg_pane

0xc9d1,	// (0x00032f4d) cell_fshwr2_syb_bg_pane_g1

0xc9d9,	// (0x00032f55) cell_fshwr2_syb_bg_pane_t1

0xcaab,	// (0x00033027) main_tmo_pane

0xbb2c,	// (0x000320a8) uni_indicator_pane_g1_ParamLimits

0xbb42,	// (0x000320be) uni_indicator_pane_g2_ParamLimits

0xbb58,	// (0x000320d4) uni_indicator_pane_g3_ParamLimits

0xbb6d,	// (0x000320e9) uni_indicator_pane_g4_ParamLimits

0xbb6d,	// (0x000320e9) uni_indicator_pane_g4

0x3a4e,	// (0x00029fca) uni_indicator_pane_g5_ParamLimits

0x3a4e,	// (0x00029fca) uni_indicator_pane_g5

0x3a4e,	// (0x00029fca) uni_indicator_pane_g6_ParamLimits

0x3a4e,	// (0x00029fca) uni_indicator_pane_g6

0xf91c,	// (0x00035e98) uni_indicator_pane_g_ParamLimits

0xd589,	// (0x00033b05) popup_tmo_note_window_ParamLimits

0xd589,	// (0x00033b05) popup_tmo_note_window

0xcaab,	// (0x00033027) fshwr2_bg_pane

0xc9af,	// (0x00032f2b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc9af,	// (0x00032f2b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb2,	// (0x0003642e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb2,	// (0x0003642e) fshwr2_func_candi_cell_pane_g

0x4ec9,	// (0x0002b445) bg_popup_window_pane_cp01

0x2929,	// (0x00028ea5) bg_popup_window_pane_g1_cp01

0x7f18,	// (0x0002e494) bg_popup_window_pane_cp22_ParamLimits

0x7f18,	// (0x0002e494) bg_popup_window_pane_cp22

0x7f26,	// (0x0002e4a2) listscroll_tmo_link_pane_ParamLimits

0x7f26,	// (0x0002e4a2) listscroll_tmo_link_pane

0x7f66,	// (0x0002e4e2) popup_tmo_note_window_g1_ParamLimits

0x7f66,	// (0x0002e4e2) popup_tmo_note_window_g1

0x7f73,	// (0x0002e4ef) tmo_note_info_pane_ParamLimits

0x7f73,	// (0x0002e4ef) tmo_note_info_pane

0xe559,	// (0x00034ad5) list_tmo_note_info_pane_g1_ParamLimits

0xe559,	// (0x00034ad5) list_tmo_note_info_pane_g1

0x7fa4,	// (0x0002e520) list_tmo_note_info_pane_g2_ParamLimits

0x7fa4,	// (0x0002e520) list_tmo_note_info_pane_g2

0x0001,

0xfeb7,	// (0x00036433) list_tmo_note_info_pane_g_ParamLimits

0xfeb7,	// (0x00036433) list_tmo_note_info_pane_g

0x7fc0,	// (0x0002e53c) list_tmo_note_info_text_pane_ParamLimits

0x7fc0,	// (0x0002e53c) list_tmo_note_info_text_pane

0x8045,	// (0x0002e5c1) list_tmo_link_pane

0x8052,	// (0x0002e5ce) scroll_pane_cp20

0x805f,	// (0x0002e5db) list_single_tmo_link_pane_ParamLimits

0x805f,	// (0x0002e5db) list_single_tmo_link_pane

0x806f,	// (0x0002e5eb) list_single_tmo_link_pane_t1

0x807d,	// (0x0002e5f9) list_tmo_note_info_text_pane_t1_ParamLimits

0x807d,	// (0x0002e5f9) list_tmo_note_info_text_pane_t1

0xa508,	// (0x00030a84) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa508,	// (0x00030a84) aid_size_touch_scroll_bar_cp01

0x9521,	// (0x0002fa9d) aid_size_touch_slider_marker

0x9a50,	// (0x0002ffcc) popup_settings_window_ParamLimits

0x9a50,	// (0x0002ffcc) popup_settings_window

0xe9bf,	// (0x00034f3b) popup_candi_list_indi_window

0x0fae,	// (0x0002752a) aid_touch_navi_pane_ParamLimits

0x1fd6,	// (0x00028552) rs_clock_indi_pane

0x1fdf,	// (0x0002855b) sctrl_sk_bottom_pane_ParamLimits

0x1ff0,	// (0x0002856c) sctrl_sk_top_pane_ParamLimits

0x20d9,	// (0x00028655) popup_fep_tooltip_window

0x7a14,	// (0x0002df90) aid_size_cell_widget_grid_ParamLimits

0x7a81,	// (0x0002dffd) cell_ai5_widget_pane_g1_ParamLimits

0x7a81,	// (0x0002dffd) cell_ai5_widget_pane_g1

0xe466,	// (0x000349e2) cell_ai5_widget_pane_g6_ParamLimits

0xe472,	// (0x000349ee) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe35,	// (0x000363b1) cell_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x000363b1) cell_ai5_widget_pane_g

0x7c13,	// (0x0002e18f) cell_ai5_widget_pane_t10_ParamLimits

0x7c13,	// (0x0002e18f) cell_ai5_widget_pane_t10

0x7c31,	// (0x0002e1ad) grid_ai5_widget_pane_ParamLimits

0x7ccf,	// (0x0002e24b) cell_contacts_ai5_widget_pane_ParamLimits

0x7ccf,	// (0x0002e24b) cell_contacts_ai5_widget_pane

0x7eb7,	// (0x0002e433) popup_discreet_window_t3_ParamLimits

0x7eb7,	// (0x0002e433) popup_discreet_window_t3

0xc935,	// (0x00032eb1) popup_fshwr2_char_preview_window_ParamLimits

0xc935,	// (0x00032eb1) popup_fshwr2_char_preview_window

0xe570,	// (0x00034aec) tmo_note_info_pane_t1

0xe585,	// (0x00034b01) tmo_note_info_pane_t2

0xe59e,	// (0x00034b1a) tmo_note_info_pane_t3

0x8021,	// (0x0002e59d) tmo_note_info_pane_t4

0x8033,	// (0x0002e5af) tmo_note_info_pane_t5

0x0004,

0xfebc,	// (0x00036438) tmo_note_info_pane_t

0x8045,	// (0x0002e5c1) list_tmo_link_pane_ParamLimits

0x8052,	// (0x0002e5ce) scroll_pane_cp20_ParamLimits

0x9912,	// (0x0002fe8e) bg_popup_fep_char_preview_window_cp01

0x8096,	// (0x0002e612) popup_fshwr2_char_preview_window_t1

0x80a4,	// (0x0002e620) popup_candi_list_indi_window_g1

0x80ad,	// (0x0002e629) bg_cell_contacts_ai5_widget_pane

0x80b9,	// (0x0002e635) cell_contacts_ai5_widget_pane_g1

0x80ce,	// (0x0002e64a) cell_contacts_ai5_widget_pane_g2

0x80da,	// (0x0002e656) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec7,	// (0x00036443) cell_contacts_ai5_widget_pane_g

0x80e6,	// (0x0002e662) cell_contacts_ai5_widget_pane_t1

0xcaab,	// (0x00033027) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe618,	// (0x00034b94) settings_container_pane

0x03c4,	// (0x00026940) listscroll_set_pane_copy1

0x45ea,	// (0x0002ab66) scroll_pane_cp121_copy1

0x8169,	// (0x0002e6e5) set_content_pane_copy1

0xe624,	// (0x00034ba0) aid_height_set_list_copy1_ParamLimits

0xe624,	// (0x00034ba0) aid_height_set_list_copy1

0x3c4e,	// (0x0002a1ca) aid_size_parent_copy1_ParamLimits

0x3c4e,	// (0x0002a1ca) aid_size_parent_copy1

0xe630,	// (0x00034bac) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe630,	// (0x00034bac) button_value_adjust_pane_cp6_copy1

0x0935,	// (0x00026eb1) list_highlight_pane_cp2_copy1_ParamLimits

0x0935,	// (0x00026eb1) list_highlight_pane_cp2_copy1

0xe644,	// (0x00034bc0) list_set_pane_copy1_ParamLimits

0xe644,	// (0x00034bc0) list_set_pane_copy1

0xe5b3,	// (0x00034b2f) main_pane_set_t1_copy1_ParamLimits

0xe5b3,	// (0x00034b2f) main_pane_set_t1_copy1

0xe5ed,	// (0x00034b69) main_pane_set_t2_copy1_ParamLimits

0xe5ed,	// (0x00034b69) main_pane_set_t2_copy1

0xe70b,	// (0x00034c87) main_pane_set_t3_copy1

0xe719,	// (0x00034c95) main_pane_set_t4_copy1

0xe60c,	// (0x00034b88) set_content_pane_g1_copy1_ParamLimits

0xe60c,	// (0x00034b88) set_content_pane_g1_copy1

0xe727,	// (0x00034ca3) setting_code_pane_copy1

0x827c,	// (0x0002e7f8) setting_slider_graphic_pane_copy1

0x827c,	// (0x0002e7f8) setting_slider_pane_copy1

0x827c,	// (0x0002e7f8) setting_text_pane_copy1

0x827c,	// (0x0002e7f8) setting_volume_pane_copy1

0xe727,	// (0x00034ca3) settings_code_pane_cp2_copy1

0xe72f,	// (0x00034cab) settings_code_pane_cp_copy1_ParamLimits

0xe72f,	// (0x00034cab) settings_code_pane_cp_copy1

0xc9e8,	// (0x00032f64) volume_set_pane_copy1

0xe743,	// (0x00034cbf) volume_set_pane_g10_copy1

0xe74f,	// (0x00034ccb) volume_set_pane_g1_copy1

0xe759,	// (0x00034cd5) volume_set_pane_g2_copy1

0xe763,	// (0x00034cdf) volume_set_pane_g3_copy1

0xe76d,	// (0x00034ce9) volume_set_pane_g4_copy1

0xe777,	// (0x00034cf3) volume_set_pane_g5_copy1

0xe781,	// (0x00034cfd) volume_set_pane_g6_copy1

0xe78b,	// (0x00034d07) volume_set_pane_g7_copy1

0xe795,	// (0x00034d11) volume_set_pane_g8_copy1

0xe79f,	// (0x00034d1b) volume_set_pane_g9_copy1

0x9c8d,	// (0x00030209) bg_set_opt_pane_cp_copy1_ParamLimits

0x9c8d,	// (0x00030209) bg_set_opt_pane_cp_copy1

0x293e,	// (0x00028eba) setting_slider_pane_t1_copy1_ParamLimits

0x293e,	// (0x00028eba) setting_slider_pane_t1_copy1

0xc9f4,	// (0x00032f70) setting_slider_pane_t2_copy1_ParamLimits

0xc9f4,	// (0x00032f70) setting_slider_pane_t2_copy1

0xca0e,	// (0x00032f8a) setting_slider_pane_t3_copy1_ParamLimits

0xca0e,	// (0x00032f8a) setting_slider_pane_t3_copy1

0xca26,	// (0x00032fa2) slider_set_pane_copy1_ParamLimits

0xca26,	// (0x00032fa2) slider_set_pane_copy1

0xcb06,	// (0x00033082) set_opt_bg_pane_g1_copy2

0xcb0e,	// (0x0003308a) set_opt_bg_pane_g2_copy2

0x82fe,	// (0x0002e87a) set_opt_bg_pane_g3_copy2

0xcb1e,	// (0x0003309a) set_opt_bg_pane_g4_copy2

0xcb26,	// (0x000330a2) set_opt_bg_pane_g5_copy2

0xcb2e,	// (0x000330aa) set_opt_bg_pane_g6_copy2

0xe7a9,	// (0x00034d25) set_opt_bg_pane_g7_copy2

0x8312,	// (0x0002e88e) set_opt_bg_pane_g8_copy2

0x831c,	// (0x0002e898) set_opt_bg_pane_g9_copy2

0x29a4,	// (0x00028f20) aid_size_touch_slider_mark_copy1_ParamLimits

0x29a4,	// (0x00028f20) aid_size_touch_slider_mark_copy1

0x8326,	// (0x0002e8a2) slider_set_pane_g1_copy1

0x29b8,	// (0x00028f34) slider_set_pane_g2_copy1

0x1aab,	// (0x00028027) slider_set_pane_g3_copy1_ParamLimits

0x1aab,	// (0x00028027) slider_set_pane_g3_copy1

0x1abf,	// (0x0002803b) slider_set_pane_g4_copy1_ParamLimits

0x1abf,	// (0x0002803b) slider_set_pane_g4_copy1

0x1ad7,	// (0x00028053) slider_set_pane_g5_copy1_ParamLimits

0x1ad7,	// (0x00028053) slider_set_pane_g5_copy1

0x1aab,	// (0x00028027) slider_set_pane_g6_copy1_ParamLimits

0x1aab,	// (0x00028027) slider_set_pane_g6_copy1

0xca3c,	// (0x00032fb8) slider_set_pane_g7_copy1_ParamLimits

0xca3c,	// (0x00032fb8) slider_set_pane_g7_copy1

0x9a0c,	// (0x0002ff88) bg_set_opt_pane_cp2_copy1

0x832f,	// (0x0002e8ab) setting_slider_graphic_pane_g1_copy1

0xe7b3,	// (0x00034d2f) setting_slider_graphic_pane_t1_copy1

0xe7c3,	// (0x00034d3f) setting_slider_graphic_pane_t2_copy1

0xe7d3,	// (0x00034d4f) slider_set_pane_cp_copy1

0x8368,	// (0x0002e8e4) input_focus_pane_cp1_copy1

0x8371,	// (0x0002e8ed) list_set_text_pane_copy1

0x8379,	// (0x0002e8f5) setting_text_pane_g1_copy1

0xf2f9,	// (0x00035875) set_text_pane_t1_copy1

0x8368,	// (0x0002e8e4) input_focus_pane_cp2_copy1

0x8379,	// (0x0002e8f5) setting_code_pane_g1_copy1

0xe7db,	// (0x00034d57) setting_code_pane_t1_copy1

0xe7e9,	// (0x00034d65) list_set_graphic_pane_copy1

0x9a0c,	// (0x0002ff88) bg_set_opt_pane_cp4_copy1

0xa7c5,	// (0x00030d41) list_set_graphic_pane_g1_copy1_ParamLimits

0xa7c5,	// (0x00030d41) list_set_graphic_pane_g1_copy1

0xe7fb,	// (0x00034d77) list_set_graphic_pane_g2_copy1

0xa7dd,	// (0x00030d59) list_set_graphic_pane_t1_copy1_ParamLimits

0xa7dd,	// (0x00030d59) list_set_graphic_pane_t1_copy1

0x4ec9,	// (0x0002b445) rs_clock_indi_pane_g1

0x83aa,	// (0x0002e926) rs_clock_indi_pane_t1

0x83b8,	// (0x0002e934) rs_indi_pane

0x83c0,	// (0x0002e93c) rs_indi_pane_g1

0x83c9,	// (0x0002e945) rs_indi_pane_g2

0x83d2,	// (0x0002e94e) rs_indi_pane_g3

0x0002,

0xfece,	// (0x0003644a) rs_indi_pane_g

0x03c4,	// (0x00026940) bg_popup_preview_window_pane_cp03

0x83db,	// (0x0002e957) popup_fep_tooltip_window_t1

0x5b80,	// (0x0002c0fc) popup_note2_window_g2_ParamLimits

0x5b80,	// (0x0002c0fc) popup_note2_window_g2

0x0001,

0xfc67,	// (0x000361e3) popup_note2_window_g_ParamLimits

0xfc67,	// (0x000361e3) popup_note2_window_g

0x6088,	// (0x0002c604) bg_popup_sub_pane_cp11_ParamLimits

0x6095,	// (0x0002c611) cell_ai3_links_pane_g1_ParamLimits

0x60ac,	// (0x0002c628) cell_ai3_links_pane_t1

0xf2f9,	// (0x00035875) set_text_pane_t1_copy1_ParamLimits

0xa85c,	// (0x00030dd8) cell_graphic_popup_pane_cp2_ParamLimits

0xa85c,	// (0x00030dd8) cell_graphic_popup_pane_cp2

0xe803,	// (0x00034d7f) cell_graphic_popup_pane_g1_cp2

0xa2ac,	// (0x00030828) cell_graphic_popup_pane_g2_cp2

0x83f1,	// (0x0002e96d) cell_graphic_popup_pane_g3_cp2

0x83f9,	// (0x0002e975) cell_graphic_popup_pane_t2_cp2

0xa2bd,	// (0x00030839) grid_highlight_pane_cp3_cp2

0xcdaf,	// (0x0003332b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xcaab,	// (0x00033027) main_tmo_pane_ParamLimits

0xd57d,	// (0x00033af9) popup_tmo_big_image_note_window

0x7a70,	// (0x0002dfec) cell_ai5_widget_list_pane

0x7a78,	// (0x0002dff4) cell_ai5_widget_lrg_icon_pane

0xe570,	// (0x00034aec) tmo_note_info_pane_t1_ParamLimits

0xe585,	// (0x00034b01) tmo_note_info_pane_t2_ParamLimits

0xe59e,	// (0x00034b1a) tmo_note_info_pane_t3_ParamLimits

0x8021,	// (0x0002e59d) tmo_note_info_pane_t4_ParamLimits

0x8033,	// (0x0002e5af) tmo_note_info_pane_t5_ParamLimits

0xfebc,	// (0x00036438) tmo_note_info_pane_t_ParamLimits

0xe618,	// (0x00034b94) settings_container_pane_ParamLimits

0x8360,	// (0x0002e8dc) indicator_popup_pane_cp5

0x8360,	// (0x0002e8dc) indicator_popup_pane_cp6

0xe7e9,	// (0x00034d65) list_set_graphic_pane_copy1_ParamLimits

0x9912,	// (0x0002fe8e) bg_popup_window_pane_cp23

0x8407,	// (0x0002e983) popup_tmo_big_image_note_window_g1

0x8413,	// (0x0002e98f) popup_tmo_big_image_note_window_t1

0x8423,	// (0x0002e99f) popup_tmo_big_image_note_window_t2

0x8433,	// (0x0002e9af) popup_tmo_big_image_note_window_t3

0x0002,

0xfed5,	// (0x00036451) popup_tmo_big_image_note_window_t

0x4ec9,	// (0x0002b445) cell_ai5_widget_lrg_icon_pane_g1

0x8443,	// (0x0002e9bf) cell_ai5_widget_lrg_icon_pane_t1

0x8451,	// (0x0002e9cd) cell_ai5_widget_list_row_pane_ParamLimits

0x8451,	// (0x0002e9cd) cell_ai5_widget_list_row_pane

0x8469,	// (0x0002e9e5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8469,	// (0x0002e9e5) cell_ai5_widget_list_row_pane_g1

0x8476,	// (0x0002e9f2) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8476,	// (0x0002e9f2) cell_ai5_widget_list_row_pane_t1

0x84a1,	// (0x0002ea1d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x84a1,	// (0x0002ea1d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedc,	// (0x00036458) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedc,	// (0x00036458) cell_ai5_widget_list_row_pane_t

0x9912,	// (0x0002fe8e) main_fep_vtchi_ss_pane

0x29f2,	// (0x00028f6e) popup_fep_char_pre_window

0x29fa,	// (0x00028f76) popup_fep_ituss_window

0x2a1b,	// (0x00028f97) popup_fep_vkbss_window

0x84c9,	// (0x0002ea45) grid_vkbss_keypad_pane_ParamLimits

0x84c9,	// (0x0002ea45) grid_vkbss_keypad_pane

0x84d9,	// (0x0002ea55) ituss_keypad_pane

0x2a49,	// (0x00028fc5) aid_vkbss_key_offset_ParamLimits

0x2a49,	// (0x00028fc5) aid_vkbss_key_offset

0x2a55,	// (0x00028fd1) cell_vkbss_key_pane_ParamLimits

0x2a55,	// (0x00028fd1) cell_vkbss_key_pane

0x84e8,	// (0x0002ea64) bg_cell_vkbss_key_g1_ParamLimits

0x84e8,	// (0x0002ea64) bg_cell_vkbss_key_g1

0x84f4,	// (0x0002ea70) cell_vkbss_key_3p_pane_ParamLimits

0x84f4,	// (0x0002ea70) cell_vkbss_key_3p_pane

0x850e,	// (0x0002ea8a) cell_vkbss_key_g1_ParamLimits

0x850e,	// (0x0002ea8a) cell_vkbss_key_g1

0x8528,	// (0x0002eaa4) cell_vkbss_key_t1_ParamLimits

0x8528,	// (0x0002eaa4) cell_vkbss_key_t1

0x2a6b,	// (0x00028fe7) cell_ituss_key_pane_ParamLimits

0x2a6b,	// (0x00028fe7) cell_ituss_key_pane

0x8553,	// (0x0002eacf) bg_cell_ituss_key_g1_ParamLimits

0x8553,	// (0x0002eacf) bg_cell_ituss_key_g1

0x855f,	// (0x0002eadb) cell_ituss_key_pane_g1_ParamLimits

0x855f,	// (0x0002eadb) cell_ituss_key_pane_g1

0x2a7c,	// (0x00028ff8) cell_ituss_key_pane_g2_ParamLimits

0x2a7c,	// (0x00028ff8) cell_ituss_key_pane_g2

0x0002,

0xfee3,	// (0x0003645f) cell_ituss_key_pane_g_ParamLimits

0xfee3,	// (0x0003645f) cell_ituss_key_pane_g

0x2aa8,	// (0x00029024) cell_ituss_key_t1_ParamLimits

0x2aa8,	// (0x00029024) cell_ituss_key_t1

0x2ae2,	// (0x0002905e) cell_ituss_key_t2_ParamLimits

0x2ae2,	// (0x0002905e) cell_ituss_key_t2

0x2b13,	// (0x0002908f) cell_ituss_key_t3_ParamLimits

0x2b13,	// (0x0002908f) cell_ituss_key_t3

0x2ae2,	// (0x0002905e) cell_ituss_key_t4_ParamLimits

0x2ae2,	// (0x0002905e) cell_ituss_key_t4

0x0004,

0xfeea,	// (0x00036466) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x00036466) cell_ituss_key_t

0x8585,	// (0x0002eb01) cell_vkbss_key_3p_pane_g1

0x858d,	// (0x0002eb09) cell_vkbss_key_3p_pane_g2

0x8595,	// (0x0002eb11) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x00036471) cell_vkbss_key_3p_pane_g

0x9912,	// (0x0002fe8e) bg_popup_fep_char_preview_window_cp02

0x2b56,	// (0x000290d2) popup_fep_char_pre_window_t1

0xe45c,	// (0x000349d8) main_ai5_sk_pane

0x80ad,	// (0x0002e629) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x80b9,	// (0x0002e635) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x80ce,	// (0x0002e64a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x80da,	// (0x0002e656) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec7,	// (0x00036443) cell_contacts_ai5_widget_pane_g_ParamLimits

0x80e6,	// (0x0002e662) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xcaab,	// (0x00033027) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe80b,	// (0x00034d87) main_ai5_sk_pane_g1

0x2d0d,	// (0x00029289) popup_query_code_window_g1

0x2a10,	// (0x00028f8c) popup_fep_vkb_icf_pane

0x2a26,	// (0x00028fa2) popup_fep_vtchi_icf_pane

0x85a6,	// (0x0002eb22) bg_icf_pane

0x85b2,	// (0x0002eb2e) list_vkb_icf_pane

0x85be,	// (0x0002eb3a) bg_icf_pane_cp01

0x85ca,	// (0x0002eb46) vtchi_icf_list_pane

0x85db,	// (0x0002eb57) list_vkb_icf_pane_t1_ParamLimits

0x85db,	// (0x0002eb57) list_vkb_icf_pane_t1

0x85f1,	// (0x0002eb6d) vtchi_icf_list_pane_t1_ParamLimits

0x85f1,	// (0x0002eb6d) vtchi_icf_list_pane_t1

0x29fa,	// (0x00028f76) popup_fep_ituss_window_ParamLimits

0x2a26,	// (0x00028fa2) popup_fep_vtchi_icf_pane_ParamLimits

0x84d9,	// (0x0002ea55) ituss_keypad_pane_ParamLimits

0x2a3d,	// (0x00028fb9) ituss_sks_pane

0x85a6,	// (0x0002eb22) bg_icf_pane_ParamLimits

0x29d6,	// (0x00028f52) icf_edit_indi_pane_ParamLimits

0x29d6,	// (0x00028f52) icf_edit_indi_pane

0x85b2,	// (0x0002eb2e) list_vkb_icf_pane_ParamLimits

0x85be,	// (0x0002eb3a) bg_icf_pane_cp01_ParamLimits

0x29e5,	// (0x00028f61) icf_edit_indi_pane_cp01_ParamLimits

0x29e5,	// (0x00028f61) icf_edit_indi_pane_cp01

0x85d2,	// (0x0002eb4e) vtchi_query_pane

0x5144,	// (0x0002b6c0) icf_edit_indi_pane_g1_ParamLimits

0x5144,	// (0x0002b6c0) icf_edit_indi_pane_g1

0x2b78,	// (0x000290f4) icf_edit_indi_pane_g2_ParamLimits

0x2b78,	// (0x000290f4) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x00036489) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x00036489) icf_edit_indi_pane_g

0x2b87,	// (0x00029103) icf_edit_indi_pane_t1

0x8609,	// (0x0002eb85) bg_input_focus_pane_cp042

0xa490,	// (0x00030a0c) vtchi_button_pane

0x8612,	// (0x0002eb8e) vtchi_query_pane_t1

0x8620,	// (0x0002eb9c) vtchi_query_pane_t2

0x862e,	// (0x0002ebaa) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x00036478) vtchi_query_pane_t

0x9912,	// (0x0002fe8e) bg_button_pane_cp13

0x863c,	// (0x0002ebb8) vtchi_button_pane_g1

0x2b65,	// (0x000290e1) ituss_sks_pane_g1

0x2b70,	// (0x000290ec) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x0003647f) ituss_sks_pane_g

0x8644,	// (0x0002ebc0) ituss_sks_pane_t1

0x8652,	// (0x0002ebce) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x00036484) ituss_sks_pane_t

0x4979,	// (0x0002aef5) indicator_nsta_pane_cp_g1

0x4982,	// (0x0002aefe) indicator_nsta_pane_cp_g2

0x498a,	// (0x0002af06) indicator_nsta_pane_cp_g3

0x4992,	// (0x0002af0e) indicator_nsta_pane_cp_g4

0x499a,	// (0x0002af16) indicator_nsta_pane_cp_g5

0x49a2,	// (0x0002af1e) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x0003602d) indicator_nsta_pane_cp_g

0xdf7f,	// (0x000344fb) cell_graphic2_pane_t2_ParamLimits

0xdf7f,	// (0x000344fb) cell_graphic2_pane_t2

0x0001,

0xfdbe,	// (0x0003633a) cell_graphic2_pane_t_ParamLimits

0xfdbe,	// (0x0003633a) cell_graphic2_pane_t

0xdfb5,	// (0x00034531) cell_graphic2_control_pane_t1

0xa751,	// (0x00030ccd) signal_pane_g3_ParamLimits

0xa751,	// (0x00030ccd) signal_pane_g3

0xa765,	// (0x00030ce1) signal_pane_g4_ParamLimits

0xa765,	// (0x00030ce1) signal_pane_g4

0x84b3,	// (0x0002ea2f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x84b3,	// (0x0002ea2f) cell_ai5_widget_list_row_pane_t3

0x8573,	// (0x0002eaef) cell_ituss_key_pane_t1_ParamLimits

0x8573,	// (0x0002eaef) cell_ituss_key_pane_t1

0x16b0,	// (0x00027c2c) form_field_data_wide_pane_vc_t2_ParamLimits

0x16b0,	// (0x00027c2c) form_field_data_wide_pane_vc_t2

0x16c4,	// (0x00027c40) form_field_data_wide_pane_vc_t3_ParamLimits

0x16c4,	// (0x00027c40) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00035d80) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00035d80) form_field_data_wide_pane_vc_t

0x462a,	// (0x0002aba6) form_field_slider_wide_pane_vc_t3_ParamLimits

0x462a,	// (0x0002aba6) form_field_slider_wide_pane_vc_t3

0x4700,	// (0x0002ac7c) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4700,	// (0x0002ac7c) form_field_popup_wide_pane_vc_t2

0x4717,	// (0x0002ac93) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4717,	// (0x0002ac93) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x0003601c) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x0003601c) form_field_popup_wide_pane_vc_t

0xc8b1,	// (0x00032e2d) aid_fshwr2_btn_pane_ParamLimits

0xc8c2,	// (0x00032e3e) aid_fshwr2_syb_pane_ParamLimits

0xc8d3,	// (0x00032e4f) aid_fshwr2_txt_pane_ParamLimits

0xcaab,	// (0x00033027) fshwr2_bg_pane_ParamLimits

0xc8df,	// (0x00032e5b) fshwr2_func_candi_pane_ParamLimits

0xc900,	// (0x00032e7c) fshwr2_hwr_syb_pane_ParamLimits

0xc91d,	// (0x00032e99) fshwr2_icf_pane_ParamLimits

0xedc2,	// (0x0003533e) list_double_graphic_pane_vc_g4_ParamLimits

0xedc2,	// (0x0003533e) list_double_graphic_pane_vc_g4

0x2a9c,	// (0x00029018) cell_ituss_key_pane_g3_ParamLimits

0x2a9c,	// (0x00029018) cell_ituss_key_pane_g3

0x2b44,	// (0x000290c0) cell_ituss_key_t5_ParamLimits

0x2b44,	// (0x000290c0) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small

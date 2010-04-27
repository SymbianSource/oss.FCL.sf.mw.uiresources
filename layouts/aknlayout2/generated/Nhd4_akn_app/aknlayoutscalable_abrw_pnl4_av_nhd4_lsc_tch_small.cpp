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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002efca };

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
0xd000,	// (0x0003bfca) Screen

0xd00c,	// (0x0003bfd6) application_window_ParamLimits

0xd00c,	// (0x0003bfd6) application_window

0x2db0,	// (0x00031d7a) screen_g1

0xb66d,	// (0x0003a637) area_bottom_pane_ParamLimits

0xb66d,	// (0x0003a637) area_bottom_pane

0x0197,	// (0x0002f161) area_top_pane_ParamLimits

0x0197,	// (0x0002f161) area_top_pane

0x0235,	// (0x0002f1ff) main_pane_ParamLimits

0x0235,	// (0x0002f1ff) main_pane

0x2dba,	// (0x00031d84) misc_graphics

0xd7bc,	// (0x0003c786) battery_pane_ParamLimits

0xd7bc,	// (0x0003c786) battery_pane

0x5c70,	// (0x00034c3a) bg_status_flat_pane_g8

0x5c78,	// (0x00034c42) bg_status_flat_pane_g9

0x505f,	// (0x00034029) context_pane_ParamLimits

0x505f,	// (0x00034029) context_pane

0xd927,	// (0x0003c8f1) navi_pane_ParamLimits

0xd927,	// (0x0003c8f1) navi_pane

0xd9a5,	// (0x0003c96f) signal_pane_ParamLimits

0xd9a5,	// (0x0003c96f) signal_pane

0x0008,

0xf874,	// (0x0003e83e) bg_status_flat_pane_g

0xda35,	// (0x0003c9ff) status_pane_g1_ParamLimits

0xda35,	// (0x0003c9ff) status_pane_g1

0xda4b,	// (0x0003ca15) status_pane_g2_ParamLimits

0xda4b,	// (0x0003ca15) status_pane_g2

0x527e,	// (0x00034248) status_pane_g3_ParamLimits

0x527e,	// (0x00034248) status_pane_g3

0x0004,

0xf7a0,	// (0x0003e76a) status_pane_g_ParamLimits

0xf7a0,	// (0x0003e76a) status_pane_g

0xda57,	// (0x0003ca21) title_pane_ParamLimits

0xda57,	// (0x0003ca21) title_pane

0xdaba,	// (0x0003ca84) uni_indicator_pane_ParamLimits

0xdaba,	// (0x0003ca84) uni_indicator_pane

0x4ec5,	// (0x00033e8f) bg_list_pane_ParamLimits

0x4ec5,	// (0x00033e8f) bg_list_pane

0xd72f,	// (0x0003c6f9) find_pane

0xbf6a,	// (0x0003af34) listscroll_app_pane_ParamLimits

0xbf6a,	// (0x0003af34) listscroll_app_pane

0x4ef1,	// (0x00033ebb) listscroll_form_pane

0xbf7a,	// (0x0003af44) listscroll_gen_pane_ParamLimits

0xbf7a,	// (0x0003af44) listscroll_gen_pane

0x126a,	// (0x00030234) listscroll_set_pane

0x67ec,	// (0x000357b6) main_idle_act_pane

0x4bd1,	// (0x00033b9b) main_idle_trad_pane

0x4bd1,	// (0x00033b9b) main_list_empty_pane

0x4f0b,	// (0x00033ed5) main_midp_pane

0x4f17,	// (0x00033ee1) main_pane_g1_ParamLimits

0x4f17,	// (0x00033ee1) main_pane_g1

0xbf8e,	// (0x0003af58) popup_ai_message_window_ParamLimits

0xbf8e,	// (0x0003af58) popup_ai_message_window

0xc01f,	// (0x0003afe9) popup_fep_china_uni_window_ParamLimits

0xc01f,	// (0x0003afe9) popup_fep_china_uni_window

0x1386,	// (0x00030350) popup_fep_japan_candidate_window_ParamLimits

0x1386,	// (0x00030350) popup_fep_japan_candidate_window

0x13a4,	// (0x0003036e) popup_fep_japan_predictive_window_ParamLimits

0x13a4,	// (0x0003036e) popup_fep_japan_predictive_window

0xc079,	// (0x0003b043) popup_find_window

0xc096,	// (0x0003b060) popup_grid_graphic_window_ParamLimits

0xc096,	// (0x0003b060) popup_grid_graphic_window

0x1409,	// (0x000303d3) popup_large_graphic_colour_window

0xc12e,	// (0x0003b0f8) popup_menu_window_ParamLimits

0xc12e,	// (0x0003b0f8) popup_menu_window

0xc2fa,	// (0x0003b2c4) popup_note_image_window

0xc2c0,	// (0x0003b28a) popup_note_wait_window_ParamLimits

0xc2c0,	// (0x0003b28a) popup_note_wait_window

0xc312,	// (0x0003b2dc) popup_note_window_ParamLimits

0xc312,	// (0x0003b2dc) popup_note_window

0xc3b8,	// (0x0003b382) popup_query_code_window_ParamLimits

0xc3b8,	// (0x0003b382) popup_query_code_window

0x1653,	// (0x0003061d) popup_query_data_code_window_ParamLimits

0x1653,	// (0x0003061d) popup_query_data_code_window

0xc3f2,	// (0x0003b3bc) popup_query_data_window_ParamLimits

0xc3f2,	// (0x0003b3bc) popup_query_data_window

0xc46e,	// (0x0003b438) popup_query_sat_info_window_ParamLimits

0xc46e,	// (0x0003b438) popup_query_sat_info_window

0xc505,	// (0x0003b4cf) popup_snote_single_graphic_window_ParamLimits

0xc505,	// (0x0003b4cf) popup_snote_single_graphic_window

0xc505,	// (0x0003b4cf) popup_snote_single_text_window_ParamLimits

0xc505,	// (0x0003b4cf) popup_snote_single_text_window

0x16d6,	// (0x000306a0) popup_sub_window_general

0x1804,	// (0x000307ce) popup_window_general_ParamLimits

0x1804,	// (0x000307ce) popup_window_general

0x4f25,	// (0x00033eef) power_save_pane

0xbdf9,	// (0x0003adc3) control_pane_g1_ParamLimits

0xbdf9,	// (0x0003adc3) control_pane_g1

0xbe22,	// (0x0003adec) control_pane_g2_ParamLimits

0xbe22,	// (0x0003adec) control_pane_g2

0x4e88,	// (0x00033e52) control_pane_g3_ParamLimits

0x4e88,	// (0x00033e52) control_pane_g3

0x0007,

0xf788,	// (0x0003e752) control_pane_g_ParamLimits

0xf788,	// (0x0003e752) control_pane_g

0xbe63,	// (0x0003ae2d) control_pane_t1_ParamLimits

0xbe63,	// (0x0003ae2d) control_pane_t1

0xbec1,	// (0x0003ae8b) control_pane_t2_ParamLimits

0xbec1,	// (0x0003ae8b) control_pane_t2

0x0002,

0xf799,	// (0x0003e763) control_pane_t_ParamLimits

0xf799,	// (0x0003e763) control_pane_t

0xd661,	// (0x0003c62b) navi_navi_volume_pane_cp1

0xd669,	// (0x0003c633) status_small_icon_pane

0x4dbd,	// (0x00033d87) status_small_pane_g1_ParamLimits

0x4dbd,	// (0x00033d87) status_small_pane_g1

0xd671,	// (0x0003c63b) status_small_pane_g2_ParamLimits

0xd671,	// (0x0003c63b) status_small_pane_g2

0xd67d,	// (0x0003c647) status_small_pane_g3_ParamLimits

0xd67d,	// (0x0003c647) status_small_pane_g3

0xd689,	// (0x0003c653) status_small_pane_g4_ParamLimits

0xd689,	// (0x0003c653) status_small_pane_g4

0xd695,	// (0x0003c65f) status_small_pane_g5_ParamLimits

0xd695,	// (0x0003c65f) status_small_pane_g5

0xd6a3,	// (0x0003c66d) status_small_pane_g6_ParamLimits

0xd6a3,	// (0x0003c66d) status_small_pane_g6

0x0007,

0xf777,	// (0x0003e741) status_small_pane_g_ParamLimits

0xf777,	// (0x0003e741) status_small_pane_g

0xd6d2,	// (0x0003c69c) status_small_pane_t1

0xd6f4,	// (0x0003c6be) status_small_wait_pane_ParamLimits

0xd6f4,	// (0x0003c6be) status_small_wait_pane

0xd4cc,	// (0x0003c496) aid_levels_signal_ParamLimits

0xd4cc,	// (0x0003c496) aid_levels_signal

0xd4e4,	// (0x0003c4ae) signal_pane_g1_ParamLimits

0xd4e4,	// (0x0003c4ae) signal_pane_g1

0xd4ff,	// (0x0003c4c9) signal_pane_g2_ParamLimits

0xd4ff,	// (0x0003c4c9) signal_pane_g2

0x0003,

0xf708,	// (0x0003e6d2) signal_pane_g_ParamLimits

0xf708,	// (0x0003e6d2) signal_pane_g

0x469c,	// (0x00033666) context_pane_g1

0xd01c,	// (0x0003bfe6) title_pane_g1

0xd053,	// (0x0003c01d) title_pane_t1

0x2e62,	// (0x00031e2c) title_pane_t2

0x2e88,	// (0x00031e52) title_pane_t3

0x0002,

0xf557,	// (0x0003e521) title_pane_t

0xdae2,	// (0x0003caac) aid_levels_battery_ParamLimits

0xdae2,	// (0x0003caac) aid_levels_battery

0xdafe,	// (0x0003cac8) battery_pane_g1_ParamLimits

0xdafe,	// (0x0003cac8) battery_pane_g1

0xdb1b,	// (0x0003cae5) battery_pane_g2_ParamLimits

0xdb1b,	// (0x0003cae5) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003e775) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003e775) battery_pane_g

0xdd00,	// (0x0003ccca) uni_indicator_pane_g1

0xdd16,	// (0x0003cce0) uni_indicator_pane_g2

0xdd2c,	// (0x0003ccf6) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0003e8e6) uni_indicator_pane_g

0x4a4f,	// (0x00033a19) navi_icon_pane_ParamLimits

0x4a4f,	// (0x00033a19) navi_icon_pane

0x4975,	// (0x0003393f) navi_midp_pane

0x4a6b,	// (0x00033a35) navi_navi_pane

0x4a75,	// (0x00033a3f) navi_text_pane_ParamLimits

0x4a75,	// (0x00033a3f) navi_text_pane

0x2db0,	// (0x00031d7a) status_small_wait_pane_g1

0x3b1c,	// (0x00032ae6) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0003e8e1) status_small_wait_pane_g

0x62cb,	// (0x00035295) navi_navi_icon_text_pane

0x62d3,	// (0x0003529d) navi_navi_pane_g1_ParamLimits

0x62d3,	// (0x0003529d) navi_navi_pane_g1

0x62e5,	// (0x000352af) navi_navi_pane_g2_ParamLimits

0x62e5,	// (0x000352af) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0003e8af) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0003e8af) navi_navi_pane_g

0x62f7,	// (0x000352c1) navi_navi_tabs_pane

0x6300,	// (0x000352ca) navi_navi_text_pane

0x62cb,	// (0x00035295) navi_navi_volume_pane

0x62a7,	// (0x00035271) navi_text_pane_t1

0x629b,	// (0x00035265) navi_icon_pane_g1

0x61ee,	// (0x000351b8) navi_navi_text_pane_t1

0x1bb5,	// (0x00030b7f) navi_navi_volume_pane_g1

0xc797,	// (0x0003b761) volume_small_pane

0xdc3d,	// (0x0003cc07) navi_navi_icon_text_pane_g1

0x615c,	// (0x00035126) navi_navi_icon_text_pane_t1

0x4a6b,	// (0x00033a35) navi_tabs_2_long_pane

0x4a6b,	// (0x00033a35) navi_tabs_2_pane

0x4a6b,	// (0x00033a35) navi_tabs_3_long_pane

0x4a6b,	// (0x00033a35) navi_tabs_3_pane

0x4a6b,	// (0x00033a35) navi_tabs_4_pane

0xc777,	// (0x0003b741) tabs_2_active_pane_ParamLimits

0xc777,	// (0x0003b741) tabs_2_active_pane

0xc787,	// (0x0003b751) tabs_2_passive_pane_ParamLimits

0xc787,	// (0x0003b751) tabs_2_passive_pane

0xc745,	// (0x0003b70f) tabs_3_active_pane_ParamLimits

0xc745,	// (0x0003b70f) tabs_3_active_pane

0xc755,	// (0x0003b71f) tabs_3_passive_pane_ParamLimits

0xc755,	// (0x0003b71f) tabs_3_passive_pane

0xc766,	// (0x0003b730) tabs_3_passive_pane_cp_ParamLimits

0xc766,	// (0x0003b730) tabs_3_passive_pane_cp

0xc712,	// (0x0003b6dc) tabs_4_active_pane_ParamLimits

0xc712,	// (0x0003b6dc) tabs_4_active_pane

0xc723,	// (0x0003b6ed) tabs_4_passive_pane_ParamLimits

0xc723,	// (0x0003b6ed) tabs_4_passive_pane

0x1b41,	// (0x00030b0b) tabs_4_passive_pane_cp_ParamLimits

0x1b41,	// (0x00030b0b) tabs_4_passive_pane_cp

0xc734,	// (0x0003b6fe) tabs_4_passive_pane_cp2_ParamLimits

0xc734,	// (0x0003b6fe) tabs_4_passive_pane_cp2

0xc6ee,	// (0x0003b6b8) tabs_2_long_active_pane_ParamLimits

0xc6ee,	// (0x0003b6b8) tabs_2_long_active_pane

0xc700,	// (0x0003b6ca) tabs_2_long_passive_pane_ParamLimits

0xc700,	// (0x0003b6ca) tabs_2_long_passive_pane

0xc6af,	// (0x0003b679) tabs_3_long_active_pane_ParamLimits

0xc6af,	// (0x0003b679) tabs_3_long_active_pane

0xc6c2,	// (0x0003b68c) tabs_3_long_passive_pane_ParamLimits

0xc6c2,	// (0x0003b68c) tabs_3_long_passive_pane

0xc6db,	// (0x0003b6a5) tabs_3_long_passive_pane_cp_ParamLimits

0xc6db,	// (0x0003b6a5) tabs_3_long_passive_pane_cp

0x1a68,	// (0x00030a32) volume_small_pane_g1

0x1a71,	// (0x00030a3b) volume_small_pane_g2

0x1a7a,	// (0x00030a44) volume_small_pane_g3

0x1a83,	// (0x00030a4d) volume_small_pane_g4

0x1a8c,	// (0x00030a56) volume_small_pane_g5

0x1a95,	// (0x00030a5f) volume_small_pane_g6

0x1a9e,	// (0x00030a68) volume_small_pane_g7

0x1aa7,	// (0x00030a71) volume_small_pane_g8

0x1ab0,	// (0x00030a7a) volume_small_pane_g9

0x1ab9,	// (0x00030a83) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0003e87b) volume_small_pane_g

0x3986,	// (0x00032950) bg_active_tab_pane_cp2_ParamLimits

0x3986,	// (0x00032950) bg_active_tab_pane_cp2

0x3719,	// (0x000326e3) tabs_3_active_pane_g1

0xd0df,	// (0x0003c0a9) tabs_3_active_pane_t1

0x3986,	// (0x00032950) bg_passive_tab_pane_cp2_ParamLimits

0x3986,	// (0x00032950) bg_passive_tab_pane_cp2

0x3719,	// (0x000326e3) tabs_3_passive_pane_g1

0xd0df,	// (0x0003c0a9) tabs_3_passive_pane_t1

0x3986,	// (0x00032950) bg_active_tab_pane_cp3_ParamLimits

0x3986,	// (0x00032950) bg_active_tab_pane_cp3

0x3733,	// (0x000326fd) tabs_4_active_pane_g1

0xd0f1,	// (0x0003c0bb) tabs_4_active_pane_t1

0x3986,	// (0x00032950) bg_passive_tab_pane_cp3_ParamLimits

0x3986,	// (0x00032950) bg_passive_tab_pane_cp3

0x3733,	// (0x000326fd) tabs_4_1_passive_pane_g1

0xd0f1,	// (0x0003c0bb) tabs_4_1_passive_pane_t1

0x4f0b,	// (0x00033ed5) list_highlight_pane_cp2

0xddb5,	// (0x0003cd7f) list_set_pane_ParamLimits

0xddb5,	// (0x0003cd7f) list_set_pane

0xde4f,	// (0x0003ce19) main_pane_set_t1_ParamLimits

0xde4f,	// (0x0003ce19) main_pane_set_t1

0xde6f,	// (0x0003ce39) main_pane_set_t2_ParamLimits

0xde6f,	// (0x0003ce39) main_pane_set_t2

0xde83,	// (0x0003ce4d) main_pane_set_t3_ParamLimits

0xde83,	// (0x0003ce4d) main_pane_set_t3

0xde95,	// (0x0003ce5f) main_pane_set_t4_ParamLimits

0xde95,	// (0x0003ce5f) main_pane_set_t4

0x0003,

0xf981,	// (0x0003e94b) main_pane_set_t_ParamLimits

0xf981,	// (0x0003e94b) main_pane_set_t

0xdea7,	// (0x0003ce71) setting_code_pane

0xdeaf,	// (0x0003ce79) setting_slider_graphic_pane

0xdeaf,	// (0x0003ce79) setting_slider_pane

0xdeaf,	// (0x0003ce79) setting_text_pane

0xdeaf,	// (0x0003ce79) setting_volume_pane

0x0476,	// (0x0002f440) volume_set_pane

0x370b,	// (0x000326d5) bg_set_opt_pane_cp

0x047e,	// (0x0002f448) setting_slider_pane_t1

0x0497,	// (0x0002f461) setting_slider_pane_t2

0x04b1,	// (0x0002f47b) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003e528) setting_slider_pane_t

0x04c9,	// (0x0002f493) slider_set_pane

0x2dba,	// (0x00031d84) bg_set_opt_pane_cp2

0x374d,	// (0x00032717) setting_slider_graphic_pane_g1

0x04df,	// (0x0002f4a9) setting_slider_graphic_pane_t1

0x04ef,	// (0x0002f4b9) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003e52f) setting_slider_graphic_pane_t

0x04ff,	// (0x0002f4c9) slider_set_pane_cp

0x2dba,	// (0x00031d84) input_focus_pane_cp1

0x67d3,	// (0x0003579d) list_set_text_pane

0x2db0,	// (0x00031d7a) setting_text_pane_g1

0x2dba,	// (0x00031d84) input_focus_pane_cp2

0x2db0,	// (0x00031d7a) setting_code_pane_g1

0x3756,	// (0x00032720) setting_code_pane_t1

0x0507,	// (0x0002f4d1) set_text_pane_t1_ParamLimits

0x0507,	// (0x0002f4d1) set_text_pane_t1

0x3fc0,	// (0x00032f8a) set_opt_bg_pane_g1

0x3fc8,	// (0x00032f92) set_opt_bg_pane_g2

0x67b3,	// (0x0003577d) set_opt_bg_pane_g3

0x3fd8,	// (0x00032fa2) set_opt_bg_pane_g4

0x3fe0,	// (0x00032faa) set_opt_bg_pane_g5

0x3fe8,	// (0x00032fb2) set_opt_bg_pane_g6

0x67bb,	// (0x00035785) set_opt_bg_pane_g7

0x67c3,	// (0x0003578d) set_opt_bg_pane_g8

0x67cb,	// (0x00035795) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0003e938) set_opt_bg_pane_g

0x67a6,	// (0x00035770) slider_set_pane_g1

0x1c2a,	// (0x00030bf4) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0003e929) slider_set_pane_g

0x1bc6,	// (0x00030b90) volume_set_pane_g1

0x1bce,	// (0x00030b98) volume_set_pane_g2

0x1bd6,	// (0x00030ba0) volume_set_pane_g3

0x1bde,	// (0x00030ba8) volume_set_pane_g4

0x1be6,	// (0x00030bb0) volume_set_pane_g5

0x1bee,	// (0x00030bb8) volume_set_pane_g6

0x1bf6,	// (0x00030bc0) volume_set_pane_g7

0x1bfe,	// (0x00030bc8) volume_set_pane_g8

0x1c06,	// (0x00030bd0) volume_set_pane_g9

0x1c0e,	// (0x00030bd8) volume_set_pane_g10

0x0009,

0xf937,	// (0x0003e901) volume_set_pane_g

0xd103,	// (0x0003c0cd) indicator_pane_ParamLimits

0xd103,	// (0x0003c0cd) indicator_pane

0xd12b,	// (0x0003c0f5) main_idle_pane_g2_ParamLimits

0xd12b,	// (0x0003c0f5) main_idle_pane_g2

0xd163,	// (0x0003c12d) main_pane_idle_g1_ParamLimits

0xd163,	// (0x0003c12d) main_pane_idle_g1

0x37a5,	// (0x0003276f) popup_clock_digital_analogue_window_ParamLimits

0x37a5,	// (0x0003276f) popup_clock_digital_analogue_window

0xd18a,	// (0x0003c154) soft_indicator_pane_ParamLimits

0xd18a,	// (0x0003c154) soft_indicator_pane

0xd1a4,	// (0x0003c16e) wallpaper_pane_ParamLimits

0xd1a4,	// (0x0003c16e) wallpaper_pane

0x2db0,	// (0x00031d7a) wallpaper_pane_g1

0xd1b6,	// (0x0003c180) indicator_pane_g1_ParamLimits

0xd1b6,	// (0x0003c180) indicator_pane_g1

0x6b6e,	// (0x00035b38) navi_navi_icon_text_pane_srt_g1

0x37f7,	// (0x000327c1) soft_indicator_pane_t1

0x3811,	// (0x000327db) aid_ps_area_pane

0xd1cc,	// (0x0003c196) aid_ps_clock_pane

0x3830,	// (0x000327fa) aid_ps_indicator_pane

0x383c,	// (0x00032806) indicator_ps_pane_ParamLimits

0x383c,	// (0x00032806) indicator_ps_pane

0x384b,	// (0x00032815) power_save_pane_g1_ParamLimits

0x384b,	// (0x00032815) power_save_pane_g1

0x3857,	// (0x00032821) power_save_pane_g2_ParamLimits

0x3857,	// (0x00032821) power_save_pane_g2

0x008b,	// (0x0002f055) aid_navinavi_width_pane

0x3811,	// (0x000327db) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003e534) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003e534) power_save_pane_g

0x3865,	// (0x0003282f) power_save_pane_t1_ParamLimits

0x3865,	// (0x0003282f) power_save_pane_t1

0xd1cc,	// (0x0003c196) aid_ps_clock_pane_ParamLimits

0x3830,	// (0x000327fa) aid_ps_indicator_pane_ParamLimits

0x3877,	// (0x00032841) power_save_pane_t4_ParamLimits

0x3877,	// (0x00032841) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003e539) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003e539) power_save_pane_t

0x38a1,	// (0x0003286b) power_save_t3_ParamLimits

0x38a1,	// (0x0003286b) power_save_t3

0x388c,	// (0x00032856) power_save_t2_ParamLimits

0x388c,	// (0x00032856) power_save_t2

0x38b6,	// (0x00032880) indicator_ps_pane_g1

0xd1da,	// (0x0003c1a4) ai_gene_pane_ParamLimits

0xd1da,	// (0x0003c1a4) ai_gene_pane

0xd1f1,	// (0x0003c1bb) ai_links_pane_ParamLimits

0xd1f1,	// (0x0003c1bb) ai_links_pane

0xd209,	// (0x0003c1d3) indicator_pane_cp1_ParamLimits

0xd209,	// (0x0003c1d3) indicator_pane_cp1

0xd218,	// (0x0003c1e2) main_pane_idle_g1_cp_ParamLimits

0xd218,	// (0x0003c1e2) main_pane_idle_g1_cp

0x38ef,	// (0x000328b9) popup_ai_links_title_window

0xd230,	// (0x0003c1fa) soft_indicator_pane_cp1_ParamLimits

0xd230,	// (0x0003c1fa) soft_indicator_pane_cp1

0x6592,	// (0x0003555c) ai_links_pane_g1

0x659b,	// (0x00035565) grid_ai_links_pane

0xdcf7,	// (0x0003ccc1) ai_gene_pane_1

0x6580,	// (0x0003554a) ai_gene_pane_2

0x6589,	// (0x00035553) list_highlight_pane_cp4

0xdcd3,	// (0x0003cc9d) cell_ai_link_pane_ParamLimits

0xdcd3,	// (0x0003cc9d) cell_ai_link_pane

0x6551,	// (0x0003551b) cell_ai_link_pane_g1

0x3b1c,	// (0x00032ae6) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0003e8dc) cell_ai_link_pane_g

0x2dba,	// (0x00031d84) grid_highlight_cp2

0x2dba,	// (0x00031d84) bg_popup_sub_pane_cp1

0x3912,	// (0x000328dc) popup_ai_links_title_window_t1

0x64a1,	// (0x0003546b) ai_gene_pane_1_g1_ParamLimits

0x64a1,	// (0x0003546b) ai_gene_pane_1_g1

0x64ad,	// (0x00035477) ai_gene_pane_1_g2_ParamLimits

0x64ad,	// (0x00035477) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0003e8d2) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0003e8d2) ai_gene_pane_1_g

0x64ba,	// (0x00035484) ai_gene_pane_1_t1_ParamLimits

0x64ba,	// (0x00035484) ai_gene_pane_1_t1

0x64ee,	// (0x000354b8) grid_ai_soft_ind_pane

0x648c,	// (0x00035456) ai_gene_pane_2_t1_ParamLimits

0x648c,	// (0x00035456) ai_gene_pane_2_t1

0xd244,	// (0x0003c20e) main_pane_empty_t1_ParamLimits

0xd244,	// (0x0003c20e) main_pane_empty_t1

0xd25c,	// (0x0003c226) main_pane_empty_t2_ParamLimits

0xd25c,	// (0x0003c226) main_pane_empty_t2

0xd271,	// (0x0003c23b) main_pane_empty_t3_ParamLimits

0xd271,	// (0x0003c23b) main_pane_empty_t3

0xd283,	// (0x0003c24d) main_pane_empty_t4_ParamLimits

0xd283,	// (0x0003c24d) main_pane_empty_t4

0xd295,	// (0x0003c25f) main_pane_empty_t5_ParamLimits

0xd295,	// (0x0003c25f) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003e53e) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003e53e) main_pane_empty_t

0x4011,	// (0x00032fdb) bg_popup_window_pane_ParamLimits

0x4011,	// (0x00032fdb) bg_popup_window_pane

0x61fc,	// (0x000351c6) find_popup_pane_cp2_ParamLimits

0x61fc,	// (0x000351c6) find_popup_pane_cp2

0x6208,	// (0x000351d2) heading_pane_ParamLimits

0x6208,	// (0x000351d2) heading_pane

0x2dba,	// (0x00031d84) bg_popup_sub_pane

0xdc54,	// (0x0003cc1e) bg_popup_window_pane_g1_ParamLimits

0xdc54,	// (0x0003cc1e) bg_popup_window_pane_g1

0xdc63,	// (0x0003cc2d) bg_popup_window_pane_g2_ParamLimits

0xdc63,	// (0x0003cc2d) bg_popup_window_pane_g2

0xdc6f,	// (0x0003cc39) bg_popup_window_pane_g3_ParamLimits

0xdc6f,	// (0x0003cc39) bg_popup_window_pane_g3

0xdc7b,	// (0x0003cc45) bg_popup_window_pane_g4_ParamLimits

0xdc7b,	// (0x0003cc45) bg_popup_window_pane_g4

0xdc8a,	// (0x0003cc54) bg_popup_window_pane_g5_ParamLimits

0xdc8a,	// (0x0003cc54) bg_popup_window_pane_g5

0xdc9a,	// (0x0003cc64) bg_popup_window_pane_g6_ParamLimits

0xdc9a,	// (0x0003cc64) bg_popup_window_pane_g6

0xdca6,	// (0x0003cc70) bg_popup_window_pane_g7_ParamLimits

0xdca6,	// (0x0003cc70) bg_popup_window_pane_g7

0xdcb5,	// (0x0003cc7f) bg_popup_window_pane_g8_ParamLimits

0xdcb5,	// (0x0003cc7f) bg_popup_window_pane_g8

0xdcc4,	// (0x0003cc8e) bg_popup_window_pane_g9_ParamLimits

0xdcc4,	// (0x0003cc8e) bg_popup_window_pane_g9

0x61e2,	// (0x000351ac) bg_popup_window_pane_g10_ParamLimits

0x61e2,	// (0x000351ac) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0003e89a) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0003e89a) bg_popup_window_pane_g

0x610b,	// (0x000350d5) bg_popup_heading_pane_ParamLimits

0x610b,	// (0x000350d5) bg_popup_heading_pane

0x1cb2,	// (0x00030c7c) tabs_4_passive_pane_cp_srt_ParamLimits

0x1cb2,	// (0x00030c7c) tabs_4_passive_pane_cp_srt

0x1cc4,	// (0x00030c8e) tabs_4_passive_pane_srt_ParamLimits

0x611f,	// (0x000350e9) heading_pane_g2

0x1cc4,	// (0x00030c8e) tabs_4_passive_pane_srt

0x547d,	// (0x00034447) bg_passive_tab_pane_cp3_srt_ParamLimits

0x547d,	// (0x00034447) bg_passive_tab_pane_cp3_srt

0x6127,	// (0x000350f1) heading_pane_t1_ParamLimits

0x6127,	// (0x000350f1) heading_pane_t1

0x613e,	// (0x00035108) heading_pane_t2_ParamLimits

0x613e,	// (0x00035108) heading_pane_t2

0x0001,

0xf8cb,	// (0x0003e895) heading_pane_t_ParamLimits

0xf8cb,	// (0x0003e895) heading_pane_t

0x5c38,	// (0x00034c02) bg_popup_heading_pane_g1

0x5ce7,	// (0x00034cb1) bg_popup_heading_pane_g2

0x5cf1,	// (0x00034cbb) bg_popup_heading_pane_g3

0x5cfb,	// (0x00034cc5) bg_popup_heading_pane_g4

0x5d05,	// (0x00034ccf) bg_popup_heading_pane_g5

0x5d0f,	// (0x00034cd9) bg_popup_heading_pane_g6

0x5d17,	// (0x00034ce1) bg_popup_heading_pane_g7

0x5d1f,	// (0x00034ce9) bg_popup_heading_pane_g8

0x5d29,	// (0x00034cf3) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0003e851) bg_popup_heading_pane_g

0x5409,	// (0x000343d3) bg_popup_sub_pane_g1

0x5419,	// (0x000343e3) bg_popup_sub_pane_g2

0x5411,	// (0x000343db) bg_popup_sub_pane_g3

0x5429,	// (0x000343f3) bg_popup_sub_pane_g4

0x5421,	// (0x000343eb) bg_popup_sub_pane_g5

0x5431,	// (0x000343fb) bg_popup_sub_pane_g6

0x5439,	// (0x00034403) bg_popup_sub_pane_g7

0x5449,	// (0x00034413) bg_popup_sub_pane_g8

0x5441,	// (0x0003440b) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0003e82b) bg_popup_sub_pane_g

0x3986,	// (0x00032950) bg_popup_window_pane_cp5_ParamLimits

0x3986,	// (0x00032950) bg_popup_window_pane_cp5

0x39a2,	// (0x0003296c) popup_note_window_g1_ParamLimits

0x39a2,	// (0x0003296c) popup_note_window_g1

0x39ae,	// (0x00032978) popup_note_window_t1_ParamLimits

0x39ae,	// (0x00032978) popup_note_window_t1

0x39c0,	// (0x0003298a) popup_note_window_t2_ParamLimits

0x39c0,	// (0x0003298a) popup_note_window_t2

0x39d2,	// (0x0003299c) popup_note_window_t3_ParamLimits

0x39d2,	// (0x0003299c) popup_note_window_t3

0x39e4,	// (0x000329ae) popup_note_window_t4_ParamLimits

0x39e4,	// (0x000329ae) popup_note_window_t4

0x3a0c,	// (0x000329d6) popup_note_window_t5_ParamLimits

0x3a0c,	// (0x000329d6) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003e549) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003e549) popup_note_window_t

0x3a30,	// (0x000329fa) bg_popup_window_pane_cp6_ParamLimits

0x3a30,	// (0x000329fa) bg_popup_window_pane_cp6

0x5bac,	// (0x00034b76) popup_note_image_window_g1_ParamLimits

0x5bac,	// (0x00034b76) popup_note_image_window_g1

0x5bb8,	// (0x00034b82) popup_note_image_window_g2_ParamLimits

0x5bb8,	// (0x00034b82) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0003e81f) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0003e81f) popup_note_image_window_g

0x5bd1,	// (0x00034b9b) popup_note_image_window_t1_ParamLimits

0x5bd1,	// (0x00034b9b) popup_note_image_window_t1

0x5bea,	// (0x00034bb4) popup_note_image_window_t2_ParamLimits

0x5bea,	// (0x00034bb4) popup_note_image_window_t2

0x5c03,	// (0x00034bcd) popup_note_image_window_t3_ParamLimits

0x5c03,	// (0x00034bcd) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0003e824) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0003e824) popup_note_image_window_t

0x5a6d,	// (0x00034a37) bg_popup_window_pane_cp7_ParamLimits

0x5a6d,	// (0x00034a37) bg_popup_window_pane_cp7

0x5a9d,	// (0x00034a67) popup_note_wait_window_g1_ParamLimits

0x5a9d,	// (0x00034a67) popup_note_wait_window_g1

0x5aa9,	// (0x00034a73) popup_note_wait_window_g2_ParamLimits

0x5aa9,	// (0x00034a73) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0003e80d) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0003e80d) popup_note_wait_window_g

0x5ac1,	// (0x00034a8b) popup_note_wait_window_t1_ParamLimits

0x5ac1,	// (0x00034a8b) popup_note_wait_window_t1

0x5ae8,	// (0x00034ab2) popup_note_wait_window_t2_ParamLimits

0x5ae8,	// (0x00034ab2) popup_note_wait_window_t2

0x5b05,	// (0x00034acf) popup_note_wait_window_t3_ParamLimits

0x5b05,	// (0x00034acf) popup_note_wait_window_t3

0x5b18,	// (0x00034ae2) popup_note_wait_window_t4_ParamLimits

0x5b18,	// (0x00034ae2) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0003e814) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0003e814) popup_note_wait_window_t

0x5b3d,	// (0x00034b07) wait_bar_pane_ParamLimits

0x5b3d,	// (0x00034b07) wait_bar_pane

0x2dba,	// (0x00031d84) wait_anim_pane

0x2dba,	// (0x00031d84) wait_border_pane

0x2db0,	// (0x00031d7a) wait_anim_pane_g1

0x2db0,	// (0x00031d7a) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003e6cd) wait_anim_pane_g

0x5a11,	// (0x000349db) wait_border_pane_g1

0x5a1c,	// (0x000349e6) wait_border_pane_g2

0x5a25,	// (0x000349ef) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0003e806) wait_border_pane_g

0x5881,	// (0x0003484b) bg_popup_window_pane_cp16_ParamLimits

0x5881,	// (0x0003484b) bg_popup_window_pane_cp16

0x5981,	// (0x0003494b) indicator_popup_pane_cp4_ParamLimits

0x5981,	// (0x0003494b) indicator_popup_pane_cp4

0x5995,	// (0x0003495f) popup_query_data_window_t1_ParamLimits

0x5995,	// (0x0003495f) popup_query_data_window_t1

0x59a7,	// (0x00034971) popup_query_data_window_t2_ParamLimits

0x59a7,	// (0x00034971) popup_query_data_window_t2

0x59c0,	// (0x0003498a) popup_query_data_window_t3_ParamLimits

0x59c0,	// (0x0003498a) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0003e7ff) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0003e7ff) popup_query_data_window_t

0x59da,	// (0x000349a4) query_popup_data_pane_ParamLimits

0x59da,	// (0x000349a4) query_popup_data_pane

0x59ee,	// (0x000349b8) query_popup_data_pane_cp1_ParamLimits

0x59ee,	// (0x000349b8) query_popup_data_pane_cp1

0x5881,	// (0x0003484b) bg_popup_window_pane_cp10_ParamLimits

0x5881,	// (0x0003484b) bg_popup_window_pane_cp10

0x58b3,	// (0x0003487d) indicator_popup_pane_ParamLimits

0x58b3,	// (0x0003487d) indicator_popup_pane

0x58d5,	// (0x0003489f) popup_query_code_window_t1_ParamLimits

0x58d5,	// (0x0003489f) popup_query_code_window_t1

0x58ef,	// (0x000348b9) popup_query_code_window_t2_ParamLimits

0x58ef,	// (0x000348b9) popup_query_code_window_t2

0x5938,	// (0x00034902) popup_query_code_window_t3_ParamLimits

0x5938,	// (0x00034902) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0003e7f8) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0003e7f8) popup_query_code_window_t

0x5967,	// (0x00034931) query_popup_pane_ParamLimits

0x5967,	// (0x00034931) query_popup_pane

0x3a30,	// (0x000329fa) bg_popup_window_pane_cp15_ParamLimits

0x3a30,	// (0x000329fa) bg_popup_window_pane_cp15

0x3a4e,	// (0x00032a18) indicator_popup_pane_cp1_ParamLimits

0x3a4e,	// (0x00032a18) indicator_popup_pane_cp1

0x3a61,	// (0x00032a2b) indicator_popup_pane_cp2_ParamLimits

0x3a61,	// (0x00032a2b) indicator_popup_pane_cp2

0x3a74,	// (0x00032a3e) popup_query_data_code_window_g1_ParamLimits

0x3a74,	// (0x00032a3e) popup_query_data_code_window_g1

0x3a87,	// (0x00032a51) popup_query_data_code_window_t1_ParamLimits

0x3a87,	// (0x00032a51) popup_query_data_code_window_t1

0x3a99,	// (0x00032a63) popup_query_data_code_window_t2_ParamLimits

0x3a99,	// (0x00032a63) popup_query_data_code_window_t2

0x3aab,	// (0x00032a75) popup_query_data_code_window_t3_ParamLimits

0x3aab,	// (0x00032a75) popup_query_data_code_window_t3

0x3ac1,	// (0x00032a8b) popup_query_data_code_window_t4_ParamLimits

0x3ac1,	// (0x00032a8b) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003e554) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003e554) popup_query_data_code_window_t

0x1890,	// (0x0003085a) list_single_midp_graphic_pane_g3

0x3ad9,	// (0x00032aa3) query_popup_data_pane_cp2_ParamLimits

0x3aec,	// (0x00032ab6) query_popup_pane_cp2_ParamLimits

0x3aec,	// (0x00032ab6) query_popup_pane_cp2

0x2dba,	// (0x00031d84) bg_popup_window_pane_cp11

0x5879,	// (0x00034843) heading_pane_cp5

0x3bd7,	// (0x00032ba1) listscroll_popup_info_pane

0x2dba,	// (0x00031d84) input_focus_pane_cp3

0x3aff,	// (0x00032ac9) query_popup_pane_t1

0x3b0d,	// (0x00032ad7) list_popup_info_pane_ParamLimits

0x3b0d,	// (0x00032ad7) list_popup_info_pane

0x3b1c,	// (0x00032ae6) listscroll_popup_info_pane_g1

0x3b24,	// (0x00032aee) scroll_pane_cp7

0x3b2e,	// (0x00032af8) popup_info_list_pane_t1_ParamLimits

0x3b2e,	// (0x00032af8) popup_info_list_pane_t1

0x3b48,	// (0x00032b12) popup_info_list_pane_t2_ParamLimits

0x3b48,	// (0x00032b12) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003e55d) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003e55d) popup_info_list_pane_t

0x2dba,	// (0x00031d84) bg_popup_window_pane_cp12

0x6b88,	// (0x00035b52) find_popup_pane

0x370b,	// (0x000326d5) bg_popup_window_pane_cp3

0x3b62,	// (0x00032b2c) heading_pane_cp3

0x3b6e,	// (0x00032b38) listscroll_popup_graphic_pane

0x2dba,	// (0x00031d84) bg_popup_window_pane_cp4

0xd2f7,	// (0x0003c2c1) heading_pane_cp4

0x3bd7,	// (0x00032ba1) listscroll_popup_colour_pane

0x3bdf,	// (0x00032ba9) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3bdf,	// (0x00032ba9) cell_large_graphic_colour_none_popup_pane

0xd2ff,	// (0x0003c2c9) grid_large_graphic_colour_popup_pane_ParamLimits

0xd2ff,	// (0x0003c2c9) grid_large_graphic_colour_popup_pane

0x3c1b,	// (0x00032be5) listscroll_popup_colour_pane_g1_ParamLimits

0x3c1b,	// (0x00032be5) listscroll_popup_colour_pane_g1

0x3c32,	// (0x00032bfc) listscroll_popup_colour_pane_g2_ParamLimits

0x3c32,	// (0x00032bfc) listscroll_popup_colour_pane_g2

0x3c49,	// (0x00032c13) listscroll_popup_colour_pane_g3_ParamLimits

0x3c49,	// (0x00032c13) listscroll_popup_colour_pane_g3

0xd323,	// (0x0003c2ed) listscroll_popup_colour_pane_g4_ParamLimits

0xd323,	// (0x0003c2ed) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003e562) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003e562) listscroll_popup_colour_pane_g

0x3c68,	// (0x00032c32) scroll_pane_cp6_ParamLimits

0x3c68,	// (0x00032c32) scroll_pane_cp6

0xd332,	// (0x0003c2fc) cell_large_graphic_colour_popup_pane_ParamLimits

0xd332,	// (0x0003c2fc) cell_large_graphic_colour_popup_pane

0x3c99,	// (0x00032c63) cell_large_graphic_colour_none_popup_pane_t1

0x2dba,	// (0x00031d84) grid_highlight_pane_cp5

0x3ca8,	// (0x00032c72) cell_large_graphic_colour_popup_pane_g1

0x3cb0,	// (0x00032c7a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003e56b) cell_large_graphic_colour_popup_pane_g

0x3cb8,	// (0x00032c82) cell_large_graphic_colour_popup_pane_g2_copy1

0x3cc1,	// (0x00032c8b) grid_highlight_pane_cp4

0x3cc9,	// (0x00032c93) bg_popup_window_pane_cp8_ParamLimits

0x3cc9,	// (0x00032c93) bg_popup_window_pane_cp8

0x3ce4,	// (0x00032cae) popup_snote_single_text_window_g1_ParamLimits

0x3ce4,	// (0x00032cae) popup_snote_single_text_window_g1

0x3cf6,	// (0x00032cc0) popup_snote_single_text_window_t1_ParamLimits

0x3cf6,	// (0x00032cc0) popup_snote_single_text_window_t1

0x3d09,	// (0x00032cd3) popup_snote_single_text_window_t2_ParamLimits

0x3d09,	// (0x00032cd3) popup_snote_single_text_window_t2

0x3d1c,	// (0x00032ce6) popup_snote_single_text_window_t3_ParamLimits

0x3d1c,	// (0x00032ce6) popup_snote_single_text_window_t3

0x3d55,	// (0x00032d1f) popup_snote_single_text_window_t4_ParamLimits

0x3d55,	// (0x00032d1f) popup_snote_single_text_window_t4

0x3d89,	// (0x00032d53) popup_snote_single_text_window_t5_ParamLimits

0x3d89,	// (0x00032d53) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003e570) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003e570) popup_snote_single_text_window_t

0x3db8,	// (0x00032d82) bg_popup_window_pane_cp9_ParamLimits

0x3db8,	// (0x00032d82) bg_popup_window_pane_cp9

0x3ce4,	// (0x00032cae) popup_snote_single_graphic_window_g1_ParamLimits

0x3ce4,	// (0x00032cae) popup_snote_single_graphic_window_g1

0x3dc6,	// (0x00032d90) popup_snote_single_graphic_window_g2_ParamLimits

0x3dc6,	// (0x00032d90) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003e57b) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003e57b) popup_snote_single_graphic_window_g

0x3dd2,	// (0x00032d9c) popup_snote_single_graphic_window_t1_ParamLimits

0x3dd2,	// (0x00032d9c) popup_snote_single_graphic_window_t1

0x3de5,	// (0x00032daf) popup_snote_single_graphic_window_t2_ParamLimits

0x3de5,	// (0x00032daf) popup_snote_single_graphic_window_t2

0x3df8,	// (0x00032dc2) popup_snote_single_graphic_window_t3_ParamLimits

0x3df8,	// (0x00032dc2) popup_snote_single_graphic_window_t3

0x3e31,	// (0x00032dfb) popup_snote_single_graphic_window_t4_ParamLimits

0x3e31,	// (0x00032dfb) popup_snote_single_graphic_window_t4

0x3e65,	// (0x00032e2f) popup_snote_single_graphic_window_t5_ParamLimits

0x3e65,	// (0x00032e2f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003e580) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003e580) popup_snote_single_graphic_window_t

0x6acc,	// (0x00035a96) grid_graphic_popup_pane_ParamLimits

0x6acc,	// (0x00035a96) grid_graphic_popup_pane

0x6af4,	// (0x00035abe) listscroll_popup_graphic_pane_g1_ParamLimits

0x6af4,	// (0x00035abe) listscroll_popup_graphic_pane_g1

0xdfa7,	// (0x0003cf71) listscroll_popup_graphic_pane_g2_ParamLimits

0xdfa7,	// (0x0003cf71) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0003e975) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0003e975) listscroll_popup_graphic_pane_g

0x6b1c,	// (0x00035ae6) scroll_pane_cp5

0xdf62,	// (0x0003cf2c) cell_graphic_popup_pane_ParamLimits

0xdf62,	// (0x0003cf2c) cell_graphic_popup_pane

0x6a4d,	// (0x00035a17) cell_graphic_popup_pane_g1

0x6a55,	// (0x00035a1f) cell_graphic_popup_pane_g2

0x3cb8,	// (0x00032c82) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0003e96e) cell_graphic_popup_pane_g

0x6a5e,	// (0x00035a28) cell_graphic_popup_pane_t2

0x3cc1,	// (0x00032c8b) grid_highlight_pane_cp3

0x3ea6,	// (0x00032e70) list_gen_pane_ParamLimits

0x3ea6,	// (0x00032e70) list_gen_pane

0x3ed8,	// (0x00032ea2) scroll_pane

0xdf1d,	// (0x0003cee7) bg_list_pane_g1_ParamLimits

0xdf1d,	// (0x0003cee7) bg_list_pane_g1

0x69ca,	// (0x00035994) bg_list_pane_g2_ParamLimits

0x69ca,	// (0x00035994) bg_list_pane_g2

0x69dd,	// (0x000359a7) bg_list_pane_g3_ParamLimits

0x69dd,	// (0x000359a7) bg_list_pane_g3

0x69ef,	// (0x000359b9) bg_list_pane_g4_ParamLimits

0x69ef,	// (0x000359b9) bg_list_pane_g4

0xdf38,	// (0x0003cf02) bg_list_pane_g5_ParamLimits

0xdf38,	// (0x0003cf02) bg_list_pane_g5

0x0004,

0xf999,	// (0x0003e963) bg_list_pane_g_ParamLimits

0xf999,	// (0x0003e963) bg_list_pane_g

0xdee2,	// (0x0003ceac) list_double2_graphic_large_graphic_pane_ParamLimits

0xdee2,	// (0x0003ceac) list_double2_graphic_large_graphic_pane

0xdee2,	// (0x0003ceac) list_double2_graphic_pane_ParamLimits

0xdee2,	// (0x0003ceac) list_double2_graphic_pane

0xdee2,	// (0x0003ceac) list_double2_large_graphic_pane_ParamLimits

0xdee2,	// (0x0003ceac) list_double2_large_graphic_pane

0xdee2,	// (0x0003ceac) list_double2_pane_ParamLimits

0xdee2,	// (0x0003ceac) list_double2_pane

0xdee2,	// (0x0003ceac) list_double_graphic_heading_pane_ParamLimits

0xdee2,	// (0x0003ceac) list_double_graphic_heading_pane

0xdee2,	// (0x0003ceac) list_double_graphic_pane_ParamLimits

0xdee2,	// (0x0003ceac) list_double_graphic_pane

0xdee2,	// (0x0003ceac) list_double_heading_pane_ParamLimits

0xdee2,	// (0x0003ceac) list_double_heading_pane

0xdee2,	// (0x0003ceac) list_double_large_graphic_pane_ParamLimits

0xdee2,	// (0x0003ceac) list_double_large_graphic_pane

0xdee2,	// (0x0003ceac) list_double_number_pane_ParamLimits

0xdee2,	// (0x0003ceac) list_double_number_pane

0xdee2,	// (0x0003ceac) list_double_pane_ParamLimits

0xdee2,	// (0x0003ceac) list_double_pane

0xdee2,	// (0x0003ceac) list_double_time_pane_ParamLimits

0xdee2,	// (0x0003ceac) list_double_time_pane

0xdee2,	// (0x0003ceac) list_setting_number_pane_ParamLimits

0xdee2,	// (0x0003ceac) list_setting_number_pane

0xdee2,	// (0x0003ceac) list_setting_pane_ParamLimits

0xdee2,	// (0x0003ceac) list_setting_pane

0xdef5,	// (0x0003cebf) list_single_2graphic_pane_ParamLimits

0xdef5,	// (0x0003cebf) list_single_2graphic_pane

0xdef5,	// (0x0003cebf) list_single_graphic_heading_pane_ParamLimits

0xdef5,	// (0x0003cebf) list_single_graphic_heading_pane

0xdef5,	// (0x0003cebf) list_single_graphic_pane_ParamLimits

0xdef5,	// (0x0003cebf) list_single_graphic_pane

0xdef5,	// (0x0003cebf) list_single_heading_pane_ParamLimits

0xdef5,	// (0x0003cebf) list_single_heading_pane

0xdef5,	// (0x0003cebf) list_single_large_graphic_pane_ParamLimits

0xdef5,	// (0x0003cebf) list_single_large_graphic_pane

0xdef5,	// (0x0003cebf) list_single_number_heading_pane_ParamLimits

0xdef5,	// (0x0003cebf) list_single_number_heading_pane

0xdef5,	// (0x0003cebf) list_single_number_pane_ParamLimits

0xdef5,	// (0x0003cebf) list_single_number_pane

0xdef5,	// (0x0003cebf) list_single_pane_ParamLimits

0xdef5,	// (0x0003cebf) list_single_pane

0x2dba,	// (0x00031d84) list_highlight_pane_cp1

0x05e2,	// (0x0002f5ac) list_single_pane_g1_ParamLimits

0x05e2,	// (0x0002f5ac) list_single_pane_g1

0x05ee,	// (0x0002f5b8) list_single_pane_g2_ParamLimits

0x05ee,	// (0x0002f5b8) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003e592) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003e592) list_single_pane_g

0x30c3,	// (0x0003208d) list_single_pane_t1_ParamLimits

0x30c3,	// (0x0003208d) list_single_pane_t1

0x05e2,	// (0x0002f5ac) list_single_number_pane_g1_ParamLimits

0x05e2,	// (0x0002f5ac) list_single_number_pane_g1

0x05ee,	// (0x0002f5b8) list_single_number_pane_g2_ParamLimits

0x05ee,	// (0x0002f5b8) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003e592) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003e592) list_single_number_pane_g

0x1855,	// (0x0003081f) list_single_number_pane_t1_ParamLimits

0x1855,	// (0x0003081f) list_single_number_pane_t1

0xc7a0,	// (0x0003b76a) list_single_number_pane_t2_ParamLimits

0xc7a0,	// (0x0003b76a) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0003e924) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0003e924) list_single_number_pane_t

0xb84b,	// (0x0003a815) list_single_graphic_pane_g1_ParamLimits

0xb84b,	// (0x0003a815) list_single_graphic_pane_g1

0x05e2,	// (0x0002f5ac) list_single_graphic_pane_g2_ParamLimits

0x05e2,	// (0x0002f5ac) list_single_graphic_pane_g2

0x05ee,	// (0x0002f5b8) list_single_graphic_pane_g3_ParamLimits

0x05ee,	// (0x0002f5b8) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003e58b) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003e58b) list_single_graphic_pane_g

0xb857,	// (0x0003a821) list_single_graphic_pane_t1_ParamLimits

0xb857,	// (0x0003a821) list_single_graphic_pane_t1

0x05e2,	// (0x0002f5ac) list_single_heading_pane_g1_ParamLimits

0x05e2,	// (0x0002f5ac) list_single_heading_pane_g1

0x05ee,	// (0x0002f5b8) list_single_heading_pane_g2_ParamLimits

0x05ee,	// (0x0002f5b8) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003e592) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003e592) list_single_heading_pane_g

0xb86d,	// (0x0003a837) list_single_heading_pane_t1_ParamLimits

0xb86d,	// (0x0003a837) list_single_heading_pane_t1

0xb883,	// (0x0003a84d) list_single_heading_pane_t2_ParamLimits

0xb883,	// (0x0003a84d) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003e597) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003e597) list_single_heading_pane_t

0x05e2,	// (0x0002f5ac) list_single_number_heading_pane_g1_ParamLimits

0x05e2,	// (0x0002f5ac) list_single_number_heading_pane_g1

0x05ee,	// (0x0002f5b8) list_single_number_heading_pane_g2_ParamLimits

0x05ee,	// (0x0002f5b8) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003e592) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003e592) list_single_number_heading_pane_g

0xb86d,	// (0x0003a837) list_single_number_heading_pane_t1_ParamLimits

0xb86d,	// (0x0003a837) list_single_number_heading_pane_t1

0xb895,	// (0x0003a85f) list_single_number_heading_pane_t2_ParamLimits

0xb895,	// (0x0003a85f) list_single_number_heading_pane_t2

0x309d,	// (0x00032067) list_single_number_heading_pane_t3_ParamLimits

0x309d,	// (0x00032067) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003e59c) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003e59c) list_single_number_heading_pane_t

0x1849,	// (0x00030813) list_single_graphic_heading_pane_g1_ParamLimits

0x1849,	// (0x00030813) list_single_graphic_heading_pane_g1

0xb8a7,	// (0x0003a871) list_single_graphic_heading_pane_g4_ParamLimits

0xb8a7,	// (0x0003a871) list_single_graphic_heading_pane_g4

0x05ee,	// (0x0002f5b8) list_single_graphic_heading_pane_g5_ParamLimits

0x05ee,	// (0x0002f5b8) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003e5a3) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003e5a3) list_single_graphic_heading_pane_g

0xb86d,	// (0x0003a837) list_single_graphic_heading_pane_t1_ParamLimits

0xb86d,	// (0x0003a837) list_single_graphic_heading_pane_t1

0xb8b8,	// (0x0003a882) list_single_graphic_heading_pane_t2_ParamLimits

0xb8b8,	// (0x0003a882) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003e5aa) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003e5aa) list_single_graphic_heading_pane_t

0x30d9,	// (0x000320a3) list_single_large_graphic_pane_g1_ParamLimits

0x30d9,	// (0x000320a3) list_single_large_graphic_pane_g1

0x05e2,	// (0x0002f5ac) list_single_large_graphic_pane_g2_ParamLimits

0x05e2,	// (0x0002f5ac) list_single_large_graphic_pane_g2

0x05ee,	// (0x0002f5b8) list_single_large_graphic_pane_g3_ParamLimits

0x05ee,	// (0x0002f5b8) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003e5af) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003e5af) list_single_large_graphic_pane_g

0x5a1c,	// (0x000349e6) wait_border_pane_g2_copy1

0xb8ca,	// (0x0003a894) list_single_large_graphic_pane_g4_cp2

0x30e5,	// (0x000320af) list_single_large_graphic_pane_t1_ParamLimits

0x30e5,	// (0x000320af) list_single_large_graphic_pane_t1

0xb8d2,	// (0x0003a89c) list_double_pane_g1_ParamLimits

0xb8d2,	// (0x0003a89c) list_double_pane_g1

0x0669,	// (0x0002f633) list_double_pane_g2_ParamLimits

0x0669,	// (0x0002f633) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003e5b6) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003e5b6) list_double_pane_g

0x0675,	// (0x0002f63f) list_double_pane_t1_ParamLimits

0x0675,	// (0x0002f63f) list_double_pane_t1

0xb8de,	// (0x0003a8a8) list_double_pane_t2_ParamLimits

0xb8de,	// (0x0003a8a8) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003e5bb) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003e5bb) list_double_pane_t

0xb8f0,	// (0x0003a8ba) list_double2_pane_g1_ParamLimits

0xb8f0,	// (0x0003a8ba) list_double2_pane_g1

0x082e,	// (0x0002f7f8) list_double2_pane_g2_ParamLimits

0x082e,	// (0x0002f7f8) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003e5c0) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003e5c0) list_double2_pane_g

0xb901,	// (0x0003a8cb) list_double2_pane_t1_ParamLimits

0xb901,	// (0x0003a8cb) list_double2_pane_t1

0xb917,	// (0x0003a8e1) list_double2_pane_t2_ParamLimits

0xb917,	// (0x0003a8e1) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003e5c5) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003e5c5) list_double2_pane_t

0xb8d2,	// (0x0003a89c) list_double_number_pane_g1_ParamLimits

0xb8d2,	// (0x0003a89c) list_double_number_pane_g1

0x0669,	// (0x0002f633) list_double_number_pane_g2_ParamLimits

0x0669,	// (0x0002f633) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003e5b6) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003e5b6) list_double_number_pane_g

0xb929,	// (0x0003a8f3) list_double_number_pane_t1_ParamLimits

0xb929,	// (0x0003a8f3) list_double_number_pane_t1

0x073e,	// (0x0002f708) list_double_number_pane_t2_ParamLimits

0x073e,	// (0x0002f708) list_double_number_pane_t2

0xb93b,	// (0x0003a905) list_double_number_pane_t3_ParamLimits

0xb93b,	// (0x0003a905) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003e5ca) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003e5ca) list_double_number_pane_t

0x0732,	// (0x0002f6fc) list_double_graphic_pane_g1_ParamLimits

0x0732,	// (0x0002f6fc) list_double_graphic_pane_g1

0xb94d,	// (0x0003a917) list_double_graphic_pane_g2_ParamLimits

0xb94d,	// (0x0003a917) list_double_graphic_pane_g2

0xb95c,	// (0x0003a926) list_double_graphic_pane_g3_ParamLimits

0xb95c,	// (0x0003a926) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003e5d1) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003e5d1) list_double_graphic_pane_g

0xb974,	// (0x0003a93e) list_double_graphic_pane_t1_ParamLimits

0xb974,	// (0x0003a93e) list_double_graphic_pane_t1

0xb98a,	// (0x0003a954) list_double_graphic_pane_t2_ParamLimits

0xb98a,	// (0x0003a954) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003e5da) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003e5da) list_double_graphic_pane_t

0xb99c,	// (0x0003a966) list_double2_graphic_pane_g1_ParamLimits

0xb99c,	// (0x0003a966) list_double2_graphic_pane_g1

0xb8d2,	// (0x0003a89c) list_double2_graphic_pane_g2_ParamLimits

0xb8d2,	// (0x0003a89c) list_double2_graphic_pane_g2

0x0669,	// (0x0002f633) list_double2_graphic_pane_g3_ParamLimits

0x0669,	// (0x0002f633) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003e5df) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003e5df) list_double2_graphic_pane_g

0xb9a8,	// (0x0003a972) list_double2_graphic_pane_t1_ParamLimits

0xb9a8,	// (0x0003a972) list_double2_graphic_pane_t1

0xb9be,	// (0x0003a988) list_double2_graphic_pane_t2_ParamLimits

0xb9be,	// (0x0003a988) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003e5e6) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003e5e6) list_double2_graphic_pane_t

0xb9d0,	// (0x0003a99a) list_double_large_graphic_pane_g1_ParamLimits

0xb9d0,	// (0x0003a99a) list_double_large_graphic_pane_g1

0xb9ef,	// (0x0003a9b9) list_double_large_graphic_pane_g2_ParamLimits

0xb9ef,	// (0x0003a9b9) list_double_large_graphic_pane_g2

0x0669,	// (0x0002f633) list_double_large_graphic_pane_g3_ParamLimits

0x0669,	// (0x0002f633) list_double_large_graphic_pane_g3

0xba00,	// (0x0003a9ca) list_double_large_graphic_pane_g4_ParamLimits

0xba00,	// (0x0003a9ca) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003e5eb) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003e5eb) list_double_large_graphic_pane_g

0xba13,	// (0x0003a9dd) list_double_large_graphic_pane_t1_ParamLimits

0xba13,	// (0x0003a9dd) list_double_large_graphic_pane_t1

0xba2c,	// (0x0003a9f6) list_double_large_graphic_pane_t2_ParamLimits

0xba2c,	// (0x0003a9f6) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003e5f6) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003e5f6) list_double_large_graphic_pane_t

0xba3e,	// (0x0003aa08) list_double2_large_graphic_pane_g1_ParamLimits

0xba3e,	// (0x0003aa08) list_double2_large_graphic_pane_g1

0xb8f0,	// (0x0003a8ba) list_double2_large_graphic_pane_g2_ParamLimits

0xb8f0,	// (0x0003a8ba) list_double2_large_graphic_pane_g2

0x082e,	// (0x0002f7f8) list_double2_large_graphic_pane_g3_ParamLimits

0x082e,	// (0x0002f7f8) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003e5fb) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003e5fb) list_double2_large_graphic_pane_g

0xba4a,	// (0x0003aa14) list_double2_large_graphic_pane_t1_ParamLimits

0xba4a,	// (0x0003aa14) list_double2_large_graphic_pane_t1

0xba60,	// (0x0003aa2a) list_double2_large_graphic_pane_t2_ParamLimits

0xba60,	// (0x0003aa2a) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003e602) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003e602) list_double2_large_graphic_pane_t

0xba72,	// (0x0003aa3c) list_double_heading_pane_g1_ParamLimits

0xba72,	// (0x0003aa3c) list_double_heading_pane_g1

0xba83,	// (0x0003aa4d) list_double_heading_pane_g2_ParamLimits

0xba83,	// (0x0003aa4d) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003e607) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003e607) list_double_heading_pane_g

0xba8f,	// (0x0003aa59) list_double_heading_pane_t1_ParamLimits

0xba8f,	// (0x0003aa59) list_double_heading_pane_t1

0xb917,	// (0x0003a8e1) list_double_heading_pane_t2_ParamLimits

0xb917,	// (0x0003a8e1) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003e60c) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003e60c) list_double_heading_pane_t

0x0732,	// (0x0002f6fc) list_double_graphic_heading_pane_g1_ParamLimits

0x0732,	// (0x0002f6fc) list_double_graphic_heading_pane_g1

0xba72,	// (0x0003aa3c) list_double_graphic_heading_pane_g2_ParamLimits

0xba72,	// (0x0003aa3c) list_double_graphic_heading_pane_g2

0xba83,	// (0x0003aa4d) list_double_graphic_heading_pane_g3_ParamLimits

0xba83,	// (0x0003aa4d) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003e611) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003e611) list_double_graphic_heading_pane_g

0xbaa5,	// (0x0003aa6f) list_double_graphic_heading_pane_t1_ParamLimits

0xbaa5,	// (0x0003aa6f) list_double_graphic_heading_pane_t1

0xb9be,	// (0x0003a988) list_double_graphic_heading_pane_t2_ParamLimits

0xb9be,	// (0x0003a988) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003e618) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003e618) list_double_graphic_heading_pane_t

0xb9ef,	// (0x0003a9b9) list_double_time_pane_g1_ParamLimits

0xb9ef,	// (0x0003a9b9) list_double_time_pane_g1

0x0669,	// (0x0002f633) list_double_time_pane_g2_ParamLimits

0x0669,	// (0x0002f633) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003e61d) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003e61d) list_double_time_pane_g

0xbabb,	// (0x0003aa85) list_double_time_pane_t1_ParamLimits

0xbabb,	// (0x0003aa85) list_double_time_pane_t1

0xbad1,	// (0x0003aa9b) list_double_time_pane_t2_ParamLimits

0xbad1,	// (0x0003aa9b) list_double_time_pane_t2

0xbae3,	// (0x0003aaad) list_double_time_pane_t3_ParamLimits

0xbae3,	// (0x0003aaad) list_double_time_pane_t3

0xbaf5,	// (0x0003aabf) list_double_time_pane_t4_ParamLimits

0xbaf5,	// (0x0003aabf) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003e622) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003e622) list_double_time_pane_t

0x08b2,	// (0x0002f87c) list_setting_pane_g1_ParamLimits

0x08b2,	// (0x0002f87c) list_setting_pane_g1

0x082e,	// (0x0002f7f8) list_setting_pane_g2_ParamLimits

0x082e,	// (0x0002f7f8) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003e62b) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003e62b) list_setting_pane_g

0xbb07,	// (0x0003aad1) list_setting_pane_t1_ParamLimits

0xbb07,	// (0x0003aad1) list_setting_pane_t1

0xbb21,	// (0x0003aaeb) list_setting_pane_t2_ParamLimits

0xbb21,	// (0x0003aaeb) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003e630) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003e630) list_setting_pane_t

0xbb5e,	// (0x0003ab28) set_value_pane_cp_ParamLimits

0xbb5e,	// (0x0003ab28) set_value_pane_cp

0x091e,	// (0x0002f8e8) list_setting_number_pane_g1_ParamLimits

0x091e,	// (0x0002f8e8) list_setting_number_pane_g1

0x092a,	// (0x0002f8f4) list_setting_number_pane_g2_ParamLimits

0x092a,	// (0x0002f8f4) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003e637) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003e637) list_setting_number_pane_g

0xbb6a,	// (0x0003ab34) list_setting_number_pane_t1_ParamLimits

0xbb6a,	// (0x0003ab34) list_setting_number_pane_t1

0xbb83,	// (0x0003ab4d) list_setting_number_pane_t2_ParamLimits

0xbb83,	// (0x0003ab4d) list_setting_number_pane_t2

0xbb9d,	// (0x0003ab67) list_setting_number_pane_t3_ParamLimits

0xbb9d,	// (0x0003ab67) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003e63c) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003e63c) list_setting_number_pane_t

0xbb5e,	// (0x0003ab28) set_value_pane_ParamLimits

0xbb5e,	// (0x0003ab28) set_value_pane

0x3f0c,	// (0x00032ed6) bg_set_opt_pane_ParamLimits

0x3f0c,	// (0x00032ed6) bg_set_opt_pane

0x09a4,	// (0x0002f96e) set_value_pane_t1

0x3f2d,	// (0x00032ef7) slider_set_pane_cp3

0x3f36,	// (0x00032f00) volume_small_pane_cp

0x3f3f,	// (0x00032f09) list_form_gen_pane

0x3f48,	// (0x00032f12) scroll_pane_cp8

0xbbe0,	// (0x0003abaa) form_field_data_pane_ParamLimits

0xbbe0,	// (0x0003abaa) form_field_data_pane

0xbbf7,	// (0x0003abc1) form_field_data_wide_pane_ParamLimits

0xbbf7,	// (0x0003abc1) form_field_data_wide_pane

0xbc17,	// (0x0003abe1) form_field_popup_pane_ParamLimits

0xbc17,	// (0x0003abe1) form_field_popup_pane

0xbc2f,	// (0x0003abf9) form_field_popup_wide_pane_ParamLimits

0xbc2f,	// (0x0003abf9) form_field_popup_wide_pane

0x0a36,	// (0x0002fa00) form_field_slider_pane_ParamLimits

0x0a36,	// (0x0002fa00) form_field_slider_pane

0x0a49,	// (0x0002fa13) form_field_slider_wide_pane_ParamLimits

0x0a49,	// (0x0002fa13) form_field_slider_wide_pane

0x3f59,	// (0x00032f23) data_form_pane

0xbc56,	// (0x0003ac20) form_field_data_pane_t1

0x3f65,	// (0x00032f2f) input_focus_pane

0x0a80,	// (0x0002fa4a) data_form_wide_pane

0x0a9d,	// (0x0002fa67) form_field_data_wide_pane_t1

0x3cd6,	// (0x00032ca0) input_focus_pane_cp6

0xbc70,	// (0x0003ac3a) form_field_popup_pane_t1

0x3f65,	// (0x00032f2f) input_focus_pane_cp7

0x3f93,	// (0x00032f5d) list_form_pane

0x0ae1,	// (0x0002faab) form_field_popup_wide_pane_t1

0x3f65,	// (0x00032f2f) input_focus_pane_cp8

0x3f9f,	// (0x00032f69) list_form_wide_pane

0xbc92,	// (0x0003ac5c) form_field_slider_pane_t1_ParamLimits

0xbc92,	// (0x0003ac5c) form_field_slider_pane_t1

0xbcaa,	// (0x0003ac74) form_field_slider_pane_t2_ParamLimits

0xbcaa,	// (0x0003ac74) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003e64c) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003e64c) form_field_slider_pane_t

0x3986,	// (0x00032950) input_focus_pane_cp9_ParamLimits

0x3986,	// (0x00032950) input_focus_pane_cp9

0xbcbf,	// (0x0003ac89) slider_cont_pane_ParamLimits

0xbcbf,	// (0x0003ac89) slider_cont_pane

0x3fae,	// (0x00032f78) form_field_slider_wide_pane_t1_ParamLimits

0x3fae,	// (0x00032f78) form_field_slider_wide_pane_t1

0x0b38,	// (0x0002fb02) form_field_slider_wide_pane_t2_ParamLimits

0x0b38,	// (0x0002fb02) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003e651) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003e651) form_field_slider_wide_pane_t

0x3986,	// (0x00032950) input_focus_pane_cp10_ParamLimits

0x3986,	// (0x00032950) input_focus_pane_cp10

0xbcd3,	// (0x0003ac9d) slider_cont_pane_cp1_ParamLimits

0xbcd3,	// (0x0003ac9d) slider_cont_pane_cp1

0xbce7,	// (0x0003acb1) slider_form_pane_cp

0x3fc0,	// (0x00032f8a) input_focus_pane_g1

0x3fc8,	// (0x00032f92) input_focus_pane_g2

0x3fd0,	// (0x00032f9a) input_focus_pane_g3

0x3fd8,	// (0x00032fa2) input_focus_pane_g4

0x3fe0,	// (0x00032faa) input_focus_pane_g5

0x3fe8,	// (0x00032fb2) input_focus_pane_g6

0x3ff0,	// (0x00032fba) input_focus_pane_g7

0x3ff8,	// (0x00032fc2) input_focus_pane_g8

0x4000,	// (0x00032fca) input_focus_pane_g9

0x2db0,	// (0x00031d7a) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003e656) input_focus_pane_g

0x5a25,	// (0x000349ef) wait_border_pane_g3_copy1

0xbcef,	// (0x0003acb9) data_form_pane_t1

0x2db0,	// (0x00031d7a) wait_anim_pane_g1_copy1

0xc7b2,	// (0x0003b77c) data_form_wide_pane_t1

0xbd09,	// (0x0003acd3) list_form_graphic_pane_cp_ParamLimits

0xbd09,	// (0x0003acd3) list_form_graphic_pane_cp

0x6940,	// (0x0003590a) slider_form_pane_g1

0x6949,	// (0x00035913) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0003e954) slider_form_pane_g

0xbd1c,	// (0x0003ace6) list_form_graphic_pane_ParamLimits

0xbd1c,	// (0x0003ace6) list_form_graphic_pane

0x0b98,	// (0x0002fb62) list_form_graphic_pane_g1

0x0ba0,	// (0x0002fb6a) list_form_graphic_pane_t1_ParamLimits

0x0ba0,	// (0x0002fb6a) list_form_graphic_pane_t1

0x370b,	// (0x000326d5) list_highlight_pane_cp5_ParamLimits

0x370b,	// (0x000326d5) list_highlight_pane_cp5

0xbd2e,	// (0x0003acf8) find_pane_g1

0x4008,	// (0x00032fd2) input_find_pane

0xbd37,	// (0x0003ad01) input_find_pane_g1_ParamLimits

0xbd37,	// (0x0003ad01) input_find_pane_g1

0xbd43,	// (0x0003ad0d) input_find_pane_t1_ParamLimits

0xbd43,	// (0x0003ad0d) input_find_pane_t1

0xbd58,	// (0x0003ad22) input_find_pane_t2_ParamLimits

0xbd58,	// (0x0003ad22) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003e66b) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003e66b) input_find_pane_t

0x4011,	// (0x00032fdb) input_focus_pane_cp5_ParamLimits

0x4011,	// (0x00032fdb) input_focus_pane_cp5

0x402b,	// (0x00032ff5) bg_popup_window_pane_cp2_ParamLimits

0x402b,	// (0x00032ff5) bg_popup_window_pane_cp2

0x4038,	// (0x00033002) listscroll_menu_pane_ParamLimits

0x4038,	// (0x00033002) listscroll_menu_pane

0xd367,	// (0x0003c331) popup_submenu_window_ParamLimits

0xd367,	// (0x0003c331) popup_submenu_window

0x406c,	// (0x00033036) find_popup_pane_g1

0x4074,	// (0x0003303e) input_popup_find_pane_cp

0x4011,	// (0x00032fdb) input_focus_pane_cp4_ParamLimits

0x4011,	// (0x00032fdb) input_focus_pane_cp4

0x408c,	// (0x00033056) input_popup_find_pane_t1_ParamLimits

0x408c,	// (0x00033056) input_popup_find_pane_t1

0x2dba,	// (0x00031d84) bg_popup_sub_pane_cp

0x40ba,	// (0x00033084) listscroll_popup_sub_pane

0x40c2,	// (0x0003308c) list_submenu_pane_ParamLimits

0x40c2,	// (0x0003308c) list_submenu_pane

0x40d3,	// (0x0003309d) scroll_pane_cp4

0x40db,	// (0x000330a5) list_single_popup_submenu_pane_ParamLimits

0x40db,	// (0x000330a5) list_single_popup_submenu_pane

0x40ef,	// (0x000330b9) list_single_popup_submenu_pane_g1

0x40f7,	// (0x000330c1) list_single_popup_submenu_pane_t1_ParamLimits

0x40f7,	// (0x000330c1) list_single_popup_submenu_pane_t1

0x3986,	// (0x00032950) bg_active_tab_pane_cp1_ParamLimits

0x3986,	// (0x00032950) bg_active_tab_pane_cp1

0xd39d,	// (0x0003c367) tabs_2_active_pane_g1

0xd3a5,	// (0x0003c36f) tabs_2_active_pane_t1

0x3986,	// (0x00032950) bg_passive_tab_pane_cp1_ParamLimits

0x3986,	// (0x00032950) bg_passive_tab_pane_cp1

0xd39d,	// (0x0003c367) tabs_2_passive_pane_g1

0xd3a5,	// (0x0003c36f) tabs_2_passive_pane_t1

0x370b,	// (0x000326d5) bg_active_tab_pane_cp4

0xd3b7,	// (0x0003c381) tabs_2_long_active_pane_t1

0x4f0b,	// (0x00033ed5) bg_passive_tab_pane_cp4

0x1898,	// (0x00030862) list_single_midp_graphic_pane_g4_ParamLimits

0x370b,	// (0x000326d5) bg_active_tab_pane_cp5

0xd3ca,	// (0x0003c394) tabs_3_long_active_pane_t1

0x4f0b,	// (0x00033ed5) bg_passive_tab_pane_cp5

0x1898,	// (0x00030862) list_single_midp_graphic_pane_g4

0x370b,	// (0x000326d5) bg_popup_window_pane_cp13_ParamLimits

0x370b,	// (0x000326d5) bg_popup_window_pane_cp13

0x416e,	// (0x00033138) listscroll_popup_fast_pane_ParamLimits

0x416e,	// (0x00033138) listscroll_popup_fast_pane

0x417a,	// (0x00033144) grid_popup_fast_pane_ParamLimits

0x417a,	// (0x00033144) grid_popup_fast_pane

0x418c,	// (0x00033156) scroll_pane_cp9_ParamLimits

0x418c,	// (0x00033156) scroll_pane_cp9

0x81e6,	// (0x000371b0) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x81e6,	// (0x000371b0) list_single_graphic_hl_pane_t1_cp2

0x41b0,	// (0x0003317a) input_focus_pane_cp20_ParamLimits

0x41b0,	// (0x0003317a) input_focus_pane_cp20

0x41be,	// (0x00033188) query_popup_data_pane_t1_ParamLimits

0x41be,	// (0x00033188) query_popup_data_pane_t1

0x41d1,	// (0x0003319b) query_popup_data_pane_t2_ParamLimits

0x41d1,	// (0x0003319b) query_popup_data_pane_t2

0x4217,	// (0x000331e1) query_popup_data_pane_t3_ParamLimits

0x4217,	// (0x000331e1) query_popup_data_pane_t3

0x4258,	// (0x00033222) query_popup_data_pane_t4_ParamLimits

0x4258,	// (0x00033222) query_popup_data_pane_t4

0x4294,	// (0x0003325e) query_popup_data_pane_t5_ParamLimits

0x4294,	// (0x0003325e) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003e670) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003e670) query_popup_data_pane_t

0x3fc0,	// (0x00032f8a) bg_set_opt_pane_g1

0x3fc8,	// (0x00032f92) bg_set_opt_pane_g2

0x3fd0,	// (0x00032f9a) bg_set_opt_pane_g3

0x3fd8,	// (0x00032fa2) bg_set_opt_pane_g4

0x3fe0,	// (0x00032faa) bg_set_opt_pane_g5

0x3fe8,	// (0x00032fb2) bg_set_opt_pane_g6

0x3ff0,	// (0x00032fba) bg_set_opt_pane_g7

0x3ff8,	// (0x00032fc2) bg_set_opt_pane_g8

0x4000,	// (0x00032fca) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003e67b) bg_set_opt_pane_g

0x0f16,	// (0x0002fee0) control_top_pane_stacon_ParamLimits

0x0f16,	// (0x0002fee0) control_top_pane_stacon

0x0f69,	// (0x0002ff33) signal_pane_stacon_ParamLimits

0x0f69,	// (0x0002ff33) signal_pane_stacon

0x4856,	// (0x00033820) stacon_top_pane_g1_ParamLimits

0x4856,	// (0x00033820) stacon_top_pane_g1

0x0f8e,	// (0x0002ff58) title_pane_stacon_ParamLimits

0x0f8e,	// (0x0002ff58) title_pane_stacon

0x0fb8,	// (0x0002ff82) uni_indicator_pane_stacon_ParamLimits

0x0fb8,	// (0x0002ff82) uni_indicator_pane_stacon

0x0fcd,	// (0x0002ff97) battery_pane_stacon_ParamLimits

0x0fcd,	// (0x0002ff97) battery_pane_stacon

0x1011,	// (0x0002ffdb) control_bottom_pane_stacon_ParamLimits

0x1011,	// (0x0002ffdb) control_bottom_pane_stacon

0x1034,	// (0x0002fffe) navi_pane_stacon_ParamLimits

0x1034,	// (0x0002fffe) navi_pane_stacon

0x4878,	// (0x00033842) stacon_bottom_pane_g1_ParamLimits

0x4878,	// (0x00033842) stacon_bottom_pane_g1

0x0bf4,	// (0x0002fbbe) aid_levels_signal_lsc_ParamLimits

0x0bf4,	// (0x0002fbbe) aid_levels_signal_lsc

0x0c0b,	// (0x0002fbd5) signal_pane_stacon_g1_ParamLimits

0x0c0b,	// (0x0002fbd5) signal_pane_stacon_g1

0x0c1f,	// (0x0002fbe9) signal_pane_stacon_g2_ParamLimits

0x0c1f,	// (0x0002fbe9) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003e68e) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003e68e) signal_pane_stacon_g

0x0c54,	// (0x0002fc1e) title_pane_stacon_t1_ParamLimits

0x0c54,	// (0x0002fc1e) title_pane_stacon_t1

0x42d8,	// (0x000332a2) uni_indicator_pane_stacon_g1

0x42e2,	// (0x000332ac) uni_indicator_pane_stacon_g2

0x42ec,	// (0x000332b6) uni_indicator_pane_stacon_g3

0x42f6,	// (0x000332c0) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003e69a) uni_indicator_pane_stacon_g

0x0c79,	// (0x0002fc43) control_top_pane_stacon_g1

0x0c81,	// (0x0002fc4b) control_top_pane_stacon_t1_ParamLimits

0x0c81,	// (0x0002fc4b) control_top_pane_stacon_t1

0x0cb8,	// (0x0002fc82) aid_levels_battery_lsc_ParamLimits

0x0cb8,	// (0x0002fc82) aid_levels_battery_lsc

0x0cd0,	// (0x0002fc9a) battery_pane_stacon_g1_ParamLimits

0x0cd0,	// (0x0002fc9a) battery_pane_stacon_g1

0x0ce3,	// (0x0002fcad) battery_pane_stacon_g2_ParamLimits

0x0ce3,	// (0x0002fcad) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003e6a3) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003e6a3) battery_pane_stacon_g

0x0d21,	// (0x0002fceb) navi_icon_pane_stacon

0x0d35,	// (0x0002fcff) navi_navi_pane_stacon

0x0d21,	// (0x0002fceb) navi_text_pane_stacon

0x0c79,	// (0x0002fc43) control_bottom_pane_stacon_g1

0x0d49,	// (0x0002fd13) control_bottom_pane_stacon_t1_ParamLimits

0x0d49,	// (0x0002fd13) control_bottom_pane_stacon_t1

0xd3dc,	// (0x0003c3a6) grid_app_pane_ParamLimits

0xd3dc,	// (0x0003c3a6) grid_app_pane

0xd412,	// (0x0003c3dc) scroll_pane_cp15_ParamLimits

0xd412,	// (0x0003c3dc) scroll_pane_cp15

0xd427,	// (0x0003c3f1) cell_app_pane_ParamLimits

0xd427,	// (0x0003c3f1) cell_app_pane

0xd46e,	// (0x0003c438) cell_app_pane_g1_ParamLimits

0xd46e,	// (0x0003c438) cell_app_pane_g1

0x4399,	// (0x00033363) cell_app_pane_g2_ParamLimits

0x4399,	// (0x00033363) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003e6a8) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003e6a8) cell_app_pane_g

0xd492,	// (0x0003c45c) cell_app_pane_t1_ParamLimits

0xd492,	// (0x0003c45c) cell_app_pane_t1

0x43bc,	// (0x00033386) grid_highlight_pane_ParamLimits

0x43bc,	// (0x00033386) grid_highlight_pane

0x3fc0,	// (0x00032f8a) cell_highlight_pane_g1

0x3fc8,	// (0x00032f92) cell_highlight_pane_g2

0x3fd0,	// (0x00032f9a) cell_highlight_pane_g3

0x3fd8,	// (0x00032fa2) cell_highlight_pane_g4

0x3fe0,	// (0x00032faa) cell_highlight_pane_g5

0x3fe8,	// (0x00032fb2) cell_highlight_pane_g6

0x3ff0,	// (0x00032fba) cell_highlight_pane_g7

0x3ff8,	// (0x00032fc2) cell_highlight_pane_g8

0x4000,	// (0x00032fca) cell_highlight_pane_g9

0x2db0,	// (0x00031d7a) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003e656) cell_highlight_pane_g

0x43cd,	// (0x00033397) bg_scroll_pane

0x0d93,	// (0x0002fd5d) scroll_handle_pane

0x4414,	// (0x000333de) scroll_bg_pane_g1

0x4429,	// (0x000333f3) scroll_bg_pane_g2

0x4441,	// (0x0003340b) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003e6ad) scroll_bg_pane_g

0x4456,	// (0x00033420) scroll_handle_focus_pane_ParamLimits

0x4456,	// (0x00033420) scroll_handle_focus_pane

0x4414,	// (0x000333de) scroll_handle_pane_g1

0x4463,	// (0x0003342d) scroll_handle_pane_g2

0x4441,	// (0x0003340b) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003e6b4) scroll_handle_pane_g

0x4011,	// (0x00032fdb) bg_popup_sub_pane_cp21_ParamLimits

0x4011,	// (0x00032fdb) bg_popup_sub_pane_cp21

0x4477,	// (0x00033441) popup_fep_japan_predictive_window_t1_ParamLimits

0x4477,	// (0x00033441) popup_fep_japan_predictive_window_t1

0x4491,	// (0x0003345b) popup_fep_japan_predictive_window_t2_ParamLimits

0x4491,	// (0x0003345b) popup_fep_japan_predictive_window_t2

0x44c4,	// (0x0003348e) popup_fep_japan_predictive_window_t3_ParamLimits

0x44c4,	// (0x0003348e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003e6bb) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003e6bb) popup_fep_japan_predictive_window_t

0x2dba,	// (0x00031d84) bg_popup_sub_pane_cp23

0x44fb,	// (0x000334c5) listscroll_japin_cand_pane

0x4503,	// (0x000334cd) popup_fep_japan_candidate_window_t1

0x4511,	// (0x000334db) candidate_pane_ParamLimits

0x4511,	// (0x000334db) candidate_pane

0x4523,	// (0x000334ed) scroll_pane_cp30

0x452b,	// (0x000334f5) list_single_popup_jap_candidate_pane_ParamLimits

0x452b,	// (0x000334f5) list_single_popup_jap_candidate_pane

0x2dba,	// (0x00031d84) list_highlight_pane_cp30

0x453f,	// (0x00033509) list_single_popup_jap_candidate_pane_t1

0x454e,	// (0x00033518) level_1_signal

0x455b,	// (0x00033525) level_2_signal

0x4568,	// (0x00033532) level_3_signal

0x4575,	// (0x0003353f) level_4_signal

0x4582,	// (0x0003354c) level_5_signal

0x458f,	// (0x00033559) level_6_signal

0x459c,	// (0x00033566) level_7_signal

0x454e,	// (0x00033518) level_1_battery

0x455b,	// (0x00033525) level_2_battery

0x4568,	// (0x00033532) level_3_battery

0x4575,	// (0x0003353f) level_4_battery

0x4582,	// (0x0003354c) level_5_battery

0x458f,	// (0x00033559) level_6_battery

0x459c,	// (0x00033566) level_7_battery

0x45c1,	// (0x0003358b) list_menu_pane_ParamLimits

0x45c1,	// (0x0003358b) list_menu_pane

0x45d7,	// (0x000335a1) scroll_pane_cp25_ParamLimits

0x45d7,	// (0x000335a1) scroll_pane_cp25

0x45f0,	// (0x000335ba) list_double2_graphic_pane_cp2_ParamLimits

0x45f0,	// (0x000335ba) list_double2_graphic_pane_cp2

0x45f0,	// (0x000335ba) list_double2_large_graphic_pane_cp2_ParamLimits

0x45f0,	// (0x000335ba) list_double2_large_graphic_pane_cp2

0x45f0,	// (0x000335ba) list_double2_pane_cp2_ParamLimits

0x45f0,	// (0x000335ba) list_double2_pane_cp2

0x45f0,	// (0x000335ba) list_double_graphic_pane_cp2_ParamLimits

0x45f0,	// (0x000335ba) list_double_graphic_pane_cp2

0x45f0,	// (0x000335ba) list_double_large_graphic_pane_cp2_ParamLimits

0x45f0,	// (0x000335ba) list_double_large_graphic_pane_cp2

0x45f0,	// (0x000335ba) list_double_number_pane_cp2_ParamLimits

0x45f0,	// (0x000335ba) list_double_number_pane_cp2

0x45f0,	// (0x000335ba) list_double_pane_cp2_ParamLimits

0x45f0,	// (0x000335ba) list_double_pane_cp2

0xd4ba,	// (0x0003c484) list_single_2graphic_pane_cp2_ParamLimits

0xd4ba,	// (0x0003c484) list_single_2graphic_pane_cp2

0xd4ba,	// (0x0003c484) list_single_graphic_heading_pane_cp2_ParamLimits

0xd4ba,	// (0x0003c484) list_single_graphic_heading_pane_cp2

0xd4ba,	// (0x0003c484) list_single_graphic_pane_cp2_ParamLimits

0xd4ba,	// (0x0003c484) list_single_graphic_pane_cp2

0xd4ba,	// (0x0003c484) list_single_heading_pane_cp2_ParamLimits

0xd4ba,	// (0x0003c484) list_single_heading_pane_cp2

0x462a,	// (0x000335f4) list_single_large_graphic_pane_cp2_ParamLimits

0x462a,	// (0x000335f4) list_single_large_graphic_pane_cp2

0xd4ba,	// (0x0003c484) list_single_number_heading_pane_cp2_ParamLimits

0xd4ba,	// (0x0003c484) list_single_number_heading_pane_cp2

0xd4ba,	// (0x0003c484) list_single_number_pane_cp2_ParamLimits

0xd4ba,	// (0x0003c484) list_single_number_pane_cp2

0xd4ba,	// (0x0003c484) list_single_pane_cp2_ParamLimits

0xd4ba,	// (0x0003c484) list_single_pane_cp2

0x46a5,	// (0x0003366f) bg_popup_sub_pane_cp22

0x0e42,	// (0x0002fe0c) popup_side_volume_key_window_g1

0x0e66,	// (0x0002fe30) popup_side_volume_key_window_t1

0x0e82,	// (0x0002fe4c) volume_small_pane_cp1

0x3986,	// (0x00032950) bg_popup_sub_pane_cp24_ParamLimits

0x3986,	// (0x00032950) bg_popup_sub_pane_cp24

0x46bb,	// (0x00033685) fep_china_uni_candidate_pane_ParamLimits

0x46bb,	// (0x00033685) fep_china_uni_candidate_pane

0x46cf,	// (0x00033699) fep_china_uni_entry_pane

0x46df,	// (0x000336a9) popup_fep_china_uni_window_g1

0x46fb,	// (0x000336c5) fep_china_uni_entry_pane_g1

0x4703,	// (0x000336cd) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003e6ec) fep_china_uni_entry_pane_g

0x470b,	// (0x000336d5) fep_entry_item_pane

0x4715,	// (0x000336df) fep_candidate_item_pane

0x471d,	// (0x000336e7) fep_china_uni_candidate_pane_g1

0x4725,	// (0x000336ef) fep_china_uni_candidate_pane_g2

0x472d,	// (0x000336f7) fep_china_uni_candidate_pane_g3

0x4735,	// (0x000336ff) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003e6f1) fep_china_uni_candidate_pane_g

0x2db0,	// (0x00031d7a) fep_entry_item_pane_g1

0x473d,	// (0x00033707) fep_entry_item_pane_t1_ParamLimits

0x473d,	// (0x00033707) fep_entry_item_pane_t1

0x4753,	// (0x0003371d) fep_candidate_item_pane_t1_ParamLimits

0x4753,	// (0x0003371d) fep_candidate_item_pane_t1

0x4768,	// (0x00033732) fep_candidate_item_pane_t2_ParamLimits

0x4768,	// (0x00033732) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003e6fa) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003e6fa) fep_candidate_item_pane_t

0x370b,	// (0x000326d5) list_highlight_pane_cp31_ParamLimits

0x370b,	// (0x000326d5) list_highlight_pane_cp31

0x477a,	// (0x00033744) level_1_signal_lsc

0x4783,	// (0x0003374d) level_2_signal_lsc

0x478c,	// (0x00033756) level_3_signal_lsc

0x4795,	// (0x0003375f) level_4_signal_lsc

0x479e,	// (0x00033768) level_5_signal_lsc

0x47a7,	// (0x00033771) level_6_signal_lsc

0x47b0,	// (0x0003377a) level_7_signal_lsc

0x47b0,	// (0x0003377a) level_1_battery_lsc

0x47b9,	// (0x00033783) level_2_battery_lsc

0x47c2,	// (0x0003378c) level_3_battery_lsc

0x47cb,	// (0x00033795) level_4_battery_lsc

0x47d4,	// (0x0003379e) level_5_battery_lsc

0x47dd,	// (0x000337a7) level_6_battery_lsc

0x477a,	// (0x00033744) level_7_battery_lsc

0x47e6,	// (0x000337b0) scroll_handle_focus_pane_g1

0x47ef,	// (0x000337b9) scroll_handle_focus_pane_g2

0x47f8,	// (0x000337c2) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003e6ff) scroll_handle_focus_pane_g

0xbd6d,	// (0x0003ad37) list_single_2graphic_pane_g1_ParamLimits

0xbd6d,	// (0x0003ad37) list_single_2graphic_pane_g1

0xb8a7,	// (0x0003a871) list_single_2graphic_pane_g2_ParamLimits

0xb8a7,	// (0x0003a871) list_single_2graphic_pane_g2

0x05ee,	// (0x0002f5b8) list_single_2graphic_pane_g3_ParamLimits

0x05ee,	// (0x0002f5b8) list_single_2graphic_pane_g3

0xbd79,	// (0x0003ad43) list_single_2graphic_pane_g4_ParamLimits

0xbd79,	// (0x0003ad43) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003e706) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003e706) list_single_2graphic_pane_g

0xbd85,	// (0x0003ad4f) list_single_2graphic_pane_t1_ParamLimits

0xbd85,	// (0x0003ad4f) list_single_2graphic_pane_t1

0xbdb3,	// (0x0003ad7d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbdb3,	// (0x0003ad7d) list_double2_graphic_large_graphic_pane_g1

0xb8f0,	// (0x0003a8ba) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb8f0,	// (0x0003a8ba) list_double2_graphic_large_graphic_pane_g2

0x082e,	// (0x0002f7f8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x082e,	// (0x0002f7f8) list_double2_graphic_large_graphic_pane_g3

0xbdc5,	// (0x0003ad8f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbdc5,	// (0x0003ad8f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003e70f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003e70f) list_double2_graphic_large_graphic_pane_g

0xbdd1,	// (0x0003ad9b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbdd1,	// (0x0003ad9b) list_double2_graphic_large_graphic_pane_t1

0xbde7,	// (0x0003adb1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbde7,	// (0x0003adb1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003e718) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003e718) list_double2_graphic_large_graphic_pane_t

0x493f,	// (0x00033909) popup_fast_swap_window_ParamLimits

0x493f,	// (0x00033909) popup_fast_swap_window

0x495b,	// (0x00033925) popup_side_volume_key_window

0x4975,	// (0x0003393f) stacon_top_pane

0x497f,	// (0x00033949) status_pane_ParamLimits

0x497f,	// (0x00033949) status_pane

0xd5af,	// (0x0003c579) status_small_pane

0x2dba,	// (0x00031d84) control_pane

0x2dba,	// (0x00031d84) stacon_bottom_pane

0x3f48,	// (0x00032f12) scroll_pane_cp121

0x3f3f,	// (0x00032f09) set_content_pane

0xd547,	// (0x0003c511) bg_active_tab_pane_g1_cp1

0x480a,	// (0x000337d4) bg_active_tab_pane_g2_cp1

0xd550,	// (0x0003c51a) bg_active_tab_pane_g3_cp1

0xd547,	// (0x0003c511) bg_passive_tab_pane_g1_cp1

0x480a,	// (0x000337d4) bg_passive_tab_pane_g2_cp1

0xd550,	// (0x0003c51a) bg_passive_tab_pane_g3_cp1

0xd559,	// (0x0003c523) bg_active_tab_pane_g1_cp2

0x480a,	// (0x000337d4) bg_active_tab_pane_g2_cp2

0xd562,	// (0x0003c52c) bg_active_tab_pane_g3_cp2

0xd559,	// (0x0003c523) bg_passive_tab_pane_g1_cp2

0x480a,	// (0x000337d4) bg_passive_tab_pane_g2_cp2

0xd562,	// (0x0003c52c) bg_passive_tab_pane_g3_cp2

0x482e,	// (0x000337f8) bg_active_tab_pane_g1_cp3

0x480a,	// (0x000337d4) bg_active_tab_pane_g2_cp3

0x4837,	// (0x00033801) bg_active_tab_pane_g3_cp3

0x482e,	// (0x000337f8) bg_passive_tab_pane_g1_cp3

0x480a,	// (0x000337d4) bg_passive_tab_pane_g2_cp3

0x4837,	// (0x00033801) bg_passive_tab_pane_g3_cp3

0xd56b,	// (0x0003c535) bg_active_tab_pane_g1_cp4

0x480a,	// (0x000337d4) bg_active_tab_pane_g2_cp4

0xd576,	// (0x0003c540) bg_active_tab_pane_g3_cp4

0xd56b,	// (0x0003c535) bg_passive_tab_pane_g1_cp4

0x480a,	// (0x000337d4) bg_passive_tab_pane_g2_cp4

0xd576,	// (0x0003c540) bg_passive_tab_pane_g3_cp4

0x4894,	// (0x0003385e) bg_active_tab_pane_g1_cp5

0x480a,	// (0x000337d4) bg_active_tab_pane_g2_cp5

0x489d,	// (0x00033867) bg_active_tab_pane_g3_cp5

0x4894,	// (0x0003385e) bg_passive_tab_pane_g1_cp5

0x480a,	// (0x000337d4) bg_passive_tab_pane_g2_cp5

0x489d,	// (0x00033867) bg_passive_tab_pane_g3_cp5

0x6ece,	// (0x00035e98) list_set_graphic_pane_ParamLimits

0x6ece,	// (0x00035e98) list_set_graphic_pane

0x2dba,	// (0x00031d84) bg_set_opt_pane_cp4

0xd581,	// (0x0003c54b) list_set_graphic_pane_g1_ParamLimits

0xd581,	// (0x0003c54b) list_set_graphic_pane_g1

0xd58d,	// (0x0003c557) list_set_graphic_pane_g2_ParamLimits

0xd58d,	// (0x0003c557) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003e71d) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003e71d) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x0003eaa2) volume_small_pane_cp_g

0x48f2,	// (0x000338bc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x48f2,	// (0x000338bc) list_double2_large_graphic_pane_g1_cp2

0x48fe,	// (0x000338c8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x48fe,	// (0x000338c8) list_double2_large_graphic_pane_g2_cp2

0x490f,	// (0x000338d9) list_double2_large_graphic_pane_g3_cp2

0x4917,	// (0x000338e1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4917,	// (0x000338e1) list_double2_large_graphic_pane_t1_cp2

0x492d,	// (0x000338f7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x492d,	// (0x000338f7) list_double2_large_graphic_pane_t2_cp2

0x64fe,	// (0x000354c8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x64fe,	// (0x000354c8) list_double_large_graphic_pane_g1_cp2

0x650f,	// (0x000354d9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x650f,	// (0x000354d9) list_double_large_graphic_pane_g2_cp2

0x4abe,	// (0x00033a88) list_double_large_graphic_pane_g3_cp2

0x6520,	// (0x000354ea) list_double_large_graphic_pane_g4_cp

0x6528,	// (0x000354f2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6528,	// (0x000354f2) list_double_large_graphic_pane_t1_cp2

0x653f,	// (0x00035509) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x653f,	// (0x00035509) list_double_large_graphic_pane_t2_cp2

0x4998,	// (0x00033962) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4998,	// (0x00033962) list_double2_graphic_pane_g1_cp2

0x49a6,	// (0x00033970) list_double2_graphic_pane_g2_cp2_ParamLimits

0x49a6,	// (0x00033970) list_double2_graphic_pane_g2_cp2

0x49b7,	// (0x00033981) list_double2_graphic_pane_g3_cp2

0x49c1,	// (0x0003398b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x49c1,	// (0x0003398b) list_double2_graphic_pane_t1_cp2

0x49d7,	// (0x000339a1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x49d7,	// (0x000339a1) list_double2_graphic_pane_t2_cp2

0x49e9,	// (0x000339b3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x49e9,	// (0x000339b3) list_single_number_heading_pane_g1_cp2

0x4a0d,	// (0x000339d7) list_single_number_heading_pane_g2_cp2

0x4a15,	// (0x000339df) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4a15,	// (0x000339df) list_single_number_heading_pane_t1_cp2

0x4a2b,	// (0x000339f5) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4a2b,	// (0x000339f5) list_single_number_heading_pane_t2_cp2

0x4a3d,	// (0x00033a07) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4a3d,	// (0x00033a07) list_single_number_heading_pane_t3_cp2

0x49e9,	// (0x000339b3) list_single_heading_pane_g1_cp2_ParamLimits

0x49e9,	// (0x000339b3) list_single_heading_pane_g1_cp2

0x4a0d,	// (0x000339d7) list_single_heading_pane_g2_cp2

0x4a15,	// (0x000339df) list_single_heading_pane_t1_cp2_ParamLimits

0x4a15,	// (0x000339df) list_single_heading_pane_t1_cp2

0x6308,	// (0x000352d2) list_single_heading_pane_t2_cp2_ParamLimits

0x6308,	// (0x000352d2) list_single_heading_pane_t2_cp2

0x6250,	// (0x0003521a) list_double_graphic_pane_g1_cp2_ParamLimits

0x6250,	// (0x0003521a) list_double_graphic_pane_g1_cp2

0x625c,	// (0x00035226) list_double_graphic_pane_g2_cp2_ParamLimits

0x625c,	// (0x00035226) list_double_graphic_pane_g2_cp2

0x626b,	// (0x00035235) list_double_graphic_pane_g3_cp2

0x6273,	// (0x0003523d) list_double_graphic_pane_t1_cp2_ParamLimits

0x6273,	// (0x0003523d) list_double_graphic_pane_t1_cp2

0x6289,	// (0x00035253) list_double_graphic_pane_t2_cp2_ParamLimits

0x6289,	// (0x00035253) list_double_graphic_pane_t2_cp2

0x4ab2,	// (0x00033a7c) list_double_number_pane_g1_cp2_ParamLimits

0x4ab2,	// (0x00033a7c) list_double_number_pane_g1_cp2

0x4abe,	// (0x00033a88) list_double_number_pane_g2_cp2

0x6214,	// (0x000351de) list_double_number_pane_t1_cp2_ParamLimits

0x6214,	// (0x000351de) list_double_number_pane_t1_cp2

0x6228,	// (0x000351f2) list_double_number_pane_t2_cp2_ParamLimits

0x6228,	// (0x000351f2) list_double_number_pane_t2_cp2

0x623e,	// (0x00035208) list_double_number_pane_t3_cp2_ParamLimits

0x623e,	// (0x00035208) list_double_number_pane_t3_cp2

0x60fd,	// (0x000350c7) list_single_graphic_pane_g1_cp2_ParamLimits

0x60fd,	// (0x000350c7) list_single_graphic_pane_g1_cp2

0x49f5,	// (0x000339bf) list_single_graphic_pane_g2_cp2_ParamLimits

0x49f5,	// (0x000339bf) list_single_graphic_pane_g2_cp2

0x4b16,	// (0x00033ae0) list_single_graphic_pane_g3_cp2

0x60d3,	// (0x0003509d) list_single_graphic_pane_t1_cp2_ParamLimits

0x60d3,	// (0x0003509d) list_single_graphic_pane_t1_cp2

0x49f5,	// (0x000339bf) list_single_number_pane_g1_cp2_ParamLimits

0x49f5,	// (0x000339bf) list_single_number_pane_g1_cp2

0x4b16,	// (0x00033ae0) list_single_number_pane_g2_cp2

0x60d3,	// (0x0003509d) list_single_number_pane_t1_cp2_ParamLimits

0x60d3,	// (0x0003509d) list_single_number_pane_t1_cp2

0x60e9,	// (0x000350b3) list_single_number_pane_t2_cp2_ParamLimits

0x60e9,	// (0x000350b3) list_single_number_pane_t2_cp2

0x48fe,	// (0x000338c8) list_double2_pane_g1_cp2_ParamLimits

0x48fe,	// (0x000338c8) list_double2_pane_g1_cp2

0x490f,	// (0x000338d9) list_double2_pane_g2_cp2

0x4a8a,	// (0x00033a54) list_double2_pane_t1_cp2_ParamLimits

0x4a8a,	// (0x00033a54) list_double2_pane_t1_cp2

0x4aa0,	// (0x00033a6a) list_double2_pane_t2_cp2_ParamLimits

0x4aa0,	// (0x00033a6a) list_double2_pane_t2_cp2

0x4ab2,	// (0x00033a7c) list_double_pane_g1_cp2_ParamLimits

0x4ab2,	// (0x00033a7c) list_double_pane_g1_cp2

0x4abe,	// (0x00033a88) list_double_pane_g2_cp2

0x4ac6,	// (0x00033a90) list_double_pane_t1_cp2_ParamLimits

0x4ac6,	// (0x00033a90) list_double_pane_t1_cp2

0x4adc,	// (0x00033aa6) list_double_pane_t2_cp2_ParamLimits

0x4adc,	// (0x00033aa6) list_double_pane_t2_cp2

0x4b06,	// (0x00033ad0) list_single_pane_cp2_g3

0x49f5,	// (0x000339bf) list_single_pane_g1_cp2_ParamLimits

0x49f5,	// (0x000339bf) list_single_pane_g1_cp2

0x4b16,	// (0x00033ae0) list_single_pane_g2_cp2

0x4b1e,	// (0x00033ae8) list_single_pane_t1_cp2_ParamLimits

0x4b1e,	// (0x00033ae8) list_single_pane_t1_cp2

0x4b36,	// (0x00033b00) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4b36,	// (0x00033b00) list_single_large_graphic_pane_g1_cp2

0x4b42,	// (0x00033b0c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4b42,	// (0x00033b0c) list_single_large_graphic_pane_g2_cp2

0x4b4e,	// (0x00033b18) list_single_large_graphic_pane_g3_cp2

0x4b56,	// (0x00033b20) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4b56,	// (0x00033b20) list_single_large_graphic_pane_g4_cp1

0x4b70,	// (0x00033b3a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4b70,	// (0x00033b3a) list_single_large_graphic_pane_t1_cp2

0x609f,	// (0x00035069) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x609f,	// (0x00035069) list_single_graphic_heading_pane_g1_cp2

0x606c,	// (0x00035036) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x606c,	// (0x00035036) list_single_graphic_heading_pane_g4_cp2

0x4b16,	// (0x00033ae0) list_single_graphic_heading_pane_g5_cp2

0x60ab,	// (0x00035075) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x60ab,	// (0x00035075) list_single_graphic_heading_pane_t1_cp2

0x60c1,	// (0x0003508b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x60c1,	// (0x0003508b) list_single_graphic_heading_pane_t2_cp2

0x6060,	// (0x0003502a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6060,	// (0x0003502a) list_single_2graphic_pane_g1_cp2

0x606c,	// (0x00035036) list_single_2graphic_pane_g2_cp2_ParamLimits

0x606c,	// (0x00035036) list_single_2graphic_pane_g2_cp2

0x4b16,	// (0x00033ae0) list_single_2graphic_pane_g3_cp2

0x607d,	// (0x00035047) list_single_2graphic_pane_g4_cp2_ParamLimits

0x607d,	// (0x00035047) list_single_2graphic_pane_g4_cp2

0x6089,	// (0x00035053) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6089,	// (0x00035053) list_single_2graphic_pane_t1_cp2

0x2db0,	// (0x00031d7a) list_highlight_pane_g10_cp1

0x5c38,	// (0x00034c02) list_highlight_pane_g1_cp1

0x5c40,	// (0x00034c0a) list_highlight_pane_g2_cp1

0x5c48,	// (0x00034c12) list_highlight_pane_g3_cp1

0x5c50,	// (0x00034c1a) list_highlight_pane_g4_cp1

0x5c58,	// (0x00034c22) list_highlight_pane_g5_cp1

0x5c60,	// (0x00034c2a) list_highlight_pane_g6_cp1

0x5c68,	// (0x00034c32) list_highlight_pane_g7_cp1

0x5c70,	// (0x00034c3a) list_highlight_pane_g8_cp1

0x5c78,	// (0x00034c42) list_highlight_pane_g9_cp1

0xdbff,	// (0x0003cbc9) form_field_slider_pane_t3

0xdc0f,	// (0x0003cbd9) form_field_slider_pane_t4

0x5b6c,	// (0x00034b36) slider_form_pane_ParamLimits

0x5b6c,	// (0x00034b36) slider_form_pane

0x2dba,	// (0x00031d84) control_abbreviations

0x2dba,	// (0x00031d84) control_conventions

0x2dba,	// (0x00031d84) control_definitions

0x2dba,	// (0x00031d84) format_table_attribute

0x6352,	// (0x0003531c) bg_popup_preview_window_pane_g9

0x2dba,	// (0x00031d84) format_table_data2

0x2dba,	// (0x00031d84) format_table_data3

0x2dba,	// (0x00031d84) format_table_data_example

0x0008,

0x2dba,	// (0x00031d84) intro_purpose

0xf8ea,	// (0x0003e8b4) bg_popup_preview_window_pane_g

0x2dba,	// (0x00031d84) texts_category

0x2dba,	// (0x00031d84) texts_graphics

0x4b86,	// (0x00033b50) text_digital

0x4b95,	// (0x00033b5f) text_primary

0x4ba4,	// (0x00033b6e) text_primary_small

0x4bb3,	// (0x00033b7d) text_secondary

0x4bc2,	// (0x00033b8c) text_title

0x6a21,	// (0x000359eb) bg_passive_tab_pane_g1_cp3_srt

0x480a,	// (0x000337d4) bg_passive_tab_pane_g2_cp3_srt

0x6a2a,	// (0x000359f4) bg_passive_tab_pane_g3_cp3_srt

0x3986,	// (0x00032950) bg_active_tab_pane_cp3_srt_ParamLimits

0x3986,	// (0x00032950) bg_active_tab_pane_cp3_srt

0x6a33,	// (0x000359fd) tabs_4_active_pane_srt_g1

0xdf4c,	// (0x0003cf16) tabs_4_active_pane_srt_t1_ParamLimits

0xdf4c,	// (0x0003cf16) tabs_4_active_pane_srt_t1

0x6a21,	// (0x000359eb) bg_active_tab_pane_g1_cp3_copy1

0x480a,	// (0x000337d4) bg_active_tab_pane_g2_cp3_copy1

0x6a2a,	// (0x000359f4) bg_active_tab_pane_g3_cp3_copy1

0x370b,	// (0x000326d5) tabs_2_long_active_pane_srt_ParamLimits

0x370b,	// (0x000326d5) tabs_2_long_active_pane_srt

0x370b,	// (0x000326d5) tabs_2_long_passive_pane_srt_ParamLimits

0x370b,	// (0x000326d5) tabs_2_long_passive_pane_srt

0x4f0b,	// (0x00033ed5) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4f0b,	// (0x00033ed5) bg_passive_tab_pane_cp4_srt

0x6781,	// (0x0003574b) bg_passive_tab_pane_g1_cp4_srt

0x480a,	// (0x000337d4) bg_passive_tab_pane_g2_cp4_srt

0x678a,	// (0x00035754) bg_passive_tab_pane_g3_cp4_srt

0x370b,	// (0x000326d5) bg_active_tab_pane_cp4_srt_ParamLimits

0x370b,	// (0x000326d5) bg_active_tab_pane_cp4_srt

0xdd79,	// (0x0003cd43) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdd79,	// (0x0003cd43) tabs_2_long_active_pane_srt_t1

0x6781,	// (0x0003574b) bg_active_tab_pane_g1_cp4_srt

0x480a,	// (0x000337d4) bg_active_tab_pane_g2_cp4_srt

0x678a,	// (0x00035754) bg_active_tab_pane_g3_cp4_srt

0x3986,	// (0x00032950) tabs_3_long_active_pane_srt_ParamLimits

0x3986,	// (0x00032950) tabs_3_long_active_pane_srt

0x3986,	// (0x00032950) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3986,	// (0x00032950) tabs_3_long_passive_pane_cp_srt

0x3986,	// (0x00032950) tabs_3_long_passive_pane_srt_ParamLimits

0x3986,	// (0x00032950) tabs_3_long_passive_pane_srt

0x4f0b,	// (0x00033ed5) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4f0b,	// (0x00033ed5) bg_passive_tab_pane_cp5_srt

0x4894,	// (0x0003385e) bg_passive_tab_pane_g1_cp5_srt

0x480a,	// (0x000337d4) bg_passive_tab_pane_g2_cp5_srt

0x489d,	// (0x00033867) bg_passive_tab_pane_g3_cp5_srt

0x370b,	// (0x000326d5) bg_active_tab_pane_cp5_srt_ParamLimits

0x370b,	// (0x000326d5) bg_active_tab_pane_cp5_srt

0xdd63,	// (0x0003cd2d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd63,	// (0x0003cd2d) tabs_3_long_active_pane_srt_t1

0x4894,	// (0x0003385e) bg_active_tab_pane_g1_cp5_srt

0x480a,	// (0x000337d4) bg_active_tab_pane_g2_cp5_srt

0x489d,	// (0x00033867) bg_active_tab_pane_g3_cp5_srt

0x6761,	// (0x0003572b) navi_text_pane_srt_t1

0x6759,	// (0x00035723) navi_icon_pane_srt_g1

0x4d87,	// (0x00033d51) midp_editing_number_pane_srt

0x4bd1,	// (0x00033b9b) midp_ticker_pane_srt

0x4d8f,	// (0x00033d59) midp_ticker_pane_srt_g1

0x4d97,	// (0x00033d61) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003e73c) midp_ticker_pane_srt_g

0x4d9f,	// (0x00033d69) midp_ticker_pane_srt_t1

0x674a,	// (0x00035714) midp_editing_number_pane_t1_copy1

0x4f0b,	// (0x00033ed5) listscroll_midp_pane

0x4f0b,	// (0x00033ed5) midp_form_pane

0x4c3f,	// (0x00033c09) midp_info_popup_window_ParamLimits

0x4c3f,	// (0x00033c09) midp_info_popup_window

0x4011,	// (0x00032fdb) bg_popup_sub_pane_cp50_ParamLimits

0x4011,	// (0x00032fdb) bg_popup_sub_pane_cp50

0x586d,	// (0x00034837) listscroll_midp_info_pane_ParamLimits

0x586d,	// (0x00034837) listscroll_midp_info_pane

0x5855,	// (0x0003481f) listscroll_form_midp_pane_ParamLimits

0x5855,	// (0x0003481f) listscroll_form_midp_pane

0x5861,	// (0x0003482b) scroll_bar_cp050

0xdbf3,	// (0x0003cbbd) list_midp_pane

0x7455,	// (0x0003641f) signal_pane_g2_cp

0x576f,	// (0x00034739) listscroll_midp_info_pane_t1_ParamLimits

0x576f,	// (0x00034739) listscroll_midp_info_pane_t1

0x5787,	// (0x00034751) listscroll_midp_info_pane_t2_ParamLimits

0x5787,	// (0x00034751) listscroll_midp_info_pane_t2

0x57c5,	// (0x0003478f) listscroll_midp_info_pane_t3_ParamLimits

0x57c5,	// (0x0003478f) listscroll_midp_info_pane_t3

0x57ff,	// (0x000347c9) listscroll_midp_info_pane_t4_ParamLimits

0x57ff,	// (0x000347c9) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0003e7ef) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0003e7ef) listscroll_midp_info_pane_t

0x40d3,	// (0x0003309d) scroll_pane_cp21

0x5711,	// (0x000346db) form_midp_field_choice_group_pane

0x571a,	// (0x000346e4) form_midp_field_text_pane

0x5755,	// (0x0003471f) form_midp_field_time_pane

0x575d,	// (0x00034727) form_midp_gauge_slider_pane

0x5766,	// (0x00034730) form_midp_gauge_wait_pane

0x2dba,	// (0x00031d84) form_midp_image_pane

0xc694,	// (0x0003b65e) list_single_midp_pane_ParamLimits

0xc694,	// (0x0003b65e) list_single_midp_pane

0xdbd0,	// (0x0003cb9a) form_midp_field_text_pane_t1

0x547d,	// (0x00034447) input_focus_pane_cp050

0x5700,	// (0x000346ca) list_midp_form_text_pane

0x5694,	// (0x0003465e) form_midp_field_choice_group_pane_t1

0x56a2,	// (0x0003466c) input_focus_pane_cp051

0x56b6,	// (0x00034680) list_midp_choice_pane

0x2dba,	// (0x00031d84) status_idle_pane

0x5678,	// (0x00034642) form_midp_field_time_pane_t1

0x2db0,	// (0x00031d7a) wait_anim_pane_g2_copy1

0x5686,	// (0x00034650) form_midp_field_time_pane_t2

0x0001,

0x4cef,	// (0x00033cb9) aid_navinavi_width_2_pane

0xf820,	// (0x0003e7ea) form_midp_field_time_pane_t

0x2dba,	// (0x00031d84) input_focus_pane_cp052

0x2dba,	// (0x00031d84) bg_input_focus_pane_cp040

0x5638,	// (0x00034602) form_midp_gauge_slider_pane_t1

0x5646,	// (0x00034610) form_midp_gauge_slider_pane_t2

0xdbb0,	// (0x0003cb7a) form_midp_gauge_slider_pane_t3

0xdbc0,	// (0x0003cb8a) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0003e7e1) form_midp_gauge_slider_pane_t

0x5670,	// (0x0003463a) form_midp_slider_pane

0x370b,	// (0x000326d5) bg_input_focus_pane_cp041_ParamLimits

0x370b,	// (0x000326d5) bg_input_focus_pane_cp041

0x5605,	// (0x000345cf) form_midp_gauge_wait_pane_t1_ParamLimits

0x5605,	// (0x000345cf) form_midp_gauge_wait_pane_t1

0x5617,	// (0x000345e1) form_midp_gauge_wait_pane_t2_ParamLimits

0x5617,	// (0x000345e1) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0003e7dc) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0003e7dc) form_midp_gauge_wait_pane_t

0x5629,	// (0x000345f3) form_midp_wait_pane_ParamLimits

0x5629,	// (0x000345f3) form_midp_wait_pane

0x55cf,	// (0x00034599) form_midp_image_pane_g1

0x55d8,	// (0x000345a2) form_midp_image_pane_t1

0x55e7,	// (0x000345b1) form_midp_image_pane_t2

0x55f6,	// (0x000345c0) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0003e7d5) form_midp_image_pane_t

0x55c6,	// (0x00034590) list_single_midp_pane_g1

0x1a1f,	// (0x000309e9) list_single_midp_pane_t1

0xdb9a,	// (0x0003cb64) list_midp_form_item_pane_ParamLimits

0xdb9a,	// (0x0003cb64) list_midp_form_item_pane

0x4c97,	// (0x00033c61) list_midp_form_item_pane_t1

0x4ca6,	// (0x00033c70) midp_ticker_pane_g1

0x4cb2,	// (0x00033c7c) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003e722) midp_ticker_pane_g

0x4cbe,	// (0x00033c88) midp_ticker_pane_t1

0x698d,	// (0x00035957) midp_editing_number_pane_t1

0x696b,	// (0x00035935) midp_editing_number_pane

0x697a,	// (0x00035944) midp_ticker_pane

0x673a,	// (0x00035704) ai_message_heading_pane

0x2dba,	// (0x00031d84) bg_popup_window_pane_cp14

0x6742,	// (0x0003570c) listscroll_ai_message_pane

0x66c4,	// (0x0003568e) ai_message_heading_pane_g1_ParamLimits

0x66c4,	// (0x0003568e) ai_message_heading_pane_g1

0x66d0,	// (0x0003569a) ai_message_heading_pane_g2_ParamLimits

0x66d0,	// (0x0003569a) ai_message_heading_pane_g2

0x66dc,	// (0x000356a6) ai_message_heading_pane_g3_ParamLimits

0x66dc,	// (0x000356a6) ai_message_heading_pane_g3

0x66e8,	// (0x000356b2) ai_message_heading_pane_g4_ParamLimits

0x66e8,	// (0x000356b2) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0003e916) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0003e916) ai_message_heading_pane_g

0x66f4,	// (0x000356be) ai_message_heading_pane_t1_ParamLimits

0x66f4,	// (0x000356be) ai_message_heading_pane_t1

0x670e,	// (0x000356d8) ai_message_heading_pane_t2_ParamLimits

0x670e,	// (0x000356d8) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0003e91f) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0003e91f) ai_message_heading_pane_t

0x6720,	// (0x000356ea) bg_popup_heading_pane_cp1_ParamLimits

0x6720,	// (0x000356ea) bg_popup_heading_pane_cp1

0x66b2,	// (0x0003567c) list_ai_message_pane_ParamLimits

0x66b2,	// (0x0003567c) list_ai_message_pane

0x40d3,	// (0x0003309d) scroll_pane_cp10

0x664e,	// (0x00035618) list_ai_message_pane_g1

0x6656,	// (0x00035620) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0003e8f3) list_ai_message_pane_g

0x665e,	// (0x00035628) list_ai_message_pane_t1_ParamLimits

0x665e,	// (0x00035628) list_ai_message_pane_t1

0x6673,	// (0x0003563d) list_ai_message_pane_t2_ParamLimits

0x6673,	// (0x0003563d) list_ai_message_pane_t2

0x6688,	// (0x00035652) list_ai_message_pane_t3_ParamLimits

0x6688,	// (0x00035652) list_ai_message_pane_t3

0x669d,	// (0x00035667) list_ai_message_pane_t4_ParamLimits

0x669d,	// (0x00035667) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0003e8f8) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0003e8f8) list_ai_message_pane_t

0xdd41,	// (0x0003cd0b) cell_ai_soft_ind_pane_ParamLimits

0xdd41,	// (0x0003cd0b) cell_ai_soft_ind_pane

0x4cd0,	// (0x00033c9a) cell_ai_soft_ind_pane_g1_ParamLimits

0x4cd0,	// (0x00033c9a) cell_ai_soft_ind_pane_g1

0x2dba,	// (0x00031d84) grid_highlight_cp1

0x4cdd,	// (0x00033ca7) text_secondary_cp56_ParamLimits

0x4cdd,	// (0x00033ca7) text_secondary_cp56

0x660d,	// (0x000355d7) example_general_pane_ParamLimits

0x660d,	// (0x000355d7) example_general_pane

0x6619,	// (0x000355e3) example_parent_pane_g1_ParamLimits

0x6619,	// (0x000355e3) example_parent_pane_g1

0x6625,	// (0x000355ef) example_parent_pane_t1_ParamLimits

0x6625,	// (0x000355ef) example_parent_pane_t1

0xc344,	// (0x0003b30e) popup_preview_text_window_ParamLimits

0xc344,	// (0x0003b30e) popup_preview_text_window

0x4b0e,	// (0x00033ad8) list_single_pane_cp2_g4

0x3a30,	// (0x000329fa) bg_popup_preview_window_pane_ParamLimits

0x3a30,	// (0x000329fa) bg_popup_preview_window_pane

0x635a,	// (0x00035324) popup_preview_text_window_t1_ParamLimits

0x635a,	// (0x00035324) popup_preview_text_window_t1

0x6378,	// (0x00035342) popup_preview_text_window_t2_ParamLimits

0x6378,	// (0x00035342) popup_preview_text_window_t2

0x63c1,	// (0x0003538b) popup_preview_text_window_t3_ParamLimits

0x63c1,	// (0x0003538b) popup_preview_text_window_t3

0x6406,	// (0x000353d0) popup_preview_text_window_t4_ParamLimits

0x6406,	// (0x000353d0) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0003e8c7) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0003e8c7) popup_preview_text_window_t

0x6484,	// (0x0003544e) scroll_pane_cp11

0x5409,	// (0x000343d3) bg_popup_preview_window_pane_g1

0x631a,	// (0x000352e4) bg_popup_preview_window_pane_g2

0x6322,	// (0x000352ec) bg_popup_preview_window_pane_g3

0x632a,	// (0x000352f4) bg_popup_preview_window_pane_g4

0x6332,	// (0x000352fc) bg_popup_preview_window_pane_g5

0x633a,	// (0x00035304) bg_popup_preview_window_pane_g6

0x6342,	// (0x0003530c) bg_popup_preview_window_pane_g7

0x634a,	// (0x00035314) bg_popup_preview_window_pane_g8

0x0097,	// (0x0002f061) aid_popup_width_pane

0xc2c0,	// (0x0003b28a) popup_midp_note_alarm_window_ParamLimits

0xc2c0,	// (0x0003b28a) popup_midp_note_alarm_window

0x3f59,	// (0x00032f23) data_form_pane_ParamLimits

0xbc4c,	// (0x0003ac16) form_field_data_pane_g1

0xbc56,	// (0x0003ac20) form_field_data_pane_t1_ParamLimits

0x3f65,	// (0x00032f2f) input_focus_pane_ParamLimits

0x0a80,	// (0x0002fa4a) data_form_wide_pane_ParamLimits

0x0a91,	// (0x0002fa5b) form_field_data_wide_pane_g1

0x0a9d,	// (0x0002fa67) form_field_data_wide_pane_t1_ParamLimits

0x3cd6,	// (0x00032ca0) input_focus_pane_cp6_ParamLimits

0xd38f,	// (0x0003c359) input_popup_find_pane_g1_ParamLimits

0xd38f,	// (0x0003c359) input_popup_find_pane_g1

0x0cf4,	// (0x0002fcbe) aid_navi_side_left_pane

0x0d09,	// (0x0002fcd3) aid_navi_side_right_pane

0x5d33,	// (0x00034cfd) bg_popup_window_pane_cp30_ParamLimits

0x5d33,	// (0x00034cfd) bg_popup_window_pane_cp30

0x5dad,	// (0x00034d77) popup_midp_note_alarm_window_g1_ParamLimits

0x5dad,	// (0x00034d77) popup_midp_note_alarm_window_g1

0x5ddd,	// (0x00034da7) popup_midp_note_alarm_window_t1_ParamLimits

0x5ddd,	// (0x00034da7) popup_midp_note_alarm_window_t1

0x5e7e,	// (0x00034e48) popup_midp_note_alarm_window_t2_ParamLimits

0x5e7e,	// (0x00034e48) popup_midp_note_alarm_window_t2

0x5f2c,	// (0x00034ef6) popup_midp_note_alarm_window_t3_ParamLimits

0x5f2c,	// (0x00034ef6) popup_midp_note_alarm_window_t3

0x5f5e,	// (0x00034f28) popup_midp_note_alarm_window_t4_ParamLimits

0x5f5e,	// (0x00034f28) popup_midp_note_alarm_window_t4

0x5f84,	// (0x00034f4e) popup_midp_note_alarm_window_t5_ParamLimits

0x5f84,	// (0x00034f4e) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0003e864) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0003e864) popup_midp_note_alarm_window_t

0x6030,	// (0x00034ffa) wait_bar_pane_cp1_ParamLimits

0x6030,	// (0x00034ffa) wait_bar_pane_cp1

0x2dba,	// (0x00031d84) wait_anim_pane_copy1

0x2dba,	// (0x00031d84) wait_border_pane_copy1

0x5a11,	// (0x000349db) wait_border_pane_g1_copy1

0x0ab7,	// (0x0002fa81) form_field_popup_pane_g1

0xbc70,	// (0x0003ac3a) form_field_popup_pane_t1_ParamLimits

0x3f65,	// (0x00032f2f) input_focus_pane_cp7_ParamLimits

0x3f93,	// (0x00032f5d) list_form_pane_ParamLimits

0x0ad9,	// (0x0002faa3) form_field_popup_wide_pane_g1

0x0ae1,	// (0x0002faab) form_field_popup_wide_pane_t1_ParamLimits

0x3f65,	// (0x00032f2f) input_focus_pane_cp8_ParamLimits

0x3f9f,	// (0x00032f69) list_form_wide_pane_ParamLimits

0x6ab6,	// (0x00035a80) aid_size_cell_graphic_pane

0xbcef,	// (0x0003acb9) data_form_pane_t1_ParamLimits

0xc7b2,	// (0x0003b77c) data_form_wide_pane_t1_ParamLimits

0xd81b,	// (0x0003c7e5) bg_status_flat_pane

0xd053,	// (0x0003c01d) title_pane_t1_ParamLimits

0x2e62,	// (0x00031e2c) title_pane_t2_ParamLimits

0x2e88,	// (0x00031e52) title_pane_t3_ParamLimits

0xf557,	// (0x0003e521) title_pane_t_ParamLimits

0x454e,	// (0x00033518) level_1_signal_ParamLimits

0x455b,	// (0x00033525) level_2_signal_ParamLimits

0x4568,	// (0x00033532) level_3_signal_ParamLimits

0x4575,	// (0x0003353f) level_4_signal_ParamLimits

0x4582,	// (0x0003354c) level_5_signal_ParamLimits

0x458f,	// (0x00033559) level_6_signal_ParamLimits

0x459c,	// (0x00033566) level_7_signal_ParamLimits

0x454e,	// (0x00033518) level_1_battery_ParamLimits

0x455b,	// (0x00033525) level_2_battery_ParamLimits

0x4568,	// (0x00033532) level_3_battery_ParamLimits

0x4575,	// (0x0003353f) level_4_battery_ParamLimits

0x4582,	// (0x0003354c) level_5_battery_ParamLimits

0x458f,	// (0x00033559) level_6_battery_ParamLimits

0x459c,	// (0x00033566) level_7_battery_ParamLimits

0x5c38,	// (0x00034c02) bg_status_flat_pane_g1

0x5c40,	// (0x00034c0a) bg_status_flat_pane_g2

0x5c48,	// (0x00034c12) bg_status_flat_pane_g3

0x5c50,	// (0x00034c1a) bg_status_flat_pane_g4

0x5c58,	// (0x00034c22) bg_status_flat_pane_g5

0x5c60,	// (0x00034c2a) bg_status_flat_pane_g6

0x5c68,	// (0x00034c32) bg_status_flat_pane_g7

0xd0df,	// (0x0003c0a9) tabs_3_active_pane_t1_ParamLimits

0xd0df,	// (0x0003c0a9) tabs_3_passive_pane_t1_ParamLimits

0xd0f1,	// (0x0003c0bb) tabs_4_active_pane_t1_ParamLimits

0xd0f1,	// (0x0003c0bb) tabs_4_1_passive_pane_t1_ParamLimits

0xd3a5,	// (0x0003c36f) tabs_2_active_pane_t1_ParamLimits

0xd3a5,	// (0x0003c36f) tabs_2_passive_pane_t1_ParamLimits

0x370b,	// (0x000326d5) bg_active_tab_pane_cp4_ParamLimits

0xd3b7,	// (0x0003c381) tabs_2_long_active_pane_t1_ParamLimits

0x4f0b,	// (0x00033ed5) bg_passive_tab_pane_cp4_ParamLimits

0x18fc,	// (0x000308c6) list_single_midp_graphic_pane_t1_ParamLimits

0x370b,	// (0x000326d5) bg_active_tab_pane_cp5_ParamLimits

0xd3ca,	// (0x0003c394) tabs_3_long_active_pane_t1_ParamLimits

0x4f0b,	// (0x00033ed5) bg_passive_tab_pane_cp5_ParamLimits

0x18fc,	// (0x000308c6) list_single_midp_graphic_pane_t1

0xd81b,	// (0x0003c7e5) bg_status_flat_pane_ParamLimits

0x50a1,	// (0x0003406b) indicator_pane_cp2_ParamLimits

0x50a1,	// (0x0003406b) indicator_pane_cp2

0xd999,	// (0x0003c963) navi_pane_srt_ParamLimits

0xd999,	// (0x0003c963) navi_pane_srt

0x51f0,	// (0x000341ba) popup_clock_digital_analogue_window_cp1

0x37e8,	// (0x000327b2) indicator_pane_t1

0x4bd1,	// (0x00033b9b) copy_highlight_pane

0x4bd1,	// (0x00033b9b) cursor_graphics_pane

0x4bd1,	// (0x00033b9b) graphic_within_text_pane

0x4bd1,	// (0x00033b9b) link_highlight_pane

0x6447,	// (0x00035411) popup_preview_text_window_t5_ParamLimits

0x6447,	// (0x00035411) popup_preview_text_window_t5

0x4cf7,	// (0x00033cc1) cursor_digital_pane

0x4cf7,	// (0x00033cc1) cursor_primary_pane

0x4d08,	// (0x00033cd2) cursor_primary_small_pane

0x4d10,	// (0x00033cda) cursor_secondary_pane

0x4d18,	// (0x00033ce2) cursor_title_pane

0x4cf7,	// (0x00033cc1) link_highlight_digital_pane

0x4cff,	// (0x00033cc9) link_highlight_primary_pane

0x4d08,	// (0x00033cd2) link_highlight_primary_small_pane

0x4d10,	// (0x00033cda) link_highlight_secondary_pane

0x4d18,	// (0x00033ce2) link_highlight_title_pane

0x4cf7,	// (0x00033cc1) copy_highlight_digital_pane

0x4cf7,	// (0x00033cc1) copy_highlight_primary_pane

0x4d08,	// (0x00033cd2) copy_highlight_primary_small_pane

0x4d10,	// (0x00033cda) copy_highlight_secondary_pane

0x4d18,	// (0x00033ce2) copy_highlight_title_pane

0x4d10,	// (0x00033cda) graphic_text_digital_pane

0x5cd6,	// (0x00034ca0) graphic_text_primary_pane

0x5cdf,	// (0x00034ca9) graphic_text_primary_small_pane

0x4d08,	// (0x00033cd2) graphic_text_secondary_pane

0x4cf7,	// (0x00033cc1) graphic_text_title_pane

0xd657,	// (0x0003c621) cursor_primary_pane_g1

0x5cc8,	// (0x00034c92) cursor_text_primary_t1

0xdc33,	// (0x0003cbfd) cursor_primary_small_pane_g1

0x5cba,	// (0x00034c84) cursor_text_primary_small_t1

0xdc29,	// (0x0003cbf3) cursor_primary_small_pane_g1_copy1

0x5ca2,	// (0x00034c6c) cursor_text_primary_small_t1_copy1

0x5c80,	// (0x00034c4a) cursor_text_title_t1

0xdc1f,	// (0x0003cbe9) cursor_title_pane_g1

0xd657,	// (0x0003c621) cursor_digital_pane_g1

0x4d2a,	// (0x00033cf4) cursor_text_digital_t1

0x5c21,	// (0x00034beb) link_highlight_primary_pane_g1

0x5c29,	// (0x00034bf3) link_highlight_primary_pane_t1

0x4d38,	// (0x00033d02) link_highlight_primary_small_pane_g1

0x4d40,	// (0x00033d0a) link_highlight_primary_small_pane_t1

0x4d38,	// (0x00033d02) link_highlight_secondary_pane_g1

0x4d4f,	// (0x00033d19) link_highlight_secondary_pane_t1

0x5b95,	// (0x00034b5f) link_highlight_title_pane_g1

0x5b9d,	// (0x00034b67) link_highlight_title_pane_t1

0x5b7e,	// (0x00034b48) link_highlight_digital_pane_g1

0x5b86,	// (0x00034b50) link_highlight_digital_pane_t1

0x5a56,	// (0x00034a20) copy_highlight_primary_pane_g1

0x5a5e,	// (0x00034a28) copy_highlight_primary_pane_t1

0x5a30,	// (0x000349fa) copy_highlight_primary_small_pane_g1

0x5a47,	// (0x00034a11) copy_highlight_primary_small_pane_t1

0x4d5e,	// (0x00033d28) copy_highlight_secondary_pane_g1

0x4d66,	// (0x00033d30) copy_highlight_secondary_pane_t1

0x5a30,	// (0x000349fa) copy_highlight_title_pane_g1

0x5a38,	// (0x00034a02) copy_highlight_title_pane_t1

0x5a56,	// (0x00034a20) copy_highlight_digital_pane_g1

0x6c80,	// (0x00035c4a) copy_highlight_digital_pane_t1

0x6bd4,	// (0x00035b9e) graphic_text_primary_pane_g1

0x6c64,	// (0x00035c2e) graphic_text_primary_pane_t1

0x6c72,	// (0x00035c3c) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0003e993) graphic_text_primary_pane_t

0x6c40,	// (0x00035c0a) graphic_text_primary_small_pane_g1

0x6c48,	// (0x00035c12) graphic_text_primary_small_pane_t1

0x6c56,	// (0x00035c20) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003e98e) graphic_text_primary_small_pane_t

0x6c1c,	// (0x00035be6) graphic_text_secondary_pane_g1

0x6c24,	// (0x00035bee) graphic_text_secondary_pane_t1

0x6c32,	// (0x00035bfc) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0003e989) graphic_text_secondary_pane_t

0x6bf8,	// (0x00035bc2) graphic_text_title_pane_g1

0x6c00,	// (0x00035bca) graphic_text_title_pane_t1

0x6c0e,	// (0x00035bd8) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0003e984) graphic_text_title_pane_t

0x6bd4,	// (0x00035b9e) graphic_text_digital_pane_g1

0x6bdc,	// (0x00035ba6) graphic_text_digital_pane_t1

0x6bea,	// (0x00035bb4) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003e97f) graphic_text_digital_pane_t

0x370b,	// (0x000326d5) navi_icon_pane_srt_ParamLimits

0x370b,	// (0x000326d5) navi_icon_pane_srt

0x2dba,	// (0x00031d84) navi_midp_pane_srt

0x2dba,	// (0x00031d84) navi_navi_pane_srt

0x370b,	// (0x000326d5) navi_text_pane_srt_ParamLimits

0x370b,	// (0x000326d5) navi_text_pane_srt

0x6b9f,	// (0x00035b69) navi_navi_icon_text_pane_srt

0x6ba7,	// (0x00035b71) navi_navi_pane_srt_g1_ParamLimits

0x6ba7,	// (0x00035b71) navi_navi_pane_srt_g1

0x6bb9,	// (0x00035b83) navi_navi_pane_srt_g2_ParamLimits

0x6bb9,	// (0x00035b83) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0003e97a) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0003e97a) navi_navi_pane_srt_g

0x6bcb,	// (0x00035b95) navi_navi_tabs_pane_srt

0x6b9f,	// (0x00035b69) navi_navi_text_pane_srt

0x6b9f,	// (0x00035b69) navi_navi_volume_pane_srt

0x6b90,	// (0x00035b5a) navi_navi_text_pane_srt_t1

0x1d29,	// (0x00030cf3) navi_navi_volume_pane_srt_g1

0x1d31,	// (0x00030cfb) volume_small_pane_srt_ParamLimits

0x1d31,	// (0x00030cfb) volume_small_pane_srt

0x1057,	// (0x00030021) volume_small_pane_srt_g1_ParamLimits

0x1057,	// (0x00030021) volume_small_pane_srt_g1

0x1067,	// (0x00030031) volume_small_pane_srt_g2_ParamLimits

0x1067,	// (0x00030031) volume_small_pane_srt_g2

0x1078,	// (0x00030042) volume_small_pane_srt_g3_ParamLimits

0x1078,	// (0x00030042) volume_small_pane_srt_g3

0x1089,	// (0x00030053) volume_small_pane_srt_g4_ParamLimits

0x1089,	// (0x00030053) volume_small_pane_srt_g4

0x109a,	// (0x00030064) volume_small_pane_srt_g5_ParamLimits

0x109a,	// (0x00030064) volume_small_pane_srt_g5

0x10ab,	// (0x00030075) volume_small_pane_srt_g6_ParamLimits

0x10ab,	// (0x00030075) volume_small_pane_srt_g6

0x10bc,	// (0x00030086) volume_small_pane_srt_g7_ParamLimits

0x10bc,	// (0x00030086) volume_small_pane_srt_g7

0x10cd,	// (0x00030097) volume_small_pane_srt_g8_ParamLimits

0x10cd,	// (0x00030097) volume_small_pane_srt_g8

0x10de,	// (0x000300a8) volume_small_pane_srt_g9_ParamLimits

0x10de,	// (0x000300a8) volume_small_pane_srt_g9

0x10ef,	// (0x000300b9) volume_small_pane_srt_g10_ParamLimits

0x10ef,	// (0x000300b9) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003e727) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003e727) volume_small_pane_srt_g

0x3ad9,	// (0x00032aa3) query_popup_data_pane_cp2

0x6b76,	// (0x00035b40) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6b76,	// (0x00035b40) navi_navi_icon_text_pane_srt_t1

0x5cd6,	// (0x00034ca0) navi_tabs_2_long_pane_srt

0x5cd6,	// (0x00034ca0) navi_tabs_2_pane_srt

0x5cd6,	// (0x00034ca0) navi_tabs_3_long_pane_srt

0x5cd6,	// (0x00034ca0) navi_tabs_3_pane_srt

0x5cd6,	// (0x00034ca0) navi_tabs_4_pane_srt

0x1d09,	// (0x00030cd3) tabs_2_active_pane_srt_ParamLimits

0x1d09,	// (0x00030cd3) tabs_2_active_pane_srt

0x1d19,	// (0x00030ce3) tabs_2_passive_pane_srt_ParamLimits

0x1d19,	// (0x00030ce3) tabs_2_passive_pane_srt

0x547d,	// (0x00034447) bg_passive_tab_pane_cp1_srt_ParamLimits

0x547d,	// (0x00034447) bg_passive_tab_pane_cp1_srt

0x6b42,	// (0x00035b0c) bg_passive_tab_pane_g1_cp1_srt

0x480a,	// (0x000337d4) bg_passive_tab_pane_g2_cp1_srt

0x6b4b,	// (0x00035b15) bg_passive_tab_pane_g3_cp1_srt

0x3986,	// (0x00032950) bg_active_tab_pane_cp1_srt_ParamLimits

0x3986,	// (0x00032950) bg_active_tab_pane_cp1_srt

0x6b54,	// (0x00035b1e) tabs_2_active_pane_srt_g1

0xdfd1,	// (0x0003cf9b) tabs_2_active_pane_srt_t1_ParamLimits

0xdfd1,	// (0x0003cf9b) tabs_2_active_pane_srt_t1

0x6b42,	// (0x00035b0c) bg_active_tab_pane_g1_cp1_srt

0x480a,	// (0x000337d4) bg_active_tab_pane_g2_cp1_srt

0x6b4b,	// (0x00035b15) bg_active_tab_pane_g3_cp1_srt

0x1cd6,	// (0x00030ca0) tabs_3_active_pane_srt_ParamLimits

0x1cd6,	// (0x00030ca0) tabs_3_active_pane_srt

0x1ce7,	// (0x00030cb1) tabs_3_passive_pane_cp_srt_ParamLimits

0x1ce7,	// (0x00030cb1) tabs_3_passive_pane_cp_srt

0x1cf8,	// (0x00030cc2) tabs_3_passive_pane_srt_ParamLimits

0x1cf8,	// (0x00030cc2) tabs_3_passive_pane_srt

0x547d,	// (0x00034447) bg_passive_tab_pane_cp2_srt_ParamLimits

0x547d,	// (0x00034447) bg_passive_tab_pane_cp2_srt

0x4d75,	// (0x00033d3f) bg_passive_tab_pane_g1_cp2_srt

0x480a,	// (0x000337d4) bg_passive_tab_pane_g2_cp2_srt

0x4d7e,	// (0x00033d48) bg_passive_tab_pane_g3_cp2_srt

0x3986,	// (0x00032950) bg_active_tab_pane_cp2_srt_ParamLimits

0x3986,	// (0x00032950) bg_active_tab_pane_cp2_srt

0x6b28,	// (0x00035af2) tabs_3_active_pane_srt_g1

0xdfbb,	// (0x0003cf85) tabs_3_active_pane_srt_t1_ParamLimits

0xdfbb,	// (0x0003cf85) tabs_3_active_pane_srt_t1

0x4d75,	// (0x00033d3f) bg_active_tab_pane_g1_cp2_srt

0x480a,	// (0x000337d4) bg_active_tab_pane_g2_cp2_srt

0x4d7e,	// (0x00033d48) bg_active_tab_pane_g3_cp2_srt

0x1c8e,	// (0x00030c58) tabs_4_active_pane_srt_ParamLimits

0x1c8e,	// (0x00030c58) tabs_4_active_pane_srt

0x1ca0,	// (0x00030c6a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1ca0,	// (0x00030c6a) tabs_4_passive_pane_cp2_srt

0x1252,	// (0x0003021c) aid_size_cell_toolbar

0x67ec,	// (0x000357b6) main_idle_act_pane_ParamLimits

0x1409,	// (0x000303d3) popup_large_graphic_colour_window_ParamLimits

0xc5ca,	// (0x0003b594) popup_toolbar_window_ParamLimits

0xc5ca,	// (0x0003b594) popup_toolbar_window

0x699c,	// (0x00035966) list_single_graphic_2heading_pane_ParamLimits

0x699c,	// (0x00035966) list_single_graphic_2heading_pane

0x4300,	// (0x000332ca) aid_size_cell_apps_grid_lsc_pane

0x4312,	// (0x000332dc) aid_size_cell_apps_grid_prt_pane

0x4f0b,	// (0x00033ed5) bg_wml_button_pane_cp1_ParamLimits

0x4f0b,	// (0x00033ed5) bg_wml_button_pane_cp1

0xdbd0,	// (0x0003cb9a) form_midp_field_text_pane_t1_ParamLimits

0x547d,	// (0x00034447) input_focus_pane_cp050_ParamLimits

0x5700,	// (0x000346ca) list_midp_form_text_pane_ParamLimits

0x56a2,	// (0x0003466c) input_focus_pane_cp051_ParamLimits

0x56b6,	// (0x00034680) list_midp_choice_pane_ParamLimits

0xdb64,	// (0x0003cb2e) list_single_2graphic_pane_cp3_ParamLimits

0xdb64,	// (0x0003cb2e) list_single_2graphic_pane_cp3

0xdb79,	// (0x0003cb43) list_single_midp_graphic_pane_ParamLimits

0xdb79,	// (0x0003cb43) list_single_midp_graphic_pane

0x0021,	// (0x0002efeb) list_single_graphic_2heading_pane_g1_ParamLimits

0x0021,	// (0x0002efeb) list_single_graphic_2heading_pane_g1

0x002d,	// (0x0002eff7) list_single_graphic_2heading_pane_g4_ParamLimits

0x002d,	// (0x0002eff7) list_single_graphic_2heading_pane_g4

0x0039,	// (0x0002f003) list_single_graphic_2heading_pane_g5_ParamLimits

0x0039,	// (0x0002f003) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003e77a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003e77a) list_single_graphic_2heading_pane_g

0x0045,	// (0x0002f00f) list_single_graphic_2heading_pane_t1_ParamLimits

0x0045,	// (0x0002f00f) list_single_graphic_2heading_pane_t1

0x0059,	// (0x0002f023) list_single_graphic_2heading_pane_t2_ParamLimits

0x0059,	// (0x0002f023) list_single_graphic_2heading_pane_t2

0x0073,	// (0x0002f03d) list_single_graphic_2heading_pane_t3_ParamLimits

0x0073,	// (0x0002f03d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003e781) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003e781) list_single_graphic_2heading_pane_t

0x5347,	// (0x00034311) bg_popup_sub_pane_cp2

0x5371,	// (0x0003433b) grid_toobar_pane

0x1819,	// (0x000307e3) cell_toolbar_pane_ParamLimits

0x1819,	// (0x000307e3) cell_toolbar_pane

0x53ad,	// (0x00034377) cell_toolbar_pane_g1_ParamLimits

0x53ad,	// (0x00034377) cell_toolbar_pane_g1

0x53c1,	// (0x0003438b) cell_toolbar_pane_g2_ParamLimits

0x53c1,	// (0x0003438b) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003e78f) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003e78f) cell_toolbar_pane_g

0x53e3,	// (0x000343ad) grid_highlight_pane_cp2_ParamLimits

0x53e3,	// (0x000343ad) grid_highlight_pane_cp2

0x53fd,	// (0x000343c7) toolbar_button_pane

0x5409,	// (0x000343d3) toolbar_button_pane_g1

0x5411,	// (0x000343db) toolbar_button_pane_g2

0x5419,	// (0x000343e3) toolbar_button_pane_g3

0x5421,	// (0x000343eb) toolbar_button_pane_g4

0x5429,	// (0x000343f3) toolbar_button_pane_g5

0x5431,	// (0x000343fb) toolbar_button_pane_g6

0x5439,	// (0x00034403) toolbar_button_pane_g7

0x5441,	// (0x0003440b) toolbar_button_pane_g8

0x5449,	// (0x00034413) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003e794) toolbar_button_pane_g

0x1873,	// (0x0003083d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1873,	// (0x0003083d) list_single_2graphic_pane_g1_cp3

0xc622,	// (0x0003b5ec) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc622,	// (0x0003b5ec) list_single_2graphic_pane_g2_cp3

0x1890,	// (0x0003085a) list_single_2graphic_pane_g3_cp3

0x1898,	// (0x00030862) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1898,	// (0x00030862) list_single_2graphic_pane_g4_cp3

0x18a4,	// (0x0003086e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x18a4,	// (0x0003086e) list_single_2graphic_pane_t1_cp3

0x18f0,	// (0x000308ba) list_single_midp_graphic_pane_g2_ParamLimits

0x18f0,	// (0x000308ba) list_single_midp_graphic_pane_g2

0x125a,	// (0x00030224) aid_zoom_text_primary

0x0005,	// (0x0002efcf) aid_zoom_text_secondary

0xd6af,	// (0x0003c679) status_small_pane_g7_ParamLimits

0xd6af,	// (0x0003c679) status_small_pane_g7

0xd6d2,	// (0x0003c69c) status_small_pane_t1_ParamLimits

0xd02f,	// (0x0003bff9) title_pane_g2

0x0003,

0xf54e,	// (0x0003e518) title_pane_g

0xd2a7,	// (0x0003c271) aid_size_cell_colour_1_pane_ParamLimits

0xd2a7,	// (0x0003c271) aid_size_cell_colour_1_pane

0xd2bb,	// (0x0003c285) aid_size_cell_colour_2_pane_ParamLimits

0xd2bb,	// (0x0003c285) aid_size_cell_colour_2_pane

0xd2cf,	// (0x0003c299) aid_size_cell_colour_3_pane_ParamLimits

0xd2cf,	// (0x0003c299) aid_size_cell_colour_3_pane

0xd2e3,	// (0x0003c2ad) aid_size_cell_colour_4_pane_ParamLimits

0xd2e3,	// (0x0003c2ad) aid_size_cell_colour_4_pane

0x0c30,	// (0x0002fbfa) title_pane_stacon_g1_ParamLimits

0x0c30,	// (0x0002fbfa) title_pane_stacon_g1

0x5ab5,	// (0x00034a7f) popup_note_wait_window_g3_ParamLimits

0x5ab5,	// (0x00034a7f) popup_note_wait_window_g3

0x5b2b,	// (0x00034af5) popup_note_wait_window_t5_ParamLimits

0x5b2b,	// (0x00034af5) popup_note_wait_window_t5

0x2dba,	// (0x00031d84) main_feb_china_hwr_fs_writing_pane

0xbfe6,	// (0x0003afb0) popup_feb_china_hwr_fs_window_ParamLimits

0xbfe6,	// (0x0003afb0) popup_feb_china_hwr_fs_window

0xc633,	// (0x0003b5fd) aid_size_cell_hwr_fs_ParamLimits

0xc633,	// (0x0003b5fd) aid_size_cell_hwr_fs

0x547d,	// (0x00034447) bg_popup_sub_pane_cp3_ParamLimits

0x547d,	// (0x00034447) bg_popup_sub_pane_cp3

0xc648,	// (0x0003b612) grid_hwr_fs_pane_ParamLimits

0xc648,	// (0x0003b612) grid_hwr_fs_pane

0x19af,	// (0x00030979) linegrid_hwr_fs_pane_ParamLimits

0x19af,	// (0x00030979) linegrid_hwr_fs_pane

0xc660,	// (0x0003b62a) cell_hwr_fs_pane_ParamLimits

0xc660,	// (0x0003b62a) cell_hwr_fs_pane

0x5489,	// (0x00034453) linegrid_hwr_fs_pane_g1_ParamLimits

0x5489,	// (0x00034453) linegrid_hwr_fs_pane_g1

0xdb38,	// (0x0003cb02) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb38,	// (0x0003cb02) linegrid_hwr_fs_pane_g2

0x54a7,	// (0x00034471) linegrid_hwr_fs_pane_g3_ParamLimits

0x54a7,	// (0x00034471) linegrid_hwr_fs_pane_g3

0x19e1,	// (0x000309ab) linegrid_hwr_fs_pane_g4_ParamLimits

0x19e1,	// (0x000309ab) linegrid_hwr_fs_pane_g4

0x19fb,	// (0x000309c5) linegrid_hwr_fs_pane_g5_ParamLimits

0x19fb,	// (0x000309c5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0003e7ba) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0003e7ba) linegrid_hwr_fs_pane_g

0x54b3,	// (0x0003447d) cell_hwr_fs_pane_g1_ParamLimits

0x54b3,	// (0x0003447d) cell_hwr_fs_pane_g1

0x527e,	// (0x00034248) cell_hwr_fs_pane_g2_ParamLimits

0x527e,	// (0x00034248) cell_hwr_fs_pane_g2

0xdb4a,	// (0x0003cb14) cell_hwr_fs_pane_g3_ParamLimits

0xdb4a,	// (0x0003cb14) cell_hwr_fs_pane_g3

0xdb57,	// (0x0003cb21) cell_hwr_fs_pane_g4_ParamLimits

0xdb57,	// (0x0003cb21) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0003e7c5) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003e7c5) cell_hwr_fs_pane_g

0xc686,	// (0x0003b650) cell_hwr_fs_pane_t1

0x2dba,	// (0x00031d84) grid_highlight_pane_cp6

0x2dba,	// (0x00031d84) main_idle_act2_pane

0x40ba,	// (0x00033084) aid_inside_area_popup_secondary

0xdc45,	// (0x0003cc0f) aid_inside_area_window_primary_ParamLimits

0xdc45,	// (0x0003cc0f) aid_inside_area_window_primary

0x6c8f,	// (0x00035c59) ai2_news_ticker_pane

0x6c97,	// (0x00035c61) aid_size_cell_ai1_link_ParamLimits

0x6c97,	// (0x00035c61) aid_size_cell_ai1_link

0x6cb1,	// (0x00035c7b) popup_ai2_data_window_ParamLimits

0x6cb1,	// (0x00035c7b) popup_ai2_data_window

0x6cc5,	// (0x00035c8f) popup_ai2_link_window_ParamLimits

0x6cc5,	// (0x00035c8f) popup_ai2_link_window

0x547d,	// (0x00034447) bg_popup_sub_pane_cp4_ParamLimits

0x547d,	// (0x00034447) bg_popup_sub_pane_cp4

0x6cd9,	// (0x00035ca3) grid_ai2_link_pane_ParamLimits

0x6cd9,	// (0x00035ca3) grid_ai2_link_pane

0x6cf0,	// (0x00035cba) popup_ai2_link_window_g1_ParamLimits

0x6cf0,	// (0x00035cba) popup_ai2_link_window_g1

0x6cfc,	// (0x00035cc6) popup_ai2_link_window_g2_ParamLimits

0x6cfc,	// (0x00035cc6) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0003e998) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0003e998) popup_ai2_link_window_g

0x6d0b,	// (0x00035cd5) ai2_mp_button_pane

0x6d13,	// (0x00035cdd) ai2_mp_volume_pane

0x56a2,	// (0x0003466c) bg_popup_sub_pane_cp5_ParamLimits

0x56a2,	// (0x0003466c) bg_popup_sub_pane_cp5

0x6d1b,	// (0x00035ce5) heading_ai2_gene_pane_ParamLimits

0x6d1b,	// (0x00035ce5) heading_ai2_gene_pane

0x6d27,	// (0x00035cf1) list_ai2_gene_pane_ParamLimits

0x6d27,	// (0x00035cf1) list_ai2_gene_pane

0x6d6f,	// (0x00035d39) cell_ai2_link_pane_ParamLimits

0x6d6f,	// (0x00035d39) cell_ai2_link_pane

0x6d85,	// (0x00035d4f) cell_ai2_link_pane_g1

0x2dba,	// (0x00031d84) grid_highlight_pane_cp7

0x1d46,	// (0x00030d10) ai2_mp_volume_pane_g1

0x6e56,	// (0x00035e20) ai2_mp_volume_pane_g2

0x6dcb,	// (0x00035d95) list_ai2_gene_pane_t1

0x6e5e,	// (0x00035e28) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003e9b1) ai2_mp_volume_pane_g

0x1d4e,	// (0x00030d18) volume_small_pane_cp3

0x6e66,	// (0x00035e30) aid_size_cell_ai2_button

0x6e6e,	// (0x00035e38) grid_ai2_button_pane

0x6e77,	// (0x00035e41) cell_ai2_button_pane_ParamLimits

0x6e77,	// (0x00035e41) cell_ai2_button_pane

0x2db0,	// (0x00031d7a) cell_ai2_button_pane_g1

0x2dba,	// (0x00031d84) grid_highlight_pane_cp8

0x6e16,	// (0x00035de0) ai2_gene_pane_t1_ParamLimits

0x6e16,	// (0x00035de0) ai2_gene_pane_t1

0xbf60,	// (0x0003af2a) aid_height_parent_landscape

0xdd90,	// (0x0003cd5a) aid_height_set_list

0x67ec,	// (0x000357b6) aid_size_parent

0x6ab6,	// (0x00035a80) aid_size_cell_graphic_pane_ParamLimits

0x6d37,	// (0x00035d01) popup_ai2_data_window_g1_ParamLimits

0x6d37,	// (0x00035d01) popup_ai2_data_window_g1

0x6d43,	// (0x00035d0d) ai2_news_ticker_pane_g1

0x6d4b,	// (0x00035d15) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003e99d) ai2_news_ticker_pane_g

0x6d53,	// (0x00035d1d) ai2_news_ticker_pane_t1

0x6d61,	// (0x00035d2b) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0003e9a2) ai2_news_ticker_pane_t

0x6d8e,	// (0x00035d58) heading_ai2_gene_pane_g1

0x6d96,	// (0x00035d60) heading_ai2_gene_pane_t1_ParamLimits

0x6d96,	// (0x00035d60) heading_ai2_gene_pane_t1

0x6dab,	// (0x00035d75) list_highlight_pane_cp6

0x6db3,	// (0x00035d7d) ai2_gene_pane_ParamLimits

0x6db3,	// (0x00035d7d) ai2_gene_pane

0x6dd9,	// (0x00035da3) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0003e9a7) list_ai2_gene_pane_t

0x6de7,	// (0x00035db1) list_highlight_pane_cp8_ParamLimits

0x6de7,	// (0x00035db1) list_highlight_pane_cp8

0x6df8,	// (0x00035dc2) ai2_gene_pane_g1_ParamLimits

0x6df8,	// (0x00035dc2) ai2_gene_pane_g1

0x6e0a,	// (0x00035dd4) ai2_gene_pane_g2_ParamLimits

0x6e0a,	// (0x00035dd4) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003e9ac) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003e9ac) ai2_gene_pane_g

0x3efb,	// (0x00032ec5) scroll_pane_cp12

0xbf1f,	// (0x0003aee9) control_pane_t3_ParamLimits

0xbf1f,	// (0x0003aee9) control_pane_t3

0xd6c3,	// (0x0003c68d) status_small_pane_g8_ParamLimits

0xd6c3,	// (0x0003c68d) status_small_pane_g8

0xc079,	// (0x0003b043) popup_find_window_ParamLimits

0xc2fa,	// (0x0003b2c4) popup_note_image_window_ParamLimits

0x1849,	// (0x00030813) list_double2_graphic_pane_vc_g1_ParamLimits

0x1849,	// (0x00030813) list_double2_graphic_pane_vc_g1

0x05e2,	// (0x0002f5ac) list_double2_graphic_pane_vc_g2_ParamLimits

0x05e2,	// (0x0002f5ac) list_double2_graphic_pane_vc_g2

0x05ee,	// (0x0002f5b8) list_double2_graphic_pane_vc_g3_ParamLimits

0x05ee,	// (0x0002f5b8) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003e788) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003e788) list_double2_graphic_pane_vc_g

0x1855,	// (0x0003081f) list_double2_graphic_pane_vc_t1_ParamLimits

0x1855,	// (0x0003081f) list_double2_graphic_pane_vc_t1

0x05e2,	// (0x0002f5ac) list_single_heading_pane_vc_g1_ParamLimits

0x05e2,	// (0x0002f5ac) list_single_heading_pane_vc_g1

0x05ee,	// (0x0002f5b8) list_single_heading_pane_vc_g2_ParamLimits

0x05ee,	// (0x0002f5b8) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e592) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e592) list_single_heading_pane_vc_g

0x18be,	// (0x00030888) list_single_heading_pane_vc_t1_ParamLimits

0x18be,	// (0x00030888) list_single_heading_pane_vc_t1

0x18d4,	// (0x0003089e) list_single_heading_pane_vc_t2_ParamLimits

0x18d4,	// (0x0003089e) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0003e7a9) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0003e7a9) list_single_heading_pane_vc_t

0x1912,	// (0x000308dc) list_setting_number_pane_vc_g1_ParamLimits

0x1912,	// (0x000308dc) list_setting_number_pane_vc_g1

0x191e,	// (0x000308e8) list_setting_number_pane_vc_g2_ParamLimits

0x191e,	// (0x000308e8) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003e7ae) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003e7ae) list_setting_number_pane_vc_g

0x192a,	// (0x000308f4) list_setting_number_pane_vc_t1_ParamLimits

0x192a,	// (0x000308f4) list_setting_number_pane_vc_t1

0x193e,	// (0x00030908) list_setting_number_pane_vc_t2_ParamLimits

0x193e,	// (0x00030908) list_setting_number_pane_vc_t2

0x1958,	// (0x00030922) list_setting_number_pane_vc_t3_ParamLimits

0x1958,	// (0x00030922) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0003e7b3) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0003e7b3) list_setting_number_pane_vc_t

0x1972,	// (0x0003093c) set_value_pane_vc_ParamLimits

0x1972,	// (0x0003093c) set_value_pane_vc

0x699c,	// (0x00035966) list_double2_graphic_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_double2_graphic_pane_vc

0x699c,	// (0x00035966) list_double2_large_graphic_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_double2_large_graphic_pane_vc

0x699c,	// (0x00035966) list_double2_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_double2_pane_vc

0x699c,	// (0x00035966) list_double_graphic_heading_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_double_graphic_heading_pane_vc

0x699c,	// (0x00035966) list_double_graphic_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_double_graphic_pane_vc

0x699c,	// (0x00035966) list_double_heading_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_double_heading_pane_vc

0x2f25,	// (0x00031eef) list_double_large_graphic_pane_vc_ParamLimits

0x2f25,	// (0x00031eef) list_double_large_graphic_pane_vc

0x699c,	// (0x00035966) list_double_number_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_double_number_pane_vc

0x699c,	// (0x00035966) list_double_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_double_pane_vc

0x699c,	// (0x00035966) list_double_time_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_double_time_pane_vc

0x699c,	// (0x00035966) list_setting_number_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_setting_number_pane_vc

0x699c,	// (0x00035966) list_setting_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_setting_pane_vc

0x699c,	// (0x00035966) list_single_graphic_heading_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_single_graphic_heading_pane_vc

0x699c,	// (0x00035966) list_single_heading_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_single_heading_pane_vc

0x699c,	// (0x00035966) list_single_number_heading_pane_vc_ParamLimits

0x699c,	// (0x00035966) list_single_number_heading_pane_vc

0x3017,	// (0x00031fe1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3017,	// (0x00031fe1) list_double_graphic_heading_pane_vc_g1

0x05e2,	// (0x0002f5ac) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x05e2,	// (0x0002f5ac) list_double_graphic_heading_pane_vc_g2

0x05ee,	// (0x0002f5b8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x05ee,	// (0x0002f5b8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0003e9b8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0003e9b8) list_double_graphic_heading_pane_vc_g

0x3023,	// (0x00031fed) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3023,	// (0x00031fed) list_double_graphic_heading_pane_vc_t1

0x303f,	// (0x00032009) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x303f,	// (0x00032009) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0003e9bf) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0003e9bf) list_double_graphic_heading_pane_vc_t

0x1912,	// (0x000308dc) list_setting_pane_vc_g1_ParamLimits

0x1912,	// (0x000308dc) list_setting_pane_vc_g1

0x191e,	// (0x000308e8) list_setting_pane_vc_g2_ParamLimits

0x191e,	// (0x000308e8) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003e7ae) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003e7ae) list_setting_pane_vc_g

0x3057,	// (0x00032021) list_setting_pane_vc_t1_ParamLimits

0x3057,	// (0x00032021) list_setting_pane_vc_t1

0x3071,	// (0x0003203b) list_setting_pane_vc_t2_ParamLimits

0x3071,	// (0x0003203b) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x0003ea02) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x0003ea02) list_setting_pane_vc_t

0x1972,	// (0x0003093c) set_value_pane_cp_vc_ParamLimits

0x1972,	// (0x0003093c) set_value_pane_cp_vc

0x05e2,	// (0x0002f5ac) list_single_number_heading_pane_vc_g1_ParamLimits

0x05e2,	// (0x0002f5ac) list_single_number_heading_pane_vc_g1

0x05ee,	// (0x0002f5b8) list_single_number_heading_pane_vc_g2_ParamLimits

0x05ee,	// (0x0002f5b8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e592) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e592) list_single_number_heading_pane_vc_g

0x18be,	// (0x00030888) list_single_number_heading_pane_vc_t1_ParamLimits

0x18be,	// (0x00030888) list_single_number_heading_pane_vc_t1

0x3089,	// (0x00032053) list_single_number_heading_pane_vc_t2_ParamLimits

0x3089,	// (0x00032053) list_single_number_heading_pane_vc_t2

0x309d,	// (0x00032067) list_single_number_heading_pane_vc_t3_ParamLimits

0x309d,	// (0x00032067) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x0003ea07) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0003ea07) list_single_number_heading_pane_vc_t

0x1849,	// (0x00030813) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1849,	// (0x00030813) list_single_graphic_heading_pane_vc_g1

0x05e2,	// (0x0002f5ac) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x05e2,	// (0x0002f5ac) list_single_graphic_heading_pane_vc_g4

0x05ee,	// (0x0002f5b8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x05ee,	// (0x0002f5b8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003e788) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003e788) list_single_graphic_heading_pane_vc_g

0x18be,	// (0x00030888) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x18be,	// (0x00030888) list_single_graphic_heading_pane_vc_t1

0x30af,	// (0x00032079) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x30af,	// (0x00032079) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa44,	// (0x0003ea0e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa44,	// (0x0003ea0e) list_single_graphic_heading_pane_vc_t

0x05e2,	// (0x0002f5ac) list_double2_pane_vc_g1_ParamLimits

0x05e2,	// (0x0002f5ac) list_double2_pane_vc_g1

0x05ee,	// (0x0002f5b8) list_double2_pane_vc_g2_ParamLimits

0x05ee,	// (0x0002f5b8) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e592) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e592) list_double2_pane_vc_g

0x30c3,	// (0x0003208d) list_double2_pane_vc_t1_ParamLimits

0x30c3,	// (0x0003208d) list_double2_pane_vc_t1

0x30d9,	// (0x000320a3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x30d9,	// (0x000320a3) list_double2_large_graphic_pane_vc_g1

0x05e2,	// (0x0002f5ac) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x05e2,	// (0x0002f5ac) list_double2_large_graphic_pane_vc_g2

0x05ee,	// (0x0002f5b8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x05ee,	// (0x0002f5b8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0003e5af) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0003e5af) list_double2_large_graphic_pane_vc_g

0x30e5,	// (0x000320af) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x30e5,	// (0x000320af) list_double2_large_graphic_pane_vc_t1

0x30fb,	// (0x000320c5) list_double_time_pane_vc_g1_ParamLimits

0x30fb,	// (0x000320c5) list_double_time_pane_vc_g1

0x3107,	// (0x000320d1) list_double_time_pane_vc_g2_ParamLimits

0x3107,	// (0x000320d1) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x0003ea13) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x0003ea13) list_double_time_pane_vc_g

0x3113,	// (0x000320dd) list_double_time_pane_vc_t1_ParamLimits

0x3113,	// (0x000320dd) list_double_time_pane_vc_t1

0x3131,	// (0x000320fb) list_double_time_pane_vc_t2_ParamLimits

0x3131,	// (0x000320fb) list_double_time_pane_vc_t2

0x317b,	// (0x00032145) list_double_time_pane_vc_t3_ParamLimits

0x317b,	// (0x00032145) list_double_time_pane_vc_t3

0x318d,	// (0x00032157) list_double_time_pane_vc_t4_ParamLimits

0x318d,	// (0x00032157) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x0003ea18) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x0003ea18) list_double_time_pane_vc_t

0x05e2,	// (0x0002f5ac) list_double_pane_vc_g1_ParamLimits

0x05e2,	// (0x0002f5ac) list_double_pane_vc_g1

0x05ee,	// (0x0002f5b8) list_double_pane_vc_g2_ParamLimits

0x05ee,	// (0x0002f5b8) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e592) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e592) list_double_pane_vc_g

0x31a1,	// (0x0003216b) list_double_pane_vc_t1_ParamLimits

0x31a1,	// (0x0003216b) list_double_pane_vc_t1

0x31b3,	// (0x0003217d) list_double_pane_vc_t2_ParamLimits

0x31b3,	// (0x0003217d) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x0003ea21) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x0003ea21) list_double_pane_vc_t

0x05e2,	// (0x0002f5ac) list_double_number_pane_vc_g1_ParamLimits

0x05e2,	// (0x0002f5ac) list_double_number_pane_vc_g1

0x05ee,	// (0x0002f5b8) list_double_number_pane_vc_g2_ParamLimits

0x05ee,	// (0x0002f5b8) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e592) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e592) list_double_number_pane_vc_g

0x31cb,	// (0x00032195) list_double_number_pane_vc_t1_ParamLimits

0x31cb,	// (0x00032195) list_double_number_pane_vc_t1

0x31dd,	// (0x000321a7) list_double_number_pane_vc_t2_ParamLimits

0x31dd,	// (0x000321a7) list_double_number_pane_vc_t2

0x31ef,	// (0x000321b9) list_double_number_pane_vc_t3_ParamLimits

0x31ef,	// (0x000321b9) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x0003ea26) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x0003ea26) list_double_number_pane_vc_t

0x3207,	// (0x000321d1) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3207,	// (0x000321d1) list_double_large_graphic_pane_vc_g1

0x3223,	// (0x000321ed) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3223,	// (0x000321ed) list_double_large_graphic_pane_vc_g2

0x3237,	// (0x00032201) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3237,	// (0x00032201) list_double_large_graphic_pane_vc_g3

0x3246,	// (0x00032210) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3246,	// (0x00032210) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x0003ea2d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x0003ea2d) list_double_large_graphic_pane_vc_g

0x3255,	// (0x0003221f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3255,	// (0x0003221f) list_double_large_graphic_pane_vc_t1

0x326f,	// (0x00032239) list_double_large_graphic_pane_vc_t2_ParamLimits

0x326f,	// (0x00032239) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x0003ea36) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x0003ea36) list_double_large_graphic_pane_vc_t

0x05e2,	// (0x0002f5ac) list_double_heading_pane_vc_g1_ParamLimits

0x05e2,	// (0x0002f5ac) list_double_heading_pane_vc_g1

0x05ee,	// (0x0002f5b8) list_double_heading_pane_vc_g2_ParamLimits

0x05ee,	// (0x0002f5b8) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e592) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e592) list_double_heading_pane_vc_g

0x3291,	// (0x0003225b) list_double_heading_pane_vc_t1_ParamLimits

0x3291,	// (0x0003225b) list_double_heading_pane_vc_t1

0x18be,	// (0x00030888) list_double_heading_pane_vc_t2_ParamLimits

0x18be,	// (0x00030888) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0003ea3b) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0003ea3b) list_double_heading_pane_vc_t

0x32a5,	// (0x0003226f) list_double_graphic_pane_vc_g1_ParamLimits

0x32a5,	// (0x0003226f) list_double_graphic_pane_vc_g1

0x32b8,	// (0x00032282) list_double_graphic_pane_vc_g2_ParamLimits

0x32b8,	// (0x00032282) list_double_graphic_pane_vc_g2

0x05e2,	// (0x0002f5ac) list_double_graphic_pane_vc_g3_ParamLimits

0x05e2,	// (0x0002f5ac) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x0003ea40) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0003ea40) list_double_graphic_pane_vc_g

0x32d5,	// (0x0003229f) list_double_graphic_pane_vc_t1_ParamLimits

0x32d5,	// (0x0003229f) list_double_graphic_pane_vc_t1

0x32f3,	// (0x000322bd) list_double_graphic_pane_vc_t2_ParamLimits

0x32f3,	// (0x000322bd) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x0003ea49) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x0003ea49) list_double_graphic_pane_vc_t

0x00a3,	// (0x0002f06d) aid_size_cell_fastswap

0xb645,	// (0x0003a60f) aid_size_cell_touch_ParamLimits

0xb645,	// (0x0003a60f) aid_size_cell_touch

0x0310,	// (0x0002f2da) popup_fast_swap_wide_window_ParamLimits

0x0310,	// (0x0002f2da) popup_fast_swap_wide_window

0xb7f5,	// (0x0003a7bf) touch_pane_ParamLimits

0xb7f5,	// (0x0003a7bf) touch_pane

0x3f51,	// (0x00032f1b) button_value_adjust_pane_cp2

0x09b2,	// (0x0002f97c) button_value_adjust_pane_cp4

0x09d2,	// (0x0002f99c) form_field_data_pane_cp2

0xbc0d,	// (0x0003abd7) form_field_data_wide_pane_cp2

0x43cd,	// (0x00033397) bg_scroll_pane_ParamLimits

0x0d93,	// (0x0002fd5d) scroll_handle_pane_ParamLimits

0x0da7,	// (0x0002fd71) scroll_sc2_down_pane_ParamLimits

0x0da7,	// (0x0002fd71) scroll_sc2_down_pane

0x43fe,	// (0x000333c8) scroll_sc2_up_pane_ParamLimits

0x43fe,	// (0x000333c8) scroll_sc2_up_pane

0xe0f9,	// (0x0003d0c3) grid_wheel_folder_pane_g1_ParamLimits

0xe0f9,	// (0x0003d0c3) grid_wheel_folder_pane_g1

0x0fef,	// (0x0002ffb9) clock_nsta_pane_cp2_ParamLimits

0x0fef,	// (0x0002ffb9) clock_nsta_pane_cp2

0x4f0b,	// (0x00033ed5) listscroll_midp_pane_ParamLimits

0xd5ba,	// (0x0003c584) midp_canvas_pane

0x4ebd,	// (0x00033e87) nsta_clock_indic_pane

0x4ef1,	// (0x00033ebb) listscroll_form_pane_vc

0x4ef9,	// (0x00033ec3) listscroll_set_pane_vc_ParamLimits

0x4ef9,	// (0x00033ec3) listscroll_set_pane_vc

0xd843,	// (0x0003c80d) clock_nsta_pane

0xd86d,	// (0x0003c837) indicator_nsta_pane

0x5347,	// (0x00034311) bg_popup_sub_pane_cp2_ParamLimits

0x535b,	// (0x00034325) find_pane_cp2_ParamLimits

0x535b,	// (0x00034325) find_pane_cp2

0x5371,	// (0x0003433b) grid_toobar_pane_ParamLimits

0x5451,	// (0x0003441b) list_form_gen_pane_vc_ParamLimits

0x5451,	// (0x0003441b) list_form_gen_pane_vc

0x5467,	// (0x00034431) scroll_pane_cp8_vc_ParamLimits

0x5467,	// (0x00034431) scroll_pane_cp8_vc

0x54e3,	// (0x000344ad) data_form_wide_pane_vc_ParamLimits

0x54e3,	// (0x000344ad) data_form_wide_pane_vc

0x54ef,	// (0x000344b9) form_field_data_wide_pane_vc_g1

0x54f7,	// (0x000344c1) form_field_data_wide_pane_vc_t1_ParamLimits

0x54f7,	// (0x000344c1) form_field_data_wide_pane_vc_t1

0x3f65,	// (0x00032f2f) input_focus_pane_cp6_vc_ParamLimits

0x3f65,	// (0x00032f2f) input_focus_pane_cp6_vc

0xdbf3,	// (0x0003cbbd) list_midp_pane_ParamLimits

0x6b1c,	// (0x00035ae6) scroll_pane_cp16_ParamLimits

0x6b1c,	// (0x00035ae6) scroll_pane_cp16

0x588f,	// (0x00034859) button_value_adjust_pane_ParamLimits

0x588f,	// (0x00034859) button_value_adjust_pane

0xdda1,	// (0x0003cd6b) button_value_adjust_pane_cp6_ParamLimits

0xdda1,	// (0x0003cd6b) button_value_adjust_pane_cp6

0xdeb7,	// (0x0003ce81) settings_code_pane_cp_ParamLimits

0xdeb7,	// (0x0003ce81) settings_code_pane_cp

0x2db0,	// (0x00031d7a) cell_touch_pane_g1

0x2db0,	// (0x00031d7a) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003e6cd) cell_touch_pane_g

0xdfe7,	// (0x0003cfb1) cell_touch_pane_cp_ParamLimits

0xdfe7,	// (0x0003cfb1) cell_touch_pane_cp

0xe003,	// (0x0003cfcd) cell_touch_pane_ParamLimits

0xe003,	// (0x0003cfcd) cell_touch_pane

0x2db0,	// (0x00031d7a) scroll_sc2_down_pane_g1

0x2db0,	// (0x00031d7a) scroll_sc2_up_pane_g1

0x2dba,	// (0x00031d84) bg_set_opt_pane_cp4_vc

0x6eaa,	// (0x00035e74) list_set_graphic_pane_vc_g1_ParamLimits

0x6eaa,	// (0x00035e74) list_set_graphic_pane_vc_g1

0x4a01,	// (0x000339cb) list_set_graphic_pane_vc_g2_ParamLimits

0x4a01,	// (0x000339cb) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0003e9c4) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0003e9c4) list_set_graphic_pane_vc_g

0x6eb6,	// (0x00035e80) text_primary_small_cp13_vc_ParamLimits

0x6eb6,	// (0x00035e80) text_primary_small_cp13_vc

0x6ece,	// (0x00035e98) list_set_graphic_pane_vc_ParamLimits

0x6ece,	// (0x00035e98) list_set_graphic_pane_vc

0x2dba,	// (0x00031d84) input_focus_pane_cp2_vc

0x2db0,	// (0x00031d7a) setting_code_pane_vc_g1

0x3756,	// (0x00032720) setting_code_pane_vc_t1

0x6ee2,	// (0x00035eac) set_text_pane_vc_t1_ParamLimits

0x6ee2,	// (0x00035eac) set_text_pane_vc_t1

0x2dba,	// (0x00031d84) input_focus_pane_cp1_vc

0x6eff,	// (0x00035ec9) list_set_text_pane_vc

0x2db0,	// (0x00031d7a) setting_text_pane_vc_g1

0x2dba,	// (0x00031d84) bg_set_opt_pane_cp2_vc

0x374d,	// (0x00032717) setting_slider_graphic_pane_vc_g1

0x6f09,	// (0x00035ed3) setting_slider_graphic_pane_vc_t1

0x6f19,	// (0x00035ee3) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0003e9c9) setting_slider_graphic_pane_vc_t

0x6f29,	// (0x00035ef3) slider_set_pane_cp_vc

0x6f31,	// (0x00035efb) slider_set_pane_vc_g1

0x6f3a,	// (0x00035f04) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0003e9ce) slider_set_pane_vc_g

0x3fc0,	// (0x00032f8a) set_opt_bg_pane_g1_copy1

0x3fc8,	// (0x00032f92) set_opt_bg_pane_g2_copy1

0x6f66,	// (0x00035f30) set_opt_bg_pane_g3_copy1

0x3fd8,	// (0x00032fa2) set_opt_bg_pane_g4_copy1

0x3fe0,	// (0x00032faa) set_opt_bg_pane_g5_copy1

0x3fe8,	// (0x00032fb2) set_opt_bg_pane_g6_copy1

0x6f6e,	// (0x00035f38) set_opt_bg_pane_g7_copy1

0x6f78,	// (0x00035f42) set_opt_bg_pane_g8_copy1

0x6f80,	// (0x00035f4a) set_opt_bg_pane_g9_copy1

0x2dba,	// (0x00031d84) bg_set_opt_pane_cp_vc

0x6f88,	// (0x00035f52) setting_slider_pane_vc_t1

0x6f97,	// (0x00035f61) setting_slider_pane_vc_t2

0x6fa7,	// (0x00035f71) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0003e9dd) setting_slider_pane_vc_t

0x6fb7,	// (0x00035f81) slider_set_pane_vc

0x1a68,	// (0x00030a32) volume_set_pane_vc_g1

0x1d57,	// (0x00030d21) volume_set_pane_vc_g2

0x1d60,	// (0x00030d2a) volume_set_pane_vc_g3

0x1d69,	// (0x00030d33) volume_set_pane_vc_g4

0x1d72,	// (0x00030d3c) volume_set_pane_vc_g5

0x1d7b,	// (0x00030d45) volume_set_pane_vc_g6

0x1a95,	// (0x00030a5f) volume_set_pane_vc_g7

0x1d84,	// (0x00030d4e) volume_set_pane_vc_g8

0x1d8d,	// (0x00030d57) volume_set_pane_vc_g9

0x1d96,	// (0x00030d60) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x0003e9e4) volume_set_pane_vc_g

0x6fbf,	// (0x00035f89) volume_set_pane_vc

0x6fc7,	// (0x00035f91) button_value_adjust_pane_cp1_vc

0x6fd1,	// (0x00035f9b) list_highlight_pane_cp2_vc

0x6fda,	// (0x00035fa4) list_set_pane_vc_ParamLimits

0x6fda,	// (0x00035fa4) list_set_pane_vc

0x7038,	// (0x00036002) main_pane_set_vc_t1_ParamLimits

0x7038,	// (0x00036002) main_pane_set_vc_t1

0x704d,	// (0x00036017) main_pane_set_vc_t2_ParamLimits

0x704d,	// (0x00036017) main_pane_set_vc_t2

0x705f,	// (0x00036029) main_pane_set_vc_t3_ParamLimits

0x705f,	// (0x00036029) main_pane_set_vc_t3

0x7071,	// (0x0003603b) main_pane_set_vc_t4_ParamLimits

0x7071,	// (0x0003603b) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x0003e9f9) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x0003e9f9) main_pane_set_vc_t

0x7083,	// (0x0003604d) setting_code_pane_vc_ParamLimits

0x7083,	// (0x0003604d) setting_code_pane_vc

0x7092,	// (0x0003605c) setting_slider_graphic_pane_vc

0x7092,	// (0x0003605c) setting_slider_pane_vc

0x7092,	// (0x0003605c) setting_text_pane_vc

0x7092,	// (0x0003605c) setting_volume_pane_vc

0x709a,	// (0x00036064) scroll_pane_cp121_vc

0x3f3f,	// (0x00032f09) set_content_pane_vc

0x70a2,	// (0x0003606c) button_value_adjust_pane_g1

0x70ab,	// (0x00036075) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x0003ea4e) button_value_adjust_pane_g

0x70b4,	// (0x0003607e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x70b4,	// (0x0003607e) form_field_slider_wide_pane_vc_t1

0x70c8,	// (0x00036092) form_field_slider_wide_pane_vc_t2_ParamLimits

0x70c8,	// (0x00036092) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x0003ea53) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0003ea53) form_field_slider_wide_pane_vc_t

0x3986,	// (0x00032950) input_focus_pane_cp10_vc_ParamLimits

0x3986,	// (0x00032950) input_focus_pane_cp10_vc

0x70f4,	// (0x000360be) slider_cont_pane_cp1_vc_ParamLimits

0x70f4,	// (0x000360be) slider_cont_pane_cp1_vc

0x7104,	// (0x000360ce) slider_form_pane_g1_cp2

0x6f3a,	// (0x00035f04) slider_form_pane_g2_cp2

0x7131,	// (0x000360fb) form_field_slider_pane_vc_t3

0x713f,	// (0x00036109) form_field_slider_pane_vc_t4

0x714d,	// (0x00036117) slider_form_pane_vc_ParamLimits

0x714d,	// (0x00036117) slider_form_pane_vc

0x715a,	// (0x00036124) form_field_slider_pane_vc_t1_ParamLimits

0x715a,	// (0x00036124) form_field_slider_pane_vc_t1

0x70c8,	// (0x00036092) form_field_slider_pane_vc_t2_ParamLimits

0x70c8,	// (0x00036092) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x0003ea65) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x0003ea65) form_field_slider_pane_vc_t

0x3986,	// (0x00032950) input_focus_pane_cp9_vc_ParamLimits

0x3986,	// (0x00032950) input_focus_pane_cp9_vc

0x7176,	// (0x00036140) slider_cont_pane_vc_ParamLimits

0x7176,	// (0x00036140) slider_cont_pane_vc

0x7188,	// (0x00036152) list_form_graphic_pane_cp_vc_ParamLimits

0x7188,	// (0x00036152) list_form_graphic_pane_cp_vc

0x54ef,	// (0x000344b9) form_field_popup_wide_pane_vc_g1

0x719d,	// (0x00036167) form_field_popup_wide_pane_vc_t1_ParamLimits

0x719d,	// (0x00036167) form_field_popup_wide_pane_vc_t1

0x3f65,	// (0x00032f2f) input_focus_pane_cp8_vc_ParamLimits

0x3f65,	// (0x00032f2f) input_focus_pane_cp8_vc

0x71e2,	// (0x000361ac) list_form_wide_pane_vc_ParamLimits

0x71e2,	// (0x000361ac) list_form_wide_pane_vc

0x71ee,	// (0x000361b8) list_form_graphic_pane_vc_g1

0x71f6,	// (0x000361c0) list_form_graphic_pane_vc_t1_ParamLimits

0x71f6,	// (0x000361c0) list_form_graphic_pane_vc_t1

0x370b,	// (0x000326d5) list_highlight_pane_cp5_vc_ParamLimits

0x370b,	// (0x000326d5) list_highlight_pane_cp5_vc

0x7212,	// (0x000361dc) list_form_graphic_pane_vc_ParamLimits

0x7212,	// (0x000361dc) list_form_graphic_pane_vc

0x54ef,	// (0x000344b9) form_field_popup_pane_vc_g1

0x7228,	// (0x000361f2) form_field_popup_pane_vc_t1_ParamLimits

0x7228,	// (0x000361f2) form_field_popup_pane_vc_t1

0x3f65,	// (0x00032f2f) input_focus_pane_cp7_vc_ParamLimits

0x3f65,	// (0x00032f2f) input_focus_pane_cp7_vc

0x723f,	// (0x00036209) list_form_pane_vc_ParamLimits

0x723f,	// (0x00036209) list_form_pane_vc

0x724b,	// (0x00036215) data_form_pane_vc_t1_ParamLimits

0x724b,	// (0x00036215) data_form_pane_vc_t1

0x3fc0,	// (0x00032f8a) input_focus_pane_vc_g1

0x3fc8,	// (0x00032f92) input_focus_pane_vc_g2

0x3fd0,	// (0x00032f9a) input_focus_pane_vc_g3

0x3fd8,	// (0x00032fa2) input_focus_pane_vc_g4

0x3fe0,	// (0x00032faa) input_focus_pane_vc_g5

0x3fe8,	// (0x00032fb2) input_focus_pane_vc_g6

0x3ff0,	// (0x00032fba) input_focus_pane_vc_g7

0x3ff8,	// (0x00032fc2) input_focus_pane_vc_g8

0x4000,	// (0x00032fca) input_focus_pane_vc_g9

0x2db0,	// (0x00031d7a) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003e656) input_focus_pane_vc_g

0x54e3,	// (0x000344ad) data_form_pane_vc_ParamLimits

0x54e3,	// (0x000344ad) data_form_pane_vc

0x54ef,	// (0x000344b9) form_field_data_pane_vc_g1

0x7266,	// (0x00036230) form_field_data_pane_vc_t1_ParamLimits

0x7266,	// (0x00036230) form_field_data_pane_vc_t1

0x3f65,	// (0x00032f2f) input_focus_pane_vc_ParamLimits

0x3f65,	// (0x00032f2f) input_focus_pane_vc

0x7280,	// (0x0003624a) button_value_adjust_pane_cp3_vc

0x7288,	// (0x00036252) button_value_adjust_pane_cp5_vc

0x7290,	// (0x0003625a) form_field_data_pane_vc_ParamLimits

0x7290,	// (0x0003625a) form_field_data_pane_vc

0x72a7,	// (0x00036271) form_field_data_pane_vc_cp2

0x72af,	// (0x00036279) form_field_data_wide_pane_vc_ParamLimits

0x72af,	// (0x00036279) form_field_data_wide_pane_vc

0x72c5,	// (0x0003628f) form_field_data_wide_pane_vc_cp2

0x72cd,	// (0x00036297) form_field_popup_pane_vc_ParamLimits

0x72cd,	// (0x00036297) form_field_popup_pane_vc

0x72e4,	// (0x000362ae) form_field_popup_wide_pane_vc_ParamLimits

0x72e4,	// (0x000362ae) form_field_popup_wide_pane_vc

0x72fa,	// (0x000362c4) form_field_slider_pane_vc_ParamLimits

0x72fa,	// (0x000362c4) form_field_slider_pane_vc

0x730d,	// (0x000362d7) form_field_slider_wide_pane_vc_ParamLimits

0x730d,	// (0x000362d7) form_field_slider_wide_pane_vc

0xe021,	// (0x0003cfeb) grid_touch_1_pane_ParamLimits

0xe021,	// (0x0003cfeb) grid_touch_1_pane

0xe035,	// (0x0003cfff) grid_touch_2_pane_ParamLimits

0xe035,	// (0x0003cfff) grid_touch_2_pane

0x73db,	// (0x000363a5) touch_pane_g1_ParamLimits

0x73db,	// (0x000363a5) touch_pane_g1

0x7344,	// (0x0003630e) cell_app_pane_cp_wide_ParamLimits

0x7344,	// (0x0003630e) cell_app_pane_cp_wide

0x7355,	// (0x0003631f) grid_popup_fast_wide_pane_ParamLimits

0x7355,	// (0x0003631f) grid_popup_fast_wide_pane

0x7369,	// (0x00036333) scroll_pane_cp19_ParamLimits

0x7369,	// (0x00036333) scroll_pane_cp19

0x2dba,	// (0x00031d84) bg_popup_window_pane_cp20

0x737d,	// (0x00036347) listscroll_popup_fast_wide_pane

0x4126,	// (0x000330f0) grid_indicator_nsta_pane

0x7385,	// (0x0003634f) clock_nsta_pane_g1

0x738e,	// (0x00036358) clock_nsta_pane_t1

0xe05f,	// (0x0003d029) cell_indicator_nsta_pane_ParamLimits

0xe05f,	// (0x0003d029) cell_indicator_nsta_pane

0x73db,	// (0x000363a5) cell_indicator_nsta_pane_g1

0xe076,	// (0x0003d040) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x0003ea76) cell_indicator_nsta_pane_g

0x73f6,	// (0x000363c0) clock_nsta_pane_cp

0x73fe,	// (0x000363c8) indicator_nsta_pane_cp

0x7406,	// (0x000363d0) nsta_clock_indic_pane_g1

0x37d4,	// (0x0003279e) grid_indicator_pane

0x44f3,	// (0x000334bd) scroll_pane_cp29

0x0f3e,	// (0x0002ff08) indicator_nsta_pane_cp2_ParamLimits

0x0f3e,	// (0x0002ff08) indicator_nsta_pane_cp2

0x370b,	// (0x000326d5) main_apps_wheel_pane

0x571a,	// (0x000346e4) form_midp_field_text_pane_ParamLimits

0x5861,	// (0x0003482b) scroll_bar_cp050_ParamLimits

0x7467,	// (0x00036431) cell_indicator_pane_ParamLimits

0x7467,	// (0x00036431) cell_indicator_pane

0x7482,	// (0x0003644c) cell_indicator_pane_g1

0xe083,	// (0x0003d04d) grid_wheel_folder_pane_ParamLimits

0xe083,	// (0x0003d04d) grid_wheel_folder_pane

0xe091,	// (0x0003d05b) list_wheel_apps_pane_ParamLimits

0xe091,	// (0x0003d05b) list_wheel_apps_pane

0xe09f,	// (0x0003d069) main_apps_wheel_pane_g1_ParamLimits

0xe09f,	// (0x0003d069) main_apps_wheel_pane_g1

0xe0ab,	// (0x0003d075) main_apps_wheel_pane_g2_ParamLimits

0xe0ab,	// (0x0003d075) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x0003ea92) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x0003ea92) main_apps_wheel_pane_g

0xe0b9,	// (0x0003d083) main_apps_wheel_pane_t1_ParamLimits

0xe0b9,	// (0x0003d083) main_apps_wheel_pane_t1

0xe0cd,	// (0x0003d097) list_wheel_apps_pane_g1

0xe0d5,	// (0x0003d09f) list_wheel_apps_pane_g2

0xe0dd,	// (0x0003d0a7) list_wheel_apps_pane_g3

0xe0e5,	// (0x0003d0af) list_wheel_apps_pane_g4

0xe0ef,	// (0x0003d0b9) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x0003ea97) list_wheel_apps_pane_g

0x4a5d,	// (0x00033a27) navi_icon_text_pane

0xd737,	// (0x0003c701) aid_fill_nsta

0x7549,	// (0x00036513) navi_icon_text_pane_g1

0x7555,	// (0x0003651f) navi_icon_text_pane_t1

0xd599,	// (0x0003c563) list_set_graphic_pane_t1_ParamLimits

0xd599,	// (0x0003c563) list_set_graphic_pane_t1

0x5fb3,	// (0x00034f7d) popup_midp_note_alarm_window_t6_ParamLimits

0x5fb3,	// (0x00034f7d) popup_midp_note_alarm_window_t6

0x5fc5,	// (0x00034f8f) popup_midp_note_alarm_window_t7_ParamLimits

0x5fc5,	// (0x00034f8f) popup_midp_note_alarm_window_t7

0x5fd7,	// (0x00034fa1) popup_midp_note_alarm_window_t8_ParamLimits

0x5fd7,	// (0x00034fa1) popup_midp_note_alarm_window_t8

0x5fe9,	// (0x00034fb3) popup_midp_note_alarm_window_t9_ParamLimits

0x5fe9,	// (0x00034fb3) popup_midp_note_alarm_window_t9

0x5ffb,	// (0x00034fc5) popup_midp_note_alarm_window_t10_ParamLimits

0x5ffb,	// (0x00034fc5) popup_midp_note_alarm_window_t10

0x600d,	// (0x00034fd7) popup_midp_note_alarm_window_t11_ParamLimits

0x600d,	// (0x00034fd7) popup_midp_note_alarm_window_t11

0x601f,	// (0x00034fe9) scroll_pane_cp17_ParamLimits

0x601f,	// (0x00034fe9) scroll_pane_cp17

0x1a68,	// (0x00030a32) volume_small_pane_cp_g1

0x1d9f,	// (0x00030d69) volume_small_pane_cp_g2

0x1da8,	// (0x00030d72) volume_small_pane_cp_g3

0x1a7a,	// (0x00030a44) volume_small_pane_cp_g4

0x1db1,	// (0x00030d7b) volume_small_pane_cp_g5

0x1d72,	// (0x00030d3c) volume_small_pane_cp_g6

0x1a8c,	// (0x00030a56) volume_small_pane_cp_g7

0x1dba,	// (0x00030d84) volume_small_pane_cp_g8

0x1dc3,	// (0x00030d8d) volume_small_pane_cp_g9

0x1a9e,	// (0x00030a68) volume_small_pane_cp_g10

0x4ca6,	// (0x00033c70) midp_ticker_pane_g1_ParamLimits

0x4cb2,	// (0x00033c7c) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003e722) midp_ticker_pane_g_ParamLimits

0x4cbe,	// (0x00033c88) midp_ticker_pane_t1_ParamLimits

0xd75b,	// (0x0003c725) aid_fill_nsta_2

0x584d,	// (0x00034817) list_form2_midp_pane

0x696b,	// (0x00035935) midp_editing_number_pane_ParamLimits

0x697a,	// (0x00035944) midp_ticker_pane_ParamLimits

0x7567,	// (0x00036531) form2_midp_field_pane

0x758b,	// (0x00036555) scroll_pane_cp51

0x75ab,	// (0x00036575) form2_midp_button_pane_ParamLimits

0x75ab,	// (0x00036575) form2_midp_button_pane

0x75bd,	// (0x00036587) form2_midp_content_pane_ParamLimits

0x75bd,	// (0x00036587) form2_midp_content_pane

0x75d7,	// (0x000365a1) form2_midp_field_choice_group_pane

0x75df,	// (0x000365a9) form2_midp_field_pane_g1

0x75e7,	// (0x000365b1) form2_midp_field_pane_g2

0x75ef,	// (0x000365b9) form2_midp_field_pane_g3

0x75f7,	// (0x000365c1) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x0003eabc) form2_midp_field_pane_g

0x75ff,	// (0x000365c9) form2_midp_gauge_slider_pane

0x7607,	// (0x000365d1) form2_midp_gauge_wait_pane

0x760f,	// (0x000365d9) form2_midp_image_pane_ParamLimits

0x760f,	// (0x000365d9) form2_midp_image_pane

0x762a,	// (0x000365f4) form2_midp_label_pane_ParamLimits

0x762a,	// (0x000365f4) form2_midp_label_pane

0xe122,	// (0x0003d0ec) form2_midp_label_pane_cp_ParamLimits

0xe122,	// (0x0003d0ec) form2_midp_label_pane_cp

0x7664,	// (0x0003662e) form2_midp_string_pane_ParamLimits

0x7664,	// (0x0003662e) form2_midp_string_pane

0x331d,	// (0x000322e7) form2_midp_text_pane_ParamLimits

0x331d,	// (0x000322e7) form2_midp_text_pane

0x7676,	// (0x00036640) form2_midp_time_pane

0x7686,	// (0x00036650) input_focus_pane_cp51_ParamLimits

0x7686,	// (0x00036650) input_focus_pane_cp51

0x769e,	// (0x00036668) form2_midp_label_pane_t1_ParamLimits

0x769e,	// (0x00036668) form2_midp_label_pane_t1

0x3336,	// (0x00032300) form2_mdip_text_pane_t1_ParamLimits

0x3336,	// (0x00032300) form2_mdip_text_pane_t1

0x3354,	// (0x0003231e) form2_midp_time_pane_t1

0x76e6,	// (0x000366b0) form2_midp_gauge_slider_pane_t1

0xe143,	// (0x0003d10d) form2_midp_gauge_slider_pane_t2

0xe157,	// (0x0003d121) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x0003eac5) form2_midp_gauge_slider_pane_t

0x771c,	// (0x000366e6) form2_midp_slider_pane

0x7728,	// (0x000366f2) form2_midp_gauge_wait_pane_t1

0x7736,	// (0x00036700) form2_midp_wait_pane_ParamLimits

0x7736,	// (0x00036700) form2_midp_wait_pane

0xe16b,	// (0x0003d135) list_single_2graphic_pane_cp4_ParamLimits

0xe16b,	// (0x0003d135) list_single_2graphic_pane_cp4

0xdb79,	// (0x0003cb43) list_single_midp_graphic_pane_cp_ParamLimits

0xdb79,	// (0x0003cb43) list_single_midp_graphic_pane_cp

0x2dba,	// (0x00031d84) list_highlight_pane_cp20

0x7790,	// (0x0003675a) list_single_2graphic_pane_g1_cp4

0x6d8e,	// (0x00035d58) list_single_2graphic_pane_g2_cp4

0x7798,	// (0x00036762) list_single_2graphic_pane_t1_cp4

0x370b,	// (0x000326d5) list_highlight_pane_cp21

0x77a7,	// (0x00036771) list_single_midp_graphic_pane_g4_cp

0x77b6,	// (0x00036780) list_single_midp_graphic_pane_t1_cp

0xe181,	// (0x0003d14b) form2_mdip_string_pane_t1_ParamLimits

0xe181,	// (0x0003d14b) form2_mdip_string_pane_t1

0x2dba,	// (0x00031d84) bg_wml_button_pane_cp2

0x2db0,	// (0x00031d7a) form2_midp_image_pane_g1

0x07a9,	// (0x0002f773) list_double_large_graphic_pane_g5_ParamLimits

0x07a9,	// (0x0002f773) list_double_large_graphic_pane_g5

0x4f0b,	// (0x00033ed5) midp_form_pane_ParamLimits

0x370b,	// (0x000326d5) main_apps_wheel_pane_ParamLimits

0xc378,	// (0x0003b342) popup_preview_window_ParamLimits

0xc378,	// (0x0003b342) popup_preview_window

0x17c6,	// (0x00030790) popup_touch_info_window_ParamLimits

0x17c6,	// (0x00030790) popup_touch_info_window

0x17e4,	// (0x000307ae) popup_touch_menu_window_ParamLimits

0x17e4,	// (0x000307ae) popup_touch_menu_window

0x2da6,	// (0x00031d70) bg_popup_sub_pane_cp6

0x78ee,	// (0x000368b8) list_touch_menu_pane

0x78f6,	// (0x000368c0) list_single_touch_menu_pane_ParamLimits

0x78f6,	// (0x000368c0) list_single_touch_menu_pane

0x790a,	// (0x000368d4) list_single_touch_menu_pane_t1

0x370b,	// (0x000326d5) bg_popup_sub_pane_cp7_ParamLimits

0x370b,	// (0x000326d5) bg_popup_sub_pane_cp7

0x7918,	// (0x000368e2) heading_sub_pane

0x7920,	// (0x000368ea) list_touch_info_pane_ParamLimits

0x7920,	// (0x000368ea) list_touch_info_pane

0x792f,	// (0x000368f9) list_single_touch_info_pane_ParamLimits

0x792f,	// (0x000368f9) list_single_touch_info_pane

0x7941,	// (0x0003690b) list_single_touch_info_pane_t1

0x794f,	// (0x00036919) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x0003ead3) list_single_touch_info_pane_t

0x4bd1,	// (0x00033b9b) bg_popup_heading_pane_cp

0x795d,	// (0x00036927) heading_sub_pane_t1

0x547d,	// (0x00034447) bg_popup_preview_window_pane_cp_ParamLimits

0x547d,	// (0x00034447) bg_popup_preview_window_pane_cp

0x7918,	// (0x000368e2) heading_preview_pane

0x7920,	// (0x000368ea) list_preview_pane_ParamLimits

0x7920,	// (0x000368ea) list_preview_pane

0x796b,	// (0x00036935) popup_preview_window_g1

0x792f,	// (0x000368f9) list_single_preview_pane_ParamLimits

0x792f,	// (0x000368f9) list_single_preview_pane

0x7973,	// (0x0003693d) list_single_preview_pane_g1

0x797b,	// (0x00036945) list_single_preview_pane_t1

0x7941,	// (0x0003690b) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x0003ead8) list_single_preview_pane_t

0x7989,	// (0x00036953) bg_popup_heading_pane_cp2_ParamLimits

0x7989,	// (0x00036953) bg_popup_heading_pane_cp2

0x799f,	// (0x00036969) heading_preview_pane_g1

0x79a7,	// (0x00036971) heading_preview_pane_t1_ParamLimits

0x79a7,	// (0x00036971) heading_preview_pane_t1

0x37f7,	// (0x000327c1) soft_indicator_pane_t1_ParamLimits

0x3ed8,	// (0x00032ea2) scroll_pane_ParamLimits

0x43ec,	// (0x000333b6) scroll_sc2_left_pane

0x43f5,	// (0x000333bf) scroll_sc2_right_pane

0x4414,	// (0x000333de) scroll_bg_pane_g1_ParamLimits

0x4429,	// (0x000333f3) scroll_bg_pane_g2_ParamLimits

0x4441,	// (0x0003340b) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003e6ad) scroll_bg_pane_g_ParamLimits

0x4414,	// (0x000333de) scroll_handle_pane_g1_ParamLimits

0x4463,	// (0x0003342d) scroll_handle_pane_g2_ParamLimits

0x4441,	// (0x0003340b) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003e6b4) scroll_handle_pane_g_ParamLimits

0x1296,	// (0x00030260) popup_choice_list_window_ParamLimits

0x1296,	// (0x00030260) popup_choice_list_window

0x5353,	// (0x0003431d) choice_list_pane

0x53d5,	// (0x0003439f) cell_toolbar_pane_t1

0x53fd,	// (0x000343c7) toolbar_button_pane_ParamLimits

0x64d9,	// (0x000354a3) ai_gene_pane_1_t2_ParamLimits

0x64d9,	// (0x000354a3) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0003e8d7) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0003e8d7) ai_gene_pane_1_t

0x79c4,	// (0x0003698e) scroll_sc2_left_pane_g1

0x79c4,	// (0x0003698e) scroll_sc2_right_pane_g1

0x4f0b,	// (0x00033ed5) bg_popup_sub_pane_cp10

0x79ce,	// (0x00036998) list_choice_list_pane

0x79e7,	// (0x000369b1) list_single_choice_list_pane_ParamLimits

0x79e7,	// (0x000369b1) list_single_choice_list_pane

0x79fa,	// (0x000369c4) list_single_choice_list_pane_g1

0x40f7,	// (0x000330c1) list_single_choice_list_pane_t1_ParamLimits

0x40f7,	// (0x000330c1) list_single_choice_list_pane_t1

0x7a02,	// (0x000369cc) choice_list_pane_g1

0x7a0a,	// (0x000369d4) choice_list_pane_t1

0x2da6,	// (0x00031d70) input_focus_pane_cp11

0x42cb,	// (0x00033295) title_pane_stacon_g2_ParamLimits

0x42cb,	// (0x00033295) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003e693) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003e693) title_pane_stacon_g

0x4bd1,	// (0x00033b9b) cursor_press_pane

0xc031,	// (0x0003affb) popup_fep_hwr_window_ParamLimits

0xc031,	// (0x0003affb) popup_fep_hwr_window

0x13b6,	// (0x00030380) popup_fep_vkb_window_ParamLimits

0x13b6,	// (0x00030380) popup_fep_vkb_window

0x7a18,	// (0x000369e2) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x0003eb01) fep_vkb_side_pane_g_ParamLimits

0x1e05,	// (0x00030dcf) fep_hwr_candidate_pane_ParamLimits

0x1e05,	// (0x00030dcf) fep_hwr_candidate_pane

0x1e2f,	// (0x00030df9) fep_hwr_side_pane_ParamLimits

0x1e2f,	// (0x00030df9) fep_hwr_side_pane

0x1e4f,	// (0x00030e19) fep_hwr_top_pane_ParamLimits

0x1e4f,	// (0x00030e19) fep_hwr_top_pane

0x1e67,	// (0x00030e31) fep_hwr_write_pane_ParamLimits

0x1e67,	// (0x00030e31) fep_hwr_write_pane

0xfb37,	// (0x0003eb01) fep_vkb_side_pane_g

0x7a20,	// (0x000369ea) fep_hwr_top_pane_g1

0x7a32,	// (0x000369fc) fep_hwr_top_pane_g2

0x1ea1,	// (0x00030e6b) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x0003eadd) fep_hwr_top_pane_g

0x1eb6,	// (0x00030e80) fep_hwr_top_text_pane

0x45b9,	// (0x00033583) fep_hwr_top_text_pane_g1

0x7a68,	// (0x00036a32) fep_hwr_top_text_pane_t1

0x1fac,	// (0x00030f76) fep_hwr_candidate_pane_g1

0x7cab,	// (0x00036c75) fep_vkb_keypad_pane_g3_ParamLimits

0x7cab,	// (0x00036c75) fep_vkb_keypad_pane_g3

0x7cd3,	// (0x00036c9d) fep_vkb_keypad_pane_g4_ParamLimits

0x7cd3,	// (0x00036c9d) fep_vkb_keypad_pane_g4

0x7d42,	// (0x00036d0c) fep_vkb_bottom_pane_g2_ParamLimits

0x7d42,	// (0x00036d0c) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x0003eb08) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x0003eb08) fep_vkb_bottom_pane_g

0x79c4,	// (0x0003698e) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x0003eb12) cell_vkb_side_pane_g

0x7dcd,	// (0x00036d97) cell_vkb_side_pane_t1

0x7ddb,	// (0x00036da5) cell_vkb_side_pane_t1_copy1

0x79c4,	// (0x0003698e) bg_fep_vkb_candidate_pane_g2

0x7f07,	// (0x00036ed1) cell_vkb_candidate_pane_ParamLimits

0x7a76,	// (0x00036a40) aid_size_cell_vkb_ParamLimits

0x7a76,	// (0x00036a40) aid_size_cell_vkb

0x7f07,	// (0x00036ed1) cell_vkb_candidate_pane

0x1fd3,	// (0x00030f9d) bg_popup_fep_shadow_pane_g1

0xe211,	// (0x0003d1db) fep_vkb_bottom_pane_ParamLimits

0xe211,	// (0x0003d1db) fep_vkb_bottom_pane

0x7b38,	// (0x00036b02) fep_vkb_candidate_pane_ParamLimits

0x7b38,	// (0x00036b02) fep_vkb_candidate_pane

0xe236,	// (0x0003d200) fep_vkb_keypad_pane_ParamLimits

0xe236,	// (0x0003d200) fep_vkb_keypad_pane

0xe26b,	// (0x0003d235) fep_vkb_side_pane_ParamLimits

0xe26b,	// (0x0003d235) fep_vkb_side_pane

0xe2a7,	// (0x0003d271) fep_vkb_top_pane_ParamLimits

0xe2a7,	// (0x0003d271) fep_vkb_top_pane

0x7c04,	// (0x00036bce) fep_vkb_top_pane_g1_ParamLimits

0x7c04,	// (0x00036bce) fep_vkb_top_pane_g1

0x7c13,	// (0x00036bdd) fep_vkb_top_pane_g2_ParamLimits

0x7c13,	// (0x00036bdd) fep_vkb_top_pane_g2

0x7c22,	// (0x00036bec) fep_vkb_top_pane_g3_ParamLimits

0x7c22,	// (0x00036bec) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x0003eaf8) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x0003eaf8) fep_vkb_top_pane_g

0x7c40,	// (0x00036c0a) fep_vkb_top_text_pane_ParamLimits

0x7c40,	// (0x00036c0a) fep_vkb_top_text_pane

0xe2dc,	// (0x0003d2a6) fep_vkb_side_pane_g1_ParamLimits

0xe2dc,	// (0x0003d2a6) fep_vkb_side_pane_g1

0x7c9a,	// (0x00036c64) grid_vkb_side_pane_ParamLimits

0x7c9a,	// (0x00036c64) grid_vkb_side_pane

0x1fdb,	// (0x00030fa5) bg_popup_fep_shadow_pane_g2

0x1fe4,	// (0x00030fae) bg_popup_fep_shadow_pane_g3

0x1fec,	// (0x00030fb6) bg_popup_fep_shadow_pane_g4

0x1ff5,	// (0x00030fbf) bg_popup_fep_shadow_pane_g5

0x1fff,	// (0x00030fc9) bg_popup_fep_shadow_pane_g6

0x2007,	// (0x00030fd1) bg_popup_fep_shadow_pane_g7

0x3fd8,	// (0x00032fa2) bg_popup_fep_shadow_pane_g8

0x7cf1,	// (0x00036cbb) grid_vkb_keypad_number_pane_ParamLimits

0x7cf1,	// (0x00036cbb) grid_vkb_keypad_number_pane

0x7d01,	// (0x00036ccb) grid_vkb_keypad_pane_ParamLimits

0x7d01,	// (0x00036ccb) grid_vkb_keypad_pane

0x7d27,	// (0x00036cf1) fep_vkb_bottom_pane_g1_ParamLimits

0x7d27,	// (0x00036cf1) fep_vkb_bottom_pane_g1

0x7d50,	// (0x00036d1a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7d50,	// (0x00036d1a) grid_vkb_keypad_bottom_left_pane

0x7d65,	// (0x00036d2f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7d65,	// (0x00036d2f) grid_vkb_keypad_bottom_right_pane

0x7d7a,	// (0x00036d44) fep_vkb_top_text_pane_g1

0xe323,	// (0x0003d2ed) fep_vkb_top_text_pane_t1

0xe335,	// (0x0003d2ff) cell_vkb_side_pane_ParamLimits

0xe335,	// (0x0003d2ff) cell_vkb_side_pane

0x79c4,	// (0x0003698e) cell_vkb_side_pane_g1

0x7de9,	// (0x00036db3) cell_vkb_keypad_pane_ParamLimits

0x7de9,	// (0x00036db3) cell_vkb_keypad_pane

0x7e5e,	// (0x00036e28) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x0003eb25) bg_popup_fep_shadow_pane_g

0x2019,	// (0x00030fe3) cell_hwr_side_pane_g1

0x2019,	// (0x00030fe3) cell_hwr_side_pane_g2

0x7e68,	// (0x00036e32) cell_vkb_keypad_pane_t1

0xe34b,	// (0x0003d315) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe34b,	// (0x0003d315) cell_vkb_keypad_bottom_left_pane

0xe360,	// (0x0003d32a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe360,	// (0x0003d32a) cell_vkb_keypad_bottom_right_pane

0x79c4,	// (0x0003698e) cell_vkb_keypad_bottom_left_pane_g1

0x79c4,	// (0x0003698e) cell_vkb_keypad_bottom_right_pane_g1

0x7ecc,	// (0x00036e96) cell_vkb_keypad_number_pane_ParamLimits

0x7ecc,	// (0x00036e96) cell_vkb_keypad_number_pane

0x7eeb,	// (0x00036eb5) cell_vkb_keypad_number_pane_g1

0x7ef5,	// (0x00036ebf) cell_vkb_keypad_number_pane_g2

0x7efe,	// (0x00036ec8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x0003eb17) cell_vkb_keypad_number_pane_g

0x7e68,	// (0x00036e32) cell_vkb_keypad_number_pane_t1

0x7f22,	// (0x00036eec) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x0003eb38) cell_hwr_side_pane_g

0x7f3b,	// (0x00036f05) cell_hwr_side_pane_t1

0x2023,	// (0x00030fed) cell_hwr_side_pane_t1_copy1

0x2031,	// (0x00030ffb) cell_hwr_candidate_pane_g1

0x2060,	// (0x0003102a) cell_hwr_candidate_pane_t1

0x79c4,	// (0x0003698e) cell_vkb_candidate_pane_g2

0x7f7f,	// (0x00036f49) cell_vkb_candidate_pane_t1

0x1dcc,	// (0x00030d96) bg_popup_fep_shadow_pane_ParamLimits

0x1dcc,	// (0x00030d96) bg_popup_fep_shadow_pane

0x1e81,	// (0x00030e4b) bg_fep_hwr_top_pane_g4

0x7a44,	// (0x00036a0e) bg_hwr_side_pane_g1_ParamLimits

0x7a44,	// (0x00036a0e) bg_hwr_side_pane_g1

0xc81c,	// (0x0003b7e6) cell_hwr_side_pane_ParamLimits

0xc81c,	// (0x0003b7e6) cell_hwr_side_pane

0x1f2d,	// (0x00030ef7) fep_hwr_write_pane_g1_ParamLimits

0x1f2d,	// (0x00030ef7) fep_hwr_write_pane_g1

0x1f3a,	// (0x00030f04) fep_hwr_write_pane_g2_ParamLimits

0x1f3a,	// (0x00030f04) fep_hwr_write_pane_g2

0x1f47,	// (0x00030f11) fep_hwr_write_pane_g3_ParamLimits

0x1f47,	// (0x00030f11) fep_hwr_write_pane_g3

0xc83c,	// (0x0003b806) fep_hwr_write_pane_g4_ParamLimits

0xc83c,	// (0x0003b806) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x0003eae4) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x0003eae4) fep_hwr_write_pane_g

0x1e81,	// (0x00030e4b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1e81,	// (0x00030e4b) bg_fep_hwr_candidate_pane_g2

0x1f6a,	// (0x00030f34) cell_hwr_candidate_pane_ParamLimits

0x1f6a,	// (0x00030f34) cell_hwr_candidate_pane

0x1fac,	// (0x00030f76) fep_hwr_candidate_pane_g1_ParamLimits

0x7aa4,	// (0x00036a6e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7aa4,	// (0x00036a6e) bg_popup_fep_shadow_pane_cp2

0x7c32,	// (0x00036bfc) fep_vkb_top_pane_g4_ParamLimits

0x7c32,	// (0x00036bfc) fep_vkb_top_pane_g4

0x7c78,	// (0x00036c42) fep_vkb_side_pane_g2_ParamLimits

0x7c78,	// (0x00036c42) fep_vkb_side_pane_g2

0xbb33,	// (0x0003aafd) list_setting_pane_t4_ParamLimits

0xbb33,	// (0x0003aafd) list_setting_pane_t4

0xbbb5,	// (0x0003ab7f) list_setting_number_pane_t5_ParamLimits

0xbbb5,	// (0x0003ab7f) list_setting_number_pane_t5

0xd4a9,	// (0x0003c473) list_double_heading_pane_cp2_ParamLimits

0xd4a9,	// (0x0003c473) list_double_heading_pane_cp2

0x3f73,	// (0x00032f3d) list_double_heading_pane_g1_cp2_ParamLimits

0x3f73,	// (0x00032f3d) list_double_heading_pane_g1_cp2

0x3f7f,	// (0x00032f49) list_double_heading_pane_g2_cp2_ParamLimits

0x3f7f,	// (0x00032f49) list_double_heading_pane_g2_cp2

0x7f8d,	// (0x00036f57) list_double_heading_pane_t1_cp2_ParamLimits

0x7f8d,	// (0x00036f57) list_double_heading_pane_t1_cp2

0x7fa3,	// (0x00036f6d) list_double_heading_pane_t2_cp2_ParamLimits

0x7fa3,	// (0x00036f6d) list_double_heading_pane_t2_cp2

0x2d8e,	// (0x00031d58) aid_value_unit2

0x035c,	// (0x0002f326) popup_preview_fixed_window

0x3994,	// (0x0003295e) bg_popup_preview_window_pane_cp02

0x7fb5,	// (0x00036f7f) list_preview_fixed_pane

0x7ffb,	// (0x00036fc5) list_empty_pane_fp_ParamLimits

0x7ffb,	// (0x00036fc5) list_empty_pane_fp

0x7ffb,	// (0x00036fc5) list_single_cale_day_pane_fp_ParamLimits

0x7ffb,	// (0x00036fc5) list_single_cale_day_pane_fp

0x7ffb,	// (0x00036fc5) list_single_graphic_heading_pane_fp_ParamLimits

0x7ffb,	// (0x00036fc5) list_single_graphic_heading_pane_fp

0x7ffb,	// (0x00036fc5) list_single_graphic_pane_fp_ParamLimits

0x7ffb,	// (0x00036fc5) list_single_graphic_pane_fp

0x7ffb,	// (0x00036fc5) list_single_heading_pane_fp_ParamLimits

0x7ffb,	// (0x00036fc5) list_single_heading_pane_fp

0x7ffb,	// (0x00036fc5) list_single_pane_fp_ParamLimits

0x7ffb,	// (0x00036fc5) list_single_pane_fp

0x8011,	// (0x00036fdb) list_single_pane_fp_g1_ParamLimits

0x8011,	// (0x00036fdb) list_single_pane_fp_g1

0x0618,	// (0x0002f5e2) list_single_pane_fp_g2_ParamLimits

0x0618,	// (0x0002f5e2) list_single_pane_fp_g2

0x3367,	// (0x00032331) list_single_pane_fp_g3_ParamLimits

0x3367,	// (0x00032331) list_single_pane_fp_g3

0x801d,	// (0x00036fe7) list_single_pane_fp_g4_ParamLimits

0x801d,	// (0x00036fe7) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0003eb4b) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0003eb4b) list_single_pane_fp_g

0x337b,	// (0x00032345) list_single_pane_fp_t1_ParamLimits

0x337b,	// (0x00032345) list_single_pane_fp_t1

0x3392,	// (0x0003235c) list_single_graphic_pane_fp_g1_ParamLimits

0x3392,	// (0x0003235c) list_single_graphic_pane_fp_g1

0x8011,	// (0x00036fdb) list_single_graphic_pane_fp_g2_ParamLimits

0x8011,	// (0x00036fdb) list_single_graphic_pane_fp_g2

0x0618,	// (0x0002f5e2) list_single_graphic_pane_fp_g3_ParamLimits

0x0618,	// (0x0002f5e2) list_single_graphic_pane_fp_g3

0x3367,	// (0x00032331) list_single_graphic_pane_fp_g4_ParamLimits

0x3367,	// (0x00032331) list_single_graphic_pane_fp_g4

0x801d,	// (0x00036fe7) list_single_graphic_pane_fp_g5_ParamLimits

0x801d,	// (0x00036fe7) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003eb54) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003eb54) list_single_graphic_pane_fp_g

0x339e,	// (0x00032368) list_single_graphic_pane_fp_t1_ParamLimits

0x339e,	// (0x00032368) list_single_graphic_pane_fp_t1

0x3392,	// (0x0003235c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3392,	// (0x0003235c) list_single_graphic_heading_pane_fp_g1

0x8011,	// (0x00036fdb) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8011,	// (0x00036fdb) list_single_graphic_heading_pane_fp_g2

0x0618,	// (0x0002f5e2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0618,	// (0x0002f5e2) list_single_graphic_heading_pane_fp_g3

0x3367,	// (0x00032331) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3367,	// (0x00032331) list_single_graphic_heading_pane_fp_g4

0x801d,	// (0x00036fe7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x801d,	// (0x00036fe7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003eb54) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003eb54) list_single_graphic_heading_pane_fp_g

0x33b4,	// (0x0003237e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x33b4,	// (0x0003237e) list_single_graphic_heading_pane_fp_t1

0x33ca,	// (0x00032394) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x33ca,	// (0x00032394) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0003eb5f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0003eb5f) list_single_graphic_heading_pane_fp_t

0x33dc,	// (0x000323a6) list_single_cale_day_pane_fp_g1_ParamLimits

0x33dc,	// (0x000323a6) list_single_cale_day_pane_fp_g1

0x8029,	// (0x00036ff3) list_single_cale_day_pane_fp_g2_ParamLimits

0x8029,	// (0x00036ff3) list_single_cale_day_pane_fp_g2

0x3414,	// (0x000323de) list_single_cale_day_pane_fp_g3_ParamLimits

0x3414,	// (0x000323de) list_single_cale_day_pane_fp_g3

0x343c,	// (0x00032406) list_single_cale_day_pane_fp_g4_ParamLimits

0x343c,	// (0x00032406) list_single_cale_day_pane_fp_g4

0x3460,	// (0x0003242a) list_single_cale_day_pane_fp_g5_ParamLimits

0x3460,	// (0x0003242a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x0003eb64) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x0003eb64) list_single_cale_day_pane_fp_g

0x3484,	// (0x0003244e) list_single_cale_day_pane_fp_t1_ParamLimits

0x3484,	// (0x0003244e) list_single_cale_day_pane_fp_t1

0x34aa,	// (0x00032474) list_single_cale_day_pane_fp_t2_ParamLimits

0x34aa,	// (0x00032474) list_single_cale_day_pane_fp_t2

0x34c3,	// (0x0003248d) list_single_cale_day_pane_fp_t3_ParamLimits

0x34c3,	// (0x0003248d) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x0003eb6f) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x0003eb6f) list_single_cale_day_pane_fp_t

0x8011,	// (0x00036fdb) list_empty_pane_fp_g1_ParamLimits

0x8011,	// (0x00036fdb) list_empty_pane_fp_g1

0x34dc,	// (0x000324a6) list_empty_pane_fp_t1

0x34ea,	// (0x000324b4) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x0003eb76) list_empty_pane_fp_t

0x8011,	// (0x00036fdb) list_single_heading_pane_fp_g1_ParamLimits

0x8011,	// (0x00036fdb) list_single_heading_pane_fp_g1

0x0618,	// (0x0002f5e2) list_single_heading_pane_fp_g2_ParamLimits

0x0618,	// (0x0002f5e2) list_single_heading_pane_fp_g2

0x3367,	// (0x00032331) list_single_heading_pane_fp_g3_ParamLimits

0x3367,	// (0x00032331) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0003eb7b) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0003eb7b) list_single_heading_pane_fp_g

0x34f8,	// (0x000324c2) list_single_heading_pane_fp_t1_ParamLimits

0x34f8,	// (0x000324c2) list_single_heading_pane_fp_t1

0x350a,	// (0x000324d4) list_single_heading_pane_fp_t2_ParamLimits

0x350a,	// (0x000324d4) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0003eb82) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0003eb82) list_single_heading_pane_fp_t

0x4165,	// (0x0003312f) aid_size_cell_fast

0x3904,	// (0x000328ce) soft_indicator_pane_cp1_t1

0x419f,	// (0x00033169) cell_app_pane_cp2_ParamLimits

0x419f,	// (0x00033169) cell_app_pane_cp2

0x1dee,	// (0x00030db8) fep_hwr_candidate_drop_down_list_pane

0x1fc6,	// (0x00030f90) fep_hwr_candidate_pane_g3_ParamLimits

0x1fc6,	// (0x00030f90) fep_hwr_candidate_pane_g3

0xed7c,	// (0x0003dd46) fep_hwr_candidate_pane_g4_ParamLimits

0xed7c,	// (0x0003dd46) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x0003eaf1) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x0003eaf1) fep_hwr_candidate_pane_g

0x7b27,	// (0x00036af1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7b27,	// (0x00036af1) fep_vkb_candidate_drop_down_list_pane

0x7f2a,	// (0x00036ef4) fep_vkb_candidate_pane_g3

0x7f32,	// (0x00036efc) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x0003eb1e) fep_vkb_candidate_pane_g

0x2031,	// (0x00030ffb) cell_hwr_candidate_pane_g1_ParamLimits

0x203f,	// (0x00031009) cell_hwr_candidate_pane_g3_ParamLimits

0x203f,	// (0x00031009) cell_hwr_candidate_pane_g3

0x968c,	// (0x00038656) cell_hwr_candidate_pane_g4_ParamLimits

0x968c,	// (0x00038656) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0003eb3d) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0003eb3d) cell_hwr_candidate_pane_g

0x7f49,	// (0x00036f13) cell_vkb_candidate_pane_g3_ParamLimits

0x7f49,	// (0x00036f13) cell_vkb_candidate_pane_g3

0x7f64,	// (0x00036f2e) cell_vkb_candidate_pane_g4_ParamLimits

0x7f64,	// (0x00036f2e) cell_vkb_candidate_pane_g4

0x8035,	// (0x00036fff) cell_app_pane_cp2_g1_ParamLimits

0x8035,	// (0x00036fff) cell_app_pane_cp2_g1

0x8053,	// (0x0003701d) cell_app_pane_cp2_g2_ParamLimits

0x8053,	// (0x0003701d) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x0003eb87) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x0003eb87) cell_app_pane_cp2_g

0x805f,	// (0x00037029) cell_app_pane_cp2_t1_ParamLimits

0x805f,	// (0x00037029) cell_app_pane_cp2_t1

0x3f65,	// (0x00032f2f) grid_highlight_pane_cp1_ParamLimits

0x3f65,	// (0x00032f2f) grid_highlight_pane_cp1

0x207e,	// (0x00031048) cell_hwr_candidate_pane_cp1_ParamLimits

0x207e,	// (0x00031048) cell_hwr_candidate_pane_cp1

0x2031,	// (0x00030ffb) fep_hwr_candidate_drop_down_list_pane_g1

0x209d,	// (0x00031067) fep_hwr_candidate_drop_down_list_pane_g2

0x20aa,	// (0x00031074) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0003eb8c) fep_hwr_candidate_drop_down_list_pane_g

0x20b7,	// (0x00031081) fep_hwr_candidate_drop_down_list_scroll_pane

0x20c0,	// (0x0003108a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x20c0,	// (0x0003108a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x20cd,	// (0x00031097) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x20cd,	// (0x00031097) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x20da,	// (0x000310a4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x20da,	// (0x000310a4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x20e7,	// (0x000310b1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x20e7,	// (0x000310b1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x2102,	// (0x000310cc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x2102,	// (0x000310cc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x211d,	// (0x000310e7) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x211d,	// (0x000310e7) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2138,	// (0x00031102) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2138,	// (0x00031102) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2153,	// (0x0003111d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2153,	// (0x0003111d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0003eb93) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0003eb93) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8071,	// (0x0003703b) cell_vkb_candidate_pane_cp1_ParamLimits

0x8071,	// (0x0003703b) cell_vkb_candidate_pane_cp1

0x7c32,	// (0x00036bfc) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7c32,	// (0x00036bfc) fep_vkb_candidate_drop_down_list_pane_g1

0x8091,	// (0x0003705b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8091,	// (0x0003705b) fep_vkb_candidate_drop_down_list_pane_g2

0x809e,	// (0x00037068) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x809e,	// (0x00037068) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0003eba4) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x0003eba4) fep_vkb_candidate_drop_down_list_pane_g

0x80ab,	// (0x00037075) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x80ab,	// (0x00037075) fep_vkb_candidate_drop_down_list_scroll_pane

0x80b8,	// (0x00037082) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x80b8,	// (0x00037082) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x80c5,	// (0x0003708f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x80c5,	// (0x0003708f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x80d1,	// (0x0003709b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x80d1,	// (0x0003709b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x80dd,	// (0x000370a7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x80dd,	// (0x000370a7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x80fe,	// (0x000370c8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x80fe,	// (0x000370c8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x811f,	// (0x000370e9) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x811f,	// (0x000370e9) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8140,	// (0x0003710a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8140,	// (0x0003710a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8161,	// (0x0003712b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8161,	// (0x0003712b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0003ebab) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0003ebab) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd01c,	// (0x0003bfe6) title_pane_g1_ParamLimits

0xd02f,	// (0x0003bff9) title_pane_g2_ParamLimits

0xf54e,	// (0x0003e518) title_pane_g_ParamLimits

0x45a9,	// (0x00033573) aid_call2_pane

0x45b1,	// (0x0003357b) aid_call_pane

0x45b9,	// (0x00033583) popup_clock_analogue_window_g1

0x45b9,	// (0x00033583) popup_clock_analogue_window_g2

0x0dbc,	// (0x0002fd86) popup_clock_analogue_window_g3

0x0dc5,	// (0x0002fd8f) popup_clock_analogue_window_g4

0x2db0,	// (0x00031d7a) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003e6c2) popup_clock_analogue_window_g

0x0dcd,	// (0x0002fd97) popup_clock_analogue_window_t1

0x0ddb,	// (0x0002fda5) clock_digital_number_pane_ParamLimits

0x0ddb,	// (0x0002fda5) clock_digital_number_pane

0x0de7,	// (0x0002fdb1) clock_digital_number_pane_cp02_ParamLimits

0x0de7,	// (0x0002fdb1) clock_digital_number_pane_cp02

0x0df3,	// (0x0002fdbd) clock_digital_number_pane_cp03_ParamLimits

0x0df3,	// (0x0002fdbd) clock_digital_number_pane_cp03

0x0dff,	// (0x0002fdc9) clock_digital_number_pane_cp04_ParamLimits

0x0dff,	// (0x0002fdc9) clock_digital_number_pane_cp04

0x0e0b,	// (0x0002fdd5) clock_digital_separator_pane_ParamLimits

0x0e0b,	// (0x0002fdd5) clock_digital_separator_pane

0x0e17,	// (0x0002fde1) popup_clock_digital_window_t1_ParamLimits

0x0e17,	// (0x0002fde1) popup_clock_digital_window_t1

0x2db0,	// (0x00031d7a) clock_digital_number_pane_g1

0x2db0,	// (0x00031d7a) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003e6cd) clock_digital_number_pane_g

0x2db0,	// (0x00031d7a) clock_digital_separator_pane_g1

0x2db0,	// (0x00031d7a) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003e6cd) clock_digital_separator_pane_g

0xd737,	// (0x0003c701) aid_fill_nsta_ParamLimits

0xd86d,	// (0x0003c837) indicator_nsta_pane_ParamLimits

0x51e8,	// (0x000341b2) popup_clock_analogue_window

0x51e8,	// (0x000341b2) popup_clock_digital_window

0x4126,	// (0x000330f0) grid_indicator_nsta_pane_ParamLimits

0x739c,	// (0x00036366) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x0003ea71) clock_nsta_pane_t

0x0d80,	// (0x0002fd4a) aid_size_max_handle

0x0d8a,	// (0x0002fd54) aid_size_min_handle

0x4bd1,	// (0x00033b9b) editor_scroll_pane

0x817c,	// (0x00037146) ex_editor_pane

0x40d3,	// (0x0003309d) scroll_pane_cp13

0x3f04,	// (0x00032ece) scroll_pane_cp14

0x45e8,	// (0x000335b2) scroll_pane_cp36

0xd4ba,	// (0x0003c484) list_single_graphic_hl_pane_cp2_ParamLimits

0xd4ba,	// (0x0003c484) list_single_graphic_hl_pane_cp2

0xc7de,	// (0x0003b7a8) list_single_graphic_hl_pane_ParamLimits

0xc7de,	// (0x0003b7a8) list_single_graphic_hl_pane

0x3520,	// (0x000324ea) aid_size_min_hl_cp1

0x8184,	// (0x0003714e) list_highlight_pane_cp34_ParamLimits

0x8184,	// (0x0003714e) list_highlight_pane_cp34

0x8195,	// (0x0003715f) list_single_graphic_hl_pane_g1_ParamLimits

0x8195,	// (0x0003715f) list_single_graphic_hl_pane_g1

0xc851,	// (0x0003b81b) list_single_graphic_hl_pane_g2_ParamLimits

0xc851,	// (0x0003b81b) list_single_graphic_hl_pane_g2

0xc851,	// (0x0003b81b) list_single_graphic_hl_pane_g3_ParamLimits

0xc851,	// (0x0003b81b) list_single_graphic_hl_pane_g3

0x052d,	// (0x0002f4f7) list_single_graphic_hl_pane_g4_ParamLimits

0x052d,	// (0x0002f4f7) list_single_graphic_hl_pane_g4

0xc85d,	// (0x0003b827) list_single_graphic_hl_pane_g5_ParamLimits

0xc85d,	// (0x0003b827) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x0003ebbc) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x0003ebbc) list_single_graphic_hl_pane_g

0xc871,	// (0x0003b83b) list_single_graphic_hl_pane_t1_ParamLimits

0xc871,	// (0x0003b83b) list_single_graphic_hl_pane_t1

0x81a2,	// (0x0003716c) aid_size_min_hl_cp2

0x81ab,	// (0x00037175) list_highlight_pane_cp34_cp2_ParamLimits

0x81ab,	// (0x00037175) list_highlight_pane_cp34_cp2

0x8195,	// (0x0003715f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8195,	// (0x0003715f) list_single_graphic_hl_pane_g1_cp2

0x81b8,	// (0x00037182) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x81b8,	// (0x00037182) list_single_graphic_hl_pane_g2_cp2

0x81c4,	// (0x0003718e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x81c4,	// (0x0003718e) list_single_graphic_hl_pane_g3_cp2

0x49f5,	// (0x000339bf) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x49f5,	// (0x000339bf) list_single_graphic_hl_pane_g4_cp2

0x81d2,	// (0x0003719c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x81d2,	// (0x0003719c) list_single_graphic_hl_pane_g5_cp2

0xbe4b,	// (0x0003ae15) control_pane_g4_ParamLimits

0xbe4b,	// (0x0003ae15) control_pane_g4

0x4f0b,	// (0x00033ed5) bg_popup_sub_pane_cp10_ParamLimits

0x79ce,	// (0x00036998) list_choice_list_pane_ParamLimits

0x79dd,	// (0x000369a7) scroll_pane_cp23

0x3994,	// (0x0003295e) bg_popup_preview_window_pane_cp02_ParamLimits

0x7fb5,	// (0x00036f7f) list_preview_fixed_pane_ParamLimits

0x7fcb,	// (0x00036f95) list_preview_fixed_pane_cp_ParamLimits

0x7fcb,	// (0x00036f95) list_preview_fixed_pane_cp

0x7fd7,	// (0x00036fa1) popup_preview_fixed_window_g1_ParamLimits

0x7fd7,	// (0x00036fa1) popup_preview_fixed_window_g1

0x7fe3,	// (0x00036fad) popup_preview_fixed_window_g2_ParamLimits

0x7fe3,	// (0x00036fad) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x0003eb44) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x0003eb44) popup_preview_fixed_window_g

0x0cf4,	// (0x0002fcbe) aid_navi_side_left_pane_ParamLimits

0x0d09,	// (0x0002fcd3) aid_navi_side_right_pane_ParamLimits

0x0d21,	// (0x0002fceb) navi_icon_pane_stacon_ParamLimits

0x0d35,	// (0x0002fcff) navi_navi_pane_stacon_ParamLimits

0x0d21,	// (0x0002fceb) navi_text_pane_stacon_ParamLimits

0x022b,	// (0x0002f1f5) main_text_info_pane

0x81fc,	// (0x000371c6) listscroll_text_info_pane

0x8204,	// (0x000371ce) list_text_info_pane_ParamLimits

0x8204,	// (0x000371ce) list_text_info_pane

0x8213,	// (0x000371dd) scroll_pane_cp24_ParamLimits

0x8213,	// (0x000371dd) scroll_pane_cp24

0xe37b,	// (0x0003d345) list_text_info_pane_t1_ParamLimits

0xe37b,	// (0x0003d345) list_text_info_pane_t1

0xbfa6,	// (0x0003af70) popup_fast_swap2_window_ParamLimits

0xbfa6,	// (0x0003af70) popup_fast_swap2_window

0x8266,	// (0x00037230) aid_size_cell_fast2

0x2da6,	// (0x00031d70) bg_popup_window_pane_cp17

0x5879,	// (0x00034843) heading_pane_cp2

0x3bd7,	// (0x00032ba1) listscroll_fast2_pane

0x8270,	// (0x0003723a) grid_fast2_pane

0x827a,	// (0x00037244) listscroll_fast2_pane_g1

0x8282,	// (0x0003724c) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x0003ebc7) listscroll_fast2_pane_g

0x40d3,	// (0x0003309d) scroll_pane_cp26

0x828c,	// (0x00037256) cell_fast2_pane_ParamLimits

0x828c,	// (0x00037256) cell_fast2_pane

0x82a1,	// (0x0003726b) cell_fast2_pane_g1

0x82aa,	// (0x00037274) cell_fast2_pane_g2

0x82b3,	// (0x0003727d) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x0003ebcc) cell_fast2_pane_g

0x3cc1,	// (0x00032c8b) grid_highlight_pane_cp9

0x1272,	// (0x0003023c) main_eswt_pane_ParamLimits

0x1272,	// (0x0003023c) main_eswt_pane

0x8228,	// (0x000371f2) list_single_text_info_pane

0x82bb,	// (0x00037285) eswt_ctrl_button_pane

0x82bb,	// (0x00037285) eswt_ctrl_canvas_pane

0x82c3,	// (0x0003728d) eswt_ctrl_combo_pane

0x82bb,	// (0x00037285) eswt_ctrl_default_pane

0x82bb,	// (0x00037285) eswt_ctrl_label_pane

0x82cb,	// (0x00037295) eswt_ctrl_wait_pane

0x82d3,	// (0x0003729d) eswt_shell_pane

0x2da6,	// (0x00031d70) listscroll_eswt_app_pane

0x82f3,	// (0x000372bd) popup_eswt_tasktip_window_ParamLimits

0x82f3,	// (0x000372bd) popup_eswt_tasktip_window

0x547d,	// (0x00034447) bg_popup_window_pane_cp18

0x8304,	// (0x000372ce) eswt_control_pane_g1_ParamLimits

0x8304,	// (0x000372ce) eswt_control_pane_g1

0x8311,	// (0x000372db) eswt_control_pane_g2_ParamLimits

0x8311,	// (0x000372db) eswt_control_pane_g2

0x831e,	// (0x000372e8) eswt_control_pane_g3_ParamLimits

0x831e,	// (0x000372e8) eswt_control_pane_g3

0x832b,	// (0x000372f5) eswt_control_pane_g4_ParamLimits

0x832b,	// (0x000372f5) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x0003ebd3) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x0003ebd3) eswt_control_pane_g

0x3f65,	// (0x00032f2f) bg_button_pane_ParamLimits

0x3f65,	// (0x00032f2f) bg_button_pane

0x3cd6,	// (0x00032ca0) common_borders_pane_copy2_ParamLimits

0x3cd6,	// (0x00032ca0) common_borders_pane_copy2

0x8338,	// (0x00037302) control_button_pane_g1_ParamLimits

0x8338,	// (0x00037302) control_button_pane_g1

0x8344,	// (0x0003730e) control_button_pane_g2_ParamLimits

0x8344,	// (0x0003730e) control_button_pane_g2

0x8350,	// (0x0003731a) control_button_pane_g3_ParamLimits

0x8350,	// (0x0003731a) control_button_pane_g3

0x0002,

0xfc12,	// (0x0003ebdc) control_button_pane_g_ParamLimits

0xfc12,	// (0x0003ebdc) control_button_pane_g

0x8364,	// (0x0003732e) control_button_pane_t1

0x8372,	// (0x0003733c) control_button_pane_t2

0x0001,

0xfc19,	// (0x0003ebe3) control_button_pane_t

0x5409,	// (0x000343d3) bg_button_pane_g1

0x5419,	// (0x000343e3) bg_button_pane_g2

0x5411,	// (0x000343db) bg_button_pane_g3

0x5429,	// (0x000343f3) bg_button_pane_g4

0x5421,	// (0x000343eb) bg_button_pane_g5

0x5431,	// (0x000343fb) bg_button_pane_g6

0x5439,	// (0x00034403) bg_button_pane_g7

0x5449,	// (0x00034413) bg_button_pane_g8

0x5441,	// (0x0003440b) bg_button_pane_g9

0x0008,

0xf861,	// (0x0003e82b) bg_button_pane_g

0x7989,	// (0x00036953) common_borders_pane_ParamLimits

0x7989,	// (0x00036953) common_borders_pane

0x8304,	// (0x000372ce) eswt_control_pane_g1_copy1_ParamLimits

0x8304,	// (0x000372ce) eswt_control_pane_g1_copy1

0x8311,	// (0x000372db) eswt_control_pane_g2_copy1_ParamLimits

0x8311,	// (0x000372db) eswt_control_pane_g2_copy1

0x831e,	// (0x000372e8) eswt_control_pane_g3_copy1_ParamLimits

0x831e,	// (0x000372e8) eswt_control_pane_g3_copy1

0x832b,	// (0x000372f5) eswt_control_pane_g4_copy1_ParamLimits

0x832b,	// (0x000372f5) eswt_control_pane_g4_copy1

0x79c4,	// (0x0003698e) bg_eswt_ctrl_canvas_pane_g1

0x7989,	// (0x00036953) common_borders_pane_cp2_ParamLimits

0x7989,	// (0x00036953) common_borders_pane_cp2

0x7989,	// (0x00036953) common_borders_pane_cp3_ParamLimits

0x7989,	// (0x00036953) common_borders_pane_cp3

0x8380,	// (0x0003734a) separator_horizontal_pane

0x8388,	// (0x00037352) separator_vertical_pane

0x8304,	// (0x000372ce) eswt_control_pane_g1_copy2_ParamLimits

0x8304,	// (0x000372ce) eswt_control_pane_g1_copy2

0x8311,	// (0x000372db) eswt_control_pane_g2_copy2_ParamLimits

0x8311,	// (0x000372db) eswt_control_pane_g2_copy2

0x831e,	// (0x000372e8) eswt_control_pane_g3_copy2_ParamLimits

0x831e,	// (0x000372e8) eswt_control_pane_g3_copy2

0x832b,	// (0x000372f5) eswt_control_pane_g4_copy2_ParamLimits

0x832b,	// (0x000372f5) eswt_control_pane_g4_copy2

0x2da6,	// (0x00031d70) common_borders_pane_cp4

0x8391,	// (0x0003735b) separator_horizontal_pane_g1

0x839a,	// (0x00037364) separator_horizontal_pane_g2

0x83a3,	// (0x0003736d) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x0003ebe8) separator_horizontal_pane_g

0x8304,	// (0x000372ce) eswt_control_pane_g1_copy3_ParamLimits

0x8304,	// (0x000372ce) eswt_control_pane_g1_copy3

0x8311,	// (0x000372db) eswt_control_pane_g2_copy3_ParamLimits

0x8311,	// (0x000372db) eswt_control_pane_g2_copy3

0x831e,	// (0x000372e8) eswt_control_pane_g3_copy3_ParamLimits

0x831e,	// (0x000372e8) eswt_control_pane_g3_copy3

0x832b,	// (0x000372f5) eswt_control_pane_g4_copy3_ParamLimits

0x832b,	// (0x000372f5) eswt_control_pane_g4_copy3

0x2da6,	// (0x00031d70) common_borders_pane_cp5

0x83ac,	// (0x00037376) separator_vertical_pane_g1

0x83b5,	// (0x0003737f) separator_vertical_pane_g2

0x83be,	// (0x00037388) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x0003ebef) separator_vertical_pane_g

0x8304,	// (0x000372ce) eswt_control_pane_g1_copy4_ParamLimits

0x8304,	// (0x000372ce) eswt_control_pane_g1_copy4

0x8311,	// (0x000372db) eswt_control_pane_g2_copy4_ParamLimits

0x8311,	// (0x000372db) eswt_control_pane_g2_copy4

0x831e,	// (0x000372e8) eswt_control_pane_g3_copy4_ParamLimits

0x831e,	// (0x000372e8) eswt_control_pane_g3_copy4

0x832b,	// (0x000372f5) eswt_control_pane_g4_copy4_ParamLimits

0x832b,	// (0x000372f5) eswt_control_pane_g4_copy4

0x83c7,	// (0x00037391) eswt_ctrl_combo_button_pane

0x83cf,	// (0x00037399) eswt_ctrl_input_pane

0x83d7,	// (0x000373a1) popup_choice_list_window_cp70

0x83df,	// (0x000373a9) eswt_ctrl_input_pane_t1

0x2da6,	// (0x00031d70) input_focus_pane_cp70

0x7989,	// (0x00036953) bg_button_pane_cp70_ParamLimits

0x7989,	// (0x00036953) bg_button_pane_cp70

0x83ed,	// (0x000373b7) eswt_ctrl_combo_button_pane_g1

0x83f5,	// (0x000373bf) wait_bar_pane_cp70

0x547d,	// (0x00034447) bg_popup_window_pane_cp70_ParamLimits

0x547d,	// (0x00034447) bg_popup_window_pane_cp70

0x83fd,	// (0x000373c7) popup_eswt_tasktip_window_t1

0x8413,	// (0x000373dd) wait_bar_pane_cp71_ParamLimits

0x8413,	// (0x000373dd) wait_bar_pane_cp71

0x841f,	// (0x000373e9) grid_eswt_app_pane

0x43ec,	// (0x000333b6) scroll_pane_cp70

0xe3c0,	// (0x0003d38a) cell_eswt_app_pane_ParamLimits

0xe3c0,	// (0x0003d38a) cell_eswt_app_pane

0xe3ea,	// (0x0003d3b4) cell_eswt_app_pane_g1_ParamLimits

0xe3ea,	// (0x0003d3b4) cell_eswt_app_pane_g1

0xe419,	// (0x0003d3e3) cell_eswt_app_pane_g2_ParamLimits

0xe419,	// (0x0003d3e3) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x0003ebf6) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x0003ebf6) cell_eswt_app_pane_g

0xe43d,	// (0x0003d407) cell_eswt_app_pane_t1_ParamLimits

0xe43d,	// (0x0003d407) cell_eswt_app_pane_t1

0x84e1,	// (0x000374ab) grid_highlight_pane_cp70_ParamLimits

0x84e1,	// (0x000374ab) grid_highlight_pane_cp70

0x4ab2,	// (0x00033a7c) set_content_pane_g1

0xd6ec,	// (0x0003c6b6) status_small_volume_pane

0x216e,	// (0x00031138) status_small_volume_pane_g1

0x2176,	// (0x00031140) volume_small2_pane

0x217f,	// (0x00031149) volume_small2_pane_g1

0x2188,	// (0x00031152) volume_small2_pane_g2

0x2191,	// (0x0003115b) volume_small2_pane_g3

0x219a,	// (0x00031164) volume_small2_pane_g4

0x21a3,	// (0x0003116d) volume_small2_pane_g5

0x21ac,	// (0x00031176) volume_small2_pane_g6

0x21b5,	// (0x0003117f) volume_small2_pane_g7

0x21be,	// (0x00031188) volume_small2_pane_g8

0x21c7,	// (0x00031191) volume_small2_pane_g9

0x21d0,	// (0x0003119a) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x0003ebfb) volume_small2_pane_g

0x7d7a,	// (0x00036d44) fep_vkb_top_text_pane_g1_ParamLimits

0xe323,	// (0x0003d2ed) fep_vkb_top_text_pane_t1_ParamLimits

0x7fef,	// (0x00036fb9) popup_preview_fixed_window_g3_ParamLimits

0x7fef,	// (0x00036fb9) popup_preview_fixed_window_g3

0xc5b5,	// (0x0003b57f) popup_toolbar_trans_pane

0xdd90,	// (0x0003cd5a) aid_height_set_list_ParamLimits

0x67ec,	// (0x000357b6) aid_size_parent_ParamLimits

0x4f0b,	// (0x00033ed5) list_highlight_pane_cp2_ParamLimits

0x4ab2,	// (0x00033a7c) set_content_pane_g1_ParamLimits

0xc7f1,	// (0x0003b7bb) list_single_image_pane_ParamLimits

0xc7f1,	// (0x0003b7bb) list_single_image_pane

0xe46f,	// (0x0003d439) aid_size_cell_image_ParamLimits

0xe46f,	// (0x0003d439) aid_size_cell_image

0xe47c,	// (0x0003d446) grid_single_image_pane_ParamLimits

0xe47c,	// (0x0003d446) grid_single_image_pane

0x8506,	// (0x000374d0) list_single_image_pane_g1_ParamLimits

0x8506,	// (0x000374d0) list_single_image_pane_g1

0x8512,	// (0x000374dc) list_single_image_pane_g2_ParamLimits

0x8512,	// (0x000374dc) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x0003ec10) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x0003ec10) list_single_image_pane_g

0x8526,	// (0x000374f0) list_single_image_pane_t1_ParamLimits

0x8526,	// (0x000374f0) list_single_image_pane_t1

0xe488,	// (0x0003d452) cell_image_list_pane_ParamLimits

0xe488,	// (0x0003d452) cell_image_list_pane

0xe49c,	// (0x0003d466) cell_image_list_pane_g1

0xe4a5,	// (0x0003d46f) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x0003ec15) cell_image_list_pane_g

0x8562,	// (0x0003752c) aid_size_cell_tb_trans_pane

0x3f65,	// (0x00032f2f) bg_tb_trans_pane

0x8574,	// (0x0003753e) grid_tb_trans_pane

0x5409,	// (0x000343d3) bg_tb_trans_pane_g1

0x5419,	// (0x000343e3) bg_tb_trans_pane_g2

0x5411,	// (0x000343db) bg_tb_trans_pane_g3

0x5429,	// (0x000343f3) bg_tb_trans_pane_g4

0x5421,	// (0x000343eb) bg_tb_trans_pane_g5

0x5449,	// (0x00034413) bg_tb_trans_pane_g6

0x5441,	// (0x0003440b) bg_tb_trans_pane_g7

0x5431,	// (0x000343fb) bg_tb_trans_pane_g8

0x5439,	// (0x00034403) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x0003ec1a) bg_tb_trans_pane_g

0x8588,	// (0x00037552) cell_toolbar_trans_pane_ParamLimits

0x8588,	// (0x00037552) cell_toolbar_trans_pane

0x79c4,	// (0x0003698e) cell_toolbar_trans_pane_g1

0xe106,	// (0x0003d0d0) list_form2_midp_pane_t1

0xe114,	// (0x0003d0de) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x0003eab7) list_form2_midp_pane_t

0x758b,	// (0x00036555) scroll_pane_cp51_ParamLimits

0x7747,	// (0x00036711) form2_midp_wait_pane_g1

0x7750,	// (0x0003671a) form2_midp_wait_pane_g2

0x7759,	// (0x00036723) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x0003eacc) form2_midp_wait_pane_g

0x370b,	// (0x000326d5) list_highlight_pane_cp21_ParamLimits

0x77a7,	// (0x00036771) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x77b6,	// (0x00036780) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x699c,	// (0x00035966) list_single_2graphic_im_pane_ParamLimits

0x699c,	// (0x00035966) list_single_2graphic_im_pane

0x85ae,	// (0x00037578) list_single_2graphic_im_pane_g1_ParamLimits

0x85ae,	// (0x00037578) list_single_2graphic_im_pane_g1

0x85bf,	// (0x00037589) list_single_2graphic_im_pane_g2_ParamLimits

0x85bf,	// (0x00037589) list_single_2graphic_im_pane_g2

0x85cb,	// (0x00037595) list_single_2graphic_im_pane_g3_ParamLimits

0x85cb,	// (0x00037595) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x0003ec2d) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x0003ec2d) list_single_2graphic_im_pane_g

0x85eb,	// (0x000375b5) list_single_2graphic_im_pane_t1_ParamLimits

0x85eb,	// (0x000375b5) list_single_2graphic_im_pane_t1

0x7ffb,	// (0x00036fc5) list_single_graphic_2heading_pane_fp_ParamLimits

0x7ffb,	// (0x00036fc5) list_single_graphic_2heading_pane_fp

0x3392,	// (0x0003235c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3392,	// (0x0003235c) list_single_graphic_2heading_pane_fp_g1

0x8011,	// (0x00036fdb) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8011,	// (0x00036fdb) list_single_graphic_2heading_pane_fp_g2

0x0618,	// (0x0002f5e2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0618,	// (0x0002f5e2) list_single_graphic_2heading_pane_fp_g3

0x3367,	// (0x00032331) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3367,	// (0x00032331) list_single_graphic_2heading_pane_fp_g4

0x801d,	// (0x00036fe7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x801d,	// (0x00036fe7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003eb54) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003eb54) list_single_graphic_2heading_pane_fp_g

0x356b,	// (0x00032535) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x356b,	// (0x00032535) list_single_graphic_2heading_pane_fp_t1

0x33ca,	// (0x00032394) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x33ca,	// (0x00032394) list_single_graphic_2heading_pane_fp_t2

0x3581,	// (0x0003254b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3581,	// (0x0003254b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x0003ec36) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x0003ec36) list_single_graphic_2heading_pane_fp_t

0x7a50,	// (0x00036a1a) fep_hwr_write_pane_g5_ParamLimits

0x7a50,	// (0x00036a1a) fep_hwr_write_pane_g5

0x7a5c,	// (0x00036a26) fep_hwr_write_pane_g6_ParamLimits

0x7a5c,	// (0x00036a26) fep_hwr_write_pane_g6

0x82d3,	// (0x0003729d) eswt_shell_pane_ParamLimits

0x547d,	// (0x00034447) bg_popup_window_pane_cp18_ParamLimits

0x673a,	// (0x00035704) heading_pane_cp70

0x83fd,	// (0x000373c7) popup_eswt_tasktip_window_t1_ParamLimits

0xd792,	// (0x0003c75c) aid_touch_tab_arrow_left

0xd7a8,	// (0x0003c772) aid_touch_tab_arrow_right

0xd047,	// (0x0003c011) title_pane_g3_ParamLimits

0xd047,	// (0x0003c011) title_pane_g3

0x3f24,	// (0x00032eee) set_value_pane_g1

0xc5b5,	// (0x0003b57f) popup_toolbar_trans_pane_ParamLimits

0x8562,	// (0x0003752c) aid_size_cell_tb_trans_pane_ParamLimits

0x3f65,	// (0x00032f2f) bg_tb_trans_pane_ParamLimits

0x8574,	// (0x0003753e) grid_tb_trans_pane_ParamLimits

0x3994,	// (0x0003295e) cont_note_pane_ParamLimits

0x3994,	// (0x0003295e) cont_note_pane

0x3cd6,	// (0x00032ca0) cont_snote2_single_text_pane_ParamLimits

0x3cd6,	// (0x00032ca0) cont_snote2_single_text_pane

0x3cd6,	// (0x00032ca0) cont_snote2_single_graphic_pane_ParamLimits

0x3cd6,	// (0x00032ca0) cont_snote2_single_graphic_pane

0x5a8f,	// (0x00034a59) cont_note_wait_pane_ParamLimits

0x5a8f,	// (0x00034a59) cont_note_wait_pane

0x5a8f,	// (0x00034a59) cont_note_image_pane_ParamLimits

0x5a8f,	// (0x00034a59) cont_note_image_pane

0x861c,	// (0x000375e6) popup_note2_window_g1_ParamLimits

0x861c,	// (0x000375e6) popup_note2_window_g1

0x864d,	// (0x00037617) popup_note2_window_t1_ParamLimits

0x864d,	// (0x00037617) popup_note2_window_t1

0x8692,	// (0x0003765c) popup_note2_window_t2_ParamLimits

0x8692,	// (0x0003765c) popup_note2_window_t2

0x86d7,	// (0x000376a1) popup_note2_window_t3_ParamLimits

0x86d7,	// (0x000376a1) popup_note2_window_t3

0x871c,	// (0x000376e6) popup_note2_window_t4_ParamLimits

0x871c,	// (0x000376e6) popup_note2_window_t4

0x3a0c,	// (0x000329d6) popup_note2_window_t5_ParamLimits

0x3a0c,	// (0x000329d6) popup_note2_window_t5

0x0004,

0xfc78,	// (0x0003ec42) popup_note2_window_t_ParamLimits

0xfc78,	// (0x0003ec42) popup_note2_window_t

0x874b,	// (0x00037715) popup_note2_image_window_g1_ParamLimits

0x874b,	// (0x00037715) popup_note2_image_window_g1

0x8757,	// (0x00037721) popup_note2_image_window_g2_ParamLimits

0x8757,	// (0x00037721) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x0003ec4d) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x0003ec4d) popup_note2_image_window_g

0x8769,	// (0x00037733) popup_note2_image_window_t1_ParamLimits

0x8769,	// (0x00037733) popup_note2_image_window_t1

0x8781,	// (0x0003774b) popup_note2_image_window_t2_ParamLimits

0x8781,	// (0x0003774b) popup_note2_image_window_t2

0x8799,	// (0x00037763) popup_note2_image_window_t3_ParamLimits

0x8799,	// (0x00037763) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x0003ec52) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x0003ec52) popup_note2_image_window_t

0x5a9d,	// (0x00034a67) popup_note2_wait_window_g1_ParamLimits

0x5a9d,	// (0x00034a67) popup_note2_wait_window_g1

0x87b5,	// (0x0003777f) popup_note2_wait_window_g2_ParamLimits

0x87b5,	// (0x0003777f) popup_note2_wait_window_g2

0x5ab5,	// (0x00034a7f) popup_note2_wait_window_g3_ParamLimits

0x5ab5,	// (0x00034a7f) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x0003ec59) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x0003ec59) popup_note2_wait_window_g

0x87c1,	// (0x0003778b) popup_note2_wait_window_t1_ParamLimits

0x87c1,	// (0x0003778b) popup_note2_wait_window_t1

0x87df,	// (0x000377a9) popup_note2_wait_window_t2_ParamLimits

0x87df,	// (0x000377a9) popup_note2_wait_window_t2

0x87fd,	// (0x000377c7) popup_note2_wait_window_t3_ParamLimits

0x87fd,	// (0x000377c7) popup_note2_wait_window_t3

0x880f,	// (0x000377d9) popup_note2_wait_window_t4_ParamLimits

0x880f,	// (0x000377d9) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x0003ec60) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x0003ec60) popup_note2_wait_window_t

0x8821,	// (0x000377eb) wait_bar2_pane_ParamLimits

0x8821,	// (0x000377eb) wait_bar2_pane

0x8839,	// (0x00037803) popup_snote2_single_text_window_g1_ParamLimits

0x8839,	// (0x00037803) popup_snote2_single_text_window_g1

0x8861,	// (0x0003782b) popup_snote2_single_text_window_t1_ParamLimits

0x8861,	// (0x0003782b) popup_snote2_single_text_window_t1

0x88ad,	// (0x00037877) popup_snote2_single_text_window_t2_ParamLimits

0x88ad,	// (0x00037877) popup_snote2_single_text_window_t2

0x88f9,	// (0x000378c3) popup_snote2_single_text_window_t3_ParamLimits

0x88f9,	// (0x000378c3) popup_snote2_single_text_window_t3

0x893a,	// (0x00037904) popup_snote2_single_text_window_t4_ParamLimits

0x893a,	// (0x00037904) popup_snote2_single_text_window_t4

0x8970,	// (0x0003793a) popup_snote2_single_text_window_t5_ParamLimits

0x8970,	// (0x0003793a) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x0003ec69) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x0003ec69) popup_snote2_single_text_window_t

0x899b,	// (0x00037965) popup_snote2_single_graphic_window_g1_ParamLimits

0x899b,	// (0x00037965) popup_snote2_single_graphic_window_g1

0x89c3,	// (0x0003798d) popup_snote2_single_graphic_window_g2_ParamLimits

0x89c3,	// (0x0003798d) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x0003ec74) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x0003ec74) popup_snote2_single_graphic_window_g

0x89eb,	// (0x000379b5) popup_snote2_single_graphic_window_t1_ParamLimits

0x89eb,	// (0x000379b5) popup_snote2_single_graphic_window_t1

0x8a37,	// (0x00037a01) popup_snote2_single_graphic_window_t2_ParamLimits

0x8a37,	// (0x00037a01) popup_snote2_single_graphic_window_t2

0x88f9,	// (0x000378c3) popup_snote2_single_graphic_window_t3_ParamLimits

0x88f9,	// (0x000378c3) popup_snote2_single_graphic_window_t3

0x893a,	// (0x00037904) popup_snote2_single_graphic_window_t4_ParamLimits

0x893a,	// (0x00037904) popup_snote2_single_graphic_window_t4

0x8970,	// (0x0003793a) popup_snote2_single_graphic_window_t5_ParamLimits

0x8970,	// (0x0003793a) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x0003ec79) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x0003ec79) popup_snote2_single_graphic_window_t

0x7446,	// (0x00036410) clock_nsta_pane_cp2_t1

0x7446,	// (0x00036410) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x0003ea8d) clock_nsta_pane_cp2_t

0x0a91,	// (0x0002fa5b) form_field_data_wide_pane_g1_ParamLimits

0x3f73,	// (0x00032f3d) form_field_data_wide_pane_g2_ParamLimits

0x3f73,	// (0x00032f3d) form_field_data_wide_pane_g2

0x3f7f,	// (0x00032f49) form_field_data_wide_pane_g3_ParamLimits

0x3f7f,	// (0x00032f49) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003e645) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003e645) form_field_data_wide_pane_g

0xe049,	// (0x0003d013) grid_touch_3_pane_ParamLimits

0xe049,	// (0x0003d013) grid_touch_3_pane

0xe4ae,	// (0x0003d478) cell_touch_3_pane_ParamLimits

0xe4ae,	// (0x0003d478) cell_touch_3_pane

0x79c4,	// (0x0003698e) cell_touch_3_pane_g1

0x79c4,	// (0x0003698e) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x0003eb12) cell_touch_3_pane_g

0x3a3e,	// (0x00032a08) cont_query_data_pane

0x3a46,	// (0x00032a10) cont_query_data_pane_cp1

0x8ab4,	// (0x00037a7e) button_value_adjust_pane_cp7

0x8abc,	// (0x00037a86) query_popup_pane_cp3

0x46a5,	// (0x0003366f) bg_popup_sub_pane_cp22_ParamLimits

0x0e36,	// (0x0002fe00) navi_navi_volume_pane_cp2

0x0e4e,	// (0x0002fe18) popup_side_volume_key_window_g2

0x0e5a,	// (0x0002fe24) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003e6db) popup_side_volume_key_window_g

0x0e74,	// (0x0002fe3e) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003e6e2) popup_side_volume_key_window_t

0x495b,	// (0x00033925) popup_side_volume_key_window_ParamLimits

0xb968,	// (0x0003a932) list_double_graphic_pane_g4_ParamLimits

0xb968,	// (0x0003a932) list_double_graphic_pane_g4

0xdf09,	// (0x0003ced3) list_single_2heading_msg_pane_ParamLimits

0xdf09,	// (0x0003ced3) list_single_2heading_msg_pane

0xc887,	// (0x0003b851) list_single_2heading_msg_pane_g1_ParamLimits

0xc887,	// (0x0003b851) list_single_2heading_msg_pane_g1

0xc893,	// (0x0003b85d) list_single_2heading_msg_pane_g2_ParamLimits

0xc893,	// (0x0003b85d) list_single_2heading_msg_pane_g2

0xc8a6,	// (0x0003b870) list_single_2heading_msg_pane_g3_ParamLimits

0xc8a6,	// (0x0003b870) list_single_2heading_msg_pane_g3

0xc8b2,	// (0x0003b87c) list_single_2heading_msg_pane_g4_ParamLimits

0xc8b2,	// (0x0003b87c) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x0003ec84) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x0003ec84) list_single_2heading_msg_pane_g

0xc8ca,	// (0x0003b894) list_single_2heading_msg_pane_t1_ParamLimits

0xc8ca,	// (0x0003b894) list_single_2heading_msg_pane_t1

0xc8f2,	// (0x0003b8bc) list_single_2heading_msg_pane_t2_ParamLimits

0xc8f2,	// (0x0003b8bc) list_single_2heading_msg_pane_t2

0xc95d,	// (0x0003b927) list_single_2heading_msg_pane_t3_ParamLimits

0xc95d,	// (0x0003b927) list_single_2heading_msg_pane_t3

0x3666,	// (0x00032630) list_single_2heading_msg_pane_t4_ParamLimits

0x3666,	// (0x00032630) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x0003ec8d) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x0003ec8d) list_single_2heading_msg_pane_t

0x2dee,	// (0x00031db8) title_pane_g4_ParamLimits

0x2dee,	// (0x00031db8) title_pane_g4

0x0c44,	// (0x0002fc0e) title_pane_stacon_g3_ParamLimits

0x0c44,	// (0x0002fc0e) title_pane_stacon_g3

0x85df,	// (0x000375a9) list_single_2graphic_im_pane_g4_ParamLimits

0x85df,	// (0x000375a9) list_single_2graphic_im_pane_g4

0x64f6,	// (0x000354c0) popup_side_volume_key_window_cp

0x6ca3,	// (0x00035c6d) main_idle_act2_pane_t1

0x186b,	// (0x00030835) toolbar_button_pane_g10

0xd351,	// (0x0003c31b) popup_toolbar_window_cp1

0x7437,	// (0x00036401) clock_nsta_pane_cp_t1

0x7437,	// (0x00036401) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x0003ea88) clock_nsta_pane_cp_t

0x0e36,	// (0x0002fe00) navi_navi_volume_pane_cp2_ParamLimits

0x0e42,	// (0x0002fe0c) popup_side_volume_key_window_g1_ParamLimits

0x0e4e,	// (0x0002fe18) popup_side_volume_key_window_g2_ParamLimits

0x0e5a,	// (0x0002fe24) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003e6db) popup_side_volume_key_window_g_ParamLimits

0x1dda,	// (0x00030da4) fep_hwr_aid_pane

0x1e81,	// (0x00030e4b) bg_fep_hwr_top_pane_g4_ParamLimits

0x7a20,	// (0x000369ea) fep_hwr_top_pane_g1_ParamLimits

0x7a32,	// (0x000369fc) fep_hwr_top_pane_g2_ParamLimits

0x1ea1,	// (0x00030e6b) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x0003eadd) fep_hwr_top_pane_g_ParamLimits

0x1eb6,	// (0x00030e80) fep_hwr_top_text_pane_ParamLimits

0x62b9,	// (0x00035283) aid_touch_tab_arrow_arrow_2

0x62c2,	// (0x0003528c) aid_touch_tab_arrow_left_2

0x1dee,	// (0x00030db8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1e25,	// (0x00030def) fep_hwr_prediction_pane

0x7b89,	// (0x00036b53) fep_vkb_prediction_pane

0xe303,	// (0x0003d2cd) fep_vkb_side_pane_g3_ParamLimits

0xe303,	// (0x0003d2cd) fep_vkb_side_pane_g3

0x2031,	// (0x00030ffb) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x209d,	// (0x00031067) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x20aa,	// (0x00031074) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0003eb8c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x21d9,	// (0x000311a3) fep_hwr_prediction_pane_g1

0x21e3,	// (0x000311ad) fep_hwr_prediction_pane_g2

0x21eb,	// (0x000311b5) fep_hwr_prediction_pane_g3

0x21f3,	// (0x000311bd) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x0003ec96) fep_hwr_prediction_pane_g

0x8ae1,	// (0x00037aab) fep_vkb_prediction_pane_g1

0x8aeb,	// (0x00037ab5) fep_vkb_prediction_pane_g2

0x8af3,	// (0x00037abd) fep_vkb_prediction_pane_g3

0x8afb,	// (0x00037ac5) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x0003ec9f) fep_vkb_prediction_pane_g

0x1c36,	// (0x00030c00) slider_set_pane_g3

0x1c4a,	// (0x00030c14) slider_set_pane_g4

0x1c62,	// (0x00030c2c) slider_set_pane_g5

0x1c36,	// (0x00030c00) slider_set_pane_g6

0x1c78,	// (0x00030c42) slider_set_pane_g7

0x6949,	// (0x00035913) slider_form_pane_g3

0x6952,	// (0x0003591c) slider_form_pane_g4

0x695a,	// (0x00035924) slider_form_pane_g5

0x6949,	// (0x00035913) slider_form_pane_g6

0xded7,	// (0x0003cea1) slider_form_pane_g7

0x6f42,	// (0x00035f0c) slider_set_pane_vc_g3

0x6f4b,	// (0x00035f15) slider_set_pane_vc_g4

0x6f54,	// (0x00035f1e) slider_set_pane_vc_g5

0x6f42,	// (0x00035f0c) slider_set_pane_vc_g6

0x6f5d,	// (0x00035f27) slider_set_pane_vc_g7

0x710d,	// (0x000360d7) slider_form_pane_vc_g1

0x7116,	// (0x000360e0) slider_form_pane_vc_g2

0x711f,	// (0x000360e9) slider_form_pane_vc_g3

0x710d,	// (0x000360d7) slider_form_pane_vc_g4

0x7128,	// (0x000360f2) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x0003ea5a) slider_form_pane_vc_g

0x022b,	// (0x0002f1f5) main_idle_act3_pane

0x8b03,	// (0x00037acd) ai3_links_pane

0xe4f7,	// (0x0003d4c1) popup_ai3_data_window_ParamLimits

0xe4f7,	// (0x0003d4c1) popup_ai3_data_window

0x2da6,	// (0x00031d70) grid_ai3_links_pane

0xe50f,	// (0x0003d4d9) cell_ai3_links_pane_ParamLimits

0xe50f,	// (0x0003d4d9) cell_ai3_links_pane

0x8b3c,	// (0x00037b06) bg_popup_sub_pane_cp11

0x8b49,	// (0x00037b13) cell_ai3_links_pane_g1

0x2da6,	// (0x00031d70) bg_popup_sub_pane_cp12

0x8b6e,	// (0x00037b38) heading_ai3_data_pane

0x8b76,	// (0x00037b40) list_ai3_gene_pane

0x8b82,	// (0x00037b4c) popup_ai3_data_window_g1

0x8b8a,	// (0x00037b54) heading_ai3_data_pane_g1

0x8b92,	// (0x00037b5c) heading_ai3_data_pane_t1

0x8ba0,	// (0x00037b6a) list_double_ai3_gene_pane_ParamLimits

0x8ba0,	// (0x00037b6a) list_double_ai3_gene_pane

0x8bad,	// (0x00037b77) list_single_ai3_gene_pane_ParamLimits

0x8bad,	// (0x00037b77) list_single_ai3_gene_pane

0x7989,	// (0x00036953) list_highlight_pane_cp7_ParamLimits

0x7989,	// (0x00036953) list_highlight_pane_cp7

0x8bba,	// (0x00037b84) list_single_a13_gene_pane_t1_ParamLimits

0x8bba,	// (0x00037b84) list_single_a13_gene_pane_t1

0x8bd1,	// (0x00037b9b) list_single_ai3_gene_pane_g1

0x8bda,	// (0x00037ba4) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x0003eca8) list_single_ai3_gene_pane_g

0x8be2,	// (0x00037bac) list_double_ai3_gene_pane_g1_ParamLimits

0x8be2,	// (0x00037bac) list_double_ai3_gene_pane_g1

0x8bee,	// (0x00037bb8) list_double_ai3_gene_pane_t1_ParamLimits

0x8bee,	// (0x00037bb8) list_double_ai3_gene_pane_t1

0x8c0a,	// (0x00037bd4) list_double_ai3_gene_pane_t2_ParamLimits

0x8c0a,	// (0x00037bd4) list_double_ai3_gene_pane_t2

0x8c1f,	// (0x00037be9) list_double_ai3_gene_pane_t3_ParamLimits

0x8c1f,	// (0x00037be9) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x0003ecad) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x0003ecad) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3597,	// (0x00032561) aid_size_min_col_2

0xe4e1,	// (0x0003d4ab) aid_size_min_msg_ParamLimits

0xe4e1,	// (0x0003d4ab) aid_size_min_msg

0xe317,	// (0x0003d2e1) fep_vkb_top_text_pane_g2_ParamLimits

0xe317,	// (0x0003d2e1) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x0003eb0d) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x0003eb0d) fep_vkb_top_text_pane_g

0x022b,	// (0x0002f1f5) main_hc_apps_shell_pane

0x8c3c,	// (0x00037c06) grid_hc_apps_pane_ParamLimits

0x8c3c,	// (0x00037c06) grid_hc_apps_pane

0x8c4b,	// (0x00037c15) list_hc_apps_pane

0x8c53,	// (0x00037c1d) scroll_pane_cp37_ParamLimits

0x8c53,	// (0x00037c1d) scroll_pane_cp37

0xe529,	// (0x0003d4f3) cell_hc_apps_pane_ParamLimits

0xe529,	// (0x0003d4f3) cell_hc_apps_pane

0xe5e7,	// (0x0003d5b1) cell_hc_apps_pane_g1_ParamLimits

0xe5e7,	// (0x0003d5b1) cell_hc_apps_pane_g1

0x8d3e,	// (0x00037d08) cell_hc_apps_pane_g2_ParamLimits

0x8d3e,	// (0x00037d08) cell_hc_apps_pane_g2

0x8d5a,	// (0x00037d24) cell_hc_apps_pane_g3_ParamLimits

0x8d5a,	// (0x00037d24) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x0003ecb4) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x0003ecb4) cell_hc_apps_pane_g

0xe614,	// (0x0003d5de) cell_hc_apps_pane_t1_ParamLimits

0xe614,	// (0x0003d5de) cell_hc_apps_pane_t1

0x3994,	// (0x0003295e) grid_highlight_pane_cp10_ParamLimits

0x3994,	// (0x0003295e) grid_highlight_pane_cp10

0xe652,	// (0x0003d61c) list_single_hc_apps_pane_ParamLimits

0xe652,	// (0x0003d61c) list_single_hc_apps_pane

0xe683,	// (0x0003d64d) list_single_hc_apps_pane_g1

0xc9cb,	// (0x0003b995) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x0003ecbb) list_single_hc_apps_pane_g

0xc9e4,	// (0x0003b9ae) list_single_hc_apps_pane_g2_copy1

0xca00,	// (0x0003b9ca) list_single_hc_apps_pane_t1

0x370b,	// (0x000326d5) bg_set_opt_pane_cp_ParamLimits

0x047e,	// (0x0002f448) setting_slider_pane_t1_ParamLimits

0x0497,	// (0x0002f461) setting_slider_pane_t2_ParamLimits

0x04b1,	// (0x0002f47b) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003e528) setting_slider_pane_t_ParamLimits

0x04c9,	// (0x0002f493) slider_set_pane_ParamLimits

0x1162,	// (0x0003012c) control_pane_g5_ParamLimits

0x1162,	// (0x0003012c) control_pane_g5

0x67a6,	// (0x00035770) slider_set_pane_g1_ParamLimits

0x1c2a,	// (0x00030bf4) slider_set_pane_g2_ParamLimits

0x1c36,	// (0x00030c00) slider_set_pane_g3_ParamLimits

0x1c4a,	// (0x00030c14) slider_set_pane_g4_ParamLimits

0x1c62,	// (0x00030c2c) slider_set_pane_g5_ParamLimits

0x1c36,	// (0x00030c00) slider_set_pane_g6_ParamLimits

0x1c78,	// (0x00030c42) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0003e929) slider_set_pane_g_ParamLimits

0x4a5d,	// (0x00033a27) navi_icon_text_pane_ParamLimits

0xd75b,	// (0x0003c725) aid_fill_nsta_2_ParamLimits

0xd792,	// (0x0003c75c) aid_touch_tab_arrow_left_ParamLimits

0xd7a8,	// (0x0003c772) aid_touch_tab_arrow_right_ParamLimits

0xd843,	// (0x0003c80d) clock_nsta_pane_ParamLimits

0x629b,	// (0x00035265) navi_icon_pane_g1_ParamLimits

0x62a7,	// (0x00035271) navi_text_pane_t1_ParamLimits

0x7549,	// (0x00036513) navi_icon_text_pane_g1_ParamLimits

0x7555,	// (0x0003651f) navi_icon_text_pane_t1_ParamLimits

0xe683,	// (0x0003d64d) list_single_hc_apps_pane_g1_ParamLimits

0xc9cb,	// (0x0003b995) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x0003ecbb) list_single_hc_apps_pane_g_ParamLimits

0xc9e4,	// (0x0003b9ae) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xca00,	// (0x0003b9ca) list_single_hc_apps_pane_t1_ParamLimits

0xb77b,	// (0x0003a745) popup_toolbar2_fixed_window_ParamLimits

0xb77b,	// (0x0003a745) popup_toolbar2_fixed_window

0xc5ab,	// (0x0003b575) popup_toolbar2_float_window

0x2da6,	// (0x00031d70) bg_popup_sub_pane_cp27

0x8e3d,	// (0x00037e07) grid_toolbar2_float_pane

0x2da6,	// (0x00031d70) bg_popup_sub_pane_cp26

0x8e3d,	// (0x00037e07) grid_toolbar2_fixed_pane

0xe69c,	// (0x0003d666) cell_toolbar2_fixed_pane_ParamLimits

0xe69c,	// (0x0003d666) cell_toolbar2_fixed_pane

0xe6b7,	// (0x0003d681) cell_toolbar2_fixed_pane_g1

0x1625,	// (0x000305ef) toolbar2_fixed_button_pane

0x5409,	// (0x000343d3) toolbar2_fixed_button_pane_g1

0x5419,	// (0x000343e3) toolbar2_fixed_button_pane_g2

0x5411,	// (0x000343db) toolbar2_fixed_button_pane_g3

0x5429,	// (0x000343f3) toolbar2_fixed_button_pane_g4

0x5421,	// (0x000343eb) toolbar2_fixed_button_pane_g5

0x5431,	// (0x000343fb) toolbar2_fixed_button_pane_g6

0x5439,	// (0x00034403) toolbar2_fixed_button_pane_g7

0x5449,	// (0x00034413) toolbar2_fixed_button_pane_g8

0x5441,	// (0x0003440b) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0003e82b) toolbar2_fixed_button_pane_g

0x8e5f,	// (0x00037e29) cell_toolbar2_float_pane_ParamLimits

0x8e5f,	// (0x00037e29) cell_toolbar2_float_pane

0x8e73,	// (0x00037e3d) cell_toolbar2_float_pane_g1

0x1625,	// (0x000305ef) toolbar2_fixed_button_pane_cp

0xe1ff,	// (0x0003d1c9) fep_vkb_accented_list_pane_ParamLimits

0xe1ff,	// (0x0003d1c9) fep_vkb_accented_list_pane

0x2011,	// (0x00030fdb) bg_popup_fep_shadow_pane_g9

0x4bd1,	// (0x00033b9b) bg_popup_fep_shadow_pane_cp3

0x40ba,	// (0x00033084) list_accented_list_pane

0x8e7c,	// (0x00037e46) list_single_accented_list_pane_ParamLimits

0x8e7c,	// (0x00037e46) list_single_accented_list_pane

0x4bd1,	// (0x00033b9b) list_highlight_pane_cp10

0x8e8d,	// (0x00037e57) list_single_accented_list_pane_t1

0xc4d5,	// (0x0003b49f) popup_slider_window_ParamLimits

0xc4d5,	// (0x0003b49f) popup_slider_window

0x8ac4,	// (0x00037a8e) aid_indentation_list_msg

0xe7b0,	// (0x0003d77a) bg_popup_window_pane_cp19

0x8fb1,	// (0x00037f7b) popup_slider_window_g1

0x8fcd,	// (0x00037f97) popup_slider_window_g2

0x8fe9,	// (0x00037fb3) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x0003ecc0) popup_slider_window_g

0x9045,	// (0x0003800f) popup_slider_window_t1

0x90b9,	// (0x00038083) small_volume_slider_vertical_pane

0x79c4,	// (0x0003698e) small_volume_slider_vertical_pane_g1

0x79c4,	// (0x0003698e) small_volume_slider_vertical_pane_g2

0x90d5,	// (0x0003809f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x0003ecd2) small_volume_slider_vertical_pane_g

0xb6e9,	// (0x0003a6b3) area_side_right_pane_ParamLimits

0xb6e9,	// (0x0003a6b3) area_side_right_pane

0xca2e,	// (0x0003b9f8) aid_size_side_button_ParamLimits

0xca2e,	// (0x0003b9f8) aid_size_side_button

0xca47,	// (0x0003ba11) grid_sctrl_middle_pane_ParamLimits

0xca47,	// (0x0003ba11) grid_sctrl_middle_pane

0x222e,	// (0x000311f8) sctrl_sk_bottom_pane

0x223f,	// (0x00031209) sctrl_sk_top_pane

0x2251,	// (0x0003121b) aid_touch_sctrl_top

0x225e,	// (0x00031228) bg_sctrl_sk_pane_ParamLimits

0x225e,	// (0x00031228) bg_sctrl_sk_pane

0x226c,	// (0x00031236) sctrl_sk_top_pane_g1

0x2279,	// (0x00031243) sctrl_sk_top_pane_t1

0x2251,	// (0x0003121b) aid_touch_sctrl_bottom

0x225e,	// (0x00031228) bg_sctrl_sk_pane_cp_ParamLimits

0x225e,	// (0x00031228) bg_sctrl_sk_pane_cp

0x2294,	// (0x0003125e) sctrl_sk_bottom_pane_g1

0x2279,	// (0x00031243) sctrl_sk_bottom_pane_t1

0xca61,	// (0x0003ba2b) cell_sctrl_middle_pane_ParamLimits

0xca61,	// (0x0003ba2b) cell_sctrl_middle_pane

0xca72,	// (0x0003ba3c) aid_touch_sctrl_middle_ParamLimits

0xca72,	// (0x0003ba3c) aid_touch_sctrl_middle

0xca7f,	// (0x0003ba49) bg_sctrl_middle_pane_ParamLimits

0xca7f,	// (0x0003ba49) bg_sctrl_middle_pane

0x2905,	// (0x000318cf) cell_sctrl_middle_pane_g1_ParamLimits

0x2905,	// (0x000318cf) cell_sctrl_middle_pane_g1

0xca8d,	// (0x0003ba57) cell_sctrl_middle_pane_g2_ParamLimits

0xca8d,	// (0x0003ba57) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x0003ecde) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x0003ecde) cell_sctrl_middle_pane_g

0x5409,	// (0x000343d3) bg_sctrl_middle_pane_g1

0x5411,	// (0x000343db) bg_sctrl_middle_pane_g2

0x5419,	// (0x000343e3) bg_sctrl_middle_pane_g3

0x5421,	// (0x000343eb) bg_sctrl_middle_pane_g4

0x5429,	// (0x000343f3) bg_sctrl_middle_pane_g5

0x5431,	// (0x000343fb) bg_sctrl_middle_pane_g6

0x5439,	// (0x00034403) bg_sctrl_middle_pane_g7

0x5441,	// (0x0003440b) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x0003ece3) bg_sctrl_middle_pane_g

0x5449,	// (0x00034413) bg_sctrl_middle_pane_g8_copy1

0x5409,	// (0x000343d3) bg_sctrl_sk_pane_g1

0x5419,	// (0x000343e3) bg_sctrl_sk_pane_g2

0x5411,	// (0x000343db) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0003e82b) bg_sctrl_sk_pane_g

0x3e94,	// (0x00032e5e) aid_size_touch_scroll_bar

0x5429,	// (0x000343f3) bg_sctrl_sk_pane_g4

0x5421,	// (0x000343eb) bg_sctrl_sk_pane_g5

0x5431,	// (0x000343fb) bg_sctrl_sk_pane_g6

0x5439,	// (0x00034403) bg_sctrl_sk_pane_g7

0x5449,	// (0x00034413) bg_sctrl_sk_pane_g8

0x5441,	// (0x0003440b) bg_sctrl_sk_pane_g9

0x1310,	// (0x000302da) popup_fep_china_hwr2_fs_candidate_window

0xc003,	// (0x0003afcd) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc003,	// (0x0003afcd) popup_fep_china_hwr2_fs_control_window

0x2031,	// (0x00030ffb) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x0003ecd9) sctrl_sk_top_pane_g

0xe868,	// (0x0003d832) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe868,	// (0x0003d832) aid_fep_china_hwr2_fs_cell

0xe87c,	// (0x0003d846) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe87c,	// (0x0003d846) bg_popup_fep_shadow_pane_cp4

0xe893,	// (0x0003d85d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe893,	// (0x0003d85d) bg_popup_fep_shadow_pane_cp5

0xe8a5,	// (0x0003d86f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe8a5,	// (0x0003d86f) popup_fep_china_hwr2_fs_control_bar_grid

0xe8b9,	// (0x0003d883) popup_fep_china_hwr2_fs_control_funtion_grid

0x9131,	// (0x000380fb) aid_fep_china_hwr2_fs_candi_cell

0x2da6,	// (0x00031d70) bg_popup_fep_shadow_pane_cp6

0x913b,	// (0x00038105) popup_fep_china_hwr2_fs_candidate_grid

0xe8c1,	// (0x0003d88b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe8c1,	// (0x0003d88b) cell_fep_china_hwr2_fs_funtion_grid

0x79c4,	// (0x0003698e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x915d,	// (0x00038127) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x915d,	// (0x00038127) cell_fep_china_hwr2_fs_funtion_grid_g1

0x916b,	// (0x00038135) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x916b,	// (0x00038135) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x0003ecf4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x0003ecf4) cell_fep_china_hwr2_fs_funtion_grid_g

0xe8d9,	// (0x0003d8a3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe8d9,	// (0x0003d8a3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe8ee,	// (0x0003d8b8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe8ee,	// (0x0003d8b8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x0003ecf9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x0003ecf9) cell_fep_china_hwr2_fs_funtion_grid_t

0x91b2,	// (0x0003817c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x91ba,	// (0x00038184) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x91c2,	// (0x0003818c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x0003ecfe) popup_fep_china_hwr2_fs_control_bar_grid_g

0x91ca,	// (0x00038194) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x91ca,	// (0x00038194) cell_fep_china_hwr2_fs_candidate_grid

0x91e3,	// (0x000381ad) popup_fep_china_hwr2_fs_candidate_grid_g20

0x91eb,	// (0x000381b5) popup_fep_china_hwr2_fs_candidate_grid_g21

0x79c4,	// (0x0003698e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x79c4,	// (0x0003698e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x0003eb12) cell_fep_china_hwr2_fs_candidate_grid_g

0x91f3,	// (0x000381bd) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5007,	// (0x00033fd1) clock_nsta_pane_cp_24_ParamLimits

0x5007,	// (0x00033fd1) clock_nsta_pane_cp_24

0x5085,	// (0x0003404f) indicator_nsta_pane_cp_24_ParamLimits

0x5085,	// (0x0003404f) indicator_nsta_pane_cp_24

0x6117,	// (0x000350e1) heading_pane_g1

0x0001,

0xf8c6,	// (0x0003e890) heading_pane_g

0x6aec,	// (0x00035ab6) grid_sct_catagory_button_pane

0x6b1c,	// (0x00035ae6) scroll_pane_cp5_ParamLimits

0x7597,	// (0x00036561) button_value_adjust_pane_cp5_ParamLimits

0x7597,	// (0x00036561) button_value_adjust_pane_cp5

0x7676,	// (0x00036640) form2_midp_time_pane_ParamLimits

0x9201,	// (0x000381cb) cell_sct_catagory_button_pane_ParamLimits

0x9201,	// (0x000381cb) cell_sct_catagory_button_pane

0x7989,	// (0x00036953) bg_button_pane_cp01_ParamLimits

0x7989,	// (0x00036953) bg_button_pane_cp01

0x79c4,	// (0x0003698e) cell_sct_catagory_button_pane_g1

0xc54e,	// (0x0003b518) popup_tb_extension_window

0xe90a,	// (0x0003d8d4) aid_size_cell_ext_ParamLimits

0xe90a,	// (0x0003d8d4) aid_size_cell_ext

0x3cd6,	// (0x00032ca0) bg_tb_trans_pane_cp1_ParamLimits

0x3cd6,	// (0x00032ca0) bg_tb_trans_pane_cp1

0xe930,	// (0x0003d8fa) grid_tb_ext_pane_ParamLimits

0xe930,	// (0x0003d8fa) grid_tb_ext_pane

0xe972,	// (0x0003d93c) cell_tb_ext_pane_ParamLimits

0xe972,	// (0x0003d93c) cell_tb_ext_pane

0xe99a,	// (0x0003d964) cell_tb_ext_pane_g1_ParamLimits

0xe99a,	// (0x0003d964) cell_tb_ext_pane_g1

0x9299,	// (0x00038263) cell_tb_ext_pane_t1

0x3994,	// (0x0003295e) list_highlight_pane_cp11_ParamLimits

0x3994,	// (0x0003295e) list_highlight_pane_cp11

0xb790,	// (0x0003a75a) popup_uni_indicator_window_ParamLimits

0xb790,	// (0x0003a75a) popup_uni_indicator_window

0x3f65,	// (0x00032f2f) bg_popup_sub_pane_cp14

0x92b4,	// (0x0003827e) list_uniindi_pane

0x92c0,	// (0x0003828a) uniindi_top_pane

0x3994,	// (0x0003295e) bg_uniindi_top_pane

0x92df,	// (0x000382a9) uniindi_top_pane_g1

0x92f5,	// (0x000382bf) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x0003ed05) uniindi_top_pane_g

0x931f,	// (0x000382e9) uniindi_top_pane_t1

0x9349,	// (0x00038313) list_single_uniindi_pane_ParamLimits

0x9349,	// (0x00038313) list_single_uniindi_pane

0x79c4,	// (0x0003698e) bg_uniindi_top_pane_g1

0x935c,	// (0x00038326) list_single_uniindi_pane_g1

0x936f,	// (0x00038339) list_single_uniindi_pane_t1

0x022b,	// (0x0002f1f5) control_bg_pane

0x9394,	// (0x0003835e) bg_sctrl_sk_pane_cp1

0x939d,	// (0x00038367) bg_sctrl_sk_pane_cp2

0x93a6,	// (0x00038370) control_bg_pane_g1

0x93af,	// (0x00038379) control_bg_pane_g2

0x0001,

0xfd44,	// (0x0003ed0e) control_bg_pane_g

0x73db,	// (0x000363a5) cell_indicator_nsta_pane_g1_ParamLimits

0xe076,	// (0x0003d040) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x0003ea76) cell_indicator_nsta_pane_g_ParamLimits

0x3354,	// (0x0003231e) form2_midp_time_pane_t1_ParamLimits

0x1dcc,	// (0x00030d96) main_idle_act4_pane_ParamLimits

0x1dcc,	// (0x00030d96) main_idle_act4_pane

0xc54e,	// (0x0003b518) popup_tb_extension_window_ParamLimits

0xe958,	// (0x0003d922) tb_ext_find_pane_ParamLimits

0xe958,	// (0x0003d922) tb_ext_find_pane

0x93b8,	// (0x00038382) ai_gene_pane_1_cp1

0x4d10,	// (0x00033cda) ai_gene_pane_2_cp1

0x93c0,	// (0x0003838a) list_single_idle_plugin_calendar_pane

0x93c9,	// (0x00038393) list_single_idle_plugin_notification_pane

0x93d2,	// (0x0003839c) list_single_idle_plugin_player_pane

0xe9b7,	// (0x0003d981) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe9b7,	// (0x0003d981) list_single_idle_plugin_shortcut_pane

0xe9df,	// (0x0003d9a9) main_idle_act4_pane_t1

0xe9f5,	// (0x0003d9bf) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x0003ed13) main_idle_act4_pane_t

0xea0d,	// (0x0003d9d7) middle_sk_idle_act4_pane_ParamLimits

0xea0d,	// (0x0003d9d7) middle_sk_idle_act4_pane

0xea29,	// (0x0003d9f3) popup_clock_digital_analogue_window_cp2

0xea50,	// (0x0003da1a) shortcut_wheel_idle_act4_pane_ParamLimits

0xea50,	// (0x0003da1a) shortcut_wheel_idle_act4_pane

0x79c4,	// (0x0003698e) shortcut_wheel_idle_act4_pane_g1

0x79c4,	// (0x0003698e) shortcut_wheel_idle_act4_pane_g2

0x79c4,	// (0x0003698e) shortcut_wheel_idle_act4_pane_g3

0x79c4,	// (0x0003698e) shortcut_wheel_idle_act4_pane_g4

0x79c4,	// (0x0003698e) shortcut_wheel_idle_act4_pane_g5

0x9465,	// (0x0003842f) shortcut_wheel_idle_act4_pane_g6

0x946d,	// (0x00038437) shortcut_wheel_idle_act4_pane_g7

0x9475,	// (0x0003843f) shortcut_wheel_idle_act4_pane_g8

0x947d,	// (0x00038447) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x0003ed18) shortcut_wheel_idle_act4_pane_g

0xe398,	// (0x0003d362) middle_sk_idle_act4_pane_g1_ParamLimits

0xe398,	// (0x0003d362) middle_sk_idle_act4_pane_g1

0xeacd,	// (0x0003da97) middle_sk_idle_act4_pane_g2_ParamLimits

0xeacd,	// (0x0003da97) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x0003ed3b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x0003ed3b) middle_sk_idle_act4_pane_g

0xeae5,	// (0x0003daaf) middle_sk_idle_act4_pane_t1_ParamLimits

0xeae5,	// (0x0003daaf) middle_sk_idle_act4_pane_t1

0xeb14,	// (0x0003dade) grid_ai_shortcut_pane_ParamLimits

0xeb14,	// (0x0003dade) grid_ai_shortcut_pane

0xeb31,	// (0x0003dafb) list_highlight_pane_cp16_ParamLimits

0xeb31,	// (0x0003dafb) list_highlight_pane_cp16

0xeb3e,	// (0x0003db08) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeb3e,	// (0x0003db08) list_single_idle_plugin_shortcut_pane_g1

0xeb4a,	// (0x0003db14) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeb4a,	// (0x0003db14) list_single_idle_plugin_shortcut_pane_g2

0xeb66,	// (0x0003db30) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeb66,	// (0x0003db30) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x0003ed40) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x0003ed40) list_single_idle_plugin_shortcut_pane_g

0xeb7b,	// (0x0003db45) cell_ai_shortcut_pane_ParamLimits

0xeb7b,	// (0x0003db45) cell_ai_shortcut_pane

0xeb91,	// (0x0003db5b) cell_ai_shortcut_pane_g1_ParamLimits

0xeb91,	// (0x0003db5b) cell_ai_shortcut_pane_g1

0x93b8,	// (0x00038382) ai_gene_pane_1_cp2

0x95aa,	// (0x00038574) ai_gene_pane_2_cp2

0x95b2,	// (0x0003857c) list_highlight_pane_cp15

0x95bb,	// (0x00038585) list_single_idle_plugin_calendar_pane_g1

0x95b2,	// (0x0003857c) list_highlight_pane_cp17

0x95c3,	// (0x0003858d) list_single_idle_plugin_calendar_pane_g1_copy1

0x95cb,	// (0x00038595) list_single_idle_plugin_player_pane_g1

0x6d43,	// (0x00035d0d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x0003ed47) list_single_idle_plugin_player_pane_g

0x95d3,	// (0x0003859d) list_single_idle_plugin_player_pane_t1

0x95e1,	// (0x000385ab) list_single_idle_plugin_player_pane_t2

0x95ef,	// (0x000385b9) list_single_idle_plugin_player_pane_t3

0x95fd,	// (0x000385c7) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x0003ed4c) list_single_idle_plugin_player_pane_t

0x960b,	// (0x000385d5) wait_bar_pane_cp15

0x9613,	// (0x000385dd) grid_ai_notification_pane

0x6d43,	// (0x00035d0d) list_single_idle_plugin_notification_pane_g1

0xebb3,	// (0x0003db7d) cell_ai_notification_pane_ParamLimits

0xebb3,	// (0x0003db7d) cell_ai_notification_pane

0x9629,	// (0x000385f3) cell_ai_notification_pane_g1

0x9631,	// (0x000385fb) cell_ai_notification_pane_t1

0xebc0,	// (0x0003db8a) tb_ext_find_button_pane

0xebc8,	// (0x0003db92) tb_ext_find_pane_g1

0xebd0,	// (0x0003db9a) tb_ext_find_pane_t1

0x45b9,	// (0x00033583) tb_ext_find_button_pane_g1

0x965d,	// (0x00038627) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x0003ed55) tb_ext_find_button_pane_g

0xe9df,	// (0x0003d9a9) main_idle_act4_pane_t1_ParamLimits

0xe9f5,	// (0x0003d9bf) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x0003ed13) main_idle_act4_pane_t_ParamLimits

0xea29,	// (0x0003d9f3) popup_clock_digital_analogue_window_cp2_ParamLimits

0xea40,	// (0x0003da0a) sat_plugin_idle_act4_pane_ParamLimits

0xea40,	// (0x0003da0a) sat_plugin_idle_act4_pane

0xebde,	// (0x0003dba8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xebde,	// (0x0003dba8) sat_plugin_idle_act4_pane_t1

0xebf6,	// (0x0003dbc0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xebf6,	// (0x0003dbc0) sat_plugin_idle_act4_pane_t2

0xec0e,	// (0x0003dbd8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xec0e,	// (0x0003dbd8) sat_plugin_idle_act4_pane_t3

0xec26,	// (0x0003dbf0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xec26,	// (0x0003dbf0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x0003ed5a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x0003ed5a) sat_plugin_idle_act4_pane_t

0x02f0,	// (0x0002f2ba) popup_battery_window_ParamLimits

0x02f0,	// (0x0002f2ba) popup_battery_window

0x3994,	// (0x0003295e) bg_popup_sub_pane_cp25_ParamLimits

0x3994,	// (0x0003295e) bg_popup_sub_pane_cp25

0x96d3,	// (0x0003869d) popup_battery_window_g1_ParamLimits

0x96d3,	// (0x0003869d) popup_battery_window_g1

0x96df,	// (0x000386a9) popup_battery_window_t1_ParamLimits

0x96df,	// (0x000386a9) popup_battery_window_t1

0x96f1,	// (0x000386bb) popup_battery_window_t2_ParamLimits

0x96f1,	// (0x000386bb) popup_battery_window_t2

0x0001,

0xfd99,	// (0x0003ed63) popup_battery_window_t_ParamLimits

0xfd99,	// (0x0003ed63) popup_battery_window_t

0xd5ba,	// (0x0003c584) midp_canvas_pane_ParamLimits

0xd619,	// (0x0003c5e3) midp_keypad_pane_ParamLimits

0xd619,	// (0x0003c5e3) midp_keypad_pane

0x4f0b,	// (0x00033ed5) main_midp_pane_ParamLimits

0x7455,	// (0x0003641f) signal_pane_g2_cp_ParamLimits

0xec3e,	// (0x0003dc08) aid_size_cell_midp_keypad_ParamLimits

0xec3e,	// (0x0003dc08) aid_size_cell_midp_keypad

0xec5c,	// (0x0003dc26) midp_keyp_game_grid_pane_ParamLimits

0xec5c,	// (0x0003dc26) midp_keyp_game_grid_pane

0xec83,	// (0x0003dc4d) midp_keyp_rocker_pane_ParamLimits

0xec83,	// (0x0003dc4d) midp_keyp_rocker_pane

0xecd4,	// (0x0003dc9e) midp_keyp_sk_left_pane_ParamLimits

0xecd4,	// (0x0003dc9e) midp_keyp_sk_left_pane

0xed28,	// (0x0003dcf2) midp_keyp_sk_right_pane_ParamLimits

0xed28,	// (0x0003dcf2) midp_keyp_sk_right_pane

0x2da6,	// (0x00031d70) bg_button_pane_cp03

0xed89,	// (0x0003dd53) midp_keyp_sk_left_pane_g1

0x2da6,	// (0x00031d70) bg_button_pane_cp04

0xed89,	// (0x0003dd53) midp_keyp_sk_right_pane_g1

0x79c4,	// (0x0003698e) midp_keyp_rocker_pane_g1

0xed92,	// (0x0003dd5c) keyp_game_cell_pane_ParamLimits

0xed92,	// (0x0003dd5c) keyp_game_cell_pane

0x2da6,	// (0x00031d70) bg_button_pane_cp02

0xedb6,	// (0x0003dd80) keyp_game_cell_pane_g1

0xb72b,	// (0x0003a6f5) popup_fep_vkb2_window_ParamLimits

0xb72b,	// (0x0003a6f5) popup_fep_vkb2_window

0xca99,	// (0x0003ba63) aid_size_cell_vkb2_ParamLimits

0xca99,	// (0x0003ba63) aid_size_cell_vkb2

0xcacf,	// (0x0003ba99) popup_fep_vkb2_window_g1_ParamLimits

0xcacf,	// (0x0003ba99) popup_fep_vkb2_window_g1

0xcb1f,	// (0x0003bae9) vkb2_area_bottom_pane_ParamLimits

0xcb1f,	// (0x0003bae9) vkb2_area_bottom_pane

0xcb73,	// (0x0003bb3d) vkb2_area_keypad_pane_ParamLimits

0xcb73,	// (0x0003bb3d) vkb2_area_keypad_pane

0xcbbb,	// (0x0003bb85) vkb2_area_top_pane_ParamLimits

0xcbbb,	// (0x0003bb85) vkb2_area_top_pane

0xcc41,	// (0x0003bc0b) vkb2_top_entry_pane_ParamLimits

0xcc41,	// (0x0003bc0b) vkb2_top_entry_pane

0xcc6e,	// (0x0003bc38) vkb2_top_grid_left_pane_ParamLimits

0xcc6e,	// (0x0003bc38) vkb2_top_grid_left_pane

0xcc8e,	// (0x0003bc58) vkb2_top_grid_right_pane_ParamLimits

0xcc8e,	// (0x0003bc58) vkb2_top_grid_right_pane

0x2500,	// (0x000314ca) vkb2_cell_keypad_pane_ParamLimits

0x2500,	// (0x000314ca) vkb2_cell_keypad_pane

0xccd4,	// (0x0003bc9e) vkb2_area_bottom_grid_pane_ParamLimits

0xccd4,	// (0x0003bc9e) vkb2_area_bottom_grid_pane

0xccfe,	// (0x0003bcc8) vkb2_area_bottom_pane_g1_ParamLimits

0xccfe,	// (0x0003bcc8) vkb2_area_bottom_pane_g1

0xcd24,	// (0x0003bcee) vkb2_area_bottom_pane_g2_ParamLimits

0xcd24,	// (0x0003bcee) vkb2_area_bottom_pane_g2

0xcd55,	// (0x0003bd1f) vkb2_area_bottom_pane_g3_ParamLimits

0xcd55,	// (0x0003bd1f) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x0003ed68) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x0003ed68) vkb2_area_bottom_pane_g

0x26aa,	// (0x00031674) vkb2_top_cell_left_pane_ParamLimits

0x26aa,	// (0x00031674) vkb2_top_cell_left_pane

0xedbf,	// (0x0003dd89) vkb2_top_entry_pane_g1_ParamLimits

0xedbf,	// (0x0003dd89) vkb2_top_entry_pane_g1

0xedcd,	// (0x0003dd97) vkb2_top_entry_pane_t1_ParamLimits

0xedcd,	// (0x0003dd97) vkb2_top_entry_pane_t1

0x98a2,	// (0x0003886c) vkb2_top_entry_pane_t2_ParamLimits

0x98a2,	// (0x0003886c) vkb2_top_entry_pane_t2

0x98d4,	// (0x0003889e) vkb2_top_entry_pane_t3_ParamLimits

0x98d4,	// (0x0003889e) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x0003ed6f) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x0003ed6f) vkb2_top_entry_pane_t

0xcdbf,	// (0x0003bd89) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdbf,	// (0x0003bd89) vkb2_top_grid_right_pane_g1

0x270d,	// (0x000316d7) vkb2_top_grid_right_pane_g2_ParamLimits

0x270d,	// (0x000316d7) vkb2_top_grid_right_pane_g2

0x2725,	// (0x000316ef) vkb2_top_grid_right_pane_g3_ParamLimits

0x2725,	// (0x000316ef) vkb2_top_grid_right_pane_g3

0xcdd5,	// (0x0003bd9f) vkb2_top_grid_right_pane_g4_ParamLimits

0xcdd5,	// (0x0003bd9f) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x0003ed76) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x0003ed76) vkb2_top_grid_right_pane_g

0x2753,	// (0x0003171d) vkb2_top_cell_left_pane_g1

0x276a,	// (0x00031734) vkb2_cell_keypad_pane_g1_ParamLimits

0x276a,	// (0x00031734) vkb2_cell_keypad_pane_g1

0x98f8,	// (0x000388c2) vkb2_cell_keypad_pane_t1_ParamLimits

0x98f8,	// (0x000388c2) vkb2_cell_keypad_pane_t1

0x2778,	// (0x00031742) vkb2_cell_bottom_grid_pane_ParamLimits

0x2778,	// (0x00031742) vkb2_cell_bottom_grid_pane

0x27b1,	// (0x0003177b) vkb2_cell_bottom_grid_pane_g1

0xea71,	// (0x0003da3b) aid_call2_pane_cp02

0xea79,	// (0x0003da43) aid_call_pane_cp02

0xea81,	// (0x0003da4b) clock_digital_number_pane_cp10

0xea89,	// (0x0003da53) clock_digital_number_pane_cp11

0xea91,	// (0x0003da5b) clock_digital_number_pane_cp12

0xea99,	// (0x0003da63) clock_digital_number_pane_cp13

0xeaa1,	// (0x0003da6b) clock_digital_separator_pane_cp10

0x45b9,	// (0x00033583) popup_clock_digital_analogue_window_cp2_g1

0x45b9,	// (0x00033583) popup_clock_digital_analogue_window_cp2_g2

0xeaa9,	// (0x0003da73) popup_clock_digital_analogue_window_cp2_g3

0x45b9,	// (0x00033583) popup_clock_digital_analogue_window_cp2_g4

0xeaa9,	// (0x0003da73) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x0003ed2b) popup_clock_digital_analogue_window_cp2_g

0xeab1,	// (0x0003da7b) popup_clock_digital_analogue_window_cp2_t1

0xeabf,	// (0x0003da89) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x0003ed36) popup_clock_digital_analogue_window_cp2_t

0x79c4,	// (0x0003698e) clock_digital_number_pane_cp10_g1

0x79c4,	// (0x0003698e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x0003eb12) clock_digital_number_pane_cp10_g

0x79c4,	// (0x0003698e) clock_digital_separator_pane_cp10_g1

0x79c4,	// (0x0003698e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x0003eb12) clock_digital_separator_pane_cp10_g

0x9301,	// (0x000382cb) uniindi_top_pane_g3

0x9312,	// (0x000382dc) uniindi_top_pane_g4

0x258b,	// (0x00031555) vkb2_row_keypad_pane_ParamLimits

0x258b,	// (0x00031555) vkb2_row_keypad_pane

0x27d1,	// (0x0003179b) vkb2_cell_t_keypad_pane_ParamLimits

0x27d1,	// (0x0003179b) vkb2_cell_t_keypad_pane

0x27e1,	// (0x000317ab) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x27e1,	// (0x000317ab) vkb2_cell_t_keypad_pane_cp08

0x27f4,	// (0x000317be) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x27f4,	// (0x000317be) vkb2_cell_t_keypad_pane_cp09

0x2808,	// (0x000317d2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2808,	// (0x000317d2) vkb2_cell_t_keypad_pane_cp01

0x2819,	// (0x000317e3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2819,	// (0x000317e3) vkb2_cell_t_keypad_pane_cp02

0x282a,	// (0x000317f4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x282a,	// (0x000317f4) vkb2_cell_t_keypad_pane_cp03

0x283b,	// (0x00031805) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x283b,	// (0x00031805) vkb2_cell_t_keypad_pane_cp04

0x284c,	// (0x00031816) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x284c,	// (0x00031816) vkb2_cell_t_keypad_pane_cp05

0x285d,	// (0x00031827) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x285d,	// (0x00031827) vkb2_cell_t_keypad_pane_cp06

0x286e,	// (0x00031838) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x286e,	// (0x00031838) vkb2_cell_t_keypad_pane_cp07

0x287f,	// (0x00031849) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x287f,	// (0x00031849) vkb2_cell_t_keypad_pane_cp10

0x2031,	// (0x00030ffb) vkb2_cell_t_keypad_pane_g1

0x990f,	// (0x000388d9) vkb2_cell_t_keypad_pane_t1

0x022b,	// (0x0002f1f5) popup_grid_graphic2_window

0xee06,	// (0x0003ddd0) aid_size_cell_graphic2_ParamLimits

0xee06,	// (0x0003ddd0) aid_size_cell_graphic2

0xee44,	// (0x0003de0e) bg_popup_window_pane_cp21_ParamLimits

0xee44,	// (0x0003de0e) bg_popup_window_pane_cp21

0xee52,	// (0x0003de1c) graphic2_pages_pane_ParamLimits

0xee52,	// (0x0003de1c) graphic2_pages_pane

0xeea8,	// (0x0003de72) grid_graphic2_control_pane_ParamLimits

0xeea8,	// (0x0003de72) grid_graphic2_control_pane

0xeef0,	// (0x0003deba) grid_graphic2_pane_ParamLimits

0xeef0,	// (0x0003deba) grid_graphic2_pane

0xef77,	// (0x0003df41) cell_graphic2_pane

0x022b,	// (0x0002f1f5) main_comp_mode_pane

0x8b76,	// (0x00037b40) list_ai3_gene_pane_ParamLimits

0xe7b0,	// (0x0003d77a) bg_popup_window_pane_cp19_ParamLimits

0x8f53,	// (0x00037f1d) bg_touch_area_indi_pane_ParamLimits

0x8f53,	// (0x00037f1d) bg_touch_area_indi_pane

0x8f69,	// (0x00037f33) bg_touch_area_indi_pane_cp01_ParamLimits

0x8f69,	// (0x00037f33) bg_touch_area_indi_pane_cp01

0x8f7f,	// (0x00037f49) bg_touch_area_indi_pane_cp02_ParamLimits

0x8f7f,	// (0x00037f49) bg_touch_area_indi_pane_cp02

0x8f97,	// (0x00037f61) bg_touch_area_indi_pane_cp03_ParamLimits

0x8f97,	// (0x00037f61) bg_touch_area_indi_pane_cp03

0x8fb1,	// (0x00037f7b) popup_slider_window_g1_ParamLimits

0x8fcd,	// (0x00037f97) popup_slider_window_g2_ParamLimits

0x8fe9,	// (0x00037fb3) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x0003ecc0) popup_slider_window_g_ParamLimits

0x9045,	// (0x0003800f) popup_slider_window_t1_ParamLimits

0x90b9,	// (0x00038083) small_volume_slider_vertical_pane_ParamLimits

0xef77,	// (0x0003df41) cell_graphic2_pane_ParamLimits

0xefd4,	// (0x0003df9e) bg_button_pane_cp10_ParamLimits

0xefd4,	// (0x0003df9e) bg_button_pane_cp10

0xefe7,	// (0x0003dfb1) bg_button_pane_cp11_ParamLimits

0xefe7,	// (0x0003dfb1) bg_button_pane_cp11

0xeffa,	// (0x0003dfc4) graphic2_pages_pane_g1_ParamLimits

0xeffa,	// (0x0003dfc4) graphic2_pages_pane_g1

0xf015,	// (0x0003dfdf) graphic2_pages_pane_g2_ParamLimits

0xf015,	// (0x0003dfdf) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x0003ed84) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x0003ed84) graphic2_pages_pane_g

0xf02d,	// (0x0003dff7) graphic2_pages_pane_t1_ParamLimits

0xf02d,	// (0x0003dff7) graphic2_pages_pane_t1

0xf045,	// (0x0003e00f) cell_graphic2_control_pane_ParamLimits

0xf045,	// (0x0003e00f) cell_graphic2_control_pane

0xf077,	// (0x0003e041) cell_graphic2_pane_g1_ParamLimits

0xf077,	// (0x0003e041) cell_graphic2_pane_g1

0xe3a6,	// (0x0003d370) cell_graphic2_pane_g2_ParamLimits

0xe3a6,	// (0x0003d370) cell_graphic2_pane_g2

0xed7c,	// (0x0003dd46) cell_graphic2_pane_g3_ParamLimits

0xed7c,	// (0x0003dd46) cell_graphic2_pane_g3

0xe3b3,	// (0x0003d37d) cell_graphic2_pane_g4_ParamLimits

0xe3b3,	// (0x0003d37d) cell_graphic2_pane_g4

0xf084,	// (0x0003e04e) cell_graphic2_pane_g5_ParamLimits

0xf084,	// (0x0003e04e) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x0003ed89) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x0003ed89) cell_graphic2_pane_g

0xf0a4,	// (0x0003e06e) cell_graphic2_pane_t1_ParamLimits

0xf0a4,	// (0x0003e06e) cell_graphic2_pane_t1

0x610b,	// (0x000350d5) grid_highlight_pane_cp11_ParamLimits

0x610b,	// (0x000350d5) grid_highlight_pane_cp11

0x3994,	// (0x0003295e) bg_button_pane_cp05

0xf0d8,	// (0x0003e0a2) cell_graphic2_control_pane_g1

0x79c4,	// (0x0003698e) bg_touch_area_indi_pane_g1

0x9bdd,	// (0x00038ba7) aid_cmod_rocker_key_size

0x9be7,	// (0x00038bb1) aid_cmode_itu_key_size

0x9bf1,	// (0x00038bbb) main_cmode_video_pane

0x9bfb,	// (0x00038bc5) main_comp_mode_itu_pane

0x9c07,	// (0x00038bd1) main_comp_mode_rocker_pane

0x9c13,	// (0x00038bdd) cell_cmode_rocker_pane_ParamLimits

0x9c13,	// (0x00038bdd) cell_cmode_rocker_pane

0x9c25,	// (0x00038bef) cell_cmode_itu_pane_ParamLimits

0x9c25,	// (0x00038bef) cell_cmode_itu_pane

0x3f65,	// (0x00032f2f) bg_button_pane_cp06_ParamLimits

0x3f65,	// (0x00032f2f) bg_button_pane_cp06

0x7c32,	// (0x00036bfc) cell_cmode_rocker_pane_g1_ParamLimits

0x7c32,	// (0x00036bfc) cell_cmode_rocker_pane_g1

0x915d,	// (0x00038127) cell_cmode_rocker_pane_g2_ParamLimits

0x915d,	// (0x00038127) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x0003ed99) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x0003ed99) cell_cmode_rocker_pane_g

0x2da6,	// (0x00031d70) bg_button_pane_cp07

0x9c3a,	// (0x00038c04) cell_cmode_itu_pane_g1

0x9c43,	// (0x00038c0d) cell_cmode_itu_pane_t1

0x9c51,	// (0x00038c1b) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x0003ed9e) cell_cmode_itu_pane_t

0x9384,	// (0x0003834e) aid_touch_ctrl_left

0x938c,	// (0x00038356) aid_touch_ctrl_right

0x2da6,	// (0x00031d70) compa_mode_pane

0xf0fc,	// (0x0003e0c6) aid_cmod_rocker_key_size_cp

0xf106,	// (0x0003e0d0) aid_cmode_itu_key_size_cp

0x9c73,	// (0x00038c3d) compa_mode_pane_g1

0x9c7b,	// (0x00038c45) compa_mode_pane_g2

0x9c83,	// (0x00038c4d) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x0003eda3) compa_mode_pane_g

0xf110,	// (0x0003e0da) main_comp_mode_itu_pane_cp

0xf118,	// (0x0003e0e2) main_comp_mode_rocker_pane_cp

0xf120,	// (0x0003e0ea) cell_cmode_itu_pane_cp_ParamLimits

0xf120,	// (0x0003e0ea) cell_cmode_itu_pane_cp

0xf135,	// (0x0003e0ff) cell_cmode_rocker_pane_cp_ParamLimits

0xf135,	// (0x0003e0ff) cell_cmode_rocker_pane_cp

0x3f65,	// (0x00032f2f) bg_button_pane_cp06_cp_ParamLimits

0x3f65,	// (0x00032f2f) bg_button_pane_cp06_cp

0x7c32,	// (0x00036bfc) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7c32,	// (0x00036bfc) cell_cmode_rocker_pane_g1_cp

0x79c4,	// (0x0003698e) cell_cmode_rocker_pane_g2_cp

0x2da6,	// (0x00031d70) bg_button_pane_cp07_cp

0xf147,	// (0x0003e111) cell_cmode_itu_pane_g1_cp

0xf150,	// (0x0003e11a) cell_cmode_itu_pane_t1_cp

0xf150,	// (0x0003e11a) cell_cmode_itu_pane_t2_cp

0xdecd,	// (0x0003ce97) settings_code_pane_cp2

0x370b,	// (0x000326d5) bg_popup_window_pane_cp3_ParamLimits

0x3b62,	// (0x00032b2c) heading_pane_cp3_ParamLimits

0x3b6e,	// (0x00032b38) listscroll_popup_graphic_pane_ParamLimits

0x1dda,	// (0x00030da4) fep_hwr_aid_pane_ParamLimits

0x2251,	// (0x0003121b) aid_touch_sctrl_top_ParamLimits

0x226c,	// (0x00031236) sctrl_sk_top_pane_g1_ParamLimits

0x2031,	// (0x00030ffb) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x0003ecd9) sctrl_sk_top_pane_g_ParamLimits

0x2279,	// (0x00031243) sctrl_sk_top_pane_t1_ParamLimits

0x2251,	// (0x0003121b) aid_touch_sctrl_bottom_ParamLimits

0x2279,	// (0x00031243) sctrl_sk_bottom_pane_t1_ParamLimits

0x92cd,	// (0x00038297) aid_area_touch_clock

0xcc03,	// (0x0003bbcd) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc03,	// (0x0003bbcd) aid_vkb2_area_top_pane_cell

0xccae,	// (0x0003bc78) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xccae,	// (0x0003bc78) aid_vkb2_area_bottom_pane_cell

0x985a,	// (0x00038824) popup_char_count_window

0x9cd9,	// (0x00038ca3) popup_char_count_window_g1

0x9ce2,	// (0x00038cac) popup_char_count_window_g2

0x9ceb,	// (0x00038cb5) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x0003edaa) popup_char_count_window_g

0x9cf4,	// (0x00038cbe) popup_char_count_window_t1

0x2328,	// (0x000312f2) popup_fep_char_preview_window_ParamLimits

0x2328,	// (0x000312f2) popup_fep_char_preview_window

0xcc23,	// (0x0003bbed) vkb2_top_candi_pane_ParamLimits

0xcc23,	// (0x0003bbed) vkb2_top_candi_pane

0xf15e,	// (0x0003e128) cell_vkb2_top_candi_pane_ParamLimits

0xf15e,	// (0x0003e128) cell_vkb2_top_candi_pane

0x2894,	// (0x0003185e) bg_popup_fep_char_preview_window_ParamLimits

0x2894,	// (0x0003185e) bg_popup_fep_char_preview_window

0x28a2,	// (0x0003186c) popup_fep_char_preview_window_t1_ParamLimits

0x28a2,	// (0x0003186c) popup_fep_char_preview_window_t1

0x9d4f,	// (0x00038d19) bg_popup_fep_char_preview_window_g1

0x9d57,	// (0x00038d21) bg_popup_fep_char_preview_window_g2

0x9d5f,	// (0x00038d29) bg_popup_fep_char_preview_window_g3

0x9d67,	// (0x00038d31) bg_popup_fep_char_preview_window_g4

0x9d6f,	// (0x00038d39) bg_popup_fep_char_preview_window_g5

0x28dc,	// (0x000318a6) bg_popup_fep_char_preview_window_g6

0x9d77,	// (0x00038d41) bg_popup_fep_char_preview_window_g7

0x9d7f,	// (0x00038d49) bg_popup_fep_char_preview_window_g8

0x9d87,	// (0x00038d51) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x0003edb1) bg_popup_fep_char_preview_window_g

0x2031,	// (0x00030ffb) cell_vkb2_top_candi_pane_g1_ParamLimits

0x2031,	// (0x00030ffb) cell_vkb2_top_candi_pane_g1

0x203f,	// (0x00031009) cell_vkb2_top_candi_pane_g2_ParamLimits

0x203f,	// (0x00031009) cell_vkb2_top_candi_pane_g2

0x968c,	// (0x00038656) cell_vkb2_top_candi_pane_g3_ParamLimits

0x968c,	// (0x00038656) cell_vkb2_top_candi_pane_g3

0x28e4,	// (0x000318ae) cell_vkb2_top_candi_pane_g4_ParamLimits

0x28e4,	// (0x000318ae) cell_vkb2_top_candi_pane_g4

0x80fe,	// (0x000370c8) cell_vkb2_top_candi_pane_g5_ParamLimits

0x80fe,	// (0x000370c8) cell_vkb2_top_candi_pane_g5

0x2905,	// (0x000318cf) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2905,	// (0x000318cf) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x0003edc4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x0003edc4) cell_vkb2_top_candi_pane_g

0x2913,	// (0x000318dd) cell_vkb2_top_candi_pane_t1

0x1c16,	// (0x00030be0) aid_size_touch_slider_mark_ParamLimits

0x1c16,	// (0x00030be0) aid_size_touch_slider_mark

0xee8e,	// (0x0003de58) grid_graphic2_catg_pane_ParamLimits

0xee8e,	// (0x0003de58) grid_graphic2_catg_pane

0xef4a,	// (0x0003df14) popup_grid_graphic2_window_t1_ParamLimits

0xef4a,	// (0x0003df14) popup_grid_graphic2_window_t1

0xef60,	// (0x0003df2a) popup_grid_graphic2_window_t2_ParamLimits

0xef60,	// (0x0003df2a) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x0003ed7f) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x0003ed7f) popup_grid_graphic2_window_t

0x3994,	// (0x0003295e) bg_button_pane_cp05_ParamLimits

0xf0d8,	// (0x0003e0a2) cell_graphic2_control_pane_g1_ParamLimits

0xf1c4,	// (0x0003e18e) cell_graphic2_catg_pane_ParamLimits

0xf1c4,	// (0x0003e18e) cell_graphic2_catg_pane

0x2da6,	// (0x00031d70) bg_button_pane_cp12

0xf1d6,	// (0x0003e1a0) cell_graphic2_catg_pane_g1

0x9299,	// (0x00038263) cell_tb_ext_pane_t1_ParamLimits

0x26ca,	// (0x00031694) vkb2_top_cell_right_narrow_pane_ParamLimits

0x26ca,	// (0x00031694) vkb2_top_cell_right_narrow_pane

0x26e2,	// (0x000316ac) vkb2_top_cell_right_wide_pane_ParamLimits

0x26e2,	// (0x000316ac) vkb2_top_cell_right_wide_pane

0x1dcc,	// (0x00030d96) bg_vkb2_func_pane_ParamLimits

0x1dcc,	// (0x00030d96) bg_vkb2_func_pane

0x2753,	// (0x0003171d) vkb2_top_cell_left_pane_g1_ParamLimits

0x1dcc,	// (0x00030d96) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1dcc,	// (0x00030d96) bg_vkb2_fuc_pane_cp03

0x27b1,	// (0x0003177b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5411,	// (0x000343db) bg_vkb2_func_pane_g1

0x5419,	// (0x000343e3) bg_vkb2_func_pane_g2

0x5429,	// (0x000343f3) bg_vkb2_func_pane_g3

0x5421,	// (0x000343eb) bg_vkb2_func_pane_g4

0x5431,	// (0x000343fb) bg_vkb2_func_pane_g5

0x5439,	// (0x00034403) bg_vkb2_func_pane_g6

0x5441,	// (0x0003440b) bg_vkb2_func_pane_g7

0x5449,	// (0x00034413) bg_vkb2_func_pane_g8

0x5409,	// (0x000343d3) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x0003edd1) bg_vkb2_func_pane_g

0x1dcc,	// (0x00030d96) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1dcc,	// (0x00030d96) bg_vkb2_fuc_pane_cp01

0x2753,	// (0x0003171d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2753,	// (0x0003171d) vkb2_top_cell_right_wide_pane_g1

0x1dcc,	// (0x00030d96) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1dcc,	// (0x00030d96) bg_vkb2_fuc_pane_cp02

0x27b1,	// (0x0003177b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x27b1,	// (0x0003177b) vkb2_top_cell_right_narrow_pane_g1

0xe6ea,	// (0x0003d6b4) aid_touch_area_decrease_ParamLimits

0xe6ea,	// (0x0003d6b4) aid_touch_area_decrease

0xe724,	// (0x0003d6ee) aid_touch_area_increase_ParamLimits

0xe724,	// (0x0003d6ee) aid_touch_area_increase

0xe74c,	// (0x0003d716) aid_touch_area_mute_ParamLimits

0xe74c,	// (0x0003d716) aid_touch_area_mute

0xe77c,	// (0x0003d746) aid_touch_area_slider_ParamLimits

0xe77c,	// (0x0003d746) aid_touch_area_slider

0xe7bc,	// (0x0003d786) popup_slider_window_g4_ParamLimits

0xe7bc,	// (0x0003d786) popup_slider_window_g4

0xe7e4,	// (0x0003d7ae) popup_slider_window_g5_ParamLimits

0xe7e4,	// (0x0003d7ae) popup_slider_window_g5

0xe818,	// (0x0003d7e2) popup_slider_window_g6_ParamLimits

0xe818,	// (0x0003d7e2) popup_slider_window_g6

0x9073,	// (0x0003803d) popup_slider_window_t2_ParamLimits

0x9073,	// (0x0003803d) popup_slider_window_t2

0x0001,

0xfd03,	// (0x0003eccd) popup_slider_window_t_ParamLimits

0xfd03,	// (0x0003eccd) popup_slider_window_t

0xe834,	// (0x0003d7fe) slider_pane_ParamLimits

0xe834,	// (0x0003d7fe) slider_pane

0x9daa,	// (0x00038d74) slider_pane_g1_ParamLimits

0x9daa,	// (0x00038d74) slider_pane_g1

0x9dbe,	// (0x00038d88) slider_pane_g2_ParamLimits

0x9dbe,	// (0x00038d88) slider_pane_g2

0x9dd4,	// (0x00038d9e) slider_pane_g3_ParamLimits

0x9dd4,	// (0x00038d9e) slider_pane_g3

0x0003,

0xfe1a,	// (0x0003ede4) slider_pane_g_ParamLimits

0xfe1a,	// (0x0003ede4) slider_pane_g

0xc596,	// (0x0003b560) popup_tb_float_extension_window_ParamLimits

0xc596,	// (0x0003b560) popup_tb_float_extension_window

0x9e00,	// (0x00038dca) aid_size_cell_tb_float_ext

0x2da6,	// (0x00031d70) bg_popup_sub_window_cp28

0x9e0c,	// (0x00038dd6) grid_tb_float_ext_pane

0x9e16,	// (0x00038de0) cell_tb_float_ext_pane_ParamLimits

0x9e16,	// (0x00038de0) cell_tb_float_ext_pane

0x9e30,	// (0x00038dfa) cell_tb_float_ext_pane_g1

0x9e39,	// (0x00038e03) grid_highlight_pane_cp12

0xc82f,	// (0x0003b7f9) cell_last_hwr_side_pane_ParamLimits

0xc82f,	// (0x0003b7f9) cell_last_hwr_side_pane

0x79c4,	// (0x0003698e) cell_last_hwr_side_pane_g1

0x9e42,	// (0x00038e0c) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x0003eded) cell_last_hwr_side_pane_g

0xcd8a,	// (0x0003bd54) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd8a,	// (0x0003bd54) vkb2_area_bottom_space_btn_pane

0x2031,	// (0x00030ffb) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x990f,	// (0x000388d9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2913,	// (0x000318dd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2932,	// (0x000318fc) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2932,	// (0x000318fc) vkb2_area_bottom_space_btn_pane_g1

0x296c,	// (0x00031936) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x296c,	// (0x00031936) vkb2_area_bottom_space_btn_pane_g2

0x29a2,	// (0x0003196c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x29a2,	// (0x0003196c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x0003edf2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x0003edf2) vkb2_area_bottom_space_btn_pane_g

0x1e8f,	// (0x00030e59) cel_fep_hwr_func_pane_ParamLimits

0x1e8f,	// (0x00030e59) cel_fep_hwr_func_pane

0xc804,	// (0x0003b7ce) cell_hwr_side_button_pane_ParamLimits

0xc804,	// (0x0003b7ce) cell_hwr_side_button_pane

0x92cd,	// (0x00038297) aid_area_touch_clock_ParamLimits

0x3994,	// (0x0003295e) bg_uniindi_top_pane_ParamLimits

0x92df,	// (0x000382a9) uniindi_top_pane_g1_ParamLimits

0x92f5,	// (0x000382bf) uniindi_top_pane_g2_ParamLimits

0x9301,	// (0x000382cb) uniindi_top_pane_g3_ParamLimits

0x9312,	// (0x000382dc) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x0003ed05) uniindi_top_pane_g_ParamLimits

0x931f,	// (0x000382e9) uniindi_top_pane_t1_ParamLimits

0x3994,	// (0x0003295e) bg_vkb2_func_pane_cp01_ParamLimits

0x3994,	// (0x0003295e) bg_vkb2_func_pane_cp01

0x9e4b,	// (0x00038e15) cel_fep_hwr_func_pane_g1_ParamLimits

0x9e4b,	// (0x00038e15) cel_fep_hwr_func_pane_g1

0x3994,	// (0x0003295e) bg_vkb2_func_pane_cp02_ParamLimits

0x3994,	// (0x0003295e) bg_vkb2_func_pane_cp02

0x9e4b,	// (0x00038e15) cell_hwr_side_button_pane_g1_ParamLimits

0x9e4b,	// (0x00038e15) cell_hwr_side_button_pane_g1

0x528a,	// (0x00034254) status_pane_g4_ParamLimits

0x528a,	// (0x00034254) status_pane_g4

0x52a4,	// (0x0003426e) status_pane_t1

0x76de,	// (0x000366a8) form2_midp_gauge_slider_cont_pane

0x76e6,	// (0x000366b0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe143,	// (0x0003d10d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe157,	// (0x0003d121) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x0003eac5) form2_midp_gauge_slider_pane_t_ParamLimits

0x771c,	// (0x000366e6) form2_midp_slider_pane_ParamLimits

0x22e8,	// (0x000312b2) aid_size_cell_func_vkb2_ParamLimits

0x22e8,	// (0x000312b2) aid_size_cell_func_vkb2

0x9dec,	// (0x00038db6) slider_pane_g4_ParamLimits

0x9dec,	// (0x00038db6) slider_pane_g4

0xcdeb,	// (0x0003bdb5) form2_midp_gauge_slider_pane_t2_cp01

0xcdfb,	// (0x0003bdc5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcdfb,	// (0x0003bdc5) form2_midp_gauge_slider_pane_t3_cp01

0x2a17,	// (0x000319e1) form2_midp_slider_pane_cp01

0x2da6,	// (0x00031d70) navi_smil_pane

0x9e84,	// (0x00038e4e) navi_smil_pane_g1

0x9e8c,	// (0x00038e56) navi_smil_pane_t1

0x9e59,	// (0x00038e23) form2_midp_slider_pane_g1

0x9e62,	// (0x00038e2c) form2_midp_slider_pane_g2

0x9e6a,	// (0x00038e34) form2_midp_slider_pane_g3

0x9e59,	// (0x00038e23) form2_midp_slider_pane_g4

0xf1df,	// (0x0003e1a9) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x0003edfb) form2_midp_slider_pane_g

0x29dc,	// (0x000319a6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x29dc,	// (0x000319a6) vkb2_area_bottom_space_btn_pane_g4

0xd88e,	// (0x0003c858) lc0_navi_pane_ParamLimits

0xd88e,	// (0x0003c858) lc0_navi_pane

0xd8f8,	// (0x0003c8c2) lc0_stat_indi_pane_ParamLimits

0xd8f8,	// (0x0003c8c2) lc0_stat_indi_pane

0xd90d,	// (0x0003c8d7) ls0_title_pane_ParamLimits

0xd90d,	// (0x0003c8d7) ls0_title_pane

0x3f65,	// (0x00032f2f) bg_popup_sub_pane_cp14_ParamLimits

0x92b4,	// (0x0003827e) list_uniindi_pane_ParamLimits

0x92c0,	// (0x0003828a) uniindi_top_pane_ParamLimits

0x935c,	// (0x00038326) list_single_uniindi_pane_g1_ParamLimits

0x936f,	// (0x00038339) list_single_uniindi_pane_t1_ParamLimits

0xce1a,	// (0x0003bde4) lc0_stat_clock_pane_ParamLimits

0xce1a,	// (0x0003bde4) lc0_stat_clock_pane

0xf1ea,	// (0x0003e1b4) lc0_stat_indi_pane_g1_ParamLimits

0xf1ea,	// (0x0003e1b4) lc0_stat_indi_pane_g1

0xf1f7,	// (0x0003e1c1) lc0_stat_indi_pane_g2_ParamLimits

0xf1f7,	// (0x0003e1c1) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x0003ee06) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x0003ee06) lc0_stat_indi_pane_g

0xce27,	// (0x0003bdf1) lc0_uni_indicator_pane_ParamLimits

0xce27,	// (0x0003bdf1) lc0_uni_indicator_pane

0xf204,	// (0x0003e1ce) ls0_title_pane_g1_ParamLimits

0xf204,	// (0x0003e1ce) ls0_title_pane_g1

0xf218,	// (0x0003e1e2) ls0_title_pane_t1_ParamLimits

0xf218,	// (0x0003e1e2) ls0_title_pane_t1

0xce34,	// (0x0003bdfe) lc0_uni_indicator_pane_g1_ParamLimits

0xce34,	// (0x0003bdfe) lc0_uni_indicator_pane_g1

0x9efe,	// (0x00038ec8) lc0_stat_clock_pane_t1

0x022b,	// (0x0002f1f5) main_ai5_pane

0x9f0c,	// (0x00038ed6) ai5_sk_pane_ParamLimits

0x9f0c,	// (0x00038ed6) ai5_sk_pane

0xf246,	// (0x0003e210) cell_ai5_widget_pane_ParamLimits

0xf246,	// (0x0003e210) cell_ai5_widget_pane

0x9fe3,	// (0x00038fad) aid_size_cell_widget_grid

0x9ff9,	// (0x00038fc3) bg_ai5_widget_pane_ParamLimits

0x9ff9,	// (0x00038fc3) bg_ai5_widget_pane

0xa06d,	// (0x00039037) cell_ai5_widget_pane_g2

0xa07d,	// (0x00039047) cell_ai5_widget_pane_g3

0xa094,	// (0x0003905e) cell_ai5_widget_pane_g4

0xa0a0,	// (0x0003906a) cell_ai5_widget_pane_g5

0xa0ac,	// (0x00039076) cell_ai5_widget_pane_g6

0xa0b8,	// (0x00039082) cell_ai5_widget_pane_g7

0xa100,	// (0x000390ca) cell_ai5_widget_pane_t1_ParamLimits

0xa100,	// (0x000390ca) cell_ai5_widget_pane_t1

0xa11d,	// (0x000390e7) cell_ai5_widget_pane_t2_ParamLimits

0xa11d,	// (0x000390e7) cell_ai5_widget_pane_t2

0xa135,	// (0x000390ff) cell_ai5_widget_pane_t3_ParamLimits

0xa135,	// (0x000390ff) cell_ai5_widget_pane_t3

0xa14d,	// (0x00039117) cell_ai5_widget_pane_t4_ParamLimits

0xa14d,	// (0x00039117) cell_ai5_widget_pane_t4

0xa16a,	// (0x00039134) cell_ai5_widget_pane_t5_ParamLimits

0xa16a,	// (0x00039134) cell_ai5_widget_pane_t5

0xa189,	// (0x00039153) cell_ai5_widget_pane_t6_ParamLimits

0xa189,	// (0x00039153) cell_ai5_widget_pane_t6

0xa19b,	// (0x00039165) cell_ai5_widget_pane_t7_ParamLimits

0xa19b,	// (0x00039165) cell_ai5_widget_pane_t7

0xa1b4,	// (0x0003917e) cell_ai5_widget_pane_t8_ParamLimits

0xa1b4,	// (0x0003917e) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x0003ee20) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x0003ee20) cell_ai5_widget_pane_t

0xa208,	// (0x000391d2) grid_ai5_widget_pane

0x3f65,	// (0x00032f2f) highlight_cell_ai5_widget_pane_ParamLimits

0x3f65,	// (0x00032f2f) highlight_cell_ai5_widget_pane

0xf2b0,	// (0x0003e27a) ai5_sk_left_pane

0xf2ba,	// (0x0003e284) ai5_sk_middle_pane

0xf2c4,	// (0x0003e28e) ai5_sk_right_pane

0xa23e,	// (0x00039208) bg_ai5_widget_pane_g1_ParamLimits

0xa23e,	// (0x00039208) bg_ai5_widget_pane_g1

0xa24a,	// (0x00039214) bg_ai5_widget_pane_g2_ParamLimits

0xa24a,	// (0x00039214) bg_ai5_widget_pane_g2

0xa256,	// (0x00039220) bg_ai5_widget_pane_g3_ParamLimits

0xa256,	// (0x00039220) bg_ai5_widget_pane_g3

0xa262,	// (0x0003922c) bg_ai5_widget_pane_g4_ParamLimits

0xa262,	// (0x0003922c) bg_ai5_widget_pane_g4

0xa26e,	// (0x00039238) bg_ai5_widget_pane_g5_ParamLimits

0xa26e,	// (0x00039238) bg_ai5_widget_pane_g5

0xa27a,	// (0x00039244) bg_ai5_widget_pane_g6_ParamLimits

0xa27a,	// (0x00039244) bg_ai5_widget_pane_g6

0xa286,	// (0x00039250) bg_ai5_widget_pane_g7_ParamLimits

0xa286,	// (0x00039250) bg_ai5_widget_pane_g7

0xa292,	// (0x0003925c) bg_ai5_widget_pane_g8_ParamLimits

0xa292,	// (0x0003925c) bg_ai5_widget_pane_g8

0xa29e,	// (0x00039268) bg_ai5_widget_pane_g9_ParamLimits

0xa29e,	// (0x00039268) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x0003ee35) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x0003ee35) bg_ai5_widget_pane_g

0xa2d0,	// (0x0003929a) cell_shortcut_ai5_widget_pane_ParamLimits

0xa2d0,	// (0x0003929a) cell_shortcut_ai5_widget_pane

0x4bd1,	// (0x00033b9b) bg_cell_shortcut_ai5_widget_pane

0xa2e1,	// (0x000392ab) cell_grid_ai5_widget_pane_g1

0x4bd1,	// (0x00033b9b) highlight_cell_shortcut_ai5_widget_pane

0x5411,	// (0x000343db) ai5_sk_left_pane_g1

0xa2ea,	// (0x000392b4) ai5_sk_left_pane_g2

0xa2f2,	// (0x000392bc) ai5_sk_left_pane_g3

0xa2fa,	// (0x000392c4) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x0003ee48) ai5_sk_left_pane_g

0xa302,	// (0x000392cc) ai5_sk_left_pane_t1

0x5419,	// (0x000343e3) ai5_sk_right_pane_g1

0xa310,	// (0x000392da) ai5_sk_right_pane_g2

0xa318,	// (0x000392e2) ai5_sk_right_pane_g3

0xa320,	// (0x000392ea) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x0003ee51) ai5_sk_right_pane_g

0xa328,	// (0x000392f2) ai5_sk_right_pane_t1

0x5419,	// (0x000343e3) ai5_sk_middle_pane_g1

0x5411,	// (0x000343db) ai5_sk_middle_pane_g2

0x5431,	// (0x000343fb) ai5_sk_middle_pane_g3

0xa318,	// (0x000392e2) ai5_sk_middle_pane_g4

0xa2f2,	// (0x000392bc) ai5_sk_middle_pane_g5

0xa336,	// (0x00039300) ai5_sk_middle_pane_g6

0xf2ce,	// (0x0003e298) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x0003ee5a) ai5_sk_middle_pane_g

0xd77a,	// (0x0003c744) aid_touch_area_size_lc0_ParamLimits

0xd77a,	// (0x0003c744) aid_touch_area_size_lc0

0x2060,	// (0x0003102a) cell_hwr_candidate_pane_t1_ParamLimits

0x4f6d,	// (0x00033f37) aid_touch_navi_pane

0xda06,	// (0x0003c9d0) status_dt_navi_pane_ParamLimits

0xda06,	// (0x0003c9d0) status_dt_navi_pane

0xda1e,	// (0x0003c9e8) status_dt_sta_pane_ParamLimits

0xda1e,	// (0x0003c9e8) status_dt_sta_pane

0xf2d6,	// (0x0003e2a0) dt_sta_controll_pane

0xf2e3,	// (0x0003e2ad) dt_sta_indi_pane

0xf2f0,	// (0x0003e2ba) dt_sta_title_pane

0x3994,	// (0x0003295e) bg_dt_sta_indi_pane_ParamLimits

0x3994,	// (0x0003295e) bg_dt_sta_indi_pane

0xa377,	// (0x00039341) dt_sta_battery_pane

0xf302,	// (0x0003e2cc) dt_sta_indi_pane_g1

0xf30b,	// (0x0003e2d5) dt_sta_indi_pane_g2

0xf314,	// (0x0003e2de) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x0003ee69) dt_sta_indi_pane_g

0xf31d,	// (0x0003e2e7) dt_sta_signal_pane

0x3f65,	// (0x00032f2f) bg_dt_sta_title_pane_ParamLimits

0x3f65,	// (0x00032f2f) bg_dt_sta_title_pane

0xa3a3,	// (0x0003936d) dt_sta_title_pane_g1

0xf326,	// (0x0003e2f0) dt_sta_title_pane_t1_ParamLimits

0xf326,	// (0x0003e2f0) dt_sta_title_pane_t1

0x2da6,	// (0x00031d70) bg_dt_sta_control_pane

0xf33b,	// (0x0003e305) dt_sta_controll_pane_g1

0xa3c9,	// (0x00039393) bg_dt_sta_title_pane_g1

0xa3d2,	// (0x0003939c) bg_dt_sta_title_pane_g2

0xa3db,	// (0x000393a5) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x0003ee70) bg_dt_sta_title_pane_g

0x79c4,	// (0x0003698e) bg_dt_sta_indi_pane_g1

0xa3e4,	// (0x000393ae) dt_sta_signal_pane_g1

0xa3ec,	// (0x000393b6) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x0003ee77) dt_sta_signal_pane_g

0xa3f4,	// (0x000393be) dt_sta_battery_pane_g1

0xa3fd,	// (0x000393c7) dt_sta_battery_pane_t1

0x79c4,	// (0x0003698e) bg_dt_sta_control_pane_g1

0x46c7,	// (0x00033691) fep_china_uni_eep_pane

0x46cf,	// (0x00033699) fep_china_uni_entry_pane_ParamLimits

0x46df,	// (0x000336a9) popup_fep_china_uni_window_g1_ParamLimits

0x46ef,	// (0x000336b9) popup_fep_china_uni_window_g2_ParamLimits

0x46ef,	// (0x000336b9) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003e6e7) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003e6e7) popup_fep_china_uni_window_g

0xa40c,	// (0x000393d6) fep_china_uni_eep_pane_g1

0xa414,	// (0x000393de) fep_china_uni_eep_pane_t1

0x9e7b,	// (0x00038e45) aid_touch_area_size_smil_player

0x50b9,	// (0x00034083) lc0_clock_pane

0x5298,	// (0x00034262) status_pane_g5_ParamLimits

0x5298,	// (0x00034262) status_pane_g5

0xc124,	// (0x0003b0ee) popup_keymap_window

0x525e,	// (0x00034228) status_icon_pane

0xa07d,	// (0x00039047) cell_ai5_widget_pane_g3_ParamLimits

0xa094,	// (0x0003905e) cell_ai5_widget_pane_g4_ParamLimits

0xa0a0,	// (0x0003906a) cell_ai5_widget_pane_g5_ParamLimits

0xa0c4,	// (0x0003908e) cell_ai5_widget_pane_g8_ParamLimits

0xa0c4,	// (0x0003908e) cell_ai5_widget_pane_g8

0xa0d8,	// (0x000390a2) cell_ai5_widget_pane_g9_ParamLimits

0xa0d8,	// (0x000390a2) cell_ai5_widget_pane_g9

0xa0ec,	// (0x000390b6) cell_ai5_widget_pane_g10_ParamLimits

0xa0ec,	// (0x000390b6) cell_ai5_widget_pane_g10

0xa423,	// (0x000393ed) status_icon_pane_g1

0x2da6,	// (0x00031d70) bg_popup_sub_pane_cp13

0xa42b,	// (0x000393f5) popup_keymap_window_t1

0xd708,	// (0x0003c6d2) control_pane_g6_ParamLimits

0xd708,	// (0x0003c6d2) control_pane_g6

0xd715,	// (0x0003c6df) control_pane_g7_ParamLimits

0xd715,	// (0x0003c6df) control_pane_g7

0xd722,	// (0x0003c6ec) control_pane_g8_ParamLimits

0xd722,	// (0x0003c6ec) control_pane_g8

0xf2d6,	// (0x0003e2a0) dt_sta_controll_pane_ParamLimits

0xf2e3,	// (0x0003e2ad) dt_sta_indi_pane_ParamLimits

0xf2f0,	// (0x0003e2ba) dt_sta_title_pane_ParamLimits

0x3e9d,	// (0x00032e67) aid_size_touch_scroll_bar_cale

0x0304,	// (0x0002f2ce) popup_discreet_window_ParamLimits

0x0304,	// (0x0002f2ce) popup_discreet_window

0xb771,	// (0x0003a73b) popup_sk_window

0x5a8f,	// (0x00034a59) bg_popup_sub_pane_cp28_ParamLimits

0x5a8f,	// (0x00034a59) bg_popup_sub_pane_cp28

0xa439,	// (0x00039403) popup_discreet_window_g1_ParamLimits

0xa439,	// (0x00039403) popup_discreet_window_g1

0xa459,	// (0x00039423) popup_discreet_window_t1_ParamLimits

0xa459,	// (0x00039423) popup_discreet_window_t1

0xa477,	// (0x00039441) popup_discreet_window_t2_ParamLimits

0xa477,	// (0x00039441) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x0003ee7c) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x0003ee7c) popup_discreet_window_t

0x2a4f,	// (0x00031a19) popup_sk_window_g1

0x2a59,	// (0x00031a23) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x0003ee83) popup_sk_window_g

0x2a63,	// (0x00031a2d) popup_sk_window_t1

0x2a71,	// (0x00031a3b) popup_sk_window_t1_copy1

0xa06d,	// (0x00039037) cell_ai5_widget_pane_g2_ParamLimits

0xa1c6,	// (0x00039190) cell_ai5_widget_pane_t9_ParamLimits

0xa1c6,	// (0x00039190) cell_ai5_widget_pane_t9

0x2da6,	// (0x00031d70) main_fep_fshwr2_pane

0xce62,	// (0x0003be2c) aid_fshwr2_btn_pane

0xce73,	// (0x0003be3d) aid_fshwr2_syb_pane

0xce84,	// (0x0003be4e) aid_fshwr2_txt_pane

0xce90,	// (0x0003be5a) fshwr2_func_candi_pane

0xceaf,	// (0x0003be79) fshwr2_hwr_syb_pane

0xceca,	// (0x0003be94) fshwr2_icf_pane

0x022b,	// (0x0002f1f5) fshwr2_icf_bg_pane

0xcef3,	// (0x0003bebd) fshwr2_icf_pane_t1_ParamLimits

0xcef3,	// (0x0003bebd) fshwr2_icf_pane_t1

0x45b9,	// (0x00033583) fshwr2_func_candi_pane_g1

0xf344,	// (0x0003e30e) fshwr2_func_candi_row_pane_ParamLimits

0xf344,	// (0x0003e30e) fshwr2_func_candi_row_pane

0xcf0c,	// (0x0003bed6) cell_fshwr2_syb_pane_ParamLimits

0xcf0c,	// (0x0003bed6) cell_fshwr2_syb_pane

0x2031,	// (0x00030ffb) fshwr2_hwr_syb_pane_g1_ParamLimits

0x2031,	// (0x00030ffb) fshwr2_hwr_syb_pane_g1

0x022b,	// (0x0002f1f5) bg_popup_call_pane_cp01

0xcf22,	// (0x0003beec) fshwr2_func_candi_cell_pane_ParamLimits

0xcf22,	// (0x0003beec) fshwr2_func_candi_cell_pane

0xf354,	// (0x0003e31e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf354,	// (0x0003e31e) fshwr2_func_candi_cell_bg_pane

0xcf57,	// (0x0003bf21) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcf57,	// (0x0003bf21) fshwr2_func_candi_cell_pane_g1

0xcf86,	// (0x0003bf50) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf86,	// (0x0003bf50) fshwr2_func_candi_cell_pane_t1

0x022b,	// (0x0002f1f5) bg_button_pane_cp08

0x6dab,	// (0x00035d75) cell_fshwr2_syb_bg_pane

0xcf99,	// (0x0003bf63) cell_fshwr2_syb_bg_pane_g1

0xcfa1,	// (0x0003bf6b) cell_fshwr2_syb_bg_pane_t1

0x3f65,	// (0x00032f2f) main_tmo_pane

0xdd00,	// (0x0003ccca) uni_indicator_pane_g1_ParamLimits

0xdd16,	// (0x0003cce0) uni_indicator_pane_g2_ParamLimits

0xdd2c,	// (0x0003ccf6) uni_indicator_pane_g3_ParamLimits

0x65e5,	// (0x000355af) uni_indicator_pane_g4_ParamLimits

0x65e5,	// (0x000355af) uni_indicator_pane_g4

0x65f9,	// (0x000355c3) uni_indicator_pane_g5_ParamLimits

0x65f9,	// (0x000355c3) uni_indicator_pane_g5

0x65f9,	// (0x000355c3) uni_indicator_pane_g6_ParamLimits

0x65f9,	// (0x000355c3) uni_indicator_pane_g6

0xf91c,	// (0x0003e8e6) uni_indicator_pane_g_ParamLimits

0xe6cc,	// (0x0003d696) popup_tmo_note_window_ParamLimits

0xe6cc,	// (0x0003d696) popup_tmo_note_window

0x22ca,	// (0x00031294) fshwr2_bg_pane

0xcf77,	// (0x0003bf41) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcf77,	// (0x0003bf41) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x0003ee88) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x0003ee88) fshwr2_func_candi_cell_pane_g

0x2019,	// (0x00030fe3) bg_popup_window_pane_cp01

0x2b9e,	// (0x00031b68) bg_popup_window_pane_g1_cp01

0xa4d9,	// (0x000394a3) bg_popup_window_pane_cp22_ParamLimits

0xa4d9,	// (0x000394a3) bg_popup_window_pane_cp22

0xa4e7,	// (0x000394b1) listscroll_tmo_link_pane_ParamLimits

0xa4e7,	// (0x000394b1) listscroll_tmo_link_pane

0xa527,	// (0x000394f1) popup_tmo_note_window_g1_ParamLimits

0xa527,	// (0x000394f1) popup_tmo_note_window_g1

0xa534,	// (0x000394fe) tmo_note_info_pane_ParamLimits

0xa534,	// (0x000394fe) tmo_note_info_pane

0xf360,	// (0x0003e32a) list_tmo_note_info_pane_g1_ParamLimits

0xf360,	// (0x0003e32a) list_tmo_note_info_pane_g1

0xa565,	// (0x0003952f) list_tmo_note_info_pane_g2_ParamLimits

0xa565,	// (0x0003952f) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x0003ee8d) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x0003ee8d) list_tmo_note_info_pane_g

0xa581,	// (0x0003954b) list_tmo_note_info_text_pane_ParamLimits

0xa581,	// (0x0003954b) list_tmo_note_info_text_pane

0xa604,	// (0x000395ce) list_tmo_link_pane

0xa611,	// (0x000395db) scroll_pane_cp20

0xa61e,	// (0x000395e8) list_single_tmo_link_pane_ParamLimits

0xa61e,	// (0x000395e8) list_single_tmo_link_pane

0xa62e,	// (0x000395f8) list_single_tmo_link_pane_t1

0xa63c,	// (0x00039606) list_tmo_note_info_text_pane_t1_ParamLimits

0xa63c,	// (0x00039606) list_tmo_note_info_text_pane_t1

0xd35b,	// (0x0003c325) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd35b,	// (0x0003c325) aid_size_touch_scroll_bar_cp01

0xbc8a,	// (0x0003ac54) aid_size_touch_slider_marker

0xb761,	// (0x0003a72b) popup_settings_window_ParamLimits

0xb761,	// (0x0003a72b) popup_settings_window

0x128e,	// (0x00030258) popup_candi_list_indi_window

0x4f6d,	// (0x00033f37) aid_touch_navi_pane_ParamLimits

0x2225,	// (0x000311ef) rs_clock_indi_pane

0x222e,	// (0x000311f8) sctrl_sk_bottom_pane_ParamLimits

0x223f,	// (0x00031209) sctrl_sk_top_pane_ParamLimits

0x2342,	// (0x0003130c) popup_fep_tooltip_window

0x9fe3,	// (0x00038fad) aid_size_cell_widget_grid_ParamLimits

0xa058,	// (0x00039022) cell_ai5_widget_pane_g1_ParamLimits

0xa058,	// (0x00039022) cell_ai5_widget_pane_g1

0xa0ac,	// (0x00039076) cell_ai5_widget_pane_g6_ParamLimits

0xa0b8,	// (0x00039082) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x0003ee0b) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x0003ee0b) cell_ai5_widget_pane_g

0xa1ea,	// (0x000391b4) cell_ai5_widget_pane_t10_ParamLimits

0xa1ea,	// (0x000391b4) cell_ai5_widget_pane_t10

0xa208,	// (0x000391d2) grid_ai5_widget_pane_ParamLimits

0xa2aa,	// (0x00039274) cell_contacts_ai5_widget_pane_ParamLimits

0xa2aa,	// (0x00039274) cell_contacts_ai5_widget_pane

0xa48c,	// (0x00039456) popup_discreet_window_t3_ParamLimits

0xa48c,	// (0x00039456) popup_discreet_window_t3

0xcedf,	// (0x0003bea9) popup_fshwr2_char_preview_window_ParamLimits

0xcedf,	// (0x0003bea9) popup_fshwr2_char_preview_window

0xf377,	// (0x0003e341) tmo_note_info_pane_t1

0xf38c,	// (0x0003e356) tmo_note_info_pane_t2

0xf3a5,	// (0x0003e36f) tmo_note_info_pane_t3

0xa5e0,	// (0x000395aa) tmo_note_info_pane_t4

0xa5f2,	// (0x000395bc) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x0003ee92) tmo_note_info_pane_t

0xa604,	// (0x000395ce) list_tmo_link_pane_ParamLimits

0xa611,	// (0x000395db) scroll_pane_cp20_ParamLimits

0x022b,	// (0x0002f1f5) bg_popup_fep_char_preview_window_cp01

0xa655,	// (0x0003961f) popup_fshwr2_char_preview_window_t1

0xa663,	// (0x0003962d) popup_candi_list_indi_window_g1

0xa66c,	// (0x00039636) bg_cell_contacts_ai5_widget_pane

0xa678,	// (0x00039642) cell_contacts_ai5_widget_pane_g1

0xa68d,	// (0x00039657) cell_contacts_ai5_widget_pane_g2

0xa699,	// (0x00039663) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x0003ee9d) cell_contacts_ai5_widget_pane_g

0xa6a5,	// (0x0003966f) cell_contacts_ai5_widget_pane_t1

0x3f65,	// (0x00032f2f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf3ba,	// (0x0003e384) settings_container_pane

0x4bd1,	// (0x00033b9b) listscroll_set_pane_copy1

0x709a,	// (0x00036064) scroll_pane_cp121_copy1

0xa728,	// (0x000396f2) set_content_pane_copy1

0xf3c6,	// (0x0003e390) aid_height_set_list_copy1_ParamLimits

0xf3c6,	// (0x0003e390) aid_height_set_list_copy1

0x67ec,	// (0x000357b6) aid_size_parent_copy1_ParamLimits

0x67ec,	// (0x000357b6) aid_size_parent_copy1

0xf3d2,	// (0x0003e39c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3d2,	// (0x0003e39c) button_value_adjust_pane_cp6_copy1

0x4f0b,	// (0x00033ed5) list_highlight_pane_cp2_copy1_ParamLimits

0x4f0b,	// (0x00033ed5) list_highlight_pane_cp2_copy1

0xf3e6,	// (0x0003e3b0) list_set_pane_copy1_ParamLimits

0xf3e6,	// (0x0003e3b0) list_set_pane_copy1

0xa6b7,	// (0x00039681) main_pane_set_t1_copy1_ParamLimits

0xa6b7,	// (0x00039681) main_pane_set_t1_copy1

0xa6f1,	// (0x000396bb) main_pane_set_t2_copy1_ParamLimits

0xa6f1,	// (0x000396bb) main_pane_set_t2_copy1

0xa7fd,	// (0x000397c7) main_pane_set_t3_copy1

0xa80b,	// (0x000397d5) main_pane_set_t4_copy1

0xa710,	// (0x000396da) set_content_pane_g1_copy1_ParamLimits

0xa710,	// (0x000396da) set_content_pane_g1_copy1

0xf493,	// (0x0003e45d) setting_code_pane_copy1

0xa821,	// (0x000397eb) setting_slider_graphic_pane_copy1

0xa821,	// (0x000397eb) setting_slider_pane_copy1

0xa821,	// (0x000397eb) setting_text_pane_copy1

0xa821,	// (0x000397eb) setting_volume_pane_copy1

0xf493,	// (0x0003e45d) settings_code_pane_cp2_copy1

0xf49b,	// (0x0003e465) settings_code_pane_cp_copy1_ParamLimits

0xf49b,	// (0x0003e465) settings_code_pane_cp_copy1

0xcfb0,	// (0x0003bf7a) volume_set_pane_copy1

0xf4af,	// (0x0003e479) volume_set_pane_g10_copy1

0xf4b7,	// (0x0003e481) volume_set_pane_g1_copy1

0xf4bf,	// (0x0003e489) volume_set_pane_g2_copy1

0xf4c7,	// (0x0003e491) volume_set_pane_g3_copy1

0xf4cf,	// (0x0003e499) volume_set_pane_g4_copy1

0xf4d7,	// (0x0003e4a1) volume_set_pane_g5_copy1

0xf4df,	// (0x0003e4a9) volume_set_pane_g6_copy1

0xf4e7,	// (0x0003e4b1) volume_set_pane_g7_copy1

0xf4ef,	// (0x0003e4b9) volume_set_pane_g8_copy1

0xf4f7,	// (0x0003e4c1) volume_set_pane_g9_copy1

0x370b,	// (0x000326d5) bg_set_opt_pane_cp_copy1_ParamLimits

0x370b,	// (0x000326d5) bg_set_opt_pane_cp_copy1

0x2baf,	// (0x00031b79) setting_slider_pane_t1_copy1_ParamLimits

0x2baf,	// (0x00031b79) setting_slider_pane_t1_copy1

0xcfb8,	// (0x0003bf82) setting_slider_pane_t2_copy1_ParamLimits

0xcfb8,	// (0x0003bf82) setting_slider_pane_t2_copy1

0xcfd2,	// (0x0003bf9c) setting_slider_pane_t3_copy1_ParamLimits

0xcfd2,	// (0x0003bf9c) setting_slider_pane_t3_copy1

0xcfea,	// (0x0003bfb4) slider_set_pane_copy1_ParamLimits

0xcfea,	// (0x0003bfb4) slider_set_pane_copy1

0x3fc0,	// (0x00032f8a) set_opt_bg_pane_g1_copy2

0x3fc8,	// (0x00032f92) set_opt_bg_pane_g2_copy2

0xa88d,	// (0x00039857) set_opt_bg_pane_g3_copy2

0x3fd8,	// (0x00032fa2) set_opt_bg_pane_g4_copy2

0x3fe0,	// (0x00032faa) set_opt_bg_pane_g5_copy2

0x3fe8,	// (0x00032fb2) set_opt_bg_pane_g6_copy2

0xf4ff,	// (0x0003e4c9) set_opt_bg_pane_g7_copy2

0xa89f,	// (0x00039869) set_opt_bg_pane_g8_copy2

0xa8a9,	// (0x00039873) set_opt_bg_pane_g9_copy2

0x2c15,	// (0x00031bdf) aid_size_touch_slider_mark_copy1_ParamLimits

0x2c15,	// (0x00031bdf) aid_size_touch_slider_mark_copy1

0xa8b3,	// (0x0003987d) slider_set_pane_g1_copy1

0x2c29,	// (0x00031bf3) slider_set_pane_g2_copy1

0x1c36,	// (0x00030c00) slider_set_pane_g3_copy1_ParamLimits

0x1c36,	// (0x00030c00) slider_set_pane_g3_copy1

0x1c4a,	// (0x00030c14) slider_set_pane_g4_copy1_ParamLimits

0x1c4a,	// (0x00030c14) slider_set_pane_g4_copy1

0x1c62,	// (0x00030c2c) slider_set_pane_g5_copy1_ParamLimits

0x1c62,	// (0x00030c2c) slider_set_pane_g5_copy1

0x1c36,	// (0x00030c00) slider_set_pane_g6_copy1_ParamLimits

0x1c36,	// (0x00030c00) slider_set_pane_g6_copy1

0x2c31,	// (0x00031bfb) slider_set_pane_g7_copy1_ParamLimits

0x2c31,	// (0x00031bfb) slider_set_pane_g7_copy1

0x2dba,	// (0x00031d84) bg_set_opt_pane_cp2_copy1

0xa8bc,	// (0x00039886) setting_slider_graphic_pane_g1_copy1

0xf507,	// (0x0003e4d1) setting_slider_graphic_pane_t1_copy1

0xf517,	// (0x0003e4e1) setting_slider_graphic_pane_t2_copy1

0xf527,	// (0x0003e4f1) slider_set_pane_cp_copy1

0xa8f5,	// (0x000398bf) input_focus_pane_cp1_copy1

0xa8fe,	// (0x000398c8) list_set_text_pane_copy1

0xa906,	// (0x000398d0) setting_text_pane_g1_copy1

0x36ee,	// (0x000326b8) set_text_pane_t1_copy1

0xa8f5,	// (0x000398bf) input_focus_pane_cp2_copy1

0xa906,	// (0x000398d0) setting_code_pane_g1_copy1

0xf52f,	// (0x0003e4f9) setting_code_pane_t1_copy1

0x6ece,	// (0x00035e98) list_set_graphic_pane_copy1

0x2dba,	// (0x00031d84) bg_set_opt_pane_cp4_copy1

0xd581,	// (0x0003c54b) list_set_graphic_pane_g1_copy1_ParamLimits

0xd581,	// (0x0003c54b) list_set_graphic_pane_g1_copy1

0xf53d,	// (0x0003e507) list_set_graphic_pane_g2_copy1

0xd599,	// (0x0003c563) list_set_graphic_pane_t1_copy1_ParamLimits

0xd599,	// (0x0003c563) list_set_graphic_pane_t1_copy1

0x79c4,	// (0x0003698e) rs_clock_indi_pane_g1

0xa939,	// (0x00039903) rs_clock_indi_pane_t1

0xa947,	// (0x00039911) rs_indi_pane

0xa94f,	// (0x00039919) rs_indi_pane_g1

0xa958,	// (0x00039922) rs_indi_pane_g2

0xa961,	// (0x0003992b) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x0003eea4) rs_indi_pane_g

0x4bd1,	// (0x00033b9b) bg_popup_preview_window_pane_cp03

0xa96a,	// (0x00039934) popup_fep_tooltip_window_t1

0x8640,	// (0x0003760a) popup_note2_window_g2_ParamLimits

0x8640,	// (0x0003760a) popup_note2_window_g2

0x0001,

0xfc73,	// (0x0003ec3d) popup_note2_window_g_ParamLimits

0xfc73,	// (0x0003ec3d) popup_note2_window_g

0x8b3c,	// (0x00037b06) bg_popup_sub_pane_cp11_ParamLimits

0x8b49,	// (0x00037b13) cell_ai3_links_pane_g1_ParamLimits

0x8b60,	// (0x00037b2a) cell_ai3_links_pane_t1

0x36ee,	// (0x000326b8) set_text_pane_t1_copy1_ParamLimits

0x4aee,	// (0x00033ab8) cell_graphic_popup_pane_cp2_ParamLimits

0x4aee,	// (0x00033ab8) cell_graphic_popup_pane_cp2

0xa978,	// (0x00039942) cell_graphic_popup_pane_g1_cp2

0x3cb0,	// (0x00032c7a) cell_graphic_popup_pane_g2_cp2

0xa980,	// (0x0003994a) cell_graphic_popup_pane_g3_cp2

0xa988,	// (0x00039952) cell_graphic_popup_pane_t2_cp2

0x3cc1,	// (0x00032c8b) grid_highlight_pane_cp3_cp2

0x4300,	// (0x000332ca) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3f65,	// (0x00032f2f) main_tmo_pane_ParamLimits

0xe6c0,	// (0x0003d68a) popup_tmo_big_image_note_window

0xa047,	// (0x00039011) cell_ai5_widget_list_pane

0xa04f,	// (0x00039019) cell_ai5_widget_lrg_icon_pane

0xf377,	// (0x0003e341) tmo_note_info_pane_t1_ParamLimits

0xf38c,	// (0x0003e356) tmo_note_info_pane_t2_ParamLimits

0xf3a5,	// (0x0003e36f) tmo_note_info_pane_t3_ParamLimits

0xa5e0,	// (0x000395aa) tmo_note_info_pane_t4_ParamLimits

0xa5f2,	// (0x000395bc) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x0003ee92) tmo_note_info_pane_t_ParamLimits

0xf3ba,	// (0x0003e384) settings_container_pane_ParamLimits

0xa8ed,	// (0x000398b7) indicator_popup_pane_cp5

0xa8ed,	// (0x000398b7) indicator_popup_pane_cp6

0x6ece,	// (0x00035e98) list_set_graphic_pane_copy1_ParamLimits

0x2da6,	// (0x00031d70) bg_popup_window_pane_cp23

0xa996,	// (0x00039960) popup_tmo_big_image_note_window_g1

0xa99f,	// (0x00039969) popup_tmo_big_image_note_window_t1

0xa9af,	// (0x00039979) popup_tmo_big_image_note_window_t2

0xa9bf,	// (0x00039989) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x0003eeab) popup_tmo_big_image_note_window_t

0x79c4,	// (0x0003698e) cell_ai5_widget_lrg_icon_pane_g1

0xa9cf,	// (0x00039999) cell_ai5_widget_lrg_icon_pane_t1

0xa9dd,	// (0x000399a7) cell_ai5_widget_list_row_pane_ParamLimits

0xa9dd,	// (0x000399a7) cell_ai5_widget_list_row_pane

0xa9f4,	// (0x000399be) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa9f4,	// (0x000399be) cell_ai5_widget_list_row_pane_g1

0xaa01,	// (0x000399cb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaa01,	// (0x000399cb) cell_ai5_widget_list_row_pane_t1

0xaa2f,	// (0x000399f9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa2f,	// (0x000399f9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee8,	// (0x0003eeb2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x0003eeb2) cell_ai5_widget_list_row_pane_t

0x022b,	// (0x0002f1f5) main_fep_vtchi_ss_pane

0xaa73,	// (0x00039a3d) popup_fep_char_pre_window

0xaa7b,	// (0x00039a45) popup_fep_ituss_window

0xaa9c,	// (0x00039a66) popup_fep_vkbss_window

0xaabb,	// (0x00039a85) grid_vkbss_keypad_pane_ParamLimits

0xaabb,	// (0x00039a85) grid_vkbss_keypad_pane

0xaacb,	// (0x00039a95) ituss_keypad_pane

0x2c53,	// (0x00031c1d) aid_vkbss_key_offset_ParamLimits

0x2c53,	// (0x00031c1d) aid_vkbss_key_offset

0x2c5f,	// (0x00031c29) cell_vkbss_key_pane_ParamLimits

0x2c5f,	// (0x00031c29) cell_vkbss_key_pane

0x5272,	// (0x0003423c) bg_cell_vkbss_key_g1_ParamLimits

0x5272,	// (0x0003423c) bg_cell_vkbss_key_g1

0xaada,	// (0x00039aa4) cell_vkbss_key_3p_pane_ParamLimits

0xaada,	// (0x00039aa4) cell_vkbss_key_3p_pane

0xaaf4,	// (0x00039abe) cell_vkbss_key_g1_ParamLimits

0xaaf4,	// (0x00039abe) cell_vkbss_key_g1

0xab0e,	// (0x00039ad8) cell_vkbss_key_t1_ParamLimits

0xab0e,	// (0x00039ad8) cell_vkbss_key_t1

0x2c75,	// (0x00031c3f) cell_ituss_key_pane_ParamLimits

0x2c75,	// (0x00031c3f) cell_ituss_key_pane

0xab39,	// (0x00039b03) bg_cell_ituss_key_g1_ParamLimits

0xab39,	// (0x00039b03) bg_cell_ituss_key_g1

0xab45,	// (0x00039b0f) cell_ituss_key_pane_g1_ParamLimits

0xab45,	// (0x00039b0f) cell_ituss_key_pane_g1

0x2c86,	// (0x00031c50) cell_ituss_key_pane_g2_ParamLimits

0x2c86,	// (0x00031c50) cell_ituss_key_pane_g2

0x0002,

0xfeef,	// (0x0003eeb9) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x0003eeb9) cell_ituss_key_pane_g

0x2cb2,	// (0x00031c7c) cell_ituss_key_t1_ParamLimits

0x2cb2,	// (0x00031c7c) cell_ituss_key_t1

0x2cec,	// (0x00031cb6) cell_ituss_key_t2_ParamLimits

0x2cec,	// (0x00031cb6) cell_ituss_key_t2

0x2d1d,	// (0x00031ce7) cell_ituss_key_t3_ParamLimits

0x2d1d,	// (0x00031ce7) cell_ituss_key_t3

0x2cec,	// (0x00031cb6) cell_ituss_key_t4_ParamLimits

0x2cec,	// (0x00031cb6) cell_ituss_key_t4

0x0004,

0xfef6,	// (0x0003eec0) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x0003eec0) cell_ituss_key_t

0xab6b,	// (0x00039b35) cell_vkbss_key_3p_pane_g1

0xab73,	// (0x00039b3d) cell_vkbss_key_3p_pane_g2

0xab7b,	// (0x00039b45) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x0003eecb) cell_vkbss_key_3p_pane_g

0x022b,	// (0x0002f1f5) bg_popup_fep_char_preview_window_cp02

0x2d60,	// (0x00031d2a) popup_fep_char_pre_window_t1

0xf2a6,	// (0x0003e270) main_ai5_sk_pane

0xa66c,	// (0x00039636) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa678,	// (0x00039642) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa68d,	// (0x00039657) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa699,	// (0x00039663) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x0003ee9d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa6a5,	// (0x0003966f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3f65,	// (0x00032f2f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0003e50f) main_ai5_sk_pane_g1

0x58cd,	// (0x00034897) popup_query_code_window_g1

0xaa91,	// (0x00039a5b) popup_fep_vkb_icf_pane

0xaaa5,	// (0x00039a6f) popup_fep_vtchi_icf_pane

0xab8c,	// (0x00039b56) bg_icf_pane

0xab98,	// (0x00039b62) list_vkb_icf_pane

0xaba4,	// (0x00039b6e) bg_icf_pane_cp01

0xabb7,	// (0x00039b81) vtchi_icf_list_pane

0xabc7,	// (0x00039b91) list_vkb_icf_pane_t1_ParamLimits

0xabc7,	// (0x00039b91) list_vkb_icf_pane_t1

0xabdf,	// (0x00039ba9) vtchi_icf_list_pane_t1_ParamLimits

0xabdf,	// (0x00039ba9) vtchi_icf_list_pane_t1

0xaa7b,	// (0x00039a45) popup_fep_ituss_window_ParamLimits

0xaaa5,	// (0x00039a6f) popup_fep_vtchi_icf_pane_ParamLimits

0xaacb,	// (0x00039a95) ituss_keypad_pane_ParamLimits

0x2c47,	// (0x00031c11) ituss_sks_pane

0xab8c,	// (0x00039b56) bg_icf_pane_ParamLimits

0xaa57,	// (0x00039a21) icf_edit_indi_pane_ParamLimits

0xaa57,	// (0x00039a21) icf_edit_indi_pane

0xab98,	// (0x00039b62) list_vkb_icf_pane_ParamLimits

0xaba4,	// (0x00039b6e) bg_icf_pane_cp01_ParamLimits

0xaa66,	// (0x00039a30) icf_edit_indi_pane_cp01_ParamLimits

0xaa66,	// (0x00039a30) icf_edit_indi_pane_cp01

0xabbf,	// (0x00039b89) vtchi_query_pane

0x7c32,	// (0x00036bfc) icf_edit_indi_pane_g1_ParamLimits

0x7c32,	// (0x00036bfc) icf_edit_indi_pane_g1

0xac58,	// (0x00039c22) icf_edit_indi_pane_g2_ParamLimits

0xac58,	// (0x00039c22) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x0003eee3) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x0003eee3) icf_edit_indi_pane_g

0xac67,	// (0x00039c31) icf_edit_indi_pane_t1

0xac01,	// (0x00039bcb) bg_input_focus_pane_cp042

0x3e94,	// (0x00032e5e) vtchi_button_pane

0xac0a,	// (0x00039bd4) vtchi_query_pane_t1

0xac18,	// (0x00039be2) vtchi_query_pane_t2

0xac26,	// (0x00039bf0) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x0003eed2) vtchi_query_pane_t

0x022b,	// (0x0002f1f5) bg_button_pane_cp13

0xac34,	// (0x00039bfe) vtchi_button_pane_g1

0x2d6f,	// (0x00031d39) ituss_sks_pane_g1

0x2d7a,	// (0x00031d44) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0003eed9) ituss_sks_pane_g

0xac3c,	// (0x00039c06) ituss_sks_pane_t1

0xac4a,	// (0x00039c14) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x0003eede) ituss_sks_pane_t

0x740e,	// (0x000363d8) indicator_nsta_pane_cp_g1

0x7417,	// (0x000363e1) indicator_nsta_pane_cp_g2

0x741f,	// (0x000363e9) indicator_nsta_pane_cp_g3

0x7427,	// (0x000363f1) indicator_nsta_pane_cp_g4

0x742f,	// (0x000363f9) indicator_nsta_pane_cp_g5

0x742f,	// (0x000363f9) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x0003ea7b) indicator_nsta_pane_cp_g

0xf0bb,	// (0x0003e085) cell_graphic2_pane_t2_ParamLimits

0xf0bb,	// (0x0003e085) cell_graphic2_pane_t2

0x0001,

0xfdca,	// (0x0003ed94) cell_graphic2_pane_t_ParamLimits

0xfdca,	// (0x0003ed94) cell_graphic2_pane_t

0xf0ee,	// (0x0003e0b8) cell_graphic2_control_pane_t1

0xd51b,	// (0x0003c4e5) signal_pane_g3_ParamLimits

0xd51b,	// (0x0003c4e5) signal_pane_g3

0xd52f,	// (0x0003c4f9) signal_pane_g4_ParamLimits

0xd52f,	// (0x0003c4f9) signal_pane_g4

0xaa41,	// (0x00039a0b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaa41,	// (0x00039a0b) cell_ai5_widget_list_row_pane_t3

0xab59,	// (0x00039b23) cell_ituss_key_pane_t1_ParamLimits

0xab59,	// (0x00039b23) cell_ituss_key_pane_t1

0x550b,	// (0x000344d5) form_field_data_wide_pane_vc_t2_ParamLimits

0x550b,	// (0x000344d5) form_field_data_wide_pane_vc_t2

0x551f,	// (0x000344e9) form_field_data_wide_pane_vc_t3_ParamLimits

0x551f,	// (0x000344e9) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0003e7ce) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0003e7ce) form_field_data_wide_pane_vc_t

0x70da,	// (0x000360a4) form_field_slider_wide_pane_vc_t3_ParamLimits

0x70da,	// (0x000360a4) form_field_slider_wide_pane_vc_t3

0x71b4,	// (0x0003617e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x71b4,	// (0x0003617e) form_field_popup_wide_pane_vc_t2

0x71cb,	// (0x00036195) form_field_popup_wide_pane_vc_t3_ParamLimits

0x71cb,	// (0x00036195) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x0003ea6a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x0003ea6a) form_field_popup_wide_pane_vc_t

0xce62,	// (0x0003be2c) aid_fshwr2_btn_pane_ParamLimits

0xce73,	// (0x0003be3d) aid_fshwr2_syb_pane_ParamLimits

0xce84,	// (0x0003be4e) aid_fshwr2_txt_pane_ParamLimits

0x22ca,	// (0x00031294) fshwr2_bg_pane_ParamLimits

0xce90,	// (0x0003be5a) fshwr2_func_candi_pane_ParamLimits

0xceaf,	// (0x0003be79) fshwr2_hwr_syb_pane_ParamLimits

0xceca,	// (0x0003be94) fshwr2_icf_pane_ParamLimits

0x32c9,	// (0x00032293) list_double_graphic_pane_vc_g4_ParamLimits

0x32c9,	// (0x00032293) list_double_graphic_pane_vc_g4

0x2ca6,	// (0x00031c70) cell_ituss_key_pane_g3_ParamLimits

0x2ca6,	// (0x00031c70) cell_ituss_key_pane_g3

0x2d4e,	// (0x00031d18) cell_ituss_key_t5_ParamLimits

0x2d4e,	// (0x00031d18) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small

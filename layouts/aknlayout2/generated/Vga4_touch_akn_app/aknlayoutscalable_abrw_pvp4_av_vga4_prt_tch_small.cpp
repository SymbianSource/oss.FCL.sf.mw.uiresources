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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002f9c9 };

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
0x54b9,	// (0x00034e82) Screen

0x54c5,	// (0x00034e8e) application_window_ParamLimits

0x54c5,	// (0x00034e8e) application_window

0x21b2,	// (0x00031b7b) screen_g1

0x5521,	// (0x00034eea) area_bottom_pane_ParamLimits

0x5521,	// (0x00034eea) area_bottom_pane

0x55e1,	// (0x00034faa) area_top_pane_ParamLimits

0x55e1,	// (0x00034faa) area_top_pane

0x567f,	// (0x00035048) main_pane_ParamLimits

0x567f,	// (0x00035048) main_pane

0x21bc,	// (0x00031b85) misc_graphics

0x94ee,	// (0x00038eb7) battery_pane_ParamLimits

0x94ee,	// (0x00038eb7) battery_pane

0xa1b6,	// (0x00039b7f) bg_status_flat_pane_g8

0xa1be,	// (0x00039b87) bg_status_flat_pane_g9

0x95b6,	// (0x00038f7f) context_pane_ParamLimits

0x95b6,	// (0x00038f7f) context_pane

0x96da,	// (0x000390a3) navi_pane_ParamLimits

0x96da,	// (0x000390a3) navi_pane

0x976a,	// (0x00039133) signal_pane_ParamLimits

0x976a,	// (0x00039133) signal_pane

0x0008,

0xf854,	// (0x0003f21d) bg_status_flat_pane_g

0x97d7,	// (0x000391a0) status_pane_g1_ParamLimits

0x97d7,	// (0x000391a0) status_pane_g1

0x97e3,	// (0x000391ac) status_pane_g2_ParamLimits

0x97e3,	// (0x000391ac) status_pane_g2

0x97ef,	// (0x000391b8) status_pane_g3_ParamLimits

0x97ef,	// (0x000391b8) status_pane_g3

0x0004,

0xf77b,	// (0x0003f144) status_pane_g_ParamLimits

0xf77b,	// (0x0003f144) status_pane_g

0x9823,	// (0x000391ec) title_pane_ParamLimits

0x9823,	// (0x000391ec) title_pane

0x9862,	// (0x0003922b) uni_indicator_pane_ParamLimits

0x9862,	// (0x0003922b) uni_indicator_pane

0x9420,	// (0x00038de9) bg_list_pane_ParamLimits

0x9420,	// (0x00038de9) bg_list_pane

0x6ef1,	// (0x000368ba) find_pane

0x9440,	// (0x00038e09) listscroll_app_pane_ParamLimits

0x9440,	// (0x00038e09) listscroll_app_pane

0x944c,	// (0x00038e15) listscroll_form_pane

0x5439,	// (0x00034e02) listscroll_gen_pane_ParamLimits

0x5439,	// (0x00034e02) listscroll_gen_pane

0x6ef9,	// (0x000368c2) listscroll_set_pane

0x62e6,	// (0x00035caf) main_idle_act_pane

0x9119,	// (0x00038ae2) main_idle_trad_pane

0x9119,	// (0x00038ae2) main_list_empty_pane

0x9440,	// (0x00038e09) main_midp_pane

0x9466,	// (0x00038e2f) main_pane_g1_ParamLimits

0x9466,	// (0x00038e2f) main_pane_g1

0x6f0f,	// (0x000368d8) popup_ai_message_window_ParamLimits

0x6f0f,	// (0x000368d8) popup_ai_message_window

0x6fc3,	// (0x0003698c) popup_fep_china_uni_window_ParamLimits

0x6fc3,	// (0x0003698c) popup_fep_china_uni_window

0x7023,	// (0x000369ec) popup_fep_japan_candidate_window_ParamLimits

0x7023,	// (0x000369ec) popup_fep_japan_candidate_window

0x704d,	// (0x00036a16) popup_fep_japan_predictive_window_ParamLimits

0x704d,	// (0x00036a16) popup_fep_japan_predictive_window

0x7083,	// (0x00036a4c) popup_find_window

0x7090,	// (0x00036a59) popup_grid_graphic_window_ParamLimits

0x7090,	// (0x00036a59) popup_grid_graphic_window

0x70c0,	// (0x00036a89) popup_large_graphic_colour_window

0x70e6,	// (0x00036aaf) popup_menu_window_ParamLimits

0x70e6,	// (0x00036aaf) popup_menu_window

0x72b0,	// (0x00036c79) popup_note_image_window

0x729a,	// (0x00036c63) popup_note_wait_window_ParamLimits

0x729a,	// (0x00036c63) popup_note_wait_window

0x729a,	// (0x00036c63) popup_note_window_ParamLimits

0x729a,	// (0x00036c63) popup_note_window

0x7316,	// (0x00036cdf) popup_query_code_window_ParamLimits

0x7316,	// (0x00036cdf) popup_query_code_window

0x732c,	// (0x00036cf5) popup_query_data_code_window_ParamLimits

0x732c,	// (0x00036cf5) popup_query_data_code_window

0x734f,	// (0x00036d18) popup_query_data_window_ParamLimits

0x734f,	// (0x00036d18) popup_query_data_window

0x7371,	// (0x00036d3a) popup_query_sat_info_window_ParamLimits

0x7371,	// (0x00036d3a) popup_query_sat_info_window

0x73b0,	// (0x00036d79) popup_snote_single_graphic_window_ParamLimits

0x73b0,	// (0x00036d79) popup_snote_single_graphic_window

0x73b0,	// (0x00036d79) popup_snote_single_text_window_ParamLimits

0x73b0,	// (0x00036d79) popup_snote_single_text_window

0x73c7,	// (0x00036d90) popup_sub_window_general

0x750d,	// (0x00036ed6) popup_window_general_ParamLimits

0x750d,	// (0x00036ed6) popup_window_general

0x9474,	// (0x00038e3d) power_save_pane

0x6da0,	// (0x00036769) control_pane_g1_ParamLimits

0x6da0,	// (0x00036769) control_pane_g1

0x6dc3,	// (0x0003678c) control_pane_g2_ParamLimits

0x6dc3,	// (0x0003678c) control_pane_g2

0x93e3,	// (0x00038dac) control_pane_g3_ParamLimits

0x93e3,	// (0x00038dac) control_pane_g3

0x0007,

0xf763,	// (0x0003f12c) control_pane_g_ParamLimits

0xf763,	// (0x0003f12c) control_pane_g

0x6e08,	// (0x000367d1) control_pane_t1_ParamLimits

0x6e08,	// (0x000367d1) control_pane_t1

0x6e50,	// (0x00036819) control_pane_t2_ParamLimits

0x6e50,	// (0x00036819) control_pane_t2

0x0002,

0xf774,	// (0x0003f13d) control_pane_t_ParamLimits

0xf774,	// (0x0003f13d) control_pane_t

0x9308,	// (0x00038cd1) navi_navi_volume_pane_cp1

0x9310,	// (0x00038cd9) status_small_icon_pane

0x9318,	// (0x00038ce1) status_small_pane_g1_ParamLimits

0x9318,	// (0x00038ce1) status_small_pane_g1

0x934c,	// (0x00038d15) status_small_pane_g2_ParamLimits

0x934c,	// (0x00038d15) status_small_pane_g2

0x9358,	// (0x00038d21) status_small_pane_g3_ParamLimits

0x9358,	// (0x00038d21) status_small_pane_g3

0x9364,	// (0x00038d2d) status_small_pane_g4_ParamLimits

0x9364,	// (0x00038d2d) status_small_pane_g4

0x9370,	// (0x00038d39) status_small_pane_g5_ParamLimits

0x9370,	// (0x00038d39) status_small_pane_g5

0x937e,	// (0x00038d47) status_small_pane_g6_ParamLimits

0x937e,	// (0x00038d47) status_small_pane_g6

0x0007,

0xf752,	// (0x0003f11b) status_small_pane_g_ParamLimits

0xf752,	// (0x0003f11b) status_small_pane_g

0x93ad,	// (0x00038d76) status_small_pane_t1

0x93cf,	// (0x00038d98) status_small_wait_pane_ParamLimits

0x93cf,	// (0x00038d98) status_small_wait_pane

0x68b4,	// (0x0003627d) aid_levels_signal_ParamLimits

0x68b4,	// (0x0003627d) aid_levels_signal

0x68c3,	// (0x0003628c) signal_pane_g1_ParamLimits

0x68c3,	// (0x0003628c) signal_pane_g1

0x68d8,	// (0x000362a1) signal_pane_g2_ParamLimits

0x68d8,	// (0x000362a1) signal_pane_g2

0x0003,

0xf6e3,	// (0x0003f0ac) signal_pane_g_ParamLimits

0xf6e3,	// (0x0003f0ac) signal_pane_g

0x6909,	// (0x000362d2) context_pane_g1

0x58de,	// (0x000352a7) title_pane_g1

0x5910,	// (0x000352d9) title_pane_t1

0x21d2,	// (0x00031b9b) title_pane_t2

0x21f8,	// (0x00031bc1) title_pane_t3

0x0002,

0xf532,	// (0x0003eefb) title_pane_t

0x987a,	// (0x00039243) aid_levels_battery_ParamLimits

0x987a,	// (0x00039243) aid_levels_battery

0x988b,	// (0x00039254) battery_pane_g1_ParamLimits

0x988b,	// (0x00039254) battery_pane_g1

0x98a1,	// (0x0003926a) battery_pane_g2_ParamLimits

0x98a1,	// (0x0003926a) battery_pane_g2

0x0001,

0xf786,	// (0x0003f14f) battery_pane_g_ParamLimits

0xf786,	// (0x0003f14f) battery_pane_g

0xab00,	// (0x0003a4c9) uni_indicator_pane_g1

0xab16,	// (0x0003a4df) uni_indicator_pane_g2

0xab2c,	// (0x0003a4f5) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0003f2c5) uni_indicator_pane_g

0x8f7c,	// (0x00038945) navi_icon_pane_ParamLimits

0x8f7c,	// (0x00038945) navi_icon_pane

0x8ec3,	// (0x0003888c) navi_midp_pane

0x8f98,	// (0x00038961) navi_navi_pane

0x8fa2,	// (0x0003896b) navi_text_pane_ParamLimits

0x8fa2,	// (0x0003896b) navi_text_pane

0x21b2,	// (0x00031b7b) status_small_wait_pane_g1

0x2519,	// (0x00031ee2) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0003f2c0) status_small_wait_pane_g

0xa813,	// (0x0003a1dc) navi_navi_icon_text_pane

0xa81b,	// (0x0003a1e4) navi_navi_pane_g1_ParamLimits

0xa81b,	// (0x0003a1e4) navi_navi_pane_g1

0xa82d,	// (0x0003a1f6) navi_navi_pane_g2_ParamLimits

0xa82d,	// (0x0003a1f6) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0003f28e) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0003f28e) navi_navi_pane_g

0xa83f,	// (0x0003a208) navi_navi_tabs_pane

0xa848,	// (0x0003a211) navi_navi_text_pane

0xa813,	// (0x0003a1dc) navi_navi_volume_pane

0xa7ef,	// (0x0003a1b8) navi_text_pane_t1

0xa7e3,	// (0x0003a1ac) navi_icon_pane_g1

0xa736,	// (0x0003a0ff) navi_navi_text_pane_t1

0x77ea,	// (0x000371b3) navi_navi_volume_pane_g1

0x77f2,	// (0x000371bb) volume_small_pane

0xa69c,	// (0x0003a065) navi_navi_icon_text_pane_g1

0xa6a4,	// (0x0003a06d) navi_navi_icon_text_pane_t1

0x8f98,	// (0x00038961) navi_tabs_2_long_pane

0x8f98,	// (0x00038961) navi_tabs_2_pane

0x8f98,	// (0x00038961) navi_tabs_3_long_pane

0x8f98,	// (0x00038961) navi_tabs_3_pane

0x8f98,	// (0x00038961) navi_tabs_4_pane

0x77ca,	// (0x00037193) tabs_2_active_pane_ParamLimits

0x77ca,	// (0x00037193) tabs_2_active_pane

0x77da,	// (0x000371a3) tabs_2_passive_pane_ParamLimits

0x77da,	// (0x000371a3) tabs_2_passive_pane

0x7798,	// (0x00037161) tabs_3_active_pane_ParamLimits

0x7798,	// (0x00037161) tabs_3_active_pane

0x77a8,	// (0x00037171) tabs_3_passive_pane_ParamLimits

0x77a8,	// (0x00037171) tabs_3_passive_pane

0x77b9,	// (0x00037182) tabs_3_passive_pane_cp_ParamLimits

0x77b9,	// (0x00037182) tabs_3_passive_pane_cp

0x774c,	// (0x00037115) tabs_4_active_pane_ParamLimits

0x774c,	// (0x00037115) tabs_4_active_pane

0x775f,	// (0x00037128) tabs_4_passive_pane_ParamLimits

0x775f,	// (0x00037128) tabs_4_passive_pane

0x7770,	// (0x00037139) tabs_4_passive_pane_cp_ParamLimits

0x7770,	// (0x00037139) tabs_4_passive_pane_cp

0x7781,	// (0x0003714a) tabs_4_passive_pane_cp2_ParamLimits

0x7781,	// (0x0003714a) tabs_4_passive_pane_cp2

0x7728,	// (0x000370f1) tabs_2_long_active_pane_ParamLimits

0x7728,	// (0x000370f1) tabs_2_long_active_pane

0x773a,	// (0x00037103) tabs_2_long_passive_pane_ParamLimits

0x773a,	// (0x00037103) tabs_2_long_passive_pane

0x76e9,	// (0x000370b2) tabs_3_long_active_pane_ParamLimits

0x76e9,	// (0x000370b2) tabs_3_long_active_pane

0x76fc,	// (0x000370c5) tabs_3_long_passive_pane_ParamLimits

0x76fc,	// (0x000370c5) tabs_3_long_passive_pane

0x7715,	// (0x000370de) tabs_3_long_passive_pane_cp_ParamLimits

0x7715,	// (0x000370de) tabs_3_long_passive_pane_cp

0x768f,	// (0x00037058) volume_small_pane_g1

0x7698,	// (0x00037061) volume_small_pane_g2

0x76a1,	// (0x0003706a) volume_small_pane_g3

0x76aa,	// (0x00037073) volume_small_pane_g4

0x76b3,	// (0x0003707c) volume_small_pane_g5

0x76bc,	// (0x00037085) volume_small_pane_g6

0x76c5,	// (0x0003708e) volume_small_pane_g7

0x76ce,	// (0x00037097) volume_small_pane_g8

0x76d7,	// (0x000370a0) volume_small_pane_g9

0x76e0,	// (0x000370a9) volume_small_pane_g10

0x0009,

0xf891,	// (0x0003f25a) volume_small_pane_g

0x2218,	// (0x00031be1) bg_active_tab_pane_cp2_ParamLimits

0x2218,	// (0x00031be1) bg_active_tab_pane_cp2

0x5978,	// (0x00035341) tabs_3_active_pane_g1

0x5980,	// (0x00035349) tabs_3_active_pane_t1

0x2218,	// (0x00031be1) bg_passive_tab_pane_cp2_ParamLimits

0x2218,	// (0x00031be1) bg_passive_tab_pane_cp2

0x5978,	// (0x00035341) tabs_3_passive_pane_g1

0x5980,	// (0x00035349) tabs_3_passive_pane_t1

0x2218,	// (0x00031be1) bg_active_tab_pane_cp3_ParamLimits

0x2218,	// (0x00031be1) bg_active_tab_pane_cp3

0x5992,	// (0x0003535b) tabs_4_active_pane_g1

0x599a,	// (0x00035363) tabs_4_active_pane_t1

0x2218,	// (0x00031be1) bg_passive_tab_pane_cp3_ParamLimits

0x2218,	// (0x00031be1) bg_passive_tab_pane_cp3

0x5992,	// (0x0003535b) tabs_4_1_passive_pane_g1

0x599a,	// (0x00035363) tabs_4_1_passive_pane_t1

0x9440,	// (0x00038e09) list_highlight_pane_cp2

0xad79,	// (0x0003a742) list_set_pane_ParamLimits

0xad79,	// (0x0003a742) list_set_pane

0xae3b,	// (0x0003a804) main_pane_set_t1_ParamLimits

0xae3b,	// (0x0003a804) main_pane_set_t1

0xae5b,	// (0x0003a824) main_pane_set_t2_ParamLimits

0xae5b,	// (0x0003a824) main_pane_set_t2

0xae6f,	// (0x0003a838) main_pane_set_t3_ParamLimits

0xae6f,	// (0x0003a838) main_pane_set_t3

0xae83,	// (0x0003a84c) main_pane_set_t4_ParamLimits

0xae83,	// (0x0003a84c) main_pane_set_t4

0x0003,

0xf961,	// (0x0003f32a) main_pane_set_t_ParamLimits

0xf961,	// (0x0003f32a) main_pane_set_t

0xae97,	// (0x0003a860) setting_code_pane

0xaea1,	// (0x0003a86a) setting_slider_graphic_pane

0xaea1,	// (0x0003a86a) setting_slider_pane

0xaea1,	// (0x0003a86a) setting_text_pane

0xaea1,	// (0x0003a86a) setting_volume_pane

0x59ac,	// (0x00035375) volume_set_pane

0x2218,	// (0x00031be1) bg_set_opt_pane_cp

0x59b6,	// (0x0003537f) setting_slider_pane_t1

0x59cf,	// (0x00035398) setting_slider_pane_t2

0x59e9,	// (0x000353b2) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0003ef02) setting_slider_pane_t

0x5a01,	// (0x000353ca) slider_set_pane

0x21bc,	// (0x00031b85) bg_set_opt_pane_cp2

0x2226,	// (0x00031bef) setting_slider_graphic_pane_g1

0x5a17,	// (0x000353e0) setting_slider_graphic_pane_t1

0x5a27,	// (0x000353f0) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0003ef09) setting_slider_graphic_pane_t

0x5a37,	// (0x00035400) slider_set_pane_cp

0x21bc,	// (0x00031b85) input_focus_pane_cp1

0xad3a,	// (0x0003a703) list_set_text_pane

0x21b2,	// (0x00031b7b) setting_text_pane_g1

0x21bc,	// (0x00031b85) input_focus_pane_cp2

0x21b2,	// (0x00031b7b) setting_code_pane_g1

0x222f,	// (0x00031bf8) setting_code_pane_t1

0x3fa1,	// (0x0003396a) set_text_pane_t1_ParamLimits

0x3fa1,	// (0x0003396a) set_text_pane_t1

0x28b2,	// (0x0003227b) set_opt_bg_pane_g1

0x28ba,	// (0x00032283) set_opt_bg_pane_g2

0xad12,	// (0x0003a6db) set_opt_bg_pane_g3

0x28ca,	// (0x00032293) set_opt_bg_pane_g4

0x28d2,	// (0x0003229b) set_opt_bg_pane_g5

0x28da,	// (0x000322a3) set_opt_bg_pane_g6

0xad1c,	// (0x0003a6e5) set_opt_bg_pane_g7

0xad26,	// (0x0003a6ef) set_opt_bg_pane_g8

0xad30,	// (0x0003a6f9) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0003f317) set_opt_bg_pane_g

0xad05,	// (0x0003a6ce) slider_set_pane_g1

0x789b,	// (0x00037264) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0003f308) slider_set_pane_g

0x77fb,	// (0x000371c4) volume_set_pane_g1

0x7805,	// (0x000371ce) volume_set_pane_g2

0x780f,	// (0x000371d8) volume_set_pane_g3

0x7819,	// (0x000371e2) volume_set_pane_g4

0x7823,	// (0x000371ec) volume_set_pane_g5

0x782d,	// (0x000371f6) volume_set_pane_g6

0x7837,	// (0x00037200) volume_set_pane_g7

0x7841,	// (0x0003720a) volume_set_pane_g8

0x784b,	// (0x00037214) volume_set_pane_g9

0x7855,	// (0x0003721e) volume_set_pane_g10

0x0009,

0xf917,	// (0x0003f2e0) volume_set_pane_g

0x5a3f,	// (0x00035408) indicator_pane_ParamLimits

0x5a3f,	// (0x00035408) indicator_pane

0x5a4b,	// (0x00035414) main_idle_pane_g2_ParamLimits

0x5a4b,	// (0x00035414) main_idle_pane_g2

0x5a73,	// (0x0003543c) main_pane_idle_g1_ParamLimits

0x5a73,	// (0x0003543c) main_pane_idle_g1

0x223d,	// (0x00031c06) popup_clock_digital_analogue_window_ParamLimits

0x223d,	// (0x00031c06) popup_clock_digital_analogue_window

0x5a81,	// (0x0003544a) soft_indicator_pane_ParamLimits

0x5a81,	// (0x0003544a) soft_indicator_pane

0x5a8f,	// (0x00035458) wallpaper_pane_ParamLimits

0x5a8f,	// (0x00035458) wallpaper_pane

0x21b2,	// (0x00031b7b) wallpaper_pane_g1

0x5a9b,	// (0x00035464) indicator_pane_g1_ParamLimits

0x5a9b,	// (0x00035464) indicator_pane_g1

0xb17b,	// (0x0003ab44) navi_navi_icon_text_pane_srt_g1

0x226b,	// (0x00031c34) soft_indicator_pane_t1

0x2285,	// (0x00031c4e) aid_ps_area_pane

0x5aa7,	// (0x00035470) aid_ps_clock_pane

0x2296,	// (0x00031c5f) aid_ps_indicator_pane

0x22a2,	// (0x00031c6b) indicator_ps_pane_ParamLimits

0x22a2,	// (0x00031c6b) indicator_ps_pane

0x22b1,	// (0x00031c7a) power_save_pane_g1_ParamLimits

0x22b1,	// (0x00031c7a) power_save_pane_g1

0x22bd,	// (0x00031c86) power_save_pane_g2_ParamLimits

0x22bd,	// (0x00031c86) power_save_pane_g2

0x54d5,	// (0x00034e9e) aid_navinavi_width_pane

0x2285,	// (0x00031c4e) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0003ef0e) power_save_pane_g_ParamLimits

0xf545,	// (0x0003ef0e) power_save_pane_g

0x22cb,	// (0x00031c94) power_save_pane_t1_ParamLimits

0x22cb,	// (0x00031c94) power_save_pane_t1

0x5aa7,	// (0x00035470) aid_ps_clock_pane_ParamLimits

0x2296,	// (0x00031c5f) aid_ps_indicator_pane_ParamLimits

0x22dd,	// (0x00031ca6) power_save_pane_t4_ParamLimits

0x22dd,	// (0x00031ca6) power_save_pane_t4

0x0001,

0xf54a,	// (0x0003ef13) power_save_pane_t_ParamLimits

0xf54a,	// (0x0003ef13) power_save_pane_t

0x2307,	// (0x00031cd0) power_save_t3_ParamLimits

0x2307,	// (0x00031cd0) power_save_t3

0x22f2,	// (0x00031cbb) power_save_t2_ParamLimits

0x22f2,	// (0x00031cbb) power_save_t2

0x231c,	// (0x00031ce5) indicator_ps_pane_g1

0x5ab5,	// (0x0003547e) ai_gene_pane_ParamLimits

0x5ab5,	// (0x0003547e) ai_gene_pane

0x5ac1,	// (0x0003548a) ai_links_pane_ParamLimits

0x5ac1,	// (0x0003548a) ai_links_pane

0x5acd,	// (0x00035496) indicator_pane_cp1_ParamLimits

0x5acd,	// (0x00035496) indicator_pane_cp1

0x5ad9,	// (0x000354a2) main_pane_idle_g1_cp_ParamLimits

0x5ad9,	// (0x000354a2) main_pane_idle_g1_cp

0x2325,	// (0x00031cee) popup_ai_links_title_window

0x5ae5,	// (0x000354ae) soft_indicator_pane_cp1_ParamLimits

0x5ae5,	// (0x000354ae) soft_indicator_pane_cp1

0xaaee,	// (0x0003a4b7) ai_links_pane_g1

0xaaf7,	// (0x0003a4c0) grid_ai_links_pane

0xaad3,	// (0x0003a49c) ai_gene_pane_1

0xaadc,	// (0x0003a4a5) ai_gene_pane_2

0xaae5,	// (0x0003a4ae) list_highlight_pane_cp4

0xaab3,	// (0x0003a47c) cell_ai_link_pane_ParamLimits

0xaab3,	// (0x0003a47c) cell_ai_link_pane

0xaaab,	// (0x0003a474) cell_ai_link_pane_g1

0x2519,	// (0x00031ee2) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0003f2bb) cell_ai_link_pane_g

0x21bc,	// (0x00031b85) grid_highlight_cp2

0x21bc,	// (0x00031b85) bg_popup_sub_pane_cp1

0x233c,	// (0x00031d05) popup_ai_links_title_window_t1

0xa9f7,	// (0x0003a3c0) ai_gene_pane_1_g1_ParamLimits

0xa9f7,	// (0x0003a3c0) ai_gene_pane_1_g1

0xaa03,	// (0x0003a3cc) ai_gene_pane_1_g2_ParamLimits

0xaa03,	// (0x0003a3cc) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0003f2b1) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0003f2b1) ai_gene_pane_1_g

0xaa10,	// (0x0003a3d9) ai_gene_pane_1_t1_ParamLimits

0xaa10,	// (0x0003a3d9) ai_gene_pane_1_t1

0xaa44,	// (0x0003a40d) grid_ai_soft_ind_pane

0xa9e2,	// (0x0003a3ab) ai_gene_pane_2_t1_ParamLimits

0xa9e2,	// (0x0003a3ab) ai_gene_pane_2_t1

0x5af1,	// (0x000354ba) main_pane_empty_t1_ParamLimits

0x5af1,	// (0x000354ba) main_pane_empty_t1

0x5b09,	// (0x000354d2) main_pane_empty_t2_ParamLimits

0x5b09,	// (0x000354d2) main_pane_empty_t2

0x5b1e,	// (0x000354e7) main_pane_empty_t3_ParamLimits

0x5b1e,	// (0x000354e7) main_pane_empty_t3

0x5b30,	// (0x000354f9) main_pane_empty_t4_ParamLimits

0x5b30,	// (0x000354f9) main_pane_empty_t4

0x5b42,	// (0x0003550b) main_pane_empty_t5_ParamLimits

0x5b42,	// (0x0003550b) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0003ef18) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0003ef18) main_pane_empty_t

0x2941,	// (0x0003230a) bg_popup_window_pane_ParamLimits

0x2941,	// (0x0003230a) bg_popup_window_pane

0xa744,	// (0x0003a10d) find_popup_pane_cp2_ParamLimits

0xa744,	// (0x0003a10d) find_popup_pane_cp2

0xa750,	// (0x0003a119) heading_pane_ParamLimits

0xa750,	// (0x0003a119) heading_pane

0x21bc,	// (0x00031b85) bg_popup_sub_pane

0xa6be,	// (0x0003a087) bg_popup_window_pane_g1_ParamLimits

0xa6be,	// (0x0003a087) bg_popup_window_pane_g1

0xa6ca,	// (0x0003a093) bg_popup_window_pane_g2_ParamLimits

0xa6ca,	// (0x0003a093) bg_popup_window_pane_g2

0xa6d6,	// (0x0003a09f) bg_popup_window_pane_g3_ParamLimits

0xa6d6,	// (0x0003a09f) bg_popup_window_pane_g3

0xa6e2,	// (0x0003a0ab) bg_popup_window_pane_g4_ParamLimits

0xa6e2,	// (0x0003a0ab) bg_popup_window_pane_g4

0xa6ee,	// (0x0003a0b7) bg_popup_window_pane_g5_ParamLimits

0xa6ee,	// (0x0003a0b7) bg_popup_window_pane_g5

0xa6fa,	// (0x0003a0c3) bg_popup_window_pane_g6_ParamLimits

0xa6fa,	// (0x0003a0c3) bg_popup_window_pane_g6

0xa706,	// (0x0003a0cf) bg_popup_window_pane_g7_ParamLimits

0xa706,	// (0x0003a0cf) bg_popup_window_pane_g7

0xa712,	// (0x0003a0db) bg_popup_window_pane_g8_ParamLimits

0xa712,	// (0x0003a0db) bg_popup_window_pane_g8

0xa71e,	// (0x0003a0e7) bg_popup_window_pane_g9_ParamLimits

0xa71e,	// (0x0003a0e7) bg_popup_window_pane_g9

0xa72a,	// (0x0003a0f3) bg_popup_window_pane_g10_ParamLimits

0xa72a,	// (0x0003a0f3) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0003f279) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0003f279) bg_popup_window_pane_g

0xa653,	// (0x0003a01c) bg_popup_heading_pane_ParamLimits

0xa653,	// (0x0003a01c) bg_popup_heading_pane

0x79c6,	// (0x0003738f) tabs_4_passive_pane_cp_srt_ParamLimits

0x79c6,	// (0x0003738f) tabs_4_passive_pane_cp_srt

0x79d8,	// (0x000373a1) tabs_4_passive_pane_srt_ParamLimits

0xa667,	// (0x0003a030) heading_pane_g2

0x79d8,	// (0x000373a1) tabs_4_passive_pane_srt

0x9440,	// (0x00038e09) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9440,	// (0x00038e09) bg_passive_tab_pane_cp3_srt

0xa66f,	// (0x0003a038) heading_pane_t1_ParamLimits

0xa66f,	// (0x0003a038) heading_pane_t1

0xa686,	// (0x0003a04f) heading_pane_t2_ParamLimits

0xa686,	// (0x0003a04f) heading_pane_t2

0x0001,

0xf8ab,	// (0x0003f274) heading_pane_t_ParamLimits

0xf8ab,	// (0x0003f274) heading_pane_t

0xa17e,	// (0x00039b47) bg_popup_heading_pane_g1

0xa22d,	// (0x00039bf6) bg_popup_heading_pane_g2

0xa237,	// (0x00039c00) bg_popup_heading_pane_g3

0xa241,	// (0x00039c0a) bg_popup_heading_pane_g4

0xa24b,	// (0x00039c14) bg_popup_heading_pane_g5

0xa255,	// (0x00039c1e) bg_popup_heading_pane_g6

0xa25d,	// (0x00039c26) bg_popup_heading_pane_g7

0xa265,	// (0x00039c2e) bg_popup_heading_pane_g8

0xa26f,	// (0x00039c38) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0003f230) bg_popup_heading_pane_g

0x9976,	// (0x0003933f) bg_popup_sub_pane_g1

0x9986,	// (0x0003934f) bg_popup_sub_pane_g2

0x997e,	// (0x00039347) bg_popup_sub_pane_g3

0x9996,	// (0x0003935f) bg_popup_sub_pane_g4

0x998e,	// (0x00039357) bg_popup_sub_pane_g5

0x999e,	// (0x00039367) bg_popup_sub_pane_g6

0x99a6,	// (0x0003936f) bg_popup_sub_pane_g7

0x99b6,	// (0x0003937f) bg_popup_sub_pane_g8

0x99ae,	// (0x00039377) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0003f20a) bg_popup_sub_pane_g

0x220a,	// (0x00031bd3) bg_popup_window_pane_cp5_ParamLimits

0x220a,	// (0x00031bd3) bg_popup_window_pane_cp5

0x2359,	// (0x00031d22) popup_note_window_g1_ParamLimits

0x2359,	// (0x00031d22) popup_note_window_g1

0x2365,	// (0x00031d2e) popup_note_window_t1_ParamLimits

0x2365,	// (0x00031d2e) popup_note_window_t1

0x237b,	// (0x00031d44) popup_note_window_t2_ParamLimits

0x237b,	// (0x00031d44) popup_note_window_t2

0x2391,	// (0x00031d5a) popup_note_window_t3_ParamLimits

0x2391,	// (0x00031d5a) popup_note_window_t3

0x23a7,	// (0x00031d70) popup_note_window_t4_ParamLimits

0x23a7,	// (0x00031d70) popup_note_window_t4

0x23cf,	// (0x00031d98) popup_note_window_t5_ParamLimits

0x23cf,	// (0x00031d98) popup_note_window_t5

0x0004,

0xf55a,	// (0x0003ef23) popup_note_window_t_ParamLimits

0xf55a,	// (0x0003ef23) popup_note_window_t

0x2419,	// (0x00031de2) bg_popup_window_pane_cp6_ParamLimits

0x2419,	// (0x00031de2) bg_popup_window_pane_cp6

0xa0fa,	// (0x00039ac3) popup_note_image_window_g1_ParamLimits

0xa0fa,	// (0x00039ac3) popup_note_image_window_g1

0xa106,	// (0x00039acf) popup_note_image_window_g2_ParamLimits

0xa106,	// (0x00039acf) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0003f1fe) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0003f1fe) popup_note_image_window_g

0xa11f,	// (0x00039ae8) popup_note_image_window_t1_ParamLimits

0xa11f,	// (0x00039ae8) popup_note_image_window_t1

0xa138,	// (0x00039b01) popup_note_image_window_t2_ParamLimits

0xa138,	// (0x00039b01) popup_note_image_window_t2

0xa151,	// (0x00039b1a) popup_note_image_window_t3_ParamLimits

0xa151,	// (0x00039b1a) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0003f203) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0003f203) popup_note_image_window_t

0x9fba,	// (0x00039983) bg_popup_window_pane_cp7_ParamLimits

0x9fba,	// (0x00039983) bg_popup_window_pane_cp7

0x9fea,	// (0x000399b3) popup_note_wait_window_g1_ParamLimits

0x9fea,	// (0x000399b3) popup_note_wait_window_g1

0x9ff6,	// (0x000399bf) popup_note_wait_window_g2_ParamLimits

0x9ff6,	// (0x000399bf) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0003f1ec) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0003f1ec) popup_note_wait_window_g

0xa00e,	// (0x000399d7) popup_note_wait_window_t1_ParamLimits

0xa00e,	// (0x000399d7) popup_note_wait_window_t1

0xa035,	// (0x000399fe) popup_note_wait_window_t2_ParamLimits

0xa035,	// (0x000399fe) popup_note_wait_window_t2

0xa053,	// (0x00039a1c) popup_note_wait_window_t3_ParamLimits

0xa053,	// (0x00039a1c) popup_note_wait_window_t3

0xa066,	// (0x00039a2f) popup_note_wait_window_t4_ParamLimits

0xa066,	// (0x00039a2f) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0003f1f3) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0003f1f3) popup_note_wait_window_t

0xa08b,	// (0x00039a54) wait_bar_pane_ParamLimits

0xa08b,	// (0x00039a54) wait_bar_pane

0x21bc,	// (0x00031b85) wait_anim_pane

0x21bc,	// (0x00031b85) wait_border_pane

0x21b2,	// (0x00031b7b) wait_anim_pane_g1

0x21b2,	// (0x00031b7b) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0003f0a7) wait_anim_pane_g

0x9f5e,	// (0x00039927) wait_border_pane_g1

0x9f69,	// (0x00039932) wait_border_pane_g2

0x9f72,	// (0x0003993b) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0003f1e5) wait_border_pane_g

0x9dc8,	// (0x00039791) bg_popup_window_pane_cp16_ParamLimits

0x9dc8,	// (0x00039791) bg_popup_window_pane_cp16

0x9ec8,	// (0x00039891) indicator_popup_pane_cp4_ParamLimits

0x9ec8,	// (0x00039891) indicator_popup_pane_cp4

0x9edc,	// (0x000398a5) popup_query_data_window_t1_ParamLimits

0x9edc,	// (0x000398a5) popup_query_data_window_t1

0x9eee,	// (0x000398b7) popup_query_data_window_t2_ParamLimits

0x9eee,	// (0x000398b7) popup_query_data_window_t2

0x9f07,	// (0x000398d0) popup_query_data_window_t3_ParamLimits

0x9f07,	// (0x000398d0) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0003f1de) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0003f1de) popup_query_data_window_t

0x9f21,	// (0x000398ea) query_popup_data_pane_ParamLimits

0x9f21,	// (0x000398ea) query_popup_data_pane

0x9f35,	// (0x000398fe) query_popup_data_pane_cp1_ParamLimits

0x9f35,	// (0x000398fe) query_popup_data_pane_cp1

0x9dc8,	// (0x00039791) bg_popup_window_pane_cp10_ParamLimits

0x9dc8,	// (0x00039791) bg_popup_window_pane_cp10

0x9dfa,	// (0x000397c3) indicator_popup_pane_ParamLimits

0x9dfa,	// (0x000397c3) indicator_popup_pane

0x9e1c,	// (0x000397e5) popup_query_code_window_t1_ParamLimits

0x9e1c,	// (0x000397e5) popup_query_code_window_t1

0x9e36,	// (0x000397ff) popup_query_code_window_t2_ParamLimits

0x9e36,	// (0x000397ff) popup_query_code_window_t2

0x9e7f,	// (0x00039848) popup_query_code_window_t3_ParamLimits

0x9e7f,	// (0x00039848) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0003f1d7) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0003f1d7) popup_query_code_window_t

0x9eae,	// (0x00039877) query_popup_pane_ParamLimits

0x9eae,	// (0x00039877) query_popup_pane

0x2419,	// (0x00031de2) bg_popup_window_pane_cp15_ParamLimits

0x2419,	// (0x00031de2) bg_popup_window_pane_cp15

0x2439,	// (0x00031e02) indicator_popup_pane_cp1_ParamLimits

0x2439,	// (0x00031e02) indicator_popup_pane_cp1

0x244c,	// (0x00031e15) indicator_popup_pane_cp2_ParamLimits

0x244c,	// (0x00031e15) indicator_popup_pane_cp2

0x2467,	// (0x00031e30) popup_query_data_code_window_g1_ParamLimits

0x2467,	// (0x00031e30) popup_query_data_code_window_g1

0x247a,	// (0x00031e43) popup_query_data_code_window_t1_ParamLimits

0x247a,	// (0x00031e43) popup_query_data_code_window_t1

0x248c,	// (0x00031e55) popup_query_data_code_window_t2_ParamLimits

0x248c,	// (0x00031e55) popup_query_data_code_window_t2

0x249e,	// (0x00031e67) popup_query_data_code_window_t3_ParamLimits

0x249e,	// (0x00031e67) popup_query_data_code_window_t3

0x24b4,	// (0x00031e7d) popup_query_data_code_window_t4_ParamLimits

0x24b4,	// (0x00031e7d) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0003ef2e) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0003ef2e) popup_query_data_code_window_t

0x757b,	// (0x00036f44) list_single_midp_graphic_pane_g3

0x24ce,	// (0x00031e97) query_popup_data_pane_cp2_ParamLimits

0x24e1,	// (0x00031eaa) query_popup_pane_cp2_ParamLimits

0x24e1,	// (0x00031eaa) query_popup_pane_cp2

0x21bc,	// (0x00031b85) bg_popup_window_pane_cp11

0x9dac,	// (0x00039775) heading_pane_cp5

0x9db4,	// (0x0003977d) listscroll_popup_info_pane

0x21bc,	// (0x00031b85) input_focus_pane_cp3

0x24fc,	// (0x00031ec5) query_popup_pane_t1

0x250a,	// (0x00031ed3) list_popup_info_pane_ParamLimits

0x250a,	// (0x00031ed3) list_popup_info_pane

0x2519,	// (0x00031ee2) listscroll_popup_info_pane_g1

0x2521,	// (0x00031eea) scroll_pane_cp7

0x252b,	// (0x00031ef4) popup_info_list_pane_t1_ParamLimits

0x252b,	// (0x00031ef4) popup_info_list_pane_t1

0x2545,	// (0x00031f0e) popup_info_list_pane_t2_ParamLimits

0x2545,	// (0x00031f0e) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0003ef37) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0003ef37) popup_info_list_pane_t

0x21bc,	// (0x00031b85) bg_popup_window_pane_cp12

0xb195,	// (0x0003ab5e) find_popup_pane

0x2218,	// (0x00031be1) bg_popup_window_pane_cp3

0x255f,	// (0x00031f28) heading_pane_cp3

0x256e,	// (0x00031f37) listscroll_popup_graphic_pane

0x21bc,	// (0x00031b85) bg_popup_window_pane_cp4

0x5ba4,	// (0x0003556d) heading_pane_cp4

0x257e,	// (0x00031f47) listscroll_popup_colour_pane

0x5bae,	// (0x00035577) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5bae,	// (0x00035577) cell_large_graphic_colour_none_popup_pane

0x5bc2,	// (0x0003558b) grid_large_graphic_colour_popup_pane_ParamLimits

0x5bc2,	// (0x0003558b) grid_large_graphic_colour_popup_pane

0x5bee,	// (0x000355b7) listscroll_popup_colour_pane_g1_ParamLimits

0x5bee,	// (0x000355b7) listscroll_popup_colour_pane_g1

0x5c05,	// (0x000355ce) listscroll_popup_colour_pane_g2_ParamLimits

0x5c05,	// (0x000355ce) listscroll_popup_colour_pane_g2

0x5c1c,	// (0x000355e5) listscroll_popup_colour_pane_g3_ParamLimits

0x5c1c,	// (0x000355e5) listscroll_popup_colour_pane_g3

0x5c2c,	// (0x000355f5) listscroll_popup_colour_pane_g4_ParamLimits

0x5c2c,	// (0x000355f5) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0003ef3c) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0003ef3c) listscroll_popup_colour_pane_g

0x2586,	// (0x00031f4f) scroll_pane_cp6_ParamLimits

0x2586,	// (0x00031f4f) scroll_pane_cp6

0x5c40,	// (0x00035609) cell_large_graphic_colour_popup_pane_ParamLimits

0x5c40,	// (0x00035609) cell_large_graphic_colour_popup_pane

0x2598,	// (0x00031f61) cell_large_graphic_colour_none_popup_pane_t1

0x21bc,	// (0x00031b85) grid_highlight_pane_cp5

0x25a7,	// (0x00031f70) cell_large_graphic_colour_popup_pane_g1

0x25af,	// (0x00031f78) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0003ef45) cell_large_graphic_colour_popup_pane_g

0x25b7,	// (0x00031f80) cell_large_graphic_colour_popup_pane_g2_copy1

0x25c0,	// (0x00031f89) grid_highlight_pane_cp4

0x25c8,	// (0x00031f91) bg_popup_window_pane_cp8_ParamLimits

0x25c8,	// (0x00031f91) bg_popup_window_pane_cp8

0x25e3,	// (0x00031fac) popup_snote_single_text_window_g1_ParamLimits

0x25e3,	// (0x00031fac) popup_snote_single_text_window_g1

0x25f5,	// (0x00031fbe) popup_snote_single_text_window_t1_ParamLimits

0x25f5,	// (0x00031fbe) popup_snote_single_text_window_t1

0x2608,	// (0x00031fd1) popup_snote_single_text_window_t2_ParamLimits

0x2608,	// (0x00031fd1) popup_snote_single_text_window_t2

0x261b,	// (0x00031fe4) popup_snote_single_text_window_t3_ParamLimits

0x261b,	// (0x00031fe4) popup_snote_single_text_window_t3

0x2654,	// (0x0003201d) popup_snote_single_text_window_t4_ParamLimits

0x2654,	// (0x0003201d) popup_snote_single_text_window_t4

0x2688,	// (0x00032051) popup_snote_single_text_window_t5_ParamLimits

0x2688,	// (0x00032051) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0003ef4a) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0003ef4a) popup_snote_single_text_window_t

0x26b7,	// (0x00032080) bg_popup_window_pane_cp9_ParamLimits

0x26b7,	// (0x00032080) bg_popup_window_pane_cp9

0x25e3,	// (0x00031fac) popup_snote_single_graphic_window_g1_ParamLimits

0x25e3,	// (0x00031fac) popup_snote_single_graphic_window_g1

0x26c5,	// (0x0003208e) popup_snote_single_graphic_window_g2_ParamLimits

0x26c5,	// (0x0003208e) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0003ef55) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0003ef55) popup_snote_single_graphic_window_g

0x26d1,	// (0x0003209a) popup_snote_single_graphic_window_t1_ParamLimits

0x26d1,	// (0x0003209a) popup_snote_single_graphic_window_t1

0x26e4,	// (0x000320ad) popup_snote_single_graphic_window_t2_ParamLimits

0x26e4,	// (0x000320ad) popup_snote_single_graphic_window_t2

0x26f7,	// (0x000320c0) popup_snote_single_graphic_window_t3_ParamLimits

0x26f7,	// (0x000320c0) popup_snote_single_graphic_window_t3

0x2730,	// (0x000320f9) popup_snote_single_graphic_window_t4_ParamLimits

0x2730,	// (0x000320f9) popup_snote_single_graphic_window_t4

0x2764,	// (0x0003212d) popup_snote_single_graphic_window_t5_ParamLimits

0x2764,	// (0x0003212d) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0003ef5a) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0003ef5a) popup_snote_single_graphic_window_t

0xb0d3,	// (0x0003aa9c) grid_graphic_popup_pane_ParamLimits

0xb0d3,	// (0x0003aa9c) grid_graphic_popup_pane

0xb101,	// (0x0003aaca) listscroll_popup_graphic_pane_g1_ParamLimits

0xb101,	// (0x0003aaca) listscroll_popup_graphic_pane_g1

0xb115,	// (0x0003aade) listscroll_popup_graphic_pane_g2_ParamLimits

0xb115,	// (0x0003aade) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0003f354) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0003f354) listscroll_popup_graphic_pane_g

0xb129,	// (0x0003aaf2) scroll_pane_cp5

0xb06b,	// (0x0003aa34) cell_graphic_popup_pane_ParamLimits

0xb06b,	// (0x0003aa34) cell_graphic_popup_pane

0xb04c,	// (0x0003aa15) cell_graphic_popup_pane_g1

0xb054,	// (0x0003aa1d) cell_graphic_popup_pane_g2

0x25b7,	// (0x00031f80) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0003f34d) cell_graphic_popup_pane_g

0xb05d,	// (0x0003aa26) cell_graphic_popup_pane_t2

0x25c0,	// (0x00031f89) grid_highlight_pane_cp3

0x27a5,	// (0x0003216e) list_gen_pane_ParamLimits

0x27a5,	// (0x0003216e) list_gen_pane

0x27cd,	// (0x00032196) scroll_pane

0xafa4,	// (0x0003a96d) bg_list_pane_g1_ParamLimits

0xafa4,	// (0x0003a96d) bg_list_pane_g1

0xafc1,	// (0x0003a98a) bg_list_pane_g2_ParamLimits

0xafc1,	// (0x0003a98a) bg_list_pane_g2

0xafd6,	// (0x0003a99f) bg_list_pane_g3_ParamLimits

0xafd6,	// (0x0003a99f) bg_list_pane_g3

0xafea,	// (0x0003a9b3) bg_list_pane_g4_ParamLimits

0xafea,	// (0x0003a9b3) bg_list_pane_g4

0xaffe,	// (0x0003a9c7) bg_list_pane_g5_ParamLimits

0xaffe,	// (0x0003a9c7) bg_list_pane_g5

0x0004,

0xf979,	// (0x0003f342) bg_list_pane_g_ParamLimits

0xf979,	// (0x0003f342) bg_list_pane_g

0xaf25,	// (0x0003a8ee) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf25,	// (0x0003a8ee) list_double2_graphic_large_graphic_pane

0xaf25,	// (0x0003a8ee) list_double2_graphic_pane_ParamLimits

0xaf25,	// (0x0003a8ee) list_double2_graphic_pane

0xaf25,	// (0x0003a8ee) list_double2_large_graphic_pane_ParamLimits

0xaf25,	// (0x0003a8ee) list_double2_large_graphic_pane

0xaf25,	// (0x0003a8ee) list_double2_pane_ParamLimits

0xaf25,	// (0x0003a8ee) list_double2_pane

0xaf25,	// (0x0003a8ee) list_double_graphic_heading_pane_ParamLimits

0xaf25,	// (0x0003a8ee) list_double_graphic_heading_pane

0xaf25,	// (0x0003a8ee) list_double_graphic_pane_ParamLimits

0xaf25,	// (0x0003a8ee) list_double_graphic_pane

0xaf25,	// (0x0003a8ee) list_double_heading_pane_ParamLimits

0xaf25,	// (0x0003a8ee) list_double_heading_pane

0xaf25,	// (0x0003a8ee) list_double_large_graphic_pane_ParamLimits

0xaf25,	// (0x0003a8ee) list_double_large_graphic_pane

0xaf25,	// (0x0003a8ee) list_double_number_pane_ParamLimits

0xaf25,	// (0x0003a8ee) list_double_number_pane

0xaf25,	// (0x0003a8ee) list_double_pane_ParamLimits

0xaf25,	// (0x0003a8ee) list_double_pane

0xaf25,	// (0x0003a8ee) list_double_time_pane_ParamLimits

0xaf25,	// (0x0003a8ee) list_double_time_pane

0xaf25,	// (0x0003a8ee) list_setting_number_pane_ParamLimits

0xaf25,	// (0x0003a8ee) list_setting_number_pane

0xaf25,	// (0x0003a8ee) list_setting_pane_ParamLimits

0xaf25,	// (0x0003a8ee) list_setting_pane

0x795b,	// (0x00037324) list_single_2graphic_pane_ParamLimits

0x795b,	// (0x00037324) list_single_2graphic_pane

0x795b,	// (0x00037324) list_single_graphic_heading_pane_ParamLimits

0x795b,	// (0x00037324) list_single_graphic_heading_pane

0x795b,	// (0x00037324) list_single_graphic_pane_ParamLimits

0x795b,	// (0x00037324) list_single_graphic_pane

0x795b,	// (0x00037324) list_single_heading_pane_ParamLimits

0x795b,	// (0x00037324) list_single_heading_pane

0xaf89,	// (0x0003a952) list_single_large_graphic_pane_ParamLimits

0xaf89,	// (0x0003a952) list_single_large_graphic_pane

0x795b,	// (0x00037324) list_single_number_heading_pane_ParamLimits

0x795b,	// (0x00037324) list_single_number_heading_pane

0x795b,	// (0x00037324) list_single_number_pane_ParamLimits

0x795b,	// (0x00037324) list_single_number_pane

0x795b,	// (0x00037324) list_single_pane_ParamLimits

0x795b,	// (0x00037324) list_single_pane

0x21bc,	// (0x00031b85) list_highlight_pane_cp1

0x5c77,	// (0x00035640) list_single_pane_g1_ParamLimits

0x5c77,	// (0x00035640) list_single_pane_g1

0x5c83,	// (0x0003564c) list_single_pane_g2_ParamLimits

0x5c83,	// (0x0003564c) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0003ef6c) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0003ef6c) list_single_pane_g

0x792d,	// (0x000372f6) list_single_pane_t1_ParamLimits

0x792d,	// (0x000372f6) list_single_pane_t1

0x5c77,	// (0x00035640) list_single_number_pane_g1_ParamLimits

0x5c77,	// (0x00035640) list_single_number_pane_g1

0x5c83,	// (0x0003564c) list_single_number_pane_g2_ParamLimits

0x5c83,	// (0x0003564c) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0003ef6c) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0003ef6c) list_single_number_pane_g

0x785f,	// (0x00037228) list_single_number_pane_t1_ParamLimits

0x785f,	// (0x00037228) list_single_number_pane_t1

0x7875,	// (0x0003723e) list_single_number_pane_t2_ParamLimits

0x7875,	// (0x0003723e) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0003f303) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0003f303) list_single_number_pane_t

0x5c6b,	// (0x00035634) list_single_graphic_pane_g1_ParamLimits

0x5c6b,	// (0x00035634) list_single_graphic_pane_g1

0x5c77,	// (0x00035640) list_single_graphic_pane_g2_ParamLimits

0x5c77,	// (0x00035640) list_single_graphic_pane_g2

0x5c83,	// (0x0003564c) list_single_graphic_pane_g3_ParamLimits

0x5c83,	// (0x0003564c) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0003ef65) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0003ef65) list_single_graphic_pane_g

0x5c8f,	// (0x00035658) list_single_graphic_pane_t1_ParamLimits

0x5c8f,	// (0x00035658) list_single_graphic_pane_t1

0x5c77,	// (0x00035640) list_single_heading_pane_g1_ParamLimits

0x5c77,	// (0x00035640) list_single_heading_pane_g1

0x5c83,	// (0x0003564c) list_single_heading_pane_g2_ParamLimits

0x5c83,	// (0x0003564c) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003ef6c) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003ef6c) list_single_heading_pane_g

0x5ca5,	// (0x0003566e) list_single_heading_pane_t1_ParamLimits

0x5ca5,	// (0x0003566e) list_single_heading_pane_t1

0x5cbb,	// (0x00035684) list_single_heading_pane_t2_ParamLimits

0x5cbb,	// (0x00035684) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0003ef71) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0003ef71) list_single_heading_pane_t

0x5c77,	// (0x00035640) list_single_number_heading_pane_g1_ParamLimits

0x5c77,	// (0x00035640) list_single_number_heading_pane_g1

0x5c83,	// (0x0003564c) list_single_number_heading_pane_g2_ParamLimits

0x5c83,	// (0x0003564c) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003ef6c) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003ef6c) list_single_number_heading_pane_g

0x5ca5,	// (0x0003566e) list_single_number_heading_pane_t1_ParamLimits

0x5ca5,	// (0x0003566e) list_single_number_heading_pane_t1

0x5ccd,	// (0x00035696) list_single_number_heading_pane_t2_ParamLimits

0x5ccd,	// (0x00035696) list_single_number_heading_pane_t2

0x5cdf,	// (0x000356a8) list_single_number_heading_pane_t3_ParamLimits

0x5cdf,	// (0x000356a8) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0003ef76) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0003ef76) list_single_number_heading_pane_t

0x5cf1,	// (0x000356ba) list_single_graphic_heading_pane_g1_ParamLimits

0x5cf1,	// (0x000356ba) list_single_graphic_heading_pane_g1

0x5cfd,	// (0x000356c6) list_single_graphic_heading_pane_g4_ParamLimits

0x5cfd,	// (0x000356c6) list_single_graphic_heading_pane_g4

0x5c83,	// (0x0003564c) list_single_graphic_heading_pane_g5_ParamLimits

0x5c83,	// (0x0003564c) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0003ef7d) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0003ef7d) list_single_graphic_heading_pane_g

0x5ca5,	// (0x0003566e) list_single_graphic_heading_pane_t1_ParamLimits

0x5ca5,	// (0x0003566e) list_single_graphic_heading_pane_t1

0x5d0e,	// (0x000356d7) list_single_graphic_heading_pane_t2_ParamLimits

0x5d0e,	// (0x000356d7) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0003ef84) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0003ef84) list_single_graphic_heading_pane_t

0x5d20,	// (0x000356e9) list_single_large_graphic_pane_g1_ParamLimits

0x5d20,	// (0x000356e9) list_single_large_graphic_pane_g1

0x5d2c,	// (0x000356f5) list_single_large_graphic_pane_g2_ParamLimits

0x5d2c,	// (0x000356f5) list_single_large_graphic_pane_g2

0x5d38,	// (0x00035701) list_single_large_graphic_pane_g3_ParamLimits

0x5d38,	// (0x00035701) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0003ef89) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0003ef89) list_single_large_graphic_pane_g

0x9f69,	// (0x00039932) wait_border_pane_g2_copy1

0x5d44,	// (0x0003570d) list_single_large_graphic_pane_g4_cp2

0x5d4c,	// (0x00035715) list_single_large_graphic_pane_t1_ParamLimits

0x5d4c,	// (0x00035715) list_single_large_graphic_pane_t1

0x4524,	// (0x00033eed) list_double_pane_g1_ParamLimits

0x4524,	// (0x00033eed) list_double_pane_g1

0x5d62,	// (0x0003572b) list_double_pane_g2_ParamLimits

0x5d62,	// (0x0003572b) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0003ef90) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0003ef90) list_double_pane_g

0x5d6e,	// (0x00035737) list_double_pane_t1_ParamLimits

0x5d6e,	// (0x00035737) list_double_pane_t1

0x5d84,	// (0x0003574d) list_double_pane_t2_ParamLimits

0x5d84,	// (0x0003574d) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0003ef95) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0003ef95) list_double_pane_t

0x5d96,	// (0x0003575f) list_double2_pane_g1_ParamLimits

0x5d96,	// (0x0003575f) list_double2_pane_g1

0x5da7,	// (0x00035770) list_double2_pane_g2_ParamLimits

0x5da7,	// (0x00035770) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0003ef9a) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0003ef9a) list_double2_pane_g

0x5db3,	// (0x0003577c) list_double2_pane_t1_ParamLimits

0x5db3,	// (0x0003577c) list_double2_pane_t1

0x5dc9,	// (0x00035792) list_double2_pane_t2_ParamLimits

0x5dc9,	// (0x00035792) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0003ef9f) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0003ef9f) list_double2_pane_t

0x4524,	// (0x00033eed) list_double_number_pane_g1_ParamLimits

0x4524,	// (0x00033eed) list_double_number_pane_g1

0x5d62,	// (0x0003572b) list_double_number_pane_g2_ParamLimits

0x5d62,	// (0x0003572b) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0003ef90) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0003ef90) list_double_number_pane_g

0x5ddb,	// (0x000357a4) list_double_number_pane_t1_ParamLimits

0x5ddb,	// (0x000357a4) list_double_number_pane_t1

0x5ded,	// (0x000357b6) list_double_number_pane_t2_ParamLimits

0x5ded,	// (0x000357b6) list_double_number_pane_t2

0x5e03,	// (0x000357cc) list_double_number_pane_t3_ParamLimits

0x5e03,	// (0x000357cc) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0003efa4) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0003efa4) list_double_number_pane_t

0x5e15,	// (0x000357de) list_double_graphic_pane_g1_ParamLimits

0x5e15,	// (0x000357de) list_double_graphic_pane_g1

0x5e21,	// (0x000357ea) list_double_graphic_pane_g2_ParamLimits

0x5e21,	// (0x000357ea) list_double_graphic_pane_g2

0x5e30,	// (0x000357f9) list_double_graphic_pane_g3_ParamLimits

0x5e30,	// (0x000357f9) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0003efab) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0003efab) list_double_graphic_pane_g

0x5e48,	// (0x00035811) list_double_graphic_pane_t1_ParamLimits

0x5e48,	// (0x00035811) list_double_graphic_pane_t1

0x5e5e,	// (0x00035827) list_double_graphic_pane_t2_ParamLimits

0x5e5e,	// (0x00035827) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0003efb4) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0003efb4) list_double_graphic_pane_t

0x5e70,	// (0x00035839) list_double2_graphic_pane_g1_ParamLimits

0x5e70,	// (0x00035839) list_double2_graphic_pane_g1

0x5e7c,	// (0x00035845) list_double2_graphic_pane_g2_ParamLimits

0x5e7c,	// (0x00035845) list_double2_graphic_pane_g2

0x5e88,	// (0x00035851) list_double2_graphic_pane_g3_ParamLimits

0x5e88,	// (0x00035851) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0003efb9) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0003efb9) list_double2_graphic_pane_g

0x5e94,	// (0x0003585d) list_double2_graphic_pane_t1_ParamLimits

0x5e94,	// (0x0003585d) list_double2_graphic_pane_t1

0x5eaa,	// (0x00035873) list_double2_graphic_pane_t2_ParamLimits

0x5eaa,	// (0x00035873) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0003efc0) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0003efc0) list_double2_graphic_pane_t

0x5ebc,	// (0x00035885) list_double_large_graphic_pane_g1_ParamLimits

0x5ebc,	// (0x00035885) list_double_large_graphic_pane_g1

0x5edb,	// (0x000358a4) list_double_large_graphic_pane_g2_ParamLimits

0x5edb,	// (0x000358a4) list_double_large_graphic_pane_g2

0x5d62,	// (0x0003572b) list_double_large_graphic_pane_g3_ParamLimits

0x5d62,	// (0x0003572b) list_double_large_graphic_pane_g3

0x5eec,	// (0x000358b5) list_double_large_graphic_pane_g4_ParamLimits

0x5eec,	// (0x000358b5) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0003efc5) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0003efc5) list_double_large_graphic_pane_g

0x5eff,	// (0x000358c8) list_double_large_graphic_pane_t1_ParamLimits

0x5eff,	// (0x000358c8) list_double_large_graphic_pane_t1

0x5f18,	// (0x000358e1) list_double_large_graphic_pane_t2_ParamLimits

0x5f18,	// (0x000358e1) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0003efd0) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0003efd0) list_double_large_graphic_pane_t

0x5f2a,	// (0x000358f3) list_double2_large_graphic_pane_g1_ParamLimits

0x5f2a,	// (0x000358f3) list_double2_large_graphic_pane_g1

0x5d96,	// (0x0003575f) list_double2_large_graphic_pane_g2_ParamLimits

0x5d96,	// (0x0003575f) list_double2_large_graphic_pane_g2

0x5da7,	// (0x00035770) list_double2_large_graphic_pane_g3_ParamLimits

0x5da7,	// (0x00035770) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0003efd5) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0003efd5) list_double2_large_graphic_pane_g

0x5f36,	// (0x000358ff) list_double2_large_graphic_pane_t1_ParamLimits

0x5f36,	// (0x000358ff) list_double2_large_graphic_pane_t1

0x5f4c,	// (0x00035915) list_double2_large_graphic_pane_t2_ParamLimits

0x5f4c,	// (0x00035915) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0003efdc) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0003efdc) list_double2_large_graphic_pane_t

0x5f5e,	// (0x00035927) list_double_heading_pane_g1_ParamLimits

0x5f5e,	// (0x00035927) list_double_heading_pane_g1

0x5f6f,	// (0x00035938) list_double_heading_pane_g2_ParamLimits

0x5f6f,	// (0x00035938) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0003efe1) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0003efe1) list_double_heading_pane_g

0x5f7b,	// (0x00035944) list_double_heading_pane_t1_ParamLimits

0x5f7b,	// (0x00035944) list_double_heading_pane_t1

0x5dc9,	// (0x00035792) list_double_heading_pane_t2_ParamLimits

0x5dc9,	// (0x00035792) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0003efe6) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0003efe6) list_double_heading_pane_t

0x5e70,	// (0x00035839) list_double_graphic_heading_pane_g1_ParamLimits

0x5e70,	// (0x00035839) list_double_graphic_heading_pane_g1

0x5f5e,	// (0x00035927) list_double_graphic_heading_pane_g2_ParamLimits

0x5f5e,	// (0x00035927) list_double_graphic_heading_pane_g2

0x5f6f,	// (0x00035938) list_double_graphic_heading_pane_g3_ParamLimits

0x5f6f,	// (0x00035938) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0003efeb) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003efeb) list_double_graphic_heading_pane_g

0x5f91,	// (0x0003595a) list_double_graphic_heading_pane_t1_ParamLimits

0x5f91,	// (0x0003595a) list_double_graphic_heading_pane_t1

0x5eaa,	// (0x00035873) list_double_graphic_heading_pane_t2_ParamLimits

0x5eaa,	// (0x00035873) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003eff2) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003eff2) list_double_graphic_heading_pane_t

0x5edb,	// (0x000358a4) list_double_time_pane_g1_ParamLimits

0x5edb,	// (0x000358a4) list_double_time_pane_g1

0x5d62,	// (0x0003572b) list_double_time_pane_g2_ParamLimits

0x5d62,	// (0x0003572b) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0003eff7) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0003eff7) list_double_time_pane_g

0x5fa7,	// (0x00035970) list_double_time_pane_t1_ParamLimits

0x5fa7,	// (0x00035970) list_double_time_pane_t1

0x5fbd,	// (0x00035986) list_double_time_pane_t2_ParamLimits

0x5fbd,	// (0x00035986) list_double_time_pane_t2

0x5fcf,	// (0x00035998) list_double_time_pane_t3_ParamLimits

0x5fcf,	// (0x00035998) list_double_time_pane_t3

0x5fe1,	// (0x000359aa) list_double_time_pane_t4_ParamLimits

0x5fe1,	// (0x000359aa) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0003effc) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0003effc) list_double_time_pane_t

0x5ff3,	// (0x000359bc) list_setting_pane_g1_ParamLimits

0x5ff3,	// (0x000359bc) list_setting_pane_g1

0x5f6f,	// (0x00035938) list_setting_pane_g2_ParamLimits

0x5f6f,	// (0x00035938) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0003f005) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0003f005) list_setting_pane_g

0x5fff,	// (0x000359c8) list_setting_pane_t1_ParamLimits

0x5fff,	// (0x000359c8) list_setting_pane_t1

0x6016,	// (0x000359df) list_setting_pane_t2_ParamLimits

0x6016,	// (0x000359df) list_setting_pane_t2

0x0002,

0xf641,	// (0x0003f00a) list_setting_pane_t_ParamLimits

0xf641,	// (0x0003f00a) list_setting_pane_t

0x6055,	// (0x00035a1e) set_value_pane_cp_ParamLimits

0x6055,	// (0x00035a1e) set_value_pane_cp

0x6063,	// (0x00035a2c) list_setting_number_pane_g1_ParamLimits

0x6063,	// (0x00035a2c) list_setting_number_pane_g1

0x606f,	// (0x00035a38) list_setting_number_pane_g2_ParamLimits

0x606f,	// (0x00035a38) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0003f011) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0003f011) list_setting_number_pane_g

0x607b,	// (0x00035a44) list_setting_number_pane_t1_ParamLimits

0x607b,	// (0x00035a44) list_setting_number_pane_t1

0x608f,	// (0x00035a58) list_setting_number_pane_t2_ParamLimits

0x608f,	// (0x00035a58) list_setting_number_pane_t2

0x60a6,	// (0x00035a6f) list_setting_number_pane_t3_ParamLimits

0x60a6,	// (0x00035a6f) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0003f016) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0003f016) list_setting_number_pane_t

0x6055,	// (0x00035a1e) set_value_pane_ParamLimits

0x6055,	// (0x00035a1e) set_value_pane

0x2801,	// (0x000321ca) bg_set_opt_pane_ParamLimits

0x2801,	// (0x000321ca) bg_set_opt_pane

0x4057,	// (0x00033a20) set_value_pane_t1

0x2822,	// (0x000321eb) slider_set_pane_cp3

0x282b,	// (0x000321f4) volume_small_pane_cp

0x2834,	// (0x000321fd) list_form_gen_pane

0x283d,	// (0x00032206) scroll_pane_cp8

0x60e9,	// (0x00035ab2) form_field_data_pane_ParamLimits

0x60e9,	// (0x00035ab2) form_field_data_pane

0x6107,	// (0x00035ad0) form_field_data_wide_pane_ParamLimits

0x6107,	// (0x00035ad0) form_field_data_wide_pane

0x4075,	// (0x00033a3e) form_field_popup_pane_ParamLimits

0x4075,	// (0x00033a3e) form_field_popup_pane

0x612c,	// (0x00035af5) form_field_popup_wide_pane_ParamLimits

0x612c,	// (0x00035af5) form_field_popup_wide_pane

0x4097,	// (0x00033a60) form_field_slider_pane_ParamLimits

0x4097,	// (0x00033a60) form_field_slider_pane

0x40aa,	// (0x00033a73) form_field_slider_wide_pane_ParamLimits

0x40aa,	// (0x00033a73) form_field_slider_wide_pane

0x284e,	// (0x00032217) data_form_pane

0x6157,	// (0x00035b20) form_field_data_pane_t1

0x285a,	// (0x00032223) input_focus_pane

0x40bd,	// (0x00033a86) data_form_wide_pane

0x40da,	// (0x00033aa3) form_field_data_wide_pane_t1

0x25d5,	// (0x00031f9e) input_focus_pane_cp6

0x6171,	// (0x00035b3a) form_field_popup_pane_t1

0x285a,	// (0x00032223) input_focus_pane_cp7

0x2888,	// (0x00032251) list_form_pane

0x4104,	// (0x00033acd) form_field_popup_wide_pane_t1

0x285a,	// (0x00032223) input_focus_pane_cp8

0x2894,	// (0x0003225d) list_form_wide_pane

0x6193,	// (0x00035b5c) form_field_slider_pane_t1_ParamLimits

0x6193,	// (0x00035b5c) form_field_slider_pane_t1

0x61ab,	// (0x00035b74) form_field_slider_pane_t2_ParamLimits

0x61ab,	// (0x00035b74) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0003f026) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0003f026) form_field_slider_pane_t

0x220a,	// (0x00031bd3) input_focus_pane_cp9_ParamLimits

0x220a,	// (0x00031bd3) input_focus_pane_cp9

0x61c0,	// (0x00035b89) slider_cont_pane_ParamLimits

0x61c0,	// (0x00035b89) slider_cont_pane

0x28a0,	// (0x00032269) form_field_slider_wide_pane_t1_ParamLimits

0x28a0,	// (0x00032269) form_field_slider_wide_pane_t1

0x4119,	// (0x00033ae2) form_field_slider_wide_pane_t2_ParamLimits

0x4119,	// (0x00033ae2) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0003f02b) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0003f02b) form_field_slider_wide_pane_t

0x220a,	// (0x00031bd3) input_focus_pane_cp10_ParamLimits

0x220a,	// (0x00031bd3) input_focus_pane_cp10

0x61d4,	// (0x00035b9d) slider_cont_pane_cp1_ParamLimits

0x61d4,	// (0x00035b9d) slider_cont_pane_cp1

0x61e8,	// (0x00035bb1) slider_form_pane_cp

0x28b2,	// (0x0003227b) input_focus_pane_g1

0x28ba,	// (0x00032283) input_focus_pane_g2

0x28c2,	// (0x0003228b) input_focus_pane_g3

0x28ca,	// (0x00032293) input_focus_pane_g4

0x28d2,	// (0x0003229b) input_focus_pane_g5

0x28da,	// (0x000322a3) input_focus_pane_g6

0x28e2,	// (0x000322ab) input_focus_pane_g7

0x28ea,	// (0x000322b3) input_focus_pane_g8

0x28f2,	// (0x000322bb) input_focus_pane_g9

0x21b2,	// (0x00031b7b) input_focus_pane_g10

0x0009,

0xf667,	// (0x0003f030) input_focus_pane_g

0x9f72,	// (0x0003993b) wait_border_pane_g3_copy1

0x61f0,	// (0x00035bb9) data_form_pane_t1

0x21b2,	// (0x00031b7b) wait_anim_pane_g1_copy1

0x78ff,	// (0x000372c8) data_form_wide_pane_t1

0x620d,	// (0x00035bd6) list_form_graphic_pane_cp_ParamLimits

0x620d,	// (0x00035bd6) list_form_graphic_pane_cp

0xaec9,	// (0x0003a892) slider_form_pane_g1

0xaed2,	// (0x0003a89b) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0003f333) slider_form_pane_g

0x412b,	// (0x00033af4) list_form_graphic_pane_ParamLimits

0x412b,	// (0x00033af4) list_form_graphic_pane

0x413d,	// (0x00033b06) list_form_graphic_pane_g1

0x4145,	// (0x00033b0e) list_form_graphic_pane_t1_ParamLimits

0x4145,	// (0x00033b0e) list_form_graphic_pane_t1

0x2218,	// (0x00031be1) list_highlight_pane_cp5_ParamLimits

0x2218,	// (0x00031be1) list_highlight_pane_cp5

0x6222,	// (0x00035beb) find_pane_g1

0x28fa,	// (0x000322c3) input_find_pane

0x622b,	// (0x00035bf4) input_find_pane_g1_ParamLimits

0x622b,	// (0x00035bf4) input_find_pane_g1

0x6237,	// (0x00035c00) input_find_pane_t1_ParamLimits

0x6237,	// (0x00035c00) input_find_pane_t1

0x624c,	// (0x00035c15) input_find_pane_t2_ParamLimits

0x624c,	// (0x00035c15) input_find_pane_t2

0x0001,

0xf67c,	// (0x0003f045) input_find_pane_t_ParamLimits

0xf67c,	// (0x0003f045) input_find_pane_t

0x2903,	// (0x000322cc) input_focus_pane_cp5_ParamLimits

0x2903,	// (0x000322cc) input_focus_pane_cp5

0x2916,	// (0x000322df) bg_popup_window_pane_cp2_ParamLimits

0x2916,	// (0x000322df) bg_popup_window_pane_cp2

0x2923,	// (0x000322ec) listscroll_menu_pane_ParamLimits

0x2923,	// (0x000322ec) listscroll_menu_pane

0x626d,	// (0x00035c36) popup_submenu_window_ParamLimits

0x626d,	// (0x00035c36) popup_submenu_window

0x292f,	// (0x000322f8) find_popup_pane_g1

0x2937,	// (0x00032300) input_popup_find_pane_cp

0x2941,	// (0x0003230a) input_focus_pane_cp4_ParamLimits

0x2941,	// (0x0003230a) input_focus_pane_cp4

0x294f,	// (0x00032318) input_popup_find_pane_t1_ParamLimits

0x294f,	// (0x00032318) input_popup_find_pane_t1

0x21bc,	// (0x00031b85) bg_popup_sub_pane_cp

0x297d,	// (0x00032346) listscroll_popup_sub_pane

0x2985,	// (0x0003234e) list_submenu_pane_ParamLimits

0x2985,	// (0x0003234e) list_submenu_pane

0x2996,	// (0x0003235f) scroll_pane_cp4

0x299e,	// (0x00032367) list_single_popup_submenu_pane_ParamLimits

0x299e,	// (0x00032367) list_single_popup_submenu_pane

0x29b3,	// (0x0003237c) list_single_popup_submenu_pane_g1

0x29bb,	// (0x00032384) list_single_popup_submenu_pane_t1_ParamLimits

0x29bb,	// (0x00032384) list_single_popup_submenu_pane_t1

0x2218,	// (0x00031be1) bg_active_tab_pane_cp1_ParamLimits

0x2218,	// (0x00031be1) bg_active_tab_pane_cp1

0x62ab,	// (0x00035c74) tabs_2_active_pane_g1

0x62b3,	// (0x00035c7c) tabs_2_active_pane_t1

0x2218,	// (0x00031be1) bg_passive_tab_pane_cp1_ParamLimits

0x2218,	// (0x00031be1) bg_passive_tab_pane_cp1

0x62ab,	// (0x00035c74) tabs_2_passive_pane_g1

0x62b3,	// (0x00035c7c) tabs_2_passive_pane_t1

0x62c5,	// (0x00035c8e) bg_active_tab_pane_cp4

0x62d3,	// (0x00035c9c) tabs_2_long_active_pane_t1

0x62e6,	// (0x00035caf) bg_passive_tab_pane_cp4

0x7583,	// (0x00036f4c) list_single_midp_graphic_pane_g4_ParamLimits

0x62c5,	// (0x00035c8e) bg_active_tab_pane_cp5

0x62f2,	// (0x00035cbb) tabs_3_long_active_pane_t1

0x62e6,	// (0x00035caf) bg_passive_tab_pane_cp5

0x7583,	// (0x00036f4c) list_single_midp_graphic_pane_g4

0x2218,	// (0x00031be1) bg_popup_window_pane_cp13_ParamLimits

0x2218,	// (0x00031be1) bg_popup_window_pane_cp13

0x29d9,	// (0x000323a2) listscroll_popup_fast_pane_ParamLimits

0x29d9,	// (0x000323a2) listscroll_popup_fast_pane

0x29e8,	// (0x000323b1) grid_popup_fast_pane_ParamLimits

0x29e8,	// (0x000323b1) grid_popup_fast_pane

0x29fa,	// (0x000323c3) scroll_pane_cp9_ParamLimits

0x29fa,	// (0x000323c3) scroll_pane_cp9

0xc84f,	// (0x0003c218) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc84f,	// (0x0003c218) list_single_graphic_hl_pane_t1_cp2

0x2a1e,	// (0x000323e7) input_focus_pane_cp20_ParamLimits

0x2a1e,	// (0x000323e7) input_focus_pane_cp20

0x2a2c,	// (0x000323f5) query_popup_data_pane_t1_ParamLimits

0x2a2c,	// (0x000323f5) query_popup_data_pane_t1

0x2a3f,	// (0x00032408) query_popup_data_pane_t2_ParamLimits

0x2a3f,	// (0x00032408) query_popup_data_pane_t2

0x2a85,	// (0x0003244e) query_popup_data_pane_t3_ParamLimits

0x2a85,	// (0x0003244e) query_popup_data_pane_t3

0x2ac6,	// (0x0003248f) query_popup_data_pane_t4_ParamLimits

0x2ac6,	// (0x0003248f) query_popup_data_pane_t4

0x2b02,	// (0x000324cb) query_popup_data_pane_t5_ParamLimits

0x2b02,	// (0x000324cb) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0003f04a) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0003f04a) query_popup_data_pane_t

0x28b2,	// (0x0003227b) bg_set_opt_pane_g1

0x28ba,	// (0x00032283) bg_set_opt_pane_g2

0x28c2,	// (0x0003228b) bg_set_opt_pane_g3

0x28ca,	// (0x00032293) bg_set_opt_pane_g4

0x28d2,	// (0x0003229b) bg_set_opt_pane_g5

0x28da,	// (0x000322a3) bg_set_opt_pane_g6

0x28e2,	// (0x000322ab) bg_set_opt_pane_g7

0x28ea,	// (0x000322b3) bg_set_opt_pane_g8

0x28f2,	// (0x000322bb) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0003f055) bg_set_opt_pane_g

0x6bb6,	// (0x0003657f) control_top_pane_stacon_ParamLimits

0x6bb6,	// (0x0003657f) control_top_pane_stacon

0x6c09,	// (0x000365d2) signal_pane_stacon_ParamLimits

0x6c09,	// (0x000365d2) signal_pane_stacon

0x8da2,	// (0x0003876b) stacon_top_pane_g1_ParamLimits

0x8da2,	// (0x0003876b) stacon_top_pane_g1

0x6c2e,	// (0x000365f7) title_pane_stacon_ParamLimits

0x6c2e,	// (0x000365f7) title_pane_stacon

0x6c58,	// (0x00036621) uni_indicator_pane_stacon_ParamLimits

0x6c58,	// (0x00036621) uni_indicator_pane_stacon

0x6c6d,	// (0x00036636) battery_pane_stacon_ParamLimits

0x6c6d,	// (0x00036636) battery_pane_stacon

0x6cb1,	// (0x0003667a) control_bottom_pane_stacon_ParamLimits

0x6cb1,	// (0x0003667a) control_bottom_pane_stacon

0x6cd4,	// (0x0003669d) navi_pane_stacon_ParamLimits

0x6cd4,	// (0x0003669d) navi_pane_stacon

0x8dc4,	// (0x0003878d) stacon_bottom_pane_g1_ParamLimits

0x8dc4,	// (0x0003878d) stacon_bottom_pane_g1

0x6304,	// (0x00035ccd) aid_levels_signal_lsc_ParamLimits

0x6304,	// (0x00035ccd) aid_levels_signal_lsc

0x631b,	// (0x00035ce4) signal_pane_stacon_g1_ParamLimits

0x631b,	// (0x00035ce4) signal_pane_stacon_g1

0x632f,	// (0x00035cf8) signal_pane_stacon_g2_ParamLimits

0x632f,	// (0x00035cf8) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0003f068) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0003f068) signal_pane_stacon_g

0x6364,	// (0x00035d2d) title_pane_stacon_t1_ParamLimits

0x6364,	// (0x00035d2d) title_pane_stacon_t1

0x2b5a,	// (0x00032523) uni_indicator_pane_stacon_g1

0x2b64,	// (0x0003252d) uni_indicator_pane_stacon_g2

0x2b46,	// (0x0003250f) uni_indicator_pane_stacon_g3

0x2b50,	// (0x00032519) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0003f074) uni_indicator_pane_stacon_g

0x6389,	// (0x00035d52) control_top_pane_stacon_g1

0x6391,	// (0x00035d5a) control_top_pane_stacon_t1_ParamLimits

0x6391,	// (0x00035d5a) control_top_pane_stacon_t1

0x63c8,	// (0x00035d91) aid_levels_battery_lsc_ParamLimits

0x63c8,	// (0x00035d91) aid_levels_battery_lsc

0x63e0,	// (0x00035da9) battery_pane_stacon_g1_ParamLimits

0x63e0,	// (0x00035da9) battery_pane_stacon_g1

0x63f2,	// (0x00035dbb) battery_pane_stacon_g2_ParamLimits

0x63f2,	// (0x00035dbb) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0003f07d) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0003f07d) battery_pane_stacon_g

0x6430,	// (0x00035df9) navi_icon_pane_stacon

0x6444,	// (0x00035e0d) navi_navi_pane_stacon

0x6430,	// (0x00035df9) navi_text_pane_stacon

0x645a,	// (0x00035e23) control_bottom_pane_stacon_g1

0x6462,	// (0x00035e2b) control_bottom_pane_stacon_t1_ParamLimits

0x6462,	// (0x00035e2b) control_bottom_pane_stacon_t1

0x6499,	// (0x00035e62) grid_app_pane_ParamLimits

0x6499,	// (0x00035e62) grid_app_pane

0x64bb,	// (0x00035e84) scroll_pane_cp15_ParamLimits

0x64bb,	// (0x00035e84) scroll_pane_cp15

0x64ce,	// (0x00035e97) cell_app_pane_ParamLimits

0x64ce,	// (0x00035e97) cell_app_pane

0x64fa,	// (0x00035ec3) cell_app_pane_g1_ParamLimits

0x64fa,	// (0x00035ec3) cell_app_pane_g1

0x651e,	// (0x00035ee7) cell_app_pane_g2_ParamLimits

0x651e,	// (0x00035ee7) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0003f082) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0003f082) cell_app_pane_g

0x652a,	// (0x00035ef3) cell_app_pane_t1_ParamLimits

0x652a,	// (0x00035ef3) cell_app_pane_t1

0x655b,	// (0x00035f24) grid_highlight_pane_ParamLimits

0x655b,	// (0x00035f24) grid_highlight_pane

0x28b2,	// (0x0003227b) cell_highlight_pane_g1

0x28ba,	// (0x00032283) cell_highlight_pane_g2

0x28c2,	// (0x0003228b) cell_highlight_pane_g3

0x28ca,	// (0x00032293) cell_highlight_pane_g4

0x28d2,	// (0x0003229b) cell_highlight_pane_g5

0x28da,	// (0x000322a3) cell_highlight_pane_g6

0x28e2,	// (0x000322ab) cell_highlight_pane_g7

0x28ea,	// (0x000322b3) cell_highlight_pane_g8

0x28f2,	// (0x000322bb) cell_highlight_pane_g9

0x21b2,	// (0x00031b7b) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0003f030) cell_highlight_pane_g

0x657f,	// (0x00035f48) bg_scroll_pane

0x659e,	// (0x00035f67) scroll_handle_pane

0x65ef,	// (0x00035fb8) scroll_bg_pane_g1

0x6604,	// (0x00035fcd) scroll_bg_pane_g2

0x661c,	// (0x00035fe5) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0003f087) scroll_bg_pane_g

0x6631,	// (0x00035ffa) scroll_handle_focus_pane_ParamLimits

0x6631,	// (0x00035ffa) scroll_handle_focus_pane

0x65ef,	// (0x00035fb8) scroll_handle_pane_g1

0x663e,	// (0x00036007) scroll_handle_pane_g2

0x661c,	// (0x00035fe5) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0003f08e) scroll_handle_pane_g

0x2941,	// (0x0003230a) bg_popup_sub_pane_cp21_ParamLimits

0x2941,	// (0x0003230a) bg_popup_sub_pane_cp21

0x6652,	// (0x0003601b) popup_fep_japan_predictive_window_t1_ParamLimits

0x6652,	// (0x0003601b) popup_fep_japan_predictive_window_t1

0x6669,	// (0x00036032) popup_fep_japan_predictive_window_t2_ParamLimits

0x6669,	// (0x00036032) popup_fep_japan_predictive_window_t2

0x669c,	// (0x00036065) popup_fep_japan_predictive_window_t3_ParamLimits

0x669c,	// (0x00036065) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0003f095) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0003f095) popup_fep_japan_predictive_window_t

0x21bc,	// (0x00031b85) bg_popup_sub_pane_cp23

0x66d3,	// (0x0003609c) listscroll_japin_cand_pane

0x66db,	// (0x000360a4) popup_fep_japan_candidate_window_t1

0x66e9,	// (0x000360b2) candidate_pane_ParamLimits

0x66e9,	// (0x000360b2) candidate_pane

0x66fb,	// (0x000360c4) scroll_pane_cp30

0x6705,	// (0x000360ce) list_single_popup_jap_candidate_pane_ParamLimits

0x6705,	// (0x000360ce) list_single_popup_jap_candidate_pane

0x21bc,	// (0x00031b85) list_highlight_pane_cp30

0x6719,	// (0x000360e2) list_single_popup_jap_candidate_pane_t1

0x6728,	// (0x000360f1) level_1_signal

0x6735,	// (0x000360fe) level_2_signal

0x6742,	// (0x0003610b) level_3_signal

0x674f,	// (0x00036118) level_4_signal

0x675c,	// (0x00036125) level_5_signal

0x6769,	// (0x00036132) level_6_signal

0x6776,	// (0x0003613f) level_7_signal

0x6728,	// (0x000360f1) level_1_battery

0x6735,	// (0x000360fe) level_2_battery

0x6742,	// (0x0003610b) level_3_battery

0x674f,	// (0x00036118) level_4_battery

0x675c,	// (0x00036125) level_5_battery

0x6769,	// (0x00036132) level_6_battery

0x6776,	// (0x0003613f) level_7_battery

0x67ba,	// (0x00036183) list_menu_pane_ParamLimits

0x67ba,	// (0x00036183) list_menu_pane

0x67d0,	// (0x00036199) scroll_pane_cp25_ParamLimits

0x67d0,	// (0x00036199) scroll_pane_cp25

0x67e9,	// (0x000361b2) list_double2_graphic_pane_cp2_ParamLimits

0x67e9,	// (0x000361b2) list_double2_graphic_pane_cp2

0x67e9,	// (0x000361b2) list_double2_large_graphic_pane_cp2_ParamLimits

0x67e9,	// (0x000361b2) list_double2_large_graphic_pane_cp2

0x67e9,	// (0x000361b2) list_double2_pane_cp2_ParamLimits

0x67e9,	// (0x000361b2) list_double2_pane_cp2

0x67e9,	// (0x000361b2) list_double_graphic_pane_cp2_ParamLimits

0x67e9,	// (0x000361b2) list_double_graphic_pane_cp2

0x67e9,	// (0x000361b2) list_double_large_graphic_pane_cp2_ParamLimits

0x67e9,	// (0x000361b2) list_double_large_graphic_pane_cp2

0x67e9,	// (0x000361b2) list_double_number_pane_cp2_ParamLimits

0x67e9,	// (0x000361b2) list_double_number_pane_cp2

0x67e9,	// (0x000361b2) list_double_pane_cp2_ParamLimits

0x67e9,	// (0x000361b2) list_double_pane_cp2

0x680f,	// (0x000361d8) list_single_2graphic_pane_cp2_ParamLimits

0x680f,	// (0x000361d8) list_single_2graphic_pane_cp2

0x680f,	// (0x000361d8) list_single_graphic_heading_pane_cp2_ParamLimits

0x680f,	// (0x000361d8) list_single_graphic_heading_pane_cp2

0x680f,	// (0x000361d8) list_single_graphic_pane_cp2_ParamLimits

0x680f,	// (0x000361d8) list_single_graphic_pane_cp2

0x680f,	// (0x000361d8) list_single_heading_pane_cp2_ParamLimits

0x680f,	// (0x000361d8) list_single_heading_pane_cp2

0x682c,	// (0x000361f5) list_single_large_graphic_pane_cp2_ParamLimits

0x682c,	// (0x000361f5) list_single_large_graphic_pane_cp2

0x680f,	// (0x000361d8) list_single_number_heading_pane_cp2_ParamLimits

0x680f,	// (0x000361d8) list_single_number_heading_pane_cp2

0x680f,	// (0x000361d8) list_single_number_pane_cp2_ParamLimits

0x680f,	// (0x000361d8) list_single_number_pane_cp2

0x683c,	// (0x00036205) list_single_pane_cp2_ParamLimits

0x683c,	// (0x00036205) list_single_pane_cp2

0x6912,	// (0x000362db) bg_popup_sub_pane_cp22

0x6937,	// (0x00036300) popup_side_volume_key_window_g1

0x6961,	// (0x0003632a) popup_side_volume_key_window_t1

0x697f,	// (0x00036348) volume_small_pane_cp1

0x220a,	// (0x00031bd3) bg_popup_sub_pane_cp24_ParamLimits

0x220a,	// (0x00031bd3) bg_popup_sub_pane_cp24

0x6987,	// (0x00036350) fep_china_uni_candidate_pane_ParamLimits

0x6987,	// (0x00036350) fep_china_uni_candidate_pane

0x699b,	// (0x00036364) fep_china_uni_entry_pane

0x69ab,	// (0x00036374) popup_fep_china_uni_window_g1

0x69c7,	// (0x00036390) fep_china_uni_entry_pane_g1

0x69d1,	// (0x0003639a) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0003f0c6) fep_china_uni_entry_pane_g

0x69db,	// (0x000363a4) fep_entry_item_pane

0x69e5,	// (0x000363ae) fep_candidate_item_pane

0x69ed,	// (0x000363b6) fep_china_uni_candidate_pane_g1

0x69f7,	// (0x000363c0) fep_china_uni_candidate_pane_g2

0x69ff,	// (0x000363c8) fep_china_uni_candidate_pane_g3

0x6a07,	// (0x000363d0) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0003f0cb) fep_china_uni_candidate_pane_g

0x21b2,	// (0x00031b7b) fep_entry_item_pane_g1

0x6a11,	// (0x000363da) fep_entry_item_pane_t1_ParamLimits

0x6a11,	// (0x000363da) fep_entry_item_pane_t1

0x6a27,	// (0x000363f0) fep_candidate_item_pane_t1_ParamLimits

0x6a27,	// (0x000363f0) fep_candidate_item_pane_t1

0x6a3c,	// (0x00036405) fep_candidate_item_pane_t2_ParamLimits

0x6a3c,	// (0x00036405) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0003f0d4) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0003f0d4) fep_candidate_item_pane_t

0x2218,	// (0x00031be1) list_highlight_pane_cp31_ParamLimits

0x2218,	// (0x00031be1) list_highlight_pane_cp31

0x6a4e,	// (0x00036417) level_1_signal_lsc

0x6a57,	// (0x00036420) level_2_signal_lsc

0x6a60,	// (0x00036429) level_3_signal_lsc

0x6a69,	// (0x00036432) level_4_signal_lsc

0x6a72,	// (0x0003643b) level_5_signal_lsc

0x6a7b,	// (0x00036444) level_6_signal_lsc

0x6a84,	// (0x0003644d) level_7_signal_lsc

0x6a84,	// (0x0003644d) level_1_battery_lsc

0x6a8d,	// (0x00036456) level_2_battery_lsc

0x6a96,	// (0x0003645f) level_3_battery_lsc

0x6a9f,	// (0x00036468) level_4_battery_lsc

0x6aa8,	// (0x00036471) level_5_battery_lsc

0x6ab1,	// (0x0003647a) level_6_battery_lsc

0x6a4e,	// (0x00036417) level_7_battery_lsc

0x6aba,	// (0x00036483) scroll_handle_focus_pane_g1

0x6ac3,	// (0x0003648c) scroll_handle_focus_pane_g2

0x6acc,	// (0x00036495) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0003f0d9) scroll_handle_focus_pane_g

0x6ad5,	// (0x0003649e) list_single_2graphic_pane_g1_ParamLimits

0x6ad5,	// (0x0003649e) list_single_2graphic_pane_g1

0x5cfd,	// (0x000356c6) list_single_2graphic_pane_g2_ParamLimits

0x5cfd,	// (0x000356c6) list_single_2graphic_pane_g2

0x5c83,	// (0x0003564c) list_single_2graphic_pane_g3_ParamLimits

0x5c83,	// (0x0003564c) list_single_2graphic_pane_g3

0x6ae1,	// (0x000364aa) list_single_2graphic_pane_g4_ParamLimits

0x6ae1,	// (0x000364aa) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0003f0e0) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0003f0e0) list_single_2graphic_pane_g

0x6aed,	// (0x000364b6) list_single_2graphic_pane_t1_ParamLimits

0x6aed,	// (0x000364b6) list_single_2graphic_pane_t1

0x6b1b,	// (0x000364e4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6b1b,	// (0x000364e4) list_double2_graphic_large_graphic_pane_g1

0x5d96,	// (0x0003575f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5d96,	// (0x0003575f) list_double2_graphic_large_graphic_pane_g2

0x5da7,	// (0x00035770) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5da7,	// (0x00035770) list_double2_graphic_large_graphic_pane_g3

0x6b2d,	// (0x000364f6) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6b2d,	// (0x000364f6) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0003f0e9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0003f0e9) list_double2_graphic_large_graphic_pane_g

0x6b39,	// (0x00036502) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6b39,	// (0x00036502) list_double2_graphic_large_graphic_pane_t1

0x6b4f,	// (0x00036518) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6b4f,	// (0x00036518) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0003f0f2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0003f0f2) list_double2_graphic_large_graphic_pane_t

0x8e87,	// (0x00038850) popup_fast_swap_window_ParamLimits

0x8e87,	// (0x00038850) popup_fast_swap_window

0x8ea5,	// (0x0003886e) popup_side_volume_key_window

0x8ec3,	// (0x0003888c) stacon_top_pane

0x8ecd,	// (0x00038896) status_pane_ParamLimits

0x8ecd,	// (0x00038896) status_pane

0x21a8,	// (0x00031b71) status_small_pane

0x21bc,	// (0x00031b85) control_pane

0x21bc,	// (0x00031b85) stacon_bottom_pane

0x283d,	// (0x00032206) scroll_pane_cp121

0x2834,	// (0x000321fd) set_content_pane

0x6b61,	// (0x0003652a) bg_active_tab_pane_g1_cp1

0x6b6a,	// (0x00036533) bg_active_tab_pane_g2_cp1

0x6b73,	// (0x0003653c) bg_active_tab_pane_g3_cp1

0x6b61,	// (0x0003652a) bg_passive_tab_pane_g1_cp1

0x6b6a,	// (0x00036533) bg_passive_tab_pane_g2_cp1

0x6b73,	// (0x0003653c) bg_passive_tab_pane_g3_cp1

0x6b7c,	// (0x00036545) bg_active_tab_pane_g1_cp2

0x6b6a,	// (0x00036533) bg_active_tab_pane_g2_cp2

0x6b85,	// (0x0003654e) bg_active_tab_pane_g3_cp2

0x6b7c,	// (0x00036545) bg_passive_tab_pane_g1_cp2

0x6b6a,	// (0x00036533) bg_passive_tab_pane_g2_cp2

0x6b85,	// (0x0003654e) bg_passive_tab_pane_g3_cp2

0x6b8e,	// (0x00036557) bg_active_tab_pane_g1_cp3

0x6b6a,	// (0x00036533) bg_active_tab_pane_g2_cp3

0x6b97,	// (0x00036560) bg_active_tab_pane_g3_cp3

0x6b8e,	// (0x00036557) bg_passive_tab_pane_g1_cp3

0x6b6a,	// (0x00036533) bg_passive_tab_pane_g2_cp3

0x6b97,	// (0x00036560) bg_passive_tab_pane_g3_cp3

0x6ba0,	// (0x00036569) bg_active_tab_pane_g1_cp4

0x6b6a,	// (0x00036533) bg_active_tab_pane_g2_cp4

0x6bab,	// (0x00036574) bg_active_tab_pane_g3_cp4

0x6ba0,	// (0x00036569) bg_passive_tab_pane_g1_cp4

0x6b6a,	// (0x00036533) bg_passive_tab_pane_g2_cp4

0x6bab,	// (0x00036574) bg_passive_tab_pane_g3_cp4

0x8de0,	// (0x000387a9) bg_active_tab_pane_g1_cp5

0x6b6a,	// (0x00036533) bg_active_tab_pane_g2_cp5

0x8de9,	// (0x000387b2) bg_active_tab_pane_g3_cp5

0x8de0,	// (0x000387a9) bg_passive_tab_pane_g1_cp5

0x6b6a,	// (0x00036533) bg_passive_tab_pane_g2_cp5

0x8de9,	// (0x000387b2) bg_passive_tab_pane_g3_cp5

0x8df2,	// (0x000387bb) list_set_graphic_pane_ParamLimits

0x8df2,	// (0x000387bb) list_set_graphic_pane

0x21bc,	// (0x00031b85) bg_set_opt_pane_cp4

0x8e08,	// (0x000387d1) list_set_graphic_pane_g1_ParamLimits

0x8e08,	// (0x000387d1) list_set_graphic_pane_g1

0x8e14,	// (0x000387dd) list_set_graphic_pane_g2_ParamLimits

0x8e14,	// (0x000387dd) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0003f0f7) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0003f0f7) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0003f473) volume_small_pane_cp_g

0x8e38,	// (0x00038801) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e38,	// (0x00038801) list_double2_large_graphic_pane_g1_cp2

0x8e46,	// (0x0003880f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8e46,	// (0x0003880f) list_double2_large_graphic_pane_g2_cp2

0x8e57,	// (0x00038820) list_double2_large_graphic_pane_g3_cp2

0x8e5f,	// (0x00038828) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8e5f,	// (0x00038828) list_double2_large_graphic_pane_t1_cp2

0x8e75,	// (0x0003883e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8e75,	// (0x0003883e) list_double2_large_graphic_pane_t2_cp2

0xaa56,	// (0x0003a41f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaa56,	// (0x0003a41f) list_double_large_graphic_pane_g1_cp2

0xaa69,	// (0x0003a432) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaa69,	// (0x0003a432) list_double_large_graphic_pane_g2_cp2

0x8feb,	// (0x000389b4) list_double_large_graphic_pane_g3_cp2

0xaa7a,	// (0x0003a443) list_double_large_graphic_pane_g4_cp

0xaa82,	// (0x0003a44b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaa82,	// (0x0003a44b) list_double_large_graphic_pane_t1_cp2

0xaa99,	// (0x0003a462) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaa99,	// (0x0003a462) list_double_large_graphic_pane_t2_cp2

0x8edb,	// (0x000388a4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8edb,	// (0x000388a4) list_double2_graphic_pane_g1_cp2

0x8ee9,	// (0x000388b2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8ee9,	// (0x000388b2) list_double2_graphic_pane_g2_cp2

0x8efa,	// (0x000388c3) list_double2_graphic_pane_g3_cp2

0x8f04,	// (0x000388cd) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f04,	// (0x000388cd) list_double2_graphic_pane_t1_cp2

0x8f1a,	// (0x000388e3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f1a,	// (0x000388e3) list_double2_graphic_pane_t2_cp2

0x8f2c,	// (0x000388f5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8f2c,	// (0x000388f5) list_single_number_heading_pane_g1_cp2

0x8f38,	// (0x00038901) list_single_number_heading_pane_g2_cp2

0x8f40,	// (0x00038909) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f40,	// (0x00038909) list_single_number_heading_pane_t1_cp2

0x8f56,	// (0x0003891f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8f56,	// (0x0003891f) list_single_number_heading_pane_t2_cp2

0x8f6a,	// (0x00038933) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8f6a,	// (0x00038933) list_single_number_heading_pane_t3_cp2

0x8f2c,	// (0x000388f5) list_single_heading_pane_g1_cp2_ParamLimits

0x8f2c,	// (0x000388f5) list_single_heading_pane_g1_cp2

0x8f38,	// (0x00038901) list_single_heading_pane_g2_cp2

0x8f40,	// (0x00038909) list_single_heading_pane_t1_cp2_ParamLimits

0x8f40,	// (0x00038909) list_single_heading_pane_t1_cp2

0xa850,	// (0x0003a219) list_single_heading_pane_t2_cp2_ParamLimits

0xa850,	// (0x0003a219) list_single_heading_pane_t2_cp2

0xa798,	// (0x0003a161) list_double_graphic_pane_g1_cp2_ParamLimits

0xa798,	// (0x0003a161) list_double_graphic_pane_g1_cp2

0xa7a4,	// (0x0003a16d) list_double_graphic_pane_g2_cp2_ParamLimits

0xa7a4,	// (0x0003a16d) list_double_graphic_pane_g2_cp2

0xa7b3,	// (0x0003a17c) list_double_graphic_pane_g3_cp2

0xa7bb,	// (0x0003a184) list_double_graphic_pane_t1_cp2_ParamLimits

0xa7bb,	// (0x0003a184) list_double_graphic_pane_t1_cp2

0xa7d1,	// (0x0003a19a) list_double_graphic_pane_t2_cp2_ParamLimits

0xa7d1,	// (0x0003a19a) list_double_graphic_pane_t2_cp2

0x8fdf,	// (0x000389a8) list_double_number_pane_g1_cp2_ParamLimits

0x8fdf,	// (0x000389a8) list_double_number_pane_g1_cp2

0x8feb,	// (0x000389b4) list_double_number_pane_g2_cp2

0xa75c,	// (0x0003a125) list_double_number_pane_t1_cp2_ParamLimits

0xa75c,	// (0x0003a125) list_double_number_pane_t1_cp2

0xa770,	// (0x0003a139) list_double_number_pane_t2_cp2_ParamLimits

0xa770,	// (0x0003a139) list_double_number_pane_t2_cp2

0xa786,	// (0x0003a14f) list_double_number_pane_t3_cp2_ParamLimits

0xa786,	// (0x0003a14f) list_double_number_pane_t3_cp2

0xa645,	// (0x0003a00e) list_single_graphic_pane_g1_cp2_ParamLimits

0xa645,	// (0x0003a00e) list_single_graphic_pane_g1_cp2

0x9050,	// (0x00038a19) list_single_graphic_pane_g2_cp2_ParamLimits

0x9050,	// (0x00038a19) list_single_graphic_pane_g2_cp2

0x905c,	// (0x00038a25) list_single_graphic_pane_g3_cp2

0xa61b,	// (0x00039fe4) list_single_graphic_pane_t1_cp2_ParamLimits

0xa61b,	// (0x00039fe4) list_single_graphic_pane_t1_cp2

0x9050,	// (0x00038a19) list_single_number_pane_g1_cp2_ParamLimits

0x9050,	// (0x00038a19) list_single_number_pane_g1_cp2

0x905c,	// (0x00038a25) list_single_number_pane_g2_cp2

0xa61b,	// (0x00039fe4) list_single_number_pane_t1_cp2_ParamLimits

0xa61b,	// (0x00039fe4) list_single_number_pane_t1_cp2

0xa631,	// (0x00039ffa) list_single_number_pane_t2_cp2_ParamLimits

0xa631,	// (0x00039ffa) list_single_number_pane_t2_cp2

0x8e46,	// (0x0003880f) list_double2_pane_g1_cp2_ParamLimits

0x8e46,	// (0x0003880f) list_double2_pane_g1_cp2

0x8e57,	// (0x00038820) list_double2_pane_g2_cp2

0x8fb7,	// (0x00038980) list_double2_pane_t1_cp2_ParamLimits

0x8fb7,	// (0x00038980) list_double2_pane_t1_cp2

0x8fcd,	// (0x00038996) list_double2_pane_t2_cp2_ParamLimits

0x8fcd,	// (0x00038996) list_double2_pane_t2_cp2

0x8fdf,	// (0x000389a8) list_double_pane_g1_cp2_ParamLimits

0x8fdf,	// (0x000389a8) list_double_pane_g1_cp2

0x8feb,	// (0x000389b4) list_double_pane_g2_cp2

0x8ff3,	// (0x000389bc) list_double_pane_t1_cp2_ParamLimits

0x8ff3,	// (0x000389bc) list_double_pane_t1_cp2

0x9009,	// (0x000389d2) list_double_pane_t2_cp2_ParamLimits

0x9009,	// (0x000389d2) list_double_pane_t2_cp2

0x9040,	// (0x00038a09) list_single_pane_cp2_g3

0x9050,	// (0x00038a19) list_single_pane_g1_cp2_ParamLimits

0x9050,	// (0x00038a19) list_single_pane_g1_cp2

0x905c,	// (0x00038a25) list_single_pane_g2_cp2

0x9064,	// (0x00038a2d) list_single_pane_t1_cp2_ParamLimits

0x9064,	// (0x00038a2d) list_single_pane_t1_cp2

0x907c,	// (0x00038a45) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x907c,	// (0x00038a45) list_single_large_graphic_pane_g1_cp2

0x908a,	// (0x00038a53) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x908a,	// (0x00038a53) list_single_large_graphic_pane_g2_cp2

0x9096,	// (0x00038a5f) list_single_large_graphic_pane_g3_cp2

0x909e,	// (0x00038a67) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x909e,	// (0x00038a67) list_single_large_graphic_pane_g4_cp1

0x90b8,	// (0x00038a81) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90b8,	// (0x00038a81) list_single_large_graphic_pane_t1_cp2

0xa5e5,	// (0x00039fae) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa5e5,	// (0x00039fae) list_single_graphic_heading_pane_g1_cp2

0xa5b2,	// (0x00039f7b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa5b2,	// (0x00039f7b) list_single_graphic_heading_pane_g4_cp2

0x905c,	// (0x00038a25) list_single_graphic_heading_pane_g5_cp2

0xa5f1,	// (0x00039fba) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa5f1,	// (0x00039fba) list_single_graphic_heading_pane_t1_cp2

0xa607,	// (0x00039fd0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa607,	// (0x00039fd0) list_single_graphic_heading_pane_t2_cp2

0xa5a6,	// (0x00039f6f) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa5a6,	// (0x00039f6f) list_single_2graphic_pane_g1_cp2

0xa5b2,	// (0x00039f7b) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa5b2,	// (0x00039f7b) list_single_2graphic_pane_g2_cp2

0x905c,	// (0x00038a25) list_single_2graphic_pane_g3_cp2

0xa5c3,	// (0x00039f8c) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa5c3,	// (0x00039f8c) list_single_2graphic_pane_g4_cp2

0xa5cf,	// (0x00039f98) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa5cf,	// (0x00039f98) list_single_2graphic_pane_t1_cp2

0x21b2,	// (0x00031b7b) list_highlight_pane_g10_cp1

0xa17e,	// (0x00039b47) list_highlight_pane_g1_cp1

0xa186,	// (0x00039b4f) list_highlight_pane_g2_cp1

0xa18e,	// (0x00039b57) list_highlight_pane_g3_cp1

0xa196,	// (0x00039b5f) list_highlight_pane_g4_cp1

0xa19e,	// (0x00039b67) list_highlight_pane_g5_cp1

0xa1a6,	// (0x00039b6f) list_highlight_pane_g6_cp1

0xa1ae,	// (0x00039b77) list_highlight_pane_g7_cp1

0xa1b6,	// (0x00039b7f) list_highlight_pane_g8_cp1

0xa1be,	// (0x00039b87) list_highlight_pane_g9_cp1

0xa09e,	// (0x00039a67) form_field_slider_pane_t3

0xa0ac,	// (0x00039a75) form_field_slider_pane_t4

0xa0ba,	// (0x00039a83) slider_form_pane_ParamLimits

0xa0ba,	// (0x00039a83) slider_form_pane

0x21bc,	// (0x00031b85) control_abbreviations

0x21bc,	// (0x00031b85) control_conventions

0x21bc,	// (0x00031b85) control_definitions

0x21bc,	// (0x00031b85) format_table_attribute

0xa8a6,	// (0x0003a26f) bg_popup_preview_window_pane_g9

0x21bc,	// (0x00031b85) format_table_data2

0x21bc,	// (0x00031b85) format_table_data3

0x21bc,	// (0x00031b85) format_table_data_example

0x0008,

0x21bc,	// (0x00031b85) intro_purpose

0xf8ca,	// (0x0003f293) bg_popup_preview_window_pane_g

0x21bc,	// (0x00031b85) texts_category

0x21bc,	// (0x00031b85) texts_graphics

0x90ce,	// (0x00038a97) text_digital

0x90dd,	// (0x00038aa6) text_primary

0x90ec,	// (0x00038ab5) text_primary_small

0x90fb,	// (0x00038ac4) text_secondary

0x910a,	// (0x00038ad3) text_title

0xb020,	// (0x0003a9e9) bg_passive_tab_pane_g1_cp3_srt

0x6b6a,	// (0x00036533) bg_passive_tab_pane_g2_cp3_srt

0xb029,	// (0x0003a9f2) bg_passive_tab_pane_g3_cp3_srt

0x2218,	// (0x00031be1) bg_active_tab_pane_cp3_srt_ParamLimits

0x2218,	// (0x00031be1) bg_active_tab_pane_cp3_srt

0xb032,	// (0x0003a9fb) tabs_4_active_pane_srt_g1

0xb03a,	// (0x0003aa03) tabs_4_active_pane_srt_t1_ParamLimits

0xb03a,	// (0x0003aa03) tabs_4_active_pane_srt_t1

0xb020,	// (0x0003a9e9) bg_active_tab_pane_g1_cp3_copy1

0x6b6a,	// (0x00036533) bg_active_tab_pane_g2_cp3_copy1

0xb029,	// (0x0003a9f2) bg_active_tab_pane_g3_cp3_copy1

0x2218,	// (0x00031be1) tabs_2_long_active_pane_srt_ParamLimits

0x2218,	// (0x00031be1) tabs_2_long_active_pane_srt

0x2218,	// (0x00031be1) tabs_2_long_passive_pane_srt_ParamLimits

0x2218,	// (0x00031be1) tabs_2_long_passive_pane_srt

0x62e6,	// (0x00035caf) bg_passive_tab_pane_cp4_srt_ParamLimits

0x62e6,	// (0x00035caf) bg_passive_tab_pane_cp4_srt

0xace0,	// (0x0003a6a9) bg_passive_tab_pane_g1_cp4_srt

0x6b6a,	// (0x00036533) bg_passive_tab_pane_g2_cp4_srt

0xace9,	// (0x0003a6b2) bg_passive_tab_pane_g3_cp4_srt

0x62c5,	// (0x00035c8e) bg_active_tab_pane_cp4_srt_ParamLimits

0x62c5,	// (0x00035c8e) bg_active_tab_pane_cp4_srt

0xacf2,	// (0x0003a6bb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xacf2,	// (0x0003a6bb) tabs_2_long_active_pane_srt_t1

0xace0,	// (0x0003a6a9) bg_active_tab_pane_g1_cp4_srt

0x6b6a,	// (0x00036533) bg_active_tab_pane_g2_cp4_srt

0xace9,	// (0x0003a6b2) bg_active_tab_pane_g3_cp4_srt

0x220a,	// (0x00031bd3) tabs_3_long_active_pane_srt_ParamLimits

0x220a,	// (0x00031bd3) tabs_3_long_active_pane_srt

0x220a,	// (0x00031bd3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x220a,	// (0x00031bd3) tabs_3_long_passive_pane_cp_srt

0x220a,	// (0x00031bd3) tabs_3_long_passive_pane_srt_ParamLimits

0x220a,	// (0x00031bd3) tabs_3_long_passive_pane_srt

0x62e6,	// (0x00035caf) bg_passive_tab_pane_cp5_srt_ParamLimits

0x62e6,	// (0x00035caf) bg_passive_tab_pane_cp5_srt

0x8de0,	// (0x000387a9) bg_passive_tab_pane_g1_cp5_srt

0x6b6a,	// (0x00036533) bg_passive_tab_pane_g2_cp5_srt

0x8de9,	// (0x000387b2) bg_passive_tab_pane_g3_cp5_srt

0x62c5,	// (0x00035c8e) bg_active_tab_pane_cp5_srt_ParamLimits

0x62c5,	// (0x00035c8e) bg_active_tab_pane_cp5_srt

0xacce,	// (0x0003a697) tabs_3_long_active_pane_srt_t1_ParamLimits

0xacce,	// (0x0003a697) tabs_3_long_active_pane_srt_t1

0x8de0,	// (0x000387a9) bg_active_tab_pane_g1_cp5_srt

0x6b6a,	// (0x00036533) bg_active_tab_pane_g2_cp5_srt

0x8de9,	// (0x000387b2) bg_active_tab_pane_g3_cp5_srt

0xacc0,	// (0x0003a689) navi_text_pane_srt_t1

0xacb8,	// (0x0003a681) navi_icon_pane_srt_g1

0x92e2,	// (0x00038cab) midp_editing_number_pane_srt

0x9119,	// (0x00038ae2) midp_ticker_pane_srt

0x92ea,	// (0x00038cb3) midp_ticker_pane_srt_g1

0x92f2,	// (0x00038cbb) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0003f116) midp_ticker_pane_srt_g

0x92fa,	// (0x00038cc3) midp_ticker_pane_srt_t1

0xaca9,	// (0x0003a672) midp_editing_number_pane_t1_copy1

0x9121,	// (0x00038aea) listscroll_midp_pane

0x9121,	// (0x00038aea) midp_form_pane

0x9190,	// (0x00038b59) midp_info_popup_window_ParamLimits

0x9190,	// (0x00038b59) midp_info_popup_window

0x2941,	// (0x0003230a) bg_popup_sub_pane_cp50_ParamLimits

0x2941,	// (0x0003230a) bg_popup_sub_pane_cp50

0x9da0,	// (0x00039769) listscroll_midp_info_pane_ParamLimits

0x9da0,	// (0x00039769) listscroll_midp_info_pane

0x9d80,	// (0x00039749) listscroll_form_midp_pane_ParamLimits

0x9d80,	// (0x00039749) listscroll_form_midp_pane

0x9d8c,	// (0x00039755) scroll_bar_cp050

0x9d60,	// (0x00039729) list_midp_pane

0xbad4,	// (0x0003b49d) signal_pane_g2_cp

0x9c9a,	// (0x00039663) listscroll_midp_info_pane_t1_ParamLimits

0x9c9a,	// (0x00039663) listscroll_midp_info_pane_t1

0x9cb2,	// (0x0003967b) listscroll_midp_info_pane_t2_ParamLimits

0x9cb2,	// (0x0003967b) listscroll_midp_info_pane_t2

0x9cf0,	// (0x000396b9) listscroll_midp_info_pane_t3_ParamLimits

0x9cf0,	// (0x000396b9) listscroll_midp_info_pane_t3

0x9d2a,	// (0x000396f3) listscroll_midp_info_pane_t4_ParamLimits

0x9d2a,	// (0x000396f3) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0003f1ce) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0003f1ce) listscroll_midp_info_pane_t

0x2996,	// (0x0003235f) scroll_pane_cp21

0x9c34,	// (0x000395fd) form_midp_field_choice_group_pane

0x9c3d,	// (0x00039606) form_midp_field_text_pane

0x9c80,	// (0x00039649) form_midp_field_time_pane

0x9c88,	// (0x00039651) form_midp_gauge_slider_pane

0x9c91,	// (0x0003965a) form_midp_gauge_wait_pane

0x21bc,	// (0x00031b85) form_midp_image_pane

0x766f,	// (0x00037038) list_single_midp_pane_ParamLimits

0x766f,	// (0x00037038) list_single_midp_pane

0x9bf8,	// (0x000395c1) form_midp_field_text_pane_t1

0x99ea,	// (0x000393b3) input_focus_pane_cp050

0x9c23,	// (0x000395ec) list_midp_form_text_pane

0x9bc7,	// (0x00039590) form_midp_field_choice_group_pane_t1

0x9bd5,	// (0x0003959e) input_focus_pane_cp051

0x9be9,	// (0x000395b2) list_midp_choice_pane

0x21bc,	// (0x00031b85) status_idle_pane

0x9bab,	// (0x00039574) form_midp_field_time_pane_t1

0x21b2,	// (0x00031b7b) wait_anim_pane_g2_copy1

0x9bb9,	// (0x00039582) form_midp_field_time_pane_t2

0x0001,

0x9240,	// (0x00038c09) aid_navinavi_width_2_pane

0xf800,	// (0x0003f1c9) form_midp_field_time_pane_t

0x21bc,	// (0x00031b85) input_focus_pane_cp052

0x21bc,	// (0x00031b85) bg_input_focus_pane_cp040

0x9b6b,	// (0x00039534) form_midp_gauge_slider_pane_t1

0x9b79,	// (0x00039542) form_midp_gauge_slider_pane_t2

0x9b87,	// (0x00039550) form_midp_gauge_slider_pane_t3

0x9b95,	// (0x0003955e) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0003f1c0) form_midp_gauge_slider_pane_t

0x9ba3,	// (0x0003956c) form_midp_slider_pane

0x2218,	// (0x00031be1) bg_input_focus_pane_cp041_ParamLimits

0x2218,	// (0x00031be1) bg_input_focus_pane_cp041

0x9b38,	// (0x00039501) form_midp_gauge_wait_pane_t1_ParamLimits

0x9b38,	// (0x00039501) form_midp_gauge_wait_pane_t1

0x9b4a,	// (0x00039513) form_midp_gauge_wait_pane_t2_ParamLimits

0x9b4a,	// (0x00039513) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0003f1bb) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0003f1bb) form_midp_gauge_wait_pane_t

0x9b5c,	// (0x00039525) form_midp_wait_pane_ParamLimits

0x9b5c,	// (0x00039525) form_midp_wait_pane

0x9b00,	// (0x000394c9) form_midp_image_pane_g1

0x9b09,	// (0x000394d2) form_midp_image_pane_t1

0x9b18,	// (0x000394e1) form_midp_image_pane_t2

0x9b27,	// (0x000394f0) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0003f1b4) form_midp_image_pane_t

0x9af7,	// (0x000394c0) list_single_midp_pane_g1

0x429c,	// (0x00033c65) list_single_midp_pane_t1

0x9add,	// (0x000394a6) list_midp_form_item_pane_ParamLimits

0x9add,	// (0x000394a6) list_midp_form_item_pane

0x91e8,	// (0x00038bb1) list_midp_form_item_pane_t1

0x91f7,	// (0x00038bc0) midp_ticker_pane_g1

0x9203,	// (0x00038bcc) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0003f0fc) midp_ticker_pane_g

0x920f,	// (0x00038bd8) midp_ticker_pane_t1

0xaf16,	// (0x0003a8df) midp_editing_number_pane_t1

0xaef4,	// (0x0003a8bd) midp_editing_number_pane

0xaf03,	// (0x0003a8cc) midp_ticker_pane

0xac99,	// (0x0003a662) ai_message_heading_pane

0x21bc,	// (0x00031b85) bg_popup_window_pane_cp14

0xaca1,	// (0x0003a66a) listscroll_ai_message_pane

0xac1f,	// (0x0003a5e8) ai_message_heading_pane_g1_ParamLimits

0xac1f,	// (0x0003a5e8) ai_message_heading_pane_g1

0xac2b,	// (0x0003a5f4) ai_message_heading_pane_g2_ParamLimits

0xac2b,	// (0x0003a5f4) ai_message_heading_pane_g2

0xac39,	// (0x0003a602) ai_message_heading_pane_g3_ParamLimits

0xac39,	// (0x0003a602) ai_message_heading_pane_g3

0xac45,	// (0x0003a60e) ai_message_heading_pane_g4_ParamLimits

0xac45,	// (0x0003a60e) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0003f2f5) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0003f2f5) ai_message_heading_pane_g

0xac51,	// (0x0003a61a) ai_message_heading_pane_t1_ParamLimits

0xac51,	// (0x0003a61a) ai_message_heading_pane_t1

0xac6b,	// (0x0003a634) ai_message_heading_pane_t2_ParamLimits

0xac6b,	// (0x0003a634) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0003f2fe) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0003f2fe) ai_message_heading_pane_t

0xac7f,	// (0x0003a648) bg_popup_heading_pane_cp1_ParamLimits

0xac7f,	// (0x0003a648) bg_popup_heading_pane_cp1

0xac0d,	// (0x0003a5d6) list_ai_message_pane_ParamLimits

0xac0d,	// (0x0003a5d6) list_ai_message_pane

0x2996,	// (0x0003235f) scroll_pane_cp10

0xaba9,	// (0x0003a572) list_ai_message_pane_g1

0xabb1,	// (0x0003a57a) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0003f2d2) list_ai_message_pane_g

0xabb9,	// (0x0003a582) list_ai_message_pane_t1_ParamLimits

0xabb9,	// (0x0003a582) list_ai_message_pane_t1

0xabce,	// (0x0003a597) list_ai_message_pane_t2_ParamLimits

0xabce,	// (0x0003a597) list_ai_message_pane_t2

0xabe3,	// (0x0003a5ac) list_ai_message_pane_t3_ParamLimits

0xabe3,	// (0x0003a5ac) list_ai_message_pane_t3

0xabf8,	// (0x0003a5c1) list_ai_message_pane_t4_ParamLimits

0xabf8,	// (0x0003a5c1) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0003f2d7) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0003f2d7) list_ai_message_pane_t

0xab92,	// (0x0003a55b) cell_ai_soft_ind_pane_ParamLimits

0xab92,	// (0x0003a55b) cell_ai_soft_ind_pane

0x9221,	// (0x00038bea) cell_ai_soft_ind_pane_g1_ParamLimits

0x9221,	// (0x00038bea) cell_ai_soft_ind_pane_g1

0x21bc,	// (0x00031b85) grid_highlight_cp1

0x922e,	// (0x00038bf7) text_secondary_cp56_ParamLimits

0x922e,	// (0x00038bf7) text_secondary_cp56

0xab67,	// (0x0003a530) example_general_pane_ParamLimits

0xab67,	// (0x0003a530) example_general_pane

0xab73,	// (0x0003a53c) example_parent_pane_g1_ParamLimits

0xab73,	// (0x0003a53c) example_parent_pane_g1

0xab7f,	// (0x0003a548) example_parent_pane_t1_ParamLimits

0xab7f,	// (0x0003a548) example_parent_pane_t1

0x72be,	// (0x00036c87) popup_preview_text_window_ParamLimits

0x72be,	// (0x00036c87) popup_preview_text_window

0x9048,	// (0x00038a11) list_single_pane_cp2_g4

0x2419,	// (0x00031de2) bg_popup_preview_window_pane_ParamLimits

0x2419,	// (0x00031de2) bg_popup_preview_window_pane

0xa8b0,	// (0x0003a279) popup_preview_text_window_t1_ParamLimits

0xa8b0,	// (0x0003a279) popup_preview_text_window_t1

0xa8ce,	// (0x0003a297) popup_preview_text_window_t2_ParamLimits

0xa8ce,	// (0x0003a297) popup_preview_text_window_t2

0xa917,	// (0x0003a2e0) popup_preview_text_window_t3_ParamLimits

0xa917,	// (0x0003a2e0) popup_preview_text_window_t3

0xa95c,	// (0x0003a325) popup_preview_text_window_t4_ParamLimits

0xa95c,	// (0x0003a325) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0003f2a6) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0003f2a6) popup_preview_text_window_t

0xa9da,	// (0x0003a3a3) scroll_pane_cp11

0x9976,	// (0x0003933f) bg_popup_preview_window_pane_g1

0xa864,	// (0x0003a22d) bg_popup_preview_window_pane_g2

0xa86e,	// (0x0003a237) bg_popup_preview_window_pane_g3

0xa878,	// (0x0003a241) bg_popup_preview_window_pane_g4

0xa882,	// (0x0003a24b) bg_popup_preview_window_pane_g5

0xa88c,	// (0x0003a255) bg_popup_preview_window_pane_g6

0xa894,	// (0x0003a25d) bg_popup_preview_window_pane_g7

0xa89c,	// (0x0003a265) bg_popup_preview_window_pane_g8

0x54e1,	// (0x00034eaa) aid_popup_width_pane

0x729a,	// (0x00036c63) popup_midp_note_alarm_window_ParamLimits

0x729a,	// (0x00036c63) popup_midp_note_alarm_window

0x284e,	// (0x00032217) data_form_pane_ParamLimits

0x614d,	// (0x00035b16) form_field_data_pane_g1

0x6157,	// (0x00035b20) form_field_data_pane_t1_ParamLimits

0x285a,	// (0x00032223) input_focus_pane_ParamLimits

0x40bd,	// (0x00033a86) data_form_wide_pane_ParamLimits

0x40ce,	// (0x00033a97) form_field_data_wide_pane_g1

0x40da,	// (0x00033aa3) form_field_data_wide_pane_t1_ParamLimits

0x25d5,	// (0x00031f9e) input_focus_pane_cp6_ParamLimits

0x629d,	// (0x00035c66) input_popup_find_pane_g1_ParamLimits

0x629d,	// (0x00035c66) input_popup_find_pane_g1

0x6403,	// (0x00035dcc) aid_navi_side_left_pane

0x6418,	// (0x00035de1) aid_navi_side_right_pane

0xa279,	// (0x00039c42) bg_popup_window_pane_cp30_ParamLimits

0xa279,	// (0x00039c42) bg_popup_window_pane_cp30

0xa2f3,	// (0x00039cbc) popup_midp_note_alarm_window_g1_ParamLimits

0xa2f3,	// (0x00039cbc) popup_midp_note_alarm_window_g1

0xa323,	// (0x00039cec) popup_midp_note_alarm_window_t1_ParamLimits

0xa323,	// (0x00039cec) popup_midp_note_alarm_window_t1

0xa3c4,	// (0x00039d8d) popup_midp_note_alarm_window_t2_ParamLimits

0xa3c4,	// (0x00039d8d) popup_midp_note_alarm_window_t2

0xa472,	// (0x00039e3b) popup_midp_note_alarm_window_t3_ParamLimits

0xa472,	// (0x00039e3b) popup_midp_note_alarm_window_t3

0xa4a4,	// (0x00039e6d) popup_midp_note_alarm_window_t4_ParamLimits

0xa4a4,	// (0x00039e6d) popup_midp_note_alarm_window_t4

0xa4ca,	// (0x00039e93) popup_midp_note_alarm_window_t5_ParamLimits

0xa4ca,	// (0x00039e93) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0003f243) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0003f243) popup_midp_note_alarm_window_t

0xa576,	// (0x00039f3f) wait_bar_pane_cp1_ParamLimits

0xa576,	// (0x00039f3f) wait_bar_pane_cp1

0x21bc,	// (0x00031b85) wait_anim_pane_copy1

0x21bc,	// (0x00031b85) wait_border_pane_copy1

0x9f5e,	// (0x00039927) wait_border_pane_g1_copy1

0x40f4,	// (0x00033abd) form_field_popup_pane_g1

0x6171,	// (0x00035b3a) form_field_popup_pane_t1_ParamLimits

0x285a,	// (0x00032223) input_focus_pane_cp7_ParamLimits

0x2888,	// (0x00032251) list_form_pane_ParamLimits

0x40fc,	// (0x00033ac5) form_field_popup_wide_pane_g1

0x4104,	// (0x00033acd) form_field_popup_wide_pane_t1_ParamLimits

0x285a,	// (0x00032223) input_focus_pane_cp8_ParamLimits

0x2894,	// (0x0003225d) list_form_wide_pane_ParamLimits

0xb0bb,	// (0x0003aa84) aid_size_cell_graphic_pane

0x61f0,	// (0x00035bb9) data_form_pane_t1_ParamLimits

0x78ff,	// (0x000372c8) data_form_wide_pane_t1_ParamLimits

0x952f,	// (0x00038ef8) bg_status_flat_pane

0x5910,	// (0x000352d9) title_pane_t1_ParamLimits

0x21d2,	// (0x00031b9b) title_pane_t2_ParamLimits

0x21f8,	// (0x00031bc1) title_pane_t3_ParamLimits

0xf532,	// (0x0003eefb) title_pane_t_ParamLimits

0x6728,	// (0x000360f1) level_1_signal_ParamLimits

0x6735,	// (0x000360fe) level_2_signal_ParamLimits

0x6742,	// (0x0003610b) level_3_signal_ParamLimits

0x674f,	// (0x00036118) level_4_signal_ParamLimits

0x675c,	// (0x00036125) level_5_signal_ParamLimits

0x6769,	// (0x00036132) level_6_signal_ParamLimits

0x6776,	// (0x0003613f) level_7_signal_ParamLimits

0x6728,	// (0x000360f1) level_1_battery_ParamLimits

0x6735,	// (0x000360fe) level_2_battery_ParamLimits

0x6742,	// (0x0003610b) level_3_battery_ParamLimits

0x674f,	// (0x00036118) level_4_battery_ParamLimits

0x675c,	// (0x00036125) level_5_battery_ParamLimits

0x6769,	// (0x00036132) level_6_battery_ParamLimits

0x6776,	// (0x0003613f) level_7_battery_ParamLimits

0xa17e,	// (0x00039b47) bg_status_flat_pane_g1

0xa186,	// (0x00039b4f) bg_status_flat_pane_g2

0xa18e,	// (0x00039b57) bg_status_flat_pane_g3

0xa196,	// (0x00039b5f) bg_status_flat_pane_g4

0xa19e,	// (0x00039b67) bg_status_flat_pane_g5

0xa1a6,	// (0x00039b6f) bg_status_flat_pane_g6

0xa1ae,	// (0x00039b77) bg_status_flat_pane_g7

0x5980,	// (0x00035349) tabs_3_active_pane_t1_ParamLimits

0x5980,	// (0x00035349) tabs_3_passive_pane_t1_ParamLimits

0x599a,	// (0x00035363) tabs_4_active_pane_t1_ParamLimits

0x599a,	// (0x00035363) tabs_4_1_passive_pane_t1_ParamLimits

0x62b3,	// (0x00035c7c) tabs_2_active_pane_t1_ParamLimits

0x62b3,	// (0x00035c7c) tabs_2_passive_pane_t1_ParamLimits

0x62c5,	// (0x00035c8e) bg_active_tab_pane_cp4_ParamLimits

0x62d3,	// (0x00035c9c) tabs_2_long_active_pane_t1_ParamLimits

0x62e6,	// (0x00035caf) bg_passive_tab_pane_cp4_ParamLimits

0x75b6,	// (0x00036f7f) list_single_midp_graphic_pane_t1_ParamLimits

0x62c5,	// (0x00035c8e) bg_active_tab_pane_cp5_ParamLimits

0x62f2,	// (0x00035cbb) tabs_3_long_active_pane_t1_ParamLimits

0x62e6,	// (0x00035caf) bg_passive_tab_pane_cp5_ParamLimits

0x75b6,	// (0x00036f7f) list_single_midp_graphic_pane_t1

0x952f,	// (0x00038ef8) bg_status_flat_pane_ParamLimits

0x95fa,	// (0x00038fc3) indicator_pane_cp2_ParamLimits

0x95fa,	// (0x00038fc3) indicator_pane_cp2

0x973d,	// (0x00039106) navi_pane_srt_ParamLimits

0x973d,	// (0x00039106) navi_pane_srt

0x9761,	// (0x0003912a) popup_clock_digital_analogue_window_cp1

0x225c,	// (0x00031c25) indicator_pane_t1

0x9119,	// (0x00038ae2) copy_highlight_pane

0x9119,	// (0x00038ae2) cursor_graphics_pane

0x9119,	// (0x00038ae2) graphic_within_text_pane

0x9119,	// (0x00038ae2) link_highlight_pane

0xa99d,	// (0x0003a366) popup_preview_text_window_t5_ParamLimits

0xa99d,	// (0x0003a366) popup_preview_text_window_t5

0x924a,	// (0x00038c13) cursor_digital_pane

0x924a,	// (0x00038c13) cursor_primary_pane

0x925b,	// (0x00038c24) cursor_primary_small_pane

0x9263,	// (0x00038c2c) cursor_secondary_pane

0x926b,	// (0x00038c34) cursor_title_pane

0x924a,	// (0x00038c13) link_highlight_digital_pane

0x9252,	// (0x00038c1b) link_highlight_primary_pane

0x925b,	// (0x00038c24) link_highlight_primary_small_pane

0x9263,	// (0x00038c2c) link_highlight_secondary_pane

0x926b,	// (0x00038c34) link_highlight_title_pane

0x924a,	// (0x00038c13) copy_highlight_digital_pane

0x924a,	// (0x00038c13) copy_highlight_primary_pane

0x925b,	// (0x00038c24) copy_highlight_primary_small_pane

0x9263,	// (0x00038c2c) copy_highlight_secondary_pane

0x926b,	// (0x00038c34) copy_highlight_title_pane

0x9263,	// (0x00038c2c) graphic_text_digital_pane

0xa21c,	// (0x00039be5) graphic_text_primary_pane

0xa225,	// (0x00039bee) graphic_text_primary_small_pane

0x925b,	// (0x00038c24) graphic_text_secondary_pane

0x924a,	// (0x00038c13) graphic_text_title_pane

0x9273,	// (0x00038c3c) cursor_primary_pane_g1

0xa20e,	// (0x00039bd7) cursor_text_primary_t1

0xa1f6,	// (0x00039bbf) cursor_primary_small_pane_g1

0xa200,	// (0x00039bc9) cursor_text_primary_small_t1

0xa1de,	// (0x00039ba7) cursor_primary_small_pane_g1_copy1

0xa1e8,	// (0x00039bb1) cursor_text_primary_small_t1_copy1

0xa1c6,	// (0x00039b8f) cursor_text_title_t1

0xa1d4,	// (0x00039b9d) cursor_title_pane_g1

0x9273,	// (0x00038c3c) cursor_digital_pane_g1

0x927d,	// (0x00038c46) cursor_text_digital_t1

0x928b,	// (0x00038c54) link_highlight_primary_pane_g1

0xa16f,	// (0x00039b38) link_highlight_primary_pane_t1

0x928b,	// (0x00038c54) link_highlight_primary_small_pane_g1

0x9293,	// (0x00038c5c) link_highlight_primary_small_pane_t1

0x92a2,	// (0x00038c6b) link_highlight_secondary_pane_g1

0x92aa,	// (0x00038c73) link_highlight_secondary_pane_t1

0xa0e3,	// (0x00039aac) link_highlight_title_pane_g1

0xa0eb,	// (0x00039ab4) link_highlight_title_pane_t1

0xa0cc,	// (0x00039a95) link_highlight_digital_pane_g1

0xa0d4,	// (0x00039a9d) link_highlight_digital_pane_t1

0x9f94,	// (0x0003995d) copy_highlight_primary_pane_g1

0x9fab,	// (0x00039974) copy_highlight_primary_pane_t1

0x9f94,	// (0x0003995d) copy_highlight_primary_small_pane_g1

0x9f9c,	// (0x00039965) copy_highlight_primary_small_pane_t1

0x92b9,	// (0x00038c82) copy_highlight_secondary_pane_g1

0x92c1,	// (0x00038c8a) copy_highlight_secondary_pane_t1

0x9f7d,	// (0x00039946) copy_highlight_title_pane_g1

0x9f85,	// (0x0003994e) copy_highlight_title_pane_t1

0x9f94,	// (0x0003995d) copy_highlight_digital_pane_g1

0xb28d,	// (0x0003ac56) copy_highlight_digital_pane_t1

0xb1e1,	// (0x0003abaa) graphic_text_primary_pane_g1

0xb271,	// (0x0003ac3a) graphic_text_primary_pane_t1

0xb27f,	// (0x0003ac48) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0003f372) graphic_text_primary_pane_t

0xb24d,	// (0x0003ac16) graphic_text_primary_small_pane_g1

0xb255,	// (0x0003ac1e) graphic_text_primary_small_pane_t1

0xb263,	// (0x0003ac2c) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0003f36d) graphic_text_primary_small_pane_t

0xb229,	// (0x0003abf2) graphic_text_secondary_pane_g1

0xb231,	// (0x0003abfa) graphic_text_secondary_pane_t1

0xb23f,	// (0x0003ac08) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0003f368) graphic_text_secondary_pane_t

0xb205,	// (0x0003abce) graphic_text_title_pane_g1

0xb20d,	// (0x0003abd6) graphic_text_title_pane_t1

0xb21b,	// (0x0003abe4) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0003f363) graphic_text_title_pane_t

0xb1e1,	// (0x0003abaa) graphic_text_digital_pane_g1

0xb1e9,	// (0x0003abb2) graphic_text_digital_pane_t1

0xb1f7,	// (0x0003abc0) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0003f35e) graphic_text_digital_pane_t

0x2218,	// (0x00031be1) navi_icon_pane_srt_ParamLimits

0x2218,	// (0x00031be1) navi_icon_pane_srt

0x21bc,	// (0x00031b85) navi_midp_pane_srt

0x21bc,	// (0x00031b85) navi_navi_pane_srt

0x2218,	// (0x00031be1) navi_text_pane_srt_ParamLimits

0x2218,	// (0x00031be1) navi_text_pane_srt

0xb1ac,	// (0x0003ab75) navi_navi_icon_text_pane_srt

0xb1b4,	// (0x0003ab7d) navi_navi_pane_srt_g1_ParamLimits

0xb1b4,	// (0x0003ab7d) navi_navi_pane_srt_g1

0xb1c6,	// (0x0003ab8f) navi_navi_pane_srt_g2_ParamLimits

0xb1c6,	// (0x0003ab8f) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0003f359) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0003f359) navi_navi_pane_srt_g

0xb1d8,	// (0x0003aba1) navi_navi_tabs_pane_srt

0xb1ac,	// (0x0003ab75) navi_navi_text_pane_srt

0xb1ac,	// (0x0003ab75) navi_navi_volume_pane_srt

0xb19d,	// (0x0003ab66) navi_navi_text_pane_srt_t1

0x7a3d,	// (0x00037406) navi_navi_volume_pane_srt_g1

0x7a45,	// (0x0003740e) volume_small_pane_srt_ParamLimits

0x7a45,	// (0x0003740e) volume_small_pane_srt

0x6cf7,	// (0x000366c0) volume_small_pane_srt_g1_ParamLimits

0x6cf7,	// (0x000366c0) volume_small_pane_srt_g1

0x6d07,	// (0x000366d0) volume_small_pane_srt_g2_ParamLimits

0x6d07,	// (0x000366d0) volume_small_pane_srt_g2

0x6d18,	// (0x000366e1) volume_small_pane_srt_g3_ParamLimits

0x6d18,	// (0x000366e1) volume_small_pane_srt_g3

0x6d29,	// (0x000366f2) volume_small_pane_srt_g4_ParamLimits

0x6d29,	// (0x000366f2) volume_small_pane_srt_g4

0x6d3a,	// (0x00036703) volume_small_pane_srt_g5_ParamLimits

0x6d3a,	// (0x00036703) volume_small_pane_srt_g5

0x6d4b,	// (0x00036714) volume_small_pane_srt_g6_ParamLimits

0x6d4b,	// (0x00036714) volume_small_pane_srt_g6

0x6d5c,	// (0x00036725) volume_small_pane_srt_g7_ParamLimits

0x6d5c,	// (0x00036725) volume_small_pane_srt_g7

0x6d6d,	// (0x00036736) volume_small_pane_srt_g8_ParamLimits

0x6d6d,	// (0x00036736) volume_small_pane_srt_g8

0x6d7e,	// (0x00036747) volume_small_pane_srt_g9_ParamLimits

0x6d7e,	// (0x00036747) volume_small_pane_srt_g9

0x6d8f,	// (0x00036758) volume_small_pane_srt_g10_ParamLimits

0x6d8f,	// (0x00036758) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0003f101) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0003f101) volume_small_pane_srt_g

0x24ce,	// (0x00031e97) query_popup_data_pane_cp2

0xb183,	// (0x0003ab4c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb183,	// (0x0003ab4c) navi_navi_icon_text_pane_srt_t1

0xa21c,	// (0x00039be5) navi_tabs_2_long_pane_srt

0xa21c,	// (0x00039be5) navi_tabs_2_pane_srt

0xa21c,	// (0x00039be5) navi_tabs_3_long_pane_srt

0xa21c,	// (0x00039be5) navi_tabs_3_pane_srt

0xa21c,	// (0x00039be5) navi_tabs_4_pane_srt

0x7a1d,	// (0x000373e6) tabs_2_active_pane_srt_ParamLimits

0x7a1d,	// (0x000373e6) tabs_2_active_pane_srt

0x7a2d,	// (0x000373f6) tabs_2_passive_pane_srt_ParamLimits

0x7a2d,	// (0x000373f6) tabs_2_passive_pane_srt

0x9440,	// (0x00038e09) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9440,	// (0x00038e09) bg_passive_tab_pane_cp1_srt

0xb14f,	// (0x0003ab18) bg_passive_tab_pane_g1_cp1_srt

0x6b6a,	// (0x00036533) bg_passive_tab_pane_g2_cp1_srt

0xb158,	// (0x0003ab21) bg_passive_tab_pane_g3_cp1_srt

0x2218,	// (0x00031be1) bg_active_tab_pane_cp1_srt_ParamLimits

0x2218,	// (0x00031be1) bg_active_tab_pane_cp1_srt

0xb161,	// (0x0003ab2a) tabs_2_active_pane_srt_g1

0xb169,	// (0x0003ab32) tabs_2_active_pane_srt_t1_ParamLimits

0xb169,	// (0x0003ab32) tabs_2_active_pane_srt_t1

0xb14f,	// (0x0003ab18) bg_active_tab_pane_g1_cp1_srt

0x6b6a,	// (0x00036533) bg_active_tab_pane_g2_cp1_srt

0xb158,	// (0x0003ab21) bg_active_tab_pane_g3_cp1_srt

0x79ea,	// (0x000373b3) tabs_3_active_pane_srt_ParamLimits

0x79ea,	// (0x000373b3) tabs_3_active_pane_srt

0x79fb,	// (0x000373c4) tabs_3_passive_pane_cp_srt_ParamLimits

0x79fb,	// (0x000373c4) tabs_3_passive_pane_cp_srt

0x7a0c,	// (0x000373d5) tabs_3_passive_pane_srt_ParamLimits

0x7a0c,	// (0x000373d5) tabs_3_passive_pane_srt

0x9440,	// (0x00038e09) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9440,	// (0x00038e09) bg_passive_tab_pane_cp2_srt

0x92d0,	// (0x00038c99) bg_passive_tab_pane_g1_cp2_srt

0x6b6a,	// (0x00036533) bg_passive_tab_pane_g2_cp2_srt

0x92d9,	// (0x00038ca2) bg_passive_tab_pane_g3_cp2_srt

0x2218,	// (0x00031be1) bg_active_tab_pane_cp2_srt_ParamLimits

0x2218,	// (0x00031be1) bg_active_tab_pane_cp2_srt

0xb135,	// (0x0003aafe) tabs_3_active_pane_srt_g1

0xb13d,	// (0x0003ab06) tabs_3_active_pane_srt_t1_ParamLimits

0xb13d,	// (0x0003ab06) tabs_3_active_pane_srt_t1

0x92d0,	// (0x00038c99) bg_active_tab_pane_g1_cp2_srt

0x6b6a,	// (0x00036533) bg_active_tab_pane_g2_cp2_srt

0x92d9,	// (0x00038ca2) bg_active_tab_pane_g3_cp2_srt

0x79a2,	// (0x0003736b) tabs_4_active_pane_srt_ParamLimits

0x79a2,	// (0x0003736b) tabs_4_active_pane_srt

0x79b4,	// (0x0003737d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x79b4,	// (0x0003737d) tabs_4_passive_pane_cp2_srt

0x6ee1,	// (0x000368aa) aid_size_cell_toolbar

0x62e6,	// (0x00035caf) main_idle_act_pane_ParamLimits

0x70c0,	// (0x00036a89) popup_large_graphic_colour_window_ParamLimits

0x7467,	// (0x00036e30) popup_toolbar_window_ParamLimits

0x7467,	// (0x00036e30) popup_toolbar_window

0x42c1,	// (0x00033c8a) list_single_graphic_2heading_pane_ParamLimits

0x42c1,	// (0x00033c8a) list_single_graphic_2heading_pane

0x2b6e,	// (0x00032537) aid_size_cell_apps_grid_lsc_pane

0x2b80,	// (0x00032549) aid_size_cell_apps_grid_prt_pane

0x9440,	// (0x00038e09) bg_wml_button_pane_cp1_ParamLimits

0x9440,	// (0x00038e09) bg_wml_button_pane_cp1

0x9bf8,	// (0x000395c1) form_midp_field_text_pane_t1_ParamLimits

0x99ea,	// (0x000393b3) input_focus_pane_cp050_ParamLimits

0x9c23,	// (0x000395ec) list_midp_form_text_pane_ParamLimits

0x9bd5,	// (0x0003959e) input_focus_pane_cp051_ParamLimits

0x9be9,	// (0x000395b2) list_midp_choice_pane_ParamLimits

0x9aa3,	// (0x0003946c) list_single_2graphic_pane_cp3_ParamLimits

0x9aa3,	// (0x0003946c) list_single_2graphic_pane_cp3

0x9ab9,	// (0x00039482) list_single_midp_graphic_pane_ParamLimits

0x9ab9,	// (0x00039482) list_single_midp_graphic_pane

0x544d,	// (0x00034e16) list_single_graphic_2heading_pane_g1_ParamLimits

0x544d,	// (0x00034e16) list_single_graphic_2heading_pane_g1

0x5459,	// (0x00034e22) list_single_graphic_2heading_pane_g4_ParamLimits

0x5459,	// (0x00034e22) list_single_graphic_2heading_pane_g4

0x5465,	// (0x00034e2e) list_single_graphic_2heading_pane_g5_ParamLimits

0x5465,	// (0x00034e2e) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0003f154) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0003f154) list_single_graphic_2heading_pane_g

0x5471,	// (0x00034e3a) list_single_graphic_2heading_pane_t1_ParamLimits

0x5471,	// (0x00034e3a) list_single_graphic_2heading_pane_t1

0x5485,	// (0x00034e4e) list_single_graphic_2heading_pane_t2_ParamLimits

0x5485,	// (0x00034e4e) list_single_graphic_2heading_pane_t2

0x54a1,	// (0x00034e6a) list_single_graphic_2heading_pane_t3_ParamLimits

0x54a1,	// (0x00034e6a) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0003f15b) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0003f15b) list_single_graphic_2heading_pane_t

0x98b4,	// (0x0003927d) bg_popup_sub_pane_cp2

0x98de,	// (0x000392a7) grid_toobar_pane

0x7526,	// (0x00036eef) cell_toolbar_pane_ParamLimits

0x7526,	// (0x00036eef) cell_toolbar_pane

0x991a,	// (0x000392e3) cell_toolbar_pane_g1_ParamLimits

0x991a,	// (0x000392e3) cell_toolbar_pane_g1

0x992e,	// (0x000392f7) cell_toolbar_pane_g2_ParamLimits

0x992e,	// (0x000392f7) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0003f169) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0003f169) cell_toolbar_pane_g

0x9950,	// (0x00039319) grid_highlight_pane_cp2_ParamLimits

0x9950,	// (0x00039319) grid_highlight_pane_cp2

0x996a,	// (0x00039333) toolbar_button_pane

0x9976,	// (0x0003933f) toolbar_button_pane_g1

0x997e,	// (0x00039347) toolbar_button_pane_g2

0x9986,	// (0x0003934f) toolbar_button_pane_g3

0x998e,	// (0x00039357) toolbar_button_pane_g4

0x9996,	// (0x0003935f) toolbar_button_pane_g5

0x999e,	// (0x00039367) toolbar_button_pane_g6

0x99a6,	// (0x0003936f) toolbar_button_pane_g7

0x99ae,	// (0x00039377) toolbar_button_pane_g8

0x99b6,	// (0x0003937f) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0003f16e) toolbar_button_pane_g

0x755e,	// (0x00036f27) list_single_2graphic_pane_g1_cp3_ParamLimits

0x755e,	// (0x00036f27) list_single_2graphic_pane_g1_cp3

0x756a,	// (0x00036f33) list_single_2graphic_pane_g2_cp3_ParamLimits

0x756a,	// (0x00036f33) list_single_2graphic_pane_g2_cp3

0x757b,	// (0x00036f44) list_single_2graphic_pane_g3_cp3

0x7583,	// (0x00036f4c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7583,	// (0x00036f4c) list_single_2graphic_pane_g4_cp3

0x758f,	// (0x00036f58) list_single_2graphic_pane_t1_cp3_ParamLimits

0x758f,	// (0x00036f58) list_single_2graphic_pane_t1_cp3

0x75aa,	// (0x00036f73) list_single_midp_graphic_pane_g2_ParamLimits

0x75aa,	// (0x00036f73) list_single_midp_graphic_pane_g2

0x6ee9,	// (0x000368b2) aid_zoom_text_primary

0x5431,	// (0x00034dfa) aid_zoom_text_secondary

0x938a,	// (0x00038d53) status_small_pane_g7_ParamLimits

0x938a,	// (0x00038d53) status_small_pane_g7

0x93ad,	// (0x00038d76) status_small_pane_t1_ParamLimits

0x58eb,	// (0x000352b4) title_pane_g2

0x0003,

0xf529,	// (0x0003eef2) title_pane_g

0x5b54,	// (0x0003551d) aid_size_cell_colour_1_pane_ParamLimits

0x5b54,	// (0x0003551d) aid_size_cell_colour_1_pane

0x5b68,	// (0x00035531) aid_size_cell_colour_2_pane_ParamLimits

0x5b68,	// (0x00035531) aid_size_cell_colour_2_pane

0x5b7c,	// (0x00035545) aid_size_cell_colour_3_pane_ParamLimits

0x5b7c,	// (0x00035545) aid_size_cell_colour_3_pane

0x5b90,	// (0x00035559) aid_size_cell_colour_4_pane_ParamLimits

0x5b90,	// (0x00035559) aid_size_cell_colour_4_pane

0x6340,	// (0x00035d09) title_pane_stacon_g1_ParamLimits

0x6340,	// (0x00035d09) title_pane_stacon_g1

0xa002,	// (0x000399cb) popup_note_wait_window_g3_ParamLimits

0xa002,	// (0x000399cb) popup_note_wait_window_g3

0xa079,	// (0x00039a42) popup_note_wait_window_t5_ParamLimits

0xa079,	// (0x00039a42) popup_note_wait_window_t5

0x21bc,	// (0x00031b85) main_feb_china_hwr_fs_writing_pane

0x6f85,	// (0x0003694e) popup_feb_china_hwr_fs_window_ParamLimits

0x6f85,	// (0x0003694e) popup_feb_china_hwr_fs_window

0x75cc,	// (0x00036f95) aid_size_cell_hwr_fs_ParamLimits

0x75cc,	// (0x00036f95) aid_size_cell_hwr_fs

0x99ea,	// (0x000393b3) bg_popup_sub_pane_cp3_ParamLimits

0x99ea,	// (0x000393b3) bg_popup_sub_pane_cp3

0x75e1,	// (0x00036faa) grid_hwr_fs_pane_ParamLimits

0x75e1,	// (0x00036faa) grid_hwr_fs_pane

0x75f9,	// (0x00036fc2) linegrid_hwr_fs_pane_ParamLimits

0x75f9,	// (0x00036fc2) linegrid_hwr_fs_pane

0x7609,	// (0x00036fd2) cell_hwr_fs_pane_ParamLimits

0x7609,	// (0x00036fd2) cell_hwr_fs_pane

0x99f6,	// (0x000393bf) linegrid_hwr_fs_pane_g1_ParamLimits

0x99f6,	// (0x000393bf) linegrid_hwr_fs_pane_g1

0x9a02,	// (0x000393cb) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a02,	// (0x000393cb) linegrid_hwr_fs_pane_g2

0x9a14,	// (0x000393dd) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a14,	// (0x000393dd) linegrid_hwr_fs_pane_g3

0x762d,	// (0x00036ff6) linegrid_hwr_fs_pane_g4_ParamLimits

0x762d,	// (0x00036ff6) linegrid_hwr_fs_pane_g4

0x764b,	// (0x00037014) linegrid_hwr_fs_pane_g5_ParamLimits

0x764b,	// (0x00037014) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0003f199) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0003f199) linegrid_hwr_fs_pane_g

0x9a20,	// (0x000393e9) cell_hwr_fs_pane_g1_ParamLimits

0x9a20,	// (0x000393e9) cell_hwr_fs_pane_g1

0x97ef,	// (0x000391b8) cell_hwr_fs_pane_g2_ParamLimits

0x97ef,	// (0x000391b8) cell_hwr_fs_pane_g2

0x9a36,	// (0x000393ff) cell_hwr_fs_pane_g3_ParamLimits

0x9a36,	// (0x000393ff) cell_hwr_fs_pane_g3

0x9a43,	// (0x0003940c) cell_hwr_fs_pane_g4_ParamLimits

0x9a43,	// (0x0003940c) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0003f1a4) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0003f1a4) cell_hwr_fs_pane_g

0x7661,	// (0x0003702a) cell_hwr_fs_pane_t1

0x21bc,	// (0x00031b85) grid_highlight_pane_cp6

0x21bc,	// (0x00031b85) main_idle_act2_pane

0x297d,	// (0x00032346) aid_inside_area_popup_secondary

0xa6b2,	// (0x0003a07b) aid_inside_area_window_primary_ParamLimits

0xa6b2,	// (0x0003a07b) aid_inside_area_window_primary

0xb29c,	// (0x0003ac65) ai2_news_ticker_pane

0xb2a4,	// (0x0003ac6d) aid_size_cell_ai1_link_ParamLimits

0xb2a4,	// (0x0003ac6d) aid_size_cell_ai1_link

0xb2be,	// (0x0003ac87) popup_ai2_data_window_ParamLimits

0xb2be,	// (0x0003ac87) popup_ai2_data_window

0xb2dc,	// (0x0003aca5) popup_ai2_link_window_ParamLimits

0xb2dc,	// (0x0003aca5) popup_ai2_link_window

0x99ea,	// (0x000393b3) bg_popup_sub_pane_cp4_ParamLimits

0x99ea,	// (0x000393b3) bg_popup_sub_pane_cp4

0xb2f2,	// (0x0003acbb) grid_ai2_link_pane_ParamLimits

0xb2f2,	// (0x0003acbb) grid_ai2_link_pane

0xb309,	// (0x0003acd2) popup_ai2_link_window_g1_ParamLimits

0xb309,	// (0x0003acd2) popup_ai2_link_window_g1

0xb315,	// (0x0003acde) popup_ai2_link_window_g2_ParamLimits

0xb315,	// (0x0003acde) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0003f377) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0003f377) popup_ai2_link_window_g

0xb326,	// (0x0003acef) ai2_mp_button_pane

0xb32e,	// (0x0003acf7) ai2_mp_volume_pane

0x9bd5,	// (0x0003959e) bg_popup_sub_pane_cp5_ParamLimits

0x9bd5,	// (0x0003959e) bg_popup_sub_pane_cp5

0xb336,	// (0x0003acff) heading_ai2_gene_pane_ParamLimits

0xb336,	// (0x0003acff) heading_ai2_gene_pane

0xb342,	// (0x0003ad0b) list_ai2_gene_pane_ParamLimits

0xb342,	// (0x0003ad0b) list_ai2_gene_pane

0xb38a,	// (0x0003ad53) cell_ai2_link_pane_ParamLimits

0xb38a,	// (0x0003ad53) cell_ai2_link_pane

0xb3a0,	// (0x0003ad69) cell_ai2_link_pane_g1

0x21bc,	// (0x00031b85) grid_highlight_pane_cp7

0x7a5a,	// (0x00037423) ai2_mp_volume_pane_g1

0xb473,	// (0x0003ae3c) ai2_mp_volume_pane_g2

0xb3e8,	// (0x0003adb1) list_ai2_gene_pane_t1

0xb47b,	// (0x0003ae44) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0003f390) ai2_mp_volume_pane_g

0x7a62,	// (0x0003742b) volume_small_pane_cp3

0xb483,	// (0x0003ae4c) aid_size_cell_ai2_button

0xb48b,	// (0x0003ae54) grid_ai2_button_pane

0xb494,	// (0x0003ae5d) cell_ai2_button_pane_ParamLimits

0xb494,	// (0x0003ae5d) cell_ai2_button_pane

0x21b2,	// (0x00031b7b) cell_ai2_button_pane_g1

0x21bc,	// (0x00031b85) grid_highlight_pane_cp8

0xb433,	// (0x0003adfc) ai2_gene_pane_t1_ParamLimits

0xb433,	// (0x0003adfc) ai2_gene_pane_t1

0x6ed7,	// (0x000368a0) aid_height_parent_landscape

0xad42,	// (0x0003a70b) aid_height_set_list

0xad53,	// (0x0003a71c) aid_size_parent

0xb0bb,	// (0x0003aa84) aid_size_cell_graphic_pane_ParamLimits

0xb352,	// (0x0003ad1b) popup_ai2_data_window_g1_ParamLimits

0xb352,	// (0x0003ad1b) popup_ai2_data_window_g1

0xb35e,	// (0x0003ad27) ai2_news_ticker_pane_g1

0xb366,	// (0x0003ad2f) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0003f37c) ai2_news_ticker_pane_g

0xb36e,	// (0x0003ad37) ai2_news_ticker_pane_t1

0xb37c,	// (0x0003ad45) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0003f381) ai2_news_ticker_pane_t

0xb3a9,	// (0x0003ad72) heading_ai2_gene_pane_g1

0xb3b1,	// (0x0003ad7a) heading_ai2_gene_pane_t1_ParamLimits

0xb3b1,	// (0x0003ad7a) heading_ai2_gene_pane_t1

0xb3c6,	// (0x0003ad8f) list_highlight_pane_cp6

0xb3ce,	// (0x0003ad97) ai2_gene_pane_ParamLimits

0xb3ce,	// (0x0003ad97) ai2_gene_pane

0xb3f6,	// (0x0003adbf) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0003f386) list_ai2_gene_pane_t

0xb404,	// (0x0003adcd) list_highlight_pane_cp8_ParamLimits

0xb404,	// (0x0003adcd) list_highlight_pane_cp8

0xb415,	// (0x0003adde) ai2_gene_pane_g1_ParamLimits

0xb415,	// (0x0003adde) ai2_gene_pane_g1

0xb427,	// (0x0003adf0) ai2_gene_pane_g2_ParamLimits

0xb427,	// (0x0003adf0) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0003f38b) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0003f38b) ai2_gene_pane_g

0x27f0,	// (0x000321b9) scroll_pane_cp12

0x6e96,	// (0x0003685f) control_pane_t3_ParamLimits

0x6e96,	// (0x0003685f) control_pane_t3

0x939e,	// (0x00038d67) status_small_pane_g8_ParamLimits

0x939e,	// (0x00038d67) status_small_pane_g8

0x7083,	// (0x00036a4c) popup_find_window_ParamLimits

0x72b0,	// (0x00036c79) popup_note_image_window_ParamLimits

0x3ffc,	// (0x000339c5) list_double2_graphic_pane_vc_g1_ParamLimits

0x3ffc,	// (0x000339c5) list_double2_graphic_pane_vc_g1

0x41be,	// (0x00033b87) list_double2_graphic_pane_vc_g2_ParamLimits

0x41be,	// (0x00033b87) list_double2_graphic_pane_vc_g2

0x41ca,	// (0x00033b93) list_double2_graphic_pane_vc_g3_ParamLimits

0x41ca,	// (0x00033b93) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0003f162) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0003f162) list_double2_graphic_pane_vc_g

0x41d6,	// (0x00033b9f) list_double2_graphic_pane_vc_t1_ParamLimits

0x41d6,	// (0x00033b9f) list_double2_graphic_pane_vc_t1

0x3fbc,	// (0x00033985) list_single_heading_pane_vc_g1_ParamLimits

0x3fbc,	// (0x00033985) list_single_heading_pane_vc_g1

0x3fc8,	// (0x00033991) list_single_heading_pane_vc_g2_ParamLimits

0x3fc8,	// (0x00033991) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003f183) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003f183) list_single_heading_pane_vc_g

0x41ec,	// (0x00033bb5) list_single_heading_pane_vc_t1_ParamLimits

0x41ec,	// (0x00033bb5) list_single_heading_pane_vc_t1

0x4202,	// (0x00033bcb) list_single_heading_pane_vc_t2_ParamLimits

0x4202,	// (0x00033bcb) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0003f188) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0003f188) list_single_heading_pane_vc_t

0x4214,	// (0x00033bdd) list_setting_number_pane_vc_g1_ParamLimits

0x4214,	// (0x00033bdd) list_setting_number_pane_vc_g1

0x4220,	// (0x00033be9) list_setting_number_pane_vc_g2_ParamLimits

0x4220,	// (0x00033be9) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003f18d) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003f18d) list_setting_number_pane_vc_g

0x422c,	// (0x00033bf5) list_setting_number_pane_vc_t1_ParamLimits

0x422c,	// (0x00033bf5) list_setting_number_pane_vc_t1

0x4240,	// (0x00033c09) list_setting_number_pane_vc_t2_ParamLimits

0x4240,	// (0x00033c09) list_setting_number_pane_vc_t2

0x425c,	// (0x00033c25) list_setting_number_pane_vc_t3_ParamLimits

0x425c,	// (0x00033c25) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0003f192) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0003f192) list_setting_number_pane_vc_t

0x428a,	// (0x00033c53) set_value_pane_vc_ParamLimits

0x428a,	// (0x00033c53) set_value_pane_vc

0x42c1,	// (0x00033c8a) list_double2_graphic_pane_vc_ParamLimits

0x42c1,	// (0x00033c8a) list_double2_graphic_pane_vc

0xaf3c,	// (0x0003a905) list_double2_large_graphic_pane_vc_ParamLimits

0xaf3c,	// (0x0003a905) list_double2_large_graphic_pane_vc

0x42c1,	// (0x00033c8a) list_double2_pane_vc_ParamLimits

0x42c1,	// (0x00033c8a) list_double2_pane_vc

0x42c1,	// (0x00033c8a) list_double_graphic_heading_pane_vc_ParamLimits

0x42c1,	// (0x00033c8a) list_double_graphic_heading_pane_vc

0x42c1,	// (0x00033c8a) list_double_graphic_pane_vc_ParamLimits

0x42c1,	// (0x00033c8a) list_double_graphic_pane_vc

0x42c1,	// (0x00033c8a) list_double_heading_pane_vc_ParamLimits

0x42c1,	// (0x00033c8a) list_double_heading_pane_vc

0xaf50,	// (0x0003a919) list_double_large_graphic_pane_vc_ParamLimits

0xaf50,	// (0x0003a919) list_double_large_graphic_pane_vc

0x42c1,	// (0x00033c8a) list_double_number_pane_vc_ParamLimits

0x42c1,	// (0x00033c8a) list_double_number_pane_vc

0x42c1,	// (0x00033c8a) list_double_pane_vc_ParamLimits

0x42c1,	// (0x00033c8a) list_double_pane_vc

0x42c1,	// (0x00033c8a) list_double_time_pane_vc_ParamLimits

0x42c1,	// (0x00033c8a) list_double_time_pane_vc

0x42c1,	// (0x00033c8a) list_setting_number_pane_vc_ParamLimits

0x42c1,	// (0x00033c8a) list_setting_number_pane_vc

0x42c1,	// (0x00033c8a) list_setting_pane_vc_ParamLimits

0x42c1,	// (0x00033c8a) list_setting_pane_vc

0x42c1,	// (0x00033c8a) list_single_graphic_heading_pane_vc_ParamLimits

0x42c1,	// (0x00033c8a) list_single_graphic_heading_pane_vc

0x42c1,	// (0x00033c8a) list_single_heading_pane_vc_ParamLimits

0x42c1,	// (0x00033c8a) list_single_heading_pane_vc

0x7943,	// (0x0003730c) list_single_number_heading_pane_vc_ParamLimits

0x7943,	// (0x0003730c) list_single_number_heading_pane_vc

0x3ffc,	// (0x000339c5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3ffc,	// (0x000339c5) list_double_graphic_heading_pane_vc_g1

0x3fbc,	// (0x00033985) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3fbc,	// (0x00033985) list_double_graphic_heading_pane_vc_g2

0x3fc8,	// (0x00033991) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3fc8,	// (0x00033991) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0003f397) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0003f397) list_double_graphic_heading_pane_vc_g

0x42d8,	// (0x00033ca1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x42d8,	// (0x00033ca1) list_double_graphic_heading_pane_vc_t1

0x42ee,	// (0x00033cb7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x42ee,	// (0x00033cb7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0003f39e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0003f39e) list_double_graphic_heading_pane_vc_t

0x4214,	// (0x00033bdd) list_setting_pane_vc_g1_ParamLimits

0x4214,	// (0x00033bdd) list_setting_pane_vc_g1

0x4220,	// (0x00033be9) list_setting_pane_vc_g2_ParamLimits

0x4220,	// (0x00033be9) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003f18d) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003f18d) list_setting_pane_vc_g

0x430c,	// (0x00033cd5) list_setting_pane_vc_t1_ParamLimits

0x430c,	// (0x00033cd5) list_setting_pane_vc_t1

0x4328,	// (0x00033cf1) list_setting_pane_vc_t2_ParamLimits

0x4328,	// (0x00033cf1) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0003f3cc) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0003f3cc) list_setting_pane_vc_t

0x428a,	// (0x00033c53) set_value_pane_cp_vc_ParamLimits

0x428a,	// (0x00033c53) set_value_pane_cp_vc

0x3fbc,	// (0x00033985) list_single_number_heading_pane_vc_g1_ParamLimits

0x3fbc,	// (0x00033985) list_single_number_heading_pane_vc_g1

0x3fc8,	// (0x00033991) list_single_number_heading_pane_vc_g2_ParamLimits

0x3fc8,	// (0x00033991) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003f183) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003f183) list_single_number_heading_pane_vc_g

0x3fd4,	// (0x0003399d) list_single_number_heading_pane_vc_t1_ParamLimits

0x3fd4,	// (0x0003399d) list_single_number_heading_pane_vc_t1

0x4344,	// (0x00033d0d) list_single_number_heading_pane_vc_t2_ParamLimits

0x4344,	// (0x00033d0d) list_single_number_heading_pane_vc_t2

0x3fea,	// (0x000339b3) list_single_number_heading_pane_vc_t3_ParamLimits

0x3fea,	// (0x000339b3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0003f3d1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0003f3d1) list_single_number_heading_pane_vc_t

0x3ffc,	// (0x000339c5) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3ffc,	// (0x000339c5) list_single_graphic_heading_pane_vc_g1

0x3fbc,	// (0x00033985) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3fbc,	// (0x00033985) list_single_graphic_heading_pane_vc_g4

0x3fc8,	// (0x00033991) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3fc8,	// (0x00033991) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ce,	// (0x0003f397) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0003f397) list_single_graphic_heading_pane_vc_g

0x3fd4,	// (0x0003399d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3fd4,	// (0x0003399d) list_single_graphic_heading_pane_vc_t1

0x435a,	// (0x00033d23) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x435a,	// (0x00033d23) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0f,	// (0x0003f3d8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0003f3d8) list_single_graphic_heading_pane_vc_t

0x3fbc,	// (0x00033985) list_double2_pane_vc_g1_ParamLimits

0x3fbc,	// (0x00033985) list_double2_pane_vc_g1

0x3fc8,	// (0x00033991) list_double2_pane_vc_g2_ParamLimits

0x3fc8,	// (0x00033991) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003f183) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003f183) list_double2_pane_vc_g

0x42ab,	// (0x00033c74) list_double2_pane_vc_t1_ParamLimits

0x42ab,	// (0x00033c74) list_double2_pane_vc_t1

0x4008,	// (0x000339d1) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4008,	// (0x000339d1) list_double2_large_graphic_pane_vc_g1

0x4014,	// (0x000339dd) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4014,	// (0x000339dd) list_double2_large_graphic_pane_vc_g2

0x4020,	// (0x000339e9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4020,	// (0x000339e9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa14,	// (0x0003f3dd) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa14,	// (0x0003f3dd) list_double2_large_graphic_pane_vc_g

0x402c,	// (0x000339f5) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x402c,	// (0x000339f5) list_double2_large_graphic_pane_vc_t1

0x436c,	// (0x00033d35) list_double_time_pane_vc_g1_ParamLimits

0x436c,	// (0x00033d35) list_double_time_pane_vc_g1

0x4378,	// (0x00033d41) list_double_time_pane_vc_g2_ParamLimits

0x4378,	// (0x00033d41) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0003f3e4) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0003f3e4) list_double_time_pane_vc_g

0x4384,	// (0x00033d4d) list_double_time_pane_vc_t1_ParamLimits

0x4384,	// (0x00033d4d) list_double_time_pane_vc_t1

0x43ae,	// (0x00033d77) list_double_time_pane_vc_t2_ParamLimits

0x43ae,	// (0x00033d77) list_double_time_pane_vc_t2

0x43f7,	// (0x00033dc0) list_double_time_pane_vc_t3_ParamLimits

0x43f7,	// (0x00033dc0) list_double_time_pane_vc_t3

0x4409,	// (0x00033dd2) list_double_time_pane_vc_t4_ParamLimits

0x4409,	// (0x00033dd2) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0003f3e9) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0003f3e9) list_double_time_pane_vc_t

0x3fbc,	// (0x00033985) list_double_pane_vc_g1_ParamLimits

0x3fbc,	// (0x00033985) list_double_pane_vc_g1

0x3fc8,	// (0x00033991) list_double_pane_vc_g2_ParamLimits

0x3fc8,	// (0x00033991) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003f183) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003f183) list_double_pane_vc_g

0x441d,	// (0x00033de6) list_double_pane_vc_t1_ParamLimits

0x441d,	// (0x00033de6) list_double_pane_vc_t1

0x4431,	// (0x00033dfa) list_double_pane_vc_t2_ParamLimits

0x4431,	// (0x00033dfa) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0003f3f2) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0003f3f2) list_double_pane_vc_t

0x3fbc,	// (0x00033985) list_double_number_pane_vc_g1_ParamLimits

0x3fbc,	// (0x00033985) list_double_number_pane_vc_g1

0x3fc8,	// (0x00033991) list_double_number_pane_vc_g2_ParamLimits

0x3fc8,	// (0x00033991) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003f183) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003f183) list_double_number_pane_vc_g

0x4447,	// (0x00033e10) list_double_number_pane_vc_t1_ParamLimits

0x4447,	// (0x00033e10) list_double_number_pane_vc_t1

0x4459,	// (0x00033e22) list_double_number_pane_vc_t2_ParamLimits

0x4459,	// (0x00033e22) list_double_number_pane_vc_t2

0x4431,	// (0x00033dfa) list_double_number_pane_vc_t3_ParamLimits

0x4431,	// (0x00033dfa) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0003f3f7) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003f3f7) list_double_number_pane_vc_t

0x446d,	// (0x00033e36) list_double_large_graphic_pane_vc_g1_ParamLimits

0x446d,	// (0x00033e36) list_double_large_graphic_pane_vc_g1

0x448f,	// (0x00033e58) list_double_large_graphic_pane_vc_g2_ParamLimits

0x448f,	// (0x00033e58) list_double_large_graphic_pane_vc_g2

0x44a3,	// (0x00033e6c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x44a3,	// (0x00033e6c) list_double_large_graphic_pane_vc_g3

0x44b2,	// (0x00033e7b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x44b2,	// (0x00033e7b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0003f3fe) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0003f3fe) list_double_large_graphic_pane_vc_g

0x44be,	// (0x00033e87) list_double_large_graphic_pane_vc_t1_ParamLimits

0x44be,	// (0x00033e87) list_double_large_graphic_pane_vc_t1

0x44da,	// (0x00033ea3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x44da,	// (0x00033ea3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0003f407) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003f407) list_double_large_graphic_pane_vc_t

0x3fbc,	// (0x00033985) list_double_heading_pane_vc_g1_ParamLimits

0x3fbc,	// (0x00033985) list_double_heading_pane_vc_g1

0x3fc8,	// (0x00033991) list_double_heading_pane_vc_g2_ParamLimits

0x3fc8,	// (0x00033991) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003f183) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003f183) list_double_heading_pane_vc_g

0x44fa,	// (0x00033ec3) list_double_heading_pane_vc_t1_ParamLimits

0x44fa,	// (0x00033ec3) list_double_heading_pane_vc_t1

0x450c,	// (0x00033ed5) list_double_heading_pane_vc_t2_ParamLimits

0x450c,	// (0x00033ed5) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0003f40c) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0003f40c) list_double_heading_pane_vc_t

0x4550,	// (0x00033f19) list_double_graphic_pane_vc_g1_ParamLimits

0x4550,	// (0x00033f19) list_double_graphic_pane_vc_g1

0x4563,	// (0x00033f2c) list_double_graphic_pane_vc_g2_ParamLimits

0x4563,	// (0x00033f2c) list_double_graphic_pane_vc_g2

0x3fbc,	// (0x00033985) list_double_graphic_pane_vc_g3_ParamLimits

0x3fbc,	// (0x00033985) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0003f411) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0003f411) list_double_graphic_pane_vc_g

0x4580,	// (0x00033f49) list_double_graphic_pane_vc_t1_ParamLimits

0x4580,	// (0x00033f49) list_double_graphic_pane_vc_t1

0x45aa,	// (0x00033f73) list_double_graphic_pane_vc_t2_ParamLimits

0x45aa,	// (0x00033f73) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0003f41a) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0003f41a) list_double_graphic_pane_vc_t

0x54ed,	// (0x00034eb6) aid_size_cell_fastswap

0x54f5,	// (0x00034ebe) aid_size_cell_touch_ParamLimits

0x54f5,	// (0x00034ebe) aid_size_cell_touch

0x5760,	// (0x00035129) popup_fast_swap_wide_window_ParamLimits

0x5760,	// (0x00035129) popup_fast_swap_wide_window

0x587e,	// (0x00035247) touch_pane_ParamLimits

0x587e,	// (0x00035247) touch_pane

0x2846,	// (0x0003220f) button_value_adjust_pane_cp2

0x4065,	// (0x00033a2e) button_value_adjust_pane_cp4

0x406d,	// (0x00033a36) form_field_data_pane_cp2

0x6122,	// (0x00035aeb) form_field_data_wide_pane_cp2

0x657f,	// (0x00035f48) bg_scroll_pane_ParamLimits

0x659e,	// (0x00035f67) scroll_handle_pane_ParamLimits

0x65b2,	// (0x00035f7b) scroll_sc2_down_pane_ParamLimits

0x65b2,	// (0x00035f7b) scroll_sc2_down_pane

0x65d9,	// (0x00035fa2) scroll_sc2_up_pane_ParamLimits

0x65d9,	// (0x00035fa2) scroll_sc2_up_pane

0xbbbc,	// (0x0003b585) grid_wheel_folder_pane_g1_ParamLimits

0xbbbc,	// (0x0003b585) grid_wheel_folder_pane_g1

0x6c8f,	// (0x00036658) clock_nsta_pane_cp2_ParamLimits

0x6c8f,	// (0x00036658) clock_nsta_pane_cp2

0x9121,	// (0x00038aea) listscroll_midp_pane_ParamLimits

0x912d,	// (0x00038af6) midp_canvas_pane

0x9418,	// (0x00038de1) nsta_clock_indic_pane

0x944c,	// (0x00038e15) listscroll_form_pane_vc

0x9454,	// (0x00038e1d) listscroll_set_pane_vc_ParamLimits

0x9454,	// (0x00038e1d) listscroll_set_pane_vc

0x954b,	// (0x00038f14) clock_nsta_pane

0x95c8,	// (0x00038f91) indicator_nsta_pane

0x98b4,	// (0x0003927d) bg_popup_sub_pane_cp2_ParamLimits

0x98c8,	// (0x00039291) find_pane_cp2_ParamLimits

0x98c8,	// (0x00039291) find_pane_cp2

0x98de,	// (0x000392a7) grid_toobar_pane_ParamLimits

0x99be,	// (0x00039387) list_form_gen_pane_vc_ParamLimits

0x99be,	// (0x00039387) list_form_gen_pane_vc

0x99d4,	// (0x0003939d) scroll_pane_cp8_vc_ParamLimits

0x99d4,	// (0x0003939d) scroll_pane_cp8_vc

0x9a50,	// (0x00039419) data_form_wide_pane_vc_ParamLimits

0x9a50,	// (0x00039419) data_form_wide_pane_vc

0x9a5c,	// (0x00039425) form_field_data_wide_pane_vc_g1

0x9a64,	// (0x0003942d) form_field_data_wide_pane_vc_t1_ParamLimits

0x9a64,	// (0x0003942d) form_field_data_wide_pane_vc_t1

0x285a,	// (0x00032223) input_focus_pane_cp6_vc_ParamLimits

0x285a,	// (0x00032223) input_focus_pane_cp6_vc

0x9d60,	// (0x00039729) list_midp_pane_ParamLimits

0x9d6c,	// (0x00039735) scroll_pane_cp16_ParamLimits

0x9d6c,	// (0x00039735) scroll_pane_cp16

0x9dd6,	// (0x0003979f) button_value_adjust_pane_ParamLimits

0x9dd6,	// (0x0003979f) button_value_adjust_pane

0xad65,	// (0x0003a72e) button_value_adjust_pane_cp6_ParamLimits

0xad65,	// (0x0003a72e) button_value_adjust_pane_cp6

0xaead,	// (0x0003a876) settings_code_pane_cp_ParamLimits

0xaead,	// (0x0003a876) settings_code_pane_cp

0x21b2,	// (0x00031b7b) cell_touch_pane_g1

0x21b2,	// (0x00031b7b) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0003f0a7) cell_touch_pane_g

0xb4a6,	// (0x0003ae6f) cell_touch_pane_cp_ParamLimits

0xb4a6,	// (0x0003ae6f) cell_touch_pane_cp

0xb4b6,	// (0x0003ae7f) cell_touch_pane_ParamLimits

0xb4b6,	// (0x0003ae7f) cell_touch_pane

0x21b2,	// (0x00031b7b) scroll_sc2_down_pane_g1

0x21b2,	// (0x00031b7b) scroll_sc2_up_pane_g1

0x21bc,	// (0x00031b85) bg_set_opt_pane_cp4_vc

0xb4c7,	// (0x0003ae90) list_set_graphic_pane_vc_g1_ParamLimits

0xb4c7,	// (0x0003ae90) list_set_graphic_pane_vc_g1

0xb4d3,	// (0x0003ae9c) list_set_graphic_pane_vc_g2_ParamLimits

0xb4d3,	// (0x0003ae9c) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0003f3a3) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0003f3a3) list_set_graphic_pane_vc_g

0xb4df,	// (0x0003aea8) text_primary_small_cp13_vc_ParamLimits

0xb4df,	// (0x0003aea8) text_primary_small_cp13_vc

0xb4f7,	// (0x0003aec0) list_set_graphic_pane_vc_ParamLimits

0xb4f7,	// (0x0003aec0) list_set_graphic_pane_vc

0x21bc,	// (0x00031b85) input_focus_pane_cp2_vc

0x21b2,	// (0x00031b7b) setting_code_pane_vc_g1

0x222f,	// (0x00031bf8) setting_code_pane_vc_t1

0xb50a,	// (0x0003aed3) set_text_pane_vc_t1_ParamLimits

0xb50a,	// (0x0003aed3) set_text_pane_vc_t1

0x21bc,	// (0x00031b85) input_focus_pane_cp1_vc

0xb52b,	// (0x0003aef4) list_set_text_pane_vc

0x21b2,	// (0x00031b7b) setting_text_pane_vc_g1

0x21bc,	// (0x00031b85) bg_set_opt_pane_cp2_vc

0x2226,	// (0x00031bef) setting_slider_graphic_pane_vc_g1

0xb535,	// (0x0003aefe) setting_slider_graphic_pane_vc_t1

0xb547,	// (0x0003af10) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0003f3a8) setting_slider_graphic_pane_vc_t

0xb559,	// (0x0003af22) slider_set_pane_cp_vc

0xb563,	// (0x0003af2c) slider_set_pane_vc_g1

0xb56c,	// (0x0003af35) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0003f3ad) slider_set_pane_vc_g

0x28b2,	// (0x0003227b) set_opt_bg_pane_g1_copy1

0x28ba,	// (0x00032283) set_opt_bg_pane_g2_copy1

0xb598,	// (0x0003af61) set_opt_bg_pane_g3_copy1

0x28ca,	// (0x00032293) set_opt_bg_pane_g4_copy1

0x28d2,	// (0x0003229b) set_opt_bg_pane_g5_copy1

0x28da,	// (0x000322a3) set_opt_bg_pane_g6_copy1

0xb5a2,	// (0x0003af6b) set_opt_bg_pane_g7_copy1

0xb5ac,	// (0x0003af75) set_opt_bg_pane_g8_copy1

0xb5b6,	// (0x0003af7f) set_opt_bg_pane_g9_copy1

0x21bc,	// (0x00031b85) bg_set_opt_pane_cp_vc

0xb5c0,	// (0x0003af89) setting_slider_pane_vc_t1

0xb5cf,	// (0x0003af98) setting_slider_pane_vc_t2

0xb5e1,	// (0x0003afaa) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0003f3bc) setting_slider_pane_vc_t

0xb5f3,	// (0x0003afbc) slider_set_pane_vc

0x768f,	// (0x00037058) volume_set_pane_vc_g1

0x7698,	// (0x00037061) volume_set_pane_vc_g2

0x76a1,	// (0x0003706a) volume_set_pane_vc_g3

0x76aa,	// (0x00037073) volume_set_pane_vc_g4

0x76b3,	// (0x0003707c) volume_set_pane_vc_g5

0x76bc,	// (0x00037085) volume_set_pane_vc_g6

0x76c5,	// (0x0003708e) volume_set_pane_vc_g7

0x76ce,	// (0x00037097) volume_set_pane_vc_g8

0x76d7,	// (0x000370a0) volume_set_pane_vc_g9

0x76e0,	// (0x000370a9) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0003f25a) volume_set_pane_vc_g

0xb5fd,	// (0x0003afc6) volume_set_pane_vc

0xb607,	// (0x0003afd0) button_value_adjust_pane_cp1_vc

0xb611,	// (0x0003afda) list_highlight_pane_cp2_vc

0xb61a,	// (0x0003afe3) list_set_pane_vc_ParamLimits

0xb61a,	// (0x0003afe3) list_set_pane_vc

0xb688,	// (0x0003b051) main_pane_set_vc_t1_ParamLimits

0xb688,	// (0x0003b051) main_pane_set_vc_t1

0xb69d,	// (0x0003b066) main_pane_set_vc_t2_ParamLimits

0xb69d,	// (0x0003b066) main_pane_set_vc_t2

0xb6af,	// (0x0003b078) main_pane_set_vc_t3_ParamLimits

0xb6af,	// (0x0003b078) main_pane_set_vc_t3

0xb6c3,	// (0x0003b08c) main_pane_set_vc_t4_ParamLimits

0xb6c3,	// (0x0003b08c) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0003f3c3) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0003f3c3) main_pane_set_vc_t

0xb6d7,	// (0x0003b0a0) setting_code_pane_vc_ParamLimits

0xb6d7,	// (0x0003b0a0) setting_code_pane_vc

0xb6e8,	// (0x0003b0b1) setting_slider_graphic_pane_vc

0xb6e8,	// (0x0003b0b1) setting_slider_pane_vc

0xb6e8,	// (0x0003b0b1) setting_text_pane_vc

0xb6e8,	// (0x0003b0b1) setting_volume_pane_vc

0xb6f2,	// (0x0003b0bb) scroll_pane_cp121_vc

0x2834,	// (0x000321fd) set_content_pane_vc

0xb6fa,	// (0x0003b0c3) button_value_adjust_pane_g1

0xb703,	// (0x0003b0cc) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0003f41f) button_value_adjust_pane_g

0xb70c,	// (0x0003b0d5) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb70c,	// (0x0003b0d5) form_field_slider_wide_pane_vc_t1

0xb71e,	// (0x0003b0e7) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb71e,	// (0x0003b0e7) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0003f424) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003f424) form_field_slider_wide_pane_vc_t

0x220a,	// (0x00031bd3) input_focus_pane_cp10_vc_ParamLimits

0x220a,	// (0x00031bd3) input_focus_pane_cp10_vc

0xb74a,	// (0x0003b113) slider_cont_pane_cp1_vc_ParamLimits

0xb74a,	// (0x0003b113) slider_cont_pane_cp1_vc

0xb75c,	// (0x0003b125) slider_form_pane_g1_cp2

0xb56c,	// (0x0003af35) slider_form_pane_g2_cp2

0xb789,	// (0x0003b152) form_field_slider_pane_vc_t3

0xb797,	// (0x0003b160) form_field_slider_pane_vc_t4

0xb7a5,	// (0x0003b16e) slider_form_pane_vc_ParamLimits

0xb7a5,	// (0x0003b16e) slider_form_pane_vc

0xb7b2,	// (0x0003b17b) form_field_slider_pane_vc_t1_ParamLimits

0xb7b2,	// (0x0003b17b) form_field_slider_pane_vc_t1

0xb71e,	// (0x0003b0e7) form_field_slider_pane_vc_t2_ParamLimits

0xb71e,	// (0x0003b0e7) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0003f436) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003f436) form_field_slider_pane_vc_t

0x220a,	// (0x00031bd3) input_focus_pane_cp9_vc_ParamLimits

0x220a,	// (0x00031bd3) input_focus_pane_cp9_vc

0xb7c8,	// (0x0003b191) slider_cont_pane_vc_ParamLimits

0xb7c8,	// (0x0003b191) slider_cont_pane_vc

0xb7dc,	// (0x0003b1a5) list_form_graphic_pane_cp_vc_ParamLimits

0xb7dc,	// (0x0003b1a5) list_form_graphic_pane_cp_vc

0x9a5c,	// (0x00039425) form_field_popup_wide_pane_vc_g1

0xb7f1,	// (0x0003b1ba) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7f1,	// (0x0003b1ba) form_field_popup_wide_pane_vc_t1

0x285a,	// (0x00032223) input_focus_pane_cp8_vc_ParamLimits

0x285a,	// (0x00032223) input_focus_pane_cp8_vc

0xb836,	// (0x0003b1ff) list_form_wide_pane_vc_ParamLimits

0xb836,	// (0x0003b1ff) list_form_wide_pane_vc

0xb842,	// (0x0003b20b) list_form_graphic_pane_vc_g1

0xb84a,	// (0x0003b213) list_form_graphic_pane_vc_t1_ParamLimits

0xb84a,	// (0x0003b213) list_form_graphic_pane_vc_t1

0x2218,	// (0x00031be1) list_highlight_pane_cp5_vc_ParamLimits

0x2218,	// (0x00031be1) list_highlight_pane_cp5_vc

0xb866,	// (0x0003b22f) list_form_graphic_pane_vc_ParamLimits

0xb866,	// (0x0003b22f) list_form_graphic_pane_vc

0x9a5c,	// (0x00039425) form_field_popup_pane_vc_g1

0xb87c,	// (0x0003b245) form_field_popup_pane_vc_t1_ParamLimits

0xb87c,	// (0x0003b245) form_field_popup_pane_vc_t1

0x285a,	// (0x00032223) input_focus_pane_cp7_vc_ParamLimits

0x285a,	// (0x00032223) input_focus_pane_cp7_vc

0xb893,	// (0x0003b25c) list_form_pane_vc_ParamLimits

0xb893,	// (0x0003b25c) list_form_pane_vc

0xb89f,	// (0x0003b268) data_form_pane_vc_t1_ParamLimits

0xb89f,	// (0x0003b268) data_form_pane_vc_t1

0x28b2,	// (0x0003227b) input_focus_pane_vc_g1

0x28ba,	// (0x00032283) input_focus_pane_vc_g2

0x28c2,	// (0x0003228b) input_focus_pane_vc_g3

0x28ca,	// (0x00032293) input_focus_pane_vc_g4

0x28d2,	// (0x0003229b) input_focus_pane_vc_g5

0x28da,	// (0x000322a3) input_focus_pane_vc_g6

0x28e2,	// (0x000322ab) input_focus_pane_vc_g7

0x28ea,	// (0x000322b3) input_focus_pane_vc_g8

0x28f2,	// (0x000322bb) input_focus_pane_vc_g9

0x21b2,	// (0x00031b7b) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0003f030) input_focus_pane_vc_g

0x9a50,	// (0x00039419) data_form_pane_vc_ParamLimits

0x9a50,	// (0x00039419) data_form_pane_vc

0x9a5c,	// (0x00039425) form_field_data_pane_vc_g1

0xb8bc,	// (0x0003b285) form_field_data_pane_vc_t1_ParamLimits

0xb8bc,	// (0x0003b285) form_field_data_pane_vc_t1

0x285a,	// (0x00032223) input_focus_pane_vc_ParamLimits

0x285a,	// (0x00032223) input_focus_pane_vc

0xb8d6,	// (0x0003b29f) button_value_adjust_pane_cp3_vc

0xb8de,	// (0x0003b2a7) button_value_adjust_pane_cp5_vc

0xb8e6,	// (0x0003b2af) form_field_data_pane_vc_ParamLimits

0xb8e6,	// (0x0003b2af) form_field_data_pane_vc

0xb901,	// (0x0003b2ca) form_field_data_pane_vc_cp2

0xb909,	// (0x0003b2d2) form_field_data_wide_pane_vc_ParamLimits

0xb909,	// (0x0003b2d2) form_field_data_wide_pane_vc

0xb923,	// (0x0003b2ec) form_field_data_wide_pane_vc_cp2

0xb92b,	// (0x0003b2f4) form_field_popup_pane_vc_ParamLimits

0xb92b,	// (0x0003b2f4) form_field_popup_pane_vc

0xb946,	// (0x0003b30f) form_field_popup_wide_pane_vc_ParamLimits

0xb946,	// (0x0003b30f) form_field_popup_wide_pane_vc

0xb960,	// (0x0003b329) form_field_slider_pane_vc_ParamLimits

0xb960,	// (0x0003b329) form_field_slider_pane_vc

0xb973,	// (0x0003b33c) form_field_slider_wide_pane_vc_ParamLimits

0xb973,	// (0x0003b33c) form_field_slider_wide_pane_vc

0xb986,	// (0x0003b34f) grid_touch_1_pane_ParamLimits

0xb986,	// (0x0003b34f) grid_touch_1_pane

0xb992,	// (0x0003b35b) grid_touch_2_pane_ParamLimits

0xb992,	// (0x0003b35b) grid_touch_2_pane

0x93e3,	// (0x00038dac) touch_pane_g1_ParamLimits

0x93e3,	// (0x00038dac) touch_pane_g1

0xb9ac,	// (0x0003b375) cell_app_pane_cp_wide_ParamLimits

0xb9ac,	// (0x0003b375) cell_app_pane_cp_wide

0xb9bd,	// (0x0003b386) grid_popup_fast_wide_pane_ParamLimits

0xb9bd,	// (0x0003b386) grid_popup_fast_wide_pane

0xb9d1,	// (0x0003b39a) scroll_pane_cp19_ParamLimits

0xb9d1,	// (0x0003b39a) scroll_pane_cp19

0x21bc,	// (0x00031b85) bg_popup_window_pane_cp20

0xb9e5,	// (0x0003b3ae) listscroll_popup_fast_wide_pane

0xb9ed,	// (0x0003b3b6) grid_indicator_nsta_pane

0xb9ff,	// (0x0003b3c8) clock_nsta_pane_g1

0xba08,	// (0x0003b3d1) clock_nsta_pane_t1

0xba24,	// (0x0003b3ed) cell_indicator_nsta_pane_ParamLimits

0xba24,	// (0x0003b3ed) cell_indicator_nsta_pane

0xba59,	// (0x0003b422) cell_indicator_nsta_pane_g1

0xba67,	// (0x0003b430) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0003f447) cell_indicator_nsta_pane_g

0xba7a,	// (0x0003b443) clock_nsta_pane_cp

0xba83,	// (0x0003b44c) indicator_nsta_pane_cp

0xba8d,	// (0x0003b456) nsta_clock_indic_pane_g1

0x2254,	// (0x00031c1d) grid_indicator_pane

0x66cb,	// (0x00036094) scroll_pane_cp29

0x6bde,	// (0x000365a7) indicator_nsta_pane_cp2_ParamLimits

0x6bde,	// (0x000365a7) indicator_nsta_pane_cp2

0x2218,	// (0x00031be1) main_apps_wheel_pane

0x9c3d,	// (0x00039606) form_midp_field_text_pane_ParamLimits

0x9d8c,	// (0x00039755) scroll_bar_cp050_ParamLimits

0xbae6,	// (0x0003b4af) cell_indicator_pane_ParamLimits

0xbae6,	// (0x0003b4af) cell_indicator_pane

0xbafe,	// (0x0003b4c7) cell_indicator_pane_g1

0xbb08,	// (0x0003b4d1) grid_wheel_folder_pane_ParamLimits

0xbb08,	// (0x0003b4d1) grid_wheel_folder_pane

0xbb1c,	// (0x0003b4e5) list_wheel_apps_pane_ParamLimits

0xbb1c,	// (0x0003b4e5) list_wheel_apps_pane

0xbb2f,	// (0x0003b4f8) main_apps_wheel_pane_g1_ParamLimits

0xbb2f,	// (0x0003b4f8) main_apps_wheel_pane_g1

0xbb4b,	// (0x0003b514) main_apps_wheel_pane_g2_ParamLimits

0xbb4b,	// (0x0003b514) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0003f463) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0003f463) main_apps_wheel_pane_g

0xbb67,	// (0x0003b530) main_apps_wheel_pane_t1_ParamLimits

0xbb67,	// (0x0003b530) main_apps_wheel_pane_t1

0xbb90,	// (0x0003b559) list_wheel_apps_pane_g1

0xbb98,	// (0x0003b561) list_wheel_apps_pane_g2

0xbba0,	// (0x0003b569) list_wheel_apps_pane_g3

0xbba8,	// (0x0003b571) list_wheel_apps_pane_g4

0xbbb2,	// (0x0003b57b) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0003f468) list_wheel_apps_pane_g

0x8f8a,	// (0x00038953) navi_icon_text_pane

0x947c,	// (0x00038e45) aid_fill_nsta

0xbbd3,	// (0x0003b59c) navi_icon_text_pane_g1

0xbbdf,	// (0x0003b5a8) navi_icon_text_pane_t1

0x8e20,	// (0x000387e9) list_set_graphic_pane_t1_ParamLimits

0x8e20,	// (0x000387e9) list_set_graphic_pane_t1

0xa4f9,	// (0x00039ec2) popup_midp_note_alarm_window_t6_ParamLimits

0xa4f9,	// (0x00039ec2) popup_midp_note_alarm_window_t6

0xa50b,	// (0x00039ed4) popup_midp_note_alarm_window_t7_ParamLimits

0xa50b,	// (0x00039ed4) popup_midp_note_alarm_window_t7

0xa51d,	// (0x00039ee6) popup_midp_note_alarm_window_t8_ParamLimits

0xa51d,	// (0x00039ee6) popup_midp_note_alarm_window_t8

0xa52f,	// (0x00039ef8) popup_midp_note_alarm_window_t9_ParamLimits

0xa52f,	// (0x00039ef8) popup_midp_note_alarm_window_t9

0xa541,	// (0x00039f0a) popup_midp_note_alarm_window_t10_ParamLimits

0xa541,	// (0x00039f0a) popup_midp_note_alarm_window_t10

0xa553,	// (0x00039f1c) popup_midp_note_alarm_window_t11_ParamLimits

0xa553,	// (0x00039f1c) popup_midp_note_alarm_window_t11

0xa565,	// (0x00039f2e) scroll_pane_cp17_ParamLimits

0xa565,	// (0x00039f2e) scroll_pane_cp17

0x768f,	// (0x00037058) volume_small_pane_cp_g1

0x7a6b,	// (0x00037434) volume_small_pane_cp_g2

0x7a74,	// (0x0003743d) volume_small_pane_cp_g3

0x7a7d,	// (0x00037446) volume_small_pane_cp_g4

0x7a86,	// (0x0003744f) volume_small_pane_cp_g5

0x7a8f,	// (0x00037458) volume_small_pane_cp_g6

0x7a98,	// (0x00037461) volume_small_pane_cp_g7

0x7aa1,	// (0x0003746a) volume_small_pane_cp_g8

0x7aaa,	// (0x00037473) volume_small_pane_cp_g9

0x7ab3,	// (0x0003747c) volume_small_pane_cp_g10

0x91f7,	// (0x00038bc0) midp_ticker_pane_g1_ParamLimits

0x9203,	// (0x00038bcc) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0003f0fc) midp_ticker_pane_g_ParamLimits

0x920f,	// (0x00038bd8) midp_ticker_pane_t1_ParamLimits

0x9492,	// (0x00038e5b) aid_fill_nsta_2

0x9d78,	// (0x00039741) list_form2_midp_pane

0xaef4,	// (0x0003a8bd) midp_editing_number_pane_ParamLimits

0xaf03,	// (0x0003a8cc) midp_ticker_pane_ParamLimits

0xbbf1,	// (0x0003b5ba) form2_midp_field_pane

0xbc15,	// (0x0003b5de) scroll_pane_cp51

0xbc35,	// (0x0003b5fe) form2_midp_button_pane_ParamLimits

0xbc35,	// (0x0003b5fe) form2_midp_button_pane

0xbc47,	// (0x0003b610) form2_midp_content_pane_ParamLimits

0xbc47,	// (0x0003b610) form2_midp_content_pane

0xbc61,	// (0x0003b62a) form2_midp_field_choice_group_pane

0xbc69,	// (0x0003b632) form2_midp_field_pane_g1

0xbc71,	// (0x0003b63a) form2_midp_field_pane_g2

0xbc79,	// (0x0003b642) form2_midp_field_pane_g3

0xbc81,	// (0x0003b64a) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0003f48d) form2_midp_field_pane_g

0xbc89,	// (0x0003b652) form2_midp_gauge_slider_pane

0xbc91,	// (0x0003b65a) form2_midp_gauge_wait_pane

0xbc99,	// (0x0003b662) form2_midp_image_pane_ParamLimits

0xbc99,	// (0x0003b662) form2_midp_image_pane

0xbcb4,	// (0x0003b67d) form2_midp_label_pane_ParamLimits

0xbcb4,	// (0x0003b67d) form2_midp_label_pane

0xbcd3,	// (0x0003b69c) form2_midp_label_pane_cp_ParamLimits

0xbcd3,	// (0x0003b69c) form2_midp_label_pane_cp

0xbcf4,	// (0x0003b6bd) form2_midp_string_pane_ParamLimits

0xbcf4,	// (0x0003b6bd) form2_midp_string_pane

0x7abc,	// (0x00037485) form2_midp_text_pane_ParamLimits

0x7abc,	// (0x00037485) form2_midp_text_pane

0xbd06,	// (0x0003b6cf) form2_midp_time_pane

0xbd16,	// (0x0003b6df) input_focus_pane_cp51_ParamLimits

0xbd16,	// (0x0003b6df) input_focus_pane_cp51

0xbd2e,	// (0x0003b6f7) form2_midp_label_pane_t1_ParamLimits

0xbd2e,	// (0x0003b6f7) form2_midp_label_pane_t1

0x7add,	// (0x000374a6) form2_mdip_text_pane_t1_ParamLimits

0x7add,	// (0x000374a6) form2_mdip_text_pane_t1

0x45c8,	// (0x00033f91) form2_midp_time_pane_t1

0xbd7c,	// (0x0003b745) form2_midp_gauge_slider_pane_t1

0xbd8e,	// (0x0003b757) form2_midp_gauge_slider_pane_t2

0xbda0,	// (0x0003b769) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0003f496) form2_midp_gauge_slider_pane_t

0xbdb2,	// (0x0003b77b) form2_midp_slider_pane

0xbdbe,	// (0x0003b787) form2_midp_gauge_wait_pane_t1

0xbdcc,	// (0x0003b795) form2_midp_wait_pane_ParamLimits

0xbdcc,	// (0x0003b795) form2_midp_wait_pane

0xbdf7,	// (0x0003b7c0) list_single_2graphic_pane_cp4_ParamLimits

0xbdf7,	// (0x0003b7c0) list_single_2graphic_pane_cp4

0x9ab9,	// (0x00039482) list_single_midp_graphic_pane_cp_ParamLimits

0x9ab9,	// (0x00039482) list_single_midp_graphic_pane_cp

0x21bc,	// (0x00031b85) list_highlight_pane_cp20

0xbe10,	// (0x0003b7d9) list_single_2graphic_pane_g1_cp4

0xb3a9,	// (0x0003ad72) list_single_2graphic_pane_g2_cp4

0xbe18,	// (0x0003b7e1) list_single_2graphic_pane_t1_cp4

0x2218,	// (0x00031be1) list_highlight_pane_cp21

0xbe27,	// (0x0003b7f0) list_single_midp_graphic_pane_g4_cp

0xbe36,	// (0x0003b7ff) list_single_midp_graphic_pane_t1_cp

0xbe4b,	// (0x0003b814) form2_mdip_string_pane_t1_ParamLimits

0xbe4b,	// (0x0003b814) form2_mdip_string_pane_t1

0x21bc,	// (0x00031b85) bg_wml_button_pane_cp2

0x21b2,	// (0x00031b7b) form2_midp_image_pane_g1

0x4042,	// (0x00033a0b) list_double_large_graphic_pane_g5_ParamLimits

0x4042,	// (0x00033a0b) list_double_large_graphic_pane_g5

0x9121,	// (0x00038aea) midp_form_pane_ParamLimits

0x2218,	// (0x00031be1) main_apps_wheel_pane_ParamLimits

0x72d8,	// (0x00036ca1) popup_preview_window_ParamLimits

0x72d8,	// (0x00036ca1) popup_preview_window

0x74bf,	// (0x00036e88) popup_touch_info_window_ParamLimits

0x74bf,	// (0x00036e88) popup_touch_info_window

0x74e1,	// (0x00036eaa) popup_touch_menu_window_ParamLimits

0x74e1,	// (0x00036eaa) popup_touch_menu_window

0x21a8,	// (0x00031b71) bg_popup_sub_pane_cp6

0xbee7,	// (0x0003b8b0) list_touch_menu_pane

0xbeef,	// (0x0003b8b8) list_single_touch_menu_pane_ParamLimits

0xbeef,	// (0x0003b8b8) list_single_touch_menu_pane

0xbf07,	// (0x0003b8d0) list_single_touch_menu_pane_t1

0x2218,	// (0x00031be1) bg_popup_sub_pane_cp7_ParamLimits

0x2218,	// (0x00031be1) bg_popup_sub_pane_cp7

0xbf15,	// (0x0003b8de) heading_sub_pane

0xbf1d,	// (0x0003b8e6) list_touch_info_pane_ParamLimits

0xbf1d,	// (0x0003b8e6) list_touch_info_pane

0xbf2c,	// (0x0003b8f5) list_single_touch_info_pane_ParamLimits

0xbf2c,	// (0x0003b8f5) list_single_touch_info_pane

0xbf3e,	// (0x0003b907) list_single_touch_info_pane_t1

0xbf4c,	// (0x0003b915) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0003f4a4) list_single_touch_info_pane_t

0x9119,	// (0x00038ae2) bg_popup_heading_pane_cp

0xbf5a,	// (0x0003b923) heading_sub_pane_t1

0x99ea,	// (0x000393b3) bg_popup_preview_window_pane_cp_ParamLimits

0x99ea,	// (0x000393b3) bg_popup_preview_window_pane_cp

0xbf15,	// (0x0003b8de) heading_preview_pane

0xbf1d,	// (0x0003b8e6) list_preview_pane_ParamLimits

0xbf1d,	// (0x0003b8e6) list_preview_pane

0xbf68,	// (0x0003b931) popup_preview_window_g1

0xbf2c,	// (0x0003b8f5) list_single_preview_pane_ParamLimits

0xbf2c,	// (0x0003b8f5) list_single_preview_pane

0xbf70,	// (0x0003b939) list_single_preview_pane_g1

0xbf78,	// (0x0003b941) list_single_preview_pane_t1

0xbf3e,	// (0x0003b907) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0003f4a9) list_single_preview_pane_t

0xbf86,	// (0x0003b94f) bg_popup_heading_pane_cp2_ParamLimits

0xbf86,	// (0x0003b94f) bg_popup_heading_pane_cp2

0xbf9c,	// (0x0003b965) heading_preview_pane_g1

0xbfa4,	// (0x0003b96d) heading_preview_pane_t1_ParamLimits

0xbfa4,	// (0x0003b96d) heading_preview_pane_t1

0x226b,	// (0x00031c34) soft_indicator_pane_t1_ParamLimits

0x27cd,	// (0x00032196) scroll_pane_ParamLimits

0x65c7,	// (0x00035f90) scroll_sc2_left_pane

0x65d0,	// (0x00035f99) scroll_sc2_right_pane

0x65ef,	// (0x00035fb8) scroll_bg_pane_g1_ParamLimits

0x6604,	// (0x00035fcd) scroll_bg_pane_g2_ParamLimits

0x661c,	// (0x00035fe5) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0003f087) scroll_bg_pane_g_ParamLimits

0x65ef,	// (0x00035fb8) scroll_handle_pane_g1_ParamLimits

0x663e,	// (0x00036007) scroll_handle_pane_g2_ParamLimits

0x661c,	// (0x00035fe5) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0003f08e) scroll_handle_pane_g_ParamLimits

0x6f1d,	// (0x000368e6) popup_choice_list_window_ParamLimits

0x6f1d,	// (0x000368e6) popup_choice_list_window

0x98c0,	// (0x00039289) choice_list_pane

0x9942,	// (0x0003930b) cell_toolbar_pane_t1

0x996a,	// (0x00039333) toolbar_button_pane_ParamLimits

0xaa2f,	// (0x0003a3f8) ai_gene_pane_1_t2_ParamLimits

0xaa2f,	// (0x0003a3f8) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0003f2b6) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0003f2b6) ai_gene_pane_1_t

0xbfc1,	// (0x0003b98a) scroll_sc2_left_pane_g1

0xbfc1,	// (0x0003b98a) scroll_sc2_right_pane_g1

0x9440,	// (0x00038e09) bg_popup_sub_pane_cp10

0xbfcb,	// (0x0003b994) list_choice_list_pane

0xbfe4,	// (0x0003b9ad) list_single_choice_list_pane_ParamLimits

0xbfe4,	// (0x0003b9ad) list_single_choice_list_pane

0xbffc,	// (0x0003b9c5) list_single_choice_list_pane_g1

0x29bb,	// (0x00032384) list_single_choice_list_pane_t1_ParamLimits

0x29bb,	// (0x00032384) list_single_choice_list_pane_t1

0xc004,	// (0x0003b9cd) choice_list_pane_g1

0xc00c,	// (0x0003b9d5) choice_list_pane_t1

0x21a8,	// (0x00031b71) input_focus_pane_cp11

0x2b39,	// (0x00032502) title_pane_stacon_g2_ParamLimits

0x2b39,	// (0x00032502) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0003f06d) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0003f06d) title_pane_stacon_g

0x9119,	// (0x00038ae2) cursor_press_pane

0x6fd7,	// (0x000369a0) popup_fep_hwr_window_ParamLimits

0x6fd7,	// (0x000369a0) popup_fep_hwr_window

0x7061,	// (0x00036a2a) popup_fep_vkb_window_ParamLimits

0x7061,	// (0x00036a2a) popup_fep_vkb_window

0xc01a,	// (0x0003b9e3) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0003f4d2) fep_vkb_side_pane_g_ParamLimits

0x7b3a,	// (0x00037503) fep_hwr_candidate_pane_ParamLimits

0x7b3a,	// (0x00037503) fep_hwr_candidate_pane

0x7b64,	// (0x0003752d) fep_hwr_side_pane_ParamLimits

0x7b64,	// (0x0003752d) fep_hwr_side_pane

0x7b86,	// (0x0003754f) fep_hwr_top_pane_ParamLimits

0x7b86,	// (0x0003754f) fep_hwr_top_pane

0x7b9e,	// (0x00037567) fep_hwr_write_pane_ParamLimits

0x7b9e,	// (0x00037567) fep_hwr_write_pane

0xfb09,	// (0x0003f4d2) fep_vkb_side_pane_g

0xc022,	// (0x0003b9eb) fep_hwr_top_pane_g1

0xc034,	// (0x0003b9fd) fep_hwr_top_pane_g2

0x7bd8,	// (0x000375a1) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0003f4ae) fep_hwr_top_pane_g

0x7bed,	// (0x000375b6) fep_hwr_top_text_pane

0x6793,	// (0x0003615c) fep_hwr_top_text_pane_g1

0xc06a,	// (0x0003ba33) fep_hwr_top_text_pane_t1

0x7cf7,	// (0x000376c0) fep_hwr_candidate_pane_g1

0xc2b5,	// (0x0003bc7e) fep_vkb_keypad_pane_g3_ParamLimits

0xc2b5,	// (0x0003bc7e) fep_vkb_keypad_pane_g3

0xc2e1,	// (0x0003bcaa) fep_vkb_keypad_pane_g4_ParamLimits

0xc2e1,	// (0x0003bcaa) fep_vkb_keypad_pane_g4

0xc358,	// (0x0003bd21) fep_vkb_bottom_pane_g2_ParamLimits

0xc358,	// (0x0003bd21) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0003f4d9) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0003f4d9) fep_vkb_bottom_pane_g

0xbfc1,	// (0x0003b98a) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0003f4e3) cell_vkb_side_pane_g

0xc3e3,	// (0x0003bdac) cell_vkb_side_pane_t1

0xc3f1,	// (0x0003bdba) cell_vkb_side_pane_t1_copy1

0xbfc1,	// (0x0003b98a) bg_fep_vkb_candidate_pane_g2

0xc535,	// (0x0003befe) cell_vkb_candidate_pane_ParamLimits

0xc078,	// (0x0003ba41) aid_size_cell_vkb_ParamLimits

0xc078,	// (0x0003ba41) aid_size_cell_vkb

0xc535,	// (0x0003befe) cell_vkb_candidate_pane

0x7d1e,	// (0x000376e7) bg_popup_fep_shadow_pane_g1

0xc10a,	// (0x0003bad3) fep_vkb_bottom_pane_ParamLimits

0xc10a,	// (0x0003bad3) fep_vkb_bottom_pane

0xc147,	// (0x0003bb10) fep_vkb_candidate_pane_ParamLimits

0xc147,	// (0x0003bb10) fep_vkb_candidate_pane

0xc163,	// (0x0003bb2c) fep_vkb_keypad_pane_ParamLimits

0xc163,	// (0x0003bb2c) fep_vkb_keypad_pane

0xc196,	// (0x0003bb5f) fep_vkb_side_pane_ParamLimits

0xc196,	// (0x0003bb5f) fep_vkb_side_pane

0xc1d2,	// (0x0003bb9b) fep_vkb_top_pane_ParamLimits

0xc1d2,	// (0x0003bb9b) fep_vkb_top_pane

0xc20e,	// (0x0003bbd7) fep_vkb_top_pane_g1_ParamLimits

0xc20e,	// (0x0003bbd7) fep_vkb_top_pane_g1

0xc21d,	// (0x0003bbe6) fep_vkb_top_pane_g2_ParamLimits

0xc21d,	// (0x0003bbe6) fep_vkb_top_pane_g2

0xc22c,	// (0x0003bbf5) fep_vkb_top_pane_g3_ParamLimits

0xc22c,	// (0x0003bbf5) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0003f4c9) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0003f4c9) fep_vkb_top_pane_g

0xc24a,	// (0x0003bc13) fep_vkb_top_text_pane_ParamLimits

0xc24a,	// (0x0003bc13) fep_vkb_top_text_pane

0xc25b,	// (0x0003bc24) fep_vkb_side_pane_g1_ParamLimits

0xc25b,	// (0x0003bc24) fep_vkb_side_pane_g1

0xc2a4,	// (0x0003bc6d) grid_vkb_side_pane_ParamLimits

0xc2a4,	// (0x0003bc6d) grid_vkb_side_pane

0x7d26,	// (0x000376ef) bg_popup_fep_shadow_pane_g2

0x7d2f,	// (0x000376f8) bg_popup_fep_shadow_pane_g3

0x7d37,	// (0x00037700) bg_popup_fep_shadow_pane_g4

0x7d40,	// (0x00037709) bg_popup_fep_shadow_pane_g5

0x7d4a,	// (0x00037713) bg_popup_fep_shadow_pane_g6

0x7d52,	// (0x0003771b) bg_popup_fep_shadow_pane_g7

0x28ca,	// (0x00032293) bg_popup_fep_shadow_pane_g8

0xc303,	// (0x0003bccc) grid_vkb_keypad_number_pane_ParamLimits

0xc303,	// (0x0003bccc) grid_vkb_keypad_number_pane

0xc317,	// (0x0003bce0) grid_vkb_keypad_pane_ParamLimits

0xc317,	// (0x0003bce0) grid_vkb_keypad_pane

0xc33d,	// (0x0003bd06) fep_vkb_bottom_pane_g1_ParamLimits

0xc33d,	// (0x0003bd06) fep_vkb_bottom_pane_g1

0xc366,	// (0x0003bd2f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc366,	// (0x0003bd2f) grid_vkb_keypad_bottom_left_pane

0xc37b,	// (0x0003bd44) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc37b,	// (0x0003bd44) grid_vkb_keypad_bottom_right_pane

0xc390,	// (0x0003bd59) fep_vkb_top_text_pane_g1

0xc3ab,	// (0x0003bd74) fep_vkb_top_text_pane_t1

0xc3c0,	// (0x0003bd89) cell_vkb_side_pane_ParamLimits

0xc3c0,	// (0x0003bd89) cell_vkb_side_pane

0xbfc1,	// (0x0003b98a) cell_vkb_side_pane_g1

0xc3ff,	// (0x0003bdc8) cell_vkb_keypad_pane_ParamLimits

0xc3ff,	// (0x0003bdc8) cell_vkb_keypad_pane

0xc48c,	// (0x0003be55) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0003f4f6) bg_popup_fep_shadow_pane_g

0x7d64,	// (0x0003772d) cell_hwr_side_pane_g1

0x7d64,	// (0x0003772d) cell_hwr_side_pane_g2

0xc496,	// (0x0003be5f) cell_vkb_keypad_pane_t1

0xc4a4,	// (0x0003be6d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4a4,	// (0x0003be6d) cell_vkb_keypad_bottom_left_pane

0xc4c1,	// (0x0003be8a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4c1,	// (0x0003be8a) cell_vkb_keypad_bottom_right_pane

0xbfc1,	// (0x0003b98a) cell_vkb_keypad_bottom_left_pane_g1

0xbfc1,	// (0x0003b98a) cell_vkb_keypad_bottom_right_pane_g1

0xc4fa,	// (0x0003bec3) cell_vkb_keypad_number_pane_ParamLimits

0xc4fa,	// (0x0003bec3) cell_vkb_keypad_number_pane

0xc519,	// (0x0003bee2) cell_vkb_keypad_number_pane_g1

0xc523,	// (0x0003beec) cell_vkb_keypad_number_pane_g2

0xc52c,	// (0x0003bef5) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0003f4e8) cell_vkb_keypad_number_pane_g

0xc496,	// (0x0003be5f) cell_vkb_keypad_number_pane_t1

0xc556,	// (0x0003bf1f) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x0003f509) cell_hwr_side_pane_g

0xc56f,	// (0x0003bf38) cell_hwr_side_pane_t1

0x7d6e,	// (0x00037737) cell_hwr_side_pane_t1_copy1

0x7d7c,	// (0x00037745) cell_hwr_candidate_pane_g1

0x7dab,	// (0x00037774) cell_hwr_candidate_pane_t1

0xbfc1,	// (0x0003b98a) cell_vkb_candidate_pane_g2

0xc5b3,	// (0x0003bf7c) cell_vkb_candidate_pane_t1

0x7b01,	// (0x000374ca) bg_popup_fep_shadow_pane_ParamLimits

0x7b01,	// (0x000374ca) bg_popup_fep_shadow_pane

0x7bb8,	// (0x00037581) bg_fep_hwr_top_pane_g4

0xc046,	// (0x0003ba0f) bg_hwr_side_pane_g1_ParamLimits

0xc046,	// (0x0003ba0f) bg_hwr_side_pane_g1

0x7c2b,	// (0x000375f4) cell_hwr_side_pane_ParamLimits

0x7c2b,	// (0x000375f4) cell_hwr_side_pane

0x7c68,	// (0x00037631) fep_hwr_write_pane_g1_ParamLimits

0x7c68,	// (0x00037631) fep_hwr_write_pane_g1

0x7c75,	// (0x0003763e) fep_hwr_write_pane_g2_ParamLimits

0x7c75,	// (0x0003763e) fep_hwr_write_pane_g2

0x7c82,	// (0x0003764b) fep_hwr_write_pane_g3_ParamLimits

0x7c82,	// (0x0003764b) fep_hwr_write_pane_g3

0x7c90,	// (0x00037659) fep_hwr_write_pane_g4_ParamLimits

0x7c90,	// (0x00037659) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0003f4b5) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0003f4b5) fep_hwr_write_pane_g

0x7bb8,	// (0x00037581) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7bb8,	// (0x00037581) bg_fep_hwr_candidate_pane_g2

0x7ca5,	// (0x0003766e) cell_hwr_candidate_pane_ParamLimits

0x7ca5,	// (0x0003766e) cell_hwr_candidate_pane

0x7cf7,	// (0x000376c0) fep_hwr_candidate_pane_g1_ParamLimits

0xc0a6,	// (0x0003ba6f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0a6,	// (0x0003ba6f) bg_popup_fep_shadow_pane_cp2

0xc23c,	// (0x0003bc05) fep_vkb_top_pane_g4_ParamLimits

0xc23c,	// (0x0003bc05) fep_vkb_top_pane_g4

0xc282,	// (0x0003bc4b) fep_vkb_side_pane_g2_ParamLimits

0xc282,	// (0x0003bc4b) fep_vkb_side_pane_g2

0x602a,	// (0x000359f3) list_setting_pane_t4_ParamLimits

0x602a,	// (0x000359f3) list_setting_pane_t4

0x60be,	// (0x00035a87) list_setting_number_pane_t5_ParamLimits

0x60be,	// (0x00035a87) list_setting_number_pane_t5

0x67f9,	// (0x000361c2) list_double_heading_pane_cp2_ParamLimits

0x67f9,	// (0x000361c2) list_double_heading_pane_cp2

0xc5c1,	// (0x0003bf8a) list_double_heading_pane_g1_cp2_ParamLimits

0xc5c1,	// (0x0003bf8a) list_double_heading_pane_g1_cp2

0xc5cd,	// (0x0003bf96) list_double_heading_pane_g2_cp2_ParamLimits

0xc5cd,	// (0x0003bf96) list_double_heading_pane_g2_cp2

0xc5e1,	// (0x0003bfaa) list_double_heading_pane_t1_cp2_ParamLimits

0xc5e1,	// (0x0003bfaa) list_double_heading_pane_t1_cp2

0xc5f7,	// (0x0003bfc0) list_double_heading_pane_t2_cp2_ParamLimits

0xc5f7,	// (0x0003bfc0) list_double_heading_pane_t2_cp2

0x21a0,	// (0x00031b69) aid_value_unit2

0x57be,	// (0x00035187) popup_preview_fixed_window

0x234b,	// (0x00031d14) bg_popup_preview_window_pane_cp02

0xc609,	// (0x0003bfd2) list_preview_fixed_pane

0xc64f,	// (0x0003c018) list_empty_pane_fp_ParamLimits

0xc64f,	// (0x0003c018) list_empty_pane_fp

0xc64f,	// (0x0003c018) list_single_cale_day_pane_fp_ParamLimits

0xc64f,	// (0x0003c018) list_single_cale_day_pane_fp

0xc64f,	// (0x0003c018) list_single_graphic_heading_pane_fp_ParamLimits

0xc64f,	// (0x0003c018) list_single_graphic_heading_pane_fp

0xc64f,	// (0x0003c018) list_single_graphic_pane_fp_ParamLimits

0xc64f,	// (0x0003c018) list_single_graphic_pane_fp

0xc64f,	// (0x0003c018) list_single_heading_pane_fp_ParamLimits

0xc64f,	// (0x0003c018) list_single_heading_pane_fp

0xc64f,	// (0x0003c018) list_single_pane_fp_ParamLimits

0xc64f,	// (0x0003c018) list_single_pane_fp

0xc668,	// (0x0003c031) list_single_pane_fp_g1_ParamLimits

0xc668,	// (0x0003c031) list_single_pane_fp_g1

0x4524,	// (0x00033eed) list_single_pane_fp_g2_ParamLimits

0x4524,	// (0x00033eed) list_single_pane_fp_g2

0x45db,	// (0x00033fa4) list_single_pane_fp_g3_ParamLimits

0x45db,	// (0x00033fa4) list_single_pane_fp_g3

0xc674,	// (0x0003c03d) list_single_pane_fp_g4_ParamLimits

0xc674,	// (0x0003c03d) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x0003f51c) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x0003f51c) list_single_pane_fp_g

0x45ef,	// (0x00033fb8) list_single_pane_fp_t1_ParamLimits

0x45ef,	// (0x00033fb8) list_single_pane_fp_t1

0x4606,	// (0x00033fcf) list_single_graphic_pane_fp_g1_ParamLimits

0x4606,	// (0x00033fcf) list_single_graphic_pane_fp_g1

0xc668,	// (0x0003c031) list_single_graphic_pane_fp_g2_ParamLimits

0xc668,	// (0x0003c031) list_single_graphic_pane_fp_g2

0x4524,	// (0x00033eed) list_single_graphic_pane_fp_g3_ParamLimits

0x4524,	// (0x00033eed) list_single_graphic_pane_fp_g3

0x45db,	// (0x00033fa4) list_single_graphic_pane_fp_g4_ParamLimits

0x45db,	// (0x00033fa4) list_single_graphic_pane_fp_g4

0xc674,	// (0x0003c03d) list_single_graphic_pane_fp_g5_ParamLimits

0xc674,	// (0x0003c03d) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x0003f525) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x0003f525) list_single_graphic_pane_fp_g

0x4612,	// (0x00033fdb) list_single_graphic_pane_fp_t1_ParamLimits

0x4612,	// (0x00033fdb) list_single_graphic_pane_fp_t1

0x4606,	// (0x00033fcf) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4606,	// (0x00033fcf) list_single_graphic_heading_pane_fp_g1

0xc668,	// (0x0003c031) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc668,	// (0x0003c031) list_single_graphic_heading_pane_fp_g2

0x4524,	// (0x00033eed) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4524,	// (0x00033eed) list_single_graphic_heading_pane_fp_g3

0x45db,	// (0x00033fa4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x45db,	// (0x00033fa4) list_single_graphic_heading_pane_fp_g4

0xc674,	// (0x0003c03d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc674,	// (0x0003c03d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0003f525) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0003f525) list_single_graphic_heading_pane_fp_g

0x4628,	// (0x00033ff1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4628,	// (0x00033ff1) list_single_graphic_heading_pane_fp_t1

0x463e,	// (0x00034007) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x463e,	// (0x00034007) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x0003f530) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x0003f530) list_single_graphic_heading_pane_fp_t

0x4650,	// (0x00034019) list_single_cale_day_pane_fp_g1_ParamLimits

0x4650,	// (0x00034019) list_single_cale_day_pane_fp_g1

0xc680,	// (0x0003c049) list_single_cale_day_pane_fp_g2_ParamLimits

0xc680,	// (0x0003c049) list_single_cale_day_pane_fp_g2

0x4688,	// (0x00034051) list_single_cale_day_pane_fp_g3_ParamLimits

0x4688,	// (0x00034051) list_single_cale_day_pane_fp_g3

0x46b0,	// (0x00034079) list_single_cale_day_pane_fp_g4_ParamLimits

0x46b0,	// (0x00034079) list_single_cale_day_pane_fp_g4

0x46d4,	// (0x0003409d) list_single_cale_day_pane_fp_g5_ParamLimits

0x46d4,	// (0x0003409d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x0003f535) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x0003f535) list_single_cale_day_pane_fp_g

0x46f8,	// (0x000340c1) list_single_cale_day_pane_fp_t1_ParamLimits

0x46f8,	// (0x000340c1) list_single_cale_day_pane_fp_t1

0x471e,	// (0x000340e7) list_single_cale_day_pane_fp_t2_ParamLimits

0x471e,	// (0x000340e7) list_single_cale_day_pane_fp_t2

0x4737,	// (0x00034100) list_single_cale_day_pane_fp_t3_ParamLimits

0x4737,	// (0x00034100) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x0003f540) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x0003f540) list_single_cale_day_pane_fp_t

0xc668,	// (0x0003c031) list_empty_pane_fp_g1_ParamLimits

0xc668,	// (0x0003c031) list_empty_pane_fp_g1

0x4750,	// (0x00034119) list_empty_pane_fp_t1

0x475e,	// (0x00034127) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x0003f547) list_empty_pane_fp_t

0xc668,	// (0x0003c031) list_single_heading_pane_fp_g1_ParamLimits

0xc668,	// (0x0003c031) list_single_heading_pane_fp_g1

0x4524,	// (0x00033eed) list_single_heading_pane_fp_g2_ParamLimits

0x4524,	// (0x00033eed) list_single_heading_pane_fp_g2

0x45db,	// (0x00033fa4) list_single_heading_pane_fp_g3_ParamLimits

0x45db,	// (0x00033fa4) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x0003f54c) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0003f54c) list_single_heading_pane_fp_g

0x476c,	// (0x00034135) list_single_heading_pane_fp_t1_ParamLimits

0x476c,	// (0x00034135) list_single_heading_pane_fp_t1

0x477e,	// (0x00034147) list_single_heading_pane_fp_t2_ParamLimits

0x477e,	// (0x00034147) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0003f553) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0003f553) list_single_heading_pane_fp_t

0x29d0,	// (0x00032399) aid_size_cell_fast

0x232e,	// (0x00031cf7) soft_indicator_pane_cp1_t1

0x2a0d,	// (0x000323d6) cell_app_pane_cp2_ParamLimits

0x2a0d,	// (0x000323d6) cell_app_pane_cp2

0x7b23,	// (0x000374ec) fep_hwr_candidate_drop_down_list_pane

0x7d11,	// (0x000376da) fep_hwr_candidate_pane_g3_ParamLimits

0x7d11,	// (0x000376da) fep_hwr_candidate_pane_g3

0x3759,	// (0x00033122) fep_hwr_candidate_pane_g4_ParamLimits

0x3759,	// (0x00033122) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0003f4c2) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0003f4c2) fep_hwr_candidate_pane_g

0xc136,	// (0x0003baff) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc136,	// (0x0003baff) fep_vkb_candidate_drop_down_list_pane

0xc55e,	// (0x0003bf27) fep_vkb_candidate_pane_g3

0xc566,	// (0x0003bf2f) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0003f4ef) fep_vkb_candidate_pane_g

0x7d7c,	// (0x00037745) cell_hwr_candidate_pane_g1_ParamLimits

0x7d8a,	// (0x00037753) cell_hwr_candidate_pane_g3_ParamLimits

0x7d8a,	// (0x00037753) cell_hwr_candidate_pane_g3

0xde86,	// (0x0003d84f) cell_hwr_candidate_pane_g4_ParamLimits

0xde86,	// (0x0003d84f) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x0003f50e) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x0003f50e) cell_hwr_candidate_pane_g

0xc57d,	// (0x0003bf46) cell_vkb_candidate_pane_g3_ParamLimits

0xc57d,	// (0x0003bf46) cell_vkb_candidate_pane_g3

0xc598,	// (0x0003bf61) cell_vkb_candidate_pane_g4_ParamLimits

0xc598,	// (0x0003bf61) cell_vkb_candidate_pane_g4

0xc68c,	// (0x0003c055) cell_app_pane_cp2_g1_ParamLimits

0xc68c,	// (0x0003c055) cell_app_pane_cp2_g1

0xc6aa,	// (0x0003c073) cell_app_pane_cp2_g2_ParamLimits

0xc6aa,	// (0x0003c073) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x0003f558) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x0003f558) cell_app_pane_cp2_g

0xc6b6,	// (0x0003c07f) cell_app_pane_cp2_t1_ParamLimits

0xc6b6,	// (0x0003c07f) cell_app_pane_cp2_t1

0x285a,	// (0x00032223) grid_highlight_pane_cp1_ParamLimits

0x285a,	// (0x00032223) grid_highlight_pane_cp1

0x7dc9,	// (0x00037792) cell_hwr_candidate_pane_cp1_ParamLimits

0x7dc9,	// (0x00037792) cell_hwr_candidate_pane_cp1

0x7d7c,	// (0x00037745) fep_hwr_candidate_drop_down_list_pane_g1

0x7ded,	// (0x000377b6) fep_hwr_candidate_drop_down_list_pane_g2

0x7dfa,	// (0x000377c3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x0003f55d) fep_hwr_candidate_drop_down_list_pane_g

0x7e07,	// (0x000377d0) fep_hwr_candidate_drop_down_list_scroll_pane

0x7e10,	// (0x000377d9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7e10,	// (0x000377d9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7e1d,	// (0x000377e6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7e1d,	// (0x000377e6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7e2a,	// (0x000377f3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7e2a,	// (0x000377f3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7e37,	// (0x00037800) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7e37,	// (0x00037800) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7e52,	// (0x0003781b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7e52,	// (0x0003781b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7e6d,	// (0x00037836) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7e6d,	// (0x00037836) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7e88,	// (0x00037851) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7e88,	// (0x00037851) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7ea3,	// (0x0003786c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7ea3,	// (0x0003786c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x0003f564) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x0003f564) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc6c8,	// (0x0003c091) cell_vkb_candidate_pane_cp1_ParamLimits

0xc6c8,	// (0x0003c091) cell_vkb_candidate_pane_cp1

0xc23c,	// (0x0003bc05) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc23c,	// (0x0003bc05) fep_vkb_candidate_drop_down_list_pane_g1

0xc6ee,	// (0x0003c0b7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc6ee,	// (0x0003c0b7) fep_vkb_candidate_drop_down_list_pane_g2

0xc6fb,	// (0x0003c0c4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc6fb,	// (0x0003c0c4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbac,	// (0x0003f575) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbac,	// (0x0003f575) fep_vkb_candidate_drop_down_list_pane_g

0xc708,	// (0x0003c0d1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc708,	// (0x0003c0d1) fep_vkb_candidate_drop_down_list_scroll_pane

0xc715,	// (0x0003c0de) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc715,	// (0x0003c0de) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc722,	// (0x0003c0eb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc722,	// (0x0003c0eb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc72e,	// (0x0003c0f7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc72e,	// (0x0003c0f7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc73a,	// (0x0003c103) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc73a,	// (0x0003c103) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc75b,	// (0x0003c124) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc75b,	// (0x0003c124) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc77c,	// (0x0003c145) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc77c,	// (0x0003c145) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc79d,	// (0x0003c166) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc79d,	// (0x0003c166) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7be,	// (0x0003c187) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7be,	// (0x0003c187) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb3,	// (0x0003f57c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb3,	// (0x0003f57c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x58de,	// (0x000352a7) title_pane_g1_ParamLimits

0x58eb,	// (0x000352b4) title_pane_g2_ParamLimits

0xf529,	// (0x0003eef2) title_pane_g_ParamLimits

0x6783,	// (0x0003614c) aid_call2_pane

0x678b,	// (0x00036154) aid_call_pane

0x6793,	// (0x0003615c) popup_clock_analogue_window_g1

0x6793,	// (0x0003615c) popup_clock_analogue_window_g2

0x679b,	// (0x00036164) popup_clock_analogue_window_g3

0x67a4,	// (0x0003616d) popup_clock_analogue_window_g4

0x21b2,	// (0x00031b7b) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0003f09c) popup_clock_analogue_window_g

0x67ac,	// (0x00036175) popup_clock_analogue_window_t1

0x6859,	// (0x00036222) clock_digital_number_pane_ParamLimits

0x6859,	// (0x00036222) clock_digital_number_pane

0x6865,	// (0x0003622e) clock_digital_number_pane_cp02_ParamLimits

0x6865,	// (0x0003622e) clock_digital_number_pane_cp02

0x6871,	// (0x0003623a) clock_digital_number_pane_cp03_ParamLimits

0x6871,	// (0x0003623a) clock_digital_number_pane_cp03

0x687d,	// (0x00036246) clock_digital_number_pane_cp04_ParamLimits

0x687d,	// (0x00036246) clock_digital_number_pane_cp04

0x6889,	// (0x00036252) clock_digital_separator_pane_ParamLimits

0x6889,	// (0x00036252) clock_digital_separator_pane

0x6895,	// (0x0003625e) popup_clock_digital_window_t1_ParamLimits

0x6895,	// (0x0003625e) popup_clock_digital_window_t1

0x21b2,	// (0x00031b7b) clock_digital_number_pane_g1

0x21b2,	// (0x00031b7b) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0003f0a7) clock_digital_number_pane_g

0x21b2,	// (0x00031b7b) clock_digital_separator_pane_g1

0x21b2,	// (0x00031b7b) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0003f0a7) clock_digital_separator_pane_g

0x947c,	// (0x00038e45) aid_fill_nsta_ParamLimits

0x95c8,	// (0x00038f91) indicator_nsta_pane_ParamLimits

0x9759,	// (0x00039122) popup_clock_analogue_window

0x9759,	// (0x00039122) popup_clock_digital_window

0xb9ed,	// (0x0003b3b6) grid_indicator_nsta_pane_ParamLimits

0xba16,	// (0x0003b3df) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0003f442) clock_nsta_pane_t

0x656c,	// (0x00035f35) aid_size_max_handle

0x6576,	// (0x00035f3f) aid_size_min_handle

0x9119,	// (0x00038ae2) editor_scroll_pane

0xc7d9,	// (0x0003c1a2) ex_editor_pane

0x2996,	// (0x0003235f) scroll_pane_cp13

0x27f9,	// (0x000321c2) scroll_pane_cp14

0x67e1,	// (0x000361aa) scroll_pane_cp36

0x680f,	// (0x000361d8) list_single_graphic_hl_pane_cp2_ParamLimits

0x680f,	// (0x000361d8) list_single_graphic_hl_pane_cp2

0xaf72,	// (0x0003a93b) list_single_graphic_hl_pane_ParamLimits

0xaf72,	// (0x0003a93b) list_single_graphic_hl_pane

0x4794,	// (0x0003415d) aid_size_min_hl_cp1

0xc7e1,	// (0x0003c1aa) list_highlight_pane_cp34_ParamLimits

0xc7e1,	// (0x0003c1aa) list_highlight_pane_cp34

0xc7f2,	// (0x0003c1bb) list_single_graphic_hl_pane_g1_ParamLimits

0xc7f2,	// (0x0003c1bb) list_single_graphic_hl_pane_g1

0x7ebe,	// (0x00037887) list_single_graphic_hl_pane_g2_ParamLimits

0x7ebe,	// (0x00037887) list_single_graphic_hl_pane_g2

0x7ebe,	// (0x00037887) list_single_graphic_hl_pane_g3_ParamLimits

0x7ebe,	// (0x00037887) list_single_graphic_hl_pane_g3

0x41be,	// (0x00033b87) list_single_graphic_hl_pane_g4_ParamLimits

0x41be,	// (0x00033b87) list_single_graphic_hl_pane_g4

0x7eca,	// (0x00037893) list_single_graphic_hl_pane_g5_ParamLimits

0x7eca,	// (0x00037893) list_single_graphic_hl_pane_g5

0x0004,

0xfbc4,	// (0x0003f58d) list_single_graphic_hl_pane_g_ParamLimits

0xfbc4,	// (0x0003f58d) list_single_graphic_hl_pane_g

0x7ede,	// (0x000378a7) list_single_graphic_hl_pane_t1_ParamLimits

0x7ede,	// (0x000378a7) list_single_graphic_hl_pane_t1

0xc7ff,	// (0x0003c1c8) aid_size_min_hl_cp2

0xc808,	// (0x0003c1d1) list_highlight_pane_cp34_cp2_ParamLimits

0xc808,	// (0x0003c1d1) list_highlight_pane_cp34_cp2

0xc7f2,	// (0x0003c1bb) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7f2,	// (0x0003c1bb) list_single_graphic_hl_pane_g1_cp2

0xc815,	// (0x0003c1de) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc815,	// (0x0003c1de) list_single_graphic_hl_pane_g2_cp2

0xc821,	// (0x0003c1ea) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc821,	// (0x0003c1ea) list_single_graphic_hl_pane_g3_cp2

0xc82f,	// (0x0003c1f8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc82f,	// (0x0003c1f8) list_single_graphic_hl_pane_g4_cp2

0xc83b,	// (0x0003c204) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc83b,	// (0x0003c204) list_single_graphic_hl_pane_g5_cp2

0x6de5,	// (0x000367ae) control_pane_g4_ParamLimits

0x6de5,	// (0x000367ae) control_pane_g4

0x9440,	// (0x00038e09) bg_popup_sub_pane_cp10_ParamLimits

0xbfcb,	// (0x0003b994) list_choice_list_pane_ParamLimits

0xbfda,	// (0x0003b9a3) scroll_pane_cp23

0x234b,	// (0x00031d14) bg_popup_preview_window_pane_cp02_ParamLimits

0xc609,	// (0x0003bfd2) list_preview_fixed_pane_ParamLimits

0xc61f,	// (0x0003bfe8) list_preview_fixed_pane_cp_ParamLimits

0xc61f,	// (0x0003bfe8) list_preview_fixed_pane_cp

0xc62b,	// (0x0003bff4) popup_preview_fixed_window_g1_ParamLimits

0xc62b,	// (0x0003bff4) popup_preview_fixed_window_g1

0xc637,	// (0x0003c000) popup_preview_fixed_window_g2_ParamLimits

0xc637,	// (0x0003c000) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x0003f515) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x0003f515) popup_preview_fixed_window_g

0x6403,	// (0x00035dcc) aid_navi_side_left_pane_ParamLimits

0x6418,	// (0x00035de1) aid_navi_side_right_pane_ParamLimits

0x6430,	// (0x00035df9) navi_icon_pane_stacon_ParamLimits

0x6444,	// (0x00035e0d) navi_navi_pane_stacon_ParamLimits

0x6430,	// (0x00035df9) navi_text_pane_stacon_ParamLimits

0x5675,	// (0x0003503e) main_text_info_pane

0xc865,	// (0x0003c22e) listscroll_text_info_pane

0xc86d,	// (0x0003c236) list_text_info_pane_ParamLimits

0xc86d,	// (0x0003c236) list_text_info_pane

0xc87c,	// (0x0003c245) scroll_pane_cp24_ParamLimits

0xc87c,	// (0x0003c245) scroll_pane_cp24

0xc89a,	// (0x0003c263) list_text_info_pane_t1_ParamLimits

0xc89a,	// (0x0003c263) list_text_info_pane_t1

0x6f3f,	// (0x00036908) popup_fast_swap2_window_ParamLimits

0x6f3f,	// (0x00036908) popup_fast_swap2_window

0xc8bf,	// (0x0003c288) aid_size_cell_fast2

0x21a8,	// (0x00031b71) bg_popup_window_pane_cp17

0xc8c9,	// (0x0003c292) heading_pane_cp2

0xc8d1,	// (0x0003c29a) listscroll_fast2_pane

0xc8d9,	// (0x0003c2a2) grid_fast2_pane

0xc8e3,	// (0x0003c2ac) listscroll_fast2_pane_g1

0xc8ed,	// (0x0003c2b6) listscroll_fast2_pane_g2

0x0001,

0xfbcf,	// (0x0003f598) listscroll_fast2_pane_g

0x2996,	// (0x0003235f) scroll_pane_cp26

0xc8f7,	// (0x0003c2c0) cell_fast2_pane_ParamLimits

0xc8f7,	// (0x0003c2c0) cell_fast2_pane

0xc90e,	// (0x0003c2d7) cell_fast2_pane_g1

0xc917,	// (0x0003c2e0) cell_fast2_pane_g2

0xc920,	// (0x0003c2e9) cell_fast2_pane_g3

0x0002,

0xfbd4,	// (0x0003f59d) cell_fast2_pane_g

0x25c0,	// (0x00031f89) grid_highlight_pane_cp9

0x6f01,	// (0x000368ca) main_eswt_pane_ParamLimits

0x6f01,	// (0x000368ca) main_eswt_pane

0xc891,	// (0x0003c25a) list_single_text_info_pane

0xc928,	// (0x0003c2f1) eswt_ctrl_button_pane

0xc928,	// (0x0003c2f1) eswt_ctrl_canvas_pane

0xc930,	// (0x0003c2f9) eswt_ctrl_combo_pane

0xc928,	// (0x0003c2f1) eswt_ctrl_default_pane

0xc928,	// (0x0003c2f1) eswt_ctrl_label_pane

0xc938,	// (0x0003c301) eswt_ctrl_wait_pane

0xc940,	// (0x0003c309) eswt_shell_pane

0x21a8,	// (0x00031b71) listscroll_eswt_app_pane

0xc960,	// (0x0003c329) popup_eswt_tasktip_window_ParamLimits

0xc960,	// (0x0003c329) popup_eswt_tasktip_window

0x99ea,	// (0x000393b3) bg_popup_window_pane_cp18

0xc979,	// (0x0003c342) eswt_control_pane_g1_ParamLimits

0xc979,	// (0x0003c342) eswt_control_pane_g1

0xc986,	// (0x0003c34f) eswt_control_pane_g2_ParamLimits

0xc986,	// (0x0003c34f) eswt_control_pane_g2

0xc993,	// (0x0003c35c) eswt_control_pane_g3_ParamLimits

0xc993,	// (0x0003c35c) eswt_control_pane_g3

0xc9a0,	// (0x0003c369) eswt_control_pane_g4_ParamLimits

0xc9a0,	// (0x0003c369) eswt_control_pane_g4

0x0003,

0xfbdb,	// (0x0003f5a4) eswt_control_pane_g_ParamLimits

0xfbdb,	// (0x0003f5a4) eswt_control_pane_g

0x285a,	// (0x00032223) bg_button_pane_ParamLimits

0x285a,	// (0x00032223) bg_button_pane

0x25d5,	// (0x00031f9e) common_borders_pane_copy2_ParamLimits

0x25d5,	// (0x00031f9e) common_borders_pane_copy2

0xc9ad,	// (0x0003c376) control_button_pane_g1_ParamLimits

0xc9ad,	// (0x0003c376) control_button_pane_g1

0xc9b9,	// (0x0003c382) control_button_pane_g2_ParamLimits

0xc9b9,	// (0x0003c382) control_button_pane_g2

0xc9c5,	// (0x0003c38e) control_button_pane_g3_ParamLimits

0xc9c5,	// (0x0003c38e) control_button_pane_g3

0x0002,

0xfbe4,	// (0x0003f5ad) control_button_pane_g_ParamLimits

0xfbe4,	// (0x0003f5ad) control_button_pane_g

0xc9d9,	// (0x0003c3a2) control_button_pane_t1

0xc9e7,	// (0x0003c3b0) control_button_pane_t2

0x0001,

0xfbeb,	// (0x0003f5b4) control_button_pane_t

0x9976,	// (0x0003933f) bg_button_pane_g1

0x9986,	// (0x0003934f) bg_button_pane_g2

0x997e,	// (0x00039347) bg_button_pane_g3

0x9996,	// (0x0003935f) bg_button_pane_g4

0x998e,	// (0x00039357) bg_button_pane_g5

0x999e,	// (0x00039367) bg_button_pane_g6

0x99a6,	// (0x0003936f) bg_button_pane_g7

0x99b6,	// (0x0003937f) bg_button_pane_g8

0x99ae,	// (0x00039377) bg_button_pane_g9

0x0008,

0xf841,	// (0x0003f20a) bg_button_pane_g

0xbf86,	// (0x0003b94f) common_borders_pane_ParamLimits

0xbf86,	// (0x0003b94f) common_borders_pane

0xc979,	// (0x0003c342) eswt_control_pane_g1_copy1_ParamLimits

0xc979,	// (0x0003c342) eswt_control_pane_g1_copy1

0xc986,	// (0x0003c34f) eswt_control_pane_g2_copy1_ParamLimits

0xc986,	// (0x0003c34f) eswt_control_pane_g2_copy1

0xc993,	// (0x0003c35c) eswt_control_pane_g3_copy1_ParamLimits

0xc993,	// (0x0003c35c) eswt_control_pane_g3_copy1

0xc9a0,	// (0x0003c369) eswt_control_pane_g4_copy1_ParamLimits

0xc9a0,	// (0x0003c369) eswt_control_pane_g4_copy1

0xbfc1,	// (0x0003b98a) bg_eswt_ctrl_canvas_pane_g1

0xbf86,	// (0x0003b94f) common_borders_pane_cp2_ParamLimits

0xbf86,	// (0x0003b94f) common_borders_pane_cp2

0xbf86,	// (0x0003b94f) common_borders_pane_cp3_ParamLimits

0xbf86,	// (0x0003b94f) common_borders_pane_cp3

0xc9f5,	// (0x0003c3be) separator_horizontal_pane

0xc9fd,	// (0x0003c3c6) separator_vertical_pane

0xc979,	// (0x0003c342) eswt_control_pane_g1_copy2_ParamLimits

0xc979,	// (0x0003c342) eswt_control_pane_g1_copy2

0xc986,	// (0x0003c34f) eswt_control_pane_g2_copy2_ParamLimits

0xc986,	// (0x0003c34f) eswt_control_pane_g2_copy2

0xc993,	// (0x0003c35c) eswt_control_pane_g3_copy2_ParamLimits

0xc993,	// (0x0003c35c) eswt_control_pane_g3_copy2

0xc9a0,	// (0x0003c369) eswt_control_pane_g4_copy2_ParamLimits

0xc9a0,	// (0x0003c369) eswt_control_pane_g4_copy2

0x21a8,	// (0x00031b71) common_borders_pane_cp4

0xca06,	// (0x0003c3cf) separator_horizontal_pane_g1

0xca0f,	// (0x0003c3d8) separator_horizontal_pane_g2

0xca18,	// (0x0003c3e1) separator_horizontal_pane_g3

0x0002,

0xfbf0,	// (0x0003f5b9) separator_horizontal_pane_g

0xc979,	// (0x0003c342) eswt_control_pane_g1_copy3_ParamLimits

0xc979,	// (0x0003c342) eswt_control_pane_g1_copy3

0xc986,	// (0x0003c34f) eswt_control_pane_g2_copy3_ParamLimits

0xc986,	// (0x0003c34f) eswt_control_pane_g2_copy3

0xc993,	// (0x0003c35c) eswt_control_pane_g3_copy3_ParamLimits

0xc993,	// (0x0003c35c) eswt_control_pane_g3_copy3

0xc9a0,	// (0x0003c369) eswt_control_pane_g4_copy3_ParamLimits

0xc9a0,	// (0x0003c369) eswt_control_pane_g4_copy3

0x21a8,	// (0x00031b71) common_borders_pane_cp5

0xca21,	// (0x0003c3ea) separator_vertical_pane_g1

0xca2a,	// (0x0003c3f3) separator_vertical_pane_g2

0xca33,	// (0x0003c3fc) separator_vertical_pane_g3

0x0002,

0xfbf7,	// (0x0003f5c0) separator_vertical_pane_g

0xc979,	// (0x0003c342) eswt_control_pane_g1_copy4_ParamLimits

0xc979,	// (0x0003c342) eswt_control_pane_g1_copy4

0xc986,	// (0x0003c34f) eswt_control_pane_g2_copy4_ParamLimits

0xc986,	// (0x0003c34f) eswt_control_pane_g2_copy4

0xc993,	// (0x0003c35c) eswt_control_pane_g3_copy4_ParamLimits

0xc993,	// (0x0003c35c) eswt_control_pane_g3_copy4

0xc9a0,	// (0x0003c369) eswt_control_pane_g4_copy4_ParamLimits

0xc9a0,	// (0x0003c369) eswt_control_pane_g4_copy4

0xca3c,	// (0x0003c405) eswt_ctrl_combo_button_pane

0xca44,	// (0x0003c40d) eswt_ctrl_input_pane

0xca4c,	// (0x0003c415) popup_choice_list_window_cp70

0xca54,	// (0x0003c41d) eswt_ctrl_input_pane_t1

0x21a8,	// (0x00031b71) input_focus_pane_cp70

0xbf86,	// (0x0003b94f) bg_button_pane_cp70_ParamLimits

0xbf86,	// (0x0003b94f) bg_button_pane_cp70

0xca62,	// (0x0003c42b) eswt_ctrl_combo_button_pane_g1

0xca6a,	// (0x0003c433) wait_bar_pane_cp70

0x99ea,	// (0x000393b3) bg_popup_window_pane_cp70_ParamLimits

0x99ea,	// (0x000393b3) bg_popup_window_pane_cp70

0xca72,	// (0x0003c43b) popup_eswt_tasktip_window_t1

0xca88,	// (0x0003c451) wait_bar_pane_cp71_ParamLimits

0xca88,	// (0x0003c451) wait_bar_pane_cp71

0xca94,	// (0x0003c45d) grid_eswt_app_pane

0x65c7,	// (0x00035f90) scroll_pane_cp70

0xca9d,	// (0x0003c466) cell_eswt_app_pane_ParamLimits

0xca9d,	// (0x0003c466) cell_eswt_app_pane

0xcacf,	// (0x0003c498) cell_eswt_app_pane_g1_ParamLimits

0xcacf,	// (0x0003c498) cell_eswt_app_pane_g1

0xcafe,	// (0x0003c4c7) cell_eswt_app_pane_g2_ParamLimits

0xcafe,	// (0x0003c4c7) cell_eswt_app_pane_g2

0x0001,

0xfbfe,	// (0x0003f5c7) cell_eswt_app_pane_g_ParamLimits

0xfbfe,	// (0x0003f5c7) cell_eswt_app_pane_g

0xcb27,	// (0x0003c4f0) cell_eswt_app_pane_t1_ParamLimits

0xcb27,	// (0x0003c4f0) cell_eswt_app_pane_t1

0xcb59,	// (0x0003c522) grid_highlight_pane_cp70_ParamLimits

0xcb59,	// (0x0003c522) grid_highlight_pane_cp70

0x8fdf,	// (0x000389a8) set_content_pane_g1

0x93c7,	// (0x00038d90) status_small_volume_pane

0x7ef4,	// (0x000378bd) status_small_volume_pane_g1

0x7efc,	// (0x000378c5) volume_small2_pane

0x7f05,	// (0x000378ce) volume_small2_pane_g1

0x7f0e,	// (0x000378d7) volume_small2_pane_g2

0x7f17,	// (0x000378e0) volume_small2_pane_g3

0x7f20,	// (0x000378e9) volume_small2_pane_g4

0x7f29,	// (0x000378f2) volume_small2_pane_g5

0x7f32,	// (0x000378fb) volume_small2_pane_g6

0x7f3b,	// (0x00037904) volume_small2_pane_g7

0x7f44,	// (0x0003790d) volume_small2_pane_g8

0x7f4d,	// (0x00037916) volume_small2_pane_g9

0x7f56,	// (0x0003791f) volume_small2_pane_g10

0x0009,

0xfc03,	// (0x0003f5cc) volume_small2_pane_g

0xc390,	// (0x0003bd59) fep_vkb_top_text_pane_g1_ParamLimits

0xc3ab,	// (0x0003bd74) fep_vkb_top_text_pane_t1_ParamLimits

0xc643,	// (0x0003c00c) popup_preview_fixed_window_g3_ParamLimits

0xc643,	// (0x0003c00c) popup_preview_fixed_window_g3

0x7452,	// (0x00036e1b) popup_toolbar_trans_pane

0xad42,	// (0x0003a70b) aid_height_set_list_ParamLimits

0xad53,	// (0x0003a71c) aid_size_parent_ParamLimits

0x9440,	// (0x00038e09) list_highlight_pane_cp2_ParamLimits

0x8fdf,	// (0x000389a8) set_content_pane_g1_ParamLimits

0x798d,	// (0x00037356) list_single_image_pane_ParamLimits

0x798d,	// (0x00037356) list_single_image_pane

0xcb65,	// (0x0003c52e) aid_size_cell_image_ParamLimits

0xcb65,	// (0x0003c52e) aid_size_cell_image

0xcb72,	// (0x0003c53b) grid_single_image_pane_ParamLimits

0xcb72,	// (0x0003c53b) grid_single_image_pane

0x2868,	// (0x00032231) list_single_image_pane_g1_ParamLimits

0x2868,	// (0x00032231) list_single_image_pane_g1

0x2874,	// (0x0003223d) list_single_image_pane_g2_ParamLimits

0x2874,	// (0x0003223d) list_single_image_pane_g2

0x0001,

0xfc18,	// (0x0003f5e1) list_single_image_pane_g_ParamLimits

0xfc18,	// (0x0003f5e1) list_single_image_pane_g

0xcb80,	// (0x0003c549) list_single_image_pane_t1_ParamLimits

0xcb80,	// (0x0003c549) list_single_image_pane_t1

0xcb96,	// (0x0003c55f) cell_image_list_pane_ParamLimits

0xcb96,	// (0x0003c55f) cell_image_list_pane

0xcbae,	// (0x0003c577) cell_image_list_pane_g1

0xcbb7,	// (0x0003c580) cell_image_list_pane_g2

0x0001,

0xfc1d,	// (0x0003f5e6) cell_image_list_pane_g

0xcbc0,	// (0x0003c589) aid_size_cell_tb_trans_pane

0x285a,	// (0x00032223) bg_tb_trans_pane

0xcbd2,	// (0x0003c59b) grid_tb_trans_pane

0x9976,	// (0x0003933f) bg_tb_trans_pane_g1

0x9986,	// (0x0003934f) bg_tb_trans_pane_g2

0x997e,	// (0x00039347) bg_tb_trans_pane_g3

0x9996,	// (0x0003935f) bg_tb_trans_pane_g4

0x998e,	// (0x00039357) bg_tb_trans_pane_g5

0x99b6,	// (0x0003937f) bg_tb_trans_pane_g6

0x99ae,	// (0x00039377) bg_tb_trans_pane_g7

0x999e,	// (0x00039367) bg_tb_trans_pane_g8

0x99a6,	// (0x0003936f) bg_tb_trans_pane_g9

0x0008,

0xfc22,	// (0x0003f5eb) bg_tb_trans_pane_g

0xcbe6,	// (0x0003c5af) cell_toolbar_trans_pane_ParamLimits

0xcbe6,	// (0x0003c5af) cell_toolbar_trans_pane

0xbfc1,	// (0x0003b98a) cell_toolbar_trans_pane_g1

0xbbf9,	// (0x0003b5c2) list_form2_midp_pane_t1

0xbc07,	// (0x0003b5d0) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0003f488) list_form2_midp_pane_t

0xbc15,	// (0x0003b5de) scroll_pane_cp51_ParamLimits

0xbddc,	// (0x0003b7a5) form2_midp_wait_pane_g1

0xbde5,	// (0x0003b7ae) form2_midp_wait_pane_g2

0xbdee,	// (0x0003b7b7) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0003f49d) form2_midp_wait_pane_g

0x2218,	// (0x00031be1) list_highlight_pane_cp21_ParamLimits

0xbe27,	// (0x0003b7f0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe36,	// (0x0003b7ff) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7943,	// (0x0003730c) list_single_2graphic_im_pane_ParamLimits

0x7943,	// (0x0003730c) list_single_2graphic_im_pane

0xcc0c,	// (0x0003c5d5) list_single_2graphic_im_pane_g1_ParamLimits

0xcc0c,	// (0x0003c5d5) list_single_2graphic_im_pane_g1

0xcc1d,	// (0x0003c5e6) list_single_2graphic_im_pane_g2_ParamLimits

0xcc1d,	// (0x0003c5e6) list_single_2graphic_im_pane_g2

0xcc29,	// (0x0003c5f2) list_single_2graphic_im_pane_g3_ParamLimits

0xcc29,	// (0x0003c5f2) list_single_2graphic_im_pane_g3

0x0003,

0xfc35,	// (0x0003f5fe) list_single_2graphic_im_pane_g_ParamLimits

0xfc35,	// (0x0003f5fe) list_single_2graphic_im_pane_g

0xcc49,	// (0x0003c612) list_single_2graphic_im_pane_t1_ParamLimits

0xcc49,	// (0x0003c612) list_single_2graphic_im_pane_t1

0xc64f,	// (0x0003c018) list_single_graphic_2heading_pane_fp_ParamLimits

0xc64f,	// (0x0003c018) list_single_graphic_2heading_pane_fp

0x4606,	// (0x00033fcf) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4606,	// (0x00033fcf) list_single_graphic_2heading_pane_fp_g1

0xc668,	// (0x0003c031) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc668,	// (0x0003c031) list_single_graphic_2heading_pane_fp_g2

0x4524,	// (0x00033eed) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4524,	// (0x00033eed) list_single_graphic_2heading_pane_fp_g3

0x45db,	// (0x00033fa4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x45db,	// (0x00033fa4) list_single_graphic_2heading_pane_fp_g4

0xc674,	// (0x0003c03d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc674,	// (0x0003c03d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0003f525) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0003f525) list_single_graphic_2heading_pane_fp_g

0x479d,	// (0x00034166) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x479d,	// (0x00034166) list_single_graphic_2heading_pane_fp_t1

0x463e,	// (0x00034007) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x463e,	// (0x00034007) list_single_graphic_2heading_pane_fp_t2

0x47b3,	// (0x0003417c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x47b3,	// (0x0003417c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3e,	// (0x0003f607) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3e,	// (0x0003f607) list_single_graphic_2heading_pane_fp_t

0xc052,	// (0x0003ba1b) fep_hwr_write_pane_g5_ParamLimits

0xc052,	// (0x0003ba1b) fep_hwr_write_pane_g5

0xc05e,	// (0x0003ba27) fep_hwr_write_pane_g6_ParamLimits

0xc05e,	// (0x0003ba27) fep_hwr_write_pane_g6

0xc940,	// (0x0003c309) eswt_shell_pane_ParamLimits

0x99ea,	// (0x000393b3) bg_popup_window_pane_cp18_ParamLimits

0xc971,	// (0x0003c33a) heading_pane_cp70

0xca72,	// (0x0003c43b) popup_eswt_tasktip_window_t1_ParamLimits

0x94d3,	// (0x00038e9c) aid_touch_tab_arrow_left

0x94df,	// (0x00038ea8) aid_touch_tab_arrow_right

0x5904,	// (0x000352cd) title_pane_g3_ParamLimits

0x5904,	// (0x000352cd) title_pane_g3

0x2819,	// (0x000321e2) set_value_pane_g1

0x7452,	// (0x00036e1b) popup_toolbar_trans_pane_ParamLimits

0xcbc0,	// (0x0003c589) aid_size_cell_tb_trans_pane_ParamLimits

0x285a,	// (0x00032223) bg_tb_trans_pane_ParamLimits

0xcbd2,	// (0x0003c59b) grid_tb_trans_pane_ParamLimits

0x234b,	// (0x00031d14) cont_note_pane_ParamLimits

0x234b,	// (0x00031d14) cont_note_pane

0x25d5,	// (0x00031f9e) cont_snote2_single_text_pane_ParamLimits

0x25d5,	// (0x00031f9e) cont_snote2_single_text_pane

0x25d5,	// (0x00031f9e) cont_snote2_single_graphic_pane_ParamLimits

0x25d5,	// (0x00031f9e) cont_snote2_single_graphic_pane

0x9fdc,	// (0x000399a5) cont_note_wait_pane_ParamLimits

0x9fdc,	// (0x000399a5) cont_note_wait_pane

0x9fdc,	// (0x000399a5) cont_note_image_pane_ParamLimits

0x9fdc,	// (0x000399a5) cont_note_image_pane

0xcc7a,	// (0x0003c643) popup_note2_window_g1_ParamLimits

0xcc7a,	// (0x0003c643) popup_note2_window_g1

0xccab,	// (0x0003c674) popup_note2_window_t1_ParamLimits

0xccab,	// (0x0003c674) popup_note2_window_t1

0xccf0,	// (0x0003c6b9) popup_note2_window_t2_ParamLimits

0xccf0,	// (0x0003c6b9) popup_note2_window_t2

0xcd35,	// (0x0003c6fe) popup_note2_window_t3_ParamLimits

0xcd35,	// (0x0003c6fe) popup_note2_window_t3

0xcd7a,	// (0x0003c743) popup_note2_window_t4_ParamLimits

0xcd7a,	// (0x0003c743) popup_note2_window_t4

0x23cf,	// (0x00031d98) popup_note2_window_t5_ParamLimits

0x23cf,	// (0x00031d98) popup_note2_window_t5

0x0004,

0xfc4a,	// (0x0003f613) popup_note2_window_t_ParamLimits

0xfc4a,	// (0x0003f613) popup_note2_window_t

0xcda9,	// (0x0003c772) popup_note2_image_window_g1_ParamLimits

0xcda9,	// (0x0003c772) popup_note2_image_window_g1

0xcdb5,	// (0x0003c77e) popup_note2_image_window_g2_ParamLimits

0xcdb5,	// (0x0003c77e) popup_note2_image_window_g2

0x0001,

0xfc55,	// (0x0003f61e) popup_note2_image_window_g_ParamLimits

0xfc55,	// (0x0003f61e) popup_note2_image_window_g

0xcdc7,	// (0x0003c790) popup_note2_image_window_t1_ParamLimits

0xcdc7,	// (0x0003c790) popup_note2_image_window_t1

0xcddf,	// (0x0003c7a8) popup_note2_image_window_t2_ParamLimits

0xcddf,	// (0x0003c7a8) popup_note2_image_window_t2

0xcdf7,	// (0x0003c7c0) popup_note2_image_window_t3_ParamLimits

0xcdf7,	// (0x0003c7c0) popup_note2_image_window_t3

0x0002,

0xfc5a,	// (0x0003f623) popup_note2_image_window_t_ParamLimits

0xfc5a,	// (0x0003f623) popup_note2_image_window_t

0x9fea,	// (0x000399b3) popup_note2_wait_window_g1_ParamLimits

0x9fea,	// (0x000399b3) popup_note2_wait_window_g1

0xce13,	// (0x0003c7dc) popup_note2_wait_window_g2_ParamLimits

0xce13,	// (0x0003c7dc) popup_note2_wait_window_g2

0xa002,	// (0x000399cb) popup_note2_wait_window_g3_ParamLimits

0xa002,	// (0x000399cb) popup_note2_wait_window_g3

0x0002,

0xfc61,	// (0x0003f62a) popup_note2_wait_window_g_ParamLimits

0xfc61,	// (0x0003f62a) popup_note2_wait_window_g

0xce1f,	// (0x0003c7e8) popup_note2_wait_window_t1_ParamLimits

0xce1f,	// (0x0003c7e8) popup_note2_wait_window_t1

0xce3d,	// (0x0003c806) popup_note2_wait_window_t2_ParamLimits

0xce3d,	// (0x0003c806) popup_note2_wait_window_t2

0xce5b,	// (0x0003c824) popup_note2_wait_window_t3_ParamLimits

0xce5b,	// (0x0003c824) popup_note2_wait_window_t3

0xce6d,	// (0x0003c836) popup_note2_wait_window_t4_ParamLimits

0xce6d,	// (0x0003c836) popup_note2_wait_window_t4

0x0003,

0xfc68,	// (0x0003f631) popup_note2_wait_window_t_ParamLimits

0xfc68,	// (0x0003f631) popup_note2_wait_window_t

0xce7f,	// (0x0003c848) wait_bar2_pane_ParamLimits

0xce7f,	// (0x0003c848) wait_bar2_pane

0xce97,	// (0x0003c860) popup_snote2_single_text_window_g1_ParamLimits

0xce97,	// (0x0003c860) popup_snote2_single_text_window_g1

0xcebf,	// (0x0003c888) popup_snote2_single_text_window_t1_ParamLimits

0xcebf,	// (0x0003c888) popup_snote2_single_text_window_t1

0xcf0b,	// (0x0003c8d4) popup_snote2_single_text_window_t2_ParamLimits

0xcf0b,	// (0x0003c8d4) popup_snote2_single_text_window_t2

0xcf57,	// (0x0003c920) popup_snote2_single_text_window_t3_ParamLimits

0xcf57,	// (0x0003c920) popup_snote2_single_text_window_t3

0xcf98,	// (0x0003c961) popup_snote2_single_text_window_t4_ParamLimits

0xcf98,	// (0x0003c961) popup_snote2_single_text_window_t4

0xcfce,	// (0x0003c997) popup_snote2_single_text_window_t5_ParamLimits

0xcfce,	// (0x0003c997) popup_snote2_single_text_window_t5

0x0004,

0xfc71,	// (0x0003f63a) popup_snote2_single_text_window_t_ParamLimits

0xfc71,	// (0x0003f63a) popup_snote2_single_text_window_t

0xcff9,	// (0x0003c9c2) popup_snote2_single_graphic_window_g1_ParamLimits

0xcff9,	// (0x0003c9c2) popup_snote2_single_graphic_window_g1

0xd021,	// (0x0003c9ea) popup_snote2_single_graphic_window_g2_ParamLimits

0xd021,	// (0x0003c9ea) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7c,	// (0x0003f645) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7c,	// (0x0003f645) popup_snote2_single_graphic_window_g

0xd049,	// (0x0003ca12) popup_snote2_single_graphic_window_t1_ParamLimits

0xd049,	// (0x0003ca12) popup_snote2_single_graphic_window_t1

0xd095,	// (0x0003ca5e) popup_snote2_single_graphic_window_t2_ParamLimits

0xd095,	// (0x0003ca5e) popup_snote2_single_graphic_window_t2

0xcf57,	// (0x0003c920) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf57,	// (0x0003c920) popup_snote2_single_graphic_window_t3

0xcf98,	// (0x0003c961) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf98,	// (0x0003c961) popup_snote2_single_graphic_window_t4

0xcfce,	// (0x0003c997) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfce,	// (0x0003c997) popup_snote2_single_graphic_window_t5

0x0004,

0xfc81,	// (0x0003f64a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc81,	// (0x0003f64a) popup_snote2_single_graphic_window_t

0xbac5,	// (0x0003b48e) clock_nsta_pane_cp2_t1

0xbac5,	// (0x0003b48e) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0003f45e) clock_nsta_pane_cp2_t

0x40ce,	// (0x00033a97) form_field_data_wide_pane_g1_ParamLimits

0x2868,	// (0x00032231) form_field_data_wide_pane_g2_ParamLimits

0x2868,	// (0x00032231) form_field_data_wide_pane_g2

0x2874,	// (0x0003223d) form_field_data_wide_pane_g3_ParamLimits

0x2874,	// (0x0003223d) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0003f01f) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0003f01f) form_field_data_wide_pane_g

0xb9a0,	// (0x0003b369) grid_touch_3_pane_ParamLimits

0xb9a0,	// (0x0003b369) grid_touch_3_pane

0xd0e1,	// (0x0003caaa) cell_touch_3_pane_ParamLimits

0xd0e1,	// (0x0003caaa) cell_touch_3_pane

0xbfc1,	// (0x0003b98a) cell_touch_3_pane_g1

0xbfc1,	// (0x0003b98a) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0003f4e3) cell_touch_3_pane_g

0x2427,	// (0x00031df0) cont_query_data_pane

0x242f,	// (0x00031df8) cont_query_data_pane_cp1

0xd114,	// (0x0003cadd) button_value_adjust_pane_cp7

0xd11c,	// (0x0003cae5) query_popup_pane_cp3

0x6912,	// (0x000362db) bg_popup_sub_pane_cp22_ParamLimits

0x6928,	// (0x000362f1) navi_navi_volume_pane_cp2

0x6943,	// (0x0003630c) popup_side_volume_key_window_g2

0x6952,	// (0x0003631b) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0003f0b5) popup_side_volume_key_window_g

0x696f,	// (0x00036338) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0003f0bc) popup_side_volume_key_window_t

0x8ea5,	// (0x0003886e) popup_side_volume_key_window_ParamLimits

0x5e3c,	// (0x00035805) list_double_graphic_pane_g4_ParamLimits

0x5e3c,	// (0x00035805) list_double_graphic_pane_g4

0x7974,	// (0x0003733d) list_single_2heading_msg_pane_ParamLimits

0x7974,	// (0x0003733d) list_single_2heading_msg_pane

0x7f5f,	// (0x00037928) list_single_2heading_msg_pane_g1_ParamLimits

0x7f5f,	// (0x00037928) list_single_2heading_msg_pane_g1

0x5c77,	// (0x00035640) list_single_2heading_msg_pane_g2_ParamLimits

0x5c77,	// (0x00035640) list_single_2heading_msg_pane_g2

0x7f6b,	// (0x00037934) list_single_2heading_msg_pane_g3_ParamLimits

0x7f6b,	// (0x00037934) list_single_2heading_msg_pane_g3

0x7f77,	// (0x00037940) list_single_2heading_msg_pane_g4_ParamLimits

0x7f77,	// (0x00037940) list_single_2heading_msg_pane_g4

0x0003,

0xfc8c,	// (0x0003f655) list_single_2heading_msg_pane_g_ParamLimits

0xfc8c,	// (0x0003f655) list_single_2heading_msg_pane_g

0x7f8f,	// (0x00037958) list_single_2heading_msg_pane_t1_ParamLimits

0x7f8f,	// (0x00037958) list_single_2heading_msg_pane_t1

0x7fb7,	// (0x00037980) list_single_2heading_msg_pane_t2_ParamLimits

0x7fb7,	// (0x00037980) list_single_2heading_msg_pane_t2

0x7feb,	// (0x000379b4) list_single_2heading_msg_pane_t3_ParamLimits

0x7feb,	// (0x000379b4) list_single_2heading_msg_pane_t3

0x47d3,	// (0x0003419c) list_single_2heading_msg_pane_t4_ParamLimits

0x47d3,	// (0x0003419c) list_single_2heading_msg_pane_t4

0x0003,

0xfc95,	// (0x0003f65e) list_single_2heading_msg_pane_t_ParamLimits

0xfc95,	// (0x0003f65e) list_single_2heading_msg_pane_t

0x21c6,	// (0x00031b8f) title_pane_g4_ParamLimits

0x21c6,	// (0x00031b8f) title_pane_g4

0x6354,	// (0x00035d1d) title_pane_stacon_g3_ParamLimits

0x6354,	// (0x00035d1d) title_pane_stacon_g3

0xcc3d,	// (0x0003c606) list_single_2graphic_im_pane_g4_ParamLimits

0xcc3d,	// (0x0003c606) list_single_2graphic_im_pane_g4

0xaa4c,	// (0x0003a415) popup_side_volume_key_window_cp

0xb2b0,	// (0x0003ac79) main_idle_act2_pane_t1

0x7556,	// (0x00036f1f) toolbar_button_pane_g10

0x5c61,	// (0x0003562a) popup_toolbar_window_cp1

0xbab6,	// (0x0003b47f) clock_nsta_pane_cp_t1

0xbab6,	// (0x0003b47f) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0003f459) clock_nsta_pane_cp_t

0x6928,	// (0x000362f1) navi_navi_volume_pane_cp2_ParamLimits

0x6937,	// (0x00036300) popup_side_volume_key_window_g1_ParamLimits

0x6943,	// (0x0003630c) popup_side_volume_key_window_g2_ParamLimits

0x6952,	// (0x0003631b) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0003f0b5) popup_side_volume_key_window_g_ParamLimits

0x7b0f,	// (0x000374d8) fep_hwr_aid_pane

0x7bb8,	// (0x00037581) bg_fep_hwr_top_pane_g4_ParamLimits

0xc022,	// (0x0003b9eb) fep_hwr_top_pane_g1_ParamLimits

0xc034,	// (0x0003b9fd) fep_hwr_top_pane_g2_ParamLimits

0x7bd8,	// (0x000375a1) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0003f4ae) fep_hwr_top_pane_g_ParamLimits

0x7bed,	// (0x000375b6) fep_hwr_top_text_pane_ParamLimits

0xa801,	// (0x0003a1ca) aid_touch_tab_arrow_arrow_2

0xa80a,	// (0x0003a1d3) aid_touch_tab_arrow_left_2

0x7b23,	// (0x000374ec) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7b5a,	// (0x00037523) fep_hwr_prediction_pane

0xc18a,	// (0x0003bb53) fep_vkb_prediction_pane

0xc290,	// (0x0003bc59) fep_vkb_side_pane_g3_ParamLimits

0xc290,	// (0x0003bc59) fep_vkb_side_pane_g3

0x7d7c,	// (0x00037745) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7ded,	// (0x000377b6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7dfa,	// (0x000377c3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x0003f55d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8024,	// (0x000379ed) fep_hwr_prediction_pane_g1

0x802e,	// (0x000379f7) fep_hwr_prediction_pane_g2

0x8036,	// (0x000379ff) fep_hwr_prediction_pane_g3

0x803e,	// (0x00037a07) fep_hwr_prediction_pane_g4

0x0003,

0xfc9e,	// (0x0003f667) fep_hwr_prediction_pane_g

0xd143,	// (0x0003cb0c) fep_vkb_prediction_pane_g1

0xd14d,	// (0x0003cb16) fep_vkb_prediction_pane_g2

0xd155,	// (0x0003cb1e) fep_vkb_prediction_pane_g3

0xd15d,	// (0x0003cb26) fep_vkb_prediction_pane_g4

0x0003,

0xfca7,	// (0x0003f670) fep_vkb_prediction_pane_g

0x78a7,	// (0x00037270) slider_set_pane_g3

0x78bb,	// (0x00037284) slider_set_pane_g4

0x78d3,	// (0x0003729c) slider_set_pane_g5

0x78a7,	// (0x00037270) slider_set_pane_g6

0x78e9,	// (0x000372b2) slider_set_pane_g7

0xaed2,	// (0x0003a89b) slider_form_pane_g3

0xaedb,	// (0x0003a8a4) slider_form_pane_g4

0xaee3,	// (0x0003a8ac) slider_form_pane_g5

0xaed2,	// (0x0003a89b) slider_form_pane_g6

0xaeeb,	// (0x0003a8b4) slider_form_pane_g7

0xb574,	// (0x0003af3d) slider_set_pane_vc_g3

0xb57d,	// (0x0003af46) slider_set_pane_vc_g4

0xb586,	// (0x0003af4f) slider_set_pane_vc_g5

0xb574,	// (0x0003af3d) slider_set_pane_vc_g6

0xb58f,	// (0x0003af58) slider_set_pane_vc_g7

0xb765,	// (0x0003b12e) slider_form_pane_vc_g1

0xb76e,	// (0x0003b137) slider_form_pane_vc_g2

0xb777,	// (0x0003b140) slider_form_pane_vc_g3

0xb765,	// (0x0003b12e) slider_form_pane_vc_g4

0xb780,	// (0x0003b149) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0003f42b) slider_form_pane_vc_g

0x5675,	// (0x0003503e) main_idle_act3_pane

0xd165,	// (0x0003cb2e) ai3_links_pane

0xd16e,	// (0x0003cb37) popup_ai3_data_window_ParamLimits

0xd16e,	// (0x0003cb37) popup_ai3_data_window

0x21a8,	// (0x00031b71) grid_ai3_links_pane

0xd18c,	// (0x0003cb55) cell_ai3_links_pane_ParamLimits

0xd18c,	// (0x0003cb55) cell_ai3_links_pane

0xd1a6,	// (0x0003cb6f) bg_popup_sub_pane_cp11

0xd1b3,	// (0x0003cb7c) cell_ai3_links_pane_g1

0x21a8,	// (0x00031b71) bg_popup_sub_pane_cp12

0xd1d8,	// (0x0003cba1) heading_ai3_data_pane

0xd1e0,	// (0x0003cba9) list_ai3_gene_pane

0xd1ec,	// (0x0003cbb5) popup_ai3_data_window_g1

0xd1f4,	// (0x0003cbbd) heading_ai3_data_pane_g1

0xd1fc,	// (0x0003cbc5) heading_ai3_data_pane_t1

0xd20a,	// (0x0003cbd3) list_double_ai3_gene_pane_ParamLimits

0xd20a,	// (0x0003cbd3) list_double_ai3_gene_pane

0xd217,	// (0x0003cbe0) list_single_ai3_gene_pane_ParamLimits

0xd217,	// (0x0003cbe0) list_single_ai3_gene_pane

0xbf86,	// (0x0003b94f) list_highlight_pane_cp7_ParamLimits

0xbf86,	// (0x0003b94f) list_highlight_pane_cp7

0xd224,	// (0x0003cbed) list_single_a13_gene_pane_t1_ParamLimits

0xd224,	// (0x0003cbed) list_single_a13_gene_pane_t1

0xd23b,	// (0x0003cc04) list_single_ai3_gene_pane_g1

0xd244,	// (0x0003cc0d) list_single_ai3_gene_pane_g2

0x0001,

0xfcb0,	// (0x0003f679) list_single_ai3_gene_pane_g

0xd24c,	// (0x0003cc15) list_double_ai3_gene_pane_g1_ParamLimits

0xd24c,	// (0x0003cc15) list_double_ai3_gene_pane_g1

0xd258,	// (0x0003cc21) list_double_ai3_gene_pane_t1_ParamLimits

0xd258,	// (0x0003cc21) list_double_ai3_gene_pane_t1

0xd274,	// (0x0003cc3d) list_double_ai3_gene_pane_t2_ParamLimits

0xd274,	// (0x0003cc3d) list_double_ai3_gene_pane_t2

0xd289,	// (0x0003cc52) list_double_ai3_gene_pane_t3_ParamLimits

0xd289,	// (0x0003cc52) list_double_ai3_gene_pane_t3

0x0002,

0xfcb5,	// (0x0003f67e) list_double_ai3_gene_pane_t_ParamLimits

0xfcb5,	// (0x0003f67e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x47c9,	// (0x00034192) aid_size_min_col_2

0xd12d,	// (0x0003caf6) aid_size_min_msg_ParamLimits

0xd12d,	// (0x0003caf6) aid_size_min_msg

0xc39c,	// (0x0003bd65) fep_vkb_top_text_pane_g2_ParamLimits

0xc39c,	// (0x0003bd65) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0003f4de) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0003f4de) fep_vkb_top_text_pane_g

0x5675,	// (0x0003503e) main_hc_apps_shell_pane

0xd2a6,	// (0x0003cc6f) grid_hc_apps_pane_ParamLimits

0xd2a6,	// (0x0003cc6f) grid_hc_apps_pane

0xd2b8,	// (0x0003cc81) list_hc_apps_pane

0xd2c0,	// (0x0003cc89) scroll_pane_cp37_ParamLimits

0xd2c0,	// (0x0003cc89) scroll_pane_cp37

0xd2cc,	// (0x0003cc95) cell_hc_apps_pane_ParamLimits

0xd2cc,	// (0x0003cc95) cell_hc_apps_pane

0xd380,	// (0x0003cd49) cell_hc_apps_pane_g1_ParamLimits

0xd380,	// (0x0003cd49) cell_hc_apps_pane_g1

0xd3ac,	// (0x0003cd75) cell_hc_apps_pane_g2_ParamLimits

0xd3ac,	// (0x0003cd75) cell_hc_apps_pane_g2

0xd3c8,	// (0x0003cd91) cell_hc_apps_pane_g3_ParamLimits

0xd3c8,	// (0x0003cd91) cell_hc_apps_pane_g3

0x0002,

0xfcbc,	// (0x0003f685) cell_hc_apps_pane_g_ParamLimits

0xfcbc,	// (0x0003f685) cell_hc_apps_pane_g

0xd3ea,	// (0x0003cdb3) cell_hc_apps_pane_t1_ParamLimits

0xd3ea,	// (0x0003cdb3) cell_hc_apps_pane_t1

0x234b,	// (0x00031d14) grid_highlight_pane_cp10_ParamLimits

0x234b,	// (0x00031d14) grid_highlight_pane_cp10

0xd42a,	// (0x0003cdf3) list_single_hc_apps_pane_ParamLimits

0xd42a,	// (0x0003cdf3) list_single_hc_apps_pane

0xd469,	// (0x0003ce32) list_single_hc_apps_pane_g1

0x8046,	// (0x00037a0f) list_single_hc_apps_pane_g2

0x0001,

0xfcc3,	// (0x0003f68c) list_single_hc_apps_pane_g

0x805f,	// (0x00037a28) list_single_hc_apps_pane_g2_copy1

0x807b,	// (0x00037a44) list_single_hc_apps_pane_t1

0x2218,	// (0x00031be1) bg_set_opt_pane_cp_ParamLimits

0x59b6,	// (0x0003537f) setting_slider_pane_t1_ParamLimits

0x59cf,	// (0x00035398) setting_slider_pane_t2_ParamLimits

0x59e9,	// (0x000353b2) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0003ef02) setting_slider_pane_t_ParamLimits

0x5a01,	// (0x000353ca) slider_set_pane_ParamLimits

0x6df9,	// (0x000367c2) control_pane_g5_ParamLimits

0x6df9,	// (0x000367c2) control_pane_g5

0xad05,	// (0x0003a6ce) slider_set_pane_g1_ParamLimits

0x789b,	// (0x00037264) slider_set_pane_g2_ParamLimits

0x78a7,	// (0x00037270) slider_set_pane_g3_ParamLimits

0x78bb,	// (0x00037284) slider_set_pane_g4_ParamLimits

0x78d3,	// (0x0003729c) slider_set_pane_g5_ParamLimits

0x78a7,	// (0x00037270) slider_set_pane_g6_ParamLimits

0x78e9,	// (0x000372b2) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0003f308) slider_set_pane_g_ParamLimits

0x8f8a,	// (0x00038953) navi_icon_text_pane_ParamLimits

0x9492,	// (0x00038e5b) aid_fill_nsta_2_ParamLimits

0x94d3,	// (0x00038e9c) aid_touch_tab_arrow_left_ParamLimits

0x94df,	// (0x00038ea8) aid_touch_tab_arrow_right_ParamLimits

0x954b,	// (0x00038f14) clock_nsta_pane_ParamLimits

0xa7e3,	// (0x0003a1ac) navi_icon_pane_g1_ParamLimits

0xa7ef,	// (0x0003a1b8) navi_text_pane_t1_ParamLimits

0xbbd3,	// (0x0003b59c) navi_icon_text_pane_g1_ParamLimits

0xbbdf,	// (0x0003b5a8) navi_icon_text_pane_t1_ParamLimits

0xd469,	// (0x0003ce32) list_single_hc_apps_pane_g1_ParamLimits

0x8046,	// (0x00037a0f) list_single_hc_apps_pane_g2_ParamLimits

0xfcc3,	// (0x0003f68c) list_single_hc_apps_pane_g_ParamLimits

0x805f,	// (0x00037a28) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x807b,	// (0x00037a44) list_single_hc_apps_pane_t1_ParamLimits

0x57ea,	// (0x000351b3) popup_toolbar2_fixed_window_ParamLimits

0x57ea,	// (0x000351b3) popup_toolbar2_fixed_window

0x7448,	// (0x00036e11) popup_toolbar2_float_window

0x21a8,	// (0x00031b71) bg_popup_sub_pane_cp27

0xd482,	// (0x0003ce4b) grid_toolbar2_float_pane

0x21a8,	// (0x00031b71) bg_popup_sub_pane_cp26

0xd482,	// (0x0003ce4b) grid_toolbar2_fixed_pane

0xd48a,	// (0x0003ce53) cell_toolbar2_fixed_pane_ParamLimits

0xd48a,	// (0x0003ce53) cell_toolbar2_fixed_pane

0xd49a,	// (0x0003ce63) cell_toolbar2_fixed_pane_g1

0xd4a3,	// (0x0003ce6c) toolbar2_fixed_button_pane

0x9976,	// (0x0003933f) toolbar2_fixed_button_pane_g1

0x9986,	// (0x0003934f) toolbar2_fixed_button_pane_g2

0x997e,	// (0x00039347) toolbar2_fixed_button_pane_g3

0x9996,	// (0x0003935f) toolbar2_fixed_button_pane_g4

0x998e,	// (0x00039357) toolbar2_fixed_button_pane_g5

0x999e,	// (0x00039367) toolbar2_fixed_button_pane_g6

0x99a6,	// (0x0003936f) toolbar2_fixed_button_pane_g7

0x99b6,	// (0x0003937f) toolbar2_fixed_button_pane_g8

0x99ae,	// (0x00039377) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0003f20a) toolbar2_fixed_button_pane_g

0xd4ab,	// (0x0003ce74) cell_toolbar2_float_pane_ParamLimits

0xd4ab,	// (0x0003ce74) cell_toolbar2_float_pane

0xd4bc,	// (0x0003ce85) cell_toolbar2_float_pane_g1

0xd4a3,	// (0x0003ce6c) toolbar2_fixed_button_pane_cp

0xc0f8,	// (0x0003bac1) fep_vkb_accented_list_pane_ParamLimits

0xc0f8,	// (0x0003bac1) fep_vkb_accented_list_pane

0x7d5c,	// (0x00037725) bg_popup_fep_shadow_pane_g9

0x9119,	// (0x00038ae2) bg_popup_fep_shadow_pane_cp3

0x297d,	// (0x00032346) list_accented_list_pane

0xd4c5,	// (0x0003ce8e) list_single_accented_list_pane_ParamLimits

0xd4c5,	// (0x0003ce8e) list_single_accented_list_pane

0x9119,	// (0x00038ae2) list_highlight_pane_cp10

0xd4d6,	// (0x0003ce9f) list_single_accented_list_pane_t1

0x738e,	// (0x00036d57) popup_slider_window_ParamLimits

0x738e,	// (0x00036d57) popup_slider_window

0xd124,	// (0x0003caed) aid_indentation_list_msg

0xd5a6,	// (0x0003cf6f) bg_popup_window_pane_cp19

0xd612,	// (0x0003cfdb) popup_slider_window_g1

0xd62e,	// (0x0003cff7) popup_slider_window_g2

0xd64a,	// (0x0003d013) popup_slider_window_g3

0x0005,

0xfcc8,	// (0x0003f691) popup_slider_window_g

0xd6b0,	// (0x0003d079) popup_slider_window_t1

0xd724,	// (0x0003d0ed) small_volume_slider_vertical_pane

0xbfc1,	// (0x0003b98a) small_volume_slider_vertical_pane_g1

0xbfc1,	// (0x0003b98a) small_volume_slider_vertical_pane_g2

0xd740,	// (0x0003d109) small_volume_slider_vertical_pane_g3

0x0002,

0xfcda,	// (0x0003f6a3) small_volume_slider_vertical_pane_g

0x5598,	// (0x00034f61) area_side_right_pane_ParamLimits

0x5598,	// (0x00034f61) area_side_right_pane

0x80a9,	// (0x00037a72) aid_size_side_button_ParamLimits

0x80a9,	// (0x00037a72) aid_size_side_button

0x80bd,	// (0x00037a86) grid_sctrl_middle_pane_ParamLimits

0x80bd,	// (0x00037a86) grid_sctrl_middle_pane

0x80dc,	// (0x00037aa5) sctrl_sk_bottom_pane

0x80ed,	// (0x00037ab6) sctrl_sk_top_pane

0x80ff,	// (0x00037ac8) aid_touch_sctrl_top

0x810c,	// (0x00037ad5) bg_sctrl_sk_pane_ParamLimits

0x810c,	// (0x00037ad5) bg_sctrl_sk_pane

0x811a,	// (0x00037ae3) sctrl_sk_top_pane_g1

0x8127,	// (0x00037af0) sctrl_sk_top_pane_t1

0x80ff,	// (0x00037ac8) aid_touch_sctrl_bottom

0x810c,	// (0x00037ad5) bg_sctrl_sk_pane_cp_ParamLimits

0x810c,	// (0x00037ad5) bg_sctrl_sk_pane_cp

0x8142,	// (0x00037b0b) sctrl_sk_bottom_pane_g1

0x8127,	// (0x00037af0) sctrl_sk_bottom_pane_t1

0x814b,	// (0x00037b14) cell_sctrl_middle_pane_ParamLimits

0x814b,	// (0x00037b14) cell_sctrl_middle_pane

0x8168,	// (0x00037b31) aid_touch_sctrl_middle_ParamLimits

0x8168,	// (0x00037b31) aid_touch_sctrl_middle

0x817a,	// (0x00037b43) bg_sctrl_middle_pane_ParamLimits

0x817a,	// (0x00037b43) bg_sctrl_middle_pane

0x7d7c,	// (0x00037745) cell_sctrl_middle_pane_g1_ParamLimits

0x7d7c,	// (0x00037745) cell_sctrl_middle_pane_g1

0x8188,	// (0x00037b51) cell_sctrl_middle_pane_g2_ParamLimits

0x8188,	// (0x00037b51) cell_sctrl_middle_pane_g2

0x0001,

0xfce6,	// (0x0003f6af) cell_sctrl_middle_pane_g_ParamLimits

0xfce6,	// (0x0003f6af) cell_sctrl_middle_pane_g

0x9976,	// (0x0003933f) bg_sctrl_middle_pane_g1

0x997e,	// (0x00039347) bg_sctrl_middle_pane_g2

0x9986,	// (0x0003934f) bg_sctrl_middle_pane_g3

0x998e,	// (0x00039357) bg_sctrl_middle_pane_g4

0x9996,	// (0x0003935f) bg_sctrl_middle_pane_g5

0x999e,	// (0x00039367) bg_sctrl_middle_pane_g6

0x99a6,	// (0x0003936f) bg_sctrl_middle_pane_g7

0x99ae,	// (0x00039377) bg_sctrl_middle_pane_g8

0x0007,

0xfceb,	// (0x0003f6b4) bg_sctrl_middle_pane_g

0x99b6,	// (0x0003937f) bg_sctrl_middle_pane_g8_copy1

0x9976,	// (0x0003933f) bg_sctrl_sk_pane_g1

0x9986,	// (0x0003934f) bg_sctrl_sk_pane_g2

0x997e,	// (0x00039347) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0003f20a) bg_sctrl_sk_pane_g

0x2793,	// (0x0003215c) aid_size_touch_scroll_bar

0x9996,	// (0x0003935f) bg_sctrl_sk_pane_g4

0x998e,	// (0x00039357) bg_sctrl_sk_pane_g5

0x999e,	// (0x00039367) bg_sctrl_sk_pane_g6

0x99a6,	// (0x0003936f) bg_sctrl_sk_pane_g7

0x99b6,	// (0x0003937f) bg_sctrl_sk_pane_g8

0x99ae,	// (0x00039377) bg_sctrl_sk_pane_g9

0x6fa3,	// (0x0003696c) popup_fep_china_hwr2_fs_candidate_window

0x6fad,	// (0x00036976) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6fad,	// (0x00036976) popup_fep_china_hwr2_fs_control_window

0x7d7c,	// (0x00037745) sctrl_sk_top_pane_g2

0x0001,

0xfce1,	// (0x0003f6aa) sctrl_sk_top_pane_g

0xd749,	// (0x0003d112) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd749,	// (0x0003d112) aid_fep_china_hwr2_fs_cell

0xd75c,	// (0x0003d125) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd75c,	// (0x0003d125) bg_popup_fep_shadow_pane_cp4

0xd775,	// (0x0003d13e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd775,	// (0x0003d13e) bg_popup_fep_shadow_pane_cp5

0xd787,	// (0x0003d150) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd787,	// (0x0003d150) popup_fep_china_hwr2_fs_control_bar_grid

0xd797,	// (0x0003d160) popup_fep_china_hwr2_fs_control_funtion_grid

0xd79f,	// (0x0003d168) aid_fep_china_hwr2_fs_candi_cell

0x21a8,	// (0x00031b71) bg_popup_fep_shadow_pane_cp6

0xd7a9,	// (0x0003d172) popup_fep_china_hwr2_fs_candidate_grid

0xd7b3,	// (0x0003d17c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7b3,	// (0x0003d17c) cell_fep_china_hwr2_fs_funtion_grid

0xbfc1,	// (0x0003b98a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7cb,	// (0x0003d194) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7cb,	// (0x0003d194) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7d9,	// (0x0003d1a2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7d9,	// (0x0003d1a2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfc,	// (0x0003f6c5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfc,	// (0x0003f6c5) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7ef,	// (0x0003d1b8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7ef,	// (0x0003d1b8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd804,	// (0x0003d1cd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd804,	// (0x0003d1cd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd01,	// (0x0003f6ca) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd01,	// (0x0003f6ca) cell_fep_china_hwr2_fs_funtion_grid_t

0xd820,	// (0x0003d1e9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd828,	// (0x0003d1f1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd830,	// (0x0003d1f9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd06,	// (0x0003f6cf) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd838,	// (0x0003d201) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd838,	// (0x0003d201) cell_fep_china_hwr2_fs_candidate_grid

0xd857,	// (0x0003d220) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd85f,	// (0x0003d228) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfc1,	// (0x0003b98a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfc1,	// (0x0003b98a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0003f4e3) cell_fep_china_hwr2_fs_candidate_grid_g

0xd867,	// (0x0003d230) cell_fep_china_hwr2_fs_candidate_grid_t1

0x955e,	// (0x00038f27) clock_nsta_pane_cp_24_ParamLimits

0x955e,	// (0x00038f27) clock_nsta_pane_cp_24

0x95de,	// (0x00038fa7) indicator_nsta_pane_cp_24_ParamLimits

0x95de,	// (0x00038fa7) indicator_nsta_pane_cp_24

0xa65f,	// (0x0003a028) heading_pane_g1

0x0001,

0xf8a6,	// (0x0003f26f) heading_pane_g

0xb0f7,	// (0x0003aac0) grid_sct_catagory_button_pane

0xb129,	// (0x0003aaf2) scroll_pane_cp5_ParamLimits

0xbc21,	// (0x0003b5ea) button_value_adjust_pane_cp5_ParamLimits

0xbc21,	// (0x0003b5ea) button_value_adjust_pane_cp5

0xbd06,	// (0x0003b6cf) form2_midp_time_pane_ParamLimits

0xd875,	// (0x0003d23e) cell_sct_catagory_button_pane_ParamLimits

0xd875,	// (0x0003d23e) cell_sct_catagory_button_pane

0xbf86,	// (0x0003b94f) bg_button_pane_cp01_ParamLimits

0xbf86,	// (0x0003b94f) bg_button_pane_cp01

0xbfc1,	// (0x0003b98a) cell_sct_catagory_button_pane_g1

0x73cf,	// (0x00036d98) popup_tb_extension_window

0xd887,	// (0x0003d250) aid_size_cell_ext_ParamLimits

0xd887,	// (0x0003d250) aid_size_cell_ext

0x234b,	// (0x00031d14) bg_tb_trans_pane_cp1_ParamLimits

0x234b,	// (0x00031d14) bg_tb_trans_pane_cp1

0xd8a7,	// (0x0003d270) grid_tb_ext_pane_ParamLimits

0xd8a7,	// (0x0003d270) grid_tb_ext_pane

0xd8d5,	// (0x0003d29e) cell_tb_ext_pane_ParamLimits

0xd8d5,	// (0x0003d29e) cell_tb_ext_pane

0xd8ec,	// (0x0003d2b5) cell_tb_ext_pane_g1_ParamLimits

0xd8ec,	// (0x0003d2b5) cell_tb_ext_pane_g1

0xd909,	// (0x0003d2d2) cell_tb_ext_pane_t1

0x234b,	// (0x00031d14) list_highlight_pane_cp11_ParamLimits

0x234b,	// (0x00031d14) list_highlight_pane_cp11

0x5809,	// (0x000351d2) popup_uni_indicator_window_ParamLimits

0x5809,	// (0x000351d2) popup_uni_indicator_window

0x285a,	// (0x00032223) bg_popup_sub_pane_cp14

0xd924,	// (0x0003d2ed) list_uniindi_pane

0xd930,	// (0x0003d2f9) uniindi_top_pane

0x234b,	// (0x00031d14) bg_uniindi_top_pane

0xd951,	// (0x0003d31a) uniindi_top_pane_g1

0xd967,	// (0x0003d330) uniindi_top_pane_g2

0x0003,

0xfd0d,	// (0x0003f6d6) uniindi_top_pane_g

0xd991,	// (0x0003d35a) uniindi_top_pane_t1

0xd9bd,	// (0x0003d386) list_single_uniindi_pane_ParamLimits

0xd9bd,	// (0x0003d386) list_single_uniindi_pane

0xbfc1,	// (0x0003b98a) bg_uniindi_top_pane_g1

0xd9d0,	// (0x0003d399) list_single_uniindi_pane_g1

0xd9e3,	// (0x0003d3ac) list_single_uniindi_pane_t1

0x5675,	// (0x0003503e) control_bg_pane

0xda08,	// (0x0003d3d1) bg_sctrl_sk_pane_cp1

0xda11,	// (0x0003d3da) bg_sctrl_sk_pane_cp2

0xda1a,	// (0x0003d3e3) control_bg_pane_g1

0xda23,	// (0x0003d3ec) control_bg_pane_g2

0x0001,

0xfd16,	// (0x0003f6df) control_bg_pane_g

0xba59,	// (0x0003b422) cell_indicator_nsta_pane_g1_ParamLimits

0xba67,	// (0x0003b430) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0003f447) cell_indicator_nsta_pane_g_ParamLimits

0x45c8,	// (0x00033f91) form2_midp_time_pane_t1_ParamLimits

0x6f01,	// (0x000368ca) main_idle_act4_pane_ParamLimits

0x6f01,	// (0x000368ca) main_idle_act4_pane

0x73cf,	// (0x00036d98) popup_tb_extension_window_ParamLimits

0xd8c7,	// (0x0003d290) tb_ext_find_pane_ParamLimits

0xd8c7,	// (0x0003d290) tb_ext_find_pane

0xda2c,	// (0x0003d3f5) ai_gene_pane_1_cp1

0x9263,	// (0x00038c2c) ai_gene_pane_2_cp1

0xda34,	// (0x0003d3fd) list_single_idle_plugin_calendar_pane

0xda3d,	// (0x0003d406) list_single_idle_plugin_notification_pane

0xda46,	// (0x0003d40f) list_single_idle_plugin_player_pane

0xda4f,	// (0x0003d418) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda4f,	// (0x0003d418) list_single_idle_plugin_shortcut_pane

0xda71,	// (0x0003d43a) main_idle_act4_pane_t1

0xda83,	// (0x0003d44c) main_idle_act4_pane_t2

0x0001,

0xfd1b,	// (0x0003f6e4) main_idle_act4_pane_t

0xda95,	// (0x0003d45e) middle_sk_idle_act4_pane_ParamLimits

0xda95,	// (0x0003d45e) middle_sk_idle_act4_pane

0xdaab,	// (0x0003d474) popup_clock_digital_analogue_window_cp2

0xdac5,	// (0x0003d48e) shortcut_wheel_idle_act4_pane_ParamLimits

0xdac5,	// (0x0003d48e) shortcut_wheel_idle_act4_pane

0xbfc1,	// (0x0003b98a) shortcut_wheel_idle_act4_pane_g1

0xbfc1,	// (0x0003b98a) shortcut_wheel_idle_act4_pane_g2

0xbfc1,	// (0x0003b98a) shortcut_wheel_idle_act4_pane_g3

0xbfc1,	// (0x0003b98a) shortcut_wheel_idle_act4_pane_g4

0xbfc1,	// (0x0003b98a) shortcut_wheel_idle_act4_pane_g5

0xdad9,	// (0x0003d4a2) shortcut_wheel_idle_act4_pane_g6

0xdae1,	// (0x0003d4aa) shortcut_wheel_idle_act4_pane_g7

0xdae9,	// (0x0003d4b2) shortcut_wheel_idle_act4_pane_g8

0xdaf1,	// (0x0003d4ba) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd20,	// (0x0003f6e9) shortcut_wheel_idle_act4_pane_g

0xc23c,	// (0x0003bc05) middle_sk_idle_act4_pane_g1_ParamLimits

0xc23c,	// (0x0003bc05) middle_sk_idle_act4_pane_g1

0xdb55,	// (0x0003d51e) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb55,	// (0x0003d51e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd43,	// (0x0003f70c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd43,	// (0x0003f70c) middle_sk_idle_act4_pane_g

0xdb61,	// (0x0003d52a) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb61,	// (0x0003d52a) middle_sk_idle_act4_pane_t1

0xdb7e,	// (0x0003d547) grid_ai_shortcut_pane_ParamLimits

0xdb7e,	// (0x0003d547) grid_ai_shortcut_pane

0xdb97,	// (0x0003d560) list_highlight_pane_cp16_ParamLimits

0xdb97,	// (0x0003d560) list_highlight_pane_cp16

0xdba4,	// (0x0003d56d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdba4,	// (0x0003d56d) list_single_idle_plugin_shortcut_pane_g1

0xdbb0,	// (0x0003d579) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb0,	// (0x0003d579) list_single_idle_plugin_shortcut_pane_g2

0xdbca,	// (0x0003d593) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbca,	// (0x0003d593) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd48,	// (0x0003f711) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd48,	// (0x0003f711) list_single_idle_plugin_shortcut_pane_g

0xdbdd,	// (0x0003d5a6) cell_ai_shortcut_pane_ParamLimits

0xdbdd,	// (0x0003d5a6) cell_ai_shortcut_pane

0xdc00,	// (0x0003d5c9) cell_ai_shortcut_pane_g1_ParamLimits

0xdc00,	// (0x0003d5c9) cell_ai_shortcut_pane_g1

0xda2c,	// (0x0003d3f5) ai_gene_pane_1_cp2

0xdc22,	// (0x0003d5eb) ai_gene_pane_2_cp2

0xdc2a,	// (0x0003d5f3) list_highlight_pane_cp15

0xdc33,	// (0x0003d5fc) list_single_idle_plugin_calendar_pane_g1

0xdc2a,	// (0x0003d5f3) list_highlight_pane_cp17

0xdc3b,	// (0x0003d604) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc43,	// (0x0003d60c) list_single_idle_plugin_player_pane_g1

0xb35e,	// (0x0003ad27) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4f,	// (0x0003f718) list_single_idle_plugin_player_pane_g

0xdc4b,	// (0x0003d614) list_single_idle_plugin_player_pane_t1

0xdc59,	// (0x0003d622) list_single_idle_plugin_player_pane_t2

0xdc67,	// (0x0003d630) list_single_idle_plugin_player_pane_t3

0xdc75,	// (0x0003d63e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd54,	// (0x0003f71d) list_single_idle_plugin_player_pane_t

0xdc83,	// (0x0003d64c) wait_bar_pane_cp15

0xdc8b,	// (0x0003d654) grid_ai_notification_pane

0xb35e,	// (0x0003ad27) list_single_idle_plugin_notification_pane_g1

0xdc94,	// (0x0003d65d) cell_ai_notification_pane_ParamLimits

0xdc94,	// (0x0003d65d) cell_ai_notification_pane

0xdca1,	// (0x0003d66a) cell_ai_notification_pane_g1

0xdca9,	// (0x0003d672) cell_ai_notification_pane_t1

0xdcb7,	// (0x0003d680) tb_ext_find_button_pane

0xdcbf,	// (0x0003d688) tb_ext_find_pane_g1

0xdcc7,	// (0x0003d690) tb_ext_find_pane_t1

0x6793,	// (0x0003615c) tb_ext_find_button_pane_g1

0xdcd5,	// (0x0003d69e) tb_ext_find_button_pane_g2

0x0001,

0xfd5d,	// (0x0003f726) tb_ext_find_button_pane_g

0xda71,	// (0x0003d43a) main_idle_act4_pane_t1_ParamLimits

0xda83,	// (0x0003d44c) main_idle_act4_pane_t2_ParamLimits

0xfd1b,	// (0x0003f6e4) main_idle_act4_pane_t_ParamLimits

0xdaab,	// (0x0003d474) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdab9,	// (0x0003d482) sat_plugin_idle_act4_pane_ParamLimits

0xdab9,	// (0x0003d482) sat_plugin_idle_act4_pane

0xdcde,	// (0x0003d6a7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcde,	// (0x0003d6a7) sat_plugin_idle_act4_pane_t1

0xdcf1,	// (0x0003d6ba) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf1,	// (0x0003d6ba) sat_plugin_idle_act4_pane_t2

0xdd04,	// (0x0003d6cd) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd04,	// (0x0003d6cd) sat_plugin_idle_act4_pane_t3

0xdd17,	// (0x0003d6e0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd17,	// (0x0003d6e0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd62,	// (0x0003f72b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd62,	// (0x0003f72b) sat_plugin_idle_act4_pane_t

0x573a,	// (0x00035103) popup_battery_window_ParamLimits

0x573a,	// (0x00035103) popup_battery_window

0x234b,	// (0x00031d14) bg_popup_sub_pane_cp25_ParamLimits

0x234b,	// (0x00031d14) bg_popup_sub_pane_cp25

0xdd2a,	// (0x0003d6f3) popup_battery_window_g1_ParamLimits

0xdd2a,	// (0x0003d6f3) popup_battery_window_g1

0xdd36,	// (0x0003d6ff) popup_battery_window_t1_ParamLimits

0xdd36,	// (0x0003d6ff) popup_battery_window_t1

0xdd48,	// (0x0003d711) popup_battery_window_t2_ParamLimits

0xdd48,	// (0x0003d711) popup_battery_window_t2

0x0001,

0xfd6b,	// (0x0003f734) popup_battery_window_t_ParamLimits

0xfd6b,	// (0x0003f734) popup_battery_window_t

0x912d,	// (0x00038af6) midp_canvas_pane_ParamLimits

0x91a5,	// (0x00038b6e) midp_keypad_pane_ParamLimits

0x91a5,	// (0x00038b6e) midp_keypad_pane

0x9440,	// (0x00038e09) main_midp_pane_ParamLimits

0xbad4,	// (0x0003b49d) signal_pane_g2_cp_ParamLimits

0xdd65,	// (0x0003d72e) aid_size_cell_midp_keypad_ParamLimits

0xdd65,	// (0x0003d72e) aid_size_cell_midp_keypad

0xdd7f,	// (0x0003d748) midp_keyp_game_grid_pane_ParamLimits

0xdd7f,	// (0x0003d748) midp_keyp_game_grid_pane

0xdd9f,	// (0x0003d768) midp_keyp_rocker_pane_ParamLimits

0xdd9f,	// (0x0003d768) midp_keyp_rocker_pane

0xddce,	// (0x0003d797) midp_keyp_sk_left_pane_ParamLimits

0xddce,	// (0x0003d797) midp_keyp_sk_left_pane

0xde2a,	// (0x0003d7f3) midp_keyp_sk_right_pane_ParamLimits

0xde2a,	// (0x0003d7f3) midp_keyp_sk_right_pane

0x21a8,	// (0x00031b71) bg_button_pane_cp03

0xdea7,	// (0x0003d870) midp_keyp_sk_left_pane_g1

0x21a8,	// (0x00031b71) bg_button_pane_cp04

0xdea7,	// (0x0003d870) midp_keyp_sk_right_pane_g1

0xbfc1,	// (0x0003b98a) midp_keyp_rocker_pane_g1

0xdeaf,	// (0x0003d878) keyp_game_cell_pane_ParamLimits

0xdeaf,	// (0x0003d878) keyp_game_cell_pane

0x21a8,	// (0x00031b71) bg_button_pane_cp02

0xdec2,	// (0x0003d88b) keyp_game_cell_pane_g1

0x5784,	// (0x0003514d) popup_fep_vkb2_window_ParamLimits

0x5784,	// (0x0003514d) popup_fep_vkb2_window

0x81a6,	// (0x00037b6f) aid_size_cell_vkb2_ParamLimits

0x81a6,	// (0x00037b6f) aid_size_cell_vkb2

0x81f2,	// (0x00037bbb) popup_fep_vkb2_window_g1_ParamLimits

0x81f2,	// (0x00037bbb) popup_fep_vkb2_window_g1

0x823a,	// (0x00037c03) vkb2_area_bottom_pane_ParamLimits

0x823a,	// (0x00037c03) vkb2_area_bottom_pane

0x828e,	// (0x00037c57) vkb2_area_keypad_pane_ParamLimits

0x828e,	// (0x00037c57) vkb2_area_keypad_pane

0x82d4,	// (0x00037c9d) vkb2_area_top_pane_ParamLimits

0x82d4,	// (0x00037c9d) vkb2_area_top_pane

0x8354,	// (0x00037d1d) vkb2_top_entry_pane_ParamLimits

0x8354,	// (0x00037d1d) vkb2_top_entry_pane

0x837e,	// (0x00037d47) vkb2_top_grid_left_pane_ParamLimits

0x837e,	// (0x00037d47) vkb2_top_grid_left_pane

0x839d,	// (0x00037d66) vkb2_top_grid_right_pane_ParamLimits

0x839d,	// (0x00037d66) vkb2_top_grid_right_pane

0x83bc,	// (0x00037d85) vkb2_cell_keypad_pane_ParamLimits

0x83bc,	// (0x00037d85) vkb2_cell_keypad_pane

0x848d,	// (0x00037e56) vkb2_area_bottom_grid_pane_ParamLimits

0x848d,	// (0x00037e56) vkb2_area_bottom_grid_pane

0x84b3,	// (0x00037e7c) vkb2_area_bottom_pane_g1_ParamLimits

0x84b3,	// (0x00037e7c) vkb2_area_bottom_pane_g1

0x84d7,	// (0x00037ea0) vkb2_area_bottom_pane_g2_ParamLimits

0x84d7,	// (0x00037ea0) vkb2_area_bottom_pane_g2

0x8505,	// (0x00037ece) vkb2_area_bottom_pane_g3_ParamLimits

0x8505,	// (0x00037ece) vkb2_area_bottom_pane_g3

0x0002,

0xfd70,	// (0x0003f739) vkb2_area_bottom_pane_g_ParamLimits

0xfd70,	// (0x0003f739) vkb2_area_bottom_pane_g

0x8566,	// (0x00037f2f) vkb2_top_cell_left_pane_ParamLimits

0x8566,	// (0x00037f2f) vkb2_top_cell_left_pane

0xded3,	// (0x0003d89c) vkb2_top_entry_pane_g1_ParamLimits

0xded3,	// (0x0003d89c) vkb2_top_entry_pane_g1

0xdee1,	// (0x0003d8aa) vkb2_top_entry_pane_t1_ParamLimits

0xdee1,	// (0x0003d8aa) vkb2_top_entry_pane_t1

0xdf13,	// (0x0003d8dc) vkb2_top_entry_pane_t2_ParamLimits

0xdf13,	// (0x0003d8dc) vkb2_top_entry_pane_t2

0xdf45,	// (0x0003d90e) vkb2_top_entry_pane_t3_ParamLimits

0xdf45,	// (0x0003d90e) vkb2_top_entry_pane_t3

0x0002,

0xfd77,	// (0x0003f740) vkb2_top_entry_pane_t_ParamLimits

0xfd77,	// (0x0003f740) vkb2_top_entry_pane_t

0x85b3,	// (0x00037f7c) vkb2_top_grid_right_pane_g1_ParamLimits

0x85b3,	// (0x00037f7c) vkb2_top_grid_right_pane_g1

0x85c9,	// (0x00037f92) vkb2_top_grid_right_pane_g2_ParamLimits

0x85c9,	// (0x00037f92) vkb2_top_grid_right_pane_g2

0x85e1,	// (0x00037faa) vkb2_top_grid_right_pane_g3_ParamLimits

0x85e1,	// (0x00037faa) vkb2_top_grid_right_pane_g3

0x85f9,	// (0x00037fc2) vkb2_top_grid_right_pane_g4_ParamLimits

0x85f9,	// (0x00037fc2) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7e,	// (0x0003f747) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7e,	// (0x0003f747) vkb2_top_grid_right_pane_g

0x860f,	// (0x00037fd8) vkb2_top_cell_left_pane_g1

0x8626,	// (0x00037fef) vkb2_cell_keypad_pane_g1_ParamLimits

0x8626,	// (0x00037fef) vkb2_cell_keypad_pane_g1

0xdf69,	// (0x0003d932) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf69,	// (0x0003d932) vkb2_cell_keypad_pane_t1

0x8634,	// (0x00037ffd) vkb2_cell_bottom_grid_pane_ParamLimits

0x8634,	// (0x00037ffd) vkb2_cell_bottom_grid_pane

0x866d,	// (0x00038036) vkb2_cell_bottom_grid_pane_g1

0xdaf9,	// (0x0003d4c2) aid_call2_pane_cp02

0xdb01,	// (0x0003d4ca) aid_call_pane_cp02

0xdb09,	// (0x0003d4d2) clock_digital_number_pane_cp10

0xdb11,	// (0x0003d4da) clock_digital_number_pane_cp11

0xdb19,	// (0x0003d4e2) clock_digital_number_pane_cp12

0xdb21,	// (0x0003d4ea) clock_digital_number_pane_cp13

0xdb29,	// (0x0003d4f2) clock_digital_separator_pane_cp10

0x6793,	// (0x0003615c) popup_clock_digital_analogue_window_cp2_g1

0x6793,	// (0x0003615c) popup_clock_digital_analogue_window_cp2_g2

0xdb31,	// (0x0003d4fa) popup_clock_digital_analogue_window_cp2_g3

0x6793,	// (0x0003615c) popup_clock_digital_analogue_window_cp2_g4

0xdb31,	// (0x0003d4fa) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd33,	// (0x0003f6fc) popup_clock_digital_analogue_window_cp2_g

0xdb39,	// (0x0003d502) popup_clock_digital_analogue_window_cp2_t1

0xdb47,	// (0x0003d510) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3e,	// (0x0003f707) popup_clock_digital_analogue_window_cp2_t

0xbfc1,	// (0x0003b98a) clock_digital_number_pane_cp10_g1

0xbfc1,	// (0x0003b98a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003f4e3) clock_digital_number_pane_cp10_g

0xbfc1,	// (0x0003b98a) clock_digital_separator_pane_cp10_g1

0xbfc1,	// (0x0003b98a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003f4e3) clock_digital_separator_pane_cp10_g

0xd973,	// (0x0003d33c) uniindi_top_pane_g3

0xd984,	// (0x0003d34d) uniindi_top_pane_g4

0x8447,	// (0x00037e10) vkb2_row_keypad_pane_ParamLimits

0x8447,	// (0x00037e10) vkb2_row_keypad_pane

0x8689,	// (0x00038052) vkb2_cell_t_keypad_pane_ParamLimits

0x8689,	// (0x00038052) vkb2_cell_t_keypad_pane

0x8699,	// (0x00038062) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8699,	// (0x00038062) vkb2_cell_t_keypad_pane_cp08

0x86ae,	// (0x00038077) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x86ae,	// (0x00038077) vkb2_cell_t_keypad_pane_cp09

0x86c2,	// (0x0003808b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x86c2,	// (0x0003808b) vkb2_cell_t_keypad_pane_cp01

0x86d3,	// (0x0003809c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x86d3,	// (0x0003809c) vkb2_cell_t_keypad_pane_cp02

0x86e4,	// (0x000380ad) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x86e4,	// (0x000380ad) vkb2_cell_t_keypad_pane_cp03

0x86f5,	// (0x000380be) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x86f5,	// (0x000380be) vkb2_cell_t_keypad_pane_cp04

0x8706,	// (0x000380cf) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8706,	// (0x000380cf) vkb2_cell_t_keypad_pane_cp05

0x8717,	// (0x000380e0) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8717,	// (0x000380e0) vkb2_cell_t_keypad_pane_cp06

0x872a,	// (0x000380f3) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x872a,	// (0x000380f3) vkb2_cell_t_keypad_pane_cp07

0x873f,	// (0x00038108) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x873f,	// (0x00038108) vkb2_cell_t_keypad_pane_cp10

0x7d7c,	// (0x00037745) vkb2_cell_t_keypad_pane_g1

0xdf80,	// (0x0003d949) vkb2_cell_t_keypad_pane_t1

0x5675,	// (0x0003503e) popup_grid_graphic2_window

0xdf92,	// (0x0003d95b) aid_size_cell_graphic2_ParamLimits

0xdf92,	// (0x0003d95b) aid_size_cell_graphic2

0xdfca,	// (0x0003d993) bg_popup_window_pane_cp21_ParamLimits

0xdfca,	// (0x0003d993) bg_popup_window_pane_cp21

0xdfd8,	// (0x0003d9a1) graphic2_pages_pane_ParamLimits

0xdfd8,	// (0x0003d9a1) graphic2_pages_pane

0xe01e,	// (0x0003d9e7) grid_graphic2_control_pane_ParamLimits

0xe01e,	// (0x0003d9e7) grid_graphic2_control_pane

0xe05c,	// (0x0003da25) grid_graphic2_pane_ParamLimits

0xe05c,	// (0x0003da25) grid_graphic2_pane

0xe0d2,	// (0x0003da9b) cell_graphic2_pane

0x5675,	// (0x0003503e) main_comp_mode_pane

0xd1e0,	// (0x0003cba9) list_ai3_gene_pane_ParamLimits

0xd5a6,	// (0x0003cf6f) bg_popup_window_pane_cp19_ParamLimits

0xd5b2,	// (0x0003cf7b) bg_touch_area_indi_pane_ParamLimits

0xd5b2,	// (0x0003cf7b) bg_touch_area_indi_pane

0xd5c8,	// (0x0003cf91) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5c8,	// (0x0003cf91) bg_touch_area_indi_pane_cp01

0xd5de,	// (0x0003cfa7) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5de,	// (0x0003cfa7) bg_touch_area_indi_pane_cp02

0xd5f8,	// (0x0003cfc1) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5f8,	// (0x0003cfc1) bg_touch_area_indi_pane_cp03

0xd612,	// (0x0003cfdb) popup_slider_window_g1_ParamLimits

0xd62e,	// (0x0003cff7) popup_slider_window_g2_ParamLimits

0xd64a,	// (0x0003d013) popup_slider_window_g3_ParamLimits

0xfcc8,	// (0x0003f691) popup_slider_window_g_ParamLimits

0xd6b0,	// (0x0003d079) popup_slider_window_t1_ParamLimits

0xd724,	// (0x0003d0ed) small_volume_slider_vertical_pane_ParamLimits

0xe0d2,	// (0x0003da9b) cell_graphic2_pane_ParamLimits

0xe126,	// (0x0003daef) bg_button_pane_cp10_ParamLimits

0xe126,	// (0x0003daef) bg_button_pane_cp10

0xe13b,	// (0x0003db04) bg_button_pane_cp11_ParamLimits

0xe13b,	// (0x0003db04) bg_button_pane_cp11

0xe150,	// (0x0003db19) graphic2_pages_pane_g1_ParamLimits

0xe150,	// (0x0003db19) graphic2_pages_pane_g1

0xe16b,	// (0x0003db34) graphic2_pages_pane_g2_ParamLimits

0xe16b,	// (0x0003db34) graphic2_pages_pane_g2

0x0001,

0xfd8c,	// (0x0003f755) graphic2_pages_pane_g_ParamLimits

0xfd8c,	// (0x0003f755) graphic2_pages_pane_g

0xe183,	// (0x0003db4c) graphic2_pages_pane_t1_ParamLimits

0xe183,	// (0x0003db4c) graphic2_pages_pane_t1

0xe199,	// (0x0003db62) cell_graphic2_control_pane_ParamLimits

0xe199,	// (0x0003db62) cell_graphic2_control_pane

0xe1b9,	// (0x0003db82) cell_graphic2_pane_g1_ParamLimits

0xe1b9,	// (0x0003db82) cell_graphic2_pane_g1

0xe1c6,	// (0x0003db8f) cell_graphic2_pane_g2_ParamLimits

0xe1c6,	// (0x0003db8f) cell_graphic2_pane_g2

0xe1d3,	// (0x0003db9c) cell_graphic2_pane_g3_ParamLimits

0xe1d3,	// (0x0003db9c) cell_graphic2_pane_g3

0xe1e0,	// (0x0003dba9) cell_graphic2_pane_g4_ParamLimits

0xe1e0,	// (0x0003dba9) cell_graphic2_pane_g4

0xe1ed,	// (0x0003dbb6) cell_graphic2_pane_g5_ParamLimits

0xe1ed,	// (0x0003dbb6) cell_graphic2_pane_g5

0x0004,

0xfd91,	// (0x0003f75a) cell_graphic2_pane_g_ParamLimits

0xfd91,	// (0x0003f75a) cell_graphic2_pane_g

0xe205,	// (0x0003dbce) cell_graphic2_pane_t1_ParamLimits

0xe205,	// (0x0003dbce) cell_graphic2_pane_t1

0x99ea,	// (0x000393b3) grid_highlight_pane_cp11_ParamLimits

0x99ea,	// (0x000393b3) grid_highlight_pane_cp11

0x234b,	// (0x00031d14) bg_button_pane_cp05

0xe23b,	// (0x0003dc04) cell_graphic2_control_pane_g1

0xbfc1,	// (0x0003b98a) bg_touch_area_indi_pane_g1

0xe263,	// (0x0003dc2c) aid_cmod_rocker_key_size

0xe26d,	// (0x0003dc36) aid_cmode_itu_key_size

0xe277,	// (0x0003dc40) main_cmode_video_pane

0xe281,	// (0x0003dc4a) main_comp_mode_itu_pane

0xe28d,	// (0x0003dc56) main_comp_mode_rocker_pane

0xe299,	// (0x0003dc62) cell_cmode_rocker_pane_ParamLimits

0xe299,	// (0x0003dc62) cell_cmode_rocker_pane

0xe2ad,	// (0x0003dc76) cell_cmode_itu_pane_ParamLimits

0xe2ad,	// (0x0003dc76) cell_cmode_itu_pane

0x285a,	// (0x00032223) bg_button_pane_cp06_ParamLimits

0x285a,	// (0x00032223) bg_button_pane_cp06

0xc23c,	// (0x0003bc05) cell_cmode_rocker_pane_g1_ParamLimits

0xc23c,	// (0x0003bc05) cell_cmode_rocker_pane_g1

0xd7cb,	// (0x0003d194) cell_cmode_rocker_pane_g2_ParamLimits

0xd7cb,	// (0x0003d194) cell_cmode_rocker_pane_g2

0x0001,

0xfda1,	// (0x0003f76a) cell_cmode_rocker_pane_g_ParamLimits

0xfda1,	// (0x0003f76a) cell_cmode_rocker_pane_g

0x21a8,	// (0x00031b71) bg_button_pane_cp07

0xe2c4,	// (0x0003dc8d) cell_cmode_itu_pane_g1

0xe2cd,	// (0x0003dc96) cell_cmode_itu_pane_t1

0xe2db,	// (0x0003dca4) cell_cmode_itu_pane_t2

0x0001,

0xfda6,	// (0x0003f76f) cell_cmode_itu_pane_t

0xd9f8,	// (0x0003d3c1) aid_touch_ctrl_left

0xda00,	// (0x0003d3c9) aid_touch_ctrl_right

0x21a8,	// (0x00031b71) compa_mode_pane

0xe2e9,	// (0x0003dcb2) aid_cmod_rocker_key_size_cp

0xe2f3,	// (0x0003dcbc) aid_cmode_itu_key_size_cp

0xe2fd,	// (0x0003dcc6) compa_mode_pane_g1

0xe305,	// (0x0003dcce) compa_mode_pane_g2

0xe30d,	// (0x0003dcd6) compa_mode_pane_g3

0x0002,

0xfdab,	// (0x0003f774) compa_mode_pane_g

0xe315,	// (0x0003dcde) main_comp_mode_itu_pane_cp

0xe31d,	// (0x0003dce6) main_comp_mode_rocker_pane_cp

0xe325,	// (0x0003dcee) cell_cmode_itu_pane_cp_ParamLimits

0xe325,	// (0x0003dcee) cell_cmode_itu_pane_cp

0xe33a,	// (0x0003dd03) cell_cmode_rocker_pane_cp_ParamLimits

0xe33a,	// (0x0003dd03) cell_cmode_rocker_pane_cp

0x285a,	// (0x00032223) bg_button_pane_cp06_cp_ParamLimits

0x285a,	// (0x00032223) bg_button_pane_cp06_cp

0xc23c,	// (0x0003bc05) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc23c,	// (0x0003bc05) cell_cmode_rocker_pane_g1_cp

0xbfc1,	// (0x0003b98a) cell_cmode_rocker_pane_g2_cp

0x21a8,	// (0x00031b71) bg_button_pane_cp07_cp

0xe34c,	// (0x0003dd15) cell_cmode_itu_pane_g1_cp

0xe355,	// (0x0003dd1e) cell_cmode_itu_pane_t1_cp

0xe355,	// (0x0003dd1e) cell_cmode_itu_pane_t2_cp

0xaec1,	// (0x0003a88a) settings_code_pane_cp2

0x2218,	// (0x00031be1) bg_popup_window_pane_cp3_ParamLimits

0x255f,	// (0x00031f28) heading_pane_cp3_ParamLimits

0x256e,	// (0x00031f37) listscroll_popup_graphic_pane_ParamLimits

0x7b0f,	// (0x000374d8) fep_hwr_aid_pane_ParamLimits

0x80ff,	// (0x00037ac8) aid_touch_sctrl_top_ParamLimits

0x811a,	// (0x00037ae3) sctrl_sk_top_pane_g1_ParamLimits

0x7d7c,	// (0x00037745) sctrl_sk_top_pane_g2_ParamLimits

0xfce1,	// (0x0003f6aa) sctrl_sk_top_pane_g_ParamLimits

0x8127,	// (0x00037af0) sctrl_sk_top_pane_t1_ParamLimits

0x80ff,	// (0x00037ac8) aid_touch_sctrl_bottom_ParamLimits

0x8127,	// (0x00037af0) sctrl_sk_bottom_pane_t1_ParamLimits

0xd93d,	// (0x0003d306) aid_area_touch_clock

0x831a,	// (0x00037ce3) aid_vkb2_area_top_pane_cell_ParamLimits

0x831a,	// (0x00037ce3) aid_vkb2_area_top_pane_cell

0x8469,	// (0x00037e32) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8469,	// (0x00037e32) aid_vkb2_area_bottom_pane_cell

0xdecb,	// (0x0003d894) popup_char_count_window

0xe363,	// (0x0003dd2c) popup_char_count_window_g1

0xe36c,	// (0x0003dd35) popup_char_count_window_g2

0xe375,	// (0x0003dd3e) popup_char_count_window_g3

0x0002,

0xfdb2,	// (0x0003f77b) popup_char_count_window_g

0xe37e,	// (0x0003dd47) popup_char_count_window_t1

0x81d0,	// (0x00037b99) popup_fep_char_preview_window_ParamLimits

0x81d0,	// (0x00037b99) popup_fep_char_preview_window

0x8338,	// (0x00037d01) vkb2_top_candi_pane_ParamLimits

0x8338,	// (0x00037d01) vkb2_top_candi_pane

0xe38c,	// (0x0003dd55) cell_vkb2_top_candi_pane_ParamLimits

0xe38c,	// (0x0003dd55) cell_vkb2_top_candi_pane

0x8754,	// (0x0003811d) bg_popup_fep_char_preview_window_ParamLimits

0x8754,	// (0x0003811d) bg_popup_fep_char_preview_window

0x8762,	// (0x0003812b) popup_fep_char_preview_window_t1_ParamLimits

0x8762,	// (0x0003812b) popup_fep_char_preview_window_t1

0xe3da,	// (0x0003dda3) bg_popup_fep_char_preview_window_g1

0xe3e2,	// (0x0003ddab) bg_popup_fep_char_preview_window_g2

0xe3ea,	// (0x0003ddb3) bg_popup_fep_char_preview_window_g3

0xe3f2,	// (0x0003ddbb) bg_popup_fep_char_preview_window_g4

0xe3fa,	// (0x0003ddc3) bg_popup_fep_char_preview_window_g5

0xe402,	// (0x0003ddcb) bg_popup_fep_char_preview_window_g6

0xe40a,	// (0x0003ddd3) bg_popup_fep_char_preview_window_g7

0xe412,	// (0x0003dddb) bg_popup_fep_char_preview_window_g8

0xe41a,	// (0x0003dde3) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb9,	// (0x0003f782) bg_popup_fep_char_preview_window_g

0x7d7c,	// (0x00037745) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7d7c,	// (0x00037745) cell_vkb2_top_candi_pane_g1

0x7d8a,	// (0x00037753) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7d8a,	// (0x00037753) cell_vkb2_top_candi_pane_g2

0xde86,	// (0x0003d84f) cell_vkb2_top_candi_pane_g3_ParamLimits

0xde86,	// (0x0003d84f) cell_vkb2_top_candi_pane_g3

0x87a4,	// (0x0003816d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x87a4,	// (0x0003816d) cell_vkb2_top_candi_pane_g4

0xc75b,	// (0x0003c124) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc75b,	// (0x0003c124) cell_vkb2_top_candi_pane_g5

0x87c5,	// (0x0003818e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x87c5,	// (0x0003818e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdce,	// (0x0003f797) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdce,	// (0x0003f797) cell_vkb2_top_candi_pane_g

0x87d3,	// (0x0003819c) cell_vkb2_top_candi_pane_t1

0x7887,	// (0x00037250) aid_size_touch_slider_mark_ParamLimits

0x7887,	// (0x00037250) aid_size_touch_slider_mark

0xe00e,	// (0x0003d9d7) grid_graphic2_catg_pane_ParamLimits

0xe00e,	// (0x0003d9d7) grid_graphic2_catg_pane

0xe0ac,	// (0x0003da75) popup_grid_graphic2_window_t1_ParamLimits

0xe0ac,	// (0x0003da75) popup_grid_graphic2_window_t1

0xe0be,	// (0x0003da87) popup_grid_graphic2_window_t2_ParamLimits

0xe0be,	// (0x0003da87) popup_grid_graphic2_window_t2

0x0001,

0xfd87,	// (0x0003f750) popup_grid_graphic2_window_t_ParamLimits

0xfd87,	// (0x0003f750) popup_grid_graphic2_window_t

0x234b,	// (0x00031d14) bg_button_pane_cp05_ParamLimits

0xe23b,	// (0x0003dc04) cell_graphic2_control_pane_g1_ParamLimits

0xe422,	// (0x0003ddeb) cell_graphic2_catg_pane_ParamLimits

0xe422,	// (0x0003ddeb) cell_graphic2_catg_pane

0x21a8,	// (0x00031b71) bg_button_pane_cp12

0xe434,	// (0x0003ddfd) cell_graphic2_catg_pane_g1

0xd909,	// (0x0003d2d2) cell_tb_ext_pane_t1_ParamLimits

0x8586,	// (0x00037f4f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8586,	// (0x00037f4f) vkb2_top_cell_right_narrow_pane

0x859e,	// (0x00037f67) vkb2_top_cell_right_wide_pane_ParamLimits

0x859e,	// (0x00037f67) vkb2_top_cell_right_wide_pane

0x7b01,	// (0x000374ca) bg_vkb2_func_pane_ParamLimits

0x7b01,	// (0x000374ca) bg_vkb2_func_pane

0x860f,	// (0x00037fd8) vkb2_top_cell_left_pane_g1_ParamLimits

0x7b01,	// (0x000374ca) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7b01,	// (0x000374ca) bg_vkb2_fuc_pane_cp03

0x866d,	// (0x00038036) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x997e,	// (0x00039347) bg_vkb2_func_pane_g1

0x9986,	// (0x0003934f) bg_vkb2_func_pane_g2

0x9996,	// (0x0003935f) bg_vkb2_func_pane_g3

0x998e,	// (0x00039357) bg_vkb2_func_pane_g4

0x999e,	// (0x00039367) bg_vkb2_func_pane_g5

0x99a6,	// (0x0003936f) bg_vkb2_func_pane_g6

0x99ae,	// (0x00039377) bg_vkb2_func_pane_g7

0x99b6,	// (0x0003937f) bg_vkb2_func_pane_g8

0x9976,	// (0x0003933f) bg_vkb2_func_pane_g9

0x0008,

0xfddb,	// (0x0003f7a4) bg_vkb2_func_pane_g

0x7b01,	// (0x000374ca) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7b01,	// (0x000374ca) bg_vkb2_fuc_pane_cp01

0x860f,	// (0x00037fd8) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x860f,	// (0x00037fd8) vkb2_top_cell_right_wide_pane_g1

0x7b01,	// (0x000374ca) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7b01,	// (0x000374ca) bg_vkb2_fuc_pane_cp02

0x87f1,	// (0x000381ba) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x87f1,	// (0x000381ba) vkb2_top_cell_right_narrow_pane_g1

0xd520,	// (0x0003cee9) aid_touch_area_decrease_ParamLimits

0xd520,	// (0x0003cee9) aid_touch_area_decrease

0xd544,	// (0x0003cf0d) aid_touch_area_increase_ParamLimits

0xd544,	// (0x0003cf0d) aid_touch_area_increase

0xd55c,	// (0x0003cf25) aid_touch_area_mute_ParamLimits

0xd55c,	// (0x0003cf25) aid_touch_area_mute

0xd578,	// (0x0003cf41) aid_touch_area_slider_ParamLimits

0xd578,	// (0x0003cf41) aid_touch_area_slider

0xd666,	// (0x0003d02f) popup_slider_window_g4_ParamLimits

0xd666,	// (0x0003d02f) popup_slider_window_g4

0xd67e,	// (0x0003d047) popup_slider_window_g5_ParamLimits

0xd67e,	// (0x0003d047) popup_slider_window_g5

0xd6a0,	// (0x0003d069) popup_slider_window_g6_ParamLimits

0xd6a0,	// (0x0003d069) popup_slider_window_g6

0xd6de,	// (0x0003d0a7) popup_slider_window_t2_ParamLimits

0xd6de,	// (0x0003d0a7) popup_slider_window_t2

0x0001,

0xfcd5,	// (0x0003f69e) popup_slider_window_t_ParamLimits

0xfcd5,	// (0x0003f69e) popup_slider_window_t

0xd6f6,	// (0x0003d0bf) slider_pane_ParamLimits

0xd6f6,	// (0x0003d0bf) slider_pane

0xe43d,	// (0x0003de06) slider_pane_g1_ParamLimits

0xe43d,	// (0x0003de06) slider_pane_g1

0xe451,	// (0x0003de1a) slider_pane_g2_ParamLimits

0xe451,	// (0x0003de1a) slider_pane_g2

0xe467,	// (0x0003de30) slider_pane_g3_ParamLimits

0xe467,	// (0x0003de30) slider_pane_g3

0x0003,

0xfdee,	// (0x0003f7b7) slider_pane_g_ParamLimits

0xfdee,	// (0x0003f7b7) slider_pane_g

0x7431,	// (0x00036dfa) popup_tb_float_extension_window_ParamLimits

0x7431,	// (0x00036dfa) popup_tb_float_extension_window

0xe493,	// (0x0003de5c) aid_size_cell_tb_float_ext

0x21a8,	// (0x00031b71) bg_popup_sub_window_cp28

0xe49f,	// (0x0003de68) grid_tb_float_ext_pane

0xe4ab,	// (0x0003de74) cell_tb_float_ext_pane_ParamLimits

0xe4ab,	// (0x0003de74) cell_tb_float_ext_pane

0xe4c7,	// (0x0003de90) cell_tb_float_ext_pane_g1

0xe4d0,	// (0x0003de99) grid_highlight_pane_cp12

0x7c56,	// (0x0003761f) cell_last_hwr_side_pane_ParamLimits

0x7c56,	// (0x0003761f) cell_last_hwr_side_pane

0xbfc1,	// (0x0003b98a) cell_last_hwr_side_pane_g1

0xe4d9,	// (0x0003dea2) cell_last_hwr_side_pane_g2

0x0001,

0xfdf7,	// (0x0003f7c0) cell_last_hwr_side_pane_g

0x8535,	// (0x00037efe) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8535,	// (0x00037efe) vkb2_area_bottom_space_btn_pane

0x7d7c,	// (0x00037745) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf80,	// (0x0003d949) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x87d3,	// (0x0003819c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x880d,	// (0x000381d6) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x880d,	// (0x000381d6) vkb2_area_bottom_space_btn_pane_g1

0x8847,	// (0x00038210) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8847,	// (0x00038210) vkb2_area_bottom_space_btn_pane_g2

0x887d,	// (0x00038246) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x887d,	// (0x00038246) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfc,	// (0x0003f7c5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfc,	// (0x0003f7c5) vkb2_area_bottom_space_btn_pane_g

0x7bc6,	// (0x0003758f) cel_fep_hwr_func_pane_ParamLimits

0x7bc6,	// (0x0003758f) cel_fep_hwr_func_pane

0x7c02,	// (0x000375cb) cell_hwr_side_button_pane_ParamLimits

0x7c02,	// (0x000375cb) cell_hwr_side_button_pane

0xd93d,	// (0x0003d306) aid_area_touch_clock_ParamLimits

0x234b,	// (0x00031d14) bg_uniindi_top_pane_ParamLimits

0xd951,	// (0x0003d31a) uniindi_top_pane_g1_ParamLimits

0xd967,	// (0x0003d330) uniindi_top_pane_g2_ParamLimits

0xd973,	// (0x0003d33c) uniindi_top_pane_g3_ParamLimits

0xd984,	// (0x0003d34d) uniindi_top_pane_g4_ParamLimits

0xfd0d,	// (0x0003f6d6) uniindi_top_pane_g_ParamLimits

0xd991,	// (0x0003d35a) uniindi_top_pane_t1_ParamLimits

0x234b,	// (0x00031d14) bg_vkb2_func_pane_cp01_ParamLimits

0x234b,	// (0x00031d14) bg_vkb2_func_pane_cp01

0xe4e2,	// (0x0003deab) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e2,	// (0x0003deab) cel_fep_hwr_func_pane_g1

0x234b,	// (0x00031d14) bg_vkb2_func_pane_cp02_ParamLimits

0x234b,	// (0x00031d14) bg_vkb2_func_pane_cp02

0xe4e2,	// (0x0003deab) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e2,	// (0x0003deab) cell_hwr_side_button_pane_g1

0x97fb,	// (0x000391c4) status_pane_g4_ParamLimits

0x97fb,	// (0x000391c4) status_pane_g4

0x9815,	// (0x000391de) status_pane_t1

0xbd74,	// (0x0003b73d) form2_midp_gauge_slider_cont_pane

0xbd7c,	// (0x0003b745) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd8e,	// (0x0003b757) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbda0,	// (0x0003b769) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0003f496) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdb2,	// (0x0003b77b) form2_midp_slider_pane_ParamLimits

0x8198,	// (0x00037b61) aid_size_cell_func_vkb2_ParamLimits

0x8198,	// (0x00037b61) aid_size_cell_func_vkb2

0xe47f,	// (0x0003de48) slider_pane_g4_ParamLimits

0xe47f,	// (0x0003de48) slider_pane_g4

0x88c7,	// (0x00038290) form2_midp_gauge_slider_pane_t2_cp01

0x88d5,	// (0x0003829e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x88d5,	// (0x0003829e) form2_midp_gauge_slider_pane_t3_cp01

0x88f2,	// (0x000382bb) form2_midp_slider_pane_cp01

0x21a8,	// (0x00031b71) navi_smil_pane

0xe51b,	// (0x0003dee4) navi_smil_pane_g1

0xe523,	// (0x0003deec) navi_smil_pane_t1

0xe4f0,	// (0x0003deb9) form2_midp_slider_pane_g1

0xe4f9,	// (0x0003dec2) form2_midp_slider_pane_g2

0xe501,	// (0x0003deca) form2_midp_slider_pane_g3

0xe4f0,	// (0x0003deb9) form2_midp_slider_pane_g4

0xe509,	// (0x0003ded2) form2_midp_slider_pane_g5

0x0004,

0xfe05,	// (0x0003f7ce) form2_midp_slider_pane_g

0x88b7,	// (0x00038280) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x88b7,	// (0x00038280) vkb2_area_bottom_space_btn_pane_g4

0x961a,	// (0x00038fe3) lc0_navi_pane_ParamLimits

0x961a,	// (0x00038fe3) lc0_navi_pane

0x9696,	// (0x0003905f) lc0_stat_indi_pane_ParamLimits

0x9696,	// (0x0003905f) lc0_stat_indi_pane

0x96ad,	// (0x00039076) ls0_title_pane_ParamLimits

0x96ad,	// (0x00039076) ls0_title_pane

0x285a,	// (0x00032223) bg_popup_sub_pane_cp14_ParamLimits

0xd924,	// (0x0003d2ed) list_uniindi_pane_ParamLimits

0xd930,	// (0x0003d2f9) uniindi_top_pane_ParamLimits

0xd9d0,	// (0x0003d399) list_single_uniindi_pane_g1_ParamLimits

0xd9e3,	// (0x0003d3ac) list_single_uniindi_pane_t1_ParamLimits

0x88fb,	// (0x000382c4) lc0_stat_clock_pane_ParamLimits

0x88fb,	// (0x000382c4) lc0_stat_clock_pane

0xe531,	// (0x0003defa) lc0_stat_indi_pane_g1_ParamLimits

0xe531,	// (0x0003defa) lc0_stat_indi_pane_g1

0xe53e,	// (0x0003df07) lc0_stat_indi_pane_g2_ParamLimits

0xe53e,	// (0x0003df07) lc0_stat_indi_pane_g2

0x0001,

0xfe10,	// (0x0003f7d9) lc0_stat_indi_pane_g_ParamLimits

0xfe10,	// (0x0003f7d9) lc0_stat_indi_pane_g

0x8908,	// (0x000382d1) lc0_uni_indicator_pane_ParamLimits

0x8908,	// (0x000382d1) lc0_uni_indicator_pane

0xe54b,	// (0x0003df14) ls0_title_pane_g1_ParamLimits

0xe54b,	// (0x0003df14) ls0_title_pane_g1

0xe55f,	// (0x0003df28) ls0_title_pane_t1_ParamLimits

0xe55f,	// (0x0003df28) ls0_title_pane_t1

0x8915,	// (0x000382de) lc0_uni_indicator_pane_g1_ParamLimits

0x8915,	// (0x000382de) lc0_uni_indicator_pane_g1

0xe595,	// (0x0003df5e) lc0_stat_clock_pane_t1

0x5675,	// (0x0003503e) main_ai5_pane

0xe5a3,	// (0x0003df6c) ai5_sk_pane_ParamLimits

0xe5a3,	// (0x0003df6c) ai5_sk_pane

0xe5b0,	// (0x0003df79) cell_ai5_widget_pane_ParamLimits

0xe5b0,	// (0x0003df79) cell_ai5_widget_pane

0xe64f,	// (0x0003e018) aid_size_cell_widget_grid

0xe65d,	// (0x0003e026) bg_ai5_widget_pane_ParamLimits

0xe65d,	// (0x0003e026) bg_ai5_widget_pane

0xe6d9,	// (0x0003e0a2) cell_ai5_widget_pane_g2

0xe6ed,	// (0x0003e0b6) cell_ai5_widget_pane_g3

0xe707,	// (0x0003e0d0) cell_ai5_widget_pane_g4

0xe717,	// (0x0003e0e0) cell_ai5_widget_pane_g5

0xe727,	// (0x0003e0f0) cell_ai5_widget_pane_g6

0xe733,	// (0x0003e0fc) cell_ai5_widget_pane_g7

0xe79f,	// (0x0003e168) cell_ai5_widget_pane_t1_ParamLimits

0xe79f,	// (0x0003e168) cell_ai5_widget_pane_t1

0xe7bc,	// (0x0003e185) cell_ai5_widget_pane_t2_ParamLimits

0xe7bc,	// (0x0003e185) cell_ai5_widget_pane_t2

0xe7d4,	// (0x0003e19d) cell_ai5_widget_pane_t3_ParamLimits

0xe7d4,	// (0x0003e19d) cell_ai5_widget_pane_t3

0xe7ec,	// (0x0003e1b5) cell_ai5_widget_pane_t4_ParamLimits

0xe7ec,	// (0x0003e1b5) cell_ai5_widget_pane_t4

0xe812,	// (0x0003e1db) cell_ai5_widget_pane_t5_ParamLimits

0xe812,	// (0x0003e1db) cell_ai5_widget_pane_t5

0xe832,	// (0x0003e1fb) cell_ai5_widget_pane_t6_ParamLimits

0xe832,	// (0x0003e1fb) cell_ai5_widget_pane_t6

0xe844,	// (0x0003e20d) cell_ai5_widget_pane_t7_ParamLimits

0xe844,	// (0x0003e20d) cell_ai5_widget_pane_t7

0xe863,	// (0x0003e22c) cell_ai5_widget_pane_t8_ParamLimits

0xe863,	// (0x0003e22c) cell_ai5_widget_pane_t8

0x000b,

0xfe30,	// (0x0003f7f9) cell_ai5_widget_pane_t_ParamLimits

0xfe30,	// (0x0003f7f9) cell_ai5_widget_pane_t

0xe8e7,	// (0x0003e2b0) grid_ai5_widget_pane

0x285a,	// (0x00032223) highlight_cell_ai5_widget_pane_ParamLimits

0x285a,	// (0x00032223) highlight_cell_ai5_widget_pane

0xe8f5,	// (0x0003e2be) ai5_sk_left_pane

0xe8ff,	// (0x0003e2c8) ai5_sk_middle_pane

0xe909,	// (0x0003e2d2) ai5_sk_right_pane

0xe913,	// (0x0003e2dc) bg_ai5_widget_pane_g1_ParamLimits

0xe913,	// (0x0003e2dc) bg_ai5_widget_pane_g1

0xe91f,	// (0x0003e2e8) bg_ai5_widget_pane_g2_ParamLimits

0xe91f,	// (0x0003e2e8) bg_ai5_widget_pane_g2

0xe92b,	// (0x0003e2f4) bg_ai5_widget_pane_g3_ParamLimits

0xe92b,	// (0x0003e2f4) bg_ai5_widget_pane_g3

0xe937,	// (0x0003e300) bg_ai5_widget_pane_g4_ParamLimits

0xe937,	// (0x0003e300) bg_ai5_widget_pane_g4

0xe943,	// (0x0003e30c) bg_ai5_widget_pane_g5_ParamLimits

0xe943,	// (0x0003e30c) bg_ai5_widget_pane_g5

0xe94f,	// (0x0003e318) bg_ai5_widget_pane_g6_ParamLimits

0xe94f,	// (0x0003e318) bg_ai5_widget_pane_g6

0xe95b,	// (0x0003e324) bg_ai5_widget_pane_g7_ParamLimits

0xe95b,	// (0x0003e324) bg_ai5_widget_pane_g7

0xe967,	// (0x0003e330) bg_ai5_widget_pane_g8_ParamLimits

0xe967,	// (0x0003e330) bg_ai5_widget_pane_g8

0xe973,	// (0x0003e33c) bg_ai5_widget_pane_g9_ParamLimits

0xe973,	// (0x0003e33c) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x0003f812) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x0003f812) bg_ai5_widget_pane_g

0xe9ab,	// (0x0003e374) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9ab,	// (0x0003e374) cell_shortcut_ai5_widget_pane

0x9119,	// (0x00038ae2) bg_cell_shortcut_ai5_widget_pane

0xe9be,	// (0x0003e387) cell_grid_ai5_widget_pane_g1

0x9119,	// (0x00038ae2) highlight_cell_shortcut_ai5_widget_pane

0x997e,	// (0x00039347) ai5_sk_left_pane_g1

0xe9c7,	// (0x0003e390) ai5_sk_left_pane_g2

0xe9cf,	// (0x0003e398) ai5_sk_left_pane_g3

0xe9d7,	// (0x0003e3a0) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x0003f825) ai5_sk_left_pane_g

0xe9df,	// (0x0003e3a8) ai5_sk_left_pane_t1

0x9986,	// (0x0003934f) ai5_sk_right_pane_g1

0xe9ed,	// (0x0003e3b6) ai5_sk_right_pane_g2

0xe9f5,	// (0x0003e3be) ai5_sk_right_pane_g3

0xe9fd,	// (0x0003e3c6) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x0003f82e) ai5_sk_right_pane_g

0xea05,	// (0x0003e3ce) ai5_sk_right_pane_t1

0x9986,	// (0x0003934f) ai5_sk_middle_pane_g1

0x997e,	// (0x00039347) ai5_sk_middle_pane_g2

0x999e,	// (0x00039367) ai5_sk_middle_pane_g3

0xe9f5,	// (0x0003e3be) ai5_sk_middle_pane_g4

0xe9cf,	// (0x0003e398) ai5_sk_middle_pane_g5

0xea13,	// (0x0003e3dc) ai5_sk_middle_pane_g6

0xea1b,	// (0x0003e3e4) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x0003f837) ai5_sk_middle_pane_g

0x94a0,	// (0x00038e69) aid_touch_area_size_lc0_ParamLimits

0x94a0,	// (0x00038e69) aid_touch_area_size_lc0

0x7dab,	// (0x00037774) cell_hwr_candidate_pane_t1_ParamLimits

0x94be,	// (0x00038e87) aid_touch_navi_pane

0x97ad,	// (0x00039176) status_dt_navi_pane_ParamLimits

0x97ad,	// (0x00039176) status_dt_navi_pane

0x97ba,	// (0x00039183) status_dt_sta_pane_ParamLimits

0x97ba,	// (0x00039183) status_dt_sta_pane

0xea23,	// (0x0003e3ec) dt_sta_controll_pane

0xea30,	// (0x0003e3f9) dt_sta_indi_pane

0xea41,	// (0x0003e40a) dt_sta_title_pane

0x234b,	// (0x00031d14) bg_dt_sta_indi_pane_ParamLimits

0x234b,	// (0x00031d14) bg_dt_sta_indi_pane

0xea54,	// (0x0003e41d) dt_sta_battery_pane

0xea5c,	// (0x0003e425) dt_sta_indi_pane_g1

0xea65,	// (0x0003e42e) dt_sta_indi_pane_g2

0xea6e,	// (0x0003e437) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x0003f846) dt_sta_indi_pane_g

0xea77,	// (0x0003e440) dt_sta_signal_pane

0x285a,	// (0x00032223) bg_dt_sta_title_pane_ParamLimits

0x285a,	// (0x00032223) bg_dt_sta_title_pane

0xea80,	// (0x0003e449) dt_sta_title_pane_g1

0xea88,	// (0x0003e451) dt_sta_title_pane_t1_ParamLimits

0xea88,	// (0x0003e451) dt_sta_title_pane_t1

0x21a8,	// (0x00031b71) bg_dt_sta_control_pane

0xea9d,	// (0x0003e466) dt_sta_controll_pane_g1

0xeaa6,	// (0x0003e46f) bg_dt_sta_title_pane_g1

0xeaaf,	// (0x0003e478) bg_dt_sta_title_pane_g2

0xeab8,	// (0x0003e481) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x0003f84d) bg_dt_sta_title_pane_g

0xbfc1,	// (0x0003b98a) bg_dt_sta_indi_pane_g1

0xeac1,	// (0x0003e48a) dt_sta_signal_pane_g1

0xeac9,	// (0x0003e492) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x0003f854) dt_sta_signal_pane_g

0xead1,	// (0x0003e49a) dt_sta_battery_pane_g1

0xeada,	// (0x0003e4a3) dt_sta_battery_pane_t1

0xbfc1,	// (0x0003b98a) bg_dt_sta_control_pane_g1

0x6993,	// (0x0003635c) fep_china_uni_eep_pane

0x699b,	// (0x00036364) fep_china_uni_entry_pane_ParamLimits

0x69ab,	// (0x00036374) popup_fep_china_uni_window_g1_ParamLimits

0x69bb,	// (0x00036384) popup_fep_china_uni_window_g2_ParamLimits

0x69bb,	// (0x00036384) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0003f0c1) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0003f0c1) popup_fep_china_uni_window_g

0xeae9,	// (0x0003e4b2) fep_china_uni_eep_pane_g1

0xeaf1,	// (0x0003e4ba) fep_china_uni_eep_pane_t1

0xe512,	// (0x0003dedb) aid_touch_area_size_smil_player

0x9612,	// (0x00038fdb) lc0_clock_pane

0x9809,	// (0x000391d2) status_pane_g5_ParamLimits

0x9809,	// (0x000391d2) status_pane_g5

0x70b6,	// (0x00036a7f) popup_keymap_window

0x97cf,	// (0x00039198) status_icon_pane

0xe6ed,	// (0x0003e0b6) cell_ai5_widget_pane_g3_ParamLimits

0xe707,	// (0x0003e0d0) cell_ai5_widget_pane_g4_ParamLimits

0xe717,	// (0x0003e0e0) cell_ai5_widget_pane_g5_ParamLimits

0xe73f,	// (0x0003e108) cell_ai5_widget_pane_g8_ParamLimits

0xe73f,	// (0x0003e108) cell_ai5_widget_pane_g8

0xe753,	// (0x0003e11c) cell_ai5_widget_pane_g9_ParamLimits

0xe753,	// (0x0003e11c) cell_ai5_widget_pane_g9

0xe767,	// (0x0003e130) cell_ai5_widget_pane_g10_ParamLimits

0xe767,	// (0x0003e130) cell_ai5_widget_pane_g10

0xeb00,	// (0x0003e4c9) status_icon_pane_g1

0x21a8,	// (0x00031b71) bg_popup_sub_pane_cp13

0xeb08,	// (0x0003e4d1) popup_keymap_window_t1

0x93f1,	// (0x00038dba) control_pane_g6_ParamLimits

0x93f1,	// (0x00038dba) control_pane_g6

0x93fe,	// (0x00038dc7) control_pane_g7_ParamLimits

0x93fe,	// (0x00038dc7) control_pane_g7

0x940b,	// (0x00038dd4) control_pane_g8_ParamLimits

0x940b,	// (0x00038dd4) control_pane_g8

0xea23,	// (0x0003e3ec) dt_sta_controll_pane_ParamLimits

0xea30,	// (0x0003e3f9) dt_sta_indi_pane_ParamLimits

0xea41,	// (0x0003e40a) dt_sta_title_pane_ParamLimits

0x279c,	// (0x00032165) aid_size_touch_scroll_bar_cale

0x5752,	// (0x0003511b) popup_discreet_window_ParamLimits

0x5752,	// (0x0003511b) popup_discreet_window

0x57e0,	// (0x000351a9) popup_sk_window

0x9fdc,	// (0x000399a5) bg_popup_sub_pane_cp28_ParamLimits

0x9fdc,	// (0x000399a5) bg_popup_sub_pane_cp28

0xeb16,	// (0x0003e4df) popup_discreet_window_g1_ParamLimits

0xeb16,	// (0x0003e4df) popup_discreet_window_g1

0xeb36,	// (0x0003e4ff) popup_discreet_window_t1_ParamLimits

0xeb36,	// (0x0003e4ff) popup_discreet_window_t1

0xeb54,	// (0x0003e51d) popup_discreet_window_t2_ParamLimits

0xeb54,	// (0x0003e51d) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x0003f859) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x0003f859) popup_discreet_window_t

0x8928,	// (0x000382f1) popup_sk_window_g1

0x8932,	// (0x000382fb) popup_sk_window_g2

0x0001,

0xfe97,	// (0x0003f860) popup_sk_window_g

0x893a,	// (0x00038303) popup_sk_window_t1

0x8948,	// (0x00038311) popup_sk_window_t1_copy1

0xe6d9,	// (0x0003e0a2) cell_ai5_widget_pane_g2_ParamLimits

0xe875,	// (0x0003e23e) cell_ai5_widget_pane_t9_ParamLimits

0xe875,	// (0x0003e23e) cell_ai5_widget_pane_t9

0x21a8,	// (0x00031b71) main_fep_fshwr2_pane

0x8956,	// (0x0003831f) aid_fshwr2_btn_pane

0x8966,	// (0x0003832f) aid_fshwr2_syb_pane

0x897a,	// (0x00038343) aid_fshwr2_txt_pane

0x898a,	// (0x00038353) fshwr2_func_candi_pane

0x89aa,	// (0x00038373) fshwr2_hwr_syb_pane

0x89c0,	// (0x00038389) fshwr2_icf_pane

0x5675,	// (0x0003503e) fshwr2_icf_bg_pane

0x89f4,	// (0x000383bd) fshwr2_icf_pane_t1_ParamLimits

0x89f4,	// (0x000383bd) fshwr2_icf_pane_t1

0x6793,	// (0x0003615c) fshwr2_func_candi_pane_g1

0xeba6,	// (0x0003e56f) fshwr2_func_candi_row_pane_ParamLimits

0xeba6,	// (0x0003e56f) fshwr2_func_candi_row_pane

0x8a0c,	// (0x000383d5) cell_fshwr2_syb_pane_ParamLimits

0x8a0c,	// (0x000383d5) cell_fshwr2_syb_pane

0x8a2d,	// (0x000383f6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8a2d,	// (0x000383f6) fshwr2_hwr_syb_pane_g1

0x5675,	// (0x0003503e) bg_popup_call_pane_cp01

0x8a3b,	// (0x00038404) fshwr2_func_candi_cell_pane_ParamLimits

0x8a3b,	// (0x00038404) fshwr2_func_candi_cell_pane

0xa653,	// (0x0003a01c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa653,	// (0x0003a01c) fshwr2_func_candi_cell_bg_pane

0x8a8c,	// (0x00038455) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8a8c,	// (0x00038455) fshwr2_func_candi_cell_pane_g1

0x8ab7,	// (0x00038480) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8ab7,	// (0x00038480) fshwr2_func_candi_cell_pane_t1

0x5675,	// (0x0003503e) bg_button_pane_cp08

0x9440,	// (0x00038e09) cell_fshwr2_syb_bg_pane

0x8aca,	// (0x00038493) cell_fshwr2_syb_bg_pane_g1

0x8ade,	// (0x000384a7) cell_fshwr2_syb_bg_pane_t1

0x285a,	// (0x00032223) main_tmo_pane

0xab00,	// (0x0003a4c9) uni_indicator_pane_g1_ParamLimits

0xab16,	// (0x0003a4df) uni_indicator_pane_g2_ParamLimits

0xab2c,	// (0x0003a4f5) uni_indicator_pane_g3_ParamLimits

0xab3f,	// (0x0003a508) uni_indicator_pane_g4_ParamLimits

0xab3f,	// (0x0003a508) uni_indicator_pane_g4

0xab53,	// (0x0003a51c) uni_indicator_pane_g5_ParamLimits

0xab53,	// (0x0003a51c) uni_indicator_pane_g5

0xab53,	// (0x0003a51c) uni_indicator_pane_g6_ParamLimits

0xab53,	// (0x0003a51c) uni_indicator_pane_g6

0xf8fc,	// (0x0003f2c5) uni_indicator_pane_g_ParamLimits

0xd4f0,	// (0x0003ceb9) popup_tmo_note_window_ParamLimits

0xd4f0,	// (0x0003ceb9) popup_tmo_note_window

0x817a,	// (0x00037b43) fshwr2_bg_pane

0x8aa8,	// (0x00038471) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8aa8,	// (0x00038471) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x0003f865) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x0003f865) fshwr2_func_candi_cell_pane_g

0x7d64,	// (0x0003772d) bg_popup_window_pane_cp01

0x8af4,	// (0x000384bd) bg_popup_window_pane_g1_cp01

0xebc9,	// (0x0003e592) bg_popup_window_pane_cp22_ParamLimits

0xebc9,	// (0x0003e592) bg_popup_window_pane_cp22

0xebd7,	// (0x0003e5a0) listscroll_tmo_link_pane_ParamLimits

0xebd7,	// (0x0003e5a0) listscroll_tmo_link_pane

0xec17,	// (0x0003e5e0) popup_tmo_note_window_g1_ParamLimits

0xec17,	// (0x0003e5e0) popup_tmo_note_window_g1

0xec24,	// (0x0003e5ed) tmo_note_info_pane_ParamLimits

0xec24,	// (0x0003e5ed) tmo_note_info_pane

0xec3e,	// (0x0003e607) list_tmo_note_info_pane_g1_ParamLimits

0xec3e,	// (0x0003e607) list_tmo_note_info_pane_g1

0xec55,	// (0x0003e61e) list_tmo_note_info_pane_g2_ParamLimits

0xec55,	// (0x0003e61e) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x0003f86a) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x0003f86a) list_tmo_note_info_pane_g

0xec71,	// (0x0003e63a) list_tmo_note_info_text_pane_ParamLimits

0xec71,	// (0x0003e63a) list_tmo_note_info_text_pane

0xecf6,	// (0x0003e6bf) list_tmo_link_pane

0xed03,	// (0x0003e6cc) scroll_pane_cp20

0xed10,	// (0x0003e6d9) list_single_tmo_link_pane_ParamLimits

0xed10,	// (0x0003e6d9) list_single_tmo_link_pane

0xed20,	// (0x0003e6e9) list_single_tmo_link_pane_t1

0xed2e,	// (0x0003e6f7) list_tmo_note_info_text_pane_t1_ParamLimits

0xed2e,	// (0x0003e6f7) list_tmo_note_info_text_pane_t1

0x6261,	// (0x00035c2a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6261,	// (0x00035c2a) aid_size_touch_scroll_bar_cp01

0x618b,	// (0x00035b54) aid_size_touch_slider_marker

0x57c8,	// (0x00035191) popup_settings_window_ParamLimits

0x57c8,	// (0x00035191) popup_settings_window

0x4162,	// (0x00033b2b) popup_candi_list_indi_window

0x94be,	// (0x00038e87) aid_touch_navi_pane_ParamLimits

0x80d3,	// (0x00037a9c) rs_clock_indi_pane

0x80dc,	// (0x00037aa5) sctrl_sk_bottom_pane_ParamLimits

0x80ed,	// (0x00037ab6) sctrl_sk_top_pane_ParamLimits

0x81ea,	// (0x00037bb3) popup_fep_tooltip_window

0xe64f,	// (0x0003e018) aid_size_cell_widget_grid_ParamLimits

0xe6c4,	// (0x0003e08d) cell_ai5_widget_pane_g1_ParamLimits

0xe6c4,	// (0x0003e08d) cell_ai5_widget_pane_g1

0xe727,	// (0x0003e0f0) cell_ai5_widget_pane_g6_ParamLimits

0xe733,	// (0x0003e0fc) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe15,	// (0x0003f7de) cell_ai5_widget_pane_g_ParamLimits

0xfe15,	// (0x0003f7de) cell_ai5_widget_pane_g

0xe8a4,	// (0x0003e26d) cell_ai5_widget_pane_t10_ParamLimits

0xe8a4,	// (0x0003e26d) cell_ai5_widget_pane_t10

0xe8e7,	// (0x0003e2b0) grid_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0003e348) cell_contacts_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0003e348) cell_contacts_ai5_widget_pane

0xeb69,	// (0x0003e532) popup_discreet_window_t3_ParamLimits

0xeb69,	// (0x0003e532) popup_discreet_window_t3

0x89dc,	// (0x000383a5) popup_fshwr2_char_preview_window_ParamLimits

0x89dc,	// (0x000383a5) popup_fshwr2_char_preview_window

0xec8f,	// (0x0003e658) tmo_note_info_pane_t1

0xeca4,	// (0x0003e66d) tmo_note_info_pane_t2

0xecbd,	// (0x0003e686) tmo_note_info_pane_t3

0xecd2,	// (0x0003e69b) tmo_note_info_pane_t4

0xece4,	// (0x0003e6ad) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x0003f86f) tmo_note_info_pane_t

0xecf6,	// (0x0003e6bf) list_tmo_link_pane_ParamLimits

0xed03,	// (0x0003e6cc) scroll_pane_cp20_ParamLimits

0x5675,	// (0x0003503e) bg_popup_fep_char_preview_window_cp01

0xed47,	// (0x0003e710) popup_fshwr2_char_preview_window_t1

0xed55,	// (0x0003e71e) popup_candi_list_indi_window_g1

0xed5e,	// (0x0003e727) bg_cell_contacts_ai5_widget_pane

0xed6a,	// (0x0003e733) cell_contacts_ai5_widget_pane_g1

0xed7f,	// (0x0003e748) cell_contacts_ai5_widget_pane_g2

0xed8b,	// (0x0003e754) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x0003f87a) cell_contacts_ai5_widget_pane_g

0xed97,	// (0x0003e760) cell_contacts_ai5_widget_pane_t1

0x285a,	// (0x00032223) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0e,	// (0x0003e7d7) settings_container_pane

0x9119,	// (0x00038ae2) listscroll_set_pane_copy1

0xb6f2,	// (0x0003b0bb) scroll_pane_cp121_copy1

0xee1a,	// (0x0003e7e3) set_content_pane_copy1

0xee22,	// (0x0003e7eb) aid_height_set_list_copy1_ParamLimits

0xee22,	// (0x0003e7eb) aid_height_set_list_copy1

0xad53,	// (0x0003a71c) aid_size_parent_copy1_ParamLimits

0xad53,	// (0x0003a71c) aid_size_parent_copy1

0xee2e,	// (0x0003e7f7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee2e,	// (0x0003e7f7) button_value_adjust_pane_cp6_copy1

0x9440,	// (0x00038e09) list_highlight_pane_cp2_copy1_ParamLimits

0x9440,	// (0x00038e09) list_highlight_pane_cp2_copy1

0xee42,	// (0x0003e80b) list_set_pane_copy1_ParamLimits

0xee42,	// (0x0003e80b) list_set_pane_copy1

0xeda9,	// (0x0003e772) main_pane_set_t1_copy1_ParamLimits

0xeda9,	// (0x0003e772) main_pane_set_t1_copy1

0xede3,	// (0x0003e7ac) main_pane_set_t2_copy1_ParamLimits

0xede3,	// (0x0003e7ac) main_pane_set_t2_copy1

0xef03,	// (0x0003e8cc) main_pane_set_t3_copy1

0xef11,	// (0x0003e8da) main_pane_set_t4_copy1

0xee02,	// (0x0003e7cb) set_content_pane_g1_copy1_ParamLimits

0xee02,	// (0x0003e7cb) set_content_pane_g1_copy1

0xef1f,	// (0x0003e8e8) setting_code_pane_copy1

0xef27,	// (0x0003e8f0) setting_slider_graphic_pane_copy1

0xef27,	// (0x0003e8f0) setting_slider_pane_copy1

0xef2f,	// (0x0003e8f8) setting_text_pane_copy1

0xef2f,	// (0x0003e8f8) setting_volume_pane_copy1

0xef1f,	// (0x0003e8e8) settings_code_pane_cp2_copy1

0xef37,	// (0x0003e900) settings_code_pane_cp_copy1_ParamLimits

0xef37,	// (0x0003e900) settings_code_pane_cp_copy1

0x8afd,	// (0x000384c6) volume_set_pane_copy1

0xef4b,	// (0x0003e914) volume_set_pane_g10_copy1

0xef57,	// (0x0003e920) volume_set_pane_g1_copy1

0xef61,	// (0x0003e92a) volume_set_pane_g2_copy1

0xef6b,	// (0x0003e934) volume_set_pane_g3_copy1

0xef75,	// (0x0003e93e) volume_set_pane_g4_copy1

0xef7f,	// (0x0003e948) volume_set_pane_g5_copy1

0xef89,	// (0x0003e952) volume_set_pane_g6_copy1

0xef93,	// (0x0003e95c) volume_set_pane_g7_copy1

0xef9d,	// (0x0003e966) volume_set_pane_g8_copy1

0xefa7,	// (0x0003e970) volume_set_pane_g9_copy1

0x2218,	// (0x00031be1) bg_set_opt_pane_cp_copy1_ParamLimits

0x2218,	// (0x00031be1) bg_set_opt_pane_cp_copy1

0x8b09,	// (0x000384d2) setting_slider_pane_t1_copy1_ParamLimits

0x8b09,	// (0x000384d2) setting_slider_pane_t1_copy1

0x8b28,	// (0x000384f1) setting_slider_pane_t2_copy1_ParamLimits

0x8b28,	// (0x000384f1) setting_slider_pane_t2_copy1

0x8b42,	// (0x0003850b) setting_slider_pane_t3_copy1_ParamLimits

0x8b42,	// (0x0003850b) setting_slider_pane_t3_copy1

0x8b5a,	// (0x00038523) slider_set_pane_copy1_ParamLimits

0x8b5a,	// (0x00038523) slider_set_pane_copy1

0x28b2,	// (0x0003227b) set_opt_bg_pane_g1_copy2

0x28ba,	// (0x00032283) set_opt_bg_pane_g2_copy2

0xefb3,	// (0x0003e97c) set_opt_bg_pane_g3_copy2

0x28ca,	// (0x00032293) set_opt_bg_pane_g4_copy2

0x28d2,	// (0x0003229b) set_opt_bg_pane_g5_copy2

0x28da,	// (0x000322a3) set_opt_bg_pane_g6_copy2

0xefbd,	// (0x0003e986) set_opt_bg_pane_g7_copy2

0xefc7,	// (0x0003e990) set_opt_bg_pane_g8_copy2

0xefd1,	// (0x0003e99a) set_opt_bg_pane_g9_copy2

0x8b70,	// (0x00038539) aid_size_touch_slider_mark_copy1_ParamLimits

0x8b70,	// (0x00038539) aid_size_touch_slider_mark_copy1

0xefdb,	// (0x0003e9a4) slider_set_pane_g1_copy1

0x8b84,	// (0x0003854d) slider_set_pane_g2_copy1

0x78a7,	// (0x00037270) slider_set_pane_g3_copy1_ParamLimits

0x78a7,	// (0x00037270) slider_set_pane_g3_copy1

0x78bb,	// (0x00037284) slider_set_pane_g4_copy1_ParamLimits

0x78bb,	// (0x00037284) slider_set_pane_g4_copy1

0x78d3,	// (0x0003729c) slider_set_pane_g5_copy1_ParamLimits

0x78d3,	// (0x0003729c) slider_set_pane_g5_copy1

0x78a7,	// (0x00037270) slider_set_pane_g6_copy1_ParamLimits

0x78a7,	// (0x00037270) slider_set_pane_g6_copy1

0x8b8c,	// (0x00038555) slider_set_pane_g7_copy1_ParamLimits

0x8b8c,	// (0x00038555) slider_set_pane_g7_copy1

0x21bc,	// (0x00031b85) bg_set_opt_pane_cp2_copy1

0xefe4,	// (0x0003e9ad) setting_slider_graphic_pane_g1_copy1

0xefed,	// (0x0003e9b6) setting_slider_graphic_pane_t1_copy1

0xeffd,	// (0x0003e9c6) setting_slider_graphic_pane_t2_copy1

0xf00d,	// (0x0003e9d6) slider_set_pane_cp_copy1

0xf01d,	// (0x0003e9e6) input_focus_pane_cp1_copy1

0xf026,	// (0x0003e9ef) list_set_text_pane_copy1

0xf02e,	// (0x0003e9f7) setting_text_pane_g1_copy1

0x47f8,	// (0x000341c1) set_text_pane_t1_copy1

0xf01d,	// (0x0003e9e6) input_focus_pane_cp2_copy1

0xf02e,	// (0x0003e9f7) setting_code_pane_g1_copy1

0xf037,	// (0x0003ea00) setting_code_pane_t1_copy1

0xb4f7,	// (0x0003aec0) list_set_graphic_pane_copy1

0x21bc,	// (0x00031b85) bg_set_opt_pane_cp4_copy1

0x8e08,	// (0x000387d1) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e08,	// (0x000387d1) list_set_graphic_pane_g1_copy1

0xf045,	// (0x0003ea0e) list_set_graphic_pane_g2_copy1

0x8e20,	// (0x000387e9) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e20,	// (0x000387e9) list_set_graphic_pane_t1_copy1

0xbfc1,	// (0x0003b98a) rs_clock_indi_pane_g1

0xf04d,	// (0x0003ea16) rs_clock_indi_pane_t1

0xf05b,	// (0x0003ea24) rs_indi_pane

0xf063,	// (0x0003ea2c) rs_indi_pane_g1

0xf06c,	// (0x0003ea35) rs_indi_pane_g2

0xed55,	// (0x0003e71e) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x0003f881) rs_indi_pane_g

0x9119,	// (0x00038ae2) bg_popup_preview_window_pane_cp03

0xf075,	// (0x0003ea3e) popup_fep_tooltip_window_t1

0xcc9e,	// (0x0003c667) popup_note2_window_g2_ParamLimits

0xcc9e,	// (0x0003c667) popup_note2_window_g2

0x0001,

0xfc45,	// (0x0003f60e) popup_note2_window_g_ParamLimits

0xfc45,	// (0x0003f60e) popup_note2_window_g

0xd1a6,	// (0x0003cb6f) bg_popup_sub_pane_cp11_ParamLimits

0xd1b3,	// (0x0003cb7c) cell_ai3_links_pane_g1_ParamLimits

0xd1ca,	// (0x0003cb93) cell_ai3_links_pane_t1

0x47f8,	// (0x000341c1) set_text_pane_t1_copy1_ParamLimits

0x901b,	// (0x000389e4) cell_graphic_popup_pane_cp2_ParamLimits

0x901b,	// (0x000389e4) cell_graphic_popup_pane_cp2

0xf083,	// (0x0003ea4c) cell_graphic_popup_pane_g1_cp2

0x25af,	// (0x00031f78) cell_graphic_popup_pane_g2_cp2

0xf08b,	// (0x0003ea54) cell_graphic_popup_pane_g3_cp2

0xf093,	// (0x0003ea5c) cell_graphic_popup_pane_t2_cp2

0x25c0,	// (0x00031f89) grid_highlight_pane_cp3_cp2

0x2b6e,	// (0x00032537) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x285a,	// (0x00032223) main_tmo_pane_ParamLimits

0xd4e4,	// (0x0003cead) popup_tmo_big_image_note_window

0xe6b3,	// (0x0003e07c) cell_ai5_widget_list_pane

0xe6bb,	// (0x0003e084) cell_ai5_widget_lrg_icon_pane

0xec8f,	// (0x0003e658) tmo_note_info_pane_t1_ParamLimits

0xeca4,	// (0x0003e66d) tmo_note_info_pane_t2_ParamLimits

0xecbd,	// (0x0003e686) tmo_note_info_pane_t3_ParamLimits

0xecd2,	// (0x0003e69b) tmo_note_info_pane_t4_ParamLimits

0xece4,	// (0x0003e6ad) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x0003f86f) tmo_note_info_pane_t_ParamLimits

0xee0e,	// (0x0003e7d7) settings_container_pane_ParamLimits

0xf015,	// (0x0003e9de) indicator_popup_pane_cp5

0xf015,	// (0x0003e9de) indicator_popup_pane_cp6

0xb4f7,	// (0x0003aec0) list_set_graphic_pane_copy1_ParamLimits

0x21a8,	// (0x00031b71) bg_popup_window_pane_cp23

0xf0a1,	// (0x0003ea6a) popup_tmo_big_image_note_window_g1

0xf0ad,	// (0x0003ea76) popup_tmo_big_image_note_window_t1

0xf0bd,	// (0x0003ea86) popup_tmo_big_image_note_window_t2

0xf0cd,	// (0x0003ea96) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x0003f888) popup_tmo_big_image_note_window_t

0xbfc1,	// (0x0003b98a) cell_ai5_widget_lrg_icon_pane_g1

0xf0dd,	// (0x0003eaa6) cell_ai5_widget_lrg_icon_pane_t1

0xf0eb,	// (0x0003eab4) cell_ai5_widget_list_row_pane_ParamLimits

0xf0eb,	// (0x0003eab4) cell_ai5_widget_list_row_pane

0xf103,	// (0x0003eacc) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf103,	// (0x0003eacc) cell_ai5_widget_list_row_pane_g1

0xf110,	// (0x0003ead9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf110,	// (0x0003ead9) cell_ai5_widget_list_row_pane_t1

0xf13b,	// (0x0003eb04) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf13b,	// (0x0003eb04) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x0003f88f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x0003f88f) cell_ai5_widget_list_row_pane_t

0x5675,	// (0x0003503e) main_fep_vtchi_ss_pane

0xf18b,	// (0x0003eb54) popup_fep_char_pre_window

0xf193,	// (0x0003eb5c) popup_fep_ituss_window

0xf1bf,	// (0x0003eb88) popup_fep_vkbss_window

0x9440,	// (0x00038e09) grid_vkbss_keypad_pane_ParamLimits

0x9440,	// (0x00038e09) grid_vkbss_keypad_pane

0xf201,	// (0x0003ebca) ituss_keypad_pane

0x8bac,	// (0x00038575) aid_vkbss_key_offset_ParamLimits

0x8bac,	// (0x00038575) aid_vkbss_key_offset

0x8bb8,	// (0x00038581) cell_vkbss_key_pane_ParamLimits

0x8bb8,	// (0x00038581) cell_vkbss_key_pane

0xf20d,	// (0x0003ebd6) bg_cell_vkbss_key_g1_ParamLimits

0xf20d,	// (0x0003ebd6) bg_cell_vkbss_key_g1

0xf219,	// (0x0003ebe2) cell_vkbss_key_3p_pane_ParamLimits

0xf219,	// (0x0003ebe2) cell_vkbss_key_3p_pane

0xf24f,	// (0x0003ec18) cell_vkbss_key_g1_ParamLimits

0xf24f,	// (0x0003ec18) cell_vkbss_key_g1

0xf285,	// (0x0003ec4e) cell_vkbss_key_t1_ParamLimits

0xf285,	// (0x0003ec4e) cell_vkbss_key_t1

0x8c1a,	// (0x000385e3) cell_ituss_key_pane_ParamLimits

0x8c1a,	// (0x000385e3) cell_ituss_key_pane

0xf2e1,	// (0x0003ecaa) bg_cell_ituss_key_g1_ParamLimits

0xf2e1,	// (0x0003ecaa) bg_cell_ituss_key_g1

0xf2ed,	// (0x0003ecb6) cell_ituss_key_pane_g1_ParamLimits

0xf2ed,	// (0x0003ecb6) cell_ituss_key_pane_g1

0x8c2b,	// (0x000385f4) cell_ituss_key_pane_g2_ParamLimits

0x8c2b,	// (0x000385f4) cell_ituss_key_pane_g2

0x0005,

0xfecd,	// (0x0003f896) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x0003f896) cell_ituss_key_pane_g

0x8caf,	// (0x00038678) cell_ituss_key_t1_ParamLimits

0x8caf,	// (0x00038678) cell_ituss_key_t1

0x8ce9,	// (0x000386b2) cell_ituss_key_t2_ParamLimits

0x8ce9,	// (0x000386b2) cell_ituss_key_t2

0x8d1b,	// (0x000386e4) cell_ituss_key_t3_ParamLimits

0x8d1b,	// (0x000386e4) cell_ituss_key_t3

0x8d4c,	// (0x00038715) cell_ituss_key_t4_ParamLimits

0x8d4c,	// (0x00038715) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0003f8a3) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0003f8a3) cell_ituss_key_t

0xf313,	// (0x0003ecdc) cell_vkbss_key_3p_pane_g1

0xf31b,	// (0x0003ece4) cell_vkbss_key_3p_pane_g2

0xf323,	// (0x0003ecec) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003f8ae) cell_vkbss_key_3p_pane_g

0x9119,	// (0x00038ae2) bg_popup_fep_char_preview_window_cp02

0xf32b,	// (0x0003ecf4) popup_fep_char_pre_window_t1

0xe63c,	// (0x0003e005) main_ai5_sk_pane

0xed5e,	// (0x0003e727) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed6a,	// (0x0003e733) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed7f,	// (0x0003e748) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed8b,	// (0x0003e754) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x0003f87a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed97,	// (0x0003e760) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x285a,	// (0x00032223) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf339,	// (0x0003ed02) main_ai5_sk_pane_g1

0x9e14,	// (0x000397dd) popup_query_code_window_g1

0xf1a9,	// (0x0003eb72) popup_fep_vkb_icf_pane

0xf1d8,	// (0x0003eba1) popup_fep_vtchi_icf_pane

0xf342,	// (0x0003ed0b) bg_icf_pane

0xf342,	// (0x0003ed0b) list_vkb_icf_pane

0xf34e,	// (0x0003ed17) bg_icf_pane_cp01

0xf361,	// (0x0003ed2a) vtchi_icf_list_pane

0xf3c1,	// (0x0003ed8a) list_vkb_icf_pane_t1_ParamLimits

0xf3c1,	// (0x0003ed8a) list_vkb_icf_pane_t1

0xf3da,	// (0x0003eda3) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x0003eda3) vtchi_icf_list_pane_t1

0xf193,	// (0x0003eb5c) popup_fep_ituss_window_ParamLimits

0xf1d8,	// (0x0003eba1) popup_fep_vtchi_icf_pane_ParamLimits

0xf201,	// (0x0003ebca) ituss_keypad_pane_ParamLimits

0x8ba2,	// (0x0003856b) ituss_sks_pane

0xf342,	// (0x0003ed0b) bg_icf_pane_ParamLimits

0xf163,	// (0x0003eb2c) icf_edit_indi_pane_ParamLimits

0xf163,	// (0x0003eb2c) icf_edit_indi_pane

0xf342,	// (0x0003ed0b) list_vkb_icf_pane_ParamLimits

0xf34e,	// (0x0003ed17) bg_icf_pane_cp01_ParamLimits

0xf17e,	// (0x0003eb47) icf_edit_indi_pane_cp01_ParamLimits

0xf17e,	// (0x0003eb47) icf_edit_indi_pane_cp01

0xf361,	// (0x0003ed2a) vtchi_query_pane

0xe4e2,	// (0x0003deab) icf_edit_indi_pane_g1_ParamLimits

0xe4e2,	// (0x0003deab) icf_edit_indi_pane_g1

0xf44a,	// (0x0003ee13) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x0003ee13) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0003f8d9) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0003f8d9) icf_edit_indi_pane_g

0xf45e,	// (0x0003ee27) icf_edit_indi_pane_t1

0xf3f3,	// (0x0003edbc) bg_input_focus_pane_cp042

0x2793,	// (0x0003215c) vtchi_button_pane

0xf3fc,	// (0x0003edc5) vtchi_query_pane_t1

0xf40a,	// (0x0003edd3) vtchi_query_pane_t2

0xf418,	// (0x0003ede1) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0003f8c8) vtchi_query_pane_t

0x5675,	// (0x0003503e) bg_button_pane_cp13

0xf426,	// (0x0003edef) vtchi_button_pane_g1

0x8d8f,	// (0x00038758) ituss_sks_pane_g1

0x8d9a,	// (0x00038763) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0003f8cf) ituss_sks_pane_g

0xf42e,	// (0x0003edf7) ituss_sks_pane_t1

0xf43c,	// (0x0003ee05) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0003f8d4) ituss_sks_pane_t

0xba95,	// (0x0003b45e) indicator_nsta_pane_cp_g1

0xba9e,	// (0x0003b467) indicator_nsta_pane_cp_g2

0xbaa6,	// (0x0003b46f) indicator_nsta_pane_cp_g3

0xbaae,	// (0x0003b477) indicator_nsta_pane_cp_g4

0xba9e,	// (0x0003b467) indicator_nsta_pane_cp_g5

0xbaa6,	// (0x0003b46f) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0003f44c) indicator_nsta_pane_cp_g

0xe229,	// (0x0003dbf2) cell_graphic2_pane_t2_ParamLimits

0xe229,	// (0x0003dbf2) cell_graphic2_pane_t2

0x0001,

0xfd9c,	// (0x0003f765) cell_graphic2_pane_t_ParamLimits

0xfd9c,	// (0x0003f765) cell_graphic2_pane_t

0xe255,	// (0x0003dc1e) cell_graphic2_control_pane_t1

0x68ea,	// (0x000362b3) signal_pane_g3_ParamLimits

0x68ea,	// (0x000362b3) signal_pane_g3

0x68f9,	// (0x000362c2) signal_pane_g4_ParamLimits

0x68f9,	// (0x000362c2) signal_pane_g4

0xf14d,	// (0x0003eb16) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14d,	// (0x0003eb16) cell_ai5_widget_list_row_pane_t3

0xf301,	// (0x0003ecca) cell_ituss_key_pane_t1_ParamLimits

0xf301,	// (0x0003ecca) cell_ituss_key_pane_t1

0x9a7b,	// (0x00039444) form_field_data_wide_pane_vc_t2_ParamLimits

0x9a7b,	// (0x00039444) form_field_data_wide_pane_vc_t2

0x9a8f,	// (0x00039458) form_field_data_wide_pane_vc_t3_ParamLimits

0x9a8f,	// (0x00039458) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0003f1ad) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003f1ad) form_field_data_wide_pane_vc_t

0xb732,	// (0x0003b0fb) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb732,	// (0x0003b0fb) form_field_slider_wide_pane_vc_t3

0xb808,	// (0x0003b1d1) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb808,	// (0x0003b1d1) form_field_popup_wide_pane_vc_t2

0xb81f,	// (0x0003b1e8) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb81f,	// (0x0003b1e8) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0003f43b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0003f43b) form_field_popup_wide_pane_vc_t

0x8956,	// (0x0003831f) aid_fshwr2_btn_pane_ParamLimits

0x8966,	// (0x0003832f) aid_fshwr2_syb_pane_ParamLimits

0x897a,	// (0x00038343) aid_fshwr2_txt_pane_ParamLimits

0x817a,	// (0x00037b43) fshwr2_bg_pane_ParamLimits

0x898a,	// (0x00038353) fshwr2_func_candi_pane_ParamLimits

0x89aa,	// (0x00038373) fshwr2_hwr_syb_pane_ParamLimits

0x89c0,	// (0x00038389) fshwr2_icf_pane_ParamLimits

0x4574,	// (0x00033f3d) list_double_graphic_pane_vc_g4_ParamLimits

0x4574,	// (0x00033f3d) list_double_graphic_pane_vc_g4

0x8c4b,	// (0x00038614) cell_ituss_key_pane_g3_ParamLimits

0x8c4b,	// (0x00038614) cell_ituss_key_pane_g3

0x8d7d,	// (0x00038746) cell_ituss_key_t5_ParamLimits

0x8d7d,	// (0x00038746) cell_ituss_key_t5

0xf1bf,	// (0x0003eb88) popup_fep_vkbss_window_ParamLimits

0xe646,	// (0x0003e00f) aid_cell_ai5_quarter

0xf45e,	// (0x0003ee27) icf_edit_indi_pane_t1_ParamLimits

0x23f3,	// (0x00031dbc) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x23f3,	// (0x00031dbc) aid_tch_indicator_popup_pane_cp2

0x2406,	// (0x00031dcf) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x2406,	// (0x00031dcf) aid_tch_query_popup_data_pane_cp2

0x9dbc,	// (0x00039785) aid_tch_query_popup_pane_ParamLimits

0x9dbc,	// (0x00039785) aid_tch_query_popup_pane

0x9dbc,	// (0x00039785) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9dbc,	// (0x00039785) aid_tch_query_popup_data_pane_cp1

0x9440,	// (0x00038e09) cell_fshwr2_syb_bg_pane_ParamLimits

0x8aca,	// (0x00038493) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8ade,	// (0x000384a7) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a9,	// (0x0003eb72) popup_fep_vkb_icf_pane_ParamLimits

0x879c,	// (0x00038165) bg_popup_fep_char_preview_window_g10

0xe77b,	// (0x0003e144) cell_ai5_widget_pane_g11_ParamLimits

0xe77b,	// (0x0003e144) cell_ai5_widget_pane_g11

0xe787,	// (0x0003e150) cell_ai5_widget_pane_g12_ParamLimits

0xe787,	// (0x0003e150) cell_ai5_widget_pane_g12

0xe793,	// (0x0003e15c) cell_ai5_widget_pane_g13_ParamLimits

0xe793,	// (0x0003e15c) cell_ai5_widget_pane_g13

0xe8c3,	// (0x0003e28c) cell_ai5_widget_pane_t11_ParamLimits

0xe8c3,	// (0x0003e28c) cell_ai5_widget_pane_t11

0xe8d5,	// (0x0003e29e) cell_ai5_widget_pane_t12_ParamLimits

0xe8d5,	// (0x0003e29e) cell_ai5_widget_pane_t12

0x8c57,	// (0x00038620) cell_ituss_key_pane_g4_ParamLimits

0x8c57,	// (0x00038620) cell_ituss_key_pane_g4

0x8c73,	// (0x0003863c) cell_ituss_key_pane_g5_ParamLimits

0x8c73,	// (0x0003863c) cell_ituss_key_pane_g5

0x8c8f,	// (0x00038658) cell_ituss_key_pane_g6_ParamLimits

0x8c8f,	// (0x00038658) cell_ituss_key_pane_g6

0x9976,	// (0x0003933f) bg_icf_pane_g1

0xf369,	// (0x0003ed32) bg_icf_pane_g2

0xf375,	// (0x0003ed3e) bg_icf_pane_g3

0xf37f,	// (0x0003ed48) bg_icf_pane_g4

0xf38b,	// (0x0003ed54) bg_icf_pane_g5

0xf395,	// (0x0003ed5e) bg_icf_pane_g6

0xf3a1,	// (0x0003ed6a) bg_icf_pane_g7

0xf3ab,	// (0x0003ed74) bg_icf_pane_g8

0xf3b7,	// (0x0003ed80) bg_icf_pane_g9

0x0008,

0xfeec,	// (0x0003f8b5) bg_icf_pane_g

0xf1ee,	// (0x0003ebb7) popup_hyb_candi_window_ParamLimits

0xf1ee,	// (0x0003ebb7) popup_hyb_candi_window

0x99ea,	// (0x000393b3) bg_popup_sub_pane_cp01_ParamLimits

0x99ea,	// (0x000393b3) bg_popup_sub_pane_cp01

0xf477,	// (0x0003ee40) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0003ee40) entry_hyb_candi_pane

0xf486,	// (0x0003ee4f) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0003ee4f) grid_hyb_candi_pane

0xf49b,	// (0x0003ee64) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x0003ee64) grid_hyb_phrase_pane

0xf4aa,	// (0x0003ee73) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x0003ee73) cell_hyb_candi_pane

0x279c,	// (0x00032165) cell_hyb_candi_scroll_pane

0x6793,	// (0x0003615c) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0003ee8f) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0003ee9d) cell_hyb_phrase_pane

0x6793,	// (0x0003615c) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0003eea6) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0003eeb4) entry_hyb_candi_pane_t1

0x9119,	// (0x00038ae2) input_focus_pane_cp06

0xf4f9,	// (0x0003eec2) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0003eeca) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0003eed2) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0003eeda) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0003eee2) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0003eeea) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small

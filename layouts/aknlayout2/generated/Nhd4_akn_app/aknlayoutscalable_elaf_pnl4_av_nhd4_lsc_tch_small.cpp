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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002656b };

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
0x94f3,	// (0x0002fa5e) Screen

0x94ff,	// (0x0002fa6a) application_window_ParamLimits

0x94ff,	// (0x0002fa6a) application_window

0xc717,	// (0x00032c82) screen_g1

0x9537,	// (0x0002faa2) area_bottom_pane_ParamLimits

0x9537,	// (0x0002faa2) area_bottom_pane

0xe9bc,	// (0x00034f27) area_top_pane_ParamLimits

0xe9bc,	// (0x00034f27) area_top_pane

0xf2ca,	// (0x00035835) main_pane_ParamLimits

0xf2ca,	// (0x00035835) main_pane

0xc721,	// (0x00032c8c) misc_graphics

0xacf1,	// (0x0003125c) battery_pane_ParamLimits

0xacf1,	// (0x0003125c) battery_pane

0x3286,	// (0x000297f1) bg_status_flat_pane_g8

0x328e,	// (0x000297f9) bg_status_flat_pane_g9

0x12a7,	// (0x00027812) context_pane_ParamLimits

0x12a7,	// (0x00027812) context_pane

0xae5c,	// (0x000313c7) navi_pane_ParamLimits

0xae5c,	// (0x000313c7) navi_pane

0xaeda,	// (0x00031445) signal_pane_ParamLimits

0xaeda,	// (0x00031445) signal_pane

0x0008,

0xf85e,	// (0x00035dc9) bg_status_flat_pane_g

0xaf6a,	// (0x000314d5) status_pane_g1_ParamLimits

0xaf6a,	// (0x000314d5) status_pane_g1

0xaf80,	// (0x000314eb) status_pane_g2_ParamLimits

0xaf80,	// (0x000314eb) status_pane_g2

0x14ce,	// (0x00027a39) status_pane_g3_ParamLimits

0x14ce,	// (0x00027a39) status_pane_g3

0x0004,

0xf791,	// (0x00035cfc) status_pane_g_ParamLimits

0xf791,	// (0x00035cfc) status_pane_g

0xaf8c,	// (0x000314f7) title_pane_ParamLimits

0xaf8c,	// (0x000314f7) title_pane

0xafef,	// (0x0003155a) uni_indicator_pane_ParamLimits

0xafef,	// (0x0003155a) uni_indicator_pane

0x0b6c,	// (0x000270d7) bg_list_pane_ParamLimits

0x0b6c,	// (0x000270d7) bg_list_pane

0xeb8c,	// (0x000350f7) find_pane

0x1772,	// (0x00027cdd) listscroll_app_pane_ParamLimits

0x1772,	// (0x00027cdd) listscroll_app_pane

0x0b98,	// (0x00027103) listscroll_form_pane

0xeb94,	// (0x000350ff) listscroll_gen_pane_ParamLimits

0xeb94,	// (0x000350ff) listscroll_gen_pane

0x0ba0,	// (0x0002710b) listscroll_set_pane

0x3dea,	// (0x0002a355) main_idle_act_pane

0x0655,	// (0x00026bc0) main_idle_trad_pane

0x0655,	// (0x00026bc0) main_list_empty_pane

0x0b8c,	// (0x000270f7) main_midp_pane

0x0bba,	// (0x00027125) main_pane_g1_ParamLimits

0x0bba,	// (0x00027125) main_pane_g1

0xa4d5,	// (0x00030a40) popup_ai_message_window_ParamLimits

0xa4d5,	// (0x00030a40) popup_ai_message_window

0xa586,	// (0x00030af1) popup_fep_china_uni_window_ParamLimits

0xa586,	// (0x00030af1) popup_fep_china_uni_window

0xa5e0,	// (0x00030b4b) popup_fep_japan_candidate_window_ParamLimits

0xa5e0,	// (0x00030b4b) popup_fep_japan_candidate_window

0xa5fe,	// (0x00030b69) popup_fep_japan_predictive_window_ParamLimits

0xa5fe,	// (0x00030b69) popup_fep_japan_predictive_window

0xa610,	// (0x00030b7b) popup_find_window

0xa62d,	// (0x00030b98) popup_grid_graphic_window_ParamLimits

0xa62d,	// (0x00030b98) popup_grid_graphic_window

0xa6cb,	// (0x00030c36) popup_large_graphic_colour_window

0xa6f1,	// (0x00030c5c) popup_menu_window_ParamLimits

0xa6f1,	// (0x00030c5c) popup_menu_window

0xa8c3,	// (0x00030e2e) popup_note_image_window

0xa889,	// (0x00030df4) popup_note_wait_window_ParamLimits

0xa889,	// (0x00030df4) popup_note_wait_window

0xa8db,	// (0x00030e46) popup_note_window_ParamLimits

0xa8db,	// (0x00030e46) popup_note_window

0xa98a,	// (0x00030ef5) popup_query_code_window_ParamLimits

0xa98a,	// (0x00030ef5) popup_query_code_window

0xa9c4,	// (0x00030f2f) popup_query_data_code_window_ParamLimits

0xa9c4,	// (0x00030f2f) popup_query_data_code_window

0xa9e1,	// (0x00030f4c) popup_query_data_window_ParamLimits

0xa9e1,	// (0x00030f4c) popup_query_data_window

0xaa63,	// (0x00030fce) popup_query_sat_info_window_ParamLimits

0xaa63,	// (0x00030fce) popup_query_sat_info_window

0xaafa,	// (0x00031065) popup_snote_single_graphic_window_ParamLimits

0xaafa,	// (0x00031065) popup_snote_single_graphic_window

0xaafa,	// (0x00031065) popup_snote_single_text_window_ParamLimits

0xaafa,	// (0x00031065) popup_snote_single_text_window

0x101e,	// (0x00027589) popup_sub_window_general

0xac57,	// (0x000311c2) popup_window_general_ParamLimits

0xac57,	// (0x000311c2) popup_window_general

0x1163,	// (0x000276ce) power_save_pane

0xa333,	// (0x0003089e) control_pane_g1_ParamLimits

0xa333,	// (0x0003089e) control_pane_g1

0xa35c,	// (0x000308c7) control_pane_g2_ParamLimits

0xa35c,	// (0x000308c7) control_pane_g2

0x0a0f,	// (0x00026f7a) control_pane_g3_ParamLimits

0x0a0f,	// (0x00026f7a) control_pane_g3

0x0007,

0xf779,	// (0x00035ce4) control_pane_g_ParamLimits

0xf779,	// (0x00035ce4) control_pane_g

0xa3c4,	// (0x0003092f) control_pane_t1_ParamLimits

0xa3c4,	// (0x0003092f) control_pane_t1

0xa42a,	// (0x00030995) control_pane_t2_ParamLimits

0xa42a,	// (0x00030995) control_pane_t2

0x0002,

0xf78a,	// (0x00035cf5) control_pane_t_ParamLimits

0xf78a,	// (0x00035cf5) control_pane_t

0xa28c,	// (0x000307f7) navi_navi_volume_pane_cp1

0xa294,	// (0x000307ff) status_small_icon_pane

0x08f6,	// (0x00026e61) status_small_pane_g1_ParamLimits

0x08f6,	// (0x00026e61) status_small_pane_g1

0xa29c,	// (0x00030807) status_small_pane_g2_ParamLimits

0xa29c,	// (0x00030807) status_small_pane_g2

0xa2a8,	// (0x00030813) status_small_pane_g3_ParamLimits

0xa2a8,	// (0x00030813) status_small_pane_g3

0xa2b4,	// (0x0003081f) status_small_pane_g4_ParamLimits

0xa2b4,	// (0x0003081f) status_small_pane_g4

0xa2c0,	// (0x0003082b) status_small_pane_g5_ParamLimits

0xa2c0,	// (0x0003082b) status_small_pane_g5

0xa2ce,	// (0x00030839) status_small_pane_g6_ParamLimits

0xa2ce,	// (0x00030839) status_small_pane_g6

0x0007,

0xf768,	// (0x00035cd3) status_small_pane_g_ParamLimits

0xf768,	// (0x00035cd3) status_small_pane_g

0xa2fd,	// (0x00030868) status_small_pane_t1

0xa31f,	// (0x0003088a) status_small_wait_pane_ParamLimits

0xa31f,	// (0x0003088a) status_small_wait_pane

0x9ff4,	// (0x0003055f) aid_levels_signal_ParamLimits

0x9ff4,	// (0x0003055f) aid_levels_signal

0xa00c,	// (0x00030577) signal_pane_g1_ParamLimits

0xa00c,	// (0x00030577) signal_pane_g1

0xa027,	// (0x00030592) signal_pane_g2_ParamLimits

0xa027,	// (0x00030592) signal_pane_g2

0x0003,

0xf6f9,	// (0x00035c64) signal_pane_g_ParamLimits

0xf6f9,	// (0x00035c64) signal_pane_g

0xcfba,	// (0x00033525) context_pane_g1

0x9735,	// (0x0002fca0) title_pane_g1

0x976c,	// (0x0002fcd7) title_pane_t1

0xc737,	// (0x00032ca2) title_pane_t2

0xc75d,	// (0x00032cc8) title_pane_t3

0x0002,

0xf557,	// (0x00035ac2) title_pane_t

0xb017,	// (0x00031582) aid_levels_battery_ParamLimits

0xb017,	// (0x00031582) aid_levels_battery

0xb033,	// (0x0003159e) battery_pane_g1_ParamLimits

0xb033,	// (0x0003159e) battery_pane_g1

0xb050,	// (0x000315bb) battery_pane_g2_ParamLimits

0xb050,	// (0x000315bb) battery_pane_g2

0x0001,

0xf79c,	// (0x00035d07) battery_pane_g_ParamLimits

0xf79c,	// (0x00035d07) battery_pane_g

0xb6c6,	// (0x00031c31) uni_indicator_pane_g1

0xb6dc,	// (0x00031c47) uni_indicator_pane_g2

0xb6f2,	// (0x00031c5d) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x00035e71) uni_indicator_pane_g

0x04c7,	// (0x00026a32) navi_icon_pane_ParamLimits

0x04c7,	// (0x00026a32) navi_icon_pane

0x0411,	// (0x0002697c) navi_midp_pane

0x04e3,	// (0x00026a4e) navi_navi_pane

0x04ed,	// (0x00026a58) navi_text_pane_ParamLimits

0x04ed,	// (0x00026a58) navi_text_pane

0xc717,	// (0x00032c82) status_small_wait_pane_g1

0xc9ae,	// (0x00032f19) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x00035e6c) status_small_wait_pane_g

0xb61f,	// (0x00031b8a) navi_navi_icon_text_pane

0x38d9,	// (0x00029e44) navi_navi_pane_g1_ParamLimits

0x38d9,	// (0x00029e44) navi_navi_pane_g1

0x38eb,	// (0x00029e56) navi_navi_pane_g2_ParamLimits

0x38eb,	// (0x00029e56) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x00035e3a) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x00035e3a) navi_navi_pane_g

0x38fd,	// (0x00029e68) navi_navi_tabs_pane

0x3906,	// (0x00029e71) navi_navi_text_pane

0xb61f,	// (0x00031b8a) navi_navi_volume_pane

0x38ad,	// (0x00029e18) navi_text_pane_t1

0x38a1,	// (0x00029e0c) navi_icon_pane_g1

0x37f4,	// (0x00029d5f) navi_navi_text_pane_t1

0xb60b,	// (0x00031b76) navi_navi_volume_pane_g1

0x1a36,	// (0x00027fa1) volume_small_pane

0x375a,	// (0x00029cc5) navi_navi_icon_text_pane_g1

0xb56f,	// (0x00031ada) navi_navi_icon_text_pane_t1

0x04e3,	// (0x00026a4e) navi_tabs_2_long_pane

0x04e3,	// (0x00026a4e) navi_tabs_2_pane

0x04e3,	// (0x00026a4e) navi_tabs_3_long_pane

0x04e3,	// (0x00026a4e) navi_tabs_3_pane

0x04e3,	// (0x00026a4e) navi_tabs_4_pane

0x1a0e,	// (0x00027f79) tabs_2_active_pane_ParamLimits

0x1a0e,	// (0x00027f79) tabs_2_active_pane

0x1a1e,	// (0x00027f89) tabs_2_passive_pane_ParamLimits

0x1a1e,	// (0x00027f89) tabs_2_passive_pane

0x19dc,	// (0x00027f47) tabs_3_active_pane_ParamLimits

0x19dc,	// (0x00027f47) tabs_3_active_pane

0x19ec,	// (0x00027f57) tabs_3_passive_pane_ParamLimits

0x19ec,	// (0x00027f57) tabs_3_passive_pane

0x19fd,	// (0x00027f68) tabs_3_passive_pane_cp_ParamLimits

0x19fd,	// (0x00027f68) tabs_3_passive_pane_cp

0x1998,	// (0x00027f03) tabs_4_active_pane_ParamLimits

0x1998,	// (0x00027f03) tabs_4_active_pane

0x19a9,	// (0x00027f14) tabs_4_passive_pane_ParamLimits

0x19a9,	// (0x00027f14) tabs_4_passive_pane

0x19ba,	// (0x00027f25) tabs_4_passive_pane_cp_ParamLimits

0x19ba,	// (0x00027f25) tabs_4_passive_pane_cp

0x19cb,	// (0x00027f36) tabs_4_passive_pane_cp2_ParamLimits

0x19cb,	// (0x00027f36) tabs_4_passive_pane_cp2

0x1974,	// (0x00027edf) tabs_2_long_active_pane_ParamLimits

0x1974,	// (0x00027edf) tabs_2_long_active_pane

0x1986,	// (0x00027ef1) tabs_2_long_passive_pane_ParamLimits

0x1986,	// (0x00027ef1) tabs_2_long_passive_pane

0x192f,	// (0x00027e9a) tabs_3_long_active_pane_ParamLimits

0x192f,	// (0x00027e9a) tabs_3_long_active_pane

0x1948,	// (0x00027eb3) tabs_3_long_passive_pane_ParamLimits

0x1948,	// (0x00027eb3) tabs_3_long_passive_pane

0x195b,	// (0x00027ec6) tabs_3_long_passive_pane_cp_ParamLimits

0x195b,	// (0x00027ec6) tabs_3_long_passive_pane_cp

0x18d5,	// (0x00027e40) volume_small_pane_g1

0x18de,	// (0x00027e49) volume_small_pane_g2

0x18e7,	// (0x00027e52) volume_small_pane_g3

0x18f0,	// (0x00027e5b) volume_small_pane_g4

0x18f9,	// (0x00027e64) volume_small_pane_g5

0x1902,	// (0x00027e6d) volume_small_pane_g6

0x190b,	// (0x00027e76) volume_small_pane_g7

0x1914,	// (0x00027e7f) volume_small_pane_g8

0x191d,	// (0x00027e88) volume_small_pane_g9

0x1926,	// (0x00027e91) volume_small_pane_g10

0x0009,

0xf89b,	// (0x00035e06) volume_small_pane_g

0xc76f,	// (0x00032cda) bg_active_tab_pane_cp2_ParamLimits

0xc76f,	// (0x00032cda) bg_active_tab_pane_cp2

0x97f8,	// (0x0002fd63) tabs_3_active_pane_g1

0x9800,	// (0x0002fd6b) tabs_3_active_pane_t1

0xc76f,	// (0x00032cda) bg_passive_tab_pane_cp2_ParamLimits

0xc76f,	// (0x00032cda) bg_passive_tab_pane_cp2

0x97f8,	// (0x0002fd63) tabs_3_passive_pane_g1

0x9800,	// (0x0002fd6b) tabs_3_passive_pane_t1

0xc76f,	// (0x00032cda) bg_active_tab_pane_cp3_ParamLimits

0xc76f,	// (0x00032cda) bg_active_tab_pane_cp3

0x9812,	// (0x0002fd7d) tabs_4_active_pane_g1

0x981a,	// (0x0002fd85) tabs_4_active_pane_t1

0xc76f,	// (0x00032cda) bg_passive_tab_pane_cp3_ParamLimits

0xc76f,	// (0x00032cda) bg_passive_tab_pane_cp3

0x9812,	// (0x0002fd7d) tabs_4_1_passive_pane_g1

0x981a,	// (0x0002fd85) tabs_4_1_passive_pane_t1

0x0b8c,	// (0x000270f7) list_highlight_pane_cp2

0xb8b4,	// (0x00031e1f) list_set_pane_ParamLimits

0xb8b4,	// (0x00031e1f) list_set_pane

0xb94e,	// (0x00031eb9) main_pane_set_t1_ParamLimits

0xb94e,	// (0x00031eb9) main_pane_set_t1

0xb96e,	// (0x00031ed9) main_pane_set_t2_ParamLimits

0xb96e,	// (0x00031ed9) main_pane_set_t2

0xb982,	// (0x00031eed) main_pane_set_t3_ParamLimits

0xb982,	// (0x00031eed) main_pane_set_t3

0xb994,	// (0x00031eff) main_pane_set_t4_ParamLimits

0xb994,	// (0x00031eff) main_pane_set_t4

0x0003,

0xf96b,	// (0x00035ed6) main_pane_set_t_ParamLimits

0xf96b,	// (0x00035ed6) main_pane_set_t

0xb9a6,	// (0x00031f11) setting_code_pane

0xb9b0,	// (0x00031f1b) setting_slider_graphic_pane

0xb9b0,	// (0x00031f1b) setting_slider_pane

0xb9b0,	// (0x00031f1b) setting_text_pane

0xb9b0,	// (0x00031f1b) setting_volume_pane

0x982c,	// (0x0002fd97) volume_set_pane

0xc77d,	// (0x00032ce8) bg_set_opt_pane_cp

0x9834,	// (0x0002fd9f) setting_slider_pane_t1

0x984d,	// (0x0002fdb8) setting_slider_pane_t2

0x9867,	// (0x0002fdd2) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00035ac9) setting_slider_pane_t

0x987f,	// (0x0002fdea) slider_set_pane

0xc721,	// (0x00032c8c) bg_set_opt_pane_cp2

0xc78b,	// (0x00032cf6) setting_slider_graphic_pane_g1

0x9895,	// (0x0002fe00) setting_slider_graphic_pane_t1

0x98a5,	// (0x0002fe10) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00035ad0) setting_slider_graphic_pane_t

0x98b5,	// (0x0002fe20) slider_set_pane_cp

0xc721,	// (0x00032c8c) input_focus_pane_cp1

0x3dd1,	// (0x0002a33c) list_set_text_pane

0xc717,	// (0x00032c82) setting_text_pane_g1

0xc721,	// (0x00032c8c) input_focus_pane_cp2

0xc717,	// (0x00032c82) setting_code_pane_g1

0xc794,	// (0x00032cff) setting_code_pane_t1

0xea50,	// (0x00034fbb) set_text_pane_t1_ParamLimits

0xea50,	// (0x00034fbb) set_text_pane_t1

0xcb87,	// (0x000330f2) set_opt_bg_pane_g1

0xcb8f,	// (0x000330fa) set_opt_bg_pane_g2

0xb869,	// (0x00031dd4) set_opt_bg_pane_g3

0xcb9f,	// (0x0003310a) set_opt_bg_pane_g4

0xcba7,	// (0x00033112) set_opt_bg_pane_g5

0xcbaf,	// (0x0003311a) set_opt_bg_pane_g6

0xb873,	// (0x00031dde) set_opt_bg_pane_g7

0xb87b,	// (0x00031de6) set_opt_bg_pane_g8

0xb885,	// (0x00031df0) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x00035ec3) set_opt_bg_pane_g

0xb804,	// (0x00031d6f) slider_set_pane_g1

0x1aa3,	// (0x0002800e) slider_set_pane_g2

0x0006,

0xf949,	// (0x00035eb4) slider_set_pane_g

0xb729,	// (0x00031c94) volume_set_pane_g1

0xb731,	// (0x00031c9c) volume_set_pane_g2

0xb739,	// (0x00031ca4) volume_set_pane_g3

0xb741,	// (0x00031cac) volume_set_pane_g4

0xb749,	// (0x00031cb4) volume_set_pane_g5

0xb751,	// (0x00031cbc) volume_set_pane_g6

0xb759,	// (0x00031cc4) volume_set_pane_g7

0xb761,	// (0x00031ccc) volume_set_pane_g8

0xb769,	// (0x00031cd4) volume_set_pane_g9

0xb771,	// (0x00031cdc) volume_set_pane_g10

0x0009,

0xf921,	// (0x00035e8c) volume_set_pane_g

0x98bd,	// (0x0002fe28) indicator_pane_ParamLimits

0x98bd,	// (0x0002fe28) indicator_pane

0x98e5,	// (0x0002fe50) main_idle_pane_g2_ParamLimits

0x98e5,	// (0x0002fe50) main_idle_pane_g2

0x991d,	// (0x0002fe88) main_pane_idle_g1_ParamLimits

0x991d,	// (0x0002fe88) main_pane_idle_g1

0xc7a2,	// (0x00032d0d) popup_clock_digital_analogue_window_ParamLimits

0xc7a2,	// (0x00032d0d) popup_clock_digital_analogue_window

0x9944,	// (0x0002feaf) soft_indicator_pane_ParamLimits

0x9944,	// (0x0002feaf) soft_indicator_pane

0x9968,	// (0x0002fed3) wallpaper_pane_ParamLimits

0x9968,	// (0x0002fed3) wallpaper_pane

0xc717,	// (0x00032c82) wallpaper_pane_g1

0x997a,	// (0x0002fee5) indicator_pane_g1_ParamLimits

0x997a,	// (0x0002fee5) indicator_pane_g1

0x41d5,	// (0x0002a740) navi_navi_icon_text_pane_srt_g1

0xc7d0,	// (0x00032d3b) soft_indicator_pane_t1

0xc7ea,	// (0x00032d55) aid_ps_area_pane

0x9990,	// (0x0002fefb) aid_ps_clock_pane

0xc7fb,	// (0x00032d66) aid_ps_indicator_pane

0xc807,	// (0x00032d72) indicator_ps_pane_ParamLimits

0xc807,	// (0x00032d72) indicator_ps_pane

0xc816,	// (0x00032d81) power_save_pane_g1_ParamLimits

0xc816,	// (0x00032d81) power_save_pane_g1

0xc822,	// (0x00032d8d) power_save_pane_g2_ParamLimits

0xc822,	// (0x00032d8d) power_save_pane_g2

0xe99c,	// (0x00034f07) aid_navinavi_width_pane

0xc7ea,	// (0x00032d55) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00035ad5) power_save_pane_g_ParamLimits

0xf56a,	// (0x00035ad5) power_save_pane_g

0xc830,	// (0x00032d9b) power_save_pane_t1_ParamLimits

0xc830,	// (0x00032d9b) power_save_pane_t1

0x9990,	// (0x0002fefb) aid_ps_clock_pane_ParamLimits

0xc7fb,	// (0x00032d66) aid_ps_indicator_pane_ParamLimits

0xc842,	// (0x00032dad) power_save_pane_t4_ParamLimits

0xc842,	// (0x00032dad) power_save_pane_t4

0x0001,

0xf56f,	// (0x00035ada) power_save_pane_t_ParamLimits

0xf56f,	// (0x00035ada) power_save_pane_t

0xc86c,	// (0x00032dd7) power_save_t3_ParamLimits

0xc86c,	// (0x00032dd7) power_save_t3

0xc857,	// (0x00032dc2) power_save_t2_ParamLimits

0xc857,	// (0x00032dc2) power_save_t2

0xc881,	// (0x00032dec) indicator_ps_pane_g1

0x999e,	// (0x0002ff09) ai_gene_pane_ParamLimits

0x999e,	// (0x0002ff09) ai_gene_pane

0x99b5,	// (0x0002ff20) ai_links_pane_ParamLimits

0x99b5,	// (0x0002ff20) ai_links_pane

0x99cd,	// (0x0002ff38) indicator_pane_cp1_ParamLimits

0x99cd,	// (0x0002ff38) indicator_pane_cp1

0x99dc,	// (0x0002ff47) main_pane_idle_g1_cp_ParamLimits

0x99dc,	// (0x0002ff47) main_pane_idle_g1_cp

0x99f4,	// (0x0002ff5f) popup_ai_links_title_window

0x99fd,	// (0x0002ff68) soft_indicator_pane_cp1_ParamLimits

0x99fd,	// (0x0002ff68) soft_indicator_pane_cp1

0x3b98,	// (0x0002a103) ai_links_pane_g1

0x3ba1,	// (0x0002a10c) grid_ai_links_pane

0xb6bd,	// (0x00031c28) ai_gene_pane_1

0x3b86,	// (0x0002a0f1) ai_gene_pane_2

0x3b8f,	// (0x0002a0fa) list_highlight_pane_cp4

0xb699,	// (0x00031c04) cell_ai_link_pane_ParamLimits

0xb699,	// (0x00031c04) cell_ai_link_pane

0x3b57,	// (0x0002a0c2) cell_ai_link_pane_g1

0xc9ae,	// (0x00032f19) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x00035e67) cell_ai_link_pane_g

0xc721,	// (0x00032c8c) grid_highlight_cp2

0xc721,	// (0x00032c8c) bg_popup_sub_pane_cp1

0xc898,	// (0x00032e03) popup_ai_links_title_window_t1

0x3aa7,	// (0x0002a012) ai_gene_pane_1_g1_ParamLimits

0x3aa7,	// (0x0002a012) ai_gene_pane_1_g1

0x3ab3,	// (0x0002a01e) ai_gene_pane_1_g2_ParamLimits

0x3ab3,	// (0x0002a01e) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x00035e5d) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x00035e5d) ai_gene_pane_1_g

0x3ac0,	// (0x0002a02b) ai_gene_pane_1_t1_ParamLimits

0x3ac0,	// (0x0002a02b) ai_gene_pane_1_t1

0x3af4,	// (0x0002a05f) grid_ai_soft_ind_pane

0x3a92,	// (0x00029ffd) ai_gene_pane_2_t1_ParamLimits

0x3a92,	// (0x00029ffd) ai_gene_pane_2_t1

0x9a11,	// (0x0002ff7c) main_pane_empty_t1_ParamLimits

0x9a11,	// (0x0002ff7c) main_pane_empty_t1

0x9a29,	// (0x0002ff94) main_pane_empty_t2_ParamLimits

0x9a29,	// (0x0002ff94) main_pane_empty_t2

0x9a3e,	// (0x0002ffa9) main_pane_empty_t3_ParamLimits

0x9a3e,	// (0x0002ffa9) main_pane_empty_t3

0x9a50,	// (0x0002ffbb) main_pane_empty_t4_ParamLimits

0x9a50,	// (0x0002ffbb) main_pane_empty_t4

0x9a62,	// (0x0002ffcd) main_pane_empty_t5_ParamLimits

0x9a62,	// (0x0002ffcd) main_pane_empty_t5

0x0004,

0xf574,	// (0x00035adf) main_pane_empty_t_ParamLimits

0xf574,	// (0x00035adf) main_pane_empty_t

0xcbd8,	// (0x00033143) bg_popup_window_pane_ParamLimits

0xcbd8,	// (0x00033143) bg_popup_window_pane

0xb613,	// (0x00031b7e) find_popup_pane_cp2_ParamLimits

0xb613,	// (0x00031b7e) find_popup_pane_cp2

0x380e,	// (0x00029d79) heading_pane_ParamLimits

0x380e,	// (0x00029d79) heading_pane

0xc721,	// (0x00032c8c) bg_popup_sub_pane

0xb58c,	// (0x00031af7) bg_popup_window_pane_g1_ParamLimits

0xb58c,	// (0x00031af7) bg_popup_window_pane_g1

0xb59b,	// (0x00031b06) bg_popup_window_pane_g2_ParamLimits

0xb59b,	// (0x00031b06) bg_popup_window_pane_g2

0xb5a7,	// (0x00031b12) bg_popup_window_pane_g3_ParamLimits

0xb5a7,	// (0x00031b12) bg_popup_window_pane_g3

0xb5b3,	// (0x00031b1e) bg_popup_window_pane_g4_ParamLimits

0xb5b3,	// (0x00031b1e) bg_popup_window_pane_g4

0xb5c2,	// (0x00031b2d) bg_popup_window_pane_g5_ParamLimits

0xb5c2,	// (0x00031b2d) bg_popup_window_pane_g5

0xb5d2,	// (0x00031b3d) bg_popup_window_pane_g6_ParamLimits

0xb5d2,	// (0x00031b3d) bg_popup_window_pane_g6

0xb5de,	// (0x00031b49) bg_popup_window_pane_g7_ParamLimits

0xb5de,	// (0x00031b49) bg_popup_window_pane_g7

0xb5ed,	// (0x00031b58) bg_popup_window_pane_g8_ParamLimits

0xb5ed,	// (0x00031b58) bg_popup_window_pane_g8

0xb5fc,	// (0x00031b67) bg_popup_window_pane_g9_ParamLimits

0xb5fc,	// (0x00031b67) bg_popup_window_pane_g9

0x37e8,	// (0x00029d53) bg_popup_window_pane_g10_ParamLimits

0x37e8,	// (0x00029d53) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x00035e25) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x00035e25) bg_popup_window_pane_g

0x3711,	// (0x00029c7c) bg_popup_heading_pane_ParamLimits

0x3711,	// (0x00029c7c) bg_popup_heading_pane

0x1b2b,	// (0x00028096) tabs_4_passive_pane_cp_srt_ParamLimits

0x1b2b,	// (0x00028096) tabs_4_passive_pane_cp_srt

0x1b3d,	// (0x000280a8) tabs_4_passive_pane_srt_ParamLimits

0x3725,	// (0x00029c90) heading_pane_g2

0x1b3d,	// (0x000280a8) tabs_4_passive_pane_srt

0x1772,	// (0x00027cdd) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1772,	// (0x00027cdd) bg_passive_tab_pane_cp3_srt

0x372d,	// (0x00029c98) heading_pane_t1_ParamLimits

0x372d,	// (0x00029c98) heading_pane_t1

0x3744,	// (0x00029caf) heading_pane_t2_ParamLimits

0x3744,	// (0x00029caf) heading_pane_t2

0x0001,

0xf8b5,	// (0x00035e20) heading_pane_t_ParamLimits

0xf8b5,	// (0x00035e20) heading_pane_t

0x324e,	// (0x000297b9) bg_popup_heading_pane_g1

0x32fd,	// (0x00029868) bg_popup_heading_pane_g2

0x3307,	// (0x00029872) bg_popup_heading_pane_g3

0x3311,	// (0x0002987c) bg_popup_heading_pane_g4

0x331b,	// (0x00029886) bg_popup_heading_pane_g5

0x3325,	// (0x00029890) bg_popup_heading_pane_g6

0x332d,	// (0x00029898) bg_popup_heading_pane_g7

0x3335,	// (0x000298a0) bg_popup_heading_pane_g8

0x333f,	// (0x000298aa) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x00035ddc) bg_popup_heading_pane_g

0x1686,	// (0x00027bf1) bg_popup_sub_pane_g1

0x168e,	// (0x00027bf9) bg_popup_sub_pane_g2

0x1696,	// (0x00027c01) bg_popup_sub_pane_g3

0x169e,	// (0x00027c09) bg_popup_sub_pane_g4

0x16a6,	// (0x00027c11) bg_popup_sub_pane_g5

0x16ae,	// (0x00027c19) bg_popup_sub_pane_g6

0x16b6,	// (0x00027c21) bg_popup_sub_pane_g7

0x16be,	// (0x00027c29) bg_popup_sub_pane_g8

0x16c6,	// (0x00027c31) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x00035db6) bg_popup_sub_pane_g

0xc76f,	// (0x00032cda) bg_popup_window_pane_cp5_ParamLimits

0xc76f,	// (0x00032cda) bg_popup_window_pane_cp5

0xc8b5,	// (0x00032e20) popup_note_window_g1_ParamLimits

0xc8b5,	// (0x00032e20) popup_note_window_g1

0xc8c1,	// (0x00032e2c) popup_note_window_t1_ParamLimits

0xc8c1,	// (0x00032e2c) popup_note_window_t1

0xc8d7,	// (0x00032e42) popup_note_window_t2_ParamLimits

0xc8d7,	// (0x00032e42) popup_note_window_t2

0xc8ed,	// (0x00032e58) popup_note_window_t3_ParamLimits

0xc8ed,	// (0x00032e58) popup_note_window_t3

0xc903,	// (0x00032e6e) popup_note_window_t4_ParamLimits

0xc903,	// (0x00032e6e) popup_note_window_t4

0xc92b,	// (0x00032e96) popup_note_window_t5_ParamLimits

0xc92b,	// (0x00032e96) popup_note_window_t5

0x0004,

0xf57f,	// (0x00035aea) popup_note_window_t_ParamLimits

0xf57f,	// (0x00035aea) popup_note_window_t

0xc94f,	// (0x00032eba) bg_popup_window_pane_cp6_ParamLimits

0xc94f,	// (0x00032eba) bg_popup_window_pane_cp6

0x31ca,	// (0x00029735) popup_note_image_window_g1_ParamLimits

0x31ca,	// (0x00029735) popup_note_image_window_g1

0xb431,	// (0x0003199c) popup_note_image_window_g2_ParamLimits

0xb431,	// (0x0003199c) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x00035daa) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x00035daa) popup_note_image_window_g

0x31ef,	// (0x0002975a) popup_note_image_window_t1_ParamLimits

0x31ef,	// (0x0002975a) popup_note_image_window_t1

0x3208,	// (0x00029773) popup_note_image_window_t2_ParamLimits

0x3208,	// (0x00029773) popup_note_image_window_t2

0x3221,	// (0x0002978c) popup_note_image_window_t3_ParamLimits

0x3221,	// (0x0002978c) popup_note_image_window_t3

0x0002,

0xf844,	// (0x00035daf) popup_note_image_window_t_ParamLimits

0xf844,	// (0x00035daf) popup_note_image_window_t

0x3093,	// (0x000295fe) bg_popup_window_pane_cp7_ParamLimits

0x3093,	// (0x000295fe) bg_popup_window_pane_cp7

0x30c3,	// (0x0002962e) popup_note_wait_window_g1_ParamLimits

0x30c3,	// (0x0002962e) popup_note_wait_window_g1

0x30cf,	// (0x0002963a) popup_note_wait_window_g2_ParamLimits

0x30cf,	// (0x0002963a) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x00035d98) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x00035d98) popup_note_wait_window_g

0x30e7,	// (0x00029652) popup_note_wait_window_t1_ParamLimits

0x30e7,	// (0x00029652) popup_note_wait_window_t1

0xb3d2,	// (0x0003193d) popup_note_wait_window_t2_ParamLimits

0xb3d2,	// (0x0003193d) popup_note_wait_window_t2

0xb3ef,	// (0x0003195a) popup_note_wait_window_t3_ParamLimits

0xb3ef,	// (0x0003195a) popup_note_wait_window_t3

0xb402,	// (0x0003196d) popup_note_wait_window_t4_ParamLimits

0xb402,	// (0x0003196d) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x00035d9f) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x00035d9f) popup_note_wait_window_t

0x3163,	// (0x000296ce) wait_bar_pane_ParamLimits

0x3163,	// (0x000296ce) wait_bar_pane

0xc721,	// (0x00032c8c) wait_anim_pane

0xc721,	// (0x00032c8c) wait_border_pane

0xc717,	// (0x00032c82) wait_anim_pane_g1

0xc717,	// (0x00032c82) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x00035c5f) wait_anim_pane_g

0x303f,	// (0x000295aa) wait_border_pane_g1

0x304a,	// (0x000295b5) wait_border_pane_g2

0x3053,	// (0x000295be) wait_border_pane_g3

0x0002,

0xf826,	// (0x00035d91) wait_border_pane_g

0x2eaa,	// (0x00029415) bg_popup_window_pane_cp16_ParamLimits

0x2eaa,	// (0x00029415) bg_popup_window_pane_cp16

0xb382,	// (0x000318ed) indicator_popup_pane_cp4_ParamLimits

0xb382,	// (0x000318ed) indicator_popup_pane_cp4

0x2fbe,	// (0x00029529) popup_query_data_window_t1_ParamLimits

0x2fbe,	// (0x00029529) popup_query_data_window_t1

0x2fd0,	// (0x0002953b) popup_query_data_window_t2_ParamLimits

0x2fd0,	// (0x0002953b) popup_query_data_window_t2

0x2fe9,	// (0x00029554) popup_query_data_window_t3_ParamLimits

0x2fe9,	// (0x00029554) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x00035d8a) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x00035d8a) popup_query_data_window_t

0xb396,	// (0x00031901) query_popup_data_pane_ParamLimits

0xb396,	// (0x00031901) query_popup_data_pane

0xb3aa,	// (0x00031915) query_popup_data_pane_cp1_ParamLimits

0xb3aa,	// (0x00031915) query_popup_data_pane_cp1

0x2eaa,	// (0x00029415) bg_popup_window_pane_cp10_ParamLimits

0x2eaa,	// (0x00029415) bg_popup_window_pane_cp10

0xb2fd,	// (0x00031868) indicator_popup_pane_ParamLimits

0xb2fd,	// (0x00031868) indicator_popup_pane

0xb31f,	// (0x0003188a) popup_query_code_window_t1_ParamLimits

0xb31f,	// (0x0003188a) popup_query_code_window_t1

0xb339,	// (0x000318a4) popup_query_code_window_t2_ParamLimits

0xb339,	// (0x000318a4) popup_query_code_window_t2

0x2f61,	// (0x000294cc) popup_query_code_window_t3_ParamLimits

0x2f61,	// (0x000294cc) popup_query_code_window_t3

0x0002,

0xf818,	// (0x00035d83) popup_query_code_window_t_ParamLimits

0xf818,	// (0x00035d83) popup_query_code_window_t

0x2f90,	// (0x000294fb) query_popup_pane_ParamLimits

0x2f90,	// (0x000294fb) query_popup_pane

0xc94f,	// (0x00032eba) bg_popup_window_pane_cp15_ParamLimits

0xc94f,	// (0x00032eba) bg_popup_window_pane_cp15

0x9a9a,	// (0x00030005) indicator_popup_pane_cp1_ParamLimits

0x9a9a,	// (0x00030005) indicator_popup_pane_cp1

0x9aad,	// (0x00030018) indicator_popup_pane_cp2_ParamLimits

0x9aad,	// (0x00030018) indicator_popup_pane_cp2

0x9ac0,	// (0x0003002b) popup_query_data_code_window_g1_ParamLimits

0x9ac0,	// (0x0003002b) popup_query_data_code_window_g1

0xc96d,	// (0x00032ed8) popup_query_data_code_window_t1_ParamLimits

0xc96d,	// (0x00032ed8) popup_query_data_code_window_t1

0xc97f,	// (0x00032eea) popup_query_data_code_window_t2_ParamLimits

0xc97f,	// (0x00032eea) popup_query_data_code_window_t2

0x9ad3,	// (0x0003003e) popup_query_data_code_window_t3_ParamLimits

0x9ad3,	// (0x0003003e) popup_query_data_code_window_t3

0x9ae9,	// (0x00030054) popup_query_data_code_window_t4_ParamLimits

0x9ae9,	// (0x00030054) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00035af5) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00035af5) popup_query_data_code_window_t

0x0485,	// (0x000269f0) list_single_midp_graphic_pane_g3

0x9b01,	// (0x0003006c) query_popup_data_pane_cp2_ParamLimits

0x9b14,	// (0x0003007f) query_popup_pane_cp2_ParamLimits

0x9b14,	// (0x0003007f) query_popup_pane_cp2

0xc721,	// (0x00032c8c) bg_popup_window_pane_cp11

0x2e96,	// (0x00029401) heading_pane_cp5

0xc9db,	// (0x00032f46) listscroll_popup_info_pane

0xc721,	// (0x00032c8c) input_focus_pane_cp3

0xc991,	// (0x00032efc) query_popup_pane_t1

0xc99f,	// (0x00032f0a) list_popup_info_pane_ParamLimits

0xc99f,	// (0x00032f0a) list_popup_info_pane

0xc9ae,	// (0x00032f19) listscroll_popup_info_pane_g1

0xc9b6,	// (0x00032f21) scroll_pane_cp7

0x9b27,	// (0x00030092) popup_info_list_pane_t1_ParamLimits

0x9b27,	// (0x00030092) popup_info_list_pane_t1

0x9b41,	// (0x000300ac) popup_info_list_pane_t2_ParamLimits

0x9b41,	// (0x000300ac) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00035afe) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00035afe) popup_info_list_pane_t

0xc721,	// (0x00032c8c) bg_popup_window_pane_cp12

0xbbc0,	// (0x0003212b) find_popup_pane

0xc77d,	// (0x00032ce8) bg_popup_window_pane_cp3

0xc9c0,	// (0x00032f2b) heading_pane_cp3

0xc9cc,	// (0x00032f37) listscroll_popup_graphic_pane

0xc721,	// (0x00032c8c) bg_popup_window_pane_cp4

0x9bab,	// (0x00030116) heading_pane_cp4

0xc9db,	// (0x00032f46) listscroll_popup_colour_pane

0x9bb3,	// (0x0003011e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9bb3,	// (0x0003011e) cell_large_graphic_colour_none_popup_pane

0x9bc7,	// (0x00030132) grid_large_graphic_colour_popup_pane_ParamLimits

0x9bc7,	// (0x00030132) grid_large_graphic_colour_popup_pane

0x9beb,	// (0x00030156) listscroll_popup_colour_pane_g1_ParamLimits

0x9beb,	// (0x00030156) listscroll_popup_colour_pane_g1

0x9c02,	// (0x0003016d) listscroll_popup_colour_pane_g2_ParamLimits

0x9c02,	// (0x0003016d) listscroll_popup_colour_pane_g2

0x9c19,	// (0x00030184) listscroll_popup_colour_pane_g3_ParamLimits

0x9c19,	// (0x00030184) listscroll_popup_colour_pane_g3

0x9c29,	// (0x00030194) listscroll_popup_colour_pane_g4_ParamLimits

0x9c29,	// (0x00030194) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00035b03) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00035b03) listscroll_popup_colour_pane_g

0xc9e3,	// (0x00032f4e) scroll_pane_cp6_ParamLimits

0xc9e3,	// (0x00032f4e) scroll_pane_cp6

0x9c39,	// (0x000301a4) cell_large_graphic_colour_popup_pane_ParamLimits

0x9c39,	// (0x000301a4) cell_large_graphic_colour_popup_pane

0x9c58,	// (0x000301c3) cell_large_graphic_colour_none_popup_pane_t1

0xc721,	// (0x00032c8c) grid_highlight_pane_cp5

0xc9f5,	// (0x00032f60) cell_large_graphic_colour_popup_pane_g1

0xc9fd,	// (0x00032f68) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00035b0c) cell_large_graphic_colour_popup_pane_g

0xca05,	// (0x00032f70) cell_large_graphic_colour_popup_pane_g2_copy1

0xca0e,	// (0x00032f79) grid_highlight_pane_cp4

0xca16,	// (0x00032f81) bg_popup_window_pane_cp8_ParamLimits

0xca16,	// (0x00032f81) bg_popup_window_pane_cp8

0x9c67,	// (0x000301d2) popup_snote_single_text_window_g1_ParamLimits

0x9c67,	// (0x000301d2) popup_snote_single_text_window_g1

0x9c79,	// (0x000301e4) popup_snote_single_text_window_t1_ParamLimits

0x9c79,	// (0x000301e4) popup_snote_single_text_window_t1

0x9c8c,	// (0x000301f7) popup_snote_single_text_window_t2_ParamLimits

0x9c8c,	// (0x000301f7) popup_snote_single_text_window_t2

0x9c9f,	// (0x0003020a) popup_snote_single_text_window_t3_ParamLimits

0x9c9f,	// (0x0003020a) popup_snote_single_text_window_t3

0x9cd8,	// (0x00030243) popup_snote_single_text_window_t4_ParamLimits

0x9cd8,	// (0x00030243) popup_snote_single_text_window_t4

0x9d0c,	// (0x00030277) popup_snote_single_text_window_t5_ParamLimits

0x9d0c,	// (0x00030277) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00035b11) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00035b11) popup_snote_single_text_window_t

0xca31,	// (0x00032f9c) bg_popup_window_pane_cp9_ParamLimits

0xca31,	// (0x00032f9c) bg_popup_window_pane_cp9

0x9c67,	// (0x000301d2) popup_snote_single_graphic_window_g1_ParamLimits

0x9c67,	// (0x000301d2) popup_snote_single_graphic_window_g1

0xca3f,	// (0x00032faa) popup_snote_single_graphic_window_g2_ParamLimits

0xca3f,	// (0x00032faa) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00035b1c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00035b1c) popup_snote_single_graphic_window_g

0xca4b,	// (0x00032fb6) popup_snote_single_graphic_window_t1_ParamLimits

0xca4b,	// (0x00032fb6) popup_snote_single_graphic_window_t1

0xca5e,	// (0x00032fc9) popup_snote_single_graphic_window_t2_ParamLimits

0xca5e,	// (0x00032fc9) popup_snote_single_graphic_window_t2

0x9c9f,	// (0x0003020a) popup_snote_single_graphic_window_t3_ParamLimits

0x9c9f,	// (0x0003020a) popup_snote_single_graphic_window_t3

0x9cd8,	// (0x00030243) popup_snote_single_graphic_window_t4_ParamLimits

0x9cd8,	// (0x00030243) popup_snote_single_graphic_window_t4

0x9d3b,	// (0x000302a6) popup_snote_single_graphic_window_t5_ParamLimits

0x9d3b,	// (0x000302a6) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00035b21) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00035b21) popup_snote_single_graphic_window_t

0x4131,	// (0x0002a69c) grid_graphic_popup_pane_ParamLimits

0x4131,	// (0x0002a69c) grid_graphic_popup_pane

0x415b,	// (0x0002a6c6) listscroll_popup_graphic_pane_g1_ParamLimits

0x415b,	// (0x0002a6c6) listscroll_popup_graphic_pane_g1

0xbb0b,	// (0x00032076) listscroll_popup_graphic_pane_g2_ParamLimits

0xbb0b,	// (0x00032076) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x00035f00) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x00035f00) listscroll_popup_graphic_pane_g

0x4183,	// (0x0002a6ee) scroll_pane_cp5

0xbab0,	// (0x0003201b) cell_graphic_popup_pane_ParamLimits

0xbab0,	// (0x0003201b) cell_graphic_popup_pane

0x40b1,	// (0x0002a61c) cell_graphic_popup_pane_g1

0x40b9,	// (0x0002a624) cell_graphic_popup_pane_g2

0xca05,	// (0x00032f70) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x00035ef9) cell_graphic_popup_pane_g

0x40c2,	// (0x0002a62d) cell_graphic_popup_pane_t2

0xca0e,	// (0x00032f79) grid_highlight_pane_cp3

0xca83,	// (0x00032fee) list_gen_pane_ParamLimits

0xca83,	// (0x00032fee) list_gen_pane

0xcaab,	// (0x00033016) scroll_pane

0xba1a,	// (0x00031f85) bg_list_pane_g1_ParamLimits

0xba1a,	// (0x00031f85) bg_list_pane_g1

0xba35,	// (0x00031fa0) bg_list_pane_g2_ParamLimits

0xba35,	// (0x00031fa0) bg_list_pane_g2

0xba48,	// (0x00031fb3) bg_list_pane_g3_ParamLimits

0xba48,	// (0x00031fb3) bg_list_pane_g3

0xba5a,	// (0x00031fc5) bg_list_pane_g4_ParamLimits

0xba5a,	// (0x00031fc5) bg_list_pane_g4

0xba6c,	// (0x00031fd7) bg_list_pane_g5_ParamLimits

0xba6c,	// (0x00031fd7) bg_list_pane_g5

0x0004,

0xf983,	// (0x00035eee) bg_list_pane_g_ParamLimits

0xf983,	// (0x00035eee) bg_list_pane_g

0xb9e3,	// (0x00031f4e) list_double2_graphic_large_graphic_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_double2_graphic_large_graphic_pane

0xb9e3,	// (0x00031f4e) list_double2_graphic_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_double2_graphic_pane

0xb9e3,	// (0x00031f4e) list_double2_large_graphic_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_double2_large_graphic_pane

0xb9e3,	// (0x00031f4e) list_double2_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_double2_pane

0xb9e3,	// (0x00031f4e) list_double_graphic_heading_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_double_graphic_heading_pane

0xb9e3,	// (0x00031f4e) list_double_graphic_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_double_graphic_pane

0xb9e3,	// (0x00031f4e) list_double_heading_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_double_heading_pane

0xb9e3,	// (0x00031f4e) list_double_large_graphic_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_double_large_graphic_pane

0xb9e3,	// (0x00031f4e) list_double_number_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_double_number_pane

0xb9e3,	// (0x00031f4e) list_double_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_double_pane

0xb9e3,	// (0x00031f4e) list_double_time_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_double_time_pane

0xb9e3,	// (0x00031f4e) list_setting_number_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_setting_number_pane

0xb9e3,	// (0x00031f4e) list_setting_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_setting_pane

0x9325,	// (0x0002f890) list_single_2graphic_pane_ParamLimits

0x9325,	// (0x0002f890) list_single_2graphic_pane

0x9325,	// (0x0002f890) list_single_graphic_heading_pane_ParamLimits

0x9325,	// (0x0002f890) list_single_graphic_heading_pane

0x9325,	// (0x0002f890) list_single_graphic_pane_ParamLimits

0x9325,	// (0x0002f890) list_single_graphic_pane

0x9325,	// (0x0002f890) list_single_heading_pane_ParamLimits

0x9325,	// (0x0002f890) list_single_heading_pane

0xb9e3,	// (0x00031f4e) list_single_large_graphic_pane_ParamLimits

0xb9e3,	// (0x00031f4e) list_single_large_graphic_pane

0x9325,	// (0x0002f890) list_single_number_heading_pane_ParamLimits

0x9325,	// (0x0002f890) list_single_number_heading_pane

0x9325,	// (0x0002f890) list_single_number_pane_ParamLimits

0x9325,	// (0x0002f890) list_single_number_pane

0x9325,	// (0x0002f890) list_single_pane_ParamLimits

0x9325,	// (0x0002f890) list_single_pane

0xc721,	// (0x00032c8c) list_highlight_pane_cp1

0xea77,	// (0x00034fe2) list_single_pane_g1_ParamLimits

0xea77,	// (0x00034fe2) list_single_pane_g1

0xea83,	// (0x00034fee) list_single_pane_g2_ParamLimits

0xea83,	// (0x00034fee) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00035b33) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00035b33) list_single_pane_g

0x930f,	// (0x0002f87a) list_single_pane_t1_ParamLimits

0x930f,	// (0x0002f87a) list_single_pane_t1

0xea77,	// (0x00034fe2) list_single_number_pane_g1_ParamLimits

0xea77,	// (0x00034fe2) list_single_number_pane_g1

0xea83,	// (0x00034fee) list_single_number_pane_g2_ParamLimits

0xea83,	// (0x00034fee) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00035b33) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00035b33) list_single_number_pane_g

0xea8f,	// (0x00034ffa) list_single_number_pane_t1_ParamLimits

0xea8f,	// (0x00034ffa) list_single_number_pane_t1

0x92d1,	// (0x0002f83c) list_single_number_pane_t2_ParamLimits

0x92d1,	// (0x0002f83c) list_single_number_pane_t2

0x0001,

0xf944,	// (0x00035eaf) list_single_number_pane_t_ParamLimits

0xf944,	// (0x00035eaf) list_single_number_pane_t

0xea6b,	// (0x00034fd6) list_single_graphic_pane_g1_ParamLimits

0xea6b,	// (0x00034fd6) list_single_graphic_pane_g1

0xea77,	// (0x00034fe2) list_single_graphic_pane_g2_ParamLimits

0xea77,	// (0x00034fe2) list_single_graphic_pane_g2

0xea83,	// (0x00034fee) list_single_graphic_pane_g3_ParamLimits

0xea83,	// (0x00034fee) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00035b2c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00035b2c) list_single_graphic_pane_g

0xea8f,	// (0x00034ffa) list_single_graphic_pane_t1_ParamLimits

0xea8f,	// (0x00034ffa) list_single_graphic_pane_t1

0xea77,	// (0x00034fe2) list_single_heading_pane_g1_ParamLimits

0xea77,	// (0x00034fe2) list_single_heading_pane_g1

0xea83,	// (0x00034fee) list_single_heading_pane_g2_ParamLimits

0xea83,	// (0x00034fee) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00035b33) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00035b33) list_single_heading_pane_g

0xeaa5,	// (0x00035010) list_single_heading_pane_t1_ParamLimits

0xeaa5,	// (0x00035010) list_single_heading_pane_t1

0xeabb,	// (0x00035026) list_single_heading_pane_t2_ParamLimits

0xeabb,	// (0x00035026) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00035b38) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00035b38) list_single_heading_pane_t

0xea77,	// (0x00034fe2) list_single_number_heading_pane_g1_ParamLimits

0xea77,	// (0x00034fe2) list_single_number_heading_pane_g1

0xea83,	// (0x00034fee) list_single_number_heading_pane_g2_ParamLimits

0xea83,	// (0x00034fee) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00035b33) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00035b33) list_single_number_heading_pane_g

0xeaa5,	// (0x00035010) list_single_number_heading_pane_t1_ParamLimits

0xeaa5,	// (0x00035010) list_single_number_heading_pane_t1

0xeacd,	// (0x00035038) list_single_number_heading_pane_t2_ParamLimits

0xeacd,	// (0x00035038) list_single_number_heading_pane_t2

0xeadf,	// (0x0003504a) list_single_number_heading_pane_t3_ParamLimits

0xeadf,	// (0x0003504a) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00035b3d) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00035b3d) list_single_number_heading_pane_t

0xeaf1,	// (0x0003505c) list_single_graphic_heading_pane_g1_ParamLimits

0xeaf1,	// (0x0003505c) list_single_graphic_heading_pane_g1

0x8ccd,	// (0x0002f238) list_single_graphic_heading_pane_g4_ParamLimits

0x8ccd,	// (0x0002f238) list_single_graphic_heading_pane_g4

0xea83,	// (0x00034fee) list_single_graphic_heading_pane_g5_ParamLimits

0xea83,	// (0x00034fee) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00035b44) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00035b44) list_single_graphic_heading_pane_g

0xeaa5,	// (0x00035010) list_single_graphic_heading_pane_t1_ParamLimits

0xeaa5,	// (0x00035010) list_single_graphic_heading_pane_t1

0x8cde,	// (0x0002f249) list_single_graphic_heading_pane_t2_ParamLimits

0x8cde,	// (0x0002f249) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00035b4b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00035b4b) list_single_graphic_heading_pane_t

0xeafd,	// (0x00035068) list_single_large_graphic_pane_g1_ParamLimits

0xeafd,	// (0x00035068) list_single_large_graphic_pane_g1

0xeb09,	// (0x00035074) list_single_large_graphic_pane_g2_ParamLimits

0xeb09,	// (0x00035074) list_single_large_graphic_pane_g2

0xeb15,	// (0x00035080) list_single_large_graphic_pane_g3_ParamLimits

0xeb15,	// (0x00035080) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00035b50) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00035b50) list_single_large_graphic_pane_g

0x304a,	// (0x000295b5) wait_border_pane_g2_copy1

0x8cf0,	// (0x0002f25b) list_single_large_graphic_pane_g4_cp2

0xeb21,	// (0x0003508c) list_single_large_graphic_pane_t1_ParamLimits

0xeb21,	// (0x0003508c) list_single_large_graphic_pane_t1

0x8cf8,	// (0x0002f263) list_double_pane_g1_ParamLimits

0x8cf8,	// (0x0002f263) list_double_pane_g1

0xeb37,	// (0x000350a2) list_double_pane_g2_ParamLimits

0xeb37,	// (0x000350a2) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00035b57) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00035b57) list_double_pane_g

0x8d04,	// (0x0002f26f) list_double_pane_t1_ParamLimits

0x8d04,	// (0x0002f26f) list_double_pane_t1

0x8d1a,	// (0x0002f285) list_double_pane_t2_ParamLimits

0x8d1a,	// (0x0002f285) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00035b5c) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00035b5c) list_double_pane_t

0x8d2c,	// (0x0002f297) list_double2_pane_g1_ParamLimits

0x8d2c,	// (0x0002f297) list_double2_pane_g1

0xeb37,	// (0x000350a2) list_double2_pane_g2_ParamLimits

0xeb37,	// (0x000350a2) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00035b61) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00035b61) list_double2_pane_g

0x8d04,	// (0x0002f26f) list_double2_pane_t1_ParamLimits

0x8d04,	// (0x0002f26f) list_double2_pane_t1

0x8d3d,	// (0x0002f2a8) list_double2_pane_t2_ParamLimits

0x8d3d,	// (0x0002f2a8) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00035b66) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00035b66) list_double2_pane_t

0x8cf8,	// (0x0002f263) list_double_number_pane_g1_ParamLimits

0x8cf8,	// (0x0002f263) list_double_number_pane_g1

0xeb37,	// (0x000350a2) list_double_number_pane_g2_ParamLimits

0xeb37,	// (0x000350a2) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00035b57) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00035b57) list_double_number_pane_g

0x8d4f,	// (0x0002f2ba) list_double_number_pane_t1_ParamLimits

0x8d4f,	// (0x0002f2ba) list_double_number_pane_t1

0x8d61,	// (0x0002f2cc) list_double_number_pane_t2_ParamLimits

0x8d61,	// (0x0002f2cc) list_double_number_pane_t2

0x8d77,	// (0x0002f2e2) list_double_number_pane_t3_ParamLimits

0x8d77,	// (0x0002f2e2) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00035b6b) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00035b6b) list_double_number_pane_t

0x8d89,	// (0x0002f2f4) list_double_graphic_pane_g1_ParamLimits

0x8d89,	// (0x0002f2f4) list_double_graphic_pane_g1

0x8d95,	// (0x0002f300) list_double_graphic_pane_g2_ParamLimits

0x8d95,	// (0x0002f300) list_double_graphic_pane_g2

0x8da4,	// (0x0002f30f) list_double_graphic_pane_g3_ParamLimits

0x8da4,	// (0x0002f30f) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00035b72) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00035b72) list_double_graphic_pane_g

0x8dbc,	// (0x0002f327) list_double_graphic_pane_t1_ParamLimits

0x8dbc,	// (0x0002f327) list_double_graphic_pane_t1

0x8dd2,	// (0x0002f33d) list_double_graphic_pane_t2_ParamLimits

0x8dd2,	// (0x0002f33d) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00035b7b) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00035b7b) list_double_graphic_pane_t

0x8de4,	// (0x0002f34f) list_double2_graphic_pane_g1_ParamLimits

0x8de4,	// (0x0002f34f) list_double2_graphic_pane_g1

0x8df0,	// (0x0002f35b) list_double2_graphic_pane_g2_ParamLimits

0x8df0,	// (0x0002f35b) list_double2_graphic_pane_g2

0x8dfc,	// (0x0002f367) list_double2_graphic_pane_g3_ParamLimits

0x8dfc,	// (0x0002f367) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00035b80) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00035b80) list_double2_graphic_pane_g

0x8d61,	// (0x0002f2cc) list_double2_graphic_pane_t1_ParamLimits

0x8d61,	// (0x0002f2cc) list_double2_graphic_pane_t1

0x8e08,	// (0x0002f373) list_double2_graphic_pane_t2_ParamLimits

0x8e08,	// (0x0002f373) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00035b87) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00035b87) list_double2_graphic_pane_t

0x8e1a,	// (0x0002f385) list_double_large_graphic_pane_g1_ParamLimits

0x8e1a,	// (0x0002f385) list_double_large_graphic_pane_g1

0x8d2c,	// (0x0002f297) list_double_large_graphic_pane_g2_ParamLimits

0x8d2c,	// (0x0002f297) list_double_large_graphic_pane_g2

0xeb37,	// (0x000350a2) list_double_large_graphic_pane_g3_ParamLimits

0xeb37,	// (0x000350a2) list_double_large_graphic_pane_g3

0x8e39,	// (0x0002f3a4) list_double_large_graphic_pane_g4_ParamLimits

0x8e39,	// (0x0002f3a4) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00035b8c) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00035b8c) list_double_large_graphic_pane_g

0x8e4c,	// (0x0002f3b7) list_double_large_graphic_pane_t1_ParamLimits

0x8e4c,	// (0x0002f3b7) list_double_large_graphic_pane_t1

0x8e65,	// (0x0002f3d0) list_double_large_graphic_pane_t2_ParamLimits

0x8e65,	// (0x0002f3d0) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00035b97) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00035b97) list_double_large_graphic_pane_t

0x8e77,	// (0x0002f3e2) list_double2_large_graphic_pane_g1_ParamLimits

0x8e77,	// (0x0002f3e2) list_double2_large_graphic_pane_g1

0x8d2c,	// (0x0002f297) list_double2_large_graphic_pane_g2_ParamLimits

0x8d2c,	// (0x0002f297) list_double2_large_graphic_pane_g2

0xeb37,	// (0x000350a2) list_double2_large_graphic_pane_g3_ParamLimits

0xeb37,	// (0x000350a2) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00035b9c) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00035b9c) list_double2_large_graphic_pane_g

0x8d61,	// (0x0002f2cc) list_double2_large_graphic_pane_t1_ParamLimits

0x8d61,	// (0x0002f2cc) list_double2_large_graphic_pane_t1

0x8e08,	// (0x0002f373) list_double2_large_graphic_pane_t2_ParamLimits

0x8e08,	// (0x0002f373) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x00035b87) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x00035b87) list_double2_large_graphic_pane_t

0x8e83,	// (0x0002f3ee) list_double_heading_pane_g1_ParamLimits

0x8e83,	// (0x0002f3ee) list_double_heading_pane_g1

0x8e94,	// (0x0002f3ff) list_double_heading_pane_g2_ParamLimits

0x8e94,	// (0x0002f3ff) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x00035ba3) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x00035ba3) list_double_heading_pane_g

0x8ea0,	// (0x0002f40b) list_double_heading_pane_t1_ParamLimits

0x8ea0,	// (0x0002f40b) list_double_heading_pane_t1

0x8e08,	// (0x0002f373) list_double_heading_pane_t2_ParamLimits

0x8e08,	// (0x0002f373) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x00035ba8) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x00035ba8) list_double_heading_pane_t

0x8eb6,	// (0x0002f421) list_double_graphic_heading_pane_g1_ParamLimits

0x8eb6,	// (0x0002f421) list_double_graphic_heading_pane_g1

0x8e83,	// (0x0002f3ee) list_double_graphic_heading_pane_g2_ParamLimits

0x8e83,	// (0x0002f3ee) list_double_graphic_heading_pane_g2

0x8e94,	// (0x0002f3ff) list_double_graphic_heading_pane_g3_ParamLimits

0x8e94,	// (0x0002f3ff) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x00035bad) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x00035bad) list_double_graphic_heading_pane_g

0x8ea0,	// (0x0002f40b) list_double_graphic_heading_pane_t1_ParamLimits

0x8ea0,	// (0x0002f40b) list_double_graphic_heading_pane_t1

0x8e08,	// (0x0002f373) list_double_graphic_heading_pane_t2_ParamLimits

0x8e08,	// (0x0002f373) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x00035ba8) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x00035ba8) list_double_graphic_heading_pane_t

0x8d2c,	// (0x0002f297) list_double_time_pane_g1_ParamLimits

0x8d2c,	// (0x0002f297) list_double_time_pane_g1

0xeb37,	// (0x000350a2) list_double_time_pane_g2_ParamLimits

0xeb37,	// (0x000350a2) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x00035b61) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x00035b61) list_double_time_pane_g

0x8ec2,	// (0x0002f42d) list_double_time_pane_t1_ParamLimits

0x8ec2,	// (0x0002f42d) list_double_time_pane_t1

0x8ed8,	// (0x0002f443) list_double_time_pane_t2_ParamLimits

0x8ed8,	// (0x0002f443) list_double_time_pane_t2

0x8eea,	// (0x0002f455) list_double_time_pane_t3_ParamLimits

0x8eea,	// (0x0002f455) list_double_time_pane_t3

0x8efc,	// (0x0002f467) list_double_time_pane_t4_ParamLimits

0x8efc,	// (0x0002f467) list_double_time_pane_t4

0x0003,

0xf649,	// (0x00035bb4) list_double_time_pane_t_ParamLimits

0xf649,	// (0x00035bb4) list_double_time_pane_t

0x8f0e,	// (0x0002f479) list_setting_pane_g1_ParamLimits

0x8f0e,	// (0x0002f479) list_setting_pane_g1

0x8f1a,	// (0x0002f485) list_setting_pane_g2_ParamLimits

0x8f1a,	// (0x0002f485) list_setting_pane_g2

0x0001,

0xf652,	// (0x00035bbd) list_setting_pane_g_ParamLimits

0xf652,	// (0x00035bbd) list_setting_pane_g

0x8f26,	// (0x0002f491) list_setting_pane_t1_ParamLimits

0x8f26,	// (0x0002f491) list_setting_pane_t1

0x8f40,	// (0x0002f4ab) list_setting_pane_t2_ParamLimits

0x8f40,	// (0x0002f4ab) list_setting_pane_t2

0x0002,

0xf657,	// (0x00035bc2) list_setting_pane_t_ParamLimits

0xf657,	// (0x00035bc2) list_setting_pane_t

0x8f7f,	// (0x0002f4ea) set_value_pane_cp_ParamLimits

0x8f7f,	// (0x0002f4ea) set_value_pane_cp

0x8f8b,	// (0x0002f4f6) list_setting_number_pane_g1_ParamLimits

0x8f8b,	// (0x0002f4f6) list_setting_number_pane_g1

0x8f97,	// (0x0002f502) list_setting_number_pane_g2_ParamLimits

0x8f97,	// (0x0002f502) list_setting_number_pane_g2

0x0001,

0xf65e,	// (0x00035bc9) list_setting_number_pane_g_ParamLimits

0xf65e,	// (0x00035bc9) list_setting_number_pane_g

0x8fa3,	// (0x0002f50e) list_setting_number_pane_t1_ParamLimits

0x8fa3,	// (0x0002f50e) list_setting_number_pane_t1

0x8fbc,	// (0x0002f527) list_setting_number_pane_t2_ParamLimits

0x8fbc,	// (0x0002f527) list_setting_number_pane_t2

0x8fd6,	// (0x0002f541) list_setting_number_pane_t3_ParamLimits

0x8fd6,	// (0x0002f541) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x00035bce) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x00035bce) list_setting_number_pane_t

0x8f7f,	// (0x0002f4ea) set_value_pane_ParamLimits

0x8f7f,	// (0x0002f4ea) set_value_pane

0xcadf,	// (0x0003304a) bg_set_opt_pane_ParamLimits

0xcadf,	// (0x0003304a) bg_set_opt_pane

0x9019,	// (0x0002f584) set_value_pane_t1

0xcb00,	// (0x0003306b) slider_set_pane_cp3

0x9d74,	// (0x000302df) volume_small_pane_cp

0xcb09,	// (0x00033074) list_form_gen_pane

0xcb12,	// (0x0003307d) scroll_pane_cp8

0x9027,	// (0x0002f592) form_field_data_pane_ParamLimits

0x9027,	// (0x0002f592) form_field_data_pane

0x903e,	// (0x0002f5a9) form_field_data_wide_pane_ParamLimits

0x903e,	// (0x0002f5a9) form_field_data_wide_pane

0x905e,	// (0x0002f5c9) form_field_popup_pane_ParamLimits

0x905e,	// (0x0002f5c9) form_field_popup_pane

0x9076,	// (0x0002f5e1) form_field_popup_wide_pane_ParamLimits

0x9076,	// (0x0002f5e1) form_field_popup_wide_pane

0xeb68,	// (0x000350d3) form_field_slider_pane_ParamLimits

0xeb68,	// (0x000350d3) form_field_slider_pane

0x908d,	// (0x0002f5f8) form_field_slider_wide_pane_ParamLimits

0x908d,	// (0x0002f5f8) form_field_slider_wide_pane

0xcb23,	// (0x0003308e) data_form_pane

0x90aa,	// (0x0002f615) form_field_data_pane_t1

0xcb2f,	// (0x0003309a) input_focus_pane

0x90c4,	// (0x0002f62f) data_form_wide_pane

0x90e1,	// (0x0002f64c) form_field_data_wide_pane_t1

0xca23,	// (0x00032f8e) input_focus_pane_cp6

0x9103,	// (0x0002f66e) form_field_popup_pane_t1

0xcb2f,	// (0x0003309a) input_focus_pane_cp7

0xcb5d,	// (0x000330c8) list_form_pane

0x9125,	// (0x0002f690) form_field_popup_wide_pane_t1

0xcb2f,	// (0x0003309a) input_focus_pane_cp8

0xcb69,	// (0x000330d4) list_form_wide_pane

0x9142,	// (0x0002f6ad) form_field_slider_pane_t1_ParamLimits

0x9142,	// (0x0002f6ad) form_field_slider_pane_t1

0x915a,	// (0x0002f6c5) form_field_slider_pane_t2_ParamLimits

0x915a,	// (0x0002f6c5) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x00035bde) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x00035bde) form_field_slider_pane_t

0xc76f,	// (0x00032cda) input_focus_pane_cp9_ParamLimits

0xc76f,	// (0x00032cda) input_focus_pane_cp9

0x916f,	// (0x0002f6da) slider_cont_pane_ParamLimits

0x916f,	// (0x0002f6da) slider_cont_pane

0xcb75,	// (0x000330e0) form_field_slider_wide_pane_t1_ParamLimits

0xcb75,	// (0x000330e0) form_field_slider_wide_pane_t1

0x9183,	// (0x0002f6ee) form_field_slider_wide_pane_t2_ParamLimits

0x9183,	// (0x0002f6ee) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x00035be3) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x00035be3) form_field_slider_wide_pane_t

0xc76f,	// (0x00032cda) input_focus_pane_cp10_ParamLimits

0xc76f,	// (0x00032cda) input_focus_pane_cp10

0x9195,	// (0x0002f700) slider_cont_pane_cp1_ParamLimits

0x9195,	// (0x0002f700) slider_cont_pane_cp1

0x91a9,	// (0x0002f714) slider_form_pane_cp

0xcb87,	// (0x000330f2) input_focus_pane_g1

0xcb8f,	// (0x000330fa) input_focus_pane_g2

0xcb97,	// (0x00033102) input_focus_pane_g3

0xcb9f,	// (0x0003310a) input_focus_pane_g4

0xcba7,	// (0x00033112) input_focus_pane_g5

0xcbaf,	// (0x0003311a) input_focus_pane_g6

0xcbb7,	// (0x00033122) input_focus_pane_g7

0xcbbf,	// (0x0003312a) input_focus_pane_g8

0xcbc7,	// (0x00033132) input_focus_pane_g9

0xc717,	// (0x00032c82) input_focus_pane_g10

0x0009,

0xf67d,	// (0x00035be8) input_focus_pane_g

0x3053,	// (0x000295be) wait_border_pane_g3_copy1

0x91b1,	// (0x0002f71c) data_form_pane_t1

0xc717,	// (0x00032c82) wait_anim_pane_g1_copy1

0x92e3,	// (0x0002f84e) data_form_wide_pane_t1

0x91cb,	// (0x0002f736) list_form_graphic_pane_cp_ParamLimits

0x91cb,	// (0x0002f736) list_form_graphic_pane_cp

0x3f42,	// (0x0002a4ad) slider_form_pane_g1

0x3f4b,	// (0x0002a4b6) slider_form_pane_g2

0x0006,

0xf974,	// (0x00035edf) slider_form_pane_g

0x91dd,	// (0x0002f748) list_form_graphic_pane_ParamLimits

0x91dd,	// (0x0002f748) list_form_graphic_pane

0x91f0,	// (0x0002f75b) list_form_graphic_pane_g1

0x91f8,	// (0x0002f763) list_form_graphic_pane_t1_ParamLimits

0x91f8,	// (0x0002f763) list_form_graphic_pane_t1

0xc77d,	// (0x00032ce8) list_highlight_pane_cp5_ParamLimits

0xc77d,	// (0x00032ce8) list_highlight_pane_cp5

0xeb7b,	// (0x000350e6) find_pane_g1

0xcbcf,	// (0x0003313a) input_find_pane

0x920d,	// (0x0002f778) input_find_pane_g1_ParamLimits

0x920d,	// (0x0002f778) input_find_pane_g1

0x9219,	// (0x0002f784) input_find_pane_t1_ParamLimits

0x9219,	// (0x0002f784) input_find_pane_t1

0x922e,	// (0x0002f799) input_find_pane_t2_ParamLimits

0x922e,	// (0x0002f799) input_find_pane_t2

0x0001,

0xf692,	// (0x00035bfd) input_find_pane_t_ParamLimits

0xf692,	// (0x00035bfd) input_find_pane_t

0xcbd8,	// (0x00033143) input_focus_pane_cp5_ParamLimits

0xcbd8,	// (0x00033143) input_focus_pane_cp5

0xcbe6,	// (0x00033151) bg_popup_window_pane_cp2_ParamLimits

0xcbe6,	// (0x00033151) bg_popup_window_pane_cp2

0xcbf3,	// (0x0003315e) listscroll_menu_pane_ParamLimits

0xcbf3,	// (0x0003315e) listscroll_menu_pane

0x9d89,	// (0x000302f4) popup_submenu_window_ParamLimits

0x9d89,	// (0x000302f4) popup_submenu_window

0xcbff,	// (0x0003316a) find_popup_pane_g1

0x9db1,	// (0x0003031c) input_popup_find_pane_cp

0xcbd8,	// (0x00033143) input_focus_pane_cp4_ParamLimits

0xcbd8,	// (0x00033143) input_focus_pane_cp4

0xcc07,	// (0x00033172) input_popup_find_pane_t1_ParamLimits

0xcc07,	// (0x00033172) input_popup_find_pane_t1

0xc721,	// (0x00032c8c) bg_popup_sub_pane_cp

0xcc35,	// (0x000331a0) listscroll_popup_sub_pane

0xcc3d,	// (0x000331a8) list_submenu_pane_ParamLimits

0xcc3d,	// (0x000331a8) list_submenu_pane

0xcc4e,	// (0x000331b9) scroll_pane_cp4

0x9dc9,	// (0x00030334) list_single_popup_submenu_pane_ParamLimits

0x9dc9,	// (0x00030334) list_single_popup_submenu_pane

0x9ddd,	// (0x00030348) list_single_popup_submenu_pane_g1

0x9de5,	// (0x00030350) list_single_popup_submenu_pane_t1_ParamLimits

0x9de5,	// (0x00030350) list_single_popup_submenu_pane_t1

0xc76f,	// (0x00032cda) bg_active_tab_pane_cp1_ParamLimits

0xc76f,	// (0x00032cda) bg_active_tab_pane_cp1

0xcc56,	// (0x000331c1) tabs_2_active_pane_g1

0x9dfa,	// (0x00030365) tabs_2_active_pane_t1

0xc76f,	// (0x00032cda) bg_passive_tab_pane_cp1_ParamLimits

0xc76f,	// (0x00032cda) bg_passive_tab_pane_cp1

0xcc56,	// (0x000331c1) tabs_2_passive_pane_g1

0x9dfa,	// (0x00030365) tabs_2_passive_pane_t1

0xc77d,	// (0x00032ce8) bg_active_tab_pane_cp4

0x9e0c,	// (0x00030377) tabs_2_long_active_pane_t1

0x0b8c,	// (0x000270f7) bg_passive_tab_pane_cp4

0x16f3,	// (0x00027c5e) list_single_midp_graphic_pane_g4_ParamLimits

0xc77d,	// (0x00032ce8) bg_active_tab_pane_cp5

0x9e1f,	// (0x0003038a) tabs_3_long_active_pane_t1

0x0b8c,	// (0x000270f7) bg_passive_tab_pane_cp5

0x16f3,	// (0x00027c5e) list_single_midp_graphic_pane_g4

0xc77d,	// (0x00032ce8) bg_popup_window_pane_cp13_ParamLimits

0xc77d,	// (0x00032ce8) bg_popup_window_pane_cp13

0xcc5e,	// (0x000331c9) listscroll_popup_fast_pane_ParamLimits

0xcc5e,	// (0x000331c9) listscroll_popup_fast_pane

0xcc6a,	// (0x000331d5) grid_popup_fast_pane_ParamLimits

0xcc6a,	// (0x000331d5) grid_popup_fast_pane

0xcc7c,	// (0x000331e7) scroll_pane_cp9_ParamLimits

0xcc7c,	// (0x000331e7) scroll_pane_cp9

0x584d,	// (0x0002bdb8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x584d,	// (0x0002bdb8) list_single_graphic_hl_pane_t1_cp2

0xcc8f,	// (0x000331fa) input_focus_pane_cp20_ParamLimits

0xcc8f,	// (0x000331fa) input_focus_pane_cp20

0xcc9d,	// (0x00033208) query_popup_data_pane_t1_ParamLimits

0xcc9d,	// (0x00033208) query_popup_data_pane_t1

0xccb0,	// (0x0003321b) query_popup_data_pane_t2_ParamLimits

0xccb0,	// (0x0003321b) query_popup_data_pane_t2

0xccf6,	// (0x00033261) query_popup_data_pane_t3_ParamLimits

0xccf6,	// (0x00033261) query_popup_data_pane_t3

0xcd37,	// (0x000332a2) query_popup_data_pane_t4_ParamLimits

0xcd37,	// (0x000332a2) query_popup_data_pane_t4

0xcd73,	// (0x000332de) query_popup_data_pane_t5_ParamLimits

0xcd73,	// (0x000332de) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x00035c02) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x00035c02) query_popup_data_pane_t

0xcb87,	// (0x000330f2) bg_set_opt_pane_g1

0xcb8f,	// (0x000330fa) bg_set_opt_pane_g2

0xcb97,	// (0x00033102) bg_set_opt_pane_g3

0xcb9f,	// (0x0003310a) bg_set_opt_pane_g4

0xcba7,	// (0x00033112) bg_set_opt_pane_g5

0xcbaf,	// (0x0003311a) bg_set_opt_pane_g6

0xcbb7,	// (0x00033122) bg_set_opt_pane_g7

0xcbbf,	// (0x0003312a) bg_set_opt_pane_g8

0xcbc7,	// (0x00033132) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x00035c0d) bg_set_opt_pane_g

0x025e,	// (0x000267c9) control_top_pane_stacon_ParamLimits

0x025e,	// (0x000267c9) control_top_pane_stacon

0x02b1,	// (0x0002681c) signal_pane_stacon_ParamLimits

0x02b1,	// (0x0002681c) signal_pane_stacon

0xd0ff,	// (0x0003366a) stacon_top_pane_g1_ParamLimits

0xd0ff,	// (0x0003366a) stacon_top_pane_g1

0x02d6,	// (0x00026841) title_pane_stacon_ParamLimits

0x02d6,	// (0x00026841) title_pane_stacon

0x0300,	// (0x0002686b) uni_indicator_pane_stacon_ParamLimits

0x0300,	// (0x0002686b) uni_indicator_pane_stacon

0x0315,	// (0x00026880) battery_pane_stacon_ParamLimits

0x0315,	// (0x00026880) battery_pane_stacon

0x0359,	// (0x000268c4) control_bottom_pane_stacon_ParamLimits

0x0359,	// (0x000268c4) control_bottom_pane_stacon

0x037c,	// (0x000268e7) navi_pane_stacon_ParamLimits

0x037c,	// (0x000268e7) navi_pane_stacon

0xd121,	// (0x0003368c) stacon_bottom_pane_g1_ParamLimits

0xd121,	// (0x0003368c) stacon_bottom_pane_g1

0xf3a5,	// (0x00035910) aid_levels_signal_lsc_ParamLimits

0xf3a5,	// (0x00035910) aid_levels_signal_lsc

0xf3bb,	// (0x00035926) signal_pane_stacon_g1_ParamLimits

0xf3bb,	// (0x00035926) signal_pane_stacon_g1

0xf3cf,	// (0x0003593a) signal_pane_stacon_g2_ParamLimits

0xf3cf,	// (0x0003593a) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x00035c20) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x00035c20) signal_pane_stacon_g

0xf404,	// (0x0003596f) title_pane_stacon_t1_ParamLimits

0xf404,	// (0x0003596f) title_pane_stacon_t1

0xcdb7,	// (0x00033322) uni_indicator_pane_stacon_g1

0xcdc1,	// (0x0003332c) uni_indicator_pane_stacon_g2

0xcdcb,	// (0x00033336) uni_indicator_pane_stacon_g3

0xcdd5,	// (0x00033340) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x00035c2c) uni_indicator_pane_stacon_g

0xf429,	// (0x00035994) control_top_pane_stacon_g1

0xf431,	// (0x0003599c) control_top_pane_stacon_t1_ParamLimits

0xf431,	// (0x0003599c) control_top_pane_stacon_t1

0xf468,	// (0x000359d3) aid_levels_battery_lsc_ParamLimits

0xf468,	// (0x000359d3) aid_levels_battery_lsc

0xf47f,	// (0x000359ea) battery_pane_stacon_g1_ParamLimits

0xf47f,	// (0x000359ea) battery_pane_stacon_g1

0xf492,	// (0x000359fd) battery_pane_stacon_g2_ParamLimits

0xf492,	// (0x000359fd) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00035c35) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00035c35) battery_pane_stacon_g

0xf4d0,	// (0x00035a3b) navi_icon_pane_stacon

0xf4e4,	// (0x00035a4f) navi_navi_pane_stacon

0xf4d0,	// (0x00035a3b) navi_text_pane_stacon

0xf429,	// (0x00035994) control_bottom_pane_stacon_g1

0xf4f8,	// (0x00035a63) control_bottom_pane_stacon_t1_ParamLimits

0xf4f8,	// (0x00035a63) control_bottom_pane_stacon_t1

0x9e4b,	// (0x000303b6) grid_app_pane_ParamLimits

0x9e4b,	// (0x000303b6) grid_app_pane

0x9e83,	// (0x000303ee) scroll_pane_cp15_ParamLimits

0x9e83,	// (0x000303ee) scroll_pane_cp15

0x9e98,	// (0x00030403) cell_app_pane_ParamLimits

0x9e98,	// (0x00030403) cell_app_pane

0x9edd,	// (0x00030448) cell_app_pane_g1_ParamLimits

0x9edd,	// (0x00030448) cell_app_pane_g1

0xcdf9,	// (0x00033364) cell_app_pane_g2_ParamLimits

0xcdf9,	// (0x00033364) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x00035c3a) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x00035c3a) cell_app_pane_g

0x9f01,	// (0x0003046c) cell_app_pane_t1_ParamLimits

0x9f01,	// (0x0003046c) cell_app_pane_t1

0xce05,	// (0x00033370) grid_highlight_pane_ParamLimits

0xce05,	// (0x00033370) grid_highlight_pane

0xcb87,	// (0x000330f2) cell_highlight_pane_g1

0xcb8f,	// (0x000330fa) cell_highlight_pane_g2

0xcb97,	// (0x00033102) cell_highlight_pane_g3

0xcb9f,	// (0x0003310a) cell_highlight_pane_g4

0xcba7,	// (0x00033112) cell_highlight_pane_g5

0xcbaf,	// (0x0003311a) cell_highlight_pane_g6

0xcbb7,	// (0x00033122) cell_highlight_pane_g7

0xcbbf,	// (0x0003312a) cell_highlight_pane_g8

0xcbc7,	// (0x00033132) cell_highlight_pane_g9

0xc717,	// (0x00032c82) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x00035be8) cell_highlight_pane_g

0xce16,	// (0x00033381) bg_scroll_pane

0x9f21,	// (0x0003048c) scroll_handle_pane

0xce5d,	// (0x000333c8) scroll_bg_pane_g1

0xce72,	// (0x000333dd) scroll_bg_pane_g2

0xce8a,	// (0x000333f5) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x00035c3f) scroll_bg_pane_g

0x9f35,	// (0x000304a0) scroll_handle_focus_pane_ParamLimits

0x9f35,	// (0x000304a0) scroll_handle_focus_pane

0xce5d,	// (0x000333c8) scroll_handle_pane_g1

0xce9f,	// (0x0003340a) scroll_handle_pane_g2

0xce8a,	// (0x000333f5) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x00035c46) scroll_handle_pane_g

0xcbd8,	// (0x00033143) bg_popup_sub_pane_cp21_ParamLimits

0xcbd8,	// (0x00033143) bg_popup_sub_pane_cp21

0x9f42,	// (0x000304ad) popup_fep_japan_predictive_window_t1_ParamLimits

0x9f42,	// (0x000304ad) popup_fep_japan_predictive_window_t1

0x9f59,	// (0x000304c4) popup_fep_japan_predictive_window_t2_ParamLimits

0x9f59,	// (0x000304c4) popup_fep_japan_predictive_window_t2

0x9f8c,	// (0x000304f7) popup_fep_japan_predictive_window_t3_ParamLimits

0x9f8c,	// (0x000304f7) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x00035c4d) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x00035c4d) popup_fep_japan_predictive_window_t

0xc721,	// (0x00032c8c) bg_popup_sub_pane_cp23

0x9fc3,	// (0x0003052e) listscroll_japin_cand_pane

0xceb3,	// (0x0003341e) popup_fep_japan_candidate_window_t1

0xcec1,	// (0x0003342c) candidate_pane_ParamLimits

0xcec1,	// (0x0003342c) candidate_pane

0x9fcb,	// (0x00030536) scroll_pane_cp30

0xced3,	// (0x0003343e) list_single_popup_jap_candidate_pane_ParamLimits

0xced3,	// (0x0003343e) list_single_popup_jap_candidate_pane

0xc721,	// (0x00032c8c) list_highlight_pane_cp30

0xcee8,	// (0x00033453) list_single_popup_jap_candidate_pane_t1

0xcef7,	// (0x00033462) level_1_signal

0xcf04,	// (0x0003346f) level_2_signal

0xcf11,	// (0x0003347c) level_3_signal

0xcf1e,	// (0x00033489) level_4_signal

0xcf2b,	// (0x00033496) level_5_signal

0xcf38,	// (0x000334a3) level_6_signal

0xcf45,	// (0x000334b0) level_7_signal

0xcef7,	// (0x00033462) level_1_battery

0xcf04,	// (0x0003346f) level_2_battery

0xcf11,	// (0x0003347c) level_3_battery

0xcf1e,	// (0x00033489) level_4_battery

0xcf2b,	// (0x00033496) level_5_battery

0xcf38,	// (0x000334a3) level_6_battery

0xcf45,	// (0x000334b0) level_7_battery

0xcf6a,	// (0x000334d5) list_menu_pane_ParamLimits

0xcf6a,	// (0x000334d5) list_menu_pane

0xcf80,	// (0x000334eb) scroll_pane_cp25_ParamLimits

0xcf80,	// (0x000334eb) scroll_pane_cp25

0x9fd3,	// (0x0003053e) list_double2_graphic_pane_cp2_ParamLimits

0x9fd3,	// (0x0003053e) list_double2_graphic_pane_cp2

0x9fd3,	// (0x0003053e) list_double2_large_graphic_pane_cp2_ParamLimits

0x9fd3,	// (0x0003053e) list_double2_large_graphic_pane_cp2

0x9fd3,	// (0x0003053e) list_double2_pane_cp2_ParamLimits

0x9fd3,	// (0x0003053e) list_double2_pane_cp2

0x9fd3,	// (0x0003053e) list_double_graphic_pane_cp2_ParamLimits

0x9fd3,	// (0x0003053e) list_double_graphic_pane_cp2

0x9fd3,	// (0x0003053e) list_double_large_graphic_pane_cp2_ParamLimits

0x9fd3,	// (0x0003053e) list_double_large_graphic_pane_cp2

0x9fd3,	// (0x0003053e) list_double_number_pane_cp2_ParamLimits

0x9fd3,	// (0x0003053e) list_double_number_pane_cp2

0x9fd3,	// (0x0003053e) list_double_pane_cp2_ParamLimits

0x9fd3,	// (0x0003053e) list_double_pane_cp2

0x9fe2,	// (0x0003054d) list_single_2graphic_pane_cp2_ParamLimits

0x9fe2,	// (0x0003054d) list_single_2graphic_pane_cp2

0x9fe2,	// (0x0003054d) list_single_graphic_heading_pane_cp2_ParamLimits

0x9fe2,	// (0x0003054d) list_single_graphic_heading_pane_cp2

0x9fe2,	// (0x0003054d) list_single_graphic_pane_cp2_ParamLimits

0x9fe2,	// (0x0003054d) list_single_graphic_pane_cp2

0x9fe2,	// (0x0003054d) list_single_heading_pane_cp2_ParamLimits

0x9fe2,	// (0x0003054d) list_single_heading_pane_cp2

0xcfa9,	// (0x00033514) list_single_large_graphic_pane_cp2_ParamLimits

0xcfa9,	// (0x00033514) list_single_large_graphic_pane_cp2

0x9fe2,	// (0x0003054d) list_single_number_heading_pane_cp2_ParamLimits

0x9fe2,	// (0x0003054d) list_single_number_heading_pane_cp2

0x9fe2,	// (0x0003054d) list_single_number_pane_cp2_ParamLimits

0x9fe2,	// (0x0003054d) list_single_number_pane_cp2

0x9fe2,	// (0x0003054d) list_single_pane_cp2_ParamLimits

0x9fe2,	// (0x0003054d) list_single_pane_cp2

0xcfc3,	// (0x0003352e) bg_popup_sub_pane_cp22

0x01a1,	// (0x0002670c) popup_side_volume_key_window_g1

0x01c5,	// (0x00026730) popup_side_volume_key_window_t1

0xa0aa,	// (0x00030615) volume_small_pane_cp1

0xc76f,	// (0x00032cda) bg_popup_sub_pane_cp24_ParamLimits

0xc76f,	// (0x00032cda) bg_popup_sub_pane_cp24

0xcfd9,	// (0x00033544) fep_china_uni_candidate_pane_ParamLimits

0xcfd9,	// (0x00033544) fep_china_uni_candidate_pane

0xcfed,	// (0x00033558) fep_china_uni_entry_pane

0xcffd,	// (0x00033568) popup_fep_china_uni_window_g1

0xa0b2,	// (0x0003061d) fep_china_uni_entry_pane_g1

0xa0ba,	// (0x00030625) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x00035c7e) fep_china_uni_entry_pane_g

0xd019,	// (0x00033584) fep_entry_item_pane

0xd023,	// (0x0003358e) fep_candidate_item_pane

0xa0c2,	// (0x0003062d) fep_china_uni_candidate_pane_g1

0xd02b,	// (0x00033596) fep_china_uni_candidate_pane_g2

0xd033,	// (0x0003359e) fep_china_uni_candidate_pane_g3

0xa0ca,	// (0x00030635) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x00035c83) fep_china_uni_candidate_pane_g

0xc717,	// (0x00032c82) fep_entry_item_pane_g1

0xd03b,	// (0x000335a6) fep_entry_item_pane_t1_ParamLimits

0xd03b,	// (0x000335a6) fep_entry_item_pane_t1

0xd051,	// (0x000335bc) fep_candidate_item_pane_t1_ParamLimits

0xd051,	// (0x000335bc) fep_candidate_item_pane_t1

0xd066,	// (0x000335d1) fep_candidate_item_pane_t2_ParamLimits

0xd066,	// (0x000335d1) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x00035c8c) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x00035c8c) fep_candidate_item_pane_t

0xc77d,	// (0x00032ce8) list_highlight_pane_cp31_ParamLimits

0xc77d,	// (0x00032ce8) list_highlight_pane_cp31

0xd078,	// (0x000335e3) level_1_signal_lsc

0xd081,	// (0x000335ec) level_2_signal_lsc

0xd08a,	// (0x000335f5) level_3_signal_lsc

0xd093,	// (0x000335fe) level_4_signal_lsc

0xd09c,	// (0x00033607) level_5_signal_lsc

0xd0a5,	// (0x00033610) level_6_signal_lsc

0xd0ae,	// (0x00033619) level_7_signal_lsc

0xd0ae,	// (0x00033619) level_1_battery_lsc

0xd0b7,	// (0x00033622) level_2_battery_lsc

0xd0c0,	// (0x0003362b) level_3_battery_lsc

0xd0c9,	// (0x00033634) level_4_battery_lsc

0xd0d2,	// (0x0003363d) level_5_battery_lsc

0xd0db,	// (0x00033646) level_6_battery_lsc

0xd078,	// (0x000335e3) level_7_battery_lsc

0xd0e4,	// (0x0003364f) scroll_handle_focus_pane_g1

0xd0ed,	// (0x00033658) scroll_handle_focus_pane_g2

0xd0f6,	// (0x00033661) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x00035c91) scroll_handle_focus_pane_g

0x9243,	// (0x0002f7ae) list_single_2graphic_pane_g1_ParamLimits

0x9243,	// (0x0002f7ae) list_single_2graphic_pane_g1

0x8ccd,	// (0x0002f238) list_single_2graphic_pane_g2_ParamLimits

0x8ccd,	// (0x0002f238) list_single_2graphic_pane_g2

0xea83,	// (0x00034fee) list_single_2graphic_pane_g3_ParamLimits

0xea83,	// (0x00034fee) list_single_2graphic_pane_g3

0x924f,	// (0x0002f7ba) list_single_2graphic_pane_g4_ParamLimits

0x924f,	// (0x0002f7ba) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x00035c98) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x00035c98) list_single_2graphic_pane_g

0x925b,	// (0x0002f7c6) list_single_2graphic_pane_t1_ParamLimits

0x925b,	// (0x0002f7c6) list_single_2graphic_pane_t1

0x9289,	// (0x0002f7f4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9289,	// (0x0002f7f4) list_double2_graphic_large_graphic_pane_g1

0x8d2c,	// (0x0002f297) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8d2c,	// (0x0002f297) list_double2_graphic_large_graphic_pane_g2

0xeb37,	// (0x000350a2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xeb37,	// (0x000350a2) list_double2_graphic_large_graphic_pane_g3

0x929b,	// (0x0002f806) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x929b,	// (0x0002f806) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x00035ca1) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x00035ca1) list_double2_graphic_large_graphic_pane_g

0x8ec2,	// (0x0002f42d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8ec2,	// (0x0002f42d) list_double2_graphic_large_graphic_pane_t1

0x92a7,	// (0x0002f812) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x92a7,	// (0x0002f812) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x00035caa) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x00035caa) list_double2_graphic_large_graphic_pane_t

0xa145,	// (0x000306b0) popup_fast_swap_window_ParamLimits

0xa145,	// (0x000306b0) popup_fast_swap_window

0xa161,	// (0x000306cc) popup_side_volume_key_window

0x0411,	// (0x0002697c) stacon_top_pane

0x041b,	// (0x00026986) status_pane_ParamLimits

0x041b,	// (0x00026986) status_pane

0xa17b,	// (0x000306e6) status_small_pane

0xc721,	// (0x00032c8c) control_pane

0xc721,	// (0x00032c8c) stacon_bottom_pane

0xcb12,	// (0x0003307d) scroll_pane_cp121

0xcb09,	// (0x00033074) set_content_pane

0xa0d2,	// (0x0003063d) bg_active_tab_pane_g1_cp1

0xa0db,	// (0x00030646) bg_active_tab_pane_g2_cp1

0xa0e4,	// (0x0003064f) bg_active_tab_pane_g3_cp1

0xa0d2,	// (0x0003063d) bg_passive_tab_pane_g1_cp1

0xa0db,	// (0x00030646) bg_passive_tab_pane_g2_cp1

0xa0e4,	// (0x0003064f) bg_passive_tab_pane_g3_cp1

0xa0ed,	// (0x00030658) bg_active_tab_pane_g1_cp2

0xa0db,	// (0x00030646) bg_active_tab_pane_g2_cp2

0xa0f6,	// (0x00030661) bg_active_tab_pane_g3_cp2

0xa0ed,	// (0x00030658) bg_passive_tab_pane_g1_cp2

0xa0db,	// (0x00030646) bg_passive_tab_pane_g2_cp2

0xa0f6,	// (0x00030661) bg_passive_tab_pane_g3_cp2

0xa0ff,	// (0x0003066a) bg_active_tab_pane_g1_cp3

0xa0db,	// (0x00030646) bg_active_tab_pane_g2_cp3

0xa108,	// (0x00030673) bg_active_tab_pane_g3_cp3

0xa0ff,	// (0x0003066a) bg_passive_tab_pane_g1_cp3

0xa0db,	// (0x00030646) bg_passive_tab_pane_g2_cp3

0xa108,	// (0x00030673) bg_passive_tab_pane_g3_cp3

0xa111,	// (0x0003067c) bg_active_tab_pane_g1_cp4

0xa0db,	// (0x00030646) bg_active_tab_pane_g2_cp4

0xa11c,	// (0x00030687) bg_active_tab_pane_g3_cp4

0xa111,	// (0x0003067c) bg_passive_tab_pane_g1_cp4

0xa0db,	// (0x00030646) bg_passive_tab_pane_g2_cp4

0xa11c,	// (0x00030687) bg_passive_tab_pane_g3_cp4

0xa127,	// (0x00030692) bg_active_tab_pane_g1_cp5

0xa0db,	// (0x00030646) bg_active_tab_pane_g2_cp5

0xa130,	// (0x0003069b) bg_active_tab_pane_g3_cp5

0xa127,	// (0x00030692) bg_passive_tab_pane_g1_cp5

0xa0db,	// (0x00030646) bg_passive_tab_pane_g2_cp5

0xa130,	// (0x0003069b) bg_passive_tab_pane_g3_cp5

0x4543,	// (0x0002aaae) list_set_graphic_pane_ParamLimits

0x4543,	// (0x0002aaae) list_set_graphic_pane

0xc721,	// (0x00032c8c) bg_set_opt_pane_cp4

0xd13d,	// (0x000336a8) list_set_graphic_pane_g1_ParamLimits

0xd13d,	// (0x000336a8) list_set_graphic_pane_g1

0xd149,	// (0x000336b4) list_set_graphic_pane_g2_ParamLimits

0xd149,	// (0x000336b4) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x00035caf) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x00035caf) list_set_graphic_pane_g

0x0009,

0xfac9,	// (0x00036034) volume_small_pane_cp_g

0xa139,	// (0x000306a4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa139,	// (0x000306a4) list_double2_large_graphic_pane_g1_cp2

0xd16b,	// (0x000336d6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd16b,	// (0x000336d6) list_double2_large_graphic_pane_g2_cp2

0xd17c,	// (0x000336e7) list_double2_large_graphic_pane_g3_cp2

0xd184,	// (0x000336ef) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xd184,	// (0x000336ef) list_double2_large_graphic_pane_t1_cp2

0xd19a,	// (0x00033705) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xd19a,	// (0x00033705) list_double2_large_graphic_pane_t2_cp2

0xb688,	// (0x00031bf3) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb688,	// (0x00031bf3) list_double_large_graphic_pane_g1_cp2

0x3b15,	// (0x0002a080) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3b15,	// (0x0002a080) list_double_large_graphic_pane_g2_cp2

0x0536,	// (0x00026aa1) list_double_large_graphic_pane_g3_cp2

0x3b26,	// (0x0002a091) list_double_large_graphic_pane_g4_cp

0x3b2e,	// (0x0002a099) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3b2e,	// (0x0002a099) list_double_large_graphic_pane_t1_cp2

0x3b45,	// (0x0002a0b0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3b45,	// (0x0002a0b0) list_double_large_graphic_pane_t2_cp2

0x0434,	// (0x0002699f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0434,	// (0x0002699f) list_double2_graphic_pane_g1_cp2

0x0442,	// (0x000269ad) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0442,	// (0x000269ad) list_double2_graphic_pane_g2_cp2

0x0453,	// (0x000269be) list_double2_graphic_pane_g3_cp2

0x045d,	// (0x000269c8) list_double2_graphic_pane_t1_cp2_ParamLimits

0x045d,	// (0x000269c8) list_double2_graphic_pane_t1_cp2

0x0473,	// (0x000269de) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0473,	// (0x000269de) list_double2_graphic_pane_t2_cp2

0xd1ac,	// (0x00033717) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd1ac,	// (0x00033717) list_single_number_heading_pane_g1_cp2

0x0485,	// (0x000269f0) list_single_number_heading_pane_g2_cp2

0x048d,	// (0x000269f8) list_single_number_heading_pane_t1_cp2_ParamLimits

0x048d,	// (0x000269f8) list_single_number_heading_pane_t1_cp2

0x04a3,	// (0x00026a0e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x04a3,	// (0x00026a0e) list_single_number_heading_pane_t2_cp2

0x04b5,	// (0x00026a20) list_single_number_heading_pane_t3_cp2_ParamLimits

0x04b5,	// (0x00026a20) list_single_number_heading_pane_t3_cp2

0xd1ac,	// (0x00033717) list_single_heading_pane_g1_cp2_ParamLimits

0xd1ac,	// (0x00033717) list_single_heading_pane_g1_cp2

0x0485,	// (0x000269f0) list_single_heading_pane_g2_cp2

0x048d,	// (0x000269f8) list_single_heading_pane_t1_cp2_ParamLimits

0x048d,	// (0x000269f8) list_single_heading_pane_t1_cp2

0x390e,	// (0x00029e79) list_single_heading_pane_t2_cp2_ParamLimits

0x390e,	// (0x00029e79) list_single_heading_pane_t2_cp2

0x3856,	// (0x00029dc1) list_double_graphic_pane_g1_cp2_ParamLimits

0x3856,	// (0x00029dc1) list_double_graphic_pane_g1_cp2

0x3862,	// (0x00029dcd) list_double_graphic_pane_g2_cp2_ParamLimits

0x3862,	// (0x00029dcd) list_double_graphic_pane_g2_cp2

0x3871,	// (0x00029ddc) list_double_graphic_pane_g3_cp2

0x3879,	// (0x00029de4) list_double_graphic_pane_t1_cp2_ParamLimits

0x3879,	// (0x00029de4) list_double_graphic_pane_t1_cp2

0x388f,	// (0x00029dfa) list_double_graphic_pane_t2_cp2_ParamLimits

0x388f,	// (0x00029dfa) list_double_graphic_pane_t2_cp2

0x052a,	// (0x00026a95) list_double_number_pane_g1_cp2_ParamLimits

0x052a,	// (0x00026a95) list_double_number_pane_g1_cp2

0x0536,	// (0x00026aa1) list_double_number_pane_g2_cp2

0x381a,	// (0x00029d85) list_double_number_pane_t1_cp2_ParamLimits

0x381a,	// (0x00029d85) list_double_number_pane_t1_cp2

0x382e,	// (0x00029d99) list_double_number_pane_t2_cp2_ParamLimits

0x382e,	// (0x00029d99) list_double_number_pane_t2_cp2

0x3844,	// (0x00029daf) list_double_number_pane_t3_cp2_ParamLimits

0x3844,	// (0x00029daf) list_double_number_pane_t3_cp2

0x3703,	// (0x00029c6e) list_single_graphic_pane_g1_cp2_ParamLimits

0x3703,	// (0x00029c6e) list_single_graphic_pane_g1_cp2

0x058e,	// (0x00026af9) list_single_graphic_pane_g2_cp2_ParamLimits

0x058e,	// (0x00026af9) list_single_graphic_pane_g2_cp2

0x059a,	// (0x00026b05) list_single_graphic_pane_g3_cp2

0x36d9,	// (0x00029c44) list_single_graphic_pane_t1_cp2_ParamLimits

0x36d9,	// (0x00029c44) list_single_graphic_pane_t1_cp2

0x058e,	// (0x00026af9) list_single_number_pane_g1_cp2_ParamLimits

0x058e,	// (0x00026af9) list_single_number_pane_g1_cp2

0x059a,	// (0x00026b05) list_single_number_pane_g2_cp2

0x36d9,	// (0x00029c44) list_single_number_pane_t1_cp2_ParamLimits

0x36d9,	// (0x00029c44) list_single_number_pane_t1_cp2

0x36ef,	// (0x00029c5a) list_single_number_pane_t2_cp2_ParamLimits

0x36ef,	// (0x00029c5a) list_single_number_pane_t2_cp2

0xd16b,	// (0x000336d6) list_double2_pane_g1_cp2_ParamLimits

0xd16b,	// (0x000336d6) list_double2_pane_g1_cp2

0xd17c,	// (0x000336e7) list_double2_pane_g2_cp2

0x0502,	// (0x00026a6d) list_double2_pane_t1_cp2_ParamLimits

0x0502,	// (0x00026a6d) list_double2_pane_t1_cp2

0x0518,	// (0x00026a83) list_double2_pane_t2_cp2_ParamLimits

0x0518,	// (0x00026a83) list_double2_pane_t2_cp2

0x052a,	// (0x00026a95) list_double_pane_g1_cp2_ParamLimits

0x052a,	// (0x00026a95) list_double_pane_g1_cp2

0x0536,	// (0x00026aa1) list_double_pane_g2_cp2

0x053e,	// (0x00026aa9) list_double_pane_t1_cp2_ParamLimits

0x053e,	// (0x00026aa9) list_double_pane_t1_cp2

0x0554,	// (0x00026abf) list_double_pane_t2_cp2_ParamLimits

0x0554,	// (0x00026abf) list_double_pane_t2_cp2

0xa186,	// (0x000306f1) list_single_pane_cp2_g3

0x058e,	// (0x00026af9) list_single_pane_g1_cp2_ParamLimits

0x058e,	// (0x00026af9) list_single_pane_g1_cp2

0x059a,	// (0x00026b05) list_single_pane_g2_cp2

0x05a2,	// (0x00026b0d) list_single_pane_t1_cp2_ParamLimits

0x05a2,	// (0x00026b0d) list_single_pane_t1_cp2

0xa18e,	// (0x000306f9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa18e,	// (0x000306f9) list_single_large_graphic_pane_g1_cp2

0x05c6,	// (0x00026b31) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x05c6,	// (0x00026b31) list_single_large_graphic_pane_g2_cp2

0x05d2,	// (0x00026b3d) list_single_large_graphic_pane_g3_cp2

0xa19a,	// (0x00030705) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa19a,	// (0x00030705) list_single_large_graphic_pane_g4_cp1

0x05f4,	// (0x00026b5f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x05f4,	// (0x00026b5f) list_single_large_graphic_pane_t1_cp2

0x36a5,	// (0x00029c10) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x36a5,	// (0x00029c10) list_single_graphic_heading_pane_g1_cp2

0x3672,	// (0x00029bdd) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3672,	// (0x00029bdd) list_single_graphic_heading_pane_g4_cp2

0x059a,	// (0x00026b05) list_single_graphic_heading_pane_g5_cp2

0x36b1,	// (0x00029c1c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x36b1,	// (0x00029c1c) list_single_graphic_heading_pane_t1_cp2

0x36c7,	// (0x00029c32) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x36c7,	// (0x00029c32) list_single_graphic_heading_pane_t2_cp2

0x3666,	// (0x00029bd1) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3666,	// (0x00029bd1) list_single_2graphic_pane_g1_cp2

0x3672,	// (0x00029bdd) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3672,	// (0x00029bdd) list_single_2graphic_pane_g2_cp2

0x059a,	// (0x00026b05) list_single_2graphic_pane_g3_cp2

0x3683,	// (0x00029bee) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3683,	// (0x00029bee) list_single_2graphic_pane_g4_cp2

0x368f,	// (0x00029bfa) list_single_2graphic_pane_t1_cp2_ParamLimits

0x368f,	// (0x00029bfa) list_single_2graphic_pane_t1_cp2

0xc717,	// (0x00032c82) list_highlight_pane_g10_cp1

0x324e,	// (0x000297b9) list_highlight_pane_g1_cp1

0x3256,	// (0x000297c1) list_highlight_pane_g2_cp1

0x325e,	// (0x000297c9) list_highlight_pane_g3_cp1

0x3266,	// (0x000297d1) list_highlight_pane_g4_cp1

0x326e,	// (0x000297d9) list_highlight_pane_g5_cp1

0x3276,	// (0x000297e1) list_highlight_pane_g6_cp1

0x327e,	// (0x000297e9) list_highlight_pane_g7_cp1

0x3286,	// (0x000297f1) list_highlight_pane_g8_cp1

0x328e,	// (0x000297f9) list_highlight_pane_g9_cp1

0xb415,	// (0x00031980) form_field_slider_pane_t3

0xb423,	// (0x0003198e) form_field_slider_pane_t4

0x3192,	// (0x000296fd) slider_form_pane_ParamLimits

0x3192,	// (0x000296fd) slider_form_pane

0xc721,	// (0x00032c8c) control_abbreviations

0xc721,	// (0x00032c8c) control_conventions

0xc721,	// (0x00032c8c) control_definitions

0xc721,	// (0x00032c8c) format_table_attribute

0xb65f,	// (0x00031bca) bg_popup_preview_window_pane_g9

0xc721,	// (0x00032c8c) format_table_data2

0xc721,	// (0x00032c8c) format_table_data3

0xc721,	// (0x00032c8c) format_table_data_example

0x0008,

0xc721,	// (0x00032c8c) intro_purpose

0xf8d4,	// (0x00035e3f) bg_popup_preview_window_pane_g

0xc721,	// (0x00032c8c) texts_category

0xc721,	// (0x00032c8c) texts_graphics

0x060a,	// (0x00026b75) text_digital

0x0619,	// (0x00026b84) text_primary

0x0628,	// (0x00026b93) text_primary_small

0x0637,	// (0x00026ba2) text_secondary

0x0646,	// (0x00026bb1) text_title

0xba80,	// (0x00031feb) bg_passive_tab_pane_g1_cp3_srt

0xa0db,	// (0x00030646) bg_passive_tab_pane_g2_cp3_srt

0xba89,	// (0x00031ff4) bg_passive_tab_pane_g3_cp3_srt

0xc76f,	// (0x00032cda) bg_active_tab_pane_cp3_srt_ParamLimits

0xc76f,	// (0x00032cda) bg_active_tab_pane_cp3_srt

0xba92,	// (0x00031ffd) tabs_4_active_pane_srt_g1

0xba9a,	// (0x00032005) tabs_4_active_pane_srt_t1_ParamLimits

0xba9a,	// (0x00032005) tabs_4_active_pane_srt_t1

0xba80,	// (0x00031feb) bg_active_tab_pane_g1_cp3_copy1

0xa0db,	// (0x00030646) bg_active_tab_pane_g2_cp3_copy1

0xba89,	// (0x00031ff4) bg_active_tab_pane_g3_cp3_copy1

0xc77d,	// (0x00032ce8) tabs_2_long_active_pane_srt_ParamLimits

0xc77d,	// (0x00032ce8) tabs_2_long_active_pane_srt

0xc77d,	// (0x00032ce8) tabs_2_long_passive_pane_srt_ParamLimits

0xc77d,	// (0x00032ce8) tabs_2_long_passive_pane_srt

0x0b8c,	// (0x000270f7) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0b8c,	// (0x000270f7) bg_passive_tab_pane_cp4_srt

0xb7c7,	// (0x00031d32) bg_passive_tab_pane_g1_cp4_srt

0xa0db,	// (0x00030646) bg_passive_tab_pane_g2_cp4_srt

0xb7d0,	// (0x00031d3b) bg_passive_tab_pane_g3_cp4_srt

0xc77d,	// (0x00032ce8) bg_active_tab_pane_cp4_srt_ParamLimits

0xc77d,	// (0x00032ce8) bg_active_tab_pane_cp4_srt

0xb7d9,	// (0x00031d44) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb7d9,	// (0x00031d44) tabs_2_long_active_pane_srt_t1

0xb7c7,	// (0x00031d32) bg_active_tab_pane_g1_cp4_srt

0xa0db,	// (0x00030646) bg_active_tab_pane_g2_cp4_srt

0xb7d0,	// (0x00031d3b) bg_active_tab_pane_g3_cp4_srt

0xc76f,	// (0x00032cda) tabs_3_long_active_pane_srt_ParamLimits

0xc76f,	// (0x00032cda) tabs_3_long_active_pane_srt

0xc76f,	// (0x00032cda) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc76f,	// (0x00032cda) tabs_3_long_passive_pane_cp_srt

0xc76f,	// (0x00032cda) tabs_3_long_passive_pane_srt_ParamLimits

0xc76f,	// (0x00032cda) tabs_3_long_passive_pane_srt

0x0b8c,	// (0x000270f7) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0b8c,	// (0x000270f7) bg_passive_tab_pane_cp5_srt

0xa127,	// (0x00030692) bg_passive_tab_pane_g1_cp5_srt

0xa0db,	// (0x00030646) bg_passive_tab_pane_g2_cp5_srt

0xa130,	// (0x0003069b) bg_passive_tab_pane_g3_cp5_srt

0xc77d,	// (0x00032ce8) bg_active_tab_pane_cp5_srt_ParamLimits

0xc77d,	// (0x00032ce8) bg_active_tab_pane_cp5_srt

0xb7b1,	// (0x00031d1c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb7b1,	// (0x00031d1c) tabs_3_long_active_pane_srt_t1

0xa127,	// (0x00030692) bg_active_tab_pane_g1_cp5_srt

0xa0db,	// (0x00030646) bg_active_tab_pane_g2_cp5_srt

0xa130,	// (0x0003069b) bg_active_tab_pane_g3_cp5_srt

0x3d59,	// (0x0002a2c4) navi_text_pane_srt_t1

0x3d51,	// (0x0002a2bc) navi_icon_pane_srt_g1

0x08c0,	// (0x00026e2b) midp_editing_number_pane_srt

0x0655,	// (0x00026bc0) midp_ticker_pane_srt

0x08c8,	// (0x00026e33) midp_ticker_pane_srt_g1

0x08d0,	// (0x00026e3b) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x00035cce) midp_ticker_pane_srt_g

0x08d8,	// (0x00026e43) midp_ticker_pane_srt_t1

0x3d42,	// (0x0002a2ad) midp_editing_number_pane_t1_copy1

0xa1b4,	// (0x0003071f) listscroll_midp_pane

0xa1b4,	// (0x0003071f) midp_form_pane

0xa21f,	// (0x0003078a) midp_info_popup_window_ParamLimits

0xa21f,	// (0x0003078a) midp_info_popup_window

0xcbd8,	// (0x00033143) bg_popup_sub_pane_cp50_ParamLimits

0xcbd8,	// (0x00033143) bg_popup_sub_pane_cp50

0x2e8a,	// (0x000293f5) listscroll_midp_info_pane_ParamLimits

0x2e8a,	// (0x000293f5) listscroll_midp_info_pane

0x2e6a,	// (0x000293d5) listscroll_form_midp_pane_ParamLimits

0x2e6a,	// (0x000293d5) listscroll_form_midp_pane

0x2e76,	// (0x000293e1) scroll_bar_cp050

0x2e6a,	// (0x000293d5) list_midp_pane

0xbc8a,	// (0x000321f5) signal_pane_g2_cp

0x2d84,	// (0x000292ef) listscroll_midp_info_pane_t1_ParamLimits

0x2d84,	// (0x000292ef) listscroll_midp_info_pane_t1

0xb24f,	// (0x000317ba) listscroll_midp_info_pane_t2_ParamLimits

0xb24f,	// (0x000317ba) listscroll_midp_info_pane_t2

0xb28d,	// (0x000317f8) listscroll_midp_info_pane_t3_ParamLimits

0xb28d,	// (0x000317f8) listscroll_midp_info_pane_t3

0xb2c7,	// (0x00031832) listscroll_midp_info_pane_t4_ParamLimits

0xb2c7,	// (0x00031832) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x00035d7a) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x00035d7a) listscroll_midp_info_pane_t

0xcc4e,	// (0x000331b9) scroll_pane_cp21

0x2d24,	// (0x0002928f) form_midp_field_choice_group_pane

0xb212,	// (0x0003177d) form_midp_field_text_pane

0x2d6a,	// (0x000292d5) form_midp_field_time_pane

0x2d72,	// (0x000292dd) form_midp_gauge_slider_pane

0x2d7b,	// (0x000292e6) form_midp_gauge_wait_pane

0xc721,	// (0x00032c8c) form_midp_image_pane

0x92b9,	// (0x0002f824) list_single_midp_pane_ParamLimits

0x92b9,	// (0x0002f824) list_single_midp_pane

0xb1f0,	// (0x0003175b) form_midp_field_text_pane_t1

0x1772,	// (0x00027cdd) input_focus_pane_cp050

0x2d13,	// (0x0002927e) list_midp_form_text_pane

0x2ca8,	// (0x00029213) form_midp_field_choice_group_pane_t1

0x2cb6,	// (0x00029221) input_focus_pane_cp051

0x2cca,	// (0x00029235) list_midp_choice_pane

0xc721,	// (0x00032c8c) status_idle_pane

0x2c8c,	// (0x000291f7) form_midp_field_time_pane_t1

0xc717,	// (0x00032c82) wait_anim_pane_g2_copy1

0x2c9a,	// (0x00029205) form_midp_field_time_pane_t2

0x0001,

0x077f,	// (0x00026cea) aid_navinavi_width_2_pane

0xf80a,	// (0x00035d75) form_midp_field_time_pane_t

0xc721,	// (0x00032c8c) input_focus_pane_cp052

0xc721,	// (0x00032c8c) bg_input_focus_pane_cp040

0x2c4c,	// (0x000291b7) form_midp_gauge_slider_pane_t1

0x2c5a,	// (0x000291c5) form_midp_gauge_slider_pane_t2

0xb1d4,	// (0x0003173f) form_midp_gauge_slider_pane_t3

0xb1e2,	// (0x0003174d) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x00035d6c) form_midp_gauge_slider_pane_t

0x2c84,	// (0x000291ef) form_midp_slider_pane

0xc77d,	// (0x00032ce8) bg_input_focus_pane_cp041_ParamLimits

0xc77d,	// (0x00032ce8) bg_input_focus_pane_cp041

0x2c19,	// (0x00029184) form_midp_gauge_wait_pane_t1_ParamLimits

0x2c19,	// (0x00029184) form_midp_gauge_wait_pane_t1

0x2c2b,	// (0x00029196) form_midp_gauge_wait_pane_t2_ParamLimits

0x2c2b,	// (0x00029196) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x00035d67) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x00035d67) form_midp_gauge_wait_pane_t

0x2c3d,	// (0x000291a8) form_midp_wait_pane_ParamLimits

0x2c3d,	// (0x000291a8) form_midp_wait_pane

0xb19e,	// (0x00031709) form_midp_image_pane_g1

0xb1a7,	// (0x00031712) form_midp_image_pane_t1

0xb1b6,	// (0x00031721) form_midp_image_pane_t2

0xb1c5,	// (0x00031730) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x00035d60) form_midp_image_pane_t

0x2bda,	// (0x00029145) list_single_midp_pane_g1

0xecae,	// (0x00035219) list_single_midp_pane_t1

0xb189,	// (0x000316f4) list_midp_form_item_pane_ParamLimits

0xb189,	// (0x000316f4) list_midp_form_item_pane

0x0727,	// (0x00026c92) list_midp_form_item_pane_t1

0x0736,	// (0x00026ca1) midp_ticker_pane_g1

0x0742,	// (0x00026cad) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x00035cb4) midp_ticker_pane_g

0x074e,	// (0x00026cb9) midp_ticker_pane_t1

0x3f8f,	// (0x0002a4fa) midp_editing_number_pane_t1

0x3f6d,	// (0x0002a4d8) midp_editing_number_pane

0x3f7c,	// (0x0002a4e7) midp_ticker_pane

0x3d32,	// (0x0002a29d) ai_message_heading_pane

0xc721,	// (0x00032c8c) bg_popup_window_pane_cp14

0x3d3a,	// (0x0002a2a5) listscroll_ai_message_pane

0x3cbc,	// (0x0002a227) ai_message_heading_pane_g1_ParamLimits

0x3cbc,	// (0x0002a227) ai_message_heading_pane_g1

0xb779,	// (0x00031ce4) ai_message_heading_pane_g2_ParamLimits

0xb779,	// (0x00031ce4) ai_message_heading_pane_g2

0x3cd4,	// (0x0002a23f) ai_message_heading_pane_g3_ParamLimits

0x3cd4,	// (0x0002a23f) ai_message_heading_pane_g3

0x3ce0,	// (0x0002a24b) ai_message_heading_pane_g4_ParamLimits

0x3ce0,	// (0x0002a24b) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x00035ea1) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x00035ea1) ai_message_heading_pane_g

0xb785,	// (0x00031cf0) ai_message_heading_pane_t1_ParamLimits

0xb785,	// (0x00031cf0) ai_message_heading_pane_t1

0xb79f,	// (0x00031d0a) ai_message_heading_pane_t2_ParamLimits

0xb79f,	// (0x00031d0a) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x00035eaa) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x00035eaa) ai_message_heading_pane_t

0x3d18,	// (0x0002a283) bg_popup_heading_pane_cp1_ParamLimits

0x3d18,	// (0x0002a283) bg_popup_heading_pane_cp1

0x3caa,	// (0x0002a215) list_ai_message_pane_ParamLimits

0x3caa,	// (0x0002a215) list_ai_message_pane

0xcc4e,	// (0x000331b9) scroll_pane_cp10

0x3c46,	// (0x0002a1b1) list_ai_message_pane_g1

0x3c4e,	// (0x0002a1b9) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x00035e7e) list_ai_message_pane_g

0x3c56,	// (0x0002a1c1) list_ai_message_pane_t1_ParamLimits

0x3c56,	// (0x0002a1c1) list_ai_message_pane_t1

0x3c6b,	// (0x0002a1d6) list_ai_message_pane_t2_ParamLimits

0x3c6b,	// (0x0002a1d6) list_ai_message_pane_t2

0x3c80,	// (0x0002a1eb) list_ai_message_pane_t3_ParamLimits

0x3c80,	// (0x0002a1eb) list_ai_message_pane_t3

0x3c95,	// (0x0002a200) list_ai_message_pane_t4_ParamLimits

0x3c95,	// (0x0002a200) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x00035e83) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x00035e83) list_ai_message_pane_t

0xb705,	// (0x00031c70) cell_ai_soft_ind_pane_ParamLimits

0xb705,	// (0x00031c70) cell_ai_soft_ind_pane

0x0760,	// (0x00026ccb) cell_ai_soft_ind_pane_g1_ParamLimits

0x0760,	// (0x00026ccb) cell_ai_soft_ind_pane_g1

0xc721,	// (0x00032c8c) grid_highlight_cp1

0x076d,	// (0x00026cd8) text_secondary_cp56_ParamLimits

0x076d,	// (0x00026cd8) text_secondary_cp56

0x3c06,	// (0x0002a171) example_general_pane_ParamLimits

0x3c06,	// (0x0002a171) example_general_pane

0x3c12,	// (0x0002a17d) example_parent_pane_g1_ParamLimits

0x3c12,	// (0x0002a17d) example_parent_pane_g1

0x3c1e,	// (0x0002a189) example_parent_pane_t1_ParamLimits

0x3c1e,	// (0x0002a189) example_parent_pane_t1

0xa90d,	// (0x00030e78) popup_preview_text_window_ParamLimits

0xa90d,	// (0x00030e78) popup_preview_text_window

0x0586,	// (0x00026af1) list_single_pane_cp2_g4

0xc94f,	// (0x00032eba) bg_popup_preview_window_pane_ParamLimits

0xc94f,	// (0x00032eba) bg_popup_preview_window_pane

0xb667,	// (0x00031bd2) popup_preview_text_window_t1_ParamLimits

0xb667,	// (0x00031bd2) popup_preview_text_window_t1

0x397e,	// (0x00029ee9) popup_preview_text_window_t2_ParamLimits

0x397e,	// (0x00029ee9) popup_preview_text_window_t2

0x39c7,	// (0x00029f32) popup_preview_text_window_t3_ParamLimits

0x39c7,	// (0x00029f32) popup_preview_text_window_t3

0x3a0c,	// (0x00029f77) popup_preview_text_window_t4_ParamLimits

0x3a0c,	// (0x00029f77) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x00035e52) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x00035e52) popup_preview_text_window_t

0x3a8a,	// (0x00029ff5) scroll_pane_cp11

0x1686,	// (0x00027bf1) bg_popup_preview_window_pane_g1

0xb627,	// (0x00031b92) bg_popup_preview_window_pane_g2

0xb62f,	// (0x00031b9a) bg_popup_preview_window_pane_g3

0xb637,	// (0x00031ba2) bg_popup_preview_window_pane_g4

0xb63f,	// (0x00031baa) bg_popup_preview_window_pane_g5

0xb647,	// (0x00031bb2) bg_popup_preview_window_pane_g6

0xb64f,	// (0x00031bba) bg_popup_preview_window_pane_g7

0xb657,	// (0x00031bc2) bg_popup_preview_window_pane_g8

0xe9a8,	// (0x00034f13) aid_popup_width_pane

0xa889,	// (0x00030df4) popup_midp_note_alarm_window_ParamLimits

0xa889,	// (0x00030df4) popup_midp_note_alarm_window

0xcb23,	// (0x0003308e) data_form_pane_ParamLimits

0x90a0,	// (0x0002f60b) form_field_data_pane_g1

0x90aa,	// (0x0002f615) form_field_data_pane_t1_ParamLimits

0xcb2f,	// (0x0003309a) input_focus_pane_ParamLimits

0x90c4,	// (0x0002f62f) data_form_wide_pane_ParamLimits

0x90d5,	// (0x0002f640) form_field_data_wide_pane_g1

0x90e1,	// (0x0002f64c) form_field_data_wide_pane_t1_ParamLimits

0xca23,	// (0x00032f8e) input_focus_pane_cp6_ParamLimits

0x9dbb,	// (0x00030326) input_popup_find_pane_g1_ParamLimits

0x9dbb,	// (0x00030326) input_popup_find_pane_g1

0xf4a3,	// (0x00035a0e) aid_navi_side_left_pane

0xf4b8,	// (0x00035a23) aid_navi_side_right_pane

0x3349,	// (0x000298b4) bg_popup_window_pane_cp30_ParamLimits

0x3349,	// (0x000298b4) bg_popup_window_pane_cp30

0x33c3,	// (0x0002992e) popup_midp_note_alarm_window_g1_ParamLimits

0x33c3,	// (0x0002992e) popup_midp_note_alarm_window_g1

0x33f3,	// (0x0002995e) popup_midp_note_alarm_window_t1_ParamLimits

0x33f3,	// (0x0002995e) popup_midp_note_alarm_window_t1

0xb468,	// (0x000319d3) popup_midp_note_alarm_window_t2_ParamLimits

0xb468,	// (0x000319d3) popup_midp_note_alarm_window_t2

0xb516,	// (0x00031a81) popup_midp_note_alarm_window_t3_ParamLimits

0xb516,	// (0x00031a81) popup_midp_note_alarm_window_t3

0xb53e,	// (0x00031aa9) popup_midp_note_alarm_window_t4_ParamLimits

0xb53e,	// (0x00031aa9) popup_midp_note_alarm_window_t4

0x358a,	// (0x00029af5) popup_midp_note_alarm_window_t5_ParamLimits

0x358a,	// (0x00029af5) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x00035def) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x00035def) popup_midp_note_alarm_window_t

0x3636,	// (0x00029ba1) wait_bar_pane_cp1_ParamLimits

0x3636,	// (0x00029ba1) wait_bar_pane_cp1

0xc721,	// (0x00032c8c) wait_anim_pane_copy1

0xc721,	// (0x00032c8c) wait_border_pane_copy1

0x303f,	// (0x000295aa) wait_border_pane_g1_copy1

0x90fb,	// (0x0002f666) form_field_popup_pane_g1

0x9103,	// (0x0002f66e) form_field_popup_pane_t1_ParamLimits

0xcb2f,	// (0x0003309a) input_focus_pane_cp7_ParamLimits

0xcb5d,	// (0x000330c8) list_form_pane_ParamLimits

0x911d,	// (0x0002f688) form_field_popup_wide_pane_g1

0x9125,	// (0x0002f690) form_field_popup_wide_pane_t1_ParamLimits

0xcb2f,	// (0x0003309a) input_focus_pane_cp8_ParamLimits

0xcb69,	// (0x000330d4) list_form_wide_pane_ParamLimits

0xbaf3,	// (0x0003205e) aid_size_cell_graphic_pane

0x91b1,	// (0x0002f71c) data_form_pane_t1_ParamLimits

0x92e3,	// (0x0002f84e) data_form_wide_pane_t1_ParamLimits

0xad50,	// (0x000312bb) bg_status_flat_pane

0x976c,	// (0x0002fcd7) title_pane_t1_ParamLimits

0xc737,	// (0x00032ca2) title_pane_t2_ParamLimits

0xc75d,	// (0x00032cc8) title_pane_t3_ParamLimits

0xf557,	// (0x00035ac2) title_pane_t_ParamLimits

0xcef7,	// (0x00033462) level_1_signal_ParamLimits

0xcf04,	// (0x0003346f) level_2_signal_ParamLimits

0xcf11,	// (0x0003347c) level_3_signal_ParamLimits

0xcf1e,	// (0x00033489) level_4_signal_ParamLimits

0xcf2b,	// (0x00033496) level_5_signal_ParamLimits

0xcf38,	// (0x000334a3) level_6_signal_ParamLimits

0xcf45,	// (0x000334b0) level_7_signal_ParamLimits

0xcef7,	// (0x00033462) level_1_battery_ParamLimits

0xcf04,	// (0x0003346f) level_2_battery_ParamLimits

0xcf11,	// (0x0003347c) level_3_battery_ParamLimits

0xcf1e,	// (0x00033489) level_4_battery_ParamLimits

0xcf2b,	// (0x00033496) level_5_battery_ParamLimits

0xcf38,	// (0x000334a3) level_6_battery_ParamLimits

0xcf45,	// (0x000334b0) level_7_battery_ParamLimits

0x324e,	// (0x000297b9) bg_status_flat_pane_g1

0x3256,	// (0x000297c1) bg_status_flat_pane_g2

0x325e,	// (0x000297c9) bg_status_flat_pane_g3

0x3266,	// (0x000297d1) bg_status_flat_pane_g4

0x326e,	// (0x000297d9) bg_status_flat_pane_g5

0x3276,	// (0x000297e1) bg_status_flat_pane_g6

0x327e,	// (0x000297e9) bg_status_flat_pane_g7

0x9800,	// (0x0002fd6b) tabs_3_active_pane_t1_ParamLimits

0x9800,	// (0x0002fd6b) tabs_3_passive_pane_t1_ParamLimits

0x981a,	// (0x0002fd85) tabs_4_active_pane_t1_ParamLimits

0x981a,	// (0x0002fd85) tabs_4_1_passive_pane_t1_ParamLimits

0x9dfa,	// (0x00030365) tabs_2_active_pane_t1_ParamLimits

0x9dfa,	// (0x00030365) tabs_2_passive_pane_t1_ParamLimits

0xc77d,	// (0x00032ce8) bg_active_tab_pane_cp4_ParamLimits

0x9e0c,	// (0x00030377) tabs_2_long_active_pane_t1_ParamLimits

0x0b8c,	// (0x000270f7) bg_passive_tab_pane_cp4_ParamLimits

0x171b,	// (0x00027c86) list_single_midp_graphic_pane_t1_ParamLimits

0xc77d,	// (0x00032ce8) bg_active_tab_pane_cp5_ParamLimits

0x9e1f,	// (0x0003038a) tabs_3_long_active_pane_t1_ParamLimits

0x0b8c,	// (0x000270f7) bg_passive_tab_pane_cp5_ParamLimits

0x171b,	// (0x00027c86) list_single_midp_graphic_pane_t1

0xad50,	// (0x000312bb) bg_status_flat_pane_ParamLimits

0x12e9,	// (0x00027854) indicator_pane_cp2_ParamLimits

0x12e9,	// (0x00027854) indicator_pane_cp2

0xaece,	// (0x00031439) navi_pane_srt_ParamLimits

0xaece,	// (0x00031439) navi_pane_srt

0x1438,	// (0x000279a3) popup_clock_digital_analogue_window_cp1

0xc7c1,	// (0x00032d2c) indicator_pane_t1

0x0655,	// (0x00026bc0) copy_highlight_pane

0x0655,	// (0x00026bc0) cursor_graphics_pane

0x0655,	// (0x00026bc0) graphic_within_text_pane

0x0655,	// (0x00026bc0) link_highlight_pane

0x3a4d,	// (0x00029fb8) popup_preview_text_window_t5_ParamLimits

0x3a4d,	// (0x00029fb8) popup_preview_text_window_t5

0x0787,	// (0x00026cf2) cursor_digital_pane

0x0787,	// (0x00026cf2) cursor_primary_pane

0x0798,	// (0x00026d03) cursor_primary_small_pane

0x07a0,	// (0x00026d0b) cursor_secondary_pane

0x07a8,	// (0x00026d13) cursor_title_pane

0x0787,	// (0x00026cf2) link_highlight_digital_pane

0x078f,	// (0x00026cfa) link_highlight_primary_pane

0x0798,	// (0x00026d03) link_highlight_primary_small_pane

0x07a0,	// (0x00026d0b) link_highlight_secondary_pane

0x07a8,	// (0x00026d13) link_highlight_title_pane

0x0787,	// (0x00026cf2) copy_highlight_digital_pane

0x0787,	// (0x00026cf2) copy_highlight_primary_pane

0x0798,	// (0x00026d03) copy_highlight_primary_small_pane

0x07a0,	// (0x00026d0b) copy_highlight_secondary_pane

0x07a8,	// (0x00026d13) copy_highlight_title_pane

0x07a0,	// (0x00026d0b) graphic_text_digital_pane

0x32ec,	// (0x00029857) graphic_text_primary_pane

0x32f5,	// (0x00029860) graphic_text_primary_small_pane

0x0798,	// (0x00026d03) graphic_text_secondary_pane

0x0787,	// (0x00026cf2) graphic_text_title_pane

0xa270,	// (0x000307db) cursor_primary_pane_g1

0x32de,	// (0x00029849) cursor_text_primary_t1

0xb45e,	// (0x000319c9) cursor_primary_small_pane_g1

0x32d0,	// (0x0002983b) cursor_text_primary_small_t1

0xb454,	// (0x000319bf) cursor_primary_small_pane_g1_copy1

0x32b8,	// (0x00029823) cursor_text_primary_small_t1_copy1

0x3296,	// (0x00029801) cursor_text_title_t1

0xb44a,	// (0x000319b5) cursor_title_pane_g1

0xa270,	// (0x000307db) cursor_digital_pane_g1

0x07ba,	// (0x00026d25) cursor_text_digital_t1

0x07c8,	// (0x00026d33) link_highlight_primary_pane_g1

0x323f,	// (0x000297aa) link_highlight_primary_pane_t1

0x07c8,	// (0x00026d33) link_highlight_primary_small_pane_g1

0x07d0,	// (0x00026d3b) link_highlight_primary_small_pane_t1

0x07c8,	// (0x00026d33) link_highlight_secondary_pane_g1

0x07df,	// (0x00026d4a) link_highlight_secondary_pane_t1

0x31a4,	// (0x0002970f) link_highlight_title_pane_g1

0x31bb,	// (0x00029726) link_highlight_title_pane_t1

0x31a4,	// (0x0002970f) link_highlight_digital_pane_g1

0x31ac,	// (0x00029717) link_highlight_digital_pane_t1

0x305e,	// (0x000295c9) copy_highlight_primary_pane_g1

0x3084,	// (0x000295ef) copy_highlight_primary_pane_t1

0x305e,	// (0x000295c9) copy_highlight_primary_small_pane_g1

0x3075,	// (0x000295e0) copy_highlight_primary_small_pane_t1

0x07ee,	// (0x00026d59) copy_highlight_secondary_pane_g1

0x07f6,	// (0x00026d61) copy_highlight_secondary_pane_t1

0x305e,	// (0x000295c9) copy_highlight_title_pane_g1

0x3066,	// (0x000295d1) copy_highlight_title_pane_t1

0x305e,	// (0x000295c9) copy_highlight_digital_pane_g1

0x42e7,	// (0x0002a852) copy_highlight_digital_pane_t1

0x423b,	// (0x0002a7a6) graphic_text_primary_pane_g1

0x42cb,	// (0x0002a836) graphic_text_primary_pane_t1

0x42d9,	// (0x0002a844) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x00035f1e) graphic_text_primary_pane_t

0x42a7,	// (0x0002a812) graphic_text_primary_small_pane_g1

0x42af,	// (0x0002a81a) graphic_text_primary_small_pane_t1

0x42bd,	// (0x0002a828) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x00035f19) graphic_text_primary_small_pane_t

0x4283,	// (0x0002a7ee) graphic_text_secondary_pane_g1

0x428b,	// (0x0002a7f6) graphic_text_secondary_pane_t1

0x4299,	// (0x0002a804) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x00035f14) graphic_text_secondary_pane_t

0x425f,	// (0x0002a7ca) graphic_text_title_pane_g1

0x4267,	// (0x0002a7d2) graphic_text_title_pane_t1

0x4275,	// (0x0002a7e0) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x00035f0f) graphic_text_title_pane_t

0x423b,	// (0x0002a7a6) graphic_text_digital_pane_g1

0x4243,	// (0x0002a7ae) graphic_text_digital_pane_t1

0x4251,	// (0x0002a7bc) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x00035f0a) graphic_text_digital_pane_t

0xc77d,	// (0x00032ce8) navi_icon_pane_srt_ParamLimits

0xc77d,	// (0x00032ce8) navi_icon_pane_srt

0xc721,	// (0x00032c8c) navi_midp_pane_srt

0xc721,	// (0x00032c8c) navi_navi_pane_srt

0xc77d,	// (0x00032ce8) navi_text_pane_srt_ParamLimits

0xc77d,	// (0x00032ce8) navi_text_pane_srt

0x4206,	// (0x0002a771) navi_navi_icon_text_pane_srt

0x420e,	// (0x0002a779) navi_navi_pane_srt_g1_ParamLimits

0x420e,	// (0x0002a779) navi_navi_pane_srt_g1

0x4220,	// (0x0002a78b) navi_navi_pane_srt_g2_ParamLimits

0x4220,	// (0x0002a78b) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x00035f05) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x00035f05) navi_navi_pane_srt_g

0x4232,	// (0x0002a79d) navi_navi_tabs_pane_srt

0x4206,	// (0x0002a771) navi_navi_text_pane_srt

0x4206,	// (0x0002a771) navi_navi_volume_pane_srt

0x41f7,	// (0x0002a762) navi_navi_text_pane_srt_t1

0x1ba2,	// (0x0002810d) navi_navi_volume_pane_srt_g1

0x1baa,	// (0x00028115) volume_small_pane_srt_ParamLimits

0x1baa,	// (0x00028115) volume_small_pane_srt

0x0805,	// (0x00026d70) volume_small_pane_srt_g1_ParamLimits

0x0805,	// (0x00026d70) volume_small_pane_srt_g1

0x0815,	// (0x00026d80) volume_small_pane_srt_g2_ParamLimits

0x0815,	// (0x00026d80) volume_small_pane_srt_g2

0x0826,	// (0x00026d91) volume_small_pane_srt_g3_ParamLimits

0x0826,	// (0x00026d91) volume_small_pane_srt_g3

0x0837,	// (0x00026da2) volume_small_pane_srt_g4_ParamLimits

0x0837,	// (0x00026da2) volume_small_pane_srt_g4

0x0848,	// (0x00026db3) volume_small_pane_srt_g5_ParamLimits

0x0848,	// (0x00026db3) volume_small_pane_srt_g5

0x0859,	// (0x00026dc4) volume_small_pane_srt_g6_ParamLimits

0x0859,	// (0x00026dc4) volume_small_pane_srt_g6

0x086a,	// (0x00026dd5) volume_small_pane_srt_g7_ParamLimits

0x086a,	// (0x00026dd5) volume_small_pane_srt_g7

0x087b,	// (0x00026de6) volume_small_pane_srt_g8_ParamLimits

0x087b,	// (0x00026de6) volume_small_pane_srt_g8

0x088c,	// (0x00026df7) volume_small_pane_srt_g9_ParamLimits

0x088c,	// (0x00026df7) volume_small_pane_srt_g9

0x089d,	// (0x00026e08) volume_small_pane_srt_g10_ParamLimits

0x089d,	// (0x00026e08) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x00035cb9) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x00035cb9) volume_small_pane_srt_g

0x9b01,	// (0x0003006c) query_popup_data_pane_cp2

0x41dd,	// (0x0002a748) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x41dd,	// (0x0002a748) navi_navi_icon_text_pane_srt_t1

0x32ec,	// (0x00029857) navi_tabs_2_long_pane_srt

0x32ec,	// (0x00029857) navi_tabs_2_pane_srt

0x32ec,	// (0x00029857) navi_tabs_3_long_pane_srt

0x32ec,	// (0x00029857) navi_tabs_3_pane_srt

0x32ec,	// (0x00029857) navi_tabs_4_pane_srt

0xbba0,	// (0x0003210b) tabs_2_active_pane_srt_ParamLimits

0xbba0,	// (0x0003210b) tabs_2_active_pane_srt

0xbbb0,	// (0x0003211b) tabs_2_passive_pane_srt_ParamLimits

0xbbb0,	// (0x0003211b) tabs_2_passive_pane_srt

0x1772,	// (0x00027cdd) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1772,	// (0x00027cdd) bg_passive_tab_pane_cp1_srt

0xbb70,	// (0x000320db) bg_passive_tab_pane_g1_cp1_srt

0xa0db,	// (0x00030646) bg_passive_tab_pane_g2_cp1_srt

0xbb79,	// (0x000320e4) bg_passive_tab_pane_g3_cp1_srt

0xc76f,	// (0x00032cda) bg_active_tab_pane_cp1_srt_ParamLimits

0xc76f,	// (0x00032cda) bg_active_tab_pane_cp1_srt

0xbb82,	// (0x000320ed) tabs_2_active_pane_srt_g1

0xbb8a,	// (0x000320f5) tabs_2_active_pane_srt_t1_ParamLimits

0xbb8a,	// (0x000320f5) tabs_2_active_pane_srt_t1

0xbb70,	// (0x000320db) bg_active_tab_pane_g1_cp1_srt

0xa0db,	// (0x00030646) bg_active_tab_pane_g2_cp1_srt

0xbb79,	// (0x000320e4) bg_active_tab_pane_g3_cp1_srt

0xbb3d,	// (0x000320a8) tabs_3_active_pane_srt_ParamLimits

0xbb3d,	// (0x000320a8) tabs_3_active_pane_srt

0xbb4e,	// (0x000320b9) tabs_3_passive_pane_cp_srt_ParamLimits

0xbb4e,	// (0x000320b9) tabs_3_passive_pane_cp_srt

0xbb5f,	// (0x000320ca) tabs_3_passive_pane_srt_ParamLimits

0xbb5f,	// (0x000320ca) tabs_3_passive_pane_srt

0x1772,	// (0x00027cdd) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1772,	// (0x00027cdd) bg_passive_tab_pane_cp2_srt

0xa27a,	// (0x000307e5) bg_passive_tab_pane_g1_cp2_srt

0xa0db,	// (0x00030646) bg_passive_tab_pane_g2_cp2_srt

0xa283,	// (0x000307ee) bg_passive_tab_pane_g3_cp2_srt

0xc76f,	// (0x00032cda) bg_active_tab_pane_cp2_srt_ParamLimits

0xc76f,	// (0x00032cda) bg_active_tab_pane_cp2_srt

0xbb1f,	// (0x0003208a) tabs_3_active_pane_srt_g1

0xbb27,	// (0x00032092) tabs_3_active_pane_srt_t1_ParamLimits

0xbb27,	// (0x00032092) tabs_3_active_pane_srt_t1

0xa27a,	// (0x000307e5) bg_active_tab_pane_g1_cp2_srt

0xa0db,	// (0x00030646) bg_active_tab_pane_g2_cp2_srt

0xa283,	// (0x000307ee) bg_active_tab_pane_g3_cp2_srt

0x1b07,	// (0x00028072) tabs_4_active_pane_srt_ParamLimits

0x1b07,	// (0x00028072) tabs_4_active_pane_srt

0x1b19,	// (0x00028084) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1b19,	// (0x00028084) tabs_4_passive_pane_cp2_srt

0x0b5c,	// (0x000270c7) aid_size_cell_toolbar

0x3dea,	// (0x0002a355) main_idle_act_pane_ParamLimits

0xa6cb,	// (0x00030c36) popup_large_graphic_colour_window_ParamLimits

0xabbf,	// (0x0003112a) popup_toolbar_window_ParamLimits

0xabbf,	// (0x0003112a) popup_toolbar_window

0xecbd,	// (0x00035228) list_single_graphic_2heading_pane_ParamLimits

0xecbd,	// (0x00035228) list_single_graphic_2heading_pane

0xcddf,	// (0x0003334a) aid_size_cell_apps_grid_lsc_pane

0xcdf1,	// (0x0003335c) aid_size_cell_apps_grid_prt_pane

0x0b8c,	// (0x000270f7) bg_wml_button_pane_cp1_ParamLimits

0x0b8c,	// (0x000270f7) bg_wml_button_pane_cp1

0xb1f0,	// (0x0003175b) form_midp_field_text_pane_t1_ParamLimits

0x1772,	// (0x00027cdd) input_focus_pane_cp050_ParamLimits

0x2d13,	// (0x0002927e) list_midp_form_text_pane_ParamLimits

0x2cb6,	// (0x00029221) input_focus_pane_cp051_ParamLimits

0x2cca,	// (0x00029235) list_midp_choice_pane_ParamLimits

0xb155,	// (0x000316c0) list_single_2graphic_pane_cp3_ParamLimits

0xb155,	// (0x000316c0) list_single_2graphic_pane_cp3

0xb169,	// (0x000316d4) list_single_midp_graphic_pane_ParamLimits

0xb169,	// (0x000316d4) list_single_midp_graphic_pane

0xebb0,	// (0x0003511b) list_single_graphic_2heading_pane_g1_ParamLimits

0xebb0,	// (0x0003511b) list_single_graphic_2heading_pane_g1

0xea77,	// (0x00034fe2) list_single_graphic_2heading_pane_g4_ParamLimits

0xea77,	// (0x00034fe2) list_single_graphic_2heading_pane_g4

0xea83,	// (0x00034fee) list_single_graphic_2heading_pane_g5_ParamLimits

0xea83,	// (0x00034fee) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x00035d0c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x00035d0c) list_single_graphic_2heading_pane_g

0xebbc,	// (0x00035127) list_single_graphic_2heading_pane_t1_ParamLimits

0xebbc,	// (0x00035127) list_single_graphic_2heading_pane_t1

0xebd0,	// (0x0003513b) list_single_graphic_2heading_pane_t2_ParamLimits

0xebd0,	// (0x0003513b) list_single_graphic_2heading_pane_t2

0xebea,	// (0x00035155) list_single_graphic_2heading_pane_t3_ParamLimits

0xebea,	// (0x00035155) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x00035d13) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x00035d13) list_single_graphic_2heading_pane_t

0x1594,	// (0x00027aff) bg_popup_sub_pane_cp2

0x15be,	// (0x00027b29) grid_toobar_pane

0x15fa,	// (0x00027b65) cell_toolbar_pane_ParamLimits

0x15fa,	// (0x00027b65) cell_toolbar_pane

0x162a,	// (0x00027b95) cell_toolbar_pane_g1_ParamLimits

0x162a,	// (0x00027b95) cell_toolbar_pane_g1

0xb06d,	// (0x000315d8) cell_toolbar_pane_g2_ParamLimits

0xb06d,	// (0x000315d8) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x00035d1a) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x00035d1a) cell_toolbar_pane_g

0x1660,	// (0x00027bcb) grid_highlight_pane_cp2_ParamLimits

0x1660,	// (0x00027bcb) grid_highlight_pane_cp2

0x167a,	// (0x00027be5) toolbar_button_pane

0x1686,	// (0x00027bf1) toolbar_button_pane_g1

0x168e,	// (0x00027bf9) toolbar_button_pane_g2

0x1696,	// (0x00027c01) toolbar_button_pane_g3

0x169e,	// (0x00027c09) toolbar_button_pane_g4

0x16a6,	// (0x00027c11) toolbar_button_pane_g5

0x16ae,	// (0x00027c19) toolbar_button_pane_g6

0x16b6,	// (0x00027c21) toolbar_button_pane_g7

0x16be,	// (0x00027c29) toolbar_button_pane_g8

0x16c6,	// (0x00027c31) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x00035d1f) toolbar_button_pane_g

0x16d6,	// (0x00027c41) list_single_2graphic_pane_g1_cp3_ParamLimits

0x16d6,	// (0x00027c41) list_single_2graphic_pane_g1_cp3

0xb081,	// (0x000315ec) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb081,	// (0x000315ec) list_single_2graphic_pane_g2_cp3

0x0485,	// (0x000269f0) list_single_2graphic_pane_g3_cp3

0x16f3,	// (0x00027c5e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x16f3,	// (0x00027c5e) list_single_2graphic_pane_g4_cp3

0xb092,	// (0x000315fd) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb092,	// (0x000315fd) list_single_2graphic_pane_t1_cp3

0xd1ac,	// (0x00033717) list_single_midp_graphic_pane_g2_ParamLimits

0xd1ac,	// (0x00033717) list_single_midp_graphic_pane_g2

0x0b64,	// (0x000270cf) aid_zoom_text_primary

0xeb84,	// (0x000350ef) aid_zoom_text_secondary

0xa2da,	// (0x00030845) status_small_pane_g7_ParamLimits

0xa2da,	// (0x00030845) status_small_pane_g7

0xa2fd,	// (0x00030868) status_small_pane_t1_ParamLimits

0x9748,	// (0x0002fcb3) title_pane_g2

0x0003,

0xf54e,	// (0x00035ab9) title_pane_g

0x9b5b,	// (0x000300c6) aid_size_cell_colour_1_pane_ParamLimits

0x9b5b,	// (0x000300c6) aid_size_cell_colour_1_pane

0x9b6f,	// (0x000300da) aid_size_cell_colour_2_pane_ParamLimits

0x9b6f,	// (0x000300da) aid_size_cell_colour_2_pane

0x9b83,	// (0x000300ee) aid_size_cell_colour_3_pane_ParamLimits

0x9b83,	// (0x000300ee) aid_size_cell_colour_3_pane

0x9b97,	// (0x00030102) aid_size_cell_colour_4_pane_ParamLimits

0x9b97,	// (0x00030102) aid_size_cell_colour_4_pane

0xf3e0,	// (0x0003594b) title_pane_stacon_g1_ParamLimits

0xf3e0,	// (0x0003594b) title_pane_stacon_g1

0x30db,	// (0x00029646) popup_note_wait_window_g3_ParamLimits

0x30db,	// (0x00029646) popup_note_wait_window_g3

0x3151,	// (0x000296bc) popup_note_wait_window_t5_ParamLimits

0x3151,	// (0x000296bc) popup_note_wait_window_t5

0xc721,	// (0x00032c8c) main_feb_china_hwr_fs_writing_pane

0xa54d,	// (0x00030ab8) popup_feb_china_hwr_fs_window_ParamLimits

0xa54d,	// (0x00030ab8) popup_feb_china_hwr_fs_window

0xb0ae,	// (0x00031619) aid_size_cell_hwr_fs_ParamLimits

0xb0ae,	// (0x00031619) aid_size_cell_hwr_fs

0x1772,	// (0x00027cdd) bg_popup_sub_pane_cp3_ParamLimits

0x1772,	// (0x00027cdd) bg_popup_sub_pane_cp3

0xb0c3,	// (0x0003162e) grid_hwr_fs_pane_ParamLimits

0xb0c3,	// (0x0003162e) grid_hwr_fs_pane

0x1796,	// (0x00027d01) linegrid_hwr_fs_pane_ParamLimits

0x1796,	// (0x00027d01) linegrid_hwr_fs_pane

0xb0db,	// (0x00031646) cell_hwr_fs_pane_ParamLimits

0xb0db,	// (0x00031646) cell_hwr_fs_pane

0x17c8,	// (0x00027d33) linegrid_hwr_fs_pane_g1_ParamLimits

0x17c8,	// (0x00027d33) linegrid_hwr_fs_pane_g1

0xb101,	// (0x0003166c) linegrid_hwr_fs_pane_g2_ParamLimits

0xb101,	// (0x0003166c) linegrid_hwr_fs_pane_g2

0x17e6,	// (0x00027d51) linegrid_hwr_fs_pane_g3_ParamLimits

0x17e6,	// (0x00027d51) linegrid_hwr_fs_pane_g3

0xb113,	// (0x0003167e) linegrid_hwr_fs_pane_g4_ParamLimits

0xb113,	// (0x0003167e) linegrid_hwr_fs_pane_g4

0x180c,	// (0x00027d77) linegrid_hwr_fs_pane_g5_ParamLimits

0x180c,	// (0x00027d77) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x00035d45) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x00035d45) linegrid_hwr_fs_pane_g

0x1822,	// (0x00027d8d) cell_hwr_fs_pane_g1_ParamLimits

0x1822,	// (0x00027d8d) cell_hwr_fs_pane_g1

0x14ce,	// (0x00027a39) cell_hwr_fs_pane_g2_ParamLimits

0x14ce,	// (0x00027a39) cell_hwr_fs_pane_g2

0xb12d,	// (0x00031698) cell_hwr_fs_pane_g3_ParamLimits

0xb12d,	// (0x00031698) cell_hwr_fs_pane_g3

0xb13a,	// (0x000316a5) cell_hwr_fs_pane_g4_ParamLimits

0xb13a,	// (0x000316a5) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x00035d50) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x00035d50) cell_hwr_fs_pane_g

0xb147,	// (0x000316b2) cell_hwr_fs_pane_t1

0xc721,	// (0x00032c8c) grid_highlight_pane_cp6

0xc721,	// (0x00032c8c) main_idle_act2_pane

0xcc35,	// (0x000331a0) aid_inside_area_popup_secondary

0xb57d,	// (0x00031ae8) aid_inside_area_window_primary_ParamLimits

0xb57d,	// (0x00031ae8) aid_inside_area_window_primary

0xbbc8,	// (0x00032133) ai2_news_ticker_pane

0x42fe,	// (0x0002a869) aid_size_cell_ai1_link_ParamLimits

0x42fe,	// (0x0002a869) aid_size_cell_ai1_link

0xbbd0,	// (0x0003213b) popup_ai2_data_window_ParamLimits

0xbbd0,	// (0x0003213b) popup_ai2_data_window

0x432e,	// (0x0002a899) popup_ai2_link_window_ParamLimits

0x432e,	// (0x0002a899) popup_ai2_link_window

0x1772,	// (0x00027cdd) bg_popup_sub_pane_cp4_ParamLimits

0x1772,	// (0x00027cdd) bg_popup_sub_pane_cp4

0x4342,	// (0x0002a8ad) grid_ai2_link_pane_ParamLimits

0x4342,	// (0x0002a8ad) grid_ai2_link_pane

0x4359,	// (0x0002a8c4) popup_ai2_link_window_g1_ParamLimits

0x4359,	// (0x0002a8c4) popup_ai2_link_window_g1

0x4365,	// (0x0002a8d0) popup_ai2_link_window_g2_ParamLimits

0x4365,	// (0x0002a8d0) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x00035f23) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x00035f23) popup_ai2_link_window_g

0x4374,	// (0x0002a8df) ai2_mp_button_pane

0x437c,	// (0x0002a8e7) ai2_mp_volume_pane

0x2cb6,	// (0x00029221) bg_popup_sub_pane_cp5_ParamLimits

0x2cb6,	// (0x00029221) bg_popup_sub_pane_cp5

0x4384,	// (0x0002a8ef) heading_ai2_gene_pane_ParamLimits

0x4384,	// (0x0002a8ef) heading_ai2_gene_pane

0x4390,	// (0x0002a8fb) list_ai2_gene_pane_ParamLimits

0x4390,	// (0x0002a8fb) list_ai2_gene_pane

0x43d8,	// (0x0002a943) cell_ai2_link_pane_ParamLimits

0x43d8,	// (0x0002a943) cell_ai2_link_pane

0x43ee,	// (0x0002a959) cell_ai2_link_pane_g1

0xc721,	// (0x00032c8c) grid_highlight_pane_cp7

0x1bbf,	// (0x0002812a) ai2_mp_volume_pane_g1

0x44be,	// (0x0002aa29) ai2_mp_volume_pane_g2

0x4433,	// (0x0002a99e) list_ai2_gene_pane_t1

0x44c6,	// (0x0002aa31) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x00035f3c) ai2_mp_volume_pane_g

0xbbe6,	// (0x00032151) volume_small_pane_cp3

0x44ce,	// (0x0002aa39) aid_size_cell_ai2_button

0x44d6,	// (0x0002aa41) grid_ai2_button_pane

0x44df,	// (0x0002aa4a) cell_ai2_button_pane_ParamLimits

0x44df,	// (0x0002aa4a) cell_ai2_button_pane

0xc717,	// (0x00032c82) cell_ai2_button_pane_g1

0xc721,	// (0x00032c8c) grid_highlight_pane_cp8

0x447e,	// (0x0002a9e9) ai2_gene_pane_t1_ParamLimits

0x447e,	// (0x0002a9e9) ai2_gene_pane_t1

0xa4cb,	// (0x00030a36) aid_height_parent_landscape

0xb88f,	// (0x00031dfa) aid_height_set_list

0x3dea,	// (0x0002a355) aid_size_parent

0xbaf3,	// (0x0003205e) aid_size_cell_graphic_pane_ParamLimits

0x43a0,	// (0x0002a90b) popup_ai2_data_window_g1_ParamLimits

0x43a0,	// (0x0002a90b) popup_ai2_data_window_g1

0x43ac,	// (0x0002a917) ai2_news_ticker_pane_g1

0x43b4,	// (0x0002a91f) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x00035f28) ai2_news_ticker_pane_g

0x43bc,	// (0x0002a927) ai2_news_ticker_pane_t1

0x43ca,	// (0x0002a935) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x00035f2d) ai2_news_ticker_pane_t

0x43f7,	// (0x0002a962) heading_ai2_gene_pane_g1

0x43ff,	// (0x0002a96a) heading_ai2_gene_pane_t1_ParamLimits

0x43ff,	// (0x0002a96a) heading_ai2_gene_pane_t1

0x4414,	// (0x0002a97f) list_highlight_pane_cp6

0x441c,	// (0x0002a987) ai2_gene_pane_ParamLimits

0x441c,	// (0x0002a987) ai2_gene_pane

0x4441,	// (0x0002a9ac) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x00035f32) list_ai2_gene_pane_t

0x444f,	// (0x0002a9ba) list_highlight_pane_cp8_ParamLimits

0x444f,	// (0x0002a9ba) list_highlight_pane_cp8

0x4460,	// (0x0002a9cb) ai2_gene_pane_g1_ParamLimits

0x4460,	// (0x0002a9cb) ai2_gene_pane_g1

0x4472,	// (0x0002a9dd) ai2_gene_pane_g2_ParamLimits

0x4472,	// (0x0002a9dd) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x00035f37) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x00035f37) ai2_gene_pane_g

0xcace,	// (0x00033039) scroll_pane_cp12

0xa488,	// (0x000309f3) control_pane_t3_ParamLimits

0xa488,	// (0x000309f3) control_pane_t3

0xa2ee,	// (0x00030859) status_small_pane_g8_ParamLimits

0xa2ee,	// (0x00030859) status_small_pane_g8

0xa610,	// (0x00030b7b) popup_find_window_ParamLimits

0xa8c3,	// (0x00030e2e) popup_note_image_window_ParamLimits

0xea6b,	// (0x00034fd6) list_double2_graphic_pane_vc_g1_ParamLimits

0xea6b,	// (0x00034fd6) list_double2_graphic_pane_vc_g1

0xea77,	// (0x00034fe2) list_double2_graphic_pane_vc_g2_ParamLimits

0xea77,	// (0x00034fe2) list_double2_graphic_pane_vc_g2

0xea83,	// (0x00034fee) list_double2_graphic_pane_vc_g3_ParamLimits

0xea83,	// (0x00034fee) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00035b2c) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00035b2c) list_double2_graphic_pane_vc_g

0xea8f,	// (0x00034ffa) list_double2_graphic_pane_vc_t1_ParamLimits

0xea8f,	// (0x00034ffa) list_double2_graphic_pane_vc_t1

0xea77,	// (0x00034fe2) list_single_heading_pane_vc_g1_ParamLimits

0xea77,	// (0x00034fe2) list_single_heading_pane_vc_g1

0xea83,	// (0x00034fee) list_single_heading_pane_vc_g2_ParamLimits

0xea83,	// (0x00034fee) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035b33) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035b33) list_single_heading_pane_vc_g

0xec02,	// (0x0003516d) list_single_heading_pane_vc_t1_ParamLimits

0xec02,	// (0x0003516d) list_single_heading_pane_vc_t1

0xec18,	// (0x00035183) list_single_heading_pane_vc_t2_ParamLimits

0xec18,	// (0x00035183) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x00035d34) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x00035d34) list_single_heading_pane_vc_t

0xec2a,	// (0x00035195) list_setting_number_pane_vc_g1_ParamLimits

0xec2a,	// (0x00035195) list_setting_number_pane_vc_g1

0xec36,	// (0x000351a1) list_setting_number_pane_vc_g2_ParamLimits

0xec36,	// (0x000351a1) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x00035d39) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x00035d39) list_setting_number_pane_vc_g

0xec42,	// (0x000351ad) list_setting_number_pane_vc_t1_ParamLimits

0xec42,	// (0x000351ad) list_setting_number_pane_vc_t1

0xec56,	// (0x000351c1) list_setting_number_pane_vc_t2_ParamLimits

0xec56,	// (0x000351c1) list_setting_number_pane_vc_t2

0xec72,	// (0x000351dd) list_setting_number_pane_vc_t3_ParamLimits

0xec72,	// (0x000351dd) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x00035d3e) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x00035d3e) list_setting_number_pane_vc_t

0xec9e,	// (0x00035209) set_value_pane_vc_ParamLimits

0xec9e,	// (0x00035209) set_value_pane_vc

0xecbd,	// (0x00035228) list_double2_graphic_pane_vc_ParamLimits

0xecbd,	// (0x00035228) list_double2_graphic_pane_vc

0x3fba,	// (0x0002a525) list_double2_large_graphic_pane_vc_ParamLimits

0x3fba,	// (0x0002a525) list_double2_large_graphic_pane_vc

0xecbd,	// (0x00035228) list_double2_pane_vc_ParamLimits

0xecbd,	// (0x00035228) list_double2_pane_vc

0xecbd,	// (0x00035228) list_double_graphic_heading_pane_vc_ParamLimits

0xecbd,	// (0x00035228) list_double_graphic_heading_pane_vc

0xecbd,	// (0x00035228) list_double_graphic_pane_vc_ParamLimits

0xecbd,	// (0x00035228) list_double_graphic_pane_vc

0xecbd,	// (0x00035228) list_double_heading_pane_vc_ParamLimits

0xecbd,	// (0x00035228) list_double_heading_pane_vc

0x3fcc,	// (0x0002a537) list_double_large_graphic_pane_vc_ParamLimits

0x3fcc,	// (0x0002a537) list_double_large_graphic_pane_vc

0xecbd,	// (0x00035228) list_double_number_pane_vc_ParamLimits

0xecbd,	// (0x00035228) list_double_number_pane_vc

0xecbd,	// (0x00035228) list_double_pane_vc_ParamLimits

0xecbd,	// (0x00035228) list_double_pane_vc

0xecbd,	// (0x00035228) list_double_time_pane_vc_ParamLimits

0xecbd,	// (0x00035228) list_double_time_pane_vc

0xecbd,	// (0x00035228) list_setting_number_pane_vc_ParamLimits

0xecbd,	// (0x00035228) list_setting_number_pane_vc

0xecbd,	// (0x00035228) list_setting_pane_vc_ParamLimits

0xecbd,	// (0x00035228) list_setting_pane_vc

0xecbd,	// (0x00035228) list_single_graphic_heading_pane_vc_ParamLimits

0xecbd,	// (0x00035228) list_single_graphic_heading_pane_vc

0xecbd,	// (0x00035228) list_single_heading_pane_vc_ParamLimits

0xecbd,	// (0x00035228) list_single_heading_pane_vc

0xecbd,	// (0x00035228) list_single_number_heading_pane_vc_ParamLimits

0xecbd,	// (0x00035228) list_single_number_heading_pane_vc

0xeaf1,	// (0x0003505c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeaf1,	// (0x0003505c) list_double_graphic_heading_pane_vc_g1

0xea77,	// (0x00034fe2) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xea77,	// (0x00034fe2) list_double_graphic_heading_pane_vc_g2

0xea83,	// (0x00034fee) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xea83,	// (0x00034fee) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d8,	// (0x00035f43) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d8,	// (0x00035f43) list_double_graphic_heading_pane_vc_g

0xecd0,	// (0x0003523b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xecd0,	// (0x0003523b) list_double_graphic_heading_pane_vc_t1

0xece4,	// (0x0003524f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xece4,	// (0x0003524f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9df,	// (0x00035f4a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9df,	// (0x00035f4a) list_double_graphic_heading_pane_vc_t

0xec2a,	// (0x00035195) list_setting_pane_vc_g1_ParamLimits

0xec2a,	// (0x00035195) list_setting_pane_vc_g1

0xec36,	// (0x000351a1) list_setting_pane_vc_g2_ParamLimits

0xec36,	// (0x000351a1) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x00035d39) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x00035d39) list_setting_pane_vc_g

0xecfc,	// (0x00035267) list_setting_pane_vc_t1_ParamLimits

0xecfc,	// (0x00035267) list_setting_pane_vc_t1

0xed18,	// (0x00035283) list_setting_pane_vc_t2_ParamLimits

0xed18,	// (0x00035283) list_setting_pane_vc_t2

0x0001,

0xfa22,	// (0x00035f8d) list_setting_pane_vc_t_ParamLimits

0xfa22,	// (0x00035f8d) list_setting_pane_vc_t

0xec9e,	// (0x00035209) set_value_pane_cp_vc_ParamLimits

0xec9e,	// (0x00035209) set_value_pane_cp_vc

0xea77,	// (0x00034fe2) list_single_number_heading_pane_vc_g1_ParamLimits

0xea77,	// (0x00034fe2) list_single_number_heading_pane_vc_g1

0xea83,	// (0x00034fee) list_single_number_heading_pane_vc_g2_ParamLimits

0xea83,	// (0x00034fee) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035b33) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035b33) list_single_number_heading_pane_vc_g

0xed32,	// (0x0003529d) list_single_number_heading_pane_vc_t1_ParamLimits

0xed32,	// (0x0003529d) list_single_number_heading_pane_vc_t1

0xed48,	// (0x000352b3) list_single_number_heading_pane_vc_t2_ParamLimits

0xed48,	// (0x000352b3) list_single_number_heading_pane_vc_t2

0xed5a,	// (0x000352c5) list_single_number_heading_pane_vc_t3_ParamLimits

0xed5a,	// (0x000352c5) list_single_number_heading_pane_vc_t3

0x0002,

0xfa27,	// (0x00035f92) list_single_number_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x00035f92) list_single_number_heading_pane_vc_t

0xed6c,	// (0x000352d7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xed6c,	// (0x000352d7) list_single_graphic_heading_pane_vc_g1

0xea77,	// (0x00034fe2) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xea77,	// (0x00034fe2) list_single_graphic_heading_pane_vc_g4

0xea83,	// (0x00034fee) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xea83,	// (0x00034fee) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2e,	// (0x00035f99) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2e,	// (0x00035f99) list_single_graphic_heading_pane_vc_g

0xed78,	// (0x000352e3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xed78,	// (0x000352e3) list_single_graphic_heading_pane_vc_t1

0xed8e,	// (0x000352f9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xed8e,	// (0x000352f9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x00035fa0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x00035fa0) list_single_graphic_heading_pane_vc_t

0xea77,	// (0x00034fe2) list_double2_pane_vc_g1_ParamLimits

0xea77,	// (0x00034fe2) list_double2_pane_vc_g1

0xea83,	// (0x00034fee) list_double2_pane_vc_g2_ParamLimits

0xea83,	// (0x00034fee) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035b33) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035b33) list_double2_pane_vc_g

0xeda0,	// (0x0003530b) list_double2_pane_vc_t1_ParamLimits

0xeda0,	// (0x0003530b) list_double2_pane_vc_t1

0xeafd,	// (0x00035068) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xeafd,	// (0x00035068) list_double2_large_graphic_pane_vc_g1

0xeb09,	// (0x00035074) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xeb09,	// (0x00035074) list_double2_large_graphic_pane_vc_g2

0xeb15,	// (0x00035080) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeb15,	// (0x00035080) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00035b50) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00035b50) list_double2_large_graphic_pane_vc_g

0xeb21,	// (0x0003508c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xeb21,	// (0x0003508c) list_double2_large_graphic_pane_vc_t1

0xedb8,	// (0x00035323) list_double_time_pane_vc_g1_ParamLimits

0xedb8,	// (0x00035323) list_double_time_pane_vc_g1

0xedc4,	// (0x0003532f) list_double_time_pane_vc_g2_ParamLimits

0xedc4,	// (0x0003532f) list_double_time_pane_vc_g2

0x0001,

0xfa3a,	// (0x00035fa5) list_double_time_pane_vc_g_ParamLimits

0xfa3a,	// (0x00035fa5) list_double_time_pane_vc_g

0xedd0,	// (0x0003533b) list_double_time_pane_vc_t1_ParamLimits

0xedd0,	// (0x0003533b) list_double_time_pane_vc_t1

0xedf4,	// (0x0003535f) list_double_time_pane_vc_t2_ParamLimits

0xedf4,	// (0x0003535f) list_double_time_pane_vc_t2

0xee43,	// (0x000353ae) list_double_time_pane_vc_t3_ParamLimits

0xee43,	// (0x000353ae) list_double_time_pane_vc_t3

0xee55,	// (0x000353c0) list_double_time_pane_vc_t4_ParamLimits

0xee55,	// (0x000353c0) list_double_time_pane_vc_t4

0x0003,

0xfa3f,	// (0x00035faa) list_double_time_pane_vc_t_ParamLimits

0xfa3f,	// (0x00035faa) list_double_time_pane_vc_t

0xea77,	// (0x00034fe2) list_double_pane_vc_g1_ParamLimits

0xea77,	// (0x00034fe2) list_double_pane_vc_g1

0xea83,	// (0x00034fee) list_double_pane_vc_g2_ParamLimits

0xea83,	// (0x00034fee) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035b33) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035b33) list_double_pane_vc_g

0xee69,	// (0x000353d4) list_double_pane_vc_t1_ParamLimits

0xee69,	// (0x000353d4) list_double_pane_vc_t1

0xee7d,	// (0x000353e8) list_double_pane_vc_t2_ParamLimits

0xee7d,	// (0x000353e8) list_double_pane_vc_t2

0x0001,

0xfa48,	// (0x00035fb3) list_double_pane_vc_t_ParamLimits

0xfa48,	// (0x00035fb3) list_double_pane_vc_t

0xea77,	// (0x00034fe2) list_double_number_pane_vc_g1_ParamLimits

0xea77,	// (0x00034fe2) list_double_number_pane_vc_g1

0xea83,	// (0x00034fee) list_double_number_pane_vc_g2_ParamLimits

0xea83,	// (0x00034fee) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035b33) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035b33) list_double_number_pane_vc_g

0xee95,	// (0x00035400) list_double_number_pane_vc_t1_ParamLimits

0xee95,	// (0x00035400) list_double_number_pane_vc_t1

0xee69,	// (0x000353d4) list_double_number_pane_vc_t2_ParamLimits

0xee69,	// (0x000353d4) list_double_number_pane_vc_t2

0xeea7,	// (0x00035412) list_double_number_pane_vc_t3_ParamLimits

0xeea7,	// (0x00035412) list_double_number_pane_vc_t3

0x0002,

0xfa4d,	// (0x00035fb8) list_double_number_pane_vc_t_ParamLimits

0xfa4d,	// (0x00035fb8) list_double_number_pane_vc_t

0xeebf,	// (0x0003542a) list_double_large_graphic_pane_vc_g1_ParamLimits

0xeebf,	// (0x0003542a) list_double_large_graphic_pane_vc_g1

0xeee1,	// (0x0003544c) list_double_large_graphic_pane_vc_g2_ParamLimits

0xeee1,	// (0x0003544c) list_double_large_graphic_pane_vc_g2

0xeef5,	// (0x00035460) list_double_large_graphic_pane_vc_g3_ParamLimits

0xeef5,	// (0x00035460) list_double_large_graphic_pane_vc_g3

0xef04,	// (0x0003546f) list_double_large_graphic_pane_vc_g4_ParamLimits

0xef04,	// (0x0003546f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa54,	// (0x00035fbf) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x00035fbf) list_double_large_graphic_pane_vc_g

0xef10,	// (0x0003547b) list_double_large_graphic_pane_vc_t1_ParamLimits

0xef10,	// (0x0003547b) list_double_large_graphic_pane_vc_t1

0xef2c,	// (0x00035497) list_double_large_graphic_pane_vc_t2_ParamLimits

0xef2c,	// (0x00035497) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x00035fc8) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x00035fc8) list_double_large_graphic_pane_vc_t

0xea77,	// (0x00034fe2) list_double_heading_pane_vc_g1_ParamLimits

0xea77,	// (0x00034fe2) list_double_heading_pane_vc_g1

0xea83,	// (0x00034fee) list_double_heading_pane_vc_g2_ParamLimits

0xea83,	// (0x00034fee) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035b33) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035b33) list_double_heading_pane_vc_g

0xef4e,	// (0x000354b9) list_double_heading_pane_vc_t1_ParamLimits

0xef4e,	// (0x000354b9) list_double_heading_pane_vc_t1

0xef62,	// (0x000354cd) list_double_heading_pane_vc_t2_ParamLimits

0xef62,	// (0x000354cd) list_double_heading_pane_vc_t2

0x0001,

0xfa62,	// (0x00035fcd) list_double_heading_pane_vc_t_ParamLimits

0xfa62,	// (0x00035fcd) list_double_heading_pane_vc_t

0xef7a,	// (0x000354e5) list_double_graphic_pane_vc_g1_ParamLimits

0xef7a,	// (0x000354e5) list_double_graphic_pane_vc_g1

0xef92,	// (0x000354fd) list_double_graphic_pane_vc_g2_ParamLimits

0xef92,	// (0x000354fd) list_double_graphic_pane_vc_g2

0xea77,	// (0x00034fe2) list_double_graphic_pane_vc_g3_ParamLimits

0xea77,	// (0x00034fe2) list_double_graphic_pane_vc_g3

0x0003,

0xfa67,	// (0x00035fd2) list_double_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x00035fd2) list_double_graphic_pane_vc_g

0xefaf,	// (0x0003551a) list_double_graphic_pane_vc_t1_ParamLimits

0xefaf,	// (0x0003551a) list_double_graphic_pane_vc_t1

0xefce,	// (0x00035539) list_double_graphic_pane_vc_t2_ParamLimits

0xefce,	// (0x00035539) list_double_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x00035fdb) list_double_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x00035fdb) list_double_graphic_pane_vc_t

0xe9b4,	// (0x00034f1f) aid_size_cell_fastswap

0x950f,	// (0x0002fa7a) aid_size_cell_touch_ParamLimits

0x950f,	// (0x0002fa7a) aid_size_cell_touch

0xf385,	// (0x000358f0) popup_fast_swap_wide_window_ParamLimits

0xf385,	// (0x000358f0) popup_fast_swap_wide_window

0x96df,	// (0x0002fc4a) touch_pane_ParamLimits

0x96df,	// (0x0002fc4a) touch_pane

0xcb1b,	// (0x00033086) button_value_adjust_pane_cp2

0xeb58,	// (0x000350c3) button_value_adjust_pane_cp4

0xeb60,	// (0x000350cb) form_field_data_pane_cp2

0x9054,	// (0x0002f5bf) form_field_data_wide_pane_cp2

0xce16,	// (0x00033381) bg_scroll_pane_ParamLimits

0x9f21,	// (0x0003048c) scroll_handle_pane_ParamLimits

0xf539,	// (0x00035aa4) scroll_sc2_down_pane_ParamLimits

0xf539,	// (0x00035aa4) scroll_sc2_down_pane

0xce47,	// (0x000333b2) scroll_sc2_up_pane_ParamLimits

0xce47,	// (0x000333b2) scroll_sc2_up_pane

0xbd12,	// (0x0003227d) grid_wheel_folder_pane_g1_ParamLimits

0xbd12,	// (0x0003227d) grid_wheel_folder_pane_g1

0x0337,	// (0x000268a2) clock_nsta_pane_cp2_ParamLimits

0x0337,	// (0x000268a2) clock_nsta_pane_cp2

0xa1b4,	// (0x0003071f) listscroll_midp_pane_ParamLimits

0xa1c0,	// (0x0003072b) midp_canvas_pane

0x0b4a,	// (0x000270b5) nsta_clock_indic_pane

0x0b98,	// (0x00027103) listscroll_form_pane_vc

0x0ba8,	// (0x00027113) listscroll_set_pane_vc_ParamLimits

0x0ba8,	// (0x00027113) listscroll_set_pane_vc

0xad78,	// (0x000312e3) clock_nsta_pane

0xada2,	// (0x0003130d) indicator_nsta_pane

0x1594,	// (0x00027aff) bg_popup_sub_pane_cp2_ParamLimits

0x15a8,	// (0x00027b13) find_pane_cp2_ParamLimits

0x15a8,	// (0x00027b13) find_pane_cp2

0x15be,	// (0x00027b29) grid_toobar_pane_ParamLimits

0x1731,	// (0x00027c9c) list_form_gen_pane_vc_ParamLimits

0x1731,	// (0x00027c9c) list_form_gen_pane_vc

0x1747,	// (0x00027cb2) scroll_pane_cp8_vc_ParamLimits

0x1747,	// (0x00027cb2) scroll_pane_cp8_vc

0x1860,	// (0x00027dcb) data_form_wide_pane_vc_ParamLimits

0x1860,	// (0x00027dcb) data_form_wide_pane_vc

0x186c,	// (0x00027dd7) form_field_data_wide_pane_vc_g1

0x1874,	// (0x00027ddf) form_field_data_wide_pane_vc_t1_ParamLimits

0x1874,	// (0x00027ddf) form_field_data_wide_pane_vc_t1

0xcb2f,	// (0x0003309a) input_focus_pane_cp6_vc_ParamLimits

0xcb2f,	// (0x0003309a) input_focus_pane_cp6_vc

0x2e6a,	// (0x000293d5) list_midp_pane_ParamLimits

0x4183,	// (0x0002a6ee) scroll_pane_cp16_ParamLimits

0x4183,	// (0x0002a6ee) scroll_pane_cp16

0x2eb8,	// (0x00029423) button_value_adjust_pane_ParamLimits

0x2eb8,	// (0x00029423) button_value_adjust_pane

0xb8a0,	// (0x00031e0b) button_value_adjust_pane_cp6_ParamLimits

0xb8a0,	// (0x00031e0b) button_value_adjust_pane_cp6

0xb9ba,	// (0x00031f25) settings_code_pane_cp_ParamLimits

0xb9ba,	// (0x00031f25) settings_code_pane_cp

0xc717,	// (0x00032c82) cell_touch_pane_g1

0xc717,	// (0x00032c82) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x00035c5f) cell_touch_pane_g

0xbbef,	// (0x0003215a) cell_touch_pane_cp_ParamLimits

0xbbef,	// (0x0003215a) cell_touch_pane_cp

0xbc0b,	// (0x00032176) cell_touch_pane_ParamLimits

0xbc0b,	// (0x00032176) cell_touch_pane

0xc717,	// (0x00032c82) scroll_sc2_down_pane_g1

0xc717,	// (0x00032c82) scroll_sc2_up_pane_g1

0xc721,	// (0x00032c8c) bg_set_opt_pane_cp4_vc

0x4513,	// (0x0002aa7e) list_set_graphic_pane_vc_g1_ParamLimits

0x4513,	// (0x0002aa7e) list_set_graphic_pane_vc_g1

0x451f,	// (0x0002aa8a) list_set_graphic_pane_vc_g2_ParamLimits

0x451f,	// (0x0002aa8a) list_set_graphic_pane_vc_g2

0x0001,

0xf9e4,	// (0x00035f4f) list_set_graphic_pane_vc_g_ParamLimits

0xf9e4,	// (0x00035f4f) list_set_graphic_pane_vc_g

0x452b,	// (0x0002aa96) text_primary_small_cp13_vc_ParamLimits

0x452b,	// (0x0002aa96) text_primary_small_cp13_vc

0x4543,	// (0x0002aaae) list_set_graphic_pane_vc_ParamLimits

0x4543,	// (0x0002aaae) list_set_graphic_pane_vc

0xc721,	// (0x00032c8c) input_focus_pane_cp2_vc

0xc717,	// (0x00032c82) setting_code_pane_vc_g1

0xc794,	// (0x00032cff) setting_code_pane_vc_t1

0x4556,	// (0x0002aac1) set_text_pane_vc_t1_ParamLimits

0x4556,	// (0x0002aac1) set_text_pane_vc_t1

0xc721,	// (0x00032c8c) input_focus_pane_cp1_vc

0x4572,	// (0x0002aadd) list_set_text_pane_vc

0xc717,	// (0x00032c82) setting_text_pane_vc_g1

0xc721,	// (0x00032c8c) bg_set_opt_pane_cp2_vc

0xc78b,	// (0x00032cf6) setting_slider_graphic_pane_vc_g1

0x457c,	// (0x0002aae7) setting_slider_graphic_pane_vc_t1

0x458c,	// (0x0002aaf7) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e9,	// (0x00035f54) setting_slider_graphic_pane_vc_t

0x459c,	// (0x0002ab07) slider_set_pane_cp_vc

0x45a4,	// (0x0002ab0f) slider_set_pane_vc_g1

0x45ad,	// (0x0002ab18) slider_set_pane_vc_g2

0x0006,

0xf9ee,	// (0x00035f59) slider_set_pane_vc_g

0xcb87,	// (0x000330f2) set_opt_bg_pane_g1_copy1

0xcb8f,	// (0x000330fa) set_opt_bg_pane_g2_copy1

0x45d9,	// (0x0002ab44) set_opt_bg_pane_g3_copy1

0xcb9f,	// (0x0003310a) set_opt_bg_pane_g4_copy1

0xcba7,	// (0x00033112) set_opt_bg_pane_g5_copy1

0xcbaf,	// (0x0003311a) set_opt_bg_pane_g6_copy1

0x45e1,	// (0x0002ab4c) set_opt_bg_pane_g7_copy1

0x45e9,	// (0x0002ab54) set_opt_bg_pane_g8_copy1

0x45f1,	// (0x0002ab5c) set_opt_bg_pane_g9_copy1

0xc721,	// (0x00032c8c) bg_set_opt_pane_cp_vc

0x45f9,	// (0x0002ab64) setting_slider_pane_vc_t1

0x4608,	// (0x0002ab73) setting_slider_pane_vc_t2

0x4618,	// (0x0002ab83) setting_slider_pane_vc_t3

0x0002,

0xf9fd,	// (0x00035f68) setting_slider_pane_vc_t

0x4628,	// (0x0002ab93) slider_set_pane_vc

0x18d5,	// (0x00027e40) volume_set_pane_vc_g1

0x1bd0,	// (0x0002813b) volume_set_pane_vc_g2

0x1bd9,	// (0x00028144) volume_set_pane_vc_g3

0x1be2,	// (0x0002814d) volume_set_pane_vc_g4

0x1beb,	// (0x00028156) volume_set_pane_vc_g5

0x1bf4,	// (0x0002815f) volume_set_pane_vc_g6

0x1bfd,	// (0x00028168) volume_set_pane_vc_g7

0x1c06,	// (0x00028171) volume_set_pane_vc_g8

0x1c0f,	// (0x0002817a) volume_set_pane_vc_g9

0x1c18,	// (0x00028183) volume_set_pane_vc_g10

0x0009,

0xfa04,	// (0x00035f6f) volume_set_pane_vc_g

0x4630,	// (0x0002ab9b) volume_set_pane_vc

0x4638,	// (0x0002aba3) button_value_adjust_pane_cp1_vc

0x4642,	// (0x0002abad) list_highlight_pane_cp2_vc

0x464b,	// (0x0002abb6) list_set_pane_vc_ParamLimits

0x464b,	// (0x0002abb6) list_set_pane_vc

0x46a9,	// (0x0002ac14) main_pane_set_vc_t1_ParamLimits

0x46a9,	// (0x0002ac14) main_pane_set_vc_t1

0x46be,	// (0x0002ac29) main_pane_set_vc_t2_ParamLimits

0x46be,	// (0x0002ac29) main_pane_set_vc_t2

0x46d0,	// (0x0002ac3b) main_pane_set_vc_t3_ParamLimits

0x46d0,	// (0x0002ac3b) main_pane_set_vc_t3

0x46e2,	// (0x0002ac4d) main_pane_set_vc_t4_ParamLimits

0x46e2,	// (0x0002ac4d) main_pane_set_vc_t4

0x0003,

0xfa19,	// (0x00035f84) main_pane_set_vc_t_ParamLimits

0xfa19,	// (0x00035f84) main_pane_set_vc_t

0x46f4,	// (0x0002ac5f) setting_code_pane_vc_ParamLimits

0x46f4,	// (0x0002ac5f) setting_code_pane_vc

0x4703,	// (0x0002ac6e) setting_slider_graphic_pane_vc

0x4703,	// (0x0002ac6e) setting_slider_pane_vc

0x4703,	// (0x0002ac6e) setting_text_pane_vc

0x4703,	// (0x0002ac6e) setting_volume_pane_vc

0x470b,	// (0x0002ac76) scroll_pane_cp121_vc

0xcb09,	// (0x00033074) set_content_pane_vc

0x4713,	// (0x0002ac7e) button_value_adjust_pane_g1

0x471c,	// (0x0002ac87) button_value_adjust_pane_g2

0x0001,

0xfa75,	// (0x00035fe0) button_value_adjust_pane_g

0x4725,	// (0x0002ac90) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4725,	// (0x0002ac90) form_field_slider_wide_pane_vc_t1

0x4739,	// (0x0002aca4) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4739,	// (0x0002aca4) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7a,	// (0x00035fe5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7a,	// (0x00035fe5) form_field_slider_wide_pane_vc_t

0xc76f,	// (0x00032cda) input_focus_pane_cp10_vc_ParamLimits

0xc76f,	// (0x00032cda) input_focus_pane_cp10_vc

0x4767,	// (0x0002acd2) slider_cont_pane_cp1_vc_ParamLimits

0x4767,	// (0x0002acd2) slider_cont_pane_cp1_vc

0x4779,	// (0x0002ace4) slider_form_pane_g1_cp2

0x45ad,	// (0x0002ab18) slider_form_pane_g2_cp2

0x47a6,	// (0x0002ad11) form_field_slider_pane_vc_t3

0x47b4,	// (0x0002ad1f) form_field_slider_pane_vc_t4

0x47c2,	// (0x0002ad2d) slider_form_pane_vc_ParamLimits

0x47c2,	// (0x0002ad2d) slider_form_pane_vc

0x47cf,	// (0x0002ad3a) form_field_slider_pane_vc_t1_ParamLimits

0x47cf,	// (0x0002ad3a) form_field_slider_pane_vc_t1

0x4739,	// (0x0002aca4) form_field_slider_pane_vc_t2_ParamLimits

0x4739,	// (0x0002aca4) form_field_slider_pane_vc_t2

0x0001,

0xfa8c,	// (0x00035ff7) form_field_slider_pane_vc_t_ParamLimits

0xfa8c,	// (0x00035ff7) form_field_slider_pane_vc_t

0xc76f,	// (0x00032cda) input_focus_pane_cp9_vc_ParamLimits

0xc76f,	// (0x00032cda) input_focus_pane_cp9_vc

0x47eb,	// (0x0002ad56) slider_cont_pane_vc_ParamLimits

0x47eb,	// (0x0002ad56) slider_cont_pane_vc

0x47ff,	// (0x0002ad6a) list_form_graphic_pane_cp_vc_ParamLimits

0x47ff,	// (0x0002ad6a) list_form_graphic_pane_cp_vc

0x186c,	// (0x00027dd7) form_field_popup_wide_pane_vc_g1

0x4814,	// (0x0002ad7f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4814,	// (0x0002ad7f) form_field_popup_wide_pane_vc_t1

0xcb2f,	// (0x0003309a) input_focus_pane_cp8_vc_ParamLimits

0xcb2f,	// (0x0003309a) input_focus_pane_cp8_vc

0x4859,	// (0x0002adc4) list_form_wide_pane_vc_ParamLimits

0x4859,	// (0x0002adc4) list_form_wide_pane_vc

0x4865,	// (0x0002add0) list_form_graphic_pane_vc_g1

0x486d,	// (0x0002add8) list_form_graphic_pane_vc_t1_ParamLimits

0x486d,	// (0x0002add8) list_form_graphic_pane_vc_t1

0xc77d,	// (0x00032ce8) list_highlight_pane_cp5_vc_ParamLimits

0xc77d,	// (0x00032ce8) list_highlight_pane_cp5_vc

0x4889,	// (0x0002adf4) list_form_graphic_pane_vc_ParamLimits

0x4889,	// (0x0002adf4) list_form_graphic_pane_vc

0x186c,	// (0x00027dd7) form_field_popup_pane_vc_g1

0x489f,	// (0x0002ae0a) form_field_popup_pane_vc_t1_ParamLimits

0x489f,	// (0x0002ae0a) form_field_popup_pane_vc_t1

0xcb2f,	// (0x0003309a) input_focus_pane_cp7_vc_ParamLimits

0xcb2f,	// (0x0003309a) input_focus_pane_cp7_vc

0x48b6,	// (0x0002ae21) list_form_pane_vc_ParamLimits

0x48b6,	// (0x0002ae21) list_form_pane_vc

0x48c2,	// (0x0002ae2d) data_form_pane_vc_t1_ParamLimits

0x48c2,	// (0x0002ae2d) data_form_pane_vc_t1

0xcb87,	// (0x000330f2) input_focus_pane_vc_g1

0xcb8f,	// (0x000330fa) input_focus_pane_vc_g2

0xcb97,	// (0x00033102) input_focus_pane_vc_g3

0xcb9f,	// (0x0003310a) input_focus_pane_vc_g4

0xcba7,	// (0x00033112) input_focus_pane_vc_g5

0xcbaf,	// (0x0003311a) input_focus_pane_vc_g6

0xcbb7,	// (0x00033122) input_focus_pane_vc_g7

0xcbbf,	// (0x0003312a) input_focus_pane_vc_g8

0xcbc7,	// (0x00033132) input_focus_pane_vc_g9

0xc717,	// (0x00032c82) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x00035be8) input_focus_pane_vc_g

0x1860,	// (0x00027dcb) data_form_pane_vc_ParamLimits

0x1860,	// (0x00027dcb) data_form_pane_vc

0x186c,	// (0x00027dd7) form_field_data_pane_vc_g1

0x48dd,	// (0x0002ae48) form_field_data_pane_vc_t1_ParamLimits

0x48dd,	// (0x0002ae48) form_field_data_pane_vc_t1

0xcb2f,	// (0x0003309a) input_focus_pane_vc_ParamLimits

0xcb2f,	// (0x0003309a) input_focus_pane_vc

0x48f7,	// (0x0002ae62) button_value_adjust_pane_cp3_vc

0x48ff,	// (0x0002ae6a) button_value_adjust_pane_cp5_vc

0x4907,	// (0x0002ae72) form_field_data_pane_vc_ParamLimits

0x4907,	// (0x0002ae72) form_field_data_pane_vc

0x491e,	// (0x0002ae89) form_field_data_pane_vc_cp2

0x4926,	// (0x0002ae91) form_field_data_wide_pane_vc_ParamLimits

0x4926,	// (0x0002ae91) form_field_data_wide_pane_vc

0x493c,	// (0x0002aea7) form_field_data_wide_pane_vc_cp2

0x4944,	// (0x0002aeaf) form_field_popup_pane_vc_ParamLimits

0x4944,	// (0x0002aeaf) form_field_popup_pane_vc

0x495b,	// (0x0002aec6) form_field_popup_wide_pane_vc_ParamLimits

0x495b,	// (0x0002aec6) form_field_popup_wide_pane_vc

0x4971,	// (0x0002aedc) form_field_slider_pane_vc_ParamLimits

0x4971,	// (0x0002aedc) form_field_slider_pane_vc

0x4984,	// (0x0002aeef) form_field_slider_wide_pane_vc_ParamLimits

0x4984,	// (0x0002aeef) form_field_slider_wide_pane_vc

0xbc28,	// (0x00032193) grid_touch_1_pane_ParamLimits

0xbc28,	// (0x00032193) grid_touch_1_pane

0xbc3c,	// (0x000321a7) grid_touch_2_pane_ParamLimits

0xbc3c,	// (0x000321a7) grid_touch_2_pane

0x4a52,	// (0x0002afbd) touch_pane_g1_ParamLimits

0x4a52,	// (0x0002afbd) touch_pane_g1

0x49bb,	// (0x0002af26) cell_app_pane_cp_wide_ParamLimits

0x49bb,	// (0x0002af26) cell_app_pane_cp_wide

0x49cc,	// (0x0002af37) grid_popup_fast_wide_pane_ParamLimits

0x49cc,	// (0x0002af37) grid_popup_fast_wide_pane

0x49e0,	// (0x0002af4b) scroll_pane_cp19_ParamLimits

0x49e0,	// (0x0002af4b) scroll_pane_cp19

0xc721,	// (0x00032c8c) bg_popup_window_pane_cp20

0x49f4,	// (0x0002af5f) listscroll_popup_fast_wide_pane

0xd1b8,	// (0x00033723) grid_indicator_nsta_pane

0x49fc,	// (0x0002af67) clock_nsta_pane_g1

0x4a05,	// (0x0002af70) clock_nsta_pane_t1

0xbc66,	// (0x000321d1) cell_indicator_nsta_pane_ParamLimits

0xbc66,	// (0x000321d1) cell_indicator_nsta_pane

0x4a52,	// (0x0002afbd) cell_indicator_nsta_pane_g1

0xbc7d,	// (0x000321e8) cell_indicator_nsta_pane_g2

0x0001,

0xfa9d,	// (0x00036008) cell_indicator_nsta_pane_g

0x4a6d,	// (0x0002afd8) clock_nsta_pane_cp

0x4a76,	// (0x0002afe1) indicator_nsta_pane_cp

0x4a7e,	// (0x0002afe9) nsta_clock_indic_pane_g1

0xc7b9,	// (0x00032d24) grid_indicator_pane

0x9fbb,	// (0x00030526) scroll_pane_cp29

0x0286,	// (0x000267f1) indicator_nsta_pane_cp2_ParamLimits

0x0286,	// (0x000267f1) indicator_nsta_pane_cp2

0xc77d,	// (0x00032ce8) main_apps_wheel_pane

0xb212,	// (0x0003177d) form_midp_field_text_pane_ParamLimits

0x2e76,	// (0x000293e1) scroll_bar_cp050_ParamLimits

0x4ace,	// (0x0002b039) cell_indicator_pane_ParamLimits

0x4ace,	// (0x0002b039) cell_indicator_pane

0x4ae7,	// (0x0002b052) cell_indicator_pane_g1

0xbc9c,	// (0x00032207) grid_wheel_folder_pane_ParamLimits

0xbc9c,	// (0x00032207) grid_wheel_folder_pane

0xbcaa,	// (0x00032215) list_wheel_apps_pane_ParamLimits

0xbcaa,	// (0x00032215) list_wheel_apps_pane

0xbcb8,	// (0x00032223) main_apps_wheel_pane_g1_ParamLimits

0xbcb8,	// (0x00032223) main_apps_wheel_pane_g1

0xbcc4,	// (0x0003222f) main_apps_wheel_pane_g2_ParamLimits

0xbcc4,	// (0x0003222f) main_apps_wheel_pane_g2

0x0001,

0xfab9,	// (0x00036024) main_apps_wheel_pane_g_ParamLimits

0xfab9,	// (0x00036024) main_apps_wheel_pane_g

0xbcd2,	// (0x0003223d) main_apps_wheel_pane_t1_ParamLimits

0xbcd2,	// (0x0003223d) main_apps_wheel_pane_t1

0xbce6,	// (0x00032251) list_wheel_apps_pane_g1

0xbcee,	// (0x00032259) list_wheel_apps_pane_g2

0xbcf6,	// (0x00032261) list_wheel_apps_pane_g3

0xbcfe,	// (0x00032269) list_wheel_apps_pane_g4

0xbd08,	// (0x00032273) list_wheel_apps_pane_g5

0x0004,

0xfabe,	// (0x00036029) list_wheel_apps_pane_g

0x04d5,	// (0x00026a40) navi_icon_text_pane

0xac6c,	// (0x000311d7) aid_fill_nsta

0x4bae,	// (0x0002b119) navi_icon_text_pane_g1

0x4bba,	// (0x0002b125) navi_icon_text_pane_t1

0xd155,	// (0x000336c0) list_set_graphic_pane_t1_ParamLimits

0xd155,	// (0x000336c0) list_set_graphic_pane_t1

0x35b9,	// (0x00029b24) popup_midp_note_alarm_window_t6_ParamLimits

0x35b9,	// (0x00029b24) popup_midp_note_alarm_window_t6

0x35cb,	// (0x00029b36) popup_midp_note_alarm_window_t7_ParamLimits

0x35cb,	// (0x00029b36) popup_midp_note_alarm_window_t7

0x35dd,	// (0x00029b48) popup_midp_note_alarm_window_t8_ParamLimits

0x35dd,	// (0x00029b48) popup_midp_note_alarm_window_t8

0x35ef,	// (0x00029b5a) popup_midp_note_alarm_window_t9_ParamLimits

0x35ef,	// (0x00029b5a) popup_midp_note_alarm_window_t9

0x3601,	// (0x00029b6c) popup_midp_note_alarm_window_t10_ParamLimits

0x3601,	// (0x00029b6c) popup_midp_note_alarm_window_t10

0x3613,	// (0x00029b7e) popup_midp_note_alarm_window_t11_ParamLimits

0x3613,	// (0x00029b7e) popup_midp_note_alarm_window_t11

0xb55e,	// (0x00031ac9) scroll_pane_cp17_ParamLimits

0xb55e,	// (0x00031ac9) scroll_pane_cp17

0x18d5,	// (0x00027e40) volume_small_pane_cp_g1

0x1c21,	// (0x0002818c) volume_small_pane_cp_g2

0x1c2a,	// (0x00028195) volume_small_pane_cp_g3

0x1c33,	// (0x0002819e) volume_small_pane_cp_g4

0x1c3c,	// (0x000281a7) volume_small_pane_cp_g5

0x1beb,	// (0x00028156) volume_small_pane_cp_g6

0x1c45,	// (0x000281b0) volume_small_pane_cp_g7

0x1c4e,	// (0x000281b9) volume_small_pane_cp_g8

0x1c57,	// (0x000281c2) volume_small_pane_cp_g9

0x1c60,	// (0x000281cb) volume_small_pane_cp_g10

0x0736,	// (0x00026ca1) midp_ticker_pane_g1_ParamLimits

0x0742,	// (0x00026cad) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x00035cb4) midp_ticker_pane_g_ParamLimits

0x074e,	// (0x00026cb9) midp_ticker_pane_t1_ParamLimits

0xac90,	// (0x000311fb) aid_fill_nsta_2

0x2e62,	// (0x000293cd) list_form2_midp_pane

0x3f6d,	// (0x0002a4d8) midp_editing_number_pane_ParamLimits

0x3f7c,	// (0x0002a4e7) midp_ticker_pane_ParamLimits

0x4bcc,	// (0x0002b137) form2_midp_field_pane

0x4bf0,	// (0x0002b15b) scroll_pane_cp51

0x4c10,	// (0x0002b17b) form2_midp_button_pane_ParamLimits

0x4c10,	// (0x0002b17b) form2_midp_button_pane

0x4c22,	// (0x0002b18d) form2_midp_content_pane_ParamLimits

0x4c22,	// (0x0002b18d) form2_midp_content_pane

0x4c3c,	// (0x0002b1a7) form2_midp_field_choice_group_pane

0x4c44,	// (0x0002b1af) form2_midp_field_pane_g1

0x4c4c,	// (0x0002b1b7) form2_midp_field_pane_g2

0x4c54,	// (0x0002b1bf) form2_midp_field_pane_g3

0x4c5c,	// (0x0002b1c7) form2_midp_field_pane_g4

0x0003,

0xfae3,	// (0x0003604e) form2_midp_field_pane_g

0x4c64,	// (0x0002b1cf) form2_midp_gauge_slider_pane

0x4c6c,	// (0x0002b1d7) form2_midp_gauge_wait_pane

0x4c74,	// (0x0002b1df) form2_midp_image_pane_ParamLimits

0x4c74,	// (0x0002b1df) form2_midp_image_pane

0xbd3b,	// (0x000322a6) form2_midp_label_pane_ParamLimits

0xbd3b,	// (0x000322a6) form2_midp_label_pane

0xbd54,	// (0x000322bf) form2_midp_label_pane_cp_ParamLimits

0xbd54,	// (0x000322bf) form2_midp_label_pane_cp

0x4cc9,	// (0x0002b234) form2_midp_string_pane_ParamLimits

0x4cc9,	// (0x0002b234) form2_midp_string_pane

0xeff8,	// (0x00035563) form2_midp_text_pane_ParamLimits

0xeff8,	// (0x00035563) form2_midp_text_pane

0x4cdb,	// (0x0002b246) form2_midp_time_pane

0x4ceb,	// (0x0002b256) input_focus_pane_cp51_ParamLimits

0x4ceb,	// (0x0002b256) input_focus_pane_cp51

0xbd73,	// (0x000322de) form2_midp_label_pane_t1_ParamLimits

0xbd73,	// (0x000322de) form2_midp_label_pane_t1

0xf011,	// (0x0003557c) form2_mdip_text_pane_t1_ParamLimits

0xf011,	// (0x0003557c) form2_mdip_text_pane_t1

0xf02f,	// (0x0003559a) form2_midp_time_pane_t1

0x4d4c,	// (0x0002b2b7) form2_midp_gauge_slider_pane_t1

0xbdb3,	// (0x0003231e) form2_midp_gauge_slider_pane_t2

0xbdc5,	// (0x00032330) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaec,	// (0x00036057) form2_midp_gauge_slider_pane_t

0x4d82,	// (0x0002b2ed) form2_midp_slider_pane

0x4d8e,	// (0x0002b2f9) form2_midp_gauge_wait_pane_t1

0x4d9c,	// (0x0002b307) form2_midp_wait_pane_ParamLimits

0x4d9c,	// (0x0002b307) form2_midp_wait_pane

0xbdd7,	// (0x00032342) list_single_2graphic_pane_cp4_ParamLimits

0xbdd7,	// (0x00032342) list_single_2graphic_pane_cp4

0xb169,	// (0x000316d4) list_single_midp_graphic_pane_cp_ParamLimits

0xb169,	// (0x000316d4) list_single_midp_graphic_pane_cp

0xc721,	// (0x00032c8c) list_highlight_pane_cp20

0x4def,	// (0x0002b35a) list_single_2graphic_pane_g1_cp4

0x43f7,	// (0x0002a962) list_single_2graphic_pane_g2_cp4

0x4df7,	// (0x0002b362) list_single_2graphic_pane_t1_cp4

0xc77d,	// (0x00032ce8) list_highlight_pane_cp21

0x4e06,	// (0x0002b371) list_single_midp_graphic_pane_g4_cp

0x4e15,	// (0x0002b380) list_single_midp_graphic_pane_t1_cp

0xbdec,	// (0x00032357) form2_mdip_string_pane_t1_ParamLimits

0xbdec,	// (0x00032357) form2_mdip_string_pane_t1

0xc721,	// (0x00032c8c) bg_wml_button_pane_cp2

0xc717,	// (0x00032c82) form2_midp_image_pane_g1

0xeb43,	// (0x000350ae) list_double_large_graphic_pane_g5_ParamLimits

0xeb43,	// (0x000350ae) list_double_large_graphic_pane_g5

0xa1b4,	// (0x0003071f) midp_form_pane_ParamLimits

0xc77d,	// (0x00032ce8) main_apps_wheel_pane_ParamLimits

0xa94a,	// (0x00030eb5) popup_preview_window_ParamLimits

0xa94a,	// (0x00030eb5) popup_preview_window

0xac17,	// (0x00031182) popup_touch_info_window_ParamLimits

0xac17,	// (0x00031182) popup_touch_info_window

0xac35,	// (0x000311a0) popup_touch_menu_window_ParamLimits

0xac35,	// (0x000311a0) popup_touch_menu_window

0xc70d,	// (0x00032c78) bg_popup_sub_pane_cp6

0x4f31,	// (0x0002b49c) list_touch_menu_pane

0xbe62,	// (0x000323cd) list_single_touch_menu_pane_ParamLimits

0xbe62,	// (0x000323cd) list_single_touch_menu_pane

0xbe76,	// (0x000323e1) list_single_touch_menu_pane_t1

0xc77d,	// (0x00032ce8) bg_popup_sub_pane_cp7_ParamLimits

0xc77d,	// (0x00032ce8) bg_popup_sub_pane_cp7

0x4f5d,	// (0x0002b4c8) heading_sub_pane

0x4f65,	// (0x0002b4d0) list_touch_info_pane_ParamLimits

0x4f65,	// (0x0002b4d0) list_touch_info_pane

0x4f74,	// (0x0002b4df) list_single_touch_info_pane_ParamLimits

0x4f74,	// (0x0002b4df) list_single_touch_info_pane

0x4f86,	// (0x0002b4f1) list_single_touch_info_pane_t1

0x4f94,	// (0x0002b4ff) list_single_touch_info_pane_t2

0x0001,

0xfafa,	// (0x00036065) list_single_touch_info_pane_t

0x0655,	// (0x00026bc0) bg_popup_heading_pane_cp

0x4fa2,	// (0x0002b50d) heading_sub_pane_t1

0x1772,	// (0x00027cdd) bg_popup_preview_window_pane_cp_ParamLimits

0x1772,	// (0x00027cdd) bg_popup_preview_window_pane_cp

0x4f5d,	// (0x0002b4c8) heading_preview_pane

0x4f65,	// (0x0002b4d0) list_preview_pane_ParamLimits

0x4f65,	// (0x0002b4d0) list_preview_pane

0x4fb0,	// (0x0002b51b) popup_preview_window_g1

0x4f74,	// (0x0002b4df) list_single_preview_pane_ParamLimits

0x4f74,	// (0x0002b4df) list_single_preview_pane

0x4fb8,	// (0x0002b523) list_single_preview_pane_g1

0x4fc0,	// (0x0002b52b) list_single_preview_pane_t1

0x4f86,	// (0x0002b4f1) list_single_preview_pane_t2

0x0001,

0xfaff,	// (0x0003606a) list_single_preview_pane_t

0x4fce,	// (0x0002b539) bg_popup_heading_pane_cp2_ParamLimits

0x4fce,	// (0x0002b539) bg_popup_heading_pane_cp2

0x4fe4,	// (0x0002b54f) heading_preview_pane_g1

0x4fec,	// (0x0002b557) heading_preview_pane_t1_ParamLimits

0x4fec,	// (0x0002b557) heading_preview_pane_t1

0xc7d0,	// (0x00032d3b) soft_indicator_pane_t1_ParamLimits

0xcaab,	// (0x00033016) scroll_pane_ParamLimits

0xce35,	// (0x000333a0) scroll_sc2_left_pane

0xce3e,	// (0x000333a9) scroll_sc2_right_pane

0xce5d,	// (0x000333c8) scroll_bg_pane_g1_ParamLimits

0xce72,	// (0x000333dd) scroll_bg_pane_g2_ParamLimits

0xce8a,	// (0x000333f5) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x00035c3f) scroll_bg_pane_g_ParamLimits

0xce5d,	// (0x000333c8) scroll_handle_pane_g1_ParamLimits

0xce9f,	// (0x0003340a) scroll_handle_pane_g2_ParamLimits

0xce8a,	// (0x000333f5) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x00035c46) scroll_handle_pane_g_ParamLimits

0xa4f1,	// (0x00030a5c) popup_choice_list_window_ParamLimits

0xa4f1,	// (0x00030a5c) popup_choice_list_window

0x15a0,	// (0x00027b0b) choice_list_pane

0x1652,	// (0x00027bbd) cell_toolbar_pane_t1

0x167a,	// (0x00027be5) toolbar_button_pane_ParamLimits

0x3adf,	// (0x0002a04a) ai_gene_pane_1_t2_ParamLimits

0x3adf,	// (0x0002a04a) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x00035e62) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x00035e62) ai_gene_pane_1_t

0x5009,	// (0x0002b574) scroll_sc2_left_pane_g1

0x5009,	// (0x0002b574) scroll_sc2_right_pane_g1

0x0b8c,	// (0x000270f7) bg_popup_sub_pane_cp10

0x5013,	// (0x0002b57e) list_choice_list_pane

0xbe84,	// (0x000323ef) list_single_choice_list_pane_ParamLimits

0xbe84,	// (0x000323ef) list_single_choice_list_pane

0xd1c6,	// (0x00033731) list_single_choice_list_pane_g1

0x9de5,	// (0x00030350) list_single_choice_list_pane_t1_ParamLimits

0x9de5,	// (0x00030350) list_single_choice_list_pane_t1

0x5047,	// (0x0002b5b2) choice_list_pane_g1

0xbe98,	// (0x00032403) choice_list_pane_t1

0xc70d,	// (0x00032c78) input_focus_pane_cp11

0xcdaa,	// (0x00033315) title_pane_stacon_g2_ParamLimits

0xcdaa,	// (0x00033315) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x00035c25) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x00035c25) title_pane_stacon_g

0x0655,	// (0x00026bc0) cursor_press_pane

0xa598,	// (0x00030b03) popup_fep_hwr_window_ParamLimits

0xa598,	// (0x00030b03) popup_fep_hwr_window

0x0cf6,	// (0x00027261) popup_fep_vkb_window_ParamLimits

0x0cf6,	// (0x00027261) popup_fep_vkb_window

0xbea6,	// (0x00032411) cursor_press_pane_g1

0x0002,

0xfb28,	// (0x00036093) fep_vkb_side_pane_g_ParamLimits

0x1ca2,	// (0x0002820d) fep_hwr_candidate_pane_ParamLimits

0x1ca2,	// (0x0002820d) fep_hwr_candidate_pane

0x1ccc,	// (0x00028237) fep_hwr_side_pane_ParamLimits

0x1ccc,	// (0x00028237) fep_hwr_side_pane

0x1cec,	// (0x00028257) fep_hwr_top_pane_ParamLimits

0x1cec,	// (0x00028257) fep_hwr_top_pane

0x1d04,	// (0x0002826f) fep_hwr_write_pane_ParamLimits

0x1d04,	// (0x0002826f) fep_hwr_write_pane

0xfb28,	// (0x00036093) fep_vkb_side_pane_g

0x5065,	// (0x0002b5d0) fep_hwr_top_pane_g1

0x5077,	// (0x0002b5e2) fep_hwr_top_pane_g2

0x1d30,	// (0x0002829b) fep_hwr_top_pane_g3

0x0002,

0xfb04,	// (0x0003606f) fep_hwr_top_pane_g

0x1d45,	// (0x000282b0) fep_hwr_top_text_pane

0xcf62,	// (0x000334cd) fep_hwr_top_text_pane_g1

0x50ad,	// (0x0002b618) fep_hwr_top_text_pane_t1

0x1e3b,	// (0x000283a6) fep_hwr_candidate_pane_g1

0x52f2,	// (0x0002b85d) fep_vkb_keypad_pane_g3_ParamLimits

0x52f2,	// (0x0002b85d) fep_vkb_keypad_pane_g3

0x531a,	// (0x0002b885) fep_vkb_keypad_pane_g4_ParamLimits

0x531a,	// (0x0002b885) fep_vkb_keypad_pane_g4

0x5389,	// (0x0002b8f4) fep_vkb_bottom_pane_g2_ParamLimits

0x5389,	// (0x0002b8f4) fep_vkb_bottom_pane_g2

0x0001,

0xfb2f,	// (0x0003609a) fep_vkb_bottom_pane_g_ParamLimits

0xfb2f,	// (0x0003609a) fep_vkb_bottom_pane_g

0x5009,	// (0x0002b574) cell_vkb_side_pane_g2

0x0001,

0xfb39,	// (0x000360a4) cell_vkb_side_pane_g

0x5414,	// (0x0002b97f) cell_vkb_side_pane_t1

0x5422,	// (0x0002b98d) cell_vkb_side_pane_t1_copy1

0x5009,	// (0x0002b574) bg_fep_vkb_candidate_pane_g2

0x554e,	// (0x0002bab9) cell_vkb_candidate_pane_ParamLimits

0x50bb,	// (0x0002b626) aid_size_cell_vkb_ParamLimits

0x50bb,	// (0x0002b626) aid_size_cell_vkb

0x554e,	// (0x0002bab9) cell_vkb_candidate_pane

0x1e55,	// (0x000283c0) bg_popup_fep_shadow_pane_g1

0xbf0d,	// (0x00032478) fep_vkb_bottom_pane_ParamLimits

0xbf0d,	// (0x00032478) fep_vkb_bottom_pane

0x517f,	// (0x0002b6ea) fep_vkb_candidate_pane_ParamLimits

0x517f,	// (0x0002b6ea) fep_vkb_candidate_pane

0xbf32,	// (0x0003249d) fep_vkb_keypad_pane_ParamLimits

0xbf32,	// (0x0003249d) fep_vkb_keypad_pane

0xbf67,	// (0x000324d2) fep_vkb_side_pane_ParamLimits

0xbf67,	// (0x000324d2) fep_vkb_side_pane

0xbfa3,	// (0x0003250e) fep_vkb_top_pane_ParamLimits

0xbfa3,	// (0x0003250e) fep_vkb_top_pane

0x524b,	// (0x0002b7b6) fep_vkb_top_pane_g1_ParamLimits

0x524b,	// (0x0002b7b6) fep_vkb_top_pane_g1

0x525a,	// (0x0002b7c5) fep_vkb_top_pane_g2_ParamLimits

0x525a,	// (0x0002b7c5) fep_vkb_top_pane_g2

0x5269,	// (0x0002b7d4) fep_vkb_top_pane_g3_ParamLimits

0x5269,	// (0x0002b7d4) fep_vkb_top_pane_g3

0x0003,

0xfb1f,	// (0x0003608a) fep_vkb_top_pane_g_ParamLimits

0xfb1f,	// (0x0003608a) fep_vkb_top_pane_g

0x5287,	// (0x0002b7f2) fep_vkb_top_text_pane_ParamLimits

0x5287,	// (0x0002b7f2) fep_vkb_top_text_pane

0xbfd8,	// (0x00032543) fep_vkb_side_pane_g1_ParamLimits

0xbfd8,	// (0x00032543) fep_vkb_side_pane_g1

0x52e1,	// (0x0002b84c) grid_vkb_side_pane_ParamLimits

0x52e1,	// (0x0002b84c) grid_vkb_side_pane

0x1e5d,	// (0x000283c8) bg_popup_fep_shadow_pane_g2

0x1e66,	// (0x000283d1) bg_popup_fep_shadow_pane_g3

0x1e6e,	// (0x000283d9) bg_popup_fep_shadow_pane_g4

0x1e77,	// (0x000283e2) bg_popup_fep_shadow_pane_g5

0x1e81,	// (0x000283ec) bg_popup_fep_shadow_pane_g6

0x1e89,	// (0x000283f4) bg_popup_fep_shadow_pane_g7

0xcba7,	// (0x00033112) bg_popup_fep_shadow_pane_g8

0x5338,	// (0x0002b8a3) grid_vkb_keypad_number_pane_ParamLimits

0x5338,	// (0x0002b8a3) grid_vkb_keypad_number_pane

0x5348,	// (0x0002b8b3) grid_vkb_keypad_pane_ParamLimits

0x5348,	// (0x0002b8b3) grid_vkb_keypad_pane

0x536e,	// (0x0002b8d9) fep_vkb_bottom_pane_g1_ParamLimits

0x536e,	// (0x0002b8d9) fep_vkb_bottom_pane_g1

0x5397,	// (0x0002b902) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5397,	// (0x0002b902) grid_vkb_keypad_bottom_left_pane

0x53ac,	// (0x0002b917) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x53ac,	// (0x0002b917) grid_vkb_keypad_bottom_right_pane

0x53c1,	// (0x0002b92c) fep_vkb_top_text_pane_g1

0xd216,	// (0x00033781) fep_vkb_top_text_pane_t1

0xd228,	// (0x00033793) cell_vkb_side_pane_ParamLimits

0xd228,	// (0x00033793) cell_vkb_side_pane

0x5009,	// (0x0002b574) cell_vkb_side_pane_g1

0x5430,	// (0x0002b99b) cell_vkb_keypad_pane_ParamLimits

0x5430,	// (0x0002b99b) cell_vkb_keypad_pane

0x54a5,	// (0x0002ba10) cell_vkb_keypad_pane_g1

0x0008,

0xfb4c,	// (0x000360b7) bg_popup_fep_shadow_pane_g

0x5009,	// (0x0002b574) cell_hwr_side_pane_g1

0x5009,	// (0x0002b574) cell_hwr_side_pane_g2

0x54af,	// (0x0002ba1a) cell_vkb_keypad_pane_t1

0xd23e,	// (0x000337a9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd23e,	// (0x000337a9) cell_vkb_keypad_bottom_left_pane

0xd253,	// (0x000337be) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd253,	// (0x000337be) cell_vkb_keypad_bottom_right_pane

0x5009,	// (0x0002b574) cell_vkb_keypad_bottom_left_pane_g1

0x5009,	// (0x0002b574) cell_vkb_keypad_bottom_right_pane_g1

0x5513,	// (0x0002ba7e) cell_vkb_keypad_number_pane_ParamLimits

0x5513,	// (0x0002ba7e) cell_vkb_keypad_number_pane

0x5532,	// (0x0002ba9d) cell_vkb_keypad_number_pane_g1

0x553c,	// (0x0002baa7) cell_vkb_keypad_number_pane_g2

0x5545,	// (0x0002bab0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3e,	// (0x000360a9) cell_vkb_keypad_number_pane_g

0x54af,	// (0x0002ba1a) cell_vkb_keypad_number_pane_t1

0x5569,	// (0x0002bad4) fep_vkb_candidate_pane_g1

0x0001,

0xfb39,	// (0x000360a4) cell_hwr_side_pane_g

0x5582,	// (0x0002baed) cell_hwr_side_pane_t1

0x1e9b,	// (0x00028406) cell_hwr_side_pane_t1_copy1

0x5279,	// (0x0002b7e4) cell_hwr_candidate_pane_g1

0x1ea9,	// (0x00028414) cell_hwr_candidate_pane_t1

0x5009,	// (0x0002b574) cell_vkb_candidate_pane_g2

0x5608,	// (0x0002bb73) cell_vkb_candidate_pane_t1

0x1c69,	// (0x000281d4) bg_popup_fep_shadow_pane_ParamLimits

0x1c69,	// (0x000281d4) bg_popup_fep_shadow_pane

0xd1ce,	// (0x00033739) bg_fep_hwr_top_pane_g4

0x5089,	// (0x0002b5f4) bg_hwr_side_pane_g1_ParamLimits

0x5089,	// (0x0002b5f4) bg_hwr_side_pane_g1

0xbec6,	// (0x00032431) cell_hwr_side_pane_ParamLimits

0xbec6,	// (0x00032431) cell_hwr_side_pane

0x1dbc,	// (0x00028327) fep_hwr_write_pane_g1_ParamLimits

0x1dbc,	// (0x00028327) fep_hwr_write_pane_g1

0x1dc9,	// (0x00028334) fep_hwr_write_pane_g2_ParamLimits

0x1dc9,	// (0x00028334) fep_hwr_write_pane_g2

0x1dd6,	// (0x00028341) fep_hwr_write_pane_g3_ParamLimits

0x1dd6,	// (0x00028341) fep_hwr_write_pane_g3

0xbee6,	// (0x00032451) fep_hwr_write_pane_g4_ParamLimits

0xbee6,	// (0x00032451) fep_hwr_write_pane_g4

0x0005,

0xfb0b,	// (0x00036076) fep_hwr_write_pane_g_ParamLimits

0xfb0b,	// (0x00036076) fep_hwr_write_pane_g

0xd1ce,	// (0x00033739) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd1ce,	// (0x00033739) bg_fep_hwr_candidate_pane_g2

0x1df9,	// (0x00028364) cell_hwr_candidate_pane_ParamLimits

0x1df9,	// (0x00028364) cell_hwr_candidate_pane

0x1e3b,	// (0x000283a6) fep_hwr_candidate_pane_g1_ParamLimits

0x50e9,	// (0x0002b654) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x50e9,	// (0x0002b654) bg_popup_fep_shadow_pane_cp2

0x5279,	// (0x0002b7e4) fep_vkb_top_pane_g4_ParamLimits

0x5279,	// (0x0002b7e4) fep_vkb_top_pane_g4

0x52bf,	// (0x0002b82a) fep_vkb_side_pane_g2_ParamLimits

0x52bf,	// (0x0002b82a) fep_vkb_side_pane_g2

0x8f54,	// (0x0002f4bf) list_setting_pane_t4_ParamLimits

0x8f54,	// (0x0002f4bf) list_setting_pane_t4

0x8fee,	// (0x0002f559) list_setting_number_pane_t5_ParamLimits

0x8fee,	// (0x0002f559) list_setting_number_pane_t5

0xcf99,	// (0x00033504) list_double_heading_pane_cp2_ParamLimits

0xcf99,	// (0x00033504) list_double_heading_pane_cp2

0x5616,	// (0x0002bb81) list_double_heading_pane_g1_cp2_ParamLimits

0x5616,	// (0x0002bb81) list_double_heading_pane_g1_cp2

0x5622,	// (0x0002bb8d) list_double_heading_pane_g2_cp2_ParamLimits

0x5622,	// (0x0002bb8d) list_double_heading_pane_g2_cp2

0x5636,	// (0x0002bba1) list_double_heading_pane_t1_cp2_ParamLimits

0x5636,	// (0x0002bba1) list_double_heading_pane_t1_cp2

0x564c,	// (0x0002bbb7) list_double_heading_pane_t2_cp2_ParamLimits

0x564c,	// (0x0002bbb7) list_double_heading_pane_t2_cp2

0xc705,	// (0x00032c70) aid_value_unit2

0xf39b,	// (0x00035906) popup_preview_fixed_window

0xc8a7,	// (0x00032e12) bg_popup_preview_window_pane_cp02

0x565e,	// (0x0002bbc9) list_preview_fixed_pane

0x56a4,	// (0x0002bc0f) list_empty_pane_fp_ParamLimits

0x56a4,	// (0x0002bc0f) list_empty_pane_fp

0x56a4,	// (0x0002bc0f) list_single_cale_day_pane_fp_ParamLimits

0x56a4,	// (0x0002bc0f) list_single_cale_day_pane_fp

0x56a4,	// (0x0002bc0f) list_single_graphic_heading_pane_fp_ParamLimits

0x56a4,	// (0x0002bc0f) list_single_graphic_heading_pane_fp

0x56a4,	// (0x0002bc0f) list_single_graphic_pane_fp_ParamLimits

0x56a4,	// (0x0002bc0f) list_single_graphic_pane_fp

0x56a4,	// (0x0002bc0f) list_single_heading_pane_fp_ParamLimits

0x56a4,	// (0x0002bc0f) list_single_heading_pane_fp

0x56a4,	// (0x0002bc0f) list_single_pane_fp_ParamLimits

0x56a4,	// (0x0002bc0f) list_single_pane_fp

0x56ba,	// (0x0002bc25) list_single_pane_fp_g1_ParamLimits

0x56ba,	// (0x0002bc25) list_single_pane_fp_g1

0xf042,	// (0x000355ad) list_single_pane_fp_g2_ParamLimits

0xf042,	// (0x000355ad) list_single_pane_fp_g2

0xf04e,	// (0x000355b9) list_single_pane_fp_g3_ParamLimits

0xf04e,	// (0x000355b9) list_single_pane_fp_g3

0x56c6,	// (0x0002bc31) list_single_pane_fp_g4_ParamLimits

0x56c6,	// (0x0002bc31) list_single_pane_fp_g4

0x0003,

0xfb6d,	// (0x000360d8) list_single_pane_fp_g_ParamLimits

0xfb6d,	// (0x000360d8) list_single_pane_fp_g

0xf062,	// (0x000355cd) list_single_pane_fp_t1_ParamLimits

0xf062,	// (0x000355cd) list_single_pane_fp_t1

0xf079,	// (0x000355e4) list_single_graphic_pane_fp_g1_ParamLimits

0xf079,	// (0x000355e4) list_single_graphic_pane_fp_g1

0x56ba,	// (0x0002bc25) list_single_graphic_pane_fp_g2_ParamLimits

0x56ba,	// (0x0002bc25) list_single_graphic_pane_fp_g2

0xf042,	// (0x000355ad) list_single_graphic_pane_fp_g3_ParamLimits

0xf042,	// (0x000355ad) list_single_graphic_pane_fp_g3

0xf04e,	// (0x000355b9) list_single_graphic_pane_fp_g4_ParamLimits

0xf04e,	// (0x000355b9) list_single_graphic_pane_fp_g4

0x56c6,	// (0x0002bc31) list_single_graphic_pane_fp_g5_ParamLimits

0x56c6,	// (0x0002bc31) list_single_graphic_pane_fp_g5

0x0004,

0xfb76,	// (0x000360e1) list_single_graphic_pane_fp_g_ParamLimits

0xfb76,	// (0x000360e1) list_single_graphic_pane_fp_g

0xf085,	// (0x000355f0) list_single_graphic_pane_fp_t1_ParamLimits

0xf085,	// (0x000355f0) list_single_graphic_pane_fp_t1

0xf079,	// (0x000355e4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf079,	// (0x000355e4) list_single_graphic_heading_pane_fp_g1

0x56ba,	// (0x0002bc25) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x56ba,	// (0x0002bc25) list_single_graphic_heading_pane_fp_g2

0xf042,	// (0x000355ad) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf042,	// (0x000355ad) list_single_graphic_heading_pane_fp_g3

0xf04e,	// (0x000355b9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf04e,	// (0x000355b9) list_single_graphic_heading_pane_fp_g4

0x56c6,	// (0x0002bc31) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x56c6,	// (0x0002bc31) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb76,	// (0x000360e1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb76,	// (0x000360e1) list_single_graphic_heading_pane_fp_g

0xf09b,	// (0x00035606) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf09b,	// (0x00035606) list_single_graphic_heading_pane_fp_t1

0xf0b1,	// (0x0003561c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf0b1,	// (0x0003561c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb81,	// (0x000360ec) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb81,	// (0x000360ec) list_single_graphic_heading_pane_fp_t

0xf0c3,	// (0x0003562e) list_single_cale_day_pane_fp_g1_ParamLimits

0xf0c3,	// (0x0003562e) list_single_cale_day_pane_fp_g1

0x56d2,	// (0x0002bc3d) list_single_cale_day_pane_fp_g2_ParamLimits

0x56d2,	// (0x0002bc3d) list_single_cale_day_pane_fp_g2

0xf0fb,	// (0x00035666) list_single_cale_day_pane_fp_g3_ParamLimits

0xf0fb,	// (0x00035666) list_single_cale_day_pane_fp_g3

0xf123,	// (0x0003568e) list_single_cale_day_pane_fp_g4_ParamLimits

0xf123,	// (0x0003568e) list_single_cale_day_pane_fp_g4

0xf147,	// (0x000356b2) list_single_cale_day_pane_fp_g5_ParamLimits

0xf147,	// (0x000356b2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb86,	// (0x000360f1) list_single_cale_day_pane_fp_g_ParamLimits

0xfb86,	// (0x000360f1) list_single_cale_day_pane_fp_g

0xf16b,	// (0x000356d6) list_single_cale_day_pane_fp_t1_ParamLimits

0xf16b,	// (0x000356d6) list_single_cale_day_pane_fp_t1

0xf191,	// (0x000356fc) list_single_cale_day_pane_fp_t2_ParamLimits

0xf191,	// (0x000356fc) list_single_cale_day_pane_fp_t2

0xf1aa,	// (0x00035715) list_single_cale_day_pane_fp_t3_ParamLimits

0xf1aa,	// (0x00035715) list_single_cale_day_pane_fp_t3

0x0002,

0xfb91,	// (0x000360fc) list_single_cale_day_pane_fp_t_ParamLimits

0xfb91,	// (0x000360fc) list_single_cale_day_pane_fp_t

0x56ba,	// (0x0002bc25) list_empty_pane_fp_g1_ParamLimits

0x56ba,	// (0x0002bc25) list_empty_pane_fp_g1

0xf1c3,	// (0x0003572e) list_empty_pane_fp_t1

0xf1d1,	// (0x0003573c) list_empty_pane_fp_t2

0x0001,

0xfb98,	// (0x00036103) list_empty_pane_fp_t

0x56ba,	// (0x0002bc25) list_single_heading_pane_fp_g1_ParamLimits

0x56ba,	// (0x0002bc25) list_single_heading_pane_fp_g1

0xf042,	// (0x000355ad) list_single_heading_pane_fp_g2_ParamLimits

0xf042,	// (0x000355ad) list_single_heading_pane_fp_g2

0xf04e,	// (0x000355b9) list_single_heading_pane_fp_g3_ParamLimits

0xf04e,	// (0x000355b9) list_single_heading_pane_fp_g3

0x0002,

0xfb9d,	// (0x00036108) list_single_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00036108) list_single_heading_pane_fp_g

0xf1df,	// (0x0003574a) list_single_heading_pane_fp_t1_ParamLimits

0xf1df,	// (0x0003574a) list_single_heading_pane_fp_t1

0xf1f1,	// (0x0003575c) list_single_heading_pane_fp_t2_ParamLimits

0xf1f1,	// (0x0003575c) list_single_heading_pane_fp_t2

0x0001,

0xfba4,	// (0x0003610f) list_single_heading_pane_fp_t_ParamLimits

0xfba4,	// (0x0003610f) list_single_heading_pane_fp_t

0x9e31,	// (0x0003039c) aid_size_cell_fast

0xc88a,	// (0x00032df5) soft_indicator_pane_cp1_t1

0x9e3a,	// (0x000303a5) cell_app_pane_cp2_ParamLimits

0x9e3a,	// (0x000303a5) cell_app_pane_cp2

0x1c8b,	// (0x000281f6) fep_hwr_candidate_drop_down_list_pane

0xd1dc,	// (0x00033747) fep_hwr_candidate_pane_g3_ParamLimits

0xd1dc,	// (0x00033747) fep_hwr_candidate_pane_g3

0xd1e9,	// (0x00033754) fep_hwr_candidate_pane_g4_ParamLimits

0xd1e9,	// (0x00033754) fep_hwr_candidate_pane_g4

0x0002,

0xfb18,	// (0x00036083) fep_hwr_candidate_pane_g_ParamLimits

0xfb18,	// (0x00036083) fep_hwr_candidate_pane_g

0x516e,	// (0x0002b6d9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x516e,	// (0x0002b6d9) fep_vkb_candidate_drop_down_list_pane

0x5571,	// (0x0002badc) fep_vkb_candidate_pane_g3

0x5579,	// (0x0002bae4) fep_vkb_candidate_pane_g4

0x0002,

0xfb45,	// (0x000360b0) fep_vkb_candidate_pane_g

0x5279,	// (0x0002b7e4) cell_hwr_candidate_pane_g1_ParamLimits

0x5590,	// (0x0002bafb) cell_hwr_candidate_pane_g3_ParamLimits

0x5590,	// (0x0002bafb) cell_hwr_candidate_pane_g3

0x55b1,	// (0x0002bb1c) cell_hwr_candidate_pane_g4_ParamLimits

0x55b1,	// (0x0002bb1c) cell_hwr_candidate_pane_g4

0x0002,

0xfb5f,	// (0x000360ca) cell_hwr_candidate_pane_g_ParamLimits

0xfb5f,	// (0x000360ca) cell_hwr_candidate_pane_g

0x55d2,	// (0x0002bb3d) cell_vkb_candidate_pane_g3_ParamLimits

0x55d2,	// (0x0002bb3d) cell_vkb_candidate_pane_g3

0x55ed,	// (0x0002bb58) cell_vkb_candidate_pane_g4_ParamLimits

0x55ed,	// (0x0002bb58) cell_vkb_candidate_pane_g4

0xd26e,	// (0x000337d9) cell_app_pane_cp2_g1_ParamLimits

0xd26e,	// (0x000337d9) cell_app_pane_cp2_g1

0x56fc,	// (0x0002bc67) cell_app_pane_cp2_g2_ParamLimits

0x56fc,	// (0x0002bc67) cell_app_pane_cp2_g2

0x0001,

0xfba9,	// (0x00036114) cell_app_pane_cp2_g_ParamLimits

0xfba9,	// (0x00036114) cell_app_pane_cp2_g

0x5708,	// (0x0002bc73) cell_app_pane_cp2_t1_ParamLimits

0x5708,	// (0x0002bc73) cell_app_pane_cp2_t1

0xcb2f,	// (0x0003309a) grid_highlight_pane_cp1_ParamLimits

0xcb2f,	// (0x0003309a) grid_highlight_pane_cp1

0x1ec7,	// (0x00028432) cell_hwr_candidate_pane_cp1_ParamLimits

0x1ec7,	// (0x00028432) cell_hwr_candidate_pane_cp1

0x5279,	// (0x0002b7e4) fep_hwr_candidate_drop_down_list_pane_g1

0x571a,	// (0x0002bc85) fep_hwr_candidate_drop_down_list_pane_g2

0x5727,	// (0x0002bc92) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x00036119) fep_hwr_candidate_drop_down_list_pane_g

0x1ee6,	// (0x00028451) fep_hwr_candidate_drop_down_list_scroll_pane

0x1eef,	// (0x0002845a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1eef,	// (0x0002845a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1efc,	// (0x00028467) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1efc,	// (0x00028467) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1f09,	// (0x00028474) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1f09,	// (0x00028474) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x55d2,	// (0x0002bb3d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x55d2,	// (0x0002bb3d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x55ed,	// (0x0002bb58) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x55ed,	// (0x0002bb58) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1f16,	// (0x00028481) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1f16,	// (0x00028481) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1f31,	// (0x0002849c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1f31,	// (0x0002849c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1f4c,	// (0x000284b7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1f4c,	// (0x000284b7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb5,	// (0x00036120) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb5,	// (0x00036120) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5734,	// (0x0002bc9f) cell_vkb_candidate_pane_cp1_ParamLimits

0x5734,	// (0x0002bc9f) cell_vkb_candidate_pane_cp1

0x5279,	// (0x0002b7e4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5279,	// (0x0002b7e4) fep_vkb_candidate_drop_down_list_pane_g1

0x571a,	// (0x0002bc85) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x571a,	// (0x0002bc85) fep_vkb_candidate_drop_down_list_pane_g2

0x5727,	// (0x0002bc92) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5727,	// (0x0002bc92) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x00036119) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbae,	// (0x00036119) fep_vkb_candidate_drop_down_list_pane_g

0x5754,	// (0x0002bcbf) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5754,	// (0x0002bcbf) fep_vkb_candidate_drop_down_list_scroll_pane

0x5761,	// (0x0002bccc) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5761,	// (0x0002bccc) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x576e,	// (0x0002bcd9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x576e,	// (0x0002bcd9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x577a,	// (0x0002bce5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x577a,	// (0x0002bce5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5590,	// (0x0002bafb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5590,	// (0x0002bafb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x55b1,	// (0x0002bb1c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x55b1,	// (0x0002bb1c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5786,	// (0x0002bcf1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5786,	// (0x0002bcf1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x57a7,	// (0x0002bd12) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x57a7,	// (0x0002bd12) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x57c8,	// (0x0002bd33) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x57c8,	// (0x0002bd33) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x00036131) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x00036131) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9735,	// (0x0002fca0) title_pane_g1_ParamLimits

0x9748,	// (0x0002fcb3) title_pane_g2_ParamLimits

0xf54e,	// (0x00035ab9) title_pane_g_ParamLimits

0xcf52,	// (0x000334bd) aid_call2_pane

0xcf5a,	// (0x000334c5) aid_call_pane

0xcf62,	// (0x000334cd) popup_clock_analogue_window_g1

0xcf62,	// (0x000334cd) popup_clock_analogue_window_g2

0x0096,	// (0x00026601) popup_clock_analogue_window_g3

0x009f,	// (0x0002660a) popup_clock_analogue_window_g4

0xc717,	// (0x00032c82) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x00035c54) popup_clock_analogue_window_g

0x00a7,	// (0x00026612) popup_clock_analogue_window_t1

0x00df,	// (0x0002664a) clock_digital_number_pane_ParamLimits

0x00df,	// (0x0002664a) clock_digital_number_pane

0x00eb,	// (0x00026656) clock_digital_number_pane_cp02_ParamLimits

0x00eb,	// (0x00026656) clock_digital_number_pane_cp02

0x00f7,	// (0x00026662) clock_digital_number_pane_cp03_ParamLimits

0x00f7,	// (0x00026662) clock_digital_number_pane_cp03

0x0103,	// (0x0002666e) clock_digital_number_pane_cp04_ParamLimits

0x0103,	// (0x0002666e) clock_digital_number_pane_cp04

0x010f,	// (0x0002667a) clock_digital_separator_pane_ParamLimits

0x010f,	// (0x0002667a) clock_digital_separator_pane

0x011b,	// (0x00026686) popup_clock_digital_window_t1_ParamLimits

0x011b,	// (0x00026686) popup_clock_digital_window_t1

0xc717,	// (0x00032c82) clock_digital_number_pane_g1

0xc717,	// (0x00032c82) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x00035c5f) clock_digital_number_pane_g

0xc717,	// (0x00032c82) clock_digital_separator_pane_g1

0xc717,	// (0x00032c82) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x00035c5f) clock_digital_separator_pane_g

0xac6c,	// (0x000311d7) aid_fill_nsta_ParamLimits

0xada2,	// (0x0003130d) indicator_nsta_pane_ParamLimits

0x1430,	// (0x0002799b) popup_clock_analogue_window

0x1430,	// (0x0002799b) popup_clock_digital_window

0xd1b8,	// (0x00033723) grid_indicator_nsta_pane_ParamLimits

0x4a13,	// (0x0002af7e) clock_nsta_pane_t2

0x0001,

0xfa98,	// (0x00036003) clock_nsta_pane_t

0xf52f,	// (0x00035a9a) aid_size_max_handle

0x9f18,	// (0x00030483) aid_size_min_handle

0x0655,	// (0x00026bc0) editor_scroll_pane

0x57e3,	// (0x0002bd4e) ex_editor_pane

0xcc4e,	// (0x000331b9) scroll_pane_cp13

0xcad7,	// (0x00033042) scroll_pane_cp14

0xcf91,	// (0x000334fc) scroll_pane_cp36

0x9fe2,	// (0x0003054d) list_single_graphic_hl_pane_cp2_ParamLimits

0x9fe2,	// (0x0003054d) list_single_graphic_hl_pane_cp2

0xb9f6,	// (0x00031f61) list_single_graphic_hl_pane_ParamLimits

0xb9f6,	// (0x00031f61) list_single_graphic_hl_pane

0x934d,	// (0x0002f8b8) aid_size_min_hl_cp1

0x57eb,	// (0x0002bd56) list_highlight_pane_cp34_ParamLimits

0x57eb,	// (0x0002bd56) list_highlight_pane_cp34

0x57fc,	// (0x0002bd67) list_single_graphic_hl_pane_g1_ParamLimits

0x57fc,	// (0x0002bd67) list_single_graphic_hl_pane_g1

0x9356,	// (0x0002f8c1) list_single_graphic_hl_pane_g2_ParamLimits

0x9356,	// (0x0002f8c1) list_single_graphic_hl_pane_g2

0x9356,	// (0x0002f8c1) list_single_graphic_hl_pane_g3_ParamLimits

0x9356,	// (0x0002f8c1) list_single_graphic_hl_pane_g3

0xf207,	// (0x00035772) list_single_graphic_hl_pane_g4_ParamLimits

0xf207,	// (0x00035772) list_single_graphic_hl_pane_g4

0x9362,	// (0x0002f8cd) list_single_graphic_hl_pane_g5_ParamLimits

0x9362,	// (0x0002f8cd) list_single_graphic_hl_pane_g5

0x0004,

0xfbd7,	// (0x00036142) list_single_graphic_hl_pane_g_ParamLimits

0xfbd7,	// (0x00036142) list_single_graphic_hl_pane_g

0x9376,	// (0x0002f8e1) list_single_graphic_hl_pane_t1_ParamLimits

0x9376,	// (0x0002f8e1) list_single_graphic_hl_pane_t1

0x5809,	// (0x0002bd74) aid_size_min_hl_cp2

0x5812,	// (0x0002bd7d) list_highlight_pane_cp34_cp2_ParamLimits

0x5812,	// (0x0002bd7d) list_highlight_pane_cp34_cp2

0x57fc,	// (0x0002bd67) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x57fc,	// (0x0002bd67) list_single_graphic_hl_pane_g1_cp2

0x581f,	// (0x0002bd8a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x581f,	// (0x0002bd8a) list_single_graphic_hl_pane_g2_cp2

0xd28c,	// (0x000337f7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd28c,	// (0x000337f7) list_single_graphic_hl_pane_g3_cp2

0x058e,	// (0x00026af9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x058e,	// (0x00026af9) list_single_graphic_hl_pane_g4_cp2

0x5839,	// (0x0002bda4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5839,	// (0x0002bda4) list_single_graphic_hl_pane_g5_cp2

0xa385,	// (0x000308f0) control_pane_g4_ParamLimits

0xa385,	// (0x000308f0) control_pane_g4

0x0b8c,	// (0x000270f7) bg_popup_sub_pane_cp10_ParamLimits

0x5013,	// (0x0002b57e) list_choice_list_pane_ParamLimits

0x5022,	// (0x0002b58d) scroll_pane_cp23

0xc8a7,	// (0x00032e12) bg_popup_preview_window_pane_cp02_ParamLimits

0x565e,	// (0x0002bbc9) list_preview_fixed_pane_ParamLimits

0x5674,	// (0x0002bbdf) list_preview_fixed_pane_cp_ParamLimits

0x5674,	// (0x0002bbdf) list_preview_fixed_pane_cp

0x5680,	// (0x0002bbeb) popup_preview_fixed_window_g1_ParamLimits

0x5680,	// (0x0002bbeb) popup_preview_fixed_window_g1

0x568c,	// (0x0002bbf7) popup_preview_fixed_window_g2_ParamLimits

0x568c,	// (0x0002bbf7) popup_preview_fixed_window_g2

0x0002,

0xfb66,	// (0x000360d1) popup_preview_fixed_window_g_ParamLimits

0xfb66,	// (0x000360d1) popup_preview_fixed_window_g

0xf4a3,	// (0x00035a0e) aid_navi_side_left_pane_ParamLimits

0xf4b8,	// (0x00035a23) aid_navi_side_right_pane_ParamLimits

0xf4d0,	// (0x00035a3b) navi_icon_pane_stacon_ParamLimits

0xf4e4,	// (0x00035a4f) navi_navi_pane_stacon_ParamLimits

0xf4d0,	// (0x00035a3b) navi_text_pane_stacon_ParamLimits

0xc70d,	// (0x00032c78) main_text_info_pane

0x5863,	// (0x0002bdce) listscroll_text_info_pane

0x586b,	// (0x0002bdd6) list_text_info_pane_ParamLimits

0x586b,	// (0x0002bdd6) list_text_info_pane

0x587a,	// (0x0002bde5) scroll_pane_cp24_ParamLimits

0x587a,	// (0x0002bde5) scroll_pane_cp24

0xd29a,	// (0x00033805) list_text_info_pane_t1_ParamLimits

0xd29a,	// (0x00033805) list_text_info_pane_t1

0xa50d,	// (0x00030a78) popup_fast_swap2_window_ParamLimits

0xa50d,	// (0x00030a78) popup_fast_swap2_window

0x58cc,	// (0x0002be37) aid_size_cell_fast2

0xc70d,	// (0x00032c78) bg_popup_window_pane_cp17

0x2e96,	// (0x00029401) heading_pane_cp2

0xc9db,	// (0x00032f46) listscroll_fast2_pane

0x58d6,	// (0x0002be41) grid_fast2_pane

0x58e0,	// (0x0002be4b) listscroll_fast2_pane_g1

0x58e8,	// (0x0002be53) listscroll_fast2_pane_g2

0x0001,

0xfbe2,	// (0x0003614d) listscroll_fast2_pane_g

0xcc4e,	// (0x000331b9) scroll_pane_cp26

0x58f2,	// (0x0002be5d) cell_fast2_pane_ParamLimits

0x58f2,	// (0x0002be5d) cell_fast2_pane

0x5907,	// (0x0002be72) cell_fast2_pane_g1

0x5910,	// (0x0002be7b) cell_fast2_pane_g2

0x5919,	// (0x0002be84) cell_fast2_pane_g3

0x0002,

0xfbe7,	// (0x00036152) cell_fast2_pane_g

0xca0e,	// (0x00032f79) grid_highlight_pane_cp9

0xca23,	// (0x00032f8e) main_eswt_pane_ParamLimits

0xca23,	// (0x00032f8e) main_eswt_pane

0x588f,	// (0x0002bdfa) list_single_text_info_pane

0x5921,	// (0x0002be8c) eswt_ctrl_button_pane

0x5921,	// (0x0002be8c) eswt_ctrl_canvas_pane

0xd2b6,	// (0x00033821) eswt_ctrl_combo_pane

0x5921,	// (0x0002be8c) eswt_ctrl_default_pane

0x5921,	// (0x0002be8c) eswt_ctrl_label_pane

0x5931,	// (0x0002be9c) eswt_ctrl_wait_pane

0xd2be,	// (0x00033829) eswt_shell_pane

0xc70d,	// (0x00032c78) listscroll_eswt_app_pane

0x5959,	// (0x0002bec4) popup_eswt_tasktip_window_ParamLimits

0x5959,	// (0x0002bec4) popup_eswt_tasktip_window

0x1772,	// (0x00027cdd) bg_popup_window_pane_cp18

0x596a,	// (0x0002bed5) eswt_control_pane_g1_ParamLimits

0x596a,	// (0x0002bed5) eswt_control_pane_g1

0x5977,	// (0x0002bee2) eswt_control_pane_g2_ParamLimits

0x5977,	// (0x0002bee2) eswt_control_pane_g2

0x5984,	// (0x0002beef) eswt_control_pane_g3_ParamLimits

0x5984,	// (0x0002beef) eswt_control_pane_g3

0x5991,	// (0x0002befc) eswt_control_pane_g4_ParamLimits

0x5991,	// (0x0002befc) eswt_control_pane_g4

0x0003,

0xfbee,	// (0x00036159) eswt_control_pane_g_ParamLimits

0xfbee,	// (0x00036159) eswt_control_pane_g

0xcb2f,	// (0x0003309a) bg_button_pane_ParamLimits

0xcb2f,	// (0x0003309a) bg_button_pane

0xca23,	// (0x00032f8e) common_borders_pane_copy2_ParamLimits

0xca23,	// (0x00032f8e) common_borders_pane_copy2

0x599e,	// (0x0002bf09) control_button_pane_g1_ParamLimits

0x599e,	// (0x0002bf09) control_button_pane_g1

0x59aa,	// (0x0002bf15) control_button_pane_g2_ParamLimits

0x59aa,	// (0x0002bf15) control_button_pane_g2

0x59b6,	// (0x0002bf21) control_button_pane_g3_ParamLimits

0x59b6,	// (0x0002bf21) control_button_pane_g3

0x0002,

0xfbf7,	// (0x00036162) control_button_pane_g_ParamLimits

0xfbf7,	// (0x00036162) control_button_pane_g

0x59ca,	// (0x0002bf35) control_button_pane_t1

0x59d8,	// (0x0002bf43) control_button_pane_t2

0x0001,

0xfbfe,	// (0x00036169) control_button_pane_t

0x1686,	// (0x00027bf1) bg_button_pane_g1

0x168e,	// (0x00027bf9) bg_button_pane_g2

0x1696,	// (0x00027c01) bg_button_pane_g3

0x169e,	// (0x00027c09) bg_button_pane_g4

0x16a6,	// (0x00027c11) bg_button_pane_g5

0x16ae,	// (0x00027c19) bg_button_pane_g6

0x16b6,	// (0x00027c21) bg_button_pane_g7

0x16be,	// (0x00027c29) bg_button_pane_g8

0x16c6,	// (0x00027c31) bg_button_pane_g9

0x0008,

0xf84b,	// (0x00035db6) bg_button_pane_g

0x4fce,	// (0x0002b539) common_borders_pane_ParamLimits

0x4fce,	// (0x0002b539) common_borders_pane

0x596a,	// (0x0002bed5) eswt_control_pane_g1_copy1_ParamLimits

0x596a,	// (0x0002bed5) eswt_control_pane_g1_copy1

0x5977,	// (0x0002bee2) eswt_control_pane_g2_copy1_ParamLimits

0x5977,	// (0x0002bee2) eswt_control_pane_g2_copy1

0x5984,	// (0x0002beef) eswt_control_pane_g3_copy1_ParamLimits

0x5984,	// (0x0002beef) eswt_control_pane_g3_copy1

0x5991,	// (0x0002befc) eswt_control_pane_g4_copy1_ParamLimits

0x5991,	// (0x0002befc) eswt_control_pane_g4_copy1

0x5009,	// (0x0002b574) bg_eswt_ctrl_canvas_pane_g1

0x4fce,	// (0x0002b539) common_borders_pane_cp2_ParamLimits

0x4fce,	// (0x0002b539) common_borders_pane_cp2

0x4fce,	// (0x0002b539) common_borders_pane_cp3_ParamLimits

0x4fce,	// (0x0002b539) common_borders_pane_cp3

0x59e6,	// (0x0002bf51) separator_horizontal_pane

0x59ee,	// (0x0002bf59) separator_vertical_pane

0x596a,	// (0x0002bed5) eswt_control_pane_g1_copy2_ParamLimits

0x596a,	// (0x0002bed5) eswt_control_pane_g1_copy2

0x5977,	// (0x0002bee2) eswt_control_pane_g2_copy2_ParamLimits

0x5977,	// (0x0002bee2) eswt_control_pane_g2_copy2

0x5984,	// (0x0002beef) eswt_control_pane_g3_copy2_ParamLimits

0x5984,	// (0x0002beef) eswt_control_pane_g3_copy2

0x5991,	// (0x0002befc) eswt_control_pane_g4_copy2_ParamLimits

0x5991,	// (0x0002befc) eswt_control_pane_g4_copy2

0xc70d,	// (0x00032c78) common_borders_pane_cp4

0x59f7,	// (0x0002bf62) separator_horizontal_pane_g1

0x5a00,	// (0x0002bf6b) separator_horizontal_pane_g2

0x5a09,	// (0x0002bf74) separator_horizontal_pane_g3

0x0002,

0xfc03,	// (0x0003616e) separator_horizontal_pane_g

0x596a,	// (0x0002bed5) eswt_control_pane_g1_copy3_ParamLimits

0x596a,	// (0x0002bed5) eswt_control_pane_g1_copy3

0x5977,	// (0x0002bee2) eswt_control_pane_g2_copy3_ParamLimits

0x5977,	// (0x0002bee2) eswt_control_pane_g2_copy3

0x5984,	// (0x0002beef) eswt_control_pane_g3_copy3_ParamLimits

0x5984,	// (0x0002beef) eswt_control_pane_g3_copy3

0x5991,	// (0x0002befc) eswt_control_pane_g4_copy3_ParamLimits

0x5991,	// (0x0002befc) eswt_control_pane_g4_copy3

0xc70d,	// (0x00032c78) common_borders_pane_cp5

0x5a12,	// (0x0002bf7d) separator_vertical_pane_g1

0x5a1b,	// (0x0002bf86) separator_vertical_pane_g2

0x5a24,	// (0x0002bf8f) separator_vertical_pane_g3

0x0002,

0xfc0a,	// (0x00036175) separator_vertical_pane_g

0x596a,	// (0x0002bed5) eswt_control_pane_g1_copy4_ParamLimits

0x596a,	// (0x0002bed5) eswt_control_pane_g1_copy4

0x5977,	// (0x0002bee2) eswt_control_pane_g2_copy4_ParamLimits

0x5977,	// (0x0002bee2) eswt_control_pane_g2_copy4

0x5984,	// (0x0002beef) eswt_control_pane_g3_copy4_ParamLimits

0x5984,	// (0x0002beef) eswt_control_pane_g3_copy4

0x5991,	// (0x0002befc) eswt_control_pane_g4_copy4_ParamLimits

0x5991,	// (0x0002befc) eswt_control_pane_g4_copy4

0xd2de,	// (0x00033849) eswt_ctrl_combo_button_pane

0xd2e6,	// (0x00033851) eswt_ctrl_input_pane

0xd2ee,	// (0x00033859) popup_choice_list_window_cp70

0xd2f6,	// (0x00033861) eswt_ctrl_input_pane_t1

0xc70d,	// (0x00032c78) input_focus_pane_cp70

0x4fce,	// (0x0002b539) bg_button_pane_cp70_ParamLimits

0x4fce,	// (0x0002b539) bg_button_pane_cp70

0xd304,	// (0x0003386f) eswt_ctrl_combo_button_pane_g1

0x5a5b,	// (0x0002bfc6) wait_bar_pane_cp70

0x1772,	// (0x00027cdd) bg_popup_window_pane_cp70_ParamLimits

0x1772,	// (0x00027cdd) bg_popup_window_pane_cp70

0x5a63,	// (0x0002bfce) popup_eswt_tasktip_window_t1

0x5a79,	// (0x0002bfe4) wait_bar_pane_cp71_ParamLimits

0x5a79,	// (0x0002bfe4) wait_bar_pane_cp71

0x5a85,	// (0x0002bff0) grid_eswt_app_pane

0xce3e,	// (0x000333a9) scroll_pane_cp70

0xd30c,	// (0x00033877) cell_eswt_app_pane_ParamLimits

0xd30c,	// (0x00033877) cell_eswt_app_pane

0xd336,	// (0x000338a1) cell_eswt_app_pane_g1_ParamLimits

0xd336,	// (0x000338a1) cell_eswt_app_pane_g1

0xd365,	// (0x000338d0) cell_eswt_app_pane_g2_ParamLimits

0xd365,	// (0x000338d0) cell_eswt_app_pane_g2

0x0001,

0xfc11,	// (0x0003617c) cell_eswt_app_pane_g_ParamLimits

0xfc11,	// (0x0003617c) cell_eswt_app_pane_g

0xd389,	// (0x000338f4) cell_eswt_app_pane_t1_ParamLimits

0xd389,	// (0x000338f4) cell_eswt_app_pane_t1

0x5b43,	// (0x0002c0ae) grid_highlight_pane_cp70_ParamLimits

0x5b43,	// (0x0002c0ae) grid_highlight_pane_cp70

0x052a,	// (0x00026a95) set_content_pane_g1

0xa317,	// (0x00030882) status_small_volume_pane

0xbfff,	// (0x0003256a) status_small_volume_pane_g1

0xc007,	// (0x00032572) volume_small2_pane

0xc010,	// (0x0003257b) volume_small2_pane_g1

0xc019,	// (0x00032584) volume_small2_pane_g2

0xc022,	// (0x0003258d) volume_small2_pane_g3

0xc02b,	// (0x00032596) volume_small2_pane_g4

0xc034,	// (0x0003259f) volume_small2_pane_g5

0xc03d,	// (0x000325a8) volume_small2_pane_g6

0xc046,	// (0x000325b1) volume_small2_pane_g7

0xc04f,	// (0x000325ba) volume_small2_pane_g8

0xc058,	// (0x000325c3) volume_small2_pane_g9

0xc061,	// (0x000325cc) volume_small2_pane_g10

0x0009,

0xfc16,	// (0x00036181) volume_small2_pane_g

0x53c1,	// (0x0002b92c) fep_vkb_top_text_pane_g1_ParamLimits

0xd216,	// (0x00033781) fep_vkb_top_text_pane_t1_ParamLimits

0x5698,	// (0x0002bc03) popup_preview_fixed_window_g3_ParamLimits

0x5698,	// (0x0002bc03) popup_preview_fixed_window_g3

0xabaa,	// (0x00031115) popup_toolbar_trans_pane

0xb88f,	// (0x00031dfa) aid_height_set_list_ParamLimits

0x3dea,	// (0x0002a355) aid_size_parent_ParamLimits

0x0b8c,	// (0x000270f7) list_highlight_pane_cp2_ParamLimits

0x052a,	// (0x00026a95) set_content_pane_g1_ParamLimits

0xba08,	// (0x00031f73) list_single_image_pane_ParamLimits

0xba08,	// (0x00031f73) list_single_image_pane

0xd3bb,	// (0x00033926) aid_size_cell_image_ParamLimits

0xd3bb,	// (0x00033926) aid_size_cell_image

0xd3c8,	// (0x00033933) grid_single_image_pane_ParamLimits

0xd3c8,	// (0x00033933) grid_single_image_pane

0x5b6a,	// (0x0002c0d5) list_single_image_pane_g1_ParamLimits

0x5b6a,	// (0x0002c0d5) list_single_image_pane_g1

0x5b76,	// (0x0002c0e1) list_single_image_pane_g2_ParamLimits

0x5b76,	// (0x0002c0e1) list_single_image_pane_g2

0x0001,

0xfc2b,	// (0x00036196) list_single_image_pane_g_ParamLimits

0xfc2b,	// (0x00036196) list_single_image_pane_g

0x5b8a,	// (0x0002c0f5) list_single_image_pane_t1_ParamLimits

0x5b8a,	// (0x0002c0f5) list_single_image_pane_t1

0xd3d4,	// (0x0003393f) cell_image_list_pane_ParamLimits

0xd3d4,	// (0x0003393f) cell_image_list_pane

0xd3e8,	// (0x00033953) cell_image_list_pane_g1

0xd3f1,	// (0x0003395c) cell_image_list_pane_g2

0x0001,

0xfc30,	// (0x0003619b) cell_image_list_pane_g

0xd3fa,	// (0x00033965) aid_size_cell_tb_trans_pane

0xcb2f,	// (0x0003309a) bg_tb_trans_pane

0xd40c,	// (0x00033977) grid_tb_trans_pane

0x1686,	// (0x00027bf1) bg_tb_trans_pane_g1

0x168e,	// (0x00027bf9) bg_tb_trans_pane_g2

0x1696,	// (0x00027c01) bg_tb_trans_pane_g3

0x169e,	// (0x00027c09) bg_tb_trans_pane_g4

0x16a6,	// (0x00027c11) bg_tb_trans_pane_g5

0x16be,	// (0x00027c29) bg_tb_trans_pane_g6

0x16c6,	// (0x00027c31) bg_tb_trans_pane_g7

0x16ae,	// (0x00027c19) bg_tb_trans_pane_g8

0x16b6,	// (0x00027c21) bg_tb_trans_pane_g9

0x0008,

0xfc35,	// (0x000361a0) bg_tb_trans_pane_g

0xd420,	// (0x0003398b) cell_toolbar_trans_pane_ParamLimits

0xd420,	// (0x0003398b) cell_toolbar_trans_pane

0x5009,	// (0x0002b574) cell_toolbar_trans_pane_g1

0xbd1f,	// (0x0003228a) list_form2_midp_pane_t1

0xbd2d,	// (0x00032298) list_form2_midp_pane_t2

0x0001,

0xfade,	// (0x00036049) list_form2_midp_pane_t

0x4bf0,	// (0x0002b15b) scroll_pane_cp51_ParamLimits

0x4dac,	// (0x0002b317) form2_midp_wait_pane_g1

0x4db5,	// (0x0002b320) form2_midp_wait_pane_g2

0x4dbe,	// (0x0002b329) form2_midp_wait_pane_g3

0x0002,

0xfaf3,	// (0x0003605e) form2_midp_wait_pane_g

0xc77d,	// (0x00032ce8) list_highlight_pane_cp21_ParamLimits

0x4e06,	// (0x0002b371) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4e15,	// (0x0002b380) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xecbd,	// (0x00035228) list_single_2graphic_im_pane_ParamLimits

0xecbd,	// (0x00035228) list_single_2graphic_im_pane

0xd446,	// (0x000339b1) list_single_2graphic_im_pane_g1_ParamLimits

0xd446,	// (0x000339b1) list_single_2graphic_im_pane_g1

0xd457,	// (0x000339c2) list_single_2graphic_im_pane_g2_ParamLimits

0xd457,	// (0x000339c2) list_single_2graphic_im_pane_g2

0xd463,	// (0x000339ce) list_single_2graphic_im_pane_g3_ParamLimits

0xd463,	// (0x000339ce) list_single_2graphic_im_pane_g3

0x0003,

0xfc48,	// (0x000361b3) list_single_2graphic_im_pane_g_ParamLimits

0xfc48,	// (0x000361b3) list_single_2graphic_im_pane_g

0xd477,	// (0x000339e2) list_single_2graphic_im_pane_t1_ParamLimits

0xd477,	// (0x000339e2) list_single_2graphic_im_pane_t1

0x56a4,	// (0x0002bc0f) list_single_graphic_2heading_pane_fp_ParamLimits

0x56a4,	// (0x0002bc0f) list_single_graphic_2heading_pane_fp

0xf079,	// (0x000355e4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf079,	// (0x000355e4) list_single_graphic_2heading_pane_fp_g1

0x56ba,	// (0x0002bc25) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x56ba,	// (0x0002bc25) list_single_graphic_2heading_pane_fp_g2

0xf042,	// (0x000355ad) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf042,	// (0x000355ad) list_single_graphic_2heading_pane_fp_g3

0xf04e,	// (0x000355b9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf04e,	// (0x000355b9) list_single_graphic_2heading_pane_fp_g4

0x56c6,	// (0x0002bc31) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x56c6,	// (0x0002bc31) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb76,	// (0x000360e1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb76,	// (0x000360e1) list_single_graphic_2heading_pane_fp_g

0xf213,	// (0x0003577e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf213,	// (0x0003577e) list_single_graphic_2heading_pane_fp_t1

0xf0b1,	// (0x0003561c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf0b1,	// (0x0003561c) list_single_graphic_2heading_pane_fp_t2

0xf229,	// (0x00035794) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf229,	// (0x00035794) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc51,	// (0x000361bc) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc51,	// (0x000361bc) list_single_graphic_2heading_pane_fp_t

0x5095,	// (0x0002b600) fep_hwr_write_pane_g5_ParamLimits

0x5095,	// (0x0002b600) fep_hwr_write_pane_g5

0x50a1,	// (0x0002b60c) fep_hwr_write_pane_g6_ParamLimits

0x50a1,	// (0x0002b60c) fep_hwr_write_pane_g6

0xd2be,	// (0x00033829) eswt_shell_pane_ParamLimits

0x1772,	// (0x00027cdd) bg_popup_window_pane_cp18_ParamLimits

0x3d32,	// (0x0002a29d) heading_pane_cp70

0x5a63,	// (0x0002bfce) popup_eswt_tasktip_window_t1_ParamLimits

0xacc7,	// (0x00031232) aid_touch_tab_arrow_left

0xacdd,	// (0x00031248) aid_touch_tab_arrow_right

0x9760,	// (0x0002fccb) title_pane_g3_ParamLimits

0x9760,	// (0x0002fccb) title_pane_g3

0xcaf7,	// (0x00033062) set_value_pane_g1

0xabaa,	// (0x00031115) popup_toolbar_trans_pane_ParamLimits

0xd3fa,	// (0x00033965) aid_size_cell_tb_trans_pane_ParamLimits

0xcb2f,	// (0x0003309a) bg_tb_trans_pane_ParamLimits

0xd40c,	// (0x00033977) grid_tb_trans_pane_ParamLimits

0xc8a7,	// (0x00032e12) cont_note_pane_ParamLimits

0xc8a7,	// (0x00032e12) cont_note_pane

0xca23,	// (0x00032f8e) cont_snote2_single_text_pane_ParamLimits

0xca23,	// (0x00032f8e) cont_snote2_single_text_pane

0xca23,	// (0x00032f8e) cont_snote2_single_graphic_pane_ParamLimits

0xca23,	// (0x00032f8e) cont_snote2_single_graphic_pane

0x30b5,	// (0x00029620) cont_note_wait_pane_ParamLimits

0x30b5,	// (0x00029620) cont_note_wait_pane

0x30b5,	// (0x00029620) cont_note_image_pane_ParamLimits

0x30b5,	// (0x00029620) cont_note_image_pane

0x5c80,	// (0x0002c1eb) popup_note2_window_g1_ParamLimits

0x5c80,	// (0x0002c1eb) popup_note2_window_g1

0xd4b5,	// (0x00033a20) popup_note2_window_t1_ParamLimits

0xd4b5,	// (0x00033a20) popup_note2_window_t1

0xd4fa,	// (0x00033a65) popup_note2_window_t2_ParamLimits

0xd4fa,	// (0x00033a65) popup_note2_window_t2

0xd53f,	// (0x00033aaa) popup_note2_window_t3_ParamLimits

0xd53f,	// (0x00033aaa) popup_note2_window_t3

0x5d89,	// (0x0002c2f4) popup_note2_window_t4_ParamLimits

0x5d89,	// (0x0002c2f4) popup_note2_window_t4

0xc92b,	// (0x00032e96) popup_note2_window_t5_ParamLimits

0xc92b,	// (0x00032e96) popup_note2_window_t5

0x0004,

0xfc5d,	// (0x000361c8) popup_note2_window_t_ParamLimits

0xfc5d,	// (0x000361c8) popup_note2_window_t

0x5db8,	// (0x0002c323) popup_note2_image_window_g1_ParamLimits

0x5db8,	// (0x0002c323) popup_note2_image_window_g1

0xd584,	// (0x00033aef) popup_note2_image_window_g2_ParamLimits

0xd584,	// (0x00033aef) popup_note2_image_window_g2

0x0001,

0xfc68,	// (0x000361d3) popup_note2_image_window_g_ParamLimits

0xfc68,	// (0x000361d3) popup_note2_image_window_g

0x5dd6,	// (0x0002c341) popup_note2_image_window_t1_ParamLimits

0x5dd6,	// (0x0002c341) popup_note2_image_window_t1

0x5dee,	// (0x0002c359) popup_note2_image_window_t2_ParamLimits

0x5dee,	// (0x0002c359) popup_note2_image_window_t2

0x5e06,	// (0x0002c371) popup_note2_image_window_t3_ParamLimits

0x5e06,	// (0x0002c371) popup_note2_image_window_t3

0x0002,

0xfc6d,	// (0x000361d8) popup_note2_image_window_t_ParamLimits

0xfc6d,	// (0x000361d8) popup_note2_image_window_t

0x30c3,	// (0x0002962e) popup_note2_wait_window_g1_ParamLimits

0x30c3,	// (0x0002962e) popup_note2_wait_window_g1

0x30cf,	// (0x0002963a) popup_note2_wait_window_g2_ParamLimits

0x30cf,	// (0x0002963a) popup_note2_wait_window_g2

0x30db,	// (0x00029646) popup_note2_wait_window_g3_ParamLimits

0x30db,	// (0x00029646) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x00035d98) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x00035d98) popup_note2_wait_window_g

0x5e22,	// (0x0002c38d) popup_note2_wait_window_t1_ParamLimits

0x5e22,	// (0x0002c38d) popup_note2_wait_window_t1

0x5e40,	// (0x0002c3ab) popup_note2_wait_window_t2_ParamLimits

0x5e40,	// (0x0002c3ab) popup_note2_wait_window_t2

0x5e5e,	// (0x0002c3c9) popup_note2_wait_window_t3_ParamLimits

0x5e5e,	// (0x0002c3c9) popup_note2_wait_window_t3

0x5e70,	// (0x0002c3db) popup_note2_wait_window_t4_ParamLimits

0x5e70,	// (0x0002c3db) popup_note2_wait_window_t4

0x0003,

0xfc74,	// (0x000361df) popup_note2_wait_window_t_ParamLimits

0xfc74,	// (0x000361df) popup_note2_wait_window_t

0x5e82,	// (0x0002c3ed) wait_bar2_pane_ParamLimits

0x5e82,	// (0x0002c3ed) wait_bar2_pane

0x5e9a,	// (0x0002c405) popup_snote2_single_text_window_g1_ParamLimits

0x5e9a,	// (0x0002c405) popup_snote2_single_text_window_g1

0x5ec2,	// (0x0002c42d) popup_snote2_single_text_window_t1_ParamLimits

0x5ec2,	// (0x0002c42d) popup_snote2_single_text_window_t1

0x5f0e,	// (0x0002c479) popup_snote2_single_text_window_t2_ParamLimits

0x5f0e,	// (0x0002c479) popup_snote2_single_text_window_t2

0x5f5a,	// (0x0002c4c5) popup_snote2_single_text_window_t3_ParamLimits

0x5f5a,	// (0x0002c4c5) popup_snote2_single_text_window_t3

0x5f9b,	// (0x0002c506) popup_snote2_single_text_window_t4_ParamLimits

0x5f9b,	// (0x0002c506) popup_snote2_single_text_window_t4

0x5fd1,	// (0x0002c53c) popup_snote2_single_text_window_t5_ParamLimits

0x5fd1,	// (0x0002c53c) popup_snote2_single_text_window_t5

0x0004,

0xfc7d,	// (0x000361e8) popup_snote2_single_text_window_t_ParamLimits

0xfc7d,	// (0x000361e8) popup_snote2_single_text_window_t

0xd596,	// (0x00033b01) popup_snote2_single_graphic_window_g1_ParamLimits

0xd596,	// (0x00033b01) popup_snote2_single_graphic_window_g1

0x6024,	// (0x0002c58f) popup_snote2_single_graphic_window_g2_ParamLimits

0x6024,	// (0x0002c58f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc88,	// (0x000361f3) popup_snote2_single_graphic_window_g_ParamLimits

0xfc88,	// (0x000361f3) popup_snote2_single_graphic_window_g

0x604c,	// (0x0002c5b7) popup_snote2_single_graphic_window_t1_ParamLimits

0x604c,	// (0x0002c5b7) popup_snote2_single_graphic_window_t1

0x6098,	// (0x0002c603) popup_snote2_single_graphic_window_t2_ParamLimits

0x6098,	// (0x0002c603) popup_snote2_single_graphic_window_t2

0x5f5a,	// (0x0002c4c5) popup_snote2_single_graphic_window_t3_ParamLimits

0x5f5a,	// (0x0002c4c5) popup_snote2_single_graphic_window_t3

0x5f9b,	// (0x0002c506) popup_snote2_single_graphic_window_t4_ParamLimits

0x5f9b,	// (0x0002c506) popup_snote2_single_graphic_window_t4

0x5fd1,	// (0x0002c53c) popup_snote2_single_graphic_window_t5_ParamLimits

0x5fd1,	// (0x0002c53c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8d,	// (0x000361f8) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8d,	// (0x000361f8) popup_snote2_single_graphic_window_t

0x4aad,	// (0x0002b018) clock_nsta_pane_cp2_t1

0x4aad,	// (0x0002b018) clock_nsta_pane_cp2_t2

0x0001,

0xfab4,	// (0x0003601f) clock_nsta_pane_cp2_t

0x90d5,	// (0x0002f640) form_field_data_wide_pane_g1_ParamLimits

0xcb3d,	// (0x000330a8) form_field_data_wide_pane_g2_ParamLimits

0xcb3d,	// (0x000330a8) form_field_data_wide_pane_g2

0xcb49,	// (0x000330b4) form_field_data_wide_pane_g3_ParamLimits

0xcb49,	// (0x000330b4) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x00035bd7) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x00035bd7) form_field_data_wide_pane_g

0xbc50,	// (0x000321bb) grid_touch_3_pane_ParamLimits

0xbc50,	// (0x000321bb) grid_touch_3_pane

0xd5be,	// (0x00033b29) cell_touch_3_pane_ParamLimits

0xd5be,	// (0x00033b29) cell_touch_3_pane

0x5009,	// (0x0002b574) cell_touch_3_pane_g1

0x5009,	// (0x0002b574) cell_touch_3_pane_g2

0x0001,

0xfb39,	// (0x000360a4) cell_touch_3_pane_g

0xc95d,	// (0x00032ec8) cont_query_data_pane

0xc965,	// (0x00032ed0) cont_query_data_pane_cp1

0x6112,	// (0x0002c67d) button_value_adjust_pane_cp7

0x611a,	// (0x0002c685) query_popup_pane_cp3

0xcfc3,	// (0x0003352e) bg_popup_sub_pane_cp22_ParamLimits

0xa06f,	// (0x000305da) navi_navi_volume_pane_cp2

0xa07e,	// (0x000305e9) popup_side_volume_key_window_g2

0xa08d,	// (0x000305f8) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x00035c6d) popup_side_volume_key_window_g

0xa09c,	// (0x00030607) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x00035c74) popup_side_volume_key_window_t

0xa161,	// (0x000306cc) popup_side_volume_key_window_ParamLimits

0x8db0,	// (0x0002f31b) list_double_graphic_pane_g4_ParamLimits

0x8db0,	// (0x0002f31b) list_double_graphic_pane_g4

0x9339,	// (0x0002f8a4) list_single_2heading_msg_pane_ParamLimits

0x9339,	// (0x0002f8a4) list_single_2heading_msg_pane

0x938c,	// (0x0002f8f7) list_single_2heading_msg_pane_g1_ParamLimits

0x938c,	// (0x0002f8f7) list_single_2heading_msg_pane_g1

0x9398,	// (0x0002f903) list_single_2heading_msg_pane_g2_ParamLimits

0x9398,	// (0x0002f903) list_single_2heading_msg_pane_g2

0x93ab,	// (0x0002f916) list_single_2heading_msg_pane_g3_ParamLimits

0x93ab,	// (0x0002f916) list_single_2heading_msg_pane_g3

0xf249,	// (0x000357b4) list_single_2heading_msg_pane_g4_ParamLimits

0xf249,	// (0x000357b4) list_single_2heading_msg_pane_g4

0x0003,

0xfc98,	// (0x00036203) list_single_2heading_msg_pane_g_ParamLimits

0xfc98,	// (0x00036203) list_single_2heading_msg_pane_g

0xf261,	// (0x000357cc) list_single_2heading_msg_pane_t1_ParamLimits

0xf261,	// (0x000357cc) list_single_2heading_msg_pane_t1

0x93b7,	// (0x0002f922) list_single_2heading_msg_pane_t2_ParamLimits

0x93b7,	// (0x0002f922) list_single_2heading_msg_pane_t2

0x9422,	// (0x0002f98d) list_single_2heading_msg_pane_t3_ParamLimits

0x9422,	// (0x0002f98d) list_single_2heading_msg_pane_t3

0xf289,	// (0x000357f4) list_single_2heading_msg_pane_t4_ParamLimits

0xf289,	// (0x000357f4) list_single_2heading_msg_pane_t4

0x0003,

0xfca1,	// (0x0003620c) list_single_2heading_msg_pane_t_ParamLimits

0xfca1,	// (0x0003620c) list_single_2heading_msg_pane_t

0xc72b,	// (0x00032c96) title_pane_g4_ParamLimits

0xc72b,	// (0x00032c96) title_pane_g4

0xf3f4,	// (0x0003595f) title_pane_stacon_g3_ParamLimits

0xf3f4,	// (0x0003595f) title_pane_stacon_g3

0x5c43,	// (0x0002c1ae) list_single_2graphic_im_pane_g4_ParamLimits

0x5c43,	// (0x0002c1ae) list_single_2graphic_im_pane_g4

0xb680,	// (0x00031beb) popup_side_volume_key_window_cp

0x430a,	// (0x0002a875) main_idle_act2_pane_t1

0x16ce,	// (0x00027c39) toolbar_button_pane_g10

0x9d6a,	// (0x000302d5) popup_toolbar_window_cp1

0x4a9e,	// (0x0002b009) clock_nsta_pane_cp_t1

0x4a9e,	// (0x0002b009) clock_nsta_pane_cp_t2

0x0001,

0xfaaf,	// (0x0003601a) clock_nsta_pane_cp_t

0xa06f,	// (0x000305da) navi_navi_volume_pane_cp2_ParamLimits

0x01a1,	// (0x0002670c) popup_side_volume_key_window_g1_ParamLimits

0xa07e,	// (0x000305e9) popup_side_volume_key_window_g2_ParamLimits

0xa08d,	// (0x000305f8) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x00035c6d) popup_side_volume_key_window_g_ParamLimits

0x1c77,	// (0x000281e2) fep_hwr_aid_pane

0xd1ce,	// (0x00033739) bg_fep_hwr_top_pane_g4_ParamLimits

0x5065,	// (0x0002b5d0) fep_hwr_top_pane_g1_ParamLimits

0x5077,	// (0x0002b5e2) fep_hwr_top_pane_g2_ParamLimits

0x1d30,	// (0x0002829b) fep_hwr_top_pane_g3_ParamLimits

0xfb04,	// (0x0003606f) fep_hwr_top_pane_g_ParamLimits

0x1d45,	// (0x000282b0) fep_hwr_top_text_pane_ParamLimits

0x38bf,	// (0x00029e2a) aid_touch_tab_arrow_arrow_2

0x38c8,	// (0x00029e33) aid_touch_tab_arrow_left_2

0x1c8b,	// (0x000281f6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1cc2,	// (0x0002822d) fep_hwr_prediction_pane

0x51d0,	// (0x0002b73b) fep_vkb_prediction_pane

0xd1f6,	// (0x00033761) fep_vkb_side_pane_g3_ParamLimits

0xd1f6,	// (0x00033761) fep_vkb_side_pane_g3

0x5279,	// (0x0002b7e4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x571a,	// (0x0002bc85) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5727,	// (0x0002bc92) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbae,	// (0x00036119) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x613f,	// (0x0002c6aa) fep_hwr_prediction_pane_g1

0x1fd2,	// (0x0002853d) fep_hwr_prediction_pane_g2

0x1fda,	// (0x00028545) fep_hwr_prediction_pane_g3

0x1fe2,	// (0x0002854d) fep_hwr_prediction_pane_g4

0x0003,

0xfcaa,	// (0x00036215) fep_hwr_prediction_pane_g

0x613f,	// (0x0002c6aa) fep_vkb_prediction_pane_g1

0x6149,	// (0x0002c6b4) fep_vkb_prediction_pane_g2

0x6151,	// (0x0002c6bc) fep_vkb_prediction_pane_g3

0x6159,	// (0x0002c6c4) fep_vkb_prediction_pane_g4

0x0003,

0xfcb3,	// (0x0003621e) fep_vkb_prediction_pane_g

0xb811,	// (0x00031d7c) slider_set_pane_g3

0xb825,	// (0x00031d90) slider_set_pane_g4

0xb83d,	// (0x00031da8) slider_set_pane_g5

0xb811,	// (0x00031d7c) slider_set_pane_g6

0xb853,	// (0x00031dbe) slider_set_pane_g7

0x3f4b,	// (0x0002a4b6) slider_form_pane_g3

0x3f54,	// (0x0002a4bf) slider_form_pane_g4

0x3f5c,	// (0x0002a4c7) slider_form_pane_g5

0x3f4b,	// (0x0002a4b6) slider_form_pane_g6

0xb9da,	// (0x00031f45) slider_form_pane_g7

0x45b5,	// (0x0002ab20) slider_set_pane_vc_g3

0x45be,	// (0x0002ab29) slider_set_pane_vc_g4

0x45c7,	// (0x0002ab32) slider_set_pane_vc_g5

0x45b5,	// (0x0002ab20) slider_set_pane_vc_g6

0x45d0,	// (0x0002ab3b) slider_set_pane_vc_g7

0x4782,	// (0x0002aced) slider_form_pane_vc_g1

0x478b,	// (0x0002acf6) slider_form_pane_vc_g2

0x4794,	// (0x0002acff) slider_form_pane_vc_g3

0x4782,	// (0x0002aced) slider_form_pane_vc_g4

0x479d,	// (0x0002ad08) slider_form_pane_vc_g5

0x0004,

0xfa81,	// (0x00035fec) slider_form_pane_vc_g

0xc70d,	// (0x00032c78) main_idle_act3_pane

0x6161,	// (0x0002c6cc) ai3_links_pane

0xd607,	// (0x00033b72) popup_ai3_data_window_ParamLimits

0xd607,	// (0x00033b72) popup_ai3_data_window

0xc70d,	// (0x00032c78) grid_ai3_links_pane

0xd61f,	// (0x00033b8a) cell_ai3_links_pane_ParamLimits

0xd61f,	// (0x00033b8a) cell_ai3_links_pane

0x619a,	// (0x0002c705) bg_popup_sub_pane_cp11

0x61a7,	// (0x0002c712) cell_ai3_links_pane_g1

0xc70d,	// (0x00032c78) bg_popup_sub_pane_cp12

0x61cc,	// (0x0002c737) heading_ai3_data_pane

0x61d4,	// (0x0002c73f) list_ai3_gene_pane

0x61e0,	// (0x0002c74b) popup_ai3_data_window_g1

0x61e8,	// (0x0002c753) heading_ai3_data_pane_g1

0x61f0,	// (0x0002c75b) heading_ai3_data_pane_t1

0xd639,	// (0x00033ba4) list_double_ai3_gene_pane_ParamLimits

0xd639,	// (0x00033ba4) list_double_ai3_gene_pane

0x620b,	// (0x0002c776) list_single_ai3_gene_pane_ParamLimits

0x620b,	// (0x0002c776) list_single_ai3_gene_pane

0x4fce,	// (0x0002b539) list_highlight_pane_cp7_ParamLimits

0x4fce,	// (0x0002b539) list_highlight_pane_cp7

0x6218,	// (0x0002c783) list_single_a13_gene_pane_t1_ParamLimits

0x6218,	// (0x0002c783) list_single_a13_gene_pane_t1

0x622f,	// (0x0002c79a) list_single_ai3_gene_pane_g1

0x6238,	// (0x0002c7a3) list_single_ai3_gene_pane_g2

0x0001,

0xfcbc,	// (0x00036227) list_single_ai3_gene_pane_g

0x6240,	// (0x0002c7ab) list_double_ai3_gene_pane_g1_ParamLimits

0x6240,	// (0x0002c7ab) list_double_ai3_gene_pane_g1

0xd646,	// (0x00033bb1) list_double_ai3_gene_pane_t1_ParamLimits

0xd646,	// (0x00033bb1) list_double_ai3_gene_pane_t1

0x6268,	// (0x0002c7d3) list_double_ai3_gene_pane_t2_ParamLimits

0x6268,	// (0x0002c7d3) list_double_ai3_gene_pane_t2

0x627d,	// (0x0002c7e8) list_double_ai3_gene_pane_t3_ParamLimits

0x627d,	// (0x0002c7e8) list_double_ai3_gene_pane_t3

0x0002,

0xfcc1,	// (0x0003622c) list_double_ai3_gene_pane_t_ParamLimits

0xfcc1,	// (0x0003622c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf23f,	// (0x000357aa) aid_size_min_col_2

0xd5f1,	// (0x00033b5c) aid_size_min_msg_ParamLimits

0xd5f1,	// (0x00033b5c) aid_size_min_msg

0xd20a,	// (0x00033775) fep_vkb_top_text_pane_g2_ParamLimits

0xd20a,	// (0x00033775) fep_vkb_top_text_pane_g2

0x0001,

0xfb34,	// (0x0003609f) fep_vkb_top_text_pane_g_ParamLimits

0xfb34,	// (0x0003609f) fep_vkb_top_text_pane_g

0xc70d,	// (0x00032c78) main_hc_apps_shell_pane

0x629a,	// (0x0002c805) grid_hc_apps_pane_ParamLimits

0x629a,	// (0x0002c805) grid_hc_apps_pane

0x62a9,	// (0x0002c814) list_hc_apps_pane

0x62b1,	// (0x0002c81c) scroll_pane_cp37_ParamLimits

0x62b1,	// (0x0002c81c) scroll_pane_cp37

0xd662,	// (0x00033bcd) cell_hc_apps_pane_ParamLimits

0xd662,	// (0x00033bcd) cell_hc_apps_pane

0xd720,	// (0x00033c8b) cell_hc_apps_pane_g1_ParamLimits

0xd720,	// (0x00033c8b) cell_hc_apps_pane_g1

0x639c,	// (0x0002c907) cell_hc_apps_pane_g2_ParamLimits

0x639c,	// (0x0002c907) cell_hc_apps_pane_g2

0x63b8,	// (0x0002c923) cell_hc_apps_pane_g3_ParamLimits

0x63b8,	// (0x0002c923) cell_hc_apps_pane_g3

0x0002,

0xfcc8,	// (0x00036233) cell_hc_apps_pane_g_ParamLimits

0xfcc8,	// (0x00036233) cell_hc_apps_pane_g

0xd74d,	// (0x00033cb8) cell_hc_apps_pane_t1_ParamLimits

0xd74d,	// (0x00033cb8) cell_hc_apps_pane_t1

0xc8a7,	// (0x00032e12) grid_highlight_pane_cp10_ParamLimits

0xc8a7,	// (0x00032e12) grid_highlight_pane_cp10

0xd78b,	// (0x00033cf6) list_single_hc_apps_pane_ParamLimits

0xd78b,	// (0x00033cf6) list_single_hc_apps_pane

0xd7bb,	// (0x00033d26) list_single_hc_apps_pane_g1

0x9490,	// (0x0002f9fb) list_single_hc_apps_pane_g2

0x0001,

0xfccf,	// (0x0003623a) list_single_hc_apps_pane_g

0x94a9,	// (0x0002fa14) list_single_hc_apps_pane_g2_copy1

0x94c5,	// (0x0002fa30) list_single_hc_apps_pane_t1

0xc77d,	// (0x00032ce8) bg_set_opt_pane_cp_ParamLimits

0x9834,	// (0x0002fd9f) setting_slider_pane_t1_ParamLimits

0x984d,	// (0x0002fdb8) setting_slider_pane_t2_ParamLimits

0x9867,	// (0x0002fdd2) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00035ac9) setting_slider_pane_t_ParamLimits

0x987f,	// (0x0002fdea) slider_set_pane_ParamLimits

0x0a31,	// (0x00026f9c) control_pane_g5_ParamLimits

0x0a31,	// (0x00026f9c) control_pane_g5

0xb804,	// (0x00031d6f) slider_set_pane_g1_ParamLimits

0x1aa3,	// (0x0002800e) slider_set_pane_g2_ParamLimits

0xb811,	// (0x00031d7c) slider_set_pane_g3_ParamLimits

0xb825,	// (0x00031d90) slider_set_pane_g4_ParamLimits

0xb83d,	// (0x00031da8) slider_set_pane_g5_ParamLimits

0xb811,	// (0x00031d7c) slider_set_pane_g6_ParamLimits

0xb853,	// (0x00031dbe) slider_set_pane_g7_ParamLimits

0xf949,	// (0x00035eb4) slider_set_pane_g_ParamLimits

0x04d5,	// (0x00026a40) navi_icon_text_pane_ParamLimits

0xac90,	// (0x000311fb) aid_fill_nsta_2_ParamLimits

0xacc7,	// (0x00031232) aid_touch_tab_arrow_left_ParamLimits

0xacdd,	// (0x00031248) aid_touch_tab_arrow_right_ParamLimits

0xad78,	// (0x000312e3) clock_nsta_pane_ParamLimits

0x38a1,	// (0x00029e0c) navi_icon_pane_g1_ParamLimits

0x38ad,	// (0x00029e18) navi_text_pane_t1_ParamLimits

0x4bae,	// (0x0002b119) navi_icon_text_pane_g1_ParamLimits

0x4bba,	// (0x0002b125) navi_icon_text_pane_t1_ParamLimits

0xd7bb,	// (0x00033d26) list_single_hc_apps_pane_g1_ParamLimits

0x9490,	// (0x0002f9fb) list_single_hc_apps_pane_g2_ParamLimits

0xfccf,	// (0x0003623a) list_single_hc_apps_pane_g_ParamLimits

0x94a9,	// (0x0002fa14) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x94c5,	// (0x0002fa30) list_single_hc_apps_pane_t1_ParamLimits

0x9665,	// (0x0002fbd0) popup_toolbar2_fixed_window_ParamLimits

0x9665,	// (0x0002fbd0) popup_toolbar2_fixed_window

0xaba0,	// (0x0003110b) popup_toolbar2_float_window

0xc70d,	// (0x00032c78) bg_popup_sub_pane_cp27

0x6496,	// (0x0002ca01) grid_toolbar2_float_pane

0xc70d,	// (0x00032c78) bg_popup_sub_pane_cp26

0x6496,	// (0x0002ca01) grid_toolbar2_fixed_pane

0xd7d4,	// (0x00033d3f) cell_toolbar2_fixed_pane_ParamLimits

0xd7d4,	// (0x00033d3f) cell_toolbar2_fixed_pane

0xd7ee,	// (0x00033d59) cell_toolbar2_fixed_pane_g1

0x15d6,	// (0x00027b41) toolbar2_fixed_button_pane

0x1686,	// (0x00027bf1) toolbar2_fixed_button_pane_g1

0x168e,	// (0x00027bf9) toolbar2_fixed_button_pane_g2

0x1696,	// (0x00027c01) toolbar2_fixed_button_pane_g3

0x169e,	// (0x00027c09) toolbar2_fixed_button_pane_g4

0x16a6,	// (0x00027c11) toolbar2_fixed_button_pane_g5

0x16ae,	// (0x00027c19) toolbar2_fixed_button_pane_g6

0x16b6,	// (0x00027c21) toolbar2_fixed_button_pane_g7

0x16be,	// (0x00027c29) toolbar2_fixed_button_pane_g8

0x16c6,	// (0x00027c31) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x00035db6) toolbar2_fixed_button_pane_g

0x64b7,	// (0x0002ca22) cell_toolbar2_float_pane_ParamLimits

0x64b7,	// (0x0002ca22) cell_toolbar2_float_pane

0x64c8,	// (0x0002ca33) cell_toolbar2_float_pane_g1

0x15d6,	// (0x00027b41) toolbar2_fixed_button_pane_cp

0xbefb,	// (0x00032466) fep_vkb_accented_list_pane_ParamLimits

0xbefb,	// (0x00032466) fep_vkb_accented_list_pane

0x1e93,	// (0x000283fe) bg_popup_fep_shadow_pane_g9

0x0655,	// (0x00026bc0) bg_popup_fep_shadow_pane_cp3

0xcc35,	// (0x000331a0) list_accented_list_pane

0x64d1,	// (0x0002ca3c) list_single_accented_list_pane_ParamLimits

0x64d1,	// (0x0002ca3c) list_single_accented_list_pane

0x0655,	// (0x00026bc0) list_highlight_pane_cp10

0x64e2,	// (0x0002ca4d) list_single_accented_list_pane_t1

0xaaca,	// (0x00031035) popup_slider_window_ParamLimits

0xaaca,	// (0x00031035) popup_slider_window

0x6122,	// (0x0002c68d) aid_indentation_list_msg

0xd8df,	// (0x00033e4a) bg_popup_window_pane_cp19

0x6608,	// (0x0002cb73) popup_slider_window_g1

0x6624,	// (0x0002cb8f) popup_slider_window_g2

0x6640,	// (0x0002cbab) popup_slider_window_g3

0x0005,

0xfcd4,	// (0x0003623f) popup_slider_window_g

0x66a6,	// (0x0002cc11) popup_slider_window_t1

0x671a,	// (0x0002cc85) small_volume_slider_vertical_pane

0x5009,	// (0x0002b574) small_volume_slider_vertical_pane_g1

0x5009,	// (0x0002b574) small_volume_slider_vertical_pane_g2

0x6736,	// (0x0002cca1) small_volume_slider_vertical_pane_g3

0x0002,

0xfce6,	// (0x00036251) small_volume_slider_vertical_pane_g

0x95b3,	// (0x0002fb1e) area_side_right_pane_ParamLimits

0x95b3,	// (0x0002fb1e) area_side_right_pane

0xc06a,	// (0x000325d5) aid_size_side_button_ParamLimits

0xc06a,	// (0x000325d5) aid_size_side_button

0xc083,	// (0x000325ee) grid_sctrl_middle_pane_ParamLimits

0xc083,	// (0x000325ee) grid_sctrl_middle_pane

0x201d,	// (0x00028588) sctrl_sk_bottom_pane

0x202e,	// (0x00028599) sctrl_sk_top_pane

0x2040,	// (0x000285ab) aid_touch_sctrl_top

0xc8a7,	// (0x00032e12) bg_sctrl_sk_pane_ParamLimits

0xc8a7,	// (0x00032e12) bg_sctrl_sk_pane

0x204d,	// (0x000285b8) sctrl_sk_top_pane_g1

0x205a,	// (0x000285c5) sctrl_sk_top_pane_t1

0x2040,	// (0x000285ab) aid_touch_sctrl_bottom

0xc8a7,	// (0x00032e12) bg_sctrl_sk_pane_cp_ParamLimits

0xc8a7,	// (0x00032e12) bg_sctrl_sk_pane_cp

0x2075,	// (0x000285e0) sctrl_sk_bottom_pane_g1

0x205a,	// (0x000285c5) sctrl_sk_bottom_pane_t1

0xc09d,	// (0x00032608) cell_sctrl_middle_pane_ParamLimits

0xc09d,	// (0x00032608) cell_sctrl_middle_pane

0xc0ae,	// (0x00032619) aid_touch_sctrl_middle_ParamLimits

0xc0ae,	// (0x00032619) aid_touch_sctrl_middle

0xc0bb,	// (0x00032626) bg_sctrl_middle_pane_ParamLimits

0xc0bb,	// (0x00032626) bg_sctrl_middle_pane

0x67be,	// (0x0002cd29) cell_sctrl_middle_pane_g1_ParamLimits

0x67be,	// (0x0002cd29) cell_sctrl_middle_pane_g1

0xc0c9,	// (0x00032634) cell_sctrl_middle_pane_g2_ParamLimits

0xc0c9,	// (0x00032634) cell_sctrl_middle_pane_g2

0x0001,

0xfcf2,	// (0x0003625d) cell_sctrl_middle_pane_g_ParamLimits

0xfcf2,	// (0x0003625d) cell_sctrl_middle_pane_g

0x1686,	// (0x00027bf1) bg_sctrl_middle_pane_g1

0x168e,	// (0x00027bf9) bg_sctrl_middle_pane_g2

0x1696,	// (0x00027c01) bg_sctrl_middle_pane_g3

0x169e,	// (0x00027c09) bg_sctrl_middle_pane_g4

0x16a6,	// (0x00027c11) bg_sctrl_middle_pane_g5

0x16ae,	// (0x00027c19) bg_sctrl_middle_pane_g6

0x16b6,	// (0x00027c21) bg_sctrl_middle_pane_g7

0x16be,	// (0x00027c29) bg_sctrl_middle_pane_g8

0x0007,

0xfcf7,	// (0x00036262) bg_sctrl_middle_pane_g

0x16c6,	// (0x00027c31) bg_sctrl_middle_pane_g8_copy1

0x1686,	// (0x00027bf1) bg_sctrl_sk_pane_g1

0x168e,	// (0x00027bf9) bg_sctrl_sk_pane_g2

0x1696,	// (0x00027c01) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x00035db6) bg_sctrl_sk_pane_g

0xca71,	// (0x00032fdc) aid_size_touch_scroll_bar

0x169e,	// (0x00027c09) bg_sctrl_sk_pane_g4

0x16a6,	// (0x00027c11) bg_sctrl_sk_pane_g5

0x16ae,	// (0x00027c19) bg_sctrl_sk_pane_g6

0x16b6,	// (0x00027c21) bg_sctrl_sk_pane_g7

0x16be,	// (0x00027c29) bg_sctrl_sk_pane_g8

0x16c6,	// (0x00027c31) bg_sctrl_sk_pane_g9

0x0c50,	// (0x000271bb) popup_fep_china_hwr2_fs_candidate_window

0xa56a,	// (0x00030ad5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa56a,	// (0x00030ad5) popup_fep_china_hwr2_fs_control_window

0x5279,	// (0x0002b7e4) sctrl_sk_top_pane_g2

0x0001,

0xfced,	// (0x00036258) sctrl_sk_top_pane_g

0xd997,	// (0x00033f02) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd997,	// (0x00033f02) aid_fep_china_hwr2_fs_cell

0xd9ab,	// (0x00033f16) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9ab,	// (0x00033f16) bg_popup_fep_shadow_pane_cp4

0xd9c2,	// (0x00033f2d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9c2,	// (0x00033f2d) bg_popup_fep_shadow_pane_cp5

0xd9d4,	// (0x00033f3f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9d4,	// (0x00033f3f) popup_fep_china_hwr2_fs_control_bar_grid

0xd9e8,	// (0x00033f53) popup_fep_china_hwr2_fs_control_funtion_grid

0x6792,	// (0x0002ccfd) aid_fep_china_hwr2_fs_candi_cell

0xc70d,	// (0x00032c78) bg_popup_fep_shadow_pane_cp6

0x679c,	// (0x0002cd07) popup_fep_china_hwr2_fs_candidate_grid

0xd9f0,	// (0x00033f5b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9f0,	// (0x00033f5b) cell_fep_china_hwr2_fs_funtion_grid

0x5009,	// (0x0002b574) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x67be,	// (0x0002cd29) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x67be,	// (0x0002cd29) cell_fep_china_hwr2_fs_funtion_grid_g1

0x67cc,	// (0x0002cd37) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x67cc,	// (0x0002cd37) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd08,	// (0x00036273) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd08,	// (0x00036273) cell_fep_china_hwr2_fs_funtion_grid_g

0xda08,	// (0x00033f73) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda08,	// (0x00033f73) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda1d,	// (0x00033f88) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda1d,	// (0x00033f88) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0d,	// (0x00036278) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0d,	// (0x00036278) cell_fep_china_hwr2_fs_funtion_grid_t

0x6813,	// (0x0002cd7e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x681b,	// (0x0002cd86) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6823,	// (0x0002cd8e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd12,	// (0x0003627d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x682b,	// (0x0002cd96) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x682b,	// (0x0002cd96) cell_fep_china_hwr2_fs_candidate_grid

0x6844,	// (0x0002cdaf) popup_fep_china_hwr2_fs_candidate_grid_g20

0x684c,	// (0x0002cdb7) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5009,	// (0x0002b574) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5009,	// (0x0002b574) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb39,	// (0x000360a4) cell_fep_china_hwr2_fs_candidate_grid_g

0x6854,	// (0x0002cdbf) cell_fep_china_hwr2_fs_candidate_grid_t1

0x124f,	// (0x000277ba) clock_nsta_pane_cp_24_ParamLimits

0x124f,	// (0x000277ba) clock_nsta_pane_cp_24

0x12cd,	// (0x00027838) indicator_nsta_pane_cp_24_ParamLimits

0x12cd,	// (0x00027838) indicator_nsta_pane_cp_24

0x371d,	// (0x00029c88) heading_pane_g1

0x0001,

0xf8b0,	// (0x00035e1b) heading_pane_g

0x4153,	// (0x0002a6be) grid_sct_catagory_button_pane

0x4183,	// (0x0002a6ee) scroll_pane_cp5_ParamLimits

0x4bfc,	// (0x0002b167) button_value_adjust_pane_cp5_ParamLimits

0x4bfc,	// (0x0002b167) button_value_adjust_pane_cp5

0x4cdb,	// (0x0002b246) form2_midp_time_pane_ParamLimits

0x6862,	// (0x0002cdcd) cell_sct_catagory_button_pane_ParamLimits

0x6862,	// (0x0002cdcd) cell_sct_catagory_button_pane

0x4fce,	// (0x0002b539) bg_button_pane_cp01_ParamLimits

0x4fce,	// (0x0002b539) bg_button_pane_cp01

0x5009,	// (0x0002b574) cell_sct_catagory_button_pane_g1

0xab43,	// (0x000310ae) popup_tb_extension_window

0xda39,	// (0x00033fa4) aid_size_cell_ext_ParamLimits

0xda39,	// (0x00033fa4) aid_size_cell_ext

0xca23,	// (0x00032f8e) bg_tb_trans_pane_cp1_ParamLimits

0xca23,	// (0x00032f8e) bg_tb_trans_pane_cp1

0xda5f,	// (0x00033fca) grid_tb_ext_pane_ParamLimits

0xda5f,	// (0x00033fca) grid_tb_ext_pane

0xda9e,	// (0x00034009) cell_tb_ext_pane_ParamLimits

0xda9e,	// (0x00034009) cell_tb_ext_pane

0xdac6,	// (0x00034031) cell_tb_ext_pane_g1_ParamLimits

0xdac6,	// (0x00034031) cell_tb_ext_pane_g1

0x68f8,	// (0x0002ce63) cell_tb_ext_pane_t1

0xc8a7,	// (0x00032e12) list_highlight_pane_cp11_ParamLimits

0xc8a7,	// (0x00032e12) list_highlight_pane_cp11

0x967a,	// (0x0002fbe5) popup_uni_indicator_window_ParamLimits

0x967a,	// (0x0002fbe5) popup_uni_indicator_window

0xcb2f,	// (0x0003309a) bg_popup_sub_pane_cp14

0xdae3,	// (0x0003404e) list_uniindi_pane

0xdaef,	// (0x0003405a) uniindi_top_pane

0xc8a7,	// (0x00032e12) bg_uniindi_top_pane

0xdb0e,	// (0x00034079) uniindi_top_pane_g1

0xdb24,	// (0x0003408f) uniindi_top_pane_g2

0x0003,

0xfd19,	// (0x00036284) uniindi_top_pane_g

0xdb41,	// (0x000340ac) uniindi_top_pane_t1

0x69a9,	// (0x0002cf14) list_single_uniindi_pane_ParamLimits

0x69a9,	// (0x0002cf14) list_single_uniindi_pane

0x5009,	// (0x0002b574) bg_uniindi_top_pane_g1

0x69bb,	// (0x0002cf26) list_single_uniindi_pane_g1

0x69ce,	// (0x0002cf39) list_single_uniindi_pane_t1

0xc70d,	// (0x00032c78) control_bg_pane

0x69f3,	// (0x0002cf5e) bg_sctrl_sk_pane_cp1

0x69fc,	// (0x0002cf67) bg_sctrl_sk_pane_cp2

0x6a05,	// (0x0002cf70) control_bg_pane_g1

0x6a0e,	// (0x0002cf79) control_bg_pane_g2

0x0001,

0xfd22,	// (0x0003628d) control_bg_pane_g

0x4a52,	// (0x0002afbd) cell_indicator_nsta_pane_g1_ParamLimits

0xbc7d,	// (0x000321e8) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9d,	// (0x00036008) cell_indicator_nsta_pane_g_ParamLimits

0xf02f,	// (0x0003559a) form2_midp_time_pane_t1_ParamLimits

0x1c69,	// (0x000281d4) main_idle_act4_pane_ParamLimits

0x1c69,	// (0x000281d4) main_idle_act4_pane

0xab43,	// (0x000310ae) popup_tb_extension_window_ParamLimits

0xda84,	// (0x00033fef) tb_ext_find_pane_ParamLimits

0xda84,	// (0x00033fef) tb_ext_find_pane

0x6a17,	// (0x0002cf82) ai_gene_pane_1_cp1

0x07a0,	// (0x00026d0b) ai_gene_pane_2_cp1

0xdb6b,	// (0x000340d6) list_single_idle_plugin_calendar_pane

0x6a28,	// (0x0002cf93) list_single_idle_plugin_notification_pane

0x6a31,	// (0x0002cf9c) list_single_idle_plugin_player_pane

0xdb74,	// (0x000340df) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb74,	// (0x000340df) list_single_idle_plugin_shortcut_pane

0xdb9c,	// (0x00034107) main_idle_act4_pane_t1

0xdbb3,	// (0x0003411e) main_idle_act4_pane_t2

0x0001,

0xfd27,	// (0x00036292) main_idle_act4_pane_t

0xdbca,	// (0x00034135) middle_sk_idle_act4_pane_ParamLimits

0xdbca,	// (0x00034135) middle_sk_idle_act4_pane

0xdbe6,	// (0x00034151) popup_clock_digital_analogue_window_cp2

0xdc12,	// (0x0003417d) shortcut_wheel_idle_act4_pane_ParamLimits

0xdc12,	// (0x0003417d) shortcut_wheel_idle_act4_pane

0x5009,	// (0x0002b574) shortcut_wheel_idle_act4_pane_g1

0x5009,	// (0x0002b574) shortcut_wheel_idle_act4_pane_g2

0x5009,	// (0x0002b574) shortcut_wheel_idle_act4_pane_g3

0x5009,	// (0x0002b574) shortcut_wheel_idle_act4_pane_g4

0x5009,	// (0x0002b574) shortcut_wheel_idle_act4_pane_g5

0x6ac4,	// (0x0002d02f) shortcut_wheel_idle_act4_pane_g6

0x6acc,	// (0x0002d037) shortcut_wheel_idle_act4_pane_g7

0x6ad4,	// (0x0002d03f) shortcut_wheel_idle_act4_pane_g8

0x6adc,	// (0x0002d047) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2c,	// (0x00036297) shortcut_wheel_idle_act4_pane_g

0xd1ce,	// (0x00033739) middle_sk_idle_act4_pane_g1_ParamLimits

0xd1ce,	// (0x00033739) middle_sk_idle_act4_pane_g1

0xdc8f,	// (0x000341fa) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc8f,	// (0x000341fa) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4f,	// (0x000362ba) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4f,	// (0x000362ba) middle_sk_idle_act4_pane_g

0xdca7,	// (0x00034212) middle_sk_idle_act4_pane_t1_ParamLimits

0xdca7,	// (0x00034212) middle_sk_idle_act4_pane_t1

0xdcd6,	// (0x00034241) grid_ai_shortcut_pane_ParamLimits

0xdcd6,	// (0x00034241) grid_ai_shortcut_pane

0xdcf3,	// (0x0003425e) list_highlight_pane_cp16_ParamLimits

0xdcf3,	// (0x0003425e) list_highlight_pane_cp16

0xdd00,	// (0x0003426b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdd00,	// (0x0003426b) list_single_idle_plugin_shortcut_pane_g1

0xdd0c,	// (0x00034277) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdd0c,	// (0x00034277) list_single_idle_plugin_shortcut_pane_g2

0xdd28,	// (0x00034293) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdd28,	// (0x00034293) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd54,	// (0x000362bf) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd54,	// (0x000362bf) list_single_idle_plugin_shortcut_pane_g

0xdd3d,	// (0x000342a8) cell_ai_shortcut_pane_ParamLimits

0xdd3d,	// (0x000342a8) cell_ai_shortcut_pane

0xdd53,	// (0x000342be) cell_ai_shortcut_pane_g1_ParamLimits

0xdd53,	// (0x000342be) cell_ai_shortcut_pane_g1

0x6a17,	// (0x0002cf82) ai_gene_pane_1_cp2

0x6c0c,	// (0x0002d177) ai_gene_pane_2_cp2

0x6c14,	// (0x0002d17f) list_highlight_pane_cp15

0xdd75,	// (0x000342e0) list_single_idle_plugin_calendar_pane_g1

0x6c14,	// (0x0002d17f) list_highlight_pane_cp17

0x6c25,	// (0x0002d190) list_single_idle_plugin_calendar_pane_g1_copy1

0x6c2d,	// (0x0002d198) list_single_idle_plugin_player_pane_g1

0x43ac,	// (0x0002a917) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5b,	// (0x000362c6) list_single_idle_plugin_player_pane_g

0x6c35,	// (0x0002d1a0) list_single_idle_plugin_player_pane_t1

0x6c43,	// (0x0002d1ae) list_single_idle_plugin_player_pane_t2

0x6c51,	// (0x0002d1bc) list_single_idle_plugin_player_pane_t3

0x6c5f,	// (0x0002d1ca) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd60,	// (0x000362cb) list_single_idle_plugin_player_pane_t

0x6c6d,	// (0x0002d1d8) wait_bar_pane_cp15

0x6c75,	// (0x0002d1e0) grid_ai_notification_pane

0x43ac,	// (0x0002a917) list_single_idle_plugin_notification_pane_g1

0xdd7d,	// (0x000342e8) cell_ai_notification_pane_ParamLimits

0xdd7d,	// (0x000342e8) cell_ai_notification_pane

0x6c8b,	// (0x0002d1f6) cell_ai_notification_pane_g1

0x6c93,	// (0x0002d1fe) cell_ai_notification_pane_t1

0xdd8a,	// (0x000342f5) tb_ext_find_button_pane

0xdd92,	// (0x000342fd) tb_ext_find_pane_g1

0xdd9a,	// (0x00034305) tb_ext_find_pane_t1

0xcf62,	// (0x000334cd) tb_ext_find_button_pane_g1

0xdda8,	// (0x00034313) tb_ext_find_button_pane_g2

0x0001,

0xfd69,	// (0x000362d4) tb_ext_find_button_pane_g

0xdb9c,	// (0x00034107) main_idle_act4_pane_t1_ParamLimits

0xdbb3,	// (0x0003411e) main_idle_act4_pane_t2_ParamLimits

0xfd27,	// (0x00036292) main_idle_act4_pane_t_ParamLimits

0xdbe6,	// (0x00034151) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdbfe,	// (0x00034169) sat_plugin_idle_act4_pane_ParamLimits

0xdbfe,	// (0x00034169) sat_plugin_idle_act4_pane

0xddb1,	// (0x0003431c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddb1,	// (0x0003431c) sat_plugin_idle_act4_pane_t1

0xddc9,	// (0x00034334) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddc9,	// (0x00034334) sat_plugin_idle_act4_pane_t2

0xdde1,	// (0x0003434c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdde1,	// (0x0003434c) sat_plugin_idle_act4_pane_t3

0xddf9,	// (0x00034364) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddf9,	// (0x00034364) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6e,	// (0x000362d9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6e,	// (0x000362d9) sat_plugin_idle_act4_pane_t

0x95f5,	// (0x0002fb60) popup_battery_window_ParamLimits

0x95f5,	// (0x0002fb60) popup_battery_window

0xc8a7,	// (0x00032e12) bg_popup_sub_pane_cp25_ParamLimits

0xc8a7,	// (0x00032e12) bg_popup_sub_pane_cp25

0x6d14,	// (0x0002d27f) popup_battery_window_g1_ParamLimits

0x6d14,	// (0x0002d27f) popup_battery_window_g1

0x6d20,	// (0x0002d28b) popup_battery_window_t1_ParamLimits

0x6d20,	// (0x0002d28b) popup_battery_window_t1

0x6d32,	// (0x0002d29d) popup_battery_window_t2_ParamLimits

0x6d32,	// (0x0002d29d) popup_battery_window_t2

0x0001,

0xfd77,	// (0x000362e2) popup_battery_window_t_ParamLimits

0xfd77,	// (0x000362e2) popup_battery_window_t

0xa1c0,	// (0x0003072b) midp_canvas_pane_ParamLimits

0xa232,	// (0x0003079d) midp_keypad_pane_ParamLimits

0xa232,	// (0x0003079d) midp_keypad_pane

0x0b8c,	// (0x000270f7) main_midp_pane_ParamLimits

0xbc8a,	// (0x000321f5) signal_pane_g2_cp_ParamLimits

0xde11,	// (0x0003437c) aid_size_cell_midp_keypad_ParamLimits

0xde11,	// (0x0003437c) aid_size_cell_midp_keypad

0xde2f,	// (0x0003439a) midp_keyp_game_grid_pane_ParamLimits

0xde2f,	// (0x0003439a) midp_keyp_game_grid_pane

0xde56,	// (0x000343c1) midp_keyp_rocker_pane_ParamLimits

0xde56,	// (0x000343c1) midp_keyp_rocker_pane

0xdea7,	// (0x00034412) midp_keyp_sk_left_pane_ParamLimits

0xdea7,	// (0x00034412) midp_keyp_sk_left_pane

0xdefb,	// (0x00034466) midp_keyp_sk_right_pane_ParamLimits

0xdefb,	// (0x00034466) midp_keyp_sk_right_pane

0xc70d,	// (0x00032c78) bg_button_pane_cp03

0xdf4f,	// (0x000344ba) midp_keyp_sk_left_pane_g1

0xc70d,	// (0x00032c78) bg_button_pane_cp04

0xdf4f,	// (0x000344ba) midp_keyp_sk_right_pane_g1

0x5009,	// (0x0002b574) midp_keyp_rocker_pane_g1

0xdf58,	// (0x000344c3) keyp_game_cell_pane_ParamLimits

0xdf58,	// (0x000344c3) keyp_game_cell_pane

0xc70d,	// (0x00032c78) bg_button_pane_cp02

0xdf7c,	// (0x000344e7) keyp_game_cell_pane_g1

0x9615,	// (0x0002fb80) popup_fep_vkb2_window_ParamLimits

0x9615,	// (0x0002fb80) popup_fep_vkb2_window

0xc0d5,	// (0x00032640) aid_size_cell_vkb2_ParamLimits

0xc0d5,	// (0x00032640) aid_size_cell_vkb2

0xc113,	// (0x0003267e) popup_fep_vkb2_window_g1_ParamLimits

0xc113,	// (0x0003267e) popup_fep_vkb2_window_g1

0xc163,	// (0x000326ce) vkb2_area_bottom_pane_ParamLimits

0xc163,	// (0x000326ce) vkb2_area_bottom_pane

0xc1b7,	// (0x00032722) vkb2_area_keypad_pane_ParamLimits

0xc1b7,	// (0x00032722) vkb2_area_keypad_pane

0xc1ff,	// (0x0003276a) vkb2_area_top_pane_ParamLimits

0xc1ff,	// (0x0003276a) vkb2_area_top_pane

0xc285,	// (0x000327f0) vkb2_top_entry_pane_ParamLimits

0xc285,	// (0x000327f0) vkb2_top_entry_pane

0xc2b2,	// (0x0003281d) vkb2_top_grid_left_pane_ParamLimits

0xc2b2,	// (0x0003281d) vkb2_top_grid_left_pane

0xc2d2,	// (0x0003283d) vkb2_top_grid_right_pane_ParamLimits

0xc2d2,	// (0x0003283d) vkb2_top_grid_right_pane

0x22d3,	// (0x0002883e) vkb2_cell_keypad_pane_ParamLimits

0x22d3,	// (0x0002883e) vkb2_cell_keypad_pane

0xc318,	// (0x00032883) vkb2_area_bottom_grid_pane_ParamLimits

0xc318,	// (0x00032883) vkb2_area_bottom_grid_pane

0xc342,	// (0x000328ad) vkb2_area_bottom_pane_g1_ParamLimits

0xc342,	// (0x000328ad) vkb2_area_bottom_pane_g1

0xc368,	// (0x000328d3) vkb2_area_bottom_pane_g2_ParamLimits

0xc368,	// (0x000328d3) vkb2_area_bottom_pane_g2

0xc399,	// (0x00032904) vkb2_area_bottom_pane_g3_ParamLimits

0xc399,	// (0x00032904) vkb2_area_bottom_pane_g3

0x0002,

0xfd7c,	// (0x000362e7) vkb2_area_bottom_pane_g_ParamLimits

0xfd7c,	// (0x000362e7) vkb2_area_bottom_pane_g

0x247d,	// (0x000289e8) vkb2_top_cell_left_pane_ParamLimits

0x247d,	// (0x000289e8) vkb2_top_cell_left_pane

0xdf85,	// (0x000344f0) vkb2_top_entry_pane_g1_ParamLimits

0xdf85,	// (0x000344f0) vkb2_top_entry_pane_g1

0xdf93,	// (0x000344fe) vkb2_top_entry_pane_t1_ParamLimits

0xdf93,	// (0x000344fe) vkb2_top_entry_pane_t1

0x6ee3,	// (0x0002d44e) vkb2_top_entry_pane_t2_ParamLimits

0x6ee3,	// (0x0002d44e) vkb2_top_entry_pane_t2

0x6f15,	// (0x0002d480) vkb2_top_entry_pane_t3_ParamLimits

0x6f15,	// (0x0002d480) vkb2_top_entry_pane_t3

0x0002,

0xfd83,	// (0x000362ee) vkb2_top_entry_pane_t_ParamLimits

0xfd83,	// (0x000362ee) vkb2_top_entry_pane_t

0xc403,	// (0x0003296e) vkb2_top_grid_right_pane_g1_ParamLimits

0xc403,	// (0x0003296e) vkb2_top_grid_right_pane_g1

0x24e0,	// (0x00028a4b) vkb2_top_grid_right_pane_g2_ParamLimits

0x24e0,	// (0x00028a4b) vkb2_top_grid_right_pane_g2

0x24f8,	// (0x00028a63) vkb2_top_grid_right_pane_g3_ParamLimits

0x24f8,	// (0x00028a63) vkb2_top_grid_right_pane_g3

0xc419,	// (0x00032984) vkb2_top_grid_right_pane_g4_ParamLimits

0xc419,	// (0x00032984) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8a,	// (0x000362f5) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8a,	// (0x000362f5) vkb2_top_grid_right_pane_g

0x2526,	// (0x00028a91) vkb2_top_cell_left_pane_g1

0x253d,	// (0x00028aa8) vkb2_cell_keypad_pane_g1_ParamLimits

0x253d,	// (0x00028aa8) vkb2_cell_keypad_pane_g1

0x6f39,	// (0x0002d4a4) vkb2_cell_keypad_pane_t1_ParamLimits

0x6f39,	// (0x0002d4a4) vkb2_cell_keypad_pane_t1

0x254b,	// (0x00028ab6) vkb2_cell_bottom_grid_pane_ParamLimits

0x254b,	// (0x00028ab6) vkb2_cell_bottom_grid_pane

0x2584,	// (0x00028aef) vkb2_cell_bottom_grid_pane_g1

0xdc33,	// (0x0003419e) aid_call2_pane_cp02

0xdc3b,	// (0x000341a6) aid_call_pane_cp02

0xdc43,	// (0x000341ae) clock_digital_number_pane_cp10

0xdc4b,	// (0x000341b6) clock_digital_number_pane_cp11

0xdc53,	// (0x000341be) clock_digital_number_pane_cp12

0xdc5b,	// (0x000341c6) clock_digital_number_pane_cp13

0xdc63,	// (0x000341ce) clock_digital_separator_pane_cp10

0xcf62,	// (0x000334cd) popup_clock_digital_analogue_window_cp2_g1

0xcf62,	// (0x000334cd) popup_clock_digital_analogue_window_cp2_g2

0xdc6b,	// (0x000341d6) popup_clock_digital_analogue_window_cp2_g3

0xcf62,	// (0x000334cd) popup_clock_digital_analogue_window_cp2_g4

0xdc6b,	// (0x000341d6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3f,	// (0x000362aa) popup_clock_digital_analogue_window_cp2_g

0xdc73,	// (0x000341de) popup_clock_digital_analogue_window_cp2_t1

0xdc81,	// (0x000341ec) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4a,	// (0x000362b5) popup_clock_digital_analogue_window_cp2_t

0x5009,	// (0x0002b574) clock_digital_number_pane_cp10_g1

0x5009,	// (0x0002b574) clock_digital_number_pane_cp10_g2

0x0001,

0xfb39,	// (0x000360a4) clock_digital_number_pane_cp10_g

0x5009,	// (0x0002b574) clock_digital_separator_pane_cp10_g1

0x5009,	// (0x0002b574) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb39,	// (0x000360a4) clock_digital_separator_pane_cp10_g

0xdb30,	// (0x0003409b) uniindi_top_pane_g3

0x6972,	// (0x0002cedd) uniindi_top_pane_g4

0x235e,	// (0x000288c9) vkb2_row_keypad_pane_ParamLimits

0x235e,	// (0x000288c9) vkb2_row_keypad_pane

0x25a0,	// (0x00028b0b) vkb2_cell_t_keypad_pane_ParamLimits

0x25a0,	// (0x00028b0b) vkb2_cell_t_keypad_pane

0x25b0,	// (0x00028b1b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x25b0,	// (0x00028b1b) vkb2_cell_t_keypad_pane_cp08

0x25c3,	// (0x00028b2e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x25c3,	// (0x00028b2e) vkb2_cell_t_keypad_pane_cp09

0x25d7,	// (0x00028b42) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x25d7,	// (0x00028b42) vkb2_cell_t_keypad_pane_cp01

0x25e8,	// (0x00028b53) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x25e8,	// (0x00028b53) vkb2_cell_t_keypad_pane_cp02

0x25f9,	// (0x00028b64) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x25f9,	// (0x00028b64) vkb2_cell_t_keypad_pane_cp03

0x260a,	// (0x00028b75) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x260a,	// (0x00028b75) vkb2_cell_t_keypad_pane_cp04

0x261b,	// (0x00028b86) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x261b,	// (0x00028b86) vkb2_cell_t_keypad_pane_cp05

0x262c,	// (0x00028b97) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x262c,	// (0x00028b97) vkb2_cell_t_keypad_pane_cp06

0x263d,	// (0x00028ba8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x263d,	// (0x00028ba8) vkb2_cell_t_keypad_pane_cp07

0x264e,	// (0x00028bb9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x264e,	// (0x00028bb9) vkb2_cell_t_keypad_pane_cp10

0x5279,	// (0x0002b7e4) vkb2_cell_t_keypad_pane_g1

0x6f50,	// (0x0002d4bb) vkb2_cell_t_keypad_pane_t1

0xc70d,	// (0x00032c78) popup_grid_graphic2_window

0xdfcc,	// (0x00034537) aid_size_cell_graphic2_ParamLimits

0xdfcc,	// (0x00034537) aid_size_cell_graphic2

0xe00a,	// (0x00034575) bg_popup_window_pane_cp21_ParamLimits

0xe00a,	// (0x00034575) bg_popup_window_pane_cp21

0xe018,	// (0x00034583) graphic2_pages_pane_ParamLimits

0xe018,	// (0x00034583) graphic2_pages_pane

0xe06e,	// (0x000345d9) grid_graphic2_control_pane_ParamLimits

0xe06e,	// (0x000345d9) grid_graphic2_control_pane

0xe0b6,	// (0x00034621) grid_graphic2_pane_ParamLimits

0xe0b6,	// (0x00034621) grid_graphic2_pane

0xe13d,	// (0x000346a8) cell_graphic2_pane

0xc70d,	// (0x00032c78) main_comp_mode_pane

0x61d4,	// (0x0002c73f) list_ai3_gene_pane_ParamLimits

0xd8df,	// (0x00033e4a) bg_popup_window_pane_cp19_ParamLimits

0x65ac,	// (0x0002cb17) bg_touch_area_indi_pane_ParamLimits

0x65ac,	// (0x0002cb17) bg_touch_area_indi_pane

0x65c2,	// (0x0002cb2d) bg_touch_area_indi_pane_cp01_ParamLimits

0x65c2,	// (0x0002cb2d) bg_touch_area_indi_pane_cp01

0x65d8,	// (0x0002cb43) bg_touch_area_indi_pane_cp02_ParamLimits

0x65d8,	// (0x0002cb43) bg_touch_area_indi_pane_cp02

0x65ee,	// (0x0002cb59) bg_touch_area_indi_pane_cp03_ParamLimits

0x65ee,	// (0x0002cb59) bg_touch_area_indi_pane_cp03

0x6608,	// (0x0002cb73) popup_slider_window_g1_ParamLimits

0x6624,	// (0x0002cb8f) popup_slider_window_g2_ParamLimits

0x6640,	// (0x0002cbab) popup_slider_window_g3_ParamLimits

0xfcd4,	// (0x0003623f) popup_slider_window_g_ParamLimits

0x66a6,	// (0x0002cc11) popup_slider_window_t1_ParamLimits

0x671a,	// (0x0002cc85) small_volume_slider_vertical_pane_ParamLimits

0xe13d,	// (0x000346a8) cell_graphic2_pane_ParamLimits

0xe198,	// (0x00034703) bg_button_pane_cp10_ParamLimits

0xe198,	// (0x00034703) bg_button_pane_cp10

0xe1ab,	// (0x00034716) bg_button_pane_cp11_ParamLimits

0xe1ab,	// (0x00034716) bg_button_pane_cp11

0xe1be,	// (0x00034729) graphic2_pages_pane_g1_ParamLimits

0xe1be,	// (0x00034729) graphic2_pages_pane_g1

0xe1d9,	// (0x00034744) graphic2_pages_pane_g2_ParamLimits

0xe1d9,	// (0x00034744) graphic2_pages_pane_g2

0x0001,

0xfd98,	// (0x00036303) graphic2_pages_pane_g_ParamLimits

0xfd98,	// (0x00036303) graphic2_pages_pane_g

0xe1f1,	// (0x0003475c) graphic2_pages_pane_t1_ParamLimits

0xe1f1,	// (0x0003475c) graphic2_pages_pane_t1

0xe209,	// (0x00034774) cell_graphic2_control_pane_ParamLimits

0xe209,	// (0x00034774) cell_graphic2_control_pane

0xe23b,	// (0x000347a6) cell_graphic2_pane_g1_ParamLimits

0xe23b,	// (0x000347a6) cell_graphic2_pane_g1

0xd1dc,	// (0x00033747) cell_graphic2_pane_g2_ParamLimits

0xd1dc,	// (0x00033747) cell_graphic2_pane_g2

0xe248,	// (0x000347b3) cell_graphic2_pane_g3_ParamLimits

0xe248,	// (0x000347b3) cell_graphic2_pane_g3

0xd1e9,	// (0x00033754) cell_graphic2_pane_g4_ParamLimits

0xd1e9,	// (0x00033754) cell_graphic2_pane_g4

0xe255,	// (0x000347c0) cell_graphic2_pane_g5_ParamLimits

0xe255,	// (0x000347c0) cell_graphic2_pane_g5

0x0004,

0xfd9d,	// (0x00036308) cell_graphic2_pane_g_ParamLimits

0xfd9d,	// (0x00036308) cell_graphic2_pane_g

0xe275,	// (0x000347e0) cell_graphic2_pane_t1_ParamLimits

0xe275,	// (0x000347e0) cell_graphic2_pane_t1

0x3711,	// (0x00029c7c) grid_highlight_pane_cp11_ParamLimits

0x3711,	// (0x00029c7c) grid_highlight_pane_cp11

0xc8a7,	// (0x00032e12) bg_button_pane_cp05

0xe2c1,	// (0x0003482c) cell_graphic2_control_pane_g1

0x5009,	// (0x0002b574) bg_touch_area_indi_pane_g1

0x722c,	// (0x0002d797) aid_cmod_rocker_key_size

0x7236,	// (0x0002d7a1) aid_cmode_itu_key_size

0x7240,	// (0x0002d7ab) main_cmode_video_pane

0x724a,	// (0x0002d7b5) main_comp_mode_itu_pane

0x7256,	// (0x0002d7c1) main_comp_mode_rocker_pane

0x7262,	// (0x0002d7cd) cell_cmode_rocker_pane_ParamLimits

0x7262,	// (0x0002d7cd) cell_cmode_rocker_pane

0x7274,	// (0x0002d7df) cell_cmode_itu_pane_ParamLimits

0x7274,	// (0x0002d7df) cell_cmode_itu_pane

0xcb2f,	// (0x0003309a) bg_button_pane_cp06_ParamLimits

0xcb2f,	// (0x0003309a) bg_button_pane_cp06

0x5279,	// (0x0002b7e4) cell_cmode_rocker_pane_g1_ParamLimits

0x5279,	// (0x0002b7e4) cell_cmode_rocker_pane_g1

0x67be,	// (0x0002cd29) cell_cmode_rocker_pane_g2_ParamLimits

0x67be,	// (0x0002cd29) cell_cmode_rocker_pane_g2

0x0001,

0xfdad,	// (0x00036318) cell_cmode_rocker_pane_g_ParamLimits

0xfdad,	// (0x00036318) cell_cmode_rocker_pane_g

0xc70d,	// (0x00032c78) bg_button_pane_cp07

0x7289,	// (0x0002d7f4) cell_cmode_itu_pane_g1

0x7292,	// (0x0002d7fd) cell_cmode_itu_pane_t1

0x72a0,	// (0x0002d80b) cell_cmode_itu_pane_t2

0x0001,

0xfdb2,	// (0x0003631d) cell_cmode_itu_pane_t

0x69e3,	// (0x0002cf4e) aid_touch_ctrl_left

0x69eb,	// (0x0002cf56) aid_touch_ctrl_right

0xc70d,	// (0x00032c78) compa_mode_pane

0xe2e7,	// (0x00034852) aid_cmod_rocker_key_size_cp

0xe2f1,	// (0x0003485c) aid_cmode_itu_key_size_cp

0x72c2,	// (0x0002d82d) compa_mode_pane_g1

0x72ca,	// (0x0002d835) compa_mode_pane_g2

0x72d2,	// (0x0002d83d) compa_mode_pane_g3

0x0002,

0xfdb7,	// (0x00036322) compa_mode_pane_g

0xe2fb,	// (0x00034866) main_comp_mode_itu_pane_cp

0xe303,	// (0x0003486e) main_comp_mode_rocker_pane_cp

0xe30b,	// (0x00034876) cell_cmode_itu_pane_cp_ParamLimits

0xe30b,	// (0x00034876) cell_cmode_itu_pane_cp

0xe320,	// (0x0003488b) cell_cmode_rocker_pane_cp_ParamLimits

0xe320,	// (0x0003488b) cell_cmode_rocker_pane_cp

0xcb2f,	// (0x0003309a) bg_button_pane_cp06_cp_ParamLimits

0xcb2f,	// (0x0003309a) bg_button_pane_cp06_cp

0x5279,	// (0x0002b7e4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5279,	// (0x0002b7e4) cell_cmode_rocker_pane_g1_cp

0x5009,	// (0x0002b574) cell_cmode_rocker_pane_g2_cp

0xc70d,	// (0x00032c78) bg_button_pane_cp07_cp

0xe332,	// (0x0003489d) cell_cmode_itu_pane_g1_cp

0xe33b,	// (0x000348a6) cell_cmode_itu_pane_t1_cp

0xe33b,	// (0x000348a6) cell_cmode_itu_pane_t2_cp

0xb9d0,	// (0x00031f3b) settings_code_pane_cp2

0xc77d,	// (0x00032ce8) bg_popup_window_pane_cp3_ParamLimits

0xc9c0,	// (0x00032f2b) heading_pane_cp3_ParamLimits

0xc9cc,	// (0x00032f37) listscroll_popup_graphic_pane_ParamLimits

0x1c77,	// (0x000281e2) fep_hwr_aid_pane_ParamLimits

0x2040,	// (0x000285ab) aid_touch_sctrl_top_ParamLimits

0x204d,	// (0x000285b8) sctrl_sk_top_pane_g1_ParamLimits

0x5279,	// (0x0002b7e4) sctrl_sk_top_pane_g2_ParamLimits

0xfced,	// (0x00036258) sctrl_sk_top_pane_g_ParamLimits

0x205a,	// (0x000285c5) sctrl_sk_top_pane_t1_ParamLimits

0x2040,	// (0x000285ab) aid_touch_sctrl_bottom_ParamLimits

0x205a,	// (0x000285c5) sctrl_sk_bottom_pane_t1_ParamLimits

0xdafc,	// (0x00034067) aid_area_touch_clock

0xc247,	// (0x000327b2) aid_vkb2_area_top_pane_cell_ParamLimits

0xc247,	// (0x000327b2) aid_vkb2_area_top_pane_cell

0xc2f2,	// (0x0003285d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc2f2,	// (0x0003285d) aid_vkb2_area_bottom_pane_cell

0x6e9b,	// (0x0002d406) popup_char_count_window

0x7328,	// (0x0002d893) popup_char_count_window_g1

0x7331,	// (0x0002d89c) popup_char_count_window_g2

0x733a,	// (0x0002d8a5) popup_char_count_window_g3

0x0002,

0xfdbe,	// (0x00036329) popup_char_count_window_g

0x7343,	// (0x0002d8ae) popup_char_count_window_t1

0x20fb,	// (0x00028666) popup_fep_char_preview_window_ParamLimits

0x20fb,	// (0x00028666) popup_fep_char_preview_window

0xc267,	// (0x000327d2) vkb2_top_candi_pane_ParamLimits

0xc267,	// (0x000327d2) vkb2_top_candi_pane

0xe349,	// (0x000348b4) cell_vkb2_top_candi_pane_ParamLimits

0xe349,	// (0x000348b4) cell_vkb2_top_candi_pane

0x30b5,	// (0x00029620) bg_popup_fep_char_preview_window_ParamLimits

0x30b5,	// (0x00029620) bg_popup_fep_char_preview_window

0x2663,	// (0x00028bce) popup_fep_char_preview_window_t1_ParamLimits

0x2663,	// (0x00028bce) popup_fep_char_preview_window_t1

0x739e,	// (0x0002d909) bg_popup_fep_char_preview_window_g1

0x73a6,	// (0x0002d911) bg_popup_fep_char_preview_window_g2

0x73ae,	// (0x0002d919) bg_popup_fep_char_preview_window_g3

0x73b6,	// (0x0002d921) bg_popup_fep_char_preview_window_g4

0x73be,	// (0x0002d929) bg_popup_fep_char_preview_window_g5

0x269d,	// (0x00028c08) bg_popup_fep_char_preview_window_g6

0x73c6,	// (0x0002d931) bg_popup_fep_char_preview_window_g7

0x73ce,	// (0x0002d939) bg_popup_fep_char_preview_window_g8

0x73d6,	// (0x0002d941) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc5,	// (0x00036330) bg_popup_fep_char_preview_window_g

0x5279,	// (0x0002b7e4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5279,	// (0x0002b7e4) cell_vkb2_top_candi_pane_g1

0x5590,	// (0x0002bafb) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5590,	// (0x0002bafb) cell_vkb2_top_candi_pane_g2

0x55b1,	// (0x0002bb1c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x55b1,	// (0x0002bb1c) cell_vkb2_top_candi_pane_g3

0x26a5,	// (0x00028c10) cell_vkb2_top_candi_pane_g4_ParamLimits

0x26a5,	// (0x00028c10) cell_vkb2_top_candi_pane_g4

0x73de,	// (0x0002d949) cell_vkb2_top_candi_pane_g5_ParamLimits

0x73de,	// (0x0002d949) cell_vkb2_top_candi_pane_g5

0x67be,	// (0x0002cd29) cell_vkb2_top_candi_pane_g6_ParamLimits

0x67be,	// (0x0002cd29) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd8,	// (0x00036343) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd8,	// (0x00036343) cell_vkb2_top_candi_pane_g

0x26c6,	// (0x00028c31) cell_vkb2_top_candi_pane_t1

0xb7f0,	// (0x00031d5b) aid_size_touch_slider_mark_ParamLimits

0xb7f0,	// (0x00031d5b) aid_size_touch_slider_mark

0xe054,	// (0x000345bf) grid_graphic2_catg_pane_ParamLimits

0xe054,	// (0x000345bf) grid_graphic2_catg_pane

0xe110,	// (0x0003467b) popup_grid_graphic2_window_t1_ParamLimits

0xe110,	// (0x0003467b) popup_grid_graphic2_window_t1

0xe126,	// (0x00034691) popup_grid_graphic2_window_t2_ParamLimits

0xe126,	// (0x00034691) popup_grid_graphic2_window_t2

0x0001,

0xfd93,	// (0x000362fe) popup_grid_graphic2_window_t_ParamLimits

0xfd93,	// (0x000362fe) popup_grid_graphic2_window_t

0xc8a7,	// (0x00032e12) bg_button_pane_cp05_ParamLimits

0xe2c1,	// (0x0003482c) cell_graphic2_control_pane_g1_ParamLimits

0xe3af,	// (0x0003491a) cell_graphic2_catg_pane_ParamLimits

0xe3af,	// (0x0003491a) cell_graphic2_catg_pane

0xc70d,	// (0x00032c78) bg_button_pane_cp12

0xe3c1,	// (0x0003492c) cell_graphic2_catg_pane_g1

0x68f8,	// (0x0002ce63) cell_tb_ext_pane_t1_ParamLimits

0x249d,	// (0x00028a08) vkb2_top_cell_right_narrow_pane_ParamLimits

0x249d,	// (0x00028a08) vkb2_top_cell_right_narrow_pane

0x24b5,	// (0x00028a20) vkb2_top_cell_right_wide_pane_ParamLimits

0x24b5,	// (0x00028a20) vkb2_top_cell_right_wide_pane

0x1c69,	// (0x000281d4) bg_vkb2_func_pane_ParamLimits

0x1c69,	// (0x000281d4) bg_vkb2_func_pane

0x2526,	// (0x00028a91) vkb2_top_cell_left_pane_g1_ParamLimits

0x1c69,	// (0x000281d4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1c69,	// (0x000281d4) bg_vkb2_fuc_pane_cp03

0x2584,	// (0x00028aef) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x168e,	// (0x00027bf9) bg_vkb2_func_pane_g1

0x1696,	// (0x00027c01) bg_vkb2_func_pane_g2

0x16a6,	// (0x00027c11) bg_vkb2_func_pane_g3

0x169e,	// (0x00027c09) bg_vkb2_func_pane_g4

0x16ae,	// (0x00027c19) bg_vkb2_func_pane_g5

0x16b6,	// (0x00027c21) bg_vkb2_func_pane_g6

0x16be,	// (0x00027c29) bg_vkb2_func_pane_g7

0x16c6,	// (0x00027c31) bg_vkb2_func_pane_g8

0x1686,	// (0x00027bf1) bg_vkb2_func_pane_g9

0x0008,

0xfde5,	// (0x00036350) bg_vkb2_func_pane_g

0x1c69,	// (0x000281d4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1c69,	// (0x000281d4) bg_vkb2_fuc_pane_cp01

0x2526,	// (0x00028a91) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2526,	// (0x00028a91) vkb2_top_cell_right_wide_pane_g1

0x1c69,	// (0x000281d4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1c69,	// (0x000281d4) bg_vkb2_fuc_pane_cp02

0x2584,	// (0x00028aef) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2584,	// (0x00028aef) vkb2_top_cell_right_narrow_pane_g1

0xd821,	// (0x00033d8c) aid_touch_area_decrease_ParamLimits

0xd821,	// (0x00033d8c) aid_touch_area_decrease

0xd85b,	// (0x00033dc6) aid_touch_area_increase_ParamLimits

0xd85b,	// (0x00033dc6) aid_touch_area_increase

0xd883,	// (0x00033dee) aid_touch_area_mute_ParamLimits

0xd883,	// (0x00033dee) aid_touch_area_mute

0xd8ab,	// (0x00033e16) aid_touch_area_slider_ParamLimits

0xd8ab,	// (0x00033e16) aid_touch_area_slider

0xd8eb,	// (0x00033e56) popup_slider_window_g4_ParamLimits

0xd8eb,	// (0x00033e56) popup_slider_window_g4

0xd913,	// (0x00033e7e) popup_slider_window_g5_ParamLimits

0xd913,	// (0x00033e7e) popup_slider_window_g5

0xd947,	// (0x00033eb2) popup_slider_window_g6_ParamLimits

0xd947,	// (0x00033eb2) popup_slider_window_g6

0x66d4,	// (0x0002cc3f) popup_slider_window_t2_ParamLimits

0x66d4,	// (0x0002cc3f) popup_slider_window_t2

0x0001,

0xfce1,	// (0x0003624c) popup_slider_window_t_ParamLimits

0xfce1,	// (0x0003624c) popup_slider_window_t

0xd963,	// (0x00033ece) slider_pane_ParamLimits

0xd963,	// (0x00033ece) slider_pane

0x741a,	// (0x0002d985) slider_pane_g1_ParamLimits

0x741a,	// (0x0002d985) slider_pane_g1

0x742e,	// (0x0002d999) slider_pane_g2_ParamLimits

0x742e,	// (0x0002d999) slider_pane_g2

0x7444,	// (0x0002d9af) slider_pane_g3_ParamLimits

0x7444,	// (0x0002d9af) slider_pane_g3

0x0003,

0xfdf8,	// (0x00036363) slider_pane_g_ParamLimits

0xfdf8,	// (0x00036363) slider_pane_g

0xab8b,	// (0x000310f6) popup_tb_float_extension_window_ParamLimits

0xab8b,	// (0x000310f6) popup_tb_float_extension_window

0x7470,	// (0x0002d9db) aid_size_cell_tb_float_ext

0xc70d,	// (0x00032c78) bg_popup_sub_window_cp28

0xe3ca,	// (0x00034935) grid_tb_float_ext_pane

0xe3d4,	// (0x0003493f) cell_tb_float_ext_pane_ParamLimits

0xe3d4,	// (0x0003493f) cell_tb_float_ext_pane

0xe3ee,	// (0x00034959) cell_tb_float_ext_pane_g1

0xe3f7,	// (0x00034962) grid_highlight_pane_cp12

0xbed9,	// (0x00032444) cell_last_hwr_side_pane_ParamLimits

0xbed9,	// (0x00032444) cell_last_hwr_side_pane

0x5009,	// (0x0002b574) cell_last_hwr_side_pane_g1

0x74b2,	// (0x0002da1d) cell_last_hwr_side_pane_g2

0x0001,

0xfe01,	// (0x0003636c) cell_last_hwr_side_pane_g

0xc3ce,	// (0x00032939) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc3ce,	// (0x00032939) vkb2_area_bottom_space_btn_pane

0x5279,	// (0x0002b7e4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6f50,	// (0x0002d4bb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x26c6,	// (0x00028c31) cell_vkb2_top_candi_pane_t1_ParamLimits

0x26e5,	// (0x00028c50) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x26e5,	// (0x00028c50) vkb2_area_bottom_space_btn_pane_g1

0x271f,	// (0x00028c8a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x271f,	// (0x00028c8a) vkb2_area_bottom_space_btn_pane_g2

0x2755,	// (0x00028cc0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2755,	// (0x00028cc0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe06,	// (0x00036371) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe06,	// (0x00036371) vkb2_area_bottom_space_btn_pane_g

0x1d1e,	// (0x00028289) cel_fep_hwr_func_pane_ParamLimits

0x1d1e,	// (0x00028289) cel_fep_hwr_func_pane

0xbeae,	// (0x00032419) cell_hwr_side_button_pane_ParamLimits

0xbeae,	// (0x00032419) cell_hwr_side_button_pane

0xdafc,	// (0x00034067) aid_area_touch_clock_ParamLimits

0xc8a7,	// (0x00032e12) bg_uniindi_top_pane_ParamLimits

0xdb0e,	// (0x00034079) uniindi_top_pane_g1_ParamLimits

0xdb24,	// (0x0003408f) uniindi_top_pane_g2_ParamLimits

0xdb30,	// (0x0003409b) uniindi_top_pane_g3_ParamLimits

0x6972,	// (0x0002cedd) uniindi_top_pane_g4_ParamLimits

0xfd19,	// (0x00036284) uniindi_top_pane_g_ParamLimits

0xdb41,	// (0x000340ac) uniindi_top_pane_t1_ParamLimits

0xc8a7,	// (0x00032e12) bg_vkb2_func_pane_cp01_ParamLimits

0xc8a7,	// (0x00032e12) bg_vkb2_func_pane_cp01

0x74bb,	// (0x0002da26) cel_fep_hwr_func_pane_g1_ParamLimits

0x74bb,	// (0x0002da26) cel_fep_hwr_func_pane_g1

0xc8a7,	// (0x00032e12) bg_vkb2_func_pane_cp02_ParamLimits

0xc8a7,	// (0x00032e12) bg_vkb2_func_pane_cp02

0x74bb,	// (0x0002da26) cell_hwr_side_button_pane_g1_ParamLimits

0x74bb,	// (0x0002da26) cell_hwr_side_button_pane_g1

0x14da,	// (0x00027a45) status_pane_g4_ParamLimits

0x14da,	// (0x00027a45) status_pane_g4

0x14f4,	// (0x00027a5f) status_pane_t1

0x4d44,	// (0x0002b2af) form2_midp_gauge_slider_cont_pane

0x4d4c,	// (0x0002b2b7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbdb3,	// (0x0003231e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdc5,	// (0x00032330) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaec,	// (0x00036057) form2_midp_gauge_slider_pane_t_ParamLimits

0x4d82,	// (0x0002b2ed) form2_midp_slider_pane_ParamLimits

0x20bb,	// (0x00028626) aid_size_cell_func_vkb2_ParamLimits

0x20bb,	// (0x00028626) aid_size_cell_func_vkb2

0x745c,	// (0x0002d9c7) slider_pane_g4_ParamLimits

0x745c,	// (0x0002d9c7) slider_pane_g4

0xc42f,	// (0x0003299a) form2_midp_gauge_slider_pane_t2_cp01

0xc43d,	// (0x000329a8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc43d,	// (0x000329a8) form2_midp_gauge_slider_pane_t3_cp01

0x27ca,	// (0x00028d35) form2_midp_slider_pane_cp01

0xc70d,	// (0x00032c78) navi_smil_pane

0x74f4,	// (0x0002da5f) navi_smil_pane_g1

0x74fc,	// (0x0002da67) navi_smil_pane_t1

0x74c9,	// (0x0002da34) form2_midp_slider_pane_g1

0x74d2,	// (0x0002da3d) form2_midp_slider_pane_g2

0x74da,	// (0x0002da45) form2_midp_slider_pane_g3

0x74c9,	// (0x0002da34) form2_midp_slider_pane_g4

0xe400,	// (0x0003496b) form2_midp_slider_pane_g5

0x0004,

0xfe0f,	// (0x0003637a) form2_midp_slider_pane_g

0x278f,	// (0x00028cfa) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x278f,	// (0x00028cfa) vkb2_area_bottom_space_btn_pane_g4

0xadc3,	// (0x0003132e) lc0_navi_pane_ParamLimits

0xadc3,	// (0x0003132e) lc0_navi_pane

0xae2d,	// (0x00031398) lc0_stat_indi_pane_ParamLimits

0xae2d,	// (0x00031398) lc0_stat_indi_pane

0xae42,	// (0x000313ad) ls0_title_pane_ParamLimits

0xae42,	// (0x000313ad) ls0_title_pane

0xcb2f,	// (0x0003309a) bg_popup_sub_pane_cp14_ParamLimits

0xdae3,	// (0x0003404e) list_uniindi_pane_ParamLimits

0xdaef,	// (0x0003405a) uniindi_top_pane_ParamLimits

0x69bb,	// (0x0002cf26) list_single_uniindi_pane_g1_ParamLimits

0x69ce,	// (0x0002cf39) list_single_uniindi_pane_t1_ParamLimits

0xc45a,	// (0x000329c5) lc0_stat_clock_pane_ParamLimits

0xc45a,	// (0x000329c5) lc0_stat_clock_pane

0xe40b,	// (0x00034976) lc0_stat_indi_pane_g1_ParamLimits

0xe40b,	// (0x00034976) lc0_stat_indi_pane_g1

0xe418,	// (0x00034983) lc0_stat_indi_pane_g2_ParamLimits

0xe418,	// (0x00034983) lc0_stat_indi_pane_g2

0x0001,

0xfe1a,	// (0x00036385) lc0_stat_indi_pane_g_ParamLimits

0xfe1a,	// (0x00036385) lc0_stat_indi_pane_g

0xc46a,	// (0x000329d5) lc0_uni_indicator_pane_ParamLimits

0xc46a,	// (0x000329d5) lc0_uni_indicator_pane

0xe425,	// (0x00034990) ls0_title_pane_g1_ParamLimits

0xe425,	// (0x00034990) ls0_title_pane_g1

0xe439,	// (0x000349a4) ls0_title_pane_t1_ParamLimits

0xe439,	// (0x000349a4) ls0_title_pane_t1

0xc47a,	// (0x000329e5) lc0_uni_indicator_pane_g1_ParamLimits

0xc47a,	// (0x000329e5) lc0_uni_indicator_pane_g1

0x756e,	// (0x0002dad9) lc0_stat_clock_pane_t1

0xc70d,	// (0x00032c78) main_ai5_pane

0x757c,	// (0x0002dae7) ai5_sk_pane_ParamLimits

0x757c,	// (0x0002dae7) ai5_sk_pane

0xe467,	// (0x000349d2) cell_ai5_widget_pane_ParamLimits

0xe467,	// (0x000349d2) cell_ai5_widget_pane

0x763b,	// (0x0002dba6) aid_size_cell_widget_grid

0x7649,	// (0x0002dbb4) bg_ai5_widget_pane_ParamLimits

0x7649,	// (0x0002dbb4) bg_ai5_widget_pane

0x76c1,	// (0x0002dc2c) cell_ai5_widget_pane_g2

0x76d5,	// (0x0002dc40) cell_ai5_widget_pane_g3

0x76ef,	// (0x0002dc5a) cell_ai5_widget_pane_g4

0x76ff,	// (0x0002dc6a) cell_ai5_widget_pane_g5

0x770f,	// (0x0002dc7a) cell_ai5_widget_pane_g6

0x771b,	// (0x0002dc86) cell_ai5_widget_pane_g7

0x7763,	// (0x0002dcce) cell_ai5_widget_pane_t1_ParamLimits

0x7763,	// (0x0002dcce) cell_ai5_widget_pane_t1

0x7780,	// (0x0002dceb) cell_ai5_widget_pane_t2_ParamLimits

0x7780,	// (0x0002dceb) cell_ai5_widget_pane_t2

0x7798,	// (0x0002dd03) cell_ai5_widget_pane_t3_ParamLimits

0x7798,	// (0x0002dd03) cell_ai5_widget_pane_t3

0x77b0,	// (0x0002dd1b) cell_ai5_widget_pane_t4_ParamLimits

0x77b0,	// (0x0002dd1b) cell_ai5_widget_pane_t4

0x77d6,	// (0x0002dd41) cell_ai5_widget_pane_t5_ParamLimits

0x77d6,	// (0x0002dd41) cell_ai5_widget_pane_t5

0x77f6,	// (0x0002dd61) cell_ai5_widget_pane_t6_ParamLimits

0x77f6,	// (0x0002dd61) cell_ai5_widget_pane_t6

0x7808,	// (0x0002dd73) cell_ai5_widget_pane_t7_ParamLimits

0x7808,	// (0x0002dd73) cell_ai5_widget_pane_t7

0x7821,	// (0x0002dd8c) cell_ai5_widget_pane_t8_ParamLimits

0x7821,	// (0x0002dd8c) cell_ai5_widget_pane_t8

0x0009,

0xfe34,	// (0x0003639f) cell_ai5_widget_pane_t_ParamLimits

0xfe34,	// (0x0003639f) cell_ai5_widget_pane_t

0x7880,	// (0x0002ddeb) grid_ai5_widget_pane

0xcb2f,	// (0x0003309a) highlight_cell_ai5_widget_pane_ParamLimits

0xcb2f,	// (0x0003309a) highlight_cell_ai5_widget_pane

0xe4cd,	// (0x00034a38) ai5_sk_left_pane

0xe4d7,	// (0x00034a42) ai5_sk_middle_pane

0xe4e1,	// (0x00034a4c) ai5_sk_right_pane

0x78ac,	// (0x0002de17) bg_ai5_widget_pane_g1_ParamLimits

0x78ac,	// (0x0002de17) bg_ai5_widget_pane_g1

0x78b8,	// (0x0002de23) bg_ai5_widget_pane_g2_ParamLimits

0x78b8,	// (0x0002de23) bg_ai5_widget_pane_g2

0x78c4,	// (0x0002de2f) bg_ai5_widget_pane_g3_ParamLimits

0x78c4,	// (0x0002de2f) bg_ai5_widget_pane_g3

0x78d0,	// (0x0002de3b) bg_ai5_widget_pane_g4_ParamLimits

0x78d0,	// (0x0002de3b) bg_ai5_widget_pane_g4

0x78dc,	// (0x0002de47) bg_ai5_widget_pane_g5_ParamLimits

0x78dc,	// (0x0002de47) bg_ai5_widget_pane_g5

0x78e8,	// (0x0002de53) bg_ai5_widget_pane_g6_ParamLimits

0x78e8,	// (0x0002de53) bg_ai5_widget_pane_g6

0x78f4,	// (0x0002de5f) bg_ai5_widget_pane_g7_ParamLimits

0x78f4,	// (0x0002de5f) bg_ai5_widget_pane_g7

0x7900,	// (0x0002de6b) bg_ai5_widget_pane_g8_ParamLimits

0x7900,	// (0x0002de6b) bg_ai5_widget_pane_g8

0x790c,	// (0x0002de77) bg_ai5_widget_pane_g9_ParamLimits

0x790c,	// (0x0002de77) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x000363b4) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x000363b4) bg_ai5_widget_pane_g

0x793e,	// (0x0002dea9) cell_shortcut_ai5_widget_pane_ParamLimits

0x793e,	// (0x0002dea9) cell_shortcut_ai5_widget_pane

0x0655,	// (0x00026bc0) bg_cell_shortcut_ai5_widget_pane

0x794f,	// (0x0002deba) cell_grid_ai5_widget_pane_g1

0x0655,	// (0x00026bc0) highlight_cell_shortcut_ai5_widget_pane

0x1696,	// (0x00027c01) ai5_sk_left_pane_g1

0x7958,	// (0x0002dec3) ai5_sk_left_pane_g2

0x7960,	// (0x0002decb) ai5_sk_left_pane_g3

0x7968,	// (0x0002ded3) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x000363c7) ai5_sk_left_pane_g

0x7970,	// (0x0002dedb) ai5_sk_left_pane_t1

0x168e,	// (0x00027bf9) ai5_sk_right_pane_g1

0x797e,	// (0x0002dee9) ai5_sk_right_pane_g2

0x7986,	// (0x0002def1) ai5_sk_right_pane_g3

0x798e,	// (0x0002def9) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x000363d0) ai5_sk_right_pane_g

0x7996,	// (0x0002df01) ai5_sk_right_pane_t1

0x168e,	// (0x00027bf9) ai5_sk_middle_pane_g1

0x1696,	// (0x00027c01) ai5_sk_middle_pane_g2

0x16ae,	// (0x00027c19) ai5_sk_middle_pane_g3

0x7986,	// (0x0002def1) ai5_sk_middle_pane_g4

0x7960,	// (0x0002decb) ai5_sk_middle_pane_g5

0x79a4,	// (0x0002df0f) ai5_sk_middle_pane_g6

0xe4eb,	// (0x00034a56) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x000363d9) ai5_sk_middle_pane_g

0xacaf,	// (0x0003121a) aid_touch_area_size_lc0_ParamLimits

0xacaf,	// (0x0003121a) aid_touch_area_size_lc0

0x1ea9,	// (0x00028414) cell_hwr_candidate_pane_t1_ParamLimits

0x11ab,	// (0x00027716) aid_touch_navi_pane

0xaf3b,	// (0x000314a6) status_dt_navi_pane_ParamLimits

0xaf3b,	// (0x000314a6) status_dt_navi_pane

0xaf53,	// (0x000314be) status_dt_sta_pane_ParamLimits

0xaf53,	// (0x000314be) status_dt_sta_pane

0xe4f3,	// (0x00034a5e) dt_sta_controll_pane

0xe500,	// (0x00034a6b) dt_sta_indi_pane

0xe50d,	// (0x00034a78) dt_sta_title_pane

0xc8a7,	// (0x00032e12) bg_dt_sta_indi_pane_ParamLimits

0xc8a7,	// (0x00032e12) bg_dt_sta_indi_pane

0xe51f,	// (0x00034a8a) dt_sta_battery_pane

0xe527,	// (0x00034a92) dt_sta_indi_pane_g1

0x79f6,	// (0x0002df61) dt_sta_indi_pane_g2

0x79ff,	// (0x0002df6a) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x000363e8) dt_sta_indi_pane_g

0x7a08,	// (0x0002df73) dt_sta_signal_pane

0xcb2f,	// (0x0003309a) bg_dt_sta_title_pane_ParamLimits

0xcb2f,	// (0x0003309a) bg_dt_sta_title_pane

0x3871,	// (0x00029ddc) dt_sta_title_pane_g1

0xe530,	// (0x00034a9b) dt_sta_title_pane_t1_ParamLimits

0xe530,	// (0x00034a9b) dt_sta_title_pane_t1

0xc70d,	// (0x00032c78) bg_dt_sta_control_pane

0xe545,	// (0x00034ab0) dt_sta_controll_pane_g1

0xe54e,	// (0x00034ab9) bg_dt_sta_title_pane_g1

0xe557,	// (0x00034ac2) bg_dt_sta_title_pane_g2

0xe560,	// (0x00034acb) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x000363ef) bg_dt_sta_title_pane_g

0x5009,	// (0x0002b574) bg_dt_sta_indi_pane_g1

0x7a4a,	// (0x0002dfb5) dt_sta_signal_pane_g1

0x7a52,	// (0x0002dfbd) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x000363f6) dt_sta_signal_pane_g

0x7a5a,	// (0x0002dfc5) dt_sta_battery_pane_g1

0x7a63,	// (0x0002dfce) dt_sta_battery_pane_t1

0x5009,	// (0x0002b574) bg_dt_sta_control_pane_g1

0xcfe5,	// (0x00033550) fep_china_uni_eep_pane

0xcfed,	// (0x00033558) fep_china_uni_entry_pane_ParamLimits

0xcffd,	// (0x00033568) popup_fep_china_uni_window_g1_ParamLimits

0xd00d,	// (0x00033578) popup_fep_china_uni_window_g2_ParamLimits

0xd00d,	// (0x00033578) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x00035c79) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x00035c79) popup_fep_china_uni_window_g

0x7a72,	// (0x0002dfdd) fep_china_uni_eep_pane_g1

0x7a7a,	// (0x0002dfe5) fep_china_uni_eep_pane_t1

0x74eb,	// (0x0002da56) aid_touch_area_size_smil_player

0x1301,	// (0x0002786c) lc0_clock_pane

0x14e8,	// (0x00027a53) status_pane_g5_ParamLimits

0x14e8,	// (0x00027a53) status_pane_g5

0xa6c1,	// (0x00030c2c) popup_keymap_window

0x14a6,	// (0x00027a11) status_icon_pane

0x76d5,	// (0x0002dc40) cell_ai5_widget_pane_g3_ParamLimits

0x76ef,	// (0x0002dc5a) cell_ai5_widget_pane_g4_ParamLimits

0x76ff,	// (0x0002dc6a) cell_ai5_widget_pane_g5_ParamLimits

0x7727,	// (0x0002dc92) cell_ai5_widget_pane_g8_ParamLimits

0x7727,	// (0x0002dc92) cell_ai5_widget_pane_g8

0x773b,	// (0x0002dca6) cell_ai5_widget_pane_g9_ParamLimits

0x773b,	// (0x0002dca6) cell_ai5_widget_pane_g9

0x774f,	// (0x0002dcba) cell_ai5_widget_pane_g10_ParamLimits

0x774f,	// (0x0002dcba) cell_ai5_widget_pane_g10

0x7a89,	// (0x0002dff4) status_icon_pane_g1

0xc70d,	// (0x00032c78) bg_popup_sub_pane_cp13

0x7a91,	// (0x0002dffc) popup_keymap_window_t1

0xa39d,	// (0x00030908) control_pane_g6_ParamLimits

0xa39d,	// (0x00030908) control_pane_g6

0xa3aa,	// (0x00030915) control_pane_g7_ParamLimits

0xa3aa,	// (0x00030915) control_pane_g7

0xa3b7,	// (0x00030922) control_pane_g8_ParamLimits

0xa3b7,	// (0x00030922) control_pane_g8

0xe4f3,	// (0x00034a5e) dt_sta_controll_pane_ParamLimits

0xe500,	// (0x00034a6b) dt_sta_indi_pane_ParamLimits

0xe50d,	// (0x00034a78) dt_sta_title_pane_ParamLimits

0xca7a,	// (0x00032fe5) aid_size_touch_scroll_bar_cale

0x9609,	// (0x0002fb74) popup_discreet_window_ParamLimits

0x9609,	// (0x0002fb74) popup_discreet_window

0x965b,	// (0x0002fbc6) popup_sk_window

0x30b5,	// (0x00029620) bg_popup_sub_pane_cp28_ParamLimits

0x30b5,	// (0x00029620) bg_popup_sub_pane_cp28

0x7a9f,	// (0x0002e00a) popup_discreet_window_g1_ParamLimits

0x7a9f,	// (0x0002e00a) popup_discreet_window_g1

0xe569,	// (0x00034ad4) popup_discreet_window_t1_ParamLimits

0xe569,	// (0x00034ad4) popup_discreet_window_t1

0x7add,	// (0x0002e048) popup_discreet_window_t2_ParamLimits

0x7add,	// (0x0002e048) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x000363fb) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x000363fb) popup_discreet_window_t

0x2801,	// (0x00028d6c) popup_sk_window_g1

0x280b,	// (0x00028d76) popup_sk_window_g2

0x0001,

0xfe97,	// (0x00036402) popup_sk_window_g

0xc4a5,	// (0x00032a10) popup_sk_window_t1

0xc4b3,	// (0x00032a1e) popup_sk_window_t1_copy1

0x76c1,	// (0x0002dc2c) cell_ai5_widget_pane_g2_ParamLimits

0x7833,	// (0x0002dd9e) cell_ai5_widget_pane_t9_ParamLimits

0x7833,	// (0x0002dd9e) cell_ai5_widget_pane_t9

0xc70d,	// (0x00032c78) main_fep_fshwr2_pane

0xc4c1,	// (0x00032a2c) aid_fshwr2_btn_pane

0xc4d5,	// (0x00032a40) aid_fshwr2_syb_pane

0xc4e9,	// (0x00032a54) aid_fshwr2_txt_pane

0xc4f9,	// (0x00032a64) fshwr2_func_candi_pane

0xc519,	// (0x00032a84) fshwr2_hwr_syb_pane

0xc53b,	// (0x00032aa6) fshwr2_icf_pane

0xc70d,	// (0x00032c78) fshwr2_icf_bg_pane

0x28bd,	// (0x00028e28) fshwr2_icf_pane_t1_ParamLimits

0x28bd,	// (0x00028e28) fshwr2_icf_pane_t1

0xcf62,	// (0x000334cd) fshwr2_func_candi_pane_g1

0xe587,	// (0x00034af2) fshwr2_func_candi_row_pane_ParamLimits

0xe587,	// (0x00034af2) fshwr2_func_candi_row_pane

0xc56b,	// (0x00032ad6) cell_fshwr2_syb_pane_ParamLimits

0xc56b,	// (0x00032ad6) cell_fshwr2_syb_pane

0x74bb,	// (0x0002da26) fshwr2_hwr_syb_pane_g1_ParamLimits

0x74bb,	// (0x0002da26) fshwr2_hwr_syb_pane_g1

0xc70d,	// (0x00032c78) bg_popup_call_pane_cp01

0xc591,	// (0x00032afc) fshwr2_func_candi_cell_pane_ParamLimits

0xc591,	// (0x00032afc) fshwr2_func_candi_cell_pane

0x2e9e,	// (0x00029409) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2e9e,	// (0x00029409) fshwr2_func_candi_cell_bg_pane

0xc5dc,	// (0x00032b47) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc5dc,	// (0x00032b47) fshwr2_func_candi_cell_pane_g1

0xc613,	// (0x00032b7e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc613,	// (0x00032b7e) fshwr2_func_candi_cell_pane_t1

0xc70d,	// (0x00032c78) bg_button_pane_cp08

0x7b56,	// (0x0002e0c1) cell_fshwr2_syb_bg_pane

0xc62e,	// (0x00032b99) cell_fshwr2_syb_bg_pane_g1

0xc641,	// (0x00032bac) cell_fshwr2_syb_bg_pane_t1

0xcb2f,	// (0x0003309a) main_tmo_pane

0xb6c6,	// (0x00031c31) uni_indicator_pane_g1_ParamLimits

0xb6dc,	// (0x00031c47) uni_indicator_pane_g2_ParamLimits

0xb6f2,	// (0x00031c5d) uni_indicator_pane_g3_ParamLimits

0x3bde,	// (0x0002a149) uni_indicator_pane_g4_ParamLimits

0x3bde,	// (0x0002a149) uni_indicator_pane_g4

0x3bf2,	// (0x0002a15d) uni_indicator_pane_g5_ParamLimits

0x3bf2,	// (0x0002a15d) uni_indicator_pane_g5

0x3bf2,	// (0x0002a15d) uni_indicator_pane_g6_ParamLimits

0x3bf2,	// (0x0002a15d) uni_indicator_pane_g6

0xf906,	// (0x00035e71) uni_indicator_pane_g_ParamLimits

0xd803,	// (0x00033d6e) popup_tmo_note_window_ParamLimits

0xd803,	// (0x00033d6e) popup_tmo_note_window

0xcb2f,	// (0x0003309a) fshwr2_bg_pane

0xc604,	// (0x00032b6f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc604,	// (0x00032b6f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x00036407) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x00036407) fshwr2_func_candi_cell_pane_g

0x5009,	// (0x0002b574) bg_popup_window_pane_cp01

0x29a9,	// (0x00028f14) bg_popup_window_pane_g1_cp01

0x7b62,	// (0x0002e0cd) bg_popup_window_pane_cp22_ParamLimits

0x7b62,	// (0x0002e0cd) bg_popup_window_pane_cp22

0xe5aa,	// (0x00034b15) listscroll_tmo_link_pane_ParamLimits

0xe5aa,	// (0x00034b15) listscroll_tmo_link_pane

0x7bb0,	// (0x0002e11b) popup_tmo_note_window_g1_ParamLimits

0x7bb0,	// (0x0002e11b) popup_tmo_note_window_g1

0xe5ea,	// (0x00034b55) tmo_note_info_pane_ParamLimits

0xe5ea,	// (0x00034b55) tmo_note_info_pane

0xe604,	// (0x00034b6f) list_tmo_note_info_pane_g1_ParamLimits

0xe604,	// (0x00034b6f) list_tmo_note_info_pane_g1

0x7bee,	// (0x0002e159) list_tmo_note_info_pane_g2_ParamLimits

0x7bee,	// (0x0002e159) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x0003640c) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x0003640c) list_tmo_note_info_pane_g

0x7c0a,	// (0x0002e175) list_tmo_note_info_text_pane_ParamLimits

0x7c0a,	// (0x0002e175) list_tmo_note_info_text_pane

0x7c8b,	// (0x0002e1f6) list_tmo_link_pane

0x7c98,	// (0x0002e203) scroll_pane_cp20

0x7ca5,	// (0x0002e210) list_single_tmo_link_pane_ParamLimits

0x7ca5,	// (0x0002e210) list_single_tmo_link_pane

0x7cb5,	// (0x0002e220) list_single_tmo_link_pane_t1

0x7cc3,	// (0x0002e22e) list_tmo_note_info_text_pane_t1_ParamLimits

0x7cc3,	// (0x0002e22e) list_tmo_note_info_text_pane_t1

0x9d7d,	// (0x000302e8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9d7d,	// (0x000302e8) aid_size_touch_scroll_bar_cp01

0x913a,	// (0x0002f6a5) aid_size_touch_slider_marker

0x964b,	// (0x0002fbb6) popup_settings_window_ParamLimits

0x964b,	// (0x0002fbb6) popup_settings_window

0xeba8,	// (0x00035113) popup_candi_list_indi_window

0x11ab,	// (0x00027716) aid_touch_navi_pane_ParamLimits

0x2014,	// (0x0002857f) rs_clock_indi_pane

0x201d,	// (0x00028588) sctrl_sk_bottom_pane_ParamLimits

0x202e,	// (0x00028599) sctrl_sk_top_pane_ParamLimits

0xc10b,	// (0x00032676) popup_fep_tooltip_window

0x763b,	// (0x0002dba6) aid_size_cell_widget_grid_ParamLimits

0x76ac,	// (0x0002dc17) cell_ai5_widget_pane_g1_ParamLimits

0x76ac,	// (0x0002dc17) cell_ai5_widget_pane_g1

0x770f,	// (0x0002dc7a) cell_ai5_widget_pane_g6_ParamLimits

0x771b,	// (0x0002dc86) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1f,	// (0x0003638a) cell_ai5_widget_pane_g_ParamLimits

0xfe1f,	// (0x0003638a) cell_ai5_widget_pane_g

0x7862,	// (0x0002ddcd) cell_ai5_widget_pane_t10_ParamLimits

0x7862,	// (0x0002ddcd) cell_ai5_widget_pane_t10

0x7880,	// (0x0002ddeb) grid_ai5_widget_pane_ParamLimits

0x7918,	// (0x0002de83) cell_contacts_ai5_widget_pane_ParamLimits

0x7918,	// (0x0002de83) cell_contacts_ai5_widget_pane

0x7af2,	// (0x0002e05d) popup_discreet_window_t3_ParamLimits

0x7af2,	// (0x0002e05d) popup_discreet_window_t3

0xc557,	// (0x00032ac2) popup_fshwr2_char_preview_window_ParamLimits

0xc557,	// (0x00032ac2) popup_fshwr2_char_preview_window

0xe61b,	// (0x00034b86) tmo_note_info_pane_t1

0xe630,	// (0x00034b9b) tmo_note_info_pane_t2

0xe647,	// (0x00034bb2) tmo_note_info_pane_t3

0x7c67,	// (0x0002e1d2) tmo_note_info_pane_t4

0x7c79,	// (0x0002e1e4) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x00036411) tmo_note_info_pane_t

0x7c8b,	// (0x0002e1f6) list_tmo_link_pane_ParamLimits

0x7c98,	// (0x0002e203) scroll_pane_cp20_ParamLimits

0xc70d,	// (0x00032c78) bg_popup_fep_char_preview_window_cp01

0xe65c,	// (0x00034bc7) popup_fshwr2_char_preview_window_t1

0x7cea,	// (0x0002e255) popup_candi_list_indi_window_g1

0x7cf3,	// (0x0002e25e) bg_cell_contacts_ai5_widget_pane

0x7cff,	// (0x0002e26a) cell_contacts_ai5_widget_pane_g1

0x56fc,	// (0x0002bc67) cell_contacts_ai5_widget_pane_g2

0x7d14,	// (0x0002e27f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x0003641c) cell_contacts_ai5_widget_pane_g

0x7d20,	// (0x0002e28b) cell_contacts_ai5_widget_pane_t1

0xcb2f,	// (0x0003309a) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7d97,	// (0x0002e302) settings_container_pane

0x0655,	// (0x00026bc0) listscroll_set_pane_copy1

0x470b,	// (0x0002ac76) scroll_pane_cp121_copy1

0x2e62,	// (0x000293cd) set_content_pane_copy1

0xe6cf,	// (0x00034c3a) aid_height_set_list_copy1_ParamLimits

0xe6cf,	// (0x00034c3a) aid_height_set_list_copy1

0x3dea,	// (0x0002a355) aid_size_parent_copy1_ParamLimits

0x3dea,	// (0x0002a355) aid_size_parent_copy1

0xe6db,	// (0x00034c46) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe6db,	// (0x00034c46) button_value_adjust_pane_cp6_copy1

0x0b8c,	// (0x000270f7) list_highlight_pane_cp2_copy1_ParamLimits

0x0b8c,	// (0x000270f7) list_highlight_pane_cp2_copy1

0xe6ef,	// (0x00034c5a) list_set_pane_copy1_ParamLimits

0xe6ef,	// (0x00034c5a) list_set_pane_copy1

0xe66a,	// (0x00034bd5) main_pane_set_t1_copy1_ParamLimits

0xe66a,	// (0x00034bd5) main_pane_set_t1_copy1

0xe6a4,	// (0x00034c0f) main_pane_set_t2_copy1_ParamLimits

0xe6a4,	// (0x00034c0f) main_pane_set_t2_copy1

0xe79c,	// (0x00034d07) main_pane_set_t3_copy1

0xe7aa,	// (0x00034d15) main_pane_set_t4_copy1

0xe6c3,	// (0x00034c2e) set_content_pane_g1_copy1_ParamLimits

0xe6c3,	// (0x00034c2e) set_content_pane_g1_copy1

0xe7b8,	// (0x00034d23) setting_code_pane_copy1

0x7e94,	// (0x0002e3ff) setting_slider_graphic_pane_copy1

0x7e94,	// (0x0002e3ff) setting_slider_pane_copy1

0x7e94,	// (0x0002e3ff) setting_text_pane_copy1

0x7e94,	// (0x0002e3ff) setting_volume_pane_copy1

0xe7b8,	// (0x00034d23) settings_code_pane_cp2_copy1

0xe7c0,	// (0x00034d2b) settings_code_pane_cp_copy1_ParamLimits

0xe7c0,	// (0x00034d2b) settings_code_pane_cp_copy1

0xc657,	// (0x00032bc2) volume_set_pane_copy1

0xe7d4,	// (0x00034d3f) volume_set_pane_g10_copy1

0xe7dc,	// (0x00034d47) volume_set_pane_g1_copy1

0xe7e4,	// (0x00034d4f) volume_set_pane_g2_copy1

0xe7ec,	// (0x00034d57) volume_set_pane_g3_copy1

0xe7f4,	// (0x00034d5f) volume_set_pane_g4_copy1

0xe7fc,	// (0x00034d67) volume_set_pane_g5_copy1

0xe804,	// (0x00034d6f) volume_set_pane_g6_copy1

0xe80c,	// (0x00034d77) volume_set_pane_g7_copy1

0xe814,	// (0x00034d7f) volume_set_pane_g8_copy1

0xe81c,	// (0x00034d87) volume_set_pane_g9_copy1

0xc77d,	// (0x00032ce8) bg_set_opt_pane_cp_copy1_ParamLimits

0xc77d,	// (0x00032ce8) bg_set_opt_pane_cp_copy1

0xc65f,	// (0x00032bca) setting_slider_pane_t1_copy1_ParamLimits

0xc65f,	// (0x00032bca) setting_slider_pane_t1_copy1

0xc67d,	// (0x00032be8) setting_slider_pane_t2_copy1_ParamLimits

0xc67d,	// (0x00032be8) setting_slider_pane_t2_copy1

0xc697,	// (0x00032c02) setting_slider_pane_t3_copy1_ParamLimits

0xc697,	// (0x00032c02) setting_slider_pane_t3_copy1

0xc6af,	// (0x00032c1a) slider_set_pane_copy1_ParamLimits

0xc6af,	// (0x00032c1a) slider_set_pane_copy1

0xcb87,	// (0x000330f2) set_opt_bg_pane_g1_copy2

0xcb8f,	// (0x000330fa) set_opt_bg_pane_g2_copy2

0x7f00,	// (0x0002e46b) set_opt_bg_pane_g3_copy2

0xcb9f,	// (0x0003310a) set_opt_bg_pane_g4_copy2

0xcba7,	// (0x00033112) set_opt_bg_pane_g5_copy2

0xcbaf,	// (0x0003311a) set_opt_bg_pane_g6_copy2

0xe824,	// (0x00034d8f) set_opt_bg_pane_g7_copy2

0x7f12,	// (0x0002e47d) set_opt_bg_pane_g8_copy2

0x7f1c,	// (0x0002e487) set_opt_bg_pane_g9_copy2

0xc6c5,	// (0x00032c30) aid_size_touch_slider_mark_copy1_ParamLimits

0xc6c5,	// (0x00032c30) aid_size_touch_slider_mark_copy1

0xe82c,	// (0x00034d97) slider_set_pane_g1_copy1

0x2a34,	// (0x00028f9f) slider_set_pane_g2_copy1

0xb811,	// (0x00031d7c) slider_set_pane_g3_copy1_ParamLimits

0xb811,	// (0x00031d7c) slider_set_pane_g3_copy1

0xb825,	// (0x00031d90) slider_set_pane_g4_copy1_ParamLimits

0xb825,	// (0x00031d90) slider_set_pane_g4_copy1

0xb83d,	// (0x00031da8) slider_set_pane_g5_copy1_ParamLimits

0xb83d,	// (0x00031da8) slider_set_pane_g5_copy1

0xb811,	// (0x00031d7c) slider_set_pane_g6_copy1_ParamLimits

0xb811,	// (0x00031d7c) slider_set_pane_g6_copy1

0xc6d9,	// (0x00032c44) slider_set_pane_g7_copy1_ParamLimits

0xc6d9,	// (0x00032c44) slider_set_pane_g7_copy1

0xc721,	// (0x00032c8c) bg_set_opt_pane_cp2_copy1

0xe835,	// (0x00034da0) setting_slider_graphic_pane_g1_copy1

0xe83e,	// (0x00034da9) setting_slider_graphic_pane_t1_copy1

0xe84e,	// (0x00034db9) setting_slider_graphic_pane_t2_copy1

0xe85e,	// (0x00034dc9) slider_set_pane_cp_copy1

0x7f68,	// (0x0002e4d3) input_focus_pane_cp1_copy1

0x7f71,	// (0x0002e4dc) list_set_text_pane_copy1

0x7f79,	// (0x0002e4e4) setting_text_pane_g1_copy1

0xf2ae,	// (0x00035819) set_text_pane_t1_copy1

0x7f68,	// (0x0002e4d3) input_focus_pane_cp2_copy1

0x7f79,	// (0x0002e4e4) setting_code_pane_g1_copy1

0x7f82,	// (0x0002e4ed) setting_code_pane_t1_copy1

0x7f90,	// (0x0002e4fb) list_set_graphic_pane_copy1

0xc721,	// (0x00032c8c) bg_set_opt_pane_cp4_copy1

0xd13d,	// (0x000336a8) list_set_graphic_pane_g1_copy1_ParamLimits

0xd13d,	// (0x000336a8) list_set_graphic_pane_g1_copy1

0x7fa4,	// (0x0002e50f) list_set_graphic_pane_g2_copy1

0xd155,	// (0x000336c0) list_set_graphic_pane_t1_copy1_ParamLimits

0xd155,	// (0x000336c0) list_set_graphic_pane_t1_copy1

0x5009,	// (0x0002b574) rs_clock_indi_pane_g1

0x7fac,	// (0x0002e517) rs_clock_indi_pane_t1

0x7fba,	// (0x0002e525) rs_indi_pane

0x7fc2,	// (0x0002e52d) rs_indi_pane_g1

0x7fcb,	// (0x0002e536) rs_indi_pane_g2

0x7cea,	// (0x0002e255) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x00036423) rs_indi_pane_g

0x0655,	// (0x00026bc0) bg_popup_preview_window_pane_cp03

0x7fd4,	// (0x0002e53f) popup_fep_tooltip_window_t1

0xd4a8,	// (0x00033a13) popup_note2_window_g2_ParamLimits

0xd4a8,	// (0x00033a13) popup_note2_window_g2

0x0001,

0xfc58,	// (0x000361c3) popup_note2_window_g_ParamLimits

0xfc58,	// (0x000361c3) popup_note2_window_g

0x619a,	// (0x0002c705) bg_popup_sub_pane_cp11_ParamLimits

0x61a7,	// (0x0002c712) cell_ai3_links_pane_g1_ParamLimits

0x61be,	// (0x0002c729) cell_ai3_links_pane_t1

0xf2ae,	// (0x00035819) set_text_pane_t1_copy1_ParamLimits

0x0566,	// (0x00026ad1) cell_graphic_popup_pane_cp2_ParamLimits

0x0566,	// (0x00026ad1) cell_graphic_popup_pane_cp2

0xe86e,	// (0x00034dd9) cell_graphic_popup_pane_g1_cp2

0xc9fd,	// (0x00032f68) cell_graphic_popup_pane_g2_cp2

0x7fea,	// (0x0002e555) cell_graphic_popup_pane_g3_cp2

0xe876,	// (0x00034de1) cell_graphic_popup_pane_t2_cp2

0xca0e,	// (0x00032f79) grid_highlight_pane_cp3_cp2

0xcddf,	// (0x0003334a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xcb2f,	// (0x0003309a) main_tmo_pane_ParamLimits

0xd7f7,	// (0x00033d62) popup_tmo_big_image_note_window

0x769b,	// (0x0002dc06) cell_ai5_widget_list_pane

0x76a3,	// (0x0002dc0e) cell_ai5_widget_lrg_icon_pane

0xe61b,	// (0x00034b86) tmo_note_info_pane_t1_ParamLimits

0xe630,	// (0x00034b9b) tmo_note_info_pane_t2_ParamLimits

0xe647,	// (0x00034bb2) tmo_note_info_pane_t3_ParamLimits

0x7c67,	// (0x0002e1d2) tmo_note_info_pane_t4_ParamLimits

0x7c79,	// (0x0002e1e4) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x00036411) tmo_note_info_pane_t_ParamLimits

0x7d97,	// (0x0002e302) settings_container_pane_ParamLimits

0xe866,	// (0x00034dd1) indicator_popup_pane_cp5

0xe866,	// (0x00034dd1) indicator_popup_pane_cp6

0x7f90,	// (0x0002e4fb) list_set_graphic_pane_copy1_ParamLimits

0xc70d,	// (0x00032c78) bg_popup_window_pane_cp23

0x8000,	// (0x0002e56b) popup_tmo_big_image_note_window_g1

0x8009,	// (0x0002e574) popup_tmo_big_image_note_window_t1

0x8019,	// (0x0002e584) popup_tmo_big_image_note_window_t2

0x8029,	// (0x0002e594) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x0003642a) popup_tmo_big_image_note_window_t

0x5009,	// (0x0002b574) cell_ai5_widget_lrg_icon_pane_g1

0x8039,	// (0x0002e5a4) cell_ai5_widget_lrg_icon_pane_t1

0x8047,	// (0x0002e5b2) cell_ai5_widget_list_row_pane_ParamLimits

0x8047,	// (0x0002e5b2) cell_ai5_widget_list_row_pane

0x805e,	// (0x0002e5c9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x805e,	// (0x0002e5c9) cell_ai5_widget_list_row_pane_g1

0xe884,	// (0x00034def) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe884,	// (0x00034def) cell_ai5_widget_list_row_pane_t1

0x8096,	// (0x0002e601) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8096,	// (0x0002e601) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x00036431) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x00036431) cell_ai5_widget_list_row_pane_t

0xc70d,	// (0x00032c78) main_fep_vtchi_ss_pane

0x80de,	// (0x0002e649) popup_fep_char_pre_window

0x80e6,	// (0x0002e651) popup_fep_ituss_window

0xe8d7,	// (0x00034e42) popup_fep_vkbss_window

0xe8e4,	// (0x00034e4f) grid_vkbss_keypad_pane_ParamLimits

0xe8e4,	// (0x00034e4f) grid_vkbss_keypad_pane

0x814c,	// (0x0002e6b7) ituss_keypad_pane

0x2a5e,	// (0x00028fc9) aid_vkbss_key_offset_ParamLimits

0x2a5e,	// (0x00028fc9) aid_vkbss_key_offset

0xc6ef,	// (0x00032c5a) cell_vkbss_key_pane_ParamLimits

0xc6ef,	// (0x00032c5a) cell_vkbss_key_pane

0x14c2,	// (0x00027a2d) bg_cell_vkbss_key_g1_ParamLimits

0x14c2,	// (0x00027a2d) bg_cell_vkbss_key_g1

0xe8f4,	// (0x00034e5f) cell_vkbss_key_3p_pane_ParamLimits

0xe8f4,	// (0x00034e5f) cell_vkbss_key_3p_pane

0xe90e,	// (0x00034e79) cell_vkbss_key_g1_ParamLimits

0xe90e,	// (0x00034e79) cell_vkbss_key_g1

0xe928,	// (0x00034e93) cell_vkbss_key_t1_ParamLimits

0xe928,	// (0x00034e93) cell_vkbss_key_t1

0x2a80,	// (0x00028feb) cell_ituss_key_pane_ParamLimits

0x2a80,	// (0x00028feb) cell_ituss_key_pane

0x81ae,	// (0x0002e719) bg_cell_ituss_key_g1_ParamLimits

0x81ae,	// (0x0002e719) bg_cell_ituss_key_g1

0x81ba,	// (0x0002e725) cell_ituss_key_pane_g1_ParamLimits

0x81ba,	// (0x0002e725) cell_ituss_key_pane_g1

0x2a91,	// (0x00028ffc) cell_ituss_key_pane_g2_ParamLimits

0x2a91,	// (0x00028ffc) cell_ituss_key_pane_g2

0x0002,

0xfecd,	// (0x00036438) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x00036438) cell_ituss_key_pane_g

0x2abd,	// (0x00029028) cell_ituss_key_t1_ParamLimits

0x2abd,	// (0x00029028) cell_ituss_key_t1

0x2af7,	// (0x00029062) cell_ituss_key_t2_ParamLimits

0x2af7,	// (0x00029062) cell_ituss_key_t2

0x2b28,	// (0x00029093) cell_ituss_key_t3_ParamLimits

0x2b28,	// (0x00029093) cell_ituss_key_t3

0x2af7,	// (0x00029062) cell_ituss_key_t4_ParamLimits

0x2af7,	// (0x00029062) cell_ituss_key_t4

0x0004,

0xfed4,	// (0x0003643f) cell_ituss_key_t_ParamLimits

0xfed4,	// (0x0003643f) cell_ituss_key_t

0x81e0,	// (0x0002e74b) cell_vkbss_key_3p_pane_g1

0x81e8,	// (0x0002e753) cell_vkbss_key_3p_pane_g2

0x81f0,	// (0x0002e75b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedf,	// (0x0003644a) cell_vkbss_key_3p_pane_g

0x0655,	// (0x00026bc0) bg_popup_fep_char_preview_window_cp02

0x81f8,	// (0x0002e763) popup_fep_char_pre_window_t1

0xe4c3,	// (0x00034a2e) main_ai5_sk_pane

0x7cf3,	// (0x0002e25e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7cff,	// (0x0002e26a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x56fc,	// (0x0002bc67) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7d14,	// (0x0002e27f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x0003641c) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7d20,	// (0x0002e28b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xcb2f,	// (0x0003309a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe953,	// (0x00034ebe) main_ai5_sk_pane_g1

0xb317,	// (0x00031882) popup_query_code_window_g1

0xe8c8,	// (0x00034e33) popup_fep_vkb_icf_pane

0x8126,	// (0x0002e691) popup_fep_vtchi_icf_pane

0x820f,	// (0x0002e77a) bg_icf_pane

0x821b,	// (0x0002e786) list_vkb_icf_pane

0x822a,	// (0x0002e795) bg_icf_pane_cp01

0x823d,	// (0x0002e7a8) vtchi_icf_list_pane

0xe95c,	// (0x00034ec7) list_vkb_icf_pane_t1_ParamLimits

0xe95c,	// (0x00034ec7) list_vkb_icf_pane_t1

0x826e,	// (0x0002e7d9) vtchi_icf_list_pane_t1_ParamLimits

0x826e,	// (0x0002e7d9) vtchi_icf_list_pane_t1

0x80e6,	// (0x0002e651) popup_fep_ituss_window_ParamLimits

0x8126,	// (0x0002e691) popup_fep_vtchi_icf_pane_ParamLimits

0x814c,	// (0x0002e6b7) ituss_keypad_pane_ParamLimits

0x2a52,	// (0x00028fbd) ituss_sks_pane

0x820f,	// (0x0002e77a) bg_icf_pane_ParamLimits

0xe8b5,	// (0x00034e20) icf_edit_indi_pane_ParamLimits

0xe8b5,	// (0x00034e20) icf_edit_indi_pane

0x821b,	// (0x0002e786) list_vkb_icf_pane_ParamLimits

0x822a,	// (0x0002e795) bg_icf_pane_cp01_ParamLimits

0x80d1,	// (0x0002e63c) icf_edit_indi_pane_cp01_ParamLimits

0x80d1,	// (0x0002e63c) icf_edit_indi_pane_cp01

0x8245,	// (0x0002e7b0) vtchi_query_pane

0x74bb,	// (0x0002da26) icf_edit_indi_pane_g1_ParamLimits

0x74bb,	// (0x0002da26) icf_edit_indi_pane_g1

0xe973,	// (0x00034ede) icf_edit_indi_pane_g2_ParamLimits

0xe973,	// (0x00034ede) icf_edit_indi_pane_g2

0x0001,

0xfef7,	// (0x00036462) icf_edit_indi_pane_g_ParamLimits

0xfef7,	// (0x00036462) icf_edit_indi_pane_g

0xe985,	// (0x00034ef0) icf_edit_indi_pane_t1

0x828c,	// (0x0002e7f7) bg_input_focus_pane_cp042

0xca71,	// (0x00032fdc) vtchi_button_pane

0x8295,	// (0x0002e800) vtchi_query_pane_t1

0x82a3,	// (0x0002e80e) vtchi_query_pane_t2

0x82b1,	// (0x0002e81c) vtchi_query_pane_t3

0x0002,

0xfee6,	// (0x00036451) vtchi_query_pane_t

0xc70d,	// (0x00032c78) bg_button_pane_cp13

0x82bf,	// (0x0002e82a) vtchi_button_pane_g1

0x2b6b,	// (0x000290d6) ituss_sks_pane_g1

0x2b76,	// (0x000290e1) ituss_sks_pane_g2

0x0001,

0xfeed,	// (0x00036458) ituss_sks_pane_g

0x82c7,	// (0x0002e832) ituss_sks_pane_t1

0x82d5,	// (0x0002e840) ituss_sks_pane_t2

0x0001,

0xfef2,	// (0x0003645d) ituss_sks_pane_t

0x4a86,	// (0x0002aff1) indicator_nsta_pane_cp_g1

0x4a8e,	// (0x0002aff9) indicator_nsta_pane_cp_g2

0x4a96,	// (0x0002b001) indicator_nsta_pane_cp_g3

0x4a86,	// (0x0002aff1) indicator_nsta_pane_cp_g4

0x4a8e,	// (0x0002aff9) indicator_nsta_pane_cp_g5

0x4a96,	// (0x0002b001) indicator_nsta_pane_cp_g6

0x0005,

0xfaa2,	// (0x0003600d) indicator_nsta_pane_cp_g

0xe2a0,	// (0x0003480b) cell_graphic2_pane_t2_ParamLimits

0xe2a0,	// (0x0003480b) cell_graphic2_pane_t2

0x0001,

0xfda8,	// (0x00036313) cell_graphic2_pane_t_ParamLimits

0xfda8,	// (0x00036313) cell_graphic2_pane_t

0xe2d9,	// (0x00034844) cell_graphic2_control_pane_t1

0xa043,	// (0x000305ae) signal_pane_g3_ParamLimits

0xa043,	// (0x000305ae) signal_pane_g3

0xa057,	// (0x000305c2) signal_pane_g4_ParamLimits

0xa057,	// (0x000305c2) signal_pane_g4

0x80a8,	// (0x0002e613) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x80a8,	// (0x0002e613) cell_ai5_widget_list_row_pane_t3

0x81ce,	// (0x0002e739) cell_ituss_key_pane_t1_ParamLimits

0x81ce,	// (0x0002e739) cell_ituss_key_pane_t1

0x1888,	// (0x00027df3) form_field_data_wide_pane_vc_t2_ParamLimits

0x1888,	// (0x00027df3) form_field_data_wide_pane_vc_t2

0x189c,	// (0x00027e07) form_field_data_wide_pane_vc_t3_ParamLimits

0x189c,	// (0x00027e07) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x00035d59) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x00035d59) form_field_data_wide_pane_vc_t

0x474d,	// (0x0002acb8) form_field_slider_wide_pane_vc_t3_ParamLimits

0x474d,	// (0x0002acb8) form_field_slider_wide_pane_vc_t3

0x482b,	// (0x0002ad96) form_field_popup_wide_pane_vc_t2_ParamLimits

0x482b,	// (0x0002ad96) form_field_popup_wide_pane_vc_t2

0x4842,	// (0x0002adad) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4842,	// (0x0002adad) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa91,	// (0x00035ffc) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x00035ffc) form_field_popup_wide_pane_vc_t

0xc4c1,	// (0x00032a2c) aid_fshwr2_btn_pane_ParamLimits

0xc4d5,	// (0x00032a40) aid_fshwr2_syb_pane_ParamLimits

0xc4e9,	// (0x00032a54) aid_fshwr2_txt_pane_ParamLimits

0xcb2f,	// (0x0003309a) fshwr2_bg_pane_ParamLimits

0xc4f9,	// (0x00032a64) fshwr2_func_candi_pane_ParamLimits

0xc519,	// (0x00032a84) fshwr2_hwr_syb_pane_ParamLimits

0xc53b,	// (0x00032aa6) fshwr2_icf_pane_ParamLimits

0xefa3,	// (0x0003550e) list_double_graphic_pane_vc_g4_ParamLimits

0xefa3,	// (0x0003550e) list_double_graphic_pane_vc_g4

0x2ab1,	// (0x0002901c) cell_ituss_key_pane_g3_ParamLimits

0x2ab1,	// (0x0002901c) cell_ituss_key_pane_g3

0x2b59,	// (0x000290c4) cell_ituss_key_t5_ParamLimits

0x2b59,	// (0x000290c4) cell_ituss_key_t5

0xe8d7,	// (0x00034e42) popup_fep_vkbss_window_ParamLimits

0x5d80,	// (0x0002c2eb) aid_cell_ai5_quarter

0xe985,	// (0x00034ef0) icf_edit_indi_pane_t1_ParamLimits

0x9a74,	// (0x0002ffdf) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9a74,	// (0x0002ffdf) aid_tch_indicator_popup_pane_cp2

0x9a87,	// (0x0002fff2) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9a87,	// (0x0002fff2) aid_tch_query_popup_data_pane_cp2

0x2e9e,	// (0x00029409) aid_tch_query_popup_pane_ParamLimits

0x2e9e,	// (0x00029409) aid_tch_query_popup_pane

0x2e9e,	// (0x00029409) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2e9e,	// (0x00029409) aid_tch_query_popup_data_pane_cp1

0x7b56,	// (0x0002e0c1) cell_fshwr2_syb_bg_pane_ParamLimits

0xc62e,	// (0x00032b99) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc641,	// (0x00032bac) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe8c8,	// (0x00034e33) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small

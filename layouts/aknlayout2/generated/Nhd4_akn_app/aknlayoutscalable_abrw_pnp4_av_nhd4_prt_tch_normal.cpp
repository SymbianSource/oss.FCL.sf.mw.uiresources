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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000ab53 };

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
0x6e76,	// (0x000119c9) Screen

0x6e8a,	// (0x000119dd) application_window_ParamLimits

0x6e8a,	// (0x000119dd) application_window

0x6ea4,	// (0x000119f7) screen_g1

0x49db,	// (0x0000f52e) area_bottom_pane_ParamLimits

0x49db,	// (0x0000f52e) area_bottom_pane

0x4a9b,	// (0x0000f5ee) area_top_pane_ParamLimits

0x4a9b,	// (0x0000f5ee) area_top_pane

0x4b39,	// (0x0000f68c) main_pane_ParamLimits

0x4b39,	// (0x0000f68c) main_pane

0x6eae,	// (0x00011a01) misc_graphics

0x8f6c,	// (0x00013abf) battery_pane_ParamLimits

0x8f6c,	// (0x00013abf) battery_pane

0x9d4a,	// (0x0001489d) bg_status_flat_pane_g8

0x9d52,	// (0x000148a5) bg_status_flat_pane_g9

0x902e,	// (0x00013b81) context_pane_ParamLimits

0x902e,	// (0x00013b81) context_pane

0x9144,	// (0x00013c97) navi_pane_ParamLimits

0x9144,	// (0x00013c97) navi_pane

0x91c8,	// (0x00013d1b) signal_pane_ParamLimits

0x91c8,	// (0x00013d1b) signal_pane

0x0008,

0xf86f,	// (0x0001a3c2) bg_status_flat_pane_g

0x9235,	// (0x00013d88) status_pane_g1_ParamLimits

0x9235,	// (0x00013d88) status_pane_g1

0x9241,	// (0x00013d94) status_pane_g2_ParamLimits

0x9241,	// (0x00013d94) status_pane_g2

0x924d,	// (0x00013da0) status_pane_g3_ParamLimits

0x924d,	// (0x00013da0) status_pane_g3

0x0004,

0xf79b,	// (0x0001a2ee) status_pane_g_ParamLimits

0xf79b,	// (0x0001a2ee) status_pane_g

0x9281,	// (0x00013dd4) title_pane_ParamLimits

0x9281,	// (0x00013dd4) title_pane

0x92be,	// (0x00013e11) uni_indicator_pane_ParamLimits

0x92be,	// (0x00013e11) uni_indicator_pane

0x8e84,	// (0x000139d7) bg_list_pane_ParamLimits

0x8e84,	// (0x000139d7) bg_list_pane

0x8ea4,	// (0x000139f7) find_pane

0x8eac,	// (0x000139ff) listscroll_app_pane_ParamLimits

0x8eac,	// (0x000139ff) listscroll_app_pane

0x8eb8,	// (0x00013a0b) listscroll_form_pane

0x53f5,	// (0x0000ff48) listscroll_gen_pane_ParamLimits

0x53f5,	// (0x0000ff48) listscroll_gen_pane

0x5409,	// (0x0000ff5c) listscroll_set_pane

0x808f,	// (0x00012be2) main_idle_act_pane

0x8b90,	// (0x000136e3) main_idle_trad_pane

0x8b90,	// (0x000136e3) main_list_empty_pane

0x8ed2,	// (0x00013a25) main_midp_pane

0x8ede,	// (0x00013a31) main_pane_g1_ParamLimits

0x8ede,	// (0x00013a31) main_pane_g1

0x541f,	// (0x0000ff72) popup_ai_message_window_ParamLimits

0x541f,	// (0x0000ff72) popup_ai_message_window

0x54c3,	// (0x00010016) popup_fep_china_uni_window_ParamLimits

0x54c3,	// (0x00010016) popup_fep_china_uni_window

0x551d,	// (0x00010070) popup_fep_japan_candidate_window_ParamLimits

0x551d,	// (0x00010070) popup_fep_japan_candidate_window

0x553b,	// (0x0001008e) popup_fep_japan_predictive_window_ParamLimits

0x553b,	// (0x0001008e) popup_fep_japan_predictive_window

0x556b,	// (0x000100be) popup_find_window

0x5578,	// (0x000100cb) popup_grid_graphic_window_ParamLimits

0x5578,	// (0x000100cb) popup_grid_graphic_window

0x55a0,	// (0x000100f3) popup_large_graphic_colour_window

0x55c6,	// (0x00010119) popup_menu_window_ParamLimits

0x55c6,	// (0x00010119) popup_menu_window

0x5780,	// (0x000102d3) popup_note_image_window

0x576c,	// (0x000102bf) popup_note_wait_window_ParamLimits

0x576c,	// (0x000102bf) popup_note_wait_window

0x576c,	// (0x000102bf) popup_note_window_ParamLimits

0x576c,	// (0x000102bf) popup_note_window

0x57d6,	// (0x00010329) popup_query_code_window_ParamLimits

0x57d6,	// (0x00010329) popup_query_code_window

0x57ea,	// (0x0001033d) popup_query_data_code_window_ParamLimits

0x57ea,	// (0x0001033d) popup_query_data_code_window

0x5805,	// (0x00010358) popup_query_data_window_ParamLimits

0x5805,	// (0x00010358) popup_query_data_window

0x581f,	// (0x00010372) popup_query_sat_info_window_ParamLimits

0x581f,	// (0x00010372) popup_query_sat_info_window

0x5858,	// (0x000103ab) popup_snote_single_graphic_window_ParamLimits

0x5858,	// (0x000103ab) popup_snote_single_graphic_window

0x5858,	// (0x000103ab) popup_snote_single_text_window_ParamLimits

0x5858,	// (0x000103ab) popup_snote_single_text_window

0x586d,	// (0x000103c0) popup_sub_window_general

0x599b,	// (0x000104ee) popup_window_general_ParamLimits

0x599b,	// (0x000104ee) popup_window_general

0x8ef4,	// (0x00013a47) power_save_pane

0x528b,	// (0x0000fdde) control_pane_g1_ParamLimits

0x528b,	// (0x0000fdde) control_pane_g1

0x52b2,	// (0x0000fe05) control_pane_g2_ParamLimits

0x52b2,	// (0x0000fe05) control_pane_g2

0x8e47,	// (0x0001399a) control_pane_g3_ParamLimits

0x8e47,	// (0x0001399a) control_pane_g3

0x0007,

0xf783,	// (0x0001a2d6) control_pane_g_ParamLimits

0xf783,	// (0x0001a2d6) control_pane_g

0x52fa,	// (0x0000fe4d) control_pane_t1_ParamLimits

0x52fa,	// (0x0000fe4d) control_pane_t1

0x5346,	// (0x0000fe99) control_pane_t2_ParamLimits

0x5346,	// (0x0000fe99) control_pane_t2

0x0002,

0xf794,	// (0x0001a2e7) control_pane_t_ParamLimits

0xf794,	// (0x0001a2e7) control_pane_t

0x8d6c,	// (0x000138bf) navi_navi_volume_pane_cp1

0x8d74,	// (0x000138c7) status_small_icon_pane

0x8d7c,	// (0x000138cf) status_small_pane_g1_ParamLimits

0x8d7c,	// (0x000138cf) status_small_pane_g1

0x8db0,	// (0x00013903) status_small_pane_g2_ParamLimits

0x8db0,	// (0x00013903) status_small_pane_g2

0x8dbc,	// (0x0001390f) status_small_pane_g3_ParamLimits

0x8dbc,	// (0x0001390f) status_small_pane_g3

0x8dc8,	// (0x0001391b) status_small_pane_g4_ParamLimits

0x8dc8,	// (0x0001391b) status_small_pane_g4

0x8dd4,	// (0x00013927) status_small_pane_g5_ParamLimits

0x8dd4,	// (0x00013927) status_small_pane_g5

0x8de2,	// (0x00013935) status_small_pane_g6_ParamLimits

0x8de2,	// (0x00013935) status_small_pane_g6

0x0007,

0xf772,	// (0x0001a2c5) status_small_pane_g_ParamLimits

0xf772,	// (0x0001a2c5) status_small_pane_g

0x8e11,	// (0x00013964) status_small_pane_t1

0x8e33,	// (0x00013986) status_small_wait_pane_ParamLimits

0x8e33,	// (0x00013986) status_small_wait_pane

0x8583,	// (0x000130d6) aid_levels_signal_ParamLimits

0x8583,	// (0x000130d6) aid_levels_signal

0x8595,	// (0x000130e8) signal_pane_g1_ParamLimits

0x8595,	// (0x000130e8) signal_pane_g1

0x85aa,	// (0x000130fd) signal_pane_g2_ParamLimits

0x85aa,	// (0x000130fd) signal_pane_g2

0x0003,

0xf703,	// (0x0001a256) signal_pane_g_ParamLimits

0xf703,	// (0x0001a256) signal_pane_g

0x85e4,	// (0x00013137) context_pane_g1

0x6eb8,	// (0x00011a0b) title_pane_g1

0x6eee,	// (0x00011a41) title_pane_t1

0x6f56,	// (0x00011aa9) title_pane_t2

0x6f7c,	// (0x00011acf) title_pane_t3

0x0002,

0xf557,	// (0x0001a0aa) title_pane_t

0x92d6,	// (0x00013e29) aid_levels_battery_ParamLimits

0x92d6,	// (0x00013e29) aid_levels_battery

0x92ea,	// (0x00013e3d) battery_pane_g1_ParamLimits

0x92ea,	// (0x00013e3d) battery_pane_g1

0x9300,	// (0x00013e53) battery_pane_g2_ParamLimits

0x9300,	// (0x00013e53) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001a2f9) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001a2f9) battery_pane_g

0xa67e,	// (0x000151d1) uni_indicator_pane_g1

0xa694,	// (0x000151e7) uni_indicator_pane_g2

0xa6aa,	// (0x000151fd) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0001a46a) uni_indicator_pane_g

0x8a0e,	// (0x00013561) navi_icon_pane_ParamLimits

0x8a0e,	// (0x00013561) navi_icon_pane

0x894c,	// (0x0001349f) navi_midp_pane

0x8a2a,	// (0x0001357d) navi_navi_pane

0x8a34,	// (0x00013587) navi_text_pane_ParamLimits

0x8a34,	// (0x00013587) navi_text_pane

0x6ea4,	// (0x000119f7) status_small_wait_pane_g1

0x73b9,	// (0x00011f0c) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0001a465) status_small_wait_pane_g

0xa3a5,	// (0x00014ef8) navi_navi_icon_text_pane

0xa3ad,	// (0x00014f00) navi_navi_pane_g1_ParamLimits

0xa3ad,	// (0x00014f00) navi_navi_pane_g1

0xa3bf,	// (0x00014f12) navi_navi_pane_g2_ParamLimits

0xa3bf,	// (0x00014f12) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0001a433) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0001a433) navi_navi_pane_g

0xa3d1,	// (0x00014f24) navi_navi_tabs_pane

0xa3da,	// (0x00014f2d) navi_navi_text_pane

0xa3a5,	// (0x00014ef8) navi_navi_volume_pane

0xa381,	// (0x00014ed4) navi_text_pane_t1

0xa375,	// (0x00014ec8) navi_icon_pane_g1

0xa2c8,	// (0x00014e1b) navi_navi_text_pane_t1

0x5ca9,	// (0x000107fc) navi_navi_volume_pane_g1

0x5cb1,	// (0x00010804) volume_small_pane

0xa22e,	// (0x00014d81) navi_navi_icon_text_pane_g1

0xa236,	// (0x00014d89) navi_navi_icon_text_pane_t1

0x8a2a,	// (0x0001357d) navi_tabs_2_long_pane

0x8a2a,	// (0x0001357d) navi_tabs_2_pane

0x8a2a,	// (0x0001357d) navi_tabs_3_long_pane

0x8a2a,	// (0x0001357d) navi_tabs_3_pane

0x8a2a,	// (0x0001357d) navi_tabs_4_pane

0x5c89,	// (0x000107dc) tabs_2_active_pane_ParamLimits

0x5c89,	// (0x000107dc) tabs_2_active_pane

0x5c99,	// (0x000107ec) tabs_2_passive_pane_ParamLimits

0x5c99,	// (0x000107ec) tabs_2_passive_pane

0x5c57,	// (0x000107aa) tabs_3_active_pane_ParamLimits

0x5c57,	// (0x000107aa) tabs_3_active_pane

0x5c67,	// (0x000107ba) tabs_3_passive_pane_ParamLimits

0x5c67,	// (0x000107ba) tabs_3_passive_pane

0x5c78,	// (0x000107cb) tabs_3_passive_pane_cp_ParamLimits

0x5c78,	// (0x000107cb) tabs_3_passive_pane_cp

0x5c13,	// (0x00010766) tabs_4_active_pane_ParamLimits

0x5c13,	// (0x00010766) tabs_4_active_pane

0x5c24,	// (0x00010777) tabs_4_passive_pane_ParamLimits

0x5c24,	// (0x00010777) tabs_4_passive_pane

0x5c35,	// (0x00010788) tabs_4_passive_pane_cp_ParamLimits

0x5c35,	// (0x00010788) tabs_4_passive_pane_cp

0x5c46,	// (0x00010799) tabs_4_passive_pane_cp2_ParamLimits

0x5c46,	// (0x00010799) tabs_4_passive_pane_cp2

0x5bef,	// (0x00010742) tabs_2_long_active_pane_ParamLimits

0x5bef,	// (0x00010742) tabs_2_long_active_pane

0x5c01,	// (0x00010754) tabs_2_long_passive_pane_ParamLimits

0x5c01,	// (0x00010754) tabs_2_long_passive_pane

0x5bb6,	// (0x00010709) tabs_3_long_active_pane_ParamLimits

0x5bb6,	// (0x00010709) tabs_3_long_active_pane

0x5bc9,	// (0x0001071c) tabs_3_long_passive_pane_ParamLimits

0x5bc9,	// (0x0001071c) tabs_3_long_passive_pane

0x5bdc,	// (0x0001072f) tabs_3_long_passive_pane_cp_ParamLimits

0x5bdc,	// (0x0001072f) tabs_3_long_passive_pane_cp

0x5b5c,	// (0x000106af) volume_small_pane_g1

0x5b65,	// (0x000106b8) volume_small_pane_g2

0x5b6e,	// (0x000106c1) volume_small_pane_g3

0x5b77,	// (0x000106ca) volume_small_pane_g4

0x5b80,	// (0x000106d3) volume_small_pane_g5

0x5b89,	// (0x000106dc) volume_small_pane_g6

0x5b92,	// (0x000106e5) volume_small_pane_g7

0x5b9b,	// (0x000106ee) volume_small_pane_g8

0x5ba4,	// (0x000106f7) volume_small_pane_g9

0x5bad,	// (0x00010700) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x0001a3ff) volume_small_pane_g

0x6f8e,	// (0x00011ae1) bg_active_tab_pane_cp2_ParamLimits

0x6f8e,	// (0x00011ae1) bg_active_tab_pane_cp2

0x6f9c,	// (0x00011aef) tabs_3_active_pane_g1

0x6fa4,	// (0x00011af7) tabs_3_active_pane_t1

0x6f8e,	// (0x00011ae1) bg_passive_tab_pane_cp2_ParamLimits

0x6f8e,	// (0x00011ae1) bg_passive_tab_pane_cp2

0x6f9c,	// (0x00011aef) tabs_3_passive_pane_g1

0x6fa4,	// (0x00011af7) tabs_3_passive_pane_t1

0x6f8e,	// (0x00011ae1) bg_active_tab_pane_cp3_ParamLimits

0x6f8e,	// (0x00011ae1) bg_active_tab_pane_cp3

0x6fb6,	// (0x00011b09) tabs_4_active_pane_g1

0x6fbe,	// (0x00011b11) tabs_4_active_pane_t1

0x6f8e,	// (0x00011ae1) bg_passive_tab_pane_cp3_ParamLimits

0x6f8e,	// (0x00011ae1) bg_passive_tab_pane_cp3

0x6fb6,	// (0x00011b09) tabs_4_1_passive_pane_g1

0x6fbe,	// (0x00011b11) tabs_4_1_passive_pane_t1

0x8ed2,	// (0x00013a25) list_highlight_pane_cp2

0xa900,	// (0x00015453) list_set_pane_ParamLimits

0xa900,	// (0x00015453) list_set_pane

0xa9a2,	// (0x000154f5) main_pane_set_t1_ParamLimits

0xa9a2,	// (0x000154f5) main_pane_set_t1

0xa9c2,	// (0x00015515) main_pane_set_t2_ParamLimits

0xa9c2,	// (0x00015515) main_pane_set_t2

0xa9d6,	// (0x00015529) main_pane_set_t3_ParamLimits

0xa9d6,	// (0x00015529) main_pane_set_t3

0xa9e8,	// (0x0001553b) main_pane_set_t4_ParamLimits

0xa9e8,	// (0x0001553b) main_pane_set_t4

0x0003,

0xf97c,	// (0x0001a4cf) main_pane_set_t_ParamLimits

0xf97c,	// (0x0001a4cf) main_pane_set_t

0xa9fa,	// (0x0001554d) setting_code_pane

0xaa04,	// (0x00015557) setting_slider_graphic_pane

0xaa04,	// (0x00015557) setting_slider_pane

0xaa04,	// (0x00015557) setting_text_pane

0xaa04,	// (0x00015557) setting_volume_pane

0x4d7a,	// (0x0000f8cd) volume_set_pane

0x6f8e,	// (0x00011ae1) bg_set_opt_pane_cp

0x4d82,	// (0x0000f8d5) setting_slider_pane_t1

0x4d9b,	// (0x0000f8ee) setting_slider_pane_t2

0x4db5,	// (0x0000f908) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001a0b1) setting_slider_pane_t

0x4dcd,	// (0x0000f920) slider_set_pane

0x6eae,	// (0x00011a01) bg_set_opt_pane_cp2

0x6fd0,	// (0x00011b23) setting_slider_graphic_pane_g1

0x4de3,	// (0x0000f936) setting_slider_graphic_pane_t1

0x4df3,	// (0x0000f946) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001a0b8) setting_slider_graphic_pane_t

0x4e03,	// (0x0000f956) slider_set_pane_cp

0x6eae,	// (0x00011a01) input_focus_pane_cp1

0xa8bf,	// (0x00015412) list_set_text_pane

0x6ea4,	// (0x000119f7) setting_text_pane_g1

0x6eae,	// (0x00011a01) input_focus_pane_cp2

0x6ea4,	// (0x000119f7) setting_code_pane_g1

0x6fd9,	// (0x00011b2c) setting_code_pane_t1

0x6fe7,	// (0x00011b3a) set_text_pane_t1_ParamLimits

0x6fe7,	// (0x00011b3a) set_text_pane_t1

0x7e7a,	// (0x000129cd) set_opt_bg_pane_g1

0x7e82,	// (0x000129d5) set_opt_bg_pane_g2

0xa89f,	// (0x000153f2) set_opt_bg_pane_g3

0x7e92,	// (0x000129e5) set_opt_bg_pane_g4

0x7e9a,	// (0x000129ed) set_opt_bg_pane_g5

0x7ea2,	// (0x000129f5) set_opt_bg_pane_g6

0xa8a7,	// (0x000153fa) set_opt_bg_pane_g7

0xa8af,	// (0x00015402) set_opt_bg_pane_g8

0xa8b7,	// (0x0001540a) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0001a4bc) set_opt_bg_pane_g

0xa892,	// (0x000153e5) slider_set_pane_g1

0x5d1e,	// (0x00010871) slider_set_pane_g2

0x0006,

0xf95a,	// (0x0001a4ad) slider_set_pane_g

0x5cba,	// (0x0001080d) volume_set_pane_g1

0x5cc2,	// (0x00010815) volume_set_pane_g2

0x5cca,	// (0x0001081d) volume_set_pane_g3

0x5cd2,	// (0x00010825) volume_set_pane_g4

0x5cda,	// (0x0001082d) volume_set_pane_g5

0x5ce2,	// (0x00010835) volume_set_pane_g6

0x5cea,	// (0x0001083d) volume_set_pane_g7

0x5cf2,	// (0x00010845) volume_set_pane_g8

0x5cfa,	// (0x0001084d) volume_set_pane_g9

0x5d02,	// (0x00010855) volume_set_pane_g10

0x0009,

0xf932,	// (0x0001a485) volume_set_pane_g

0x7001,	// (0x00011b54) indicator_pane_ParamLimits

0x7001,	// (0x00011b54) indicator_pane

0x700d,	// (0x00011b60) main_idle_pane_g2_ParamLimits

0x700d,	// (0x00011b60) main_idle_pane_g2

0x7035,	// (0x00011b88) main_pane_idle_g1_ParamLimits

0x7035,	// (0x00011b88) main_pane_idle_g1

0x7042,	// (0x00011b95) popup_clock_digital_analogue_window_ParamLimits

0x7042,	// (0x00011b95) popup_clock_digital_analogue_window

0x7059,	// (0x00011bac) soft_indicator_pane_ParamLimits

0x7059,	// (0x00011bac) soft_indicator_pane

0x7065,	// (0x00011bb8) wallpaper_pane_ParamLimits

0x7065,	// (0x00011bb8) wallpaper_pane

0x6ea4,	// (0x000119f7) wallpaper_pane_g1

0x7079,	// (0x00011bcc) indicator_pane_g1_ParamLimits

0x7079,	// (0x00011bcc) indicator_pane_g1

0xad9f,	// (0x000158f2) navi_navi_icon_text_pane_srt_g1

0x7094,	// (0x00011be7) soft_indicator_pane_t1

0x70ae,	// (0x00011c01) aid_ps_area_pane

0x70bf,	// (0x00011c12) aid_ps_clock_pane

0x70cd,	// (0x00011c20) aid_ps_indicator_pane

0x70d9,	// (0x00011c2c) indicator_ps_pane_ParamLimits

0x70d9,	// (0x00011c2c) indicator_ps_pane

0x70e8,	// (0x00011c3b) power_save_pane_g1_ParamLimits

0x70e8,	// (0x00011c3b) power_save_pane_g1

0x70f4,	// (0x00011c47) power_save_pane_g2_ParamLimits

0x70f4,	// (0x00011c47) power_save_pane_g2

0x498f,	// (0x0000f4e2) aid_navinavi_width_pane

0x70ae,	// (0x00011c01) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001a0bd) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001a0bd) power_save_pane_g

0x7102,	// (0x00011c55) power_save_pane_t1_ParamLimits

0x7102,	// (0x00011c55) power_save_pane_t1

0x70bf,	// (0x00011c12) aid_ps_clock_pane_ParamLimits

0x70cd,	// (0x00011c20) aid_ps_indicator_pane_ParamLimits

0x7114,	// (0x00011c67) power_save_pane_t4_ParamLimits

0x7114,	// (0x00011c67) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001a0c2) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001a0c2) power_save_pane_t

0x713e,	// (0x00011c91) power_save_t3_ParamLimits

0x713e,	// (0x00011c91) power_save_t3

0x7129,	// (0x00011c7c) power_save_t2_ParamLimits

0x7129,	// (0x00011c7c) power_save_t2

0x7153,	// (0x00011ca6) indicator_ps_pane_g1

0x715c,	// (0x00011caf) ai_gene_pane_ParamLimits

0x715c,	// (0x00011caf) ai_gene_pane

0x7168,	// (0x00011cbb) ai_links_pane_ParamLimits

0x7168,	// (0x00011cbb) ai_links_pane

0x7174,	// (0x00011cc7) indicator_pane_cp1_ParamLimits

0x7174,	// (0x00011cc7) indicator_pane_cp1

0x7180,	// (0x00011cd3) main_pane_idle_g1_cp_ParamLimits

0x7180,	// (0x00011cd3) main_pane_idle_g1_cp

0x718c,	// (0x00011cdf) popup_ai_links_title_window

0x7195,	// (0x00011ce8) soft_indicator_pane_cp1_ParamLimits

0x7195,	// (0x00011ce8) soft_indicator_pane_cp1

0xa66c,	// (0x000151bf) ai_links_pane_g1

0xa675,	// (0x000151c8) grid_ai_links_pane

0xa64f,	// (0x000151a2) ai_gene_pane_1

0xa65a,	// (0x000151ad) ai_gene_pane_2

0xa663,	// (0x000151b6) list_highlight_pane_cp4

0xa633,	// (0x00015186) cell_ai_link_pane_ParamLimits

0xa633,	// (0x00015186) cell_ai_link_pane

0xa62b,	// (0x0001517e) cell_ai_link_pane_g1

0x73b9,	// (0x00011f0c) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x0001a460) cell_ai_link_pane_g

0x6eae,	// (0x00011a01) grid_highlight_cp2

0x6eae,	// (0x00011a01) bg_popup_sub_pane_cp1

0x71af,	// (0x00011d02) popup_ai_links_title_window_t1

0xa57b,	// (0x000150ce) ai_gene_pane_1_g1_ParamLimits

0xa57b,	// (0x000150ce) ai_gene_pane_1_g1

0xa587,	// (0x000150da) ai_gene_pane_1_g2_ParamLimits

0xa587,	// (0x000150da) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0001a456) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0001a456) ai_gene_pane_1_g

0xa594,	// (0x000150e7) ai_gene_pane_1_t1_ParamLimits

0xa594,	// (0x000150e7) ai_gene_pane_1_t1

0xa5c8,	// (0x0001511b) grid_ai_soft_ind_pane

0xa566,	// (0x000150b9) ai_gene_pane_2_t1_ParamLimits

0xa566,	// (0x000150b9) ai_gene_pane_2_t1

0x71be,	// (0x00011d11) main_pane_empty_t1_ParamLimits

0x71be,	// (0x00011d11) main_pane_empty_t1

0x71d6,	// (0x00011d29) main_pane_empty_t2_ParamLimits

0x71d6,	// (0x00011d29) main_pane_empty_t2

0x71eb,	// (0x00011d3e) main_pane_empty_t3_ParamLimits

0x71eb,	// (0x00011d3e) main_pane_empty_t3

0x71fd,	// (0x00011d50) main_pane_empty_t4_ParamLimits

0x71fd,	// (0x00011d50) main_pane_empty_t4

0x720f,	// (0x00011d62) main_pane_empty_t5_ParamLimits

0x720f,	// (0x00011d62) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001a0c7) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001a0c7) main_pane_empty_t

0x7f59,	// (0x00012aac) bg_popup_window_pane_ParamLimits

0x7f59,	// (0x00012aac) bg_popup_window_pane

0xa2d6,	// (0x00014e29) find_popup_pane_cp2_ParamLimits

0xa2d6,	// (0x00014e29) find_popup_pane_cp2

0xa2e2,	// (0x00014e35) heading_pane_ParamLimits

0xa2e2,	// (0x00014e35) heading_pane

0x6eae,	// (0x00011a01) bg_popup_sub_pane

0xa250,	// (0x00014da3) bg_popup_window_pane_g1_ParamLimits

0xa250,	// (0x00014da3) bg_popup_window_pane_g1

0xa25c,	// (0x00014daf) bg_popup_window_pane_g2_ParamLimits

0xa25c,	// (0x00014daf) bg_popup_window_pane_g2

0xa268,	// (0x00014dbb) bg_popup_window_pane_g3_ParamLimits

0xa268,	// (0x00014dbb) bg_popup_window_pane_g3

0xa274,	// (0x00014dc7) bg_popup_window_pane_g4_ParamLimits

0xa274,	// (0x00014dc7) bg_popup_window_pane_g4

0xa280,	// (0x00014dd3) bg_popup_window_pane_g5_ParamLimits

0xa280,	// (0x00014dd3) bg_popup_window_pane_g5

0xa28c,	// (0x00014ddf) bg_popup_window_pane_g6_ParamLimits

0xa28c,	// (0x00014ddf) bg_popup_window_pane_g6

0xa298,	// (0x00014deb) bg_popup_window_pane_g7_ParamLimits

0xa298,	// (0x00014deb) bg_popup_window_pane_g7

0xa2a4,	// (0x00014df7) bg_popup_window_pane_g8_ParamLimits

0xa2a4,	// (0x00014df7) bg_popup_window_pane_g8

0xa2b0,	// (0x00014e03) bg_popup_window_pane_g9_ParamLimits

0xa2b0,	// (0x00014e03) bg_popup_window_pane_g9

0xa2bc,	// (0x00014e0f) bg_popup_window_pane_g10_ParamLimits

0xa2bc,	// (0x00014e0f) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x0001a41e) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x0001a41e) bg_popup_window_pane_g

0xa1e5,	// (0x00014d38) bg_popup_heading_pane_ParamLimits

0xa1e5,	// (0x00014d38) bg_popup_heading_pane

0x5da6,	// (0x000108f9) tabs_4_passive_pane_cp_srt_ParamLimits

0x5da6,	// (0x000108f9) tabs_4_passive_pane_cp_srt

0x5db8,	// (0x0001090b) tabs_4_passive_pane_srt_ParamLimits

0xa1f9,	// (0x00014d4c) heading_pane_g2

0x5db8,	// (0x0001090b) tabs_4_passive_pane_srt

0x8ed2,	// (0x00013a25) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8ed2,	// (0x00013a25) bg_passive_tab_pane_cp3_srt

0xa201,	// (0x00014d54) heading_pane_t1_ParamLimits

0xa201,	// (0x00014d54) heading_pane_t1

0xa218,	// (0x00014d6b) heading_pane_t2_ParamLimits

0xa218,	// (0x00014d6b) heading_pane_t2

0x0001,

0xf8c6,	// (0x0001a419) heading_pane_t_ParamLimits

0xf8c6,	// (0x0001a419) heading_pane_t

0x9d12,	// (0x00014865) bg_popup_heading_pane_g1

0x9dc1,	// (0x00014914) bg_popup_heading_pane_g2

0x9dcb,	// (0x0001491e) bg_popup_heading_pane_g3

0x9dd5,	// (0x00014928) bg_popup_heading_pane_g4

0x9ddf,	// (0x00014932) bg_popup_heading_pane_g5

0x9de9,	// (0x0001493c) bg_popup_heading_pane_g6

0x9df1,	// (0x00014944) bg_popup_heading_pane_g7

0x9df9,	// (0x0001494c) bg_popup_heading_pane_g8

0x9e03,	// (0x00014956) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0001a3d5) bg_popup_heading_pane_g

0x93ee,	// (0x00013f41) bg_popup_sub_pane_g1

0x93fe,	// (0x00013f51) bg_popup_sub_pane_g2

0x93f6,	// (0x00013f49) bg_popup_sub_pane_g3

0x940e,	// (0x00013f61) bg_popup_sub_pane_g4

0x9406,	// (0x00013f59) bg_popup_sub_pane_g5

0x9416,	// (0x00013f69) bg_popup_sub_pane_g6

0x941e,	// (0x00013f71) bg_popup_sub_pane_g7

0x942e,	// (0x00013f81) bg_popup_sub_pane_g8

0x9426,	// (0x00013f79) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x0001a3af) bg_popup_sub_pane_g

0x7223,	// (0x00011d76) bg_popup_window_pane_cp5_ParamLimits

0x7223,	// (0x00011d76) bg_popup_window_pane_cp5

0x723f,	// (0x00011d92) popup_note_window_g1_ParamLimits

0x723f,	// (0x00011d92) popup_note_window_g1

0x724b,	// (0x00011d9e) popup_note_window_t1_ParamLimits

0x724b,	// (0x00011d9e) popup_note_window_t1

0x725d,	// (0x00011db0) popup_note_window_t2_ParamLimits

0x725d,	// (0x00011db0) popup_note_window_t2

0x726f,	// (0x00011dc2) popup_note_window_t3_ParamLimits

0x726f,	// (0x00011dc2) popup_note_window_t3

0x7281,	// (0x00011dd4) popup_note_window_t4_ParamLimits

0x7281,	// (0x00011dd4) popup_note_window_t4

0x72a9,	// (0x00011dfc) popup_note_window_t5_ParamLimits

0x72a9,	// (0x00011dfc) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001a0d2) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001a0d2) popup_note_window_t

0x72cd,	// (0x00011e20) bg_popup_window_pane_cp6_ParamLimits

0x72cd,	// (0x00011e20) bg_popup_window_pane_cp6

0x9c86,	// (0x000147d9) popup_note_image_window_g1_ParamLimits

0x9c86,	// (0x000147d9) popup_note_image_window_g1

0x9c92,	// (0x000147e5) popup_note_image_window_g2_ParamLimits

0x9c92,	// (0x000147e5) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0001a3a3) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0001a3a3) popup_note_image_window_g

0x9cab,	// (0x000147fe) popup_note_image_window_t1_ParamLimits

0x9cab,	// (0x000147fe) popup_note_image_window_t1

0x9cc4,	// (0x00014817) popup_note_image_window_t2_ParamLimits

0x9cc4,	// (0x00014817) popup_note_image_window_t2

0x9cdd,	// (0x00014830) popup_note_image_window_t3_ParamLimits

0x9cdd,	// (0x00014830) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0001a3a8) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0001a3a8) popup_note_image_window_t

0x9b47,	// (0x0001469a) bg_popup_window_pane_cp7_ParamLimits

0x9b47,	// (0x0001469a) bg_popup_window_pane_cp7

0x9b77,	// (0x000146ca) popup_note_wait_window_g1_ParamLimits

0x9b77,	// (0x000146ca) popup_note_wait_window_g1

0x9b83,	// (0x000146d6) popup_note_wait_window_g2_ParamLimits

0x9b83,	// (0x000146d6) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0001a391) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0001a391) popup_note_wait_window_g

0x9b9b,	// (0x000146ee) popup_note_wait_window_t1_ParamLimits

0x9b9b,	// (0x000146ee) popup_note_wait_window_t1

0x9bc2,	// (0x00014715) popup_note_wait_window_t2_ParamLimits

0x9bc2,	// (0x00014715) popup_note_wait_window_t2

0x9bdf,	// (0x00014732) popup_note_wait_window_t3_ParamLimits

0x9bdf,	// (0x00014732) popup_note_wait_window_t3

0x9bf2,	// (0x00014745) popup_note_wait_window_t4_ParamLimits

0x9bf2,	// (0x00014745) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0001a398) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0001a398) popup_note_wait_window_t

0x9c17,	// (0x0001476a) wait_bar_pane_ParamLimits

0x9c17,	// (0x0001476a) wait_bar_pane

0x6eae,	// (0x00011a01) wait_anim_pane

0x6eae,	// (0x00011a01) wait_border_pane

0x6ea4,	// (0x000119f7) wait_anim_pane_g1

0x6ea4,	// (0x000119f7) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001a251) wait_anim_pane_g

0x9aeb,	// (0x0001463e) wait_border_pane_g1

0x9af6,	// (0x00014649) wait_border_pane_g2

0x9aff,	// (0x00014652) wait_border_pane_g3

0x0002,

0xf837,	// (0x0001a38a) wait_border_pane_g

0x995b,	// (0x000144ae) bg_popup_window_pane_cp16_ParamLimits

0x995b,	// (0x000144ae) bg_popup_window_pane_cp16

0x9a5b,	// (0x000145ae) indicator_popup_pane_cp4_ParamLimits

0x9a5b,	// (0x000145ae) indicator_popup_pane_cp4

0x9a6f,	// (0x000145c2) popup_query_data_window_t1_ParamLimits

0x9a6f,	// (0x000145c2) popup_query_data_window_t1

0x9a81,	// (0x000145d4) popup_query_data_window_t2_ParamLimits

0x9a81,	// (0x000145d4) popup_query_data_window_t2

0x9a9a,	// (0x000145ed) popup_query_data_window_t3_ParamLimits

0x9a9a,	// (0x000145ed) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0001a383) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0001a383) popup_query_data_window_t

0x9ab4,	// (0x00014607) query_popup_data_pane_ParamLimits

0x9ab4,	// (0x00014607) query_popup_data_pane

0x9ac8,	// (0x0001461b) query_popup_data_pane_cp1_ParamLimits

0x9ac8,	// (0x0001461b) query_popup_data_pane_cp1

0x995b,	// (0x000144ae) bg_popup_window_pane_cp10_ParamLimits

0x995b,	// (0x000144ae) bg_popup_window_pane_cp10

0x998d,	// (0x000144e0) indicator_popup_pane_ParamLimits

0x998d,	// (0x000144e0) indicator_popup_pane

0x99af,	// (0x00014502) popup_query_code_window_t1_ParamLimits

0x99af,	// (0x00014502) popup_query_code_window_t1

0x99c9,	// (0x0001451c) popup_query_code_window_t2_ParamLimits

0x99c9,	// (0x0001451c) popup_query_code_window_t2

0x9a12,	// (0x00014565) popup_query_code_window_t3_ParamLimits

0x9a12,	// (0x00014565) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0001a37c) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0001a37c) popup_query_code_window_t

0x9a41,	// (0x00014594) query_popup_pane_ParamLimits

0x9a41,	// (0x00014594) query_popup_pane

0x72cd,	// (0x00011e20) bg_popup_window_pane_cp15_ParamLimits

0x72cd,	// (0x00011e20) bg_popup_window_pane_cp15

0x72eb,	// (0x00011e3e) indicator_popup_pane_cp1_ParamLimits

0x72eb,	// (0x00011e3e) indicator_popup_pane_cp1

0x72fe,	// (0x00011e51) indicator_popup_pane_cp2_ParamLimits

0x72fe,	// (0x00011e51) indicator_popup_pane_cp2

0x7311,	// (0x00011e64) popup_query_data_code_window_g1_ParamLimits

0x7311,	// (0x00011e64) popup_query_data_code_window_g1

0x7324,	// (0x00011e77) popup_query_data_code_window_t1_ParamLimits

0x7324,	// (0x00011e77) popup_query_data_code_window_t1

0x7336,	// (0x00011e89) popup_query_data_code_window_t2_ParamLimits

0x7336,	// (0x00011e89) popup_query_data_code_window_t2

0x7348,	// (0x00011e9b) popup_query_data_code_window_t3_ParamLimits

0x7348,	// (0x00011e9b) popup_query_data_code_window_t3

0x735e,	// (0x00011eb1) popup_query_data_code_window_t4_ParamLimits

0x735e,	// (0x00011eb1) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001a0dd) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001a0dd) popup_query_data_code_window_t

0x5a6f,	// (0x000105c2) list_single_midp_graphic_pane_g3

0x7376,	// (0x00011ec9) query_popup_data_pane_cp2_ParamLimits

0x7389,	// (0x00011edc) query_popup_pane_cp2_ParamLimits

0x7389,	// (0x00011edc) query_popup_pane_cp2

0x6eae,	// (0x00011a01) bg_popup_window_pane_cp11

0x9953,	// (0x000144a6) heading_pane_cp5

0x7474,	// (0x00011fc7) listscroll_popup_info_pane

0x6eae,	// (0x00011a01) input_focus_pane_cp3

0x739c,	// (0x00011eef) query_popup_pane_t1

0x73aa,	// (0x00011efd) list_popup_info_pane_ParamLimits

0x73aa,	// (0x00011efd) list_popup_info_pane

0x73b9,	// (0x00011f0c) listscroll_popup_info_pane_g1

0x73c1,	// (0x00011f14) scroll_pane_cp7

0x73cb,	// (0x00011f1e) popup_info_list_pane_t1_ParamLimits

0x73cb,	// (0x00011f1e) popup_info_list_pane_t1

0x73e5,	// (0x00011f38) popup_info_list_pane_t2_ParamLimits

0x73e5,	// (0x00011f38) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001a0e6) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001a0e6) popup_info_list_pane_t

0x6eae,	// (0x00011a01) bg_popup_window_pane_cp12

0xadb9,	// (0x0001590c) find_popup_pane

0x6f8e,	// (0x00011ae1) bg_popup_window_pane_cp3

0x73ff,	// (0x00011f52) heading_pane_cp3

0x740b,	// (0x00011f5e) listscroll_popup_graphic_pane

0x6eae,	// (0x00011a01) bg_popup_window_pane_cp4

0x746a,	// (0x00011fbd) heading_pane_cp4

0x7474,	// (0x00011fc7) listscroll_popup_colour_pane

0x747c,	// (0x00011fcf) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x747c,	// (0x00011fcf) cell_large_graphic_colour_none_popup_pane

0x7490,	// (0x00011fe3) grid_large_graphic_colour_popup_pane_ParamLimits

0x7490,	// (0x00011fe3) grid_large_graphic_colour_popup_pane

0x74b8,	// (0x0001200b) listscroll_popup_colour_pane_g1_ParamLimits

0x74b8,	// (0x0001200b) listscroll_popup_colour_pane_g1

0x74cf,	// (0x00012022) listscroll_popup_colour_pane_g2_ParamLimits

0x74cf,	// (0x00012022) listscroll_popup_colour_pane_g2

0x74e6,	// (0x00012039) listscroll_popup_colour_pane_g3_ParamLimits

0x74e6,	// (0x00012039) listscroll_popup_colour_pane_g3

0x74f6,	// (0x00012049) listscroll_popup_colour_pane_g4_ParamLimits

0x74f6,	// (0x00012049) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001a0eb) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001a0eb) listscroll_popup_colour_pane_g

0x7505,	// (0x00012058) scroll_pane_cp6_ParamLimits

0x7505,	// (0x00012058) scroll_pane_cp6

0x7517,	// (0x0001206a) cell_large_graphic_colour_popup_pane_ParamLimits

0x7517,	// (0x0001206a) cell_large_graphic_colour_popup_pane

0x7536,	// (0x00012089) cell_large_graphic_colour_none_popup_pane_t1

0x6eae,	// (0x00011a01) grid_highlight_pane_cp5

0x7545,	// (0x00012098) cell_large_graphic_colour_popup_pane_g1

0x754d,	// (0x000120a0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001a0f4) cell_large_graphic_colour_popup_pane_g

0x7555,	// (0x000120a8) cell_large_graphic_colour_popup_pane_g2_copy1

0x755e,	// (0x000120b1) grid_highlight_pane_cp4

0x7566,	// (0x000120b9) bg_popup_window_pane_cp8_ParamLimits

0x7566,	// (0x000120b9) bg_popup_window_pane_cp8

0x7581,	// (0x000120d4) popup_snote_single_text_window_g1_ParamLimits

0x7581,	// (0x000120d4) popup_snote_single_text_window_g1

0x7593,	// (0x000120e6) popup_snote_single_text_window_t1_ParamLimits

0x7593,	// (0x000120e6) popup_snote_single_text_window_t1

0x75a6,	// (0x000120f9) popup_snote_single_text_window_t2_ParamLimits

0x75a6,	// (0x000120f9) popup_snote_single_text_window_t2

0x75b9,	// (0x0001210c) popup_snote_single_text_window_t3_ParamLimits

0x75b9,	// (0x0001210c) popup_snote_single_text_window_t3

0x75f2,	// (0x00012145) popup_snote_single_text_window_t4_ParamLimits

0x75f2,	// (0x00012145) popup_snote_single_text_window_t4

0x7626,	// (0x00012179) popup_snote_single_text_window_t5_ParamLimits

0x7626,	// (0x00012179) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001a0f9) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001a0f9) popup_snote_single_text_window_t

0x7655,	// (0x000121a8) bg_popup_window_pane_cp9_ParamLimits

0x7655,	// (0x000121a8) bg_popup_window_pane_cp9

0x7581,	// (0x000120d4) popup_snote_single_graphic_window_g1_ParamLimits

0x7581,	// (0x000120d4) popup_snote_single_graphic_window_g1

0x7663,	// (0x000121b6) popup_snote_single_graphic_window_g2_ParamLimits

0x7663,	// (0x000121b6) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001a104) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001a104) popup_snote_single_graphic_window_g

0x766f,	// (0x000121c2) popup_snote_single_graphic_window_t1_ParamLimits

0x766f,	// (0x000121c2) popup_snote_single_graphic_window_t1

0x7682,	// (0x000121d5) popup_snote_single_graphic_window_t2_ParamLimits

0x7682,	// (0x000121d5) popup_snote_single_graphic_window_t2

0x7695,	// (0x000121e8) popup_snote_single_graphic_window_t3_ParamLimits

0x7695,	// (0x000121e8) popup_snote_single_graphic_window_t3

0x76ce,	// (0x00012221) popup_snote_single_graphic_window_t4_ParamLimits

0x76ce,	// (0x00012221) popup_snote_single_graphic_window_t4

0x7702,	// (0x00012255) popup_snote_single_graphic_window_t5_ParamLimits

0x7702,	// (0x00012255) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001a109) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001a109) popup_snote_single_graphic_window_t

0xacfd,	// (0x00015850) grid_graphic_popup_pane_ParamLimits

0xacfd,	// (0x00015850) grid_graphic_popup_pane

0xad25,	// (0x00015878) listscroll_popup_graphic_pane_g1_ParamLimits

0xad25,	// (0x00015878) listscroll_popup_graphic_pane_g1

0xad39,	// (0x0001588c) listscroll_popup_graphic_pane_g2_ParamLimits

0xad39,	// (0x0001588c) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0001a4f9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0001a4f9) listscroll_popup_graphic_pane_g

0xad4d,	// (0x000158a0) scroll_pane_cp5

0xac9d,	// (0x000157f0) cell_graphic_popup_pane_ParamLimits

0xac9d,	// (0x000157f0) cell_graphic_popup_pane

0xac7e,	// (0x000157d1) cell_graphic_popup_pane_g1

0xac86,	// (0x000157d9) cell_graphic_popup_pane_g2

0x7555,	// (0x000120a8) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0001a4f2) cell_graphic_popup_pane_g

0xac8f,	// (0x000157e2) cell_graphic_popup_pane_t2

0x755e,	// (0x000120b1) grid_highlight_pane_cp3

0x7743,	// (0x00012296) list_gen_pane_ParamLimits

0x7743,	// (0x00012296) list_gen_pane

0x7775,	// (0x000122c8) scroll_pane

0xabe0,	// (0x00015733) bg_list_pane_g1_ParamLimits

0xabe0,	// (0x00015733) bg_list_pane_g1

0xabfb,	// (0x0001574e) bg_list_pane_g2_ParamLimits

0xabfb,	// (0x0001574e) bg_list_pane_g2

0xac0e,	// (0x00015761) bg_list_pane_g3_ParamLimits

0xac0e,	// (0x00015761) bg_list_pane_g3

0xac20,	// (0x00015773) bg_list_pane_g4_ParamLimits

0xac20,	// (0x00015773) bg_list_pane_g4

0xac32,	// (0x00015785) bg_list_pane_g5_ParamLimits

0xac32,	// (0x00015785) bg_list_pane_g5

0x0004,

0xf994,	// (0x0001a4e7) bg_list_pane_g_ParamLimits

0xf994,	// (0x0001a4e7) bg_list_pane_g

0xaabb,	// (0x0001560e) list_double2_graphic_large_graphic_pane_ParamLimits

0xaabb,	// (0x0001560e) list_double2_graphic_large_graphic_pane

0xaabb,	// (0x0001560e) list_double2_graphic_pane_ParamLimits

0xaabb,	// (0x0001560e) list_double2_graphic_pane

0xaabb,	// (0x0001560e) list_double2_large_graphic_pane_ParamLimits

0xaabb,	// (0x0001560e) list_double2_large_graphic_pane

0xaabb,	// (0x0001560e) list_double2_pane_ParamLimits

0xaabb,	// (0x0001560e) list_double2_pane

0xaabb,	// (0x0001560e) list_double_graphic_heading_pane_ParamLimits

0xaabb,	// (0x0001560e) list_double_graphic_heading_pane

0xaabb,	// (0x0001560e) list_double_graphic_pane_ParamLimits

0xaabb,	// (0x0001560e) list_double_graphic_pane

0xaabb,	// (0x0001560e) list_double_heading_pane_ParamLimits

0xaabb,	// (0x0001560e) list_double_heading_pane

0xaabb,	// (0x0001560e) list_double_large_graphic_pane_ParamLimits

0xaabb,	// (0x0001560e) list_double_large_graphic_pane

0xaabb,	// (0x0001560e) list_double_number_pane_ParamLimits

0xaabb,	// (0x0001560e) list_double_number_pane

0xaabb,	// (0x0001560e) list_double_pane_ParamLimits

0xaabb,	// (0x0001560e) list_double_pane

0xaabb,	// (0x0001560e) list_double_time_pane_ParamLimits

0xaabb,	// (0x0001560e) list_double_time_pane

0xaabb,	// (0x0001560e) list_setting_number_pane_ParamLimits

0xaabb,	// (0x0001560e) list_setting_number_pane

0xaabb,	// (0x0001560e) list_setting_pane_ParamLimits

0xaabb,	// (0x0001560e) list_setting_pane

0xab3c,	// (0x0001568f) list_single_2graphic_pane_ParamLimits

0xab3c,	// (0x0001568f) list_single_2graphic_pane

0xab3c,	// (0x0001568f) list_single_graphic_heading_pane_ParamLimits

0xab3c,	// (0x0001568f) list_single_graphic_heading_pane

0xab3c,	// (0x0001568f) list_single_graphic_pane_ParamLimits

0xab3c,	// (0x0001568f) list_single_graphic_pane

0xab3c,	// (0x0001568f) list_single_heading_pane_ParamLimits

0xab3c,	// (0x0001568f) list_single_heading_pane

0xabbd,	// (0x00015710) list_single_large_graphic_pane_ParamLimits

0xabbd,	// (0x00015710) list_single_large_graphic_pane

0xab3c,	// (0x0001568f) list_single_number_heading_pane_ParamLimits

0xab3c,	// (0x0001568f) list_single_number_heading_pane

0xab3c,	// (0x0001568f) list_single_number_pane_ParamLimits

0xab3c,	// (0x0001568f) list_single_number_pane

0xab3c,	// (0x0001568f) list_single_pane_ParamLimits

0xab3c,	// (0x0001568f) list_single_pane

0x6eae,	// (0x00011a01) list_highlight_pane_cp1

0x77b5,	// (0x00012308) list_single_pane_g1_ParamLimits

0x77b5,	// (0x00012308) list_single_pane_g1

0x77c1,	// (0x00012314) list_single_pane_g2_ParamLimits

0x77c1,	// (0x00012314) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001a11b) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001a11b) list_single_pane_g

0xaa74,	// (0x000155c7) list_single_pane_t1_ParamLimits

0xaa74,	// (0x000155c7) list_single_pane_t1

0x77b5,	// (0x00012308) list_single_number_pane_g1_ParamLimits

0x77b5,	// (0x00012308) list_single_number_pane_g1

0x77c1,	// (0x00012314) list_single_number_pane_g2_ParamLimits

0x77c1,	// (0x00012314) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001a11b) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001a11b) list_single_number_pane_g

0x937c,	// (0x00013ecf) list_single_number_pane_t1_ParamLimits

0x937c,	// (0x00013ecf) list_single_number_pane_t1

0xa824,	// (0x00015377) list_single_number_pane_t2_ParamLimits

0xa824,	// (0x00015377) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0001a4a8) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0001a4a8) list_single_number_pane_t

0x77a9,	// (0x000122fc) list_single_graphic_pane_g1_ParamLimits

0x77a9,	// (0x000122fc) list_single_graphic_pane_g1

0x77b5,	// (0x00012308) list_single_graphic_pane_g2_ParamLimits

0x77b5,	// (0x00012308) list_single_graphic_pane_g2

0x77c1,	// (0x00012314) list_single_graphic_pane_g3_ParamLimits

0x77c1,	// (0x00012314) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001a114) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001a114) list_single_graphic_pane_g

0x77cd,	// (0x00012320) list_single_graphic_pane_t1_ParamLimits

0x77cd,	// (0x00012320) list_single_graphic_pane_t1

0x77b5,	// (0x00012308) list_single_heading_pane_g1_ParamLimits

0x77b5,	// (0x00012308) list_single_heading_pane_g1

0x77c1,	// (0x00012314) list_single_heading_pane_g2_ParamLimits

0x77c1,	// (0x00012314) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a11b) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a11b) list_single_heading_pane_g

0x77e3,	// (0x00012336) list_single_heading_pane_t1_ParamLimits

0x77e3,	// (0x00012336) list_single_heading_pane_t1

0x77f9,	// (0x0001234c) list_single_heading_pane_t2_ParamLimits

0x77f9,	// (0x0001234c) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001a120) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001a120) list_single_heading_pane_t

0x77b5,	// (0x00012308) list_single_number_heading_pane_g1_ParamLimits

0x77b5,	// (0x00012308) list_single_number_heading_pane_g1

0x77c1,	// (0x00012314) list_single_number_heading_pane_g2_ParamLimits

0x77c1,	// (0x00012314) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a11b) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a11b) list_single_number_heading_pane_g

0x77e3,	// (0x00012336) list_single_number_heading_pane_t1_ParamLimits

0x77e3,	// (0x00012336) list_single_number_heading_pane_t1

0x780b,	// (0x0001235e) list_single_number_heading_pane_t2_ParamLimits

0x780b,	// (0x0001235e) list_single_number_heading_pane_t2

0x781d,	// (0x00012370) list_single_number_heading_pane_t3_ParamLimits

0x781d,	// (0x00012370) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001a125) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001a125) list_single_number_heading_pane_t

0x782f,	// (0x00012382) list_single_graphic_heading_pane_g1_ParamLimits

0x782f,	// (0x00012382) list_single_graphic_heading_pane_g1

0x783b,	// (0x0001238e) list_single_graphic_heading_pane_g4_ParamLimits

0x783b,	// (0x0001238e) list_single_graphic_heading_pane_g4

0x77c1,	// (0x00012314) list_single_graphic_heading_pane_g5_ParamLimits

0x77c1,	// (0x00012314) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001a12c) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001a12c) list_single_graphic_heading_pane_g

0x77e3,	// (0x00012336) list_single_graphic_heading_pane_t1_ParamLimits

0x77e3,	// (0x00012336) list_single_graphic_heading_pane_t1

0x784c,	// (0x0001239f) list_single_graphic_heading_pane_t2_ParamLimits

0x784c,	// (0x0001239f) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001a133) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001a133) list_single_graphic_heading_pane_t

0x785e,	// (0x000123b1) list_single_large_graphic_pane_g1_ParamLimits

0x785e,	// (0x000123b1) list_single_large_graphic_pane_g1

0x786a,	// (0x000123bd) list_single_large_graphic_pane_g2_ParamLimits

0x786a,	// (0x000123bd) list_single_large_graphic_pane_g2

0x7876,	// (0x000123c9) list_single_large_graphic_pane_g3_ParamLimits

0x7876,	// (0x000123c9) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001a138) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001a138) list_single_large_graphic_pane_g

0x9af6,	// (0x00014649) wait_border_pane_g2_copy1

0x7882,	// (0x000123d5) list_single_large_graphic_pane_g4_cp2

0x788a,	// (0x000123dd) list_single_large_graphic_pane_t1_ParamLimits

0x788a,	// (0x000123dd) list_single_large_graphic_pane_t1

0x78a0,	// (0x000123f3) list_double_pane_g1_ParamLimits

0x78a0,	// (0x000123f3) list_double_pane_g1

0x78ac,	// (0x000123ff) list_double_pane_g2_ParamLimits

0x78ac,	// (0x000123ff) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001a13f) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001a13f) list_double_pane_g

0x78b8,	// (0x0001240b) list_double_pane_t1_ParamLimits

0x78b8,	// (0x0001240b) list_double_pane_t1

0x78ce,	// (0x00012421) list_double_pane_t2_ParamLimits

0x78ce,	// (0x00012421) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001a144) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001a144) list_double_pane_t

0x78e0,	// (0x00012433) list_double2_pane_g1_ParamLimits

0x78e0,	// (0x00012433) list_double2_pane_g1

0x78f1,	// (0x00012444) list_double2_pane_g2_ParamLimits

0x78f1,	// (0x00012444) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001a149) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001a149) list_double2_pane_g

0x78fd,	// (0x00012450) list_double2_pane_t1_ParamLimits

0x78fd,	// (0x00012450) list_double2_pane_t1

0x7913,	// (0x00012466) list_double2_pane_t2_ParamLimits

0x7913,	// (0x00012466) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001a14e) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001a14e) list_double2_pane_t

0x78a0,	// (0x000123f3) list_double_number_pane_g1_ParamLimits

0x78a0,	// (0x000123f3) list_double_number_pane_g1

0x78ac,	// (0x000123ff) list_double_number_pane_g2_ParamLimits

0x78ac,	// (0x000123ff) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001a13f) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001a13f) list_double_number_pane_g

0x7925,	// (0x00012478) list_double_number_pane_t1_ParamLimits

0x7925,	// (0x00012478) list_double_number_pane_t1

0x7937,	// (0x0001248a) list_double_number_pane_t2_ParamLimits

0x7937,	// (0x0001248a) list_double_number_pane_t2

0x794d,	// (0x000124a0) list_double_number_pane_t3_ParamLimits

0x794d,	// (0x000124a0) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001a153) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001a153) list_double_number_pane_t

0x795f,	// (0x000124b2) list_double_graphic_pane_g1_ParamLimits

0x795f,	// (0x000124b2) list_double_graphic_pane_g1

0x796b,	// (0x000124be) list_double_graphic_pane_g2_ParamLimits

0x796b,	// (0x000124be) list_double_graphic_pane_g2

0x797a,	// (0x000124cd) list_double_graphic_pane_g3_ParamLimits

0x797a,	// (0x000124cd) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001a15a) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001a15a) list_double_graphic_pane_g

0x7992,	// (0x000124e5) list_double_graphic_pane_t1_ParamLimits

0x7992,	// (0x000124e5) list_double_graphic_pane_t1

0x79a8,	// (0x000124fb) list_double_graphic_pane_t2_ParamLimits

0x79a8,	// (0x000124fb) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001a163) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001a163) list_double_graphic_pane_t

0x79ba,	// (0x0001250d) list_double2_graphic_pane_g1_ParamLimits

0x79ba,	// (0x0001250d) list_double2_graphic_pane_g1

0x79c6,	// (0x00012519) list_double2_graphic_pane_g2_ParamLimits

0x79c6,	// (0x00012519) list_double2_graphic_pane_g2

0x78f1,	// (0x00012444) list_double2_graphic_pane_g3_ParamLimits

0x78f1,	// (0x00012444) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001a168) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001a168) list_double2_graphic_pane_g

0x79d2,	// (0x00012525) list_double2_graphic_pane_t1_ParamLimits

0x79d2,	// (0x00012525) list_double2_graphic_pane_t1

0x79e8,	// (0x0001253b) list_double2_graphic_pane_t2_ParamLimits

0x79e8,	// (0x0001253b) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001a16f) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001a16f) list_double2_graphic_pane_t

0x79fa,	// (0x0001254d) list_double_large_graphic_pane_g1_ParamLimits

0x79fa,	// (0x0001254d) list_double_large_graphic_pane_g1

0x7a19,	// (0x0001256c) list_double_large_graphic_pane_g2_ParamLimits

0x7a19,	// (0x0001256c) list_double_large_graphic_pane_g2

0x78ac,	// (0x000123ff) list_double_large_graphic_pane_g3_ParamLimits

0x78ac,	// (0x000123ff) list_double_large_graphic_pane_g3

0x7a2a,	// (0x0001257d) list_double_large_graphic_pane_g4_ParamLimits

0x7a2a,	// (0x0001257d) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001a174) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001a174) list_double_large_graphic_pane_g

0x7a52,	// (0x000125a5) list_double_large_graphic_pane_t1_ParamLimits

0x7a52,	// (0x000125a5) list_double_large_graphic_pane_t1

0x7a6b,	// (0x000125be) list_double_large_graphic_pane_t2_ParamLimits

0x7a6b,	// (0x000125be) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001a17f) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001a17f) list_double_large_graphic_pane_t

0x7a7d,	// (0x000125d0) list_double2_large_graphic_pane_g1_ParamLimits

0x7a7d,	// (0x000125d0) list_double2_large_graphic_pane_g1

0x78e0,	// (0x00012433) list_double2_large_graphic_pane_g2_ParamLimits

0x78e0,	// (0x00012433) list_double2_large_graphic_pane_g2

0x78f1,	// (0x00012444) list_double2_large_graphic_pane_g3_ParamLimits

0x78f1,	// (0x00012444) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001a184) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001a184) list_double2_large_graphic_pane_g

0x7a89,	// (0x000125dc) list_double2_large_graphic_pane_t1_ParamLimits

0x7a89,	// (0x000125dc) list_double2_large_graphic_pane_t1

0x7a9f,	// (0x000125f2) list_double2_large_graphic_pane_t2_ParamLimits

0x7a9f,	// (0x000125f2) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001a18b) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001a18b) list_double2_large_graphic_pane_t

0x7ab1,	// (0x00012604) list_double_heading_pane_g1_ParamLimits

0x7ab1,	// (0x00012604) list_double_heading_pane_g1

0x7ac2,	// (0x00012615) list_double_heading_pane_g2_ParamLimits

0x7ac2,	// (0x00012615) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001a190) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001a190) list_double_heading_pane_g

0x7ace,	// (0x00012621) list_double_heading_pane_t1_ParamLimits

0x7ace,	// (0x00012621) list_double_heading_pane_t1

0x7913,	// (0x00012466) list_double_heading_pane_t2_ParamLimits

0x7913,	// (0x00012466) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001a195) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001a195) list_double_heading_pane_t

0x7ae4,	// (0x00012637) list_double_graphic_heading_pane_g1_ParamLimits

0x7ae4,	// (0x00012637) list_double_graphic_heading_pane_g1

0x7ab1,	// (0x00012604) list_double_graphic_heading_pane_g2_ParamLimits

0x7ab1,	// (0x00012604) list_double_graphic_heading_pane_g2

0x7ac2,	// (0x00012615) list_double_graphic_heading_pane_g3_ParamLimits

0x7ac2,	// (0x00012615) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001a19a) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001a19a) list_double_graphic_heading_pane_g

0x7af0,	// (0x00012643) list_double_graphic_heading_pane_t1_ParamLimits

0x7af0,	// (0x00012643) list_double_graphic_heading_pane_t1

0x79e8,	// (0x0001253b) list_double_graphic_heading_pane_t2_ParamLimits

0x79e8,	// (0x0001253b) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001a1a1) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001a1a1) list_double_graphic_heading_pane_t

0x7a19,	// (0x0001256c) list_double_time_pane_g1_ParamLimits

0x7a19,	// (0x0001256c) list_double_time_pane_g1

0x78ac,	// (0x000123ff) list_double_time_pane_g2_ParamLimits

0x78ac,	// (0x000123ff) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001a1a6) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001a1a6) list_double_time_pane_g

0x7b06,	// (0x00012659) list_double_time_pane_t1_ParamLimits

0x7b06,	// (0x00012659) list_double_time_pane_t1

0x7b1c,	// (0x0001266f) list_double_time_pane_t2_ParamLimits

0x7b1c,	// (0x0001266f) list_double_time_pane_t2

0x7b2e,	// (0x00012681) list_double_time_pane_t3_ParamLimits

0x7b2e,	// (0x00012681) list_double_time_pane_t3

0x7b40,	// (0x00012693) list_double_time_pane_t4_ParamLimits

0x7b40,	// (0x00012693) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001a1ab) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001a1ab) list_double_time_pane_t

0x79c6,	// (0x00012519) list_setting_pane_g1_ParamLimits

0x79c6,	// (0x00012519) list_setting_pane_g1

0x78f1,	// (0x00012444) list_setting_pane_g2_ParamLimits

0x78f1,	// (0x00012444) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001a1b4) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001a1b4) list_setting_pane_g

0x7b52,	// (0x000126a5) list_setting_pane_t1_ParamLimits

0x7b52,	// (0x000126a5) list_setting_pane_t1

0x7b69,	// (0x000126bc) list_setting_pane_t2_ParamLimits

0x7b69,	// (0x000126bc) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001a1b9) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001a1b9) list_setting_pane_t

0x7ba6,	// (0x000126f9) set_value_pane_cp_ParamLimits

0x7ba6,	// (0x000126f9) set_value_pane_cp

0x79c6,	// (0x00012519) list_setting_number_pane_g1_ParamLimits

0x79c6,	// (0x00012519) list_setting_number_pane_g1

0x78f1,	// (0x00012444) list_setting_number_pane_g2_ParamLimits

0x78f1,	// (0x00012444) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001a1b4) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001a1b4) list_setting_number_pane_g

0x7bb2,	// (0x00012705) list_setting_number_pane_t1_ParamLimits

0x7bb2,	// (0x00012705) list_setting_number_pane_t1

0x7bc6,	// (0x00012719) list_setting_number_pane_t2_ParamLimits

0x7bc6,	// (0x00012719) list_setting_number_pane_t2

0x7bdd,	// (0x00012730) list_setting_number_pane_t3_ParamLimits

0x7bdd,	// (0x00012730) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001a1c0) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001a1c0) list_setting_number_pane_t

0x7ba6,	// (0x000126f9) set_value_pane_ParamLimits

0x7ba6,	// (0x000126f9) set_value_pane

0x7c20,	// (0x00012773) bg_set_opt_pane_ParamLimits

0x7c20,	// (0x00012773) bg_set_opt_pane

0x7c41,	// (0x00012794) set_value_pane_t1

0x7c4f,	// (0x000127a2) slider_set_pane_cp3

0x7c58,	// (0x000127ab) volume_small_pane_cp

0x7c61,	// (0x000127b4) list_form_gen_pane

0x7c6a,	// (0x000127bd) scroll_pane_cp8

0x7c7b,	// (0x000127ce) form_field_data_pane_ParamLimits

0x7c7b,	// (0x000127ce) form_field_data_pane

0x7c9b,	// (0x000127ee) form_field_data_wide_pane_ParamLimits

0x7c9b,	// (0x000127ee) form_field_data_wide_pane

0x7cbc,	// (0x0001280f) form_field_popup_pane_ParamLimits

0x7cbc,	// (0x0001280f) form_field_popup_pane

0x7cda,	// (0x0001282d) form_field_popup_wide_pane_ParamLimits

0x7cda,	// (0x0001282d) form_field_popup_wide_pane

0x7cf7,	// (0x0001284a) form_field_slider_pane_ParamLimits

0x7cf7,	// (0x0001284a) form_field_slider_pane

0x7d0a,	// (0x0001285d) form_field_slider_wide_pane_ParamLimits

0x7d0a,	// (0x0001285d) form_field_slider_wide_pane

0x7d1d,	// (0x00012870) data_form_pane

0x7d33,	// (0x00012886) form_field_data_pane_t1

0x7d4d,	// (0x000128a0) input_focus_pane

0x7d5b,	// (0x000128ae) data_form_wide_pane

0x7d87,	// (0x000128da) form_field_data_wide_pane_t1

0x7573,	// (0x000120c6) input_focus_pane_cp6

0x7da6,	// (0x000128f9) form_field_popup_pane_t1

0x7d4d,	// (0x000128a0) input_focus_pane_cp7

0x7dc0,	// (0x00012913) list_form_pane

0x7dd4,	// (0x00012927) form_field_popup_wide_pane_t1

0x7d4d,	// (0x000128a0) input_focus_pane_cp8

0x7de9,	// (0x0001293c) list_form_wide_pane

0x7e00,	// (0x00012953) form_field_slider_pane_t1_ParamLimits

0x7e00,	// (0x00012953) form_field_slider_pane_t1

0x7e14,	// (0x00012967) form_field_slider_pane_t2_ParamLimits

0x7e14,	// (0x00012967) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001a1d0) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001a1d0) form_field_slider_pane_t

0x7223,	// (0x00011d76) input_focus_pane_cp9_ParamLimits

0x7223,	// (0x00011d76) input_focus_pane_cp9

0x7e26,	// (0x00012979) slider_cont_pane_ParamLimits

0x7e26,	// (0x00012979) slider_cont_pane

0x7e3a,	// (0x0001298d) form_field_slider_wide_pane_t1_ParamLimits

0x7e3a,	// (0x0001298d) form_field_slider_wide_pane_t1

0x7e4c,	// (0x0001299f) form_field_slider_wide_pane_t2_ParamLimits

0x7e4c,	// (0x0001299f) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001a1d5) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001a1d5) form_field_slider_wide_pane_t

0x7223,	// (0x00011d76) input_focus_pane_cp10_ParamLimits

0x7223,	// (0x00011d76) input_focus_pane_cp10

0x7e5e,	// (0x000129b1) slider_cont_pane_cp1_ParamLimits

0x7e5e,	// (0x000129b1) slider_cont_pane_cp1

0x7e72,	// (0x000129c5) slider_form_pane_cp

0x7e7a,	// (0x000129cd) input_focus_pane_g1

0x7e82,	// (0x000129d5) input_focus_pane_g2

0x7e8a,	// (0x000129dd) input_focus_pane_g3

0x7e92,	// (0x000129e5) input_focus_pane_g4

0x7e9a,	// (0x000129ed) input_focus_pane_g5

0x7ea2,	// (0x000129f5) input_focus_pane_g6

0x7eaa,	// (0x000129fd) input_focus_pane_g7

0x7eb2,	// (0x00012a05) input_focus_pane_g8

0x7eba,	// (0x00012a0d) input_focus_pane_g9

0x6ea4,	// (0x000119f7) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001a1da) input_focus_pane_g

0x9aff,	// (0x00014652) wait_border_pane_g3_copy1

0x7ec2,	// (0x00012a15) data_form_pane_t1

0x6ea4,	// (0x000119f7) wait_anim_pane_g1_copy1

0xaa57,	// (0x000155aa) data_form_wide_pane_t1

0x7edd,	// (0x00012a30) list_form_graphic_pane_cp_ParamLimits

0x7edd,	// (0x00012a30) list_form_graphic_pane_cp

0xaa2c,	// (0x0001557f) slider_form_pane_g1

0xaa35,	// (0x00015588) slider_form_pane_g2

0x0006,

0xf985,	// (0x0001a4d8) slider_form_pane_g

0x7edd,	// (0x00012a30) list_form_graphic_pane_ParamLimits

0x7edd,	// (0x00012a30) list_form_graphic_pane

0x7ef4,	// (0x00012a47) list_form_graphic_pane_g1

0x7efc,	// (0x00012a4f) list_form_graphic_pane_t1_ParamLimits

0x7efc,	// (0x00012a4f) list_form_graphic_pane_t1

0x6f8e,	// (0x00011ae1) list_highlight_pane_cp5_ParamLimits

0x6f8e,	// (0x00011ae1) list_highlight_pane_cp5

0x7f11,	// (0x00012a64) find_pane_g1

0x7f1a,	// (0x00012a6d) input_find_pane

0x7f23,	// (0x00012a76) input_find_pane_g1_ParamLimits

0x7f23,	// (0x00012a76) input_find_pane_g1

0x7f2f,	// (0x00012a82) input_find_pane_t1_ParamLimits

0x7f2f,	// (0x00012a82) input_find_pane_t1

0x7f44,	// (0x00012a97) input_find_pane_t2_ParamLimits

0x7f44,	// (0x00012a97) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001a1ef) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001a1ef) input_find_pane_t

0x7f59,	// (0x00012aac) input_focus_pane_cp5_ParamLimits

0x7f59,	// (0x00012aac) input_focus_pane_cp5

0x7f73,	// (0x00012ac6) bg_popup_window_pane_cp2_ParamLimits

0x7f73,	// (0x00012ac6) bg_popup_window_pane_cp2

0x7f80,	// (0x00012ad3) listscroll_menu_pane_ParamLimits

0x7f80,	// (0x00012ad3) listscroll_menu_pane

0x7f8c,	// (0x00012adf) popup_submenu_window_ParamLimits

0x7f8c,	// (0x00012adf) popup_submenu_window

0x7fb4,	// (0x00012b07) find_popup_pane_g1

0x7fbc,	// (0x00012b0f) input_popup_find_pane_cp

0x7f59,	// (0x00012aac) input_focus_pane_cp4_ParamLimits

0x7f59,	// (0x00012aac) input_focus_pane_cp4

0x7fd4,	// (0x00012b27) input_popup_find_pane_t1_ParamLimits

0x7fd4,	// (0x00012b27) input_popup_find_pane_t1

0x6eae,	// (0x00011a01) bg_popup_sub_pane_cp

0x8002,	// (0x00012b55) listscroll_popup_sub_pane

0x800a,	// (0x00012b5d) list_submenu_pane_ParamLimits

0x800a,	// (0x00012b5d) list_submenu_pane

0x801b,	// (0x00012b6e) scroll_pane_cp4

0x8023,	// (0x00012b76) list_single_popup_submenu_pane_ParamLimits

0x8023,	// (0x00012b76) list_single_popup_submenu_pane

0x8037,	// (0x00012b8a) list_single_popup_submenu_pane_g1

0x803f,	// (0x00012b92) list_single_popup_submenu_pane_t1_ParamLimits

0x803f,	// (0x00012b92) list_single_popup_submenu_pane_t1

0x6f8e,	// (0x00011ae1) bg_active_tab_pane_cp1_ParamLimits

0x6f8e,	// (0x00011ae1) bg_active_tab_pane_cp1

0x8054,	// (0x00012ba7) tabs_2_active_pane_g1

0x805c,	// (0x00012baf) tabs_2_active_pane_t1

0x6f8e,	// (0x00011ae1) bg_passive_tab_pane_cp1_ParamLimits

0x6f8e,	// (0x00011ae1) bg_passive_tab_pane_cp1

0x8054,	// (0x00012ba7) tabs_2_passive_pane_g1

0x805c,	// (0x00012baf) tabs_2_passive_pane_t1

0x806e,	// (0x00012bc1) bg_active_tab_pane_cp4

0x807c,	// (0x00012bcf) tabs_2_long_active_pane_t1

0x808f,	// (0x00012be2) bg_passive_tab_pane_cp4

0x5a77,	// (0x000105ca) list_single_midp_graphic_pane_g4_ParamLimits

0x806e,	// (0x00012bc1) bg_active_tab_pane_cp5

0x809b,	// (0x00012bee) tabs_3_long_active_pane_t1

0x808f,	// (0x00012be2) bg_passive_tab_pane_cp5

0x5a77,	// (0x000105ca) list_single_midp_graphic_pane_g4

0x6f8e,	// (0x00011ae1) bg_popup_window_pane_cp13_ParamLimits

0x6f8e,	// (0x00011ae1) bg_popup_window_pane_cp13

0x80b6,	// (0x00012c09) listscroll_popup_fast_pane_ParamLimits

0x80b6,	// (0x00012c09) listscroll_popup_fast_pane

0x80c2,	// (0x00012c15) grid_popup_fast_pane_ParamLimits

0x80c2,	// (0x00012c15) grid_popup_fast_pane

0x80d4,	// (0x00012c27) scroll_pane_cp9_ParamLimits

0x80d4,	// (0x00012c27) scroll_pane_cp9

0xc92c,	// (0x0001747f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc92c,	// (0x0001747f) list_single_graphic_hl_pane_t1_cp2

0x80f8,	// (0x00012c4b) input_focus_pane_cp20_ParamLimits

0x80f8,	// (0x00012c4b) input_focus_pane_cp20

0x8106,	// (0x00012c59) query_popup_data_pane_t1_ParamLimits

0x8106,	// (0x00012c59) query_popup_data_pane_t1

0x8119,	// (0x00012c6c) query_popup_data_pane_t2_ParamLimits

0x8119,	// (0x00012c6c) query_popup_data_pane_t2

0x815f,	// (0x00012cb2) query_popup_data_pane_t3_ParamLimits

0x815f,	// (0x00012cb2) query_popup_data_pane_t3

0x81a0,	// (0x00012cf3) query_popup_data_pane_t4_ParamLimits

0x81a0,	// (0x00012cf3) query_popup_data_pane_t4

0x81dc,	// (0x00012d2f) query_popup_data_pane_t5_ParamLimits

0x81dc,	// (0x00012d2f) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001a1f4) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001a1f4) query_popup_data_pane_t

0x7e7a,	// (0x000129cd) bg_set_opt_pane_g1

0x7e82,	// (0x000129d5) bg_set_opt_pane_g2

0x7e8a,	// (0x000129dd) bg_set_opt_pane_g3

0x7e92,	// (0x000129e5) bg_set_opt_pane_g4

0x7e9a,	// (0x000129ed) bg_set_opt_pane_g5

0x7ea2,	// (0x000129f5) bg_set_opt_pane_g6

0x7eaa,	// (0x000129fd) bg_set_opt_pane_g7

0x7eb2,	// (0x00012a05) bg_set_opt_pane_g8

0x7eba,	// (0x00012a0d) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001a1ff) bg_set_opt_pane_g

0x50a1,	// (0x0000fbf4) control_top_pane_stacon_ParamLimits

0x50a1,	// (0x0000fbf4) control_top_pane_stacon

0x50f4,	// (0x0000fc47) signal_pane_stacon_ParamLimits

0x50f4,	// (0x0000fc47) signal_pane_stacon

0x882d,	// (0x00013380) stacon_top_pane_g1_ParamLimits

0x882d,	// (0x00013380) stacon_top_pane_g1

0x5119,	// (0x0000fc6c) title_pane_stacon_ParamLimits

0x5119,	// (0x0000fc6c) title_pane_stacon

0x5143,	// (0x0000fc96) uni_indicator_pane_stacon_ParamLimits

0x5143,	// (0x0000fc96) uni_indicator_pane_stacon

0x5158,	// (0x0000fcab) battery_pane_stacon_ParamLimits

0x5158,	// (0x0000fcab) battery_pane_stacon

0x519c,	// (0x0000fcef) control_bottom_pane_stacon_ParamLimits

0x519c,	// (0x0000fcef) control_bottom_pane_stacon

0x51bf,	// (0x0000fd12) navi_pane_stacon_ParamLimits

0x51bf,	// (0x0000fd12) navi_pane_stacon

0x884f,	// (0x000133a2) stacon_bottom_pane_g1_ParamLimits

0x884f,	// (0x000133a2) stacon_bottom_pane_g1

0x4e0b,	// (0x0000f95e) aid_levels_signal_lsc_ParamLimits

0x4e0b,	// (0x0000f95e) aid_levels_signal_lsc

0x4e22,	// (0x0000f975) signal_pane_stacon_g1_ParamLimits

0x4e22,	// (0x0000f975) signal_pane_stacon_g1

0x4e36,	// (0x0000f989) signal_pane_stacon_g2_ParamLimits

0x4e36,	// (0x0000f989) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001a212) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001a212) signal_pane_stacon_g

0x4e6b,	// (0x0000f9be) title_pane_stacon_t1_ParamLimits

0x4e6b,	// (0x0000f9be) title_pane_stacon_t1

0x8220,	// (0x00012d73) uni_indicator_pane_stacon_g1

0x822a,	// (0x00012d7d) uni_indicator_pane_stacon_g2

0x8234,	// (0x00012d87) uni_indicator_pane_stacon_g3

0x823e,	// (0x00012d91) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001a21e) uni_indicator_pane_stacon_g

0x4e90,	// (0x0000f9e3) control_top_pane_stacon_g1

0x4e98,	// (0x0000f9eb) control_top_pane_stacon_t1_ParamLimits

0x4e98,	// (0x0000f9eb) control_top_pane_stacon_t1

0x4ecf,	// (0x0000fa22) aid_levels_battery_lsc_ParamLimits

0x4ecf,	// (0x0000fa22) aid_levels_battery_lsc

0x4ee7,	// (0x0000fa3a) battery_pane_stacon_g1_ParamLimits

0x4ee7,	// (0x0000fa3a) battery_pane_stacon_g1

0x4efa,	// (0x0000fa4d) battery_pane_stacon_g2_ParamLimits

0x4efa,	// (0x0000fa4d) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001a227) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001a227) battery_pane_stacon_g

0x4f38,	// (0x0000fa8b) navi_icon_pane_stacon

0x4f4c,	// (0x0000fa9f) navi_navi_pane_stacon

0x4f38,	// (0x0000fa8b) navi_text_pane_stacon

0x4e90,	// (0x0000f9e3) control_bottom_pane_stacon_g1

0x4f60,	// (0x0000fab3) control_bottom_pane_stacon_t1_ParamLimits

0x4f60,	// (0x0000fab3) control_bottom_pane_stacon_t1

0x8262,	// (0x00012db5) grid_app_pane_ParamLimits

0x8262,	// (0x00012db5) grid_app_pane

0x8284,	// (0x00012dd7) scroll_pane_cp15_ParamLimits

0x8284,	// (0x00012dd7) scroll_pane_cp15

0x8297,	// (0x00012dea) cell_app_pane_ParamLimits

0x8297,	// (0x00012dea) cell_app_pane

0x82bd,	// (0x00012e10) cell_app_pane_g1_ParamLimits

0x82bd,	// (0x00012e10) cell_app_pane_g1

0x82e1,	// (0x00012e34) cell_app_pane_g2_ParamLimits

0x82e1,	// (0x00012e34) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001a22c) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001a22c) cell_app_pane_g

0x82ed,	// (0x00012e40) cell_app_pane_t1_ParamLimits

0x82ed,	// (0x00012e40) cell_app_pane_t1

0x8304,	// (0x00012e57) grid_highlight_pane_ParamLimits

0x8304,	// (0x00012e57) grid_highlight_pane

0x7e7a,	// (0x000129cd) cell_highlight_pane_g1

0x7e82,	// (0x000129d5) cell_highlight_pane_g2

0x7e8a,	// (0x000129dd) cell_highlight_pane_g3

0x7e92,	// (0x000129e5) cell_highlight_pane_g4

0x7e9a,	// (0x000129ed) cell_highlight_pane_g5

0x7ea2,	// (0x000129f5) cell_highlight_pane_g6

0x7eaa,	// (0x000129fd) cell_highlight_pane_g7

0x7eb2,	// (0x00012a05) cell_highlight_pane_g8

0x7eba,	// (0x00012a0d) cell_highlight_pane_g9

0x6ea4,	// (0x000119f7) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001a1da) cell_highlight_pane_g

0x8315,	// (0x00012e68) bg_scroll_pane

0x4faa,	// (0x0000fafd) scroll_handle_pane

0x835c,	// (0x00012eaf) scroll_bg_pane_g1

0x8371,	// (0x00012ec4) scroll_bg_pane_g2

0x8389,	// (0x00012edc) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001a231) scroll_bg_pane_g

0x839e,	// (0x00012ef1) scroll_handle_focus_pane_ParamLimits

0x839e,	// (0x00012ef1) scroll_handle_focus_pane

0x835c,	// (0x00012eaf) scroll_handle_pane_g1

0x83ab,	// (0x00012efe) scroll_handle_pane_g2

0x8389,	// (0x00012edc) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001a238) scroll_handle_pane_g

0x7f59,	// (0x00012aac) bg_popup_sub_pane_cp21_ParamLimits

0x7f59,	// (0x00012aac) bg_popup_sub_pane_cp21

0x83bf,	// (0x00012f12) popup_fep_japan_predictive_window_t1_ParamLimits

0x83bf,	// (0x00012f12) popup_fep_japan_predictive_window_t1

0x83d9,	// (0x00012f2c) popup_fep_japan_predictive_window_t2_ParamLimits

0x83d9,	// (0x00012f2c) popup_fep_japan_predictive_window_t2

0x840c,	// (0x00012f5f) popup_fep_japan_predictive_window_t3_ParamLimits

0x840c,	// (0x00012f5f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001a23f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001a23f) popup_fep_japan_predictive_window_t

0x6eae,	// (0x00011a01) bg_popup_sub_pane_cp23

0x8443,	// (0x00012f96) listscroll_japin_cand_pane

0x844b,	// (0x00012f9e) popup_fep_japan_candidate_window_t1

0x8459,	// (0x00012fac) candidate_pane_ParamLimits

0x8459,	// (0x00012fac) candidate_pane

0x846b,	// (0x00012fbe) scroll_pane_cp30

0x8473,	// (0x00012fc6) list_single_popup_jap_candidate_pane_ParamLimits

0x8473,	// (0x00012fc6) list_single_popup_jap_candidate_pane

0x6eae,	// (0x00011a01) list_highlight_pane_cp30

0x8487,	// (0x00012fda) list_single_popup_jap_candidate_pane_t1

0x8496,	// (0x00012fe9) level_1_signal

0x84a3,	// (0x00012ff6) level_2_signal

0x84b0,	// (0x00013003) level_3_signal

0x84bd,	// (0x00013010) level_4_signal

0x84ca,	// (0x0001301d) level_5_signal

0x84d7,	// (0x0001302a) level_6_signal

0x84e4,	// (0x00013037) level_7_signal

0x8496,	// (0x00012fe9) level_1_battery

0x84a3,	// (0x00012ff6) level_2_battery

0x84b0,	// (0x00013003) level_3_battery

0x84bd,	// (0x00013010) level_4_battery

0x84ca,	// (0x0001301d) level_5_battery

0x84d7,	// (0x0001302a) level_6_battery

0x84e4,	// (0x00013037) level_7_battery

0x8509,	// (0x0001305c) list_menu_pane_ParamLimits

0x8509,	// (0x0001305c) list_menu_pane

0x851f,	// (0x00013072) scroll_pane_cp25_ParamLimits

0x851f,	// (0x00013072) scroll_pane_cp25

0x8538,	// (0x0001308b) list_double2_graphic_pane_cp2_ParamLimits

0x8538,	// (0x0001308b) list_double2_graphic_pane_cp2

0x8538,	// (0x0001308b) list_double2_large_graphic_pane_cp2_ParamLimits

0x8538,	// (0x0001308b) list_double2_large_graphic_pane_cp2

0x8538,	// (0x0001308b) list_double2_pane_cp2_ParamLimits

0x8538,	// (0x0001308b) list_double2_pane_cp2

0x8538,	// (0x0001308b) list_double_graphic_pane_cp2_ParamLimits

0x8538,	// (0x0001308b) list_double_graphic_pane_cp2

0x8538,	// (0x0001308b) list_double_large_graphic_pane_cp2_ParamLimits

0x8538,	// (0x0001308b) list_double_large_graphic_pane_cp2

0x8538,	// (0x0001308b) list_double_number_pane_cp2_ParamLimits

0x8538,	// (0x0001308b) list_double_number_pane_cp2

0x8538,	// (0x0001308b) list_double_pane_cp2_ParamLimits

0x8538,	// (0x0001308b) list_double_pane_cp2

0x855c,	// (0x000130af) list_single_2graphic_pane_cp2_ParamLimits

0x855c,	// (0x000130af) list_single_2graphic_pane_cp2

0x855c,	// (0x000130af) list_single_graphic_heading_pane_cp2_ParamLimits

0x855c,	// (0x000130af) list_single_graphic_heading_pane_cp2

0x855c,	// (0x000130af) list_single_graphic_pane_cp2_ParamLimits

0x855c,	// (0x000130af) list_single_graphic_pane_cp2

0x855c,	// (0x000130af) list_single_heading_pane_cp2_ParamLimits

0x855c,	// (0x000130af) list_single_heading_pane_cp2

0x8572,	// (0x000130c5) list_single_large_graphic_pane_cp2_ParamLimits

0x8572,	// (0x000130c5) list_single_large_graphic_pane_cp2

0x855c,	// (0x000130af) list_single_number_heading_pane_cp2_ParamLimits

0x855c,	// (0x000130af) list_single_number_heading_pane_cp2

0x855c,	// (0x000130af) list_single_number_pane_cp2_ParamLimits

0x855c,	// (0x000130af) list_single_number_pane_cp2

0x855c,	// (0x000130af) list_single_pane_cp2_ParamLimits

0x855c,	// (0x000130af) list_single_pane_cp2

0x85ed,	// (0x00013140) bg_popup_sub_pane_cp22

0x5059,	// (0x0000fbac) popup_side_volume_key_window_g1

0x507d,	// (0x0000fbd0) popup_side_volume_key_window_t1

0x5099,	// (0x0000fbec) volume_small_pane_cp1

0x7223,	// (0x00011d76) bg_popup_sub_pane_cp24_ParamLimits

0x7223,	// (0x00011d76) bg_popup_sub_pane_cp24

0x8603,	// (0x00013156) fep_china_uni_candidate_pane_ParamLimits

0x8603,	// (0x00013156) fep_china_uni_candidate_pane

0x8617,	// (0x0001316a) fep_china_uni_entry_pane

0x8627,	// (0x0001317a) popup_fep_china_uni_window_g1

0x8643,	// (0x00013196) fep_china_uni_entry_pane_g1

0x864b,	// (0x0001319e) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001a270) fep_china_uni_entry_pane_g

0x8653,	// (0x000131a6) fep_entry_item_pane

0x865d,	// (0x000131b0) fep_candidate_item_pane

0x8665,	// (0x000131b8) fep_china_uni_candidate_pane_g1

0x866d,	// (0x000131c0) fep_china_uni_candidate_pane_g2

0x8675,	// (0x000131c8) fep_china_uni_candidate_pane_g3

0x867d,	// (0x000131d0) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001a275) fep_china_uni_candidate_pane_g

0x6ea4,	// (0x000119f7) fep_entry_item_pane_g1

0x8685,	// (0x000131d8) fep_entry_item_pane_t1_ParamLimits

0x8685,	// (0x000131d8) fep_entry_item_pane_t1

0x869b,	// (0x000131ee) fep_candidate_item_pane_t1_ParamLimits

0x869b,	// (0x000131ee) fep_candidate_item_pane_t1

0x86b0,	// (0x00013203) fep_candidate_item_pane_t2_ParamLimits

0x86b0,	// (0x00013203) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001a27e) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001a27e) fep_candidate_item_pane_t

0x6f8e,	// (0x00011ae1) list_highlight_pane_cp31_ParamLimits

0x6f8e,	// (0x00011ae1) list_highlight_pane_cp31

0x86c2,	// (0x00013215) level_1_signal_lsc

0x86cb,	// (0x0001321e) level_2_signal_lsc

0x86d4,	// (0x00013227) level_3_signal_lsc

0x86dd,	// (0x00013230) level_4_signal_lsc

0x86e6,	// (0x00013239) level_5_signal_lsc

0x86ef,	// (0x00013242) level_6_signal_lsc

0x86f8,	// (0x0001324b) level_7_signal_lsc

0x86f8,	// (0x0001324b) level_1_battery_lsc

0x8701,	// (0x00013254) level_2_battery_lsc

0x870a,	// (0x0001325d) level_3_battery_lsc

0x8713,	// (0x00013266) level_4_battery_lsc

0x871c,	// (0x0001326f) level_5_battery_lsc

0x8725,	// (0x00013278) level_6_battery_lsc

0x86c2,	// (0x00013215) level_7_battery_lsc

0x872e,	// (0x00013281) scroll_handle_focus_pane_g1

0x8737,	// (0x0001328a) scroll_handle_focus_pane_g2

0x8740,	// (0x00013293) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001a283) scroll_handle_focus_pane_g

0x8749,	// (0x0001329c) list_single_2graphic_pane_g1_ParamLimits

0x8749,	// (0x0001329c) list_single_2graphic_pane_g1

0x783b,	// (0x0001238e) list_single_2graphic_pane_g2_ParamLimits

0x783b,	// (0x0001238e) list_single_2graphic_pane_g2

0x77c1,	// (0x00012314) list_single_2graphic_pane_g3_ParamLimits

0x77c1,	// (0x00012314) list_single_2graphic_pane_g3

0x8755,	// (0x000132a8) list_single_2graphic_pane_g4_ParamLimits

0x8755,	// (0x000132a8) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001a28a) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001a28a) list_single_2graphic_pane_g

0x8766,	// (0x000132b9) list_single_2graphic_pane_t1_ParamLimits

0x8766,	// (0x000132b9) list_single_2graphic_pane_t1

0x8794,	// (0x000132e7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8794,	// (0x000132e7) list_double2_graphic_large_graphic_pane_g1

0x78e0,	// (0x00012433) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x78e0,	// (0x00012433) list_double2_graphic_large_graphic_pane_g2

0x78f1,	// (0x00012444) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x78f1,	// (0x00012444) list_double2_graphic_large_graphic_pane_g3

0x87a4,	// (0x000132f7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x87a4,	// (0x000132f7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001a293) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001a293) list_double2_graphic_large_graphic_pane_g

0x87b0,	// (0x00013303) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x87b0,	// (0x00013303) list_double2_graphic_large_graphic_pane_t1

0x87c6,	// (0x00013319) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x87c6,	// (0x00013319) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001a29c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001a29c) list_double2_graphic_large_graphic_pane_t

0x8916,	// (0x00013469) popup_fast_swap_window_ParamLimits

0x8916,	// (0x00013469) popup_fast_swap_window

0x8932,	// (0x00013485) popup_side_volume_key_window

0x894c,	// (0x0001349f) stacon_top_pane

0x8956,	// (0x000134a9) status_pane_ParamLimits

0x8956,	// (0x000134a9) status_pane

0x8964,	// (0x000134b7) status_small_pane

0x6eae,	// (0x00011a01) control_pane

0x6eae,	// (0x00011a01) stacon_bottom_pane

0x7c6a,	// (0x000127bd) scroll_pane_cp121

0x7c61,	// (0x000127b4) set_content_pane

0x87d8,	// (0x0001332b) bg_active_tab_pane_g1_cp1

0x87e1,	// (0x00013334) bg_active_tab_pane_g2_cp1

0x87ea,	// (0x0001333d) bg_active_tab_pane_g3_cp1

0x87d8,	// (0x0001332b) bg_passive_tab_pane_g1_cp1

0x87e1,	// (0x00013334) bg_passive_tab_pane_g2_cp1

0x87ea,	// (0x0001333d) bg_passive_tab_pane_g3_cp1

0x87f3,	// (0x00013346) bg_active_tab_pane_g1_cp2

0x87e1,	// (0x00013334) bg_active_tab_pane_g2_cp2

0x87fc,	// (0x0001334f) bg_active_tab_pane_g3_cp2

0x87f3,	// (0x00013346) bg_passive_tab_pane_g1_cp2

0x87e1,	// (0x00013334) bg_passive_tab_pane_g2_cp2

0x87fc,	// (0x0001334f) bg_passive_tab_pane_g3_cp2

0x8805,	// (0x00013358) bg_active_tab_pane_g1_cp3

0x87e1,	// (0x00013334) bg_active_tab_pane_g2_cp3

0x880e,	// (0x00013361) bg_active_tab_pane_g3_cp3

0x8805,	// (0x00013358) bg_passive_tab_pane_g1_cp3

0x87e1,	// (0x00013334) bg_passive_tab_pane_g2_cp3

0x880e,	// (0x00013361) bg_passive_tab_pane_g3_cp3

0x8817,	// (0x0001336a) bg_active_tab_pane_g1_cp4

0x87e1,	// (0x00013334) bg_active_tab_pane_g2_cp4

0x8822,	// (0x00013375) bg_active_tab_pane_g3_cp4

0x8817,	// (0x0001336a) bg_passive_tab_pane_g1_cp4

0x87e1,	// (0x00013334) bg_passive_tab_pane_g2_cp4

0x8822,	// (0x00013375) bg_passive_tab_pane_g3_cp4

0x886b,	// (0x000133be) bg_active_tab_pane_g1_cp5

0x87e1,	// (0x00013334) bg_active_tab_pane_g2_cp5

0x8874,	// (0x000133c7) bg_active_tab_pane_g3_cp5

0x886b,	// (0x000133be) bg_passive_tab_pane_g1_cp5

0x87e1,	// (0x00013334) bg_passive_tab_pane_g2_cp5

0x8874,	// (0x000133c7) bg_passive_tab_pane_g3_cp5

0x887d,	// (0x000133d0) list_set_graphic_pane_ParamLimits

0x887d,	// (0x000133d0) list_set_graphic_pane

0x6eae,	// (0x00011a01) bg_set_opt_pane_cp4

0x889b,	// (0x000133ee) list_set_graphic_pane_g1_ParamLimits

0x889b,	// (0x000133ee) list_set_graphic_pane_g1

0x88a7,	// (0x000133fa) list_set_graphic_pane_g2_ParamLimits

0x88a7,	// (0x000133fa) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001a2a1) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001a2a1) list_set_graphic_pane_g

0x0009,

0xfadf,	// (0x0001a632) volume_small_pane_cp_g

0x88c9,	// (0x0001341c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x88c9,	// (0x0001341c) list_double2_large_graphic_pane_g1_cp2

0x88d5,	// (0x00013428) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x88d5,	// (0x00013428) list_double2_large_graphic_pane_g2_cp2

0x88e6,	// (0x00013439) list_double2_large_graphic_pane_g3_cp2

0x88ee,	// (0x00013441) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x88ee,	// (0x00013441) list_double2_large_graphic_pane_t1_cp2

0x8904,	// (0x00013457) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8904,	// (0x00013457) list_double2_large_graphic_pane_t2_cp2

0xa5d8,	// (0x0001512b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa5d8,	// (0x0001512b) list_double_large_graphic_pane_g1_cp2

0xa5e9,	// (0x0001513c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa5e9,	// (0x0001513c) list_double_large_graphic_pane_g2_cp2

0x8a7d,	// (0x000135d0) list_double_large_graphic_pane_g3_cp2

0xa5fa,	// (0x0001514d) list_double_large_graphic_pane_g4_cp

0xa602,	// (0x00015155) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa602,	// (0x00015155) list_double_large_graphic_pane_t1_cp2

0xa619,	// (0x0001516c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa619,	// (0x0001516c) list_double_large_graphic_pane_t2_cp2

0x896f,	// (0x000134c2) list_double2_graphic_pane_g1_cp2_ParamLimits

0x896f,	// (0x000134c2) list_double2_graphic_pane_g1_cp2

0x897d,	// (0x000134d0) list_double2_graphic_pane_g2_cp2_ParamLimits

0x897d,	// (0x000134d0) list_double2_graphic_pane_g2_cp2

0x898e,	// (0x000134e1) list_double2_graphic_pane_g3_cp2

0x8998,	// (0x000134eb) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8998,	// (0x000134eb) list_double2_graphic_pane_t1_cp2

0x89ae,	// (0x00013501) list_double2_graphic_pane_t2_cp2_ParamLimits

0x89ae,	// (0x00013501) list_double2_graphic_pane_t2_cp2

0x89c0,	// (0x00013513) list_single_number_heading_pane_g1_cp2_ParamLimits

0x89c0,	// (0x00013513) list_single_number_heading_pane_g1_cp2

0x89cc,	// (0x0001351f) list_single_number_heading_pane_g2_cp2

0x89d4,	// (0x00013527) list_single_number_heading_pane_t1_cp2_ParamLimits

0x89d4,	// (0x00013527) list_single_number_heading_pane_t1_cp2

0x89ea,	// (0x0001353d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x89ea,	// (0x0001353d) list_single_number_heading_pane_t2_cp2

0x89fc,	// (0x0001354f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x89fc,	// (0x0001354f) list_single_number_heading_pane_t3_cp2

0x89c0,	// (0x00013513) list_single_heading_pane_g1_cp2_ParamLimits

0x89c0,	// (0x00013513) list_single_heading_pane_g1_cp2

0x89cc,	// (0x0001351f) list_single_heading_pane_g2_cp2

0x89d4,	// (0x00013527) list_single_heading_pane_t1_cp2_ParamLimits

0x89d4,	// (0x00013527) list_single_heading_pane_t1_cp2

0xa3e2,	// (0x00014f35) list_single_heading_pane_t2_cp2_ParamLimits

0xa3e2,	// (0x00014f35) list_single_heading_pane_t2_cp2

0xa32a,	// (0x00014e7d) list_double_graphic_pane_g1_cp2_ParamLimits

0xa32a,	// (0x00014e7d) list_double_graphic_pane_g1_cp2

0xa336,	// (0x00014e89) list_double_graphic_pane_g2_cp2_ParamLimits

0xa336,	// (0x00014e89) list_double_graphic_pane_g2_cp2

0xa345,	// (0x00014e98) list_double_graphic_pane_g3_cp2

0xa34d,	// (0x00014ea0) list_double_graphic_pane_t1_cp2_ParamLimits

0xa34d,	// (0x00014ea0) list_double_graphic_pane_t1_cp2

0xa363,	// (0x00014eb6) list_double_graphic_pane_t2_cp2_ParamLimits

0xa363,	// (0x00014eb6) list_double_graphic_pane_t2_cp2

0x8a71,	// (0x000135c4) list_double_number_pane_g1_cp2_ParamLimits

0x8a71,	// (0x000135c4) list_double_number_pane_g1_cp2

0x8a7d,	// (0x000135d0) list_double_number_pane_g2_cp2

0xa2ee,	// (0x00014e41) list_double_number_pane_t1_cp2_ParamLimits

0xa2ee,	// (0x00014e41) list_double_number_pane_t1_cp2

0xa302,	// (0x00014e55) list_double_number_pane_t2_cp2_ParamLimits

0xa302,	// (0x00014e55) list_double_number_pane_t2_cp2

0xa318,	// (0x00014e6b) list_double_number_pane_t3_cp2_ParamLimits

0xa318,	// (0x00014e6b) list_double_number_pane_t3_cp2

0xa1d7,	// (0x00014d2a) list_single_graphic_pane_g1_cp2_ParamLimits

0xa1d7,	// (0x00014d2a) list_single_graphic_pane_g1_cp2

0x77b5,	// (0x00012308) list_single_graphic_pane_g2_cp2_ParamLimits

0x77b5,	// (0x00012308) list_single_graphic_pane_g2_cp2

0x8ad5,	// (0x00013628) list_single_graphic_pane_g3_cp2

0xa1ad,	// (0x00014d00) list_single_graphic_pane_t1_cp2_ParamLimits

0xa1ad,	// (0x00014d00) list_single_graphic_pane_t1_cp2

0x77b5,	// (0x00012308) list_single_number_pane_g1_cp2_ParamLimits

0x77b5,	// (0x00012308) list_single_number_pane_g1_cp2

0x8ad5,	// (0x00013628) list_single_number_pane_g2_cp2

0xa1ad,	// (0x00014d00) list_single_number_pane_t1_cp2_ParamLimits

0xa1ad,	// (0x00014d00) list_single_number_pane_t1_cp2

0xa1c3,	// (0x00014d16) list_single_number_pane_t2_cp2_ParamLimits

0xa1c3,	// (0x00014d16) list_single_number_pane_t2_cp2

0x88d5,	// (0x00013428) list_double2_pane_g1_cp2_ParamLimits

0x88d5,	// (0x00013428) list_double2_pane_g1_cp2

0x88e6,	// (0x00013439) list_double2_pane_g2_cp2

0x8a49,	// (0x0001359c) list_double2_pane_t1_cp2_ParamLimits

0x8a49,	// (0x0001359c) list_double2_pane_t1_cp2

0x8a5f,	// (0x000135b2) list_double2_pane_t2_cp2_ParamLimits

0x8a5f,	// (0x000135b2) list_double2_pane_t2_cp2

0x8a71,	// (0x000135c4) list_double_pane_g1_cp2_ParamLimits

0x8a71,	// (0x000135c4) list_double_pane_g1_cp2

0x8a7d,	// (0x000135d0) list_double_pane_g2_cp2

0x8a85,	// (0x000135d8) list_double_pane_t1_cp2_ParamLimits

0x8a85,	// (0x000135d8) list_double_pane_t1_cp2

0x8a9b,	// (0x000135ee) list_double_pane_t2_cp2_ParamLimits

0x8a9b,	// (0x000135ee) list_double_pane_t2_cp2

0x8ac5,	// (0x00013618) list_single_pane_cp2_g3

0x77b5,	// (0x00012308) list_single_pane_g1_cp2_ParamLimits

0x77b5,	// (0x00012308) list_single_pane_g1_cp2

0x8ad5,	// (0x00013628) list_single_pane_g2_cp2

0x8add,	// (0x00013630) list_single_pane_t1_cp2_ParamLimits

0x8add,	// (0x00013630) list_single_pane_t1_cp2

0x8af5,	// (0x00013648) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8af5,	// (0x00013648) list_single_large_graphic_pane_g1_cp2

0x8b01,	// (0x00013654) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8b01,	// (0x00013654) list_single_large_graphic_pane_g2_cp2

0x8b0d,	// (0x00013660) list_single_large_graphic_pane_g3_cp2

0x8b15,	// (0x00013668) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8b15,	// (0x00013668) list_single_large_graphic_pane_g4_cp1

0x8b2f,	// (0x00013682) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8b2f,	// (0x00013682) list_single_large_graphic_pane_t1_cp2

0xa179,	// (0x00014ccc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa179,	// (0x00014ccc) list_single_graphic_heading_pane_g1_cp2

0xa146,	// (0x00014c99) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa146,	// (0x00014c99) list_single_graphic_heading_pane_g4_cp2

0x8ad5,	// (0x00013628) list_single_graphic_heading_pane_g5_cp2

0xa185,	// (0x00014cd8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa185,	// (0x00014cd8) list_single_graphic_heading_pane_t1_cp2

0xa19b,	// (0x00014cee) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa19b,	// (0x00014cee) list_single_graphic_heading_pane_t2_cp2

0xa13a,	// (0x00014c8d) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa13a,	// (0x00014c8d) list_single_2graphic_pane_g1_cp2

0xa146,	// (0x00014c99) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa146,	// (0x00014c99) list_single_2graphic_pane_g2_cp2

0x8ad5,	// (0x00013628) list_single_2graphic_pane_g3_cp2

0xa157,	// (0x00014caa) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa157,	// (0x00014caa) list_single_2graphic_pane_g4_cp2

0xa163,	// (0x00014cb6) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa163,	// (0x00014cb6) list_single_2graphic_pane_t1_cp2

0x6ea4,	// (0x000119f7) list_highlight_pane_g10_cp1

0x9d12,	// (0x00014865) list_highlight_pane_g1_cp1

0x9d1a,	// (0x0001486d) list_highlight_pane_g2_cp1

0x9d22,	// (0x00014875) list_highlight_pane_g3_cp1

0x9d2a,	// (0x0001487d) list_highlight_pane_g4_cp1

0x9d32,	// (0x00014885) list_highlight_pane_g5_cp1

0x9d3a,	// (0x0001488d) list_highlight_pane_g6_cp1

0x9d42,	// (0x00014895) list_highlight_pane_g7_cp1

0x9d4a,	// (0x0001489d) list_highlight_pane_g8_cp1

0x9d52,	// (0x000148a5) list_highlight_pane_g9_cp1

0x9c2a,	// (0x0001477d) form_field_slider_pane_t3

0x9c38,	// (0x0001478b) form_field_slider_pane_t4

0x9c46,	// (0x00014799) slider_form_pane_ParamLimits

0x9c46,	// (0x00014799) slider_form_pane

0x6eae,	// (0x00011a01) control_abbreviations

0x6eae,	// (0x00011a01) control_conventions

0x6eae,	// (0x00011a01) control_definitions

0x6eae,	// (0x00011a01) format_table_attribute

0xa42c,	// (0x00014f7f) bg_popup_preview_window_pane_g9

0x6eae,	// (0x00011a01) format_table_data2

0x6eae,	// (0x00011a01) format_table_data3

0x6eae,	// (0x00011a01) format_table_data_example

0x0008,

0x6eae,	// (0x00011a01) intro_purpose

0xf8e5,	// (0x0001a438) bg_popup_preview_window_pane_g

0x6eae,	// (0x00011a01) texts_category

0x6eae,	// (0x00011a01) texts_graphics

0x8b45,	// (0x00013698) text_digital

0x8b54,	// (0x000136a7) text_primary

0x8b63,	// (0x000136b6) text_primary_small

0x8b72,	// (0x000136c5) text_secondary

0x8b81,	// (0x000136d4) text_title

0xac52,	// (0x000157a5) bg_passive_tab_pane_g1_cp3_srt

0x87e1,	// (0x00013334) bg_passive_tab_pane_g2_cp3_srt

0xac5b,	// (0x000157ae) bg_passive_tab_pane_g3_cp3_srt

0x6f8e,	// (0x00011ae1) bg_active_tab_pane_cp3_srt_ParamLimits

0x6f8e,	// (0x00011ae1) bg_active_tab_pane_cp3_srt

0xac64,	// (0x000157b7) tabs_4_active_pane_srt_g1

0xac6c,	// (0x000157bf) tabs_4_active_pane_srt_t1_ParamLimits

0xac6c,	// (0x000157bf) tabs_4_active_pane_srt_t1

0xac52,	// (0x000157a5) bg_active_tab_pane_g1_cp3_copy1

0x87e1,	// (0x00013334) bg_active_tab_pane_g2_cp3_copy1

0xac5b,	// (0x000157ae) bg_active_tab_pane_g3_cp3_copy1

0x6f8e,	// (0x00011ae1) tabs_2_long_active_pane_srt_ParamLimits

0x6f8e,	// (0x00011ae1) tabs_2_long_active_pane_srt

0x6f8e,	// (0x00011ae1) tabs_2_long_passive_pane_srt_ParamLimits

0x6f8e,	// (0x00011ae1) tabs_2_long_passive_pane_srt

0x808f,	// (0x00012be2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x808f,	// (0x00012be2) bg_passive_tab_pane_cp4_srt

0xa86d,	// (0x000153c0) bg_passive_tab_pane_g1_cp4_srt

0x87e1,	// (0x00013334) bg_passive_tab_pane_g2_cp4_srt

0xa876,	// (0x000153c9) bg_passive_tab_pane_g3_cp4_srt

0x806e,	// (0x00012bc1) bg_active_tab_pane_cp4_srt_ParamLimits

0x806e,	// (0x00012bc1) bg_active_tab_pane_cp4_srt

0xa87f,	// (0x000153d2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa87f,	// (0x000153d2) tabs_2_long_active_pane_srt_t1

0xa86d,	// (0x000153c0) bg_active_tab_pane_g1_cp4_srt

0x87e1,	// (0x00013334) bg_active_tab_pane_g2_cp4_srt

0xa876,	// (0x000153c9) bg_active_tab_pane_g3_cp4_srt

0x7223,	// (0x00011d76) tabs_3_long_active_pane_srt_ParamLimits

0x7223,	// (0x00011d76) tabs_3_long_active_pane_srt

0x7223,	// (0x00011d76) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7223,	// (0x00011d76) tabs_3_long_passive_pane_cp_srt

0x7223,	// (0x00011d76) tabs_3_long_passive_pane_srt_ParamLimits

0x7223,	// (0x00011d76) tabs_3_long_passive_pane_srt

0x808f,	// (0x00012be2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x808f,	// (0x00012be2) bg_passive_tab_pane_cp5_srt

0x886b,	// (0x000133be) bg_passive_tab_pane_g1_cp5_srt

0x87e1,	// (0x00013334) bg_passive_tab_pane_g2_cp5_srt

0x8874,	// (0x000133c7) bg_passive_tab_pane_g3_cp5_srt

0x806e,	// (0x00012bc1) bg_active_tab_pane_cp5_srt_ParamLimits

0x806e,	// (0x00012bc1) bg_active_tab_pane_cp5_srt

0xa85b,	// (0x000153ae) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa85b,	// (0x000153ae) tabs_3_long_active_pane_srt_t1

0x886b,	// (0x000133be) bg_active_tab_pane_g1_cp5_srt

0x87e1,	// (0x00013334) bg_active_tab_pane_g2_cp5_srt

0x8874,	// (0x000133c7) bg_active_tab_pane_g3_cp5_srt

0xa84d,	// (0x000153a0) navi_text_pane_srt_t1

0xa845,	// (0x00015398) navi_icon_pane_srt_g1

0x8d46,	// (0x00013899) midp_editing_number_pane_srt

0x8b90,	// (0x000136e3) midp_ticker_pane_srt

0x8d4e,	// (0x000138a1) midp_ticker_pane_srt_g1

0x8d56,	// (0x000138a9) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001a2c0) midp_ticker_pane_srt_g

0x8d5e,	// (0x000138b1) midp_ticker_pane_srt_t1

0xa836,	// (0x00015389) midp_editing_number_pane_t1_copy1

0x808f,	// (0x00012be2) listscroll_midp_pane

0x808f,	// (0x00012be2) midp_form_pane

0x8bfe,	// (0x00013751) midp_info_popup_window_ParamLimits

0x8bfe,	// (0x00013751) midp_info_popup_window

0x7f59,	// (0x00012aac) bg_popup_sub_pane_cp50_ParamLimits

0x7f59,	// (0x00012aac) bg_popup_sub_pane_cp50

0x9947,	// (0x0001449a) listscroll_midp_info_pane_ParamLimits

0x9947,	// (0x0001449a) listscroll_midp_info_pane

0x992f,	// (0x00014482) listscroll_form_midp_pane_ParamLimits

0x992f,	// (0x00014482) listscroll_form_midp_pane

0x993b,	// (0x0001448e) scroll_bar_cp050

0x990f,	// (0x00014462) list_midp_pane

0xb96d,	// (0x000164c0) signal_pane_g2_cp

0x9849,	// (0x0001439c) listscroll_midp_info_pane_t1_ParamLimits

0x9849,	// (0x0001439c) listscroll_midp_info_pane_t1

0x9861,	// (0x000143b4) listscroll_midp_info_pane_t2_ParamLimits

0x9861,	// (0x000143b4) listscroll_midp_info_pane_t2

0x989f,	// (0x000143f2) listscroll_midp_info_pane_t3_ParamLimits

0x989f,	// (0x000143f2) listscroll_midp_info_pane_t3

0x98d9,	// (0x0001442c) listscroll_midp_info_pane_t4_ParamLimits

0x98d9,	// (0x0001442c) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0001a373) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0001a373) listscroll_midp_info_pane_t

0x801b,	// (0x00012b6e) scroll_pane_cp21

0x97eb,	// (0x0001433e) form_midp_field_choice_group_pane

0x97f4,	// (0x00014347) form_midp_field_text_pane

0x982f,	// (0x00014382) form_midp_field_time_pane

0x9837,	// (0x0001438a) form_midp_gauge_slider_pane

0x9840,	// (0x00014393) form_midp_gauge_wait_pane

0x6eae,	// (0x00011a01) form_midp_image_pane

0x97b5,	// (0x00014308) list_single_midp_pane_ParamLimits

0x97b5,	// (0x00014308) list_single_midp_pane

0x9769,	// (0x000142bc) form_midp_field_text_pane_t1

0x9512,	// (0x00014065) input_focus_pane_cp050

0x97a4,	// (0x000142f7) list_midp_form_text_pane

0x9738,	// (0x0001428b) form_midp_field_choice_group_pane_t1

0x9746,	// (0x00014299) input_focus_pane_cp051

0x975a,	// (0x000142ad) list_midp_choice_pane

0x6eae,	// (0x00011a01) status_idle_pane

0x971c,	// (0x0001426f) form_midp_field_time_pane_t1

0x6ea4,	// (0x000119f7) wait_anim_pane_g2_copy1

0x972a,	// (0x0001427d) form_midp_field_time_pane_t2

0x0001,

0x8cae,	// (0x00013801) aid_navinavi_width_2_pane

0xf81b,	// (0x0001a36e) form_midp_field_time_pane_t

0x6eae,	// (0x00011a01) input_focus_pane_cp052

0x6eae,	// (0x00011a01) bg_input_focus_pane_cp040

0x96dc,	// (0x0001422f) form_midp_gauge_slider_pane_t1

0x96ea,	// (0x0001423d) form_midp_gauge_slider_pane_t2

0x96f8,	// (0x0001424b) form_midp_gauge_slider_pane_t3

0x9706,	// (0x00014259) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0001a365) form_midp_gauge_slider_pane_t

0x9714,	// (0x00014267) form_midp_slider_pane

0x6f8e,	// (0x00011ae1) bg_input_focus_pane_cp041_ParamLimits

0x6f8e,	// (0x00011ae1) bg_input_focus_pane_cp041

0x96a9,	// (0x000141fc) form_midp_gauge_wait_pane_t1_ParamLimits

0x96a9,	// (0x000141fc) form_midp_gauge_wait_pane_t1

0x96bb,	// (0x0001420e) form_midp_gauge_wait_pane_t2_ParamLimits

0x96bb,	// (0x0001420e) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x0001a360) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x0001a360) form_midp_gauge_wait_pane_t

0x96cd,	// (0x00014220) form_midp_wait_pane_ParamLimits

0x96cd,	// (0x00014220) form_midp_wait_pane

0x9673,	// (0x000141c6) form_midp_image_pane_g1

0x967c,	// (0x000141cf) form_midp_image_pane_t1

0x968b,	// (0x000141de) form_midp_image_pane_t2

0x969a,	// (0x000141ed) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0001a359) form_midp_image_pane_t

0x965b,	// (0x000141ae) list_single_midp_pane_g1

0x9664,	// (0x000141b7) list_single_midp_pane_t1

0x962c,	// (0x0001417f) list_midp_form_item_pane_ParamLimits

0x962c,	// (0x0001417f) list_midp_form_item_pane

0x8c56,	// (0x000137a9) list_midp_form_item_pane_t1

0x8c65,	// (0x000137b8) midp_ticker_pane_g1

0x8c71,	// (0x000137c4) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001a2a6) midp_ticker_pane_g

0x8c7d,	// (0x000137d0) midp_ticker_pane_t1

0xaaac,	// (0x000155ff) midp_editing_number_pane_t1

0xaa8a,	// (0x000155dd) midp_editing_number_pane

0xaa99,	// (0x000155ec) midp_ticker_pane

0xa814,	// (0x00015367) ai_message_heading_pane

0x6eae,	// (0x00011a01) bg_popup_window_pane_cp14

0xa81c,	// (0x0001536f) listscroll_ai_message_pane

0xa79e,	// (0x000152f1) ai_message_heading_pane_g1_ParamLimits

0xa79e,	// (0x000152f1) ai_message_heading_pane_g1

0xa7aa,	// (0x000152fd) ai_message_heading_pane_g2_ParamLimits

0xa7aa,	// (0x000152fd) ai_message_heading_pane_g2

0xa7b6,	// (0x00015309) ai_message_heading_pane_g3_ParamLimits

0xa7b6,	// (0x00015309) ai_message_heading_pane_g3

0xa7c2,	// (0x00015315) ai_message_heading_pane_g4_ParamLimits

0xa7c2,	// (0x00015315) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0001a49a) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0001a49a) ai_message_heading_pane_g

0xa7ce,	// (0x00015321) ai_message_heading_pane_t1_ParamLimits

0xa7ce,	// (0x00015321) ai_message_heading_pane_t1

0xa7e8,	// (0x0001533b) ai_message_heading_pane_t2_ParamLimits

0xa7e8,	// (0x0001533b) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0001a4a3) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0001a4a3) ai_message_heading_pane_t

0xa7fa,	// (0x0001534d) bg_popup_heading_pane_cp1_ParamLimits

0xa7fa,	// (0x0001534d) bg_popup_heading_pane_cp1

0xa78c,	// (0x000152df) list_ai_message_pane_ParamLimits

0xa78c,	// (0x000152df) list_ai_message_pane

0x801b,	// (0x00012b6e) scroll_pane_cp10

0xa728,	// (0x0001527b) list_ai_message_pane_g1

0xa730,	// (0x00015283) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0001a477) list_ai_message_pane_g

0xa738,	// (0x0001528b) list_ai_message_pane_t1_ParamLimits

0xa738,	// (0x0001528b) list_ai_message_pane_t1

0xa74d,	// (0x000152a0) list_ai_message_pane_t2_ParamLimits

0xa74d,	// (0x000152a0) list_ai_message_pane_t2

0xa762,	// (0x000152b5) list_ai_message_pane_t3_ParamLimits

0xa762,	// (0x000152b5) list_ai_message_pane_t3

0xa777,	// (0x000152ca) list_ai_message_pane_t4_ParamLimits

0xa777,	// (0x000152ca) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0001a47c) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0001a47c) list_ai_message_pane_t

0xa712,	// (0x00015265) cell_ai_soft_ind_pane_ParamLimits

0xa712,	// (0x00015265) cell_ai_soft_ind_pane

0x8c8f,	// (0x000137e2) cell_ai_soft_ind_pane_g1_ParamLimits

0x8c8f,	// (0x000137e2) cell_ai_soft_ind_pane_g1

0x6eae,	// (0x00011a01) grid_highlight_cp1

0x8c9c,	// (0x000137ef) text_secondary_cp56_ParamLimits

0x8c9c,	// (0x000137ef) text_secondary_cp56

0xa6e7,	// (0x0001523a) example_general_pane_ParamLimits

0xa6e7,	// (0x0001523a) example_general_pane

0xa6f3,	// (0x00015246) example_parent_pane_g1_ParamLimits

0xa6f3,	// (0x00015246) example_parent_pane_g1

0xa6ff,	// (0x00015252) example_parent_pane_t1_ParamLimits

0xa6ff,	// (0x00015252) example_parent_pane_t1

0x578e,	// (0x000102e1) popup_preview_text_window_ParamLimits

0x578e,	// (0x000102e1) popup_preview_text_window

0x8acd,	// (0x00013620) list_single_pane_cp2_g4

0x72cd,	// (0x00011e20) bg_popup_preview_window_pane_ParamLimits

0x72cd,	// (0x00011e20) bg_popup_preview_window_pane

0xa434,	// (0x00014f87) popup_preview_text_window_t1_ParamLimits

0xa434,	// (0x00014f87) popup_preview_text_window_t1

0xa452,	// (0x00014fa5) popup_preview_text_window_t2_ParamLimits

0xa452,	// (0x00014fa5) popup_preview_text_window_t2

0xa49b,	// (0x00014fee) popup_preview_text_window_t3_ParamLimits

0xa49b,	// (0x00014fee) popup_preview_text_window_t3

0xa4e0,	// (0x00015033) popup_preview_text_window_t4_ParamLimits

0xa4e0,	// (0x00015033) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0001a44b) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0001a44b) popup_preview_text_window_t

0xa55e,	// (0x000150b1) scroll_pane_cp11

0x93ee,	// (0x00013f41) bg_popup_preview_window_pane_g1

0xa3f4,	// (0x00014f47) bg_popup_preview_window_pane_g2

0xa3fc,	// (0x00014f4f) bg_popup_preview_window_pane_g3

0xa404,	// (0x00014f57) bg_popup_preview_window_pane_g4

0xa40c,	// (0x00014f5f) bg_popup_preview_window_pane_g5

0xa414,	// (0x00014f67) bg_popup_preview_window_pane_g6

0xa41c,	// (0x00014f6f) bg_popup_preview_window_pane_g7

0xa424,	// (0x00014f77) bg_popup_preview_window_pane_g8

0x499b,	// (0x0000f4ee) aid_popup_width_pane

0x576c,	// (0x000102bf) popup_midp_note_alarm_window_ParamLimits

0x576c,	// (0x000102bf) popup_midp_note_alarm_window

0x7d1d,	// (0x00012870) data_form_pane_ParamLimits

0x7d29,	// (0x0001287c) form_field_data_pane_g1

0x7d33,	// (0x00012886) form_field_data_pane_t1_ParamLimits

0x7d4d,	// (0x000128a0) input_focus_pane_ParamLimits

0x7d5b,	// (0x000128ae) data_form_wide_pane_ParamLimits

0x7d67,	// (0x000128ba) form_field_data_wide_pane_g1

0x7d87,	// (0x000128da) form_field_data_wide_pane_t1_ParamLimits

0x7573,	// (0x000120c6) input_focus_pane_cp6_ParamLimits

0x7fc6,	// (0x00012b19) input_popup_find_pane_g1_ParamLimits

0x7fc6,	// (0x00012b19) input_popup_find_pane_g1

0x4f0b,	// (0x0000fa5e) aid_navi_side_left_pane

0x4f20,	// (0x0000fa73) aid_navi_side_right_pane

0x9e0d,	// (0x00014960) bg_popup_window_pane_cp30_ParamLimits

0x9e0d,	// (0x00014960) bg_popup_window_pane_cp30

0x9e87,	// (0x000149da) popup_midp_note_alarm_window_g1_ParamLimits

0x9e87,	// (0x000149da) popup_midp_note_alarm_window_g1

0x9eb7,	// (0x00014a0a) popup_midp_note_alarm_window_t1_ParamLimits

0x9eb7,	// (0x00014a0a) popup_midp_note_alarm_window_t1

0x9f58,	// (0x00014aab) popup_midp_note_alarm_window_t2_ParamLimits

0x9f58,	// (0x00014aab) popup_midp_note_alarm_window_t2

0xa006,	// (0x00014b59) popup_midp_note_alarm_window_t3_ParamLimits

0xa006,	// (0x00014b59) popup_midp_note_alarm_window_t3

0xa038,	// (0x00014b8b) popup_midp_note_alarm_window_t4_ParamLimits

0xa038,	// (0x00014b8b) popup_midp_note_alarm_window_t4

0xa05e,	// (0x00014bb1) popup_midp_note_alarm_window_t5_ParamLimits

0xa05e,	// (0x00014bb1) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0001a3e8) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0001a3e8) popup_midp_note_alarm_window_t

0xa10a,	// (0x00014c5d) wait_bar_pane_cp1_ParamLimits

0xa10a,	// (0x00014c5d) wait_bar_pane_cp1

0x6eae,	// (0x00011a01) wait_anim_pane_copy1

0x6eae,	// (0x00011a01) wait_border_pane_copy1

0x9aeb,	// (0x0001463e) wait_border_pane_g1_copy1

0x7d9e,	// (0x000128f1) form_field_popup_pane_g1

0x7da6,	// (0x000128f9) form_field_popup_pane_t1_ParamLimits

0x7d4d,	// (0x000128a0) input_focus_pane_cp7_ParamLimits

0x7dc0,	// (0x00012913) list_form_pane_ParamLimits

0x7dcc,	// (0x0001291f) form_field_popup_wide_pane_g1

0x7dd4,	// (0x00012927) form_field_popup_wide_pane_t1_ParamLimits

0x7d4d,	// (0x000128a0) input_focus_pane_cp8_ParamLimits

0x7de9,	// (0x0001293c) list_form_wide_pane_ParamLimits

0xace7,	// (0x0001583a) aid_size_cell_graphic_pane

0x7ec2,	// (0x00012a15) data_form_pane_t1_ParamLimits

0xaa57,	// (0x000155aa) data_form_wide_pane_t1_ParamLimits

0x8fad,	// (0x00013b00) bg_status_flat_pane

0x6eee,	// (0x00011a41) title_pane_t1_ParamLimits

0x6f56,	// (0x00011aa9) title_pane_t2_ParamLimits

0x6f7c,	// (0x00011acf) title_pane_t3_ParamLimits

0xf557,	// (0x0001a0aa) title_pane_t_ParamLimits

0x8496,	// (0x00012fe9) level_1_signal_ParamLimits

0x84a3,	// (0x00012ff6) level_2_signal_ParamLimits

0x84b0,	// (0x00013003) level_3_signal_ParamLimits

0x84bd,	// (0x00013010) level_4_signal_ParamLimits

0x84ca,	// (0x0001301d) level_5_signal_ParamLimits

0x84d7,	// (0x0001302a) level_6_signal_ParamLimits

0x84e4,	// (0x00013037) level_7_signal_ParamLimits

0x8496,	// (0x00012fe9) level_1_battery_ParamLimits

0x84a3,	// (0x00012ff6) level_2_battery_ParamLimits

0x84b0,	// (0x00013003) level_3_battery_ParamLimits

0x84bd,	// (0x00013010) level_4_battery_ParamLimits

0x84ca,	// (0x0001301d) level_5_battery_ParamLimits

0x84d7,	// (0x0001302a) level_6_battery_ParamLimits

0x84e4,	// (0x00013037) level_7_battery_ParamLimits

0x9d12,	// (0x00014865) bg_status_flat_pane_g1

0x9d1a,	// (0x0001486d) bg_status_flat_pane_g2

0x9d22,	// (0x00014875) bg_status_flat_pane_g3

0x9d2a,	// (0x0001487d) bg_status_flat_pane_g4

0x9d32,	// (0x00014885) bg_status_flat_pane_g5

0x9d3a,	// (0x0001488d) bg_status_flat_pane_g6

0x9d42,	// (0x00014895) bg_status_flat_pane_g7

0x6fa4,	// (0x00011af7) tabs_3_active_pane_t1_ParamLimits

0x6fa4,	// (0x00011af7) tabs_3_passive_pane_t1_ParamLimits

0x6fbe,	// (0x00011b11) tabs_4_active_pane_t1_ParamLimits

0x6fbe,	// (0x00011b11) tabs_4_1_passive_pane_t1_ParamLimits

0x805c,	// (0x00012baf) tabs_2_active_pane_t1_ParamLimits

0x805c,	// (0x00012baf) tabs_2_passive_pane_t1_ParamLimits

0x806e,	// (0x00012bc1) bg_active_tab_pane_cp4_ParamLimits

0x807c,	// (0x00012bcf) tabs_2_long_active_pane_t1_ParamLimits

0x808f,	// (0x00012be2) bg_passive_tab_pane_cp4_ParamLimits

0x5aa9,	// (0x000105fc) list_single_midp_graphic_pane_t1_ParamLimits

0x806e,	// (0x00012bc1) bg_active_tab_pane_cp5_ParamLimits

0x809b,	// (0x00012bee) tabs_3_long_active_pane_t1_ParamLimits

0x808f,	// (0x00012be2) bg_passive_tab_pane_cp5_ParamLimits

0x5aa9,	// (0x000105fc) list_single_midp_graphic_pane_t1

0x8fad,	// (0x00013b00) bg_status_flat_pane_ParamLimits

0x9070,	// (0x00013bc3) indicator_pane_cp2_ParamLimits

0x9070,	// (0x00013bc3) indicator_pane_cp2

0x919b,	// (0x00013cee) navi_pane_srt_ParamLimits

0x919b,	// (0x00013cee) navi_pane_srt

0x91bf,	// (0x00013d12) popup_clock_digital_analogue_window_cp1

0x7085,	// (0x00011bd8) indicator_pane_t1

0x8b90,	// (0x000136e3) copy_highlight_pane

0x8b90,	// (0x000136e3) cursor_graphics_pane

0x8b90,	// (0x000136e3) graphic_within_text_pane

0x8b90,	// (0x000136e3) link_highlight_pane

0xa521,	// (0x00015074) popup_preview_text_window_t5_ParamLimits

0xa521,	// (0x00015074) popup_preview_text_window_t5

0x8cb6,	// (0x00013809) cursor_digital_pane

0x8cb6,	// (0x00013809) cursor_primary_pane

0x8cc7,	// (0x0001381a) cursor_primary_small_pane

0x8ccf,	// (0x00013822) cursor_secondary_pane

0x8cd7,	// (0x0001382a) cursor_title_pane

0x8cb6,	// (0x00013809) link_highlight_digital_pane

0x8cbe,	// (0x00013811) link_highlight_primary_pane

0x8cc7,	// (0x0001381a) link_highlight_primary_small_pane

0x8ccf,	// (0x00013822) link_highlight_secondary_pane

0x8cd7,	// (0x0001382a) link_highlight_title_pane

0x8cb6,	// (0x00013809) copy_highlight_digital_pane

0x8cb6,	// (0x00013809) copy_highlight_primary_pane

0x8cc7,	// (0x0001381a) copy_highlight_primary_small_pane

0x8ccf,	// (0x00013822) copy_highlight_secondary_pane

0x8cd7,	// (0x0001382a) copy_highlight_title_pane

0x8ccf,	// (0x00013822) graphic_text_digital_pane

0x9db0,	// (0x00014903) graphic_text_primary_pane

0x9db9,	// (0x0001490c) graphic_text_primary_small_pane

0x8cc7,	// (0x0001381a) graphic_text_secondary_pane

0x8cb6,	// (0x00013809) graphic_text_title_pane

0x8cdf,	// (0x00013832) cursor_primary_pane_g1

0x9da2,	// (0x000148f5) cursor_text_primary_t1

0x9d8a,	// (0x000148dd) cursor_primary_small_pane_g1

0x9d94,	// (0x000148e7) cursor_text_primary_small_t1

0x9d72,	// (0x000148c5) cursor_primary_small_pane_g1_copy1

0x9d7c,	// (0x000148cf) cursor_text_primary_small_t1_copy1

0x9d5a,	// (0x000148ad) cursor_text_title_t1

0x9d68,	// (0x000148bb) cursor_title_pane_g1

0x8cdf,	// (0x00013832) cursor_digital_pane_g1

0x8ce9,	// (0x0001383c) cursor_text_digital_t1

0x9cfb,	// (0x0001484e) link_highlight_primary_pane_g1

0x9d03,	// (0x00014856) link_highlight_primary_pane_t1

0x8cf7,	// (0x0001384a) link_highlight_primary_small_pane_g1

0x8cff,	// (0x00013852) link_highlight_primary_small_pane_t1

0x8cf7,	// (0x0001384a) link_highlight_secondary_pane_g1

0x8d0e,	// (0x00013861) link_highlight_secondary_pane_t1

0x9c6f,	// (0x000147c2) link_highlight_title_pane_g1

0x9c77,	// (0x000147ca) link_highlight_title_pane_t1

0x9c58,	// (0x000147ab) link_highlight_digital_pane_g1

0x9c60,	// (0x000147b3) link_highlight_digital_pane_t1

0x9b30,	// (0x00014683) copy_highlight_primary_pane_g1

0x9b38,	// (0x0001468b) copy_highlight_primary_pane_t1

0x9b0a,	// (0x0001465d) copy_highlight_primary_small_pane_g1

0x9b21,	// (0x00014674) copy_highlight_primary_small_pane_t1

0x8d1d,	// (0x00013870) copy_highlight_secondary_pane_g1

0x8d25,	// (0x00013878) copy_highlight_secondary_pane_t1

0x9b0a,	// (0x0001465d) copy_highlight_title_pane_g1

0x9b12,	// (0x00014665) copy_highlight_title_pane_t1

0x9b30,	// (0x00014683) copy_highlight_digital_pane_g1

0xaeb1,	// (0x00015a04) copy_highlight_digital_pane_t1

0xae05,	// (0x00015958) graphic_text_primary_pane_g1

0xae95,	// (0x000159e8) graphic_text_primary_pane_t1

0xaea3,	// (0x000159f6) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0001a517) graphic_text_primary_pane_t

0xae71,	// (0x000159c4) graphic_text_primary_small_pane_g1

0xae79,	// (0x000159cc) graphic_text_primary_small_pane_t1

0xae87,	// (0x000159da) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0001a512) graphic_text_primary_small_pane_t

0xae4d,	// (0x000159a0) graphic_text_secondary_pane_g1

0xae55,	// (0x000159a8) graphic_text_secondary_pane_t1

0xae63,	// (0x000159b6) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x0001a50d) graphic_text_secondary_pane_t

0xae29,	// (0x0001597c) graphic_text_title_pane_g1

0xae31,	// (0x00015984) graphic_text_title_pane_t1

0xae3f,	// (0x00015992) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0001a508) graphic_text_title_pane_t

0xae05,	// (0x00015958) graphic_text_digital_pane_g1

0xae0d,	// (0x00015960) graphic_text_digital_pane_t1

0xae1b,	// (0x0001596e) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0001a503) graphic_text_digital_pane_t

0x6f8e,	// (0x00011ae1) navi_icon_pane_srt_ParamLimits

0x6f8e,	// (0x00011ae1) navi_icon_pane_srt

0x6eae,	// (0x00011a01) navi_midp_pane_srt

0x6eae,	// (0x00011a01) navi_navi_pane_srt

0x6f8e,	// (0x00011ae1) navi_text_pane_srt_ParamLimits

0x6f8e,	// (0x00011ae1) navi_text_pane_srt

0xadd0,	// (0x00015923) navi_navi_icon_text_pane_srt

0xadd8,	// (0x0001592b) navi_navi_pane_srt_g1_ParamLimits

0xadd8,	// (0x0001592b) navi_navi_pane_srt_g1

0xadea,	// (0x0001593d) navi_navi_pane_srt_g2_ParamLimits

0xadea,	// (0x0001593d) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x0001a4fe) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x0001a4fe) navi_navi_pane_srt_g

0xadfc,	// (0x0001594f) navi_navi_tabs_pane_srt

0xadd0,	// (0x00015923) navi_navi_text_pane_srt

0xadd0,	// (0x00015923) navi_navi_volume_pane_srt

0xadc1,	// (0x00015914) navi_navi_text_pane_srt_t1

0x5e1d,	// (0x00010970) navi_navi_volume_pane_srt_g1

0x5e25,	// (0x00010978) volume_small_pane_srt_ParamLimits

0x5e25,	// (0x00010978) volume_small_pane_srt

0x51e2,	// (0x0000fd35) volume_small_pane_srt_g1_ParamLimits

0x51e2,	// (0x0000fd35) volume_small_pane_srt_g1

0x51f2,	// (0x0000fd45) volume_small_pane_srt_g2_ParamLimits

0x51f2,	// (0x0000fd45) volume_small_pane_srt_g2

0x5203,	// (0x0000fd56) volume_small_pane_srt_g3_ParamLimits

0x5203,	// (0x0000fd56) volume_small_pane_srt_g3

0x5214,	// (0x0000fd67) volume_small_pane_srt_g4_ParamLimits

0x5214,	// (0x0000fd67) volume_small_pane_srt_g4

0x5225,	// (0x0000fd78) volume_small_pane_srt_g5_ParamLimits

0x5225,	// (0x0000fd78) volume_small_pane_srt_g5

0x5236,	// (0x0000fd89) volume_small_pane_srt_g6_ParamLimits

0x5236,	// (0x0000fd89) volume_small_pane_srt_g6

0x5247,	// (0x0000fd9a) volume_small_pane_srt_g7_ParamLimits

0x5247,	// (0x0000fd9a) volume_small_pane_srt_g7

0x5258,	// (0x0000fdab) volume_small_pane_srt_g8_ParamLimits

0x5258,	// (0x0000fdab) volume_small_pane_srt_g8

0x5269,	// (0x0000fdbc) volume_small_pane_srt_g9_ParamLimits

0x5269,	// (0x0000fdbc) volume_small_pane_srt_g9

0x527a,	// (0x0000fdcd) volume_small_pane_srt_g10_ParamLimits

0x527a,	// (0x0000fdcd) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001a2ab) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001a2ab) volume_small_pane_srt_g

0x7376,	// (0x00011ec9) query_popup_data_pane_cp2

0xada7,	// (0x000158fa) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xada7,	// (0x000158fa) navi_navi_icon_text_pane_srt_t1

0x9db0,	// (0x00014903) navi_tabs_2_long_pane_srt

0x9db0,	// (0x00014903) navi_tabs_2_pane_srt

0x9db0,	// (0x00014903) navi_tabs_3_long_pane_srt

0x9db0,	// (0x00014903) navi_tabs_3_pane_srt

0x9db0,	// (0x00014903) navi_tabs_4_pane_srt

0x5dfd,	// (0x00010950) tabs_2_active_pane_srt_ParamLimits

0x5dfd,	// (0x00010950) tabs_2_active_pane_srt

0x5e0d,	// (0x00010960) tabs_2_passive_pane_srt_ParamLimits

0x5e0d,	// (0x00010960) tabs_2_passive_pane_srt

0x8ed2,	// (0x00013a25) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8ed2,	// (0x00013a25) bg_passive_tab_pane_cp1_srt

0xad73,	// (0x000158c6) bg_passive_tab_pane_g1_cp1_srt

0x87e1,	// (0x00013334) bg_passive_tab_pane_g2_cp1_srt

0xad7c,	// (0x000158cf) bg_passive_tab_pane_g3_cp1_srt

0x6f8e,	// (0x00011ae1) bg_active_tab_pane_cp1_srt_ParamLimits

0x6f8e,	// (0x00011ae1) bg_active_tab_pane_cp1_srt

0xad85,	// (0x000158d8) tabs_2_active_pane_srt_g1

0xad8d,	// (0x000158e0) tabs_2_active_pane_srt_t1_ParamLimits

0xad8d,	// (0x000158e0) tabs_2_active_pane_srt_t1

0xad73,	// (0x000158c6) bg_active_tab_pane_g1_cp1_srt

0x87e1,	// (0x00013334) bg_active_tab_pane_g2_cp1_srt

0xad7c,	// (0x000158cf) bg_active_tab_pane_g3_cp1_srt

0x5dca,	// (0x0001091d) tabs_3_active_pane_srt_ParamLimits

0x5dca,	// (0x0001091d) tabs_3_active_pane_srt

0x5ddb,	// (0x0001092e) tabs_3_passive_pane_cp_srt_ParamLimits

0x5ddb,	// (0x0001092e) tabs_3_passive_pane_cp_srt

0x5dec,	// (0x0001093f) tabs_3_passive_pane_srt_ParamLimits

0x5dec,	// (0x0001093f) tabs_3_passive_pane_srt

0x8ed2,	// (0x00013a25) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8ed2,	// (0x00013a25) bg_passive_tab_pane_cp2_srt

0x8d34,	// (0x00013887) bg_passive_tab_pane_g1_cp2_srt

0x87e1,	// (0x00013334) bg_passive_tab_pane_g2_cp2_srt

0x8d3d,	// (0x00013890) bg_passive_tab_pane_g3_cp2_srt

0x6f8e,	// (0x00011ae1) bg_active_tab_pane_cp2_srt_ParamLimits

0x6f8e,	// (0x00011ae1) bg_active_tab_pane_cp2_srt

0xad59,	// (0x000158ac) tabs_3_active_pane_srt_g1

0xad61,	// (0x000158b4) tabs_3_active_pane_srt_t1_ParamLimits

0xad61,	// (0x000158b4) tabs_3_active_pane_srt_t1

0x8d34,	// (0x00013887) bg_active_tab_pane_g1_cp2_srt

0x87e1,	// (0x00013334) bg_active_tab_pane_g2_cp2_srt

0x8d3d,	// (0x00013890) bg_active_tab_pane_g3_cp2_srt

0x5d82,	// (0x000108d5) tabs_4_active_pane_srt_ParamLimits

0x5d82,	// (0x000108d5) tabs_4_active_pane_srt

0x5d94,	// (0x000108e7) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5d94,	// (0x000108e7) tabs_4_passive_pane_cp2_srt

0x53dd,	// (0x0000ff30) aid_size_cell_toolbar

0x808f,	// (0x00012be2) main_idle_act_pane_ParamLimits

0x55a0,	// (0x000100f3) popup_large_graphic_colour_window_ParamLimits

0x5905,	// (0x00010458) popup_toolbar_window_ParamLimits

0x5905,	// (0x00010458) popup_toolbar_window

0xaad7,	// (0x0001562a) list_single_graphic_2heading_pane_ParamLimits

0xaad7,	// (0x0001562a) list_single_graphic_2heading_pane

0x8248,	// (0x00012d9b) aid_size_cell_apps_grid_lsc_pane

0x825a,	// (0x00012dad) aid_size_cell_apps_grid_prt_pane

0x8ed2,	// (0x00013a25) bg_wml_button_pane_cp1_ParamLimits

0x8ed2,	// (0x00013a25) bg_wml_button_pane_cp1

0x9769,	// (0x000142bc) form_midp_field_text_pane_t1_ParamLimits

0x9512,	// (0x00014065) input_focus_pane_cp050_ParamLimits

0x97a4,	// (0x000142f7) list_midp_form_text_pane_ParamLimits

0x9746,	// (0x00014299) input_focus_pane_cp051_ParamLimits

0x975a,	// (0x000142ad) list_midp_choice_pane_ParamLimits

0x95c8,	// (0x0001411b) list_single_2graphic_pane_cp3_ParamLimits

0x95c8,	// (0x0001411b) list_single_2graphic_pane_cp3

0x95f3,	// (0x00014146) list_single_midp_graphic_pane_ParamLimits

0x95f3,	// (0x00014146) list_single_midp_graphic_pane

0x59b0,	// (0x00010503) list_single_graphic_2heading_pane_g1_ParamLimits

0x59b0,	// (0x00010503) list_single_graphic_2heading_pane_g1

0x59bc,	// (0x0001050f) list_single_graphic_2heading_pane_g4_ParamLimits

0x59bc,	// (0x0001050f) list_single_graphic_2heading_pane_g4

0x59c8,	// (0x0001051b) list_single_graphic_2heading_pane_g5_ParamLimits

0x59c8,	// (0x0001051b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001a2fe) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001a2fe) list_single_graphic_2heading_pane_g

0x59d4,	// (0x00010527) list_single_graphic_2heading_pane_t1_ParamLimits

0x59d4,	// (0x00010527) list_single_graphic_2heading_pane_t1

0x59e8,	// (0x0001053b) list_single_graphic_2heading_pane_t2_ParamLimits

0x59e8,	// (0x0001053b) list_single_graphic_2heading_pane_t2

0x5a02,	// (0x00010555) list_single_graphic_2heading_pane_t3_ParamLimits

0x5a02,	// (0x00010555) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001a305) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001a305) list_single_graphic_2heading_pane_t

0x9316,	// (0x00013e69) bg_popup_sub_pane_cp2

0x9340,	// (0x00013e93) grid_toobar_pane

0x5a1a,	// (0x0001056d) cell_toolbar_pane_ParamLimits

0x5a1a,	// (0x0001056d) cell_toolbar_pane

0x9392,	// (0x00013ee5) cell_toolbar_pane_g1_ParamLimits

0x9392,	// (0x00013ee5) cell_toolbar_pane_g1

0x93a6,	// (0x00013ef9) cell_toolbar_pane_g2_ParamLimits

0x93a6,	// (0x00013ef9) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001a313) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001a313) cell_toolbar_pane_g

0x93c8,	// (0x00013f1b) grid_highlight_pane_cp2_ParamLimits

0x93c8,	// (0x00013f1b) grid_highlight_pane_cp2

0x93e2,	// (0x00013f35) toolbar_button_pane

0x93ee,	// (0x00013f41) toolbar_button_pane_g1

0x93f6,	// (0x00013f49) toolbar_button_pane_g2

0x93fe,	// (0x00013f51) toolbar_button_pane_g3

0x9406,	// (0x00013f59) toolbar_button_pane_g4

0x940e,	// (0x00013f61) toolbar_button_pane_g5

0x9416,	// (0x00013f69) toolbar_button_pane_g6

0x941e,	// (0x00013f71) toolbar_button_pane_g7

0x9426,	// (0x00013f79) toolbar_button_pane_g8

0x942e,	// (0x00013f81) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001a318) toolbar_button_pane_g

0x5a52,	// (0x000105a5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5a52,	// (0x000105a5) list_single_2graphic_pane_g1_cp3

0x5a5e,	// (0x000105b1) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5a5e,	// (0x000105b1) list_single_2graphic_pane_g2_cp3

0x5a6f,	// (0x000105c2) list_single_2graphic_pane_g3_cp3

0x5a77,	// (0x000105ca) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5a77,	// (0x000105ca) list_single_2graphic_pane_g4_cp3

0x5a83,	// (0x000105d6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5a83,	// (0x000105d6) list_single_2graphic_pane_t1_cp3

0x5a9d,	// (0x000105f0) list_single_midp_graphic_pane_g2_ParamLimits

0x5a9d,	// (0x000105f0) list_single_midp_graphic_pane_g2

0x53e5,	// (0x0000ff38) aid_zoom_text_primary

0x53ed,	// (0x0000ff40) aid_zoom_text_secondary

0x8dee,	// (0x00013941) status_small_pane_g7_ParamLimits

0x8dee,	// (0x00013941) status_small_pane_g7

0x8e11,	// (0x00013964) status_small_pane_t1_ParamLimits

0x6ec5,	// (0x00011a18) title_pane_g2

0x0003,

0xf54e,	// (0x0001a0a1) title_pane_g

0x741a,	// (0x00011f6d) aid_size_cell_colour_1_pane_ParamLimits

0x741a,	// (0x00011f6d) aid_size_cell_colour_1_pane

0x742e,	// (0x00011f81) aid_size_cell_colour_2_pane_ParamLimits

0x742e,	// (0x00011f81) aid_size_cell_colour_2_pane

0x7442,	// (0x00011f95) aid_size_cell_colour_3_pane_ParamLimits

0x7442,	// (0x00011f95) aid_size_cell_colour_3_pane

0x7456,	// (0x00011fa9) aid_size_cell_colour_4_pane_ParamLimits

0x7456,	// (0x00011fa9) aid_size_cell_colour_4_pane

0x4e47,	// (0x0000f99a) title_pane_stacon_g1_ParamLimits

0x4e47,	// (0x0000f99a) title_pane_stacon_g1

0x9b8f,	// (0x000146e2) popup_note_wait_window_g3_ParamLimits

0x9b8f,	// (0x000146e2) popup_note_wait_window_g3

0x9c05,	// (0x00014758) popup_note_wait_window_t5_ParamLimits

0x9c05,	// (0x00014758) popup_note_wait_window_t5

0x6eae,	// (0x00011a01) main_feb_china_hwr_fs_writing_pane

0x5489,	// (0x0000ffdc) popup_feb_china_hwr_fs_window_ParamLimits

0x5489,	// (0x0000ffdc) popup_feb_china_hwr_fs_window

0x5abf,	// (0x00010612) aid_size_cell_hwr_fs_ParamLimits

0x5abf,	// (0x00010612) aid_size_cell_hwr_fs

0x9512,	// (0x00014065) bg_popup_sub_pane_cp3_ParamLimits

0x9512,	// (0x00014065) bg_popup_sub_pane_cp3

0x5ad4,	// (0x00010627) grid_hwr_fs_pane_ParamLimits

0x5ad4,	// (0x00010627) grid_hwr_fs_pane

0x5aec,	// (0x0001063f) linegrid_hwr_fs_pane_ParamLimits

0x5aec,	// (0x0001063f) linegrid_hwr_fs_pane

0x5afc,	// (0x0001064f) cell_hwr_fs_pane_ParamLimits

0x5afc,	// (0x0001064f) cell_hwr_fs_pane

0x951e,	// (0x00014071) linegrid_hwr_fs_pane_g1_ParamLimits

0x951e,	// (0x00014071) linegrid_hwr_fs_pane_g1

0x952a,	// (0x0001407d) linegrid_hwr_fs_pane_g2_ParamLimits

0x952a,	// (0x0001407d) linegrid_hwr_fs_pane_g2

0x953c,	// (0x0001408f) linegrid_hwr_fs_pane_g3_ParamLimits

0x953c,	// (0x0001408f) linegrid_hwr_fs_pane_g3

0x5b1e,	// (0x00010671) linegrid_hwr_fs_pane_g4_ParamLimits

0x5b1e,	// (0x00010671) linegrid_hwr_fs_pane_g4

0x5b38,	// (0x0001068b) linegrid_hwr_fs_pane_g5_ParamLimits

0x5b38,	// (0x0001068b) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x0001a33e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x0001a33e) linegrid_hwr_fs_pane_g

0x9548,	// (0x0001409b) cell_hwr_fs_pane_g1_ParamLimits

0x9548,	// (0x0001409b) cell_hwr_fs_pane_g1

0x924d,	// (0x00013da0) cell_hwr_fs_pane_g2_ParamLimits

0x924d,	// (0x00013da0) cell_hwr_fs_pane_g2

0x955e,	// (0x000140b1) cell_hwr_fs_pane_g3_ParamLimits

0x955e,	// (0x000140b1) cell_hwr_fs_pane_g3

0x956b,	// (0x000140be) cell_hwr_fs_pane_g4_ParamLimits

0x956b,	// (0x000140be) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0001a349) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001a349) cell_hwr_fs_pane_g

0x5b4e,	// (0x000106a1) cell_hwr_fs_pane_t1

0x6eae,	// (0x00011a01) grid_highlight_pane_cp6

0x6eae,	// (0x00011a01) main_idle_act2_pane

0x8002,	// (0x00012b55) aid_inside_area_popup_secondary

0xa244,	// (0x00014d97) aid_inside_area_window_primary_ParamLimits

0xa244,	// (0x00014d97) aid_inside_area_window_primary

0xaec0,	// (0x00015a13) ai2_news_ticker_pane

0xaec8,	// (0x00015a1b) aid_size_cell_ai1_link_ParamLimits

0xaec8,	// (0x00015a1b) aid_size_cell_ai1_link

0xaee2,	// (0x00015a35) popup_ai2_data_window_ParamLimits

0xaee2,	// (0x00015a35) popup_ai2_data_window

0xaef6,	// (0x00015a49) popup_ai2_link_window_ParamLimits

0xaef6,	// (0x00015a49) popup_ai2_link_window

0x9512,	// (0x00014065) bg_popup_sub_pane_cp4_ParamLimits

0x9512,	// (0x00014065) bg_popup_sub_pane_cp4

0xaf0a,	// (0x00015a5d) grid_ai2_link_pane_ParamLimits

0xaf0a,	// (0x00015a5d) grid_ai2_link_pane

0xaf21,	// (0x00015a74) popup_ai2_link_window_g1_ParamLimits

0xaf21,	// (0x00015a74) popup_ai2_link_window_g1

0xaf2d,	// (0x00015a80) popup_ai2_link_window_g2_ParamLimits

0xaf2d,	// (0x00015a80) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x0001a51c) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x0001a51c) popup_ai2_link_window_g

0xaf3c,	// (0x00015a8f) ai2_mp_button_pane

0xaf44,	// (0x00015a97) ai2_mp_volume_pane

0x9746,	// (0x00014299) bg_popup_sub_pane_cp5_ParamLimits

0x9746,	// (0x00014299) bg_popup_sub_pane_cp5

0xaf4c,	// (0x00015a9f) heading_ai2_gene_pane_ParamLimits

0xaf4c,	// (0x00015a9f) heading_ai2_gene_pane

0xaf58,	// (0x00015aab) list_ai2_gene_pane_ParamLimits

0xaf58,	// (0x00015aab) list_ai2_gene_pane

0xafa0,	// (0x00015af3) cell_ai2_link_pane_ParamLimits

0xafa0,	// (0x00015af3) cell_ai2_link_pane

0xafb6,	// (0x00015b09) cell_ai2_link_pane_g1

0x6eae,	// (0x00011a01) grid_highlight_pane_cp7

0x5e3a,	// (0x0001098d) ai2_mp_volume_pane_g1

0xb087,	// (0x00015bda) ai2_mp_volume_pane_g2

0xaffc,	// (0x00015b4f) list_ai2_gene_pane_t1

0xb08f,	// (0x00015be2) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0001a535) ai2_mp_volume_pane_g

0x5e42,	// (0x00010995) volume_small_pane_cp3

0xb097,	// (0x00015bea) aid_size_cell_ai2_button

0xb09f,	// (0x00015bf2) grid_ai2_button_pane

0xb0a8,	// (0x00015bfb) cell_ai2_button_pane_ParamLimits

0xb0a8,	// (0x00015bfb) cell_ai2_button_pane

0x6ea4,	// (0x000119f7) cell_ai2_button_pane_g1

0x6eae,	// (0x00011a01) grid_highlight_pane_cp8

0xb047,	// (0x00015b9a) ai2_gene_pane_t1_ParamLimits

0xb047,	// (0x00015b9a) ai2_gene_pane_t1

0x53d3,	// (0x0000ff26) aid_height_parent_landscape

0xa8c7,	// (0x0001541a) aid_height_set_list

0xa8d8,	// (0x0001542b) aid_size_parent

0xace7,	// (0x0001583a) aid_size_cell_graphic_pane_ParamLimits

0xaf68,	// (0x00015abb) popup_ai2_data_window_g1_ParamLimits

0xaf68,	// (0x00015abb) popup_ai2_data_window_g1

0xaf74,	// (0x00015ac7) ai2_news_ticker_pane_g1

0xaf7c,	// (0x00015acf) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0001a521) ai2_news_ticker_pane_g

0xaf84,	// (0x00015ad7) ai2_news_ticker_pane_t1

0xaf92,	// (0x00015ae5) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0001a526) ai2_news_ticker_pane_t

0xafbf,	// (0x00015b12) heading_ai2_gene_pane_g1

0xafc7,	// (0x00015b1a) heading_ai2_gene_pane_t1_ParamLimits

0xafc7,	// (0x00015b1a) heading_ai2_gene_pane_t1

0xafdc,	// (0x00015b2f) list_highlight_pane_cp6

0xafe4,	// (0x00015b37) ai2_gene_pane_ParamLimits

0xafe4,	// (0x00015b37) ai2_gene_pane

0xb00a,	// (0x00015b5d) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x0001a52b) list_ai2_gene_pane_t

0xb018,	// (0x00015b6b) list_highlight_pane_cp8_ParamLimits

0xb018,	// (0x00015b6b) list_highlight_pane_cp8

0xb029,	// (0x00015b7c) ai2_gene_pane_g1_ParamLimits

0xb029,	// (0x00015b7c) ai2_gene_pane_g1

0xb03b,	// (0x00015b8e) ai2_gene_pane_g2_ParamLimits

0xb03b,	// (0x00015b8e) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x0001a530) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x0001a530) ai2_gene_pane_g

0x7798,	// (0x000122eb) scroll_pane_cp12

0x5392,	// (0x0000fee5) control_pane_t3_ParamLimits

0x5392,	// (0x0000fee5) control_pane_t3

0x8e02,	// (0x00013955) status_small_pane_g8_ParamLimits

0x8e02,	// (0x00013955) status_small_pane_g8

0x556b,	// (0x000100be) popup_find_window_ParamLimits

0x5780,	// (0x000102d3) popup_note_image_window_ParamLimits

0x782f,	// (0x00012382) list_double2_graphic_pane_vc_g1_ParamLimits

0x782f,	// (0x00012382) list_double2_graphic_pane_vc_g1

0x77b5,	// (0x00012308) list_double2_graphic_pane_vc_g2_ParamLimits

0x77b5,	// (0x00012308) list_double2_graphic_pane_vc_g2

0x77c1,	// (0x00012314) list_double2_graphic_pane_vc_g3_ParamLimits

0x77c1,	// (0x00012314) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001a30c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a30c) list_double2_graphic_pane_vc_g

0x937c,	// (0x00013ecf) list_double2_graphic_pane_vc_t1_ParamLimits

0x937c,	// (0x00013ecf) list_double2_graphic_pane_vc_t1

0x77b5,	// (0x00012308) list_single_heading_pane_vc_g1_ParamLimits

0x77b5,	// (0x00012308) list_single_heading_pane_vc_g1

0x77c1,	// (0x00012314) list_single_heading_pane_vc_g2_ParamLimits

0x77c1,	// (0x00012314) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001a11b) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001a11b) list_single_heading_pane_vc_g

0x9436,	// (0x00013f89) list_single_heading_pane_vc_t1_ParamLimits

0x9436,	// (0x00013f89) list_single_heading_pane_vc_t1

0x944c,	// (0x00013f9f) list_single_heading_pane_vc_t2_ParamLimits

0x944c,	// (0x00013f9f) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x0001a32d) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x0001a32d) list_single_heading_pane_vc_t

0x9468,	// (0x00013fbb) list_setting_number_pane_vc_g1_ParamLimits

0x9468,	// (0x00013fbb) list_setting_number_pane_vc_g1

0x9474,	// (0x00013fc7) list_setting_number_pane_vc_g2_ParamLimits

0x9474,	// (0x00013fc7) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0001a332) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0001a332) list_setting_number_pane_vc_g

0x9480,	// (0x00013fd3) list_setting_number_pane_vc_t1_ParamLimits

0x9480,	// (0x00013fd3) list_setting_number_pane_vc_t1

0x9494,	// (0x00013fe7) list_setting_number_pane_vc_t2_ParamLimits

0x9494,	// (0x00013fe7) list_setting_number_pane_vc_t2

0x94ae,	// (0x00014001) list_setting_number_pane_vc_t3_ParamLimits

0x94ae,	// (0x00014001) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0001a337) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0001a337) list_setting_number_pane_vc_t

0x94d6,	// (0x00014029) set_value_pane_vc_ParamLimits

0x94d6,	// (0x00014029) set_value_pane_vc

0xaad7,	// (0x0001562a) list_double2_graphic_pane_vc_ParamLimits

0xaad7,	// (0x0001562a) list_double2_graphic_pane_vc

0xaaea,	// (0x0001563d) list_double2_large_graphic_pane_vc_ParamLimits

0xaaea,	// (0x0001563d) list_double2_large_graphic_pane_vc

0xaad7,	// (0x0001562a) list_double2_pane_vc_ParamLimits

0xaad7,	// (0x0001562a) list_double2_pane_vc

0xaad7,	// (0x0001562a) list_double_graphic_heading_pane_vc_ParamLimits

0xaad7,	// (0x0001562a) list_double_graphic_heading_pane_vc

0xaad7,	// (0x0001562a) list_double_graphic_pane_vc_ParamLimits

0xaad7,	// (0x0001562a) list_double_graphic_pane_vc

0xaad7,	// (0x0001562a) list_double_heading_pane_vc_ParamLimits

0xaad7,	// (0x0001562a) list_double_heading_pane_vc

0xaafc,	// (0x0001564f) list_double_large_graphic_pane_vc_ParamLimits

0xaafc,	// (0x0001564f) list_double_large_graphic_pane_vc

0xaad7,	// (0x0001562a) list_double_number_pane_vc_ParamLimits

0xaad7,	// (0x0001562a) list_double_number_pane_vc

0xaad7,	// (0x0001562a) list_double_pane_vc_ParamLimits

0xaad7,	// (0x0001562a) list_double_pane_vc

0xaad7,	// (0x0001562a) list_double_time_pane_vc_ParamLimits

0xaad7,	// (0x0001562a) list_double_time_pane_vc

0xaad7,	// (0x0001562a) list_setting_number_pane_vc_ParamLimits

0xaad7,	// (0x0001562a) list_setting_number_pane_vc

0xaad7,	// (0x0001562a) list_setting_pane_vc_ParamLimits

0xaad7,	// (0x0001562a) list_setting_pane_vc

0xaad7,	// (0x0001562a) list_single_graphic_heading_pane_vc_ParamLimits

0xaad7,	// (0x0001562a) list_single_graphic_heading_pane_vc

0xaad7,	// (0x0001562a) list_single_heading_pane_vc_ParamLimits

0xaad7,	// (0x0001562a) list_single_heading_pane_vc

0xab1a,	// (0x0001566d) list_single_number_heading_pane_vc_ParamLimits

0xab1a,	// (0x0001566d) list_single_number_heading_pane_vc

0xb0db,	// (0x00015c2e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb0db,	// (0x00015c2e) list_double_graphic_heading_pane_vc_g1

0xb0e7,	// (0x00015c3a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb0e7,	// (0x00015c3a) list_double_graphic_heading_pane_vc_g2

0xb0f3,	// (0x00015c46) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb0f3,	// (0x00015c46) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x0001a53c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0001a53c) list_double_graphic_heading_pane_vc_g

0xb0ff,	// (0x00015c52) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb0ff,	// (0x00015c52) list_double_graphic_heading_pane_vc_t1

0xb11b,	// (0x00015c6e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb11b,	// (0x00015c6e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0001a543) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0001a543) list_double_graphic_heading_pane_vc_t

0x9468,	// (0x00013fbb) list_setting_pane_vc_g1_ParamLimits

0x9468,	// (0x00013fbb) list_setting_pane_vc_g1

0x9474,	// (0x00013fc7) list_setting_pane_vc_g2_ParamLimits

0x9474,	// (0x00013fc7) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0001a332) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0001a332) list_setting_pane_vc_g

0xb32b,	// (0x00015e7e) list_setting_pane_vc_t1_ParamLimits

0xb32b,	// (0x00015e7e) list_setting_pane_vc_t1

0xb345,	// (0x00015e98) list_setting_pane_vc_t2_ParamLimits

0xb345,	// (0x00015e98) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x0001a586) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x0001a586) list_setting_pane_vc_t

0x94d6,	// (0x00014029) set_value_pane_cp_vc_ParamLimits

0x94d6,	// (0x00014029) set_value_pane_cp_vc

0x77b5,	// (0x00012308) list_single_number_heading_pane_vc_g1_ParamLimits

0x77b5,	// (0x00012308) list_single_number_heading_pane_vc_g1

0x77c1,	// (0x00012314) list_single_number_heading_pane_vc_g2_ParamLimits

0x77c1,	// (0x00012314) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001a11b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001a11b) list_single_number_heading_pane_vc_g

0x9436,	// (0x00013f89) list_single_number_heading_pane_vc_t1_ParamLimits

0x9436,	// (0x00013f89) list_single_number_heading_pane_vc_t1

0xb35d,	// (0x00015eb0) list_single_number_heading_pane_vc_t2_ParamLimits

0xb35d,	// (0x00015eb0) list_single_number_heading_pane_vc_t2

0x781d,	// (0x00012370) list_single_number_heading_pane_vc_t3_ParamLimits

0x781d,	// (0x00012370) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x0001a58b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0001a58b) list_single_number_heading_pane_vc_t

0x782f,	// (0x00012382) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x782f,	// (0x00012382) list_single_graphic_heading_pane_vc_g1

0x77b5,	// (0x00012308) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x77b5,	// (0x00012308) list_single_graphic_heading_pane_vc_g4

0x77c1,	// (0x00012314) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x77c1,	// (0x00012314) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001a30c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a30c) list_single_graphic_heading_pane_vc_g

0x9436,	// (0x00013f89) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9436,	// (0x00013f89) list_single_graphic_heading_pane_vc_t1

0xb371,	// (0x00015ec4) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb371,	// (0x00015ec4) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x0001a592) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x0001a592) list_single_graphic_heading_pane_vc_t

0x77b5,	// (0x00012308) list_double2_pane_vc_g1_ParamLimits

0x77b5,	// (0x00012308) list_double2_pane_vc_g1

0x77c1,	// (0x00012314) list_double2_pane_vc_g2_ParamLimits

0x77c1,	// (0x00012314) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001a11b) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001a11b) list_double2_pane_vc_g

0xaa74,	// (0x000155c7) list_double2_pane_vc_t1_ParamLimits

0xaa74,	// (0x000155c7) list_double2_pane_vc_t1

0xb385,	// (0x00015ed8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb385,	// (0x00015ed8) list_double2_large_graphic_pane_vc_g1

0xb391,	// (0x00015ee4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb391,	// (0x00015ee4) list_double2_large_graphic_pane_vc_g2

0xb39d,	// (0x00015ef0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb39d,	// (0x00015ef0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa44,	// (0x0001a597) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa44,	// (0x0001a597) list_double2_large_graphic_pane_vc_g

0xb3a9,	// (0x00015efc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb3a9,	// (0x00015efc) list_double2_large_graphic_pane_vc_t1

0xb3bf,	// (0x00015f12) list_double_time_pane_vc_g1_ParamLimits

0xb3bf,	// (0x00015f12) list_double_time_pane_vc_g1

0xb3cb,	// (0x00015f1e) list_double_time_pane_vc_g2_ParamLimits

0xb3cb,	// (0x00015f1e) list_double_time_pane_vc_g2

0x0001,

0xfa4b,	// (0x0001a59e) list_double_time_pane_vc_g_ParamLimits

0xfa4b,	// (0x0001a59e) list_double_time_pane_vc_g

0xb3d7,	// (0x00015f2a) list_double_time_pane_vc_t1_ParamLimits

0xb3d7,	// (0x00015f2a) list_double_time_pane_vc_t1

0xb3f5,	// (0x00015f48) list_double_time_pane_vc_t2_ParamLimits

0xb3f5,	// (0x00015f48) list_double_time_pane_vc_t2

0xb41f,	// (0x00015f72) list_double_time_pane_vc_t3_ParamLimits

0xb41f,	// (0x00015f72) list_double_time_pane_vc_t3

0xb431,	// (0x00015f84) list_double_time_pane_vc_t4_ParamLimits

0xb431,	// (0x00015f84) list_double_time_pane_vc_t4

0x0003,

0xfa50,	// (0x0001a5a3) list_double_time_pane_vc_t_ParamLimits

0xfa50,	// (0x0001a5a3) list_double_time_pane_vc_t

0x77b5,	// (0x00012308) list_double_pane_vc_g1_ParamLimits

0x77b5,	// (0x00012308) list_double_pane_vc_g1

0x77c1,	// (0x00012314) list_double_pane_vc_g2_ParamLimits

0x77c1,	// (0x00012314) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001a11b) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001a11b) list_double_pane_vc_g

0xb445,	// (0x00015f98) list_double_pane_vc_t1_ParamLimits

0xb445,	// (0x00015f98) list_double_pane_vc_t1

0xb457,	// (0x00015faa) list_double_pane_vc_t2_ParamLimits

0xb457,	// (0x00015faa) list_double_pane_vc_t2

0x0001,

0xfa59,	// (0x0001a5ac) list_double_pane_vc_t_ParamLimits

0xfa59,	// (0x0001a5ac) list_double_pane_vc_t

0x77b5,	// (0x00012308) list_double_number_pane_vc_g1_ParamLimits

0x77b5,	// (0x00012308) list_double_number_pane_vc_g1

0x77c1,	// (0x00012314) list_double_number_pane_vc_g2_ParamLimits

0x77c1,	// (0x00012314) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001a11b) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001a11b) list_double_number_pane_vc_g

0xb46f,	// (0x00015fc2) list_double_number_pane_vc_t1_ParamLimits

0xb46f,	// (0x00015fc2) list_double_number_pane_vc_t1

0xb481,	// (0x00015fd4) list_double_number_pane_vc_t2_ParamLimits

0xb481,	// (0x00015fd4) list_double_number_pane_vc_t2

0xb493,	// (0x00015fe6) list_double_number_pane_vc_t3_ParamLimits

0xb493,	// (0x00015fe6) list_double_number_pane_vc_t3

0x0002,

0xfa5e,	// (0x0001a5b1) list_double_number_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001a5b1) list_double_number_pane_vc_t

0xb4ab,	// (0x00015ffe) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb4ab,	// (0x00015ffe) list_double_large_graphic_pane_vc_g1

0xb4c7,	// (0x0001601a) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb4c7,	// (0x0001601a) list_double_large_graphic_pane_vc_g2

0xb4db,	// (0x0001602e) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb4db,	// (0x0001602e) list_double_large_graphic_pane_vc_g3

0xb4ea,	// (0x0001603d) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb4ea,	// (0x0001603d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa65,	// (0x0001a5b8) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa65,	// (0x0001a5b8) list_double_large_graphic_pane_vc_g

0xb4f9,	// (0x0001604c) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb4f9,	// (0x0001604c) list_double_large_graphic_pane_vc_t1

0xb513,	// (0x00016066) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb513,	// (0x00016066) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6e,	// (0x0001a5c1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6e,	// (0x0001a5c1) list_double_large_graphic_pane_vc_t

0xb0e7,	// (0x00015c3a) list_double_heading_pane_vc_g1_ParamLimits

0xb0e7,	// (0x00015c3a) list_double_heading_pane_vc_g1

0xb0f3,	// (0x00015c46) list_double_heading_pane_vc_g2_ParamLimits

0xb0f3,	// (0x00015c46) list_double_heading_pane_vc_g2

0x0001,

0xfa73,	// (0x0001a5c6) list_double_heading_pane_vc_g_ParamLimits

0xfa73,	// (0x0001a5c6) list_double_heading_pane_vc_g

0xb535,	// (0x00016088) list_double_heading_pane_vc_t1_ParamLimits

0xb535,	// (0x00016088) list_double_heading_pane_vc_t1

0x9436,	// (0x00013f89) list_double_heading_pane_vc_t2_ParamLimits

0x9436,	// (0x00013f89) list_double_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x0001a5cb) list_double_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x0001a5cb) list_double_heading_pane_vc_t

0xb549,	// (0x0001609c) list_double_graphic_pane_vc_g1_ParamLimits

0xb549,	// (0x0001609c) list_double_graphic_pane_vc_g1

0xb555,	// (0x000160a8) list_double_graphic_pane_vc_g2_ParamLimits

0xb555,	// (0x000160a8) list_double_graphic_pane_vc_g2

0x77b5,	// (0x00012308) list_double_graphic_pane_vc_g3_ParamLimits

0x77b5,	// (0x00012308) list_double_graphic_pane_vc_g3

0x0003,

0xfa7d,	// (0x0001a5d0) list_double_graphic_pane_vc_g_ParamLimits

0xfa7d,	// (0x0001a5d0) list_double_graphic_pane_vc_g

0xb572,	// (0x000160c5) list_double_graphic_pane_vc_t1_ParamLimits

0xb572,	// (0x000160c5) list_double_graphic_pane_vc_t1

0xb590,	// (0x000160e3) list_double_graphic_pane_vc_t2_ParamLimits

0xb590,	// (0x000160e3) list_double_graphic_pane_vc_t2

0x0001,

0xfa86,	// (0x0001a5d9) list_double_graphic_pane_vc_t_ParamLimits

0xfa86,	// (0x0001a5d9) list_double_graphic_pane_vc_t

0x49a7,	// (0x0000f4fa) aid_size_cell_fastswap

0x49af,	// (0x0000f502) aid_size_cell_touch_ParamLimits

0x49af,	// (0x0000f502) aid_size_cell_touch

0x4c14,	// (0x0000f767) popup_fast_swap_wide_window_ParamLimits

0x4c14,	// (0x0000f767) popup_fast_swap_wide_window

0x4d1a,	// (0x0000f86d) touch_pane_ParamLimits

0x4d1a,	// (0x0000f86d) touch_pane

0x7c73,	// (0x000127c6) button_value_adjust_pane_cp2

0x7c73,	// (0x000127c6) button_value_adjust_pane_cp4

0x7c93,	// (0x000127e6) form_field_data_pane_cp2

0x7cb2,	// (0x00012805) form_field_data_wide_pane_cp2

0x8315,	// (0x00012e68) bg_scroll_pane_ParamLimits

0x4faa,	// (0x0000fafd) scroll_handle_pane_ParamLimits

0x4fbe,	// (0x0000fb11) scroll_sc2_down_pane_ParamLimits

0x4fbe,	// (0x0000fb11) scroll_sc2_down_pane

0x8346,	// (0x00012e99) scroll_sc2_up_pane_ParamLimits

0x8346,	// (0x00012e99) scroll_sc2_up_pane

0xba48,	// (0x0001659b) grid_wheel_folder_pane_g1_ParamLimits

0xba48,	// (0x0001659b) grid_wheel_folder_pane_g1

0x517a,	// (0x0000fccd) clock_nsta_pane_cp2_ParamLimits

0x517a,	// (0x0000fccd) clock_nsta_pane_cp2

0x808f,	// (0x00012be2) listscroll_midp_pane_ParamLimits

0x8b98,	// (0x000136eb) midp_canvas_pane

0x8e7c,	// (0x000139cf) nsta_clock_indic_pane

0x8eb8,	// (0x00013a0b) listscroll_form_pane_vc

0x8ec0,	// (0x00013a13) listscroll_set_pane_vc_ParamLimits

0x8ec0,	// (0x00013a13) listscroll_set_pane_vc

0x8fc9,	// (0x00013b1c) clock_nsta_pane

0x903e,	// (0x00013b91) indicator_nsta_pane

0x9316,	// (0x00013e69) bg_popup_sub_pane_cp2_ParamLimits

0x932a,	// (0x00013e7d) find_pane_cp2_ParamLimits

0x932a,	// (0x00013e7d) find_pane_cp2

0x9340,	// (0x00013e93) grid_toobar_pane_ParamLimits

0x94e6,	// (0x00014039) list_form_gen_pane_vc_ParamLimits

0x94e6,	// (0x00014039) list_form_gen_pane_vc

0x94fc,	// (0x0001404f) scroll_pane_cp8_vc_ParamLimits

0x94fc,	// (0x0001404f) scroll_pane_cp8_vc

0x9578,	// (0x000140cb) data_form_wide_pane_vc_ParamLimits

0x9578,	// (0x000140cb) data_form_wide_pane_vc

0x9584,	// (0x000140d7) form_field_data_wide_pane_vc_g1

0x958c,	// (0x000140df) form_field_data_wide_pane_vc_t1_ParamLimits

0x958c,	// (0x000140df) form_field_data_wide_pane_vc_t1

0x7d4d,	// (0x000128a0) input_focus_pane_cp6_vc_ParamLimits

0x7d4d,	// (0x000128a0) input_focus_pane_cp6_vc

0x990f,	// (0x00014462) list_midp_pane_ParamLimits

0x991b,	// (0x0001446e) scroll_pane_cp16_ParamLimits

0x991b,	// (0x0001446e) scroll_pane_cp16

0x9969,	// (0x000144bc) button_value_adjust_pane_ParamLimits

0x9969,	// (0x000144bc) button_value_adjust_pane

0xa8ea,	// (0x0001543d) button_value_adjust_pane_cp6_ParamLimits

0xa8ea,	// (0x0001543d) button_value_adjust_pane_cp6

0xaa0c,	// (0x0001555f) settings_code_pane_cp_ParamLimits

0xaa0c,	// (0x0001555f) settings_code_pane_cp

0x6ea4,	// (0x000119f7) cell_touch_pane_g1

0x6ea4,	// (0x000119f7) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001a251) cell_touch_pane_g

0xb0ba,	// (0x00015c0d) cell_touch_pane_cp_ParamLimits

0xb0ba,	// (0x00015c0d) cell_touch_pane_cp

0xb0ca,	// (0x00015c1d) cell_touch_pane_ParamLimits

0xb0ca,	// (0x00015c1d) cell_touch_pane

0x6ea4,	// (0x000119f7) scroll_sc2_down_pane_g1

0x6ea4,	// (0x000119f7) scroll_sc2_up_pane_g1

0x6eae,	// (0x00011a01) bg_set_opt_pane_cp4_vc

0xb133,	// (0x00015c86) list_set_graphic_pane_vc_g1_ParamLimits

0xb133,	// (0x00015c86) list_set_graphic_pane_vc_g1

0x797a,	// (0x000124cd) list_set_graphic_pane_vc_g2_ParamLimits

0x797a,	// (0x000124cd) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0001a548) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0001a548) list_set_graphic_pane_vc_g

0xb13f,	// (0x00015c92) text_primary_small_cp13_vc_ParamLimits

0xb13f,	// (0x00015c92) text_primary_small_cp13_vc

0xb157,	// (0x00015caa) list_set_graphic_pane_vc_ParamLimits

0xb157,	// (0x00015caa) list_set_graphic_pane_vc

0x6eae,	// (0x00011a01) input_focus_pane_cp2_vc

0x6ea4,	// (0x000119f7) setting_code_pane_vc_g1

0x6fd9,	// (0x00011b2c) setting_code_pane_vc_t1

0xb16b,	// (0x00015cbe) set_text_pane_vc_t1_ParamLimits

0xb16b,	// (0x00015cbe) set_text_pane_vc_t1

0x6eae,	// (0x00011a01) input_focus_pane_cp1_vc

0xb188,	// (0x00015cdb) list_set_text_pane_vc

0x6ea4,	// (0x000119f7) setting_text_pane_vc_g1

0x6eae,	// (0x00011a01) bg_set_opt_pane_cp2_vc

0x6fd0,	// (0x00011b23) setting_slider_graphic_pane_vc_g1

0xb192,	// (0x00015ce5) setting_slider_graphic_pane_vc_t1

0xb1a2,	// (0x00015cf5) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001a54d) setting_slider_graphic_pane_vc_t

0xb1b2,	// (0x00015d05) slider_set_pane_cp_vc

0xb1ba,	// (0x00015d0d) slider_set_pane_vc_g1

0xb1c3,	// (0x00015d16) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0001a552) slider_set_pane_vc_g

0x7e7a,	// (0x000129cd) set_opt_bg_pane_g1_copy1

0x7e82,	// (0x000129d5) set_opt_bg_pane_g2_copy1

0xb1ef,	// (0x00015d42) set_opt_bg_pane_g3_copy1

0x7e92,	// (0x000129e5) set_opt_bg_pane_g4_copy1

0x7e9a,	// (0x000129ed) set_opt_bg_pane_g5_copy1

0x7ea2,	// (0x000129f5) set_opt_bg_pane_g6_copy1

0xb1f7,	// (0x00015d4a) set_opt_bg_pane_g7_copy1

0xb201,	// (0x00015d54) set_opt_bg_pane_g8_copy1

0xb209,	// (0x00015d5c) set_opt_bg_pane_g9_copy1

0x6eae,	// (0x00011a01) bg_set_opt_pane_cp_vc

0xb211,	// (0x00015d64) setting_slider_pane_vc_t1

0xb220,	// (0x00015d73) setting_slider_pane_vc_t2

0xb230,	// (0x00015d83) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001a561) setting_slider_pane_vc_t

0xb240,	// (0x00015d93) slider_set_pane_vc

0x5b5c,	// (0x000106af) volume_set_pane_vc_g1

0x5e4b,	// (0x0001099e) volume_set_pane_vc_g2

0x5e54,	// (0x000109a7) volume_set_pane_vc_g3

0x5e5d,	// (0x000109b0) volume_set_pane_vc_g4

0x5e66,	// (0x000109b9) volume_set_pane_vc_g5

0x5e6f,	// (0x000109c2) volume_set_pane_vc_g6

0x5b89,	// (0x000106dc) volume_set_pane_vc_g7

0x5e78,	// (0x000109cb) volume_set_pane_vc_g8

0x5e81,	// (0x000109d4) volume_set_pane_vc_g9

0x5e8a,	// (0x000109dd) volume_set_pane_vc_g10

0x0009,

0xfa15,	// (0x0001a568) volume_set_pane_vc_g

0xb248,	// (0x00015d9b) volume_set_pane_vc

0xb250,	// (0x00015da3) button_value_adjust_pane_cp1_vc

0xb25a,	// (0x00015dad) list_highlight_pane_cp2_vc

0xb263,	// (0x00015db6) list_set_pane_vc_ParamLimits

0xb263,	// (0x00015db6) list_set_pane_vc

0xb2c1,	// (0x00015e14) main_pane_set_vc_t1_ParamLimits

0xb2c1,	// (0x00015e14) main_pane_set_vc_t1

0xb2d6,	// (0x00015e29) main_pane_set_vc_t2_ParamLimits

0xb2d6,	// (0x00015e29) main_pane_set_vc_t2

0xb2e8,	// (0x00015e3b) main_pane_set_vc_t3_ParamLimits

0xb2e8,	// (0x00015e3b) main_pane_set_vc_t3

0xb2fa,	// (0x00015e4d) main_pane_set_vc_t4_ParamLimits

0xb2fa,	// (0x00015e4d) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x0001a57d) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x0001a57d) main_pane_set_vc_t

0xb30c,	// (0x00015e5f) setting_code_pane_vc_ParamLimits

0xb30c,	// (0x00015e5f) setting_code_pane_vc

0xb31b,	// (0x00015e6e) setting_slider_graphic_pane_vc

0xb31b,	// (0x00015e6e) setting_slider_pane_vc

0xb31b,	// (0x00015e6e) setting_text_pane_vc

0xb31b,	// (0x00015e6e) setting_volume_pane_vc

0xb323,	// (0x00015e76) scroll_pane_cp121_vc

0x7c61,	// (0x000127b4) set_content_pane_vc

0xb5ba,	// (0x0001610d) button_value_adjust_pane_g1

0xb5c3,	// (0x00016116) button_value_adjust_pane_g2

0x0001,

0xfa8b,	// (0x0001a5de) button_value_adjust_pane_g

0xb5cc,	// (0x0001611f) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb5cc,	// (0x0001611f) form_field_slider_wide_pane_vc_t1

0xb5e0,	// (0x00016133) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb5e0,	// (0x00016133) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa90,	// (0x0001a5e3) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa90,	// (0x0001a5e3) form_field_slider_wide_pane_vc_t

0x7223,	// (0x00011d76) input_focus_pane_cp10_vc_ParamLimits

0x7223,	// (0x00011d76) input_focus_pane_cp10_vc

0xb60c,	// (0x0001615f) slider_cont_pane_cp1_vc_ParamLimits

0xb60c,	// (0x0001615f) slider_cont_pane_cp1_vc

0xb61c,	// (0x0001616f) slider_form_pane_g1_cp2

0xb1c3,	// (0x00015d16) slider_form_pane_g2_cp2

0xb649,	// (0x0001619c) form_field_slider_pane_vc_t3

0xb657,	// (0x000161aa) form_field_slider_pane_vc_t4

0xb665,	// (0x000161b8) slider_form_pane_vc_ParamLimits

0xb665,	// (0x000161b8) slider_form_pane_vc

0xb672,	// (0x000161c5) form_field_slider_pane_vc_t1_ParamLimits

0xb672,	// (0x000161c5) form_field_slider_pane_vc_t1

0xb5e0,	// (0x00016133) form_field_slider_pane_vc_t2_ParamLimits

0xb5e0,	// (0x00016133) form_field_slider_pane_vc_t2

0x0001,

0xfaa2,	// (0x0001a5f5) form_field_slider_pane_vc_t_ParamLimits

0xfaa2,	// (0x0001a5f5) form_field_slider_pane_vc_t

0x7223,	// (0x00011d76) input_focus_pane_cp9_vc_ParamLimits

0x7223,	// (0x00011d76) input_focus_pane_cp9_vc

0xb68e,	// (0x000161e1) slider_cont_pane_vc_ParamLimits

0xb68e,	// (0x000161e1) slider_cont_pane_vc

0xb6a0,	// (0x000161f3) list_form_graphic_pane_cp_vc_ParamLimits

0xb6a0,	// (0x000161f3) list_form_graphic_pane_cp_vc

0x9584,	// (0x000140d7) form_field_popup_wide_pane_vc_g1

0xb6b5,	// (0x00016208) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb6b5,	// (0x00016208) form_field_popup_wide_pane_vc_t1

0x7d4d,	// (0x000128a0) input_focus_pane_cp8_vc_ParamLimits

0x7d4d,	// (0x000128a0) input_focus_pane_cp8_vc

0xb6fa,	// (0x0001624d) list_form_wide_pane_vc_ParamLimits

0xb6fa,	// (0x0001624d) list_form_wide_pane_vc

0xb706,	// (0x00016259) list_form_graphic_pane_vc_g1

0xb70e,	// (0x00016261) list_form_graphic_pane_vc_t1_ParamLimits

0xb70e,	// (0x00016261) list_form_graphic_pane_vc_t1

0x6f8e,	// (0x00011ae1) list_highlight_pane_cp5_vc_ParamLimits

0x6f8e,	// (0x00011ae1) list_highlight_pane_cp5_vc

0xb72a,	// (0x0001627d) list_form_graphic_pane_vc_ParamLimits

0xb72a,	// (0x0001627d) list_form_graphic_pane_vc

0x9584,	// (0x000140d7) form_field_popup_pane_vc_g1

0xb740,	// (0x00016293) form_field_popup_pane_vc_t1_ParamLimits

0xb740,	// (0x00016293) form_field_popup_pane_vc_t1

0x7d4d,	// (0x000128a0) input_focus_pane_cp7_vc_ParamLimits

0x7d4d,	// (0x000128a0) input_focus_pane_cp7_vc

0xb757,	// (0x000162aa) list_form_pane_vc_ParamLimits

0xb757,	// (0x000162aa) list_form_pane_vc

0xb763,	// (0x000162b6) data_form_pane_vc_t1_ParamLimits

0xb763,	// (0x000162b6) data_form_pane_vc_t1

0x7e7a,	// (0x000129cd) input_focus_pane_vc_g1

0x7e82,	// (0x000129d5) input_focus_pane_vc_g2

0x7e8a,	// (0x000129dd) input_focus_pane_vc_g3

0x7e92,	// (0x000129e5) input_focus_pane_vc_g4

0x7e9a,	// (0x000129ed) input_focus_pane_vc_g5

0x7ea2,	// (0x000129f5) input_focus_pane_vc_g6

0x7eaa,	// (0x000129fd) input_focus_pane_vc_g7

0x7eb2,	// (0x00012a05) input_focus_pane_vc_g8

0x7eba,	// (0x00012a0d) input_focus_pane_vc_g9

0x6ea4,	// (0x000119f7) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001a1da) input_focus_pane_vc_g

0x9578,	// (0x000140cb) data_form_pane_vc_ParamLimits

0x9578,	// (0x000140cb) data_form_pane_vc

0x9584,	// (0x000140d7) form_field_data_pane_vc_g1

0xb77e,	// (0x000162d1) form_field_data_pane_vc_t1_ParamLimits

0xb77e,	// (0x000162d1) form_field_data_pane_vc_t1

0x7d4d,	// (0x000128a0) input_focus_pane_vc_ParamLimits

0x7d4d,	// (0x000128a0) input_focus_pane_vc

0xb798,	// (0x000162eb) button_value_adjust_pane_cp3_vc

0xb7a0,	// (0x000162f3) button_value_adjust_pane_cp5_vc

0xb7a8,	// (0x000162fb) form_field_data_pane_vc_ParamLimits

0xb7a8,	// (0x000162fb) form_field_data_pane_vc

0xb7bf,	// (0x00016312) form_field_data_pane_vc_cp2

0xb7c7,	// (0x0001631a) form_field_data_wide_pane_vc_ParamLimits

0xb7c7,	// (0x0001631a) form_field_data_wide_pane_vc

0xb7dd,	// (0x00016330) form_field_data_wide_pane_vc_cp2

0xb7e5,	// (0x00016338) form_field_popup_pane_vc_ParamLimits

0xb7e5,	// (0x00016338) form_field_popup_pane_vc

0xb7fc,	// (0x0001634f) form_field_popup_wide_pane_vc_ParamLimits

0xb7fc,	// (0x0001634f) form_field_popup_wide_pane_vc

0xb812,	// (0x00016365) form_field_slider_pane_vc_ParamLimits

0xb812,	// (0x00016365) form_field_slider_pane_vc

0xb825,	// (0x00016378) form_field_slider_wide_pane_vc_ParamLimits

0xb825,	// (0x00016378) form_field_slider_wide_pane_vc

0xb838,	// (0x0001638b) grid_touch_1_pane_ParamLimits

0xb838,	// (0x0001638b) grid_touch_1_pane

0xb844,	// (0x00016397) grid_touch_2_pane_ParamLimits

0xb844,	// (0x00016397) grid_touch_2_pane

0x8e47,	// (0x0001399a) touch_pane_g1_ParamLimits

0x8e47,	// (0x0001399a) touch_pane_g1

0xb85c,	// (0x000163af) cell_app_pane_cp_wide_ParamLimits

0xb85c,	// (0x000163af) cell_app_pane_cp_wide

0xb86d,	// (0x000163c0) grid_popup_fast_wide_pane_ParamLimits

0xb86d,	// (0x000163c0) grid_popup_fast_wide_pane

0xb881,	// (0x000163d4) scroll_pane_cp19_ParamLimits

0xb881,	// (0x000163d4) scroll_pane_cp19

0x6eae,	// (0x00011a01) bg_popup_window_pane_cp20

0xb895,	// (0x000163e8) listscroll_popup_fast_wide_pane

0x6f8e,	// (0x00011ae1) grid_indicator_nsta_pane

0xb89d,	// (0x000163f0) clock_nsta_pane_g1

0xb8a6,	// (0x000163f9) clock_nsta_pane_t1

0xb8c2,	// (0x00016415) cell_indicator_nsta_pane_ParamLimits

0xb8c2,	// (0x00016415) cell_indicator_nsta_pane

0xb8f3,	// (0x00016446) cell_indicator_nsta_pane_g1

0xb901,	// (0x00016454) cell_indicator_nsta_pane_g2

0x0001,

0xfab3,	// (0x0001a606) cell_indicator_nsta_pane_g

0xb90e,	// (0x00016461) clock_nsta_pane_cp

0xb916,	// (0x00016469) indicator_nsta_pane_cp

0xb91e,	// (0x00016471) nsta_clock_indic_pane_g1

0x7071,	// (0x00011bc4) grid_indicator_pane

0x843b,	// (0x00012f8e) scroll_pane_cp29

0x50c9,	// (0x0000fc1c) indicator_nsta_pane_cp2_ParamLimits

0x50c9,	// (0x0000fc1c) indicator_nsta_pane_cp2

0x6f8e,	// (0x00011ae1) main_apps_wheel_pane

0x97f4,	// (0x00014347) form_midp_field_text_pane_ParamLimits

0x993b,	// (0x0001448e) scroll_bar_cp050_ParamLimits

0xb97f,	// (0x000164d2) cell_indicator_pane_ParamLimits

0xb97f,	// (0x000164d2) cell_indicator_pane

0xb99a,	// (0x000164ed) cell_indicator_pane_g1

0xb9a4,	// (0x000164f7) grid_wheel_folder_pane_ParamLimits

0xb9a4,	// (0x000164f7) grid_wheel_folder_pane

0xb9ba,	// (0x0001650d) list_wheel_apps_pane_ParamLimits

0xb9ba,	// (0x0001650d) list_wheel_apps_pane

0xb9cb,	// (0x0001651e) main_apps_wheel_pane_g1_ParamLimits

0xb9cb,	// (0x0001651e) main_apps_wheel_pane_g1

0xb9df,	// (0x00016532) main_apps_wheel_pane_g2_ParamLimits

0xb9df,	// (0x00016532) main_apps_wheel_pane_g2

0x0001,

0xfacf,	// (0x0001a622) main_apps_wheel_pane_g_ParamLimits

0xfacf,	// (0x0001a622) main_apps_wheel_pane_g

0xb9f7,	// (0x0001654a) main_apps_wheel_pane_t1_ParamLimits

0xb9f7,	// (0x0001654a) main_apps_wheel_pane_t1

0xba1a,	// (0x0001656d) list_wheel_apps_pane_g1

0xba22,	// (0x00016575) list_wheel_apps_pane_g2

0xba2a,	// (0x0001657d) list_wheel_apps_pane_g3

0xba34,	// (0x00016587) list_wheel_apps_pane_g4

0xba3e,	// (0x00016591) list_wheel_apps_pane_g5

0x0004,

0xfad4,	// (0x0001a627) list_wheel_apps_pane_g

0x8a1c,	// (0x0001356f) navi_icon_text_pane

0x8efc,	// (0x00013a4f) aid_fill_nsta

0xba61,	// (0x000165b4) navi_icon_text_pane_g1

0xba6d,	// (0x000165c0) navi_icon_text_pane_t1

0x88b3,	// (0x00013406) list_set_graphic_pane_t1_ParamLimits

0x88b3,	// (0x00013406) list_set_graphic_pane_t1

0xa08d,	// (0x00014be0) popup_midp_note_alarm_window_t6_ParamLimits

0xa08d,	// (0x00014be0) popup_midp_note_alarm_window_t6

0xa09f,	// (0x00014bf2) popup_midp_note_alarm_window_t7_ParamLimits

0xa09f,	// (0x00014bf2) popup_midp_note_alarm_window_t7

0xa0b1,	// (0x00014c04) popup_midp_note_alarm_window_t8_ParamLimits

0xa0b1,	// (0x00014c04) popup_midp_note_alarm_window_t8

0xa0c3,	// (0x00014c16) popup_midp_note_alarm_window_t9_ParamLimits

0xa0c3,	// (0x00014c16) popup_midp_note_alarm_window_t9

0xa0d5,	// (0x00014c28) popup_midp_note_alarm_window_t10_ParamLimits

0xa0d5,	// (0x00014c28) popup_midp_note_alarm_window_t10

0xa0e7,	// (0x00014c3a) popup_midp_note_alarm_window_t11_ParamLimits

0xa0e7,	// (0x00014c3a) popup_midp_note_alarm_window_t11

0xa0f9,	// (0x00014c4c) scroll_pane_cp17_ParamLimits

0xa0f9,	// (0x00014c4c) scroll_pane_cp17

0x5b5c,	// (0x000106af) volume_small_pane_cp_g1

0x5e93,	// (0x000109e6) volume_small_pane_cp_g2

0x5e9c,	// (0x000109ef) volume_small_pane_cp_g3

0x5b6e,	// (0x000106c1) volume_small_pane_cp_g4

0x5ea5,	// (0x000109f8) volume_small_pane_cp_g5

0x5e66,	// (0x000109b9) volume_small_pane_cp_g6

0x5b80,	// (0x000106d3) volume_small_pane_cp_g7

0x5eae,	// (0x00010a01) volume_small_pane_cp_g8

0x5eb7,	// (0x00010a0a) volume_small_pane_cp_g9

0x5b92,	// (0x000106e5) volume_small_pane_cp_g10

0x8c65,	// (0x000137b8) midp_ticker_pane_g1_ParamLimits

0x8c71,	// (0x000137c4) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001a2a6) midp_ticker_pane_g_ParamLimits

0x8c7d,	// (0x000137d0) midp_ticker_pane_t1_ParamLimits

0x8f12,	// (0x00013a65) aid_fill_nsta_2

0x9927,	// (0x0001447a) list_form2_midp_pane

0xaa8a,	// (0x000155dd) midp_editing_number_pane_ParamLimits

0xaa99,	// (0x000155ec) midp_ticker_pane_ParamLimits

0xba7f,	// (0x000165d2) form2_midp_field_pane

0xbaa3,	// (0x000165f6) scroll_pane_cp51

0xbac3,	// (0x00016616) form2_midp_button_pane_ParamLimits

0xbac3,	// (0x00016616) form2_midp_button_pane

0xbad5,	// (0x00016628) form2_midp_content_pane_ParamLimits

0xbad5,	// (0x00016628) form2_midp_content_pane

0xbaef,	// (0x00016642) form2_midp_field_choice_group_pane

0xbaf7,	// (0x0001664a) form2_midp_field_pane_g1

0xbaff,	// (0x00016652) form2_midp_field_pane_g2

0xbb07,	// (0x0001665a) form2_midp_field_pane_g3

0xbb0f,	// (0x00016662) form2_midp_field_pane_g4

0x0003,

0xfaf9,	// (0x0001a64c) form2_midp_field_pane_g

0xbb17,	// (0x0001666a) form2_midp_gauge_slider_pane

0xbb1f,	// (0x00016672) form2_midp_gauge_wait_pane

0xbb27,	// (0x0001667a) form2_midp_image_pane_ParamLimits

0xbb27,	// (0x0001667a) form2_midp_image_pane

0xbb42,	// (0x00016695) form2_midp_label_pane_ParamLimits

0xbb42,	// (0x00016695) form2_midp_label_pane

0xbb5b,	// (0x000166ae) form2_midp_label_pane_cp_ParamLimits

0xbb5b,	// (0x000166ae) form2_midp_label_pane_cp

0xbb7c,	// (0x000166cf) form2_midp_string_pane_ParamLimits

0xbb7c,	// (0x000166cf) form2_midp_string_pane

0xbb8e,	// (0x000166e1) form2_midp_text_pane_ParamLimits

0xbb8e,	// (0x000166e1) form2_midp_text_pane

0xbba9,	// (0x000166fc) form2_midp_time_pane

0xbbb9,	// (0x0001670c) input_focus_pane_cp51_ParamLimits

0xbbb9,	// (0x0001670c) input_focus_pane_cp51

0xbbd1,	// (0x00016724) form2_midp_label_pane_t1_ParamLimits

0xbbd1,	// (0x00016724) form2_midp_label_pane_t1

0xbc11,	// (0x00016764) form2_mdip_text_pane_t1_ParamLimits

0xbc11,	// (0x00016764) form2_mdip_text_pane_t1

0xbc2d,	// (0x00016780) form2_midp_time_pane_t1

0xbc48,	// (0x0001679b) form2_midp_gauge_slider_pane_t1

0xbc5a,	// (0x000167ad) form2_midp_gauge_slider_pane_t2

0xbc6c,	// (0x000167bf) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb02,	// (0x0001a655) form2_midp_gauge_slider_pane_t

0xbc7e,	// (0x000167d1) form2_midp_slider_pane

0xbc8a,	// (0x000167dd) form2_midp_gauge_wait_pane_t1

0xbc98,	// (0x000167eb) form2_midp_wait_pane_ParamLimits

0xbc98,	// (0x000167eb) form2_midp_wait_pane

0xbcc4,	// (0x00016817) list_single_2graphic_pane_cp4_ParamLimits

0xbcc4,	// (0x00016817) list_single_2graphic_pane_cp4

0x95f3,	// (0x00014146) list_single_midp_graphic_pane_cp_ParamLimits

0x95f3,	// (0x00014146) list_single_midp_graphic_pane_cp

0x6eae,	// (0x00011a01) list_highlight_pane_cp20

0xbcf2,	// (0x00016845) list_single_2graphic_pane_g1_cp4

0xafbf,	// (0x00015b12) list_single_2graphic_pane_g2_cp4

0xbcfa,	// (0x0001684d) list_single_2graphic_pane_t1_cp4

0x6f8e,	// (0x00011ae1) list_highlight_pane_cp21

0xbd09,	// (0x0001685c) list_single_midp_graphic_pane_g4_cp

0xbd18,	// (0x0001686b) list_single_midp_graphic_pane_t1_cp

0xbd2d,	// (0x00016880) form2_mdip_string_pane_t1_ParamLimits

0xbd2d,	// (0x00016880) form2_mdip_string_pane_t1

0x6eae,	// (0x00011a01) bg_wml_button_pane_cp2

0x6ea4,	// (0x000119f7) form2_midp_image_pane_g1

0x7a3d,	// (0x00012590) list_double_large_graphic_pane_g5_ParamLimits

0x7a3d,	// (0x00012590) list_double_large_graphic_pane_g5

0x808f,	// (0x00012be2) midp_form_pane_ParamLimits

0x6f8e,	// (0x00011ae1) main_apps_wheel_pane_ParamLimits

0x57a6,	// (0x000102f9) popup_preview_window_ParamLimits

0x57a6,	// (0x000102f9) popup_preview_window

0x595d,	// (0x000104b0) popup_touch_info_window_ParamLimits

0x595d,	// (0x000104b0) popup_touch_info_window

0x597b,	// (0x000104ce) popup_touch_menu_window_ParamLimits

0x597b,	// (0x000104ce) popup_touch_menu_window

0x6e9a,	// (0x000119ed) bg_popup_sub_pane_cp6

0xbe50,	// (0x000169a3) list_touch_menu_pane

0xbe58,	// (0x000169ab) list_single_touch_menu_pane_ParamLimits

0xbe58,	// (0x000169ab) list_single_touch_menu_pane

0xbe6c,	// (0x000169bf) list_single_touch_menu_pane_t1

0x6f8e,	// (0x00011ae1) bg_popup_sub_pane_cp7_ParamLimits

0x6f8e,	// (0x00011ae1) bg_popup_sub_pane_cp7

0xbe7a,	// (0x000169cd) heading_sub_pane

0xbe82,	// (0x000169d5) list_touch_info_pane_ParamLimits

0xbe82,	// (0x000169d5) list_touch_info_pane

0xbe91,	// (0x000169e4) list_single_touch_info_pane_ParamLimits

0xbe91,	// (0x000169e4) list_single_touch_info_pane

0xbea3,	// (0x000169f6) list_single_touch_info_pane_t1

0xbeb1,	// (0x00016a04) list_single_touch_info_pane_t2

0x0001,

0xfb10,	// (0x0001a663) list_single_touch_info_pane_t

0x8b90,	// (0x000136e3) bg_popup_heading_pane_cp

0xbebf,	// (0x00016a12) heading_sub_pane_t1

0x9512,	// (0x00014065) bg_popup_preview_window_pane_cp_ParamLimits

0x9512,	// (0x00014065) bg_popup_preview_window_pane_cp

0xbe7a,	// (0x000169cd) heading_preview_pane

0xbe82,	// (0x000169d5) list_preview_pane_ParamLimits

0xbe82,	// (0x000169d5) list_preview_pane

0xbecd,	// (0x00016a20) popup_preview_window_g1

0xbe91,	// (0x000169e4) list_single_preview_pane_ParamLimits

0xbe91,	// (0x000169e4) list_single_preview_pane

0xbed5,	// (0x00016a28) list_single_preview_pane_g1

0xbedd,	// (0x00016a30) list_single_preview_pane_t1

0xbea3,	// (0x000169f6) list_single_preview_pane_t2

0x0001,

0xfb15,	// (0x0001a668) list_single_preview_pane_t

0xbeeb,	// (0x00016a3e) bg_popup_heading_pane_cp2_ParamLimits

0xbeeb,	// (0x00016a3e) bg_popup_heading_pane_cp2

0xbf01,	// (0x00016a54) heading_preview_pane_g1

0xbf09,	// (0x00016a5c) heading_preview_pane_t1_ParamLimits

0xbf09,	// (0x00016a5c) heading_preview_pane_t1

0x7094,	// (0x00011be7) soft_indicator_pane_t1_ParamLimits

0x7775,	// (0x000122c8) scroll_pane_ParamLimits

0x8334,	// (0x00012e87) scroll_sc2_left_pane

0x833d,	// (0x00012e90) scroll_sc2_right_pane

0x835c,	// (0x00012eaf) scroll_bg_pane_g1_ParamLimits

0x8371,	// (0x00012ec4) scroll_bg_pane_g2_ParamLimits

0x8389,	// (0x00012edc) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001a231) scroll_bg_pane_g_ParamLimits

0x835c,	// (0x00012eaf) scroll_handle_pane_g1_ParamLimits

0x83ab,	// (0x00012efe) scroll_handle_pane_g2_ParamLimits

0x8389,	// (0x00012edc) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001a238) scroll_handle_pane_g_ParamLimits

0x542d,	// (0x0000ff80) popup_choice_list_window_ParamLimits

0x542d,	// (0x0000ff80) popup_choice_list_window

0x9322,	// (0x00013e75) choice_list_pane

0x93ba,	// (0x00013f0d) cell_toolbar_pane_t1

0x93e2,	// (0x00013f35) toolbar_button_pane_ParamLimits

0xa5b3,	// (0x00015106) ai_gene_pane_1_t2_ParamLimits

0xa5b3,	// (0x00015106) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0001a45b) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0001a45b) ai_gene_pane_1_t

0xbf26,	// (0x00016a79) scroll_sc2_left_pane_g1

0xbf26,	// (0x00016a79) scroll_sc2_right_pane_g1

0x8ed2,	// (0x00013a25) bg_popup_sub_pane_cp10

0xbf30,	// (0x00016a83) list_choice_list_pane

0xbf49,	// (0x00016a9c) list_single_choice_list_pane_ParamLimits

0xbf49,	// (0x00016a9c) list_single_choice_list_pane

0xbf5c,	// (0x00016aaf) list_single_choice_list_pane_g1

0x803f,	// (0x00012b92) list_single_choice_list_pane_t1_ParamLimits

0x803f,	// (0x00012b92) list_single_choice_list_pane_t1

0xbf64,	// (0x00016ab7) choice_list_pane_g1

0xbf6c,	// (0x00016abf) choice_list_pane_t1

0x6e9a,	// (0x000119ed) input_focus_pane_cp11

0x8213,	// (0x00012d66) title_pane_stacon_g2_ParamLimits

0x8213,	// (0x00012d66) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001a217) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001a217) title_pane_stacon_g

0x8b90,	// (0x000136e3) cursor_press_pane

0x54d5,	// (0x00010028) popup_fep_hwr_window_ParamLimits

0x54d5,	// (0x00010028) popup_fep_hwr_window

0x554d,	// (0x000100a0) popup_fep_vkb_window_ParamLimits

0x554d,	// (0x000100a0) popup_fep_vkb_window

0xbf7a,	// (0x00016acd) cursor_press_pane_g1

0x0002,

0xfb3e,	// (0x0001a691) fep_vkb_side_pane_g_ParamLimits

0x5ef9,	// (0x00010a4c) fep_hwr_candidate_pane_ParamLimits

0x5ef9,	// (0x00010a4c) fep_hwr_candidate_pane

0x5f23,	// (0x00010a76) fep_hwr_side_pane_ParamLimits

0x5f23,	// (0x00010a76) fep_hwr_side_pane

0x5f43,	// (0x00010a96) fep_hwr_top_pane_ParamLimits

0x5f43,	// (0x00010a96) fep_hwr_top_pane

0x5f5b,	// (0x00010aae) fep_hwr_write_pane_ParamLimits

0x5f5b,	// (0x00010aae) fep_hwr_write_pane

0xfb3e,	// (0x0001a691) fep_vkb_side_pane_g

0xbf82,	// (0x00016ad5) fep_hwr_top_pane_g1

0xbf94,	// (0x00016ae7) fep_hwr_top_pane_g2

0x5f95,	// (0x00010ae8) fep_hwr_top_pane_g3

0x0002,

0xfb1a,	// (0x0001a66d) fep_hwr_top_pane_g

0x5faa,	// (0x00010afd) fep_hwr_top_text_pane

0x8501,	// (0x00013054) fep_hwr_top_text_pane_g1

0xbfca,	// (0x00016b1d) fep_hwr_top_text_pane_t1

0x60a0,	// (0x00010bf3) fep_hwr_candidate_pane_g1

0xc20d,	// (0x00016d60) fep_vkb_keypad_pane_g3_ParamLimits

0xc20d,	// (0x00016d60) fep_vkb_keypad_pane_g3

0xc235,	// (0x00016d88) fep_vkb_keypad_pane_g4_ParamLimits

0xc235,	// (0x00016d88) fep_vkb_keypad_pane_g4

0xc2a4,	// (0x00016df7) fep_vkb_bottom_pane_g2_ParamLimits

0xc2a4,	// (0x00016df7) fep_vkb_bottom_pane_g2

0x0001,

0xfb45,	// (0x0001a698) fep_vkb_bottom_pane_g_ParamLimits

0xfb45,	// (0x0001a698) fep_vkb_bottom_pane_g

0xbf26,	// (0x00016a79) cell_vkb_side_pane_g2

0x0001,

0xfb4f,	// (0x0001a6a2) cell_vkb_side_pane_g

0xc32f,	// (0x00016e82) cell_vkb_side_pane_t1

0xc33d,	// (0x00016e90) cell_vkb_side_pane_t1_copy1

0xbf26,	// (0x00016a79) bg_fep_vkb_candidate_pane_g2

0xc469,	// (0x00016fbc) cell_vkb_candidate_pane_ParamLimits

0xbfd8,	// (0x00016b2b) aid_size_cell_vkb_ParamLimits

0xbfd8,	// (0x00016b2b) aid_size_cell_vkb

0xc469,	// (0x00016fbc) cell_vkb_candidate_pane

0x60c7,	// (0x00010c1a) bg_popup_fep_shadow_pane_g1

0xc064,	// (0x00016bb7) fep_vkb_bottom_pane_ParamLimits

0xc064,	// (0x00016bb7) fep_vkb_bottom_pane

0xc09a,	// (0x00016bed) fep_vkb_candidate_pane_ParamLimits

0xc09a,	// (0x00016bed) fep_vkb_candidate_pane

0xc0b6,	// (0x00016c09) fep_vkb_keypad_pane_ParamLimits

0xc0b6,	// (0x00016c09) fep_vkb_keypad_pane

0xc0f5,	// (0x00016c48) fep_vkb_side_pane_ParamLimits

0xc0f5,	// (0x00016c48) fep_vkb_side_pane

0xc131,	// (0x00016c84) fep_vkb_top_pane_ParamLimits

0xc131,	// (0x00016c84) fep_vkb_top_pane

0xc166,	// (0x00016cb9) fep_vkb_top_pane_g1_ParamLimits

0xc166,	// (0x00016cb9) fep_vkb_top_pane_g1

0xc175,	// (0x00016cc8) fep_vkb_top_pane_g2_ParamLimits

0xc175,	// (0x00016cc8) fep_vkb_top_pane_g2

0xc184,	// (0x00016cd7) fep_vkb_top_pane_g3_ParamLimits

0xc184,	// (0x00016cd7) fep_vkb_top_pane_g3

0x0003,

0xfb35,	// (0x0001a688) fep_vkb_top_pane_g_ParamLimits

0xfb35,	// (0x0001a688) fep_vkb_top_pane_g

0xc1a2,	// (0x00016cf5) fep_vkb_top_text_pane_ParamLimits

0xc1a2,	// (0x00016cf5) fep_vkb_top_text_pane

0xc1b3,	// (0x00016d06) fep_vkb_side_pane_g1_ParamLimits

0xc1b3,	// (0x00016d06) fep_vkb_side_pane_g1

0xc1fc,	// (0x00016d4f) grid_vkb_side_pane_ParamLimits

0xc1fc,	// (0x00016d4f) grid_vkb_side_pane

0x60cf,	// (0x00010c22) bg_popup_fep_shadow_pane_g2

0x60d8,	// (0x00010c2b) bg_popup_fep_shadow_pane_g3

0x60e0,	// (0x00010c33) bg_popup_fep_shadow_pane_g4

0x60e9,	// (0x00010c3c) bg_popup_fep_shadow_pane_g5

0x60f3,	// (0x00010c46) bg_popup_fep_shadow_pane_g6

0x60fb,	// (0x00010c4e) bg_popup_fep_shadow_pane_g7

0x7e92,	// (0x000129e5) bg_popup_fep_shadow_pane_g8

0xc253,	// (0x00016da6) grid_vkb_keypad_number_pane_ParamLimits

0xc253,	// (0x00016da6) grid_vkb_keypad_number_pane

0xc263,	// (0x00016db6) grid_vkb_keypad_pane_ParamLimits

0xc263,	// (0x00016db6) grid_vkb_keypad_pane

0xc289,	// (0x00016ddc) fep_vkb_bottom_pane_g1_ParamLimits

0xc289,	// (0x00016ddc) fep_vkb_bottom_pane_g1

0xc2b2,	// (0x00016e05) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc2b2,	// (0x00016e05) grid_vkb_keypad_bottom_left_pane

0xc2c7,	// (0x00016e1a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc2c7,	// (0x00016e1a) grid_vkb_keypad_bottom_right_pane

0xc2dc,	// (0x00016e2f) fep_vkb_top_text_pane_g1

0xc2f7,	// (0x00016e4a) fep_vkb_top_text_pane_t1

0xc30c,	// (0x00016e5f) cell_vkb_side_pane_ParamLimits

0xc30c,	// (0x00016e5f) cell_vkb_side_pane

0xbf26,	// (0x00016a79) cell_vkb_side_pane_g1

0xc34b,	// (0x00016e9e) cell_vkb_keypad_pane_ParamLimits

0xc34b,	// (0x00016e9e) cell_vkb_keypad_pane

0xc3c0,	// (0x00016f13) cell_vkb_keypad_pane_g1

0x0008,

0xfb62,	// (0x0001a6b5) bg_popup_fep_shadow_pane_g

0x610d,	// (0x00010c60) cell_hwr_side_pane_g1

0x610d,	// (0x00010c60) cell_hwr_side_pane_g2

0xc3ca,	// (0x00016f1d) cell_vkb_keypad_pane_t1

0xc3d8,	// (0x00016f2b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc3d8,	// (0x00016f2b) cell_vkb_keypad_bottom_left_pane

0xc3f5,	// (0x00016f48) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc3f5,	// (0x00016f48) cell_vkb_keypad_bottom_right_pane

0xbf26,	// (0x00016a79) cell_vkb_keypad_bottom_left_pane_g1

0xbf26,	// (0x00016a79) cell_vkb_keypad_bottom_right_pane_g1

0xc42e,	// (0x00016f81) cell_vkb_keypad_number_pane_ParamLimits

0xc42e,	// (0x00016f81) cell_vkb_keypad_number_pane

0xc44d,	// (0x00016fa0) cell_vkb_keypad_number_pane_g1

0xc457,	// (0x00016faa) cell_vkb_keypad_number_pane_g2

0xc460,	// (0x00016fb3) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb54,	// (0x0001a6a7) cell_vkb_keypad_number_pane_g

0xc3ca,	// (0x00016f1d) cell_vkb_keypad_number_pane_t1

0xc484,	// (0x00016fd7) fep_vkb_candidate_pane_g1

0x0001,

0xfb75,	// (0x0001a6c8) cell_hwr_side_pane_g

0xc49d,	// (0x00016ff0) cell_hwr_side_pane_t1

0x6117,	// (0x00010c6a) cell_hwr_side_pane_t1_copy1

0x6125,	// (0x00010c78) cell_hwr_candidate_pane_g1

0x6154,	// (0x00010ca7) cell_hwr_candidate_pane_t1

0xbf26,	// (0x00016a79) cell_vkb_candidate_pane_g2

0xc4e1,	// (0x00017034) cell_vkb_candidate_pane_t1

0x5ec0,	// (0x00010a13) bg_popup_fep_shadow_pane_ParamLimits

0x5ec0,	// (0x00010a13) bg_popup_fep_shadow_pane

0x5f75,	// (0x00010ac8) bg_fep_hwr_top_pane_g4

0xbfa6,	// (0x00016af9) bg_hwr_side_pane_g1_ParamLimits

0xbfa6,	// (0x00016af9) bg_hwr_side_pane_g1

0x5fe6,	// (0x00010b39) cell_hwr_side_pane_ParamLimits

0x5fe6,	// (0x00010b39) cell_hwr_side_pane

0x6021,	// (0x00010b74) fep_hwr_write_pane_g1_ParamLimits

0x6021,	// (0x00010b74) fep_hwr_write_pane_g1

0x602e,	// (0x00010b81) fep_hwr_write_pane_g2_ParamLimits

0x602e,	// (0x00010b81) fep_hwr_write_pane_g2

0x603b,	// (0x00010b8e) fep_hwr_write_pane_g3_ParamLimits

0x603b,	// (0x00010b8e) fep_hwr_write_pane_g3

0x6049,	// (0x00010b9c) fep_hwr_write_pane_g4_ParamLimits

0x6049,	// (0x00010b9c) fep_hwr_write_pane_g4

0x0005,

0xfb21,	// (0x0001a674) fep_hwr_write_pane_g_ParamLimits

0xfb21,	// (0x0001a674) fep_hwr_write_pane_g

0x5f75,	// (0x00010ac8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5f75,	// (0x00010ac8) bg_fep_hwr_candidate_pane_g2

0x605e,	// (0x00010bb1) cell_hwr_candidate_pane_ParamLimits

0x605e,	// (0x00010bb1) cell_hwr_candidate_pane

0x60a0,	// (0x00010bf3) fep_hwr_candidate_pane_g1_ParamLimits

0xc006,	// (0x00016b59) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc006,	// (0x00016b59) bg_popup_fep_shadow_pane_cp2

0xc194,	// (0x00016ce7) fep_vkb_top_pane_g4_ParamLimits

0xc194,	// (0x00016ce7) fep_vkb_top_pane_g4

0xc1da,	// (0x00016d2d) fep_vkb_side_pane_g2_ParamLimits

0xc1da,	// (0x00016d2d) fep_vkb_side_pane_g2

0x7b7b,	// (0x000126ce) list_setting_pane_t4_ParamLimits

0x7b7b,	// (0x000126ce) list_setting_pane_t4

0x7bf5,	// (0x00012748) list_setting_number_pane_t5_ParamLimits

0x7bf5,	// (0x00012748) list_setting_number_pane_t5

0x8548,	// (0x0001309b) list_double_heading_pane_cp2_ParamLimits

0x8548,	// (0x0001309b) list_double_heading_pane_cp2

0x79c6,	// (0x00012519) list_double_heading_pane_g1_cp2_ParamLimits

0x79c6,	// (0x00012519) list_double_heading_pane_g1_cp2

0x7d73,	// (0x000128c6) list_double_heading_pane_g2_cp2_ParamLimits

0x7d73,	// (0x000128c6) list_double_heading_pane_g2_cp2

0xc4ef,	// (0x00017042) list_double_heading_pane_t1_cp2_ParamLimits

0xc4ef,	// (0x00017042) list_double_heading_pane_t1_cp2

0xc505,	// (0x00017058) list_double_heading_pane_t2_cp2_ParamLimits

0xc505,	// (0x00017058) list_double_heading_pane_t2_cp2

0x6e82,	// (0x000119d5) aid_value_unit2

0x4c60,	// (0x0000f7b3) popup_preview_fixed_window

0x7231,	// (0x00011d84) bg_popup_preview_window_pane_cp02

0xc517,	// (0x0001706a) list_preview_fixed_pane

0xc55d,	// (0x000170b0) list_empty_pane_fp_ParamLimits

0xc55d,	// (0x000170b0) list_empty_pane_fp

0xc55d,	// (0x000170b0) list_single_cale_day_pane_fp_ParamLimits

0xc55d,	// (0x000170b0) list_single_cale_day_pane_fp

0xc55d,	// (0x000170b0) list_single_graphic_heading_pane_fp_ParamLimits

0xc55d,	// (0x000170b0) list_single_graphic_heading_pane_fp

0xc55d,	// (0x000170b0) list_single_graphic_pane_fp_ParamLimits

0xc55d,	// (0x000170b0) list_single_graphic_pane_fp

0xc55d,	// (0x000170b0) list_single_heading_pane_fp_ParamLimits

0xc55d,	// (0x000170b0) list_single_heading_pane_fp

0xc55d,	// (0x000170b0) list_single_pane_fp_ParamLimits

0xc55d,	// (0x000170b0) list_single_pane_fp

0xc573,	// (0x000170c6) list_single_pane_fp_g1_ParamLimits

0xc573,	// (0x000170c6) list_single_pane_fp_g1

0x79c6,	// (0x00012519) list_single_pane_fp_g2_ParamLimits

0x79c6,	// (0x00012519) list_single_pane_fp_g2

0x7d73,	// (0x000128c6) list_single_pane_fp_g3_ParamLimits

0x7d73,	// (0x000128c6) list_single_pane_fp_g3

0xc57f,	// (0x000170d2) list_single_pane_fp_g4_ParamLimits

0xc57f,	// (0x000170d2) list_single_pane_fp_g4

0x0003,

0xfb88,	// (0x0001a6db) list_single_pane_fp_g_ParamLimits

0xfb88,	// (0x0001a6db) list_single_pane_fp_g

0xc58b,	// (0x000170de) list_single_pane_fp_t1_ParamLimits

0xc58b,	// (0x000170de) list_single_pane_fp_t1

0xc5a2,	// (0x000170f5) list_single_graphic_pane_fp_g1_ParamLimits

0xc5a2,	// (0x000170f5) list_single_graphic_pane_fp_g1

0xc573,	// (0x000170c6) list_single_graphic_pane_fp_g2_ParamLimits

0xc573,	// (0x000170c6) list_single_graphic_pane_fp_g2

0x79c6,	// (0x00012519) list_single_graphic_pane_fp_g3_ParamLimits

0x79c6,	// (0x00012519) list_single_graphic_pane_fp_g3

0x7d73,	// (0x000128c6) list_single_graphic_pane_fp_g4_ParamLimits

0x7d73,	// (0x000128c6) list_single_graphic_pane_fp_g4

0xc57f,	// (0x000170d2) list_single_graphic_pane_fp_g5_ParamLimits

0xc57f,	// (0x000170d2) list_single_graphic_pane_fp_g5

0x0004,

0xfb91,	// (0x0001a6e4) list_single_graphic_pane_fp_g_ParamLimits

0xfb91,	// (0x0001a6e4) list_single_graphic_pane_fp_g

0xc5ae,	// (0x00017101) list_single_graphic_pane_fp_t1_ParamLimits

0xc5ae,	// (0x00017101) list_single_graphic_pane_fp_t1

0xc5a2,	// (0x000170f5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc5a2,	// (0x000170f5) list_single_graphic_heading_pane_fp_g1

0xc573,	// (0x000170c6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc573,	// (0x000170c6) list_single_graphic_heading_pane_fp_g2

0x79c6,	// (0x00012519) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x79c6,	// (0x00012519) list_single_graphic_heading_pane_fp_g3

0x7d73,	// (0x000128c6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7d73,	// (0x000128c6) list_single_graphic_heading_pane_fp_g4

0xc57f,	// (0x000170d2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc57f,	// (0x000170d2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb91,	// (0x0001a6e4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb91,	// (0x0001a6e4) list_single_graphic_heading_pane_fp_g

0xc5c4,	// (0x00017117) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc5c4,	// (0x00017117) list_single_graphic_heading_pane_fp_t1

0xc5da,	// (0x0001712d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc5da,	// (0x0001712d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0001a6ef) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001a6ef) list_single_graphic_heading_pane_fp_t

0xc5ec,	// (0x0001713f) list_single_cale_day_pane_fp_g1_ParamLimits

0xc5ec,	// (0x0001713f) list_single_cale_day_pane_fp_g1

0xc624,	// (0x00017177) list_single_cale_day_pane_fp_g2_ParamLimits

0xc624,	// (0x00017177) list_single_cale_day_pane_fp_g2

0xc630,	// (0x00017183) list_single_cale_day_pane_fp_g3_ParamLimits

0xc630,	// (0x00017183) list_single_cale_day_pane_fp_g3

0xc658,	// (0x000171ab) list_single_cale_day_pane_fp_g4_ParamLimits

0xc658,	// (0x000171ab) list_single_cale_day_pane_fp_g4

0xc67c,	// (0x000171cf) list_single_cale_day_pane_fp_g5_ParamLimits

0xc67c,	// (0x000171cf) list_single_cale_day_pane_fp_g5

0x0004,

0xfba1,	// (0x0001a6f4) list_single_cale_day_pane_fp_g_ParamLimits

0xfba1,	// (0x0001a6f4) list_single_cale_day_pane_fp_g

0xc6a0,	// (0x000171f3) list_single_cale_day_pane_fp_t1_ParamLimits

0xc6a0,	// (0x000171f3) list_single_cale_day_pane_fp_t1

0xc6c6,	// (0x00017219) list_single_cale_day_pane_fp_t2_ParamLimits

0xc6c6,	// (0x00017219) list_single_cale_day_pane_fp_t2

0xc6df,	// (0x00017232) list_single_cale_day_pane_fp_t3_ParamLimits

0xc6df,	// (0x00017232) list_single_cale_day_pane_fp_t3

0x0002,

0xfbac,	// (0x0001a6ff) list_single_cale_day_pane_fp_t_ParamLimits

0xfbac,	// (0x0001a6ff) list_single_cale_day_pane_fp_t

0xc573,	// (0x000170c6) list_empty_pane_fp_g1_ParamLimits

0xc573,	// (0x000170c6) list_empty_pane_fp_g1

0xc6f8,	// (0x0001724b) list_empty_pane_fp_t1

0xc706,	// (0x00017259) list_empty_pane_fp_t2

0x0001,

0xfbb3,	// (0x0001a706) list_empty_pane_fp_t

0xc573,	// (0x000170c6) list_single_heading_pane_fp_g1_ParamLimits

0xc573,	// (0x000170c6) list_single_heading_pane_fp_g1

0x79c6,	// (0x00012519) list_single_heading_pane_fp_g2_ParamLimits

0x79c6,	// (0x00012519) list_single_heading_pane_fp_g2

0x7d73,	// (0x000128c6) list_single_heading_pane_fp_g3_ParamLimits

0x7d73,	// (0x000128c6) list_single_heading_pane_fp_g3

0x0002,

0xfbb8,	// (0x0001a70b) list_single_heading_pane_fp_g_ParamLimits

0xfbb8,	// (0x0001a70b) list_single_heading_pane_fp_g

0xc714,	// (0x00017267) list_single_heading_pane_fp_t1_ParamLimits

0xc714,	// (0x00017267) list_single_heading_pane_fp_t1

0xc726,	// (0x00017279) list_single_heading_pane_fp_t2_ParamLimits

0xc726,	// (0x00017279) list_single_heading_pane_fp_t2

0x0001,

0xfbbf,	// (0x0001a712) list_single_heading_pane_fp_t_ParamLimits

0xfbbf,	// (0x0001a712) list_single_heading_pane_fp_t

0x80ad,	// (0x00012c00) aid_size_cell_fast

0x71a1,	// (0x00011cf4) soft_indicator_pane_cp1_t1

0x80e7,	// (0x00012c3a) cell_app_pane_cp2_ParamLimits

0x80e7,	// (0x00012c3a) cell_app_pane_cp2

0x5ee2,	// (0x00010a35) fep_hwr_candidate_drop_down_list_pane

0x60ba,	// (0x00010c0d) fep_hwr_candidate_pane_g3_ParamLimits

0x60ba,	// (0x00010c0d) fep_hwr_candidate_pane_g3

0x4005,	// (0x0000eb58) fep_hwr_candidate_pane_g4_ParamLimits

0x4005,	// (0x0000eb58) fep_hwr_candidate_pane_g4

0x0002,

0xfb2e,	// (0x0001a681) fep_hwr_candidate_pane_g_ParamLimits

0xfb2e,	// (0x0001a681) fep_hwr_candidate_pane_g

0xc089,	// (0x00016bdc) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc089,	// (0x00016bdc) fep_vkb_candidate_drop_down_list_pane

0xc48c,	// (0x00016fdf) fep_vkb_candidate_pane_g3

0xc494,	// (0x00016fe7) fep_vkb_candidate_pane_g4

0x0002,

0xfb5b,	// (0x0001a6ae) fep_vkb_candidate_pane_g

0x6125,	// (0x00010c78) cell_hwr_candidate_pane_g1_ParamLimits

0x6133,	// (0x00010c86) cell_hwr_candidate_pane_g3_ParamLimits

0x6133,	// (0x00010c86) cell_hwr_candidate_pane_g3

0xe62b,	// (0x0001917e) cell_hwr_candidate_pane_g4_ParamLimits

0xe62b,	// (0x0001917e) cell_hwr_candidate_pane_g4

0x0002,

0xfb7a,	// (0x0001a6cd) cell_hwr_candidate_pane_g_ParamLimits

0xfb7a,	// (0x0001a6cd) cell_hwr_candidate_pane_g

0xc4ab,	// (0x00016ffe) cell_vkb_candidate_pane_g3_ParamLimits

0xc4ab,	// (0x00016ffe) cell_vkb_candidate_pane_g3

0xc4c6,	// (0x00017019) cell_vkb_candidate_pane_g4_ParamLimits

0xc4c6,	// (0x00017019) cell_vkb_candidate_pane_g4

0xc73c,	// (0x0001728f) cell_app_pane_cp2_g1_ParamLimits

0xc73c,	// (0x0001728f) cell_app_pane_cp2_g1

0xc75a,	// (0x000172ad) cell_app_pane_cp2_g2_ParamLimits

0xc75a,	// (0x000172ad) cell_app_pane_cp2_g2

0x0001,

0xfbc4,	// (0x0001a717) cell_app_pane_cp2_g_ParamLimits

0xfbc4,	// (0x0001a717) cell_app_pane_cp2_g

0xc766,	// (0x000172b9) cell_app_pane_cp2_t1_ParamLimits

0xc766,	// (0x000172b9) cell_app_pane_cp2_t1

0x7d4d,	// (0x000128a0) grid_highlight_pane_cp1_ParamLimits

0x7d4d,	// (0x000128a0) grid_highlight_pane_cp1

0x6172,	// (0x00010cc5) cell_hwr_candidate_pane_cp1_ParamLimits

0x6172,	// (0x00010cc5) cell_hwr_candidate_pane_cp1

0x6125,	// (0x00010c78) fep_hwr_candidate_drop_down_list_pane_g1

0x6191,	// (0x00010ce4) fep_hwr_candidate_drop_down_list_pane_g2

0x619e,	// (0x00010cf1) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc9,	// (0x0001a71c) fep_hwr_candidate_drop_down_list_pane_g

0x61ab,	// (0x00010cfe) fep_hwr_candidate_drop_down_list_scroll_pane

0x61b4,	// (0x00010d07) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x61b4,	// (0x00010d07) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x61c1,	// (0x00010d14) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x61c1,	// (0x00010d14) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x61ce,	// (0x00010d21) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x61ce,	// (0x00010d21) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x61db,	// (0x00010d2e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x61db,	// (0x00010d2e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x61f6,	// (0x00010d49) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x61f6,	// (0x00010d49) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6211,	// (0x00010d64) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6211,	// (0x00010d64) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x622c,	// (0x00010d7f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x622c,	// (0x00010d7f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6247,	// (0x00010d9a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6247,	// (0x00010d9a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0001a723) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0001a723) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc778,	// (0x000172cb) cell_vkb_candidate_pane_cp1_ParamLimits

0xc778,	// (0x000172cb) cell_vkb_candidate_pane_cp1

0xc194,	// (0x00016ce7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc194,	// (0x00016ce7) fep_vkb_candidate_drop_down_list_pane_g1

0xc798,	// (0x000172eb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc798,	// (0x000172eb) fep_vkb_candidate_drop_down_list_pane_g2

0xc7a5,	// (0x000172f8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7a5,	// (0x000172f8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe1,	// (0x0001a734) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe1,	// (0x0001a734) fep_vkb_candidate_drop_down_list_pane_g

0xc7b2,	// (0x00017305) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7b2,	// (0x00017305) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7bf,	// (0x00017312) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7bf,	// (0x00017312) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7cc,	// (0x0001731f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7cc,	// (0x0001731f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7d8,	// (0x0001732b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7d8,	// (0x0001732b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7e4,	// (0x00017337) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7e4,	// (0x00017337) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc805,	// (0x00017358) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc805,	// (0x00017358) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc826,	// (0x00017379) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc826,	// (0x00017379) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc847,	// (0x0001739a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc847,	// (0x0001739a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc868,	// (0x000173bb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc868,	// (0x000173bb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe8,	// (0x0001a73b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe8,	// (0x0001a73b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6eb8,	// (0x00011a0b) title_pane_g1_ParamLimits

0x6ec5,	// (0x00011a18) title_pane_g2_ParamLimits

0xf54e,	// (0x0001a0a1) title_pane_g_ParamLimits

0x84f1,	// (0x00013044) aid_call2_pane

0x84f9,	// (0x0001304c) aid_call_pane

0x8501,	// (0x00013054) popup_clock_analogue_window_g1

0x8501,	// (0x00013054) popup_clock_analogue_window_g2

0x4fd3,	// (0x0000fb26) popup_clock_analogue_window_g3

0x4fdc,	// (0x0000fb2f) popup_clock_analogue_window_g4

0x6ea4,	// (0x000119f7) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001a246) popup_clock_analogue_window_g

0x4fe4,	// (0x0000fb37) popup_clock_analogue_window_t1

0x4ff2,	// (0x0000fb45) clock_digital_number_pane_ParamLimits

0x4ff2,	// (0x0000fb45) clock_digital_number_pane

0x4ffe,	// (0x0000fb51) clock_digital_number_pane_cp02_ParamLimits

0x4ffe,	// (0x0000fb51) clock_digital_number_pane_cp02

0x500a,	// (0x0000fb5d) clock_digital_number_pane_cp03_ParamLimits

0x500a,	// (0x0000fb5d) clock_digital_number_pane_cp03

0x5016,	// (0x0000fb69) clock_digital_number_pane_cp04_ParamLimits

0x5016,	// (0x0000fb69) clock_digital_number_pane_cp04

0x5022,	// (0x0000fb75) clock_digital_separator_pane_ParamLimits

0x5022,	// (0x0000fb75) clock_digital_separator_pane

0x502e,	// (0x0000fb81) popup_clock_digital_window_t1_ParamLimits

0x502e,	// (0x0000fb81) popup_clock_digital_window_t1

0x6ea4,	// (0x000119f7) clock_digital_number_pane_g1

0x6ea4,	// (0x000119f7) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001a251) clock_digital_number_pane_g

0x6ea4,	// (0x000119f7) clock_digital_separator_pane_g1

0x6ea4,	// (0x000119f7) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001a251) clock_digital_separator_pane_g

0x8efc,	// (0x00013a4f) aid_fill_nsta_ParamLimits

0x903e,	// (0x00013b91) indicator_nsta_pane_ParamLimits

0x91b7,	// (0x00013d0a) popup_clock_analogue_window

0x91b7,	// (0x00013d0a) popup_clock_digital_window

0x6f8e,	// (0x00011ae1) grid_indicator_nsta_pane_ParamLimits

0xb8b4,	// (0x00016407) clock_nsta_pane_t2

0x0001,

0xfaae,	// (0x0001a601) clock_nsta_pane_t

0x4f97,	// (0x0000faea) aid_size_max_handle

0x4fa1,	// (0x0000faf4) aid_size_min_handle

0x8b90,	// (0x000136e3) editor_scroll_pane

0xc883,	// (0x000173d6) ex_editor_pane

0x801b,	// (0x00012b6e) scroll_pane_cp13

0x77a1,	// (0x000122f4) scroll_pane_cp14

0x8530,	// (0x00013083) scroll_pane_cp36

0x855c,	// (0x000130af) list_single_graphic_hl_pane_cp2_ParamLimits

0x855c,	// (0x000130af) list_single_graphic_hl_pane_cp2

0xab82,	// (0x000156d5) list_single_graphic_hl_pane_ParamLimits

0xab82,	// (0x000156d5) list_single_graphic_hl_pane

0xc88b,	// (0x000173de) aid_size_min_hl_cp1

0xc894,	// (0x000173e7) list_highlight_pane_cp34_ParamLimits

0xc894,	// (0x000173e7) list_highlight_pane_cp34

0xc8a5,	// (0x000173f8) list_single_graphic_hl_pane_g1_ParamLimits

0xc8a5,	// (0x000173f8) list_single_graphic_hl_pane_g1

0xc8b2,	// (0x00017405) list_single_graphic_hl_pane_g2_ParamLimits

0xc8b2,	// (0x00017405) list_single_graphic_hl_pane_g2

0xc8b2,	// (0x00017405) list_single_graphic_hl_pane_g3_ParamLimits

0xc8b2,	// (0x00017405) list_single_graphic_hl_pane_g3

0xb0e7,	// (0x00015c3a) list_single_graphic_hl_pane_g4_ParamLimits

0xb0e7,	// (0x00015c3a) list_single_graphic_hl_pane_g4

0xc8be,	// (0x00017411) list_single_graphic_hl_pane_g5_ParamLimits

0xc8be,	// (0x00017411) list_single_graphic_hl_pane_g5

0x0004,

0xfbf9,	// (0x0001a74c) list_single_graphic_hl_pane_g_ParamLimits

0xfbf9,	// (0x0001a74c) list_single_graphic_hl_pane_g

0xc8d2,	// (0x00017425) list_single_graphic_hl_pane_t1_ParamLimits

0xc8d2,	// (0x00017425) list_single_graphic_hl_pane_t1

0xc8e8,	// (0x0001743b) aid_size_min_hl_cp2

0xc8f1,	// (0x00017444) list_highlight_pane_cp34_cp2_ParamLimits

0xc8f1,	// (0x00017444) list_highlight_pane_cp34_cp2

0xc8a5,	// (0x000173f8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8a5,	// (0x000173f8) list_single_graphic_hl_pane_g1_cp2

0xc8fe,	// (0x00017451) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8fe,	// (0x00017451) list_single_graphic_hl_pane_g2_cp2

0xc90a,	// (0x0001745d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc90a,	// (0x0001745d) list_single_graphic_hl_pane_g3_cp2

0x77b5,	// (0x00012308) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x77b5,	// (0x00012308) list_single_graphic_hl_pane_g4_cp2

0xc918,	// (0x0001746b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc918,	// (0x0001746b) list_single_graphic_hl_pane_g5_cp2

0x52d9,	// (0x0000fe2c) control_pane_g4_ParamLimits

0x52d9,	// (0x0000fe2c) control_pane_g4

0x8ed2,	// (0x00013a25) bg_popup_sub_pane_cp10_ParamLimits

0xbf30,	// (0x00016a83) list_choice_list_pane_ParamLimits

0xbf3f,	// (0x00016a92) scroll_pane_cp23

0x7231,	// (0x00011d84) bg_popup_preview_window_pane_cp02_ParamLimits

0xc517,	// (0x0001706a) list_preview_fixed_pane_ParamLimits

0xc52d,	// (0x00017080) list_preview_fixed_pane_cp_ParamLimits

0xc52d,	// (0x00017080) list_preview_fixed_pane_cp

0xc539,	// (0x0001708c) popup_preview_fixed_window_g1_ParamLimits

0xc539,	// (0x0001708c) popup_preview_fixed_window_g1

0xc545,	// (0x00017098) popup_preview_fixed_window_g2_ParamLimits

0xc545,	// (0x00017098) popup_preview_fixed_window_g2

0x0002,

0xfb81,	// (0x0001a6d4) popup_preview_fixed_window_g_ParamLimits

0xfb81,	// (0x0001a6d4) popup_preview_fixed_window_g

0x4f0b,	// (0x0000fa5e) aid_navi_side_left_pane_ParamLimits

0x4f20,	// (0x0000fa73) aid_navi_side_right_pane_ParamLimits

0x4f38,	// (0x0000fa8b) navi_icon_pane_stacon_ParamLimits

0x4f4c,	// (0x0000fa9f) navi_navi_pane_stacon_ParamLimits

0x4f38,	// (0x0000fa8b) navi_text_pane_stacon_ParamLimits

0x4b2f,	// (0x0000f682) main_text_info_pane

0xc942,	// (0x00017495) listscroll_text_info_pane

0xc94a,	// (0x0001749d) list_text_info_pane_ParamLimits

0xc94a,	// (0x0001749d) list_text_info_pane

0xc959,	// (0x000174ac) scroll_pane_cp24_ParamLimits

0xc959,	// (0x000174ac) scroll_pane_cp24

0xc977,	// (0x000174ca) list_text_info_pane_t1_ParamLimits

0xc977,	// (0x000174ca) list_text_info_pane_t1

0x5449,	// (0x0000ff9c) popup_fast_swap2_window_ParamLimits

0x5449,	// (0x0000ff9c) popup_fast_swap2_window

0xc9ac,	// (0x000174ff) aid_size_cell_fast2

0x6e9a,	// (0x000119ed) bg_popup_window_pane_cp17

0x9953,	// (0x000144a6) heading_pane_cp2

0x7474,	// (0x00011fc7) listscroll_fast2_pane

0xc9b6,	// (0x00017509) grid_fast2_pane

0xc9c0,	// (0x00017513) listscroll_fast2_pane_g1

0xc9c8,	// (0x0001751b) listscroll_fast2_pane_g2

0x0001,

0xfc04,	// (0x0001a757) listscroll_fast2_pane_g

0x801b,	// (0x00012b6e) scroll_pane_cp26

0xc9d2,	// (0x00017525) cell_fast2_pane_ParamLimits

0xc9d2,	// (0x00017525) cell_fast2_pane

0xc9e7,	// (0x0001753a) cell_fast2_pane_g1

0xc9f0,	// (0x00017543) cell_fast2_pane_g2

0xc9f9,	// (0x0001754c) cell_fast2_pane_g3

0x0002,

0xfc09,	// (0x0001a75c) cell_fast2_pane_g

0x755e,	// (0x000120b1) grid_highlight_pane_cp9

0x5411,	// (0x0000ff64) main_eswt_pane_ParamLimits

0x5411,	// (0x0000ff64) main_eswt_pane

0xc96e,	// (0x000174c1) list_single_text_info_pane

0xca01,	// (0x00017554) eswt_ctrl_button_pane

0xca01,	// (0x00017554) eswt_ctrl_canvas_pane

0xca09,	// (0x0001755c) eswt_ctrl_combo_pane

0xca01,	// (0x00017554) eswt_ctrl_default_pane

0xca01,	// (0x00017554) eswt_ctrl_label_pane

0xca11,	// (0x00017564) eswt_ctrl_wait_pane

0xca19,	// (0x0001756c) eswt_shell_pane

0x6e9a,	// (0x000119ed) listscroll_eswt_app_pane

0xca39,	// (0x0001758c) popup_eswt_tasktip_window_ParamLimits

0xca39,	// (0x0001758c) popup_eswt_tasktip_window

0x9512,	// (0x00014065) bg_popup_window_pane_cp18

0xca4a,	// (0x0001759d) eswt_control_pane_g1_ParamLimits

0xca4a,	// (0x0001759d) eswt_control_pane_g1

0xca57,	// (0x000175aa) eswt_control_pane_g2_ParamLimits

0xca57,	// (0x000175aa) eswt_control_pane_g2

0xca64,	// (0x000175b7) eswt_control_pane_g3_ParamLimits

0xca64,	// (0x000175b7) eswt_control_pane_g3

0xca71,	// (0x000175c4) eswt_control_pane_g4_ParamLimits

0xca71,	// (0x000175c4) eswt_control_pane_g4

0x0003,

0xfc10,	// (0x0001a763) eswt_control_pane_g_ParamLimits

0xfc10,	// (0x0001a763) eswt_control_pane_g

0x7d4d,	// (0x000128a0) bg_button_pane_ParamLimits

0x7d4d,	// (0x000128a0) bg_button_pane

0x7573,	// (0x000120c6) common_borders_pane_copy2_ParamLimits

0x7573,	// (0x000120c6) common_borders_pane_copy2

0xca7e,	// (0x000175d1) control_button_pane_g1_ParamLimits

0xca7e,	// (0x000175d1) control_button_pane_g1

0xca8a,	// (0x000175dd) control_button_pane_g2_ParamLimits

0xca8a,	// (0x000175dd) control_button_pane_g2

0xca96,	// (0x000175e9) control_button_pane_g3_ParamLimits

0xca96,	// (0x000175e9) control_button_pane_g3

0x0002,

0xfc19,	// (0x0001a76c) control_button_pane_g_ParamLimits

0xfc19,	// (0x0001a76c) control_button_pane_g

0xcaaa,	// (0x000175fd) control_button_pane_t1

0xcab8,	// (0x0001760b) control_button_pane_t2

0x0001,

0xfc20,	// (0x0001a773) control_button_pane_t

0x93ee,	// (0x00013f41) bg_button_pane_g1

0x93fe,	// (0x00013f51) bg_button_pane_g2

0x93f6,	// (0x00013f49) bg_button_pane_g3

0x940e,	// (0x00013f61) bg_button_pane_g4

0x9406,	// (0x00013f59) bg_button_pane_g5

0x9416,	// (0x00013f69) bg_button_pane_g6

0x941e,	// (0x00013f71) bg_button_pane_g7

0x942e,	// (0x00013f81) bg_button_pane_g8

0x9426,	// (0x00013f79) bg_button_pane_g9

0x0008,

0xf85c,	// (0x0001a3af) bg_button_pane_g

0xbeeb,	// (0x00016a3e) common_borders_pane_ParamLimits

0xbeeb,	// (0x00016a3e) common_borders_pane

0xca4a,	// (0x0001759d) eswt_control_pane_g1_copy1_ParamLimits

0xca4a,	// (0x0001759d) eswt_control_pane_g1_copy1

0xca57,	// (0x000175aa) eswt_control_pane_g2_copy1_ParamLimits

0xca57,	// (0x000175aa) eswt_control_pane_g2_copy1

0xca64,	// (0x000175b7) eswt_control_pane_g3_copy1_ParamLimits

0xca64,	// (0x000175b7) eswt_control_pane_g3_copy1

0xca71,	// (0x000175c4) eswt_control_pane_g4_copy1_ParamLimits

0xca71,	// (0x000175c4) eswt_control_pane_g4_copy1

0xbf26,	// (0x00016a79) bg_eswt_ctrl_canvas_pane_g1

0xbeeb,	// (0x00016a3e) common_borders_pane_cp2_ParamLimits

0xbeeb,	// (0x00016a3e) common_borders_pane_cp2

0xbeeb,	// (0x00016a3e) common_borders_pane_cp3_ParamLimits

0xbeeb,	// (0x00016a3e) common_borders_pane_cp3

0xcac6,	// (0x00017619) separator_horizontal_pane

0xcace,	// (0x00017621) separator_vertical_pane

0xca4a,	// (0x0001759d) eswt_control_pane_g1_copy2_ParamLimits

0xca4a,	// (0x0001759d) eswt_control_pane_g1_copy2

0xca57,	// (0x000175aa) eswt_control_pane_g2_copy2_ParamLimits

0xca57,	// (0x000175aa) eswt_control_pane_g2_copy2

0xca64,	// (0x000175b7) eswt_control_pane_g3_copy2_ParamLimits

0xca64,	// (0x000175b7) eswt_control_pane_g3_copy2

0xca71,	// (0x000175c4) eswt_control_pane_g4_copy2_ParamLimits

0xca71,	// (0x000175c4) eswt_control_pane_g4_copy2

0x6e9a,	// (0x000119ed) common_borders_pane_cp4

0xcad7,	// (0x0001762a) separator_horizontal_pane_g1

0xcae0,	// (0x00017633) separator_horizontal_pane_g2

0xcae9,	// (0x0001763c) separator_horizontal_pane_g3

0x0002,

0xfc25,	// (0x0001a778) separator_horizontal_pane_g

0xca4a,	// (0x0001759d) eswt_control_pane_g1_copy3_ParamLimits

0xca4a,	// (0x0001759d) eswt_control_pane_g1_copy3

0xca57,	// (0x000175aa) eswt_control_pane_g2_copy3_ParamLimits

0xca57,	// (0x000175aa) eswt_control_pane_g2_copy3

0xca64,	// (0x000175b7) eswt_control_pane_g3_copy3_ParamLimits

0xca64,	// (0x000175b7) eswt_control_pane_g3_copy3

0xca71,	// (0x000175c4) eswt_control_pane_g4_copy3_ParamLimits

0xca71,	// (0x000175c4) eswt_control_pane_g4_copy3

0x6e9a,	// (0x000119ed) common_borders_pane_cp5

0xcaf2,	// (0x00017645) separator_vertical_pane_g1

0xcafb,	// (0x0001764e) separator_vertical_pane_g2

0xcb04,	// (0x00017657) separator_vertical_pane_g3

0x0002,

0xfc2c,	// (0x0001a77f) separator_vertical_pane_g

0xca4a,	// (0x0001759d) eswt_control_pane_g1_copy4_ParamLimits

0xca4a,	// (0x0001759d) eswt_control_pane_g1_copy4

0xca57,	// (0x000175aa) eswt_control_pane_g2_copy4_ParamLimits

0xca57,	// (0x000175aa) eswt_control_pane_g2_copy4

0xca64,	// (0x000175b7) eswt_control_pane_g3_copy4_ParamLimits

0xca64,	// (0x000175b7) eswt_control_pane_g3_copy4

0xca71,	// (0x000175c4) eswt_control_pane_g4_copy4_ParamLimits

0xca71,	// (0x000175c4) eswt_control_pane_g4_copy4

0xcb0d,	// (0x00017660) eswt_ctrl_combo_button_pane

0xcb15,	// (0x00017668) eswt_ctrl_input_pane

0xcb1d,	// (0x00017670) popup_choice_list_window_cp70

0xcb25,	// (0x00017678) eswt_ctrl_input_pane_t1

0x6e9a,	// (0x000119ed) input_focus_pane_cp70

0xbeeb,	// (0x00016a3e) bg_button_pane_cp70_ParamLimits

0xbeeb,	// (0x00016a3e) bg_button_pane_cp70

0xcb33,	// (0x00017686) eswt_ctrl_combo_button_pane_g1

0xcb3b,	// (0x0001768e) wait_bar_pane_cp70

0x9512,	// (0x00014065) bg_popup_window_pane_cp70_ParamLimits

0x9512,	// (0x00014065) bg_popup_window_pane_cp70

0xcb43,	// (0x00017696) popup_eswt_tasktip_window_t1

0xcb59,	// (0x000176ac) wait_bar_pane_cp71_ParamLimits

0xcb59,	// (0x000176ac) wait_bar_pane_cp71

0xcb65,	// (0x000176b8) grid_eswt_app_pane

0x8334,	// (0x00012e87) scroll_pane_cp70

0xcb6e,	// (0x000176c1) cell_eswt_app_pane_ParamLimits

0xcb6e,	// (0x000176c1) cell_eswt_app_pane

0xcba2,	// (0x000176f5) cell_eswt_app_pane_g1_ParamLimits

0xcba2,	// (0x000176f5) cell_eswt_app_pane_g1

0xcbd1,	// (0x00017724) cell_eswt_app_pane_g2_ParamLimits

0xcbd1,	// (0x00017724) cell_eswt_app_pane_g2

0x0001,

0xfc33,	// (0x0001a786) cell_eswt_app_pane_g_ParamLimits

0xfc33,	// (0x0001a786) cell_eswt_app_pane_g

0xcbf5,	// (0x00017748) cell_eswt_app_pane_t1_ParamLimits

0xcbf5,	// (0x00017748) cell_eswt_app_pane_t1

0xcc27,	// (0x0001777a) grid_highlight_pane_cp70_ParamLimits

0xcc27,	// (0x0001777a) grid_highlight_pane_cp70

0x8a71,	// (0x000135c4) set_content_pane_g1

0x8e2b,	// (0x0001397e) status_small_volume_pane

0x6262,	// (0x00010db5) status_small_volume_pane_g1

0x626a,	// (0x00010dbd) volume_small2_pane

0x6273,	// (0x00010dc6) volume_small2_pane_g1

0x627c,	// (0x00010dcf) volume_small2_pane_g2

0x6285,	// (0x00010dd8) volume_small2_pane_g3

0x628e,	// (0x00010de1) volume_small2_pane_g4

0x6297,	// (0x00010dea) volume_small2_pane_g5

0x62a0,	// (0x00010df3) volume_small2_pane_g6

0x62a9,	// (0x00010dfc) volume_small2_pane_g7

0x62b2,	// (0x00010e05) volume_small2_pane_g8

0x62bb,	// (0x00010e0e) volume_small2_pane_g9

0x62c4,	// (0x00010e17) volume_small2_pane_g10

0x0009,

0xfc38,	// (0x0001a78b) volume_small2_pane_g

0xc2dc,	// (0x00016e2f) fep_vkb_top_text_pane_g1_ParamLimits

0xc2f7,	// (0x00016e4a) fep_vkb_top_text_pane_t1_ParamLimits

0xc551,	// (0x000170a4) popup_preview_fixed_window_g3_ParamLimits

0xc551,	// (0x000170a4) popup_preview_fixed_window_g3

0x58f0,	// (0x00010443) popup_toolbar_trans_pane

0xa8c7,	// (0x0001541a) aid_height_set_list_ParamLimits

0xa8d8,	// (0x0001542b) aid_size_parent_ParamLimits

0x8ed2,	// (0x00013a25) list_highlight_pane_cp2_ParamLimits

0x8a71,	// (0x000135c4) set_content_pane_g1_ParamLimits

0xaba1,	// (0x000156f4) list_single_image_pane_ParamLimits

0xaba1,	// (0x000156f4) list_single_image_pane

0xcc33,	// (0x00017786) aid_size_cell_image_ParamLimits

0xcc33,	// (0x00017786) aid_size_cell_image

0xcc40,	// (0x00017793) grid_single_image_pane_ParamLimits

0xcc40,	// (0x00017793) grid_single_image_pane

0xcc4c,	// (0x0001779f) list_single_image_pane_g1_ParamLimits

0xcc4c,	// (0x0001779f) list_single_image_pane_g1

0xcc58,	// (0x000177ab) list_single_image_pane_g2_ParamLimits

0xcc58,	// (0x000177ab) list_single_image_pane_g2

0x0001,

0xfc4d,	// (0x0001a7a0) list_single_image_pane_g_ParamLimits

0xfc4d,	// (0x0001a7a0) list_single_image_pane_g

0xcc6c,	// (0x000177bf) list_single_image_pane_t1_ParamLimits

0xcc6c,	// (0x000177bf) list_single_image_pane_t1

0xcc82,	// (0x000177d5) cell_image_list_pane_ParamLimits

0xcc82,	// (0x000177d5) cell_image_list_pane

0xcc96,	// (0x000177e9) cell_image_list_pane_g1

0xcc9f,	// (0x000177f2) cell_image_list_pane_g2

0x0001,

0xfc52,	// (0x0001a7a5) cell_image_list_pane_g

0xcca8,	// (0x000177fb) aid_size_cell_tb_trans_pane

0x7d4d,	// (0x000128a0) bg_tb_trans_pane

0xccba,	// (0x0001780d) grid_tb_trans_pane

0x93ee,	// (0x00013f41) bg_tb_trans_pane_g1

0x93fe,	// (0x00013f51) bg_tb_trans_pane_g2

0x93f6,	// (0x00013f49) bg_tb_trans_pane_g3

0x940e,	// (0x00013f61) bg_tb_trans_pane_g4

0x9406,	// (0x00013f59) bg_tb_trans_pane_g5

0x942e,	// (0x00013f81) bg_tb_trans_pane_g6

0x9426,	// (0x00013f79) bg_tb_trans_pane_g7

0x9416,	// (0x00013f69) bg_tb_trans_pane_g8

0x941e,	// (0x00013f71) bg_tb_trans_pane_g9

0x0008,

0xfc57,	// (0x0001a7aa) bg_tb_trans_pane_g

0xccce,	// (0x00017821) cell_toolbar_trans_pane_ParamLimits

0xccce,	// (0x00017821) cell_toolbar_trans_pane

0xbf26,	// (0x00016a79) cell_toolbar_trans_pane_g1

0xba87,	// (0x000165da) list_form2_midp_pane_t1

0xba95,	// (0x000165e8) list_form2_midp_pane_t2

0x0001,

0xfaf4,	// (0x0001a647) list_form2_midp_pane_t

0xbaa3,	// (0x000165f6) scroll_pane_cp51_ParamLimits

0xbca9,	// (0x000167fc) form2_midp_wait_pane_g1

0xbcb2,	// (0x00016805) form2_midp_wait_pane_g2

0xbcbb,	// (0x0001680e) form2_midp_wait_pane_g3

0x0002,

0xfb09,	// (0x0001a65c) form2_midp_wait_pane_g

0x6f8e,	// (0x00011ae1) list_highlight_pane_cp21_ParamLimits

0xbd09,	// (0x0001685c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd18,	// (0x0001686b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xab1a,	// (0x0001566d) list_single_2graphic_im_pane_ParamLimits

0xab1a,	// (0x0001566d) list_single_2graphic_im_pane

0xccf4,	// (0x00017847) list_single_2graphic_im_pane_g1_ParamLimits

0xccf4,	// (0x00017847) list_single_2graphic_im_pane_g1

0xcd05,	// (0x00017858) list_single_2graphic_im_pane_g2_ParamLimits

0xcd05,	// (0x00017858) list_single_2graphic_im_pane_g2

0xcd11,	// (0x00017864) list_single_2graphic_im_pane_g3_ParamLimits

0xcd11,	// (0x00017864) list_single_2graphic_im_pane_g3

0x0003,

0xfc6a,	// (0x0001a7bd) list_single_2graphic_im_pane_g_ParamLimits

0xfc6a,	// (0x0001a7bd) list_single_2graphic_im_pane_g

0xcd31,	// (0x00017884) list_single_2graphic_im_pane_t1_ParamLimits

0xcd31,	// (0x00017884) list_single_2graphic_im_pane_t1

0xc55d,	// (0x000170b0) list_single_graphic_2heading_pane_fp_ParamLimits

0xc55d,	// (0x000170b0) list_single_graphic_2heading_pane_fp

0xc5a2,	// (0x000170f5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc5a2,	// (0x000170f5) list_single_graphic_2heading_pane_fp_g1

0xc573,	// (0x000170c6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc573,	// (0x000170c6) list_single_graphic_2heading_pane_fp_g2

0x79c6,	// (0x00012519) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x79c6,	// (0x00012519) list_single_graphic_2heading_pane_fp_g3

0x7d73,	// (0x000128c6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7d73,	// (0x000128c6) list_single_graphic_2heading_pane_fp_g4

0xc57f,	// (0x000170d2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc57f,	// (0x000170d2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb91,	// (0x0001a6e4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb91,	// (0x0001a6e4) list_single_graphic_2heading_pane_fp_g

0xcd62,	// (0x000178b5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcd62,	// (0x000178b5) list_single_graphic_2heading_pane_fp_t1

0xc5da,	// (0x0001712d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc5da,	// (0x0001712d) list_single_graphic_2heading_pane_fp_t2

0xcd78,	// (0x000178cb) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcd78,	// (0x000178cb) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc73,	// (0x0001a7c6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc73,	// (0x0001a7c6) list_single_graphic_2heading_pane_fp_t

0xbfb2,	// (0x00016b05) fep_hwr_write_pane_g5_ParamLimits

0xbfb2,	// (0x00016b05) fep_hwr_write_pane_g5

0xbfbe,	// (0x00016b11) fep_hwr_write_pane_g6_ParamLimits

0xbfbe,	// (0x00016b11) fep_hwr_write_pane_g6

0xca19,	// (0x0001756c) eswt_shell_pane_ParamLimits

0x9512,	// (0x00014065) bg_popup_window_pane_cp18_ParamLimits

0xa814,	// (0x00015367) heading_pane_cp70

0xcb43,	// (0x00017696) popup_eswt_tasktip_window_t1_ParamLimits

0x8f51,	// (0x00013aa4) aid_touch_tab_arrow_left

0x8f5d,	// (0x00013ab0) aid_touch_tab_arrow_right

0x6ed6,	// (0x00011a29) title_pane_g3_ParamLimits

0x6ed6,	// (0x00011a29) title_pane_g3

0x7c38,	// (0x0001278b) set_value_pane_g1

0x58f0,	// (0x00010443) popup_toolbar_trans_pane_ParamLimits

0xcca8,	// (0x000177fb) aid_size_cell_tb_trans_pane_ParamLimits

0x7d4d,	// (0x000128a0) bg_tb_trans_pane_ParamLimits

0xccba,	// (0x0001780d) grid_tb_trans_pane_ParamLimits

0x7231,	// (0x00011d84) cont_note_pane_ParamLimits

0x7231,	// (0x00011d84) cont_note_pane

0x7573,	// (0x000120c6) cont_snote2_single_text_pane_ParamLimits

0x7573,	// (0x000120c6) cont_snote2_single_text_pane

0x7573,	// (0x000120c6) cont_snote2_single_graphic_pane_ParamLimits

0x7573,	// (0x000120c6) cont_snote2_single_graphic_pane

0x9b69,	// (0x000146bc) cont_note_wait_pane_ParamLimits

0x9b69,	// (0x000146bc) cont_note_wait_pane

0x9b69,	// (0x000146bc) cont_note_image_pane_ParamLimits

0x9b69,	// (0x000146bc) cont_note_image_pane

0xcd8e,	// (0x000178e1) popup_note2_window_g1_ParamLimits

0xcd8e,	// (0x000178e1) popup_note2_window_g1

0xcdbf,	// (0x00017912) popup_note2_window_t1_ParamLimits

0xcdbf,	// (0x00017912) popup_note2_window_t1

0xce04,	// (0x00017957) popup_note2_window_t2_ParamLimits

0xce04,	// (0x00017957) popup_note2_window_t2

0xce49,	// (0x0001799c) popup_note2_window_t3_ParamLimits

0xce49,	// (0x0001799c) popup_note2_window_t3

0xce8e,	// (0x000179e1) popup_note2_window_t4_ParamLimits

0xce8e,	// (0x000179e1) popup_note2_window_t4

0x72a9,	// (0x00011dfc) popup_note2_window_t5_ParamLimits

0x72a9,	// (0x00011dfc) popup_note2_window_t5

0x0004,

0xfc7f,	// (0x0001a7d2) popup_note2_window_t_ParamLimits

0xfc7f,	// (0x0001a7d2) popup_note2_window_t

0xcebd,	// (0x00017a10) popup_note2_image_window_g1_ParamLimits

0xcebd,	// (0x00017a10) popup_note2_image_window_g1

0xcec9,	// (0x00017a1c) popup_note2_image_window_g2_ParamLimits

0xcec9,	// (0x00017a1c) popup_note2_image_window_g2

0x0001,

0xfc8a,	// (0x0001a7dd) popup_note2_image_window_g_ParamLimits

0xfc8a,	// (0x0001a7dd) popup_note2_image_window_g

0xcedb,	// (0x00017a2e) popup_note2_image_window_t1_ParamLimits

0xcedb,	// (0x00017a2e) popup_note2_image_window_t1

0xcef3,	// (0x00017a46) popup_note2_image_window_t2_ParamLimits

0xcef3,	// (0x00017a46) popup_note2_image_window_t2

0xcf0b,	// (0x00017a5e) popup_note2_image_window_t3_ParamLimits

0xcf0b,	// (0x00017a5e) popup_note2_image_window_t3

0x0002,

0xfc8f,	// (0x0001a7e2) popup_note2_image_window_t_ParamLimits

0xfc8f,	// (0x0001a7e2) popup_note2_image_window_t

0x9b77,	// (0x000146ca) popup_note2_wait_window_g1_ParamLimits

0x9b77,	// (0x000146ca) popup_note2_wait_window_g1

0xcf27,	// (0x00017a7a) popup_note2_wait_window_g2_ParamLimits

0xcf27,	// (0x00017a7a) popup_note2_wait_window_g2

0x9b8f,	// (0x000146e2) popup_note2_wait_window_g3_ParamLimits

0x9b8f,	// (0x000146e2) popup_note2_wait_window_g3

0x0002,

0xfc96,	// (0x0001a7e9) popup_note2_wait_window_g_ParamLimits

0xfc96,	// (0x0001a7e9) popup_note2_wait_window_g

0xcf33,	// (0x00017a86) popup_note2_wait_window_t1_ParamLimits

0xcf33,	// (0x00017a86) popup_note2_wait_window_t1

0xcf51,	// (0x00017aa4) popup_note2_wait_window_t2_ParamLimits

0xcf51,	// (0x00017aa4) popup_note2_wait_window_t2

0xcf6f,	// (0x00017ac2) popup_note2_wait_window_t3_ParamLimits

0xcf6f,	// (0x00017ac2) popup_note2_wait_window_t3

0xcf81,	// (0x00017ad4) popup_note2_wait_window_t4_ParamLimits

0xcf81,	// (0x00017ad4) popup_note2_wait_window_t4

0x0003,

0xfc9d,	// (0x0001a7f0) popup_note2_wait_window_t_ParamLimits

0xfc9d,	// (0x0001a7f0) popup_note2_wait_window_t

0xcf93,	// (0x00017ae6) wait_bar2_pane_ParamLimits

0xcf93,	// (0x00017ae6) wait_bar2_pane

0xcfab,	// (0x00017afe) popup_snote2_single_text_window_g1_ParamLimits

0xcfab,	// (0x00017afe) popup_snote2_single_text_window_g1

0xcfd3,	// (0x00017b26) popup_snote2_single_text_window_t1_ParamLimits

0xcfd3,	// (0x00017b26) popup_snote2_single_text_window_t1

0xd01f,	// (0x00017b72) popup_snote2_single_text_window_t2_ParamLimits

0xd01f,	// (0x00017b72) popup_snote2_single_text_window_t2

0xd06b,	// (0x00017bbe) popup_snote2_single_text_window_t3_ParamLimits

0xd06b,	// (0x00017bbe) popup_snote2_single_text_window_t3

0xd0ac,	// (0x00017bff) popup_snote2_single_text_window_t4_ParamLimits

0xd0ac,	// (0x00017bff) popup_snote2_single_text_window_t4

0xd0e2,	// (0x00017c35) popup_snote2_single_text_window_t5_ParamLimits

0xd0e2,	// (0x00017c35) popup_snote2_single_text_window_t5

0x0004,

0xfca6,	// (0x0001a7f9) popup_snote2_single_text_window_t_ParamLimits

0xfca6,	// (0x0001a7f9) popup_snote2_single_text_window_t

0xd10d,	// (0x00017c60) popup_snote2_single_graphic_window_g1_ParamLimits

0xd10d,	// (0x00017c60) popup_snote2_single_graphic_window_g1

0xd135,	// (0x00017c88) popup_snote2_single_graphic_window_g2_ParamLimits

0xd135,	// (0x00017c88) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb1,	// (0x0001a804) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb1,	// (0x0001a804) popup_snote2_single_graphic_window_g

0xd15d,	// (0x00017cb0) popup_snote2_single_graphic_window_t1_ParamLimits

0xd15d,	// (0x00017cb0) popup_snote2_single_graphic_window_t1

0xd1a9,	// (0x00017cfc) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1a9,	// (0x00017cfc) popup_snote2_single_graphic_window_t2

0xd06b,	// (0x00017bbe) popup_snote2_single_graphic_window_t3_ParamLimits

0xd06b,	// (0x00017bbe) popup_snote2_single_graphic_window_t3

0xd0ac,	// (0x00017bff) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0ac,	// (0x00017bff) popup_snote2_single_graphic_window_t4

0xd0e2,	// (0x00017c35) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0e2,	// (0x00017c35) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb6,	// (0x0001a809) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb6,	// (0x0001a809) popup_snote2_single_graphic_window_t

0xb95e,	// (0x000164b1) clock_nsta_pane_cp2_t1

0xb95e,	// (0x000164b1) clock_nsta_pane_cp2_t2

0x0001,

0xfaca,	// (0x0001a61d) clock_nsta_pane_cp2_t

0x7d67,	// (0x000128ba) form_field_data_wide_pane_g1_ParamLimits

0x79c6,	// (0x00012519) form_field_data_wide_pane_g2_ParamLimits

0x79c6,	// (0x00012519) form_field_data_wide_pane_g2

0x7d73,	// (0x000128c6) form_field_data_wide_pane_g3_ParamLimits

0x7d73,	// (0x000128c6) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001a1c9) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001a1c9) form_field_data_wide_pane_g

0xb850,	// (0x000163a3) grid_touch_3_pane_ParamLimits

0xb850,	// (0x000163a3) grid_touch_3_pane

0xd1f5,	// (0x00017d48) cell_touch_3_pane_ParamLimits

0xd1f5,	// (0x00017d48) cell_touch_3_pane

0xbf26,	// (0x00016a79) cell_touch_3_pane_g1

0xbf26,	// (0x00016a79) cell_touch_3_pane_g2

0x0001,

0xfb4f,	// (0x0001a6a2) cell_touch_3_pane_g

0x72db,	// (0x00011e2e) cont_query_data_pane

0x72e3,	// (0x00011e36) cont_query_data_pane_cp1

0xd226,	// (0x00017d79) button_value_adjust_pane_cp7

0xd22e,	// (0x00017d81) query_popup_pane_cp3

0x85ed,	// (0x00013140) bg_popup_sub_pane_cp22_ParamLimits

0x504d,	// (0x0000fba0) navi_navi_volume_pane_cp2

0x5065,	// (0x0000fbb8) popup_side_volume_key_window_g2

0x5071,	// (0x0000fbc4) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001a25f) popup_side_volume_key_window_g

0x508b,	// (0x0000fbde) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001a266) popup_side_volume_key_window_t

0x8932,	// (0x00013485) popup_side_volume_key_window_ParamLimits

0x7986,	// (0x000124d9) list_double_graphic_pane_g4_ParamLimits

0x7986,	// (0x000124d9) list_double_graphic_pane_g4

0xab5f,	// (0x000156b2) list_single_2heading_msg_pane_ParamLimits

0xab5f,	// (0x000156b2) list_single_2heading_msg_pane

0xd25d,	// (0x00017db0) list_single_2heading_msg_pane_g1_ParamLimits

0xd25d,	// (0x00017db0) list_single_2heading_msg_pane_g1

0x77b5,	// (0x00012308) list_single_2heading_msg_pane_g2_ParamLimits

0x77b5,	// (0x00012308) list_single_2heading_msg_pane_g2

0xb3bf,	// (0x00015f12) list_single_2heading_msg_pane_g3_ParamLimits

0xb3bf,	// (0x00015f12) list_single_2heading_msg_pane_g3

0xd269,	// (0x00017dbc) list_single_2heading_msg_pane_g4_ParamLimits

0xd269,	// (0x00017dbc) list_single_2heading_msg_pane_g4

0x0003,

0xfcc1,	// (0x0001a814) list_single_2heading_msg_pane_g_ParamLimits

0xfcc1,	// (0x0001a814) list_single_2heading_msg_pane_g

0xd281,	// (0x00017dd4) list_single_2heading_msg_pane_t1_ParamLimits

0xd281,	// (0x00017dd4) list_single_2heading_msg_pane_t1

0xd2a9,	// (0x00017dfc) list_single_2heading_msg_pane_t2_ParamLimits

0xd2a9,	// (0x00017dfc) list_single_2heading_msg_pane_t2

0xd2dd,	// (0x00017e30) list_single_2heading_msg_pane_t3_ParamLimits

0xd2dd,	// (0x00017e30) list_single_2heading_msg_pane_t3

0xd316,	// (0x00017e69) list_single_2heading_msg_pane_t4_ParamLimits

0xd316,	// (0x00017e69) list_single_2heading_msg_pane_t4

0x0003,

0xfcca,	// (0x0001a81d) list_single_2heading_msg_pane_t_ParamLimits

0xfcca,	// (0x0001a81d) list_single_2heading_msg_pane_t

0x6ee2,	// (0x00011a35) title_pane_g4_ParamLimits

0x6ee2,	// (0x00011a35) title_pane_g4

0x4e5b,	// (0x0000f9ae) title_pane_stacon_g3_ParamLimits

0x4e5b,	// (0x0000f9ae) title_pane_stacon_g3

0xcd25,	// (0x00017878) list_single_2graphic_im_pane_g4_ParamLimits

0xcd25,	// (0x00017878) list_single_2graphic_im_pane_g4

0xa5d0,	// (0x00015123) popup_side_volume_key_window_cp

0xaed4,	// (0x00015a27) main_idle_act2_pane_t1

0x5a4a,	// (0x0001059d) toolbar_button_pane_g10

0x776b,	// (0x000122be) popup_toolbar_window_cp1

0xb94f,	// (0x000164a2) clock_nsta_pane_cp_t1

0xb94f,	// (0x000164a2) clock_nsta_pane_cp_t2

0x0001,

0xfac5,	// (0x0001a618) clock_nsta_pane_cp_t

0x504d,	// (0x0000fba0) navi_navi_volume_pane_cp2_ParamLimits

0x5059,	// (0x0000fbac) popup_side_volume_key_window_g1_ParamLimits

0x5065,	// (0x0000fbb8) popup_side_volume_key_window_g2_ParamLimits

0x5071,	// (0x0000fbc4) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001a25f) popup_side_volume_key_window_g_ParamLimits

0x5ece,	// (0x00010a21) fep_hwr_aid_pane

0x5f75,	// (0x00010ac8) bg_fep_hwr_top_pane_g4_ParamLimits

0xbf82,	// (0x00016ad5) fep_hwr_top_pane_g1_ParamLimits

0xbf94,	// (0x00016ae7) fep_hwr_top_pane_g2_ParamLimits

0x5f95,	// (0x00010ae8) fep_hwr_top_pane_g3_ParamLimits

0xfb1a,	// (0x0001a66d) fep_hwr_top_pane_g_ParamLimits

0x5faa,	// (0x00010afd) fep_hwr_top_text_pane_ParamLimits

0xa393,	// (0x00014ee6) aid_touch_tab_arrow_arrow_2

0xa39c,	// (0x00014eef) aid_touch_tab_arrow_left_2

0x5ee2,	// (0x00010a35) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5f19,	// (0x00010a6c) fep_hwr_prediction_pane

0xc0eb,	// (0x00016c3e) fep_vkb_prediction_pane

0xc1e8,	// (0x00016d3b) fep_vkb_side_pane_g3_ParamLimits

0xc1e8,	// (0x00016d3b) fep_vkb_side_pane_g3

0x6125,	// (0x00010c78) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6191,	// (0x00010ce4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x619e,	// (0x00010cf1) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc9,	// (0x0001a71c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x62cd,	// (0x00010e20) fep_hwr_prediction_pane_g1

0x62d7,	// (0x00010e2a) fep_hwr_prediction_pane_g2

0x62df,	// (0x00010e32) fep_hwr_prediction_pane_g3

0x62e7,	// (0x00010e3a) fep_hwr_prediction_pane_g4

0x0003,

0xfcd3,	// (0x0001a826) fep_hwr_prediction_pane_g

0xd33b,	// (0x00017e8e) fep_vkb_prediction_pane_g1

0xd345,	// (0x00017e98) fep_vkb_prediction_pane_g2

0xd34d,	// (0x00017ea0) fep_vkb_prediction_pane_g3

0xd355,	// (0x00017ea8) fep_vkb_prediction_pane_g4

0x0003,

0xfcdc,	// (0x0001a82f) fep_vkb_prediction_pane_g

0x5d2a,	// (0x0001087d) slider_set_pane_g3

0x5d3e,	// (0x00010891) slider_set_pane_g4

0x5d56,	// (0x000108a9) slider_set_pane_g5

0x5d2a,	// (0x0001087d) slider_set_pane_g6

0x5d6c,	// (0x000108bf) slider_set_pane_g7

0xaa35,	// (0x00015588) slider_form_pane_g3

0xaa3e,	// (0x00015591) slider_form_pane_g4

0xaa46,	// (0x00015599) slider_form_pane_g5

0xaa35,	// (0x00015588) slider_form_pane_g6

0xaa4e,	// (0x000155a1) slider_form_pane_g7

0xb1cb,	// (0x00015d1e) slider_set_pane_vc_g3

0xb1d4,	// (0x00015d27) slider_set_pane_vc_g4

0xb1dd,	// (0x00015d30) slider_set_pane_vc_g5

0xb1cb,	// (0x00015d1e) slider_set_pane_vc_g6

0xb1e6,	// (0x00015d39) slider_set_pane_vc_g7

0xb625,	// (0x00016178) slider_form_pane_vc_g1

0xb62e,	// (0x00016181) slider_form_pane_vc_g2

0xb637,	// (0x0001618a) slider_form_pane_vc_g3

0xb625,	// (0x00016178) slider_form_pane_vc_g4

0xb640,	// (0x00016193) slider_form_pane_vc_g5

0x0004,

0xfa97,	// (0x0001a5ea) slider_form_pane_vc_g

0x4b2f,	// (0x0000f682) main_idle_act3_pane

0xd35d,	// (0x00017eb0) ai3_links_pane

0xd366,	// (0x00017eb9) popup_ai3_data_window_ParamLimits

0xd366,	// (0x00017eb9) popup_ai3_data_window

0x6e9a,	// (0x000119ed) grid_ai3_links_pane

0xd37e,	// (0x00017ed1) cell_ai3_links_pane_ParamLimits

0xd37e,	// (0x00017ed1) cell_ai3_links_pane

0xd396,	// (0x00017ee9) bg_popup_sub_pane_cp11

0xd3a3,	// (0x00017ef6) cell_ai3_links_pane_g1

0x6e9a,	// (0x000119ed) bg_popup_sub_pane_cp12

0xd3c8,	// (0x00017f1b) heading_ai3_data_pane

0xd3d0,	// (0x00017f23) list_ai3_gene_pane

0xd3dc,	// (0x00017f2f) popup_ai3_data_window_g1

0xd3e4,	// (0x00017f37) heading_ai3_data_pane_g1

0xd3ec,	// (0x00017f3f) heading_ai3_data_pane_t1

0xd3fa,	// (0x00017f4d) list_double_ai3_gene_pane_ParamLimits

0xd3fa,	// (0x00017f4d) list_double_ai3_gene_pane

0xd407,	// (0x00017f5a) list_single_ai3_gene_pane_ParamLimits

0xd407,	// (0x00017f5a) list_single_ai3_gene_pane

0xbeeb,	// (0x00016a3e) list_highlight_pane_cp7_ParamLimits

0xbeeb,	// (0x00016a3e) list_highlight_pane_cp7

0xd414,	// (0x00017f67) list_single_a13_gene_pane_t1_ParamLimits

0xd414,	// (0x00017f67) list_single_a13_gene_pane_t1

0xd42b,	// (0x00017f7e) list_single_ai3_gene_pane_g1

0xd434,	// (0x00017f87) list_single_ai3_gene_pane_g2

0x0001,

0xfce5,	// (0x0001a838) list_single_ai3_gene_pane_g

0xd43c,	// (0x00017f8f) list_double_ai3_gene_pane_g1_ParamLimits

0xd43c,	// (0x00017f8f) list_double_ai3_gene_pane_g1

0xd448,	// (0x00017f9b) list_double_ai3_gene_pane_t1_ParamLimits

0xd448,	// (0x00017f9b) list_double_ai3_gene_pane_t1

0xd464,	// (0x00017fb7) list_double_ai3_gene_pane_t2_ParamLimits

0xd464,	// (0x00017fb7) list_double_ai3_gene_pane_t2

0xd479,	// (0x00017fcc) list_double_ai3_gene_pane_t3_ParamLimits

0xd479,	// (0x00017fcc) list_double_ai3_gene_pane_t3

0x0002,

0xfcea,	// (0x0001a83d) list_double_ai3_gene_pane_t_ParamLimits

0xfcea,	// (0x0001a83d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd23f,	// (0x00017d92) aid_size_min_col_2

0xd249,	// (0x00017d9c) aid_size_min_msg_ParamLimits

0xd249,	// (0x00017d9c) aid_size_min_msg

0xc2e8,	// (0x00016e3b) fep_vkb_top_text_pane_g2_ParamLimits

0xc2e8,	// (0x00016e3b) fep_vkb_top_text_pane_g2

0x0001,

0xfb4a,	// (0x0001a69d) fep_vkb_top_text_pane_g_ParamLimits

0xfb4a,	// (0x0001a69d) fep_vkb_top_text_pane_g

0x4b2f,	// (0x0000f682) main_hc_apps_shell_pane

0xd496,	// (0x00017fe9) grid_hc_apps_pane_ParamLimits

0xd496,	// (0x00017fe9) grid_hc_apps_pane

0xd4a5,	// (0x00017ff8) list_hc_apps_pane

0xd4ad,	// (0x00018000) scroll_pane_cp37_ParamLimits

0xd4ad,	// (0x00018000) scroll_pane_cp37

0xd4b9,	// (0x0001800c) cell_hc_apps_pane_ParamLimits

0xd4b9,	// (0x0001800c) cell_hc_apps_pane

0xd567,	// (0x000180ba) cell_hc_apps_pane_g1_ParamLimits

0xd567,	// (0x000180ba) cell_hc_apps_pane_g1

0xd598,	// (0x000180eb) cell_hc_apps_pane_g2_ParamLimits

0xd598,	// (0x000180eb) cell_hc_apps_pane_g2

0xd5b4,	// (0x00018107) cell_hc_apps_pane_g3_ParamLimits

0xd5b4,	// (0x00018107) cell_hc_apps_pane_g3

0x0002,

0xfcf1,	// (0x0001a844) cell_hc_apps_pane_g_ParamLimits

0xfcf1,	// (0x0001a844) cell_hc_apps_pane_g

0xd5d6,	// (0x00018129) cell_hc_apps_pane_t1_ParamLimits

0xd5d6,	// (0x00018129) cell_hc_apps_pane_t1

0x7231,	// (0x00011d84) grid_highlight_pane_cp10_ParamLimits

0x7231,	// (0x00011d84) grid_highlight_pane_cp10

0xd616,	// (0x00018169) list_single_hc_apps_pane_ParamLimits

0xd616,	// (0x00018169) list_single_hc_apps_pane

0xd67e,	// (0x000181d1) list_single_hc_apps_pane_g1

0xd697,	// (0x000181ea) list_single_hc_apps_pane_g2

0x0001,

0xfcf8,	// (0x0001a84b) list_single_hc_apps_pane_g

0xd6b0,	// (0x00018203) list_single_hc_apps_pane_g2_copy1

0xd6cc,	// (0x0001821f) list_single_hc_apps_pane_t1

0x6f8e,	// (0x00011ae1) bg_set_opt_pane_cp_ParamLimits

0x4d82,	// (0x0000f8d5) setting_slider_pane_t1_ParamLimits

0x4d9b,	// (0x0000f8ee) setting_slider_pane_t2_ParamLimits

0x4db5,	// (0x0000f908) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001a0b1) setting_slider_pane_t_ParamLimits

0x4dcd,	// (0x0000f920) slider_set_pane_ParamLimits

0x52ed,	// (0x0000fe40) control_pane_g5_ParamLimits

0x52ed,	// (0x0000fe40) control_pane_g5

0xa892,	// (0x000153e5) slider_set_pane_g1_ParamLimits

0x5d1e,	// (0x00010871) slider_set_pane_g2_ParamLimits

0x5d2a,	// (0x0001087d) slider_set_pane_g3_ParamLimits

0x5d3e,	// (0x00010891) slider_set_pane_g4_ParamLimits

0x5d56,	// (0x000108a9) slider_set_pane_g5_ParamLimits

0x5d2a,	// (0x0001087d) slider_set_pane_g6_ParamLimits

0x5d6c,	// (0x000108bf) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x0001a4ad) slider_set_pane_g_ParamLimits

0x8a1c,	// (0x0001356f) navi_icon_text_pane_ParamLimits

0x8f12,	// (0x00013a65) aid_fill_nsta_2_ParamLimits

0x8f51,	// (0x00013aa4) aid_touch_tab_arrow_left_ParamLimits

0x8f5d,	// (0x00013ab0) aid_touch_tab_arrow_right_ParamLimits

0x8fc9,	// (0x00013b1c) clock_nsta_pane_ParamLimits

0xa375,	// (0x00014ec8) navi_icon_pane_g1_ParamLimits

0xa381,	// (0x00014ed4) navi_text_pane_t1_ParamLimits

0xba61,	// (0x000165b4) navi_icon_text_pane_g1_ParamLimits

0xba6d,	// (0x000165c0) navi_icon_text_pane_t1_ParamLimits

0xd67e,	// (0x000181d1) list_single_hc_apps_pane_g1_ParamLimits

0xd697,	// (0x000181ea) list_single_hc_apps_pane_g2_ParamLimits

0xfcf8,	// (0x0001a84b) list_single_hc_apps_pane_g_ParamLimits

0xd6b0,	// (0x00018203) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd6cc,	// (0x0001821f) list_single_hc_apps_pane_t1_ParamLimits

0x4c8c,	// (0x0000f7df) popup_toolbar2_fixed_window_ParamLimits

0x4c8c,	// (0x0000f7df) popup_toolbar2_fixed_window

0x58e6,	// (0x00010439) popup_toolbar2_float_window

0x6e9a,	// (0x000119ed) bg_popup_sub_pane_cp27

0xd6fa,	// (0x0001824d) grid_toolbar2_float_pane

0x6e9a,	// (0x000119ed) bg_popup_sub_pane_cp26

0xd6fa,	// (0x0001824d) grid_toolbar2_fixed_pane

0xd702,	// (0x00018255) cell_toolbar2_fixed_pane_ParamLimits

0xd702,	// (0x00018255) cell_toolbar2_fixed_pane

0xd713,	// (0x00018266) cell_toolbar2_fixed_pane_g1

0x57bc,	// (0x0001030f) toolbar2_fixed_button_pane

0x93ee,	// (0x00013f41) toolbar2_fixed_button_pane_g1

0x93fe,	// (0x00013f51) toolbar2_fixed_button_pane_g2

0x93f6,	// (0x00013f49) toolbar2_fixed_button_pane_g3

0x940e,	// (0x00013f61) toolbar2_fixed_button_pane_g4

0x9406,	// (0x00013f59) toolbar2_fixed_button_pane_g5

0x9416,	// (0x00013f69) toolbar2_fixed_button_pane_g6

0x941e,	// (0x00013f71) toolbar2_fixed_button_pane_g7

0x942e,	// (0x00013f81) toolbar2_fixed_button_pane_g8

0x9426,	// (0x00013f79) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x0001a3af) toolbar2_fixed_button_pane_g

0xd71c,	// (0x0001826f) cell_toolbar2_float_pane_ParamLimits

0xd71c,	// (0x0001826f) cell_toolbar2_float_pane

0xd730,	// (0x00018283) cell_toolbar2_float_pane_g1

0x57bc,	// (0x0001030f) toolbar2_fixed_button_pane_cp

0xc052,	// (0x00016ba5) fep_vkb_accented_list_pane_ParamLimits

0xc052,	// (0x00016ba5) fep_vkb_accented_list_pane

0x6105,	// (0x00010c58) bg_popup_fep_shadow_pane_g9

0x8b90,	// (0x000136e3) bg_popup_fep_shadow_pane_cp3

0x8002,	// (0x00012b55) list_accented_list_pane

0xd739,	// (0x0001828c) list_single_accented_list_pane_ParamLimits

0xd739,	// (0x0001828c) list_single_accented_list_pane

0x8b90,	// (0x000136e3) list_highlight_pane_cp10

0xd74a,	// (0x0001829d) list_single_accented_list_pane_t1

0x5836,	// (0x00010389) popup_slider_window_ParamLimits

0x5836,	// (0x00010389) popup_slider_window

0xd236,	// (0x00017d89) aid_indentation_list_msg

0xd804,	// (0x00018357) bg_popup_window_pane_cp19

0xd86e,	// (0x000183c1) popup_slider_window_g1

0xd88a,	// (0x000183dd) popup_slider_window_g2

0xd8a6,	// (0x000183f9) popup_slider_window_g3

0x0005,

0xfcfd,	// (0x0001a850) popup_slider_window_g

0xd902,	// (0x00018455) popup_slider_window_t1

0xd976,	// (0x000184c9) small_volume_slider_vertical_pane

0xbf26,	// (0x00016a79) small_volume_slider_vertical_pane_g1

0xbf26,	// (0x00016a79) small_volume_slider_vertical_pane_g2

0xd992,	// (0x000184e5) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0f,	// (0x0001a862) small_volume_slider_vertical_pane_g

0x4a52,	// (0x0000f5a5) area_side_right_pane_ParamLimits

0x4a52,	// (0x0000f5a5) area_side_right_pane

0x62ef,	// (0x00010e42) aid_size_side_button_ParamLimits

0x62ef,	// (0x00010e42) aid_size_side_button

0x6303,	// (0x00010e56) grid_sctrl_middle_pane_ParamLimits

0x6303,	// (0x00010e56) grid_sctrl_middle_pane

0x6322,	// (0x00010e75) sctrl_sk_bottom_pane

0x6333,	// (0x00010e86) sctrl_sk_top_pane

0x6345,	// (0x00010e98) aid_touch_sctrl_top

0x6352,	// (0x00010ea5) bg_sctrl_sk_pane_ParamLimits

0x6352,	// (0x00010ea5) bg_sctrl_sk_pane

0x6360,	// (0x00010eb3) sctrl_sk_top_pane_g1

0x636d,	// (0x00010ec0) sctrl_sk_top_pane_t1

0x6345,	// (0x00010e98) aid_touch_sctrl_bottom

0x6352,	// (0x00010ea5) bg_sctrl_sk_pane_cp_ParamLimits

0x6352,	// (0x00010ea5) bg_sctrl_sk_pane_cp

0x6388,	// (0x00010edb) sctrl_sk_bottom_pane_g1

0x636d,	// (0x00010ec0) sctrl_sk_bottom_pane_t1

0x6391,	// (0x00010ee4) cell_sctrl_middle_pane_ParamLimits

0x6391,	// (0x00010ee4) cell_sctrl_middle_pane

0x63ac,	// (0x00010eff) aid_touch_sctrl_middle_ParamLimits

0x63ac,	// (0x00010eff) aid_touch_sctrl_middle

0x63be,	// (0x00010f11) bg_sctrl_middle_pane_ParamLimits

0x63be,	// (0x00010f11) bg_sctrl_middle_pane

0x6125,	// (0x00010c78) cell_sctrl_middle_pane_g1_ParamLimits

0x6125,	// (0x00010c78) cell_sctrl_middle_pane_g1

0x63cc,	// (0x00010f1f) cell_sctrl_middle_pane_g2_ParamLimits

0x63cc,	// (0x00010f1f) cell_sctrl_middle_pane_g2

0x0001,

0xfd1b,	// (0x0001a86e) cell_sctrl_middle_pane_g_ParamLimits

0xfd1b,	// (0x0001a86e) cell_sctrl_middle_pane_g

0x93ee,	// (0x00013f41) bg_sctrl_middle_pane_g1

0x93f6,	// (0x00013f49) bg_sctrl_middle_pane_g2

0x93fe,	// (0x00013f51) bg_sctrl_middle_pane_g3

0x9406,	// (0x00013f59) bg_sctrl_middle_pane_g4

0x940e,	// (0x00013f61) bg_sctrl_middle_pane_g5

0x9416,	// (0x00013f69) bg_sctrl_middle_pane_g6

0x941e,	// (0x00013f71) bg_sctrl_middle_pane_g7

0x9426,	// (0x00013f79) bg_sctrl_middle_pane_g8

0x0007,

0xfd20,	// (0x0001a873) bg_sctrl_middle_pane_g

0x942e,	// (0x00013f81) bg_sctrl_middle_pane_g8_copy1

0x93ee,	// (0x00013f41) bg_sctrl_sk_pane_g1

0x93fe,	// (0x00013f51) bg_sctrl_sk_pane_g2

0x93f6,	// (0x00013f49) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x0001a3af) bg_sctrl_sk_pane_g

0x7731,	// (0x00012284) aid_size_touch_scroll_bar

0x940e,	// (0x00013f61) bg_sctrl_sk_pane_g4

0x9406,	// (0x00013f59) bg_sctrl_sk_pane_g5

0x9416,	// (0x00013f69) bg_sctrl_sk_pane_g6

0x941e,	// (0x00013f71) bg_sctrl_sk_pane_g7

0x942e,	// (0x00013f81) bg_sctrl_sk_pane_g8

0x9426,	// (0x00013f79) bg_sctrl_sk_pane_g9

0x54a7,	// (0x0000fffa) popup_fep_china_hwr2_fs_candidate_window

0x54b1,	// (0x00010004) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x54b1,	// (0x00010004) popup_fep_china_hwr2_fs_control_window

0x6125,	// (0x00010c78) sctrl_sk_top_pane_g2

0x0001,

0xfd16,	// (0x0001a869) sctrl_sk_top_pane_g

0xd99b,	// (0x000184ee) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd99b,	// (0x000184ee) aid_fep_china_hwr2_fs_cell

0xd9ad,	// (0x00018500) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9ad,	// (0x00018500) bg_popup_fep_shadow_pane_cp4

0xd9c4,	// (0x00018517) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9c4,	// (0x00018517) bg_popup_fep_shadow_pane_cp5

0xd9d6,	// (0x00018529) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9d6,	// (0x00018529) popup_fep_china_hwr2_fs_control_bar_grid

0xd9e6,	// (0x00018539) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9ee,	// (0x00018541) aid_fep_china_hwr2_fs_candi_cell

0x6e9a,	// (0x000119ed) bg_popup_fep_shadow_pane_cp6

0xd9f8,	// (0x0001854b) popup_fep_china_hwr2_fs_candidate_grid

0xda02,	// (0x00018555) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda02,	// (0x00018555) cell_fep_china_hwr2_fs_funtion_grid

0xbf26,	// (0x00016a79) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda1a,	// (0x0001856d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda1a,	// (0x0001856d) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda28,	// (0x0001857b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda28,	// (0x0001857b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd31,	// (0x0001a884) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd31,	// (0x0001a884) cell_fep_china_hwr2_fs_funtion_grid_g

0xda3e,	// (0x00018591) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda3e,	// (0x00018591) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda53,	// (0x000185a6) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda53,	// (0x000185a6) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd36,	// (0x0001a889) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd36,	// (0x0001a889) cell_fep_china_hwr2_fs_funtion_grid_t

0xda6f,	// (0x000185c2) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda77,	// (0x000185ca) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda7f,	// (0x000185d2) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3b,	// (0x0001a88e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda87,	// (0x000185da) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda87,	// (0x000185da) cell_fep_china_hwr2_fs_candidate_grid

0xdaa0,	// (0x000185f3) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdaa8,	// (0x000185fb) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbf26,	// (0x00016a79) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbf26,	// (0x00016a79) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4f,	// (0x0001a6a2) cell_fep_china_hwr2_fs_candidate_grid_g

0xdab0,	// (0x00018603) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8fd6,	// (0x00013b29) clock_nsta_pane_cp_24_ParamLimits

0x8fd6,	// (0x00013b29) clock_nsta_pane_cp_24

0x9054,	// (0x00013ba7) indicator_nsta_pane_cp_24_ParamLimits

0x9054,	// (0x00013ba7) indicator_nsta_pane_cp_24

0xa1f1,	// (0x00014d44) heading_pane_g1

0x0001,

0xf8c1,	// (0x0001a414) heading_pane_g

0xad1d,	// (0x00015870) grid_sct_catagory_button_pane

0xad4d,	// (0x000158a0) scroll_pane_cp5_ParamLimits

0xbaaf,	// (0x00016602) button_value_adjust_pane_cp5_ParamLimits

0xbaaf,	// (0x00016602) button_value_adjust_pane_cp5

0xbba9,	// (0x000166fc) form2_midp_time_pane_ParamLimits

0xdabe,	// (0x00018611) cell_sct_catagory_button_pane_ParamLimits

0xdabe,	// (0x00018611) cell_sct_catagory_button_pane

0xbeeb,	// (0x00016a3e) bg_button_pane_cp01_ParamLimits

0xbeeb,	// (0x00016a3e) bg_button_pane_cp01

0xbf26,	// (0x00016a79) cell_sct_catagory_button_pane_g1

0x5875,	// (0x000103c8) popup_tb_extension_window

0xdad0,	// (0x00018623) aid_size_cell_ext_ParamLimits

0xdad0,	// (0x00018623) aid_size_cell_ext

0x7231,	// (0x00011d84) bg_tb_trans_pane_cp1_ParamLimits

0x7231,	// (0x00011d84) bg_tb_trans_pane_cp1

0xdaf0,	// (0x00018643) grid_tb_ext_pane_ParamLimits

0xdaf0,	// (0x00018643) grid_tb_ext_pane

0xdb22,	// (0x00018675) cell_tb_ext_pane_ParamLimits

0xdb22,	// (0x00018675) cell_tb_ext_pane

0xdb39,	// (0x0001868c) cell_tb_ext_pane_g1_ParamLimits

0xdb39,	// (0x0001868c) cell_tb_ext_pane_g1

0xdb56,	// (0x000186a9) cell_tb_ext_pane_t1

0x7231,	// (0x00011d84) list_highlight_pane_cp11_ParamLimits

0x7231,	// (0x00011d84) list_highlight_pane_cp11

0x4cab,	// (0x0000f7fe) popup_uni_indicator_window_ParamLimits

0x4cab,	// (0x0000f7fe) popup_uni_indicator_window

0x7d4d,	// (0x000128a0) bg_popup_sub_pane_cp14

0xdb71,	// (0x000186c4) list_uniindi_pane

0xdb7d,	// (0x000186d0) uniindi_top_pane

0x7231,	// (0x00011d84) bg_uniindi_top_pane

0xdb9c,	// (0x000186ef) uniindi_top_pane_g1

0xdbb2,	// (0x00018705) uniindi_top_pane_g2

0x0003,

0xfd42,	// (0x0001a895) uniindi_top_pane_g

0xdbdc,	// (0x0001872f) uniindi_top_pane_t1

0xdc06,	// (0x00018759) list_single_uniindi_pane_ParamLimits

0xdc06,	// (0x00018759) list_single_uniindi_pane

0xbf26,	// (0x00016a79) bg_uniindi_top_pane_g1

0xdc19,	// (0x0001876c) list_single_uniindi_pane_g1

0xdc2c,	// (0x0001877f) list_single_uniindi_pane_t1

0x4b2f,	// (0x0000f682) control_bg_pane

0xdc51,	// (0x000187a4) bg_sctrl_sk_pane_cp1

0xdc5a,	// (0x000187ad) bg_sctrl_sk_pane_cp2

0xdc63,	// (0x000187b6) control_bg_pane_g1

0xdc6c,	// (0x000187bf) control_bg_pane_g2

0x0001,

0xfd4b,	// (0x0001a89e) control_bg_pane_g

0xb8f3,	// (0x00016446) cell_indicator_nsta_pane_g1_ParamLimits

0xb901,	// (0x00016454) cell_indicator_nsta_pane_g2_ParamLimits

0xfab3,	// (0x0001a606) cell_indicator_nsta_pane_g_ParamLimits

0xbc2d,	// (0x00016780) form2_midp_time_pane_t1_ParamLimits

0x5411,	// (0x0000ff64) main_idle_act4_pane_ParamLimits

0x5411,	// (0x0000ff64) main_idle_act4_pane

0x5875,	// (0x000103c8) popup_tb_extension_window_ParamLimits

0xdb12,	// (0x00018665) tb_ext_find_pane_ParamLimits

0xdb12,	// (0x00018665) tb_ext_find_pane

0xdc75,	// (0x000187c8) ai_gene_pane_1_cp1

0x8ccf,	// (0x00013822) ai_gene_pane_2_cp1

0xdc7d,	// (0x000187d0) list_single_idle_plugin_calendar_pane

0xdc86,	// (0x000187d9) list_single_idle_plugin_notification_pane

0xdc8f,	// (0x000187e2) list_single_idle_plugin_player_pane

0xdc98,	// (0x000187eb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc98,	// (0x000187eb) list_single_idle_plugin_shortcut_pane

0xdcba,	// (0x0001880d) main_idle_act4_pane_t1

0xdccc,	// (0x0001881f) main_idle_act4_pane_t2

0x0001,

0xfd50,	// (0x0001a8a3) main_idle_act4_pane_t

0xdcde,	// (0x00018831) middle_sk_idle_act4_pane_ParamLimits

0xdcde,	// (0x00018831) middle_sk_idle_act4_pane

0xdcf4,	// (0x00018847) popup_clock_digital_analogue_window_cp2

0xdd0e,	// (0x00018861) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd0e,	// (0x00018861) shortcut_wheel_idle_act4_pane

0xbf26,	// (0x00016a79) shortcut_wheel_idle_act4_pane_g1

0xbf26,	// (0x00016a79) shortcut_wheel_idle_act4_pane_g2

0xbf26,	// (0x00016a79) shortcut_wheel_idle_act4_pane_g3

0xbf26,	// (0x00016a79) shortcut_wheel_idle_act4_pane_g4

0xbf26,	// (0x00016a79) shortcut_wheel_idle_act4_pane_g5

0xdd22,	// (0x00018875) shortcut_wheel_idle_act4_pane_g6

0xdd2a,	// (0x0001887d) shortcut_wheel_idle_act4_pane_g7

0xdd32,	// (0x00018885) shortcut_wheel_idle_act4_pane_g8

0xdd3a,	// (0x0001888d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd55,	// (0x0001a8a8) shortcut_wheel_idle_act4_pane_g

0xc194,	// (0x00016ce7) middle_sk_idle_act4_pane_g1_ParamLimits

0xc194,	// (0x00016ce7) middle_sk_idle_act4_pane_g1

0xdd9e,	// (0x000188f1) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd9e,	// (0x000188f1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd78,	// (0x0001a8cb) middle_sk_idle_act4_pane_g_ParamLimits

0xfd78,	// (0x0001a8cb) middle_sk_idle_act4_pane_g

0xddaa,	// (0x000188fd) middle_sk_idle_act4_pane_t1_ParamLimits

0xddaa,	// (0x000188fd) middle_sk_idle_act4_pane_t1

0xddc7,	// (0x0001891a) grid_ai_shortcut_pane_ParamLimits

0xddc7,	// (0x0001891a) grid_ai_shortcut_pane

0xdde0,	// (0x00018933) list_highlight_pane_cp16_ParamLimits

0xdde0,	// (0x00018933) list_highlight_pane_cp16

0xdded,	// (0x00018940) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdded,	// (0x00018940) list_single_idle_plugin_shortcut_pane_g1

0xddf9,	// (0x0001894c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xddf9,	// (0x0001894c) list_single_idle_plugin_shortcut_pane_g2

0xde11,	// (0x00018964) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde11,	// (0x00018964) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7d,	// (0x0001a8d0) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7d,	// (0x0001a8d0) list_single_idle_plugin_shortcut_pane_g

0xde24,	// (0x00018977) cell_ai_shortcut_pane_ParamLimits

0xde24,	// (0x00018977) cell_ai_shortcut_pane

0xde45,	// (0x00018998) cell_ai_shortcut_pane_g1_ParamLimits

0xde45,	// (0x00018998) cell_ai_shortcut_pane_g1

0xdc75,	// (0x000187c8) ai_gene_pane_1_cp2

0xde67,	// (0x000189ba) ai_gene_pane_2_cp2

0xde6f,	// (0x000189c2) list_highlight_pane_cp15

0xde78,	// (0x000189cb) list_single_idle_plugin_calendar_pane_g1

0xde6f,	// (0x000189c2) list_highlight_pane_cp17

0xde80,	// (0x000189d3) list_single_idle_plugin_calendar_pane_g1_copy1

0xde88,	// (0x000189db) list_single_idle_plugin_player_pane_g1

0xaf74,	// (0x00015ac7) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd84,	// (0x0001a8d7) list_single_idle_plugin_player_pane_g

0xde90,	// (0x000189e3) list_single_idle_plugin_player_pane_t1

0xde9e,	// (0x000189f1) list_single_idle_plugin_player_pane_t2

0xdeac,	// (0x000189ff) list_single_idle_plugin_player_pane_t3

0xdeba,	// (0x00018a0d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd89,	// (0x0001a8dc) list_single_idle_plugin_player_pane_t

0xdec8,	// (0x00018a1b) wait_bar_pane_cp15

0xded0,	// (0x00018a23) grid_ai_notification_pane

0xaf74,	// (0x00015ac7) list_single_idle_plugin_notification_pane_g1

0xded9,	// (0x00018a2c) cell_ai_notification_pane_ParamLimits

0xded9,	// (0x00018a2c) cell_ai_notification_pane

0xdee6,	// (0x00018a39) cell_ai_notification_pane_g1

0xdeee,	// (0x00018a41) cell_ai_notification_pane_t1

0xdefc,	// (0x00018a4f) tb_ext_find_button_pane

0xdf04,	// (0x00018a57) tb_ext_find_pane_g1

0xdf0c,	// (0x00018a5f) tb_ext_find_pane_t1

0x8501,	// (0x00013054) tb_ext_find_button_pane_g1

0xdf1a,	// (0x00018a6d) tb_ext_find_button_pane_g2

0x0001,

0xfd92,	// (0x0001a8e5) tb_ext_find_button_pane_g

0xdcba,	// (0x0001880d) main_idle_act4_pane_t1_ParamLimits

0xdccc,	// (0x0001881f) main_idle_act4_pane_t2_ParamLimits

0xfd50,	// (0x0001a8a3) main_idle_act4_pane_t_ParamLimits

0xdcf4,	// (0x00018847) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd02,	// (0x00018855) sat_plugin_idle_act4_pane_ParamLimits

0xdd02,	// (0x00018855) sat_plugin_idle_act4_pane

0xdf23,	// (0x00018a76) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf23,	// (0x00018a76) sat_plugin_idle_act4_pane_t1

0xdf36,	// (0x00018a89) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf36,	// (0x00018a89) sat_plugin_idle_act4_pane_t2

0xdf49,	// (0x00018a9c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf49,	// (0x00018a9c) sat_plugin_idle_act4_pane_t3

0xdf5c,	// (0x00018aaf) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf5c,	// (0x00018aaf) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd97,	// (0x0001a8ea) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd97,	// (0x0001a8ea) sat_plugin_idle_act4_pane_t

0x4bf4,	// (0x0000f747) popup_battery_window_ParamLimits

0x4bf4,	// (0x0000f747) popup_battery_window

0x7231,	// (0x00011d84) bg_popup_sub_pane_cp25_ParamLimits

0x7231,	// (0x00011d84) bg_popup_sub_pane_cp25

0xdf6f,	// (0x00018ac2) popup_battery_window_g1_ParamLimits

0xdf6f,	// (0x00018ac2) popup_battery_window_g1

0xdf7b,	// (0x00018ace) popup_battery_window_t1_ParamLimits

0xdf7b,	// (0x00018ace) popup_battery_window_t1

0xdf8d,	// (0x00018ae0) popup_battery_window_t2_ParamLimits

0xdf8d,	// (0x00018ae0) popup_battery_window_t2

0x0001,

0xfda0,	// (0x0001a8f3) popup_battery_window_t_ParamLimits

0xfda0,	// (0x0001a8f3) popup_battery_window_t

0x8b98,	// (0x000136eb) midp_canvas_pane_ParamLimits

0x8c11,	// (0x00013764) midp_keypad_pane_ParamLimits

0x8c11,	// (0x00013764) midp_keypad_pane

0x8ed2,	// (0x00013a25) main_midp_pane_ParamLimits

0xb96d,	// (0x000164c0) signal_pane_g2_cp_ParamLimits

0xdfaa,	// (0x00018afd) aid_size_cell_midp_keypad_ParamLimits

0xdfaa,	// (0x00018afd) aid_size_cell_midp_keypad

0xdfc4,	// (0x00018b17) midp_keyp_game_grid_pane_ParamLimits

0xdfc4,	// (0x00018b17) midp_keyp_game_grid_pane

0xdfe4,	// (0x00018b37) midp_keyp_rocker_pane_ParamLimits

0xdfe4,	// (0x00018b37) midp_keyp_rocker_pane

0xe01d,	// (0x00018b70) midp_keyp_sk_left_pane_ParamLimits

0xe01d,	// (0x00018b70) midp_keyp_sk_left_pane

0xe077,	// (0x00018bca) midp_keyp_sk_right_pane_ParamLimits

0xe077,	// (0x00018bca) midp_keyp_sk_right_pane

0x6e9a,	// (0x000119ed) bg_button_pane_cp03

0xe0d1,	// (0x00018c24) midp_keyp_sk_left_pane_g1

0x6e9a,	// (0x000119ed) bg_button_pane_cp04

0xe0d1,	// (0x00018c24) midp_keyp_sk_right_pane_g1

0xbf26,	// (0x00016a79) midp_keyp_rocker_pane_g1

0xe0da,	// (0x00018c2d) keyp_game_cell_pane_ParamLimits

0xe0da,	// (0x00018c2d) keyp_game_cell_pane

0x6e9a,	// (0x000119ed) bg_button_pane_cp02

0xe0ed,	// (0x00018c40) keyp_game_cell_pane_g1

0x4c2a,	// (0x0000f77d) popup_fep_vkb2_window_ParamLimits

0x4c2a,	// (0x0000f77d) popup_fep_vkb2_window

0x63ea,	// (0x00010f3d) aid_size_cell_vkb2_ParamLimits

0x63ea,	// (0x00010f3d) aid_size_cell_vkb2

0x643e,	// (0x00010f91) popup_fep_vkb2_window_g1_ParamLimits

0x643e,	// (0x00010f91) popup_fep_vkb2_window_g1

0x6486,	// (0x00010fd9) vkb2_area_bottom_pane_ParamLimits

0x6486,	// (0x00010fd9) vkb2_area_bottom_pane

0x64d2,	// (0x00011025) vkb2_area_keypad_pane_ParamLimits

0x64d2,	// (0x00011025) vkb2_area_keypad_pane

0x6514,	// (0x00011067) vkb2_area_top_pane_ParamLimits

0x6514,	// (0x00011067) vkb2_area_top_pane

0x658e,	// (0x000110e1) vkb2_top_entry_pane_ParamLimits

0x658e,	// (0x000110e1) vkb2_top_entry_pane

0x65b8,	// (0x0001110b) vkb2_top_grid_left_pane_ParamLimits

0x65b8,	// (0x0001110b) vkb2_top_grid_left_pane

0x65d6,	// (0x00011129) vkb2_top_grid_right_pane_ParamLimits

0x65d6,	// (0x00011129) vkb2_top_grid_right_pane

0x65f4,	// (0x00011147) vkb2_cell_keypad_pane_ParamLimits

0x65f4,	// (0x00011147) vkb2_cell_keypad_pane

0x66c5,	// (0x00011218) vkb2_area_bottom_grid_pane_ParamLimits

0x66c5,	// (0x00011218) vkb2_area_bottom_grid_pane

0x66eb,	// (0x0001123e) vkb2_area_bottom_pane_g1_ParamLimits

0x66eb,	// (0x0001123e) vkb2_area_bottom_pane_g1

0x670f,	// (0x00011262) vkb2_area_bottom_pane_g2_ParamLimits

0x670f,	// (0x00011262) vkb2_area_bottom_pane_g2

0x673d,	// (0x00011290) vkb2_area_bottom_pane_g3_ParamLimits

0x673d,	// (0x00011290) vkb2_area_bottom_pane_g3

0x0002,

0xfda5,	// (0x0001a8f8) vkb2_area_bottom_pane_g_ParamLimits

0xfda5,	// (0x0001a8f8) vkb2_area_bottom_pane_g

0x679e,	// (0x000112f1) vkb2_top_cell_left_pane_ParamLimits

0x679e,	// (0x000112f1) vkb2_top_cell_left_pane

0xe0fe,	// (0x00018c51) vkb2_top_entry_pane_g1_ParamLimits

0xe0fe,	// (0x00018c51) vkb2_top_entry_pane_g1

0xe10c,	// (0x00018c5f) vkb2_top_entry_pane_t1_ParamLimits

0xe10c,	// (0x00018c5f) vkb2_top_entry_pane_t1

0xe13e,	// (0x00018c91) vkb2_top_entry_pane_t2_ParamLimits

0xe13e,	// (0x00018c91) vkb2_top_entry_pane_t2

0xe170,	// (0x00018cc3) vkb2_top_entry_pane_t3_ParamLimits

0xe170,	// (0x00018cc3) vkb2_top_entry_pane_t3

0x0002,

0xfdac,	// (0x0001a8ff) vkb2_top_entry_pane_t_ParamLimits

0xfdac,	// (0x0001a8ff) vkb2_top_entry_pane_t

0x67eb,	// (0x0001133e) vkb2_top_grid_right_pane_g1_ParamLimits

0x67eb,	// (0x0001133e) vkb2_top_grid_right_pane_g1

0x6801,	// (0x00011354) vkb2_top_grid_right_pane_g2_ParamLimits

0x6801,	// (0x00011354) vkb2_top_grid_right_pane_g2

0x6819,	// (0x0001136c) vkb2_top_grid_right_pane_g3_ParamLimits

0x6819,	// (0x0001136c) vkb2_top_grid_right_pane_g3

0x6831,	// (0x00011384) vkb2_top_grid_right_pane_g4_ParamLimits

0x6831,	// (0x00011384) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb3,	// (0x0001a906) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb3,	// (0x0001a906) vkb2_top_grid_right_pane_g

0x6847,	// (0x0001139a) vkb2_top_cell_left_pane_g1

0x685e,	// (0x000113b1) vkb2_cell_keypad_pane_g1_ParamLimits

0x685e,	// (0x000113b1) vkb2_cell_keypad_pane_g1

0xe194,	// (0x00018ce7) vkb2_cell_keypad_pane_t1_ParamLimits

0xe194,	// (0x00018ce7) vkb2_cell_keypad_pane_t1

0x686c,	// (0x000113bf) vkb2_cell_bottom_grid_pane_ParamLimits

0x686c,	// (0x000113bf) vkb2_cell_bottom_grid_pane

0x68a5,	// (0x000113f8) vkb2_cell_bottom_grid_pane_g1

0xdd42,	// (0x00018895) aid_call2_pane_cp02

0xdd4a,	// (0x0001889d) aid_call_pane_cp02

0xdd52,	// (0x000188a5) clock_digital_number_pane_cp10

0xdd5a,	// (0x000188ad) clock_digital_number_pane_cp11

0xdd62,	// (0x000188b5) clock_digital_number_pane_cp12

0xdd6a,	// (0x000188bd) clock_digital_number_pane_cp13

0xdd72,	// (0x000188c5) clock_digital_separator_pane_cp10

0x8501,	// (0x00013054) popup_clock_digital_analogue_window_cp2_g1

0x8501,	// (0x00013054) popup_clock_digital_analogue_window_cp2_g2

0xdd7a,	// (0x000188cd) popup_clock_digital_analogue_window_cp2_g3

0x8501,	// (0x00013054) popup_clock_digital_analogue_window_cp2_g4

0xdd7a,	// (0x000188cd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd68,	// (0x0001a8bb) popup_clock_digital_analogue_window_cp2_g

0xdd82,	// (0x000188d5) popup_clock_digital_analogue_window_cp2_t1

0xdd90,	// (0x000188e3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd73,	// (0x0001a8c6) popup_clock_digital_analogue_window_cp2_t

0xbf26,	// (0x00016a79) clock_digital_number_pane_cp10_g1

0xbf26,	// (0x00016a79) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0001a6a2) clock_digital_number_pane_cp10_g

0xbf26,	// (0x00016a79) clock_digital_separator_pane_cp10_g1

0xbf26,	// (0x00016a79) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0001a6a2) clock_digital_separator_pane_cp10_g

0xdbbe,	// (0x00018711) uniindi_top_pane_g3

0xdbcf,	// (0x00018722) uniindi_top_pane_g4

0x667f,	// (0x000111d2) vkb2_row_keypad_pane_ParamLimits

0x667f,	// (0x000111d2) vkb2_row_keypad_pane

0x68c5,	// (0x00011418) vkb2_cell_t_keypad_pane_ParamLimits

0x68c5,	// (0x00011418) vkb2_cell_t_keypad_pane

0x68d5,	// (0x00011428) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x68d5,	// (0x00011428) vkb2_cell_t_keypad_pane_cp08

0x68e8,	// (0x0001143b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x68e8,	// (0x0001143b) vkb2_cell_t_keypad_pane_cp09

0x68fc,	// (0x0001144f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x68fc,	// (0x0001144f) vkb2_cell_t_keypad_pane_cp01

0x690d,	// (0x00011460) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x690d,	// (0x00011460) vkb2_cell_t_keypad_pane_cp02

0x691e,	// (0x00011471) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x691e,	// (0x00011471) vkb2_cell_t_keypad_pane_cp03

0x692f,	// (0x00011482) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x692f,	// (0x00011482) vkb2_cell_t_keypad_pane_cp04

0x6940,	// (0x00011493) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6940,	// (0x00011493) vkb2_cell_t_keypad_pane_cp05

0x6951,	// (0x000114a4) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6951,	// (0x000114a4) vkb2_cell_t_keypad_pane_cp06

0x6962,	// (0x000114b5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6962,	// (0x000114b5) vkb2_cell_t_keypad_pane_cp07

0x6973,	// (0x000114c6) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6973,	// (0x000114c6) vkb2_cell_t_keypad_pane_cp10

0x6125,	// (0x00010c78) vkb2_cell_t_keypad_pane_g1

0xe1ab,	// (0x00018cfe) vkb2_cell_t_keypad_pane_t1

0x4b2f,	// (0x0000f682) popup_grid_graphic2_window

0xe1bd,	// (0x00018d10) aid_size_cell_graphic2_ParamLimits

0xe1bd,	// (0x00018d10) aid_size_cell_graphic2

0xe1f5,	// (0x00018d48) bg_popup_window_pane_cp21_ParamLimits

0xe1f5,	// (0x00018d48) bg_popup_window_pane_cp21

0xe203,	// (0x00018d56) graphic2_pages_pane_ParamLimits

0xe203,	// (0x00018d56) graphic2_pages_pane

0xe249,	// (0x00018d9c) grid_graphic2_control_pane_ParamLimits

0xe249,	// (0x00018d9c) grid_graphic2_control_pane

0xe287,	// (0x00018dda) grid_graphic2_pane_ParamLimits

0xe287,	// (0x00018dda) grid_graphic2_pane

0xe2fb,	// (0x00018e4e) cell_graphic2_pane

0x4b2f,	// (0x0000f682) main_comp_mode_pane

0xd3d0,	// (0x00017f23) list_ai3_gene_pane_ParamLimits

0xd804,	// (0x00018357) bg_popup_window_pane_cp19_ParamLimits

0xd810,	// (0x00018363) bg_touch_area_indi_pane_ParamLimits

0xd810,	// (0x00018363) bg_touch_area_indi_pane

0xd826,	// (0x00018379) bg_touch_area_indi_pane_cp01_ParamLimits

0xd826,	// (0x00018379) bg_touch_area_indi_pane_cp01

0xd83c,	// (0x0001838f) bg_touch_area_indi_pane_cp02_ParamLimits

0xd83c,	// (0x0001838f) bg_touch_area_indi_pane_cp02

0xd854,	// (0x000183a7) bg_touch_area_indi_pane_cp03_ParamLimits

0xd854,	// (0x000183a7) bg_touch_area_indi_pane_cp03

0xd86e,	// (0x000183c1) popup_slider_window_g1_ParamLimits

0xd88a,	// (0x000183dd) popup_slider_window_g2_ParamLimits

0xd8a6,	// (0x000183f9) popup_slider_window_g3_ParamLimits

0xfcfd,	// (0x0001a850) popup_slider_window_g_ParamLimits

0xd902,	// (0x00018455) popup_slider_window_t1_ParamLimits

0xd976,	// (0x000184c9) small_volume_slider_vertical_pane_ParamLimits

0xe2fb,	// (0x00018e4e) cell_graphic2_pane_ParamLimits

0xe349,	// (0x00018e9c) bg_button_pane_cp10_ParamLimits

0xe349,	// (0x00018e9c) bg_button_pane_cp10

0xe35c,	// (0x00018eaf) bg_button_pane_cp11_ParamLimits

0xe35c,	// (0x00018eaf) bg_button_pane_cp11

0xe36f,	// (0x00018ec2) graphic2_pages_pane_g1_ParamLimits

0xe36f,	// (0x00018ec2) graphic2_pages_pane_g1

0xe38a,	// (0x00018edd) graphic2_pages_pane_g2_ParamLimits

0xe38a,	// (0x00018edd) graphic2_pages_pane_g2

0x0001,

0xfdc1,	// (0x0001a914) graphic2_pages_pane_g_ParamLimits

0xfdc1,	// (0x0001a914) graphic2_pages_pane_g

0xe3a2,	// (0x00018ef5) graphic2_pages_pane_t1_ParamLimits

0xe3a2,	// (0x00018ef5) graphic2_pages_pane_t1

0xe3b8,	// (0x00018f0b) cell_graphic2_control_pane_ParamLimits

0xe3b8,	// (0x00018f0b) cell_graphic2_control_pane

0xe3d9,	// (0x00018f2c) cell_graphic2_pane_g1_ParamLimits

0xe3d9,	// (0x00018f2c) cell_graphic2_pane_g1

0xe3e6,	// (0x00018f39) cell_graphic2_pane_g2_ParamLimits

0xe3e6,	// (0x00018f39) cell_graphic2_pane_g2

0xe3f3,	// (0x00018f46) cell_graphic2_pane_g3_ParamLimits

0xe3f3,	// (0x00018f46) cell_graphic2_pane_g3

0xe400,	// (0x00018f53) cell_graphic2_pane_g4_ParamLimits

0xe400,	// (0x00018f53) cell_graphic2_pane_g4

0xe40d,	// (0x00018f60) cell_graphic2_pane_g5_ParamLimits

0xe40d,	// (0x00018f60) cell_graphic2_pane_g5

0x0004,

0xfdc6,	// (0x0001a919) cell_graphic2_pane_g_ParamLimits

0xfdc6,	// (0x0001a919) cell_graphic2_pane_g

0xe428,	// (0x00018f7b) cell_graphic2_pane_t1_ParamLimits

0xe428,	// (0x00018f7b) cell_graphic2_pane_t1

0x9512,	// (0x00014065) grid_highlight_pane_cp11_ParamLimits

0x9512,	// (0x00014065) grid_highlight_pane_cp11

0x7231,	// (0x00011d84) bg_button_pane_cp05

0xe451,	// (0x00018fa4) cell_graphic2_control_pane_g1

0xbf26,	// (0x00016a79) bg_touch_area_indi_pane_g1

0xe479,	// (0x00018fcc) aid_cmod_rocker_key_size

0xe483,	// (0x00018fd6) aid_cmode_itu_key_size

0xe48d,	// (0x00018fe0) main_cmode_video_pane

0xe497,	// (0x00018fea) main_comp_mode_itu_pane

0xe4a3,	// (0x00018ff6) main_comp_mode_rocker_pane

0xe4af,	// (0x00019002) cell_cmode_rocker_pane_ParamLimits

0xe4af,	// (0x00019002) cell_cmode_rocker_pane

0xe4c1,	// (0x00019014) cell_cmode_itu_pane_ParamLimits

0xe4c1,	// (0x00019014) cell_cmode_itu_pane

0x7d4d,	// (0x000128a0) bg_button_pane_cp06_ParamLimits

0x7d4d,	// (0x000128a0) bg_button_pane_cp06

0xc194,	// (0x00016ce7) cell_cmode_rocker_pane_g1_ParamLimits

0xc194,	// (0x00016ce7) cell_cmode_rocker_pane_g1

0xda1a,	// (0x0001856d) cell_cmode_rocker_pane_g2_ParamLimits

0xda1a,	// (0x0001856d) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x0001a929) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x0001a929) cell_cmode_rocker_pane_g

0x6e9a,	// (0x000119ed) bg_button_pane_cp07

0xe4d6,	// (0x00019029) cell_cmode_itu_pane_g1

0xe4df,	// (0x00019032) cell_cmode_itu_pane_t1

0xe4ed,	// (0x00019040) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x0001a92e) cell_cmode_itu_pane_t

0xdc41,	// (0x00018794) aid_touch_ctrl_left

0xdc49,	// (0x0001879c) aid_touch_ctrl_right

0x6e9a,	// (0x000119ed) compa_mode_pane

0xe4fb,	// (0x0001904e) aid_cmod_rocker_key_size_cp

0xe505,	// (0x00019058) aid_cmode_itu_key_size_cp

0xe50f,	// (0x00019062) compa_mode_pane_g1

0xe517,	// (0x0001906a) compa_mode_pane_g2

0xe51f,	// (0x00019072) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x0001a933) compa_mode_pane_g

0xe527,	// (0x0001907a) main_comp_mode_itu_pane_cp

0xe52f,	// (0x00019082) main_comp_mode_rocker_pane_cp

0xe537,	// (0x0001908a) cell_cmode_itu_pane_cp_ParamLimits

0xe537,	// (0x0001908a) cell_cmode_itu_pane_cp

0xe54c,	// (0x0001909f) cell_cmode_rocker_pane_cp_ParamLimits

0xe54c,	// (0x0001909f) cell_cmode_rocker_pane_cp

0x7d4d,	// (0x000128a0) bg_button_pane_cp06_cp_ParamLimits

0x7d4d,	// (0x000128a0) bg_button_pane_cp06_cp

0xc194,	// (0x00016ce7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc194,	// (0x00016ce7) cell_cmode_rocker_pane_g1_cp

0xbf26,	// (0x00016a79) cell_cmode_rocker_pane_g2_cp

0x6e9a,	// (0x000119ed) bg_button_pane_cp07_cp

0xe55e,	// (0x000190b1) cell_cmode_itu_pane_g1_cp

0xe567,	// (0x000190ba) cell_cmode_itu_pane_t1_cp

0xe567,	// (0x000190ba) cell_cmode_itu_pane_t2_cp

0xaa22,	// (0x00015575) settings_code_pane_cp2

0x6f8e,	// (0x00011ae1) bg_popup_window_pane_cp3_ParamLimits

0x73ff,	// (0x00011f52) heading_pane_cp3_ParamLimits

0x740b,	// (0x00011f5e) listscroll_popup_graphic_pane_ParamLimits

0x5ece,	// (0x00010a21) fep_hwr_aid_pane_ParamLimits

0x6345,	// (0x00010e98) aid_touch_sctrl_top_ParamLimits

0x6360,	// (0x00010eb3) sctrl_sk_top_pane_g1_ParamLimits

0x6125,	// (0x00010c78) sctrl_sk_top_pane_g2_ParamLimits

0xfd16,	// (0x0001a869) sctrl_sk_top_pane_g_ParamLimits

0x636d,	// (0x00010ec0) sctrl_sk_top_pane_t1_ParamLimits

0x6345,	// (0x00010e98) aid_touch_sctrl_bottom_ParamLimits

0x636d,	// (0x00010ec0) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb8a,	// (0x000186dd) aid_area_touch_clock

0x6556,	// (0x000110a9) aid_vkb2_area_top_pane_cell_ParamLimits

0x6556,	// (0x000110a9) aid_vkb2_area_top_pane_cell

0x66a1,	// (0x000111f4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x66a1,	// (0x000111f4) aid_vkb2_area_bottom_pane_cell

0xe0f6,	// (0x00018c49) popup_char_count_window

0xe575,	// (0x000190c8) popup_char_count_window_g1

0xe57e,	// (0x000190d1) popup_char_count_window_g2

0xe587,	// (0x000190da) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x0001a93a) popup_char_count_window_g

0xe590,	// (0x000190e3) popup_char_count_window_t1

0x641c,	// (0x00010f6f) popup_fep_char_preview_window_ParamLimits

0x641c,	// (0x00010f6f) popup_fep_char_preview_window

0x6574,	// (0x000110c7) vkb2_top_candi_pane_ParamLimits

0x6574,	// (0x000110c7) vkb2_top_candi_pane

0xe59e,	// (0x000190f1) cell_vkb2_top_candi_pane_ParamLimits

0xe59e,	// (0x000190f1) cell_vkb2_top_candi_pane

0x6988,	// (0x000114db) bg_popup_fep_char_preview_window_ParamLimits

0x6988,	// (0x000114db) bg_popup_fep_char_preview_window

0x6996,	// (0x000114e9) popup_fep_char_preview_window_t1_ParamLimits

0x6996,	// (0x000114e9) popup_fep_char_preview_window_t1

0xe5eb,	// (0x0001913e) bg_popup_fep_char_preview_window_g1

0xe5f3,	// (0x00019146) bg_popup_fep_char_preview_window_g2

0xe5fb,	// (0x0001914e) bg_popup_fep_char_preview_window_g3

0xe603,	// (0x00019156) bg_popup_fep_char_preview_window_g4

0xe60b,	// (0x0001915e) bg_popup_fep_char_preview_window_g5

0x69d0,	// (0x00011523) bg_popup_fep_char_preview_window_g6

0xe613,	// (0x00019166) bg_popup_fep_char_preview_window_g7

0xe61b,	// (0x0001916e) bg_popup_fep_char_preview_window_g8

0xe623,	// (0x00019176) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x0001a941) bg_popup_fep_char_preview_window_g

0x6125,	// (0x00010c78) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6125,	// (0x00010c78) cell_vkb2_top_candi_pane_g1

0x6133,	// (0x00010c86) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6133,	// (0x00010c86) cell_vkb2_top_candi_pane_g2

0xe62b,	// (0x0001917e) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe62b,	// (0x0001917e) cell_vkb2_top_candi_pane_g3

0x69d8,	// (0x0001152b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x69d8,	// (0x0001152b) cell_vkb2_top_candi_pane_g4

0xc805,	// (0x00017358) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc805,	// (0x00017358) cell_vkb2_top_candi_pane_g5

0x69f9,	// (0x0001154c) cell_vkb2_top_candi_pane_g6_ParamLimits

0x69f9,	// (0x0001154c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x0001a954) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x0001a954) cell_vkb2_top_candi_pane_g

0x6a07,	// (0x0001155a) cell_vkb2_top_candi_pane_t1

0x5d0a,	// (0x0001085d) aid_size_touch_slider_mark_ParamLimits

0x5d0a,	// (0x0001085d) aid_size_touch_slider_mark

0xe239,	// (0x00018d8c) grid_graphic2_catg_pane_ParamLimits

0xe239,	// (0x00018d8c) grid_graphic2_catg_pane

0xe2d7,	// (0x00018e2a) popup_grid_graphic2_window_t1_ParamLimits

0xe2d7,	// (0x00018e2a) popup_grid_graphic2_window_t1

0xe2e9,	// (0x00018e3c) popup_grid_graphic2_window_t2_ParamLimits

0xe2e9,	// (0x00018e3c) popup_grid_graphic2_window_t2

0x0001,

0xfdbc,	// (0x0001a90f) popup_grid_graphic2_window_t_ParamLimits

0xfdbc,	// (0x0001a90f) popup_grid_graphic2_window_t

0x7231,	// (0x00011d84) bg_button_pane_cp05_ParamLimits

0xe451,	// (0x00018fa4) cell_graphic2_control_pane_g1_ParamLimits

0xe64c,	// (0x0001919f) cell_graphic2_catg_pane_ParamLimits

0xe64c,	// (0x0001919f) cell_graphic2_catg_pane

0x6e9a,	// (0x000119ed) bg_button_pane_cp12

0xe65e,	// (0x000191b1) cell_graphic2_catg_pane_g1

0xdb56,	// (0x000186a9) cell_tb_ext_pane_t1_ParamLimits

0x67be,	// (0x00011311) vkb2_top_cell_right_narrow_pane_ParamLimits

0x67be,	// (0x00011311) vkb2_top_cell_right_narrow_pane

0x67d6,	// (0x00011329) vkb2_top_cell_right_wide_pane_ParamLimits

0x67d6,	// (0x00011329) vkb2_top_cell_right_wide_pane

0x5ec0,	// (0x00010a13) bg_vkb2_func_pane_ParamLimits

0x5ec0,	// (0x00010a13) bg_vkb2_func_pane

0x6847,	// (0x0001139a) vkb2_top_cell_left_pane_g1_ParamLimits

0x5ec0,	// (0x00010a13) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5ec0,	// (0x00010a13) bg_vkb2_fuc_pane_cp03

0x68a5,	// (0x000113f8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x93f6,	// (0x00013f49) bg_vkb2_func_pane_g1

0x93fe,	// (0x00013f51) bg_vkb2_func_pane_g2

0x940e,	// (0x00013f61) bg_vkb2_func_pane_g3

0x9406,	// (0x00013f59) bg_vkb2_func_pane_g4

0x9416,	// (0x00013f69) bg_vkb2_func_pane_g5

0x941e,	// (0x00013f71) bg_vkb2_func_pane_g6

0x9426,	// (0x00013f79) bg_vkb2_func_pane_g7

0x942e,	// (0x00013f81) bg_vkb2_func_pane_g8

0x93ee,	// (0x00013f41) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x0001a961) bg_vkb2_func_pane_g

0x5ec0,	// (0x00010a13) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5ec0,	// (0x00010a13) bg_vkb2_fuc_pane_cp01

0x6847,	// (0x0001139a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6847,	// (0x0001139a) vkb2_top_cell_right_wide_pane_g1

0x5ec0,	// (0x00010a13) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5ec0,	// (0x00010a13) bg_vkb2_fuc_pane_cp02

0x68a5,	// (0x000113f8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x68a5,	// (0x000113f8) vkb2_top_cell_right_narrow_pane_g1

0xd782,	// (0x000182d5) aid_touch_area_decrease_ParamLimits

0xd782,	// (0x000182d5) aid_touch_area_decrease

0xd7a6,	// (0x000182f9) aid_touch_area_increase_ParamLimits

0xd7a6,	// (0x000182f9) aid_touch_area_increase

0xd7b2,	// (0x00018305) aid_touch_area_mute_ParamLimits

0xd7b2,	// (0x00018305) aid_touch_area_mute

0xd7d6,	// (0x00018329) aid_touch_area_slider_ParamLimits

0xd7d6,	// (0x00018329) aid_touch_area_slider

0xd8c2,	// (0x00018415) popup_slider_window_g4_ParamLimits

0xd8c2,	// (0x00018415) popup_slider_window_g4

0xd8ce,	// (0x00018421) popup_slider_window_g5_ParamLimits

0xd8ce,	// (0x00018421) popup_slider_window_g5

0xd8f0,	// (0x00018443) popup_slider_window_g6_ParamLimits

0xd8f0,	// (0x00018443) popup_slider_window_g6

0xd930,	// (0x00018483) popup_slider_window_t2_ParamLimits

0xd930,	// (0x00018483) popup_slider_window_t2

0x0001,

0xfd0a,	// (0x0001a85d) popup_slider_window_t_ParamLimits

0xfd0a,	// (0x0001a85d) popup_slider_window_t

0xd948,	// (0x0001849b) slider_pane_ParamLimits

0xd948,	// (0x0001849b) slider_pane

0xe667,	// (0x000191ba) slider_pane_g1_ParamLimits

0xe667,	// (0x000191ba) slider_pane_g1

0xe67b,	// (0x000191ce) slider_pane_g2_ParamLimits

0xe67b,	// (0x000191ce) slider_pane_g2

0xe691,	// (0x000191e4) slider_pane_g3_ParamLimits

0xe691,	// (0x000191e4) slider_pane_g3

0x0003,

0xfe21,	// (0x0001a974) slider_pane_g_ParamLimits

0xfe21,	// (0x0001a974) slider_pane_g

0x58d1,	// (0x00010424) popup_tb_float_extension_window_ParamLimits

0x58d1,	// (0x00010424) popup_tb_float_extension_window

0xe6bd,	// (0x00019210) aid_size_cell_tb_float_ext

0x6e9a,	// (0x000119ed) bg_popup_sub_window_cp28

0xe6c9,	// (0x0001921c) grid_tb_float_ext_pane

0xe6d3,	// (0x00019226) cell_tb_float_ext_pane_ParamLimits

0xe6d3,	// (0x00019226) cell_tb_float_ext_pane

0xe6ed,	// (0x00019240) cell_tb_float_ext_pane_g1

0xe6f6,	// (0x00019249) grid_highlight_pane_cp12

0x600f,	// (0x00010b62) cell_last_hwr_side_pane_ParamLimits

0x600f,	// (0x00010b62) cell_last_hwr_side_pane

0xbf26,	// (0x00016a79) cell_last_hwr_side_pane_g1

0xe6ff,	// (0x00019252) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x0001a97d) cell_last_hwr_side_pane_g

0x676d,	// (0x000112c0) vkb2_area_bottom_space_btn_pane_ParamLimits

0x676d,	// (0x000112c0) vkb2_area_bottom_space_btn_pane

0x6125,	// (0x00010c78) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1ab,	// (0x00018cfe) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6a07,	// (0x0001155a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6a26,	// (0x00011579) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6a26,	// (0x00011579) vkb2_area_bottom_space_btn_pane_g1

0x6a60,	// (0x000115b3) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6a60,	// (0x000115b3) vkb2_area_bottom_space_btn_pane_g2

0x6a96,	// (0x000115e9) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6a96,	// (0x000115e9) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x0001a982) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x0001a982) vkb2_area_bottom_space_btn_pane_g

0x5f83,	// (0x00010ad6) cel_fep_hwr_func_pane_ParamLimits

0x5f83,	// (0x00010ad6) cel_fep_hwr_func_pane

0x5fbf,	// (0x00010b12) cell_hwr_side_button_pane_ParamLimits

0x5fbf,	// (0x00010b12) cell_hwr_side_button_pane

0xdb8a,	// (0x000186dd) aid_area_touch_clock_ParamLimits

0x7231,	// (0x00011d84) bg_uniindi_top_pane_ParamLimits

0xdb9c,	// (0x000186ef) uniindi_top_pane_g1_ParamLimits

0xdbb2,	// (0x00018705) uniindi_top_pane_g2_ParamLimits

0xdbbe,	// (0x00018711) uniindi_top_pane_g3_ParamLimits

0xdbcf,	// (0x00018722) uniindi_top_pane_g4_ParamLimits

0xfd42,	// (0x0001a895) uniindi_top_pane_g_ParamLimits

0xdbdc,	// (0x0001872f) uniindi_top_pane_t1_ParamLimits

0x7231,	// (0x00011d84) bg_vkb2_func_pane_cp01_ParamLimits

0x7231,	// (0x00011d84) bg_vkb2_func_pane_cp01

0xe708,	// (0x0001925b) cel_fep_hwr_func_pane_g1_ParamLimits

0xe708,	// (0x0001925b) cel_fep_hwr_func_pane_g1

0x7231,	// (0x00011d84) bg_vkb2_func_pane_cp02_ParamLimits

0x7231,	// (0x00011d84) bg_vkb2_func_pane_cp02

0xe708,	// (0x0001925b) cell_hwr_side_button_pane_g1_ParamLimits

0xe708,	// (0x0001925b) cell_hwr_side_button_pane_g1

0x9259,	// (0x00013dac) status_pane_g4_ParamLimits

0x9259,	// (0x00013dac) status_pane_g4

0x9273,	// (0x00013dc6) status_pane_t1

0xbc40,	// (0x00016793) form2_midp_gauge_slider_cont_pane

0xbc48,	// (0x0001679b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbc5a,	// (0x000167ad) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbc6c,	// (0x000167bf) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb02,	// (0x0001a655) form2_midp_gauge_slider_pane_t_ParamLimits

0xbc7e,	// (0x000167d1) form2_midp_slider_pane_ParamLimits

0x63dc,	// (0x00010f2f) aid_size_cell_func_vkb2_ParamLimits

0x63dc,	// (0x00010f2f) aid_size_cell_func_vkb2

0xe6a9,	// (0x000191fc) slider_pane_g4_ParamLimits

0xe6a9,	// (0x000191fc) slider_pane_g4

0x6ae0,	// (0x00011633) form2_midp_gauge_slider_pane_t2_cp01

0x6aee,	// (0x00011641) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6aee,	// (0x00011641) form2_midp_gauge_slider_pane_t3_cp01

0x6b0b,	// (0x0001165e) form2_midp_slider_pane_cp01

0x6e9a,	// (0x000119ed) navi_smil_pane

0xe741,	// (0x00019294) navi_smil_pane_g1

0xe749,	// (0x0001929c) navi_smil_pane_t1

0xe716,	// (0x00019269) form2_midp_slider_pane_g1

0xe71f,	// (0x00019272) form2_midp_slider_pane_g2

0xe727,	// (0x0001927a) form2_midp_slider_pane_g3

0xe716,	// (0x00019269) form2_midp_slider_pane_g4

0xe72f,	// (0x00019282) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x0001a98b) form2_midp_slider_pane_g

0x6ad0,	// (0x00011623) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6ad0,	// (0x00011623) vkb2_area_bottom_space_btn_pane_g4

0x9090,	// (0x00013be3) lc0_navi_pane_ParamLimits

0x9090,	// (0x00013be3) lc0_navi_pane

0x9106,	// (0x00013c59) lc0_stat_indi_pane_ParamLimits

0x9106,	// (0x00013c59) lc0_stat_indi_pane

0x911d,	// (0x00013c70) ls0_title_pane_ParamLimits

0x911d,	// (0x00013c70) ls0_title_pane

0x7d4d,	// (0x000128a0) bg_popup_sub_pane_cp14_ParamLimits

0xdb71,	// (0x000186c4) list_uniindi_pane_ParamLimits

0xdb7d,	// (0x000186d0) uniindi_top_pane_ParamLimits

0xdc19,	// (0x0001876c) list_single_uniindi_pane_g1_ParamLimits

0xdc2c,	// (0x0001877f) list_single_uniindi_pane_t1_ParamLimits

0x6b14,	// (0x00011667) lc0_stat_clock_pane_ParamLimits

0x6b14,	// (0x00011667) lc0_stat_clock_pane

0xe757,	// (0x000192aa) lc0_stat_indi_pane_g1_ParamLimits

0xe757,	// (0x000192aa) lc0_stat_indi_pane_g1

0xe764,	// (0x000192b7) lc0_stat_indi_pane_g2_ParamLimits

0xe764,	// (0x000192b7) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x0001a996) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x0001a996) lc0_stat_indi_pane_g

0x6b21,	// (0x00011674) lc0_uni_indicator_pane_ParamLimits

0x6b21,	// (0x00011674) lc0_uni_indicator_pane

0xe771,	// (0x000192c4) ls0_title_pane_g1_ParamLimits

0xe771,	// (0x000192c4) ls0_title_pane_g1

0xe785,	// (0x000192d8) ls0_title_pane_t1_ParamLimits

0xe785,	// (0x000192d8) ls0_title_pane_t1

0x6b2e,	// (0x00011681) lc0_uni_indicator_pane_g1_ParamLimits

0x6b2e,	// (0x00011681) lc0_uni_indicator_pane_g1

0xe7bb,	// (0x0001930e) lc0_stat_clock_pane_t1

0x4b2f,	// (0x0000f682) main_ai5_pane

0xe7c9,	// (0x0001931c) ai5_sk_pane_ParamLimits

0xe7c9,	// (0x0001931c) ai5_sk_pane

0xe7d6,	// (0x00019329) cell_ai5_widget_pane_ParamLimits

0xe7d6,	// (0x00019329) cell_ai5_widget_pane

0xe8a0,	// (0x000193f3) aid_size_cell_widget_grid

0xe8b6,	// (0x00019409) bg_ai5_widget_pane_ParamLimits

0xe8b6,	// (0x00019409) bg_ai5_widget_pane

0xe92a,	// (0x0001947d) cell_ai5_widget_pane_g2

0xe93a,	// (0x0001948d) cell_ai5_widget_pane_g3

0xe951,	// (0x000194a4) cell_ai5_widget_pane_g4

0xe95d,	// (0x000194b0) cell_ai5_widget_pane_g5

0xe969,	// (0x000194bc) cell_ai5_widget_pane_g6

0xe975,	// (0x000194c8) cell_ai5_widget_pane_g7

0xe9bd,	// (0x00019510) cell_ai5_widget_pane_t1_ParamLimits

0xe9bd,	// (0x00019510) cell_ai5_widget_pane_t1

0xe9da,	// (0x0001952d) cell_ai5_widget_pane_t2_ParamLimits

0xe9da,	// (0x0001952d) cell_ai5_widget_pane_t2

0xe9f2,	// (0x00019545) cell_ai5_widget_pane_t3_ParamLimits

0xe9f2,	// (0x00019545) cell_ai5_widget_pane_t3

0xea0a,	// (0x0001955d) cell_ai5_widget_pane_t4_ParamLimits

0xea0a,	// (0x0001955d) cell_ai5_widget_pane_t4

0xea27,	// (0x0001957a) cell_ai5_widget_pane_t5_ParamLimits

0xea27,	// (0x0001957a) cell_ai5_widget_pane_t5

0xea46,	// (0x00019599) cell_ai5_widget_pane_t6_ParamLimits

0xea46,	// (0x00019599) cell_ai5_widget_pane_t6

0xea58,	// (0x000195ab) cell_ai5_widget_pane_t7_ParamLimits

0xea58,	// (0x000195ab) cell_ai5_widget_pane_t7

0xea71,	// (0x000195c4) cell_ai5_widget_pane_t8_ParamLimits

0xea71,	// (0x000195c4) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x0001a9b0) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x0001a9b0) cell_ai5_widget_pane_t

0xeac5,	// (0x00019618) grid_ai5_widget_pane

0x7d4d,	// (0x000128a0) highlight_cell_ai5_widget_pane_ParamLimits

0x7d4d,	// (0x000128a0) highlight_cell_ai5_widget_pane

0xeadd,	// (0x00019630) ai5_sk_left_pane

0xeae7,	// (0x0001963a) ai5_sk_middle_pane

0xeaf1,	// (0x00019644) ai5_sk_right_pane

0xeafb,	// (0x0001964e) bg_ai5_widget_pane_g1_ParamLimits

0xeafb,	// (0x0001964e) bg_ai5_widget_pane_g1

0xeb07,	// (0x0001965a) bg_ai5_widget_pane_g2_ParamLimits

0xeb07,	// (0x0001965a) bg_ai5_widget_pane_g2

0xeb13,	// (0x00019666) bg_ai5_widget_pane_g3_ParamLimits

0xeb13,	// (0x00019666) bg_ai5_widget_pane_g3

0xeb1f,	// (0x00019672) bg_ai5_widget_pane_g4_ParamLimits

0xeb1f,	// (0x00019672) bg_ai5_widget_pane_g4

0xeb2b,	// (0x0001967e) bg_ai5_widget_pane_g5_ParamLimits

0xeb2b,	// (0x0001967e) bg_ai5_widget_pane_g5

0xeb37,	// (0x0001968a) bg_ai5_widget_pane_g6_ParamLimits

0xeb37,	// (0x0001968a) bg_ai5_widget_pane_g6

0xeb43,	// (0x00019696) bg_ai5_widget_pane_g7_ParamLimits

0xeb43,	// (0x00019696) bg_ai5_widget_pane_g7

0xeb4f,	// (0x000196a2) bg_ai5_widget_pane_g8_ParamLimits

0xeb4f,	// (0x000196a2) bg_ai5_widget_pane_g8

0xeb5b,	// (0x000196ae) bg_ai5_widget_pane_g9_ParamLimits

0xeb5b,	// (0x000196ae) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x0001a9c5) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x0001a9c5) bg_ai5_widget_pane_g

0xeb8d,	// (0x000196e0) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb8d,	// (0x000196e0) cell_shortcut_ai5_widget_pane

0x8b90,	// (0x000136e3) bg_cell_shortcut_ai5_widget_pane

0xeb9e,	// (0x000196f1) cell_grid_ai5_widget_pane_g1

0x8b90,	// (0x000136e3) highlight_cell_shortcut_ai5_widget_pane

0x93f6,	// (0x00013f49) ai5_sk_left_pane_g1

0xeba7,	// (0x000196fa) ai5_sk_left_pane_g2

0xebaf,	// (0x00019702) ai5_sk_left_pane_g3

0xebb7,	// (0x0001970a) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x0001a9d8) ai5_sk_left_pane_g

0xebbf,	// (0x00019712) ai5_sk_left_pane_t1

0x93fe,	// (0x00013f51) ai5_sk_right_pane_g1

0xebcd,	// (0x00019720) ai5_sk_right_pane_g2

0xebd5,	// (0x00019728) ai5_sk_right_pane_g3

0xebdd,	// (0x00019730) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x0001a9e1) ai5_sk_right_pane_g

0xebe5,	// (0x00019738) ai5_sk_right_pane_t1

0x93fe,	// (0x00013f51) ai5_sk_middle_pane_g1

0x93f6,	// (0x00013f49) ai5_sk_middle_pane_g2

0x9416,	// (0x00013f69) ai5_sk_middle_pane_g3

0xebd5,	// (0x00019728) ai5_sk_middle_pane_g4

0xebaf,	// (0x00019702) ai5_sk_middle_pane_g5

0xebf3,	// (0x00019746) ai5_sk_middle_pane_g6

0xebfb,	// (0x0001974e) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x0001a9ea) ai5_sk_middle_pane_g

0x8f20,	// (0x00013a73) aid_touch_area_size_lc0_ParamLimits

0x8f20,	// (0x00013a73) aid_touch_area_size_lc0

0x6154,	// (0x00010ca7) cell_hwr_candidate_pane_t1_ParamLimits

0x8f3c,	// (0x00013a8f) aid_touch_navi_pane

0x920b,	// (0x00013d5e) status_dt_navi_pane_ParamLimits

0x920b,	// (0x00013d5e) status_dt_navi_pane

0x9218,	// (0x00013d6b) status_dt_sta_pane_ParamLimits

0x9218,	// (0x00013d6b) status_dt_sta_pane

0xec03,	// (0x00019756) dt_sta_controll_pane

0xec10,	// (0x00019763) dt_sta_indi_pane

0xec21,	// (0x00019774) dt_sta_title_pane

0x7231,	// (0x00011d84) bg_dt_sta_indi_pane_ParamLimits

0x7231,	// (0x00011d84) bg_dt_sta_indi_pane

0xec34,	// (0x00019787) dt_sta_battery_pane

0xec3c,	// (0x0001978f) dt_sta_indi_pane_g1

0xec45,	// (0x00019798) dt_sta_indi_pane_g2

0xec4e,	// (0x000197a1) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x0001a9f9) dt_sta_indi_pane_g

0xec57,	// (0x000197aa) dt_sta_signal_pane

0x7d4d,	// (0x000128a0) bg_dt_sta_title_pane_ParamLimits

0x7d4d,	// (0x000128a0) bg_dt_sta_title_pane

0xec60,	// (0x000197b3) dt_sta_title_pane_g1

0xec68,	// (0x000197bb) dt_sta_title_pane_t1_ParamLimits

0xec68,	// (0x000197bb) dt_sta_title_pane_t1

0x6e9a,	// (0x000119ed) bg_dt_sta_control_pane

0xec7d,	// (0x000197d0) dt_sta_controll_pane_g1

0xec86,	// (0x000197d9) bg_dt_sta_title_pane_g1

0xec8f,	// (0x000197e2) bg_dt_sta_title_pane_g2

0xec98,	// (0x000197eb) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x0001aa00) bg_dt_sta_title_pane_g

0xbf26,	// (0x00016a79) bg_dt_sta_indi_pane_g1

0xeca1,	// (0x000197f4) dt_sta_signal_pane_g1

0xeca9,	// (0x000197fc) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x0001aa07) dt_sta_signal_pane_g

0xecb1,	// (0x00019804) dt_sta_battery_pane_g1

0xecba,	// (0x0001980d) dt_sta_battery_pane_t1

0xbf26,	// (0x00016a79) bg_dt_sta_control_pane_g1

0x860f,	// (0x00013162) fep_china_uni_eep_pane

0x8617,	// (0x0001316a) fep_china_uni_entry_pane_ParamLimits

0x8627,	// (0x0001317a) popup_fep_china_uni_window_g1_ParamLimits

0x8637,	// (0x0001318a) popup_fep_china_uni_window_g2_ParamLimits

0x8637,	// (0x0001318a) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001a26b) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001a26b) popup_fep_china_uni_window_g

0xecc9,	// (0x0001981c) fep_china_uni_eep_pane_g1

0xecd1,	// (0x00019824) fep_china_uni_eep_pane_t1

0xe738,	// (0x0001928b) aid_touch_area_size_smil_player

0x9088,	// (0x00013bdb) lc0_clock_pane

0x9267,	// (0x00013dba) status_pane_g5_ParamLimits

0x9267,	// (0x00013dba) status_pane_g5

0x5598,	// (0x000100eb) popup_keymap_window

0x922d,	// (0x00013d80) status_icon_pane

0xe93a,	// (0x0001948d) cell_ai5_widget_pane_g3_ParamLimits

0xe951,	// (0x000194a4) cell_ai5_widget_pane_g4_ParamLimits

0xe95d,	// (0x000194b0) cell_ai5_widget_pane_g5_ParamLimits

0xe981,	// (0x000194d4) cell_ai5_widget_pane_g8_ParamLimits

0xe981,	// (0x000194d4) cell_ai5_widget_pane_g8

0xe995,	// (0x000194e8) cell_ai5_widget_pane_g9_ParamLimits

0xe995,	// (0x000194e8) cell_ai5_widget_pane_g9

0xe9a9,	// (0x000194fc) cell_ai5_widget_pane_g10_ParamLimits

0xe9a9,	// (0x000194fc) cell_ai5_widget_pane_g10

0xece0,	// (0x00019833) status_icon_pane_g1

0x6e9a,	// (0x000119ed) bg_popup_sub_pane_cp13

0xece8,	// (0x0001983b) popup_keymap_window_t1

0x8e55,	// (0x000139a8) control_pane_g6_ParamLimits

0x8e55,	// (0x000139a8) control_pane_g6

0x8e62,	// (0x000139b5) control_pane_g7_ParamLimits

0x8e62,	// (0x000139b5) control_pane_g7

0x8e6f,	// (0x000139c2) control_pane_g8_ParamLimits

0x8e6f,	// (0x000139c2) control_pane_g8

0xec03,	// (0x00019756) dt_sta_controll_pane_ParamLimits

0xec10,	// (0x00019763) dt_sta_indi_pane_ParamLimits

0xec21,	// (0x00019774) dt_sta_title_pane_ParamLimits

0x773a,	// (0x0001228d) aid_size_touch_scroll_bar_cale

0x4c08,	// (0x0000f75b) popup_discreet_window_ParamLimits

0x4c08,	// (0x0000f75b) popup_discreet_window

0x4c82,	// (0x0000f7d5) popup_sk_window

0x9b69,	// (0x000146bc) bg_popup_sub_pane_cp28_ParamLimits

0x9b69,	// (0x000146bc) bg_popup_sub_pane_cp28

0xecf6,	// (0x00019849) popup_discreet_window_g1_ParamLimits

0xecf6,	// (0x00019849) popup_discreet_window_g1

0xed16,	// (0x00019869) popup_discreet_window_t1_ParamLimits

0xed16,	// (0x00019869) popup_discreet_window_t1

0xed34,	// (0x00019887) popup_discreet_window_t2_ParamLimits

0xed34,	// (0x00019887) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x0001aa0c) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x0001aa0c) popup_discreet_window_t

0x6b43,	// (0x00011696) popup_sk_window_g1

0x6b4d,	// (0x000116a0) popup_sk_window_g2

0x0001,

0xfec0,	// (0x0001aa13) popup_sk_window_g

0x6b57,	// (0x000116aa) popup_sk_window_t1

0x6b65,	// (0x000116b8) popup_sk_window_t1_copy1

0xe92a,	// (0x0001947d) cell_ai5_widget_pane_g2_ParamLimits

0xea83,	// (0x000195d6) cell_ai5_widget_pane_t9_ParamLimits

0xea83,	// (0x000195d6) cell_ai5_widget_pane_t9

0x6e9a,	// (0x000119ed) main_fep_fshwr2_pane

0x6b73,	// (0x000116c6) aid_fshwr2_btn_pane

0x6b7f,	// (0x000116d2) aid_fshwr2_syb_pane

0x6b8b,	// (0x000116de) aid_fshwr2_txt_pane

0x6b97,	// (0x000116ea) fshwr2_func_candi_pane

0x6bac,	// (0x000116ff) fshwr2_hwr_syb_pane

0x6bbc,	// (0x0001170f) fshwr2_icf_pane

0x4b2f,	// (0x0000f682) fshwr2_icf_bg_pane

0x6be5,	// (0x00011738) fshwr2_icf_pane_t1_ParamLimits

0x6be5,	// (0x00011738) fshwr2_icf_pane_t1

0x8501,	// (0x00013054) fshwr2_func_candi_pane_g1

0xed86,	// (0x000198d9) fshwr2_func_candi_row_pane_ParamLimits

0xed86,	// (0x000198d9) fshwr2_func_candi_row_pane

0x6bfd,	// (0x00011750) cell_fshwr2_syb_pane_ParamLimits

0x6bfd,	// (0x00011750) cell_fshwr2_syb_pane

0x6125,	// (0x00010c78) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6125,	// (0x00010c78) fshwr2_hwr_syb_pane_g1

0x4b2f,	// (0x0000f682) bg_popup_call_pane_cp01

0x6c13,	// (0x00011766) fshwr2_func_candi_cell_pane_ParamLimits

0x6c13,	// (0x00011766) fshwr2_func_candi_cell_pane

0xa1e5,	// (0x00014d38) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa1e5,	// (0x00014d38) fshwr2_func_candi_cell_bg_pane

0x6c48,	// (0x0001179b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6c48,	// (0x0001179b) fshwr2_func_candi_cell_pane_g1

0x6c68,	// (0x000117bb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6c68,	// (0x000117bb) fshwr2_func_candi_cell_pane_t1

0x4b2f,	// (0x0000f682) bg_button_pane_cp08

0xafdc,	// (0x00015b2f) cell_fshwr2_syb_bg_pane

0x6c7b,	// (0x000117ce) cell_fshwr2_syb_bg_pane_g1

0x6c83,	// (0x000117d6) cell_fshwr2_syb_bg_pane_t1

0x7d4d,	// (0x000128a0) main_tmo_pane

0xa67e,	// (0x000151d1) uni_indicator_pane_g1_ParamLimits

0xa694,	// (0x000151e7) uni_indicator_pane_g2_ParamLimits

0xa6aa,	// (0x000151fd) uni_indicator_pane_g3_ParamLimits

0xa6bf,	// (0x00015212) uni_indicator_pane_g4_ParamLimits

0xa6bf,	// (0x00015212) uni_indicator_pane_g4

0xa6d3,	// (0x00015226) uni_indicator_pane_g5_ParamLimits

0xa6d3,	// (0x00015226) uni_indicator_pane_g5

0xa6d3,	// (0x00015226) uni_indicator_pane_g6_ParamLimits

0xa6d3,	// (0x00015226) uni_indicator_pane_g6

0xf917,	// (0x0001a46a) uni_indicator_pane_g_ParamLimits

0xd764,	// (0x000182b7) popup_tmo_note_window_ParamLimits

0xd764,	// (0x000182b7) popup_tmo_note_window

0x63be,	// (0x00010f11) fshwr2_bg_pane

0x6c59,	// (0x000117ac) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6c59,	// (0x000117ac) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x0001aa18) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x0001aa18) fshwr2_func_candi_cell_pane_g

0x610d,	// (0x00010c60) bg_popup_window_pane_cp01

0x6c92,	// (0x000117e5) bg_popup_window_pane_g1_cp01

0xed96,	// (0x000198e9) bg_popup_window_pane_cp22_ParamLimits

0xed96,	// (0x000198e9) bg_popup_window_pane_cp22

0xeda4,	// (0x000198f7) listscroll_tmo_link_pane_ParamLimits

0xeda4,	// (0x000198f7) listscroll_tmo_link_pane

0xede4,	// (0x00019937) popup_tmo_note_window_g1_ParamLimits

0xede4,	// (0x00019937) popup_tmo_note_window_g1

0xedf1,	// (0x00019944) tmo_note_info_pane_ParamLimits

0xedf1,	// (0x00019944) tmo_note_info_pane

0xee0b,	// (0x0001995e) list_tmo_note_info_pane_g1_ParamLimits

0xee0b,	// (0x0001995e) list_tmo_note_info_pane_g1

0xee22,	// (0x00019975) list_tmo_note_info_pane_g2_ParamLimits

0xee22,	// (0x00019975) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x0001aa1d) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x0001aa1d) list_tmo_note_info_pane_g

0xee3e,	// (0x00019991) list_tmo_note_info_text_pane_ParamLimits

0xee3e,	// (0x00019991) list_tmo_note_info_text_pane

0xeec1,	// (0x00019a14) list_tmo_link_pane

0xeece,	// (0x00019a21) scroll_pane_cp20

0xeedb,	// (0x00019a2e) list_single_tmo_link_pane_ParamLimits

0xeedb,	// (0x00019a2e) list_single_tmo_link_pane

0xeeeb,	// (0x00019a3e) list_single_tmo_link_pane_t1

0xeef9,	// (0x00019a4c) list_tmo_note_info_text_pane_t1_ParamLimits

0xeef9,	// (0x00019a4c) list_tmo_note_info_text_pane_t1

0x7f67,	// (0x00012aba) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7f67,	// (0x00012aba) aid_size_touch_scroll_bar_cp01

0x7df8,	// (0x0001294b) aid_size_touch_slider_marker

0x4c6a,	// (0x0000f7bd) popup_settings_window_ParamLimits

0x4c6a,	// (0x0000f7bd) popup_settings_window

0x8eec,	// (0x00013a3f) popup_candi_list_indi_window

0x8f3c,	// (0x00013a8f) aid_touch_navi_pane_ParamLimits

0x6319,	// (0x00010e6c) rs_clock_indi_pane

0x6322,	// (0x00010e75) sctrl_sk_bottom_pane_ParamLimits

0x6333,	// (0x00010e86) sctrl_sk_top_pane_ParamLimits

0x6436,	// (0x00010f89) popup_fep_tooltip_window

0xe8a0,	// (0x000193f3) aid_size_cell_widget_grid_ParamLimits

0xe915,	// (0x00019468) cell_ai5_widget_pane_g1_ParamLimits

0xe915,	// (0x00019468) cell_ai5_widget_pane_g1

0xe969,	// (0x000194bc) cell_ai5_widget_pane_g6_ParamLimits

0xe975,	// (0x000194c8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x0001a99b) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0001a99b) cell_ai5_widget_pane_g

0xeaa7,	// (0x000195fa) cell_ai5_widget_pane_t10_ParamLimits

0xeaa7,	// (0x000195fa) cell_ai5_widget_pane_t10

0xeac5,	// (0x00019618) grid_ai5_widget_pane_ParamLimits

0xeb67,	// (0x000196ba) cell_contacts_ai5_widget_pane_ParamLimits

0xeb67,	// (0x000196ba) cell_contacts_ai5_widget_pane

0xed49,	// (0x0001989c) popup_discreet_window_t3_ParamLimits

0xed49,	// (0x0001989c) popup_discreet_window_t3

0x6bd1,	// (0x00011724) popup_fshwr2_char_preview_window_ParamLimits

0x6bd1,	// (0x00011724) popup_fshwr2_char_preview_window

0xee5c,	// (0x000199af) tmo_note_info_pane_t1

0xee71,	// (0x000199c4) tmo_note_info_pane_t2

0xee88,	// (0x000199db) tmo_note_info_pane_t3

0xee9d,	// (0x000199f0) tmo_note_info_pane_t4

0xeeaf,	// (0x00019a02) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x0001aa22) tmo_note_info_pane_t

0xeec1,	// (0x00019a14) list_tmo_link_pane_ParamLimits

0xeece,	// (0x00019a21) scroll_pane_cp20_ParamLimits

0x4b2f,	// (0x0000f682) bg_popup_fep_char_preview_window_cp01

0xef12,	// (0x00019a65) popup_fshwr2_char_preview_window_t1

0xef20,	// (0x00019a73) popup_candi_list_indi_window_g1

0xef29,	// (0x00019a7c) bg_cell_contacts_ai5_widget_pane

0xef35,	// (0x00019a88) cell_contacts_ai5_widget_pane_g1

0xef4a,	// (0x00019a9d) cell_contacts_ai5_widget_pane_g2

0xef56,	// (0x00019aa9) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x0001aa2d) cell_contacts_ai5_widget_pane_g

0xef62,	// (0x00019ab5) cell_contacts_ai5_widget_pane_t1

0x7d4d,	// (0x000128a0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd9,	// (0x00019b2c) settings_container_pane

0x8b90,	// (0x000136e3) listscroll_set_pane_copy1

0xb323,	// (0x00015e76) scroll_pane_cp121_copy1

0xefe5,	// (0x00019b38) set_content_pane_copy1

0xefed,	// (0x00019b40) aid_height_set_list_copy1_ParamLimits

0xefed,	// (0x00019b40) aid_height_set_list_copy1

0xa8d8,	// (0x0001542b) aid_size_parent_copy1_ParamLimits

0xa8d8,	// (0x0001542b) aid_size_parent_copy1

0xeff9,	// (0x00019b4c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff9,	// (0x00019b4c) button_value_adjust_pane_cp6_copy1

0x8ed2,	// (0x00013a25) list_highlight_pane_cp2_copy1_ParamLimits

0x8ed2,	// (0x00013a25) list_highlight_pane_cp2_copy1

0xf00d,	// (0x00019b60) list_set_pane_copy1_ParamLimits

0xf00d,	// (0x00019b60) list_set_pane_copy1

0xef74,	// (0x00019ac7) main_pane_set_t1_copy1_ParamLimits

0xef74,	// (0x00019ac7) main_pane_set_t1_copy1

0xefae,	// (0x00019b01) main_pane_set_t2_copy1_ParamLimits

0xefae,	// (0x00019b01) main_pane_set_t2_copy1

0xf0ba,	// (0x00019c0d) main_pane_set_t3_copy1

0xf0c8,	// (0x00019c1b) main_pane_set_t4_copy1

0xefcd,	// (0x00019b20) set_content_pane_g1_copy1_ParamLimits

0xefcd,	// (0x00019b20) set_content_pane_g1_copy1

0xf0d6,	// (0x00019c29) setting_code_pane_copy1

0xf0de,	// (0x00019c31) setting_slider_graphic_pane_copy1

0xf0de,	// (0x00019c31) setting_slider_pane_copy1

0xf0de,	// (0x00019c31) setting_text_pane_copy1

0xf0de,	// (0x00019c31) setting_volume_pane_copy1

0xf0d6,	// (0x00019c29) settings_code_pane_cp2_copy1

0xf0e6,	// (0x00019c39) settings_code_pane_cp_copy1_ParamLimits

0xf0e6,	// (0x00019c39) settings_code_pane_cp_copy1

0x6c9b,	// (0x000117ee) volume_set_pane_copy1

0xf0fa,	// (0x00019c4d) volume_set_pane_g10_copy1

0xf102,	// (0x00019c55) volume_set_pane_g1_copy1

0xf10a,	// (0x00019c5d) volume_set_pane_g2_copy1

0xf112,	// (0x00019c65) volume_set_pane_g3_copy1

0xf11a,	// (0x00019c6d) volume_set_pane_g4_copy1

0xf122,	// (0x00019c75) volume_set_pane_g5_copy1

0xf12a,	// (0x00019c7d) volume_set_pane_g6_copy1

0xf132,	// (0x00019c85) volume_set_pane_g7_copy1

0xf13a,	// (0x00019c8d) volume_set_pane_g8_copy1

0xf142,	// (0x00019c95) volume_set_pane_g9_copy1

0x6f8e,	// (0x00011ae1) bg_set_opt_pane_cp_copy1_ParamLimits

0x6f8e,	// (0x00011ae1) bg_set_opt_pane_cp_copy1

0x6ca3,	// (0x000117f6) setting_slider_pane_t1_copy1_ParamLimits

0x6ca3,	// (0x000117f6) setting_slider_pane_t1_copy1

0x6cc1,	// (0x00011814) setting_slider_pane_t2_copy1_ParamLimits

0x6cc1,	// (0x00011814) setting_slider_pane_t2_copy1

0x6cdb,	// (0x0001182e) setting_slider_pane_t3_copy1_ParamLimits

0x6cdb,	// (0x0001182e) setting_slider_pane_t3_copy1

0x6cf3,	// (0x00011846) slider_set_pane_copy1_ParamLimits

0x6cf3,	// (0x00011846) slider_set_pane_copy1

0x7e7a,	// (0x000129cd) set_opt_bg_pane_g1_copy2

0x7e82,	// (0x000129d5) set_opt_bg_pane_g2_copy2

0xf14a,	// (0x00019c9d) set_opt_bg_pane_g3_copy2

0x7e92,	// (0x000129e5) set_opt_bg_pane_g4_copy2

0x7e9a,	// (0x000129ed) set_opt_bg_pane_g5_copy2

0x7ea2,	// (0x000129f5) set_opt_bg_pane_g6_copy2

0xf154,	// (0x00019ca7) set_opt_bg_pane_g7_copy2

0xf15c,	// (0x00019caf) set_opt_bg_pane_g8_copy2

0xf166,	// (0x00019cb9) set_opt_bg_pane_g9_copy2

0x6d09,	// (0x0001185c) aid_size_touch_slider_mark_copy1_ParamLimits

0x6d09,	// (0x0001185c) aid_size_touch_slider_mark_copy1

0xf170,	// (0x00019cc3) slider_set_pane_g1_copy1

0x6d1d,	// (0x00011870) slider_set_pane_g2_copy1

0x5d2a,	// (0x0001087d) slider_set_pane_g3_copy1_ParamLimits

0x5d2a,	// (0x0001087d) slider_set_pane_g3_copy1

0x5d3e,	// (0x00010891) slider_set_pane_g4_copy1_ParamLimits

0x5d3e,	// (0x00010891) slider_set_pane_g4_copy1

0x5d56,	// (0x000108a9) slider_set_pane_g5_copy1_ParamLimits

0x5d56,	// (0x000108a9) slider_set_pane_g5_copy1

0x5d2a,	// (0x0001087d) slider_set_pane_g6_copy1_ParamLimits

0x5d2a,	// (0x0001087d) slider_set_pane_g6_copy1

0x6d25,	// (0x00011878) slider_set_pane_g7_copy1_ParamLimits

0x6d25,	// (0x00011878) slider_set_pane_g7_copy1

0x6eae,	// (0x00011a01) bg_set_opt_pane_cp2_copy1

0xf179,	// (0x00019ccc) setting_slider_graphic_pane_g1_copy1

0xf182,	// (0x00019cd5) setting_slider_graphic_pane_t1_copy1

0xf192,	// (0x00019ce5) setting_slider_graphic_pane_t2_copy1

0xf1a2,	// (0x00019cf5) slider_set_pane_cp_copy1

0xf1b2,	// (0x00019d05) input_focus_pane_cp1_copy1

0xf1bb,	// (0x00019d0e) list_set_text_pane_copy1

0xf1c3,	// (0x00019d16) setting_text_pane_g1_copy1

0xf1cc,	// (0x00019d1f) set_text_pane_t1_copy1

0xf1b2,	// (0x00019d05) input_focus_pane_cp2_copy1

0xf1c3,	// (0x00019d16) setting_code_pane_g1_copy1

0xf1e8,	// (0x00019d3b) setting_code_pane_t1_copy1

0xf1f6,	// (0x00019d49) list_set_graphic_pane_copy1

0x6eae,	// (0x00011a01) bg_set_opt_pane_cp4_copy1

0x889b,	// (0x000133ee) list_set_graphic_pane_g1_copy1_ParamLimits

0x889b,	// (0x000133ee) list_set_graphic_pane_g1_copy1

0xf20a,	// (0x00019d5d) list_set_graphic_pane_g2_copy1

0x88b3,	// (0x00013406) list_set_graphic_pane_t1_copy1_ParamLimits

0x88b3,	// (0x00013406) list_set_graphic_pane_t1_copy1

0xbf26,	// (0x00016a79) rs_clock_indi_pane_g1

0xf212,	// (0x00019d65) rs_clock_indi_pane_t1

0xf220,	// (0x00019d73) rs_indi_pane

0xf228,	// (0x00019d7b) rs_indi_pane_g1

0xf231,	// (0x00019d84) rs_indi_pane_g2

0xf23a,	// (0x00019d8d) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x0001aa34) rs_indi_pane_g

0x8b90,	// (0x000136e3) bg_popup_preview_window_pane_cp03

0xf243,	// (0x00019d96) popup_fep_tooltip_window_t1

0xcdb2,	// (0x00017905) popup_note2_window_g2_ParamLimits

0xcdb2,	// (0x00017905) popup_note2_window_g2

0x0001,

0xfc7a,	// (0x0001a7cd) popup_note2_window_g_ParamLimits

0xfc7a,	// (0x0001a7cd) popup_note2_window_g

0xd396,	// (0x00017ee9) bg_popup_sub_pane_cp11_ParamLimits

0xd3a3,	// (0x00017ef6) cell_ai3_links_pane_g1_ParamLimits

0xd3ba,	// (0x00017f0d) cell_ai3_links_pane_t1

0xf1cc,	// (0x00019d1f) set_text_pane_t1_copy1_ParamLimits

0x8aad,	// (0x00013600) cell_graphic_popup_pane_cp2_ParamLimits

0x8aad,	// (0x00013600) cell_graphic_popup_pane_cp2

0xf251,	// (0x00019da4) cell_graphic_popup_pane_g1_cp2

0x754d,	// (0x000120a0) cell_graphic_popup_pane_g2_cp2

0xf259,	// (0x00019dac) cell_graphic_popup_pane_g3_cp2

0xf261,	// (0x00019db4) cell_graphic_popup_pane_t2_cp2

0x755e,	// (0x000120b1) grid_highlight_pane_cp3_cp2

0x8248,	// (0x00012d9b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7d4d,	// (0x000128a0) main_tmo_pane_ParamLimits

0xd758,	// (0x000182ab) popup_tmo_big_image_note_window

0xe904,	// (0x00019457) cell_ai5_widget_list_pane

0xe90c,	// (0x0001945f) cell_ai5_widget_lrg_icon_pane

0xee5c,	// (0x000199af) tmo_note_info_pane_t1_ParamLimits

0xee71,	// (0x000199c4) tmo_note_info_pane_t2_ParamLimits

0xee88,	// (0x000199db) tmo_note_info_pane_t3_ParamLimits

0xee9d,	// (0x000199f0) tmo_note_info_pane_t4_ParamLimits

0xeeaf,	// (0x00019a02) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x0001aa22) tmo_note_info_pane_t_ParamLimits

0xefd9,	// (0x00019b2c) settings_container_pane_ParamLimits

0xf1aa,	// (0x00019cfd) indicator_popup_pane_cp5

0xf1aa,	// (0x00019cfd) indicator_popup_pane_cp6

0xf1f6,	// (0x00019d49) list_set_graphic_pane_copy1_ParamLimits

0x6e9a,	// (0x000119ed) bg_popup_window_pane_cp23

0xf26f,	// (0x00019dc2) popup_tmo_big_image_note_window_g1

0xf278,	// (0x00019dcb) popup_tmo_big_image_note_window_t1

0xf288,	// (0x00019ddb) popup_tmo_big_image_note_window_t2

0xf298,	// (0x00019deb) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x0001aa3b) popup_tmo_big_image_note_window_t

0xbf26,	// (0x00016a79) cell_ai5_widget_lrg_icon_pane_g1

0xf2a8,	// (0x00019dfb) cell_ai5_widget_lrg_icon_pane_t1

0xf2b6,	// (0x00019e09) cell_ai5_widget_list_row_pane_ParamLimits

0xf2b6,	// (0x00019e09) cell_ai5_widget_list_row_pane

0xf2cd,	// (0x00019e20) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2cd,	// (0x00019e20) cell_ai5_widget_list_row_pane_g1

0xf2da,	// (0x00019e2d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2da,	// (0x00019e2d) cell_ai5_widget_list_row_pane_t1

0xf308,	// (0x00019e5b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf308,	// (0x00019e5b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeef,	// (0x0001aa42) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x0001aa42) cell_ai5_widget_list_row_pane_t

0x4b2f,	// (0x0000f682) main_fep_vtchi_ss_pane

0xf34c,	// (0x00019e9f) popup_fep_char_pre_window

0xf354,	// (0x00019ea7) popup_fep_ituss_window

0xf375,	// (0x00019ec8) popup_fep_vkbss_window

0xf394,	// (0x00019ee7) grid_vkbss_keypad_pane_ParamLimits

0xf394,	// (0x00019ee7) grid_vkbss_keypad_pane

0xf3a4,	// (0x00019ef7) ituss_keypad_pane

0x6d47,	// (0x0001189a) aid_vkbss_key_offset_ParamLimits

0x6d47,	// (0x0001189a) aid_vkbss_key_offset

0x6d53,	// (0x000118a6) cell_vkbss_key_pane_ParamLimits

0x6d53,	// (0x000118a6) cell_vkbss_key_pane

0x9241,	// (0x00013d94) bg_cell_vkbss_key_g1_ParamLimits

0x9241,	// (0x00013d94) bg_cell_vkbss_key_g1

0xf3b3,	// (0x00019f06) cell_vkbss_key_3p_pane_ParamLimits

0xf3b3,	// (0x00019f06) cell_vkbss_key_3p_pane

0xf3cd,	// (0x00019f20) cell_vkbss_key_g1_ParamLimits

0xf3cd,	// (0x00019f20) cell_vkbss_key_g1

0xf3e7,	// (0x00019f3a) cell_vkbss_key_t1_ParamLimits

0xf3e7,	// (0x00019f3a) cell_vkbss_key_t1

0x6d69,	// (0x000118bc) cell_ituss_key_pane_ParamLimits

0x6d69,	// (0x000118bc) cell_ituss_key_pane

0xf412,	// (0x00019f65) bg_cell_ituss_key_g1_ParamLimits

0xf412,	// (0x00019f65) bg_cell_ituss_key_g1

0xf41e,	// (0x00019f71) cell_ituss_key_pane_g1_ParamLimits

0xf41e,	// (0x00019f71) cell_ituss_key_pane_g1

0x6d7a,	// (0x000118cd) cell_ituss_key_pane_g2_ParamLimits

0x6d7a,	// (0x000118cd) cell_ituss_key_pane_g2

0x0002,

0xfef6,	// (0x0001aa49) cell_ituss_key_pane_g_ParamLimits

0xfef6,	// (0x0001aa49) cell_ituss_key_pane_g

0x6da6,	// (0x000118f9) cell_ituss_key_t1_ParamLimits

0x6da6,	// (0x000118f9) cell_ituss_key_t1

0x6de0,	// (0x00011933) cell_ituss_key_t2_ParamLimits

0x6de0,	// (0x00011933) cell_ituss_key_t2

0x6e11,	// (0x00011964) cell_ituss_key_t3_ParamLimits

0x6e11,	// (0x00011964) cell_ituss_key_t3

0x6de0,	// (0x00011933) cell_ituss_key_t4_ParamLimits

0x6de0,	// (0x00011933) cell_ituss_key_t4

0x0004,

0xfefd,	// (0x0001aa50) cell_ituss_key_t_ParamLimits

0xfefd,	// (0x0001aa50) cell_ituss_key_t

0xf444,	// (0x00019f97) cell_vkbss_key_3p_pane_g1

0xf44c,	// (0x00019f9f) cell_vkbss_key_3p_pane_g2

0xf454,	// (0x00019fa7) cell_vkbss_key_3p_pane_g3

0x0002,

0xff08,	// (0x0001aa5b) cell_vkbss_key_3p_pane_g

0x4b2f,	// (0x0000f682) bg_popup_fep_char_preview_window_cp02

0x6e54,	// (0x000119a7) popup_fep_char_pre_window_t1

0xe896,	// (0x000193e9) main_ai5_sk_pane

0xef29,	// (0x00019a7c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef35,	// (0x00019a88) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef4a,	// (0x00019a9d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef56,	// (0x00019aa9) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x0001aa2d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef62,	// (0x00019ab5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7d4d,	// (0x000128a0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf45c,	// (0x00019faf) main_ai5_sk_pane_g1

0x99a7,	// (0x000144fa) popup_query_code_window_g1

0xf36a,	// (0x00019ebd) popup_fep_vkb_icf_pane

0xf37e,	// (0x00019ed1) popup_fep_vtchi_icf_pane

0xf465,	// (0x00019fb8) bg_icf_pane

0xf471,	// (0x00019fc4) list_vkb_icf_pane

0xf47d,	// (0x00019fd0) bg_icf_pane_cp01

0xf490,	// (0x00019fe3) vtchi_icf_list_pane

0xf4a0,	// (0x00019ff3) list_vkb_icf_pane_t1_ParamLimits

0xf4a0,	// (0x00019ff3) list_vkb_icf_pane_t1

0xf4b8,	// (0x0001a00b) vtchi_icf_list_pane_t1_ParamLimits

0xf4b8,	// (0x0001a00b) vtchi_icf_list_pane_t1

0xf354,	// (0x00019ea7) popup_fep_ituss_window_ParamLimits

0xf37e,	// (0x00019ed1) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a4,	// (0x00019ef7) ituss_keypad_pane_ParamLimits

0x6d3b,	// (0x0001188e) ituss_sks_pane

0xf465,	// (0x00019fb8) bg_icf_pane_ParamLimits

0xf330,	// (0x00019e83) icf_edit_indi_pane_ParamLimits

0xf330,	// (0x00019e83) icf_edit_indi_pane

0xf471,	// (0x00019fc4) list_vkb_icf_pane_ParamLimits

0xf47d,	// (0x00019fd0) bg_icf_pane_cp01_ParamLimits

0xf33f,	// (0x00019e92) icf_edit_indi_pane_cp01_ParamLimits

0xf33f,	// (0x00019e92) icf_edit_indi_pane_cp01

0xf498,	// (0x00019feb) vtchi_query_pane

0xc194,	// (0x00016ce7) icf_edit_indi_pane_g1_ParamLimits

0xc194,	// (0x00016ce7) icf_edit_indi_pane_g1

0xf531,	// (0x0001a084) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0001a084) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x0001aa73) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x0001aa73) icf_edit_indi_pane_g

0xf540,	// (0x0001a093) icf_edit_indi_pane_t1

0xf4da,	// (0x0001a02d) bg_input_focus_pane_cp042

0x7731,	// (0x00012284) vtchi_button_pane

0xf4e3,	// (0x0001a036) vtchi_query_pane_t1

0xf4f1,	// (0x0001a044) vtchi_query_pane_t2

0xf4ff,	// (0x0001a052) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x0001aa62) vtchi_query_pane_t

0x4b2f,	// (0x0000f682) bg_button_pane_cp13

0xf50d,	// (0x0001a060) vtchi_button_pane_g1

0x6e63,	// (0x000119b6) ituss_sks_pane_g1

0x6e6e,	// (0x000119c1) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x0001aa69) ituss_sks_pane_g

0xf515,	// (0x0001a068) ituss_sks_pane_t1

0xf523,	// (0x0001a076) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x0001aa6e) ituss_sks_pane_t

0xb926,	// (0x00016479) indicator_nsta_pane_cp_g1

0xb92f,	// (0x00016482) indicator_nsta_pane_cp_g2

0xb937,	// (0x0001648a) indicator_nsta_pane_cp_g3

0xb93f,	// (0x00016492) indicator_nsta_pane_cp_g4

0xb947,	// (0x0001649a) indicator_nsta_pane_cp_g5

0xb947,	// (0x0001649a) indicator_nsta_pane_cp_g6

0x0005,

0xfab8,	// (0x0001a60b) indicator_nsta_pane_cp_g

0xe43e,	// (0x00018f91) cell_graphic2_pane_t2_ParamLimits

0xe43e,	// (0x00018f91) cell_graphic2_pane_t2

0x0001,

0xfdd1,	// (0x0001a924) cell_graphic2_pane_t_ParamLimits

0xfdd1,	// (0x0001a924) cell_graphic2_pane_t

0xe46b,	// (0x00018fbe) cell_graphic2_control_pane_t1

0x85bf,	// (0x00013112) signal_pane_g3_ParamLimits

0x85bf,	// (0x00013112) signal_pane_g3

0x85d1,	// (0x00013124) signal_pane_g4_ParamLimits

0x85d1,	// (0x00013124) signal_pane_g4

0xf31a,	// (0x00019e6d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf31a,	// (0x00019e6d) cell_ai5_widget_list_row_pane_t3

0xf432,	// (0x00019f85) cell_ituss_key_pane_t1_ParamLimits

0xf432,	// (0x00019f85) cell_ituss_key_pane_t1

0x95a0,	// (0x000140f3) form_field_data_wide_pane_vc_t2_ParamLimits

0x95a0,	// (0x000140f3) form_field_data_wide_pane_vc_t2

0x95b4,	// (0x00014107) form_field_data_wide_pane_vc_t3_ParamLimits

0x95b4,	// (0x00014107) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0001a352) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0001a352) form_field_data_wide_pane_vc_t

0xb5f2,	// (0x00016145) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb5f2,	// (0x00016145) form_field_slider_wide_pane_vc_t3

0xb6cc,	// (0x0001621f) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb6cc,	// (0x0001621f) form_field_popup_wide_pane_vc_t2

0xb6e3,	// (0x00016236) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb6e3,	// (0x00016236) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa7,	// (0x0001a5fa) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa7,	// (0x0001a5fa) form_field_popup_wide_pane_vc_t

0x6b73,	// (0x000116c6) aid_fshwr2_btn_pane_ParamLimits

0x6b7f,	// (0x000116d2) aid_fshwr2_syb_pane_ParamLimits

0x6b8b,	// (0x000116de) aid_fshwr2_txt_pane_ParamLimits

0x63be,	// (0x00010f11) fshwr2_bg_pane_ParamLimits

0x6b97,	// (0x000116ea) fshwr2_func_candi_pane_ParamLimits

0x6bac,	// (0x000116ff) fshwr2_hwr_syb_pane_ParamLimits

0x6bbc,	// (0x0001170f) fshwr2_icf_pane_ParamLimits

0xb566,	// (0x000160b9) list_double_graphic_pane_vc_g4_ParamLimits

0xb566,	// (0x000160b9) list_double_graphic_pane_vc_g4

0x6d9a,	// (0x000118ed) cell_ituss_key_pane_g3_ParamLimits

0x6d9a,	// (0x000118ed) cell_ituss_key_pane_g3

0x6e42,	// (0x00011995) cell_ituss_key_t5_ParamLimits

0x6e42,	// (0x00011995) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal

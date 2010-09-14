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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000566ee };

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
0x51d9,	// (0x0005b8c7) Screen

0x51e5,	// (0x0005b8d3) application_window_ParamLimits

0x51e5,	// (0x0005b8d3) application_window

0xe1e7,	// (0x000648d5) screen_g1

0x5241,	// (0x0005b92f) area_bottom_pane_ParamLimits

0x5241,	// (0x0005b92f) area_bottom_pane

0x5301,	// (0x0005b9ef) area_top_pane_ParamLimits

0x5301,	// (0x0005b9ef) area_top_pane

0x539f,	// (0x0005ba8d) main_pane_ParamLimits

0x539f,	// (0x0005ba8d) main_pane

0xe1f1,	// (0x000648df) misc_graphics

0x7411,	// (0x0005daff) battery_pane_ParamLimits

0x7411,	// (0x0005daff) battery_pane

0x9928,	// (0x00060016) bg_status_flat_pane_g8

0x9930,	// (0x0006001e) bg_status_flat_pane_g9

0x74d9,	// (0x0005dbc7) context_pane_ParamLimits

0x74d9,	// (0x0005dbc7) context_pane

0x75ef,	// (0x0005dcdd) navi_pane_ParamLimits

0x75ef,	// (0x0005dcdd) navi_pane

0x7673,	// (0x0005dd61) signal_pane_ParamLimits

0x7673,	// (0x0005dd61) signal_pane

0x0008,

0xf84f,	// (0x00065f3d) bg_status_flat_pane_g

0x8f09,	// (0x0005f5f7) status_pane_g1_ParamLimits

0x8f09,	// (0x0005f5f7) status_pane_g1

0x8f1d,	// (0x0005f60b) status_pane_g2_ParamLimits

0x8f1d,	// (0x0005f60b) status_pane_g2

0x8f29,	// (0x0005f617) status_pane_g3_ParamLimits

0x8f29,	// (0x0005f617) status_pane_g3

0x0004,

0xf776,	// (0x00065e64) status_pane_g_ParamLimits

0xf776,	// (0x00065e64) status_pane_g

0x8f5d,	// (0x0005f64b) title_pane_ParamLimits

0x8f5d,	// (0x0005f64b) title_pane

0x8f9a,	// (0x0005f688) uni_indicator_pane_ParamLimits

0x8f9a,	// (0x0005f688) uni_indicator_pane

0x1906,	// (0x00057ff4) bg_list_pane_ParamLimits

0x1906,	// (0x00057ff4) bg_list_pane

0x6dc8,	// (0x0005d4b6) find_pane

0xf51d,	// (0x00065c0b) listscroll_app_pane_ParamLimits

0xf51d,	// (0x00065c0b) listscroll_app_pane

0x1926,	// (0x00058014) listscroll_form_pane

0x6dd0,	// (0x0005d4be) listscroll_gen_pane_ParamLimits

0x6dd0,	// (0x0005d4be) listscroll_gen_pane

0x6de4,	// (0x0005d4d2) listscroll_set_pane

0x6276,	// (0x0005c964) main_idle_act_pane

0x17ba,	// (0x00057ea8) main_idle_trad_pane

0x17ba,	// (0x00057ea8) main_list_empty_pane

0xf51d,	// (0x00065c0b) main_midp_pane

0x1940,	// (0x0005802e) main_pane_g1_ParamLimits

0x1940,	// (0x0005802e) main_pane_g1

0x6dfa,	// (0x0005d4e8) popup_ai_message_window_ParamLimits

0x6dfa,	// (0x0005d4e8) popup_ai_message_window

0x6e9e,	// (0x0005d58c) popup_fep_china_uni_window_ParamLimits

0x6e9e,	// (0x0005d58c) popup_fep_china_uni_window

0x6ef8,	// (0x0005d5e6) popup_fep_japan_candidate_window_ParamLimits

0x6ef8,	// (0x0005d5e6) popup_fep_japan_candidate_window

0x6f16,	// (0x0005d604) popup_fep_japan_predictive_window_ParamLimits

0x6f16,	// (0x0005d604) popup_fep_japan_predictive_window

0x6f46,	// (0x0005d634) popup_find_window

0x6f53,	// (0x0005d641) popup_grid_graphic_window_ParamLimits

0x6f53,	// (0x0005d641) popup_grid_graphic_window

0x6f7d,	// (0x0005d66b) popup_large_graphic_colour_window

0x6fa3,	// (0x0005d691) popup_menu_window_ParamLimits

0x6fa3,	// (0x0005d691) popup_menu_window

0x715f,	// (0x0005d84d) popup_note_image_window

0x714b,	// (0x0005d839) popup_note_wait_window_ParamLimits

0x714b,	// (0x0005d839) popup_note_wait_window

0x714b,	// (0x0005d839) popup_note_window_ParamLimits

0x714b,	// (0x0005d839) popup_note_window

0x71b5,	// (0x0005d8a3) popup_query_code_window_ParamLimits

0x71b5,	// (0x0005d8a3) popup_query_code_window

0x71c9,	// (0x0005d8b7) popup_query_data_code_window_ParamLimits

0x71c9,	// (0x0005d8b7) popup_query_data_code_window

0x71e6,	// (0x0005d8d4) popup_query_data_window_ParamLimits

0x71e6,	// (0x0005d8d4) popup_query_data_window

0x7202,	// (0x0005d8f0) popup_query_sat_info_window_ParamLimits

0x7202,	// (0x0005d8f0) popup_query_sat_info_window

0x723b,	// (0x0005d929) popup_snote_single_graphic_window_ParamLimits

0x723b,	// (0x0005d929) popup_snote_single_graphic_window

0x723b,	// (0x0005d929) popup_snote_single_text_window_ParamLimits

0x723b,	// (0x0005d929) popup_snote_single_text_window

0x7250,	// (0x0005d93e) popup_sub_window_general

0x7380,	// (0x0005da6e) popup_window_general_ParamLimits

0x7380,	// (0x0005da6e) popup_window_general

0x7395,	// (0x0005da83) power_save_pane

0x6c2f,	// (0x0005d31d) control_pane_g1_ParamLimits

0x6c2f,	// (0x0005d31d) control_pane_g1

0x6c56,	// (0x0005d344) control_pane_g2_ParamLimits

0x6c56,	// (0x0005d344) control_pane_g2

0x18f0,	// (0x00057fde) control_pane_g3_ParamLimits

0x18f0,	// (0x00057fde) control_pane_g3

0x0007,

0xf75e,	// (0x00065e4c) control_pane_g_ParamLimits

0xf75e,	// (0x00065e4c) control_pane_g

0x6cc7,	// (0x0005d3b5) control_pane_t1_ParamLimits

0x6cc7,	// (0x0005d3b5) control_pane_t1

0x6d1d,	// (0x0005d40b) control_pane_t2_ParamLimits

0x6d1d,	// (0x0005d40b) control_pane_t2

0x0002,

0xf76f,	// (0x00065e5d) control_pane_t_ParamLimits

0xf76f,	// (0x00065e5d) control_pane_t

0x6b88,	// (0x0005d276) navi_navi_volume_pane_cp1

0x6b90,	// (0x0005d27e) status_small_icon_pane

0x18bc,	// (0x00057faa) status_small_pane_g1_ParamLimits

0x18bc,	// (0x00057faa) status_small_pane_g1

0x6b98,	// (0x0005d286) status_small_pane_g2_ParamLimits

0x6b98,	// (0x0005d286) status_small_pane_g2

0x6ba4,	// (0x0005d292) status_small_pane_g3_ParamLimits

0x6ba4,	// (0x0005d292) status_small_pane_g3

0x6bb0,	// (0x0005d29e) status_small_pane_g4_ParamLimits

0x6bb0,	// (0x0005d29e) status_small_pane_g4

0x6bbc,	// (0x0005d2aa) status_small_pane_g5_ParamLimits

0x6bbc,	// (0x0005d2aa) status_small_pane_g5

0x6bca,	// (0x0005d2b8) status_small_pane_g6_ParamLimits

0x6bca,	// (0x0005d2b8) status_small_pane_g6

0x0007,

0xf74d,	// (0x00065e3b) status_small_pane_g_ParamLimits

0xf74d,	// (0x00065e3b) status_small_pane_g

0x6bf9,	// (0x0005d2e7) status_small_pane_t1

0x6c1b,	// (0x0005d309) status_small_wait_pane_ParamLimits

0x6c1b,	// (0x0005d309) status_small_wait_pane

0x665f,	// (0x0005cd4d) aid_levels_signal_ParamLimits

0x665f,	// (0x0005cd4d) aid_levels_signal

0x6671,	// (0x0005cd5f) signal_pane_g1_ParamLimits

0x6671,	// (0x0005cd5f) signal_pane_g1

0x6686,	// (0x0005cd74) signal_pane_g2_ParamLimits

0x6686,	// (0x0005cd74) signal_pane_g2

0x0003,

0xf6de,	// (0x00065dcc) signal_pane_g_ParamLimits

0xf6de,	// (0x00065dcc) signal_pane_g

0x13b4,	// (0x00057aa2) context_pane_g1

0x55e0,	// (0x0005bcce) title_pane_g1

0x560a,	// (0x0005bcf8) title_pane_t1

0xe207,	// (0x000648f5) title_pane_t2

0xe22d,	// (0x0006491b) title_pane_t3

0x0002,

0xf532,	// (0x00065c20) title_pane_t

0x8fb2,	// (0x0005f6a0) aid_levels_battery_ParamLimits

0x8fb2,	// (0x0005f6a0) aid_levels_battery

0x8fc6,	// (0x0005f6b4) battery_pane_g1_ParamLimits

0x8fc6,	// (0x0005f6b4) battery_pane_g1

0x8fdc,	// (0x0005f6ca) battery_pane_g2_ParamLimits

0x8fdc,	// (0x0005f6ca) battery_pane_g2

0x0001,

0xf781,	// (0x00065e6f) battery_pane_g_ParamLimits

0xf781,	// (0x00065e6f) battery_pane_g

0xa24c,	// (0x0006093a) uni_indicator_pane_g1

0xa25f,	// (0x0006094d) uni_indicator_pane_g2

0xa271,	// (0x0006095f) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x00065fe5) uni_indicator_pane_g

0x165d,	// (0x00057d4b) navi_icon_pane_ParamLimits

0x165d,	// (0x00057d4b) navi_icon_pane

0x15a6,	// (0x00057c94) navi_midp_pane

0x1679,	// (0x00057d67) navi_navi_pane

0x1683,	// (0x00057d71) navi_text_pane_ParamLimits

0x1683,	// (0x00057d71) navi_text_pane

0xe1e7,	// (0x000648d5) status_small_wait_pane_g1

0xe47e,	// (0x00064b6c) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x00065fe0) status_small_wait_pane_g

0x9f73,	// (0x00060661) navi_navi_icon_text_pane

0x9f7b,	// (0x00060669) navi_navi_pane_g1_ParamLimits

0x9f7b,	// (0x00060669) navi_navi_pane_g1

0x9f8d,	// (0x0006067b) navi_navi_pane_g2_ParamLimits

0x9f8d,	// (0x0006067b) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x00065fae) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x00065fae) navi_navi_pane_g

0x9f9f,	// (0x0006068d) navi_navi_tabs_pane

0x9fa8,	// (0x00060696) navi_navi_text_pane

0x9f73,	// (0x00060661) navi_navi_volume_pane

0x9f4f,	// (0x0006063d) navi_text_pane_t1

0x9f43,	// (0x00060631) navi_icon_pane_g1

0x9e96,	// (0x00060584) navi_navi_text_pane_t1

0x799a,	// (0x0005e088) navi_navi_volume_pane_g1

0x79a2,	// (0x0005e090) volume_small_pane

0x9dfc,	// (0x000604ea) navi_navi_icon_text_pane_g1

0x9e04,	// (0x000604f2) navi_navi_icon_text_pane_t1

0x1679,	// (0x00057d67) navi_tabs_2_long_pane

0x1679,	// (0x00057d67) navi_tabs_2_pane

0x1679,	// (0x00057d67) navi_tabs_3_long_pane

0x1679,	// (0x00057d67) navi_tabs_3_pane

0x1679,	// (0x00057d67) navi_tabs_4_pane

0x797a,	// (0x0005e068) tabs_2_active_pane_ParamLimits

0x797a,	// (0x0005e068) tabs_2_active_pane

0x798a,	// (0x0005e078) tabs_2_passive_pane_ParamLimits

0x798a,	// (0x0005e078) tabs_2_passive_pane

0x7948,	// (0x0005e036) tabs_3_active_pane_ParamLimits

0x7948,	// (0x0005e036) tabs_3_active_pane

0x7958,	// (0x0005e046) tabs_3_passive_pane_ParamLimits

0x7958,	// (0x0005e046) tabs_3_passive_pane

0x7969,	// (0x0005e057) tabs_3_passive_pane_cp_ParamLimits

0x7969,	// (0x0005e057) tabs_3_passive_pane_cp

0x7904,	// (0x0005dff2) tabs_4_active_pane_ParamLimits

0x7904,	// (0x0005dff2) tabs_4_active_pane

0x7915,	// (0x0005e003) tabs_4_passive_pane_ParamLimits

0x7915,	// (0x0005e003) tabs_4_passive_pane

0x7926,	// (0x0005e014) tabs_4_passive_pane_cp_ParamLimits

0x7926,	// (0x0005e014) tabs_4_passive_pane_cp

0x7937,	// (0x0005e025) tabs_4_passive_pane_cp2_ParamLimits

0x7937,	// (0x0005e025) tabs_4_passive_pane_cp2

0x78e0,	// (0x0005dfce) tabs_2_long_active_pane_ParamLimits

0x78e0,	// (0x0005dfce) tabs_2_long_active_pane

0x78f2,	// (0x0005dfe0) tabs_2_long_passive_pane_ParamLimits

0x78f2,	// (0x0005dfe0) tabs_2_long_passive_pane

0x789b,	// (0x0005df89) tabs_3_long_active_pane_ParamLimits

0x789b,	// (0x0005df89) tabs_3_long_active_pane

0x78b4,	// (0x0005dfa2) tabs_3_long_passive_pane_ParamLimits

0x78b4,	// (0x0005dfa2) tabs_3_long_passive_pane

0x78c7,	// (0x0005dfb5) tabs_3_long_passive_pane_cp_ParamLimits

0x78c7,	// (0x0005dfb5) tabs_3_long_passive_pane_cp

0x7841,	// (0x0005df2f) volume_small_pane_g1

0x784a,	// (0x0005df38) volume_small_pane_g2

0x7853,	// (0x0005df41) volume_small_pane_g3

0x785c,	// (0x0005df4a) volume_small_pane_g4

0x7865,	// (0x0005df53) volume_small_pane_g5

0x786e,	// (0x0005df5c) volume_small_pane_g6

0x7877,	// (0x0005df65) volume_small_pane_g7

0x7880,	// (0x0005df6e) volume_small_pane_g8

0x7889,	// (0x0005df77) volume_small_pane_g9

0x7892,	// (0x0005df80) volume_small_pane_g10

0x0009,

0xf88c,	// (0x00065f7a) volume_small_pane_g

0xe23f,	// (0x0006492d) bg_active_tab_pane_cp2_ParamLimits

0xe23f,	// (0x0006492d) bg_active_tab_pane_cp2

0x5672,	// (0x0005bd60) tabs_3_active_pane_g1

0x567a,	// (0x0005bd68) tabs_3_active_pane_t1

0xe23f,	// (0x0006492d) bg_passive_tab_pane_cp2_ParamLimits

0xe23f,	// (0x0006492d) bg_passive_tab_pane_cp2

0x5672,	// (0x0005bd60) tabs_3_passive_pane_g1

0x567a,	// (0x0005bd68) tabs_3_passive_pane_t1

0xe23f,	// (0x0006492d) bg_active_tab_pane_cp3_ParamLimits

0xe23f,	// (0x0006492d) bg_active_tab_pane_cp3

0x568c,	// (0x0005bd7a) tabs_4_active_pane_g1

0x5694,	// (0x0005bd82) tabs_4_active_pane_t1

0xe23f,	// (0x0006492d) bg_passive_tab_pane_cp3_ParamLimits

0xe23f,	// (0x0006492d) bg_passive_tab_pane_cp3

0x568c,	// (0x0005bd7a) tabs_4_1_passive_pane_g1

0x5694,	// (0x0005bd82) tabs_4_1_passive_pane_t1

0xf51d,	// (0x00065c0b) list_highlight_pane_cp2

0xa4b4,	// (0x00060ba2) list_set_pane_ParamLimits

0xa4b4,	// (0x00060ba2) list_set_pane

0xa556,	// (0x00060c44) main_pane_set_t1_ParamLimits

0xa556,	// (0x00060c44) main_pane_set_t1

0xa576,	// (0x00060c64) main_pane_set_t2_ParamLimits

0xa576,	// (0x00060c64) main_pane_set_t2

0xa58a,	// (0x00060c78) main_pane_set_t3_ParamLimits

0xa58a,	// (0x00060c78) main_pane_set_t3

0xa59c,	// (0x00060c8a) main_pane_set_t4_ParamLimits

0xa59c,	// (0x00060c8a) main_pane_set_t4

0x0003,

0xf95c,	// (0x0006604a) main_pane_set_t_ParamLimits

0xf95c,	// (0x0006604a) main_pane_set_t

0xa5ae,	// (0x00060c9c) setting_code_pane

0xa5ba,	// (0x00060ca8) setting_slider_graphic_pane

0xa5ba,	// (0x00060ca8) setting_slider_pane

0xa5ba,	// (0x00060ca8) setting_text_pane

0xa5ba,	// (0x00060ca8) setting_volume_pane

0x56a6,	// (0x0005bd94) volume_set_pane

0xe23f,	// (0x0006492d) bg_set_opt_pane_cp

0x56ae,	// (0x0005bd9c) setting_slider_pane_t1

0x56c7,	// (0x0005bdb5) setting_slider_pane_t2

0x56e1,	// (0x0005bdcf) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00065c27) setting_slider_pane_t

0x56f9,	// (0x0005bde7) slider_set_pane

0xe1f1,	// (0x000648df) bg_set_opt_pane_cp2

0xe24d,	// (0x0006493b) setting_slider_graphic_pane_g1

0x570f,	// (0x0005bdfd) setting_slider_graphic_pane_t1

0x571f,	// (0x0005be0d) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00065c2e) setting_slider_graphic_pane_t

0x572f,	// (0x0005be1d) slider_set_pane_cp

0xe1f1,	// (0x000648df) input_focus_pane_cp1

0xa473,	// (0x00060b61) list_set_text_pane

0xe1e7,	// (0x000648d5) setting_text_pane_g1

0xe1f1,	// (0x000648df) input_focus_pane_cp2

0xe1e7,	// (0x000648d5) setting_code_pane_g1

0xe256,	// (0x00064944) setting_code_pane_t1

0x3af9,	// (0x0005a1e7) set_text_pane_t1_ParamLimits

0x3af9,	// (0x0005a1e7) set_text_pane_t1

0xf1f2,	// (0x000658e0) set_opt_bg_pane_g1

0xf1fa,	// (0x000658e8) set_opt_bg_pane_g2

0xa44d,	// (0x00060b3b) set_opt_bg_pane_g3

0xf20a,	// (0x000658f8) set_opt_bg_pane_g4

0xf212,	// (0x00065900) set_opt_bg_pane_g5

0xf21a,	// (0x00065908) set_opt_bg_pane_g6

0xa457,	// (0x00060b45) set_opt_bg_pane_g7

0xa45f,	// (0x00060b4d) set_opt_bg_pane_g8

0xa469,	// (0x00060b57) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x00066037) set_opt_bg_pane_g

0xa440,	// (0x00060b2e) slider_set_pane_g1

0x7a21,	// (0x0005e10f) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00066028) slider_set_pane_g

0x79ab,	// (0x0005e099) volume_set_pane_g1

0x79b3,	// (0x0005e0a1) volume_set_pane_g2

0x79bb,	// (0x0005e0a9) volume_set_pane_g3

0x79c3,	// (0x0005e0b1) volume_set_pane_g4

0x79cb,	// (0x0005e0b9) volume_set_pane_g5

0x79d3,	// (0x0005e0c1) volume_set_pane_g6

0x79db,	// (0x0005e0c9) volume_set_pane_g7

0x79e3,	// (0x0005e0d1) volume_set_pane_g8

0x79eb,	// (0x0005e0d9) volume_set_pane_g9

0x79f3,	// (0x0005e0e1) volume_set_pane_g10

0x0009,

0xf912,	// (0x00066000) volume_set_pane_g

0x5737,	// (0x0005be25) indicator_pane_ParamLimits

0x5737,	// (0x0005be25) indicator_pane

0x5743,	// (0x0005be31) main_idle_pane_g2_ParamLimits

0x5743,	// (0x0005be31) main_idle_pane_g2

0x576b,	// (0x0005be59) main_pane_idle_g1_ParamLimits

0x576b,	// (0x0005be59) main_pane_idle_g1

0xe264,	// (0x00064952) popup_clock_digital_analogue_window_ParamLimits

0xe264,	// (0x00064952) popup_clock_digital_analogue_window

0x5778,	// (0x0005be66) soft_indicator_pane_ParamLimits

0x5778,	// (0x0005be66) soft_indicator_pane

0x5784,	// (0x0005be72) wallpaper_pane_ParamLimits

0x5784,	// (0x0005be72) wallpaper_pane

0xe1e7,	// (0x000648d5) wallpaper_pane_g1

0x5790,	// (0x0005be7e) indicator_pane_g1_ParamLimits

0x5790,	// (0x0005be7e) indicator_pane_g1

0xa8d3,	// (0x00060fc1) navi_navi_icon_text_pane_srt_g1

0xe292,	// (0x00064980) soft_indicator_pane_t1

0xe2ac,	// (0x0006499a) aid_ps_area_pane

0x579c,	// (0x0005be8a) aid_ps_clock_pane

0xe2bd,	// (0x000649ab) aid_ps_indicator_pane

0xe2c9,	// (0x000649b7) indicator_ps_pane_ParamLimits

0xe2c9,	// (0x000649b7) indicator_ps_pane

0xe2d8,	// (0x000649c6) power_save_pane_g1_ParamLimits

0xe2d8,	// (0x000649c6) power_save_pane_g1

0xe2e4,	// (0x000649d2) power_save_pane_g2_ParamLimits

0xe2e4,	// (0x000649d2) power_save_pane_g2

0x51f5,	// (0x0005b8e3) aid_navinavi_width_pane

0xe2ac,	// (0x0006499a) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00065c33) power_save_pane_g_ParamLimits

0xf545,	// (0x00065c33) power_save_pane_g

0xe2f2,	// (0x000649e0) power_save_pane_t1_ParamLimits

0xe2f2,	// (0x000649e0) power_save_pane_t1

0x579c,	// (0x0005be8a) aid_ps_clock_pane_ParamLimits

0xe2bd,	// (0x000649ab) aid_ps_indicator_pane_ParamLimits

0xe304,	// (0x000649f2) power_save_pane_t4_ParamLimits

0xe304,	// (0x000649f2) power_save_pane_t4

0x0001,

0xf54a,	// (0x00065c38) power_save_pane_t_ParamLimits

0xf54a,	// (0x00065c38) power_save_pane_t

0xe32e,	// (0x00064a1c) power_save_t3_ParamLimits

0xe32e,	// (0x00064a1c) power_save_t3

0xe319,	// (0x00064a07) power_save_t2_ParamLimits

0xe319,	// (0x00064a07) power_save_t2

0xe343,	// (0x00064a31) indicator_ps_pane_g1

0x57aa,	// (0x0005be98) ai_gene_pane_ParamLimits

0x57aa,	// (0x0005be98) ai_gene_pane

0x57b6,	// (0x0005bea4) ai_links_pane_ParamLimits

0x57b6,	// (0x0005bea4) ai_links_pane

0x57c2,	// (0x0005beb0) indicator_pane_cp1_ParamLimits

0x57c2,	// (0x0005beb0) indicator_pane_cp1

0x57ce,	// (0x0005bebc) main_pane_idle_g1_cp_ParamLimits

0x57ce,	// (0x0005bebc) main_pane_idle_g1_cp

0x57da,	// (0x0005bec8) popup_ai_links_title_window

0x57e3,	// (0x0005bed1) soft_indicator_pane_cp1_ParamLimits

0x57e3,	// (0x0005bed1) soft_indicator_pane_cp1

0xa23a,	// (0x00060928) ai_links_pane_g1

0xa243,	// (0x00060931) grid_ai_links_pane

0xa21d,	// (0x0006090b) ai_gene_pane_1

0xa228,	// (0x00060916) ai_gene_pane_2

0xa231,	// (0x0006091f) list_highlight_pane_cp4

0xa201,	// (0x000608ef) cell_ai_link_pane_ParamLimits

0xa201,	// (0x000608ef) cell_ai_link_pane

0xa1f9,	// (0x000608e7) cell_ai_link_pane_g1

0xe47e,	// (0x00064b6c) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00065fdb) cell_ai_link_pane_g

0xe1f1,	// (0x000648df) grid_highlight_cp2

0xe1f1,	// (0x000648df) bg_popup_sub_pane_cp1

0xe35a,	// (0x00064a48) popup_ai_links_title_window_t1

0xa149,	// (0x00060837) ai_gene_pane_1_g1_ParamLimits

0xa149,	// (0x00060837) ai_gene_pane_1_g1

0xa155,	// (0x00060843) ai_gene_pane_1_g2_ParamLimits

0xa155,	// (0x00060843) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x00065fd1) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x00065fd1) ai_gene_pane_1_g

0xa162,	// (0x00060850) ai_gene_pane_1_t1_ParamLimits

0xa162,	// (0x00060850) ai_gene_pane_1_t1

0xa196,	// (0x00060884) grid_ai_soft_ind_pane

0xa134,	// (0x00060822) ai_gene_pane_2_t1_ParamLimits

0xa134,	// (0x00060822) ai_gene_pane_2_t1

0x57ef,	// (0x0005bedd) main_pane_empty_t1_ParamLimits

0x57ef,	// (0x0005bedd) main_pane_empty_t1

0x5807,	// (0x0005bef5) main_pane_empty_t2_ParamLimits

0x5807,	// (0x0005bef5) main_pane_empty_t2

0x581c,	// (0x0005bf0a) main_pane_empty_t3_ParamLimits

0x581c,	// (0x0005bf0a) main_pane_empty_t3

0x582e,	// (0x0005bf1c) main_pane_empty_t4_ParamLimits

0x582e,	// (0x0005bf1c) main_pane_empty_t4

0x5840,	// (0x0005bf2e) main_pane_empty_t5_ParamLimits

0x5840,	// (0x0005bf2e) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00065c3d) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00065c3d) main_pane_empty_t

0xf277,	// (0x00065965) bg_popup_window_pane_ParamLimits

0xf277,	// (0x00065965) bg_popup_window_pane

0x9ea4,	// (0x00060592) find_popup_pane_cp2_ParamLimits

0x9ea4,	// (0x00060592) find_popup_pane_cp2

0x9eb0,	// (0x0006059e) heading_pane_ParamLimits

0x9eb0,	// (0x0006059e) heading_pane

0xe1f1,	// (0x000648df) bg_popup_sub_pane

0x9e1e,	// (0x0006050c) bg_popup_window_pane_g1_ParamLimits

0x9e1e,	// (0x0006050c) bg_popup_window_pane_g1

0x9e2a,	// (0x00060518) bg_popup_window_pane_g2_ParamLimits

0x9e2a,	// (0x00060518) bg_popup_window_pane_g2

0x9e36,	// (0x00060524) bg_popup_window_pane_g3_ParamLimits

0x9e36,	// (0x00060524) bg_popup_window_pane_g3

0x9e42,	// (0x00060530) bg_popup_window_pane_g4_ParamLimits

0x9e42,	// (0x00060530) bg_popup_window_pane_g4

0x9e4e,	// (0x0006053c) bg_popup_window_pane_g5_ParamLimits

0x9e4e,	// (0x0006053c) bg_popup_window_pane_g5

0x9e5a,	// (0x00060548) bg_popup_window_pane_g6_ParamLimits

0x9e5a,	// (0x00060548) bg_popup_window_pane_g6

0x9e66,	// (0x00060554) bg_popup_window_pane_g7_ParamLimits

0x9e66,	// (0x00060554) bg_popup_window_pane_g7

0x9e72,	// (0x00060560) bg_popup_window_pane_g8_ParamLimits

0x9e72,	// (0x00060560) bg_popup_window_pane_g8

0x9e7e,	// (0x0006056c) bg_popup_window_pane_g9_ParamLimits

0x9e7e,	// (0x0006056c) bg_popup_window_pane_g9

0x9e8a,	// (0x00060578) bg_popup_window_pane_g10_ParamLimits

0x9e8a,	// (0x00060578) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x00065f99) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x00065f99) bg_popup_window_pane_g

0x9db3,	// (0x000604a1) bg_popup_heading_pane_ParamLimits

0x9db3,	// (0x000604a1) bg_popup_heading_pane

0x7b65,	// (0x0005e253) tabs_4_passive_pane_cp_srt_ParamLimits

0x7b65,	// (0x0005e253) tabs_4_passive_pane_cp_srt

0x7b77,	// (0x0005e265) tabs_4_passive_pane_srt_ParamLimits

0x9dc7,	// (0x000604b5) heading_pane_g2

0x7b77,	// (0x0005e265) tabs_4_passive_pane_srt

0xf51d,	// (0x00065c0b) bg_passive_tab_pane_cp3_srt_ParamLimits

0xf51d,	// (0x00065c0b) bg_passive_tab_pane_cp3_srt

0x9dcf,	// (0x000604bd) heading_pane_t1_ParamLimits

0x9dcf,	// (0x000604bd) heading_pane_t1

0x9de6,	// (0x000604d4) heading_pane_t2_ParamLimits

0x9de6,	// (0x000604d4) heading_pane_t2

0x0001,

0xf8a6,	// (0x00065f94) heading_pane_t_ParamLimits

0xf8a6,	// (0x00065f94) heading_pane_t

0x98f0,	// (0x0005ffde) bg_popup_heading_pane_g1

0x999f,	// (0x0006008d) bg_popup_heading_pane_g2

0x99a9,	// (0x00060097) bg_popup_heading_pane_g3

0x99b3,	// (0x000600a1) bg_popup_heading_pane_g4

0x99bd,	// (0x000600ab) bg_popup_heading_pane_g5

0x99c7,	// (0x000600b5) bg_popup_heading_pane_g6

0x99cf,	// (0x000600bd) bg_popup_heading_pane_g7

0x99d7,	// (0x000600c5) bg_popup_heading_pane_g8

0x99e1,	// (0x000600cf) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00065f50) bg_popup_heading_pane_g

0x90b1,	// (0x0005f79f) bg_popup_sub_pane_g1

0x90c1,	// (0x0005f7af) bg_popup_sub_pane_g2

0x90b9,	// (0x0005f7a7) bg_popup_sub_pane_g3

0x90d1,	// (0x0005f7bf) bg_popup_sub_pane_g4

0x90c9,	// (0x0005f7b7) bg_popup_sub_pane_g5

0x90d9,	// (0x0005f7c7) bg_popup_sub_pane_g6

0x90e1,	// (0x0005f7cf) bg_popup_sub_pane_g7

0x90f1,	// (0x0005f7df) bg_popup_sub_pane_g8

0x90e9,	// (0x0005f7d7) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00065f2a) bg_popup_sub_pane_g

0xe369,	// (0x00064a57) bg_popup_window_pane_cp5_ParamLimits

0xe369,	// (0x00064a57) bg_popup_window_pane_cp5

0xe385,	// (0x00064a73) popup_note_window_g1_ParamLimits

0xe385,	// (0x00064a73) popup_note_window_g1

0xe391,	// (0x00064a7f) popup_note_window_t1_ParamLimits

0xe391,	// (0x00064a7f) popup_note_window_t1

0xe3a7,	// (0x00064a95) popup_note_window_t2_ParamLimits

0xe3a7,	// (0x00064a95) popup_note_window_t2

0xe3bd,	// (0x00064aab) popup_note_window_t3_ParamLimits

0xe3bd,	// (0x00064aab) popup_note_window_t3

0xe3d3,	// (0x00064ac1) popup_note_window_t4_ParamLimits

0xe3d3,	// (0x00064ac1) popup_note_window_t4

0xe3fb,	// (0x00064ae9) popup_note_window_t5_ParamLimits

0xe3fb,	// (0x00064ae9) popup_note_window_t5

0x0004,

0xf55a,	// (0x00065c48) popup_note_window_t_ParamLimits

0xf55a,	// (0x00065c48) popup_note_window_t

0xe41f,	// (0x00064b0d) bg_popup_window_pane_cp6_ParamLimits

0xe41f,	// (0x00064b0d) bg_popup_window_pane_cp6

0x986c,	// (0x0005ff5a) popup_note_image_window_g1_ParamLimits

0x986c,	// (0x0005ff5a) popup_note_image_window_g1

0x9878,	// (0x0005ff66) popup_note_image_window_g2_ParamLimits

0x9878,	// (0x0005ff66) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00065f1e) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00065f1e) popup_note_image_window_g

0x9891,	// (0x0005ff7f) popup_note_image_window_t1_ParamLimits

0x9891,	// (0x0005ff7f) popup_note_image_window_t1

0x98aa,	// (0x0005ff98) popup_note_image_window_t2_ParamLimits

0x98aa,	// (0x0005ff98) popup_note_image_window_t2

0x98c3,	// (0x0005ffb1) popup_note_image_window_t3_ParamLimits

0x98c3,	// (0x0005ffb1) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00065f23) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00065f23) popup_note_image_window_t

0x9735,	// (0x0005fe23) bg_popup_window_pane_cp7_ParamLimits

0x9735,	// (0x0005fe23) bg_popup_window_pane_cp7

0x9765,	// (0x0005fe53) popup_note_wait_window_g1_ParamLimits

0x9765,	// (0x0005fe53) popup_note_wait_window_g1

0x9771,	// (0x0005fe5f) popup_note_wait_window_g2_ParamLimits

0x9771,	// (0x0005fe5f) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00065f0c) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00065f0c) popup_note_wait_window_g

0x9789,	// (0x0005fe77) popup_note_wait_window_t1_ParamLimits

0x9789,	// (0x0005fe77) popup_note_wait_window_t1

0x97b0,	// (0x0005fe9e) popup_note_wait_window_t2_ParamLimits

0x97b0,	// (0x0005fe9e) popup_note_wait_window_t2

0x97cd,	// (0x0005febb) popup_note_wait_window_t3_ParamLimits

0x97cd,	// (0x0005febb) popup_note_wait_window_t3

0x97e0,	// (0x0005fece) popup_note_wait_window_t4_ParamLimits

0x97e0,	// (0x0005fece) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x00065f13) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x00065f13) popup_note_wait_window_t

0x9805,	// (0x0005fef3) wait_bar_pane_ParamLimits

0x9805,	// (0x0005fef3) wait_bar_pane

0xe1f1,	// (0x000648df) wait_anim_pane

0xe1f1,	// (0x000648df) wait_border_pane

0xe1e7,	// (0x000648d5) wait_anim_pane_g1

0xe1e7,	// (0x000648d5) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x00065dc7) wait_anim_pane_g

0x96e1,	// (0x0005fdcf) wait_border_pane_g1

0x96ec,	// (0x0005fdda) wait_border_pane_g2

0x96f5,	// (0x0005fde3) wait_border_pane_g3

0x0002,

0xf817,	// (0x00065f05) wait_border_pane_g

0x954c,	// (0x0005fc3a) bg_popup_window_pane_cp16_ParamLimits

0x954c,	// (0x0005fc3a) bg_popup_window_pane_cp16

0x964c,	// (0x0005fd3a) indicator_popup_pane_cp4_ParamLimits

0x964c,	// (0x0005fd3a) indicator_popup_pane_cp4

0x9660,	// (0x0005fd4e) popup_query_data_window_t1_ParamLimits

0x9660,	// (0x0005fd4e) popup_query_data_window_t1

0x9672,	// (0x0005fd60) popup_query_data_window_t2_ParamLimits

0x9672,	// (0x0005fd60) popup_query_data_window_t2

0x968b,	// (0x0005fd79) popup_query_data_window_t3_ParamLimits

0x968b,	// (0x0005fd79) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00065efe) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00065efe) popup_query_data_window_t

0x96a5,	// (0x0005fd93) query_popup_data_pane_ParamLimits

0x96a5,	// (0x0005fd93) query_popup_data_pane

0x96b9,	// (0x0005fda7) query_popup_data_pane_cp1_ParamLimits

0x96b9,	// (0x0005fda7) query_popup_data_pane_cp1

0x954c,	// (0x0005fc3a) bg_popup_window_pane_cp10_ParamLimits

0x954c,	// (0x0005fc3a) bg_popup_window_pane_cp10

0x957e,	// (0x0005fc6c) indicator_popup_pane_ParamLimits

0x957e,	// (0x0005fc6c) indicator_popup_pane

0x95a0,	// (0x0005fc8e) popup_query_code_window_t1_ParamLimits

0x95a0,	// (0x0005fc8e) popup_query_code_window_t1

0x95ba,	// (0x0005fca8) popup_query_code_window_t2_ParamLimits

0x95ba,	// (0x0005fca8) popup_query_code_window_t2

0x9603,	// (0x0005fcf1) popup_query_code_window_t3_ParamLimits

0x9603,	// (0x0005fcf1) popup_query_code_window_t3

0x0002,

0xf809,	// (0x00065ef7) popup_query_code_window_t_ParamLimits

0xf809,	// (0x00065ef7) popup_query_code_window_t

0x9632,	// (0x0005fd20) query_popup_pane_ParamLimits

0x9632,	// (0x0005fd20) query_popup_pane

0xe41f,	// (0x00064b0d) bg_popup_window_pane_cp15_ParamLimits

0xe41f,	// (0x00064b0d) bg_popup_window_pane_cp15

0x587a,	// (0x0005bf68) indicator_popup_pane_cp1_ParamLimits

0x587a,	// (0x0005bf68) indicator_popup_pane_cp1

0x588d,	// (0x0005bf7b) indicator_popup_pane_cp2_ParamLimits

0x588d,	// (0x0005bf7b) indicator_popup_pane_cp2

0x58a0,	// (0x0005bf8e) popup_query_data_code_window_g1_ParamLimits

0x58a0,	// (0x0005bf8e) popup_query_data_code_window_g1

0xe43d,	// (0x00064b2b) popup_query_data_code_window_t1_ParamLimits

0xe43d,	// (0x00064b2b) popup_query_data_code_window_t1

0xe44f,	// (0x00064b3d) popup_query_data_code_window_t2_ParamLimits

0xe44f,	// (0x00064b3d) popup_query_data_code_window_t2

0x58b3,	// (0x0005bfa1) popup_query_data_code_window_t3_ParamLimits

0x58b3,	// (0x0005bfa1) popup_query_data_code_window_t3

0x58c9,	// (0x0005bfb7) popup_query_data_code_window_t4_ParamLimits

0x58c9,	// (0x0005bfb7) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00065c53) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00065c53) popup_query_data_code_window_t

0x7724,	// (0x0005de12) list_single_midp_graphic_pane_g3

0x58e1,	// (0x0005bfcf) query_popup_data_pane_cp2_ParamLimits

0x58f4,	// (0x0005bfe2) query_popup_pane_cp2_ParamLimits

0x58f4,	// (0x0005bfe2) query_popup_pane_cp2

0xe1f1,	// (0x000648df) bg_popup_window_pane_cp11

0x9530,	// (0x0005fc1e) heading_pane_cp5

0x9538,	// (0x0005fc26) listscroll_popup_info_pane

0xe1f1,	// (0x000648df) input_focus_pane_cp3

0xe461,	// (0x00064b4f) query_popup_pane_t1

0xe46f,	// (0x00064b5d) list_popup_info_pane_ParamLimits

0xe46f,	// (0x00064b5d) list_popup_info_pane

0xe47e,	// (0x00064b6c) listscroll_popup_info_pane_g1

0xe486,	// (0x00064b74) scroll_pane_cp7

0x5907,	// (0x0005bff5) popup_info_list_pane_t1_ParamLimits

0x5907,	// (0x0005bff5) popup_info_list_pane_t1

0x5921,	// (0x0005c00f) popup_info_list_pane_t2_ParamLimits

0x5921,	// (0x0005c00f) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00065c5c) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00065c5c) popup_info_list_pane_t

0xe1f1,	// (0x000648df) bg_popup_window_pane_cp12

0xa8ed,	// (0x00060fdb) find_popup_pane

0xe23f,	// (0x0006492d) bg_popup_window_pane_cp3

0xe490,	// (0x00064b7e) heading_pane_cp3

0xe49f,	// (0x00064b8d) listscroll_popup_graphic_pane

0xe1f1,	// (0x000648df) bg_popup_window_pane_cp4

0x598b,	// (0x0005c079) heading_pane_cp4

0xe4af,	// (0x00064b9d) listscroll_popup_colour_pane

0x5995,	// (0x0005c083) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5995,	// (0x0005c083) cell_large_graphic_colour_none_popup_pane

0x59a9,	// (0x0005c097) grid_large_graphic_colour_popup_pane_ParamLimits

0x59a9,	// (0x0005c097) grid_large_graphic_colour_popup_pane

0x59cd,	// (0x0005c0bb) listscroll_popup_colour_pane_g1_ParamLimits

0x59cd,	// (0x0005c0bb) listscroll_popup_colour_pane_g1

0x59e4,	// (0x0005c0d2) listscroll_popup_colour_pane_g2_ParamLimits

0x59e4,	// (0x0005c0d2) listscroll_popup_colour_pane_g2

0x59fb,	// (0x0005c0e9) listscroll_popup_colour_pane_g3_ParamLimits

0x59fb,	// (0x0005c0e9) listscroll_popup_colour_pane_g3

0x5a0b,	// (0x0005c0f9) listscroll_popup_colour_pane_g4_ParamLimits

0x5a0b,	// (0x0005c0f9) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00065c61) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00065c61) listscroll_popup_colour_pane_g

0xe4b7,	// (0x00064ba5) scroll_pane_cp6_ParamLimits

0xe4b7,	// (0x00064ba5) scroll_pane_cp6

0x5a1b,	// (0x0005c109) cell_large_graphic_colour_popup_pane_ParamLimits

0x5a1b,	// (0x0005c109) cell_large_graphic_colour_popup_pane

0x5a3a,	// (0x0005c128) cell_large_graphic_colour_none_popup_pane_t1

0xe1f1,	// (0x000648df) grid_highlight_pane_cp5

0xe4c9,	// (0x00064bb7) cell_large_graphic_colour_popup_pane_g1

0xe4d1,	// (0x00064bbf) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00065c6a) cell_large_graphic_colour_popup_pane_g

0xe4d9,	// (0x00064bc7) cell_large_graphic_colour_popup_pane_g2_copy1

0xe4e2,	// (0x00064bd0) grid_highlight_pane_cp4

0xe4ea,	// (0x00064bd8) bg_popup_window_pane_cp8_ParamLimits

0xe4ea,	// (0x00064bd8) bg_popup_window_pane_cp8

0x5a49,	// (0x0005c137) popup_snote_single_text_window_g1_ParamLimits

0x5a49,	// (0x0005c137) popup_snote_single_text_window_g1

0x5a5b,	// (0x0005c149) popup_snote_single_text_window_t1_ParamLimits

0x5a5b,	// (0x0005c149) popup_snote_single_text_window_t1

0x5a6e,	// (0x0005c15c) popup_snote_single_text_window_t2_ParamLimits

0x5a6e,	// (0x0005c15c) popup_snote_single_text_window_t2

0x5a81,	// (0x0005c16f) popup_snote_single_text_window_t3_ParamLimits

0x5a81,	// (0x0005c16f) popup_snote_single_text_window_t3

0x5aba,	// (0x0005c1a8) popup_snote_single_text_window_t4_ParamLimits

0x5aba,	// (0x0005c1a8) popup_snote_single_text_window_t4

0x5aee,	// (0x0005c1dc) popup_snote_single_text_window_t5_ParamLimits

0x5aee,	// (0x0005c1dc) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00065c6f) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00065c6f) popup_snote_single_text_window_t

0xe505,	// (0x00064bf3) bg_popup_window_pane_cp9_ParamLimits

0xe505,	// (0x00064bf3) bg_popup_window_pane_cp9

0x5a49,	// (0x0005c137) popup_snote_single_graphic_window_g1_ParamLimits

0x5a49,	// (0x0005c137) popup_snote_single_graphic_window_g1

0xe513,	// (0x00064c01) popup_snote_single_graphic_window_g2_ParamLimits

0xe513,	// (0x00064c01) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00065c7a) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00065c7a) popup_snote_single_graphic_window_g

0xe51f,	// (0x00064c0d) popup_snote_single_graphic_window_t1_ParamLimits

0xe51f,	// (0x00064c0d) popup_snote_single_graphic_window_t1

0xe532,	// (0x00064c20) popup_snote_single_graphic_window_t2_ParamLimits

0xe532,	// (0x00064c20) popup_snote_single_graphic_window_t2

0x5b1d,	// (0x0005c20b) popup_snote_single_graphic_window_t3_ParamLimits

0x5b1d,	// (0x0005c20b) popup_snote_single_graphic_window_t3

0x5b56,	// (0x0005c244) popup_snote_single_graphic_window_t4_ParamLimits

0x5b56,	// (0x0005c244) popup_snote_single_graphic_window_t4

0x5b8a,	// (0x0005c278) popup_snote_single_graphic_window_t5_ParamLimits

0x5b8a,	// (0x0005c278) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00065c7f) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00065c7f) popup_snote_single_graphic_window_t

0xa82f,	// (0x00060f1d) grid_graphic_popup_pane_ParamLimits

0xa82f,	// (0x00060f1d) grid_graphic_popup_pane

0xa859,	// (0x00060f47) listscroll_popup_graphic_pane_g1_ParamLimits

0xa859,	// (0x00060f47) listscroll_popup_graphic_pane_g1

0xa86d,	// (0x00060f5b) listscroll_popup_graphic_pane_g2_ParamLimits

0xa86d,	// (0x00060f5b) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00066074) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00066074) listscroll_popup_graphic_pane_g

0xa881,	// (0x00060f6f) scroll_pane_cp5

0xa7c5,	// (0x00060eb3) cell_graphic_popup_pane_ParamLimits

0xa7c5,	// (0x00060eb3) cell_graphic_popup_pane

0xa7a6,	// (0x00060e94) cell_graphic_popup_pane_g1

0xa7ae,	// (0x00060e9c) cell_graphic_popup_pane_g2

0xe4d9,	// (0x00064bc7) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x0006606d) cell_graphic_popup_pane_g

0xa7b7,	// (0x00060ea5) cell_graphic_popup_pane_t2

0xe4e2,	// (0x00064bd0) grid_highlight_pane_cp3

0xf0ee,	// (0x000657dc) list_gen_pane_ParamLimits

0xf0ee,	// (0x000657dc) list_gen_pane

0xf116,	// (0x00065804) scroll_pane

0xa6fe,	// (0x00060dec) bg_list_pane_g1_ParamLimits

0xa6fe,	// (0x00060dec) bg_list_pane_g1

0xa71b,	// (0x00060e09) bg_list_pane_g2_ParamLimits

0xa71b,	// (0x00060e09) bg_list_pane_g2

0xa730,	// (0x00060e1e) bg_list_pane_g3_ParamLimits

0xa730,	// (0x00060e1e) bg_list_pane_g3

0xa744,	// (0x00060e32) bg_list_pane_g4_ParamLimits

0xa744,	// (0x00060e32) bg_list_pane_g4

0xa758,	// (0x00060e46) bg_list_pane_g5_ParamLimits

0xa758,	// (0x00060e46) bg_list_pane_g5

0x0004,

0xf974,	// (0x00066062) bg_list_pane_g_ParamLimits

0xf974,	// (0x00066062) bg_list_pane_g

0xa640,	// (0x00060d2e) list_double2_graphic_large_graphic_pane_ParamLimits

0xa640,	// (0x00060d2e) list_double2_graphic_large_graphic_pane

0xa640,	// (0x00060d2e) list_double2_graphic_pane_ParamLimits

0xa640,	// (0x00060d2e) list_double2_graphic_pane

0xa640,	// (0x00060d2e) list_double2_large_graphic_pane_ParamLimits

0xa640,	// (0x00060d2e) list_double2_large_graphic_pane

0x7acb,	// (0x0005e1b9) list_double2_pane_ParamLimits

0x7acb,	// (0x0005e1b9) list_double2_pane

0xa640,	// (0x00060d2e) list_double_graphic_heading_pane_ParamLimits

0xa640,	// (0x00060d2e) list_double_graphic_heading_pane

0xa640,	// (0x00060d2e) list_double_graphic_pane_ParamLimits

0xa640,	// (0x00060d2e) list_double_graphic_pane

0xa640,	// (0x00060d2e) list_double_heading_pane_ParamLimits

0xa640,	// (0x00060d2e) list_double_heading_pane

0xa640,	// (0x00060d2e) list_double_large_graphic_pane_ParamLimits

0xa640,	// (0x00060d2e) list_double_large_graphic_pane

0xa640,	// (0x00060d2e) list_double_number_pane_ParamLimits

0xa640,	// (0x00060d2e) list_double_number_pane

0xa640,	// (0x00060d2e) list_double_pane_ParamLimits

0xa640,	// (0x00060d2e) list_double_pane

0xa640,	// (0x00060d2e) list_double_time_pane_ParamLimits

0xa640,	// (0x00060d2e) list_double_time_pane

0xa640,	// (0x00060d2e) list_setting_number_pane_ParamLimits

0xa640,	// (0x00060d2e) list_setting_number_pane

0xa640,	// (0x00060d2e) list_setting_pane_ParamLimits

0xa640,	// (0x00060d2e) list_setting_pane

0xa6be,	// (0x00060dac) list_single_2graphic_pane_ParamLimits

0xa6be,	// (0x00060dac) list_single_2graphic_pane

0xa6be,	// (0x00060dac) list_single_graphic_heading_pane_ParamLimits

0xa6be,	// (0x00060dac) list_single_graphic_heading_pane

0xa6be,	// (0x00060dac) list_single_graphic_pane_ParamLimits

0xa6be,	// (0x00060dac) list_single_graphic_pane

0xa6be,	// (0x00060dac) list_single_heading_pane_ParamLimits

0xa6be,	// (0x00060dac) list_single_heading_pane

0x7b1f,	// (0x0005e20d) list_single_large_graphic_pane_ParamLimits

0x7b1f,	// (0x0005e20d) list_single_large_graphic_pane

0xa6be,	// (0x00060dac) list_single_number_heading_pane_ParamLimits

0xa6be,	// (0x00060dac) list_single_number_heading_pane

0xa6be,	// (0x00060dac) list_single_number_pane_ParamLimits

0xa6be,	// (0x00060dac) list_single_number_pane

0xa6be,	// (0x00060dac) list_single_pane_ParamLimits

0xa6be,	// (0x00060dac) list_single_pane

0xe1f1,	// (0x000648df) list_highlight_pane_cp1

0x5bcf,	// (0x0005c2bd) list_single_pane_g1_ParamLimits

0x5bcf,	// (0x0005c2bd) list_single_pane_g1

0x5bdb,	// (0x0005c2c9) list_single_pane_g2_ParamLimits

0x5bdb,	// (0x0005c2c9) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00065c9b) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00065c9b) list_single_pane_g

0x7ab5,	// (0x0005e1a3) list_single_pane_t1_ParamLimits

0x7ab5,	// (0x0005e1a3) list_single_pane_t1

0x5bcf,	// (0x0005c2bd) list_single_number_pane_g1_ParamLimits

0x5bcf,	// (0x0005c2bd) list_single_number_pane_g1

0x5bdb,	// (0x0005c2c9) list_single_number_pane_g2_ParamLimits

0x5bdb,	// (0x0005c2c9) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00065c9b) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00065c9b) list_single_number_pane_g

0x5be7,	// (0x0005c2d5) list_single_number_pane_t1_ParamLimits

0x5be7,	// (0x0005c2d5) list_single_number_pane_t1

0x79fb,	// (0x0005e0e9) list_single_number_pane_t2_ParamLimits

0x79fb,	// (0x0005e0e9) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00066023) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00066023) list_single_number_pane_t

0x5bc3,	// (0x0005c2b1) list_single_graphic_pane_g1_ParamLimits

0x5bc3,	// (0x0005c2b1) list_single_graphic_pane_g1

0x5bcf,	// (0x0005c2bd) list_single_graphic_pane_g2_ParamLimits

0x5bcf,	// (0x0005c2bd) list_single_graphic_pane_g2

0x5bdb,	// (0x0005c2c9) list_single_graphic_pane_g3_ParamLimits

0x5bdb,	// (0x0005c2c9) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00065c8a) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00065c8a) list_single_graphic_pane_g

0x5be7,	// (0x0005c2d5) list_single_graphic_pane_t1_ParamLimits

0x5be7,	// (0x0005c2d5) list_single_graphic_pane_t1

0x5bfd,	// (0x0005c2eb) list_single_heading_pane_g1_ParamLimits

0x5bfd,	// (0x0005c2eb) list_single_heading_pane_g1

0x5bdb,	// (0x0005c2c9) list_single_heading_pane_g2_ParamLimits

0x5bdb,	// (0x0005c2c9) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00065c91) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00065c91) list_single_heading_pane_g

0x5c10,	// (0x0005c2fe) list_single_heading_pane_t1_ParamLimits

0x5c10,	// (0x0005c2fe) list_single_heading_pane_t1

0x5c26,	// (0x0005c314) list_single_heading_pane_t2_ParamLimits

0x5c26,	// (0x0005c314) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00065c96) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00065c96) list_single_heading_pane_t

0x5bcf,	// (0x0005c2bd) list_single_number_heading_pane_g1_ParamLimits

0x5bcf,	// (0x0005c2bd) list_single_number_heading_pane_g1

0x5bdb,	// (0x0005c2c9) list_single_number_heading_pane_g2_ParamLimits

0x5bdb,	// (0x0005c2c9) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00065c9b) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00065c9b) list_single_number_heading_pane_g

0x5c38,	// (0x0005c326) list_single_number_heading_pane_t1_ParamLimits

0x5c38,	// (0x0005c326) list_single_number_heading_pane_t1

0x5c4e,	// (0x0005c33c) list_single_number_heading_pane_t2_ParamLimits

0x5c4e,	// (0x0005c33c) list_single_number_heading_pane_t2

0x5c60,	// (0x0005c34e) list_single_number_heading_pane_t3_ParamLimits

0x5c60,	// (0x0005c34e) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00065ca0) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00065ca0) list_single_number_heading_pane_t

0x5c72,	// (0x0005c360) list_single_graphic_heading_pane_g1_ParamLimits

0x5c72,	// (0x0005c360) list_single_graphic_heading_pane_g1

0x5c86,	// (0x0005c374) list_single_graphic_heading_pane_g4_ParamLimits

0x5c86,	// (0x0005c374) list_single_graphic_heading_pane_g4

0x5bdb,	// (0x0005c2c9) list_single_graphic_heading_pane_g5_ParamLimits

0x5bdb,	// (0x0005c2c9) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00065ca7) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00065ca7) list_single_graphic_heading_pane_g

0x5c38,	// (0x0005c326) list_single_graphic_heading_pane_t1_ParamLimits

0x5c38,	// (0x0005c326) list_single_graphic_heading_pane_t1

0x5c97,	// (0x0005c385) list_single_graphic_heading_pane_t2_ParamLimits

0x5c97,	// (0x0005c385) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00065cae) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00065cae) list_single_graphic_heading_pane_t

0x5caf,	// (0x0005c39d) list_single_large_graphic_pane_g1_ParamLimits

0x5caf,	// (0x0005c39d) list_single_large_graphic_pane_g1

0x4320,	// (0x0005aa0e) list_single_large_graphic_pane_g2_ParamLimits

0x4320,	// (0x0005aa0e) list_single_large_graphic_pane_g2

0x432c,	// (0x0005aa1a) list_single_large_graphic_pane_g3_ParamLimits

0x432c,	// (0x0005aa1a) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00065cb3) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00065cb3) list_single_large_graphic_pane_g

0x96ec,	// (0x0005fdda) wait_border_pane_g2_copy1

0x5cbb,	// (0x0005c3a9) list_single_large_graphic_pane_g4_cp2

0x5cc3,	// (0x0005c3b1) list_single_large_graphic_pane_t1_ParamLimits

0x5cc3,	// (0x0005c3b1) list_single_large_graphic_pane_t1

0x2362,	// (0x00058a50) list_double_pane_g1_ParamLimits

0x2362,	// (0x00058a50) list_double_pane_g1

0x434d,	// (0x0005aa3b) list_double_pane_g2_ParamLimits

0x434d,	// (0x0005aa3b) list_double_pane_g2

0x0001,

0xf5cc,	// (0x00065cba) list_double_pane_g_ParamLimits

0xf5cc,	// (0x00065cba) list_double_pane_g

0x5cd9,	// (0x0005c3c7) list_double_pane_t1_ParamLimits

0x5cd9,	// (0x0005c3c7) list_double_pane_t1

0x5cef,	// (0x0005c3dd) list_double_pane_t2_ParamLimits

0x5cef,	// (0x0005c3dd) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00065cbf) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00065cbf) list_double_pane_t

0x5d01,	// (0x0005c3ef) list_double2_pane_g1_ParamLimits

0x5d01,	// (0x0005c3ef) list_double2_pane_g1

0x3b4a,	// (0x0005a238) list_double2_pane_g2_ParamLimits

0x3b4a,	// (0x0005a238) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00065cc4) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00065cc4) list_double2_pane_g

0x5d12,	// (0x0005c400) list_double2_pane_t1_ParamLimits

0x5d12,	// (0x0005c400) list_double2_pane_t1

0x5d28,	// (0x0005c416) list_double2_pane_t2_ParamLimits

0x5d28,	// (0x0005c416) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00065cc9) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00065cc9) list_double2_pane_t

0x2362,	// (0x00058a50) list_double_number_pane_g1_ParamLimits

0x2362,	// (0x00058a50) list_double_number_pane_g1

0x434d,	// (0x0005aa3b) list_double_number_pane_g2_ParamLimits

0x434d,	// (0x0005aa3b) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x00065cba) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x00065cba) list_double_number_pane_g

0x5d3a,	// (0x0005c428) list_double_number_pane_t1_ParamLimits

0x5d3a,	// (0x0005c428) list_double_number_pane_t1

0x5d4c,	// (0x0005c43a) list_double_number_pane_t2_ParamLimits

0x5d4c,	// (0x0005c43a) list_double_number_pane_t2

0x5d62,	// (0x0005c450) list_double_number_pane_t3_ParamLimits

0x5d62,	// (0x0005c450) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00065cce) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00065cce) list_double_number_pane_t

0x5d74,	// (0x0005c462) list_double_graphic_pane_g1_ParamLimits

0x5d74,	// (0x0005c462) list_double_graphic_pane_g1

0x5d80,	// (0x0005c46e) list_double_graphic_pane_g2_ParamLimits

0x5d80,	// (0x0005c46e) list_double_graphic_pane_g2

0x5d8f,	// (0x0005c47d) list_double_graphic_pane_g3_ParamLimits

0x5d8f,	// (0x0005c47d) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00065cd5) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00065cd5) list_double_graphic_pane_g

0x5d4c,	// (0x0005c43a) list_double_graphic_pane_t1_ParamLimits

0x5d4c,	// (0x0005c43a) list_double_graphic_pane_t1

0x5d62,	// (0x0005c450) list_double_graphic_pane_t2_ParamLimits

0x5d62,	// (0x0005c450) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00065cde) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00065cde) list_double_graphic_pane_t

0x5d74,	// (0x0005c462) list_double2_graphic_pane_g1_ParamLimits

0x5d74,	// (0x0005c462) list_double2_graphic_pane_g1

0x2362,	// (0x00058a50) list_double2_graphic_pane_g2_ParamLimits

0x2362,	// (0x00058a50) list_double2_graphic_pane_g2

0x434d,	// (0x0005aa3b) list_double2_graphic_pane_g3_ParamLimits

0x434d,	// (0x0005aa3b) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00065ce3) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00065ce3) list_double2_graphic_pane_g

0x5d4c,	// (0x0005c43a) list_double2_graphic_pane_t1_ParamLimits

0x5d4c,	// (0x0005c43a) list_double2_graphic_pane_t1

0x5da7,	// (0x0005c495) list_double2_graphic_pane_t2_ParamLimits

0x5da7,	// (0x0005c495) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00065cea) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00065cea) list_double2_graphic_pane_t

0x5db9,	// (0x0005c4a7) list_double_large_graphic_pane_g1_ParamLimits

0x5db9,	// (0x0005c4a7) list_double_large_graphic_pane_g1

0x5dd8,	// (0x0005c4c6) list_double_large_graphic_pane_g2_ParamLimits

0x5dd8,	// (0x0005c4c6) list_double_large_graphic_pane_g2

0x434d,	// (0x0005aa3b) list_double_large_graphic_pane_g3_ParamLimits

0x434d,	// (0x0005aa3b) list_double_large_graphic_pane_g3

0x5dee,	// (0x0005c4dc) list_double_large_graphic_pane_g4_ParamLimits

0x5dee,	// (0x0005c4dc) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00065cef) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00065cef) list_double_large_graphic_pane_g

0x5e00,	// (0x0005c4ee) list_double_large_graphic_pane_t1_ParamLimits

0x5e00,	// (0x0005c4ee) list_double_large_graphic_pane_t1

0x5e19,	// (0x0005c507) list_double_large_graphic_pane_t2_ParamLimits

0x5e19,	// (0x0005c507) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00065cfa) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00065cfa) list_double_large_graphic_pane_t

0x5e2b,	// (0x0005c519) list_double2_large_graphic_pane_g1_ParamLimits

0x5e2b,	// (0x0005c519) list_double2_large_graphic_pane_g1

0x5e37,	// (0x0005c525) list_double2_large_graphic_pane_g2_ParamLimits

0x5e37,	// (0x0005c525) list_double2_large_graphic_pane_g2

0x434d,	// (0x0005aa3b) list_double2_large_graphic_pane_g3_ParamLimits

0x434d,	// (0x0005aa3b) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00065cff) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00065cff) list_double2_large_graphic_pane_g

0x5d4c,	// (0x0005c43a) list_double2_large_graphic_pane_t1_ParamLimits

0x5d4c,	// (0x0005c43a) list_double2_large_graphic_pane_t1

0x5da7,	// (0x0005c495) list_double2_large_graphic_pane_t2_ParamLimits

0x5da7,	// (0x0005c495) list_double2_large_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00065cea) list_double2_large_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00065cea) list_double2_large_graphic_pane_t

0x5e48,	// (0x0005c536) list_double_heading_pane_g1_ParamLimits

0x5e48,	// (0x0005c536) list_double_heading_pane_g1

0x5e59,	// (0x0005c547) list_double_heading_pane_g2_ParamLimits

0x5e59,	// (0x0005c547) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00065d06) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00065d06) list_double_heading_pane_g

0x5e65,	// (0x0005c553) list_double_heading_pane_t1_ParamLimits

0x5e65,	// (0x0005c553) list_double_heading_pane_t1

0x5e7b,	// (0x0005c569) list_double_heading_pane_t2_ParamLimits

0x5e7b,	// (0x0005c569) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00065d0b) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00065d0b) list_double_heading_pane_t

0x5e8d,	// (0x0005c57b) list_double_graphic_heading_pane_g1_ParamLimits

0x5e8d,	// (0x0005c57b) list_double_graphic_heading_pane_g1

0x5e48,	// (0x0005c536) list_double_graphic_heading_pane_g2_ParamLimits

0x5e48,	// (0x0005c536) list_double_graphic_heading_pane_g2

0x5e59,	// (0x0005c547) list_double_graphic_heading_pane_g3_ParamLimits

0x5e59,	// (0x0005c547) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00065d10) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00065d10) list_double_graphic_heading_pane_g

0x5e65,	// (0x0005c553) list_double_graphic_heading_pane_t1_ParamLimits

0x5e65,	// (0x0005c553) list_double_graphic_heading_pane_t1

0x5e7b,	// (0x0005c569) list_double_graphic_heading_pane_t2_ParamLimits

0x5e7b,	// (0x0005c569) list_double_graphic_heading_pane_t2

0x0001,

0xf61d,	// (0x00065d0b) list_double_graphic_heading_pane_t_ParamLimits

0xf61d,	// (0x00065d0b) list_double_graphic_heading_pane_t

0x5e99,	// (0x0005c587) list_double_time_pane_g1_ParamLimits

0x5e99,	// (0x0005c587) list_double_time_pane_g1

0x5eaa,	// (0x0005c598) list_double_time_pane_g2_ParamLimits

0x5eaa,	// (0x0005c598) list_double_time_pane_g2

0x0001,

0xf629,	// (0x00065d17) list_double_time_pane_g_ParamLimits

0xf629,	// (0x00065d17) list_double_time_pane_g

0x5eb6,	// (0x0005c5a4) list_double_time_pane_t1_ParamLimits

0x5eb6,	// (0x0005c5a4) list_double_time_pane_t1

0x5ecc,	// (0x0005c5ba) list_double_time_pane_t2_ParamLimits

0x5ecc,	// (0x0005c5ba) list_double_time_pane_t2

0x5ede,	// (0x0005c5cc) list_double_time_pane_t3_ParamLimits

0x5ede,	// (0x0005c5cc) list_double_time_pane_t3

0x5ef0,	// (0x0005c5de) list_double_time_pane_t4_ParamLimits

0x5ef0,	// (0x0005c5de) list_double_time_pane_t4

0x0003,

0xf62e,	// (0x00065d1c) list_double_time_pane_t_ParamLimits

0xf62e,	// (0x00065d1c) list_double_time_pane_t

0x5f02,	// (0x0005c5f0) list_setting_pane_g1_ParamLimits

0x5f02,	// (0x0005c5f0) list_setting_pane_g1

0x5f0e,	// (0x0005c5fc) list_setting_pane_g2_ParamLimits

0x5f0e,	// (0x0005c5fc) list_setting_pane_g2

0x0001,

0xf637,	// (0x00065d25) list_setting_pane_g_ParamLimits

0xf637,	// (0x00065d25) list_setting_pane_g

0x5f1a,	// (0x0005c608) list_setting_pane_t1_ParamLimits

0x5f1a,	// (0x0005c608) list_setting_pane_t1

0x5f34,	// (0x0005c622) list_setting_pane_t2_ParamLimits

0x5f34,	// (0x0005c622) list_setting_pane_t2

0x0002,

0xf63c,	// (0x00065d2a) list_setting_pane_t_ParamLimits

0xf63c,	// (0x00065d2a) list_setting_pane_t

0x5f71,	// (0x0005c65f) set_value_pane_cp_ParamLimits

0x5f71,	// (0x0005c65f) set_value_pane_cp

0x5f7d,	// (0x0005c66b) list_setting_number_pane_g1_ParamLimits

0x5f7d,	// (0x0005c66b) list_setting_number_pane_g1

0x5f89,	// (0x0005c677) list_setting_number_pane_g2_ParamLimits

0x5f89,	// (0x0005c677) list_setting_number_pane_g2

0x0001,

0xf643,	// (0x00065d31) list_setting_number_pane_g_ParamLimits

0xf643,	// (0x00065d31) list_setting_number_pane_g

0x5f95,	// (0x0005c683) list_setting_number_pane_t1_ParamLimits

0x5f95,	// (0x0005c683) list_setting_number_pane_t1

0x5fae,	// (0x0005c69c) list_setting_number_pane_t2_ParamLimits

0x5fae,	// (0x0005c69c) list_setting_number_pane_t2

0x5fc8,	// (0x0005c6b6) list_setting_number_pane_t3_ParamLimits

0x5fc8,	// (0x0005c6b6) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x00065d36) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x00065d36) list_setting_number_pane_t

0x5f71,	// (0x0005c65f) set_value_pane_ParamLimits

0x5f71,	// (0x0005c65f) set_value_pane

0xf14a,	// (0x00065838) bg_set_opt_pane_ParamLimits

0xf14a,	// (0x00065838) bg_set_opt_pane

0x3b56,	// (0x0005a244) set_value_pane_t1

0xf16b,	// (0x00065859) slider_set_pane_cp3

0x600b,	// (0x0005c6f9) volume_small_pane_cp

0xf174,	// (0x00065862) list_form_gen_pane

0xf17d,	// (0x0006586b) scroll_pane_cp8

0x6014,	// (0x0005c702) form_field_data_pane_ParamLimits

0x6014,	// (0x0005c702) form_field_data_pane

0x602e,	// (0x0005c71c) form_field_data_wide_pane_ParamLimits

0x602e,	// (0x0005c71c) form_field_data_wide_pane

0x6051,	// (0x0005c73f) form_field_popup_pane_ParamLimits

0x6051,	// (0x0005c73f) form_field_popup_pane

0x6071,	// (0x0005c75f) form_field_popup_wide_pane_ParamLimits

0x6071,	// (0x0005c75f) form_field_popup_wide_pane

0x3b74,	// (0x0005a262) form_field_slider_pane_ParamLimits

0x3b74,	// (0x0005a262) form_field_slider_pane

0x608e,	// (0x0005c77c) form_field_slider_wide_pane_ParamLimits

0x608e,	// (0x0005c77c) form_field_slider_wide_pane

0xf18e,	// (0x0006587c) data_form_pane

0x60ab,	// (0x0005c799) form_field_data_pane_t1

0xf19a,	// (0x00065888) input_focus_pane

0x3b87,	// (0x0005a275) data_form_wide_pane

0x3ba4,	// (0x0005a292) form_field_data_wide_pane_t1

0xe4f7,	// (0x00064be5) input_focus_pane_cp6

0x60c3,	// (0x0005c7b1) form_field_popup_pane_t1

0xf19a,	// (0x00065888) input_focus_pane_cp7

0xf1c8,	// (0x000658b6) list_form_pane

0x3bce,	// (0x0005a2bc) form_field_popup_wide_pane_t1

0xf19a,	// (0x00065888) input_focus_pane_cp8

0xf1d4,	// (0x000658c2) list_form_wide_pane

0x60e3,	// (0x0005c7d1) form_field_slider_pane_t1_ParamLimits

0x60e3,	// (0x0005c7d1) form_field_slider_pane_t1

0x60f9,	// (0x0005c7e7) form_field_slider_pane_t2_ParamLimits

0x60f9,	// (0x0005c7e7) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x00065d46) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x00065d46) form_field_slider_pane_t

0xe369,	// (0x00064a57) input_focus_pane_cp9_ParamLimits

0xe369,	// (0x00064a57) input_focus_pane_cp9

0x610e,	// (0x0005c7fc) slider_cont_pane_ParamLimits

0x610e,	// (0x0005c7fc) slider_cont_pane

0xf1e0,	// (0x000658ce) form_field_slider_wide_pane_t1_ParamLimits

0xf1e0,	// (0x000658ce) form_field_slider_wide_pane_t1

0x3be3,	// (0x0005a2d1) form_field_slider_wide_pane_t2_ParamLimits

0x3be3,	// (0x0005a2d1) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x00065d4b) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x00065d4b) form_field_slider_wide_pane_t

0xe369,	// (0x00064a57) input_focus_pane_cp10_ParamLimits

0xe369,	// (0x00064a57) input_focus_pane_cp10

0x6122,	// (0x0005c810) slider_cont_pane_cp1_ParamLimits

0x6122,	// (0x0005c810) slider_cont_pane_cp1

0x6136,	// (0x0005c824) slider_form_pane_cp

0xf1f2,	// (0x000658e0) input_focus_pane_g1

0xf1fa,	// (0x000658e8) input_focus_pane_g2

0xf202,	// (0x000658f0) input_focus_pane_g3

0xf20a,	// (0x000658f8) input_focus_pane_g4

0xf212,	// (0x00065900) input_focus_pane_g5

0xf21a,	// (0x00065908) input_focus_pane_g6

0xf222,	// (0x00065910) input_focus_pane_g7

0xf22a,	// (0x00065918) input_focus_pane_g8

0xf232,	// (0x00065920) input_focus_pane_g9

0xe1e7,	// (0x000648d5) input_focus_pane_g10

0x0009,

0xf662,	// (0x00065d50) input_focus_pane_g

0x96f5,	// (0x0005fde3) wait_border_pane_g3_copy1

0x613e,	// (0x0005c82c) data_form_pane_t1

0xe1e7,	// (0x000648d5) wait_anim_pane_g1_copy1

0x7a85,	// (0x0005e173) data_form_wide_pane_t1

0x6159,	// (0x0005c847) list_form_graphic_pane_cp_ParamLimits

0x6159,	// (0x0005c847) list_form_graphic_pane_cp

0xa5e4,	// (0x00060cd2) slider_form_pane_g1

0xa5ed,	// (0x00060cdb) slider_form_pane_g2

0x0006,

0xf965,	// (0x00066053) slider_form_pane_g

0x6159,	// (0x0005c847) list_form_graphic_pane_ParamLimits

0x6159,	// (0x0005c847) list_form_graphic_pane

0x6172,	// (0x0005c860) list_form_graphic_pane_g1

0x617a,	// (0x0005c868) list_form_graphic_pane_t1_ParamLimits

0x617a,	// (0x0005c868) list_form_graphic_pane_t1

0xe23f,	// (0x0006492d) list_highlight_pane_cp5_ParamLimits

0xe23f,	// (0x0006492d) list_highlight_pane_cp5

0x618f,	// (0x0005c87d) find_pane_g1

0xf23a,	// (0x00065928) input_find_pane

0x6198,	// (0x0005c886) input_find_pane_g1_ParamLimits

0x6198,	// (0x0005c886) input_find_pane_g1

0x61a4,	// (0x0005c892) input_find_pane_t1_ParamLimits

0x61a4,	// (0x0005c892) input_find_pane_t1

0x61b9,	// (0x0005c8a7) input_find_pane_t2_ParamLimits

0x61b9,	// (0x0005c8a7) input_find_pane_t2

0x0001,

0xf677,	// (0x00065d65) input_find_pane_t_ParamLimits

0xf677,	// (0x00065d65) input_find_pane_t

0xf243,	// (0x00065931) input_focus_pane_cp5_ParamLimits

0xf243,	// (0x00065931) input_focus_pane_cp5

0xf256,	// (0x00065944) bg_popup_window_pane_cp2_ParamLimits

0xf256,	// (0x00065944) bg_popup_window_pane_cp2

0xf263,	// (0x00065951) listscroll_menu_pane_ParamLimits

0xf263,	// (0x00065951) listscroll_menu_pane

0x61da,	// (0x0005c8c8) popup_submenu_window_ParamLimits

0x61da,	// (0x0005c8c8) popup_submenu_window

0xf26f,	// (0x0006595d) find_popup_pane_g1

0x6202,	// (0x0005c8f0) input_popup_find_pane_cp

0xf277,	// (0x00065965) input_focus_pane_cp4_ParamLimits

0xf277,	// (0x00065965) input_focus_pane_cp4

0xf285,	// (0x00065973) input_popup_find_pane_t1_ParamLimits

0xf285,	// (0x00065973) input_popup_find_pane_t1

0xe1f1,	// (0x000648df) bg_popup_sub_pane_cp

0xf2b3,	// (0x000659a1) listscroll_popup_sub_pane

0xf2bb,	// (0x000659a9) list_submenu_pane_ParamLimits

0xf2bb,	// (0x000659a9) list_submenu_pane

0xf2cc,	// (0x000659ba) scroll_pane_cp4

0x621a,	// (0x0005c908) list_single_popup_submenu_pane_ParamLimits

0x621a,	// (0x0005c908) list_single_popup_submenu_pane

0x2194,	// (0x00058882) list_single_popup_submenu_pane_g1

0x622e,	// (0x0005c91c) list_single_popup_submenu_pane_t1_ParamLimits

0x622e,	// (0x0005c91c) list_single_popup_submenu_pane_t1

0xe23f,	// (0x0006492d) bg_active_tab_pane_cp1_ParamLimits

0xe23f,	// (0x0006492d) bg_active_tab_pane_cp1

0xf2d4,	// (0x000659c2) tabs_2_active_pane_g1

0x6243,	// (0x0005c931) tabs_2_active_pane_t1

0xe23f,	// (0x0006492d) bg_passive_tab_pane_cp1_ParamLimits

0xe23f,	// (0x0006492d) bg_passive_tab_pane_cp1

0xf2d4,	// (0x000659c2) tabs_2_passive_pane_g1

0x6243,	// (0x0005c931) tabs_2_passive_pane_t1

0x6255,	// (0x0005c943) bg_active_tab_pane_cp4

0x6263,	// (0x0005c951) tabs_2_long_active_pane_t1

0x6276,	// (0x0005c964) bg_passive_tab_pane_cp4

0x772c,	// (0x0005de1a) list_single_midp_graphic_pane_g4_ParamLimits

0x6255,	// (0x0005c943) bg_active_tab_pane_cp5

0x6282,	// (0x0005c970) tabs_3_long_active_pane_t1

0x6276,	// (0x0005c964) bg_passive_tab_pane_cp5

0x772c,	// (0x0005de1a) list_single_midp_graphic_pane_g4

0xe23f,	// (0x0006492d) bg_popup_window_pane_cp13_ParamLimits

0xe23f,	// (0x0006492d) bg_popup_window_pane_cp13

0xf2dc,	// (0x000659ca) listscroll_popup_fast_pane_ParamLimits

0xf2dc,	// (0x000659ca) listscroll_popup_fast_pane

0xf2e8,	// (0x000659d6) grid_popup_fast_pane_ParamLimits

0xf2e8,	// (0x000659d6) grid_popup_fast_pane

0xf2fa,	// (0x000659e8) scroll_pane_cp9_ParamLimits

0xf2fa,	// (0x000659e8) scroll_pane_cp9

0xc0f4,	// (0x000627e2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc0f4,	// (0x000627e2) list_single_graphic_hl_pane_t1_cp2

0xf30d,	// (0x000659fb) input_focus_pane_cp20_ParamLimits

0xf30d,	// (0x000659fb) input_focus_pane_cp20

0xf31b,	// (0x00065a09) query_popup_data_pane_t1_ParamLimits

0xf31b,	// (0x00065a09) query_popup_data_pane_t1

0xf32e,	// (0x00065a1c) query_popup_data_pane_t2_ParamLimits

0xf32e,	// (0x00065a1c) query_popup_data_pane_t2

0xf374,	// (0x00065a62) query_popup_data_pane_t3_ParamLimits

0xf374,	// (0x00065a62) query_popup_data_pane_t3

0xf3b5,	// (0x00065aa3) query_popup_data_pane_t4_ParamLimits

0xf3b5,	// (0x00065aa3) query_popup_data_pane_t4

0xf3f1,	// (0x00065adf) query_popup_data_pane_t5_ParamLimits

0xf3f1,	// (0x00065adf) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x00065d6a) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x00065d6a) query_popup_data_pane_t

0xf1f2,	// (0x000658e0) bg_set_opt_pane_g1

0xf1fa,	// (0x000658e8) bg_set_opt_pane_g2

0xf202,	// (0x000658f0) bg_set_opt_pane_g3

0xf20a,	// (0x000658f8) bg_set_opt_pane_g4

0xf212,	// (0x00065900) bg_set_opt_pane_g5

0xf21a,	// (0x00065908) bg_set_opt_pane_g6

0xf222,	// (0x00065910) bg_set_opt_pane_g7

0xf22a,	// (0x00065918) bg_set_opt_pane_g8

0xf232,	// (0x00065920) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x00065d75) bg_set_opt_pane_g

0x680d,	// (0x0005cefb) control_top_pane_stacon_ParamLimits

0x680d,	// (0x0005cefb) control_top_pane_stacon

0x6860,	// (0x0005cf4e) signal_pane_stacon_ParamLimits

0x6860,	// (0x0005cf4e) signal_pane_stacon

0x14f9,	// (0x00057be7) stacon_top_pane_g1_ParamLimits

0x14f9,	// (0x00057be7) stacon_top_pane_g1

0x6885,	// (0x0005cf73) title_pane_stacon_ParamLimits

0x6885,	// (0x0005cf73) title_pane_stacon

0x68af,	// (0x0005cf9d) uni_indicator_pane_stacon_ParamLimits

0x68af,	// (0x0005cf9d) uni_indicator_pane_stacon

0x68c4,	// (0x0005cfb2) battery_pane_stacon_ParamLimits

0x68c4,	// (0x0005cfb2) battery_pane_stacon

0x6908,	// (0x0005cff6) control_bottom_pane_stacon_ParamLimits

0x6908,	// (0x0005cff6) control_bottom_pane_stacon

0x692b,	// (0x0005d019) navi_pane_stacon_ParamLimits

0x692b,	// (0x0005d019) navi_pane_stacon

0x151b,	// (0x00057c09) stacon_bottom_pane_g1_ParamLimits

0x151b,	// (0x00057c09) stacon_bottom_pane_g1

0x62ae,	// (0x0005c99c) aid_levels_signal_lsc_ParamLimits

0x62ae,	// (0x0005c99c) aid_levels_signal_lsc

0x62c4,	// (0x0005c9b2) signal_pane_stacon_g1_ParamLimits

0x62c4,	// (0x0005c9b2) signal_pane_stacon_g1

0x62d8,	// (0x0005c9c6) signal_pane_stacon_g2_ParamLimits

0x62d8,	// (0x0005c9c6) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x00065d88) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x00065d88) signal_pane_stacon_g

0x630d,	// (0x0005c9fb) title_pane_stacon_t1_ParamLimits

0x630d,	// (0x0005c9fb) title_pane_stacon_t1

0xf435,	// (0x00065b23) uni_indicator_pane_stacon_g1

0xf43f,	// (0x00065b2d) uni_indicator_pane_stacon_g2

0xf449,	// (0x00065b37) uni_indicator_pane_stacon_g3

0xf453,	// (0x00065b41) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x00065d94) uni_indicator_pane_stacon_g

0x6332,	// (0x0005ca20) control_top_pane_stacon_g1

0x633a,	// (0x0005ca28) control_top_pane_stacon_t1_ParamLimits

0x633a,	// (0x0005ca28) control_top_pane_stacon_t1

0x6371,	// (0x0005ca5f) aid_levels_battery_lsc_ParamLimits

0x6371,	// (0x0005ca5f) aid_levels_battery_lsc

0x6388,	// (0x0005ca76) battery_pane_stacon_g1_ParamLimits

0x6388,	// (0x0005ca76) battery_pane_stacon_g1

0x639b,	// (0x0005ca89) battery_pane_stacon_g2_ParamLimits

0x639b,	// (0x0005ca89) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x00065d9d) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x00065d9d) battery_pane_stacon_g

0x63d9,	// (0x0005cac7) navi_icon_pane_stacon

0x63ed,	// (0x0005cadb) navi_navi_pane_stacon

0x63d9,	// (0x0005cac7) navi_text_pane_stacon

0x6332,	// (0x0005ca20) control_bottom_pane_stacon_g1

0x6401,	// (0x0005caef) control_bottom_pane_stacon_t1_ParamLimits

0x6401,	// (0x0005caef) control_bottom_pane_stacon_t1

0x6438,	// (0x0005cb26) grid_app_pane_ParamLimits

0x6438,	// (0x0005cb26) grid_app_pane

0x645a,	// (0x0005cb48) scroll_pane_cp15_ParamLimits

0x645a,	// (0x0005cb48) scroll_pane_cp15

0x646d,	// (0x0005cb5b) cell_app_pane_ParamLimits

0x646d,	// (0x0005cb5b) cell_app_pane

0x6495,	// (0x0005cb83) cell_app_pane_g1_ParamLimits

0x6495,	// (0x0005cb83) cell_app_pane_g1

0xf477,	// (0x00065b65) cell_app_pane_g2_ParamLimits

0xf477,	// (0x00065b65) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00065da2) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00065da2) cell_app_pane_g

0x64b9,	// (0x0005cba7) cell_app_pane_t1_ParamLimits

0x64b9,	// (0x0005cba7) cell_app_pane_t1

0xf483,	// (0x00065b71) grid_highlight_pane_ParamLimits

0xf483,	// (0x00065b71) grid_highlight_pane

0xf1f2,	// (0x000658e0) cell_highlight_pane_g1

0xf1fa,	// (0x000658e8) cell_highlight_pane_g2

0xf202,	// (0x000658f0) cell_highlight_pane_g3

0xf20a,	// (0x000658f8) cell_highlight_pane_g4

0xf212,	// (0x00065900) cell_highlight_pane_g5

0xf21a,	// (0x00065908) cell_highlight_pane_g6

0xf222,	// (0x00065910) cell_highlight_pane_g7

0xf22a,	// (0x00065918) cell_highlight_pane_g8

0xf232,	// (0x00065920) cell_highlight_pane_g9

0xe1e7,	// (0x000648d5) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00065d50) cell_highlight_pane_g

0xf494,	// (0x00065b82) bg_scroll_pane

0x64e3,	// (0x0005cbd1) scroll_handle_pane

0xf4db,	// (0x00065bc9) scroll_bg_pane_g1

0xf4f0,	// (0x00065bde) scroll_bg_pane_g2

0xf508,	// (0x00065bf6) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x00065da7) scroll_bg_pane_g

0x650c,	// (0x0005cbfa) scroll_handle_focus_pane_ParamLimits

0x650c,	// (0x0005cbfa) scroll_handle_focus_pane

0xf4db,	// (0x00065bc9) scroll_handle_pane_g1

0x1299,	// (0x00057987) scroll_handle_pane_g2

0xf508,	// (0x00065bf6) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x00065dae) scroll_handle_pane_g

0xf277,	// (0x00065965) bg_popup_sub_pane_cp21_ParamLimits

0xf277,	// (0x00065965) bg_popup_sub_pane_cp21

0x6519,	// (0x0005cc07) popup_fep_japan_predictive_window_t1_ParamLimits

0x6519,	// (0x0005cc07) popup_fep_japan_predictive_window_t1

0x6533,	// (0x0005cc21) popup_fep_japan_predictive_window_t2_ParamLimits

0x6533,	// (0x0005cc21) popup_fep_japan_predictive_window_t2

0x6566,	// (0x0005cc54) popup_fep_japan_predictive_window_t3_ParamLimits

0x6566,	// (0x0005cc54) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x00065db5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x00065db5) popup_fep_japan_predictive_window_t

0xe1f1,	// (0x000648df) bg_popup_sub_pane_cp23

0x2ae7,	// (0x000591d5) listscroll_japin_cand_pane

0x12ad,	// (0x0005799b) popup_fep_japan_candidate_window_t1

0x12bb,	// (0x000579a9) candidate_pane_ParamLimits

0x12bb,	// (0x000579a9) candidate_pane

0x659d,	// (0x0005cc8b) scroll_pane_cp30

0x12cd,	// (0x000579bb) list_single_popup_jap_candidate_pane_ParamLimits

0x12cd,	// (0x000579bb) list_single_popup_jap_candidate_pane

0xe1f1,	// (0x000648df) list_highlight_pane_cp30

0x12e2,	// (0x000579d0) list_single_popup_jap_candidate_pane_t1

0x12f1,	// (0x000579df) level_1_signal

0x12fe,	// (0x000579ec) level_2_signal

0x130b,	// (0x000579f9) level_3_signal

0x1318,	// (0x00057a06) level_4_signal

0x1325,	// (0x00057a13) level_5_signal

0x1332,	// (0x00057a20) level_6_signal

0x133f,	// (0x00057a2d) level_7_signal

0x12f1,	// (0x000579df) level_1_battery

0x12fe,	// (0x000579ec) level_2_battery

0x130b,	// (0x000579f9) level_3_battery

0x1318,	// (0x00057a06) level_4_battery

0x1325,	// (0x00057a13) level_5_battery

0x1332,	// (0x00057a20) level_6_battery

0x133f,	// (0x00057a2d) level_7_battery

0x1364,	// (0x00057a52) list_menu_pane_ParamLimits

0x1364,	// (0x00057a52) list_menu_pane

0x137a,	// (0x00057a68) scroll_pane_cp25_ParamLimits

0x137a,	// (0x00057a68) scroll_pane_cp25

0x1393,	// (0x00057a81) list_double2_graphic_pane_cp2_ParamLimits

0x1393,	// (0x00057a81) list_double2_graphic_pane_cp2

0x1393,	// (0x00057a81) list_double2_large_graphic_pane_cp2_ParamLimits

0x1393,	// (0x00057a81) list_double2_large_graphic_pane_cp2

0x1393,	// (0x00057a81) list_double2_pane_cp2_ParamLimits

0x1393,	// (0x00057a81) list_double2_pane_cp2

0x1393,	// (0x00057a81) list_double_graphic_pane_cp2_ParamLimits

0x1393,	// (0x00057a81) list_double_graphic_pane_cp2

0x1393,	// (0x00057a81) list_double_large_graphic_pane_cp2_ParamLimits

0x1393,	// (0x00057a81) list_double_large_graphic_pane_cp2

0x1393,	// (0x00057a81) list_double_number_pane_cp2_ParamLimits

0x1393,	// (0x00057a81) list_double_number_pane_cp2

0x1393,	// (0x00057a81) list_double_pane_cp2_ParamLimits

0x1393,	// (0x00057a81) list_double_pane_cp2

0x65d8,	// (0x0005ccc6) list_single_2graphic_pane_cp2_ParamLimits

0x65d8,	// (0x0005ccc6) list_single_2graphic_pane_cp2

0x65d8,	// (0x0005ccc6) list_single_graphic_heading_pane_cp2_ParamLimits

0x65d8,	// (0x0005ccc6) list_single_graphic_heading_pane_cp2

0x65d8,	// (0x0005ccc6) list_single_graphic_pane_cp2_ParamLimits

0x65d8,	// (0x0005ccc6) list_single_graphic_pane_cp2

0x65d8,	// (0x0005ccc6) list_single_heading_pane_cp2_ParamLimits

0x65d8,	// (0x0005ccc6) list_single_heading_pane_cp2

0x13a3,	// (0x00057a91) list_single_large_graphic_pane_cp2_ParamLimits

0x13a3,	// (0x00057a91) list_single_large_graphic_pane_cp2

0x65d8,	// (0x0005ccc6) list_single_number_heading_pane_cp2_ParamLimits

0x65d8,	// (0x0005ccc6) list_single_number_heading_pane_cp2

0x65d8,	// (0x0005ccc6) list_single_number_pane_cp2_ParamLimits

0x65d8,	// (0x0005ccc6) list_single_number_pane_cp2

0x65ee,	// (0x0005ccdc) list_single_pane_cp2_ParamLimits

0x65ee,	// (0x0005ccdc) list_single_pane_cp2

0x13bd,	// (0x00057aab) bg_popup_sub_pane_cp22

0x66c6,	// (0x0005cdb4) popup_side_volume_key_window_g1

0x66ea,	// (0x0005cdd8) popup_side_volume_key_window_t1

0x6706,	// (0x0005cdf4) volume_small_pane_cp1

0xe369,	// (0x00064a57) bg_popup_sub_pane_cp24_ParamLimits

0xe369,	// (0x00064a57) bg_popup_sub_pane_cp24

0x13d3,	// (0x00057ac1) fep_china_uni_candidate_pane_ParamLimits

0x13d3,	// (0x00057ac1) fep_china_uni_candidate_pane

0x13e7,	// (0x00057ad5) fep_china_uni_entry_pane

0x13f7,	// (0x00057ae5) popup_fep_china_uni_window_g1

0x670e,	// (0x0005cdfc) fep_china_uni_entry_pane_g1

0x6716,	// (0x0005ce04) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x00065de6) fep_china_uni_entry_pane_g

0x1413,	// (0x00057b01) fep_entry_item_pane

0x141d,	// (0x00057b0b) fep_candidate_item_pane

0x671e,	// (0x0005ce0c) fep_china_uni_candidate_pane_g1

0x1425,	// (0x00057b13) fep_china_uni_candidate_pane_g2

0x142d,	// (0x00057b1b) fep_china_uni_candidate_pane_g3

0x6726,	// (0x0005ce14) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x00065deb) fep_china_uni_candidate_pane_g

0xe1e7,	// (0x000648d5) fep_entry_item_pane_g1

0x1435,	// (0x00057b23) fep_entry_item_pane_t1_ParamLimits

0x1435,	// (0x00057b23) fep_entry_item_pane_t1

0x144b,	// (0x00057b39) fep_candidate_item_pane_t1_ParamLimits

0x144b,	// (0x00057b39) fep_candidate_item_pane_t1

0x1460,	// (0x00057b4e) fep_candidate_item_pane_t2_ParamLimits

0x1460,	// (0x00057b4e) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x00065df4) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x00065df4) fep_candidate_item_pane_t

0xe23f,	// (0x0006492d) list_highlight_pane_cp31_ParamLimits

0xe23f,	// (0x0006492d) list_highlight_pane_cp31

0x1472,	// (0x00057b60) level_1_signal_lsc

0x147b,	// (0x00057b69) level_2_signal_lsc

0x1484,	// (0x00057b72) level_3_signal_lsc

0x148d,	// (0x00057b7b) level_4_signal_lsc

0x1496,	// (0x00057b84) level_5_signal_lsc

0x149f,	// (0x00057b8d) level_6_signal_lsc

0x14a8,	// (0x00057b96) level_7_signal_lsc

0x14a8,	// (0x00057b96) level_1_battery_lsc

0x14b1,	// (0x00057b9f) level_2_battery_lsc

0x14ba,	// (0x00057ba8) level_3_battery_lsc

0x14c3,	// (0x00057bb1) level_4_battery_lsc

0x14cc,	// (0x00057bba) level_5_battery_lsc

0x14d5,	// (0x00057bc3) level_6_battery_lsc

0x1472,	// (0x00057b60) level_7_battery_lsc

0x14de,	// (0x00057bcc) scroll_handle_focus_pane_g1

0x14e7,	// (0x00057bd5) scroll_handle_focus_pane_g2

0x14f0,	// (0x00057bde) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x00065df9) scroll_handle_focus_pane_g

0x672e,	// (0x0005ce1c) list_single_2graphic_pane_g1_ParamLimits

0x672e,	// (0x0005ce1c) list_single_2graphic_pane_g1

0x5c86,	// (0x0005c374) list_single_2graphic_pane_g2_ParamLimits

0x5c86,	// (0x0005c374) list_single_2graphic_pane_g2

0x5bdb,	// (0x0005c2c9) list_single_2graphic_pane_g3_ParamLimits

0x5bdb,	// (0x0005c2c9) list_single_2graphic_pane_g3

0x673a,	// (0x0005ce28) list_single_2graphic_pane_g4_ParamLimits

0x673a,	// (0x0005ce28) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x00065e00) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x00065e00) list_single_2graphic_pane_g

0x6746,	// (0x0005ce34) list_single_2graphic_pane_t1_ParamLimits

0x6746,	// (0x0005ce34) list_single_2graphic_pane_t1

0x6774,	// (0x0005ce62) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6774,	// (0x0005ce62) list_double2_graphic_large_graphic_pane_g1

0x5e37,	// (0x0005c525) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5e37,	// (0x0005c525) list_double2_graphic_large_graphic_pane_g2

0x434d,	// (0x0005aa3b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x434d,	// (0x0005aa3b) list_double2_graphic_large_graphic_pane_g3

0x6784,	// (0x0005ce72) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6784,	// (0x0005ce72) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x00065e09) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x00065e09) list_double2_graphic_large_graphic_pane_g

0x6790,	// (0x0005ce7e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6790,	// (0x0005ce7e) list_double2_graphic_large_graphic_pane_t1

0x67a6,	// (0x0005ce94) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x67a6,	// (0x0005ce94) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00065e12) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00065e12) list_double2_graphic_large_graphic_pane_t

0x698a,	// (0x0005d078) popup_fast_swap_window_ParamLimits

0x698a,	// (0x0005d078) popup_fast_swap_window

0x69a6,	// (0x0005d094) popup_side_volume_key_window

0x15a6,	// (0x00057c94) stacon_top_pane

0x15b0,	// (0x00057c9e) status_pane_ParamLimits

0x15b0,	// (0x00057c9e) status_pane

0x69c0,	// (0x0005d0ae) status_small_pane

0xe1f1,	// (0x000648df) control_pane

0xe1f1,	// (0x000648df) stacon_bottom_pane

0xf17d,	// (0x0006586b) scroll_pane_cp121

0xf174,	// (0x00065862) set_content_pane

0x67b8,	// (0x0005cea6) bg_active_tab_pane_g1_cp1

0x67c1,	// (0x0005ceaf) bg_active_tab_pane_g2_cp1

0x67ca,	// (0x0005ceb8) bg_active_tab_pane_g3_cp1

0x67b8,	// (0x0005cea6) bg_passive_tab_pane_g1_cp1

0x67c1,	// (0x0005ceaf) bg_passive_tab_pane_g2_cp1

0x67ca,	// (0x0005ceb8) bg_passive_tab_pane_g3_cp1

0x67d3,	// (0x0005cec1) bg_active_tab_pane_g1_cp2

0x67c1,	// (0x0005ceaf) bg_active_tab_pane_g2_cp2

0x67dc,	// (0x0005ceca) bg_active_tab_pane_g3_cp2

0x67d3,	// (0x0005cec1) bg_passive_tab_pane_g1_cp2

0x67c1,	// (0x0005ceaf) bg_passive_tab_pane_g2_cp2

0x67dc,	// (0x0005ceca) bg_passive_tab_pane_g3_cp2

0x67e5,	// (0x0005ced3) bg_active_tab_pane_g1_cp3

0x67c1,	// (0x0005ceaf) bg_active_tab_pane_g2_cp3

0x67ee,	// (0x0005cedc) bg_active_tab_pane_g3_cp3

0x67e5,	// (0x0005ced3) bg_passive_tab_pane_g1_cp3

0x67c1,	// (0x0005ceaf) bg_passive_tab_pane_g2_cp3

0x67ee,	// (0x0005cedc) bg_passive_tab_pane_g3_cp3

0x67f7,	// (0x0005cee5) bg_active_tab_pane_g1_cp4

0x67c1,	// (0x0005ceaf) bg_active_tab_pane_g2_cp4

0x6802,	// (0x0005cef0) bg_active_tab_pane_g3_cp4

0x67f7,	// (0x0005cee5) bg_passive_tab_pane_g1_cp4

0x67c1,	// (0x0005ceaf) bg_passive_tab_pane_g2_cp4

0x6802,	// (0x0005cef0) bg_passive_tab_pane_g3_cp4

0x694e,	// (0x0005d03c) bg_active_tab_pane_g1_cp5

0x67c1,	// (0x0005ceaf) bg_active_tab_pane_g2_cp5

0x6957,	// (0x0005d045) bg_active_tab_pane_g3_cp5

0x694e,	// (0x0005d03c) bg_passive_tab_pane_g1_cp5

0x67c1,	// (0x0005ceaf) bg_passive_tab_pane_g2_cp5

0x6957,	// (0x0005d045) bg_passive_tab_pane_g3_cp5

0x6960,	// (0x0005d04e) list_set_graphic_pane_ParamLimits

0x6960,	// (0x0005d04e) list_set_graphic_pane

0xe1f1,	// (0x000648df) bg_set_opt_pane_cp4

0x1537,	// (0x00057c25) list_set_graphic_pane_g1_ParamLimits

0x1537,	// (0x00057c25) list_set_graphic_pane_g1

0x1543,	// (0x00057c31) list_set_graphic_pane_g2_ParamLimits

0x1543,	// (0x00057c31) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x00065e17) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x00065e17) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x000661af) volume_small_pane_cp_g

0x697e,	// (0x0005d06c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x697e,	// (0x0005d06c) list_double2_large_graphic_pane_g1_cp2

0x1565,	// (0x00057c53) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1565,	// (0x00057c53) list_double2_large_graphic_pane_g2_cp2

0x1576,	// (0x00057c64) list_double2_large_graphic_pane_g3_cp2

0x157e,	// (0x00057c6c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x157e,	// (0x00057c6c) list_double2_large_graphic_pane_t1_cp2

0x1594,	// (0x00057c82) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1594,	// (0x00057c82) list_double2_large_graphic_pane_t2_cp2

0xa1a6,	// (0x00060894) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa1a6,	// (0x00060894) list_double_large_graphic_pane_g1_cp2

0xa1b7,	// (0x000608a5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa1b7,	// (0x000608a5) list_double_large_graphic_pane_g2_cp2

0x16cc,	// (0x00057dba) list_double_large_graphic_pane_g3_cp2

0xa1c8,	// (0x000608b6) list_double_large_graphic_pane_g4_cp

0xa1d0,	// (0x000608be) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa1d0,	// (0x000608be) list_double_large_graphic_pane_t1_cp2

0xa1e7,	// (0x000608d5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa1e7,	// (0x000608d5) list_double_large_graphic_pane_t2_cp2

0x15be,	// (0x00057cac) list_double2_graphic_pane_g1_cp2_ParamLimits

0x15be,	// (0x00057cac) list_double2_graphic_pane_g1_cp2

0x15cc,	// (0x00057cba) list_double2_graphic_pane_g2_cp2_ParamLimits

0x15cc,	// (0x00057cba) list_double2_graphic_pane_g2_cp2

0x15dd,	// (0x00057ccb) list_double2_graphic_pane_g3_cp2

0x15e7,	// (0x00057cd5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x15e7,	// (0x00057cd5) list_double2_graphic_pane_t1_cp2

0x15fd,	// (0x00057ceb) list_double2_graphic_pane_t2_cp2_ParamLimits

0x15fd,	// (0x00057ceb) list_double2_graphic_pane_t2_cp2

0x160f,	// (0x00057cfd) list_single_number_heading_pane_g1_cp2_ParamLimits

0x160f,	// (0x00057cfd) list_single_number_heading_pane_g1_cp2

0x161b,	// (0x00057d09) list_single_number_heading_pane_g2_cp2

0x1623,	// (0x00057d11) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1623,	// (0x00057d11) list_single_number_heading_pane_t1_cp2

0x1639,	// (0x00057d27) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1639,	// (0x00057d27) list_single_number_heading_pane_t2_cp2

0x164b,	// (0x00057d39) list_single_number_heading_pane_t3_cp2_ParamLimits

0x164b,	// (0x00057d39) list_single_number_heading_pane_t3_cp2

0x160f,	// (0x00057cfd) list_single_heading_pane_g1_cp2_ParamLimits

0x160f,	// (0x00057cfd) list_single_heading_pane_g1_cp2

0x161b,	// (0x00057d09) list_single_heading_pane_g2_cp2

0x1623,	// (0x00057d11) list_single_heading_pane_t1_cp2_ParamLimits

0x1623,	// (0x00057d11) list_single_heading_pane_t1_cp2

0x9fb0,	// (0x0006069e) list_single_heading_pane_t2_cp2_ParamLimits

0x9fb0,	// (0x0006069e) list_single_heading_pane_t2_cp2

0x9ef8,	// (0x000605e6) list_double_graphic_pane_g1_cp2_ParamLimits

0x9ef8,	// (0x000605e6) list_double_graphic_pane_g1_cp2

0x9f04,	// (0x000605f2) list_double_graphic_pane_g2_cp2_ParamLimits

0x9f04,	// (0x000605f2) list_double_graphic_pane_g2_cp2

0x9f13,	// (0x00060601) list_double_graphic_pane_g3_cp2

0x9f1b,	// (0x00060609) list_double_graphic_pane_t1_cp2_ParamLimits

0x9f1b,	// (0x00060609) list_double_graphic_pane_t1_cp2

0x9f31,	// (0x0006061f) list_double_graphic_pane_t2_cp2_ParamLimits

0x9f31,	// (0x0006061f) list_double_graphic_pane_t2_cp2

0x16c0,	// (0x00057dae) list_double_number_pane_g1_cp2_ParamLimits

0x16c0,	// (0x00057dae) list_double_number_pane_g1_cp2

0x16cc,	// (0x00057dba) list_double_number_pane_g2_cp2

0x9ebc,	// (0x000605aa) list_double_number_pane_t1_cp2_ParamLimits

0x9ebc,	// (0x000605aa) list_double_number_pane_t1_cp2

0x9ed0,	// (0x000605be) list_double_number_pane_t2_cp2_ParamLimits

0x9ed0,	// (0x000605be) list_double_number_pane_t2_cp2

0x9ee6,	// (0x000605d4) list_double_number_pane_t3_cp2_ParamLimits

0x9ee6,	// (0x000605d4) list_double_number_pane_t3_cp2

0x9da5,	// (0x00060493) list_single_graphic_pane_g1_cp2_ParamLimits

0x9da5,	// (0x00060493) list_single_graphic_pane_g1_cp2

0x128d,	// (0x0005797b) list_single_graphic_pane_g2_cp2_ParamLimits

0x128d,	// (0x0005797b) list_single_graphic_pane_g2_cp2

0x1725,	// (0x00057e13) list_single_graphic_pane_g3_cp2

0x9d7b,	// (0x00060469) list_single_graphic_pane_t1_cp2_ParamLimits

0x9d7b,	// (0x00060469) list_single_graphic_pane_t1_cp2

0x128d,	// (0x0005797b) list_single_number_pane_g1_cp2_ParamLimits

0x128d,	// (0x0005797b) list_single_number_pane_g1_cp2

0x1725,	// (0x00057e13) list_single_number_pane_g2_cp2

0x9d7b,	// (0x00060469) list_single_number_pane_t1_cp2_ParamLimits

0x9d7b,	// (0x00060469) list_single_number_pane_t1_cp2

0x9d91,	// (0x0006047f) list_single_number_pane_t2_cp2_ParamLimits

0x9d91,	// (0x0006047f) list_single_number_pane_t2_cp2

0x1565,	// (0x00057c53) list_double2_pane_g1_cp2_ParamLimits

0x1565,	// (0x00057c53) list_double2_pane_g1_cp2

0x1576,	// (0x00057c64) list_double2_pane_g2_cp2

0x1698,	// (0x00057d86) list_double2_pane_t1_cp2_ParamLimits

0x1698,	// (0x00057d86) list_double2_pane_t1_cp2

0x16ae,	// (0x00057d9c) list_double2_pane_t2_cp2_ParamLimits

0x16ae,	// (0x00057d9c) list_double2_pane_t2_cp2

0x16c0,	// (0x00057dae) list_double_pane_g1_cp2_ParamLimits

0x16c0,	// (0x00057dae) list_double_pane_g1_cp2

0x16cc,	// (0x00057dba) list_double_pane_g2_cp2

0x16d4,	// (0x00057dc2) list_double_pane_t1_cp2_ParamLimits

0x16d4,	// (0x00057dc2) list_double_pane_t1_cp2

0x16ea,	// (0x00057dd8) list_double_pane_t2_cp2_ParamLimits

0x16ea,	// (0x00057dd8) list_double_pane_t2_cp2

0x69cb,	// (0x0005d0b9) list_single_pane_cp2_g3

0x128d,	// (0x0005797b) list_single_pane_g1_cp2_ParamLimits

0x128d,	// (0x0005797b) list_single_pane_g1_cp2

0x1725,	// (0x00057e13) list_single_pane_g2_cp2

0x172d,	// (0x00057e1b) list_single_pane_t1_cp2_ParamLimits

0x172d,	// (0x00057e1b) list_single_pane_t1_cp2

0x69d3,	// (0x0005d0c1) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x69d3,	// (0x0005d0c1) list_single_large_graphic_pane_g1_cp2

0x1745,	// (0x00057e33) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1745,	// (0x00057e33) list_single_large_graphic_pane_g2_cp2

0x1751,	// (0x00057e3f) list_single_large_graphic_pane_g3_cp2

0x69df,	// (0x0005d0cd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x69df,	// (0x0005d0cd) list_single_large_graphic_pane_g4_cp1

0x1759,	// (0x00057e47) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1759,	// (0x00057e47) list_single_large_graphic_pane_t1_cp2

0x9d47,	// (0x00060435) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9d47,	// (0x00060435) list_single_graphic_heading_pane_g1_cp2

0x9d14,	// (0x00060402) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9d14,	// (0x00060402) list_single_graphic_heading_pane_g4_cp2

0x1725,	// (0x00057e13) list_single_graphic_heading_pane_g5_cp2

0x9d53,	// (0x00060441) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9d53,	// (0x00060441) list_single_graphic_heading_pane_t1_cp2

0x9d69,	// (0x00060457) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9d69,	// (0x00060457) list_single_graphic_heading_pane_t2_cp2

0x9d08,	// (0x000603f6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9d08,	// (0x000603f6) list_single_2graphic_pane_g1_cp2

0x9d14,	// (0x00060402) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9d14,	// (0x00060402) list_single_2graphic_pane_g2_cp2

0x1725,	// (0x00057e13) list_single_2graphic_pane_g3_cp2

0x9d25,	// (0x00060413) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9d25,	// (0x00060413) list_single_2graphic_pane_g4_cp2

0x9d31,	// (0x0006041f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9d31,	// (0x0006041f) list_single_2graphic_pane_t1_cp2

0xe1e7,	// (0x000648d5) list_highlight_pane_g10_cp1

0x98f0,	// (0x0005ffde) list_highlight_pane_g1_cp1

0x98f8,	// (0x0005ffe6) list_highlight_pane_g2_cp1

0x9900,	// (0x0005ffee) list_highlight_pane_g3_cp1

0x9908,	// (0x0005fff6) list_highlight_pane_g4_cp1

0x9910,	// (0x0005fffe) list_highlight_pane_g5_cp1

0x9918,	// (0x00060006) list_highlight_pane_g6_cp1

0x9920,	// (0x0006000e) list_highlight_pane_g7_cp1

0x9928,	// (0x00060016) list_highlight_pane_g8_cp1

0x9930,	// (0x0006001e) list_highlight_pane_g9_cp1

0x9818,	// (0x0005ff06) form_field_slider_pane_t3

0x9826,	// (0x0005ff14) form_field_slider_pane_t4

0x9834,	// (0x0005ff22) slider_form_pane_ParamLimits

0x9834,	// (0x0005ff22) slider_form_pane

0xe1f1,	// (0x000648df) control_abbreviations

0xe1f1,	// (0x000648df) control_conventions

0xe1f1,	// (0x000648df) control_definitions

0xe1f1,	// (0x000648df) format_table_attribute

0x9ffa,	// (0x000606e8) bg_popup_preview_window_pane_g9

0xe1f1,	// (0x000648df) format_table_data2

0xe1f1,	// (0x000648df) format_table_data3

0xe1f1,	// (0x000648df) format_table_data_example

0x0008,

0xe1f1,	// (0x000648df) intro_purpose

0xf8c5,	// (0x00065fb3) bg_popup_preview_window_pane_g

0xe1f1,	// (0x000648df) texts_category

0xe1f1,	// (0x000648df) texts_graphics

0x176f,	// (0x00057e5d) text_digital

0x177e,	// (0x00057e6c) text_primary

0x178d,	// (0x00057e7b) text_primary_small

0x179c,	// (0x00057e8a) text_secondary

0x17ab,	// (0x00057e99) text_title

0xa77a,	// (0x00060e68) bg_passive_tab_pane_g1_cp3_srt

0x67c1,	// (0x0005ceaf) bg_passive_tab_pane_g2_cp3_srt

0xa783,	// (0x00060e71) bg_passive_tab_pane_g3_cp3_srt

0xe23f,	// (0x0006492d) bg_active_tab_pane_cp3_srt_ParamLimits

0xe23f,	// (0x0006492d) bg_active_tab_pane_cp3_srt

0xa78c,	// (0x00060e7a) tabs_4_active_pane_srt_g1

0xa794,	// (0x00060e82) tabs_4_active_pane_srt_t1_ParamLimits

0xa794,	// (0x00060e82) tabs_4_active_pane_srt_t1

0xa77a,	// (0x00060e68) bg_active_tab_pane_g1_cp3_copy1

0x67c1,	// (0x0005ceaf) bg_active_tab_pane_g2_cp3_copy1

0xa783,	// (0x00060e71) bg_active_tab_pane_g3_cp3_copy1

0xe23f,	// (0x0006492d) tabs_2_long_active_pane_srt_ParamLimits

0xe23f,	// (0x0006492d) tabs_2_long_active_pane_srt

0xe23f,	// (0x0006492d) tabs_2_long_passive_pane_srt_ParamLimits

0xe23f,	// (0x0006492d) tabs_2_long_passive_pane_srt

0x6276,	// (0x0005c964) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6276,	// (0x0005c964) bg_passive_tab_pane_cp4_srt

0xa41b,	// (0x00060b09) bg_passive_tab_pane_g1_cp4_srt

0x67c1,	// (0x0005ceaf) bg_passive_tab_pane_g2_cp4_srt

0xa424,	// (0x00060b12) bg_passive_tab_pane_g3_cp4_srt

0x6255,	// (0x0005c943) bg_active_tab_pane_cp4_srt_ParamLimits

0x6255,	// (0x0005c943) bg_active_tab_pane_cp4_srt

0xa42d,	// (0x00060b1b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa42d,	// (0x00060b1b) tabs_2_long_active_pane_srt_t1

0xa41b,	// (0x00060b09) bg_active_tab_pane_g1_cp4_srt

0x67c1,	// (0x0005ceaf) bg_active_tab_pane_g2_cp4_srt

0xa424,	// (0x00060b12) bg_active_tab_pane_g3_cp4_srt

0xe369,	// (0x00064a57) tabs_3_long_active_pane_srt_ParamLimits

0xe369,	// (0x00064a57) tabs_3_long_active_pane_srt

0xe369,	// (0x00064a57) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe369,	// (0x00064a57) tabs_3_long_passive_pane_cp_srt

0xe369,	// (0x00064a57) tabs_3_long_passive_pane_srt_ParamLimits

0xe369,	// (0x00064a57) tabs_3_long_passive_pane_srt

0x6276,	// (0x0005c964) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6276,	// (0x0005c964) bg_passive_tab_pane_cp5_srt

0x694e,	// (0x0005d03c) bg_passive_tab_pane_g1_cp5_srt

0x67c1,	// (0x0005ceaf) bg_passive_tab_pane_g2_cp5_srt

0x6957,	// (0x0005d045) bg_passive_tab_pane_g3_cp5_srt

0x6255,	// (0x0005c943) bg_active_tab_pane_cp5_srt_ParamLimits

0x6255,	// (0x0005c943) bg_active_tab_pane_cp5_srt

0xa409,	// (0x00060af7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa409,	// (0x00060af7) tabs_3_long_active_pane_srt_t1

0x694e,	// (0x0005d03c) bg_active_tab_pane_g1_cp5_srt

0x67c1,	// (0x0005ceaf) bg_active_tab_pane_g2_cp5_srt

0x6957,	// (0x0005d045) bg_active_tab_pane_g3_cp5_srt

0xa3fb,	// (0x00060ae9) navi_text_pane_srt_t1

0xa3f3,	// (0x00060ae1) navi_icon_pane_srt_g1

0x1896,	// (0x00057f84) midp_editing_number_pane_srt

0x17ba,	// (0x00057ea8) midp_ticker_pane_srt

0x189e,	// (0x00057f8c) midp_ticker_pane_srt_g1

0x18a6,	// (0x00057f94) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x00065e36) midp_ticker_pane_srt_g

0x18ae,	// (0x00057f9c) midp_ticker_pane_srt_t1

0xa3e4,	// (0x00060ad2) midp_editing_number_pane_t1_copy1

0x69f9,	// (0x0005d0e7) listscroll_midp_pane

0x69f9,	// (0x0005d0e7) midp_form_pane

0x6a6b,	// (0x0005d159) midp_info_popup_window_ParamLimits

0x6a6b,	// (0x0005d159) midp_info_popup_window

0xf277,	// (0x00065965) bg_popup_sub_pane_cp50_ParamLimits

0xf277,	// (0x00065965) bg_popup_sub_pane_cp50

0x9524,	// (0x0005fc12) listscroll_midp_info_pane_ParamLimits

0x9524,	// (0x0005fc12) listscroll_midp_info_pane

0x9504,	// (0x0005fbf2) listscroll_form_midp_pane_ParamLimits

0x9504,	// (0x0005fbf2) listscroll_form_midp_pane

0x9510,	// (0x0005fbfe) scroll_bar_cp050

0x94e4,	// (0x0005fbd2) list_midp_pane

0xb265,	// (0x00061953) signal_pane_g2_cp

0x941e,	// (0x0005fb0c) listscroll_midp_info_pane_t1_ParamLimits

0x941e,	// (0x0005fb0c) listscroll_midp_info_pane_t1

0x9436,	// (0x0005fb24) listscroll_midp_info_pane_t2_ParamLimits

0x9436,	// (0x0005fb24) listscroll_midp_info_pane_t2

0x9474,	// (0x0005fb62) listscroll_midp_info_pane_t3_ParamLimits

0x9474,	// (0x0005fb62) listscroll_midp_info_pane_t3

0x94ae,	// (0x0005fb9c) listscroll_midp_info_pane_t4_ParamLimits

0x94ae,	// (0x0005fb9c) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x00065eee) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x00065eee) listscroll_midp_info_pane_t

0xf2cc,	// (0x000659ba) scroll_pane_cp21

0x93be,	// (0x0005faac) form_midp_field_choice_group_pane

0x93c7,	// (0x0005fab5) form_midp_field_text_pane

0x9404,	// (0x0005faf2) form_midp_field_time_pane

0x940c,	// (0x0005fafa) form_midp_gauge_slider_pane

0x9415,	// (0x0005fb03) form_midp_gauge_wait_pane

0xe1f1,	// (0x000648df) form_midp_image_pane

0x7813,	// (0x0005df01) list_single_midp_pane_ParamLimits

0x7813,	// (0x0005df01) list_single_midp_pane

0x9373,	// (0x0005fa61) form_midp_field_text_pane_t1

0x913d,	// (0x0005f82b) input_focus_pane_cp050

0x93ad,	// (0x0005fa9b) list_midp_form_text_pane

0x9342,	// (0x0005fa30) form_midp_field_choice_group_pane_t1

0x9350,	// (0x0005fa3e) input_focus_pane_cp051

0x9364,	// (0x0005fa52) list_midp_choice_pane

0xe1f1,	// (0x000648df) status_idle_pane

0x9326,	// (0x0005fa14) form_midp_field_time_pane_t1

0xe1e7,	// (0x000648d5) wait_anim_pane_g2_copy1

0x9334,	// (0x0005fa22) form_midp_field_time_pane_t2

0x0001,

0x181a,	// (0x00057f08) aid_navinavi_width_2_pane

0xf7fb,	// (0x00065ee9) form_midp_field_time_pane_t

0xe1f1,	// (0x000648df) input_focus_pane_cp052

0xe1f1,	// (0x000648df) bg_input_focus_pane_cp040

0x92e6,	// (0x0005f9d4) form_midp_gauge_slider_pane_t1

0x92f4,	// (0x0005f9e2) form_midp_gauge_slider_pane_t2

0x9302,	// (0x0005f9f0) form_midp_gauge_slider_pane_t3

0x9310,	// (0x0005f9fe) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x00065ee0) form_midp_gauge_slider_pane_t

0x931e,	// (0x0005fa0c) form_midp_slider_pane

0xe23f,	// (0x0006492d) bg_input_focus_pane_cp041_ParamLimits

0xe23f,	// (0x0006492d) bg_input_focus_pane_cp041

0x92b3,	// (0x0005f9a1) form_midp_gauge_wait_pane_t1_ParamLimits

0x92b3,	// (0x0005f9a1) form_midp_gauge_wait_pane_t1

0x92c5,	// (0x0005f9b3) form_midp_gauge_wait_pane_t2_ParamLimits

0x92c5,	// (0x0005f9b3) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00065edb) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00065edb) form_midp_gauge_wait_pane_t

0x92d7,	// (0x0005f9c5) form_midp_wait_pane_ParamLimits

0x92d7,	// (0x0005f9c5) form_midp_wait_pane

0x927d,	// (0x0005f96b) form_midp_image_pane_g1

0x9286,	// (0x0005f974) form_midp_image_pane_t1

0x9295,	// (0x0005f983) form_midp_image_pane_t2

0x92a4,	// (0x0005f992) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x00065ed4) form_midp_image_pane_t

0x9274,	// (0x0005f962) list_single_midp_pane_g1

0x3d01,	// (0x0005a3ef) list_single_midp_pane_t1

0x924b,	// (0x0005f939) list_midp_form_item_pane_ParamLimits

0x924b,	// (0x0005f939) list_midp_form_item_pane

0x17c2,	// (0x00057eb0) list_midp_form_item_pane_t1

0x17d1,	// (0x00057ebf) midp_ticker_pane_g1

0x17dd,	// (0x00057ecb) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00065e1c) midp_ticker_pane_g

0x17e9,	// (0x00057ed7) midp_ticker_pane_t1

0xa631,	// (0x00060d1f) midp_editing_number_pane_t1

0xa60f,	// (0x00060cfd) midp_editing_number_pane

0xa61e,	// (0x00060d0c) midp_ticker_pane

0xa3d4,	// (0x00060ac2) ai_message_heading_pane

0xe1f1,	// (0x000648df) bg_popup_window_pane_cp14

0xa3dc,	// (0x00060aca) listscroll_ai_message_pane

0xa35e,	// (0x00060a4c) ai_message_heading_pane_g1_ParamLimits

0xa35e,	// (0x00060a4c) ai_message_heading_pane_g1

0xa36a,	// (0x00060a58) ai_message_heading_pane_g2_ParamLimits

0xa36a,	// (0x00060a58) ai_message_heading_pane_g2

0xa376,	// (0x00060a64) ai_message_heading_pane_g3_ParamLimits

0xa376,	// (0x00060a64) ai_message_heading_pane_g3

0xa382,	// (0x00060a70) ai_message_heading_pane_g4_ParamLimits

0xa382,	// (0x00060a70) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x00066015) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x00066015) ai_message_heading_pane_g

0xa38e,	// (0x00060a7c) ai_message_heading_pane_t1_ParamLimits

0xa38e,	// (0x00060a7c) ai_message_heading_pane_t1

0xa3a8,	// (0x00060a96) ai_message_heading_pane_t2_ParamLimits

0xa3a8,	// (0x00060a96) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x0006601e) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x0006601e) ai_message_heading_pane_t

0xa3ba,	// (0x00060aa8) bg_popup_heading_pane_cp1_ParamLimits

0xa3ba,	// (0x00060aa8) bg_popup_heading_pane_cp1

0xa34c,	// (0x00060a3a) list_ai_message_pane_ParamLimits

0xa34c,	// (0x00060a3a) list_ai_message_pane

0xf2cc,	// (0x000659ba) scroll_pane_cp10

0xa2e8,	// (0x000609d6) list_ai_message_pane_g1

0xa2f0,	// (0x000609de) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x00065ff2) list_ai_message_pane_g

0xa2f8,	// (0x000609e6) list_ai_message_pane_t1_ParamLimits

0xa2f8,	// (0x000609e6) list_ai_message_pane_t1

0xa30d,	// (0x000609fb) list_ai_message_pane_t2_ParamLimits

0xa30d,	// (0x000609fb) list_ai_message_pane_t2

0xa322,	// (0x00060a10) list_ai_message_pane_t3_ParamLimits

0xa322,	// (0x00060a10) list_ai_message_pane_t3

0xa337,	// (0x00060a25) list_ai_message_pane_t4_ParamLimits

0xa337,	// (0x00060a25) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x00065ff7) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x00065ff7) list_ai_message_pane_t

0xa2d3,	// (0x000609c1) cell_ai_soft_ind_pane_ParamLimits

0xa2d3,	// (0x000609c1) cell_ai_soft_ind_pane

0x17fb,	// (0x00057ee9) cell_ai_soft_ind_pane_g1_ParamLimits

0x17fb,	// (0x00057ee9) cell_ai_soft_ind_pane_g1

0xe1f1,	// (0x000648df) grid_highlight_cp1

0x1808,	// (0x00057ef6) text_secondary_cp56_ParamLimits

0x1808,	// (0x00057ef6) text_secondary_cp56

0xa2a8,	// (0x00060996) example_general_pane_ParamLimits

0xa2a8,	// (0x00060996) example_general_pane

0xa2b4,	// (0x000609a2) example_parent_pane_g1_ParamLimits

0xa2b4,	// (0x000609a2) example_parent_pane_g1

0xa2c0,	// (0x000609ae) example_parent_pane_t1_ParamLimits

0xa2c0,	// (0x000609ae) example_parent_pane_t1

0x716d,	// (0x0005d85b) popup_preview_text_window_ParamLimits

0x716d,	// (0x0005d85b) popup_preview_text_window

0x171d,	// (0x00057e0b) list_single_pane_cp2_g4

0xe41f,	// (0x00064b0d) bg_popup_preview_window_pane_ParamLimits

0xe41f,	// (0x00064b0d) bg_popup_preview_window_pane

0xa002,	// (0x000606f0) popup_preview_text_window_t1_ParamLimits

0xa002,	// (0x000606f0) popup_preview_text_window_t1

0xa020,	// (0x0006070e) popup_preview_text_window_t2_ParamLimits

0xa020,	// (0x0006070e) popup_preview_text_window_t2

0xa069,	// (0x00060757) popup_preview_text_window_t3_ParamLimits

0xa069,	// (0x00060757) popup_preview_text_window_t3

0xa0ae,	// (0x0006079c) popup_preview_text_window_t4_ParamLimits

0xa0ae,	// (0x0006079c) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00065fc6) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00065fc6) popup_preview_text_window_t

0xa12c,	// (0x0006081a) scroll_pane_cp11

0x90b1,	// (0x0005f79f) bg_popup_preview_window_pane_g1

0x9fc2,	// (0x000606b0) bg_popup_preview_window_pane_g2

0x9fca,	// (0x000606b8) bg_popup_preview_window_pane_g3

0x9fd2,	// (0x000606c0) bg_popup_preview_window_pane_g4

0x9fda,	// (0x000606c8) bg_popup_preview_window_pane_g5

0x9fe2,	// (0x000606d0) bg_popup_preview_window_pane_g6

0x9fea,	// (0x000606d8) bg_popup_preview_window_pane_g7

0x9ff2,	// (0x000606e0) bg_popup_preview_window_pane_g8

0x5201,	// (0x0005b8ef) aid_popup_width_pane

0x714b,	// (0x0005d839) popup_midp_note_alarm_window_ParamLimits

0x714b,	// (0x0005d839) popup_midp_note_alarm_window

0xf18e,	// (0x0006587c) data_form_pane_ParamLimits

0x60a1,	// (0x0005c78f) form_field_data_pane_g1

0x60ab,	// (0x0005c799) form_field_data_pane_t1_ParamLimits

0xf19a,	// (0x00065888) input_focus_pane_ParamLimits

0x3b87,	// (0x0005a275) data_form_wide_pane_ParamLimits

0x3b98,	// (0x0005a286) form_field_data_wide_pane_g1

0x3ba4,	// (0x0005a292) form_field_data_wide_pane_t1_ParamLimits

0xe4f7,	// (0x00064be5) input_focus_pane_cp6_ParamLimits

0x620c,	// (0x0005c8fa) input_popup_find_pane_g1_ParamLimits

0x620c,	// (0x0005c8fa) input_popup_find_pane_g1

0x63ac,	// (0x0005ca9a) aid_navi_side_left_pane

0x63c1,	// (0x0005caaf) aid_navi_side_right_pane

0x99eb,	// (0x000600d9) bg_popup_window_pane_cp30_ParamLimits

0x99eb,	// (0x000600d9) bg_popup_window_pane_cp30

0x9a65,	// (0x00060153) popup_midp_note_alarm_window_g1_ParamLimits

0x9a65,	// (0x00060153) popup_midp_note_alarm_window_g1

0x9a95,	// (0x00060183) popup_midp_note_alarm_window_t1_ParamLimits

0x9a95,	// (0x00060183) popup_midp_note_alarm_window_t1

0x9b36,	// (0x00060224) popup_midp_note_alarm_window_t2_ParamLimits

0x9b36,	// (0x00060224) popup_midp_note_alarm_window_t2

0x9be4,	// (0x000602d2) popup_midp_note_alarm_window_t3_ParamLimits

0x9be4,	// (0x000602d2) popup_midp_note_alarm_window_t3

0x9c0c,	// (0x000602fa) popup_midp_note_alarm_window_t4_ParamLimits

0x9c0c,	// (0x000602fa) popup_midp_note_alarm_window_t4

0x9c2c,	// (0x0006031a) popup_midp_note_alarm_window_t5_ParamLimits

0x9c2c,	// (0x0006031a) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00065f63) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00065f63) popup_midp_note_alarm_window_t

0x9cd8,	// (0x000603c6) wait_bar_pane_cp1_ParamLimits

0x9cd8,	// (0x000603c6) wait_bar_pane_cp1

0xe1f1,	// (0x000648df) wait_anim_pane_copy1

0xe1f1,	// (0x000648df) wait_border_pane_copy1

0x96e1,	// (0x0005fdcf) wait_border_pane_g1_copy1

0x3bbe,	// (0x0005a2ac) form_field_popup_pane_g1

0x60c3,	// (0x0005c7b1) form_field_popup_pane_t1_ParamLimits

0xf19a,	// (0x00065888) input_focus_pane_cp7_ParamLimits

0xf1c8,	// (0x000658b6) list_form_pane_ParamLimits

0x3bc6,	// (0x0005a2b4) form_field_popup_wide_pane_g1

0x3bce,	// (0x0005a2bc) form_field_popup_wide_pane_t1_ParamLimits

0xf19a,	// (0x00065888) input_focus_pane_cp8_ParamLimits

0xf1d4,	// (0x000658c2) list_form_wide_pane_ParamLimits

0xa817,	// (0x00060f05) aid_size_cell_graphic_pane

0x613e,	// (0x0005c82c) data_form_pane_t1_ParamLimits

0x7a85,	// (0x0005e173) data_form_wide_pane_t1_ParamLimits

0x7452,	// (0x0005db40) bg_status_flat_pane

0x560a,	// (0x0005bcf8) title_pane_t1_ParamLimits

0xe207,	// (0x000648f5) title_pane_t2_ParamLimits

0xe22d,	// (0x0006491b) title_pane_t3_ParamLimits

0xf532,	// (0x00065c20) title_pane_t_ParamLimits

0x12f1,	// (0x000579df) level_1_signal_ParamLimits

0x12fe,	// (0x000579ec) level_2_signal_ParamLimits

0x130b,	// (0x000579f9) level_3_signal_ParamLimits

0x1318,	// (0x00057a06) level_4_signal_ParamLimits

0x1325,	// (0x00057a13) level_5_signal_ParamLimits

0x1332,	// (0x00057a20) level_6_signal_ParamLimits

0x133f,	// (0x00057a2d) level_7_signal_ParamLimits

0x12f1,	// (0x000579df) level_1_battery_ParamLimits

0x12fe,	// (0x000579ec) level_2_battery_ParamLimits

0x130b,	// (0x000579f9) level_3_battery_ParamLimits

0x1318,	// (0x00057a06) level_4_battery_ParamLimits

0x1325,	// (0x00057a13) level_5_battery_ParamLimits

0x1332,	// (0x00057a20) level_6_battery_ParamLimits

0x133f,	// (0x00057a2d) level_7_battery_ParamLimits

0x98f0,	// (0x0005ffde) bg_status_flat_pane_g1

0x98f8,	// (0x0005ffe6) bg_status_flat_pane_g2

0x9900,	// (0x0005ffee) bg_status_flat_pane_g3

0x9908,	// (0x0005fff6) bg_status_flat_pane_g4

0x9910,	// (0x0005fffe) bg_status_flat_pane_g5

0x9918,	// (0x00060006) bg_status_flat_pane_g6

0x9920,	// (0x0006000e) bg_status_flat_pane_g7

0x567a,	// (0x0005bd68) tabs_3_active_pane_t1_ParamLimits

0x567a,	// (0x0005bd68) tabs_3_passive_pane_t1_ParamLimits

0x5694,	// (0x0005bd82) tabs_4_active_pane_t1_ParamLimits

0x5694,	// (0x0005bd82) tabs_4_1_passive_pane_t1_ParamLimits

0x6243,	// (0x0005c931) tabs_2_active_pane_t1_ParamLimits

0x6243,	// (0x0005c931) tabs_2_passive_pane_t1_ParamLimits

0x6255,	// (0x0005c943) bg_active_tab_pane_cp4_ParamLimits

0x6263,	// (0x0005c951) tabs_2_long_active_pane_t1_ParamLimits

0x6276,	// (0x0005c964) bg_passive_tab_pane_cp4_ParamLimits

0x7760,	// (0x0005de4e) list_single_midp_graphic_pane_t1_ParamLimits

0x6255,	// (0x0005c943) bg_active_tab_pane_cp5_ParamLimits

0x6282,	// (0x0005c970) tabs_3_long_active_pane_t1_ParamLimits

0x6276,	// (0x0005c964) bg_passive_tab_pane_cp5_ParamLimits

0x7760,	// (0x0005de4e) list_single_midp_graphic_pane_t1

0x7452,	// (0x0005db40) bg_status_flat_pane_ParamLimits

0x751b,	// (0x0005dc09) indicator_pane_cp2_ParamLimits

0x751b,	// (0x0005dc09) indicator_pane_cp2

0x7646,	// (0x0005dd34) navi_pane_srt_ParamLimits

0x7646,	// (0x0005dd34) navi_pane_srt

0x766a,	// (0x0005dd58) popup_clock_digital_analogue_window_cp1

0xe283,	// (0x00064971) indicator_pane_t1

0x17ba,	// (0x00057ea8) copy_highlight_pane

0x17ba,	// (0x00057ea8) cursor_graphics_pane

0x17ba,	// (0x00057ea8) graphic_within_text_pane

0x17ba,	// (0x00057ea8) link_highlight_pane

0xa0ef,	// (0x000607dd) popup_preview_text_window_t5_ParamLimits

0xa0ef,	// (0x000607dd) popup_preview_text_window_t5

0x1822,	// (0x00057f10) cursor_digital_pane

0x1822,	// (0x00057f10) cursor_primary_pane

0x1833,	// (0x00057f21) cursor_primary_small_pane

0x183b,	// (0x00057f29) cursor_secondary_pane

0x1843,	// (0x00057f31) cursor_title_pane

0x1822,	// (0x00057f10) link_highlight_digital_pane

0x182a,	// (0x00057f18) link_highlight_primary_pane

0x1833,	// (0x00057f21) link_highlight_primary_small_pane

0x183b,	// (0x00057f29) link_highlight_secondary_pane

0x1843,	// (0x00057f31) link_highlight_title_pane

0x1822,	// (0x00057f10) copy_highlight_digital_pane

0x1822,	// (0x00057f10) copy_highlight_primary_pane

0x1833,	// (0x00057f21) copy_highlight_primary_small_pane

0x183b,	// (0x00057f29) copy_highlight_secondary_pane

0x1843,	// (0x00057f31) copy_highlight_title_pane

0x183b,	// (0x00057f29) graphic_text_digital_pane

0x998e,	// (0x0006007c) graphic_text_primary_pane

0x9997,	// (0x00060085) graphic_text_primary_small_pane

0x1833,	// (0x00057f21) graphic_text_secondary_pane

0x1822,	// (0x00057f10) graphic_text_title_pane

0x6ac3,	// (0x0005d1b1) cursor_primary_pane_g1

0x9980,	// (0x0006006e) cursor_text_primary_t1

0x9968,	// (0x00060056) cursor_primary_small_pane_g1

0x9972,	// (0x00060060) cursor_text_primary_small_t1

0x9950,	// (0x0006003e) cursor_primary_small_pane_g1_copy1

0x995a,	// (0x00060048) cursor_text_primary_small_t1_copy1

0x9938,	// (0x00060026) cursor_text_title_t1

0x9946,	// (0x00060034) cursor_title_pane_g1

0x6ac3,	// (0x0005d1b1) cursor_digital_pane_g1

0x184b,	// (0x00057f39) cursor_text_digital_t1

0x1859,	// (0x00057f47) link_highlight_primary_pane_g1

0x98e1,	// (0x0005ffcf) link_highlight_primary_pane_t1

0x1859,	// (0x00057f47) link_highlight_primary_small_pane_g1

0x1861,	// (0x00057f4f) link_highlight_primary_small_pane_t1

0x1859,	// (0x00057f47) link_highlight_secondary_pane_g1

0x1870,	// (0x00057f5e) link_highlight_secondary_pane_t1

0x9846,	// (0x0005ff34) link_highlight_title_pane_g1

0x985d,	// (0x0005ff4b) link_highlight_title_pane_t1

0x9846,	// (0x0005ff34) link_highlight_digital_pane_g1

0x984e,	// (0x0005ff3c) link_highlight_digital_pane_t1

0x9700,	// (0x0005fdee) copy_highlight_primary_pane_g1

0x9726,	// (0x0005fe14) copy_highlight_primary_pane_t1

0x9700,	// (0x0005fdee) copy_highlight_primary_small_pane_g1

0x9717,	// (0x0005fe05) copy_highlight_primary_small_pane_t1

0x187f,	// (0x00057f6d) copy_highlight_secondary_pane_g1

0x1887,	// (0x00057f75) copy_highlight_secondary_pane_t1

0x9700,	// (0x0005fdee) copy_highlight_title_pane_g1

0x9708,	// (0x0005fdf6) copy_highlight_title_pane_t1

0x9700,	// (0x0005fdee) copy_highlight_digital_pane_g1

0xa9e5,	// (0x000610d3) copy_highlight_digital_pane_t1

0xa939,	// (0x00061027) graphic_text_primary_pane_g1

0xa9c9,	// (0x000610b7) graphic_text_primary_pane_t1

0xa9d7,	// (0x000610c5) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00066092) graphic_text_primary_pane_t

0xa9a5,	// (0x00061093) graphic_text_primary_small_pane_g1

0xa9ad,	// (0x0006109b) graphic_text_primary_small_pane_t1

0xa9bb,	// (0x000610a9) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x0006608d) graphic_text_primary_small_pane_t

0xa981,	// (0x0006106f) graphic_text_secondary_pane_g1

0xa989,	// (0x00061077) graphic_text_secondary_pane_t1

0xa997,	// (0x00061085) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x00066088) graphic_text_secondary_pane_t

0xa95d,	// (0x0006104b) graphic_text_title_pane_g1

0xa965,	// (0x00061053) graphic_text_title_pane_t1

0xa973,	// (0x00061061) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00066083) graphic_text_title_pane_t

0xa939,	// (0x00061027) graphic_text_digital_pane_g1

0xa941,	// (0x0006102f) graphic_text_digital_pane_t1

0xa94f,	// (0x0006103d) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x0006607e) graphic_text_digital_pane_t

0xe23f,	// (0x0006492d) navi_icon_pane_srt_ParamLimits

0xe23f,	// (0x0006492d) navi_icon_pane_srt

0xe1f1,	// (0x000648df) navi_midp_pane_srt

0xe1f1,	// (0x000648df) navi_navi_pane_srt

0xe23f,	// (0x0006492d) navi_text_pane_srt_ParamLimits

0xe23f,	// (0x0006492d) navi_text_pane_srt

0xa904,	// (0x00060ff2) navi_navi_icon_text_pane_srt

0xa90c,	// (0x00060ffa) navi_navi_pane_srt_g1_ParamLimits

0xa90c,	// (0x00060ffa) navi_navi_pane_srt_g1

0xa91e,	// (0x0006100c) navi_navi_pane_srt_g2_ParamLimits

0xa91e,	// (0x0006100c) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x00066079) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x00066079) navi_navi_pane_srt_g

0xa930,	// (0x0006101e) navi_navi_tabs_pane_srt

0xa904,	// (0x00060ff2) navi_navi_text_pane_srt

0xa904,	// (0x00060ff2) navi_navi_volume_pane_srt

0xa8f5,	// (0x00060fe3) navi_navi_text_pane_srt_t1

0x7bdc,	// (0x0005e2ca) navi_navi_volume_pane_srt_g1

0x7be4,	// (0x0005e2d2) volume_small_pane_srt_ParamLimits

0x7be4,	// (0x0005e2d2) volume_small_pane_srt

0x6acd,	// (0x0005d1bb) volume_small_pane_srt_g1_ParamLimits

0x6acd,	// (0x0005d1bb) volume_small_pane_srt_g1

0x6add,	// (0x0005d1cb) volume_small_pane_srt_g2_ParamLimits

0x6add,	// (0x0005d1cb) volume_small_pane_srt_g2

0x6aee,	// (0x0005d1dc) volume_small_pane_srt_g3_ParamLimits

0x6aee,	// (0x0005d1dc) volume_small_pane_srt_g3

0x6aff,	// (0x0005d1ed) volume_small_pane_srt_g4_ParamLimits

0x6aff,	// (0x0005d1ed) volume_small_pane_srt_g4

0x6b10,	// (0x0005d1fe) volume_small_pane_srt_g5_ParamLimits

0x6b10,	// (0x0005d1fe) volume_small_pane_srt_g5

0x6b21,	// (0x0005d20f) volume_small_pane_srt_g6_ParamLimits

0x6b21,	// (0x0005d20f) volume_small_pane_srt_g6

0x6b32,	// (0x0005d220) volume_small_pane_srt_g7_ParamLimits

0x6b32,	// (0x0005d220) volume_small_pane_srt_g7

0x6b43,	// (0x0005d231) volume_small_pane_srt_g8_ParamLimits

0x6b43,	// (0x0005d231) volume_small_pane_srt_g8

0x6b54,	// (0x0005d242) volume_small_pane_srt_g9_ParamLimits

0x6b54,	// (0x0005d242) volume_small_pane_srt_g9

0x6b65,	// (0x0005d253) volume_small_pane_srt_g10_ParamLimits

0x6b65,	// (0x0005d253) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00065e21) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00065e21) volume_small_pane_srt_g

0x58e1,	// (0x0005bfcf) query_popup_data_pane_cp2

0xa8db,	// (0x00060fc9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa8db,	// (0x00060fc9) navi_navi_icon_text_pane_srt_t1

0x998e,	// (0x0006007c) navi_tabs_2_long_pane_srt

0x998e,	// (0x0006007c) navi_tabs_2_pane_srt

0x998e,	// (0x0006007c) navi_tabs_3_long_pane_srt

0x998e,	// (0x0006007c) navi_tabs_3_pane_srt

0x998e,	// (0x0006007c) navi_tabs_4_pane_srt

0x7bbc,	// (0x0005e2aa) tabs_2_active_pane_srt_ParamLimits

0x7bbc,	// (0x0005e2aa) tabs_2_active_pane_srt

0x7bcc,	// (0x0005e2ba) tabs_2_passive_pane_srt_ParamLimits

0x7bcc,	// (0x0005e2ba) tabs_2_passive_pane_srt

0xf51d,	// (0x00065c0b) bg_passive_tab_pane_cp1_srt_ParamLimits

0xf51d,	// (0x00065c0b) bg_passive_tab_pane_cp1_srt

0xa8a7,	// (0x00060f95) bg_passive_tab_pane_g1_cp1_srt

0x67c1,	// (0x0005ceaf) bg_passive_tab_pane_g2_cp1_srt

0xa8b0,	// (0x00060f9e) bg_passive_tab_pane_g3_cp1_srt

0xe23f,	// (0x0006492d) bg_active_tab_pane_cp1_srt_ParamLimits

0xe23f,	// (0x0006492d) bg_active_tab_pane_cp1_srt

0xa8b9,	// (0x00060fa7) tabs_2_active_pane_srt_g1

0xa8c1,	// (0x00060faf) tabs_2_active_pane_srt_t1_ParamLimits

0xa8c1,	// (0x00060faf) tabs_2_active_pane_srt_t1

0xa8a7,	// (0x00060f95) bg_active_tab_pane_g1_cp1_srt

0x67c1,	// (0x0005ceaf) bg_active_tab_pane_g2_cp1_srt

0xa8b0,	// (0x00060f9e) bg_active_tab_pane_g3_cp1_srt

0x7b89,	// (0x0005e277) tabs_3_active_pane_srt_ParamLimits

0x7b89,	// (0x0005e277) tabs_3_active_pane_srt

0x7b9a,	// (0x0005e288) tabs_3_passive_pane_cp_srt_ParamLimits

0x7b9a,	// (0x0005e288) tabs_3_passive_pane_cp_srt

0x7bab,	// (0x0005e299) tabs_3_passive_pane_srt_ParamLimits

0x7bab,	// (0x0005e299) tabs_3_passive_pane_srt

0xf51d,	// (0x00065c0b) bg_passive_tab_pane_cp2_srt_ParamLimits

0xf51d,	// (0x00065c0b) bg_passive_tab_pane_cp2_srt

0x6b76,	// (0x0005d264) bg_passive_tab_pane_g1_cp2_srt

0x67c1,	// (0x0005ceaf) bg_passive_tab_pane_g2_cp2_srt

0x6b7f,	// (0x0005d26d) bg_passive_tab_pane_g3_cp2_srt

0xe23f,	// (0x0006492d) bg_active_tab_pane_cp2_srt_ParamLimits

0xe23f,	// (0x0006492d) bg_active_tab_pane_cp2_srt

0xa88d,	// (0x00060f7b) tabs_3_active_pane_srt_g1

0xa895,	// (0x00060f83) tabs_3_active_pane_srt_t1_ParamLimits

0xa895,	// (0x00060f83) tabs_3_active_pane_srt_t1

0x6b76,	// (0x0005d264) bg_active_tab_pane_g1_cp2_srt

0x67c1,	// (0x0005ceaf) bg_active_tab_pane_g2_cp2_srt

0x6b7f,	// (0x0005d26d) bg_active_tab_pane_g3_cp2_srt

0x7b41,	// (0x0005e22f) tabs_4_active_pane_srt_ParamLimits

0x7b41,	// (0x0005e22f) tabs_4_active_pane_srt

0x7b53,	// (0x0005e241) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7b53,	// (0x0005e241) tabs_4_passive_pane_cp2_srt

0x6db8,	// (0x0005d4a6) aid_size_cell_toolbar

0x6276,	// (0x0005c964) main_idle_act_pane_ParamLimits

0x6f7d,	// (0x0005d66b) popup_large_graphic_colour_window_ParamLimits

0x72e8,	// (0x0005d9d6) popup_toolbar_window_ParamLimits

0x72e8,	// (0x0005d9d6) popup_toolbar_window

0xa65c,	// (0x00060d4a) list_single_graphic_2heading_pane_ParamLimits

0xa65c,	// (0x00060d4a) list_single_graphic_2heading_pane

0xf45d,	// (0x00065b4b) aid_size_cell_apps_grid_lsc_pane

0xf46f,	// (0x00065b5d) aid_size_cell_apps_grid_prt_pane

0xf51d,	// (0x00065c0b) bg_wml_button_pane_cp1_ParamLimits

0xf51d,	// (0x00065c0b) bg_wml_button_pane_cp1

0x9373,	// (0x0005fa61) form_midp_field_text_pane_t1_ParamLimits

0x913d,	// (0x0005f82b) input_focus_pane_cp050_ParamLimits

0x93ad,	// (0x0005fa9b) list_midp_form_text_pane_ParamLimits

0x9350,	// (0x0005fa3e) input_focus_pane_cp051_ParamLimits

0x9364,	// (0x0005fa52) list_midp_choice_pane_ParamLimits

0x91f3,	// (0x0005f8e1) list_single_2graphic_pane_cp3_ParamLimits

0x91f3,	// (0x0005f8e1) list_single_2graphic_pane_cp3

0x9218,	// (0x0005f906) list_single_midp_graphic_pane_ParamLimits

0x9218,	// (0x0005f906) list_single_midp_graphic_pane

0x516f,	// (0x0005b85d) list_single_graphic_2heading_pane_g1_ParamLimits

0x516f,	// (0x0005b85d) list_single_graphic_2heading_pane_g1

0x517b,	// (0x0005b869) list_single_graphic_2heading_pane_g4_ParamLimits

0x517b,	// (0x0005b869) list_single_graphic_2heading_pane_g4

0x5187,	// (0x0005b875) list_single_graphic_2heading_pane_g5_ParamLimits

0x5187,	// (0x0005b875) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x00065e74) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x00065e74) list_single_graphic_2heading_pane_g

0x5193,	// (0x0005b881) list_single_graphic_2heading_pane_t1_ParamLimits

0x5193,	// (0x0005b881) list_single_graphic_2heading_pane_t1

0x51a7,	// (0x0005b895) list_single_graphic_2heading_pane_t2_ParamLimits

0x51a7,	// (0x0005b895) list_single_graphic_2heading_pane_t2

0x51c1,	// (0x0005b8af) list_single_graphic_2heading_pane_t3_ParamLimits

0x51c1,	// (0x0005b8af) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x00065e7b) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x00065e7b) list_single_graphic_2heading_pane_t

0x8fef,	// (0x0005f6dd) bg_popup_sub_pane_cp2

0x9019,	// (0x0005f707) grid_toobar_pane

0x76c3,	// (0x0005ddb1) cell_toolbar_pane_ParamLimits

0x76c3,	// (0x0005ddb1) cell_toolbar_pane

0x9055,	// (0x0005f743) cell_toolbar_pane_g1_ParamLimits

0x9055,	// (0x0005f743) cell_toolbar_pane_g1

0x9069,	// (0x0005f757) cell_toolbar_pane_g2_ParamLimits

0x9069,	// (0x0005f757) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x00065e89) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x00065e89) cell_toolbar_pane_g

0x908b,	// (0x0005f779) grid_highlight_pane_cp2_ParamLimits

0x908b,	// (0x0005f779) grid_highlight_pane_cp2

0x90a5,	// (0x0005f793) toolbar_button_pane

0x90b1,	// (0x0005f79f) toolbar_button_pane_g1

0x90b9,	// (0x0005f7a7) toolbar_button_pane_g2

0x90c1,	// (0x0005f7af) toolbar_button_pane_g3

0x90c9,	// (0x0005f7b7) toolbar_button_pane_g4

0x90d1,	// (0x0005f7bf) toolbar_button_pane_g5

0x90d9,	// (0x0005f7c7) toolbar_button_pane_g6

0x90e1,	// (0x0005f7cf) toolbar_button_pane_g7

0x90e9,	// (0x0005f7d7) toolbar_button_pane_g8

0x90f1,	// (0x0005f7df) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x00065e8e) toolbar_button_pane_g

0x7707,	// (0x0005ddf5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7707,	// (0x0005ddf5) list_single_2graphic_pane_g1_cp3

0x7713,	// (0x0005de01) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7713,	// (0x0005de01) list_single_2graphic_pane_g2_cp3

0x7724,	// (0x0005de12) list_single_2graphic_pane_g3_cp3

0x772c,	// (0x0005de1a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x772c,	// (0x0005de1a) list_single_2graphic_pane_g4_cp3

0x7738,	// (0x0005de26) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7738,	// (0x0005de26) list_single_2graphic_pane_t1_cp3

0x7754,	// (0x0005de42) list_single_midp_graphic_pane_g2_ParamLimits

0x7754,	// (0x0005de42) list_single_midp_graphic_pane_g2

0x5167,	// (0x0005b855) aid_zoom_text_primary

0x6dc0,	// (0x0005d4ae) aid_zoom_text_secondary

0x6bd6,	// (0x0005d2c4) status_small_pane_g7_ParamLimits

0x6bd6,	// (0x0005d2c4) status_small_pane_g7

0x6bf9,	// (0x0005d2e7) status_small_pane_t1_ParamLimits

0x55ed,	// (0x0005bcdb) title_pane_g2

0x0003,

0xf529,	// (0x00065c17) title_pane_g

0x593b,	// (0x0005c029) aid_size_cell_colour_1_pane_ParamLimits

0x593b,	// (0x0005c029) aid_size_cell_colour_1_pane

0x594f,	// (0x0005c03d) aid_size_cell_colour_2_pane_ParamLimits

0x594f,	// (0x0005c03d) aid_size_cell_colour_2_pane

0x5963,	// (0x0005c051) aid_size_cell_colour_3_pane_ParamLimits

0x5963,	// (0x0005c051) aid_size_cell_colour_3_pane

0x5977,	// (0x0005c065) aid_size_cell_colour_4_pane_ParamLimits

0x5977,	// (0x0005c065) aid_size_cell_colour_4_pane

0x62e9,	// (0x0005c9d7) title_pane_stacon_g1_ParamLimits

0x62e9,	// (0x0005c9d7) title_pane_stacon_g1

0x977d,	// (0x0005fe6b) popup_note_wait_window_g3_ParamLimits

0x977d,	// (0x0005fe6b) popup_note_wait_window_g3

0x97f3,	// (0x0005fee1) popup_note_wait_window_t5_ParamLimits

0x97f3,	// (0x0005fee1) popup_note_wait_window_t5

0xe1f1,	// (0x000648df) main_feb_china_hwr_fs_writing_pane

0x6e64,	// (0x0005d552) popup_feb_china_hwr_fs_window_ParamLimits

0x6e64,	// (0x0005d552) popup_feb_china_hwr_fs_window

0x7776,	// (0x0005de64) aid_size_cell_hwr_fs_ParamLimits

0x7776,	// (0x0005de64) aid_size_cell_hwr_fs

0x913d,	// (0x0005f82b) bg_popup_sub_pane_cp3_ParamLimits

0x913d,	// (0x0005f82b) bg_popup_sub_pane_cp3

0x778b,	// (0x0005de79) grid_hwr_fs_pane_ParamLimits

0x778b,	// (0x0005de79) grid_hwr_fs_pane

0x77a3,	// (0x0005de91) linegrid_hwr_fs_pane_ParamLimits

0x77a3,	// (0x0005de91) linegrid_hwr_fs_pane

0x77b3,	// (0x0005dea1) cell_hwr_fs_pane_ParamLimits

0x77b3,	// (0x0005dea1) cell_hwr_fs_pane

0x9149,	// (0x0005f837) linegrid_hwr_fs_pane_g1_ParamLimits

0x9149,	// (0x0005f837) linegrid_hwr_fs_pane_g1

0x9155,	// (0x0005f843) linegrid_hwr_fs_pane_g2_ParamLimits

0x9155,	// (0x0005f843) linegrid_hwr_fs_pane_g2

0x9167,	// (0x0005f855) linegrid_hwr_fs_pane_g3_ParamLimits

0x9167,	// (0x0005f855) linegrid_hwr_fs_pane_g3

0x77d5,	// (0x0005dec3) linegrid_hwr_fs_pane_g4_ParamLimits

0x77d5,	// (0x0005dec3) linegrid_hwr_fs_pane_g4

0x77ef,	// (0x0005dedd) linegrid_hwr_fs_pane_g5_ParamLimits

0x77ef,	// (0x0005dedd) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x00065eb9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x00065eb9) linegrid_hwr_fs_pane_g

0x9173,	// (0x0005f861) cell_hwr_fs_pane_g1_ParamLimits

0x9173,	// (0x0005f861) cell_hwr_fs_pane_g1

0x8f29,	// (0x0005f617) cell_hwr_fs_pane_g2_ParamLimits

0x8f29,	// (0x0005f617) cell_hwr_fs_pane_g2

0x9189,	// (0x0005f877) cell_hwr_fs_pane_g3_ParamLimits

0x9189,	// (0x0005f877) cell_hwr_fs_pane_g3

0x9196,	// (0x0005f884) cell_hwr_fs_pane_g4_ParamLimits

0x9196,	// (0x0005f884) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x00065ec4) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x00065ec4) cell_hwr_fs_pane_g

0x7805,	// (0x0005def3) cell_hwr_fs_pane_t1

0xe1f1,	// (0x000648df) grid_highlight_pane_cp6

0xe1f1,	// (0x000648df) main_idle_act2_pane

0xf2b3,	// (0x000659a1) aid_inside_area_popup_secondary

0x9e12,	// (0x00060500) aid_inside_area_window_primary_ParamLimits

0x9e12,	// (0x00060500) aid_inside_area_window_primary

0xa9f4,	// (0x000610e2) ai2_news_ticker_pane

0xa9fc,	// (0x000610ea) aid_size_cell_ai1_link_ParamLimits

0xa9fc,	// (0x000610ea) aid_size_cell_ai1_link

0xaa16,	// (0x00061104) popup_ai2_data_window_ParamLimits

0xaa16,	// (0x00061104) popup_ai2_data_window

0xaa2c,	// (0x0006111a) popup_ai2_link_window_ParamLimits

0xaa2c,	// (0x0006111a) popup_ai2_link_window

0x913d,	// (0x0005f82b) bg_popup_sub_pane_cp4_ParamLimits

0x913d,	// (0x0005f82b) bg_popup_sub_pane_cp4

0xaa40,	// (0x0006112e) grid_ai2_link_pane_ParamLimits

0xaa40,	// (0x0006112e) grid_ai2_link_pane

0xaa57,	// (0x00061145) popup_ai2_link_window_g1_ParamLimits

0xaa57,	// (0x00061145) popup_ai2_link_window_g1

0xaa63,	// (0x00061151) popup_ai2_link_window_g2_ParamLimits

0xaa63,	// (0x00061151) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00066097) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00066097) popup_ai2_link_window_g

0xaa72,	// (0x00061160) ai2_mp_button_pane

0xaa7a,	// (0x00061168) ai2_mp_volume_pane

0x9350,	// (0x0005fa3e) bg_popup_sub_pane_cp5_ParamLimits

0x9350,	// (0x0005fa3e) bg_popup_sub_pane_cp5

0xaa82,	// (0x00061170) heading_ai2_gene_pane_ParamLimits

0xaa82,	// (0x00061170) heading_ai2_gene_pane

0xaa8e,	// (0x0006117c) list_ai2_gene_pane_ParamLimits

0xaa8e,	// (0x0006117c) list_ai2_gene_pane

0xaad6,	// (0x000611c4) cell_ai2_link_pane_ParamLimits

0xaad6,	// (0x000611c4) cell_ai2_link_pane

0xaaec,	// (0x000611da) cell_ai2_link_pane_g1

0xe1f1,	// (0x000648df) grid_highlight_pane_cp7

0x7bf9,	// (0x0005e2e7) ai2_mp_volume_pane_g1

0xabbc,	// (0x000612aa) ai2_mp_volume_pane_g2

0xab31,	// (0x0006121f) list_ai2_gene_pane_t1

0xabc4,	// (0x000612b2) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x000660b0) ai2_mp_volume_pane_g

0x7c01,	// (0x0005e2ef) volume_small_pane_cp3

0xabcc,	// (0x000612ba) aid_size_cell_ai2_button

0xabd4,	// (0x000612c2) grid_ai2_button_pane

0xabdd,	// (0x000612cb) cell_ai2_button_pane_ParamLimits

0xabdd,	// (0x000612cb) cell_ai2_button_pane

0xe1e7,	// (0x000648d5) cell_ai2_button_pane_g1

0xe1f1,	// (0x000648df) grid_highlight_pane_cp8

0xab7c,	// (0x0006126a) ai2_gene_pane_t1_ParamLimits

0xab7c,	// (0x0006126a) ai2_gene_pane_t1

0x6dae,	// (0x0005d49c) aid_height_parent_landscape

0xa47b,	// (0x00060b69) aid_height_set_list

0xa48c,	// (0x00060b7a) aid_size_parent

0xa817,	// (0x00060f05) aid_size_cell_graphic_pane_ParamLimits

0xaa9e,	// (0x0006118c) popup_ai2_data_window_g1_ParamLimits

0xaa9e,	// (0x0006118c) popup_ai2_data_window_g1

0xaaaa,	// (0x00061198) ai2_news_ticker_pane_g1

0xaab2,	// (0x000611a0) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x0006609c) ai2_news_ticker_pane_g

0xaaba,	// (0x000611a8) ai2_news_ticker_pane_t1

0xaac8,	// (0x000611b6) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x000660a1) ai2_news_ticker_pane_t

0xaaf5,	// (0x000611e3) heading_ai2_gene_pane_g1

0xaafd,	// (0x000611eb) heading_ai2_gene_pane_t1_ParamLimits

0xaafd,	// (0x000611eb) heading_ai2_gene_pane_t1

0xab12,	// (0x00061200) list_highlight_pane_cp6

0xab1a,	// (0x00061208) ai2_gene_pane_ParamLimits

0xab1a,	// (0x00061208) ai2_gene_pane

0xab3f,	// (0x0006122d) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x000660a6) list_ai2_gene_pane_t

0xab4d,	// (0x0006123b) list_highlight_pane_cp8_ParamLimits

0xab4d,	// (0x0006123b) list_highlight_pane_cp8

0xab5e,	// (0x0006124c) ai2_gene_pane_g1_ParamLimits

0xab5e,	// (0x0006124c) ai2_gene_pane_g1

0xab70,	// (0x0006125e) ai2_gene_pane_g2_ParamLimits

0xab70,	// (0x0006125e) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x000660ab) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x000660ab) ai2_gene_pane_g

0xf139,	// (0x00065827) scroll_pane_cp12

0x6d6b,	// (0x0005d459) control_pane_t3_ParamLimits

0x6d6b,	// (0x0005d459) control_pane_t3

0x6bea,	// (0x0005d2d8) status_small_pane_g8_ParamLimits

0x6bea,	// (0x0005d2d8) status_small_pane_g8

0x6f46,	// (0x0005d634) popup_find_window_ParamLimits

0x715f,	// (0x0005d84d) popup_note_image_window_ParamLimits

0x3b12,	// (0x0005a200) list_double2_graphic_pane_vc_g1_ParamLimits

0x3b12,	// (0x0005a200) list_double2_graphic_pane_vc_g1

0x128d,	// (0x0005797b) list_double2_graphic_pane_vc_g2_ParamLimits

0x128d,	// (0x0005797b) list_double2_graphic_pane_vc_g2

0x76f3,	// (0x0005dde1) list_double2_graphic_pane_vc_g3_ParamLimits

0x76f3,	// (0x0005dde1) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x00065e82) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x00065e82) list_double2_graphic_pane_vc_g

0x3b1e,	// (0x0005a20c) list_double2_graphic_pane_vc_t1_ParamLimits

0x3b1e,	// (0x0005a20c) list_double2_graphic_pane_vc_t1

0x128d,	// (0x0005797b) list_single_heading_pane_vc_g1_ParamLimits

0x128d,	// (0x0005797b) list_single_heading_pane_vc_g1

0x76f3,	// (0x0005dde1) list_single_heading_pane_vc_g2_ParamLimits

0x76f3,	// (0x0005dde1) list_single_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065ea3) list_single_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065ea3) list_single_heading_pane_vc_g

0x3c6f,	// (0x0005a35d) list_single_heading_pane_vc_t1_ParamLimits

0x3c6f,	// (0x0005a35d) list_single_heading_pane_vc_t1

0x3c85,	// (0x0005a373) list_single_heading_pane_vc_t2_ParamLimits

0x3c85,	// (0x0005a373) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x00065ea8) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x00065ea8) list_single_heading_pane_vc_t

0x90f9,	// (0x0005f7e7) list_setting_number_pane_vc_g1_ParamLimits

0x90f9,	// (0x0005f7e7) list_setting_number_pane_vc_g1

0x9105,	// (0x0005f7f3) list_setting_number_pane_vc_g2_ParamLimits

0x9105,	// (0x0005f7f3) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00065ead) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00065ead) list_setting_number_pane_vc_g

0x3c97,	// (0x0005a385) list_setting_number_pane_vc_t1_ParamLimits

0x3c97,	// (0x0005a385) list_setting_number_pane_vc_t1

0x3cab,	// (0x0005a399) list_setting_number_pane_vc_t2_ParamLimits

0x3cab,	// (0x0005a399) list_setting_number_pane_vc_t2

0x3cc7,	// (0x0005a3b5) list_setting_number_pane_vc_t3_ParamLimits

0x3cc7,	// (0x0005a3b5) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x00065eb2) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x00065eb2) list_setting_number_pane_vc_t

0x3cf1,	// (0x0005a3df) set_value_pane_vc_ParamLimits

0x3cf1,	// (0x0005a3df) set_value_pane_vc

0xa65c,	// (0x00060d4a) list_double2_graphic_pane_vc_ParamLimits

0xa65c,	// (0x00060d4a) list_double2_graphic_pane_vc

0xa66f,	// (0x00060d5d) list_double2_large_graphic_pane_vc_ParamLimits

0xa66f,	// (0x00060d5d) list_double2_large_graphic_pane_vc

0xa65c,	// (0x00060d4a) list_double2_pane_vc_ParamLimits

0xa65c,	// (0x00060d4a) list_double2_pane_vc

0xa65c,	// (0x00060d4a) list_double_graphic_heading_pane_vc_ParamLimits

0xa65c,	// (0x00060d4a) list_double_graphic_heading_pane_vc

0xa65c,	// (0x00060d4a) list_double_graphic_pane_vc_ParamLimits

0xa65c,	// (0x00060d4a) list_double_graphic_pane_vc

0xa65c,	// (0x00060d4a) list_double_heading_pane_vc_ParamLimits

0xa65c,	// (0x00060d4a) list_double_heading_pane_vc

0xa681,	// (0x00060d6f) list_double_large_graphic_pane_vc_ParamLimits

0xa681,	// (0x00060d6f) list_double_large_graphic_pane_vc

0xa65c,	// (0x00060d4a) list_double_number_pane_vc_ParamLimits

0xa65c,	// (0x00060d4a) list_double_number_pane_vc

0xa65c,	// (0x00060d4a) list_double_pane_vc_ParamLimits

0xa65c,	// (0x00060d4a) list_double_pane_vc

0xa65c,	// (0x00060d4a) list_double_time_pane_vc_ParamLimits

0xa65c,	// (0x00060d4a) list_double_time_pane_vc

0xa65c,	// (0x00060d4a) list_setting_number_pane_vc_ParamLimits

0xa65c,	// (0x00060d4a) list_setting_number_pane_vc

0xa65c,	// (0x00060d4a) list_setting_pane_vc_ParamLimits

0xa65c,	// (0x00060d4a) list_setting_pane_vc

0xa65c,	// (0x00060d4a) list_single_graphic_heading_pane_vc_ParamLimits

0xa65c,	// (0x00060d4a) list_single_graphic_heading_pane_vc

0xa65c,	// (0x00060d4a) list_single_heading_pane_vc_ParamLimits

0xa65c,	// (0x00060d4a) list_single_heading_pane_vc

0xa69f,	// (0x00060d8d) list_single_number_heading_pane_vc_ParamLimits

0xa69f,	// (0x00060d8d) list_single_number_heading_pane_vc

0x3d10,	// (0x0005a3fe) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3d10,	// (0x0005a3fe) list_double_graphic_heading_pane_vc_g1

0x128d,	// (0x0005797b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x128d,	// (0x0005797b) list_double_graphic_heading_pane_vc_g2

0x76f3,	// (0x0005dde1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x76f3,	// (0x0005dde1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x000660b7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x000660b7) list_double_graphic_heading_pane_vc_g

0x3d1c,	// (0x0005a40a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3d1c,	// (0x0005a40a) list_double_graphic_heading_pane_vc_t1

0x3d30,	// (0x0005a41e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3d30,	// (0x0005a41e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x000660be) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x000660be) list_double_graphic_heading_pane_vc_t

0x90f9,	// (0x0005f7e7) list_setting_pane_vc_g1_ParamLimits

0x90f9,	// (0x0005f7e7) list_setting_pane_vc_g1

0x9105,	// (0x0005f7f3) list_setting_pane_vc_g2_ParamLimits

0x9105,	// (0x0005f7f3) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x00065ead) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x00065ead) list_setting_pane_vc_g

0x3d48,	// (0x0005a436) list_setting_pane_vc_t1_ParamLimits

0x3d48,	// (0x0005a436) list_setting_pane_vc_t1

0x3d64,	// (0x0005a452) list_setting_pane_vc_t2_ParamLimits

0x3d64,	// (0x0005a452) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x00066101) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x00066101) list_setting_pane_vc_t

0x3cf1,	// (0x0005a3df) set_value_pane_cp_vc_ParamLimits

0x3cf1,	// (0x0005a3df) set_value_pane_cp_vc

0x128d,	// (0x0005797b) list_single_number_heading_pane_vc_g1_ParamLimits

0x128d,	// (0x0005797b) list_single_number_heading_pane_vc_g1

0x76f3,	// (0x0005dde1) list_single_number_heading_pane_vc_g2_ParamLimits

0x76f3,	// (0x0005dde1) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065ea3) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065ea3) list_single_number_heading_pane_vc_g

0x3d7e,	// (0x0005a46c) list_single_number_heading_pane_vc_t1_ParamLimits

0x3d7e,	// (0x0005a46c) list_single_number_heading_pane_vc_t1

0x3d94,	// (0x0005a482) list_single_number_heading_pane_vc_t2_ParamLimits

0x3d94,	// (0x0005a482) list_single_number_heading_pane_vc_t2

0x3da6,	// (0x0005a494) list_single_number_heading_pane_vc_t3_ParamLimits

0x3da6,	// (0x0005a494) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x00066106) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x00066106) list_single_number_heading_pane_vc_t

0x3db8,	// (0x0005a4a6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3db8,	// (0x0005a4a6) list_single_graphic_heading_pane_vc_g1

0x128d,	// (0x0005797b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x128d,	// (0x0005797b) list_single_graphic_heading_pane_vc_g4

0x76f3,	// (0x0005dde1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x76f3,	// (0x0005dde1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa1f,	// (0x0006610d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa1f,	// (0x0006610d) list_single_graphic_heading_pane_vc_g

0x3c6f,	// (0x0005a35d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3c6f,	// (0x0005a35d) list_single_graphic_heading_pane_vc_t1

0x3dc4,	// (0x0005a4b2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3dc4,	// (0x0005a4b2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x00066114) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x00066114) list_single_graphic_heading_pane_vc_t

0x128d,	// (0x0005797b) list_double2_pane_vc_g1_ParamLimits

0x128d,	// (0x0005797b) list_double2_pane_vc_g1

0x76f3,	// (0x0005dde1) list_double2_pane_vc_g2_ParamLimits

0x76f3,	// (0x0005dde1) list_double2_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065ea3) list_double2_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065ea3) list_double2_pane_vc_g

0x3dd6,	// (0x0005a4c4) list_double2_pane_vc_t1_ParamLimits

0x3dd6,	// (0x0005a4c4) list_double2_pane_vc_t1

0xae16,	// (0x00061504) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xae16,	// (0x00061504) list_double2_large_graphic_pane_vc_g1

0x4320,	// (0x0005aa0e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4320,	// (0x0005aa0e) list_double2_large_graphic_pane_vc_g2

0x432c,	// (0x0005aa1a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x432c,	// (0x0005aa1a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x00066119) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x00066119) list_double2_large_graphic_pane_vc_g

0x3b34,	// (0x0005a222) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3b34,	// (0x0005a222) list_double2_large_graphic_pane_vc_t1

0xae22,	// (0x00061510) list_double_time_pane_vc_g1_ParamLimits

0xae22,	// (0x00061510) list_double_time_pane_vc_g1

0xae2e,	// (0x0006151c) list_double_time_pane_vc_g2_ParamLimits

0xae2e,	// (0x0006151c) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x00066120) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x00066120) list_double_time_pane_vc_g

0x3dee,	// (0x0005a4dc) list_double_time_pane_vc_t1_ParamLimits

0x3dee,	// (0x0005a4dc) list_double_time_pane_vc_t1

0x3e12,	// (0x0005a500) list_double_time_pane_vc_t2_ParamLimits

0x3e12,	// (0x0005a500) list_double_time_pane_vc_t2

0x3e61,	// (0x0005a54f) list_double_time_pane_vc_t3_ParamLimits

0x3e61,	// (0x0005a54f) list_double_time_pane_vc_t3

0x3e73,	// (0x0005a561) list_double_time_pane_vc_t4_ParamLimits

0x3e73,	// (0x0005a561) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x00066125) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x00066125) list_double_time_pane_vc_t

0x128d,	// (0x0005797b) list_double_pane_vc_g1_ParamLimits

0x128d,	// (0x0005797b) list_double_pane_vc_g1

0x76f3,	// (0x0005dde1) list_double_pane_vc_g2_ParamLimits

0x76f3,	// (0x0005dde1) list_double_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065ea3) list_double_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065ea3) list_double_pane_vc_g

0x3e87,	// (0x0005a575) list_double_pane_vc_t1_ParamLimits

0x3e87,	// (0x0005a575) list_double_pane_vc_t1

0x3e9b,	// (0x0005a589) list_double_pane_vc_t2_ParamLimits

0x3e9b,	// (0x0005a589) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0006612e) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0006612e) list_double_pane_vc_t

0x128d,	// (0x0005797b) list_double_number_pane_vc_g1_ParamLimits

0x128d,	// (0x0005797b) list_double_number_pane_vc_g1

0x76f3,	// (0x0005dde1) list_double_number_pane_vc_g2_ParamLimits

0x76f3,	// (0x0005dde1) list_double_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065ea3) list_double_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065ea3) list_double_number_pane_vc_g

0x3eb3,	// (0x0005a5a1) list_double_number_pane_vc_t1_ParamLimits

0x3eb3,	// (0x0005a5a1) list_double_number_pane_vc_t1

0x3e87,	// (0x0005a575) list_double_number_pane_vc_t2_ParamLimits

0x3e87,	// (0x0005a575) list_double_number_pane_vc_t2

0x3ec5,	// (0x0005a5b3) list_double_number_pane_vc_t3_ParamLimits

0x3ec5,	// (0x0005a5b3) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x00066133) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x00066133) list_double_number_pane_vc_t

0xae3a,	// (0x00061528) list_double_large_graphic_pane_vc_g1_ParamLimits

0xae3a,	// (0x00061528) list_double_large_graphic_pane_vc_g1

0xae56,	// (0x00061544) list_double_large_graphic_pane_vc_g2_ParamLimits

0xae56,	// (0x00061544) list_double_large_graphic_pane_vc_g2

0xae6a,	// (0x00061558) list_double_large_graphic_pane_vc_g3_ParamLimits

0xae6a,	// (0x00061558) list_double_large_graphic_pane_vc_g3

0x3edd,	// (0x0005a5cb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3edd,	// (0x0005a5cb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0006613a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0006613a) list_double_large_graphic_pane_vc_g

0x3eec,	// (0x0005a5da) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3eec,	// (0x0005a5da) list_double_large_graphic_pane_vc_t1

0x3f08,	// (0x0005a5f6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3f08,	// (0x0005a5f6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x00066143) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x00066143) list_double_large_graphic_pane_vc_t

0x128d,	// (0x0005797b) list_double_heading_pane_vc_g1_ParamLimits

0x128d,	// (0x0005797b) list_double_heading_pane_vc_g1

0x76f3,	// (0x0005dde1) list_double_heading_pane_vc_g2_ParamLimits

0x76f3,	// (0x0005dde1) list_double_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x00065ea3) list_double_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x00065ea3) list_double_heading_pane_vc_g

0x3f2a,	// (0x0005a618) list_double_heading_pane_vc_t1_ParamLimits

0x3f2a,	// (0x0005a618) list_double_heading_pane_vc_t1

0x3f3e,	// (0x0005a62c) list_double_heading_pane_vc_t2_ParamLimits

0x3f3e,	// (0x0005a62c) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x00066148) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x00066148) list_double_heading_pane_vc_t

0x3f56,	// (0x0005a644) list_double_graphic_pane_vc_g1_ParamLimits

0x3f56,	// (0x0005a644) list_double_graphic_pane_vc_g1

0xae79,	// (0x00061567) list_double_graphic_pane_vc_g2_ParamLimits

0xae79,	// (0x00061567) list_double_graphic_pane_vc_g2

0x128d,	// (0x0005797b) list_double_graphic_pane_vc_g3_ParamLimits

0x128d,	// (0x0005797b) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0006614d) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0006614d) list_double_graphic_pane_vc_g

0x3f69,	// (0x0005a657) list_double_graphic_pane_vc_t1_ParamLimits

0x3f69,	// (0x0005a657) list_double_graphic_pane_vc_t1

0x3f88,	// (0x0005a676) list_double_graphic_pane_vc_t2_ParamLimits

0x3f88,	// (0x0005a676) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x00066156) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x00066156) list_double_graphic_pane_vc_t

0x520d,	// (0x0005b8fb) aid_size_cell_fastswap

0x5215,	// (0x0005b903) aid_size_cell_touch_ParamLimits

0x5215,	// (0x0005b903) aid_size_cell_touch

0x547a,	// (0x0005bb68) popup_fast_swap_wide_window_ParamLimits

0x547a,	// (0x0005bb68) popup_fast_swap_wide_window

0x5580,	// (0x0005bc6e) touch_pane_ParamLimits

0x5580,	// (0x0005bc6e) touch_pane

0xf186,	// (0x00065874) button_value_adjust_pane_cp2

0x3b64,	// (0x0005a252) button_value_adjust_pane_cp4

0x3b6c,	// (0x0005a25a) form_field_data_pane_cp2

0x6047,	// (0x0005c735) form_field_data_wide_pane_cp2

0xf494,	// (0x00065b82) bg_scroll_pane_ParamLimits

0x64e3,	// (0x0005cbd1) scroll_handle_pane_ParamLimits

0x64f7,	// (0x0005cbe5) scroll_sc2_down_pane_ParamLimits

0x64f7,	// (0x0005cbe5) scroll_sc2_down_pane

0xf4c5,	// (0x00065bb3) scroll_sc2_up_pane_ParamLimits

0xf4c5,	// (0x00065bb3) scroll_sc2_up_pane

0xb33e,	// (0x00061a2c) grid_wheel_folder_pane_g1_ParamLimits

0xb33e,	// (0x00061a2c) grid_wheel_folder_pane_g1

0x68e6,	// (0x0005cfd4) clock_nsta_pane_cp2_ParamLimits

0x68e6,	// (0x0005cfd4) clock_nsta_pane_cp2

0x69f9,	// (0x0005d0e7) listscroll_midp_pane_ParamLimits

0x6a05,	// (0x0005d0f3) midp_canvas_pane

0x18fe,	// (0x00057fec) nsta_clock_indic_pane

0x1926,	// (0x00058014) listscroll_form_pane_vc

0x192e,	// (0x0005801c) listscroll_set_pane_vc_ParamLimits

0x192e,	// (0x0005801c) listscroll_set_pane_vc

0x746e,	// (0x0005db5c) clock_nsta_pane

0x74e9,	// (0x0005dbd7) indicator_nsta_pane

0x8fef,	// (0x0005f6dd) bg_popup_sub_pane_cp2_ParamLimits

0x9003,	// (0x0005f6f1) find_pane_cp2_ParamLimits

0x9003,	// (0x0005f6f1) find_pane_cp2

0x9019,	// (0x0005f707) grid_toobar_pane_ParamLimits

0x9111,	// (0x0005f7ff) list_form_gen_pane_vc_ParamLimits

0x9111,	// (0x0005f7ff) list_form_gen_pane_vc

0x9127,	// (0x0005f815) scroll_pane_cp8_vc_ParamLimits

0x9127,	// (0x0005f815) scroll_pane_cp8_vc

0x91a3,	// (0x0005f891) data_form_wide_pane_vc_ParamLimits

0x91a3,	// (0x0005f891) data_form_wide_pane_vc

0x91af,	// (0x0005f89d) form_field_data_wide_pane_vc_g1

0x91b7,	// (0x0005f8a5) form_field_data_wide_pane_vc_t1_ParamLimits

0x91b7,	// (0x0005f8a5) form_field_data_wide_pane_vc_t1

0xf19a,	// (0x00065888) input_focus_pane_cp6_vc_ParamLimits

0xf19a,	// (0x00065888) input_focus_pane_cp6_vc

0x94e4,	// (0x0005fbd2) list_midp_pane_ParamLimits

0x94f0,	// (0x0005fbde) scroll_pane_cp16_ParamLimits

0x94f0,	// (0x0005fbde) scroll_pane_cp16

0x955a,	// (0x0005fc48) button_value_adjust_pane_ParamLimits

0x955a,	// (0x0005fc48) button_value_adjust_pane

0xa49e,	// (0x00060b8c) button_value_adjust_pane_cp6_ParamLimits

0xa49e,	// (0x00060b8c) button_value_adjust_pane_cp6

0xa5c4,	// (0x00060cb2) settings_code_pane_cp_ParamLimits

0xa5c4,	// (0x00060cb2) settings_code_pane_cp

0xe1e7,	// (0x000648d5) cell_touch_pane_g1

0xe1e7,	// (0x000648d5) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x00065dc7) cell_touch_pane_g

0xabef,	// (0x000612dd) cell_touch_pane_cp_ParamLimits

0xabef,	// (0x000612dd) cell_touch_pane_cp

0xabff,	// (0x000612ed) cell_touch_pane_ParamLimits

0xabff,	// (0x000612ed) cell_touch_pane

0xe1e7,	// (0x000648d5) scroll_sc2_down_pane_g1

0xe1e7,	// (0x000648d5) scroll_sc2_up_pane_g1

0xe1f1,	// (0x000648df) bg_set_opt_pane_cp4_vc

0xac11,	// (0x000612ff) list_set_graphic_pane_vc_g1_ParamLimits

0xac11,	// (0x000612ff) list_set_graphic_pane_vc_g1

0xac1d,	// (0x0006130b) list_set_graphic_pane_vc_g2_ParamLimits

0xac1d,	// (0x0006130b) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x000660c3) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x000660c3) list_set_graphic_pane_vc_g

0xac29,	// (0x00061317) text_primary_small_cp13_vc_ParamLimits

0xac29,	// (0x00061317) text_primary_small_cp13_vc

0xac41,	// (0x0006132f) list_set_graphic_pane_vc_ParamLimits

0xac41,	// (0x0006132f) list_set_graphic_pane_vc

0xe1f1,	// (0x000648df) input_focus_pane_cp2_vc

0xe1e7,	// (0x000648d5) setting_code_pane_vc_g1

0xe256,	// (0x00064944) setting_code_pane_vc_t1

0xac54,	// (0x00061342) set_text_pane_vc_t1_ParamLimits

0xac54,	// (0x00061342) set_text_pane_vc_t1

0xe1f1,	// (0x000648df) input_focus_pane_cp1_vc

0xac71,	// (0x0006135f) list_set_text_pane_vc

0xe1e7,	// (0x000648d5) setting_text_pane_vc_g1

0xe1f1,	// (0x000648df) bg_set_opt_pane_cp2_vc

0xe24d,	// (0x0006493b) setting_slider_graphic_pane_vc_g1

0xac7b,	// (0x00061369) setting_slider_graphic_pane_vc_t1

0xac8b,	// (0x00061379) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x000660c8) setting_slider_graphic_pane_vc_t

0xac9b,	// (0x00061389) slider_set_pane_cp_vc

0xaca3,	// (0x00061391) slider_set_pane_vc_g1

0xacac,	// (0x0006139a) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x000660cd) slider_set_pane_vc_g

0xf1f2,	// (0x000658e0) set_opt_bg_pane_g1_copy1

0xf1fa,	// (0x000658e8) set_opt_bg_pane_g2_copy1

0xacd8,	// (0x000613c6) set_opt_bg_pane_g3_copy1

0xf20a,	// (0x000658f8) set_opt_bg_pane_g4_copy1

0xf212,	// (0x00065900) set_opt_bg_pane_g5_copy1

0xf21a,	// (0x00065908) set_opt_bg_pane_g6_copy1

0xace0,	// (0x000613ce) set_opt_bg_pane_g7_copy1

0xacea,	// (0x000613d8) set_opt_bg_pane_g8_copy1

0xacf2,	// (0x000613e0) set_opt_bg_pane_g9_copy1

0xe1f1,	// (0x000648df) bg_set_opt_pane_cp_vc

0xacfa,	// (0x000613e8) setting_slider_pane_vc_t1

0xad09,	// (0x000613f7) setting_slider_pane_vc_t2

0xad19,	// (0x00061407) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x000660dc) setting_slider_pane_vc_t

0xad29,	// (0x00061417) slider_set_pane_vc

0x7841,	// (0x0005df2f) volume_set_pane_vc_g1

0x7c0a,	// (0x0005e2f8) volume_set_pane_vc_g2

0x7c13,	// (0x0005e301) volume_set_pane_vc_g3

0x7c1c,	// (0x0005e30a) volume_set_pane_vc_g4

0x7c25,	// (0x0005e313) volume_set_pane_vc_g5

0x7c2e,	// (0x0005e31c) volume_set_pane_vc_g6

0x7c37,	// (0x0005e325) volume_set_pane_vc_g7

0x7c40,	// (0x0005e32e) volume_set_pane_vc_g8

0x7c49,	// (0x0005e337) volume_set_pane_vc_g9

0x7c52,	// (0x0005e340) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x000660e3) volume_set_pane_vc_g

0xad31,	// (0x0006141f) volume_set_pane_vc

0xad3b,	// (0x00061429) button_value_adjust_pane_cp1_vc

0xad45,	// (0x00061433) list_highlight_pane_cp2_vc

0xad4e,	// (0x0006143c) list_set_pane_vc_ParamLimits

0xad4e,	// (0x0006143c) list_set_pane_vc

0xadac,	// (0x0006149a) main_pane_set_vc_t1_ParamLimits

0xadac,	// (0x0006149a) main_pane_set_vc_t1

0xadc1,	// (0x000614af) main_pane_set_vc_t2_ParamLimits

0xadc1,	// (0x000614af) main_pane_set_vc_t2

0xadd3,	// (0x000614c1) main_pane_set_vc_t3_ParamLimits

0xadd3,	// (0x000614c1) main_pane_set_vc_t3

0xade5,	// (0x000614d3) main_pane_set_vc_t4_ParamLimits

0xade5,	// (0x000614d3) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x000660f8) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x000660f8) main_pane_set_vc_t

0xadf7,	// (0x000614e5) setting_code_pane_vc_ParamLimits

0xadf7,	// (0x000614e5) setting_code_pane_vc

0xae06,	// (0x000614f4) setting_slider_graphic_pane_vc

0xae06,	// (0x000614f4) setting_slider_pane_vc

0xae06,	// (0x000614f4) setting_text_pane_vc

0xae06,	// (0x000614f4) setting_volume_pane_vc

0xae0e,	// (0x000614fc) scroll_pane_cp121_vc

0xf174,	// (0x00065862) set_content_pane_vc

0xae96,	// (0x00061584) button_value_adjust_pane_g1

0xae9f,	// (0x0006158d) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0006615b) button_value_adjust_pane_g

0xaea8,	// (0x00061596) form_field_slider_wide_pane_vc_t1_ParamLimits

0xaea8,	// (0x00061596) form_field_slider_wide_pane_vc_t1

0xaebc,	// (0x000615aa) form_field_slider_wide_pane_vc_t2_ParamLimits

0xaebc,	// (0x000615aa) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x00066160) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x00066160) form_field_slider_wide_pane_vc_t

0xe369,	// (0x00064a57) input_focus_pane_cp10_vc_ParamLimits

0xe369,	// (0x00064a57) input_focus_pane_cp10_vc

0xaeea,	// (0x000615d8) slider_cont_pane_cp1_vc_ParamLimits

0xaeea,	// (0x000615d8) slider_cont_pane_cp1_vc

0xaefc,	// (0x000615ea) slider_form_pane_g1_cp2

0xacac,	// (0x0006139a) slider_form_pane_g2_cp2

0xaf29,	// (0x00061617) form_field_slider_pane_vc_t3

0xaf37,	// (0x00061625) form_field_slider_pane_vc_t4

0xaf45,	// (0x00061633) slider_form_pane_vc_ParamLimits

0xaf45,	// (0x00061633) slider_form_pane_vc

0xaf52,	// (0x00061640) form_field_slider_pane_vc_t1_ParamLimits

0xaf52,	// (0x00061640) form_field_slider_pane_vc_t1

0xaebc,	// (0x000615aa) form_field_slider_pane_vc_t2_ParamLimits

0xaebc,	// (0x000615aa) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x00066172) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x00066172) form_field_slider_pane_vc_t

0xe369,	// (0x00064a57) input_focus_pane_cp9_vc_ParamLimits

0xe369,	// (0x00064a57) input_focus_pane_cp9_vc

0xaf6e,	// (0x0006165c) slider_cont_pane_vc_ParamLimits

0xaf6e,	// (0x0006165c) slider_cont_pane_vc

0xaf82,	// (0x00061670) list_form_graphic_pane_cp_vc_ParamLimits

0xaf82,	// (0x00061670) list_form_graphic_pane_cp_vc

0x91af,	// (0x0005f89d) form_field_popup_wide_pane_vc_g1

0xaf97,	// (0x00061685) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaf97,	// (0x00061685) form_field_popup_wide_pane_vc_t1

0xf19a,	// (0x00065888) input_focus_pane_cp8_vc_ParamLimits

0xf19a,	// (0x00065888) input_focus_pane_cp8_vc

0xafdc,	// (0x000616ca) list_form_wide_pane_vc_ParamLimits

0xafdc,	// (0x000616ca) list_form_wide_pane_vc

0xafe8,	// (0x000616d6) list_form_graphic_pane_vc_g1

0xaff0,	// (0x000616de) list_form_graphic_pane_vc_t1_ParamLimits

0xaff0,	// (0x000616de) list_form_graphic_pane_vc_t1

0xe23f,	// (0x0006492d) list_highlight_pane_cp5_vc_ParamLimits

0xe23f,	// (0x0006492d) list_highlight_pane_cp5_vc

0xb00c,	// (0x000616fa) list_form_graphic_pane_vc_ParamLimits

0xb00c,	// (0x000616fa) list_form_graphic_pane_vc

0x91af,	// (0x0005f89d) form_field_popup_pane_vc_g1

0xb022,	// (0x00061710) form_field_popup_pane_vc_t1_ParamLimits

0xb022,	// (0x00061710) form_field_popup_pane_vc_t1

0xf19a,	// (0x00065888) input_focus_pane_cp7_vc_ParamLimits

0xf19a,	// (0x00065888) input_focus_pane_cp7_vc

0xb039,	// (0x00061727) list_form_pane_vc_ParamLimits

0xb039,	// (0x00061727) list_form_pane_vc

0xb045,	// (0x00061733) data_form_pane_vc_t1_ParamLimits

0xb045,	// (0x00061733) data_form_pane_vc_t1

0xf1f2,	// (0x000658e0) input_focus_pane_vc_g1

0xf1fa,	// (0x000658e8) input_focus_pane_vc_g2

0xf202,	// (0x000658f0) input_focus_pane_vc_g3

0xf20a,	// (0x000658f8) input_focus_pane_vc_g4

0xf212,	// (0x00065900) input_focus_pane_vc_g5

0xf21a,	// (0x00065908) input_focus_pane_vc_g6

0xf222,	// (0x00065910) input_focus_pane_vc_g7

0xf22a,	// (0x00065918) input_focus_pane_vc_g8

0xf232,	// (0x00065920) input_focus_pane_vc_g9

0xe1e7,	// (0x000648d5) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00065d50) input_focus_pane_vc_g

0x91a3,	// (0x0005f891) data_form_pane_vc_ParamLimits

0x91a3,	// (0x0005f891) data_form_pane_vc

0x91af,	// (0x0005f89d) form_field_data_pane_vc_g1

0xb060,	// (0x0006174e) form_field_data_pane_vc_t1_ParamLimits

0xb060,	// (0x0006174e) form_field_data_pane_vc_t1

0xf19a,	// (0x00065888) input_focus_pane_vc_ParamLimits

0xf19a,	// (0x00065888) input_focus_pane_vc

0xb07a,	// (0x00061768) button_value_adjust_pane_cp3_vc

0xb082,	// (0x00061770) button_value_adjust_pane_cp5_vc

0xb08a,	// (0x00061778) form_field_data_pane_vc_ParamLimits

0xb08a,	// (0x00061778) form_field_data_pane_vc

0xb0a1,	// (0x0006178f) form_field_data_pane_vc_cp2

0xb0a9,	// (0x00061797) form_field_data_wide_pane_vc_ParamLimits

0xb0a9,	// (0x00061797) form_field_data_wide_pane_vc

0xb0bf,	// (0x000617ad) form_field_data_wide_pane_vc_cp2

0xb0c7,	// (0x000617b5) form_field_popup_pane_vc_ParamLimits

0xb0c7,	// (0x000617b5) form_field_popup_pane_vc

0xb0de,	// (0x000617cc) form_field_popup_wide_pane_vc_ParamLimits

0xb0de,	// (0x000617cc) form_field_popup_wide_pane_vc

0xb0f4,	// (0x000617e2) form_field_slider_pane_vc_ParamLimits

0xb0f4,	// (0x000617e2) form_field_slider_pane_vc

0xb107,	// (0x000617f5) form_field_slider_wide_pane_vc_ParamLimits

0xb107,	// (0x000617f5) form_field_slider_wide_pane_vc

0xb11a,	// (0x00061808) grid_touch_1_pane_ParamLimits

0xb11a,	// (0x00061808) grid_touch_1_pane

0xb126,	// (0x00061814) grid_touch_2_pane_ParamLimits

0xb126,	// (0x00061814) grid_touch_2_pane

0x18f0,	// (0x00057fde) touch_pane_g1_ParamLimits

0x18f0,	// (0x00057fde) touch_pane_g1

0xb13e,	// (0x0006182c) cell_app_pane_cp_wide_ParamLimits

0xb13e,	// (0x0006182c) cell_app_pane_cp_wide

0xb14f,	// (0x0006183d) grid_popup_fast_wide_pane_ParamLimits

0xb14f,	// (0x0006183d) grid_popup_fast_wide_pane

0xb163,	// (0x00061851) scroll_pane_cp19_ParamLimits

0xb163,	// (0x00061851) scroll_pane_cp19

0xe1f1,	// (0x000648df) bg_popup_window_pane_cp20

0xb177,	// (0x00061865) listscroll_popup_fast_wide_pane

0xb17f,	// (0x0006186d) grid_indicator_nsta_pane

0xb191,	// (0x0006187f) clock_nsta_pane_g1

0xb19a,	// (0x00061888) clock_nsta_pane_t1

0xb1b6,	// (0x000618a4) cell_indicator_nsta_pane_ParamLimits

0xb1b6,	// (0x000618a4) cell_indicator_nsta_pane

0xb1eb,	// (0x000618d9) cell_indicator_nsta_pane_g1

0xb1f9,	// (0x000618e7) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x00066183) cell_indicator_nsta_pane_g

0xb20b,	// (0x000618f9) clock_nsta_pane_cp

0xb214,	// (0x00061902) indicator_nsta_pane_cp

0xb21e,	// (0x0006190c) nsta_clock_indic_pane_g1

0xe27b,	// (0x00064969) grid_indicator_pane

0x6595,	// (0x0005cc83) scroll_pane_cp29

0x6835,	// (0x0005cf23) indicator_nsta_pane_cp2_ParamLimits

0x6835,	// (0x0005cf23) indicator_nsta_pane_cp2

0xe23f,	// (0x0006492d) main_apps_wheel_pane

0x93c7,	// (0x0005fab5) form_midp_field_text_pane_ParamLimits

0x9510,	// (0x0005fbfe) scroll_bar_cp050_ParamLimits

0xb277,	// (0x00061965) cell_indicator_pane_ParamLimits

0xb277,	// (0x00061965) cell_indicator_pane

0xb290,	// (0x0006197e) cell_indicator_pane_g1

0xb29a,	// (0x00061988) grid_wheel_folder_pane_ParamLimits

0xb29a,	// (0x00061988) grid_wheel_folder_pane

0xb2b0,	// (0x0006199e) list_wheel_apps_pane_ParamLimits

0xb2b0,	// (0x0006199e) list_wheel_apps_pane

0xb2c1,	// (0x000619af) main_apps_wheel_pane_g1_ParamLimits

0xb2c1,	// (0x000619af) main_apps_wheel_pane_g1

0xb2d5,	// (0x000619c3) main_apps_wheel_pane_g2_ParamLimits

0xb2d5,	// (0x000619c3) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0006619f) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0006619f) main_apps_wheel_pane_g

0xb2ed,	// (0x000619db) main_apps_wheel_pane_t1_ParamLimits

0xb2ed,	// (0x000619db) main_apps_wheel_pane_t1

0xb310,	// (0x000619fe) list_wheel_apps_pane_g1

0xb318,	// (0x00061a06) list_wheel_apps_pane_g2

0xb320,	// (0x00061a0e) list_wheel_apps_pane_g3

0xb32a,	// (0x00061a18) list_wheel_apps_pane_g4

0xb334,	// (0x00061a22) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x000661a4) list_wheel_apps_pane_g

0x166b,	// (0x00057d59) navi_icon_text_pane

0x739d,	// (0x0005da8b) aid_fill_nsta

0xb357,	// (0x00061a45) navi_icon_text_pane_g1

0xb363,	// (0x00061a51) navi_icon_text_pane_t1

0x154f,	// (0x00057c3d) list_set_graphic_pane_t1_ParamLimits

0x154f,	// (0x00057c3d) list_set_graphic_pane_t1

0x9c5b,	// (0x00060349) popup_midp_note_alarm_window_t6_ParamLimits

0x9c5b,	// (0x00060349) popup_midp_note_alarm_window_t6

0x9c6d,	// (0x0006035b) popup_midp_note_alarm_window_t7_ParamLimits

0x9c6d,	// (0x0006035b) popup_midp_note_alarm_window_t7

0x9c7f,	// (0x0006036d) popup_midp_note_alarm_window_t8_ParamLimits

0x9c7f,	// (0x0006036d) popup_midp_note_alarm_window_t8

0x9c91,	// (0x0006037f) popup_midp_note_alarm_window_t9_ParamLimits

0x9c91,	// (0x0006037f) popup_midp_note_alarm_window_t9

0x9ca3,	// (0x00060391) popup_midp_note_alarm_window_t10_ParamLimits

0x9ca3,	// (0x00060391) popup_midp_note_alarm_window_t10

0x9cb5,	// (0x000603a3) popup_midp_note_alarm_window_t11_ParamLimits

0x9cb5,	// (0x000603a3) popup_midp_note_alarm_window_t11

0x9cc7,	// (0x000603b5) scroll_pane_cp17_ParamLimits

0x9cc7,	// (0x000603b5) scroll_pane_cp17

0x7841,	// (0x0005df2f) volume_small_pane_cp_g1

0x7c5b,	// (0x0005e349) volume_small_pane_cp_g2

0x7c64,	// (0x0005e352) volume_small_pane_cp_g3

0x7c6d,	// (0x0005e35b) volume_small_pane_cp_g4

0x7c76,	// (0x0005e364) volume_small_pane_cp_g5

0x7c25,	// (0x0005e313) volume_small_pane_cp_g6

0x7c7f,	// (0x0005e36d) volume_small_pane_cp_g7

0x7c88,	// (0x0005e376) volume_small_pane_cp_g8

0x7c91,	// (0x0005e37f) volume_small_pane_cp_g9

0x7c9a,	// (0x0005e388) volume_small_pane_cp_g10

0x17d1,	// (0x00057ebf) midp_ticker_pane_g1_ParamLimits

0x17dd,	// (0x00057ecb) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00065e1c) midp_ticker_pane_g_ParamLimits

0x17e9,	// (0x00057ed7) midp_ticker_pane_t1_ParamLimits

0x73b3,	// (0x0005daa1) aid_fill_nsta_2

0x94fc,	// (0x0005fbea) list_form2_midp_pane

0xa60f,	// (0x00060cfd) midp_editing_number_pane_ParamLimits

0xa61e,	// (0x00060d0c) midp_ticker_pane_ParamLimits

0xb375,	// (0x00061a63) form2_midp_field_pane

0xb399,	// (0x00061a87) scroll_pane_cp51

0xb3b9,	// (0x00061aa7) form2_midp_button_pane_ParamLimits

0xb3b9,	// (0x00061aa7) form2_midp_button_pane

0xb3cb,	// (0x00061ab9) form2_midp_content_pane_ParamLimits

0xb3cb,	// (0x00061ab9) form2_midp_content_pane

0xb3e5,	// (0x00061ad3) form2_midp_field_choice_group_pane

0xb3ed,	// (0x00061adb) form2_midp_field_pane_g1

0xb3f5,	// (0x00061ae3) form2_midp_field_pane_g2

0xb3fd,	// (0x00061aeb) form2_midp_field_pane_g3

0xb405,	// (0x00061af3) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x000661c9) form2_midp_field_pane_g

0xb40d,	// (0x00061afb) form2_midp_gauge_slider_pane

0xb415,	// (0x00061b03) form2_midp_gauge_wait_pane

0xb41d,	// (0x00061b0b) form2_midp_image_pane_ParamLimits

0xb41d,	// (0x00061b0b) form2_midp_image_pane

0xb438,	// (0x00061b26) form2_midp_label_pane_ParamLimits

0xb438,	// (0x00061b26) form2_midp_label_pane

0xb451,	// (0x00061b3f) form2_midp_label_pane_cp_ParamLimits

0xb451,	// (0x00061b3f) form2_midp_label_pane_cp

0xb472,	// (0x00061b60) form2_midp_string_pane_ParamLimits

0xb472,	// (0x00061b60) form2_midp_string_pane

0x7ca3,	// (0x0005e391) form2_midp_text_pane_ParamLimits

0x7ca3,	// (0x0005e391) form2_midp_text_pane

0xb484,	// (0x00061b72) form2_midp_time_pane

0xb494,	// (0x00061b82) input_focus_pane_cp51_ParamLimits

0xb494,	// (0x00061b82) input_focus_pane_cp51

0xb4ac,	// (0x00061b9a) form2_midp_label_pane_t1_ParamLimits

0xb4ac,	// (0x00061b9a) form2_midp_label_pane_t1

0x7cc0,	// (0x0005e3ae) form2_mdip_text_pane_t1_ParamLimits

0x7cc0,	// (0x0005e3ae) form2_mdip_text_pane_t1

0x3fb2,	// (0x0005a6a0) form2_midp_time_pane_t1

0xb4f5,	// (0x00061be3) form2_midp_gauge_slider_pane_t1

0xb507,	// (0x00061bf5) form2_midp_gauge_slider_pane_t2

0xb519,	// (0x00061c07) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x000661d2) form2_midp_gauge_slider_pane_t

0xb52b,	// (0x00061c19) form2_midp_slider_pane

0xb537,	// (0x00061c25) form2_midp_gauge_wait_pane_t1

0xb545,	// (0x00061c33) form2_midp_wait_pane_ParamLimits

0xb545,	// (0x00061c33) form2_midp_wait_pane

0xb570,	// (0x00061c5e) list_single_2graphic_pane_cp4_ParamLimits

0xb570,	// (0x00061c5e) list_single_2graphic_pane_cp4

0x9218,	// (0x0005f906) list_single_midp_graphic_pane_cp_ParamLimits

0x9218,	// (0x0005f906) list_single_midp_graphic_pane_cp

0xe1f1,	// (0x000648df) list_highlight_pane_cp20

0xb598,	// (0x00061c86) list_single_2graphic_pane_g1_cp4

0xaaf5,	// (0x000611e3) list_single_2graphic_pane_g2_cp4

0xb5a0,	// (0x00061c8e) list_single_2graphic_pane_t1_cp4

0xe23f,	// (0x0006492d) list_highlight_pane_cp21

0xb5af,	// (0x00061c9d) list_single_midp_graphic_pane_g4_cp

0xb5be,	// (0x00061cac) list_single_midp_graphic_pane_t1_cp

0xb5d3,	// (0x00061cc1) form2_mdip_string_pane_t1_ParamLimits

0xb5d3,	// (0x00061cc1) form2_mdip_string_pane_t1

0xe1f1,	// (0x000648df) bg_wml_button_pane_cp2

0xe1e7,	// (0x000648d5) form2_midp_image_pane_g1

0x4338,	// (0x0005aa26) list_double_large_graphic_pane_g5_ParamLimits

0x4338,	// (0x0005aa26) list_double_large_graphic_pane_g5

0x69f9,	// (0x0005d0e7) midp_form_pane_ParamLimits

0xe23f,	// (0x0006492d) main_apps_wheel_pane_ParamLimits

0x7185,	// (0x0005d873) popup_preview_window_ParamLimits

0x7185,	// (0x0005d873) popup_preview_window

0x7340,	// (0x0005da2e) popup_touch_info_window_ParamLimits

0x7340,	// (0x0005da2e) popup_touch_info_window

0x735e,	// (0x0005da4c) popup_touch_menu_window_ParamLimits

0x735e,	// (0x0005da4c) popup_touch_menu_window

0xe1dd,	// (0x000648cb) bg_popup_sub_pane_cp6

0xb6da,	// (0x00061dc8) list_touch_menu_pane

0xb6e2,	// (0x00061dd0) list_single_touch_menu_pane_ParamLimits

0xb6e2,	// (0x00061dd0) list_single_touch_menu_pane

0xb6f8,	// (0x00061de6) list_single_touch_menu_pane_t1

0xe23f,	// (0x0006492d) bg_popup_sub_pane_cp7_ParamLimits

0xe23f,	// (0x0006492d) bg_popup_sub_pane_cp7

0xb706,	// (0x00061df4) heading_sub_pane

0xb70e,	// (0x00061dfc) list_touch_info_pane_ParamLimits

0xb70e,	// (0x00061dfc) list_touch_info_pane

0xb71d,	// (0x00061e0b) list_single_touch_info_pane_ParamLimits

0xb71d,	// (0x00061e0b) list_single_touch_info_pane

0xb72f,	// (0x00061e1d) list_single_touch_info_pane_t1

0xb73d,	// (0x00061e2b) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x000661e0) list_single_touch_info_pane_t

0x17ba,	// (0x00057ea8) bg_popup_heading_pane_cp

0xb74b,	// (0x00061e39) heading_sub_pane_t1

0x913d,	// (0x0005f82b) bg_popup_preview_window_pane_cp_ParamLimits

0x913d,	// (0x0005f82b) bg_popup_preview_window_pane_cp

0xb706,	// (0x00061df4) heading_preview_pane

0xb70e,	// (0x00061dfc) list_preview_pane_ParamLimits

0xb70e,	// (0x00061dfc) list_preview_pane

0xb759,	// (0x00061e47) popup_preview_window_g1

0xb71d,	// (0x00061e0b) list_single_preview_pane_ParamLimits

0xb71d,	// (0x00061e0b) list_single_preview_pane

0xb761,	// (0x00061e4f) list_single_preview_pane_g1

0xb769,	// (0x00061e57) list_single_preview_pane_t1

0xb72f,	// (0x00061e1d) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x000661e5) list_single_preview_pane_t

0xb777,	// (0x00061e65) bg_popup_heading_pane_cp2_ParamLimits

0xb777,	// (0x00061e65) bg_popup_heading_pane_cp2

0xb862,	// (0x00061f50) heading_preview_pane_g1

0xb86a,	// (0x00061f58) heading_preview_pane_t1_ParamLimits

0xb86a,	// (0x00061f58) heading_preview_pane_t1

0xe292,	// (0x00064980) soft_indicator_pane_t1_ParamLimits

0xf116,	// (0x00065804) scroll_pane_ParamLimits

0xf4b3,	// (0x00065ba1) scroll_sc2_left_pane

0xf4bc,	// (0x00065baa) scroll_sc2_right_pane

0xf4db,	// (0x00065bc9) scroll_bg_pane_g1_ParamLimits

0xf4f0,	// (0x00065bde) scroll_bg_pane_g2_ParamLimits

0xf508,	// (0x00065bf6) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x00065da7) scroll_bg_pane_g_ParamLimits

0xf4db,	// (0x00065bc9) scroll_handle_pane_g1_ParamLimits

0x1299,	// (0x00057987) scroll_handle_pane_g2_ParamLimits

0xf508,	// (0x00065bf6) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x00065dae) scroll_handle_pane_g_ParamLimits

0x6e08,	// (0x0005d4f6) popup_choice_list_window_ParamLimits

0x6e08,	// (0x0005d4f6) popup_choice_list_window

0x8ffb,	// (0x0005f6e9) choice_list_pane

0x907d,	// (0x0005f76b) cell_toolbar_pane_t1

0x90a5,	// (0x0005f793) toolbar_button_pane_ParamLimits

0xa181,	// (0x0006086f) ai_gene_pane_1_t2_ParamLimits

0xa181,	// (0x0006086f) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x00065fd6) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x00065fd6) ai_gene_pane_1_t

0xb887,	// (0x00061f75) scroll_sc2_left_pane_g1

0xb887,	// (0x00061f75) scroll_sc2_right_pane_g1

0xf51d,	// (0x00065c0b) bg_popup_sub_pane_cp10

0xb891,	// (0x00061f7f) list_choice_list_pane

0xb8aa,	// (0x00061f98) list_single_choice_list_pane_ParamLimits

0xb8aa,	// (0x00061f98) list_single_choice_list_pane

0xb8bd,	// (0x00061fab) list_single_choice_list_pane_g1

0x622e,	// (0x0005c91c) list_single_choice_list_pane_t1_ParamLimits

0x622e,	// (0x0005c91c) list_single_choice_list_pane_t1

0xb8c5,	// (0x00061fb3) choice_list_pane_g1

0xb8cd,	// (0x00061fbb) choice_list_pane_t1

0xe1dd,	// (0x000648cb) input_focus_pane_cp11

0xf428,	// (0x00065b16) title_pane_stacon_g2_ParamLimits

0xf428,	// (0x00065b16) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x00065d8d) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x00065d8d) title_pane_stacon_g

0x17ba,	// (0x00057ea8) cursor_press_pane

0x6eb0,	// (0x0005d59e) popup_fep_hwr_window_ParamLimits

0x6eb0,	// (0x0005d59e) popup_fep_hwr_window

0x6f28,	// (0x0005d616) popup_fep_vkb_window_ParamLimits

0x6f28,	// (0x0005d616) popup_fep_vkb_window

0xb8db,	// (0x00061fc9) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0006620e) fep_vkb_side_pane_g_ParamLimits

0x7d17,	// (0x0005e405) fep_hwr_candidate_pane_ParamLimits

0x7d17,	// (0x0005e405) fep_hwr_candidate_pane

0x7d41,	// (0x0005e42f) fep_hwr_side_pane_ParamLimits

0x7d41,	// (0x0005e42f) fep_hwr_side_pane

0x7d61,	// (0x0005e44f) fep_hwr_top_pane_ParamLimits

0x7d61,	// (0x0005e44f) fep_hwr_top_pane

0x7d79,	// (0x0005e467) fep_hwr_write_pane_ParamLimits

0x7d79,	// (0x0005e467) fep_hwr_write_pane

0xfb20,	// (0x0006620e) fep_vkb_side_pane_g

0xb8e3,	// (0x00061fd1) fep_hwr_top_pane_g1

0xb8f5,	// (0x00061fe3) fep_hwr_top_pane_g2

0x7db3,	// (0x0005e4a1) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x000661ea) fep_hwr_top_pane_g

0x7dc8,	// (0x0005e4b6) fep_hwr_top_text_pane

0x135c,	// (0x00057a4a) fep_hwr_top_text_pane_g1

0xb92b,	// (0x00062019) fep_hwr_top_text_pane_t1

0x7ebe,	// (0x0005e5ac) fep_hwr_candidate_pane_g1

0xbb70,	// (0x0006225e) fep_vkb_keypad_pane_g3_ParamLimits

0xbb70,	// (0x0006225e) fep_vkb_keypad_pane_g3

0xbb98,	// (0x00062286) fep_vkb_keypad_pane_g4_ParamLimits

0xbb98,	// (0x00062286) fep_vkb_keypad_pane_g4

0xbc07,	// (0x000622f5) fep_vkb_bottom_pane_g2_ParamLimits

0xbc07,	// (0x000622f5) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x00066215) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x00066215) fep_vkb_bottom_pane_g

0xb887,	// (0x00061f75) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0006621f) cell_vkb_side_pane_g

0xbc92,	// (0x00062380) cell_vkb_side_pane_t1

0xbca0,	// (0x0006238e) cell_vkb_side_pane_t1_copy1

0xb887,	// (0x00061f75) bg_fep_vkb_candidate_pane_g2

0xbdcc,	// (0x000624ba) cell_vkb_candidate_pane_ParamLimits

0xb939,	// (0x00062027) aid_size_cell_vkb_ParamLimits

0xb939,	// (0x00062027) aid_size_cell_vkb

0xbdcc,	// (0x000624ba) cell_vkb_candidate_pane

0x7ee5,	// (0x0005e5d3) bg_popup_fep_shadow_pane_g1

0xb9c7,	// (0x000620b5) fep_vkb_bottom_pane_ParamLimits

0xb9c7,	// (0x000620b5) fep_vkb_bottom_pane

0xb9fd,	// (0x000620eb) fep_vkb_candidate_pane_ParamLimits

0xb9fd,	// (0x000620eb) fep_vkb_candidate_pane

0xba19,	// (0x00062107) fep_vkb_keypad_pane_ParamLimits

0xba19,	// (0x00062107) fep_vkb_keypad_pane

0xba58,	// (0x00062146) fep_vkb_side_pane_ParamLimits

0xba58,	// (0x00062146) fep_vkb_side_pane

0xba94,	// (0x00062182) fep_vkb_top_pane_ParamLimits

0xba94,	// (0x00062182) fep_vkb_top_pane

0xbac9,	// (0x000621b7) fep_vkb_top_pane_g1_ParamLimits

0xbac9,	// (0x000621b7) fep_vkb_top_pane_g1

0xbad8,	// (0x000621c6) fep_vkb_top_pane_g2_ParamLimits

0xbad8,	// (0x000621c6) fep_vkb_top_pane_g2

0xbae7,	// (0x000621d5) fep_vkb_top_pane_g3_ParamLimits

0xbae7,	// (0x000621d5) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x00066205) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x00066205) fep_vkb_top_pane_g

0xbb05,	// (0x000621f3) fep_vkb_top_text_pane_ParamLimits

0xbb05,	// (0x000621f3) fep_vkb_top_text_pane

0xbb16,	// (0x00062204) fep_vkb_side_pane_g1_ParamLimits

0xbb16,	// (0x00062204) fep_vkb_side_pane_g1

0xbb5f,	// (0x0006224d) grid_vkb_side_pane_ParamLimits

0xbb5f,	// (0x0006224d) grid_vkb_side_pane

0x7eed,	// (0x0005e5db) bg_popup_fep_shadow_pane_g2

0x7ef6,	// (0x0005e5e4) bg_popup_fep_shadow_pane_g3

0x7efe,	// (0x0005e5ec) bg_popup_fep_shadow_pane_g4

0x7f07,	// (0x0005e5f5) bg_popup_fep_shadow_pane_g5

0x7f11,	// (0x0005e5ff) bg_popup_fep_shadow_pane_g6

0x7f19,	// (0x0005e607) bg_popup_fep_shadow_pane_g7

0xf20a,	// (0x000658f8) bg_popup_fep_shadow_pane_g8

0xbbb6,	// (0x000622a4) grid_vkb_keypad_number_pane_ParamLimits

0xbbb6,	// (0x000622a4) grid_vkb_keypad_number_pane

0xbbc6,	// (0x000622b4) grid_vkb_keypad_pane_ParamLimits

0xbbc6,	// (0x000622b4) grid_vkb_keypad_pane

0xbbec,	// (0x000622da) fep_vkb_bottom_pane_g1_ParamLimits

0xbbec,	// (0x000622da) fep_vkb_bottom_pane_g1

0xbc15,	// (0x00062303) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbc15,	// (0x00062303) grid_vkb_keypad_bottom_left_pane

0xbc2a,	// (0x00062318) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbc2a,	// (0x00062318) grid_vkb_keypad_bottom_right_pane

0xbc3f,	// (0x0006232d) fep_vkb_top_text_pane_g1

0xbc5a,	// (0x00062348) fep_vkb_top_text_pane_t1

0xbc6f,	// (0x0006235d) cell_vkb_side_pane_ParamLimits

0xbc6f,	// (0x0006235d) cell_vkb_side_pane

0xb887,	// (0x00061f75) cell_vkb_side_pane_g1

0xbcae,	// (0x0006239c) cell_vkb_keypad_pane_ParamLimits

0xbcae,	// (0x0006239c) cell_vkb_keypad_pane

0xbd23,	// (0x00062411) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x00066232) bg_popup_fep_shadow_pane_g

0x7f2b,	// (0x0005e619) cell_hwr_side_pane_g1

0x7f2b,	// (0x0005e619) cell_hwr_side_pane_g2

0xbd2d,	// (0x0006241b) cell_vkb_keypad_pane_t1

0xbd3b,	// (0x00062429) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbd3b,	// (0x00062429) cell_vkb_keypad_bottom_left_pane

0xbd58,	// (0x00062446) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbd58,	// (0x00062446) cell_vkb_keypad_bottom_right_pane

0xb887,	// (0x00061f75) cell_vkb_keypad_bottom_left_pane_g1

0xb887,	// (0x00061f75) cell_vkb_keypad_bottom_right_pane_g1

0xbd91,	// (0x0006247f) cell_vkb_keypad_number_pane_ParamLimits

0xbd91,	// (0x0006247f) cell_vkb_keypad_number_pane

0xbdb0,	// (0x0006249e) cell_vkb_keypad_number_pane_g1

0xbdba,	// (0x000624a8) cell_vkb_keypad_number_pane_g2

0xbdc3,	// (0x000624b1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x00066224) cell_vkb_keypad_number_pane_g

0xbd2d,	// (0x0006241b) cell_vkb_keypad_number_pane_t1

0xbde7,	// (0x000624d5) fep_vkb_candidate_pane_g1

0x0001,

0xfb57,	// (0x00066245) cell_hwr_side_pane_g

0xbe00,	// (0x000624ee) cell_hwr_side_pane_t1

0x7f35,	// (0x0005e623) cell_hwr_side_pane_t1_copy1

0x7f43,	// (0x0005e631) cell_hwr_candidate_pane_g1

0x7f72,	// (0x0005e660) cell_hwr_candidate_pane_t1

0xb887,	// (0x00061f75) cell_vkb_candidate_pane_g2

0xbe65,	// (0x00062553) cell_vkb_candidate_pane_t1

0x7cde,	// (0x0005e3cc) bg_popup_fep_shadow_pane_ParamLimits

0x7cde,	// (0x0005e3cc) bg_popup_fep_shadow_pane

0x7d93,	// (0x0005e481) bg_fep_hwr_top_pane_g4

0xb907,	// (0x00061ff5) bg_hwr_side_pane_g1_ParamLimits

0xb907,	// (0x00061ff5) bg_hwr_side_pane_g1

0x7e04,	// (0x0005e4f2) cell_hwr_side_pane_ParamLimits

0x7e04,	// (0x0005e4f2) cell_hwr_side_pane

0x7e3f,	// (0x0005e52d) fep_hwr_write_pane_g1_ParamLimits

0x7e3f,	// (0x0005e52d) fep_hwr_write_pane_g1

0x7e4c,	// (0x0005e53a) fep_hwr_write_pane_g2_ParamLimits

0x7e4c,	// (0x0005e53a) fep_hwr_write_pane_g2

0x7e59,	// (0x0005e547) fep_hwr_write_pane_g3_ParamLimits

0x7e59,	// (0x0005e547) fep_hwr_write_pane_g3

0x7e67,	// (0x0005e555) fep_hwr_write_pane_g4_ParamLimits

0x7e67,	// (0x0005e555) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x000661f1) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x000661f1) fep_hwr_write_pane_g

0x7d93,	// (0x0005e481) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7d93,	// (0x0005e481) bg_fep_hwr_candidate_pane_g2

0x7e7c,	// (0x0005e56a) cell_hwr_candidate_pane_ParamLimits

0x7e7c,	// (0x0005e56a) cell_hwr_candidate_pane

0x7ebe,	// (0x0005e5ac) fep_hwr_candidate_pane_g1_ParamLimits

0xb967,	// (0x00062055) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb967,	// (0x00062055) bg_popup_fep_shadow_pane_cp2

0xbaf7,	// (0x000621e5) fep_vkb_top_pane_g4_ParamLimits

0xbaf7,	// (0x000621e5) fep_vkb_top_pane_g4

0xbb3d,	// (0x0006222b) fep_vkb_side_pane_g2_ParamLimits

0xbb3d,	// (0x0006222b) fep_vkb_side_pane_g2

0x5f46,	// (0x0005c634) list_setting_pane_t4_ParamLimits

0x5f46,	// (0x0005c634) list_setting_pane_t4

0x5fe0,	// (0x0005c6ce) list_setting_number_pane_t5_ParamLimits

0x5fe0,	// (0x0005c6ce) list_setting_number_pane_t5

0x65c4,	// (0x0005ccb2) list_double_heading_pane_cp2_ParamLimits

0x65c4,	// (0x0005ccb2) list_double_heading_pane_cp2

0x2356,	// (0x00058a44) list_double_heading_pane_g1_cp2_ParamLimits

0x2356,	// (0x00058a44) list_double_heading_pane_g1_cp2

0xbe73,	// (0x00062561) list_double_heading_pane_g2_cp2_ParamLimits

0xbe73,	// (0x00062561) list_double_heading_pane_g2_cp2

0xbe87,	// (0x00062575) list_double_heading_pane_t1_cp2_ParamLimits

0xbe87,	// (0x00062575) list_double_heading_pane_t1_cp2

0xbe9d,	// (0x0006258b) list_double_heading_pane_t2_cp2_ParamLimits

0xbe9d,	// (0x0006258b) list_double_heading_pane_t2_cp2

0xe1d5,	// (0x000648c3) aid_value_unit2

0x54c6,	// (0x0005bbb4) popup_preview_fixed_window

0xe377,	// (0x00064a65) bg_popup_preview_window_pane_cp02

0xbeaf,	// (0x0006259d) list_preview_fixed_pane

0xbef5,	// (0x000625e3) list_empty_pane_fp_ParamLimits

0xbef5,	// (0x000625e3) list_empty_pane_fp

0xbef5,	// (0x000625e3) list_single_cale_day_pane_fp_ParamLimits

0xbef5,	// (0x000625e3) list_single_cale_day_pane_fp

0xbef5,	// (0x000625e3) list_single_graphic_heading_pane_fp_ParamLimits

0xbef5,	// (0x000625e3) list_single_graphic_heading_pane_fp

0xbef5,	// (0x000625e3) list_single_graphic_pane_fp_ParamLimits

0xbef5,	// (0x000625e3) list_single_graphic_pane_fp

0xbef5,	// (0x000625e3) list_single_heading_pane_fp_ParamLimits

0xbef5,	// (0x000625e3) list_single_heading_pane_fp

0xbef5,	// (0x000625e3) list_single_pane_fp_ParamLimits

0xbef5,	// (0x000625e3) list_single_pane_fp

0xbf0b,	// (0x000625f9) list_single_pane_fp_g1_ParamLimits

0xbf0b,	// (0x000625f9) list_single_pane_fp_g1

0x2362,	// (0x00058a50) list_single_pane_fp_g2_ParamLimits

0x2362,	// (0x00058a50) list_single_pane_fp_g2

0xbf17,	// (0x00062605) list_single_pane_fp_g3_ParamLimits

0xbf17,	// (0x00062605) list_single_pane_fp_g3

0xbf2b,	// (0x00062619) list_single_pane_fp_g4_ParamLimits

0xbf2b,	// (0x00062619) list_single_pane_fp_g4

0x0003,

0xfb6a,	// (0x00066258) list_single_pane_fp_g_ParamLimits

0xfb6a,	// (0x00066258) list_single_pane_fp_g

0x3fc5,	// (0x0005a6b3) list_single_pane_fp_t1_ParamLimits

0x3fc5,	// (0x0005a6b3) list_single_pane_fp_t1

0x3fdc,	// (0x0005a6ca) list_single_graphic_pane_fp_g1_ParamLimits

0x3fdc,	// (0x0005a6ca) list_single_graphic_pane_fp_g1

0xbf0b,	// (0x000625f9) list_single_graphic_pane_fp_g2_ParamLimits

0xbf0b,	// (0x000625f9) list_single_graphic_pane_fp_g2

0x2362,	// (0x00058a50) list_single_graphic_pane_fp_g3_ParamLimits

0x2362,	// (0x00058a50) list_single_graphic_pane_fp_g3

0xbf17,	// (0x00062605) list_single_graphic_pane_fp_g4_ParamLimits

0xbf17,	// (0x00062605) list_single_graphic_pane_fp_g4

0xbf2b,	// (0x00062619) list_single_graphic_pane_fp_g5_ParamLimits

0xbf2b,	// (0x00062619) list_single_graphic_pane_fp_g5

0x0004,

0xfb73,	// (0x00066261) list_single_graphic_pane_fp_g_ParamLimits

0xfb73,	// (0x00066261) list_single_graphic_pane_fp_g

0x3fe8,	// (0x0005a6d6) list_single_graphic_pane_fp_t1_ParamLimits

0x3fe8,	// (0x0005a6d6) list_single_graphic_pane_fp_t1

0x3fdc,	// (0x0005a6ca) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3fdc,	// (0x0005a6ca) list_single_graphic_heading_pane_fp_g1

0xbf0b,	// (0x000625f9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbf0b,	// (0x000625f9) list_single_graphic_heading_pane_fp_g2

0x2362,	// (0x00058a50) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2362,	// (0x00058a50) list_single_graphic_heading_pane_fp_g3

0xbf17,	// (0x00062605) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbf17,	// (0x00062605) list_single_graphic_heading_pane_fp_g4

0xbf2b,	// (0x00062619) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbf2b,	// (0x00062619) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb73,	// (0x00066261) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x00066261) list_single_graphic_heading_pane_fp_g

0x3ffe,	// (0x0005a6ec) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3ffe,	// (0x0005a6ec) list_single_graphic_heading_pane_fp_t1

0x4014,	// (0x0005a702) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4014,	// (0x0005a702) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0006626c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0006626c) list_single_graphic_heading_pane_fp_t

0x4026,	// (0x0005a714) list_single_cale_day_pane_fp_g1_ParamLimits

0x4026,	// (0x0005a714) list_single_cale_day_pane_fp_g1

0xbf37,	// (0x00062625) list_single_cale_day_pane_fp_g2_ParamLimits

0xbf37,	// (0x00062625) list_single_cale_day_pane_fp_g2

0xb78d,	// (0x00061e7b) list_single_cale_day_pane_fp_g3_ParamLimits

0xb78d,	// (0x00061e7b) list_single_cale_day_pane_fp_g3

0xb7b5,	// (0x00061ea3) list_single_cale_day_pane_fp_g4_ParamLimits

0xb7b5,	// (0x00061ea3) list_single_cale_day_pane_fp_g4

0xb7d9,	// (0x00061ec7) list_single_cale_day_pane_fp_g5_ParamLimits

0xb7d9,	// (0x00061ec7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb83,	// (0x00066271) list_single_cale_day_pane_fp_g_ParamLimits

0xfb83,	// (0x00066271) list_single_cale_day_pane_fp_g

0x405e,	// (0x0005a74c) list_single_cale_day_pane_fp_t1_ParamLimits

0x405e,	// (0x0005a74c) list_single_cale_day_pane_fp_t1

0x4084,	// (0x0005a772) list_single_cale_day_pane_fp_t2_ParamLimits

0x4084,	// (0x0005a772) list_single_cale_day_pane_fp_t2

0x409d,	// (0x0005a78b) list_single_cale_day_pane_fp_t3_ParamLimits

0x409d,	// (0x0005a78b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8e,	// (0x0006627c) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8e,	// (0x0006627c) list_single_cale_day_pane_fp_t

0xbf0b,	// (0x000625f9) list_empty_pane_fp_g1_ParamLimits

0xbf0b,	// (0x000625f9) list_empty_pane_fp_g1

0x40b6,	// (0x0005a7a4) list_empty_pane_fp_t1

0x40c4,	// (0x0005a7b2) list_empty_pane_fp_t2

0x0001,

0xfb95,	// (0x00066283) list_empty_pane_fp_t

0xbf0b,	// (0x000625f9) list_single_heading_pane_fp_g1_ParamLimits

0xbf0b,	// (0x000625f9) list_single_heading_pane_fp_g1

0x2362,	// (0x00058a50) list_single_heading_pane_fp_g2_ParamLimits

0x2362,	// (0x00058a50) list_single_heading_pane_fp_g2

0xbf17,	// (0x00062605) list_single_heading_pane_fp_g3_ParamLimits

0xbf17,	// (0x00062605) list_single_heading_pane_fp_g3

0x0002,

0xfb9a,	// (0x00066288) list_single_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x00066288) list_single_heading_pane_fp_g

0x40d2,	// (0x0005a7c0) list_single_heading_pane_fp_t1_ParamLimits

0x40d2,	// (0x0005a7c0) list_single_heading_pane_fp_t1

0x40e4,	// (0x0005a7d2) list_single_heading_pane_fp_t2_ParamLimits

0x40e4,	// (0x0005a7d2) list_single_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0006628f) list_single_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0006628f) list_single_heading_pane_fp_t

0x6294,	// (0x0005c982) aid_size_cell_fast

0xe34c,	// (0x00064a3a) soft_indicator_pane_cp1_t1

0x629d,	// (0x0005c98b) cell_app_pane_cp2_ParamLimits

0x629d,	// (0x0005c98b) cell_app_pane_cp2

0x7d00,	// (0x0005e3ee) fep_hwr_candidate_drop_down_list_pane

0x7ed8,	// (0x0005e5c6) fep_hwr_candidate_pane_g3_ParamLimits

0x7ed8,	// (0x0005e5c6) fep_hwr_candidate_pane_g3

0x3347,	// (0x00059a35) fep_hwr_candidate_pane_g4_ParamLimits

0x3347,	// (0x00059a35) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x000661fe) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x000661fe) fep_hwr_candidate_pane_g

0xb9ec,	// (0x000620da) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb9ec,	// (0x000620da) fep_vkb_candidate_drop_down_list_pane

0xbdef,	// (0x000624dd) fep_vkb_candidate_pane_g3

0xbdf7,	// (0x000624e5) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0006622b) fep_vkb_candidate_pane_g

0x7f43,	// (0x0005e631) cell_hwr_candidate_pane_g1_ParamLimits

0x7f51,	// (0x0005e63f) cell_hwr_candidate_pane_g3_ParamLimits

0x7f51,	// (0x0005e63f) cell_hwr_candidate_pane_g3

0xbe0e,	// (0x000624fc) cell_hwr_candidate_pane_g4_ParamLimits

0xbe0e,	// (0x000624fc) cell_hwr_candidate_pane_g4

0x0002,

0xfb5c,	// (0x0006624a) cell_hwr_candidate_pane_g_ParamLimits

0xfb5c,	// (0x0006624a) cell_hwr_candidate_pane_g

0xbe2f,	// (0x0006251d) cell_vkb_candidate_pane_g3_ParamLimits

0xbe2f,	// (0x0006251d) cell_vkb_candidate_pane_g3

0xbe4a,	// (0x00062538) cell_vkb_candidate_pane_g4_ParamLimits

0xbe4a,	// (0x00062538) cell_vkb_candidate_pane_g4

0xbf43,	// (0x00062631) cell_app_pane_cp2_g1_ParamLimits

0xbf43,	// (0x00062631) cell_app_pane_cp2_g1

0xbf61,	// (0x0006264f) cell_app_pane_cp2_g2_ParamLimits

0xbf61,	// (0x0006264f) cell_app_pane_cp2_g2

0x0001,

0xfba6,	// (0x00066294) cell_app_pane_cp2_g_ParamLimits

0xfba6,	// (0x00066294) cell_app_pane_cp2_g

0xbf6d,	// (0x0006265b) cell_app_pane_cp2_t1_ParamLimits

0xbf6d,	// (0x0006265b) cell_app_pane_cp2_t1

0xf19a,	// (0x00065888) grid_highlight_pane_cp1_ParamLimits

0xf19a,	// (0x00065888) grid_highlight_pane_cp1

0x7f90,	// (0x0005e67e) cell_hwr_candidate_pane_cp1_ParamLimits

0x7f90,	// (0x0005e67e) cell_hwr_candidate_pane_cp1

0x7f43,	// (0x0005e631) fep_hwr_candidate_drop_down_list_pane_g1

0x7faf,	// (0x0005e69d) fep_hwr_candidate_drop_down_list_pane_g2

0x7fbc,	// (0x0005e6aa) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x00066299) fep_hwr_candidate_drop_down_list_pane_g

0x7fc9,	// (0x0005e6b7) fep_hwr_candidate_drop_down_list_scroll_pane

0x7fd2,	// (0x0005e6c0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7fd2,	// (0x0005e6c0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7fdf,	// (0x0005e6cd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7fdf,	// (0x0005e6cd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7fec,	// (0x0005e6da) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7fec,	// (0x0005e6da) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7ff9,	// (0x0005e6e7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7ff9,	// (0x0005e6e7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8014,	// (0x0005e702) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8014,	// (0x0005e702) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x802f,	// (0x0005e71d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x802f,	// (0x0005e71d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x804a,	// (0x0005e738) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x804a,	// (0x0005e738) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8065,	// (0x0005e753) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8065,	// (0x0005e753) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x000662a0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x000662a0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbf7f,	// (0x0006266d) cell_vkb_candidate_pane_cp1_ParamLimits

0xbf7f,	// (0x0006266d) cell_vkb_candidate_pane_cp1

0xbaf7,	// (0x000621e5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbaf7,	// (0x000621e5) fep_vkb_candidate_drop_down_list_pane_g1

0xbf9f,	// (0x0006268d) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbf9f,	// (0x0006268d) fep_vkb_candidate_drop_down_list_pane_g2

0xbfac,	// (0x0006269a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbfac,	// (0x0006269a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x000662b1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x000662b1) fep_vkb_candidate_drop_down_list_pane_g

0xbfb9,	// (0x000626a7) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbfb9,	// (0x000626a7) fep_vkb_candidate_drop_down_list_scroll_pane

0xbfc6,	// (0x000626b4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbfc6,	// (0x000626b4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbfd3,	// (0x000626c1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbfd3,	// (0x000626c1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbfdf,	// (0x000626cd) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbfdf,	// (0x000626cd) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbfeb,	// (0x000626d9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbfeb,	// (0x000626d9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc00c,	// (0x000626fa) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc00c,	// (0x000626fa) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc02d,	// (0x0006271b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc02d,	// (0x0006271b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc04e,	// (0x0006273c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc04e,	// (0x0006273c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc06f,	// (0x0006275d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc06f,	// (0x0006275d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x000662b8) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x000662b8) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x55e0,	// (0x0005bcce) title_pane_g1_ParamLimits

0x55ed,	// (0x0005bcdb) title_pane_g2_ParamLimits

0xf529,	// (0x00065c17) title_pane_g_ParamLimits

0x1354,	// (0x00057a42) aid_call2_pane

0x134c,	// (0x00057a3a) aid_call_pane

0x135c,	// (0x00057a4a) popup_clock_analogue_window_g1

0x135c,	// (0x00057a4a) popup_clock_analogue_window_g2

0x65a5,	// (0x0005cc93) popup_clock_analogue_window_g3

0x65ae,	// (0x0005cc9c) popup_clock_analogue_window_g4

0xe1e7,	// (0x000648d5) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x00065dbc) popup_clock_analogue_window_g

0x65b6,	// (0x0005cca4) popup_clock_analogue_window_t1

0x6604,	// (0x0005ccf2) clock_digital_number_pane_ParamLimits

0x6604,	// (0x0005ccf2) clock_digital_number_pane

0x6610,	// (0x0005ccfe) clock_digital_number_pane_cp02_ParamLimits

0x6610,	// (0x0005ccfe) clock_digital_number_pane_cp02

0x661c,	// (0x0005cd0a) clock_digital_number_pane_cp03_ParamLimits

0x661c,	// (0x0005cd0a) clock_digital_number_pane_cp03

0x6628,	// (0x0005cd16) clock_digital_number_pane_cp04_ParamLimits

0x6628,	// (0x0005cd16) clock_digital_number_pane_cp04

0x6634,	// (0x0005cd22) clock_digital_separator_pane_ParamLimits

0x6634,	// (0x0005cd22) clock_digital_separator_pane

0x6640,	// (0x0005cd2e) popup_clock_digital_window_t1_ParamLimits

0x6640,	// (0x0005cd2e) popup_clock_digital_window_t1

0xe1e7,	// (0x000648d5) clock_digital_number_pane_g1

0xe1e7,	// (0x000648d5) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x00065dc7) clock_digital_number_pane_g

0xe1e7,	// (0x000648d5) clock_digital_separator_pane_g1

0xe1e7,	// (0x000648d5) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x00065dc7) clock_digital_separator_pane_g

0x739d,	// (0x0005da8b) aid_fill_nsta_ParamLimits

0x74e9,	// (0x0005dbd7) indicator_nsta_pane_ParamLimits

0x7662,	// (0x0005dd50) popup_clock_analogue_window

0x7662,	// (0x0005dd50) popup_clock_digital_window

0xb17f,	// (0x0006186d) grid_indicator_nsta_pane_ParamLimits

0xb1a8,	// (0x00061896) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0006617e) clock_nsta_pane_t

0x64d0,	// (0x0005cbbe) aid_size_max_handle

0x64da,	// (0x0005cbc8) aid_size_min_handle

0x17ba,	// (0x00057ea8) editor_scroll_pane

0xc08a,	// (0x00062778) ex_editor_pane

0xf2cc,	// (0x000659ba) scroll_pane_cp13

0xf142,	// (0x00065830) scroll_pane_cp14

0x138b,	// (0x00057a79) scroll_pane_cp36

0x65d8,	// (0x0005ccc6) list_single_graphic_hl_pane_cp2_ParamLimits

0x65d8,	// (0x0005ccc6) list_single_graphic_hl_pane_cp2

0x7ae6,	// (0x0005e1d4) list_single_graphic_hl_pane_ParamLimits

0x7ae6,	// (0x0005e1d4) list_single_graphic_hl_pane

0x8080,	// (0x0005e76e) aid_size_min_hl_cp1

0xc092,	// (0x00062780) list_highlight_pane_cp34_ParamLimits

0xc092,	// (0x00062780) list_highlight_pane_cp34

0xc0a3,	// (0x00062791) list_single_graphic_hl_pane_g1_ParamLimits

0xc0a3,	// (0x00062791) list_single_graphic_hl_pane_g1

0x8089,	// (0x0005e777) list_single_graphic_hl_pane_g2_ParamLimits

0x8089,	// (0x0005e777) list_single_graphic_hl_pane_g2

0x8089,	// (0x0005e777) list_single_graphic_hl_pane_g3_ParamLimits

0x8089,	// (0x0005e777) list_single_graphic_hl_pane_g3

0x8095,	// (0x0005e783) list_single_graphic_hl_pane_g4_ParamLimits

0x8095,	// (0x0005e783) list_single_graphic_hl_pane_g4

0x80a1,	// (0x0005e78f) list_single_graphic_hl_pane_g5_ParamLimits

0x80a1,	// (0x0005e78f) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x000662c9) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x000662c9) list_single_graphic_hl_pane_g

0x80b5,	// (0x0005e7a3) list_single_graphic_hl_pane_t1_ParamLimits

0x80b5,	// (0x0005e7a3) list_single_graphic_hl_pane_t1

0xc0b0,	// (0x0006279e) aid_size_min_hl_cp2

0xc0b9,	// (0x000627a7) list_highlight_pane_cp34_cp2_ParamLimits

0xc0b9,	// (0x000627a7) list_highlight_pane_cp34_cp2

0xc0a3,	// (0x00062791) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc0a3,	// (0x00062791) list_single_graphic_hl_pane_g1_cp2

0xc0c6,	// (0x000627b4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc0c6,	// (0x000627b4) list_single_graphic_hl_pane_g2_cp2

0xc0d2,	// (0x000627c0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc0d2,	// (0x000627c0) list_single_graphic_hl_pane_g3_cp2

0x128d,	// (0x0005797b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x128d,	// (0x0005797b) list_single_graphic_hl_pane_g4_cp2

0xc0e0,	// (0x000627ce) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc0e0,	// (0x000627ce) list_single_graphic_hl_pane_g5_cp2

0x6c7d,	// (0x0005d36b) control_pane_g4_ParamLimits

0x6c7d,	// (0x0005d36b) control_pane_g4

0xf51d,	// (0x00065c0b) bg_popup_sub_pane_cp10_ParamLimits

0xb891,	// (0x00061f7f) list_choice_list_pane_ParamLimits

0xb8a0,	// (0x00061f8e) scroll_pane_cp23

0xe377,	// (0x00064a65) bg_popup_preview_window_pane_cp02_ParamLimits

0xbeaf,	// (0x0006259d) list_preview_fixed_pane_ParamLimits

0xbec5,	// (0x000625b3) list_preview_fixed_pane_cp_ParamLimits

0xbec5,	// (0x000625b3) list_preview_fixed_pane_cp

0xbed1,	// (0x000625bf) popup_preview_fixed_window_g1_ParamLimits

0xbed1,	// (0x000625bf) popup_preview_fixed_window_g1

0xbedd,	// (0x000625cb) popup_preview_fixed_window_g2_ParamLimits

0xbedd,	// (0x000625cb) popup_preview_fixed_window_g2

0x0002,

0xfb63,	// (0x00066251) popup_preview_fixed_window_g_ParamLimits

0xfb63,	// (0x00066251) popup_preview_fixed_window_g

0x63ac,	// (0x0005ca9a) aid_navi_side_left_pane_ParamLimits

0x63c1,	// (0x0005caaf) aid_navi_side_right_pane_ParamLimits

0x63d9,	// (0x0005cac7) navi_icon_pane_stacon_ParamLimits

0x63ed,	// (0x0005cadb) navi_navi_pane_stacon_ParamLimits

0x63d9,	// (0x0005cac7) navi_text_pane_stacon_ParamLimits

0x5395,	// (0x0005ba83) main_text_info_pane

0xc10a,	// (0x000627f8) listscroll_text_info_pane

0xc112,	// (0x00062800) list_text_info_pane_ParamLimits

0xc112,	// (0x00062800) list_text_info_pane

0xc121,	// (0x0006280f) scroll_pane_cp24_ParamLimits

0xc121,	// (0x0006280f) scroll_pane_cp24

0xc13f,	// (0x0006282d) list_text_info_pane_t1_ParamLimits

0xc13f,	// (0x0006282d) list_text_info_pane_t1

0x6e24,	// (0x0005d512) popup_fast_swap2_window_ParamLimits

0x6e24,	// (0x0005d512) popup_fast_swap2_window

0xc173,	// (0x00062861) aid_size_cell_fast2

0xe1dd,	// (0x000648cb) bg_popup_window_pane_cp17

0x9530,	// (0x0005fc1e) heading_pane_cp2

0x9538,	// (0x0005fc26) listscroll_fast2_pane

0xc17d,	// (0x0006286b) grid_fast2_pane

0xc187,	// (0x00062875) listscroll_fast2_pane_g1

0xc18f,	// (0x0006287d) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x000662d4) listscroll_fast2_pane_g

0xf2cc,	// (0x000659ba) scroll_pane_cp26

0xc199,	// (0x00062887) cell_fast2_pane_ParamLimits

0xc199,	// (0x00062887) cell_fast2_pane

0xc1ae,	// (0x0006289c) cell_fast2_pane_g1

0xc1b7,	// (0x000628a5) cell_fast2_pane_g2

0xc1c0,	// (0x000628ae) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x000662d9) cell_fast2_pane_g

0xe4e2,	// (0x00064bd0) grid_highlight_pane_cp9

0x6dec,	// (0x0005d4da) main_eswt_pane_ParamLimits

0x6dec,	// (0x0005d4da) main_eswt_pane

0xc136,	// (0x00062824) list_single_text_info_pane

0xc1c8,	// (0x000628b6) eswt_ctrl_button_pane

0xc1c8,	// (0x000628b6) eswt_ctrl_canvas_pane

0xc1d0,	// (0x000628be) eswt_ctrl_combo_pane

0xc1c8,	// (0x000628b6) eswt_ctrl_default_pane

0xc1c8,	// (0x000628b6) eswt_ctrl_label_pane

0xc1d8,	// (0x000628c6) eswt_ctrl_wait_pane

0xc1e0,	// (0x000628ce) eswt_shell_pane

0xe1dd,	// (0x000648cb) listscroll_eswt_app_pane

0xc200,	// (0x000628ee) popup_eswt_tasktip_window_ParamLimits

0xc200,	// (0x000628ee) popup_eswt_tasktip_window

0x913d,	// (0x0005f82b) bg_popup_window_pane_cp18

0xc211,	// (0x000628ff) eswt_control_pane_g1_ParamLimits

0xc211,	// (0x000628ff) eswt_control_pane_g1

0xc21e,	// (0x0006290c) eswt_control_pane_g2_ParamLimits

0xc21e,	// (0x0006290c) eswt_control_pane_g2

0xc22b,	// (0x00062919) eswt_control_pane_g3_ParamLimits

0xc22b,	// (0x00062919) eswt_control_pane_g3

0xc238,	// (0x00062926) eswt_control_pane_g4_ParamLimits

0xc238,	// (0x00062926) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x000662e0) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x000662e0) eswt_control_pane_g

0xf19a,	// (0x00065888) bg_button_pane_ParamLimits

0xf19a,	// (0x00065888) bg_button_pane

0xe4f7,	// (0x00064be5) common_borders_pane_copy2_ParamLimits

0xe4f7,	// (0x00064be5) common_borders_pane_copy2

0xc245,	// (0x00062933) control_button_pane_g1_ParamLimits

0xc245,	// (0x00062933) control_button_pane_g1

0xc251,	// (0x0006293f) control_button_pane_g2_ParamLimits

0xc251,	// (0x0006293f) control_button_pane_g2

0xc25d,	// (0x0006294b) control_button_pane_g3_ParamLimits

0xc25d,	// (0x0006294b) control_button_pane_g3

0x0002,

0xfbfb,	// (0x000662e9) control_button_pane_g_ParamLimits

0xfbfb,	// (0x000662e9) control_button_pane_g

0xc271,	// (0x0006295f) control_button_pane_t1

0xc27f,	// (0x0006296d) control_button_pane_t2

0x0001,

0xfc02,	// (0x000662f0) control_button_pane_t

0x90b1,	// (0x0005f79f) bg_button_pane_g1

0x90c1,	// (0x0005f7af) bg_button_pane_g2

0x90b9,	// (0x0005f7a7) bg_button_pane_g3

0x90d1,	// (0x0005f7bf) bg_button_pane_g4

0x90c9,	// (0x0005f7b7) bg_button_pane_g5

0x90d9,	// (0x0005f7c7) bg_button_pane_g6

0x90e1,	// (0x0005f7cf) bg_button_pane_g7

0x90f1,	// (0x0005f7df) bg_button_pane_g8

0x90e9,	// (0x0005f7d7) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00065f2a) bg_button_pane_g

0xb777,	// (0x00061e65) common_borders_pane_ParamLimits

0xb777,	// (0x00061e65) common_borders_pane

0xc211,	// (0x000628ff) eswt_control_pane_g1_copy1_ParamLimits

0xc211,	// (0x000628ff) eswt_control_pane_g1_copy1

0xc21e,	// (0x0006290c) eswt_control_pane_g2_copy1_ParamLimits

0xc21e,	// (0x0006290c) eswt_control_pane_g2_copy1

0xc22b,	// (0x00062919) eswt_control_pane_g3_copy1_ParamLimits

0xc22b,	// (0x00062919) eswt_control_pane_g3_copy1

0xc238,	// (0x00062926) eswt_control_pane_g4_copy1_ParamLimits

0xc238,	// (0x00062926) eswt_control_pane_g4_copy1

0xb887,	// (0x00061f75) bg_eswt_ctrl_canvas_pane_g1

0xb777,	// (0x00061e65) common_borders_pane_cp2_ParamLimits

0xb777,	// (0x00061e65) common_borders_pane_cp2

0xb777,	// (0x00061e65) common_borders_pane_cp3_ParamLimits

0xb777,	// (0x00061e65) common_borders_pane_cp3

0xc28d,	// (0x0006297b) separator_horizontal_pane

0xc295,	// (0x00062983) separator_vertical_pane

0xc211,	// (0x000628ff) eswt_control_pane_g1_copy2_ParamLimits

0xc211,	// (0x000628ff) eswt_control_pane_g1_copy2

0xc21e,	// (0x0006290c) eswt_control_pane_g2_copy2_ParamLimits

0xc21e,	// (0x0006290c) eswt_control_pane_g2_copy2

0xc22b,	// (0x00062919) eswt_control_pane_g3_copy2_ParamLimits

0xc22b,	// (0x00062919) eswt_control_pane_g3_copy2

0xc238,	// (0x00062926) eswt_control_pane_g4_copy2_ParamLimits

0xc238,	// (0x00062926) eswt_control_pane_g4_copy2

0xe1dd,	// (0x000648cb) common_borders_pane_cp4

0xc29e,	// (0x0006298c) separator_horizontal_pane_g1

0xc2a7,	// (0x00062995) separator_horizontal_pane_g2

0xc2b0,	// (0x0006299e) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x000662f5) separator_horizontal_pane_g

0xc211,	// (0x000628ff) eswt_control_pane_g1_copy3_ParamLimits

0xc211,	// (0x000628ff) eswt_control_pane_g1_copy3

0xc21e,	// (0x0006290c) eswt_control_pane_g2_copy3_ParamLimits

0xc21e,	// (0x0006290c) eswt_control_pane_g2_copy3

0xc22b,	// (0x00062919) eswt_control_pane_g3_copy3_ParamLimits

0xc22b,	// (0x00062919) eswt_control_pane_g3_copy3

0xc238,	// (0x00062926) eswt_control_pane_g4_copy3_ParamLimits

0xc238,	// (0x00062926) eswt_control_pane_g4_copy3

0xe1dd,	// (0x000648cb) common_borders_pane_cp5

0xc2b9,	// (0x000629a7) separator_vertical_pane_g1

0xc2c2,	// (0x000629b0) separator_vertical_pane_g2

0xc2cb,	// (0x000629b9) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x000662fc) separator_vertical_pane_g

0xc211,	// (0x000628ff) eswt_control_pane_g1_copy4_ParamLimits

0xc211,	// (0x000628ff) eswt_control_pane_g1_copy4

0xc21e,	// (0x0006290c) eswt_control_pane_g2_copy4_ParamLimits

0xc21e,	// (0x0006290c) eswt_control_pane_g2_copy4

0xc22b,	// (0x00062919) eswt_control_pane_g3_copy4_ParamLimits

0xc22b,	// (0x00062919) eswt_control_pane_g3_copy4

0xc238,	// (0x00062926) eswt_control_pane_g4_copy4_ParamLimits

0xc238,	// (0x00062926) eswt_control_pane_g4_copy4

0xc2d4,	// (0x000629c2) eswt_ctrl_combo_button_pane

0xc2dc,	// (0x000629ca) eswt_ctrl_input_pane

0xc2e4,	// (0x000629d2) popup_choice_list_window_cp70

0xc2ec,	// (0x000629da) eswt_ctrl_input_pane_t1

0xe1dd,	// (0x000648cb) input_focus_pane_cp70

0xb777,	// (0x00061e65) bg_button_pane_cp70_ParamLimits

0xb777,	// (0x00061e65) bg_button_pane_cp70

0xc2fa,	// (0x000629e8) eswt_ctrl_combo_button_pane_g1

0xc302,	// (0x000629f0) wait_bar_pane_cp70

0x913d,	// (0x0005f82b) bg_popup_window_pane_cp70_ParamLimits

0x913d,	// (0x0005f82b) bg_popup_window_pane_cp70

0xc30a,	// (0x000629f8) popup_eswt_tasktip_window_t1

0xc320,	// (0x00062a0e) wait_bar_pane_cp71_ParamLimits

0xc320,	// (0x00062a0e) wait_bar_pane_cp71

0xc32c,	// (0x00062a1a) grid_eswt_app_pane

0xf4b3,	// (0x00065ba1) scroll_pane_cp70

0xc335,	// (0x00062a23) cell_eswt_app_pane_ParamLimits

0xc335,	// (0x00062a23) cell_eswt_app_pane

0xc365,	// (0x00062a53) cell_eswt_app_pane_g1_ParamLimits

0xc365,	// (0x00062a53) cell_eswt_app_pane_g1

0xc394,	// (0x00062a82) cell_eswt_app_pane_g2_ParamLimits

0xc394,	// (0x00062a82) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x00066303) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x00066303) cell_eswt_app_pane_g

0xc3b8,	// (0x00062aa6) cell_eswt_app_pane_t1_ParamLimits

0xc3b8,	// (0x00062aa6) cell_eswt_app_pane_t1

0xc3ea,	// (0x00062ad8) grid_highlight_pane_cp70_ParamLimits

0xc3ea,	// (0x00062ad8) grid_highlight_pane_cp70

0x16c0,	// (0x00057dae) set_content_pane_g1

0x6c13,	// (0x0005d301) status_small_volume_pane

0x80cb,	// (0x0005e7b9) status_small_volume_pane_g1

0x80d3,	// (0x0005e7c1) volume_small2_pane

0x80dc,	// (0x0005e7ca) volume_small2_pane_g1

0x80e5,	// (0x0005e7d3) volume_small2_pane_g2

0x80ee,	// (0x0005e7dc) volume_small2_pane_g3

0x80f7,	// (0x0005e7e5) volume_small2_pane_g4

0x8100,	// (0x0005e7ee) volume_small2_pane_g5

0x8109,	// (0x0005e7f7) volume_small2_pane_g6

0x8112,	// (0x0005e800) volume_small2_pane_g7

0x811b,	// (0x0005e809) volume_small2_pane_g8

0x8124,	// (0x0005e812) volume_small2_pane_g9

0x812d,	// (0x0005e81b) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x00066308) volume_small2_pane_g

0xbc3f,	// (0x0006232d) fep_vkb_top_text_pane_g1_ParamLimits

0xbc5a,	// (0x00062348) fep_vkb_top_text_pane_t1_ParamLimits

0xbee9,	// (0x000625d7) popup_preview_fixed_window_g3_ParamLimits

0xbee9,	// (0x000625d7) popup_preview_fixed_window_g3

0x72d3,	// (0x0005d9c1) popup_toolbar_trans_pane

0xa47b,	// (0x00060b69) aid_height_set_list_ParamLimits

0xa48c,	// (0x00060b7a) aid_size_parent_ParamLimits

0xf51d,	// (0x00065c0b) list_highlight_pane_cp2_ParamLimits

0x16c0,	// (0x00057dae) set_content_pane_g1_ParamLimits

0x7b04,	// (0x0005e1f2) list_single_image_pane_ParamLimits

0x7b04,	// (0x0005e1f2) list_single_image_pane

0xc3f6,	// (0x00062ae4) aid_size_cell_image_ParamLimits

0xc3f6,	// (0x00062ae4) aid_size_cell_image

0xc403,	// (0x00062af1) grid_single_image_pane_ParamLimits

0xc403,	// (0x00062af1) grid_single_image_pane

0x2362,	// (0x00058a50) list_single_image_pane_g1_ParamLimits

0x2362,	// (0x00058a50) list_single_image_pane_g1

0xbf17,	// (0x00062605) list_single_image_pane_g2_ParamLimits

0xbf17,	// (0x00062605) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0006631d) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0006631d) list_single_image_pane_g

0xc40f,	// (0x00062afd) list_single_image_pane_t1_ParamLimits

0xc40f,	// (0x00062afd) list_single_image_pane_t1

0xc425,	// (0x00062b13) cell_image_list_pane_ParamLimits

0xc425,	// (0x00062b13) cell_image_list_pane

0xc439,	// (0x00062b27) cell_image_list_pane_g1

0xc442,	// (0x00062b30) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x00066322) cell_image_list_pane_g

0xc44b,	// (0x00062b39) aid_size_cell_tb_trans_pane

0xf19a,	// (0x00065888) bg_tb_trans_pane

0xc45d,	// (0x00062b4b) grid_tb_trans_pane

0x90b1,	// (0x0005f79f) bg_tb_trans_pane_g1

0x90c1,	// (0x0005f7af) bg_tb_trans_pane_g2

0x90b9,	// (0x0005f7a7) bg_tb_trans_pane_g3

0x90d1,	// (0x0005f7bf) bg_tb_trans_pane_g4

0x90c9,	// (0x0005f7b7) bg_tb_trans_pane_g5

0x90f1,	// (0x0005f7df) bg_tb_trans_pane_g6

0x90e9,	// (0x0005f7d7) bg_tb_trans_pane_g7

0x90d9,	// (0x0005f7c7) bg_tb_trans_pane_g8

0x90e1,	// (0x0005f7cf) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x00066327) bg_tb_trans_pane_g

0xc471,	// (0x00062b5f) cell_toolbar_trans_pane_ParamLimits

0xc471,	// (0x00062b5f) cell_toolbar_trans_pane

0xb887,	// (0x00061f75) cell_toolbar_trans_pane_g1

0xb37d,	// (0x00061a6b) list_form2_midp_pane_t1

0xb38b,	// (0x00061a79) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x000661c4) list_form2_midp_pane_t

0xb399,	// (0x00061a87) scroll_pane_cp51_ParamLimits

0xb555,	// (0x00061c43) form2_midp_wait_pane_g1

0xb55e,	// (0x00061c4c) form2_midp_wait_pane_g2

0xb567,	// (0x00061c55) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x000661d9) form2_midp_wait_pane_g

0xe23f,	// (0x0006492d) list_highlight_pane_cp21_ParamLimits

0xb5af,	// (0x00061c9d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb5be,	// (0x00061cac) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa69f,	// (0x00060d8d) list_single_2graphic_im_pane_ParamLimits

0xa69f,	// (0x00060d8d) list_single_2graphic_im_pane

0xc497,	// (0x00062b85) list_single_2graphic_im_pane_g1_ParamLimits

0xc497,	// (0x00062b85) list_single_2graphic_im_pane_g1

0xc4a8,	// (0x00062b96) list_single_2graphic_im_pane_g2_ParamLimits

0xc4a8,	// (0x00062b96) list_single_2graphic_im_pane_g2

0xc4b4,	// (0x00062ba2) list_single_2graphic_im_pane_g3_ParamLimits

0xc4b4,	// (0x00062ba2) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0006633a) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0006633a) list_single_2graphic_im_pane_g

0xc4d4,	// (0x00062bc2) list_single_2graphic_im_pane_t1_ParamLimits

0xc4d4,	// (0x00062bc2) list_single_2graphic_im_pane_t1

0xbef5,	// (0x000625e3) list_single_graphic_2heading_pane_fp_ParamLimits

0xbef5,	// (0x000625e3) list_single_graphic_2heading_pane_fp

0x3fdc,	// (0x0005a6ca) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3fdc,	// (0x0005a6ca) list_single_graphic_2heading_pane_fp_g1

0xbf0b,	// (0x000625f9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbf0b,	// (0x000625f9) list_single_graphic_2heading_pane_fp_g2

0x2362,	// (0x00058a50) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2362,	// (0x00058a50) list_single_graphic_2heading_pane_fp_g3

0xbf17,	// (0x00062605) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbf17,	// (0x00062605) list_single_graphic_2heading_pane_fp_g4

0xbf2b,	// (0x00062619) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbf2b,	// (0x00062619) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb73,	// (0x00066261) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb73,	// (0x00066261) list_single_graphic_2heading_pane_fp_g

0x40fa,	// (0x0005a7e8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x40fa,	// (0x0005a7e8) list_single_graphic_2heading_pane_fp_t1

0x4014,	// (0x0005a702) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4014,	// (0x0005a702) list_single_graphic_2heading_pane_fp_t2

0x4110,	// (0x0005a7fe) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4110,	// (0x0005a7fe) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x00066343) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x00066343) list_single_graphic_2heading_pane_fp_t

0xb913,	// (0x00062001) fep_hwr_write_pane_g5_ParamLimits

0xb913,	// (0x00062001) fep_hwr_write_pane_g5

0xb91f,	// (0x0006200d) fep_hwr_write_pane_g6_ParamLimits

0xb91f,	// (0x0006200d) fep_hwr_write_pane_g6

0xc1e0,	// (0x000628ce) eswt_shell_pane_ParamLimits

0x913d,	// (0x0005f82b) bg_popup_window_pane_cp18_ParamLimits

0xa3d4,	// (0x00060ac2) heading_pane_cp70

0xc30a,	// (0x000629f8) popup_eswt_tasktip_window_t1_ParamLimits

0x73f2,	// (0x0005dae0) aid_touch_tab_arrow_left

0x7401,	// (0x0005daef) aid_touch_tab_arrow_right

0x55fe,	// (0x0005bcec) title_pane_g3_ParamLimits

0x55fe,	// (0x0005bcec) title_pane_g3

0xf162,	// (0x00065850) set_value_pane_g1

0x72d3,	// (0x0005d9c1) popup_toolbar_trans_pane_ParamLimits

0xc44b,	// (0x00062b39) aid_size_cell_tb_trans_pane_ParamLimits

0xf19a,	// (0x00065888) bg_tb_trans_pane_ParamLimits

0xc45d,	// (0x00062b4b) grid_tb_trans_pane_ParamLimits

0xe377,	// (0x00064a65) cont_note_pane_ParamLimits

0xe377,	// (0x00064a65) cont_note_pane

0xe4f7,	// (0x00064be5) cont_snote2_single_text_pane_ParamLimits

0xe4f7,	// (0x00064be5) cont_snote2_single_text_pane

0xe4f7,	// (0x00064be5) cont_snote2_single_graphic_pane_ParamLimits

0xe4f7,	// (0x00064be5) cont_snote2_single_graphic_pane

0x9757,	// (0x0005fe45) cont_note_wait_pane_ParamLimits

0x9757,	// (0x0005fe45) cont_note_wait_pane

0x9757,	// (0x0005fe45) cont_note_image_pane_ParamLimits

0x9757,	// (0x0005fe45) cont_note_image_pane

0xc505,	// (0x00062bf3) popup_note2_window_g1_ParamLimits

0xc505,	// (0x00062bf3) popup_note2_window_g1

0xc536,	// (0x00062c24) popup_note2_window_t1_ParamLimits

0xc536,	// (0x00062c24) popup_note2_window_t1

0xc57b,	// (0x00062c69) popup_note2_window_t2_ParamLimits

0xc57b,	// (0x00062c69) popup_note2_window_t2

0xc5c0,	// (0x00062cae) popup_note2_window_t3_ParamLimits

0xc5c0,	// (0x00062cae) popup_note2_window_t3

0xc605,	// (0x00062cf3) popup_note2_window_t4_ParamLimits

0xc605,	// (0x00062cf3) popup_note2_window_t4

0xe3fb,	// (0x00064ae9) popup_note2_window_t5_ParamLimits

0xe3fb,	// (0x00064ae9) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0006634f) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0006634f) popup_note2_window_t

0xc634,	// (0x00062d22) popup_note2_image_window_g1_ParamLimits

0xc634,	// (0x00062d22) popup_note2_image_window_g1

0xc640,	// (0x00062d2e) popup_note2_image_window_g2_ParamLimits

0xc640,	// (0x00062d2e) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0006635a) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0006635a) popup_note2_image_window_g

0xc652,	// (0x00062d40) popup_note2_image_window_t1_ParamLimits

0xc652,	// (0x00062d40) popup_note2_image_window_t1

0xc66a,	// (0x00062d58) popup_note2_image_window_t2_ParamLimits

0xc66a,	// (0x00062d58) popup_note2_image_window_t2

0xc682,	// (0x00062d70) popup_note2_image_window_t3_ParamLimits

0xc682,	// (0x00062d70) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0006635f) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0006635f) popup_note2_image_window_t

0x9765,	// (0x0005fe53) popup_note2_wait_window_g1_ParamLimits

0x9765,	// (0x0005fe53) popup_note2_wait_window_g1

0x9771,	// (0x0005fe5f) popup_note2_wait_window_g2_ParamLimits

0x9771,	// (0x0005fe5f) popup_note2_wait_window_g2

0x977d,	// (0x0005fe6b) popup_note2_wait_window_g3_ParamLimits

0x977d,	// (0x0005fe6b) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x00065f0c) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x00065f0c) popup_note2_wait_window_g

0xc69e,	// (0x00062d8c) popup_note2_wait_window_t1_ParamLimits

0xc69e,	// (0x00062d8c) popup_note2_wait_window_t1

0xc6bc,	// (0x00062daa) popup_note2_wait_window_t2_ParamLimits

0xc6bc,	// (0x00062daa) popup_note2_wait_window_t2

0xc6da,	// (0x00062dc8) popup_note2_wait_window_t3_ParamLimits

0xc6da,	// (0x00062dc8) popup_note2_wait_window_t3

0xc6ec,	// (0x00062dda) popup_note2_wait_window_t4_ParamLimits

0xc6ec,	// (0x00062dda) popup_note2_wait_window_t4

0x0003,

0xfc78,	// (0x00066366) popup_note2_wait_window_t_ParamLimits

0xfc78,	// (0x00066366) popup_note2_wait_window_t

0xc6fe,	// (0x00062dec) wait_bar2_pane_ParamLimits

0xc6fe,	// (0x00062dec) wait_bar2_pane

0xc716,	// (0x00062e04) popup_snote2_single_text_window_g1_ParamLimits

0xc716,	// (0x00062e04) popup_snote2_single_text_window_g1

0xc73e,	// (0x00062e2c) popup_snote2_single_text_window_t1_ParamLimits

0xc73e,	// (0x00062e2c) popup_snote2_single_text_window_t1

0xc78a,	// (0x00062e78) popup_snote2_single_text_window_t2_ParamLimits

0xc78a,	// (0x00062e78) popup_snote2_single_text_window_t2

0xc7d6,	// (0x00062ec4) popup_snote2_single_text_window_t3_ParamLimits

0xc7d6,	// (0x00062ec4) popup_snote2_single_text_window_t3

0xc817,	// (0x00062f05) popup_snote2_single_text_window_t4_ParamLimits

0xc817,	// (0x00062f05) popup_snote2_single_text_window_t4

0xc84d,	// (0x00062f3b) popup_snote2_single_text_window_t5_ParamLimits

0xc84d,	// (0x00062f3b) popup_snote2_single_text_window_t5

0x0004,

0xfc81,	// (0x0006636f) popup_snote2_single_text_window_t_ParamLimits

0xfc81,	// (0x0006636f) popup_snote2_single_text_window_t

0xc878,	// (0x00062f66) popup_snote2_single_graphic_window_g1_ParamLimits

0xc878,	// (0x00062f66) popup_snote2_single_graphic_window_g1

0xc8a0,	// (0x00062f8e) popup_snote2_single_graphic_window_g2_ParamLimits

0xc8a0,	// (0x00062f8e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8c,	// (0x0006637a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8c,	// (0x0006637a) popup_snote2_single_graphic_window_g

0xc8c8,	// (0x00062fb6) popup_snote2_single_graphic_window_t1_ParamLimits

0xc8c8,	// (0x00062fb6) popup_snote2_single_graphic_window_t1

0xc914,	// (0x00063002) popup_snote2_single_graphic_window_t2_ParamLimits

0xc914,	// (0x00063002) popup_snote2_single_graphic_window_t2

0xc7d6,	// (0x00062ec4) popup_snote2_single_graphic_window_t3_ParamLimits

0xc7d6,	// (0x00062ec4) popup_snote2_single_graphic_window_t3

0xc817,	// (0x00062f05) popup_snote2_single_graphic_window_t4_ParamLimits

0xc817,	// (0x00062f05) popup_snote2_single_graphic_window_t4

0xc84d,	// (0x00062f3b) popup_snote2_single_graphic_window_t5_ParamLimits

0xc84d,	// (0x00062f3b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc91,	// (0x0006637f) popup_snote2_single_graphic_window_t_ParamLimits

0xfc91,	// (0x0006637f) popup_snote2_single_graphic_window_t

0xb256,	// (0x00061944) clock_nsta_pane_cp2_t1

0xb256,	// (0x00061944) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0006619a) clock_nsta_pane_cp2_t

0x3b98,	// (0x0005a286) form_field_data_wide_pane_g1_ParamLimits

0xf1a8,	// (0x00065896) form_field_data_wide_pane_g2_ParamLimits

0xf1a8,	// (0x00065896) form_field_data_wide_pane_g2

0xf1b4,	// (0x000658a2) form_field_data_wide_pane_g3_ParamLimits

0xf1b4,	// (0x000658a2) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x00065d3f) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x00065d3f) form_field_data_wide_pane_g

0xb132,	// (0x00061820) grid_touch_3_pane_ParamLimits

0xb132,	// (0x00061820) grid_touch_3_pane

0xc960,	// (0x0006304e) cell_touch_3_pane_ParamLimits

0xc960,	// (0x0006304e) cell_touch_3_pane

0xb887,	// (0x00061f75) cell_touch_3_pane_g1

0xb887,	// (0x00061f75) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0006621f) cell_touch_3_pane_g

0xe42d,	// (0x00064b1b) cont_query_data_pane

0xe435,	// (0x00064b23) cont_query_data_pane_cp1

0xc98e,	// (0x0006307c) button_value_adjust_pane_cp7

0xc996,	// (0x00063084) query_popup_pane_cp3

0x13bd,	// (0x00057aab) bg_popup_sub_pane_cp22_ParamLimits

0x66ba,	// (0x0005cda8) navi_navi_volume_pane_cp2

0x66d2,	// (0x0005cdc0) popup_side_volume_key_window_g2

0x66de,	// (0x0005cdcc) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x00065dd5) popup_side_volume_key_window_g

0x66f8,	// (0x0005cde6) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x00065ddc) popup_side_volume_key_window_t

0x69a6,	// (0x0005d094) popup_side_volume_key_window_ParamLimits

0x5d9b,	// (0x0005c489) list_double_graphic_pane_g4_ParamLimits

0x5d9b,	// (0x0005c489) list_double_graphic_pane_g4

0xa6de,	// (0x00060dcc) list_single_2heading_msg_pane_ParamLimits

0xa6de,	// (0x00060dcc) list_single_2heading_msg_pane

0xb7fd,	// (0x00061eeb) list_single_2heading_msg_pane_g1_ParamLimits

0xb7fd,	// (0x00061eeb) list_single_2heading_msg_pane_g1

0x5bcf,	// (0x0005c2bd) list_single_2heading_msg_pane_g2_ParamLimits

0x5bcf,	// (0x0005c2bd) list_single_2heading_msg_pane_g2

0xb809,	// (0x00061ef7) list_single_2heading_msg_pane_g3_ParamLimits

0xb809,	// (0x00061ef7) list_single_2heading_msg_pane_g3

0xb815,	// (0x00061f03) list_single_2heading_msg_pane_g4_ParamLimits

0xb815,	// (0x00061f03) list_single_2heading_msg_pane_g4

0x0003,

0xfc9c,	// (0x0006638a) list_single_2heading_msg_pane_g_ParamLimits

0xfc9c,	// (0x0006638a) list_single_2heading_msg_pane_g

0x8136,	// (0x0005e824) list_single_2heading_msg_pane_t1_ParamLimits

0x8136,	// (0x0005e824) list_single_2heading_msg_pane_t1

0x815e,	// (0x0005e84c) list_single_2heading_msg_pane_t2_ParamLimits

0x815e,	// (0x0005e84c) list_single_2heading_msg_pane_t2

0x818d,	// (0x0005e87b) list_single_2heading_msg_pane_t3_ParamLimits

0x818d,	// (0x0005e87b) list_single_2heading_msg_pane_t3

0x4130,	// (0x0005a81e) list_single_2heading_msg_pane_t4_ParamLimits

0x4130,	// (0x0005a81e) list_single_2heading_msg_pane_t4

0x0003,

0xfca5,	// (0x00066393) list_single_2heading_msg_pane_t_ParamLimits

0xfca5,	// (0x00066393) list_single_2heading_msg_pane_t

0xe1fb,	// (0x000648e9) title_pane_g4_ParamLimits

0xe1fb,	// (0x000648e9) title_pane_g4

0x62fd,	// (0x0005c9eb) title_pane_stacon_g3_ParamLimits

0x62fd,	// (0x0005c9eb) title_pane_stacon_g3

0xc4c8,	// (0x00062bb6) list_single_2graphic_im_pane_g4_ParamLimits

0xc4c8,	// (0x00062bb6) list_single_2graphic_im_pane_g4

0xa19e,	// (0x0006088c) popup_side_volume_key_window_cp

0xaa08,	// (0x000610f6) main_idle_act2_pane_t1

0x76ff,	// (0x0005dded) toolbar_button_pane_g10

0x5bb9,	// (0x0005c2a7) popup_toolbar_window_cp1

0xb247,	// (0x00061935) clock_nsta_pane_cp_t1

0xb247,	// (0x00061935) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x00066195) clock_nsta_pane_cp_t

0x66ba,	// (0x0005cda8) navi_navi_volume_pane_cp2_ParamLimits

0x66c6,	// (0x0005cdb4) popup_side_volume_key_window_g1_ParamLimits

0x66d2,	// (0x0005cdc0) popup_side_volume_key_window_g2_ParamLimits

0x66de,	// (0x0005cdcc) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x00065dd5) popup_side_volume_key_window_g_ParamLimits

0x7cec,	// (0x0005e3da) fep_hwr_aid_pane

0x7d93,	// (0x0005e481) bg_fep_hwr_top_pane_g4_ParamLimits

0xb8e3,	// (0x00061fd1) fep_hwr_top_pane_g1_ParamLimits

0xb8f5,	// (0x00061fe3) fep_hwr_top_pane_g2_ParamLimits

0x7db3,	// (0x0005e4a1) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x000661ea) fep_hwr_top_pane_g_ParamLimits

0x7dc8,	// (0x0005e4b6) fep_hwr_top_text_pane_ParamLimits

0x9f61,	// (0x0006064f) aid_touch_tab_arrow_arrow_2

0x9f6a,	// (0x00060658) aid_touch_tab_arrow_left_2

0x7d00,	// (0x0005e3ee) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7d37,	// (0x0005e425) fep_hwr_prediction_pane

0xba4e,	// (0x0006213c) fep_vkb_prediction_pane

0xbb4b,	// (0x00062239) fep_vkb_side_pane_g3_ParamLimits

0xbb4b,	// (0x00062239) fep_vkb_side_pane_g3

0x7f43,	// (0x0005e631) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7faf,	// (0x0005e69d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7fbc,	// (0x0005e6aa) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbab,	// (0x00066299) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x81c6,	// (0x0005e8b4) fep_hwr_prediction_pane_g1

0x81d0,	// (0x0005e8be) fep_hwr_prediction_pane_g2

0x81d8,	// (0x0005e8c6) fep_hwr_prediction_pane_g3

0x81e0,	// (0x0005e8ce) fep_hwr_prediction_pane_g4

0x0003,

0xfcae,	// (0x0006639c) fep_hwr_prediction_pane_g

0xc9bb,	// (0x000630a9) fep_vkb_prediction_pane_g1

0xc9c5,	// (0x000630b3) fep_vkb_prediction_pane_g2

0xc9cd,	// (0x000630bb) fep_vkb_prediction_pane_g3

0xc9d5,	// (0x000630c3) fep_vkb_prediction_pane_g4

0x0003,

0xfcb7,	// (0x000663a5) fep_vkb_prediction_pane_g

0x7a2d,	// (0x0005e11b) slider_set_pane_g3

0x7a41,	// (0x0005e12f) slider_set_pane_g4

0x7a59,	// (0x0005e147) slider_set_pane_g5

0x7a2d,	// (0x0005e11b) slider_set_pane_g6

0x7a6f,	// (0x0005e15d) slider_set_pane_g7

0xa5ed,	// (0x00060cdb) slider_form_pane_g3

0xa5f6,	// (0x00060ce4) slider_form_pane_g4

0xa5fe,	// (0x00060cec) slider_form_pane_g5

0xa5ed,	// (0x00060cdb) slider_form_pane_g6

0xa606,	// (0x00060cf4) slider_form_pane_g7

0xacb4,	// (0x000613a2) slider_set_pane_vc_g3

0xacbd,	// (0x000613ab) slider_set_pane_vc_g4

0xacc6,	// (0x000613b4) slider_set_pane_vc_g5

0xacb4,	// (0x000613a2) slider_set_pane_vc_g6

0xaccf,	// (0x000613bd) slider_set_pane_vc_g7

0xaf05,	// (0x000615f3) slider_form_pane_vc_g1

0xaf0e,	// (0x000615fc) slider_form_pane_vc_g2

0xaf17,	// (0x00061605) slider_form_pane_vc_g3

0xaf05,	// (0x000615f3) slider_form_pane_vc_g4

0xaf20,	// (0x0006160e) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x00066167) slider_form_pane_vc_g

0x5395,	// (0x0005ba83) main_idle_act3_pane

0xc9dd,	// (0x000630cb) ai3_links_pane

0xc9e6,	// (0x000630d4) popup_ai3_data_window_ParamLimits

0xc9e6,	// (0x000630d4) popup_ai3_data_window

0xe1dd,	// (0x000648cb) grid_ai3_links_pane

0xc9fe,	// (0x000630ec) cell_ai3_links_pane_ParamLimits

0xc9fe,	// (0x000630ec) cell_ai3_links_pane

0xca16,	// (0x00063104) bg_popup_sub_pane_cp11

0xca23,	// (0x00063111) cell_ai3_links_pane_g1

0xe1dd,	// (0x000648cb) bg_popup_sub_pane_cp12

0xca48,	// (0x00063136) heading_ai3_data_pane

0xca50,	// (0x0006313e) list_ai3_gene_pane

0xca5c,	// (0x0006314a) popup_ai3_data_window_g1

0xca64,	// (0x00063152) heading_ai3_data_pane_g1

0xca6c,	// (0x0006315a) heading_ai3_data_pane_t1

0xca7a,	// (0x00063168) list_double_ai3_gene_pane_ParamLimits

0xca7a,	// (0x00063168) list_double_ai3_gene_pane

0xca87,	// (0x00063175) list_single_ai3_gene_pane_ParamLimits

0xca87,	// (0x00063175) list_single_ai3_gene_pane

0xb777,	// (0x00061e65) list_highlight_pane_cp7_ParamLimits

0xb777,	// (0x00061e65) list_highlight_pane_cp7

0xca94,	// (0x00063182) list_single_a13_gene_pane_t1_ParamLimits

0xca94,	// (0x00063182) list_single_a13_gene_pane_t1

0xcaab,	// (0x00063199) list_single_ai3_gene_pane_g1

0xcab4,	// (0x000631a2) list_single_ai3_gene_pane_g2

0x0001,

0xfcc0,	// (0x000663ae) list_single_ai3_gene_pane_g

0xcabc,	// (0x000631aa) list_double_ai3_gene_pane_g1_ParamLimits

0xcabc,	// (0x000631aa) list_double_ai3_gene_pane_g1

0xcac8,	// (0x000631b6) list_double_ai3_gene_pane_t1_ParamLimits

0xcac8,	// (0x000631b6) list_double_ai3_gene_pane_t1

0xcae4,	// (0x000631d2) list_double_ai3_gene_pane_t2_ParamLimits

0xcae4,	// (0x000631d2) list_double_ai3_gene_pane_t2

0xcaf9,	// (0x000631e7) list_double_ai3_gene_pane_t3_ParamLimits

0xcaf9,	// (0x000631e7) list_double_ai3_gene_pane_t3

0x0002,

0xfcc5,	// (0x000663b3) list_double_ai3_gene_pane_t_ParamLimits

0xfcc5,	// (0x000663b3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4126,	// (0x0005a814) aid_size_min_col_2

0xc9a7,	// (0x00063095) aid_size_min_msg_ParamLimits

0xc9a7,	// (0x00063095) aid_size_min_msg

0xbc4b,	// (0x00062339) fep_vkb_top_text_pane_g2_ParamLimits

0xbc4b,	// (0x00062339) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0006621a) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0006621a) fep_vkb_top_text_pane_g

0x5395,	// (0x0005ba83) main_hc_apps_shell_pane

0xcb16,	// (0x00063204) grid_hc_apps_pane_ParamLimits

0xcb16,	// (0x00063204) grid_hc_apps_pane

0xcb28,	// (0x00063216) list_hc_apps_pane

0xcb30,	// (0x0006321e) scroll_pane_cp37_ParamLimits

0xcb30,	// (0x0006321e) scroll_pane_cp37

0xcb3c,	// (0x0006322a) cell_hc_apps_pane_ParamLimits

0xcb3c,	// (0x0006322a) cell_hc_apps_pane

0xcbea,	// (0x000632d8) cell_hc_apps_pane_g1_ParamLimits

0xcbea,	// (0x000632d8) cell_hc_apps_pane_g1

0xcc1a,	// (0x00063308) cell_hc_apps_pane_g2_ParamLimits

0xcc1a,	// (0x00063308) cell_hc_apps_pane_g2

0xcc36,	// (0x00063324) cell_hc_apps_pane_g3_ParamLimits

0xcc36,	// (0x00063324) cell_hc_apps_pane_g3

0x0002,

0xfccc,	// (0x000663ba) cell_hc_apps_pane_g_ParamLimits

0xfccc,	// (0x000663ba) cell_hc_apps_pane_g

0xcc58,	// (0x00063346) cell_hc_apps_pane_t1_ParamLimits

0xcc58,	// (0x00063346) cell_hc_apps_pane_t1

0xe377,	// (0x00064a65) grid_highlight_pane_cp10_ParamLimits

0xe377,	// (0x00064a65) grid_highlight_pane_cp10

0xcc98,	// (0x00063386) list_single_hc_apps_pane_ParamLimits

0xcc98,	// (0x00063386) list_single_hc_apps_pane

0xccfb,	// (0x000633e9) list_single_hc_apps_pane_g1

0xb82d,	// (0x00061f1b) list_single_hc_apps_pane_g2

0x0001,

0xfcd3,	// (0x000663c1) list_single_hc_apps_pane_g

0xb846,	// (0x00061f34) list_single_hc_apps_pane_g2_copy1

0x81e8,	// (0x0005e8d6) list_single_hc_apps_pane_t1

0xe23f,	// (0x0006492d) bg_set_opt_pane_cp_ParamLimits

0x56ae,	// (0x0005bd9c) setting_slider_pane_t1_ParamLimits

0x56c7,	// (0x0005bdb5) setting_slider_pane_t2_ParamLimits

0x56e1,	// (0x0005bdcf) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00065c27) setting_slider_pane_t_ParamLimits

0x56f9,	// (0x0005bde7) slider_set_pane_ParamLimits

0x6c91,	// (0x0005d37f) control_pane_g5_ParamLimits

0x6c91,	// (0x0005d37f) control_pane_g5

0xa440,	// (0x00060b2e) slider_set_pane_g1_ParamLimits

0x7a21,	// (0x0005e10f) slider_set_pane_g2_ParamLimits

0x7a2d,	// (0x0005e11b) slider_set_pane_g3_ParamLimits

0x7a41,	// (0x0005e12f) slider_set_pane_g4_ParamLimits

0x7a59,	// (0x0005e147) slider_set_pane_g5_ParamLimits

0x7a2d,	// (0x0005e11b) slider_set_pane_g6_ParamLimits

0x7a6f,	// (0x0005e15d) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00066028) slider_set_pane_g_ParamLimits

0x166b,	// (0x00057d59) navi_icon_text_pane_ParamLimits

0x73b3,	// (0x0005daa1) aid_fill_nsta_2_ParamLimits

0x73f2,	// (0x0005dae0) aid_touch_tab_arrow_left_ParamLimits

0x7401,	// (0x0005daef) aid_touch_tab_arrow_right_ParamLimits

0x746e,	// (0x0005db5c) clock_nsta_pane_ParamLimits

0x9f43,	// (0x00060631) navi_icon_pane_g1_ParamLimits

0x9f4f,	// (0x0006063d) navi_text_pane_t1_ParamLimits

0xb357,	// (0x00061a45) navi_icon_text_pane_g1_ParamLimits

0xb363,	// (0x00061a51) navi_icon_text_pane_t1_ParamLimits

0xccfb,	// (0x000633e9) list_single_hc_apps_pane_g1_ParamLimits

0xb82d,	// (0x00061f1b) list_single_hc_apps_pane_g2_ParamLimits

0xfcd3,	// (0x000663c1) list_single_hc_apps_pane_g_ParamLimits

0xb846,	// (0x00061f34) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x81e8,	// (0x0005e8d6) list_single_hc_apps_pane_t1_ParamLimits

0x54f2,	// (0x0005bbe0) popup_toolbar2_fixed_window_ParamLimits

0x54f2,	// (0x0005bbe0) popup_toolbar2_fixed_window

0x72c9,	// (0x0005d9b7) popup_toolbar2_float_window

0xe1dd,	// (0x000648cb) bg_popup_sub_pane_cp27

0xcd14,	// (0x00063402) grid_toolbar2_float_pane

0xe1dd,	// (0x000648cb) bg_popup_sub_pane_cp26

0xcd14,	// (0x00063402) grid_toolbar2_fixed_pane

0xcd1c,	// (0x0006340a) cell_toolbar2_fixed_pane_ParamLimits

0xcd1c,	// (0x0006340a) cell_toolbar2_fixed_pane

0xcd2c,	// (0x0006341a) cell_toolbar2_fixed_pane_g1

0x719b,	// (0x0005d889) toolbar2_fixed_button_pane

0x90b1,	// (0x0005f79f) toolbar2_fixed_button_pane_g1

0x90c1,	// (0x0005f7af) toolbar2_fixed_button_pane_g2

0x90b9,	// (0x0005f7a7) toolbar2_fixed_button_pane_g3

0x90d1,	// (0x0005f7bf) toolbar2_fixed_button_pane_g4

0x90c9,	// (0x0005f7b7) toolbar2_fixed_button_pane_g5

0x90d9,	// (0x0005f7c7) toolbar2_fixed_button_pane_g6

0x90e1,	// (0x0005f7cf) toolbar2_fixed_button_pane_g7

0x90f1,	// (0x0005f7df) toolbar2_fixed_button_pane_g8

0x90e9,	// (0x0005f7d7) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00065f2a) toolbar2_fixed_button_pane_g

0xcd35,	// (0x00063423) cell_toolbar2_float_pane_ParamLimits

0xcd35,	// (0x00063423) cell_toolbar2_float_pane

0xcd46,	// (0x00063434) cell_toolbar2_float_pane_g1

0x719b,	// (0x0005d889) toolbar2_fixed_button_pane_cp

0xb9b5,	// (0x000620a3) fep_vkb_accented_list_pane_ParamLimits

0xb9b5,	// (0x000620a3) fep_vkb_accented_list_pane

0x7f23,	// (0x0005e611) bg_popup_fep_shadow_pane_g9

0x17ba,	// (0x00057ea8) bg_popup_fep_shadow_pane_cp3

0xf2b3,	// (0x000659a1) list_accented_list_pane

0xcd4f,	// (0x0006343d) list_single_accented_list_pane_ParamLimits

0xcd4f,	// (0x0006343d) list_single_accented_list_pane

0x17ba,	// (0x00057ea8) list_highlight_pane_cp10

0xcd60,	// (0x0006344e) list_single_accented_list_pane_t1

0x7219,	// (0x0005d907) popup_slider_window_ParamLimits

0x7219,	// (0x0005d907) popup_slider_window

0xc99e,	// (0x0006308c) aid_indentation_list_msg

0xce1e,	// (0x0006350c) bg_popup_window_pane_cp19

0xce86,	// (0x00063574) popup_slider_window_g1

0xcea2,	// (0x00063590) popup_slider_window_g2

0xcebe,	// (0x000635ac) popup_slider_window_g3

0x0005,

0xfcd8,	// (0x000663c6) popup_slider_window_g

0xcf24,	// (0x00063612) popup_slider_window_t1

0xcf98,	// (0x00063686) small_volume_slider_vertical_pane

0xb887,	// (0x00061f75) small_volume_slider_vertical_pane_g1

0xb887,	// (0x00061f75) small_volume_slider_vertical_pane_g2

0xcfb4,	// (0x000636a2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcea,	// (0x000663d8) small_volume_slider_vertical_pane_g

0x52b8,	// (0x0005b9a6) area_side_right_pane_ParamLimits

0x52b8,	// (0x0005b9a6) area_side_right_pane

0x8216,	// (0x0005e904) aid_size_side_button_ParamLimits

0x8216,	// (0x0005e904) aid_size_side_button

0x822a,	// (0x0005e918) grid_sctrl_middle_pane_ParamLimits

0x822a,	// (0x0005e918) grid_sctrl_middle_pane

0x8249,	// (0x0005e937) sctrl_sk_bottom_pane

0x825a,	// (0x0005e948) sctrl_sk_top_pane

0x826c,	// (0x0005e95a) aid_touch_sctrl_top

0x8279,	// (0x0005e967) bg_sctrl_sk_pane_ParamLimits

0x8279,	// (0x0005e967) bg_sctrl_sk_pane

0x8287,	// (0x0005e975) sctrl_sk_top_pane_g1

0x8294,	// (0x0005e982) sctrl_sk_top_pane_t1

0x826c,	// (0x0005e95a) aid_touch_sctrl_bottom

0x8279,	// (0x0005e967) bg_sctrl_sk_pane_cp_ParamLimits

0x8279,	// (0x0005e967) bg_sctrl_sk_pane_cp

0x82af,	// (0x0005e99d) sctrl_sk_bottom_pane_g1

0x8294,	// (0x0005e982) sctrl_sk_bottom_pane_t1

0x82b8,	// (0x0005e9a6) cell_sctrl_middle_pane_ParamLimits

0x82b8,	// (0x0005e9a6) cell_sctrl_middle_pane

0x82d3,	// (0x0005e9c1) aid_touch_sctrl_middle_ParamLimits

0x82d3,	// (0x0005e9c1) aid_touch_sctrl_middle

0x82e5,	// (0x0005e9d3) bg_sctrl_middle_pane_ParamLimits

0x82e5,	// (0x0005e9d3) bg_sctrl_middle_pane

0x7f43,	// (0x0005e631) cell_sctrl_middle_pane_g1_ParamLimits

0x7f43,	// (0x0005e631) cell_sctrl_middle_pane_g1

0x82f3,	// (0x0005e9e1) cell_sctrl_middle_pane_g2_ParamLimits

0x82f3,	// (0x0005e9e1) cell_sctrl_middle_pane_g2

0x0001,

0xfcf6,	// (0x000663e4) cell_sctrl_middle_pane_g_ParamLimits

0xfcf6,	// (0x000663e4) cell_sctrl_middle_pane_g

0x90b1,	// (0x0005f79f) bg_sctrl_middle_pane_g1

0x90b9,	// (0x0005f7a7) bg_sctrl_middle_pane_g2

0x90c1,	// (0x0005f7af) bg_sctrl_middle_pane_g3

0x90c9,	// (0x0005f7b7) bg_sctrl_middle_pane_g4

0x90d1,	// (0x0005f7bf) bg_sctrl_middle_pane_g5

0x90d9,	// (0x0005f7c7) bg_sctrl_middle_pane_g6

0x90e1,	// (0x0005f7cf) bg_sctrl_middle_pane_g7

0x90e9,	// (0x0005f7d7) bg_sctrl_middle_pane_g8

0x0007,

0xfcfb,	// (0x000663e9) bg_sctrl_middle_pane_g

0x90f1,	// (0x0005f7df) bg_sctrl_middle_pane_g8_copy1

0x90b1,	// (0x0005f79f) bg_sctrl_sk_pane_g1

0x90c1,	// (0x0005f7af) bg_sctrl_sk_pane_g2

0x90b9,	// (0x0005f7a7) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00065f2a) bg_sctrl_sk_pane_g

0xf0dc,	// (0x000657ca) aid_size_touch_scroll_bar

0x90d1,	// (0x0005f7bf) bg_sctrl_sk_pane_g4

0x90c9,	// (0x0005f7b7) bg_sctrl_sk_pane_g5

0x90d9,	// (0x0005f7c7) bg_sctrl_sk_pane_g6

0x90e1,	// (0x0005f7cf) bg_sctrl_sk_pane_g7

0x90f1,	// (0x0005f7df) bg_sctrl_sk_pane_g8

0x90e9,	// (0x0005f7d7) bg_sctrl_sk_pane_g9

0x6e82,	// (0x0005d570) popup_fep_china_hwr2_fs_candidate_window

0x6e8c,	// (0x0005d57a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6e8c,	// (0x0005d57a) popup_fep_china_hwr2_fs_control_window

0x7f43,	// (0x0005e631) sctrl_sk_top_pane_g2

0x0001,

0xfcf1,	// (0x000663df) sctrl_sk_top_pane_g

0xcfbd,	// (0x000636ab) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcfbd,	// (0x000636ab) aid_fep_china_hwr2_fs_cell

0xcfcf,	// (0x000636bd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcfcf,	// (0x000636bd) bg_popup_fep_shadow_pane_cp4

0xcfe6,	// (0x000636d4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcfe6,	// (0x000636d4) bg_popup_fep_shadow_pane_cp5

0xcff8,	// (0x000636e6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcff8,	// (0x000636e6) popup_fep_china_hwr2_fs_control_bar_grid

0xd008,	// (0x000636f6) popup_fep_china_hwr2_fs_control_funtion_grid

0xd010,	// (0x000636fe) aid_fep_china_hwr2_fs_candi_cell

0xe1dd,	// (0x000648cb) bg_popup_fep_shadow_pane_cp6

0xd01a,	// (0x00063708) popup_fep_china_hwr2_fs_candidate_grid

0xd024,	// (0x00063712) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd024,	// (0x00063712) cell_fep_china_hwr2_fs_funtion_grid

0xb887,	// (0x00061f75) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd03c,	// (0x0006372a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd03c,	// (0x0006372a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd04a,	// (0x00063738) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd04a,	// (0x00063738) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0c,	// (0x000663fa) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0c,	// (0x000663fa) cell_fep_china_hwr2_fs_funtion_grid_g

0xd060,	// (0x0006374e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd060,	// (0x0006374e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd075,	// (0x00063763) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd075,	// (0x00063763) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd11,	// (0x000663ff) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd11,	// (0x000663ff) cell_fep_china_hwr2_fs_funtion_grid_t

0xd091,	// (0x0006377f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd099,	// (0x00063787) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd0a1,	// (0x0006378f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd16,	// (0x00066404) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd0a9,	// (0x00063797) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd0a9,	// (0x00063797) cell_fep_china_hwr2_fs_candidate_grid

0xd0c2,	// (0x000637b0) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd0ca,	// (0x000637b8) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb887,	// (0x00061f75) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb887,	// (0x00061f75) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0006621f) cell_fep_china_hwr2_fs_candidate_grid_g

0xd0d2,	// (0x000637c0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7481,	// (0x0005db6f) clock_nsta_pane_cp_24_ParamLimits

0x7481,	// (0x0005db6f) clock_nsta_pane_cp_24

0x74ff,	// (0x0005dbed) indicator_nsta_pane_cp_24_ParamLimits

0x74ff,	// (0x0005dbed) indicator_nsta_pane_cp_24

0x9dbf,	// (0x000604ad) heading_pane_g1

0x0001,

0xf8a1,	// (0x00065f8f) heading_pane_g

0xa851,	// (0x00060f3f) grid_sct_catagory_button_pane

0xa881,	// (0x00060f6f) scroll_pane_cp5_ParamLimits

0xb3a5,	// (0x00061a93) button_value_adjust_pane_cp5_ParamLimits

0xb3a5,	// (0x00061a93) button_value_adjust_pane_cp5

0xb484,	// (0x00061b72) form2_midp_time_pane_ParamLimits

0xd0e0,	// (0x000637ce) cell_sct_catagory_button_pane_ParamLimits

0xd0e0,	// (0x000637ce) cell_sct_catagory_button_pane

0xb777,	// (0x00061e65) bg_button_pane_cp01_ParamLimits

0xb777,	// (0x00061e65) bg_button_pane_cp01

0xb887,	// (0x00061f75) cell_sct_catagory_button_pane_g1

0x7258,	// (0x0005d946) popup_tb_extension_window

0xd0f2,	// (0x000637e0) aid_size_cell_ext_ParamLimits

0xd0f2,	// (0x000637e0) aid_size_cell_ext

0xe377,	// (0x00064a65) bg_tb_trans_pane_cp1_ParamLimits

0xe377,	// (0x00064a65) bg_tb_trans_pane_cp1

0xd112,	// (0x00063800) grid_tb_ext_pane_ParamLimits

0xd112,	// (0x00063800) grid_tb_ext_pane

0xd142,	// (0x00063830) cell_tb_ext_pane_ParamLimits

0xd142,	// (0x00063830) cell_tb_ext_pane

0xd159,	// (0x00063847) cell_tb_ext_pane_g1_ParamLimits

0xd159,	// (0x00063847) cell_tb_ext_pane_g1

0xd176,	// (0x00063864) cell_tb_ext_pane_t1

0xe377,	// (0x00064a65) list_highlight_pane_cp11_ParamLimits

0xe377,	// (0x00064a65) list_highlight_pane_cp11

0x5511,	// (0x0005bbff) popup_uni_indicator_window_ParamLimits

0x5511,	// (0x0005bbff) popup_uni_indicator_window

0xf19a,	// (0x00065888) bg_popup_sub_pane_cp14

0xd192,	// (0x00063880) list_uniindi_pane

0xd19e,	// (0x0006388c) uniindi_top_pane

0xe377,	// (0x00064a65) bg_uniindi_top_pane

0xd1bd,	// (0x000638ab) uniindi_top_pane_g1

0xd1d3,	// (0x000638c1) uniindi_top_pane_g2

0x0003,

0xfd1d,	// (0x0006640b) uniindi_top_pane_g

0xd1fd,	// (0x000638eb) uniindi_top_pane_t1

0xd227,	// (0x00063915) list_single_uniindi_pane_ParamLimits

0xd227,	// (0x00063915) list_single_uniindi_pane

0xb887,	// (0x00061f75) bg_uniindi_top_pane_g1

0xd23a,	// (0x00063928) list_single_uniindi_pane_g1

0xd24d,	// (0x0006393b) list_single_uniindi_pane_t1

0x5395,	// (0x0005ba83) control_bg_pane

0xd272,	// (0x00063960) bg_sctrl_sk_pane_cp1

0xd27b,	// (0x00063969) bg_sctrl_sk_pane_cp2

0xd284,	// (0x00063972) control_bg_pane_g1

0xd28d,	// (0x0006397b) control_bg_pane_g2

0x0001,

0xfd26,	// (0x00066414) control_bg_pane_g

0xb1eb,	// (0x000618d9) cell_indicator_nsta_pane_g1_ParamLimits

0xb1f9,	// (0x000618e7) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x00066183) cell_indicator_nsta_pane_g_ParamLimits

0x3fb2,	// (0x0005a6a0) form2_midp_time_pane_t1_ParamLimits

0x6dec,	// (0x0005d4da) main_idle_act4_pane_ParamLimits

0x6dec,	// (0x0005d4da) main_idle_act4_pane

0x7258,	// (0x0005d946) popup_tb_extension_window_ParamLimits

0xd132,	// (0x00063820) tb_ext_find_pane_ParamLimits

0xd132,	// (0x00063820) tb_ext_find_pane

0xd296,	// (0x00063984) ai_gene_pane_1_cp1

0x183b,	// (0x00057f29) ai_gene_pane_2_cp1

0xd29e,	// (0x0006398c) list_single_idle_plugin_calendar_pane

0xd2a7,	// (0x00063995) list_single_idle_plugin_notification_pane

0xd2b0,	// (0x0006399e) list_single_idle_plugin_player_pane

0xd2b9,	// (0x000639a7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd2b9,	// (0x000639a7) list_single_idle_plugin_shortcut_pane

0xd2db,	// (0x000639c9) main_idle_act4_pane_t1

0xd2ed,	// (0x000639db) main_idle_act4_pane_t2

0x0001,

0xfd2b,	// (0x00066419) main_idle_act4_pane_t

0xd2ff,	// (0x000639ed) middle_sk_idle_act4_pane_ParamLimits

0xd2ff,	// (0x000639ed) middle_sk_idle_act4_pane

0xd315,	// (0x00063a03) popup_clock_digital_analogue_window_cp2

0xd32f,	// (0x00063a1d) shortcut_wheel_idle_act4_pane_ParamLimits

0xd32f,	// (0x00063a1d) shortcut_wheel_idle_act4_pane

0xb887,	// (0x00061f75) shortcut_wheel_idle_act4_pane_g1

0xb887,	// (0x00061f75) shortcut_wheel_idle_act4_pane_g2

0xb887,	// (0x00061f75) shortcut_wheel_idle_act4_pane_g3

0xb887,	// (0x00061f75) shortcut_wheel_idle_act4_pane_g4

0xb887,	// (0x00061f75) shortcut_wheel_idle_act4_pane_g5

0xd343,	// (0x00063a31) shortcut_wheel_idle_act4_pane_g6

0xd34b,	// (0x00063a39) shortcut_wheel_idle_act4_pane_g7

0xd353,	// (0x00063a41) shortcut_wheel_idle_act4_pane_g8

0xd35b,	// (0x00063a49) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd30,	// (0x0006641e) shortcut_wheel_idle_act4_pane_g

0xbaf7,	// (0x000621e5) middle_sk_idle_act4_pane_g1_ParamLimits

0xbaf7,	// (0x000621e5) middle_sk_idle_act4_pane_g1

0xd3bf,	// (0x00063aad) middle_sk_idle_act4_pane_g2_ParamLimits

0xd3bf,	// (0x00063aad) middle_sk_idle_act4_pane_g2

0x0001,

0xfd53,	// (0x00066441) middle_sk_idle_act4_pane_g_ParamLimits

0xfd53,	// (0x00066441) middle_sk_idle_act4_pane_g

0xd3cb,	// (0x00063ab9) middle_sk_idle_act4_pane_t1_ParamLimits

0xd3cb,	// (0x00063ab9) middle_sk_idle_act4_pane_t1

0xd3e8,	// (0x00063ad6) grid_ai_shortcut_pane_ParamLimits

0xd3e8,	// (0x00063ad6) grid_ai_shortcut_pane

0xd401,	// (0x00063aef) list_highlight_pane_cp16_ParamLimits

0xd401,	// (0x00063aef) list_highlight_pane_cp16

0xd40e,	// (0x00063afc) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd40e,	// (0x00063afc) list_single_idle_plugin_shortcut_pane_g1

0xd41a,	// (0x00063b08) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd41a,	// (0x00063b08) list_single_idle_plugin_shortcut_pane_g2

0xd432,	// (0x00063b20) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd432,	// (0x00063b20) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd58,	// (0x00066446) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd58,	// (0x00066446) list_single_idle_plugin_shortcut_pane_g

0xd445,	// (0x00063b33) cell_ai_shortcut_pane_ParamLimits

0xd445,	// (0x00063b33) cell_ai_shortcut_pane

0xd469,	// (0x00063b57) cell_ai_shortcut_pane_g1_ParamLimits

0xd469,	// (0x00063b57) cell_ai_shortcut_pane_g1

0xd296,	// (0x00063984) ai_gene_pane_1_cp2

0xd48b,	// (0x00063b79) ai_gene_pane_2_cp2

0xd493,	// (0x00063b81) list_highlight_pane_cp15

0xd49c,	// (0x00063b8a) list_single_idle_plugin_calendar_pane_g1

0xd493,	// (0x00063b81) list_highlight_pane_cp17

0xd4a4,	// (0x00063b92) list_single_idle_plugin_calendar_pane_g1_copy1

0xd4ac,	// (0x00063b9a) list_single_idle_plugin_player_pane_g1

0xaaaa,	// (0x00061198) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5f,	// (0x0006644d) list_single_idle_plugin_player_pane_g

0xd4b4,	// (0x00063ba2) list_single_idle_plugin_player_pane_t1

0xd4c2,	// (0x00063bb0) list_single_idle_plugin_player_pane_t2

0xd4d0,	// (0x00063bbe) list_single_idle_plugin_player_pane_t3

0xd4de,	// (0x00063bcc) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd64,	// (0x00066452) list_single_idle_plugin_player_pane_t

0xd4ec,	// (0x00063bda) wait_bar_pane_cp15

0xd4f4,	// (0x00063be2) grid_ai_notification_pane

0xaaaa,	// (0x00061198) list_single_idle_plugin_notification_pane_g1

0xd4fd,	// (0x00063beb) cell_ai_notification_pane_ParamLimits

0xd4fd,	// (0x00063beb) cell_ai_notification_pane

0xd50a,	// (0x00063bf8) cell_ai_notification_pane_g1

0xd512,	// (0x00063c00) cell_ai_notification_pane_t1

0xd520,	// (0x00063c0e) tb_ext_find_button_pane

0xd528,	// (0x00063c16) tb_ext_find_pane_g1

0xd530,	// (0x00063c1e) tb_ext_find_pane_t1

0x135c,	// (0x00057a4a) tb_ext_find_button_pane_g1

0xd53e,	// (0x00063c2c) tb_ext_find_button_pane_g2

0x0001,

0xfd6d,	// (0x0006645b) tb_ext_find_button_pane_g

0xd2db,	// (0x000639c9) main_idle_act4_pane_t1_ParamLimits

0xd2ed,	// (0x000639db) main_idle_act4_pane_t2_ParamLimits

0xfd2b,	// (0x00066419) main_idle_act4_pane_t_ParamLimits

0xd315,	// (0x00063a03) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd323,	// (0x00063a11) sat_plugin_idle_act4_pane_ParamLimits

0xd323,	// (0x00063a11) sat_plugin_idle_act4_pane

0xd547,	// (0x00063c35) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd547,	// (0x00063c35) sat_plugin_idle_act4_pane_t1

0xd55a,	// (0x00063c48) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd55a,	// (0x00063c48) sat_plugin_idle_act4_pane_t2

0xd56d,	// (0x00063c5b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd56d,	// (0x00063c5b) sat_plugin_idle_act4_pane_t3

0xd580,	// (0x00063c6e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd580,	// (0x00063c6e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd72,	// (0x00066460) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd72,	// (0x00066460) sat_plugin_idle_act4_pane_t

0x545a,	// (0x0005bb48) popup_battery_window_ParamLimits

0x545a,	// (0x0005bb48) popup_battery_window

0xe377,	// (0x00064a65) bg_popup_sub_pane_cp25_ParamLimits

0xe377,	// (0x00064a65) bg_popup_sub_pane_cp25

0xd593,	// (0x00063c81) popup_battery_window_g1_ParamLimits

0xd593,	// (0x00063c81) popup_battery_window_g1

0xd59f,	// (0x00063c8d) popup_battery_window_t1_ParamLimits

0xd59f,	// (0x00063c8d) popup_battery_window_t1

0xd5b1,	// (0x00063c9f) popup_battery_window_t2_ParamLimits

0xd5b1,	// (0x00063c9f) popup_battery_window_t2

0x0001,

0xfd7b,	// (0x00066469) popup_battery_window_t_ParamLimits

0xfd7b,	// (0x00066469) popup_battery_window_t

0x6a05,	// (0x0005d0f3) midp_canvas_pane_ParamLimits

0x6a7e,	// (0x0005d16c) midp_keypad_pane_ParamLimits

0x6a7e,	// (0x0005d16c) midp_keypad_pane

0xf51d,	// (0x00065c0b) main_midp_pane_ParamLimits

0xb265,	// (0x00061953) signal_pane_g2_cp_ParamLimits

0xd5ce,	// (0x00063cbc) aid_size_cell_midp_keypad_ParamLimits

0xd5ce,	// (0x00063cbc) aid_size_cell_midp_keypad

0xd5e8,	// (0x00063cd6) midp_keyp_game_grid_pane_ParamLimits

0xd5e8,	// (0x00063cd6) midp_keyp_game_grid_pane

0xd608,	// (0x00063cf6) midp_keyp_rocker_pane_ParamLimits

0xd608,	// (0x00063cf6) midp_keyp_rocker_pane

0xd641,	// (0x00063d2f) midp_keyp_sk_left_pane_ParamLimits

0xd641,	// (0x00063d2f) midp_keyp_sk_left_pane

0xd69b,	// (0x00063d89) midp_keyp_sk_right_pane_ParamLimits

0xd69b,	// (0x00063d89) midp_keyp_sk_right_pane

0xe1dd,	// (0x000648cb) bg_button_pane_cp03

0xd6f5,	// (0x00063de3) midp_keyp_sk_left_pane_g1

0xe1dd,	// (0x000648cb) bg_button_pane_cp04

0xd6f5,	// (0x00063de3) midp_keyp_sk_right_pane_g1

0xb887,	// (0x00061f75) midp_keyp_rocker_pane_g1

0xd6fe,	// (0x00063dec) keyp_game_cell_pane_ParamLimits

0xd6fe,	// (0x00063dec) keyp_game_cell_pane

0xe1dd,	// (0x000648cb) bg_button_pane_cp02

0xd711,	// (0x00063dff) keyp_game_cell_pane_g1

0x5490,	// (0x0005bb7e) popup_fep_vkb2_window_ParamLimits

0x5490,	// (0x0005bb7e) popup_fep_vkb2_window

0x8311,	// (0x0005e9ff) aid_size_cell_vkb2_ParamLimits

0x8311,	// (0x0005e9ff) aid_size_cell_vkb2

0x835d,	// (0x0005ea4b) popup_fep_vkb2_window_g1_ParamLimits

0x835d,	// (0x0005ea4b) popup_fep_vkb2_window_g1

0x83a5,	// (0x0005ea93) vkb2_area_bottom_pane_ParamLimits

0x83a5,	// (0x0005ea93) vkb2_area_bottom_pane

0x83f1,	// (0x0005eadf) vkb2_area_keypad_pane_ParamLimits

0x83f1,	// (0x0005eadf) vkb2_area_keypad_pane

0x8433,	// (0x0005eb21) vkb2_area_top_pane_ParamLimits

0x8433,	// (0x0005eb21) vkb2_area_top_pane

0x84b2,	// (0x0005eba0) vkb2_top_entry_pane_ParamLimits

0x84b2,	// (0x0005eba0) vkb2_top_entry_pane

0x84dc,	// (0x0005ebca) vkb2_top_grid_left_pane_ParamLimits

0x84dc,	// (0x0005ebca) vkb2_top_grid_left_pane

0x84fb,	// (0x0005ebe9) vkb2_top_grid_right_pane_ParamLimits

0x84fb,	// (0x0005ebe9) vkb2_top_grid_right_pane

0x851a,	// (0x0005ec08) vkb2_cell_keypad_pane_ParamLimits

0x851a,	// (0x0005ec08) vkb2_cell_keypad_pane

0x85eb,	// (0x0005ecd9) vkb2_area_bottom_grid_pane_ParamLimits

0x85eb,	// (0x0005ecd9) vkb2_area_bottom_grid_pane

0x8611,	// (0x0005ecff) vkb2_area_bottom_pane_g1_ParamLimits

0x8611,	// (0x0005ecff) vkb2_area_bottom_pane_g1

0x8635,	// (0x0005ed23) vkb2_area_bottom_pane_g2_ParamLimits

0x8635,	// (0x0005ed23) vkb2_area_bottom_pane_g2

0x8663,	// (0x0005ed51) vkb2_area_bottom_pane_g3_ParamLimits

0x8663,	// (0x0005ed51) vkb2_area_bottom_pane_g3

0x0002,

0xfd80,	// (0x0006646e) vkb2_area_bottom_pane_g_ParamLimits

0xfd80,	// (0x0006646e) vkb2_area_bottom_pane_g

0x86c4,	// (0x0005edb2) vkb2_top_cell_left_pane_ParamLimits

0x86c4,	// (0x0005edb2) vkb2_top_cell_left_pane

0xd722,	// (0x00063e10) vkb2_top_entry_pane_g1_ParamLimits

0xd722,	// (0x00063e10) vkb2_top_entry_pane_g1

0xd730,	// (0x00063e1e) vkb2_top_entry_pane_t1_ParamLimits

0xd730,	// (0x00063e1e) vkb2_top_entry_pane_t1

0xd762,	// (0x00063e50) vkb2_top_entry_pane_t2_ParamLimits

0xd762,	// (0x00063e50) vkb2_top_entry_pane_t2

0xd794,	// (0x00063e82) vkb2_top_entry_pane_t3_ParamLimits

0xd794,	// (0x00063e82) vkb2_top_entry_pane_t3

0x0002,

0xfd87,	// (0x00066475) vkb2_top_entry_pane_t_ParamLimits

0xfd87,	// (0x00066475) vkb2_top_entry_pane_t

0x8711,	// (0x0005edff) vkb2_top_grid_right_pane_g1_ParamLimits

0x8711,	// (0x0005edff) vkb2_top_grid_right_pane_g1

0x8727,	// (0x0005ee15) vkb2_top_grid_right_pane_g2_ParamLimits

0x8727,	// (0x0005ee15) vkb2_top_grid_right_pane_g2

0x873f,	// (0x0005ee2d) vkb2_top_grid_right_pane_g3_ParamLimits

0x873f,	// (0x0005ee2d) vkb2_top_grid_right_pane_g3

0x8757,	// (0x0005ee45) vkb2_top_grid_right_pane_g4_ParamLimits

0x8757,	// (0x0005ee45) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8e,	// (0x0006647c) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8e,	// (0x0006647c) vkb2_top_grid_right_pane_g

0x876d,	// (0x0005ee5b) vkb2_top_cell_left_pane_g1

0x8784,	// (0x0005ee72) vkb2_cell_keypad_pane_g1_ParamLimits

0x8784,	// (0x0005ee72) vkb2_cell_keypad_pane_g1

0xd7b8,	// (0x00063ea6) vkb2_cell_keypad_pane_t1_ParamLimits

0xd7b8,	// (0x00063ea6) vkb2_cell_keypad_pane_t1

0x8792,	// (0x0005ee80) vkb2_cell_bottom_grid_pane_ParamLimits

0x8792,	// (0x0005ee80) vkb2_cell_bottom_grid_pane

0x87cb,	// (0x0005eeb9) vkb2_cell_bottom_grid_pane_g1

0xd363,	// (0x00063a51) aid_call2_pane_cp02

0xd36b,	// (0x00063a59) aid_call_pane_cp02

0xd373,	// (0x00063a61) clock_digital_number_pane_cp10

0xd37b,	// (0x00063a69) clock_digital_number_pane_cp11

0xd383,	// (0x00063a71) clock_digital_number_pane_cp12

0xd38b,	// (0x00063a79) clock_digital_number_pane_cp13

0xd393,	// (0x00063a81) clock_digital_separator_pane_cp10

0x135c,	// (0x00057a4a) popup_clock_digital_analogue_window_cp2_g1

0x135c,	// (0x00057a4a) popup_clock_digital_analogue_window_cp2_g2

0xd39b,	// (0x00063a89) popup_clock_digital_analogue_window_cp2_g3

0x135c,	// (0x00057a4a) popup_clock_digital_analogue_window_cp2_g4

0xd39b,	// (0x00063a89) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd43,	// (0x00066431) popup_clock_digital_analogue_window_cp2_g

0xd3a3,	// (0x00063a91) popup_clock_digital_analogue_window_cp2_t1

0xd3b1,	// (0x00063a9f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4e,	// (0x0006643c) popup_clock_digital_analogue_window_cp2_t

0xb887,	// (0x00061f75) clock_digital_number_pane_cp10_g1

0xb887,	// (0x00061f75) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0006621f) clock_digital_number_pane_cp10_g

0xb887,	// (0x00061f75) clock_digital_separator_pane_cp10_g1

0xb887,	// (0x00061f75) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0006621f) clock_digital_separator_pane_cp10_g

0xd1df,	// (0x000638cd) uniindi_top_pane_g3

0xd1f0,	// (0x000638de) uniindi_top_pane_g4

0x85a5,	// (0x0005ec93) vkb2_row_keypad_pane_ParamLimits

0x85a5,	// (0x0005ec93) vkb2_row_keypad_pane

0x87eb,	// (0x0005eed9) vkb2_cell_t_keypad_pane_ParamLimits

0x87eb,	// (0x0005eed9) vkb2_cell_t_keypad_pane

0x87fb,	// (0x0005eee9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x87fb,	// (0x0005eee9) vkb2_cell_t_keypad_pane_cp08

0x880e,	// (0x0005eefc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x880e,	// (0x0005eefc) vkb2_cell_t_keypad_pane_cp09

0x8822,	// (0x0005ef10) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8822,	// (0x0005ef10) vkb2_cell_t_keypad_pane_cp01

0x8833,	// (0x0005ef21) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8833,	// (0x0005ef21) vkb2_cell_t_keypad_pane_cp02

0x8844,	// (0x0005ef32) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8844,	// (0x0005ef32) vkb2_cell_t_keypad_pane_cp03

0x8855,	// (0x0005ef43) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8855,	// (0x0005ef43) vkb2_cell_t_keypad_pane_cp04

0x8866,	// (0x0005ef54) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8866,	// (0x0005ef54) vkb2_cell_t_keypad_pane_cp05

0x8877,	// (0x0005ef65) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8877,	// (0x0005ef65) vkb2_cell_t_keypad_pane_cp06

0x8888,	// (0x0005ef76) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8888,	// (0x0005ef76) vkb2_cell_t_keypad_pane_cp07

0x8899,	// (0x0005ef87) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8899,	// (0x0005ef87) vkb2_cell_t_keypad_pane_cp10

0x7f43,	// (0x0005e631) vkb2_cell_t_keypad_pane_g1

0xd7cf,	// (0x00063ebd) vkb2_cell_t_keypad_pane_t1

0x5395,	// (0x0005ba83) popup_grid_graphic2_window

0xd7e1,	// (0x00063ecf) aid_size_cell_graphic2_ParamLimits

0xd7e1,	// (0x00063ecf) aid_size_cell_graphic2

0xd819,	// (0x00063f07) bg_popup_window_pane_cp21_ParamLimits

0xd819,	// (0x00063f07) bg_popup_window_pane_cp21

0xd827,	// (0x00063f15) graphic2_pages_pane_ParamLimits

0xd827,	// (0x00063f15) graphic2_pages_pane

0xd86d,	// (0x00063f5b) grid_graphic2_control_pane_ParamLimits

0xd86d,	// (0x00063f5b) grid_graphic2_control_pane

0xd8ab,	// (0x00063f99) grid_graphic2_pane_ParamLimits

0xd8ab,	// (0x00063f99) grid_graphic2_pane

0xd91f,	// (0x0006400d) cell_graphic2_pane

0x5395,	// (0x0005ba83) main_comp_mode_pane

0xca50,	// (0x0006313e) list_ai3_gene_pane_ParamLimits

0xce1e,	// (0x0006350c) bg_popup_window_pane_cp19_ParamLimits

0xce2a,	// (0x00063518) bg_touch_area_indi_pane_ParamLimits

0xce2a,	// (0x00063518) bg_touch_area_indi_pane

0xce40,	// (0x0006352e) bg_touch_area_indi_pane_cp01_ParamLimits

0xce40,	// (0x0006352e) bg_touch_area_indi_pane_cp01

0xce56,	// (0x00063544) bg_touch_area_indi_pane_cp02_ParamLimits

0xce56,	// (0x00063544) bg_touch_area_indi_pane_cp02

0xce6c,	// (0x0006355a) bg_touch_area_indi_pane_cp03_ParamLimits

0xce6c,	// (0x0006355a) bg_touch_area_indi_pane_cp03

0xce86,	// (0x00063574) popup_slider_window_g1_ParamLimits

0xcea2,	// (0x00063590) popup_slider_window_g2_ParamLimits

0xcebe,	// (0x000635ac) popup_slider_window_g3_ParamLimits

0xfcd8,	// (0x000663c6) popup_slider_window_g_ParamLimits

0xcf24,	// (0x00063612) popup_slider_window_t1_ParamLimits

0xcf98,	// (0x00063686) small_volume_slider_vertical_pane_ParamLimits

0xd91f,	// (0x0006400d) cell_graphic2_pane_ParamLimits

0xd96e,	// (0x0006405c) bg_button_pane_cp10_ParamLimits

0xd96e,	// (0x0006405c) bg_button_pane_cp10

0xd981,	// (0x0006406f) bg_button_pane_cp11_ParamLimits

0xd981,	// (0x0006406f) bg_button_pane_cp11

0xd994,	// (0x00064082) graphic2_pages_pane_g1_ParamLimits

0xd994,	// (0x00064082) graphic2_pages_pane_g1

0xd9af,	// (0x0006409d) graphic2_pages_pane_g2_ParamLimits

0xd9af,	// (0x0006409d) graphic2_pages_pane_g2

0x0001,

0xfd9c,	// (0x0006648a) graphic2_pages_pane_g_ParamLimits

0xfd9c,	// (0x0006648a) graphic2_pages_pane_g

0xd9c7,	// (0x000640b5) graphic2_pages_pane_t1_ParamLimits

0xd9c7,	// (0x000640b5) graphic2_pages_pane_t1

0xd9df,	// (0x000640cd) cell_graphic2_control_pane_ParamLimits

0xd9df,	// (0x000640cd) cell_graphic2_control_pane

0xd9fd,	// (0x000640eb) cell_graphic2_pane_g1_ParamLimits

0xd9fd,	// (0x000640eb) cell_graphic2_pane_g1

0xda0a,	// (0x000640f8) cell_graphic2_pane_g2_ParamLimits

0xda0a,	// (0x000640f8) cell_graphic2_pane_g2

0xda17,	// (0x00064105) cell_graphic2_pane_g3_ParamLimits

0xda17,	// (0x00064105) cell_graphic2_pane_g3

0xda24,	// (0x00064112) cell_graphic2_pane_g4_ParamLimits

0xda24,	// (0x00064112) cell_graphic2_pane_g4

0xda31,	// (0x0006411f) cell_graphic2_pane_g5_ParamLimits

0xda31,	// (0x0006411f) cell_graphic2_pane_g5

0x0004,

0xfda1,	// (0x0006648f) cell_graphic2_pane_g_ParamLimits

0xfda1,	// (0x0006648f) cell_graphic2_pane_g

0xda4a,	// (0x00064138) cell_graphic2_pane_t1_ParamLimits

0xda4a,	// (0x00064138) cell_graphic2_pane_t1

0x913d,	// (0x0005f82b) grid_highlight_pane_cp11_ParamLimits

0x913d,	// (0x0005f82b) grid_highlight_pane_cp11

0xe377,	// (0x00064a65) bg_button_pane_cp05

0xda80,	// (0x0006416e) cell_graphic2_control_pane_g1

0xb887,	// (0x00061f75) bg_touch_area_indi_pane_g1

0xdaa8,	// (0x00064196) aid_cmod_rocker_key_size

0xdab2,	// (0x000641a0) aid_cmode_itu_key_size

0xdabc,	// (0x000641aa) main_cmode_video_pane

0xdac6,	// (0x000641b4) main_comp_mode_itu_pane

0xdad2,	// (0x000641c0) main_comp_mode_rocker_pane

0xdade,	// (0x000641cc) cell_cmode_rocker_pane_ParamLimits

0xdade,	// (0x000641cc) cell_cmode_rocker_pane

0xdaf0,	// (0x000641de) cell_cmode_itu_pane_ParamLimits

0xdaf0,	// (0x000641de) cell_cmode_itu_pane

0xf19a,	// (0x00065888) bg_button_pane_cp06_ParamLimits

0xf19a,	// (0x00065888) bg_button_pane_cp06

0xbaf7,	// (0x000621e5) cell_cmode_rocker_pane_g1_ParamLimits

0xbaf7,	// (0x000621e5) cell_cmode_rocker_pane_g1

0xd03c,	// (0x0006372a) cell_cmode_rocker_pane_g2_ParamLimits

0xd03c,	// (0x0006372a) cell_cmode_rocker_pane_g2

0x0001,

0xfdb1,	// (0x0006649f) cell_cmode_rocker_pane_g_ParamLimits

0xfdb1,	// (0x0006649f) cell_cmode_rocker_pane_g

0xe1dd,	// (0x000648cb) bg_button_pane_cp07

0xdb05,	// (0x000641f3) cell_cmode_itu_pane_g1

0xdb0e,	// (0x000641fc) cell_cmode_itu_pane_t1

0xdb1c,	// (0x0006420a) cell_cmode_itu_pane_t2

0x0001,

0xfdb6,	// (0x000664a4) cell_cmode_itu_pane_t

0xd262,	// (0x00063950) aid_touch_ctrl_left

0xd26a,	// (0x00063958) aid_touch_ctrl_right

0xe1dd,	// (0x000648cb) compa_mode_pane

0xdb2a,	// (0x00064218) aid_cmod_rocker_key_size_cp

0xdb34,	// (0x00064222) aid_cmode_itu_key_size_cp

0xdb3e,	// (0x0006422c) compa_mode_pane_g1

0xdb46,	// (0x00064234) compa_mode_pane_g2

0xdb4e,	// (0x0006423c) compa_mode_pane_g3

0x0002,

0xfdbb,	// (0x000664a9) compa_mode_pane_g

0xdb56,	// (0x00064244) main_comp_mode_itu_pane_cp

0xdb5e,	// (0x0006424c) main_comp_mode_rocker_pane_cp

0xdb66,	// (0x00064254) cell_cmode_itu_pane_cp_ParamLimits

0xdb66,	// (0x00064254) cell_cmode_itu_pane_cp

0xdb7b,	// (0x00064269) cell_cmode_rocker_pane_cp_ParamLimits

0xdb7b,	// (0x00064269) cell_cmode_rocker_pane_cp

0xf19a,	// (0x00065888) bg_button_pane_cp06_cp_ParamLimits

0xf19a,	// (0x00065888) bg_button_pane_cp06_cp

0xbaf7,	// (0x000621e5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbaf7,	// (0x000621e5) cell_cmode_rocker_pane_g1_cp

0xb887,	// (0x00061f75) cell_cmode_rocker_pane_g2_cp

0xe1dd,	// (0x000648cb) bg_button_pane_cp07_cp

0xdb8d,	// (0x0006427b) cell_cmode_itu_pane_g1_cp

0xdb96,	// (0x00064284) cell_cmode_itu_pane_t1_cp

0xdb96,	// (0x00064284) cell_cmode_itu_pane_t2_cp

0xa5da,	// (0x00060cc8) settings_code_pane_cp2

0xe23f,	// (0x0006492d) bg_popup_window_pane_cp3_ParamLimits

0xe490,	// (0x00064b7e) heading_pane_cp3_ParamLimits

0xe49f,	// (0x00064b8d) listscroll_popup_graphic_pane_ParamLimits

0x7cec,	// (0x0005e3da) fep_hwr_aid_pane_ParamLimits

0x826c,	// (0x0005e95a) aid_touch_sctrl_top_ParamLimits

0x8287,	// (0x0005e975) sctrl_sk_top_pane_g1_ParamLimits

0x7f43,	// (0x0005e631) sctrl_sk_top_pane_g2_ParamLimits

0xfcf1,	// (0x000663df) sctrl_sk_top_pane_g_ParamLimits

0x8294,	// (0x0005e982) sctrl_sk_top_pane_t1_ParamLimits

0x826c,	// (0x0005e95a) aid_touch_sctrl_bottom_ParamLimits

0x8294,	// (0x0005e982) sctrl_sk_bottom_pane_t1_ParamLimits

0xd1ab,	// (0x00063899) aid_area_touch_clock

0x8479,	// (0x0005eb67) aid_vkb2_area_top_pane_cell_ParamLimits

0x8479,	// (0x0005eb67) aid_vkb2_area_top_pane_cell

0x85c7,	// (0x0005ecb5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x85c7,	// (0x0005ecb5) aid_vkb2_area_bottom_pane_cell

0xd71a,	// (0x00063e08) popup_char_count_window

0xdba4,	// (0x00064292) popup_char_count_window_g1

0xdbad,	// (0x0006429b) popup_char_count_window_g2

0xdbb6,	// (0x000642a4) popup_char_count_window_g3

0x0002,

0xfdc2,	// (0x000664b0) popup_char_count_window_g

0xdbbf,	// (0x000642ad) popup_char_count_window_t1

0x833b,	// (0x0005ea29) popup_fep_char_preview_window_ParamLimits

0x833b,	// (0x0005ea29) popup_fep_char_preview_window

0x8497,	// (0x0005eb85) vkb2_top_candi_pane_ParamLimits

0x8497,	// (0x0005eb85) vkb2_top_candi_pane

0xdbcd,	// (0x000642bb) cell_vkb2_top_candi_pane_ParamLimits

0xdbcd,	// (0x000642bb) cell_vkb2_top_candi_pane

0x88ae,	// (0x0005ef9c) bg_popup_fep_char_preview_window_ParamLimits

0x88ae,	// (0x0005ef9c) bg_popup_fep_char_preview_window

0x88bc,	// (0x0005efaa) popup_fep_char_preview_window_t1_ParamLimits

0x88bc,	// (0x0005efaa) popup_fep_char_preview_window_t1

0xdc17,	// (0x00064305) bg_popup_fep_char_preview_window_g1

0xdc1f,	// (0x0006430d) bg_popup_fep_char_preview_window_g2

0xdc27,	// (0x00064315) bg_popup_fep_char_preview_window_g3

0xdc2f,	// (0x0006431d) bg_popup_fep_char_preview_window_g4

0xdc37,	// (0x00064325) bg_popup_fep_char_preview_window_g5

0xdc3f,	// (0x0006432d) bg_popup_fep_char_preview_window_g6

0xdc47,	// (0x00064335) bg_popup_fep_char_preview_window_g7

0xdc4f,	// (0x0006433d) bg_popup_fep_char_preview_window_g8

0xdc57,	// (0x00064345) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc9,	// (0x000664b7) bg_popup_fep_char_preview_window_g

0x7f43,	// (0x0005e631) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7f43,	// (0x0005e631) cell_vkb2_top_candi_pane_g1

0x7f51,	// (0x0005e63f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7f51,	// (0x0005e63f) cell_vkb2_top_candi_pane_g2

0xbe0e,	// (0x000624fc) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbe0e,	// (0x000624fc) cell_vkb2_top_candi_pane_g3

0x88fe,	// (0x0005efec) cell_vkb2_top_candi_pane_g4_ParamLimits

0x88fe,	// (0x0005efec) cell_vkb2_top_candi_pane_g4

0xc00c,	// (0x000626fa) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc00c,	// (0x000626fa) cell_vkb2_top_candi_pane_g5

0x891f,	// (0x0005f00d) cell_vkb2_top_candi_pane_g6_ParamLimits

0x891f,	// (0x0005f00d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdde,	// (0x000664cc) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdde,	// (0x000664cc) cell_vkb2_top_candi_pane_g

0x892d,	// (0x0005f01b) cell_vkb2_top_candi_pane_t1

0x7a0d,	// (0x0005e0fb) aid_size_touch_slider_mark_ParamLimits

0x7a0d,	// (0x0005e0fb) aid_size_touch_slider_mark

0xd85d,	// (0x00063f4b) grid_graphic2_catg_pane_ParamLimits

0xd85d,	// (0x00063f4b) grid_graphic2_catg_pane

0xd8fb,	// (0x00063fe9) popup_grid_graphic2_window_t1_ParamLimits

0xd8fb,	// (0x00063fe9) popup_grid_graphic2_window_t1

0xd90d,	// (0x00063ffb) popup_grid_graphic2_window_t2_ParamLimits

0xd90d,	// (0x00063ffb) popup_grid_graphic2_window_t2

0x0001,

0xfd97,	// (0x00066485) popup_grid_graphic2_window_t_ParamLimits

0xfd97,	// (0x00066485) popup_grid_graphic2_window_t

0xe377,	// (0x00064a65) bg_button_pane_cp05_ParamLimits

0xda80,	// (0x0006416e) cell_graphic2_control_pane_g1_ParamLimits

0xdc5f,	// (0x0006434d) cell_graphic2_catg_pane_ParamLimits

0xdc5f,	// (0x0006434d) cell_graphic2_catg_pane

0xe1dd,	// (0x000648cb) bg_button_pane_cp12

0xdc71,	// (0x0006435f) cell_graphic2_catg_pane_g1

0xd176,	// (0x00063864) cell_tb_ext_pane_t1_ParamLimits

0x86e4,	// (0x0005edd2) vkb2_top_cell_right_narrow_pane_ParamLimits

0x86e4,	// (0x0005edd2) vkb2_top_cell_right_narrow_pane

0x86fc,	// (0x0005edea) vkb2_top_cell_right_wide_pane_ParamLimits

0x86fc,	// (0x0005edea) vkb2_top_cell_right_wide_pane

0x7cde,	// (0x0005e3cc) bg_vkb2_func_pane_ParamLimits

0x7cde,	// (0x0005e3cc) bg_vkb2_func_pane

0x876d,	// (0x0005ee5b) vkb2_top_cell_left_pane_g1_ParamLimits

0x7cde,	// (0x0005e3cc) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7cde,	// (0x0005e3cc) bg_vkb2_fuc_pane_cp03

0x87cb,	// (0x0005eeb9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x90b9,	// (0x0005f7a7) bg_vkb2_func_pane_g1

0x90c1,	// (0x0005f7af) bg_vkb2_func_pane_g2

0x90d1,	// (0x0005f7bf) bg_vkb2_func_pane_g3

0x90c9,	// (0x0005f7b7) bg_vkb2_func_pane_g4

0x90d9,	// (0x0005f7c7) bg_vkb2_func_pane_g5

0x90e1,	// (0x0005f7cf) bg_vkb2_func_pane_g6

0x90e9,	// (0x0005f7d7) bg_vkb2_func_pane_g7

0x90f1,	// (0x0005f7df) bg_vkb2_func_pane_g8

0x90b1,	// (0x0005f79f) bg_vkb2_func_pane_g9

0x0008,

0xfdeb,	// (0x000664d9) bg_vkb2_func_pane_g

0x7cde,	// (0x0005e3cc) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7cde,	// (0x0005e3cc) bg_vkb2_fuc_pane_cp01

0x876d,	// (0x0005ee5b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x876d,	// (0x0005ee5b) vkb2_top_cell_right_wide_pane_g1

0x7cde,	// (0x0005e3cc) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7cde,	// (0x0005e3cc) bg_vkb2_fuc_pane_cp02

0x894c,	// (0x0005f03a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x894c,	// (0x0005f03a) vkb2_top_cell_right_narrow_pane_g1

0xcd98,	// (0x00063486) aid_touch_area_decrease_ParamLimits

0xcd98,	// (0x00063486) aid_touch_area_decrease

0xcdbc,	// (0x000634aa) aid_touch_area_increase_ParamLimits

0xcdbc,	// (0x000634aa) aid_touch_area_increase

0xcdd4,	// (0x000634c2) aid_touch_area_mute_ParamLimits

0xcdd4,	// (0x000634c2) aid_touch_area_mute

0xcdf0,	// (0x000634de) aid_touch_area_slider_ParamLimits

0xcdf0,	// (0x000634de) aid_touch_area_slider

0xceda,	// (0x000635c8) popup_slider_window_g4_ParamLimits

0xceda,	// (0x000635c8) popup_slider_window_g4

0xcef2,	// (0x000635e0) popup_slider_window_g5_ParamLimits

0xcef2,	// (0x000635e0) popup_slider_window_g5

0xcf14,	// (0x00063602) popup_slider_window_g6_ParamLimits

0xcf14,	// (0x00063602) popup_slider_window_g6

0xcf52,	// (0x00063640) popup_slider_window_t2_ParamLimits

0xcf52,	// (0x00063640) popup_slider_window_t2

0x0001,

0xfce5,	// (0x000663d3) popup_slider_window_t_ParamLimits

0xfce5,	// (0x000663d3) popup_slider_window_t

0xcf6a,	// (0x00063658) slider_pane_ParamLimits

0xcf6a,	// (0x00063658) slider_pane

0xdc7a,	// (0x00064368) slider_pane_g1_ParamLimits

0xdc7a,	// (0x00064368) slider_pane_g1

0xdc8e,	// (0x0006437c) slider_pane_g2_ParamLimits

0xdc8e,	// (0x0006437c) slider_pane_g2

0xdca4,	// (0x00064392) slider_pane_g3_ParamLimits

0xdca4,	// (0x00064392) slider_pane_g3

0x0003,

0xfdfe,	// (0x000664ec) slider_pane_g_ParamLimits

0xfdfe,	// (0x000664ec) slider_pane_g

0x72b4,	// (0x0005d9a2) popup_tb_float_extension_window_ParamLimits

0x72b4,	// (0x0005d9a2) popup_tb_float_extension_window

0xdcd0,	// (0x000643be) aid_size_cell_tb_float_ext

0xe1dd,	// (0x000648cb) bg_popup_sub_window_cp28

0xdcdc,	// (0x000643ca) grid_tb_float_ext_pane

0xdce6,	// (0x000643d4) cell_tb_float_ext_pane_ParamLimits

0xdce6,	// (0x000643d4) cell_tb_float_ext_pane

0xdd00,	// (0x000643ee) cell_tb_float_ext_pane_g1

0xdd09,	// (0x000643f7) grid_highlight_pane_cp12

0x7e2d,	// (0x0005e51b) cell_last_hwr_side_pane_ParamLimits

0x7e2d,	// (0x0005e51b) cell_last_hwr_side_pane

0xb887,	// (0x00061f75) cell_last_hwr_side_pane_g1

0xdd12,	// (0x00064400) cell_last_hwr_side_pane_g2

0x0001,

0xfe07,	// (0x000664f5) cell_last_hwr_side_pane_g

0x8693,	// (0x0005ed81) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8693,	// (0x0005ed81) vkb2_area_bottom_space_btn_pane

0x7f43,	// (0x0005e631) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd7cf,	// (0x00063ebd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x892d,	// (0x0005f01b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x896c,	// (0x0005f05a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x896c,	// (0x0005f05a) vkb2_area_bottom_space_btn_pane_g1

0x89a6,	// (0x0005f094) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x89a6,	// (0x0005f094) vkb2_area_bottom_space_btn_pane_g2

0x89dc,	// (0x0005f0ca) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x89dc,	// (0x0005f0ca) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0c,	// (0x000664fa) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0c,	// (0x000664fa) vkb2_area_bottom_space_btn_pane_g

0x7da1,	// (0x0005e48f) cel_fep_hwr_func_pane_ParamLimits

0x7da1,	// (0x0005e48f) cel_fep_hwr_func_pane

0x7ddd,	// (0x0005e4cb) cell_hwr_side_button_pane_ParamLimits

0x7ddd,	// (0x0005e4cb) cell_hwr_side_button_pane

0xd1ab,	// (0x00063899) aid_area_touch_clock_ParamLimits

0xe377,	// (0x00064a65) bg_uniindi_top_pane_ParamLimits

0xd1bd,	// (0x000638ab) uniindi_top_pane_g1_ParamLimits

0xd1d3,	// (0x000638c1) uniindi_top_pane_g2_ParamLimits

0xd1df,	// (0x000638cd) uniindi_top_pane_g3_ParamLimits

0xd1f0,	// (0x000638de) uniindi_top_pane_g4_ParamLimits

0xfd1d,	// (0x0006640b) uniindi_top_pane_g_ParamLimits

0xd1fd,	// (0x000638eb) uniindi_top_pane_t1_ParamLimits

0xe377,	// (0x00064a65) bg_vkb2_func_pane_cp01_ParamLimits

0xe377,	// (0x00064a65) bg_vkb2_func_pane_cp01

0xdd1b,	// (0x00064409) cel_fep_hwr_func_pane_g1_ParamLimits

0xdd1b,	// (0x00064409) cel_fep_hwr_func_pane_g1

0xe377,	// (0x00064a65) bg_vkb2_func_pane_cp02_ParamLimits

0xe377,	// (0x00064a65) bg_vkb2_func_pane_cp02

0xdd1b,	// (0x00064409) cell_hwr_side_button_pane_g1_ParamLimits

0xdd1b,	// (0x00064409) cell_hwr_side_button_pane_g1

0x8f35,	// (0x0005f623) status_pane_g4_ParamLimits

0x8f35,	// (0x0005f623) status_pane_g4

0x8f4f,	// (0x0005f63d) status_pane_t1

0xb4ed,	// (0x00061bdb) form2_midp_gauge_slider_cont_pane

0xb4f5,	// (0x00061be3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb507,	// (0x00061bf5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb519,	// (0x00061c07) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x000661d2) form2_midp_gauge_slider_pane_t_ParamLimits

0xb52b,	// (0x00061c19) form2_midp_slider_pane_ParamLimits

0x8303,	// (0x0005e9f1) aid_size_cell_func_vkb2_ParamLimits

0x8303,	// (0x0005e9f1) aid_size_cell_func_vkb2

0xdcbc,	// (0x000643aa) slider_pane_g4_ParamLimits

0xdcbc,	// (0x000643aa) slider_pane_g4

0x8a26,	// (0x0005f114) form2_midp_gauge_slider_pane_t2_cp01

0x8a34,	// (0x0005f122) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8a34,	// (0x0005f122) form2_midp_gauge_slider_pane_t3_cp01

0x8a51,	// (0x0005f13f) form2_midp_slider_pane_cp01

0xe1dd,	// (0x000648cb) navi_smil_pane

0xdd54,	// (0x00064442) navi_smil_pane_g1

0xdd5c,	// (0x0006444a) navi_smil_pane_t1

0xdd29,	// (0x00064417) form2_midp_slider_pane_g1

0xdd32,	// (0x00064420) form2_midp_slider_pane_g2

0xdd3a,	// (0x00064428) form2_midp_slider_pane_g3

0xdd29,	// (0x00064417) form2_midp_slider_pane_g4

0xdd42,	// (0x00064430) form2_midp_slider_pane_g5

0x0004,

0xfe15,	// (0x00066503) form2_midp_slider_pane_g

0x8a16,	// (0x0005f104) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8a16,	// (0x0005f104) vkb2_area_bottom_space_btn_pane_g4

0x753b,	// (0x0005dc29) lc0_navi_pane_ParamLimits

0x753b,	// (0x0005dc29) lc0_navi_pane

0x75b1,	// (0x0005dc9f) lc0_stat_indi_pane_ParamLimits

0x75b1,	// (0x0005dc9f) lc0_stat_indi_pane

0x75c8,	// (0x0005dcb6) ls0_title_pane_ParamLimits

0x75c8,	// (0x0005dcb6) ls0_title_pane

0xf19a,	// (0x00065888) bg_popup_sub_pane_cp14_ParamLimits

0xd192,	// (0x00063880) list_uniindi_pane_ParamLimits

0xd19e,	// (0x0006388c) uniindi_top_pane_ParamLimits

0xd23a,	// (0x00063928) list_single_uniindi_pane_g1_ParamLimits

0xd24d,	// (0x0006393b) list_single_uniindi_pane_t1_ParamLimits

0x8a5a,	// (0x0005f148) lc0_stat_clock_pane_ParamLimits

0x8a5a,	// (0x0005f148) lc0_stat_clock_pane

0xdd6a,	// (0x00064458) lc0_stat_indi_pane_g1_ParamLimits

0xdd6a,	// (0x00064458) lc0_stat_indi_pane_g1

0xdd77,	// (0x00064465) lc0_stat_indi_pane_g2_ParamLimits

0xdd77,	// (0x00064465) lc0_stat_indi_pane_g2

0x0001,

0xfe20,	// (0x0006650e) lc0_stat_indi_pane_g_ParamLimits

0xfe20,	// (0x0006650e) lc0_stat_indi_pane_g

0x8a67,	// (0x0005f155) lc0_uni_indicator_pane_ParamLimits

0x8a67,	// (0x0005f155) lc0_uni_indicator_pane

0xdd84,	// (0x00064472) ls0_title_pane_g1_ParamLimits

0xdd84,	// (0x00064472) ls0_title_pane_g1

0xdd98,	// (0x00064486) ls0_title_pane_t1_ParamLimits

0xdd98,	// (0x00064486) ls0_title_pane_t1

0x8a74,	// (0x0005f162) lc0_uni_indicator_pane_g1_ParamLimits

0x8a74,	// (0x0005f162) lc0_uni_indicator_pane_g1

0xddce,	// (0x000644bc) lc0_stat_clock_pane_t1

0x5395,	// (0x0005ba83) main_ai5_pane

0xdddc,	// (0x000644ca) ai5_sk_pane_ParamLimits

0xdddc,	// (0x000644ca) ai5_sk_pane

0xdde9,	// (0x000644d7) cell_ai5_widget_pane_ParamLimits

0xdde9,	// (0x000644d7) cell_ai5_widget_pane

0xdeb2,	// (0x000645a0) aid_size_cell_widget_grid

0xdec0,	// (0x000645ae) bg_ai5_widget_pane_ParamLimits

0xdec0,	// (0x000645ae) bg_ai5_widget_pane

0xdf3c,	// (0x0006462a) cell_ai5_widget_pane_g2

0xdf50,	// (0x0006463e) cell_ai5_widget_pane_g3

0xdf6a,	// (0x00064658) cell_ai5_widget_pane_g4

0xdf7a,	// (0x00064668) cell_ai5_widget_pane_g5

0xdf8a,	// (0x00064678) cell_ai5_widget_pane_g6

0xdf96,	// (0x00064684) cell_ai5_widget_pane_g7

0xe002,	// (0x000646f0) cell_ai5_widget_pane_t1_ParamLimits

0xe002,	// (0x000646f0) cell_ai5_widget_pane_t1

0xe01f,	// (0x0006470d) cell_ai5_widget_pane_t2_ParamLimits

0xe01f,	// (0x0006470d) cell_ai5_widget_pane_t2

0xe037,	// (0x00064725) cell_ai5_widget_pane_t3_ParamLimits

0xe037,	// (0x00064725) cell_ai5_widget_pane_t3

0xe04f,	// (0x0006473d) cell_ai5_widget_pane_t4_ParamLimits

0xe04f,	// (0x0006473d) cell_ai5_widget_pane_t4

0xe075,	// (0x00064763) cell_ai5_widget_pane_t5_ParamLimits

0xe075,	// (0x00064763) cell_ai5_widget_pane_t5

0xe094,	// (0x00064782) cell_ai5_widget_pane_t6_ParamLimits

0xe094,	// (0x00064782) cell_ai5_widget_pane_t6

0xe0a6,	// (0x00064794) cell_ai5_widget_pane_t7_ParamLimits

0xe0a6,	// (0x00064794) cell_ai5_widget_pane_t7

0xe0c5,	// (0x000647b3) cell_ai5_widget_pane_t8_ParamLimits

0xe0c5,	// (0x000647b3) cell_ai5_widget_pane_t8

0x000b,

0xfe40,	// (0x0006652e) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x0006652e) cell_ai5_widget_pane_t

0xe149,	// (0x00064837) grid_ai5_widget_pane

0xf19a,	// (0x00065888) highlight_cell_ai5_widget_pane_ParamLimits

0xf19a,	// (0x00065888) highlight_cell_ai5_widget_pane

0xe157,	// (0x00064845) ai5_sk_left_pane

0xe161,	// (0x0006484f) ai5_sk_middle_pane

0xe16b,	// (0x00064859) ai5_sk_right_pane

0xe175,	// (0x00064863) bg_ai5_widget_pane_g1_ParamLimits

0xe175,	// (0x00064863) bg_ai5_widget_pane_g1

0xe181,	// (0x0006486f) bg_ai5_widget_pane_g2_ParamLimits

0xe181,	// (0x0006486f) bg_ai5_widget_pane_g2

0xe18d,	// (0x0006487b) bg_ai5_widget_pane_g3_ParamLimits

0xe18d,	// (0x0006487b) bg_ai5_widget_pane_g3

0xe199,	// (0x00064887) bg_ai5_widget_pane_g4_ParamLimits

0xe199,	// (0x00064887) bg_ai5_widget_pane_g4

0xe1a5,	// (0x00064893) bg_ai5_widget_pane_g5_ParamLimits

0xe1a5,	// (0x00064893) bg_ai5_widget_pane_g5

0xe1b1,	// (0x0006489f) bg_ai5_widget_pane_g6_ParamLimits

0xe1b1,	// (0x0006489f) bg_ai5_widget_pane_g6

0xe1bd,	// (0x000648ab) bg_ai5_widget_pane_g7_ParamLimits

0xe1bd,	// (0x000648ab) bg_ai5_widget_pane_g7

0xe1c9,	// (0x000648b7) bg_ai5_widget_pane_g8_ParamLimits

0xe1c9,	// (0x000648b7) bg_ai5_widget_pane_g8

0xe545,	// (0x00064c33) bg_ai5_widget_pane_g9_ParamLimits

0xe545,	// (0x00064c33) bg_ai5_widget_pane_g9

0x0008,

0xfe59,	// (0x00066547) bg_ai5_widget_pane_g_ParamLimits

0xfe59,	// (0x00066547) bg_ai5_widget_pane_g

0xe577,	// (0x00064c65) cell_shortcut_ai5_widget_pane_ParamLimits

0xe577,	// (0x00064c65) cell_shortcut_ai5_widget_pane

0x17ba,	// (0x00057ea8) bg_cell_shortcut_ai5_widget_pane

0xe588,	// (0x00064c76) cell_grid_ai5_widget_pane_g1

0x17ba,	// (0x00057ea8) highlight_cell_shortcut_ai5_widget_pane

0x90b9,	// (0x0005f7a7) ai5_sk_left_pane_g1

0xe591,	// (0x00064c7f) ai5_sk_left_pane_g2

0xe599,	// (0x00064c87) ai5_sk_left_pane_g3

0xe5a1,	// (0x00064c8f) ai5_sk_left_pane_g4

0x0003,

0xfe6c,	// (0x0006655a) ai5_sk_left_pane_g

0xe5a9,	// (0x00064c97) ai5_sk_left_pane_t1

0x90c1,	// (0x0005f7af) ai5_sk_right_pane_g1

0xe5b7,	// (0x00064ca5) ai5_sk_right_pane_g2

0xe5bf,	// (0x00064cad) ai5_sk_right_pane_g3

0xe5c7,	// (0x00064cb5) ai5_sk_right_pane_g4

0x0003,

0xfe75,	// (0x00066563) ai5_sk_right_pane_g

0xe5cf,	// (0x00064cbd) ai5_sk_right_pane_t1

0x90c1,	// (0x0005f7af) ai5_sk_middle_pane_g1

0x90b9,	// (0x0005f7a7) ai5_sk_middle_pane_g2

0x90d9,	// (0x0005f7c7) ai5_sk_middle_pane_g3

0xe5bf,	// (0x00064cad) ai5_sk_middle_pane_g4

0xe599,	// (0x00064c87) ai5_sk_middle_pane_g5

0xe5dd,	// (0x00064ccb) ai5_sk_middle_pane_g6

0xe5e5,	// (0x00064cd3) ai5_sk_middle_pane_g7

0x0006,

0xfe7e,	// (0x0006656c) ai5_sk_middle_pane_g

0x73c1,	// (0x0005daaf) aid_touch_area_size_lc0_ParamLimits

0x73c1,	// (0x0005daaf) aid_touch_area_size_lc0

0x7f72,	// (0x0005e660) cell_hwr_candidate_pane_t1_ParamLimits

0x73dd,	// (0x0005dacb) aid_touch_navi_pane

0x76b6,	// (0x0005dda4) status_dt_navi_pane_ParamLimits

0x76b6,	// (0x0005dda4) status_dt_navi_pane

0x8eec,	// (0x0005f5da) status_dt_sta_pane_ParamLimits

0x8eec,	// (0x0005f5da) status_dt_sta_pane

0xe5ed,	// (0x00064cdb) dt_sta_controll_pane

0xe5fa,	// (0x00064ce8) dt_sta_indi_pane

0xe60b,	// (0x00064cf9) dt_sta_title_pane

0xe377,	// (0x00064a65) bg_dt_sta_indi_pane_ParamLimits

0xe377,	// (0x00064a65) bg_dt_sta_indi_pane

0xe61e,	// (0x00064d0c) dt_sta_battery_pane

0xe626,	// (0x00064d14) dt_sta_indi_pane_g1

0xe62f,	// (0x00064d1d) dt_sta_indi_pane_g2

0xe638,	// (0x00064d26) dt_sta_indi_pane_g3

0x0002,

0xfe8d,	// (0x0006657b) dt_sta_indi_pane_g

0xe641,	// (0x00064d2f) dt_sta_signal_pane

0xf19a,	// (0x00065888) bg_dt_sta_title_pane_ParamLimits

0xf19a,	// (0x00065888) bg_dt_sta_title_pane

0x9f13,	// (0x00060601) dt_sta_title_pane_g1

0xe64a,	// (0x00064d38) dt_sta_title_pane_t1_ParamLimits

0xe64a,	// (0x00064d38) dt_sta_title_pane_t1

0xe1dd,	// (0x000648cb) bg_dt_sta_control_pane

0xe65f,	// (0x00064d4d) dt_sta_controll_pane_g1

0xe668,	// (0x00064d56) bg_dt_sta_title_pane_g1

0xe671,	// (0x00064d5f) bg_dt_sta_title_pane_g2

0xe67a,	// (0x00064d68) bg_dt_sta_title_pane_g3

0x0002,

0xfe94,	// (0x00066582) bg_dt_sta_title_pane_g

0xb887,	// (0x00061f75) bg_dt_sta_indi_pane_g1

0xe683,	// (0x00064d71) dt_sta_signal_pane_g1

0xe68b,	// (0x00064d79) dt_sta_signal_pane_g2

0x0001,

0xfe9b,	// (0x00066589) dt_sta_signal_pane_g

0xe693,	// (0x00064d81) dt_sta_battery_pane_g1

0xe69c,	// (0x00064d8a) dt_sta_battery_pane_t1

0xb887,	// (0x00061f75) bg_dt_sta_control_pane_g1

0x13df,	// (0x00057acd) fep_china_uni_eep_pane

0x13e7,	// (0x00057ad5) fep_china_uni_entry_pane_ParamLimits

0x13f7,	// (0x00057ae5) popup_fep_china_uni_window_g1_ParamLimits

0x1407,	// (0x00057af5) popup_fep_china_uni_window_g2_ParamLimits

0x1407,	// (0x00057af5) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00065de1) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00065de1) popup_fep_china_uni_window_g

0xe6ab,	// (0x00064d99) fep_china_uni_eep_pane_g1

0xe6b3,	// (0x00064da1) fep_china_uni_eep_pane_t1

0xdd4b,	// (0x00064439) aid_touch_area_size_smil_player

0x7533,	// (0x0005dc21) lc0_clock_pane

0x8f43,	// (0x0005f631) status_pane_g5_ParamLimits

0x8f43,	// (0x0005f631) status_pane_g5

0x6f75,	// (0x0005d663) popup_keymap_window

0x8f01,	// (0x0005f5ef) status_icon_pane

0xdf50,	// (0x0006463e) cell_ai5_widget_pane_g3_ParamLimits

0xdf6a,	// (0x00064658) cell_ai5_widget_pane_g4_ParamLimits

0xdf7a,	// (0x00064668) cell_ai5_widget_pane_g5_ParamLimits

0xdfa2,	// (0x00064690) cell_ai5_widget_pane_g8_ParamLimits

0xdfa2,	// (0x00064690) cell_ai5_widget_pane_g8

0xdfb6,	// (0x000646a4) cell_ai5_widget_pane_g9_ParamLimits

0xdfb6,	// (0x000646a4) cell_ai5_widget_pane_g9

0xdfca,	// (0x000646b8) cell_ai5_widget_pane_g10_ParamLimits

0xdfca,	// (0x000646b8) cell_ai5_widget_pane_g10

0xe6c2,	// (0x00064db0) status_icon_pane_g1

0xe1dd,	// (0x000648cb) bg_popup_sub_pane_cp13

0xe6ca,	// (0x00064db8) popup_keymap_window_t1

0x6ca0,	// (0x0005d38e) control_pane_g6_ParamLimits

0x6ca0,	// (0x0005d38e) control_pane_g6

0x6cad,	// (0x0005d39b) control_pane_g7_ParamLimits

0x6cad,	// (0x0005d39b) control_pane_g7

0x6cba,	// (0x0005d3a8) control_pane_g8_ParamLimits

0x6cba,	// (0x0005d3a8) control_pane_g8

0xe5ed,	// (0x00064cdb) dt_sta_controll_pane_ParamLimits

0xe5fa,	// (0x00064ce8) dt_sta_indi_pane_ParamLimits

0xe60b,	// (0x00064cf9) dt_sta_title_pane_ParamLimits

0xf0e5,	// (0x000657d3) aid_size_touch_scroll_bar_cale

0x546e,	// (0x0005bb5c) popup_discreet_window_ParamLimits

0x546e,	// (0x0005bb5c) popup_discreet_window

0x54e8,	// (0x0005bbd6) popup_sk_window

0x9757,	// (0x0005fe45) bg_popup_sub_pane_cp28_ParamLimits

0x9757,	// (0x0005fe45) bg_popup_sub_pane_cp28

0xe6d8,	// (0x00064dc6) popup_discreet_window_g1_ParamLimits

0xe6d8,	// (0x00064dc6) popup_discreet_window_g1

0xe6f8,	// (0x00064de6) popup_discreet_window_t1_ParamLimits

0xe6f8,	// (0x00064de6) popup_discreet_window_t1

0xe716,	// (0x00064e04) popup_discreet_window_t2_ParamLimits

0xe716,	// (0x00064e04) popup_discreet_window_t2

0x0002,

0xfea0,	// (0x0006658e) popup_discreet_window_t_ParamLimits

0xfea0,	// (0x0006658e) popup_discreet_window_t

0x8a88,	// (0x0005f176) popup_sk_window_g1

0x8a92,	// (0x0005f180) popup_sk_window_g2

0x0001,

0xfea7,	// (0x00066595) popup_sk_window_g

0x8a9a,	// (0x0005f188) popup_sk_window_t1

0x8aa8,	// (0x0005f196) popup_sk_window_t1_copy1

0xdf3c,	// (0x0006462a) cell_ai5_widget_pane_g2_ParamLimits

0xe0d7,	// (0x000647c5) cell_ai5_widget_pane_t9_ParamLimits

0xe0d7,	// (0x000647c5) cell_ai5_widget_pane_t9

0xe1dd,	// (0x000648cb) main_fep_fshwr2_pane

0x8ab6,	// (0x0005f1a4) aid_fshwr2_btn_pane

0x8aca,	// (0x0005f1b8) aid_fshwr2_syb_pane

0x8ade,	// (0x0005f1cc) aid_fshwr2_txt_pane

0x8aee,	// (0x0005f1dc) fshwr2_func_candi_pane

0x8b12,	// (0x0005f200) fshwr2_hwr_syb_pane

0x8b2c,	// (0x0005f21a) fshwr2_icf_pane

0x5395,	// (0x0005ba83) fshwr2_icf_bg_pane

0x8b5a,	// (0x0005f248) fshwr2_icf_pane_t1_ParamLimits

0x8b5a,	// (0x0005f248) fshwr2_icf_pane_t1

0x135c,	// (0x00057a4a) fshwr2_func_candi_pane_g1

0xe768,	// (0x00064e56) fshwr2_func_candi_row_pane_ParamLimits

0xe768,	// (0x00064e56) fshwr2_func_candi_row_pane

0x8b73,	// (0x0005f261) cell_fshwr2_syb_pane_ParamLimits

0x8b73,	// (0x0005f261) cell_fshwr2_syb_pane

0x8b96,	// (0x0005f284) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8b96,	// (0x0005f284) fshwr2_hwr_syb_pane_g1

0x5395,	// (0x0005ba83) bg_popup_call_pane_cp01

0x8ba4,	// (0x0005f292) fshwr2_func_candi_cell_pane_ParamLimits

0x8ba4,	// (0x0005f292) fshwr2_func_candi_cell_pane

0x9db3,	// (0x000604a1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9db3,	// (0x000604a1) fshwr2_func_candi_cell_bg_pane

0x8bef,	// (0x0005f2dd) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8bef,	// (0x0005f2dd) fshwr2_func_candi_cell_pane_g1

0x8c0f,	// (0x0005f2fd) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8c0f,	// (0x0005f2fd) fshwr2_func_candi_cell_pane_t1

0x5395,	// (0x0005ba83) bg_button_pane_cp08

0xf51d,	// (0x00065c0b) cell_fshwr2_syb_bg_pane

0x8c22,	// (0x0005f310) cell_fshwr2_syb_bg_pane_g1

0x8c36,	// (0x0005f324) cell_fshwr2_syb_bg_pane_t1

0xf19a,	// (0x00065888) main_tmo_pane

0xa24c,	// (0x0006093a) uni_indicator_pane_g1_ParamLimits

0xa25f,	// (0x0006094d) uni_indicator_pane_g2_ParamLimits

0xa271,	// (0x0006095f) uni_indicator_pane_g3_ParamLimits

0xa280,	// (0x0006096e) uni_indicator_pane_g4_ParamLimits

0xa280,	// (0x0006096e) uni_indicator_pane_g4

0xa294,	// (0x00060982) uni_indicator_pane_g5_ParamLimits

0xa294,	// (0x00060982) uni_indicator_pane_g5

0xa294,	// (0x00060982) uni_indicator_pane_g6_ParamLimits

0xa294,	// (0x00060982) uni_indicator_pane_g6

0xf8f7,	// (0x00065fe5) uni_indicator_pane_g_ParamLimits

0xcd7a,	// (0x00063468) popup_tmo_note_window_ParamLimits

0xcd7a,	// (0x00063468) popup_tmo_note_window

0x82e5,	// (0x0005e9d3) fshwr2_bg_pane

0x8c00,	// (0x0005f2ee) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8c00,	// (0x0005f2ee) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeac,	// (0x0006659a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeac,	// (0x0006659a) fshwr2_func_candi_cell_pane_g

0x7f2b,	// (0x0005e619) bg_popup_window_pane_cp01

0x8c4c,	// (0x0005f33a) bg_popup_window_pane_g1_cp01

0xe78f,	// (0x00064e7d) bg_popup_window_pane_cp22_ParamLimits

0xe78f,	// (0x00064e7d) bg_popup_window_pane_cp22

0xe79d,	// (0x00064e8b) listscroll_tmo_link_pane_ParamLimits

0xe79d,	// (0x00064e8b) listscroll_tmo_link_pane

0xe7dd,	// (0x00064ecb) popup_tmo_note_window_g1_ParamLimits

0xe7dd,	// (0x00064ecb) popup_tmo_note_window_g1

0xe7ea,	// (0x00064ed8) tmo_note_info_pane_ParamLimits

0xe7ea,	// (0x00064ed8) tmo_note_info_pane

0xe804,	// (0x00064ef2) list_tmo_note_info_pane_g1_ParamLimits

0xe804,	// (0x00064ef2) list_tmo_note_info_pane_g1

0xe81b,	// (0x00064f09) list_tmo_note_info_pane_g2_ParamLimits

0xe81b,	// (0x00064f09) list_tmo_note_info_pane_g2

0x0001,

0xfeb1,	// (0x0006659f) list_tmo_note_info_pane_g_ParamLimits

0xfeb1,	// (0x0006659f) list_tmo_note_info_pane_g

0xe837,	// (0x00064f25) list_tmo_note_info_text_pane_ParamLimits

0xe837,	// (0x00064f25) list_tmo_note_info_text_pane

0xe8b8,	// (0x00064fa6) list_tmo_link_pane

0xe8c5,	// (0x00064fb3) scroll_pane_cp20

0xe8d2,	// (0x00064fc0) list_single_tmo_link_pane_ParamLimits

0xe8d2,	// (0x00064fc0) list_single_tmo_link_pane

0xe8e2,	// (0x00064fd0) list_single_tmo_link_pane_t1

0xe8f0,	// (0x00064fde) list_tmo_note_info_text_pane_t1_ParamLimits

0xe8f0,	// (0x00064fde) list_tmo_note_info_text_pane_t1

0x61ce,	// (0x0005c8bc) aid_size_touch_scroll_bar_cp01_ParamLimits

0x61ce,	// (0x0005c8bc) aid_size_touch_scroll_bar_cp01

0x60db,	// (0x0005c7c9) aid_size_touch_slider_marker

0x54d0,	// (0x0005bbbe) popup_settings_window_ParamLimits

0x54d0,	// (0x0005bbbe) popup_settings_window

0x3bfd,	// (0x0005a2eb) popup_candi_list_indi_window

0x73dd,	// (0x0005dacb) aid_touch_navi_pane_ParamLimits

0x8240,	// (0x0005e92e) rs_clock_indi_pane

0x8249,	// (0x0005e937) sctrl_sk_bottom_pane_ParamLimits

0x825a,	// (0x0005e948) sctrl_sk_top_pane_ParamLimits

0x8355,	// (0x0005ea43) popup_fep_tooltip_window

0xdeb2,	// (0x000645a0) aid_size_cell_widget_grid_ParamLimits

0xdf27,	// (0x00064615) cell_ai5_widget_pane_g1_ParamLimits

0xdf27,	// (0x00064615) cell_ai5_widget_pane_g1

0xdf8a,	// (0x00064678) cell_ai5_widget_pane_g6_ParamLimits

0xdf96,	// (0x00064684) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe25,	// (0x00066513) cell_ai5_widget_pane_g_ParamLimits

0xfe25,	// (0x00066513) cell_ai5_widget_pane_g

0xe106,	// (0x000647f4) cell_ai5_widget_pane_t10_ParamLimits

0xe106,	// (0x000647f4) cell_ai5_widget_pane_t10

0xe149,	// (0x00064837) grid_ai5_widget_pane_ParamLimits

0xe551,	// (0x00064c3f) cell_contacts_ai5_widget_pane_ParamLimits

0xe551,	// (0x00064c3f) cell_contacts_ai5_widget_pane

0xe72b,	// (0x00064e19) popup_discreet_window_t3_ParamLimits

0xe72b,	// (0x00064e19) popup_discreet_window_t3

0x8b44,	// (0x0005f232) popup_fshwr2_char_preview_window_ParamLimits

0x8b44,	// (0x0005f232) popup_fshwr2_char_preview_window

0xe855,	// (0x00064f43) tmo_note_info_pane_t1

0xe86a,	// (0x00064f58) tmo_note_info_pane_t2

0xe87f,	// (0x00064f6d) tmo_note_info_pane_t3

0xe894,	// (0x00064f82) tmo_note_info_pane_t4

0xe8a6,	// (0x00064f94) tmo_note_info_pane_t5

0x0004,

0xfeb6,	// (0x000665a4) tmo_note_info_pane_t

0xe8b8,	// (0x00064fa6) list_tmo_link_pane_ParamLimits

0xe8c5,	// (0x00064fb3) scroll_pane_cp20_ParamLimits

0x5395,	// (0x0005ba83) bg_popup_fep_char_preview_window_cp01

0xe909,	// (0x00064ff7) popup_fshwr2_char_preview_window_t1

0xe917,	// (0x00065005) popup_candi_list_indi_window_g1

0xe920,	// (0x0006500e) bg_cell_contacts_ai5_widget_pane

0xe92c,	// (0x0006501a) cell_contacts_ai5_widget_pane_g1

0xbf61,	// (0x0006264f) cell_contacts_ai5_widget_pane_g2

0xe941,	// (0x0006502f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec1,	// (0x000665af) cell_contacts_ai5_widget_pane_g

0xe94d,	// (0x0006503b) cell_contacts_ai5_widget_pane_t1

0xf19a,	// (0x00065888) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe9c4,	// (0x000650b2) settings_container_pane

0x17ba,	// (0x00057ea8) listscroll_set_pane_copy1

0xae0e,	// (0x000614fc) scroll_pane_cp121_copy1

0x94fc,	// (0x0005fbea) set_content_pane_copy1

0xe9d0,	// (0x000650be) aid_height_set_list_copy1_ParamLimits

0xe9d0,	// (0x000650be) aid_height_set_list_copy1

0xa48c,	// (0x00060b7a) aid_size_parent_copy1_ParamLimits

0xa48c,	// (0x00060b7a) aid_size_parent_copy1

0xe9dc,	// (0x000650ca) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe9dc,	// (0x000650ca) button_value_adjust_pane_cp6_copy1

0xf51d,	// (0x00065c0b) list_highlight_pane_cp2_copy1_ParamLimits

0xf51d,	// (0x00065c0b) list_highlight_pane_cp2_copy1

0xe9f0,	// (0x000650de) list_set_pane_copy1_ParamLimits

0xe9f0,	// (0x000650de) list_set_pane_copy1

0xe95f,	// (0x0006504d) main_pane_set_t1_copy1_ParamLimits

0xe95f,	// (0x0006504d) main_pane_set_t1_copy1

0xe999,	// (0x00065087) main_pane_set_t2_copy1_ParamLimits

0xe999,	// (0x00065087) main_pane_set_t2_copy1

0xea9d,	// (0x0006518b) main_pane_set_t3_copy1

0xeaab,	// (0x00065199) main_pane_set_t4_copy1

0xe9b8,	// (0x000650a6) set_content_pane_g1_copy1_ParamLimits

0xe9b8,	// (0x000650a6) set_content_pane_g1_copy1

0xeab9,	// (0x000651a7) setting_code_pane_copy1

0xeac1,	// (0x000651af) setting_slider_graphic_pane_copy1

0xeac1,	// (0x000651af) setting_slider_pane_copy1

0xeac9,	// (0x000651b7) setting_text_pane_copy1

0xeac9,	// (0x000651b7) setting_volume_pane_copy1

0xeab9,	// (0x000651a7) settings_code_pane_cp2_copy1

0xead1,	// (0x000651bf) settings_code_pane_cp_copy1_ParamLimits

0xead1,	// (0x000651bf) settings_code_pane_cp_copy1

0x8c55,	// (0x0005f343) volume_set_pane_copy1

0xeae5,	// (0x000651d3) volume_set_pane_g10_copy1

0xeaed,	// (0x000651db) volume_set_pane_g1_copy1

0xeaf5,	// (0x000651e3) volume_set_pane_g2_copy1

0xeafd,	// (0x000651eb) volume_set_pane_g3_copy1

0xeb05,	// (0x000651f3) volume_set_pane_g4_copy1

0xeb0d,	// (0x000651fb) volume_set_pane_g5_copy1

0xeb15,	// (0x00065203) volume_set_pane_g6_copy1

0xeb1d,	// (0x0006520b) volume_set_pane_g7_copy1

0xeb25,	// (0x00065213) volume_set_pane_g8_copy1

0xeb2d,	// (0x0006521b) volume_set_pane_g9_copy1

0xe23f,	// (0x0006492d) bg_set_opt_pane_cp_copy1_ParamLimits

0xe23f,	// (0x0006492d) bg_set_opt_pane_cp_copy1

0x8c5d,	// (0x0005f34b) setting_slider_pane_t1_copy1_ParamLimits

0x8c5d,	// (0x0005f34b) setting_slider_pane_t1_copy1

0x8c7c,	// (0x0005f36a) setting_slider_pane_t2_copy1_ParamLimits

0x8c7c,	// (0x0005f36a) setting_slider_pane_t2_copy1

0x8c96,	// (0x0005f384) setting_slider_pane_t3_copy1_ParamLimits

0x8c96,	// (0x0005f384) setting_slider_pane_t3_copy1

0x8cae,	// (0x0005f39c) slider_set_pane_copy1_ParamLimits

0x8cae,	// (0x0005f39c) slider_set_pane_copy1

0xf1f2,	// (0x000658e0) set_opt_bg_pane_g1_copy2

0xf1fa,	// (0x000658e8) set_opt_bg_pane_g2_copy2

0xeb35,	// (0x00065223) set_opt_bg_pane_g3_copy2

0xf20a,	// (0x000658f8) set_opt_bg_pane_g4_copy2

0xf212,	// (0x00065900) set_opt_bg_pane_g5_copy2

0xf21a,	// (0x00065908) set_opt_bg_pane_g6_copy2

0xeb3f,	// (0x0006522d) set_opt_bg_pane_g7_copy2

0xeb47,	// (0x00065235) set_opt_bg_pane_g8_copy2

0xeb51,	// (0x0006523f) set_opt_bg_pane_g9_copy2

0x8cc4,	// (0x0005f3b2) aid_size_touch_slider_mark_copy1_ParamLimits

0x8cc4,	// (0x0005f3b2) aid_size_touch_slider_mark_copy1

0xeb5b,	// (0x00065249) slider_set_pane_g1_copy1

0x8cd8,	// (0x0005f3c6) slider_set_pane_g2_copy1

0x7a2d,	// (0x0005e11b) slider_set_pane_g3_copy1_ParamLimits

0x7a2d,	// (0x0005e11b) slider_set_pane_g3_copy1

0x7a41,	// (0x0005e12f) slider_set_pane_g4_copy1_ParamLimits

0x7a41,	// (0x0005e12f) slider_set_pane_g4_copy1

0x7a59,	// (0x0005e147) slider_set_pane_g5_copy1_ParamLimits

0x7a59,	// (0x0005e147) slider_set_pane_g5_copy1

0x7a2d,	// (0x0005e11b) slider_set_pane_g6_copy1_ParamLimits

0x7a2d,	// (0x0005e11b) slider_set_pane_g6_copy1

0x8ce0,	// (0x0005f3ce) slider_set_pane_g7_copy1_ParamLimits

0x8ce0,	// (0x0005f3ce) slider_set_pane_g7_copy1

0xe1f1,	// (0x000648df) bg_set_opt_pane_cp2_copy1

0xeb64,	// (0x00065252) setting_slider_graphic_pane_g1_copy1

0xeb6d,	// (0x0006525b) setting_slider_graphic_pane_t1_copy1

0xeb7d,	// (0x0006526b) setting_slider_graphic_pane_t2_copy1

0xeb8d,	// (0x0006527b) slider_set_pane_cp_copy1

0xeb9d,	// (0x0006528b) input_focus_pane_cp1_copy1

0xeba6,	// (0x00065294) list_set_text_pane_copy1

0xebae,	// (0x0006529c) setting_text_pane_g1_copy1

0x4155,	// (0x0005a843) set_text_pane_t1_copy1

0xeb9d,	// (0x0006528b) input_focus_pane_cp2_copy1

0xebae,	// (0x0006529c) setting_code_pane_g1_copy1

0xebb7,	// (0x000652a5) setting_code_pane_t1_copy1

0xebc5,	// (0x000652b3) list_set_graphic_pane_copy1

0xe1f1,	// (0x000648df) bg_set_opt_pane_cp4_copy1

0x1537,	// (0x00057c25) list_set_graphic_pane_g1_copy1_ParamLimits

0x1537,	// (0x00057c25) list_set_graphic_pane_g1_copy1

0xebd9,	// (0x000652c7) list_set_graphic_pane_g2_copy1

0x154f,	// (0x00057c3d) list_set_graphic_pane_t1_copy1_ParamLimits

0x154f,	// (0x00057c3d) list_set_graphic_pane_t1_copy1

0xb887,	// (0x00061f75) rs_clock_indi_pane_g1

0xebe1,	// (0x000652cf) rs_clock_indi_pane_t1

0xebef,	// (0x000652dd) rs_indi_pane

0xebf7,	// (0x000652e5) rs_indi_pane_g1

0xec00,	// (0x000652ee) rs_indi_pane_g2

0xe917,	// (0x00065005) rs_indi_pane_g3

0x0002,

0xfec8,	// (0x000665b6) rs_indi_pane_g

0x17ba,	// (0x00057ea8) bg_popup_preview_window_pane_cp03

0xec09,	// (0x000652f7) popup_fep_tooltip_window_t1

0xc529,	// (0x00062c17) popup_note2_window_g2_ParamLimits

0xc529,	// (0x00062c17) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0006634a) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0006634a) popup_note2_window_g

0xca16,	// (0x00063104) bg_popup_sub_pane_cp11_ParamLimits

0xca23,	// (0x00063111) cell_ai3_links_pane_g1_ParamLimits

0xca3a,	// (0x00063128) cell_ai3_links_pane_t1

0x4155,	// (0x0005a843) set_text_pane_t1_copy1_ParamLimits

0x16fc,	// (0x00057dea) cell_graphic_popup_pane_cp2_ParamLimits

0x16fc,	// (0x00057dea) cell_graphic_popup_pane_cp2

0xec17,	// (0x00065305) cell_graphic_popup_pane_g1_cp2

0xe4d1,	// (0x00064bbf) cell_graphic_popup_pane_g2_cp2

0xec1f,	// (0x0006530d) cell_graphic_popup_pane_g3_cp2

0xec27,	// (0x00065315) cell_graphic_popup_pane_t2_cp2

0xe4e2,	// (0x00064bd0) grid_highlight_pane_cp3_cp2

0xf45d,	// (0x00065b4b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf19a,	// (0x00065888) main_tmo_pane_ParamLimits

0xcd6e,	// (0x0006345c) popup_tmo_big_image_note_window

0xdf16,	// (0x00064604) cell_ai5_widget_list_pane

0xdf1e,	// (0x0006460c) cell_ai5_widget_lrg_icon_pane

0xe855,	// (0x00064f43) tmo_note_info_pane_t1_ParamLimits

0xe86a,	// (0x00064f58) tmo_note_info_pane_t2_ParamLimits

0xe87f,	// (0x00064f6d) tmo_note_info_pane_t3_ParamLimits

0xe894,	// (0x00064f82) tmo_note_info_pane_t4_ParamLimits

0xe8a6,	// (0x00064f94) tmo_note_info_pane_t5_ParamLimits

0xfeb6,	// (0x000665a4) tmo_note_info_pane_t_ParamLimits

0xe9c4,	// (0x000650b2) settings_container_pane_ParamLimits

0xeb95,	// (0x00065283) indicator_popup_pane_cp5

0xeb95,	// (0x00065283) indicator_popup_pane_cp6

0xebc5,	// (0x000652b3) list_set_graphic_pane_copy1_ParamLimits

0xe1dd,	// (0x000648cb) bg_popup_window_pane_cp23

0xec35,	// (0x00065323) popup_tmo_big_image_note_window_g1

0xec3e,	// (0x0006532c) popup_tmo_big_image_note_window_t1

0xec4e,	// (0x0006533c) popup_tmo_big_image_note_window_t2

0xec5e,	// (0x0006534c) popup_tmo_big_image_note_window_t3

0x0002,

0xfecf,	// (0x000665bd) popup_tmo_big_image_note_window_t

0xb887,	// (0x00061f75) cell_ai5_widget_lrg_icon_pane_g1

0xec6e,	// (0x0006535c) cell_ai5_widget_lrg_icon_pane_t1

0xec7c,	// (0x0006536a) cell_ai5_widget_list_row_pane_ParamLimits

0xec7c,	// (0x0006536a) cell_ai5_widget_list_row_pane

0xec93,	// (0x00065381) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xec93,	// (0x00065381) cell_ai5_widget_list_row_pane_g1

0xeca0,	// (0x0006538e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeca0,	// (0x0006538e) cell_ai5_widget_list_row_pane_t1

0xeccb,	// (0x000653b9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xeccb,	// (0x000653b9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed6,	// (0x000665c4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed6,	// (0x000665c4) cell_ai5_widget_list_row_pane_t

0x5395,	// (0x0005ba83) main_fep_vtchi_ss_pane

0xed1b,	// (0x00065409) popup_fep_char_pre_window

0xed23,	// (0x00065411) popup_fep_ituss_window

0xed4f,	// (0x0006543d) popup_fep_vkbss_window

0xf51d,	// (0x00065c0b) grid_vkbss_keypad_pane_ParamLimits

0xf51d,	// (0x00065c0b) grid_vkbss_keypad_pane

0xed8f,	// (0x0006547d) ituss_keypad_pane

0x8d00,	// (0x0005f3ee) aid_vkbss_key_offset_ParamLimits

0x8d00,	// (0x0005f3ee) aid_vkbss_key_offset

0x8d0c,	// (0x0005f3fa) cell_vkbss_key_pane_ParamLimits

0x8d0c,	// (0x0005f3fa) cell_vkbss_key_pane

0xed9f,	// (0x0006548d) bg_cell_vkbss_key_g1_ParamLimits

0xed9f,	// (0x0006548d) bg_cell_vkbss_key_g1

0xedab,	// (0x00065499) cell_vkbss_key_3p_pane_ParamLimits

0xedab,	// (0x00065499) cell_vkbss_key_3p_pane

0xede1,	// (0x000654cf) cell_vkbss_key_g1_ParamLimits

0xede1,	// (0x000654cf) cell_vkbss_key_g1

0xee17,	// (0x00065505) cell_vkbss_key_t1_ParamLimits

0xee17,	// (0x00065505) cell_vkbss_key_t1

0x8d64,	// (0x0005f452) cell_ituss_key_pane_ParamLimits

0x8d64,	// (0x0005f452) cell_ituss_key_pane

0xee73,	// (0x00065561) bg_cell_ituss_key_g1_ParamLimits

0xee73,	// (0x00065561) bg_cell_ituss_key_g1

0xee7f,	// (0x0006556d) cell_ituss_key_pane_g1_ParamLimits

0xee7f,	// (0x0006556d) cell_ituss_key_pane_g1

0x8d75,	// (0x0005f463) cell_ituss_key_pane_g2_ParamLimits

0x8d75,	// (0x0005f463) cell_ituss_key_pane_g2

0x0005,

0xfedd,	// (0x000665cb) cell_ituss_key_pane_g_ParamLimits

0xfedd,	// (0x000665cb) cell_ituss_key_pane_g

0x8df9,	// (0x0005f4e7) cell_ituss_key_t1_ParamLimits

0x8df9,	// (0x0005f4e7) cell_ituss_key_t1

0x8e33,	// (0x0005f521) cell_ituss_key_t2_ParamLimits

0x8e33,	// (0x0005f521) cell_ituss_key_t2

0x8e65,	// (0x0005f553) cell_ituss_key_t3_ParamLimits

0x8e65,	// (0x0005f553) cell_ituss_key_t3

0x8e96,	// (0x0005f584) cell_ituss_key_t4_ParamLimits

0x8e96,	// (0x0005f584) cell_ituss_key_t4

0x0004,

0xfeea,	// (0x000665d8) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x000665d8) cell_ituss_key_t

0xeea5,	// (0x00065593) cell_vkbss_key_3p_pane_g1

0xeead,	// (0x0006559b) cell_vkbss_key_3p_pane_g2

0xeeb5,	// (0x000655a3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x000665e3) cell_vkbss_key_3p_pane_g

0x17ba,	// (0x00057ea8) bg_popup_fep_char_preview_window_cp02

0xeebd,	// (0x000655ab) popup_fep_char_pre_window_t1

0xde9f,	// (0x0006458d) main_ai5_sk_pane

0xe920,	// (0x0006500e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe92c,	// (0x0006501a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xbf61,	// (0x0006264f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe941,	// (0x0006502f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec1,	// (0x000665af) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe94d,	// (0x0006503b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf19a,	// (0x00065888) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeecb,	// (0x000655b9) main_ai5_sk_pane_g1

0x9598,	// (0x0005fc86) popup_query_code_window_g1

0xed39,	// (0x00065427) popup_fep_vkb_icf_pane

0xed66,	// (0x00065454) popup_fep_vtchi_icf_pane

0xeed4,	// (0x000655c2) bg_icf_pane

0xeed4,	// (0x000655c2) list_vkb_icf_pane

0xeee0,	// (0x000655ce) bg_icf_pane_cp01

0xeef3,	// (0x000655e1) vtchi_icf_list_pane

0xef53,	// (0x00065641) list_vkb_icf_pane_t1_ParamLimits

0xef53,	// (0x00065641) list_vkb_icf_pane_t1

0xef75,	// (0x00065663) vtchi_icf_list_pane_t1_ParamLimits

0xef75,	// (0x00065663) vtchi_icf_list_pane_t1

0xed23,	// (0x00065411) popup_fep_ituss_window_ParamLimits

0xed66,	// (0x00065454) popup_fep_vtchi_icf_pane_ParamLimits

0xed8f,	// (0x0006547d) ituss_keypad_pane_ParamLimits

0x8cf6,	// (0x0005f3e4) ituss_sks_pane

0xeed4,	// (0x000655c2) bg_icf_pane_ParamLimits

0xecf3,	// (0x000653e1) icf_edit_indi_pane_ParamLimits

0xecf3,	// (0x000653e1) icf_edit_indi_pane

0xeed4,	// (0x000655c2) list_vkb_icf_pane_ParamLimits

0xeee0,	// (0x000655ce) bg_icf_pane_cp01_ParamLimits

0xed0e,	// (0x000653fc) icf_edit_indi_pane_cp01_ParamLimits

0xed0e,	// (0x000653fc) icf_edit_indi_pane_cp01

0xeef3,	// (0x000655e1) vtchi_query_pane

0xdd1b,	// (0x00064409) icf_edit_indi_pane_g1_ParamLimits

0xdd1b,	// (0x00064409) icf_edit_indi_pane_g1

0xefed,	// (0x000656db) icf_edit_indi_pane_g2_ParamLimits

0xefed,	// (0x000656db) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x0006660e) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x0006660e) icf_edit_indi_pane_g

0xf001,	// (0x000656ef) icf_edit_indi_pane_t1

0xef96,	// (0x00065684) bg_input_focus_pane_cp042

0xf0dc,	// (0x000657ca) vtchi_button_pane

0xef9f,	// (0x0006568d) vtchi_query_pane_t1

0xefad,	// (0x0006569b) vtchi_query_pane_t2

0xefbb,	// (0x000656a9) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x000665fd) vtchi_query_pane_t

0x5395,	// (0x0005ba83) bg_button_pane_cp13

0xefc9,	// (0x000656b7) vtchi_button_pane_g1

0x8ed9,	// (0x0005f5c7) ituss_sks_pane_g1

0x8ee4,	// (0x0005f5d2) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x00066604) ituss_sks_pane_g

0xefd1,	// (0x000656bf) ituss_sks_pane_t1

0xefdf,	// (0x000656cd) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x00066609) ituss_sks_pane_t

0xb226,	// (0x00061914) indicator_nsta_pane_cp_g1

0xb22f,	// (0x0006191d) indicator_nsta_pane_cp_g2

0xb237,	// (0x00061925) indicator_nsta_pane_cp_g3

0xb23f,	// (0x0006192d) indicator_nsta_pane_cp_g4

0xb22f,	// (0x0006191d) indicator_nsta_pane_cp_g5

0xb237,	// (0x00061925) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x00066188) indicator_nsta_pane_cp_g

0xda6e,	// (0x0006415c) cell_graphic2_pane_t2_ParamLimits

0xda6e,	// (0x0006415c) cell_graphic2_pane_t2

0x0001,

0xfdac,	// (0x0006649a) cell_graphic2_pane_t_ParamLimits

0xfdac,	// (0x0006649a) cell_graphic2_pane_t

0xda9a,	// (0x00064188) cell_graphic2_control_pane_t1

0x6698,	// (0x0005cd86) signal_pane_g3_ParamLimits

0x6698,	// (0x0005cd86) signal_pane_g3

0x66aa,	// (0x0005cd98) signal_pane_g4_ParamLimits

0x66aa,	// (0x0005cd98) signal_pane_g4

0xecdd,	// (0x000653cb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xecdd,	// (0x000653cb) cell_ai5_widget_list_row_pane_t3

0xee93,	// (0x00065581) cell_ituss_key_pane_t1_ParamLimits

0xee93,	// (0x00065581) cell_ituss_key_pane_t1

0x91cb,	// (0x0005f8b9) form_field_data_wide_pane_vc_t2_ParamLimits

0x91cb,	// (0x0005f8b9) form_field_data_wide_pane_vc_t2

0x91df,	// (0x0005f8cd) form_field_data_wide_pane_vc_t3_ParamLimits

0x91df,	// (0x0005f8cd) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x00065ecd) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x00065ecd) form_field_data_wide_pane_vc_t

0xaed0,	// (0x000615be) form_field_slider_wide_pane_vc_t3_ParamLimits

0xaed0,	// (0x000615be) form_field_slider_wide_pane_vc_t3

0xafae,	// (0x0006169c) form_field_popup_wide_pane_vc_t2_ParamLimits

0xafae,	// (0x0006169c) form_field_popup_wide_pane_vc_t2

0xafc5,	// (0x000616b3) form_field_popup_wide_pane_vc_t3_ParamLimits

0xafc5,	// (0x000616b3) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x00066177) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00066177) form_field_popup_wide_pane_vc_t

0x8ab6,	// (0x0005f1a4) aid_fshwr2_btn_pane_ParamLimits

0x8aca,	// (0x0005f1b8) aid_fshwr2_syb_pane_ParamLimits

0x8ade,	// (0x0005f1cc) aid_fshwr2_txt_pane_ParamLimits

0x82e5,	// (0x0005e9d3) fshwr2_bg_pane_ParamLimits

0x8aee,	// (0x0005f1dc) fshwr2_func_candi_pane_ParamLimits

0x8b12,	// (0x0005f200) fshwr2_hwr_syb_pane_ParamLimits

0x8b2c,	// (0x0005f21a) fshwr2_icf_pane_ParamLimits

0xae8a,	// (0x00061578) list_double_graphic_pane_vc_g4_ParamLimits

0xae8a,	// (0x00061578) list_double_graphic_pane_vc_g4

0x8d95,	// (0x0005f483) cell_ituss_key_pane_g3_ParamLimits

0x8d95,	// (0x0005f483) cell_ituss_key_pane_g3

0x8ec7,	// (0x0005f5b5) cell_ituss_key_t5_ParamLimits

0x8ec7,	// (0x0005f5b5) cell_ituss_key_t5

0xed4f,	// (0x0006543d) popup_fep_vkbss_window_ParamLimits

0xdea9,	// (0x00064597) aid_cell_ai5_quarter

0xf001,	// (0x000656ef) icf_edit_indi_pane_t1_ParamLimits

0x5854,	// (0x0005bf42) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x5854,	// (0x0005bf42) aid_tch_indicator_popup_pane_cp2

0x5867,	// (0x0005bf55) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x5867,	// (0x0005bf55) aid_tch_query_popup_data_pane_cp2

0x9540,	// (0x0005fc2e) aid_tch_query_popup_pane_ParamLimits

0x9540,	// (0x0005fc2e) aid_tch_query_popup_pane

0x9540,	// (0x0005fc2e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9540,	// (0x0005fc2e) aid_tch_query_popup_data_pane_cp1

0xf51d,	// (0x00065c0b) cell_fshwr2_syb_bg_pane_ParamLimits

0x8c22,	// (0x0005f310) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8c36,	// (0x0005f324) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xed39,	// (0x00065427) popup_fep_vkb_icf_pane_ParamLimits

0x88f6,	// (0x0005efe4) bg_popup_fep_char_preview_window_g10

0xdfde,	// (0x000646cc) cell_ai5_widget_pane_g11_ParamLimits

0xdfde,	// (0x000646cc) cell_ai5_widget_pane_g11

0xdfea,	// (0x000646d8) cell_ai5_widget_pane_g12_ParamLimits

0xdfea,	// (0x000646d8) cell_ai5_widget_pane_g12

0xdff6,	// (0x000646e4) cell_ai5_widget_pane_g13_ParamLimits

0xdff6,	// (0x000646e4) cell_ai5_widget_pane_g13

0xe125,	// (0x00064813) cell_ai5_widget_pane_t11_ParamLimits

0xe125,	// (0x00064813) cell_ai5_widget_pane_t11

0xe137,	// (0x00064825) cell_ai5_widget_pane_t12_ParamLimits

0xe137,	// (0x00064825) cell_ai5_widget_pane_t12

0x8da1,	// (0x0005f48f) cell_ituss_key_pane_g4_ParamLimits

0x8da1,	// (0x0005f48f) cell_ituss_key_pane_g4

0x8dbd,	// (0x0005f4ab) cell_ituss_key_pane_g5_ParamLimits

0x8dbd,	// (0x0005f4ab) cell_ituss_key_pane_g5

0x8dd9,	// (0x0005f4c7) cell_ituss_key_pane_g6_ParamLimits

0x8dd9,	// (0x0005f4c7) cell_ituss_key_pane_g6

0x90b1,	// (0x0005f79f) bg_icf_pane_g1

0xeefb,	// (0x000655e9) bg_icf_pane_g2

0xef07,	// (0x000655f5) bg_icf_pane_g3

0xef11,	// (0x000655ff) bg_icf_pane_g4

0xef1d,	// (0x0006560b) bg_icf_pane_g5

0xef27,	// (0x00065615) bg_icf_pane_g6

0xef33,	// (0x00065621) bg_icf_pane_g7

0xef3d,	// (0x0006562b) bg_icf_pane_g8

0xef49,	// (0x00065637) bg_icf_pane_g9

0x0008,

0xfefc,	// (0x000665ea) bg_icf_pane_g

0xed7c,	// (0x0006546a) popup_hyb_candi_window_ParamLimits

0xed7c,	// (0x0006546a) popup_hyb_candi_window

0x913d,	// (0x0005f82b) bg_popup_sub_pane_cp01_ParamLimits

0x913d,	// (0x0005f82b) bg_popup_sub_pane_cp01

0xf01a,	// (0x00065708) entry_hyb_candi_pane_ParamLimits

0xf01a,	// (0x00065708) entry_hyb_candi_pane

0xf029,	// (0x00065717) grid_hyb_candi_pane_ParamLimits

0xf029,	// (0x00065717) grid_hyb_candi_pane

0xf03e,	// (0x0006572c) grid_hyb_phrase_pane_ParamLimits

0xf03e,	// (0x0006572c) grid_hyb_phrase_pane

0xf04d,	// (0x0006573b) cell_hyb_candi_pane_ParamLimits

0xf04d,	// (0x0006573b) cell_hyb_candi_pane

0xf070,	// (0x0006575e) cell_hyb_candi_scroll_pane

0x135c,	// (0x00057a4a) cell_hyb_candi_pane_g1

0xf079,	// (0x00065767) cell_hyb_candi_pane_t1

0xf087,	// (0x00065775) cell_hyb_phrase_pane

0x135c,	// (0x00057a4a) cell_hyb_phrase_pane_g1

0xf090,	// (0x0006577e) cell_hyb_phrase_pane_t1

0xf09e,	// (0x0006578c) entry_hyb_candi_pane_t1

0x17ba,	// (0x00057ea8) input_focus_pane_cp06

0xf0ac,	// (0x0006579a) cell_hyb_candi_scroll_pane_g1

0xf0b4,	// (0x000657a2) cell_hyb_candi_scroll_pane_g1_aid

0xf0bc,	// (0x000657aa) cell_hyb_candi_scroll_pane_g2

0xf0c4,	// (0x000657b2) cell_hyb_candi_scroll_pane_g2_aid

0xf0cc,	// (0x000657ba) cell_hyb_candi_scroll_pane_g3

0xf0d4,	// (0x000657c2) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large

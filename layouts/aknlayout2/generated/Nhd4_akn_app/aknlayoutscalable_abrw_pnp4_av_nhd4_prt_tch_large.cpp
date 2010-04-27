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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0004a315 };

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
0x7eb4,	// (0x000521c9) Screen

0x7ec8,	// (0x000521dd) application_window_ParamLimits

0x7ec8,	// (0x000521dd) application_window

0x7ee2,	// (0x000521f7) screen_g1

0x4962,	// (0x0004ec77) area_bottom_pane_ParamLimits

0x4962,	// (0x0004ec77) area_bottom_pane

0x4a22,	// (0x0004ed37) area_top_pane_ParamLimits

0x4a22,	// (0x0004ed37) area_top_pane

0x4ac0,	// (0x0004edd5) main_pane_ParamLimits

0x4ac0,	// (0x0004edd5) main_pane

0x7eec,	// (0x00052201) misc_graphics

0x986a,	// (0x00053b7f) battery_pane_ParamLimits

0x986a,	// (0x00053b7f) battery_pane

0xa549,	// (0x0005485e) bg_status_flat_pane_g8

0xa551,	// (0x00054866) bg_status_flat_pane_g9

0x992c,	// (0x00053c41) context_pane_ParamLimits

0x992c,	// (0x00053c41) context_pane

0x9a42,	// (0x00053d57) navi_pane_ParamLimits

0x9a42,	// (0x00053d57) navi_pane

0x9ac6,	// (0x00053ddb) signal_pane_ParamLimits

0x9ac6,	// (0x00053ddb) signal_pane

0x0008,

0xf879,	// (0x00059b8e) bg_status_flat_pane_g

0x9b33,	// (0x00053e48) status_pane_g1_ParamLimits

0x9b33,	// (0x00053e48) status_pane_g1

0x9b3f,	// (0x00053e54) status_pane_g2_ParamLimits

0x9b3f,	// (0x00053e54) status_pane_g2

0x9b4b,	// (0x00053e60) status_pane_g3_ParamLimits

0x9b4b,	// (0x00053e60) status_pane_g3

0x0004,

0xf7a5,	// (0x00059aba) status_pane_g_ParamLimits

0xf7a5,	// (0x00059aba) status_pane_g

0x9b7f,	// (0x00053e94) title_pane_ParamLimits

0x9b7f,	// (0x00053e94) title_pane

0x9bbc,	// (0x00053ed1) uni_indicator_pane_ParamLimits

0x9bbc,	// (0x00053ed1) uni_indicator_pane

0x9792,	// (0x00053aa7) bg_list_pane_ParamLimits

0x9792,	// (0x00053aa7) bg_list_pane

0x2101,	// (0x0004c416) find_pane

0x97b2,	// (0x00053ac7) listscroll_app_pane_ParamLimits

0x97b2,	// (0x00053ac7) listscroll_app_pane

0x97be,	// (0x00053ad3) listscroll_form_pane

0x5ab9,	// (0x0004fdce) listscroll_gen_pane_ParamLimits

0x5ab9,	// (0x0004fdce) listscroll_gen_pane

0x5acd,	// (0x0004fde2) listscroll_set_pane

0x8a08,	// (0x00052d1d) main_idle_act_pane

0x949e,	// (0x000537b3) main_idle_trad_pane

0x949e,	// (0x000537b3) main_list_empty_pane

0x97d8,	// (0x00053aed) main_midp_pane

0x97e4,	// (0x00053af9) main_pane_g1_ParamLimits

0x97e4,	// (0x00053af9) main_pane_g1

0x5ae3,	// (0x0004fdf8) popup_ai_message_window_ParamLimits

0x5ae3,	// (0x0004fdf8) popup_ai_message_window

0x5b8f,	// (0x0004fea4) popup_fep_china_uni_window_ParamLimits

0x5b8f,	// (0x0004fea4) popup_fep_china_uni_window

0x5be9,	// (0x0004fefe) popup_fep_japan_candidate_window_ParamLimits

0x5be9,	// (0x0004fefe) popup_fep_japan_candidate_window

0x5c07,	// (0x0004ff1c) popup_fep_japan_predictive_window_ParamLimits

0x5c07,	// (0x0004ff1c) popup_fep_japan_predictive_window

0x5c37,	// (0x0004ff4c) popup_find_window

0x5c44,	// (0x0004ff59) popup_grid_graphic_window_ParamLimits

0x5c44,	// (0x0004ff59) popup_grid_graphic_window

0x5c6c,	// (0x0004ff81) popup_large_graphic_colour_window

0x5c92,	// (0x0004ffa7) popup_menu_window_ParamLimits

0x5c92,	// (0x0004ffa7) popup_menu_window

0x5e4c,	// (0x00050161) popup_note_image_window

0x5e38,	// (0x0005014d) popup_note_wait_window_ParamLimits

0x5e38,	// (0x0005014d) popup_note_wait_window

0x5e38,	// (0x0005014d) popup_note_window_ParamLimits

0x5e38,	// (0x0005014d) popup_note_window

0x5ea2,	// (0x000501b7) popup_query_code_window_ParamLimits

0x5ea2,	// (0x000501b7) popup_query_code_window

0x5eb6,	// (0x000501cb) popup_query_data_code_window_ParamLimits

0x5eb6,	// (0x000501cb) popup_query_data_code_window

0x5ed1,	// (0x000501e6) popup_query_data_window_ParamLimits

0x5ed1,	// (0x000501e6) popup_query_data_window

0x5eeb,	// (0x00050200) popup_query_sat_info_window_ParamLimits

0x5eeb,	// (0x00050200) popup_query_sat_info_window

0x5f24,	// (0x00050239) popup_snote_single_graphic_window_ParamLimits

0x5f24,	// (0x00050239) popup_snote_single_graphic_window

0x5f24,	// (0x00050239) popup_snote_single_text_window_ParamLimits

0x5f24,	// (0x00050239) popup_snote_single_text_window

0x5f39,	// (0x0005024e) popup_sub_window_general

0x6067,	// (0x0005037c) popup_window_general_ParamLimits

0x6067,	// (0x0005037c) popup_window_general

0x97f2,	// (0x00053b07) power_save_pane

0x595f,	// (0x0004fc74) control_pane_g1_ParamLimits

0x595f,	// (0x0004fc74) control_pane_g1

0x5986,	// (0x0004fc9b) control_pane_g2_ParamLimits

0x5986,	// (0x0004fc9b) control_pane_g2

0x9755,	// (0x00053a6a) control_pane_g3_ParamLimits

0x9755,	// (0x00053a6a) control_pane_g3

0x0007,

0xf78d,	// (0x00059aa2) control_pane_g_ParamLimits

0xf78d,	// (0x00059aa2) control_pane_g

0x59ce,	// (0x0004fce3) control_pane_t1_ParamLimits

0x59ce,	// (0x0004fce3) control_pane_t1

0x5a1a,	// (0x0004fd2f) control_pane_t2_ParamLimits

0x5a1a,	// (0x0004fd2f) control_pane_t2

0x0002,

0xf79e,	// (0x00059ab3) control_pane_t_ParamLimits

0xf79e,	// (0x00059ab3) control_pane_t

0x967a,	// (0x0005398f) navi_navi_volume_pane_cp1

0x9682,	// (0x00053997) status_small_icon_pane

0x968a,	// (0x0005399f) status_small_pane_g1_ParamLimits

0x968a,	// (0x0005399f) status_small_pane_g1

0x96be,	// (0x000539d3) status_small_pane_g2_ParamLimits

0x96be,	// (0x000539d3) status_small_pane_g2

0x96ca,	// (0x000539df) status_small_pane_g3_ParamLimits

0x96ca,	// (0x000539df) status_small_pane_g3

0x96d6,	// (0x000539eb) status_small_pane_g4_ParamLimits

0x96d6,	// (0x000539eb) status_small_pane_g4

0x96e2,	// (0x000539f7) status_small_pane_g5_ParamLimits

0x96e2,	// (0x000539f7) status_small_pane_g5

0x96f0,	// (0x00053a05) status_small_pane_g6_ParamLimits

0x96f0,	// (0x00053a05) status_small_pane_g6

0x0007,

0xf77c,	// (0x00059a91) status_small_pane_g_ParamLimits

0xf77c,	// (0x00059a91) status_small_pane_g

0x971f,	// (0x00053a34) status_small_pane_t1

0x9741,	// (0x00053a56) status_small_wait_pane_ParamLimits

0x9741,	// (0x00053a56) status_small_wait_pane

0x8efc,	// (0x00053211) aid_levels_signal_ParamLimits

0x8efc,	// (0x00053211) aid_levels_signal

0x8f0e,	// (0x00053223) signal_pane_g1_ParamLimits

0x8f0e,	// (0x00053223) signal_pane_g1

0x8f23,	// (0x00053238) signal_pane_g2_ParamLimits

0x8f23,	// (0x00053238) signal_pane_g2

0x0003,

0xf70d,	// (0x00059a22) signal_pane_g_ParamLimits

0xf70d,	// (0x00059a22) signal_pane_g

0x8f5d,	// (0x00053272) context_pane_g1

0x7ef6,	// (0x0005220b) title_pane_g1

0x7f2c,	// (0x00052241) title_pane_t1

0x7f94,	// (0x000522a9) title_pane_t2

0x7fba,	// (0x000522cf) title_pane_t3

0x0002,

0xf557,	// (0x0005986c) title_pane_t

0x9bd4,	// (0x00053ee9) aid_levels_battery_ParamLimits

0x9bd4,	// (0x00053ee9) aid_levels_battery

0x9be8,	// (0x00053efd) battery_pane_g1_ParamLimits

0x9be8,	// (0x00053efd) battery_pane_g1

0x9bfe,	// (0x00053f13) battery_pane_g2_ParamLimits

0x9bfe,	// (0x00053f13) battery_pane_g2

0x0001,

0xf7b0,	// (0x00059ac5) battery_pane_g_ParamLimits

0xf7b0,	// (0x00059ac5) battery_pane_g

0xae7d,	// (0x00055192) uni_indicator_pane_g1

0xae93,	// (0x000551a8) uni_indicator_pane_g2

0xaea9,	// (0x000551be) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x00059c36) uni_indicator_pane_g

0x9310,	// (0x00053625) navi_icon_pane_ParamLimits

0x9310,	// (0x00053625) navi_icon_pane

0x924e,	// (0x00053563) navi_midp_pane

0x932c,	// (0x00053641) navi_navi_pane

0x9336,	// (0x0005364b) navi_text_pane_ParamLimits

0x9336,	// (0x0005364b) navi_text_pane

0x7ee2,	// (0x000521f7) status_small_wait_pane_g1

0x83dd,	// (0x000526f2) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00059c31) status_small_wait_pane_g

0xaba4,	// (0x00054eb9) navi_navi_icon_text_pane

0xabac,	// (0x00054ec1) navi_navi_pane_g1_ParamLimits

0xabac,	// (0x00054ec1) navi_navi_pane_g1

0xabbe,	// (0x00054ed3) navi_navi_pane_g2_ParamLimits

0xabbe,	// (0x00054ed3) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00059bff) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00059bff) navi_navi_pane_g

0xabd0,	// (0x00054ee5) navi_navi_tabs_pane

0xabd9,	// (0x00054eee) navi_navi_text_pane

0xaba4,	// (0x00054eb9) navi_navi_volume_pane

0xab80,	// (0x00054e95) navi_text_pane_t1

0xab74,	// (0x00054e89) navi_icon_pane_g1

0xaac7,	// (0x00054ddc) navi_navi_text_pane_t1

0x6343,	// (0x00050658) navi_navi_volume_pane_g1

0x634b,	// (0x00050660) volume_small_pane

0xaa2d,	// (0x00054d42) navi_navi_icon_text_pane_g1

0xaa35,	// (0x00054d4a) navi_navi_icon_text_pane_t1

0x932c,	// (0x00053641) navi_tabs_2_long_pane

0x932c,	// (0x00053641) navi_tabs_2_pane

0x932c,	// (0x00053641) navi_tabs_3_long_pane

0x932c,	// (0x00053641) navi_tabs_3_pane

0x932c,	// (0x00053641) navi_tabs_4_pane

0x6323,	// (0x00050638) tabs_2_active_pane_ParamLimits

0x6323,	// (0x00050638) tabs_2_active_pane

0x6333,	// (0x00050648) tabs_2_passive_pane_ParamLimits

0x6333,	// (0x00050648) tabs_2_passive_pane

0x62f1,	// (0x00050606) tabs_3_active_pane_ParamLimits

0x62f1,	// (0x00050606) tabs_3_active_pane

0x6301,	// (0x00050616) tabs_3_passive_pane_ParamLimits

0x6301,	// (0x00050616) tabs_3_passive_pane

0x6312,	// (0x00050627) tabs_3_passive_pane_cp_ParamLimits

0x6312,	// (0x00050627) tabs_3_passive_pane_cp

0x62ad,	// (0x000505c2) tabs_4_active_pane_ParamLimits

0x62ad,	// (0x000505c2) tabs_4_active_pane

0x62be,	// (0x000505d3) tabs_4_passive_pane_ParamLimits

0x62be,	// (0x000505d3) tabs_4_passive_pane

0x62cf,	// (0x000505e4) tabs_4_passive_pane_cp_ParamLimits

0x62cf,	// (0x000505e4) tabs_4_passive_pane_cp

0x62e0,	// (0x000505f5) tabs_4_passive_pane_cp2_ParamLimits

0x62e0,	// (0x000505f5) tabs_4_passive_pane_cp2

0x6289,	// (0x0005059e) tabs_2_long_active_pane_ParamLimits

0x6289,	// (0x0005059e) tabs_2_long_active_pane

0x629b,	// (0x000505b0) tabs_2_long_passive_pane_ParamLimits

0x629b,	// (0x000505b0) tabs_2_long_passive_pane

0x6250,	// (0x00050565) tabs_3_long_active_pane_ParamLimits

0x6250,	// (0x00050565) tabs_3_long_active_pane

0x6263,	// (0x00050578) tabs_3_long_passive_pane_ParamLimits

0x6263,	// (0x00050578) tabs_3_long_passive_pane

0x6276,	// (0x0005058b) tabs_3_long_passive_pane_cp_ParamLimits

0x6276,	// (0x0005058b) tabs_3_long_passive_pane_cp

0x61f6,	// (0x0005050b) volume_small_pane_g1

0x61ff,	// (0x00050514) volume_small_pane_g2

0x6208,	// (0x0005051d) volume_small_pane_g3

0x6211,	// (0x00050526) volume_small_pane_g4

0x621a,	// (0x0005052f) volume_small_pane_g5

0x6223,	// (0x00050538) volume_small_pane_g6

0x622c,	// (0x00050541) volume_small_pane_g7

0x6235,	// (0x0005054a) volume_small_pane_g8

0x623e,	// (0x00050553) volume_small_pane_g9

0x6247,	// (0x0005055c) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00059bcb) volume_small_pane_g

0x7fcc,	// (0x000522e1) bg_active_tab_pane_cp2_ParamLimits

0x7fcc,	// (0x000522e1) bg_active_tab_pane_cp2

0x7fda,	// (0x000522ef) tabs_3_active_pane_g1

0x7fe2,	// (0x000522f7) tabs_3_active_pane_t1

0x7fcc,	// (0x000522e1) bg_passive_tab_pane_cp2_ParamLimits

0x7fcc,	// (0x000522e1) bg_passive_tab_pane_cp2

0x7fda,	// (0x000522ef) tabs_3_passive_pane_g1

0x7fe2,	// (0x000522f7) tabs_3_passive_pane_t1

0x7fcc,	// (0x000522e1) bg_active_tab_pane_cp3_ParamLimits

0x7fcc,	// (0x000522e1) bg_active_tab_pane_cp3

0x7ff4,	// (0x00052309) tabs_4_active_pane_g1

0x7ffc,	// (0x00052311) tabs_4_active_pane_t1

0x7fcc,	// (0x000522e1) bg_passive_tab_pane_cp3_ParamLimits

0x7fcc,	// (0x000522e1) bg_passive_tab_pane_cp3

0x7ff4,	// (0x00052309) tabs_4_1_passive_pane_g1

0x7ffc,	// (0x00052311) tabs_4_1_passive_pane_t1

0x97d8,	// (0x00053aed) list_highlight_pane_cp2

0xb0ed,	// (0x00055402) list_set_pane_ParamLimits

0xb0ed,	// (0x00055402) list_set_pane

0xb18f,	// (0x000554a4) main_pane_set_t1_ParamLimits

0xb18f,	// (0x000554a4) main_pane_set_t1

0xb1af,	// (0x000554c4) main_pane_set_t2_ParamLimits

0xb1af,	// (0x000554c4) main_pane_set_t2

0xb1c3,	// (0x000554d8) main_pane_set_t3_ParamLimits

0xb1c3,	// (0x000554d8) main_pane_set_t3

0xb1d5,	// (0x000554ea) main_pane_set_t4_ParamLimits

0xb1d5,	// (0x000554ea) main_pane_set_t4

0x0003,

0xf986,	// (0x00059c9b) main_pane_set_t_ParamLimits

0xf986,	// (0x00059c9b) main_pane_set_t

0xb1e7,	// (0x000554fc) setting_code_pane

0xb1f1,	// (0x00055506) setting_slider_graphic_pane

0xb1f1,	// (0x00055506) setting_slider_pane

0xb1f1,	// (0x00055506) setting_text_pane

0xb1f1,	// (0x00055506) setting_volume_pane

0x4d01,	// (0x0004f016) volume_set_pane

0x7fcc,	// (0x000522e1) bg_set_opt_pane_cp

0x4d09,	// (0x0004f01e) setting_slider_pane_t1

0x4d22,	// (0x0004f037) setting_slider_pane_t2

0x4d3c,	// (0x0004f051) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00059873) setting_slider_pane_t

0x4d54,	// (0x0004f069) slider_set_pane

0x7eec,	// (0x00052201) bg_set_opt_pane_cp2

0x800e,	// (0x00052323) setting_slider_graphic_pane_g1

0x4d6a,	// (0x0004f07f) setting_slider_graphic_pane_t1

0x4d7a,	// (0x0004f08f) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005987a) setting_slider_graphic_pane_t

0x4d8a,	// (0x0004f09f) slider_set_pane_cp

0x7eec,	// (0x00052201) input_focus_pane_cp1

0xb0ac,	// (0x000553c1) list_set_text_pane

0x7ee2,	// (0x000521f7) setting_text_pane_g1

0x7eec,	// (0x00052201) input_focus_pane_cp2

0x7ee2,	// (0x000521f7) setting_code_pane_g1

0x8017,	// (0x0005232c) setting_code_pane_t1

0x4d92,	// (0x0004f0a7) set_text_pane_t1_ParamLimits

0x4d92,	// (0x0004f0a7) set_text_pane_t1

0x8881,	// (0x00052b96) set_opt_bg_pane_g1

0x8889,	// (0x00052b9e) set_opt_bg_pane_g2

0xb08c,	// (0x000553a1) set_opt_bg_pane_g3

0x8899,	// (0x00052bae) set_opt_bg_pane_g4

0x88a1,	// (0x00052bb6) set_opt_bg_pane_g5

0x88a9,	// (0x00052bbe) set_opt_bg_pane_g6

0xb094,	// (0x000553a9) set_opt_bg_pane_g7

0xb09c,	// (0x000553b1) set_opt_bg_pane_g8

0xb0a4,	// (0x000553b9) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00059c88) set_opt_bg_pane_g

0xb07f,	// (0x00055394) slider_set_pane_g1

0x63b8,	// (0x000506cd) slider_set_pane_g2

0x0006,

0xf964,	// (0x00059c79) slider_set_pane_g

0x6354,	// (0x00050669) volume_set_pane_g1

0x635c,	// (0x00050671) volume_set_pane_g2

0x6364,	// (0x00050679) volume_set_pane_g3

0x636c,	// (0x00050681) volume_set_pane_g4

0x6374,	// (0x00050689) volume_set_pane_g5

0x637c,	// (0x00050691) volume_set_pane_g6

0x6384,	// (0x00050699) volume_set_pane_g7

0x638c,	// (0x000506a1) volume_set_pane_g8

0x6394,	// (0x000506a9) volume_set_pane_g9

0x639c,	// (0x000506b1) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00059c51) volume_set_pane_g

0x8025,	// (0x0005233a) indicator_pane_ParamLimits

0x8025,	// (0x0005233a) indicator_pane

0x8031,	// (0x00052346) main_idle_pane_g2_ParamLimits

0x8031,	// (0x00052346) main_idle_pane_g2

0x8059,	// (0x0005236e) main_pane_idle_g1_ParamLimits

0x8059,	// (0x0005236e) main_pane_idle_g1

0x8066,	// (0x0005237b) popup_clock_digital_analogue_window_ParamLimits

0x8066,	// (0x0005237b) popup_clock_digital_analogue_window

0x807d,	// (0x00052392) soft_indicator_pane_ParamLimits

0x807d,	// (0x00052392) soft_indicator_pane

0x8089,	// (0x0005239e) wallpaper_pane_ParamLimits

0x8089,	// (0x0005239e) wallpaper_pane

0x7ee2,	// (0x000521f7) wallpaper_pane_g1

0x809d,	// (0x000523b2) indicator_pane_g1_ParamLimits

0x809d,	// (0x000523b2) indicator_pane_g1

0xb447,	// (0x0005575c) navi_navi_icon_text_pane_srt_g1

0x80b8,	// (0x000523cd) soft_indicator_pane_t1

0x80d2,	// (0x000523e7) aid_ps_area_pane

0x80e3,	// (0x000523f8) aid_ps_clock_pane

0x80f1,	// (0x00052406) aid_ps_indicator_pane

0x80fd,	// (0x00052412) indicator_ps_pane_ParamLimits

0x80fd,	// (0x00052412) indicator_ps_pane

0x810c,	// (0x00052421) power_save_pane_g1_ParamLimits

0x810c,	// (0x00052421) power_save_pane_g1

0x8118,	// (0x0005242d) power_save_pane_g2_ParamLimits

0x8118,	// (0x0005242d) power_save_pane_g2

0x4916,	// (0x0004ec2b) aid_navinavi_width_pane

0x80d2,	// (0x000523e7) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005987f) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005987f) power_save_pane_g

0x8126,	// (0x0005243b) power_save_pane_t1_ParamLimits

0x8126,	// (0x0005243b) power_save_pane_t1

0x80e3,	// (0x000523f8) aid_ps_clock_pane_ParamLimits

0x80f1,	// (0x00052406) aid_ps_indicator_pane_ParamLimits

0x8138,	// (0x0005244d) power_save_pane_t4_ParamLimits

0x8138,	// (0x0005244d) power_save_pane_t4

0x0001,

0xf56f,	// (0x00059884) power_save_pane_t_ParamLimits

0xf56f,	// (0x00059884) power_save_pane_t

0x8162,	// (0x00052477) power_save_t3_ParamLimits

0x8162,	// (0x00052477) power_save_t3

0x814d,	// (0x00052462) power_save_t2_ParamLimits

0x814d,	// (0x00052462) power_save_t2

0x8177,	// (0x0005248c) indicator_ps_pane_g1

0x8180,	// (0x00052495) ai_gene_pane_ParamLimits

0x8180,	// (0x00052495) ai_gene_pane

0x818c,	// (0x000524a1) ai_links_pane_ParamLimits

0x818c,	// (0x000524a1) ai_links_pane

0x8198,	// (0x000524ad) indicator_pane_cp1_ParamLimits

0x8198,	// (0x000524ad) indicator_pane_cp1

0x81a4,	// (0x000524b9) main_pane_idle_g1_cp_ParamLimits

0x81a4,	// (0x000524b9) main_pane_idle_g1_cp

0x81b0,	// (0x000524c5) popup_ai_links_title_window

0x81b9,	// (0x000524ce) soft_indicator_pane_cp1_ParamLimits

0x81b9,	// (0x000524ce) soft_indicator_pane_cp1

0xae6b,	// (0x00055180) ai_links_pane_g1

0xae74,	// (0x00055189) grid_ai_links_pane

0xae4e,	// (0x00055163) ai_gene_pane_1

0xae59,	// (0x0005516e) ai_gene_pane_2

0xae62,	// (0x00055177) list_highlight_pane_cp4

0xae32,	// (0x00055147) cell_ai_link_pane_ParamLimits

0xae32,	// (0x00055147) cell_ai_link_pane

0xae2a,	// (0x0005513f) cell_ai_link_pane_g1

0x83dd,	// (0x000526f2) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x00059c2c) cell_ai_link_pane_g

0x7eec,	// (0x00052201) grid_highlight_cp2

0x7eec,	// (0x00052201) bg_popup_sub_pane_cp1

0x81d3,	// (0x000524e8) popup_ai_links_title_window_t1

0xad7a,	// (0x0005508f) ai_gene_pane_1_g1_ParamLimits

0xad7a,	// (0x0005508f) ai_gene_pane_1_g1

0xad86,	// (0x0005509b) ai_gene_pane_1_g2_ParamLimits

0xad86,	// (0x0005509b) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00059c22) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00059c22) ai_gene_pane_1_g

0xad93,	// (0x000550a8) ai_gene_pane_1_t1_ParamLimits

0xad93,	// (0x000550a8) ai_gene_pane_1_t1

0xadc7,	// (0x000550dc) grid_ai_soft_ind_pane

0xad65,	// (0x0005507a) ai_gene_pane_2_t1_ParamLimits

0xad65,	// (0x0005507a) ai_gene_pane_2_t1

0x81e2,	// (0x000524f7) main_pane_empty_t1_ParamLimits

0x81e2,	// (0x000524f7) main_pane_empty_t1

0x81fa,	// (0x0005250f) main_pane_empty_t2_ParamLimits

0x81fa,	// (0x0005250f) main_pane_empty_t2

0x820f,	// (0x00052524) main_pane_empty_t3_ParamLimits

0x820f,	// (0x00052524) main_pane_empty_t3

0x8221,	// (0x00052536) main_pane_empty_t4_ParamLimits

0x8221,	// (0x00052536) main_pane_empty_t4

0x8233,	// (0x00052548) main_pane_empty_t5_ParamLimits

0x8233,	// (0x00052548) main_pane_empty_t5

0x0004,

0xf574,	// (0x00059889) main_pane_empty_t_ParamLimits

0xf574,	// (0x00059889) main_pane_empty_t

0x88d2,	// (0x00052be7) bg_popup_window_pane_ParamLimits

0x88d2,	// (0x00052be7) bg_popup_window_pane

0xaad5,	// (0x00054dea) find_popup_pane_cp2_ParamLimits

0xaad5,	// (0x00054dea) find_popup_pane_cp2

0xaae1,	// (0x00054df6) heading_pane_ParamLimits

0xaae1,	// (0x00054df6) heading_pane

0x7eec,	// (0x00052201) bg_popup_sub_pane

0xaa4f,	// (0x00054d64) bg_popup_window_pane_g1_ParamLimits

0xaa4f,	// (0x00054d64) bg_popup_window_pane_g1

0xaa5b,	// (0x00054d70) bg_popup_window_pane_g2_ParamLimits

0xaa5b,	// (0x00054d70) bg_popup_window_pane_g2

0xaa67,	// (0x00054d7c) bg_popup_window_pane_g3_ParamLimits

0xaa67,	// (0x00054d7c) bg_popup_window_pane_g3

0xaa73,	// (0x00054d88) bg_popup_window_pane_g4_ParamLimits

0xaa73,	// (0x00054d88) bg_popup_window_pane_g4

0xaa7f,	// (0x00054d94) bg_popup_window_pane_g5_ParamLimits

0xaa7f,	// (0x00054d94) bg_popup_window_pane_g5

0xaa8b,	// (0x00054da0) bg_popup_window_pane_g6_ParamLimits

0xaa8b,	// (0x00054da0) bg_popup_window_pane_g6

0xaa97,	// (0x00054dac) bg_popup_window_pane_g7_ParamLimits

0xaa97,	// (0x00054dac) bg_popup_window_pane_g7

0xaaa3,	// (0x00054db8) bg_popup_window_pane_g8_ParamLimits

0xaaa3,	// (0x00054db8) bg_popup_window_pane_g8

0xaaaf,	// (0x00054dc4) bg_popup_window_pane_g9_ParamLimits

0xaaaf,	// (0x00054dc4) bg_popup_window_pane_g9

0xaabb,	// (0x00054dd0) bg_popup_window_pane_g10_ParamLimits

0xaabb,	// (0x00054dd0) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00059bea) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00059bea) bg_popup_window_pane_g

0xa9e4,	// (0x00054cf9) bg_popup_heading_pane_ParamLimits

0xa9e4,	// (0x00054cf9) bg_popup_heading_pane

0x6440,	// (0x00050755) tabs_4_passive_pane_cp_srt_ParamLimits

0x6440,	// (0x00050755) tabs_4_passive_pane_cp_srt

0x6452,	// (0x00050767) tabs_4_passive_pane_srt_ParamLimits

0xa9f8,	// (0x00054d0d) heading_pane_g2

0x6452,	// (0x00050767) tabs_4_passive_pane_srt

0x97d8,	// (0x00053aed) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97d8,	// (0x00053aed) bg_passive_tab_pane_cp3_srt

0xaa00,	// (0x00054d15) heading_pane_t1_ParamLimits

0xaa00,	// (0x00054d15) heading_pane_t1

0xaa17,	// (0x00054d2c) heading_pane_t2_ParamLimits

0xaa17,	// (0x00054d2c) heading_pane_t2

0x0001,

0xf8d0,	// (0x00059be5) heading_pane_t_ParamLimits

0xf8d0,	// (0x00059be5) heading_pane_t

0xa511,	// (0x00054826) bg_popup_heading_pane_g1

0xa5c0,	// (0x000548d5) bg_popup_heading_pane_g2

0xa5ca,	// (0x000548df) bg_popup_heading_pane_g3

0xa5d4,	// (0x000548e9) bg_popup_heading_pane_g4

0xa5de,	// (0x000548f3) bg_popup_heading_pane_g5

0xa5e8,	// (0x000548fd) bg_popup_heading_pane_g6

0xa5f0,	// (0x00054905) bg_popup_heading_pane_g7

0xa5f8,	// (0x0005490d) bg_popup_heading_pane_g8

0xa602,	// (0x00054917) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00059ba1) bg_popup_heading_pane_g

0x9cd6,	// (0x00053feb) bg_popup_sub_pane_g1

0x9ce6,	// (0x00053ffb) bg_popup_sub_pane_g2

0x9cde,	// (0x00053ff3) bg_popup_sub_pane_g3

0x9cf6,	// (0x0005400b) bg_popup_sub_pane_g4

0x9cee,	// (0x00054003) bg_popup_sub_pane_g5

0x9cfe,	// (0x00054013) bg_popup_sub_pane_g6

0x9d06,	// (0x0005401b) bg_popup_sub_pane_g7

0x9d16,	// (0x0005402b) bg_popup_sub_pane_g8

0x9d0e,	// (0x00054023) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00059b7b) bg_popup_sub_pane_g

0x8247,	// (0x0005255c) bg_popup_window_pane_cp5_ParamLimits

0x8247,	// (0x0005255c) bg_popup_window_pane_cp5

0x8263,	// (0x00052578) popup_note_window_g1_ParamLimits

0x8263,	// (0x00052578) popup_note_window_g1

0x826f,	// (0x00052584) popup_note_window_t1_ParamLimits

0x826f,	// (0x00052584) popup_note_window_t1

0x8281,	// (0x00052596) popup_note_window_t2_ParamLimits

0x8281,	// (0x00052596) popup_note_window_t2

0x8293,	// (0x000525a8) popup_note_window_t3_ParamLimits

0x8293,	// (0x000525a8) popup_note_window_t3

0x82a5,	// (0x000525ba) popup_note_window_t4_ParamLimits

0x82a5,	// (0x000525ba) popup_note_window_t4

0x82cd,	// (0x000525e2) popup_note_window_t5_ParamLimits

0x82cd,	// (0x000525e2) popup_note_window_t5

0x0004,

0xf57f,	// (0x00059894) popup_note_window_t_ParamLimits

0xf57f,	// (0x00059894) popup_note_window_t

0x82f1,	// (0x00052606) bg_popup_window_pane_cp6_ParamLimits

0x82f1,	// (0x00052606) bg_popup_window_pane_cp6

0xa485,	// (0x0005479a) popup_note_image_window_g1_ParamLimits

0xa485,	// (0x0005479a) popup_note_image_window_g1

0xa491,	// (0x000547a6) popup_note_image_window_g2_ParamLimits

0xa491,	// (0x000547a6) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00059b6f) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00059b6f) popup_note_image_window_g

0xa4aa,	// (0x000547bf) popup_note_image_window_t1_ParamLimits

0xa4aa,	// (0x000547bf) popup_note_image_window_t1

0xa4c3,	// (0x000547d8) popup_note_image_window_t2_ParamLimits

0xa4c3,	// (0x000547d8) popup_note_image_window_t2

0xa4dc,	// (0x000547f1) popup_note_image_window_t3_ParamLimits

0xa4dc,	// (0x000547f1) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00059b74) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00059b74) popup_note_image_window_t

0xa346,	// (0x0005465b) bg_popup_window_pane_cp7_ParamLimits

0xa346,	// (0x0005465b) bg_popup_window_pane_cp7

0xa376,	// (0x0005468b) popup_note_wait_window_g1_ParamLimits

0xa376,	// (0x0005468b) popup_note_wait_window_g1

0xa382,	// (0x00054697) popup_note_wait_window_g2_ParamLimits

0xa382,	// (0x00054697) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00059b5d) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00059b5d) popup_note_wait_window_g

0xa39a,	// (0x000546af) popup_note_wait_window_t1_ParamLimits

0xa39a,	// (0x000546af) popup_note_wait_window_t1

0xa3c1,	// (0x000546d6) popup_note_wait_window_t2_ParamLimits

0xa3c1,	// (0x000546d6) popup_note_wait_window_t2

0xa3de,	// (0x000546f3) popup_note_wait_window_t3_ParamLimits

0xa3de,	// (0x000546f3) popup_note_wait_window_t3

0xa3f1,	// (0x00054706) popup_note_wait_window_t4_ParamLimits

0xa3f1,	// (0x00054706) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00059b64) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00059b64) popup_note_wait_window_t

0xa416,	// (0x0005472b) wait_bar_pane_ParamLimits

0xa416,	// (0x0005472b) wait_bar_pane

0x7eec,	// (0x00052201) wait_anim_pane

0x7eec,	// (0x00052201) wait_border_pane

0x7ee2,	// (0x000521f7) wait_anim_pane_g1

0x7ee2,	// (0x000521f7) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00059a1d) wait_anim_pane_g

0xa2ea,	// (0x000545ff) wait_border_pane_g1

0xa2f5,	// (0x0005460a) wait_border_pane_g2

0xa2fe,	// (0x00054613) wait_border_pane_g3

0x0002,

0xf841,	// (0x00059b56) wait_border_pane_g

0xa15a,	// (0x0005446f) bg_popup_window_pane_cp16_ParamLimits

0xa15a,	// (0x0005446f) bg_popup_window_pane_cp16

0xa25a,	// (0x0005456f) indicator_popup_pane_cp4_ParamLimits

0xa25a,	// (0x0005456f) indicator_popup_pane_cp4

0xa26e,	// (0x00054583) popup_query_data_window_t1_ParamLimits

0xa26e,	// (0x00054583) popup_query_data_window_t1

0xa280,	// (0x00054595) popup_query_data_window_t2_ParamLimits

0xa280,	// (0x00054595) popup_query_data_window_t2

0xa299,	// (0x000545ae) popup_query_data_window_t3_ParamLimits

0xa299,	// (0x000545ae) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00059b4f) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00059b4f) popup_query_data_window_t

0xa2b3,	// (0x000545c8) query_popup_data_pane_ParamLimits

0xa2b3,	// (0x000545c8) query_popup_data_pane

0xa2c7,	// (0x000545dc) query_popup_data_pane_cp1_ParamLimits

0xa2c7,	// (0x000545dc) query_popup_data_pane_cp1

0xa15a,	// (0x0005446f) bg_popup_window_pane_cp10_ParamLimits

0xa15a,	// (0x0005446f) bg_popup_window_pane_cp10

0xa18c,	// (0x000544a1) indicator_popup_pane_ParamLimits

0xa18c,	// (0x000544a1) indicator_popup_pane

0xa1ae,	// (0x000544c3) popup_query_code_window_t1_ParamLimits

0xa1ae,	// (0x000544c3) popup_query_code_window_t1

0xa1c8,	// (0x000544dd) popup_query_code_window_t2_ParamLimits

0xa1c8,	// (0x000544dd) popup_query_code_window_t2

0xa211,	// (0x00054526) popup_query_code_window_t3_ParamLimits

0xa211,	// (0x00054526) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00059b48) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00059b48) popup_query_code_window_t

0xa240,	// (0x00054555) query_popup_pane_ParamLimits

0xa240,	// (0x00054555) query_popup_pane

0x82f1,	// (0x00052606) bg_popup_window_pane_cp15_ParamLimits

0x82f1,	// (0x00052606) bg_popup_window_pane_cp15

0x830f,	// (0x00052624) indicator_popup_pane_cp1_ParamLimits

0x830f,	// (0x00052624) indicator_popup_pane_cp1

0x8322,	// (0x00052637) indicator_popup_pane_cp2_ParamLimits

0x8322,	// (0x00052637) indicator_popup_pane_cp2

0x8335,	// (0x0005264a) popup_query_data_code_window_g1_ParamLimits

0x8335,	// (0x0005264a) popup_query_data_code_window_g1

0x8348,	// (0x0005265d) popup_query_data_code_window_t1_ParamLimits

0x8348,	// (0x0005265d) popup_query_data_code_window_t1

0x835a,	// (0x0005266f) popup_query_data_code_window_t2_ParamLimits

0x835a,	// (0x0005266f) popup_query_data_code_window_t2

0x836c,	// (0x00052681) popup_query_data_code_window_t3_ParamLimits

0x836c,	// (0x00052681) popup_query_data_code_window_t3

0x8382,	// (0x00052697) popup_query_data_code_window_t4_ParamLimits

0x8382,	// (0x00052697) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005989f) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005989f) popup_query_data_code_window_t

0x60f3,	// (0x00050408) list_single_midp_graphic_pane_g3

0x839a,	// (0x000526af) query_popup_data_pane_cp2_ParamLimits

0x83ad,	// (0x000526c2) query_popup_pane_cp2_ParamLimits

0x83ad,	// (0x000526c2) query_popup_pane_cp2

0x7eec,	// (0x00052201) bg_popup_window_pane_cp11

0xa152,	// (0x00054467) heading_pane_cp5

0x8498,	// (0x000527ad) listscroll_popup_info_pane

0x7eec,	// (0x00052201) input_focus_pane_cp3

0x83c0,	// (0x000526d5) query_popup_pane_t1

0x83ce,	// (0x000526e3) list_popup_info_pane_ParamLimits

0x83ce,	// (0x000526e3) list_popup_info_pane

0x83dd,	// (0x000526f2) listscroll_popup_info_pane_g1

0x83e5,	// (0x000526fa) scroll_pane_cp7

0x83ef,	// (0x00052704) popup_info_list_pane_t1_ParamLimits

0x83ef,	// (0x00052704) popup_info_list_pane_t1

0x8409,	// (0x0005271e) popup_info_list_pane_t2_ParamLimits

0x8409,	// (0x0005271e) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000598a8) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000598a8) popup_info_list_pane_t

0x7eec,	// (0x00052201) bg_popup_window_pane_cp12

0xb461,	// (0x00055776) find_popup_pane

0x7fcc,	// (0x000522e1) bg_popup_window_pane_cp3

0x8423,	// (0x00052738) heading_pane_cp3

0x842f,	// (0x00052744) listscroll_popup_graphic_pane

0x7eec,	// (0x00052201) bg_popup_window_pane_cp4

0x848e,	// (0x000527a3) heading_pane_cp4

0x8498,	// (0x000527ad) listscroll_popup_colour_pane

0x84a0,	// (0x000527b5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x84a0,	// (0x000527b5) cell_large_graphic_colour_none_popup_pane

0x84b4,	// (0x000527c9) grid_large_graphic_colour_popup_pane_ParamLimits

0x84b4,	// (0x000527c9) grid_large_graphic_colour_popup_pane

0x84dc,	// (0x000527f1) listscroll_popup_colour_pane_g1_ParamLimits

0x84dc,	// (0x000527f1) listscroll_popup_colour_pane_g1

0x84f3,	// (0x00052808) listscroll_popup_colour_pane_g2_ParamLimits

0x84f3,	// (0x00052808) listscroll_popup_colour_pane_g2

0x850a,	// (0x0005281f) listscroll_popup_colour_pane_g3_ParamLimits

0x850a,	// (0x0005281f) listscroll_popup_colour_pane_g3

0x851a,	// (0x0005282f) listscroll_popup_colour_pane_g4_ParamLimits

0x851a,	// (0x0005282f) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000598ad) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000598ad) listscroll_popup_colour_pane_g

0x8529,	// (0x0005283e) scroll_pane_cp6_ParamLimits

0x8529,	// (0x0005283e) scroll_pane_cp6

0x853b,	// (0x00052850) cell_large_graphic_colour_popup_pane_ParamLimits

0x853b,	// (0x00052850) cell_large_graphic_colour_popup_pane

0x855a,	// (0x0005286f) cell_large_graphic_colour_none_popup_pane_t1

0x7eec,	// (0x00052201) grid_highlight_pane_cp5

0x8569,	// (0x0005287e) cell_large_graphic_colour_popup_pane_g1

0x8571,	// (0x00052886) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000598b6) cell_large_graphic_colour_popup_pane_g

0x8579,	// (0x0005288e) cell_large_graphic_colour_popup_pane_g2_copy1

0x8582,	// (0x00052897) grid_highlight_pane_cp4

0x858a,	// (0x0005289f) bg_popup_window_pane_cp8_ParamLimits

0x858a,	// (0x0005289f) bg_popup_window_pane_cp8

0x85a5,	// (0x000528ba) popup_snote_single_text_window_g1_ParamLimits

0x85a5,	// (0x000528ba) popup_snote_single_text_window_g1

0x85b7,	// (0x000528cc) popup_snote_single_text_window_t1_ParamLimits

0x85b7,	// (0x000528cc) popup_snote_single_text_window_t1

0x85ca,	// (0x000528df) popup_snote_single_text_window_t2_ParamLimits

0x85ca,	// (0x000528df) popup_snote_single_text_window_t2

0x85dd,	// (0x000528f2) popup_snote_single_text_window_t3_ParamLimits

0x85dd,	// (0x000528f2) popup_snote_single_text_window_t3

0x8616,	// (0x0005292b) popup_snote_single_text_window_t4_ParamLimits

0x8616,	// (0x0005292b) popup_snote_single_text_window_t4

0x864a,	// (0x0005295f) popup_snote_single_text_window_t5_ParamLimits

0x864a,	// (0x0005295f) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000598bb) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000598bb) popup_snote_single_text_window_t

0x8679,	// (0x0005298e) bg_popup_window_pane_cp9_ParamLimits

0x8679,	// (0x0005298e) bg_popup_window_pane_cp9

0x85a5,	// (0x000528ba) popup_snote_single_graphic_window_g1_ParamLimits

0x85a5,	// (0x000528ba) popup_snote_single_graphic_window_g1

0x8687,	// (0x0005299c) popup_snote_single_graphic_window_g2_ParamLimits

0x8687,	// (0x0005299c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000598c6) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000598c6) popup_snote_single_graphic_window_g

0x8693,	// (0x000529a8) popup_snote_single_graphic_window_t1_ParamLimits

0x8693,	// (0x000529a8) popup_snote_single_graphic_window_t1

0x86a6,	// (0x000529bb) popup_snote_single_graphic_window_t2_ParamLimits

0x86a6,	// (0x000529bb) popup_snote_single_graphic_window_t2

0x86b9,	// (0x000529ce) popup_snote_single_graphic_window_t3_ParamLimits

0x86b9,	// (0x000529ce) popup_snote_single_graphic_window_t3

0x86f2,	// (0x00052a07) popup_snote_single_graphic_window_t4_ParamLimits

0x86f2,	// (0x00052a07) popup_snote_single_graphic_window_t4

0x8726,	// (0x00052a3b) popup_snote_single_graphic_window_t5_ParamLimits

0x8726,	// (0x00052a3b) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000598cb) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000598cb) popup_snote_single_graphic_window_t

0xb3a5,	// (0x000556ba) grid_graphic_popup_pane_ParamLimits

0xb3a5,	// (0x000556ba) grid_graphic_popup_pane

0xb3cd,	// (0x000556e2) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3cd,	// (0x000556e2) listscroll_popup_graphic_pane_g1

0xb3e1,	// (0x000556f6) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3e1,	// (0x000556f6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00059cc5) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00059cc5) listscroll_popup_graphic_pane_g

0xb3f5,	// (0x0005570a) scroll_pane_cp5

0xb345,	// (0x0005565a) cell_graphic_popup_pane_ParamLimits

0xb345,	// (0x0005565a) cell_graphic_popup_pane

0xb326,	// (0x0005563b) cell_graphic_popup_pane_g1

0xb32e,	// (0x00055643) cell_graphic_popup_pane_g2

0x8579,	// (0x0005288e) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x00059cbe) cell_graphic_popup_pane_g

0xb337,	// (0x0005564c) cell_graphic_popup_pane_t2

0x8582,	// (0x00052897) grid_highlight_pane_cp3

0x8767,	// (0x00052a7c) list_gen_pane_ParamLimits

0x8767,	// (0x00052a7c) list_gen_pane

0x8799,	// (0x00052aae) scroll_pane

0xb288,	// (0x0005559d) bg_list_pane_g1_ParamLimits

0xb288,	// (0x0005559d) bg_list_pane_g1

0xb2a3,	// (0x000555b8) bg_list_pane_g2_ParamLimits

0xb2a3,	// (0x000555b8) bg_list_pane_g2

0xb2b6,	// (0x000555cb) bg_list_pane_g3_ParamLimits

0xb2b6,	// (0x000555cb) bg_list_pane_g3

0xb2c8,	// (0x000555dd) bg_list_pane_g4_ParamLimits

0xb2c8,	// (0x000555dd) bg_list_pane_g4

0xb2da,	// (0x000555ef) bg_list_pane_g5_ParamLimits

0xb2da,	// (0x000555ef) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00059cb3) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00059cb3) bg_list_pane_g

0x76f3,	// (0x00051a08) list_double2_graphic_large_graphic_pane_ParamLimits

0x76f3,	// (0x00051a08) list_double2_graphic_large_graphic_pane

0x76f3,	// (0x00051a08) list_double2_graphic_pane_ParamLimits

0x76f3,	// (0x00051a08) list_double2_graphic_pane

0x76f3,	// (0x00051a08) list_double2_large_graphic_pane_ParamLimits

0x76f3,	// (0x00051a08) list_double2_large_graphic_pane

0x76f3,	// (0x00051a08) list_double2_pane_ParamLimits

0x76f3,	// (0x00051a08) list_double2_pane

0x76f3,	// (0x00051a08) list_double_graphic_heading_pane_ParamLimits

0x76f3,	// (0x00051a08) list_double_graphic_heading_pane

0x76f3,	// (0x00051a08) list_double_graphic_pane_ParamLimits

0x76f3,	// (0x00051a08) list_double_graphic_pane

0x76f3,	// (0x00051a08) list_double_heading_pane_ParamLimits

0x76f3,	// (0x00051a08) list_double_heading_pane

0x76f3,	// (0x00051a08) list_double_large_graphic_pane_ParamLimits

0x76f3,	// (0x00051a08) list_double_large_graphic_pane

0x76f3,	// (0x00051a08) list_double_number_pane_ParamLimits

0x76f3,	// (0x00051a08) list_double_number_pane

0x76f3,	// (0x00051a08) list_double_pane_ParamLimits

0x76f3,	// (0x00051a08) list_double_pane

0x76f3,	// (0x00051a08) list_double_time_pane_ParamLimits

0x76f3,	// (0x00051a08) list_double_time_pane

0x76f3,	// (0x00051a08) list_setting_number_pane_ParamLimits

0x76f3,	// (0x00051a08) list_setting_number_pane

0x76f3,	// (0x00051a08) list_setting_pane_ParamLimits

0x76f3,	// (0x00051a08) list_setting_pane

0x7761,	// (0x00051a76) list_single_2graphic_pane_ParamLimits

0x7761,	// (0x00051a76) list_single_2graphic_pane

0x7761,	// (0x00051a76) list_single_graphic_heading_pane_ParamLimits

0x7761,	// (0x00051a76) list_single_graphic_heading_pane

0x7761,	// (0x00051a76) list_single_graphic_pane_ParamLimits

0x7761,	// (0x00051a76) list_single_graphic_pane

0x7761,	// (0x00051a76) list_single_heading_pane_ParamLimits

0x7761,	// (0x00051a76) list_single_heading_pane

0x77e2,	// (0x00051af7) list_single_large_graphic_pane_ParamLimits

0x77e2,	// (0x00051af7) list_single_large_graphic_pane

0x7761,	// (0x00051a76) list_single_number_heading_pane_ParamLimits

0x7761,	// (0x00051a76) list_single_number_heading_pane

0x7761,	// (0x00051a76) list_single_number_pane_ParamLimits

0x7761,	// (0x00051a76) list_single_number_pane

0x7761,	// (0x00051a76) list_single_pane_ParamLimits

0x7761,	// (0x00051a76) list_single_pane

0x7eec,	// (0x00052201) list_highlight_pane_cp1

0x7510,	// (0x00051825) list_single_pane_g1_ParamLimits

0x7510,	// (0x00051825) list_single_pane_g1

0x751c,	// (0x00051831) list_single_pane_g2_ParamLimits

0x751c,	// (0x00051831) list_single_pane_g2

0x0001,

0xf5d2,	// (0x000598e7) list_single_pane_g_ParamLimits

0xf5d2,	// (0x000598e7) list_single_pane_g

0x76dd,	// (0x000519f2) list_single_pane_t1_ParamLimits

0x76dd,	// (0x000519f2) list_single_pane_t1

0x7510,	// (0x00051825) list_single_number_pane_g1_ParamLimits

0x7510,	// (0x00051825) list_single_number_pane_g1

0x751c,	// (0x00051831) list_single_number_pane_g2_ParamLimits

0x751c,	// (0x00051831) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x000598e7) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x000598e7) list_single_number_pane_g

0x60b8,	// (0x000503cd) list_single_number_pane_t1_ParamLimits

0x60b8,	// (0x000503cd) list_single_number_pane_t1

0x769b,	// (0x000519b0) list_single_number_pane_t2_ParamLimits

0x769b,	// (0x000519b0) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00059c74) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00059c74) list_single_number_pane_t

0x4dab,	// (0x0004f0c0) list_single_graphic_pane_g1_ParamLimits

0x4dab,	// (0x0004f0c0) list_single_graphic_pane_g1

0x7510,	// (0x00051825) list_single_graphic_pane_g2_ParamLimits

0x7510,	// (0x00051825) list_single_graphic_pane_g2

0x751c,	// (0x00051831) list_single_graphic_pane_g3_ParamLimits

0x751c,	// (0x00051831) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000598d6) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000598d6) list_single_graphic_pane_g

0x4db7,	// (0x0004f0cc) list_single_graphic_pane_t1_ParamLimits

0x4db7,	// (0x0004f0cc) list_single_graphic_pane_t1

0x4dcd,	// (0x0004f0e2) list_single_heading_pane_g1_ParamLimits

0x4dcd,	// (0x0004f0e2) list_single_heading_pane_g1

0x751c,	// (0x00051831) list_single_heading_pane_g2_ParamLimits

0x751c,	// (0x00051831) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000598dd) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000598dd) list_single_heading_pane_g

0x4de0,	// (0x0004f0f5) list_single_heading_pane_t1_ParamLimits

0x4de0,	// (0x0004f0f5) list_single_heading_pane_t1

0x7528,	// (0x0005183d) list_single_heading_pane_t2_ParamLimits

0x7528,	// (0x0005183d) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000598e2) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000598e2) list_single_heading_pane_t

0x7510,	// (0x00051825) list_single_number_heading_pane_g1_ParamLimits

0x7510,	// (0x00051825) list_single_number_heading_pane_g1

0x751c,	// (0x00051831) list_single_number_heading_pane_g2_ParamLimits

0x751c,	// (0x00051831) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x000598e7) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x000598e7) list_single_number_heading_pane_g

0x4df6,	// (0x0004f10b) list_single_number_heading_pane_t1_ParamLimits

0x4df6,	// (0x0004f10b) list_single_number_heading_pane_t1

0x4e0c,	// (0x0004f121) list_single_number_heading_pane_t2_ParamLimits

0x4e0c,	// (0x0004f121) list_single_number_heading_pane_t2

0x4e1e,	// (0x0004f133) list_single_number_heading_pane_t3_ParamLimits

0x4e1e,	// (0x0004f133) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x000598ec) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x000598ec) list_single_number_heading_pane_t

0x4e30,	// (0x0004f145) list_single_graphic_heading_pane_g1_ParamLimits

0x4e30,	// (0x0004f145) list_single_graphic_heading_pane_g1

0x4e46,	// (0x0004f15b) list_single_graphic_heading_pane_g4_ParamLimits

0x4e46,	// (0x0004f15b) list_single_graphic_heading_pane_g4

0x751c,	// (0x00051831) list_single_graphic_heading_pane_g5_ParamLimits

0x751c,	// (0x00051831) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x000598f3) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x000598f3) list_single_graphic_heading_pane_g

0x4df6,	// (0x0004f10b) list_single_graphic_heading_pane_t1_ParamLimits

0x4df6,	// (0x0004f10b) list_single_graphic_heading_pane_t1

0x4e57,	// (0x0004f16c) list_single_graphic_heading_pane_t2_ParamLimits

0x4e57,	// (0x0004f16c) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x000598fa) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x000598fa) list_single_graphic_heading_pane_t

0x753a,	// (0x0005184f) list_single_large_graphic_pane_g1_ParamLimits

0x753a,	// (0x0005184f) list_single_large_graphic_pane_g1

0x7546,	// (0x0005185b) list_single_large_graphic_pane_g2_ParamLimits

0x7546,	// (0x0005185b) list_single_large_graphic_pane_g2

0x7552,	// (0x00051867) list_single_large_graphic_pane_g3_ParamLimits

0x7552,	// (0x00051867) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x000598ff) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x000598ff) list_single_large_graphic_pane_g

0xa2f5,	// (0x0005460a) wait_border_pane_g2_copy1

0x755e,	// (0x00051873) list_single_large_graphic_pane_g4_cp2

0x4e6f,	// (0x0004f184) list_single_large_graphic_pane_t1_ParamLimits

0x4e6f,	// (0x0004f184) list_single_large_graphic_pane_t1

0x4e85,	// (0x0004f19a) list_double_pane_g1_ParamLimits

0x4e85,	// (0x0004f19a) list_double_pane_g1

0x4e91,	// (0x0004f1a6) list_double_pane_g2_ParamLimits

0x4e91,	// (0x0004f1a6) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00059906) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00059906) list_double_pane_g

0x4e9d,	// (0x0004f1b2) list_double_pane_t1_ParamLimits

0x4e9d,	// (0x0004f1b2) list_double_pane_t1

0x4eb3,	// (0x0004f1c8) list_double_pane_t2_ParamLimits

0x4eb3,	// (0x0004f1c8) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005990b) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005990b) list_double_pane_t

0x4ec5,	// (0x0004f1da) list_double2_pane_g1_ParamLimits

0x4ec5,	// (0x0004f1da) list_double2_pane_g1

0x4ed6,	// (0x0004f1eb) list_double2_pane_g2_ParamLimits

0x4ed6,	// (0x0004f1eb) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00059910) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00059910) list_double2_pane_g

0x4ee2,	// (0x0004f1f7) list_double2_pane_t1_ParamLimits

0x4ee2,	// (0x0004f1f7) list_double2_pane_t1

0x4ef8,	// (0x0004f20d) list_double2_pane_t2_ParamLimits

0x4ef8,	// (0x0004f20d) list_double2_pane_t2

0x0001,

0xf600,	// (0x00059915) list_double2_pane_t_ParamLimits

0xf600,	// (0x00059915) list_double2_pane_t

0x4e85,	// (0x0004f19a) list_double_number_pane_g1_ParamLimits

0x4e85,	// (0x0004f19a) list_double_number_pane_g1

0x4e91,	// (0x0004f1a6) list_double_number_pane_g2_ParamLimits

0x4e91,	// (0x0004f1a6) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00059906) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00059906) list_double_number_pane_g

0x4f0a,	// (0x0004f21f) list_double_number_pane_t1_ParamLimits

0x4f0a,	// (0x0004f21f) list_double_number_pane_t1

0x4f1c,	// (0x0004f231) list_double_number_pane_t2_ParamLimits

0x4f1c,	// (0x0004f231) list_double_number_pane_t2

0x4f32,	// (0x0004f247) list_double_number_pane_t3_ParamLimits

0x4f32,	// (0x0004f247) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005991a) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005991a) list_double_number_pane_t

0x4f44,	// (0x0004f259) list_double_graphic_pane_g1_ParamLimits

0x4f44,	// (0x0004f259) list_double_graphic_pane_g1

0x4f50,	// (0x0004f265) list_double_graphic_pane_g2_ParamLimits

0x4f50,	// (0x0004f265) list_double_graphic_pane_g2

0x4f5f,	// (0x0004f274) list_double_graphic_pane_g3_ParamLimits

0x4f5f,	// (0x0004f274) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00059921) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00059921) list_double_graphic_pane_g

0x4f6b,	// (0x0004f280) list_double_graphic_pane_t1_ParamLimits

0x4f6b,	// (0x0004f280) list_double_graphic_pane_t1

0x4f81,	// (0x0004f296) list_double_graphic_pane_t2_ParamLimits

0x4f81,	// (0x0004f296) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005992a) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005992a) list_double_graphic_pane_t

0x4f93,	// (0x0004f2a8) list_double2_graphic_pane_g1_ParamLimits

0x4f93,	// (0x0004f2a8) list_double2_graphic_pane_g1

0x87cd,	// (0x00052ae2) list_double2_graphic_pane_g2_ParamLimits

0x87cd,	// (0x00052ae2) list_double2_graphic_pane_g2

0x7572,	// (0x00051887) list_double2_graphic_pane_g3_ParamLimits

0x7572,	// (0x00051887) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005992f) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005992f) list_double2_graphic_pane_g

0x4f9f,	// (0x0004f2b4) list_double2_graphic_pane_t1_ParamLimits

0x4f9f,	// (0x0004f2b4) list_double2_graphic_pane_t1

0x4fb5,	// (0x0004f2ca) list_double2_graphic_pane_t2_ParamLimits

0x4fb5,	// (0x0004f2ca) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00059936) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00059936) list_double2_graphic_pane_t

0x4fc7,	// (0x0004f2dc) list_double_large_graphic_pane_g1_ParamLimits

0x4fc7,	// (0x0004f2dc) list_double_large_graphic_pane_g1

0x4fe6,	// (0x0004f2fb) list_double_large_graphic_pane_g2_ParamLimits

0x4fe6,	// (0x0004f2fb) list_double_large_graphic_pane_g2

0x4e91,	// (0x0004f1a6) list_double_large_graphic_pane_g3_ParamLimits

0x4e91,	// (0x0004f1a6) list_double_large_graphic_pane_g3

0x4ffc,	// (0x0004f311) list_double_large_graphic_pane_g4_ParamLimits

0x4ffc,	// (0x0004f311) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005993b) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005993b) list_double_large_graphic_pane_g

0x500f,	// (0x0004f324) list_double_large_graphic_pane_t1_ParamLimits

0x500f,	// (0x0004f324) list_double_large_graphic_pane_t1

0x5028,	// (0x0004f33d) list_double_large_graphic_pane_t2_ParamLimits

0x5028,	// (0x0004f33d) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00059946) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00059946) list_double_large_graphic_pane_t

0x7593,	// (0x000518a8) list_double2_large_graphic_pane_g1_ParamLimits

0x7593,	// (0x000518a8) list_double2_large_graphic_pane_g1

0x759f,	// (0x000518b4) list_double2_large_graphic_pane_g2_ParamLimits

0x759f,	// (0x000518b4) list_double2_large_graphic_pane_g2

0x7572,	// (0x00051887) list_double2_large_graphic_pane_g3_ParamLimits

0x7572,	// (0x00051887) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005994b) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005994b) list_double2_large_graphic_pane_g

0x503a,	// (0x0004f34f) list_double2_large_graphic_pane_t1_ParamLimits

0x503a,	// (0x0004f34f) list_double2_large_graphic_pane_t1

0x5050,	// (0x0004f365) list_double2_large_graphic_pane_t2_ParamLimits

0x5050,	// (0x0004f365) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00059952) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00059952) list_double2_large_graphic_pane_t

0x5062,	// (0x0004f377) list_double_heading_pane_g1_ParamLimits

0x5062,	// (0x0004f377) list_double_heading_pane_g1

0x75b0,	// (0x000518c5) list_double_heading_pane_g2_ParamLimits

0x75b0,	// (0x000518c5) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00059957) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00059957) list_double_heading_pane_g

0x5073,	// (0x0004f388) list_double_heading_pane_t1_ParamLimits

0x5073,	// (0x0004f388) list_double_heading_pane_t1

0x4ef8,	// (0x0004f20d) list_double_heading_pane_t2_ParamLimits

0x4ef8,	// (0x0004f20d) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005995c) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005995c) list_double_heading_pane_t

0x5089,	// (0x0004f39e) list_double_graphic_heading_pane_g1_ParamLimits

0x5089,	// (0x0004f39e) list_double_graphic_heading_pane_g1

0x5062,	// (0x0004f377) list_double_graphic_heading_pane_g2_ParamLimits

0x5062,	// (0x0004f377) list_double_graphic_heading_pane_g2

0x75b0,	// (0x000518c5) list_double_graphic_heading_pane_g3_ParamLimits

0x75b0,	// (0x000518c5) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00059961) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00059961) list_double_graphic_heading_pane_g

0x5095,	// (0x0004f3aa) list_double_graphic_heading_pane_t1_ParamLimits

0x5095,	// (0x0004f3aa) list_double_graphic_heading_pane_t1

0x4fb5,	// (0x0004f2ca) list_double_graphic_heading_pane_t2_ParamLimits

0x4fb5,	// (0x0004f2ca) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00059968) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00059968) list_double_graphic_heading_pane_t

0x50ab,	// (0x0004f3c0) list_double_time_pane_g1_ParamLimits

0x50ab,	// (0x0004f3c0) list_double_time_pane_g1

0x50bc,	// (0x0004f3d1) list_double_time_pane_g2_ParamLimits

0x50bc,	// (0x0004f3d1) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005996d) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005996d) list_double_time_pane_g

0x50c8,	// (0x0004f3dd) list_double_time_pane_t1_ParamLimits

0x50c8,	// (0x0004f3dd) list_double_time_pane_t1

0x50de,	// (0x0004f3f3) list_double_time_pane_t2_ParamLimits

0x50de,	// (0x0004f3f3) list_double_time_pane_t2

0x50f0,	// (0x0004f405) list_double_time_pane_t3_ParamLimits

0x50f0,	// (0x0004f405) list_double_time_pane_t3

0x5102,	// (0x0004f417) list_double_time_pane_t4_ParamLimits

0x5102,	// (0x0004f417) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00059972) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00059972) list_double_time_pane_t

0x5114,	// (0x0004f429) list_setting_pane_g1_ParamLimits

0x5114,	// (0x0004f429) list_setting_pane_g1

0x4ed6,	// (0x0004f1eb) list_setting_pane_g2_ParamLimits

0x4ed6,	// (0x0004f1eb) list_setting_pane_g2

0x0001,

0xf666,	// (0x0005997b) list_setting_pane_g_ParamLimits

0xf666,	// (0x0005997b) list_setting_pane_g

0x5120,	// (0x0004f435) list_setting_pane_t1_ParamLimits

0x5120,	// (0x0004f435) list_setting_pane_t1

0x513a,	// (0x0004f44f) list_setting_pane_t2_ParamLimits

0x513a,	// (0x0004f44f) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00059980) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00059980) list_setting_pane_t

0x5177,	// (0x0004f48c) set_value_pane_cp_ParamLimits

0x5177,	// (0x0004f48c) set_value_pane_cp

0x5183,	// (0x0004f498) list_setting_number_pane_g1_ParamLimits

0x5183,	// (0x0004f498) list_setting_number_pane_g1

0x518f,	// (0x0004f4a4) list_setting_number_pane_g2_ParamLimits

0x518f,	// (0x0004f4a4) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00059987) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00059987) list_setting_number_pane_g

0x519b,	// (0x0004f4b0) list_setting_number_pane_t1_ParamLimits

0x519b,	// (0x0004f4b0) list_setting_number_pane_t1

0x51b4,	// (0x0004f4c9) list_setting_number_pane_t2_ParamLimits

0x51b4,	// (0x0004f4c9) list_setting_number_pane_t2

0x51ce,	// (0x0004f4e3) list_setting_number_pane_t3_ParamLimits

0x51ce,	// (0x0004f4e3) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005998c) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005998c) list_setting_number_pane_t

0x5177,	// (0x0004f48c) set_value_pane_ParamLimits

0x5177,	// (0x0004f48c) set_value_pane

0x87d9,	// (0x00052aee) bg_set_opt_pane_ParamLimits

0x87d9,	// (0x00052aee) bg_set_opt_pane

0x5211,	// (0x0004f526) set_value_pane_t1

0x87fa,	// (0x00052b0f) slider_set_pane_cp3

0x8803,	// (0x00052b18) volume_small_pane_cp

0x880c,	// (0x00052b21) list_form_gen_pane

0x8815,	// (0x00052b2a) scroll_pane_cp8

0x5227,	// (0x0004f53c) form_field_data_pane_ParamLimits

0x5227,	// (0x0004f53c) form_field_data_pane

0x5249,	// (0x0004f55e) form_field_data_wide_pane_ParamLimits

0x5249,	// (0x0004f55e) form_field_data_wide_pane

0x526a,	// (0x0004f57f) form_field_popup_pane_ParamLimits

0x526a,	// (0x0004f57f) form_field_popup_pane

0x528a,	// (0x0004f59f) form_field_popup_wide_pane_ParamLimits

0x528a,	// (0x0004f59f) form_field_popup_wide_pane

0x52a7,	// (0x0004f5bc) form_field_slider_pane_ParamLimits

0x52a7,	// (0x0004f5bc) form_field_slider_pane

0x52ba,	// (0x0004f5cf) form_field_slider_wide_pane_ParamLimits

0x52ba,	// (0x0004f5cf) form_field_slider_wide_pane

0x8826,	// (0x00052b3b) data_form_pane

0x52d7,	// (0x0004f5ec) form_field_data_pane_t1

0x8832,	// (0x00052b47) input_focus_pane

0x52f1,	// (0x0004f606) data_form_wide_pane

0x530e,	// (0x0004f623) form_field_data_wide_pane_t1

0x8597,	// (0x000528ac) input_focus_pane_cp6

0x5330,	// (0x0004f645) form_field_popup_pane_t1

0x8832,	// (0x00052b47) input_focus_pane_cp7

0x8854,	// (0x00052b69) list_form_pane

0x5352,	// (0x0004f667) form_field_popup_wide_pane_t1

0x8832,	// (0x00052b47) input_focus_pane_cp8

0x8860,	// (0x00052b75) list_form_wide_pane

0x536f,	// (0x0004f684) form_field_slider_pane_t1_ParamLimits

0x536f,	// (0x0004f684) form_field_slider_pane_t1

0x5387,	// (0x0004f69c) form_field_slider_pane_t2_ParamLimits

0x5387,	// (0x0004f69c) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005999c) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005999c) form_field_slider_pane_t

0x8247,	// (0x0005255c) input_focus_pane_cp9_ParamLimits

0x8247,	// (0x0005255c) input_focus_pane_cp9

0x539c,	// (0x0004f6b1) slider_cont_pane_ParamLimits

0x539c,	// (0x0004f6b1) slider_cont_pane

0x886f,	// (0x00052b84) form_field_slider_wide_pane_t1_ParamLimits

0x886f,	// (0x00052b84) form_field_slider_wide_pane_t1

0x53b0,	// (0x0004f6c5) form_field_slider_wide_pane_t2_ParamLimits

0x53b0,	// (0x0004f6c5) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x000599a1) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x000599a1) form_field_slider_wide_pane_t

0x8247,	// (0x0005255c) input_focus_pane_cp10_ParamLimits

0x8247,	// (0x0005255c) input_focus_pane_cp10

0x53c2,	// (0x0004f6d7) slider_cont_pane_cp1_ParamLimits

0x53c2,	// (0x0004f6d7) slider_cont_pane_cp1

0x53d6,	// (0x0004f6eb) slider_form_pane_cp

0x8881,	// (0x00052b96) input_focus_pane_g1

0x8889,	// (0x00052b9e) input_focus_pane_g2

0x8891,	// (0x00052ba6) input_focus_pane_g3

0x8899,	// (0x00052bae) input_focus_pane_g4

0x88a1,	// (0x00052bb6) input_focus_pane_g5

0x88a9,	// (0x00052bbe) input_focus_pane_g6

0x88b1,	// (0x00052bc6) input_focus_pane_g7

0x88b9,	// (0x00052bce) input_focus_pane_g8

0x88c1,	// (0x00052bd6) input_focus_pane_g9

0x7ee2,	// (0x000521f7) input_focus_pane_g10

0x0009,

0xf691,	// (0x000599a6) input_focus_pane_g

0xa2fe,	// (0x00054613) wait_border_pane_g3_copy1

0x53de,	// (0x0004f6f3) data_form_pane_t1

0x7ee2,	// (0x000521f7) wait_anim_pane_g1_copy1

0x76ad,	// (0x000519c2) data_form_wide_pane_t1

0x53f9,	// (0x0004f70e) list_form_graphic_pane_cp_ParamLimits

0x53f9,	// (0x0004f70e) list_form_graphic_pane_cp

0xb219,	// (0x0005552e) slider_form_pane_g1

0xb222,	// (0x00055537) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00059ca4) slider_form_pane_g

0x53f9,	// (0x0004f70e) list_form_graphic_pane_ParamLimits

0x53f9,	// (0x0004f70e) list_form_graphic_pane

0x5410,	// (0x0004f725) list_form_graphic_pane_g1

0x5418,	// (0x0004f72d) list_form_graphic_pane_t1_ParamLimits

0x5418,	// (0x0004f72d) list_form_graphic_pane_t1

0x7fcc,	// (0x000522e1) list_highlight_pane_cp5_ParamLimits

0x7fcc,	// (0x000522e1) list_highlight_pane_cp5

0x542d,	// (0x0004f742) find_pane_g1

0x88c9,	// (0x00052bde) input_find_pane

0x5436,	// (0x0004f74b) input_find_pane_g1_ParamLimits

0x5436,	// (0x0004f74b) input_find_pane_g1

0x5442,	// (0x0004f757) input_find_pane_t1_ParamLimits

0x5442,	// (0x0004f757) input_find_pane_t1

0x5457,	// (0x0004f76c) input_find_pane_t2_ParamLimits

0x5457,	// (0x0004f76c) input_find_pane_t2

0x0001,

0xf6a6,	// (0x000599bb) input_find_pane_t_ParamLimits

0xf6a6,	// (0x000599bb) input_find_pane_t

0x88d2,	// (0x00052be7) input_focus_pane_cp5_ParamLimits

0x88d2,	// (0x00052be7) input_focus_pane_cp5

0x88ec,	// (0x00052c01) bg_popup_window_pane_cp2_ParamLimits

0x88ec,	// (0x00052c01) bg_popup_window_pane_cp2

0x88f9,	// (0x00052c0e) listscroll_menu_pane_ParamLimits

0x88f9,	// (0x00052c0e) listscroll_menu_pane

0x8905,	// (0x00052c1a) popup_submenu_window_ParamLimits

0x8905,	// (0x00052c1a) popup_submenu_window

0x892d,	// (0x00052c42) find_popup_pane_g1

0x8935,	// (0x00052c4a) input_popup_find_pane_cp

0x88d2,	// (0x00052be7) input_focus_pane_cp4_ParamLimits

0x88d2,	// (0x00052be7) input_focus_pane_cp4

0x894d,	// (0x00052c62) input_popup_find_pane_t1_ParamLimits

0x894d,	// (0x00052c62) input_popup_find_pane_t1

0x7eec,	// (0x00052201) bg_popup_sub_pane_cp

0x897b,	// (0x00052c90) listscroll_popup_sub_pane

0x8983,	// (0x00052c98) list_submenu_pane_ParamLimits

0x8983,	// (0x00052c98) list_submenu_pane

0x8994,	// (0x00052ca9) scroll_pane_cp4

0x899c,	// (0x00052cb1) list_single_popup_submenu_pane_ParamLimits

0x899c,	// (0x00052cb1) list_single_popup_submenu_pane

0x89b0,	// (0x00052cc5) list_single_popup_submenu_pane_g1

0x89b8,	// (0x00052ccd) list_single_popup_submenu_pane_t1_ParamLimits

0x89b8,	// (0x00052ccd) list_single_popup_submenu_pane_t1

0x7fcc,	// (0x000522e1) bg_active_tab_pane_cp1_ParamLimits

0x7fcc,	// (0x000522e1) bg_active_tab_pane_cp1

0x89cd,	// (0x00052ce2) tabs_2_active_pane_g1

0x89d5,	// (0x00052cea) tabs_2_active_pane_t1

0x7fcc,	// (0x000522e1) bg_passive_tab_pane_cp1_ParamLimits

0x7fcc,	// (0x000522e1) bg_passive_tab_pane_cp1

0x89cd,	// (0x00052ce2) tabs_2_passive_pane_g1

0x89d5,	// (0x00052cea) tabs_2_passive_pane_t1

0x89e7,	// (0x00052cfc) bg_active_tab_pane_cp4

0x89f5,	// (0x00052d0a) tabs_2_long_active_pane_t1

0x8a08,	// (0x00052d1d) bg_passive_tab_pane_cp4

0x60fb,	// (0x00050410) list_single_midp_graphic_pane_g4_ParamLimits

0x89e7,	// (0x00052cfc) bg_active_tab_pane_cp5

0x8a14,	// (0x00052d29) tabs_3_long_active_pane_t1

0x8a08,	// (0x00052d1d) bg_passive_tab_pane_cp5

0x60fb,	// (0x00050410) list_single_midp_graphic_pane_g4

0x7fcc,	// (0x000522e1) bg_popup_window_pane_cp13_ParamLimits

0x7fcc,	// (0x000522e1) bg_popup_window_pane_cp13

0x8a2f,	// (0x00052d44) listscroll_popup_fast_pane_ParamLimits

0x8a2f,	// (0x00052d44) listscroll_popup_fast_pane

0x8a3b,	// (0x00052d50) grid_popup_fast_pane_ParamLimits

0x8a3b,	// (0x00052d50) grid_popup_fast_pane

0x8a4d,	// (0x00052d62) scroll_pane_cp9_ParamLimits

0x8a4d,	// (0x00052d62) scroll_pane_cp9

0xcabf,	// (0x00056dd4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcabf,	// (0x00056dd4) list_single_graphic_hl_pane_t1_cp2

0x8a71,	// (0x00052d86) input_focus_pane_cp20_ParamLimits

0x8a71,	// (0x00052d86) input_focus_pane_cp20

0x8a7f,	// (0x00052d94) query_popup_data_pane_t1_ParamLimits

0x8a7f,	// (0x00052d94) query_popup_data_pane_t1

0x8a92,	// (0x00052da7) query_popup_data_pane_t2_ParamLimits

0x8a92,	// (0x00052da7) query_popup_data_pane_t2

0x8ad8,	// (0x00052ded) query_popup_data_pane_t3_ParamLimits

0x8ad8,	// (0x00052ded) query_popup_data_pane_t3

0x8b19,	// (0x00052e2e) query_popup_data_pane_t4_ParamLimits

0x8b19,	// (0x00052e2e) query_popup_data_pane_t4

0x8b55,	// (0x00052e6a) query_popup_data_pane_t5_ParamLimits

0x8b55,	// (0x00052e6a) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x000599c0) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x000599c0) query_popup_data_pane_t

0x8881,	// (0x00052b96) bg_set_opt_pane_g1

0x8889,	// (0x00052b9e) bg_set_opt_pane_g2

0x8891,	// (0x00052ba6) bg_set_opt_pane_g3

0x8899,	// (0x00052bae) bg_set_opt_pane_g4

0x88a1,	// (0x00052bb6) bg_set_opt_pane_g5

0x88a9,	// (0x00052bbe) bg_set_opt_pane_g6

0x88b1,	// (0x00052bc6) bg_set_opt_pane_g7

0x88b9,	// (0x00052bce) bg_set_opt_pane_g8

0x88c1,	// (0x00052bd6) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x000599cb) bg_set_opt_pane_g

0x5775,	// (0x0004fa8a) control_top_pane_stacon_ParamLimits

0x5775,	// (0x0004fa8a) control_top_pane_stacon

0x57c8,	// (0x0004fadd) signal_pane_stacon_ParamLimits

0x57c8,	// (0x0004fadd) signal_pane_stacon

0x912f,	// (0x00053444) stacon_top_pane_g1_ParamLimits

0x912f,	// (0x00053444) stacon_top_pane_g1

0x57ed,	// (0x0004fb02) title_pane_stacon_ParamLimits

0x57ed,	// (0x0004fb02) title_pane_stacon

0x5817,	// (0x0004fb2c) uni_indicator_pane_stacon_ParamLimits

0x5817,	// (0x0004fb2c) uni_indicator_pane_stacon

0x582c,	// (0x0004fb41) battery_pane_stacon_ParamLimits

0x582c,	// (0x0004fb41) battery_pane_stacon

0x5870,	// (0x0004fb85) control_bottom_pane_stacon_ParamLimits

0x5870,	// (0x0004fb85) control_bottom_pane_stacon

0x5893,	// (0x0004fba8) navi_pane_stacon_ParamLimits

0x5893,	// (0x0004fba8) navi_pane_stacon

0x9151,	// (0x00053466) stacon_bottom_pane_g1_ParamLimits

0x9151,	// (0x00053466) stacon_bottom_pane_g1

0x546c,	// (0x0004f781) aid_levels_signal_lsc_ParamLimits

0x546c,	// (0x0004f781) aid_levels_signal_lsc

0x5483,	// (0x0004f798) signal_pane_stacon_g1_ParamLimits

0x5483,	// (0x0004f798) signal_pane_stacon_g1

0x5497,	// (0x0004f7ac) signal_pane_stacon_g2_ParamLimits

0x5497,	// (0x0004f7ac) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x000599de) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000599de) signal_pane_stacon_g

0x54cc,	// (0x0004f7e1) title_pane_stacon_t1_ParamLimits

0x54cc,	// (0x0004f7e1) title_pane_stacon_t1

0x8b99,	// (0x00052eae) uni_indicator_pane_stacon_g1

0x8ba3,	// (0x00052eb8) uni_indicator_pane_stacon_g2

0x8bad,	// (0x00052ec2) uni_indicator_pane_stacon_g3

0x8bb7,	// (0x00052ecc) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x000599ea) uni_indicator_pane_stacon_g

0x54f1,	// (0x0004f806) control_top_pane_stacon_g1

0x54f9,	// (0x0004f80e) control_top_pane_stacon_t1_ParamLimits

0x54f9,	// (0x0004f80e) control_top_pane_stacon_t1

0x5530,	// (0x0004f845) aid_levels_battery_lsc_ParamLimits

0x5530,	// (0x0004f845) aid_levels_battery_lsc

0x5548,	// (0x0004f85d) battery_pane_stacon_g1_ParamLimits

0x5548,	// (0x0004f85d) battery_pane_stacon_g1

0x555b,	// (0x0004f870) battery_pane_stacon_g2_ParamLimits

0x555b,	// (0x0004f870) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x000599f3) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x000599f3) battery_pane_stacon_g

0x5599,	// (0x0004f8ae) navi_icon_pane_stacon

0x55ad,	// (0x0004f8c2) navi_navi_pane_stacon

0x5599,	// (0x0004f8ae) navi_text_pane_stacon

0x54f1,	// (0x0004f806) control_bottom_pane_stacon_g1

0x55c1,	// (0x0004f8d6) control_bottom_pane_stacon_t1_ParamLimits

0x55c1,	// (0x0004f8d6) control_bottom_pane_stacon_t1

0x8bdb,	// (0x00052ef0) grid_app_pane_ParamLimits

0x8bdb,	// (0x00052ef0) grid_app_pane

0x8bfd,	// (0x00052f12) scroll_pane_cp15_ParamLimits

0x8bfd,	// (0x00052f12) scroll_pane_cp15

0x8c10,	// (0x00052f25) cell_app_pane_ParamLimits

0x8c10,	// (0x00052f25) cell_app_pane

0x8c36,	// (0x00052f4b) cell_app_pane_g1_ParamLimits

0x8c36,	// (0x00052f4b) cell_app_pane_g1

0x8c5a,	// (0x00052f6f) cell_app_pane_g2_ParamLimits

0x8c5a,	// (0x00052f6f) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x000599f8) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x000599f8) cell_app_pane_g

0x8c66,	// (0x00052f7b) cell_app_pane_t1_ParamLimits

0x8c66,	// (0x00052f7b) cell_app_pane_t1

0x8c7d,	// (0x00052f92) grid_highlight_pane_ParamLimits

0x8c7d,	// (0x00052f92) grid_highlight_pane

0x8881,	// (0x00052b96) cell_highlight_pane_g1

0x8889,	// (0x00052b9e) cell_highlight_pane_g2

0x8891,	// (0x00052ba6) cell_highlight_pane_g3

0x8899,	// (0x00052bae) cell_highlight_pane_g4

0x88a1,	// (0x00052bb6) cell_highlight_pane_g5

0x88a9,	// (0x00052bbe) cell_highlight_pane_g6

0x88b1,	// (0x00052bc6) cell_highlight_pane_g7

0x88b9,	// (0x00052bce) cell_highlight_pane_g8

0x88c1,	// (0x00052bd6) cell_highlight_pane_g9

0x7ee2,	// (0x000521f7) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x000599a6) cell_highlight_pane_g

0x8c8e,	// (0x00052fa3) bg_scroll_pane

0x560b,	// (0x0004f920) scroll_handle_pane

0x8cd5,	// (0x00052fea) scroll_bg_pane_g1

0x8cea,	// (0x00052fff) scroll_bg_pane_g2

0x8d02,	// (0x00053017) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x000599fd) scroll_bg_pane_g

0x8d17,	// (0x0005302c) scroll_handle_focus_pane_ParamLimits

0x8d17,	// (0x0005302c) scroll_handle_focus_pane

0x8cd5,	// (0x00052fea) scroll_handle_pane_g1

0x8d24,	// (0x00053039) scroll_handle_pane_g2

0x8d02,	// (0x00053017) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00059a04) scroll_handle_pane_g

0x88d2,	// (0x00052be7) bg_popup_sub_pane_cp21_ParamLimits

0x88d2,	// (0x00052be7) bg_popup_sub_pane_cp21

0x8d38,	// (0x0005304d) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d38,	// (0x0005304d) popup_fep_japan_predictive_window_t1

0x8d52,	// (0x00053067) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d52,	// (0x00053067) popup_fep_japan_predictive_window_t2

0x8d85,	// (0x0005309a) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d85,	// (0x0005309a) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00059a0b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00059a0b) popup_fep_japan_predictive_window_t

0x7eec,	// (0x00052201) bg_popup_sub_pane_cp23

0x8dbc,	// (0x000530d1) listscroll_japin_cand_pane

0x8dc4,	// (0x000530d9) popup_fep_japan_candidate_window_t1

0x8dd2,	// (0x000530e7) candidate_pane_ParamLimits

0x8dd2,	// (0x000530e7) candidate_pane

0x8de4,	// (0x000530f9) scroll_pane_cp30

0x8dec,	// (0x00053101) list_single_popup_jap_candidate_pane_ParamLimits

0x8dec,	// (0x00053101) list_single_popup_jap_candidate_pane

0x7eec,	// (0x00052201) list_highlight_pane_cp30

0x8e00,	// (0x00053115) list_single_popup_jap_candidate_pane_t1

0x8e0f,	// (0x00053124) level_1_signal

0x8e1c,	// (0x00053131) level_2_signal

0x8e29,	// (0x0005313e) level_3_signal

0x8e36,	// (0x0005314b) level_4_signal

0x8e43,	// (0x00053158) level_5_signal

0x8e50,	// (0x00053165) level_6_signal

0x8e5d,	// (0x00053172) level_7_signal

0x8e0f,	// (0x00053124) level_1_battery

0x8e1c,	// (0x00053131) level_2_battery

0x8e29,	// (0x0005313e) level_3_battery

0x8e36,	// (0x0005314b) level_4_battery

0x8e43,	// (0x00053158) level_5_battery

0x8e50,	// (0x00053165) level_6_battery

0x8e5d,	// (0x00053172) level_7_battery

0x8e82,	// (0x00053197) list_menu_pane_ParamLimits

0x8e82,	// (0x00053197) list_menu_pane

0x8e98,	// (0x000531ad) scroll_pane_cp25_ParamLimits

0x8e98,	// (0x000531ad) scroll_pane_cp25

0x8eb1,	// (0x000531c6) list_double2_graphic_pane_cp2_ParamLimits

0x8eb1,	// (0x000531c6) list_double2_graphic_pane_cp2

0x8eb1,	// (0x000531c6) list_double2_large_graphic_pane_cp2_ParamLimits

0x8eb1,	// (0x000531c6) list_double2_large_graphic_pane_cp2

0x8eb1,	// (0x000531c6) list_double2_pane_cp2_ParamLimits

0x8eb1,	// (0x000531c6) list_double2_pane_cp2

0x8eb1,	// (0x000531c6) list_double_graphic_pane_cp2_ParamLimits

0x8eb1,	// (0x000531c6) list_double_graphic_pane_cp2

0x8eb1,	// (0x000531c6) list_double_large_graphic_pane_cp2_ParamLimits

0x8eb1,	// (0x000531c6) list_double_large_graphic_pane_cp2

0x8eb1,	// (0x000531c6) list_double_number_pane_cp2_ParamLimits

0x8eb1,	// (0x000531c6) list_double_number_pane_cp2

0x8eb1,	// (0x000531c6) list_double_pane_cp2_ParamLimits

0x8eb1,	// (0x000531c6) list_double_pane_cp2

0x8ed5,	// (0x000531ea) list_single_2graphic_pane_cp2_ParamLimits

0x8ed5,	// (0x000531ea) list_single_2graphic_pane_cp2

0x8ed5,	// (0x000531ea) list_single_graphic_heading_pane_cp2_ParamLimits

0x8ed5,	// (0x000531ea) list_single_graphic_heading_pane_cp2

0x8ed5,	// (0x000531ea) list_single_graphic_pane_cp2_ParamLimits

0x8ed5,	// (0x000531ea) list_single_graphic_pane_cp2

0x8ed5,	// (0x000531ea) list_single_heading_pane_cp2_ParamLimits

0x8ed5,	// (0x000531ea) list_single_heading_pane_cp2

0x8eeb,	// (0x00053200) list_single_large_graphic_pane_cp2_ParamLimits

0x8eeb,	// (0x00053200) list_single_large_graphic_pane_cp2

0x8ed5,	// (0x000531ea) list_single_number_heading_pane_cp2_ParamLimits

0x8ed5,	// (0x000531ea) list_single_number_heading_pane_cp2

0x8ed5,	// (0x000531ea) list_single_number_pane_cp2_ParamLimits

0x8ed5,	// (0x000531ea) list_single_number_pane_cp2

0x8ed5,	// (0x000531ea) list_single_pane_cp2_ParamLimits

0x8ed5,	// (0x000531ea) list_single_pane_cp2

0x8f66,	// (0x0005327b) bg_popup_sub_pane_cp22

0x56ba,	// (0x0004f9cf) popup_side_volume_key_window_g1

0x56de,	// (0x0004f9f3) popup_side_volume_key_window_t1

0x56fa,	// (0x0004fa0f) volume_small_pane_cp1

0x8247,	// (0x0005255c) bg_popup_sub_pane_cp24_ParamLimits

0x8247,	// (0x0005255c) bg_popup_sub_pane_cp24

0x8f7c,	// (0x00053291) fep_china_uni_candidate_pane_ParamLimits

0x8f7c,	// (0x00053291) fep_china_uni_candidate_pane

0x8f90,	// (0x000532a5) fep_china_uni_entry_pane

0x8fa0,	// (0x000532b5) popup_fep_china_uni_window_g1

0x8fbc,	// (0x000532d1) fep_china_uni_entry_pane_g1

0x8fc4,	// (0x000532d9) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00059a3c) fep_china_uni_entry_pane_g

0x8fe4,	// (0x000532f9) fep_entry_item_pane

0x8fee,	// (0x00053303) fep_candidate_item_pane

0x8ff6,	// (0x0005330b) fep_china_uni_candidate_pane_g1

0x8ffe,	// (0x00053313) fep_china_uni_candidate_pane_g2

0x9006,	// (0x0005331b) fep_china_uni_candidate_pane_g3

0x900e,	// (0x00053323) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00059a41) fep_china_uni_candidate_pane_g

0x7ee2,	// (0x000521f7) fep_entry_item_pane_g1

0x9016,	// (0x0005332b) fep_entry_item_pane_t1_ParamLimits

0x9016,	// (0x0005332b) fep_entry_item_pane_t1

0x902c,	// (0x00053341) fep_candidate_item_pane_t1_ParamLimits

0x902c,	// (0x00053341) fep_candidate_item_pane_t1

0x9041,	// (0x00053356) fep_candidate_item_pane_t2_ParamLimits

0x9041,	// (0x00053356) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00059a4a) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00059a4a) fep_candidate_item_pane_t

0x7fcc,	// (0x000522e1) list_highlight_pane_cp31_ParamLimits

0x7fcc,	// (0x000522e1) list_highlight_pane_cp31

0x9053,	// (0x00053368) level_1_signal_lsc

0x905c,	// (0x00053371) level_2_signal_lsc

0x9065,	// (0x0005337a) level_3_signal_lsc

0x906e,	// (0x00053383) level_4_signal_lsc

0x9077,	// (0x0005338c) level_5_signal_lsc

0x9080,	// (0x00053395) level_6_signal_lsc

0x9089,	// (0x0005339e) level_7_signal_lsc

0x9089,	// (0x0005339e) level_1_battery_lsc

0x9092,	// (0x000533a7) level_2_battery_lsc

0x909b,	// (0x000533b0) level_3_battery_lsc

0x90a4,	// (0x000533b9) level_4_battery_lsc

0x90ad,	// (0x000533c2) level_5_battery_lsc

0x90b6,	// (0x000533cb) level_6_battery_lsc

0x9053,	// (0x00053368) level_7_battery_lsc

0x90bf,	// (0x000533d4) scroll_handle_focus_pane_g1

0x90c8,	// (0x000533dd) scroll_handle_focus_pane_g2

0x90d1,	// (0x000533e6) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00059a4f) scroll_handle_focus_pane_g

0x5702,	// (0x0004fa17) list_single_2graphic_pane_g1_ParamLimits

0x5702,	// (0x0004fa17) list_single_2graphic_pane_g1

0x4e46,	// (0x0004f15b) list_single_2graphic_pane_g2_ParamLimits

0x4e46,	// (0x0004f15b) list_single_2graphic_pane_g2

0x751c,	// (0x00051831) list_single_2graphic_pane_g3_ParamLimits

0x751c,	// (0x00051831) list_single_2graphic_pane_g3

0x570e,	// (0x0004fa23) list_single_2graphic_pane_g4_ParamLimits

0x570e,	// (0x0004fa23) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00059a56) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00059a56) list_single_2graphic_pane_g

0x571f,	// (0x0004fa34) list_single_2graphic_pane_t1_ParamLimits

0x571f,	// (0x0004fa34) list_single_2graphic_pane_t1

0x75bc,	// (0x000518d1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x75bc,	// (0x000518d1) list_double2_graphic_large_graphic_pane_g1

0x759f,	// (0x000518b4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x759f,	// (0x000518b4) list_double2_graphic_large_graphic_pane_g2

0x7572,	// (0x00051887) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7572,	// (0x00051887) list_double2_graphic_large_graphic_pane_g3

0x75cc,	// (0x000518e1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x75cc,	// (0x000518e1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00059a5f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00059a5f) list_double2_graphic_large_graphic_pane_g

0x574d,	// (0x0004fa62) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x574d,	// (0x0004fa62) list_double2_graphic_large_graphic_pane_t1

0x5763,	// (0x0004fa78) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5763,	// (0x0004fa78) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00059a68) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00059a68) list_double2_graphic_large_graphic_pane_t

0x9218,	// (0x0005352d) popup_fast_swap_window_ParamLimits

0x9218,	// (0x0005352d) popup_fast_swap_window

0x9234,	// (0x00053549) popup_side_volume_key_window

0x924e,	// (0x00053563) stacon_top_pane

0x9258,	// (0x0005356d) status_pane_ParamLimits

0x9258,	// (0x0005356d) status_pane

0x9266,	// (0x0005357b) status_small_pane

0x7eec,	// (0x00052201) control_pane

0x7eec,	// (0x00052201) stacon_bottom_pane

0x8815,	// (0x00052b2a) scroll_pane_cp121

0x880c,	// (0x00052b21) set_content_pane

0x90da,	// (0x000533ef) bg_active_tab_pane_g1_cp1

0x90e3,	// (0x000533f8) bg_active_tab_pane_g2_cp1

0x90ec,	// (0x00053401) bg_active_tab_pane_g3_cp1

0x90da,	// (0x000533ef) bg_passive_tab_pane_g1_cp1

0x90e3,	// (0x000533f8) bg_passive_tab_pane_g2_cp1

0x90ec,	// (0x00053401) bg_passive_tab_pane_g3_cp1

0x90f5,	// (0x0005340a) bg_active_tab_pane_g1_cp2

0x90e3,	// (0x000533f8) bg_active_tab_pane_g2_cp2

0x90fe,	// (0x00053413) bg_active_tab_pane_g3_cp2

0x90f5,	// (0x0005340a) bg_passive_tab_pane_g1_cp2

0x90e3,	// (0x000533f8) bg_passive_tab_pane_g2_cp2

0x90fe,	// (0x00053413) bg_passive_tab_pane_g3_cp2

0x9107,	// (0x0005341c) bg_active_tab_pane_g1_cp3

0x90e3,	// (0x000533f8) bg_active_tab_pane_g2_cp3

0x9110,	// (0x00053425) bg_active_tab_pane_g3_cp3

0x9107,	// (0x0005341c) bg_passive_tab_pane_g1_cp3

0x90e3,	// (0x000533f8) bg_passive_tab_pane_g2_cp3

0x9110,	// (0x00053425) bg_passive_tab_pane_g3_cp3

0x9119,	// (0x0005342e) bg_active_tab_pane_g1_cp4

0x90e3,	// (0x000533f8) bg_active_tab_pane_g2_cp4

0x9124,	// (0x00053439) bg_active_tab_pane_g3_cp4

0x9119,	// (0x0005342e) bg_passive_tab_pane_g1_cp4

0x90e3,	// (0x000533f8) bg_passive_tab_pane_g2_cp4

0x9124,	// (0x00053439) bg_passive_tab_pane_g3_cp4

0x916d,	// (0x00053482) bg_active_tab_pane_g1_cp5

0x90e3,	// (0x000533f8) bg_active_tab_pane_g2_cp5

0x9176,	// (0x0005348b) bg_active_tab_pane_g3_cp5

0x916d,	// (0x00053482) bg_passive_tab_pane_g1_cp5

0x90e3,	// (0x000533f8) bg_passive_tab_pane_g2_cp5

0x9176,	// (0x0005348b) bg_passive_tab_pane_g3_cp5

0x917f,	// (0x00053494) list_set_graphic_pane_ParamLimits

0x917f,	// (0x00053494) list_set_graphic_pane

0x7eec,	// (0x00052201) bg_set_opt_pane_cp4

0x919d,	// (0x000534b2) list_set_graphic_pane_g1_ParamLimits

0x919d,	// (0x000534b2) list_set_graphic_pane_g1

0x91a9,	// (0x000534be) list_set_graphic_pane_g2_ParamLimits

0x91a9,	// (0x000534be) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00059a6d) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00059a6d) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x00059df2) volume_small_pane_cp_g

0x91cb,	// (0x000534e0) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91cb,	// (0x000534e0) list_double2_large_graphic_pane_g1_cp2

0x91d7,	// (0x000534ec) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91d7,	// (0x000534ec) list_double2_large_graphic_pane_g2_cp2

0x91e8,	// (0x000534fd) list_double2_large_graphic_pane_g3_cp2

0x91f0,	// (0x00053505) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x91f0,	// (0x00053505) list_double2_large_graphic_pane_t1_cp2

0x9206,	// (0x0005351b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9206,	// (0x0005351b) list_double2_large_graphic_pane_t2_cp2

0xadd7,	// (0x000550ec) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadd7,	// (0x000550ec) list_double_large_graphic_pane_g1_cp2

0xade8,	// (0x000550fd) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xade8,	// (0x000550fd) list_double_large_graphic_pane_g2_cp2

0x937f,	// (0x00053694) list_double_large_graphic_pane_g3_cp2

0xadf9,	// (0x0005510e) list_double_large_graphic_pane_g4_cp

0xae01,	// (0x00055116) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae01,	// (0x00055116) list_double_large_graphic_pane_t1_cp2

0xae18,	// (0x0005512d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae18,	// (0x0005512d) list_double_large_graphic_pane_t2_cp2

0x9271,	// (0x00053586) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9271,	// (0x00053586) list_double2_graphic_pane_g1_cp2

0x927f,	// (0x00053594) list_double2_graphic_pane_g2_cp2_ParamLimits

0x927f,	// (0x00053594) list_double2_graphic_pane_g2_cp2

0x9290,	// (0x000535a5) list_double2_graphic_pane_g3_cp2

0x929a,	// (0x000535af) list_double2_graphic_pane_t1_cp2_ParamLimits

0x929a,	// (0x000535af) list_double2_graphic_pane_t1_cp2

0x92b0,	// (0x000535c5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92b0,	// (0x000535c5) list_double2_graphic_pane_t2_cp2

0x92c2,	// (0x000535d7) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92c2,	// (0x000535d7) list_single_number_heading_pane_g1_cp2

0x92ce,	// (0x000535e3) list_single_number_heading_pane_g2_cp2

0x92d6,	// (0x000535eb) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92d6,	// (0x000535eb) list_single_number_heading_pane_t1_cp2

0x92ec,	// (0x00053601) list_single_number_heading_pane_t2_cp2_ParamLimits

0x92ec,	// (0x00053601) list_single_number_heading_pane_t2_cp2

0x92fe,	// (0x00053613) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92fe,	// (0x00053613) list_single_number_heading_pane_t3_cp2

0x92c2,	// (0x000535d7) list_single_heading_pane_g1_cp2_ParamLimits

0x92c2,	// (0x000535d7) list_single_heading_pane_g1_cp2

0x92ce,	// (0x000535e3) list_single_heading_pane_g2_cp2

0x92d6,	// (0x000535eb) list_single_heading_pane_t1_cp2_ParamLimits

0x92d6,	// (0x000535eb) list_single_heading_pane_t1_cp2

0xabe1,	// (0x00054ef6) list_single_heading_pane_t2_cp2_ParamLimits

0xabe1,	// (0x00054ef6) list_single_heading_pane_t2_cp2

0xab29,	// (0x00054e3e) list_double_graphic_pane_g1_cp2_ParamLimits

0xab29,	// (0x00054e3e) list_double_graphic_pane_g1_cp2

0xab35,	// (0x00054e4a) list_double_graphic_pane_g2_cp2_ParamLimits

0xab35,	// (0x00054e4a) list_double_graphic_pane_g2_cp2

0xab44,	// (0x00054e59) list_double_graphic_pane_g3_cp2

0xab4c,	// (0x00054e61) list_double_graphic_pane_t1_cp2_ParamLimits

0xab4c,	// (0x00054e61) list_double_graphic_pane_t1_cp2

0xab62,	// (0x00054e77) list_double_graphic_pane_t2_cp2_ParamLimits

0xab62,	// (0x00054e77) list_double_graphic_pane_t2_cp2

0x9373,	// (0x00053688) list_double_number_pane_g1_cp2_ParamLimits

0x9373,	// (0x00053688) list_double_number_pane_g1_cp2

0x937f,	// (0x00053694) list_double_number_pane_g2_cp2

0xaaed,	// (0x00054e02) list_double_number_pane_t1_cp2_ParamLimits

0xaaed,	// (0x00054e02) list_double_number_pane_t1_cp2

0xab01,	// (0x00054e16) list_double_number_pane_t2_cp2_ParamLimits

0xab01,	// (0x00054e16) list_double_number_pane_t2_cp2

0xab17,	// (0x00054e2c) list_double_number_pane_t3_cp2_ParamLimits

0xab17,	// (0x00054e2c) list_double_number_pane_t3_cp2

0xa9d6,	// (0x00054ceb) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9d6,	// (0x00054ceb) list_single_graphic_pane_g1_cp2

0x93d7,	// (0x000536ec) list_single_graphic_pane_g2_cp2_ParamLimits

0x93d7,	// (0x000536ec) list_single_graphic_pane_g2_cp2

0x93e3,	// (0x000536f8) list_single_graphic_pane_g3_cp2

0xa9ac,	// (0x00054cc1) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9ac,	// (0x00054cc1) list_single_graphic_pane_t1_cp2

0x93d7,	// (0x000536ec) list_single_number_pane_g1_cp2_ParamLimits

0x93d7,	// (0x000536ec) list_single_number_pane_g1_cp2

0x93e3,	// (0x000536f8) list_single_number_pane_g2_cp2

0xa9ac,	// (0x00054cc1) list_single_number_pane_t1_cp2_ParamLimits

0xa9ac,	// (0x00054cc1) list_single_number_pane_t1_cp2

0xa9c2,	// (0x00054cd7) list_single_number_pane_t2_cp2_ParamLimits

0xa9c2,	// (0x00054cd7) list_single_number_pane_t2_cp2

0x91d7,	// (0x000534ec) list_double2_pane_g1_cp2_ParamLimits

0x91d7,	// (0x000534ec) list_double2_pane_g1_cp2

0x91e8,	// (0x000534fd) list_double2_pane_g2_cp2

0x934b,	// (0x00053660) list_double2_pane_t1_cp2_ParamLimits

0x934b,	// (0x00053660) list_double2_pane_t1_cp2

0x9361,	// (0x00053676) list_double2_pane_t2_cp2_ParamLimits

0x9361,	// (0x00053676) list_double2_pane_t2_cp2

0x9373,	// (0x00053688) list_double_pane_g1_cp2_ParamLimits

0x9373,	// (0x00053688) list_double_pane_g1_cp2

0x937f,	// (0x00053694) list_double_pane_g2_cp2

0x9387,	// (0x0005369c) list_double_pane_t1_cp2_ParamLimits

0x9387,	// (0x0005369c) list_double_pane_t1_cp2

0x939d,	// (0x000536b2) list_double_pane_t2_cp2_ParamLimits

0x939d,	// (0x000536b2) list_double_pane_t2_cp2

0x93c7,	// (0x000536dc) list_single_pane_cp2_g3

0x93d7,	// (0x000536ec) list_single_pane_g1_cp2_ParamLimits

0x93d7,	// (0x000536ec) list_single_pane_g1_cp2

0x93e3,	// (0x000536f8) list_single_pane_g2_cp2

0x93eb,	// (0x00053700) list_single_pane_t1_cp2_ParamLimits

0x93eb,	// (0x00053700) list_single_pane_t1_cp2

0x9403,	// (0x00053718) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9403,	// (0x00053718) list_single_large_graphic_pane_g1_cp2

0x940f,	// (0x00053724) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x940f,	// (0x00053724) list_single_large_graphic_pane_g2_cp2

0x941b,	// (0x00053730) list_single_large_graphic_pane_g3_cp2

0x9423,	// (0x00053738) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9423,	// (0x00053738) list_single_large_graphic_pane_g4_cp1

0x943d,	// (0x00053752) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x943d,	// (0x00053752) list_single_large_graphic_pane_t1_cp2

0xa978,	// (0x00054c8d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa978,	// (0x00054c8d) list_single_graphic_heading_pane_g1_cp2

0xa945,	// (0x00054c5a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa945,	// (0x00054c5a) list_single_graphic_heading_pane_g4_cp2

0x93e3,	// (0x000536f8) list_single_graphic_heading_pane_g5_cp2

0xa984,	// (0x00054c99) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa984,	// (0x00054c99) list_single_graphic_heading_pane_t1_cp2

0xa99a,	// (0x00054caf) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa99a,	// (0x00054caf) list_single_graphic_heading_pane_t2_cp2

0xa939,	// (0x00054c4e) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa939,	// (0x00054c4e) list_single_2graphic_pane_g1_cp2

0xa945,	// (0x00054c5a) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa945,	// (0x00054c5a) list_single_2graphic_pane_g2_cp2

0x93e3,	// (0x000536f8) list_single_2graphic_pane_g3_cp2

0xa956,	// (0x00054c6b) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa956,	// (0x00054c6b) list_single_2graphic_pane_g4_cp2

0xa962,	// (0x00054c77) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa962,	// (0x00054c77) list_single_2graphic_pane_t1_cp2

0x7ee2,	// (0x000521f7) list_highlight_pane_g10_cp1

0xa511,	// (0x00054826) list_highlight_pane_g1_cp1

0xa519,	// (0x0005482e) list_highlight_pane_g2_cp1

0xa521,	// (0x00054836) list_highlight_pane_g3_cp1

0xa529,	// (0x0005483e) list_highlight_pane_g4_cp1

0xa531,	// (0x00054846) list_highlight_pane_g5_cp1

0xa539,	// (0x0005484e) list_highlight_pane_g6_cp1

0xa541,	// (0x00054856) list_highlight_pane_g7_cp1

0xa549,	// (0x0005485e) list_highlight_pane_g8_cp1

0xa551,	// (0x00054866) list_highlight_pane_g9_cp1

0xa429,	// (0x0005473e) form_field_slider_pane_t3

0xa437,	// (0x0005474c) form_field_slider_pane_t4

0xa445,	// (0x0005475a) slider_form_pane_ParamLimits

0xa445,	// (0x0005475a) slider_form_pane

0x7eec,	// (0x00052201) control_abbreviations

0x7eec,	// (0x00052201) control_conventions

0x7eec,	// (0x00052201) control_definitions

0x7eec,	// (0x00052201) format_table_attribute

0xac2b,	// (0x00054f40) bg_popup_preview_window_pane_g9

0x7eec,	// (0x00052201) format_table_data2

0x7eec,	// (0x00052201) format_table_data3

0x7eec,	// (0x00052201) format_table_data_example

0x0008,

0x7eec,	// (0x00052201) intro_purpose

0xf8ef,	// (0x00059c04) bg_popup_preview_window_pane_g

0x7eec,	// (0x00052201) texts_category

0x7eec,	// (0x00052201) texts_graphics

0x9453,	// (0x00053768) text_digital

0x9462,	// (0x00053777) text_primary

0x9471,	// (0x00053786) text_primary_small

0x9480,	// (0x00053795) text_secondary

0x948f,	// (0x000537a4) text_title

0xb2fa,	// (0x0005560f) bg_passive_tab_pane_g1_cp3_srt

0x90e3,	// (0x000533f8) bg_passive_tab_pane_g2_cp3_srt

0xb303,	// (0x00055618) bg_passive_tab_pane_g3_cp3_srt

0x7fcc,	// (0x000522e1) bg_active_tab_pane_cp3_srt_ParamLimits

0x7fcc,	// (0x000522e1) bg_active_tab_pane_cp3_srt

0xb30c,	// (0x00055621) tabs_4_active_pane_srt_g1

0xb314,	// (0x00055629) tabs_4_active_pane_srt_t1_ParamLimits

0xb314,	// (0x00055629) tabs_4_active_pane_srt_t1

0xb2fa,	// (0x0005560f) bg_active_tab_pane_g1_cp3_copy1

0x90e3,	// (0x000533f8) bg_active_tab_pane_g2_cp3_copy1

0xb303,	// (0x00055618) bg_active_tab_pane_g3_cp3_copy1

0x7fcc,	// (0x000522e1) tabs_2_long_active_pane_srt_ParamLimits

0x7fcc,	// (0x000522e1) tabs_2_long_active_pane_srt

0x7fcc,	// (0x000522e1) tabs_2_long_passive_pane_srt_ParamLimits

0x7fcc,	// (0x000522e1) tabs_2_long_passive_pane_srt

0x8a08,	// (0x00052d1d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8a08,	// (0x00052d1d) bg_passive_tab_pane_cp4_srt

0xb05a,	// (0x0005536f) bg_passive_tab_pane_g1_cp4_srt

0x90e3,	// (0x000533f8) bg_passive_tab_pane_g2_cp4_srt

0xb063,	// (0x00055378) bg_passive_tab_pane_g3_cp4_srt

0x89e7,	// (0x00052cfc) bg_active_tab_pane_cp4_srt_ParamLimits

0x89e7,	// (0x00052cfc) bg_active_tab_pane_cp4_srt

0xb06c,	// (0x00055381) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb06c,	// (0x00055381) tabs_2_long_active_pane_srt_t1

0xb05a,	// (0x0005536f) bg_active_tab_pane_g1_cp4_srt

0x90e3,	// (0x000533f8) bg_active_tab_pane_g2_cp4_srt

0xb063,	// (0x00055378) bg_active_tab_pane_g3_cp4_srt

0x8247,	// (0x0005255c) tabs_3_long_active_pane_srt_ParamLimits

0x8247,	// (0x0005255c) tabs_3_long_active_pane_srt

0x8247,	// (0x0005255c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8247,	// (0x0005255c) tabs_3_long_passive_pane_cp_srt

0x8247,	// (0x0005255c) tabs_3_long_passive_pane_srt_ParamLimits

0x8247,	// (0x0005255c) tabs_3_long_passive_pane_srt

0x8a08,	// (0x00052d1d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8a08,	// (0x00052d1d) bg_passive_tab_pane_cp5_srt

0x916d,	// (0x00053482) bg_passive_tab_pane_g1_cp5_srt

0x90e3,	// (0x000533f8) bg_passive_tab_pane_g2_cp5_srt

0x9176,	// (0x0005348b) bg_passive_tab_pane_g3_cp5_srt

0x89e7,	// (0x00052cfc) bg_active_tab_pane_cp5_srt_ParamLimits

0x89e7,	// (0x00052cfc) bg_active_tab_pane_cp5_srt

0xb048,	// (0x0005535d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb048,	// (0x0005535d) tabs_3_long_active_pane_srt_t1

0x916d,	// (0x00053482) bg_active_tab_pane_g1_cp5_srt

0x90e3,	// (0x000533f8) bg_active_tab_pane_g2_cp5_srt

0x9176,	// (0x0005348b) bg_active_tab_pane_g3_cp5_srt

0xb03a,	// (0x0005534f) navi_text_pane_srt_t1

0xb032,	// (0x00055347) navi_icon_pane_srt_g1

0x9654,	// (0x00053969) midp_editing_number_pane_srt

0x949e,	// (0x000537b3) midp_ticker_pane_srt

0x965c,	// (0x00053971) midp_ticker_pane_srt_g1

0x9664,	// (0x00053979) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00059a8c) midp_ticker_pane_srt_g

0x966c,	// (0x00053981) midp_ticker_pane_srt_t1

0xb023,	// (0x00055338) midp_editing_number_pane_t1_copy1

0x8a08,	// (0x00052d1d) listscroll_midp_pane

0x8a08,	// (0x00052d1d) midp_form_pane

0x950c,	// (0x00053821) midp_info_popup_window_ParamLimits

0x950c,	// (0x00053821) midp_info_popup_window

0x88d2,	// (0x00052be7) bg_popup_sub_pane_cp50_ParamLimits

0x88d2,	// (0x00052be7) bg_popup_sub_pane_cp50

0xa146,	// (0x0005445b) listscroll_midp_info_pane_ParamLimits

0xa146,	// (0x0005445b) listscroll_midp_info_pane

0xa122,	// (0x00054437) listscroll_form_midp_pane_ParamLimits

0xa122,	// (0x00054437) listscroll_form_midp_pane

0xa13a,	// (0x0005444f) scroll_bar_cp050

0xa102,	// (0x00054417) list_midp_pane

0xbd2e,	// (0x00056043) signal_pane_g2_cp

0xa03c,	// (0x00054351) listscroll_midp_info_pane_t1_ParamLimits

0xa03c,	// (0x00054351) listscroll_midp_info_pane_t1

0xa054,	// (0x00054369) listscroll_midp_info_pane_t2_ParamLimits

0xa054,	// (0x00054369) listscroll_midp_info_pane_t2

0xa092,	// (0x000543a7) listscroll_midp_info_pane_t3_ParamLimits

0xa092,	// (0x000543a7) listscroll_midp_info_pane_t3

0xa0cc,	// (0x000543e1) listscroll_midp_info_pane_t4_ParamLimits

0xa0cc,	// (0x000543e1) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00059b3f) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00059b3f) listscroll_midp_info_pane_t

0x8994,	// (0x00052ca9) scroll_pane_cp21

0x9fde,	// (0x000542f3) form_midp_field_choice_group_pane

0x9fe7,	// (0x000542fc) form_midp_field_text_pane

0xa022,	// (0x00054337) form_midp_field_time_pane

0xa02a,	// (0x0005433f) form_midp_gauge_slider_pane

0xa033,	// (0x00054348) form_midp_gauge_wait_pane

0x7eec,	// (0x00052201) form_midp_image_pane

0x7669,	// (0x0005197e) list_single_midp_pane_ParamLimits

0x7669,	// (0x0005197e) list_single_midp_pane

0x9f92,	// (0x000542a7) form_midp_field_text_pane_t1

0x9d4a,	// (0x0005405f) input_focus_pane_cp050

0x9fcd,	// (0x000542e2) list_midp_form_text_pane

0x9f61,	// (0x00054276) form_midp_field_choice_group_pane_t1

0x9f6f,	// (0x00054284) input_focus_pane_cp051

0x9f83,	// (0x00054298) list_midp_choice_pane

0x7eec,	// (0x00052201) status_idle_pane

0x9f45,	// (0x0005425a) form_midp_field_time_pane_t1

0x7ee2,	// (0x000521f7) wait_anim_pane_g2_copy1

0x9f53,	// (0x00054268) form_midp_field_time_pane_t2

0x0001,

0x95bc,	// (0x000538d1) aid_navinavi_width_2_pane

0xf825,	// (0x00059b3a) form_midp_field_time_pane_t

0x7eec,	// (0x00052201) input_focus_pane_cp052

0x7eec,	// (0x00052201) bg_input_focus_pane_cp040

0x9f05,	// (0x0005421a) form_midp_gauge_slider_pane_t1

0x9f13,	// (0x00054228) form_midp_gauge_slider_pane_t2

0x9f21,	// (0x00054236) form_midp_gauge_slider_pane_t3

0x9f2f,	// (0x00054244) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00059b31) form_midp_gauge_slider_pane_t

0x9f3d,	// (0x00054252) form_midp_slider_pane

0x7fcc,	// (0x000522e1) bg_input_focus_pane_cp041_ParamLimits

0x7fcc,	// (0x000522e1) bg_input_focus_pane_cp041

0x9ed2,	// (0x000541e7) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ed2,	// (0x000541e7) form_midp_gauge_wait_pane_t1

0x9ee4,	// (0x000541f9) form_midp_gauge_wait_pane_t2_ParamLimits

0x9ee4,	// (0x000541f9) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00059b2c) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00059b2c) form_midp_gauge_wait_pane_t

0x9ef6,	// (0x0005420b) form_midp_wait_pane_ParamLimits

0x9ef6,	// (0x0005420b) form_midp_wait_pane

0x9e9c,	// (0x000541b1) form_midp_image_pane_g1

0x9ea5,	// (0x000541ba) form_midp_image_pane_t1

0x9eb4,	// (0x000541c9) form_midp_image_pane_t2

0x9ec3,	// (0x000541d8) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00059b25) form_midp_image_pane_t

0x9e93,	// (0x000541a8) list_single_midp_pane_g1

0x765a,	// (0x0005196f) list_single_midp_pane_t1

0x9e64,	// (0x00054179) list_midp_form_item_pane_ParamLimits

0x9e64,	// (0x00054179) list_midp_form_item_pane

0x9564,	// (0x00053879) list_midp_form_item_pane_t1

0x9573,	// (0x00053888) midp_ticker_pane_g1

0x957f,	// (0x00053894) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00059a72) midp_ticker_pane_g

0x958b,	// (0x000538a0) midp_ticker_pane_t1

0xb266,	// (0x0005557b) midp_editing_number_pane_t1

0xb244,	// (0x00055559) midp_editing_number_pane

0xb253,	// (0x00055568) midp_ticker_pane

0xb013,	// (0x00055328) ai_message_heading_pane

0x7eec,	// (0x00052201) bg_popup_window_pane_cp14

0xb01b,	// (0x00055330) listscroll_ai_message_pane

0xaf9d,	// (0x000552b2) ai_message_heading_pane_g1_ParamLimits

0xaf9d,	// (0x000552b2) ai_message_heading_pane_g1

0xafa9,	// (0x000552be) ai_message_heading_pane_g2_ParamLimits

0xafa9,	// (0x000552be) ai_message_heading_pane_g2

0xafb5,	// (0x000552ca) ai_message_heading_pane_g3_ParamLimits

0xafb5,	// (0x000552ca) ai_message_heading_pane_g3

0xafc1,	// (0x000552d6) ai_message_heading_pane_g4_ParamLimits

0xafc1,	// (0x000552d6) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x00059c66) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x00059c66) ai_message_heading_pane_g

0xafcd,	// (0x000552e2) ai_message_heading_pane_t1_ParamLimits

0xafcd,	// (0x000552e2) ai_message_heading_pane_t1

0xafe7,	// (0x000552fc) ai_message_heading_pane_t2_ParamLimits

0xafe7,	// (0x000552fc) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00059c6f) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00059c6f) ai_message_heading_pane_t

0xaff9,	// (0x0005530e) bg_popup_heading_pane_cp1_ParamLimits

0xaff9,	// (0x0005530e) bg_popup_heading_pane_cp1

0xaf8b,	// (0x000552a0) list_ai_message_pane_ParamLimits

0xaf8b,	// (0x000552a0) list_ai_message_pane

0x8994,	// (0x00052ca9) scroll_pane_cp10

0xaf27,	// (0x0005523c) list_ai_message_pane_g1

0xaf2f,	// (0x00055244) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00059c43) list_ai_message_pane_g

0xaf37,	// (0x0005524c) list_ai_message_pane_t1_ParamLimits

0xaf37,	// (0x0005524c) list_ai_message_pane_t1

0xaf4c,	// (0x00055261) list_ai_message_pane_t2_ParamLimits

0xaf4c,	// (0x00055261) list_ai_message_pane_t2

0xaf61,	// (0x00055276) list_ai_message_pane_t3_ParamLimits

0xaf61,	// (0x00055276) list_ai_message_pane_t3

0xaf76,	// (0x0005528b) list_ai_message_pane_t4_ParamLimits

0xaf76,	// (0x0005528b) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x00059c48) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x00059c48) list_ai_message_pane_t

0xaf11,	// (0x00055226) cell_ai_soft_ind_pane_ParamLimits

0xaf11,	// (0x00055226) cell_ai_soft_ind_pane

0x959d,	// (0x000538b2) cell_ai_soft_ind_pane_g1_ParamLimits

0x959d,	// (0x000538b2) cell_ai_soft_ind_pane_g1

0x7eec,	// (0x00052201) grid_highlight_cp1

0x95aa,	// (0x000538bf) text_secondary_cp56_ParamLimits

0x95aa,	// (0x000538bf) text_secondary_cp56

0xaee6,	// (0x000551fb) example_general_pane_ParamLimits

0xaee6,	// (0x000551fb) example_general_pane

0xaef2,	// (0x00055207) example_parent_pane_g1_ParamLimits

0xaef2,	// (0x00055207) example_parent_pane_g1

0xaefe,	// (0x00055213) example_parent_pane_t1_ParamLimits

0xaefe,	// (0x00055213) example_parent_pane_t1

0x5e5a,	// (0x0005016f) popup_preview_text_window_ParamLimits

0x5e5a,	// (0x0005016f) popup_preview_text_window

0x93cf,	// (0x000536e4) list_single_pane_cp2_g4

0x82f1,	// (0x00052606) bg_popup_preview_window_pane_ParamLimits

0x82f1,	// (0x00052606) bg_popup_preview_window_pane

0xac33,	// (0x00054f48) popup_preview_text_window_t1_ParamLimits

0xac33,	// (0x00054f48) popup_preview_text_window_t1

0xac51,	// (0x00054f66) popup_preview_text_window_t2_ParamLimits

0xac51,	// (0x00054f66) popup_preview_text_window_t2

0xac9a,	// (0x00054faf) popup_preview_text_window_t3_ParamLimits

0xac9a,	// (0x00054faf) popup_preview_text_window_t3

0xacdf,	// (0x00054ff4) popup_preview_text_window_t4_ParamLimits

0xacdf,	// (0x00054ff4) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00059c17) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00059c17) popup_preview_text_window_t

0xad5d,	// (0x00055072) scroll_pane_cp11

0x9cd6,	// (0x00053feb) bg_popup_preview_window_pane_g1

0xabf3,	// (0x00054f08) bg_popup_preview_window_pane_g2

0xabfb,	// (0x00054f10) bg_popup_preview_window_pane_g3

0xac03,	// (0x00054f18) bg_popup_preview_window_pane_g4

0xac0b,	// (0x00054f20) bg_popup_preview_window_pane_g5

0xac13,	// (0x00054f28) bg_popup_preview_window_pane_g6

0xac1b,	// (0x00054f30) bg_popup_preview_window_pane_g7

0xac23,	// (0x00054f38) bg_popup_preview_window_pane_g8

0x4922,	// (0x0004ec37) aid_popup_width_pane

0x5e38,	// (0x0005014d) popup_midp_note_alarm_window_ParamLimits

0x5e38,	// (0x0005014d) popup_midp_note_alarm_window

0x8826,	// (0x00052b3b) data_form_pane_ParamLimits

0x52cd,	// (0x0004f5e2) form_field_data_pane_g1

0x52d7,	// (0x0004f5ec) form_field_data_pane_t1_ParamLimits

0x8832,	// (0x00052b47) input_focus_pane_ParamLimits

0x52f1,	// (0x0004f606) data_form_wide_pane_ParamLimits

0x5302,	// (0x0004f617) form_field_data_wide_pane_g1

0x530e,	// (0x0004f623) form_field_data_wide_pane_t1_ParamLimits

0x8597,	// (0x000528ac) input_focus_pane_cp6_ParamLimits

0x893f,	// (0x00052c54) input_popup_find_pane_g1_ParamLimits

0x893f,	// (0x00052c54) input_popup_find_pane_g1

0x556c,	// (0x0004f881) aid_navi_side_left_pane

0x5581,	// (0x0004f896) aid_navi_side_right_pane

0xa60c,	// (0x00054921) bg_popup_window_pane_cp30_ParamLimits

0xa60c,	// (0x00054921) bg_popup_window_pane_cp30

0xa686,	// (0x0005499b) popup_midp_note_alarm_window_g1_ParamLimits

0xa686,	// (0x0005499b) popup_midp_note_alarm_window_g1

0xa6b6,	// (0x000549cb) popup_midp_note_alarm_window_t1_ParamLimits

0xa6b6,	// (0x000549cb) popup_midp_note_alarm_window_t1

0xa757,	// (0x00054a6c) popup_midp_note_alarm_window_t2_ParamLimits

0xa757,	// (0x00054a6c) popup_midp_note_alarm_window_t2

0xa805,	// (0x00054b1a) popup_midp_note_alarm_window_t3_ParamLimits

0xa805,	// (0x00054b1a) popup_midp_note_alarm_window_t3

0xa837,	// (0x00054b4c) popup_midp_note_alarm_window_t4_ParamLimits

0xa837,	// (0x00054b4c) popup_midp_note_alarm_window_t4

0xa85d,	// (0x00054b72) popup_midp_note_alarm_window_t5_ParamLimits

0xa85d,	// (0x00054b72) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00059bb4) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00059bb4) popup_midp_note_alarm_window_t

0xa909,	// (0x00054c1e) wait_bar_pane_cp1_ParamLimits

0xa909,	// (0x00054c1e) wait_bar_pane_cp1

0x7eec,	// (0x00052201) wait_anim_pane_copy1

0x7eec,	// (0x00052201) wait_border_pane_copy1

0xa2ea,	// (0x000545ff) wait_border_pane_g1_copy1

0x5328,	// (0x0004f63d) form_field_popup_pane_g1

0x5330,	// (0x0004f645) form_field_popup_pane_t1_ParamLimits

0x8832,	// (0x00052b47) input_focus_pane_cp7_ParamLimits

0x8854,	// (0x00052b69) list_form_pane_ParamLimits

0x534a,	// (0x0004f65f) form_field_popup_wide_pane_g1

0x5352,	// (0x0004f667) form_field_popup_wide_pane_t1_ParamLimits

0x8832,	// (0x00052b47) input_focus_pane_cp8_ParamLimits

0x8860,	// (0x00052b75) list_form_wide_pane_ParamLimits

0xb38f,	// (0x000556a4) aid_size_cell_graphic_pane

0x53de,	// (0x0004f6f3) data_form_pane_t1_ParamLimits

0x76ad,	// (0x000519c2) data_form_wide_pane_t1_ParamLimits

0x98ab,	// (0x00053bc0) bg_status_flat_pane

0x7f2c,	// (0x00052241) title_pane_t1_ParamLimits

0x7f94,	// (0x000522a9) title_pane_t2_ParamLimits

0x7fba,	// (0x000522cf) title_pane_t3_ParamLimits

0xf557,	// (0x0005986c) title_pane_t_ParamLimits

0x8e0f,	// (0x00053124) level_1_signal_ParamLimits

0x8e1c,	// (0x00053131) level_2_signal_ParamLimits

0x8e29,	// (0x0005313e) level_3_signal_ParamLimits

0x8e36,	// (0x0005314b) level_4_signal_ParamLimits

0x8e43,	// (0x00053158) level_5_signal_ParamLimits

0x8e50,	// (0x00053165) level_6_signal_ParamLimits

0x8e5d,	// (0x00053172) level_7_signal_ParamLimits

0x8e0f,	// (0x00053124) level_1_battery_ParamLimits

0x8e1c,	// (0x00053131) level_2_battery_ParamLimits

0x8e29,	// (0x0005313e) level_3_battery_ParamLimits

0x8e36,	// (0x0005314b) level_4_battery_ParamLimits

0x8e43,	// (0x00053158) level_5_battery_ParamLimits

0x8e50,	// (0x00053165) level_6_battery_ParamLimits

0x8e5d,	// (0x00053172) level_7_battery_ParamLimits

0xa511,	// (0x00054826) bg_status_flat_pane_g1

0xa519,	// (0x0005482e) bg_status_flat_pane_g2

0xa521,	// (0x00054836) bg_status_flat_pane_g3

0xa529,	// (0x0005483e) bg_status_flat_pane_g4

0xa531,	// (0x00054846) bg_status_flat_pane_g5

0xa539,	// (0x0005484e) bg_status_flat_pane_g6

0xa541,	// (0x00054856) bg_status_flat_pane_g7

0x7fe2,	// (0x000522f7) tabs_3_active_pane_t1_ParamLimits

0x7fe2,	// (0x000522f7) tabs_3_passive_pane_t1_ParamLimits

0x7ffc,	// (0x00052311) tabs_4_active_pane_t1_ParamLimits

0x7ffc,	// (0x00052311) tabs_4_1_passive_pane_t1_ParamLimits

0x89d5,	// (0x00052cea) tabs_2_active_pane_t1_ParamLimits

0x89d5,	// (0x00052cea) tabs_2_passive_pane_t1_ParamLimits

0x89e7,	// (0x00052cfc) bg_active_tab_pane_cp4_ParamLimits

0x89f5,	// (0x00052d0a) tabs_2_long_active_pane_t1_ParamLimits

0x8a08,	// (0x00052d1d) bg_passive_tab_pane_cp4_ParamLimits

0x6143,	// (0x00050458) list_single_midp_graphic_pane_t1_ParamLimits

0x89e7,	// (0x00052cfc) bg_active_tab_pane_cp5_ParamLimits

0x8a14,	// (0x00052d29) tabs_3_long_active_pane_t1_ParamLimits

0x8a08,	// (0x00052d1d) bg_passive_tab_pane_cp5_ParamLimits

0x6143,	// (0x00050458) list_single_midp_graphic_pane_t1

0x98ab,	// (0x00053bc0) bg_status_flat_pane_ParamLimits

0x996e,	// (0x00053c83) indicator_pane_cp2_ParamLimits

0x996e,	// (0x00053c83) indicator_pane_cp2

0x9a99,	// (0x00053dae) navi_pane_srt_ParamLimits

0x9a99,	// (0x00053dae) navi_pane_srt

0x9abd,	// (0x00053dd2) popup_clock_digital_analogue_window_cp1

0x80a9,	// (0x000523be) indicator_pane_t1

0x949e,	// (0x000537b3) copy_highlight_pane

0x949e,	// (0x000537b3) cursor_graphics_pane

0x949e,	// (0x000537b3) graphic_within_text_pane

0x949e,	// (0x000537b3) link_highlight_pane

0xad20,	// (0x00055035) popup_preview_text_window_t5_ParamLimits

0xad20,	// (0x00055035) popup_preview_text_window_t5

0x95c4,	// (0x000538d9) cursor_digital_pane

0x95c4,	// (0x000538d9) cursor_primary_pane

0x95d5,	// (0x000538ea) cursor_primary_small_pane

0x95dd,	// (0x000538f2) cursor_secondary_pane

0x95e5,	// (0x000538fa) cursor_title_pane

0x95c4,	// (0x000538d9) link_highlight_digital_pane

0x95cc,	// (0x000538e1) link_highlight_primary_pane

0x95d5,	// (0x000538ea) link_highlight_primary_small_pane

0x95dd,	// (0x000538f2) link_highlight_secondary_pane

0x95e5,	// (0x000538fa) link_highlight_title_pane

0x95c4,	// (0x000538d9) copy_highlight_digital_pane

0x95c4,	// (0x000538d9) copy_highlight_primary_pane

0x95d5,	// (0x000538ea) copy_highlight_primary_small_pane

0x95dd,	// (0x000538f2) copy_highlight_secondary_pane

0x95e5,	// (0x000538fa) copy_highlight_title_pane

0x95dd,	// (0x000538f2) graphic_text_digital_pane

0xa5af,	// (0x000548c4) graphic_text_primary_pane

0xa5b8,	// (0x000548cd) graphic_text_primary_small_pane

0x95d5,	// (0x000538ea) graphic_text_secondary_pane

0x95c4,	// (0x000538d9) graphic_text_title_pane

0x95ed,	// (0x00053902) cursor_primary_pane_g1

0xa5a1,	// (0x000548b6) cursor_text_primary_t1

0xa589,	// (0x0005489e) cursor_primary_small_pane_g1

0xa593,	// (0x000548a8) cursor_text_primary_small_t1

0xa571,	// (0x00054886) cursor_primary_small_pane_g1_copy1

0xa57b,	// (0x00054890) cursor_text_primary_small_t1_copy1

0xa559,	// (0x0005486e) cursor_text_title_t1

0xa567,	// (0x0005487c) cursor_title_pane_g1

0x95ed,	// (0x00053902) cursor_digital_pane_g1

0x95f7,	// (0x0005390c) cursor_text_digital_t1

0xa4fa,	// (0x0005480f) link_highlight_primary_pane_g1

0xa502,	// (0x00054817) link_highlight_primary_pane_t1

0x9605,	// (0x0005391a) link_highlight_primary_small_pane_g1

0x960d,	// (0x00053922) link_highlight_primary_small_pane_t1

0x9605,	// (0x0005391a) link_highlight_secondary_pane_g1

0x961c,	// (0x00053931) link_highlight_secondary_pane_t1

0xa46e,	// (0x00054783) link_highlight_title_pane_g1

0xa476,	// (0x0005478b) link_highlight_title_pane_t1

0xa457,	// (0x0005476c) link_highlight_digital_pane_g1

0xa45f,	// (0x00054774) link_highlight_digital_pane_t1

0xa32f,	// (0x00054644) copy_highlight_primary_pane_g1

0xa337,	// (0x0005464c) copy_highlight_primary_pane_t1

0xa309,	// (0x0005461e) copy_highlight_primary_small_pane_g1

0xa320,	// (0x00054635) copy_highlight_primary_small_pane_t1

0x962b,	// (0x00053940) copy_highlight_secondary_pane_g1

0x9633,	// (0x00053948) copy_highlight_secondary_pane_t1

0xa309,	// (0x0005461e) copy_highlight_title_pane_g1

0xa311,	// (0x00054626) copy_highlight_title_pane_t1

0xa32f,	// (0x00054644) copy_highlight_digital_pane_g1

0xb559,	// (0x0005586e) copy_highlight_digital_pane_t1

0xb4ad,	// (0x000557c2) graphic_text_primary_pane_g1

0xb53d,	// (0x00055852) graphic_text_primary_pane_t1

0xb54b,	// (0x00055860) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x00059ce3) graphic_text_primary_pane_t

0xb519,	// (0x0005582e) graphic_text_primary_small_pane_g1

0xb521,	// (0x00055836) graphic_text_primary_small_pane_t1

0xb52f,	// (0x00055844) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x00059cde) graphic_text_primary_small_pane_t

0xb4f5,	// (0x0005580a) graphic_text_secondary_pane_g1

0xb4fd,	// (0x00055812) graphic_text_secondary_pane_t1

0xb50b,	// (0x00055820) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x00059cd9) graphic_text_secondary_pane_t

0xb4d1,	// (0x000557e6) graphic_text_title_pane_g1

0xb4d9,	// (0x000557ee) graphic_text_title_pane_t1

0xb4e7,	// (0x000557fc) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x00059cd4) graphic_text_title_pane_t

0xb4ad,	// (0x000557c2) graphic_text_digital_pane_g1

0xb4b5,	// (0x000557ca) graphic_text_digital_pane_t1

0xb4c3,	// (0x000557d8) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x00059ccf) graphic_text_digital_pane_t

0x7fcc,	// (0x000522e1) navi_icon_pane_srt_ParamLimits

0x7fcc,	// (0x000522e1) navi_icon_pane_srt

0x7eec,	// (0x00052201) navi_midp_pane_srt

0x7eec,	// (0x00052201) navi_navi_pane_srt

0x7fcc,	// (0x000522e1) navi_text_pane_srt_ParamLimits

0x7fcc,	// (0x000522e1) navi_text_pane_srt

0xb478,	// (0x0005578d) navi_navi_icon_text_pane_srt

0xb480,	// (0x00055795) navi_navi_pane_srt_g1_ParamLimits

0xb480,	// (0x00055795) navi_navi_pane_srt_g1

0xb492,	// (0x000557a7) navi_navi_pane_srt_g2_ParamLimits

0xb492,	// (0x000557a7) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x00059cca) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x00059cca) navi_navi_pane_srt_g

0xb4a4,	// (0x000557b9) navi_navi_tabs_pane_srt

0xb478,	// (0x0005578d) navi_navi_text_pane_srt

0xb478,	// (0x0005578d) navi_navi_volume_pane_srt

0xb469,	// (0x0005577e) navi_navi_text_pane_srt_t1

0x64b7,	// (0x000507cc) navi_navi_volume_pane_srt_g1

0x64bf,	// (0x000507d4) volume_small_pane_srt_ParamLimits

0x64bf,	// (0x000507d4) volume_small_pane_srt

0x58b6,	// (0x0004fbcb) volume_small_pane_srt_g1_ParamLimits

0x58b6,	// (0x0004fbcb) volume_small_pane_srt_g1

0x58c6,	// (0x0004fbdb) volume_small_pane_srt_g2_ParamLimits

0x58c6,	// (0x0004fbdb) volume_small_pane_srt_g2

0x58d7,	// (0x0004fbec) volume_small_pane_srt_g3_ParamLimits

0x58d7,	// (0x0004fbec) volume_small_pane_srt_g3

0x58e8,	// (0x0004fbfd) volume_small_pane_srt_g4_ParamLimits

0x58e8,	// (0x0004fbfd) volume_small_pane_srt_g4

0x58f9,	// (0x0004fc0e) volume_small_pane_srt_g5_ParamLimits

0x58f9,	// (0x0004fc0e) volume_small_pane_srt_g5

0x590a,	// (0x0004fc1f) volume_small_pane_srt_g6_ParamLimits

0x590a,	// (0x0004fc1f) volume_small_pane_srt_g6

0x591b,	// (0x0004fc30) volume_small_pane_srt_g7_ParamLimits

0x591b,	// (0x0004fc30) volume_small_pane_srt_g7

0x592c,	// (0x0004fc41) volume_small_pane_srt_g8_ParamLimits

0x592c,	// (0x0004fc41) volume_small_pane_srt_g8

0x593d,	// (0x0004fc52) volume_small_pane_srt_g9_ParamLimits

0x593d,	// (0x0004fc52) volume_small_pane_srt_g9

0x594e,	// (0x0004fc63) volume_small_pane_srt_g10_ParamLimits

0x594e,	// (0x0004fc63) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00059a77) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00059a77) volume_small_pane_srt_g

0x839a,	// (0x000526af) query_popup_data_pane_cp2

0xb44f,	// (0x00055764) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb44f,	// (0x00055764) navi_navi_icon_text_pane_srt_t1

0xa5af,	// (0x000548c4) navi_tabs_2_long_pane_srt

0xa5af,	// (0x000548c4) navi_tabs_2_pane_srt

0xa5af,	// (0x000548c4) navi_tabs_3_long_pane_srt

0xa5af,	// (0x000548c4) navi_tabs_3_pane_srt

0xa5af,	// (0x000548c4) navi_tabs_4_pane_srt

0x6497,	// (0x000507ac) tabs_2_active_pane_srt_ParamLimits

0x6497,	// (0x000507ac) tabs_2_active_pane_srt

0x64a7,	// (0x000507bc) tabs_2_passive_pane_srt_ParamLimits

0x64a7,	// (0x000507bc) tabs_2_passive_pane_srt

0x97d8,	// (0x00053aed) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97d8,	// (0x00053aed) bg_passive_tab_pane_cp1_srt

0xb41b,	// (0x00055730) bg_passive_tab_pane_g1_cp1_srt

0x90e3,	// (0x000533f8) bg_passive_tab_pane_g2_cp1_srt

0xb424,	// (0x00055739) bg_passive_tab_pane_g3_cp1_srt

0x7fcc,	// (0x000522e1) bg_active_tab_pane_cp1_srt_ParamLimits

0x7fcc,	// (0x000522e1) bg_active_tab_pane_cp1_srt

0xb42d,	// (0x00055742) tabs_2_active_pane_srt_g1

0xb435,	// (0x0005574a) tabs_2_active_pane_srt_t1_ParamLimits

0xb435,	// (0x0005574a) tabs_2_active_pane_srt_t1

0xb41b,	// (0x00055730) bg_active_tab_pane_g1_cp1_srt

0x90e3,	// (0x000533f8) bg_active_tab_pane_g2_cp1_srt

0xb424,	// (0x00055739) bg_active_tab_pane_g3_cp1_srt

0x6464,	// (0x00050779) tabs_3_active_pane_srt_ParamLimits

0x6464,	// (0x00050779) tabs_3_active_pane_srt

0x6475,	// (0x0005078a) tabs_3_passive_pane_cp_srt_ParamLimits

0x6475,	// (0x0005078a) tabs_3_passive_pane_cp_srt

0x6486,	// (0x0005079b) tabs_3_passive_pane_srt_ParamLimits

0x6486,	// (0x0005079b) tabs_3_passive_pane_srt

0x97d8,	// (0x00053aed) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97d8,	// (0x00053aed) bg_passive_tab_pane_cp2_srt

0x9642,	// (0x00053957) bg_passive_tab_pane_g1_cp2_srt

0x90e3,	// (0x000533f8) bg_passive_tab_pane_g2_cp2_srt

0x964b,	// (0x00053960) bg_passive_tab_pane_g3_cp2_srt

0x7fcc,	// (0x000522e1) bg_active_tab_pane_cp2_srt_ParamLimits

0x7fcc,	// (0x000522e1) bg_active_tab_pane_cp2_srt

0xb401,	// (0x00055716) tabs_3_active_pane_srt_g1

0xb409,	// (0x0005571e) tabs_3_active_pane_srt_t1_ParamLimits

0xb409,	// (0x0005571e) tabs_3_active_pane_srt_t1

0x9642,	// (0x00053957) bg_active_tab_pane_g1_cp2_srt

0x90e3,	// (0x000533f8) bg_active_tab_pane_g2_cp2_srt

0x964b,	// (0x00053960) bg_active_tab_pane_g3_cp2_srt

0x641c,	// (0x00050731) tabs_4_active_pane_srt_ParamLimits

0x641c,	// (0x00050731) tabs_4_active_pane_srt

0x642e,	// (0x00050743) tabs_4_passive_pane_cp2_srt_ParamLimits

0x642e,	// (0x00050743) tabs_4_passive_pane_cp2_srt

0x5ab1,	// (0x0004fdc6) aid_size_cell_toolbar

0x8a08,	// (0x00052d1d) main_idle_act_pane_ParamLimits

0x5c6c,	// (0x0004ff81) popup_large_graphic_colour_window_ParamLimits

0x5fd1,	// (0x000502e6) popup_toolbar_window_ParamLimits

0x5fd1,	// (0x000502e6) popup_toolbar_window

0xb275,	// (0x0005558a) list_single_graphic_2heading_pane_ParamLimits

0xb275,	// (0x0005558a) list_single_graphic_2heading_pane

0x8bc1,	// (0x00052ed6) aid_size_cell_apps_grid_lsc_pane

0x8bd3,	// (0x00052ee8) aid_size_cell_apps_grid_prt_pane

0x97d8,	// (0x00053aed) bg_wml_button_pane_cp1_ParamLimits

0x97d8,	// (0x00053aed) bg_wml_button_pane_cp1

0x9f92,	// (0x000542a7) form_midp_field_text_pane_t1_ParamLimits

0x9d4a,	// (0x0005405f) input_focus_pane_cp050_ParamLimits

0x9fcd,	// (0x000542e2) list_midp_form_text_pane_ParamLimits

0x9f6f,	// (0x00054284) input_focus_pane_cp051_ParamLimits

0x9f83,	// (0x00054298) list_midp_choice_pane_ParamLimits

0x9e00,	// (0x00054115) list_single_2graphic_pane_cp3_ParamLimits

0x9e00,	// (0x00054115) list_single_2graphic_pane_cp3

0x9e2b,	// (0x00054140) list_single_midp_graphic_pane_ParamLimits

0x9e2b,	// (0x00054140) list_single_midp_graphic_pane

0x48ac,	// (0x0004ebc1) list_single_graphic_2heading_pane_g1_ParamLimits

0x48ac,	// (0x0004ebc1) list_single_graphic_2heading_pane_g1

0x48b8,	// (0x0004ebcd) list_single_graphic_2heading_pane_g4_ParamLimits

0x48b8,	// (0x0004ebcd) list_single_graphic_2heading_pane_g4

0x48c4,	// (0x0004ebd9) list_single_graphic_2heading_pane_g5_ParamLimits

0x48c4,	// (0x0004ebd9) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00059aca) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00059aca) list_single_graphic_2heading_pane_g

0x48d0,	// (0x0004ebe5) list_single_graphic_2heading_pane_t1_ParamLimits

0x48d0,	// (0x0004ebe5) list_single_graphic_2heading_pane_t1

0x48e4,	// (0x0004ebf9) list_single_graphic_2heading_pane_t2_ParamLimits

0x48e4,	// (0x0004ebf9) list_single_graphic_2heading_pane_t2

0x48fe,	// (0x0004ec13) list_single_graphic_2heading_pane_t3_ParamLimits

0x48fe,	// (0x0004ec13) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00059ad1) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00059ad1) list_single_graphic_2heading_pane_t

0x9c14,	// (0x00053f29) bg_popup_sub_pane_cp2

0x9c3e,	// (0x00053f53) grid_toobar_pane

0x607c,	// (0x00050391) cell_toolbar_pane_ParamLimits

0x607c,	// (0x00050391) cell_toolbar_pane

0x9c7a,	// (0x00053f8f) cell_toolbar_pane_g1_ParamLimits

0x9c7a,	// (0x00053f8f) cell_toolbar_pane_g1

0x9c8e,	// (0x00053fa3) cell_toolbar_pane_g2_ParamLimits

0x9c8e,	// (0x00053fa3) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00059adf) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00059adf) cell_toolbar_pane_g

0x9cb0,	// (0x00053fc5) grid_highlight_pane_cp2_ParamLimits

0x9cb0,	// (0x00053fc5) grid_highlight_pane_cp2

0x9cca,	// (0x00053fdf) toolbar_button_pane

0x9cd6,	// (0x00053feb) toolbar_button_pane_g1

0x9cde,	// (0x00053ff3) toolbar_button_pane_g2

0x9ce6,	// (0x00053ffb) toolbar_button_pane_g3

0x9cee,	// (0x00054003) toolbar_button_pane_g4

0x9cf6,	// (0x0005400b) toolbar_button_pane_g5

0x9cfe,	// (0x00054013) toolbar_button_pane_g6

0x9d06,	// (0x0005401b) toolbar_button_pane_g7

0x9d0e,	// (0x00054023) toolbar_button_pane_g8

0x9d16,	// (0x0005402b) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00059ae4) toolbar_button_pane_g

0x60d6,	// (0x000503eb) list_single_2graphic_pane_g1_cp3_ParamLimits

0x60d6,	// (0x000503eb) list_single_2graphic_pane_g1_cp3

0x60e2,	// (0x000503f7) list_single_2graphic_pane_g2_cp3_ParamLimits

0x60e2,	// (0x000503f7) list_single_2graphic_pane_g2_cp3

0x60f3,	// (0x00050408) list_single_2graphic_pane_g3_cp3

0x60fb,	// (0x00050410) list_single_2graphic_pane_g4_cp3_ParamLimits

0x60fb,	// (0x00050410) list_single_2graphic_pane_g4_cp3

0x6107,	// (0x0005041c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6107,	// (0x0005041c) list_single_2graphic_pane_t1_cp3

0x6137,	// (0x0005044c) list_single_midp_graphic_pane_g2_ParamLimits

0x6137,	// (0x0005044c) list_single_midp_graphic_pane_g2

0x489c,	// (0x0004ebb1) aid_zoom_text_primary

0x48a4,	// (0x0004ebb9) aid_zoom_text_secondary

0x96fc,	// (0x00053a11) status_small_pane_g7_ParamLimits

0x96fc,	// (0x00053a11) status_small_pane_g7

0x971f,	// (0x00053a34) status_small_pane_t1_ParamLimits

0x7f03,	// (0x00052218) title_pane_g2

0x0003,

0xf54e,	// (0x00059863) title_pane_g

0x843e,	// (0x00052753) aid_size_cell_colour_1_pane_ParamLimits

0x843e,	// (0x00052753) aid_size_cell_colour_1_pane

0x8452,	// (0x00052767) aid_size_cell_colour_2_pane_ParamLimits

0x8452,	// (0x00052767) aid_size_cell_colour_2_pane

0x8466,	// (0x0005277b) aid_size_cell_colour_3_pane_ParamLimits

0x8466,	// (0x0005277b) aid_size_cell_colour_3_pane

0x847a,	// (0x0005278f) aid_size_cell_colour_4_pane_ParamLimits

0x847a,	// (0x0005278f) aid_size_cell_colour_4_pane

0x54a8,	// (0x0004f7bd) title_pane_stacon_g1_ParamLimits

0x54a8,	// (0x0004f7bd) title_pane_stacon_g1

0xa38e,	// (0x000546a3) popup_note_wait_window_g3_ParamLimits

0xa38e,	// (0x000546a3) popup_note_wait_window_g3

0xa404,	// (0x00054719) popup_note_wait_window_t5_ParamLimits

0xa404,	// (0x00054719) popup_note_wait_window_t5

0x7eec,	// (0x00052201) main_feb_china_hwr_fs_writing_pane

0x5b55,	// (0x0004fe6a) popup_feb_china_hwr_fs_window_ParamLimits

0x5b55,	// (0x0004fe6a) popup_feb_china_hwr_fs_window

0x6159,	// (0x0005046e) aid_size_cell_hwr_fs_ParamLimits

0x6159,	// (0x0005046e) aid_size_cell_hwr_fs

0x9d4a,	// (0x0005405f) bg_popup_sub_pane_cp3_ParamLimits

0x9d4a,	// (0x0005405f) bg_popup_sub_pane_cp3

0x616e,	// (0x00050483) grid_hwr_fs_pane_ParamLimits

0x616e,	// (0x00050483) grid_hwr_fs_pane

0x6186,	// (0x0005049b) linegrid_hwr_fs_pane_ParamLimits

0x6186,	// (0x0005049b) linegrid_hwr_fs_pane

0x6196,	// (0x000504ab) cell_hwr_fs_pane_ParamLimits

0x6196,	// (0x000504ab) cell_hwr_fs_pane

0x9d56,	// (0x0005406b) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d56,	// (0x0005406b) linegrid_hwr_fs_pane_g1

0x9d62,	// (0x00054077) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d62,	// (0x00054077) linegrid_hwr_fs_pane_g2

0x9d74,	// (0x00054089) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d74,	// (0x00054089) linegrid_hwr_fs_pane_g3

0x61b8,	// (0x000504cd) linegrid_hwr_fs_pane_g4_ParamLimits

0x61b8,	// (0x000504cd) linegrid_hwr_fs_pane_g4

0x61d2,	// (0x000504e7) linegrid_hwr_fs_pane_g5_ParamLimits

0x61d2,	// (0x000504e7) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00059b0a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00059b0a) linegrid_hwr_fs_pane_g

0x9d80,	// (0x00054095) cell_hwr_fs_pane_g1_ParamLimits

0x9d80,	// (0x00054095) cell_hwr_fs_pane_g1

0x9b4b,	// (0x00053e60) cell_hwr_fs_pane_g2_ParamLimits

0x9b4b,	// (0x00053e60) cell_hwr_fs_pane_g2

0x9d96,	// (0x000540ab) cell_hwr_fs_pane_g3_ParamLimits

0x9d96,	// (0x000540ab) cell_hwr_fs_pane_g3

0x9da3,	// (0x000540b8) cell_hwr_fs_pane_g4_ParamLimits

0x9da3,	// (0x000540b8) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00059b15) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00059b15) cell_hwr_fs_pane_g

0x61e8,	// (0x000504fd) cell_hwr_fs_pane_t1

0x7eec,	// (0x00052201) grid_highlight_pane_cp6

0x7eec,	// (0x00052201) main_idle_act2_pane

0x897b,	// (0x00052c90) aid_inside_area_popup_secondary

0xaa43,	// (0x00054d58) aid_inside_area_window_primary_ParamLimits

0xaa43,	// (0x00054d58) aid_inside_area_window_primary

0xb568,	// (0x0005587d) ai2_news_ticker_pane

0xb570,	// (0x00055885) aid_size_cell_ai1_link_ParamLimits

0xb570,	// (0x00055885) aid_size_cell_ai1_link

0xb58a,	// (0x0005589f) popup_ai2_data_window_ParamLimits

0xb58a,	// (0x0005589f) popup_ai2_data_window

0xb59e,	// (0x000558b3) popup_ai2_link_window_ParamLimits

0xb59e,	// (0x000558b3) popup_ai2_link_window

0x9d4a,	// (0x0005405f) bg_popup_sub_pane_cp4_ParamLimits

0x9d4a,	// (0x0005405f) bg_popup_sub_pane_cp4

0xb5b2,	// (0x000558c7) grid_ai2_link_pane_ParamLimits

0xb5b2,	// (0x000558c7) grid_ai2_link_pane

0xb5c9,	// (0x000558de) popup_ai2_link_window_g1_ParamLimits

0xb5c9,	// (0x000558de) popup_ai2_link_window_g1

0xb5d5,	// (0x000558ea) popup_ai2_link_window_g2_ParamLimits

0xb5d5,	// (0x000558ea) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x00059ce8) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x00059ce8) popup_ai2_link_window_g

0xb5e4,	// (0x000558f9) ai2_mp_button_pane

0xb5ec,	// (0x00055901) ai2_mp_volume_pane

0x9f6f,	// (0x00054284) bg_popup_sub_pane_cp5_ParamLimits

0x9f6f,	// (0x00054284) bg_popup_sub_pane_cp5

0xb5f4,	// (0x00055909) heading_ai2_gene_pane_ParamLimits

0xb5f4,	// (0x00055909) heading_ai2_gene_pane

0xb600,	// (0x00055915) list_ai2_gene_pane_ParamLimits

0xb600,	// (0x00055915) list_ai2_gene_pane

0xb648,	// (0x0005595d) cell_ai2_link_pane_ParamLimits

0xb648,	// (0x0005595d) cell_ai2_link_pane

0xb65e,	// (0x00055973) cell_ai2_link_pane_g1

0x7eec,	// (0x00052201) grid_highlight_pane_cp7

0x64d4,	// (0x000507e9) ai2_mp_volume_pane_g1

0xb72f,	// (0x00055a44) ai2_mp_volume_pane_g2

0xb6a4,	// (0x000559b9) list_ai2_gene_pane_t1

0xb737,	// (0x00055a4c) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x00059d01) ai2_mp_volume_pane_g

0x64dc,	// (0x000507f1) volume_small_pane_cp3

0xb73f,	// (0x00055a54) aid_size_cell_ai2_button

0xb747,	// (0x00055a5c) grid_ai2_button_pane

0xb750,	// (0x00055a65) cell_ai2_button_pane_ParamLimits

0xb750,	// (0x00055a65) cell_ai2_button_pane

0x7ee2,	// (0x000521f7) cell_ai2_button_pane_g1

0x7eec,	// (0x00052201) grid_highlight_pane_cp8

0xb6ef,	// (0x00055a04) ai2_gene_pane_t1_ParamLimits

0xb6ef,	// (0x00055a04) ai2_gene_pane_t1

0x5aa7,	// (0x0004fdbc) aid_height_parent_landscape

0xb0b4,	// (0x000553c9) aid_height_set_list

0xb0c5,	// (0x000553da) aid_size_parent

0xb38f,	// (0x000556a4) aid_size_cell_graphic_pane_ParamLimits

0xb610,	// (0x00055925) popup_ai2_data_window_g1_ParamLimits

0xb610,	// (0x00055925) popup_ai2_data_window_g1

0xb61c,	// (0x00055931) ai2_news_ticker_pane_g1

0xb624,	// (0x00055939) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x00059ced) ai2_news_ticker_pane_g

0xb62c,	// (0x00055941) ai2_news_ticker_pane_t1

0xb63a,	// (0x0005594f) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x00059cf2) ai2_news_ticker_pane_t

0xb667,	// (0x0005597c) heading_ai2_gene_pane_g1

0xb66f,	// (0x00055984) heading_ai2_gene_pane_t1_ParamLimits

0xb66f,	// (0x00055984) heading_ai2_gene_pane_t1

0xb684,	// (0x00055999) list_highlight_pane_cp6

0xb68c,	// (0x000559a1) ai2_gene_pane_ParamLimits

0xb68c,	// (0x000559a1) ai2_gene_pane

0xb6b2,	// (0x000559c7) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x00059cf7) list_ai2_gene_pane_t

0xb6c0,	// (0x000559d5) list_highlight_pane_cp8_ParamLimits

0xb6c0,	// (0x000559d5) list_highlight_pane_cp8

0xb6d1,	// (0x000559e6) ai2_gene_pane_g1_ParamLimits

0xb6d1,	// (0x000559e6) ai2_gene_pane_g1

0xb6e3,	// (0x000559f8) ai2_gene_pane_g2_ParamLimits

0xb6e3,	// (0x000559f8) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x00059cfc) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x00059cfc) ai2_gene_pane_g

0x87bc,	// (0x00052ad1) scroll_pane_cp12

0x5a66,	// (0x0004fd7b) control_pane_t3_ParamLimits

0x5a66,	// (0x0004fd7b) control_pane_t3

0x9710,	// (0x00053a25) status_small_pane_g8_ParamLimits

0x9710,	// (0x00053a25) status_small_pane_g8

0x5c37,	// (0x0004ff4c) popup_find_window_ParamLimits

0x5e4c,	// (0x00050161) popup_note_image_window_ParamLimits

0x60ac,	// (0x000503c1) list_double2_graphic_pane_vc_g1_ParamLimits

0x60ac,	// (0x000503c1) list_double2_graphic_pane_vc_g1

0x7510,	// (0x00051825) list_double2_graphic_pane_vc_g2_ParamLimits

0x7510,	// (0x00051825) list_double2_graphic_pane_vc_g2

0x751c,	// (0x00051831) list_double2_graphic_pane_vc_g3_ParamLimits

0x751c,	// (0x00051831) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00059ad8) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059ad8) list_double2_graphic_pane_vc_g

0x60b8,	// (0x000503cd) list_double2_graphic_pane_vc_t1_ParamLimits

0x60b8,	// (0x000503cd) list_double2_graphic_pane_vc_t1

0x7510,	// (0x00051825) list_single_heading_pane_vc_g1_ParamLimits

0x7510,	// (0x00051825) list_single_heading_pane_vc_g1

0x751c,	// (0x00051831) list_single_heading_pane_vc_g2_ParamLimits

0x751c,	// (0x00051831) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x000598e7) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x000598e7) list_single_heading_pane_vc_g

0x6121,	// (0x00050436) list_single_heading_pane_vc_t1_ParamLimits

0x6121,	// (0x00050436) list_single_heading_pane_vc_t1

0x75d8,	// (0x000518ed) list_single_heading_pane_vc_t2_ParamLimits

0x75d8,	// (0x000518ed) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00059af9) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00059af9) list_single_heading_pane_vc_t

0x8fcc,	// (0x000532e1) list_setting_number_pane_vc_g1_ParamLimits

0x8fcc,	// (0x000532e1) list_setting_number_pane_vc_g1

0x8fd8,	// (0x000532ed) list_setting_number_pane_vc_g2_ParamLimits

0x8fd8,	// (0x000532ed) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x00059afe) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x00059afe) list_setting_number_pane_vc_g

0x75f4,	// (0x00051909) list_setting_number_pane_vc_t1_ParamLimits

0x75f4,	// (0x00051909) list_setting_number_pane_vc_t1

0x7608,	// (0x0005191d) list_setting_number_pane_vc_t2_ParamLimits

0x7608,	// (0x0005191d) list_setting_number_pane_vc_t2

0x7622,	// (0x00051937) list_setting_number_pane_vc_t3_ParamLimits

0x7622,	// (0x00051937) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00059b03) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00059b03) list_setting_number_pane_vc_t

0x764a,	// (0x0005195f) set_value_pane_vc_ParamLimits

0x764a,	// (0x0005195f) set_value_pane_vc

0xb275,	// (0x0005558a) list_double2_graphic_pane_vc_ParamLimits

0xb275,	// (0x0005558a) list_double2_graphic_pane_vc

0x770f,	// (0x00051a24) list_double2_large_graphic_pane_vc_ParamLimits

0x770f,	// (0x00051a24) list_double2_large_graphic_pane_vc

0xb275,	// (0x0005558a) list_double2_pane_vc_ParamLimits

0xb275,	// (0x0005558a) list_double2_pane_vc

0xb275,	// (0x0005558a) list_double_graphic_heading_pane_vc_ParamLimits

0xb275,	// (0x0005558a) list_double_graphic_heading_pane_vc

0xb275,	// (0x0005558a) list_double_graphic_pane_vc_ParamLimits

0xb275,	// (0x0005558a) list_double_graphic_pane_vc

0xb275,	// (0x0005558a) list_double_heading_pane_vc_ParamLimits

0xb275,	// (0x0005558a) list_double_heading_pane_vc

0x7721,	// (0x00051a36) list_double_large_graphic_pane_vc_ParamLimits

0x7721,	// (0x00051a36) list_double_large_graphic_pane_vc

0xb275,	// (0x0005558a) list_double_number_pane_vc_ParamLimits

0xb275,	// (0x0005558a) list_double_number_pane_vc

0xb275,	// (0x0005558a) list_double_pane_vc_ParamLimits

0xb275,	// (0x0005558a) list_double_pane_vc

0xb275,	// (0x0005558a) list_double_time_pane_vc_ParamLimits

0xb275,	// (0x0005558a) list_double_time_pane_vc

0xb275,	// (0x0005558a) list_setting_number_pane_vc_ParamLimits

0xb275,	// (0x0005558a) list_setting_number_pane_vc

0xb275,	// (0x0005558a) list_setting_pane_vc_ParamLimits

0xb275,	// (0x0005558a) list_setting_pane_vc

0xb275,	// (0x0005558a) list_single_graphic_heading_pane_vc_ParamLimits

0xb275,	// (0x0005558a) list_single_graphic_heading_pane_vc

0xb275,	// (0x0005558a) list_single_heading_pane_vc_ParamLimits

0xb275,	// (0x0005558a) list_single_heading_pane_vc

0x773f,	// (0x00051a54) list_single_number_heading_pane_vc_ParamLimits

0x773f,	// (0x00051a54) list_single_number_heading_pane_vc

0x60ac,	// (0x000503c1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x60ac,	// (0x000503c1) list_double_graphic_heading_pane_vc_g1

0x7510,	// (0x00051825) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7510,	// (0x00051825) list_double_graphic_heading_pane_vc_g2

0x751c,	// (0x00051831) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x751c,	// (0x00051831) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x00059ad8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059ad8) list_double_graphic_heading_pane_vc_g

0x7805,	// (0x00051b1a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7805,	// (0x00051b1a) list_double_graphic_heading_pane_vc_t1

0x7821,	// (0x00051b36) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x7821,	// (0x00051b36) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x00059d08) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x00059d08) list_double_graphic_heading_pane_vc_t

0x8fcc,	// (0x000532e1) list_setting_pane_vc_g1_ParamLimits

0x8fcc,	// (0x000532e1) list_setting_pane_vc_g1

0x8fd8,	// (0x000532ed) list_setting_pane_vc_g2_ParamLimits

0x8fd8,	// (0x000532ed) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x00059afe) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x00059afe) list_setting_pane_vc_g

0x7839,	// (0x00051b4e) list_setting_pane_vc_t1_ParamLimits

0x7839,	// (0x00051b4e) list_setting_pane_vc_t1

0x7853,	// (0x00051b68) list_setting_pane_vc_t2_ParamLimits

0x7853,	// (0x00051b68) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x00059d4b) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x00059d4b) list_setting_pane_vc_t

0x764a,	// (0x0005195f) set_value_pane_cp_vc_ParamLimits

0x764a,	// (0x0005195f) set_value_pane_cp_vc

0x7510,	// (0x00051825) list_single_number_heading_pane_vc_g1_ParamLimits

0x7510,	// (0x00051825) list_single_number_heading_pane_vc_g1

0x751c,	// (0x00051831) list_single_number_heading_pane_vc_g2_ParamLimits

0x751c,	// (0x00051831) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x000598e7) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x000598e7) list_single_number_heading_pane_vc_g

0x6121,	// (0x00050436) list_single_number_heading_pane_vc_t1_ParamLimits

0x6121,	// (0x00050436) list_single_number_heading_pane_vc_t1

0x786b,	// (0x00051b80) list_single_number_heading_pane_vc_t2_ParamLimits

0x786b,	// (0x00051b80) list_single_number_heading_pane_vc_t2

0x4e1e,	// (0x0004f133) list_single_number_heading_pane_vc_t3_ParamLimits

0x4e1e,	// (0x0004f133) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x00059d50) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x00059d50) list_single_number_heading_pane_vc_t

0x60ac,	// (0x000503c1) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x60ac,	// (0x000503c1) list_single_graphic_heading_pane_vc_g1

0x7510,	// (0x00051825) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7510,	// (0x00051825) list_single_graphic_heading_pane_vc_g4

0x751c,	// (0x00051831) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x751c,	// (0x00051831) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00059ad8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059ad8) list_single_graphic_heading_pane_vc_g

0x6121,	// (0x00050436) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6121,	// (0x00050436) list_single_graphic_heading_pane_vc_t1

0x787f,	// (0x00051b94) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x787f,	// (0x00051b94) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x00059d57) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x00059d57) list_single_graphic_heading_pane_vc_t

0x7510,	// (0x00051825) list_double2_pane_vc_g1_ParamLimits

0x7510,	// (0x00051825) list_double2_pane_vc_g1

0x751c,	// (0x00051831) list_double2_pane_vc_g2_ParamLimits

0x751c,	// (0x00051831) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x000598e7) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x000598e7) list_double2_pane_vc_g

0x76dd,	// (0x000519f2) list_double2_pane_vc_t1_ParamLimits

0x76dd,	// (0x000519f2) list_double2_pane_vc_t1

0x7893,	// (0x00051ba8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7893,	// (0x00051ba8) list_double2_large_graphic_pane_vc_g1

0x789f,	// (0x00051bb4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x789f,	// (0x00051bb4) list_double2_large_graphic_pane_vc_g2

0x78ab,	// (0x00051bc0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x78ab,	// (0x00051bc0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa47,	// (0x00059d5c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x00059d5c) list_double2_large_graphic_pane_vc_g

0x78b7,	// (0x00051bcc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x78b7,	// (0x00051bcc) list_double2_large_graphic_pane_vc_t1

0x78cd,	// (0x00051be2) list_double_time_pane_vc_g1_ParamLimits

0x78cd,	// (0x00051be2) list_double_time_pane_vc_g1

0x78d9,	// (0x00051bee) list_double_time_pane_vc_g2_ParamLimits

0x78d9,	// (0x00051bee) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x00059d63) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x00059d63) list_double_time_pane_vc_g

0x78e5,	// (0x00051bfa) list_double_time_pane_vc_t1_ParamLimits

0x78e5,	// (0x00051bfa) list_double_time_pane_vc_t1

0x7903,	// (0x00051c18) list_double_time_pane_vc_t2_ParamLimits

0x7903,	// (0x00051c18) list_double_time_pane_vc_t2

0x794d,	// (0x00051c62) list_double_time_pane_vc_t3_ParamLimits

0x794d,	// (0x00051c62) list_double_time_pane_vc_t3

0x795f,	// (0x00051c74) list_double_time_pane_vc_t4_ParamLimits

0x795f,	// (0x00051c74) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x00059d68) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x00059d68) list_double_time_pane_vc_t

0x7510,	// (0x00051825) list_double_pane_vc_g1_ParamLimits

0x7510,	// (0x00051825) list_double_pane_vc_g1

0x751c,	// (0x00051831) list_double_pane_vc_g2_ParamLimits

0x751c,	// (0x00051831) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x000598e7) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x000598e7) list_double_pane_vc_g

0x7973,	// (0x00051c88) list_double_pane_vc_t1_ParamLimits

0x7973,	// (0x00051c88) list_double_pane_vc_t1

0x7985,	// (0x00051c9a) list_double_pane_vc_t2_ParamLimits

0x7985,	// (0x00051c9a) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x00059d71) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x00059d71) list_double_pane_vc_t

0x7510,	// (0x00051825) list_double_number_pane_vc_g1_ParamLimits

0x7510,	// (0x00051825) list_double_number_pane_vc_g1

0x751c,	// (0x00051831) list_double_number_pane_vc_g2_ParamLimits

0x751c,	// (0x00051831) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x000598e7) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x000598e7) list_double_number_pane_vc_g

0x799d,	// (0x00051cb2) list_double_number_pane_vc_t1_ParamLimits

0x799d,	// (0x00051cb2) list_double_number_pane_vc_t1

0x79af,	// (0x00051cc4) list_double_number_pane_vc_t2_ParamLimits

0x79af,	// (0x00051cc4) list_double_number_pane_vc_t2

0x79c1,	// (0x00051cd6) list_double_number_pane_vc_t3_ParamLimits

0x79c1,	// (0x00051cd6) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x00059d76) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x00059d76) list_double_number_pane_vc_t

0x79d9,	// (0x00051cee) list_double_large_graphic_pane_vc_g1_ParamLimits

0x79d9,	// (0x00051cee) list_double_large_graphic_pane_vc_g1

0x79f5,	// (0x00051d0a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x79f5,	// (0x00051d0a) list_double_large_graphic_pane_vc_g2

0x7a09,	// (0x00051d1e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7a09,	// (0x00051d1e) list_double_large_graphic_pane_vc_g3

0x7a18,	// (0x00051d2d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7a18,	// (0x00051d2d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x00059d7d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00059d7d) list_double_large_graphic_pane_vc_g

0x7a27,	// (0x00051d3c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7a27,	// (0x00051d3c) list_double_large_graphic_pane_vc_t1

0x7a41,	// (0x00051d56) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7a41,	// (0x00051d56) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00059d86) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00059d86) list_double_large_graphic_pane_vc_t

0x7510,	// (0x00051825) list_double_heading_pane_vc_g1_ParamLimits

0x7510,	// (0x00051825) list_double_heading_pane_vc_g1

0x751c,	// (0x00051831) list_double_heading_pane_vc_g2_ParamLimits

0x751c,	// (0x00051831) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x000598e7) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x000598e7) list_double_heading_pane_vc_g

0x7a63,	// (0x00051d78) list_double_heading_pane_vc_t1_ParamLimits

0x7a63,	// (0x00051d78) list_double_heading_pane_vc_t1

0x6121,	// (0x00050436) list_double_heading_pane_vc_t2_ParamLimits

0x6121,	// (0x00050436) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x00059d8b) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x00059d8b) list_double_heading_pane_vc_t

0x7a77,	// (0x00051d8c) list_double_graphic_pane_vc_g1_ParamLimits

0x7a77,	// (0x00051d8c) list_double_graphic_pane_vc_g1

0x7a83,	// (0x00051d98) list_double_graphic_pane_vc_g2_ParamLimits

0x7a83,	// (0x00051d98) list_double_graphic_pane_vc_g2

0x7510,	// (0x00051825) list_double_graphic_pane_vc_g3_ParamLimits

0x7510,	// (0x00051825) list_double_graphic_pane_vc_g3

0x0003,

0xfa7b,	// (0x00059d90) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x00059d90) list_double_graphic_pane_vc_g

0x7aa0,	// (0x00051db5) list_double_graphic_pane_vc_t1_ParamLimits

0x7aa0,	// (0x00051db5) list_double_graphic_pane_vc_t1

0x7abe,	// (0x00051dd3) list_double_graphic_pane_vc_t2_ParamLimits

0x7abe,	// (0x00051dd3) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x00059d99) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x00059d99) list_double_graphic_pane_vc_t

0x492e,	// (0x0004ec43) aid_size_cell_fastswap

0x4936,	// (0x0004ec4b) aid_size_cell_touch_ParamLimits

0x4936,	// (0x0004ec4b) aid_size_cell_touch

0x4b9b,	// (0x0004eeb0) popup_fast_swap_wide_window_ParamLimits

0x4b9b,	// (0x0004eeb0) popup_fast_swap_wide_window

0x4ca1,	// (0x0004efb6) touch_pane_ParamLimits

0x4ca1,	// (0x0004efb6) touch_pane

0x881e,	// (0x00052b33) button_value_adjust_pane_cp2

0x521f,	// (0x0004f534) button_value_adjust_pane_cp4

0x5241,	// (0x0004f556) form_field_data_pane_cp2

0x5260,	// (0x0004f575) form_field_data_wide_pane_cp2

0x8c8e,	// (0x00052fa3) bg_scroll_pane_ParamLimits

0x560b,	// (0x0004f920) scroll_handle_pane_ParamLimits

0x561f,	// (0x0004f934) scroll_sc2_down_pane_ParamLimits

0x561f,	// (0x0004f934) scroll_sc2_down_pane

0x8cbf,	// (0x00052fd4) scroll_sc2_up_pane_ParamLimits

0x8cbf,	// (0x00052fd4) scroll_sc2_up_pane

0xbe09,	// (0x0005611e) grid_wheel_folder_pane_g1_ParamLimits

0xbe09,	// (0x0005611e) grid_wheel_folder_pane_g1

0x584e,	// (0x0004fb63) clock_nsta_pane_cp2_ParamLimits

0x584e,	// (0x0004fb63) clock_nsta_pane_cp2

0x8a08,	// (0x00052d1d) listscroll_midp_pane_ParamLimits

0x94a6,	// (0x000537bb) midp_canvas_pane

0x978a,	// (0x00053a9f) nsta_clock_indic_pane

0x97be,	// (0x00053ad3) listscroll_form_pane_vc

0x97c6,	// (0x00053adb) listscroll_set_pane_vc_ParamLimits

0x97c6,	// (0x00053adb) listscroll_set_pane_vc

0x98c7,	// (0x00053bdc) clock_nsta_pane

0x993c,	// (0x00053c51) indicator_nsta_pane

0x9c14,	// (0x00053f29) bg_popup_sub_pane_cp2_ParamLimits

0x9c28,	// (0x00053f3d) find_pane_cp2_ParamLimits

0x9c28,	// (0x00053f3d) find_pane_cp2

0x9c3e,	// (0x00053f53) grid_toobar_pane_ParamLimits

0x9d1e,	// (0x00054033) list_form_gen_pane_vc_ParamLimits

0x9d1e,	// (0x00054033) list_form_gen_pane_vc

0x9d34,	// (0x00054049) scroll_pane_cp8_vc_ParamLimits

0x9d34,	// (0x00054049) scroll_pane_cp8_vc

0x9db0,	// (0x000540c5) data_form_wide_pane_vc_ParamLimits

0x9db0,	// (0x000540c5) data_form_wide_pane_vc

0x9dbc,	// (0x000540d1) form_field_data_wide_pane_vc_g1

0x9dc4,	// (0x000540d9) form_field_data_wide_pane_vc_t1_ParamLimits

0x9dc4,	// (0x000540d9) form_field_data_wide_pane_vc_t1

0x8832,	// (0x00052b47) input_focus_pane_cp6_vc_ParamLimits

0x8832,	// (0x00052b47) input_focus_pane_cp6_vc

0xa102,	// (0x00054417) list_midp_pane_ParamLimits

0xa10e,	// (0x00054423) scroll_pane_cp16_ParamLimits

0xa10e,	// (0x00054423) scroll_pane_cp16

0xa168,	// (0x0005447d) button_value_adjust_pane_ParamLimits

0xa168,	// (0x0005447d) button_value_adjust_pane

0xb0d7,	// (0x000553ec) button_value_adjust_pane_cp6_ParamLimits

0xb0d7,	// (0x000553ec) button_value_adjust_pane_cp6

0xb1f9,	// (0x0005550e) settings_code_pane_cp_ParamLimits

0xb1f9,	// (0x0005550e) settings_code_pane_cp

0x7ee2,	// (0x000521f7) cell_touch_pane_g1

0x7ee2,	// (0x000521f7) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00059a1d) cell_touch_pane_g

0xb762,	// (0x00055a77) cell_touch_pane_cp_ParamLimits

0xb762,	// (0x00055a77) cell_touch_pane_cp

0xb772,	// (0x00055a87) cell_touch_pane_ParamLimits

0xb772,	// (0x00055a87) cell_touch_pane

0x7ee2,	// (0x000521f7) scroll_sc2_down_pane_g1

0x7ee2,	// (0x000521f7) scroll_sc2_up_pane_g1

0x7eec,	// (0x00052201) bg_set_opt_pane_cp4_vc

0xb783,	// (0x00055a98) list_set_graphic_pane_vc_g1_ParamLimits

0xb783,	// (0x00055a98) list_set_graphic_pane_vc_g1

0xa12e,	// (0x00054443) list_set_graphic_pane_vc_g2_ParamLimits

0xa12e,	// (0x00054443) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x00059d0d) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x00059d0d) list_set_graphic_pane_vc_g

0xb78f,	// (0x00055aa4) text_primary_small_cp13_vc_ParamLimits

0xb78f,	// (0x00055aa4) text_primary_small_cp13_vc

0xb7a7,	// (0x00055abc) list_set_graphic_pane_vc_ParamLimits

0xb7a7,	// (0x00055abc) list_set_graphic_pane_vc

0x7eec,	// (0x00052201) input_focus_pane_cp2_vc

0x7ee2,	// (0x000521f7) setting_code_pane_vc_g1

0x8017,	// (0x0005232c) setting_code_pane_vc_t1

0xb7bb,	// (0x00055ad0) set_text_pane_vc_t1_ParamLimits

0xb7bb,	// (0x00055ad0) set_text_pane_vc_t1

0x7eec,	// (0x00052201) input_focus_pane_cp1_vc

0xb7d8,	// (0x00055aed) list_set_text_pane_vc

0x7ee2,	// (0x000521f7) setting_text_pane_vc_g1

0x7eec,	// (0x00052201) bg_set_opt_pane_cp2_vc

0x800e,	// (0x00052323) setting_slider_graphic_pane_vc_g1

0xb7e2,	// (0x00055af7) setting_slider_graphic_pane_vc_t1

0xb7f2,	// (0x00055b07) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x00059d12) setting_slider_graphic_pane_vc_t

0xb802,	// (0x00055b17) slider_set_pane_cp_vc

0xb80a,	// (0x00055b1f) slider_set_pane_vc_g1

0xb813,	// (0x00055b28) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x00059d17) slider_set_pane_vc_g

0x8881,	// (0x00052b96) set_opt_bg_pane_g1_copy1

0x8889,	// (0x00052b9e) set_opt_bg_pane_g2_copy1

0xb83f,	// (0x00055b54) set_opt_bg_pane_g3_copy1

0x8899,	// (0x00052bae) set_opt_bg_pane_g4_copy1

0x88a1,	// (0x00052bb6) set_opt_bg_pane_g5_copy1

0x88a9,	// (0x00052bbe) set_opt_bg_pane_g6_copy1

0xb847,	// (0x00055b5c) set_opt_bg_pane_g7_copy1

0xb851,	// (0x00055b66) set_opt_bg_pane_g8_copy1

0xb859,	// (0x00055b6e) set_opt_bg_pane_g9_copy1

0x7eec,	// (0x00052201) bg_set_opt_pane_cp_vc

0xb861,	// (0x00055b76) setting_slider_pane_vc_t1

0xb870,	// (0x00055b85) setting_slider_pane_vc_t2

0xb880,	// (0x00055b95) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x00059d26) setting_slider_pane_vc_t

0xb890,	// (0x00055ba5) slider_set_pane_vc

0x61f6,	// (0x0005050b) volume_set_pane_vc_g1

0x64e5,	// (0x000507fa) volume_set_pane_vc_g2

0x64ee,	// (0x00050803) volume_set_pane_vc_g3

0x64f7,	// (0x0005080c) volume_set_pane_vc_g4

0x6500,	// (0x00050815) volume_set_pane_vc_g5

0x6509,	// (0x0005081e) volume_set_pane_vc_g6

0x6223,	// (0x00050538) volume_set_pane_vc_g7

0x6512,	// (0x00050827) volume_set_pane_vc_g8

0x651b,	// (0x00050830) volume_set_pane_vc_g9

0x6524,	// (0x00050839) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x00059d2d) volume_set_pane_vc_g

0xb898,	// (0x00055bad) volume_set_pane_vc

0xb8a0,	// (0x00055bb5) button_value_adjust_pane_cp1_vc

0xb8aa,	// (0x00055bbf) list_highlight_pane_cp2_vc

0xb8b3,	// (0x00055bc8) list_set_pane_vc_ParamLimits

0xb8b3,	// (0x00055bc8) list_set_pane_vc

0xb911,	// (0x00055c26) main_pane_set_vc_t1_ParamLimits

0xb911,	// (0x00055c26) main_pane_set_vc_t1

0xb926,	// (0x00055c3b) main_pane_set_vc_t2_ParamLimits

0xb926,	// (0x00055c3b) main_pane_set_vc_t2

0xb938,	// (0x00055c4d) main_pane_set_vc_t3_ParamLimits

0xb938,	// (0x00055c4d) main_pane_set_vc_t3

0xb94a,	// (0x00055c5f) main_pane_set_vc_t4_ParamLimits

0xb94a,	// (0x00055c5f) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x00059d42) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x00059d42) main_pane_set_vc_t

0xb95c,	// (0x00055c71) setting_code_pane_vc_ParamLimits

0xb95c,	// (0x00055c71) setting_code_pane_vc

0xb96b,	// (0x00055c80) setting_slider_graphic_pane_vc

0xb96b,	// (0x00055c80) setting_slider_pane_vc

0xb96b,	// (0x00055c80) setting_text_pane_vc

0xb96b,	// (0x00055c80) setting_volume_pane_vc

0xb973,	// (0x00055c88) scroll_pane_cp121_vc

0x880c,	// (0x00052b21) set_content_pane_vc

0xb97b,	// (0x00055c90) button_value_adjust_pane_g1

0xb984,	// (0x00055c99) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x00059d9e) button_value_adjust_pane_g

0xb98d,	// (0x00055ca2) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb98d,	// (0x00055ca2) form_field_slider_wide_pane_vc_t1

0xb9a1,	// (0x00055cb6) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9a1,	// (0x00055cb6) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x00059da3) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x00059da3) form_field_slider_wide_pane_vc_t

0x8247,	// (0x0005255c) input_focus_pane_cp10_vc_ParamLimits

0x8247,	// (0x0005255c) input_focus_pane_cp10_vc

0xb9cd,	// (0x00055ce2) slider_cont_pane_cp1_vc_ParamLimits

0xb9cd,	// (0x00055ce2) slider_cont_pane_cp1_vc

0xb9dd,	// (0x00055cf2) slider_form_pane_g1_cp2

0xb813,	// (0x00055b28) slider_form_pane_g2_cp2

0xba0a,	// (0x00055d1f) form_field_slider_pane_vc_t3

0xba18,	// (0x00055d2d) form_field_slider_pane_vc_t4

0xba26,	// (0x00055d3b) slider_form_pane_vc_ParamLimits

0xba26,	// (0x00055d3b) slider_form_pane_vc

0xba33,	// (0x00055d48) form_field_slider_pane_vc_t1_ParamLimits

0xba33,	// (0x00055d48) form_field_slider_pane_vc_t1

0xb9a1,	// (0x00055cb6) form_field_slider_pane_vc_t2_ParamLimits

0xb9a1,	// (0x00055cb6) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x00059db5) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x00059db5) form_field_slider_pane_vc_t

0x8247,	// (0x0005255c) input_focus_pane_cp9_vc_ParamLimits

0x8247,	// (0x0005255c) input_focus_pane_cp9_vc

0xba4f,	// (0x00055d64) slider_cont_pane_vc_ParamLimits

0xba4f,	// (0x00055d64) slider_cont_pane_vc

0xba61,	// (0x00055d76) list_form_graphic_pane_cp_vc_ParamLimits

0xba61,	// (0x00055d76) list_form_graphic_pane_cp_vc

0x9dbc,	// (0x000540d1) form_field_popup_wide_pane_vc_g1

0xba76,	// (0x00055d8b) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba76,	// (0x00055d8b) form_field_popup_wide_pane_vc_t1

0x8832,	// (0x00052b47) input_focus_pane_cp8_vc_ParamLimits

0x8832,	// (0x00052b47) input_focus_pane_cp8_vc

0xbabb,	// (0x00055dd0) list_form_wide_pane_vc_ParamLimits

0xbabb,	// (0x00055dd0) list_form_wide_pane_vc

0xbac7,	// (0x00055ddc) list_form_graphic_pane_vc_g1

0xbacf,	// (0x00055de4) list_form_graphic_pane_vc_t1_ParamLimits

0xbacf,	// (0x00055de4) list_form_graphic_pane_vc_t1

0x7fcc,	// (0x000522e1) list_highlight_pane_cp5_vc_ParamLimits

0x7fcc,	// (0x000522e1) list_highlight_pane_cp5_vc

0xbaeb,	// (0x00055e00) list_form_graphic_pane_vc_ParamLimits

0xbaeb,	// (0x00055e00) list_form_graphic_pane_vc

0x9dbc,	// (0x000540d1) form_field_popup_pane_vc_g1

0xbb01,	// (0x00055e16) form_field_popup_pane_vc_t1_ParamLimits

0xbb01,	// (0x00055e16) form_field_popup_pane_vc_t1

0x8832,	// (0x00052b47) input_focus_pane_cp7_vc_ParamLimits

0x8832,	// (0x00052b47) input_focus_pane_cp7_vc

0xbb18,	// (0x00055e2d) list_form_pane_vc_ParamLimits

0xbb18,	// (0x00055e2d) list_form_pane_vc

0xbb24,	// (0x00055e39) data_form_pane_vc_t1_ParamLimits

0xbb24,	// (0x00055e39) data_form_pane_vc_t1

0x8881,	// (0x00052b96) input_focus_pane_vc_g1

0x8889,	// (0x00052b9e) input_focus_pane_vc_g2

0x8891,	// (0x00052ba6) input_focus_pane_vc_g3

0x8899,	// (0x00052bae) input_focus_pane_vc_g4

0x88a1,	// (0x00052bb6) input_focus_pane_vc_g5

0x88a9,	// (0x00052bbe) input_focus_pane_vc_g6

0x88b1,	// (0x00052bc6) input_focus_pane_vc_g7

0x88b9,	// (0x00052bce) input_focus_pane_vc_g8

0x88c1,	// (0x00052bd6) input_focus_pane_vc_g9

0x7ee2,	// (0x000521f7) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x000599a6) input_focus_pane_vc_g

0x9db0,	// (0x000540c5) data_form_pane_vc_ParamLimits

0x9db0,	// (0x000540c5) data_form_pane_vc

0x9dbc,	// (0x000540d1) form_field_data_pane_vc_g1

0xbb3f,	// (0x00055e54) form_field_data_pane_vc_t1_ParamLimits

0xbb3f,	// (0x00055e54) form_field_data_pane_vc_t1

0x8832,	// (0x00052b47) input_focus_pane_vc_ParamLimits

0x8832,	// (0x00052b47) input_focus_pane_vc

0xbb59,	// (0x00055e6e) button_value_adjust_pane_cp3_vc

0xbb61,	// (0x00055e76) button_value_adjust_pane_cp5_vc

0xbb69,	// (0x00055e7e) form_field_data_pane_vc_ParamLimits

0xbb69,	// (0x00055e7e) form_field_data_pane_vc

0xbb80,	// (0x00055e95) form_field_data_pane_vc_cp2

0xbb88,	// (0x00055e9d) form_field_data_wide_pane_vc_ParamLimits

0xbb88,	// (0x00055e9d) form_field_data_wide_pane_vc

0xbb9e,	// (0x00055eb3) form_field_data_wide_pane_vc_cp2

0xbba6,	// (0x00055ebb) form_field_popup_pane_vc_ParamLimits

0xbba6,	// (0x00055ebb) form_field_popup_pane_vc

0xbbbd,	// (0x00055ed2) form_field_popup_wide_pane_vc_ParamLimits

0xbbbd,	// (0x00055ed2) form_field_popup_wide_pane_vc

0xbbd3,	// (0x00055ee8) form_field_slider_pane_vc_ParamLimits

0xbbd3,	// (0x00055ee8) form_field_slider_pane_vc

0xbbe6,	// (0x00055efb) form_field_slider_wide_pane_vc_ParamLimits

0xbbe6,	// (0x00055efb) form_field_slider_wide_pane_vc

0xbbf9,	// (0x00055f0e) grid_touch_1_pane_ParamLimits

0xbbf9,	// (0x00055f0e) grid_touch_1_pane

0xbc05,	// (0x00055f1a) grid_touch_2_pane_ParamLimits

0xbc05,	// (0x00055f1a) grid_touch_2_pane

0x9755,	// (0x00053a6a) touch_pane_g1_ParamLimits

0x9755,	// (0x00053a6a) touch_pane_g1

0xbc1d,	// (0x00055f32) cell_app_pane_cp_wide_ParamLimits

0xbc1d,	// (0x00055f32) cell_app_pane_cp_wide

0xbc2e,	// (0x00055f43) grid_popup_fast_wide_pane_ParamLimits

0xbc2e,	// (0x00055f43) grid_popup_fast_wide_pane

0xbc42,	// (0x00055f57) scroll_pane_cp19_ParamLimits

0xbc42,	// (0x00055f57) scroll_pane_cp19

0x7eec,	// (0x00052201) bg_popup_window_pane_cp20

0xbc56,	// (0x00055f6b) listscroll_popup_fast_wide_pane

0x7fcc,	// (0x000522e1) grid_indicator_nsta_pane

0xbc5e,	// (0x00055f73) clock_nsta_pane_g1

0xbc67,	// (0x00055f7c) clock_nsta_pane_t1

0xbc83,	// (0x00055f98) cell_indicator_nsta_pane_ParamLimits

0xbc83,	// (0x00055f98) cell_indicator_nsta_pane

0xbcb4,	// (0x00055fc9) cell_indicator_nsta_pane_g1

0xbcc2,	// (0x00055fd7) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x00059dc6) cell_indicator_nsta_pane_g

0xbccf,	// (0x00055fe4) clock_nsta_pane_cp

0xbcd7,	// (0x00055fec) indicator_nsta_pane_cp

0xbcdf,	// (0x00055ff4) nsta_clock_indic_pane_g1

0x8095,	// (0x000523aa) grid_indicator_pane

0x8db4,	// (0x000530c9) scroll_pane_cp29

0x579d,	// (0x0004fab2) indicator_nsta_pane_cp2_ParamLimits

0x579d,	// (0x0004fab2) indicator_nsta_pane_cp2

0x7fcc,	// (0x000522e1) main_apps_wheel_pane

0x9fe7,	// (0x000542fc) form_midp_field_text_pane_ParamLimits

0xa13a,	// (0x0005444f) scroll_bar_cp050_ParamLimits

0xbd40,	// (0x00056055) cell_indicator_pane_ParamLimits

0xbd40,	// (0x00056055) cell_indicator_pane

0xbd5b,	// (0x00056070) cell_indicator_pane_g1

0xbd65,	// (0x0005607a) grid_wheel_folder_pane_ParamLimits

0xbd65,	// (0x0005607a) grid_wheel_folder_pane

0xbd7b,	// (0x00056090) list_wheel_apps_pane_ParamLimits

0xbd7b,	// (0x00056090) list_wheel_apps_pane

0xbd8c,	// (0x000560a1) main_apps_wheel_pane_g1_ParamLimits

0xbd8c,	// (0x000560a1) main_apps_wheel_pane_g1

0xbda0,	// (0x000560b5) main_apps_wheel_pane_g2_ParamLimits

0xbda0,	// (0x000560b5) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x00059de2) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x00059de2) main_apps_wheel_pane_g

0xbdb8,	// (0x000560cd) main_apps_wheel_pane_t1_ParamLimits

0xbdb8,	// (0x000560cd) main_apps_wheel_pane_t1

0xbddb,	// (0x000560f0) list_wheel_apps_pane_g1

0xbde3,	// (0x000560f8) list_wheel_apps_pane_g2

0xbdeb,	// (0x00056100) list_wheel_apps_pane_g3

0xbdf5,	// (0x0005610a) list_wheel_apps_pane_g4

0xbdff,	// (0x00056114) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x00059de7) list_wheel_apps_pane_g

0x931e,	// (0x00053633) navi_icon_text_pane

0x97fa,	// (0x00053b0f) aid_fill_nsta

0xbe22,	// (0x00056137) navi_icon_text_pane_g1

0xbe2e,	// (0x00056143) navi_icon_text_pane_t1

0x91b5,	// (0x000534ca) list_set_graphic_pane_t1_ParamLimits

0x91b5,	// (0x000534ca) list_set_graphic_pane_t1

0xa88c,	// (0x00054ba1) popup_midp_note_alarm_window_t6_ParamLimits

0xa88c,	// (0x00054ba1) popup_midp_note_alarm_window_t6

0xa89e,	// (0x00054bb3) popup_midp_note_alarm_window_t7_ParamLimits

0xa89e,	// (0x00054bb3) popup_midp_note_alarm_window_t7

0xa8b0,	// (0x00054bc5) popup_midp_note_alarm_window_t8_ParamLimits

0xa8b0,	// (0x00054bc5) popup_midp_note_alarm_window_t8

0xa8c2,	// (0x00054bd7) popup_midp_note_alarm_window_t9_ParamLimits

0xa8c2,	// (0x00054bd7) popup_midp_note_alarm_window_t9

0xa8d4,	// (0x00054be9) popup_midp_note_alarm_window_t10_ParamLimits

0xa8d4,	// (0x00054be9) popup_midp_note_alarm_window_t10

0xa8e6,	// (0x00054bfb) popup_midp_note_alarm_window_t11_ParamLimits

0xa8e6,	// (0x00054bfb) popup_midp_note_alarm_window_t11

0xa8f8,	// (0x00054c0d) scroll_pane_cp17_ParamLimits

0xa8f8,	// (0x00054c0d) scroll_pane_cp17

0x61f6,	// (0x0005050b) volume_small_pane_cp_g1

0x652d,	// (0x00050842) volume_small_pane_cp_g2

0x6536,	// (0x0005084b) volume_small_pane_cp_g3

0x6208,	// (0x0005051d) volume_small_pane_cp_g4

0x653f,	// (0x00050854) volume_small_pane_cp_g5

0x6500,	// (0x00050815) volume_small_pane_cp_g6

0x621a,	// (0x0005052f) volume_small_pane_cp_g7

0x6548,	// (0x0005085d) volume_small_pane_cp_g8

0x6551,	// (0x00050866) volume_small_pane_cp_g9

0x622c,	// (0x00050541) volume_small_pane_cp_g10

0x9573,	// (0x00053888) midp_ticker_pane_g1_ParamLimits

0x957f,	// (0x00053894) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00059a72) midp_ticker_pane_g_ParamLimits

0x958b,	// (0x000538a0) midp_ticker_pane_t1_ParamLimits

0x9810,	// (0x00053b25) aid_fill_nsta_2

0xa11a,	// (0x0005442f) list_form2_midp_pane

0xb244,	// (0x00055559) midp_editing_number_pane_ParamLimits

0xb253,	// (0x00055568) midp_ticker_pane_ParamLimits

0xbe40,	// (0x00056155) form2_midp_field_pane

0xbe64,	// (0x00056179) scroll_pane_cp51

0xbe84,	// (0x00056199) form2_midp_button_pane_ParamLimits

0xbe84,	// (0x00056199) form2_midp_button_pane

0xbe96,	// (0x000561ab) form2_midp_content_pane_ParamLimits

0xbe96,	// (0x000561ab) form2_midp_content_pane

0xbeb0,	// (0x000561c5) form2_midp_field_choice_group_pane

0xbeb8,	// (0x000561cd) form2_midp_field_pane_g1

0xbec0,	// (0x000561d5) form2_midp_field_pane_g2

0xbec8,	// (0x000561dd) form2_midp_field_pane_g3

0xbed0,	// (0x000561e5) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x00059e0c) form2_midp_field_pane_g

0xbed8,	// (0x000561ed) form2_midp_gauge_slider_pane

0xbee0,	// (0x000561f5) form2_midp_gauge_wait_pane

0xbee8,	// (0x000561fd) form2_midp_image_pane_ParamLimits

0xbee8,	// (0x000561fd) form2_midp_image_pane

0xbf03,	// (0x00056218) form2_midp_label_pane_ParamLimits

0xbf03,	// (0x00056218) form2_midp_label_pane

0xbf1c,	// (0x00056231) form2_midp_label_pane_cp_ParamLimits

0xbf1c,	// (0x00056231) form2_midp_label_pane_cp

0xbf3d,	// (0x00056252) form2_midp_string_pane_ParamLimits

0xbf3d,	// (0x00056252) form2_midp_string_pane

0x7ae8,	// (0x00051dfd) form2_midp_text_pane_ParamLimits

0x7ae8,	// (0x00051dfd) form2_midp_text_pane

0xbf4f,	// (0x00056264) form2_midp_time_pane

0xbf5f,	// (0x00056274) input_focus_pane_cp51_ParamLimits

0xbf5f,	// (0x00056274) input_focus_pane_cp51

0xbf77,	// (0x0005628c) form2_midp_label_pane_t1_ParamLimits

0xbf77,	// (0x0005628c) form2_midp_label_pane_t1

0x7b03,	// (0x00051e18) form2_mdip_text_pane_t1_ParamLimits

0x7b03,	// (0x00051e18) form2_mdip_text_pane_t1

0x7b1f,	// (0x00051e34) form2_midp_time_pane_t1

0xbfbf,	// (0x000562d4) form2_midp_gauge_slider_pane_t1

0xbfd1,	// (0x000562e6) form2_midp_gauge_slider_pane_t2

0xbfe3,	// (0x000562f8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x00059e15) form2_midp_gauge_slider_pane_t

0xbff5,	// (0x0005630a) form2_midp_slider_pane

0xc001,	// (0x00056316) form2_midp_gauge_wait_pane_t1

0xc00f,	// (0x00056324) form2_midp_wait_pane_ParamLimits

0xc00f,	// (0x00056324) form2_midp_wait_pane

0xc03b,	// (0x00056350) list_single_2graphic_pane_cp4_ParamLimits

0xc03b,	// (0x00056350) list_single_2graphic_pane_cp4

0x9e2b,	// (0x00054140) list_single_midp_graphic_pane_cp_ParamLimits

0x9e2b,	// (0x00054140) list_single_midp_graphic_pane_cp

0x7eec,	// (0x00052201) list_highlight_pane_cp20

0xc069,	// (0x0005637e) list_single_2graphic_pane_g1_cp4

0xb667,	// (0x0005597c) list_single_2graphic_pane_g2_cp4

0xc071,	// (0x00056386) list_single_2graphic_pane_t1_cp4

0x7fcc,	// (0x000522e1) list_highlight_pane_cp21

0xc080,	// (0x00056395) list_single_midp_graphic_pane_g4_cp

0xc08f,	// (0x000563a4) list_single_midp_graphic_pane_t1_cp

0xc0a4,	// (0x000563b9) form2_mdip_string_pane_t1_ParamLimits

0xc0a4,	// (0x000563b9) form2_mdip_string_pane_t1

0x7eec,	// (0x00052201) bg_wml_button_pane_cp2

0x7ee2,	// (0x000521f7) form2_midp_image_pane_g1

0x757e,	// (0x00051893) list_double_large_graphic_pane_g5_ParamLimits

0x757e,	// (0x00051893) list_double_large_graphic_pane_g5

0x8a08,	// (0x00052d1d) midp_form_pane_ParamLimits

0x7fcc,	// (0x000522e1) main_apps_wheel_pane_ParamLimits

0x5e72,	// (0x00050187) popup_preview_window_ParamLimits

0x5e72,	// (0x00050187) popup_preview_window

0x6029,	// (0x0005033e) popup_touch_info_window_ParamLimits

0x6029,	// (0x0005033e) popup_touch_info_window

0x6047,	// (0x0005035c) popup_touch_menu_window_ParamLimits

0x6047,	// (0x0005035c) popup_touch_menu_window

0x7ed8,	// (0x000521ed) bg_popup_sub_pane_cp6

0xc1c7,	// (0x000564dc) list_touch_menu_pane

0xc1cf,	// (0x000564e4) list_single_touch_menu_pane_ParamLimits

0xc1cf,	// (0x000564e4) list_single_touch_menu_pane

0xc1e3,	// (0x000564f8) list_single_touch_menu_pane_t1

0x7fcc,	// (0x000522e1) bg_popup_sub_pane_cp7_ParamLimits

0x7fcc,	// (0x000522e1) bg_popup_sub_pane_cp7

0xc1f1,	// (0x00056506) heading_sub_pane

0xc1f9,	// (0x0005650e) list_touch_info_pane_ParamLimits

0xc1f9,	// (0x0005650e) list_touch_info_pane

0xc208,	// (0x0005651d) list_single_touch_info_pane_ParamLimits

0xc208,	// (0x0005651d) list_single_touch_info_pane

0xc21a,	// (0x0005652f) list_single_touch_info_pane_t1

0xc228,	// (0x0005653d) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x00059e23) list_single_touch_info_pane_t

0x949e,	// (0x000537b3) bg_popup_heading_pane_cp

0xc236,	// (0x0005654b) heading_sub_pane_t1

0x9d4a,	// (0x0005405f) bg_popup_preview_window_pane_cp_ParamLimits

0x9d4a,	// (0x0005405f) bg_popup_preview_window_pane_cp

0xc1f1,	// (0x00056506) heading_preview_pane

0xc1f9,	// (0x0005650e) list_preview_pane_ParamLimits

0xc1f9,	// (0x0005650e) list_preview_pane

0xc244,	// (0x00056559) popup_preview_window_g1

0xc208,	// (0x0005651d) list_single_preview_pane_ParamLimits

0xc208,	// (0x0005651d) list_single_preview_pane

0xc24c,	// (0x00056561) list_single_preview_pane_g1

0xc254,	// (0x00056569) list_single_preview_pane_t1

0xc21a,	// (0x0005652f) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x00059e28) list_single_preview_pane_t

0xc262,	// (0x00056577) bg_popup_heading_pane_cp2_ParamLimits

0xc262,	// (0x00056577) bg_popup_heading_pane_cp2

0xc278,	// (0x0005658d) heading_preview_pane_g1

0xc280,	// (0x00056595) heading_preview_pane_t1_ParamLimits

0xc280,	// (0x00056595) heading_preview_pane_t1

0x80b8,	// (0x000523cd) soft_indicator_pane_t1_ParamLimits

0x8799,	// (0x00052aae) scroll_pane_ParamLimits

0x8cad,	// (0x00052fc2) scroll_sc2_left_pane

0x8cb6,	// (0x00052fcb) scroll_sc2_right_pane

0x8cd5,	// (0x00052fea) scroll_bg_pane_g1_ParamLimits

0x8cea,	// (0x00052fff) scroll_bg_pane_g2_ParamLimits

0x8d02,	// (0x00053017) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x000599fd) scroll_bg_pane_g_ParamLimits

0x8cd5,	// (0x00052fea) scroll_handle_pane_g1_ParamLimits

0x8d24,	// (0x00053039) scroll_handle_pane_g2_ParamLimits

0x8d02,	// (0x00053017) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00059a04) scroll_handle_pane_g_ParamLimits

0x5af9,	// (0x0004fe0e) popup_choice_list_window_ParamLimits

0x5af9,	// (0x0004fe0e) popup_choice_list_window

0x9c20,	// (0x00053f35) choice_list_pane

0x9ca2,	// (0x00053fb7) cell_toolbar_pane_t1

0x9cca,	// (0x00053fdf) toolbar_button_pane_ParamLimits

0xadb2,	// (0x000550c7) ai_gene_pane_1_t2_ParamLimits

0xadb2,	// (0x000550c7) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x00059c27) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x00059c27) ai_gene_pane_1_t

0xc29d,	// (0x000565b2) scroll_sc2_left_pane_g1

0xc29d,	// (0x000565b2) scroll_sc2_right_pane_g1

0x97d8,	// (0x00053aed) bg_popup_sub_pane_cp10

0xc2a7,	// (0x000565bc) list_choice_list_pane

0xc2c0,	// (0x000565d5) list_single_choice_list_pane_ParamLimits

0xc2c0,	// (0x000565d5) list_single_choice_list_pane

0xc2d3,	// (0x000565e8) list_single_choice_list_pane_g1

0x89b8,	// (0x00052ccd) list_single_choice_list_pane_t1_ParamLimits

0x89b8,	// (0x00052ccd) list_single_choice_list_pane_t1

0xc2db,	// (0x000565f0) choice_list_pane_g1

0xc2e3,	// (0x000565f8) choice_list_pane_t1

0x7ed8,	// (0x000521ed) input_focus_pane_cp11

0x8b8c,	// (0x00052ea1) title_pane_stacon_g2_ParamLimits

0x8b8c,	// (0x00052ea1) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x000599e3) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x000599e3) title_pane_stacon_g

0x949e,	// (0x000537b3) cursor_press_pane

0x5ba1,	// (0x0004feb6) popup_fep_hwr_window_ParamLimits

0x5ba1,	// (0x0004feb6) popup_fep_hwr_window

0x5c19,	// (0x0004ff2e) popup_fep_vkb_window_ParamLimits

0x5c19,	// (0x0004ff2e) popup_fep_vkb_window

0xc2f1,	// (0x00056606) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x00059e51) fep_vkb_side_pane_g_ParamLimits

0x6593,	// (0x000508a8) fep_hwr_candidate_pane_ParamLimits

0x6593,	// (0x000508a8) fep_hwr_candidate_pane

0x65bd,	// (0x000508d2) fep_hwr_side_pane_ParamLimits

0x65bd,	// (0x000508d2) fep_hwr_side_pane

0x65dd,	// (0x000508f2) fep_hwr_top_pane_ParamLimits

0x65dd,	// (0x000508f2) fep_hwr_top_pane

0x65f5,	// (0x0005090a) fep_hwr_write_pane_ParamLimits

0x65f5,	// (0x0005090a) fep_hwr_write_pane

0xfb3c,	// (0x00059e51) fep_vkb_side_pane_g

0xc2f9,	// (0x0005660e) fep_hwr_top_pane_g1

0xc30b,	// (0x00056620) fep_hwr_top_pane_g2

0x662f,	// (0x00050944) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x00059e2d) fep_hwr_top_pane_g

0x6644,	// (0x00050959) fep_hwr_top_text_pane

0x8e7a,	// (0x0005318f) fep_hwr_top_text_pane_g1

0xc341,	// (0x00056656) fep_hwr_top_text_pane_t1

0x673a,	// (0x00050a4f) fep_hwr_candidate_pane_g1

0xc584,	// (0x00056899) fep_vkb_keypad_pane_g3_ParamLimits

0xc584,	// (0x00056899) fep_vkb_keypad_pane_g3

0xc5ac,	// (0x000568c1) fep_vkb_keypad_pane_g4_ParamLimits

0xc5ac,	// (0x000568c1) fep_vkb_keypad_pane_g4

0xc61b,	// (0x00056930) fep_vkb_bottom_pane_g2_ParamLimits

0xc61b,	// (0x00056930) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x00059e58) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x00059e58) fep_vkb_bottom_pane_g

0xc29d,	// (0x000565b2) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x00059e62) cell_vkb_side_pane_g

0xc6a6,	// (0x000569bb) cell_vkb_side_pane_t1

0xc6b4,	// (0x000569c9) cell_vkb_side_pane_t1_copy1

0xc29d,	// (0x000565b2) bg_fep_vkb_candidate_pane_g2

0xc7e0,	// (0x00056af5) cell_vkb_candidate_pane_ParamLimits

0xc34f,	// (0x00056664) aid_size_cell_vkb_ParamLimits

0xc34f,	// (0x00056664) aid_size_cell_vkb

0xc7e0,	// (0x00056af5) cell_vkb_candidate_pane

0x6761,	// (0x00050a76) bg_popup_fep_shadow_pane_g1

0xc3db,	// (0x000566f0) fep_vkb_bottom_pane_ParamLimits

0xc3db,	// (0x000566f0) fep_vkb_bottom_pane

0xc411,	// (0x00056726) fep_vkb_candidate_pane_ParamLimits

0xc411,	// (0x00056726) fep_vkb_candidate_pane

0xc42d,	// (0x00056742) fep_vkb_keypad_pane_ParamLimits

0xc42d,	// (0x00056742) fep_vkb_keypad_pane

0xc46c,	// (0x00056781) fep_vkb_side_pane_ParamLimits

0xc46c,	// (0x00056781) fep_vkb_side_pane

0xc4a8,	// (0x000567bd) fep_vkb_top_pane_ParamLimits

0xc4a8,	// (0x000567bd) fep_vkb_top_pane

0xc4dd,	// (0x000567f2) fep_vkb_top_pane_g1_ParamLimits

0xc4dd,	// (0x000567f2) fep_vkb_top_pane_g1

0xc4ec,	// (0x00056801) fep_vkb_top_pane_g2_ParamLimits

0xc4ec,	// (0x00056801) fep_vkb_top_pane_g2

0xc4fb,	// (0x00056810) fep_vkb_top_pane_g3_ParamLimits

0xc4fb,	// (0x00056810) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x00059e48) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x00059e48) fep_vkb_top_pane_g

0xc519,	// (0x0005682e) fep_vkb_top_text_pane_ParamLimits

0xc519,	// (0x0005682e) fep_vkb_top_text_pane

0xc52a,	// (0x0005683f) fep_vkb_side_pane_g1_ParamLimits

0xc52a,	// (0x0005683f) fep_vkb_side_pane_g1

0xc573,	// (0x00056888) grid_vkb_side_pane_ParamLimits

0xc573,	// (0x00056888) grid_vkb_side_pane

0x6769,	// (0x00050a7e) bg_popup_fep_shadow_pane_g2

0x6772,	// (0x00050a87) bg_popup_fep_shadow_pane_g3

0x677a,	// (0x00050a8f) bg_popup_fep_shadow_pane_g4

0x6783,	// (0x00050a98) bg_popup_fep_shadow_pane_g5

0x678d,	// (0x00050aa2) bg_popup_fep_shadow_pane_g6

0x6795,	// (0x00050aaa) bg_popup_fep_shadow_pane_g7

0x8899,	// (0x00052bae) bg_popup_fep_shadow_pane_g8

0xc5ca,	// (0x000568df) grid_vkb_keypad_number_pane_ParamLimits

0xc5ca,	// (0x000568df) grid_vkb_keypad_number_pane

0xc5da,	// (0x000568ef) grid_vkb_keypad_pane_ParamLimits

0xc5da,	// (0x000568ef) grid_vkb_keypad_pane

0xc600,	// (0x00056915) fep_vkb_bottom_pane_g1_ParamLimits

0xc600,	// (0x00056915) fep_vkb_bottom_pane_g1

0xc629,	// (0x0005693e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc629,	// (0x0005693e) grid_vkb_keypad_bottom_left_pane

0xc63e,	// (0x00056953) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc63e,	// (0x00056953) grid_vkb_keypad_bottom_right_pane

0xc653,	// (0x00056968) fep_vkb_top_text_pane_g1

0xc66e,	// (0x00056983) fep_vkb_top_text_pane_t1

0xc683,	// (0x00056998) cell_vkb_side_pane_ParamLimits

0xc683,	// (0x00056998) cell_vkb_side_pane

0xc29d,	// (0x000565b2) cell_vkb_side_pane_g1

0xc6c2,	// (0x000569d7) cell_vkb_keypad_pane_ParamLimits

0xc6c2,	// (0x000569d7) cell_vkb_keypad_pane

0xc737,	// (0x00056a4c) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x00059e75) bg_popup_fep_shadow_pane_g

0x67a7,	// (0x00050abc) cell_hwr_side_pane_g1

0x67a7,	// (0x00050abc) cell_hwr_side_pane_g2

0xc741,	// (0x00056a56) cell_vkb_keypad_pane_t1

0xc74f,	// (0x00056a64) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc74f,	// (0x00056a64) cell_vkb_keypad_bottom_left_pane

0xc76c,	// (0x00056a81) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc76c,	// (0x00056a81) cell_vkb_keypad_bottom_right_pane

0xc29d,	// (0x000565b2) cell_vkb_keypad_bottom_left_pane_g1

0xc29d,	// (0x000565b2) cell_vkb_keypad_bottom_right_pane_g1

0xc7a5,	// (0x00056aba) cell_vkb_keypad_number_pane_ParamLimits

0xc7a5,	// (0x00056aba) cell_vkb_keypad_number_pane

0xc7c4,	// (0x00056ad9) cell_vkb_keypad_number_pane_g1

0xc7ce,	// (0x00056ae3) cell_vkb_keypad_number_pane_g2

0xc7d7,	// (0x00056aec) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x00059e67) cell_vkb_keypad_number_pane_g

0xc741,	// (0x00056a56) cell_vkb_keypad_number_pane_t1

0xc7fb,	// (0x00056b10) fep_vkb_candidate_pane_g1

0x0001,

0xfb73,	// (0x00059e88) cell_hwr_side_pane_g

0xc814,	// (0x00056b29) cell_hwr_side_pane_t1

0x67b1,	// (0x00050ac6) cell_hwr_side_pane_t1_copy1

0x67bf,	// (0x00050ad4) cell_hwr_candidate_pane_g1

0x67ee,	// (0x00050b03) cell_hwr_candidate_pane_t1

0xc29d,	// (0x000565b2) cell_vkb_candidate_pane_g2

0xc858,	// (0x00056b6d) cell_vkb_candidate_pane_t1

0x655a,	// (0x0005086f) bg_popup_fep_shadow_pane_ParamLimits

0x655a,	// (0x0005086f) bg_popup_fep_shadow_pane

0x660f,	// (0x00050924) bg_fep_hwr_top_pane_g4

0xc31d,	// (0x00056632) bg_hwr_side_pane_g1_ParamLimits

0xc31d,	// (0x00056632) bg_hwr_side_pane_g1

0x6680,	// (0x00050995) cell_hwr_side_pane_ParamLimits

0x6680,	// (0x00050995) cell_hwr_side_pane

0x66bb,	// (0x000509d0) fep_hwr_write_pane_g1_ParamLimits

0x66bb,	// (0x000509d0) fep_hwr_write_pane_g1

0x66c8,	// (0x000509dd) fep_hwr_write_pane_g2_ParamLimits

0x66c8,	// (0x000509dd) fep_hwr_write_pane_g2

0x66d5,	// (0x000509ea) fep_hwr_write_pane_g3_ParamLimits

0x66d5,	// (0x000509ea) fep_hwr_write_pane_g3

0x66e3,	// (0x000509f8) fep_hwr_write_pane_g4_ParamLimits

0x66e3,	// (0x000509f8) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x00059e34) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x00059e34) fep_hwr_write_pane_g

0x660f,	// (0x00050924) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x660f,	// (0x00050924) bg_fep_hwr_candidate_pane_g2

0x66f8,	// (0x00050a0d) cell_hwr_candidate_pane_ParamLimits

0x66f8,	// (0x00050a0d) cell_hwr_candidate_pane

0x673a,	// (0x00050a4f) fep_hwr_candidate_pane_g1_ParamLimits

0xc37d,	// (0x00056692) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc37d,	// (0x00056692) bg_popup_fep_shadow_pane_cp2

0xc50b,	// (0x00056820) fep_vkb_top_pane_g4_ParamLimits

0xc50b,	// (0x00056820) fep_vkb_top_pane_g4

0xc551,	// (0x00056866) fep_vkb_side_pane_g2_ParamLimits

0xc551,	// (0x00056866) fep_vkb_side_pane_g2

0x514c,	// (0x0004f461) list_setting_pane_t4_ParamLimits

0x514c,	// (0x0004f461) list_setting_pane_t4

0x51e6,	// (0x0004f4fb) list_setting_number_pane_t5_ParamLimits

0x51e6,	// (0x0004f4fb) list_setting_number_pane_t5

0x8ec1,	// (0x000531d6) list_double_heading_pane_cp2_ParamLimits

0x8ec1,	// (0x000531d6) list_double_heading_pane_cp2

0x87cd,	// (0x00052ae2) list_double_heading_pane_g1_cp2_ParamLimits

0x87cd,	// (0x00052ae2) list_double_heading_pane_g1_cp2

0x8840,	// (0x00052b55) list_double_heading_pane_g2_cp2_ParamLimits

0x8840,	// (0x00052b55) list_double_heading_pane_g2_cp2

0xc866,	// (0x00056b7b) list_double_heading_pane_t1_cp2_ParamLimits

0xc866,	// (0x00056b7b) list_double_heading_pane_t1_cp2

0xc87c,	// (0x00056b91) list_double_heading_pane_t2_cp2_ParamLimits

0xc87c,	// (0x00056b91) list_double_heading_pane_t2_cp2

0x7ec0,	// (0x000521d5) aid_value_unit2

0x4be7,	// (0x0004eefc) popup_preview_fixed_window

0x8255,	// (0x0005256a) bg_popup_preview_window_pane_cp02

0xc88e,	// (0x00056ba3) list_preview_fixed_pane

0xc8d4,	// (0x00056be9) list_empty_pane_fp_ParamLimits

0xc8d4,	// (0x00056be9) list_empty_pane_fp

0xc8d4,	// (0x00056be9) list_single_cale_day_pane_fp_ParamLimits

0xc8d4,	// (0x00056be9) list_single_cale_day_pane_fp

0xc8d4,	// (0x00056be9) list_single_graphic_heading_pane_fp_ParamLimits

0xc8d4,	// (0x00056be9) list_single_graphic_heading_pane_fp

0xc8d4,	// (0x00056be9) list_single_graphic_pane_fp_ParamLimits

0xc8d4,	// (0x00056be9) list_single_graphic_pane_fp

0xc8d4,	// (0x00056be9) list_single_heading_pane_fp_ParamLimits

0xc8d4,	// (0x00056be9) list_single_heading_pane_fp

0xc8d4,	// (0x00056be9) list_single_pane_fp_ParamLimits

0xc8d4,	// (0x00056be9) list_single_pane_fp

0xc8ea,	// (0x00056bff) list_single_pane_fp_g1_ParamLimits

0xc8ea,	// (0x00056bff) list_single_pane_fp_g1

0x87cd,	// (0x00052ae2) list_single_pane_fp_g2_ParamLimits

0x87cd,	// (0x00052ae2) list_single_pane_fp_g2

0x8840,	// (0x00052b55) list_single_pane_fp_g3_ParamLimits

0x8840,	// (0x00052b55) list_single_pane_fp_g3

0xc8f6,	// (0x00056c0b) list_single_pane_fp_g4_ParamLimits

0xc8f6,	// (0x00056c0b) list_single_pane_fp_g4

0x0003,

0xfb86,	// (0x00059e9b) list_single_pane_fp_g_ParamLimits

0xfb86,	// (0x00059e9b) list_single_pane_fp_g

0x7b32,	// (0x00051e47) list_single_pane_fp_t1_ParamLimits

0x7b32,	// (0x00051e47) list_single_pane_fp_t1

0x7b49,	// (0x00051e5e) list_single_graphic_pane_fp_g1_ParamLimits

0x7b49,	// (0x00051e5e) list_single_graphic_pane_fp_g1

0xc8ea,	// (0x00056bff) list_single_graphic_pane_fp_g2_ParamLimits

0xc8ea,	// (0x00056bff) list_single_graphic_pane_fp_g2

0x87cd,	// (0x00052ae2) list_single_graphic_pane_fp_g3_ParamLimits

0x87cd,	// (0x00052ae2) list_single_graphic_pane_fp_g3

0x8840,	// (0x00052b55) list_single_graphic_pane_fp_g4_ParamLimits

0x8840,	// (0x00052b55) list_single_graphic_pane_fp_g4

0xc8f6,	// (0x00056c0b) list_single_graphic_pane_fp_g5_ParamLimits

0xc8f6,	// (0x00056c0b) list_single_graphic_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059ea4) list_single_graphic_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059ea4) list_single_graphic_pane_fp_g

0x7b55,	// (0x00051e6a) list_single_graphic_pane_fp_t1_ParamLimits

0x7b55,	// (0x00051e6a) list_single_graphic_pane_fp_t1

0x7b49,	// (0x00051e5e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7b49,	// (0x00051e5e) list_single_graphic_heading_pane_fp_g1

0xc8ea,	// (0x00056bff) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8ea,	// (0x00056bff) list_single_graphic_heading_pane_fp_g2

0x87cd,	// (0x00052ae2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x87cd,	// (0x00052ae2) list_single_graphic_heading_pane_fp_g3

0x8840,	// (0x00052b55) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8840,	// (0x00052b55) list_single_graphic_heading_pane_fp_g4

0xc8f6,	// (0x00056c0b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc8f6,	// (0x00056c0b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059ea4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059ea4) list_single_graphic_heading_pane_fp_g

0x7b6b,	// (0x00051e80) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7b6b,	// (0x00051e80) list_single_graphic_heading_pane_fp_t1

0x7b81,	// (0x00051e96) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7b81,	// (0x00051e96) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9a,	// (0x00059eaf) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9a,	// (0x00059eaf) list_single_graphic_heading_pane_fp_t

0x7b93,	// (0x00051ea8) list_single_cale_day_pane_fp_g1_ParamLimits

0x7b93,	// (0x00051ea8) list_single_cale_day_pane_fp_g1

0xc902,	// (0x00056c17) list_single_cale_day_pane_fp_g2_ParamLimits

0xc902,	// (0x00056c17) list_single_cale_day_pane_fp_g2

0x7bcb,	// (0x00051ee0) list_single_cale_day_pane_fp_g3_ParamLimits

0x7bcb,	// (0x00051ee0) list_single_cale_day_pane_fp_g3

0x7bf3,	// (0x00051f08) list_single_cale_day_pane_fp_g4_ParamLimits

0x7bf3,	// (0x00051f08) list_single_cale_day_pane_fp_g4

0x7c17,	// (0x00051f2c) list_single_cale_day_pane_fp_g5_ParamLimits

0x7c17,	// (0x00051f2c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9f,	// (0x00059eb4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9f,	// (0x00059eb4) list_single_cale_day_pane_fp_g

0x7c3b,	// (0x00051f50) list_single_cale_day_pane_fp_t1_ParamLimits

0x7c3b,	// (0x00051f50) list_single_cale_day_pane_fp_t1

0x7c61,	// (0x00051f76) list_single_cale_day_pane_fp_t2_ParamLimits

0x7c61,	// (0x00051f76) list_single_cale_day_pane_fp_t2

0x7c7a,	// (0x00051f8f) list_single_cale_day_pane_fp_t3_ParamLimits

0x7c7a,	// (0x00051f8f) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaa,	// (0x00059ebf) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaa,	// (0x00059ebf) list_single_cale_day_pane_fp_t

0xc8ea,	// (0x00056bff) list_empty_pane_fp_g1_ParamLimits

0xc8ea,	// (0x00056bff) list_empty_pane_fp_g1

0x7c93,	// (0x00051fa8) list_empty_pane_fp_t1

0x7ca1,	// (0x00051fb6) list_empty_pane_fp_t2

0x0001,

0xfbb1,	// (0x00059ec6) list_empty_pane_fp_t

0xc8ea,	// (0x00056bff) list_single_heading_pane_fp_g1_ParamLimits

0xc8ea,	// (0x00056bff) list_single_heading_pane_fp_g1

0x87cd,	// (0x00052ae2) list_single_heading_pane_fp_g2_ParamLimits

0x87cd,	// (0x00052ae2) list_single_heading_pane_fp_g2

0x8840,	// (0x00052b55) list_single_heading_pane_fp_g3_ParamLimits

0x8840,	// (0x00052b55) list_single_heading_pane_fp_g3

0x0002,

0xfbb6,	// (0x00059ecb) list_single_heading_pane_fp_g_ParamLimits

0xfbb6,	// (0x00059ecb) list_single_heading_pane_fp_g

0x7caf,	// (0x00051fc4) list_single_heading_pane_fp_t1_ParamLimits

0x7caf,	// (0x00051fc4) list_single_heading_pane_fp_t1

0x7cc1,	// (0x00051fd6) list_single_heading_pane_fp_t2_ParamLimits

0x7cc1,	// (0x00051fd6) list_single_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x00059ed2) list_single_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x00059ed2) list_single_heading_pane_fp_t

0x8a26,	// (0x00052d3b) aid_size_cell_fast

0x81c5,	// (0x000524da) soft_indicator_pane_cp1_t1

0x8a60,	// (0x00052d75) cell_app_pane_cp2_ParamLimits

0x8a60,	// (0x00052d75) cell_app_pane_cp2

0x657c,	// (0x00050891) fep_hwr_candidate_drop_down_list_pane

0x6754,	// (0x00050a69) fep_hwr_candidate_pane_g3_ParamLimits

0x6754,	// (0x00050a69) fep_hwr_candidate_pane_g3

0x3999,	// (0x0004dcae) fep_hwr_candidate_pane_g4_ParamLimits

0x3999,	// (0x0004dcae) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00059e41) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x00059e41) fep_hwr_candidate_pane_g

0xc400,	// (0x00056715) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc400,	// (0x00056715) fep_vkb_candidate_drop_down_list_pane

0xc803,	// (0x00056b18) fep_vkb_candidate_pane_g3

0xc80b,	// (0x00056b20) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x00059e6e) fep_vkb_candidate_pane_g

0x67bf,	// (0x00050ad4) cell_hwr_candidate_pane_g1_ParamLimits

0x67cd,	// (0x00050ae2) cell_hwr_candidate_pane_g3_ParamLimits

0x67cd,	// (0x00050ae2) cell_hwr_candidate_pane_g3

0xdd86,	// (0x0005809b) cell_hwr_candidate_pane_g4_ParamLimits

0xdd86,	// (0x0005809b) cell_hwr_candidate_pane_g4

0x0002,

0xfb78,	// (0x00059e8d) cell_hwr_candidate_pane_g_ParamLimits

0xfb78,	// (0x00059e8d) cell_hwr_candidate_pane_g

0xc822,	// (0x00056b37) cell_vkb_candidate_pane_g3_ParamLimits

0xc822,	// (0x00056b37) cell_vkb_candidate_pane_g3

0xc83d,	// (0x00056b52) cell_vkb_candidate_pane_g4_ParamLimits

0xc83d,	// (0x00056b52) cell_vkb_candidate_pane_g4

0xc90e,	// (0x00056c23) cell_app_pane_cp2_g1_ParamLimits

0xc90e,	// (0x00056c23) cell_app_pane_cp2_g1

0xc92c,	// (0x00056c41) cell_app_pane_cp2_g2_ParamLimits

0xc92c,	// (0x00056c41) cell_app_pane_cp2_g2

0x0001,

0xfbc2,	// (0x00059ed7) cell_app_pane_cp2_g_ParamLimits

0xfbc2,	// (0x00059ed7) cell_app_pane_cp2_g

0xc938,	// (0x00056c4d) cell_app_pane_cp2_t1_ParamLimits

0xc938,	// (0x00056c4d) cell_app_pane_cp2_t1

0x8832,	// (0x00052b47) grid_highlight_pane_cp1_ParamLimits

0x8832,	// (0x00052b47) grid_highlight_pane_cp1

0x680c,	// (0x00050b21) cell_hwr_candidate_pane_cp1_ParamLimits

0x680c,	// (0x00050b21) cell_hwr_candidate_pane_cp1

0x67bf,	// (0x00050ad4) fep_hwr_candidate_drop_down_list_pane_g1

0x682b,	// (0x00050b40) fep_hwr_candidate_drop_down_list_pane_g2

0x6838,	// (0x00050b4d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x00059edc) fep_hwr_candidate_drop_down_list_pane_g

0x6845,	// (0x00050b5a) fep_hwr_candidate_drop_down_list_scroll_pane

0x684e,	// (0x00050b63) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x684e,	// (0x00050b63) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x685b,	// (0x00050b70) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x685b,	// (0x00050b70) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6868,	// (0x00050b7d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6868,	// (0x00050b7d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6875,	// (0x00050b8a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6875,	// (0x00050b8a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6890,	// (0x00050ba5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6890,	// (0x00050ba5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x68ab,	// (0x00050bc0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x68ab,	// (0x00050bc0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x68c6,	// (0x00050bdb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x68c6,	// (0x00050bdb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x68e1,	// (0x00050bf6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x68e1,	// (0x00050bf6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x00059ee3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x00059ee3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc94a,	// (0x00056c5f) cell_vkb_candidate_pane_cp1_ParamLimits

0xc94a,	// (0x00056c5f) cell_vkb_candidate_pane_cp1

0xc50b,	// (0x00056820) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc50b,	// (0x00056820) fep_vkb_candidate_drop_down_list_pane_g1

0xc96a,	// (0x00056c7f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc96a,	// (0x00056c7f) fep_vkb_candidate_drop_down_list_pane_g2

0xc977,	// (0x00056c8c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc977,	// (0x00056c8c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdf,	// (0x00059ef4) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdf,	// (0x00059ef4) fep_vkb_candidate_drop_down_list_pane_g

0xc984,	// (0x00056c99) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc984,	// (0x00056c99) fep_vkb_candidate_drop_down_list_scroll_pane

0xc991,	// (0x00056ca6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc991,	// (0x00056ca6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc99e,	// (0x00056cb3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc99e,	// (0x00056cb3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9aa,	// (0x00056cbf) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9aa,	// (0x00056cbf) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9b6,	// (0x00056ccb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9b6,	// (0x00056ccb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9d7,	// (0x00056cec) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9d7,	// (0x00056cec) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9f8,	// (0x00056d0d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9f8,	// (0x00056d0d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca19,	// (0x00056d2e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca19,	// (0x00056d2e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca3a,	// (0x00056d4f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca3a,	// (0x00056d4f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe6,	// (0x00059efb) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe6,	// (0x00059efb) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7ef6,	// (0x0005220b) title_pane_g1_ParamLimits

0x7f03,	// (0x00052218) title_pane_g2_ParamLimits

0xf54e,	// (0x00059863) title_pane_g_ParamLimits

0x8e6a,	// (0x0005317f) aid_call2_pane

0x8e72,	// (0x00053187) aid_call_pane

0x8e7a,	// (0x0005318f) popup_clock_analogue_window_g1

0x8e7a,	// (0x0005318f) popup_clock_analogue_window_g2

0x5634,	// (0x0004f949) popup_clock_analogue_window_g3

0x563d,	// (0x0004f952) popup_clock_analogue_window_g4

0x7ee2,	// (0x000521f7) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00059a12) popup_clock_analogue_window_g

0x5645,	// (0x0004f95a) popup_clock_analogue_window_t1

0x5653,	// (0x0004f968) clock_digital_number_pane_ParamLimits

0x5653,	// (0x0004f968) clock_digital_number_pane

0x565f,	// (0x0004f974) clock_digital_number_pane_cp02_ParamLimits

0x565f,	// (0x0004f974) clock_digital_number_pane_cp02

0x566b,	// (0x0004f980) clock_digital_number_pane_cp03_ParamLimits

0x566b,	// (0x0004f980) clock_digital_number_pane_cp03

0x5677,	// (0x0004f98c) clock_digital_number_pane_cp04_ParamLimits

0x5677,	// (0x0004f98c) clock_digital_number_pane_cp04

0x5683,	// (0x0004f998) clock_digital_separator_pane_ParamLimits

0x5683,	// (0x0004f998) clock_digital_separator_pane

0x568f,	// (0x0004f9a4) popup_clock_digital_window_t1_ParamLimits

0x568f,	// (0x0004f9a4) popup_clock_digital_window_t1

0x7ee2,	// (0x000521f7) clock_digital_number_pane_g1

0x7ee2,	// (0x000521f7) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00059a1d) clock_digital_number_pane_g

0x7ee2,	// (0x000521f7) clock_digital_separator_pane_g1

0x7ee2,	// (0x000521f7) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00059a1d) clock_digital_separator_pane_g

0x97fa,	// (0x00053b0f) aid_fill_nsta_ParamLimits

0x993c,	// (0x00053c51) indicator_nsta_pane_ParamLimits

0x9ab5,	// (0x00053dca) popup_clock_analogue_window

0x9ab5,	// (0x00053dca) popup_clock_digital_window

0x7fcc,	// (0x000522e1) grid_indicator_nsta_pane_ParamLimits

0xbc75,	// (0x00055f8a) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x00059dc1) clock_nsta_pane_t

0x55f8,	// (0x0004f90d) aid_size_max_handle

0x5602,	// (0x0004f917) aid_size_min_handle

0x949e,	// (0x000537b3) editor_scroll_pane

0xca55,	// (0x00056d6a) ex_editor_pane

0x8994,	// (0x00052ca9) scroll_pane_cp13

0x87c5,	// (0x00052ada) scroll_pane_cp14

0x8ea9,	// (0x000531be) scroll_pane_cp36

0x8ed5,	// (0x000531ea) list_single_graphic_hl_pane_cp2_ParamLimits

0x8ed5,	// (0x000531ea) list_single_graphic_hl_pane_cp2

0x77a7,	// (0x00051abc) list_single_graphic_hl_pane_ParamLimits

0x77a7,	// (0x00051abc) list_single_graphic_hl_pane

0x7cd7,	// (0x00051fec) aid_size_min_hl_cp1

0xca5d,	// (0x00056d72) list_highlight_pane_cp34_ParamLimits

0xca5d,	// (0x00056d72) list_highlight_pane_cp34

0xca6e,	// (0x00056d83) list_single_graphic_hl_pane_g1_ParamLimits

0xca6e,	// (0x00056d83) list_single_graphic_hl_pane_g1

0x7ce0,	// (0x00051ff5) list_single_graphic_hl_pane_g2_ParamLimits

0x7ce0,	// (0x00051ff5) list_single_graphic_hl_pane_g2

0x7ce0,	// (0x00051ff5) list_single_graphic_hl_pane_g3_ParamLimits

0x7ce0,	// (0x00051ff5) list_single_graphic_hl_pane_g3

0x7510,	// (0x00051825) list_single_graphic_hl_pane_g4_ParamLimits

0x7510,	// (0x00051825) list_single_graphic_hl_pane_g4

0x7cec,	// (0x00052001) list_single_graphic_hl_pane_g5_ParamLimits

0x7cec,	// (0x00052001) list_single_graphic_hl_pane_g5

0x0004,

0xfbf7,	// (0x00059f0c) list_single_graphic_hl_pane_g_ParamLimits

0xfbf7,	// (0x00059f0c) list_single_graphic_hl_pane_g

0x7d00,	// (0x00052015) list_single_graphic_hl_pane_t1_ParamLimits

0x7d00,	// (0x00052015) list_single_graphic_hl_pane_t1

0xca7b,	// (0x00056d90) aid_size_min_hl_cp2

0xca84,	// (0x00056d99) list_highlight_pane_cp34_cp2_ParamLimits

0xca84,	// (0x00056d99) list_highlight_pane_cp34_cp2

0xca6e,	// (0x00056d83) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca6e,	// (0x00056d83) list_single_graphic_hl_pane_g1_cp2

0xca91,	// (0x00056da6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca91,	// (0x00056da6) list_single_graphic_hl_pane_g2_cp2

0xca9d,	// (0x00056db2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca9d,	// (0x00056db2) list_single_graphic_hl_pane_g3_cp2

0x93d7,	// (0x000536ec) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x93d7,	// (0x000536ec) list_single_graphic_hl_pane_g4_cp2

0xcaab,	// (0x00056dc0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcaab,	// (0x00056dc0) list_single_graphic_hl_pane_g5_cp2

0x59ad,	// (0x0004fcc2) control_pane_g4_ParamLimits

0x59ad,	// (0x0004fcc2) control_pane_g4

0x97d8,	// (0x00053aed) bg_popup_sub_pane_cp10_ParamLimits

0xc2a7,	// (0x000565bc) list_choice_list_pane_ParamLimits

0xc2b6,	// (0x000565cb) scroll_pane_cp23

0x8255,	// (0x0005256a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc88e,	// (0x00056ba3) list_preview_fixed_pane_ParamLimits

0xc8a4,	// (0x00056bb9) list_preview_fixed_pane_cp_ParamLimits

0xc8a4,	// (0x00056bb9) list_preview_fixed_pane_cp

0xc8b0,	// (0x00056bc5) popup_preview_fixed_window_g1_ParamLimits

0xc8b0,	// (0x00056bc5) popup_preview_fixed_window_g1

0xc8bc,	// (0x00056bd1) popup_preview_fixed_window_g2_ParamLimits

0xc8bc,	// (0x00056bd1) popup_preview_fixed_window_g2

0x0002,

0xfb7f,	// (0x00059e94) popup_preview_fixed_window_g_ParamLimits

0xfb7f,	// (0x00059e94) popup_preview_fixed_window_g

0x556c,	// (0x0004f881) aid_navi_side_left_pane_ParamLimits

0x5581,	// (0x0004f896) aid_navi_side_right_pane_ParamLimits

0x5599,	// (0x0004f8ae) navi_icon_pane_stacon_ParamLimits

0x55ad,	// (0x0004f8c2) navi_navi_pane_stacon_ParamLimits

0x5599,	// (0x0004f8ae) navi_text_pane_stacon_ParamLimits

0x4ab6,	// (0x0004edcb) main_text_info_pane

0xcad5,	// (0x00056dea) listscroll_text_info_pane

0xcadd,	// (0x00056df2) list_text_info_pane_ParamLimits

0xcadd,	// (0x00056df2) list_text_info_pane

0xcaec,	// (0x00056e01) scroll_pane_cp24_ParamLimits

0xcaec,	// (0x00056e01) scroll_pane_cp24

0xcb0a,	// (0x00056e1f) list_text_info_pane_t1_ParamLimits

0xcb0a,	// (0x00056e1f) list_text_info_pane_t1

0x5b15,	// (0x0004fe2a) popup_fast_swap2_window_ParamLimits

0x5b15,	// (0x0004fe2a) popup_fast_swap2_window

0xcb3f,	// (0x00056e54) aid_size_cell_fast2

0x7ed8,	// (0x000521ed) bg_popup_window_pane_cp17

0xa152,	// (0x00054467) heading_pane_cp2

0x8498,	// (0x000527ad) listscroll_fast2_pane

0xcb49,	// (0x00056e5e) grid_fast2_pane

0xcb53,	// (0x00056e68) listscroll_fast2_pane_g1

0xcb5b,	// (0x00056e70) listscroll_fast2_pane_g2

0x0001,

0xfc02,	// (0x00059f17) listscroll_fast2_pane_g

0x8994,	// (0x00052ca9) scroll_pane_cp26

0xcb65,	// (0x00056e7a) cell_fast2_pane_ParamLimits

0xcb65,	// (0x00056e7a) cell_fast2_pane

0xcb7a,	// (0x00056e8f) cell_fast2_pane_g1

0xcb83,	// (0x00056e98) cell_fast2_pane_g2

0xcb8c,	// (0x00056ea1) cell_fast2_pane_g3

0x0002,

0xfc07,	// (0x00059f1c) cell_fast2_pane_g

0x8582,	// (0x00052897) grid_highlight_pane_cp9

0x5ad5,	// (0x0004fdea) main_eswt_pane_ParamLimits

0x5ad5,	// (0x0004fdea) main_eswt_pane

0xcb01,	// (0x00056e16) list_single_text_info_pane

0xcb94,	// (0x00056ea9) eswt_ctrl_button_pane

0xcb94,	// (0x00056ea9) eswt_ctrl_canvas_pane

0xcb9c,	// (0x00056eb1) eswt_ctrl_combo_pane

0xcb94,	// (0x00056ea9) eswt_ctrl_default_pane

0xcb94,	// (0x00056ea9) eswt_ctrl_label_pane

0xcba4,	// (0x00056eb9) eswt_ctrl_wait_pane

0xcbac,	// (0x00056ec1) eswt_shell_pane

0x7ed8,	// (0x000521ed) listscroll_eswt_app_pane

0xcbcc,	// (0x00056ee1) popup_eswt_tasktip_window_ParamLimits

0xcbcc,	// (0x00056ee1) popup_eswt_tasktip_window

0x9d4a,	// (0x0005405f) bg_popup_window_pane_cp18

0xcbdd,	// (0x00056ef2) eswt_control_pane_g1_ParamLimits

0xcbdd,	// (0x00056ef2) eswt_control_pane_g1

0xcbea,	// (0x00056eff) eswt_control_pane_g2_ParamLimits

0xcbea,	// (0x00056eff) eswt_control_pane_g2

0xcbf7,	// (0x00056f0c) eswt_control_pane_g3_ParamLimits

0xcbf7,	// (0x00056f0c) eswt_control_pane_g3

0xcc04,	// (0x00056f19) eswt_control_pane_g4_ParamLimits

0xcc04,	// (0x00056f19) eswt_control_pane_g4

0x0003,

0xfc0e,	// (0x00059f23) eswt_control_pane_g_ParamLimits

0xfc0e,	// (0x00059f23) eswt_control_pane_g

0x8832,	// (0x00052b47) bg_button_pane_ParamLimits

0x8832,	// (0x00052b47) bg_button_pane

0x8597,	// (0x000528ac) common_borders_pane_copy2_ParamLimits

0x8597,	// (0x000528ac) common_borders_pane_copy2

0xcc11,	// (0x00056f26) control_button_pane_g1_ParamLimits

0xcc11,	// (0x00056f26) control_button_pane_g1

0xcc1d,	// (0x00056f32) control_button_pane_g2_ParamLimits

0xcc1d,	// (0x00056f32) control_button_pane_g2

0xcc29,	// (0x00056f3e) control_button_pane_g3_ParamLimits

0xcc29,	// (0x00056f3e) control_button_pane_g3

0x0002,

0xfc17,	// (0x00059f2c) control_button_pane_g_ParamLimits

0xfc17,	// (0x00059f2c) control_button_pane_g

0xcc3d,	// (0x00056f52) control_button_pane_t1

0xcc4b,	// (0x00056f60) control_button_pane_t2

0x0001,

0xfc1e,	// (0x00059f33) control_button_pane_t

0x9cd6,	// (0x00053feb) bg_button_pane_g1

0x9ce6,	// (0x00053ffb) bg_button_pane_g2

0x9cde,	// (0x00053ff3) bg_button_pane_g3

0x9cf6,	// (0x0005400b) bg_button_pane_g4

0x9cee,	// (0x00054003) bg_button_pane_g5

0x9cfe,	// (0x00054013) bg_button_pane_g6

0x9d06,	// (0x0005401b) bg_button_pane_g7

0x9d16,	// (0x0005402b) bg_button_pane_g8

0x9d0e,	// (0x00054023) bg_button_pane_g9

0x0008,

0xf866,	// (0x00059b7b) bg_button_pane_g

0xc262,	// (0x00056577) common_borders_pane_ParamLimits

0xc262,	// (0x00056577) common_borders_pane

0xcbdd,	// (0x00056ef2) eswt_control_pane_g1_copy1_ParamLimits

0xcbdd,	// (0x00056ef2) eswt_control_pane_g1_copy1

0xcbea,	// (0x00056eff) eswt_control_pane_g2_copy1_ParamLimits

0xcbea,	// (0x00056eff) eswt_control_pane_g2_copy1

0xcbf7,	// (0x00056f0c) eswt_control_pane_g3_copy1_ParamLimits

0xcbf7,	// (0x00056f0c) eswt_control_pane_g3_copy1

0xcc04,	// (0x00056f19) eswt_control_pane_g4_copy1_ParamLimits

0xcc04,	// (0x00056f19) eswt_control_pane_g4_copy1

0xc29d,	// (0x000565b2) bg_eswt_ctrl_canvas_pane_g1

0xc262,	// (0x00056577) common_borders_pane_cp2_ParamLimits

0xc262,	// (0x00056577) common_borders_pane_cp2

0xc262,	// (0x00056577) common_borders_pane_cp3_ParamLimits

0xc262,	// (0x00056577) common_borders_pane_cp3

0xcc59,	// (0x00056f6e) separator_horizontal_pane

0xcc61,	// (0x00056f76) separator_vertical_pane

0xcbdd,	// (0x00056ef2) eswt_control_pane_g1_copy2_ParamLimits

0xcbdd,	// (0x00056ef2) eswt_control_pane_g1_copy2

0xcbea,	// (0x00056eff) eswt_control_pane_g2_copy2_ParamLimits

0xcbea,	// (0x00056eff) eswt_control_pane_g2_copy2

0xcbf7,	// (0x00056f0c) eswt_control_pane_g3_copy2_ParamLimits

0xcbf7,	// (0x00056f0c) eswt_control_pane_g3_copy2

0xcc04,	// (0x00056f19) eswt_control_pane_g4_copy2_ParamLimits

0xcc04,	// (0x00056f19) eswt_control_pane_g4_copy2

0x7ed8,	// (0x000521ed) common_borders_pane_cp4

0xcc6a,	// (0x00056f7f) separator_horizontal_pane_g1

0xcc73,	// (0x00056f88) separator_horizontal_pane_g2

0xcc7c,	// (0x00056f91) separator_horizontal_pane_g3

0x0002,

0xfc23,	// (0x00059f38) separator_horizontal_pane_g

0xcbdd,	// (0x00056ef2) eswt_control_pane_g1_copy3_ParamLimits

0xcbdd,	// (0x00056ef2) eswt_control_pane_g1_copy3

0xcbea,	// (0x00056eff) eswt_control_pane_g2_copy3_ParamLimits

0xcbea,	// (0x00056eff) eswt_control_pane_g2_copy3

0xcbf7,	// (0x00056f0c) eswt_control_pane_g3_copy3_ParamLimits

0xcbf7,	// (0x00056f0c) eswt_control_pane_g3_copy3

0xcc04,	// (0x00056f19) eswt_control_pane_g4_copy3_ParamLimits

0xcc04,	// (0x00056f19) eswt_control_pane_g4_copy3

0x7ed8,	// (0x000521ed) common_borders_pane_cp5

0xcc85,	// (0x00056f9a) separator_vertical_pane_g1

0xcc8e,	// (0x00056fa3) separator_vertical_pane_g2

0xcc97,	// (0x00056fac) separator_vertical_pane_g3

0x0002,

0xfc2a,	// (0x00059f3f) separator_vertical_pane_g

0xcbdd,	// (0x00056ef2) eswt_control_pane_g1_copy4_ParamLimits

0xcbdd,	// (0x00056ef2) eswt_control_pane_g1_copy4

0xcbea,	// (0x00056eff) eswt_control_pane_g2_copy4_ParamLimits

0xcbea,	// (0x00056eff) eswt_control_pane_g2_copy4

0xcbf7,	// (0x00056f0c) eswt_control_pane_g3_copy4_ParamLimits

0xcbf7,	// (0x00056f0c) eswt_control_pane_g3_copy4

0xcc04,	// (0x00056f19) eswt_control_pane_g4_copy4_ParamLimits

0xcc04,	// (0x00056f19) eswt_control_pane_g4_copy4

0xcca0,	// (0x00056fb5) eswt_ctrl_combo_button_pane

0xcca8,	// (0x00056fbd) eswt_ctrl_input_pane

0xccb0,	// (0x00056fc5) popup_choice_list_window_cp70

0xccb8,	// (0x00056fcd) eswt_ctrl_input_pane_t1

0x7ed8,	// (0x000521ed) input_focus_pane_cp70

0xc262,	// (0x00056577) bg_button_pane_cp70_ParamLimits

0xc262,	// (0x00056577) bg_button_pane_cp70

0xccc6,	// (0x00056fdb) eswt_ctrl_combo_button_pane_g1

0xccce,	// (0x00056fe3) wait_bar_pane_cp70

0x9d4a,	// (0x0005405f) bg_popup_window_pane_cp70_ParamLimits

0x9d4a,	// (0x0005405f) bg_popup_window_pane_cp70

0xccd6,	// (0x00056feb) popup_eswt_tasktip_window_t1

0xccec,	// (0x00057001) wait_bar_pane_cp71_ParamLimits

0xccec,	// (0x00057001) wait_bar_pane_cp71

0xccf8,	// (0x0005700d) grid_eswt_app_pane

0x8cad,	// (0x00052fc2) scroll_pane_cp70

0xcd01,	// (0x00057016) cell_eswt_app_pane_ParamLimits

0xcd01,	// (0x00057016) cell_eswt_app_pane

0xcd35,	// (0x0005704a) cell_eswt_app_pane_g1_ParamLimits

0xcd35,	// (0x0005704a) cell_eswt_app_pane_g1

0xcd64,	// (0x00057079) cell_eswt_app_pane_g2_ParamLimits

0xcd64,	// (0x00057079) cell_eswt_app_pane_g2

0x0001,

0xfc31,	// (0x00059f46) cell_eswt_app_pane_g_ParamLimits

0xfc31,	// (0x00059f46) cell_eswt_app_pane_g

0xcd88,	// (0x0005709d) cell_eswt_app_pane_t1_ParamLimits

0xcd88,	// (0x0005709d) cell_eswt_app_pane_t1

0xcdba,	// (0x000570cf) grid_highlight_pane_cp70_ParamLimits

0xcdba,	// (0x000570cf) grid_highlight_pane_cp70

0x9373,	// (0x00053688) set_content_pane_g1

0x9739,	// (0x00053a4e) status_small_volume_pane

0x68fc,	// (0x00050c11) status_small_volume_pane_g1

0x6904,	// (0x00050c19) volume_small2_pane

0x690d,	// (0x00050c22) volume_small2_pane_g1

0x6916,	// (0x00050c2b) volume_small2_pane_g2

0x691f,	// (0x00050c34) volume_small2_pane_g3

0x6928,	// (0x00050c3d) volume_small2_pane_g4

0x6931,	// (0x00050c46) volume_small2_pane_g5

0x693a,	// (0x00050c4f) volume_small2_pane_g6

0x6943,	// (0x00050c58) volume_small2_pane_g7

0x694c,	// (0x00050c61) volume_small2_pane_g8

0x6955,	// (0x00050c6a) volume_small2_pane_g9

0x695e,	// (0x00050c73) volume_small2_pane_g10

0x0009,

0xfc36,	// (0x00059f4b) volume_small2_pane_g

0xc653,	// (0x00056968) fep_vkb_top_text_pane_g1_ParamLimits

0xc66e,	// (0x00056983) fep_vkb_top_text_pane_t1_ParamLimits

0xc8c8,	// (0x00056bdd) popup_preview_fixed_window_g3_ParamLimits

0xc8c8,	// (0x00056bdd) popup_preview_fixed_window_g3

0x5fbc,	// (0x000502d1) popup_toolbar_trans_pane

0xb0b4,	// (0x000553c9) aid_height_set_list_ParamLimits

0xb0c5,	// (0x000553da) aid_size_parent_ParamLimits

0x97d8,	// (0x00053aed) list_highlight_pane_cp2_ParamLimits

0x9373,	// (0x00053688) set_content_pane_g1_ParamLimits

0x77c6,	// (0x00051adb) list_single_image_pane_ParamLimits

0x77c6,	// (0x00051adb) list_single_image_pane

0xcdc6,	// (0x000570db) aid_size_cell_image_ParamLimits

0xcdc6,	// (0x000570db) aid_size_cell_image

0xcdd3,	// (0x000570e8) grid_single_image_pane_ParamLimits

0xcdd3,	// (0x000570e8) grid_single_image_pane

0xcddf,	// (0x000570f4) list_single_image_pane_g1_ParamLimits

0xcddf,	// (0x000570f4) list_single_image_pane_g1

0xcdeb,	// (0x00057100) list_single_image_pane_g2_ParamLimits

0xcdeb,	// (0x00057100) list_single_image_pane_g2

0x0001,

0xfc4b,	// (0x00059f60) list_single_image_pane_g_ParamLimits

0xfc4b,	// (0x00059f60) list_single_image_pane_g

0xcdff,	// (0x00057114) list_single_image_pane_t1_ParamLimits

0xcdff,	// (0x00057114) list_single_image_pane_t1

0xce15,	// (0x0005712a) cell_image_list_pane_ParamLimits

0xce15,	// (0x0005712a) cell_image_list_pane

0xce29,	// (0x0005713e) cell_image_list_pane_g1

0xce32,	// (0x00057147) cell_image_list_pane_g2

0x0001,

0xfc50,	// (0x00059f65) cell_image_list_pane_g

0xce3b,	// (0x00057150) aid_size_cell_tb_trans_pane

0x8832,	// (0x00052b47) bg_tb_trans_pane

0xce4d,	// (0x00057162) grid_tb_trans_pane

0x9cd6,	// (0x00053feb) bg_tb_trans_pane_g1

0x9ce6,	// (0x00053ffb) bg_tb_trans_pane_g2

0x9cde,	// (0x00053ff3) bg_tb_trans_pane_g3

0x9cf6,	// (0x0005400b) bg_tb_trans_pane_g4

0x9cee,	// (0x00054003) bg_tb_trans_pane_g5

0x9d16,	// (0x0005402b) bg_tb_trans_pane_g6

0x9d0e,	// (0x00054023) bg_tb_trans_pane_g7

0x9cfe,	// (0x00054013) bg_tb_trans_pane_g8

0x9d06,	// (0x0005401b) bg_tb_trans_pane_g9

0x0008,

0xfc55,	// (0x00059f6a) bg_tb_trans_pane_g

0xce61,	// (0x00057176) cell_toolbar_trans_pane_ParamLimits

0xce61,	// (0x00057176) cell_toolbar_trans_pane

0xc29d,	// (0x000565b2) cell_toolbar_trans_pane_g1

0xbe48,	// (0x0005615d) list_form2_midp_pane_t1

0xbe56,	// (0x0005616b) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x00059e07) list_form2_midp_pane_t

0xbe64,	// (0x00056179) scroll_pane_cp51_ParamLimits

0xc020,	// (0x00056335) form2_midp_wait_pane_g1

0xc029,	// (0x0005633e) form2_midp_wait_pane_g2

0xc032,	// (0x00056347) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x00059e1c) form2_midp_wait_pane_g

0x7fcc,	// (0x000522e1) list_highlight_pane_cp21_ParamLimits

0xc080,	// (0x00056395) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc08f,	// (0x000563a4) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x773f,	// (0x00051a54) list_single_2graphic_im_pane_ParamLimits

0x773f,	// (0x00051a54) list_single_2graphic_im_pane

0xce87,	// (0x0005719c) list_single_2graphic_im_pane_g1_ParamLimits

0xce87,	// (0x0005719c) list_single_2graphic_im_pane_g1

0xce98,	// (0x000571ad) list_single_2graphic_im_pane_g2_ParamLimits

0xce98,	// (0x000571ad) list_single_2graphic_im_pane_g2

0xcea4,	// (0x000571b9) list_single_2graphic_im_pane_g3_ParamLimits

0xcea4,	// (0x000571b9) list_single_2graphic_im_pane_g3

0x0003,

0xfc68,	// (0x00059f7d) list_single_2graphic_im_pane_g_ParamLimits

0xfc68,	// (0x00059f7d) list_single_2graphic_im_pane_g

0xcec4,	// (0x000571d9) list_single_2graphic_im_pane_t1_ParamLimits

0xcec4,	// (0x000571d9) list_single_2graphic_im_pane_t1

0xc8d4,	// (0x00056be9) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8d4,	// (0x00056be9) list_single_graphic_2heading_pane_fp

0x7b49,	// (0x00051e5e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7b49,	// (0x00051e5e) list_single_graphic_2heading_pane_fp_g1

0xc8ea,	// (0x00056bff) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8ea,	// (0x00056bff) list_single_graphic_2heading_pane_fp_g2

0x87cd,	// (0x00052ae2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x87cd,	// (0x00052ae2) list_single_graphic_2heading_pane_fp_g3

0x8840,	// (0x00052b55) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8840,	// (0x00052b55) list_single_graphic_2heading_pane_fp_g4

0xc8f6,	// (0x00056c0b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc8f6,	// (0x00056c0b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059ea4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059ea4) list_single_graphic_2heading_pane_fp_g

0x7d16,	// (0x0005202b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7d16,	// (0x0005202b) list_single_graphic_2heading_pane_fp_t1

0x7b81,	// (0x00051e96) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7b81,	// (0x00051e96) list_single_graphic_2heading_pane_fp_t2

0x7d2c,	// (0x00052041) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7d2c,	// (0x00052041) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc71,	// (0x00059f86) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc71,	// (0x00059f86) list_single_graphic_2heading_pane_fp_t

0xc329,	// (0x0005663e) fep_hwr_write_pane_g5_ParamLimits

0xc329,	// (0x0005663e) fep_hwr_write_pane_g5

0xc335,	// (0x0005664a) fep_hwr_write_pane_g6_ParamLimits

0xc335,	// (0x0005664a) fep_hwr_write_pane_g6

0xcbac,	// (0x00056ec1) eswt_shell_pane_ParamLimits

0x9d4a,	// (0x0005405f) bg_popup_window_pane_cp18_ParamLimits

0xb013,	// (0x00055328) heading_pane_cp70

0xccd6,	// (0x00056feb) popup_eswt_tasktip_window_t1_ParamLimits

0x984f,	// (0x00053b64) aid_touch_tab_arrow_left

0x985b,	// (0x00053b70) aid_touch_tab_arrow_right

0x7f14,	// (0x00052229) title_pane_g3_ParamLimits

0x7f14,	// (0x00052229) title_pane_g3

0x87f1,	// (0x00052b06) set_value_pane_g1

0x5fbc,	// (0x000502d1) popup_toolbar_trans_pane_ParamLimits

0xce3b,	// (0x00057150) aid_size_cell_tb_trans_pane_ParamLimits

0x8832,	// (0x00052b47) bg_tb_trans_pane_ParamLimits

0xce4d,	// (0x00057162) grid_tb_trans_pane_ParamLimits

0x8255,	// (0x0005256a) cont_note_pane_ParamLimits

0x8255,	// (0x0005256a) cont_note_pane

0x8597,	// (0x000528ac) cont_snote2_single_text_pane_ParamLimits

0x8597,	// (0x000528ac) cont_snote2_single_text_pane

0x8597,	// (0x000528ac) cont_snote2_single_graphic_pane_ParamLimits

0x8597,	// (0x000528ac) cont_snote2_single_graphic_pane

0xa368,	// (0x0005467d) cont_note_wait_pane_ParamLimits

0xa368,	// (0x0005467d) cont_note_wait_pane

0xa368,	// (0x0005467d) cont_note_image_pane_ParamLimits

0xa368,	// (0x0005467d) cont_note_image_pane

0xcef5,	// (0x0005720a) popup_note2_window_g1_ParamLimits

0xcef5,	// (0x0005720a) popup_note2_window_g1

0xcf26,	// (0x0005723b) popup_note2_window_t1_ParamLimits

0xcf26,	// (0x0005723b) popup_note2_window_t1

0xcf6b,	// (0x00057280) popup_note2_window_t2_ParamLimits

0xcf6b,	// (0x00057280) popup_note2_window_t2

0xcfb0,	// (0x000572c5) popup_note2_window_t3_ParamLimits

0xcfb0,	// (0x000572c5) popup_note2_window_t3

0xcff5,	// (0x0005730a) popup_note2_window_t4_ParamLimits

0xcff5,	// (0x0005730a) popup_note2_window_t4

0x82cd,	// (0x000525e2) popup_note2_window_t5_ParamLimits

0x82cd,	// (0x000525e2) popup_note2_window_t5

0x0004,

0xfc7d,	// (0x00059f92) popup_note2_window_t_ParamLimits

0xfc7d,	// (0x00059f92) popup_note2_window_t

0xd024,	// (0x00057339) popup_note2_image_window_g1_ParamLimits

0xd024,	// (0x00057339) popup_note2_image_window_g1

0xd030,	// (0x00057345) popup_note2_image_window_g2_ParamLimits

0xd030,	// (0x00057345) popup_note2_image_window_g2

0x0001,

0xfc88,	// (0x00059f9d) popup_note2_image_window_g_ParamLimits

0xfc88,	// (0x00059f9d) popup_note2_image_window_g

0xd042,	// (0x00057357) popup_note2_image_window_t1_ParamLimits

0xd042,	// (0x00057357) popup_note2_image_window_t1

0xd05a,	// (0x0005736f) popup_note2_image_window_t2_ParamLimits

0xd05a,	// (0x0005736f) popup_note2_image_window_t2

0xd072,	// (0x00057387) popup_note2_image_window_t3_ParamLimits

0xd072,	// (0x00057387) popup_note2_image_window_t3

0x0002,

0xfc8d,	// (0x00059fa2) popup_note2_image_window_t_ParamLimits

0xfc8d,	// (0x00059fa2) popup_note2_image_window_t

0xa376,	// (0x0005468b) popup_note2_wait_window_g1_ParamLimits

0xa376,	// (0x0005468b) popup_note2_wait_window_g1

0xd08e,	// (0x000573a3) popup_note2_wait_window_g2_ParamLimits

0xd08e,	// (0x000573a3) popup_note2_wait_window_g2

0xa38e,	// (0x000546a3) popup_note2_wait_window_g3_ParamLimits

0xa38e,	// (0x000546a3) popup_note2_wait_window_g3

0x0002,

0xfc94,	// (0x00059fa9) popup_note2_wait_window_g_ParamLimits

0xfc94,	// (0x00059fa9) popup_note2_wait_window_g

0xd09a,	// (0x000573af) popup_note2_wait_window_t1_ParamLimits

0xd09a,	// (0x000573af) popup_note2_wait_window_t1

0xd0b8,	// (0x000573cd) popup_note2_wait_window_t2_ParamLimits

0xd0b8,	// (0x000573cd) popup_note2_wait_window_t2

0xd0d6,	// (0x000573eb) popup_note2_wait_window_t3_ParamLimits

0xd0d6,	// (0x000573eb) popup_note2_wait_window_t3

0xd0e8,	// (0x000573fd) popup_note2_wait_window_t4_ParamLimits

0xd0e8,	// (0x000573fd) popup_note2_wait_window_t4

0x0003,

0xfc9b,	// (0x00059fb0) popup_note2_wait_window_t_ParamLimits

0xfc9b,	// (0x00059fb0) popup_note2_wait_window_t

0xd0fa,	// (0x0005740f) wait_bar2_pane_ParamLimits

0xd0fa,	// (0x0005740f) wait_bar2_pane

0xd112,	// (0x00057427) popup_snote2_single_text_window_g1_ParamLimits

0xd112,	// (0x00057427) popup_snote2_single_text_window_g1

0xd13a,	// (0x0005744f) popup_snote2_single_text_window_t1_ParamLimits

0xd13a,	// (0x0005744f) popup_snote2_single_text_window_t1

0xd186,	// (0x0005749b) popup_snote2_single_text_window_t2_ParamLimits

0xd186,	// (0x0005749b) popup_snote2_single_text_window_t2

0xd1d2,	// (0x000574e7) popup_snote2_single_text_window_t3_ParamLimits

0xd1d2,	// (0x000574e7) popup_snote2_single_text_window_t3

0xd213,	// (0x00057528) popup_snote2_single_text_window_t4_ParamLimits

0xd213,	// (0x00057528) popup_snote2_single_text_window_t4

0xd249,	// (0x0005755e) popup_snote2_single_text_window_t5_ParamLimits

0xd249,	// (0x0005755e) popup_snote2_single_text_window_t5

0x0004,

0xfca4,	// (0x00059fb9) popup_snote2_single_text_window_t_ParamLimits

0xfca4,	// (0x00059fb9) popup_snote2_single_text_window_t

0xd274,	// (0x00057589) popup_snote2_single_graphic_window_g1_ParamLimits

0xd274,	// (0x00057589) popup_snote2_single_graphic_window_g1

0xd29c,	// (0x000575b1) popup_snote2_single_graphic_window_g2_ParamLimits

0xd29c,	// (0x000575b1) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaf,	// (0x00059fc4) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaf,	// (0x00059fc4) popup_snote2_single_graphic_window_g

0xd2c4,	// (0x000575d9) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2c4,	// (0x000575d9) popup_snote2_single_graphic_window_t1

0xd310,	// (0x00057625) popup_snote2_single_graphic_window_t2_ParamLimits

0xd310,	// (0x00057625) popup_snote2_single_graphic_window_t2

0xd1d2,	// (0x000574e7) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1d2,	// (0x000574e7) popup_snote2_single_graphic_window_t3

0xd213,	// (0x00057528) popup_snote2_single_graphic_window_t4_ParamLimits

0xd213,	// (0x00057528) popup_snote2_single_graphic_window_t4

0xd249,	// (0x0005755e) popup_snote2_single_graphic_window_t5_ParamLimits

0xd249,	// (0x0005755e) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb4,	// (0x00059fc9) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb4,	// (0x00059fc9) popup_snote2_single_graphic_window_t

0xbd1f,	// (0x00056034) clock_nsta_pane_cp2_t1

0xbd1f,	// (0x00056034) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x00059ddd) clock_nsta_pane_cp2_t

0x5302,	// (0x0004f617) form_field_data_wide_pane_g1_ParamLimits

0x87cd,	// (0x00052ae2) form_field_data_wide_pane_g2_ParamLimits

0x87cd,	// (0x00052ae2) form_field_data_wide_pane_g2

0x8840,	// (0x00052b55) form_field_data_wide_pane_g3_ParamLimits

0x8840,	// (0x00052b55) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00059995) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00059995) form_field_data_wide_pane_g

0xbc11,	// (0x00055f26) grid_touch_3_pane_ParamLimits

0xbc11,	// (0x00055f26) grid_touch_3_pane

0xd35c,	// (0x00057671) cell_touch_3_pane_ParamLimits

0xd35c,	// (0x00057671) cell_touch_3_pane

0xc29d,	// (0x000565b2) cell_touch_3_pane_g1

0xc29d,	// (0x000565b2) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x00059e62) cell_touch_3_pane_g

0x82ff,	// (0x00052614) cont_query_data_pane

0x8307,	// (0x0005261c) cont_query_data_pane_cp1

0xd38d,	// (0x000576a2) button_value_adjust_pane_cp7

0xd395,	// (0x000576aa) query_popup_pane_cp3

0x8f66,	// (0x0005327b) bg_popup_sub_pane_cp22_ParamLimits

0x56ae,	// (0x0004f9c3) navi_navi_volume_pane_cp2

0x56c6,	// (0x0004f9db) popup_side_volume_key_window_g2

0x56d2,	// (0x0004f9e7) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00059a2b) popup_side_volume_key_window_g

0x56ec,	// (0x0004fa01) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00059a32) popup_side_volume_key_window_t

0x9234,	// (0x00053549) popup_side_volume_key_window_ParamLimits

0x7566,	// (0x0005187b) list_double_graphic_pane_g4_ParamLimits

0x7566,	// (0x0005187b) list_double_graphic_pane_g4

0x7784,	// (0x00051a99) list_single_2heading_msg_pane_ParamLimits

0x7784,	// (0x00051a99) list_single_2heading_msg_pane

0x7d4c,	// (0x00052061) list_single_2heading_msg_pane_g1_ParamLimits

0x7d4c,	// (0x00052061) list_single_2heading_msg_pane_g1

0x93d7,	// (0x000536ec) list_single_2heading_msg_pane_g2_ParamLimits

0x93d7,	// (0x000536ec) list_single_2heading_msg_pane_g2

0x7d58,	// (0x0005206d) list_single_2heading_msg_pane_g3_ParamLimits

0x7d58,	// (0x0005206d) list_single_2heading_msg_pane_g3

0x7d64,	// (0x00052079) list_single_2heading_msg_pane_g4_ParamLimits

0x7d64,	// (0x00052079) list_single_2heading_msg_pane_g4

0x0003,

0xfcbf,	// (0x00059fd4) list_single_2heading_msg_pane_g_ParamLimits

0xfcbf,	// (0x00059fd4) list_single_2heading_msg_pane_g

0x7d7c,	// (0x00052091) list_single_2heading_msg_pane_t1_ParamLimits

0x7d7c,	// (0x00052091) list_single_2heading_msg_pane_t1

0x7da4,	// (0x000520b9) list_single_2heading_msg_pane_t2_ParamLimits

0x7da4,	// (0x000520b9) list_single_2heading_msg_pane_t2

0x7dd8,	// (0x000520ed) list_single_2heading_msg_pane_t3_ParamLimits

0x7dd8,	// (0x000520ed) list_single_2heading_msg_pane_t3

0x7e11,	// (0x00052126) list_single_2heading_msg_pane_t4_ParamLimits

0x7e11,	// (0x00052126) list_single_2heading_msg_pane_t4

0x0003,

0xfcc8,	// (0x00059fdd) list_single_2heading_msg_pane_t_ParamLimits

0xfcc8,	// (0x00059fdd) list_single_2heading_msg_pane_t

0x7f20,	// (0x00052235) title_pane_g4_ParamLimits

0x7f20,	// (0x00052235) title_pane_g4

0x54bc,	// (0x0004f7d1) title_pane_stacon_g3_ParamLimits

0x54bc,	// (0x0004f7d1) title_pane_stacon_g3

0xceb8,	// (0x000571cd) list_single_2graphic_im_pane_g4_ParamLimits

0xceb8,	// (0x000571cd) list_single_2graphic_im_pane_g4

0xadcf,	// (0x000550e4) popup_side_volume_key_window_cp

0xb57c,	// (0x00055891) main_idle_act2_pane_t1

0x60ce,	// (0x000503e3) toolbar_button_pane_g10

0x878f,	// (0x00052aa4) popup_toolbar_window_cp1

0xbd10,	// (0x00056025) clock_nsta_pane_cp_t1

0xbd10,	// (0x00056025) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x00059dd8) clock_nsta_pane_cp_t

0x56ae,	// (0x0004f9c3) navi_navi_volume_pane_cp2_ParamLimits

0x56ba,	// (0x0004f9cf) popup_side_volume_key_window_g1_ParamLimits

0x56c6,	// (0x0004f9db) popup_side_volume_key_window_g2_ParamLimits

0x56d2,	// (0x0004f9e7) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00059a2b) popup_side_volume_key_window_g_ParamLimits

0x6568,	// (0x0005087d) fep_hwr_aid_pane

0x660f,	// (0x00050924) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2f9,	// (0x0005660e) fep_hwr_top_pane_g1_ParamLimits

0xc30b,	// (0x00056620) fep_hwr_top_pane_g2_ParamLimits

0x662f,	// (0x00050944) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x00059e2d) fep_hwr_top_pane_g_ParamLimits

0x6644,	// (0x00050959) fep_hwr_top_text_pane_ParamLimits

0xab92,	// (0x00054ea7) aid_touch_tab_arrow_arrow_2

0xab9b,	// (0x00054eb0) aid_touch_tab_arrow_left_2

0x657c,	// (0x00050891) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x65b3,	// (0x000508c8) fep_hwr_prediction_pane

0xc462,	// (0x00056777) fep_vkb_prediction_pane

0xc55f,	// (0x00056874) fep_vkb_side_pane_g3_ParamLimits

0xc55f,	// (0x00056874) fep_vkb_side_pane_g3

0x67bf,	// (0x00050ad4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x682b,	// (0x00050b40) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6838,	// (0x00050b4d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc7,	// (0x00059edc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6967,	// (0x00050c7c) fep_hwr_prediction_pane_g1

0x6971,	// (0x00050c86) fep_hwr_prediction_pane_g2

0x6979,	// (0x00050c8e) fep_hwr_prediction_pane_g3

0x6981,	// (0x00050c96) fep_hwr_prediction_pane_g4

0x0003,

0xfcd1,	// (0x00059fe6) fep_hwr_prediction_pane_g

0xd3ba,	// (0x000576cf) fep_vkb_prediction_pane_g1

0xd3c4,	// (0x000576d9) fep_vkb_prediction_pane_g2

0xd3cc,	// (0x000576e1) fep_vkb_prediction_pane_g3

0xd3d4,	// (0x000576e9) fep_vkb_prediction_pane_g4

0x0003,

0xfcda,	// (0x00059fef) fep_vkb_prediction_pane_g

0x63c4,	// (0x000506d9) slider_set_pane_g3

0x63d8,	// (0x000506ed) slider_set_pane_g4

0x63f0,	// (0x00050705) slider_set_pane_g5

0x63c4,	// (0x000506d9) slider_set_pane_g6

0x6406,	// (0x0005071b) slider_set_pane_g7

0xb222,	// (0x00055537) slider_form_pane_g3

0xb22b,	// (0x00055540) slider_form_pane_g4

0xb233,	// (0x00055548) slider_form_pane_g5

0xb222,	// (0x00055537) slider_form_pane_g6

0xb23b,	// (0x00055550) slider_form_pane_g7

0xb81b,	// (0x00055b30) slider_set_pane_vc_g3

0xb824,	// (0x00055b39) slider_set_pane_vc_g4

0xb82d,	// (0x00055b42) slider_set_pane_vc_g5

0xb81b,	// (0x00055b30) slider_set_pane_vc_g6

0xb836,	// (0x00055b4b) slider_set_pane_vc_g7

0xb9e6,	// (0x00055cfb) slider_form_pane_vc_g1

0xb9ef,	// (0x00055d04) slider_form_pane_vc_g2

0xb9f8,	// (0x00055d0d) slider_form_pane_vc_g3

0xb9e6,	// (0x00055cfb) slider_form_pane_vc_g4

0xba01,	// (0x00055d16) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x00059daa) slider_form_pane_vc_g

0x4ab6,	// (0x0004edcb) main_idle_act3_pane

0xd3dc,	// (0x000576f1) ai3_links_pane

0xd3e5,	// (0x000576fa) popup_ai3_data_window_ParamLimits

0xd3e5,	// (0x000576fa) popup_ai3_data_window

0x7ed8,	// (0x000521ed) grid_ai3_links_pane

0xd3fd,	// (0x00057712) cell_ai3_links_pane_ParamLimits

0xd3fd,	// (0x00057712) cell_ai3_links_pane

0xd415,	// (0x0005772a) bg_popup_sub_pane_cp11

0xd422,	// (0x00057737) cell_ai3_links_pane_g1

0x7ed8,	// (0x000521ed) bg_popup_sub_pane_cp12

0xd447,	// (0x0005775c) heading_ai3_data_pane

0xd44f,	// (0x00057764) list_ai3_gene_pane

0xd45b,	// (0x00057770) popup_ai3_data_window_g1

0xd463,	// (0x00057778) heading_ai3_data_pane_g1

0xd46b,	// (0x00057780) heading_ai3_data_pane_t1

0xd479,	// (0x0005778e) list_double_ai3_gene_pane_ParamLimits

0xd479,	// (0x0005778e) list_double_ai3_gene_pane

0xd486,	// (0x0005779b) list_single_ai3_gene_pane_ParamLimits

0xd486,	// (0x0005779b) list_single_ai3_gene_pane

0xc262,	// (0x00056577) list_highlight_pane_cp7_ParamLimits

0xc262,	// (0x00056577) list_highlight_pane_cp7

0xd493,	// (0x000577a8) list_single_a13_gene_pane_t1_ParamLimits

0xd493,	// (0x000577a8) list_single_a13_gene_pane_t1

0xd4aa,	// (0x000577bf) list_single_ai3_gene_pane_g1

0xd4b3,	// (0x000577c8) list_single_ai3_gene_pane_g2

0x0001,

0xfce3,	// (0x00059ff8) list_single_ai3_gene_pane_g

0xd4bb,	// (0x000577d0) list_double_ai3_gene_pane_g1_ParamLimits

0xd4bb,	// (0x000577d0) list_double_ai3_gene_pane_g1

0xd4c7,	// (0x000577dc) list_double_ai3_gene_pane_t1_ParamLimits

0xd4c7,	// (0x000577dc) list_double_ai3_gene_pane_t1

0xd4e3,	// (0x000577f8) list_double_ai3_gene_pane_t2_ParamLimits

0xd4e3,	// (0x000577f8) list_double_ai3_gene_pane_t2

0xd4f8,	// (0x0005780d) list_double_ai3_gene_pane_t3_ParamLimits

0xd4f8,	// (0x0005780d) list_double_ai3_gene_pane_t3

0x0002,

0xfce8,	// (0x00059ffd) list_double_ai3_gene_pane_t_ParamLimits

0xfce8,	// (0x00059ffd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7d42,	// (0x00052057) aid_size_min_col_2

0xd3a6,	// (0x000576bb) aid_size_min_msg_ParamLimits

0xd3a6,	// (0x000576bb) aid_size_min_msg

0xc65f,	// (0x00056974) fep_vkb_top_text_pane_g2_ParamLimits

0xc65f,	// (0x00056974) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x00059e5d) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x00059e5d) fep_vkb_top_text_pane_g

0x4ab6,	// (0x0004edcb) main_hc_apps_shell_pane

0xd515,	// (0x0005782a) grid_hc_apps_pane_ParamLimits

0xd515,	// (0x0005782a) grid_hc_apps_pane

0xd524,	// (0x00057839) list_hc_apps_pane

0xd52c,	// (0x00057841) scroll_pane_cp37_ParamLimits

0xd52c,	// (0x00057841) scroll_pane_cp37

0xd538,	// (0x0005784d) cell_hc_apps_pane_ParamLimits

0xd538,	// (0x0005784d) cell_hc_apps_pane

0xd5e6,	// (0x000578fb) cell_hc_apps_pane_g1_ParamLimits

0xd5e6,	// (0x000578fb) cell_hc_apps_pane_g1

0xd617,	// (0x0005792c) cell_hc_apps_pane_g2_ParamLimits

0xd617,	// (0x0005792c) cell_hc_apps_pane_g2

0xd633,	// (0x00057948) cell_hc_apps_pane_g3_ParamLimits

0xd633,	// (0x00057948) cell_hc_apps_pane_g3

0x0002,

0xfcef,	// (0x0005a004) cell_hc_apps_pane_g_ParamLimits

0xfcef,	// (0x0005a004) cell_hc_apps_pane_g

0xd655,	// (0x0005796a) cell_hc_apps_pane_t1_ParamLimits

0xd655,	// (0x0005796a) cell_hc_apps_pane_t1

0x8255,	// (0x0005256a) grid_highlight_pane_cp10_ParamLimits

0x8255,	// (0x0005256a) grid_highlight_pane_cp10

0xd695,	// (0x000579aa) list_single_hc_apps_pane_ParamLimits

0xd695,	// (0x000579aa) list_single_hc_apps_pane

0xd6fd,	// (0x00057a12) list_single_hc_apps_pane_g1

0x7e36,	// (0x0005214b) list_single_hc_apps_pane_g2

0x0001,

0xfcf6,	// (0x0005a00b) list_single_hc_apps_pane_g

0x7e4f,	// (0x00052164) list_single_hc_apps_pane_g2_copy1

0x7e6b,	// (0x00052180) list_single_hc_apps_pane_t1

0x7fcc,	// (0x000522e1) bg_set_opt_pane_cp_ParamLimits

0x4d09,	// (0x0004f01e) setting_slider_pane_t1_ParamLimits

0x4d22,	// (0x0004f037) setting_slider_pane_t2_ParamLimits

0x4d3c,	// (0x0004f051) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00059873) setting_slider_pane_t_ParamLimits

0x4d54,	// (0x0004f069) slider_set_pane_ParamLimits

0x59c1,	// (0x0004fcd6) control_pane_g5_ParamLimits

0x59c1,	// (0x0004fcd6) control_pane_g5

0xb07f,	// (0x00055394) slider_set_pane_g1_ParamLimits

0x63b8,	// (0x000506cd) slider_set_pane_g2_ParamLimits

0x63c4,	// (0x000506d9) slider_set_pane_g3_ParamLimits

0x63d8,	// (0x000506ed) slider_set_pane_g4_ParamLimits

0x63f0,	// (0x00050705) slider_set_pane_g5_ParamLimits

0x63c4,	// (0x000506d9) slider_set_pane_g6_ParamLimits

0x6406,	// (0x0005071b) slider_set_pane_g7_ParamLimits

0xf964,	// (0x00059c79) slider_set_pane_g_ParamLimits

0x931e,	// (0x00053633) navi_icon_text_pane_ParamLimits

0x9810,	// (0x00053b25) aid_fill_nsta_2_ParamLimits

0x984f,	// (0x00053b64) aid_touch_tab_arrow_left_ParamLimits

0x985b,	// (0x00053b70) aid_touch_tab_arrow_right_ParamLimits

0x98c7,	// (0x00053bdc) clock_nsta_pane_ParamLimits

0xab74,	// (0x00054e89) navi_icon_pane_g1_ParamLimits

0xab80,	// (0x00054e95) navi_text_pane_t1_ParamLimits

0xbe22,	// (0x00056137) navi_icon_text_pane_g1_ParamLimits

0xbe2e,	// (0x00056143) navi_icon_text_pane_t1_ParamLimits

0xd6fd,	// (0x00057a12) list_single_hc_apps_pane_g1_ParamLimits

0x7e36,	// (0x0005214b) list_single_hc_apps_pane_g2_ParamLimits

0xfcf6,	// (0x0005a00b) list_single_hc_apps_pane_g_ParamLimits

0x7e4f,	// (0x00052164) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7e6b,	// (0x00052180) list_single_hc_apps_pane_t1_ParamLimits

0x4c13,	// (0x0004ef28) popup_toolbar2_fixed_window_ParamLimits

0x4c13,	// (0x0004ef28) popup_toolbar2_fixed_window

0x5fb2,	// (0x000502c7) popup_toolbar2_float_window

0x7ed8,	// (0x000521ed) bg_popup_sub_pane_cp27

0xd716,	// (0x00057a2b) grid_toolbar2_float_pane

0x7ed8,	// (0x000521ed) bg_popup_sub_pane_cp26

0xd716,	// (0x00057a2b) grid_toolbar2_fixed_pane

0xd71e,	// (0x00057a33) cell_toolbar2_fixed_pane_ParamLimits

0xd71e,	// (0x00057a33) cell_toolbar2_fixed_pane

0xd72f,	// (0x00057a44) cell_toolbar2_fixed_pane_g1

0x5e88,	// (0x0005019d) toolbar2_fixed_button_pane

0x9cd6,	// (0x00053feb) toolbar2_fixed_button_pane_g1

0x9ce6,	// (0x00053ffb) toolbar2_fixed_button_pane_g2

0x9cde,	// (0x00053ff3) toolbar2_fixed_button_pane_g3

0x9cf6,	// (0x0005400b) toolbar2_fixed_button_pane_g4

0x9cee,	// (0x00054003) toolbar2_fixed_button_pane_g5

0x9cfe,	// (0x00054013) toolbar2_fixed_button_pane_g6

0x9d06,	// (0x0005401b) toolbar2_fixed_button_pane_g7

0x9d16,	// (0x0005402b) toolbar2_fixed_button_pane_g8

0x9d0e,	// (0x00054023) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00059b7b) toolbar2_fixed_button_pane_g

0xd738,	// (0x00057a4d) cell_toolbar2_float_pane_ParamLimits

0xd738,	// (0x00057a4d) cell_toolbar2_float_pane

0xd74c,	// (0x00057a61) cell_toolbar2_float_pane_g1

0x5e88,	// (0x0005019d) toolbar2_fixed_button_pane_cp

0xc3c9,	// (0x000566de) fep_vkb_accented_list_pane_ParamLimits

0xc3c9,	// (0x000566de) fep_vkb_accented_list_pane

0x679f,	// (0x00050ab4) bg_popup_fep_shadow_pane_g9

0x949e,	// (0x000537b3) bg_popup_fep_shadow_pane_cp3

0x897b,	// (0x00052c90) list_accented_list_pane

0xd755,	// (0x00057a6a) list_single_accented_list_pane_ParamLimits

0xd755,	// (0x00057a6a) list_single_accented_list_pane

0x949e,	// (0x000537b3) list_highlight_pane_cp10

0xd766,	// (0x00057a7b) list_single_accented_list_pane_t1

0x5f02,	// (0x00050217) popup_slider_window_ParamLimits

0x5f02,	// (0x00050217) popup_slider_window

0xd39d,	// (0x000576b2) aid_indentation_list_msg

0xd820,	// (0x00057b35) bg_popup_window_pane_cp19

0xd88a,	// (0x00057b9f) popup_slider_window_g1

0xd8a6,	// (0x00057bbb) popup_slider_window_g2

0xd8c2,	// (0x00057bd7) popup_slider_window_g3

0x0005,

0xfcfb,	// (0x0005a010) popup_slider_window_g

0xd91e,	// (0x00057c33) popup_slider_window_t1

0xd992,	// (0x00057ca7) small_volume_slider_vertical_pane

0xc29d,	// (0x000565b2) small_volume_slider_vertical_pane_g1

0xc29d,	// (0x000565b2) small_volume_slider_vertical_pane_g2

0xd9ae,	// (0x00057cc3) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0d,	// (0x0005a022) small_volume_slider_vertical_pane_g

0x49d9,	// (0x0004ecee) area_side_right_pane_ParamLimits

0x49d9,	// (0x0004ecee) area_side_right_pane

0x6989,	// (0x00050c9e) aid_size_side_button_ParamLimits

0x6989,	// (0x00050c9e) aid_size_side_button

0x699d,	// (0x00050cb2) grid_sctrl_middle_pane_ParamLimits

0x699d,	// (0x00050cb2) grid_sctrl_middle_pane

0x69bc,	// (0x00050cd1) sctrl_sk_bottom_pane

0x69cd,	// (0x00050ce2) sctrl_sk_top_pane

0x69df,	// (0x00050cf4) aid_touch_sctrl_top

0x69ec,	// (0x00050d01) bg_sctrl_sk_pane_ParamLimits

0x69ec,	// (0x00050d01) bg_sctrl_sk_pane

0x69fa,	// (0x00050d0f) sctrl_sk_top_pane_g1

0x6a07,	// (0x00050d1c) sctrl_sk_top_pane_t1

0x69df,	// (0x00050cf4) aid_touch_sctrl_bottom

0x69ec,	// (0x00050d01) bg_sctrl_sk_pane_cp_ParamLimits

0x69ec,	// (0x00050d01) bg_sctrl_sk_pane_cp

0x6a22,	// (0x00050d37) sctrl_sk_bottom_pane_g1

0x6a07,	// (0x00050d1c) sctrl_sk_bottom_pane_t1

0x6a2b,	// (0x00050d40) cell_sctrl_middle_pane_ParamLimits

0x6a2b,	// (0x00050d40) cell_sctrl_middle_pane

0x6a46,	// (0x00050d5b) aid_touch_sctrl_middle_ParamLimits

0x6a46,	// (0x00050d5b) aid_touch_sctrl_middle

0x6a58,	// (0x00050d6d) bg_sctrl_middle_pane_ParamLimits

0x6a58,	// (0x00050d6d) bg_sctrl_middle_pane

0x67bf,	// (0x00050ad4) cell_sctrl_middle_pane_g1_ParamLimits

0x67bf,	// (0x00050ad4) cell_sctrl_middle_pane_g1

0x6a66,	// (0x00050d7b) cell_sctrl_middle_pane_g2_ParamLimits

0x6a66,	// (0x00050d7b) cell_sctrl_middle_pane_g2

0x0001,

0xfd19,	// (0x0005a02e) cell_sctrl_middle_pane_g_ParamLimits

0xfd19,	// (0x0005a02e) cell_sctrl_middle_pane_g

0x9cd6,	// (0x00053feb) bg_sctrl_middle_pane_g1

0x9cde,	// (0x00053ff3) bg_sctrl_middle_pane_g2

0x9ce6,	// (0x00053ffb) bg_sctrl_middle_pane_g3

0x9cee,	// (0x00054003) bg_sctrl_middle_pane_g4

0x9cf6,	// (0x0005400b) bg_sctrl_middle_pane_g5

0x9cfe,	// (0x00054013) bg_sctrl_middle_pane_g6

0x9d06,	// (0x0005401b) bg_sctrl_middle_pane_g7

0x9d0e,	// (0x00054023) bg_sctrl_middle_pane_g8

0x0007,

0xfd1e,	// (0x0005a033) bg_sctrl_middle_pane_g

0x9d16,	// (0x0005402b) bg_sctrl_middle_pane_g8_copy1

0x9cd6,	// (0x00053feb) bg_sctrl_sk_pane_g1

0x9ce6,	// (0x00053ffb) bg_sctrl_sk_pane_g2

0x9cde,	// (0x00053ff3) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00059b7b) bg_sctrl_sk_pane_g

0x8755,	// (0x00052a6a) aid_size_touch_scroll_bar

0x9cf6,	// (0x0005400b) bg_sctrl_sk_pane_g4

0x9cee,	// (0x00054003) bg_sctrl_sk_pane_g5

0x9cfe,	// (0x00054013) bg_sctrl_sk_pane_g6

0x9d06,	// (0x0005401b) bg_sctrl_sk_pane_g7

0x9d16,	// (0x0005402b) bg_sctrl_sk_pane_g8

0x9d0e,	// (0x00054023) bg_sctrl_sk_pane_g9

0x5b73,	// (0x0004fe88) popup_fep_china_hwr2_fs_candidate_window

0x5b7d,	// (0x0004fe92) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5b7d,	// (0x0004fe92) popup_fep_china_hwr2_fs_control_window

0x67bf,	// (0x00050ad4) sctrl_sk_top_pane_g2

0x0001,

0xfd14,	// (0x0005a029) sctrl_sk_top_pane_g

0xd9b7,	// (0x00057ccc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9b7,	// (0x00057ccc) aid_fep_china_hwr2_fs_cell

0xd9c9,	// (0x00057cde) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9c9,	// (0x00057cde) bg_popup_fep_shadow_pane_cp4

0xd9e0,	// (0x00057cf5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9e0,	// (0x00057cf5) bg_popup_fep_shadow_pane_cp5

0xd9f2,	// (0x00057d07) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9f2,	// (0x00057d07) popup_fep_china_hwr2_fs_control_bar_grid

0xda02,	// (0x00057d17) popup_fep_china_hwr2_fs_control_funtion_grid

0xda0a,	// (0x00057d1f) aid_fep_china_hwr2_fs_candi_cell

0x7ed8,	// (0x000521ed) bg_popup_fep_shadow_pane_cp6

0xda14,	// (0x00057d29) popup_fep_china_hwr2_fs_candidate_grid

0xda1e,	// (0x00057d33) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda1e,	// (0x00057d33) cell_fep_china_hwr2_fs_funtion_grid

0xc29d,	// (0x000565b2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda36,	// (0x00057d4b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda36,	// (0x00057d4b) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda44,	// (0x00057d59) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda44,	// (0x00057d59) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2f,	// (0x0005a044) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2f,	// (0x0005a044) cell_fep_china_hwr2_fs_funtion_grid_g

0xda5a,	// (0x00057d6f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda5a,	// (0x00057d6f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda6f,	// (0x00057d84) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda6f,	// (0x00057d84) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd34,	// (0x0005a049) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd34,	// (0x0005a049) cell_fep_china_hwr2_fs_funtion_grid_t

0xda8b,	// (0x00057da0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda93,	// (0x00057da8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda9b,	// (0x00057db0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd39,	// (0x0005a04e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaa3,	// (0x00057db8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaa3,	// (0x00057db8) cell_fep_china_hwr2_fs_candidate_grid

0xdabc,	// (0x00057dd1) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdac4,	// (0x00057dd9) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc29d,	// (0x000565b2) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc29d,	// (0x000565b2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x00059e62) cell_fep_china_hwr2_fs_candidate_grid_g

0xdacc,	// (0x00057de1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98d4,	// (0x00053be9) clock_nsta_pane_cp_24_ParamLimits

0x98d4,	// (0x00053be9) clock_nsta_pane_cp_24

0x9952,	// (0x00053c67) indicator_nsta_pane_cp_24_ParamLimits

0x9952,	// (0x00053c67) indicator_nsta_pane_cp_24

0xa9f0,	// (0x00054d05) heading_pane_g1

0x0001,

0xf8cb,	// (0x00059be0) heading_pane_g

0xb3c5,	// (0x000556da) grid_sct_catagory_button_pane

0xb3f5,	// (0x0005570a) scroll_pane_cp5_ParamLimits

0xbe70,	// (0x00056185) button_value_adjust_pane_cp5_ParamLimits

0xbe70,	// (0x00056185) button_value_adjust_pane_cp5

0xbf4f,	// (0x00056264) form2_midp_time_pane_ParamLimits

0xdada,	// (0x00057def) cell_sct_catagory_button_pane_ParamLimits

0xdada,	// (0x00057def) cell_sct_catagory_button_pane

0xc262,	// (0x00056577) bg_button_pane_cp01_ParamLimits

0xc262,	// (0x00056577) bg_button_pane_cp01

0xc29d,	// (0x000565b2) cell_sct_catagory_button_pane_g1

0x5f41,	// (0x00050256) popup_tb_extension_window

0xdaec,	// (0x00057e01) aid_size_cell_ext_ParamLimits

0xdaec,	// (0x00057e01) aid_size_cell_ext

0x8255,	// (0x0005256a) bg_tb_trans_pane_cp1_ParamLimits

0x8255,	// (0x0005256a) bg_tb_trans_pane_cp1

0xdb0c,	// (0x00057e21) grid_tb_ext_pane_ParamLimits

0xdb0c,	// (0x00057e21) grid_tb_ext_pane

0xdb3e,	// (0x00057e53) cell_tb_ext_pane_ParamLimits

0xdb3e,	// (0x00057e53) cell_tb_ext_pane

0xdb55,	// (0x00057e6a) cell_tb_ext_pane_g1_ParamLimits

0xdb55,	// (0x00057e6a) cell_tb_ext_pane_g1

0xdb72,	// (0x00057e87) cell_tb_ext_pane_t1

0x8255,	// (0x0005256a) list_highlight_pane_cp11_ParamLimits

0x8255,	// (0x0005256a) list_highlight_pane_cp11

0x4c32,	// (0x0004ef47) popup_uni_indicator_window_ParamLimits

0x4c32,	// (0x0004ef47) popup_uni_indicator_window

0x8832,	// (0x00052b47) bg_popup_sub_pane_cp14

0xdb8d,	// (0x00057ea2) list_uniindi_pane

0xdb99,	// (0x00057eae) uniindi_top_pane

0x8255,	// (0x0005256a) bg_uniindi_top_pane

0xdbb8,	// (0x00057ecd) uniindi_top_pane_g1

0xdbce,	// (0x00057ee3) uniindi_top_pane_g2

0x0003,

0xfd40,	// (0x0005a055) uniindi_top_pane_g

0xdbf8,	// (0x00057f0d) uniindi_top_pane_t1

0xdc22,	// (0x00057f37) list_single_uniindi_pane_ParamLimits

0xdc22,	// (0x00057f37) list_single_uniindi_pane

0xc29d,	// (0x000565b2) bg_uniindi_top_pane_g1

0xdc35,	// (0x00057f4a) list_single_uniindi_pane_g1

0xdc48,	// (0x00057f5d) list_single_uniindi_pane_t1

0x4ab6,	// (0x0004edcb) control_bg_pane

0xdc6d,	// (0x00057f82) bg_sctrl_sk_pane_cp1

0xdc76,	// (0x00057f8b) bg_sctrl_sk_pane_cp2

0xdc7f,	// (0x00057f94) control_bg_pane_g1

0xdc88,	// (0x00057f9d) control_bg_pane_g2

0x0001,

0xfd49,	// (0x0005a05e) control_bg_pane_g

0xbcb4,	// (0x00055fc9) cell_indicator_nsta_pane_g1_ParamLimits

0xbcc2,	// (0x00055fd7) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x00059dc6) cell_indicator_nsta_pane_g_ParamLimits

0x7b1f,	// (0x00051e34) form2_midp_time_pane_t1_ParamLimits

0x5ad5,	// (0x0004fdea) main_idle_act4_pane_ParamLimits

0x5ad5,	// (0x0004fdea) main_idle_act4_pane

0x5f41,	// (0x00050256) popup_tb_extension_window_ParamLimits

0xdb2e,	// (0x00057e43) tb_ext_find_pane_ParamLimits

0xdb2e,	// (0x00057e43) tb_ext_find_pane

0xdc91,	// (0x00057fa6) ai_gene_pane_1_cp1

0x95dd,	// (0x000538f2) ai_gene_pane_2_cp1

0xdc99,	// (0x00057fae) list_single_idle_plugin_calendar_pane

0xdca2,	// (0x00057fb7) list_single_idle_plugin_notification_pane

0xdcab,	// (0x00057fc0) list_single_idle_plugin_player_pane

0xdcb4,	// (0x00057fc9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcb4,	// (0x00057fc9) list_single_idle_plugin_shortcut_pane

0xdcd6,	// (0x00057feb) main_idle_act4_pane_t1

0xdce8,	// (0x00057ffd) main_idle_act4_pane_t2

0x0001,

0xfd4e,	// (0x0005a063) main_idle_act4_pane_t

0xdcfa,	// (0x0005800f) middle_sk_idle_act4_pane_ParamLimits

0xdcfa,	// (0x0005800f) middle_sk_idle_act4_pane

0xdd10,	// (0x00058025) popup_clock_digital_analogue_window_cp2

0xdd2a,	// (0x0005803f) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd2a,	// (0x0005803f) shortcut_wheel_idle_act4_pane

0xc29d,	// (0x000565b2) shortcut_wheel_idle_act4_pane_g1

0xc29d,	// (0x000565b2) shortcut_wheel_idle_act4_pane_g2

0xc29d,	// (0x000565b2) shortcut_wheel_idle_act4_pane_g3

0xc29d,	// (0x000565b2) shortcut_wheel_idle_act4_pane_g4

0xc29d,	// (0x000565b2) shortcut_wheel_idle_act4_pane_g5

0xdd3e,	// (0x00058053) shortcut_wheel_idle_act4_pane_g6

0xdd46,	// (0x0005805b) shortcut_wheel_idle_act4_pane_g7

0xdd4e,	// (0x00058063) shortcut_wheel_idle_act4_pane_g8

0xdd56,	// (0x0005806b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd53,	// (0x0005a068) shortcut_wheel_idle_act4_pane_g

0xc50b,	// (0x00056820) middle_sk_idle_act4_pane_g1_ParamLimits

0xc50b,	// (0x00056820) middle_sk_idle_act4_pane_g1

0xdddb,	// (0x000580f0) middle_sk_idle_act4_pane_g2_ParamLimits

0xdddb,	// (0x000580f0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd76,	// (0x0005a08b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd76,	// (0x0005a08b) middle_sk_idle_act4_pane_g

0xdde7,	// (0x000580fc) middle_sk_idle_act4_pane_t1_ParamLimits

0xdde7,	// (0x000580fc) middle_sk_idle_act4_pane_t1

0xde04,	// (0x00058119) grid_ai_shortcut_pane_ParamLimits

0xde04,	// (0x00058119) grid_ai_shortcut_pane

0xde1d,	// (0x00058132) list_highlight_pane_cp16_ParamLimits

0xde1d,	// (0x00058132) list_highlight_pane_cp16

0xde2a,	// (0x0005813f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde2a,	// (0x0005813f) list_single_idle_plugin_shortcut_pane_g1

0xde36,	// (0x0005814b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde36,	// (0x0005814b) list_single_idle_plugin_shortcut_pane_g2

0xde4e,	// (0x00058163) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde4e,	// (0x00058163) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7b,	// (0x0005a090) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7b,	// (0x0005a090) list_single_idle_plugin_shortcut_pane_g

0xde61,	// (0x00058176) cell_ai_shortcut_pane_ParamLimits

0xde61,	// (0x00058176) cell_ai_shortcut_pane

0xde82,	// (0x00058197) cell_ai_shortcut_pane_g1_ParamLimits

0xde82,	// (0x00058197) cell_ai_shortcut_pane_g1

0xdc91,	// (0x00057fa6) ai_gene_pane_1_cp2

0xdea4,	// (0x000581b9) ai_gene_pane_2_cp2

0xdeac,	// (0x000581c1) list_highlight_pane_cp15

0xdeb5,	// (0x000581ca) list_single_idle_plugin_calendar_pane_g1

0xdeac,	// (0x000581c1) list_highlight_pane_cp17

0xdebd,	// (0x000581d2) list_single_idle_plugin_calendar_pane_g1_copy1

0xdec5,	// (0x000581da) list_single_idle_plugin_player_pane_g1

0xb61c,	// (0x00055931) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd82,	// (0x0005a097) list_single_idle_plugin_player_pane_g

0xdecd,	// (0x000581e2) list_single_idle_plugin_player_pane_t1

0xdedb,	// (0x000581f0) list_single_idle_plugin_player_pane_t2

0xdee9,	// (0x000581fe) list_single_idle_plugin_player_pane_t3

0xdef7,	// (0x0005820c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd87,	// (0x0005a09c) list_single_idle_plugin_player_pane_t

0xdf05,	// (0x0005821a) wait_bar_pane_cp15

0xdf0d,	// (0x00058222) grid_ai_notification_pane

0xb61c,	// (0x00055931) list_single_idle_plugin_notification_pane_g1

0xdf16,	// (0x0005822b) cell_ai_notification_pane_ParamLimits

0xdf16,	// (0x0005822b) cell_ai_notification_pane

0xdf23,	// (0x00058238) cell_ai_notification_pane_g1

0xdf2b,	// (0x00058240) cell_ai_notification_pane_t1

0xdf39,	// (0x0005824e) tb_ext_find_button_pane

0xdf41,	// (0x00058256) tb_ext_find_pane_g1

0xdf49,	// (0x0005825e) tb_ext_find_pane_t1

0x8e7a,	// (0x0005318f) tb_ext_find_button_pane_g1

0xdf57,	// (0x0005826c) tb_ext_find_button_pane_g2

0x0001,

0xfd90,	// (0x0005a0a5) tb_ext_find_button_pane_g

0xdcd6,	// (0x00057feb) main_idle_act4_pane_t1_ParamLimits

0xdce8,	// (0x00057ffd) main_idle_act4_pane_t2_ParamLimits

0xfd4e,	// (0x0005a063) main_idle_act4_pane_t_ParamLimits

0xdd10,	// (0x00058025) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd1e,	// (0x00058033) sat_plugin_idle_act4_pane_ParamLimits

0xdd1e,	// (0x00058033) sat_plugin_idle_act4_pane

0xdf60,	// (0x00058275) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf60,	// (0x00058275) sat_plugin_idle_act4_pane_t1

0xdf73,	// (0x00058288) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf73,	// (0x00058288) sat_plugin_idle_act4_pane_t2

0xdf86,	// (0x0005829b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf86,	// (0x0005829b) sat_plugin_idle_act4_pane_t3

0xdf99,	// (0x000582ae) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf99,	// (0x000582ae) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd95,	// (0x0005a0aa) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd95,	// (0x0005a0aa) sat_plugin_idle_act4_pane_t

0x4b7b,	// (0x0004ee90) popup_battery_window_ParamLimits

0x4b7b,	// (0x0004ee90) popup_battery_window

0x8255,	// (0x0005256a) bg_popup_sub_pane_cp25_ParamLimits

0x8255,	// (0x0005256a) bg_popup_sub_pane_cp25

0xdfac,	// (0x000582c1) popup_battery_window_g1_ParamLimits

0xdfac,	// (0x000582c1) popup_battery_window_g1

0xdfb8,	// (0x000582cd) popup_battery_window_t1_ParamLimits

0xdfb8,	// (0x000582cd) popup_battery_window_t1

0xdfca,	// (0x000582df) popup_battery_window_t2_ParamLimits

0xdfca,	// (0x000582df) popup_battery_window_t2

0x0001,

0xfd9e,	// (0x0005a0b3) popup_battery_window_t_ParamLimits

0xfd9e,	// (0x0005a0b3) popup_battery_window_t

0x94a6,	// (0x000537bb) midp_canvas_pane_ParamLimits

0x951f,	// (0x00053834) midp_keypad_pane_ParamLimits

0x951f,	// (0x00053834) midp_keypad_pane

0x97d8,	// (0x00053aed) main_midp_pane_ParamLimits

0xbd2e,	// (0x00056043) signal_pane_g2_cp_ParamLimits

0xdfe7,	// (0x000582fc) aid_size_cell_midp_keypad_ParamLimits

0xdfe7,	// (0x000582fc) aid_size_cell_midp_keypad

0xe001,	// (0x00058316) midp_keyp_game_grid_pane_ParamLimits

0xe001,	// (0x00058316) midp_keyp_game_grid_pane

0xe021,	// (0x00058336) midp_keyp_rocker_pane_ParamLimits

0xe021,	// (0x00058336) midp_keyp_rocker_pane

0xe05a,	// (0x0005836f) midp_keyp_sk_left_pane_ParamLimits

0xe05a,	// (0x0005836f) midp_keyp_sk_left_pane

0xe0b4,	// (0x000583c9) midp_keyp_sk_right_pane_ParamLimits

0xe0b4,	// (0x000583c9) midp_keyp_sk_right_pane

0x7ed8,	// (0x000521ed) bg_button_pane_cp03

0xe10e,	// (0x00058423) midp_keyp_sk_left_pane_g1

0x7ed8,	// (0x000521ed) bg_button_pane_cp04

0xe10e,	// (0x00058423) midp_keyp_sk_right_pane_g1

0xc29d,	// (0x000565b2) midp_keyp_rocker_pane_g1

0xe117,	// (0x0005842c) keyp_game_cell_pane_ParamLimits

0xe117,	// (0x0005842c) keyp_game_cell_pane

0x7ed8,	// (0x000521ed) bg_button_pane_cp02

0xe12a,	// (0x0005843f) keyp_game_cell_pane_g1

0x4bb1,	// (0x0004eec6) popup_fep_vkb2_window_ParamLimits

0x4bb1,	// (0x0004eec6) popup_fep_vkb2_window

0x6a84,	// (0x00050d99) aid_size_cell_vkb2_ParamLimits

0x6a84,	// (0x00050d99) aid_size_cell_vkb2

0x6ad8,	// (0x00050ded) popup_fep_vkb2_window_g1_ParamLimits

0x6ad8,	// (0x00050ded) popup_fep_vkb2_window_g1

0x6b20,	// (0x00050e35) vkb2_area_bottom_pane_ParamLimits

0x6b20,	// (0x00050e35) vkb2_area_bottom_pane

0x6b6c,	// (0x00050e81) vkb2_area_keypad_pane_ParamLimits

0x6b6c,	// (0x00050e81) vkb2_area_keypad_pane

0x6bae,	// (0x00050ec3) vkb2_area_top_pane_ParamLimits

0x6bae,	// (0x00050ec3) vkb2_area_top_pane

0x6c28,	// (0x00050f3d) vkb2_top_entry_pane_ParamLimits

0x6c28,	// (0x00050f3d) vkb2_top_entry_pane

0x6c52,	// (0x00050f67) vkb2_top_grid_left_pane_ParamLimits

0x6c52,	// (0x00050f67) vkb2_top_grid_left_pane

0x6c70,	// (0x00050f85) vkb2_top_grid_right_pane_ParamLimits

0x6c70,	// (0x00050f85) vkb2_top_grid_right_pane

0x6c8e,	// (0x00050fa3) vkb2_cell_keypad_pane_ParamLimits

0x6c8e,	// (0x00050fa3) vkb2_cell_keypad_pane

0x6d5f,	// (0x00051074) vkb2_area_bottom_grid_pane_ParamLimits

0x6d5f,	// (0x00051074) vkb2_area_bottom_grid_pane

0x6d85,	// (0x0005109a) vkb2_area_bottom_pane_g1_ParamLimits

0x6d85,	// (0x0005109a) vkb2_area_bottom_pane_g1

0x6da9,	// (0x000510be) vkb2_area_bottom_pane_g2_ParamLimits

0x6da9,	// (0x000510be) vkb2_area_bottom_pane_g2

0x6dd7,	// (0x000510ec) vkb2_area_bottom_pane_g3_ParamLimits

0x6dd7,	// (0x000510ec) vkb2_area_bottom_pane_g3

0x0002,

0xfda3,	// (0x0005a0b8) vkb2_area_bottom_pane_g_ParamLimits

0xfda3,	// (0x0005a0b8) vkb2_area_bottom_pane_g

0x6e38,	// (0x0005114d) vkb2_top_cell_left_pane_ParamLimits

0x6e38,	// (0x0005114d) vkb2_top_cell_left_pane

0xe13b,	// (0x00058450) vkb2_top_entry_pane_g1_ParamLimits

0xe13b,	// (0x00058450) vkb2_top_entry_pane_g1

0xe149,	// (0x0005845e) vkb2_top_entry_pane_t1_ParamLimits

0xe149,	// (0x0005845e) vkb2_top_entry_pane_t1

0xe17b,	// (0x00058490) vkb2_top_entry_pane_t2_ParamLimits

0xe17b,	// (0x00058490) vkb2_top_entry_pane_t2

0xe1ad,	// (0x000584c2) vkb2_top_entry_pane_t3_ParamLimits

0xe1ad,	// (0x000584c2) vkb2_top_entry_pane_t3

0x0002,

0xfdaa,	// (0x0005a0bf) vkb2_top_entry_pane_t_ParamLimits

0xfdaa,	// (0x0005a0bf) vkb2_top_entry_pane_t

0x6e85,	// (0x0005119a) vkb2_top_grid_right_pane_g1_ParamLimits

0x6e85,	// (0x0005119a) vkb2_top_grid_right_pane_g1

0x6e9b,	// (0x000511b0) vkb2_top_grid_right_pane_g2_ParamLimits

0x6e9b,	// (0x000511b0) vkb2_top_grid_right_pane_g2

0x6eb3,	// (0x000511c8) vkb2_top_grid_right_pane_g3_ParamLimits

0x6eb3,	// (0x000511c8) vkb2_top_grid_right_pane_g3

0x6ecb,	// (0x000511e0) vkb2_top_grid_right_pane_g4_ParamLimits

0x6ecb,	// (0x000511e0) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb1,	// (0x0005a0c6) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb1,	// (0x0005a0c6) vkb2_top_grid_right_pane_g

0x6ee1,	// (0x000511f6) vkb2_top_cell_left_pane_g1

0x6ef8,	// (0x0005120d) vkb2_cell_keypad_pane_g1_ParamLimits

0x6ef8,	// (0x0005120d) vkb2_cell_keypad_pane_g1

0xe1d1,	// (0x000584e6) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1d1,	// (0x000584e6) vkb2_cell_keypad_pane_t1

0x6f06,	// (0x0005121b) vkb2_cell_bottom_grid_pane_ParamLimits

0x6f06,	// (0x0005121b) vkb2_cell_bottom_grid_pane

0x6f3f,	// (0x00051254) vkb2_cell_bottom_grid_pane_g1

0xdd5e,	// (0x00058073) aid_call2_pane_cp02

0xdd66,	// (0x0005807b) aid_call_pane_cp02

0xdd6e,	// (0x00058083) clock_digital_number_pane_cp10

0xdd76,	// (0x0005808b) clock_digital_number_pane_cp11

0xdd7e,	// (0x00058093) clock_digital_number_pane_cp12

0xdda7,	// (0x000580bc) clock_digital_number_pane_cp13

0xddaf,	// (0x000580c4) clock_digital_separator_pane_cp10

0x8e7a,	// (0x0005318f) popup_clock_digital_analogue_window_cp2_g1

0x8e7a,	// (0x0005318f) popup_clock_digital_analogue_window_cp2_g2

0xddb7,	// (0x000580cc) popup_clock_digital_analogue_window_cp2_g3

0x8e7a,	// (0x0005318f) popup_clock_digital_analogue_window_cp2_g4

0xddb7,	// (0x000580cc) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd66,	// (0x0005a07b) popup_clock_digital_analogue_window_cp2_g

0xddbf,	// (0x000580d4) popup_clock_digital_analogue_window_cp2_t1

0xddcd,	// (0x000580e2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd71,	// (0x0005a086) popup_clock_digital_analogue_window_cp2_t

0xc29d,	// (0x000565b2) clock_digital_number_pane_cp10_g1

0xc29d,	// (0x000565b2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00059e62) clock_digital_number_pane_cp10_g

0xc29d,	// (0x000565b2) clock_digital_separator_pane_cp10_g1

0xc29d,	// (0x000565b2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00059e62) clock_digital_separator_pane_cp10_g

0xdbda,	// (0x00057eef) uniindi_top_pane_g3

0xdbeb,	// (0x00057f00) uniindi_top_pane_g4

0x6d19,	// (0x0005102e) vkb2_row_keypad_pane_ParamLimits

0x6d19,	// (0x0005102e) vkb2_row_keypad_pane

0x6f5f,	// (0x00051274) vkb2_cell_t_keypad_pane_ParamLimits

0x6f5f,	// (0x00051274) vkb2_cell_t_keypad_pane

0x6f6f,	// (0x00051284) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6f6f,	// (0x00051284) vkb2_cell_t_keypad_pane_cp08

0x6f82,	// (0x00051297) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6f82,	// (0x00051297) vkb2_cell_t_keypad_pane_cp09

0x6f96,	// (0x000512ab) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6f96,	// (0x000512ab) vkb2_cell_t_keypad_pane_cp01

0x6fa7,	// (0x000512bc) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6fa7,	// (0x000512bc) vkb2_cell_t_keypad_pane_cp02

0x6fb8,	// (0x000512cd) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6fb8,	// (0x000512cd) vkb2_cell_t_keypad_pane_cp03

0x6fc9,	// (0x000512de) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6fc9,	// (0x000512de) vkb2_cell_t_keypad_pane_cp04

0x6fda,	// (0x000512ef) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6fda,	// (0x000512ef) vkb2_cell_t_keypad_pane_cp05

0x6feb,	// (0x00051300) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6feb,	// (0x00051300) vkb2_cell_t_keypad_pane_cp06

0x6ffc,	// (0x00051311) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6ffc,	// (0x00051311) vkb2_cell_t_keypad_pane_cp07

0x700d,	// (0x00051322) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x700d,	// (0x00051322) vkb2_cell_t_keypad_pane_cp10

0x67bf,	// (0x00050ad4) vkb2_cell_t_keypad_pane_g1

0xe1e8,	// (0x000584fd) vkb2_cell_t_keypad_pane_t1

0x4ab6,	// (0x0004edcb) popup_grid_graphic2_window

0xe1fa,	// (0x0005850f) aid_size_cell_graphic2_ParamLimits

0xe1fa,	// (0x0005850f) aid_size_cell_graphic2

0xe232,	// (0x00058547) bg_popup_window_pane_cp21_ParamLimits

0xe232,	// (0x00058547) bg_popup_window_pane_cp21

0xe240,	// (0x00058555) graphic2_pages_pane_ParamLimits

0xe240,	// (0x00058555) graphic2_pages_pane

0xe286,	// (0x0005859b) grid_graphic2_control_pane_ParamLimits

0xe286,	// (0x0005859b) grid_graphic2_control_pane

0xe2c4,	// (0x000585d9) grid_graphic2_pane_ParamLimits

0xe2c4,	// (0x000585d9) grid_graphic2_pane

0xe338,	// (0x0005864d) cell_graphic2_pane

0x4ab6,	// (0x0004edcb) main_comp_mode_pane

0xd44f,	// (0x00057764) list_ai3_gene_pane_ParamLimits

0xd820,	// (0x00057b35) bg_popup_window_pane_cp19_ParamLimits

0xd82c,	// (0x00057b41) bg_touch_area_indi_pane_ParamLimits

0xd82c,	// (0x00057b41) bg_touch_area_indi_pane

0xd842,	// (0x00057b57) bg_touch_area_indi_pane_cp01_ParamLimits

0xd842,	// (0x00057b57) bg_touch_area_indi_pane_cp01

0xd858,	// (0x00057b6d) bg_touch_area_indi_pane_cp02_ParamLimits

0xd858,	// (0x00057b6d) bg_touch_area_indi_pane_cp02

0xd870,	// (0x00057b85) bg_touch_area_indi_pane_cp03_ParamLimits

0xd870,	// (0x00057b85) bg_touch_area_indi_pane_cp03

0xd88a,	// (0x00057b9f) popup_slider_window_g1_ParamLimits

0xd8a6,	// (0x00057bbb) popup_slider_window_g2_ParamLimits

0xd8c2,	// (0x00057bd7) popup_slider_window_g3_ParamLimits

0xfcfb,	// (0x0005a010) popup_slider_window_g_ParamLimits

0xd91e,	// (0x00057c33) popup_slider_window_t1_ParamLimits

0xd992,	// (0x00057ca7) small_volume_slider_vertical_pane_ParamLimits

0xe338,	// (0x0005864d) cell_graphic2_pane_ParamLimits

0xe386,	// (0x0005869b) bg_button_pane_cp10_ParamLimits

0xe386,	// (0x0005869b) bg_button_pane_cp10

0xe399,	// (0x000586ae) bg_button_pane_cp11_ParamLimits

0xe399,	// (0x000586ae) bg_button_pane_cp11

0xe3ac,	// (0x000586c1) graphic2_pages_pane_g1_ParamLimits

0xe3ac,	// (0x000586c1) graphic2_pages_pane_g1

0xe3c7,	// (0x000586dc) graphic2_pages_pane_g2_ParamLimits

0xe3c7,	// (0x000586dc) graphic2_pages_pane_g2

0x0001,

0xfdbf,	// (0x0005a0d4) graphic2_pages_pane_g_ParamLimits

0xfdbf,	// (0x0005a0d4) graphic2_pages_pane_g

0xe3df,	// (0x000586f4) graphic2_pages_pane_t1_ParamLimits

0xe3df,	// (0x000586f4) graphic2_pages_pane_t1

0xe3f5,	// (0x0005870a) cell_graphic2_control_pane_ParamLimits

0xe3f5,	// (0x0005870a) cell_graphic2_control_pane

0xe416,	// (0x0005872b) cell_graphic2_pane_g1_ParamLimits

0xe416,	// (0x0005872b) cell_graphic2_pane_g1

0xe423,	// (0x00058738) cell_graphic2_pane_g2_ParamLimits

0xe423,	// (0x00058738) cell_graphic2_pane_g2

0xe430,	// (0x00058745) cell_graphic2_pane_g3_ParamLimits

0xe430,	// (0x00058745) cell_graphic2_pane_g3

0xe43d,	// (0x00058752) cell_graphic2_pane_g4_ParamLimits

0xe43d,	// (0x00058752) cell_graphic2_pane_g4

0xe44a,	// (0x0005875f) cell_graphic2_pane_g5_ParamLimits

0xe44a,	// (0x0005875f) cell_graphic2_pane_g5

0x0004,

0xfdc4,	// (0x0005a0d9) cell_graphic2_pane_g_ParamLimits

0xfdc4,	// (0x0005a0d9) cell_graphic2_pane_g

0xe465,	// (0x0005877a) cell_graphic2_pane_t1_ParamLimits

0xe465,	// (0x0005877a) cell_graphic2_pane_t1

0x9d4a,	// (0x0005405f) grid_highlight_pane_cp11_ParamLimits

0x9d4a,	// (0x0005405f) grid_highlight_pane_cp11

0x8255,	// (0x0005256a) bg_button_pane_cp05

0xe48e,	// (0x000587a3) cell_graphic2_control_pane_g1

0xc29d,	// (0x000565b2) bg_touch_area_indi_pane_g1

0xe4b6,	// (0x000587cb) aid_cmod_rocker_key_size

0xe4c0,	// (0x000587d5) aid_cmode_itu_key_size

0xe4ca,	// (0x000587df) main_cmode_video_pane

0xe4d4,	// (0x000587e9) main_comp_mode_itu_pane

0xe4e0,	// (0x000587f5) main_comp_mode_rocker_pane

0xe4ec,	// (0x00058801) cell_cmode_rocker_pane_ParamLimits

0xe4ec,	// (0x00058801) cell_cmode_rocker_pane

0xe4fe,	// (0x00058813) cell_cmode_itu_pane_ParamLimits

0xe4fe,	// (0x00058813) cell_cmode_itu_pane

0x8832,	// (0x00052b47) bg_button_pane_cp06_ParamLimits

0x8832,	// (0x00052b47) bg_button_pane_cp06

0xc50b,	// (0x00056820) cell_cmode_rocker_pane_g1_ParamLimits

0xc50b,	// (0x00056820) cell_cmode_rocker_pane_g1

0xda36,	// (0x00057d4b) cell_cmode_rocker_pane_g2_ParamLimits

0xda36,	// (0x00057d4b) cell_cmode_rocker_pane_g2

0x0001,

0xfdd4,	// (0x0005a0e9) cell_cmode_rocker_pane_g_ParamLimits

0xfdd4,	// (0x0005a0e9) cell_cmode_rocker_pane_g

0x7ed8,	// (0x000521ed) bg_button_pane_cp07

0xe513,	// (0x00058828) cell_cmode_itu_pane_g1

0xe51c,	// (0x00058831) cell_cmode_itu_pane_t1

0xe52a,	// (0x0005883f) cell_cmode_itu_pane_t2

0x0001,

0xfdd9,	// (0x0005a0ee) cell_cmode_itu_pane_t

0xdc5d,	// (0x00057f72) aid_touch_ctrl_left

0xdc65,	// (0x00057f7a) aid_touch_ctrl_right

0x7ed8,	// (0x000521ed) compa_mode_pane

0xe538,	// (0x0005884d) aid_cmod_rocker_key_size_cp

0xe542,	// (0x00058857) aid_cmode_itu_key_size_cp

0xe54c,	// (0x00058861) compa_mode_pane_g1

0xe554,	// (0x00058869) compa_mode_pane_g2

0xe55c,	// (0x00058871) compa_mode_pane_g3

0x0002,

0xfdde,	// (0x0005a0f3) compa_mode_pane_g

0xe564,	// (0x00058879) main_comp_mode_itu_pane_cp

0xe56c,	// (0x00058881) main_comp_mode_rocker_pane_cp

0xe574,	// (0x00058889) cell_cmode_itu_pane_cp_ParamLimits

0xe574,	// (0x00058889) cell_cmode_itu_pane_cp

0xe589,	// (0x0005889e) cell_cmode_rocker_pane_cp_ParamLimits

0xe589,	// (0x0005889e) cell_cmode_rocker_pane_cp

0x8832,	// (0x00052b47) bg_button_pane_cp06_cp_ParamLimits

0x8832,	// (0x00052b47) bg_button_pane_cp06_cp

0xc50b,	// (0x00056820) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc50b,	// (0x00056820) cell_cmode_rocker_pane_g1_cp

0xc29d,	// (0x000565b2) cell_cmode_rocker_pane_g2_cp

0x7ed8,	// (0x000521ed) bg_button_pane_cp07_cp

0xe59b,	// (0x000588b0) cell_cmode_itu_pane_g1_cp

0xe5a4,	// (0x000588b9) cell_cmode_itu_pane_t1_cp

0xe5a4,	// (0x000588b9) cell_cmode_itu_pane_t2_cp

0xb20f,	// (0x00055524) settings_code_pane_cp2

0x7fcc,	// (0x000522e1) bg_popup_window_pane_cp3_ParamLimits

0x8423,	// (0x00052738) heading_pane_cp3_ParamLimits

0x842f,	// (0x00052744) listscroll_popup_graphic_pane_ParamLimits

0x6568,	// (0x0005087d) fep_hwr_aid_pane_ParamLimits

0x69df,	// (0x00050cf4) aid_touch_sctrl_top_ParamLimits

0x69fa,	// (0x00050d0f) sctrl_sk_top_pane_g1_ParamLimits

0x67bf,	// (0x00050ad4) sctrl_sk_top_pane_g2_ParamLimits

0xfd14,	// (0x0005a029) sctrl_sk_top_pane_g_ParamLimits

0x6a07,	// (0x00050d1c) sctrl_sk_top_pane_t1_ParamLimits

0x69df,	// (0x00050cf4) aid_touch_sctrl_bottom_ParamLimits

0x6a07,	// (0x00050d1c) sctrl_sk_bottom_pane_t1_ParamLimits

0xdba6,	// (0x00057ebb) aid_area_touch_clock

0x6bf0,	// (0x00050f05) aid_vkb2_area_top_pane_cell_ParamLimits

0x6bf0,	// (0x00050f05) aid_vkb2_area_top_pane_cell

0x6d3b,	// (0x00051050) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6d3b,	// (0x00051050) aid_vkb2_area_bottom_pane_cell

0xe133,	// (0x00058448) popup_char_count_window

0xe5b2,	// (0x000588c7) popup_char_count_window_g1

0xe5bb,	// (0x000588d0) popup_char_count_window_g2

0xe5c4,	// (0x000588d9) popup_char_count_window_g3

0x0002,

0xfde5,	// (0x0005a0fa) popup_char_count_window_g

0xe5cd,	// (0x000588e2) popup_char_count_window_t1

0x6ab6,	// (0x00050dcb) popup_fep_char_preview_window_ParamLimits

0x6ab6,	// (0x00050dcb) popup_fep_char_preview_window

0x6c0e,	// (0x00050f23) vkb2_top_candi_pane_ParamLimits

0x6c0e,	// (0x00050f23) vkb2_top_candi_pane

0xe5db,	// (0x000588f0) cell_vkb2_top_candi_pane_ParamLimits

0xe5db,	// (0x000588f0) cell_vkb2_top_candi_pane

0x7022,	// (0x00051337) bg_popup_fep_char_preview_window_ParamLimits

0x7022,	// (0x00051337) bg_popup_fep_char_preview_window

0x7030,	// (0x00051345) popup_fep_char_preview_window_t1_ParamLimits

0x7030,	// (0x00051345) popup_fep_char_preview_window_t1

0xe628,	// (0x0005893d) bg_popup_fep_char_preview_window_g1

0xe630,	// (0x00058945) bg_popup_fep_char_preview_window_g2

0xe638,	// (0x0005894d) bg_popup_fep_char_preview_window_g3

0xe640,	// (0x00058955) bg_popup_fep_char_preview_window_g4

0xe648,	// (0x0005895d) bg_popup_fep_char_preview_window_g5

0x706a,	// (0x0005137f) bg_popup_fep_char_preview_window_g6

0xe650,	// (0x00058965) bg_popup_fep_char_preview_window_g7

0xe658,	// (0x0005896d) bg_popup_fep_char_preview_window_g8

0xe660,	// (0x00058975) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdec,	// (0x0005a101) bg_popup_fep_char_preview_window_g

0x67bf,	// (0x00050ad4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x67bf,	// (0x00050ad4) cell_vkb2_top_candi_pane_g1

0x67cd,	// (0x00050ae2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x67cd,	// (0x00050ae2) cell_vkb2_top_candi_pane_g2

0xdd86,	// (0x0005809b) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdd86,	// (0x0005809b) cell_vkb2_top_candi_pane_g3

0x7072,	// (0x00051387) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7072,	// (0x00051387) cell_vkb2_top_candi_pane_g4

0xc9d7,	// (0x00056cec) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9d7,	// (0x00056cec) cell_vkb2_top_candi_pane_g5

0x7093,	// (0x000513a8) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7093,	// (0x000513a8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdff,	// (0x0005a114) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdff,	// (0x0005a114) cell_vkb2_top_candi_pane_g

0x70a1,	// (0x000513b6) cell_vkb2_top_candi_pane_t1

0x63a4,	// (0x000506b9) aid_size_touch_slider_mark_ParamLimits

0x63a4,	// (0x000506b9) aid_size_touch_slider_mark

0xe276,	// (0x0005858b) grid_graphic2_catg_pane_ParamLimits

0xe276,	// (0x0005858b) grid_graphic2_catg_pane

0xe314,	// (0x00058629) popup_grid_graphic2_window_t1_ParamLimits

0xe314,	// (0x00058629) popup_grid_graphic2_window_t1

0xe326,	// (0x0005863b) popup_grid_graphic2_window_t2_ParamLimits

0xe326,	// (0x0005863b) popup_grid_graphic2_window_t2

0x0001,

0xfdba,	// (0x0005a0cf) popup_grid_graphic2_window_t_ParamLimits

0xfdba,	// (0x0005a0cf) popup_grid_graphic2_window_t

0x8255,	// (0x0005256a) bg_button_pane_cp05_ParamLimits

0xe48e,	// (0x000587a3) cell_graphic2_control_pane_g1_ParamLimits

0xe668,	// (0x0005897d) cell_graphic2_catg_pane_ParamLimits

0xe668,	// (0x0005897d) cell_graphic2_catg_pane

0x7ed8,	// (0x000521ed) bg_button_pane_cp12

0xe67a,	// (0x0005898f) cell_graphic2_catg_pane_g1

0xdb72,	// (0x00057e87) cell_tb_ext_pane_t1_ParamLimits

0x6e58,	// (0x0005116d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6e58,	// (0x0005116d) vkb2_top_cell_right_narrow_pane

0x6e70,	// (0x00051185) vkb2_top_cell_right_wide_pane_ParamLimits

0x6e70,	// (0x00051185) vkb2_top_cell_right_wide_pane

0x655a,	// (0x0005086f) bg_vkb2_func_pane_ParamLimits

0x655a,	// (0x0005086f) bg_vkb2_func_pane

0x6ee1,	// (0x000511f6) vkb2_top_cell_left_pane_g1_ParamLimits

0x655a,	// (0x0005086f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x655a,	// (0x0005086f) bg_vkb2_fuc_pane_cp03

0x6f3f,	// (0x00051254) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9cde,	// (0x00053ff3) bg_vkb2_func_pane_g1

0x9ce6,	// (0x00053ffb) bg_vkb2_func_pane_g2

0x9cf6,	// (0x0005400b) bg_vkb2_func_pane_g3

0x9cee,	// (0x00054003) bg_vkb2_func_pane_g4

0x9cfe,	// (0x00054013) bg_vkb2_func_pane_g5

0x9d06,	// (0x0005401b) bg_vkb2_func_pane_g6

0x9d0e,	// (0x00054023) bg_vkb2_func_pane_g7

0x9d16,	// (0x0005402b) bg_vkb2_func_pane_g8

0x9cd6,	// (0x00053feb) bg_vkb2_func_pane_g9

0x0008,

0xfe0c,	// (0x0005a121) bg_vkb2_func_pane_g

0x655a,	// (0x0005086f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x655a,	// (0x0005086f) bg_vkb2_fuc_pane_cp01

0x6ee1,	// (0x000511f6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6ee1,	// (0x000511f6) vkb2_top_cell_right_wide_pane_g1

0x655a,	// (0x0005086f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x655a,	// (0x0005086f) bg_vkb2_fuc_pane_cp02

0x6f3f,	// (0x00051254) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6f3f,	// (0x00051254) vkb2_top_cell_right_narrow_pane_g1

0xd79e,	// (0x00057ab3) aid_touch_area_decrease_ParamLimits

0xd79e,	// (0x00057ab3) aid_touch_area_decrease

0xd7c2,	// (0x00057ad7) aid_touch_area_increase_ParamLimits

0xd7c2,	// (0x00057ad7) aid_touch_area_increase

0xd7ce,	// (0x00057ae3) aid_touch_area_mute_ParamLimits

0xd7ce,	// (0x00057ae3) aid_touch_area_mute

0xd7f2,	// (0x00057b07) aid_touch_area_slider_ParamLimits

0xd7f2,	// (0x00057b07) aid_touch_area_slider

0xd8de,	// (0x00057bf3) popup_slider_window_g4_ParamLimits

0xd8de,	// (0x00057bf3) popup_slider_window_g4

0xd8ea,	// (0x00057bff) popup_slider_window_g5_ParamLimits

0xd8ea,	// (0x00057bff) popup_slider_window_g5

0xd90c,	// (0x00057c21) popup_slider_window_g6_ParamLimits

0xd90c,	// (0x00057c21) popup_slider_window_g6

0xd94c,	// (0x00057c61) popup_slider_window_t2_ParamLimits

0xd94c,	// (0x00057c61) popup_slider_window_t2

0x0001,

0xfd08,	// (0x0005a01d) popup_slider_window_t_ParamLimits

0xfd08,	// (0x0005a01d) popup_slider_window_t

0xd964,	// (0x00057c79) slider_pane_ParamLimits

0xd964,	// (0x00057c79) slider_pane

0xe683,	// (0x00058998) slider_pane_g1_ParamLimits

0xe683,	// (0x00058998) slider_pane_g1

0xe697,	// (0x000589ac) slider_pane_g2_ParamLimits

0xe697,	// (0x000589ac) slider_pane_g2

0xe6ad,	// (0x000589c2) slider_pane_g3_ParamLimits

0xe6ad,	// (0x000589c2) slider_pane_g3

0x0003,

0x0038,	// (0x0004a34d) slider_pane_g_ParamLimits

0x0038,	// (0x0004a34d) slider_pane_g

0x5f9d,	// (0x000502b2) popup_tb_float_extension_window_ParamLimits

0x5f9d,	// (0x000502b2) popup_tb_float_extension_window

0xe6d9,	// (0x000589ee) aid_size_cell_tb_float_ext

0x7ed8,	// (0x000521ed) bg_popup_sub_window_cp28

0xe6e5,	// (0x000589fa) grid_tb_float_ext_pane

0xe6ef,	// (0x00058a04) cell_tb_float_ext_pane_ParamLimits

0xe6ef,	// (0x00058a04) cell_tb_float_ext_pane

0xe709,	// (0x00058a1e) cell_tb_float_ext_pane_g1

0xe712,	// (0x00058a27) grid_highlight_pane_cp12

0x66a9,	// (0x000509be) cell_last_hwr_side_pane_ParamLimits

0x66a9,	// (0x000509be) cell_last_hwr_side_pane

0xc29d,	// (0x000565b2) cell_last_hwr_side_pane_g1

0xe71b,	// (0x00058a30) cell_last_hwr_side_pane_g2

0x0001,

0x0041,	// (0x0004a356) cell_last_hwr_side_pane_g

0x6e07,	// (0x0005111c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6e07,	// (0x0005111c) vkb2_area_bottom_space_btn_pane

0x67bf,	// (0x00050ad4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1e8,	// (0x000584fd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x70a1,	// (0x000513b6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x70c0,	// (0x000513d5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x70c0,	// (0x000513d5) vkb2_area_bottom_space_btn_pane_g1

0x70fa,	// (0x0005140f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x70fa,	// (0x0005140f) vkb2_area_bottom_space_btn_pane_g2

0x7130,	// (0x00051445) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7130,	// (0x00051445) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0005a134) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0005a134) vkb2_area_bottom_space_btn_pane_g

0x661d,	// (0x00050932) cel_fep_hwr_func_pane_ParamLimits

0x661d,	// (0x00050932) cel_fep_hwr_func_pane

0x6659,	// (0x0005096e) cell_hwr_side_button_pane_ParamLimits

0x6659,	// (0x0005096e) cell_hwr_side_button_pane

0xdba6,	// (0x00057ebb) aid_area_touch_clock_ParamLimits

0x8255,	// (0x0005256a) bg_uniindi_top_pane_ParamLimits

0xdbb8,	// (0x00057ecd) uniindi_top_pane_g1_ParamLimits

0xdbce,	// (0x00057ee3) uniindi_top_pane_g2_ParamLimits

0xdbda,	// (0x00057eef) uniindi_top_pane_g3_ParamLimits

0xdbeb,	// (0x00057f00) uniindi_top_pane_g4_ParamLimits

0xfd40,	// (0x0005a055) uniindi_top_pane_g_ParamLimits

0xdbf8,	// (0x00057f0d) uniindi_top_pane_t1_ParamLimits

0x8255,	// (0x0005256a) bg_vkb2_func_pane_cp01_ParamLimits

0x8255,	// (0x0005256a) bg_vkb2_func_pane_cp01

0xe724,	// (0x00058a39) cel_fep_hwr_func_pane_g1_ParamLimits

0xe724,	// (0x00058a39) cel_fep_hwr_func_pane_g1

0x8255,	// (0x0005256a) bg_vkb2_func_pane_cp02_ParamLimits

0x8255,	// (0x0005256a) bg_vkb2_func_pane_cp02

0xe724,	// (0x00058a39) cell_hwr_side_button_pane_g1_ParamLimits

0xe724,	// (0x00058a39) cell_hwr_side_button_pane_g1

0x9b57,	// (0x00053e6c) status_pane_g4_ParamLimits

0x9b57,	// (0x00053e6c) status_pane_g4

0x9b71,	// (0x00053e86) status_pane_t1

0xbfb7,	// (0x000562cc) form2_midp_gauge_slider_cont_pane

0xbfbf,	// (0x000562d4) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfd1,	// (0x000562e6) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfe3,	// (0x000562f8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x00059e15) form2_midp_gauge_slider_pane_t_ParamLimits

0xbff5,	// (0x0005630a) form2_midp_slider_pane_ParamLimits

0x6a76,	// (0x00050d8b) aid_size_cell_func_vkb2_ParamLimits

0x6a76,	// (0x00050d8b) aid_size_cell_func_vkb2

0xe6c5,	// (0x000589da) slider_pane_g4_ParamLimits

0xe6c5,	// (0x000589da) slider_pane_g4

0x717a,	// (0x0005148f) form2_midp_gauge_slider_pane_t2_cp01

0x7188,	// (0x0005149d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7188,	// (0x0005149d) form2_midp_gauge_slider_pane_t3_cp01

0x71a5,	// (0x000514ba) form2_midp_slider_pane_cp01

0x7ed8,	// (0x000521ed) navi_smil_pane

0xe75d,	// (0x00058a72) navi_smil_pane_g1

0xe765,	// (0x00058a7a) navi_smil_pane_t1

0xe732,	// (0x00058a47) form2_midp_slider_pane_g1

0xe73b,	// (0x00058a50) form2_midp_slider_pane_g2

0xe743,	// (0x00058a58) form2_midp_slider_pane_g3

0xe732,	// (0x00058a47) form2_midp_slider_pane_g4

0xe74b,	// (0x00058a60) form2_midp_slider_pane_g5

0x0004,

0x004f,	// (0x0004a364) form2_midp_slider_pane_g

0x716a,	// (0x0005147f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x716a,	// (0x0005147f) vkb2_area_bottom_space_btn_pane_g4

0x998e,	// (0x00053ca3) lc0_navi_pane_ParamLimits

0x998e,	// (0x00053ca3) lc0_navi_pane

0x9a04,	// (0x00053d19) lc0_stat_indi_pane_ParamLimits

0x9a04,	// (0x00053d19) lc0_stat_indi_pane

0x9a1b,	// (0x00053d30) ls0_title_pane_ParamLimits

0x9a1b,	// (0x00053d30) ls0_title_pane

0x8832,	// (0x00052b47) bg_popup_sub_pane_cp14_ParamLimits

0xdb8d,	// (0x00057ea2) list_uniindi_pane_ParamLimits

0xdb99,	// (0x00057eae) uniindi_top_pane_ParamLimits

0xdc35,	// (0x00057f4a) list_single_uniindi_pane_g1_ParamLimits

0xdc48,	// (0x00057f5d) list_single_uniindi_pane_t1_ParamLimits

0x71ae,	// (0x000514c3) lc0_stat_clock_pane_ParamLimits

0x71ae,	// (0x000514c3) lc0_stat_clock_pane

0xe773,	// (0x00058a88) lc0_stat_indi_pane_g1_ParamLimits

0xe773,	// (0x00058a88) lc0_stat_indi_pane_g1

0xe780,	// (0x00058a95) lc0_stat_indi_pane_g2_ParamLimits

0xe780,	// (0x00058a95) lc0_stat_indi_pane_g2

0x0001,

0x005a,	// (0x0004a36f) lc0_stat_indi_pane_g_ParamLimits

0x005a,	// (0x0004a36f) lc0_stat_indi_pane_g

0x71bb,	// (0x000514d0) lc0_uni_indicator_pane_ParamLimits

0x71bb,	// (0x000514d0) lc0_uni_indicator_pane

0xe78d,	// (0x00058aa2) ls0_title_pane_g1_ParamLimits

0xe78d,	// (0x00058aa2) ls0_title_pane_g1

0xe7a1,	// (0x00058ab6) ls0_title_pane_t1_ParamLimits

0xe7a1,	// (0x00058ab6) ls0_title_pane_t1

0x71c8,	// (0x000514dd) lc0_uni_indicator_pane_g1_ParamLimits

0x71c8,	// (0x000514dd) lc0_uni_indicator_pane_g1

0xe7d7,	// (0x00058aec) lc0_stat_clock_pane_t1

0x4ab6,	// (0x0004edcb) main_ai5_pane

0xe7e5,	// (0x00058afa) ai5_sk_pane_ParamLimits

0xe7e5,	// (0x00058afa) ai5_sk_pane

0xe7f2,	// (0x00058b07) cell_ai5_widget_pane_ParamLimits

0xe7f2,	// (0x00058b07) cell_ai5_widget_pane

0xe8bc,	// (0x00058bd1) aid_size_cell_widget_grid

0xe8d2,	// (0x00058be7) bg_ai5_widget_pane_ParamLimits

0xe8d2,	// (0x00058be7) bg_ai5_widget_pane

0xe946,	// (0x00058c5b) cell_ai5_widget_pane_g2

0xe956,	// (0x00058c6b) cell_ai5_widget_pane_g3

0xe96d,	// (0x00058c82) cell_ai5_widget_pane_g4

0xe979,	// (0x00058c8e) cell_ai5_widget_pane_g5

0xe985,	// (0x00058c9a) cell_ai5_widget_pane_g6

0xe991,	// (0x00058ca6) cell_ai5_widget_pane_g7

0xe9d9,	// (0x00058cee) cell_ai5_widget_pane_t1_ParamLimits

0xe9d9,	// (0x00058cee) cell_ai5_widget_pane_t1

0xe9f6,	// (0x00058d0b) cell_ai5_widget_pane_t2_ParamLimits

0xe9f6,	// (0x00058d0b) cell_ai5_widget_pane_t2

0xea0e,	// (0x00058d23) cell_ai5_widget_pane_t3_ParamLimits

0xea0e,	// (0x00058d23) cell_ai5_widget_pane_t3

0xea26,	// (0x00058d3b) cell_ai5_widget_pane_t4_ParamLimits

0xea26,	// (0x00058d3b) cell_ai5_widget_pane_t4

0xea43,	// (0x00058d58) cell_ai5_widget_pane_t5_ParamLimits

0xea43,	// (0x00058d58) cell_ai5_widget_pane_t5

0xea62,	// (0x00058d77) cell_ai5_widget_pane_t6_ParamLimits

0xea62,	// (0x00058d77) cell_ai5_widget_pane_t6

0xea74,	// (0x00058d89) cell_ai5_widget_pane_t7_ParamLimits

0xea74,	// (0x00058d89) cell_ai5_widget_pane_t7

0xea8d,	// (0x00058da2) cell_ai5_widget_pane_t8_ParamLimits

0xea8d,	// (0x00058da2) cell_ai5_widget_pane_t8

0x0009,

0xfe3d,	// (0x0005a152) cell_ai5_widget_pane_t_ParamLimits

0xfe3d,	// (0x0005a152) cell_ai5_widget_pane_t

0xeae1,	// (0x00058df6) grid_ai5_widget_pane

0x8832,	// (0x00052b47) highlight_cell_ai5_widget_pane_ParamLimits

0x8832,	// (0x00052b47) highlight_cell_ai5_widget_pane

0xeaf9,	// (0x00058e0e) ai5_sk_left_pane

0xeb03,	// (0x00058e18) ai5_sk_middle_pane

0xeb0d,	// (0x00058e22) ai5_sk_right_pane

0xeb17,	// (0x00058e2c) bg_ai5_widget_pane_g1_ParamLimits

0xeb17,	// (0x00058e2c) bg_ai5_widget_pane_g1

0xeb23,	// (0x00058e38) bg_ai5_widget_pane_g2_ParamLimits

0xeb23,	// (0x00058e38) bg_ai5_widget_pane_g2

0xeb2f,	// (0x00058e44) bg_ai5_widget_pane_g3_ParamLimits

0xeb2f,	// (0x00058e44) bg_ai5_widget_pane_g3

0xeb3b,	// (0x00058e50) bg_ai5_widget_pane_g4_ParamLimits

0xeb3b,	// (0x00058e50) bg_ai5_widget_pane_g4

0xeb47,	// (0x00058e5c) bg_ai5_widget_pane_g5_ParamLimits

0xeb47,	// (0x00058e5c) bg_ai5_widget_pane_g5

0xeb53,	// (0x00058e68) bg_ai5_widget_pane_g6_ParamLimits

0xeb53,	// (0x00058e68) bg_ai5_widget_pane_g6

0xeb5f,	// (0x00058e74) bg_ai5_widget_pane_g7_ParamLimits

0xeb5f,	// (0x00058e74) bg_ai5_widget_pane_g7

0xeb6b,	// (0x00058e80) bg_ai5_widget_pane_g8_ParamLimits

0xeb6b,	// (0x00058e80) bg_ai5_widget_pane_g8

0xeb77,	// (0x00058e8c) bg_ai5_widget_pane_g9_ParamLimits

0xeb77,	// (0x00058e8c) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x0005a167) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x0005a167) bg_ai5_widget_pane_g

0xeba9,	// (0x00058ebe) cell_shortcut_ai5_widget_pane_ParamLimits

0xeba9,	// (0x00058ebe) cell_shortcut_ai5_widget_pane

0x949e,	// (0x000537b3) bg_cell_shortcut_ai5_widget_pane

0xebba,	// (0x00058ecf) cell_grid_ai5_widget_pane_g1

0x949e,	// (0x000537b3) highlight_cell_shortcut_ai5_widget_pane

0x9cde,	// (0x00053ff3) ai5_sk_left_pane_g1

0xebc3,	// (0x00058ed8) ai5_sk_left_pane_g2

0xebcb,	// (0x00058ee0) ai5_sk_left_pane_g3

0xebd3,	// (0x00058ee8) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x0005a17a) ai5_sk_left_pane_g

0xebdb,	// (0x00058ef0) ai5_sk_left_pane_t1

0x9ce6,	// (0x00053ffb) ai5_sk_right_pane_g1

0xebe9,	// (0x00058efe) ai5_sk_right_pane_g2

0xebf1,	// (0x00058f06) ai5_sk_right_pane_g3

0xebf9,	// (0x00058f0e) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x0005a183) ai5_sk_right_pane_g

0xec01,	// (0x00058f16) ai5_sk_right_pane_t1

0x9ce6,	// (0x00053ffb) ai5_sk_middle_pane_g1

0x9cde,	// (0x00053ff3) ai5_sk_middle_pane_g2

0x9cfe,	// (0x00054013) ai5_sk_middle_pane_g3

0xebf1,	// (0x00058f06) ai5_sk_middle_pane_g4

0xebcb,	// (0x00058ee0) ai5_sk_middle_pane_g5

0xec0f,	// (0x00058f24) ai5_sk_middle_pane_g6

0xec17,	// (0x00058f2c) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x0005a18c) ai5_sk_middle_pane_g

0x981e,	// (0x00053b33) aid_touch_area_size_lc0_ParamLimits

0x981e,	// (0x00053b33) aid_touch_area_size_lc0

0x67ee,	// (0x00050b03) cell_hwr_candidate_pane_t1_ParamLimits

0x983a,	// (0x00053b4f) aid_touch_navi_pane

0x9b09,	// (0x00053e1e) status_dt_navi_pane_ParamLimits

0x9b09,	// (0x00053e1e) status_dt_navi_pane

0x9b16,	// (0x00053e2b) status_dt_sta_pane_ParamLimits

0x9b16,	// (0x00053e2b) status_dt_sta_pane

0xec1f,	// (0x00058f34) dt_sta_controll_pane

0xec2c,	// (0x00058f41) dt_sta_indi_pane

0xec3d,	// (0x00058f52) dt_sta_title_pane

0x8255,	// (0x0005256a) bg_dt_sta_indi_pane_ParamLimits

0x8255,	// (0x0005256a) bg_dt_sta_indi_pane

0xec50,	// (0x00058f65) dt_sta_battery_pane

0xec58,	// (0x00058f6d) dt_sta_indi_pane_g1

0xec61,	// (0x00058f76) dt_sta_indi_pane_g2

0xec6a,	// (0x00058f7f) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x0005a19b) dt_sta_indi_pane_g

0xec73,	// (0x00058f88) dt_sta_signal_pane

0x8832,	// (0x00052b47) bg_dt_sta_title_pane_ParamLimits

0x8832,	// (0x00052b47) bg_dt_sta_title_pane

0xec7c,	// (0x00058f91) dt_sta_title_pane_g1

0xec84,	// (0x00058f99) dt_sta_title_pane_t1_ParamLimits

0xec84,	// (0x00058f99) dt_sta_title_pane_t1

0x7ed8,	// (0x000521ed) bg_dt_sta_control_pane

0xec99,	// (0x00058fae) dt_sta_controll_pane_g1

0xeca2,	// (0x00058fb7) bg_dt_sta_title_pane_g1

0xecab,	// (0x00058fc0) bg_dt_sta_title_pane_g2

0xecb4,	// (0x00058fc9) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x0005a1a2) bg_dt_sta_title_pane_g

0xc29d,	// (0x000565b2) bg_dt_sta_indi_pane_g1

0xecbd,	// (0x00058fd2) dt_sta_signal_pane_g1

0xecc5,	// (0x00058fda) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x0005a1a9) dt_sta_signal_pane_g

0xeccd,	// (0x00058fe2) dt_sta_battery_pane_g1

0xecd6,	// (0x00058feb) dt_sta_battery_pane_t1

0xc29d,	// (0x000565b2) bg_dt_sta_control_pane_g1

0x8f88,	// (0x0005329d) fep_china_uni_eep_pane

0x8f90,	// (0x000532a5) fep_china_uni_entry_pane_ParamLimits

0x8fa0,	// (0x000532b5) popup_fep_china_uni_window_g1_ParamLimits

0x8fb0,	// (0x000532c5) popup_fep_china_uni_window_g2_ParamLimits

0x8fb0,	// (0x000532c5) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00059a37) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00059a37) popup_fep_china_uni_window_g

0xece5,	// (0x00058ffa) fep_china_uni_eep_pane_g1

0xeced,	// (0x00059002) fep_china_uni_eep_pane_t1

0xe754,	// (0x00058a69) aid_touch_area_size_smil_player

0x9986,	// (0x00053c9b) lc0_clock_pane

0x9b65,	// (0x00053e7a) status_pane_g5_ParamLimits

0x9b65,	// (0x00053e7a) status_pane_g5

0x5c64,	// (0x0004ff79) popup_keymap_window

0x9b2b,	// (0x00053e40) status_icon_pane

0xe956,	// (0x00058c6b) cell_ai5_widget_pane_g3_ParamLimits

0xe96d,	// (0x00058c82) cell_ai5_widget_pane_g4_ParamLimits

0xe979,	// (0x00058c8e) cell_ai5_widget_pane_g5_ParamLimits

0xe99d,	// (0x00058cb2) cell_ai5_widget_pane_g8_ParamLimits

0xe99d,	// (0x00058cb2) cell_ai5_widget_pane_g8

0xe9b1,	// (0x00058cc6) cell_ai5_widget_pane_g9_ParamLimits

0xe9b1,	// (0x00058cc6) cell_ai5_widget_pane_g9

0xe9c5,	// (0x00058cda) cell_ai5_widget_pane_g10_ParamLimits

0xe9c5,	// (0x00058cda) cell_ai5_widget_pane_g10

0xecfc,	// (0x00059011) status_icon_pane_g1

0x7ed8,	// (0x000521ed) bg_popup_sub_pane_cp13

0xed04,	// (0x00059019) popup_keymap_window_t1

0x9763,	// (0x00053a78) control_pane_g6_ParamLimits

0x9763,	// (0x00053a78) control_pane_g6

0x9770,	// (0x00053a85) control_pane_g7_ParamLimits

0x9770,	// (0x00053a85) control_pane_g7

0x977d,	// (0x00053a92) control_pane_g8_ParamLimits

0x977d,	// (0x00053a92) control_pane_g8

0xec1f,	// (0x00058f34) dt_sta_controll_pane_ParamLimits

0xec2c,	// (0x00058f41) dt_sta_indi_pane_ParamLimits

0xec3d,	// (0x00058f52) dt_sta_title_pane_ParamLimits

0x875e,	// (0x00052a73) aid_size_touch_scroll_bar_cale

0x4b8f,	// (0x0004eea4) popup_discreet_window_ParamLimits

0x4b8f,	// (0x0004eea4) popup_discreet_window

0x4c09,	// (0x0004ef1e) popup_sk_window

0xa368,	// (0x0005467d) bg_popup_sub_pane_cp28_ParamLimits

0xa368,	// (0x0005467d) bg_popup_sub_pane_cp28

0xed12,	// (0x00059027) popup_discreet_window_g1_ParamLimits

0xed12,	// (0x00059027) popup_discreet_window_g1

0xed32,	// (0x00059047) popup_discreet_window_t1_ParamLimits

0xed32,	// (0x00059047) popup_discreet_window_t1

0xed50,	// (0x00059065) popup_discreet_window_t2_ParamLimits

0xed50,	// (0x00059065) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x0005a1ae) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x0005a1ae) popup_discreet_window_t

0x71dd,	// (0x000514f2) popup_sk_window_g1

0x71e7,	// (0x000514fc) popup_sk_window_g2

0x0001,

0xfea0,	// (0x0005a1b5) popup_sk_window_g

0x71f1,	// (0x00051506) popup_sk_window_t1

0x71ff,	// (0x00051514) popup_sk_window_t1_copy1

0xe946,	// (0x00058c5b) cell_ai5_widget_pane_g2_ParamLimits

0xea9f,	// (0x00058db4) cell_ai5_widget_pane_t9_ParamLimits

0xea9f,	// (0x00058db4) cell_ai5_widget_pane_t9

0x7ed8,	// (0x000521ed) main_fep_fshwr2_pane

0x720d,	// (0x00051522) aid_fshwr2_btn_pane

0x7219,	// (0x0005152e) aid_fshwr2_syb_pane

0x7225,	// (0x0005153a) aid_fshwr2_txt_pane

0x7231,	// (0x00051546) fshwr2_func_candi_pane

0x7246,	// (0x0005155b) fshwr2_hwr_syb_pane

0x7256,	// (0x0005156b) fshwr2_icf_pane

0x4ab6,	// (0x0004edcb) fshwr2_icf_bg_pane

0x727f,	// (0x00051594) fshwr2_icf_pane_t1_ParamLimits

0x727f,	// (0x00051594) fshwr2_icf_pane_t1

0x8e7a,	// (0x0005318f) fshwr2_func_candi_pane_g1

0xeda2,	// (0x000590b7) fshwr2_func_candi_row_pane_ParamLimits

0xeda2,	// (0x000590b7) fshwr2_func_candi_row_pane

0x7297,	// (0x000515ac) cell_fshwr2_syb_pane_ParamLimits

0x7297,	// (0x000515ac) cell_fshwr2_syb_pane

0x67bf,	// (0x00050ad4) fshwr2_hwr_syb_pane_g1_ParamLimits

0x67bf,	// (0x00050ad4) fshwr2_hwr_syb_pane_g1

0x4ab6,	// (0x0004edcb) bg_popup_call_pane_cp01

0x72ad,	// (0x000515c2) fshwr2_func_candi_cell_pane_ParamLimits

0x72ad,	// (0x000515c2) fshwr2_func_candi_cell_pane

0xa9e4,	// (0x00054cf9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa9e4,	// (0x00054cf9) fshwr2_func_candi_cell_bg_pane

0x72e2,	// (0x000515f7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x72e2,	// (0x000515f7) fshwr2_func_candi_cell_pane_g1

0x7302,	// (0x00051617) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7302,	// (0x00051617) fshwr2_func_candi_cell_pane_t1

0x4ab6,	// (0x0004edcb) bg_button_pane_cp08

0xb684,	// (0x00055999) cell_fshwr2_syb_bg_pane

0x7315,	// (0x0005162a) cell_fshwr2_syb_bg_pane_g1

0x731d,	// (0x00051632) cell_fshwr2_syb_bg_pane_t1

0x8832,	// (0x00052b47) main_tmo_pane

0xae7d,	// (0x00055192) uni_indicator_pane_g1_ParamLimits

0xae93,	// (0x000551a8) uni_indicator_pane_g2_ParamLimits

0xaea9,	// (0x000551be) uni_indicator_pane_g3_ParamLimits

0xaebe,	// (0x000551d3) uni_indicator_pane_g4_ParamLimits

0xaebe,	// (0x000551d3) uni_indicator_pane_g4

0xaed2,	// (0x000551e7) uni_indicator_pane_g5_ParamLimits

0xaed2,	// (0x000551e7) uni_indicator_pane_g5

0xaed2,	// (0x000551e7) uni_indicator_pane_g6_ParamLimits

0xaed2,	// (0x000551e7) uni_indicator_pane_g6

0xf921,	// (0x00059c36) uni_indicator_pane_g_ParamLimits

0xd780,	// (0x00057a95) popup_tmo_note_window_ParamLimits

0xd780,	// (0x00057a95) popup_tmo_note_window

0x6a58,	// (0x00050d6d) fshwr2_bg_pane

0x72f3,	// (0x00051608) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x72f3,	// (0x00051608) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x0005a1ba) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x0005a1ba) fshwr2_func_candi_cell_pane_g

0x67a7,	// (0x00050abc) bg_popup_window_pane_cp01

0x732c,	// (0x00051641) bg_popup_window_pane_g1_cp01

0xedb2,	// (0x000590c7) bg_popup_window_pane_cp22_ParamLimits

0xedb2,	// (0x000590c7) bg_popup_window_pane_cp22

0xedc0,	// (0x000590d5) listscroll_tmo_link_pane_ParamLimits

0xedc0,	// (0x000590d5) listscroll_tmo_link_pane

0xee00,	// (0x00059115) popup_tmo_note_window_g1_ParamLimits

0xee00,	// (0x00059115) popup_tmo_note_window_g1

0xee0d,	// (0x00059122) tmo_note_info_pane_ParamLimits

0xee0d,	// (0x00059122) tmo_note_info_pane

0xee27,	// (0x0005913c) list_tmo_note_info_pane_g1_ParamLimits

0xee27,	// (0x0005913c) list_tmo_note_info_pane_g1

0xee3e,	// (0x00059153) list_tmo_note_info_pane_g2_ParamLimits

0xee3e,	// (0x00059153) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x0005a1bf) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x0005a1bf) list_tmo_note_info_pane_g

0xee5a,	// (0x0005916f) list_tmo_note_info_text_pane_ParamLimits

0xee5a,	// (0x0005916f) list_tmo_note_info_text_pane

0xeedd,	// (0x000591f2) list_tmo_link_pane

0xeeea,	// (0x000591ff) scroll_pane_cp20

0xeef7,	// (0x0005920c) list_single_tmo_link_pane_ParamLimits

0xeef7,	// (0x0005920c) list_single_tmo_link_pane

0xef07,	// (0x0005921c) list_single_tmo_link_pane_t1

0xef15,	// (0x0005922a) list_tmo_note_info_text_pane_t1_ParamLimits

0xef15,	// (0x0005922a) list_tmo_note_info_text_pane_t1

0x88e0,	// (0x00052bf5) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88e0,	// (0x00052bf5) aid_size_touch_scroll_bar_cp01

0x5367,	// (0x0004f67c) aid_size_touch_slider_marker

0x4bf1,	// (0x0004ef06) popup_settings_window_ParamLimits

0x4bf1,	// (0x0004ef06) popup_settings_window

0x5af1,	// (0x0004fe06) popup_candi_list_indi_window

0x983a,	// (0x00053b4f) aid_touch_navi_pane_ParamLimits

0x69b3,	// (0x00050cc8) rs_clock_indi_pane

0x69bc,	// (0x00050cd1) sctrl_sk_bottom_pane_ParamLimits

0x69cd,	// (0x00050ce2) sctrl_sk_top_pane_ParamLimits

0x6ad0,	// (0x00050de5) popup_fep_tooltip_window

0xe8bc,	// (0x00058bd1) aid_size_cell_widget_grid_ParamLimits

0xe931,	// (0x00058c46) cell_ai5_widget_pane_g1_ParamLimits

0xe931,	// (0x00058c46) cell_ai5_widget_pane_g1

0xe985,	// (0x00058c9a) cell_ai5_widget_pane_g6_ParamLimits

0xe991,	// (0x00058ca6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe28,	// (0x0005a13d) cell_ai5_widget_pane_g_ParamLimits

0xfe28,	// (0x0005a13d) cell_ai5_widget_pane_g

0xeac3,	// (0x00058dd8) cell_ai5_widget_pane_t10_ParamLimits

0xeac3,	// (0x00058dd8) cell_ai5_widget_pane_t10

0xeae1,	// (0x00058df6) grid_ai5_widget_pane_ParamLimits

0xeb83,	// (0x00058e98) cell_contacts_ai5_widget_pane_ParamLimits

0xeb83,	// (0x00058e98) cell_contacts_ai5_widget_pane

0xed65,	// (0x0005907a) popup_discreet_window_t3_ParamLimits

0xed65,	// (0x0005907a) popup_discreet_window_t3

0x726b,	// (0x00051580) popup_fshwr2_char_preview_window_ParamLimits

0x726b,	// (0x00051580) popup_fshwr2_char_preview_window

0xee78,	// (0x0005918d) tmo_note_info_pane_t1

0xee8d,	// (0x000591a2) tmo_note_info_pane_t2

0xeea4,	// (0x000591b9) tmo_note_info_pane_t3

0xeeb9,	// (0x000591ce) tmo_note_info_pane_t4

0xeecb,	// (0x000591e0) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x0005a1c4) tmo_note_info_pane_t

0xeedd,	// (0x000591f2) list_tmo_link_pane_ParamLimits

0xeeea,	// (0x000591ff) scroll_pane_cp20_ParamLimits

0x4ab6,	// (0x0004edcb) bg_popup_fep_char_preview_window_cp01

0xef2e,	// (0x00059243) popup_fshwr2_char_preview_window_t1

0xef3c,	// (0x00059251) popup_candi_list_indi_window_g1

0xef45,	// (0x0005925a) bg_cell_contacts_ai5_widget_pane

0xef51,	// (0x00059266) cell_contacts_ai5_widget_pane_g1

0xef66,	// (0x0005927b) cell_contacts_ai5_widget_pane_g2

0xef72,	// (0x00059287) cell_contacts_ai5_widget_pane_g3

0x0002,

0x008a,	// (0x0004a39f) cell_contacts_ai5_widget_pane_g

0xef7e,	// (0x00059293) cell_contacts_ai5_widget_pane_t1

0x8832,	// (0x00052b47) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff5,	// (0x0005930a) settings_container_pane

0x949e,	// (0x000537b3) listscroll_set_pane_copy1

0xb973,	// (0x00055c88) scroll_pane_cp121_copy1

0xf001,	// (0x00059316) set_content_pane_copy1

0xf009,	// (0x0005931e) aid_height_set_list_copy1_ParamLimits

0xf009,	// (0x0005931e) aid_height_set_list_copy1

0xb0c5,	// (0x000553da) aid_size_parent_copy1_ParamLimits

0xb0c5,	// (0x000553da) aid_size_parent_copy1

0xf015,	// (0x0005932a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf015,	// (0x0005932a) button_value_adjust_pane_cp6_copy1

0x97d8,	// (0x00053aed) list_highlight_pane_cp2_copy1_ParamLimits

0x97d8,	// (0x00053aed) list_highlight_pane_cp2_copy1

0xf029,	// (0x0005933e) list_set_pane_copy1_ParamLimits

0xf029,	// (0x0005933e) list_set_pane_copy1

0xef90,	// (0x000592a5) main_pane_set_t1_copy1_ParamLimits

0xef90,	// (0x000592a5) main_pane_set_t1_copy1

0xefca,	// (0x000592df) main_pane_set_t2_copy1_ParamLimits

0xefca,	// (0x000592df) main_pane_set_t2_copy1

0xf0d6,	// (0x000593eb) main_pane_set_t3_copy1

0xf0e4,	// (0x000593f9) main_pane_set_t4_copy1

0xefe9,	// (0x000592fe) set_content_pane_g1_copy1_ParamLimits

0xefe9,	// (0x000592fe) set_content_pane_g1_copy1

0xf0f2,	// (0x00059407) setting_code_pane_copy1

0xf0fa,	// (0x0005940f) setting_slider_graphic_pane_copy1

0xf0fa,	// (0x0005940f) setting_slider_pane_copy1

0xf0fa,	// (0x0005940f) setting_text_pane_copy1

0xf0fa,	// (0x0005940f) setting_volume_pane_copy1

0xf0f2,	// (0x00059407) settings_code_pane_cp2_copy1

0xf102,	// (0x00059417) settings_code_pane_cp_copy1_ParamLimits

0xf102,	// (0x00059417) settings_code_pane_cp_copy1

0x7335,	// (0x0005164a) volume_set_pane_copy1

0xf116,	// (0x0005942b) volume_set_pane_g10_copy1

0xf11e,	// (0x00059433) volume_set_pane_g1_copy1

0xf126,	// (0x0005943b) volume_set_pane_g2_copy1

0xf12e,	// (0x00059443) volume_set_pane_g3_copy1

0xf136,	// (0x0005944b) volume_set_pane_g4_copy1

0xf13e,	// (0x00059453) volume_set_pane_g5_copy1

0xf146,	// (0x0005945b) volume_set_pane_g6_copy1

0xf14e,	// (0x00059463) volume_set_pane_g7_copy1

0xf156,	// (0x0005946b) volume_set_pane_g8_copy1

0xf15e,	// (0x00059473) volume_set_pane_g9_copy1

0x7fcc,	// (0x000522e1) bg_set_opt_pane_cp_copy1_ParamLimits

0x7fcc,	// (0x000522e1) bg_set_opt_pane_cp_copy1

0x733d,	// (0x00051652) setting_slider_pane_t1_copy1_ParamLimits

0x733d,	// (0x00051652) setting_slider_pane_t1_copy1

0x735b,	// (0x00051670) setting_slider_pane_t2_copy1_ParamLimits

0x735b,	// (0x00051670) setting_slider_pane_t2_copy1

0x7375,	// (0x0005168a) setting_slider_pane_t3_copy1_ParamLimits

0x7375,	// (0x0005168a) setting_slider_pane_t3_copy1

0x738d,	// (0x000516a2) slider_set_pane_copy1_ParamLimits

0x738d,	// (0x000516a2) slider_set_pane_copy1

0x8881,	// (0x00052b96) set_opt_bg_pane_g1_copy2

0x8889,	// (0x00052b9e) set_opt_bg_pane_g2_copy2

0xf166,	// (0x0005947b) set_opt_bg_pane_g3_copy2

0x8899,	// (0x00052bae) set_opt_bg_pane_g4_copy2

0x88a1,	// (0x00052bb6) set_opt_bg_pane_g5_copy2

0x88a9,	// (0x00052bbe) set_opt_bg_pane_g6_copy2

0xf170,	// (0x00059485) set_opt_bg_pane_g7_copy2

0xf178,	// (0x0005948d) set_opt_bg_pane_g8_copy2

0xf182,	// (0x00059497) set_opt_bg_pane_g9_copy2

0x73a3,	// (0x000516b8) aid_size_touch_slider_mark_copy1_ParamLimits

0x73a3,	// (0x000516b8) aid_size_touch_slider_mark_copy1

0xf18c,	// (0x000594a1) slider_set_pane_g1_copy1

0x73b7,	// (0x000516cc) slider_set_pane_g2_copy1

0x63c4,	// (0x000506d9) slider_set_pane_g3_copy1_ParamLimits

0x63c4,	// (0x000506d9) slider_set_pane_g3_copy1

0x63d8,	// (0x000506ed) slider_set_pane_g4_copy1_ParamLimits

0x63d8,	// (0x000506ed) slider_set_pane_g4_copy1

0x63f0,	// (0x00050705) slider_set_pane_g5_copy1_ParamLimits

0x63f0,	// (0x00050705) slider_set_pane_g5_copy1

0x63c4,	// (0x000506d9) slider_set_pane_g6_copy1_ParamLimits

0x63c4,	// (0x000506d9) slider_set_pane_g6_copy1

0x73bf,	// (0x000516d4) slider_set_pane_g7_copy1_ParamLimits

0x73bf,	// (0x000516d4) slider_set_pane_g7_copy1

0x7eec,	// (0x00052201) bg_set_opt_pane_cp2_copy1

0xf195,	// (0x000594aa) setting_slider_graphic_pane_g1_copy1

0xf19e,	// (0x000594b3) setting_slider_graphic_pane_t1_copy1

0xf1ae,	// (0x000594c3) setting_slider_graphic_pane_t2_copy1

0xf1be,	// (0x000594d3) slider_set_pane_cp_copy1

0xf1ce,	// (0x000594e3) input_focus_pane_cp1_copy1

0xf1d7,	// (0x000594ec) list_set_text_pane_copy1

0xf1df,	// (0x000594f4) setting_text_pane_g1_copy1

0x7e99,	// (0x000521ae) set_text_pane_t1_copy1

0xf1ce,	// (0x000594e3) input_focus_pane_cp2_copy1

0xf1df,	// (0x000594f4) setting_code_pane_g1_copy1

0xf1e8,	// (0x000594fd) setting_code_pane_t1_copy1

0xf1f6,	// (0x0005950b) list_set_graphic_pane_copy1

0x7eec,	// (0x00052201) bg_set_opt_pane_cp4_copy1

0x919d,	// (0x000534b2) list_set_graphic_pane_g1_copy1_ParamLimits

0x919d,	// (0x000534b2) list_set_graphic_pane_g1_copy1

0xf20a,	// (0x0005951f) list_set_graphic_pane_g2_copy1

0x91b5,	// (0x000534ca) list_set_graphic_pane_t1_copy1_ParamLimits

0x91b5,	// (0x000534ca) list_set_graphic_pane_t1_copy1

0xc29d,	// (0x000565b2) rs_clock_indi_pane_g1

0xf212,	// (0x00059527) rs_clock_indi_pane_t1

0xf220,	// (0x00059535) rs_indi_pane

0xf228,	// (0x0005953d) rs_indi_pane_g1

0xf231,	// (0x00059546) rs_indi_pane_g2

0xf23a,	// (0x0005954f) rs_indi_pane_g3

0x0002,

0xfeba,	// (0x0005a1cf) rs_indi_pane_g

0x949e,	// (0x000537b3) bg_popup_preview_window_pane_cp03

0xf243,	// (0x00059558) popup_fep_tooltip_window_t1

0xcf19,	// (0x0005722e) popup_note2_window_g2_ParamLimits

0xcf19,	// (0x0005722e) popup_note2_window_g2

0x0001,

0xfc78,	// (0x00059f8d) popup_note2_window_g_ParamLimits

0xfc78,	// (0x00059f8d) popup_note2_window_g

0xd415,	// (0x0005772a) bg_popup_sub_pane_cp11_ParamLimits

0xd422,	// (0x00057737) cell_ai3_links_pane_g1_ParamLimits

0xd439,	// (0x0005774e) cell_ai3_links_pane_t1

0x7e99,	// (0x000521ae) set_text_pane_t1_copy1_ParamLimits

0x93af,	// (0x000536c4) cell_graphic_popup_pane_cp2_ParamLimits

0x93af,	// (0x000536c4) cell_graphic_popup_pane_cp2

0xf251,	// (0x00059566) cell_graphic_popup_pane_g1_cp2

0x8571,	// (0x00052886) cell_graphic_popup_pane_g2_cp2

0xf259,	// (0x0005956e) cell_graphic_popup_pane_g3_cp2

0xf261,	// (0x00059576) cell_graphic_popup_pane_t2_cp2

0x8582,	// (0x00052897) grid_highlight_pane_cp3_cp2

0x8bc1,	// (0x00052ed6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8832,	// (0x00052b47) main_tmo_pane_ParamLimits

0xd774,	// (0x00057a89) popup_tmo_big_image_note_window

0xe920,	// (0x00058c35) cell_ai5_widget_list_pane

0xe928,	// (0x00058c3d) cell_ai5_widget_lrg_icon_pane

0xee78,	// (0x0005918d) tmo_note_info_pane_t1_ParamLimits

0xee8d,	// (0x000591a2) tmo_note_info_pane_t2_ParamLimits

0xeea4,	// (0x000591b9) tmo_note_info_pane_t3_ParamLimits

0xeeb9,	// (0x000591ce) tmo_note_info_pane_t4_ParamLimits

0xeecb,	// (0x000591e0) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x0005a1c4) tmo_note_info_pane_t_ParamLimits

0xeff5,	// (0x0005930a) settings_container_pane_ParamLimits

0xf1c6,	// (0x000594db) indicator_popup_pane_cp5

0xf1c6,	// (0x000594db) indicator_popup_pane_cp6

0xf1f6,	// (0x0005950b) list_set_graphic_pane_copy1_ParamLimits

0x7ed8,	// (0x000521ed) bg_popup_window_pane_cp23

0xf26f,	// (0x00059584) popup_tmo_big_image_note_window_g1

0xf278,	// (0x0005958d) popup_tmo_big_image_note_window_t1

0xf288,	// (0x0005959d) popup_tmo_big_image_note_window_t2

0xf298,	// (0x000595ad) popup_tmo_big_image_note_window_t3

0x0002,

0xfec1,	// (0x0005a1d6) popup_tmo_big_image_note_window_t

0xc29d,	// (0x000565b2) cell_ai5_widget_lrg_icon_pane_g1

0xf2a8,	// (0x000595bd) cell_ai5_widget_lrg_icon_pane_t1

0xf2b6,	// (0x000595cb) cell_ai5_widget_list_row_pane_ParamLimits

0xf2b6,	// (0x000595cb) cell_ai5_widget_list_row_pane

0xf2cd,	// (0x000595e2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2cd,	// (0x000595e2) cell_ai5_widget_list_row_pane_g1

0xf2da,	// (0x000595ef) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2da,	// (0x000595ef) cell_ai5_widget_list_row_pane_t1

0xf308,	// (0x0005961d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf308,	// (0x0005961d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec8,	// (0x0005a1dd) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec8,	// (0x0005a1dd) cell_ai5_widget_list_row_pane_t

0x4ab6,	// (0x0004edcb) main_fep_vtchi_ss_pane

0xf34c,	// (0x00059661) popup_fep_char_pre_window

0xf354,	// (0x00059669) popup_fep_ituss_window

0xf375,	// (0x0005968a) popup_fep_vkbss_window

0xf394,	// (0x000596a9) grid_vkbss_keypad_pane_ParamLimits

0xf394,	// (0x000596a9) grid_vkbss_keypad_pane

0xf3a4,	// (0x000596b9) ituss_keypad_pane

0x73e1,	// (0x000516f6) aid_vkbss_key_offset_ParamLimits

0x73e1,	// (0x000516f6) aid_vkbss_key_offset

0x73ed,	// (0x00051702) cell_vkbss_key_pane_ParamLimits

0x73ed,	// (0x00051702) cell_vkbss_key_pane

0x9b3f,	// (0x00053e54) bg_cell_vkbss_key_g1_ParamLimits

0x9b3f,	// (0x00053e54) bg_cell_vkbss_key_g1

0xf3b3,	// (0x000596c8) cell_vkbss_key_3p_pane_ParamLimits

0xf3b3,	// (0x000596c8) cell_vkbss_key_3p_pane

0xf3cd,	// (0x000596e2) cell_vkbss_key_g1_ParamLimits

0xf3cd,	// (0x000596e2) cell_vkbss_key_g1

0xf3e7,	// (0x000596fc) cell_vkbss_key_t1_ParamLimits

0xf3e7,	// (0x000596fc) cell_vkbss_key_t1

0x7403,	// (0x00051718) cell_ituss_key_pane_ParamLimits

0x7403,	// (0x00051718) cell_ituss_key_pane

0xf412,	// (0x00059727) bg_cell_ituss_key_g1_ParamLimits

0xf412,	// (0x00059727) bg_cell_ituss_key_g1

0xf41e,	// (0x00059733) cell_ituss_key_pane_g1_ParamLimits

0xf41e,	// (0x00059733) cell_ituss_key_pane_g1

0x7414,	// (0x00051729) cell_ituss_key_pane_g2_ParamLimits

0x7414,	// (0x00051729) cell_ituss_key_pane_g2

0x0002,

0xfecf,	// (0x0005a1e4) cell_ituss_key_pane_g_ParamLimits

0xfecf,	// (0x0005a1e4) cell_ituss_key_pane_g

0x7440,	// (0x00051755) cell_ituss_key_t1_ParamLimits

0x7440,	// (0x00051755) cell_ituss_key_t1

0x747a,	// (0x0005178f) cell_ituss_key_t2_ParamLimits

0x747a,	// (0x0005178f) cell_ituss_key_t2

0x74ab,	// (0x000517c0) cell_ituss_key_t3_ParamLimits

0x74ab,	// (0x000517c0) cell_ituss_key_t3

0x747a,	// (0x0005178f) cell_ituss_key_t4_ParamLimits

0x747a,	// (0x0005178f) cell_ituss_key_t4

0x0004,

0xfed6,	// (0x0005a1eb) cell_ituss_key_t_ParamLimits

0xfed6,	// (0x0005a1eb) cell_ituss_key_t

0xf444,	// (0x00059759) cell_vkbss_key_3p_pane_g1

0xf44c,	// (0x00059761) cell_vkbss_key_3p_pane_g2

0xf454,	// (0x00059769) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee1,	// (0x0005a1f6) cell_vkbss_key_3p_pane_g

0x4ab6,	// (0x0004edcb) bg_popup_fep_char_preview_window_cp02

0x74ee,	// (0x00051803) popup_fep_char_pre_window_t1

0xe8b2,	// (0x00058bc7) main_ai5_sk_pane

0xef45,	// (0x0005925a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef51,	// (0x00059266) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef66,	// (0x0005927b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef72,	// (0x00059287) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x008a,	// (0x0004a39f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef7e,	// (0x00059293) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8832,	// (0x00052b47) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf45c,	// (0x00059771) main_ai5_sk_pane_g1

0xa1a6,	// (0x000544bb) popup_query_code_window_g1

0xf36a,	// (0x0005967f) popup_fep_vkb_icf_pane

0xf37e,	// (0x00059693) popup_fep_vtchi_icf_pane

0xf465,	// (0x0005977a) bg_icf_pane

0xf471,	// (0x00059786) list_vkb_icf_pane

0xf47d,	// (0x00059792) bg_icf_pane_cp01

0xf490,	// (0x000597a5) vtchi_icf_list_pane

0xf4a0,	// (0x000597b5) list_vkb_icf_pane_t1_ParamLimits

0xf4a0,	// (0x000597b5) list_vkb_icf_pane_t1

0xf4b8,	// (0x000597cd) vtchi_icf_list_pane_t1_ParamLimits

0xf4b8,	// (0x000597cd) vtchi_icf_list_pane_t1

0xf354,	// (0x00059669) popup_fep_ituss_window_ParamLimits

0xf37e,	// (0x00059693) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a4,	// (0x000596b9) ituss_keypad_pane_ParamLimits

0x73d5,	// (0x000516ea) ituss_sks_pane

0xf465,	// (0x0005977a) bg_icf_pane_ParamLimits

0xf330,	// (0x00059645) icf_edit_indi_pane_ParamLimits

0xf330,	// (0x00059645) icf_edit_indi_pane

0xf471,	// (0x00059786) list_vkb_icf_pane_ParamLimits

0xf47d,	// (0x00059792) bg_icf_pane_cp01_ParamLimits

0xf33f,	// (0x00059654) icf_edit_indi_pane_cp01_ParamLimits

0xf33f,	// (0x00059654) icf_edit_indi_pane_cp01

0xf498,	// (0x000597ad) vtchi_query_pane

0xc50b,	// (0x00056820) icf_edit_indi_pane_g1_ParamLimits

0xc50b,	// (0x00056820) icf_edit_indi_pane_g1

0xf531,	// (0x00059846) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x00059846) icf_edit_indi_pane_g2

0x0001,

0x00a8,	// (0x0004a3bd) icf_edit_indi_pane_g_ParamLimits

0x00a8,	// (0x0004a3bd) icf_edit_indi_pane_g

0xf540,	// (0x00059855) icf_edit_indi_pane_t1

0xf4da,	// (0x000597ef) bg_input_focus_pane_cp042

0x8755,	// (0x00052a6a) vtchi_button_pane

0xf4e3,	// (0x000597f8) vtchi_query_pane_t1

0xf4f1,	// (0x00059806) vtchi_query_pane_t2

0xf4ff,	// (0x00059814) vtchi_query_pane_t3

0x0002,

0xfee8,	// (0x0005a1fd) vtchi_query_pane_t

0x4ab6,	// (0x0004edcb) bg_button_pane_cp13

0xf50d,	// (0x00059822) vtchi_button_pane_g1

0x74fd,	// (0x00051812) ituss_sks_pane_g1

0x7508,	// (0x0005181d) ituss_sks_pane_g2

0x0001,

0xfeef,	// (0x0005a204) ituss_sks_pane_g

0xf515,	// (0x0005982a) ituss_sks_pane_t1

0xf523,	// (0x00059838) ituss_sks_pane_t2

0x0001,

0xfef4,	// (0x0005a209) ituss_sks_pane_t

0xbce7,	// (0x00055ffc) indicator_nsta_pane_cp_g1

0xbcf0,	// (0x00056005) indicator_nsta_pane_cp_g2

0xbcf8,	// (0x0005600d) indicator_nsta_pane_cp_g3

0xbd00,	// (0x00056015) indicator_nsta_pane_cp_g4

0xbd08,	// (0x0005601d) indicator_nsta_pane_cp_g5

0xbd08,	// (0x0005601d) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x00059dcb) indicator_nsta_pane_cp_g

0xe47b,	// (0x00058790) cell_graphic2_pane_t2_ParamLimits

0xe47b,	// (0x00058790) cell_graphic2_pane_t2

0x0001,

0xfdcf,	// (0x0005a0e4) cell_graphic2_pane_t_ParamLimits

0xfdcf,	// (0x0005a0e4) cell_graphic2_pane_t

0xe4a8,	// (0x000587bd) cell_graphic2_control_pane_t1

0x8f38,	// (0x0005324d) signal_pane_g3_ParamLimits

0x8f38,	// (0x0005324d) signal_pane_g3

0x8f4a,	// (0x0005325f) signal_pane_g4_ParamLimits

0x8f4a,	// (0x0005325f) signal_pane_g4

0xf31a,	// (0x0005962f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf31a,	// (0x0005962f) cell_ai5_widget_list_row_pane_t3

0xf432,	// (0x00059747) cell_ituss_key_pane_t1_ParamLimits

0xf432,	// (0x00059747) cell_ituss_key_pane_t1

0x9dd8,	// (0x000540ed) form_field_data_wide_pane_vc_t2_ParamLimits

0x9dd8,	// (0x000540ed) form_field_data_wide_pane_vc_t2

0x9dec,	// (0x00054101) form_field_data_wide_pane_vc_t3_ParamLimits

0x9dec,	// (0x00054101) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00059b1e) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00059b1e) form_field_data_wide_pane_vc_t

0xb9b3,	// (0x00055cc8) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9b3,	// (0x00055cc8) form_field_slider_wide_pane_vc_t3

0xba8d,	// (0x00055da2) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba8d,	// (0x00055da2) form_field_popup_wide_pane_vc_t2

0xbaa4,	// (0x00055db9) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbaa4,	// (0x00055db9) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x00059dba) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x00059dba) form_field_popup_wide_pane_vc_t

0x720d,	// (0x00051522) aid_fshwr2_btn_pane_ParamLimits

0x7219,	// (0x0005152e) aid_fshwr2_syb_pane_ParamLimits

0x7225,	// (0x0005153a) aid_fshwr2_txt_pane_ParamLimits

0x6a58,	// (0x00050d6d) fshwr2_bg_pane_ParamLimits

0x7231,	// (0x00051546) fshwr2_func_candi_pane_ParamLimits

0x7246,	// (0x0005155b) fshwr2_hwr_syb_pane_ParamLimits

0x7256,	// (0x0005156b) fshwr2_icf_pane_ParamLimits

0x7a94,	// (0x00051da9) list_double_graphic_pane_vc_g4_ParamLimits

0x7a94,	// (0x00051da9) list_double_graphic_pane_vc_g4

0x7434,	// (0x00051749) cell_ituss_key_pane_g3_ParamLimits

0x7434,	// (0x00051749) cell_ituss_key_pane_g3

0x74dc,	// (0x000517f1) cell_ituss_key_t5_ParamLimits

0x74dc,	// (0x000517f1) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
